; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25740 .ImmediateToolsSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6A948 | private static void .cctor() { }
; bytes=104 sha256=4b0ceda051ce6781dd4ca5ea495994d709c33e0f92c4adacf22019bedece7c97 status=arm64_complete_bound indexed_start=True
0x06A6A948: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A6A94C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A6A950: 13960090  adrp x19, #0x7d2a000
0x06A6A954: 346600d0  adrp x20, #0x7730000
0x06A6A958: 68025b39  ldrb w8, [x19, #0x6c0]
0x06A6A95C: 942247f9  ldr x20, [x20, #0xe40]
0x06A6A960: c8000037  tbnz w8, #0, #0x6a6a978
0x06A6A964: 206600d0  adrp x0, #0x7730000
0x06A6A968: 002047f9  ldr x0, [x0, #0xe40]
0x06A6A96C: 2b581c97  bl #0x3180a18
0x06A6A970: 28008052  movz w8, #0x1
0x06A6A974: 68021b39  strb w8, [x19, #0x6c0]
0x06A6A978: 800240f9  ldr x0, [x20]
0x06A6A97C: c9581c97  bl #0x3180ca0
0x06A6A980: e1031faa  mov x1, xzr
0x06A6A984: f30300aa  mov x19, x0
0x06A6A988: 1dbfb197  bl #0x56da5fc
0x06A6A98C: 880240f9  ldr x8, [x20]
0x06A6A990: e10313aa  mov x1, x19
0x06A6A994: 085d40f9  ldr x8, [x8, #0xb8]
0x06A6A998: 130100f9  str x19, [x8]
0x06A6A99C: 880240f9  ldr x8, [x20]
0x06A6A9A0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A6A9A4: 005d40f9  ldr x0, [x8, #0xb8]
0x06A6A9A8: fe0742f8  ldr x30, [sp], #0x20
0x06A6A9AC: 06581c17  b #0x31809c4

; RVA 0x6A6A9B0 | public void .ctor() { }
; bytes=8 sha256=1174ab6815dab1d233e08ac768cbe9b7739cd47f9008d25b60e9cc9939c45e15 status=arm64_complete_bound indexed_start=True
0x06A6A9B0: e1031faa  mov x1, xzr
0x06A6A9B4: 12bfb117  b #0x56da5fc

; RVA 0x6A6A9B8 | internal bool <CollectToolBox>b__3_0(ValueTuple<Entity, IdComponent> query) { }
; bytes=32 sha256=393709928a435260c9f2669c4d994ee55cdf5d3463740ae4bc33dd0960b6f34a status=arm64_complete_bound indexed_start=True
0x06A6A9B8: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A6A9BC: 200040f9  ldr x0, [x1]
0x06A6A9C0: e1031faa  mov x1, xzr
0x06A6A9C4: c86f0094  bl #0x6a868e4
0x06A6A9C8: e803202a  mvn w8, w0
0x06A6A9CC: 00010012  and w0, w8, #1
0x06A6A9D0: fe0741f8  ldr x30, [sp], #0x10
0x06A6A9D4: c0035fd6  ret

; RVA 0x6A6A9D8 | internal string <CollectToolBox>b__3_1(ValueTuple<Entity, IdComponent> query) { }
; bytes=8 sha256=b2502681cf514e9256eb830e0f597cc577aec290e3536b084b9dd09049305768 status=arm64_complete_bound indexed_start=True
0x06A6A9D8: 200440f9  ldr x0, [x1, #8]
0x06A6A9DC: c0035fd6  ret

