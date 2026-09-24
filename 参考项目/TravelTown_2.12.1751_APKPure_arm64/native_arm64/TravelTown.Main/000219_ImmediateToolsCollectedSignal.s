; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 219 MergeEngine.Signal.Items.ImmediateToolsCollectedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3654 | public Vector3 get_StartPosition() { }
; bytes=12 sha256=1f3f16aac9672c3f51e66182590fd404ca0c75c6f205eafa38d4f53dacb9777f status=arm64_complete_bound indexed_start=True
0x05FF3654: 0004432d  ldp s0, s1, [x0, #0x18]
0x05FF3658: 022040bd  ldr s2, [x0, #0x20]
0x05FF365C: c0035fd6  ret

; RVA 0x5FF3660 | public Action get_OnAllToolsReachedTarget() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x05FF3660: 001440f9  ldr x0, [x0, #0x28]
0x05FF3664: c0035fd6  ret

; RVA 0x5FF3668 | public void .ctor(List<ValueTuple<IMergeItem, ResourceMultiple>> toolsWithAnimationData, Vector3 startPosition, Action onAllToolsReachedTarget) { }
; bytes=104 sha256=63102df441c488a9caad29202a2a8acb757aaa2ed4e330c9638ce29e72cf2149 status=arm64_complete_bound indexed_start=True
0x05FF3668: ea0f1cfc  str d10, [sp, #-0x40]!
0x05FF366C: e923016d  stp d9, d8, [sp, #0x10]
0x05FF3670: fe5702a9  stp x30, x21, [sp, #0x20]
0x05FF3674: f44f03a9  stp x20, x19, [sp, #0x30]
0x05FF3678: f40301aa  mov x20, x1
0x05FF367C: e1031faa  mov x1, xzr
0x05FF3680: f30302aa  mov x19, x2
0x05FF3684: 481ca24e  mov v8.16b, v2.16b
0x05FF3688: 291ca14e  mov v9.16b, v1.16b
0x05FF368C: 0a1ca04e  mov v10.16b, v0.16b
0x05FF3690: f50300aa  mov x21, x0
0x05FF3694: da9bdb97  bl #0x56da5fc
0x05FF3698: e00315aa  mov x0, x21
0x05FF369C: 140c01f8  str x20, [x0, #0x10]!
0x05FF36A0: e10314aa  mov x1, x20
0x05FF36A4: c8344697  bl #0x31809c4
0x05FF36A8: b38e02f8  str x19, [x21, #0x28]!
0x05FF36AC: aa263e2d  stp s10, s9, [x21, #-0x10]
0x05FF36B0: a8821fbc  stur s8, [x21, #-8]
0x05FF36B4: e00315aa  mov x0, x21
0x05FF36B8: e10313aa  mov x1, x19
0x05FF36BC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05FF36C0: fe5742a9  ldp x30, x21, [sp, #0x20]
0x05FF36C4: e923416d  ldp d9, d8, [sp, #0x10]
0x05FF36C8: ea0744fc  ldr d10, [sp], #0x40
0x05FF36CC: be344617  b #0x31809c4

