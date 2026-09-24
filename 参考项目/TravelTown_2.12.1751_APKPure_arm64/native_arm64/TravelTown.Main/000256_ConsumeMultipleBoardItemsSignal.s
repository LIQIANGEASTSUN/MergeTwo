; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 256 MergeEngine.Signal.Board.ConsumeMultipleBoardItemsSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF42F4 | public Dictionary<IMergeItem, List<Vector2>> get_PositionsMap() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF42F4: 000840f9  ldr x0, [x0, #0x10]
0x05FF42F8: c0035fd6  ret

; RVA 0x5FF42FC | public Nullable<BoardItemPosition> get_PreferedPosition() { }
; bytes=16 sha256=437e67642fe67803fdb5c19d1dccbc8215b704a76b8cf1b47b0fd7974bd3de61 status=arm64_complete_bound indexed_start=True
0x05FF42FC: 080c40f9  ldr x8, [x0, #0x18]
0x05FF4300: 012040b9  ldr w1, [x0, #0x20]
0x05FF4304: e00308aa  mov x0, x8
0x05FF4308: c0035fd6  ret

; RVA 0x5FF430C | public IMergeItem get_PreferedMergeItem() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x05FF430C: 001440f9  ldr x0, [x0, #0x28]
0x05FF4310: c0035fd6  ret

; RVA 0x5FF4314 | public Action get_CompleteCallback() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x05FF4314: 001840f9  ldr x0, [x0, #0x30]
0x05FF4318: c0035fd6  ret

; RVA 0x5FF431C | public Action get_FailCallback() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x05FF431C: 001c40f9  ldr x0, [x0, #0x38]
0x05FF4320: c0035fd6  ret

; RVA 0x5FF4324 | public IEnumerable<ItemMultiple> get_ItemsToConsume() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x05FF4324: 002040f9  ldr x0, [x0, #0x40]
0x05FF4328: c0035fd6  ret

; RVA 0x5FF432C | public bool get_SkipAnimations() { }
; bytes=8 sha256=078ba4becdbd72e872ae0ff730955d197071ab6ad37418e7c2e1548bed4f2dbf status=arm64_complete_bound indexed_start=True
0x05FF432C: 00204139  ldrb w0, [x0, #0x48]
0x05FF4330: c0035fd6  ret

; RVA 0x5FF4334 | public List<IdComponent> get_SelectedItemsToConsume() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x05FF4334: 002840f9  ldr x0, [x0, #0x50]
0x05FF4338: c0035fd6  ret

; RVA 0x5FF433C | public OperationContext get_Context() { }
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x05FF433C: 002c40f9  ldr x0, [x0, #0x58]
0x05FF4340: c0035fd6  ret

; RVA 0x5FF4344 | public float get_DurationMultiplier() { }
; bytes=8 sha256=cf08369c2101e6b8fa0f9d2bc8aed4336c17a317d37648fb6736bdf066960a3a status=arm64_complete_bound indexed_start=True
0x05FF4344: 006040bd  ldr s0, [x0, #0x60]
0x05FF4348: c0035fd6  ret

; RVA 0x5FF434C | public void .ctor(IEnumerable<ItemMultiple> itemsToConsume, Dictionary<IMergeItem, List<Vector2>> positionsMap, Nullable<BoardItemPosition> preferedPosition, IMergeItem preferedMergeItem, List<IdComponent> selectedItemsToConsume, Action completeCallback, Action failCallback, OperationContext context, float durationMultiplier = 1) { }
; bytes=232 sha256=10a88c27db413e717482a1eb6943a3b142ac059bb6eb8cb15c569f28a65fe6f4 status=arm64_complete_bound indexed_start=True
0x05FF434C: e80f1afc  str d8, [sp, #-0x60]!
0x05FF4350: fe0700f9  str x30, [sp, #8]
0x05FF4354: fc6f01a9  stp x28, x27, [sp, #0x10]
0x05FF4358: fa6702a9  stp x26, x25, [sp, #0x20]
0x05FF435C: f85f03a9  stp x24, x23, [sp, #0x30]
0x05FF4360: f65704a9  stp x22, x21, [sp, #0x40]
0x05FF4364: f44f05a9  stp x20, x19, [sp, #0x50]
0x05FF4368: fb6b46a9  ldp x27, x26, [sp, #0x60]
0x05FF436C: f90301aa  mov x25, x1
0x05FF4370: e1031faa  mov x1, xzr
0x05FF4374: 081ca04e  mov v8.16b, v0.16b
0x05FF4378: f30307aa  mov x19, x7
0x05FF437C: f40306aa  mov x20, x6
0x05FF4380: f50305aa  mov x21, x5
0x05FF4384: f60304aa  mov x22, x4
0x05FF4388: f70303aa  mov x23, x3
0x05FF438C: f80302aa  mov x24, x2
0x05FF4390: fc0300aa  mov x28, x0
0x05FF4394: 9a98db97  bl #0x56da5fc
0x05FF4398: e0031caa  mov x0, x28
0x05FF439C: 190c04f8  str x25, [x0, #0x40]!
0x05FF43A0: e10319aa  mov x1, x25
0x05FF43A4: 88314697  bl #0x31809c4
0x05FF43A8: e0031caa  mov x0, x28
0x05FF43AC: 180c01f8  str x24, [x0, #0x10]!
0x05FF43B0: e10318aa  mov x1, x24
0x05FF43B4: 84314697  bl #0x31809c4
0x05FF43B8: e0031caa  mov x0, x28
0x05FF43BC: 970f00f9  str x23, [x28, #0x18]
0x05FF43C0: 962300b9  str w22, [x28, #0x20]
0x05FF43C4: 158c02f8  str x21, [x0, #0x28]!
0x05FF43C8: e10315aa  mov x1, x21
0x05FF43CC: 7e314697  bl #0x31809c4
0x05FF43D0: e0031caa  mov x0, x28
0x05FF43D4: 140c05f8  str x20, [x0, #0x50]!
0x05FF43D8: e10314aa  mov x1, x20
0x05FF43DC: 7a314697  bl #0x31809c4
0x05FF43E0: e0031caa  mov x0, x28
0x05FF43E4: 130c03f8  str x19, [x0, #0x30]!
0x05FF43E8: e10313aa  mov x1, x19
0x05FF43EC: 76314697  bl #0x31809c4
0x05FF43F0: e0031caa  mov x0, x28
0x05FF43F4: 1b8c03f8  str x27, [x0, #0x38]!
0x05FF43F8: e1031baa  mov x1, x27
0x05FF43FC: 72314697  bl #0x31809c4
0x05FF4400: 9a8f05f8  str x26, [x28, #0x58]!
0x05FF4404: e0031caa  mov x0, x28
0x05FF4408: e1031aaa  mov x1, x26
0x05FF440C: 6e314697  bl #0x31809c4
0x05FF4410: 880b00bd  str s8, [x28, #8]
0x05FF4414: f44f45a9  ldp x20, x19, [sp, #0x50]
0x05FF4418: f65744a9  ldp x22, x21, [sp, #0x40]
0x05FF441C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x05FF4420: fa6742a9  ldp x26, x25, [sp, #0x20]
0x05FF4424: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x05FF4428: fe0740f9  ldr x30, [sp, #8]
0x05FF442C: e80746fc  ldr d8, [sp], #0x60
0x05FF4430: c0035fd6  ret

; RVA 0x5FF4434 | public void .ctor(List<ItemMultiple> itemsToConsume, List<IdComponent> selectedItemsToConsume, Action completeCallback, Action failCallback, OperationContext context) { }
; bytes=152 sha256=e2316cb19a0a139ed93b2d96d1ac52fabc715bad8a2a9b033775bbe7b67b2ba1 status=arm64_complete_bound indexed_start=True
0x05FF4434: fe0f1cf8  str x30, [sp, #-0x40]!
0x05FF4438: f85f01a9  stp x24, x23, [sp, #0x10]
0x05FF443C: f65702a9  stp x22, x21, [sp, #0x20]
0x05FF4440: f44f03a9  stp x20, x19, [sp, #0x30]
0x05FF4444: f70301aa  mov x23, x1
0x05FF4448: e1031faa  mov x1, xzr
0x05FF444C: f30305aa  mov x19, x5
0x05FF4450: f40304aa  mov x20, x4
0x05FF4454: f50303aa  mov x21, x3
0x05FF4458: f60302aa  mov x22, x2
0x05FF445C: f80300aa  mov x24, x0
0x05FF4460: 6798db97  bl #0x56da5fc
0x05FF4464: e00318aa  mov x0, x24
0x05FF4468: 170c04f8  str x23, [x0, #0x40]!
0x05FF446C: e10317aa  mov x1, x23
0x05FF4470: 55314697  bl #0x31809c4
0x05FF4474: 28008052  movz w8, #0x1
0x05FF4478: e00318aa  mov x0, x24
0x05FF447C: 08230139  strb w8, [x24, #0x48]
0x05FF4480: 160c05f8  str x22, [x0, #0x50]!
0x05FF4484: e10316aa  mov x1, x22
0x05FF4488: 4f314697  bl #0x31809c4
0x05FF448C: e00318aa  mov x0, x24
0x05FF4490: 150c03f8  str x21, [x0, #0x30]!
0x05FF4494: e10315aa  mov x1, x21
0x05FF4498: 4b314697  bl #0x31809c4
0x05FF449C: e00318aa  mov x0, x24
0x05FF44A0: 148c03f8  str x20, [x0, #0x38]!
0x05FF44A4: e10314aa  mov x1, x20
0x05FF44A8: 47314697  bl #0x31809c4
0x05FF44AC: 138f05f8  str x19, [x24, #0x58]!
0x05FF44B0: e00318aa  mov x0, x24
0x05FF44B4: e10313aa  mov x1, x19
0x05FF44B8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05FF44BC: f65742a9  ldp x22, x21, [sp, #0x20]
0x05FF44C0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05FF44C4: fe0744f8  ldr x30, [sp], #0x40
0x05FF44C8: 3f314617  b #0x31809c4

