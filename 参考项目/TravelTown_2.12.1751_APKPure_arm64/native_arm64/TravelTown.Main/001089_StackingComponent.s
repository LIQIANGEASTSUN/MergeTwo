; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1089 MergeEngine.ECS.Components.Items.StackingComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FDDB0 | public void .ctor(StackingCapability capability, Entity entity) { }
; bytes=116 sha256=147e6549921b7df9c3cc1d35846648215b60e1173ad68cb083304bf9439bd56d status=arm64_complete_bound indexed_start=True
0x068FDDB0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FDDB4: f65701a9  stp x22, x21, [sp, #0x10]
0x068FDDB8: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FDDBC: 76a10090  adrp x22, #0x7d29000
0x068FDDC0: 577100b0  adrp x23, #0x7726000
0x068FDDC4: c8f26239  ldrb w8, [x22, #0x8bc]
0x068FDDC8: f7de43f9  ldr x23, [x23, #0x7b8]
0x068FDDCC: f50302aa  mov x21, x2
0x068FDDD0: f40301aa  mov x20, x1
0x068FDDD4: f30300aa  mov x19, x0
0x068FDDD8: c8000037  tbnz w8, #0, #0x68fddf0
0x068FDDDC: 407100b0  adrp x0, #0x7726000
0x068FDDE0: 00dc43f9  ldr x0, [x0, #0x7b8]
0x068FDDE4: 0d0b2297  bl #0x3180a18
0x068FDDE8: 28008052  movz w8, #0x1
0x068FDDEC: c8f22239  strb w8, [x22, #0x8bc]
0x068FDDF0: e30240f9  ldr x3, [x23]
0x068FDDF4: e00313aa  mov x0, x19
0x068FDDF8: e10314aa  mov x1, x20
0x068FDDFC: e20315aa  mov x2, x21
0x068FDE00: 56859197  bl #0x4d5f358
0x068FDE04: f40000b4  cbz x20, #0x68fde20
0x068FDE08: 881640b9  ldr w8, [x20, #0x14]
0x068FDE0C: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FDE10: 682a00b9  str w8, [x19, #0x28]
0x068FDE14: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FDE18: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FDE1C: c0035fd6  ret
0x068FDE20: a30b2297  bl #0x3180cac

; RVA 0x68FDE24 | public int get_StackSize() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x068FDE24: 002840b9  ldr w0, [x0, #0x28]
0x068FDE28: c0035fd6  ret

; RVA 0x68FDE2C | private void set_StackSize(int value) { }
; bytes=116 sha256=bb08cdfcbbd89070e69d84c1f0a0ecc80ed1ea21ea108d5df16dc88decf4cbbf status=arm64_complete_bound indexed_start=True
0x068FDE2C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x068FDE30: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FDE34: 75a10090  adrp x21, #0x7d29000
0x068FDE38: a8f66239  ldrb w8, [x21, #0x8bd]
0x068FDE3C: f403012a  mov w20, w1
0x068FDE40: f30300aa  mov x19, x0
0x068FDE44: c8000037  tbnz w8, #0, #0x68fde5c
0x068FDE48: 806a00b0  adrp x0, #0x764e000
0x068FDE4C: 000447f9  ldr x0, [x0, #0xe08]
0x068FDE50: f20a2297  bl #0x3180a18
0x068FDE54: 28008052  movz w8, #0x1
0x068FDE58: a8f62239  strb w8, [x21, #0x8bd]
0x068FDE5C: 682a40b9  ldr w8, [x19, #0x28]
0x068FDE60: 1f01146b  cmp w8, w20
0x068FDE64: 80010054  b.eq #0x68fde94
0x068FDE68: 886a00b0  adrp x8, #0x764e000
0x068FDE6C: 080547f9  ldr x8, [x8, #0xe08]
0x068FDE70: 000140f9  ldr x0, [x8]
0x068FDE74: 08e040b9  ldr w8, [x0, #0xe0]
0x068FDE78: 48000035  cbnz w8, #0x68fde80
0x068FDE7C: 440b2297  bl #0x3180b8c
0x068FDE80: 20008052  movz w0, #0x1
0x068FDE84: e103142a  mov w1, w20
0x068FDE88: e2031faa  mov x2, xzr
0x068FDE8C: 6b65b697  bl #0x5697438
0x068FDE90: 602a00b9  str w0, [x19, #0x28]
0x068FDE94: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FDE98: fe57c2a8  ldp x30, x21, [sp], #0x20
0x068FDE9C: c0035fd6  ret

; RVA 0x68FDEA0 | public void LoadComponent(SerializedStackingComponent componentData) { }
; bytes=28 sha256=b5ef2c524f493241ff45020183d3039554687939ff7f8a08f3619190da94e569 status=arm64_complete_bound indexed_start=True
0x068FDEA0: fe0f1ff8  str x30, [sp, #-0x10]!
0x068FDEA4: a10000b4  cbz x1, #0x68fdeb8
0x068FDEA8: 281040b9  ldr w8, [x1, #0x10]
0x068FDEAC: 082800b9  str w8, [x0, #0x28]
0x068FDEB0: fe0741f8  ldr x30, [sp], #0x10
0x068FDEB4: c0035fd6  ret
0x068FDEB8: 7d0b2297  bl #0x3180cac

; RVA 0x68FDEBC | public void IncrementStackSize(int amount = 1) { }
; bytes=12 sha256=fb7592980d0ca29d5e099defefe8f77b98e991565fdf85fafd6b34f5edda94a0 status=arm64_complete_bound indexed_start=True
0x068FDEBC: 082840b9  ldr w8, [x0, #0x28]
0x068FDEC0: 0101010b  add w1, w8, w1
0x068FDEC4: daffff17  b #0x68fde2c

; RVA 0x68FDEC8 | public void DecrementStackSize(int amount = 1) { }
; bytes=12 sha256=a44fbbebb0b6868e4cd85759d1da9a8a4f220676c5d21c198d62327fd6755540 status=arm64_complete_bound indexed_start=True
0x068FDEC8: 082840b9  ldr w8, [x0, #0x28]
0x068FDECC: 0101014b  sub w1, w8, w1
0x068FDED0: d7ffff17  b #0x68fde2c

; RVA 0x68FDED4 | public bool get_IsStacking() { }
; bytes=16 sha256=09baaaae029995e88d1e6aa246b28366620d73b6fb1c7fb547c35e0866138888 status=arm64_complete_bound indexed_start=True
0x068FDED4: 082840b9  ldr w8, [x0, #0x28]
0x068FDED8: 1f050071  cmp w8, #1
0x068FDEDC: e0d79f1a  cset w0, gt
0x068FDEE0: c0035fd6  ret

