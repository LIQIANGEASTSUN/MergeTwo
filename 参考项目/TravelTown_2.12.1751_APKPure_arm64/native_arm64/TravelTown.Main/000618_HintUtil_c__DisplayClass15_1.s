; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 618 .HintUtil.<>c__DisplayClass15_1
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6276594 | public void .ctor() { }
; bytes=8 sha256=d2fc2efb917f02207303ab450d3e2c6404ec5e3e7b644ba788941a2e2bb3fba5 status=arm64_complete_bound indexed_start=True
0x06276594: e1031faa  mov x1, xzr
0x06276598: 1990d117  b #0x56da5fc

; RVA 0x62772E4 | internal bool <CountJokerMergeTiles>b__1(PositionComponent position) { }
; bytes=236 sha256=e4f97baf192bdc78b2c280a069154c0c476a29116091354c20cc747c0706044f status=arm64_complete_bound indexed_start=True
0x062772E4: fe0f1df8  str x30, [sp, #-0x30]!
0x062772E8: f65701a9  stp x22, x21, [sp, #0x10]
0x062772EC: f44f02a9  stp x20, x19, [sp, #0x20]
0x062772F0: 75d500d0  adrp x21, #0x7d25000
0x062772F4: a86a5139  ldrb w8, [x21, #0x45a]
0x062772F8: f40301aa  mov x20, x1
0x062772FC: f30300aa  mov x19, x0
0x06277300: c8000037  tbnz w8, #0, #0x6277318
0x06277304: 60a300f0  adrp x0, #0x76e6000
0x06277308: 004444f9  ldr x0, [x0, #0x888]
0x0627730C: c3253c97  bl #0x3180a18
0x06277310: 28008052  movz w8, #0x1
0x06277314: a86a1139  strb w8, [x21, #0x45a]
0x06277318: e00314aa  mov x0, x20
0x0627731C: 0ce8ff97  bl #0x627134c
0x06277320: 60000036  tbz w0, #0, #0x627732c
0x06277324: e0031f2a  mov w0, wzr
0x06277328: 14000014  b #0x6277378
0x0627732C: 600a40f9  ldr x0, [x19, #0x10]
0x06277330: e00400b4  cbz x0, #0x62773cc
0x06277334: 76a300f0  adrp x22, #0x76e6000
0x06277338: d64644f9  ldr x22, [x22, #0x888]
0x0627733C: c10240f9  ldr x1, [x22]
0x06277340: 37d96597  bl #0x3bed81c
0x06277344: 540400b4  cbz x20, #0x62773cc
0x06277348: c10240f9  ldr x1, [x22]
0x0627734C: f50300aa  mov x21, x0
0x06277350: e00314aa  mov x0, x20
0x06277354: 32d96597  bl #0x3bed81c
0x06277358: 680e40f9  ldr x8, [x19, #0x18]
0x0627735C: 880300b4  cbz x8, #0x62773cc
0x06277360: 020940f9  ldr x2, [x8, #0x10]
0x06277364: e10300aa  mov x1, x0
0x06277368: e00315aa  mov x0, x21
0x0627736C: 19dfff97  bl #0x626efd0
0x06277370: c0000036  tbz w0, #0, #0x6277388
0x06277374: 20008052  movz w0, #0x1
0x06277378: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0627737C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06277380: fe0743f8  ldr x30, [sp], #0x30
0x06277384: c0035fd6  ret
0x06277388: 600a40f9  ldr x0, [x19, #0x10]
0x0627738C: 000200b4  cbz x0, #0x62773cc
0x06277390: c10240f9  ldr x1, [x22]
0x06277394: 22d96597  bl #0x3bed81c
0x06277398: c10240f9  ldr x1, [x22]
0x0627739C: f50300aa  mov x21, x0
0x062773A0: e00314aa  mov x0, x20
0x062773A4: 1ed96597  bl #0x3bed81c
0x062773A8: 680e40f9  ldr x8, [x19, #0x18]
0x062773AC: 080100b4  cbz x8, #0x62773cc
0x062773B0: e10300aa  mov x1, x0
0x062773B4: 020940f9  ldr x2, [x8, #0x10]
0x062773B8: e00315aa  mov x0, x21
0x062773BC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x062773C0: f65741a9  ldp x22, x21, [sp, #0x10]
0x062773C4: fe0743f8  ldr x30, [sp], #0x30
0x062773C8: dbdfff17  b #0x626f334
0x062773CC: 38263c97  bl #0x3180cac

