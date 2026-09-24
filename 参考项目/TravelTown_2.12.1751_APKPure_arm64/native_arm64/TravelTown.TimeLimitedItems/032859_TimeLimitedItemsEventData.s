; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32859 Merger.TimeLimitedItems.Data.TimeLimitedItemsEventData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4DE68 | public override RemoteEventType get_Type() { }
; bytes=8 sha256=0a7bc4ac64a6118d59ac01cec4eb80e854de1b68b50af86557c4ffb1fcfe11ed status=arm64_complete_bound indexed_start=True
0x06B4DE68: 00068052  movz w0, #0x30
0x06B4DE6C: c0035fd6  ret

; RVA 0x6B4DE70 | public bool IsValid() { }
; bytes=92 sha256=267711ea2b3b22c75aa1573816aaa44ced0c77722d0ebe6b02264df58e484d89 status=arm64_complete_bound indexed_start=True
0x06B4DE70: fe0f1ef8  str x30, [sp, #-0x20]!
0x06B4DE74: f44f01a9  stp x20, x19, [sp, #0x10]
0x06B4DE78: f48e00d0  adrp x20, #0x7d2b000
0x06B4DE7C: 88ca4039  ldrb w8, [x20, #0x32]
0x06B4DE80: f30300aa  mov x19, x0
0x06B4DE84: c8000037  tbnz w8, #0, #0x6b4de9c
0x06B4DE88: 805900f0  adrp x0, #0x7680000
0x06B4DE8C: 00b443f9  ldr x0, [x0, #0x768]
0x06B4DE90: e2ca1897  bl #0x3180a18
0x06B4DE94: 28008052  movz w8, #0x1
0x06B4DE98: 88ca0039  strb w8, [x20, #0x32]
0x06B4DE9C: 682640f9  ldr x8, [x19, #0x48]
0x06B4DEA0: e80000b4  cbz x8, #0x6b4debc
0x06B4DEA4: 885900f0  adrp x8, #0x7680000
0x06B4DEA8: 08b543f9  ldr x8, [x8, #0x768]
0x06B4DEAC: 603a40f9  ldr x0, [x19, #0x70]
0x06B4DEB0: 010140f9  ldr x1, [x8]
0x06B4DEB4: 11684297  bl #0x3be7ef8
0x06B4DEB8: 08000052  eor w8, w0, #1
0x06B4DEBC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4DEC0: 00010012  and w0, w8, #1
0x06B4DEC4: fe0742f8  ldr x30, [sp], #0x20
0x06B4DEC8: c0035fd6  ret

; RVA 0x6B4DECC | public void .ctor() { }
; bytes=8 sha256=2087ad3c2748e6bd83b67e4f5d15a3560bbdf391edc54e32c2371b25497c0235 status=arm64_complete_bound indexed_start=True
0x06B4DECC: e1031faa  mov x1, xzr
0x06B4DED0: 2460e417  b #0x6465f60

