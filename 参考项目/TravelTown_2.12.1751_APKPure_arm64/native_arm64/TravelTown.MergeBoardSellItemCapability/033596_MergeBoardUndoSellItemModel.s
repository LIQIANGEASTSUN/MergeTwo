; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33596 Merger.MergeBoardSellItemCapability.Models.MergeBoardUndoSellItemModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A60430 | public Entity get_ItemAvailableToUndo() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A60430: 001440f9  ldr x0, [x0, #0x28]
0x06A60434: c0035fd6  ret

; RVA 0x6A60438 | private void set_ItemAvailableToUndo(Entity value) { }
; bytes=8 sha256=ac40f884d335630eae98663d2ad59e238cdf2bd38f9ba8645c9bb1ebed9702fe status=arm64_complete_bound indexed_start=True
0x06A60438: 018c02f8  str x1, [x0, #0x28]!
0x06A6043C: 62811c17  b #0x31809c4

; RVA 0x6A60440 | public void SetItemAvailableToUndo(Entity entity) { }
; bytes=8 sha256=ddf15a23e1eaf61061b1f29ad538aeaecc6c4322cfdf7084892a6674cf7258f0 status=arm64_complete_bound indexed_start=True
0x06A60440: 018c02f8  str x1, [x0, #0x28]!
0x06A60444: 60811c17  b #0x31809c4

; RVA 0x6A60448 | public void ClearItemAvailableToUndo() { }
; bytes=12 sha256=2934747d73f1eba67d3bafa236df339fb17e4849b4afc834168389a9974b639e status=arm64_complete_bound indexed_start=True
0x06A60448: 1f8c02f8  str xzr, [x0, #0x28]!
0x06A6044C: e1031faa  mov x1, xzr
0x06A60450: 5d811c17  b #0x31809c4

; RVA 0x6A60454 | public void .ctor() { }
; bytes=8 sha256=0501c8b5ebbd04027f41bfa0d68c9b671c41006fe99c6f090c60466cb8196e89 status=arm64_complete_bound indexed_start=True
0x06A60454: e1031faa  mov x1, xzr
0x06A60458: c0aefb17  b #0x694bf58

