; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33703 ContextualizedECS.Context.TickContext
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5F16680 | public IEnumerable<Entity> get_Entities() { }
; bytes=160 sha256=d2ea262fba2a98e778fdeda4bac2f630d7cd5c8c7e583258090db56d92fc20f6 status=arm64_complete_bound indexed_start=True
0x05F16680: fe0f1ef8  str x30, [sp, #-0x20]!
0x05F16684: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F16688: 74f00090  adrp x20, #0x7d22000
0x05F1668C: 88c27139  ldrb w8, [x20, #0xc70]
0x05F16690: f30300aa  mov x19, x0
0x05F16694: c8000037  tbnz w8, #0, #0x5f166ac
0x05F16698: 40bd00d0  adrp x0, #0x76c0000
0x05F1669C: 00ac44f9  ldr x0, [x0, #0x958]
0x05F166A0: dea84997  bl #0x3180a18
0x05F166A4: 28008052  movz w8, #0x1
0x05F166A8: 88c23139  strb w8, [x20, #0xc70]
0x05F166AC: 730240f9  ldr x19, [x19]
0x05F166B0: 730300b4  cbz x19, #0x5f1671c
0x05F166B4: 4abd00d0  adrp x10, #0x76c0000
0x05F166B8: 680240f9  ldr x8, [x19]
0x05F166BC: 4aad44f9  ldr x10, [x10, #0x958]
0x05F166C0: 095d4279  ldrh w9, [x8, #0x12e]
0x05F166C4: 410140f9  ldr x1, [x10]
0x05F166C8: 290100b4  cbz x9, #0x5f166ec
0x05F166CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x05F166D0: 4a210091  add x10, x10, #8
0x05F166D4: 4b815ff8  ldur x11, [x10, #-8]
0x05F166D8: 7f0101eb  cmp x11, x1
0x05F166DC: 00010054  b.eq #0x5f166fc
0x05F166E0: 290500f1  subs x9, x9, #1
0x05F166E4: 4a410091  add x10, x10, #0x10
0x05F166E8: 61ffff54  b.ne #0x5f166d4
0x05F166EC: e00313aa  mov x0, x19
0x05F166F0: e2031f2a  mov w2, wzr
0x05F166F4: 07014997  bl #0x3156b10
0x05F166F8: 04000014  b #0x5f16708
0x05F166FC: 490180b9  ldrsw x9, [x10]
0x05F16700: 0811098b  add x8, x8, x9, lsl #4
0x05F16704: 00e10491  add x0, x8, #0x138
0x05F16708: 020440a9  ldp x2, x1, [x0]
0x05F1670C: e00313aa  mov x0, x19
0x05F16710: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F16714: fe0742f8  ldr x30, [sp], #0x20
0x05F16718: 40001fd6  br x2
0x05F1671C: 64a94997  bl #0x3180cac

; RVA 0x5F16720 | public IEntitiesHolder get_EntitiesHolder() { }
; bytes=8 sha256=4197ad96213c98161e13fbfd6185a724b5570ba296d316558cbd5cc5c1842369 status=arm64_complete_bound indexed_start=True
0x05F16720: 000040f9  ldr x0, [x0]
0x05F16724: c0035fd6  ret

; RVA 0x5F16728 | public TickArgs get_InArgs() { }
; bytes=8 sha256=19647f57f48e23c8730ecfc85bdce80bf67ce4eae56e82f97661432fa2018025 status=arm64_complete_bound indexed_start=True
0x05F16728: 000440f9  ldr x0, [x0, #8]
0x05F1672C: c0035fd6  ret

; RVA 0x5F16730 | public TickArgs get_Result() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05F16730: 000840f9  ldr x0, [x0, #0x10]
0x05F16734: c0035fd6  ret

; RVA 0x5F16738 | public Dictionary<Entity, HashSet<Type>> get_TempComponents() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x05F16738: 000c40f9  ldr x0, [x0, #0x18]
0x05F1673C: c0035fd6  ret

; RVA 0x5F15844 | public void .ctor(IEntitiesHolder entitiesManager, TickArgs inArgs, TickArgs result) { }
; bytes=192 sha256=5e40e4a9fd8cbc5045e5f35b20704a6a46af668b4fa3319758d8fcb8a06355d1 status=arm64_complete_bound indexed_start=True
0x05F15844: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x05F15848: f85f01a9  stp x24, x23, [sp, #0x10]
0x05F1584C: f65702a9  stp x22, x21, [sp, #0x20]
0x05F15850: f44f03a9  stp x20, x19, [sp, #0x30]
0x05F15854: 79f000b0  adrp x25, #0x7d22000
0x05F15858: 78bd00d0  adrp x24, #0x76c3000
0x05F1585C: 77bd00d0  adrp x23, #0x76c3000
0x05F15860: 28c77139  ldrb w8, [x25, #0xc71]
0x05F15864: 188745f9  ldr x24, [x24, #0xb08]
0x05F15868: f78a45f9  ldr x23, [x23, #0xb10]
0x05F1586C: f50303aa  mov x21, x3
0x05F15870: f60302aa  mov x22, x2
0x05F15874: f40301aa  mov x20, x1
0x05F15878: f30300aa  mov x19, x0
0x05F1587C: 28010037  tbnz w8, #0, #0x5f158a0
0x05F15880: 60bd00d0  adrp x0, #0x76c3000
0x05F15884: 008845f9  ldr x0, [x0, #0xb10]
0x05F15888: 64ac4997  bl #0x3180a18
0x05F1588C: 60bd00d0  adrp x0, #0x76c3000
0x05F15890: 008445f9  ldr x0, [x0, #0xb08]
0x05F15894: 61ac4997  bl #0x3180a18
0x05F15898: 28008052  movz w8, #0x1
0x05F1589C: 28c73139  strb w8, [x25, #0xc71]
0x05F158A0: e00313aa  mov x0, x19
0x05F158A4: 168c00f8  str x22, [x0, #8]!
0x05F158A8: e10316aa  mov x1, x22
0x05F158AC: 46ac4997  bl #0x31809c4
0x05F158B0: e00313aa  mov x0, x19
0x05F158B4: 150c01f8  str x21, [x0, #0x10]!
0x05F158B8: e10315aa  mov x1, x21
0x05F158BC: 42ac4997  bl #0x31809c4
0x05F158C0: e00313aa  mov x0, x19
0x05F158C4: e10314aa  mov x1, x20
0x05F158C8: 740200f9  str x20, [x19]
0x05F158CC: 3eac4997  bl #0x31809c4
0x05F158D0: 000340f9  ldr x0, [x24]
0x05F158D4: f3ac4997  bl #0x3180ca0
0x05F158D8: e10240f9  ldr x1, [x23]
0x05F158DC: f40300aa  mov x20, x0
0x05F158E0: b131bf97  bl #0x4ee1fa4
0x05F158E4: 748e01f8  str x20, [x19, #0x18]!
0x05F158E8: e00313aa  mov x0, x19
0x05F158EC: e10314aa  mov x1, x20
0x05F158F0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05F158F4: f65742a9  ldp x22, x21, [sp, #0x20]
0x05F158F8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05F158FC: fe67c4a8  ldp x30, x25, [sp], #0x40
0x05F15900: 31ac4917  b #0x31809c4

