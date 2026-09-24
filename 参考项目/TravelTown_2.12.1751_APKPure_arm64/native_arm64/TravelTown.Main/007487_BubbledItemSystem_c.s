; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7487 .BubbledItemSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x658A1E8 | private static void .cctor() { }
; bytes=104 sha256=26c74df47db6e5a61714ce57b220e5545af8b35a9e85ef3cc3b54554b51c8d07 status=arm64_complete_bound indexed_start=True
0x0658A1E8: fe0f1ef8  str x30, [sp, #-0x20]!
0x0658A1EC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0658A1F0: f3bc00b0  adrp x19, #0x7d27000
0x0658A1F4: b48b00d0  adrp x20, #0x7700000
0x0658A1F8: 68e25a39  ldrb w8, [x19, #0x6b8]
0x0658A1FC: 94b645f9  ldr x20, [x20, #0xb68]
0x0658A200: c8000037  tbnz w8, #0, #0x658a218
0x0658A204: a08b00d0  adrp x0, #0x7700000
0x0658A208: 00b445f9  ldr x0, [x0, #0xb68]
0x0658A20C: 03da2f97  bl #0x3180a18
0x0658A210: 28008052  movz w8, #0x1
0x0658A214: 68e21a39  strb w8, [x19, #0x6b8]
0x0658A218: 800240f9  ldr x0, [x20]
0x0658A21C: a1da2f97  bl #0x3180ca0
0x0658A220: e1031faa  mov x1, xzr
0x0658A224: f30300aa  mov x19, x0
0x0658A228: f540c597  bl #0x56da5fc
0x0658A22C: 880240f9  ldr x8, [x20]
0x0658A230: e10313aa  mov x1, x19
0x0658A234: 085d40f9  ldr x8, [x8, #0xb8]
0x0658A238: 130100f9  str x19, [x8]
0x0658A23C: 880240f9  ldr x8, [x20]
0x0658A240: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0658A244: 005d40f9  ldr x0, [x8, #0xb8]
0x0658A248: fe0742f8  ldr x30, [sp], #0x20
0x0658A24C: ded92f17  b #0x31809c4

; RVA 0x658A250 | public void .ctor() { }
; bytes=8 sha256=d13e81c1adcc5d189b105915a11a8e669d03fb7d2b28bba021622a21aa935168 status=arm64_complete_bound indexed_start=True
0x0658A250: e1031faa  mov x1, xzr
0x0658A254: ea40c517  b #0x56da5fc

; RVA 0x658A258 | internal int <CreateExpiredItemsSpawningList>b__76_0(WeightedItemSpawnable item1, WeightedItemSpawnable item2) { }
; bytes=36 sha256=9c76b9c430b8e58e7b6a3693722c63d28e8666725b54b2a30921269e6622b87b status=arm64_complete_bound indexed_start=True
0x0658A258: fe0f1ff8  str x30, [sp, #-0x10]!
0x0658A25C: e20000b4  cbz x2, #0x658a278
0x0658A260: c10000b4  cbz x1, #0x658a278
0x0658A264: 482440b9  ldr w8, [x2, #0x24]
0x0658A268: 292440b9  ldr w9, [x1, #0x24]
0x0658A26C: 0001094b  sub w0, w8, w9
0x0658A270: fe0741f8  ldr x30, [sp], #0x10
0x0658A274: c0035fd6  ret
0x0658A278: 8dda2f97  bl #0x3180cac

; RVA 0x658A27C | internal int <CreateExpiredItemsSpawningList>b__76_1(WeightedItemSpawnable item) { }
; bytes=24 sha256=40fc70b62304e1308982e0f5a1b88588cb024a1e0c804cf6d588cfc4acaae72a status=arm64_complete_bound indexed_start=True
0x0658A27C: fe0f1ff8  str x30, [sp, #-0x10]!
0x0658A280: 810000b4  cbz x1, #0x658a290
0x0658A284: 202440b9  ldr w0, [x1, #0x24]
0x0658A288: fe0741f8  ldr x30, [sp], #0x10
0x0658A28C: c0035fd6  ret
0x0658A290: 87da2f97  bl #0x3180cac

; RVA 0x658A294 | internal IMergeItem <CreateExpiredItemsSpawningList>b__76_2(WeightedItemSpawnable item) { }
; bytes=36 sha256=1c1fa0ba39453775c3e4478b07a375d4616964d256fb3ea84f6e2d94b13eb83e status=arm64_complete_bound indexed_start=True
0x0658A294: fe0f1ff8  str x30, [sp, #-0x10]!
0x0658A298: e10000b4  cbz x1, #0x658a2b4
0x0658A29C: 200840f9  ldr x0, [x1, #0x10]
0x0658A2A0: a00000b4  cbz x0, #0x658a2b4
0x0658A2A4: 080040f9  ldr x8, [x0]
0x0658A2A8: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x0658A2AC: fe0741f8  ldr x30, [sp], #0x10
0x0658A2B0: 40001fd6  br x2
0x0658A2B4: 7eda2f97  bl #0x3180cac

; RVA 0x658A2B8 | internal int <CreateExpiredItemsSpawningList>b__76_3(WeightedItemSpawnable item1, WeightedItemSpawnable item2) { }
; bytes=36 sha256=9758396b2945845831549cd7ce7b9de2d88925b0ebef5bb2b9de341956e26f82 status=arm64_complete_bound indexed_start=True
0x0658A2B8: fe0f1ff8  str x30, [sp, #-0x10]!
0x0658A2BC: e20000b4  cbz x2, #0x658a2d8
0x0658A2C0: c10000b4  cbz x1, #0x658a2d8
0x0658A2C4: 482440b9  ldr w8, [x2, #0x24]
0x0658A2C8: 292440b9  ldr w9, [x1, #0x24]
0x0658A2CC: 0001094b  sub w0, w8, w9
0x0658A2D0: fe0741f8  ldr x30, [sp], #0x10
0x0658A2D4: c0035fd6  ret
0x0658A2D8: 75da2f97  bl #0x3180cac

; RVA 0x658A2DC | internal int <CreateExpiredItemsSpawningList>b__76_4(WeightedItemSpawnable item) { }
; bytes=24 sha256=1bef949855453491acd8ef78e414c983ec5e1ce021f1da133954707109c6ac89 status=arm64_complete_bound indexed_start=True
0x0658A2DC: fe0f1ff8  str x30, [sp, #-0x10]!
0x0658A2E0: 810000b4  cbz x1, #0x658a2f0
0x0658A2E4: 202440b9  ldr w0, [x1, #0x24]
0x0658A2E8: fe0741f8  ldr x30, [sp], #0x10
0x0658A2EC: c0035fd6  ret
0x0658A2F0: 6fda2f97  bl #0x3180cac

; RVA 0x658A2F4 | internal IMergeItem <CreateExpiredItemsSpawningList>b__76_5(WeightedItemSpawnable item) { }
; bytes=36 sha256=fab9902e7c1fc0bd4f99bcf47a5b793b9dd081723ea54c36ffbbc771c3dc07ce status=arm64_complete_bound indexed_start=True
0x0658A2F4: fe0f1ff8  str x30, [sp, #-0x10]!
0x0658A2F8: e10000b4  cbz x1, #0x658a314
0x0658A2FC: 200840f9  ldr x0, [x1, #0x10]
0x0658A300: a00000b4  cbz x0, #0x658a314
0x0658A304: 080040f9  ldr x8, [x0]
0x0658A308: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x0658A30C: fe0741f8  ldr x30, [sp], #0x10
0x0658A310: 40001fd6  br x2
0x0658A314: 66da2f97  bl #0x3180cac

; RVA 0x658A318 | internal bool <OnWillProcessComponents>b__82_0(LockedComponent item) { }
; bytes=24 sha256=7181713b7527291eaee934ae0d45029327e0280d0afc32e9ceff8b43b00c8e99 status=arm64_complete_bound indexed_start=True
0x0658A318: fe0f1ff8  str x30, [sp, #-0x10]!
0x0658A31C: 810000b4  cbz x1, #0x658a32c
0x0658A320: 20c44039  ldrb w0, [x1, #0x31]
0x0658A324: fe0741f8  ldr x30, [sp], #0x10
0x0658A328: c0035fd6  ret
0x0658A32C: 60da2f97  bl #0x3180cac

