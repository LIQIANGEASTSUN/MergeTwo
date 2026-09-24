; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9864 .SyncBoardService.<>c__DisplayClass14_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67CAD84 | public void .ctor() { }
; bytes=8 sha256=c99784ea79c644f737cff7673dbe9725d3a0b7a8553fac29b1f39a0dc647b0a4 status=arm64_complete_bound indexed_start=True
0x067CAD84: e1031faa  mov x1, xzr
0x067CAD88: 1d3ebc17  b #0x56da5fc

; RVA 0x67CB458 | internal bool <ConstructBoardItems>b__1(IdComponent idComponent) { }
; bytes=40 sha256=bf7dd60f53660ca2a2c6aca147ab12576594b28a741c445cd315b5697decedf4 status=arm64_complete_bound indexed_start=True
0x067CB458: fe0f1ff8  str x30, [sp, #-0x10]!
0x067CB45C: 010100b4  cbz x1, #0x67cb47c
0x067CB460: 080840f9  ldr x8, [x0, #0x10]
0x067CB464: c80000b4  cbz x8, #0x67cb47c
0x067CB468: 201c40f9  ldr x0, [x1, #0x38]
0x067CB46C: 010d40f9  ldr x1, [x8, #0x18]
0x067CB470: e2031faa  mov x2, xzr
0x067CB474: fe0741f8  ldr x30, [sp], #0x10
0x067CB478: fe7cb417  b #0x54ea870
0x067CB47C: 0cd62697  bl #0x3180cac

