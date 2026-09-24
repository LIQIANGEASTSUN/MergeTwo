; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1354 MergeEngine.Configuration.Definitions.WeakReferences.References.MergeItemWeakReference
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x60049CC | public IItem get_Item() { }
; bytes=12 sha256=50767d113baa4521dbcd38be03095daeebb0928092168560c5952169dd046f5a status=arm64_complete_bound indexed_start=True
0x060049CC: 080040f9  ldr x8, [x0]
0x060049D0: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x060049D4: 40001fd6  br x2

; RVA 0x60049D8 | public void .ctor() { }
; bytes=72 sha256=6b937d803be0a15886edf245ce07860ffc5d26fc38ea1f41c09d8a671fc449af status=arm64_complete_bound indexed_start=True
0x060049D8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x060049DC: f44f01a9  stp x20, x19, [sp, #0x10]
0x060049E0: f4e800f0  adrp x20, #0x7d23000
0x060049E4: 55b600d0  adrp x21, #0x76ce000
0x060049E8: 88d25c39  ldrb w8, [x20, #0x734]
0x060049EC: b5b246f9  ldr x21, [x21, #0xd60]
0x060049F0: f30300aa  mov x19, x0
0x060049F4: c8000037  tbnz w8, #0, #0x6004a0c
0x060049F8: 40b600d0  adrp x0, #0x76ce000
0x060049FC: 00b046f9  ldr x0, [x0, #0xd60]
0x06004A00: 06f04597  bl #0x3180a18
0x06004A04: 28008052  movz w8, #0x1
0x06004A08: 88d21c39  strb w8, [x20, #0x734]
0x06004A0C: a10240f9  ldr x1, [x21]
0x06004A10: e00313aa  mov x0, x19
0x06004A14: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06004A18: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06004A1C: b333b617  b #0x4d918e8

; RVA 0x6004718 | public void .ctor(string uniqueId) { }
; bytes=88 sha256=2cc3b5938cc3d6b447b0c629875a0c2a0c127fd4d402223ccefee6440844fe9f status=arm64_complete_bound indexed_start=True
0x06004718: fe0f1df8  str x30, [sp, #-0x30]!
0x0600471C: f65701a9  stp x22, x21, [sp, #0x10]
0x06004720: f44f02a9  stp x20, x19, [sp, #0x20]
0x06004724: f5e800f0  adrp x21, #0x7d23000
0x06004728: 56b600d0  adrp x22, #0x76ce000
0x0600472C: a8d65c39  ldrb w8, [x21, #0x735]
0x06004730: d69e46f9  ldr x22, [x22, #0xd38]
0x06004734: f30301aa  mov x19, x1
0x06004738: f40300aa  mov x20, x0
0x0600473C: c8000037  tbnz w8, #0, #0x6004754
0x06004740: 40b600d0  adrp x0, #0x76ce000
0x06004744: 009c46f9  ldr x0, [x0, #0xd38]
0x06004748: b4f04597  bl #0x3180a18
0x0600474C: 28008052  movz w8, #0x1
0x06004750: a8d61c39  strb w8, [x21, #0x735]
0x06004754: c20240f9  ldr x2, [x22]
0x06004758: e00314aa  mov x0, x20
0x0600475C: e10313aa  mov x1, x19
0x06004760: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06004764: f65741a9  ldp x22, x21, [sp, #0x10]
0x06004768: fe0743f8  ldr x30, [sp], #0x30
0x0600476C: 6334b617  b #0x4d918f8

; RVA 0x6004828 | public virtual bool Equals(MergeItemWeakReference other) { }
; bytes=88 sha256=e23b3c827a3888fba717a9023e7cd0ca7632562496895b5a95dcb537012d4fe6 status=arm64_complete_bound indexed_start=True
0x06004828: 810200b4  cbz x1, #0x6004878
0x0600482C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06004830: f44f01a9  stp x20, x19, [sp, #0x10]
0x06004834: 280040f9  ldr x8, [x1]
0x06004838: f30300aa  mov x19, x0
0x0600483C: e00301aa  mov x0, x1
0x06004840: 09a15ca9  ldp x9, x8, [x8, #0x1c8]
0x06004844: e10308aa  mov x1, x8
0x06004848: 20013fd6  blr x9
0x0600484C: 680240f9  ldr x8, [x19]
0x06004850: f40300aa  mov x20, x0
0x06004854: e00313aa  mov x0, x19
0x06004858: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x0600485C: 20013fd6  blr x9
0x06004860: e10300aa  mov x1, x0
0x06004864: e00314aa  mov x0, x20
0x06004868: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0600486C: e2031faa  mov x2, xzr
0x06004870: fe0742f8  ldr x30, [sp], #0x20
0x06004874: ff97d317  b #0x54ea870
0x06004878: e0031f2a  mov w0, wzr
0x0600487C: c0035fd6  ret

; RVA 0x6004A20 | public override bool Equals(object obj) { }
; bytes=160 sha256=d81f70d12953e39394394ecc49386d9471be6e67edea950bbb3d0f363c3c59ae status=arm64_complete_bound indexed_start=True
0x06004A20: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06004A24: f44f01a9  stp x20, x19, [sp, #0x10]
0x06004A28: f5e800f0  adrp x21, #0x7d23000
0x06004A2C: a8da5c39  ldrb w8, [x21, #0x736]
0x06004A30: f30301aa  mov x19, x1
0x06004A34: f40300aa  mov x20, x0
0x06004A38: c8000037  tbnz w8, #0, #0x6004a50
0x06004A3C: c0b300d0  adrp x0, #0x767e000
0x06004A40: 007842f9  ldr x0, [x0, #0x4f0]
0x06004A44: f5ef4597  bl #0x3180a18
0x06004A48: 28008052  movz w8, #0x1
0x06004A4C: a8da1c39  strb w8, [x21, #0x736]
0x06004A50: d30100b4  cbz x19, #0x6004a88
0x06004A54: c8b300d0  adrp x8, #0x767e000
0x06004A58: 087942f9  ldr x8, [x8, #0x4f0]
0x06004A5C: 690240f9  ldr x9, [x19]
0x06004A60: 080140f9  ldr x8, [x8]
0x06004A64: 2bc14439  ldrb w11, [x9, #0x130]
0x06004A68: 0ac14439  ldrb w10, [x8, #0x130]
0x06004A6C: 7f010a6b  cmp w11, w10
0x06004A70: c3000054  b.lo #0x6004a88
0x06004A74: 296540f9  ldr x9, [x9, #0xc8]
0x06004A78: 290d0a8b  add x9, x9, x10, lsl #3
0x06004A7C: 29815ff8  ldur x9, [x9, #-8]
0x06004A80: 3f0108eb  cmp x9, x8
0x06004A84: e0000054  b.eq #0x6004aa0
0x06004A88: e00314aa  mov x0, x20
0x06004A8C: e10313aa  mov x1, x19
0x06004A90: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06004A94: e2031faa  mov x2, xzr
0x06004A98: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06004A9C: 008fdb17  b #0x56e869c
0x06004AA0: 880240f9  ldr x8, [x20]
0x06004AA4: e00314aa  mov x0, x20
0x06004AA8: e10313aa  mov x1, x19
0x06004AAC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06004AB0: 033541f9  ldr x3, [x8, #0x268]
0x06004AB4: 023941f9  ldr x2, [x8, #0x270]
0x06004AB8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06004ABC: 60001fd6  br x3

; RVA 0x6004AC0 | public override int GetHashCode() { }
; bytes=40 sha256=1c10e5f0907a48189d36eb9b04e34896e734d084e148325de4cce2b069fd9a4c status=arm64_complete_bound indexed_start=True
0x06004AC0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06004AC4: 080040f9  ldr x8, [x0]
0x06004AC8: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x06004ACC: 20013fd6  blr x9
0x06004AD0: a00000b4  cbz x0, #0x6004ae4
0x06004AD4: 080040f9  ldr x8, [x0]
0x06004AD8: 028555a9  ldp x2, x1, [x8, #0x158]
0x06004ADC: fe0741f8  ldr x30, [sp], #0x10
0x06004AE0: 40001fd6  br x2
0x06004AE4: 72f04597  bl #0x3180cac

