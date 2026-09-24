; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8921 Merger.Game.Views.Inventory.BaseInventoryTabContentView<TViewModel>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BEC194 | Merger.Game.Views.Inventory.BaseInventoryTabContentView<object>$$get_ItemsCount
; native signature: int32_t Merger_Game_Views_Inventory_BaseInventoryTabContentView_object___get_ItemsCount (Merger_Game_Views_Inventory_BaseInventoryTabContentView_TViewModel__o* __this, const MethodInfo_4BEC194* method);
; bytes=36 sha256=9edff35d0dc9828f89ec6159baf24261cb8612410d750891ac6dad7f1d11115f status=arm64_complete_bound indexed_start=True
0x04BEC194: fe0f1ff8  str x30, [sp, #-0x10]!
0x04BEC198: e00000b4  cbz x0, #0x4bec1b4
0x04BEC19C: e1031faa  mov x1, xzr
0x04BEC1A0: 62fb7294  bl #0x68aaf28
0x04BEC1A4: 800000b4  cbz x0, #0x4bec1b4
0x04BEC1A8: e1031faa  mov x1, xzr
0x04BEC1AC: fe0741f8  ldr x30, [sp], #0x10
0x04BEC1B0: e4048c14  b #0x6eed540
0x04BEC1B4: be529697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BEC1B8 | Merger.Game.Views.Inventory.BaseInventoryTabContentView<object>$$GetViewportHeight
; native signature: float Merger_Game_Views_Inventory_BaseInventoryTabContentView_object___GetViewportHeight (Merger_Game_Views_Inventory_BaseInventoryTabContentView_TViewModel__o* __this, const MethodInfo_4BEC1B8* method);
; bytes=248 sha256=b039db0f8778d0f55878a37bde9f7955389ae6bc22cdf15f282868d554a746d0 status=arm64_complete_bound indexed_start=True
0x04BEC1B8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04BEC1BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x04BEC1C0: 748901d0  adrp x20, #0x7d1a000
0x04BEC1C4: 88f27739  ldrb w8, [x20, #0xdfc]
0x04BEC1C8: f30300aa  mov x19, x0
0x04BEC1CC: 88010037  tbnz w8, #0, #0x4bec1fc
0x04BEC1D0: 805401f0  adrp x0, #0x767f000
0x04BEC1D4: 006046f9  ldr x0, [x0, #0xcc0]
0x04BEC1D8: 10529697  bl #0x3180a18
0x04BEC1DC: 805401f0  adrp x0, #0x767f000
0x04BEC1E0: 006446f9  ldr x0, [x0, #0xcc8]
0x04BEC1E4: 0d529697  bl #0x3180a18
0x04BEC1E8: 805401f0  adrp x0, #0x767f000
0x04BEC1EC: 006846f9  ldr x0, [x0, #0xcd0]
0x04BEC1F0: 0a529697  bl #0x3180a18
0x04BEC1F4: 28008052  movz w8, #0x1
0x04BEC1F8: 88f23739  strb w8, [x20, #0xdfc]
0x04BEC1FC: 680240f9  ldr x8, [x19]
0x04BEC200: e00313aa  mov x0, x19
0x04BEC204: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x04BEC208: 20013fd6  blr x9
0x04BEC20C: 680240f9  ldr x8, [x19]
0x04BEC210: 753240b9  ldr w21, [x19, #0x30]
0x04BEC214: f403002a  mov w20, w0
0x04BEC218: e00313aa  mov x0, x19
0x04BEC21C: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x04BEC220: 20013fd6  blr x9
0x04BEC224: 681e40f9  ldr x8, [x19, #0x38]
0x04BEC228: 280400b4  cbz x8, #0x4bec2ac
0x04BEC22C: 895401f0  adrp x9, #0x767f000
0x04BEC230: 296146f9  ldr x9, [x9, #0xcc0]
0x04BEC234: 6a3240b9  ldr w10, [x19, #0x30]
0x04BEC238: 0b1940b9  ldr w11, [x8, #0x18]
0x04BEC23C: 8c0ed51a  sdiv w12, w20, w21
0x04BEC240: 210140f9  ldr x1, [x9]
0x04BEC244: 090cca1a  sdiv w9, w0, w10
0x04BEC248: 29810a1b  msub w9, w9, w10, w0
0x04BEC24C: 3f010071  cmp w9, #0
0x04BEC250: 89d58c1a  cinc w9, w12, gt
0x04BEC254: 6b050051  sub w11, w11, #1
0x04BEC258: 29050051  sub w9, w9, #1
0x04BEC25C: 3f010b6b  cmp w9, w11
0x04BEC260: 6ac1891a  csel w10, w11, w9, gt
0x04BEC264: 3f010071  cmp w9, #0
0x04BEC268: e00308aa  mov x0, x8
0x04BEC26C: f4b38a1a  csel w20, wzr, w10, lt
0x04BEC270: 61f0bf97  bl #0x3be83f4
0x04BEC274: a0000036  tbz w0, #0, #0x4bec288
0x04BEC278: 604240bd  ldr s0, [x19, #0x40]
0x04BEC27C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04BEC280: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04BEC284: c0035fd6  ret
0x04BEC288: 601e40f9  ldr x0, [x19, #0x38]
0x04BEC28C: 000100b4  cbz x0, #0x4bec2ac
0x04BEC290: 885401f0  adrp x8, #0x767f000
0x04BEC294: 086946f9  ldr x8, [x8, #0xcd0]
0x04BEC298: e103142a  mov w1, w20
0x04BEC29C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04BEC2A0: 020140f9  ldr x2, [x8]
0x04BEC2A4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04BEC2A8: 02c4d217  b #0x409d2b0
0x04BEC2AC: 80529697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BEC2B0 | Merger.Game.Views.Inventory.BaseInventoryTabContentView<object>$$.ctor
; native signature: void Merger_Game_Views_Inventory_BaseInventoryTabContentView_object____ctor (Merger_Game_Views_Inventory_BaseInventoryTabContentView_TViewModel__o* __this, const MethodInfo_4BEC2B0* method);
; bytes=16 sha256=d2d2ca68cbd52a9223ddc0411355a853b06e98c5724ab6323c5470fb2ee50c00 status=arm64_complete_bound indexed_start=True
0x04BEC2B0: 281040f9  ldr x8, [x1, #0x20]
0x04BEC2B4: 086140f9  ldr x8, [x8, #0xc0]
0x04BEC2B8: 010940f9  ldr x1, [x8, #0x10]
0x04BEC2BC: d7f61914  b #0x5269e18

