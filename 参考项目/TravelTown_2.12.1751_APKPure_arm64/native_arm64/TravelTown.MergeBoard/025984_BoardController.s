; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25984 Merger.MergeBoard.Controller.BoardController
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9AEFC | public bool get_IsPaused() { }
; bytes=8 sha256=6a4f1a962f868613e6936806601aa97f462be4272d6039e73d901c7f9868c768 status=arm64_complete_bound indexed_start=True
0x06A9AEFC: 00004139  ldrb w0, [x0, #0x40]
0x06A9AF00: c0035fd6  ret

; RVA 0x6A9AF04 | private void set_IsPaused(bool value) { }
; bytes=12 sha256=501d7d5905288072269f6b4c4b92bbb856126869e31af66d1d507a7ad60889a3 status=arm64_complete_bound indexed_start=True
0x06A9AF04: 28000012  and w8, w1, #1
0x06A9AF08: 08000139  strb w8, [x0, #0x40]
0x06A9AF0C: c0035fd6  ret

; RVA 0x6A9AF10 | public void Initialize() { }
; bytes=4 sha256=788f1512f26f87f558ccda89030f23036527961be061f31e047ad5b93b8aafe2 status=arm64_complete_bound indexed_start=True
0x06A9AF10: 01000014  b #0x6a9af14

; RVA 0x6A9B47C | public void Pause() { }
; bytes=12 sha256=4dbd2283331b65122911f9a109d96f7f997f26ca833b8bdbb97e0746d32d04c7 status=arm64_complete_bound indexed_start=True
0x06A9B47C: 28008052  movz w8, #0x1
0x06A9B480: 08000139  strb w8, [x0, #0x40]
0x06A9B484: c0035fd6  ret

; RVA 0x6A9B488 | public void Resume() { }
; bytes=8 sha256=6e8d997bc2ceb1715af0a492814da1e27a12ebf4d916949c6ad40dc877463065 status=arm64_complete_bound indexed_start=True
0x06A9B488: 1f000139  strb wzr, [x0, #0x40]
0x06A9B48C: c0035fd6  ret

; RVA 0x6A9AF14 | private void InitializeSystems() { }
; bytes=1384 sha256=df15ecec9852d470f4b400243183ea3573cbd1a6f1a69582aa7e24914ec43638 status=arm64_complete_bound indexed_start=True
0x06A9AF14: ffc301d1  sub sp, sp, #0x70
0x06A9AF18: fd7b01a9  stp x29, x30, [sp, #0x10]
0x06A9AF1C: fc6f02a9  stp x28, x27, [sp, #0x20]
0x06A9AF20: fa6703a9  stp x26, x25, [sp, #0x30]
0x06A9AF24: f85f04a9  stp x24, x23, [sp, #0x40]
0x06A9AF28: f65705a9  stp x22, x21, [sp, #0x50]
0x06A9AF2C: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A9AF30: 94940090  adrp x20, #0x7d2a000
0x06A9AF34: da640090  adrp x26, #0x7732000
0x06A9AF38: d9640090  adrp x25, #0x7732000
0x06A9AF3C: d8640090  adrp x24, #0x7732000
0x06A9AF40: d7640090  adrp x23, #0x7732000
0x06A9AF44: d6640090  adrp x22, #0x7732000
0x06A9AF48: d5640090  adrp x21, #0x7732000
0x06A9AF4C: dd640090  adrp x29, #0x7732000
0x06A9AF50: dc640090  adrp x28, #0x7732000
0x06A9AF54: db640090  adrp x27, #0x7732000
0x06A9AF58: 5a2743f9  ldr x26, [x26, #0x648]
0x06A9AF5C: 392b43f9  ldr x25, [x25, #0x650]
0x06A9AF60: 182f43f9  ldr x24, [x24, #0x658]
0x06A9AF64: f73243f9  ldr x23, [x23, #0x660]
0x06A9AF68: d63643f9  ldr x22, [x22, #0x668]
0x06A9AF6C: b53a43f9  ldr x21, [x21, #0x670]
0x06A9AF70: bd3f43f9  ldr x29, [x29, #0x678]
0x06A9AF74: 9c4343f9  ldr x28, [x28, #0x680]
0x06A9AF78: 7b4743f9  ldr x27, [x27, #0x688]
0x06A9AF7C: 88e26039  ldrb w8, [x20, #0x838]
0x06A9AF80: f30300aa  mov x19, x0
0x06A9AF84: 280d0037  tbnz w8, #0, #0x6a9b128
0x06A9AF88: c0640090  adrp x0, #0x7732000
0x06A9AF8C: 004843f9  ldr x0, [x0, #0x690]
0x06A9AF90: a2961b97  bl #0x3180a18
0x06A9AF94: c0640090  adrp x0, #0x7732000
0x06A9AF98: 004c43f9  ldr x0, [x0, #0x698]
0x06A9AF9C: 9f961b97  bl #0x3180a18
0x06A9AFA0: c0640090  adrp x0, #0x7732000
0x06A9AFA4: 005043f9  ldr x0, [x0, #0x6a0]
0x06A9AFA8: 9c961b97  bl #0x3180a18
0x06A9AFAC: c0640090  adrp x0, #0x7732000
0x06A9AFB0: 005443f9  ldr x0, [x0, #0x6a8]
0x06A9AFB4: 99961b97  bl #0x3180a18
0x06A9AFB8: c0640090  adrp x0, #0x7732000
0x06A9AFBC: 005843f9  ldr x0, [x0, #0x6b0]
0x06A9AFC0: 96961b97  bl #0x3180a18
0x06A9AFC4: c0640090  adrp x0, #0x7732000
0x06A9AFC8: 005c43f9  ldr x0, [x0, #0x6b8]
0x06A9AFCC: 93961b97  bl #0x3180a18
0x06A9AFD0: c0640090  adrp x0, #0x7732000
0x06A9AFD4: 006043f9  ldr x0, [x0, #0x6c0]
0x06A9AFD8: 90961b97  bl #0x3180a18
0x06A9AFDC: c0640090  adrp x0, #0x7732000
0x06A9AFE0: 006443f9  ldr x0, [x0, #0x6c8]
0x06A9AFE4: 8d961b97  bl #0x3180a18
0x06A9AFE8: c0640090  adrp x0, #0x7732000
0x06A9AFEC: 006843f9  ldr x0, [x0, #0x6d0]
0x06A9AFF0: 8a961b97  bl #0x3180a18
0x06A9AFF4: c0640090  adrp x0, #0x7732000
0x06A9AFF8: 004043f9  ldr x0, [x0, #0x680]
0x06A9AFFC: 87961b97  bl #0x3180a18
0x06A9B000: a06400f0  adrp x0, #0x7732000
0x06A9B004: 006c43f9  ldr x0, [x0, #0x6d8]
0x06A9B008: 84961b97  bl #0x3180a18
0x06A9B00C: a06400f0  adrp x0, #0x7732000
0x06A9B010: 007043f9  ldr x0, [x0, #0x6e0]
0x06A9B014: 81961b97  bl #0x3180a18
0x06A9B018: a06400f0  adrp x0, #0x7732000
0x06A9B01C: 007443f9  ldr x0, [x0, #0x6e8]
0x06A9B020: 7e961b97  bl #0x3180a18
0x06A9B024: a06400f0  adrp x0, #0x7732000
0x06A9B028: 004443f9  ldr x0, [x0, #0x688]
0x06A9B02C: 7b961b97  bl #0x3180a18
0x06A9B030: a06400f0  adrp x0, #0x7732000
0x06A9B034: 007843f9  ldr x0, [x0, #0x6f0]
0x06A9B038: 78961b97  bl #0x3180a18
0x06A9B03C: a06400f0  adrp x0, #0x7732000
0x06A9B040: 002c43f9  ldr x0, [x0, #0x658]
0x06A9B044: 75961b97  bl #0x3180a18
0x06A9B048: a06400f0  adrp x0, #0x7732000
0x06A9B04C: 007c43f9  ldr x0, [x0, #0x6f8]
0x06A9B050: 72961b97  bl #0x3180a18
0x06A9B054: a06400f0  adrp x0, #0x7732000
0x06A9B058: 008043f9  ldr x0, [x0, #0x700]
0x06A9B05C: 6f961b97  bl #0x3180a18
0x06A9B060: a06400f0  adrp x0, #0x7732000
0x06A9B064: 008443f9  ldr x0, [x0, #0x708]
0x06A9B068: 6c961b97  bl #0x3180a18
0x06A9B06C: a06400f0  adrp x0, #0x7732000
0x06A9B070: 008843f9  ldr x0, [x0, #0x710]
0x06A9B074: 69961b97  bl #0x3180a18
0x06A9B078: a06400f0  adrp x0, #0x7732000
0x06A9B07C: 008c43f9  ldr x0, [x0, #0x718]
0x06A9B080: 66961b97  bl #0x3180a18
0x06A9B084: a06400f0  adrp x0, #0x7732000
0x06A9B088: 003c43f9  ldr x0, [x0, #0x678]
0x06A9B08C: 63961b97  bl #0x3180a18
0x06A9B090: a06400f0  adrp x0, #0x7732000
0x06A9B094: 003043f9  ldr x0, [x0, #0x660]
0x06A9B098: 60961b97  bl #0x3180a18
0x06A9B09C: a06400f0  adrp x0, #0x7732000
0x06A9B0A0: 009043f9  ldr x0, [x0, #0x720]
0x06A9B0A4: 5d961b97  bl #0x3180a18
0x06A9B0A8: a06400f0  adrp x0, #0x7732000
0x06A9B0AC: 009443f9  ldr x0, [x0, #0x728]
0x06A9B0B0: 5a961b97  bl #0x3180a18
0x06A9B0B4: a06400f0  adrp x0, #0x7732000
0x06A9B0B8: 009843f9  ldr x0, [x0, #0x730]
0x06A9B0BC: 57961b97  bl #0x3180a18
0x06A9B0C0: a06400f0  adrp x0, #0x7732000
0x06A9B0C4: 009c43f9  ldr x0, [x0, #0x738]
0x06A9B0C8: 54961b97  bl #0x3180a18
0x06A9B0CC: a06400f0  adrp x0, #0x7732000
0x06A9B0D0: 00a043f9  ldr x0, [x0, #0x740]
0x06A9B0D4: 51961b97  bl #0x3180a18
0x06A9B0D8: a06400f0  adrp x0, #0x7732000
0x06A9B0DC: 003843f9  ldr x0, [x0, #0x670]
0x06A9B0E0: 4e961b97  bl #0x3180a18
0x06A9B0E4: a06400f0  adrp x0, #0x7732000
0x06A9B0E8: 002843f9  ldr x0, [x0, #0x650]
0x06A9B0EC: 4b961b97  bl #0x3180a18
0x06A9B0F0: a06400f0  adrp x0, #0x7732000
0x06A9B0F4: 003443f9  ldr x0, [x0, #0x668]
0x06A9B0F8: 48961b97  bl #0x3180a18
0x06A9B0FC: a06400f0  adrp x0, #0x7732000
0x06A9B100: 00a443f9  ldr x0, [x0, #0x748]
0x06A9B104: 45961b97  bl #0x3180a18
0x06A9B108: a06400f0  adrp x0, #0x7732000
0x06A9B10C: 00a843f9  ldr x0, [x0, #0x750]
0x06A9B110: 42961b97  bl #0x3180a18
0x06A9B114: a06400f0  adrp x0, #0x7732000
0x06A9B118: 002443f9  ldr x0, [x0, #0x648]
0x06A9B11C: 3f961b97  bl #0x3180a18
0x06A9B120: 28008052  movz w8, #0x1
0x06A9B124: 88e22039  strb w8, [x20, #0x838]
0x06A9B128: 400340f9  ldr x0, [x26]
0x06A9B12C: dd961b97  bl #0x3180ca0
0x06A9B130: e1031faa  mov x1, xzr
0x06A9B134: f40300aa  mov x20, x0
0x06A9B138: 58e9d197  bl #0x5f15698
0x06A9B13C: 610a40f9  ldr x1, [x19, #0x10]
0x06A9B140: e00314aa  mov x0, x20
0x06A9B144: e2031faa  mov x2, xzr
0x06A9B148: 0a6dff97  bl #0x6a76570
0x06A9B14C: 280340f9  ldr x8, [x25]
0x06A9B150: e00700a9  stp x0, x1, [sp]
0x06A9B154: e0030091  mov x0, sp
0x06A9B158: e10308aa  mov x1, x8
0x06A9B15C: fcef4e97  bl #0x3e5714c
0x06A9B160: 010340f9  ldr x1, [x24]
0x06A9B164: e0030091  mov x0, sp
0x06A9B168: f9ef4e97  bl #0x3e5714c
0x06A9B16C: e10240f9  ldr x1, [x23]
0x06A9B170: e0030091  mov x0, sp
0x06A9B174: f6ef4e97  bl #0x3e5714c
0x06A9B178: c10240f9  ldr x1, [x22]
0x06A9B17C: e0030091  mov x0, sp
0x06A9B180: f3ef4e97  bl #0x3e5714c
0x06A9B184: a10240f9  ldr x1, [x21]
0x06A9B188: e0030091  mov x0, sp
0x06A9B18C: f0ef4e97  bl #0x3e5714c
0x06A9B190: a10340f9  ldr x1, [x29]
0x06A9B194: e0030091  mov x0, sp
0x06A9B198: edef4e97  bl #0x3e5714c
0x06A9B19C: 810340f9  ldr x1, [x28]
0x06A9B1A0: e0030091  mov x0, sp
0x06A9B1A4: eaef4e97  bl #0x3e5714c
0x06A9B1A8: 610340f9  ldr x1, [x27]
0x06A9B1AC: e0030091  mov x0, sp
0x06A9B1B0: e7ef4e97  bl #0x3e5714c
0x06A9B1B4: a86400f0  adrp x8, #0x7732000
0x06A9B1B8: 087d43f9  ldr x8, [x8, #0x6f8]
0x06A9B1BC: e0030091  mov x0, sp
0x06A9B1C0: 010140f9  ldr x1, [x8]
0x06A9B1C4: e2ef4e97  bl #0x3e5714c
0x06A9B1C8: a86400f0  adrp x8, #0x7732000
0x06A9B1CC: 085943f9  ldr x8, [x8, #0x6b0]
0x06A9B1D0: e0030091  mov x0, sp
0x06A9B1D4: 010140f9  ldr x1, [x8]
0x06A9B1D8: ddef4e97  bl #0x3e5714c
0x06A9B1DC: a86400f0  adrp x8, #0x7732000
0x06A9B1E0: 087143f9  ldr x8, [x8, #0x6e0]
0x06A9B1E4: e0030091  mov x0, sp
0x06A9B1E8: 010140f9  ldr x1, [x8]
0x06A9B1EC: d8ef4e97  bl #0x3e5714c
0x06A9B1F0: a86400f0  adrp x8, #0x7732000
0x06A9B1F4: 085143f9  ldr x8, [x8, #0x6a0]
0x06A9B1F8: e0030091  mov x0, sp
0x06A9B1FC: 010140f9  ldr x1, [x8]
0x06A9B200: d3ef4e97  bl #0x3e5714c
0x06A9B204: a86400f0  adrp x8, #0x7732000
0x06A9B208: 089d43f9  ldr x8, [x8, #0x738]
0x06A9B20C: e0030091  mov x0, sp
0x06A9B210: 010140f9  ldr x1, [x8]
0x06A9B214: ceef4e97  bl #0x3e5714c
0x06A9B218: a86400f0  adrp x8, #0x7732000
0x06A9B21C: 084d43f9  ldr x8, [x8, #0x698]
0x06A9B220: e0030091  mov x0, sp
0x06A9B224: 010140f9  ldr x1, [x8]
0x06A9B228: c9ef4e97  bl #0x3e5714c
0x06A9B22C: a86400f0  adrp x8, #0x7732000
0x06A9B230: 088d43f9  ldr x8, [x8, #0x718]
0x06A9B234: e0030091  mov x0, sp
0x06A9B238: 010140f9  ldr x1, [x8]
0x06A9B23C: c4ef4e97  bl #0x3e5714c
0x06A9B240: a86400f0  adrp x8, #0x7732000
0x06A9B244: 089543f9  ldr x8, [x8, #0x728]
0x06A9B248: e0030091  mov x0, sp
0x06A9B24C: 010140f9  ldr x1, [x8]
0x06A9B250: bfef4e97  bl #0x3e5714c
0x06A9B254: a86400f0  adrp x8, #0x7732000
0x06A9B258: 08a543f9  ldr x8, [x8, #0x748]
0x06A9B25C: e0030091  mov x0, sp
0x06A9B260: 010140f9  ldr x1, [x8]
0x06A9B264: baef4e97  bl #0x3e5714c
0x06A9B268: a86400f0  adrp x8, #0x7732000
0x06A9B26C: 089143f9  ldr x8, [x8, #0x720]
0x06A9B270: e0030091  mov x0, sp
0x06A9B274: 010140f9  ldr x1, [x8]
0x06A9B278: b5ef4e97  bl #0x3e5714c
0x06A9B27C: a86400f0  adrp x8, #0x7732000
0x06A9B280: 089943f9  ldr x8, [x8, #0x730]
0x06A9B284: e0030091  mov x0, sp
0x06A9B288: 010140f9  ldr x1, [x8]
0x06A9B28C: b0ef4e97  bl #0x3e5714c
0x06A9B290: a86400f0  adrp x8, #0x7732000
0x06A9B294: 086143f9  ldr x8, [x8, #0x6c0]
0x06A9B298: e0030091  mov x0, sp
0x06A9B29C: 010140f9  ldr x1, [x8]
0x06A9B2A0: abef4e97  bl #0x3e5714c
0x06A9B2A4: a86400f0  adrp x8, #0x7732000
0x06A9B2A8: 085d43f9  ldr x8, [x8, #0x6b8]
0x06A9B2AC: e0030091  mov x0, sp
0x06A9B2B0: 010140f9  ldr x1, [x8]
0x06A9B2B4: a6ef4e97  bl #0x3e5714c
0x06A9B2B8: a86400f0  adrp x8, #0x7732000
0x06A9B2BC: 08a943f9  ldr x8, [x8, #0x750]
0x06A9B2C0: e0030091  mov x0, sp
0x06A9B2C4: 010140f9  ldr x1, [x8]
0x06A9B2C8: a1ef4e97  bl #0x3e5714c
0x06A9B2CC: a86400f0  adrp x8, #0x7732000
0x06A9B2D0: 086543f9  ldr x8, [x8, #0x6c8]
0x06A9B2D4: e0030091  mov x0, sp
0x06A9B2D8: 010140f9  ldr x1, [x8]
0x06A9B2DC: 9cef4e97  bl #0x3e5714c
0x06A9B2E0: a86400f0  adrp x8, #0x7732000
0x06A9B2E4: 087543f9  ldr x8, [x8, #0x6e8]
0x06A9B2E8: e0030091  mov x0, sp
0x06A9B2EC: 010140f9  ldr x1, [x8]
0x06A9B2F0: 97ef4e97  bl #0x3e5714c
0x06A9B2F4: a86400f0  adrp x8, #0x7732000
0x06A9B2F8: 08a143f9  ldr x8, [x8, #0x740]
0x06A9B2FC: e0030091  mov x0, sp
0x06A9B300: 010140f9  ldr x1, [x8]
0x06A9B304: 92ef4e97  bl #0x3e5714c
0x06A9B308: a86400f0  adrp x8, #0x7732000
0x06A9B30C: 088143f9  ldr x8, [x8, #0x700]
0x06A9B310: e0030091  mov x0, sp
0x06A9B314: 010140f9  ldr x1, [x8]
0x06A9B318: 8def4e97  bl #0x3e5714c
0x06A9B31C: a86400f0  adrp x8, #0x7732000
0x06A9B320: 088543f9  ldr x8, [x8, #0x708]
0x06A9B324: e0030091  mov x0, sp
0x06A9B328: 010140f9  ldr x1, [x8]
0x06A9B32C: 88ef4e97  bl #0x3e5714c
0x06A9B330: a86400f0  adrp x8, #0x7732000
0x06A9B334: 086943f9  ldr x8, [x8, #0x6d0]
0x06A9B338: e0030091  mov x0, sp
0x06A9B33C: 010140f9  ldr x1, [x8]
0x06A9B340: 83ef4e97  bl #0x3e5714c
0x06A9B344: a86400f0  adrp x8, #0x7732000
0x06A9B348: 086d43f9  ldr x8, [x8, #0x6d8]
0x06A9B34C: e0030091  mov x0, sp
0x06A9B350: 010140f9  ldr x1, [x8]
0x06A9B354: 7eef4e97  bl #0x3e5714c
0x06A9B358: a86400f0  adrp x8, #0x7732000
0x06A9B35C: 087943f9  ldr x8, [x8, #0x6f0]
0x06A9B360: e0030091  mov x0, sp
0x06A9B364: 010140f9  ldr x1, [x8]
0x06A9B368: 79ef4e97  bl #0x3e5714c
0x06A9B36C: a86400f0  adrp x8, #0x7732000
0x06A9B370: 085543f9  ldr x8, [x8, #0x6a8]
0x06A9B374: e0030091  mov x0, sp
0x06A9B378: 010140f9  ldr x1, [x8]
0x06A9B37C: 74ef4e97  bl #0x3e5714c
0x06A9B380: a86400f0  adrp x8, #0x7732000
0x06A9B384: 088943f9  ldr x8, [x8, #0x710]
0x06A9B388: e0030091  mov x0, sp
0x06A9B38C: 010140f9  ldr x1, [x8]
0x06A9B390: 6fef4e97  bl #0x3e5714c
0x06A9B394: 761240f9  ldr x22, [x19, #0x20]
0x06A9B398: f60400b4  cbz x22, #0x6a9b434
0x06A9B39C: c81a40b9  ldr w8, [x22, #0x18]
0x06A9B3A0: 1f050071  cmp w8, #1
0x06A9B3A4: 8b040054  b.lt #0x6a9b434
0x06A9B3A8: b86400f0  adrp x24, #0x7732000
0x06A9B3AC: 184b43f9  ldr x24, [x24, #0x690]
0x06A9B3B0: f7031f2a  mov w23, wzr
0x06A9B3B4: ff02086b  cmp w23, w8
0x06A9B3B8: e2050054  b.hs #0x6a9b474
0x06A9B3BC: c8ce378b  add x8, x22, w23, sxtw #3
0x06A9B3C0: 151140f9  ldr x21, [x8, #0x20]
0x06A9B3C4: b50500b4  cbz x21, #0x6a9b478
0x06A9B3C8: a80240f9  ldr x8, [x21]
0x06A9B3CC: 010340f9  ldr x1, [x24]
0x06A9B3D0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A9B3D4: 290100b4  cbz x9, #0x6a9b3f8
0x06A9B3D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A9B3DC: 4a210091  add x10, x10, #8
0x06A9B3E0: 4b815ff8  ldur x11, [x10, #-8]
0x06A9B3E4: 7f0101eb  cmp x11, x1
0x06A9B3E8: 00010054  b.eq #0x6a9b408
0x06A9B3EC: 290500f1  subs x9, x9, #1
0x06A9B3F0: 4a410091  add x10, x10, #0x10
0x06A9B3F4: 61ffff54  b.ne #0x6a9b3e0
0x06A9B3F8: e00315aa  mov x0, x21
0x06A9B3FC: e2031f2a  mov w2, wzr
0x06A9B400: c4ed1a97  bl #0x3156b10
0x06A9B404: 04000014  b #0x6a9b414
0x06A9B408: 490180b9  ldrsw x9, [x10]
0x06A9B40C: 0811098b  add x8, x8, x9, lsl #4
0x06A9B410: 00e10491  add x0, x8, #0x138
0x06A9B414: 080840a9  ldp x8, x2, [x0]
0x06A9B418: e00315aa  mov x0, x21
0x06A9B41C: e10314aa  mov x1, x20
0x06A9B420: 00013fd6  blr x8
0x06A9B424: c81a40b9  ldr w8, [x22, #0x18]
0x06A9B428: f7060011  add w23, w23, #1
0x06A9B42C: ff02086b  cmp w23, w8
0x06A9B430: 2bfcff54  b.lt #0x6a9b3b4
0x06A9B434: 340200b4  cbz x20, #0x6a9b478
0x06A9B438: e00314aa  mov x0, x20
0x06A9B43C: e1031faa  mov x1, xzr
0x06A9B440: 05e8d197  bl #0x5f15454
0x06A9B444: 608e03f8  str x0, [x19, #0x38]!
0x06A9B448: e10300aa  mov x1, x0
0x06A9B44C: e00313aa  mov x0, x19
0x06A9B450: 5d951b97  bl #0x31809c4
0x06A9B454: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A9B458: f65745a9  ldp x22, x21, [sp, #0x50]
0x06A9B45C: f85f44a9  ldp x24, x23, [sp, #0x40]
0x06A9B460: fa6743a9  ldp x26, x25, [sp, #0x30]
0x06A9B464: fc6f42a9  ldp x28, x27, [sp, #0x20]
0x06A9B468: fd7b41a9  ldp x29, x30, [sp, #0x10]
0x06A9B46C: ffc30191  add sp, sp, #0x70
0x06A9B470: c0035fd6  ret
0x06A9B474: 10961b97  bl #0x3180cb4
0x06A9B478: 0d961b97  bl #0x3180cac

; RVA 0x6A9B490 | public void MoveItem(int fromPosition, int toPosition) { }
; bytes=208 sha256=eb9f180a12ba83f74b59173cf3e15b0a8e03a8009f4463c2f80aa081a41b9d18 status=arm64_complete_bound indexed_start=True
0x06A9B490: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A9B494: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A9B498: f65702a9  stp x22, x21, [sp, #0x20]
0x06A9B49C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A9B4A0: 769400f0  adrp x22, #0x7d2a000
0x06A9B4A4: f85e00d0  adrp x24, #0x7679000
0x06A9B4A8: b76400f0  adrp x23, #0x7732000
0x06A9B4AC: c8e66039  ldrb w8, [x22, #0x839]
0x06A9B4B0: 188b43f9  ldr x24, [x24, #0x710]
0x06A9B4B4: f7ae43f9  ldr x23, [x23, #0x758]
0x06A9B4B8: f403022a  mov w20, w2
0x06A9B4BC: f503012a  mov w21, w1
0x06A9B4C0: f30300aa  mov x19, x0
0x06A9B4C4: 88010037  tbnz w8, #0, #0x6a9b4f4
0x06A9B4C8: a06400f0  adrp x0, #0x7732000
0x06A9B4CC: 00ac43f9  ldr x0, [x0, #0x758]
0x06A9B4D0: 52951b97  bl #0x3180a18
0x06A9B4D4: a06400f0  adrp x0, #0x7732000
0x06A9B4D8: 00b043f9  ldr x0, [x0, #0x760]
0x06A9B4DC: 4f951b97  bl #0x3180a18
0x06A9B4E0: e05e00d0  adrp x0, #0x7679000
0x06A9B4E4: 008843f9  ldr x0, [x0, #0x710]
0x06A9B4E8: 4c951b97  bl #0x3180a18
0x06A9B4EC: 28008052  movz w8, #0x1
0x06A9B4F0: c8e62039  strb w8, [x22, #0x839]
0x06A9B4F4: 000340f9  ldr x0, [x24]
0x06A9B4F8: ea951b97  bl #0x3180ca0
0x06A9B4FC: e1031faa  mov x1, xzr
0x06A9B500: f60300aa  mov x22, x0
0x06A9B504: aee8d197  bl #0x5f157bc
0x06A9B508: e00240f9  ldr x0, [x23]
0x06A9B50C: e5951b97  bl #0x3180ca0
0x06A9B510: e1031faa  mov x1, xzr
0x06A9B514: f70300aa  mov x23, x0
0x06A9B518: 39fcb097  bl #0x56da5fc
0x06A9B51C: 170200b4  cbz x23, #0x6a9b55c
0x06A9B520: f5520229  stp w21, w20, [x23, #0x10]
0x06A9B524: d60100b4  cbz x22, #0x6a9b55c
0x06A9B528: a86400f0  adrp x8, #0x7732000
0x06A9B52C: 08b143f9  ldr x8, [x8, #0x760]
0x06A9B530: e00316aa  mov x0, x22
0x06A9B534: e10317aa  mov x1, x23
0x06A9B538: 020140f9  ldr x2, [x8]
0x06A9B53C: aa9f4c97  bl #0x3dc33e4
0x06A9B540: e10300aa  mov x1, x0
0x06A9B544: e00313aa  mov x0, x19
0x06A9B548: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A9B54C: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A9B550: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A9B554: fe0744f8  ldr x30, [sp], #0x40
0x06A9B558: 02000014  b #0x6a9b560
0x06A9B55C: d4951b97  bl #0x3180cac

; RVA 0x6A9B64C | public void ExtractItemFromFeedingCombination(Entity feedingCombinationItem, string itemId) { }
; bytes=236 sha256=1ee40f2334837b6a7b9f056ea930356667647a93faca4198f8c3bbd43993ac35 status=arm64_complete_bound indexed_start=True
0x06A9B64C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A9B650: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A9B654: f65702a9  stp x22, x21, [sp, #0x20]
0x06A9B658: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A9B65C: 769400f0  adrp x22, #0x7d2a000
0x06A9B660: f85e00d0  adrp x24, #0x7679000
0x06A9B664: b76400f0  adrp x23, #0x7732000
0x06A9B668: c8ea6039  ldrb w8, [x22, #0x83a]
0x06A9B66C: 188b43f9  ldr x24, [x24, #0x710]
0x06A9B670: f7b643f9  ldr x23, [x23, #0x768]
0x06A9B674: f40302aa  mov x20, x2
0x06A9B678: f50301aa  mov x21, x1
0x06A9B67C: f30300aa  mov x19, x0
0x06A9B680: 88010037  tbnz w8, #0, #0x6a9b6b0
0x06A9B684: a06400f0  adrp x0, #0x7732000
0x06A9B688: 00b443f9  ldr x0, [x0, #0x768]
0x06A9B68C: e3941b97  bl #0x3180a18
0x06A9B690: a06400f0  adrp x0, #0x7732000
0x06A9B694: 00b843f9  ldr x0, [x0, #0x770]
0x06A9B698: e0941b97  bl #0x3180a18
0x06A9B69C: e05e00d0  adrp x0, #0x7679000
0x06A9B6A0: 008843f9  ldr x0, [x0, #0x710]
0x06A9B6A4: dd941b97  bl #0x3180a18
0x06A9B6A8: 28008052  movz w8, #0x1
0x06A9B6AC: c8ea2039  strb w8, [x22, #0x83a]
0x06A9B6B0: 000340f9  ldr x0, [x24]
0x06A9B6B4: 7b951b97  bl #0x3180ca0
0x06A9B6B8: e1031faa  mov x1, xzr
0x06A9B6BC: f60300aa  mov x22, x0
0x06A9B6C0: 3fe8d197  bl #0x5f157bc
0x06A9B6C4: e00240f9  ldr x0, [x23]
0x06A9B6C8: 76951b97  bl #0x3180ca0
0x06A9B6CC: e1031faa  mov x1, xzr
0x06A9B6D0: f70300aa  mov x23, x0
0x06A9B6D4: cafbb097  bl #0x56da5fc
0x06A9B6D8: f70200b4  cbz x23, #0x6a9b734
0x06A9B6DC: e00317aa  mov x0, x23
0x06A9B6E0: 150c01f8  str x21, [x0, #0x10]!
0x06A9B6E4: e10315aa  mov x1, x21
0x06A9B6E8: b7941b97  bl #0x31809c4
0x06A9B6EC: e00317aa  mov x0, x23
0x06A9B6F0: 148c01f8  str x20, [x0, #0x18]!
0x06A9B6F4: e10314aa  mov x1, x20
0x06A9B6F8: b3941b97  bl #0x31809c4
0x06A9B6FC: d60100b4  cbz x22, #0x6a9b734
0x06A9B700: a86400f0  adrp x8, #0x7732000
0x06A9B704: 08b943f9  ldr x8, [x8, #0x770]
0x06A9B708: e00316aa  mov x0, x22
0x06A9B70C: e10317aa  mov x1, x23
0x06A9B710: 020140f9  ldr x2, [x8]
0x06A9B714: 349f4c97  bl #0x3dc33e4
0x06A9B718: e10300aa  mov x1, x0
0x06A9B71C: e00313aa  mov x0, x19
0x06A9B720: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A9B724: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A9B728: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A9B72C: fe0744f8  ldr x30, [sp], #0x40
0x06A9B730: 8cffff17  b #0x6a9b560
0x06A9B734: 5e951b97  bl #0x3180cac

; RVA 0x6A9B738 | public void HandleTap(int selectedEntityPosition, TickArgs additionalArgs) { }
; bytes=204 sha256=3db507786630e7c4baacf8258bcf5ba1bdcf954f3472b976a5a434810707c295 status=arm64_complete_bound indexed_start=True
0x06A9B738: fe0f1df8  str x30, [sp, #-0x30]!
0x06A9B73C: f65701a9  stp x22, x21, [sp, #0x10]
0x06A9B740: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A9B744: 769400f0  adrp x22, #0x7d2a000
0x06A9B748: c8ee6039  ldrb w8, [x22, #0x83b]
0x06A9B74C: f40302aa  mov x20, x2
0x06A9B750: f503012a  mov w21, w1
0x06A9B754: f30300aa  mov x19, x0
0x06A9B758: 88010037  tbnz w8, #0, #0x6a9b788
0x06A9B75C: a06400f0  adrp x0, #0x7732000
0x06A9B760: 00bc43f9  ldr x0, [x0, #0x778]
0x06A9B764: ad941b97  bl #0x3180a18
0x06A9B768: a06400f0  adrp x0, #0x7732000
0x06A9B76C: 00c043f9  ldr x0, [x0, #0x780]
0x06A9B770: aa941b97  bl #0x3180a18
0x06A9B774: e05e00d0  adrp x0, #0x7679000
0x06A9B778: 008843f9  ldr x0, [x0, #0x710]
0x06A9B77C: a7941b97  bl #0x3180a18
0x06A9B780: 28008052  movz w8, #0x1
0x06A9B784: c8ee2039  strb w8, [x22, #0x83b]
0x06A9B788: b66400f0  adrp x22, #0x7732000
0x06A9B78C: d6be43f9  ldr x22, [x22, #0x778]
0x06A9B790: 140100b5  cbnz x20, #0x6a9b7b0
0x06A9B794: e85e00d0  adrp x8, #0x7679000
0x06A9B798: 088943f9  ldr x8, [x8, #0x710]
0x06A9B79C: 000140f9  ldr x0, [x8]
0x06A9B7A0: 40951b97  bl #0x3180ca0
0x06A9B7A4: e1031faa  mov x1, xzr
0x06A9B7A8: f40300aa  mov x20, x0
0x06A9B7AC: 04e8d197  bl #0x5f157bc
0x06A9B7B0: c00240f9  ldr x0, [x22]
0x06A9B7B4: 3b951b97  bl #0x3180ca0
0x06A9B7B8: e1031faa  mov x1, xzr
0x06A9B7BC: f60300aa  mov x22, x0
0x06A9B7C0: 8ffbb097  bl #0x56da5fc
0x06A9B7C4: f60100b4  cbz x22, #0x6a9b800
0x06A9B7C8: d51200b9  str w21, [x22, #0x10]
0x06A9B7CC: b40100b4  cbz x20, #0x6a9b800
0x06A9B7D0: a86400f0  adrp x8, #0x7732000
0x06A9B7D4: 08c143f9  ldr x8, [x8, #0x780]
0x06A9B7D8: e00314aa  mov x0, x20
0x06A9B7DC: e10316aa  mov x1, x22
0x06A9B7E0: 020140f9  ldr x2, [x8]
0x06A9B7E4: 009f4c97  bl #0x3dc33e4
0x06A9B7E8: e00313aa  mov x0, x19
0x06A9B7EC: e10314aa  mov x1, x20
0x06A9B7F0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A9B7F4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A9B7F8: fe0743f8  ldr x30, [sp], #0x30
0x06A9B7FC: 59ffff17  b #0x6a9b560
0x06A9B800: 2b951b97  bl #0x3180cac

; RVA 0x6A9B804 | public void HandleCombinationVerification(bool isSuccess, int firstPosition, int secondPosition, MergeCheckItemType checkItemType) { }
; bytes=604 sha256=c4c87548c9756873f0537aaf5c744c5cc1cceed57e4ef97eef6666b28e598ae3 status=arm64_complete_bound indexed_start=True
0x06A9B804: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x06A9B808: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A9B80C: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A9B810: f65703a9  stp x22, x21, [sp, #0x30]
0x06A9B814: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A9B818: 789400f0  adrp x24, #0x7d2a000
0x06A9B81C: 08f36039  ldrb w8, [x24, #0x83c]
0x06A9B820: f703042a  mov w23, w4
0x06A9B824: f403032a  mov w20, w3
0x06A9B828: f503022a  mov w21, w2
0x06A9B82C: f603012a  mov w22, w1
0x06A9B830: f30300aa  mov x19, x0
0x06A9B834: a8020037  tbnz w8, #0, #0x6a9b888
0x06A9B838: 206100b0  adrp x0, #0x76c0000
0x06A9B83C: 00dc43f9  ldr x0, [x0, #0x7b8]
0x06A9B840: 76941b97  bl #0x3180a18
0x06A9B844: a06400f0  adrp x0, #0x7732000
0x06A9B848: 00c443f9  ldr x0, [x0, #0x788]
0x06A9B84C: 73941b97  bl #0x3180a18
0x06A9B850: a06400f0  adrp x0, #0x7732000
0x06A9B854: 00ac43f9  ldr x0, [x0, #0x758]
0x06A9B858: 70941b97  bl #0x3180a18
0x06A9B85C: a06400f0  adrp x0, #0x7732000
0x06A9B860: 00c843f9  ldr x0, [x0, #0x790]
0x06A9B864: 6d941b97  bl #0x3180a18
0x06A9B868: a06400f0  adrp x0, #0x7732000
0x06A9B86C: 00b043f9  ldr x0, [x0, #0x760]
0x06A9B870: 6a941b97  bl #0x3180a18
0x06A9B874: e05e00d0  adrp x0, #0x7679000
0x06A9B878: 008843f9  ldr x0, [x0, #0x710]
0x06A9B87C: 67941b97  bl #0x3180a18
0x06A9B880: 28008052  movz w8, #0x1
0x06A9B884: 08f32039  strb w8, [x24, #0x83c]
0x06A9B888: 780e40f9  ldr x24, [x19, #0x18]
0x06A9B88C: 980e00b4  cbz x24, #0x6a9ba5c
0x06A9B890: 3a6100b0  adrp x26, #0x76c0000
0x06A9B894: 080340f9  ldr x8, [x24]
0x06A9B898: 5adf43f9  ldr x26, [x26, #0x7b8]
0x06A9B89C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A9B8A0: 410340f9  ldr x1, [x26]
0x06A9B8A4: 290100b4  cbz x9, #0x6a9b8c8
0x06A9B8A8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A9B8AC: 4a210091  add x10, x10, #8
0x06A9B8B0: 4b815ff8  ldur x11, [x10, #-8]
0x06A9B8B4: 7f0101eb  cmp x11, x1
0x06A9B8B8: 00010054  b.eq #0x6a9b8d8
0x06A9B8BC: 290500f1  subs x9, x9, #1
0x06A9B8C0: 4a410091  add x10, x10, #0x10
0x06A9B8C4: 61ffff54  b.ne #0x6a9b8b0
0x06A9B8C8: 22008052  movz w2, #0x1
0x06A9B8CC: e00318aa  mov x0, x24
0x06A9B8D0: 90ec1a97  bl #0x3156b10
0x06A9B8D4: 05000014  b #0x6a9b8e8
0x06A9B8D8: 490140b9  ldr w9, [x10]
0x06A9B8DC: 29050011  add w9, w9, #1
0x06A9B8E0: 08d1298b  add x8, x8, w9, sxtw #4
0x06A9B8E4: 00e10491  add x0, x8, #0x138
0x06A9B8E8: 080440a9  ldp x8, x1, [x0]
0x06A9B8EC: e00318aa  mov x0, x24
0x06A9B8F0: 00013fd6  blr x8
0x06A9B8F4: e103152a  mov w1, w21
0x06A9B8F8: 8ef4ff97  bl #0x6a98b30
0x06A9B8FC: 790e40f9  ldr x25, [x19, #0x18]
0x06A9B900: f90a00b4  cbz x25, #0x6a9ba5c
0x06A9B904: 280340f9  ldr x8, [x25]
0x06A9B908: 410340f9  ldr x1, [x26]
0x06A9B90C: fa5e00d0  adrp x26, #0x7679000
0x06A9B910: bb6400f0  adrp x27, #0x7732000
0x06A9B914: 095d4279  ldrh w9, [x8, #0x12e]
0x06A9B918: 5a8b43f9  ldr x26, [x26, #0x710]
0x06A9B91C: 7bc743f9  ldr x27, [x27, #0x788]
0x06A9B920: f80300aa  mov x24, x0
0x06A9B924: 290100b4  cbz x9, #0x6a9b948
0x06A9B928: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A9B92C: 4a210091  add x10, x10, #8
0x06A9B930: 4b815ff8  ldur x11, [x10, #-8]
0x06A9B934: 7f0101eb  cmp x11, x1
0x06A9B938: 00010054  b.eq #0x6a9b958
0x06A9B93C: 290500f1  subs x9, x9, #1
0x06A9B940: 4a410091  add x10, x10, #0x10
0x06A9B944: 61ffff54  b.ne #0x6a9b930
0x06A9B948: 22008052  movz w2, #0x1
0x06A9B94C: e00319aa  mov x0, x25
0x06A9B950: 70ec1a97  bl #0x3156b10
0x06A9B954: 05000014  b #0x6a9b968
0x06A9B958: 490140b9  ldr w9, [x10]
0x06A9B95C: 29050011  add w9, w9, #1
0x06A9B960: 08d1298b  add x8, x8, w9, sxtw #4
0x06A9B964: 00e10491  add x0, x8, #0x138
0x06A9B968: 080440a9  ldp x8, x1, [x0]
0x06A9B96C: e00319aa  mov x0, x25
0x06A9B970: 00013fd6  blr x8
0x06A9B974: e103142a  mov w1, w20
0x06A9B978: 6ef4ff97  bl #0x6a98b30
0x06A9B97C: 480340f9  ldr x8, [x26]
0x06A9B980: fa0300aa  mov x26, x0
0x06A9B984: e00308aa  mov x0, x8
0x06A9B988: c6941b97  bl #0x3180ca0
0x06A9B98C: e1031faa  mov x1, xzr
0x06A9B990: f90300aa  mov x25, x0
0x06A9B994: 8ae7d197  bl #0x5f157bc
0x06A9B998: 600340f9  ldr x0, [x27]
0x06A9B99C: c1941b97  bl #0x3180ca0
0x06A9B9A0: e1031faa  mov x1, xzr
0x06A9B9A4: fb0300aa  mov x27, x0
0x06A9B9A8: 15fbb097  bl #0x56da5fc
0x06A9B9AC: 9b0500b4  cbz x27, #0x6a9ba5c
0x06A9B9B0: e0031baa  mov x0, x27
0x06A9B9B4: 188c01f8  str x24, [x0, #0x18]!
0x06A9B9B8: e10318aa  mov x1, x24
0x06A9B9BC: 02941b97  bl #0x31809c4
0x06A9B9C0: f8031baa  mov x24, x27
0x06A9B9C4: 1a0f02f8  str x26, [x24, #0x20]!
0x06A9B9C8: e00318aa  mov x0, x24
0x06A9B9CC: e1031aaa  mov x1, x26
0x06A9B9D0: fd931b97  bl #0x31809c4
0x06A9B9D4: c8020012  and w8, w22, #1
0x06A9B9D8: 08031f38  sturb w8, [x24, #-0x10]
0x06A9B9DC: 170b00b9  str w23, [x24, #8]
0x06A9B9E0: f90300b4  cbz x25, #0x6a9ba5c
0x06A9B9E4: a86400f0  adrp x8, #0x7732000
0x06A9B9E8: 08c943f9  ldr x8, [x8, #0x790]
0x06A9B9EC: e00319aa  mov x0, x25
0x06A9B9F0: e1031baa  mov x1, x27
0x06A9B9F4: 020140f9  ldr x2, [x8]
0x06A9B9F8: 7b9e4c97  bl #0x3dc33e4
0x06A9B9FC: 16020036  tbz w22, #0, #0x6a9ba3c
0x06A9BA00: a86400f0  adrp x8, #0x7732000
0x06A9BA04: 08ad43f9  ldr x8, [x8, #0x758]
0x06A9BA08: 000140f9  ldr x0, [x8]
0x06A9BA0C: a5941b97  bl #0x3180ca0
0x06A9BA10: e1031faa  mov x1, xzr
0x06A9BA14: f60300aa  mov x22, x0
0x06A9BA18: f9fab097  bl #0x56da5fc
0x06A9BA1C: 160200b4  cbz x22, #0x6a9ba5c
0x06A9BA20: d5520229  stp w21, w20, [x22, #0x10]
0x06A9BA24: a86400f0  adrp x8, #0x7732000
0x06A9BA28: 08b143f9  ldr x8, [x8, #0x760]
0x06A9BA2C: e00319aa  mov x0, x25
0x06A9BA30: e10316aa  mov x1, x22
0x06A9BA34: 020140f9  ldr x2, [x8]
0x06A9BA38: 6b9e4c97  bl #0x3dc33e4
0x06A9BA3C: e00313aa  mov x0, x19
0x06A9BA40: e10319aa  mov x1, x25
0x06A9BA44: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A9BA48: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A9BA4C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A9BA50: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A9BA54: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x06A9BA58: c2feff17  b #0x6a9b560
0x06A9BA5C: 94941b97  bl #0x3180cac

; RVA 0x6A9B560 | private void TickSystems(TickArgs inArgs) { }
; bytes=236 sha256=3da8695d15e41a0360e6a3bc33cb3e6159c0f9b55b158ea1be897addf5593711 status=arm64_complete_bound indexed_start=True
0x06A9B560: fe0f1df8  str x30, [sp, #-0x30]!
0x06A9B564: f65701a9  stp x22, x21, [sp, #0x10]
0x06A9B568: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A9B56C: 759400f0  adrp x21, #0x7d2a000
0x06A9B570: a8f66039  ldrb w8, [x21, #0x83d]
0x06A9B574: f40301aa  mov x20, x1
0x06A9B578: f30300aa  mov x19, x0
0x06A9B57C: c8000037  tbnz w8, #0, #0x6a9b594
0x06A9B580: 206100b0  adrp x0, #0x76c0000
0x06A9B584: 00dc43f9  ldr x0, [x0, #0x7b8]
0x06A9B588: 24951b97  bl #0x3180a18
0x06A9B58C: 28008052  movz w8, #0x1
0x06A9B590: a8f62039  strb w8, [x21, #0x83d]
0x06A9B594: 68024139  ldrb w8, [x19, #0x40]
0x06A9B598: a8000034  cbz w8, #0x6a9b5ac
0x06A9B59C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A9B5A0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A9B5A4: fe0743f8  ldr x30, [sp], #0x30
0x06A9B5A8: c0035fd6  ret
0x06A9B5AC: 760e40f9  ldr x22, [x19, #0x18]
0x06A9B5B0: d60400b4  cbz x22, #0x6a9b648
0x06A9B5B4: 2a6100b0  adrp x10, #0x76c0000
0x06A9B5B8: c80240f9  ldr x8, [x22]
0x06A9B5BC: 751e40f9  ldr x21, [x19, #0x38]
0x06A9B5C0: 4add43f9  ldr x10, [x10, #0x7b8]
0x06A9B5C4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A9B5C8: 410140f9  ldr x1, [x10]
0x06A9B5CC: 290100b4  cbz x9, #0x6a9b5f0
0x06A9B5D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A9B5D4: 4a210091  add x10, x10, #8
0x06A9B5D8: 4b815ff8  ldur x11, [x10, #-8]
0x06A9B5DC: 7f0101eb  cmp x11, x1
0x06A9B5E0: 00010054  b.eq #0x6a9b600
0x06A9B5E4: 290500f1  subs x9, x9, #1
0x06A9B5E8: 4a410091  add x10, x10, #0x10
0x06A9B5EC: 61ffff54  b.ne #0x6a9b5d8
0x06A9B5F0: e00316aa  mov x0, x22
0x06A9B5F4: e2031f2a  mov w2, wzr
0x06A9B5F8: 46ed1a97  bl #0x3156b10
0x06A9B5FC: 04000014  b #0x6a9b60c
0x06A9B600: 490180b9  ldrsw x9, [x10]
0x06A9B604: 0811098b  add x8, x8, x9, lsl #4
0x06A9B608: 00e10491  add x0, x8, #0x138
0x06A9B60C: 080440a9  ldp x8, x1, [x0]
0x06A9B610: e00316aa  mov x0, x22
0x06A9B614: 00013fd6  blr x8
0x06A9B618: 950100b4  cbz x21, #0x6a9b648
0x06A9B61C: e20300aa  mov x2, x0
0x06A9B620: e00315aa  mov x0, x21
0x06A9B624: e10314aa  mov x1, x20
0x06A9B628: e3031faa  mov x3, xzr
0x06A9B62C: 3de8d197  bl #0x5f15720
0x06A9B630: e10300aa  mov x1, x0
0x06A9B634: e00313aa  mov x0, x19
0x06A9B638: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A9B63C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A9B640: fe0743f8  ldr x30, [sp], #0x30
0x06A9B644: 07010014  b #0x6a9ba60
0x06A9B648: 99951b97  bl #0x3180cac

; RVA 0x6A9BB4C | public void ProcessTimeInterval(float deltaTime) { }
; bytes=148 sha256=61dfb62790335102c32e75d5ec5102a00947ebdca5f7d5a0d39e88cc5c968bca status=arm64_complete_bound indexed_start=True
0x06A9BB4C: e80f1dfc  str d8, [sp, #-0x30]!
0x06A9BB50: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A9BB54: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A9BB58: 749400f0  adrp x20, #0x7d2a000
0x06A9BB5C: f55e00d0  adrp x21, #0x7679000
0x06A9BB60: 88fa6039  ldrb w8, [x20, #0x83e]
0x06A9BB64: b58a43f9  ldr x21, [x21, #0x710]
0x06A9BB68: 081ca04e  mov v8.16b, v0.16b
0x06A9BB6C: f30300aa  mov x19, x0
0x06A9BB70: 28010037  tbnz w8, #0, #0x6a9bb94
0x06A9BB74: a06400f0  adrp x0, #0x7732000
0x06A9BB78: 00d043f9  ldr x0, [x0, #0x7a0]
0x06A9BB7C: a7931b97  bl #0x3180a18
0x06A9BB80: e05e00d0  adrp x0, #0x7679000
0x06A9BB84: 008843f9  ldr x0, [x0, #0x710]
0x06A9BB88: a4931b97  bl #0x3180a18
0x06A9BB8C: 28008052  movz w8, #0x1
0x06A9BB90: 88fa2039  strb w8, [x20, #0x83e]
0x06A9BB94: a00240f9  ldr x0, [x21]
0x06A9BB98: 42941b97  bl #0x3180ca0
0x06A9BB9C: e1031faa  mov x1, xzr
0x06A9BBA0: f40300aa  mov x20, x0
0x06A9BBA4: 06e7d197  bl #0x5f157bc
0x06A9BBA8: b40100b4  cbz x20, #0x6a9bbdc
0x06A9BBAC: a86400f0  adrp x8, #0x7732000
0x06A9BBB0: 08d143f9  ldr x8, [x8, #0x7a0]
0x06A9BBB4: e00314aa  mov x0, x20
0x06A9BBB8: 001da84e  mov v0.16b, v8.16b
0x06A9BBBC: 010140f9  ldr x1, [x8]
0x06A9BBC0: 7a9d4c97  bl #0x3dc31a8
0x06A9BBC4: e00313aa  mov x0, x19
0x06A9BBC8: e10314aa  mov x1, x20
0x06A9BBCC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A9BBD0: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A9BBD4: e80743fc  ldr d8, [sp], #0x30
0x06A9BBD8: 62feff17  b #0x6a9b560
0x06A9BBDC: 34941b97  bl #0x3180cac

; RVA 0x6A9BA60 | private void OnPostTick(TickArgs result) { }
; bytes=236 sha256=2e26e3edc693cfb5e5450b2be338852da922c83c05f9f5420db6c824eda8f680 status=arm64_complete_bound indexed_start=True
0x06A9BA60: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A9BA64: f65701a9  stp x22, x21, [sp, #0x10]
0x06A9BA68: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A9BA6C: 759400f0  adrp x21, #0x7d2a000
0x06A9BA70: a8fe6039  ldrb w8, [x21, #0x83f]
0x06A9BA74: f30301aa  mov x19, x1
0x06A9BA78: f40300aa  mov x20, x0
0x06A9BA7C: c8000037  tbnz w8, #0, #0x6a9ba94
0x06A9BA80: a06400f0  adrp x0, #0x7732000
0x06A9BA84: 00cc43f9  ldr x0, [x0, #0x798]
0x06A9BA88: e4931b97  bl #0x3180a18
0x06A9BA8C: 28008052  movz w8, #0x1
0x06A9BA90: a8fe2039  strb w8, [x21, #0x83f]
0x06A9BA94: 951640f9  ldr x21, [x20, #0x28]
0x06A9BA98: 950500b4  cbz x21, #0x6a9bb48
0x06A9BA9C: a81a40b9  ldr w8, [x21, #0x18]
0x06A9BAA0: 1f050071  cmp w8, #1
0x06A9BAA4: 8b040054  b.lt #0x6a9bb34
0x06A9BAA8: b76400f0  adrp x23, #0x7732000
0x06A9BAAC: f7ce43f9  ldr x23, [x23, #0x798]
0x06A9BAB0: f6031f2a  mov w22, wzr
0x06A9BAB4: df02086b  cmp w22, w8
0x06A9BAB8: 62040054  b.hs #0x6a9bb44
0x06A9BABC: a8ce368b  add x8, x21, w22, sxtw #3
0x06A9BAC0: 141140f9  ldr x20, [x8, #0x20]
0x06A9BAC4: 340400b4  cbz x20, #0x6a9bb48
0x06A9BAC8: 880240f9  ldr x8, [x20]
0x06A9BACC: e10240f9  ldr x1, [x23]
0x06A9BAD0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A9BAD4: 290100b4  cbz x9, #0x6a9baf8
0x06A9BAD8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A9BADC: 4a210091  add x10, x10, #8
0x06A9BAE0: 4b815ff8  ldur x11, [x10, #-8]
0x06A9BAE4: 7f0101eb  cmp x11, x1
0x06A9BAE8: 00010054  b.eq #0x6a9bb08
0x06A9BAEC: 290500f1  subs x9, x9, #1
0x06A9BAF0: 4a410091  add x10, x10, #0x10
0x06A9BAF4: 61ffff54  b.ne #0x6a9bae0
0x06A9BAF8: e00314aa  mov x0, x20
0x06A9BAFC: e2031f2a  mov w2, wzr
0x06A9BB00: 04ec1a97  bl #0x3156b10
0x06A9BB04: 04000014  b #0x6a9bb14
0x06A9BB08: 490180b9  ldrsw x9, [x10]
0x06A9BB0C: 0811098b  add x8, x8, x9, lsl #4
0x06A9BB10: 00e10491  add x0, x8, #0x138
0x06A9BB14: 080840a9  ldp x8, x2, [x0]
0x06A9BB18: e00314aa  mov x0, x20
0x06A9BB1C: e10313aa  mov x1, x19
0x06A9BB20: 00013fd6  blr x8
0x06A9BB24: a81a40b9  ldr w8, [x21, #0x18]
0x06A9BB28: d6060011  add w22, w22, #1
0x06A9BB2C: df02086b  cmp w22, w8
0x06A9BB30: 2bfcff54  b.lt #0x6a9bab4
0x06A9BB34: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A9BB38: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A9BB3C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A9BB40: c0035fd6  ret
0x06A9BB44: 5c941b97  bl #0x3180cb4
0x06A9BB48: 59941b97  bl #0x3180cac

; RVA 0x6A9BBE0 | public void .ctor() { }
; bytes=8 sha256=8247dbb93f9a82656bb4481d7de0d0f8a5b15964eb1d7fa52a0502d6cfe5c55a status=arm64_complete_bound indexed_start=True
0x06A9BBE0: e1031faa  mov x1, xzr
0x06A9BBE4: 86fab017  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BD97D0 | Merger.MergeBoard.Controller.BoardController$$DoAction<object>
; native signature: void Merger_MergeBoard_Controller_BoardController__DoAction_object_ (Merger_MergeBoard_Controller_BoardController_o* __this, Il2CppObject* actionData, const MethodInfo_3BD97D0* method);
; bytes=144 sha256=6fce4bc9cde92ecb25f601afded0410bdeb1e0304b512aac91b58f42cc012c34 status=arm64_complete_bound indexed_start=True
0x03BD97D0: fe0f1df8  str x30, [sp, #-0x30]!
0x03BD97D4: f65701a9  stp x22, x21, [sp, #0x10]
0x03BD97D8: f44f02a9  stp x20, x19, [sp, #0x20]
0x03BD97DC: 481c40f9  ldr x8, [x2, #0x38]
0x03BD97E0: f50302aa  mov x21, x2
0x03BD97E4: f40301aa  mov x20, x1
0x03BD97E8: f30300aa  mov x19, x0
0x03BD97EC: 080100b5  cbnz x8, #0x3bd980c
0x03BD97F0: 00d50190  adrp x0, #0x7679000
0x03BD97F4: 008843f9  ldr x0, [x0, #0x710]
0x03BD97F8: 889cd697  bl #0x3180a18
0x03BD97FC: a81e40f9  ldr x8, [x21, #0x38]
0x03BD9800: 680000b5  cbnz x8, #0x3bd980c
0x03BD9804: e00315aa  mov x0, x21
0x03BD9808: 1cf4d597  bl #0x3156878
0x03BD980C: 08d50190  adrp x8, #0x7679000
0x03BD9810: 088943f9  ldr x8, [x8, #0x710]
0x03BD9814: 000140f9  ldr x0, [x8]
0x03BD9818: 229dd697  bl #0x3180ca0
0x03BD981C: e1031faa  mov x1, xzr
0x03BD9820: f60300aa  mov x22, x0
0x03BD9824: e6ef8c94  bl #0x5f157bc
0x03BD9828: b60100b4  cbz x22, #0x3bd985c
0x03BD982C: a81e40f9  ldr x8, [x21, #0x38]
0x03BD9830: e00316aa  mov x0, x22
0x03BD9834: e10314aa  mov x1, x20
0x03BD9838: 020540f9  ldr x2, [x8, #8]
0x03BD983C: eaa60794  bl #0x3dc33e4
0x03BD9840: e00313aa  mov x0, x19
0x03BD9844: e10316aa  mov x1, x22
0x03BD9848: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03BD984C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03BD9850: e2031faa  mov x2, xzr
0x03BD9854: fe0743f8  ldr x30, [sp], #0x30
0x03BD9858: 4207bb14  b #0x6a9b560
0x03BD985C: 149dd697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BD9860 | Merger.MergeBoard.Controller.BoardController$$DoAction<__Il2CppFullySharedGenericType>
; native signature: void Merger_MergeBoard_Controller_BoardController__DoAction___Il2CppFullySharedGenericType_ (Merger_MergeBoard_Controller_BoardController_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actionData, const MethodInfo_3BD9860* method);
; bytes=304 sha256=6f9344a1cf9be8ee205853088f927e0f6a76776a2ffa8147401794f21d8400ce status=arm64_complete_bound indexed_start=True
0x03BD9860: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x03BD9864: f90b00f9  str x25, [sp, #0x10]
0x03BD9868: f85f02a9  stp x24, x23, [sp, #0x20]
0x03BD986C: f65703a9  stp x22, x21, [sp, #0x30]
0x03BD9870: f44f04a9  stp x20, x19, [sp, #0x40]
0x03BD9874: fd030091  mov x29, sp
0x03BD9878: ff8300d1  sub sp, sp, #0x20
0x03BD987C: 59d03bd5  mrs x25, tpidr_el0
0x03BD9880: 281740f9  ldr x8, [x25, #0x28]
0x03BD9884: f50302aa  mov x21, x2
0x03BD9888: f40301aa  mov x20, x1
0x03BD988C: f30300aa  mov x19, x0
0x03BD9890: a8831ff8  stur x8, [x29, #-8]
0x03BD9894: a1031ef8  stur x1, [x29, #-0x20]
0x03BD9898: 481c40f9  ldr x8, [x2, #0x38]
0x03BD989C: 280100b5  cbnz x8, #0x3bd98c0
0x03BD98A0: 00d50190  adrp x0, #0x7679000
0x03BD98A4: 008843f9  ldr x0, [x0, #0x710]
0x03BD98A8: 5c9cd697  bl #0x3180a18
0x03BD98AC: a81e40f9  ldr x8, [x21, #0x38]
0x03BD98B0: 880000b5  cbnz x8, #0x3bd98c0
0x03BD98B4: e00315aa  mov x0, x21
0x03BD98B8: f0f3d597  bl #0x3156878
0x03BD98BC: a81e40f9  ldr x8, [x21, #0x38]
0x03BD98C0: 080140f9  ldr x8, [x8]
0x03BD98C4: 18fd40b9  ldr w24, [x8, #0xfc]
0x03BD98C8: e8030091  mov x8, sp
0x03BD98CC: 093f0091  add x9, x24, #0xf
0x03BD98D0: 29717c92  and x9, x9, #0x1fffffff0
0x03BD98D4: 170109cb  sub x23, x8, x9
0x03BD98D8: ff020091  mov sp, x23
0x03BD98DC: 08d50190  adrp x8, #0x7679000
0x03BD98E0: 088943f9  ldr x8, [x8, #0x710]
0x03BD98E4: 000140f9  ldr x0, [x8]
0x03BD98E8: ee9cd697  bl #0x3180ca0
0x03BD98EC: e1031faa  mov x1, xzr
0x03BD98F0: f60300aa  mov x22, x0
0x03BD98F4: b2ef8c94  bl #0x5f157bc
0x03BD98F8: b51e40f9  ldr x21, [x21, #0x38]
0x03BD98FC: e00317aa  mov x0, x23
0x03BD9900: e20318aa  mov x2, x24
0x03BD9904: a80240f9  ldr x8, [x21]
0x03BD9908: 082940b9  ldr w8, [x8, #0x28]
0x03BD990C: 1f010071  cmp w8, #0
0x03BD9910: a88300d1  sub x8, x29, #0x20
0x03BD9914: 81b2889a  csel x1, x20, x8, lt
0x03BD9918: 16d4d794  bl #0x71ce970
0x03BD991C: 760300b4  cbz x22, #0x3bd9988
0x03BD9920: a80640a9  ldp x8, x1, [x21]
0x03BD9924: 082940b9  ldr w8, [x8, #0x28]
0x03BD9928: 200040f9  ldr x0, [x1]
0x03BD992C: 4800f837  tbnz w8, #0x1f, #0x3bd9934
0x03BD9930: f70240f9  ldr x23, [x23]
0x03BD9934: b7831ef8  stur x23, [x29, #-0x18]
0x03BD9938: 280840f9  ldr x8, [x1, #0x10]
0x03BD993C: a36300d1  sub x3, x29, #0x18
0x03BD9940: a44300d1  sub x4, x29, #0x10
0x03BD9944: e20316aa  mov x2, x22
0x03BD9948: 00013fd6  blr x8
0x03BD994C: e00313aa  mov x0, x19
0x03BD9950: e10316aa  mov x1, x22
0x03BD9954: e2031faa  mov x2, xzr
0x03BD9958: 0207bb94  bl #0x6a9b560
0x03BD995C: 281740f9  ldr x8, [x25, #0x28]
0x03BD9960: a9835ff8  ldur x9, [x29, #-8]
0x03BD9964: 1f0109eb  cmp x8, x9
0x03BD9968: 21010054  b.ne #0x3bd998c
0x03BD996C: bf030091  mov sp, x29
0x03BD9970: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03BD9974: f65743a9  ldp x22, x21, [sp, #0x30]
0x03BD9978: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03BD997C: f90b40f9  ldr x25, [sp, #0x10]
0x03BD9980: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x03BD9984: c0035fd6  ret
0x03BD9988: c99cd697  bl #0x3180cac
0x03BD998C: 01d4d794  bl #0x71ce990

