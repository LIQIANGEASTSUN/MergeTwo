; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25971 Merger.MergeBoard.Data.TickResultArgs.PendingItemsCombinationResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9AC60 | public MergeCheckItemType get_MergeCheckItemType() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06A9AC60: 001040b9  ldr w0, [x0, #0x10]
0x06A9AC64: c0035fd6  ret

; RVA 0x6A9AC68 | public void set_MergeCheckItemType(MergeCheckItemType value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06A9AC68: 011000b9  str w1, [x0, #0x10]
0x06A9AC6C: c0035fd6  ret

; RVA 0x6A9AC70 | public Entity get_FirstItem() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9AC70: 000c40f9  ldr x0, [x0, #0x18]
0x06A9AC74: c0035fd6  ret

; RVA 0x6A9AC78 | public void set_FirstItem(Entity value) { }
; bytes=8 sha256=7a6bcbed3b86e7cca3de1af80576f96b9f0045311e82424cc64f385e3a11d4e0 status=arm64_complete_bound indexed_start=True
0x06A9AC78: 018c01f8  str x1, [x0, #0x18]!
0x06A9AC7C: 52971b17  b #0x31809c4

; RVA 0x6A9AC80 | public Entity get_SecondItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9AC80: 001040f9  ldr x0, [x0, #0x20]
0x06A9AC84: c0035fd6  ret

; RVA 0x6A9AC88 | public void set_SecondItem(Entity value) { }
; bytes=8 sha256=272d0dcd784f62367f85172d6d773bc7dd55ddaa0a6d321e142e8af0e319e65f status=arm64_complete_bound indexed_start=True
0x06A9AC88: 010c02f8  str x1, [x0, #0x20]!
0x06A9AC8C: 4e971b17  b #0x31809c4

; RVA 0x6A9AC90 | public string get_ResultItem() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A9AC90: 001440f9  ldr x0, [x0, #0x28]
0x06A9AC94: c0035fd6  ret

; RVA 0x6A9AC98 | public void set_ResultItem(string value) { }
; bytes=8 sha256=f160991422e6c7b61cb442bf4f370e0212ebce6ea3bb8dc41605332d215130c6 status=arm64_complete_bound indexed_start=True
0x06A9AC98: 018c02f8  str x1, [x0, #0x28]!
0x06A9AC9C: 4a971b17  b #0x31809c4

; RVA 0x6A9ACA0 | public void .ctor() { }
; bytes=8 sha256=b7728ddda6d857f8977bcca0343a759cf818321a5b947b60ff50ae6502aeb080 status=arm64_complete_bound indexed_start=True
0x06A9ACA0: e1031faa  mov x1, xzr
0x06A9ACA4: 56feb017  b #0x56da5fc

