; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 987 MergeEngine.ECS.Systems.Items.Producers.ProduceSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x679B5AC | public override SystemPriorities get_Priority() { }
; bytes=8 sha256=da213f955b8f14a0c0111dc8b2cfb634e53abeb514f662c0fb6f962dbf4e5f3e status=arm64_complete_bound indexed_start=True
0x0679B5AC: a0018052  movz w0, #0xd
0x0679B5B0: c0035fd6  ret

; RVA 0x679B5B4 | protected override ItemOrigin get_ItemOrigin() { }
; bytes=8 sha256=d5b79016b9fb751da31585e8fe24a684680be6bc5e71460e2422f620bbe78195 status=arm64_complete_bound indexed_start=True
0x0679B5B4: 00018052  movz w0, #0x8
0x0679B5B8: c0035fd6  ret

; RVA 0x679B5BC | private IEnumerable<ProducerComponent> OrderProducers(List<ProducerComponent> producers) { }
; bytes=164 sha256=2befbf155b4a6426dbe013b1fb81d63db9dc93f1841ce13cd8dc6727bec5f37e status=arm64_complete_bound indexed_start=True
0x0679B5BC: fe0f1cf8  str x30, [sp, #-0x40]!
0x0679B5C0: f85f01a9  stp x24, x23, [sp, #0x10]
0x0679B5C4: f65702a9  stp x22, x21, [sp, #0x20]
0x0679B5C8: f44f03a9  stp x20, x19, [sp, #0x30]
0x0679B5CC: 77ac00b0  adrp x23, #0x7d28000
0x0679B5D0: d87a0090  adrp x24, #0x76f3000
0x0679B5D4: b57b00b0  adrp x21, #0x7710000
0x0679B5D8: b67b00b0  adrp x22, #0x7710000
0x0679B5DC: e8ce7639  ldrb w8, [x23, #0xdb3]
0x0679B5E0: 180746f9  ldr x24, [x24, #0xc08]
0x0679B5E4: b55644f9  ldr x21, [x21, #0x8a8]
0x0679B5E8: d65a44f9  ldr x22, [x22, #0x8b0]
0x0679B5EC: f30301aa  mov x19, x1
0x0679B5F0: f40300aa  mov x20, x0
0x0679B5F4: 88010037  tbnz w8, #0, #0x679b624
0x0679B5F8: a07b00b0  adrp x0, #0x7710000
0x0679B5FC: 005844f9  ldr x0, [x0, #0x8b0]
0x0679B600: 06952797  bl #0x3180a18
0x0679B604: c07a0090  adrp x0, #0x76f3000
0x0679B608: 000446f9  ldr x0, [x0, #0xc08]
0x0679B60C: 03952797  bl #0x3180a18
0x0679B610: a07b00b0  adrp x0, #0x7710000
0x0679B614: 005444f9  ldr x0, [x0, #0x8a8]
0x0679B618: 00952797  bl #0x3180a18
0x0679B61C: 28008052  movz w8, #0x1
0x0679B620: e8ce3639  strb w8, [x23, #0xdb3]
0x0679B624: 000340f9  ldr x0, [x24]
0x0679B628: 9e952797  bl #0x3180ca0
0x0679B62C: a20240f9  ldr x2, [x21]
0x0679B630: e10314aa  mov x1, x20
0x0679B634: e3031faa  mov x3, xzr
0x0679B638: f50300aa  mov x21, x0
0x0679B63C: 0aecaa97  bl #0x5256664
0x0679B640: c20240f9  ldr x2, [x22]
0x0679B644: e00313aa  mov x0, x19
0x0679B648: e10315aa  mov x1, x21
0x0679B64C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0679B650: f65742a9  ldp x22, x21, [sp, #0x20]
0x0679B654: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0679B658: fe0744f8  ldr x30, [sp], #0x40
0x0679B65C: a8be5217  b #0x3c4b0fc

; RVA 0x679B660 | protected override IEnumerable<ProducerComponent> OnWillProcessComponents(ReadOnlyCollection<ProducerComponent> components) { }
; bytes=100 sha256=8e3b1e4fe98ca9ac15fc0bb210cf1cdea397f9bac16e8a40c6d3f0a6a550b703 status=arm64_complete_bound indexed_start=True
0x0679B660: fe0f1df8  str x30, [sp, #-0x30]!
0x0679B664: f65701a9  stp x22, x21, [sp, #0x10]
0x0679B668: f44f02a9  stp x20, x19, [sp, #0x20]
0x0679B66C: 75ac00b0  adrp x21, #0x7d28000
0x0679B670: b67b00b0  adrp x22, #0x7710000
0x0679B674: a8d27639  ldrb w8, [x21, #0xdb4]
0x0679B678: d65e44f9  ldr x22, [x22, #0x8b8]
0x0679B67C: f40301aa  mov x20, x1
0x0679B680: f30300aa  mov x19, x0
0x0679B684: c8000037  tbnz w8, #0, #0x679b69c
0x0679B688: a07b00b0  adrp x0, #0x7710000
0x0679B68C: 005c44f9  ldr x0, [x0, #0x8b8]
0x0679B690: e2942797  bl #0x3180a18
0x0679B694: 28008052  movz w8, #0x1
0x0679B698: a8d23639  strb w8, [x21, #0xdb4]
0x0679B69C: c20240f9  ldr x2, [x22]
0x0679B6A0: e00313aa  mov x0, x19
0x0679B6A4: e10314aa  mov x1, x20
0x0679B6A8: eb6d4d97  bl #0x3af6e54
0x0679B6AC: e10300aa  mov x1, x0
0x0679B6B0: e00313aa  mov x0, x19
0x0679B6B4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0679B6B8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0679B6BC: fe0743f8  ldr x30, [sp], #0x30
0x0679B6C0: bfffff17  b #0x679b5bc

; RVA 0x679B6C4 | protected override void ProcessComponent(ProducerComponent producer) { }
; bytes=416 sha256=02e0f2638246c0d07c61390e5b9e57850975116242f836345df6fd412ce828c3 status=arm64_complete_bound indexed_start=True
0x0679B6C4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0679B6C8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0679B6CC: 75ac00b0  adrp x21, #0x7d28000
0x0679B6D0: a8d67639  ldrb w8, [x21, #0xdb5]
0x0679B6D4: f30301aa  mov x19, x1
0x0679B6D8: f40300aa  mov x20, x0
0x0679B6DC: 08030037  tbnz w8, #0, #0x679b73c
0x0679B6E0: 007700f0  adrp x0, #0x767e000
0x0679B6E4: 008042f9  ldr x0, [x0, #0x500]
0x0679B6E8: cc942797  bl #0x3180a18
0x0679B6EC: 407a00f0  adrp x0, #0x76e6000
0x0679B6F0: 00b043f9  ldr x0, [x0, #0x760]
0x0679B6F4: c9942797  bl #0x3180a18
0x0679B6F8: 607a0090  adrp x0, #0x76e7000
0x0679B6FC: 00d440f9  ldr x0, [x0, #0x1a8]
0x0679B700: c6942797  bl #0x3180a18
0x0679B704: a07b00b0  adrp x0, #0x7710000
0x0679B708: 006044f9  ldr x0, [x0, #0x8c0]
0x0679B70C: c3942797  bl #0x3180a18
0x0679B710: a07b00b0  adrp x0, #0x7710000
0x0679B714: 006444f9  ldr x0, [x0, #0x8c8]
0x0679B718: c0942797  bl #0x3180a18
0x0679B71C: a07b00b0  adrp x0, #0x7710000
0x0679B720: 006844f9  ldr x0, [x0, #0x8d0]
0x0679B724: bd942797  bl #0x3180a18
0x0679B728: a07b00b0  adrp x0, #0x7710000
0x0679B72C: 006c44f9  ldr x0, [x0, #0x8d8]
0x0679B730: ba942797  bl #0x3180a18
0x0679B734: 28008052  movz w8, #0x1
0x0679B738: a8d63639  strb w8, [x21, #0xdb5]
0x0679B73C: 330900b4  cbz x19, #0x679b860
0x0679B740: 487a00f0  adrp x8, #0x76e6000
0x0679B744: 08b143f9  ldr x8, [x8, #0x760]
0x0679B748: 157700f0  adrp x21, #0x767e000
0x0679B74C: e00313aa  mov x0, x19
0x0679B750: 010140f9  ldr x1, [x8]
0x0679B754: b58242f9  ldr x21, [x21, #0x500]
0x0679B758: 31485197  bl #0x3bed81c
0x0679B75C: a10240f9  ldr x1, [x21]
0x0679B760: f50300aa  mov x21, x0
0x0679B764: e00313aa  mov x0, x19
0x0679B768: 2d485197  bl #0x3bed81c
0x0679B76C: b50700b4  cbz x21, #0x679b860
0x0679B770: a8c24039  ldrb w8, [x21, #0x30]
0x0679B774: 68000034  cbz w8, #0x679b780
0x0679B778: a00000b5  cbnz x0, #0x679b78c
0x0679B77C: 06000014  b #0x679b794
0x0679B780: a00600b4  cbz x0, #0x679b854
0x0679B784: 08004139  ldrb w8, [x0, #0x40]
0x0679B788: 68060034  cbz w8, #0x679b854
0x0679B78C: 08044139  ldrb w8, [x0, #0x41]
0x0679B790: 08060035  cbnz w8, #0x679b850
0x0679B794: a87b00b0  adrp x8, #0x7710000
0x0679B798: 086944f9  ldr x8, [x8, #0x8d0]
0x0679B79C: e00314aa  mov x0, x20
0x0679B7A0: e10313aa  mov x1, x19
0x0679B7A4: 020140f9  ldr x2, [x8]
0x0679B7A8: 6c6c7697  bl #0x4536958
0x0679B7AC: 00010036  tbz w0, #0, #0x679b7cc
0x0679B7B0: a87b00b0  adrp x8, #0x7710000
0x0679B7B4: 086544f9  ldr x8, [x8, #0x8c8]
0x0679B7B8: e00314aa  mov x0, x20
0x0679B7BC: e10313aa  mov x1, x19
0x0679B7C0: 020140f9  ldr x2, [x8]
0x0679B7C4: 8f6c7697  bl #0x4536a00
0x0679B7C8: 22000014  b #0x679b850
0x0679B7CC: 685e40b9  ldr w8, [x19, #0x5c]
0x0679B7D0: 1f010071  cmp w8, #0
0x0679B7D4: 8c010054  b.gt #0x679b804
0x0679B7D8: a87b00b0  adrp x8, #0x7710000
0x0679B7DC: 086144f9  ldr x8, [x8, #0x8c0]
0x0679B7E0: e00313aa  mov x0, x19
0x0679B7E4: 010140f9  ldr x1, [x8]
0x0679B7E8: 44e0af97  bl #0x53938f8
0x0679B7EC: c0000037  tbnz w0, #0, #0x679b804
0x0679B7F0: e00314aa  mov x0, x20
0x0679B7F4: e10315aa  mov x1, x21
0x0679B7F8: e2031faa  mov x2, xzr
0x0679B7FC: ff2ef097  bl #0x63a73f8
0x0679B800: 80fd0736  tbz w0, #0, #0x679b7b0
0x0679B804: 805a40f9  ldr x0, [x20, #0xb0]
0x0679B808: c00200b4  cbz x0, #0x679b860
0x0679B80C: 22008052  movz w2, #0x1
0x0679B810: e10315aa  mov x1, x21
0x0679B814: e3031faa  mov x3, xzr
0x0679B818: 3d90eb97  bl #0x627f90c
0x0679B81C: c0000036  tbz w0, #0, #0x679b834
0x0679B820: e00314aa  mov x0, x20
0x0679B824: e10313aa  mov x1, x19
0x0679B828: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679B82C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679B830: 0d000014  b #0x679b864
0x0679B834: 687a0090  adrp x8, #0x76e7000
0x0679B838: 08d540f9  ldr x8, [x8, #0x1a8]
0x0679B83C: e00315aa  mov x0, x21
0x0679B840: 010140f9  ldr x1, [x8]
0x0679B844: f6475197  bl #0x3bed81c
0x0679B848: 400000b4  cbz x0, #0x679b850
0x0679B84C: 1fc40039  strb wzr, [x0, #0x31]
0x0679B850: bfc20039  strb wzr, [x21, #0x30]
0x0679B854: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679B858: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679B85C: c0035fd6  ret
0x0679B860: 13952797  bl #0x3180cac

; RVA 0x679BE50 | private bool CanCompleteOrder(ProducerComponent producer) { }
; bytes=380 sha256=511a376e6003ac4f4dcd76078c44d65c82c21d7f3f68fa852171ddad598d9827 status=arm64_complete_bound indexed_start=True
0x0679BE50: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x0679BE54: f85f01a9  stp x24, x23, [sp, #0x10]
0x0679BE58: f65702a9  stp x22, x21, [sp, #0x20]
0x0679BE5C: f44f03a9  stp x20, x19, [sp, #0x30]
0x0679BE60: 74ac00b0  adrp x20, #0x7d28000
0x0679BE64: b67b00b0  adrp x22, #0x7710000
0x0679BE68: 88da7639  ldrb w8, [x20, #0xdb6]
0x0679BE6C: d68644f9  ldr x22, [x22, #0x908]
0x0679BE70: f50301aa  mov x21, x1
0x0679BE74: f30300aa  mov x19, x0
0x0679BE78: 08030037  tbnz w8, #0, #0x679bed8
0x0679BE7C: 807900d0  adrp x0, #0x76cd000
0x0679BE80: 005c45f9  ldr x0, [x0, #0xab8]
0x0679BE84: e5922797  bl #0x3180a18
0x0679BE88: a07b00b0  adrp x0, #0x7710000
0x0679BE8C: 008844f9  ldr x0, [x0, #0x910]
0x0679BE90: e2922797  bl #0x3180a18
0x0679BE94: 207700b0  adrp x0, #0x7680000
0x0679BE98: 002c40f9  ldr x0, [x0, #0x58]
0x0679BE9C: df922797  bl #0x3180a18
0x0679BEA0: a07b00b0  adrp x0, #0x7710000
0x0679BEA4: 008c44f9  ldr x0, [x0, #0x918]
0x0679BEA8: dc922797  bl #0x3180a18
0x0679BEAC: a07b00b0  adrp x0, #0x7710000
0x0679BEB0: 009044f9  ldr x0, [x0, #0x920]
0x0679BEB4: d9922797  bl #0x3180a18
0x0679BEB8: a07b00b0  adrp x0, #0x7710000
0x0679BEBC: 009444f9  ldr x0, [x0, #0x928]
0x0679BEC0: d6922797  bl #0x3180a18
0x0679BEC4: a07b00b0  adrp x0, #0x7710000
0x0679BEC8: 008444f9  ldr x0, [x0, #0x908]
0x0679BECC: d3922797  bl #0x3180a18
0x0679BED0: 28008052  movz w8, #0x1
0x0679BED4: 88da3639  strb w8, [x20, #0xdb6]
0x0679BED8: c00240f9  ldr x0, [x22]
0x0679BEDC: 71932797  bl #0x3180ca0
0x0679BEE0: e1031faa  mov x1, xzr
0x0679BEE4: f40300aa  mov x20, x0
0x0679BEE8: c5f9bc97  bl #0x56da5fc
0x0679BEEC: f40600b4  cbz x20, #0x679bfc8
0x0679BEF0: e00314aa  mov x0, x20
0x0679BEF4: 130c01f8  str x19, [x0, #0x10]!
0x0679BEF8: e10313aa  mov x1, x19
0x0679BEFC: b2922797  bl #0x31809c4
0x0679BF00: e00314aa  mov x0, x20
0x0679BF04: 158c01f8  str x21, [x0, #0x18]!
0x0679BF08: e10315aa  mov x1, x21
0x0679BF0C: ae922797  bl #0x31809c4
0x0679BF10: 606640f9  ldr x0, [x19, #0xc8]
0x0679BF14: a00500b4  cbz x0, #0x679bfc8
0x0679BF18: b37b00b0  adrp x19, #0x7710000
0x0679BF1C: b57b00b0  adrp x21, #0x7710000
0x0679BF20: b67b00b0  adrp x22, #0x7710000
0x0679BF24: 377700b0  adrp x23, #0x7680000
0x0679BF28: b87b00b0  adrp x24, #0x7710000
0x0679BF2C: 997900d0  adrp x25, #0x76cd000
0x0679BF30: 738e44f9  ldr x19, [x19, #0x918]
0x0679BF34: b59244f9  ldr x21, [x21, #0x920]
0x0679BF38: d68a44f9  ldr x22, [x22, #0x910]
0x0679BF3C: f72e40f9  ldr x23, [x23, #0x58]
0x0679BF40: 189744f9  ldr x24, [x24, #0x928]
0x0679BF44: 395f45f9  ldr x25, [x25, #0xab8]
0x0679BF48: e1031faa  mov x1, xzr
0x0679BF4C: 1b740594  bl #0x68f8fb8
0x0679BF50: 680240f9  ldr x8, [x19]
0x0679BF54: f30300aa  mov x19, x0
0x0679BF58: e00308aa  mov x0, x8
0x0679BF5C: 51932797  bl #0x3180ca0
0x0679BF60: a20240f9  ldr x2, [x21]
0x0679BF64: e10314aa  mov x1, x20
0x0679BF68: e3031faa  mov x3, xzr
0x0679BF6C: f50300aa  mov x21, x0
0x0679BF70: 92eaaa97  bl #0x52569b8
0x0679BF74: c20240f9  ldr x2, [x22]
0x0679BF78: e00313aa  mov x0, x19
0x0679BF7C: e10315aa  mov x1, x21
0x0679BF80: 46dd5297  bl #0x3c53498
0x0679BF84: e80240f9  ldr x8, [x23]
0x0679BF88: f30300aa  mov x19, x0
0x0679BF8C: e00308aa  mov x0, x8
0x0679BF90: 44932797  bl #0x3180ca0
0x0679BF94: 020340f9  ldr x2, [x24]
0x0679BF98: e10314aa  mov x1, x20
0x0679BF9C: e3031faa  mov x3, xzr
0x0679BFA0: f50300aa  mov x21, x0
0x0679BFA4: 06e8aa97  bl #0x5255fbc
0x0679BFA8: 220340f9  ldr x2, [x25]
0x0679BFAC: e00313aa  mov x0, x19
0x0679BFB0: e10315aa  mov x1, x21
0x0679BFB4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0679BFB8: f65742a9  ldp x22, x21, [sp, #0x20]
0x0679BFBC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0679BFC0: fe67c4a8  ldp x30, x25, [sp], #0x40
0x0679BFC4: 133d5217  b #0x3c2b410
0x0679BFC8: 39932797  bl #0x3180cac

; RVA 0x679B864 | private void TryProduce(ProducerComponent producer) { }
; bytes=1516 sha256=14e5f149a029562bf6c33e7d61adb3bdef8fdcc220db6f6fa7870e37bb305992 status=arm64_complete_bound indexed_start=True
0x0679B864: ff4302d1  sub sp, sp, #0x90
0x0679B868: fd7b03a9  stp x29, x30, [sp, #0x30]
0x0679B86C: fc6f04a9  stp x28, x27, [sp, #0x40]
0x0679B870: fa6705a9  stp x26, x25, [sp, #0x50]
0x0679B874: f85f06a9  stp x24, x23, [sp, #0x60]
0x0679B878: f65707a9  stp x22, x21, [sp, #0x70]
0x0679B87C: f44f08a9  stp x20, x19, [sp, #0x80]
0x0679B880: 75ac00b0  adrp x21, #0x7d28000
0x0679B884: a8de7639  ldrb w8, [x21, #0xdb7]
0x0679B888: f40301aa  mov x20, x1
0x0679B88C: f30300aa  mov x19, x0
0x0679B890: 68060037  tbnz w8, #0, #0x679b95c
0x0679B894: 007700b0  adrp x0, #0x767c000
0x0679B898: 004441f9  ldr x0, [x0, #0x288]
0x0679B89C: 5f942797  bl #0x3180a18
0x0679B8A0: 007700f0  adrp x0, #0x767e000
0x0679B8A4: 008042f9  ldr x0, [x0, #0x500]
0x0679B8A8: 5c942797  bl #0x3180a18
0x0679B8AC: 407a00f0  adrp x0, #0x76e6000
0x0679B8B0: 00b043f9  ldr x0, [x0, #0x760]
0x0679B8B4: 59942797  bl #0x3180a18
0x0679B8B8: e0790090  adrp x0, #0x76d7000
0x0679B8BC: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0679B8C0: 56942797  bl #0x3180a18
0x0679B8C4: e0790090  adrp x0, #0x76d7000
0x0679B8C8: 00c442f9  ldr x0, [x0, #0x588]
0x0679B8CC: 53942797  bl #0x3180a18
0x0679B8D0: e07600f0  adrp x0, #0x767a000
0x0679B8D4: 004c42f9  ldr x0, [x0, #0x498]
0x0679B8D8: 50942797  bl #0x3180a18
0x0679B8DC: a07b00b0  adrp x0, #0x7710000
0x0679B8E0: 007044f9  ldr x0, [x0, #0x8e0]
0x0679B8E4: 4d942797  bl #0x3180a18
0x0679B8E8: a07500b0  adrp x0, #0x7650000
0x0679B8EC: 00d046f9  ldr x0, [x0, #0xda0]
0x0679B8F0: 4a942797  bl #0x3180a18
0x0679B8F4: 407a00f0  adrp x0, #0x76e6000
0x0679B8F8: 008447f9  ldr x0, [x0, #0xf08]
0x0679B8FC: 47942797  bl #0x3180a18
0x0679B900: a07b00b0  adrp x0, #0x7710000
0x0679B904: 00c441f9  ldr x0, [x0, #0x388]
0x0679B908: 44942797  bl #0x3180a18
0x0679B90C: a07b00b0  adrp x0, #0x7710000
0x0679B910: 009843f9  ldr x0, [x0, #0x730]
0x0679B914: 41942797  bl #0x3180a18
0x0679B918: a07b00b0  adrp x0, #0x7710000
0x0679B91C: 007444f9  ldr x0, [x0, #0x8e8]
0x0679B920: 3e942797  bl #0x3180a18
0x0679B924: 007700b0  adrp x0, #0x767c000
0x0679B928: 004841f9  ldr x0, [x0, #0x290]
0x0679B92C: 3b942797  bl #0x3180a18
0x0679B930: a07b00b0  adrp x0, #0x7710000
0x0679B934: 007844f9  ldr x0, [x0, #0x8f0]
0x0679B938: 38942797  bl #0x3180a18
0x0679B93C: a07b00b0  adrp x0, #0x7710000
0x0679B940: 007c44f9  ldr x0, [x0, #0x8f8]
0x0679B944: 35942797  bl #0x3180a18
0x0679B948: a07b00b0  adrp x0, #0x7710000
0x0679B94C: 008044f9  ldr x0, [x0, #0x900]
0x0679B950: 32942797  bl #0x3180a18
0x0679B954: 28008052  movz w8, #0x1
0x0679B958: a8de3639  strb w8, [x21, #0xdb7]
0x0679B95C: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x0679B960: ff0f00f9  str xzr, [sp, #0x18]
0x0679B964: 542700b4  cbz x20, #0x679be4c
0x0679B968: e8790090  adrp x8, #0x76d7000
0x0679B96C: 08dd42f9  ldr x8, [x8, #0x5b8]
0x0679B970: 567a00f0  adrp x22, #0x76e6000
0x0679B974: 157700f0  adrp x21, #0x767e000
0x0679B978: e00314aa  mov x0, x20
0x0679B97C: 010140f9  ldr x1, [x8]
0x0679B980: d6b243f9  ldr x22, [x22, #0x760]
0x0679B984: b58242f9  ldr x21, [x21, #0x500]
0x0679B988: a5475197  bl #0x3bed81c
0x0679B98C: c10240f9  ldr x1, [x22]
0x0679B990: fa0300aa  mov x26, x0
0x0679B994: e00314aa  mov x0, x20
0x0679B998: a1475197  bl #0x3bed81c
0x0679B99C: a10240f9  ldr x1, [x21]
0x0679B9A0: f50300aa  mov x21, x0
0x0679B9A4: e00314aa  mov x0, x20
0x0679B9A8: 9d475197  bl #0x3bed81c
0x0679B9AC: 614a40f9  ldr x1, [x19, #0x90]
0x0679B9B0: f80300aa  mov x24, x0
0x0679B9B4: e00315aa  mov x0, x21
0x0679B9B8: e2031faa  mov x2, xzr
0x0679B9BC: 2c72eb97  bl #0x627826c
0x0679B9C0: 000a0034  cbz w0, #0x679bb00
0x0679B9C4: a87b00b0  adrp x8, #0x7710000
0x0679B9C8: 08c541f9  ldr x8, [x8, #0x388]
0x0679B9CC: f703002a  mov w23, w0
0x0679B9D0: b67b00b0  adrp x22, #0x7710000
0x0679B9D4: 000140f9  ldr x0, [x8]
0x0679B9D8: d68244f9  ldr x22, [x22, #0x900]
0x0679B9DC: b1942797  bl #0x3180ca0
0x0679B9E0: e1031faa  mov x1, xzr
0x0679B9E4: f90300aa  mov x25, x0
0x0679B9E8: fedfe097  bl #0x5fd39e0
0x0679B9EC: c30240f9  ldr x3, [x22]
0x0679B9F0: e2a30091  add x2, sp, #0x28
0x0679B9F4: e00313aa  mov x0, x19
0x0679B9F8: e10314aa  mov x1, x20
0x0679B9FC: 4e6b7697  bl #0x4536734
0x0679BA00: f603002a  mov w22, w0
0x0679BA04: 00020036  tbz w0, #0, #0x679ba44
0x0679BA08: e81740f9  ldr x8, [sp, #0x28]
0x0679BA0C: 082200b4  cbz x8, #0x679be4c
0x0679BA10: f52100b4  cbz x21, #0x679be4c
0x0679BA14: 011940b9  ldr w1, [x8, #0x18]
0x0679BA18: a87500b0  adrp x8, #0x7650000
0x0679BA1C: 08d146f9  ldr x8, [x8, #0xda0]
0x0679BA20: e0230091  add x0, sp, #8
0x0679BA24: a14e00b9  str w1, [x21, #0x4c]
0x0679BA28: 7b3a40f9  ldr x27, [x19, #0x70]
0x0679BA2C: 020140f9  ldr x2, [x8]
0x0679BA30: ff0700f9  str xzr, [sp, #8]
0x0679BA34: 2b7f6b97  bl #0x427b6e0
0x0679BA38: bb2000b4  cbz x27, #0x679be4c
0x0679BA3C: e80740f9  ldr x8, [sp, #8]
0x0679BA40: 685700f9  str x8, [x27, #0xa8]
0x0679BA44: 605a40f9  ldr x0, [x19, #0xb0]
0x0679BA48: 202000b4  cbz x0, #0x679be4c
0x0679BA4C: 22008052  movz w2, #0x1
0x0679BA50: e10315aa  mov x1, x21
0x0679BA54: e30319aa  mov x3, x25
0x0679BA58: e40318aa  mov x4, x24
0x0679BA5C: e5031faa  mov x5, xzr
0x0679BA60: 378feb97  bl #0x627f73c
0x0679BA64: 5a1f00b4  cbz x26, #0x679be4c
0x0679BA68: 604a40f9  ldr x0, [x19, #0x90]
0x0679BA6C: 001f00b4  cbz x0, #0x679be4c
0x0679BA70: 411b40f9  ldr x1, [x26, #0x30]
0x0679BA74: 5d7a00f0  adrp x29, #0x76e6000
0x0679BA78: bd8747f9  ldr x29, [x29, #0xf08]
0x0679BA7C: e2031faa  mov x2, xzr
0x0679BA80: e3031faa  mov x3, xzr
0x0679BA84: 7a38fb97  bl #0x6669c6c
0x0679BA88: a20340f9  ldr x2, [x29]
0x0679BA8C: 7b6240f9  ldr x27, [x19, #0xc0]
0x0679BA90: 9c0a40f9  ldr x28, [x20, #0x10]
0x0679BA94: f80300aa  mov x24, x0
0x0679BA98: e0230091  add x0, sp, #8
0x0679BA9C: e10318aa  mov x1, x24
0x0679BAA0: ff1300b9  str wzr, [sp, #0x10]
0x0679BAA4: ff0700f9  str xzr, [sp, #8]
0x0679BAA8: de6d6b97  bl #0x4277220
0x0679BAAC: 1b1d00b4  cbz x27, #0x679be4c
0x0679BAB0: e30740f9  ldr x3, [sp, #8]
0x0679BAB4: e41340b9  ldr w4, [sp, #0x10]
0x0679BAB8: e0031baa  mov x0, x27
0x0679BABC: e1031caa  mov x1, x28
0x0679BAC0: e20319aa  mov x2, x25
0x0679BAC4: e5031faa  mov x5, xzr
0x0679BAC8: 39ffe497  bl #0x60db7ac
0x0679BACC: 151c00b4  cbz x21, #0x679be4c
0x0679BAD0: fb03002a  mov w27, w0
0x0679BAD4: e00315aa  mov x0, x21
0x0679BAD8: e1031faa  mov x1, xzr
0x0679BADC: 2a840594  bl #0x68fcb84
0x0679BAE0: 20050036  tbz w0, #0, #0x679bb84
0x0679BAE4: 606a40f9  ldr x0, [x19, #0xd0]
0x0679BAE8: 201b00b4  cbz x0, #0x679be4c
0x0679BAEC: 810a40f9  ldr x1, [x20, #0x10]
0x0679BAF0: e20319aa  mov x2, x25
0x0679BAF4: e3031faa  mov x3, xzr
0x0679BAF8: 4d87f597  bl #0x64fd82c
0x0679BAFC: 23000014  b #0x679bb88
0x0679BB00: c10240f9  ldr x1, [x22]
0x0679BB04: e00314aa  mov x0, x20
0x0679BB08: 45475197  bl #0x3bed81c
0x0679BB0C: 001a00b4  cbz x0, #0x679be4c
0x0679BB10: 1fc00039  strb wzr, [x0, #0x30]
0x0679BB14: b80000b4  cbz x24, #0x679bb28
0x0679BB18: 080b4139  ldrb w8, [x24, #0x42]
0x0679BB1C: 88180035  cbnz w8, #0x679be2c
0x0679BB20: 28008052  movz w8, #0x1
0x0679BB24: 080b0139  strb w8, [x24, #0x42]
0x0679BB28: 3a1900b4  cbz x26, #0x679be4c
0x0679BB2C: 087700b0  adrp x8, #0x767c000
0x0679BB30: 731640f9  ldr x19, [x19, #0x28]
0x0679BB34: 551b40f9  ldr x21, [x26, #0x30]
0x0679BB38: 084541f9  ldr x8, [x8, #0x288]
0x0679BB3C: 000140f9  ldr x0, [x8]
0x0679BB40: 58942797  bl #0x3180ca0
0x0679BB44: c2008052  movz w2, #0x6
0x0679BB48: e10315aa  mov x1, x21
0x0679BB4C: e3031faa  mov x3, xzr
0x0679BB50: e4031f2a  mov w4, wzr
0x0679BB54: e5031f2a  mov w5, wzr
0x0679BB58: e6031faa  mov x6, xzr
0x0679BB5C: f40300aa  mov x20, x0
0x0679BB60: b23bff97  bl #0x676aa28
0x0679BB64: 531700b4  cbz x19, #0x679be4c
0x0679BB68: 087700b0  adrp x8, #0x767c000
0x0679BB6C: 084941f9  ldr x8, [x8, #0x290]
0x0679BB70: e00313aa  mov x0, x19
0x0679BB74: e10314aa  mov x1, x20
0x0679BB78: 020140f9  ldr x2, [x8]
0x0679BB7C: 7c245897  bl #0x3da4d6c
0x0679BB80: ab000014  b #0x679be2c
0x0679BB84: e0031f2a  mov w0, wzr
0x0679BB88: 6803002a  orr w8, w27, w0
0x0679BB8C: ff1300f9  str xzr, [sp, #0x20]
0x0679BB90: a8040037  tbnz w8, #0, #0x679bc24
0x0679BB94: 7b6e40f9  ldr x27, [x19, #0xd8]
0x0679BB98: bb1500b4  cbz x27, #0x679be4c
0x0679BB9C: aa7b00b0  adrp x10, #0x7710000
0x0679BBA0: 680340f9  ldr x8, [x27]
0x0679BBA4: 4a7144f9  ldr x10, [x10, #0x8e0]
0x0679BBA8: 095d4279  ldrh w9, [x8, #0x12e]
0x0679BBAC: 410140f9  ldr x1, [x10]
0x0679BBB0: 290100b4  cbz x9, #0x679bbd4
0x0679BBB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679BBB8: 4a210091  add x10, x10, #8
0x0679BBBC: 4b815ff8  ldur x11, [x10, #-8]
0x0679BBC0: 7f0101eb  cmp x11, x1
0x0679BBC4: 00010054  b.eq #0x679bbe4
0x0679BBC8: 290500f1  subs x9, x9, #1
0x0679BBCC: 4a410091  add x10, x10, #0x10
0x0679BBD0: 61ffff54  b.ne #0x679bbbc
0x0679BBD4: e0031baa  mov x0, x27
0x0679BBD8: e2031f2a  mov w2, wzr
0x0679BBDC: cdeb2697  bl #0x3156b10
0x0679BBE0: 04000014  b #0x679bbf0
0x0679BBE4: 490180b9  ldrsw x9, [x10]
0x0679BBE8: 0811098b  add x8, x8, x9, lsl #4
0x0679BBEC: 00e10491  add x0, x8, #0x138
0x0679BBF0: 081040a9  ldp x8, x4, [x0]
0x0679BBF4: e2630091  add x2, sp, #0x18
0x0679BBF8: e3830091  add x3, sp, #0x20
0x0679BBFC: e0031baa  mov x0, x27
0x0679BC00: e1031aaa  mov x1, x26
0x0679BC04: 00013fd6  blr x8
0x0679BC08: e0000036  tbz w0, #0, #0x679bc24
0x0679BC0C: f80f40f9  ldr x24, [sp, #0x18]
0x0679BC10: b6000036  tbz w22, #0, #0x679bc24
0x0679BC14: ff1700f9  str xzr, [sp, #0x28]
0x0679BC18: 683a40f9  ldr x8, [x19, #0x70]
0x0679BC1C: 881100b4  cbz x8, #0x679be4c
0x0679BC20: 1f5500f9  str xzr, [x8, #0xa8]
0x0679BC24: a87b00b0  adrp x8, #0x7710000
0x0679BC28: 087d44f9  ldr x8, [x8, #0x8f8]
0x0679BC2C: e71b42a9  ldp x7, x6, [sp, #0x20]
0x0679BC30: e00313aa  mov x0, x19
0x0679BC34: e10318aa  mov x1, x24
0x0679BC38: 080140f9  ldr x8, [x8]
0x0679BC3C: e20314aa  mov x2, x20
0x0679BC40: e30315aa  mov x3, x21
0x0679BC44: e40319aa  mov x4, x25
0x0679BC48: e5031f2a  mov w5, wzr
0x0679BC4C: e80300f9  str x8, [sp]
0x0679BC50: 215d7697  bl #0x45330d4
0x0679BC54: c00f00b4  cbz x0, #0x679be4c
0x0679BC58: 000840f9  ldr x0, [x0, #0x10]
0x0679BC5C: 800f00b4  cbz x0, #0x679be4c
0x0679BC60: 080040f9  ldr x8, [x0]
0x0679BC64: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x0679BC68: 20013fd6  blr x9
0x0679BC6C: e81340f9  ldr x8, [sp, #0x20]
0x0679BC70: fb0300aa  mov x27, x0
0x0679BC74: 480500b4  cbz x8, #0x679bd1c
0x0679BC78: 604a40f9  ldr x0, [x19, #0x90]
0x0679BC7C: 800e00b4  cbz x0, #0x679be4c
0x0679BC80: e10318aa  mov x1, x24
0x0679BC84: e2031faa  mov x2, xzr
0x0679BC88: eb12fb97  bl #0x6660834
0x0679BC8C: 000e00b4  cbz x0, #0x679be4c
0x0679BC90: e8790090  adrp x8, #0x76d7000
0x0679BC94: 7c6e40f9  ldr x28, [x19, #0xd8]
0x0679BC98: 08c542f9  ldr x8, [x8, #0x588]
0x0679BC9C: 010140f9  ldr x1, [x8]
0x0679BCA0: df465197  bl #0x3bed81c
0x0679BCA4: 5c0d00b4  cbz x28, #0x679be4c
0x0679BCA8: aa7b00b0  adrp x10, #0x7710000
0x0679BCAC: 880340f9  ldr x8, [x28]
0x0679BCB0: 5a1b40f9  ldr x26, [x26, #0x30]
0x0679BCB4: 4a7144f9  ldr x10, [x10, #0x8e0]
0x0679BCB8: fd0300aa  mov x29, x0
0x0679BCBC: 095d4279  ldrh w9, [x8, #0x12e]
0x0679BCC0: 410140f9  ldr x1, [x10]
0x0679BCC4: 290100b4  cbz x9, #0x679bce8
0x0679BCC8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679BCCC: 4a210091  add x10, x10, #8
0x0679BCD0: 4b815ff8  ldur x11, [x10, #-8]
0x0679BCD4: 7f0101eb  cmp x11, x1
0x0679BCD8: 00010054  b.eq #0x679bcf8
0x0679BCDC: 290500f1  subs x9, x9, #1
0x0679BCE0: 4a410091  add x10, x10, #0x10
0x0679BCE4: 61ffff54  b.ne #0x679bcd0
0x0679BCE8: 22008052  movz w2, #0x1
0x0679BCEC: e0031caa  mov x0, x28
0x0679BCF0: 88eb2697  bl #0x3156b10
0x0679BCF4: 05000014  b #0x679bd08
0x0679BCF8: 490140b9  ldr w9, [x10]
0x0679BCFC: 29050011  add w9, w9, #1
0x0679BD00: 08d1298b  add x8, x8, w9, sxtw #4
0x0679BD04: 00e10491  add x0, x8, #0x138
0x0679BD08: 080c40a9  ldp x8, x3, [x0]
0x0679BD0C: e0031caa  mov x0, x28
0x0679BD10: e1031daa  mov x1, x29
0x0679BD14: e2031aaa  mov x2, x26
0x0679BD18: 00013fd6  blr x8
0x0679BD1C: 990900b4  cbz x25, #0x679be4c
0x0679BD20: 605e40f9  ldr x0, [x19, #0xb8]
0x0679BD24: 400900b4  cbz x0, #0x679be4c
0x0679BD28: a87b00b0  adrp x8, #0x7710000
0x0679BD2C: 089943f9  ldr x8, [x8, #0x730]
0x0679BD30: 210b40f9  ldr x1, [x25, #0x10]
0x0679BD34: 020140f9  ldr x2, [x8]
0x0679BD38: 3d925697  bl #0x3d4062c
0x0679BD3C: 795240f9  ldr x25, [x19, #0xa0]
0x0679BD40: 790800b4  cbz x25, #0x679be4c
0x0679BD44: ea7600f0  adrp x10, #0x767a000
0x0679BD48: 280340f9  ldr x8, [x25]
0x0679BD4C: 4a4d42f9  ldr x10, [x10, #0x498]
0x0679BD50: ba7b00b0  adrp x26, #0x7710000
0x0679BD54: 095d4279  ldrh w9, [x8, #0x12e]
0x0679BD58: 410140f9  ldr x1, [x10]
0x0679BD5C: 5a7744f9  ldr x26, [x26, #0x8e8]
0x0679BD60: 290100b4  cbz x9, #0x679bd84
0x0679BD64: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679BD68: 4a210091  add x10, x10, #8
0x0679BD6C: 4b815ff8  ldur x11, [x10, #-8]
0x0679BD70: 7f0101eb  cmp x11, x1
0x0679BD74: 00010054  b.eq #0x679bd94
0x0679BD78: 290500f1  subs x9, x9, #1
0x0679BD7C: 4a410091  add x10, x10, #0x10
0x0679BD80: 61ffff54  b.ne #0x679bd6c
0x0679BD84: 82028052  movz w2, #0x14
0x0679BD88: e00319aa  mov x0, x25
0x0679BD8C: 61eb2697  bl #0x3156b10
0x0679BD90: 05000014  b #0x679bda4
0x0679BD94: 490140b9  ldr w9, [x10]
0x0679BD98: 29510011  add w9, w9, #0x14
0x0679BD9C: 08d1298b  add x8, x8, w9, sxtw #4
0x0679BDA0: 00e10491  add x0, x8, #0x138
0x0679BDA4: 080840a9  ldp x8, x2, [x0]
0x0679BDA8: e00319aa  mov x0, x25
0x0679BDAC: e10314aa  mov x1, x20
0x0679BDB0: 00013fd6  blr x8
0x0679BDB4: e20300aa  mov x2, x0
0x0679BDB8: e00313aa  mov x0, x19
0x0679BDBC: e10314aa  mov x1, x20
0x0679BDC0: e3031baa  mov x3, x27
0x0679BDC4: e403172a  mov w4, w23
0x0679BDC8: 89000094  bl #0x679bfec
0x0679BDCC: 400340f9  ldr x0, [x26]
0x0679BDD0: 771640f9  ldr x23, [x19, #0x28]
0x0679BDD4: b3932797  bl #0x3180ca0
0x0679BDD8: e10314aa  mov x1, x20
0x0679BDDC: e20318aa  mov x2, x24
0x0679BDE0: e3031faa  mov x3, xzr
0x0679BDE4: f90300aa  mov x25, x0
0x0679BDE8: ab5fe197  bl #0x5ff3c94
0x0679BDEC: 170300b4  cbz x23, #0x679be4c
0x0679BDF0: a87b00b0  adrp x8, #0x7710000
0x0679BDF4: 087944f9  ldr x8, [x8, #0x8f0]
0x0679BDF8: e00317aa  mov x0, x23
0x0679BDFC: e10319aa  mov x1, x25
0x0679BE00: 020140f9  ldr x2, [x8]
0x0679BE04: da235897  bl #0x3da4d6c
0x0679BE08: 36010036  tbz w22, #0, #0x679be2c
0x0679BE0C: 603a40f9  ldr x0, [x19, #0x70]
0x0679BE10: e00100b4  cbz x0, #0x679be4c
0x0679BE14: e1031faa  mov x1, xzr
0x0679BE18: 6c58e897  bl #0x61b1fc8
0x0679BE1C: a04e00b9  str w0, [x21, #0x4c]
0x0679BE20: 683a40f9  ldr x8, [x19, #0x70]
0x0679BE24: 480100b4  cbz x8, #0x679be4c
0x0679BE28: 1f5500f9  str xzr, [x8, #0xa8]
0x0679BE2C: f44f48a9  ldp x20, x19, [sp, #0x80]
0x0679BE30: f65747a9  ldp x22, x21, [sp, #0x70]
0x0679BE34: f85f46a9  ldp x24, x23, [sp, #0x60]
0x0679BE38: fa6745a9  ldp x26, x25, [sp, #0x50]
0x0679BE3C: fc6f44a9  ldp x28, x27, [sp, #0x40]
0x0679BE40: fd7b43a9  ldp x29, x30, [sp, #0x30]
0x0679BE44: ff430291  add sp, sp, #0x90
0x0679BE48: c0035fd6  ret
0x0679BE4C: 98932797  bl #0x3180cac

; RVA 0x679BFD4 | private bool ShouldProduceRngItem(InteractionComponent interactionComponent) { }
; bytes=24 sha256=c1dfa668a25d22b632bd7ef084b618d7eb863eacb1ec9ba8683d761135157f75 status=arm64_complete_bound indexed_start=True
0x0679BFD4: 810000b4  cbz x1, #0x679bfe4
0x0679BFD8: e00301aa  mov x0, x1
0x0679BFDC: e1031faa  mov x1, xzr
0x0679BFE0: e9820514  b #0x68fcb84
0x0679BFE4: fe0f1ff8  str x30, [sp, #-0x10]!
0x0679BFE8: 31932797  bl #0x3180cac

; RVA 0x679BFEC | private void FireAnalyticsSignal(ProducerComponent producer, IMergeItem item, string spawnedItemUniqueId, int emptyPositionCount) { }
; bytes=336 sha256=8333760fd2cc4440fd608b5646e002d1a8d7c1dad1ce5500928646737cf6d5c3 status=arm64_complete_bound indexed_start=True
0x0679BFEC: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x0679BFF0: f85f01a9  stp x24, x23, [sp, #0x10]
0x0679BFF4: f65702a9  stp x22, x21, [sp, #0x20]
0x0679BFF8: f44f03a9  stp x20, x19, [sp, #0x30]
0x0679BFFC: 78ac00b0  adrp x24, #0x7d28000
0x0679C000: 08e37639  ldrb w8, [x24, #0xdb8]
0x0679C004: f303042a  mov w19, w4
0x0679C008: f40303aa  mov x20, x3
0x0679C00C: f60302aa  mov x22, x2
0x0679C010: f50301aa  mov x21, x1
0x0679C014: f70300aa  mov x23, x0
0x0679C018: 88010037  tbnz w8, #0, #0x679c048
0x0679C01C: e07600d0  adrp x0, #0x767a000
0x0679C020: 004c42f9  ldr x0, [x0, #0x498]
0x0679C024: 7d922797  bl #0x3180a18
0x0679C028: a07b0090  adrp x0, #0x7710000
0x0679C02C: 009844f9  ldr x0, [x0, #0x930]
0x0679C030: 7a922797  bl #0x3180a18
0x0679C034: a07b0090  adrp x0, #0x7710000
0x0679C038: 009c44f9  ldr x0, [x0, #0x938]
0x0679C03C: 77922797  bl #0x3180a18
0x0679C040: 28008052  movz w8, #0x1
0x0679C044: 08e33639  strb w8, [x24, #0xdb8]
0x0679C048: f85240f9  ldr x24, [x23, #0xa0]
0x0679C04C: 780700b4  cbz x24, #0x679c138
0x0679C050: ea7600d0  adrp x10, #0x767a000
0x0679C054: 080340f9  ldr x8, [x24]
0x0679C058: 4a4d42f9  ldr x10, [x10, #0x498]
0x0679C05C: 095d4279  ldrh w9, [x8, #0x12e]
0x0679C060: 410140f9  ldr x1, [x10]
0x0679C064: 290100b4  cbz x9, #0x679c088
0x0679C068: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679C06C: 4a210091  add x10, x10, #8
0x0679C070: 4b815ff8  ldur x11, [x10, #-8]
0x0679C074: 7f0101eb  cmp x11, x1
0x0679C078: 00010054  b.eq #0x679c098
0x0679C07C: 290500f1  subs x9, x9, #1
0x0679C080: 4a410091  add x10, x10, #0x10
0x0679C084: 61ffff54  b.ne #0x679c070
0x0679C088: 62028052  movz w2, #0x13
0x0679C08C: e00318aa  mov x0, x24
0x0679C090: a0ea2697  bl #0x3156b10
0x0679C094: 05000014  b #0x679c0a8
0x0679C098: 490140b9  ldr w9, [x10]
0x0679C09C: 294d0011  add w9, w9, #0x13
0x0679C0A0: 08d1298b  add x8, x8, w9, sxtw #4
0x0679C0A4: 00e10491  add x0, x8, #0x138
0x0679C0A8: 080840a9  ldp x8, x2, [x0]
0x0679C0AC: b97b0090  adrp x25, #0x7710000
0x0679C0B0: 399b44f9  ldr x25, [x25, #0x930]
0x0679C0B4: e00318aa  mov x0, x24
0x0679C0B8: e10316aa  mov x1, x22
0x0679C0BC: 00013fd6  blr x8
0x0679C0C0: e87240f9  ldr x8, [x23, #0xe0]
0x0679C0C4: f803002a  mov w24, w0
0x0679C0C8: c80000b4  cbz x8, #0x679c0e0
0x0679C0CC: 090d40f9  ldr x9, [x8, #0x18]
0x0679C0D0: 002140f9  ldr x0, [x8, #0x40]
0x0679C0D4: 021540f9  ldr x2, [x8, #0x28]
0x0679C0D8: e10316aa  mov x1, x22
0x0679C0DC: 20013fd6  blr x9
0x0679C0E0: 200340f9  ldr x0, [x25]
0x0679C0E4: f71640f9  ldr x23, [x23, #0x28]
0x0679C0E8: ee922797  bl #0x3180ca0
0x0679C0EC: e10316aa  mov x1, x22
0x0679C0F0: e203182a  mov w2, w24
0x0679C0F4: e30314aa  mov x3, x20
0x0679C0F8: e40315aa  mov x4, x21
0x0679C0FC: e503132a  mov w5, w19
0x0679C100: e6031faa  mov x6, xzr
0x0679C104: f90300aa  mov x25, x0
0x0679C108: c05ee197  bl #0x5ff3c08
0x0679C10C: 770100b4  cbz x23, #0x679c138
0x0679C110: a87b0090  adrp x8, #0x7710000
0x0679C114: 089d44f9  ldr x8, [x8, #0x938]
0x0679C118: e00317aa  mov x0, x23
0x0679C11C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0679C120: f65742a9  ldp x22, x21, [sp, #0x20]
0x0679C124: 020140f9  ldr x2, [x8]
0x0679C128: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0679C12C: e10319aa  mov x1, x25
0x0679C130: fe67c4a8  ldp x30, x25, [sp], #0x40
0x0679C134: 0e235817  b #0x3da4d6c
0x0679C138: dd922797  bl #0x3180cac

; RVA 0x679C13C | public void .ctor() { }
; bytes=72 sha256=7c23935e7379bd4831dd3a56f91af4cc2d70a6e7d63c3dd6f8741540c23b609b status=arm64_complete_bound indexed_start=True
0x0679C13C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0679C140: f44f01a9  stp x20, x19, [sp, #0x10]
0x0679C144: 74ac0090  adrp x20, #0x7d28000
0x0679C148: b57b0090  adrp x21, #0x7710000
0x0679C14C: 88e67639  ldrb w8, [x20, #0xdb9]
0x0679C150: b5a244f9  ldr x21, [x21, #0x940]
0x0679C154: f30300aa  mov x19, x0
0x0679C158: c8000037  tbnz w8, #0, #0x679c170
0x0679C15C: a07b0090  adrp x0, #0x7710000
0x0679C160: 00a044f9  ldr x0, [x0, #0x940]
0x0679C164: 2d922797  bl #0x3180a18
0x0679C168: 28008052  movz w8, #0x1
0x0679C16C: 88e63639  strb w8, [x20, #0xdb9]
0x0679C170: a10240f9  ldr x1, [x21]
0x0679C174: e00313aa  mov x0, x19
0x0679C178: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679C17C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679C180: 416b7617  b #0x4536e84

; RVA 0x679C184 | private int <OrderProducers>b__14_0(ProducerComponent producer) { }
; bytes=24 sha256=8e1e06d3fb8d884b9934bfd709815c3841586cab351261c12b897f1ec06736bd status=arm64_complete_bound indexed_start=True
0x0679C184: fe0f1ff8  str x30, [sp, #-0x10]!
0x0679C188: 32ffff97  bl #0x679be50
0x0679C18C: e803202a  mvn w8, w0
0x0679C190: 00010012  and w0, w8, #1
0x0679C194: fe0741f8  ldr x30, [sp], #0x10
0x0679C198: c0035fd6  ret

