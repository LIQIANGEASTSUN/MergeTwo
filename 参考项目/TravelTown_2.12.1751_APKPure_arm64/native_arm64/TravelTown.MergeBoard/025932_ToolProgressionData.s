; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25932 Merger.MergeBoard.Data.ToolProgressionData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A174 | public int get_CompletableCount() { }
; bytes=12 sha256=b8da8f02477f82da9a8c9954b490804a7e245146ec90e899da0c523a7584cecb status=arm64_complete_bound indexed_start=True
0x06A9A174: 08244229  ldp w8, w9, [x0, #0x10]
0x06A9A178: 000dc91a  sdiv w0, w8, w9
0x06A9A17C: c0035fd6  ret

; RVA 0x6A84D70 | public int get_IncompletableCount() { }
; bytes=16 sha256=628197e872f11f3fb85cae6970ed5b9fef3aa9ca07955ceaafe8ff197d838ff0 status=arm64_complete_bound indexed_start=True
0x06A84D70: 08244229  ldp w8, w9, [x0, #0x10]
0x06A84D74: 0a0dc91a  sdiv w10, w8, w9
0x06A84D78: 40a1091b  msub w0, w10, w9, w8
0x06A84D7C: c0035fd6  ret

; RVA 0x6A84E10 | public int get_RemainingMergeValue() { }
; bytes=24 sha256=7f9061c0424e35d35ac8947469a9fa4a0ba10104346e3e04bfc7a190ff64f3e0 status=arm64_complete_bound indexed_start=True
0x06A84E10: 09204229  ldp w9, w8, [x0, #0x10]
0x06A84E14: 2a0dc81a  sdiv w10, w9, w8
0x06A84E18: e903094b  neg w9, w9
0x06A84E1C: 4925081b  madd w9, w10, w8, w9
0x06A84E20: 0001090b  add w0, w8, w9
0x06A84E24: c0035fd6  ret

; RVA 0x6A9A180 | public void .ctor() { }
; bytes=8 sha256=0f3623d5d9e1bac25e3b90a3b0b009ec949f2e5a622a69f93292f65e5015edb1 status=arm64_complete_bound indexed_start=True
0x06A9A180: e1031faa  mov x1, xzr
0x06A9A184: 1e01b117  b #0x56da5fc

