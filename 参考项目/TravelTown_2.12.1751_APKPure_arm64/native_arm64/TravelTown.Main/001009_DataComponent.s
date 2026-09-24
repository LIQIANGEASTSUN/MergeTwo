; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1009 MergeEngine.ECS.Components.DataComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68F72D8 | protected void .ctor(Entity entity) { }
; bytes=172 sha256=67671a5837ce0e0008789994f11c0cbe4042185e2a7fa559422da30fe2f9daf0 status=arm64_complete_bound indexed_start=True
0x068F72D8: fe0f1cf8  str x30, [sp, #-0x40]!
0x068F72DC: f85f01a9  stp x24, x23, [sp, #0x10]
0x068F72E0: f65702a9  stp x22, x21, [sp, #0x20]
0x068F72E4: f44f03a9  stp x20, x19, [sp, #0x30]
0x068F72E8: 97a100d0  adrp x23, #0x7d29000
0x068F72EC: d86a00b0  adrp x24, #0x7650000
0x068F72F0: 156b00f0  adrp x21, #0x765a000
0x068F72F4: 767100f0  adrp x22, #0x7726000
0x068F72F8: e8026139  ldrb w8, [x23, #0x840]
0x068F72FC: 181f44f9  ldr x24, [x24, #0x838]
0x068F7300: b5ae44f9  ldr x21, [x21, #0x958]
0x068F7304: d6ca41f9  ldr x22, [x22, #0x390]
0x068F7308: f30301aa  mov x19, x1
0x068F730C: f40300aa  mov x20, x0
0x068F7310: 88010037  tbnz w8, #0, #0x68f7340
0x068F7314: 006b00f0  adrp x0, #0x765a000
0x068F7318: 00ac44f9  ldr x0, [x0, #0x958]
0x068F731C: bf252297  bl #0x3180a18
0x068F7320: c06a00b0  adrp x0, #0x7650000
0x068F7324: 001c44f9  ldr x0, [x0, #0x838]
0x068F7328: bc252297  bl #0x3180a18
0x068F732C: 607100f0  adrp x0, #0x7726000
0x068F7330: 00c841f9  ldr x0, [x0, #0x390]
0x068F7334: b9252297  bl #0x3180a18
0x068F7338: 28008052  movz w8, #0x1
0x068F733C: e8022139  strb w8, [x23, #0x840]
0x068F7340: 000340f9  ldr x0, [x24]
0x068F7344: 57262297  bl #0x3180ca0
0x068F7348: a10240f9  ldr x1, [x21]
0x068F734C: f50300aa  mov x21, x0
0x068F7350: 15ab9797  bl #0x4ee1fa4
0x068F7354: e00314aa  mov x0, x20
0x068F7358: 158c02f8  str x21, [x0, #0x28]!
0x068F735C: e10315aa  mov x1, x21
0x068F7360: 99252297  bl #0x31809c4
0x068F7364: c20240f9  ldr x2, [x22]
0x068F7368: e00314aa  mov x0, x20
0x068F736C: e10313aa  mov x1, x19
0x068F7370: f44f43a9  ldp x20, x19, [sp, #0x30]
0x068F7374: f65742a9  ldp x22, x21, [sp, #0x20]
0x068F7378: f85f41a9  ldp x24, x23, [sp, #0x10]
0x068F737C: fe0744f8  ldr x30, [sp], #0x40
0x068F7380: 1ec26f17  b #0x44e7bf8

; RVA 0x68F7384 | protected override void OnBeforeSerialize() { }
; bytes=76 sha256=acc7b3c115257980a76aab4ff5a4d82fb0c380befc4335901cc82ab32c7ed5f0 status=arm64_complete_bound indexed_start=True
0x068F7384: fe0f1ef8  str x30, [sp, #-0x20]!
0x068F7388: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F738C: 94a100d0  adrp x20, #0x7d29000
0x068F7390: 88066139  ldrb w8, [x20, #0x841]
0x068F7394: f30300aa  mov x19, x0
0x068F7398: c8000037  tbnz w8, #0, #0x68f73b0
0x068F739C: 607100f0  adrp x0, #0x7726000
0x068F73A0: 00cc41f9  ldr x0, [x0, #0x398]
0x068F73A4: 9d252297  bl #0x3180a18
0x068F73A8: 28008052  movz w8, #0x1
0x068F73AC: 88062139  strb w8, [x20, #0x841]
0x068F73B0: 601240f9  ldr x0, [x19, #0x20]
0x068F73B4: c00000b4  cbz x0, #0x68f73cc
0x068F73B8: 611640f9  ldr x1, [x19, #0x28]
0x068F73BC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F73C0: 010c01f8  str x1, [x0, #0x10]!
0x068F73C4: fe0742f8  ldr x30, [sp], #0x20
0x068F73C8: 7f252217  b #0x31809c4
0x068F73CC: 38262297  bl #0x3180cac

; RVA 0x68F73D0 | protected override void OnAfterDeserialize() { }
; bytes=80 sha256=cd87f2fa77762fc47567e8ec0aa4826460489c1b38dcf4d353bccb274a1712b5 status=arm64_complete_bound indexed_start=True
0x068F73D0: fe0f1ef8  str x30, [sp, #-0x20]!
0x068F73D4: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F73D8: 94a100d0  adrp x20, #0x7d29000
0x068F73DC: 880a6139  ldrb w8, [x20, #0x842]
0x068F73E0: f30300aa  mov x19, x0
0x068F73E4: c8000037  tbnz w8, #0, #0x68f73fc
0x068F73E8: 607100f0  adrp x0, #0x7726000
0x068F73EC: 00cc41f9  ldr x0, [x0, #0x398]
0x068F73F0: 8a252297  bl #0x3180a18
0x068F73F4: 28008052  movz w8, #0x1
0x068F73F8: 880a2139  strb w8, [x20, #0x842]
0x068F73FC: 681240f9  ldr x8, [x19, #0x20]
0x068F7400: e80000b4  cbz x8, #0x68f741c
0x068F7404: 010940f9  ldr x1, [x8, #0x10]
0x068F7408: 618e02f8  str x1, [x19, #0x28]!
0x068F740C: e00313aa  mov x0, x19
0x068F7410: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F7414: fe0742f8  ldr x30, [sp], #0x20
0x068F7418: 6b252217  b #0x31809c4
0x068F741C: 24262297  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BFA814 | MergeEngine.ECS.Components.DataComponent$$Get<__Il2CppFullySharedGenericType>
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MergeEngine_ECS_Components_DataComponent__Get___Il2CppFullySharedGenericType_ (MergeEngine_ECS_Components_DataComponent_o* __this, System_String_o* key, const MethodInfo_3BFA814* method);
; bytes=680 sha256=a45ec20d94b76d564e9a38ae6c15aede25a8a28302c86377ccb28a39b3122119 status=arm64_complete_bound indexed_start=True
0x03BFA814: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03BFA818: fb0b00f9  str x27, [sp, #0x10]
0x03BFA81C: fa6702a9  stp x26, x25, [sp, #0x20]
0x03BFA820: f85f03a9  stp x24, x23, [sp, #0x30]
0x03BFA824: f65704a9  stp x22, x21, [sp, #0x40]
0x03BFA828: f44f05a9  stp x20, x19, [sp, #0x50]
0x03BFA82C: fd030091  mov x29, sp
0x03BFA830: ff8300d1  sub sp, sp, #0x20
0x03BFA834: 5bd03bd5  mrs x27, tpidr_el0
0x03BFA838: 681740f9  ldr x8, [x27, #0x28]
0x03BFA83C: f80303aa  mov x24, x3
0x03BFA840: f30302aa  mov x19, x2
0x03BFA844: fa0301aa  mov x26, x1
0x03BFA848: a8831ff8  stur x8, [x29, #-8]
0x03BFA84C: 681c40f9  ldr x8, [x3, #0x38]
0x03BFA850: f90300aa  mov x25, x0
0x03BFA854: 280100b5  cbnz x8, #0x3bfa878
0x03BFA858: a0d201d0  adrp x0, #0x7650000
0x03BFA85C: 002843f9  ldr x0, [x0, #0x650]
0x03BFA860: 6e18d697  bl #0x3180a18
0x03BFA864: 081f40f9  ldr x8, [x24, #0x38]
0x03BFA868: 880000b5  cbnz x8, #0x3bfa878
0x03BFA86C: e00318aa  mov x0, x24
0x03BFA870: 0270d597  bl #0x3156878
0x03BFA874: 081f40f9  ldr x8, [x24, #0x38]
0x03BFA878: 080540f9  ldr x8, [x8, #8]
0x03BFA87C: 14fd40b9  ldr w20, [x8, #0xfc]
0x03BFA880: e8030091  mov x8, sp
0x03BFA884: 893e0091  add x9, x20, #0xf
0x03BFA888: 37717c92  and x23, x9, #0x1fffffff0
0x03BFA88C: 150117cb  sub x21, x8, x23
0x03BFA890: bf020091  mov sp, x21
0x03BFA894: e8030091  mov x8, sp
0x03BFA898: 160117cb  sub x22, x8, x23
0x03BFA89C: bf031ef8  stur xzr, [x29, #-0x20]
0x03BFA8A0: df020091  mov sp, x22
0x03BFA8A4: e00316aa  mov x0, x22
0x03BFA8A8: e1031f2a  mov w1, wzr
0x03BFA8AC: e20314aa  mov x2, x20
0x03BFA8B0: 3c50d794  bl #0x71ce9a0
0x03BFA8B4: e8030091  mov x8, sp
0x03BFA8B8: 170117cb  sub x23, x8, x23
0x03BFA8BC: ff020091  mov sp, x23
0x03BFA8C0: e00317aa  mov x0, x23
0x03BFA8C4: e1031f2a  mov w1, wzr
0x03BFA8C8: e20314aa  mov x2, x20
0x03BFA8CC: 3550d794  bl #0x71ce9a0
0x03BFA8D0: 201740f9  ldr x0, [x25, #0x28]
0x03BFA8D4: 200900b4  cbz x0, #0x3bfa9f8
0x03BFA8D8: a8d201d0  adrp x8, #0x7650000
0x03BFA8DC: 082943f9  ldr x8, [x8, #0x650]
0x03BFA8E0: a28300d1  sub x2, x29, #0x20
0x03BFA8E4: e1031aaa  mov x1, x26
0x03BFA8E8: 030140f9  ldr x3, [x8]
0x03BFA8EC: f1a74b94  bl #0x4ee48b0
0x03BFA8F0: c0020036  tbz w0, #0, #0x3bfa948
0x03BFA8F4: 390f40f9  ldr x25, [x25, #0x18]
0x03BFA8F8: 390800b4  cbz x25, #0x3bfa9fc
0x03BFA8FC: 091f40f9  ldr x9, [x24, #0x38]
0x03BFA900: 280340f9  ldr x8, [x25]
0x03BFA904: ba035ef8  ldur x26, [x29, #-0x20]
0x03BFA908: 380140f9  ldr x24, [x9]
0x03BFA90C: 095d4279  ldrh w9, [x8, #0x12e]
0x03BFA910: 011340f9  ldr x1, [x24, #0x20]
0x03BFA914: 02a34079  ldrh w2, [x24, #0x50]
0x03BFA918: 290100b4  cbz x9, #0x3bfa93c
0x03BFA91C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03BFA920: 4a210091  add x10, x10, #8
0x03BFA924: 4b815ff8  ldur x11, [x10, #-8]
0x03BFA928: 7f0101eb  cmp x11, x1
0x03BFA92C: 80010054  b.eq #0x3bfa95c
0x03BFA930: 290500f1  subs x9, x9, #1
0x03BFA934: 4a410091  add x10, x10, #0x10
0x03BFA938: 61ffff54  b.ne #0x3bfa924
0x03BFA93C: e00319aa  mov x0, x25
0x03BFA940: 7470d597  bl #0x3156b10
0x03BFA944: 0a000014  b #0x3bfa96c
0x03BFA948: e00317aa  mov x0, x23
0x03BFA94C: e1031f2a  mov w1, wzr
0x03BFA950: e20314aa  mov x2, x20
0x03BFA954: 1350d794  bl #0x71ce9a0
0x03BFA958: 14000014  b #0x3bfa9a8
0x03BFA95C: 490140b9  ldr w9, [x10]
0x03BFA960: 2901020b  add w9, w9, w2
0x03BFA964: 08d1298b  add x8, x8, w9, sxtw #4
0x03BFA968: 00e10491  add x0, x8, #0x138
0x03BFA96C: 000440f9  ldr x0, [x0, #8]
0x03BFA970: e10318aa  mov x1, x24
0x03BFA974: 8518d697  bl #0x3180b88
0x03BFA978: e10300aa  mov x1, x0
0x03BFA97C: bad73ea9  stp x26, x21, [x29, #-0x18]
0x03BFA980: 20a040a9  ldp x0, x8, [x1, #8]
0x03BFA984: a36300d1  sub x3, x29, #0x18
0x03BFA988: e20319aa  mov x2, x25
0x03BFA98C: e40315aa  mov x4, x21
0x03BFA990: 00013fd6  blr x8
0x03BFA994: e00316aa  mov x0, x22
0x03BFA998: e10315aa  mov x1, x21
0x03BFA99C: e20314aa  mov x2, x20
0x03BFA9A0: f44fd794  bl #0x71ce970
0x03BFA9A4: f70316aa  mov x23, x22
0x03BFA9A8: e00315aa  mov x0, x21
0x03BFA9AC: e10317aa  mov x1, x23
0x03BFA9B0: e20314aa  mov x2, x20
0x03BFA9B4: ef4fd794  bl #0x71ce970
0x03BFA9B8: e00313aa  mov x0, x19
0x03BFA9BC: e10315aa  mov x1, x21
0x03BFA9C0: e20314aa  mov x2, x20
0x03BFA9C4: eb4fd794  bl #0x71ce970
0x03BFA9C8: 681740f9  ldr x8, [x27, #0x28]
0x03BFA9CC: a9835ff8  ldur x9, [x29, #-8]
0x03BFA9D0: 1f0109eb  cmp x8, x9
0x03BFA9D4: 61010054  b.ne #0x3bfaa00
0x03BFA9D8: bf030091  mov sp, x29
0x03BFA9DC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03BFA9E0: f65744a9  ldp x22, x21, [sp, #0x40]
0x03BFA9E4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03BFA9E8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03BFA9EC: fb0b40f9  ldr x27, [sp, #0x10]
0x03BFA9F0: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03BFA9F4: c0035fd6  ret
0x03BFA9F8: ad18d697  bl #0x3180cac
0x03BFA9FC: ac18d697  bl #0x3180cac
0x03BFAA00: e44fd794  bl #0x71ce990
0x03BFAA04: 3f040071  cmp w1, #1
0x03BFAA08: f80300aa  mov x24, x0
0x03BFAA0C: 21050054  b.ne #0x3bfaab0
0x03BFAA10: e00318aa  mov x0, x24
0x03BFAA14: bf4fd794  bl #0x71ce910
0x03BFAA18: f80300aa  mov x24, x0
0x03BFAA1C: e0d301f0  adrp x0, #0x7679000
0x03BFAA20: 00e844f9  ldr x0, [x0, #0x9d0]
0x03BFAA24: 0218d697  bl #0x3180a2c
0x03BFAA28: 080340f9  ldr x8, [x24]
0x03BFAA2C: 010140f9  ldr x1, [x8]
0x03BFAA30: aa19d697  bl #0x31810d8
0x03BFAA34: a0020036  tbz w0, #0, #0x3bfaa88
0x03BFAA38: 180340f9  ldr x24, [x24]
0x03BFAA3C: b94fd794  bl #0x71ce920
0x03BFAA40: a0d20190  adrp x0, #0x764e000
0x03BFAA44: 00cc42f9  ldr x0, [x0, #0x598]
0x03BFAA48: f917d697  bl #0x3180a2c
0x03BFAA4C: 08e040b9  ldr w8, [x0, #0xe0]
0x03BFAA50: 48000035  cbnz w8, #0x3bfaa58
0x03BFAA54: 4e18d697  bl #0x3180b8c
0x03BFAA58: e00318aa  mov x0, x24
0x03BFAA5C: e1031faa  mov x1, xzr
0x03BFAA60: e89eca94  bl #0x6ea2600
0x03BFAA64: e00317aa  mov x0, x23
0x03BFAA68: e1031f2a  mov w1, wzr
0x03BFAA6C: e20314aa  mov x2, x20
0x03BFAA70: cc4fd794  bl #0x71ce9a0
0x03BFAA74: e00315aa  mov x0, x21
0x03BFAA78: e10317aa  mov x1, x23
0x03BFAA7C: e20314aa  mov x2, x20
0x03BFAA80: bc4fd794  bl #0x71ce970
0x03BFAA84: c4ffff17  b #0x3bfa994
0x03BFAA88: 00018052  movz w0, #0x8
0x03BFAA8C: a94fd794  bl #0x71ce930
0x03BFAA90: 080340f9  ldr x8, [x24]
0x03BFAA94: 080000f9  str x8, [x0]
0x03BFAA98: c1ae01d0  adrp x1, #0x71d4000
0x03BFAA9C: 21a03491  add x1, x1, #0xd28
0x03BFAAA0: e2031faa  mov x2, xzr
0x03BFAAA4: a74fd794  bl #0x71ce940
0x03BFAAA8: f80300aa  mov x24, x0
0x03BFAAAC: 9d4fd794  bl #0x71ce920
0x03BFAAB0: e00318aa  mov x0, x24
0x03BFAAB4: a9abd997  bl #0x3265958
0x03BFAAB8: 973ac897  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BFAABC | MergeEngine.ECS.Components.DataComponent$$Set<__Il2CppFullySharedGenericType>
; native signature: void MergeEngine_ECS_Components_DataComponent__Set___Il2CppFullySharedGenericType_ (MergeEngine_ECS_Components_DataComponent_o* __this, System_String_o* key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_3BFAABC* method);
; bytes=384 sha256=6a6695da605fcade74293c54a4bb53dec18ea4ae3678dc2cd5fb6996246a65ce status=arm64_complete_bound indexed_start=True
0x03BFAABC: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x03BFAAC0: f90b00f9  str x25, [sp, #0x10]
0x03BFAAC4: f85f02a9  stp x24, x23, [sp, #0x20]
0x03BFAAC8: f65703a9  stp x22, x21, [sp, #0x30]
0x03BFAACC: f44f04a9  stp x20, x19, [sp, #0x40]
0x03BFAAD0: fd030091  mov x29, sp
0x03BFAAD4: ff8300d1  sub sp, sp, #0x20
0x03BFAAD8: 58d03bd5  mrs x24, tpidr_el0
0x03BFAADC: 081740f9  ldr x8, [x24, #0x28]
0x03BFAAE0: f70302aa  mov x23, x2
0x03BFAAE4: f30301aa  mov x19, x1
0x03BFAAE8: f40300aa  mov x20, x0
0x03BFAAEC: a8831ff8  stur x8, [x29, #-8]
0x03BFAAF0: a2031ef8  stur x2, [x29, #-0x20]
0x03BFAAF4: 791c40f9  ldr x25, [x3, #0x38]
0x03BFAAF8: 590100b5  cbnz x25, #0x3bfab20
0x03BFAAFC: a0d201d0  adrp x0, #0x7650000
0x03BFAB00: 006846f9  ldr x0, [x0, #0xcd0]
0x03BFAB04: f50303aa  mov x21, x3
0x03BFAB08: c417d697  bl #0x3180a18
0x03BFAB0C: b91e40f9  ldr x25, [x21, #0x38]
0x03BFAB10: 990000b5  cbnz x25, #0x3bfab20
0x03BFAB14: e00315aa  mov x0, x21
0x03BFAB18: 586fd597  bl #0x3156878
0x03BFAB1C: b91e40f9  ldr x25, [x21, #0x38]
0x03BFAB20: 280340f9  ldr x8, [x25]
0x03BFAB24: e9030091  mov x9, sp
0x03BFAB28: 02fd40b9  ldr w2, [x8, #0xfc]
0x03BFAB2C: 4a3c0091  add x10, x2, #0xf
0x03BFAB30: 4a717c92  and x10, x10, #0x1fffffff0
0x03BFAB34: 36010acb  sub x22, x9, x10
0x03BFAB38: df020091  mov sp, x22
0x03BFAB3C: d40700b4  cbz x20, #0x3bfac34
0x03BFAB40: 082940b9  ldr w8, [x8, #0x28]
0x03BFAB44: 950e40f9  ldr x21, [x20, #0x18]
0x03BFAB48: e00316aa  mov x0, x22
0x03BFAB4C: 1f010071  cmp w8, #0
0x03BFAB50: a88300d1  sub x8, x29, #0x20
0x03BFAB54: e1b2889a  csel x1, x23, x8, lt
0x03BFAB58: 864fd794  bl #0x71ce970
0x03BFAB5C: d50600b4  cbz x21, #0x3bfac34
0x03BFAB60: 285f40a9  ldp x8, x23, [x25]
0x03BFAB64: 082940b9  ldr w8, [x8, #0x28]
0x03BFAB68: 4800f837  tbnz w8, #0x1f, #0x3bfab70
0x03BFAB6C: d60240f9  ldr x22, [x22]
0x03BFAB70: a80240f9  ldr x8, [x21]
0x03BFAB74: e11240f9  ldr x1, [x23, #0x20]
0x03BFAB78: e2a24079  ldrh w2, [x23, #0x50]
0x03BFAB7C: 095d4279  ldrh w9, [x8, #0x12e]
0x03BFAB80: 290100b4  cbz x9, #0x3bfaba4
0x03BFAB84: 0a5940f9  ldr x10, [x8, #0xb0]
0x03BFAB88: 4a210091  add x10, x10, #8
0x03BFAB8C: 4b815ff8  ldur x11, [x10, #-8]
0x03BFAB90: 7f0101eb  cmp x11, x1
0x03BFAB94: e0000054  b.eq #0x3bfabb0
0x03BFAB98: 290500f1  subs x9, x9, #1
0x03BFAB9C: 4a410091  add x10, x10, #0x10
0x03BFABA0: 61ffff54  b.ne #0x3bfab8c
0x03BFABA4: e00315aa  mov x0, x21
0x03BFABA8: da6fd597  bl #0x3156b10
0x03BFABAC: 05000014  b #0x3bfabc0
0x03BFABB0: 490140b9  ldr w9, [x10]
0x03BFABB4: 2901020b  add w9, w9, w2
0x03BFABB8: 08d1298b  add x8, x8, w9, sxtw #4
0x03BFABBC: 00e10491  add x0, x8, #0x138
0x03BFABC0: 000440f9  ldr x0, [x0, #8]
0x03BFABC4: e10317aa  mov x1, x23
0x03BFABC8: f017d697  bl #0x3180b88
0x03BFABCC: b6831ef8  stur x22, [x29, #-0x18]
0x03BFABD0: e10300aa  mov x1, x0
0x03BFABD4: 00a040a9  ldp x0, x8, [x0, #8]
0x03BFABD8: a36300d1  sub x3, x29, #0x18
0x03BFABDC: a44300d1  sub x4, x29, #0x10
0x03BFABE0: e20315aa  mov x2, x21
0x03BFABE4: 00013fd6  blr x8
0x03BFABE8: 801640f9  ldr x0, [x20, #0x28]
0x03BFABEC: 400200b4  cbz x0, #0x3bfac34
0x03BFABF0: a8d201d0  adrp x8, #0x7650000
0x03BFABF4: a2035ff8  ldur x2, [x29, #-0x10]
0x03BFABF8: 086946f9  ldr x8, [x8, #0xcd0]
0x03BFABFC: e10313aa  mov x1, x19
0x03BFAC00: 030140f9  ldr x3, [x8]
0x03BFAC04: 59a04b94  bl #0x4ee2d68
0x03BFAC08: 081740f9  ldr x8, [x24, #0x28]
0x03BFAC0C: a9835ff8  ldur x9, [x29, #-8]
0x03BFAC10: 1f0109eb  cmp x8, x9
0x03BFAC14: 21010054  b.ne #0x3bfac38
0x03BFAC18: bf030091  mov sp, x29
0x03BFAC1C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03BFAC20: f65743a9  ldp x22, x21, [sp, #0x30]
0x03BFAC24: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03BFAC28: f90b40f9  ldr x25, [sp, #0x10]
0x03BFAC2C: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x03BFAC30: c0035fd6  ret
0x03BFAC34: 1e18d697  bl #0x3180cac
0x03BFAC38: 564fd794  bl #0x71ce990

