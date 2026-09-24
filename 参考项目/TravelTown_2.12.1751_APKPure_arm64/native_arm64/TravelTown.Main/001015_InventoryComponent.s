; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1015 MergeEngine.ECS.Components.InventoryComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68F752C | public Dictionary<PlayerResourceEnum, float> get_ToolsProgress() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x068F752C: 001c40f9  ldr x0, [x0, #0x38]
0x068F7530: c0035fd6  ret

; RVA 0x68F7534 | private void set_ToolsProgress(Dictionary<PlayerResourceEnum, float> value) { }
; bytes=8 sha256=9f58f641a799337789af0d89ecc3bbd55d1d55ee49893943a83a05fa46b9c83c status=arm64_complete_bound indexed_start=True
0x068F7534: 018c03f8  str x1, [x0, #0x38]!
0x068F7538: 23252217  b #0x31809c4

; RVA 0x68F753C | public int get_MaxSlots() { }
; bytes=8 sha256=2794764ead4f4e46816d67d9f7faad262cb54d7a0b7a39d555c30024db08d1e8 status=arm64_complete_bound indexed_start=True
0x068F753C: 004040b9  ldr w0, [x0, #0x40]
0x068F7540: c0035fd6  ret

; RVA 0x68F7544 | private void set_MaxSlots(int value) { }
; bytes=8 sha256=99126ca7b87d662b9b483045ef27bde13b4525b29d199b0dd709fac17bf71da4 status=arm64_complete_bound indexed_start=True
0x068F7544: 014000b9  str w1, [x0, #0x40]
0x068F7548: c0035fd6  ret

; RVA 0x68F754C | public InventorySlotCost get_NextSlotCost() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x068F754C: 002440f9  ldr x0, [x0, #0x48]
0x068F7550: c0035fd6  ret

; RVA 0x68F7554 | private void set_NextSlotCost(InventorySlotCost value) { }
; bytes=8 sha256=4f7ffbbe1c2077f6831fe89027e5e46eb16a0a717597113139666d32fe30c895 status=arm64_complete_bound indexed_start=True
0x068F7554: 018c04f8  str x1, [x0, #0x48]!
0x068F7558: 1b252217  b #0x31809c4

; RVA 0x68F755C | public void .ctor(InventoryCapability capability, Entity entity) { }
; bytes=312 sha256=9456085047b0bc6be9ee849f0911259c7c34960b5497725d01210d73ccc67d71 status=arm64_complete_bound indexed_start=True
0x068F755C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068F7560: f65701a9  stp x22, x21, [sp, #0x10]
0x068F7564: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F7568: 96a100d0  adrp x22, #0x7d29000
0x068F756C: 777100f0  adrp x23, #0x7726000
0x068F7570: c8126139  ldrb w8, [x22, #0x844]
0x068F7574: f7da41f9  ldr x23, [x23, #0x3b0]
0x068F7578: f50302aa  mov x21, x2
0x068F757C: f40301aa  mov x20, x1
0x068F7580: f30300aa  mov x19, x0
0x068F7584: e8010037  tbnz w8, #0, #0x68f75c0
0x068F7588: 607100f0  adrp x0, #0x7726000
0x068F758C: 00dc41f9  ldr x0, [x0, #0x3b8]
0x068F7590: 22252297  bl #0x3180a18
0x068F7594: 607100f0  adrp x0, #0x7726000
0x068F7598: 00d841f9  ldr x0, [x0, #0x3b0]
0x068F759C: 1f252297  bl #0x3180a18
0x068F75A0: 607100f0  adrp x0, #0x7726000
0x068F75A4: 00e041f9  ldr x0, [x0, #0x3c0]
0x068F75A8: 1c252297  bl #0x3180a18
0x068F75AC: 607100f0  adrp x0, #0x7726000
0x068F75B0: 00e441f9  ldr x0, [x0, #0x3c8]
0x068F75B4: 19252297  bl #0x3180a18
0x068F75B8: 28008052  movz w8, #0x1
0x068F75BC: c8122139  strb w8, [x22, #0x844]
0x068F75C0: e30240f9  ldr x3, [x23]
0x068F75C4: e00313aa  mov x0, x19
0x068F75C8: e10314aa  mov x1, x20
0x068F75CC: e20315aa  mov x2, x21
0x068F75D0: 629f9197  bl #0x4d5f358
0x068F75D4: f40500b4  cbz x20, #0x68f7690
0x068F75D8: 881640b9  ldr w8, [x20, #0x14]
0x068F75DC: 697100f0  adrp x9, #0x7726000
0x068F75E0: 29dd41f9  ldr x9, [x9, #0x3b8]
0x068F75E4: 684200b9  str w8, [x19, #0x40]
0x068F75E8: 340140f9  ldr x20, [x9]
0x068F75EC: 881e40f9  ldr x8, [x20, #0x38]
0x068F75F0: 880000b5  cbnz x8, #0x68f7600
0x068F75F4: e00314aa  mov x0, x20
0x068F75F8: a07c2197  bl #0x3156878
0x068F75FC: 881e40f9  ldr x8, [x20, #0x38]
0x068F7600: 000940f9  ldr x0, [x8, #0x10]
0x068F7604: 08d44439  ldrb w8, [x0, #0x135]
0x068F7608: 48000037  tbnz w8, #0, #0x68f7610
0x068F760C: 847c2197  bl #0x315681c
0x068F7610: 08e040b9  ldr w8, [x0, #0xe0]
0x068F7614: 48000035  cbnz w8, #0x68f761c
0x068F7618: 5d252297  bl #0x3180b8c
0x068F761C: 881e40f9  ldr x8, [x20, #0x38]
0x068F7620: 767100f0  adrp x22, #0x7726000
0x068F7624: 757100f0  adrp x21, #0x7726000
0x068F7628: 000940f9  ldr x0, [x8, #0x10]
0x068F762C: 08d44439  ldrb w8, [x0, #0x135]
0x068F7630: d6e641f9  ldr x22, [x22, #0x3c8]
0x068F7634: b5e241f9  ldr x21, [x21, #0x3c0]
0x068F7638: 48000037  tbnz w8, #0, #0x68f7640
0x068F763C: 787c2197  bl #0x315681c
0x068F7640: 085c40f9  ldr x8, [x0, #0xb8]
0x068F7644: c00240f9  ldr x0, [x22]
0x068F7648: 140140f9  ldr x20, [x8]
0x068F764C: 95252297  bl #0x3180ca0
0x068F7650: a20240f9  ldr x2, [x21]
0x068F7654: e10314aa  mov x1, x20
0x068F7658: f50300aa  mov x21, x0
0x068F765C: f8cf6897  bl #0x432b63c
0x068F7660: e00313aa  mov x0, x19
0x068F7664: 158c02f8  str x21, [x0, #0x28]!
0x068F7668: e10315aa  mov x1, x21
0x068F766C: d6242297  bl #0x31809c4
0x068F7670: 09000094  bl #0x68f7694
0x068F7674: 608e03f8  str x0, [x19, #0x38]!
0x068F7678: e10300aa  mov x1, x0
0x068F767C: e00313aa  mov x0, x19
0x068F7680: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F7684: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F7688: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068F768C: ce242217  b #0x31809c4
0x068F7690: 87252297  bl #0x3180cac

; RVA 0x68F779C | private void MergeEngine.ECS.Components.IWipeableComponent.Wipe() { }
; bytes=228 sha256=8060e47eca5a3c5a1b9a48004e1890c38d747ec691bbb6b0d4af274457ffbe9b status=arm64_complete_bound indexed_start=True
0x068F779C: fe0f1df8  str x30, [sp, #-0x30]!
0x068F77A0: f65701a9  stp x22, x21, [sp, #0x10]
0x068F77A4: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F77A8: 94a100d0  adrp x20, #0x7d29000
0x068F77AC: 757100f0  adrp x21, #0x7726000
0x068F77B0: 88166139  ldrb w8, [x20, #0x845]
0x068F77B4: b5de41f9  ldr x21, [x21, #0x3b8]
0x068F77B8: f30300aa  mov x19, x0
0x068F77BC: 88010037  tbnz w8, #0, #0x68f77ec
0x068F77C0: 607100f0  adrp x0, #0x7726000
0x068F77C4: 00dc41f9  ldr x0, [x0, #0x3b8]
0x068F77C8: 94242297  bl #0x3180a18
0x068F77CC: 607100f0  adrp x0, #0x7726000
0x068F77D0: 00e041f9  ldr x0, [x0, #0x3c0]
0x068F77D4: 91242297  bl #0x3180a18
0x068F77D8: 607100f0  adrp x0, #0x7726000
0x068F77DC: 00e441f9  ldr x0, [x0, #0x3c8]
0x068F77E0: 8e242297  bl #0x3180a18
0x068F77E4: 28008052  movz w8, #0x1
0x068F77E8: 88162139  strb w8, [x20, #0x845]
0x068F77EC: b40240f9  ldr x20, [x21]
0x068F77F0: 881e40f9  ldr x8, [x20, #0x38]
0x068F77F4: 880000b5  cbnz x8, #0x68f7804
0x068F77F8: e00314aa  mov x0, x20
0x068F77FC: 1f7c2197  bl #0x3156878
0x068F7800: 881e40f9  ldr x8, [x20, #0x38]
0x068F7804: 000940f9  ldr x0, [x8, #0x10]
0x068F7808: 08d44439  ldrb w8, [x0, #0x135]
0x068F780C: 48000037  tbnz w8, #0, #0x68f7814
0x068F7810: 037c2197  bl #0x315681c
0x068F7814: 08e040b9  ldr w8, [x0, #0xe0]
0x068F7818: 48000035  cbnz w8, #0x68f7820
0x068F781C: dc242297  bl #0x3180b8c
0x068F7820: 881e40f9  ldr x8, [x20, #0x38]
0x068F7824: 767100f0  adrp x22, #0x7726000
0x068F7828: 757100f0  adrp x21, #0x7726000
0x068F782C: 000940f9  ldr x0, [x8, #0x10]
0x068F7830: 08d44439  ldrb w8, [x0, #0x135]
0x068F7834: d6e641f9  ldr x22, [x22, #0x3c8]
0x068F7838: b5e241f9  ldr x21, [x21, #0x3c0]
0x068F783C: 48000037  tbnz w8, #0, #0x68f7844
0x068F7840: f77b2197  bl #0x315681c
0x068F7844: 085c40f9  ldr x8, [x0, #0xb8]
0x068F7848: c00240f9  ldr x0, [x22]
0x068F784C: 140140f9  ldr x20, [x8]
0x068F7850: 14252297  bl #0x3180ca0
0x068F7854: a20240f9  ldr x2, [x21]
0x068F7858: e10314aa  mov x1, x20
0x068F785C: f50300aa  mov x21, x0
0x068F7860: 77cf6897  bl #0x432b63c
0x068F7864: 758e02f8  str x21, [x19, #0x28]!
0x068F7868: e00313aa  mov x0, x19
0x068F786C: e10315aa  mov x1, x21
0x068F7870: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F7874: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F7878: fe0743f8  ldr x30, [sp], #0x30
0x068F787C: 52242217  b #0x31809c4

; RVA 0x68F7880 | public void UpdateToolProgress(PlayerResourceEnum toolType, float progressToAdd) { }
; bytes=188 sha256=ad3eaf8fa7a24bcba1b25b91b22221950c5e1c4b7e119da7576b5689edd4be76 status=arm64_complete_bound indexed_start=True
0x068F7880: e80f1dfc  str d8, [sp, #-0x30]!
0x068F7884: fe5701a9  stp x30, x21, [sp, #0x10]
0x068F7888: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F788C: 95a100d0  adrp x21, #0x7d29000
0x068F7890: a81a6139  ldrb w8, [x21, #0x846]
0x068F7894: 081ca04e  mov v8.16b, v0.16b
0x068F7898: f303012a  mov w19, w1
0x068F789C: f40300aa  mov x20, x0
0x068F78A0: 88010037  tbnz w8, #0, #0x68f78d0
0x068F78A4: 607100f0  adrp x0, #0x7726000
0x068F78A8: 00f041f9  ldr x0, [x0, #0x3e0]
0x068F78AC: 5b242297  bl #0x3180a18
0x068F78B0: 607100f0  adrp x0, #0x7726000
0x068F78B4: 00f441f9  ldr x0, [x0, #0x3e8]
0x068F78B8: 58242297  bl #0x3180a18
0x068F78BC: 006f00d0  adrp x0, #0x76d9000
0x068F78C0: 00f847f9  ldr x0, [x0, #0xff0]
0x068F78C4: 55242297  bl #0x3180a18
0x068F78C8: 28008052  movz w8, #0x1
0x068F78CC: a81a2139  strb w8, [x21, #0x846]
0x068F78D0: 801e40f9  ldr x0, [x20, #0x38]
0x068F78D4: 200300b4  cbz x0, #0x68f7938
0x068F78D8: 687100f0  adrp x8, #0x7726000
0x068F78DC: 08f141f9  ldr x8, [x8, #0x3e0]
0x068F78E0: e003271e  fmov s0, wzr
0x068F78E4: e103132a  mov w1, w19
0x068F78E8: 020140f9  ldr x2, [x8]
0x068F78EC: 70bd9597  bl #0x4e66eac
0x068F78F0: 941e40f9  ldr x20, [x20, #0x38]
0x068F78F4: 340200b4  cbz x20, #0x68f7938
0x068F78F8: 687100f0  adrp x8, #0x7726000
0x068F78FC: 08f541f9  ldr x8, [x8, #0x3e8]
0x068F7900: 156f00d0  adrp x21, #0x76d9000
0x068F7904: e00314aa  mov x0, x20
0x068F7908: e103132a  mov w1, w19
0x068F790C: 020140f9  ldr x2, [x8]
0x068F7910: b5fa47f9  ldr x21, [x21, #0xff0]
0x068F7914: c4b69597  bl #0x4e65424
0x068F7918: a20240f9  ldr x2, [x21]
0x068F791C: e00314aa  mov x0, x20
0x068F7920: e103132a  mov w1, w19
0x068F7924: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F7928: fe5741a9  ldp x30, x21, [sp, #0x10]
0x068F792C: 0028281e  fadd s0, s0, s8
0x068F7930: e80743fc  ldr d8, [sp], #0x30
0x068F7934: deb69517  b #0x4e654ac
0x068F7938: dd242297  bl #0x3180cac

; RVA 0x68F793C | public float GetToolProgressPercentage(PlayerResourceEnum toolType) { }
; bytes=92 sha256=5b3a3de611221436c42b9916c7e7b7ba943c56ece1c2f3cf1c3a5195c44064bb status=arm64_complete_bound indexed_start=True
0x068F793C: fe0f1df8  str x30, [sp, #-0x30]!
0x068F7940: f65701a9  stp x22, x21, [sp, #0x10]
0x068F7944: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F7948: 96a100d0  adrp x22, #0x7d29000
0x068F794C: d57000b0  adrp x21, #0x7710000
0x068F7950: c81e6139  ldrb w8, [x22, #0x847]
0x068F7954: b50a45f9  ldr x21, [x21, #0xa10]
0x068F7958: f303012a  mov w19, w1
0x068F795C: f40300aa  mov x20, x0
0x068F7960: c8000037  tbnz w8, #0, #0x68f7978
0x068F7964: c07000b0  adrp x0, #0x7710000
0x068F7968: 000845f9  ldr x0, [x0, #0xa10]
0x068F796C: 2b242297  bl #0x3180a18
0x068F7970: 28008052  movz w8, #0x1
0x068F7974: c81e2139  strb w8, [x22, #0x847]
0x068F7978: 801e40f9  ldr x0, [x20, #0x38]
0x068F797C: a20240f9  ldr x2, [x21]
0x068F7980: e103132a  mov w1, w19
0x068F7984: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F7988: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F798C: e003271e  fmov s0, wzr
0x068F7990: fe0743f8  ldr x30, [sp], #0x30
0x068F7994: 56ab4b17  b #0x3be26ec

; RVA 0x68F7998 | public void OverrideSlotsConfig(int startSlots, int maxSlots) { }
; bytes=364 sha256=59cbd3174fd8f8ca3a826deef3cc46313fcd01c6c6d1f4efc66afd901d1df2e0 status=arm64_complete_bound indexed_start=True
0x068F7998: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068F799C: f65701a9  stp x22, x21, [sp, #0x10]
0x068F79A0: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F79A4: 94a100d0  adrp x20, #0x7d29000
0x068F79A8: 757100f0  adrp x21, #0x7726000
0x068F79AC: 88226139  ldrb w8, [x20, #0x848]
0x068F79B0: b5de41f9  ldr x21, [x21, #0x3b8]
0x068F79B4: f30300aa  mov x19, x0
0x068F79B8: 48020037  tbnz w8, #0, #0x68f7a00
0x068F79BC: 607100f0  adrp x0, #0x7726000
0x068F79C0: 00dc41f9  ldr x0, [x0, #0x3b8]
0x068F79C4: 15242297  bl #0x3180a18
0x068F79C8: 80700090  adrp x0, #0x7707000
0x068F79CC: 009c41f9  ldr x0, [x0, #0x338]
0x068F79D0: 12242297  bl #0x3180a18
0x068F79D4: 006f00d0  adrp x0, #0x76d9000
0x068F79D8: 00dc47f9  ldr x0, [x0, #0xfb8]
0x068F79DC: 0f242297  bl #0x3180a18
0x068F79E0: 607100f0  adrp x0, #0x7726000
0x068F79E4: 00e041f9  ldr x0, [x0, #0x3c0]
0x068F79E8: 0c242297  bl #0x3180a18
0x068F79EC: 607100f0  adrp x0, #0x7726000
0x068F79F0: 00e441f9  ldr x0, [x0, #0x3c8]
0x068F79F4: 09242297  bl #0x3180a18
0x068F79F8: 28008052  movz w8, #0x1
0x068F79FC: 88222139  strb w8, [x20, #0x848]
0x068F7A00: b40240f9  ldr x20, [x21]
0x068F7A04: 881e40f9  ldr x8, [x20, #0x38]
0x068F7A08: 880000b5  cbnz x8, #0x68f7a18
0x068F7A0C: e00314aa  mov x0, x20
0x068F7A10: 9a7b2197  bl #0x3156878
0x068F7A14: 881e40f9  ldr x8, [x20, #0x38]
0x068F7A18: 000940f9  ldr x0, [x8, #0x10]
0x068F7A1C: 08d44439  ldrb w8, [x0, #0x135]
0x068F7A20: 48000037  tbnz w8, #0, #0x68f7a28
0x068F7A24: 7e7b2197  bl #0x315681c
0x068F7A28: 08e040b9  ldr w8, [x0, #0xe0]
0x068F7A2C: 48000035  cbnz w8, #0x68f7a34
0x068F7A30: 57242297  bl #0x3180b8c
0x068F7A34: 881e40f9  ldr x8, [x20, #0x38]
0x068F7A38: 777100f0  adrp x23, #0x7726000
0x068F7A3C: 767100f0  adrp x22, #0x7726000
0x068F7A40: 000940f9  ldr x0, [x8, #0x10]
0x068F7A44: 08d44439  ldrb w8, [x0, #0x135]
0x068F7A48: f7e641f9  ldr x23, [x23, #0x3c8]
0x068F7A4C: d6e241f9  ldr x22, [x22, #0x3c0]
0x068F7A50: 48000037  tbnz w8, #0, #0x68f7a58
0x068F7A54: 727b2197  bl #0x315681c
0x068F7A58: 085c40f9  ldr x8, [x0, #0xb8]
0x068F7A5C: e00240f9  ldr x0, [x23]
0x068F7A60: 140140f9  ldr x20, [x8]
0x068F7A64: 8f242297  bl #0x3180ca0
0x068F7A68: c20240f9  ldr x2, [x22]
0x068F7A6C: e10314aa  mov x1, x20
0x068F7A70: f50300aa  mov x21, x0
0x068F7A74: f2ce6897  bl #0x432b63c
0x068F7A78: f40313aa  mov x20, x19
0x068F7A7C: 958e02f8  str x21, [x20, #0x28]!
0x068F7A80: e00314aa  mov x0, x20
0x068F7A84: e10315aa  mov x1, x21
0x068F7A88: cf232297  bl #0x31809c4
0x068F7A8C: 880240f9  ldr x8, [x20]
0x068F7A90: 880300b4  cbz x8, #0x68f7b00
0x068F7A94: 081940b9  ldr w8, [x8, #0x18]
0x068F7A98: 614240b9  ldr w1, [x19, #0x40]
0x068F7A9C: 1f01016b  cmp w8, w1
0x068F7AA0: 8d020054  b.le #0x68f7af0
0x068F7AA4: 88700090  adrp x8, #0x7707000
0x068F7AA8: 089d41f9  ldr x8, [x8, #0x338]
0x068F7AAC: 000140f9  ldr x0, [x8]
0x068F7AB0: 13242297  bl #0x3180afc
0x068F7AB4: e80240f9  ldr x8, [x23]
0x068F7AB8: f30300aa  mov x19, x0
0x068F7ABC: e00308aa  mov x0, x8
0x068F7AC0: 78242297  bl #0x3180ca0
0x068F7AC4: c20240f9  ldr x2, [x22]
0x068F7AC8: e10313aa  mov x1, x19
0x068F7ACC: f50300aa  mov x21, x0
0x068F7AD0: dbce6897  bl #0x432b63c
0x068F7AD4: 950200f9  str x21, [x20]
0x068F7AD8: e00314aa  mov x0, x20
0x068F7ADC: e10315aa  mov x1, x21
0x068F7AE0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F7AE4: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F7AE8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068F7AEC: b6232217  b #0x31809c4
0x068F7AF0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F7AF4: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F7AF8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068F7AFC: c0035fd6  ret
0x068F7B00: 6b242297  bl #0x3180cac

; RVA 0x68F7B04 | public void LoadComponent(BoardInventorySlots componentData) { }
; bytes=264 sha256=1d64abc7efde4befeb15e84d01ec669116489bfebb7a7a9896134edf595431d0 status=arm64_complete_bound indexed_start=True
0x068F7B04: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068F7B08: f65701a9  stp x22, x21, [sp, #0x10]
0x068F7B0C: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F7B10: 95a100d0  adrp x21, #0x7d29000
0x068F7B14: 767100f0  adrp x22, #0x7726000
0x068F7B18: a8266139  ldrb w8, [x21, #0x849]
0x068F7B1C: d6fa41f9  ldr x22, [x22, #0x3f0]
0x068F7B20: f40301aa  mov x20, x1
0x068F7B24: f30300aa  mov x19, x0
0x068F7B28: e8010037  tbnz w8, #0, #0x68f7b64
0x068F7B2C: 80700090  adrp x0, #0x7707000
0x068F7B30: 009c41f9  ldr x0, [x0, #0x338]
0x068F7B34: b9232297  bl #0x3180a18
0x068F7B38: 607100f0  adrp x0, #0x7726000
0x068F7B3C: 00f841f9  ldr x0, [x0, #0x3f0]
0x068F7B40: b6232297  bl #0x3180a18
0x068F7B44: 607100f0  adrp x0, #0x7726000
0x068F7B48: 00e041f9  ldr x0, [x0, #0x3c0]
0x068F7B4C: b3232297  bl #0x3180a18
0x068F7B50: 607100f0  adrp x0, #0x7726000
0x068F7B54: 00e441f9  ldr x0, [x0, #0x3c8]
0x068F7B58: b0232297  bl #0x3180a18
0x068F7B5C: 28008052  movz w8, #0x1
0x068F7B60: a8262139  strb w8, [x21, #0x849]
0x068F7B64: f50313aa  mov x21, x19
0x068F7B68: a08e42f8  ldr x0, [x21, #0x28]!
0x068F7B6C: c10240f9  ldr x1, [x22]
0x068F7B70: 8ec14c97  bl #0x3c281a8
0x068F7B74: 60000036  tbz w0, #0, #0x68f7b80
0x068F7B78: 140300b5  cbnz x20, #0x68f7bd8
0x068F7B7C: 23000014  b #0x68f7c08
0x068F7B80: 540400b4  cbz x20, #0x68f7c08
0x068F7B84: 88700090  adrp x8, #0x7707000
0x068F7B88: 811e40b9  ldr w1, [x20, #0x1c]
0x068F7B8C: 089d41f9  ldr x8, [x8, #0x338]
0x068F7B90: 000140f9  ldr x0, [x8]
0x068F7B94: da232297  bl #0x3180afc
0x068F7B98: 687100f0  adrp x8, #0x7726000
0x068F7B9C: 08e541f9  ldr x8, [x8, #0x3c8]
0x068F7BA0: f60300aa  mov x22, x0
0x068F7BA4: 080140f9  ldr x8, [x8]
0x068F7BA8: e00308aa  mov x0, x8
0x068F7BAC: 3d242297  bl #0x3180ca0
0x068F7BB0: 687100f0  adrp x8, #0x7726000
0x068F7BB4: 08e141f9  ldr x8, [x8, #0x3c0]
0x068F7BB8: e10316aa  mov x1, x22
0x068F7BBC: f70300aa  mov x23, x0
0x068F7BC0: 020140f9  ldr x2, [x8]
0x068F7BC4: 9ece6897  bl #0x432b63c
0x068F7BC8: e00315aa  mov x0, x21
0x068F7BCC: e10317aa  mov x1, x23
0x068F7BD0: b70200f9  str x23, [x21]
0x068F7BD4: 7c232297  bl #0x31809c4
0x068F7BD8: 811240f9  ldr x1, [x20, #0x20]
0x068F7BDC: 618e04f8  str x1, [x19, #0x48]!
0x068F7BE0: e00313aa  mov x0, x19
0x068F7BE4: 78232297  bl #0x31809c4
0x068F7BE8: 881a40b9  ldr w8, [x20, #0x18]
0x068F7BEC: 29008052  movz w9, #0x1
0x068F7BF0: 69821e38  sturb w9, [x19, #-0x18]
0x068F7BF4: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F7BF8: 68821fb8  stur w8, [x19, #-8]
0x068F7BFC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F7C00: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068F7C04: c0035fd6  ret
0x068F7C08: 29242297  bl #0x3180cac

; RVA 0x68F7C0C | public void LoadComponent(Dictionary<PlayerResourceEnum, float> backendProgressData) { }
; bytes=456 sha256=3b97cc77a73dca04e91d17f92e191f815d670e727d688913c7de0ad46e22afb1 status=arm64_complete_bound indexed_start=True
0x068F7C0C: ff8301d1  sub sp, sp, #0x60
0x068F7C10: e81300fd  str d8, [sp, #0x20]
0x068F7C14: fe1700f9  str x30, [sp, #0x28]
0x068F7C18: f85f03a9  stp x24, x23, [sp, #0x30]
0x068F7C1C: f65704a9  stp x22, x21, [sp, #0x40]
0x068F7C20: f44f05a9  stp x20, x19, [sp, #0x50]
0x068F7C24: 95a100d0  adrp x21, #0x7d29000
0x068F7C28: a82a6139  ldrb w8, [x21, #0x84a]
0x068F7C2C: f40301aa  mov x20, x1
0x068F7C30: f30300aa  mov x19, x0
0x068F7C34: 68030037  tbnz w8, #0, #0x68f7ca0
0x068F7C38: 607100f0  adrp x0, #0x7726000
0x068F7C3C: 00fc41f9  ldr x0, [x0, #0x3f8]
0x068F7C40: 76232297  bl #0x3180a18
0x068F7C44: 607100f0  adrp x0, #0x7726000
0x068F7C48: 000042f9  ldr x0, [x0, #0x400]
0x068F7C4C: 73232297  bl #0x3180a18
0x068F7C50: 006f00d0  adrp x0, #0x76d9000
0x068F7C54: 00f847f9  ldr x0, [x0, #0xff0]
0x068F7C58: 70232297  bl #0x3180a18
0x068F7C5C: 607100f0  adrp x0, #0x7726000
0x068F7C60: 000442f9  ldr x0, [x0, #0x408]
0x068F7C64: 6d232297  bl #0x3180a18
0x068F7C68: 607100f0  adrp x0, #0x7726000
0x068F7C6C: 000842f9  ldr x0, [x0, #0x410]
0x068F7C70: 6a232297  bl #0x3180a18
0x068F7C74: 607100f0  adrp x0, #0x7726000
0x068F7C78: 000c42f9  ldr x0, [x0, #0x418]
0x068F7C7C: 67232297  bl #0x3180a18
0x068F7C80: 607100f0  adrp x0, #0x7726000
0x068F7C84: 001042f9  ldr x0, [x0, #0x420]
0x068F7C88: 64232297  bl #0x3180a18
0x068F7C8C: 607100f0  adrp x0, #0x7726000
0x068F7C90: 001442f9  ldr x0, [x0, #0x428]
0x068F7C94: 61232297  bl #0x3180a18
0x068F7C98: 28008052  movz w8, #0x1
0x068F7C9C: a82a2139  strb w8, [x21, #0x84a]
0x068F7CA0: 00e4006f  movi v0.2d, #0000000000000000
0x068F7CA4: e00300ad  stp q0, q0, [sp]
0x068F7CA8: b40400b4  cbz x20, #0x68f7d3c
0x068F7CAC: 687100f0  adrp x8, #0x7726000
0x068F7CB0: 080142f9  ldr x8, [x8, #0x400]
0x068F7CB4: 767100f0  adrp x22, #0x7726000
0x068F7CB8: d60a42f9  ldr x22, [x22, #0x410]
0x068F7CBC: 777100f0  adrp x23, #0x7726000
0x068F7CC0: 010140f9  ldr x1, [x8]
0x068F7CC4: 186f00d0  adrp x24, #0x76d9000
0x068F7CC8: 757100f0  adrp x21, #0x7726000
0x068F7CCC: f7fe41f9  ldr x23, [x23, #0x3f8]
0x068F7CD0: 18fb47f9  ldr x24, [x24, #0xff0]
0x068F7CD4: b50642f9  ldr x21, [x21, #0x408]
0x068F7CD8: e8030091  mov x8, sp
0x068F7CDC: e00314aa  mov x0, x20
0x068F7CE0: f2b69597  bl #0x4e658a8
0x068F7CE4: c10240f9  ldr x1, [x22]
0x068F7CE8: e0030091  mov x0, sp
0x068F7CEC: d2619d97  bl #0x5050434
0x068F7CF0: 00020036  tbz w0, #0, #0x68f7d30
0x068F7CF4: 601e40f9  ldr x0, [x19, #0x38]
0x068F7CF8: 000300b4  cbz x0, #0x68f7d58
0x068F7CFC: f41340b9  ldr w20, [sp, #0x10]
0x068F7D00: e81740bd  ldr s8, [sp, #0x14]
0x068F7D04: e20240f9  ldr x2, [x23]
0x068F7D08: e103142a  mov w1, w20
0x068F7D0C: 6bb69597  bl #0x4e656b8
0x068F7D10: a0fe0736  tbz w0, #0, #0x68f7ce4
0x068F7D14: 601e40f9  ldr x0, [x19, #0x38]
0x068F7D18: 200200b4  cbz x0, #0x68f7d5c
0x068F7D1C: 020340f9  ldr x2, [x24]
0x068F7D20: e103142a  mov w1, w20
0x068F7D24: 001da84e  mov v0.16b, v8.16b
0x068F7D28: e1b59597  bl #0x4e654ac
0x068F7D2C: eeffff17  b #0x68f7ce4
0x068F7D30: a10240f9  ldr x1, [x21]
0x068F7D34: e0030091  mov x0, sp
0x068F7D38: 00629d97  bl #0x5050538
0x068F7D3C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x068F7D40: f65744a9  ldp x22, x21, [sp, #0x40]
0x068F7D44: f85f43a9  ldp x24, x23, [sp, #0x30]
0x068F7D48: fe1740f9  ldr x30, [sp, #0x28]
0x068F7D4C: e81340fd  ldr d8, [sp, #0x20]
0x068F7D50: ff830191  add sp, sp, #0x60
0x068F7D54: c0035fd6  ret
0x068F7D58: d5232297  bl #0x3180cac
0x068F7D5C: d4232297  bl #0x3180cac
0x068F7D60: 04000014  b #0x68f7d70
0x068F7D64: 03000014  b #0x68f7d70
0x068F7D68: 02000014  b #0x68f7d70
0x068F7D6C: 01000014  b #0x68f7d70
0x068F7D70: f30300aa  mov x19, x0
0x068F7D74: 3f040071  cmp w1, #1
0x068F7D78: 61010054  b.ne #0x68f7da4
0x068F7D7C: e00313aa  mov x0, x19
0x068F7D80: e45a2394  bl #0x71ce910
0x068F7D84: 140040f9  ldr x20, [x0]
0x068F7D88: e65a2394  bl #0x71ce920
0x068F7D8C: a10240f9  ldr x1, [x21]
0x068F7D90: e0030091  mov x0, sp
0x068F7D94: e9619d97  bl #0x5050538
0x068F7D98: 34fdffb4  cbz x20, #0x68f7d3c
0x068F7D9C: e00314aa  mov x0, x20
0x068F7DA0: c1232297  bl #0x3180ca4
0x068F7DA4: f4031faa  mov x20, xzr
0x068F7DA8: 02000014  b #0x68f7db0
0x068F7DAC: f30300aa  mov x19, x0
0x068F7DB0: a10240f9  ldr x1, [x21]
0x068F7DB4: e0030091  mov x0, sp
0x068F7DB8: e0619d97  bl #0x5050538
0x068F7DBC: 740000b5  cbnz x20, #0x68f7dc8
0x068F7DC0: e00313aa  mov x0, x19
0x068F7DC4: e5b62597  bl #0x3265958
0x068F7DC8: e00314aa  mov x0, x20
0x068F7DCC: b6232297  bl #0x3180ca4
0x068F7DD0: d1451497  bl #0x2e09514

; RVA 0x68F7694 | private Dictionary<PlayerResourceEnum, float> InitializeEmptyToolsProgress() { }
; bytes=264 sha256=59b9c45cd04d4bd9026592855768a0993823d08d8ec4f31bb5be670df37f19b0 status=arm64_complete_bound indexed_start=True
0x068F7694: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068F7698: f65701a9  stp x22, x21, [sp, #0x10]
0x068F769C: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F76A0: 95a100d0  adrp x21, #0x7d29000
0x068F76A4: 767100f0  adrp x22, #0x7726000
0x068F76A8: 737100f0  adrp x19, #0x7726000
0x068F76AC: 546e0090  adrp x20, #0x76bf000
0x068F76B0: a82e6139  ldrb w8, [x21, #0x84b]
0x068F76B4: d6ea41f9  ldr x22, [x22, #0x3d0]
0x068F76B8: 73ee41f9  ldr x19, [x19, #0x3d8]
0x068F76BC: 944644f9  ldr x20, [x20, #0x888]
0x068F76C0: e8010037  tbnz w8, #0, #0x68f76fc
0x068F76C4: 607100f0  adrp x0, #0x7726000
0x068F76C8: 00ec41f9  ldr x0, [x0, #0x3d8]
0x068F76CC: d3242297  bl #0x3180a18
0x068F76D0: 006f00d0  adrp x0, #0x76d9000
0x068F76D4: 00f847f9  ldr x0, [x0, #0xff0]
0x068F76D8: d0242297  bl #0x3180a18
0x068F76DC: 607100f0  adrp x0, #0x7726000
0x068F76E0: 00e841f9  ldr x0, [x0, #0x3d0]
0x068F76E4: cd242297  bl #0x3180a18
0x068F76E8: 406e0090  adrp x0, #0x76bf000
0x068F76EC: 004444f9  ldr x0, [x0, #0x888]
0x068F76F0: ca242297  bl #0x3180a18
0x068F76F4: 28008052  movz w8, #0x1
0x068F76F8: a82e2139  strb w8, [x21, #0x84b]
0x068F76FC: c00240f9  ldr x0, [x22]
0x068F7700: 68252297  bl #0x3180ca0
0x068F7704: 610240f9  ldr x1, [x19]
0x068F7708: f30300aa  mov x19, x0
0x068F770C: f1b39597  bl #0x4e646d0
0x068F7710: 800240f9  ldr x0, [x20]
0x068F7714: 08e040b9  ldr w8, [x0, #0xe0]
0x068F7718: 68000035  cbnz w8, #0x68f7724
0x068F771C: 1c252297  bl #0x3180b8c
0x068F7720: 800240f9  ldr x0, [x20]
0x068F7724: 085c40f9  ldr x8, [x0, #0xb8]
0x068F7728: 140140f9  ldr x20, [x8]
0x068F772C: 740300b4  cbz x20, #0x68f7798
0x068F7730: 880e40f9  ldr x8, [x20, #0x18]
0x068F7734: 1f050071  cmp w8, #1
0x068F7738: 4b020054  b.lt #0x68f7780
0x068F773C: 166f00d0  adrp x22, #0x76d9000
0x068F7740: d6fa47f9  ldr x22, [x22, #0xff0]
0x068F7744: f5031faa  mov x21, xzr
0x068F7748: 087d4092  and x8, x8, #0xffffffff
0x068F774C: 97820091  add x23, x20, #0x20
0x068F7750: bf4228eb  cmp x21, w8, uxtw
0x068F7754: 02020054  b.hs #0x68f7794
0x068F7758: 130200b4  cbz x19, #0x68f7798
0x068F775C: e17a75b8  ldr w1, [x23, x21, lsl #2]
0x068F7760: c20240f9  ldr x2, [x22]
0x068F7764: e003271e  fmov s0, wzr
0x068F7768: e00313aa  mov x0, x19
0x068F776C: 50b79597  bl #0x4e654ac
0x068F7770: 881a40b9  ldr w8, [x20, #0x18]
0x068F7774: b5060091  add x21, x21, #1
0x068F7778: bfc228eb  cmp x21, w8, sxtw
0x068F777C: abfeff54  b.lt #0x68f7750
0x068F7780: e00313aa  mov x0, x19
0x068F7784: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F7788: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F778C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068F7790: c0035fd6  ret
0x068F7794: 48252297  bl #0x3180cb4
0x068F7798: 45252297  bl #0x3180cac

