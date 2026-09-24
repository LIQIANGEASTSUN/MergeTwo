; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25800 Merger.MergeBoard.Services.MergeBoardOperationTrackingService
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7BD8C | public void SendOperationData(IList<OperationNotificationData> operationNotificationDatas, Dictionary<string, string> metadata) { }
; bytes=672 sha256=db3d610cffde0a3d0728dbaa5de6fed807bffd37b1f559a0cac1a5de22423404 status=arm64_complete_bound indexed_start=True
0x06A7BD8C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A7BD90: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A7BD94: f65702a9  stp x22, x21, [sp, #0x20]
0x06A7BD98: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A7BD9C: 779500f0  adrp x23, #0x7d2a000
0x06A7BDA0: f85f00f0  adrp x24, #0x767a000
0x06A7BDA4: b65f0090  adrp x22, #0x766f000
0x06A7BDA8: e8ae5c39  ldrb w8, [x23, #0x72b]
0x06A7BDAC: 182f45f9  ldr x24, [x24, #0xa58]
0x06A7BDB0: d61a42f9  ldr x22, [x22, #0x430]
0x06A7BDB4: f40302aa  mov x20, x2
0x06A7BDB8: f50301aa  mov x21, x1
0x06A7BDBC: f30300aa  mov x19, x0
0x06A7BDC0: e8010037  tbnz w8, #0, #0x6a7bdfc
0x06A7BDC4: a05f0090  adrp x0, #0x766f000
0x06A7BDC8: 001842f9  ldr x0, [x0, #0x430]
0x06A7BDCC: 13131c97  bl #0x3180a18
0x06A7BDD0: e05f00f0  adrp x0, #0x767a000
0x06A7BDD4: 003c45f9  ldr x0, [x0, #0xa78]
0x06A7BDD8: 10131c97  bl #0x3180a18
0x06A7BDDC: e05f00f0  adrp x0, #0x767a000
0x06A7BDE0: 002c45f9  ldr x0, [x0, #0xa58]
0x06A7BDE4: 0d131c97  bl #0x3180a18
0x06A7BDE8: a06500d0  adrp x0, #0x7731000
0x06A7BDEC: 006044f9  ldr x0, [x0, #0x8c0]
0x06A7BDF0: 0a131c97  bl #0x3180a18
0x06A7BDF4: 28008052  movz w8, #0x1
0x06A7BDF8: e8ae1c39  strb w8, [x23, #0x72b]
0x06A7BDFC: 010340f9  ldr x1, [x24]
0x06A7BE00: e00313aa  mov x0, x19
0x06A7BE04: ce6a8697  bl #0x4c1693c
0x06A7BE08: c10240f9  ldr x1, [x22]
0x06A7BE0C: b4488697  bl #0x4c0e0dc
0x06A7BE10: 00010037  tbnz w0, #0, #0x6a7be30
0x06A7BE14: e85f00f0  adrp x8, #0x767a000
0x06A7BE18: 083d45f9  ldr x8, [x8, #0xa78]
0x06A7BE1C: 21008052  movz w1, #0x1
0x06A7BE20: e00313aa  mov x0, x19
0x06A7BE24: 020140f9  ldr x2, [x8]
0x06A7BE28: 5c6b8697  bl #0x4c16b98
0x06A7BE2C: a0070036  tbz w0, #0, #0x6a7bf20
0x06A7BE30: 762240f9  ldr x22, [x19, #0x40]
0x06A7BE34: 160800b4  cbz x22, #0x6a7bf34
0x06A7BE38: b86500d0  adrp x24, #0x7731000
0x06A7BE3C: c80240f9  ldr x8, [x22]
0x06A7BE40: 186344f9  ldr x24, [x24, #0x8c0]
0x06A7BE44: 095d4279  ldrh w9, [x8, #0x12e]
0x06A7BE48: 010340f9  ldr x1, [x24]
0x06A7BE4C: 290100b4  cbz x9, #0x6a7be70
0x06A7BE50: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7BE54: 4a210091  add x10, x10, #8
0x06A7BE58: 4b815ff8  ldur x11, [x10, #-8]
0x06A7BE5C: 7f0101eb  cmp x11, x1
0x06A7BE60: 00010054  b.eq #0x6a7be80
0x06A7BE64: 290500f1  subs x9, x9, #1
0x06A7BE68: 4a410091  add x10, x10, #0x10
0x06A7BE6C: 61ffff54  b.ne #0x6a7be58
0x06A7BE70: e00316aa  mov x0, x22
0x06A7BE74: e2031f2a  mov w2, wzr
0x06A7BE78: 266b1b97  bl #0x3156b10
0x06A7BE7C: 04000014  b #0x6a7be8c
0x06A7BE80: 490180b9  ldrsw x9, [x10]
0x06A7BE84: 0811098b  add x8, x8, x9, lsl #4
0x06A7BE88: 00e10491  add x0, x8, #0x138
0x06A7BE8C: 080440a9  ldp x8, x1, [x0]
0x06A7BE90: e00316aa  mov x0, x22
0x06A7BE94: 00013fd6  blr x8
0x06A7BE98: 772240f9  ldr x23, [x19, #0x40]
0x06A7BE9C: f70400b4  cbz x23, #0x6a7bf38
0x06A7BEA0: e80240f9  ldr x8, [x23]
0x06A7BEA4: 010340f9  ldr x1, [x24]
0x06A7BEA8: f60300aa  mov x22, x0
0x06A7BEAC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A7BEB0: 290100b4  cbz x9, #0x6a7bed4
0x06A7BEB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7BEB8: 4a210091  add x10, x10, #8
0x06A7BEBC: 4b815ff8  ldur x11, [x10, #-8]
0x06A7BEC0: 7f0101eb  cmp x11, x1
0x06A7BEC4: 00010054  b.eq #0x6a7bee4
0x06A7BEC8: 290500f1  subs x9, x9, #1
0x06A7BECC: 4a410091  add x10, x10, #0x10
0x06A7BED0: 61ffff54  b.ne #0x6a7bebc
0x06A7BED4: 22008052  movz w2, #0x1
0x06A7BED8: e00317aa  mov x0, x23
0x06A7BEDC: 0d6b1b97  bl #0x3156b10
0x06A7BEE0: 05000014  b #0x6a7bef4
0x06A7BEE4: 490140b9  ldr w9, [x10]
0x06A7BEE8: 29050011  add w9, w9, #1
0x06A7BEEC: 08d1298b  add x8, x8, w9, sxtw #4
0x06A7BEF0: 00e10491  add x0, x8, #0x138
0x06A7BEF4: 080440a9  ldp x8, x1, [x0]
0x06A7BEF8: e00317aa  mov x0, x23
0x06A7BEFC: 00013fd6  blr x8
0x06A7BF00: e10316aa  mov x1, x22
0x06A7BF04: e20300aa  mov x2, x0
0x06A7BF08: e30315aa  mov x3, x21
0x06A7BF0C: e40314aa  mov x4, x20
0x06A7BF10: 47000094  bl #0x6a7c02c
0x06A7BF14: e10300aa  mov x1, x0
0x06A7BF18: e00313aa  mov x0, x19
0x06A7BF1C: 73000094  bl #0x6a7c0e8
0x06A7BF20: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A7BF24: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A7BF28: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A7BF2C: fe0744f8  ldr x30, [sp], #0x40
0x06A7BF30: c0035fd6  ret
0x06A7BF34: 5e131c97  bl #0x3180cac
0x06A7BF38: 5d131c97  bl #0x3180cac
0x06A7BF3C: 05000014  b #0x6a7bf50
0x06A7BF40: 04000014  b #0x6a7bf50
0x06A7BF44: 03000014  b #0x6a7bf50
0x06A7BF48: 02000014  b #0x6a7bf50
0x06A7BF4C: 01000014  b #0x6a7bf50
0x06A7BF50: f30300aa  mov x19, x0
0x06A7BF54: 3f040071  cmp w1, #1
0x06A7BF58: 41060054  b.ne #0x6a7c020
0x06A7BF5C: e00313aa  mov x0, x19
0x06A7BF60: 6c4a1d94  bl #0x71ce910
0x06A7BF64: f30300aa  mov x19, x0
0x06A7BF68: 805e00f0  adrp x0, #0x764e000
0x06A7BF6C: 006c42f9  ldr x0, [x0, #0x4d8]
0x06A7BF70: af121c97  bl #0x3180a2c
0x06A7BF74: 680240f9  ldr x8, [x19]
0x06A7BF78: 010140f9  ldr x1, [x8]
0x06A7BF7C: 57141c97  bl #0x31810d8
0x06A7BF80: a0030036  tbz w0, #0, #0x6a7bff4
0x06A7BF84: 730240f9  ldr x19, [x19]
0x06A7BF88: 664a1d94  bl #0x71ce920
0x06A7BF8C: 530400b4  cbz x19, #0x6a7c014
0x06A7BF90: 680240f9  ldr x8, [x19]
0x06A7BF94: e00313aa  mov x0, x19
0x06A7BF98: 098558a9  ldp x9, x1, [x8, #0x188]
0x06A7BF9C: 20013fd6  blr x9
0x06A7BFA0: f30300aa  mov x19, x0
0x06A7BFA4: a06500d0  adrp x0, #0x7731000
0x06A7BFA8: 006444f9  ldr x0, [x0, #0x8c8]
0x06A7BFAC: a0121c97  bl #0x3180a2c
0x06A7BFB0: e10313aa  mov x1, x19
0x06A7BFB4: e2031faa  mov x2, xzr
0x06A7BFB8: fab9a997  bl #0x54ea7a0
0x06A7BFBC: f30300aa  mov x19, x0
0x06A7BFC0: 805e00f0  adrp x0, #0x764e000
0x06A7BFC4: 00cc42f9  ldr x0, [x0, #0x598]
0x06A7BFC8: 99121c97  bl #0x3180a2c
0x06A7BFCC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A7BFD0: 48000035  cbnz w8, #0x6a7bfd8
0x06A7BFD4: ee121c97  bl #0x3180b8c
0x06A7BFD8: e00313aa  mov x0, x19
0x06A7BFDC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A7BFE0: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A7BFE4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A7BFE8: e1031faa  mov x1, xzr
0x06A7BFEC: fe0744f8  ldr x30, [sp], #0x40
0x06A7BFF0: 22b81014  b #0x6eaa078
0x06A7BFF4: 00018052  movz w0, #0x8
0x06A7BFF8: 4e4a1d94  bl #0x71ce930
0x06A7BFFC: 680240f9  ldr x8, [x19]
0x06A7C000: 080000f9  str x8, [x0]
0x06A7C004: c13a0090  adrp x1, #0x71d4000
0x06A7C008: 21a03491  add x1, x1, #0xd28
0x06A7C00C: e2031faa  mov x2, xzr
0x06A7C010: 4c4a1d94  bl #0x71ce940
0x06A7C014: 26131c97  bl #0x3180cac
0x06A7C018: f30300aa  mov x19, x0
0x06A7C01C: 414a1d94  bl #0x71ce920
0x06A7C020: e00313aa  mov x0, x19
0x06A7C024: 4da61f97  bl #0x3265958
0x06A7C028: 3b350e97  bl #0x2e09514

; RVA 0x6A7C02C | private ClientMessageNotification CreateClientMessageNotification(string topic, string action, object payload, Dictionary<string, string> metadata, string debugData) { }
; bytes=188 sha256=4f1ee7cb09a1095a307d0f401c81f2ccdf73a1ee18c69e3a1acdb08419ffa885 status=arm64_complete_bound indexed_start=True
0x06A7C02C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A7C030: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A7C034: f65702a9  stp x22, x21, [sp, #0x20]
0x06A7C038: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A7C03C: 769500d0  adrp x22, #0x7d2a000
0x06A7C040: 986200d0  adrp x24, #0x76ce000
0x06A7C044: c8b25c39  ldrb w8, [x22, #0x72c]
0x06A7C048: 18c742f9  ldr x24, [x24, #0x588]
0x06A7C04C: f30304aa  mov x19, x4
0x06A7C050: f40303aa  mov x20, x3
0x06A7C054: f50302aa  mov x21, x2
0x06A7C058: f70301aa  mov x23, x1
0x06A7C05C: c8000037  tbnz w8, #0, #0x6a7c074
0x06A7C060: 806200d0  adrp x0, #0x76ce000
0x06A7C064: 00c442f9  ldr x0, [x0, #0x588]
0x06A7C068: 6c121c97  bl #0x3180a18
0x06A7C06C: 28008052  movz w8, #0x1
0x06A7C070: c8b21c39  strb w8, [x22, #0x72c]
0x06A7C074: 000340f9  ldr x0, [x24]
0x06A7C078: 0a131c97  bl #0x3180ca0
0x06A7C07C: e1031faa  mov x1, xzr
0x06A7C080: f60300aa  mov x22, x0
0x06A7C084: f5d2fa97  bl #0x6930c58
0x06A7C088: f60200b4  cbz x22, #0x6a7c0e4
0x06A7C08C: e00316aa  mov x0, x22
0x06A7C090: 170c01f8  str x23, [x0, #0x10]!
0x06A7C094: e10317aa  mov x1, x23
0x06A7C098: 4b121c97  bl #0x31809c4
0x06A7C09C: e00316aa  mov x0, x22
0x06A7C0A0: 158c01f8  str x21, [x0, #0x18]!
0x06A7C0A4: e10315aa  mov x1, x21
0x06A7C0A8: 47121c97  bl #0x31809c4
0x06A7C0AC: e00316aa  mov x0, x22
0x06A7C0B0: 140c02f8  str x20, [x0, #0x20]!
0x06A7C0B4: e10314aa  mov x1, x20
0x06A7C0B8: 43121c97  bl #0x31809c4
0x06A7C0BC: e00316aa  mov x0, x22
0x06A7C0C0: 138c02f8  str x19, [x0, #0x28]!
0x06A7C0C4: e10313aa  mov x1, x19
0x06A7C0C8: 3f121c97  bl #0x31809c4
0x06A7C0CC: e00316aa  mov x0, x22
0x06A7C0D0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A7C0D4: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A7C0D8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A7C0DC: fe0744f8  ldr x30, [sp], #0x40
0x06A7C0E0: c0035fd6  ret
0x06A7C0E4: f2121c97  bl #0x3180cac

; RVA 0x6A7C0E8 | private void SendTrackingData(ClientMessageNotification clientMsg) { }
; bytes=168 sha256=31e740aa70dc961bcc3fddebacb43e18140b62cf79b813e968df5d24b472eeb2 status=arm64_complete_bound indexed_start=True
0x06A7C0E8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A7C0EC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7C0F0: 759500d0  adrp x21, #0x7d2a000
0x06A7C0F4: a8b65c39  ldrb w8, [x21, #0x72d]
0x06A7C0F8: f30301aa  mov x19, x1
0x06A7C0FC: f40300aa  mov x20, x0
0x06A7C100: c8000037  tbnz w8, #0, #0x6a7c118
0x06A7C104: e05f00b0  adrp x0, #0x7679000
0x06A7C108: 00ec43f9  ldr x0, [x0, #0x7d8]
0x06A7C10C: 43121c97  bl #0x3180a18
0x06A7C110: 28008052  movz w8, #0x1
0x06A7C114: a8b61c39  strb w8, [x21, #0x72d]
0x06A7C118: 941a40f9  ldr x20, [x20, #0x30]
0x06A7C11C: 940300b4  cbz x20, #0x6a7c18c
0x06A7C120: ea5f00b0  adrp x10, #0x7679000
0x06A7C124: 880240f9  ldr x8, [x20]
0x06A7C128: 4aed43f9  ldr x10, [x10, #0x7d8]
0x06A7C12C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A7C130: 410140f9  ldr x1, [x10]
0x06A7C134: 290100b4  cbz x9, #0x6a7c158
0x06A7C138: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7C13C: 4a210091  add x10, x10, #8
0x06A7C140: 4b815ff8  ldur x11, [x10, #-8]
0x06A7C144: 7f0101eb  cmp x11, x1
0x06A7C148: 00010054  b.eq #0x6a7c168
0x06A7C14C: 290500f1  subs x9, x9, #1
0x06A7C150: 4a410091  add x10, x10, #0x10
0x06A7C154: 61ffff54  b.ne #0x6a7c140
0x06A7C158: e00314aa  mov x0, x20
0x06A7C15C: e2031f2a  mov w2, wzr
0x06A7C160: 6c6a1b97  bl #0x3156b10
0x06A7C164: 04000014  b #0x6a7c174
0x06A7C168: 490180b9  ldrsw x9, [x10]
0x06A7C16C: 0811098b  add x8, x8, x9, lsl #4
0x06A7C170: 00e10491  add x0, x8, #0x138
0x06A7C174: 030840a9  ldp x3, x2, [x0]
0x06A7C178: e00314aa  mov x0, x20
0x06A7C17C: e10313aa  mov x1, x19
0x06A7C180: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7C184: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A7C188: 60001fd6  br x3
0x06A7C18C: c8121c97  bl #0x3180cac

; RVA 0x6A7C190 | private OperationNotificationData ApplyEnhancers(OperationNotificationData payload) { }
; bytes=280 sha256=21cde364a78ae319fcaae0c2491a6a5364fa140f8f150cdc0d5fc3cbe11f7e34 status=arm64_complete_bound indexed_start=True
0x06A7C190: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A7C194: f65701a9  stp x22, x21, [sp, #0x10]
0x06A7C198: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A7C19C: 769500d0  adrp x22, #0x7d2a000
0x06A7C1A0: b56500b0  adrp x21, #0x7731000
0x06A7C1A4: c8ba5c39  ldrb w8, [x22, #0x72e]
0x06A7C1A8: b56a44f9  ldr x21, [x21, #0x8d0]
0x06A7C1AC: f30301aa  mov x19, x1
0x06A7C1B0: f40300aa  mov x20, x0
0x06A7C1B4: 28010037  tbnz w8, #0, #0x6a7c1d8
0x06A7C1B8: a06500b0  adrp x0, #0x7731000
0x06A7C1BC: 006844f9  ldr x0, [x0, #0x8d0]
0x06A7C1C0: 16121c97  bl #0x3180a18
0x06A7C1C4: a06500b0  adrp x0, #0x7731000
0x06A7C1C8: 006c44f9  ldr x0, [x0, #0x8d8]
0x06A7C1CC: 13121c97  bl #0x3180a18
0x06A7C1D0: 28008052  movz w8, #0x1
0x06A7C1D4: c8ba1c39  strb w8, [x22, #0x72e]
0x06A7C1D8: 802e40f9  ldr x0, [x20, #0x58]
0x06A7C1DC: a10240f9  ldr x1, [x21]
0x06A7C1E0: 7eb04597  bl #0x3be83d8
0x06A7C1E4: 40050037  tbnz w0, #0, #0x6a7c28c
0x06A7C1E8: 952e40f9  ldr x21, [x20, #0x58]
0x06A7C1EC: d50500b4  cbz x21, #0x6a7c2a4
0x06A7C1F0: a81a40b9  ldr w8, [x21, #0x18]
0x06A7C1F4: 1f050071  cmp w8, #1
0x06A7C1F8: ab040054  b.lt #0x6a7c28c
0x06A7C1FC: b76500b0  adrp x23, #0x7731000
0x06A7C200: f76e44f9  ldr x23, [x23, #0x8d8]
0x06A7C204: f6031f2a  mov w22, wzr
0x06A7C208: df02086b  cmp w22, w8
0x06A7C20C: a2040054  b.hs #0x6a7c2a0
0x06A7C210: a8ce368b  add x8, x21, w22, sxtw #3
0x06A7C214: 141140f9  ldr x20, [x8, #0x20]
0x06A7C218: 740400b4  cbz x20, #0x6a7c2a4
0x06A7C21C: 880240f9  ldr x8, [x20]
0x06A7C220: e10240f9  ldr x1, [x23]
0x06A7C224: 095d4279  ldrh w9, [x8, #0x12e]
0x06A7C228: 290100b4  cbz x9, #0x6a7c24c
0x06A7C22C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7C230: 4a210091  add x10, x10, #8
0x06A7C234: 4b815ff8  ldur x11, [x10, #-8]
0x06A7C238: 7f0101eb  cmp x11, x1
0x06A7C23C: 00010054  b.eq #0x6a7c25c
0x06A7C240: 290500f1  subs x9, x9, #1
0x06A7C244: 4a410091  add x10, x10, #0x10
0x06A7C248: 61ffff54  b.ne #0x6a7c234
0x06A7C24C: e00314aa  mov x0, x20
0x06A7C250: e2031f2a  mov w2, wzr
0x06A7C254: 2f6a1b97  bl #0x3156b10
0x06A7C258: 04000014  b #0x6a7c268
0x06A7C25C: 490180b9  ldrsw x9, [x10]
0x06A7C260: 0811098b  add x8, x8, x9, lsl #4
0x06A7C264: 00e10491  add x0, x8, #0x138
0x06A7C268: 080840a9  ldp x8, x2, [x0]
0x06A7C26C: e00314aa  mov x0, x20
0x06A7C270: e10313aa  mov x1, x19
0x06A7C274: 00013fd6  blr x8
0x06A7C278: a81a40b9  ldr w8, [x21, #0x18]
0x06A7C27C: d6060011  add w22, w22, #1
0x06A7C280: f30300aa  mov x19, x0
0x06A7C284: df02086b  cmp w22, w8
0x06A7C288: 0bfcff54  b.lt #0x6a7c208
0x06A7C28C: e00313aa  mov x0, x19
0x06A7C290: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A7C294: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A7C298: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A7C29C: c0035fd6  ret
0x06A7C2A0: 85121c97  bl #0x3180cb4
0x06A7C2A4: 82121c97  bl #0x3180cac

; RVA 0x6A7C2A8 | public void .ctor() { }
; bytes=72 sha256=850cfa946d07bdfdcce91e3545aa96094214de7a4d8dd3ae78cad4845cf9e90e status=arm64_complete_bound indexed_start=True
0x06A7C2A8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A7C2AC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7C2B0: 749500d0  adrp x20, #0x7d2a000
0x06A7C2B4: b56400b0  adrp x21, #0x7711000
0x06A7C2B8: 88be5c39  ldrb w8, [x20, #0x72f]
0x06A7C2BC: b53244f9  ldr x21, [x21, #0x860]
0x06A7C2C0: f30300aa  mov x19, x0
0x06A7C2C4: c8000037  tbnz w8, #0, #0x6a7c2dc
0x06A7C2C8: a06400b0  adrp x0, #0x7711000
0x06A7C2CC: 003044f9  ldr x0, [x0, #0x860]
0x06A7C2D0: d2111c97  bl #0x3180a18
0x06A7C2D4: 28008052  movz w8, #0x1
0x06A7C2D8: 88be1c39  strb w8, [x20, #0x72f]
0x06A7C2DC: a10240f9  ldr x1, [x21]
0x06A7C2E0: e00313aa  mov x0, x19
0x06A7C2E4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7C2E8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A7C2EC: 7a6a8617  b #0x4c16cd4

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D20514 | Merger.MergeBoard.Services.MergeBoardOperationTrackingService$$CreatePayload<object>
; native signature: Framework_Core_Services_Backend_Data_Payload_OperationNotificationData_o* Merger_MergeBoard_Services_MergeBoardOperationTrackingService__CreatePayload_object_ (Merger_MergeBoard_Services_MergeBoardOperationTrackingService_o* __this, System_String_o* operationType, System_Collections_Generic_List_TNotificationData__o* itemNotificationData, Framework_Core_Services_Backend_Data_Payload_ExtraData_o* extraData, const MethodInfo_3D20514* method);
; bytes=1812 sha256=980077ec5b226a4f5e711f5da8c6222482ca29823b05dd880284eb08d6864eda status=arm64_complete_bound indexed_start=True
0x03D20514: ff8302d1  sub sp, sp, #0xa0
0x03D20518: fe2300f9  str x30, [sp, #0x40]
0x03D2051C: fc6f05a9  stp x28, x27, [sp, #0x50]
0x03D20520: fa6706a9  stp x26, x25, [sp, #0x60]
0x03D20524: f85f07a9  stp x24, x23, [sp, #0x70]
0x03D20528: f65708a9  stp x22, x21, [sp, #0x80]
0x03D2052C: f44f09a9  stp x20, x19, [sp, #0x90]
0x03D20530: 881c40f9  ldr x8, [x4, #0x38]
0x03D20534: f30304aa  mov x19, x4
0x03D20538: f60302aa  mov x22, x2
0x03D2053C: f70301aa  mov x23, x1
0x03D20540: f40300aa  mov x20, x0
0x03D20544: a80600b5  cbnz x8, #0x3d20618
0x03D20548: c0ca01d0  adrp x0, #0x767a000
0x03D2054C: 00c042f9  ldr x0, [x0, #0x580]
0x03D20550: 3281d197  bl #0x3180a18
0x03D20554: 60ca01f0  adrp x0, #0x766f000
0x03D20558: 00f844f9  ldr x0, [x0, #0x9f0]
0x03D2055C: 2f81d197  bl #0x3180a18
0x03D20560: 60c901f0  adrp x0, #0x764f000
0x03D20564: 00d040f9  ldr x0, [x0, #0x1a0]
0x03D20568: 2c81d197  bl #0x3180a18
0x03D2056C: c0ca01d0  adrp x0, #0x767a000
0x03D20570: 00c442f9  ldr x0, [x0, #0x588]
0x03D20574: 2981d197  bl #0x3180a18
0x03D20578: c0ca01d0  adrp x0, #0x767a000
0x03D2057C: 00c842f9  ldr x0, [x0, #0x590]
0x03D20580: 2681d197  bl #0x3180a18
0x03D20584: 80ca01f0  adrp x0, #0x7673000
0x03D20588: 004443f9  ldr x0, [x0, #0x688]
0x03D2058C: 2381d197  bl #0x3180a18
0x03D20590: c0ca01d0  adrp x0, #0x767a000
0x03D20594: 00cc42f9  ldr x0, [x0, #0x598]
0x03D20598: 2081d197  bl #0x3180a18
0x03D2059C: c0ca01d0  adrp x0, #0x767a000
0x03D205A0: 00d042f9  ldr x0, [x0, #0x5a0]
0x03D205A4: 1d81d197  bl #0x3180a18
0x03D205A8: c0ca01d0  adrp x0, #0x767a000
0x03D205AC: 00d442f9  ldr x0, [x0, #0x5a8]
0x03D205B0: 1a81d197  bl #0x3180a18
0x03D205B4: c0ca01d0  adrp x0, #0x767a000
0x03D205B8: 00d842f9  ldr x0, [x0, #0x5b0]
0x03D205BC: 1781d197  bl #0x3180a18
0x03D205C0: c0ca01d0  adrp x0, #0x767a000
0x03D205C4: 00dc42f9  ldr x0, [x0, #0x5b8]
0x03D205C8: 1481d197  bl #0x3180a18
0x03D205CC: c0ca01d0  adrp x0, #0x767a000
0x03D205D0: 00e042f9  ldr x0, [x0, #0x5c0]
0x03D205D4: 1181d197  bl #0x3180a18
0x03D205D8: c0ca01d0  adrp x0, #0x767a000
0x03D205DC: 00e442f9  ldr x0, [x0, #0x5c8]
0x03D205E0: 0e81d197  bl #0x3180a18
0x03D205E4: 80ca01f0  adrp x0, #0x7673000
0x03D205E8: 005c40f9  ldr x0, [x0, #0xb8]
0x03D205EC: 0b81d197  bl #0x3180a18
0x03D205F0: c0ca01d0  adrp x0, #0x767a000
0x03D205F4: 00e842f9  ldr x0, [x0, #0x5d0]
0x03D205F8: 0881d197  bl #0x3180a18
0x03D205FC: c0ca01d0  adrp x0, #0x767a000
0x03D20600: 00ec42f9  ldr x0, [x0, #0x5d8]
0x03D20604: 0581d197  bl #0x3180a18
0x03D20608: 681e40f9  ldr x8, [x19, #0x38]
0x03D2060C: 680000b5  cbnz x8, #0x3d20618
0x03D20610: e00313aa  mov x0, x19
0x03D20614: 99d8d097  bl #0x3156878
0x03D20618: ff2700f9  str xzr, [sp, #0x48]
0x03D2061C: c8ca01d0  adrp x8, #0x767a000
0x03D20620: 08d942f9  ldr x8, [x8, #0x5b0]
0x03D20624: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x03D20628: ff1b00f9  str xzr, [sp, #0x30]
0x03D2062C: 000140f9  ldr x0, [x8]
0x03D20630: 9c81d197  bl #0x3180ca0
0x03D20634: e1031faa  mov x1, xzr
0x03D20638: f50300aa  mov x21, x0
0x03D2063C: fc41b094  bl #0x6930e2c
0x03D20640: 752b00b4  cbz x21, #0x3d20bac
0x03D20644: e00315aa  mov x0, x21
0x03D20648: 170c01f8  str x23, [x0, #0x10]!
0x03D2064C: e10317aa  mov x1, x23
0x03D20650: dd80d197  bl #0x31809c4
0x03D20654: c8ca01d0  adrp x8, #0x767a000
0x03D20658: 08d542f9  ldr x8, [x8, #0x5a8]
0x03D2065C: 000140f9  ldr x0, [x8]
0x03D20660: 9081d197  bl #0x3180ca0
0x03D20664: c8ca01d0  adrp x8, #0x767a000
0x03D20668: 08d142f9  ldr x8, [x8, #0x5a0]
0x03D2066C: f80300aa  mov x24, x0
0x03D20670: 010140f9  ldr x1, [x8]
0x03D20674: 718d0c94  bl #0x4043c38
0x03D20678: f70315aa  mov x23, x21
0x03D2067C: f88e01f8  str x24, [x23, #0x18]!
0x03D20680: e00317aa  mov x0, x23
0x03D20684: e10318aa  mov x1, x24
0x03D20688: cf80d197  bl #0x31809c4
0x03D2068C: c8ca01d0  adrp x8, #0x767a000
0x03D20690: 08e142f9  ldr x8, [x8, #0x5c0]
0x03D20694: 21008052  movz w1, #0x1
0x03D20698: 000140f9  ldr x0, [x8]
0x03D2069C: 1881d197  bl #0x3180afc
0x03D206A0: c8ca01d0  adrp x8, #0x767a000
0x03D206A4: 08e542f9  ldr x8, [x8, #0x5c8]
0x03D206A8: f80300aa  mov x24, x0
0x03D206AC: 080140f9  ldr x8, [x8]
0x03D206B0: e00308aa  mov x0, x8
0x03D206B4: 7b81d197  bl #0x3180ca0
0x03D206B8: e1031faa  mov x1, xzr
0x03D206BC: f90300aa  mov x25, x0
0x03D206C0: 1742b094  bl #0x6930f1c
0x03D206C4: 592700b4  cbz x25, #0x3d20bac
0x03D206C8: c8ca01d0  adrp x8, #0x767a000
0x03D206CC: 08ed42f9  ldr x8, [x8, #0x5d8]
0x03D206D0: e00319aa  mov x0, x25
0x03D206D4: 010140f9  ldr x1, [x8]
0x03D206D8: 010c01f8  str x1, [x0, #0x10]!
0x03D206DC: ba80d197  bl #0x31809c4
0x03D206E0: 9bca01f0  adrp x27, #0x7673000
0x03D206E4: 7b5f40f9  ldr x27, [x27, #0xb8]
0x03D206E8: 9a1e40f9  ldr x26, [x20, #0x38]
0x03D206EC: 600340f9  ldr x0, [x27]
0x03D206F0: 08e040b9  ldr w8, [x0, #0xe0]
0x03D206F4: 68000035  cbnz w8, #0x3d20700
0x03D206F8: 2581d197  bl #0x3180b8c
0x03D206FC: 600340f9  ldr x0, [x27]
0x03D20700: 7a2500b4  cbz x26, #0x3d20bac
0x03D20704: 8aca01f0  adrp x10, #0x7673000
0x03D20708: 095c40f9  ldr x9, [x0, #0xb8]
0x03D2070C: 480340f9  ldr x8, [x26]
0x03D20710: 4a4543f9  ldr x10, [x10, #0x688]
0x03D20714: 3b5940f9  ldr x27, [x9, #0xb0]
0x03D20718: 095d4279  ldrh w9, [x8, #0x12e]
0x03D2071C: 410140f9  ldr x1, [x10]
0x03D20720: 290100b4  cbz x9, #0x3d20744
0x03D20724: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D20728: 4a210091  add x10, x10, #8
0x03D2072C: 4b815ff8  ldur x11, [x10, #-8]
0x03D20730: 7f0101eb  cmp x11, x1
0x03D20734: 00010054  b.eq #0x3d20754
0x03D20738: 290500f1  subs x9, x9, #1
0x03D2073C: 4a410091  add x10, x10, #0x10
0x03D20740: 61ffff54  b.ne #0x3d2072c
0x03D20744: 22008052  movz w2, #0x1
0x03D20748: e0031aaa  mov x0, x26
0x03D2074C: f1d8d097  bl #0x3156b10
0x03D20750: 05000014  b #0x3d20764
0x03D20754: 490140b9  ldr w9, [x10]
0x03D20758: 29050011  add w9, w9, #1
0x03D2075C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D20760: 00e10491  add x0, x8, #0x138
0x03D20764: 080840a9  ldp x8, x2, [x0]
0x03D20768: e0031aaa  mov x0, x26
0x03D2076C: e1031baa  mov x1, x27
0x03D20770: 00013fd6  blr x8
0x03D20774: c02100b4  cbz x0, #0x3d20bac
0x03D20778: 082040b9  ldr w8, [x0, #0x20]
0x03D2077C: 281b00b9  str w8, [x25, #0x18]
0x03D20780: 782100b4  cbz x24, #0x3d20bac
0x03D20784: 080340f9  ldr x8, [x24]
0x03D20788: e00319aa  mov x0, x25
0x03D2078C: 012140f9  ldr x1, [x8, #0x40]
0x03D20790: 0081d197  bl #0x3180b90
0x03D20794: e02000b4  cbz x0, #0x3d20bb0
0x03D20798: 081b40b9  ldr w8, [x24, #0x18]
0x03D2079C: 08210034  cbz w8, #0x3d20bbc
0x03D207A0: e00318aa  mov x0, x24
0x03D207A4: 190c02f8  str x25, [x0, #0x20]!
0x03D207A8: e10319aa  mov x1, x25
0x03D207AC: 8680d197  bl #0x31809c4
0x03D207B0: e00315aa  mov x0, x21
0x03D207B4: 180c02f8  str x24, [x0, #0x20]!
0x03D207B8: e10318aa  mov x1, x24
0x03D207BC: 8280d197  bl #0x31809c4
0x03D207C0: c8ca01d0  adrp x8, #0x767a000
0x03D207C4: 08e942f9  ldr x8, [x8, #0x5d0]
0x03D207C8: 000140f9  ldr x0, [x8]
0x03D207CC: 08e040b9  ldr w8, [x0, #0xe0]
0x03D207D0: 48000035  cbnz w8, #0x3d207d8
0x03D207D4: ee80d197  bl #0x3180b8c
0x03D207D8: e0031faa  mov x0, xzr
0x03D207DC: e3c3ac94  bl #0x6851768
0x03D207E0: 68c901f0  adrp x8, #0x764f000
0x03D207E4: 08d140f9  ldr x8, [x8, #0x1a0]
0x03D207E8: e02700f9  str x0, [sp, #0x48]
0x03D207EC: 080140f9  ldr x8, [x8]
0x03D207F0: 09e140b9  ldr w9, [x8, #0xe0]
0x03D207F4: 69000035  cbnz w9, #0x3d20800
0x03D207F8: e00308aa  mov x0, x8
0x03D207FC: e480d197  bl #0x3180b8c
0x03D20800: e0031faa  mov x0, xzr
0x03D20804: 85a66494  bl #0x564a218
0x03D20808: e10300aa  mov x1, x0
0x03D2080C: e0230191  add x0, sp, #0x48
0x03D20810: e2031faa  mov x2, xzr
0x03D20814: dbd16594  bl #0x5694f80
0x03D20818: e10300aa  mov x1, x0
0x03D2081C: e00315aa  mov x0, x21
0x03D20820: 018c05f8  str x1, [x0, #0x58]!
0x03D20824: 6880d197  bl #0x31809c4
0x03D20828: 982a40f9  ldr x24, [x20, #0x50]
0x03D2082C: 181c00b4  cbz x24, #0x3d20bac
0x03D20830: daca01d0  adrp x26, #0x767a000
0x03D20834: 080340f9  ldr x8, [x24]
0x03D20838: 5acb42f9  ldr x26, [x26, #0x590]
0x03D2083C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D20840: 410340f9  ldr x1, [x26]
0x03D20844: 290100b4  cbz x9, #0x3d20868
0x03D20848: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D2084C: 4a210091  add x10, x10, #8
0x03D20850: 4b815ff8  ldur x11, [x10, #-8]
0x03D20854: 7f0101eb  cmp x11, x1
0x03D20858: 00010054  b.eq #0x3d20878
0x03D2085C: 290500f1  subs x9, x9, #1
0x03D20860: 4a410091  add x10, x10, #0x10
0x03D20864: 61ffff54  b.ne #0x3d20850
0x03D20868: 42008052  movz w2, #0x2
0x03D2086C: e00318aa  mov x0, x24
0x03D20870: a8d8d097  bl #0x3156b10
0x03D20874: 05000014  b #0x3d20888
0x03D20878: 490140b9  ldr w9, [x10]
0x03D2087C: 29090011  add w9, w9, #2
0x03D20880: 08d1298b  add x8, x8, w9, sxtw #4
0x03D20884: 00e10491  add x0, x8, #0x138
0x03D20888: 080440a9  ldp x8, x1, [x0]
0x03D2088C: e00318aa  mov x0, x24
0x03D20890: 00013fd6  blr x8
0x03D20894: a04a00b9  str w0, [x21, #0x48]
0x03D20898: 982a40f9  ldr x24, [x20, #0x50]
0x03D2089C: 981800b4  cbz x24, #0x3d20bac
0x03D208A0: 080340f9  ldr x8, [x24]
0x03D208A4: 410340f9  ldr x1, [x26]
0x03D208A8: 095d4279  ldrh w9, [x8, #0x12e]
0x03D208AC: 290100b4  cbz x9, #0x3d208d0
0x03D208B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D208B4: 4a210091  add x10, x10, #8
0x03D208B8: 4b815ff8  ldur x11, [x10, #-8]
0x03D208BC: 7f0101eb  cmp x11, x1
0x03D208C0: 00010054  b.eq #0x3d208e0
0x03D208C4: 290500f1  subs x9, x9, #1
0x03D208C8: 4a410091  add x10, x10, #0x10
0x03D208CC: 61ffff54  b.ne #0x3d208b8
0x03D208D0: 22008052  movz w2, #0x1
0x03D208D4: e00318aa  mov x0, x24
0x03D208D8: 8ed8d097  bl #0x3156b10
0x03D208DC: 05000014  b #0x3d208f0
0x03D208E0: 490140b9  ldr w9, [x10]
0x03D208E4: 29050011  add w9, w9, #1
0x03D208E8: 08d1298b  add x8, x8, w9, sxtw #4
0x03D208EC: 00e10491  add x0, x8, #0x138
0x03D208F0: 080440a9  ldp x8, x1, [x0]
0x03D208F4: e00318aa  mov x0, x24
0x03D208F8: 00013fd6  blr x8
0x03D208FC: 08000012  and w8, w0, #1
0x03D20900: a8020139  strb w8, [x21, #0x40]
0x03D20904: c8ca01d0  adrp x8, #0x767a000
0x03D20908: 08dd42f9  ldr x8, [x8, #0x5b8]
0x03D2090C: 000140f9  ldr x0, [x8]
0x03D20910: e480d197  bl #0x3180ca0
0x03D20914: e1031faa  mov x1, xzr
0x03D20918: f80300aa  mov x24, x0
0x03D2091C: 53839294  bl #0x61c1668
0x03D20920: 992a40f9  ldr x25, [x20, #0x50]
0x03D20924: 591400b4  cbz x25, #0x3d20bac
0x03D20928: 280340f9  ldr x8, [x25]
0x03D2092C: 410340f9  ldr x1, [x26]
0x03D20930: 095d4279  ldrh w9, [x8, #0x12e]
0x03D20934: 290100b4  cbz x9, #0x3d20958
0x03D20938: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D2093C: 4a210091  add x10, x10, #8
0x03D20940: 4b815ff8  ldur x11, [x10, #-8]
0x03D20944: 7f0101eb  cmp x11, x1
0x03D20948: 00010054  b.eq #0x3d20968
0x03D2094C: 290500f1  subs x9, x9, #1
0x03D20950: 4a410091  add x10, x10, #0x10
0x03D20954: 61ffff54  b.ne #0x3d20940
0x03D20958: 62008052  movz w2, #0x3
0x03D2095C: e00319aa  mov x0, x25
0x03D20960: 6cd8d097  bl #0x3156b10
0x03D20964: 05000014  b #0x3d20978
0x03D20968: 490140b9  ldr w9, [x10]
0x03D2096C: 290d0011  add w9, w9, #3
0x03D20970: 08d1298b  add x8, x8, w9, sxtw #4
0x03D20974: 00e10491  add x0, x8, #0x138
0x03D20978: 080440a9  ldp x8, x1, [x0]
0x03D2097C: e00319aa  mov x0, x25
0x03D20980: 00013fd6  blr x8
0x03D20984: 581100b4  cbz x24, #0x3d20bac
0x03D20988: 001300b9  str w0, [x24, #0x10]
0x03D2098C: 992a40f9  ldr x25, [x20, #0x50]
0x03D20990: f91000b4  cbz x25, #0x3d20bac
0x03D20994: 280340f9  ldr x8, [x25]
0x03D20998: 410340f9  ldr x1, [x26]
0x03D2099C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D209A0: 290100b4  cbz x9, #0x3d209c4
0x03D209A4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D209A8: 4a210091  add x10, x10, #8
0x03D209AC: 4b815ff8  ldur x11, [x10, #-8]
0x03D209B0: 7f0101eb  cmp x11, x1
0x03D209B4: 00010054  b.eq #0x3d209d4
0x03D209B8: 290500f1  subs x9, x9, #1
0x03D209BC: 4a410091  add x10, x10, #0x10
0x03D209C0: 61ffff54  b.ne #0x3d209ac
0x03D209C4: 42008052  movz w2, #0x2
0x03D209C8: e00319aa  mov x0, x25
0x03D209CC: 51d8d097  bl #0x3156b10
0x03D209D0: 05000014  b #0x3d209e4
0x03D209D4: 490140b9  ldr w9, [x10]
0x03D209D8: 29090011  add w9, w9, #2
0x03D209DC: 08d1298b  add x8, x8, w9, sxtw #4
0x03D209E0: 00e10491  add x0, x8, #0x138
0x03D209E4: 080440a9  ldp x8, x1, [x0]
0x03D209E8: e00319aa  mov x0, x25
0x03D209EC: 00013fd6  blr x8
0x03D209F0: 001700b9  str w0, [x24, #0x14]
0x03D209F4: e00315aa  mov x0, x21
0x03D209F8: 180c05f8  str x24, [x0, #0x50]!
0x03D209FC: e10318aa  mov x1, x24
0x03D20A00: f17fd197  bl #0x31809c4
0x03D20A04: 982640f9  ldr x24, [x20, #0x48]
0x03D20A08: 380d00b4  cbz x24, #0x3d20bac
0x03D20A0C: caca01d0  adrp x10, #0x767a000
0x03D20A10: 080340f9  ldr x8, [x24]
0x03D20A14: 4ac542f9  ldr x10, [x10, #0x588]
0x03D20A18: 095d4279  ldrh w9, [x8, #0x12e]
0x03D20A1C: 410140f9  ldr x1, [x10]
0x03D20A20: 290100b4  cbz x9, #0x3d20a44
0x03D20A24: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D20A28: 4a210091  add x10, x10, #8
0x03D20A2C: 4b815ff8  ldur x11, [x10, #-8]
0x03D20A30: 7f0101eb  cmp x11, x1
0x03D20A34: 00010054  b.eq #0x3d20a54
0x03D20A38: 290500f1  subs x9, x9, #1
0x03D20A3C: 4a410091  add x10, x10, #0x10
0x03D20A40: 61ffff54  b.ne #0x3d20a2c
0x03D20A44: e00318aa  mov x0, x24
0x03D20A48: e2031f2a  mov w2, wzr
0x03D20A4C: 31d8d097  bl #0x3156b10
0x03D20A50: 04000014  b #0x3d20a60
0x03D20A54: 490180b9  ldrsw x9, [x10]
0x03D20A58: 0811098b  add x8, x8, x9, lsl #4
0x03D20A5C: 00e10491  add x0, x8, #0x138
0x03D20A60: 080440a9  ldp x8, x1, [x0]
0x03D20A64: e00318aa  mov x0, x24
0x03D20A68: 00013fd6  blr x8
0x03D20A6C: e10300aa  mov x1, x0
0x03D20A70: e00315aa  mov x0, x21
0x03D20A74: 018c03f8  str x1, [x0, #0x38]!
0x03D20A78: d37fd197  bl #0x31809c4
0x03D20A7C: 960900b4  cbz x22, #0x3d20bac
0x03D20A80: 681e40f9  ldr x8, [x19, #0x38]
0x03D20A84: e00316aa  mov x0, x22
0x03D20A88: 010540f9  ldr x1, [x8, #8]
0x03D20A8C: e8230091  add x8, sp, #8
0x03D20A90: 76910c94  bl #0x4045068
0x03D20A94: e083c03c  ldur q0, [sp, #8]
0x03D20A98: e80f40f9  ldr x8, [sp, #0x18]
0x03D20A9C: dbca01d0  adrp x27, #0x767a000
0x03D20AA0: 7bc342f9  ldr x27, [x27, #0x580]
0x03D20AA4: e00b803d  str q0, [sp, #0x20]
0x03D20AA8: e81b00f9  str x8, [sp, #0x30]
0x03D20AAC: dcca01d0  adrp x28, #0x767a000
0x03D20AB0: 9ccf42f9  ldr x28, [x28, #0x598]
0x03D20AB4: 681e40f9  ldr x8, [x19, #0x38]
0x03D20AB8: 011940f9  ldr x1, [x8, #0x30]
0x03D20ABC: e0830091  add x0, sp, #0x20
0x03D20AC0: bdd34b94  bl #0x50159b4
0x03D20AC4: a0040036  tbz w0, #0, #0x3d20b58
0x03D20AC8: f91b40f9  ldr x25, [sp, #0x30]
0x03D20ACC: d90600b4  cbz x25, #0x3d20ba4
0x03D20AD0: f60240f9  ldr x22, [x23]
0x03D20AD4: 3a1340f9  ldr x26, [x25, #0x20]
0x03D20AD8: 600340f9  ldr x0, [x27]
0x03D20ADC: 7180d197  bl #0x3180ca0
0x03D20AE0: f80300aa  mov x24, x0
0x03D20AE4: e10319aa  mov x1, x25
0x03D20AE8: e2031aaa  mov x2, x26
0x03D20AEC: e3031faa  mov x3, xzr
0x03D20AF0: 9e40b094  bl #0x6930d68
0x03D20AF4: b60500b4  cbz x22, #0x3d20ba8
0x03D20AF8: ca1e40b9  ldr w10, [x22, #0x1c]
0x03D20AFC: c80a40f9  ldr x8, [x22, #0x10]
0x03D20B00: 890340f9  ldr x9, [x28]
0x03D20B04: 4a050011  add w10, w10, #1
0x03D20B08: ca1e00b9  str w10, [x22, #0x1c]
0x03D20B0C: a80400b4  cbz x8, #0x3d20ba0
0x03D20B10: ca1a80b9  ldrsw x10, [x22, #0x18]
0x03D20B14: 0b1940b9  ldr w11, [x8, #0x18]
0x03D20B18: 5f010b6b  cmp w10, w11
0x03D20B1C: 02010054  b.hs #0x3d20b3c
0x03D20B20: 49050011  add w9, w10, #1
0x03D20B24: 000d0a8b  add x0, x8, x10, lsl #3
0x03D20B28: c91a00b9  str w9, [x22, #0x18]
0x03D20B2C: 180c02f8  str x24, [x0, #0x20]!
0x03D20B30: e10318aa  mov x1, x24
0x03D20B34: a47fd197  bl #0x31809c4
0x03D20B38: dfffff17  b #0x3d20ab4
0x03D20B3C: 281140f9  ldr x8, [x9, #0x20]
0x03D20B40: 086140f9  ldr x8, [x8, #0xc0]
0x03D20B44: 023940f9  ldr x2, [x8, #0x70]
0x03D20B48: e00316aa  mov x0, x22
0x03D20B4C: e10318aa  mov x1, x24
0x03D20B50: 478e0c94  bl #0x404446c
0x03D20B54: d8ffff17  b #0x3d20ab4
0x03D20B58: f7031faa  mov x23, xzr
0x03D20B5C: 681e40f9  ldr x8, [x19, #0x38]
0x03D20B60: e0830091  add x0, sp, #0x20
0x03D20B64: 011d40f9  ldr x1, [x8, #0x38]
0x03D20B68: 92d34b94  bl #0x50159b0
0x03D20B6C: b70200b5  cbnz x23, #0x3d20bc0
0x03D20B70: e00314aa  mov x0, x20
0x03D20B74: e10315aa  mov x1, x21
0x03D20B78: e2031faa  mov x2, xzr
0x03D20B7C: 856db594  bl #0x6a7c190
0x03D20B80: f44f49a9  ldp x20, x19, [sp, #0x90]
0x03D20B84: f65748a9  ldp x22, x21, [sp, #0x80]
0x03D20B88: f85f47a9  ldp x24, x23, [sp, #0x70]
0x03D20B8C: fa6746a9  ldp x26, x25, [sp, #0x60]
0x03D20B90: fc6f45a9  ldp x28, x27, [sp, #0x50]
0x03D20B94: fe2340f9  ldr x30, [sp, #0x40]
0x03D20B98: ff830291  add sp, sp, #0xa0
0x03D20B9C: c0035fd6  ret
0x03D20BA0: 4380d197  bl #0x3180cac
0x03D20BA4: 4280d197  bl #0x3180cac
0x03D20BA8: 4180d197  bl #0x3180cac
0x03D20BAC: 4080d197  bl #0x3180cac
0x03D20BB0: 4880d197  bl #0x3180cd0
0x03D20BB4: e1031faa  mov x1, xzr
0x03D20BB8: f17fd197  bl #0x3180b7c
0x03D20BBC: 3e80d197  bl #0x3180cb4
0x03D20BC0: e00317aa  mov x0, x23
0x03D20BC4: 3880d197  bl #0x3180ca4
0x03D20BC8: 03000014  b #0x3d20bd4
0x03D20BCC: 02000014  b #0x3d20bd4
0x03D20BD0: 01000014  b #0x3d20bd4
0x03D20BD4: f60300aa  mov x22, x0
0x03D20BD8: 3f040071  cmp w1, #1
0x03D20BDC: c1000054  b.ne #0x3d20bf4
0x03D20BE0: e00316aa  mov x0, x22
0x03D20BE4: 4bb7d294  bl #0x71ce910
0x03D20BE8: 170040f9  ldr x23, [x0]
0x03D20BEC: 4db7d294  bl #0x71ce920
0x03D20BF0: dbffff17  b #0x3d20b5c
0x03D20BF4: f7031faa  mov x23, xzr
0x03D20BF8: 02000014  b #0x3d20c00
0x03D20BFC: f60300aa  mov x22, x0
0x03D20C00: 681e40f9  ldr x8, [x19, #0x38]
0x03D20C04: 011d40f9  ldr x1, [x8, #0x38]
0x03D20C08: e0830091  add x0, sp, #0x20
0x03D20C0C: 69d34b94  bl #0x50159b0
0x03D20C10: 770000b5  cbnz x23, #0x3d20c1c
0x03D20C14: e00316aa  mov x0, x22
0x03D20C18: 5013d597  bl #0x3265958
0x03D20C1C: e00317aa  mov x0, x23
0x03D20C20: 2180d197  bl #0x3180ca4
0x03D20C24: 3ca2c397  bl #0x2e09514

