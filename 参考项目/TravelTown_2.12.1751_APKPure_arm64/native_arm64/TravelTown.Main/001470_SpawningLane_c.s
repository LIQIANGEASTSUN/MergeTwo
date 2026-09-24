; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1470 .SpawningLane.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6011EBC | private static void .cctor() { }
; bytes=104 sha256=40f0a558685798e758e96195b8ac04ead08471e4064348da16cf08ef37fbde97 status=arm64_complete_bound indexed_start=True
0x06011EBC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06011EC0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06011EC4: 93e800d0  adrp x19, #0x7d23000
0x06011EC8: f4b500d0  adrp x20, #0x76cf000
0x06011ECC: 689a5f39  ldrb w8, [x19, #0x7e6]
0x06011ED0: 940a43f9  ldr x20, [x20, #0x610]
0x06011ED4: c8000037  tbnz w8, #0, #0x6011eec
0x06011ED8: e0b500d0  adrp x0, #0x76cf000
0x06011EDC: 000843f9  ldr x0, [x0, #0x610]
0x06011EE0: ceba4597  bl #0x3180a18
0x06011EE4: 28008052  movz w8, #0x1
0x06011EE8: 689a1f39  strb w8, [x19, #0x7e6]
0x06011EEC: 800240f9  ldr x0, [x20]
0x06011EF0: 6cbb4597  bl #0x3180ca0
0x06011EF4: e1031faa  mov x1, xzr
0x06011EF8: f30300aa  mov x19, x0
0x06011EFC: c021db97  bl #0x56da5fc
0x06011F00: 880240f9  ldr x8, [x20]
0x06011F04: e10313aa  mov x1, x19
0x06011F08: 085d40f9  ldr x8, [x8, #0xb8]
0x06011F0C: 130100f9  str x19, [x8]
0x06011F10: 880240f9  ldr x8, [x20]
0x06011F14: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06011F18: 005d40f9  ldr x0, [x8, #0xb8]
0x06011F1C: fe0742f8  ldr x30, [sp], #0x20
0x06011F20: a9ba4517  b #0x31809c4

; RVA 0x6011F24 | public void .ctor() { }
; bytes=8 sha256=15833d6425ebc91f5ebbd18897cce48e9b5eef62f4403b0bf4bfa87657f9708e status=arm64_complete_bound indexed_start=True
0x06011F24: e1031faa  mov x1, xzr
0x06011F28: b521db17  b #0x56da5fc

; RVA 0x6011F2C | internal IMergeItem <GetSpawningList>b__3_0(WeightedItemSpawnable weightedItem) { }
; bytes=36 sha256=bc13c91580bb6923a7e466c00d27b52b7509530bd06c6acdb5d8421194a2dfb7 status=arm64_complete_bound indexed_start=True
0x06011F2C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06011F30: e10000b4  cbz x1, #0x6011f4c
0x06011F34: 200840f9  ldr x0, [x1, #0x10]
0x06011F38: a00000b4  cbz x0, #0x6011f4c
0x06011F3C: 080040f9  ldr x8, [x0]
0x06011F40: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x06011F44: fe0741f8  ldr x30, [sp], #0x10
0x06011F48: 40001fd6  br x2
0x06011F4C: 58bb4597  bl #0x3180cac

; RVA 0x6011F50 | internal IMergeItem <GetSpawningList>b__3_1(FixedItemSpawnable fixedItem) { }
; bytes=36 sha256=d3ef6ca420baf6da646f30ce11d1612cdd622dd0985dbceba16a33d9f2d5a28d status=arm64_complete_bound indexed_start=True
0x06011F50: fe0f1ff8  str x30, [sp, #-0x10]!
0x06011F54: e10000b4  cbz x1, #0x6011f70
0x06011F58: 200840f9  ldr x0, [x1, #0x10]
0x06011F5C: a00000b4  cbz x0, #0x6011f70
0x06011F60: 080040f9  ldr x8, [x0]
0x06011F64: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x06011F68: fe0741f8  ldr x30, [sp], #0x10
0x06011F6C: 40001fd6  br x2
0x06011F70: 4fbb4597  bl #0x3180cac

; RVA 0x6011F74 | internal KeyValuePair<IMergeItem, int> <GetItemPoolWithSpawnCounts>b__5_0(FixedItemSpawnable fixedItem) { }
; bytes=128 sha256=34dbf055c425728803aada3922e7fd4fc72af448d054d8c43de0f6e907cab499 status=arm64_complete_bound indexed_start=True
0x06011F74: ffc300d1  sub sp, sp, #0x30
0x06011F78: fe0b00f9  str x30, [sp, #0x10]
0x06011F7C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06011F80: 94e800d0  adrp x20, #0x7d23000
0x06011F84: 889e5f39  ldrb w8, [x20, #0x7e7]
0x06011F88: f30301aa  mov x19, x1
0x06011F8C: c8000037  tbnz w8, #0, #0x6011fa4
0x06011F90: e0b500d0  adrp x0, #0x76cf000
0x06011F94: 00fc42f9  ldr x0, [x0, #0x5f8]
0x06011F98: a0ba4597  bl #0x3180a18
0x06011F9C: 28008052  movz w8, #0x1
0x06011FA0: 889e1f39  strb w8, [x20, #0x7e7]
0x06011FA4: 730200b4  cbz x19, #0x6011ff0
0x06011FA8: 600a40f9  ldr x0, [x19, #0x10]
0x06011FAC: 200200b4  cbz x0, #0x6011ff0
0x06011FB0: 080040f9  ldr x8, [x0]
0x06011FB4: f4b500d0  adrp x20, #0x76cf000
0x06011FB8: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x06011FBC: 94fe42f9  ldr x20, [x20, #0x5f8]
0x06011FC0: 20013fd6  blr x9
0x06011FC4: 622640b9  ldr w2, [x19, #0x24]
0x06011FC8: 830240f9  ldr x3, [x20]
0x06011FCC: e10300aa  mov x1, x0
0x06011FD0: e0030091  mov x0, sp
0x06011FD4: ff7f00a9  stp xzr, xzr, [sp]
0x06011FD8: 582ecf97  bl #0x53dd938
0x06011FDC: e00740a9  ldp x0, x1, [sp]
0x06011FE0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06011FE4: fe0b40f9  ldr x30, [sp, #0x10]
0x06011FE8: ffc30091  add sp, sp, #0x30
0x06011FEC: c0035fd6  ret
0x06011FF0: 2fbb4597  bl #0x3180cac

; RVA 0x6011FF4 | internal int <GetItemPoolWithSpawnCounts>b__5_1(WeightedItemSpawnable item) { }
; bytes=24 sha256=8c4f7eb2e97da495efd8ad330bffcb1e7654ddb3f42edbae6f4b8068bfaa9f3e status=arm64_complete_bound indexed_start=True
0x06011FF4: fe0f1ff8  str x30, [sp, #-0x10]!
0x06011FF8: 810000b4  cbz x1, #0x6012008
0x06011FFC: 202440b9  ldr w0, [x1, #0x24]
0x06012000: fe0741f8  ldr x30, [sp], #0x10
0x06012004: c0035fd6  ret
0x06012008: 29bb4597  bl #0x3180cac

; RVA 0x601200C | internal KeyValuePair<IMergeItem, int> <GetItemPoolWithSpawnCounts>b__5_2(WeightedItemSpawnable weightedItem) { }
; bytes=128 sha256=d6c6559578c8ee7e783fe944346bac562d8c0ec5643cec1668d7f489e65d1635 status=arm64_complete_bound indexed_start=True
0x0601200C: ffc300d1  sub sp, sp, #0x30
0x06012010: fe0b00f9  str x30, [sp, #0x10]
0x06012014: f44f02a9  stp x20, x19, [sp, #0x20]
0x06012018: 94e800b0  adrp x20, #0x7d23000
0x0601201C: 88a25f39  ldrb w8, [x20, #0x7e8]
0x06012020: f30301aa  mov x19, x1
0x06012024: c8000037  tbnz w8, #0, #0x601203c
0x06012028: e0b500b0  adrp x0, #0x76cf000
0x0601202C: 00fc42f9  ldr x0, [x0, #0x5f8]
0x06012030: 7aba4597  bl #0x3180a18
0x06012034: 28008052  movz w8, #0x1
0x06012038: 88a21f39  strb w8, [x20, #0x7e8]
0x0601203C: 730200b4  cbz x19, #0x6012088
0x06012040: 600a40f9  ldr x0, [x19, #0x10]
0x06012044: 200200b4  cbz x0, #0x6012088
0x06012048: 080040f9  ldr x8, [x0]
0x0601204C: f4b500b0  adrp x20, #0x76cf000
0x06012050: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x06012054: 94fe42f9  ldr x20, [x20, #0x5f8]
0x06012058: 20013fd6  blr x9
0x0601205C: 622640b9  ldr w2, [x19, #0x24]
0x06012060: 830240f9  ldr x3, [x20]
0x06012064: e10300aa  mov x1, x0
0x06012068: e0030091  mov x0, sp
0x0601206C: ff7f00a9  stp xzr, xzr, [sp]
0x06012070: 322ecf97  bl #0x53dd938
0x06012074: e00740a9  ldp x0, x1, [sp]
0x06012078: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601207C: fe0b40f9  ldr x30, [sp, #0x10]
0x06012080: ffc30091  add sp, sp, #0x30
0x06012084: c0035fd6  ret
0x06012088: 09bb4597  bl #0x3180cac

