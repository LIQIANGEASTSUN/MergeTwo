; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 481 .PushedGraphItemsModel.<>c__DisplayClass9_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x612E0A8 | public void .ctor() { }
; bytes=8 sha256=64944f0dc2f89901efb3f00c18f31fb2fa43f12909c5efec58fc41f4fcb2b7cd status=arm64_complete_bound indexed_start=True
0x0612E0A8: e1031faa  mov x1, xzr
0x0612E0AC: 54b1d617  b #0x56da5fc

; RVA 0x612EA6C | internal bool <AddPushedGraphItem>b__0(PushedGraphItemsModel.PushedGraphItem item) { }
; bytes=44 sha256=5c596423a64bb717549cacfeeee287f78427180201ea5aed636cc57f8e2767da status=arm64_complete_bound indexed_start=True
0x0612EA6C: fe0f1ff8  str x30, [sp, #-0x10]!
0x0612EA70: 210100b4  cbz x1, #0x612ea94
0x0612EA74: 080840f9  ldr x8, [x0, #0x10]
0x0612EA78: e80000b4  cbz x8, #0x612ea94
0x0612EA7C: 200840f9  ldr x0, [x1, #0x10]
0x0612EA80: a00000b4  cbz x0, #0x612ea94
0x0612EA84: 010940f9  ldr x1, [x8, #0x10]
0x0612EA88: e2031faa  mov x2, xzr
0x0612EA8C: fe0741f8  ldr x30, [sp], #0x10
0x0612EA90: ea1fcf17  b #0x54f6a38
0x0612EA94: 86484197  bl #0x3180cac

