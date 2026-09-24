; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1323 .Reward.<>c__DisplayClass84_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A2C188 | public void .ctor() { }
; bytes=8 sha256=823f8018b4c2f249100681107bf93a948c0c58c77dd055081557631db050facb status=arm64_complete_bound indexed_start=True
0x06A2C188: e1031faa  mov x1, xzr
0x06A2C18C: 1cb9b217  b #0x56da5fc

; RVA 0x6A2E720 | internal bool <CloneExcludingAmountType>b__0(ConditionalRewardMultiple conditional) { }
; bytes=52 sha256=47ddf03fec9ee2f164ee63eb73a963ed1952e0d8398e88a5562487b4e8d676e5 status=arm64_complete_bound indexed_start=True
0x06A2E720: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A2E724: 610100b4  cbz x1, #0x6a2e750
0x06A2E728: f30300aa  mov x19, x0
0x06A2E72C: e00301aa  mov x0, x1
0x06A2E730: c7eaff97  bl #0x6a2924c
0x06A2E734: e00000b4  cbz x0, #0x6a2e750
0x06A2E738: 081040b9  ldr w8, [x0, #0x10]
0x06A2E73C: 691240b9  ldr w9, [x19, #0x10]
0x06A2E740: 1f01096b  cmp w8, w9
0x06A2E744: e0079f1a  cset w0, ne
0x06A2E748: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A2E74C: c0035fd6  ret
0x06A2E750: 57491d97  bl #0x3180cac

; RVA 0x6A2E754 | internal bool <CloneExcludingAmountType>b__1(IRewardViewData reward) { }
; bytes=188 sha256=0bdb9b7e04eb13be0e9d9c4b00432aeae1957dbb58180d78d86eaf7088bf9f70 status=arm64_complete_bound indexed_start=True
0x06A2E754: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2E758: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2E75C: f5970090  adrp x21, #0x7d2a000
0x06A2E760: a8de5139  ldrb w8, [x21, #0x477]
0x06A2E764: f40301aa  mov x20, x1
0x06A2E768: f30300aa  mov x19, x0
0x06A2E76C: c8000037  tbnz w8, #0, #0x6a2e784
0x06A2E770: 006200f0  adrp x0, #0x7671000
0x06A2E774: 00c443f9  ldr x0, [x0, #0x788]
0x06A2E778: a8481d97  bl #0x3180a18
0x06A2E77C: 28008052  movz w8, #0x1
0x06A2E780: a8de1139  strb w8, [x21, #0x477]
0x06A2E784: 540400b4  cbz x20, #0x6a2e80c
0x06A2E788: 0a6200f0  adrp x10, #0x7671000
0x06A2E78C: 880240f9  ldr x8, [x20]
0x06A2E790: 4ac543f9  ldr x10, [x10, #0x788]
0x06A2E794: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E798: 410140f9  ldr x1, [x10]
0x06A2E79C: 290100b4  cbz x9, #0x6a2e7c0
0x06A2E7A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E7A4: 4a210091  add x10, x10, #8
0x06A2E7A8: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E7AC: 7f0101eb  cmp x11, x1
0x06A2E7B0: 00010054  b.eq #0x6a2e7d0
0x06A2E7B4: 290500f1  subs x9, x9, #1
0x06A2E7B8: 4a410091  add x10, x10, #0x10
0x06A2E7BC: 61ffff54  b.ne #0x6a2e7a8
0x06A2E7C0: 82008052  movz w2, #0x4
0x06A2E7C4: e00314aa  mov x0, x20
0x06A2E7C8: d2a01c97  bl #0x3156b10
0x06A2E7CC: 05000014  b #0x6a2e7e0
0x06A2E7D0: 490140b9  ldr w9, [x10]
0x06A2E7D4: 29110011  add w9, w9, #4
0x06A2E7D8: 08d1298b  add x8, x8, w9, sxtw #4
0x06A2E7DC: 00e10491  add x0, x8, #0x138
0x06A2E7E0: 080440a9  ldp x8, x1, [x0]
0x06A2E7E4: e00314aa  mov x0, x20
0x06A2E7E8: 00013fd6  blr x8
0x06A2E7EC: 000100b4  cbz x0, #0x6a2e80c
0x06A2E7F0: 081040b9  ldr w8, [x0, #0x10]
0x06A2E7F4: 691240b9  ldr w9, [x19, #0x10]
0x06A2E7F8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2E7FC: 1f01096b  cmp w8, w9
0x06A2E800: e0079f1a  cset w0, ne
0x06A2E804: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2E808: c0035fd6  ret
0x06A2E80C: 28491d97  bl #0x3180cac

