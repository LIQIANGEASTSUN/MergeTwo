; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9878 Merger.Services.Backend.Sync.Data.Payloads.Board.BoosterItemQueue
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67CC9D8 | public BoosterData get_BoosterData() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x067CC9D8: 001c40f9  ldr x0, [x0, #0x38]
0x067CC9DC: c0035fd6  ret

; RVA 0x67CC9E0 | public void .ctor(string itemId, BoosterData boosterData) { }
; bytes=60 sha256=6013c265b4afd3e3b955cb7e16fc3f5fa909481982f1fab0880ec50937862807 status=arm64_complete_bound indexed_start=True
0x067CC9E0: fe0f1ef8  str x30, [sp, #-0x20]!
0x067CC9E4: f44f01a9  stp x20, x19, [sp, #0x10]
0x067CC9E8: f30302aa  mov x19, x2
0x067CC9EC: e2031faa  mov x2, xzr
0x067CC9F0: e3031faa  mov x3, xzr
0x067CC9F4: e4031faa  mov x4, xzr
0x067CC9F8: e5031faa  mov x5, xzr
0x067CC9FC: f40300aa  mov x20, x0
0x067CCA00: 07000094  bl #0x67cca1c
0x067CCA04: 938e03f8  str x19, [x20, #0x38]!
0x067CCA08: e00314aa  mov x0, x20
0x067CCA0C: e10313aa  mov x1, x19
0x067CCA10: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067CCA14: fe0742f8  ldr x30, [sp], #0x20
0x067CCA18: ebcf2617  b #0x31809c4

; RVA 0x67CCAA4 | public void .ctor(string itemId, string uuid, ItemPayloadBase itemBaseData, DynamicMergeItemConfig dynamicMergeItemConfig) { }
; bytes=8 sha256=e8b59f9d457d63dd33df0f19bf54a672a3bf6d2c7ec92a049909f7930d0ef41f status=arm64_complete_bound indexed_start=True
0x067CCAA4: e5031faa  mov x5, xzr
0x067CCAA8: ddffff17  b #0x67cca1c

