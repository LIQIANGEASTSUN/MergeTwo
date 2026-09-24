; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32826 Merger.TimeLimitedItems.Systems.TimeLimitedItemsCleanUpSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B489A4 | public void Tick(TickContext context) { }
; bytes=140 sha256=e65e71e3ba9d8b0b690a64252775af09aec4206366415b14cbabb5dd587d5220 status=arm64_complete_bound indexed_start=True
0x06B489A4: ff8301d1  sub sp, sp, #0x60
0x06B489A8: fe2300f9  str x30, [sp, #0x40]
0x06B489AC: f44f05a9  stp x20, x19, [sp, #0x50]
0x06B489B0: 148f00f0  adrp x20, #0x7d2b000
0x06B489B4: 88064039  ldrb w8, [x20, #1]
0x06B489B8: f30301aa  mov x19, x1
0x06B489BC: c8000037  tbnz w8, #0, #0x6b489d4
0x06B489C0: 805f0090  adrp x0, #0x7738000
0x06B489C4: 00d442f9  ldr x0, [x0, #0x5a8]
0x06B489C8: 14e01897  bl #0x3180a18
0x06B489CC: 28008052  movz w8, #0x1
0x06B489D0: 88060039  strb w8, [x20, #1]
0x06B489D4: ff2700f9  str xzr, [sp, #0x48]
0x06B489D8: 600640f9  ldr x0, [x19, #8]
0x06B489DC: 800200b4  cbz x0, #0x6b48a2c
0x06B489E0: 885f0090  adrp x8, #0x7738000
0x06B489E4: 08d542f9  ldr x8, [x8, #0x5a8]
0x06B489E8: e1230191  add x1, sp, #0x48
0x06B489EC: 020140f9  ldr x2, [x8]
0x06B489F0: 8cf14997  bl #0x3dc5020
0x06B489F4: 40010036  tbz w0, #0, #0x6b48a1c
0x06B489F8: 600640ad  ldp q0, q1, [x19]
0x06B489FC: e82740f9  ldr x8, [sp, #0x48]
0x06B48A00: e00701ad  stp q0, q1, [sp, #0x20]
0x06B48A04: 480100b4  cbz x8, #0x6b48a2c
0x06B48A08: e00741ad  ldp q0, q1, [sp, #0x20]
0x06B48A0C: 020940f9  ldr x2, [x8, #0x10]
0x06B48A10: e1030091  mov x1, sp
0x06B48A14: e00700ad  stp q0, q1, [sp]
0x06B48A18: 06000094  bl #0x6b48a30
0x06B48A1C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06B48A20: fe2340f9  ldr x30, [sp, #0x40]
0x06B48A24: ff830191  add sp, sp, #0x60
0x06B48A28: c0035fd6  ret
0x06B48A2C: a0e01897  bl #0x3180cac

; RVA 0x6B48A30 | private void CleanUpEntities(TickContext context, List<Entity> entities) { }
; bytes=452 sha256=ef15f35582132bec871a1f297c83715f8f546eb20b7a78bc8194ac9afa015e4f status=arm64_complete_bound indexed_start=True
0x06B48A30: ff0302d1  sub sp, sp, #0x80
0x06B48A34: fe2300f9  str x30, [sp, #0x40]
0x06B48A38: f85f05a9  stp x24, x23, [sp, #0x50]
0x06B48A3C: f65706a9  stp x22, x21, [sp, #0x60]
0x06B48A40: f44f07a9  stp x20, x19, [sp, #0x70]
0x06B48A44: 158f00f0  adrp x21, #0x7d2b000
0x06B48A48: a80a4039  ldrb w8, [x21, #2]
0x06B48A4C: f30302aa  mov x19, x2
0x06B48A50: f40301aa  mov x20, x1
0x06B48A54: a8020037  tbnz w8, #0, #0x6b48aa8
0x06B48A58: c05b0090  adrp x0, #0x76c0000
0x06B48A5C: 00a847f9  ldr x0, [x0, #0xf50]
0x06B48A60: eedf1897  bl #0x3180a18
0x06B48A64: c05b0090  adrp x0, #0x76c0000
0x06B48A68: 00ac47f9  ldr x0, [x0, #0xf58]
0x06B48A6C: ebdf1897  bl #0x3180a18
0x06B48A70: c05b0090  adrp x0, #0x76c0000
0x06B48A74: 00b047f9  ldr x0, [x0, #0xf60]
0x06B48A78: e8df1897  bl #0x3180a18
0x06B48A7C: c05b0090  adrp x0, #0x76c0000
0x06B48A80: 00b447f9  ldr x0, [x0, #0xf68]
0x06B48A84: e5df1897  bl #0x3180a18
0x06B48A88: 805f0090  adrp x0, #0x7738000
0x06B48A8C: 00d842f9  ldr x0, [x0, #0x5b0]
0x06B48A90: e2df1897  bl #0x3180a18
0x06B48A94: 805f0090  adrp x0, #0x7738000
0x06B48A98: 00dc42f9  ldr x0, [x0, #0x5b8]
0x06B48A9C: dfdf1897  bl #0x3180a18
0x06B48AA0: 28008052  movz w8, #0x1
0x06B48AA4: a80a0039  strb w8, [x21, #2]
0x06B48AA8: ffff02a9  stp xzr, xzr, [sp, #0x28]
0x06B48AAC: ff1f00f9  str xzr, [sp, #0x38]
0x06B48AB0: 530600b4  cbz x19, #0x6b48b78
0x06B48AB4: c85b0090  adrp x8, #0x76c0000
0x06B48AB8: 08b547f9  ldr x8, [x8, #0xf68]
0x06B48ABC: d55b0090  adrp x21, #0x76c0000
0x06B48AC0: b5ae47f9  ldr x21, [x21, #0xf58]
0x06B48AC4: 985f0090  adrp x24, #0x7738000
0x06B48AC8: 010140f9  ldr x1, [x8]
0x06B48ACC: 975f0090  adrp x23, #0x7738000
0x06B48AD0: d65b0090  adrp x22, #0x76c0000
0x06B48AD4: 18df42f9  ldr x24, [x24, #0x5b8]
0x06B48AD8: f7da42f9  ldr x23, [x23, #0x5b0]
0x06B48ADC: d6aa47f9  ldr x22, [x22, #0xf50]
0x06B48AE0: e8a30091  add x8, sp, #0x28
0x06B48AE4: e00313aa  mov x0, x19
0x06B48AE8: 60f15397  bl #0x4045068
0x06B48AEC: a10240f9  ldr x1, [x21]
0x06B48AF0: e0a30091  add x0, sp, #0x28
0x06B48AF4: b0339397  bl #0x50159b4
0x06B48AF8: 00010036  tbz w0, #0, #0x6b48b18
0x06B48AFC: 800640ad  ldp q0, q1, [x20]
0x06B48B00: e11f40f9  ldr x1, [sp, #0x38]
0x06B48B04: e00700ad  stp q0, q1, [sp]
0x06B48B08: e0030091  mov x0, sp
0x06B48B0C: e2031faa  mov x2, xzr
0x06B48B10: 1741fd97  bl #0x6a98f6c
0x06B48B14: f6ffff17  b #0x6b48aec
0x06B48B18: c10240f9  ldr x1, [x22]
0x06B48B1C: e0a30091  add x0, sp, #0x28
0x06B48B20: a4339397  bl #0x50159b0
0x06B48B24: 000340f9  ldr x0, [x24]
0x06B48B28: 940a40f9  ldr x20, [x20, #0x10]
0x06B48B2C: 5de01897  bl #0x3180ca0
0x06B48B30: e1031faa  mov x1, xzr
0x06B48B34: f50300aa  mov x21, x0
0x06B48B38: b146ae97  bl #0x56da5fc
0x06B48B3C: e00315aa  mov x0, x21
0x06B48B40: 130c01f8  str x19, [x0, #0x10]!
0x06B48B44: e10313aa  mov x1, x19
0x06B48B48: 9fdf1897  bl #0x31809c4
0x06B48B4C: 740100b4  cbz x20, #0x6b48b78
0x06B48B50: e20240f9  ldr x2, [x23]
0x06B48B54: e00314aa  mov x0, x20
0x06B48B58: e10315aa  mov x1, x21
0x06B48B5C: 22ea4997  bl #0x3dc33e4
0x06B48B60: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06B48B64: f65746a9  ldp x22, x21, [sp, #0x60]
0x06B48B68: f85f45a9  ldp x24, x23, [sp, #0x50]
0x06B48B6C: fe2340f9  ldr x30, [sp, #0x40]
0x06B48B70: ff030291  add sp, sp, #0x80
0x06B48B74: c0035fd6  ret
0x06B48B78: 4de01897  bl #0x3180cac
0x06B48B7C: 01000014  b #0x6b48b80
0x06B48B80: f60300aa  mov x22, x0
0x06B48B84: 3f040071  cmp w1, #1
0x06B48B88: a1010054  b.ne #0x6b48bbc
0x06B48B8C: e00316aa  mov x0, x22
0x06B48B90: 60171a94  bl #0x71ce910
0x06B48B94: 150040f9  ldr x21, [x0]
0x06B48B98: 62171a94  bl #0x71ce920
0x06B48B9C: c85b0090  adrp x8, #0x76c0000
0x06B48BA0: 08a947f9  ldr x8, [x8, #0xf50]
0x06B48BA4: e0a30091  add x0, sp, #0x28
0x06B48BA8: 010140f9  ldr x1, [x8]
0x06B48BAC: 81339397  bl #0x50159b0
0x06B48BB0: b5fbffb4  cbz x21, #0x6b48b24
0x06B48BB4: e00315aa  mov x0, x21
0x06B48BB8: 3be01897  bl #0x3180ca4
0x06B48BBC: f5031faa  mov x21, xzr
0x06B48BC0: 02000014  b #0x6b48bc8
0x06B48BC4: f60300aa  mov x22, x0
0x06B48BC8: c85b0090  adrp x8, #0x76c0000
0x06B48BCC: 08a947f9  ldr x8, [x8, #0xf50]
0x06B48BD0: 010140f9  ldr x1, [x8]
0x06B48BD4: e0a30091  add x0, sp, #0x28
0x06B48BD8: 76339397  bl #0x50159b0
0x06B48BDC: 750000b5  cbnz x21, #0x6b48be8
0x06B48BE0: e00316aa  mov x0, x22
0x06B48BE4: 5d731c97  bl #0x3265958
0x06B48BE8: e00315aa  mov x0, x21
0x06B48BEC: 2ee01897  bl #0x3180ca4
0x06B48BF0: 49020b97  bl #0x2e09514

; RVA 0x6B48C24 | public void .ctor() { }
; bytes=8 sha256=4b82cf0b136330c2e6e320c8cfff9ff6667738208457f64323c50c89b813d1a3 status=arm64_complete_bound indexed_start=True
0x06B48C24: e1031faa  mov x1, xzr
0x06B48C28: 7546ae17  b #0x56da5fc

