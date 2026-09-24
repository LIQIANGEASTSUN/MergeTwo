; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1186 MergeEngine.Configuration.MergeItemInstanceConfiguration
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6913B5C | public Nullable<BoardItemPosition> get_Position() { }
; bytes=16 sha256=437e67642fe67803fdb5c19d1dccbc8215b704a76b8cf1b47b0fd7974bd3de61 status=arm64_complete_bound indexed_start=True
0x06913B5C: 080c40f9  ldr x8, [x0, #0x18]
0x06913B60: 012040b9  ldr w1, [x0, #0x20]
0x06913B64: e00308aa  mov x0, x8
0x06913B68: c0035fd6  ret

; RVA 0x6913B6C | private void set_Position(Nullable<BoardItemPosition> value) { }
; bytes=12 sha256=9cd625bec23e680371ddf21ae34886f4fbeb84f2e9568f426cfa252c008609f0 status=arm64_complete_bound indexed_start=True
0x06913B6C: 010c00f9  str x1, [x0, #0x18]
0x06913B70: 022000b9  str w2, [x0, #0x20]
0x06913B74: c0035fd6  ret

; RVA 0x6913B78 | public LockedCapability get_Locked() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06913B78: 001440f9  ldr x0, [x0, #0x28]
0x06913B7C: c0035fd6  ret

; RVA 0x6913B80 | private void set_Locked(LockedCapability value) { }
; bytes=8 sha256=31aed4b16fbb9b8c94dcbf99a90962073d83a73092e5a5cbc1b9e1f409de8fe5 status=arm64_complete_bound indexed_start=True
0x06913B80: 018c02f8  str x1, [x0, #0x28]!
0x06913B84: 90b32117  b #0x31809c4

; RVA 0x6913B88 | public Nullable<int> get_SlotIndex() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06913B88: 001840f9  ldr x0, [x0, #0x30]
0x06913B8C: c0035fd6  ret

; RVA 0x6913B90 | private void set_SlotIndex(Nullable<int> value) { }
; bytes=8 sha256=6215e1bbd3c8ac0311d5a5d6e67e46e033efc47a193976238e4ff03101d8acf6 status=arm64_complete_bound indexed_start=True
0x06913B90: 011800f9  str x1, [x0, #0x30]
0x06913B94: c0035fd6  ret

; RVA 0x6913B98 | public InventorySlotType get_SlotType() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x06913B98: 003840b9  ldr w0, [x0, #0x38]
0x06913B9C: c0035fd6  ret

; RVA 0x6913BA0 | private void set_SlotType(InventorySlotType value) { }
; bytes=8 sha256=23e2a2078bd41e84b46906ac0e13db3743cb4f934a32dac307e79ba21bc620b5 status=arm64_complete_bound indexed_start=True
0x06913BA0: 013800b9  str w1, [x0, #0x38]
0x06913BA4: c0035fd6  ret

; RVA 0x6913BA8 | public string get_SlotId() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x06913BA8: 002040f9  ldr x0, [x0, #0x40]
0x06913BAC: c0035fd6  ret

; RVA 0x6913BB0 | private void set_SlotId(string value) { }
; bytes=8 sha256=cad6525a3f489a05f0859dd16a4529d9bb375f025538a3c5fa9cefc0ee63a110 status=arm64_complete_bound indexed_start=True
0x06913BB0: 010c04f8  str x1, [x0, #0x40]!
0x06913BB4: 84b32117  b #0x31809c4

; RVA 0x6913BB8 | public string get_Uuid() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x06913BB8: 002440f9  ldr x0, [x0, #0x48]
0x06913BBC: c0035fd6  ret

; RVA 0x6913BC0 | private void set_Uuid(string value) { }
; bytes=8 sha256=995f3ce7dc73d2f9c0083e8dd343f8e72b11f6bb864c1d558826ead3980f6d0f status=arm64_complete_bound indexed_start=True
0x06913BC0: 018c04f8  str x1, [x0, #0x48]!
0x06913BC4: 80b32117  b #0x31809c4

; RVA 0x6913BC8 | public static MergeItemInstanceConfiguration CreateBoardConfiguration(BoardItemPosition position, Nullable<ItemOrigin> itemOrigin, LockedCapability lockedCapability, string uuid) { }
; bytes=300 sha256=d74dec3618b467e6a857c38459d6180703bfaa3f00e76565d800e45185726c89 status=arm64_complete_bound indexed_start=True
0x06913BC8: ff8301d1  sub sp, sp, #0x60
0x06913BCC: fe1300f9  str x30, [sp, #0x20]
0x06913BD0: f85f03a9  stp x24, x23, [sp, #0x30]
0x06913BD4: f65704a9  stp x22, x21, [sp, #0x40]
0x06913BD8: f44f05a9  stp x20, x19, [sp, #0x50]
0x06913BDC: b7a000d0  adrp x23, #0x7d29000
0x06913BE0: e8d26739  ldrb w8, [x23, #0x9f4]
0x06913BE4: f30303aa  mov x19, x3
0x06913BE8: f50302aa  mov x21, x2
0x06913BEC: f40301aa  mov x20, x1
0x06913BF0: f60300aa  mov x22, x0
0x06913BF4: 88010037  tbnz w8, #0, #0x6913c24
0x06913BF8: 406b00f0  adrp x0, #0x767e000
0x06913BFC: 00e442f9  ldr x0, [x0, #0x5c8]
0x06913C00: 86b32197  bl #0x3180a18
0x06913C04: 807000f0  adrp x0, #0x7726000
0x06913C08: 00d046f9  ldr x0, [x0, #0xda0]
0x06913C0C: 83b32197  bl #0x3180a18
0x06913C10: 806e00f0  adrp x0, #0x76e6000
0x06913C14: 008447f9  ldr x0, [x0, #0xf08]
0x06913C18: 80b32197  bl #0x3180a18
0x06913C1C: 28008052  movz w8, #0x1
0x06913C20: e8d22739  strb w8, [x23, #0x9f4]
0x06913C24: 977000f0  adrp x23, #0x7726000
0x06913C28: 986e00f0  adrp x24, #0x76e6000
0x06913C2C: f7d246f9  ldr x23, [x23, #0xda0]
0x06913C30: 188747f9  ldr x24, [x24, #0xf08]
0x06913C34: f50100b5  cbnz x21, #0x6913c70
0x06913C38: 486b00f0  adrp x8, #0x767e000
0x06913C3C: 08e542f9  ldr x8, [x8, #0x5c8]
0x06913C40: 000140f9  ldr x0, [x8]
0x06913C44: 17b42197  bl #0x3180ca0
0x06913C48: 27008052  movz w7, #0x1
0x06913C4C: e1031f2a  mov w1, wzr
0x06913C50: e2031f2a  mov w2, wzr
0x06913C54: e3031f2a  mov w3, wzr
0x06913C58: e4031f2a  mov w4, wzr
0x06913C5C: e5031f2a  mov w5, wzr
0x06913C60: e6031f2a  mov w6, wzr
0x06913C64: f50300aa  mov x21, x0
0x06913C68: ff0300f9  str xzr, [sp]
0x06913C6C: d8f6db97  bl #0x60117cc
0x06913C70: e00240f9  ldr x0, [x23]
0x06913C74: 0bb42197  bl #0x3180ca0
0x06913C78: e1031faa  mov x1, xzr
0x06913C7C: f70300aa  mov x23, x0
0x06913C80: 5f1ab797  bl #0x56da5fc
0x06913C84: 020340f9  ldr x2, [x24]
0x06913C88: e0430091  add x0, sp, #0x10
0x06913C8C: e10316aa  mov x1, x22
0x06913C90: ff1b00b9  str wzr, [sp, #0x18]
0x06913C94: ff0b00f9  str xzr, [sp, #0x10]
0x06913C98: 628d6597  bl #0x4277220
0x06913C9C: b70200b4  cbz x23, #0x6913cf0
0x06913CA0: e80b40f9  ldr x8, [sp, #0x10]
0x06913CA4: e91b40b9  ldr w9, [sp, #0x18]
0x06913CA8: e00317aa  mov x0, x23
0x06913CAC: e10315aa  mov x1, x21
0x06913CB0: e80e00f9  str x8, [x23, #0x18]
0x06913CB4: e92200b9  str w9, [x23, #0x20]
0x06913CB8: 158c02f8  str x21, [x0, #0x28]!
0x06913CBC: 42b32197  bl #0x31809c4
0x06913CC0: e00317aa  mov x0, x23
0x06913CC4: f40a00f9  str x20, [x23, #0x10]
0x06913CC8: 138c04f8  str x19, [x0, #0x48]!
0x06913CCC: e10313aa  mov x1, x19
0x06913CD0: 3db32197  bl #0x31809c4
0x06913CD4: e00317aa  mov x0, x23
0x06913CD8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06913CDC: f65744a9  ldp x22, x21, [sp, #0x40]
0x06913CE0: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06913CE4: fe1340f9  ldr x30, [sp, #0x20]
0x06913CE8: ff830191  add sp, sp, #0x60
0x06913CEC: c0035fd6  ret
0x06913CF0: efb32197  bl #0x3180cac

; RVA 0x6913CFC | public static MergeItemInstanceConfiguration CreateInventoryConfiguration(int slotIndex, InventorySlotType slotType = 0, string slotId) { }
; bytes=280 sha256=70d285f4636a2d35854d5ac40c3fe88f41a1dd4c8fb76b350dade588cd2ae65a status=arm64_complete_bound indexed_start=True
0x06913CFC: ff4301d1  sub sp, sp, #0x50
0x06913D00: fe0b00f9  str x30, [sp, #0x10]
0x06913D04: f85f02a9  stp x24, x23, [sp, #0x20]
0x06913D08: f65703a9  stp x22, x21, [sp, #0x30]
0x06913D0C: f44f04a9  stp x20, x19, [sp, #0x40]
0x06913D10: b4a000d0  adrp x20, #0x7d29000
0x06913D14: 987000f0  adrp x24, #0x7726000
0x06913D18: f76900b0  adrp x23, #0x7650000
0x06913D1C: 88d66739  ldrb w8, [x20, #0x9f5]
0x06913D20: 18d346f9  ldr x24, [x24, #0xda0]
0x06913D24: f7d246f9  ldr x23, [x23, #0xda0]
0x06913D28: f30302aa  mov x19, x2
0x06913D2C: f503012a  mov w21, w1
0x06913D30: f603002a  mov w22, w0
0x06913D34: 88010037  tbnz w8, #0, #0x6913d64
0x06913D38: 406b00f0  adrp x0, #0x767e000
0x06913D3C: 00e442f9  ldr x0, [x0, #0x5c8]
0x06913D40: 36b32197  bl #0x3180a18
0x06913D44: 807000f0  adrp x0, #0x7726000
0x06913D48: 00d046f9  ldr x0, [x0, #0xda0]
0x06913D4C: 33b32197  bl #0x3180a18
0x06913D50: e06900b0  adrp x0, #0x7650000
0x06913D54: 00d046f9  ldr x0, [x0, #0xda0]
0x06913D58: 30b32197  bl #0x3180a18
0x06913D5C: 28008052  movz w8, #0x1
0x06913D60: 88d62739  strb w8, [x20, #0x9f5]
0x06913D64: 000340f9  ldr x0, [x24]
0x06913D68: ceb32197  bl #0x3180ca0
0x06913D6C: e1031faa  mov x1, xzr
0x06913D70: f40300aa  mov x20, x0
0x06913D74: 221ab797  bl #0x56da5fc
0x06913D78: e20240f9  ldr x2, [x23]
0x06913D7C: e0630091  add x0, sp, #0x18
0x06913D80: e103162a  mov w1, w22
0x06913D84: ff0f00f9  str xzr, [sp, #0x18]
0x06913D88: 569e6597  bl #0x427b6e0
0x06913D8C: 340400b4  cbz x20, #0x6913e10
0x06913D90: e80f40f9  ldr x8, [sp, #0x18]
0x06913D94: 566b00f0  adrp x22, #0x767e000
0x06913D98: d6e642f9  ldr x22, [x22, #0x5c8]
0x06913D9C: e00314aa  mov x0, x20
0x06913DA0: 953a00b9  str w21, [x20, #0x38]
0x06913DA4: 881a00f9  str x8, [x20, #0x30]
0x06913DA8: 130c04f8  str x19, [x0, #0x40]!
0x06913DAC: e10313aa  mov x1, x19
0x06913DB0: 05b32197  bl #0x31809c4
0x06913DB4: c00240f9  ldr x0, [x22]
0x06913DB8: bab32197  bl #0x3180ca0
0x06913DBC: 27008052  movz w7, #0x1
0x06913DC0: e1031f2a  mov w1, wzr
0x06913DC4: e2031f2a  mov w2, wzr
0x06913DC8: e3031f2a  mov w3, wzr
0x06913DCC: e4031f2a  mov w4, wzr
0x06913DD0: e5031f2a  mov w5, wzr
0x06913DD4: e6031f2a  mov w6, wzr
0x06913DD8: f30300aa  mov x19, x0
0x06913DDC: ff0300f9  str xzr, [sp]
0x06913DE0: 7bf6db97  bl #0x60117cc
0x06913DE4: e00314aa  mov x0, x20
0x06913DE8: 138c02f8  str x19, [x0, #0x28]!
0x06913DEC: e10313aa  mov x1, x19
0x06913DF0: f5b22197  bl #0x31809c4
0x06913DF4: e00314aa  mov x0, x20
0x06913DF8: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06913DFC: f65743a9  ldp x22, x21, [sp, #0x30]
0x06913E00: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06913E04: fe0b40f9  ldr x30, [sp, #0x10]
0x06913E08: ff430191  add sp, sp, #0x50
0x06913E0C: c0035fd6  ret
0x06913E10: a7b32197  bl #0x3180cac

; RVA 0x6913CF4 | public void .ctor() { }
; bytes=8 sha256=2b227e304f4c0c7685ed83affeabac9af0fee4b59e2c2d6b039c3b0b953a1302 status=arm64_complete_bound indexed_start=True
0x06913CF4: e1031faa  mov x1, xzr
0x06913CF8: 411ab717  b #0x56da5fc

