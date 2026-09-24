; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8392 Merger.Game.ViewModel.Board.BoardQueueViewModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x664ADA4 | public BindableProperty<int> get_EffectiveQueueCount() { }
; bytes=160 sha256=b71e2c3f2f75b0de5d6fb5638d56b61113c3e9c6671001ef4fcc149a6da22554 status=arm64_complete_bound indexed_start=True
0x0664ADA4: fe0f1ef8  str x30, [sp, #-0x20]!
0x0664ADA8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664ADAC: f4b600b0  adrp x20, #0x7d27000
0x0664ADB0: 88ba7f39  ldrb w8, [x20, #0xfee]
0x0664ADB4: f30300aa  mov x19, x0
0x0664ADB8: c8000037  tbnz w8, #0, #0x664add0
0x0664ADBC: e08500b0  adrp x0, #0x7707000
0x0664ADC0: 009840f9  ldr x0, [x0, #0x130]
0x0664ADC4: 15d72c97  bl #0x3180a18
0x0664ADC8: 28008052  movz w8, #0x1
0x0664ADCC: 88ba3f39  strb w8, [x20, #0xfee]
0x0664ADD0: 737e40f9  ldr x19, [x19, #0xf8]
0x0664ADD4: 730300b4  cbz x19, #0x664ae40
0x0664ADD8: ea8500b0  adrp x10, #0x7707000
0x0664ADDC: 680240f9  ldr x8, [x19]
0x0664ADE0: 4a9940f9  ldr x10, [x10, #0x130]
0x0664ADE4: 095d4279  ldrh w9, [x8, #0x12e]
0x0664ADE8: 410140f9  ldr x1, [x10]
0x0664ADEC: 290100b4  cbz x9, #0x664ae10
0x0664ADF0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664ADF4: 4a210091  add x10, x10, #8
0x0664ADF8: 4b815ff8  ldur x11, [x10, #-8]
0x0664ADFC: 7f0101eb  cmp x11, x1
0x0664AE00: 00010054  b.eq #0x664ae20
0x0664AE04: 290500f1  subs x9, x9, #1
0x0664AE08: 4a410091  add x10, x10, #0x10
0x0664AE0C: 61ffff54  b.ne #0x664adf8
0x0664AE10: e00313aa  mov x0, x19
0x0664AE14: e2031f2a  mov w2, wzr
0x0664AE18: 3e2f2c97  bl #0x3156b10
0x0664AE1C: 04000014  b #0x664ae2c
0x0664AE20: 490180b9  ldrsw x9, [x10]
0x0664AE24: 0811098b  add x8, x8, x9, lsl #4
0x0664AE28: 00e10491  add x0, x8, #0x138
0x0664AE2C: 020440a9  ldp x2, x1, [x0]
0x0664AE30: e00313aa  mov x0, x19
0x0664AE34: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664AE38: fe0742f8  ldr x30, [sp], #0x20
0x0664AE3C: 40001fd6  br x2
0x0664AE40: 9bd72c97  bl #0x3180cac

; RVA 0x664AE44 | public BindableProperty<AssetReferenceT<Sprite>> get_EffectiveHeadSprite() { }
; bytes=164 sha256=e37f82d336f2d3bb09fffb8f05967360982dbfa1846a08392f50b0b1219e262a status=arm64_complete_bound indexed_start=True
0x0664AE44: fe0f1ef8  str x30, [sp, #-0x20]!
0x0664AE48: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664AE4C: f4b600b0  adrp x20, #0x7d27000
0x0664AE50: 88be7f39  ldrb w8, [x20, #0xfef]
0x0664AE54: f30300aa  mov x19, x0
0x0664AE58: c8000037  tbnz w8, #0, #0x664ae70
0x0664AE5C: e08500b0  adrp x0, #0x7707000
0x0664AE60: 009840f9  ldr x0, [x0, #0x130]
0x0664AE64: edd62c97  bl #0x3180a18
0x0664AE68: 28008052  movz w8, #0x1
0x0664AE6C: 88be3f39  strb w8, [x20, #0xfef]
0x0664AE70: 737e40f9  ldr x19, [x19, #0xf8]
0x0664AE74: 930300b4  cbz x19, #0x664aee4
0x0664AE78: ea8500b0  adrp x10, #0x7707000
0x0664AE7C: 680240f9  ldr x8, [x19]
0x0664AE80: 4a9940f9  ldr x10, [x10, #0x130]
0x0664AE84: 095d4279  ldrh w9, [x8, #0x12e]
0x0664AE88: 410140f9  ldr x1, [x10]
0x0664AE8C: 290100b4  cbz x9, #0x664aeb0
0x0664AE90: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664AE94: 4a210091  add x10, x10, #8
0x0664AE98: 4b815ff8  ldur x11, [x10, #-8]
0x0664AE9C: 7f0101eb  cmp x11, x1
0x0664AEA0: 00010054  b.eq #0x664aec0
0x0664AEA4: 290500f1  subs x9, x9, #1
0x0664AEA8: 4a410091  add x10, x10, #0x10
0x0664AEAC: 61ffff54  b.ne #0x664ae98
0x0664AEB0: 22008052  movz w2, #0x1
0x0664AEB4: e00313aa  mov x0, x19
0x0664AEB8: 162f2c97  bl #0x3156b10
0x0664AEBC: 05000014  b #0x664aed0
0x0664AEC0: 490140b9  ldr w9, [x10]
0x0664AEC4: 29050011  add w9, w9, #1
0x0664AEC8: 08d1298b  add x8, x8, w9, sxtw #4
0x0664AECC: 00e10491  add x0, x8, #0x138
0x0664AED0: 020440a9  ldp x2, x1, [x0]
0x0664AED4: e00313aa  mov x0, x19
0x0664AED8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664AEDC: fe0742f8  ldr x30, [sp], #0x20
0x0664AEE0: 40001fd6  br x2
0x0664AEE4: 72d72c97  bl #0x3180cac

; RVA 0x664AEE8 | private BoardQueueComponent get_BoardQueueComponent() { }
; bytes=224 sha256=e976efaa157ebb66e018101b7ef4749e2c5b0ac943dd7c156cae4ca217599bf2 status=arm64_complete_bound indexed_start=True
0x0664AEE8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0664AEEC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664AEF0: f3b600b0  adrp x19, #0x7d27000
0x0664AEF4: 68c27f39  ldrb w8, [x19, #0xff0]
0x0664AEF8: f40300aa  mov x20, x0
0x0664AEFC: c8000037  tbnz w8, #0, #0x664af14
0x0664AF00: a08100d0  adrp x0, #0x7680000
0x0664AF04: 009443f9  ldr x0, [x0, #0x728]
0x0664AF08: c4d62c97  bl #0x3180a18
0x0664AF0C: 28008052  movz w8, #0x1
0x0664AF10: 68c23f39  strb w8, [x19, #0xff0]
0x0664AF14: 938640f9  ldr x19, [x20, #0x108]
0x0664AF18: f30400b5  cbnz x19, #0x664afb4
0x0664AF1C: 935240f9  ldr x19, [x20, #0xa0]
0x0664AF20: 330500b4  cbz x19, #0x664afc4
0x0664AF24: a98100d0  adrp x9, #0x7680000
0x0664AF28: 299543f9  ldr x9, [x9, #0x728]
0x0664AF2C: 680240f9  ldr x8, [x19]
0x0664AF30: 94220491  add x20, x20, #0x108
0x0664AF34: 350140f9  ldr x21, [x9]
0x0664AF38: 095d4279  ldrh w9, [x8, #0x12e]
0x0664AF3C: a11240f9  ldr x1, [x21, #0x20]
0x0664AF40: a2a24079  ldrh w2, [x21, #0x50]
0x0664AF44: 290100b4  cbz x9, #0x664af68
0x0664AF48: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664AF4C: 4a210091  add x10, x10, #8
0x0664AF50: 4b815ff8  ldur x11, [x10, #-8]
0x0664AF54: 7f0101eb  cmp x11, x1
0x0664AF58: e0000054  b.eq #0x664af74
0x0664AF5C: 290500f1  subs x9, x9, #1
0x0664AF60: 4a410091  add x10, x10, #0x10
0x0664AF64: 61ffff54  b.ne #0x664af50
0x0664AF68: e00313aa  mov x0, x19
0x0664AF6C: e92e2c97  bl #0x3156b10
0x0664AF70: 05000014  b #0x664af84
0x0664AF74: 490140b9  ldr w9, [x10]
0x0664AF78: 2901020b  add w9, w9, w2
0x0664AF7C: 08d1298b  add x8, x8, w9, sxtw #4
0x0664AF80: 00e10491  add x0, x8, #0x138
0x0664AF84: 000440f9  ldr x0, [x0, #8]
0x0664AF88: e10315aa  mov x1, x21
0x0664AF8C: ffd62c97  bl #0x3180b88
0x0664AF90: 080440f9  ldr x8, [x0, #8]
0x0664AF94: e10300aa  mov x1, x0
0x0664AF98: e00313aa  mov x0, x19
0x0664AF9C: 00013fd6  blr x8
0x0664AFA0: f30300aa  mov x19, x0
0x0664AFA4: 800200f9  str x0, [x20]
0x0664AFA8: e00314aa  mov x0, x20
0x0664AFAC: e10313aa  mov x1, x19
0x0664AFB0: 85d62c97  bl #0x31809c4
0x0664AFB4: e00313aa  mov x0, x19
0x0664AFB8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664AFBC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0664AFC0: c0035fd6  ret
0x0664AFC4: 3ad72c97  bl #0x3180cac

; RVA 0x664AFC8 | private BoardComponent get_BoardComponent() { }
; bytes=224 sha256=1e4f0aa9599be69a4b322b041b91a05e4ee286672a7a4b4916aeaf6e89b60cee status=arm64_complete_bound indexed_start=True
0x0664AFC8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0664AFCC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664AFD0: f3b600b0  adrp x19, #0x7d27000
0x0664AFD4: 68c67f39  ldrb w8, [x19, #0xff1]
0x0664AFD8: f40300aa  mov x20, x0
0x0664AFDC: c8000037  tbnz w8, #0, #0x664aff4
0x0664AFE0: e08500b0  adrp x0, #0x7707000
0x0664AFE4: 009c40f9  ldr x0, [x0, #0x138]
0x0664AFE8: 8cd62c97  bl #0x3180a18
0x0664AFEC: 28008052  movz w8, #0x1
0x0664AFF0: 68c63f39  strb w8, [x19, #0xff1]
0x0664AFF4: 938a40f9  ldr x19, [x20, #0x110]
0x0664AFF8: f30400b5  cbnz x19, #0x664b094
0x0664AFFC: 935240f9  ldr x19, [x20, #0xa0]
0x0664B000: 330500b4  cbz x19, #0x664b0a4
0x0664B004: e9850090  adrp x9, #0x7707000
0x0664B008: 299d40f9  ldr x9, [x9, #0x138]
0x0664B00C: 680240f9  ldr x8, [x19]
0x0664B010: 94420491  add x20, x20, #0x110
0x0664B014: 350140f9  ldr x21, [x9]
0x0664B018: 095d4279  ldrh w9, [x8, #0x12e]
0x0664B01C: a11240f9  ldr x1, [x21, #0x20]
0x0664B020: a2a24079  ldrh w2, [x21, #0x50]
0x0664B024: 290100b4  cbz x9, #0x664b048
0x0664B028: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664B02C: 4a210091  add x10, x10, #8
0x0664B030: 4b815ff8  ldur x11, [x10, #-8]
0x0664B034: 7f0101eb  cmp x11, x1
0x0664B038: e0000054  b.eq #0x664b054
0x0664B03C: 290500f1  subs x9, x9, #1
0x0664B040: 4a410091  add x10, x10, #0x10
0x0664B044: 61ffff54  b.ne #0x664b030
0x0664B048: e00313aa  mov x0, x19
0x0664B04C: b12e2c97  bl #0x3156b10
0x0664B050: 05000014  b #0x664b064
0x0664B054: 490140b9  ldr w9, [x10]
0x0664B058: 2901020b  add w9, w9, w2
0x0664B05C: 08d1298b  add x8, x8, w9, sxtw #4
0x0664B060: 00e10491  add x0, x8, #0x138
0x0664B064: 000440f9  ldr x0, [x0, #8]
0x0664B068: e10315aa  mov x1, x21
0x0664B06C: c7d62c97  bl #0x3180b88
0x0664B070: 080440f9  ldr x8, [x0, #8]
0x0664B074: e10300aa  mov x1, x0
0x0664B078: e00313aa  mov x0, x19
0x0664B07C: 00013fd6  blr x8
0x0664B080: f30300aa  mov x19, x0
0x0664B084: 800200f9  str x0, [x20]
0x0664B088: e00314aa  mov x0, x20
0x0664B08C: e10313aa  mov x1, x19
0x0664B090: 4dd62c97  bl #0x31809c4
0x0664B094: e00313aa  mov x0, x19
0x0664B098: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B09C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0664B0A0: c0035fd6  ret
0x0664B0A4: 02d72c97  bl #0x3180cac

; RVA 0x664B0A8 | private PlayerProgressionComponent get_PlayerProgressionComponent() { }
; bytes=224 sha256=05fc2db3502e68d17ecbf9e8745ee9f26b33aa8c047be176be89332306479763 status=arm64_complete_bound indexed_start=True
0x0664B0A8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0664B0AC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664B0B0: f3b60090  adrp x19, #0x7d27000
0x0664B0B4: 68ca7f39  ldrb w8, [x19, #0xff2]
0x0664B0B8: f40300aa  mov x20, x0
0x0664B0BC: c8000037  tbnz w8, #0, #0x664b0d4
0x0664B0C0: 808500f0  adrp x0, #0x76fe000
0x0664B0C4: 00bc42f9  ldr x0, [x0, #0x578]
0x0664B0C8: 54d62c97  bl #0x3180a18
0x0664B0CC: 28008052  movz w8, #0x1
0x0664B0D0: 68ca3f39  strb w8, [x19, #0xff2]
0x0664B0D4: 938e40f9  ldr x19, [x20, #0x118]
0x0664B0D8: f30400b5  cbnz x19, #0x664b174
0x0664B0DC: 935240f9  ldr x19, [x20, #0xa0]
0x0664B0E0: 330500b4  cbz x19, #0x664b184
0x0664B0E4: 898500f0  adrp x9, #0x76fe000
0x0664B0E8: 29bd42f9  ldr x9, [x9, #0x578]
0x0664B0EC: 680240f9  ldr x8, [x19]
0x0664B0F0: 94620491  add x20, x20, #0x118
0x0664B0F4: 350140f9  ldr x21, [x9]
0x0664B0F8: 095d4279  ldrh w9, [x8, #0x12e]
0x0664B0FC: a11240f9  ldr x1, [x21, #0x20]
0x0664B100: a2a24079  ldrh w2, [x21, #0x50]
0x0664B104: 290100b4  cbz x9, #0x664b128
0x0664B108: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664B10C: 4a210091  add x10, x10, #8
0x0664B110: 4b815ff8  ldur x11, [x10, #-8]
0x0664B114: 7f0101eb  cmp x11, x1
0x0664B118: e0000054  b.eq #0x664b134
0x0664B11C: 290500f1  subs x9, x9, #1
0x0664B120: 4a410091  add x10, x10, #0x10
0x0664B124: 61ffff54  b.ne #0x664b110
0x0664B128: e00313aa  mov x0, x19
0x0664B12C: 792e2c97  bl #0x3156b10
0x0664B130: 05000014  b #0x664b144
0x0664B134: 490140b9  ldr w9, [x10]
0x0664B138: 2901020b  add w9, w9, w2
0x0664B13C: 08d1298b  add x8, x8, w9, sxtw #4
0x0664B140: 00e10491  add x0, x8, #0x138
0x0664B144: 000440f9  ldr x0, [x0, #8]
0x0664B148: e10315aa  mov x1, x21
0x0664B14C: 8fd62c97  bl #0x3180b88
0x0664B150: 080440f9  ldr x8, [x0, #8]
0x0664B154: e10300aa  mov x1, x0
0x0664B158: e00313aa  mov x0, x19
0x0664B15C: 00013fd6  blr x8
0x0664B160: f30300aa  mov x19, x0
0x0664B164: 800200f9  str x0, [x20]
0x0664B168: e00314aa  mov x0, x20
0x0664B16C: e10313aa  mov x1, x19
0x0664B170: 15d62c97  bl #0x31809c4
0x0664B174: e00313aa  mov x0, x19
0x0664B178: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B17C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0664B180: c0035fd6  ret
0x0664B184: cad62c97  bl #0x3180cac

; RVA 0x664B188 | private TutorialProgressComponent get_TutorialProgressComponent() { }
; bytes=224 sha256=dfc501cdb16035fe8569d37704d232f7762c423121a0193130b2d9972b69fab0 status=arm64_complete_bound indexed_start=True
0x0664B188: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0664B18C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664B190: f3b60090  adrp x19, #0x7d27000
0x0664B194: 68ce7f39  ldrb w8, [x19, #0xff3]
0x0664B198: f40300aa  mov x20, x0
0x0664B19C: c8000037  tbnz w8, #0, #0x664b1b4
0x0664B1A0: 40850090  adrp x0, #0x76f3000
0x0664B1A4: 00b845f9  ldr x0, [x0, #0xb70]
0x0664B1A8: 1cd62c97  bl #0x3180a18
0x0664B1AC: 28008052  movz w8, #0x1
0x0664B1B0: 68ce3f39  strb w8, [x19, #0xff3]
0x0664B1B4: 939240f9  ldr x19, [x20, #0x120]
0x0664B1B8: f30400b5  cbnz x19, #0x664b254
0x0664B1BC: 935240f9  ldr x19, [x20, #0xa0]
0x0664B1C0: 330500b4  cbz x19, #0x664b264
0x0664B1C4: 49850090  adrp x9, #0x76f3000
0x0664B1C8: 29b945f9  ldr x9, [x9, #0xb70]
0x0664B1CC: 680240f9  ldr x8, [x19]
0x0664B1D0: 94820491  add x20, x20, #0x120
0x0664B1D4: 350140f9  ldr x21, [x9]
0x0664B1D8: 095d4279  ldrh w9, [x8, #0x12e]
0x0664B1DC: a11240f9  ldr x1, [x21, #0x20]
0x0664B1E0: a2a24079  ldrh w2, [x21, #0x50]
0x0664B1E4: 290100b4  cbz x9, #0x664b208
0x0664B1E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664B1EC: 4a210091  add x10, x10, #8
0x0664B1F0: 4b815ff8  ldur x11, [x10, #-8]
0x0664B1F4: 7f0101eb  cmp x11, x1
0x0664B1F8: e0000054  b.eq #0x664b214
0x0664B1FC: 290500f1  subs x9, x9, #1
0x0664B200: 4a410091  add x10, x10, #0x10
0x0664B204: 61ffff54  b.ne #0x664b1f0
0x0664B208: e00313aa  mov x0, x19
0x0664B20C: 412e2c97  bl #0x3156b10
0x0664B210: 05000014  b #0x664b224
0x0664B214: 490140b9  ldr w9, [x10]
0x0664B218: 2901020b  add w9, w9, w2
0x0664B21C: 08d1298b  add x8, x8, w9, sxtw #4
0x0664B220: 00e10491  add x0, x8, #0x138
0x0664B224: 000440f9  ldr x0, [x0, #8]
0x0664B228: e10315aa  mov x1, x21
0x0664B22C: 57d62c97  bl #0x3180b88
0x0664B230: 080440f9  ldr x8, [x0, #8]
0x0664B234: e10300aa  mov x1, x0
0x0664B238: e00313aa  mov x0, x19
0x0664B23C: 00013fd6  blr x8
0x0664B240: f30300aa  mov x19, x0
0x0664B244: 800200f9  str x0, [x20]
0x0664B248: e00314aa  mov x0, x20
0x0664B24C: e10313aa  mov x1, x19
0x0664B250: ddd52c97  bl #0x31809c4
0x0664B254: e00313aa  mov x0, x19
0x0664B258: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B25C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0664B260: c0035fd6  ret
0x0664B264: 92d62c97  bl #0x3180cac

; RVA 0x664B268 | private LiveOpsEventSystem get_LiveOpsEventSystem() { }
; bytes=224 sha256=be93016a5584486a54ba7bfdfb9495ff8fbe0eda6eab90e5d24ce33f0e3ae83d status=arm64_complete_bound indexed_start=True
0x0664B268: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0664B26C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664B270: f3b60090  adrp x19, #0x7d27000
0x0664B274: 68d27f39  ldrb w8, [x19, #0xff4]
0x0664B278: f40300aa  mov x20, x0
0x0664B27C: c8000037  tbnz w8, #0, #0x664b294
0x0664B280: 808100f0  adrp x0, #0x767e000
0x0664B284: 00dc47f9  ldr x0, [x0, #0xfb8]
0x0664B288: e4d52c97  bl #0x3180a18
0x0664B28C: 28008052  movz w8, #0x1
0x0664B290: 68d23f39  strb w8, [x19, #0xff4]
0x0664B294: 939640f9  ldr x19, [x20, #0x128]
0x0664B298: f30400b5  cbnz x19, #0x664b334
0x0664B29C: 937240f9  ldr x19, [x20, #0xe0]
0x0664B2A0: 330500b4  cbz x19, #0x664b344
0x0664B2A4: 898100f0  adrp x9, #0x767e000
0x0664B2A8: 29dd47f9  ldr x9, [x9, #0xfb8]
0x0664B2AC: 680240f9  ldr x8, [x19]
0x0664B2B0: 94a20491  add x20, x20, #0x128
0x0664B2B4: 350140f9  ldr x21, [x9]
0x0664B2B8: 095d4279  ldrh w9, [x8, #0x12e]
0x0664B2BC: a11240f9  ldr x1, [x21, #0x20]
0x0664B2C0: a2a24079  ldrh w2, [x21, #0x50]
0x0664B2C4: 290100b4  cbz x9, #0x664b2e8
0x0664B2C8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664B2CC: 4a210091  add x10, x10, #8
0x0664B2D0: 4b815ff8  ldur x11, [x10, #-8]
0x0664B2D4: 7f0101eb  cmp x11, x1
0x0664B2D8: e0000054  b.eq #0x664b2f4
0x0664B2DC: 290500f1  subs x9, x9, #1
0x0664B2E0: 4a410091  add x10, x10, #0x10
0x0664B2E4: 61ffff54  b.ne #0x664b2d0
0x0664B2E8: e00313aa  mov x0, x19
0x0664B2EC: 092e2c97  bl #0x3156b10
0x0664B2F0: 05000014  b #0x664b304
0x0664B2F4: 490140b9  ldr w9, [x10]
0x0664B2F8: 2901020b  add w9, w9, w2
0x0664B2FC: 08d1298b  add x8, x8, w9, sxtw #4
0x0664B300: 00e10491  add x0, x8, #0x138
0x0664B304: 000440f9  ldr x0, [x0, #8]
0x0664B308: e10315aa  mov x1, x21
0x0664B30C: 1fd62c97  bl #0x3180b88
0x0664B310: 080440f9  ldr x8, [x0, #8]
0x0664B314: e10300aa  mov x1, x0
0x0664B318: e00313aa  mov x0, x19
0x0664B31C: 00013fd6  blr x8
0x0664B320: f30300aa  mov x19, x0
0x0664B324: 800200f9  str x0, [x20]
0x0664B328: e00314aa  mov x0, x20
0x0664B32C: e10313aa  mov x1, x19
0x0664B330: a5d52c97  bl #0x31809c4
0x0664B334: e00313aa  mov x0, x19
0x0664B338: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B33C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0664B340: c0035fd6  ret
0x0664B344: 5ad62c97  bl #0x3180cac

; RVA 0x664B348 | public IGameSessionModel get_GameSessionModel() { }
; bytes=8 sha256=ba4c2ccef6b9b64afc1064a567fd2323a67d13fa4034430dd8b448e052ddbdf2 status=arm64_complete_bound indexed_start=True
0x0664B348: 006840f9  ldr x0, [x0, #0xd0]
0x0664B34C: c0035fd6  ret

; RVA 0x664B350 | public bool get_CanDequeueInCurrentBoardEvent() { }
; bytes=260 sha256=77322dfe7316593987542d6c3d976246118787a6ef5dc87e84d457170f4a4e8b status=arm64_complete_bound indexed_start=True
0x0664B350: fe0f1ef8  str x30, [sp, #-0x20]!
0x0664B354: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664B358: f4b60090  adrp x20, #0x7d27000
0x0664B35C: 88d67f39  ldrb w8, [x20, #0xff5]
0x0664B360: f30300aa  mov x19, x0
0x0664B364: 28010037  tbnz w8, #0, #0x664b388
0x0664B368: 208100f0  adrp x0, #0x7672000
0x0664B36C: 006043f9  ldr x0, [x0, #0x6c0]
0x0664B370: aad52c97  bl #0x3180a18
0x0664B374: 808100f0  adrp x0, #0x767e000
0x0664B378: 00e047f9  ldr x0, [x0, #0xfc0]
0x0664B37C: a7d52c97  bl #0x3180a18
0x0664B380: 28008052  movz w8, #0x1
0x0664B384: 88d63f39  strb w8, [x20, #0xff5]
0x0664B388: 746a40f9  ldr x20, [x19, #0xd0]
0x0664B38C: 340600b4  cbz x20, #0x664b450
0x0664B390: 2a8100f0  adrp x10, #0x7672000
0x0664B394: 880240f9  ldr x8, [x20]
0x0664B398: 4a6143f9  ldr x10, [x10, #0x6c0]
0x0664B39C: 095d4279  ldrh w9, [x8, #0x12e]
0x0664B3A0: 410140f9  ldr x1, [x10]
0x0664B3A4: 290100b4  cbz x9, #0x664b3c8
0x0664B3A8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664B3AC: 4a210091  add x10, x10, #8
0x0664B3B0: 4b815ff8  ldur x11, [x10, #-8]
0x0664B3B4: 7f0101eb  cmp x11, x1
0x0664B3B8: 00010054  b.eq #0x664b3d8
0x0664B3BC: 290500f1  subs x9, x9, #1
0x0664B3C0: 4a410091  add x10, x10, #0x10
0x0664B3C4: 61ffff54  b.ne #0x664b3b0
0x0664B3C8: a2008052  movz w2, #0x5
0x0664B3CC: e00314aa  mov x0, x20
0x0664B3D0: d02d2c97  bl #0x3156b10
0x0664B3D4: 05000014  b #0x664b3e8
0x0664B3D8: 490140b9  ldr w9, [x10]
0x0664B3DC: 29150011  add w9, w9, #5
0x0664B3E0: 08d1298b  add x8, x8, w9, sxtw #4
0x0664B3E4: 00e10491  add x0, x8, #0x138
0x0664B3E8: 080440a9  ldp x8, x1, [x0]
0x0664B3EC: e00314aa  mov x0, x20
0x0664B3F0: 00013fd6  blr x8
0x0664B3F4: e00200b4  cbz x0, #0x664b450
0x0664B3F8: 082040b9  ldr w8, [x0, #0x20]
0x0664B3FC: 1f050071  cmp w8, #1
0x0664B400: 01010054  b.ne #0x664b420
0x0664B404: e00313aa  mov x0, x19
0x0664B408: 98ffff97  bl #0x664b268
0x0664B40C: 200200b4  cbz x0, #0x664b450
0x0664B410: 08604539  ldrb w8, [x0, #0x158]
0x0664B414: a8000034  cbz w8, #0x664b428
0x0664B418: e8031f2a  mov w8, wzr
0x0664B41C: 09000014  b #0x664b440
0x0664B420: 28008052  movz w8, #0x1
0x0664B424: 07000014  b #0x664b440
0x0664B428: e00313aa  mov x0, x19
0x0664B42C: 8fffff97  bl #0x664b268
0x0664B430: 000100b4  cbz x0, #0x664b450
0x0664B434: e1031faa  mov x1, xzr
0x0664B438: 27daf497  bl #0x6381cd4
0x0664B43C: 08000052  eor w8, w0, #1
0x0664B440: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B444: 00010012  and w0, w8, #1
0x0664B448: fe0742f8  ldr x30, [sp], #0x20
0x0664B44C: c0035fd6  ret
0x0664B450: 17d62c97  bl #0x3180cac

; RVA 0x664B454 | public AssetReferenceT<Sprite> get_FirstQueuedItemSprite() { }
; bytes=200 sha256=dc83ab96a23f3bb925aea93aa9af0c2f9ec8873610d2145a060981b131feb570 status=arm64_complete_bound indexed_start=True
0x0664B454: fe0f1ef8  str x30, [sp, #-0x20]!
0x0664B458: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664B45C: f4b60090  adrp x20, #0x7d27000
0x0664B460: 88da7f39  ldrb w8, [x20, #0xff6]
0x0664B464: f30300aa  mov x19, x0
0x0664B468: c8000037  tbnz w8, #0, #0x664b480
0x0664B46C: a08100b0  adrp x0, #0x7680000
0x0664B470: 004843f9  ldr x0, [x0, #0x690]
0x0664B474: 69d52c97  bl #0x3180a18
0x0664B478: 28008052  movz w8, #0x1
0x0664B47C: 88da3f39  strb w8, [x20, #0xff6]
0x0664B480: e00313aa  mov x0, x19
0x0664B484: 99feff97  bl #0x664aee8
0x0664B488: 000300b4  cbz x0, #0x664b4e8
0x0664B48C: e1031faa  mov x1, xzr
0x0664B490: b1e30a94  bl #0x6904354
0x0664B494: a00200b4  cbz x0, #0x664b4e8
0x0664B498: 130840f9  ldr x19, [x0, #0x10]
0x0664B49C: 730200b4  cbz x19, #0x664b4e8
0x0664B4A0: aa8100b0  adrp x10, #0x7680000
0x0664B4A4: 680240f9  ldr x8, [x19]
0x0664B4A8: 4a4943f9  ldr x10, [x10, #0x690]
0x0664B4AC: 095d4279  ldrh w9, [x8, #0x12e]
0x0664B4B0: 410140f9  ldr x1, [x10]
0x0664B4B4: 290100b4  cbz x9, #0x664b4d8
0x0664B4B8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664B4BC: 4a210091  add x10, x10, #8
0x0664B4C0: 4b815ff8  ldur x11, [x10, #-8]
0x0664B4C4: 7f0101eb  cmp x11, x1
0x0664B4C8: 80010054  b.eq #0x664b4f8
0x0664B4CC: 290500f1  subs x9, x9, #1
0x0664B4D0: 4a410091  add x10, x10, #0x10
0x0664B4D4: 61ffff54  b.ne #0x664b4c0
0x0664B4D8: 42008052  movz w2, #0x2
0x0664B4DC: e00313aa  mov x0, x19
0x0664B4E0: 8c2d2c97  bl #0x3156b10
0x0664B4E4: 09000014  b #0x664b508
0x0664B4E8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B4EC: e0031faa  mov x0, xzr
0x0664B4F0: fe0742f8  ldr x30, [sp], #0x20
0x0664B4F4: c0035fd6  ret
0x0664B4F8: 490140b9  ldr w9, [x10]
0x0664B4FC: 29090011  add w9, w9, #2
0x0664B500: 08d1298b  add x8, x8, w9, sxtw #4
0x0664B504: 00e10491  add x0, x8, #0x138
0x0664B508: 020440a9  ldp x2, x1, [x0]
0x0664B50C: e00313aa  mov x0, x19
0x0664B510: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B514: fe0742f8  ldr x30, [sp], #0x20
0x0664B518: 40001fd6  br x2

; RVA 0x664B51C | public double get_ItemDuration() { }
; bytes=328 sha256=dc66f117d35eb309daf880a45fed8c448cea8067d1816cdcc1b68983c41e0f4e status=arm64_complete_bound indexed_start=True
0x0664B51C: e80f1efc  str d8, [sp, #-0x20]!
0x0664B520: fe0700f9  str x30, [sp, #8]
0x0664B524: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664B528: f4b60090  adrp x20, #0x7d27000
0x0664B52C: 88de7f39  ldrb w8, [x20, #0xff7]
0x0664B530: f30300aa  mov x19, x0
0x0664B534: c8000037  tbnz w8, #0, #0x664b54c
0x0664B538: 608100d0  adrp x0, #0x7679000
0x0664B53C: 00d443f9  ldr x0, [x0, #0x7a8]
0x0664B540: 36d52c97  bl #0x3180a18
0x0664B544: 28008052  movz w8, #0x1
0x0664B548: 88de3f39  strb w8, [x20, #0xff7]
0x0664B54C: e00313aa  mov x0, x19
0x0664B550: 66feff97  bl #0x664aee8
0x0664B554: e803679e  fmov d8, xzr
0x0664B558: a00700b4  cbz x0, #0x664b64c
0x0664B55C: e1031faa  mov x1, xzr
0x0664B560: 7de30a94  bl #0x6904354
0x0664B564: 400700b4  cbz x0, #0x664b64c
0x0664B568: 000840f9  ldr x0, [x0, #0x10]
0x0664B56C: 000700b4  cbz x0, #0x664b64c
0x0664B570: 748100d0  adrp x20, #0x7679000
0x0664B574: 94d643f9  ldr x20, [x20, #0x7a8]
0x0664B578: 810240f9  ldr x1, [x20]
0x0664B57C: 85d52c97  bl #0x3180b90
0x0664B580: 600600b4  cbz x0, #0x664b64c
0x0664B584: 080040f9  ldr x8, [x0]
0x0664B588: 810240f9  ldr x1, [x20]
0x0664B58C: f30300aa  mov x19, x0
0x0664B590: 095d4279  ldrh w9, [x8, #0x12e]
0x0664B594: 290100b4  cbz x9, #0x664b5b8
0x0664B598: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664B59C: 4a210091  add x10, x10, #8
0x0664B5A0: 4b815ff8  ldur x11, [x10, #-8]
0x0664B5A4: 7f0101eb  cmp x11, x1
0x0664B5A8: 00010054  b.eq #0x664b5c8
0x0664B5AC: 290500f1  subs x9, x9, #1
0x0664B5B0: 4a410091  add x10, x10, #0x10
0x0664B5B4: 61ffff54  b.ne #0x664b5a0
0x0664B5B8: e00313aa  mov x0, x19
0x0664B5BC: e2031f2a  mov w2, wzr
0x0664B5C0: 542d2c97  bl #0x3156b10
0x0664B5C4: 04000014  b #0x664b5d4
0x0664B5C8: 490180b9  ldrsw x9, [x10]
0x0664B5CC: 0811098b  add x8, x8, x9, lsl #4
0x0664B5D0: 00e10491  add x0, x8, #0x138
0x0664B5D4: 080440a9  ldp x8, x1, [x0]
0x0664B5D8: e00313aa  mov x0, x19
0x0664B5DC: 00013fd6  blr x8
0x0664B5E0: 000400b4  cbz x0, #0x664b660
0x0664B5E4: 08404039  ldrb w8, [x0, #0x10]
0x0664B5E8: 28030034  cbz w8, #0x664b64c
0x0664B5EC: 680240f9  ldr x8, [x19]
0x0664B5F0: 810240f9  ldr x1, [x20]
0x0664B5F4: 095d4279  ldrh w9, [x8, #0x12e]
0x0664B5F8: 290100b4  cbz x9, #0x664b61c
0x0664B5FC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664B600: 4a210091  add x10, x10, #8
0x0664B604: 4b815ff8  ldur x11, [x10, #-8]
0x0664B608: 7f0101eb  cmp x11, x1
0x0664B60C: 00010054  b.eq #0x664b62c
0x0664B610: 290500f1  subs x9, x9, #1
0x0664B614: 4a410091  add x10, x10, #0x10
0x0664B618: 61ffff54  b.ne #0x664b604
0x0664B61C: e00313aa  mov x0, x19
0x0664B620: e2031f2a  mov w2, wzr
0x0664B624: 3b2d2c97  bl #0x3156b10
0x0664B628: 04000014  b #0x664b638
0x0664B62C: 490180b9  ldrsw x9, [x10]
0x0664B630: 0811098b  add x8, x8, x9, lsl #4
0x0664B634: 00e10491  add x0, x8, #0x138
0x0664B638: 080440a9  ldp x8, x1, [x0]
0x0664B63C: e00313aa  mov x0, x19
0x0664B640: 00013fd6  blr x8
0x0664B644: e00000b4  cbz x0, #0x664b660
0x0664B648: 080c40fd  ldr d8, [x0, #0x18]
0x0664B64C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B650: fe0740f9  ldr x30, [sp, #8]
0x0664B654: 001da84e  mov v0.16b, v8.16b
0x0664B658: e80742fc  ldr d8, [sp], #0x20
0x0664B65C: c0035fd6  ret
0x0664B660: 93d52c97  bl #0x3180cac

; RVA 0x664B664 | public bool get_IsBoardFull() { }
; bytes=28 sha256=e5b6bef127d91e8f9840ed69e6a82d516400d97d53c83a4e1b215d34fe819af8 status=arm64_complete_bound indexed_start=True
0x0664B664: fe0f1ff8  str x30, [sp, #-0x10]!
0x0664B668: 58feff97  bl #0x664afc8
0x0664B66C: 800000b4  cbz x0, #0x664b67c
0x0664B670: e1031faa  mov x1, xzr
0x0664B674: fe0741f8  ldr x30, [sp], #0x10
0x0664B678: 17db0a14  b #0x69022d4
0x0664B67C: 8cd52c97  bl #0x3180cac

; RVA 0x664B680 | public int get_NumItemsInQueue() { }
; bytes=28 sha256=234699143ee829a2b5cd59aa3ff3ae3d05819147eafe358d914d17e293289dea status=arm64_complete_bound indexed_start=True
0x0664B680: fe0f1ff8  str x30, [sp, #-0x10]!
0x0664B684: 19feff97  bl #0x664aee8
0x0664B688: 800000b4  cbz x0, #0x664b698
0x0664B68C: e1031faa  mov x1, xzr
0x0664B690: fe0741f8  ldr x30, [sp], #0x10
0x0664B694: 51e00a14  b #0x69037d8
0x0664B698: 85d52c97  bl #0x3180cac

; RVA 0x664B69C | public int get_PlayerLevel() { }
; bytes=84 sha256=367f686a1bd481e97f91875f779ef7aa3bd0d769c0a3dfc6c912341f80b69d91 status=arm64_complete_bound indexed_start=True
0x0664B69C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0664B6A0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664B6A4: f4b60090  adrp x20, #0x7d27000
0x0664B6A8: 88e27f39  ldrb w8, [x20, #0xff8]
0x0664B6AC: f30300aa  mov x19, x0
0x0664B6B0: c8000037  tbnz w8, #0, #0x664b6c8
0x0664B6B4: 40810090  adrp x0, #0x7673000
0x0664B6B8: 003440f9  ldr x0, [x0, #0x68]
0x0664B6BC: d7d42c97  bl #0x3180a18
0x0664B6C0: 28008052  movz w8, #0x1
0x0664B6C4: 88e23f39  strb w8, [x20, #0xff8]
0x0664B6C8: e00313aa  mov x0, x19
0x0664B6CC: 77feff97  bl #0x664b0a8
0x0664B6D0: e00000b4  cbz x0, #0x664b6ec
0x0664B6D4: 081440f9  ldr x8, [x0, #0x28]
0x0664B6D8: a80000b4  cbz x8, #0x664b6ec
0x0664B6DC: 002140b9  ldr w0, [x8, #0x20]
0x0664B6E0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B6E4: fe0742f8  ldr x30, [sp], #0x20
0x0664B6E8: c0035fd6  ret
0x0664B6EC: 70d52c97  bl #0x3180cac

; RVA 0x664B6F0 | public bool get_ShowingTutorial() { }
; bytes=36 sha256=59466fb85c0df60f25ac25efa29c65dcff0b87551b2c3ee14557ac49cc084fb8 status=arm64_complete_bound indexed_start=True
0x0664B6F0: fe0f1ff8  str x30, [sp, #-0x10]!
0x0664B6F4: a5feff97  bl #0x664b188
0x0664B6F8: c00000b4  cbz x0, #0x664b710
0x0664B6FC: 081440f9  ldr x8, [x0, #0x28]
0x0664B700: 1f0100f1  cmp x8, #0
0x0664B704: e0079f1a  cset w0, ne
0x0664B708: fe0741f8  ldr x30, [sp], #0x10
0x0664B70C: c0035fd6  ret
0x0664B710: 67d52c97  bl #0x3180cac

; RVA 0x664B714 | public BindableProperty<bool> get_IsLoading() { }
; bytes=24 sha256=eb7868f92d03a3db90799453af62908bffa11df3d93261e0418fb9b8cdd55cac status=arm64_complete_bound indexed_start=True
0x0664B714: 088440f9  ldr x8, [x0, #0x108]
0x0664B718: 680000b4  cbz x8, #0x664b724
0x0664B71C: 003140f9  ldr x0, [x8, #0x60]
0x0664B720: c0035fd6  ret
0x0664B724: e0031faa  mov x0, xzr
0x0664B728: c0035fd6  ret

; RVA 0x664B72C | public BindableProperty<GameState> get_PrimaryGameState() { }
; bytes=164 sha256=8b5e1667316722fc9191043812f382c9125043dcf3426d4946d76a1155134ff6 status=arm64_complete_bound indexed_start=True
0x0664B72C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0664B730: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664B734: f4b60090  adrp x20, #0x7d27000
0x0664B738: 88e67f39  ldrb w8, [x20, #0xff9]
0x0664B73C: f30300aa  mov x19, x0
0x0664B740: c8000037  tbnz w8, #0, #0x664b758
0x0664B744: 208100f0  adrp x0, #0x7672000
0x0664B748: 006043f9  ldr x0, [x0, #0x6c0]
0x0664B74C: b3d42c97  bl #0x3180a18
0x0664B750: 28008052  movz w8, #0x1
0x0664B754: 88e63f39  strb w8, [x20, #0xff9]
0x0664B758: 736a40f9  ldr x19, [x19, #0xd0]
0x0664B75C: 930300b4  cbz x19, #0x664b7cc
0x0664B760: 2a8100f0  adrp x10, #0x7672000
0x0664B764: 680240f9  ldr x8, [x19]
0x0664B768: 4a6143f9  ldr x10, [x10, #0x6c0]
0x0664B76C: 095d4279  ldrh w9, [x8, #0x12e]
0x0664B770: 410140f9  ldr x1, [x10]
0x0664B774: 290100b4  cbz x9, #0x664b798
0x0664B778: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664B77C: 4a210091  add x10, x10, #8
0x0664B780: 4b815ff8  ldur x11, [x10, #-8]
0x0664B784: 7f0101eb  cmp x11, x1
0x0664B788: 00010054  b.eq #0x664b7a8
0x0664B78C: 290500f1  subs x9, x9, #1
0x0664B790: 4a410091  add x10, x10, #0x10
0x0664B794: 61ffff54  b.ne #0x664b780
0x0664B798: 82008052  movz w2, #0x4
0x0664B79C: e00313aa  mov x0, x19
0x0664B7A0: dc2c2c97  bl #0x3156b10
0x0664B7A4: 05000014  b #0x664b7b8
0x0664B7A8: 490140b9  ldr w9, [x10]
0x0664B7AC: 29110011  add w9, w9, #4
0x0664B7B0: 08d1298b  add x8, x8, w9, sxtw #4
0x0664B7B4: 00e10491  add x0, x8, #0x138
0x0664B7B8: 020440a9  ldp x2, x1, [x0]
0x0664B7BC: e00313aa  mov x0, x19
0x0664B7C0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B7C4: fe0742f8  ldr x30, [sp], #0x20
0x0664B7C8: 40001fd6  br x2
0x0664B7CC: 38d52c97  bl #0x3180cac

; RVA 0x664B7D0 | public BindableProperty<GameState> get_GameState() { }
; bytes=164 sha256=611ca2481a51aa5d6242e66e8ae33b97e028cfe8820e9c9223214a1fcd9d3fb0 status=arm64_complete_bound indexed_start=True
0x0664B7D0: fe0f1ef8  str x30, [sp, #-0x20]!
0x0664B7D4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664B7D8: f4b60090  adrp x20, #0x7d27000
0x0664B7DC: 88ea7f39  ldrb w8, [x20, #0xffa]
0x0664B7E0: f30300aa  mov x19, x0
0x0664B7E4: c8000037  tbnz w8, #0, #0x664b7fc
0x0664B7E8: 208100f0  adrp x0, #0x7672000
0x0664B7EC: 006043f9  ldr x0, [x0, #0x6c0]
0x0664B7F0: 8ad42c97  bl #0x3180a18
0x0664B7F4: 28008052  movz w8, #0x1
0x0664B7F8: 88ea3f39  strb w8, [x20, #0xffa]
0x0664B7FC: 736a40f9  ldr x19, [x19, #0xd0]
0x0664B800: 930300b4  cbz x19, #0x664b870
0x0664B804: 2a8100f0  adrp x10, #0x7672000
0x0664B808: 680240f9  ldr x8, [x19]
0x0664B80C: 4a6143f9  ldr x10, [x10, #0x6c0]
0x0664B810: 095d4279  ldrh w9, [x8, #0x12e]
0x0664B814: 410140f9  ldr x1, [x10]
0x0664B818: 290100b4  cbz x9, #0x664b83c
0x0664B81C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664B820: 4a210091  add x10, x10, #8
0x0664B824: 4b815ff8  ldur x11, [x10, #-8]
0x0664B828: 7f0101eb  cmp x11, x1
0x0664B82C: 00010054  b.eq #0x664b84c
0x0664B830: 290500f1  subs x9, x9, #1
0x0664B834: 4a410091  add x10, x10, #0x10
0x0664B838: 61ffff54  b.ne #0x664b824
0x0664B83C: 62008052  movz w2, #0x3
0x0664B840: e00313aa  mov x0, x19
0x0664B844: b32c2c97  bl #0x3156b10
0x0664B848: 05000014  b #0x664b85c
0x0664B84C: 490140b9  ldr w9, [x10]
0x0664B850: 290d0011  add w9, w9, #3
0x0664B854: 08d1298b  add x8, x8, w9, sxtw #4
0x0664B858: 00e10491  add x0, x8, #0x138
0x0664B85C: 020440a9  ldp x2, x1, [x0]
0x0664B860: e00313aa  mov x0, x19
0x0664B864: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B868: fe0742f8  ldr x30, [sp], #0x20
0x0664B86C: 40001fd6  br x2
0x0664B870: 0fd52c97  bl #0x3180cac

; RVA 0x664B874 | protected override RewardAnimationTarget get_RewardAnimationTarget() { }
; bytes=8 sha256=0becf359e148792c5ed24ca79a91209e5f15e0f015d2a0b9f4d69c2e82d59f3a status=arm64_complete_bound indexed_start=True
0x0664B874: 40008052  movz w0, #0x2
0x0664B878: c0035fd6  ret

; RVA 0x664B87C | public bool get_IsBoardVisible() { }
; bytes=192 sha256=dba097d2aee8c74e6a766537288c1c8f683fa309931efed174fae67aacaa118b status=arm64_complete_bound indexed_start=True
0x0664B87C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0664B880: f44f01a9  stp x20, x19, [sp, #0x10]
0x0664B884: f4b60090  adrp x20, #0x7d27000
0x0664B888: 88ee7f39  ldrb w8, [x20, #0xffb]
0x0664B88C: f30300aa  mov x19, x0
0x0664B890: 28010037  tbnz w8, #0, #0x664b8b4
0x0664B894: 20810090  adrp x0, #0x766f000
0x0664B898: 001842f9  ldr x0, [x0, #0x430]
0x0664B89C: 5fd42c97  bl #0x3180a18
0x0664B8A0: 208100f0  adrp x0, #0x7672000
0x0664B8A4: 006043f9  ldr x0, [x0, #0x6c0]
0x0664B8A8: 5cd42c97  bl #0x3180a18
0x0664B8AC: 28008052  movz w8, #0x1
0x0664B8B0: 88ee3f39  strb w8, [x20, #0xffb]
0x0664B8B4: 736a40f9  ldr x19, [x19, #0xd0]
0x0664B8B8: 130400b4  cbz x19, #0x664b938
0x0664B8BC: 2a8100f0  adrp x10, #0x7672000
0x0664B8C0: 680240f9  ldr x8, [x19]
0x0664B8C4: 4a6143f9  ldr x10, [x10, #0x6c0]
0x0664B8C8: 34810090  adrp x20, #0x766f000
0x0664B8CC: 095d4279  ldrh w9, [x8, #0x12e]
0x0664B8D0: 410140f9  ldr x1, [x10]
0x0664B8D4: 941a42f9  ldr x20, [x20, #0x430]
0x0664B8D8: 290100b4  cbz x9, #0x664b8fc
0x0664B8DC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664B8E0: 4a210091  add x10, x10, #8
0x0664B8E4: 4b815ff8  ldur x11, [x10, #-8]
0x0664B8E8: 7f0101eb  cmp x11, x1
0x0664B8EC: 00010054  b.eq #0x664b90c
0x0664B8F0: 290500f1  subs x9, x9, #1
0x0664B8F4: 4a410091  add x10, x10, #0x10
0x0664B8F8: 61ffff54  b.ne #0x664b8e4
0x0664B8FC: 82018052  movz w2, #0xc
0x0664B900: e00313aa  mov x0, x19
0x0664B904: 832c2c97  bl #0x3156b10
0x0664B908: 05000014  b #0x664b91c
0x0664B90C: 490140b9  ldr w9, [x10]
0x0664B910: 29310011  add w9, w9, #0xc
0x0664B914: 08d1298b  add x8, x8, w9, sxtw #4
0x0664B918: 00e10491  add x0, x8, #0x138
0x0664B91C: 080440a9  ldp x8, x1, [x0]
0x0664B920: e00313aa  mov x0, x19
0x0664B924: 00013fd6  blr x8
0x0664B928: 810240f9  ldr x1, [x20]
0x0664B92C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0664B930: fe0742f8  ldr x30, [sp], #0x20
0x0664B934: ea099717  b #0x4c0e0dc
0x0664B938: ddd42c97  bl #0x3180cac

; RVA 0x664B93C | public void SendUserActionDuringOrderCompleteAnalytic(UserActionTypeDuringOrderComplete actionType, string mergeItemId) { }
; bytes=152 sha256=8693a88f01149186a06e52ec23840090f309d9ffefaf8299d336e22a770eb454 status=arm64_complete_bound indexed_start=True
0x0664B93C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0664B940: f65701a9  stp x22, x21, [sp, #0x10]
0x0664B944: f44f02a9  stp x20, x19, [sp, #0x20]
0x0664B948: f7b60090  adrp x23, #0x7d27000
0x0664B94C: d68500f0  adrp x22, #0x7706000
0x0664B950: e8f27f39  ldrb w8, [x23, #0xffc]
0x0664B954: d6ae44f9  ldr x22, [x22, #0x958]
0x0664B958: f30302aa  mov x19, x2
0x0664B95C: f403012a  mov w20, w1
0x0664B960: f50300aa  mov x21, x0
0x0664B964: 28010037  tbnz w8, #0, #0x664b988
0x0664B968: e0850090  adrp x0, #0x7707000
0x0664B96C: 00a040f9  ldr x0, [x0, #0x140]
0x0664B970: 2ad42c97  bl #0x3180a18
0x0664B974: c08500f0  adrp x0, #0x7706000
0x0664B978: 00ac44f9  ldr x0, [x0, #0x958]
0x0664B97C: 27d42c97  bl #0x3180a18
0x0664B980: 28008052  movz w8, #0x1
0x0664B984: e8f23f39  strb w8, [x23, #0xffc]
0x0664B988: c00240f9  ldr x0, [x22]
0x0664B98C: b51240f9  ldr x21, [x21, #0x20]
0x0664B990: c4d42c97  bl #0x3180ca0
0x0664B994: e103142a  mov w1, w20
0x0664B998: e20313aa  mov x2, x19
0x0664B99C: e3031faa  mov x3, xzr
0x0664B9A0: f60300aa  mov x22, x0
0x0664B9A4: b3a4e697  bl #0x5ff4c70
0x0664B9A8: 550100b4  cbz x21, #0x664b9d0
0x0664B9AC: e8850090  adrp x8, #0x7707000
0x0664B9B0: 08a140f9  ldr x8, [x8, #0x140]
0x0664B9B4: e00315aa  mov x0, x21
0x0664B9B8: e10316aa  mov x1, x22
0x0664B9BC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0664B9C0: 020140f9  ldr x2, [x8]
0x0664B9C4: f65741a9  ldp x22, x21, [sp, #0x10]
0x0664B9C8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0664B9CC: e8645d17  b #0x3da4d6c
0x0664B9D0: b7d42c97  bl #0x3180cac

; RVA 0x664B9D4 | public override void RegisterRewardTargets(RectTransform targetRectTransform) { }
; bytes=1048 sha256=1540e79014d2879c46ed22660b3a3fe09912f5970b5dfb7c49eaaea87d476ebd status=arm64_complete_bound indexed_start=True
0x0664B9D4: ff4302d1  sub sp, sp, #0x90
0x0664B9D8: fe6f04a9  stp x30, x27, [sp, #0x40]
0x0664B9DC: fa6705a9  stp x26, x25, [sp, #0x50]
0x0664B9E0: f85f06a9  stp x24, x23, [sp, #0x60]
0x0664B9E4: f65707a9  stp x22, x21, [sp, #0x70]
0x0664B9E8: f44f08a9  stp x20, x19, [sp, #0x80]
0x0664B9EC: f5b60090  adrp x21, #0x7d27000
0x0664B9F0: a8f67f39  ldrb w8, [x21, #0xffd]
0x0664B9F4: f30301aa  mov x19, x1
0x0664B9F8: f40300aa  mov x20, x0
0x0664B9FC: 68030037  tbnz w8, #0, #0x664ba68
0x0664BA00: e0850090  adrp x0, #0x7707000
0x0664BA04: 00a440f9  ldr x0, [x0, #0x148]
0x0664BA08: 04d42c97  bl #0x3180a18
0x0664BA0C: e0850090  adrp x0, #0x7707000
0x0664BA10: 00a840f9  ldr x0, [x0, #0x150]
0x0664BA14: 01d42c97  bl #0x3180a18
0x0664BA18: e0850090  adrp x0, #0x7707000
0x0664BA1C: 00ac40f9  ldr x0, [x0, #0x158]
0x0664BA20: fed32c97  bl #0x3180a18
0x0664BA24: e0850090  adrp x0, #0x7707000
0x0664BA28: 00b040f9  ldr x0, [x0, #0x160]
0x0664BA2C: fbd32c97  bl #0x3180a18
0x0664BA30: a0810090  adrp x0, #0x767f000
0x0664BA34: 008446f9  ldr x0, [x0, #0xd08]
0x0664BA38: f8d32c97  bl #0x3180a18
0x0664BA3C: 208100f0  adrp x0, #0x7672000
0x0664BA40: 006043f9  ldr x0, [x0, #0x6c0]
0x0664BA44: f5d32c97  bl #0x3180a18
0x0664BA48: 808100f0  adrp x0, #0x767e000
0x0664BA4C: 00e047f9  ldr x0, [x0, #0xfc0]
0x0664BA50: f2d32c97  bl #0x3180a18
0x0664BA54: 40810090  adrp x0, #0x7673000
0x0664BA58: 005c40f9  ldr x0, [x0, #0xb8]
0x0664BA5C: efd32c97  bl #0x3180a18
0x0664BA60: 28008052  movz w8, #0x1
0x0664BA64: a8f63f39  strb w8, [x21, #0xffd]
0x0664BA68: e00314aa  mov x0, x20
0x0664BA6C: e10313aa  mov x1, x19
0x0664BA70: e2031faa  mov x2, xzr
0x0664BA74: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x0664BA78: ff1b00f9  str xzr, [sp, #0x30]
0x0664BA7C: 501ceb97  bl #0x6112bbc
0x0664BA80: 808240f9  ldr x0, [x20, #0x100]
0x0664BA84: 601600b4  cbz x0, #0x664bd50
0x0664BA88: e8850090  adrp x8, #0x7707000
0x0664BA8C: 08b140f9  ldr x8, [x8, #0x160]
0x0664BA90: f8850090  adrp x24, #0x7707000
0x0664BA94: 59810090  adrp x25, #0x7673000
0x0664BA98: 18ab40f9  ldr x24, [x24, #0x150]
0x0664BA9C: 395f40f9  ldr x25, [x25, #0xb8]
0x0664BAA0: 010140f9  ldr x1, [x8]
0x0664BAA4: ba810090  adrp x26, #0x767f000
0x0664BAA8: 3b8100f0  adrp x27, #0x7672000
0x0664BAAC: f7850090  adrp x23, #0x7707000
0x0664BAB0: 5a8746f9  ldr x26, [x26, #0xd08]
0x0664BAB4: 7b6343f9  ldr x27, [x27, #0x6c0]
0x0664BAB8: f7a640f9  ldr x23, [x23, #0x148]
0x0664BABC: e8230091  add x8, sp, #8
0x0664BAC0: bad3b197  bl #0x52c09a8
0x0664BAC4: e083c03c  ldur q0, [sp, #8]
0x0664BAC8: e80f40f9  ldr x8, [sp, #0x18]
0x0664BACC: e00b803d  str q0, [sp, #0x20]
0x0664BAD0: e81b00f9  str x8, [sp, #0x30]
0x0664BAD4: 010340f9  ldr x1, [x24]
0x0664BAD8: e0830091  add x0, sp, #0x20
0x0664BADC: 5a26a797  bl #0x5015444
0x0664BAE0: e0110036  tbz w0, #0, #0x664bd1c
0x0664BAE4: 200340f9  ldr x0, [x25]
0x0664BAE8: f51b40f9  ldr x21, [sp, #0x30]
0x0664BAEC: 08e040b9  ldr w8, [x0, #0xe0]
0x0664BAF0: 68000035  cbnz w8, #0x664bafc
0x0664BAF4: 26d42c97  bl #0x3180b8c
0x0664BAF8: 200340f9  ldr x0, [x25]
0x0664BAFC: 551200b4  cbz x21, #0x664bd44
0x0664BB00: 095c40f9  ldr x9, [x0, #0xb8]
0x0664BB04: a80240f9  ldr x8, [x21]
0x0664BB08: 410340f9  ldr x1, [x26]
0x0664BB0C: 362540f9  ldr x22, [x9, #0x48]
0x0664BB10: 095d4279  ldrh w9, [x8, #0x12e]
0x0664BB14: 290100b4  cbz x9, #0x664bb38
0x0664BB18: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664BB1C: 4a210091  add x10, x10, #8
0x0664BB20: 4b815ff8  ldur x11, [x10, #-8]
0x0664BB24: 7f0101eb  cmp x11, x1
0x0664BB28: 00010054  b.eq #0x664bb48
0x0664BB2C: 290500f1  subs x9, x9, #1
0x0664BB30: 4a410091  add x10, x10, #0x10
0x0664BB34: 61ffff54  b.ne #0x664bb20
0x0664BB38: e00315aa  mov x0, x21
0x0664BB3C: e2031f2a  mov w2, wzr
0x0664BB40: f42b2c97  bl #0x3156b10
0x0664BB44: 04000014  b #0x664bb54
0x0664BB48: 490180b9  ldrsw x9, [x10]
0x0664BB4C: 0811098b  add x8, x8, x9, lsl #4
0x0664BB50: 00e10491  add x0, x8, #0x138
0x0664BB54: 080840a9  ldp x8, x2, [x0]
0x0664BB58: e00315aa  mov x0, x21
0x0664BB5C: e10316aa  mov x1, x22
0x0664BB60: 00013fd6  blr x8
0x0664BB64: 80fb0737  tbnz w0, #0, #0x664bad4
0x0664BB68: 200340f9  ldr x0, [x25]
0x0664BB6C: 08e040b9  ldr w8, [x0, #0xe0]
0x0664BB70: 68000035  cbnz w8, #0x664bb7c
0x0664BB74: 06d42c97  bl #0x3180b8c
0x0664BB78: 200340f9  ldr x0, [x25]
0x0664BB7C: 095c40f9  ldr x9, [x0, #0xb8]
0x0664BB80: a80240f9  ldr x8, [x21]
0x0664BB84: 410340f9  ldr x1, [x26]
0x0664BB88: 360940f9  ldr x22, [x9, #0x10]
0x0664BB8C: 095d4279  ldrh w9, [x8, #0x12e]
0x0664BB90: 290100b4  cbz x9, #0x664bbb4
0x0664BB94: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664BB98: 4a210091  add x10, x10, #8
0x0664BB9C: 4b815ff8  ldur x11, [x10, #-8]
0x0664BBA0: 7f0101eb  cmp x11, x1
0x0664BBA4: 00010054  b.eq #0x664bbc4
0x0664BBA8: 290500f1  subs x9, x9, #1
0x0664BBAC: 4a410091  add x10, x10, #0x10
0x0664BBB0: 61ffff54  b.ne #0x664bb9c
0x0664BBB4: e00315aa  mov x0, x21
0x0664BBB8: e2031f2a  mov w2, wzr
0x0664BBBC: d52b2c97  bl #0x3156b10
0x0664BBC0: 04000014  b #0x664bbd0
0x0664BBC4: 490180b9  ldrsw x9, [x10]
0x0664BBC8: 0811098b  add x8, x8, x9, lsl #4
0x0664BBCC: 00e10491  add x0, x8, #0x138
0x0664BBD0: 080840a9  ldp x8, x2, [x0]
0x0664BBD4: e00315aa  mov x0, x21
0x0664BBD8: e10316aa  mov x1, x22
0x0664BBDC: 00013fd6  blr x8
0x0664BBE0: a0f70737  tbnz w0, #0, #0x664bad4
0x0664BBE4: 200340f9  ldr x0, [x25]
0x0664BBE8: 08e040b9  ldr w8, [x0, #0xe0]
0x0664BBEC: 68000035  cbnz w8, #0x664bbf8
0x0664BBF0: e7d32c97  bl #0x3180b8c
0x0664BBF4: 200340f9  ldr x0, [x25]
0x0664BBF8: 095c40f9  ldr x9, [x0, #0xb8]
0x0664BBFC: a80240f9  ldr x8, [x21]
0x0664BC00: 410340f9  ldr x1, [x26]
0x0664BC04: 360d40f9  ldr x22, [x9, #0x18]
0x0664BC08: 095d4279  ldrh w9, [x8, #0x12e]
0x0664BC0C: 290100b4  cbz x9, #0x664bc30
0x0664BC10: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664BC14: 4a210091  add x10, x10, #8
0x0664BC18: 4b815ff8  ldur x11, [x10, #-8]
0x0664BC1C: 7f0101eb  cmp x11, x1
0x0664BC20: 00010054  b.eq #0x664bc40
0x0664BC24: 290500f1  subs x9, x9, #1
0x0664BC28: 4a410091  add x10, x10, #0x10
0x0664BC2C: 61ffff54  b.ne #0x664bc18
0x0664BC30: e00315aa  mov x0, x21
0x0664BC34: e2031f2a  mov w2, wzr
0x0664BC38: b62b2c97  bl #0x3156b10
0x0664BC3C: 04000014  b #0x664bc4c
0x0664BC40: 490180b9  ldrsw x9, [x10]
0x0664BC44: 0811098b  add x8, x8, x9, lsl #4
0x0664BC48: 00e10491  add x0, x8, #0x138
0x0664BC4C: 080840a9  ldp x8, x2, [x0]
0x0664BC50: e00315aa  mov x0, x21
0x0664BC54: e10316aa  mov x1, x22
0x0664BC58: 00013fd6  blr x8
0x0664BC5C: c0f30737  tbnz w0, #0, #0x664bad4
0x0664BC60: 966a40f9  ldr x22, [x20, #0xd0]
0x0664BC64: 560700b4  cbz x22, #0x664bd4c
0x0664BC68: c80240f9  ldr x8, [x22]
0x0664BC6C: 610340f9  ldr x1, [x27]
0x0664BC70: 095d4279  ldrh w9, [x8, #0x12e]
0x0664BC74: 290100b4  cbz x9, #0x664bc98
0x0664BC78: 0a5940f9  ldr x10, [x8, #0xb0]
0x0664BC7C: 4a210091  add x10, x10, #8
0x0664BC80: 4b815ff8  ldur x11, [x10, #-8]
0x0664BC84: 7f0101eb  cmp x11, x1
0x0664BC88: 00010054  b.eq #0x664bca8
0x0664BC8C: 290500f1  subs x9, x9, #1
0x0664BC90: 4a410091  add x10, x10, #0x10
0x0664BC94: 61ffff54  b.ne #0x664bc80
0x0664BC98: a2008052  movz w2, #0x5
0x0664BC9C: e00316aa  mov x0, x22
0x0664BCA0: 9c2b2c97  bl #0x3156b10
0x0664BCA4: 05000014  b #0x664bcb8
0x0664BCA8: 490140b9  ldr w9, [x10]
0x0664BCAC: 29150011  add w9, w9, #5
0x0664BCB0: 08d1298b  add x8, x8, w9, sxtw #4
0x0664BCB4: 00e10491  add x0, x8, #0x138
0x0664BCB8: 080440a9  ldp x8, x1, [x0]
0x0664BCBC: e00316aa  mov x0, x22
0x0664BCC0: 00013fd6  blr x8
0x0664BCC4: 200400b4  cbz x0, #0x664bd48
0x0664BCC8: 082040b9  ldr w8, [x0, #0x20]
0x0664BCCC: 48010034  cbz w8, #0x664bcf4
0x0664BCD0: 1f050071  cmp w8, #1
0x0664BCD4: 01f0ff54  b.ne #0x664bad4
0x0664BCD8: 23008052  movz w3, #0x1
0x0664BCDC: e00314aa  mov x0, x20
0x0664BCE0: e10315aa  mov x1, x21
0x0664BCE4: e20313aa  mov x2, x19
0x0664BCE8: e4031faa  mov x4, xzr
0x0664BCEC: b51beb97  bl #0x6112bc0
0x0664BCF0: 79ffff17  b #0x664bad4
0x0664BCF4: e00314aa  mov x0, x20
0x0664BCF8: e1feff97  bl #0x664b87c
0x0664BCFC: c0ee0736  tbz w0, #0, #0x664bad4
0x0664BD00: 43008052  movz w3, #0x2
0x0664BD04: e00314aa  mov x0, x20
0x0664BD08: e10315aa  mov x1, x21
0x0664BD0C: e20313aa  mov x2, x19
0x0664BD10: e4031faa  mov x4, xzr
0x0664BD14: ab1beb97  bl #0x6112bc0
0x0664BD18: 6fffff17  b #0x664bad4
0x0664BD1C: e10240f9  ldr x1, [x23]
0x0664BD20: e0830091  add x0, sp, #0x20
0x0664BD24: c725a797  bl #0x5015440
0x0664BD28: f44f48a9  ldp x20, x19, [sp, #0x80]
0x0664BD2C: f65747a9  ldp x22, x21, [sp, #0x70]
0x0664BD30: f85f46a9  ldp x24, x23, [sp, #0x60]
0x0664BD34: fa6745a9  ldp x26, x25, [sp, #0x50]
0x0664BD38: fe6f44a9  ldp x30, x27, [sp, #0x40]
0x0664BD3C: ff430291  add sp, sp, #0x90
0x0664BD40: c0035fd6  ret
0x0664BD44: dad32c97  bl #0x3180cac
0x0664BD48: d9d32c97  bl #0x3180cac
0x0664BD4C: d8d32c97  bl #0x3180cac
0x0664BD50: d7d32c97  bl #0x3180cac
0x0664BD54: 0d000014  b #0x664bd88
0x0664BD58: 0c000014  b #0x664bd88
0x0664BD5C: 0b000014  b #0x664bd88
0x0664BD60: 0a000014  b #0x664bd88
0x0664BD64: 09000014  b #0x664bd88
0x0664BD68: 08000014  b #0x664bd88
0x0664BD6C: 07000014  b #0x664bd88
0x0664BD70: 06000014  b #0x664bd88
0x0664BD74: 05000014  b #0x664bd88
0x0664BD78: 04000014  b #0x664bd88
0x0664BD7C: 03000014  b #0x664bd88
0x0664BD80: 02000014  b #0x664bd88
0x0664BD84: 01000014  b #0x664bd88
0x0664BD88: f30300aa  mov x19, x0
0x0664BD8C: 3f040071  cmp w1, #1
0x0664BD90: 61010054  b.ne #0x664bdbc
0x0664BD94: e00313aa  mov x0, x19
0x0664BD98: de0a2e94  bl #0x71ce910
0x0664BD9C: 140040f9  ldr x20, [x0]
0x0664BDA0: e00a2e94  bl #0x71ce920
0x0664BDA4: e10240f9  ldr x1, [x23]
0x0664BDA8: e0830091  add x0, sp, #0x20
0x0664BDAC: a525a797  bl #0x5015440
0x0664BDB0: d4fbffb4  cbz x20, #0x664bd28
0x0664BDB4: e00314aa  mov x0, x20
0x0664BDB8: bbd32c97  bl #0x3180ca4
0x0664BDBC: f4031faa  mov x20, xzr
0x0664BDC0: 02000014  b #0x664bdc8
0x0664BDC4: f30300aa  mov x19, x0
0x0664BDC8: e10240f9  ldr x1, [x23]
0x0664BDCC: e0830091  add x0, sp, #0x20
0x0664BDD0: 9c25a797  bl #0x5015440
0x0664BDD4: 740000b5  cbnz x20, #0x664bde0
0x0664BDD8: e00313aa  mov x0, x19
0x0664BDDC: df663097  bl #0x3265958
0x0664BDE0: e00314aa  mov x0, x20
0x0664BDE4: b0d32c97  bl #0x3180ca4
0x0664BDE8: cbf51e97  bl #0x2e09514

; RVA 0x664BDEC | public bool ShouldSlide(CurrentBoardType boardType, ItemQueuedSignal signal, Nullable<RewardDestinationType> destinationType, bool activeInHierarchy) { }
; bytes=60 sha256=09331ef66f93d2335c45ebf4375fa9112372f278341416afb26598c2e82de4ef status=arm64_complete_bound indexed_start=True
0x0664BDEC: 3f040071  cmp w1, #1
0x0664BDF0: e0000054  b.eq #0x664be0c
0x0664BDF4: 61010035  cbnz w1, #0x664be20
0x0664BDF8: 88000012  and w8, w4, #1
0x0664BDFC: e10302aa  mov x1, x2
0x0664BE00: e20303aa  mov x2, x3
0x0664BE04: e303082a  mov w3, w8
0x0664BE08: 08000014  b #0x664be28
0x0664BE0C: 88000012  and w8, w4, #1
0x0664BE10: e10302aa  mov x1, x2
0x0664BE14: e20303aa  mov x2, x3
0x0664BE18: e303082a  mov w3, w8
0x0664BE1C: 3b000014  b #0x664bf08
0x0664BE20: e0031f2a  mov w0, wzr
0x0664BE24: c0035fd6  ret

; RVA 0x664BF08 | private bool ShouldSlideOnEventBoard(ItemQueuedSignal signal, Nullable<RewardDestinationType> destinationType, bool activeInHierarchy) { }
; bytes=224 sha256=cd47fc2f6c0e9b3986483149cc97ae89eac9b052a398e2c5a36e4d4085f95478 status=arm64_complete_bound indexed_start=True
0x0664BF08: fe0f1df8  str x30, [sp, #-0x30]!
0x0664BF0C: f65701a9  stp x22, x21, [sp, #0x10]
0x0664BF10: f44f02a9  stp x20, x19, [sp, #0x20]
0x0664BF14: f6b60090  adrp x22, #0x7d27000
0x0664BF18: c8fa7f39  ldrb w8, [x22, #0xffe]
0x0664BF1C: f303032a  mov w19, w3
0x0664BF20: f50302aa  mov x21, x2
0x0664BF24: f40301aa  mov x20, x1
0x0664BF28: 88010037  tbnz w8, #0, #0x664bf58
0x0664BF2C: 008500f0  adrp x0, #0x76ee000
0x0664BF30: 00d847f9  ldr x0, [x0, #0xfb0]
0x0664BF34: b9d22c97  bl #0x3180a18
0x0664BF38: 008500f0  adrp x0, #0x76ee000
0x0664BF3C: 00e047f9  ldr x0, [x0, #0xfc0]
0x0664BF40: b6d22c97  bl #0x3180a18
0x0664BF44: 80810090  adrp x0, #0x767b000
0x0664BF48: 00f447f9  ldr x0, [x0, #0xfe8]
0x0664BF4C: b3d22c97  bl #0x3180a18
0x0664BF50: 28008052  movz w8, #0x1
0x0664BF54: c8fa3f39  strb w8, [x22, #0xffe]
0x0664BF58: 740400b4  cbz x20, #0x664bfe4
0x0664BF5C: 880a40f9  ldr x8, [x20, #0x10]
0x0664BF60: c80100b4  cbz x8, #0x664bf98
0x0664BF64: 8a810090  adrp x10, #0x767b000
0x0664BF68: 4af547f9  ldr x10, [x10, #0xfe8]
0x0664BF6C: 090140f9  ldr x9, [x8]
0x0664BF70: 480140f9  ldr x8, [x10]
0x0664BF74: 2bc14439  ldrb w11, [x9, #0x130]
0x0664BF78: 0ac14439  ldrb w10, [x8, #0x130]
0x0664BF7C: 7f010a6b  cmp w11, w10
0x0664BF80: c3000054  b.lo #0x664bf98
0x0664BF84: 296540f9  ldr x9, [x9, #0xc8]
0x0664BF88: 290d0a8b  add x9, x9, x10, lsl #3
0x0664BF8C: 29815ff8  ldur x9, [x9, #-8]
0x0664BF90: 3f0108eb  cmp x9, x8
0x0664BF94: c0000054  b.eq #0x664bfac
0x0664BF98: a8fe60d3  lsr x8, x21, #0x20
0x0664BF9C: 1f0900f1  cmp x8, #2
0x0664BFA0: a1000054  b.ne #0x664bfb4
0x0664BFA4: bf1e0072  tst w21, #0xff
0x0664BFA8: 60000054  b.eq #0x664bfb4
0x0664BFAC: e0031f2a  mov w0, wzr
0x0664BFB0: 09000014  b #0x664bfd4
0x0664BFB4: 88824039  ldrb w8, [x20, #0x20]
0x0664BFB8: 1f010071  cmp w8, #0
0x0664BFBC: e0079f1a  cset w0, ne
0x0664BFC0: a8000034  cbz w8, #0x664bfd4
0x0664BFC4: 93000037  tbnz w19, #0, #0x664bfd4
0x0664BFC8: 88224139  ldrb w8, [x20, #0x48]
0x0664BFCC: 1f010071  cmp w8, #0
0x0664BFD0: e0079f1a  cset w0, ne
0x0664BFD4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0664BFD8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0664BFDC: fe0743f8  ldr x30, [sp], #0x30
0x0664BFE0: c0035fd6  ret
0x0664BFE4: 32d32c97  bl #0x3180cac

; RVA 0x664BE28 | private bool ShouldSlideOnCoreBoard(ItemQueuedSignal signal, Nullable<RewardDestinationType> destinationType, bool activeInHierarchy) { }
; bytes=224 sha256=49988be67e43826699f471d3a87777a42b92115336a7d159733226238369acc9 status=arm64_complete_bound indexed_start=True
0x0664BE28: fe0f1df8  str x30, [sp, #-0x30]!
0x0664BE2C: f65701a9  stp x22, x21, [sp, #0x10]
0x0664BE30: f44f02a9  stp x20, x19, [sp, #0x20]
0x0664BE34: f6b60090  adrp x22, #0x7d27000
0x0664BE38: c8fe7f39  ldrb w8, [x22, #0xfff]
0x0664BE3C: f303032a  mov w19, w3
0x0664BE40: f50302aa  mov x21, x2
0x0664BE44: f40301aa  mov x20, x1
0x0664BE48: 88010037  tbnz w8, #0, #0x664be78
0x0664BE4C: 008500f0  adrp x0, #0x76ee000
0x0664BE50: 00d847f9  ldr x0, [x0, #0xfb0]
0x0664BE54: f1d22c97  bl #0x3180a18
0x0664BE58: 008500f0  adrp x0, #0x76ee000
0x0664BE5C: 00e047f9  ldr x0, [x0, #0xfc0]
0x0664BE60: eed22c97  bl #0x3180a18
0x0664BE64: 80810090  adrp x0, #0x767b000
0x0664BE68: 00f447f9  ldr x0, [x0, #0xfe8]
0x0664BE6C: ebd22c97  bl #0x3180a18
0x0664BE70: 28008052  movz w8, #0x1
0x0664BE74: c8fe3f39  strb w8, [x22, #0xfff]
0x0664BE78: 740400b4  cbz x20, #0x664bf04
0x0664BE7C: 880a40f9  ldr x8, [x20, #0x10]
0x0664BE80: c80100b4  cbz x8, #0x664beb8
0x0664BE84: 8a810090  adrp x10, #0x767b000
0x0664BE88: 4af547f9  ldr x10, [x10, #0xfe8]
0x0664BE8C: 090140f9  ldr x9, [x8]
0x0664BE90: 480140f9  ldr x8, [x10]
0x0664BE94: 2bc14439  ldrb w11, [x9, #0x130]
0x0664BE98: 0ac14439  ldrb w10, [x8, #0x130]
0x0664BE9C: 7f010a6b  cmp w11, w10
0x0664BEA0: c3000054  b.lo #0x664beb8
0x0664BEA4: 296540f9  ldr x9, [x9, #0xc8]
0x0664BEA8: 290d0a8b  add x9, x9, x10, lsl #3
0x0664BEAC: 29815ff8  ldur x9, [x9, #-8]
0x0664BEB0: 3f0108eb  cmp x9, x8
0x0664BEB4: c0000054  b.eq #0x664becc
0x0664BEB8: a8fe60d3  lsr x8, x21, #0x20
0x0664BEBC: 1f0500f1  cmp x8, #1
0x0664BEC0: a1000054  b.ne #0x664bed4
0x0664BEC4: bf1e0072  tst w21, #0xff
0x0664BEC8: 60000054  b.eq #0x664bed4
0x0664BECC: e0031f2a  mov w0, wzr
0x0664BED0: 09000014  b #0x664bef4
0x0664BED4: 88824039  ldrb w8, [x20, #0x20]
0x0664BED8: 1f010071  cmp w8, #0
0x0664BEDC: e0079f1a  cset w0, ne
0x0664BEE0: a8000034  cbz w8, #0x664bef4
0x0664BEE4: 93000037  tbnz w19, #0, #0x664bef4
0x0664BEE8: 88224139  ldrb w8, [x20, #0x48]
0x0664BEEC: 1f010071  cmp w8, #0
0x0664BEF0: e0079f1a  cset w0, ne
0x0664BEF4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0664BEF8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0664BEFC: fe0743f8  ldr x30, [sp], #0x30
0x0664BF00: c0035fd6  ret
0x0664BF04: 6ad32c97  bl #0x3180cac

; RVA 0x664BFE8 | public void .ctor() { }
; bytes=320 sha256=c4438aa8c6ef81f020c3b953ce5e88507234cdc10e5149274a0601ce3832dfd7 status=arm64_complete_bound indexed_start=True
0x0664BFE8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0664BFEC: f65701a9  stp x22, x21, [sp, #0x10]
0x0664BFF0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0664BFF4: f6b600b0  adrp x22, #0x7d28000
0x0664BFF8: 97840090  adrp x23, #0x76db000
0x0664BFFC: 94840090  adrp x20, #0x76db000
0x0664C000: 358100f0  adrp x21, #0x7673000
0x0664C004: c8024039  ldrb w8, [x22]
0x0664C008: f7c646f9  ldr x23, [x23, #0xd88]
0x0664C00C: 94c246f9  ldr x20, [x20, #0xd80]
0x0664C010: b55e40f9  ldr x21, [x21, #0xb8]
0x0664C014: f30300aa  mov x19, x0
0x0664C018: e8010037  tbnz w8, #0, #0x664c054
0x0664C01C: 608400f0  adrp x0, #0x76db000
0x0664C020: 00bc46f9  ldr x0, [x0, #0xd78]
0x0664C024: 7dd22c97  bl #0x3180a18
0x0664C028: 608400f0  adrp x0, #0x76db000
0x0664C02C: 00c046f9  ldr x0, [x0, #0xd80]
0x0664C030: 7ad22c97  bl #0x3180a18
0x0664C034: 608400f0  adrp x0, #0x76db000
0x0664C038: 00c446f9  ldr x0, [x0, #0xd88]
0x0664C03C: 77d22c97  bl #0x3180a18
0x0664C040: 208100f0  adrp x0, #0x7673000
0x0664C044: 005c40f9  ldr x0, [x0, #0xb8]
0x0664C048: 74d22c97  bl #0x3180a18
0x0664C04C: 28008052  movz w8, #0x1
0x0664C050: c8020039  strb w8, [x22]
0x0664C054: e00240f9  ldr x0, [x23]
0x0664C058: 12d32c97  bl #0x3180ca0
0x0664C05C: 810240f9  ldr x1, [x20]
0x0664C060: f40300aa  mov x20, x0
0x0664C064: 77cfb197  bl #0x52bfe40
0x0664C068: a00240f9  ldr x0, [x21]
0x0664C06C: 08e040b9  ldr w8, [x0, #0xe0]
0x0664C070: 48000035  cbnz w8, #0x664c078
0x0664C074: c6d22c97  bl #0x3180b8c
0x0664C078: 740500b4  cbz x20, #0x664c124
0x0664C07C: a80240f9  ldr x8, [x21]
0x0664C080: 768400f0  adrp x22, #0x76db000
0x0664C084: e00314aa  mov x0, x20
0x0664C088: 085d40f9  ldr x8, [x8, #0xb8]
0x0664C08C: d6be46f9  ldr x22, [x22, #0xd78]
0x0664C090: 012140f9  ldr x1, [x8, #0x40]
0x0664C094: c20240f9  ldr x2, [x22]
0x0664C098: e3d3b197  bl #0x52c1024
0x0664C09C: a80240f9  ldr x8, [x21]
0x0664C0A0: c20240f9  ldr x2, [x22]
0x0664C0A4: e00314aa  mov x0, x20
0x0664C0A8: 085d40f9  ldr x8, [x8, #0xb8]
0x0664C0AC: 010540f9  ldr x1, [x8, #8]
0x0664C0B0: ddd3b197  bl #0x52c1024
0x0664C0B4: a80240f9  ldr x8, [x21]
0x0664C0B8: c20240f9  ldr x2, [x22]
0x0664C0BC: e00314aa  mov x0, x20
0x0664C0C0: 085d40f9  ldr x8, [x8, #0xb8]
0x0664C0C4: 012540f9  ldr x1, [x8, #0x48]
0x0664C0C8: d7d3b197  bl #0x52c1024
0x0664C0CC: a80240f9  ldr x8, [x21]
0x0664C0D0: c20240f9  ldr x2, [x22]
0x0664C0D4: e00314aa  mov x0, x20
0x0664C0D8: 085d40f9  ldr x8, [x8, #0xb8]
0x0664C0DC: 010940f9  ldr x1, [x8, #0x10]
0x0664C0E0: d1d3b197  bl #0x52c1024
0x0664C0E4: a80240f9  ldr x8, [x21]
0x0664C0E8: c20240f9  ldr x2, [x22]
0x0664C0EC: e00314aa  mov x0, x20
0x0664C0F0: 085d40f9  ldr x8, [x8, #0xb8]
0x0664C0F4: 010d40f9  ldr x1, [x8, #0x18]
0x0664C0F8: cbd3b197  bl #0x52c1024
0x0664C0FC: 60020491  add x0, x19, #0x100
0x0664C100: e10314aa  mov x1, x20
0x0664C104: 748200f9  str x20, [x19, #0x100]
0x0664C108: 2fd22c97  bl #0x31809c4
0x0664C10C: e00313aa  mov x0, x19
0x0664C110: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0664C114: f65741a9  ldp x22, x21, [sp, #0x10]
0x0664C118: e1031faa  mov x1, xzr
0x0664C11C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0664C120: e51beb17  b #0x61130b4
0x0664C124: e2d22c97  bl #0x3180cac

