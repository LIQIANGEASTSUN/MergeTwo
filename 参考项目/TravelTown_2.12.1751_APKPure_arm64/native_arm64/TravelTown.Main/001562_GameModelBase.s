; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1562 GameCore.Model.GameModelBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x601E5D4 | private MutableBindableProperty<bool> get__gameStarted() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x0601E5D4: 001840f9  ldr x0, [x0, #0x30]
0x0601E5D8: c0035fd6  ret

; RVA 0x601E5DC | protected BindableProperty<bool> get_GameStarted() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x0601E5DC: 001840f9  ldr x0, [x0, #0x30]
0x0601E5E0: c0035fd6  ret

; RVA 0x601E5E4 | protected override void InitializeModel() { }
; bytes=176 sha256=46441a7ebdc769626abdd3577937bb7f712fa74c63744e270fc4c21c3cb6a54a status=arm64_complete_bound indexed_start=True
0x0601E5E4: fe0f1df8  str x30, [sp, #-0x30]!
0x0601E5E8: f65701a9  stp x22, x21, [sp, #0x10]
0x0601E5EC: f44f02a9  stp x20, x19, [sp, #0x20]
0x0601E5F0: 34e800b0  adrp x20, #0x7d23000
0x0601E5F4: 96b10090  adrp x22, #0x764e000
0x0601E5F8: 95b500d0  adrp x21, #0x76d0000
0x0601E5FC: 88466139  ldrb w8, [x20, #0x851]
0x0601E600: d6ae43f9  ldr x22, [x22, #0x758]
0x0601E604: b53640f9  ldr x21, [x21, #0x68]
0x0601E608: f30300aa  mov x19, x0
0x0601E60C: 88010037  tbnz w8, #0, #0x601e63c
0x0601E610: 80b10090  adrp x0, #0x764e000
0x0601E614: 00ac43f9  ldr x0, [x0, #0x758]
0x0601E618: 00894597  bl #0x3180a18
0x0601E61C: 80b500d0  adrp x0, #0x76d0000
0x0601E620: 003440f9  ldr x0, [x0, #0x68]
0x0601E624: fd884597  bl #0x3180a18
0x0601E628: 20b500b0  adrp x0, #0x76c3000
0x0601E62C: 009c41f9  ldr x0, [x0, #0x338]
0x0601E630: fa884597  bl #0x3180a18
0x0601E634: 28008052  movz w8, #0x1
0x0601E638: 88462139  strb w8, [x20, #0x851]
0x0601E63C: e00313aa  mov x0, x19
0x0601E640: e1031faa  mov x1, xzr
0x0601E644: 43b62494  bl #0x694bf50
0x0601E648: c00240f9  ldr x0, [x22]
0x0601E64C: 741240f9  ldr x20, [x19, #0x20]
0x0601E650: 94894597  bl #0x3180ca0
0x0601E654: a20240f9  ldr x2, [x21]
0x0601E658: e10313aa  mov x1, x19
0x0601E65C: e3031faa  mov x3, xzr
0x0601E660: f50300aa  mov x21, x0
0x0601E664: 333cd797  bl #0x55ed730
0x0601E668: 540100b4  cbz x20, #0x601e690
0x0601E66C: 28b500b0  adrp x8, #0x76c3000
0x0601E670: 089d41f9  ldr x8, [x8, #0x338]
0x0601E674: e00314aa  mov x0, x20
0x0601E678: e10315aa  mov x1, x21
0x0601E67C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601E680: 020140f9  ldr x2, [x8]
0x0601E684: f65741a9  ldp x22, x21, [sp, #0x10]
0x0601E688: fe0743f8  ldr x30, [sp], #0x30
0x0601E68C: 2f1b7617  b #0x3da5348
0x0601E690: 87894597  bl #0x3180cac

; RVA 0x601E694 | private void GameStartedSignalReceived() { }
; bytes=260 sha256=e00a78f52048d8a64d5fa1e8927bef1e786bd4a0c5099d0c3186a2ef14044141 status=arm64_complete_bound indexed_start=True
0x0601E694: fe0f1df8  str x30, [sp, #-0x30]!
0x0601E698: f65701a9  stp x22, x21, [sp, #0x10]
0x0601E69C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0601E6A0: 34e800b0  adrp x20, #0x7d23000
0x0601E6A4: 96b10090  adrp x22, #0x764e000
0x0601E6A8: 95b500d0  adrp x21, #0x76d0000
0x0601E6AC: 884a6139  ldrb w8, [x20, #0x852]
0x0601E6B0: d6ae43f9  ldr x22, [x22, #0x758]
0x0601E6B4: b53640f9  ldr x21, [x21, #0x68]
0x0601E6B8: f30300aa  mov x19, x0
0x0601E6BC: 48020037  tbnz w8, #0, #0x601e704
0x0601E6C0: 80b10090  adrp x0, #0x764e000
0x0601E6C4: 00ac43f9  ldr x0, [x0, #0x758]
0x0601E6C8: d4884597  bl #0x3180a18
0x0601E6CC: 60b50090  adrp x0, #0x76ca000
0x0601E6D0: 007447f9  ldr x0, [x0, #0xee8]
0x0601E6D4: d1884597  bl #0x3180a18
0x0601E6D8: 80b500d0  adrp x0, #0x76d0000
0x0601E6DC: 003440f9  ldr x0, [x0, #0x68]
0x0601E6E0: ce884597  bl #0x3180a18
0x0601E6E4: a0b20090  adrp x0, #0x7672000
0x0601E6E8: 007c44f9  ldr x0, [x0, #0x8f8]
0x0601E6EC: cb884597  bl #0x3180a18
0x0601E6F0: 20b500b0  adrp x0, #0x76c3000
0x0601E6F4: 00ac41f9  ldr x0, [x0, #0x358]
0x0601E6F8: c8884597  bl #0x3180a18
0x0601E6FC: 28008052  movz w8, #0x1
0x0601E700: 884a2139  strb w8, [x20, #0x852]
0x0601E704: c00240f9  ldr x0, [x22]
0x0601E708: 741240f9  ldr x20, [x19, #0x20]
0x0601E70C: 65894597  bl #0x3180ca0
0x0601E710: a20240f9  ldr x2, [x21]
0x0601E714: e10313aa  mov x1, x19
0x0601E718: e3031faa  mov x3, xzr
0x0601E71C: f50300aa  mov x21, x0
0x0601E720: 043cd797  bl #0x55ed730
0x0601E724: 940300b4  cbz x20, #0x601e794
0x0601E728: 28b500b0  adrp x8, #0x76c3000
0x0601E72C: 08ad41f9  ldr x8, [x8, #0x358]
0x0601E730: 76b50090  adrp x22, #0x76ca000
0x0601E734: e00314aa  mov x0, x20
0x0601E738: e10315aa  mov x1, x21
0x0601E73C: 020140f9  ldr x2, [x8]
0x0601E740: d67647f9  ldr x22, [x22, #0xee8]
0x0601E744: c21e7697  bl #0x3da624c
0x0601E748: c00240f9  ldr x0, [x22]
0x0601E74C: 741640f9  ldr x20, [x19, #0x28]
0x0601E750: 08e040b9  ldr w8, [x0, #0xe0]
0x0601E754: 48000035  cbnz w8, #0x601e75c
0x0601E758: 0d894597  bl #0x3180b8c
0x0601E75C: e00313aa  mov x0, x19
0x0601E760: e10314aa  mov x1, x20
0x0601E764: e2031faa  mov x2, xzr
0x0601E768: ef4b0994  bl #0x6271724
0x0601E76C: 601a40f9  ldr x0, [x19, #0x30]
0x0601E770: 200100b4  cbz x0, #0x601e794
0x0601E774: a8b20090  adrp x8, #0x7672000
0x0601E778: 087d44f9  ldr x8, [x8, #0x8f8]
0x0601E77C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601E780: f65741a9  ldp x22, x21, [sp, #0x10]
0x0601E784: 21008052  movz w1, #0x1
0x0601E788: 020140f9  ldr x2, [x8]
0x0601E78C: fe0743f8  ldr x30, [sp], #0x30
0x0601E790: af0b8817  b #0x422164c
0x0601E794: 46894597  bl #0x3180cac

; RVA 0x601E798 | public void .ctor() { }
; bytes=140 sha256=cc467f7d54592d74c648686fd1ffdf90d6a067e158cd33a0827ba9d5811e3696 status=arm64_complete_bound indexed_start=True
0x0601E798: fe0f1df8  str x30, [sp, #-0x30]!
0x0601E79C: f65701a9  stp x22, x21, [sp, #0x10]
0x0601E7A0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0601E7A4: 35e800b0  adrp x21, #0x7d23000
0x0601E7A8: b6b200b0  adrp x22, #0x7673000
0x0601E7AC: b4b200b0  adrp x20, #0x7673000
0x0601E7B0: a84e6139  ldrb w8, [x21, #0x853]
0x0601E7B4: d64e40f9  ldr x22, [x22, #0x98]
0x0601E7B8: 945240f9  ldr x20, [x20, #0xa0]
0x0601E7BC: f30300aa  mov x19, x0
0x0601E7C0: 28010037  tbnz w8, #0, #0x601e7e4
0x0601E7C4: a0b200b0  adrp x0, #0x7673000
0x0601E7C8: 005040f9  ldr x0, [x0, #0xa0]
0x0601E7CC: 93884597  bl #0x3180a18
0x0601E7D0: a0b200b0  adrp x0, #0x7673000
0x0601E7D4: 004c40f9  ldr x0, [x0, #0x98]
0x0601E7D8: 90884597  bl #0x3180a18
0x0601E7DC: 28008052  movz w8, #0x1
0x0601E7E0: a84e2139  strb w8, [x21, #0x853]
0x0601E7E4: c00240f9  ldr x0, [x22]
0x0601E7E8: 2e894597  bl #0x3180ca0
0x0601E7EC: 820240f9  ldr x2, [x20]
0x0601E7F0: e1031f2a  mov w1, wzr
0x0601E7F4: f40300aa  mov x20, x0
0x0601E7F8: 8e0b8897  bl #0x4221630
0x0601E7FC: e00313aa  mov x0, x19
0x0601E800: 140c03f8  str x20, [x0, #0x30]!
0x0601E804: e10314aa  mov x1, x20
0x0601E808: 6f884597  bl #0x31809c4
0x0601E80C: e00313aa  mov x0, x19
0x0601E810: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601E814: f65741a9  ldp x22, x21, [sp, #0x10]
0x0601E818: e1031faa  mov x1, xzr
0x0601E81C: fe0743f8  ldr x30, [sp], #0x30
0x0601E820: ceb52414  b #0x694bf58

; Generic instantiation from Il2CppDumper script.json | RVA 0x3CC9388 | GameCore.Model.GameModelBase$$GetSystem<object>
; native signature: Il2CppObject* GameCore_Model_GameModelBase__GetSystem_object_ (GameCore_Model_GameModelBase_o* __this, const MethodInfo_3CC9388* method);
; bytes=168 sha256=a92b668cc6236ec9f2273c70bccba5aa11eba4d437cd4890ee6fcd0d1429476e status=arm64_complete_bound indexed_start=True
0x03CC9388: fe0f1ef8  str x30, [sp, #-0x20]!
0x03CC938C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03CC9390: 281c40f9  ldr x8, [x1, #0x38]
0x03CC9394: f40301aa  mov x20, x1
0x03CC9398: f30300aa  mov x19, x0
0x03CC939C: 680000b5  cbnz x8, #0x3cc93a8
0x03CC93A0: e00314aa  mov x0, x20
0x03CC93A4: 3535d297  bl #0x3156878
0x03CC93A8: 731640f9  ldr x19, [x19, #0x28]
0x03CC93AC: 130400b4  cbz x19, #0x3cc942c
0x03CC93B0: 891e40f9  ldr x9, [x20, #0x38]
0x03CC93B4: 680240f9  ldr x8, [x19]
0x03CC93B8: 340140f9  ldr x20, [x9]
0x03CC93BC: 095d4279  ldrh w9, [x8, #0x12e]
0x03CC93C0: 811240f9  ldr x1, [x20, #0x20]
0x03CC93C4: 82a24079  ldrh w2, [x20, #0x50]
0x03CC93C8: 290100b4  cbz x9, #0x3cc93ec
0x03CC93CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x03CC93D0: 4a210091  add x10, x10, #8
0x03CC93D4: 4b815ff8  ldur x11, [x10, #-8]
0x03CC93D8: 7f0101eb  cmp x11, x1
0x03CC93DC: e0000054  b.eq #0x3cc93f8
0x03CC93E0: 290500f1  subs x9, x9, #1
0x03CC93E4: 4a410091  add x10, x10, #0x10
0x03CC93E8: 61ffff54  b.ne #0x3cc93d4
0x03CC93EC: e00313aa  mov x0, x19
0x03CC93F0: c835d297  bl #0x3156b10
0x03CC93F4: 05000014  b #0x3cc9408
0x03CC93F8: 490140b9  ldr w9, [x10]
0x03CC93FC: 2901020b  add w9, w9, w2
0x03CC9400: 08d1298b  add x8, x8, w9, sxtw #4
0x03CC9404: 00e10491  add x0, x8, #0x138
0x03CC9408: 000440f9  ldr x0, [x0, #8]
0x03CC940C: e10314aa  mov x1, x20
0x03CC9410: deddd297  bl #0x3180b88
0x03CC9414: e10300aa  mov x1, x0
0x03CC9418: 020440f9  ldr x2, [x0, #8]
0x03CC941C: e00313aa  mov x0, x19
0x03CC9420: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03CC9424: fe0742f8  ldr x30, [sp], #0x20
0x03CC9428: 40001fd6  br x2
0x03CC942C: 20ded297  bl #0x3180cac

