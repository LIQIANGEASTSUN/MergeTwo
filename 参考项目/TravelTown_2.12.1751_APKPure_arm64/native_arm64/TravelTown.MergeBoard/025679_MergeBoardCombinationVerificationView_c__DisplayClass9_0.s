; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25679 .MergeBoardCombinationVerificationView.<>c__DisplayClass9_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A369D8 | public void .ctor() { }
; bytes=8 sha256=f2fcfb45d06e7bc7a355778e7408739f63f8beb44296c5dd7475ea297ead92a0 status=arm64_complete_bound indexed_start=True
0x06A369D8: e1031faa  mov x1, xzr
0x06A369DC: 088fb217  b #0x56da5fc

; RVA 0x6A37044 | internal void <OpenVerifyCombinationPopup>b__0(BoardItemPosition first, BoardItemPosition second) { }
; bytes=32 sha256=a1abd7a52a5c5f1f95b924ef66e0b1133633e95bad0d950934447fc45f5416be status=arm64_complete_bound indexed_start=True
0x06A37044: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A37048: 080840f9  ldr x8, [x0, #0x10]
0x06A3704C: a80000b4  cbz x8, #0x6a37060
0x06A37050: 031840b9  ldr w3, [x0, #0x18]
0x06A37054: e00308aa  mov x0, x8
0x06A37058: fe0741f8  ldr x30, [sp], #0x10
0x06A3705C: fffeff17  b #0x6a36c58
0x06A37060: 13271d97  bl #0x3180cac

; RVA 0x6A37064 | internal void <OpenVerifyCombinationPopup>b__1() { }
; bytes=44 sha256=7ff735406e8e14539e9aa546aeba6ed49139709f22fcb256e4b35612e8a824f1 status=arm64_complete_bound indexed_start=True
0x06A37064: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A37068: 091040f9  ldr x9, [x0, #0x20]
0x06A3706C: 090100b4  cbz x9, #0x6a3708c
0x06A37070: 080840f9  ldr x8, [x0, #0x10]
0x06A37074: c80000b4  cbz x8, #0x6a3708c
0x06A37078: 031840b9  ldr w3, [x0, #0x18]
0x06A3707C: 218941a9  ldp x1, x2, [x9, #0x18]
0x06A37080: e00308aa  mov x0, x8
0x06A37084: fe0741f8  ldr x30, [sp], #0x10
0x06A37088: b8feff17  b #0x6a36b68
0x06A3708C: 08271d97  bl #0x3180cac

