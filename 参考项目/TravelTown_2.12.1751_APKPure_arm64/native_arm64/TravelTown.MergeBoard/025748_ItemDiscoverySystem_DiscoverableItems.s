; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25748 .ItemDiscoverySystem.DiscoverableItems
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6D664 | public void .ctor(ValueTuple<Entity, IdComponent, LockComponent, BoxComponent> tuple) { }
; bytes=140 sha256=711279d369b57d4f24e56219bd39474236357774e1146ede5ffbbe8c94b16058 status=arm64_complete_bound indexed_start=True
0x06A6D664: ff0303d1  sub sp, sp, #0xc0
0x06A6D668: fe5300f9  str x30, [sp, #0xa0]
0x06A6D66C: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x06A6D670: f30301aa  mov x19, x1
0x06A6D674: 210040f9  ldr x1, [x1]
0x06A6D678: f40300aa  mov x20, x0
0x06A6D67C: 010000f9  str x1, [x0]
0x06A6D680: d14c1c97  bl #0x31809c4
0x06A6D684: e0430191  add x0, sp, #0x50
0x06A6D688: 020a8052  movz w2, #0x50
0x06A6D68C: e10313aa  mov x1, x19
0x06A6D690: b8841d94  bl #0x71ce970
0x06A6D694: e083c53c  ldur q0, [sp, #0x58]
0x06A6D698: e183c63c  ldur q1, [sp, #0x68]
0x06A6D69C: e283c73c  ldur q2, [sp, #0x78]
0x06A6D6A0: 80220091  add x0, x20, #8
0x06A6D6A4: e1031faa  mov x1, xzr
0x06A6D6A8: 8082803c  stur q0, [x20, #8]
0x06A6D6AC: 8182813c  stur q1, [x20, #0x18]
0x06A6D6B0: 8282823c  stur q2, [x20, #0x28]
0x06A6D6B4: c44c1c97  bl #0x31809c4
0x06A6D6B8: 68e24039  ldrb w8, [x19, #0x38]
0x06A6D6BC: e0030091  mov x0, sp
0x06A6D6C0: 020a8052  movz w2, #0x50
0x06A6D6C4: e10313aa  mov x1, x19
0x06A6D6C8: 88e20039  strb w8, [x20, #0x38]
0x06A6D6CC: a9841d94  bl #0x71ce970
0x06A6D6D0: e0c3c33c  ldur q0, [sp, #0x3c]
0x06A6D6D4: e84f40b9  ldr w8, [sp, #0x4c]
0x06A6D6D8: fe5340f9  ldr x30, [sp, #0xa0]
0x06A6D6DC: 80c2833c  stur q0, [x20, #0x3c]
0x06A6D6E0: 884e00b9  str w8, [x20, #0x4c]
0x06A6D6E4: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x06A6D6E8: ff030391  add sp, sp, #0xc0
0x06A6D6EC: c0035fd6  ret

; RVA 0x6A6CBC0 | public static ItemDiscoverySystem.DiscoverableItems op_Implicit(ValueTuple<Entity, IdComponent, LockComponent, BoxComponent> tuple) { }
; bytes=68 sha256=2b2ec335e224ba3e81c9414d8e4cc4102d4b2b553f78727d0c50affaac993473 status=arm64_complete_bound indexed_start=True
0x06A6CBC0: ff8301d1  sub sp, sp, #0x60
0x06A6CBC4: fe4f05a9  stp x30, x19, [sp, #0x50]
0x06A6CBC8: e10300aa  mov x1, x0
0x06A6CBCC: e0030091  mov x0, sp
0x06A6CBD0: 020a8052  movz w2, #0x50
0x06A6CBD4: f30308aa  mov x19, x8
0x06A6CBD8: 66871d94  bl #0x71ce970
0x06A6CBDC: 00e4006f  movi v0.2d, #0000000000000000
0x06A6CBE0: e1030091  mov x1, sp
0x06A6CBE4: e00313aa  mov x0, x19
0x06A6CBE8: 600200ad  stp q0, q0, [x19]
0x06A6CBEC: 600201ad  stp q0, q0, [x19, #0x20]
0x06A6CBF0: 6012803d  str q0, [x19, #0x40]
0x06A6CBF4: 9c020094  bl #0x6a6d664
0x06A6CBF8: fe4f45a9  ldp x30, x19, [sp, #0x50]
0x06A6CBFC: ff830191  add sp, sp, #0x60
0x06A6CC00: c0035fd6  ret

; RVA 0x6A6D6F0 | public static ValueTuple<Entity, IdComponent, LockComponent, BoxComponent> op_Implicit(ItemDiscoverySystem.DiscoverableItems group) { }
; bytes=212 sha256=870bc0d346b568f0b2b886d6b9544336f8125aaec3d59611cf870c66945841a3 status=arm64_complete_bound indexed_start=True
0x06A6D6F0: ffc304d1  sub sp, sp, #0x130
0x06A6D6F4: fd7b00f9  str x29, [sp, #0xf0]
0x06A6D6F8: fe5f10a9  stp x30, x23, [sp, #0x100]
0x06A6D6FC: f65711a9  stp x22, x21, [sp, #0x110]
0x06A6D700: f44f12a9  stp x20, x19, [sp, #0x120]
0x06A6D704: f59500b0  adrp x21, #0x7d2a000
0x06A6D708: 37660090  adrp x23, #0x7731000
0x06A6D70C: f30308aa  mov x19, x8
0x06A6D710: a84e5b39  ldrb w8, [x21, #0x6d3]
0x06A6D714: f73640f9  ldr x23, [x23, #0x68]
0x06A6D718: f40300aa  mov x20, x0
0x06A6D71C: c8000037  tbnz w8, #0, #0x6a6d734
0x06A6D720: 20660090  adrp x0, #0x7731000
0x06A6D724: 003440f9  ldr x0, [x0, #0x68]
0x06A6D728: bc4c1c97  bl #0x3180a18
0x06A6D72C: 28008052  movz w8, #0x1
0x06A6D730: a84e1b39  strb w8, [x21, #0x6d3]
0x06A6D734: 950240f9  ldr x21, [x20]
0x06A6D738: e0430191  add x0, sp, #0x50
0x06A6D73C: 020a8052  movz w2, #0x50
0x06A6D740: e10314aa  mov x1, x20
0x06A6D744: 8b841d94  bl #0x71ce970
0x06A6D748: 96e24039  ldrb w22, [x20, #0x38]
0x06A6D74C: e0030091  mov x0, sp
0x06A6D750: 020a8052  movz w2, #0x50
0x06A6D754: e10314aa  mov x1, x20
0x06A6D758: 86841d94  bl #0x71ce970
0x06A6D75C: e183c53c  ldur q1, [sp, #0x58]
0x06A6D760: e283c63c  ldur q2, [sp, #0x68]
0x06A6D764: 00e4006f  movi v0.2d, #0000000000000000
0x06A6D768: 600200ad  stp q0, q0, [x19]
0x06A6D76C: 600201ad  stp q0, q0, [x19, #0x20]
0x06A6D770: 6012803d  str q0, [x19, #0x40]
0x06A6D774: e083c73c  ldur q0, [sp, #0x78]
0x06A6D778: e10b06ad  stp q1, q2, [sp, #0xc0]
0x06A6D77C: e1c3c33c  ldur q1, [sp, #0x3c]
0x06A6D780: e84f40b9  ldr w8, [sp, #0x4c]
0x06A6D784: e50240f9  ldr x5, [x23]
0x06A6D788: e2030391  add x2, sp, #0xc0
0x06A6D78C: e4830291  add x4, sp, #0xa0
0x06A6D790: e00313aa  mov x0, x19
0x06A6D794: e10315aa  mov x1, x21
0x06A6D798: e30316aa  mov x3, x22
0x06A6D79C: e03b803d  str q0, [sp, #0xe0]
0x06A6D7A0: e12b803d  str q1, [sp, #0xa0]
0x06A6D7A4: e8b300b9  str w8, [sp, #0xb0]
0x06A6D7A8: 9a677697  bl #0x4807610
0x06A6D7AC: f44f52a9  ldp x20, x19, [sp, #0x120]
0x06A6D7B0: f65751a9  ldp x22, x21, [sp, #0x110]
0x06A6D7B4: fe5f50a9  ldp x30, x23, [sp, #0x100]
0x06A6D7B8: fd7b40f9  ldr x29, [sp, #0xf0]
0x06A6D7BC: ffc30491  add sp, sp, #0x130
0x06A6D7C0: c0035fd6  ret

; RVA 0x6A6D7C4 | public void Deconstruct(out Entity entity, out IdComponent idComponent, out LockComponent lockComponent, out BoxComponent boxComponent) { }
; bytes=120 sha256=0c00762bfc294e5a8fc944126a116998b2be67c78bb7fd29313379c34d163b73 status=arm64_complete_bound indexed_start=True
0x06A6D7C4: fe0f1df8  str x30, [sp, #-0x30]!
0x06A6D7C8: f65701a9  stp x22, x21, [sp, #0x10]
0x06A6D7CC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A6D7D0: 080040f9  ldr x8, [x0]
0x06A6D7D4: f60300aa  mov x22, x0
0x06A6D7D8: e00301aa  mov x0, x1
0x06A6D7DC: f30304aa  mov x19, x4
0x06A6D7E0: 280000f9  str x8, [x1]
0x06A6D7E4: e10308aa  mov x1, x8
0x06A6D7E8: f40303aa  mov x20, x3
0x06A6D7EC: f50302aa  mov x21, x2
0x06A6D7F0: 754c1c97  bl #0x31809c4
0x06A6D7F4: c082c23c  ldur q0, [x22, #0x28]
0x06A6D7F8: c182c13c  ldur q1, [x22, #0x18]
0x06A6D7FC: c282c03c  ldur q2, [x22, #8]
0x06A6D800: e00315aa  mov x0, x21
0x06A6D804: e1031faa  mov x1, xzr
0x06A6D808: a18200ad  stp q1, q0, [x21, #0x10]
0x06A6D80C: a202803d  str q2, [x21]
0x06A6D810: 6d4c1c97  bl #0x31809c4
0x06A6D814: c8e24039  ldrb w8, [x22, #0x38]
0x06A6D818: 88020039  strb w8, [x20]
0x06A6D81C: c84e40b9  ldr w8, [x22, #0x4c]
0x06A6D820: c0c2c33c  ldur q0, [x22, #0x3c]
0x06A6D824: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A6D828: 681200b9  str w8, [x19, #0x10]
0x06A6D82C: 6002803d  str q0, [x19]
0x06A6D830: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A6D834: fe0743f8  ldr x30, [sp], #0x30
0x06A6D838: c0035fd6  ret

; RVA 0x6A6CB80 | public static Entities.MatchDelegate<ValueTuple<Entity, IdComponent, LockComponent, BoxComponent>> GetMatchMethod() { }
; bytes=64 sha256=297a282064defdfe095907269a96491fa79797a479b1ec95ec48c8ea690f4ba2 status=arm64_complete_bound indexed_start=True
0x06A6CB80: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A6CB84: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A6CB88: f39500d0  adrp x19, #0x7d2a000
0x06A6CB8C: 346600b0  adrp x20, #0x7731000
0x06A6CB90: 68525b39  ldrb w8, [x19, #0x6d4]
0x06A6CB94: 941240f9  ldr x20, [x20, #0x20]
0x06A6CB98: c8000037  tbnz w8, #0, #0x6a6cbb0
0x06A6CB9C: 206600b0  adrp x0, #0x7731000
0x06A6CBA0: 001040f9  ldr x0, [x0, #0x20]
0x06A6CBA4: 9d4f1c97  bl #0x3180a18
0x06A6CBA8: 28008052  movz w8, #0x1
0x06A6CBAC: 68521b39  strb w8, [x19, #0x6d4]
0x06A6CBB0: 800240f9  ldr x0, [x20]
0x06A6CBB4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A6CBB8: fe0742f8  ldr x30, [sp], #0x20
0x06A6CBBC: 7ab64617  b #0x3c1a5a4

