; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9452 Merger.Game.Signal.TryBurstBubbleSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676CD40 | public BoardItemPosition get_BoardItemPosition() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676CD40: 000840f9  ldr x0, [x0, #0x10]
0x0676CD44: c0035fd6  ret

; RVA 0x676CD48 | public ResourceMultiple get_Price() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0676CD48: 000c40f9  ldr x0, [x0, #0x18]
0x0676CD4C: c0035fd6  ret

; RVA 0x676CD50 | public bool get_BurstWithAd() { }
; bytes=8 sha256=143b3c7bd83b0aed91598bc840f9d6c3eed331434f835849cdbe01fd7801fad5 status=arm64_complete_bound indexed_start=True
0x0676CD50: 00804039  ldrb w0, [x0, #0x20]
0x0676CD54: c0035fd6  ret

; RVA 0x676CD58 | public void .ctor(BoardItemPosition boardItemPosition, ResourceMultiple price, bool burstWithAd, IPromise tryBurstBubblePromise) { }
; bytes=92 sha256=0967a7714ae216cba899f6f7447a14398b85176ffaf17fea14b8125073a0002b status=arm64_complete_bound indexed_start=True
0x0676CD58: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0676CD5C: f65701a9  stp x22, x21, [sp, #0x10]
0x0676CD60: f44f02a9  stp x20, x19, [sp, #0x20]
0x0676CD64: f50301aa  mov x21, x1
0x0676CD68: e1031faa  mov x1, xzr
0x0676CD6C: f30304aa  mov x19, x4
0x0676CD70: f40302aa  mov x20, x2
0x0676CD74: f60300aa  mov x22, x0
0x0676CD78: 77000012  and w23, w3, #1
0x0676CD7C: 20b6bd97  bl #0x56da5fc
0x0676CD80: e00316aa  mov x0, x22
0x0676CD84: d50a00f9  str x21, [x22, #0x10]
0x0676CD88: 148c01f8  str x20, [x0, #0x18]!
0x0676CD8C: e10314aa  mov x1, x20
0x0676CD90: 0d4f2897  bl #0x31809c4
0x0676CD94: d38e02f8  str x19, [x22, #0x28]!
0x0676CD98: d7821f38  sturb w23, [x22, #-8]
0x0676CD9C: e00316aa  mov x0, x22
0x0676CDA0: e10313aa  mov x1, x19
0x0676CDA4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0676CDA8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0676CDAC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0676CDB0: 054f2817  b #0x31809c4

