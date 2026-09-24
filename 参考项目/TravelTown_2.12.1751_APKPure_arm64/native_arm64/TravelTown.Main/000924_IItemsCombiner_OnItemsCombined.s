; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 924 .IItemsCombiner.OnItemsCombined
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x665F774 | public void .ctor(object object, IntPtr method) { }
; bytes=160 sha256=7ef4fe724bff7a2bc3863b7f1b5e88e7cba0d069da1575281e67c84d445612dc status=arm64_complete_bound indexed_start=True
0x0665F774: fe0f1df8  str x30, [sp, #-0x30]!
0x0665F778: f65701a9  stp x22, x21, [sp, #0x10]
0x0665F77C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0665F780: 480440f9  ldr x8, [x2, #8]
0x0665F784: f30300aa  mov x19, x0
0x0665F788: 021400f9  str x2, [x0, #0x28]
0x0665F78C: f50302aa  mov x21, x2
0x0665F790: 080800f9  str x8, [x0, #0x10]
0x0665F794: 010c02f8  str x1, [x0, #0x20]!
0x0665F798: f40301aa  mov x20, x1
0x0665F79C: 8a842c97  bl #0x31809c4
0x0665F7A0: b64a4139  ldrb w22, [x21, #0x52]
0x0665F7A4: e00315aa  mov x0, x21
0x0665F7A8: 732200f9  str x19, [x19, #0x40]
0x0665F7AC: da842c97  bl #0x3180b14
0x0665F7B0: e0000036  tbz w0, #0, #0x665f7cc
0x0665F7B4: df0e0071  cmp w22, #3
0x0665F7B8: c1000054  b.ne #0x665f7d0
0x0665F7BC: e854fed0  adrp x8, #0x30fd000
0x0665F7C0: 08110891  add x8, x8, #0x204
0x0665F7C4: 680e00f9  str x8, [x19, #0x18]
0x0665F7C8: 06000014  b #0x665f7e0
0x0665F7CC: 940100b4  cbz x20, #0x665f7fc
0x0665F7D0: 680a40f9  ldr x8, [x19, #0x10]
0x0665F7D4: 691240f9  ldr x9, [x19, #0x20]
0x0665F7D8: 680e00f9  str x8, [x19, #0x18]
0x0665F7DC: 692200f9  str x9, [x19, #0x40]
0x0665F7E0: e854fed0  adrp x8, #0x30fd000
0x0665F7E4: 08910691  add x8, x8, #0x1a4
0x0665F7E8: 681e00f9  str x8, [x19, #0x38]
0x0665F7EC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0665F7F0: f65741a9  ldp x22, x21, [sp, #0x10]
0x0665F7F4: fe0743f8  ldr x30, [sp], #0x30
0x0665F7F8: c0035fd6  ret
0x0665F7FC: 6182fdd0  adrp x1, #0x16ad000
0x0665F800: 21bc1691  add x1, x1, #0x5af
0x0665F804: e0031faa  mov x0, xzr
0x0665F808: 30852c97  bl #0x3180cc8
0x0665F80C: e1031faa  mov x1, xzr
0x0665F810: db842c97  bl #0x3180b7c

; RVA 0x666CC7C | public virtual void Invoke(bool success, bool shouldSelectItemAtTarget, bool shouldVerifyMerge = False) { }
; bytes=32 sha256=505a74754711ff1d2c4bdf91b9e3371b265555e2d5c1f9c7c4605b9a270449a6 status=arm64_complete_bound indexed_start=True
0x0666CC7C: 082040f9  ldr x8, [x0, #0x40]
0x0666CC80: 050c40f9  ldr x5, [x0, #0x18]
0x0666CC84: 041440f9  ldr x4, [x0, #0x28]
0x0666CC88: 21000012  and w1, w1, #1
0x0666CC8C: 42000012  and w2, w2, #1
0x0666CC90: 63000012  and w3, w3, #1
0x0666CC94: e00308aa  mov x0, x8
0x0666CC98: a0001fd6  br x5

; RVA 0x666CC9C | public virtual IAsyncResult BeginInvoke(bool success, bool shouldSelectItemAtTarget, bool shouldVerifyMerge, AsyncCallback callback, object object) { }
; bytes=196 sha256=b26fb610000d2d53d2e336d0d2215c720e5843682c8e7d0ce671c9c6630cfefc status=arm64_complete_bound indexed_start=True
0x0666CC9C: ff8301d1  sub sp, sp, #0x60
0x0666CCA0: fe5f03a9  stp x30, x23, [sp, #0x30]
0x0666CCA4: f65704a9  stp x22, x21, [sp, #0x40]
0x0666CCA8: f44f05a9  stp x20, x19, [sp, #0x50]
0x0666CCAC: 49000012  and w9, w2, #1
0x0666CCB0: 28000012  and w8, w1, #1
0x0666CCB4: e9a30039  strb w9, [sp, #0x28]
0x0666CCB8: 69000012  and w9, w3, #1
0x0666CCBC: f7b50090  adrp x23, #0x7d28000
0x0666CCC0: e8b30039  strb w8, [sp, #0x2c]
0x0666CCC4: e9930039  strb w9, [sp, #0x24]
0x0666CCC8: 167f00f0  adrp x22, #0x764f000
0x0666CCCC: e8f24339  ldrb w8, [x23, #0xfc]
0x0666CCD0: d61a40f9  ldr x22, [x22, #0x30]
0x0666CCD4: f30305aa  mov x19, x5
0x0666CCD8: f40304aa  mov x20, x4
0x0666CCDC: f50300aa  mov x21, x0
0x0666CCE0: c8000037  tbnz w8, #0, #0x666ccf8
0x0666CCE4: 007f00f0  adrp x0, #0x764f000
0x0666CCE8: 001840f9  ldr x0, [x0, #0x30]
0x0666CCEC: 4b4f2c97  bl #0x3180a18
0x0666CCF0: 28008052  movz w8, #0x1
0x0666CCF4: e8f20339  strb w8, [x23, #0xfc]
0x0666CCF8: c00240f9  ldr x0, [x22]
0x0666CCFC: 00e4006f  movi v0.2d, #0000000000000000
0x0666CD00: e1b30091  add x1, sp, #0x2c
0x0666CD04: e00300ad  stp q0, q0, [sp]
0x0666CD08: a34f2c97  bl #0x3180b94
0x0666CD0C: c80240f9  ldr x8, [x22]
0x0666CD10: e00300f9  str x0, [sp]
0x0666CD14: e1a30091  add x1, sp, #0x28
0x0666CD18: e00308aa  mov x0, x8
0x0666CD1C: 9e4f2c97  bl #0x3180b94
0x0666CD20: c80240f9  ldr x8, [x22]
0x0666CD24: e00700f9  str x0, [sp, #8]
0x0666CD28: e1930091  add x1, sp, #0x24
0x0666CD2C: e00308aa  mov x0, x8
0x0666CD30: 994f2c97  bl #0x3180b94
0x0666CD34: e00b00f9  str x0, [sp, #0x10]
0x0666CD38: e1030091  mov x1, sp
0x0666CD3C: e00315aa  mov x0, x21
0x0666CD40: e20314aa  mov x2, x20
0x0666CD44: e30313aa  mov x3, x19
0x0666CD48: 234f2c97  bl #0x31809d4
0x0666CD4C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x0666CD50: f65744a9  ldp x22, x21, [sp, #0x40]
0x0666CD54: fe5f43a9  ldp x30, x23, [sp, #0x30]
0x0666CD58: ff830191  add sp, sp, #0x60
0x0666CD5C: c0035fd6  ret

; RVA 0x666CD60 | public virtual void EndInvoke(IAsyncResult result) { }
; bytes=12 sha256=53b9d6960f1c1aa503226bfd401afd3739c69cde9e6734cd229f9e5b09c1bd74 status=arm64_complete_bound indexed_start=True
0x0666CD60: e00301aa  mov x0, x1
0x0666CD64: e1031faa  mov x1, xzr
0x0666CD68: 1c4f2c17  b #0x31809d8

