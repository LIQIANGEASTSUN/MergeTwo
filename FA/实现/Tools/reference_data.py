"""Read the two generated configuration formats without executing Lua."""
import json
import re


def read_config(path):
    text = path.read_text(encoding='utf-8-sig')
    block = re.search(r'\[(=*)\[(.*?)\]\1\]', text, re.S)
    if block and 'table.deserialize' in text:
        return json.loads(block.group(2))
    tokens = re.findall(r'"(?:\\.|[^"\\])*"|\d+(?:\.\d+)?(?:[eE][+-]?\d+)?|[A-Za-z_][A-Za-z_0-9]*|[^\s]', text)
    index = 0

    def consume(expected=None):
        nonlocal index
        value = tokens[index]
        if expected is not None and value != expected:
            raise ValueError(f'{path}: expected {expected!r}, found {value!r} at token {index}')
        index += 1
        return value

    def value():
        token = consume()
        if token == '{':
            entries, sequence = {}, []
            while tokens[index] != '}':
                if tokens[index] == '[':
                    consume('['); key = value(); consume(']'); consume('=')
                    entries[str(key)] = value()
                else:
                    sequence.append(value())
                if tokens[index] in (',', ';'):
                    consume()
                elif tokens[index] != '}':
                    raise ValueError(f'{path}: unsupported Lua table syntax')
            consume('}')
            if entries and sequence:
                raise ValueError(f'{path}: mixed table not supported')
            return entries if entries else sequence
        if token.startswith('"'):
            return json.loads(token)
        if token == '-':
            return -value()
        if token in ('true', 'false', 'nil'):
            return {'true': True, 'false': False, 'nil': None}[token]
        try:
            return float(token) if any(c in token for c in '.eE') else int(token)
        except ValueError as exc:
            raise ValueError(f'{path}: unsupported token {token!r}') from exc

    consume('return')
    result = value()
    if index != len(tokens):
        raise ValueError(f'{path}: trailing Lua statements are not allowed')
    return result
