; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 491 .RemoteSpawningModel.<>c__DisplayClass12_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x61311D0 | public void .ctor() { }
; bytes=8 sha256=002c6b1b27002020ab525ccdc91aaedc40487a7fb150d057595fad32d3f8815f status=arm64_complete_bound indexed_start=True
0x061311D0: e1031faa  mov x1, xzr
0x061311D4: 0aa5d617  b #0x56da5fc

; RVA 0x613329C | internal bool <GetNextItem>b__1(ItemSpawnable spawnable) { }
; bytes=64 sha256=94742a6612966a9cb3de0b822ee9542ba7976dc2ca0a783f41588edd164f4c0a status=arm64_complete_bound indexed_start=True
0x0613329C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x061332A0: c10100b4  cbz x1, #0x61332d8
0x061332A4: f30300aa  mov x19, x0
0x061332A8: 200840f9  ldr x0, [x1, #0x10]
0x061332AC: 200100b4  cbz x0, #0x61332d0
0x061332B0: 080040f9  ldr x8, [x0]
0x061332B4: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x061332B8: 20013fd6  blr x9
0x061332BC: e00000b4  cbz x0, #0x61332d8
0x061332C0: 610a40f9  ldr x1, [x19, #0x10]
0x061332C4: e2031faa  mov x2, xzr
0x061332C8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x061332CC: db0dcf17  b #0x54f6a38
0x061332D0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x061332D4: c0035fd6  ret
0x061332D8: 75364197  bl #0x3180cac

