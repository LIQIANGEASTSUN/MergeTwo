; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25812 Merger.MergeBoard.Models.MergeBoardModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7D948 | internal EntitiesManager get_EntitiesManager() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A7D948: 000840f9  ldr x0, [x0, #0x10]
0x06A7D94C: c0035fd6  ret

; RVA 0x6A7D950 | public IEntitiesHolder get_BoardState() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A7D950: 000840f9  ldr x0, [x0, #0x10]
0x06A7D954: c0035fd6  ret

; RVA 0x6A7D958 | public IEnumerable<Entity> get_Entities() { }
; bytes=160 sha256=d0c88718e18aa0aedcb376ed3b0de3592273b529fc1ab78572af37a7395db98f status=arm64_complete_bound indexed_start=True
0x06A7D958: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A7D95C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7D960: 749500b0  adrp x20, #0x7d2a000
0x06A7D964: 880a5d39  ldrb w8, [x20, #0x742]
0x06A7D968: f30300aa  mov x19, x0
0x06A7D96C: c8000037  tbnz w8, #0, #0x6a7d984
0x06A7D970: 006200f0  adrp x0, #0x76c0000
0x06A7D974: 00ac44f9  ldr x0, [x0, #0x958]
0x06A7D978: 280c1c97  bl #0x3180a18
0x06A7D97C: 28008052  movz w8, #0x1
0x06A7D980: 880a1d39  strb w8, [x20, #0x742]
0x06A7D984: 730a40f9  ldr x19, [x19, #0x10]
0x06A7D988: 730300b4  cbz x19, #0x6a7d9f4
0x06A7D98C: 0a6200f0  adrp x10, #0x76c0000
0x06A7D990: 680240f9  ldr x8, [x19]
0x06A7D994: 4aad44f9  ldr x10, [x10, #0x958]
0x06A7D998: 095d4279  ldrh w9, [x8, #0x12e]
0x06A7D99C: 410140f9  ldr x1, [x10]
0x06A7D9A0: 290100b4  cbz x9, #0x6a7d9c4
0x06A7D9A4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7D9A8: 4a210091  add x10, x10, #8
0x06A7D9AC: 4b815ff8  ldur x11, [x10, #-8]
0x06A7D9B0: 7f0101eb  cmp x11, x1
0x06A7D9B4: 00010054  b.eq #0x6a7d9d4
0x06A7D9B8: 290500f1  subs x9, x9, #1
0x06A7D9BC: 4a410091  add x10, x10, #0x10
0x06A7D9C0: 61ffff54  b.ne #0x6a7d9ac
0x06A7D9C4: e00313aa  mov x0, x19
0x06A7D9C8: e2031f2a  mov w2, wzr
0x06A7D9CC: 51641b97  bl #0x3156b10
0x06A7D9D0: 04000014  b #0x6a7d9e0
0x06A7D9D4: 490180b9  ldrsw x9, [x10]
0x06A7D9D8: 0811098b  add x8, x8, x9, lsl #4
0x06A7D9DC: 00e10491  add x0, x8, #0x138
0x06A7D9E0: 020440a9  ldp x2, x1, [x0]
0x06A7D9E4: e00313aa  mov x0, x19
0x06A7D9E8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7D9EC: fe0742f8  ldr x30, [sp], #0x20
0x06A7D9F0: 40001fd6  br x2
0x06A7D9F4: ae0c1c97  bl #0x3180cac

; RVA 0x6A7D9F8 | public bool get_IsInitialized() { }
; bytes=8 sha256=e4c1a301829bf7e242097004cb25fc213af6f8bee45f49527b010f07bce68f54 status=arm64_complete_bound indexed_start=True
0x06A7D9F8: 00604039  ldrb w0, [x0, #0x18]
0x06A7D9FC: c0035fd6  ret

; RVA 0x6A7DA00 | public void set_IsInitialized(bool value) { }
; bytes=12 sha256=44e17fb1eb8f8ff9cdde629de5faf61cf17316e0f5f154eccbf27e368f8511ec status=arm64_complete_bound indexed_start=True
0x06A7DA00: 28000012  and w8, w1, #1
0x06A7DA04: 08600039  strb w8, [x0, #0x18]
0x06A7DA08: c0035fd6  ret

; RVA 0x6A7DA0C | public long get_LastBoardTimeSyncTimestamp() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A7DA0C: 001040f9  ldr x0, [x0, #0x20]
0x06A7DA10: c0035fd6  ret

; RVA 0x6A7DA14 | public void set_LastBoardTimeSyncTimestamp(long value) { }
; bytes=8 sha256=e2049e634203975b3ab577fcedd5fcebf7eb16547f254b69f38a7efd4d28f8c7 status=arm64_complete_bound indexed_start=True
0x06A7DA14: 011000f9  str x1, [x0, #0x20]
0x06A7DA18: c0035fd6  ret

; RVA 0x6A7DA1C | public void .ctor() { }
; bytes=108 sha256=3415b85c160de4a65434881a955f0f934afa2634cf0b0482deb025713a916892 status=arm64_complete_bound indexed_start=True
0x06A7DA1C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A7DA20: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7DA24: 749500b0  adrp x20, #0x7d2a000
0x06A7DA28: b5650090  adrp x21, #0x7731000
0x06A7DA2C: 880e5d39  ldrb w8, [x20, #0x743]
0x06A7DA30: b5c644f9  ldr x21, [x21, #0x988]
0x06A7DA34: f30300aa  mov x19, x0
0x06A7DA38: c8000037  tbnz w8, #0, #0x6a7da50
0x06A7DA3C: a0650090  adrp x0, #0x7731000
0x06A7DA40: 00c444f9  ldr x0, [x0, #0x988]
0x06A7DA44: f50b1c97  bl #0x3180a18
0x06A7DA48: 28008052  movz w8, #0x1
0x06A7DA4C: 880e1d39  strb w8, [x20, #0x743]
0x06A7DA50: a00240f9  ldr x0, [x21]
0x06A7DA54: 930c1c97  bl #0x3180ca0
0x06A7DA58: e1031faa  mov x1, xzr
0x06A7DA5C: f40300aa  mov x20, x0
0x06A7DA60: 6462d297  bl #0x5f163f0
0x06A7DA64: e00313aa  mov x0, x19
0x06A7DA68: 140c01f8  str x20, [x0, #0x10]!
0x06A7DA6C: e10314aa  mov x1, x20
0x06A7DA70: d50b1c97  bl #0x31809c4
0x06A7DA74: e00313aa  mov x0, x19
0x06A7DA78: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7DA7C: e1031faa  mov x1, xzr
0x06A7DA80: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A7DA84: de72b117  b #0x56da5fc

