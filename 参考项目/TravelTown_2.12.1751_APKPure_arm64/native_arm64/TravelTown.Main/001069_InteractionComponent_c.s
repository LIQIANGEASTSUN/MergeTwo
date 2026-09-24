; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1069 .InteractionComponent.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FD2B8 | private static void .cctor() { }
; bytes=104 sha256=752c89e3110d980052c070bc005759007b81c9cf1c2247b6c5d397057896b2fa status=arm64_complete_bound indexed_start=True
0x068FD2B8: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FD2BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FD2C0: 73a10090  adrp x19, #0x7d29000
0x068FD2C4: 547100b0  adrp x20, #0x7726000
0x068FD2C8: 68ba6239  ldrb w8, [x19, #0x8ae]
0x068FD2CC: 948a43f9  ldr x20, [x20, #0x710]
0x068FD2D0: c8000037  tbnz w8, #0, #0x68fd2e8
0x068FD2D4: 407100b0  adrp x0, #0x7726000
0x068FD2D8: 008843f9  ldr x0, [x0, #0x710]
0x068FD2DC: cf0d2297  bl #0x3180a18
0x068FD2E0: 28008052  movz w8, #0x1
0x068FD2E4: 68ba2239  strb w8, [x19, #0x8ae]
0x068FD2E8: 800240f9  ldr x0, [x20]
0x068FD2EC: 6d0e2297  bl #0x3180ca0
0x068FD2F0: e1031faa  mov x1, xzr
0x068FD2F4: f30300aa  mov x19, x0
0x068FD2F8: c174b797  bl #0x56da5fc
0x068FD2FC: 880240f9  ldr x8, [x20]
0x068FD300: e10313aa  mov x1, x19
0x068FD304: 085d40f9  ldr x8, [x8, #0xb8]
0x068FD308: 130100f9  str x19, [x8]
0x068FD30C: 880240f9  ldr x8, [x20]
0x068FD310: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FD314: 005d40f9  ldr x0, [x8, #0xb8]
0x068FD318: fe0742f8  ldr x30, [sp], #0x20
0x068FD31C: aa0d2217  b #0x31809c4

; RVA 0x68FD320 | public void .ctor() { }
; bytes=8 sha256=54cf0973b2df7b515386009f7d22146187c7393facf5a4eea18dead59793f2da status=arm64_complete_bound indexed_start=True
0x068FD320: e1031faa  mov x1, xzr
0x068FD324: b674b717  b #0x56da5fc

; RVA 0x68FD328 | internal IEnumerable<MergeItemWeakReference> <FillItemsToConsume>b__72_0(Combination interactionCostItem) { }
; bytes=24 sha256=dc66633ca55e9170c6b8d87e83efe11e1de8fa77c7871b9b415675659b6eea34 status=arm64_complete_bound indexed_start=True
0x068FD328: fe0f1ff8  str x30, [sp, #-0x10]!
0x068FD32C: 810000b4  cbz x1, #0x68fd33c
0x068FD330: 201040f9  ldr x0, [x1, #0x20]
0x068FD334: fe0741f8  ldr x30, [sp], #0x10
0x068FD338: c0035fd6  ret
0x068FD33C: 5c0e2297  bl #0x3180cac

; RVA 0x68FD340 | internal ItemMultiple <FillItemsToConsume>b__72_1(MergeItemWeakReference i) { }
; bytes=96 sha256=49d32d3da760c7ae59c2e1defcfb9e0dbd064a65540e7dfe5395256711d857ce status=arm64_complete_bound indexed_start=True
0x068FD340: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x068FD344: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FD348: 74a10090  adrp x20, #0x7d29000
0x068FD34C: 956e0090  adrp x21, #0x76cd000
0x068FD350: 88be6239  ldrb w8, [x20, #0x8af]
0x068FD354: b5be45f9  ldr x21, [x21, #0xb78]
0x068FD358: f30301aa  mov x19, x1
0x068FD35C: c8000037  tbnz w8, #0, #0x68fd374
0x068FD360: 806e0090  adrp x0, #0x76cd000
0x068FD364: 00bc45f9  ldr x0, [x0, #0xb78]
0x068FD368: ac0d2297  bl #0x3180a18
0x068FD36C: 28008052  movz w8, #0x1
0x068FD370: 88be2239  strb w8, [x20, #0x8af]
0x068FD374: a00240f9  ldr x0, [x21]
0x068FD378: 4a0e2297  bl #0x3180ca0
0x068FD37C: 22008052  movz w2, #0x1
0x068FD380: e10313aa  mov x1, x19
0x068FD384: e3031faa  mov x3, xzr
0x068FD388: f40300aa  mov x20, x0
0x068FD38C: 6bb20494  bl #0x6a29d38
0x068FD390: e00314aa  mov x0, x20
0x068FD394: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FD398: fe57c2a8  ldp x30, x21, [sp], #0x20
0x068FD39C: c0035fd6  ret

; RVA 0x68FD3A0 | internal void <TryInvokeCallback>b__74_0(Action callback) { }
; bytes=32 sha256=dd90297b6a74cd98b2d6e123f4e099a08909936c943abf4c12eb8d72576a98e8 status=arm64_complete_bound indexed_start=True
0x068FD3A0: fe0f1ff8  str x30, [sp, #-0x10]!
0x068FD3A4: c10000b4  cbz x1, #0x68fd3bc
0x068FD3A8: 220c40f9  ldr x2, [x1, #0x18]
0x068FD3AC: 202040f9  ldr x0, [x1, #0x40]
0x068FD3B0: 211440f9  ldr x1, [x1, #0x28]
0x068FD3B4: fe0741f8  ldr x30, [sp], #0x10
0x068FD3B8: 40001fd6  br x2
0x068FD3BC: 3c0e2297  bl #0x3180cac

