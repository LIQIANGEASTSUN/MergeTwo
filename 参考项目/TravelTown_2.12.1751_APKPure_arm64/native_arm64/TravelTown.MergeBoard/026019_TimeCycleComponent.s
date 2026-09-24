; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26019 Merger.MergeBoard.Components.TimeCycleComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9C348 | public int get_CycleDelay() { }
; bytes=8 sha256=9bb31e50c9e4b1e6d3afbc308de8dce185c4ece3c405e5fc1e3b97b52d26c6a0 status=arm64_complete_bound indexed_start=True
0x06A9C348: 000040b9  ldr w0, [x0]
0x06A9C34C: c0035fd6  ret

; RVA 0x6A9C350 | public void set_CycleDelay(int value) { }
; bytes=8 sha256=41db1d28e3bf3479aa3a49646ee0e016ae0de9b295533fb5d61e0bd1a5751bde status=arm64_complete_bound indexed_start=True
0x06A9C350: 010000b9  str w1, [x0]
0x06A9C354: c0035fd6  ret

; RVA 0x6A9C358 | public int get_SubCycles() { }
; bytes=8 sha256=c40709113e97cec9c72bfbb7a6f1892a5b54d7906ca60d6c400c2e268577b883 status=arm64_complete_bound indexed_start=True
0x06A9C358: 000440b9  ldr w0, [x0, #4]
0x06A9C35C: c0035fd6  ret

; RVA 0x6A9C360 | public void set_SubCycles(int value) { }
; bytes=8 sha256=f54c46fefcd0a3e901200e617c5502b21e0b3e0b280a7fb3bd27a3f31621fc08 status=arm64_complete_bound indexed_start=True
0x06A9C360: 010400b9  str w1, [x0, #4]
0x06A9C364: c0035fd6  ret

; RVA 0x6A9C368 | public int get_SubCycleTime() { }
; bytes=8 sha256=2f3b6f6686fd51e88030785bd4646403cb57ac71a5cbf077e500a85bdf0afab3 status=arm64_complete_bound indexed_start=True
0x06A9C368: 000840b9  ldr w0, [x0, #8]
0x06A9C36C: c0035fd6  ret

; RVA 0x6A9C370 | public void set_SubCycleTime(int value) { }
; bytes=8 sha256=7fffd60dad9e0c0cfbc80048d686fb13fc5d2edac9e8e4b9e040a64fe96070b5 status=arm64_complete_bound indexed_start=True
0x06A9C370: 010800b9  str w1, [x0, #8]
0x06A9C374: c0035fd6  ret

; RVA 0x6A9C378 | public int get_ItemsPerSubCycle() { }
; bytes=8 sha256=3bd3b1d8b6ab2c04c0413bebd37e2e8ad1ccbe0b9ecfaf21d58d998e01648454 status=arm64_complete_bound indexed_start=True
0x06A9C378: 000c40b9  ldr w0, [x0, #0xc]
0x06A9C37C: c0035fd6  ret

; RVA 0x6A9C380 | public void set_ItemsPerSubCycle(int value) { }
; bytes=8 sha256=a5200317e3a877767038a611935f53526230362e33853a166017ee7706ac3d51 status=arm64_complete_bound indexed_start=True
0x06A9C380: 010c00b9  str w1, [x0, #0xc]
0x06A9C384: c0035fd6  ret

; RVA 0x6A9C388 | public int get_Capacity() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06A9C388: 001040b9  ldr w0, [x0, #0x10]
0x06A9C38C: c0035fd6  ret

; RVA 0x6A9C390 | public void set_Capacity(int value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06A9C390: 011000b9  str w1, [x0, #0x10]
0x06A9C394: c0035fd6  ret

; RVA 0x6A9C398 | public bool get_LimitLifetimeSpawnedItems() { }
; bytes=8 sha256=dc015cf50141a8ec0702ef7c90055049639e096a7cf9e03ab4b456a9a8de09a1 status=arm64_complete_bound indexed_start=True
0x06A9C398: 00504039  ldrb w0, [x0, #0x14]
0x06A9C39C: c0035fd6  ret

; RVA 0x6A9C3A0 | public void set_LimitLifetimeSpawnedItems(bool value) { }
; bytes=12 sha256=ba5f8fc9fb85c0e22a469c4a2e8116e312e823246c687e971b12b11a9d97e77e status=arm64_complete_bound indexed_start=True
0x06A9C3A0: 28000012  and w8, w1, #1
0x06A9C3A4: 08500039  strb w8, [x0, #0x14]
0x06A9C3A8: c0035fd6  ret

; RVA 0x6A9C3AC | public int get_LifetimeSpawnedItemsLimit() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A9C3AC: 001840b9  ldr w0, [x0, #0x18]
0x06A9C3B0: c0035fd6  ret

; RVA 0x6A9C3B4 | public void set_LifetimeSpawnedItemsLimit(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A9C3B4: 011800b9  str w1, [x0, #0x18]
0x06A9C3B8: c0035fd6  ret

; RVA 0x6A9C3BC | public double get_CycleDelayLeft() { }
; bytes=8 sha256=9d54a8b63ac50b67107873512460014ffb5892382e225fdf811accb249a4f2c3 status=arm64_complete_bound indexed_start=True
0x06A9C3BC: 001040fd  ldr d0, [x0, #0x20]
0x06A9C3C0: c0035fd6  ret

; RVA 0x6A9C3C4 | public void set_CycleDelayLeft(double value) { }
; bytes=8 sha256=2dc03a8717580745f8cddb3f6aefbc6d4f33a1384b213b32a0f2d01c030cf1ae status=arm64_complete_bound indexed_start=True
0x06A9C3C4: 001000fd  str d0, [x0, #0x20]
0x06A9C3C8: c0035fd6  ret

; RVA 0x6A9C3CC | public double get_SubCycleDelayLeft() { }
; bytes=8 sha256=1810fc3bb4089a333dd65759858abd05e3f4145e8cbb11e6bb1a392f80658059 status=arm64_complete_bound indexed_start=True
0x06A9C3CC: 001440fd  ldr d0, [x0, #0x28]
0x06A9C3D0: c0035fd6  ret

; RVA 0x6A9C3D4 | public void set_SubCycleDelayLeft(double value) { }
; bytes=8 sha256=84cdf9593479510911ffd6bf3b37d5c8d9bd2b14091bd09ef19e7b62ae907003 status=arm64_complete_bound indexed_start=True
0x06A9C3D4: 001400fd  str d0, [x0, #0x28]
0x06A9C3D8: c0035fd6  ret

; RVA 0x6A9C3DC | public int get_CurrentSubCycle() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x06A9C3DC: 003040b9  ldr w0, [x0, #0x30]
0x06A9C3E0: c0035fd6  ret

; RVA 0x6A9C3E4 | public void set_CurrentSubCycle(int value) { }
; bytes=8 sha256=cf12beb067ccf5c6df7e40da315453fc1f32701c58dd6675efbcc48d42b6ae96 status=arm64_complete_bound indexed_start=True
0x06A9C3E4: 013000b9  str w1, [x0, #0x30]
0x06A9C3E8: c0035fd6  ret

; RVA 0x6A9C3EC | public int get_ItemsToProduce() { }
; bytes=8 sha256=96907067fcf1f0f92a64ad5b4f6ac39cae65f2312486c4abdf79e771a70fbafe status=arm64_complete_bound indexed_start=True
0x06A9C3EC: 003440b9  ldr w0, [x0, #0x34]
0x06A9C3F0: c0035fd6  ret

; RVA 0x6A9C3F4 | public void set_ItemsToProduce(int value) { }
; bytes=8 sha256=bec88c0b626323e3656f327f9dbd2aef67c785ce4650404cbbf20ffdd9b27c95 status=arm64_complete_bound indexed_start=True
0x06A9C3F4: 013400b9  str w1, [x0, #0x34]
0x06A9C3F8: c0035fd6  ret

; RVA 0x6A9C3FC | public int get_ItemsProducedPerSubCycle() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x06A9C3FC: 003840b9  ldr w0, [x0, #0x38]
0x06A9C400: c0035fd6  ret

; RVA 0x6A9C404 | public void set_ItemsProducedPerSubCycle(int value) { }
; bytes=8 sha256=23e2a2078bd41e84b46906ac0e13db3743cb4f934a32dac307e79ba21bc620b5 status=arm64_complete_bound indexed_start=True
0x06A9C404: 013800b9  str w1, [x0, #0x38]
0x06A9C408: c0035fd6  ret

; RVA 0x6A9C40C | public TimeCycleState get_State() { }
; bytes=8 sha256=000aafdc5a97b4392372a9ae2d9fd69232aaea89262cbc5e5afdb2edc3d7b4df status=arm64_complete_bound indexed_start=True
0x06A9C40C: 003c40b9  ldr w0, [x0, #0x3c]
0x06A9C410: c0035fd6  ret

; RVA 0x6A9C414 | public void set_State(TimeCycleState value) { }
; bytes=8 sha256=4fac537ea6bc8e97f8b5c51e454024ad9de91913ae7f74b263050e5e5e7c87ef status=arm64_complete_bound indexed_start=True
0x06A9C414: 013c00b9  str w1, [x0, #0x3c]
0x06A9C418: c0035fd6  ret

; RVA 0x6A9C41C | public int get_TotalNumberOfCycles() { }
; bytes=8 sha256=2794764ead4f4e46816d67d9f7faad262cb54d7a0b7a39d555c30024db08d1e8 status=arm64_complete_bound indexed_start=True
0x06A9C41C: 004040b9  ldr w0, [x0, #0x40]
0x06A9C420: c0035fd6  ret

; RVA 0x6A9C424 | public void set_TotalNumberOfCycles(int value) { }
; bytes=8 sha256=99126ca7b87d662b9b483045ef27bde13b4525b29d199b0dd709fac17bf71da4 status=arm64_complete_bound indexed_start=True
0x06A9C424: 014000b9  str w1, [x0, #0x40]
0x06A9C428: c0035fd6  ret

; RVA 0x6A9C42C | public int get_TotalSpawnedItemsInLifetime() { }
; bytes=8 sha256=a7ac6018475234fe11f86cdd24780682c92c26e9ef63a724a8a645b33f9edc7f status=arm64_complete_bound indexed_start=True
0x06A9C42C: 004440b9  ldr w0, [x0, #0x44]
0x06A9C430: c0035fd6  ret

; RVA 0x6A9C434 | public void set_TotalSpawnedItemsInLifetime(int value) { }
; bytes=8 sha256=f8ba8ad66f8668d8c49810b6cf2b99bdb3034321ccafc82ee22346d206332c38 status=arm64_complete_bound indexed_start=True
0x06A9C434: 014400b9  str w1, [x0, #0x44]
0x06A9C438: c0035fd6  ret

; RVA 0x6A9C43C | public bool get_ModifiedByStateLoad() { }
; bytes=8 sha256=078ba4becdbd72e872ae0ff730955d197071ab6ad37418e7c2e1548bed4f2dbf status=arm64_complete_bound indexed_start=True
0x06A9C43C: 00204139  ldrb w0, [x0, #0x48]
0x06A9C440: c0035fd6  ret

; RVA 0x6A9C444 | public void set_ModifiedByStateLoad(bool value) { }
; bytes=12 sha256=90f29febb5af3eac3be2fa28c767eb368ea963d02e9f27c4b2095fd93153a719 status=arm64_complete_bound indexed_start=True
0x06A9C444: 28000012  and w8, w1, #1
0x06A9C448: 08200139  strb w8, [x0, #0x48]
0x06A9C44C: c0035fd6  ret

; RVA 0x6A9C450 | public bool get_ModifiedBySubCycle() { }
; bytes=8 sha256=2d96bea2f03fdb6bbcafe6dbf255ea02bd91faf78ea11d880b12940ff69198a5 status=arm64_complete_bound indexed_start=True
0x06A9C450: 00244139  ldrb w0, [x0, #0x49]
0x06A9C454: c0035fd6  ret

; RVA 0x6A9C458 | public void set_ModifiedBySubCycle(bool value) { }
; bytes=12 sha256=1cafaa6c2f393e2fb80bca0710afd7f21911003a27b2156c8b0a2ddc38a133ce status=arm64_complete_bound indexed_start=True
0x06A9C458: 28000012  and w8, w1, #1
0x06A9C45C: 08240139  strb w8, [x0, #0x49]
0x06A9C460: c0035fd6  ret

; RVA 0x6A9C464 | public bool get_IsCooldownBlocked() { }
; bytes=8 sha256=b19e9d1ee65f534e075bda6dac11ebe3f83ae09a532491ca23a845055a6d080b status=arm64_complete_bound indexed_start=True
0x06A9C464: 00284139  ldrb w0, [x0, #0x4a]
0x06A9C468: c0035fd6  ret

; RVA 0x6A9C46C | public void set_IsCooldownBlocked(bool value) { }
; bytes=12 sha256=119559e141e904dd33bde1b770f1526a8059f9793c1d359333a133216e9660fd status=arm64_complete_bound indexed_start=True
0x06A9C46C: 28000012  and w8, w1, #1
0x06A9C470: 08280139  strb w8, [x0, #0x4a]
0x06A9C474: c0035fd6  ret

; RVA 0x6A9C478 | public bool get_ExceededLifetimeLimit() { }
; bytes=36 sha256=d79ca23c7044a332e6edbc6632a125e6072321dc2ba905b8d45b3e15a340a4ce status=arm64_complete_bound indexed_start=True
0x06A9C478: 08504039  ldrb w8, [x0, #0x14]
0x06A9C47C: c8000034  cbz w8, #0x6a9c494
0x06A9C480: 084440b9  ldr w8, [x0, #0x44]
0x06A9C484: 091840b9  ldr w9, [x0, #0x18]
0x06A9C488: 1f01096b  cmp w8, w9
0x06A9C48C: e0b79f1a  cset w0, ge
0x06A9C490: c0035fd6  ret
0x06A9C494: e0031f2a  mov w0, wzr
0x06A9C498: c0035fd6  ret

; RVA 0x6A9C49C | public double get_TimeLeftForFullCapacity() { }
; bytes=88 sha256=a6c996c5860da06022f2c64be8f393d56d11ad428273d9cefbcd06485b100052 status=arm64_complete_bound indexed_start=True
0x06A9C49C: 08a44129  ldp w8, w9, [x0, #0xc]
0x06A9C4A0: 0004426d  ldp d0, d1, [x0, #0x20]
0x06A9C4A4: 1f01096b  cmp w8, w9
0x06A9C4A8: 0028611e  fadd d0, d0, d1
0x06A9C4AC: 2a020054  b.ge #0x6a9c4f0
0x06A9C4B0: 0a3040b9  ldr w10, [x0, #0x30]
0x06A9C4B4: 0b0440b9  ldr w11, [x0, #4]
0x06A9C4B8: ec03082a  mov w12, w8
0x06A9C4BC: 5f010b6b  cmp w10, w11
0x06A9C4C0: 0b010054  b.lt #0x6a9c4e0
0x06A9C4C4: 0d0040b9  ldr w13, [x0]
0x06A9C4C8: ea031f2a  mov w10, wzr
0x06A9C4CC: a101621e  scvtf d1, w13
0x06A9C4D0: 9f01096b  cmp w12, w9
0x06A9C4D4: 0028611e  fadd d0, d0, d1
0x06A9C4D8: 2bffff54  b.lt #0x6a9c4bc
0x06A9C4DC: 05000014  b #0x6a9c4f0
0x06A9C4E0: 0d0840b9  ldr w13, [x0, #8]
0x06A9C4E4: 4a050011  add w10, w10, #1
0x06A9C4E8: 8c01080b  add w12, w12, w8
0x06A9C4EC: f8ffff17  b #0x6a9c4cc
0x06A9C4F0: c0035fd6  ret

