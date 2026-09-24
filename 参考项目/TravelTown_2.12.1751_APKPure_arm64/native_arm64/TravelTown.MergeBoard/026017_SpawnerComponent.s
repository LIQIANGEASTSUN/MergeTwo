; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26017 Merger.MergeBoard.Components.SpawnerComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9C2FC | public ItemSpawningQueue get_ItemsQueue() { }
; bytes=8 sha256=4197ad96213c98161e13fbfd6185a724b5570ba296d316558cbd5cc5c1842369 status=arm64_complete_bound indexed_start=True
0x06A9C2FC: 000040f9  ldr x0, [x0]
0x06A9C300: c0035fd6  ret

; RVA 0x6A9C304 | public void set_ItemsQueue(ItemSpawningQueue value) { }
; bytes=8 sha256=290136eb847f34792220c1bd096876c053f57342fdf51128a29647be57a33473 status=arm64_complete_bound indexed_start=True
0x06A9C304: 010000f9  str x1, [x0]
0x06A9C308: af911b17  b #0x31809c4

; RVA 0x6A9C30C | public int get_Seed() { }
; bytes=8 sha256=2f3b6f6686fd51e88030785bd4646403cb57ac71a5cbf077e500a85bdf0afab3 status=arm64_complete_bound indexed_start=True
0x06A9C30C: 000840b9  ldr w0, [x0, #8]
0x06A9C310: c0035fd6  ret

; RVA 0x6A9C314 | public void set_Seed(int value) { }
; bytes=8 sha256=7fffd60dad9e0c0cfbc80048d686fb13fc5d2edac9e8e4b9e040a64fe96070b5 status=arm64_complete_bound indexed_start=True
0x06A9C314: 010800b9  str w1, [x0, #8]
0x06A9C318: c0035fd6  ret

; RVA 0x6A9C31C | public SpawnCapability get_Capability() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9C31C: 000840f9  ldr x0, [x0, #0x10]
0x06A9C320: c0035fd6  ret

; RVA 0x6A9C324 | public void set_Capability(SpawnCapability value) { }
; bytes=8 sha256=8d2790d0e4a03007128fa9acf5dfcc37c59dac2c5a44214d1866682b456fdb96 status=arm64_complete_bound indexed_start=True
0x06A9C324: 010c01f8  str x1, [x0, #0x10]!
0x06A9C328: a7911b17  b #0x31809c4

; RVA 0x6A9C32C | public bool get_Anywhere() { }
; bytes=28 sha256=ca3bffe1e9bd6e154fb366c46aeac3ed6b2fefc7145e66604dfd9e4932443255 status=arm64_complete_bound indexed_start=True
0x06A9C32C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A9C330: 080840f9  ldr x8, [x0, #0x10]
0x06A9C334: 880000b4  cbz x8, #0x6a9c344
0x06A9C338: 00014239  ldrb w0, [x8, #0x80]
0x06A9C33C: fe0741f8  ldr x30, [sp], #0x10
0x06A9C340: c0035fd6  ret
0x06A9C344: 5a921b97  bl #0x3180cac

