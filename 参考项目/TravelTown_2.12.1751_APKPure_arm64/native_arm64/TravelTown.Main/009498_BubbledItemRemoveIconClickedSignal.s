; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9498 Merger.Game.Signal.Bubbles.BubbledItemRemoveIconClickedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676E658 | public bool get_HasCompensation() { }
; bytes=8 sha256=eaa8f5bab95d1713110a3774aeaebf65c0af3605085769e01b2fdfa404ba8cfd status=arm64_complete_bound indexed_start=True
0x0676E658: 00404139  ldrb w0, [x0, #0x50]
0x0676E65C: c0035fd6  ret

; RVA 0x676E660 | public int get_CompensationAmount() { }
; bytes=8 sha256=1d508a88eaa79472130512ca701fa0b73bba28f7bab8307aae4939584f8e7bf8 status=arm64_complete_bound indexed_start=True
0x0676E660: 005440b9  ldr w0, [x0, #0x54]
0x0676E664: c0035fd6  ret

; RVA 0x676E668 | public PlayerResourceEnum get_CompensationResourceType() { }
; bytes=8 sha256=d7f5f3095d77028926f25d8a842a6a2f7dac311346dbbc634a0b8fcc4543239b status=arm64_complete_bound indexed_start=True
0x0676E668: 005840b9  ldr w0, [x0, #0x58]
0x0676E66C: c0035fd6  ret

; RVA 0x676E670 | public void .ctor(IMergeItem mergeItem, int mergeItemLevel) { }
; bytes=8 sha256=0d048a8948c9b558968006712949e32b3f9d08efee9f699979b8f2b7fff99ffb status=arm64_complete_bound indexed_start=True
0x0676E670: e3031faa  mov x3, xzr
0x0676E674: 3e15e217  b #0x5ff3b6c

