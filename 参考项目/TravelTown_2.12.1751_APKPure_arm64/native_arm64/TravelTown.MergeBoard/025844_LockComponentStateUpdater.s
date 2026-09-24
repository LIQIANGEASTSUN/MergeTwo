; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25844 Merger.MergeBoard.Logic.State.Updaters.LockComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A857C8 | protected override void UpdateFromState(ref LockComponent component, ItemPayloadBase itemState) { }
; bytes=24 sha256=7a6c232e5dea998d6a2bca768ba2e45bf8ce1c77b7b60b975cd8d760375e99fc status=arm64_complete_bound indexed_start=True
0x06A857C8: a20000b4  cbz x2, #0x6a857dc
0x06A857CC: 483040f9  ldr x8, [x2, #0x60]
0x06A857D0: 680000b4  cbz x8, #0x6a857dc
0x06A857D4: 08454039  ldrb w8, [x8, #0x11]
0x06A857D8: 28000039  strb w8, [x1]
0x06A857DC: c0035fd6  ret

; RVA 0x6A857E0 | public void .ctor() { }
; bytes=72 sha256=27955a16b40726592e150a019e5dd5516eb434e6f7f2c64afa2dcda13a6e2af0 status=arm64_complete_bound indexed_start=True
0x06A857E0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A857E4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A857E8: 349500b0  adrp x20, #0x7d2a000
0x06A857EC: 75650090  adrp x21, #0x7731000
0x06A857F0: 88425e39  ldrb w8, [x20, #0x790]
0x06A857F4: b55e46f9  ldr x21, [x21, #0xcb8]
0x06A857F8: f30300aa  mov x19, x0
0x06A857FC: c8000037  tbnz w8, #0, #0x6a85814
0x06A85800: 60650090  adrp x0, #0x7731000
0x06A85804: 005c46f9  ldr x0, [x0, #0xcb8]
0x06A85808: 84ec1b97  bl #0x3180a18
0x06A8580C: 28008052  movz w8, #0x1
0x06A85810: 88421e39  strb w8, [x20, #0x790]
0x06A85814: a10240f9  ldr x1, [x21]
0x06A85818: e00313aa  mov x0, x19
0x06A8581C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85820: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A85824: 046b8b17  b #0x4d60434

