; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1049 MergeEngine.ECS.Components.Items.ChargableComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FB824 | public override string get_ComponentKey() { }
; bytes=64 sha256=8739e89ab411f9d06304d6f8dbd6811b3486e8d2520e926470b243022d933a34 status=arm64_complete_bound indexed_start=True
0x068FB824: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FB828: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FB82C: 73a100d0  adrp x19, #0x7d29000
0x068FB830: b47000f0  adrp x20, #0x7712000
0x068FB834: 68266239  ldrb w8, [x19, #0x889]
0x068FB838: 945a42f9  ldr x20, [x20, #0x4b0]
0x068FB83C: c8000037  tbnz w8, #0, #0x68fb854
0x068FB840: a07000f0  adrp x0, #0x7712000
0x068FB844: 005842f9  ldr x0, [x0, #0x4b0]
0x068FB848: 74142297  bl #0x3180a18
0x068FB84C: 28008052  movz w8, #0x1
0x068FB850: 68262239  strb w8, [x19, #0x889]
0x068FB854: 800240f9  ldr x0, [x20]
0x068FB858: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FB85C: fe0742f8  ldr x30, [sp], #0x20
0x068FB860: c0035fd6  ret

; RVA 0x68FB864 | public ReadOnlyCollection<RemoteSpriteLocation> get_StateSprites() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x068FB864: 001840f9  ldr x0, [x0, #0x30]
0x068FB868: c0035fd6  ret

; RVA 0x68FB86C | public RemoteSpriteLocation get_CurrentStateSprite() { }
; bytes=84 sha256=94b2633dce3a64f346bf3631e7229dc24d17a0ac5ac8642e2bd9d6f6e395bab8 status=arm64_complete_bound indexed_start=True
0x068FB86C: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FB870: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FB874: 74a100d0  adrp x20, #0x7d29000
0x068FB878: 882a6239  ldrb w8, [x20, #0x88a]
0x068FB87C: f30300aa  mov x19, x0
0x068FB880: c8000037  tbnz w8, #0, #0x68fb898
0x068FB884: 407100f0  adrp x0, #0x7726000
0x068FB888: 001443f9  ldr x0, [x0, #0x628]
0x068FB88C: 63142297  bl #0x3180a18
0x068FB890: 28008052  movz w8, #0x1
0x068FB894: 882a2239  strb w8, [x20, #0x88a]
0x068FB898: 601a40f9  ldr x0, [x19, #0x30]
0x068FB89C: 000100b4  cbz x0, #0x68fb8bc
0x068FB8A0: 487100f0  adrp x8, #0x7726000
0x068FB8A4: 081543f9  ldr x8, [x8, #0x628]
0x068FB8A8: 613a40b9  ldr w1, [x19, #0x38]
0x068FB8AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FB8B0: 020140f9  ldr x2, [x8]
0x068FB8B4: fe0742f8  ldr x30, [sp], #0x20
0x068FB8B8: 4e286d17  b #0x44459f0
0x068FB8BC: fc142297  bl #0x3180cac

; RVA 0x68FB8C0 | public void .ctor(ChargableCapability capability, Entity entity) { }
; bytes=220 sha256=3b7ab388760380956604279cf13ce1a53a3f5001ec92091a88f00217a3d3c38c status=arm64_complete_bound indexed_start=True
0x068FB8C0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FB8C4: f65701a9  stp x22, x21, [sp, #0x10]
0x068FB8C8: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FB8CC: 76a100d0  adrp x22, #0x7d29000
0x068FB8D0: 577100f0  adrp x23, #0x7726000
0x068FB8D4: c82e6239  ldrb w8, [x22, #0x88b]
0x068FB8D8: f71a43f9  ldr x23, [x23, #0x630]
0x068FB8DC: f50302aa  mov x21, x2
0x068FB8E0: f40301aa  mov x20, x1
0x068FB8E4: f30300aa  mov x19, x0
0x068FB8E8: 88010037  tbnz w8, #0, #0x68fb918
0x068FB8EC: 407100f0  adrp x0, #0x7726000
0x068FB8F0: 001c43f9  ldr x0, [x0, #0x638]
0x068FB8F4: 49142297  bl #0x3180a18
0x068FB8F8: 407100f0  adrp x0, #0x7726000
0x068FB8FC: 002043f9  ldr x0, [x0, #0x640]
0x068FB900: 46142297  bl #0x3180a18
0x068FB904: 407100f0  adrp x0, #0x7726000
0x068FB908: 001843f9  ldr x0, [x0, #0x630]
0x068FB90C: 43142297  bl #0x3180a18
0x068FB910: 28008052  movz w8, #0x1
0x068FB914: c82e2239  strb w8, [x22, #0x88b]
0x068FB918: e30240f9  ldr x3, [x23]
0x068FB91C: e00313aa  mov x0, x19
0x068FB920: e10314aa  mov x1, x20
0x068FB924: e20315aa  mov x2, x21
0x068FB928: ab236f97  bl #0x44c47d4
0x068FB92C: 740300b4  cbz x20, #0x68fb998
0x068FB930: e00314aa  mov x0, x20
0x068FB934: e1031faa  mov x1, xzr
0x068FB938: 3f50dc97  bl #0x600fa34
0x068FB93C: e00200b4  cbz x0, #0x68fb998
0x068FB940: 080c40f9  ldr x8, [x0, #0x18]
0x068FB944: 280200b4  cbz x8, #0x68fb988
0x068FB948: 487100f0  adrp x8, #0x7726000
0x068FB94C: 081d43f9  ldr x8, [x8, #0x638]
0x068FB950: 010140f9  ldr x1, [x8]
0x068FB954: 9f914d97  bl #0x3c5ffd0
0x068FB958: 000200b4  cbz x0, #0x68fb998
0x068FB95C: 487100f0  adrp x8, #0x7726000
0x068FB960: 082143f9  ldr x8, [x8, #0x640]
0x068FB964: 010140f9  ldr x1, [x8]
0x068FB968: 4b235d97  bl #0x4044694
0x068FB96C: 600e03f8  str x0, [x19, #0x30]!
0x068FB970: e10300aa  mov x1, x0
0x068FB974: e00313aa  mov x0, x19
0x068FB978: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FB97C: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FB980: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FB984: 10142217  b #0x31809c4
0x068FB988: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FB98C: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FB990: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FB994: c0035fd6  ret
0x068FB998: c5142297  bl #0x3180cac

; RVA 0x68FB99C | public override void LoadComponent(SerializedChargableComponent componentData) { }
; bytes=28 sha256=5f3b0fb470222035dd55b4e4e665dae19c97c65061dd7cf05b94d272cc7387ac status=arm64_complete_bound indexed_start=True
0x068FB99C: fe0f1ff8  str x30, [sp, #-0x10]!
0x068FB9A0: a10000b4  cbz x1, #0x68fb9b4
0x068FB9A4: 281040b9  ldr w8, [x1, #0x10]
0x068FB9A8: 083800b9  str w8, [x0, #0x38]
0x068FB9AC: fe0741f8  ldr x30, [sp], #0x10
0x068FB9B0: c0035fd6  ret
0x068FB9B4: be142297  bl #0x3180cac

; RVA 0x68FB9B8 | protected override void OnBeforeSerialize() { }
; bytes=76 sha256=67da68bbf35a05eeea5702548576688419c869b1b448eaf0e5a119abf66aef4f status=arm64_complete_bound indexed_start=True
0x068FB9B8: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FB9BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FB9C0: 74a100d0  adrp x20, #0x7d29000
0x068FB9C4: 88326239  ldrb w8, [x20, #0x88c]
0x068FB9C8: f30300aa  mov x19, x0
0x068FB9CC: c8000037  tbnz w8, #0, #0x68fb9e4
0x068FB9D0: 407100f0  adrp x0, #0x7726000
0x068FB9D4: 002443f9  ldr x0, [x0, #0x648]
0x068FB9D8: 10142297  bl #0x3180a18
0x068FB9DC: 28008052  movz w8, #0x1
0x068FB9E0: 88322239  strb w8, [x20, #0x88c]
0x068FB9E4: 681640f9  ldr x8, [x19, #0x28]
0x068FB9E8: c80000b4  cbz x8, #0x68fba00
0x068FB9EC: 693a40b9  ldr w9, [x19, #0x38]
0x068FB9F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FB9F4: 091100b9  str w9, [x8, #0x10]
0x068FB9F8: fe0742f8  ldr x30, [sp], #0x20
0x068FB9FC: c0035fd6  ret
0x068FBA00: ab142297  bl #0x3180cac

