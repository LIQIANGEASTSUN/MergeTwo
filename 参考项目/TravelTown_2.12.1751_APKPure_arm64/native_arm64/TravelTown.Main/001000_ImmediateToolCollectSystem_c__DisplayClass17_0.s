; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1000 .ImmediateToolCollectSystem.<>c__DisplayClass17_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67A1510 | public void .ctor() { }
; bytes=8 sha256=86ddb78da21608e3cccc6c2faf7a2f8ef02a74f4ba2307b7d260649ff436357e status=arm64_complete_bound indexed_start=True
0x067A1510: e1031faa  mov x1, xzr
0x067A1514: 3ae4bc17  b #0x56da5fc

; RVA 0x67A18DC | internal void <AnimateToolsToInventorySequence>g__OnAllToolsReachedTarget|0() { }
; bytes=216 sha256=1bae367db7d9d813d3d828e9d82c2ad996fa7ed21ab67ed474d923b0c350c20c status=arm64_complete_bound indexed_start=True
0x067A18DC: fe0f1ef8  str x30, [sp, #-0x20]!
0x067A18E0: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A18E4: 34ac00f0  adrp x20, #0x7d28000
0x067A18E8: 88827739  ldrb w8, [x20, #0xde0]
0x067A18EC: f30300aa  mov x19, x0
0x067A18F0: 88010037  tbnz w8, #0, #0x67a1920
0x067A18F4: 207a00b0  adrp x0, #0x76e6000
0x067A18F8: 00b043f9  ldr x0, [x0, #0x760]
0x067A18FC: 477c2797  bl #0x3180a18
0x067A1900: 207a00d0  adrp x0, #0x76e7000
0x067A1904: 00a443f9  ldr x0, [x0, #0x748]
0x067A1908: 447c2797  bl #0x3180a18
0x067A190C: 607b00f0  adrp x0, #0x7710000
0x067A1910: 006045f9  ldr x0, [x0, #0xac0]
0x067A1914: 417c2797  bl #0x3180a18
0x067A1918: 28008052  movz w8, #0x1
0x067A191C: 88823739  strb w8, [x20, #0xde0]
0x067A1920: 680a40f9  ldr x8, [x19, #0x10]
0x067A1924: 080100b4  cbz x8, #0x67a1944
0x067A1928: 000940f9  ldr x0, [x8, #0x10]
0x067A192C: c00000b4  cbz x0, #0x67a1944
0x067A1930: 287a00d0  adrp x8, #0x76e7000
0x067A1934: 08a543f9  ldr x8, [x8, #0x748]
0x067A1938: 010140f9  ldr x1, [x8]
0x067A193C: 12fd5197  bl #0x3c20d84
0x067A1940: 800000b4  cbz x0, #0x67a1950
0x067A1944: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A1948: fe0742f8  ldr x30, [sp], #0x20
0x067A194C: c0035fd6  ret
0x067A1950: 600a40f9  ldr x0, [x19, #0x10]
0x067A1954: e00200b4  cbz x0, #0x67a19b0
0x067A1958: 287a00b0  adrp x8, #0x76e6000
0x067A195C: 08b143f9  ldr x8, [x8, #0x760]
0x067A1960: 010140f9  ldr x1, [x8]
0x067A1964: ae2f5197  bl #0x3bed81c
0x067A1968: 400200b4  cbz x0, #0x67a19b0
0x067A196C: 1fc00039  strb wzr, [x0, #0x30]
0x067A1970: 680e40f9  ldr x8, [x19, #0x18]
0x067A1974: e80100b4  cbz x8, #0x67a19b0
0x067A1978: 006140f9  ldr x0, [x8, #0xc0]
0x067A197C: a00100b4  cbz x0, #0x67a19b0
0x067A1980: 697b00f0  adrp x9, #0x7710000
0x067A1984: 080040f9  ldr x8, [x0]
0x067A1988: 611240f9  ldr x1, [x19, #0x20]
0x067A198C: 296145f9  ldr x9, [x9, #0xac0]
0x067A1990: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A1994: 060d41f9  ldr x6, [x8, #0x218]
0x067A1998: 051141f9  ldr x5, [x8, #0x220]
0x067A199C: 220140f9  ldr x2, [x9]
0x067A19A0: 23008052  movz w3, #0x1
0x067A19A4: 24008052  movz w4, #0x1
0x067A19A8: fe0742f8  ldr x30, [sp], #0x20
0x067A19AC: c0001fd6  br x6
0x067A19B0: bf7c2797  bl #0x3180cac

