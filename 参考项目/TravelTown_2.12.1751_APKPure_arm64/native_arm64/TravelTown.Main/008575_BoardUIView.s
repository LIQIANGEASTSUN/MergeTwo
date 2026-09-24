; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8575 Merger.Game.Views.BoardUIView
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x668F078 | public void add_ItemDroppedOnInventory(Action<BoardItemPosition> value) { }
; bytes=176 sha256=26fa8a946b5fa8aab50156661273933a3889c050286ff3845723701a482888f3 status=arm64_complete_bound indexed_start=True
0x0668F078: fe0f1cf8  str x30, [sp, #-0x40]!
0x0668F07C: f85f01a9  stp x24, x23, [sp, #0x10]
0x0668F080: f65702a9  stp x22, x21, [sp, #0x20]
0x0668F084: f44f03a9  stp x20, x19, [sp, #0x30]
0x0668F088: d5b400b0  adrp x21, #0x7d28000
0x0668F08C: a82a4a39  ldrb w8, [x21, #0x28a]
0x0668F090: f30301aa  mov x19, x1
0x0668F094: f40300aa  mov x20, x0
0x0668F098: c8000037  tbnz w8, #0, #0x668f0b0
0x0668F09C: 008300d0  adrp x0, #0x76f1000
0x0668F0A0: 008042f9  ldr x0, [x0, #0x500]
0x0668F0A4: 5dc62b97  bl #0x3180a18
0x0668F0A8: 28008052  movz w8, #0x1
0x0668F0AC: a82a0a39  strb w8, [x21, #0x28a]
0x0668F0B0: 188300d0  adrp x24, #0x76f1000
0x0668F0B4: 950e43f8  ldr x21, [x20, #0x30]!
0x0668F0B8: 188342f9  ldr x24, [x24, #0x500]
0x0668F0BC: e00315aa  mov x0, x21
0x0668F0C0: e10313aa  mov x1, x19
0x0668F0C4: e2031faa  mov x2, xzr
0x0668F0C8: 963ac197  bl #0x56ddb20
0x0668F0CC: 000100b4  cbz x0, #0x668f0ec
0x0668F0D0: 170340f9  ldr x23, [x24]
0x0668F0D4: f60300aa  mov x22, x0
0x0668F0D8: e10317aa  mov x1, x23
0x0668F0DC: adc62b97  bl #0x3180b90
0x0668F0E0: e10300aa  mov x1, x0
0x0668F0E4: 600000b5  cbnz x0, #0x668f0f0
0x0668F0E8: 0d000014  b #0x668f11c
0x0668F0EC: e1031faa  mov x1, xzr
0x0668F0F0: e00314aa  mov x0, x20
0x0668F0F4: e20315aa  mov x2, x21
0x0668F0F8: 12382d97  bl #0x31dd140
0x0668F0FC: bf0200eb  cmp x21, x0
0x0668F100: f50300aa  mov x21, x0
0x0668F104: c1fdff54  b.ne #0x668f0bc
0x0668F108: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0668F10C: f65742a9  ldp x22, x21, [sp, #0x20]
0x0668F110: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0668F114: fe0744f8  ldr x30, [sp], #0x40
0x0668F118: c0035fd6  ret
0x0668F11C: e00316aa  mov x0, x22
0x0668F120: e10317aa  mov x1, x23
0x0668F124: c9c72b97  bl #0x3181048

; RVA 0x668F128 | public void remove_ItemDroppedOnInventory(Action<BoardItemPosition> value) { }
; bytes=176 sha256=1cae031b7b54575ea2fd36045d427f1f2bde400d1852770313fa630f7d09a3f0 status=arm64_complete_bound indexed_start=True
0x0668F128: fe0f1cf8  str x30, [sp, #-0x40]!
0x0668F12C: f85f01a9  stp x24, x23, [sp, #0x10]
0x0668F130: f65702a9  stp x22, x21, [sp, #0x20]
0x0668F134: f44f03a9  stp x20, x19, [sp, #0x30]
0x0668F138: d5b400b0  adrp x21, #0x7d28000
0x0668F13C: a82e4a39  ldrb w8, [x21, #0x28b]
0x0668F140: f30301aa  mov x19, x1
0x0668F144: f40300aa  mov x20, x0
0x0668F148: c8000037  tbnz w8, #0, #0x668f160
0x0668F14C: 008300d0  adrp x0, #0x76f1000
0x0668F150: 008042f9  ldr x0, [x0, #0x500]
0x0668F154: 31c62b97  bl #0x3180a18
0x0668F158: 28008052  movz w8, #0x1
0x0668F15C: a82e0a39  strb w8, [x21, #0x28b]
0x0668F160: 188300d0  adrp x24, #0x76f1000
0x0668F164: 950e43f8  ldr x21, [x20, #0x30]!
0x0668F168: 188342f9  ldr x24, [x24, #0x500]
0x0668F16C: e00315aa  mov x0, x21
0x0668F170: e10313aa  mov x1, x19
0x0668F174: e2031faa  mov x2, xzr
0x0668F178: e83ac197  bl #0x56ddd18
0x0668F17C: 000100b4  cbz x0, #0x668f19c
0x0668F180: 170340f9  ldr x23, [x24]
0x0668F184: f60300aa  mov x22, x0
0x0668F188: e10317aa  mov x1, x23
0x0668F18C: 81c62b97  bl #0x3180b90
0x0668F190: e10300aa  mov x1, x0
0x0668F194: 600000b5  cbnz x0, #0x668f1a0
0x0668F198: 0d000014  b #0x668f1cc
0x0668F19C: e1031faa  mov x1, xzr
0x0668F1A0: e00314aa  mov x0, x20
0x0668F1A4: e20315aa  mov x2, x21
0x0668F1A8: e6372d97  bl #0x31dd140
0x0668F1AC: bf0200eb  cmp x21, x0
0x0668F1B0: f50300aa  mov x21, x0
0x0668F1B4: c1fdff54  b.ne #0x668f16c
0x0668F1B8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0668F1BC: f65742a9  ldp x22, x21, [sp, #0x20]
0x0668F1C0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0668F1C4: fe0744f8  ldr x30, [sp], #0x40
0x0668F1C8: c0035fd6  ret
0x0668F1CC: e00316aa  mov x0, x22
0x0668F1D0: e10317aa  mov x1, x23
0x0668F1D4: 9dc72b97  bl #0x3181048

; RVA 0x668F1D8 | public SwitchMergingMetaButtonView get_MetaGameButton() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x0668F1D8: 002440f9  ldr x0, [x0, #0x48]
0x0668F1DC: c0035fd6  ret

; RVA 0x668F1E0 | private void OnEnable() { }
; bytes=596 sha256=9e0c93e881b405c1dd528d13e5db8ff5878c22e45915e4ee736d26c7b4b1732a status=arm64_complete_bound indexed_start=True
0x0668F1E0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0668F1E4: f65701a9  stp x22, x21, [sp, #0x10]
0x0668F1E8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0668F1EC: d5b400b0  adrp x21, #0x7d28000
0x0668F1F0: f47d00f0  adrp x20, #0x764e000
0x0668F1F4: a8324a39  ldrb w8, [x21, #0x28c]
0x0668F1F8: 947242f9  ldr x20, [x20, #0x4e0]
0x0668F1FC: f30300aa  mov x19, x0
0x0668F200: 48050037  tbnz w8, #0, #0x668f2a8
0x0668F204: 007f00f0  adrp x0, #0x7672000
0x0668F208: 00a445f9  ldr x0, [x0, #0xb48]
0x0668F20C: 03c62b97  bl #0x3180a18
0x0668F210: 007f00f0  adrp x0, #0x7672000
0x0668F214: 004843f9  ldr x0, [x0, #0x690]
0x0668F218: 00c62b97  bl #0x3180a18
0x0668F21C: 807f0090  adrp x0, #0x767f000
0x0668F220: 005c45f9  ldr x0, [x0, #0xab8]
0x0668F224: fdc52b97  bl #0x3180a18
0x0668F228: 007f00f0  adrp x0, #0x7672000
0x0668F22C: 00a845f9  ldr x0, [x0, #0xb50]
0x0668F230: fac52b97  bl #0x3180a18
0x0668F234: 007f00f0  adrp x0, #0x7672000
0x0668F238: 005043f9  ldr x0, [x0, #0x6a0]
0x0668F23C: f7c52b97  bl #0x3180a18
0x0668F240: 807f0090  adrp x0, #0x767f000
0x0668F244: 006045f9  ldr x0, [x0, #0xac0]
0x0668F248: f4c52b97  bl #0x3180a18
0x0668F24C: 007f00f0  adrp x0, #0x7672000
0x0668F250: 008844f9  ldr x0, [x0, #0x910]
0x0668F254: f1c52b97  bl #0x3180a18
0x0668F258: c08300d0  adrp x0, #0x7709000
0x0668F25C: 00bc40f9  ldr x0, [x0, #0x178]
0x0668F260: eec52b97  bl #0x3180a18
0x0668F264: c08300d0  adrp x0, #0x7709000
0x0668F268: 00c040f9  ldr x0, [x0, #0x180]
0x0668F26C: ebc52b97  bl #0x3180a18
0x0668F270: c08300d0  adrp x0, #0x7709000
0x0668F274: 00c440f9  ldr x0, [x0, #0x188]
0x0668F278: e8c52b97  bl #0x3180a18
0x0668F27C: c08300d0  adrp x0, #0x7709000
0x0668F280: 00c840f9  ldr x0, [x0, #0x190]
0x0668F284: e5c52b97  bl #0x3180a18
0x0668F288: e07d00f0  adrp x0, #0x764e000
0x0668F28C: 007042f9  ldr x0, [x0, #0x4e0]
0x0668F290: e2c52b97  bl #0x3180a18
0x0668F294: c08300d0  adrp x0, #0x7709000
0x0668F298: 00cc40f9  ldr x0, [x0, #0x198]
0x0668F29C: dfc52b97  bl #0x3180a18
0x0668F2A0: 28008052  movz w8, #0x1
0x0668F2A4: a8320a39  strb w8, [x21, #0x28c]
0x0668F2A8: 7f7600b9  str wzr, [x19, #0x74]
0x0668F2AC: 800240f9  ldr x0, [x20]
0x0668F2B0: 743240f9  ldr x20, [x19, #0x60]
0x0668F2B4: 08e040b9  ldr w8, [x0, #0xe0]
0x0668F2B8: 48000035  cbnz w8, #0x668f2c0
0x0668F2BC: 34c62b97  bl #0x3180b8c
0x0668F2C0: e00314aa  mov x0, x20
0x0668F2C4: e1031faa  mov x1, xzr
0x0668F2C8: e2031faa  mov x2, xzr
0x0668F2CC: 2a3e2194  bl #0x6edeb74
0x0668F2D0: 40020036  tbz w0, #0, #0x668f318
0x0668F2D4: c88300d0  adrp x8, #0x7709000
0x0668F2D8: 08c940f9  ldr x8, [x8, #0x190]
0x0668F2DC: e00313aa  mov x0, x19
0x0668F2E0: 010140f9  ldr x1, [x8]
0x0668F2E4: 166aaf97  bl #0x5269b3c
0x0668F2E8: 80010036  tbz w0, #0, #0x668f318
0x0668F2EC: 601640f9  ldr x0, [x19, #0x28]
0x0668F2F0: 000a00b4  cbz x0, #0x668f430
0x0668F2F4: 743240f9  ldr x20, [x19, #0x60]
0x0668F2F8: e1031faa  mov x1, xzr
0x0668F2FC: 8552fe97  bl #0x6623d10
0x0668F300: 800900b4  cbz x0, #0x668f430
0x0668F304: 740900b4  cbz x20, #0x668f430
0x0668F308: 01804039  ldrb w1, [x0, #0x20]
0x0668F30C: e00314aa  mov x0, x20
0x0668F310: e2031faa  mov x2, xzr
0x0668F314: d63f2194  bl #0x6edf26c
0x0668F318: 601640f9  ldr x0, [x19, #0x28]
0x0668F31C: a00800b4  cbz x0, #0x668f430
0x0668F320: 147f00f0  adrp x20, #0x7672000
0x0668F324: d58300d0  adrp x21, #0x7709000
0x0668F328: 944a43f9  ldr x20, [x20, #0x690]
0x0668F32C: b5c240f9  ldr x21, [x21, #0x180]
0x0668F330: e1031faa  mov x1, xzr
0x0668F334: 105bfe97  bl #0x6625f74
0x0668F338: 880240f9  ldr x8, [x20]
0x0668F33C: f40300aa  mov x20, x0
0x0668F340: e00308aa  mov x0, x8
0x0668F344: 57c62b97  bl #0x3180ca0
0x0668F348: a20240f9  ldr x2, [x21]
0x0668F34C: e10313aa  mov x1, x19
0x0668F350: e3031faa  mov x3, xzr
0x0668F354: f50300aa  mov x21, x0
0x0668F358: 2a46b297  bl #0x5320c00
0x0668F35C: b40600b4  cbz x20, #0x668f430
0x0668F360: 087f00f0  adrp x8, #0x7672000
0x0668F364: 085143f9  ldr x8, [x8, #0x6a0]
0x0668F368: e00314aa  mov x0, x20
0x0668F36C: e10315aa  mov x1, x21
0x0668F370: 020140f9  ldr x2, [x8]
0x0668F374: 1dfe9597  bl #0x4c0ebe8
0x0668F378: 601640f9  ldr x0, [x19, #0x28]
0x0668F37C: a00500b4  cbz x0, #0x668f430
0x0668F380: 947f0090  adrp x20, #0x767f000
0x0668F384: d58300d0  adrp x21, #0x7709000
0x0668F388: 945e45f9  ldr x20, [x20, #0xab8]
0x0668F38C: b5be40f9  ldr x21, [x21, #0x178]
0x0668F390: e1031faa  mov x1, xzr
0x0668F394: 735bfe97  bl #0x6626160
0x0668F398: 880240f9  ldr x8, [x20]
0x0668F39C: f40300aa  mov x20, x0
0x0668F3A0: e00308aa  mov x0, x8
0x0668F3A4: 3fc62b97  bl #0x3180ca0
0x0668F3A8: a20240f9  ldr x2, [x21]
0x0668F3AC: e10313aa  mov x1, x19
0x0668F3B0: e3031faa  mov x3, xzr
0x0668F3B4: f50300aa  mov x21, x0
0x0668F3B8: 1246b297  bl #0x5320c00
0x0668F3BC: b40300b4  cbz x20, #0x668f430
0x0668F3C0: 887f0090  adrp x8, #0x767f000
0x0668F3C4: 086145f9  ldr x8, [x8, #0xac0]
0x0668F3C8: 167f00f0  adrp x22, #0x7672000
0x0668F3CC: d78300d0  adrp x23, #0x7709000
0x0668F3D0: e00314aa  mov x0, x20
0x0668F3D4: 020140f9  ldr x2, [x8]
0x0668F3D8: d6a645f9  ldr x22, [x22, #0xb48]
0x0668F3DC: f7c640f9  ldr x23, [x23, #0x188]
0x0668F3E0: e10315aa  mov x1, x21
0x0668F3E4: 01fe9597  bl #0x4c0ebe8
0x0668F3E8: c00240f9  ldr x0, [x22]
0x0668F3EC: 741640f9  ldr x20, [x19, #0x28]
0x0668F3F0: 2cc62b97  bl #0x3180ca0
0x0668F3F4: e20240f9  ldr x2, [x23]
0x0668F3F8: e10313aa  mov x1, x19
0x0668F3FC: e3031faa  mov x3, xzr
0x0668F400: f50300aa  mov x21, x0
0x0668F404: 744bb297  bl #0x53221d4
0x0668F408: 540100b4  cbz x20, #0x668f430
0x0668F40C: 087f00f0  adrp x8, #0x7672000
0x0668F410: 08a945f9  ldr x8, [x8, #0xb50]
0x0668F414: e00314aa  mov x0, x20
0x0668F418: e10315aa  mov x1, x21
0x0668F41C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668F420: 020140f9  ldr x2, [x8]
0x0668F424: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668F428: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0668F42C: 1fdf5417  b #0x3bc70a8
0x0668F430: 1fc62b97  bl #0x3180cac

; RVA 0x668F434 | private void OnDisable() { }
; bytes=464 sha256=3810f9d0a6a786170dedeedf5e56b2aa24b6132a8138701d65abf747721d5a6b status=arm64_complete_bound indexed_start=True
0x0668F434: fe0f1df8  str x30, [sp, #-0x30]!
0x0668F438: f65701a9  stp x22, x21, [sp, #0x10]
0x0668F43C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0668F440: d4b400b0  adrp x20, #0x7d28000
0x0668F444: 167f00f0  adrp x22, #0x7672000
0x0668F448: d58300d0  adrp x21, #0x7709000
0x0668F44C: 88364a39  ldrb w8, [x20, #0x28d]
0x0668F450: d6a645f9  ldr x22, [x22, #0xb48]
0x0668F454: b5c640f9  ldr x21, [x21, #0x188]
0x0668F458: f30300aa  mov x19, x0
0x0668F45C: 28040037  tbnz w8, #0, #0x668f4e0
0x0668F460: 007f00f0  adrp x0, #0x7672000
0x0668F464: 00a445f9  ldr x0, [x0, #0xb48]
0x0668F468: 6cc52b97  bl #0x3180a18
0x0668F46C: 007f00f0  adrp x0, #0x7672000
0x0668F470: 004843f9  ldr x0, [x0, #0x690]
0x0668F474: 69c52b97  bl #0x3180a18
0x0668F478: 807f0090  adrp x0, #0x767f000
0x0668F47C: 005c45f9  ldr x0, [x0, #0xab8]
0x0668F480: 66c52b97  bl #0x3180a18
0x0668F484: 007f00f0  adrp x0, #0x7672000
0x0668F488: 00b445f9  ldr x0, [x0, #0xb68]
0x0668F48C: 63c52b97  bl #0x3180a18
0x0668F490: 007f00f0  adrp x0, #0x7672000
0x0668F494: 008c43f9  ldr x0, [x0, #0x718]
0x0668F498: 60c52b97  bl #0x3180a18
0x0668F49C: 807f0090  adrp x0, #0x767f000
0x0668F4A0: 006445f9  ldr x0, [x0, #0xac8]
0x0668F4A4: 5dc52b97  bl #0x3180a18
0x0668F4A8: c08300d0  adrp x0, #0x7709000
0x0668F4AC: 00bc40f9  ldr x0, [x0, #0x178]
0x0668F4B0: 5ac52b97  bl #0x3180a18
0x0668F4B4: c08300d0  adrp x0, #0x7709000
0x0668F4B8: 00c040f9  ldr x0, [x0, #0x180]
0x0668F4BC: 57c52b97  bl #0x3180a18
0x0668F4C0: c08300d0  adrp x0, #0x7709000
0x0668F4C4: 00c440f9  ldr x0, [x0, #0x188]
0x0668F4C8: 54c52b97  bl #0x3180a18
0x0668F4CC: c08300d0  adrp x0, #0x7709000
0x0668F4D0: 00cc40f9  ldr x0, [x0, #0x198]
0x0668F4D4: 51c52b97  bl #0x3180a18
0x0668F4D8: 28008052  movz w8, #0x1
0x0668F4DC: 88360a39  strb w8, [x20, #0x28d]
0x0668F4E0: c00240f9  ldr x0, [x22]
0x0668F4E4: 741640f9  ldr x20, [x19, #0x28]
0x0668F4E8: eec52b97  bl #0x3180ca0
0x0668F4EC: a20240f9  ldr x2, [x21]
0x0668F4F0: e10313aa  mov x1, x19
0x0668F4F4: e3031faa  mov x3, xzr
0x0668F4F8: f50300aa  mov x21, x0
0x0668F4FC: 364bb297  bl #0x53221d4
0x0668F500: 140800b4  cbz x20, #0x668f600
0x0668F504: 087f00f0  adrp x8, #0x7672000
0x0668F508: 08b545f9  ldr x8, [x8, #0xb68]
0x0668F50C: e00314aa  mov x0, x20
0x0668F510: e10315aa  mov x1, x21
0x0668F514: 020140f9  ldr x2, [x8]
0x0668F518: ebdf5497  bl #0x3bc74c4
0x0668F51C: 601640f9  ldr x0, [x19, #0x28]
0x0668F520: 000700b4  cbz x0, #0x668f600
0x0668F524: 147f00f0  adrp x20, #0x7672000
0x0668F528: d58300d0  adrp x21, #0x7709000
0x0668F52C: 944a43f9  ldr x20, [x20, #0x690]
0x0668F530: b5c240f9  ldr x21, [x21, #0x180]
0x0668F534: e1031faa  mov x1, xzr
0x0668F538: 8f5afe97  bl #0x6625f74
0x0668F53C: 880240f9  ldr x8, [x20]
0x0668F540: f40300aa  mov x20, x0
0x0668F544: e00308aa  mov x0, x8
0x0668F548: d6c52b97  bl #0x3180ca0
0x0668F54C: a20240f9  ldr x2, [x21]
0x0668F550: e10313aa  mov x1, x19
0x0668F554: e3031faa  mov x3, xzr
0x0668F558: f50300aa  mov x21, x0
0x0668F55C: a945b297  bl #0x5320c00
0x0668F560: 140500b4  cbz x20, #0x668f600
0x0668F564: 087f00f0  adrp x8, #0x7672000
0x0668F568: 088d43f9  ldr x8, [x8, #0x718]
0x0668F56C: e00314aa  mov x0, x20
0x0668F570: e10315aa  mov x1, x21
0x0668F574: 020140f9  ldr x2, [x8]
0x0668F578: adfd9597  bl #0x4c0ec2c
0x0668F57C: 601640f9  ldr x0, [x19, #0x28]
0x0668F580: 000400b4  cbz x0, #0x668f600
0x0668F584: 947f0090  adrp x20, #0x767f000
0x0668F588: d58300d0  adrp x21, #0x7709000
0x0668F58C: 945e45f9  ldr x20, [x20, #0xab8]
0x0668F590: b5be40f9  ldr x21, [x21, #0x178]
0x0668F594: e1031faa  mov x1, xzr
0x0668F598: f25afe97  bl #0x6626160
0x0668F59C: 880240f9  ldr x8, [x20]
0x0668F5A0: f40300aa  mov x20, x0
0x0668F5A4: e00308aa  mov x0, x8
0x0668F5A8: bec52b97  bl #0x3180ca0
0x0668F5AC: a20240f9  ldr x2, [x21]
0x0668F5B0: e10313aa  mov x1, x19
0x0668F5B4: e3031faa  mov x3, xzr
0x0668F5B8: f50300aa  mov x21, x0
0x0668F5BC: 9145b297  bl #0x5320c00
0x0668F5C0: 140200b4  cbz x20, #0x668f600
0x0668F5C4: 887f0090  adrp x8, #0x767f000
0x0668F5C8: 086545f9  ldr x8, [x8, #0xac8]
0x0668F5CC: e00314aa  mov x0, x20
0x0668F5D0: e10315aa  mov x1, x21
0x0668F5D4: 020140f9  ldr x2, [x8]
0x0668F5D8: 95fd9597  bl #0x4c0ec2c
0x0668F5DC: 601640f9  ldr x0, [x19, #0x28]
0x0668F5E0: 000100b4  cbz x0, #0x668f600
0x0668F5E4: 080040f9  ldr x8, [x0]
0x0668F5E8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668F5EC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668F5F0: 02bd42f9  ldr x2, [x8, #0x578]
0x0668F5F4: 01c142f9  ldr x1, [x8, #0x580]
0x0668F5F8: fe0743f8  ldr x30, [sp], #0x30
0x0668F5FC: 40001fd6  br x2
0x0668F600: abc52b97  bl #0x3180cac

; RVA 0x668F604 | private void OnBoardTypeChange(CurrentBoardType boardType) { }
; bytes=76 sha256=54108d597fe5185d033e0e77fe7571d2b623effdcbf840ae8002c806fcfdabf4 status=arm64_complete_bound indexed_start=True
0x0668F604: fe0f1ef8  str x30, [sp, #-0x20]!
0x0668F608: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668F60C: d4b400b0  adrp x20, #0x7d28000
0x0668F610: 883a4a39  ldrb w8, [x20, #0x28e]
0x0668F614: f30300aa  mov x19, x0
0x0668F618: c8000037  tbnz w8, #0, #0x668f630
0x0668F61C: c08300d0  adrp x0, #0x7709000
0x0668F620: 00cc40f9  ldr x0, [x0, #0x198]
0x0668F624: fdc42b97  bl #0x3180a18
0x0668F628: 28008052  movz w8, #0x1
0x0668F62C: 883a0a39  strb w8, [x20, #0x28e]
0x0668F630: 601640f9  ldr x0, [x19, #0x28]
0x0668F634: c00000b4  cbz x0, #0x668f64c
0x0668F638: 611e40f9  ldr x1, [x19, #0x38]
0x0668F63C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668F640: e2031faa  mov x2, xzr
0x0668F644: fe0742f8  ldr x30, [sp], #0x20
0x0668F648: 1c0dea17  b #0x6112ab8
0x0668F64C: 98c52b97  bl #0x3180cac

; RVA 0x668F650 | private void OnGameStateChanged(GameState gameState) { }
; bytes=76 sha256=5525fac07e570fc51e180733c30c140c3caf448bcc2aa368fb5711cbc3fd108e status=arm64_complete_bound indexed_start=True
0x0668F650: fe0f1ef8  str x30, [sp, #-0x20]!
0x0668F654: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668F658: d4b400b0  adrp x20, #0x7d28000
0x0668F65C: 883e4a39  ldrb w8, [x20, #0x28f]
0x0668F660: f30300aa  mov x19, x0
0x0668F664: c8000037  tbnz w8, #0, #0x668f67c
0x0668F668: c08300d0  adrp x0, #0x7709000
0x0668F66C: 00cc40f9  ldr x0, [x0, #0x198]
0x0668F670: eac42b97  bl #0x3180a18
0x0668F674: 28008052  movz w8, #0x1
0x0668F678: 883e0a39  strb w8, [x20, #0x28f]
0x0668F67C: 601640f9  ldr x0, [x19, #0x28]
0x0668F680: c00000b4  cbz x0, #0x668f698
0x0668F684: 611e40f9  ldr x1, [x19, #0x38]
0x0668F688: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668F68C: e2031faa  mov x2, xzr
0x0668F690: fe0742f8  ldr x30, [sp], #0x20
0x0668F694: 090dea17  b #0x6112ab8
0x0668F698: 85c52b97  bl #0x3180cac

; RVA 0x668F69C | private void OnInventoryNotificationChanged(bool value) { }
; bytes=152 sha256=912be3bc2e579f9a1564c248436a1f23fb3ed100e141ff4f515e4dfc688d2418 status=arm64_complete_bound indexed_start=True
0x0668F69C: fe0f1df8  str x30, [sp, #-0x30]!
0x0668F6A0: f65701a9  stp x22, x21, [sp, #0x10]
0x0668F6A4: f44f02a9  stp x20, x19, [sp, #0x20]
0x0668F6A8: d6b400b0  adrp x22, #0x7d28000
0x0668F6AC: f57d00f0  adrp x21, #0x764e000
0x0668F6B0: c8424a39  ldrb w8, [x22, #0x290]
0x0668F6B4: b57242f9  ldr x21, [x21, #0x4e0]
0x0668F6B8: f303012a  mov w19, w1
0x0668F6BC: f40300aa  mov x20, x0
0x0668F6C0: c8000037  tbnz w8, #0, #0x668f6d8
0x0668F6C4: e07d00f0  adrp x0, #0x764e000
0x0668F6C8: 007042f9  ldr x0, [x0, #0x4e0]
0x0668F6CC: d3c42b97  bl #0x3180a18
0x0668F6D0: 28008052  movz w8, #0x1
0x0668F6D4: c8420a39  strb w8, [x22, #0x290]
0x0668F6D8: a00240f9  ldr x0, [x21]
0x0668F6DC: 953240f9  ldr x21, [x20, #0x60]
0x0668F6E0: 08e040b9  ldr w8, [x0, #0xe0]
0x0668F6E4: 48000035  cbnz w8, #0x668f6ec
0x0668F6E8: 29c52b97  bl #0x3180b8c
0x0668F6EC: e00315aa  mov x0, x21
0x0668F6F0: e1031faa  mov x1, xzr
0x0668F6F4: e2031faa  mov x2, xzr
0x0668F6F8: 1f3d2194  bl #0x6edeb74
0x0668F6FC: 20010036  tbz w0, #0, #0x668f720
0x0668F700: 803240f9  ldr x0, [x20, #0x60]
0x0668F704: 600100b4  cbz x0, #0x668f730
0x0668F708: 61020012  and w1, w19, #1
0x0668F70C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668F710: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668F714: e2031faa  mov x2, xzr
0x0668F718: fe0743f8  ldr x30, [sp], #0x30
0x0668F71C: d43e2114  b #0x6edf26c
0x0668F720: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668F724: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668F728: fe0743f8  ldr x30, [sp], #0x30
0x0668F72C: c0035fd6  ret
0x0668F730: 5fc52b97  bl #0x3180cac

; RVA 0x668F734 | private void Start() { }
; bytes=44 sha256=e7b1ac5954126fd7f89d607d7b13c22481fb7b933949790b63a88cffdb99bde9 status=arm64_complete_bound indexed_start=True
0x0668F734: fe0f1ff8  str x30, [sp, #-0x10]!
0x0668F738: 003440f9  ldr x0, [x0, #0x68]
0x0668F73C: 000100b4  cbz x0, #0x668f75c
0x0668F740: e1031faa  mov x1, xzr
0x0668F744: e3312194  bl #0x6edbed0
0x0668F748: a00000b4  cbz x0, #0x668f75c
0x0668F74C: e1031f2a  mov w1, wzr
0x0668F750: e2031faa  mov x2, xzr
0x0668F754: fe0741f8  ldr x30, [sp], #0x10
0x0668F758: c53e2114  b #0x6edf26c
0x0668F75C: 54c52b97  bl #0x3180cac

; RVA 0x668F760 | protected override void GameStarted() { }
; bytes=260 sha256=fd5f6b02310d7d78b52497fda28fc514c03f259f3e4e5678691cc145cb1c4258 status=arm64_complete_bound indexed_start=True
0x0668F760: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0668F764: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668F768: d5b400b0  adrp x21, #0x7d28000
0x0668F76C: f47d00f0  adrp x20, #0x764e000
0x0668F770: a8464a39  ldrb w8, [x21, #0x291]
0x0668F774: 947242f9  ldr x20, [x20, #0x4e0]
0x0668F778: f30300aa  mov x19, x0
0x0668F77C: 48020037  tbnz w8, #0, #0x668f7c4
0x0668F780: 007f0090  adrp x0, #0x766f000
0x0668F784: 008c41f9  ldr x0, [x0, #0x318]
0x0668F788: a4c42b97  bl #0x3180a18
0x0668F78C: 007f00f0  adrp x0, #0x7672000
0x0668F790: 001044f9  ldr x0, [x0, #0x820]
0x0668F794: a1c42b97  bl #0x3180a18
0x0668F798: c08300d0  adrp x0, #0x7709000
0x0668F79C: 00d040f9  ldr x0, [x0, #0x1a0]
0x0668F7A0: 9ec42b97  bl #0x3180a18
0x0668F7A4: e07d00f0  adrp x0, #0x764e000
0x0668F7A8: 007042f9  ldr x0, [x0, #0x4e0]
0x0668F7AC: 9bc42b97  bl #0x3180a18
0x0668F7B0: c08300d0  adrp x0, #0x7709000
0x0668F7B4: 00cc40f9  ldr x0, [x0, #0x198]
0x0668F7B8: 98c42b97  bl #0x3180a18
0x0668F7BC: 28008052  movz w8, #0x1
0x0668F7C0: a8460a39  strb w8, [x21, #0x291]
0x0668F7C4: 800240f9  ldr x0, [x20]
0x0668F7C8: 743240f9  ldr x20, [x19, #0x60]
0x0668F7CC: 08e040b9  ldr w8, [x0, #0xe0]
0x0668F7D0: 48000035  cbnz w8, #0x668f7d8
0x0668F7D4: eec42b97  bl #0x3180b8c
0x0668F7D8: e00314aa  mov x0, x20
0x0668F7DC: e1031faa  mov x1, xzr
0x0668F7E0: e2031faa  mov x2, xzr
0x0668F7E4: e43c2194  bl #0x6edeb74
0x0668F7E8: 60030036  tbz w0, #0, #0x668f854
0x0668F7EC: 601640f9  ldr x0, [x19, #0x28]
0x0668F7F0: 800300b4  cbz x0, #0x668f860
0x0668F7F4: e1031faa  mov x1, xzr
0x0668F7F8: 4651fe97  bl #0x6623d10
0x0668F7FC: 087f0090  adrp x8, #0x766f000
0x0668F800: 088d41f9  ldr x8, [x8, #0x318]
0x0668F804: f40300aa  mov x20, x0
0x0668F808: 080140f9  ldr x8, [x8]
0x0668F80C: e00308aa  mov x0, x8
0x0668F810: 24c52b97  bl #0x3180ca0
0x0668F814: c88300d0  adrp x8, #0x7709000
0x0668F818: 08d140f9  ldr x8, [x8, #0x1a0]
0x0668F81C: e10313aa  mov x1, x19
0x0668F820: e3031faa  mov x3, xzr
0x0668F824: f50300aa  mov x21, x0
0x0668F828: 020140f9  ldr x2, [x8]
0x0668F82C: 3c3ab297  bl #0x531e11c
0x0668F830: 940100b4  cbz x20, #0x668f860
0x0668F834: 087f00f0  adrp x8, #0x7672000
0x0668F838: 081144f9  ldr x8, [x8, #0x820]
0x0668F83C: e00314aa  mov x0, x20
0x0668F840: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668F844: e10315aa  mov x1, x21
0x0668F848: 020140f9  ldr x2, [x8]
0x0668F84C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0668F850: 0efa9517  b #0x4c0e088
0x0668F854: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668F858: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0668F85C: c0035fd6  ret
0x0668F860: 13c52b97  bl #0x3180cac

; RVA 0x668F864 | private void Update() { }
; bytes=132 sha256=ae124e8efa47df81d39fe8b804db250919e928d1750b55c526b8a143740a33ba status=arm64_complete_bound indexed_start=True
0x0668F864: e80f1dfc  str d8, [sp, #-0x30]!
0x0668F868: fe5701a9  stp x30, x21, [sp, #0x10]
0x0668F86C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0668F870: d4b400b0  adrp x20, #0x7d28000
0x0668F874: d58300d0  adrp x21, #0x7709000
0x0668F878: 884a4a39  ldrb w8, [x20, #0x292]
0x0668F87C: b5ca40f9  ldr x21, [x21, #0x190]
0x0668F880: f30300aa  mov x19, x0
0x0668F884: c8000037  tbnz w8, #0, #0x668f89c
0x0668F888: c08300d0  adrp x0, #0x7709000
0x0668F88C: 00c840f9  ldr x0, [x0, #0x190]
0x0668F890: 62c42b97  bl #0x3180a18
0x0668F894: 28008052  movz w8, #0x1
0x0668F898: 884a0a39  strb w8, [x20, #0x292]
0x0668F89C: a10240f9  ldr x1, [x21]
0x0668F8A0: e00313aa  mov x0, x19
0x0668F8A4: a668af97  bl #0x5269b3c
0x0668F8A8: 80010036  tbz w0, #0, #0x668f8d8
0x0668F8AC: 687640bd  ldr s8, [x19, #0x74]
0x0668F8B0: e0031faa  mov x0, xzr
0x0668F8B4: 971a2194  bl #0x6ed6310
0x0668F8B8: 617240bd  ldr s1, [x19, #0x70]
0x0668F8BC: 0029201e  fadd s0, s8, s0
0x0668F8C0: 607600bd  str s0, [x19, #0x74]
0x0668F8C4: 0020211e  fcmp s0, s1
0x0668F8C8: 8b000054  b.lt #0x668f8d8
0x0668F8CC: e00313aa  mov x0, x19
0x0668F8D0: 06000094  bl #0x668f8e8
0x0668F8D4: 7f7600b9  str wzr, [x19, #0x74]
0x0668F8D8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668F8DC: fe5741a9  ldp x30, x21, [sp, #0x10]
0x0668F8E0: e80743fc  ldr d8, [sp], #0x30
0x0668F8E4: c0035fd6  ret

; RVA 0x668F9A0 | public void StartInventoryButtonHinting() { }
; bytes=224 sha256=8f901df144004cd94e11fd9bf118713586430345c08436be5ba54a278a433a59 status=arm64_complete_bound indexed_start=True
0x0668F9A0: fe0f1df8  str x30, [sp, #-0x30]!
0x0668F9A4: f65701a9  stp x22, x21, [sp, #0x10]
0x0668F9A8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0668F9AC: d3b400b0  adrp x19, #0x7d28000
0x0668F9B0: 684e4a39  ldrb w8, [x19, #0x293]
0x0668F9B4: f50300aa  mov x21, x0
0x0668F9B8: 28010037  tbnz w8, #0, #0x668f9dc
0x0668F9BC: c08300d0  adrp x0, #0x7709000
0x0668F9C0: 00d440f9  ldr x0, [x0, #0x1a8]
0x0668F9C4: 15c42b97  bl #0x3180a18
0x0668F9C8: c08300d0  adrp x0, #0x7709000
0x0668F9CC: 00d840f9  ldr x0, [x0, #0x1b0]
0x0668F9D0: 12c42b97  bl #0x3180a18
0x0668F9D4: 28008052  movz w8, #0x1
0x0668F9D8: 684e0a39  strb w8, [x19, #0x293]
0x0668F9DC: f40315aa  mov x20, x21
0x0668F9E0: 888e47f8  ldr x8, [x20, #0x78]!
0x0668F9E4: 880000b5  cbnz x8, #0x668f9f4
0x0668F9E8: f30315aa  mov x19, x21
0x0668F9EC: 680e48f8  ldr x8, [x19, #0x80]!
0x0668F9F0: a80000b4  cbz x8, #0x668fa04
0x0668F9F4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668F9F8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668F9FC: fe0743f8  ldr x30, [sp], #0x30
0x0668FA00: c0035fd6  ret
0x0668FA04: 36b40090  adrp x22, #0x7d13000
0x0668FA08: c8725b39  ldrb w8, [x22, #0x6dc]
0x0668FA0C: b51e40f9  ldr x21, [x21, #0x38]
0x0668FA10: c8000035  cbnz w8, #0x668fa28
0x0668FA14: 007e00b0  adrp x0, #0x7650000
0x0668FA18: 007440f9  ldr x0, [x0, #0xe8]
0x0668FA1C: ffc32b97  bl #0x3180a18
0x0668FA20: 28008052  movz w8, #0x1
0x0668FA24: c8721b39  strb w8, [x22, #0x6dc]
0x0668FA28: 087e00b0  adrp x8, #0x7650000
0x0668FA2C: 087540f9  ldr x8, [x8, #0xe8]
0x0668FA30: e00315aa  mov x0, x21
0x0668FA34: e1031faa  mov x1, xzr
0x0668FA38: 080140f9  ldr x8, [x8]
0x0668FA3C: 085d40f9  ldr x8, [x8, #0xb8]
0x0668FA40: 0005402d  ldp s0, s1, [x8]
0x0668FA44: a09c0094  bl #0x66b6cc4
0x0668FA48: a00100b4  cbz x0, #0x668fa7c
0x0668FA4C: 010840f9  ldr x1, [x0, #0x10]
0x0668FA50: f50300aa  mov x21, x0
0x0668FA54: e00314aa  mov x0, x20
0x0668FA58: 810200f9  str x1, [x20]
0x0668FA5C: dac32b97  bl #0x31809c4
0x0668FA60: a10e40f9  ldr x1, [x21, #0x18]
0x0668FA64: e00313aa  mov x0, x19
0x0668FA68: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668FA6C: 610200f9  str x1, [x19]
0x0668FA70: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668FA74: fe0743f8  ldr x30, [sp], #0x30
0x0668FA78: d3c32b17  b #0x31809c4
0x0668FA7C: 8cc42b97  bl #0x3180cac

; RVA 0x668FA80 | public void StopInventoryButtonHinting() { }
; bytes=216 sha256=5a6bf5be7242561d74ffc81b1262e72fd08fbcd7e7c08fc85782821f8f863d5a status=arm64_complete_bound indexed_start=True
0x0668FA80: fe0f1ef8  str x30, [sp, #-0x20]!
0x0668FA84: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668FA88: f40300aa  mov x20, x0
0x0668FA8C: f30300aa  mov x19, x0
0x0668FA90: 808e47f8  ldr x0, [x20, #0x78]!
0x0668FA94: 600000b5  cbnz x0, #0x668faa0
0x0668FA98: 684240f9  ldr x8, [x19, #0x80]
0x0668FA9C: 680500b4  cbz x8, #0x668fb48
0x0668FAA0: e1031faa  mov x1, xzr
0x0668FAA4: 427b4597  bl #0x37ee7ac
0x0668FAA8: 603e40f9  ldr x0, [x19, #0x78]
0x0668FAAC: e1031f2a  mov w1, wzr
0x0668FAB0: e2031faa  mov x2, xzr
0x0668FAB4: d07c4597  bl #0x37eedf4
0x0668FAB8: e00314aa  mov x0, x20
0x0668FABC: e1031faa  mov x1, xzr
0x0668FAC0: 7f3e00f9  str xzr, [x19, #0x78]
0x0668FAC4: c0c32b97  bl #0x31809c4
0x0668FAC8: 600e48f8  ldr x0, [x19, #0x80]!
0x0668FACC: e1031faa  mov x1, xzr
0x0668FAD0: 377b4597  bl #0x37ee7ac
0x0668FAD4: 600240f9  ldr x0, [x19]
0x0668FAD8: e1031f2a  mov w1, wzr
0x0668FADC: e2031faa  mov x2, xzr
0x0668FAE0: c57c4597  bl #0x37eedf4
0x0668FAE4: e00313aa  mov x0, x19
0x0668FAE8: e1031faa  mov x1, xzr
0x0668FAEC: 7f0200f9  str xzr, [x19]
0x0668FAF0: b5c32b97  bl #0x31809c4
0x0668FAF4: 34b400f0  adrp x20, #0x7d16000
0x0668FAF8: 88a64039  ldrb w8, [x20, #0x29]
0x0668FAFC: 73825bf8  ldur x19, [x19, #-0x48]
0x0668FB00: c8000035  cbnz w8, #0x668fb18
0x0668FB04: 007e0090  adrp x0, #0x764f000
0x0668FB08: 00b046f9  ldr x0, [x0, #0xd60]
0x0668FB0C: c3c32b97  bl #0x3180a18
0x0668FB10: 28008052  movz w8, #0x1
0x0668FB14: 88a60039  strb w8, [x20, #0x29]
0x0668FB18: f30100b4  cbz x19, #0x668fb54
0x0668FB1C: 087e0090  adrp x8, #0x764f000
0x0668FB20: 08b146f9  ldr x8, [x8, #0xd60]
0x0668FB24: e00313aa  mov x0, x19
0x0668FB28: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668FB2C: e1031faa  mov x1, xzr
0x0668FB30: 080140f9  ldr x8, [x8]
0x0668FB34: 085d40f9  ldr x8, [x8, #0xb8]
0x0668FB38: 0109422d  ldp s1, s2, [x8, #0x10]
0x0668FB3C: 000d40bd  ldr s0, [x8, #0xc]
0x0668FB40: fe0742f8  ldr x30, [sp], #0x20
0x0668FB44: 416e2114  b #0x6eeb448
0x0668FB48: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668FB4C: fe0742f8  ldr x30, [sp], #0x20
0x0668FB50: c0035fd6  ret
0x0668FB54: 56c42b97  bl #0x3180cac

; RVA 0x668FB58 | public void DropItemOnInventory(BoardItemPosition boardItemPosition) { }
; bytes=28 sha256=1e84e88d97b4cee8c6bf83df61168785cd7aa566a16dd3a00b0185968f6416e7 status=arm64_complete_bound indexed_start=True
0x0668FB58: 081840f9  ldr x8, [x0, #0x30]
0x0668FB5C: a80000b4  cbz x8, #0x668fb70
0x0668FB60: 030d40f9  ldr x3, [x8, #0x18]
0x0668FB64: 002140f9  ldr x0, [x8, #0x40]
0x0668FB68: 021540f9  ldr x2, [x8, #0x28]
0x0668FB6C: 60001fd6  br x3
0x0668FB70: c0035fd6  ret

; RVA 0x668FB74 | public void DisableUI() { }
; bytes=56 sha256=3ba4b1b8bd4ec843f8c4aecae05ecc717d20fbbefbe9f8d0377283911a8d9190 status=arm64_complete_bound indexed_start=True
0x0668FB74: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0668FB78: f30300aa  mov x19, x0
0x0668FB7C: 002440f9  ldr x0, [x0, #0x48]
0x0668FB80: 400100b4  cbz x0, #0x668fba8
0x0668FB84: e1031f2a  mov w1, wzr
0x0668FB88: e2031faa  mov x2, xzr
0x0668FB8C: 2a860094  bl #0x66b1434
0x0668FB90: 602a40f9  ldr x0, [x19, #0x50]
0x0668FB94: a00000b4  cbz x0, #0x668fba8
0x0668FB98: e1031f2a  mov w1, wzr
0x0668FB9C: e2031faa  mov x2, xzr
0x0668FBA0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0668FBA4: 08a90814  b #0x68b9fc4
0x0668FBA8: 41c42b97  bl #0x3180cac

; RVA 0x668FBAC | public void EnableUI() { }
; bytes=56 sha256=1c5e7c27023fedf50f02c9b411f95d8cf197070e10333fbc04ad720a545d2d08 status=arm64_complete_bound indexed_start=True
0x0668FBAC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0668FBB0: f30300aa  mov x19, x0
0x0668FBB4: 002440f9  ldr x0, [x0, #0x48]
0x0668FBB8: 400100b4  cbz x0, #0x668fbe0
0x0668FBBC: 21008052  movz w1, #0x1
0x0668FBC0: e2031faa  mov x2, xzr
0x0668FBC4: 1c860094  bl #0x66b1434
0x0668FBC8: 602a40f9  ldr x0, [x19, #0x50]
0x0668FBCC: a00000b4  cbz x0, #0x668fbe0
0x0668FBD0: 21008052  movz w1, #0x1
0x0668FBD4: e2031faa  mov x2, xzr
0x0668FBD8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0668FBDC: faa80814  b #0x68b9fc4
0x0668FBE0: 33c42b97  bl #0x3180cac

; RVA 0x668FBE4 | private void OnRewardIconArrived(RewardFlyIconAnimationFinishedSignal signal) { }
; bytes=548 sha256=d230bbce95c11e509d35521a870ad413877e9f10be630b33414e2dc8e6fbfb0f status=arm64_complete_bound indexed_start=True
0x0668FBE4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0668FBE8: f65701a9  stp x22, x21, [sp, #0x10]
0x0668FBEC: f44f02a9  stp x20, x19, [sp, #0x20]
0x0668FBF0: d5b400b0  adrp x21, #0x7d28000
0x0668FBF4: a8524a39  ldrb w8, [x21, #0x294]
0x0668FBF8: f40301aa  mov x20, x1
0x0668FBFC: f30300aa  mov x19, x0
0x0668FC00: 48020037  tbnz w8, #0, #0x668fc48
0x0668FC04: 20820090  adrp x0, #0x76d3000
0x0668FC08: 005844f9  ldr x0, [x0, #0x8b0]
0x0668FC0C: 83c32b97  bl #0x3180a18
0x0668FC10: 608200b0  adrp x0, #0x76dc000
0x0668FC14: 00b040f9  ldr x0, [x0, #0x160]
0x0668FC18: 80c32b97  bl #0x3180a18
0x0668FC1C: 007f00f0  adrp x0, #0x7672000
0x0668FC20: 00e843f9  ldr x0, [x0, #0x7d0]
0x0668FC24: 7dc32b97  bl #0x3180a18
0x0668FC28: e07d00f0  adrp x0, #0x764e000
0x0668FC2C: 007042f9  ldr x0, [x0, #0x4e0]
0x0668FC30: 7ac32b97  bl #0x3180a18
0x0668FC34: c08300d0  adrp x0, #0x7709000
0x0668FC38: 00cc40f9  ldr x0, [x0, #0x198]
0x0668FC3C: 77c32b97  bl #0x3180a18
0x0668FC40: 28008052  movz w8, #0x1
0x0668FC44: a8520a39  strb w8, [x21, #0x294]
0x0668FC48: f40d00b4  cbz x20, #0x668fe04
0x0668FC4C: 960a40f9  ldr x22, [x20, #0x10]
0x0668FC50: b60d00b4  cbz x22, #0x668fe04
0x0668FC54: 177f00f0  adrp x23, #0x7672000
0x0668FC58: c80240f9  ldr x8, [x22]
0x0668FC5C: f7ea43f9  ldr x23, [x23, #0x7d0]
0x0668FC60: 751640f9  ldr x21, [x19, #0x28]
0x0668FC64: 095d4279  ldrh w9, [x8, #0x12e]
0x0668FC68: e10240f9  ldr x1, [x23]
0x0668FC6C: 290100b4  cbz x9, #0x668fc90
0x0668FC70: 0a5940f9  ldr x10, [x8, #0xb0]
0x0668FC74: 4a210091  add x10, x10, #8
0x0668FC78: 4b815ff8  ldur x11, [x10, #-8]
0x0668FC7C: 7f0101eb  cmp x11, x1
0x0668FC80: 00010054  b.eq #0x668fca0
0x0668FC84: 290500f1  subs x9, x9, #1
0x0668FC88: 4a410091  add x10, x10, #0x10
0x0668FC8C: 61ffff54  b.ne #0x668fc78
0x0668FC90: e2008052  movz w2, #0x7
0x0668FC94: e00316aa  mov x0, x22
0x0668FC98: 9e1b2b97  bl #0x3156b10
0x0668FC9C: 05000014  b #0x668fcb0
0x0668FCA0: 490140b9  ldr w9, [x10]
0x0668FCA4: 291d0011  add w9, w9, #7
0x0668FCA8: 08d1298b  add x8, x8, w9, sxtw #4
0x0668FCAC: 00e10491  add x0, x8, #0x138
0x0668FCB0: 080440a9  ldp x8, x1, [x0]
0x0668FCB4: e00316aa  mov x0, x22
0x0668FCB8: 00013fd6  blr x8
0x0668FCBC: 550a00b4  cbz x21, #0x668fe04
0x0668FCC0: e103002a  mov w1, w0
0x0668FCC4: e00315aa  mov x0, x21
0x0668FCC8: e2031faa  mov x2, xzr
0x0668FCCC: 900cea97  bl #0x6112f0c
0x0668FCD0: 20090036  tbz w0, #0, #0x668fdf4
0x0668FCD4: 940a40f9  ldr x20, [x20, #0x10]
0x0668FCD8: 740900b4  cbz x20, #0x668fe04
0x0668FCDC: 880240f9  ldr x8, [x20]
0x0668FCE0: e10240f9  ldr x1, [x23]
0x0668FCE4: 095d4279  ldrh w9, [x8, #0x12e]
0x0668FCE8: 290100b4  cbz x9, #0x668fd0c
0x0668FCEC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0668FCF0: 4a210091  add x10, x10, #8
0x0668FCF4: 4b815ff8  ldur x11, [x10, #-8]
0x0668FCF8: 7f0101eb  cmp x11, x1
0x0668FCFC: 00010054  b.eq #0x668fd1c
0x0668FD00: 290500f1  subs x9, x9, #1
0x0668FD04: 4a410091  add x10, x10, #0x10
0x0668FD08: 61ffff54  b.ne #0x668fcf4
0x0668FD0C: e00314aa  mov x0, x20
0x0668FD10: e2031f2a  mov w2, wzr
0x0668FD14: 7f1b2b97  bl #0x3156b10
0x0668FD18: 04000014  b #0x668fd28
0x0668FD1C: 490180b9  ldrsw x9, [x10]
0x0668FD20: 0811098b  add x8, x8, x9, lsl #4
0x0668FD24: 00e10491  add x0, x8, #0x138
0x0668FD28: 080440a9  ldp x8, x1, [x0]
0x0668FD2C: e00314aa  mov x0, x20
0x0668FD30: 00013fd6  blr x8
0x0668FD34: 000600b4  cbz x0, #0x668fdf4
0x0668FD38: 688200b0  adrp x8, #0x76dc000
0x0668FD3C: 08b140f9  ldr x8, [x8, #0x160]
0x0668FD40: 090040f9  ldr x9, [x0]
0x0668FD44: 080140f9  ldr x8, [x8]
0x0668FD48: 2bc14439  ldrb w11, [x9, #0x130]
0x0668FD4C: 0ac14439  ldrb w10, [x8, #0x130]
0x0668FD50: 7f010a6b  cmp w11, w10
0x0668FD54: 03050054  b.lo #0x668fdf4
0x0668FD58: 296540f9  ldr x9, [x9, #0xc8]
0x0668FD5C: 290d0a8b  add x9, x9, x10, lsl #3
0x0668FD60: 29815ff8  ldur x9, [x9, #-8]
0x0668FD64: 3f0108eb  cmp x9, x8
0x0668FD68: 61040054  b.ne #0x668fdf4
0x0668FD6C: e87d00f0  adrp x8, #0x764e000
0x0668FD70: 087142f9  ldr x8, [x8, #0x4e0]
0x0668FD74: 742e40f9  ldr x20, [x19, #0x58]
0x0668FD78: 000140f9  ldr x0, [x8]
0x0668FD7C: 08e040b9  ldr w8, [x0, #0xe0]
0x0668FD80: 48000035  cbnz w8, #0x668fd88
0x0668FD84: 82c32b97  bl #0x3180b8c
0x0668FD88: e00314aa  mov x0, x20
0x0668FD8C: e1031faa  mov x1, xzr
0x0668FD90: e2031faa  mov x2, xzr
0x0668FD94: 783b2194  bl #0x6edeb74
0x0668FD98: e0020036  tbz w0, #0, #0x668fdf4
0x0668FD9C: 602e40f9  ldr x0, [x19, #0x58]
0x0668FDA0: 200300b4  cbz x0, #0x668fe04
0x0668FDA4: e1031faa  mov x1, xzr
0x0668FDA8: 8f2d2194  bl #0x6edb3e4
0x0668FDAC: 40020036  tbz w0, #0, #0x668fdf4
0x0668FDB0: 34820090  adrp x20, #0x76d3000
0x0668FDB4: 945a44f9  ldr x20, [x20, #0x8b0]
0x0668FDB8: 732e40f9  ldr x19, [x19, #0x58]
0x0668FDBC: 800240f9  ldr x0, [x20]
0x0668FDC0: 08e040b9  ldr w8, [x0, #0xe0]
0x0668FDC4: 48000035  cbnz w8, #0x668fdcc
0x0668FDC8: 71c32b97  bl #0x3180b8c
0x0668FDCC: d30100b4  cbz x19, #0x668fe04
0x0668FDD0: 880240f9  ldr x8, [x20]
0x0668FDD4: e00313aa  mov x0, x19
0x0668FDD8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668FDDC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668FDE0: 085d40f9  ldr x8, [x8, #0xb8]
0x0668FDE4: e2031faa  mov x2, xzr
0x0668FDE8: 010140b9  ldr w1, [x8]
0x0668FDEC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0668FDF0: 790a2014  b #0x6e927d4
0x0668FDF4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668FDF8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668FDFC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0668FE00: c0035fd6  ret
0x0668FE04: aac32b97  bl #0x3180cac

; RVA 0x668F8E8 | private void CheckShowMetaButtonTutorial() { }
; bytes=184 sha256=e21ef20c5cf559a7d86832bd86562315eeaa4e04d42edb381982de7b0292aa2d status=arm64_complete_bound indexed_start=True
0x0668F8E8: fe0f1ef8  str x30, [sp, #-0x20]!
0x0668F8EC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668F8F0: d4b400b0  adrp x20, #0x7d28000
0x0668F8F4: 88564a39  ldrb w8, [x20, #0x295]
0x0668F8F8: f30300aa  mov x19, x0
0x0668F8FC: c8000037  tbnz w8, #0, #0x668f914
0x0668F900: c08300d0  adrp x0, #0x7709000
0x0668F904: 00cc40f9  ldr x0, [x0, #0x198]
0x0668F908: 44c42b97  bl #0x3180a18
0x0668F90C: 28008052  movz w8, #0x1
0x0668F910: 88560a39  strb w8, [x20, #0x295]
0x0668F914: 602240f9  ldr x0, [x19, #0x40]
0x0668F918: 200400b4  cbz x0, #0x668f99c
0x0668F91C: e1031faa  mov x1, xzr
0x0668F920: 6c312194  bl #0x6edbed0
0x0668F924: c00300b4  cbz x0, #0x668f99c
0x0668F928: e1031faa  mov x1, xzr
0x0668F92C: 613e2194  bl #0x6edf2b0
0x0668F930: 00030036  tbz w0, #0, #0x668f990
0x0668F934: 603640f9  ldr x0, [x19, #0x68]
0x0668F938: 200300b4  cbz x0, #0x668f99c
0x0668F93C: e1031faa  mov x1, xzr
0x0668F940: 64312194  bl #0x6edbed0
0x0668F944: c00200b4  cbz x0, #0x668f99c
0x0668F948: e1031faa  mov x1, xzr
0x0668F94C: 593e2194  bl #0x6edf2b0
0x0668F950: 00020037  tbnz w0, #0, #0x668f990
0x0668F954: 601640f9  ldr x0, [x19, #0x28]
0x0668F958: 200200b4  cbz x0, #0x668f99c
0x0668F95C: e1031faa  mov x1, xzr
0x0668F960: f550fe97  bl #0x6623d34
0x0668F964: 60010036  tbz w0, #0, #0x668f990
0x0668F968: 603640f9  ldr x0, [x19, #0x68]
0x0668F96C: 800100b4  cbz x0, #0x668f99c
0x0668F970: e1031faa  mov x1, xzr
0x0668F974: 57312194  bl #0x6edbed0
0x0668F978: 200100b4  cbz x0, #0x668f99c
0x0668F97C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668F980: 21008052  movz w1, #0x1
0x0668F984: e2031faa  mov x2, xzr
0x0668F988: fe0742f8  ldr x30, [sp], #0x20
0x0668F98C: 383e2114  b #0x6edf26c
0x0668F990: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668F994: fe0742f8  ldr x30, [sp], #0x20
0x0668F998: c0035fd6  ret
0x0668F99C: c4c42b97  bl #0x3180cac

; RVA 0x668FE08 | private void CheckStopMetaButtonTutorial() { }
; bytes=88 sha256=e567b2111b69aed9707863fd05ead3080af69d622042e15201511e59273d014e status=arm64_complete_bound indexed_start=True
0x0668FE08: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0668FE0C: f30300aa  mov x19, x0
0x0668FE10: 003440f9  ldr x0, [x0, #0x68]
0x0668FE14: 400200b4  cbz x0, #0x668fe5c
0x0668FE18: e1031faa  mov x1, xzr
0x0668FE1C: 2d302194  bl #0x6edbed0
0x0668FE20: e00100b4  cbz x0, #0x668fe5c
0x0668FE24: e1031faa  mov x1, xzr
0x0668FE28: 223d2194  bl #0x6edf2b0
0x0668FE2C: 40010036  tbz w0, #0, #0x668fe54
0x0668FE30: 603640f9  ldr x0, [x19, #0x68]
0x0668FE34: 400100b4  cbz x0, #0x668fe5c
0x0668FE38: e1031faa  mov x1, xzr
0x0668FE3C: 25302194  bl #0x6edbed0
0x0668FE40: e00000b4  cbz x0, #0x668fe5c
0x0668FE44: e1031f2a  mov w1, wzr
0x0668FE48: e2031faa  mov x2, xzr
0x0668FE4C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0668FE50: 073d2114  b #0x6edf26c
0x0668FE54: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0668FE58: c0035fd6  ret
0x0668FE5C: 94c32b97  bl #0x3180cac

; RVA 0x668FE60 | private void Framework.UIFSM.Fsm.IEnterStateHandler.HandleEnterState() { }
; bytes=8 sha256=168190d303c181967616841612cc2dd1d8c21c799b7667fbcaff380e7daa178d status=arm64_complete_bound indexed_start=True
0x0668FE60: 1f7400b9  str wzr, [x0, #0x74]
0x0668FE64: c0035fd6  ret

; RVA 0x668FE68 | private void Framework.UIFSM.Fsm.IExitStateHandler.HandleExitState() { }
; bytes=8 sha256=4711d5ee175a89b217cd9025bf75b6669812dd5cdbc35764ef12b6b1366e71a4 status=arm64_complete_bound indexed_start=True
0x0668FE68: 1f7400b9  str wzr, [x0, #0x74]
0x0668FE6C: e7ffff17  b #0x668fe08

; RVA 0x668FE70 | public void .ctor() { }
; bytes=80 sha256=79d677354ea841c1cd605eb26c702d5d698b2f9164e17c38b7eff87ce39dccb8 status=arm64_complete_bound indexed_start=True
0x0668FE70: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0668FE74: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668FE78: d5b400b0  adrp x21, #0x7d28000
0x0668FE7C: d48300d0  adrp x20, #0x7709000
0x0668FE80: a85a4a39  ldrb w8, [x21, #0x296]
0x0668FE84: 94de40f9  ldr x20, [x20, #0x1b8]
0x0668FE88: f30300aa  mov x19, x0
0x0668FE8C: c8000037  tbnz w8, #0, #0x668fea4
0x0668FE90: c08300d0  adrp x0, #0x7709000
0x0668FE94: 00dc40f9  ldr x0, [x0, #0x1b8]
0x0668FE98: e0c22b97  bl #0x3180a18
0x0668FE9C: 28008052  movz w8, #0x1
0x0668FEA0: a85a0a39  strb w8, [x21, #0x296]
0x0668FEA4: 0808a852  movz w8, #0x4040, lsl #16
0x0668FEA8: 687200b9  str w8, [x19, #0x70]
0x0668FEAC: 810240f9  ldr x1, [x20]
0x0668FEB0: e00313aa  mov x0, x19
0x0668FEB4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668FEB8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0668FEBC: d767af17  b #0x5269e18

; RVA 0x668FEC0 | private static void .cctor() { }
; bytes=104 sha256=940cf1f6aa83b56904b493b15c37b892fd65f8bbc7e75d80d79e500fae079ea2 status=arm64_complete_bound indexed_start=True
0x0668FEC0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0668FEC4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668FEC8: d4b400b0  adrp x20, #0x7d28000
0x0668FECC: d58300d0  adrp x21, #0x7709000
0x0668FED0: 33820090  adrp x19, #0x76d3000
0x0668FED4: 885e4a39  ldrb w8, [x20, #0x297]
0x0668FED8: b5e240f9  ldr x21, [x21, #0x1c0]
0x0668FEDC: 735a44f9  ldr x19, [x19, #0x8b0]
0x0668FEE0: 28010037  tbnz w8, #0, #0x668ff04
0x0668FEE4: 20820090  adrp x0, #0x76d3000
0x0668FEE8: 005844f9  ldr x0, [x0, #0x8b0]
0x0668FEEC: cbc22b97  bl #0x3180a18
0x0668FEF0: c08300d0  adrp x0, #0x7709000
0x0668FEF4: 00e040f9  ldr x0, [x0, #0x1c0]
0x0668FEF8: c8c22b97  bl #0x3180a18
0x0668FEFC: 28008052  movz w8, #0x1
0x0668FF00: 885e0a39  strb w8, [x20, #0x297]
0x0668FF04: a00240f9  ldr x0, [x21]
0x0668FF08: e1031faa  mov x1, xzr
0x0668FF0C: 69072094  bl #0x6e91cb0
0x0668FF10: 680240f9  ldr x8, [x19]
0x0668FF14: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668FF18: 085d40f9  ldr x8, [x8, #0xb8]
0x0668FF1C: 000100b9  str w0, [x8]
0x0668FF20: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0668FF24: c0035fd6  ret

; RVA 0x668FF28 | private GameObject Framework.Core.View.IViewComponent.get_gameObject() { }
; bytes=8 sha256=f98900d5499f65d9b7b1614d49a149f63d89be094b2c4d3b05d1d8408590f7ff status=arm64_complete_bound indexed_start=True
0x0668FF28: e1031faa  mov x1, xzr
0x0668FF2C: e92f2114  b #0x6edbed0

