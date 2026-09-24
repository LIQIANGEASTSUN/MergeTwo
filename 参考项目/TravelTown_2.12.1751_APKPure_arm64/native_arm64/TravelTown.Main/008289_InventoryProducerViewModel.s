; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8289 Merger.Game.ViewModel.InventoryProducerViewModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x662BBDC | public List<ProducerInventorySlotViewData> get_UnlocksAtItems() { }
; bytes=436 sha256=6fc143349f65e581a0d2f46eb746dc3b006c6ffb32afd2f4d9567ea7095bfd07 status=arm64_complete_bound indexed_start=True
0x0662BBDC: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x0662BBE0: fa6701a9  stp x26, x25, [sp, #0x10]
0x0662BBE4: f85f02a9  stp x24, x23, [sp, #0x20]
0x0662BBE8: f65703a9  stp x22, x21, [sp, #0x30]
0x0662BBEC: f44f04a9  stp x20, x19, [sp, #0x40]
0x0662BBF0: f4b70090  adrp x20, #0x7d27000
0x0662BBF4: 88ea7839  ldrb w8, [x20, #0xe3a]
0x0662BBF8: f30300aa  mov x19, x0
0x0662BBFC: 68030037  tbnz w8, #0, #0x662bc68
0x0662BC00: c08600f0  adrp x0, #0x7706000
0x0662BC04: 00e844f9  ldr x0, [x0, #0x9d0]
0x0662BC08: 84532d97  bl #0x3180a18
0x0662BC0C: c08600f0  adrp x0, #0x7706000
0x0662BC10: 00ec44f9  ldr x0, [x0, #0x9d8]
0x0662BC14: 81532d97  bl #0x3180a18
0x0662BC18: c08600f0  adrp x0, #0x7706000
0x0662BC1C: 00f044f9  ldr x0, [x0, #0x9e0]
0x0662BC20: 7e532d97  bl #0x3180a18
0x0662BC24: c08600f0  adrp x0, #0x7706000
0x0662BC28: 00f444f9  ldr x0, [x0, #0x9e8]
0x0662BC2C: 7b532d97  bl #0x3180a18
0x0662BC30: c08600f0  adrp x0, #0x7706000
0x0662BC34: 00f844f9  ldr x0, [x0, #0x9f0]
0x0662BC38: 78532d97  bl #0x3180a18
0x0662BC3C: c08500f0  adrp x0, #0x76e6000
0x0662BC40: 00c047f9  ldr x0, [x0, #0xf80]
0x0662BC44: 75532d97  bl #0x3180a18
0x0662BC48: c08600f0  adrp x0, #0x7706000
0x0662BC4C: 00fc44f9  ldr x0, [x0, #0x9f8]
0x0662BC50: 72532d97  bl #0x3180a18
0x0662BC54: c08600f0  adrp x0, #0x7706000
0x0662BC58: 000045f9  ldr x0, [x0, #0xa00]
0x0662BC5C: 6f532d97  bl #0x3180a18
0x0662BC60: 28008052  movz w8, #0x1
0x0662BC64: 88ea3839  strb w8, [x20, #0xe3a]
0x0662BC68: 746e40f9  ldr x20, [x19, #0xd8]
0x0662BC6C: 140900b4  cbz x20, #0x662bd8c
0x0662BC70: ca8500f0  adrp x10, #0x76e6000
0x0662BC74: d58600f0  adrp x21, #0x7706000
0x0662BC78: 4ac147f9  ldr x10, [x10, #0xf80]
0x0662BC7C: b5fa44f9  ldr x21, [x21, #0x9f0]
0x0662BC80: 880240f9  ldr x8, [x20]
0x0662BC84: db8600f0  adrp x27, #0x7706000
0x0662BC88: da8600f0  adrp x26, #0x7706000
0x0662BC8C: d98600f0  adrp x25, #0x7706000
0x0662BC90: d88600f0  adrp x24, #0x7706000
0x0662BC94: d78600f0  adrp x23, #0x7706000
0x0662BC98: d68600f0  adrp x22, #0x7706000
0x0662BC9C: 7bff44f9  ldr x27, [x27, #0x9f8]
0x0662BCA0: 5af344f9  ldr x26, [x26, #0x9e0]
0x0662BCA4: 39f744f9  ldr x25, [x25, #0x9e8]
0x0662BCA8: 095d4279  ldrh w9, [x8, #0x12e]
0x0662BCAC: 410140f9  ldr x1, [x10]
0x0662BCB0: 180345f9  ldr x24, [x24, #0xa00]
0x0662BCB4: f7ea44f9  ldr x23, [x23, #0x9d0]
0x0662BCB8: d6ee44f9  ldr x22, [x22, #0x9d8]
0x0662BCBC: 290100b4  cbz x9, #0x662bce0
0x0662BCC0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662BCC4: 4a210091  add x10, x10, #8
0x0662BCC8: 4b815ff8  ldur x11, [x10, #-8]
0x0662BCCC: 7f0101eb  cmp x11, x1
0x0662BCD0: 00010054  b.eq #0x662bcf0
0x0662BCD4: 290500f1  subs x9, x9, #1
0x0662BCD8: 4a410091  add x10, x10, #0x10
0x0662BCDC: 61ffff54  b.ne #0x662bcc8
0x0662BCE0: e00314aa  mov x0, x20
0x0662BCE4: e2031f2a  mov w2, wzr
0x0662BCE8: 8aab2c97  bl #0x3156b10
0x0662BCEC: 04000014  b #0x662bcfc
0x0662BCF0: 490180b9  ldrsw x9, [x10]
0x0662BCF4: 0811098b  add x8, x8, x9, lsl #4
0x0662BCF8: 00e10491  add x0, x8, #0x138
0x0662BCFC: 080440a9  ldp x8, x1, [x0]
0x0662BD00: e00314aa  mov x0, x20
0x0662BD04: 00013fd6  blr x8
0x0662BD08: a80240f9  ldr x8, [x21]
0x0662BD0C: f40300aa  mov x20, x0
0x0662BD10: e00308aa  mov x0, x8
0x0662BD14: e3532d97  bl #0x3180ca0
0x0662BD18: 620340f9  ldr x2, [x27]
0x0662BD1C: e10313aa  mov x1, x19
0x0662BD20: e3031faa  mov x3, xzr
0x0662BD24: f50300aa  mov x21, x0
0x0662BD28: a5a8b097  bl #0x5255fbc
0x0662BD2C: 420340f9  ldr x2, [x26]
0x0662BD30: e00314aa  mov x0, x20
0x0662BD34: e10315aa  mov x1, x21
0x0662BD38: 5c6d5997  bl #0x3c872a8
0x0662BD3C: 280340f9  ldr x8, [x25]
0x0662BD40: f40300aa  mov x20, x0
0x0662BD44: e00308aa  mov x0, x8
0x0662BD48: d6532d97  bl #0x3180ca0
0x0662BD4C: 020340f9  ldr x2, [x24]
0x0662BD50: e10313aa  mov x1, x19
0x0662BD54: e3031faa  mov x3, xzr
0x0662BD58: f50300aa  mov x21, x0
0x0662BD5C: 17abb097  bl #0x52569b8
0x0662BD60: e20240f9  ldr x2, [x23]
0x0662BD64: e00314aa  mov x0, x20
0x0662BD68: e10315aa  mov x1, x21
0x0662BD6C: 4a935897  bl #0x3c50a94
0x0662BD70: c10240f9  ldr x1, [x22]
0x0662BD74: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0662BD78: f65743a9  ldp x22, x21, [sp, #0x30]
0x0662BD7C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0662BD80: fa6741a9  ldp x26, x25, [sp, #0x10]
0x0662BD84: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x0662BD88: 92d05817  b #0x3c5ffd0
0x0662BD8C: c8532d97  bl #0x3180cac

; RVA 0x662BD90 | public ReadOnlyCollection<IMergeItem> get_UnlockedProducerSlotItems() { }
; bytes=28 sha256=f2ca0fb91f8563822bcab4161e6385ca3308b4bfb6e3098680034eea0fe66ae7 status=arm64_complete_bound indexed_start=True
0x0662BD90: fe0f1ff8  str x30, [sp, #-0x10]!
0x0662BD94: 06000094  bl #0x662bdac
0x0662BD98: 800000b4  cbz x0, #0x662bda8
0x0662BD9C: 007840f9  ldr x0, [x0, #0xf0]
0x0662BDA0: fe0741f8  ldr x30, [sp], #0x10
0x0662BDA4: c0035fd6  ret
0x0662BDA8: c1532d97  bl #0x3180cac

; RVA 0x662BE18 | public ReadOnlyCollection<string> get_NewProducerSlotItemIds() { }
; bytes=28 sha256=c3cdd913953c6868b4b4fc746b8fc4324db8d092f422720214d4e972c2cfdb24 status=arm64_complete_bound indexed_start=True
0x0662BE18: fe0f1ff8  str x30, [sp, #-0x10]!
0x0662BE1C: e4ffff97  bl #0x662bdac
0x0662BE20: 800000b4  cbz x0, #0x662be30
0x0662BE24: e1031faa  mov x1, xzr
0x0662BE28: fe0741f8  ldr x30, [sp], #0x10
0x0662BE2C: 9353f117  b #0x6280c78
0x0662BE30: 9f532d97  bl #0x3180cac

; RVA 0x662BDAC | private InventorySystem get_InventorySystem() { }
; bytes=108 sha256=e74a16b2b2d39e951894d2f86cc70a5d73b8f958624aaa3d3c491761000a0f24 status=arm64_complete_bound indexed_start=True
0x0662BDAC: fe0f1ef8  str x30, [sp, #-0x20]!
0x0662BDB0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662BDB4: f4b70090  adrp x20, #0x7d27000
0x0662BDB8: 88ee7839  ldrb w8, [x20, #0xe3b]
0x0662BDBC: f30300aa  mov x19, x0
0x0662BDC0: c8000037  tbnz w8, #0, #0x662bdd8
0x0662BDC4: c08600f0  adrp x0, #0x7706000
0x0662BDC8: 00c444f9  ldr x0, [x0, #0x988]
0x0662BDCC: 13532d97  bl #0x3180a18
0x0662BDD0: 28008052  movz w8, #0x1
0x0662BDD4: 88ee3839  strb w8, [x20, #0xe3b]
0x0662BDD8: f40313aa  mov x20, x19
0x0662BDDC: 800e4ff8  ldr x0, [x20, #0xf0]!
0x0662BDE0: 600100b5  cbnz x0, #0x662be0c
0x0662BDE4: c88600f0  adrp x8, #0x7706000
0x0662BDE8: 08c544f9  ldr x8, [x8, #0x988]
0x0662BDEC: e00313aa  mov x0, x19
0x0662BDF0: 010140f9  ldr x1, [x8]
0x0662BDF4: 3b755a97  bl #0x3cc92e0
0x0662BDF8: e10300aa  mov x1, x0
0x0662BDFC: 607a00f9  str x0, [x19, #0xf0]
0x0662BE00: e00314aa  mov x0, x20
0x0662BE04: f0522d97  bl #0x31809c4
0x0662BE08: 607a40f9  ldr x0, [x19, #0xf0]
0x0662BE0C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662BE10: fe0742f8  ldr x30, [sp], #0x20
0x0662BE14: c0035fd6  ret

; RVA 0x662BE34 | public void TryRemoveItem(int slotIndex) { }
; bytes=148 sha256=ff266e2520daddb0a53d87378d78e4eaf62f5821817a8dbd253e329cb0129a47 status=arm64_complete_bound indexed_start=True
0x0662BE34: fe0f1df8  str x30, [sp, #-0x30]!
0x0662BE38: f65701a9  stp x22, x21, [sp, #0x10]
0x0662BE3C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0662BE40: f6b70090  adrp x22, #0x7d27000
0x0662BE44: d58600f0  adrp x21, #0x7706000
0x0662BE48: c8f27839  ldrb w8, [x22, #0xe3c]
0x0662BE4C: b5ca44f9  ldr x21, [x21, #0x990]
0x0662BE50: f303012a  mov w19, w1
0x0662BE54: f40300aa  mov x20, x0
0x0662BE58: 28010037  tbnz w8, #0, #0x662be7c
0x0662BE5C: c08600f0  adrp x0, #0x7706000
0x0662BE60: 00cc44f9  ldr x0, [x0, #0x998]
0x0662BE64: ed522d97  bl #0x3180a18
0x0662BE68: c08600f0  adrp x0, #0x7706000
0x0662BE6C: 00c844f9  ldr x0, [x0, #0x990]
0x0662BE70: ea522d97  bl #0x3180a18
0x0662BE74: 28008052  movz w8, #0x1
0x0662BE78: c8f23839  strb w8, [x22, #0xe3c]
0x0662BE7C: a00240f9  ldr x0, [x21]
0x0662BE80: 941240f9  ldr x20, [x20, #0x20]
0x0662BE84: 87532d97  bl #0x3180ca0
0x0662BE88: 22008052  movz w2, #0x1
0x0662BE8C: e103132a  mov w1, w19
0x0662BE90: e3031faa  mov x3, xzr
0x0662BE94: f50300aa  mov x21, x0
0x0662BE98: 9c20e797  bl #0x5ff4108
0x0662BE9C: 540100b4  cbz x20, #0x662bec4
0x0662BEA0: c88600f0  adrp x8, #0x7706000
0x0662BEA4: 08cd44f9  ldr x8, [x8, #0x998]
0x0662BEA8: e00314aa  mov x0, x20
0x0662BEAC: e10315aa  mov x1, x21
0x0662BEB0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0662BEB4: 020140f9  ldr x2, [x8]
0x0662BEB8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0662BEBC: fe0743f8  ldr x30, [sp], #0x30
0x0662BEC0: abe35d17  b #0x3da4d6c
0x0662BEC4: 7a532d97  bl #0x3180cac

; RVA 0x662BEC8 | public IMergeItem GetItem(int slotIndex) { }
; bytes=176 sha256=172efa9e923668047405ae4f576c6b8385f0c7f248646d1e3c0f912e06649298 status=arm64_complete_bound indexed_start=True
0x0662BEC8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662BECC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662BED0: f5b70090  adrp x21, #0x7d27000
0x0662BED4: a8f67839  ldrb w8, [x21, #0xe3d]
0x0662BED8: f303012a  mov w19, w1
0x0662BEDC: f40300aa  mov x20, x0
0x0662BEE0: c8000037  tbnz w8, #0, #0x662bef8
0x0662BEE4: c08600f0  adrp x0, #0x7706000
0x0662BEE8: 004c44f9  ldr x0, [x0, #0x898]
0x0662BEEC: cb522d97  bl #0x3180a18
0x0662BEF0: 28008052  movz w8, #0x1
0x0662BEF4: a8f63839  strb w8, [x21, #0xe3d]
0x0662BEF8: 946a40f9  ldr x20, [x20, #0xd0]
0x0662BEFC: d40300b4  cbz x20, #0x662bf74
0x0662BF00: ca8600f0  adrp x10, #0x7706000
0x0662BF04: 880240f9  ldr x8, [x20]
0x0662BF08: 4a4d44f9  ldr x10, [x10, #0x898]
0x0662BF0C: 095d4279  ldrh w9, [x8, #0x12e]
0x0662BF10: 410140f9  ldr x1, [x10]
0x0662BF14: 290100b4  cbz x9, #0x662bf38
0x0662BF18: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662BF1C: 4a210091  add x10, x10, #8
0x0662BF20: 4b815ff8  ldur x11, [x10, #-8]
0x0662BF24: 7f0101eb  cmp x11, x1
0x0662BF28: 00010054  b.eq #0x662bf48
0x0662BF2C: 290500f1  subs x9, x9, #1
0x0662BF30: 4a410091  add x10, x10, #0x10
0x0662BF34: 61ffff54  b.ne #0x662bf20
0x0662BF38: c2008052  movz w2, #0x6
0x0662BF3C: e00314aa  mov x0, x20
0x0662BF40: f4aa2c97  bl #0x3156b10
0x0662BF44: 05000014  b #0x662bf58
0x0662BF48: 490140b9  ldr w9, [x10]
0x0662BF4C: 29190011  add w9, w9, #6
0x0662BF50: 08d1298b  add x8, x8, w9, sxtw #4
0x0662BF54: 00e10491  add x0, x8, #0x138
0x0662BF58: 040c40a9  ldp x4, x3, [x0]
0x0662BF5C: e00314aa  mov x0, x20
0x0662BF60: e103132a  mov w1, w19
0x0662BF64: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662BF68: 22008052  movz w2, #0x1
0x0662BF6C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662BF70: 80001fd6  br x4
0x0662BF74: 4e532d97  bl #0x3180cac

; RVA 0x662BF78 | public void .ctor() { }
; bytes=8 sha256=dd470badbbc2613a4d5321586a1ca749eee9d795b1fd0209fde000ad61d85b4f status=arm64_complete_bound indexed_start=True
0x0662BF78: e1031faa  mov x1, xzr
0x0662BF7C: 4e9ceb17  b #0x61130b4

; RVA 0x662BF80 | private bool <get_UnlocksAtItems>b__6_0(InventoryProducerSlotUnlock el) { }
; bytes=212 sha256=bd0dfef33264ce69f8640d77b1197b6a927d9b6dad1ce17e6ce09e0099abd93e status=arm64_complete_bound indexed_start=True
0x0662BF80: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662BF84: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662BF88: f5b70090  adrp x21, #0x7d27000
0x0662BF8C: a8fa7839  ldrb w8, [x21, #0xe3e]
0x0662BF90: f40301aa  mov x20, x1
0x0662BF94: f30300aa  mov x19, x0
0x0662BF98: 28010037  tbnz w8, #0, #0x662bfbc
0x0662BF9C: 20820090  adrp x0, #0x766f000
0x0662BFA0: 00fc40f9  ldr x0, [x0, #0x1f8]
0x0662BFA4: 9d522d97  bl #0x3180a18
0x0662BFA8: e08400b0  adrp x0, #0x76c8000
0x0662BFAC: 003c47f9  ldr x0, [x0, #0xe78]
0x0662BFB0: 9a522d97  bl #0x3180a18
0x0662BFB4: 28008052  movz w8, #0x1
0x0662BFB8: a8fa3839  strb w8, [x21, #0xe3e]
0x0662BFBC: b40400b4  cbz x20, #0x662c050
0x0662BFC0: 737640f9  ldr x19, [x19, #0xe8]
0x0662BFC4: 730400b4  cbz x19, #0x662c050
0x0662BFC8: ea8400b0  adrp x10, #0x76c8000
0x0662BFCC: 680240f9  ldr x8, [x19]
0x0662BFD0: 4a3d47f9  ldr x10, [x10, #0xe78]
0x0662BFD4: 35820090  adrp x21, #0x766f000
0x0662BFD8: 941a40b9  ldr w20, [x20, #0x18]
0x0662BFDC: 095d4279  ldrh w9, [x8, #0x12e]
0x0662BFE0: 410140f9  ldr x1, [x10]
0x0662BFE4: b5fe40f9  ldr x21, [x21, #0x1f8]
0x0662BFE8: 290100b4  cbz x9, #0x662c00c
0x0662BFEC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662BFF0: 4a210091  add x10, x10, #8
0x0662BFF4: 4b815ff8  ldur x11, [x10, #-8]
0x0662BFF8: 7f0101eb  cmp x11, x1
0x0662BFFC: 00010054  b.eq #0x662c01c
0x0662C000: 290500f1  subs x9, x9, #1
0x0662C004: 4a410091  add x10, x10, #0x10
0x0662C008: 61ffff54  b.ne #0x662bff4
0x0662C00C: e00313aa  mov x0, x19
0x0662C010: e2031f2a  mov w2, wzr
0x0662C014: bfaa2c97  bl #0x3156b10
0x0662C018: 04000014  b #0x662c028
0x0662C01C: 490180b9  ldrsw x9, [x10]
0x0662C020: 0811098b  add x8, x8, x9, lsl #4
0x0662C024: 00e10491  add x0, x8, #0x138
0x0662C028: 080440a9  ldp x8, x1, [x0]
0x0662C02C: e00313aa  mov x0, x19
0x0662C030: 00013fd6  blr x8
0x0662C034: a10240f9  ldr x1, [x21]
0x0662C038: 158a9797  bl #0x4c0e88c
0x0662C03C: 9f02006b  cmp w20, w0
0x0662C040: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662C044: e0d79f1a  cset w0, gt
0x0662C048: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662C04C: c0035fd6  ret
0x0662C050: 17532d97  bl #0x3180cac

; RVA 0x662C054 | private ProducerInventorySlotViewData <get_UnlocksAtItems>b__6_1(InventoryProducerSlotUnlock x) { }
; bytes=408 sha256=ff029be4401ef386cafafb7c572d147248281cafa37aa4787e46643f24ebe3cb status=arm64_complete_bound indexed_start=True
0x0662C054: fe0f1df8  str x30, [sp, #-0x30]!
0x0662C058: f65701a9  stp x22, x21, [sp, #0x10]
0x0662C05C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0662C060: d4b700f0  adrp x20, #0x7d27000
0x0662C064: d68600d0  adrp x22, #0x7706000
0x0662C068: 88fe7839  ldrb w8, [x20, #0xe3f]
0x0662C06C: d60645f9  ldr x22, [x22, #0xa08]
0x0662C070: f30301aa  mov x19, x1
0x0662C074: f50300aa  mov x21, x0
0x0662C078: e8010037  tbnz w8, #0, #0x662c0b4
0x0662C07C: a0860090  adrp x0, #0x7700000
0x0662C080: 004044f9  ldr x0, [x0, #0x880]
0x0662C084: 65522d97  bl #0x3180a18
0x0662C088: 80820090  adrp x0, #0x767c000
0x0662C08C: 002441f9  ldr x0, [x0, #0x248]
0x0662C090: 62522d97  bl #0x3180a18
0x0662C094: 608200d0  adrp x0, #0x767a000
0x0662C098: 004c42f9  ldr x0, [x0, #0x498]
0x0662C09C: 5f522d97  bl #0x3180a18
0x0662C0A0: c08600d0  adrp x0, #0x7706000
0x0662C0A4: 000445f9  ldr x0, [x0, #0xa08]
0x0662C0A8: 5c522d97  bl #0x3180a18
0x0662C0AC: 28008052  movz w8, #0x1
0x0662C0B0: 88fe3839  strb w8, [x20, #0xe3f]
0x0662C0B4: c00240f9  ldr x0, [x22]
0x0662C0B8: fa522d97  bl #0x3180ca0
0x0662C0BC: e1031faa  mov x1, xzr
0x0662C0C0: f40300aa  mov x20, x0
0x0662C0C4: 4eb9c297  bl #0x56da5fc
0x0662C0C8: 130900b4  cbz x19, #0x662c1e8
0x0662C0CC: b57240f9  ldr x21, [x21, #0xe0]
0x0662C0D0: d50800b4  cbz x21, #0x662c1e8
0x0662C0D4: 6a8200d0  adrp x10, #0x767a000
0x0662C0D8: a80240f9  ldr x8, [x21]
0x0662C0DC: 4a4d42f9  ldr x10, [x10, #0x498]
0x0662C0E0: 760a40f9  ldr x22, [x19, #0x10]
0x0662C0E4: 095d4279  ldrh w9, [x8, #0x12e]
0x0662C0E8: 410140f9  ldr x1, [x10]
0x0662C0EC: 290100b4  cbz x9, #0x662c110
0x0662C0F0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662C0F4: 4a210091  add x10, x10, #8
0x0662C0F8: 4b815ff8  ldur x11, [x10, #-8]
0x0662C0FC: 7f0101eb  cmp x11, x1
0x0662C100: 00010054  b.eq #0x662c120
0x0662C104: 290500f1  subs x9, x9, #1
0x0662C108: 4a410091  add x10, x10, #0x10
0x0662C10C: 61ffff54  b.ne #0x662c0f8
0x0662C110: a2008052  movz w2, #0x5
0x0662C114: e00315aa  mov x0, x21
0x0662C118: 7eaa2c97  bl #0x3156b10
0x0662C11C: 05000014  b #0x662c130
0x0662C120: 490140b9  ldr w9, [x10]
0x0662C124: 29150011  add w9, w9, #5
0x0662C128: 08d1298b  add x8, x8, w9, sxtw #4
0x0662C12C: 00e10491  add x0, x8, #0x138
0x0662C130: 080840a9  ldp x8, x2, [x0]
0x0662C134: e00315aa  mov x0, x21
0x0662C138: e10316aa  mov x1, x22
0x0662C13C: 00013fd6  blr x8
0x0662C140: 400500b4  cbz x0, #0x662c1e8
0x0662C144: 8a820090  adrp x10, #0x767c000
0x0662C148: 080040f9  ldr x8, [x0]
0x0662C14C: 4a2541f9  ldr x10, [x10, #0x248]
0x0662C150: b6860090  adrp x22, #0x7700000
0x0662C154: f50300aa  mov x21, x0
0x0662C158: 095d4279  ldrh w9, [x8, #0x12e]
0x0662C15C: 410140f9  ldr x1, [x10]
0x0662C160: d64244f9  ldr x22, [x22, #0x880]
0x0662C164: 290100b4  cbz x9, #0x662c188
0x0662C168: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662C16C: 4a210091  add x10, x10, #8
0x0662C170: 4b815ff8  ldur x11, [x10, #-8]
0x0662C174: 7f0101eb  cmp x11, x1
0x0662C178: 00010054  b.eq #0x662c198
0x0662C17C: 290500f1  subs x9, x9, #1
0x0662C180: 4a410091  add x10, x10, #0x10
0x0662C184: 61ffff54  b.ne #0x662c170
0x0662C188: e00315aa  mov x0, x21
0x0662C18C: e2031f2a  mov w2, wzr
0x0662C190: 60aa2c97  bl #0x3156b10
0x0662C194: 04000014  b #0x662c1a4
0x0662C198: 490180b9  ldrsw x9, [x10]
0x0662C19C: 0811098b  add x8, x8, x9, lsl #4
0x0662C1A0: 00e10491  add x0, x8, #0x138
0x0662C1A4: 080440a9  ldp x8, x1, [x0]
0x0662C1A8: e00315aa  mov x0, x21
0x0662C1AC: 00013fd6  blr x8
0x0662C1B0: c10240f9  ldr x1, [x22]
0x0662C1B4: 526d5897  bl #0x3c476fc
0x0662C1B8: 940100b4  cbz x20, #0x662c1e8
0x0662C1BC: e10300aa  mov x1, x0
0x0662C1C0: e00314aa  mov x0, x20
0x0662C1C4: 010c01f8  str x1, [x0, #0x10]!
0x0662C1C8: ff512d97  bl #0x31809c4
0x0662C1CC: 681a40b9  ldr w8, [x19, #0x18]
0x0662C1D0: e00314aa  mov x0, x20
0x0662C1D4: f65741a9  ldp x22, x21, [sp, #0x10]
0x0662C1D8: 881a00b9  str w8, [x20, #0x18]
0x0662C1DC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0662C1E0: fe0743f8  ldr x30, [sp], #0x30
0x0662C1E4: c0035fd6  ret
0x0662C1E8: b1522d97  bl #0x3180cac

