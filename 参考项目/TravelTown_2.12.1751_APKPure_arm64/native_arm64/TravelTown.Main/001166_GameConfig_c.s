; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1166 .GameConfig.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x690A41C | private static void .cctor() { }
; bytes=104 sha256=659b03ad6421e092bab8a2eec74a8af1033cb071350fdfff6f89630678ac9873 status=arm64_complete_bound indexed_start=True
0x0690A41C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0690A420: f44f01a9  stp x20, x19, [sp, #0x10]
0x0690A424: f3a000f0  adrp x19, #0x7d29000
0x0690A428: f4700090  adrp x20, #0x7726000
0x0690A42C: 68ea6539  ldrb w8, [x19, #0x97a]
0x0690A430: 94ea45f9  ldr x20, [x20, #0xbd0]
0x0690A434: c8000037  tbnz w8, #0, #0x690a44c
0x0690A438: e0700090  adrp x0, #0x7726000
0x0690A43C: 00e845f9  ldr x0, [x0, #0xbd0]
0x0690A440: 76d92197  bl #0x3180a18
0x0690A444: 28008052  movz w8, #0x1
0x0690A448: 68ea2539  strb w8, [x19, #0x97a]
0x0690A44C: 800240f9  ldr x0, [x20]
0x0690A450: 14da2197  bl #0x3180ca0
0x0690A454: e1031faa  mov x1, xzr
0x0690A458: f30300aa  mov x19, x0
0x0690A45C: 6840b797  bl #0x56da5fc
0x0690A460: 880240f9  ldr x8, [x20]
0x0690A464: e10313aa  mov x1, x19
0x0690A468: 085d40f9  ldr x8, [x8, #0xb8]
0x0690A46C: 130100f9  str x19, [x8]
0x0690A470: 880240f9  ldr x8, [x20]
0x0690A474: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0690A478: 005d40f9  ldr x0, [x8, #0xb8]
0x0690A47C: fe0742f8  ldr x30, [sp], #0x20
0x0690A480: 51d92117  b #0x31809c4

; RVA 0x690A484 | public void .ctor() { }
; bytes=8 sha256=32902444a28b8083f726275916be6b29ca19bebbef742ccd8f0777b4cdeaa0b7 status=arm64_complete_bound indexed_start=True
0x0690A484: e1031faa  mov x1, xzr
0x0690A488: 5d40b717  b #0x56da5fc

; RVA 0x690A48C | internal IMergeItem <get_RatePopupTriggerItems2>b__5_0(MergeItemWeakReference reference) { }
; bytes=36 sha256=0853a214cfc881c42533cd8af23561073781df97a013d753ac9a9f3077a0f0c4 status=arm64_complete_bound indexed_start=True
0x0690A48C: fe0f1ff8  str x30, [sp, #-0x10]!
0x0690A490: e10000b4  cbz x1, #0x690a4ac
0x0690A494: 280040f9  ldr x8, [x1]
0x0690A498: e00301aa  mov x0, x1
0x0690A49C: 02a15ea9  ldp x2, x8, [x8, #0x1e8]
0x0690A4A0: e10308aa  mov x1, x8
0x0690A4A4: fe0741f8  ldr x30, [sp], #0x10
0x0690A4A8: 40001fd6  br x2
0x0690A4AC: 00da2197  bl #0x3180cac

