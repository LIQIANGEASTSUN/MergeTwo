; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1058 MergeEngine.ECS.Components.Items.ExpendableComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FC100 | public override string get_ComponentKey() { }
; bytes=64 sha256=5c4190709667a04ca978fde44411cbfede258871a1e51c41c972287ce035eee9 status=arm64_complete_bound indexed_start=True
0x068FC100: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FC104: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FC108: 73a100b0  adrp x19, #0x7d29000
0x068FC10C: b47000d0  adrp x20, #0x7712000
0x068FC110: 68726239  ldrb w8, [x19, #0x89c]
0x068FC114: 945e42f9  ldr x20, [x20, #0x4b8]
0x068FC118: c8000037  tbnz w8, #0, #0x68fc130
0x068FC11C: a07000d0  adrp x0, #0x7712000
0x068FC120: 005c42f9  ldr x0, [x0, #0x4b8]
0x068FC124: 3d122297  bl #0x3180a18
0x068FC128: 28008052  movz w8, #0x1
0x068FC12C: 68722239  strb w8, [x19, #0x89c]
0x068FC130: 800240f9  ldr x0, [x20]
0x068FC134: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC138: fe0742f8  ldr x30, [sp], #0x20
0x068FC13C: c0035fd6  ret

; RVA 0x68FC140 | public List<WeightedItemSpawnable> get_Transforms() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x068FC140: 001c40f9  ldr x0, [x0, #0x38]
0x068FC144: c0035fd6  ret

; RVA 0x68FC148 | public bool get_SpawnParticles() { }
; bytes=8 sha256=6a4f1a962f868613e6936806601aa97f462be4272d6039e73d901c7f9868c768 status=arm64_complete_bound indexed_start=True
0x068FC148: 00004139  ldrb w0, [x0, #0x40]
0x068FC14C: c0035fd6  ret

; RVA 0x68FC150 | public SpawnParticleType get_SpawnParticleType() { }
; bytes=8 sha256=a7ac6018475234fe11f86cdd24780682c92c26e9ef63a724a8a645b33f9edc7f status=arm64_complete_bound indexed_start=True
0x068FC150: 004440b9  ldr w0, [x0, #0x44]
0x068FC154: c0035fd6  ret

; RVA 0x68FC158 | public int get_NumItemsToSpawn() { }
; bytes=8 sha256=5a3dbf09a4e8bdcceec86da53e57e6eb7ac66ceb50eedbff297fa2d5d118a7be status=arm64_complete_bound indexed_start=True
0x068FC158: 004840b9  ldr w0, [x0, #0x48]
0x068FC15C: c0035fd6  ret

; RVA 0x68FC160 | public bool get_RequireAllItemsToSpawn() { }
; bytes=8 sha256=b7d3a04ef7356d8e3ed9c04c39decc2ad17582e27299d6b4e0827c683ee8e168 status=arm64_complete_bound indexed_start=True
0x068FC160: 00304139  ldrb w0, [x0, #0x4c]
0x068FC164: c0035fd6  ret

; RVA 0x68FC168 | public bool get_SpawnOnEachInteraction() { }
; bytes=8 sha256=27bd774e2ce11b712bc146c374f7dc79e93b3abf1fdd66f15ae8b88e8a21b027 status=arm64_complete_bound indexed_start=True
0x068FC168: 00344139  ldrb w0, [x0, #0x4d]
0x068FC16C: c0035fd6  ret

; RVA 0x68FC170 | public List<EmptiableWeightedItemSpawnable> get_SpawnOnExpendedItems() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x068FC170: 002840f9  ldr x0, [x0, #0x50]
0x068FC174: c0035fd6  ret

; RVA 0x68FC178 | public string get_SpawnedItemsLabel() { }
; bytes=72 sha256=1a02acbf0c2e673817a3f17d822283e7231e38b6be4264aefb9a410cd5396eed status=arm64_complete_bound indexed_start=True
0x068FC178: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FC17C: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FC180: 74a100b0  adrp x20, #0x7d29000
0x068FC184: 88766239  ldrb w8, [x20, #0x89d]
0x068FC188: f30300aa  mov x19, x0
0x068FC18C: c8000037  tbnz w8, #0, #0x68fc1a4
0x068FC190: 407100d0  adrp x0, #0x7726000
0x068FC194: 004443f9  ldr x0, [x0, #0x688]
0x068FC198: 20122297  bl #0x3180a18
0x068FC19C: 28008052  movz w8, #0x1
0x068FC1A0: 88762239  strb w8, [x20, #0x89d]
0x068FC1A4: 681240f9  ldr x8, [x19, #0x20]
0x068FC1A8: a80000b4  cbz x8, #0x68fc1bc
0x068FC1AC: 002140f9  ldr x0, [x8, #0x40]
0x068FC1B0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC1B4: fe0742f8  ldr x30, [sp], #0x20
0x068FC1B8: c0035fd6  ret
0x068FC1BC: bc122297  bl #0x3180cac

; RVA 0x68FC1C0 | public ProducerTimerConfig get_ProducerTimer() { }
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x068FC1C0: 002c40f9  ldr x0, [x0, #0x58]
0x068FC1C4: c0035fd6  ret

; RVA 0x68FC1C8 | public bool get_HasTimer() { }
; bytes=16 sha256=2c8412d0a86a54ab4309e9440fed33e1c33e69f243da731ebf0a71be4d316355 status=arm64_complete_bound indexed_start=True
0x068FC1C8: 082c40f9  ldr x8, [x0, #0x58]
0x068FC1CC: 1f0100f1  cmp x8, #0
0x068FC1D0: e0079f1a  cset w0, ne
0x068FC1D4: c0035fd6  ret

; RVA 0x68FC1D8 | public bool get_NeedProcessCombiningProducer() { }
; bytes=8 sha256=a7b76497ed12b4f3e690147d999566b24cee240e10f9a1bfc9c90496477bcb69 status=arm64_complete_bound indexed_start=True
0x068FC1D8: 00804139  ldrb w0, [x0, #0x60]
0x068FC1DC: c0035fd6  ret

; RVA 0x68FC1E0 | public void set_NeedProcessCombiningProducer(bool value) { }
; bytes=12 sha256=5dbb7da7eb7a36232cdc62a5cf791433c6bc3fe9ff0154ae95a5957d06340e79 status=arm64_complete_bound indexed_start=True
0x068FC1E0: 28000012  and w8, w1, #1
0x068FC1E4: 08800139  strb w8, [x0, #0x60]
0x068FC1E8: c0035fd6  ret

; RVA 0x68FC1EC | public bool get_IsTransformationByReason() { }
; bytes=8 sha256=e21a22a801033295cfc4a7ca8ac6f60a6852dd7dddd9d2cb7360d2b690f617fb status=arm64_complete_bound indexed_start=True
0x068FC1EC: 00844139  ldrb w0, [x0, #0x61]
0x068FC1F0: c0035fd6  ret

; RVA 0x68FC1F4 | public void set_IsTransformationByReason(bool value) { }
; bytes=12 sha256=15e8cc48b31ff604f31fe51bb8603275331c84afdc254ebd102518604e929374 status=arm64_complete_bound indexed_start=True
0x068FC1F4: 28000012  and w8, w1, #1
0x068FC1F8: 08840139  strb w8, [x0, #0x61]
0x068FC1FC: c0035fd6  ret

; RVA 0x68FC200 | public ItemSpawningTrackingData get_ItemSpawningTrackingData() { }
; bytes=8 sha256=f637e07b3820a82a5634a0174c92391b8ec5194fafa5b124fa3a73d3007ae512 status=arm64_complete_bound indexed_start=True
0x068FC200: 003440f9  ldr x0, [x0, #0x68]
0x068FC204: c0035fd6  ret

; RVA 0x68FC208 | public void set_ItemSpawningTrackingData(ItemSpawningTrackingData value) { }
; bytes=8 sha256=0c8580dcd721fce71bec46d7bc2ee3f120c75e7ac7f10a8dcaa8dfcd2c5cca30 status=arm64_complete_bound indexed_start=True
0x068FC208: 018c06f8  str x1, [x0, #0x68]!
0x068FC20C: ee112217  b #0x31809c4

; RVA 0x68FC210 | public void .ctor(ExpendableCapability capability, Entity entity) { }
; bytes=436 sha256=ec900b956b73d1a6531d1aa07bfa4b5cd5151068424c5d73c1b71b37485c53b8 status=arm64_complete_bound indexed_start=True
0x068FC210: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FC214: f65701a9  stp x22, x21, [sp, #0x10]
0x068FC218: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FC21C: 76a100b0  adrp x22, #0x7d29000
0x068FC220: 577100d0  adrp x23, #0x7726000
0x068FC224: c87a6239  ldrb w8, [x22, #0x89e]
0x068FC228: f74a43f9  ldr x23, [x23, #0x690]
0x068FC22C: f50302aa  mov x21, x2
0x068FC230: f40301aa  mov x20, x1
0x068FC234: f30300aa  mov x19, x0
0x068FC238: a8020037  tbnz w8, #0, #0x68fc28c
0x068FC23C: 407100d0  adrp x0, #0x7726000
0x068FC240: 004c43f9  ldr x0, [x0, #0x698]
0x068FC244: f5112297  bl #0x3180a18
0x068FC248: 407100d0  adrp x0, #0x7726000
0x068FC24C: 005043f9  ldr x0, [x0, #0x6a0]
0x068FC250: f2112297  bl #0x3180a18
0x068FC254: 407100d0  adrp x0, #0x7726000
0x068FC258: 005443f9  ldr x0, [x0, #0x6a8]
0x068FC25C: ef112297  bl #0x3180a18
0x068FC260: 806e00f0  adrp x0, #0x76cf000
0x068FC264: 00e042f9  ldr x0, [x0, #0x5c0]
0x068FC268: ec112297  bl #0x3180a18
0x068FC26C: 407100d0  adrp x0, #0x7726000
0x068FC270: 005843f9  ldr x0, [x0, #0x6b0]
0x068FC274: e9112297  bl #0x3180a18
0x068FC278: 407100d0  adrp x0, #0x7726000
0x068FC27C: 004843f9  ldr x0, [x0, #0x690]
0x068FC280: e6112297  bl #0x3180a18
0x068FC284: 28008052  movz w8, #0x1
0x068FC288: c87a2239  strb w8, [x22, #0x89e]
0x068FC28C: e30240f9  ldr x3, [x23]
0x068FC290: e00313aa  mov x0, x19
0x068FC294: e10314aa  mov x1, x20
0x068FC298: e20315aa  mov x2, x21
0x068FC29C: 4e216f97  bl #0x44c47d4
0x068FC2A0: 140900b4  cbz x20, #0x68fc3c0
0x068FC2A4: 881640b9  ldr w8, [x20, #0x14]
0x068FC2A8: 683200b9  str w8, [x19, #0x30]
0x068FC2AC: 88d64039  ldrb w8, [x20, #0x35]
0x068FC2B0: 68020139  strb w8, [x19, #0x40]
0x068FC2B4: 883a40b9  ldr w8, [x20, #0x38]
0x068FC2B8: 684600b9  str w8, [x19, #0x44]
0x068FC2BC: 883240b9  ldr w8, [x20, #0x30]
0x068FC2C0: 684a00b9  str w8, [x19, #0x48]
0x068FC2C4: 88d24039  ldrb w8, [x20, #0x34]
0x068FC2C8: 68320139  strb w8, [x19, #0x4c]
0x068FC2CC: 88da4039  ldrb w8, [x20, #0x36]
0x068FC2D0: 68360139  strb w8, [x19, #0x4d]
0x068FC2D4: 88624039  ldrb w8, [x20, #0x18]
0x068FC2D8: 68860139  strb w8, [x19, #0x61]
0x068FC2DC: 952a40f9  ldr x21, [x20, #0x50]
0x068FC2E0: b50100b4  cbz x21, #0x68fc314
0x068FC2E4: 487100d0  adrp x8, #0x7726000
0x068FC2E8: 085943f9  ldr x8, [x8, #0x6b0]
0x068FC2EC: 000140f9  ldr x0, [x8]
0x068FC2F0: 6c122297  bl #0x3180ca0
0x068FC2F4: e10315aa  mov x1, x21
0x068FC2F8: e2031faa  mov x2, xzr
0x068FC2FC: f60300aa  mov x22, x0
0x068FC300: 8950dc97  bl #0x6010524
0x068FC304: e00313aa  mov x0, x19
0x068FC308: 168c05f8  str x22, [x0, #0x58]!
0x068FC30C: e10316aa  mov x1, x22
0x068FC310: ad112297  bl #0x31809c4
0x068FC314: 951240f9  ldr x21, [x20, #0x20]
0x068FC318: 550500b4  cbz x21, #0x68fc3c0
0x068FC31C: a80e40f9  ldr x8, [x21, #0x18]
0x068FC320: e80100b4  cbz x8, #0x68fc35c
0x068FC324: 886e00f0  adrp x8, #0x76cf000
0x068FC328: 08e142f9  ldr x8, [x8, #0x5c0]
0x068FC32C: 567100d0  adrp x22, #0x7726000
0x068FC330: 000140f9  ldr x0, [x8]
0x068FC334: d64e43f9  ldr x22, [x22, #0x698]
0x068FC338: 5a122297  bl #0x3180ca0
0x068FC33C: c20240f9  ldr x2, [x22]
0x068FC340: e10315aa  mov x1, x21
0x068FC344: f60300aa  mov x22, x0
0x068FC348: 861e5d97  bl #0x4043d60
0x068FC34C: e00313aa  mov x0, x19
0x068FC350: 168c03f8  str x22, [x0, #0x38]!
0x068FC354: e10316aa  mov x1, x22
0x068FC358: 9b112297  bl #0x31809c4
0x068FC35C: 941640f9  ldr x20, [x20, #0x28]
0x068FC360: 140300b4  cbz x20, #0x68fc3c0
0x068FC364: 880e40f9  ldr x8, [x20, #0x18]
0x068FC368: 480200b4  cbz x8, #0x68fc3b0
0x068FC36C: 487100d0  adrp x8, #0x7726000
0x068FC370: 085543f9  ldr x8, [x8, #0x6a8]
0x068FC374: 557100d0  adrp x21, #0x7726000
0x068FC378: 000140f9  ldr x0, [x8]
0x068FC37C: b55243f9  ldr x21, [x21, #0x6a0]
0x068FC380: 48122297  bl #0x3180ca0
0x068FC384: a20240f9  ldr x2, [x21]
0x068FC388: e10314aa  mov x1, x20
0x068FC38C: f50300aa  mov x21, x0
0x068FC390: 741e5d97  bl #0x4043d60
0x068FC394: 750e05f8  str x21, [x19, #0x50]!
0x068FC398: e00313aa  mov x0, x19
0x068FC39C: e10315aa  mov x1, x21
0x068FC3A0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FC3A4: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FC3A8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FC3AC: 86112217  b #0x31809c4
0x068FC3B0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FC3B4: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FC3B8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FC3BC: c0035fd6  ret
0x068FC3C0: 3b122297  bl #0x3180cac

; RVA 0x68FC3C4 | public override void LoadComponent(SerializedExpendableComponent componentData) { }
; bytes=28 sha256=27377cc22958b42deb5a8d0dcd01af3f793f5133adbf674b94a1b0ab4a61eaf6 status=arm64_complete_bound indexed_start=True
0x068FC3C4: fe0f1ff8  str x30, [sp, #-0x10]!
0x068FC3C8: a10000b4  cbz x1, #0x68fc3dc
0x068FC3CC: 281040b9  ldr w8, [x1, #0x10]
0x068FC3D0: 083000b9  str w8, [x0, #0x30]
0x068FC3D4: fe0741f8  ldr x30, [sp], #0x10
0x068FC3D8: c0035fd6  ret
0x068FC3DC: 34122297  bl #0x3180cac

; RVA 0x68FC3E0 | protected override void OnBeforeSerialize() { }
; bytes=76 sha256=c58a1978cc72165eb71a504e9690bb764a634a7eeda0638a374f394ef4817611 status=arm64_complete_bound indexed_start=True
0x068FC3E0: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FC3E4: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FC3E8: 74a100b0  adrp x20, #0x7d29000
0x068FC3EC: 887e6239  ldrb w8, [x20, #0x89f]
0x068FC3F0: f30300aa  mov x19, x0
0x068FC3F4: c8000037  tbnz w8, #0, #0x68fc40c
0x068FC3F8: 407100d0  adrp x0, #0x7726000
0x068FC3FC: 005c43f9  ldr x0, [x0, #0x6b8]
0x068FC400: 86112297  bl #0x3180a18
0x068FC404: 28008052  movz w8, #0x1
0x068FC408: 887e2239  strb w8, [x20, #0x89f]
0x068FC40C: 681640f9  ldr x8, [x19, #0x28]
0x068FC410: c80000b4  cbz x8, #0x68fc428
0x068FC414: 693240b9  ldr w9, [x19, #0x30]
0x068FC418: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC41C: 091100b9  str w9, [x8, #0x10]
0x068FC420: fe0742f8  ldr x30, [sp], #0x20
0x068FC424: c0035fd6  ret
0x068FC428: 21122297  bl #0x3180cac

