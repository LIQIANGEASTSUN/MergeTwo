; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 922 MergeEngine.ECS.Systems.Board.ChargableSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666BF10 | public override SystemPriorities get_Priority() { }
; bytes=8 sha256=fefdc85e97d882926490f1c14e02f41b4be7f79a95bbf05c7caecd88bff048ca status=arm64_complete_bound indexed_start=True
0x0666BF10: 00028052  movz w0, #0x10
0x0666BF14: c0035fd6  ret

; RVA 0x666BF18 | protected override void InitializeSystem() { }
; bytes=132 sha256=d20ff779b33093de10230561ffe38ab84a5246427e5a9a4e871b1c66387d7c85 status=arm64_complete_bound indexed_start=True
0x0666BF18: fe0f1df8  str x30, [sp, #-0x30]!
0x0666BF1C: f65701a9  stp x22, x21, [sp, #0x10]
0x0666BF20: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666BF24: f5b500b0  adrp x21, #0x7d28000
0x0666BF28: 167f00f0  adrp x22, #0x764e000
0x0666BF2C: f4840090  adrp x20, #0x7707000
0x0666BF30: a8b64339  ldrb w8, [x21, #0xed]
0x0666BF34: d6ae43f9  ldr x22, [x22, #0x758]
0x0666BF38: 94ca47f9  ldr x20, [x20, #0xf90]
0x0666BF3C: f30300aa  mov x19, x0
0x0666BF40: 28010037  tbnz w8, #0, #0x666bf64
0x0666BF44: 007f00f0  adrp x0, #0x764e000
0x0666BF48: 00ac43f9  ldr x0, [x0, #0x758]
0x0666BF4C: b3522c97  bl #0x3180a18
0x0666BF50: e0840090  adrp x0, #0x7707000
0x0666BF54: 00c847f9  ldr x0, [x0, #0xf90]
0x0666BF58: b0522c97  bl #0x3180a18
0x0666BF5C: 28008052  movz w8, #0x1
0x0666BF60: a8b60339  strb w8, [x21, #0xed]
0x0666BF64: c00240f9  ldr x0, [x22]
0x0666BF68: 4e532c97  bl #0x3180ca0
0x0666BF6C: 820240f9  ldr x2, [x20]
0x0666BF70: e10313aa  mov x1, x19
0x0666BF74: e3031faa  mov x3, xzr
0x0666BF78: f40300aa  mov x20, x0
0x0666BF7C: ed05be97  bl #0x55ed730
0x0666BF80: e00313aa  mov x0, x19
0x0666BF84: e10314aa  mov x1, x20
0x0666BF88: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666BF8C: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666BF90: e2031faa  mov x2, xzr
0x0666BF94: fe0743f8  ldr x30, [sp], #0x30
0x0666BF98: 4bebf417  b #0x63a6cc4

; RVA 0x666BF9C | private void OnAllSystemsInitialized() { }
; bytes=292 sha256=9ade7db72be46f5c659e82e72c221ca52fdd3e4e304e6354af36e5927dc9c592 status=arm64_complete_bound indexed_start=True
0x0666BF9C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0666BFA0: f65701a9  stp x22, x21, [sp, #0x10]
0x0666BFA4: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666BFA8: f6b500b0  adrp x22, #0x7d28000
0x0666BFAC: 177f00f0  adrp x23, #0x764e000
0x0666BFB0: f4840090  adrp x20, #0x7707000
0x0666BFB4: f5840090  adrp x21, #0x7707000
0x0666BFB8: c8ba4339  ldrb w8, [x22, #0xee]
0x0666BFBC: f7ae43f9  ldr x23, [x23, #0x758]
0x0666BFC0: 94ca47f9  ldr x20, [x20, #0xf90]
0x0666BFC4: b5ce47f9  ldr x21, [x21, #0xf98]
0x0666BFC8: f30300aa  mov x19, x0
0x0666BFCC: a8020037  tbnz w8, #0, #0x666c020
0x0666BFD0: e0840090  adrp x0, #0x7707000
0x0666BFD4: 00d047f9  ldr x0, [x0, #0xfa0]
0x0666BFD8: 90522c97  bl #0x3180a18
0x0666BFDC: 007f00f0  adrp x0, #0x764e000
0x0666BFE0: 00ac43f9  ldr x0, [x0, #0x758]
0x0666BFE4: 8d522c97  bl #0x3180a18
0x0666BFE8: e0840090  adrp x0, #0x7707000
0x0666BFEC: 00c847f9  ldr x0, [x0, #0xf90]
0x0666BFF0: 8a522c97  bl #0x3180a18
0x0666BFF4: e0840090  adrp x0, #0x7707000
0x0666BFF8: 00d447f9  ldr x0, [x0, #0xfa8]
0x0666BFFC: 87522c97  bl #0x3180a18
0x0666C000: c08400f0  adrp x0, #0x7707000
0x0666C004: 00d847f9  ldr x0, [x0, #0xfb0]
0x0666C008: 84522c97  bl #0x3180a18
0x0666C00C: c08400f0  adrp x0, #0x7707000
0x0666C010: 00cc47f9  ldr x0, [x0, #0xf98]
0x0666C014: 81522c97  bl #0x3180a18
0x0666C018: 28008052  movz w8, #0x1
0x0666C01C: c8ba0339  strb w8, [x22, #0xee]
0x0666C020: e00240f9  ldr x0, [x23]
0x0666C024: 1f532c97  bl #0x3180ca0
0x0666C028: 820240f9  ldr x2, [x20]
0x0666C02C: e10313aa  mov x1, x19
0x0666C030: e3031faa  mov x3, xzr
0x0666C034: f40300aa  mov x20, x0
0x0666C038: be05be97  bl #0x55ed730
0x0666C03C: e00313aa  mov x0, x19
0x0666C040: e10314aa  mov x1, x20
0x0666C044: e2031faa  mov x2, xzr
0x0666C048: 49ebf497  bl #0x63a6d6c
0x0666C04C: a10240f9  ldr x1, [x21]
0x0666C050: e00313aa  mov x0, x19
0x0666C054: 9d2a5d97  bl #0x3db6ac8
0x0666C058: c00200b4  cbz x0, #0x666c0b0
0x0666C05C: c88400f0  adrp x8, #0x7707000
0x0666C060: 08d147f9  ldr x8, [x8, #0xfa0]
0x0666C064: f40300aa  mov x20, x0
0x0666C068: d58400f0  adrp x21, #0x7707000
0x0666C06C: d68400f0  adrp x22, #0x7707000
0x0666C070: 000140f9  ldr x0, [x8]
0x0666C074: b5d647f9  ldr x21, [x21, #0xfa8]
0x0666C078: d6da47f9  ldr x22, [x22, #0xfb0]
0x0666C07C: 09532c97  bl #0x3180ca0
0x0666C080: a20240f9  ldr x2, [x21]
0x0666C084: e10313aa  mov x1, x19
0x0666C088: e3031faa  mov x3, xzr
0x0666C08C: f50300aa  mov x21, x0
0x0666C090: 51d8b297  bl #0x53221d4
0x0666C094: c20240f9  ldr x2, [x22]
0x0666C098: e00314aa  mov x0, x20
0x0666C09C: e10315aa  mov x1, x21
0x0666C0A0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666C0A4: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666C0A8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666C0AC: eb8b5a17  b #0x3d0f058
0x0666C0B0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666C0B4: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666C0B8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666C0BC: c0035fd6  ret

; RVA 0x666C0C0 | protected override void EntityCreated(Entity entity) { }
; bytes=104 sha256=fd719c9f25ad0ba2b0563e4d2562cf08359eebeb004bc1ed6705650561b179b0 status=arm64_complete_bound indexed_start=True
0x0666C0C0: fe0f1ef8  str x30, [sp, #-0x20]!
0x0666C0C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666C0C8: f4b50090  adrp x20, #0x7d28000
0x0666C0CC: 88be4339  ldrb w8, [x20, #0xef]
0x0666C0D0: f30301aa  mov x19, x1
0x0666C0D4: c8000037  tbnz w8, #0, #0x666c0ec
0x0666C0D8: 608000d0  adrp x0, #0x767a000
0x0666C0DC: 008044f9  ldr x0, [x0, #0x900]
0x0666C0E0: 4e522c97  bl #0x3180a18
0x0666C0E4: 28008052  movz w8, #0x1
0x0666C0E8: 88be0339  strb w8, [x20, #0xef]
0x0666C0EC: d30100b4  cbz x19, #0x666c124
0x0666C0F0: 688000d0  adrp x8, #0x767a000
0x0666C0F4: 088144f9  ldr x8, [x8, #0x900]
0x0666C0F8: e00313aa  mov x0, x19
0x0666C0FC: 010140f9  ldr x1, [x8]
0x0666C100: 21d35697  bl #0x3c20d84
0x0666C104: a00000b4  cbz x0, #0x666c118
0x0666C108: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666C10C: e10300aa  mov x1, x0
0x0666C110: fe0742f8  ldr x30, [sp], #0x20
0x0666C114: 05000014  b #0x666c128
0x0666C118: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666C11C: fe0742f8  ldr x30, [sp], #0x20
0x0666C120: c0035fd6  ret
0x0666C124: e2522c97  bl #0x3180cac

; RVA 0x666C19C | protected override IEnumerable<ChargableComponent> OnWillProcessComponents(ReadOnlyCollection<ChargableComponent> components) { }
; bytes=284 sha256=195ac61dc1547f85fa5ae2c65c11bd972c7d52a325e1f29b3d17af66b992e80a status=arm64_complete_bound indexed_start=True
0x0666C19C: fe0f1cf8  str x30, [sp, #-0x40]!
0x0666C1A0: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666C1A4: f65702a9  stp x22, x21, [sp, #0x20]
0x0666C1A8: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666C1AC: f4b50090  adrp x20, #0x7d28000
0x0666C1B0: d68400f0  adrp x22, #0x7707000
0x0666C1B4: 88c24339  ldrb w8, [x20, #0xf0]
0x0666C1B8: d6de47f9  ldr x22, [x22, #0xfb8]
0x0666C1BC: f30301aa  mov x19, x1
0x0666C1C0: 48020037  tbnz w8, #0, #0x666c208
0x0666C1C4: c08400f0  adrp x0, #0x7707000
0x0666C1C8: 00e047f9  ldr x0, [x0, #0xfc0]
0x0666C1CC: 13522c97  bl #0x3180a18
0x0666C1D0: c08400f0  adrp x0, #0x7707000
0x0666C1D4: 00e447f9  ldr x0, [x0, #0xfc8]
0x0666C1D8: 10522c97  bl #0x3180a18
0x0666C1DC: c08400f0  adrp x0, #0x7707000
0x0666C1E0: 00e847f9  ldr x0, [x0, #0xfd0]
0x0666C1E4: 0d522c97  bl #0x3180a18
0x0666C1E8: c08400f0  adrp x0, #0x7707000
0x0666C1EC: 00ec47f9  ldr x0, [x0, #0xfd8]
0x0666C1F0: 0a522c97  bl #0x3180a18
0x0666C1F4: c08400f0  adrp x0, #0x7707000
0x0666C1F8: 00dc47f9  ldr x0, [x0, #0xfb8]
0x0666C1FC: 07522c97  bl #0x3180a18
0x0666C200: 28008052  movz w8, #0x1
0x0666C204: 88c20339  strb w8, [x20, #0xf0]
0x0666C208: c00240f9  ldr x0, [x22]
0x0666C20C: 08e040b9  ldr w8, [x0, #0xe0]
0x0666C210: 68000035  cbnz w8, #0x666c21c
0x0666C214: 5e522c97  bl #0x3180b8c
0x0666C218: c00240f9  ldr x0, [x22]
0x0666C21C: 085c40f9  ldr x8, [x0, #0xb8]
0x0666C220: d88400f0  adrp x24, #0x7707000
0x0666C224: d78400f0  adrp x23, #0x7707000
0x0666C228: 140540f9  ldr x20, [x8, #8]
0x0666C22C: 18e747f9  ldr x24, [x24, #0xfc8]
0x0666C230: f7e247f9  ldr x23, [x23, #0xfc0]
0x0666C234: f40200b5  cbnz x20, #0x666c290
0x0666C238: 08e040b9  ldr w8, [x0, #0xe0]
0x0666C23C: 68000035  cbnz w8, #0x666c248
0x0666C240: 53522c97  bl #0x3180b8c
0x0666C244: c00240f9  ldr x0, [x22]
0x0666C248: c98400f0  adrp x9, #0x7707000
0x0666C24C: 085c40f9  ldr x8, [x0, #0xb8]
0x0666C250: 29e947f9  ldr x9, [x9, #0xfd0]
0x0666C254: 150140f9  ldr x21, [x8]
0x0666C258: 200140f9  ldr x0, [x9]
0x0666C25C: 91522c97  bl #0x3180ca0
0x0666C260: c88400f0  adrp x8, #0x7707000
0x0666C264: 08ed47f9  ldr x8, [x8, #0xfd8]
0x0666C268: e10315aa  mov x1, x21
0x0666C26C: e3031faa  mov x3, xzr
0x0666C270: f40300aa  mov x20, x0
0x0666C274: 020140f9  ldr x2, [x8]
0x0666C278: 51a7af97  bl #0x5255fbc
0x0666C27C: c80240f9  ldr x8, [x22]
0x0666C280: e10314aa  mov x1, x20
0x0666C284: 005d40f9  ldr x0, [x8, #0xb8]
0x0666C288: 148c00f8  str x20, [x0, #8]!
0x0666C28C: ce512c97  bl #0x31809c4
0x0666C290: 020340f9  ldr x2, [x24]
0x0666C294: e00313aa  mov x0, x19
0x0666C298: e10314aa  mov x1, x20
0x0666C29C: 036c5897  bl #0x3c872a8
0x0666C2A0: e10240f9  ldr x1, [x23]
0x0666C2A4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666C2A8: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666C2AC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666C2B0: fe0744f8  ldr x30, [sp], #0x40
0x0666C2B4: 47cf5717  b #0x3c5ffd0

; RVA 0x666C2B8 | protected override void ProcessComponent(ChargableComponent chargable) { }
; bytes=384 sha256=9d52952f7d0f9065c4ea73f552131bc2241e02b335ecb21fcd0a971e7778722f status=arm64_complete_bound indexed_start=True
0x0666C2B8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0666C2BC: f65701a9  stp x22, x21, [sp, #0x10]
0x0666C2C0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666C2C4: f4b50090  adrp x20, #0x7d28000
0x0666C2C8: d58400f0  adrp x21, #0x7707000
0x0666C2CC: 88c64339  ldrb w8, [x20, #0xf1]
0x0666C2D0: b5f247f9  ldr x21, [x21, #0xfe0]
0x0666C2D4: f60301aa  mov x22, x1
0x0666C2D8: f30300aa  mov x19, x0
0x0666C2DC: 48020037  tbnz w8, #0, #0x666c324
0x0666C2E0: 007f00d0  adrp x0, #0x764e000
0x0666C2E4: 00ac43f9  ldr x0, [x0, #0x758]
0x0666C2E8: cc512c97  bl #0x3180a18
0x0666C2EC: c08300d0  adrp x0, #0x76e6000
0x0666C2F0: 00b846f9  ldr x0, [x0, #0xd70]
0x0666C2F4: c9512c97  bl #0x3180a18
0x0666C2F8: c08300d0  adrp x0, #0x76e6000
0x0666C2FC: 00b043f9  ldr x0, [x0, #0x760]
0x0666C300: c6512c97  bl #0x3180a18
0x0666C304: c08400f0  adrp x0, #0x7707000
0x0666C308: 00f447f9  ldr x0, [x0, #0xfe8]
0x0666C30C: c3512c97  bl #0x3180a18
0x0666C310: c08400f0  adrp x0, #0x7707000
0x0666C314: 00f047f9  ldr x0, [x0, #0xfe0]
0x0666C318: c0512c97  bl #0x3180a18
0x0666C31C: 28008052  movz w8, #0x1
0x0666C320: 88c60339  strb w8, [x20, #0xf1]
0x0666C324: a00240f9  ldr x0, [x21]
0x0666C328: 5e522c97  bl #0x3180ca0
0x0666C32C: e1031faa  mov x1, xzr
0x0666C330: f40300aa  mov x20, x0
0x0666C334: b2b8c197  bl #0x56da5fc
0x0666C338: f40700b4  cbz x20, #0x666c434
0x0666C33C: e00314aa  mov x0, x20
0x0666C340: 130c01f8  str x19, [x0, #0x10]!
0x0666C344: e10313aa  mov x1, x19
0x0666C348: 9f512c97  bl #0x31809c4
0x0666C34C: f50314aa  mov x21, x20
0x0666C350: b68e01f8  str x22, [x21, #0x18]!
0x0666C354: e00315aa  mov x0, x21
0x0666C358: e10316aa  mov x1, x22
0x0666C35C: 9a512c97  bl #0x31809c4
0x0666C360: a00240f9  ldr x0, [x21]
0x0666C364: 800600b4  cbz x0, #0x666c434
0x0666C368: c88300d0  adrp x8, #0x76e6000
0x0666C36C: 08b143f9  ldr x8, [x8, #0x760]
0x0666C370: 010140f9  ldr x1, [x8]
0x0666C374: 2a055697  bl #0x3bed81c
0x0666C378: a80240f9  ldr x8, [x21]
0x0666C37C: c80500b4  cbz x8, #0x666c434
0x0666C380: c98300d0  adrp x9, #0x76e6000
0x0666C384: 29b946f9  ldr x9, [x9, #0xd70]
0x0666C388: f60300aa  mov x22, x0
0x0666C38C: e00308aa  mov x0, x8
0x0666C390: 210140f9  ldr x1, [x9]
0x0666C394: 22055697  bl #0x3bed81c
0x0666C398: 800000b4  cbz x0, #0x666c3a8
0x0666C39C: 083040b9  ldr w8, [x0, #0x30]
0x0666C3A0: 1f050071  cmp w8, #1
0x0666C3A4: 40030054  b.eq #0x666c40c
0x0666C3A8: 602a40f9  ldr x0, [x19, #0x50]
0x0666C3AC: 400400b4  cbz x0, #0x666c434
0x0666C3B0: 22008052  movz w2, #0x1
0x0666C3B4: e10316aa  mov x1, x22
0x0666C3B8: e3031faa  mov x3, xzr
0x0666C3BC: e4031faa  mov x4, xzr
0x0666C3C0: e5031faa  mov x5, xzr
0x0666C3C4: de4cf097  bl #0x627f73c
0x0666C3C8: e0020036  tbz w0, #0, #0x666c424
0x0666C3CC: 087f00d0  adrp x8, #0x764e000
0x0666C3D0: 08ad43f9  ldr x8, [x8, #0x758]
0x0666C3D4: 000140f9  ldr x0, [x8]
0x0666C3D8: 32522c97  bl #0x3180ca0
0x0666C3DC: c88400f0  adrp x8, #0x7707000
0x0666C3E0: 08f547f9  ldr x8, [x8, #0xfe8]
0x0666C3E4: e10314aa  mov x1, x20
0x0666C3E8: e3031faa  mov x3, xzr
0x0666C3EC: f70300aa  mov x23, x0
0x0666C3F0: 020140f9  ldr x2, [x8]
0x0666C3F4: cf04be97  bl #0x55ed730
0x0666C3F8: f60100b4  cbz x22, #0x666c434
0x0666C3FC: e00316aa  mov x0, x22
0x0666C400: e10317aa  mov x1, x23
0x0666C404: e2031faa  mov x2, xzr
0x0666C408: df420a94  bl #0x68fcf84
0x0666C40C: a10240f9  ldr x1, [x21]
0x0666C410: e00313aa  mov x0, x19
0x0666C414: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666C418: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666C41C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666C420: 08000014  b #0x666c440
0x0666C424: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666C428: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666C42C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666C430: c0035fd6  ret
0x0666C434: 1e522c97  bl #0x3180cac

; RVA 0x666C558 | private void ChargeItem(ChargableComponent chargableComponent) { }
; bytes=160 sha256=139e130fd696ea19df738a2a7305a34cfe2ba908e8f76dfc1c37d0a55986ecf8 status=arm64_complete_bound indexed_start=True
0x0666C558: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0666C55C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666C560: f4b50090  adrp x20, #0x7d28000
0x0666C564: 88ca4339  ldrb w8, [x20, #0xf2]
0x0666C568: f30301aa  mov x19, x1
0x0666C56C: 28010037  tbnz w8, #0, #0x666c590
0x0666C570: 007f00d0  adrp x0, #0x764e000
0x0666C574: 000447f9  ldr x0, [x0, #0xe08]
0x0666C578: 28512c97  bl #0x3180a18
0x0666C57C: c08400f0  adrp x0, #0x7707000
0x0666C580: 00fc47f9  ldr x0, [x0, #0xff8]
0x0666C584: 25512c97  bl #0x3180a18
0x0666C588: 28008052  movz w8, #0x1
0x0666C58C: 88ca0339  strb w8, [x20, #0xf2]
0x0666C590: 330300b4  cbz x19, #0x666c5f4
0x0666C594: 601a40f9  ldr x0, [x19, #0x30]
0x0666C598: e00200b4  cbz x0, #0x666c5f4
0x0666C59C: c88400f0  adrp x8, #0x7707000
0x0666C5A0: 08fd47f9  ldr x8, [x8, #0xff8]
0x0666C5A4: 147f00d0  adrp x20, #0x764e000
0x0666C5A8: 753a40b9  ldr w21, [x19, #0x38]
0x0666C5AC: 010140f9  ldr x1, [x8]
0x0666C5B0: 940647f9  ldr x20, [x20, #0xe08]
0x0666C5B4: ed647797  bl #0x4445968
0x0666C5B8: 880240f9  ldr x8, [x20]
0x0666C5BC: f403002a  mov w20, w0
0x0666C5C0: 09e140b9  ldr w9, [x8, #0xe0]
0x0666C5C4: 69000035  cbnz w9, #0x666c5d0
0x0666C5C8: e00308aa  mov x0, x8
0x0666C5CC: 70512c97  bl #0x3180b8c
0x0666C5D0: a0060011  add w0, w21, #1
0x0666C5D4: 81060051  sub w1, w20, #1
0x0666C5D8: e2031faa  mov x2, xzr
0x0666C5DC: e9abc097  bl #0x5697580
0x0666C5E0: 603a00b9  str w0, [x19, #0x38]
0x0666C5E4: e10313aa  mov x1, x19
0x0666C5E8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666C5EC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666C5F0: cefeff17  b #0x666c128
0x0666C5F4: ae512c97  bl #0x3180cac

; RVA 0x666C128 | private void UpdateSprite(ChargableComponent chargable) { }
; bytes=116 sha256=dc43c8da69e8eb9dc24eb345deac4c11ef848c5276b2fce7d866b13a0a8e280f status=arm64_complete_bound indexed_start=True
0x0666C128: fe0f1ef8  str x30, [sp, #-0x20]!
0x0666C12C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666C130: f4b50090  adrp x20, #0x7d28000
0x0666C134: 88ce4339  ldrb w8, [x20, #0xf3]
0x0666C138: f30301aa  mov x19, x1
0x0666C13C: c8000037  tbnz w8, #0, #0x666c154
0x0666C140: 408300f0  adrp x0, #0x76d7000
0x0666C144: 00c442f9  ldr x0, [x0, #0x588]
0x0666C148: 34522c97  bl #0x3180a18
0x0666C14C: 28008052  movz w8, #0x1
0x0666C150: 88ce0339  strb w8, [x20, #0xf3]
0x0666C154: 330200b4  cbz x19, #0x666c198
0x0666C158: 488300f0  adrp x8, #0x76d7000
0x0666C15C: 08c542f9  ldr x8, [x8, #0x588]
0x0666C160: e00313aa  mov x0, x19
0x0666C164: 010140f9  ldr x1, [x8]
0x0666C168: ad055697  bl #0x3bed81c
0x0666C16C: f40300aa  mov x20, x0
0x0666C170: e00313aa  mov x0, x19
0x0666C174: e1031faa  mov x1, xzr
0x0666C178: bd3d0a94  bl #0x68fb86c
0x0666C17C: f40000b4  cbz x20, #0x666c198
0x0666C180: e10300aa  mov x1, x0
0x0666C184: 80420491  add x0, x20, #0x110
0x0666C188: 818a00f9  str x1, [x20, #0x110]
0x0666C18C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666C190: fe0742f8  ldr x30, [sp], #0x20
0x0666C194: 0c522c17  b #0x31809c4
0x0666C198: c5522c97  bl #0x3180cac

; RVA 0x666C440 | private void SendChargableAnalytics(ChargableComponent chargable) { }
; bytes=280 sha256=4ba4946ec2c6da7ed7b95b5bff84303cc6192cbffdf2a9523911860d6bd3d623 status=arm64_complete_bound indexed_start=True
0x0666C440: fe0f1df8  str x30, [sp, #-0x30]!
0x0666C444: f65701a9  stp x22, x21, [sp, #0x10]
0x0666C448: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666C44C: f4b50090  adrp x20, #0x7d28000
0x0666C450: d68400f0  adrp x22, #0x7707000
0x0666C454: 88d24339  ldrb w8, [x20, #0xf4]
0x0666C458: d6fa47f9  ldr x22, [x22, #0xff0]
0x0666C45C: f50301aa  mov x21, x1
0x0666C460: f30300aa  mov x19, x0
0x0666C464: 28010037  tbnz w8, #0, #0x666c488
0x0666C468: c08400f0  adrp x0, #0x7707000
0x0666C46C: 00f847f9  ldr x0, [x0, #0xff0]
0x0666C470: 6a512c97  bl #0x3180a18
0x0666C474: 608000d0  adrp x0, #0x767a000
0x0666C478: 004c42f9  ldr x0, [x0, #0x498]
0x0666C47C: 67512c97  bl #0x3180a18
0x0666C480: 28008052  movz w8, #0x1
0x0666C484: 88d20339  strb w8, [x20, #0xf4]
0x0666C488: c00240f9  ldr x0, [x22]
0x0666C48C: 05522c97  bl #0x3180ca0
0x0666C490: e1031faa  mov x1, xzr
0x0666C494: f40300aa  mov x20, x0
0x0666C498: 16500a94  bl #0x69004f0
0x0666C49C: 763240f9  ldr x22, [x19, #0x60]
0x0666C4A0: b60500b4  cbz x22, #0x666c554
0x0666C4A4: 6a8000d0  adrp x10, #0x767a000
0x0666C4A8: c80240f9  ldr x8, [x22]
0x0666C4AC: 4a4d42f9  ldr x10, [x10, #0x498]
0x0666C4B0: 095d4279  ldrh w9, [x8, #0x12e]
0x0666C4B4: 410140f9  ldr x1, [x10]
0x0666C4B8: 290100b4  cbz x9, #0x666c4dc
0x0666C4BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666C4C0: 4a210091  add x10, x10, #8
0x0666C4C4: 4b815ff8  ldur x11, [x10, #-8]
0x0666C4C8: 7f0101eb  cmp x11, x1
0x0666C4CC: 00010054  b.eq #0x666c4ec
0x0666C4D0: 290500f1  subs x9, x9, #1
0x0666C4D4: 4a410091  add x10, x10, #0x10
0x0666C4D8: 61ffff54  b.ne #0x666c4c4
0x0666C4DC: 82028052  movz w2, #0x14
0x0666C4E0: e00316aa  mov x0, x22
0x0666C4E4: 8ba92b97  bl #0x3156b10
0x0666C4E8: 05000014  b #0x666c4fc
0x0666C4EC: 490140b9  ldr w9, [x10]
0x0666C4F0: 29510011  add w9, w9, #0x14
0x0666C4F4: 08d1298b  add x8, x8, w9, sxtw #4
0x0666C4F8: 00e10491  add x0, x8, #0x138
0x0666C4FC: 080840a9  ldp x8, x2, [x0]
0x0666C500: e00316aa  mov x0, x22
0x0666C504: e10315aa  mov x1, x21
0x0666C508: 00013fd6  blr x8
0x0666C50C: 540200b4  cbz x20, #0x666c554
0x0666C510: f50314aa  mov x21, x20
0x0666C514: a00e01f8  str x0, [x21, #0x10]!
0x0666C518: e10300aa  mov x1, x0
0x0666C51C: e00315aa  mov x0, x21
0x0666C520: 29512c97  bl #0x31809c4
0x0666C524: 28008052  movz w8, #0x1
0x0666C528: a8220039  strb w8, [x21, #8]
0x0666C52C: 682e40f9  ldr x8, [x19, #0x58]
0x0666C530: 280100b4  cbz x8, #0x666c554
0x0666C534: 001940f9  ldr x0, [x8, #0x30]
0x0666C538: e00000b4  cbz x0, #0x666c554
0x0666C53C: 148c02f8  str x20, [x0, #0x28]!
0x0666C540: e10314aa  mov x1, x20
0x0666C544: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666C548: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666C54C: fe0743f8  ldr x30, [sp], #0x30
0x0666C550: 1d512c17  b #0x31809c4
0x0666C554: d6512c97  bl #0x3180cac

; RVA 0x666C5F8 | public void .ctor() { }
; bytes=72 sha256=16fd19ba3d03f0b23637c0f0507f29da68657a2623e5e0fb6c605c7457a7f2d1 status=arm64_complete_bound indexed_start=True
0x0666C5F8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0666C5FC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666C600: f4b50090  adrp x20, #0x7d28000
0x0666C604: f5840090  adrp x21, #0x7708000
0x0666C608: 88d64339  ldrb w8, [x20, #0xf5]
0x0666C60C: b50240f9  ldr x21, [x21]
0x0666C610: f30300aa  mov x19, x0
0x0666C614: c8000037  tbnz w8, #0, #0x666c62c
0x0666C618: e0840090  adrp x0, #0x7708000
0x0666C61C: 000040f9  ldr x0, [x0]
0x0666C620: fe502c97  bl #0x3180a18
0x0666C624: 28008052  movz w8, #0x1
0x0666C628: 88d60339  strb w8, [x20, #0xf5]
0x0666C62C: a10240f9  ldr x1, [x21]
0x0666C630: e00313aa  mov x0, x19
0x0666C634: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666C638: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666C63C: 3d009617  b #0x4bec730

