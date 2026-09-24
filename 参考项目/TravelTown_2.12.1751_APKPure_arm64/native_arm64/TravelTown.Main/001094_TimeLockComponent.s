; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1094 MergeEngine.ECS.Components.Items.TimeLockComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FE0EC | public override string get_ComponentKey() { }
; bytes=64 sha256=b3fff187080b64b0a6e612d7910890949aa3f004c830f2f965c0eb019fbf1bc8 status=arm64_complete_bound indexed_start=True
0x068FE0EC: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FE0F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FE0F4: 53a100f0  adrp x19, #0x7d29000
0x068FE0F8: b4700090  adrp x20, #0x7712000
0x068FE0FC: 68fe6239  ldrb w8, [x19, #0x8bf]
0x068FE100: 945242f9  ldr x20, [x20, #0x4a0]
0x068FE104: c8000037  tbnz w8, #0, #0x68fe11c
0x068FE108: a0700090  adrp x0, #0x7712000
0x068FE10C: 005042f9  ldr x0, [x0, #0x4a0]
0x068FE110: 420a2297  bl #0x3180a18
0x068FE114: 28008052  movz w8, #0x1
0x068FE118: 68fe2239  strb w8, [x19, #0x8bf]
0x068FE11C: 800240f9  ldr x0, [x20]
0x068FE120: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FE124: fe0742f8  ldr x30, [sp], #0x20
0x068FE128: c0035fd6  ret

; RVA 0x68FE12C | public double get_TimeLeft() { }
; bytes=8 sha256=2594837cad53e8a1b3ab23dbcca4f9ed83b9ba7f68aae4e5aa5b9dc6ba57176c status=arm64_complete_bound indexed_start=True
0x068FE12C: 001840fd  ldr d0, [x0, #0x30]
0x068FE130: c0035fd6  ret

; RVA 0x68FE134 | public void set_TimeLeft(double value) { }
; bytes=8 sha256=7a73515bcc24c5b5a125949b62a760f71e9865db1601d64088edfc2616643e40 status=arm64_complete_bound indexed_start=True
0x068FE134: 001800fd  str d0, [x0, #0x30]
0x068FE138: c0035fd6  ret

; RVA 0x68FE13C | public double get_LockTime() { }
; bytes=8 sha256=c38937bcb2beb7c09e9c53044bde4b4117eb76bf52df427b991ba1432392624f status=arm64_complete_bound indexed_start=True
0x068FE13C: 001c40fd  ldr d0, [x0, #0x38]
0x068FE140: c0035fd6  ret

; RVA 0x68FE144 | public TimeLockGroup get_LockGroup() { }
; bytes=8 sha256=2794764ead4f4e46816d67d9f7faad262cb54d7a0b7a39d555c30024db08d1e8 status=arm64_complete_bound indexed_start=True
0x068FE144: 004040b9  ldr w0, [x0, #0x40]
0x068FE148: c0035fd6  ret

; RVA 0x68FE14C | public bool get_Locked() { }
; bytes=36 sha256=bbc1d92dc1ef9f3808be8dac57fb6a4cb89c31486044173da826b444fd36c803 status=arm64_complete_bound indexed_start=True
0x068FE14C: 001840fd  ldr d0, [x0, #0x30]
0x068FE150: 0820601e  fcmp d0, #0.0
0x068FE154: ad000054  b.le #0x68fe168
0x068FE158: 08344139  ldrb w8, [x0, #0x4d]
0x068FE15C: 1f010071  cmp w8, #0
0x068FE160: e0179f1a  cset w0, eq
0x068FE164: c0035fd6  ret
0x068FE168: e0031f2a  mov w0, wzr
0x068FE16C: c0035fd6  ret

; RVA 0x68FE170 | public bool get_BeingUnlocked() { }
; bytes=8 sha256=52546c3f5a38886eb64ae30b8638274f49e1d29b236fb8eddd6bba8cb576c4fa status=arm64_complete_bound indexed_start=True
0x068FE170: 00104139  ldrb w0, [x0, #0x44]
0x068FE174: c0035fd6  ret

; RVA 0x68FE178 | public void set_BeingUnlocked(bool value) { }
; bytes=12 sha256=9943911d86e147bc24fa20c1e36ec7211a3044e90237cfcf0dc968d45bc593c8 status=arm64_complete_bound indexed_start=True
0x068FE178: 28000012  and w8, w1, #1
0x068FE17C: 08100139  strb w8, [x0, #0x44]
0x068FE180: c0035fd6  ret

; RVA 0x68FE184 | public bool get_CanBeUnlocked() { }
; bytes=8 sha256=9dddc78fc3f41e2bebc83c2eb23d5e0d5dd1f2aa63f551511838e901c8016e4d status=arm64_complete_bound indexed_start=True
0x068FE184: 00144139  ldrb w0, [x0, #0x45]
0x068FE188: c0035fd6  ret

; RVA 0x68FE18C | public void set_CanBeUnlocked(bool value) { }
; bytes=12 sha256=6b90b52589bb2c98d70729a24c6fb85b0f18a5f09d0fee92197df575b9286a18 status=arm64_complete_bound indexed_start=True
0x068FE18C: 28000012  and w8, w1, #1
0x068FE190: 08140139  strb w8, [x0, #0x45]
0x068FE194: c0035fd6  ret

; RVA 0x68FE198 | public bool get_Used() { }
; bytes=8 sha256=2ee854468a05f592636209ed6892a3f4e5f97d716acedc39e0b73c7206a4facb status=arm64_complete_bound indexed_start=True
0x068FE198: 00184139  ldrb w0, [x0, #0x46]
0x068FE19C: c0035fd6  ret

; RVA 0x68FE1A0 | public void set_Used(bool value) { }
; bytes=12 sha256=6780e1b4bb62272f40c745a46a42c3a5c08953cbe04b609819d20157763a03ac status=arm64_complete_bound indexed_start=True
0x068FE1A0: 28000012  and w8, w1, #1
0x068FE1A4: 08180139  strb w8, [x0, #0x46]
0x068FE1A8: c0035fd6  ret

; RVA 0x68FE1AC | public ItemOrigin get_LockOrigins() { }
; bytes=8 sha256=5a3dbf09a4e8bdcceec86da53e57e6eb7ac66ceb50eedbff297fa2d5d118a7be status=arm64_complete_bound indexed_start=True
0x068FE1AC: 004840b9  ldr w0, [x0, #0x48]
0x068FE1B0: c0035fd6  ret

; RVA 0x68FE1B4 | public bool get_ModifiedByStateLoad() { }
; bytes=8 sha256=b7d3a04ef7356d8e3ed9c04c39decc2ad17582e27299d6b4e0827c683ee8e168 status=arm64_complete_bound indexed_start=True
0x068FE1B4: 00304139  ldrb w0, [x0, #0x4c]
0x068FE1B8: c0035fd6  ret

; RVA 0x68FE1BC | public void set_ModifiedByStateLoad(bool value) { }
; bytes=12 sha256=43ee5f905eb2d581ec094df7089569c9ba0c71ac1a6ad8e0c38f2a3adb9b4528 status=arm64_complete_bound indexed_start=True
0x068FE1BC: 28000012  and w8, w1, #1
0x068FE1C0: 08300139  strb w8, [x0, #0x4c]
0x068FE1C4: c0035fd6  ret

; RVA 0x68FE1C8 | public bool get_IsCooldownBlocked() { }
; bytes=8 sha256=27bd774e2ce11b712bc146c374f7dc79e93b3abf1fdd66f15ae8b88e8a21b027 status=arm64_complete_bound indexed_start=True
0x068FE1C8: 00344139  ldrb w0, [x0, #0x4d]
0x068FE1CC: c0035fd6  ret

; RVA 0x68FE1D0 | public void set_IsCooldownBlocked(bool value) { }
; bytes=12 sha256=e6b3e8e5727058387cadcf5fb9da8c9ee5b99f94180c760cf2e1b10e754dd6f6 status=arm64_complete_bound indexed_start=True
0x068FE1D0: 28000012  and w8, w1, #1
0x068FE1D4: 08340139  strb w8, [x0, #0x4d]
0x068FE1D8: c0035fd6  ret

; RVA 0x68FE1DC | public void .ctor(TimeLockCapability capability, Entity entity) { }
; bytes=144 sha256=d0d200f52f205d98e530920d5754bfec15552f842a326c14f061b870bf4003bc status=arm64_complete_bound indexed_start=True
0x068FE1DC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FE1E0: f65701a9  stp x22, x21, [sp, #0x10]
0x068FE1E4: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FE1E8: 57a100f0  adrp x23, #0x7d29000
0x068FE1EC: 56710090  adrp x22, #0x7726000
0x068FE1F0: e8026339  ldrb w8, [x23, #0x8c0]
0x068FE1F4: d6e643f9  ldr x22, [x22, #0x7c8]
0x068FE1F8: f50302aa  mov x21, x2
0x068FE1FC: f40301aa  mov x20, x1
0x068FE200: f30300aa  mov x19, x0
0x068FE204: c8000037  tbnz w8, #0, #0x68fe21c
0x068FE208: 40710090  adrp x0, #0x7726000
0x068FE20C: 00e443f9  ldr x0, [x0, #0x7c8]
0x068FE210: 020a2297  bl #0x3180a18
0x068FE214: 28008052  movz w8, #0x1
0x068FE218: e8022339  strb w8, [x23, #0x8c0]
0x068FE21C: 28008052  movz w8, #0x1
0x068FE220: 68160139  strb w8, [x19, #0x45]
0x068FE224: c30240f9  ldr x3, [x22]
0x068FE228: e00313aa  mov x0, x19
0x068FE22C: e10314aa  mov x1, x20
0x068FE230: e20315aa  mov x2, x21
0x068FE234: 68196f97  bl #0x44c47d4
0x068FE238: 940100b4  cbz x20, #0x68fe268
0x068FE23C: 881640b9  ldr w8, [x20, #0x14]
0x068FE240: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FE244: 0001621e  scvtf d0, w8
0x068FE248: 6002036d  stp d0, d0, [x19, #0x30]
0x068FE24C: 881a40b9  ldr w8, [x20, #0x18]
0x068FE250: 684200b9  str w8, [x19, #0x40]
0x068FE254: 881e40b9  ldr w8, [x20, #0x1c]
0x068FE258: 684a00b9  str w8, [x19, #0x48]
0x068FE25C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FE260: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FE264: c0035fd6  ret
0x068FE268: 910a2297  bl #0x3180cac

; RVA 0x68FE26C | public override void LoadComponent(SerializedTimeLockComponent componentData) { }
; bytes=52 sha256=f4ccc70239d6de0240bd6d93e792db04c970d898c807a86172db7e0de8b85422 status=arm64_complete_bound indexed_start=True
0x068FE26C: fe0f1ff8  str x30, [sp, #-0x10]!
0x068FE270: 610100b4  cbz x1, #0x68fe29c
0x068FE274: 200840fd  ldr d0, [x1, #0x10]
0x068FE278: 29008052  movz w9, #0x1
0x068FE27C: 001800fd  str d0, [x0, #0x30]
0x068FE280: 28604039  ldrb w8, [x1, #0x18]
0x068FE284: 09300139  strb w9, [x0, #0x4c]
0x068FE288: 08100139  strb w8, [x0, #0x44]
0x068FE28C: 28644039  ldrb w8, [x1, #0x19]
0x068FE290: 08340139  strb w8, [x0, #0x4d]
0x068FE294: fe0741f8  ldr x30, [sp], #0x10
0x068FE298: c0035fd6  ret
0x068FE29C: 840a2297  bl #0x3180cac

; RVA 0x68FE2A0 | protected override void OnBeforeSerialize() { }
; bytes=92 sha256=e85e1323d710644570d7f09e85617fab4fd13ef60ad8fdafd81dc42e88d85ce2 status=arm64_complete_bound indexed_start=True
0x068FE2A0: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FE2A4: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FE2A8: 54a100f0  adrp x20, #0x7d29000
0x068FE2AC: 88066339  ldrb w8, [x20, #0x8c1]
0x068FE2B0: f30300aa  mov x19, x0
0x068FE2B4: c8000037  tbnz w8, #0, #0x68fe2cc
0x068FE2B8: 40710090  adrp x0, #0x7726000
0x068FE2BC: 00e843f9  ldr x0, [x0, #0x7d0]
0x068FE2C0: d6092297  bl #0x3180a18
0x068FE2C4: 28008052  movz w8, #0x1
0x068FE2C8: 88062339  strb w8, [x20, #0x8c1]
0x068FE2CC: 681640f9  ldr x8, [x19, #0x28]
0x068FE2D0: 480100b4  cbz x8, #0x68fe2f8
0x068FE2D4: 601a40fd  ldr d0, [x19, #0x30]
0x068FE2D8: 000900fd  str d0, [x8, #0x10]
0x068FE2DC: 69124139  ldrb w9, [x19, #0x44]
0x068FE2E0: 09610039  strb w9, [x8, #0x18]
0x068FE2E4: 69364139  ldrb w9, [x19, #0x4d]
0x068FE2E8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FE2EC: 09650039  strb w9, [x8, #0x19]
0x068FE2F0: fe0742f8  ldr x30, [sp], #0x20
0x068FE2F4: c0035fd6  ret
0x068FE2F8: 6d0a2297  bl #0x3180cac

