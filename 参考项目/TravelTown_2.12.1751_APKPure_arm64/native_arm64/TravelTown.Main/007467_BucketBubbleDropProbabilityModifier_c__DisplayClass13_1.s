; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7467 .BucketBubbleDropProbabilityModifier.<>c__DisplayClass13_1
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x657FB58 | public void .ctor() { }
; bytes=8 sha256=362775e5ef5cc06156287491d63a05271833658560dd8eecc271456442319d1b status=arm64_complete_bound indexed_start=True
0x0657FB58: e1031faa  mov x1, xzr
0x0657FB5C: a86ac517  b #0x56da5fc

; RVA 0x657FB60 | internal bool <CalculateConversionRatio>b__6(Bucket bucket) { }
; bytes=64 sha256=e4a8d5b765de99c635b1adfe07ab2fb4132ac9393438d2ee5bfda5d6c4853b88 status=arm64_complete_bound indexed_start=True
0x0657FB60: fe0f1ff8  str x30, [sp, #-0x10]!
0x0657FB64: 080840f9  ldr x8, [x0, #0x10]
0x0657FB68: a80100b4  cbz x8, #0x657fb9c
0x0657FB6C: 810100b4  cbz x1, #0x657fb9c
0x0657FB70: 081140b9  ldr w8, [x8, #0x10]
0x0657FB74: 291040b9  ldr w9, [x1, #0x10]
0x0657FB78: 3f01086b  cmp w9, w8
0x0657FB7C: 6d000054  b.le #0x657fb88
0x0657FB80: e0031f2a  mov w0, wzr
0x0657FB84: 04000014  b #0x657fb94
0x0657FB88: 291440b9  ldr w9, [x1, #0x14]
0x0657FB8C: 3f01086b  cmp w9, w8
0x0657FB90: e0b79f1a  cset w0, ge
0x0657FB94: fe0741f8  ldr x30, [sp], #0x10
0x0657FB98: c0035fd6  ret
0x0657FB9C: 44043097  bl #0x3180cac

