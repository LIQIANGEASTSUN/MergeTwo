; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25850 Merger.MergeBoard.Logic.State.Updaters.TimeLimitedActivationComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A85FF4 | protected override void UpdateFromState(ref TimeLimitedActivationComponent component, ItemPayloadBase itemState) { }
; bytes=32 sha256=da79d72bb5e2ccaea96adef91857fd99073535e1201fdffdfe8817d2d92d5cb5 status=arm64_complete_bound indexed_start=True
0x06A85FF4: e20000b4  cbz x2, #0x6a86010
0x06A85FF8: 482040f9  ldr x8, [x2, #0x40]
0x06A85FFC: a80000b4  cbz x8, #0x6a86010
0x06A86000: 492440f9  ldr x9, [x2, #0x48]
0x06A86004: 292000a9  stp x9, x8, [x1]
0x06A86008: 482c40f9  ldr x8, [x2, #0x58]
0x06A8600C: 280800f9  str x8, [x1, #0x10]
0x06A86010: c0035fd6  ret

; RVA 0x6A86014 | public void .ctor() { }
; bytes=72 sha256=691c60b92344c32bd0c1b6c5dc59b4cd8090ee6f2f2004497475a22ff33635d1 status=arm64_complete_bound indexed_start=True
0x06A86014: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A86018: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8601C: 34950090  adrp x20, #0x7d2a000
0x06A86020: 556500f0  adrp x21, #0x7731000
0x06A86024: 886e5e39  ldrb w8, [x20, #0x79b]
0x06A86028: b57e46f9  ldr x21, [x21, #0xcf8]
0x06A8602C: f30300aa  mov x19, x0
0x06A86030: c8000037  tbnz w8, #0, #0x6a86048
0x06A86034: 406500f0  adrp x0, #0x7731000
0x06A86038: 007c46f9  ldr x0, [x0, #0xcf8]
0x06A8603C: 77ea1b97  bl #0x3180a18
0x06A86040: 28008052  movz w8, #0x1
0x06A86044: 886e1e39  strb w8, [x20, #0x79b]
0x06A86048: a10240f9  ldr x1, [x21]
0x06A8604C: e00313aa  mov x0, x19
0x06A86050: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A86054: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A86058: cf698b17  b #0x4d60794

