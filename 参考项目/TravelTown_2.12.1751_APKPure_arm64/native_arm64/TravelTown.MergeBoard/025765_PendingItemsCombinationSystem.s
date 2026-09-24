; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25765 Merger.MergeBoard.Systems.PendingItemsCombinationSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A71E58 | public void Tick(TickContext context) { }
; bytes=496 sha256=4e9bfba6795e6ec19495a0a2bc95b41fd7775cae63e778931b2a65c77754f576 status=arm64_complete_bound indexed_start=True
0x06A71E58: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x06A71E5C: f65701a9  stp x22, x21, [sp, #0x10]
0x06A71E60: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A71E64: ffc307d1  sub sp, sp, #0x1f0
0x06A71E68: d59500b0  adrp x21, #0x7d2a000
0x06A71E6C: a8aa5b39  ldrb w8, [x21, #0x6ea]
0x06A71E70: f40301aa  mov x20, x1
0x06A71E74: f30300aa  mov x19, x0
0x06A71E78: 28010037  tbnz w8, #0, #0x6a71e9c
0x06A71E7C: 00660090  adrp x0, #0x7731000
0x06A71E80: 007c41f9  ldr x0, [x0, #0x2f8]
0x06A71E84: e53a1c97  bl #0x3180a18
0x06A71E88: 00660090  adrp x0, #0x7731000
0x06A71E8C: 005c40f9  ldr x0, [x0, #0xb8]
0x06A71E90: e23a1c97  bl #0x3180a18
0x06A71E94: 28008052  movz w8, #0x1
0x06A71E98: a8aa1b39  strb w8, [x21, #0x6ea]
0x06A71E9C: 00e4006f  movi v0.2d, #0000000000000000
0x06A71EA0: ff7f1ea9  stp xzr, xzr, [sp, #0x1e0]
0x06A71EA4: e0030ead  stp q0, q0, [sp, #0x1c0]
0x06A71EA8: e0030dad  stp q0, q0, [sp, #0x1a0]
0x06A71EAC: 800640f9  ldr x0, [x20, #8]
0x06A71EB0: a00c00b4  cbz x0, #0x6a72044
0x06A71EB4: 08660090  adrp x8, #0x7731000
0x06A71EB8: 085d40f9  ldr x8, [x8, #0xb8]
0x06A71EBC: e1a30791  add x1, sp, #0x1e8
0x06A71EC0: 020140f9  ldr x2, [x8]
0x06A71EC4: 574c4d97  bl #0x3dc5020
0x06A71EC8: 00080036  tbz w0, #0, #0x6a71fc8
0x06A71ECC: 800640ad  ldp q0, q1, [x20]
0x06A71ED0: e8f740f9  ldr x8, [sp, #0x1e8]
0x06A71ED4: e0070cad  stp q0, q1, [sp, #0x180]
0x06A71ED8: 680b00b4  cbz x8, #0x6a72044
0x06A71EDC: e0074cad  ldp q0, q1, [sp, #0x180]
0x06A71EE0: 011140b9  ldr w1, [x8, #0x10]
0x06A71EE4: e0830591  add x0, sp, #0x160
0x06A71EE8: e2030791  add x2, sp, #0x1c0
0x06A71EEC: e0070bad  stp q0, q1, [sp, #0x160]
0x06A71EF0: 56000094  bl #0x6a72048
0x06A71EF4: a0060036  tbz w0, #0, #0x6a71fc8
0x06A71EF8: 800640ad  ldp q0, q1, [x20]
0x06A71EFC: e8f740f9  ldr x8, [sp, #0x1e8]
0x06A71F00: e0070cad  stp q0, q1, [sp, #0x180]
0x06A71F04: 080a00b4  cbz x8, #0x6a72044
0x06A71F08: e0074cad  ldp q0, q1, [sp, #0x180]
0x06A71F0C: 011540b9  ldr w1, [x8, #0x14]
0x06A71F10: e0030591  add x0, sp, #0x140
0x06A71F14: e2830691  add x2, sp, #0x1a0
0x06A71F18: e0070aad  stp q0, q1, [sp, #0x140]
0x06A71F1C: 4b000094  bl #0x6a72048
0x06A71F20: 40050036  tbz w0, #0, #0x6a71fc8
0x06A71F24: 600e40f9  ldr x0, [x19, #0x18]
0x06A71F28: e00800b4  cbz x0, #0x6a72044
0x06A71F2C: e2d340f9  ldr x2, [sp, #0x1a0]
0x06A71F30: e1e340f9  ldr x1, [sp, #0x1c0]
0x06A71F34: e3031faa  mov x3, xzr
0x06A71F38: 5a570094  bl #0x6a87ca0
0x06A71F3C: 680a40f9  ldr x8, [x19, #0x10]
0x06A71F40: 280800b4  cbz x8, #0x6a72044
0x06A71F44: e2d340f9  ldr x2, [sp, #0x1a0]
0x06A71F48: e1e340f9  ldr x1, [sp, #0x1c0]
0x06A71F4C: f603002a  mov w22, w0
0x06A71F50: e00308aa  mov x0, x8
0x06A71F54: e3031faa  mov x3, xzr
0x06A71F58: 5f500094  bl #0x6a860d4
0x06A71F5C: c802002a  orr w8, w22, w0
0x06A71F60: 48030036  tbz w8, #0, #0x6a71fc8
0x06A71F64: 800640ad  ldp q0, q1, [x20]
0x06A71F68: e20f4ead  ldp q2, q3, [sp, #0x1c0]
0x06A71F6C: e4174dad  ldp q4, q5, [sp, #0x1a0]
0x06A71F70: e3f740f9  ldr x3, [sp, #0x1e8]
0x06A71F74: f503002a  mov w21, w0
0x06A71F78: e0830491  add x0, sp, #0x120
0x06A71F7C: e1030491  add x1, sp, #0x100
0x06A71F80: e2830391  add x2, sp, #0xe0
0x06A71F84: e00709ad  stp q0, q1, [sp, #0x120]
0x06A71F88: e20f08ad  stp q2, q3, [sp, #0x100]
0x06A71F8C: e41707ad  stp q4, q5, [sp, #0xe0]
0x06A71F90: ab000094  bl #0x6a7223c
0x06A71F94: 15040036  tbz w21, #0, #0x6a72014
0x06A71F98: 800640ad  ldp q0, q1, [x20]
0x06A71F9C: e20f4ead  ldp q2, q3, [sp, #0x1c0]
0x06A71FA0: e4174dad  ldp q4, q5, [sp, #0x1a0]
0x06A71FA4: e1030391  add x1, sp, #0xc0
0x06A71FA8: e2830291  add x2, sp, #0xa0
0x06A71FAC: e3030291  add x3, sp, #0x80
0x06A71FB0: e00313aa  mov x0, x19
0x06A71FB4: e00706ad  stp q0, q1, [sp, #0xc0]
0x06A71FB8: e20f05ad  stp q2, q3, [sp, #0xa0]
0x06A71FBC: e41704ad  stp q4, q5, [sp, #0x80]
0x06A71FC0: d2000094  bl #0x6a72308
0x06A71FC4: 0f000014  b #0x6a72000
0x06A71FC8: 800640f9  ldr x0, [x20, #8]
0x06A71FCC: c00300b4  cbz x0, #0x6a72044
0x06A71FD0: 08660090  adrp x8, #0x7731000
0x06A71FD4: 087d41f9  ldr x8, [x8, #0x2f8]
0x06A71FD8: e1830791  add x1, sp, #0x1e0
0x06A71FDC: 020140f9  ldr x2, [x8]
0x06A71FE0: 104c4d97  bl #0x3dc5020
0x06A71FE4: e0000036  tbz w0, #0, #0x6a72000
0x06A71FE8: 810240ad  ldp q1, q0, [x20]
0x06A71FEC: e2f340f9  ldr x2, [sp, #0x1e0]
0x06A71FF0: e1030091  mov x1, sp
0x06A71FF4: e00313aa  mov x0, x19
0x06A71FF8: e10300ad  stp q1, q0, [sp]
0x06A71FFC: 72010094  bl #0x6a725c4
0x06A72000: ffc30791  add sp, sp, #0x1f0
0x06A72004: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A72008: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A7200C: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x06A72010: c0035fd6  ret
0x06A72014: 800640ad  ldp q0, q1, [x20]
0x06A72018: e20f4ead  ldp q2, q3, [sp, #0x1c0]
0x06A7201C: e4174dad  ldp q4, q5, [sp, #0x1a0]
0x06A72020: e1830191  add x1, sp, #0x60
0x06A72024: e2030191  add x2, sp, #0x40
0x06A72028: e3830091  add x3, sp, #0x20
0x06A7202C: e00313aa  mov x0, x19
0x06A72030: e00703ad  stp q0, q1, [sp, #0x60]
0x06A72034: e20f02ad  stp q2, q3, [sp, #0x40]
0x06A72038: e41701ad  stp q4, q5, [sp, #0x20]
0x06A7203C: 13010094  bl #0x6a72488
0x06A72040: f0ffff17  b #0x6a72000
0x06A72044: 1a3b1c97  bl #0x3180cac

; RVA 0x6A7223C | private static void SetPendingConfirmationState(TickContext context, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent> fromEntity, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent> toEntity, MoveAction moveAction) { }
; bytes=204 sha256=2249b209d8e2b2b0626d8d986b147bdb171531563f83371a5d5088ae735575bc status=arm64_complete_bound indexed_start=True
0x06A7223C: ff4302d1  sub sp, sp, #0x90
0x06A72240: fe5f06a9  stp x30, x23, [sp, #0x60]
0x06A72244: f65707a9  stp x22, x21, [sp, #0x70]
0x06A72248: f44f08a9  stp x20, x19, [sp, #0x80]
0x06A7224C: d7950090  adrp x23, #0x7d2a000
0x06A72250: e8ae5b39  ldrb w8, [x23, #0x6eb]
0x06A72254: f30303aa  mov x19, x3
0x06A72258: f40302aa  mov x20, x2
0x06A7225C: f60301aa  mov x22, x1
0x06A72260: f50300aa  mov x21, x0
0x06A72264: c8000037  tbnz w8, #0, #0x6a7227c
0x06A72268: e06500f0  adrp x0, #0x7731000
0x06A7226C: 00a041f9  ldr x0, [x0, #0x340]
0x06A72270: ea391c97  bl #0x3180a18
0x06A72274: 28008052  movz w8, #0x1
0x06A72278: e8ae1b39  strb w8, [x23, #0x6eb]
0x06A7227C: c00240f9  ldr x0, [x22]
0x06A72280: 200400b4  cbz x0, #0x6a72304
0x06A72284: f76500f0  adrp x23, #0x7731000
0x06A72288: f7a241f9  ldr x23, [x23, #0x340]
0x06A7228C: e1031faa  mov x1, xzr
0x06A72290: e20240f9  ldr x2, [x23]
0x06A72294: 8bad4697  bl #0x3c1d8c0
0x06A72298: 800240f9  ldr x0, [x20]
0x06A7229C: 400300b4  cbz x0, #0x6a72304
0x06A722A0: e20240f9  ldr x2, [x23]
0x06A722A4: e1031faa  mov x1, xzr
0x06A722A8: 86ad4697  bl #0x3c1d8c0
0x06A722AC: a10240ad  ldp q1, q0, [x21]
0x06A722B0: e10302ad  stp q1, q0, [sp, #0x40]
0x06A722B4: 930200b4  cbz x19, #0x6a72304
0x06A722B8: c10240f9  ldr x1, [x22]
0x06A722BC: e00742ad  ldp q0, q1, [sp, #0x40]
0x06A722C0: 621240b9  ldr w2, [x19, #0x10]
0x06A722C4: e0830091  add x0, sp, #0x20
0x06A722C8: e3031faa  mov x3, xzr
0x06A722CC: e00701ad  stp q0, q1, [sp, #0x20]
0x06A722D0: 3c9b0094  bl #0x6a98fc0
0x06A722D4: a10240ad  ldp q1, q0, [x21]
0x06A722D8: e0030091  mov x0, sp
0x06A722DC: e3031faa  mov x3, xzr
0x06A722E0: e10300ad  stp q1, q0, [sp]
0x06A722E4: 810240f9  ldr x1, [x20]
0x06A722E8: 621640b9  ldr w2, [x19, #0x14]
0x06A722EC: 359b0094  bl #0x6a98fc0
0x06A722F0: f44f48a9  ldp x20, x19, [sp, #0x80]
0x06A722F4: f65747a9  ldp x22, x21, [sp, #0x70]
0x06A722F8: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x06A722FC: ff430291  add sp, sp, #0x90
0x06A72300: c0035fd6  ret
0x06A72304: 6a3a1c97  bl #0x3180cac

; RVA 0x6A72048 | private static bool FindEntityAtPosition(TickContext context, int position, out ValueTuple<Entity, BoardTilePositionComponent, MergeComponent> result) { }
; bytes=500 sha256=1502ecbf4a319e2d960781c5e2d7fddf4dc770182251e7a4a75cbacf8d97014e status=arm64_complete_bound indexed_start=True
0x06A72048: ff8303d1  sub sp, sp, #0xe0
0x06A7204C: fd7b08a9  stp x29, x30, [sp, #0x80]
0x06A72050: fc6f09a9  stp x28, x27, [sp, #0x90]
0x06A72054: fa670aa9  stp x26, x25, [sp, #0xa0]
0x06A72058: f85f0ba9  stp x24, x23, [sp, #0xb0]
0x06A7205C: f6570ca9  stp x22, x21, [sp, #0xc0]
0x06A72060: f44f0da9  stp x20, x19, [sp, #0xd0]
0x06A72064: d7950090  adrp x23, #0x7d2a000
0x06A72068: f66500f0  adrp x22, #0x7731000
0x06A7206C: e8b25b39  ldrb w8, [x23, #0x6ec]
0x06A72070: d68241f9  ldr x22, [x22, #0x300]
0x06A72074: f30302aa  mov x19, x2
0x06A72078: f503012a  mov w21, w1
0x06A7207C: f40300aa  mov x20, x0
0x06A72080: c8030037  tbnz w8, #0, #0x6a720f8
0x06A72084: e06500f0  adrp x0, #0x7731000
0x06A72088: 008441f9  ldr x0, [x0, #0x308]
0x06A7208C: 633a1c97  bl #0x3180a18
0x06A72090: e06500f0  adrp x0, #0x7731000
0x06A72094: 008841f9  ldr x0, [x0, #0x310]
0x06A72098: 603a1c97  bl #0x3180a18
0x06A7209C: e06500b0  adrp x0, #0x772f000
0x06A720A0: 003447f9  ldr x0, [x0, #0xe68]
0x06A720A4: 5d3a1c97  bl #0x3180a18
0x06A720A8: e06500f0  adrp x0, #0x7731000
0x06A720AC: 008c41f9  ldr x0, [x0, #0x318]
0x06A720B0: 5a3a1c97  bl #0x3180a18
0x06A720B4: e06500f0  adrp x0, #0x7731000
0x06A720B8: 009041f9  ldr x0, [x0, #0x320]
0x06A720BC: 573a1c97  bl #0x3180a18
0x06A720C0: e06500f0  adrp x0, #0x7731000
0x06A720C4: 009441f9  ldr x0, [x0, #0x328]
0x06A720C8: 543a1c97  bl #0x3180a18
0x06A720CC: e06500f0  adrp x0, #0x7731000
0x06A720D0: 009841f9  ldr x0, [x0, #0x330]
0x06A720D4: 513a1c97  bl #0x3180a18
0x06A720D8: e06500f0  adrp x0, #0x7731000
0x06A720DC: 009c41f9  ldr x0, [x0, #0x338]
0x06A720E0: 4e3a1c97  bl #0x3180a18
0x06A720E4: e06500f0  adrp x0, #0x7731000
0x06A720E8: 008041f9  ldr x0, [x0, #0x300]
0x06A720EC: 4b3a1c97  bl #0x3180a18
0x06A720F0: 28008052  movz w8, #0x1
0x06A720F4: e8b21b39  strb w8, [x23, #0x6ec]
0x06A720F8: c00240f9  ldr x0, [x22]
0x06A720FC: 00e4006f  movi v0.2d, #0000000000000000
0x06A72100: e00302ad  stp q0, q0, [sp, #0x40]
0x06A72104: e00301ad  stp q0, q0, [sp, #0x20]
0x06A72108: e63a1c97  bl #0x3180ca0
0x06A7210C: e1031faa  mov x1, xzr
0x06A72110: f60300aa  mov x22, x0
0x06A72114: 3aa1b197  bl #0x56da5fc
0x06A72118: 160900b4  cbz x22, #0x6a72238
0x06A7211C: e86500f0  adrp x8, #0x7731000
0x06A72120: 088941f9  ldr x8, [x8, #0x310]
0x06A72124: f76500b0  adrp x23, #0x772f000
0x06A72128: f86500f0  adrp x24, #0x7731000
0x06A7212C: f96500f0  adrp x25, #0x7731000
0x06A72130: fa6500f0  adrp x26, #0x7731000
0x06A72134: fb6500f0  adrp x27, #0x7731000
0x06A72138: f73647f9  ldr x23, [x23, #0xe68]
0x06A7213C: 188741f9  ldr x24, [x24, #0x308]
0x06A72140: 399b41f9  ldr x25, [x25, #0x330]
0x06A72144: 5a8f41f9  ldr x26, [x26, #0x318]
0x06A72148: 7b9f41f9  ldr x27, [x27, #0x338]
0x06A7214C: d51200b9  str w21, [x22, #0x10]
0x06A72150: fc6500f0  adrp x28, #0x7731000
0x06A72154: 800640ad  ldp q0, q1, [x20]
0x06A72158: 9c9741f9  ldr x28, [x28, #0x328]
0x06A7215C: 000140f9  ldr x0, [x8]
0x06A72160: fd6500f0  adrp x29, #0x7731000
0x06A72164: bd9341f9  ldr x29, [x29, #0x320]
0x06A72168: e00700ad  stp q0, q1, [sp]
0x06A7216C: 939f4697  bl #0x3c19fb8
0x06A72170: e80240f9  ldr x8, [x23]
0x06A72174: f40300aa  mov x20, x0
0x06A72178: e00308aa  mov x0, x8
0x06A7217C: c93a1c97  bl #0x3180ca0
0x06A72180: 020340f9  ldr x2, [x24]
0x06A72184: e1031faa  mov x1, xzr
0x06A72188: e3031faa  mov x3, xzr
0x06A7218C: f50300aa  mov x21, x0
0x06A72190: de8ed297  bl #0x5f15d08
0x06A72194: e00740ad  ldp q0, q1, [sp]
0x06A72198: 230340f9  ldr x3, [x25]
0x06A7219C: e8830091  add x8, sp, #0x20
0x06A721A0: e0830191  add x0, sp, #0x60
0x06A721A4: e10314aa  mov x1, x20
0x06A721A8: e20315aa  mov x2, x21
0x06A721AC: e00703ad  stp q0, q1, [sp, #0x60]
0x06A721B0: 95cb4b97  bl #0x3d65004
0x06A721B4: 400340f9  ldr x0, [x26]
0x06A721B8: ba3a1c97  bl #0x3180ca0
0x06A721BC: 620340f9  ldr x2, [x27]
0x06A721C0: e10316aa  mov x1, x22
0x06A721C4: e3031faa  mov x3, xzr
0x06A721C8: f40300aa  mov x20, x0
0x06A721CC: 39779f97  bl #0x524feb0
0x06A721D0: 820340f9  ldr x2, [x28]
0x06A721D4: e8830191  add x8, sp, #0x60
0x06A721D8: e0830091  add x0, sp, #0x20
0x06A721DC: e10314aa  mov x1, x20
0x06A721E0: 695c6497  bl #0x4389384
0x06A721E4: e00743ad  ldp q0, q1, [sp, #0x60]
0x06A721E8: a20340f9  ldr x2, [x29]
0x06A721EC: e0830091  add x0, sp, #0x20
0x06A721F0: e1030191  add x1, sp, #0x40
0x06A721F4: e00701ad  stp q0, q1, [sp, #0x20]
0x06A721F8: cf5c6497  bl #0x4389534
0x06A721FC: e00742ad  ldp q0, q1, [sp, #0x40]
0x06A72200: f403002a  mov w20, w0
0x06A72204: e00313aa  mov x0, x19
0x06A72208: e1031faa  mov x1, xzr
0x06A7220C: 600600ad  stp q0, q1, [x19]
0x06A72210: ed391c97  bl #0x31809c4
0x06A72214: 80020012  and w0, w20, #1
0x06A72218: f44f4da9  ldp x20, x19, [sp, #0xd0]
0x06A7221C: f6574ca9  ldp x22, x21, [sp, #0xc0]
0x06A72220: f85f4ba9  ldp x24, x23, [sp, #0xb0]
0x06A72224: fa674aa9  ldp x26, x25, [sp, #0xa0]
0x06A72228: fc6f49a9  ldp x28, x27, [sp, #0x90]
0x06A7222C: fd7b48a9  ldp x29, x30, [sp, #0x80]
0x06A72230: ff830391  add sp, sp, #0xe0
0x06A72234: c0035fd6  ret
0x06A72238: 9d3a1c97  bl #0x3180cac

; RVA 0x6A725C4 | private void HandleCombinationVerification(TickContext context, ItemsCombinationConfirmationAction confirmationAction) { }
; bytes=1092 sha256=cd4e89359568b9de7f40d778948ebe5c6ec090f64c50658290851e807ea3e6fa status=arm64_complete_bound indexed_start=True
0x06A725C4: ffc305d1  sub sp, sp, #0x170
0x06A725C8: fd7b11a9  stp x29, x30, [sp, #0x110]
0x06A725CC: fc6f12a9  stp x28, x27, [sp, #0x120]
0x06A725D0: fa6713a9  stp x26, x25, [sp, #0x130]
0x06A725D4: f85f14a9  stp x24, x23, [sp, #0x140]
0x06A725D8: f65715a9  stp x22, x21, [sp, #0x150]
0x06A725DC: f44f16a9  stp x20, x19, [sp, #0x160]
0x06A725E0: d3950090  adrp x19, #0x7d2a000
0x06A725E4: 68b65b39  ldrb w8, [x19, #0x6ed]
0x06A725E8: f40302aa  mov x20, x2
0x06A725EC: f50301aa  mov x21, x1
0x06A725F0: 08030037  tbnz w8, #0, #0x6a72650
0x06A725F4: 40600090  adrp x0, #0x767a000
0x06A725F8: 004442f9  ldr x0, [x0, #0x488]
0x06A725FC: 07391c97  bl #0x3180a18
0x06A72600: e06500f0  adrp x0, #0x7731000
0x06A72604: 00ac41f9  ldr x0, [x0, #0x358]
0x06A72608: 04391c97  bl #0x3180a18
0x06A7260C: e05e0090  adrp x0, #0x764e000
0x06A72610: 006444f9  ldr x0, [x0, #0x8c8]
0x06A72614: 01391c97  bl #0x3180a18
0x06A72618: e06500f0  adrp x0, #0x7731000
0x06A7261C: 00b041f9  ldr x0, [x0, #0x360]
0x06A72620: fe381c97  bl #0x3180a18
0x06A72624: e06500f0  adrp x0, #0x7731000
0x06A72628: 00b441f9  ldr x0, [x0, #0x368]
0x06A7262C: fb381c97  bl #0x3180a18
0x06A72630: e05e0090  adrp x0, #0x764e000
0x06A72634: 007044f9  ldr x0, [x0, #0x8e0]
0x06A72638: f8381c97  bl #0x3180a18
0x06A7263C: e06500f0  adrp x0, #0x7731000
0x06A72640: 00b841f9  ldr x0, [x0, #0x370]
0x06A72644: f5381c97  bl #0x3180a18
0x06A72648: 28008052  movz w8, #0x1
0x06A7264C: 68b61b39  strb w8, [x19, #0x6ed]
0x06A72650: 141700b4  cbz x20, #0x6a72930
0x06A72654: 800e40f9  ldr x0, [x20, #0x18]
0x06A72658: c01600b4  cbz x0, #0x6a72930
0x06A7265C: 88424039  ldrb w8, [x20, #0x10]
0x06A72660: c8040034  cbz w8, #0x6a726f8
0x06A72664: 56600090  adrp x22, #0x767a000
0x06A72668: d64642f9  ldr x22, [x22, #0x488]
0x06A7266C: e8030191  add x8, sp, #0x40
0x06A72670: c10240f9  ldr x1, [x22]
0x06A72674: f7a24697  bl #0x3c1b250
0x06A72678: 801240f9  ldr x0, [x20, #0x20]
0x06A7267C: a01500b4  cbz x0, #0x6a72930
0x06A72680: c10240f9  ldr x1, [x22]
0x06A72684: f32740f9  ldr x19, [sp, #0x48]
0x06A72688: e8030191  add x8, sp, #0x40
0x06A7268C: f1a24697  bl #0x3c1b250
0x06A72690: a10240ad  ldp q1, q0, [x21]
0x06A72694: e32740f9  ldr x3, [sp, #0x48]
0x06A72698: e1c30391  add x1, sp, #0xf0
0x06A7269C: e20313aa  mov x2, x19
0x06A726A0: e18307ad  stp q1, q0, [sp, #0xf0]
0x06A726A4: db000094  bl #0x6a72a10
0x06A726A8: 401400b4  cbz x0, #0x6a72930
0x06A726AC: ea6500f0  adrp x10, #0x7731000
0x06A726B0: 080040f9  ldr x8, [x0]
0x06A726B4: 4ab141f9  ldr x10, [x10, #0x360]
0x06A726B8: f30300aa  mov x19, x0
0x06A726BC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A726C0: 410140f9  ldr x1, [x10]
0x06A726C4: 290100b4  cbz x9, #0x6a726e8
0x06A726C8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A726CC: 4a210091  add x10, x10, #8
0x06A726D0: 4b815ff8  ldur x11, [x10, #-8]
0x06A726D4: 7f0101eb  cmp x11, x1
0x06A726D8: e0020054  b.eq #0x6a72734
0x06A726DC: 290500f1  subs x9, x9, #1
0x06A726E0: 4a410091  add x10, x10, #0x10
0x06A726E4: 61ffff54  b.ne #0x6a726d0
0x06A726E8: e00313aa  mov x0, x19
0x06A726EC: e2031f2a  mov w2, wzr
0x06A726F0: 08911b97  bl #0x3156b10
0x06A726F4: 13000014  b #0x6a72740
0x06A726F8: f36500f0  adrp x19, #0x7731000
0x06A726FC: 73ae41f9  ldr x19, [x19, #0x358]
0x06A72700: 610240f9  ldr x1, [x19]
0x06A72704: 4da74697  bl #0x3c1c438
0x06A72708: 801240f9  ldr x0, [x20, #0x20]
0x06A7270C: 201100b4  cbz x0, #0x6a72930
0x06A72710: 610240f9  ldr x1, [x19]
0x06A72714: f44f56a9  ldp x20, x19, [sp, #0x160]
0x06A72718: f65755a9  ldp x22, x21, [sp, #0x150]
0x06A7271C: f85f54a9  ldp x24, x23, [sp, #0x140]
0x06A72720: fa6753a9  ldp x26, x25, [sp, #0x130]
0x06A72724: fc6f52a9  ldp x28, x27, [sp, #0x120]
0x06A72728: fd7b51a9  ldp x29, x30, [sp, #0x110]
0x06A7272C: ffc30591  add sp, sp, #0x170
0x06A72730: 42a74617  b #0x3c1c438
0x06A72734: 490180b9  ldrsw x9, [x10]
0x06A72738: 0811098b  add x8, x8, x9, lsl #4
0x06A7273C: 00e10491  add x0, x8, #0x138
0x06A72740: 080440a9  ldp x8, x1, [x0]
0x06A72744: e00313aa  mov x0, x19
0x06A72748: 00013fd6  blr x8
0x06A7274C: f30300aa  mov x19, x0
0x06A72750: 200f00b4  cbz x0, #0x6a72934
0x06A72754: f95e0090  adrp x25, #0x764e000
0x06A72758: fa6500f0  adrp x26, #0x7731000
0x06A7275C: fb6500f0  adrp x27, #0x7731000
0x06A72760: fc6500f0  adrp x28, #0x7731000
0x06A72764: 397344f9  ldr x25, [x25, #0x8e0]
0x06A72768: 5ab741f9  ldr x26, [x26, #0x368]
0x06A7276C: 7baf41f9  ldr x27, [x27, #0x358]
0x06A72770: 9cbb41f9  ldr x28, [x28, #0x370]
0x06A72774: 680240f9  ldr x8, [x19]
0x06A72778: 210340f9  ldr x1, [x25]
0x06A7277C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A72780: 290100b4  cbz x9, #0x6a727a4
0x06A72784: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A72788: 4a210091  add x10, x10, #8
0x06A7278C: 4b815ff8  ldur x11, [x10, #-8]
0x06A72790: 7f0101eb  cmp x11, x1
0x06A72794: 00010054  b.eq #0x6a727b4
0x06A72798: 290500f1  subs x9, x9, #1
0x06A7279C: 4a410091  add x10, x10, #0x10
0x06A727A0: 61ffff54  b.ne #0x6a7278c
0x06A727A4: e00313aa  mov x0, x19
0x06A727A8: e2031f2a  mov w2, wzr
0x06A727AC: d9901b97  bl #0x3156b10
0x06A727B0: 04000014  b #0x6a727c0
0x06A727B4: 490180b9  ldrsw x9, [x10]
0x06A727B8: 0811098b  add x8, x8, x9, lsl #4
0x06A727BC: 00e10491  add x0, x8, #0x138
0x06A727C0: 080440a9  ldp x8, x1, [x0]
0x06A727C4: e00313aa  mov x0, x19
0x06A727C8: 00013fd6  blr x8
0x06A727CC: 80060036  tbz w0, #0, #0x6a7289c
0x06A727D0: 680240f9  ldr x8, [x19]
0x06A727D4: 410340f9  ldr x1, [x26]
0x06A727D8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A727DC: 290100b4  cbz x9, #0x6a72800
0x06A727E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A727E4: 4a210091  add x10, x10, #8
0x06A727E8: 4b815ff8  ldur x11, [x10, #-8]
0x06A727EC: 7f0101eb  cmp x11, x1
0x06A727F0: 00010054  b.eq #0x6a72810
0x06A727F4: 290500f1  subs x9, x9, #1
0x06A727F8: 4a410091  add x10, x10, #0x10
0x06A727FC: 61ffff54  b.ne #0x6a727e8
0x06A72800: e00313aa  mov x0, x19
0x06A72804: e2031f2a  mov w2, wzr
0x06A72808: c2901b97  bl #0x3156b10
0x06A7280C: 04000014  b #0x6a7281c
0x06A72810: 490180b9  ldrsw x9, [x10]
0x06A72814: 0811098b  add x8, x8, x9, lsl #4
0x06A72818: 00e10491  add x0, x8, #0x138
0x06A7281C: 090440a9  ldp x9, x1, [x0]
0x06A72820: e8030191  add x8, sp, #0x40
0x06A72824: e00313aa  mov x0, x19
0x06A72828: 20013fd6  blr x9
0x06A7282C: f72340f9  ldr x23, [sp, #0x40]
0x06A72830: d70700b4  cbz x23, #0x6a72928
0x06A72834: f64f40f9  ldr x22, [sp, #0x98]
0x06A72838: 610340f9  ldr x1, [x27]
0x06A7283C: e00317aa  mov x0, x23
0x06A72840: fea64697  bl #0x3c1c438
0x06A72844: 560700b4  cbz x22, #0x6a7292c
0x06A72848: 610340f9  ldr x1, [x27]
0x06A7284C: e00316aa  mov x0, x22
0x06A72850: faa64697  bl #0x3c1c438
0x06A72854: a10240ad  ldp q1, q0, [x21]
0x06A72858: 982a40b9  ldr w24, [x20, #0x28]
0x06A7285C: 830340f9  ldr x3, [x28]
0x06A72860: e10301ad  stp q1, q0, [sp, #0x20]
0x06A72864: e10302ad  stp q1, q0, [sp, #0x40]
0x06A72868: e0030191  add x0, sp, #0x40
0x06A7286C: e10317aa  mov x1, x23
0x06A72870: e20318aa  mov x2, x24
0x06A72874: 244b4d97  bl #0x3dc5504
0x06A72878: a10240ad  ldp q1, q0, [x21]
0x06A7287C: 830340f9  ldr x3, [x28]
0x06A72880: e10300ad  stp q1, q0, [sp]
0x06A72884: e10302ad  stp q1, q0, [sp, #0x40]
0x06A72888: e0030191  add x0, sp, #0x40
0x06A7288C: e10316aa  mov x1, x22
0x06A72890: e20318aa  mov x2, x24
0x06A72894: 1c4b4d97  bl #0x3dc5504
0x06A72898: b7ffff17  b #0x6a72774
0x06A7289C: f4031faa  mov x20, xzr
0x06A728A0: 330300b4  cbz x19, #0x6a72904
0x06A728A4: ea5e0090  adrp x10, #0x764e000
0x06A728A8: 680240f9  ldr x8, [x19]
0x06A728AC: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A728B0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A728B4: 410140f9  ldr x1, [x10]
0x06A728B8: 290100b4  cbz x9, #0x6a728dc
0x06A728BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A728C0: 4a210091  add x10, x10, #8
0x06A728C4: 4b815ff8  ldur x11, [x10, #-8]
0x06A728C8: 7f0101eb  cmp x11, x1
0x06A728CC: 00010054  b.eq #0x6a728ec
0x06A728D0: 290500f1  subs x9, x9, #1
0x06A728D4: 4a410091  add x10, x10, #0x10
0x06A728D8: 61ffff54  b.ne #0x6a728c4
0x06A728DC: e00313aa  mov x0, x19
0x06A728E0: e2031f2a  mov w2, wzr
0x06A728E4: 8b901b97  bl #0x3156b10
0x06A728E8: 04000014  b #0x6a728f8
0x06A728EC: 490180b9  ldrsw x9, [x10]
0x06A728F0: 0811098b  add x8, x8, x9, lsl #4
0x06A728F4: 00e10491  add x0, x8, #0x138
0x06A728F8: 080440a9  ldp x8, x1, [x0]
0x06A728FC: e00313aa  mov x0, x19
0x06A72900: 00013fd6  blr x8
0x06A72904: b40100b5  cbnz x20, #0x6a72938
0x06A72908: f44f56a9  ldp x20, x19, [sp, #0x160]
0x06A7290C: f65755a9  ldp x22, x21, [sp, #0x150]
0x06A72910: f85f54a9  ldp x24, x23, [sp, #0x140]
0x06A72914: fa6753a9  ldp x26, x25, [sp, #0x130]
0x06A72918: fc6f52a9  ldp x28, x27, [sp, #0x120]
0x06A7291C: fd7b51a9  ldp x29, x30, [sp, #0x110]
0x06A72920: ffc30591  add sp, sp, #0x170
0x06A72924: c0035fd6  ret
0x06A72928: e1381c97  bl #0x3180cac
0x06A7292C: e0381c97  bl #0x3180cac
0x06A72930: df381c97  bl #0x3180cac
0x06A72934: de381c97  bl #0x3180cac
0x06A72938: e00314aa  mov x0, x20
0x06A7293C: da381c97  bl #0x3180ca4
0x06A72940: 08000014  b #0x6a72960
0x06A72944: 07000014  b #0x6a72960
0x06A72948: 06000014  b #0x6a72960
0x06A7294C: 05000014  b #0x6a72960
0x06A72950: 04000014  b #0x6a72960
0x06A72954: 03000014  b #0x6a72960
0x06A72958: 02000014  b #0x6a72960
0x06A7295C: 01000014  b #0x6a72960
0x06A72960: f50300aa  mov x21, x0
0x06A72964: 3f040071  cmp w1, #1
0x06A72968: c1000054  b.ne #0x6a72980
0x06A7296C: e00315aa  mov x0, x21
0x06A72970: e86f1d94  bl #0x71ce910
0x06A72974: 140040f9  ldr x20, [x0]
0x06A72978: ea6f1d94  bl #0x71ce920
0x06A7297C: c9ffff17  b #0x6a728a0
0x06A72980: f4031faa  mov x20, xzr
0x06A72984: 02000014  b #0x6a7298c
0x06A72988: f50300aa  mov x21, x0
0x06A7298C: 330300b4  cbz x19, #0x6a729f0
0x06A72990: ea5e0090  adrp x10, #0x764e000
0x06A72994: 680240f9  ldr x8, [x19]
0x06A72998: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A7299C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A729A0: 410140f9  ldr x1, [x10]
0x06A729A4: 290100b4  cbz x9, #0x6a729c8
0x06A729A8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A729AC: 4a210091  add x10, x10, #8
0x06A729B0: 4b815ff8  ldur x11, [x10, #-8]
0x06A729B4: 7f0101eb  cmp x11, x1
0x06A729B8: 00010054  b.eq #0x6a729d8
0x06A729BC: 290500f1  subs x9, x9, #1
0x06A729C0: 4a410091  add x10, x10, #0x10
0x06A729C4: 61ffff54  b.ne #0x6a729b0
0x06A729C8: e00313aa  mov x0, x19
0x06A729CC: e2031f2a  mov w2, wzr
0x06A729D0: 50901b97  bl #0x3156b10
0x06A729D4: 04000014  b #0x6a729e4
0x06A729D8: 490180b9  ldrsw x9, [x10]
0x06A729DC: 0811098b  add x8, x8, x9, lsl #4
0x06A729E0: 00e10491  add x0, x8, #0x138
0x06A729E4: 080440a9  ldp x8, x1, [x0]
0x06A729E8: e00313aa  mov x0, x19
0x06A729EC: 00013fd6  blr x8
0x06A729F0: 740000b5  cbnz x20, #0x6a729fc
0x06A729F4: e00315aa  mov x0, x21
0x06A729F8: d8cb1f97  bl #0x3265958
0x06A729FC: e00314aa  mov x0, x20
0x06A72A00: a9381c97  bl #0x3180ca4
0x06A72A04: c45a0e97  bl #0x2e09514

; RVA 0x6A72A10 | private IEnumerable<ValueTuple<ValueTuple<Entity, BoardTilePositionComponent, MergeComponent, IdComponent, PendingItemsCombinationComponent>, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent, IdComponent, PendingItemsCombinationComponent>>> FindPendingVerificationPairs(TickContext context, string firstEntityUuid, string secondEntityUuid) { }
; bytes=488 sha256=6bd1d5e3714e7a1c4b12be3b3164a9e74d1cb96f73e0351a164b9ce5cbc66231 status=arm64_complete_bound indexed_start=True
0x06A72A10: ff0303d1  sub sp, sp, #0xc0
0x06A72A14: fd7b06a9  stp x29, x30, [sp, #0x60]
0x06A72A18: fc6f07a9  stp x28, x27, [sp, #0x70]
0x06A72A1C: fa6708a9  stp x26, x25, [sp, #0x80]
0x06A72A20: f85f09a9  stp x24, x23, [sp, #0x90]
0x06A72A24: f6570aa9  stp x22, x21, [sp, #0xa0]
0x06A72A28: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x06A72A2C: d7950090  adrp x23, #0x7d2a000
0x06A72A30: f56500f0  adrp x21, #0x7731000
0x06A72A34: e8ba5b39  ldrb w8, [x23, #0x6ee]
0x06A72A38: b5be41f9  ldr x21, [x21, #0x378]
0x06A72A3C: f40303aa  mov x20, x3
0x06A72A40: f60302aa  mov x22, x2
0x06A72A44: f30301aa  mov x19, x1
0x06A72A48: c8030037  tbnz w8, #0, #0x6a72ac0
0x06A72A4C: e06500d0  adrp x0, #0x7730000
0x06A72A50: 00f044f9  ldr x0, [x0, #0x9e0]
0x06A72A54: f1371c97  bl #0x3180a18
0x06A72A58: e06500f0  adrp x0, #0x7731000
0x06A72A5C: 00c041f9  ldr x0, [x0, #0x380]
0x06A72A60: ee371c97  bl #0x3180a18
0x06A72A64: e06500f0  adrp x0, #0x7731000
0x06A72A68: 00c441f9  ldr x0, [x0, #0x388]
0x06A72A6C: eb371c97  bl #0x3180a18
0x06A72A70: e06500b0  adrp x0, #0x772f000
0x06A72A74: 003447f9  ldr x0, [x0, #0xe68]
0x06A72A78: e8371c97  bl #0x3180a18
0x06A72A7C: e06500f0  adrp x0, #0x7731000
0x06A72A80: 00c841f9  ldr x0, [x0, #0x390]
0x06A72A84: e5371c97  bl #0x3180a18
0x06A72A88: e06500f0  adrp x0, #0x7731000
0x06A72A8C: 00cc41f9  ldr x0, [x0, #0x398]
0x06A72A90: e2371c97  bl #0x3180a18
0x06A72A94: e06500f0  adrp x0, #0x7731000
0x06A72A98: 00d041f9  ldr x0, [x0, #0x3a0]
0x06A72A9C: df371c97  bl #0x3180a18
0x06A72AA0: e06500f0  adrp x0, #0x7731000
0x06A72AA4: 00d441f9  ldr x0, [x0, #0x3a8]
0x06A72AA8: dc371c97  bl #0x3180a18
0x06A72AAC: e06500f0  adrp x0, #0x7731000
0x06A72AB0: 00bc41f9  ldr x0, [x0, #0x378]
0x06A72AB4: d9371c97  bl #0x3180a18
0x06A72AB8: 28008052  movz w8, #0x1
0x06A72ABC: e8ba1b39  strb w8, [x23, #0x6ee]
0x06A72AC0: a00240f9  ldr x0, [x21]
0x06A72AC4: 00e4006f  movi v0.2d, #0000000000000000
0x06A72AC8: e00301ad  stp q0, q0, [sp, #0x20]
0x06A72ACC: 75381c97  bl #0x3180ca0
0x06A72AD0: e1031faa  mov x1, xzr
0x06A72AD4: f50300aa  mov x21, x0
0x06A72AD8: c99eb197  bl #0x56da5fc
0x06A72ADC: d50800b4  cbz x21, #0x6a72bf4
0x06A72AE0: fa6500f0  adrp x26, #0x7731000
0x06A72AE4: fb6500b0  adrp x27, #0x772f000
0x06A72AE8: fc6500d0  adrp x28, #0x7730000
0x06A72AEC: fd6500f0  adrp x29, #0x7731000
0x06A72AF0: f76500f0  adrp x23, #0x7731000
0x06A72AF4: f96500f0  adrp x25, #0x7731000
0x06A72AF8: f86500f0  adrp x24, #0x7731000
0x06A72AFC: 5ac341f9  ldr x26, [x26, #0x380]
0x06A72B00: 7b3747f9  ldr x27, [x27, #0xe68]
0x06A72B04: 9cf344f9  ldr x28, [x28, #0x9e0]
0x06A72B08: bdd341f9  ldr x29, [x29, #0x3a0]
0x06A72B0C: f7ce41f9  ldr x23, [x23, #0x398]
0x06A72B10: 39cb41f9  ldr x25, [x25, #0x390]
0x06A72B14: 18d741f9  ldr x24, [x24, #0x3a8]
0x06A72B18: e00315aa  mov x0, x21
0x06A72B1C: 160c01f8  str x22, [x0, #0x10]!
0x06A72B20: e10316aa  mov x1, x22
0x06A72B24: a8371c97  bl #0x31809c4
0x06A72B28: e00315aa  mov x0, x21
0x06A72B2C: 148c01f8  str x20, [x0, #0x18]!
0x06A72B30: e10314aa  mov x1, x20
0x06A72B34: a4371c97  bl #0x31809c4
0x06A72B38: 610240ad  ldp q1, q0, [x19]
0x06A72B3C: 400340f9  ldr x0, [x26]
0x06A72B40: e10300ad  stp q1, q0, [sp]
0x06A72B44: 419f4697  bl #0x3c1a848
0x06A72B48: 680340f9  ldr x8, [x27]
0x06A72B4C: f30300aa  mov x19, x0
0x06A72B50: e00308aa  mov x0, x8
0x06A72B54: 53381c97  bl #0x3180ca0
0x06A72B58: 820340f9  ldr x2, [x28]
0x06A72B5C: e1031faa  mov x1, xzr
0x06A72B60: e3031faa  mov x3, xzr
0x06A72B64: f40300aa  mov x20, x0
0x06A72B68: 688cd297  bl #0x5f15d08
0x06A72B6C: e00740ad  ldp q0, q1, [sp]
0x06A72B70: a30340f9  ldr x3, [x29]
0x06A72B74: e8830091  add x8, sp, #0x20
0x06A72B78: e0030191  add x0, sp, #0x40
0x06A72B7C: e10313aa  mov x1, x19
0x06A72B80: e20314aa  mov x2, x20
0x06A72B84: e00702ad  stp q0, q1, [sp, #0x40]
0x06A72B88: dfcc4b97  bl #0x3d65f04
0x06A72B8C: e10240f9  ldr x1, [x23]
0x06A72B90: e0830091  add x0, sp, #0x20
0x06A72B94: c5806497  bl #0x4392ea8
0x06A72B98: 280340f9  ldr x8, [x25]
0x06A72B9C: f30300aa  mov x19, x0
0x06A72BA0: e00308aa  mov x0, x8
0x06A72BA4: 3f381c97  bl #0x3180ca0
0x06A72BA8: 020340f9  ldr x2, [x24]
0x06A72BAC: e10315aa  mov x1, x21
0x06A72BB0: e3031faa  mov x3, xzr
0x06A72BB4: f40300aa  mov x20, x0
0x06A72BB8: 046c9f97  bl #0x524dbc8
0x06A72BBC: e86500f0  adrp x8, #0x7731000
0x06A72BC0: 08c541f9  ldr x8, [x8, #0x388]
0x06A72BC4: e00313aa  mov x0, x19
0x06A72BC8: e10314aa  mov x1, x20
0x06A72BCC: 020140f9  ldr x2, [x8]
0x06A72BD0: c34c4897  bl #0x3c85edc
0x06A72BD4: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x06A72BD8: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x06A72BDC: f85f49a9  ldp x24, x23, [sp, #0x90]
0x06A72BE0: fa6748a9  ldp x26, x25, [sp, #0x80]
0x06A72BE4: fc6f47a9  ldp x28, x27, [sp, #0x70]
0x06A72BE8: fd7b46a9  ldp x29, x30, [sp, #0x60]
0x06A72BEC: ff030391  add sp, sp, #0xc0
0x06A72BF0: c0035fd6  ret
0x06A72BF4: 2e381c97  bl #0x3180cac

; RVA 0x6A72308 | private void PendingMergeConfirmation(TickContext context, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent> entity, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent> otherEntity) { }
; bytes=384 sha256=4f298636fff1c548ab4a731e818427e33f2525947b195d69fcacb41ef3e03cf3 status=arm64_complete_bound indexed_start=True
0x06A72308: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A7230C: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A72310: f65702a9  stp x22, x21, [sp, #0x20]
0x06A72314: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A72318: d8950090  adrp x24, #0x7d2a000
0x06A7231C: f46500f0  adrp x20, #0x7731000
0x06A72320: 08bf5b39  ldrb w8, [x24, #0x6ef]
0x06A72324: 94a641f9  ldr x20, [x20, #0x348]
0x06A72328: f60303aa  mov x22, x3
0x06A7232C: f50302aa  mov x21, x2
0x06A72330: f30301aa  mov x19, x1
0x06A72334: f70300aa  mov x23, x0
0x06A72338: 88010037  tbnz w8, #0, #0x6a72368
0x06A7233C: 206000f0  adrp x0, #0x7679000
0x06A72340: 001044f9  ldr x0, [x0, #0x820]
0x06A72344: b5391c97  bl #0x3180a18
0x06A72348: e06500f0  adrp x0, #0x7731000
0x06A7234C: 00a441f9  ldr x0, [x0, #0x348]
0x06A72350: b2391c97  bl #0x3180a18
0x06A72354: e06500f0  adrp x0, #0x7731000
0x06A72358: 00a841f9  ldr x0, [x0, #0x350]
0x06A7235C: af391c97  bl #0x3180a18
0x06A72360: 28008052  movz w8, #0x1
0x06A72364: 08bf1b39  strb w8, [x24, #0x6ef]
0x06A72368: a81240b9  ldr w8, [x21, #0x10]
0x06A7236C: 800240f9  ldr x0, [x20]
0x06A72370: 730a40f9  ldr x19, [x19, #0x10]
0x06A72374: 1f050071  cmp w8, #1
0x06A72378: a802969a  csel x8, x21, x22, eq
0x06A7237C: c902959a  csel x9, x22, x21, eq
0x06A72380: 190140f9  ldr x25, [x8]
0x06A72384: 380140f9  ldr x24, [x9]
0x06A72388: 463a1c97  bl #0x3180ca0
0x06A7238C: e1031faa  mov x1, xzr
0x06A72390: f40300aa  mov x20, x0
0x06A72394: 43a20094  bl #0x6a9aca0
0x06A72398: 740700b4  cbz x20, #0x6a72484
0x06A7239C: e00314aa  mov x0, x20
0x06A723A0: 9f1200b9  str wzr, [x20, #0x10]
0x06A723A4: 198c01f8  str x25, [x0, #0x18]!
0x06A723A8: e10319aa  mov x1, x25
0x06A723AC: 86391c97  bl #0x31809c4
0x06A723B0: e00314aa  mov x0, x20
0x06A723B4: 180c02f8  str x24, [x0, #0x20]!
0x06A723B8: e10318aa  mov x1, x24
0x06A723BC: 82391c97  bl #0x31809c4
0x06A723C0: e00a40f9  ldr x0, [x23, #0x10]
0x06A723C4: 000600b4  cbz x0, #0x6a72484
0x06A723C8: c20240f9  ldr x2, [x22]
0x06A723CC: a10240f9  ldr x1, [x21]
0x06A723D0: e3031faa  mov x3, xzr
0x06A723D4: b5500094  bl #0x6a866a8
0x06A723D8: 800200b4  cbz x0, #0x6a72428
0x06A723DC: 2a6000f0  adrp x10, #0x7679000
0x06A723E0: 080040f9  ldr x8, [x0]
0x06A723E4: 4a1144f9  ldr x10, [x10, #0x820]
0x06A723E8: f50300aa  mov x21, x0
0x06A723EC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A723F0: 410140f9  ldr x1, [x10]
0x06A723F4: 290100b4  cbz x9, #0x6a72418
0x06A723F8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A723FC: 4a210091  add x10, x10, #8
0x06A72400: 4b815ff8  ldur x11, [x10, #-8]
0x06A72404: 7f0101eb  cmp x11, x1
0x06A72408: 40010054  b.eq #0x6a72430
0x06A7240C: 290500f1  subs x9, x9, #1
0x06A72410: 4a410091  add x10, x10, #0x10
0x06A72414: 61ffff54  b.ne #0x6a72400
0x06A72418: e00315aa  mov x0, x21
0x06A7241C: e2031f2a  mov w2, wzr
0x06A72420: bc911b97  bl #0x3156b10
0x06A72424: 06000014  b #0x6a7243c
0x06A72428: e1031faa  mov x1, xzr
0x06A7242C: 08000014  b #0x6a7244c
0x06A72430: 490180b9  ldrsw x9, [x10]
0x06A72434: 0811098b  add x8, x8, x9, lsl #4
0x06A72438: 00e10491  add x0, x8, #0x138
0x06A7243C: 080440a9  ldp x8, x1, [x0]
0x06A72440: e00315aa  mov x0, x21
0x06A72444: 00013fd6  blr x8
0x06A72448: e10300aa  mov x1, x0
0x06A7244C: e00314aa  mov x0, x20
0x06A72450: 018c02f8  str x1, [x0, #0x28]!
0x06A72454: 5c391c97  bl #0x31809c4
0x06A72458: 730100b4  cbz x19, #0x6a72484
0x06A7245C: e86500f0  adrp x8, #0x7731000
0x06A72460: 08a941f9  ldr x8, [x8, #0x350]
0x06A72464: e00313aa  mov x0, x19
0x06A72468: e10314aa  mov x1, x20
0x06A7246C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A72470: 020140f9  ldr x2, [x8]
0x06A72474: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A72478: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A7247C: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A72480: d9434d17  b #0x3dc33e4
0x06A72484: 0a3a1c97  bl #0x3180cac

; RVA 0x6A72488 | private void PendingSplitConfirmation(TickContext context, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent> entity, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent> otherEntity) { }
; bytes=316 sha256=aa19c3218cbd0adbe154f61ae1eac6bfce86d56a14b27289c68f3b476e06200a status=arm64_complete_bound indexed_start=True
0x06A72488: ffc301d1  sub sp, sp, #0x70
0x06A7248C: fe1b00f9  str x30, [sp, #0x30]
0x06A72490: f85f04a9  stp x24, x23, [sp, #0x40]
0x06A72494: f65705a9  stp x22, x21, [sp, #0x50]
0x06A72498: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A7249C: d7950090  adrp x23, #0x7d2a000
0x06A724A0: f86500f0  adrp x24, #0x7731000
0x06A724A4: e8c25b39  ldrb w8, [x23, #0x6f0]
0x06A724A8: 18a741f9  ldr x24, [x24, #0x348]
0x06A724AC: f50303aa  mov x21, x3
0x06A724B0: f60302aa  mov x22, x2
0x06A724B4: f30301aa  mov x19, x1
0x06A724B8: f40300aa  mov x20, x0
0x06A724BC: 88010037  tbnz w8, #0, #0x6a724ec
0x06A724C0: 40600090  adrp x0, #0x767a000
0x06A724C4: 004442f9  ldr x0, [x0, #0x488]
0x06A724C8: 54391c97  bl #0x3180a18
0x06A724CC: e06500f0  adrp x0, #0x7731000
0x06A724D0: 00a441f9  ldr x0, [x0, #0x348]
0x06A724D4: 51391c97  bl #0x3180a18
0x06A724D8: e06500f0  adrp x0, #0x7731000
0x06A724DC: 00a841f9  ldr x0, [x0, #0x350]
0x06A724E0: 4e391c97  bl #0x3180a18
0x06A724E4: 28008052  movz w8, #0x1
0x06A724E8: e8c21b39  strb w8, [x23, #0x6f0]
0x06A724EC: c81240b9  ldr w8, [x22, #0x10]
0x06A724F0: 000340f9  ldr x0, [x24]
0x06A724F4: 730a40f9  ldr x19, [x19, #0x10]
0x06A724F8: 1f110071  cmp w8, #4
0x06A724FC: c802959a  csel x8, x22, x21, eq
0x06A72500: a902969a  csel x9, x21, x22, eq
0x06A72504: 170140f9  ldr x23, [x8]
0x06A72508: 360140f9  ldr x22, [x9]
0x06A7250C: e5391c97  bl #0x3180ca0
0x06A72510: e1031faa  mov x1, xzr
0x06A72514: f50300aa  mov x21, x0
0x06A72518: e2a10094  bl #0x6a9aca0
0x06A7251C: 350500b4  cbz x21, #0x6a725c0
0x06A72520: 28008052  movz w8, #0x1
0x06A72524: e00315aa  mov x0, x21
0x06A72528: a81200b9  str w8, [x21, #0x10]
0x06A7252C: 178c01f8  str x23, [x0, #0x18]!
0x06A72530: e10317aa  mov x1, x23
0x06A72534: 24391c97  bl #0x31809c4
0x06A72538: e00315aa  mov x0, x21
0x06A7253C: 160c02f8  str x22, [x0, #0x20]!
0x06A72540: e10316aa  mov x1, x22
0x06A72544: 20391c97  bl #0x31809c4
0x06A72548: d60300b4  cbz x22, #0x6a725c0
0x06A7254C: 48600090  adrp x8, #0x767a000
0x06A72550: 084542f9  ldr x8, [x8, #0x488]
0x06A72554: 940e40f9  ldr x20, [x20, #0x18]
0x06A72558: e00316aa  mov x0, x22
0x06A7255C: 010140f9  ldr x1, [x8]
0x06A72560: e8030091  mov x8, sp
0x06A72564: 3ba34697  bl #0x3c1b250
0x06A72568: d40200b4  cbz x20, #0x6a725c0
0x06A7256C: e10340f9  ldr x1, [sp]
0x06A72570: e00314aa  mov x0, x20
0x06A72574: e2031faa  mov x2, xzr
0x06A72578: 97570094  bl #0x6a883d4
0x06A7257C: e10300aa  mov x1, x0
0x06A72580: e00315aa  mov x0, x21
0x06A72584: 018c02f8  str x1, [x0, #0x28]!
0x06A72588: 0f391c97  bl #0x31809c4
0x06A7258C: b30100b4  cbz x19, #0x6a725c0
0x06A72590: e86500f0  adrp x8, #0x7731000
0x06A72594: 08a941f9  ldr x8, [x8, #0x350]
0x06A72598: e00313aa  mov x0, x19
0x06A7259C: e10315aa  mov x1, x21
0x06A725A0: 020140f9  ldr x2, [x8]
0x06A725A4: 90434d97  bl #0x3dc33e4
0x06A725A8: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A725AC: f65745a9  ldp x22, x21, [sp, #0x50]
0x06A725B0: f85f44a9  ldp x24, x23, [sp, #0x40]
0x06A725B4: fe1b40f9  ldr x30, [sp, #0x30]
0x06A725B8: ffc30191  add sp, sp, #0x70
0x06A725BC: c0035fd6  ret
0x06A725C0: bb391c97  bl #0x3180cac

; RVA 0x6A72C00 | public void .ctor() { }
; bytes=8 sha256=cda3d377953860a12f71bea10dba55fc5bdd052b84441888f18eefed7b8bee1d status=arm64_complete_bound indexed_start=True
0x06A72C00: e1031faa  mov x1, xzr
0x06A72C04: 7e9eb117  b #0x56da5fc

