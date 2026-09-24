; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 575 MergeEngine.Model.Configuration.StartingBoardConfigurationModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x61428EC | public void .ctor() { }
; bytes=72 sha256=d240e1a9eed76799a11e4656e23379c0e76b5affb353075fec16de91b0bbaa39 status=arm64_complete_bound indexed_start=True
0x061428EC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x061428F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x061428F4: 14df00d0  adrp x20, #0x7d24000
0x061428F8: d5ac00b0  adrp x21, #0x76db000
0x061428FC: 889e5739  ldrb w8, [x20, #0x5e7]
0x06142900: b5d642f9  ldr x21, [x21, #0x5a8]
0x06142904: f30300aa  mov x19, x0
0x06142908: c8000037  tbnz w8, #0, #0x6142920
0x0614290C: c0ac00b0  adrp x0, #0x76db000
0x06142910: 00d442f9  ldr x0, [x0, #0x5a8]
0x06142914: 41f84097  bl #0x3180a18
0x06142918: 28008052  movz w8, #0x1
0x0614291C: 889e1739  strb w8, [x20, #0x5e7]
0x06142920: a10240f9  ldr x1, [x21]
0x06142924: e00313aa  mov x0, x19
0x06142928: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0614292C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06142930: 49798317  b #0x4220e54

