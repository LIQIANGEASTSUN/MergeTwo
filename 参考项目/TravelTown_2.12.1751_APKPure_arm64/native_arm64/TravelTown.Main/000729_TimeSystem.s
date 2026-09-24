; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 729 MergeEngine.ECS.Systems.Timing.TimeSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x63B75A0 | private TimeComponent get_BoardTimeComponent() { }
; bytes=148 sha256=94bfff0401e8ffe37e69097c4d58d7914c1aa2dcd91771ecabcc49c8ae035340 status=arm64_complete_bound indexed_start=True
0x063B75A0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x063B75A4: f44f01a9  stp x20, x19, [sp, #0x10]
0x063B75A8: 73cb00f0  adrp x19, #0x7d26000
0x063B75AC: 68f64739  ldrb w8, [x19, #0x1fd]
0x063B75B0: f40300aa  mov x20, x0
0x063B75B4: 28010037  tbnz w8, #0, #0x63b75d8
0x063B75B8: c09900d0  adrp x0, #0x76f1000
0x063B75BC: 005c45f9  ldr x0, [x0, #0xab8]
0x063B75C0: 16253797  bl #0x3180a18
0x063B75C4: c09900d0  adrp x0, #0x76f1000
0x063B75C8: 006045f9  ldr x0, [x0, #0xac0]
0x063B75CC: 13253797  bl #0x3180a18
0x063B75D0: 28008052  movz w8, #0x1
0x063B75D4: 68f60739  strb w8, [x19, #0x1fd]
0x063B75D8: f30314aa  mov x19, x20
0x063B75DC: 758e44f8  ldr x21, [x19, #0x48]!
0x063B75E0: 150200b5  cbnz x21, #0x63b7620
0x063B75E4: c89900d0  adrp x8, #0x76f1000
0x063B75E8: 086145f9  ldr x8, [x8, #0xac0]
0x063B75EC: e00314aa  mov x0, x20
0x063B75F0: 010140f9  ldr x1, [x8]
0x063B75F4: c2fc6797  bl #0x3db68fc
0x063B75F8: c00100b4  cbz x0, #0x63b7630
0x063B75FC: c89900d0  adrp x8, #0x76f1000
0x063B7600: 085d45f9  ldr x8, [x8, #0xab8]
0x063B7604: 010140f9  ldr x1, [x8]
0x063B7608: 85d86097  bl #0x3bed81c
0x063B760C: f50300aa  mov x21, x0
0x063B7610: 600200f9  str x0, [x19]
0x063B7614: e00313aa  mov x0, x19
0x063B7618: e10315aa  mov x1, x21
0x063B761C: ea243797  bl #0x31809c4
0x063B7620: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063B7624: e00315aa  mov x0, x21
0x063B7628: fe57c2a8  ldp x30, x21, [sp], #0x20
0x063B762C: c0035fd6  ret
0x063B7630: 9f253797  bl #0x3180cac

; RVA 0x63B7634 | private DateTime get_ServerDateTime() { }
; bytes=164 sha256=0bad18df4779ffb19eada3291f1402b1c75b410e10b603c062032beb35a58bfd status=arm64_complete_bound indexed_start=True
0x063B7634: fe0f1ef8  str x30, [sp, #-0x20]!
0x063B7638: f44f01a9  stp x20, x19, [sp, #0x10]
0x063B763C: 74cb00f0  adrp x20, #0x7d26000
0x063B7640: 88fa4739  ldrb w8, [x20, #0x1fe]
0x063B7644: f30300aa  mov x19, x0
0x063B7648: c8000037  tbnz w8, #0, #0x63b7660
0x063B764C: e0950090  adrp x0, #0x7673000
0x063B7650: 006c46f9  ldr x0, [x0, #0xcd8]
0x063B7654: f1243797  bl #0x3180a18
0x063B7658: 28008052  movz w8, #0x1
0x063B765C: 88fa0739  strb w8, [x20, #0x1fe]
0x063B7660: 732240f9  ldr x19, [x19, #0x40]
0x063B7664: 930300b4  cbz x19, #0x63b76d4
0x063B7668: ea950090  adrp x10, #0x7673000
0x063B766C: 680240f9  ldr x8, [x19]
0x063B7670: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x063B7674: 095d4279  ldrh w9, [x8, #0x12e]
0x063B7678: 410140f9  ldr x1, [x10]
0x063B767C: 290100b4  cbz x9, #0x63b76a0
0x063B7680: 0a5940f9  ldr x10, [x8, #0xb0]
0x063B7684: 4a210091  add x10, x10, #8
0x063B7688: 4b815ff8  ldur x11, [x10, #-8]
0x063B768C: 7f0101eb  cmp x11, x1
0x063B7690: 00010054  b.eq #0x63b76b0
0x063B7694: 290500f1  subs x9, x9, #1
0x063B7698: 4a410091  add x10, x10, #0x10
0x063B769C: 61ffff54  b.ne #0x63b7688
0x063B76A0: 22008052  movz w2, #0x1
0x063B76A4: e00313aa  mov x0, x19
0x063B76A8: 1a7d3697  bl #0x3156b10
0x063B76AC: 05000014  b #0x63b76c0
0x063B76B0: 490140b9  ldr w9, [x10]
0x063B76B4: 29050011  add w9, w9, #1
0x063B76B8: 08d1298b  add x8, x8, w9, sxtw #4
0x063B76BC: 00e10491  add x0, x8, #0x138
0x063B76C0: 020440a9  ldp x2, x1, [x0]
0x063B76C4: e00313aa  mov x0, x19
0x063B76C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063B76CC: fe0742f8  ldr x30, [sp], #0x20
0x063B76D0: 40001fd6  br x2
0x063B76D4: 76253797  bl #0x3180cac

; RVA 0x63B4C18 | public double get_TotalSecondsNow() { }
; bytes=176 sha256=2b058e8a9f140c4116eb096a79c0c865d6fa038049d34cab13624163857fdb20 status=arm64_complete_bound indexed_start=True
0x063B4C18: ffc300d1  sub sp, sp, #0x30
0x063B4C1C: fe5701a9  stp x30, x21, [sp, #0x10]
0x063B4C20: f44f02a9  stp x20, x19, [sp, #0x20]
0x063B4C24: 94cb00d0  adrp x20, #0x7d26000
0x063B4C28: d59400d0  adrp x21, #0x764e000
0x063B4C2C: 88fe4739  ldrb w8, [x20, #0x1ff]
0x063B4C30: b52a43f9  ldr x21, [x21, #0x650]
0x063B4C34: f30300aa  mov x19, x0
0x063B4C38: 28010037  tbnz w8, #0, #0x63b4c5c
0x063B4C3C: c09400d0  adrp x0, #0x764e000
0x063B4C40: 002843f9  ldr x0, [x0, #0x650]
0x063B4C44: 752f3797  bl #0x3180a18
0x063B4C48: e09400b0  adrp x0, #0x7651000
0x063B4C4C: 00ec43f9  ldr x0, [x0, #0x7d8]
0x063B4C50: 722f3797  bl #0x3180a18
0x063B4C54: 28008052  movz w8, #0x1
0x063B4C58: 88fe0739  strb w8, [x20, #0x1ff]
0x063B4C5C: f49400b0  adrp x20, #0x7651000
0x063B4C60: 94ee43f9  ldr x20, [x20, #0x7d8]
0x063B4C64: e00313aa  mov x0, x19
0x063B4C68: ff0300f9  str xzr, [sp]
0x063B4C6C: 720a0094  bl #0x63b7634
0x063B4C70: a80240f9  ldr x8, [x21]
0x063B4C74: e00700f9  str x0, [sp, #8]
0x063B4C78: 09e140b9  ldr w9, [x8, #0xe0]
0x063B4C7C: 69000035  cbnz w9, #0x63b4c88
0x063B4C80: e00308aa  mov x0, x8
0x063B4C84: c22f3797  bl #0x3180b8c
0x063B4C88: e0230091  add x0, sp, #8
0x063B4C8C: e1031faa  mov x1, xzr
0x063B4C90: 4dffca97  bl #0x56749c4
0x063B4C94: 880240f9  ldr x8, [x20]
0x063B4C98: e00300f9  str x0, [sp]
0x063B4C9C: 09e140b9  ldr w9, [x8, #0xe0]
0x063B4CA0: 69000035  cbnz w9, #0x63b4cac
0x063B4CA4: e00308aa  mov x0, x8
0x063B4CA8: b92f3797  bl #0x3180b8c
0x063B4CAC: e0030091  mov x0, sp
0x063B4CB0: e1031faa  mov x1, xzr
0x063B4CB4: 1de3cb97  bl #0x56ad928
0x063B4CB8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063B4CBC: fe5741a9  ldp x30, x21, [sp, #0x10]
0x063B4CC0: ffc30091  add sp, sp, #0x30
0x063B4CC4: c0035fd6  ret

; RVA 0x63AD3BC | public DateTime get_CurrentDateTime() { }
; bytes=4 sha256=45912c8a6244340b41bfaba4a9d420c52f01f2712dfb23b84d25a3e515bb4a71 status=arm64_complete_bound indexed_start=True
0x063AD3BC: 9e280014  b #0x63b7634

; RVA 0x63AD3A4 | public double get_DeltaTime() { }
; bytes=24 sha256=b406a88b0e9a328a87fa0f6a8fa9006980940606eeca5f35ec0070ba4289a836 status=arm64_complete_bound indexed_start=True
0x063AD3A4: fe0f1ff8  str x30, [sp, #-0x10]!
0x063AD3A8: e0031faa  mov x0, xzr
0x063AD3AC: d9a32c94  bl #0x6ed6310
0x063AD3B0: 00c0221e  fcvt d0, s0
0x063AD3B4: fe0741f8  ldr x30, [sp], #0x10
0x063AD3B8: c0035fd6  ret

; RVA 0x63B76D8 | public static double get_TimeMultiplier() { }
; bytes=88 sha256=117bd2ab1abdf8cbdf1f3019814448de74ef5bd8b82a49ca5ac09884bb4c5bdf status=arm64_complete_bound indexed_start=True
0x063B76D8: fe0f1ef8  str x30, [sp, #-0x20]!
0x063B76DC: f44f01a9  stp x20, x19, [sp, #0x10]
0x063B76E0: 74cb00f0  adrp x20, #0x7d26000
0x063B76E4: d39900d0  adrp x19, #0x76f1000
0x063B76E8: 88024839  ldrb w8, [x20, #0x200]
0x063B76EC: 736645f9  ldr x19, [x19, #0xac8]
0x063B76F0: c8000037  tbnz w8, #0, #0x63b7708
0x063B76F4: c09900d0  adrp x0, #0x76f1000
0x063B76F8: 006445f9  ldr x0, [x0, #0xac8]
0x063B76FC: c7243797  bl #0x3180a18
0x063B7700: 28008052  movz w8, #0x1
0x063B7704: 88020839  strb w8, [x20, #0x200]
0x063B7708: 600240f9  ldr x0, [x19]
0x063B770C: 08e040b9  ldr w8, [x0, #0xe0]
0x063B7710: 68000035  cbnz w8, #0x63b771c
0x063B7714: 1e253797  bl #0x3180b8c
0x063B7718: 600240f9  ldr x0, [x19]
0x063B771C: 085c40f9  ldr x8, [x0, #0xb8]
0x063B7720: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063B7724: 000140fd  ldr d0, [x8]
0x063B7728: fe0742f8  ldr x30, [sp], #0x20
0x063B772C: c0035fd6  ret

; RVA 0x63B7730 | public override SystemPriorities get_Priority() { }
; bytes=8 sha256=1e4eaf3091dc637ce530ea3faa9a622e2d1c288bb3777f595084df9999f5aeca status=arm64_complete_bound indexed_start=True
0x063B7730: 00058052  movz w0, #0x28
0x063B7734: c0035fd6  ret

; RVA 0x63A84BC | public double get_DeltaTimeToProcess() { }
; bytes=144 sha256=a3bb68034de7358d30a38884814518e0ffb7c18d73e2d3556577ef7b2e236c07 status=arm64_complete_bound indexed_start=True
0x063A84BC: e80f1efc  str d8, [sp, #-0x20]!
0x063A84C0: fe0700f9  str x30, [sp, #8]
0x063A84C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x063A84C8: f4cb00d0  adrp x20, #0x7d26000
0x063A84CC: 88064839  ldrb w8, [x20, #0x201]
0x063A84D0: f30300aa  mov x19, x0
0x063A84D4: c8000037  tbnz w8, #0, #0x63a84ec
0x063A84D8: 209500d0  adrp x0, #0x764e000
0x063A84DC: 000447f9  ldr x0, [x0, #0xe08]
0x063A84E0: 4e613797  bl #0x3180a18
0x063A84E4: 28008052  movz w8, #0x1
0x063A84E8: 88060839  strb w8, [x20, #0x201]
0x063A84EC: e00313aa  mov x0, x19
0x063A84F0: 2c3c0094  bl #0x63b75a0
0x063A84F4: a00200b4  cbz x0, #0x63a8548
0x063A84F8: 28008052  movz w8, #0x1
0x063A84FC: 08a00039  strb w8, [x0, #0x28]
0x063A8500: e00313aa  mov x0, x19
0x063A8504: 273c0094  bl #0x63b75a0
0x063A8508: 000200b4  cbz x0, #0x63a8548
0x063A850C: 289500d0  adrp x8, #0x764e000
0x063A8510: 080547f9  ldr x8, [x8, #0xe08]
0x063A8514: 081040fd  ldr d8, [x0, #0x20]
0x063A8518: 080140f9  ldr x8, [x8]
0x063A851C: 09e140b9  ldr w9, [x8, #0xe0]
0x063A8520: 69000035  cbnz w9, #0x63a852c
0x063A8524: e00308aa  mov x0, x8
0x063A8528: 99613797  bl #0x3180b8c
0x063A852C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063A8530: fe0740f9  ldr x30, [sp, #8]
0x063A8534: e003679e  fmov d0, xzr
0x063A8538: 011da84e  mov v1.16b, v8.16b
0x063A853C: e0031faa  mov x0, xzr
0x063A8540: e80742fc  ldr d8, [sp], #0x20
0x063A8544: b1bbcb17  b #0x5697408
0x063A8548: d9613797  bl #0x3180cac

; RVA 0x63B7738 | protected override void ProcessComponents(ReadOnlyCollection<TimeComponent> components) { }
; bytes=816 sha256=f121e4c97857410228e0093985f3c5fbdfa873be05be652fc5e724078959b3a2 status=arm64_complete_bound indexed_start=True
0x063B7738: e923ba6d  stp d9, d8, [sp, #-0x60]!
0x063B773C: fe0b00f9  str x30, [sp, #0x10]
0x063B7740: fa6702a9  stp x26, x25, [sp, #0x20]
0x063B7744: f85f03a9  stp x24, x23, [sp, #0x30]
0x063B7748: f65704a9  stp x22, x21, [sp, #0x40]
0x063B774C: f44f05a9  stp x20, x19, [sp, #0x50]
0x063B7750: 74cb00f0  adrp x20, #0x7d26000
0x063B7754: 880a4839  ldrb w8, [x20, #0x202]
0x063B7758: f30301aa  mov x19, x1
0x063B775C: 48020037  tbnz w8, #0, #0x63b77a4
0x063B7760: a09400f0  adrp x0, #0x764e000
0x063B7764: 006444f9  ldr x0, [x0, #0x8c8]
0x063B7768: ac243797  bl #0x3180a18
0x063B776C: c09900d0  adrp x0, #0x76f1000
0x063B7770: 006845f9  ldr x0, [x0, #0xad0]
0x063B7774: a9243797  bl #0x3180a18
0x063B7778: a09400f0  adrp x0, #0x764e000
0x063B777C: 007044f9  ldr x0, [x0, #0x8e0]
0x063B7780: a6243797  bl #0x3180a18
0x063B7784: c09900d0  adrp x0, #0x76f1000
0x063B7788: 006c45f9  ldr x0, [x0, #0xad8]
0x063B778C: a3243797  bl #0x3180a18
0x063B7790: c09900d0  adrp x0, #0x76f1000
0x063B7794: 006445f9  ldr x0, [x0, #0xac8]
0x063B7798: a0243797  bl #0x3180a18
0x063B779C: 28008052  movz w8, #0x1
0x063B77A0: 880a0839  strb w8, [x20, #0x202]
0x063B77A4: 331000b4  cbz x19, #0x63b79a8
0x063B77A8: c89900d0  adrp x8, #0x76f1000
0x063B77AC: 086d45f9  ldr x8, [x8, #0xad8]
0x063B77B0: b69400f0  adrp x22, #0x764e000
0x063B77B4: e00313aa  mov x0, x19
0x063B77B8: 010140f9  ldr x1, [x8]
0x063B77BC: d66644f9  ldr x22, [x22, #0x8c8]
0x063B77C0: 02398297  bl #0x4445bc8
0x063B77C4: f30300aa  mov x19, x0
0x063B77C8: 200f00b4  cbz x0, #0x63b79ac
0x063B77CC: b79400f0  adrp x23, #0x764e000
0x063B77D0: d89900d0  adrp x24, #0x76f1000
0x063B77D4: d49900d0  adrp x20, #0x76f1000
0x063B77D8: f77244f9  ldr x23, [x23, #0x8e0]
0x063B77DC: 186b45f9  ldr x24, [x24, #0xad0]
0x063B77E0: 946645f9  ldr x20, [x20, #0xac8]
0x063B77E4: 79cb00f0  adrp x25, #0x7d26000
0x063B77E8: 3a008052  movz w26, #0x1
0x063B77EC: 680240f9  ldr x8, [x19]
0x063B77F0: e10240f9  ldr x1, [x23]
0x063B77F4: 095d4279  ldrh w9, [x8, #0x12e]
0x063B77F8: 290100b4  cbz x9, #0x63b781c
0x063B77FC: 0a5940f9  ldr x10, [x8, #0xb0]
0x063B7800: 4a210091  add x10, x10, #8
0x063B7804: 4b815ff8  ldur x11, [x10, #-8]
0x063B7808: 7f0101eb  cmp x11, x1
0x063B780C: 00010054  b.eq #0x63b782c
0x063B7810: 290500f1  subs x9, x9, #1
0x063B7814: 4a410091  add x10, x10, #0x10
0x063B7818: 61ffff54  b.ne #0x63b7804
0x063B781C: e00313aa  mov x0, x19
0x063B7820: e2031f2a  mov w2, wzr
0x063B7824: bb7c3697  bl #0x3156b10
0x063B7828: 04000014  b #0x63b7838
0x063B782C: 490180b9  ldrsw x9, [x10]
0x063B7830: 0811098b  add x8, x8, x9, lsl #4
0x063B7834: 00e10491  add x0, x8, #0x138
0x063B7838: 080440a9  ldp x8, x1, [x0]
0x063B783C: e00313aa  mov x0, x19
0x063B7840: 00013fd6  blr x8
0x063B7844: 00070036  tbz w0, #0, #0x63b7924
0x063B7848: 680240f9  ldr x8, [x19]
0x063B784C: 010340f9  ldr x1, [x24]
0x063B7850: 095d4279  ldrh w9, [x8, #0x12e]
0x063B7854: 290100b4  cbz x9, #0x63b7878
0x063B7858: 0a5940f9  ldr x10, [x8, #0xb0]
0x063B785C: 4a210091  add x10, x10, #8
0x063B7860: 4b815ff8  ldur x11, [x10, #-8]
0x063B7864: 7f0101eb  cmp x11, x1
0x063B7868: 00010054  b.eq #0x63b7888
0x063B786C: 290500f1  subs x9, x9, #1
0x063B7870: 4a410091  add x10, x10, #0x10
0x063B7874: 61ffff54  b.ne #0x63b7860
0x063B7878: e00313aa  mov x0, x19
0x063B787C: e2031f2a  mov w2, wzr
0x063B7880: a47c3697  bl #0x3156b10
0x063B7884: 04000014  b #0x63b7894
0x063B7888: 490180b9  ldrsw x9, [x10]
0x063B788C: 0811098b  add x8, x8, x9, lsl #4
0x063B7890: 00e10491  add x0, x8, #0x138
0x063B7894: 080440a9  ldp x8, x1, [x0]
0x063B7898: e00313aa  mov x0, x19
0x063B789C: 00013fd6  blr x8
0x063B78A0: f50300aa  mov x21, x0
0x063B78A4: 000800b4  cbz x0, #0x63b79a4
0x063B78A8: a8a24039  ldrb w8, [x21, #0x28]
0x063B78AC: a8000034  cbz w8, #0x63b78c0
0x063B78B0: e903679e  fmov d9, xzr
0x063B78B4: bf1200f9  str xzr, [x21, #0x20]
0x063B78B8: bfa20039  strb wzr, [x21, #0x28]
0x063B78BC: 02000014  b #0x63b78c4
0x063B78C0: a91240fd  ldr d9, [x21, #0x20]
0x063B78C4: e0031faa  mov x0, xzr
0x063B78C8: 9fc12c94  bl #0x6ee7f44
0x063B78CC: 800240f9  ldr x0, [x20]
0x063B78D0: 081ca04e  mov v8.16b, v0.16b
0x063B78D4: 08e040b9  ldr w8, [x0, #0xe0]
0x063B78D8: 48000035  cbnz w8, #0x63b78e0
0x063B78DC: ac243797  bl #0x3180b8c
0x063B78E0: 289b4939  ldrb w8, [x25, #0x266]
0x063B78E4: 88000035  cbnz w8, #0x63b78f4
0x063B78E8: e00314aa  mov x0, x20
0x063B78EC: 4b243797  bl #0x3180a18
0x063B78F0: 3a9b0939  strb w26, [x25, #0x266]
0x063B78F4: 800240f9  ldr x0, [x20]
0x063B78F8: 08e040b9  ldr w8, [x0, #0xe0]
0x063B78FC: 68000035  cbnz w8, #0x63b7908
0x063B7900: a3243797  bl #0x3180b8c
0x063B7904: 800240f9  ldr x0, [x20]
0x063B7908: 085c40f9  ldr x8, [x0, #0xb8]
0x063B790C: 01c1221e  fcvt d1, s8
0x063B7910: 000140fd  ldr d0, [x8]
0x063B7914: 0008611e  fmul d0, d0, d1
0x063B7918: 2029601e  fadd d0, d9, d0
0x063B791C: a01200fd  str d0, [x21, #0x20]
0x063B7920: b3ffff17  b #0x63b77ec
0x063B7924: f4031faa  mov x20, xzr
0x063B7928: f30200b4  cbz x19, #0x63b7984
0x063B792C: 680240f9  ldr x8, [x19]
0x063B7930: c10240f9  ldr x1, [x22]
0x063B7934: 095d4279  ldrh w9, [x8, #0x12e]
0x063B7938: 290100b4  cbz x9, #0x63b795c
0x063B793C: 0a5940f9  ldr x10, [x8, #0xb0]
0x063B7940: 4a210091  add x10, x10, #8
0x063B7944: 4b815ff8  ldur x11, [x10, #-8]
0x063B7948: 7f0101eb  cmp x11, x1
0x063B794C: 00010054  b.eq #0x63b796c
0x063B7950: 290500f1  subs x9, x9, #1
0x063B7954: 4a410091  add x10, x10, #0x10
0x063B7958: 61ffff54  b.ne #0x63b7944
0x063B795C: e00313aa  mov x0, x19
0x063B7960: e2031f2a  mov w2, wzr
0x063B7964: 6b7c3697  bl #0x3156b10
0x063B7968: 04000014  b #0x63b7978
0x063B796C: 490180b9  ldrsw x9, [x10]
0x063B7970: 0811098b  add x8, x8, x9, lsl #4
0x063B7974: 00e10491  add x0, x8, #0x138
0x063B7978: 080440a9  ldp x8, x1, [x0]
0x063B797C: e00313aa  mov x0, x19
0x063B7980: 00013fd6  blr x8
0x063B7984: 740100b5  cbnz x20, #0x63b79b0
0x063B7988: f44f45a9  ldp x20, x19, [sp, #0x50]
0x063B798C: f65744a9  ldp x22, x21, [sp, #0x40]
0x063B7990: f85f43a9  ldp x24, x23, [sp, #0x30]
0x063B7994: fa6742a9  ldp x26, x25, [sp, #0x20]
0x063B7998: fe0b40f9  ldr x30, [sp, #0x10]
0x063B799C: e923c66c  ldp d9, d8, [sp], #0x60
0x063B79A0: c0035fd6  ret
0x063B79A4: c2243797  bl #0x3180cac
0x063B79A8: c1243797  bl #0x3180cac
0x063B79AC: c0243797  bl #0x3180cac
0x063B79B0: e00314aa  mov x0, x20
0x063B79B4: bc243797  bl #0x3180ca4
0x063B79B8: 05000014  b #0x63b79cc
0x063B79BC: 04000014  b #0x63b79cc
0x063B79C0: 03000014  b #0x63b79cc
0x063B79C4: 02000014  b #0x63b79cc
0x063B79C8: 01000014  b #0x63b79cc
0x063B79CC: 3f040071  cmp w1, #1
0x063B79D0: a1000054  b.ne #0x63b79e4
0x063B79D4: cf5b3894  bl #0x71ce910
0x063B79D8: 140040f9  ldr x20, [x0]
0x063B79DC: d15b3894  bl #0x71ce920
0x063B79E0: d2ffff17  b #0x63b7928
0x063B79E4: f50300aa  mov x21, x0
0x063B79E8: f4031faa  mov x20, xzr
0x063B79EC: 02000014  b #0x63b79f4
0x063B79F0: f50300aa  mov x21, x0
0x063B79F4: f30200b4  cbz x19, #0x63b7a50
0x063B79F8: 680240f9  ldr x8, [x19]
0x063B79FC: c10240f9  ldr x1, [x22]
0x063B7A00: 095d4279  ldrh w9, [x8, #0x12e]
0x063B7A04: 290100b4  cbz x9, #0x63b7a28
0x063B7A08: 0a5940f9  ldr x10, [x8, #0xb0]
0x063B7A0C: 4a210091  add x10, x10, #8
0x063B7A10: 4b815ff8  ldur x11, [x10, #-8]
0x063B7A14: 7f0101eb  cmp x11, x1
0x063B7A18: 00010054  b.eq #0x63b7a38
0x063B7A1C: 290500f1  subs x9, x9, #1
0x063B7A20: 4a410091  add x10, x10, #0x10
0x063B7A24: 61ffff54  b.ne #0x63b7a10
0x063B7A28: e00313aa  mov x0, x19
0x063B7A2C: e2031f2a  mov w2, wzr
0x063B7A30: 387c3697  bl #0x3156b10
0x063B7A34: 04000014  b #0x63b7a44
0x063B7A38: 490180b9  ldrsw x9, [x10]
0x063B7A3C: 0811098b  add x8, x8, x9, lsl #4
0x063B7A40: 00e10491  add x0, x8, #0x138
0x063B7A44: 080440a9  ldp x8, x1, [x0]
0x063B7A48: e00313aa  mov x0, x19
0x063B7A4C: 00013fd6  blr x8
0x063B7A50: 740000b5  cbnz x20, #0x63b7a5c
0x063B7A54: e00315aa  mov x0, x21
0x063B7A58: c0b73a97  bl #0x3265958
0x063B7A5C: e00314aa  mov x0, x20
0x063B7A60: 91243797  bl #0x3180ca4
0x063B7A64: ac462997  bl #0x2e09514

; RVA 0x63B7A68 | public void .ctor() { }
; bytes=72 sha256=27bae0e51a7f237a8e634696870291b9c8cd6db777b55485f5a2be16f9dbd0a6 status=arm64_complete_bound indexed_start=True
0x063B7A68: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x063B7A6C: f44f01a9  stp x20, x19, [sp, #0x10]
0x063B7A70: 74cb00f0  adrp x20, #0x7d26000
0x063B7A74: d59900d0  adrp x21, #0x76f1000
0x063B7A78: 880e4839  ldrb w8, [x20, #0x203]
0x063B7A7C: b57245f9  ldr x21, [x21, #0xae0]
0x063B7A80: f30300aa  mov x19, x0
0x063B7A84: c8000037  tbnz w8, #0, #0x63b7a9c
0x063B7A88: c09900d0  adrp x0, #0x76f1000
0x063B7A8C: 007045f9  ldr x0, [x0, #0xae0]
0x063B7A90: e2233797  bl #0x3180a18
0x063B7A94: 28008052  movz w8, #0x1
0x063B7A98: 880e0839  strb w8, [x20, #0x203]
0x063B7A9C: a10240f9  ldr x1, [x21]
0x063B7AA0: e00313aa  mov x0, x19
0x063B7AA4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063B7AA8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x063B7AAC: 5ee28817  b #0x45f0424

; RVA 0x63B7AB0 | private static void .cctor() { }
; bytes=76 sha256=5cb34def5a98eec6b0d0b7e9f9bfc213d47b01701d3016e6c56b6f98fb806d19 status=arm64_complete_bound indexed_start=True
0x063B7AB0: fe0f1ef8  str x30, [sp, #-0x20]!
0x063B7AB4: f44f01a9  stp x20, x19, [sp, #0x10]
0x063B7AB8: 73cb00f0  adrp x19, #0x7d26000
0x063B7ABC: d49900d0  adrp x20, #0x76f1000
0x063B7AC0: 68124839  ldrb w8, [x19, #0x204]
0x063B7AC4: 946645f9  ldr x20, [x20, #0xac8]
0x063B7AC8: c8000037  tbnz w8, #0, #0x63b7ae0
0x063B7ACC: c09900d0  adrp x0, #0x76f1000
0x063B7AD0: 006445f9  ldr x0, [x0, #0xac8]
0x063B7AD4: d1233797  bl #0x3180a18
0x063B7AD8: 28008052  movz w8, #0x1
0x063B7ADC: 68120839  strb w8, [x19, #0x204]
0x063B7AE0: 880240f9  ldr x8, [x20]
0x063B7AE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063B7AE8: 09fee7d2  movz x9, #0x3ff0, lsl #48
0x063B7AEC: 085d40f9  ldr x8, [x8, #0xb8]
0x063B7AF0: 090100f9  str x9, [x8]
0x063B7AF4: fe0742f8  ldr x30, [sp], #0x20
0x063B7AF8: c0035fd6  ret

