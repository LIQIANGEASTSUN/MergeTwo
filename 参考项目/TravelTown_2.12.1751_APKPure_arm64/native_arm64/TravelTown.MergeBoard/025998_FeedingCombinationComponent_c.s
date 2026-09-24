; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25998 .FeedingCombinationComponent.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9BE54 | private static void .cctor() { }
; bytes=104 sha256=c55d86ee4a4151c431cfc79ea4fcacde415d849a264639f75c9ce70121347480 status=arm64_complete_bound indexed_start=True
0x06A9BE54: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A9BE58: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9BE5C: 739400f0  adrp x19, #0x7d2a000
0x06A9BE60: b46400d0  adrp x20, #0x7731000
0x06A9BE64: 68326139  ldrb w8, [x19, #0x84c]
0x06A9BE68: 948646f9  ldr x20, [x20, #0xd08]
0x06A9BE6C: c8000037  tbnz w8, #0, #0x6a9be84
0x06A9BE70: a06400d0  adrp x0, #0x7731000
0x06A9BE74: 008446f9  ldr x0, [x0, #0xd08]
0x06A9BE78: e8921b97  bl #0x3180a18
0x06A9BE7C: 28008052  movz w8, #0x1
0x06A9BE80: 68322139  strb w8, [x19, #0x84c]
0x06A9BE84: 800240f9  ldr x0, [x20]
0x06A9BE88: 86931b97  bl #0x3180ca0
0x06A9BE8C: e1031faa  mov x1, xzr
0x06A9BE90: f30300aa  mov x19, x0
0x06A9BE94: daf9b097  bl #0x56da5fc
0x06A9BE98: 880240f9  ldr x8, [x20]
0x06A9BE9C: e10313aa  mov x1, x19
0x06A9BEA0: 085d40f9  ldr x8, [x8, #0xb8]
0x06A9BEA4: 130100f9  str x19, [x8]
0x06A9BEA8: 880240f9  ldr x8, [x20]
0x06A9BEAC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9BEB0: 005d40f9  ldr x0, [x8, #0xb8]
0x06A9BEB4: fe0742f8  ldr x30, [sp], #0x20
0x06A9BEB8: c3921b17  b #0x31809c4

; RVA 0x6A9BEBC | public void .ctor() { }
; bytes=8 sha256=425ac86331eaed210a5fb1903f1b2507db5a0d76973252d81fe7c6225b8582a4 status=arm64_complete_bound indexed_start=True
0x06A9BEBC: e1031faa  mov x1, xzr
0x06A9BEC0: cff9b017  b #0x56da5fc

; RVA 0x6A9BEC4 | internal string <get_ConsumedItemIds>b__1_0(FeedingCombinationConsumedItemSnapshot item) { }
; bytes=32 sha256=5d35f7f2e2e7f07596b4db0554bd414f643f11d5da71869b9c7a05fb0baa4406 status=arm64_complete_bound indexed_start=True
0x06A9BEC4: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A9BEC8: c10000b4  cbz x1, #0x6a9bee0
0x06A9BECC: 280840f9  ldr x8, [x1, #0x10]
0x06A9BED0: 880000b4  cbz x8, #0x6a9bee0
0x06A9BED4: 000940f9  ldr x0, [x8, #0x10]
0x06A9BED8: fe0741f8  ldr x30, [sp], #0x10
0x06A9BEDC: c0035fd6  ret
0x06A9BEE0: 73931b97  bl #0x3180cac

