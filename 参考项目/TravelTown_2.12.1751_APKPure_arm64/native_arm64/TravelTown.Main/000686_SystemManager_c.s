; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 686 .SystemManager.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x63A7E78 | private static void .cctor() { }
; bytes=104 sha256=3bcf6c0a08ee326fdc11c9fb6c8956e96aafed21b05911c185afcc57efb56be8 status=arm64_complete_bound indexed_start=True
0x063A7E78: fe0f1ef8  str x30, [sp, #-0x20]!
0x063A7E7C: f44f01a9  stp x20, x19, [sp, #0x10]
0x063A7E80: f3cb00f0  adrp x19, #0x7d26000
0x063A7E84: 549a00d0  adrp x20, #0x76f1000
0x063A7E88: 68d24539  ldrb w8, [x19, #0x174]
0x063A7E8C: 943a40f9  ldr x20, [x20, #0x70]
0x063A7E90: c8000037  tbnz w8, #0, #0x63a7ea8
0x063A7E94: 409a00d0  adrp x0, #0x76f1000
0x063A7E98: 003840f9  ldr x0, [x0, #0x70]
0x063A7E9C: df623797  bl #0x3180a18
0x063A7EA0: 28008052  movz w8, #0x1
0x063A7EA4: 68d20539  strb w8, [x19, #0x174]
0x063A7EA8: 800240f9  ldr x0, [x20]
0x063A7EAC: 7d633797  bl #0x3180ca0
0x063A7EB0: e1031faa  mov x1, xzr
0x063A7EB4: f30300aa  mov x19, x0
0x063A7EB8: d1c9cc97  bl #0x56da5fc
0x063A7EBC: 880240f9  ldr x8, [x20]
0x063A7EC0: e10313aa  mov x1, x19
0x063A7EC4: 085d40f9  ldr x8, [x8, #0xb8]
0x063A7EC8: 130100f9  str x19, [x8]
0x063A7ECC: 880240f9  ldr x8, [x20]
0x063A7ED0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063A7ED4: 005d40f9  ldr x0, [x8, #0xb8]
0x063A7ED8: fe0742f8  ldr x30, [sp], #0x20
0x063A7EDC: ba623717  b #0x31809c4

; RVA 0x63A7EE0 | public void .ctor() { }
; bytes=8 sha256=d70c09652ede9b3a9e0c09cb163dbadd21a2bd635ffec16322b309d35f76b0a3 status=arm64_complete_bound indexed_start=True
0x063A7EE0: e1031faa  mov x1, xzr
0x063A7EE4: c6c9cc17  b #0x56da5fc

; RVA 0x63A7EE8 | internal int <SortSystems>b__17_0(ITickableSystem system1, ITickableSystem system2) { }
; bytes=264 sha256=080624af988ca5e751cea4211aa59d7309818bb36903df16a6dcad48b74f2a9d status=arm64_complete_bound indexed_start=True
0x063A7EE8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x063A7EEC: f44f01a9  stp x20, x19, [sp, #0x10]
0x063A7EF0: f5cb00f0  adrp x21, #0x7d26000
0x063A7EF4: a8d64539  ldrb w8, [x21, #0x175]
0x063A7EF8: f40302aa  mov x20, x2
0x063A7EFC: f30301aa  mov x19, x1
0x063A7F00: c8000037  tbnz w8, #0, #0x63a7f18
0x063A7F04: a0960090  adrp x0, #0x767b000
0x063A7F08: 001043f9  ldr x0, [x0, #0x620]
0x063A7F0C: c3623797  bl #0x3180a18
0x063A7F10: 28008052  movz w8, #0x1
0x063A7F14: a8d60539  strb w8, [x21, #0x175]
0x063A7F18: b40600b4  cbz x20, #0x63a7fec
0x063A7F1C: b5960090  adrp x21, #0x767b000
0x063A7F20: 880240f9  ldr x8, [x20]
0x063A7F24: b51243f9  ldr x21, [x21, #0x620]
0x063A7F28: 095d4279  ldrh w9, [x8, #0x12e]
0x063A7F2C: a10240f9  ldr x1, [x21]
0x063A7F30: 290100b4  cbz x9, #0x63a7f54
0x063A7F34: 0a5940f9  ldr x10, [x8, #0xb0]
0x063A7F38: 4a210091  add x10, x10, #8
0x063A7F3C: 4b815ff8  ldur x11, [x10, #-8]
0x063A7F40: 7f0101eb  cmp x11, x1
0x063A7F44: 00010054  b.eq #0x63a7f64
0x063A7F48: 290500f1  subs x9, x9, #1
0x063A7F4C: 4a410091  add x10, x10, #0x10
0x063A7F50: 61ffff54  b.ne #0x63a7f3c
0x063A7F54: e00314aa  mov x0, x20
0x063A7F58: e2031f2a  mov w2, wzr
0x063A7F5C: edba3697  bl #0x3156b10
0x063A7F60: 04000014  b #0x63a7f70
0x063A7F64: 490180b9  ldrsw x9, [x10]
0x063A7F68: 0811098b  add x8, x8, x9, lsl #4
0x063A7F6C: 00e10491  add x0, x8, #0x138
0x063A7F70: 080440a9  ldp x8, x1, [x0]
0x063A7F74: e00314aa  mov x0, x20
0x063A7F78: 00013fd6  blr x8
0x063A7F7C: 930300b4  cbz x19, #0x63a7fec
0x063A7F80: 680240f9  ldr x8, [x19]
0x063A7F84: a10240f9  ldr x1, [x21]
0x063A7F88: f403002a  mov w20, w0
0x063A7F8C: 095d4279  ldrh w9, [x8, #0x12e]
0x063A7F90: 290100b4  cbz x9, #0x63a7fb4
0x063A7F94: 0a5940f9  ldr x10, [x8, #0xb0]
0x063A7F98: 4a210091  add x10, x10, #8
0x063A7F9C: 4b815ff8  ldur x11, [x10, #-8]
0x063A7FA0: 7f0101eb  cmp x11, x1
0x063A7FA4: 00010054  b.eq #0x63a7fc4
0x063A7FA8: 290500f1  subs x9, x9, #1
0x063A7FAC: 4a410091  add x10, x10, #0x10
0x063A7FB0: 61ffff54  b.ne #0x63a7f9c
0x063A7FB4: e00313aa  mov x0, x19
0x063A7FB8: e2031f2a  mov w2, wzr
0x063A7FBC: d5ba3697  bl #0x3156b10
0x063A7FC0: 04000014  b #0x63a7fd0
0x063A7FC4: 490180b9  ldrsw x9, [x10]
0x063A7FC8: 0811098b  add x8, x8, x9, lsl #4
0x063A7FCC: 00e10491  add x0, x8, #0x138
0x063A7FD0: 080440a9  ldp x8, x1, [x0]
0x063A7FD4: e00313aa  mov x0, x19
0x063A7FD8: 00013fd6  blr x8
0x063A7FDC: 8002004b  sub w0, w20, w0
0x063A7FE0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063A7FE4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x063A7FE8: c0035fd6  ret
0x063A7FEC: 30633797  bl #0x3180cac

; RVA 0x63A7FF0 | internal void <InitializeAll>b__18_1(KeyValuePair<Type, SystemBase> keyValue) { }
; bytes=68 sha256=d3b66e3e1148b999b2f0f8ad5077c5873c1db8fb9eb4601b389d7898cf90b301 status=arm64_complete_bound indexed_start=True
0x063A7FF0: fe0f1ef8  str x30, [sp, #-0x20]!
0x063A7FF4: f44f01a9  stp x20, x19, [sp, #0x10]
0x063A7FF8: f4cb00f0  adrp x20, #0x7d26000
0x063A7FFC: 88da4539  ldrb w8, [x20, #0x176]
0x063A8000: f30302aa  mov x19, x2
0x063A8004: c8000037  tbnz w8, #0, #0x63a801c
0x063A8008: 409a00b0  adrp x0, #0x76f1000
0x063A800C: 008040f9  ldr x0, [x0, #0x100]
0x063A8010: 82623797  bl #0x3180a18
0x063A8014: 28008052  movz w8, #0x1
0x063A8018: 88da0539  strb w8, [x20, #0x176]
0x063A801C: b30000b4  cbz x19, #0x63a8030
0x063A8020: e00313aa  mov x0, x19
0x063A8024: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063A8028: fe0742f8  ldr x30, [sp], #0x20
0x063A802C: 7bfbff17  b #0x63a6e18
0x063A8030: 1f633797  bl #0x3180cac

