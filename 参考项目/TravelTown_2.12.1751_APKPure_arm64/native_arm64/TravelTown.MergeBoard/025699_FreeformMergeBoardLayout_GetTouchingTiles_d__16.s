; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25699 .FreeformMergeBoardLayout.<GetTouchingTiles>d__16
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A40888 | public void .ctor(int <>1__state) { }
; bytes=52 sha256=526b361d7fc0c31462252b8e0317e70c4a0da98fbacef1c44b472afed5ea7ee2 status=arm64_complete_bound indexed_start=True
0x06A40888: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A4088C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A40890: f303012a  mov w19, w1
0x06A40894: e1031faa  mov x1, xzr
0x06A40898: f40300aa  mov x20, x0
0x06A4089C: 5867b297  bl #0x56da5fc
0x06A408A0: e0031faa  mov x0, xzr
0x06A408A4: 931200b9  str w19, [x20, #0x10]
0x06A408A8: 0877b297  bl #0x56de4c8
0x06A408AC: 801a00b9  str w0, [x20, #0x18]
0x06A408B0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A408B4: fe0742f8  ldr x30, [sp], #0x20
0x06A408B8: c0035fd6  ret

; RVA 0x6A414E8 | private void System.IDisposable.Dispose() { }
; bytes=28 sha256=8b712fa7d0f2a996958ae3eec72a9fd303165edfd2de1e58ef2d5710175c032b status=arm64_complete_bound indexed_start=True
0x06A414E8: 081040b9  ldr w8, [x0, #0x10]
0x06A414EC: 1f050071  cmp w8, #1
0x06A414F0: 60000054  b.eq #0x6a414fc
0x06A414F4: 1f0d0031  cmn w8, #3
0x06A414F8: 41000054  b.ne #0x6a41500
0x06A414FC: ec000014  b #0x6a418ac
0x06A41500: c0035fd6  ret

; RVA 0x6A41504 | private bool MoveNext() { }
; bytes=936 sha256=6382189d650bed03f6b39e0517a2349df7353bc3d684a25955b7be06713e531b status=arm64_complete_bound indexed_start=True
0x06A41504: ff0302d1  sub sp, sp, #0x80
0x06A41508: fe0305a9  stp x30, x0, [sp, #0x50]
0x06A4150C: f65706a9  stp x22, x21, [sp, #0x60]
0x06A41510: f44f07a9  stp x20, x19, [sp, #0x70]
0x06A41514: 539700b0  adrp x19, #0x7d2a000
0x06A41518: 68fe5439  ldrb w8, [x19, #0x53f]
0x06A4151C: f40300aa  mov x20, x0
0x06A41520: c8030037  tbnz w8, #0, #0x6a41598
0x06A41524: 606000b0  adrp x0, #0x764e000
0x06A41528: 00cc42f9  ldr x0, [x0, #0x598]
0x06A4152C: 3bfd1c97  bl #0x3180a18
0x06A41530: 606700d0  adrp x0, #0x772f000
0x06A41534: 00bc44f9  ldr x0, [x0, #0x978]
0x06A41538: 38fd1c97  bl #0x3180a18
0x06A4153C: 606700d0  adrp x0, #0x772f000
0x06A41540: 00c444f9  ldr x0, [x0, #0x988]
0x06A41544: 35fd1c97  bl #0x3180a18
0x06A41548: 606700d0  adrp x0, #0x772f000
0x06A4154C: 00c844f9  ldr x0, [x0, #0x990]
0x06A41550: 32fd1c97  bl #0x3180a18
0x06A41554: 606000b0  adrp x0, #0x764e000
0x06A41558: 005843f9  ldr x0, [x0, #0x6b0]
0x06A4155C: 2ffd1c97  bl #0x3180a18
0x06A41560: 606700d0  adrp x0, #0x772f000
0x06A41564: 00cc44f9  ldr x0, [x0, #0x998]
0x06A41568: 2cfd1c97  bl #0x3180a18
0x06A4156C: 606000d0  adrp x0, #0x764f000
0x06A41570: 001444f9  ldr x0, [x0, #0x828]
0x06A41574: 29fd1c97  bl #0x3180a18
0x06A41578: 606700d0  adrp x0, #0x772f000
0x06A4157C: 00f844f9  ldr x0, [x0, #0x9f0]
0x06A41580: 26fd1c97  bl #0x3180a18
0x06A41584: 606700d0  adrp x0, #0x772f000
0x06A41588: 00fc44f9  ldr x0, [x0, #0x9f8]
0x06A4158C: 23fd1c97  bl #0x3180a18
0x06A41590: 28008052  movz w8, #0x1
0x06A41594: 68fe1439  strb w8, [x19, #0x53f]
0x06A41598: e8630191  add x8, sp, #0x58
0x06A4159C: e82700f9  str x8, [sp, #0x48]
0x06A415A0: 881240b9  ldr w8, [x20, #0x10]
0x06A415A4: 931240f9  ldr x19, [x20, #0x20]
0x06A415A8: 1f050071  cmp w8, #1
0x06A415AC: 400c0054  b.eq #0x6a41734
0x06A415B0: 48070035  cbnz w8, #0x6a41698
0x06A415B4: 08008012  movn w8, #0
0x06A415B8: 881200b9  str w8, [x20, #0x10]
0x06A415BC: 331200b4  cbz x19, #0x6a41800
0x06A415C0: 812a40b9  ldr w1, [x20, #0x28]
0x06A415C4: e00313aa  mov x0, x19
0x06A415C8: cdfaff97  bl #0x6a400fc
0x06A415CC: e82f40f9  ldr x8, [sp, #0x58]
0x06A415D0: 60030036  tbz w0, #0, #0x6a4163c
0x06A415D4: 003140bd  ldr s0, [x8, #0x30]
0x06A415D8: 0820201e  fcmp s0, #0.0
0x06A415DC: 25060054  b.pl #0x6a416a0
0x06A415E0: 686000d0  adrp x8, #0x764f000
0x06A415E4: 081544f9  ldr x8, [x8, #0x828]
0x06A415E8: e02300bd  str s0, [sp, #0x20]
0x06A415EC: 000140f9  ldr x0, [x8]
0x06A415F0: e1830091  add x1, sp, #0x20
0x06A415F4: 68fd1c97  bl #0x3180b94
0x06A415F8: e10300aa  mov x1, x0
0x06A415FC: 686700d0  adrp x8, #0x772f000
0x06A41600: 08fd44f9  ldr x8, [x8, #0x9f8]
0x06A41604: 000140f9  ldr x0, [x8]
0x06A41608: e2031faa  mov x2, xzr
0x06A4160C: 2db4aa97  bl #0x54ee6c0
0x06A41610: 686000b0  adrp x8, #0x764e000
0x06A41614: 08cd42f9  ldr x8, [x8, #0x598]
0x06A41618: f30300aa  mov x19, x0
0x06A4161C: 000140f9  ldr x0, [x8]
0x06A41620: 08e040b9  ldr w8, [x0, #0xe0]
0x06A41624: 48000035  cbnz w8, #0x6a4162c
0x06A41628: 59fd1c97  bl #0x3180b8c
0x06A4162C: e00313aa  mov x0, x19
0x06A41630: e1031faa  mov x1, xzr
0x06A41634: d39b1194  bl #0x6ea8580
0x06A41638: 18000014  b #0x6a41698
0x06A4163C: 696000b0  adrp x9, #0x764e000
0x06A41640: 082940b9  ldr w8, [x8, #0x28]
0x06A41644: 295943f9  ldr x9, [x9, #0x6b0]
0x06A41648: e82300b9  str w8, [sp, #0x20]
0x06A4164C: 200140f9  ldr x0, [x9]
0x06A41650: e1830091  add x1, sp, #0x20
0x06A41654: 50fd1c97  bl #0x3180b94
0x06A41658: e10300aa  mov x1, x0
0x06A4165C: 686700d0  adrp x8, #0x772f000
0x06A41660: 08f944f9  ldr x8, [x8, #0x9f0]
0x06A41664: 000140f9  ldr x0, [x8]
0x06A41668: e2031faa  mov x2, xzr
0x06A4166C: 15b4aa97  bl #0x54ee6c0
0x06A41670: 686000b0  adrp x8, #0x764e000
0x06A41674: 08cd42f9  ldr x8, [x8, #0x598]
0x06A41678: f30300aa  mov x19, x0
0x06A4167C: 000140f9  ldr x0, [x8]
0x06A41680: 08e040b9  ldr w8, [x0, #0xe0]
0x06A41684: 48000035  cbnz w8, #0x6a4168c
0x06A41688: 41fd1c97  bl #0x3180b8c
0x06A4168C: e00313aa  mov x0, x19
0x06A41690: e1031faa  mov x1, xzr
0x06A41694: bb9b1194  bl #0x6ea8580
0x06A41698: e0031f2a  mov w0, wzr
0x06A4169C: 53000014  b #0x6a417e8
0x06A416A0: 012940b9  ldr w1, [x8, #0x28]
0x06A416A4: e00313aa  mov x0, x19
0x06A416A8: abfaff97  bl #0x6a40154
0x06A416AC: e10300aa  mov x1, x0
0x06A416B0: 90fcff97  bl #0x6a408f0
0x06A416B4: e82f40f9  ldr x8, [sp, #0x58]
0x06A416B8: 043140bd  ldr s4, [x8, #0x30]
0x06A416BC: 0038241e  fsub s0, s0, s4
0x06A416C0: 2138241e  fsub s1, s1, s4
0x06A416C4: 8428241e  fadd s4, s4, s4
0x06A416C8: 4228241e  fadd s2, s2, s4
0x06A416CC: 6328241e  fadd s3, s3, s4
0x06A416D0: 0005072d  stp s0, s1, [x8, #0x38]
0x06A416D4: 020d082d  stp s2, s3, [x8, #0x40]
0x06A416D8: 601a40f9  ldr x0, [x19, #0x30]
0x06A416DC: 400900b4  cbz x0, #0x6a41804
0x06A416E0: 686700d0  adrp x8, #0x772f000
0x06A416E4: 08bd44f9  ldr x8, [x8, #0x978]
0x06A416E8: 010140f9  ldr x1, [x8]
0x06A416EC: 4bd08f97  bl #0x4e35818
0x06A416F0: c00800b4  cbz x0, #0x6a41808
0x06A416F4: 686700d0  adrp x8, #0x772f000
0x06A416F8: 08cd44f9  ldr x8, [x8, #0x998]
0x06A416FC: 010140f9  ldr x1, [x8]
0x06A41700: e8230091  add x8, sp, #8
0x06A41704: 81c4a597  bl #0x53b2908
0x06A41708: e92f40f9  ldr x9, [sp, #0x58]
0x06A4170C: e083c03c  ldur q0, [sp, #8]
0x06A41710: e80f40f9  ldr x8, [sp, #0x18]
0x06A41714: 20210191  add x0, x9, #0x48
0x06A41718: e00b803d  str q0, [sp, #0x20]
0x06A4171C: e81b00f9  str x8, [sp, #0x30]
0x06A41720: 282d00f9  str x8, [x9, #0x58]
0x06A41724: 2081843c  stur q0, [x9, #0x48]
0x06A41728: e1031faa  mov x1, xzr
0x06A4172C: a6fc1c97  bl #0x31809c4
0x06A41730: f42f40f9  ldr x20, [sp, #0x58]
0x06A41734: 48008012  movn w8, #0x2
0x06A41738: 881200b9  str w8, [x20, #0x10]
0x06A4173C: 766700d0  adrp x22, #0x772f000
0x06A41740: d6c644f9  ldr x22, [x22, #0x988]
0x06A41744: c10240f9  ldr x1, [x22]
0x06A41748: 80220191  add x0, x20, #0x48
0x06A4174C: 121d9897  bl #0x5048b94
0x06A41750: f42f40f9  ldr x20, [sp, #0x58]
0x06A41754: e0030036  tbz w0, #0, #0x6a417d0
0x06A41758: 955a40b9  ldr w21, [x20, #0x58]
0x06A4175C: 882a40b9  ldr w8, [x20, #0x28]
0x06A41760: bf02086b  cmp w21, w8
0x06A41764: 00ffff54  b.eq #0x6a41744
0x06A41768: b30400b4  cbz x19, #0x6a417fc
0x06A4176C: e00313aa  mov x0, x19
0x06A41770: e103152a  mov w1, w21
0x06A41774: 78faff97  bl #0x6a40154
0x06A41778: e10300aa  mov x1, x0
0x06A4177C: 5dfcff97  bl #0x6a408f0
0x06A41780: f42f40f9  ldr x20, [sp, #0x58]
0x06A41784: 4228201e  fadd s2, s2, s0
0x06A41788: 843a40bd  ldr s4, [x20, #0x38]
0x06A4178C: 4020241e  fcmp s2, s4
0x06A41790: adfdff54  b.le #0x6a41744
0x06A41794: 824240bd  ldr s2, [x20, #0x40]
0x06A41798: 8228221e  fadd s2, s4, s2
0x06A4179C: 0020221e  fcmp s0, s2
0x06A417A0: 25fdff54  b.pl #0x6a41744
0x06A417A4: 803e40bd  ldr s0, [x20, #0x3c]
0x06A417A8: 6228211e  fadd s2, s3, s1
0x06A417AC: 4020201e  fcmp s2, s0
0x06A417B0: adfcff54  b.le #0x6a41744
0x06A417B4: 824640bd  ldr s2, [x20, #0x44]
0x06A417B8: 0028221e  fadd s0, s0, s2
0x06A417BC: 2020201e  fcmp s1, s0
0x06A417C0: 25fcff54  b.pl #0x6a41744
0x06A417C4: 20008052  movz w0, #0x1
0x06A417C8: 80560229  stp w0, w21, [x20, #0x10]
0x06A417CC: 07000014  b #0x6a417e8
0x06A417D0: e00314aa  mov x0, x20
0x06A417D4: 36000094  bl #0x6a418ac
0x06A417D8: e82f40f9  ldr x8, [sp, #0x58]
0x06A417DC: e0031f2a  mov w0, wzr
0x06A417E0: 1ffd04a9  stp xzr, xzr, [x8, #0x48]
0x06A417E4: 1f2d00f9  str xzr, [x8, #0x58]
0x06A417E8: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06A417EC: f65746a9  ldp x22, x21, [sp, #0x60]
0x06A417F0: fe2b40f9  ldr x30, [sp, #0x50]
0x06A417F4: ff030291  add sp, sp, #0x80
0x06A417F8: c0035fd6  ret
0x06A417FC: 2cfd1c97  bl #0x3180cac
0x06A41800: 2bfd1c97  bl #0x3180cac
0x06A41804: 2afd1c97  bl #0x3180cac
0x06A41808: 29fd1c97  bl #0x3180cac
0x06A4180C: 10000014  b #0x6a4184c
0x06A41810: 0f000014  b #0x6a4184c
0x06A41814: 0e000014  b #0x6a4184c
0x06A41818: 0d000014  b #0x6a4184c
0x06A4181C: 0c000014  b #0x6a4184c
0x06A41820: 0b000014  b #0x6a4184c
0x06A41824: 0a000014  b #0x6a4184c
0x06A41828: 09000014  b #0x6a4184c
0x06A4182C: 08000014  b #0x6a4184c
0x06A41830: 07000014  b #0x6a4184c
0x06A41834: 06000014  b #0x6a4184c
0x06A41838: 05000014  b #0x6a4184c
0x06A4183C: 04000014  b #0x6a4184c
0x06A41840: 03000014  b #0x6a4184c
0x06A41844: 02000014  b #0x6a4184c
0x06A41848: 01000014  b #0x6a4184c
0x06A4184C: 3f040071  cmp w1, #1
0x06A41850: 81010054  b.ne #0x6a41880
0x06A41854: 2f341e94  bl #0x71ce910
0x06A41858: 130040f9  ldr x19, [x0]
0x06A4185C: f32300f9  str x19, [sp, #0x40]
0x06A41860: 30341e94  bl #0x71ce920
0x06A41864: b3f1ffb4  cbz x19, #0x6a41698
0x06A41868: e8030191  add x8, sp, #0x40
0x06A4186C: 00210091  add x0, x8, #8
0x06A41870: 5bf51a97  bl #0x30feddc
0x06A41874: e00313aa  mov x0, x19
0x06A41878: 0bfd1c97  bl #0x3180ca4
0x06A4187C: 530000b5  cbnz x19, #0x6a41884
0x06A41880: 36902097  bl #0x3265958
0x06A41884: e02f40f9  ldr x0, [sp, #0x58]
0x06A41888: 081040b9  ldr w8, [x0, #0x10]
0x06A4188C: 1f050071  cmp w8, #1
0x06A41890: 60000054  b.eq #0x6a4189c
0x06A41894: 1f0d0031  cmn w8, #3
0x06A41898: 41000054  b.ne #0x6a418a0
0x06A4189C: 04000094  bl #0x6a418ac
0x06A418A0: e00313aa  mov x0, x19
0x06A418A4: 00fd1c97  bl #0x3180ca4
0x06A418A8: 1b1f0f97  bl #0x2e09514

; RVA 0x6A418AC | private void <>m__Finally1() { }
; bytes=80 sha256=e92f7693211946d20f3eb3218317c815b03995873664c5610305c0286073ff39 status=arm64_complete_bound indexed_start=True
0x06A418AC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A418B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A418B4: 559700b0  adrp x21, #0x7d2a000
0x06A418B8: 746700d0  adrp x20, #0x772f000
0x06A418BC: a8025539  ldrb w8, [x21, #0x540]
0x06A418C0: 94c244f9  ldr x20, [x20, #0x980]
0x06A418C4: f30300aa  mov x19, x0
0x06A418C8: c8000037  tbnz w8, #0, #0x6a418e0
0x06A418CC: 606700d0  adrp x0, #0x772f000
0x06A418D0: 00c044f9  ldr x0, [x0, #0x980]
0x06A418D4: 51fc1c97  bl #0x3180a18
0x06A418D8: 28008052  movz w8, #0x1
0x06A418DC: a8021539  strb w8, [x21, #0x540]
0x06A418E0: 08008012  movn w8, #0
0x06A418E4: 681200b9  str w8, [x19, #0x10]
0x06A418E8: 810240f9  ldr x1, [x20]
0x06A418EC: 60220191  add x0, x19, #0x48
0x06A418F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A418F4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A418F8: a61c9817  b #0x5048b90

; RVA 0x6A418FC | private int System.Collections.Generic.IEnumerator<System.Int32>.get_Current() { }
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x06A418FC: 001440b9  ldr w0, [x0, #0x14]
0x06A41900: c0035fd6  ret

; RVA 0x6A41904 | private void System.Collections.IEnumerator.Reset() { }
; bytes=56 sha256=960ecfcba4981fdd77ae17f371dfb530fbc84ff6b2c539940e3e7611971ae65a status=arm64_complete_bound indexed_start=True
0x06A41904: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A41908: 606000d0  adrp x0, #0x764f000
0x06A4190C: 00d043f9  ldr x0, [x0, #0x7a0]
0x06A41910: 47fc1c97  bl #0x3180a2c
0x06A41914: e3fc1c97  bl #0x3180ca0
0x06A41918: e1031faa  mov x1, xzr
0x06A4191C: f30300aa  mov x19, x0
0x06A41920: 805cb197  bl #0x5698b20
0x06A41924: 606700d0  adrp x0, #0x772f000
0x06A41928: 000445f9  ldr x0, [x0, #0xa08]
0x06A4192C: 40fc1c97  bl #0x3180a2c
0x06A41930: e10300aa  mov x1, x0
0x06A41934: e00313aa  mov x0, x19
0x06A41938: 91fc1c97  bl #0x3180b7c

; RVA 0x6A4193C | private object System.Collections.IEnumerator.get_Current() { }
; bytes=92 sha256=70b870e7fe0fda43cead314419f11dbbd9ae8eebd378a467034c33720d178878 status=arm64_complete_bound indexed_start=True
0x06A4193C: ffc300d1  sub sp, sp, #0x30
0x06A41940: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A41944: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A41948: 559700b0  adrp x21, #0x7d2a000
0x06A4194C: 746000b0  adrp x20, #0x764e000
0x06A41950: a8065539  ldrb w8, [x21, #0x541]
0x06A41954: 945a43f9  ldr x20, [x20, #0x6b0]
0x06A41958: f30300aa  mov x19, x0
0x06A4195C: c8000037  tbnz w8, #0, #0x6a41974
0x06A41960: 606000b0  adrp x0, #0x764e000
0x06A41964: 005843f9  ldr x0, [x0, #0x6b0]
0x06A41968: 2cfc1c97  bl #0x3180a18
0x06A4196C: 28008052  movz w8, #0x1
0x06A41970: a8061539  strb w8, [x21, #0x541]
0x06A41974: 681640b9  ldr w8, [x19, #0x14]
0x06A41978: 800240f9  ldr x0, [x20]
0x06A4197C: e1330091  add x1, sp, #0xc
0x06A41980: e80f00b9  str w8, [sp, #0xc]
0x06A41984: 84fc1c97  bl #0x3180b94
0x06A41988: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A4198C: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A41990: ffc30091  add sp, sp, #0x30
0x06A41994: c0035fd6  ret

; RVA 0x6A41998 | private IEnumerator<int> System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator() { }
; bytes=180 sha256=5140e9c3bdccb8436193db923f18bbbad067d75ac5e94b62b31cb36371d8c46d status=arm64_complete_bound indexed_start=True
0x06A41998: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A4199C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A419A0: 549700b0  adrp x20, #0x7d2a000
0x06A419A4: 880a5539  ldrb w8, [x20, #0x542]
0x06A419A8: f30300aa  mov x19, x0
0x06A419AC: c8000037  tbnz w8, #0, #0x6a419c4
0x06A419B0: 606700d0  adrp x0, #0x772f000
0x06A419B4: 00d444f9  ldr x0, [x0, #0x9a8]
0x06A419B8: 18fc1c97  bl #0x3180a18
0x06A419BC: 28008052  movz w8, #0x1
0x06A419C0: 880a1539  strb w8, [x20, #0x542]
0x06A419C4: 681240b9  ldr w8, [x19, #0x10]
0x06A419C8: 1f090031  cmn w8, #2
0x06A419CC: 21010054  b.ne #0x6a419f0
0x06A419D0: 741a40b9  ldr w20, [x19, #0x18]
0x06A419D4: e0031faa  mov x0, xzr
0x06A419D8: bc72b297  bl #0x56de4c8
0x06A419DC: 9f02006b  cmp w20, w0
0x06A419E0: 81000054  b.ne #0x6a419f0
0x06A419E4: 7f1200b9  str wzr, [x19, #0x10]
0x06A419E8: f40313aa  mov x20, x19
0x06A419EC: 10000014  b #0x6a41a2c
0x06A419F0: 686700d0  adrp x8, #0x772f000
0x06A419F4: 08d544f9  ldr x8, [x8, #0x9a8]
0x06A419F8: 000140f9  ldr x0, [x8]
0x06A419FC: a9fc1c97  bl #0x3180ca0
0x06A41A00: e1031faa  mov x1, xzr
0x06A41A04: f40300aa  mov x20, x0
0x06A41A08: fd62b297  bl #0x56da5fc
0x06A41A0C: e0031faa  mov x0, xzr
0x06A41A10: 9f1200b9  str wzr, [x20, #0x10]
0x06A41A14: ad72b297  bl #0x56de4c8
0x06A41A18: 801a00b9  str w0, [x20, #0x18]
0x06A41A1C: 611240f9  ldr x1, [x19, #0x20]
0x06A41A20: e00314aa  mov x0, x20
0x06A41A24: 010c02f8  str x1, [x0, #0x20]!
0x06A41A28: e7fb1c97  bl #0x31809c4
0x06A41A2C: 682e40b9  ldr w8, [x19, #0x2c]
0x06A41A30: e00314aa  mov x0, x20
0x06A41A34: 882a00b9  str w8, [x20, #0x28]
0x06A41A38: 603640bd  ldr s0, [x19, #0x34]
0x06A41A3C: 803200bd  str s0, [x20, #0x30]
0x06A41A40: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A41A44: fe0742f8  ldr x30, [sp], #0x20
0x06A41A48: c0035fd6  ret

; RVA 0x6A41A4C | private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
; bytes=4 sha256=accdd98ed1adcadda0b0c8b333c988b014f18926d604fbf24d0d043883c2a965 status=arm64_complete_bound indexed_start=True
0x06A41A4C: d3ffff17  b #0x6a41998

