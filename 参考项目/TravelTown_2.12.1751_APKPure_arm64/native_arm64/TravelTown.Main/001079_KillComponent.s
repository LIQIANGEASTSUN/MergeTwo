; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1079 MergeEngine.ECS.Components.Items.KillComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FD4E8 | public string get_Source() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x068FD4E8: 001040f9  ldr x0, [x0, #0x20]
0x068FD4EC: c0035fd6  ret

; RVA 0x68FD4F0 | public void set_Source(string value) { }
; bytes=8 sha256=3ba2cbb900a0e8aafae91171e52bd63690f6e3c5fef7f872d5dd7c8c4f2cb18b status=arm64_complete_bound indexed_start=True
0x068FD4F0: 010c02f8  str x1, [x0, #0x20]!
0x068FD4F4: 340d2217  b #0x31809c4

; RVA 0x68FD4F8 | public void .ctor(Entity entity) { }
; bytes=48 sha256=b968bc84387e9f66a4ac2158b77312712d7e1fdc917d64660c125d021be74212 status=arm64_complete_bound indexed_start=True
0x068FD4F8: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FD4FC: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FD500: f30301aa  mov x19, x1
0x068FD504: e1031faa  mov x1, xzr
0x068FD508: f40300aa  mov x20, x0
0x068FD50C: 3c74b797  bl #0x56da5fc
0x068FD510: 930e01f8  str x19, [x20, #0x10]!
0x068FD514: e00314aa  mov x0, x20
0x068FD518: e10313aa  mov x1, x19
0x068FD51C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FD520: fe0742f8  ldr x30, [sp], #0x20
0x068FD524: 280d2217  b #0x31809c4

