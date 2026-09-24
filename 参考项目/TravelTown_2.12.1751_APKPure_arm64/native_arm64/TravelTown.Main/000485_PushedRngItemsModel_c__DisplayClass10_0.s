; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 485 .PushedRngItemsModel.<>c__DisplayClass10_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x612F760 | public void .ctor() { }
; bytes=8 sha256=67c89af3e892785ba3b6708181e2741869c1be1334e3eb0eb03f261adf78bfc6 status=arm64_complete_bound indexed_start=True
0x0612F760: e1031faa  mov x1, xzr
0x0612F764: a6abd617  b #0x56da5fc

; RVA 0x612FB5C | internal bool <FindBoardEventItem>b__0(PushedRngItem e) { }
; bytes=36 sha256=d34280473ad2b0f05d6cb7d8ed82543300beb9e6f882fbc7a471c7d82a1ef355 status=arm64_complete_bound indexed_start=True
0x0612FB5C: fe0f1ff8  str x30, [sp, #-0x10]!
0x0612FB60: e10000b4  cbz x1, #0x612fb7c
0x0612FB64: 280c40f9  ldr x8, [x1, #0x18]
0x0612FB68: 010840f9  ldr x1, [x0, #0x10]
0x0612FB6C: e2031faa  mov x2, xzr
0x0612FB70: e00308aa  mov x0, x8
0x0612FB74: fe0741f8  ldr x30, [sp], #0x10
0x0612FB78: 3eebce17  b #0x54ea870
0x0612FB7C: 4c444197  bl #0x3180cac

