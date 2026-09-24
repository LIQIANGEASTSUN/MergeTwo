; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25980 Merger.MergeBoard.Data.TickInputActions.UnlockEntitiesOnDemandTickAction
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9AE70 | public List<Entity> get_EntitiesToUnlock() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9AE70: 000840f9  ldr x0, [x0, #0x10]
0x06A9AE74: c0035fd6  ret

; RVA 0x6A9AE78 | public string get_Reason() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9AE78: 000c40f9  ldr x0, [x0, #0x18]
0x06A9AE7C: c0035fd6  ret

; RVA 0x6A9AE80 | public void .ctor(List<Entity> entitiesToUnlock, string reason) { }
; bytes=68 sha256=2d772422c7e1c194a37a055b5c4f46941cf3058d92bfee6a77eb0f7f89c1ed92 status=arm64_complete_bound indexed_start=True
0x06A9AE80: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A9AE84: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9AE88: f40301aa  mov x20, x1
0x06A9AE8C: e1031faa  mov x1, xzr
0x06A9AE90: f30302aa  mov x19, x2
0x06A9AE94: f50300aa  mov x21, x0
0x06A9AE98: d9fdb097  bl #0x56da5fc
0x06A9AE9C: e00315aa  mov x0, x21
0x06A9AEA0: 140c01f8  str x20, [x0, #0x10]!
0x06A9AEA4: e10314aa  mov x1, x20
0x06A9AEA8: c7961b97  bl #0x31809c4
0x06A9AEAC: b38e01f8  str x19, [x21, #0x18]!
0x06A9AEB0: e10313aa  mov x1, x19
0x06A9AEB4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9AEB8: e00315aa  mov x0, x21
0x06A9AEBC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A9AEC0: c1961b17  b #0x31809c4

