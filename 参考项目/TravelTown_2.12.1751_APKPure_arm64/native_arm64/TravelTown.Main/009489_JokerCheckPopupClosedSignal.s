; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9489 Merger.Game.Signal.Combinations.JokerCheckPopupClosedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676E3E0 | public string get_UserAnswer() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676E3E0: 000840f9  ldr x0, [x0, #0x10]
0x0676E3E4: c0035fd6  ret

; RVA 0x676E3E8 | public void set_UserAnswer(string value) { }
; bytes=8 sha256=3df68838ec8e97ea95146f1fb83c2c8d847ded5e075b55d0062ef30834f38fc3 status=arm64_complete_bound indexed_start=True
0x0676E3E8: 010c01f8  str x1, [x0, #0x10]!
0x0676E3EC: 76492817  b #0x31809c4

; RVA 0x676E3F0 | public void .ctor(string userAnswer) { }
; bytes=48 sha256=f5dbf04f64e3bf08f1cf9fe13bef2664cc4aef60cb21bb5f367a6bd12909be36 status=arm64_complete_bound indexed_start=True
0x0676E3F0: fe0f1ef8  str x30, [sp, #-0x20]!
0x0676E3F4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676E3F8: f30301aa  mov x19, x1
0x0676E3FC: e1031faa  mov x1, xzr
0x0676E400: f40300aa  mov x20, x0
0x0676E404: 7eb0bd97  bl #0x56da5fc
0x0676E408: 930e01f8  str x19, [x20, #0x10]!
0x0676E40C: e00314aa  mov x0, x20
0x0676E410: e10313aa  mov x1, x19
0x0676E414: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676E418: fe0742f8  ldr x30, [sp], #0x20
0x0676E41C: 6a492817  b #0x31809c4

