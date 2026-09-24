; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7884 Merger.Audio.ViewModels.AudioViewModelBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65CCED0 | public void PlaySound(string configId, string soundKey) { }
; bytes=188 sha256=132590c7c2812a64ad95e999246c74e29497afdf544d23b884bb1e00b58d396f status=arm64_complete_bound indexed_start=True
0x065CCED0: fe0f1df8  str x30, [sp, #-0x30]!
0x065CCED4: f65701a9  stp x22, x21, [sp, #0x10]
0x065CCED8: f44f02a9  stp x20, x19, [sp, #0x20]
0x065CCEDC: d6ba00f0  adrp x22, #0x7d27000
0x065CCEE0: c85a6639  ldrb w8, [x22, #0x996]
0x065CCEE4: f30302aa  mov x19, x2
0x065CCEE8: f40301aa  mov x20, x1
0x065CCEEC: f50300aa  mov x21, x0
0x065CCEF0: c8000037  tbnz w8, #0, #0x65ccf08
0x065CCEF4: 008500d0  adrp x0, #0x766e000
0x065CCEF8: 008040f9  ldr x0, [x0, #0x100]
0x065CCEFC: c7ce2e97  bl #0x3180a18
0x065CCF00: 28008052  movz w8, #0x1
0x065CCF04: c85a2639  strb w8, [x22, #0x996]
0x065CCF08: b53640f9  ldr x21, [x21, #0x68]
0x065CCF0C: f50300b4  cbz x21, #0x65ccf88
0x065CCF10: 0a8500d0  adrp x10, #0x766e000
0x065CCF14: a80240f9  ldr x8, [x21]
0x065CCF18: 4a8140f9  ldr x10, [x10, #0x100]
0x065CCF1C: 095d4279  ldrh w9, [x8, #0x12e]
0x065CCF20: 410140f9  ldr x1, [x10]
0x065CCF24: 290100b4  cbz x9, #0x65ccf48
0x065CCF28: 0a5940f9  ldr x10, [x8, #0xb0]
0x065CCF2C: 4a210091  add x10, x10, #8
0x065CCF30: 4b815ff8  ldur x11, [x10, #-8]
0x065CCF34: 7f0101eb  cmp x11, x1
0x065CCF38: 00010054  b.eq #0x65ccf58
0x065CCF3C: 290500f1  subs x9, x9, #1
0x065CCF40: 4a410091  add x10, x10, #0x10
0x065CCF44: 61ffff54  b.ne #0x65ccf30
0x065CCF48: 42008052  movz w2, #0x2
0x065CCF4C: e00315aa  mov x0, x21
0x065CCF50: f0262e97  bl #0x3156b10
0x065CCF54: 05000014  b #0x65ccf68
0x065CCF58: 490140b9  ldr w9, [x10]
0x065CCF5C: 29090011  add w9, w9, #2
0x065CCF60: 08d1298b  add x8, x8, w9, sxtw #4
0x065CCF64: 00e10491  add x0, x8, #0x138
0x065CCF68: 040c40a9  ldp x4, x3, [x0]
0x065CCF6C: e00315aa  mov x0, x21
0x065CCF70: e10314aa  mov x1, x20
0x065CCF74: e20313aa  mov x2, x19
0x065CCF78: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065CCF7C: f65741a9  ldp x22, x21, [sp, #0x10]
0x065CCF80: fe0743f8  ldr x30, [sp], #0x30
0x065CCF84: 80001fd6  br x4
0x065CCF88: 49cf2e97  bl #0x3180cac

; RVA 0x65CCF8C | public void PlaySound(AudioClip clip, bool loop, float pitch = 0, float volume = 1) { }
; bytes=228 sha256=426bb14f92a1faa20be2f71141f3c3cc96d19e4b5cb60b0a3ac4f8ffe20cb5e0 status=arm64_complete_bound indexed_start=True
0x065CCF8C: ff8301d1  sub sp, sp, #0x60
0x065CCF90: e923026d  stp d9, d8, [sp, #0x20]
0x065CCF94: fe1b00f9  str x30, [sp, #0x30]
0x065CCF98: f65704a9  stp x22, x21, [sp, #0x40]
0x065CCF9C: f44f05a9  stp x20, x19, [sp, #0x50]
0x065CCFA0: d6ba00f0  adrp x22, #0x7d27000
0x065CCFA4: c85e6639  ldrb w8, [x22, #0x997]
0x065CCFA8: 281ca14e  mov v8.16b, v1.16b
0x065CCFAC: 091ca04e  mov v9.16b, v0.16b
0x065CCFB0: f403022a  mov w20, w2
0x065CCFB4: f30301aa  mov x19, x1
0x065CCFB8: f50300aa  mov x21, x0
0x065CCFBC: c8000037  tbnz w8, #0, #0x65ccfd4
0x065CCFC0: 008500d0  adrp x0, #0x766e000
0x065CCFC4: 008040f9  ldr x0, [x0, #0x100]
0x065CCFC8: 94ce2e97  bl #0x3180a18
0x065CCFCC: 28008052  movz w8, #0x1
0x065CCFD0: c85e2639  strb w8, [x22, #0x997]
0x065CCFD4: b53640f9  ldr x21, [x21, #0x68]
0x065CCFD8: b50400b4  cbz x21, #0x65cd06c
0x065CCFDC: 0a8500d0  adrp x10, #0x766e000
0x065CCFE0: a80240f9  ldr x8, [x21]
0x065CCFE4: 4a8140f9  ldr x10, [x10, #0x100]
0x065CCFE8: 095d4279  ldrh w9, [x8, #0x12e]
0x065CCFEC: 410140f9  ldr x1, [x10]
0x065CCFF0: 290100b4  cbz x9, #0x65cd014
0x065CCFF4: 0a5940f9  ldr x10, [x8, #0xb0]
0x065CCFF8: 4a210091  add x10, x10, #8
0x065CCFFC: 4b815ff8  ldur x11, [x10, #-8]
0x065CD000: 7f0101eb  cmp x11, x1
0x065CD004: 00010054  b.eq #0x65cd024
0x065CD008: 290500f1  subs x9, x9, #1
0x065CD00C: 4a410091  add x10, x10, #0x10
0x065CD010: 61ffff54  b.ne #0x65ccffc
0x065CD014: 82008052  movz w2, #0x4
0x065CD018: e00315aa  mov x0, x21
0x065CD01C: bd262e97  bl #0x3156b10
0x065CD020: 05000014  b #0x65cd034
0x065CD024: 490140b9  ldr w9, [x10]
0x065CD028: 29110011  add w9, w9, #4
0x065CD02C: 08d1298b  add x8, x8, w9, sxtw #4
0x065CD030: 00e10491  add x0, x8, #0x138
0x065CD034: 090c40a9  ldp x9, x3, [x0]
0x065CD038: 82020012  and w2, w20, #1
0x065CD03C: e8230091  add x8, sp, #8
0x065CD040: e00315aa  mov x0, x21
0x065CD044: e10313aa  mov x1, x19
0x065CD048: 201da94e  mov v0.16b, v9.16b
0x065CD04C: 011da84e  mov v1.16b, v8.16b
0x065CD050: 20013fd6  blr x9
0x065CD054: f44f45a9  ldp x20, x19, [sp, #0x50]
0x065CD058: f65744a9  ldp x22, x21, [sp, #0x40]
0x065CD05C: fe1b40f9  ldr x30, [sp, #0x30]
0x065CD060: e923426d  ldp d9, d8, [sp, #0x20]
0x065CD064: ff830191  add sp, sp, #0x60
0x065CD068: c0035fd6  ret
0x065CD06C: 10cf2e97  bl #0x3180cac

; RVA 0x65CD070 | public void PlaySound(string configId, SoundArguments soundArguments) { }
; bytes=196 sha256=66651947472fd16f61a05e80f1fc67f72689e9061c61420d9f950a26a3eb15c3 status=arm64_complete_bound indexed_start=True
0x065CD070: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x065CD074: f65701a9  stp x22, x21, [sp, #0x10]
0x065CD078: f44f02a9  stp x20, x19, [sp, #0x20]
0x065CD07C: d7ba00d0  adrp x23, #0x7d27000
0x065CD080: e8626639  ldrb w8, [x23, #0x998]
0x065CD084: f30303aa  mov x19, x3
0x065CD088: f40302aa  mov x20, x2
0x065CD08C: f50301aa  mov x21, x1
0x065CD090: f60300aa  mov x22, x0
0x065CD094: c8000037  tbnz w8, #0, #0x65cd0ac
0x065CD098: 008500b0  adrp x0, #0x766e000
0x065CD09C: 008040f9  ldr x0, [x0, #0x100]
0x065CD0A0: 5ece2e97  bl #0x3180a18
0x065CD0A4: 28008052  movz w8, #0x1
0x065CD0A8: e8622639  strb w8, [x23, #0x998]
0x065CD0AC: d63640f9  ldr x22, [x22, #0x68]
0x065CD0B0: 160400b4  cbz x22, #0x65cd130
0x065CD0B4: 0a8500b0  adrp x10, #0x766e000
0x065CD0B8: c80240f9  ldr x8, [x22]
0x065CD0BC: 4a8140f9  ldr x10, [x10, #0x100]
0x065CD0C0: 095d4279  ldrh w9, [x8, #0x12e]
0x065CD0C4: 410140f9  ldr x1, [x10]
0x065CD0C8: 290100b4  cbz x9, #0x65cd0ec
0x065CD0CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x065CD0D0: 4a210091  add x10, x10, #8
0x065CD0D4: 4b815ff8  ldur x11, [x10, #-8]
0x065CD0D8: 7f0101eb  cmp x11, x1
0x065CD0DC: 00010054  b.eq #0x65cd0fc
0x065CD0E0: 290500f1  subs x9, x9, #1
0x065CD0E4: 4a410091  add x10, x10, #0x10
0x065CD0E8: 61ffff54  b.ne #0x65cd0d4
0x065CD0EC: a2008052  movz w2, #0x5
0x065CD0F0: e00316aa  mov x0, x22
0x065CD0F4: 87262e97  bl #0x3156b10
0x065CD0F8: 05000014  b #0x65cd10c
0x065CD0FC: 490140b9  ldr w9, [x10]
0x065CD100: 29150011  add w9, w9, #5
0x065CD104: 08d1298b  add x8, x8, w9, sxtw #4
0x065CD108: 00e10491  add x0, x8, #0x138
0x065CD10C: 051040a9  ldp x5, x4, [x0]
0x065CD110: e00316aa  mov x0, x22
0x065CD114: e10315aa  mov x1, x21
0x065CD118: e20314aa  mov x2, x20
0x065CD11C: e30313aa  mov x3, x19
0x065CD120: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065CD124: f65741a9  ldp x22, x21, [sp, #0x10]
0x065CD128: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x065CD12C: a0001fd6  br x5
0x065CD130: dfce2e97  bl #0x3180cac

; RVA 0x65CD134 | public ISound GetSoundById(string soundId) { }
; bytes=172 sha256=f66ae1f45b1078e264e35a5afdd7e2b874add8c963532c19e7539dd4e57e7fd4 status=arm64_complete_bound indexed_start=True
0x065CD134: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065CD138: f44f01a9  stp x20, x19, [sp, #0x10]
0x065CD13C: d5ba00d0  adrp x21, #0x7d27000
0x065CD140: a8666639  ldrb w8, [x21, #0x999]
0x065CD144: f30301aa  mov x19, x1
0x065CD148: f40300aa  mov x20, x0
0x065CD14C: c8000037  tbnz w8, #0, #0x65cd164
0x065CD150: 608500f0  adrp x0, #0x767c000
0x065CD154: 005841f9  ldr x0, [x0, #0x2b0]
0x065CD158: 30ce2e97  bl #0x3180a18
0x065CD15C: 28008052  movz w8, #0x1
0x065CD160: a8662639  strb w8, [x21, #0x999]
0x065CD164: 943a40f9  ldr x20, [x20, #0x70]
0x065CD168: b40300b4  cbz x20, #0x65cd1dc
0x065CD16C: 6a8500f0  adrp x10, #0x767c000
0x065CD170: 880240f9  ldr x8, [x20]
0x065CD174: 4a5941f9  ldr x10, [x10, #0x2b0]
0x065CD178: 095d4279  ldrh w9, [x8, #0x12e]
0x065CD17C: 410140f9  ldr x1, [x10]
0x065CD180: 290100b4  cbz x9, #0x65cd1a4
0x065CD184: 0a5940f9  ldr x10, [x8, #0xb0]
0x065CD188: 4a210091  add x10, x10, #8
0x065CD18C: 4b815ff8  ldur x11, [x10, #-8]
0x065CD190: 7f0101eb  cmp x11, x1
0x065CD194: 00010054  b.eq #0x65cd1b4
0x065CD198: 290500f1  subs x9, x9, #1
0x065CD19C: 4a410091  add x10, x10, #0x10
0x065CD1A0: 61ffff54  b.ne #0x65cd18c
0x065CD1A4: e2008052  movz w2, #0x7
0x065CD1A8: e00314aa  mov x0, x20
0x065CD1AC: 59262e97  bl #0x3156b10
0x065CD1B0: 05000014  b #0x65cd1c4
0x065CD1B4: 490140b9  ldr w9, [x10]
0x065CD1B8: 291d0011  add w9, w9, #7
0x065CD1BC: 08d1298b  add x8, x8, w9, sxtw #4
0x065CD1C0: 00e10491  add x0, x8, #0x138
0x065CD1C4: 030840a9  ldp x3, x2, [x0]
0x065CD1C8: e00314aa  mov x0, x20
0x065CD1CC: e10313aa  mov x1, x19
0x065CD1D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065CD1D4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065CD1D8: 60001fd6  br x3
0x065CD1DC: b4ce2e97  bl #0x3180cac

; RVA 0x65CD1E0 | public bool HasSoundWithConfig(string soundId, SoundArguments soundArguments) { }
; bytes=224 sha256=baba32a12e6ba68ab20661686bd73d0e862939b40a3e72ee116bae914b88b468 status=arm64_complete_bound indexed_start=True
0x065CD1E0: ff0301d1  sub sp, sp, #0x40
0x065CD1E4: fe5f01a9  stp x30, x23, [sp, #0x10]
0x065CD1E8: f65702a9  stp x22, x21, [sp, #0x20]
0x065CD1EC: f44f03a9  stp x20, x19, [sp, #0x30]
0x065CD1F0: d7ba00d0  adrp x23, #0x7d27000
0x065CD1F4: e86a6639  ldrb w8, [x23, #0x99a]
0x065CD1F8: f30303aa  mov x19, x3
0x065CD1FC: f40302aa  mov x20, x2
0x065CD200: f50301aa  mov x21, x1
0x065CD204: f60300aa  mov x22, x0
0x065CD208: c8000037  tbnz w8, #0, #0x65cd220
0x065CD20C: c08800f0  adrp x0, #0x76e8000
0x065CD210: 000c43f9  ldr x0, [x0, #0x618]
0x065CD214: 01ce2e97  bl #0x3180a18
0x065CD218: 28008052  movz w8, #0x1
0x065CD21C: e86a2639  strb w8, [x23, #0x99a]
0x065CD220: e00316aa  mov x0, x22
0x065CD224: e10315aa  mov x1, x21
0x065CD228: ff0700f9  str xzr, [sp, #8]
0x065CD22C: c2ffff97  bl #0x65cd134
0x065CD230: c00300b4  cbz x0, #0x65cd2a8
0x065CD234: ca8800f0  adrp x10, #0x76e8000
0x065CD238: 080040f9  ldr x8, [x0]
0x065CD23C: 4a0d43f9  ldr x10, [x10, #0x618]
0x065CD240: f50300aa  mov x21, x0
0x065CD244: 095d4279  ldrh w9, [x8, #0x12e]
0x065CD248: 410140f9  ldr x1, [x10]
0x065CD24C: 290100b4  cbz x9, #0x65cd270
0x065CD250: 0a5940f9  ldr x10, [x8, #0xb0]
0x065CD254: 4a210091  add x10, x10, #8
0x065CD258: 4b815ff8  ldur x11, [x10, #-8]
0x065CD25C: 7f0101eb  cmp x11, x1
0x065CD260: 00010054  b.eq #0x65cd280
0x065CD264: 290500f1  subs x9, x9, #1
0x065CD268: 4a410091  add x10, x10, #0x10
0x065CD26C: 61ffff54  b.ne #0x65cd258
0x065CD270: 22008052  movz w2, #0x1
0x065CD274: e00315aa  mov x0, x21
0x065CD278: 26262e97  bl #0x3156b10
0x065CD27C: 05000014  b #0x65cd290
0x065CD280: 490140b9  ldr w9, [x10]
0x065CD284: 29050011  add w9, w9, #1
0x065CD288: 08d1298b  add x8, x8, w9, sxtw #4
0x065CD28C: 00e10491  add x0, x8, #0x138
0x065CD290: 081040a9  ldp x8, x4, [x0]
0x065CD294: e3230091  add x3, sp, #8
0x065CD298: e00315aa  mov x0, x21
0x065CD29C: e10314aa  mov x1, x20
0x065CD2A0: e20313aa  mov x2, x19
0x065CD2A4: 00013fd6  blr x8
0x065CD2A8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x065CD2AC: f65742a9  ldp x22, x21, [sp, #0x20]
0x065CD2B0: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x065CD2B4: 00000012  and w0, w0, #1
0x065CD2B8: ff030191  add sp, sp, #0x40
0x065CD2BC: c0035fd6  ret

; RVA 0x65CD2C0 | public void StopAllPlayingSounds() { }
; bytes=164 sha256=9218541857a2be90b8a2ae37742f8880c0d7c5079e6e1bf9317b1c12a3eacca1 status=arm64_complete_bound indexed_start=True
0x065CD2C0: fe0f1ef8  str x30, [sp, #-0x20]!
0x065CD2C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x065CD2C8: d4ba00d0  adrp x20, #0x7d27000
0x065CD2CC: 886e6639  ldrb w8, [x20, #0x99b]
0x065CD2D0: f30300aa  mov x19, x0
0x065CD2D4: c8000037  tbnz w8, #0, #0x65cd2ec
0x065CD2D8: 008500b0  adrp x0, #0x766e000
0x065CD2DC: 008040f9  ldr x0, [x0, #0x100]
0x065CD2E0: cecd2e97  bl #0x3180a18
0x065CD2E4: 28008052  movz w8, #0x1
0x065CD2E8: 886e2639  strb w8, [x20, #0x99b]
0x065CD2EC: 733640f9  ldr x19, [x19, #0x68]
0x065CD2F0: 930300b4  cbz x19, #0x65cd360
0x065CD2F4: 0a8500b0  adrp x10, #0x766e000
0x065CD2F8: 680240f9  ldr x8, [x19]
0x065CD2FC: 4a8140f9  ldr x10, [x10, #0x100]
0x065CD300: 095d4279  ldrh w9, [x8, #0x12e]
0x065CD304: 410140f9  ldr x1, [x10]
0x065CD308: 290100b4  cbz x9, #0x65cd32c
0x065CD30C: 0a5940f9  ldr x10, [x8, #0xb0]
0x065CD310: 4a210091  add x10, x10, #8
0x065CD314: 4b815ff8  ldur x11, [x10, #-8]
0x065CD318: 7f0101eb  cmp x11, x1
0x065CD31C: 00010054  b.eq #0x65cd33c
0x065CD320: 290500f1  subs x9, x9, #1
0x065CD324: 4a410091  add x10, x10, #0x10
0x065CD328: 61ffff54  b.ne #0x65cd314
0x065CD32C: c2008052  movz w2, #0x6
0x065CD330: e00313aa  mov x0, x19
0x065CD334: f7252e97  bl #0x3156b10
0x065CD338: 05000014  b #0x65cd34c
0x065CD33C: 490140b9  ldr w9, [x10]
0x065CD340: 29190011  add w9, w9, #6
0x065CD344: 08d1298b  add x8, x8, w9, sxtw #4
0x065CD348: 00e10491  add x0, x8, #0x138
0x065CD34C: 020440a9  ldp x2, x1, [x0]
0x065CD350: e00313aa  mov x0, x19
0x065CD354: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065CD358: fe0742f8  ldr x30, [sp], #0x20
0x065CD35C: 40001fd6  br x2
0x065CD360: 53ce2e97  bl #0x3180cac

; RVA 0x65CD364 | public void .ctor() { }
; bytes=8 sha256=82e3476d356bb4d143fd2a11c42eee083d0e1164da5fa6bd9618a47387f3e8f7 status=arm64_complete_bound indexed_start=True
0x065CD364: e1031faa  mov x1, xzr
0x065CD368: 32f80d14  b #0x694b430

