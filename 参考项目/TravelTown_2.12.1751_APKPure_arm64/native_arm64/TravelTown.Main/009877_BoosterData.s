; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9877 Merger.Services.Backend.Sync.Data.Payloads.Board.BoosterData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67CC9A0 | public void .ctor() { }
; bytes=8 sha256=4edaffeb2114871aedf26721e813adf6976d6b9dfea4749facffe341c4adbe1b status=arm64_complete_bound indexed_start=True
0x067CC9A0: e1031faa  mov x1, xzr
0x067CC9A4: 1637bc17  b #0x56da5fc

; RVA 0x67CC9A8 | public void .ctor(string uuid) { }
; bytes=48 sha256=a06e193178f62853387a44eea05b629c1eebeedf5bc0ac1118fe5793640b50fa status=arm64_complete_bound indexed_start=True
0x067CC9A8: fe0f1ef8  str x30, [sp, #-0x20]!
0x067CC9AC: f44f01a9  stp x20, x19, [sp, #0x10]
0x067CC9B0: f30301aa  mov x19, x1
0x067CC9B4: e1031faa  mov x1, xzr
0x067CC9B8: f40300aa  mov x20, x0
0x067CC9BC: 1037bc97  bl #0x56da5fc
0x067CC9C0: 930e01f8  str x19, [x20, #0x10]!
0x067CC9C4: e00314aa  mov x0, x20
0x067CC9C8: e10313aa  mov x1, x19
0x067CC9CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067CC9D0: fe0742f8  ldr x30, [sp], #0x20
0x067CC9D4: fccf2617  b #0x31809c4

