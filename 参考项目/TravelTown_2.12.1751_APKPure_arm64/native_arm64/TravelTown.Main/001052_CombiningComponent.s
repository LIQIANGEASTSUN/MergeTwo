; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1052 MergeEngine.ECS.Components.Items.CombiningComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FBDA8 | public override string get_ComponentKey() { }
; bytes=64 sha256=f04b6f092f5f21cb66c90056947080593c5aafd9d769f3d432ea02c311ca04c1 status=arm64_complete_bound indexed_start=True
0x068FBDA8: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FBDAC: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FBDB0: 73a100d0  adrp x19, #0x7d29000
0x068FBDB4: b47000f0  adrp x20, #0x7712000
0x068FBDB8: 68566239  ldrb w8, [x19, #0x895]
0x068FBDBC: 945642f9  ldr x20, [x20, #0x4a8]
0x068FBDC0: c8000037  tbnz w8, #0, #0x68fbdd8
0x068FBDC4: a07000f0  adrp x0, #0x7712000
0x068FBDC8: 005442f9  ldr x0, [x0, #0x4a8]
0x068FBDCC: 13132297  bl #0x3180a18
0x068FBDD0: 28008052  movz w8, #0x1
0x068FBDD4: 68562239  strb w8, [x19, #0x895]
0x068FBDD8: 800240f9  ldr x0, [x20]
0x068FBDDC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBDE0: fe0742f8  ldr x30, [sp], #0x20
0x068FBDE4: c0035fd6  ret

; RVA 0x68FBDE8 | public List<ItemPayloadBase> get_ConsumedItems() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x068FBDE8: 001840f9  ldr x0, [x0, #0x30]
0x068FBDEC: c0035fd6  ret

; RVA 0x68FBDF0 | private void set_ConsumedItems(List<ItemPayloadBase> value) { }
; bytes=8 sha256=91b7fadb872ae514ae8c19fb9aecba354c8049253ef10505accedb4322bab154 status=arm64_complete_bound indexed_start=True
0x068FBDF0: 010c03f8  str x1, [x0, #0x30]!
0x068FBDF4: f4122217  b #0x31809c4

; RVA 0x68FBDF8 | public List<Combination> get_Combinations() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x068FBDF8: 001c40f9  ldr x0, [x0, #0x38]
0x068FBDFC: c0035fd6  ret

; RVA 0x68FBE00 | public bool get_ReadyToProduce() { }
; bytes=8 sha256=6a4f1a962f868613e6936806601aa97f462be4272d6039e73d901c7f9868c768 status=arm64_complete_bound indexed_start=True
0x068FBE00: 00004139  ldrb w0, [x0, #0x40]
0x068FBE04: c0035fd6  ret

; RVA 0x68FBE08 | public void set_ReadyToProduce(bool value) { }
; bytes=12 sha256=501d7d5905288072269f6b4c4b92bbb856126869e31af66d1d507a7ad60889a3 status=arm64_complete_bound indexed_start=True
0x068FBE08: 28000012  and w8, w1, #1
0x068FBE0C: 08000139  strb w8, [x0, #0x40]
0x068FBE10: c0035fd6  ret

; RVA 0x68FBE14 | public bool get_IsProducing() { }
; bytes=8 sha256=20243481d3a2d7b2270aac9d7fd1b1dc90dc89c7ef8feddb22c6c04b582912ac status=arm64_complete_bound indexed_start=True
0x068FBE14: 00044139  ldrb w0, [x0, #0x41]
0x068FBE18: c0035fd6  ret

; RVA 0x68FBE1C | public void set_IsProducing(bool value) { }
; bytes=12 sha256=24b737bc52eea080b94741b94f00dbccfe39e203b6fc02126996c1b4ddb352c0 status=arm64_complete_bound indexed_start=True
0x068FBE1C: 28000012  and w8, w1, #1
0x068FBE20: 08040139  strb w8, [x0, #0x41]
0x068FBE24: c0035fd6  ret

; RVA 0x68FBE28 | public bool get_BoardIsFullShown() { }
; bytes=8 sha256=3d6b1a80468ffc83b308fc2faccbb32f8429293ebd5f9d1ed127a4be9825e919 status=arm64_complete_bound indexed_start=True
0x068FBE28: 00084139  ldrb w0, [x0, #0x42]
0x068FBE2C: c0035fd6  ret

; RVA 0x68FBE30 | public void set_BoardIsFullShown(bool value) { }
; bytes=12 sha256=614af25aa14f333937c66a0f50197fa46ec63cabb74bbfeae242e5b7ccc63049 status=arm64_complete_bound indexed_start=True
0x068FBE30: 28000012  and w8, w1, #1
0x068FBE34: 08080139  strb w8, [x0, #0x42]
0x068FBE38: c0035fd6  ret

; RVA 0x68FBE3C | public void .ctor(InteractionCapability capability, Entity entity) { }
; bytes=196 sha256=507e801acb2be080dae1156d942960363fe6a7432e6ab8bec6f8a0ea2278aaf1 status=arm64_complete_bound indexed_start=True
0x068FBE3C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FBE40: f65701a9  stp x22, x21, [sp, #0x10]
0x068FBE44: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FBE48: 76a100d0  adrp x22, #0x7d29000
0x068FBE4C: 577100f0  adrp x23, #0x7726000
0x068FBE50: c85a6239  ldrb w8, [x22, #0x896]
0x068FBE54: f73243f9  ldr x23, [x23, #0x660]
0x068FBE58: f50302aa  mov x21, x2
0x068FBE5C: f40301aa  mov x20, x1
0x068FBE60: f30300aa  mov x19, x0
0x068FBE64: 88010037  tbnz w8, #0, #0x68fbe94
0x068FBE68: 407100f0  adrp x0, #0x7726000
0x068FBE6C: 003443f9  ldr x0, [x0, #0x668]
0x068FBE70: ea122297  bl #0x3180a18
0x068FBE74: e06b00f0  adrp x0, #0x767a000
0x068FBE78: 008c42f9  ldr x0, [x0, #0x518]
0x068FBE7C: e7122297  bl #0x3180a18
0x068FBE80: 407100f0  adrp x0, #0x7726000
0x068FBE84: 003043f9  ldr x0, [x0, #0x660]
0x068FBE88: e4122297  bl #0x3180a18
0x068FBE8C: 28008052  movz w8, #0x1
0x068FBE90: c85a2239  strb w8, [x22, #0x896]
0x068FBE94: e30240f9  ldr x3, [x23]
0x068FBE98: e00313aa  mov x0, x19
0x068FBE9C: e10314aa  mov x1, x20
0x068FBEA0: e20315aa  mov x2, x21
0x068FBEA4: 4c226f97  bl #0x44c47d4
0x068FBEA8: b40200b4  cbz x20, #0x68fbefc
0x068FBEAC: 811640f9  ldr x1, [x20, #0x28]
0x068FBEB0: f46b00f0  adrp x20, #0x767a000
0x068FBEB4: 557100f0  adrp x21, #0x7726000
0x068FBEB8: 948e42f9  ldr x20, [x20, #0x518]
0x068FBEBC: b53643f9  ldr x21, [x21, #0x668]
0x068FBEC0: e00313aa  mov x0, x19
0x068FBEC4: 018c03f8  str x1, [x0, #0x38]!
0x068FBEC8: bf122297  bl #0x31809c4
0x068FBECC: 800240f9  ldr x0, [x20]
0x068FBED0: 74132297  bl #0x3180ca0
0x068FBED4: a10240f9  ldr x1, [x21]
0x068FBED8: f40300aa  mov x20, x0
0x068FBEDC: 571f5d97  bl #0x4043c38
0x068FBEE0: 740e03f8  str x20, [x19, #0x30]!
0x068FBEE4: e00313aa  mov x0, x19
0x068FBEE8: e10314aa  mov x1, x20
0x068FBEEC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FBEF0: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FBEF4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FBEF8: b3122217  b #0x31809c4
0x068FBEFC: 6c132297  bl #0x3180cac

; RVA 0x68FBF00 | protected override void OnBeforeSerialize() { }
; bytes=76 sha256=9f4d02efd1ccffb938563e1f7f0229dcc7cb4b25b56cb8d5def1b5521eda9c0c status=arm64_complete_bound indexed_start=True
0x068FBF00: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FBF04: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FBF08: 74a100d0  adrp x20, #0x7d29000
0x068FBF0C: 885e6239  ldrb w8, [x20, #0x897]
0x068FBF10: f30300aa  mov x19, x0
0x068FBF14: c8000037  tbnz w8, #0, #0x68fbf2c
0x068FBF18: 407100f0  adrp x0, #0x7726000
0x068FBF1C: 003843f9  ldr x0, [x0, #0x670]
0x068FBF20: be122297  bl #0x3180a18
0x068FBF24: 28008052  movz w8, #0x1
0x068FBF28: 885e2239  strb w8, [x20, #0x897]
0x068FBF2C: 601640f9  ldr x0, [x19, #0x28]
0x068FBF30: c00000b4  cbz x0, #0x68fbf48
0x068FBF34: 611a40f9  ldr x1, [x19, #0x30]
0x068FBF38: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBF3C: 010c01f8  str x1, [x0, #0x10]!
0x068FBF40: fe0742f8  ldr x30, [sp], #0x20
0x068FBF44: a0122217  b #0x31809c4
0x068FBF48: 59132297  bl #0x3180cac

; RVA 0x68FBF4C | public override void LoadComponent(List<ItemPayloadBase> componentData) { }
; bytes=120 sha256=918f0c1f8360a36b1127afca6a2c0567b7e31944b25d59b6bfe5e45838a75559 status=arm64_complete_bound indexed_start=True
0x068FBF4C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x068FBF50: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FBF54: 75a100d0  adrp x21, #0x7d29000
0x068FBF58: a8626239  ldrb w8, [x21, #0x898]
0x068FBF5C: f40301aa  mov x20, x1
0x068FBF60: f30300aa  mov x19, x0
0x068FBF64: c8000037  tbnz w8, #0, #0x68fbf7c
0x068FBF68: 806e00d0  adrp x0, #0x76cd000
0x068FBF6C: 002c45f9  ldr x0, [x0, #0xa58]
0x068FBF70: aa122297  bl #0x3180a18
0x068FBF74: 28008052  movz w8, #0x1
0x068FBF78: a8622239  strb w8, [x21, #0x898]
0x068FBF7C: d40100b4  cbz x20, #0x68fbfb4
0x068FBF80: e00313aa  mov x0, x19
0x068FBF84: 140c03f8  str x20, [x0, #0x30]!
0x068FBF88: e10314aa  mov x1, x20
0x068FBF8C: 8e122297  bl #0x31809c4
0x068FBF90: e00313aa  mov x0, x19
0x068FBF94: e1031faa  mov x1, xzr
0x068FBF98: b1cee597  bl #0x626fa5c
0x068FBF9C: 200100b4  cbz x0, #0x68fbfc0
0x068FBFA0: 081840b9  ldr w8, [x0, #0x18]
0x068FBFA4: 1f050071  cmp w8, #1
0x068FBFA8: 6b000054  b.lt #0x68fbfb4
0x068FBFAC: 28008052  movz w8, #0x1
0x068FBFB0: 68020139  strb w8, [x19, #0x40]
0x068FBFB4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBFB8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x068FBFBC: c0035fd6  ret
0x068FBFC0: 3b132297  bl #0x3180cac

