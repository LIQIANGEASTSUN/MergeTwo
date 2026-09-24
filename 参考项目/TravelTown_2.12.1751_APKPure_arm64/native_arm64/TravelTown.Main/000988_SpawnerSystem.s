; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 988 MergeEngine.ECS.Systems.Items.Producers.SpawnerSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x679C31C | public override SystemPriorities get_Priority() { }
; bytes=8 sha256=479964d8d31378e02d0921c0d7b354379428cd2cc3a8563b37218ba5ca2081f7 status=arm64_complete_bound indexed_start=True
0x0679C31C: c0018052  movz w0, #0xe
0x0679C320: c0035fd6  ret

; RVA 0x679C324 | protected override ItemOrigin get_ItemOrigin() { }
; bytes=8 sha256=866b82fb6649dcf0f7873c61006d47004b1074ea9b382227c4ab724c93f547f7 status=arm64_complete_bound indexed_start=True
0x0679C324: 80008052  movz w0, #0x4
0x0679C328: c0035fd6  ret

; RVA 0x679C32C | protected override IEnumerable<SpawnerComponent> OnWillProcessComponents(ReadOnlyCollection<SpawnerComponent> components) { }
; bytes=88 sha256=f4a0b62b64b7c522a1a7aa540f9c5ae55dce584059a5440e130f4208bbad57eb status=arm64_complete_bound indexed_start=True
0x0679C32C: fe0f1df8  str x30, [sp, #-0x30]!
0x0679C330: f65701a9  stp x22, x21, [sp, #0x10]
0x0679C334: f44f02a9  stp x20, x19, [sp, #0x20]
0x0679C338: 75ac0090  adrp x21, #0x7d28000
0x0679C33C: b67b0090  adrp x22, #0x7710000
0x0679C340: a8f27639  ldrb w8, [x21, #0xdbc]
0x0679C344: d6aa44f9  ldr x22, [x22, #0x950]
0x0679C348: f30301aa  mov x19, x1
0x0679C34C: f40300aa  mov x20, x0
0x0679C350: c8000037  tbnz w8, #0, #0x679c368
0x0679C354: a07b0090  adrp x0, #0x7710000
0x0679C358: 00a844f9  ldr x0, [x0, #0x950]
0x0679C35C: af912797  bl #0x3180a18
0x0679C360: 28008052  movz w8, #0x1
0x0679C364: a8f23639  strb w8, [x21, #0xdbc]
0x0679C368: c20240f9  ldr x2, [x22]
0x0679C36C: e00314aa  mov x0, x20
0x0679C370: e10313aa  mov x1, x19
0x0679C374: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0679C378: f65741a9  ldp x22, x21, [sp, #0x10]
0x0679C37C: fe0743f8  ldr x30, [sp], #0x30
0x0679C380: b56a4d17  b #0x3af6e54

; RVA 0x679C384 | protected override void ProcessComponent(SpawnerComponent spawner) { }
; bytes=376 sha256=8e0fe8976ac4446ed860affa15c1ad131337b6212c59852da811f496851e1164 status=arm64_complete_bound indexed_start=True
0x0679C384: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0679C388: f44f01a9  stp x20, x19, [sp, #0x10]
0x0679C38C: 75ac0090  adrp x21, #0x7d28000
0x0679C390: a8f67639  ldrb w8, [x21, #0xdbd]
0x0679C394: f30301aa  mov x19, x1
0x0679C398: f40300aa  mov x20, x0
0x0679C39C: e8010037  tbnz w8, #0, #0x679c3d8
0x0679C3A0: 407a00d0  adrp x0, #0x76e6000
0x0679C3A4: 00b043f9  ldr x0, [x0, #0x760]
0x0679C3A8: 9c912797  bl #0x3180a18
0x0679C3AC: a07b0090  adrp x0, #0x7710000
0x0679C3B0: 00ac44f9  ldr x0, [x0, #0x958]
0x0679C3B4: 99912797  bl #0x3180a18
0x0679C3B8: a07b0090  adrp x0, #0x7710000
0x0679C3BC: 00b044f9  ldr x0, [x0, #0x960]
0x0679C3C0: 96912797  bl #0x3180a18
0x0679C3C4: a07b0090  adrp x0, #0x7710000
0x0679C3C8: 00b444f9  ldr x0, [x0, #0x968]
0x0679C3CC: 93912797  bl #0x3180a18
0x0679C3D0: 28008052  movz w8, #0x1
0x0679C3D4: a8f63639  strb w8, [x21, #0xdbd]
0x0679C3D8: 130900b4  cbz x19, #0x679c4f8
0x0679C3DC: 487a00d0  adrp x8, #0x76e6000
0x0679C3E0: 08b143f9  ldr x8, [x8, #0x760]
0x0679C3E4: e00313aa  mov x0, x19
0x0679C3E8: 010140f9  ldr x1, [x8]
0x0679C3EC: 0c455197  bl #0x3bed81c
0x0679C3F0: 685e40b9  ldr w8, [x19, #0x5c]
0x0679C3F4: f50300aa  mov x21, x0
0x0679C3F8: 1f050071  cmp w8, #1
0x0679C3FC: 0b010054  b.lt #0x679c41c
0x0679C400: a87b0090  adrp x8, #0x7710000
0x0679C404: 08b144f9  ldr x8, [x8, #0x960]
0x0679C408: e00314aa  mov x0, x20
0x0679C40C: e10313aa  mov x1, x19
0x0679C410: 020140f9  ldr x2, [x8]
0x0679C414: 51697697  bl #0x4536958
0x0679C418: 60000036  tbz w0, #0, #0x679c424
0x0679C41C: 150300b5  cbnz x21, #0x679c47c
0x0679C420: 36000014  b #0x679c4f8
0x0679C424: b50600b4  cbz x21, #0x679c4f8
0x0679C428: a8c24039  ldrb w8, [x21, #0x30]
0x0679C42C: 88020035  cbnz w8, #0x679c47c
0x0679C430: a8564139  ldrb w8, [x21, #0x55]
0x0679C434: 48020035  cbnz w8, #0x679c47c
0x0679C438: 804e40f9  ldr x0, [x20, #0x98]
0x0679C43C: e00500b4  cbz x0, #0x679c4f8
0x0679C440: e10315aa  mov x1, x21
0x0679C444: e2031f2a  mov w2, wzr
0x0679C448: e3031faa  mov x3, xzr
0x0679C44C: e4031faa  mov x4, xzr
0x0679C450: e5031faa  mov x5, xzr
0x0679C454: ba8ceb97  bl #0x627f73c
0x0679C458: 20010036  tbz w0, #0, #0x679c47c
0x0679C45C: e00314aa  mov x0, x20
0x0679C460: e10313aa  mov x1, x19
0x0679C464: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679C468: 28008052  movz w8, #0x1
0x0679C46C: a8c20039  strb w8, [x21, #0x30]
0x0679C470: e20315aa  mov x2, x21
0x0679C474: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679C478: 21000014  b #0x679c4fc
0x0679C47C: a8c24039  ldrb w8, [x21, #0x30]
0x0679C480: 68030034  cbz w8, #0x679c4ec
0x0679C484: 685e40b9  ldr w8, [x19, #0x5c]
0x0679C488: 1f010071  cmp w8, #0
0x0679C48C: 2d020054  b.le #0x679c4d0
0x0679C490: 68224239  ldrb w8, [x19, #0x88]
0x0679C494: a8020035  cbnz w8, #0x679c4e8
0x0679C498: 804e40f9  ldr x0, [x20, #0x98]
0x0679C49C: e00200b4  cbz x0, #0x679c4f8
0x0679C4A0: 22008052  movz w2, #0x1
0x0679C4A4: e10315aa  mov x1, x21
0x0679C4A8: e3031faa  mov x3, xzr
0x0679C4AC: e4031faa  mov x4, xzr
0x0679C4B0: e5031faa  mov x5, xzr
0x0679C4B4: a28ceb97  bl #0x627f73c
0x0679C4B8: 80010036  tbz w0, #0, #0x679c4e8
0x0679C4BC: e00314aa  mov x0, x20
0x0679C4C0: e10313aa  mov x1, x19
0x0679C4C4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679C4C8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679C4CC: c7000014  b #0x679c7e8
0x0679C4D0: a87b0090  adrp x8, #0x7710000
0x0679C4D4: 08ad44f9  ldr x8, [x8, #0x958]
0x0679C4D8: e00314aa  mov x0, x20
0x0679C4DC: e10313aa  mov x1, x19
0x0679C4E0: 020140f9  ldr x2, [x8]
0x0679C4E4: 47697697  bl #0x4536a00
0x0679C4E8: bfc20039  strb wzr, [x21, #0x30]
0x0679C4EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679C4F0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679C4F4: c0035fd6  ret
0x0679C4F8: ed912797  bl #0x3180cac

; RVA 0x679C7E8 | private void TryForceSpawn(SpawnerComponent spawner) { }
; bytes=336 sha256=dafe193326d0f5692c0746fedabb64598e91d875609a24676ace6e892b6e6a5d status=arm64_complete_bound indexed_start=True
0x0679C7E8: fe0f1df8  str x30, [sp, #-0x30]!
0x0679C7EC: f65701a9  stp x22, x21, [sp, #0x10]
0x0679C7F0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0679C7F4: 75ac0090  adrp x21, #0x7d28000
0x0679C7F8: a8fa7639  ldrb w8, [x21, #0xdbe]
0x0679C7FC: f40301aa  mov x20, x1
0x0679C800: f30300aa  mov x19, x0
0x0679C804: e8010037  tbnz w8, #0, #0x679c840
0x0679C808: 00770090  adrp x0, #0x767c000
0x0679C80C: 004441f9  ldr x0, [x0, #0x288]
0x0679C810: 82902797  bl #0x3180a18
0x0679C814: 407a00d0  adrp x0, #0x76e6000
0x0679C818: 00b043f9  ldr x0, [x0, #0x760]
0x0679C81C: 7f902797  bl #0x3180a18
0x0679C820: c07900f0  adrp x0, #0x76d7000
0x0679C824: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0679C828: 7c902797  bl #0x3180a18
0x0679C82C: 00770090  adrp x0, #0x767c000
0x0679C830: 004841f9  ldr x0, [x0, #0x290]
0x0679C834: 79902797  bl #0x3180a18
0x0679C838: 28008052  movz w8, #0x1
0x0679C83C: a8fa3639  strb w8, [x21, #0xdbe]
0x0679C840: b40700b4  cbz x20, #0x679c934
0x0679C844: c87900f0  adrp x8, #0x76d7000
0x0679C848: 08dd42f9  ldr x8, [x8, #0x5b8]
0x0679C84C: 557a00d0  adrp x21, #0x76e6000
0x0679C850: e00314aa  mov x0, x20
0x0679C854: 010140f9  ldr x1, [x8]
0x0679C858: b5b243f9  ldr x21, [x21, #0x760]
0x0679C85C: f0435197  bl #0x3bed81c
0x0679C860: a10240f9  ldr x1, [x21]
0x0679C864: f50300aa  mov x21, x0
0x0679C868: e00314aa  mov x0, x20
0x0679C86C: ec435197  bl #0x3bed81c
0x0679C870: 684a40f9  ldr x8, [x19, #0x90]
0x0679C874: 080600b4  cbz x8, #0x679c934
0x0679C878: f60300aa  mov x22, x0
0x0679C87C: e00308aa  mov x0, x8
0x0679C880: e1031faa  mov x1, xzr
0x0679C884: 5b2bfb97  bl #0x66675f0
0x0679C888: 00020034  cbz w0, #0x679c8c8
0x0679C88C: 550500b4  cbz x21, #0x679c934
0x0679C890: 604a40f9  ldr x0, [x19, #0x90]
0x0679C894: 000500b4  cbz x0, #0x679c934
0x0679C898: a11a40f9  ldr x1, [x21, #0x30]
0x0679C89C: e2031faa  mov x2, xzr
0x0679C8A0: e3031faa  mov x3, xzr
0x0679C8A4: f234fb97  bl #0x6669c6c
0x0679C8A8: e20300aa  mov x2, x0
0x0679C8AC: e00313aa  mov x0, x19
0x0679C8B0: e10314aa  mov x1, x20
0x0679C8B4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0679C8B8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0679C8BC: 23008052  movz w3, #0x1
0x0679C8C0: fe0743f8  ldr x30, [sp], #0x30
0x0679C8C4: 1d000014  b #0x679c938
0x0679C8C8: 760300b4  cbz x22, #0x679c934
0x0679C8CC: dfc20039  strb wzr, [x22, #0x30]
0x0679C8D0: 350300b4  cbz x21, #0x679c934
0x0679C8D4: 08770090  adrp x8, #0x767c000
0x0679C8D8: 731640f9  ldr x19, [x19, #0x28]
0x0679C8DC: b51a40f9  ldr x21, [x21, #0x30]
0x0679C8E0: 084541f9  ldr x8, [x8, #0x288]
0x0679C8E4: 000140f9  ldr x0, [x8]
0x0679C8E8: ee902797  bl #0x3180ca0
0x0679C8EC: c2008052  movz w2, #0x6
0x0679C8F0: e10315aa  mov x1, x21
0x0679C8F4: e3031faa  mov x3, xzr
0x0679C8F8: e4031f2a  mov w4, wzr
0x0679C8FC: e5031f2a  mov w5, wzr
0x0679C900: e6031faa  mov x6, xzr
0x0679C904: f40300aa  mov x20, x0
0x0679C908: 4838ff97  bl #0x676aa28
0x0679C90C: 530100b4  cbz x19, #0x679c934
0x0679C910: 08770090  adrp x8, #0x767c000
0x0679C914: 084941f9  ldr x8, [x8, #0x290]
0x0679C918: e00313aa  mov x0, x19
0x0679C91C: e10314aa  mov x1, x20
0x0679C920: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0679C924: 020140f9  ldr x2, [x8]
0x0679C928: f65741a9  ldp x22, x21, [sp, #0x10]
0x0679C92C: fe0743f8  ldr x30, [sp], #0x30
0x0679C930: 0f215817  b #0x3da4d6c
0x0679C934: de902797  bl #0x3180cac

; RVA 0x679C4FC | private void TrySpawn(SpawnerComponent spawner, InteractionComponent interaction) { }
; bytes=748 sha256=a9c0c21760e95df830de34a39cf5267c188d74d78ccadc98db78decada82af36 status=arm64_complete_bound indexed_start=True
0x0679C4FC: fe0f1cf8  str x30, [sp, #-0x40]!
0x0679C500: f85f01a9  stp x24, x23, [sp, #0x10]
0x0679C504: f65702a9  stp x22, x21, [sp, #0x20]
0x0679C508: f44f03a9  stp x20, x19, [sp, #0x30]
0x0679C50C: 76ac0090  adrp x22, #0x7d28000
0x0679C510: c8fe7639  ldrb w8, [x22, #0xdbf]
0x0679C514: f50302aa  mov x21, x2
0x0679C518: f30301aa  mov x19, x1
0x0679C51C: f40300aa  mov x20, x0
0x0679C520: 88040037  tbnz w8, #0, #0x679c5b0
0x0679C524: e07600f0  adrp x0, #0x767b000
0x0679C528: 00cc47f9  ldr x0, [x0, #0xf98]
0x0679C52C: 3b912797  bl #0x3180a18
0x0679C530: 407a00d0  adrp x0, #0x76e6000
0x0679C534: 00b043f9  ldr x0, [x0, #0x760]
0x0679C538: 38912797  bl #0x3180a18
0x0679C53C: e07600f0  adrp x0, #0x767b000
0x0679C540: 00d047f9  ldr x0, [x0, #0xfa0]
0x0679C544: 35912797  bl #0x3180a18
0x0679C548: c07900f0  adrp x0, #0x76d7000
0x0679C54C: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0679C550: 32912797  bl #0x3180a18
0x0679C554: c07900f0  adrp x0, #0x76d7000
0x0679C558: 00c442f9  ldr x0, [x0, #0x588]
0x0679C55C: 2f912797  bl #0x3180a18
0x0679C560: a07b0090  adrp x0, #0x7710000
0x0679C564: 00b844f9  ldr x0, [x0, #0x970]
0x0679C568: 2c912797  bl #0x3180a18
0x0679C56C: 407b00f0  adrp x0, #0x7707000
0x0679C570: 002c47f9  ldr x0, [x0, #0xe58]
0x0679C574: 29912797  bl #0x3180a18
0x0679C578: 20770090  adrp x0, #0x7680000
0x0679C57C: 006840f9  ldr x0, [x0, #0xd0]
0x0679C580: 26912797  bl #0x3180a18
0x0679C584: a07b0090  adrp x0, #0x7710000
0x0679C588: 00bc44f9  ldr x0, [x0, #0x978]
0x0679C58C: 23912797  bl #0x3180a18
0x0679C590: 007700d0  adrp x0, #0x767e000
0x0679C594: 005c46f9  ldr x0, [x0, #0xcb8]
0x0679C598: 20912797  bl #0x3180a18
0x0679C59C: a07b0090  adrp x0, #0x7710000
0x0679C5A0: 00c044f9  ldr x0, [x0, #0x980]
0x0679C5A4: 1d912797  bl #0x3180a18
0x0679C5A8: 28008052  movz w8, #0x1
0x0679C5AC: c8fe3639  strb w8, [x22, #0xdbf]
0x0679C5B0: b31100b4  cbz x19, #0x679c7e4
0x0679C5B4: c87900f0  adrp x8, #0x76d7000
0x0679C5B8: 08dd42f9  ldr x8, [x8, #0x5b8]
0x0679C5BC: d67900f0  adrp x22, #0x76d7000
0x0679C5C0: e00313aa  mov x0, x19
0x0679C5C4: 010140f9  ldr x1, [x8]
0x0679C5C8: d6c642f9  ldr x22, [x22, #0x588]
0x0679C5CC: 94445197  bl #0x3bed81c
0x0679C5D0: c10240f9  ldr x1, [x22]
0x0679C5D4: f70300aa  mov x23, x0
0x0679C5D8: e00313aa  mov x0, x19
0x0679C5DC: 90445197  bl #0x3bed81c
0x0679C5E0: 884a40f9  ldr x8, [x20, #0x90]
0x0679C5E4: 081000b4  cbz x8, #0x679c7e4
0x0679C5E8: f60300aa  mov x22, x0
0x0679C5EC: e00308aa  mov x0, x8
0x0679C5F0: e1031faa  mov x1, xzr
0x0679C5F4: ff2bfb97  bl #0x66675f0
0x0679C5F8: e0000034  cbz w0, #0x679c614
0x0679C5FC: e87600f0  adrp x8, #0x767b000
0x0679C600: 08d147f9  ldr x8, [x8, #0xfa0]
0x0679C604: e00313aa  mov x0, x19
0x0679C608: 010140f9  ldr x1, [x8]
0x0679C60C: 84445197  bl #0x3bed81c
0x0679C610: 000100b4  cbz x0, #0x679c630
0x0679C614: 950e00b4  cbz x21, #0x679c7e4
0x0679C618: bfc20039  strb wzr, [x21, #0x30]
0x0679C61C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0679C620: f65742a9  ldp x22, x21, [sp, #0x20]
0x0679C624: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0679C628: fe0744f8  ldr x30, [sp], #0x40
0x0679C62C: c0035fd6  ret
0x0679C630: 68224239  ldrb w8, [x19, #0x88]
0x0679C634: 08010034  cbz w8, #0x679c654
0x0679C638: e00314aa  mov x0, x20
0x0679C63C: e10313aa  mov x1, x19
0x0679C640: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0679C644: f65742a9  ldp x22, x21, [sp, #0x20]
0x0679C648: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0679C64C: fe0744f8  ldr x30, [sp], #0x40
0x0679C650: 66000014  b #0x679c7e8
0x0679C654: 970c00b4  cbz x23, #0x679c7e4
0x0679C658: 487b00f0  adrp x8, #0x7707000
0x0679C65C: 954a40f9  ldr x21, [x20, #0x90]
0x0679C660: f71a40f9  ldr x23, [x23, #0x30]
0x0679C664: 082d47f9  ldr x8, [x8, #0xe58]
0x0679C668: 000140f9  ldr x0, [x8]
0x0679C66C: 8d912797  bl #0x3180ca0
0x0679C670: a87b0090  adrp x8, #0x7710000
0x0679C674: 08c144f9  ldr x8, [x8, #0x980]
0x0679C678: e10314aa  mov x1, x20
0x0679C67C: e3031faa  mov x3, xzr
0x0679C680: f80300aa  mov x24, x0
0x0679C684: 020140f9  ldr x2, [x8]
0x0679C688: fbd8aa97  bl #0x5252a74
0x0679C68C: d50a00b4  cbz x21, #0x679c7e4
0x0679C690: 22008052  movz w2, #0x1
0x0679C694: e00315aa  mov x0, x21
0x0679C698: e10317aa  mov x1, x23
0x0679C69C: e30318aa  mov x3, x24
0x0679C6A0: e4031faa  mov x4, xzr
0x0679C6A4: 2a39fb97  bl #0x666ab4c
0x0679C6A8: f60900b4  cbz x22, #0x679c7e4
0x0679C6AC: f50300aa  mov x21, x0
0x0679C6B0: a00900b4  cbz x0, #0x679c7e4
0x0679C6B4: a81a40b9  ldr w8, [x21, #0x18]
0x0679C6B8: d7ca4139  ldrb w23, [x22, #0x72]
0x0679C6BC: 1f050071  cmp w8, #1
0x0679C6C0: eb010054  b.lt #0x679c6fc
0x0679C6C4: e87600f0  adrp x8, #0x767b000
0x0679C6C8: 965640f9  ldr x22, [x20, #0xa8]
0x0679C6CC: 08cd47f9  ldr x8, [x8, #0xf98]
0x0679C6D0: e00313aa  mov x0, x19
0x0679C6D4: 010140f9  ldr x1, [x8]
0x0679C6D8: 51445197  bl #0x3bed81c
0x0679C6DC: 400800b4  cbz x0, #0x679c7e4
0x0679C6E0: 360800b4  cbz x22, #0x679c7e4
0x0679C6E4: 011840f9  ldr x1, [x0, #0x30]
0x0679C6E8: e00316aa  mov x0, x22
0x0679C6EC: 9eb3ff97  bl #0x6789564
0x0679C6F0: e803202a  mvn w8, w0
0x0679C6F4: 08010012  and w8, w8, #1
0x0679C6F8: 02000014  b #0x679c700
0x0679C6FC: e8031f2a  mov w8, wzr
0x0679C700: e9020052  eor w9, w23, #1
0x0679C704: 1f01096a  tst w8, w9
0x0679C708: a0020054  b.eq #0x679c75c
0x0679C70C: 962240f9  ldr x22, [x20, #0x40]
0x0679C710: b60600b4  cbz x22, #0x679c7e4
0x0679C714: 2a770090  adrp x10, #0x7680000
0x0679C718: c80240f9  ldr x8, [x22]
0x0679C71C: 4a6940f9  ldr x10, [x10, #0xd0]
0x0679C720: 095d4279  ldrh w9, [x8, #0x12e]
0x0679C724: 410140f9  ldr x1, [x10]
0x0679C728: 290100b4  cbz x9, #0x679c74c
0x0679C72C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679C730: 4a210091  add x10, x10, #8
0x0679C734: 4b815ff8  ldur x11, [x10, #-8]
0x0679C738: 7f0101eb  cmp x11, x1
0x0679C73C: 00020054  b.eq #0x679c77c
0x0679C740: 290500f1  subs x9, x9, #1
0x0679C744: 4a410091  add x10, x10, #0x10
0x0679C748: 61ffff54  b.ne #0x679c734
0x0679C74C: e00316aa  mov x0, x22
0x0679C750: e2031f2a  mov w2, wzr
0x0679C754: efe82697  bl #0x3156b10
0x0679C758: 0c000014  b #0x679c788
0x0679C75C: 487a00d0  adrp x8, #0x76e6000
0x0679C760: 08b143f9  ldr x8, [x8, #0x760]
0x0679C764: e00313aa  mov x0, x19
0x0679C768: 010140f9  ldr x1, [x8]
0x0679C76C: 2c445197  bl #0x3bed81c
0x0679C770: a00300b4  cbz x0, #0x679c7e4
0x0679C774: 1fc00039  strb wzr, [x0, #0x30]
0x0679C778: a9ffff17  b #0x679c61c
0x0679C77C: 490180b9  ldrsw x9, [x10]
0x0679C780: 0811098b  add x8, x8, x9, lsl #4
0x0679C784: 00e10491  add x0, x8, #0x138
0x0679C788: 080440a9  ldp x8, x1, [x0]
0x0679C78C: e00316aa  mov x0, x22
0x0679C790: 00013fd6  blr x8
0x0679C794: a87b0090  adrp x8, #0x7710000
0x0679C798: 08bd44f9  ldr x8, [x8, #0x978]
0x0679C79C: e10300aa  mov x1, x0
0x0679C7A0: e00315aa  mov x0, x21
0x0679C7A4: 020140f9  ldr x2, [x8]
0x0679C7A8: e7dc5597  bl #0x3d13b44
0x0679C7AC: a87b0090  adrp x8, #0x7710000
0x0679C7B0: 08b944f9  ldr x8, [x8, #0x970]
0x0679C7B4: e00315aa  mov x0, x21
0x0679C7B8: 010140f9  ldr x1, [x8]
0x0679C7BC: 2e8c5297  bl #0x3c3f874
0x0679C7C0: e20300aa  mov x2, x0
0x0679C7C4: e00314aa  mov x0, x20
0x0679C7C8: e10313aa  mov x1, x19
0x0679C7CC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0679C7D0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0679C7D4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0679C7D8: e3031f2a  mov w3, wzr
0x0679C7DC: fe0744f8  ldr x30, [sp], #0x40
0x0679C7E0: 56000014  b #0x679c938
0x0679C7E4: 32912797  bl #0x3180cac

; RVA 0x679C938 | private void SpawnInternal(SpawnerComponent spawner, BoardItemPosition position, bool forceSpawn) { }
; bytes=664 sha256=e79bb8ffab8e0fe3137cecb2e25d997ce7bba6b1f9b46e2ec61454a2ab8eeebe status=arm64_complete_bound indexed_start=True
0x0679C938: ffc301d1  sub sp, sp, #0x70
0x0679C93C: fe0b00f9  str x30, [sp, #0x10]
0x0679C940: fc6f02a9  stp x28, x27, [sp, #0x20]
0x0679C944: fa6703a9  stp x26, x25, [sp, #0x30]
0x0679C948: f85f04a9  stp x24, x23, [sp, #0x40]
0x0679C94C: f65705a9  stp x22, x21, [sp, #0x50]
0x0679C950: f44f06a9  stp x20, x19, [sp, #0x60]
0x0679C954: 74ac0090  adrp x20, #0x7d28000
0x0679C958: 88027739  ldrb w8, [x20, #0xdc0]
0x0679C95C: f803032a  mov w24, w3
0x0679C960: f60302aa  mov x22, x2
0x0679C964: f50301aa  mov x21, x1
0x0679C968: f30300aa  mov x19, x0
0x0679C96C: 08030037  tbnz w8, #0, #0x679c9cc
0x0679C970: 407a00d0  adrp x0, #0x76e6000
0x0679C974: 00b043f9  ldr x0, [x0, #0x760]
0x0679C978: 28902797  bl #0x3180a18
0x0679C97C: c07900f0  adrp x0, #0x76d7000
0x0679C980: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0679C984: 25902797  bl #0x3180a18
0x0679C988: c07900f0  adrp x0, #0x76d7000
0x0679C98C: 00c442f9  ldr x0, [x0, #0x588]
0x0679C990: 22902797  bl #0x3180a18
0x0679C994: a07b0090  adrp x0, #0x7710000
0x0679C998: 007044f9  ldr x0, [x0, #0x8e0]
0x0679C99C: 1f902797  bl #0x3180a18
0x0679C9A0: a07b0090  adrp x0, #0x7710000
0x0679C9A4: 00c441f9  ldr x0, [x0, #0x388]
0x0679C9A8: 1c902797  bl #0x3180a18
0x0679C9AC: a07b0090  adrp x0, #0x7710000
0x0679C9B0: 009843f9  ldr x0, [x0, #0x730]
0x0679C9B4: 19902797  bl #0x3180a18
0x0679C9B8: a07b0090  adrp x0, #0x7710000
0x0679C9BC: 00c444f9  ldr x0, [x0, #0x988]
0x0679C9C0: 16902797  bl #0x3180a18
0x0679C9C4: 28008052  movz w8, #0x1
0x0679C9C8: 88023739  strb w8, [x20, #0xdc0]
0x0679C9CC: ff0f00f9  str xzr, [sp, #0x18]
0x0679C9D0: ff0700f9  str xzr, [sp, #8]
0x0679C9D4: d50f00b4  cbz x21, #0x679cbcc
0x0679C9D8: c87900f0  adrp x8, #0x76d7000
0x0679C9DC: 08dd42f9  ldr x8, [x8, #0x5b8]
0x0679C9E0: 547a00d0  adrp x20, #0x76e6000
0x0679C9E4: b97b0090  adrp x25, #0x7710000
0x0679C9E8: e00315aa  mov x0, x21
0x0679C9EC: 010140f9  ldr x1, [x8]
0x0679C9F0: 94b243f9  ldr x20, [x20, #0x760]
0x0679C9F4: 39c741f9  ldr x25, [x25, #0x388]
0x0679C9F8: 89435197  bl #0x3bed81c
0x0679C9FC: 810240f9  ldr x1, [x20]
0x0679CA00: f70300aa  mov x23, x0
0x0679CA04: e00315aa  mov x0, x21
0x0679CA08: 85435197  bl #0x3bed81c
0x0679CA0C: 280340f9  ldr x8, [x25]
0x0679CA10: f90300aa  mov x25, x0
0x0679CA14: e00308aa  mov x0, x8
0x0679CA18: a2902797  bl #0x3180ca0
0x0679CA1C: e1031faa  mov x1, xzr
0x0679CA20: f40300aa  mov x20, x0
0x0679CA24: efdbe097  bl #0x5fd39e0
0x0679CA28: 7a5a40f9  ldr x26, [x19, #0xb0]
0x0679CA2C: 1a0d00b4  cbz x26, #0x679cbcc
0x0679CA30: bb7b0090  adrp x27, #0x7710000
0x0679CA34: 480340f9  ldr x8, [x26]
0x0679CA38: 7b7344f9  ldr x27, [x27, #0x8e0]
0x0679CA3C: 095d4279  ldrh w9, [x8, #0x12e]
0x0679CA40: 610340f9  ldr x1, [x27]
0x0679CA44: 290100b4  cbz x9, #0x679ca68
0x0679CA48: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679CA4C: 4a210091  add x10, x10, #8
0x0679CA50: 4b815ff8  ldur x11, [x10, #-8]
0x0679CA54: 7f0101eb  cmp x11, x1
0x0679CA58: 00010054  b.eq #0x679ca78
0x0679CA5C: 290500f1  subs x9, x9, #1
0x0679CA60: 4a410091  add x10, x10, #0x10
0x0679CA64: 61ffff54  b.ne #0x679ca50
0x0679CA68: e0031aaa  mov x0, x26
0x0679CA6C: e2031f2a  mov w2, wzr
0x0679CA70: 28e82697  bl #0x3156b10
0x0679CA74: 04000014  b #0x679ca84
0x0679CA78: 490180b9  ldrsw x9, [x10]
0x0679CA7C: 0811098b  add x8, x8, x9, lsl #4
0x0679CA80: 00e10491  add x0, x8, #0x138
0x0679CA84: 081040a9  ldp x8, x4, [x0]
0x0679CA88: bc7b0090  adrp x28, #0x7710000
0x0679CA8C: 9cc744f9  ldr x28, [x28, #0x988]
0x0679CA90: e2630091  add x2, sp, #0x18
0x0679CA94: e3230091  add x3, sp, #8
0x0679CA98: e0031aaa  mov x0, x26
0x0679CA9C: e10317aa  mov x1, x23
0x0679CAA0: 00013fd6  blr x8
0x0679CAA4: a0000036  tbz w0, #0, #0x679cab8
0x0679CAA8: 78000036  tbz w24, #0, #0x679cab4
0x0679CAAC: f60f40f9  ldr x22, [sp, #0x18]
0x0679CAB0: 02000014  b #0x679cab8
0x0679CAB4: f60f00f9  str x22, [sp, #0x18]
0x0679CAB8: e70740f9  ldr x7, [sp, #8]
0x0679CABC: 880340f9  ldr x8, [x28]
0x0679CAC0: 25008052  movz w5, #0x1
0x0679CAC4: e00313aa  mov x0, x19
0x0679CAC8: e10316aa  mov x1, x22
0x0679CACC: e20315aa  mov x2, x21
0x0679CAD0: e30319aa  mov x3, x25
0x0679CAD4: e40314aa  mov x4, x20
0x0679CAD8: e6031faa  mov x6, xzr
0x0679CADC: e80300f9  str x8, [sp]
0x0679CAE0: 7d597697  bl #0x45330d4
0x0679CAE4: e80740f9  ldr x8, [sp, #8]
0x0679CAE8: 280500b4  cbz x8, #0x679cb8c
0x0679CAEC: 604a40f9  ldr x0, [x19, #0x90]
0x0679CAF0: e00600b4  cbz x0, #0x679cbcc
0x0679CAF4: e10f40f9  ldr x1, [sp, #0x18]
0x0679CAF8: e2031faa  mov x2, xzr
0x0679CAFC: 4e0ffb97  bl #0x6660834
0x0679CB00: 600600b4  cbz x0, #0x679cbcc
0x0679CB04: c87900f0  adrp x8, #0x76d7000
0x0679CB08: 08c542f9  ldr x8, [x8, #0x588]
0x0679CB0C: 755a40f9  ldr x21, [x19, #0xb0]
0x0679CB10: 010140f9  ldr x1, [x8]
0x0679CB14: 42435197  bl #0x3bed81c
0x0679CB18: b70500b4  cbz x23, #0x679cbcc
0x0679CB1C: 950500b4  cbz x21, #0x679cbcc
0x0679CB20: a80240f9  ldr x8, [x21]
0x0679CB24: f71a40f9  ldr x23, [x23, #0x30]
0x0679CB28: 610340f9  ldr x1, [x27]
0x0679CB2C: f60300aa  mov x22, x0
0x0679CB30: 095d4279  ldrh w9, [x8, #0x12e]
0x0679CB34: 290100b4  cbz x9, #0x679cb58
0x0679CB38: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679CB3C: 4a210091  add x10, x10, #8
0x0679CB40: 4b815ff8  ldur x11, [x10, #-8]
0x0679CB44: 7f0101eb  cmp x11, x1
0x0679CB48: 00010054  b.eq #0x679cb68
0x0679CB4C: 290500f1  subs x9, x9, #1
0x0679CB50: 4a410091  add x10, x10, #0x10
0x0679CB54: 61ffff54  b.ne #0x679cb40
0x0679CB58: 22008052  movz w2, #0x1
0x0679CB5C: e00315aa  mov x0, x21
0x0679CB60: ece72697  bl #0x3156b10
0x0679CB64: 05000014  b #0x679cb78
0x0679CB68: 490140b9  ldr w9, [x10]
0x0679CB6C: 29050011  add w9, w9, #1
0x0679CB70: 08d1298b  add x8, x8, w9, sxtw #4
0x0679CB74: 00e10491  add x0, x8, #0x138
0x0679CB78: 080c40a9  ldp x8, x3, [x0]
0x0679CB7C: e00315aa  mov x0, x21
0x0679CB80: e10316aa  mov x1, x22
0x0679CB84: e20317aa  mov x2, x23
0x0679CB88: 00013fd6  blr x8
0x0679CB8C: 140200b4  cbz x20, #0x679cbcc
0x0679CB90: 605240f9  ldr x0, [x19, #0xa0]
0x0679CB94: c00100b4  cbz x0, #0x679cbcc
0x0679CB98: a87b0090  adrp x8, #0x7710000
0x0679CB9C: 089943f9  ldr x8, [x8, #0x730]
0x0679CBA0: 810a40f9  ldr x1, [x20, #0x10]
0x0679CBA4: 020140f9  ldr x2, [x8]
0x0679CBA8: a18e5697  bl #0x3d4062c
0x0679CBAC: f44f46a9  ldp x20, x19, [sp, #0x60]
0x0679CBB0: f65745a9  ldp x22, x21, [sp, #0x50]
0x0679CBB4: f85f44a9  ldp x24, x23, [sp, #0x40]
0x0679CBB8: fa6743a9  ldp x26, x25, [sp, #0x30]
0x0679CBBC: fc6f42a9  ldp x28, x27, [sp, #0x20]
0x0679CBC0: fe0b40f9  ldr x30, [sp, #0x10]
0x0679CBC4: ffc30191  add sp, sp, #0x70
0x0679CBC8: c0035fd6  ret
0x0679CBCC: 38902797  bl #0x3180cac

; RVA 0x679CBD0 | private bool IsTileReady(BoardItemPosition position) { }
; bytes=236 sha256=cf64badc139d1512db096f8854294598d452b61b2195ead525d6056dc90735f8 status=arm64_complete_bound indexed_start=True
0x0679CBD0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0679CBD4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0679CBD8: 75ac0090  adrp x21, #0x7d28000
0x0679CBDC: a8067739  ldrb w8, [x21, #0xdc1]
0x0679CBE0: f30301aa  mov x19, x1
0x0679CBE4: f40300aa  mov x20, x0
0x0679CBE8: c8000037  tbnz w8, #0, #0x679cc00
0x0679CBEC: 80790090  adrp x0, #0x76cc000
0x0679CBF0: 003c43f9  ldr x0, [x0, #0x678]
0x0679CBF4: 898f2797  bl #0x3180a18
0x0679CBF8: 28008052  movz w8, #0x1
0x0679CBFC: a8063739  strb w8, [x21, #0xdc1]
0x0679CC00: 804a40f9  ldr x0, [x20, #0x90]
0x0679CC04: a00500b4  cbz x0, #0x679ccb8
0x0679CC08: 080040f9  ldr x8, [x0]
0x0679CC0C: 090541f9  ldr x9, [x8, #0x208]
0x0679CC10: 010941f9  ldr x1, [x8, #0x210]
0x0679CC14: 20013fd6  blr x9
0x0679CC18: 000500b4  cbz x0, #0x679ccb8
0x0679CC1C: 8a790090  adrp x10, #0x76cc000
0x0679CC20: 080040f9  ldr x8, [x0]
0x0679CC24: 4a3d43f9  ldr x10, [x10, #0x678]
0x0679CC28: f50300aa  mov x21, x0
0x0679CC2C: 095d4279  ldrh w9, [x8, #0x12e]
0x0679CC30: 410140f9  ldr x1, [x10]
0x0679CC34: 290100b4  cbz x9, #0x679cc58
0x0679CC38: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679CC3C: 4a210091  add x10, x10, #8
0x0679CC40: 4b815ff8  ldur x11, [x10, #-8]
0x0679CC44: 7f0101eb  cmp x11, x1
0x0679CC48: 00010054  b.eq #0x679cc68
0x0679CC4C: 290500f1  subs x9, x9, #1
0x0679CC50: 4a410091  add x10, x10, #0x10
0x0679CC54: 61ffff54  b.ne #0x679cc40
0x0679CC58: 02038052  movz w2, #0x18
0x0679CC5C: e00315aa  mov x0, x21
0x0679CC60: ace72697  bl #0x3156b10
0x0679CC64: 05000014  b #0x679cc78
0x0679CC68: 490140b9  ldr w9, [x10]
0x0679CC6C: 29610011  add w9, w9, #0x18
0x0679CC70: 08d1298b  add x8, x8, w9, sxtw #4
0x0679CC74: 00e10491  add x0, x8, #0x138
0x0679CC78: 080840a9  ldp x8, x2, [x0]
0x0679CC7C: e00315aa  mov x0, x21
0x0679CC80: e10313aa  mov x1, x19
0x0679CC84: 00013fd6  blr x8
0x0679CC88: a0000036  tbz w0, #0, #0x679cc9c
0x0679CC8C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679CC90: e0031f2a  mov w0, wzr
0x0679CC94: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679CC98: c0035fd6  ret
0x0679CC9C: 804a40f9  ldr x0, [x20, #0x90]
0x0679CCA0: c00000b4  cbz x0, #0x679ccb8
0x0679CCA4: e10313aa  mov x1, x19
0x0679CCA8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679CCAC: e2031faa  mov x2, xzr
0x0679CCB0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679CCB4: 8c38fb17  b #0x666aee4
0x0679CCB8: fd8f2797  bl #0x3180cac

; RVA 0x679CCBC | public void .ctor() { }
; bytes=72 sha256=8e6211f0926ceae4a39d85b442f156a1749dce22ef78cb7f982512b6924b539d status=arm64_complete_bound indexed_start=True
0x0679CCBC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0679CCC0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0679CCC4: 74ac0090  adrp x20, #0x7d28000
0x0679CCC8: b57b0090  adrp x21, #0x7710000
0x0679CCCC: 880a7739  ldrb w8, [x20, #0xdc2]
0x0679CCD0: b5ca44f9  ldr x21, [x21, #0x990]
0x0679CCD4: f30300aa  mov x19, x0
0x0679CCD8: c8000037  tbnz w8, #0, #0x679ccf0
0x0679CCDC: a07b0090  adrp x0, #0x7710000
0x0679CCE0: 00c844f9  ldr x0, [x0, #0x990]
0x0679CCE4: 4d8f2797  bl #0x3180a18
0x0679CCE8: 28008052  movz w8, #0x1
0x0679CCEC: 880a3739  strb w8, [x20, #0xdc2]
0x0679CCF0: a10240f9  ldr x1, [x21]
0x0679CCF4: e00313aa  mov x0, x19
0x0679CCF8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679CCFC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679CD00: 61687617  b #0x4536e84

