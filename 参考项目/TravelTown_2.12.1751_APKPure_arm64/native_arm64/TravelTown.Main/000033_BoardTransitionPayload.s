; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33 .BoardTransitionPayload
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FD4240 | public void .ctor(string reason) { }
; bytes=48 sha256=91cae0424d4f2d862694b6924fd1e2b7da91eb203de9d61a5b7ded438218cb95 status=arm64_complete_bound indexed_start=True
0x05FD4240: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FD4244: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FD4248: f30301aa  mov x19, x1
0x05FD424C: e1031faa  mov x1, xzr
0x05FD4250: f40300aa  mov x20, x0
0x05FD4254: ea18dc97  bl #0x56da5fc
0x05FD4258: 930e01f8  str x19, [x20, #0x10]!
0x05FD425C: e00314aa  mov x0, x20
0x05FD4260: e10313aa  mov x1, x19
0x05FD4264: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FD4268: fe0742f8  ldr x30, [sp], #0x20
0x05FD426C: d6b14617  b #0x31809c4

