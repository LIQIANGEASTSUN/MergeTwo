; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7740 .BoosterSystem.<>c__DisplayClass28_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65BEDF8 | public void .ctor() { }
; bytes=8 sha256=f0c140db2b77c1e95a20e340adeb21f44f2275a4814621521816cb186e48facf status=arm64_complete_bound indexed_start=True
0x065BEDF8: e1031faa  mov x1, xzr
0x065BEDFC: 006ec417  b #0x56da5fc

; RVA 0x65BEFC0 | internal void <CheckBoosterDeactivatedRemote>b__0(List<RemoteBoosterData> act) { }
; bytes=356 sha256=6f2d1272db3b43526f7aece18a6f6dd01fb9267b650de8807dd9448bc2b52aca status=arm64_complete_bound indexed_start=True
0x065BEFC0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x065BEFC4: f65701a9  stp x22, x21, [sp, #0x10]
0x065BEFC8: f44f02a9  stp x20, x19, [sp, #0x20]
0x065BEFCC: 55bb00b0  adrp x21, #0x7d27000
0x065BEFD0: a82a6439  ldrb w8, [x21, #0x90a]
0x065BEFD4: f40301aa  mov x20, x1
0x065BEFD8: f30300aa  mov x19, x0
0x065BEFDC: a8020037  tbnz w8, #0, #0x65bf030
0x065BEFE0: 808500f0  adrp x0, #0x7671000
0x065BEFE4: 008443f9  ldr x0, [x0, #0x708]
0x065BEFE8: 8c062f97  bl #0x3180a18
0x065BEFEC: e08500f0  adrp x0, #0x767d000
0x065BEFF0: 002c45f9  ldr x0, [x0, #0xa58]
0x065BEFF4: 89062f97  bl #0x3180a18
0x065BEFF8: c08500f0  adrp x0, #0x7679000
0x065BEFFC: 00e043f9  ldr x0, [x0, #0x7c0]
0x065BF000: 86062f97  bl #0x3180a18
0x065BF004: c08500d0  adrp x0, #0x7679000
0x065BF008: 00e443f9  ldr x0, [x0, #0x7c8]
0x065BF00C: 83062f97  bl #0x3180a18
0x065BF010: 008a00f0  adrp x0, #0x7702000
0x065BF014: 00e447f9  ldr x0, [x0, #0xfc8]
0x065BF018: 80062f97  bl #0x3180a18
0x065BF01C: 008a00f0  adrp x0, #0x7702000
0x065BF020: 00e847f9  ldr x0, [x0, #0xfd0]
0x065BF024: 7d062f97  bl #0x3180a18
0x065BF028: 28008052  movz w8, #0x1
0x065BF02C: a82a2439  strb w8, [x21, #0x90a]
0x065BF030: f50313aa  mov x21, x19
0x065BF034: d78500d0  adrp x23, #0x7679000
0x065BF038: b60e42f8  ldr x22, [x21, #0x20]!
0x065BF03C: f7e243f9  ldr x23, [x23, #0x7c0]
0x065BF040: 160200b5  cbnz x22, #0x65bf080
0x065BF044: c88500d0  adrp x8, #0x7679000
0x065BF048: 08e543f9  ldr x8, [x8, #0x7c8]
0x065BF04C: 000140f9  ldr x0, [x8]
0x065BF050: 14072f97  bl #0x3180ca0
0x065BF054: 088a00f0  adrp x8, #0x7702000
0x065BF058: 08e547f9  ldr x8, [x8, #0xfc8]
0x065BF05C: e10313aa  mov x1, x19
0x065BF060: e3031faa  mov x3, xzr
0x065BF064: f60300aa  mov x22, x0
0x065BF068: 020140f9  ldr x2, [x8]
0x065BF06C: d45bb297  bl #0x5255fbc
0x065BF070: e00315aa  mov x0, x21
0x065BF074: e10316aa  mov x1, x22
0x065BF078: 761200f9  str x22, [x19, #0x20]
0x065BF07C: 52062f97  bl #0x31809c4
0x065BF080: e20240f9  ldr x2, [x23]
0x065BF084: e00314aa  mov x0, x20
0x065BF088: e10316aa  mov x1, x22
0x065BF08C: 29185a97  bl #0x3c45130
0x065BF090: 200400b4  cbz x0, #0x65bf114
0x065BF094: f50313aa  mov x21, x19
0x065BF098: f68500d0  adrp x22, #0x767d000
0x065BF09C: b48e42f8  ldr x20, [x21, #0x28]!
0x065BF0A0: d62e45f9  ldr x22, [x22, #0xa58]
0x065BF0A4: 140200b5  cbnz x20, #0x65bf0e4
0x065BF0A8: 888500d0  adrp x8, #0x7671000
0x065BF0AC: 088543f9  ldr x8, [x8, #0x708]
0x065BF0B0: 000140f9  ldr x0, [x8]
0x065BF0B4: fb062f97  bl #0x3180ca0
0x065BF0B8: 088a00f0  adrp x8, #0x7702000
0x065BF0BC: 08e947f9  ldr x8, [x8, #0xfd0]
0x065BF0C0: e10313aa  mov x1, x19
0x065BF0C4: e3031faa  mov x3, xzr
0x065BF0C8: f40300aa  mov x20, x0
0x065BF0CC: 020140f9  ldr x2, [x8]
0x065BF0D0: e5ac0b94  bl #0x68aa464
0x065BF0D4: e00315aa  mov x0, x21
0x065BF0D8: e10314aa  mov x1, x20
0x065BF0DC: 741600f9  str x20, [x19, #0x28]
0x065BF0E0: 39062f97  bl #0x31809c4
0x065BF0E4: c00240f9  ldr x0, [x22]
0x065BF0E8: 08e040b9  ldr w8, [x0, #0xe0]
0x065BF0EC: 48000035  cbnz w8, #0x65bf0f4
0x065BF0F0: a7062f97  bl #0x3180b8c
0x065BF0F4: e00314aa  mov x0, x20
0x065BF0F8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065BF0FC: f65741a9  ldp x22, x21, [sp, #0x10]
0x065BF100: 00102e1e  fmov s0, #1.00000000
0x065BF104: 21008052  movz w1, #0x1
0x065BF108: e2031faa  mov x2, xzr
0x065BF10C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x065BF110: 0cad0b14  b #0x68aa540
0x065BF114: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065BF118: f65741a9  ldp x22, x21, [sp, #0x10]
0x065BF11C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x065BF120: c0035fd6  ret

; RVA 0x65BF124 | internal bool <CheckBoosterDeactivatedRemote>b__1(RemoteBoosterData b) { }
; bytes=108 sha256=d3529ab5f81cdbfaea7e1e673964ad1ff500c657c2fc947afed68d2a1dfb6d7e status=arm64_complete_bound indexed_start=True
0x065BF124: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065BF128: f44f01a9  stp x20, x19, [sp, #0x10]
0x065BF12C: 55bb0090  adrp x21, #0x7d27000
0x065BF130: a82e6439  ldrb w8, [x21, #0x90b]
0x065BF134: f30301aa  mov x19, x1
0x065BF138: f40300aa  mov x20, x0
0x065BF13C: c8000037  tbnz w8, #0, #0x65bf154
0x065BF140: 00860090  adrp x0, #0x767f000
0x065BF144: 00e843f9  ldr x0, [x0, #0x7d0]
0x065BF148: 34062f97  bl #0x3180a18
0x065BF14C: 28008052  movz w8, #0x1
0x065BF150: a82e2439  strb w8, [x21, #0x90b]
0x065BF154: d30100b4  cbz x19, #0x65bf18c
0x065BF158: 800a40f9  ldr x0, [x20, #0x10]
0x065BF15C: 800100b4  cbz x0, #0x65bf18c
0x065BF160: 08860090  adrp x8, #0x767f000
0x065BF164: 08e943f9  ldr x8, [x8, #0x7d0]
0x065BF168: 731a40f9  ldr x19, [x19, #0x30]
0x065BF16C: 010140f9  ldr x1, [x8]
0x065BF170: fdb39897  bl #0x4bec164
0x065BF174: e10300aa  mov x1, x0
0x065BF178: e00313aa  mov x0, x19
0x065BF17C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065BF180: e2031faa  mov x2, xzr
0x065BF184: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065BF188: baadbc17  b #0x54ea870
0x065BF18C: c8062f97  bl #0x3180cac

; RVA 0x65BF190 | internal void <CheckBoosterDeactivatedRemote>b__2() { }
; bytes=32 sha256=1bd2db18852f45b000d4b45fa65578555ac68b540a6ce1733a23b384ca515eb4 status=arm64_complete_bound indexed_start=True
0x065BF190: fe0f1ff8  str x30, [sp, #-0x10]!
0x065BF194: 080c40f9  ldr x8, [x0, #0x18]
0x065BF198: a80000b4  cbz x8, #0x65bf1ac
0x065BF19C: 010840f9  ldr x1, [x0, #0x10]
0x065BF1A0: e00308aa  mov x0, x8
0x065BF1A4: fe0741f8  ldr x30, [sp], #0x10
0x065BF1A8: 35feff17  b #0x65bea7c
0x065BF1AC: c0062f97  bl #0x3180cac

