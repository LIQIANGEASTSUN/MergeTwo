; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 963 .ExpendableSystem.<>c__DisplayClass29_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x678FC08 | public void .ctor() { }
; bytes=8 sha256=cf5e0fe59a52884822c6a7aa13c73df18d1c1cc1b6d6fd13656686a5b2bf41eb status=arm64_complete_bound indexed_start=True
0x0678FC08: e1031faa  mov x1, xzr
0x0678FC0C: 7c2abd17  b #0x56da5fc

; RVA 0x679067C | internal BoardItemPosition <EntityRemoved>b__0() { }
; bytes=52 sha256=b67759dfea650f0b35ff28dbd793cd6b525bc2fe0b1eda710e352e6e54d6ccb7 status=arm64_complete_bound indexed_start=True
0x0679067C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06790680: 090840f9  ldr x9, [x0, #0x10]
0x06790684: 490100b4  cbz x9, #0x67906ac
0x06790688: 080c40f9  ldr x8, [x0, #0x18]
0x0679068C: 080100b4  cbz x8, #0x67906ac
0x06790690: 202d40f9  ldr x0, [x9, #0x58]
0x06790694: c00000b4  cbz x0, #0x67906ac
0x06790698: 011940f9  ldr x1, [x8, #0x30]
0x0679069C: e2031faa  mov x2, xzr
0x067906A0: e3031faa  mov x3, xzr
0x067906A4: fe0741f8  ldr x30, [sp], #0x10
0x067906A8: 7165fb17  b #0x6669c6c
0x067906AC: 80c12797  bl #0x3180cac

