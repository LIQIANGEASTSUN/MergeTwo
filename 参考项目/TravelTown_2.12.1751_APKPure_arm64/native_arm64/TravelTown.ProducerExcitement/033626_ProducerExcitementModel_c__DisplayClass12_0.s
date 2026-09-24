; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33626 .ProducerExcitementModel.<>c__DisplayClass12_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD9164 | public void .ctor() { }
; bytes=8 sha256=b08170afa1e42f987eb5394c12c2ec9bbaee76221c8892f2a02fa46c63947ee3 status=arm64_complete_bound indexed_start=True
0x06AD9164: e1031faa  mov x1, xzr
0x06AD9168: 2505b017  b #0x56da5fc

; RVA 0x6AD9520 | internal bool <AddClaimedExcitementId>b__0(ProducerExcitementDataResponse s) { }
; bytes=44 sha256=aae785dbbaee76017c94838b551f17b0a0f7add73b2ab7b240c2b94ce6c73e72 status=arm64_complete_bound indexed_start=True
0x06AD9520: fe0f1ff8  str x30, [sp, #-0x10]!
0x06AD9524: 210100b4  cbz x1, #0x6ad9548
0x06AD9528: 281040f9  ldr x8, [x1, #0x20]
0x06AD952C: e80000b4  cbz x8, #0x6ad9548
0x06AD9530: 081140b9  ldr w8, [x8, #0x10]
0x06AD9534: 091040b9  ldr w9, [x0, #0x10]
0x06AD9538: 1f01096b  cmp w8, w9
0x06AD953C: e0179f1a  cset w0, eq
0x06AD9540: fe0741f8  ldr x30, [sp], #0x10
0x06AD9544: c0035fd6  ret
0x06AD9548: d99d1a97  bl #0x3180cac

