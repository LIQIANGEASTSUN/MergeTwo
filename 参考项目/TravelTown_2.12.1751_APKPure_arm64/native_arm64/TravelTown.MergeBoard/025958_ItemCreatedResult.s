; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25958 Merger.MergeBoard.Data.TickResultArgs.ItemCreatedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A808 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A808: 000840f9  ldr x0, [x0, #0x10]
0x06A9A80C: c0035fd6  ret

; RVA 0x6A9A810 | private void set_Entity(Entity value) { }
; bytes=8 sha256=37a0af18f24907759ea1f579695b4ff7743c1959e6fa9d400c89d6f9d434aecd status=arm64_complete_bound indexed_start=True
0x06A9A810: 010c01f8  str x1, [x0, #0x10]!
0x06A9A814: 6c981b17  b #0x31809c4

; RVA 0x6A9A818 | public ItemAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A818: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A81C: c0035fd6  ret

; RVA 0x6A9A820 | private void set_AnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=b24a28158cfe85ad5708d6684afebfaa5a0a933703ba5327e831c185d7b342bd status=arm64_complete_bound indexed_start=True
0x06A9A820: 018c01f8  str x1, [x0, #0x18]!
0x06A9A824: 68981b17  b #0x31809c4

; RVA 0x6A9A828 | public void .ctor(Entity entity, ItemAnalyticsData itemAnalyticsData) { }
; bytes=68 sha256=e2193911da0a11b88a15c609568c403b1fef110ebd56498d14b878e51e192bd5 status=arm64_complete_bound indexed_start=True
0x06A9A828: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A9A82C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9A830: f40301aa  mov x20, x1
0x06A9A834: e1031faa  mov x1, xzr
0x06A9A838: f30302aa  mov x19, x2
0x06A9A83C: f50300aa  mov x21, x0
0x06A9A840: 6fffb097  bl #0x56da5fc
0x06A9A844: e00315aa  mov x0, x21
0x06A9A848: 140c01f8  str x20, [x0, #0x10]!
0x06A9A84C: e10314aa  mov x1, x20
0x06A9A850: 5d981b97  bl #0x31809c4
0x06A9A854: b38e01f8  str x19, [x21, #0x18]!
0x06A9A858: e10313aa  mov x1, x19
0x06A9A85C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9A860: e00315aa  mov x0, x21
0x06A9A864: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A9A868: 57981b17  b #0x31809c4

