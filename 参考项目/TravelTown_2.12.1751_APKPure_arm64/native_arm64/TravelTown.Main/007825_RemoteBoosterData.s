; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7825 Merger.Boosters.Declarations.Definitions.RemoteBoosterData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C9360 | public string get_UUID() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x065C9360: 001840f9  ldr x0, [x0, #0x30]
0x065C9364: c0035fd6  ret

; RVA 0x65C9368 | public void set_UUID(string value) { }
; bytes=8 sha256=a5e730c0c775ee6ed395be9dd95d1f06f673f1e2ee772cd79cfc8535a704ea5d status=arm64_complete_bound indexed_start=True
0x065C9368: 010c03f8  str x1, [x0, #0x30]!
0x065C936C: 96dd2e17  b #0x31809c4

; RVA 0x65C9370 | public BoosterType get_Type() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x065C9370: 003840b9  ldr w0, [x0, #0x38]
0x065C9374: c0035fd6  ret

; RVA 0x65C9378 | public void set_Type(BoosterType value) { }
; bytes=8 sha256=23e2a2078bd41e84b46906ac0e13db3743cb4f934a32dac307e79ba21bc620b5 status=arm64_complete_bound indexed_start=True
0x065C9378: 013800b9  str w1, [x0, #0x38]
0x065C937C: c0035fd6  ret

; RVA 0x65C9380 | public string get_Id() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x065C9380: 002040f9  ldr x0, [x0, #0x40]
0x065C9384: c0035fd6  ret

; RVA 0x65C9388 | public void set_Id(string value) { }
; bytes=8 sha256=2def1a00918deaf2ff0557cc45cee96fbd76272bfc7be73c6716e16443a8a218 status=arm64_complete_bound indexed_start=True
0x065C9388: 010c04f8  str x1, [x0, #0x40]!
0x065C938C: 8edd2e17  b #0x31809c4

; RVA 0x65C9390 | public long get_ActivationExpirationDate() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x065C9390: 002440f9  ldr x0, [x0, #0x48]
0x065C9394: c0035fd6  ret

; RVA 0x65C9398 | public void set_ActivationExpirationDate(long value) { }
; bytes=8 sha256=23df620cb748cd2d79c9b5740937c239993239801cafbecb2d26e4c650391fae status=arm64_complete_bound indexed_start=True
0x065C9398: 012400f9  str x1, [x0, #0x48]
0x065C939C: c0035fd6  ret

; RVA 0x65C93A0 | public long get_CreatedTimestamp() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x065C93A0: 002840f9  ldr x0, [x0, #0x50]
0x065C93A4: c0035fd6  ret

; RVA 0x65C93A8 | public void set_CreatedTimestamp(long value) { }
; bytes=8 sha256=99e9c505d21440096aac9993662e282f1d229d64d16bb1c32ef23d01d84a81b2 status=arm64_complete_bound indexed_start=True
0x065C93A8: 012800f9  str x1, [x0, #0x50]
0x065C93AC: c0035fd6  ret

; RVA 0x65C93B0 | public long get_DurationInMS() { }
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x065C93B0: 002c40f9  ldr x0, [x0, #0x58]
0x065C93B4: c0035fd6  ret

; RVA 0x65C93B8 | private void set_DurationInMS(long value) { }
; bytes=8 sha256=813d5e2df90426045ff1004e11e44d6d9b475fc20203a7cf27cab63d10e27ae1 status=arm64_complete_bound indexed_start=True
0x065C93B8: 012c00f9  str x1, [x0, #0x58]
0x065C93BC: c0035fd6  ret

; RVA 0x65C93C0 | public string get_EventId() { }
; bytes=8 sha256=dc0647a8f63aacbe9d6b7a7bf9b54950de74e29f82066e71731415b61d501071 status=arm64_complete_bound indexed_start=True
0x065C93C0: 003040f9  ldr x0, [x0, #0x60]
0x065C93C4: c0035fd6  ret

; RVA 0x65C93C8 | private void set_EventId(string value) { }
; bytes=8 sha256=1911e4f63d7cefb3560f057cdd300128fe77808ccdfbd69d99ab152e248812c3 status=arm64_complete_bound indexed_start=True
0x065C93C8: 010c06f8  str x1, [x0, #0x60]!
0x065C93CC: 7edd2e17  b #0x31809c4

; RVA 0x65C93D0 | public BoosterProgressBase get_Progress() { }
; bytes=8 sha256=f637e07b3820a82a5634a0174c92391b8ec5194fafa5b124fa3a73d3007ae512 status=arm64_complete_bound indexed_start=True
0x065C93D0: 003440f9  ldr x0, [x0, #0x68]
0x065C93D4: c0035fd6  ret

; RVA 0x65C93D8 | public void set_Progress(BoosterProgressBase value) { }
; bytes=8 sha256=97ff48e37d0eace1226d36aa75655999d8dfa1265961cf53ca50225ca72c7e6e status=arm64_complete_bound indexed_start=True
0x065C93D8: 018c06f8  str x1, [x0, #0x68]!
0x065C93DC: 7add2e17  b #0x31809c4

; RVA 0x65C93E0 | public RemoteBoosterThemeData get_ThemeData() { }
; bytes=8 sha256=36cc23bb70bc1c1b59cc307e6204dbafdeee922c2168929d194e21890ad85195 status=arm64_complete_bound indexed_start=True
0x065C93E0: 003840f9  ldr x0, [x0, #0x70]
0x065C93E4: c0035fd6  ret

; RVA 0x65C93E8 | private void set_ThemeData(RemoteBoosterThemeData value) { }
; bytes=8 sha256=ad0e2b319c533ad442dfd6b1fc528886ae47b3e79c5d1bb4b83531bfda50531d status=arm64_complete_bound indexed_start=True
0x065C93E8: 010c07f8  str x1, [x0, #0x70]!
0x065C93EC: 76dd2e17  b #0x31809c4

; RVA 0x65C93F0 | public Dictionary<string, object> get_CreationAnalytics() { }
; bytes=8 sha256=9f68aa97a5258a1e1fbe41f1226846f8b2e5cde4fa5f5b786f7a74d470a04298 status=arm64_complete_bound indexed_start=True
0x065C93F0: 003c40f9  ldr x0, [x0, #0x78]
0x065C93F4: c0035fd6  ret

; RVA 0x65C93F8 | private void set_CreationAnalytics(Dictionary<string, object> value) { }
; bytes=8 sha256=8380d71173db29a009d47d00e51424ab02fabd3342b7ee3ca92d260bf30f331f status=arm64_complete_bound indexed_start=True
0x065C93F8: 018c07f8  str x1, [x0, #0x78]!
0x065C93FC: 72dd2e17  b #0x31809c4

; RVA 0x65B96BC | public double get_DurationInSeconds() { }
; bytes=24 sha256=7a09abd3d31d3c4127f4f2f6502aa361061fbbaa002cd8a3c15e8e543d2067e8 status=arm64_complete_bound indexed_start=True
0x065B96BC: 002c40fd  ldr d0, [x0, #0x58]
0x065B96C0: 2886fdf0  adrp x8, #0x1680000
0x065B96C4: 017943fd  ldr d1, [x8, #0x6f0]
0x065B96C8: 00d8615e  scvtf d0, d0
0x065B96CC: 0018611e  fdiv d0, d0, d1
0x065B96D0: c0035fd6  ret

; RVA 0x65C9400 | public void .ctor() { }
; bytes=8 sha256=b4e106e304755dfe6e181f1cd9f312102c96371a68041c0374deba7106422c7a status=arm64_complete_bound indexed_start=True
0x065C9400: e1031faa  mov x1, xzr
0x065C9404: db72fa17  b #0x6465f70

