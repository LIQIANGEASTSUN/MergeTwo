; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32862 Merger.TimeLimitedItems.Data.TickInputActions.TimeLimitedItemsCleanUpTickAction
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4E174 | public List<Entity> get_EntitiesToCleanUp() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06B4E174: 000840f9  ldr x0, [x0, #0x10]
0x06B4E178: c0035fd6  ret

; RVA 0x6B4B990 | public void .ctor(List<Entity> entitiesToCleanUp) { }
; bytes=48 sha256=86456bc3bb5b8da1f8f6086ce1f8a261deb2e38e9d878e22574296880b21653c status=arm64_complete_bound indexed_start=True
0x06B4B990: fe0f1ef8  str x30, [sp, #-0x20]!
0x06B4B994: f44f01a9  stp x20, x19, [sp, #0x10]
0x06B4B998: f30301aa  mov x19, x1
0x06B4B99C: e1031faa  mov x1, xzr
0x06B4B9A0: f40300aa  mov x20, x0
0x06B4B9A4: 163bae97  bl #0x56da5fc
0x06B4B9A8: 930e01f8  str x19, [x20, #0x10]!
0x06B4B9AC: e00314aa  mov x0, x20
0x06B4B9B0: e10313aa  mov x1, x19
0x06B4B9B4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4B9B8: fe0742f8  ldr x30, [sp], #0x20
0x06B4B9BC: 02d41817  b #0x31809c4

