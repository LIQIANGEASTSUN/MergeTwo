; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33694 .Entities.ExcludeDelegate
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5F15D08 | public void .ctor(object object, IntPtr method) { }
; bytes=176 sha256=511e0b717328d1c6a488a664c4536bc780d08324bed0cd808685bc1c7645fd8a status=arm64_complete_bound indexed_start=True
0x05F15D08: fe0f1df8  str x30, [sp, #-0x30]!
0x05F15D0C: f65701a9  stp x22, x21, [sp, #0x10]
0x05F15D10: f44f02a9  stp x20, x19, [sp, #0x20]
0x05F15D14: 480440f9  ldr x8, [x2, #8]
0x05F15D18: f30300aa  mov x19, x0
0x05F15D1C: 021400f9  str x2, [x0, #0x28]
0x05F15D20: f50302aa  mov x21, x2
0x05F15D24: 080800f9  str x8, [x0, #0x10]
0x05F15D28: 010c02f8  str x1, [x0, #0x20]!
0x05F15D2C: f40301aa  mov x20, x1
0x05F15D30: 25ab4997  bl #0x31809c4
0x05F15D34: b64a4139  ldrb w22, [x21, #0x52]
0x05F15D38: e00315aa  mov x0, x21
0x05F15D3C: 732200f9  str x19, [x19, #0x40]
0x05F15D40: 75ab4997  bl #0x3180b14
0x05F15D44: c0000036  tbz w0, #0, #0x5f15d5c
0x05F15D48: df060071  cmp w22, #1
0x05F15D4C: c1000054  b.ne #0x5f15d64
0x05F15D50: 288ffed0  adrp x8, #0x30fb000
0x05F15D54: 08611391  add x8, x8, #0x4d8
0x05F15D58: 0a000014  b #0x5f15d80
0x05F15D5C: f6000034  cbz w22, #0x5f15d78
0x05F15D60: 140200b4  cbz x20, #0x5f15da0
0x05F15D64: 680a40f9  ldr x8, [x19, #0x10]
0x05F15D68: 691240f9  ldr x9, [x19, #0x20]
0x05F15D6C: 680e00f9  str x8, [x19, #0x18]
0x05F15D70: 692200f9  str x9, [x19, #0x40]
0x05F15D74: 04000014  b #0x5f15d84
0x05F15D78: 288ffed0  adrp x8, #0x30fb000
0x05F15D7C: 08e11291  add x8, x8, #0x4b8
0x05F15D80: 680e00f9  str x8, [x19, #0x18]
0x05F15D84: 288ffed0  adrp x8, #0x30fb000
0x05F15D88: 08911191  add x8, x8, #0x464
0x05F15D8C: 681e00f9  str x8, [x19, #0x38]
0x05F15D90: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05F15D94: f65741a9  ldp x22, x21, [sp, #0x10]
0x05F15D98: fe0743f8  ldr x30, [sp], #0x30
0x05F15D9C: c0035fd6  ret
0x05F15DA0: c1bcfd90  adrp x1, #0x16ad000
0x05F15DA4: 21bc1691  add x1, x1, #0x5af
0x05F15DA8: e0031faa  mov x0, xzr
0x05F15DAC: c7ab4997  bl #0x3180cc8
0x05F15DB0: e1031faa  mov x1, xzr
0x05F15DB4: 72ab4997  bl #0x3180b7c

; RVA 0x5F15DB8 | public virtual bool Invoke(Entity entity) { }
; bytes=20 sha256=7b42b392f6f1ec5093696c2cc2afb36056545208a380aaab1cce2bf58cc2669a status=arm64_complete_bound indexed_start=True
0x05F15DB8: 082040f9  ldr x8, [x0, #0x40]
0x05F15DBC: 030c40f9  ldr x3, [x0, #0x18]
0x05F15DC0: 021440f9  ldr x2, [x0, #0x28]
0x05F15DC4: e00308aa  mov x0, x8
0x05F15DC8: 60001fd6  br x3

; RVA 0x5F15DCC | public virtual IAsyncResult BeginInvoke(Entity entity, AsyncCallback callback, object object) { }
; bytes=32 sha256=9c8b6f938f6e1b75af6498d7a5996628368a0ae734d9d8ab172ee42ff3018aaf status=arm64_complete_bound indexed_start=True
0x05F15DCC: ff8300d1  sub sp, sp, #0x20
0x05F15DD0: fffb00a9  stp xzr, x30, [sp, #8]
0x05F15DD4: e10300f9  str x1, [sp]
0x05F15DD8: e1030091  mov x1, sp
0x05F15DDC: feaa4997  bl #0x31809d4
0x05F15DE0: fe0b40f9  ldr x30, [sp, #0x10]
0x05F15DE4: ff830091  add sp, sp, #0x20
0x05F15DE8: c0035fd6  ret

; RVA 0x5F15DEC | public virtual bool EndInvoke(IAsyncResult result) { }
; bytes=40 sha256=be4e842f0ced4b6f65105edd99bdfdfab07ec212ffca07c3bdac14491799ccd0 status=arm64_complete_bound indexed_start=True
0x05F15DEC: fe0f1ff8  str x30, [sp, #-0x10]!
0x05F15DF0: e00301aa  mov x0, x1
0x05F15DF4: e1031faa  mov x1, xzr
0x05F15DF8: f8aa4997  bl #0x31809d8
0x05F15DFC: a00000b4  cbz x0, #0x5f15e10
0x05F15E00: 66ab4997  bl #0x3180b98
0x05F15E04: 00004039  ldrb w0, [x0]
0x05F15E08: fe0741f8  ldr x30, [sp], #0x10
0x05F15E0C: c0035fd6  ret
0x05F15E10: a7ab4997  bl #0x3180cac

