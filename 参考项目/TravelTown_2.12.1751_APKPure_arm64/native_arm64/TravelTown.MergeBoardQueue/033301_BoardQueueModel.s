; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33301 Merger.MergeBoardQueue.Models.BoardQueueModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A585EC | public BindableProperty<int> get_BoardEventQueueCount() { }
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x06A585EC: 002c40f9  ldr x0, [x0, #0x58]
0x06A585F0: c0035fd6  ret

; RVA 0x6A585F4 | public BindableProperty<QueuedItem> get_HeadItem() { }
; bytes=8 sha256=dc0647a8f63aacbe9d6b7a7bf9b54950de74e29f82066e71731415b61d501071 status=arm64_complete_bound indexed_start=True
0x06A585F4: 003040f9  ldr x0, [x0, #0x60]
0x06A585F8: c0035fd6  ret

; RVA 0x6A585FC | public int get_Count() { }
; bytes=88 sha256=5ec2b920bd8572b6c7bcb1719ee97c094910c7a1dba3284b8f7c9dc2c53ddc7b status=arm64_complete_bound indexed_start=True
0x06A585FC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A58600: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A58604: 949600d0  adrp x20, #0x7d2a000
0x06A58608: 88225839  ldrb w8, [x20, #0x608]
0x06A5860C: f30300aa  mov x19, x0
0x06A58610: c8000037  tbnz w8, #0, #0x6a58628
0x06A58614: c0660090  adrp x0, #0x7730000
0x06A58618: 008c41f9  ldr x0, [x0, #0x318]
0x06A5861C: ffa01c97  bl #0x3180a18
0x06A58620: 28008052  movz w8, #0x1
0x06A58624: 88221839  strb w8, [x20, #0x608]
0x06A58628: 681640f9  ldr x8, [x19, #0x28]
0x06A5862C: 280100b4  cbz x8, #0x6a58650
0x06A58630: 691a40f9  ldr x9, [x19, #0x30]
0x06A58634: e90000b4  cbz x9, #0x6a58650
0x06A58638: 081940b9  ldr w8, [x8, #0x18]
0x06A5863C: 291940b9  ldr w9, [x9, #0x18]
0x06A58640: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A58644: 2001080b  add w0, w9, w8
0x06A58648: fe0742f8  ldr x30, [sp], #0x20
0x06A5864C: c0035fd6  ret
0x06A58650: 97a11c97  bl #0x3180cac

; RVA 0x6A58654 | protected override void InitializeModel() { }
; bytes=328 sha256=dba0e23dcee4353ba9ae5de3d6948c7e0a7b6f20b7a7c1be51452ebe07034a6e status=arm64_complete_bound indexed_start=True
0x06A58654: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A58658: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A5865C: f65702a9  stp x22, x21, [sp, #0x20]
0x06A58660: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A58664: 949600d0  adrp x20, #0x7d2a000
0x06A58668: d9660090  adrp x25, #0x7730000
0x06A5866C: d8660090  adrp x24, #0x7730000
0x06A58670: d75f00d0  adrp x23, #0x7652000
0x06A58674: d65f00d0  adrp x22, #0x7652000
0x06A58678: d5660090  adrp x21, #0x7730000
0x06A5867C: 88265839  ldrb w8, [x20, #0x609]
0x06A58680: 399341f9  ldr x25, [x25, #0x320]
0x06A58684: 189741f9  ldr x24, [x24, #0x328]
0x06A58688: f74a46f9  ldr x23, [x23, #0xc90]
0x06A5868C: d64646f9  ldr x22, [x22, #0xc88]
0x06A58690: b59a41f9  ldr x21, [x21, #0x330]
0x06A58694: f30300aa  mov x19, x0
0x06A58698: 48020037  tbnz w8, #0, #0x6a586e0
0x06A5869C: c05f00d0  adrp x0, #0x7652000
0x06A586A0: 004446f9  ldr x0, [x0, #0xc88]
0x06A586A4: dda01c97  bl #0x3180a18
0x06A586A8: c05f00d0  adrp x0, #0x7652000
0x06A586AC: 004846f9  ldr x0, [x0, #0xc90]
0x06A586B0: daa01c97  bl #0x3180a18
0x06A586B4: c0660090  adrp x0, #0x7730000
0x06A586B8: 009441f9  ldr x0, [x0, #0x328]
0x06A586BC: d7a01c97  bl #0x3180a18
0x06A586C0: c0660090  adrp x0, #0x7730000
0x06A586C4: 009041f9  ldr x0, [x0, #0x320]
0x06A586C8: d4a01c97  bl #0x3180a18
0x06A586CC: c0660090  adrp x0, #0x7730000
0x06A586D0: 009841f9  ldr x0, [x0, #0x330]
0x06A586D4: d1a01c97  bl #0x3180a18
0x06A586D8: 28008052  movz w8, #0x1
0x06A586DC: 88261839  strb w8, [x20, #0x609]
0x06A586E0: e00313aa  mov x0, x19
0x06A586E4: e1031faa  mov x1, xzr
0x06A586E8: 1acefb97  bl #0x694bf50
0x06A586EC: 200340f9  ldr x0, [x25]
0x06A586F0: 6ca11c97  bl #0x3180ca0
0x06A586F4: 010340f9  ldr x1, [x24]
0x06A586F8: f40300aa  mov x20, x0
0x06A586FC: be5fa697  bl #0x53f05f4
0x06A58700: e00313aa  mov x0, x19
0x06A58704: 148c02f8  str x20, [x0, #0x28]!
0x06A58708: e10314aa  mov x1, x20
0x06A5870C: aea01c97  bl #0x31809c4
0x06A58710: 200340f9  ldr x0, [x25]
0x06A58714: 63a11c97  bl #0x3180ca0
0x06A58718: 010340f9  ldr x1, [x24]
0x06A5871C: f40300aa  mov x20, x0
0x06A58720: b55fa697  bl #0x53f05f4
0x06A58724: e00313aa  mov x0, x19
0x06A58728: 140c03f8  str x20, [x0, #0x30]!
0x06A5872C: e10314aa  mov x1, x20
0x06A58730: a5a01c97  bl #0x31809c4
0x06A58734: e00240f9  ldr x0, [x23]
0x06A58738: 5aa11c97  bl #0x3180ca0
0x06A5873C: c10240f9  ldr x1, [x22]
0x06A58740: f40300aa  mov x20, x0
0x06A58744: bf9da197  bl #0x52bfe40
0x06A58748: e00313aa  mov x0, x19
0x06A5874C: 148c03f8  str x20, [x0, #0x38]!
0x06A58750: e10314aa  mov x1, x20
0x06A58754: 9ca01c97  bl #0x31809c4
0x06A58758: a00240f9  ldr x0, [x21]
0x06A5875C: 51a11c97  bl #0x3180ca0
0x06A58760: e1031faa  mov x1, xzr
0x06A58764: f40300aa  mov x20, x0
0x06A58768: a507b297  bl #0x56da5fc
0x06A5876C: e00313aa  mov x0, x19
0x06A58770: 140c04f8  str x20, [x0, #0x40]!
0x06A58774: e10314aa  mov x1, x20
0x06A58778: 93a01c97  bl #0x31809c4
0x06A5877C: e00313aa  mov x0, x19
0x06A58780: 07000094  bl #0x6a5879c
0x06A58784: e00313aa  mov x0, x19
0x06A58788: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A5878C: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A58790: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A58794: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A58798: 0c000014  b #0x6a587c8

; RVA 0x6A5887C | protected override void SubscribeToSignals() { }
; bytes=176 sha256=49abf84b26b683020c543b0441405e3f14508c7360a76917bdfd7c5edb19715e status=arm64_complete_bound indexed_start=True
0x06A5887C: fe0f1df8  str x30, [sp, #-0x30]!
0x06A58880: f65701a9  stp x22, x21, [sp, #0x10]
0x06A58884: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A58888: 949600d0  adrp x20, #0x7d2a000
0x06A5888C: d66000d0  adrp x22, #0x7672000
0x06A58890: d5660090  adrp x21, #0x7730000
0x06A58894: 882a5839  ldrb w8, [x20, #0x60a]
0x06A58898: d66a43f9  ldr x22, [x22, #0x6d0]
0x06A5889C: b5a641f9  ldr x21, [x21, #0x348]
0x06A588A0: f30300aa  mov x19, x0
0x06A588A4: 88010037  tbnz w8, #0, #0x6a588d4
0x06A588A8: c06000d0  adrp x0, #0x7672000
0x06A588AC: 006843f9  ldr x0, [x0, #0x6d0]
0x06A588B0: 5aa01c97  bl #0x3180a18
0x06A588B4: c0660090  adrp x0, #0x7730000
0x06A588B8: 00a441f9  ldr x0, [x0, #0x348]
0x06A588BC: 57a01c97  bl #0x3180a18
0x06A588C0: 80640090  adrp x0, #0x76e8000
0x06A588C4: 007c47f9  ldr x0, [x0, #0xef8]
0x06A588C8: 54a01c97  bl #0x3180a18
0x06A588CC: 28008052  movz w8, #0x1
0x06A588D0: 882a1839  strb w8, [x20, #0x60a]
0x06A588D4: e00313aa  mov x0, x19
0x06A588D8: e1031faa  mov x1, xzr
0x06A588DC: 6d69f997  bl #0x68b2e90
0x06A588E0: c00240f9  ldr x0, [x22]
0x06A588E4: 741240f9  ldr x20, [x19, #0x20]
0x06A588E8: eea01c97  bl #0x3180ca0
0x06A588EC: a20240f9  ldr x2, [x21]
0x06A588F0: e10313aa  mov x1, x19
0x06A588F4: e3031faa  mov x3, xzr
0x06A588F8: f50300aa  mov x21, x0
0x06A588FC: 3626a397  bl #0x53221d4
0x06A58900: 540100b4  cbz x20, #0x6a58928
0x06A58904: 88640090  adrp x8, #0x76e8000
0x06A58908: 087d47f9  ldr x8, [x8, #0xef8]
0x06A5890C: e00314aa  mov x0, x20
0x06A58910: e10315aa  mov x1, x21
0x06A58914: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A58918: 020140f9  ldr x2, [x8]
0x06A5891C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A58920: fe0743f8  ldr x30, [sp], #0x30
0x06A58924: 78324d17  b #0x3da5304
0x06A58928: e1a01c97  bl #0x3180cac

; RVA 0x6A5892C | protected override void UnsubscribeFromSignals() { }
; bytes=176 sha256=10709758f17de4ae65019fa51c5b237332983141754d4fc8c32a66b4a350b224 status=arm64_complete_bound indexed_start=True
0x06A5892C: fe0f1df8  str x30, [sp, #-0x30]!
0x06A58930: f65701a9  stp x22, x21, [sp, #0x10]
0x06A58934: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A58938: 949600d0  adrp x20, #0x7d2a000
0x06A5893C: d66000d0  adrp x22, #0x7672000
0x06A58940: d5660090  adrp x21, #0x7730000
0x06A58944: 882e5839  ldrb w8, [x20, #0x60b]
0x06A58948: d66a43f9  ldr x22, [x22, #0x6d0]
0x06A5894C: b5a641f9  ldr x21, [x21, #0x348]
0x06A58950: f30300aa  mov x19, x0
0x06A58954: 88010037  tbnz w8, #0, #0x6a58984
0x06A58958: c06000d0  adrp x0, #0x7672000
0x06A5895C: 006843f9  ldr x0, [x0, #0x6d0]
0x06A58960: 2ea01c97  bl #0x3180a18
0x06A58964: c0660090  adrp x0, #0x7730000
0x06A58968: 00a441f9  ldr x0, [x0, #0x348]
0x06A5896C: 2ba01c97  bl #0x3180a18
0x06A58970: c0660090  adrp x0, #0x7730000
0x06A58974: 00a841f9  ldr x0, [x0, #0x350]
0x06A58978: 28a01c97  bl #0x3180a18
0x06A5897C: 28008052  movz w8, #0x1
0x06A58980: 882e1839  strb w8, [x20, #0x60b]
0x06A58984: c00240f9  ldr x0, [x22]
0x06A58988: 741240f9  ldr x20, [x19, #0x20]
0x06A5898C: c5a01c97  bl #0x3180ca0
0x06A58990: a20240f9  ldr x2, [x21]
0x06A58994: e10313aa  mov x1, x19
0x06A58998: e3031faa  mov x3, xzr
0x06A5899C: f50300aa  mov x21, x0
0x06A589A0: 0d26a397  bl #0x53221d4
0x06A589A4: b40100b4  cbz x20, #0x6a589d8
0x06A589A8: c8660090  adrp x8, #0x7730000
0x06A589AC: 08a941f9  ldr x8, [x8, #0x350]
0x06A589B0: e00314aa  mov x0, x20
0x06A589B4: e10315aa  mov x1, x21
0x06A589B8: 020140f9  ldr x2, [x8]
0x06A589BC: 13364d97  bl #0x3da6208
0x06A589C0: e00313aa  mov x0, x19
0x06A589C4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A589C8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A589CC: e1031faa  mov x1, xzr
0x06A589D0: fe0743f8  ldr x30, [sp], #0x30
0x06A589D4: 3069f917  b #0x68b2e94
0x06A589D8: b5a01c97  bl #0x3180cac

; RVA 0x6A589DC | private void OnRewardFlyAnimationStarted(RewardsFlyAnimationStartedSignal signal) { }
; bytes=204 sha256=bcdbc20f86f5a0abbe3250ff7d4643bb49474e7be0b52846a4cc3a1c3e752dd1 status=arm64_complete_bound indexed_start=True
0x06A589DC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A589E0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A589E4: 959600d0  adrp x21, #0x7d2a000
0x06A589E8: a8325839  ldrb w8, [x21, #0x60c]
0x06A589EC: f40301aa  mov x20, x1
0x06A589F0: f30300aa  mov x19, x0
0x06A589F4: c8000037  tbnz w8, #0, #0x6a58a0c
0x06A589F8: c06000d0  adrp x0, #0x7672000
0x06A589FC: 00e843f9  ldr x0, [x0, #0x7d0]
0x06A58A00: 06a01c97  bl #0x3180a18
0x06A58A04: 28008052  movz w8, #0x1
0x06A58A08: a8321839  strb w8, [x21, #0x60c]
0x06A58A0C: d40400b4  cbz x20, #0x6a58aa4
0x06A58A10: 940a40f9  ldr x20, [x20, #0x10]
0x06A58A14: 940400b4  cbz x20, #0x6a58aa4
0x06A58A18: ca6000d0  adrp x10, #0x7672000
0x06A58A1C: 880240f9  ldr x8, [x20]
0x06A58A20: 4ae943f9  ldr x10, [x10, #0x7d0]
0x06A58A24: 095d4279  ldrh w9, [x8, #0x12e]
0x06A58A28: 410140f9  ldr x1, [x10]
0x06A58A2C: 290100b4  cbz x9, #0x6a58a50
0x06A58A30: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A58A34: 4a210091  add x10, x10, #8
0x06A58A38: 4b815ff8  ldur x11, [x10, #-8]
0x06A58A3C: 7f0101eb  cmp x11, x1
0x06A58A40: 00010054  b.eq #0x6a58a60
0x06A58A44: 290500f1  subs x9, x9, #1
0x06A58A48: 4a410091  add x10, x10, #0x10
0x06A58A4C: 61ffff54  b.ne #0x6a58a38
0x06A58A50: e2008052  movz w2, #0x7
0x06A58A54: e00314aa  mov x0, x20
0x06A58A58: 2ef81b97  bl #0x3156b10
0x06A58A5C: 05000014  b #0x6a58a70
0x06A58A60: 490140b9  ldr w9, [x10]
0x06A58A64: 291d0011  add w9, w9, #7
0x06A58A68: 08d1298b  add x8, x8, w9, sxtw #4
0x06A58A6C: 00e10491  add x0, x8, #0x138
0x06A58A70: 080440a9  ldp x8, x1, [x0]
0x06A58A74: e00314aa  mov x0, x20
0x06A58A78: 00013fd6  blr x8
0x06A58A7C: 08001f32  orr w8, w0, #2
0x06A58A80: 1fd90071  cmp w8, #0x36
0x06A58A84: a1000054  b.ne #0x6a58a98
0x06A58A88: e00313aa  mov x0, x19
0x06A58A8C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A58A90: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A58A94: 4dffff17  b #0x6a587c8
0x06A58A98: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A58A9C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A58AA0: c0035fd6  ret
0x06A58AA4: 82a01c97  bl #0x3180cac

; RVA 0x6A58AA8 | public QueuedItem Peek() { }
; bytes=72 sha256=86d378920566fe3c8ee55c0e7388b4a1d91549caf30545b0517a40d8ae8dd2c1 status=arm64_complete_bound indexed_start=True
0x06A58AA8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A58AAC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A58AB0: 949600d0  adrp x20, #0x7d2a000
0x06A58AB4: 88365839  ldrb w8, [x20, #0x60d]
0x06A58AB8: f30300aa  mov x19, x0
0x06A58ABC: c8000037  tbnz w8, #0, #0x6a58ad4
0x06A58AC0: c0660090  adrp x0, #0x7730000
0x06A58AC4: 00ac41f9  ldr x0, [x0, #0x358]
0x06A58AC8: d49f1c97  bl #0x3180a18
0x06A58ACC: 28008052  movz w8, #0x1
0x06A58AD0: 88361839  strb w8, [x20, #0x60d]
0x06A58AD4: e00313aa  mov x0, x19
0x06A58AD8: 06000094  bl #0x6a58af0
0x06A58ADC: 400000b4  cbz x0, #0x6a58ae4
0x06A58AE0: 001440f9  ldr x0, [x0, #0x28]
0x06A58AE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A58AE8: fe0742f8  ldr x30, [sp], #0x20
0x06A58AEC: c0035fd6  ret

; RVA 0x6A58B90 | public QueuedItem Dequeue() { }
; bytes=236 sha256=075ab0850b5048f8f736c9e21181fe4f36c4a9fd7c540afa034bc0044c829931 status=arm64_complete_bound indexed_start=True
0x06A58B90: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A58B94: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A58B98: 949600d0  adrp x20, #0x7d2a000
0x06A58B9C: 883a5839  ldrb w8, [x20, #0x60e]
0x06A58BA0: f30300aa  mov x19, x0
0x06A58BA4: 48020037  tbnz w8, #0, #0x6a58bec
0x06A58BA8: c05f00d0  adrp x0, #0x7652000
0x06A58BAC: 004046f9  ldr x0, [x0, #0xc80]
0x06A58BB0: 9a9f1c97  bl #0x3180a18
0x06A58BB4: c0660090  adrp x0, #0x7730000
0x06A58BB8: 00b841f9  ldr x0, [x0, #0x370]
0x06A58BBC: 979f1c97  bl #0x3180a18
0x06A58BC0: c0660090  adrp x0, #0x7730000
0x06A58BC4: 00ac41f9  ldr x0, [x0, #0x358]
0x06A58BC8: 949f1c97  bl #0x3180a18
0x06A58BCC: c0660090  adrp x0, #0x7730000
0x06A58BD0: 00bc41f9  ldr x0, [x0, #0x378]
0x06A58BD4: 919f1c97  bl #0x3180a18
0x06A58BD8: c0660090  adrp x0, #0x7730000
0x06A58BDC: 00c041f9  ldr x0, [x0, #0x380]
0x06A58BE0: 8e9f1c97  bl #0x3180a18
0x06A58BE4: 28008052  movz w8, #0x1
0x06A58BE8: 883a1839  strb w8, [x20, #0x60e]
0x06A58BEC: e00313aa  mov x0, x19
0x06A58BF0: c0ffff97  bl #0x6a58af0
0x06A58BF4: c00300b4  cbz x0, #0x6a58c6c
0x06A58BF8: f40300aa  mov x20, x0
0x06A58BFC: 000840f9  ldr x0, [x0, #0x10]
0x06A58C00: c00300b4  cbz x0, #0x6a58c78
0x06A58C04: c8660090  adrp x8, #0x7730000
0x06A58C08: 08bd41f9  ldr x8, [x8, #0x378]
0x06A58C0C: e10314aa  mov x1, x20
0x06A58C10: 020140f9  ldr x2, [x8]
0x06A58C14: 6060a697  bl #0x53f0d94
0x06A58C18: 881640f9  ldr x8, [x20, #0x28]
0x06A58C1C: e80200b4  cbz x8, #0x6a58c78
0x06A58C20: 601e40f9  ldr x0, [x19, #0x38]
0x06A58C24: a00200b4  cbz x0, #0x6a58c78
0x06A58C28: c95f00d0  adrp x9, #0x7652000
0x06A58C2C: 294146f9  ldr x9, [x9, #0xc80]
0x06A58C30: 011140f9  ldr x1, [x8, #0x20]
0x06A58C34: 220140f9  ldr x2, [x9]
0x06A58C38: fba0a197  bl #0x52c1024
0x06A58C3C: 603640f9  ldr x0, [x19, #0x68]
0x06A58C40: c00100b4  cbz x0, #0x6a58c78
0x06A58C44: c8660090  adrp x8, #0x7730000
0x06A58C48: 08c141f9  ldr x8, [x8, #0x380]
0x06A58C4C: 811640f9  ldr x1, [x20, #0x28]
0x06A58C50: 020140f9  ldr x2, [x8]
0x06A58C54: a9b35797  bl #0x4045af8
0x06A58C58: e00313aa  mov x0, x19
0x06A58C5C: d0feff97  bl #0x6a5879c
0x06A58C60: e00313aa  mov x0, x19
0x06A58C64: d9feff97  bl #0x6a587c8
0x06A58C68: 801640f9  ldr x0, [x20, #0x28]
0x06A58C6C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A58C70: fe0742f8  ldr x30, [sp], #0x20
0x06A58C74: c0035fd6  ret
0x06A58C78: 0da01c97  bl #0x3180cac

; RVA 0x6A58C7C | public void ExtractItem(QueuedItem item) { }
; bytes=204 sha256=a3be65a96d851f42fa98e6262086169d73838a964c84602af7e95b893d951424 status=arm64_complete_bound indexed_start=True
0x06A58C7C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A58C80: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A58C84: 959600d0  adrp x21, #0x7d2a000
0x06A58C88: a83e5839  ldrb w8, [x21, #0x60f]
0x06A58C8C: f40301aa  mov x20, x1
0x06A58C90: f30300aa  mov x19, x0
0x06A58C94: 88010037  tbnz w8, #0, #0x6a58cc4
0x06A58C98: c05f00d0  adrp x0, #0x7652000
0x06A58C9C: 004046f9  ldr x0, [x0, #0xc80]
0x06A58CA0: 5e9f1c97  bl #0x3180a18
0x06A58CA4: c0660090  adrp x0, #0x7730000
0x06A58CA8: 00c441f9  ldr x0, [x0, #0x388]
0x06A58CAC: 5b9f1c97  bl #0x3180a18
0x06A58CB0: c0660090  adrp x0, #0x7730000
0x06A58CB4: 00c041f9  ldr x0, [x0, #0x380]
0x06A58CB8: 589f1c97  bl #0x3180a18
0x06A58CBC: 28008052  movz w8, #0x1
0x06A58CC0: a83e1839  strb w8, [x21, #0x60f]
0x06A58CC4: 601640f9  ldr x0, [x19, #0x28]
0x06A58CC8: e00300b4  cbz x0, #0x6a58d44
0x06A58CCC: d5660090  adrp x21, #0x7730000
0x06A58CD0: b5c641f9  ldr x21, [x21, #0x388]
0x06A58CD4: e10314aa  mov x1, x20
0x06A58CD8: a20240f9  ldr x2, [x21]
0x06A58CDC: 1960a697  bl #0x53f0d40
0x06A58CE0: c0000037  tbnz w0, #0, #0x6a58cf8
0x06A58CE4: 601a40f9  ldr x0, [x19, #0x30]
0x06A58CE8: e00200b4  cbz x0, #0x6a58d44
0x06A58CEC: a20240f9  ldr x2, [x21]
0x06A58CF0: e10314aa  mov x1, x20
0x06A58CF4: 1360a697  bl #0x53f0d40
0x06A58CF8: 740200b4  cbz x20, #0x6a58d44
0x06A58CFC: 601e40f9  ldr x0, [x19, #0x38]
0x06A58D00: 200200b4  cbz x0, #0x6a58d44
0x06A58D04: c85f00d0  adrp x8, #0x7652000
0x06A58D08: 084146f9  ldr x8, [x8, #0xc80]
0x06A58D0C: 811240f9  ldr x1, [x20, #0x20]
0x06A58D10: 020140f9  ldr x2, [x8]
0x06A58D14: c4a0a197  bl #0x52c1024
0x06A58D18: 603640f9  ldr x0, [x19, #0x68]
0x06A58D1C: 400100b4  cbz x0, #0x6a58d44
0x06A58D20: c8660090  adrp x8, #0x7730000
0x06A58D24: 08c141f9  ldr x8, [x8, #0x380]
0x06A58D28: e10314aa  mov x1, x20
0x06A58D2C: 020140f9  ldr x2, [x8]
0x06A58D30: 72b35797  bl #0x4045af8
0x06A58D34: e00313aa  mov x0, x19
0x06A58D38: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A58D3C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A58D40: 97feff17  b #0x6a5879c
0x06A58D44: da9f1c97  bl #0x3180cac

; RVA 0x6A58D48 | public QueuedItem FindNewestInQueue(string itemId) { }
; bytes=516 sha256=fcbce4d10befe33f677b1fe3ad99cd0bc695e5c0fe693f29abaeb89d34356402 status=arm64_complete_bound indexed_start=True
0x06A58D48: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A58D4C: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A58D50: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A58D54: f65703a9  stp x22, x21, [sp, #0x30]
0x06A58D58: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A58D5C: 959600d0  adrp x21, #0x7d2a000
0x06A58D60: d6660090  adrp x22, #0x7730000
0x06A58D64: a8425839  ldrb w8, [x21, #0x610]
0x06A58D68: d6ca41f9  ldr x22, [x22, #0x390]
0x06A58D6C: f40301aa  mov x20, x1
0x06A58D70: f30300aa  mov x19, x0
0x06A58D74: 28040037  tbnz w8, #0, #0x6a58df8
0x06A58D78: c0660090  adrp x0, #0x7730000
0x06A58D7C: 00cc41f9  ldr x0, [x0, #0x398]
0x06A58D80: 269f1c97  bl #0x3180a18
0x06A58D84: c0660090  adrp x0, #0x7730000
0x06A58D88: 00d041f9  ldr x0, [x0, #0x3a0]
0x06A58D8C: 239f1c97  bl #0x3180a18
0x06A58D90: c0660090  adrp x0, #0x7730000
0x06A58D94: 00d441f9  ldr x0, [x0, #0x3a8]
0x06A58D98: 209f1c97  bl #0x3180a18
0x06A58D9C: c0660090  adrp x0, #0x7730000
0x06A58DA0: 00d841f9  ldr x0, [x0, #0x3b0]
0x06A58DA4: 1d9f1c97  bl #0x3180a18
0x06A58DA8: c0660090  adrp x0, #0x7730000
0x06A58DAC: 00dc41f9  ldr x0, [x0, #0x3b8]
0x06A58DB0: 1a9f1c97  bl #0x3180a18
0x06A58DB4: c0660090  adrp x0, #0x7730000
0x06A58DB8: 00e041f9  ldr x0, [x0, #0x3c0]
0x06A58DBC: 179f1c97  bl #0x3180a18
0x06A58DC0: c0660090  adrp x0, #0x7730000
0x06A58DC4: 00e441f9  ldr x0, [x0, #0x3c8]
0x06A58DC8: 149f1c97  bl #0x3180a18
0x06A58DCC: c0660090  adrp x0, #0x7730000
0x06A58DD0: 00e841f9  ldr x0, [x0, #0x3d0]
0x06A58DD4: 119f1c97  bl #0x3180a18
0x06A58DD8: c0660090  adrp x0, #0x7730000
0x06A58DDC: 00c841f9  ldr x0, [x0, #0x390]
0x06A58DE0: 0e9f1c97  bl #0x3180a18
0x06A58DE4: c0660090  adrp x0, #0x7730000
0x06A58DE8: 00ec41f9  ldr x0, [x0, #0x3d8]
0x06A58DEC: 0b9f1c97  bl #0x3180a18
0x06A58DF0: 28008052  movz w8, #0x1
0x06A58DF4: a8421839  strb w8, [x21, #0x610]
0x06A58DF8: c00240f9  ldr x0, [x22]
0x06A58DFC: a99f1c97  bl #0x3180ca0
0x06A58E00: e1031faa  mov x1, xzr
0x06A58E04: f50300aa  mov x21, x0
0x06A58E08: fd05b297  bl #0x56da5fc
0x06A58E0C: f50900b4  cbz x21, #0x6a58f48
0x06A58E10: d7660090  adrp x23, #0x7730000
0x06A58E14: d8660090  adrp x24, #0x7730000
0x06A58E18: d9660090  adrp x25, #0x7730000
0x06A58E1C: da660090  adrp x26, #0x7730000
0x06A58E20: d6660090  adrp x22, #0x7730000
0x06A58E24: f7ce41f9  ldr x23, [x23, #0x398]
0x06A58E28: 18df41f9  ldr x24, [x24, #0x3b8]
0x06A58E2C: 39eb41f9  ldr x25, [x25, #0x3d0]
0x06A58E30: 5adb41f9  ldr x26, [x26, #0x3b0]
0x06A58E34: d6ee41f9  ldr x22, [x22, #0x3d8]
0x06A58E38: e00315aa  mov x0, x21
0x06A58E3C: 140c01f8  str x20, [x0, #0x10]!
0x06A58E40: e10314aa  mov x1, x20
0x06A58E44: e09e1c97  bl #0x31809c4
0x06A58E48: 608642a9  ldp x0, x1, [x19, #0x28]
0x06A58E4C: e20240f9  ldr x2, [x23]
0x06A58E50: f2784797  bl #0x3c37218
0x06A58E54: 080340f9  ldr x8, [x24]
0x06A58E58: f30300aa  mov x19, x0
0x06A58E5C: e00308aa  mov x0, x8
0x06A58E60: 909f1c97  bl #0x3180ca0
0x06A58E64: 220340f9  ldr x2, [x25]
0x06A58E68: e10315aa  mov x1, x21
0x06A58E6C: e3031faa  mov x3, xzr
0x06A58E70: f40300aa  mov x20, x0
0x06A58E74: 52f49f97  bl #0x5255fbc
0x06A58E78: 420340f9  ldr x2, [x26]
0x06A58E7C: e00313aa  mov x0, x19
0x06A58E80: e10314aa  mov x1, x20
0x06A58E84: 09b94897  bl #0x3c872a8
0x06A58E88: c80240f9  ldr x8, [x22]
0x06A58E8C: f30300aa  mov x19, x0
0x06A58E90: 09e140b9  ldr w9, [x8, #0xe0]
0x06A58E94: 89000035  cbnz w9, #0x6a58ea4
0x06A58E98: e00308aa  mov x0, x8
0x06A58E9C: 3c9f1c97  bl #0x3180b8c
0x06A58EA0: c80240f9  ldr x8, [x22]
0x06A58EA4: 095d40f9  ldr x9, [x8, #0xb8]
0x06A58EA8: d8660090  adrp x24, #0x7730000
0x06A58EAC: d7660090  adrp x23, #0x7730000
0x06A58EB0: 340540f9  ldr x20, [x9, #8]
0x06A58EB4: 18d741f9  ldr x24, [x24, #0x3a8]
0x06A58EB8: f7d241f9  ldr x23, [x23, #0x3a0]
0x06A58EBC: 140300b5  cbnz x20, #0x6a58f1c
0x06A58EC0: 09e140b9  ldr w9, [x8, #0xe0]
0x06A58EC4: 89000035  cbnz w9, #0x6a58ed4
0x06A58EC8: e00308aa  mov x0, x8
0x06A58ECC: 309f1c97  bl #0x3180b8c
0x06A58ED0: c80240f9  ldr x8, [x22]
0x06A58ED4: c9660090  adrp x9, #0x7730000
0x06A58ED8: 085d40f9  ldr x8, [x8, #0xb8]
0x06A58EDC: 29e141f9  ldr x9, [x9, #0x3c0]
0x06A58EE0: 150140f9  ldr x21, [x8]
0x06A58EE4: 200140f9  ldr x0, [x9]
0x06A58EE8: 6e9f1c97  bl #0x3180ca0
0x06A58EEC: c8660090  adrp x8, #0x7730000
0x06A58EF0: 08e541f9  ldr x8, [x8, #0x3c8]
0x06A58EF4: e10315aa  mov x1, x21
0x06A58EF8: e3031faa  mov x3, xzr
0x06A58EFC: f40300aa  mov x20, x0
0x06A58F00: 020140f9  ldr x2, [x8]
0x06A58F04: 66f69f97  bl #0x525689c
0x06A58F08: c80240f9  ldr x8, [x22]
0x06A58F0C: e10314aa  mov x1, x20
0x06A58F10: 005d40f9  ldr x0, [x8, #0xb8]
0x06A58F14: 148c00f8  str x20, [x0, #8]!
0x06A58F18: ab9e1c97  bl #0x31809c4
0x06A58F1C: 020340f9  ldr x2, [x24]
0x06A58F20: e00313aa  mov x0, x19
0x06A58F24: e10314aa  mov x1, x20
0x06A58F28: 4bca4797  bl #0x3c4b854
0x06A58F2C: e10240f9  ldr x1, [x23]
0x06A58F30: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A58F34: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A58F38: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A58F3C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A58F40: fe0745f8  ldr x30, [sp], #0x50
0x06A58F44: 90a94717  b #0x3c43584
0x06A58F48: 599f1c97  bl #0x3180cac

; RVA 0x6A58F54 | public IEnumerable<QueuedItem> GetAllItems() { }
; bytes=72 sha256=bb623c9f624b433196df351017e6369a03ae4a67d7cc2deae7e0d69a57c13a11 status=arm64_complete_bound indexed_start=True
0x06A58F54: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A58F58: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A58F5C: 959600d0  adrp x21, #0x7d2a000
0x06A58F60: d4660090  adrp x20, #0x7730000
0x06A58F64: a8465839  ldrb w8, [x21, #0x611]
0x06A58F68: 94ce41f9  ldr x20, [x20, #0x398]
0x06A58F6C: f30300aa  mov x19, x0
0x06A58F70: c8000037  tbnz w8, #0, #0x6a58f88
0x06A58F74: c0660090  adrp x0, #0x7730000
0x06A58F78: 00cc41f9  ldr x0, [x0, #0x398]
0x06A58F7C: a79e1c97  bl #0x3180a18
0x06A58F80: 28008052  movz w8, #0x1
0x06A58F84: a8461839  strb w8, [x21, #0x611]
0x06A58F88: 608642a9  ldp x0, x1, [x19, #0x28]
0x06A58F8C: 820240f9  ldr x2, [x20]
0x06A58F90: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A58F94: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A58F98: a0784717  b #0x3c37218

; RVA 0x6A58F9C | public void Enqueue(QueuedItem queuedItem) { }
; bytes=60 sha256=a7d57364add23b9298debd377b533f17e8757277038bfdf2c39aadd6e4a7e6d1 status=arm64_complete_bound indexed_start=True
0x06A58F9C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A58FA0: a10100b4  cbz x1, #0x6a58fd4
0x06A58FA4: 283040b9  ldr w8, [x1, #0x30]
0x06A58FA8: 09068052  movz w9, #0x30
0x06A58FAC: e20301aa  mov x2, x1
0x06A58FB0: f30300aa  mov x19, x0
0x06A58FB4: 1f050071  cmp w8, #1
0x06A58FB8: 08058052  movz w8, #0x28
0x06A58FBC: 0801899a  csel x8, x8, x9, eq
0x06A58FC0: 016868f8  ldr x1, [x0, x8]
0x06A58FC4: 05000094  bl #0x6a58fd8
0x06A58FC8: e00313aa  mov x0, x19
0x06A58FCC: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A58FD0: f3fdff17  b #0x6a5879c
0x06A58FD4: 369f1c97  bl #0x3180cac

; RVA 0x6A590C4 | public QueuedItem EnqueueItem(IMergeItem mergeItem, string uuidInBoardQueue, long enqueuingTimestamp, BoardQueueOrder boardQueueOrder, ResourceSource source) { }
; bytes=156 sha256=6afcf9d784238f87151e64792bf70f3c5f5a985e1b912e38fda9db8ad3857835 status=arm64_complete_bound indexed_start=True
0x06A590C4: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A590C8: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A590CC: f65702a9  stp x22, x21, [sp, #0x20]
0x06A590D0: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A590D4: 989600b0  adrp x24, #0x7d2a000
0x06A590D8: 59630090  adrp x25, #0x76c1000
0x06A590DC: 084b5839  ldrb w8, [x24, #0x612]
0x06A590E0: 393743f9  ldr x25, [x25, #0x668]
0x06A590E4: f403042a  mov w20, w4
0x06A590E8: f60303aa  mov x22, x3
0x06A590EC: f50302aa  mov x21, x2
0x06A590F0: f70301aa  mov x23, x1
0x06A590F4: f30300aa  mov x19, x0
0x06A590F8: c8000037  tbnz w8, #0, #0x6a59110
0x06A590FC: 40630090  adrp x0, #0x76c1000
0x06A59100: 003443f9  ldr x0, [x0, #0x668]
0x06A59104: 459e1c97  bl #0x3180a18
0x06A59108: 28008052  movz w8, #0x1
0x06A5910C: 084b1839  strb w8, [x24, #0x612]
0x06A59110: 200340f9  ldr x0, [x25]
0x06A59114: e39e1c97  bl #0x3180ca0
0x06A59118: e10317aa  mov x1, x23
0x06A5911C: e20316aa  mov x2, x22
0x06A59120: e303142a  mov w3, w20
0x06A59124: e40315aa  mov x4, x21
0x06A59128: e5031faa  mov x5, xzr
0x06A5912C: f80300aa  mov x24, x0
0x06A59130: 0c000094  bl #0x6a59160
0x06A59134: e00313aa  mov x0, x19
0x06A59138: e10318aa  mov x1, x24
0x06A5913C: 98ffff97  bl #0x6a58f9c
0x06A59140: e00313aa  mov x0, x19
0x06A59144: a1fdff97  bl #0x6a587c8
0x06A59148: e00318aa  mov x0, x24
0x06A5914C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A59150: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A59154: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A59158: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A5915C: c0035fd6  ret

; RVA 0x6A591DC | public QueuedItem EnqueueItemPendingSync(IMergeItem mergeItem, string uuidInBoardQueue, long enqueuingTimestamp, BoardQueueOrder boardQueueOrder, ResourceSource source) { }
; bytes=272 sha256=74817fdd5af16ecbff41b1786a4f6d67b2679961a7927776bf45d293abeef7c8 status=arm64_complete_bound indexed_start=True
0x06A591DC: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A591E0: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A591E4: f65702a9  stp x22, x21, [sp, #0x20]
0x06A591E8: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A591EC: 939600b0  adrp x19, #0x7d2a000
0x06A591F0: 59630090  adrp x25, #0x76c1000
0x06A591F4: 684e5839  ldrb w8, [x19, #0x613]
0x06A591F8: 393743f9  ldr x25, [x25, #0x668]
0x06A591FC: f503042a  mov w21, w4
0x06A59200: f70303aa  mov x23, x3
0x06A59204: f60302aa  mov x22, x2
0x06A59208: f80301aa  mov x24, x1
0x06A5920C: f40300aa  mov x20, x0
0x06A59210: 28010037  tbnz w8, #0, #0x6a59234
0x06A59214: 40630090  adrp x0, #0x76c1000
0x06A59218: 002843f9  ldr x0, [x0, #0x650]
0x06A5921C: ff9d1c97  bl #0x3180a18
0x06A59220: 40630090  adrp x0, #0x76c1000
0x06A59224: 003443f9  ldr x0, [x0, #0x668]
0x06A59228: fc9d1c97  bl #0x3180a18
0x06A5922C: 28008052  movz w8, #0x1
0x06A59230: 684e1839  strb w8, [x19, #0x613]
0x06A59234: 200340f9  ldr x0, [x25]
0x06A59238: 9a9e1c97  bl #0x3180ca0
0x06A5923C: e10318aa  mov x1, x24
0x06A59240: e20317aa  mov x2, x23
0x06A59244: e303152a  mov w3, w21
0x06A59248: e40316aa  mov x4, x22
0x06A5924C: e5031faa  mov x5, xzr
0x06A59250: f30300aa  mov x19, x0
0x06A59254: c3ffff97  bl #0x6a59160
0x06A59258: e00314aa  mov x0, x20
0x06A5925C: e10313aa  mov x1, x19
0x06A59260: 4fffff97  bl #0x6a58f9c
0x06A59264: 803640f9  ldr x0, [x20, #0x68]
0x06A59268: 000400b4  cbz x0, #0x6a592e8
0x06A5926C: 49630090  adrp x9, #0x76c1000
0x06A59270: 292943f9  ldr x9, [x9, #0x650]
0x06A59274: 0a1c40b9  ldr w10, [x0, #0x1c]
0x06A59278: 080840f9  ldr x8, [x0, #0x10]
0x06A5927C: 290140f9  ldr x9, [x9]
0x06A59280: 4a050011  add w10, w10, #1
0x06A59284: 0a1c00b9  str w10, [x0, #0x1c]
0x06A59288: 080300b4  cbz x8, #0x6a592e8
0x06A5928C: 0a1880b9  ldrsw x10, [x0, #0x18]
0x06A59290: 0b1940b9  ldr w11, [x8, #0x18]
0x06A59294: 5f010b6b  cmp w10, w11
0x06A59298: 22010054  b.hs #0x6a592bc
0x06A5929C: 49050011  add w9, w10, #1
0x06A592A0: 080d0a8b  add x8, x8, x10, lsl #3
0x06A592A4: 091800b9  str w9, [x0, #0x18]
0x06A592A8: 130d02f8  str x19, [x8, #0x20]!
0x06A592AC: e00308aa  mov x0, x8
0x06A592B0: e10313aa  mov x1, x19
0x06A592B4: c49d1c97  bl #0x31809c4
0x06A592B8: 06000014  b #0x6a592d0
0x06A592BC: 281140f9  ldr x8, [x9, #0x20]
0x06A592C0: e10313aa  mov x1, x19
0x06A592C4: 086140f9  ldr x8, [x8, #0xc0]
0x06A592C8: 023940f9  ldr x2, [x8, #0x70]
0x06A592CC: 68ac5797  bl #0x404446c
0x06A592D0: e00313aa  mov x0, x19
0x06A592D4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A592D8: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A592DC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A592E0: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A592E4: c0035fd6  ret
0x06A592E8: 719e1c97  bl #0x3180cac

; RVA 0x6A592EC | public void SyncPendingEnqueuedItem(string uuid) { }
; bytes=440 sha256=f2deefe44a6df2b27a1781da29f77c79c059d0e34674fbe37b1a4db739a9a7cb status=arm64_complete_bound indexed_start=True
0x06A592EC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A592F0: f65701a9  stp x22, x21, [sp, #0x10]
0x06A592F4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A592F8: 959600b0  adrp x21, #0x7d2a000
0x06A592FC: b66600f0  adrp x22, #0x7730000
0x06A59300: a8525839  ldrb w8, [x21, #0x614]
0x06A59304: d6fe41f9  ldr x22, [x22, #0x3f8]
0x06A59308: f40301aa  mov x20, x1
0x06A5930C: f30300aa  mov x19, x0
0x06A59310: c8030037  tbnz w8, #0, #0x6a59388
0x06A59314: a06600f0  adrp x0, #0x7730000
0x06A59318: 000042f9  ldr x0, [x0, #0x400]
0x06A5931C: bf9d1c97  bl #0x3180a18
0x06A59320: a06600f0  adrp x0, #0x7730000
0x06A59324: 000442f9  ldr x0, [x0, #0x408]
0x06A59328: bc9d1c97  bl #0x3180a18
0x06A5932C: a06600f0  adrp x0, #0x7730000
0x06A59330: 00c041f9  ldr x0, [x0, #0x380]
0x06A59334: b99d1c97  bl #0x3180a18
0x06A59338: a06600f0  adrp x0, #0x7730000
0x06A5933C: 000842f9  ldr x0, [x0, #0x410]
0x06A59340: b69d1c97  bl #0x3180a18
0x06A59344: a06600f0  adrp x0, #0x7730000
0x06A59348: 00a041f9  ldr x0, [x0, #0x340]
0x06A5934C: b39d1c97  bl #0x3180a18
0x06A59350: 20610090  adrp x0, #0x767d000
0x06A59354: 006442f9  ldr x0, [x0, #0x4c8]
0x06A59358: b09d1c97  bl #0x3180a18
0x06A5935C: a06600f0  adrp x0, #0x7730000
0x06A59360: 000c42f9  ldr x0, [x0, #0x418]
0x06A59364: ad9d1c97  bl #0x3180a18
0x06A59368: a06600f0  adrp x0, #0x7730000
0x06A5936C: 001042f9  ldr x0, [x0, #0x420]
0x06A59370: aa9d1c97  bl #0x3180a18
0x06A59374: a06600f0  adrp x0, #0x7730000
0x06A59378: 00fc41f9  ldr x0, [x0, #0x3f8]
0x06A5937C: a79d1c97  bl #0x3180a18
0x06A59380: 28008052  movz w8, #0x1
0x06A59384: a8521839  strb w8, [x21, #0x614]
0x06A59388: c00240f9  ldr x0, [x22]
0x06A5938C: 459e1c97  bl #0x3180ca0
0x06A59390: e1031faa  mov x1, xzr
0x06A59394: f50300aa  mov x21, x0
0x06A59398: 9904b297  bl #0x56da5fc
0x06A5939C: 350800b4  cbz x21, #0x6a594a0
0x06A593A0: b66600f0  adrp x22, #0x7730000
0x06A593A4: b76600f0  adrp x23, #0x7730000
0x06A593A8: d60e42f9  ldr x22, [x22, #0x418]
0x06A593AC: f71242f9  ldr x23, [x23, #0x420]
0x06A593B0: e00315aa  mov x0, x21
0x06A593B4: 140c01f8  str x20, [x0, #0x10]!
0x06A593B8: e10314aa  mov x1, x20
0x06A593BC: 829d1c97  bl #0x31809c4
0x06A593C0: c00240f9  ldr x0, [x22]
0x06A593C4: 743640f9  ldr x20, [x19, #0x68]
0x06A593C8: 369e1c97  bl #0x3180ca0
0x06A593CC: e20240f9  ldr x2, [x23]
0x06A593D0: e10315aa  mov x1, x21
0x06A593D4: e3031faa  mov x3, xzr
0x06A593D8: f60300aa  mov x22, x0
0x06A593DC: 60126497  bl #0x435dd5c
0x06A593E0: 140600b4  cbz x20, #0x6a594a0
0x06A593E4: a86600f0  adrp x8, #0x7730000
0x06A593E8: 080542f9  ldr x8, [x8, #0x408]
0x06A593EC: e00314aa  mov x0, x20
0x06A593F0: e10316aa  mov x1, x22
0x06A593F4: 020140f9  ldr x2, [x8]
0x06A593F8: d0ad5797  bl #0x4044b38
0x06A593FC: 600300b4  cbz x0, #0x6a59468
0x06A59400: e10300aa  mov x1, x0
0x06A59404: 603640f9  ldr x0, [x19, #0x68]
0x06A59408: c00400b4  cbz x0, #0x6a594a0
0x06A5940C: a86600f0  adrp x8, #0x7730000
0x06A59410: 08c141f9  ldr x8, [x8, #0x380]
0x06A59414: 020140f9  ldr x2, [x8]
0x06A59418: b8b15797  bl #0x4045af8
0x06A5941C: 683640f9  ldr x8, [x19, #0x68]
0x06A59420: 080400b4  cbz x8, #0x6a594a0
0x06A59424: 602e40f9  ldr x0, [x19, #0x58]
0x06A59428: c00300b4  cbz x0, #0x6a594a0
0x06A5942C: 29610090  adrp x9, #0x767d000
0x06A59430: 296542f9  ldr x9, [x9, #0x4c8]
0x06A59434: 6a4e40b9  ldr w10, [x19, #0x4c]
0x06A59438: 081940b9  ldr w8, [x8, #0x18]
0x06A5943C: 220140f9  ldr x2, [x9]
0x06A59440: 4101084b  sub w1, w10, w8
0x06A59444: dc205f97  bl #0x42217b4
0x06A59448: 603640f9  ldr x0, [x19, #0x68]
0x06A5944C: a00200b4  cbz x0, #0x6a594a0
0x06A59450: a86600f0  adrp x8, #0x7730000
0x06A59454: 080142f9  ldr x8, [x8, #0x400]
0x06A59458: 612a40f9  ldr x1, [x19, #0x50]
0x06A5945C: 020140f9  ldr x2, [x8]
0x06A59460: e7ac5797  bl #0x40447fc
0x06A59464: a0000036  tbz w0, #0, #0x6a59478
0x06A59468: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A5946C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A59470: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A59474: c0035fd6  ret
0x06A59478: 603240f9  ldr x0, [x19, #0x60]
0x06A5947C: 200100b4  cbz x0, #0x6a594a0
0x06A59480: a86600f0  adrp x8, #0x7730000
0x06A59484: 612a40f9  ldr x1, [x19, #0x50]
0x06A59488: 08a141f9  ldr x8, [x8, #0x340]
0x06A5948C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A59490: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A59494: 020140f9  ldr x2, [x8]
0x06A59498: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A5949C: 44215f17  b #0x42219ac
0x06A594A0: 039e1c97  bl #0x3180cac

; RVA 0x6A594AC | public void LoadFromBackendState(List<QueuedItem> backendItems) { }
; bytes=956 sha256=a6aceee71302c1a19d1366fb5dfe4a49f2a47861d8790421d41067a9e0092b72 status=arm64_complete_bound indexed_start=True
0x06A594AC: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A594B0: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A594B4: f65702a9  stp x22, x21, [sp, #0x20]
0x06A594B8: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A594BC: 979600b0  adrp x23, #0x7d2a000
0x06A594C0: b66600f0  adrp x22, #0x7730000
0x06A594C4: b56600f0  adrp x21, #0x7730000
0x06A594C8: e8565839  ldrb w8, [x23, #0x615]
0x06A594CC: d6ce41f9  ldr x22, [x22, #0x398]
0x06A594D0: b51642f9  ldr x21, [x21, #0x428]
0x06A594D4: f40301aa  mov x20, x1
0x06A594D8: f30300aa  mov x19, x0
0x06A594DC: 68030037  tbnz w8, #0, #0x6a59548
0x06A594E0: a06600f0  adrp x0, #0x7730000
0x06A594E4: 00cc41f9  ldr x0, [x0, #0x398]
0x06A594E8: 4c9d1c97  bl #0x3180a18
0x06A594EC: a06600f0  adrp x0, #0x7730000
0x06A594F0: 001442f9  ldr x0, [x0, #0x428]
0x06A594F4: 499d1c97  bl #0x3180a18
0x06A594F8: e05f00d0  adrp x0, #0x7657000
0x06A594FC: 002446f9  ldr x0, [x0, #0xc48]
0x06A59500: 469d1c97  bl #0x3180a18
0x06A59504: a05f00b0  adrp x0, #0x764e000
0x06A59508: 006444f9  ldr x0, [x0, #0x8c8]
0x06A5950C: 439d1c97  bl #0x3180a18
0x06A59510: a06600f0  adrp x0, #0x7730000
0x06A59514: 001842f9  ldr x0, [x0, #0x430]
0x06A59518: 409d1c97  bl #0x3180a18
0x06A5951C: a06600f0  adrp x0, #0x7730000
0x06A59520: 001c42f9  ldr x0, [x0, #0x438]
0x06A59524: 3d9d1c97  bl #0x3180a18
0x06A59528: a05f00b0  adrp x0, #0x764e000
0x06A5952C: 007044f9  ldr x0, [x0, #0x8e0]
0x06A59530: 3a9d1c97  bl #0x3180a18
0x06A59534: a06600f0  adrp x0, #0x7730000
0x06A59538: 002042f9  ldr x0, [x0, #0x440]
0x06A5953C: 379d1c97  bl #0x3180a18
0x06A59540: 28008052  movz w8, #0x1
0x06A59544: e8561839  strb w8, [x23, #0x615]
0x06A59548: 608642a9  ldp x0, x1, [x19, #0x28]
0x06A5954C: c20240f9  ldr x2, [x22]
0x06A59550: 32774797  bl #0x3c37218
0x06A59554: 622240f9  ldr x2, [x19, #0x40]
0x06A59558: a30240f9  ldr x3, [x21]
0x06A5955C: e10300aa  mov x1, x0
0x06A59560: e00314aa  mov x0, x20
0x06A59564: 091c4897  bl #0x3c60588
0x06A59568: 681640f9  ldr x8, [x19, #0x28]
0x06A5956C: c81100b4  cbz x8, #0x6a597a4
0x06A59570: b56600f0  adrp x21, #0x7730000
0x06A59574: b52242f9  ldr x21, [x21, #0x440]
0x06A59578: f40300aa  mov x20, x0
0x06A5957C: e00308aa  mov x0, x8
0x06A59580: a10240f9  ldr x1, [x21]
0x06A59584: 055da697  bl #0x53f0998
0x06A59588: 601a40f9  ldr x0, [x19, #0x30]
0x06A5958C: c01000b4  cbz x0, #0x6a597a4
0x06A59590: a10240f9  ldr x1, [x21]
0x06A59594: 015da697  bl #0x53f0998
0x06A59598: 741000b4  cbz x20, #0x6a597a4
0x06A5959C: aa6600f0  adrp x10, #0x7730000
0x06A595A0: 880240f9  ldr x8, [x20]
0x06A595A4: 4a1942f9  ldr x10, [x10, #0x430]
0x06A595A8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A595AC: 410140f9  ldr x1, [x10]
0x06A595B0: 290100b4  cbz x9, #0x6a595d4
0x06A595B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A595B8: 4a210091  add x10, x10, #8
0x06A595BC: 4b815ff8  ldur x11, [x10, #-8]
0x06A595C0: 7f0101eb  cmp x11, x1
0x06A595C4: 00010054  b.eq #0x6a595e4
0x06A595C8: 290500f1  subs x9, x9, #1
0x06A595CC: 4a410091  add x10, x10, #0x10
0x06A595D0: 61ffff54  b.ne #0x6a595bc
0x06A595D4: e00314aa  mov x0, x20
0x06A595D8: e2031f2a  mov w2, wzr
0x06A595DC: 4df51b97  bl #0x3156b10
0x06A595E0: 04000014  b #0x6a595f0
0x06A595E4: 490180b9  ldrsw x9, [x10]
0x06A595E8: 0811098b  add x8, x8, x9, lsl #4
0x06A595EC: 00e10491  add x0, x8, #0x138
0x06A595F0: 080440a9  ldp x8, x1, [x0]
0x06A595F4: b65f00b0  adrp x22, #0x764e000
0x06A595F8: d66644f9  ldr x22, [x22, #0x8c8]
0x06A595FC: e00314aa  mov x0, x20
0x06A59600: 00013fd6  blr x8
0x06A59604: f40300aa  mov x20, x0
0x06A59608: 000d00b4  cbz x0, #0x6a597a8
0x06A5960C: b75f00b0  adrp x23, #0x764e000
0x06A59610: b86600f0  adrp x24, #0x7730000
0x06A59614: f95f00d0  adrp x25, #0x7657000
0x06A59618: f77244f9  ldr x23, [x23, #0x8e0]
0x06A5961C: 181f42f9  ldr x24, [x24, #0x438]
0x06A59620: 392746f9  ldr x25, [x25, #0xc48]
0x06A59624: 880240f9  ldr x8, [x20]
0x06A59628: e10240f9  ldr x1, [x23]
0x06A5962C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A59630: 290100b4  cbz x9, #0x6a59654
0x06A59634: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A59638: 4a210091  add x10, x10, #8
0x06A5963C: 4b815ff8  ldur x11, [x10, #-8]
0x06A59640: 7f0101eb  cmp x11, x1
0x06A59644: 00010054  b.eq #0x6a59664
0x06A59648: 290500f1  subs x9, x9, #1
0x06A5964C: 4a410091  add x10, x10, #0x10
0x06A59650: 61ffff54  b.ne #0x6a5963c
0x06A59654: e00314aa  mov x0, x20
0x06A59658: e2031f2a  mov w2, wzr
0x06A5965C: 2df51b97  bl #0x3156b10
0x06A59660: 04000014  b #0x6a59670
0x06A59664: 490180b9  ldrsw x9, [x10]
0x06A59668: 0811098b  add x8, x8, x9, lsl #4
0x06A5966C: 00e10491  add x0, x8, #0x138
0x06A59670: 080440a9  ldp x8, x1, [x0]
0x06A59674: e00314aa  mov x0, x20
0x06A59678: 00013fd6  blr x8
0x06A5967C: 60040036  tbz w0, #0, #0x6a59708
0x06A59680: 880240f9  ldr x8, [x20]
0x06A59684: 010340f9  ldr x1, [x24]
0x06A59688: 095d4279  ldrh w9, [x8, #0x12e]
0x06A5968C: 290100b4  cbz x9, #0x6a596b0
0x06A59690: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A59694: 4a210091  add x10, x10, #8
0x06A59698: 4b815ff8  ldur x11, [x10, #-8]
0x06A5969C: 7f0101eb  cmp x11, x1
0x06A596A0: 00010054  b.eq #0x6a596c0
0x06A596A4: 290500f1  subs x9, x9, #1
0x06A596A8: 4a410091  add x10, x10, #0x10
0x06A596AC: 61ffff54  b.ne #0x6a59698
0x06A596B0: e00314aa  mov x0, x20
0x06A596B4: e2031f2a  mov w2, wzr
0x06A596B8: 16f51b97  bl #0x3156b10
0x06A596BC: 04000014  b #0x6a596cc
0x06A596C0: 490180b9  ldrsw x9, [x10]
0x06A596C4: 0811098b  add x8, x8, x9, lsl #4
0x06A596C8: 00e10491  add x0, x8, #0x138
0x06A596CC: 080440a9  ldp x8, x1, [x0]
0x06A596D0: e00314aa  mov x0, x20
0x06A596D4: 00013fd6  blr x8
0x06A596D8: f50300aa  mov x21, x0
0x06A596DC: 000600b4  cbz x0, #0x6a5979c
0x06A596E0: 601e40f9  ldr x0, [x19, #0x38]
0x06A596E4: e00500b4  cbz x0, #0x6a597a0
0x06A596E8: a11240f9  ldr x1, [x21, #0x20]
0x06A596EC: 220340f9  ldr x2, [x25]
0x06A596F0: 919ba197  bl #0x52c0534
0x06A596F4: 80f90737  tbnz w0, #0, #0x6a59624
0x06A596F8: e00313aa  mov x0, x19
0x06A596FC: e10315aa  mov x1, x21
0x06A59700: 27feff97  bl #0x6a58f9c
0x06A59704: c8ffff17  b #0x6a59624
0x06A59708: f5031faa  mov x21, xzr
0x06A5970C: f40200b4  cbz x20, #0x6a59768
0x06A59710: 880240f9  ldr x8, [x20]
0x06A59714: c10240f9  ldr x1, [x22]
0x06A59718: 095d4279  ldrh w9, [x8, #0x12e]
0x06A5971C: 290100b4  cbz x9, #0x6a59740
0x06A59720: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A59724: 4a210091  add x10, x10, #8
0x06A59728: 4b815ff8  ldur x11, [x10, #-8]
0x06A5972C: 7f0101eb  cmp x11, x1
0x06A59730: 00010054  b.eq #0x6a59750
0x06A59734: 290500f1  subs x9, x9, #1
0x06A59738: 4a410091  add x10, x10, #0x10
0x06A5973C: 61ffff54  b.ne #0x6a59728
0x06A59740: e00314aa  mov x0, x20
0x06A59744: e2031f2a  mov w2, wzr
0x06A59748: f2f41b97  bl #0x3156b10
0x06A5974C: 04000014  b #0x6a5975c
0x06A59750: 490180b9  ldrsw x9, [x10]
0x06A59754: 0811098b  add x8, x8, x9, lsl #4
0x06A59758: 00e10491  add x0, x8, #0x138
0x06A5975C: 080440a9  ldp x8, x1, [x0]
0x06A59760: e00314aa  mov x0, x20
0x06A59764: 00013fd6  blr x8
0x06A59768: 350200b5  cbnz x21, #0x6a597ac
0x06A5976C: e00313aa  mov x0, x19
0x06A59770: 0bfcff97  bl #0x6a5879c
0x06A59774: 68224139  ldrb w8, [x19, #0x48]
0x06A59778: 88000034  cbz w8, #0x6a59788
0x06A5977C: e00313aa  mov x0, x19
0x06A59780: 12fcff97  bl #0x6a587c8
0x06A59784: 7f220139  strb wzr, [x19, #0x48]
0x06A59788: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A5978C: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A59790: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A59794: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A59798: c0035fd6  ret
0x06A5979C: 449d1c97  bl #0x3180cac
0x06A597A0: 439d1c97  bl #0x3180cac
0x06A597A4: 429d1c97  bl #0x3180cac
0x06A597A8: 419d1c97  bl #0x3180cac
0x06A597AC: e00315aa  mov x0, x21
0x06A597B0: 3d9d1c97  bl #0x3180ca4
0x06A597B4: 06000014  b #0x6a597cc
0x06A597B8: 05000014  b #0x6a597cc
0x06A597BC: 04000014  b #0x6a597cc
0x06A597C0: 03000014  b #0x6a597cc
0x06A597C4: 02000014  b #0x6a597cc
0x06A597C8: 01000014  b #0x6a597cc
0x06A597CC: 3f040071  cmp w1, #1
0x06A597D0: a1000054  b.ne #0x6a597e4
0x06A597D4: 4fd41d94  bl #0x71ce910
0x06A597D8: 150040f9  ldr x21, [x0]
0x06A597DC: 51d41d94  bl #0x71ce920
0x06A597E0: cbffff17  b #0x6a5970c
0x06A597E4: f30300aa  mov x19, x0
0x06A597E8: f5031faa  mov x21, xzr
0x06A597EC: 02000014  b #0x6a597f4
0x06A597F0: f30300aa  mov x19, x0
0x06A597F4: f40200b4  cbz x20, #0x6a59850
0x06A597F8: 880240f9  ldr x8, [x20]
0x06A597FC: c10240f9  ldr x1, [x22]
0x06A59800: 095d4279  ldrh w9, [x8, #0x12e]
0x06A59804: 290100b4  cbz x9, #0x6a59828
0x06A59808: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A5980C: 4a210091  add x10, x10, #8
0x06A59810: 4b815ff8  ldur x11, [x10, #-8]
0x06A59814: 7f0101eb  cmp x11, x1
0x06A59818: 00010054  b.eq #0x6a59838
0x06A5981C: 290500f1  subs x9, x9, #1
0x06A59820: 4a410091  add x10, x10, #0x10
0x06A59824: 61ffff54  b.ne #0x6a59810
0x06A59828: e00314aa  mov x0, x20
0x06A5982C: e2031f2a  mov w2, wzr
0x06A59830: b8f41b97  bl #0x3156b10
0x06A59834: 04000014  b #0x6a59844
0x06A59838: 490180b9  ldrsw x9, [x10]
0x06A5983C: 0811098b  add x8, x8, x9, lsl #4
0x06A59840: 00e10491  add x0, x8, #0x138
0x06A59844: 080440a9  ldp x8, x1, [x0]
0x06A59848: e00314aa  mov x0, x20
0x06A5984C: 00013fd6  blr x8
0x06A59850: 750000b5  cbnz x21, #0x6a5985c
0x06A59854: e00313aa  mov x0, x19
0x06A59858: 40302097  bl #0x3265958
0x06A5985C: e00315aa  mov x0, x21
0x06A59860: 119d1c97  bl #0x3180ca4
0x06A59864: 2cbf0e97  bl #0x2e09514

; RVA 0x6A58AF0 | private LinkedListNode<QueuedItem> HeadOfQueue() { }
; bytes=160 sha256=88d8c77f4ae743cb3d4e5049d70da1f6572929df9d13e499697b54e60adce71b status=arm64_complete_bound indexed_start=True
0x06A58AF0: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A58AF4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A58AF8: 949600d0  adrp x20, #0x7d2a000
0x06A58AFC: 885a5839  ldrb w8, [x20, #0x616]
0x06A58B00: f30300aa  mov x19, x0
0x06A58B04: 88010037  tbnz w8, #0, #0x6a58b34
0x06A58B08: c0660090  adrp x0, #0x7730000
0x06A58B0C: 008c41f9  ldr x0, [x0, #0x318]
0x06A58B10: c29f1c97  bl #0x3180a18
0x06A58B14: c0660090  adrp x0, #0x7730000
0x06A58B18: 00b041f9  ldr x0, [x0, #0x360]
0x06A58B1C: bf9f1c97  bl #0x3180a18
0x06A58B20: c0660090  adrp x0, #0x7730000
0x06A58B24: 00b441f9  ldr x0, [x0, #0x368]
0x06A58B28: bc9f1c97  bl #0x3180a18
0x06A58B2C: 28008052  movz w8, #0x1
0x06A58B30: 885a1839  strb w8, [x20, #0x616]
0x06A58B34: 681640f9  ldr x8, [x19, #0x28]
0x06A58B38: a80200b4  cbz x8, #0x6a58b8c
0x06A58B3C: 091940b9  ldr w9, [x8, #0x18]
0x06A58B40: 3f050071  cmp w9, #1
0x06A58B44: ab000054  b.lt #0x6a58b58
0x06A58B48: 000940f9  ldr x0, [x8, #0x10]
0x06A58B4C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A58B50: fe0742f8  ldr x30, [sp], #0x20
0x06A58B54: c0035fd6  ret
0x06A58B58: 601a40f9  ldr x0, [x19, #0x30]
0x06A58B5C: 800100b4  cbz x0, #0x6a58b8c
0x06A58B60: 081840b9  ldr w8, [x0, #0x18]
0x06A58B64: 1f050071  cmp w8, #1
0x06A58B68: eb000054  b.lt #0x6a58b84
0x06A58B6C: c8660090  adrp x8, #0x7730000
0x06A58B70: 08b541f9  ldr x8, [x8, #0x368]
0x06A58B74: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A58B78: 010140f9  ldr x1, [x8]
0x06A58B7C: fe0742f8  ldr x30, [sp], #0x20
0x06A58B80: af5ea617  b #0x53f063c
0x06A58B84: e0031faa  mov x0, xzr
0x06A58B88: f1ffff17  b #0x6a58b4c
0x06A58B8C: 48a01c97  bl #0x3180cac

; RVA 0x6A58FD8 | private void EnqueueToSpecificQueue(LinkedList<QueuedItem> queue, QueuedItem queuedItem) { }
; bytes=236 sha256=97eba2617c159d5b1670cbb10d04781f190c504ece0f511e30d2cb85f2c3c5f9 status=arm64_complete_bound indexed_start=True
0x06A58FD8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A58FDC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A58FE0: 959600d0  adrp x21, #0x7d2a000
0x06A58FE4: a85e5839  ldrb w8, [x21, #0x617]
0x06A58FE8: f30302aa  mov x19, x2
0x06A58FEC: f40301aa  mov x20, x1
0x06A58FF0: 48020037  tbnz w8, #0, #0x6a59038
0x06A58FF4: c0660090  adrp x0, #0x7730000
0x06A58FF8: 00f041f9  ldr x0, [x0, #0x3e0]
0x06A58FFC: 879e1c97  bl #0x3180a18
0x06A59000: a06600f0  adrp x0, #0x7730000
0x06A59004: 00ac41f9  ldr x0, [x0, #0x358]
0x06A59008: 849e1c97  bl #0x3180a18
0x06A5900C: a06600f0  adrp x0, #0x7730000
0x06A59010: 00f441f9  ldr x0, [x0, #0x3e8]
0x06A59014: 819e1c97  bl #0x3180a18
0x06A59018: a06600f0  adrp x0, #0x7730000
0x06A5901C: 00f841f9  ldr x0, [x0, #0x3f0]
0x06A59020: 7e9e1c97  bl #0x3180a18
0x06A59024: a06600f0  adrp x0, #0x7730000
0x06A59028: 00b041f9  ldr x0, [x0, #0x360]
0x06A5902C: 7b9e1c97  bl #0x3180a18
0x06A59030: 28008052  movz w8, #0x1
0x06A59034: a85e1839  strb w8, [x21, #0x617]
0x06A59038: 540400b4  cbz x20, #0x6a590c0
0x06A5903C: 880a40f9  ldr x8, [x20, #0x10]
0x06A59040: e80100b4  cbz x8, #0x6a5907c
0x06A59044: b56600f0  adrp x21, #0x7730000
0x06A59048: b5f241f9  ldr x21, [x21, #0x3e0]
0x06A5904C: 091540f9  ldr x9, [x8, #0x28]
0x06A59050: 890300b4  cbz x9, #0x6a590c0
0x06A59054: 730300b4  cbz x19, #0x6a590c0
0x06A59058: 291540f9  ldr x9, [x9, #0x28]
0x06A5905C: 6a1640f9  ldr x10, [x19, #0x28]
0x06A59060: 3f010aeb  cmp x9, x10
0x06A59064: cd010054  b.le #0x6a5909c
0x06A59068: a10240f9  ldr x1, [x21]
0x06A5906C: e00308aa  mov x0, x8
0x06A59070: da50a697  bl #0x53ed3d8
0x06A59074: e80300aa  mov x8, x0
0x06A59078: a0feffb5  cbnz x0, #0x6a5904c
0x06A5907C: a86600f0  adrp x8, #0x7730000
0x06A59080: 08f941f9  ldr x8, [x8, #0x3f0]
0x06A59084: e00314aa  mov x0, x20
0x06A59088: e10313aa  mov x1, x19
0x06A5908C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A59090: 020140f9  ldr x2, [x8]
0x06A59094: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A59098: 085ea617  b #0x53f08b8
0x06A5909C: a96600f0  adrp x9, #0x7730000
0x06A590A0: 29f541f9  ldr x9, [x9, #0x3e8]
0x06A590A4: e00314aa  mov x0, x20
0x06A590A8: e20313aa  mov x2, x19
0x06A590AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A590B0: 230140f9  ldr x3, [x9]
0x06A590B4: e10308aa  mov x1, x8
0x06A590B8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A590BC: 6c5da617  b #0x53f066c
0x06A590C0: fb9e1c97  bl #0x3180cac

; RVA 0x6A5879C | private void UpdateBindableProperties() { }
; bytes=44 sha256=9c7f1f35ba31d44f001d2231454f18f8c5ced7e4d3a84c193cfc80d64c0b7274 status=arm64_complete_bound indexed_start=True
0x06A5879C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A587A0: f30300aa  mov x19, x0
0x06A587A4: 96ffff97  bl #0x6a585fc
0x06A587A8: 604e00b9  str w0, [x19, #0x4c]
0x06A587AC: e00313aa  mov x0, x19
0x06A587B0: be000094  bl #0x6a58aa8
0x06A587B4: 600e05f8  str x0, [x19, #0x50]!
0x06A587B8: e10300aa  mov x1, x0
0x06A587BC: e00313aa  mov x0, x19
0x06A587C0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A587C4: 80a01c17  b #0x31809c4

; RVA 0x6A587C8 | public void SyncWithState() { }
; bytes=180 sha256=3a19fe19e12aa04d3a271ed74fd7e0d7adc70a8ee11ae9fe2e9d1d7738d0ea84 status=arm64_complete_bound indexed_start=True
0x06A587C8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A587CC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A587D0: 949600d0  adrp x20, #0x7d2a000
0x06A587D4: 88625839  ldrb w8, [x20, #0x618]
0x06A587D8: f30300aa  mov x19, x0
0x06A587DC: 88010037  tbnz w8, #0, #0x6a5880c
0x06A587E0: c0660090  adrp x0, #0x7730000
0x06A587E4: 009c41f9  ldr x0, [x0, #0x338]
0x06A587E8: 8ca01c97  bl #0x3180a18
0x06A587EC: c0660090  adrp x0, #0x7730000
0x06A587F0: 00a041f9  ldr x0, [x0, #0x340]
0x06A587F4: 89a01c97  bl #0x3180a18
0x06A587F8: 206100b0  adrp x0, #0x767d000
0x06A587FC: 006442f9  ldr x0, [x0, #0x4c8]
0x06A58800: 86a01c97  bl #0x3180a18
0x06A58804: 28008052  movz w8, #0x1
0x06A58808: 88621839  strb w8, [x20, #0x618]
0x06A5880C: 683640f9  ldr x8, [x19, #0x68]
0x06A58810: 480300b4  cbz x8, #0x6a58878
0x06A58814: 02254329  ldp w2, w9, [x8, #0x18]
0x06A58818: 29050011  add w9, w9, #1
0x06A5881C: 5f040071  cmp w2, #1
0x06A58820: 1f250329  stp wzr, w9, [x8, #0x18]
0x06A58824: ab000054  b.lt #0x6a58838
0x06A58828: 000940f9  ldr x0, [x8, #0x10]
0x06A5882C: e1031f2a  mov w1, wzr
0x06A58830: e3031faa  mov x3, xzr
0x06A58834: 1285b197  bl #0x56b9c7c
0x06A58838: 602e40f9  ldr x0, [x19, #0x58]
0x06A5883C: e00100b4  cbz x0, #0x6a58878
0x06A58840: 286100b0  adrp x8, #0x767d000
0x06A58844: 086542f9  ldr x8, [x8, #0x4c8]
0x06A58848: 614e40b9  ldr w1, [x19, #0x4c]
0x06A5884C: 020140f9  ldr x2, [x8]
0x06A58850: d9235f97  bl #0x42217b4
0x06A58854: 603240f9  ldr x0, [x19, #0x60]
0x06A58858: 000100b4  cbz x0, #0x6a58878
0x06A5885C: c8660090  adrp x8, #0x7730000
0x06A58860: 08a141f9  ldr x8, [x8, #0x340]
0x06A58864: 612a40f9  ldr x1, [x19, #0x50]
0x06A58868: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A5886C: 020140f9  ldr x2, [x8]
0x06A58870: fe0742f8  ldr x30, [sp], #0x20
0x06A58874: 4e245f17  b #0x42219ac
0x06A58878: 0da11c97  bl #0x3180cac

; RVA 0x6A59868 | public void SetBoardEventQueue(BoardQueueBackendState boardEventQueueState) { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x06A59868: c0035fd6  ret

; RVA 0x6A5986C | public void .ctor() { }
; bytes=320 sha256=23996c47e4b36205b53e5c1a0e51eb7817f336851a287a5823c849f4038dbdbf status=arm64_complete_bound indexed_start=True
0x06A5986C: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A59870: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A59874: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A59878: f65703a9  stp x22, x21, [sp, #0x30]
0x06A5987C: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A59880: 9a9600b0  adrp x26, #0x7d2a000
0x06A59884: d96000f0  adrp x25, #0x7674000
0x06A59888: d46000f0  adrp x20, #0x7674000
0x06A5988C: b86600f0  adrp x24, #0x7730000
0x06A59890: b76600f0  adrp x23, #0x7730000
0x06A59894: 56630090  adrp x22, #0x76c1000
0x06A59898: b56600f0  adrp x21, #0x7730000
0x06A5989C: 397b42f9  ldr x25, [x25, #0x4f0]
0x06A598A0: 48675839  ldrb w8, [x26, #0x619]
0x06A598A4: 947e42f9  ldr x20, [x20, #0x4f8]
0x06A598A8: 182742f9  ldr x24, [x24, #0x448]
0x06A598AC: f72a42f9  ldr x23, [x23, #0x450]
0x06A598B0: d63243f9  ldr x22, [x22, #0x660]
0x06A598B4: b52e42f9  ldr x21, [x21, #0x458]
0x06A598B8: f30300aa  mov x19, x0
0x06A598BC: a8020037  tbnz w8, #0, #0x6a59910
0x06A598C0: a06600f0  adrp x0, #0x7730000
0x06A598C4: 002c42f9  ldr x0, [x0, #0x458]
0x06A598C8: 549c1c97  bl #0x3180a18
0x06A598CC: 40630090  adrp x0, #0x76c1000
0x06A598D0: 003043f9  ldr x0, [x0, #0x660]
0x06A598D4: 519c1c97  bl #0x3180a18
0x06A598D8: c06000f0  adrp x0, #0x7674000
0x06A598DC: 007c42f9  ldr x0, [x0, #0x4f8]
0x06A598E0: 4e9c1c97  bl #0x3180a18
0x06A598E4: a06600f0  adrp x0, #0x7730000
0x06A598E8: 002842f9  ldr x0, [x0, #0x450]
0x06A598EC: 4b9c1c97  bl #0x3180a18
0x06A598F0: c06000f0  adrp x0, #0x7674000
0x06A598F4: 007842f9  ldr x0, [x0, #0x4f0]
0x06A598F8: 489c1c97  bl #0x3180a18
0x06A598FC: a06600f0  adrp x0, #0x7730000
0x06A59900: 002442f9  ldr x0, [x0, #0x448]
0x06A59904: 459c1c97  bl #0x3180a18
0x06A59908: 28008052  movz w8, #0x1
0x06A5990C: 48671839  strb w8, [x26, #0x619]
0x06A59910: 28008052  movz w8, #0x1
0x06A59914: 68220139  strb w8, [x19, #0x48]
0x06A59918: 200340f9  ldr x0, [x25]
0x06A5991C: e19c1c97  bl #0x3180ca0
0x06A59920: 820240f9  ldr x2, [x20]
0x06A59924: e1031f2a  mov w1, wzr
0x06A59928: f40300aa  mov x20, x0
0x06A5992C: 9c1f5f97  bl #0x422179c
0x06A59930: e00313aa  mov x0, x19
0x06A59934: 148c05f8  str x20, [x0, #0x58]!
0x06A59938: e10314aa  mov x1, x20
0x06A5993C: 229c1c97  bl #0x31809c4
0x06A59940: 000340f9  ldr x0, [x24]
0x06A59944: d79c1c97  bl #0x3180ca0
0x06A59948: e20240f9  ldr x2, [x23]
0x06A5994C: e1031faa  mov x1, xzr
0x06A59950: f40300aa  mov x20, x0
0x06A59954: 10205f97  bl #0x4221994
0x06A59958: e00313aa  mov x0, x19
0x06A5995C: 140c06f8  str x20, [x0, #0x60]!
0x06A59960: e10314aa  mov x1, x20
0x06A59964: 189c1c97  bl #0x31809c4
0x06A59968: c00240f9  ldr x0, [x22]
0x06A5996C: cd9c1c97  bl #0x3180ca0
0x06A59970: a10240f9  ldr x1, [x21]
0x06A59974: f40300aa  mov x20, x0
0x06A59978: b0a85797  bl #0x4043c38
0x06A5997C: e00313aa  mov x0, x19
0x06A59980: 148c06f8  str x20, [x0, #0x68]!
0x06A59984: e10314aa  mov x1, x20
0x06A59988: 0f9c1c97  bl #0x31809c4
0x06A5998C: e00313aa  mov x0, x19
0x06A59990: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A59994: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A59998: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A5999C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A599A0: e1031faa  mov x1, xzr
0x06A599A4: fe0745f8  ldr x30, [sp], #0x50
0x06A599A8: 6cc9fb17  b #0x694bf58

