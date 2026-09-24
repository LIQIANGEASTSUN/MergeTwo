; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1063 MergeEngine.ECS.Components.Items.IdComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FC434 | public override string get_ComponentKey() { }
; bytes=64 sha256=1f682cb2381e7ed9d72a2ea7dd866aba707cca633b770fc74517c53e9f858ec1 status=arm64_complete_bound indexed_start=True
0x068FC434: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FC438: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FC43C: 73a100b0  adrp x19, #0x7d29000
0x068FC440: b46a00d0  adrp x20, #0x7652000
0x068FC444: 68826239  ldrb w8, [x19, #0x8a0]
0x068FC448: 94ae42f9  ldr x20, [x20, #0x558]
0x068FC44C: c8000037  tbnz w8, #0, #0x68fc464
0x068FC450: a06a00d0  adrp x0, #0x7652000
0x068FC454: 00ac42f9  ldr x0, [x0, #0x558]
0x068FC458: 70112297  bl #0x3180a18
0x068FC45C: 28008052  movz w8, #0x1
0x068FC460: 68822239  strb w8, [x19, #0x8a0]
0x068FC464: 800240f9  ldr x0, [x20]
0x068FC468: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC46C: fe0742f8  ldr x30, [sp], #0x20
0x068FC470: c0035fd6  ret

; RVA 0x68FC474 | public string get_Uuid() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x068FC474: 001c40f9  ldr x0, [x0, #0x38]
0x068FC478: c0035fd6  ret

; RVA 0x68FC47C | public string get_Id() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x068FC47C: 001840f9  ldr x0, [x0, #0x30]
0x068FC480: c0035fd6  ret

; RVA 0x68FC484 | private void set_Id(string value) { }
; bytes=8 sha256=7a025c9f3f315fd25df8159c5b64505a30a064cfd7a5d0465f65ec4ed7eb9bad status=arm64_complete_bound indexed_start=True
0x068FC484: 010c03f8  str x1, [x0, #0x30]!
0x068FC488: 4f112217  b #0x31809c4

; RVA 0x68FC48C | public string get_UUId() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x068FC48C: 001c40f9  ldr x0, [x0, #0x38]
0x068FC490: c0035fd6  ret

; RVA 0x68FC494 | private void set_UUId(string value) { }
; bytes=8 sha256=01efd0632037c804c0d319678ceafde3c36319e653c0624987e689b84ce06db9 status=arm64_complete_bound indexed_start=True
0x068FC494: 018c03f8  str x1, [x0, #0x38]!
0x068FC498: 4b112217  b #0x31809c4

; RVA 0x68FC49C | public long get_MergedTimestamp() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x068FC49C: 002040f9  ldr x0, [x0, #0x40]
0x068FC4A0: c0035fd6  ret

; RVA 0x68FC4A4 | private void set_MergedTimestamp(long value) { }
; bytes=8 sha256=b75755e3686972b1ceb44b281dad4d5456389d773014129a5469afa046b6be45 status=arm64_complete_bound indexed_start=True
0x068FC4A4: 012000f9  str x1, [x0, #0x40]
0x068FC4A8: c0035fd6  ret

; RVA 0x68FC4AC | public long get_CreatedTimestamp() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x068FC4AC: 002440f9  ldr x0, [x0, #0x48]
0x068FC4B0: c0035fd6  ret

; RVA 0x68FC4B4 | public void set_CreatedTimestamp(long value) { }
; bytes=8 sha256=23df620cb748cd2d79c9b5740937c239993239801cafbecb2d26e4c650391fae status=arm64_complete_bound indexed_start=True
0x068FC4B4: 012400f9  str x1, [x0, #0x48]
0x068FC4B8: c0035fd6  ret

; RVA 0x68FC4BC | public long get_QueueAddedTimestamp() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x068FC4BC: 002840f9  ldr x0, [x0, #0x50]
0x068FC4C0: c0035fd6  ret

; RVA 0x68FC4C4 | public void set_QueueAddedTimestamp(long value) { }
; bytes=8 sha256=99e9c505d21440096aac9993662e282f1d229d64d16bb1c32ef23d01d84a81b2 status=arm64_complete_bound indexed_start=True
0x068FC4C4: 012800f9  str x1, [x0, #0x50]
0x068FC4C8: c0035fd6  ret

; RVA 0x68FC4CC | public bool get_SpawnedByTimeLimited() { }
; bytes=8 sha256=e4226bf913cc2fe03a1d0c71eb9ceb5327f25af7ed81c9e3bc19f7bdcf3e651c status=arm64_complete_bound indexed_start=True
0x068FC4CC: 00704139  ldrb w0, [x0, #0x5c]
0x068FC4D0: c0035fd6  ret

; RVA 0x68FC4D4 | public void set_SpawnedByTimeLimited(bool value) { }
; bytes=12 sha256=49be42d0812f504ffd330c5069d65777d4e4140acf341edd073997077c7c91fe status=arm64_complete_bound indexed_start=True
0x068FC4D4: 28000012  and w8, w1, #1
0x068FC4D8: 08700139  strb w8, [x0, #0x5c]
0x068FC4DC: c0035fd6  ret

; RVA 0x68FC4E0 | public void .ctor(IdCapability capability, Entity entity) { }
; bytes=380 sha256=4a444a51c9835379eba51756d3a5a8e60a3224feba72cfcf815a1f1172d4795a status=arm64_complete_bound indexed_start=True
0x068FC4E0: ff4301d1  sub sp, sp, #0x50
0x068FC4E4: fe5f02a9  stp x30, x23, [sp, #0x20]
0x068FC4E8: f65703a9  stp x22, x21, [sp, #0x30]
0x068FC4EC: f44f04a9  stp x20, x19, [sp, #0x40]
0x068FC4F0: 77a100b0  adrp x23, #0x7d29000
0x068FC4F4: 567100d0  adrp x22, #0x7726000
0x068FC4F8: e8866239  ldrb w8, [x23, #0x8a1]
0x068FC4FC: d66243f9  ldr x22, [x22, #0x6c0]
0x068FC500: f50302aa  mov x21, x2
0x068FC504: f40301aa  mov x20, x1
0x068FC508: f30300aa  mov x19, x0
0x068FC50C: e8010037  tbnz w8, #0, #0x68fc548
0x068FC510: 407100d0  adrp x0, #0x7726000
0x068FC514: 006443f9  ldr x0, [x0, #0x6c8]
0x068FC518: 40112297  bl #0x3180a18
0x068FC51C: 407100d0  adrp x0, #0x7726000
0x068FC520: 006843f9  ldr x0, [x0, #0x6d0]
0x068FC524: 3d112297  bl #0x3180a18
0x068FC528: 407100d0  adrp x0, #0x7726000
0x068FC52C: 006043f9  ldr x0, [x0, #0x6c0]
0x068FC530: 3a112297  bl #0x3180a18
0x068FC534: e06b00d0  adrp x0, #0x767a000
0x068FC538: 00e842f9  ldr x0, [x0, #0x5d0]
0x068FC53C: 37112297  bl #0x3180a18
0x068FC540: 28008052  movz w8, #0x1
0x068FC544: e8862239  strb w8, [x23, #0x8a1]
0x068FC548: c30240f9  ldr x3, [x22]
0x068FC54C: e00313aa  mov x0, x19
0x068FC550: e10314aa  mov x1, x20
0x068FC554: e20315aa  mov x2, x21
0x068FC558: ff7f01a9  stp xzr, xzr, [sp, #0x10]
0x068FC55C: ff0700f9  str xzr, [sp, #8]
0x068FC560: 9d206f97  bl #0x44c47d4
0x068FC564: b40700b4  cbz x20, #0x68fc658
0x068FC568: 810a40f9  ldr x1, [x20, #0x10]
0x068FC56C: e00313aa  mov x0, x19
0x068FC570: 010c03f8  str x1, [x0, #0x30]!
0x068FC574: 14112297  bl #0x31809c4
0x068FC578: 801240f9  ldr x0, [x20, #0x20]
0x068FC57C: e1031faa  mov x1, xzr
0x068FC580: 2306b097  bl #0x54fde0c
0x068FC584: 20010036  tbz w0, #0, #0x68fc5a8
0x068FC588: e0031faa  mov x0, xzr
0x068FC58C: 4747b697  bl #0x568e2a8
0x068FC590: e00701a9  stp x0, x1, [sp, #0x10]
0x068FC594: e0430091  add x0, sp, #0x10
0x068FC598: e1031faa  mov x1, xzr
0x068FC59C: a84fb697  bl #0x569043c
0x068FC5A0: e10300aa  mov x1, x0
0x068FC5A4: 02000014  b #0x68fc5ac
0x068FC5A8: 811240f9  ldr x1, [x20, #0x20]
0x068FC5AC: e00313aa  mov x0, x19
0x068FC5B0: 018c03f8  str x1, [x0, #0x38]!
0x068FC5B4: 04112297  bl #0x31809c4
0x068FC5B8: 880e40f9  ldr x8, [x20, #0x18]
0x068FC5BC: 1f1d0072  tst w8, #0xff
0x068FC5C0: e80700f9  str x8, [sp, #8]
0x068FC5C4: 20010054  b.eq #0x68fc5e8
0x068FC5C8: 497100d0  adrp x9, #0x7726000
0x068FC5CC: 296943f9  ldr x9, [x9, #0x6d0]
0x068FC5D0: e0230091  add x0, sp, #8
0x068FC5D4: e80700f9  str x8, [sp, #8]
0x068FC5D8: 210140f9  ldr x1, [x9]
0x068FC5DC: 36fd6597  bl #0x427bab4
0x068FC5E0: 605a00b9  str w0, [x19, #0x58]
0x068FC5E4: 02000014  b #0x68fc5ec
0x068FC5E8: 605a40b9  ldr w0, [x19, #0x58]
0x068FC5EC: 1f040071  cmp w0, #1
0x068FC5F0: 80020054  b.eq #0x68fc640
0x068FC5F4: f46b00d0  adrp x20, #0x767a000
0x068FC5F8: 94ea42f9  ldr x20, [x20, #0x5d0]
0x068FC5FC: 800240f9  ldr x0, [x20]
0x068FC600: 08e040b9  ldr w8, [x0, #0xe0]
0x068FC604: 48000035  cbnz w8, #0x68fc60c
0x068FC608: 61112297  bl #0x3180b8c
0x068FC60C: e0031faa  mov x0, xzr
0x068FC610: 5654fd97  bl #0x6851768
0x068FC614: 685a40b9  ldr w8, [x19, #0x58]
0x068FC618: 602600f9  str x0, [x19, #0x48]
0x068FC61C: 1f090071  cmp w8, #2
0x068FC620: 01010054  b.ne #0x68fc640
0x068FC624: 800240f9  ldr x0, [x20]
0x068FC628: 08e040b9  ldr w8, [x0, #0xe0]
0x068FC62C: 48000035  cbnz w8, #0x68fc634
0x068FC630: 57112297  bl #0x3180b8c
0x068FC634: e0031faa  mov x0, xzr
0x068FC638: 4c54fd97  bl #0x6851768
0x068FC63C: 602200f9  str x0, [x19, #0x40]
0x068FC640: 7f2a00f9  str xzr, [x19, #0x50]
0x068FC644: f44f44a9  ldp x20, x19, [sp, #0x40]
0x068FC648: f65743a9  ldp x22, x21, [sp, #0x30]
0x068FC64C: fe5f42a9  ldp x30, x23, [sp, #0x20]
0x068FC650: ff430191  add sp, sp, #0x50
0x068FC654: c0035fd6  ret
0x068FC658: 95112297  bl #0x3180cac

; RVA 0x68FC65C | public override void LoadComponent(ItemPayloadBase componentData) { }
; bytes=428 sha256=e04e9aafcff1da70feffcbabef6e69a1d1300f5a9116667f205aa067b63c74b2 status=arm64_complete_bound indexed_start=True
0x068FC65C: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x068FC660: f85f01a9  stp x24, x23, [sp, #0x10]
0x068FC664: f65702a9  stp x22, x21, [sp, #0x20]
0x068FC668: f44f03a9  stp x20, x19, [sp, #0x30]
0x068FC66C: 75a100b0  adrp x21, #0x7d29000
0x068FC670: a88a6239  ldrb w8, [x21, #0x8a2]
0x068FC674: f30301aa  mov x19, x1
0x068FC678: f40300aa  mov x20, x0
0x068FC67C: e8010037  tbnz w8, #0, #0x68fc6b8
0x068FC680: 806a00f0  adrp x0, #0x764f000
0x068FC684: 00ac43f9  ldr x0, [x0, #0x758]
0x068FC688: e4102297  bl #0x3180a18
0x068FC68C: 207000b0  adrp x0, #0x7701000
0x068FC690: 00f046f9  ldr x0, [x0, #0xde0]
0x068FC694: e1102297  bl #0x3180a18
0x068FC698: e06b00d0  adrp x0, #0x767a000
0x068FC69C: 005042f9  ldr x0, [x0, #0x4a0]
0x068FC6A0: de102297  bl #0x3180a18
0x068FC6A4: 806a00d0  adrp x0, #0x764e000
0x068FC6A8: 00ac42f9  ldr x0, [x0, #0x558]
0x068FC6AC: db102297  bl #0x3180a18
0x068FC6B0: 28008052  movz w8, #0x1
0x068FC6B4: a88a2239  strb w8, [x21, #0x8a2]
0x068FC6B8: 530a00b4  cbz x19, #0x68fc800
0x068FC6BC: 610a40f9  ldr x1, [x19, #0x10]
0x068FC6C0: 377000b0  adrp x23, #0x7701000
0x068FC6C4: 986a00d0  adrp x24, #0x764e000
0x068FC6C8: f7f246f9  ldr x23, [x23, #0xde0]
0x068FC6CC: 18af42f9  ldr x24, [x24, #0x558]
0x068FC6D0: e00314aa  mov x0, x20
0x068FC6D4: 010c03f8  str x1, [x0, #0x30]!
0x068FC6D8: bb102297  bl #0x31809c4
0x068FC6DC: 600e40f9  ldr x0, [x19, #0x18]
0x068FC6E0: e1031faa  mov x1, xzr
0x068FC6E4: f2ecaf97  bl #0x54f7aac
0x068FC6E8: a0000037  tbnz w0, #0, #0x68fc6fc
0x068FC6EC: 610e40f9  ldr x1, [x19, #0x18]
0x068FC6F0: e00314aa  mov x0, x20
0x068FC6F4: 018c03f8  str x1, [x0, #0x38]!
0x068FC6F8: b3102297  bl #0x31809c4
0x068FC6FC: 000340f9  ldr x0, [x24]
0x068FC700: 996a00f0  adrp x25, #0x764f000
0x068FC704: f50240f9  ldr x21, [x23]
0x068FC708: 08e040b9  ldr w8, [x0, #0xe0]
0x068FC70C: 39af43f9  ldr x25, [x25, #0x758]
0x068FC710: 48000035  cbnz w8, #0x68fc718
0x068FC714: 1e112297  bl #0x3180b8c
0x068FC718: e00315aa  mov x0, x21
0x068FC71C: e1031faa  mov x1, xzr
0x068FC720: a9a2b697  bl #0x56a51c4
0x068FC724: 280340f9  ldr x8, [x25]
0x068FC728: 751240f9  ldr x21, [x19, #0x20]
0x068FC72C: f60300aa  mov x22, x0
0x068FC730: 09e140b9  ldr w9, [x8, #0xe0]
0x068FC734: 69000035  cbnz w9, #0x68fc740
0x068FC738: e00308aa  mov x0, x8
0x068FC73C: 14112297  bl #0x3180b8c
0x068FC740: e00316aa  mov x0, x22
0x068FC744: e10315aa  mov x1, x21
0x068FC748: e2031faa  mov x2, xzr
0x068FC74C: 3842b797  bl #0x56cd02c
0x068FC750: 00040036  tbz w0, #0, #0x68fc7d0
0x068FC754: 000340f9  ldr x0, [x24]
0x068FC758: f50240f9  ldr x21, [x23]
0x068FC75C: 08e040b9  ldr w8, [x0, #0xe0]
0x068FC760: 48000035  cbnz w8, #0x68fc768
0x068FC764: 0a112297  bl #0x3180b8c
0x068FC768: e00315aa  mov x0, x21
0x068FC76C: e1031faa  mov x1, xzr
0x068FC770: 95a2b697  bl #0x56a51c4
0x068FC774: 280340f9  ldr x8, [x25]
0x068FC778: 751240f9  ldr x21, [x19, #0x20]
0x068FC77C: f60300aa  mov x22, x0
0x068FC780: 09e140b9  ldr w9, [x8, #0xe0]
0x068FC784: 69000035  cbnz w9, #0x68fc790
0x068FC788: e00308aa  mov x0, x8
0x068FC78C: 00112297  bl #0x3180b8c
0x068FC790: e00316aa  mov x0, x22
0x068FC794: e10315aa  mov x1, x21
0x068FC798: e2031faa  mov x2, xzr
0x068FC79C: 0439b797  bl #0x56cabac
0x068FC7A0: 000300b4  cbz x0, #0x68fc800
0x068FC7A4: e86b00d0  adrp x8, #0x767a000
0x068FC7A8: 085142f9  ldr x8, [x8, #0x4a0]
0x068FC7AC: 090040f9  ldr x9, [x0]
0x068FC7B0: 010140f9  ldr x1, [x8]
0x068FC7B4: 282140f9  ldr x8, [x9, #0x40]
0x068FC7B8: 292040f9  ldr x9, [x1, #0x40]
0x068FC7BC: 1f0109eb  cmp x8, x9
0x068FC7C0: 21020054  b.ne #0x68fc804
0x068FC7C4: f5102297  bl #0x3180b98
0x068FC7C8: 080040b9  ldr w8, [x0]
0x068FC7CC: 02000014  b #0x68fc7d4
0x068FC7D0: 28008052  movz w8, #0x1
0x068FC7D4: 885a00b9  str w8, [x20, #0x58]
0x068FC7D8: 6082c23c  ldur q0, [x19, #0x28]
0x068FC7DC: f65742a9  ldp x22, x21, [sp, #0x20]
0x068FC7E0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x068FC7E4: 0040006e  ext v0.16b, v0.16b, v0.16b, #8
0x068FC7E8: 8012803d  str q0, [x20, #0x40]
0x068FC7EC: 681e40f9  ldr x8, [x19, #0x38]
0x068FC7F0: 882a00f9  str x8, [x20, #0x50]
0x068FC7F4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x068FC7F8: fe67c4a8  ldp x30, x25, [sp], #0x40
0x068FC7FC: c0035fd6  ret
0x068FC800: 2b112297  bl #0x3180cac
0x068FC804: 11122297  bl #0x3181048

; RVA 0x68FC808 | protected override void OnBeforeSerialize() { }
; bytes=136 sha256=abd9f09d0533ec1b145e5974ff9564492821a5f25b037c407a42713e0d141fdf status=arm64_complete_bound indexed_start=True
0x068FC808: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FC80C: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FC810: 74a100b0  adrp x20, #0x7d29000
0x068FC814: 888e6239  ldrb w8, [x20, #0x8a3]
0x068FC818: f30300aa  mov x19, x0
0x068FC81C: c8000037  tbnz w8, #0, #0x68fc834
0x068FC820: 407100d0  adrp x0, #0x7726000
0x068FC824: 006c43f9  ldr x0, [x0, #0x6d8]
0x068FC828: 7c102297  bl #0x3180a18
0x068FC82C: 28008052  movz w8, #0x1
0x068FC830: 888e2239  strb w8, [x20, #0x8a3]
0x068FC834: 601640f9  ldr x0, [x19, #0x28]
0x068FC838: a00200b4  cbz x0, #0x68fc88c
0x068FC83C: 611a40f9  ldr x1, [x19, #0x30]
0x068FC840: 010c01f8  str x1, [x0, #0x10]!
0x068FC844: 60102297  bl #0x31809c4
0x068FC848: 601640f9  ldr x0, [x19, #0x28]
0x068FC84C: 000200b4  cbz x0, #0x68fc88c
0x068FC850: 611e40f9  ldr x1, [x19, #0x38]
0x068FC854: 018c01f8  str x1, [x0, #0x18]!
0x068FC858: 5b102297  bl #0x31809c4
0x068FC85C: 681640f9  ldr x8, [x19, #0x28]
0x068FC860: 680100b4  cbz x8, #0x68fc88c
0x068FC864: 695a40b9  ldr w9, [x19, #0x58]
0x068FC868: 092100b9  str w9, [x8, #0x20]
0x068FC86C: 6012c03d  ldr q0, [x19, #0x40]
0x068FC870: 0040006e  ext v0.16b, v0.16b, v0.16b, #8
0x068FC874: 0081823c  stur q0, [x8, #0x28]
0x068FC878: 692a40f9  ldr x9, [x19, #0x50]
0x068FC87C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC880: 091d00f9  str x9, [x8, #0x38]
0x068FC884: fe0742f8  ldr x30, [sp], #0x20
0x068FC888: c0035fd6  ret
0x068FC88C: 08112297  bl #0x3180cac

