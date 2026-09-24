; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25912 Merger.MergeBoard.Extensions.MergeBoardEntitiesExtensions
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A98B30 | public static Entity GetEntityAtPosition(IEnumerable<Entity> entities, int position) { }
; bytes=816 sha256=0508b650dd0194a56d013afbf2ac974d4698e98650739c056e36e42b13141934 status=arm64_complete_bound indexed_start=True
0x06A98B30: ff4301d1  sub sp, sp, #0x50
0x06A98B34: fe6701a9  stp x30, x25, [sp, #0x10]
0x06A98B38: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A98B3C: f65703a9  stp x22, x21, [sp, #0x30]
0x06A98B40: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A98B44: 959400d0  adrp x21, #0x7d2a000
0x06A98B48: a8a26039  ldrb w8, [x21, #0x828]
0x06A98B4C: f403012a  mov w20, w1
0x06A98B50: f30300aa  mov x19, x0
0x06A98B54: 48020037  tbnz w8, #0, #0x6a98b9c
0x06A98B58: 005f00d0  adrp x0, #0x767a000
0x06A98B5C: 004842f9  ldr x0, [x0, #0x490]
0x06A98B60: ae9f1b97  bl #0x3180a18
0x06A98B64: a05d00d0  adrp x0, #0x764e000
0x06A98B68: 006444f9  ldr x0, [x0, #0x8c8]
0x06A98B6C: ab9f1b97  bl #0x3180a18
0x06A98B70: 205f00b0  adrp x0, #0x767d000
0x06A98B74: 00f845f9  ldr x0, [x0, #0xbf0]
0x06A98B78: a89f1b97  bl #0x3180a18
0x06A98B7C: 205f00b0  adrp x0, #0x767d000
0x06A98B80: 00fc45f9  ldr x0, [x0, #0xbf8]
0x06A98B84: a59f1b97  bl #0x3180a18
0x06A98B88: a05d00d0  adrp x0, #0x764e000
0x06A98B8C: 007044f9  ldr x0, [x0, #0x8e0]
0x06A98B90: a29f1b97  bl #0x3180a18
0x06A98B94: 28008052  movz w8, #0x1
0x06A98B98: a8a22039  strb w8, [x21, #0x828]
0x06A98B9C: ff0b00b9  str wzr, [sp, #8]
0x06A98BA0: 131000b4  cbz x19, #0x6a98da0
0x06A98BA4: 2a5f00b0  adrp x10, #0x767d000
0x06A98BA8: 680240f9  ldr x8, [x19]
0x06A98BAC: 4af945f9  ldr x10, [x10, #0xbf0]
0x06A98BB0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A98BB4: 410140f9  ldr x1, [x10]
0x06A98BB8: 290100b4  cbz x9, #0x6a98bdc
0x06A98BBC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A98BC0: 4a210091  add x10, x10, #8
0x06A98BC4: 4b815ff8  ldur x11, [x10, #-8]
0x06A98BC8: 7f0101eb  cmp x11, x1
0x06A98BCC: 00010054  b.eq #0x6a98bec
0x06A98BD0: 290500f1  subs x9, x9, #1
0x06A98BD4: 4a410091  add x10, x10, #0x10
0x06A98BD8: 61ffff54  b.ne #0x6a98bc4
0x06A98BDC: e00313aa  mov x0, x19
0x06A98BE0: e2031f2a  mov w2, wzr
0x06A98BE4: cbf71a97  bl #0x3156b10
0x06A98BE8: 04000014  b #0x6a98bf8
0x06A98BEC: 490180b9  ldrsw x9, [x10]
0x06A98BF0: 0811098b  add x8, x8, x9, lsl #4
0x06A98BF4: 00e10491  add x0, x8, #0x138
0x06A98BF8: 080440a9  ldp x8, x1, [x0]
0x06A98BFC: b65d00d0  adrp x22, #0x764e000
0x06A98C00: d66644f9  ldr x22, [x22, #0x8c8]
0x06A98C04: e00313aa  mov x0, x19
0x06A98C08: 00013fd6  blr x8
0x06A98C0C: f30300aa  mov x19, x0
0x06A98C10: a00c00b4  cbz x0, #0x6a98da4
0x06A98C14: b75d00d0  adrp x23, #0x764e000
0x06A98C18: 385f00b0  adrp x24, #0x767d000
0x06A98C1C: 195f00d0  adrp x25, #0x767a000
0x06A98C20: f77244f9  ldr x23, [x23, #0x8e0]
0x06A98C24: 18ff45f9  ldr x24, [x24, #0xbf8]
0x06A98C28: 394b42f9  ldr x25, [x25, #0x490]
0x06A98C2C: 680240f9  ldr x8, [x19]
0x06A98C30: e10240f9  ldr x1, [x23]
0x06A98C34: 095d4279  ldrh w9, [x8, #0x12e]
0x06A98C38: 290100b4  cbz x9, #0x6a98c5c
0x06A98C3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A98C40: 4a210091  add x10, x10, #8
0x06A98C44: 4b815ff8  ldur x11, [x10, #-8]
0x06A98C48: 7f0101eb  cmp x11, x1
0x06A98C4C: 00010054  b.eq #0x6a98c6c
0x06A98C50: 290500f1  subs x9, x9, #1
0x06A98C54: 4a410091  add x10, x10, #0x10
0x06A98C58: 61ffff54  b.ne #0x6a98c44
0x06A98C5C: e00313aa  mov x0, x19
0x06A98C60: e2031f2a  mov w2, wzr
0x06A98C64: abf71a97  bl #0x3156b10
0x06A98C68: 04000014  b #0x6a98c78
0x06A98C6C: 490180b9  ldrsw x9, [x10]
0x06A98C70: 0811098b  add x8, x8, x9, lsl #4
0x06A98C74: 00e10491  add x0, x8, #0x138
0x06A98C78: 080440a9  ldp x8, x1, [x0]
0x06A98C7C: e00313aa  mov x0, x19
0x06A98C80: 00013fd6  blr x8
0x06A98C84: a0040036  tbz w0, #0, #0x6a98d18
0x06A98C88: 680240f9  ldr x8, [x19]
0x06A98C8C: 010340f9  ldr x1, [x24]
0x06A98C90: 095d4279  ldrh w9, [x8, #0x12e]
0x06A98C94: 290100b4  cbz x9, #0x6a98cb8
0x06A98C98: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A98C9C: 4a210091  add x10, x10, #8
0x06A98CA0: 4b815ff8  ldur x11, [x10, #-8]
0x06A98CA4: 7f0101eb  cmp x11, x1
0x06A98CA8: 00010054  b.eq #0x6a98cc8
0x06A98CAC: 290500f1  subs x9, x9, #1
0x06A98CB0: 4a410091  add x10, x10, #0x10
0x06A98CB4: 61ffff54  b.ne #0x6a98ca0
0x06A98CB8: e00313aa  mov x0, x19
0x06A98CBC: e2031f2a  mov w2, wzr
0x06A98CC0: 94f71a97  bl #0x3156b10
0x06A98CC4: 04000014  b #0x6a98cd4
0x06A98CC8: 490180b9  ldrsw x9, [x10]
0x06A98CCC: 0811098b  add x8, x8, x9, lsl #4
0x06A98CD0: 00e10491  add x0, x8, #0x138
0x06A98CD4: 080440a9  ldp x8, x1, [x0]
0x06A98CD8: e00313aa  mov x0, x19
0x06A98CDC: 00013fd6  blr x8
0x06A98CE0: f50300aa  mov x21, x0
0x06A98CE4: c00500b4  cbz x0, #0x6a98d9c
0x06A98CE8: 220340f9  ldr x2, [x25]
0x06A98CEC: e1230091  add x1, sp, #8
0x06A98CF0: e00315aa  mov x0, x21
0x06A98CF4: 7c154697  bl #0x3c1e2e4
0x06A98CF8: e80b40b9  ldr w8, [sp, #8]
0x06A98CFC: 1f01146b  cmp w8, w20
0x06A98D00: e8179f1a  cset w8, eq
0x06A98D04: 0800080a  and w8, w0, w8
0x06A98D08: 28f90736  tbz w8, #0, #0x6a98c2c
0x06A98D0C: f4031faa  mov x20, xzr
0x06A98D10: b30000b5  cbnz x19, #0x6a98d24
0x06A98D14: 1a000014  b #0x6a98d7c
0x06A98D18: f4031faa  mov x20, xzr
0x06A98D1C: f5031faa  mov x21, xzr
0x06A98D20: f30200b4  cbz x19, #0x6a98d7c
0x06A98D24: 680240f9  ldr x8, [x19]
0x06A98D28: c10240f9  ldr x1, [x22]
0x06A98D2C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A98D30: 290100b4  cbz x9, #0x6a98d54
0x06A98D34: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A98D38: 4a210091  add x10, x10, #8
0x06A98D3C: 4b815ff8  ldur x11, [x10, #-8]
0x06A98D40: 7f0101eb  cmp x11, x1
0x06A98D44: 00010054  b.eq #0x6a98d64
0x06A98D48: 290500f1  subs x9, x9, #1
0x06A98D4C: 4a410091  add x10, x10, #0x10
0x06A98D50: 61ffff54  b.ne #0x6a98d3c
0x06A98D54: e00313aa  mov x0, x19
0x06A98D58: e2031f2a  mov w2, wzr
0x06A98D5C: 6df71a97  bl #0x3156b10
0x06A98D60: 04000014  b #0x6a98d70
0x06A98D64: 490180b9  ldrsw x9, [x10]
0x06A98D68: 0811098b  add x8, x8, x9, lsl #4
0x06A98D6C: 00e10491  add x0, x8, #0x138
0x06A98D70: 080440a9  ldp x8, x1, [x0]
0x06A98D74: e00313aa  mov x0, x19
0x06A98D78: 00013fd6  blr x8
0x06A98D7C: 740100b5  cbnz x20, #0x6a98da8
0x06A98D80: e00315aa  mov x0, x21
0x06A98D84: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A98D88: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A98D8C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A98D90: fe6741a9  ldp x30, x25, [sp, #0x10]
0x06A98D94: ff430191  add sp, sp, #0x50
0x06A98D98: c0035fd6  ret
0x06A98D9C: c49f1b97  bl #0x3180cac
0x06A98DA0: c39f1b97  bl #0x3180cac
0x06A98DA4: c29f1b97  bl #0x3180cac
0x06A98DA8: e00314aa  mov x0, x20
0x06A98DAC: be9f1b97  bl #0x3180ca4
0x06A98DB0: 04000014  b #0x6a98dc0
0x06A98DB4: 03000014  b #0x6a98dc0
0x06A98DB8: 02000014  b #0x6a98dc0
0x06A98DBC: 01000014  b #0x6a98dc0
0x06A98DC0: f50300aa  mov x21, x0
0x06A98DC4: 3f040071  cmp w1, #1
0x06A98DC8: c1000054  b.ne #0x6a98de0
0x06A98DCC: e00315aa  mov x0, x21
0x06A98DD0: d0d61c94  bl #0x71ce910
0x06A98DD4: 140040f9  ldr x20, [x0]
0x06A98DD8: d2d61c94  bl #0x71ce920
0x06A98DDC: d0ffff17  b #0x6a98d1c
0x06A98DE0: f4031faa  mov x20, xzr
0x06A98DE4: 02000014  b #0x6a98dec
0x06A98DE8: f50300aa  mov x21, x0
0x06A98DEC: f30200b4  cbz x19, #0x6a98e48
0x06A98DF0: 680240f9  ldr x8, [x19]
0x06A98DF4: c10240f9  ldr x1, [x22]
0x06A98DF8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A98DFC: 290100b4  cbz x9, #0x6a98e20
0x06A98E00: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A98E04: 4a210091  add x10, x10, #8
0x06A98E08: 4b815ff8  ldur x11, [x10, #-8]
0x06A98E0C: 7f0101eb  cmp x11, x1
0x06A98E10: 00010054  b.eq #0x6a98e30
0x06A98E14: 290500f1  subs x9, x9, #1
0x06A98E18: 4a410091  add x10, x10, #0x10
0x06A98E1C: 61ffff54  b.ne #0x6a98e08
0x06A98E20: e00313aa  mov x0, x19
0x06A98E24: e2031f2a  mov w2, wzr
0x06A98E28: 3af71a97  bl #0x3156b10
0x06A98E2C: 04000014  b #0x6a98e3c
0x06A98E30: 490180b9  ldrsw x9, [x10]
0x06A98E34: 0811098b  add x8, x8, x9, lsl #4
0x06A98E38: 00e10491  add x0, x8, #0x138
0x06A98E3C: 080440a9  ldp x8, x1, [x0]
0x06A98E40: e00313aa  mov x0, x19
0x06A98E44: 00013fd6  blr x8
0x06A98E48: 740000b5  cbnz x20, #0x6a98e54
0x06A98E4C: e00315aa  mov x0, x21
0x06A98E50: c2321f97  bl #0x3265958
0x06A98E54: e00314aa  mov x0, x20
0x06A98E58: 939f1b97  bl #0x3180ca4
0x06A98E5C: aec10d97  bl #0x2e09514

; RVA 0x6A98E60 | public static void AddEntity(TickContext tickContext, Entity entity, Entity sourceEntity) { }
; bytes=268 sha256=c582496f5bd27317b1f6f9a1863615bde16dcebbf8df70ea1528a5f66fa8774e status=arm64_complete_bound indexed_start=True
0x06A98E60: ff0302d1  sub sp, sp, #0x80
0x06A98E64: fe5f05a9  stp x30, x23, [sp, #0x50]
0x06A98E68: f65706a9  stp x22, x21, [sp, #0x60]
0x06A98E6C: f44f07a9  stp x20, x19, [sp, #0x70]
0x06A98E70: 979400d0  adrp x23, #0x7d2a000
0x06A98E74: d66400d0  adrp x22, #0x7732000
0x06A98E78: e8a66039  ldrb w8, [x23, #0x829]
0x06A98E7C: d6da42f9  ldr x22, [x22, #0x5b0]
0x06A98E80: f50302aa  mov x21, x2
0x06A98E84: f30301aa  mov x19, x1
0x06A98E88: f40300aa  mov x20, x0
0x06A98E8C: 28010037  tbnz w8, #0, #0x6a98eb0
0x06A98E90: 40610090  adrp x0, #0x76c0000
0x06A98E94: 00ac44f9  ldr x0, [x0, #0x958]
0x06A98E98: e09e1b97  bl #0x3180a18
0x06A98E9C: c06400d0  adrp x0, #0x7732000
0x06A98EA0: 00d842f9  ldr x0, [x0, #0x5b0]
0x06A98EA4: dd9e1b97  bl #0x3180a18
0x06A98EA8: 28008052  movz w8, #0x1
0x06A98EAC: e8a62039  strb w8, [x23, #0x829]
0x06A98EB0: 810240ad  ldp q1, q0, [x20]
0x06A98EB4: e0a30091  add x0, sp, #0x28
0x06A98EB8: e10315aa  mov x1, x21
0x06A98EBC: f51700f9  str x21, [sp, #0x28]
0x06A98EC0: e10300ad  stp q1, q0, [sp]
0x06A98EC4: c09e1b97  bl #0x31809c4
0x06A98EC8: e21740f9  ldr x2, [sp, #0x28]
0x06A98ECC: e00740ad  ldp q0, q1, [sp]
0x06A98ED0: c30240f9  ldr x3, [x22]
0x06A98ED4: e0c30091  add x0, sp, #0x30
0x06A98ED8: e10313aa  mov x1, x19
0x06A98EDC: e08701ad  stp q0, q1, [sp, #0x30]
0x06A98EE0: 26b14c97  bl #0x3dc5378
0x06A98EE4: 940240f9  ldr x20, [x20]
0x06A98EE8: 140400b4  cbz x20, #0x6a98f68
0x06A98EEC: 4a610090  adrp x10, #0x76c0000
0x06A98EF0: 880240f9  ldr x8, [x20]
0x06A98EF4: 4aad44f9  ldr x10, [x10, #0x958]
0x06A98EF8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A98EFC: 410140f9  ldr x1, [x10]
0x06A98F00: 290100b4  cbz x9, #0x6a98f24
0x06A98F04: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A98F08: 4a210091  add x10, x10, #8
0x06A98F0C: 4b815ff8  ldur x11, [x10, #-8]
0x06A98F10: 7f0101eb  cmp x11, x1
0x06A98F14: 00010054  b.eq #0x6a98f34
0x06A98F18: 290500f1  subs x9, x9, #1
0x06A98F1C: 4a410091  add x10, x10, #0x10
0x06A98F20: 61ffff54  b.ne #0x6a98f0c
0x06A98F24: 22008052  movz w2, #0x1
0x06A98F28: e00314aa  mov x0, x20
0x06A98F2C: f9f61a97  bl #0x3156b10
0x06A98F30: 05000014  b #0x6a98f44
0x06A98F34: 490140b9  ldr w9, [x10]
0x06A98F38: 29050011  add w9, w9, #1
0x06A98F3C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A98F40: 00e10491  add x0, x8, #0x138
0x06A98F44: 080840a9  ldp x8, x2, [x0]
0x06A98F48: e00314aa  mov x0, x20
0x06A98F4C: e10313aa  mov x1, x19
0x06A98F50: 00013fd6  blr x8
0x06A98F54: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06A98F58: f65746a9  ldp x22, x21, [sp, #0x60]
0x06A98F5C: fe5f45a9  ldp x30, x23, [sp, #0x50]
0x06A98F60: ff030291  add sp, sp, #0x80
0x06A98F64: c0035fd6  ret
0x06A98F68: 519f1b97  bl #0x3180cac

; RVA 0x6A98F6C | public static void RemoveEntity(TickContext tickContext, Entity entity) { }
; bytes=84 sha256=96cbf49246ad752f2b43b5422f9b3ce7317d7922865870d49c9a9f964b001e70 status=arm64_complete_bound indexed_start=True
0x06A98F6C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A98F70: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A98F74: 949400d0  adrp x20, #0x7d2a000
0x06A98F78: 88aa6039  ldrb w8, [x20, #0x82a]
0x06A98F7C: f30301aa  mov x19, x1
0x06A98F80: c8000037  tbnz w8, #0, #0x6a98f98
0x06A98F84: c06400d0  adrp x0, #0x7732000
0x06A98F88: 00dc42f9  ldr x0, [x0, #0x5b8]
0x06A98F8C: a39e1b97  bl #0x3180a18
0x06A98F90: 28008052  movz w8, #0x1
0x06A98F94: 88aa2039  strb w8, [x20, #0x82a]
0x06A98F98: 330100b4  cbz x19, #0x6a98fbc
0x06A98F9C: c86400d0  adrp x8, #0x7732000
0x06A98FA0: 08dd42f9  ldr x8, [x8, #0x5b8]
0x06A98FA4: e00313aa  mov x0, x19
0x06A98FA8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A98FAC: e1031faa  mov x1, xzr
0x06A98FB0: 020140f9  ldr x2, [x8]
0x06A98FB4: fe0742f8  ldr x30, [sp], #0x20
0x06A98FB8: 000f4617  b #0x3c1cbb8
0x06A98FBC: 3c9f1b97  bl #0x3180cac

; RVA 0x6A98FC0 | public static void BlockMovement(TickContext context, Entity entity, int originalPosition) { }
; bytes=244 sha256=d25c2196dd6c5b04333c40bca17e68bc975d64b303d717c5a0088ae17b904d7f status=arm64_complete_bound indexed_start=True
0x06A98FC0: ff0302d1  sub sp, sp, #0x80
0x06A98FC4: fe2300f9  str x30, [sp, #0x40]
0x06A98FC8: f85f05a9  stp x24, x23, [sp, #0x50]
0x06A98FCC: f65706a9  stp x22, x21, [sp, #0x60]
0x06A98FD0: f44f07a9  stp x20, x19, [sp, #0x70]
0x06A98FD4: 989400d0  adrp x24, #0x7d2a000
0x06A98FD8: d76400d0  adrp x23, #0x7732000
0x06A98FDC: d66400d0  adrp x22, #0x7732000
0x06A98FE0: 08af6039  ldrb w8, [x24, #0x82b]
0x06A98FE4: f7e242f9  ldr x23, [x23, #0x5c0]
0x06A98FE8: d6e642f9  ldr x22, [x22, #0x5c8]
0x06A98FEC: f303022a  mov w19, w2
0x06A98FF0: f40301aa  mov x20, x1
0x06A98FF4: f50300aa  mov x21, x0
0x06A98FF8: 88010037  tbnz w8, #0, #0x6a99028
0x06A98FFC: c06400d0  adrp x0, #0x7732000
0x06A99000: 00e442f9  ldr x0, [x0, #0x5c8]
0x06A99004: 859e1b97  bl #0x3180a18
0x06A99008: c06400b0  adrp x0, #0x7732000
0x06A9900C: 00e842f9  ldr x0, [x0, #0x5d0]
0x06A99010: 829e1b97  bl #0x3180a18
0x06A99014: c06400b0  adrp x0, #0x7732000
0x06A99018: 00e042f9  ldr x0, [x0, #0x5c0]
0x06A9901C: 7f9e1b97  bl #0x3180a18
0x06A99020: 28008052  movz w8, #0x1
0x06A99024: 08af2039  strb w8, [x24, #0x82b]
0x06A99028: a10240ad  ldp q1, q0, [x21]
0x06A9902C: e30240f9  ldr x3, [x23]
0x06A99030: e0830091  add x0, sp, #0x20
0x06A99034: e10314aa  mov x1, x20
0x06A99038: e2031faa  mov x2, xzr
0x06A9903C: e10300ad  stp q1, q0, [sp]
0x06A99040: e10301ad  stp q1, q0, [sp, #0x20]
0x06A99044: bcb24c97  bl #0x3dc5b34
0x06A99048: c00240f9  ldr x0, [x22]
0x06A9904C: b50a40f9  ldr x21, [x21, #0x10]
0x06A99050: 149f1b97  bl #0x3180ca0
0x06A99054: e1031faa  mov x1, xzr
0x06A99058: f60300aa  mov x22, x0
0x06A9905C: 6805b197  bl #0x56da5fc
0x06A99060: 960200b4  cbz x22, #0x6a990b0
0x06A99064: f70316aa  mov x23, x22
0x06A99068: f48e01f8  str x20, [x23, #0x18]!
0x06A9906C: e00317aa  mov x0, x23
0x06A99070: e10314aa  mov x1, x20
0x06A99074: 549e1b97  bl #0x31809c4
0x06A99078: f3821fb8  stur w19, [x23, #-8]
0x06A9907C: b50100b4  cbz x21, #0x6a990b0
0x06A99080: c86400b0  adrp x8, #0x7732000
0x06A99084: 08e942f9  ldr x8, [x8, #0x5d0]
0x06A99088: e00315aa  mov x0, x21
0x06A9908C: e10316aa  mov x1, x22
0x06A99090: 020140f9  ldr x2, [x8]
0x06A99094: d4a84c97  bl #0x3dc33e4
0x06A99098: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06A9909C: f65746a9  ldp x22, x21, [sp, #0x60]
0x06A990A0: f85f45a9  ldp x24, x23, [sp, #0x50]
0x06A990A4: fe2340f9  ldr x30, [sp, #0x40]
0x06A990A8: ff030291  add sp, sp, #0x80
0x06A990AC: c0035fd6  ret
0x06A990B0: ff9e1b97  bl #0x3180cac

; RVA 0x6A990BC | public static bool IsNotBeingConsumed(Entity entity, PendingInteractionComponent pendingInteractionComponent) { }
; bytes=120 sha256=f0c40bf119254dec801e25c95e9f1c6652a5cf26ba510c5285eb314aec6360fc status=arm64_complete_bound indexed_start=True
0x06A990BC: ff4301d1  sub sp, sp, #0x50
0x06A990C0: fe5703a9  stp x30, x21, [sp, #0x30]
0x06A990C4: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A990C8: 959400b0  adrp x21, #0x7d2a000
0x06A990CC: a8b26039  ldrb w8, [x21, #0x82c]
0x06A990D0: f30302aa  mov x19, x2
0x06A990D4: f40300aa  mov x20, x0
0x06A990D8: c8000037  tbnz w8, #0, #0x6a990f0
0x06A990DC: 005f00b0  adrp x0, #0x767a000
0x06A990E0: 004442f9  ldr x0, [x0, #0x488]
0x06A990E4: 4d9e1b97  bl #0x3180a18
0x06A990E8: 28008052  movz w8, #0x1
0x06A990EC: a8b22039  strb w8, [x21, #0x82c]
0x06A990F0: 140200b4  cbz x20, #0x6a99130
0x06A990F4: 085f00b0  adrp x8, #0x767a000
0x06A990F8: 084542f9  ldr x8, [x8, #0x488]
0x06A990FC: e00314aa  mov x0, x20
0x06A99100: 010140f9  ldr x1, [x8]
0x06A99104: e8030091  mov x8, sp
0x06A99108: 52084697  bl #0x3c1b250
0x06A9910C: e00740f9  ldr x0, [sp, #8]
0x06A99110: e10313aa  mov x1, x19
0x06A99114: e2031faa  mov x2, xzr
0x06A99118: bb77a997  bl #0x54f7004
0x06A9911C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A99120: fe5743a9  ldp x30, x21, [sp, #0x30]
0x06A99124: 00000012  and w0, w0, #1
0x06A99128: ff430191  add sp, sp, #0x50
0x06A9912C: c0035fd6  ret
0x06A99130: df9e1b97  bl #0x3180cac

