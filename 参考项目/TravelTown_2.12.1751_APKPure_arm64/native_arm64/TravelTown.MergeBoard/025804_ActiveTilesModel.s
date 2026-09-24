; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25804 Merger.MergeBoard.Models.ActiveTilesModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7C48C | public void add_ActiveTilesChanged(Action value) { }
; bytes=156 sha256=a0d0937901ff3e1bd250ae6f29666eb29f125b8d2103866e847ef89cb40cb5e8 status=arm64_complete_bound indexed_start=True
0x06A7C48C: fe0f1df8  str x30, [sp, #-0x30]!
0x06A7C490: f65701a9  stp x22, x21, [sp, #0x10]
0x06A7C494: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A7C498: 759500d0  adrp x21, #0x7d2a000
0x06A7C49C: a8ce5c39  ldrb w8, [x21, #0x733]
0x06A7C4A0: f30301aa  mov x19, x1
0x06A7C4A4: f40300aa  mov x20, x0
0x06A7C4A8: c8000037  tbnz w8, #0, #0x6a7c4c0
0x06A7C4AC: 805e00d0  adrp x0, #0x764e000
0x06A7C4B0: 00ac43f9  ldr x0, [x0, #0x758]
0x06A7C4B4: 59111c97  bl #0x3180a18
0x06A7C4B8: 28008052  movz w8, #0x1
0x06A7C4BC: a8ce1c39  strb w8, [x21, #0x733]
0x06A7C4C0: 965e00d0  adrp x22, #0x764e000
0x06A7C4C4: 950e42f8  ldr x21, [x20, #0x20]!
0x06A7C4C8: d6ae43f9  ldr x22, [x22, #0x758]
0x06A7C4CC: e00315aa  mov x0, x21
0x06A7C4D0: e10313aa  mov x1, x19
0x06A7C4D4: e2031faa  mov x2, xzr
0x06A7C4D8: 9285b197  bl #0x56ddb20
0x06A7C4DC: e80300aa  mov x8, x0
0x06A7C4E0: a00000b4  cbz x0, #0x6a7c4f4
0x06A7C4E4: c10240f9  ldr x1, [x22]
0x06A7C4E8: 090140f9  ldr x9, [x8]
0x06A7C4EC: 3f0101eb  cmp x9, x1
0x06A7C4F0: 81010054  b.ne #0x6a7c520
0x06A7C4F4: e00314aa  mov x0, x20
0x06A7C4F8: e10308aa  mov x1, x8
0x06A7C4FC: e20315aa  mov x2, x21
0x06A7C500: 10831d97  bl #0x31dd140
0x06A7C504: bf0200eb  cmp x21, x0
0x06A7C508: f50300aa  mov x21, x0
0x06A7C50C: 01feff54  b.ne #0x6a7c4cc
0x06A7C510: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A7C514: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A7C518: fe0743f8  ldr x30, [sp], #0x30
0x06A7C51C: c0035fd6  ret
0x06A7C520: e00308aa  mov x0, x8
0x06A7C524: c9121c97  bl #0x3181048

; RVA 0x6A7C528 | public void remove_ActiveTilesChanged(Action value) { }
; bytes=156 sha256=66f08a04c795e6f213b3f02d34bce8830eb7445f5d885b48c6d9f8effe7b1e7d status=arm64_complete_bound indexed_start=True
0x06A7C528: fe0f1df8  str x30, [sp, #-0x30]!
0x06A7C52C: f65701a9  stp x22, x21, [sp, #0x10]
0x06A7C530: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A7C534: 759500d0  adrp x21, #0x7d2a000
0x06A7C538: a8d25c39  ldrb w8, [x21, #0x734]
0x06A7C53C: f30301aa  mov x19, x1
0x06A7C540: f40300aa  mov x20, x0
0x06A7C544: c8000037  tbnz w8, #0, #0x6a7c55c
0x06A7C548: 805e00d0  adrp x0, #0x764e000
0x06A7C54C: 00ac43f9  ldr x0, [x0, #0x758]
0x06A7C550: 32111c97  bl #0x3180a18
0x06A7C554: 28008052  movz w8, #0x1
0x06A7C558: a8d21c39  strb w8, [x21, #0x734]
0x06A7C55C: 965e00d0  adrp x22, #0x764e000
0x06A7C560: 950e42f8  ldr x21, [x20, #0x20]!
0x06A7C564: d6ae43f9  ldr x22, [x22, #0x758]
0x06A7C568: e00315aa  mov x0, x21
0x06A7C56C: e10313aa  mov x1, x19
0x06A7C570: e2031faa  mov x2, xzr
0x06A7C574: e985b197  bl #0x56ddd18
0x06A7C578: e80300aa  mov x8, x0
0x06A7C57C: a00000b4  cbz x0, #0x6a7c590
0x06A7C580: c10240f9  ldr x1, [x22]
0x06A7C584: 090140f9  ldr x9, [x8]
0x06A7C588: 3f0101eb  cmp x9, x1
0x06A7C58C: 81010054  b.ne #0x6a7c5bc
0x06A7C590: e00314aa  mov x0, x20
0x06A7C594: e10308aa  mov x1, x8
0x06A7C598: e20315aa  mov x2, x21
0x06A7C59C: e9821d97  bl #0x31dd140
0x06A7C5A0: bf0200eb  cmp x21, x0
0x06A7C5A4: f50300aa  mov x21, x0
0x06A7C5A8: 01feff54  b.ne #0x6a7c568
0x06A7C5AC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A7C5B0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A7C5B4: fe0743f8  ldr x30, [sp], #0x30
0x06A7C5B8: c0035fd6  ret
0x06A7C5BC: e00308aa  mov x0, x8
0x06A7C5C0: a2121c97  bl #0x3181048

; RVA 0x6A7C5C4 | public IEnumerable<int> get_ActiveTileIndices() { }
; bytes=180 sha256=414f2b8cd0cb0edb451d676914eb27c3ea80df3735221947a024d4ad22e89cef status=arm64_complete_bound indexed_start=True
0x06A7C5C4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A7C5C8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7C5CC: 749500d0  adrp x20, #0x7d2a000
0x06A7C5D0: 88d65c39  ldrb w8, [x20, #0x735]
0x06A7C5D4: f30300aa  mov x19, x0
0x06A7C5D8: c8000037  tbnz w8, #0, #0x6a7c5f0
0x06A7C5DC: 206200b0  adrp x0, #0x76c1000
0x06A7C5E0: 00e441f9  ldr x0, [x0, #0x3c8]
0x06A7C5E4: 0d111c97  bl #0x3180a18
0x06A7C5E8: 28008052  movz w8, #0x1
0x06A7C5EC: 88d61c39  strb w8, [x20, #0x735]
0x06A7C5F0: 600e40f9  ldr x0, [x19, #0x18]
0x06A7C5F4: 800000b4  cbz x0, #0x6a7c604
0x06A7C5F8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7C5FC: fe0742f8  ldr x30, [sp], #0x20
0x06A7C600: c0035fd6  ret
0x06A7C604: 730a40f9  ldr x19, [x19, #0x10]
0x06A7C608: 730300b4  cbz x19, #0x6a7c674
0x06A7C60C: 2a6200b0  adrp x10, #0x76c1000
0x06A7C610: 680240f9  ldr x8, [x19]
0x06A7C614: 4ae541f9  ldr x10, [x10, #0x3c8]
0x06A7C618: 095d4279  ldrh w9, [x8, #0x12e]
0x06A7C61C: 410140f9  ldr x1, [x10]
0x06A7C620: 290100b4  cbz x9, #0x6a7c644
0x06A7C624: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7C628: 4a210091  add x10, x10, #8
0x06A7C62C: 4b815ff8  ldur x11, [x10, #-8]
0x06A7C630: 7f0101eb  cmp x11, x1
0x06A7C634: 00010054  b.eq #0x6a7c654
0x06A7C638: 290500f1  subs x9, x9, #1
0x06A7C63C: 4a410091  add x10, x10, #0x10
0x06A7C640: 61ffff54  b.ne #0x6a7c62c
0x06A7C644: e00313aa  mov x0, x19
0x06A7C648: e2031f2a  mov w2, wzr
0x06A7C64C: 31691b97  bl #0x3156b10
0x06A7C650: 04000014  b #0x6a7c660
0x06A7C654: 490180b9  ldrsw x9, [x10]
0x06A7C658: 0811098b  add x8, x8, x9, lsl #4
0x06A7C65C: 00e10491  add x0, x8, #0x138
0x06A7C660: 020440a9  ldp x2, x1, [x0]
0x06A7C664: e00313aa  mov x0, x19
0x06A7C668: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7C66C: fe0742f8  ldr x30, [sp], #0x20
0x06A7C670: 40001fd6  br x2
0x06A7C674: 8e111c97  bl #0x3180cac

; RVA 0x6A7C678 | public void SetActiveTiles(IEnumerable<int> indices) { }
; bytes=180 sha256=297387ba58c3b1049122468f94f23f3b8160f94b6158129cee79eb7922e68aa8 status=arm64_complete_bound indexed_start=True
0x06A7C678: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A7C67C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7C680: 759500d0  adrp x21, #0x7d2a000
0x06A7C684: a8da5c39  ldrb w8, [x21, #0x736]
0x06A7C688: f40301aa  mov x20, x1
0x06A7C68C: f30300aa  mov x19, x0
0x06A7C690: 28010037  tbnz w8, #0, #0x6a7c6b4
0x06A7C694: 206200b0  adrp x0, #0x76c1000
0x06A7C698: 005442f9  ldr x0, [x0, #0x4a8]
0x06A7C69C: df101c97  bl #0x3180a18
0x06A7C6A0: 805e00d0  adrp x0, #0x764e000
0x06A7C6A4: 008844f9  ldr x0, [x0, #0x910]
0x06A7C6A8: dc101c97  bl #0x3180a18
0x06A7C6AC: 28008052  movz w8, #0x1
0x06A7C6B0: a8da1c39  strb w8, [x21, #0x736]
0x06A7C6B4: 140300b4  cbz x20, #0x6a7c714
0x06A7C6B8: 885e00d0  adrp x8, #0x764e000
0x06A7C6BC: 088944f9  ldr x8, [x8, #0x910]
0x06A7C6C0: 356200b0  adrp x21, #0x76c1000
0x06A7C6C4: 000140f9  ldr x0, [x8]
0x06A7C6C8: b55642f9  ldr x21, [x21, #0x4a8]
0x06A7C6CC: 75111c97  bl #0x3180ca0
0x06A7C6D0: a20240f9  ldr x2, [x21]
0x06A7C6D4: e10314aa  mov x1, x20
0x06A7C6D8: f50300aa  mov x21, x0
0x06A7C6DC: 37eba097  bl #0x52b73b8
0x06A7C6E0: f30100b4  cbz x19, #0x6a7c71c
0x06A7C6E4: 758e01f8  str x21, [x19, #0x18]!
0x06A7C6E8: e00313aa  mov x0, x19
0x06A7C6EC: e10315aa  mov x1, x21
0x06A7C6F0: b5101c97  bl #0x31809c4
0x06A7C6F4: 680640f9  ldr x8, [x19, #8]
0x06A7C6F8: 480100b4  cbz x8, #0x6a7c720
0x06A7C6FC: 020d40f9  ldr x2, [x8, #0x18]
0x06A7C700: 002140f9  ldr x0, [x8, #0x40]
0x06A7C704: 011540f9  ldr x1, [x8, #0x28]
0x06A7C708: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7C70C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A7C710: 40001fd6  br x2
0x06A7C714: f5031faa  mov x21, xzr
0x06A7C718: 73feffb5  cbnz x19, #0x6a7c6e4
0x06A7C71C: 64111c97  bl #0x3180cac
0x06A7C720: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7C724: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A7C728: c0035fd6  ret

; RVA 0x6A7C72C | public void ClearActiveTiles() { }
; bytes=60 sha256=4cd2a399bb23fe690b2df45d8cb77f9b8c1ea02572a39d9d76d8e067f7dc9c64 status=arm64_complete_bound indexed_start=True
0x06A7C72C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A7C730: f30300aa  mov x19, x0
0x06A7C734: 7f8e01f8  str xzr, [x19, #0x18]!
0x06A7C738: e00313aa  mov x0, x19
0x06A7C73C: e1031faa  mov x1, xzr
0x06A7C740: a1101c97  bl #0x31809c4
0x06A7C744: 680640f9  ldr x8, [x19, #8]
0x06A7C748: c80000b4  cbz x8, #0x6a7c760
0x06A7C74C: 020d40f9  ldr x2, [x8, #0x18]
0x06A7C750: 002140f9  ldr x0, [x8, #0x40]
0x06A7C754: 011540f9  ldr x1, [x8, #0x28]
0x06A7C758: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A7C75C: 40001fd6  br x2
0x06A7C760: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A7C764: c0035fd6  ret

; RVA 0x6A7C768 | public void .ctor() { }
; bytes=8 sha256=e3017e0da1032ff1427989a60cf7d630b4add8d544a5e15706bfcce3d2d614ae status=arm64_complete_bound indexed_start=True
0x06A7C768: e1031faa  mov x1, xzr
0x06A7C76C: a477b117  b #0x56da5fc

