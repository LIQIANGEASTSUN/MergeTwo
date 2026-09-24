; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9785 Merger.Services.Backend.WebSocket.OperationTrackingSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67B91E4 | public void TrackSplitOperation(List<ItemNotificationData> itemsNotificationData) { }
; bytes=232 sha256=defbe918b75624bb35e444e8b21e954e8b132f5d803099a8aada56f03fd6edf2 status=arm64_complete_bound indexed_start=True
0x067B91E4: fe0f1df8  str x30, [sp, #-0x30]!
0x067B91E8: f65701a9  stp x22, x21, [sp, #0x10]
0x067B91EC: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B91F0: 75ab00f0  adrp x21, #0x7d28000
0x067B91F4: a86a7b39  ldrb w8, [x21, #0xeda]
0x067B91F8: f30301aa  mov x19, x1
0x067B91FC: f40300aa  mov x20, x0
0x067B9200: 28010037  tbnz w8, #0, #0x67b9224
0x067B9204: 007600b0  adrp x0, #0x767a000
0x067B9208: 008445f9  ldr x0, [x0, #0xb08]
0x067B920C: 031e2797  bl #0x3180a18
0x067B9210: c07a0090  adrp x0, #0x7711000
0x067B9214: 003444f9  ldr x0, [x0, #0x868]
0x067B9218: 001e2797  bl #0x3180a18
0x067B921C: 28008052  movz w8, #0x1
0x067B9220: a86a3b39  strb w8, [x21, #0xeda]
0x067B9224: 942240f9  ldr x20, [x20, #0x40]
0x067B9228: 140500b4  cbz x20, #0x67b92c8
0x067B922C: 097600b0  adrp x9, #0x767a000
0x067B9230: 298545f9  ldr x9, [x9, #0xb08]
0x067B9234: 880240f9  ldr x8, [x20]
0x067B9238: 360140f9  ldr x22, [x9]
0x067B923C: c97a0090  adrp x9, #0x7711000
0x067B9240: 293544f9  ldr x9, [x9, #0x868]
0x067B9244: c11240f9  ldr x1, [x22, #0x20]
0x067B9248: c2a24079  ldrh w2, [x22, #0x50]
0x067B924C: 350140f9  ldr x21, [x9]
0x067B9250: 095d4279  ldrh w9, [x8, #0x12e]
0x067B9254: 290100b4  cbz x9, #0x67b9278
0x067B9258: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B925C: 4a210091  add x10, x10, #8
0x067B9260: 4b815ff8  ldur x11, [x10, #-8]
0x067B9264: 7f0101eb  cmp x11, x1
0x067B9268: e0000054  b.eq #0x67b9284
0x067B926C: 290500f1  subs x9, x9, #1
0x067B9270: 4a410091  add x10, x10, #0x10
0x067B9274: 61ffff54  b.ne #0x67b9260
0x067B9278: e00314aa  mov x0, x20
0x067B927C: 25762697  bl #0x3156b10
0x067B9280: 05000014  b #0x67b9294
0x067B9284: 490140b9  ldr w9, [x10]
0x067B9288: 2901020b  add w9, w9, w2
0x067B928C: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9290: 00e10491  add x0, x8, #0x138
0x067B9294: 000440f9  ldr x0, [x0, #8]
0x067B9298: e10316aa  mov x1, x22
0x067B929C: 3b1e2797  bl #0x3180b88
0x067B92A0: e40300aa  mov x4, x0
0x067B92A4: 050440f9  ldr x5, [x0, #8]
0x067B92A8: e00314aa  mov x0, x20
0x067B92AC: e10315aa  mov x1, x21
0x067B92B0: e20313aa  mov x2, x19
0x067B92B4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B92B8: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B92BC: e3031faa  mov x3, xzr
0x067B92C0: fe0743f8  ldr x30, [sp], #0x30
0x067B92C4: a0001fd6  br x5
0x067B92C8: 791e2797  bl #0x3180cac

; RVA 0x67B92CC | public void TrackUndoSplitOperation(List<ItemNotificationData> itemsNotificationData) { }
; bytes=232 sha256=24675505e437d63971501a00c1e403c5fdc5382ea01529e910c4533069aa57cd status=arm64_complete_bound indexed_start=True
0x067B92CC: fe0f1df8  str x30, [sp, #-0x30]!
0x067B92D0: f65701a9  stp x22, x21, [sp, #0x10]
0x067B92D4: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B92D8: 75ab00f0  adrp x21, #0x7d28000
0x067B92DC: a86e7b39  ldrb w8, [x21, #0xedb]
0x067B92E0: f30301aa  mov x19, x1
0x067B92E4: f40300aa  mov x20, x0
0x067B92E8: 28010037  tbnz w8, #0, #0x67b930c
0x067B92EC: 007600b0  adrp x0, #0x767a000
0x067B92F0: 008445f9  ldr x0, [x0, #0xb08]
0x067B92F4: c91d2797  bl #0x3180a18
0x067B92F8: c07a0090  adrp x0, #0x7711000
0x067B92FC: 003844f9  ldr x0, [x0, #0x870]
0x067B9300: c61d2797  bl #0x3180a18
0x067B9304: 28008052  movz w8, #0x1
0x067B9308: a86e3b39  strb w8, [x21, #0xedb]
0x067B930C: 942240f9  ldr x20, [x20, #0x40]
0x067B9310: 140500b4  cbz x20, #0x67b93b0
0x067B9314: 097600b0  adrp x9, #0x767a000
0x067B9318: 298545f9  ldr x9, [x9, #0xb08]
0x067B931C: 880240f9  ldr x8, [x20]
0x067B9320: 360140f9  ldr x22, [x9]
0x067B9324: c97a0090  adrp x9, #0x7711000
0x067B9328: 293944f9  ldr x9, [x9, #0x870]
0x067B932C: c11240f9  ldr x1, [x22, #0x20]
0x067B9330: c2a24079  ldrh w2, [x22, #0x50]
0x067B9334: 350140f9  ldr x21, [x9]
0x067B9338: 095d4279  ldrh w9, [x8, #0x12e]
0x067B933C: 290100b4  cbz x9, #0x67b9360
0x067B9340: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B9344: 4a210091  add x10, x10, #8
0x067B9348: 4b815ff8  ldur x11, [x10, #-8]
0x067B934C: 7f0101eb  cmp x11, x1
0x067B9350: e0000054  b.eq #0x67b936c
0x067B9354: 290500f1  subs x9, x9, #1
0x067B9358: 4a410091  add x10, x10, #0x10
0x067B935C: 61ffff54  b.ne #0x67b9348
0x067B9360: e00314aa  mov x0, x20
0x067B9364: eb752697  bl #0x3156b10
0x067B9368: 05000014  b #0x67b937c
0x067B936C: 490140b9  ldr w9, [x10]
0x067B9370: 2901020b  add w9, w9, w2
0x067B9374: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9378: 00e10491  add x0, x8, #0x138
0x067B937C: 000440f9  ldr x0, [x0, #8]
0x067B9380: e10316aa  mov x1, x22
0x067B9384: 011e2797  bl #0x3180b88
0x067B9388: e40300aa  mov x4, x0
0x067B938C: 050440f9  ldr x5, [x0, #8]
0x067B9390: e00314aa  mov x0, x20
0x067B9394: e10315aa  mov x1, x21
0x067B9398: e20313aa  mov x2, x19
0x067B939C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B93A0: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B93A4: e3031faa  mov x3, xzr
0x067B93A8: fe0743f8  ldr x30, [sp], #0x30
0x067B93AC: a0001fd6  br x5
0x067B93B0: 3f1e2797  bl #0x3180cac

; RVA 0x67B93B4 | public void TrackCollectOperation(ItemNotificationData itemData) { }
; bytes=236 sha256=f6cb849e3fcdefcc99876e224b9b52175778231cc999891ed3e25aa211716b70 status=arm64_complete_bound indexed_start=True
0x067B93B4: fe0f1df8  str x30, [sp, #-0x30]!
0x067B93B8: f65701a9  stp x22, x21, [sp, #0x10]
0x067B93BC: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B93C0: 75ab00f0  adrp x21, #0x7d28000
0x067B93C4: a8727b39  ldrb w8, [x21, #0xedc]
0x067B93C8: f30301aa  mov x19, x1
0x067B93CC: f40300aa  mov x20, x0
0x067B93D0: 28010037  tbnz w8, #0, #0x67b93f4
0x067B93D4: 407a00b0  adrp x0, #0x7702000
0x067B93D8: 00b047f9  ldr x0, [x0, #0xf60]
0x067B93DC: 8f1d2797  bl #0x3180a18
0x067B93E0: 007600b0  adrp x0, #0x767a000
0x067B93E4: 007045f9  ldr x0, [x0, #0xae0]
0x067B93E8: 8c1d2797  bl #0x3180a18
0x067B93EC: 28008052  movz w8, #0x1
0x067B93F0: a8723b39  strb w8, [x21, #0xedc]
0x067B93F4: 942240f9  ldr x20, [x20, #0x40]
0x067B93F8: 340500b4  cbz x20, #0x67b949c
0x067B93FC: 497a00b0  adrp x9, #0x7702000
0x067B9400: 29b147f9  ldr x9, [x9, #0xf60]
0x067B9404: 880240f9  ldr x8, [x20]
0x067B9408: 360140f9  ldr x22, [x9]
0x067B940C: 097600b0  adrp x9, #0x767a000
0x067B9410: 297145f9  ldr x9, [x9, #0xae0]
0x067B9414: c11240f9  ldr x1, [x22, #0x20]
0x067B9418: c2a24079  ldrh w2, [x22, #0x50]
0x067B941C: 350140f9  ldr x21, [x9]
0x067B9420: 095d4279  ldrh w9, [x8, #0x12e]
0x067B9424: 290100b4  cbz x9, #0x67b9448
0x067B9428: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B942C: 4a210091  add x10, x10, #8
0x067B9430: 4b815ff8  ldur x11, [x10, #-8]
0x067B9434: 7f0101eb  cmp x11, x1
0x067B9438: e0000054  b.eq #0x67b9454
0x067B943C: 290500f1  subs x9, x9, #1
0x067B9440: 4a410091  add x10, x10, #0x10
0x067B9444: 61ffff54  b.ne #0x67b9430
0x067B9448: e00314aa  mov x0, x20
0x067B944C: b1752697  bl #0x3156b10
0x067B9450: 05000014  b #0x67b9464
0x067B9454: 490140b9  ldr w9, [x10]
0x067B9458: 2901020b  add w9, w9, w2
0x067B945C: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9460: 00e10491  add x0, x8, #0x138
0x067B9464: 000440f9  ldr x0, [x0, #8]
0x067B9468: e10316aa  mov x1, x22
0x067B946C: c71d2797  bl #0x3180b88
0x067B9470: e50300aa  mov x5, x0
0x067B9474: 060440f9  ldr x6, [x0, #8]
0x067B9478: e00314aa  mov x0, x20
0x067B947C: e10315aa  mov x1, x21
0x067B9480: e20313aa  mov x2, x19
0x067B9484: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B9488: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B948C: e3031faa  mov x3, xzr
0x067B9490: e4031faa  mov x4, xzr
0x067B9494: fe0743f8  ldr x30, [sp], #0x30
0x067B9498: c0001fd6  br x6
0x067B949C: 041e2797  bl #0x3180cac

; RVA 0x67B94A0 | public void TrackChangeStateOperation(ItemNotificationData itemData, ExtraData extraData) { }
; bytes=240 sha256=d76ee9b07c1d34b0559edffe73cd4fccd4fb58e09d7b6be5088921fbec579a61 status=arm64_complete_bound indexed_start=True
0x067B94A0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x067B94A4: f65701a9  stp x22, x21, [sp, #0x10]
0x067B94A8: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B94AC: 76ab00f0  adrp x22, #0x7d28000
0x067B94B0: c8767b39  ldrb w8, [x22, #0xedd]
0x067B94B4: f30302aa  mov x19, x2
0x067B94B8: f40301aa  mov x20, x1
0x067B94BC: f50300aa  mov x21, x0
0x067B94C0: 28010037  tbnz w8, #0, #0x67b94e4
0x067B94C4: 407a00b0  adrp x0, #0x7702000
0x067B94C8: 00b047f9  ldr x0, [x0, #0xf60]
0x067B94CC: 531d2797  bl #0x3180a18
0x067B94D0: 607a00d0  adrp x0, #0x7707000
0x067B94D4: 004c43f9  ldr x0, [x0, #0x698]
0x067B94D8: 501d2797  bl #0x3180a18
0x067B94DC: 28008052  movz w8, #0x1
0x067B94E0: c8763b39  strb w8, [x22, #0xedd]
0x067B94E4: b52240f9  ldr x21, [x21, #0x40]
0x067B94E8: 350500b4  cbz x21, #0x67b958c
0x067B94EC: 497a00b0  adrp x9, #0x7702000
0x067B94F0: 29b147f9  ldr x9, [x9, #0xf60]
0x067B94F4: a80240f9  ldr x8, [x21]
0x067B94F8: 370140f9  ldr x23, [x9]
0x067B94FC: 697a00d0  adrp x9, #0x7707000
0x067B9500: 294d43f9  ldr x9, [x9, #0x698]
0x067B9504: e11240f9  ldr x1, [x23, #0x20]
0x067B9508: e2a24079  ldrh w2, [x23, #0x50]
0x067B950C: 360140f9  ldr x22, [x9]
0x067B9510: 095d4279  ldrh w9, [x8, #0x12e]
0x067B9514: 290100b4  cbz x9, #0x67b9538
0x067B9518: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B951C: 4a210091  add x10, x10, #8
0x067B9520: 4b815ff8  ldur x11, [x10, #-8]
0x067B9524: 7f0101eb  cmp x11, x1
0x067B9528: e0000054  b.eq #0x67b9544
0x067B952C: 290500f1  subs x9, x9, #1
0x067B9530: 4a410091  add x10, x10, #0x10
0x067B9534: 61ffff54  b.ne #0x67b9520
0x067B9538: e00315aa  mov x0, x21
0x067B953C: 75752697  bl #0x3156b10
0x067B9540: 05000014  b #0x67b9554
0x067B9544: 490140b9  ldr w9, [x10]
0x067B9548: 2901020b  add w9, w9, w2
0x067B954C: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9550: 00e10491  add x0, x8, #0x138
0x067B9554: 000440f9  ldr x0, [x0, #8]
0x067B9558: e10317aa  mov x1, x23
0x067B955C: 8b1d2797  bl #0x3180b88
0x067B9560: e50300aa  mov x5, x0
0x067B9564: 060440f9  ldr x6, [x0, #8]
0x067B9568: e00315aa  mov x0, x21
0x067B956C: e10316aa  mov x1, x22
0x067B9570: e20314aa  mov x2, x20
0x067B9574: e40313aa  mov x4, x19
0x067B9578: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B957C: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B9580: e3031faa  mov x3, xzr
0x067B9584: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x067B9588: c0001fd6  br x6
0x067B958C: c81d2797  bl #0x3180cac

; RVA 0x67B9590 | public void TrackBubbleBlastOperation(ItemNotificationData itemData, ExtraData extraData) { }
; bytes=240 sha256=79d6a3952c8ba6a2e52b05fc5dc6416d0bdaef6648c73497b42ccef54b7dbcbe status=arm64_complete_bound indexed_start=True
0x067B9590: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x067B9594: f65701a9  stp x22, x21, [sp, #0x10]
0x067B9598: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B959C: 76ab00f0  adrp x22, #0x7d28000
0x067B95A0: c87a7b39  ldrb w8, [x22, #0xede]
0x067B95A4: f30302aa  mov x19, x2
0x067B95A8: f40301aa  mov x20, x1
0x067B95AC: f50300aa  mov x21, x0
0x067B95B0: 28010037  tbnz w8, #0, #0x67b95d4
0x067B95B4: 407a00b0  adrp x0, #0x7702000
0x067B95B8: 00b047f9  ldr x0, [x0, #0xf60]
0x067B95BC: 171d2797  bl #0x3180a18
0x067B95C0: c07a0090  adrp x0, #0x7711000
0x067B95C4: 003c44f9  ldr x0, [x0, #0x878]
0x067B95C8: 141d2797  bl #0x3180a18
0x067B95CC: 28008052  movz w8, #0x1
0x067B95D0: c87a3b39  strb w8, [x22, #0xede]
0x067B95D4: b52240f9  ldr x21, [x21, #0x40]
0x067B95D8: 350500b4  cbz x21, #0x67b967c
0x067B95DC: 497a00b0  adrp x9, #0x7702000
0x067B95E0: 29b147f9  ldr x9, [x9, #0xf60]
0x067B95E4: a80240f9  ldr x8, [x21]
0x067B95E8: 370140f9  ldr x23, [x9]
0x067B95EC: c97a0090  adrp x9, #0x7711000
0x067B95F0: 293d44f9  ldr x9, [x9, #0x878]
0x067B95F4: e11240f9  ldr x1, [x23, #0x20]
0x067B95F8: e2a24079  ldrh w2, [x23, #0x50]
0x067B95FC: 360140f9  ldr x22, [x9]
0x067B9600: 095d4279  ldrh w9, [x8, #0x12e]
0x067B9604: 290100b4  cbz x9, #0x67b9628
0x067B9608: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B960C: 4a210091  add x10, x10, #8
0x067B9610: 4b815ff8  ldur x11, [x10, #-8]
0x067B9614: 7f0101eb  cmp x11, x1
0x067B9618: e0000054  b.eq #0x67b9634
0x067B961C: 290500f1  subs x9, x9, #1
0x067B9620: 4a410091  add x10, x10, #0x10
0x067B9624: 61ffff54  b.ne #0x67b9610
0x067B9628: e00315aa  mov x0, x21
0x067B962C: 39752697  bl #0x3156b10
0x067B9630: 05000014  b #0x67b9644
0x067B9634: 490140b9  ldr w9, [x10]
0x067B9638: 2901020b  add w9, w9, w2
0x067B963C: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9640: 00e10491  add x0, x8, #0x138
0x067B9644: 000440f9  ldr x0, [x0, #8]
0x067B9648: e10317aa  mov x1, x23
0x067B964C: 4f1d2797  bl #0x3180b88
0x067B9650: e50300aa  mov x5, x0
0x067B9654: 060440f9  ldr x6, [x0, #8]
0x067B9658: e00315aa  mov x0, x21
0x067B965C: e10316aa  mov x1, x22
0x067B9660: e20314aa  mov x2, x20
0x067B9664: e40313aa  mov x4, x19
0x067B9668: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B966C: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B9670: e3031faa  mov x3, xzr
0x067B9674: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x067B9678: c0001fd6  br x6
0x067B967C: 8c1d2797  bl #0x3180cac

; RVA 0x67B9680 | public void TrackRemoveOperation(ItemNotificationData itemData, ExtraData extraData) { }
; bytes=240 sha256=30a39cbb3972ee6eaa966eb69d6f145254161764478a0b037115b1c0ece35cb8 status=arm64_complete_bound indexed_start=True
0x067B9680: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x067B9684: f65701a9  stp x22, x21, [sp, #0x10]
0x067B9688: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B968C: 76ab00f0  adrp x22, #0x7d28000
0x067B9690: c87e7b39  ldrb w8, [x22, #0xedf]
0x067B9694: f30302aa  mov x19, x2
0x067B9698: f40301aa  mov x20, x1
0x067B969C: f50300aa  mov x21, x0
0x067B96A0: 28010037  tbnz w8, #0, #0x67b96c4
0x067B96A4: 407a00b0  adrp x0, #0x7702000
0x067B96A8: 00b047f9  ldr x0, [x0, #0xf60]
0x067B96AC: db1c2797  bl #0x3180a18
0x067B96B0: 807500d0  adrp x0, #0x766b000
0x067B96B4: 00b040f9  ldr x0, [x0, #0x160]
0x067B96B8: d81c2797  bl #0x3180a18
0x067B96BC: 28008052  movz w8, #0x1
0x067B96C0: c87e3b39  strb w8, [x22, #0xedf]
0x067B96C4: b52240f9  ldr x21, [x21, #0x40]
0x067B96C8: 350500b4  cbz x21, #0x67b976c
0x067B96CC: 497a00b0  adrp x9, #0x7702000
0x067B96D0: 29b147f9  ldr x9, [x9, #0xf60]
0x067B96D4: a80240f9  ldr x8, [x21]
0x067B96D8: 370140f9  ldr x23, [x9]
0x067B96DC: 897500d0  adrp x9, #0x766b000
0x067B96E0: 29b140f9  ldr x9, [x9, #0x160]
0x067B96E4: e11240f9  ldr x1, [x23, #0x20]
0x067B96E8: e2a24079  ldrh w2, [x23, #0x50]
0x067B96EC: 360140f9  ldr x22, [x9]
0x067B96F0: 095d4279  ldrh w9, [x8, #0x12e]
0x067B96F4: 290100b4  cbz x9, #0x67b9718
0x067B96F8: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B96FC: 4a210091  add x10, x10, #8
0x067B9700: 4b815ff8  ldur x11, [x10, #-8]
0x067B9704: 7f0101eb  cmp x11, x1
0x067B9708: e0000054  b.eq #0x67b9724
0x067B970C: 290500f1  subs x9, x9, #1
0x067B9710: 4a410091  add x10, x10, #0x10
0x067B9714: 61ffff54  b.ne #0x67b9700
0x067B9718: e00315aa  mov x0, x21
0x067B971C: fd742697  bl #0x3156b10
0x067B9720: 05000014  b #0x67b9734
0x067B9724: 490140b9  ldr w9, [x10]
0x067B9728: 2901020b  add w9, w9, w2
0x067B972C: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9730: 00e10491  add x0, x8, #0x138
0x067B9734: 000440f9  ldr x0, [x0, #8]
0x067B9738: e10317aa  mov x1, x23
0x067B973C: 131d2797  bl #0x3180b88
0x067B9740: e50300aa  mov x5, x0
0x067B9744: 060440f9  ldr x6, [x0, #8]
0x067B9748: e00315aa  mov x0, x21
0x067B974C: e10316aa  mov x1, x22
0x067B9750: e20314aa  mov x2, x20
0x067B9754: e40313aa  mov x4, x19
0x067B9758: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B975C: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B9760: e3031faa  mov x3, xzr
0x067B9764: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x067B9768: c0001fd6  br x6
0x067B976C: 501d2797  bl #0x3180cac

; RVA 0x67B9770 | public void TrackSellItemOperation(ItemNotificationData itemData) { }
; bytes=236 sha256=1864f695c25d70030e15ff22108ec4cdc0cd0010bc3eba12996e3181f6494125 status=arm64_complete_bound indexed_start=True
0x067B9770: fe0f1df8  str x30, [sp, #-0x30]!
0x067B9774: f65701a9  stp x22, x21, [sp, #0x10]
0x067B9778: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B977C: 75ab00f0  adrp x21, #0x7d28000
0x067B9780: a8827b39  ldrb w8, [x21, #0xee0]
0x067B9784: f30301aa  mov x19, x1
0x067B9788: f40300aa  mov x20, x0
0x067B978C: 28010037  tbnz w8, #0, #0x67b97b0
0x067B9790: 407a00b0  adrp x0, #0x7702000
0x067B9794: 00b047f9  ldr x0, [x0, #0xf60]
0x067B9798: a01c2797  bl #0x3180a18
0x067B979C: c07a0090  adrp x0, #0x7711000
0x067B97A0: 004044f9  ldr x0, [x0, #0x880]
0x067B97A4: 9d1c2797  bl #0x3180a18
0x067B97A8: 28008052  movz w8, #0x1
0x067B97AC: a8823b39  strb w8, [x21, #0xee0]
0x067B97B0: 942240f9  ldr x20, [x20, #0x40]
0x067B97B4: 340500b4  cbz x20, #0x67b9858
0x067B97B8: 497a00b0  adrp x9, #0x7702000
0x067B97BC: 29b147f9  ldr x9, [x9, #0xf60]
0x067B97C0: 880240f9  ldr x8, [x20]
0x067B97C4: 360140f9  ldr x22, [x9]
0x067B97C8: c97a0090  adrp x9, #0x7711000
0x067B97CC: 294144f9  ldr x9, [x9, #0x880]
0x067B97D0: c11240f9  ldr x1, [x22, #0x20]
0x067B97D4: c2a24079  ldrh w2, [x22, #0x50]
0x067B97D8: 350140f9  ldr x21, [x9]
0x067B97DC: 095d4279  ldrh w9, [x8, #0x12e]
0x067B97E0: 290100b4  cbz x9, #0x67b9804
0x067B97E4: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B97E8: 4a210091  add x10, x10, #8
0x067B97EC: 4b815ff8  ldur x11, [x10, #-8]
0x067B97F0: 7f0101eb  cmp x11, x1
0x067B97F4: e0000054  b.eq #0x67b9810
0x067B97F8: 290500f1  subs x9, x9, #1
0x067B97FC: 4a410091  add x10, x10, #0x10
0x067B9800: 61ffff54  b.ne #0x67b97ec
0x067B9804: e00314aa  mov x0, x20
0x067B9808: c2742697  bl #0x3156b10
0x067B980C: 05000014  b #0x67b9820
0x067B9810: 490140b9  ldr w9, [x10]
0x067B9814: 2901020b  add w9, w9, w2
0x067B9818: 08d1298b  add x8, x8, w9, sxtw #4
0x067B981C: 00e10491  add x0, x8, #0x138
0x067B9820: 000440f9  ldr x0, [x0, #8]
0x067B9824: e10316aa  mov x1, x22
0x067B9828: d81c2797  bl #0x3180b88
0x067B982C: e50300aa  mov x5, x0
0x067B9830: 060440f9  ldr x6, [x0, #8]
0x067B9834: e00314aa  mov x0, x20
0x067B9838: e10315aa  mov x1, x21
0x067B983C: e20313aa  mov x2, x19
0x067B9840: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B9844: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B9848: e3031faa  mov x3, xzr
0x067B984C: e4031faa  mov x4, xzr
0x067B9850: fe0743f8  ldr x30, [sp], #0x30
0x067B9854: c0001fd6  br x6
0x067B9858: 151d2797  bl #0x3180cac

; RVA 0x67B985C | public void TrackUndoSellOperation(ItemNotificationData itemData) { }
; bytes=236 sha256=caaa6a072ae5b0746eb9c0ca2e4ceeb3c97d7cd1bd56d555c29ce9f3ced2a694 status=arm64_complete_bound indexed_start=True
0x067B985C: fe0f1df8  str x30, [sp, #-0x30]!
0x067B9860: f65701a9  stp x22, x21, [sp, #0x10]
0x067B9864: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B9868: 75ab00f0  adrp x21, #0x7d28000
0x067B986C: a8867b39  ldrb w8, [x21, #0xee1]
0x067B9870: f30301aa  mov x19, x1
0x067B9874: f40300aa  mov x20, x0
0x067B9878: 28010037  tbnz w8, #0, #0x67b989c
0x067B987C: 407a00b0  adrp x0, #0x7702000
0x067B9880: 00b047f9  ldr x0, [x0, #0xf60]
0x067B9884: 651c2797  bl #0x3180a18
0x067B9888: c07a0090  adrp x0, #0x7711000
0x067B988C: 004444f9  ldr x0, [x0, #0x888]
0x067B9890: 621c2797  bl #0x3180a18
0x067B9894: 28008052  movz w8, #0x1
0x067B9898: a8863b39  strb w8, [x21, #0xee1]
0x067B989C: 942240f9  ldr x20, [x20, #0x40]
0x067B98A0: 340500b4  cbz x20, #0x67b9944
0x067B98A4: 497a00b0  adrp x9, #0x7702000
0x067B98A8: 29b147f9  ldr x9, [x9, #0xf60]
0x067B98AC: 880240f9  ldr x8, [x20]
0x067B98B0: 360140f9  ldr x22, [x9]
0x067B98B4: c97a0090  adrp x9, #0x7711000
0x067B98B8: 294544f9  ldr x9, [x9, #0x888]
0x067B98BC: c11240f9  ldr x1, [x22, #0x20]
0x067B98C0: c2a24079  ldrh w2, [x22, #0x50]
0x067B98C4: 350140f9  ldr x21, [x9]
0x067B98C8: 095d4279  ldrh w9, [x8, #0x12e]
0x067B98CC: 290100b4  cbz x9, #0x67b98f0
0x067B98D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B98D4: 4a210091  add x10, x10, #8
0x067B98D8: 4b815ff8  ldur x11, [x10, #-8]
0x067B98DC: 7f0101eb  cmp x11, x1
0x067B98E0: e0000054  b.eq #0x67b98fc
0x067B98E4: 290500f1  subs x9, x9, #1
0x067B98E8: 4a410091  add x10, x10, #0x10
0x067B98EC: 61ffff54  b.ne #0x67b98d8
0x067B98F0: e00314aa  mov x0, x20
0x067B98F4: 87742697  bl #0x3156b10
0x067B98F8: 05000014  b #0x67b990c
0x067B98FC: 490140b9  ldr w9, [x10]
0x067B9900: 2901020b  add w9, w9, w2
0x067B9904: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9908: 00e10491  add x0, x8, #0x138
0x067B990C: 000440f9  ldr x0, [x0, #8]
0x067B9910: e10316aa  mov x1, x22
0x067B9914: 9d1c2797  bl #0x3180b88
0x067B9918: e50300aa  mov x5, x0
0x067B991C: 060440f9  ldr x6, [x0, #8]
0x067B9920: e00314aa  mov x0, x20
0x067B9924: e10315aa  mov x1, x21
0x067B9928: e20313aa  mov x2, x19
0x067B992C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B9930: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B9934: e3031faa  mov x3, xzr
0x067B9938: e4031faa  mov x4, xzr
0x067B993C: fe0743f8  ldr x30, [sp], #0x30
0x067B9940: c0001fd6  br x6
0x067B9944: da1c2797  bl #0x3180cac

; RVA 0x67B9948 | public void TrackEnqueueUndoSellOperation(ItemNotificationData itemData, string uuidInBoardQueue, long enqueueTimestamp) { }
; bytes=320 sha256=2fb7d871708e2e05715a59ccb8368b11248da358aea1f95ad97711069f7917c9 status=arm64_complete_bound indexed_start=True
0x067B9948: fe0f1cf8  str x30, [sp, #-0x40]!
0x067B994C: f85f01a9  stp x24, x23, [sp, #0x10]
0x067B9950: f65702a9  stp x22, x21, [sp, #0x20]
0x067B9954: f44f03a9  stp x20, x19, [sp, #0x30]
0x067B9958: 74ab00f0  adrp x20, #0x7d28000
0x067B995C: 187600b0  adrp x24, #0x767a000
0x067B9960: 888a7b39  ldrb w8, [x20, #0xee2]
0x067B9964: 184f45f9  ldr x24, [x24, #0xa98]
0x067B9968: f50303aa  mov x21, x3
0x067B996C: f70302aa  mov x23, x2
0x067B9970: f30301aa  mov x19, x1
0x067B9974: f60300aa  mov x22, x0
0x067B9978: 88010037  tbnz w8, #0, #0x67b99a8
0x067B997C: 007600b0  adrp x0, #0x767a000
0x067B9980: 004c45f9  ldr x0, [x0, #0xa98]
0x067B9984: 251c2797  bl #0x3180a18
0x067B9988: 407a00b0  adrp x0, #0x7702000
0x067B998C: 00b047f9  ldr x0, [x0, #0xf60]
0x067B9990: 221c2797  bl #0x3180a18
0x067B9994: c07a0090  adrp x0, #0x7711000
0x067B9998: 004444f9  ldr x0, [x0, #0x888]
0x067B999C: 1f1c2797  bl #0x3180a18
0x067B99A0: 28008052  movz w8, #0x1
0x067B99A4: 888a3b39  strb w8, [x20, #0xee2]
0x067B99A8: 000340f9  ldr x0, [x24]
0x067B99AC: bd1c2797  bl #0x3180ca0
0x067B99B0: e1031faa  mov x1, xzr
0x067B99B4: f40300aa  mov x20, x0
0x067B99B8: 0fdd0594  bl #0x6930df4
0x067B99BC: 540600b4  cbz x20, #0x67b9a84
0x067B99C0: f80314aa  mov x24, x20
0x067B99C4: 170f03f8  str x23, [x24, #0x30]!
0x067B99C8: e00318aa  mov x0, x24
0x067B99CC: e10317aa  mov x1, x23
0x067B99D0: fd1b2797  bl #0x31809c4
0x067B99D4: 150700f9  str x21, [x24, #8]
0x067B99D8: d52240f9  ldr x21, [x22, #0x40]
0x067B99DC: 550500b4  cbz x21, #0x67b9a84
0x067B99E0: 497a00b0  adrp x9, #0x7702000
0x067B99E4: 29b147f9  ldr x9, [x9, #0xf60]
0x067B99E8: a80240f9  ldr x8, [x21]
0x067B99EC: 370140f9  ldr x23, [x9]
0x067B99F0: c97a0090  adrp x9, #0x7711000
0x067B99F4: 294544f9  ldr x9, [x9, #0x888]
0x067B99F8: e11240f9  ldr x1, [x23, #0x20]
0x067B99FC: e2a24079  ldrh w2, [x23, #0x50]
0x067B9A00: 360140f9  ldr x22, [x9]
0x067B9A04: 095d4279  ldrh w9, [x8, #0x12e]
0x067B9A08: 290100b4  cbz x9, #0x67b9a2c
0x067B9A0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B9A10: 4a210091  add x10, x10, #8
0x067B9A14: 4b815ff8  ldur x11, [x10, #-8]
0x067B9A18: 7f0101eb  cmp x11, x1
0x067B9A1C: e0000054  b.eq #0x67b9a38
0x067B9A20: 290500f1  subs x9, x9, #1
0x067B9A24: 4a410091  add x10, x10, #0x10
0x067B9A28: 61ffff54  b.ne #0x67b9a14
0x067B9A2C: e00315aa  mov x0, x21
0x067B9A30: 38742697  bl #0x3156b10
0x067B9A34: 05000014  b #0x67b9a48
0x067B9A38: 490140b9  ldr w9, [x10]
0x067B9A3C: 2901020b  add w9, w9, w2
0x067B9A40: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9A44: 00e10491  add x0, x8, #0x138
0x067B9A48: 000440f9  ldr x0, [x0, #8]
0x067B9A4C: e10317aa  mov x1, x23
0x067B9A50: 4e1c2797  bl #0x3180b88
0x067B9A54: e50300aa  mov x5, x0
0x067B9A58: 060440f9  ldr x6, [x0, #8]
0x067B9A5C: e00315aa  mov x0, x21
0x067B9A60: e10316aa  mov x1, x22
0x067B9A64: e20313aa  mov x2, x19
0x067B9A68: e40314aa  mov x4, x20
0x067B9A6C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x067B9A70: f65742a9  ldp x22, x21, [sp, #0x20]
0x067B9A74: f85f41a9  ldp x24, x23, [sp, #0x10]
0x067B9A78: e3031faa  mov x3, xzr
0x067B9A7C: fe0744f8  ldr x30, [sp], #0x40
0x067B9A80: c0001fd6  br x6
0x067B9A84: 8a1c2797  bl #0x3180cac

; RVA 0x67B9A88 | public void TrackEnqueueItemOperation(ItemNotificationData itemData, string uuidInBoardQueue, long enqueueTimestamp) { }
; bytes=320 sha256=ef5367a44ee4380d34613cfdff1e75bd894407d418ac464edd544d082da1c270 status=arm64_complete_bound indexed_start=True
0x067B9A88: fe0f1cf8  str x30, [sp, #-0x40]!
0x067B9A8C: f85f01a9  stp x24, x23, [sp, #0x10]
0x067B9A90: f65702a9  stp x22, x21, [sp, #0x20]
0x067B9A94: f44f03a9  stp x20, x19, [sp, #0x30]
0x067B9A98: 74ab00f0  adrp x20, #0x7d28000
0x067B9A9C: 187600b0  adrp x24, #0x767a000
0x067B9AA0: 888e7b39  ldrb w8, [x20, #0xee3]
0x067B9AA4: 184f45f9  ldr x24, [x24, #0xa98]
0x067B9AA8: f50303aa  mov x21, x3
0x067B9AAC: f70302aa  mov x23, x2
0x067B9AB0: f30301aa  mov x19, x1
0x067B9AB4: f60300aa  mov x22, x0
0x067B9AB8: 88010037  tbnz w8, #0, #0x67b9ae8
0x067B9ABC: 007600b0  adrp x0, #0x767a000
0x067B9AC0: 004c45f9  ldr x0, [x0, #0xa98]
0x067B9AC4: d51b2797  bl #0x3180a18
0x067B9AC8: 407a00b0  adrp x0, #0x7702000
0x067B9ACC: 00b047f9  ldr x0, [x0, #0xf60]
0x067B9AD0: d21b2797  bl #0x3180a18
0x067B9AD4: 40780090  adrp x0, #0x76c1000
0x067B9AD8: 000847f9  ldr x0, [x0, #0xe10]
0x067B9ADC: cf1b2797  bl #0x3180a18
0x067B9AE0: 28008052  movz w8, #0x1
0x067B9AE4: 888e3b39  strb w8, [x20, #0xee3]
0x067B9AE8: 000340f9  ldr x0, [x24]
0x067B9AEC: 6d1c2797  bl #0x3180ca0
0x067B9AF0: e1031faa  mov x1, xzr
0x067B9AF4: f40300aa  mov x20, x0
0x067B9AF8: bfdc0594  bl #0x6930df4
0x067B9AFC: 540600b4  cbz x20, #0x67b9bc4
0x067B9B00: f80314aa  mov x24, x20
0x067B9B04: 170f03f8  str x23, [x24, #0x30]!
0x067B9B08: e00318aa  mov x0, x24
0x067B9B0C: e10317aa  mov x1, x23
0x067B9B10: ad1b2797  bl #0x31809c4
0x067B9B14: 150700f9  str x21, [x24, #8]
0x067B9B18: d52240f9  ldr x21, [x22, #0x40]
0x067B9B1C: 550500b4  cbz x21, #0x67b9bc4
0x067B9B20: 497a00b0  adrp x9, #0x7702000
0x067B9B24: 29b147f9  ldr x9, [x9, #0xf60]
0x067B9B28: a80240f9  ldr x8, [x21]
0x067B9B2C: 370140f9  ldr x23, [x9]
0x067B9B30: 49780090  adrp x9, #0x76c1000
0x067B9B34: 290947f9  ldr x9, [x9, #0xe10]
0x067B9B38: e11240f9  ldr x1, [x23, #0x20]
0x067B9B3C: e2a24079  ldrh w2, [x23, #0x50]
0x067B9B40: 360140f9  ldr x22, [x9]
0x067B9B44: 095d4279  ldrh w9, [x8, #0x12e]
0x067B9B48: 290100b4  cbz x9, #0x67b9b6c
0x067B9B4C: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B9B50: 4a210091  add x10, x10, #8
0x067B9B54: 4b815ff8  ldur x11, [x10, #-8]
0x067B9B58: 7f0101eb  cmp x11, x1
0x067B9B5C: e0000054  b.eq #0x67b9b78
0x067B9B60: 290500f1  subs x9, x9, #1
0x067B9B64: 4a410091  add x10, x10, #0x10
0x067B9B68: 61ffff54  b.ne #0x67b9b54
0x067B9B6C: e00315aa  mov x0, x21
0x067B9B70: e8732697  bl #0x3156b10
0x067B9B74: 05000014  b #0x67b9b88
0x067B9B78: 490140b9  ldr w9, [x10]
0x067B9B7C: 2901020b  add w9, w9, w2
0x067B9B80: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9B84: 00e10491  add x0, x8, #0x138
0x067B9B88: 000440f9  ldr x0, [x0, #8]
0x067B9B8C: e10317aa  mov x1, x23
0x067B9B90: fe1b2797  bl #0x3180b88
0x067B9B94: e50300aa  mov x5, x0
0x067B9B98: 060440f9  ldr x6, [x0, #8]
0x067B9B9C: e00315aa  mov x0, x21
0x067B9BA0: e10316aa  mov x1, x22
0x067B9BA4: e20313aa  mov x2, x19
0x067B9BA8: e40314aa  mov x4, x20
0x067B9BAC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x067B9BB0: f65742a9  ldp x22, x21, [sp, #0x20]
0x067B9BB4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x067B9BB8: e3031faa  mov x3, xzr
0x067B9BBC: fe0744f8  ldr x30, [sp], #0x40
0x067B9BC0: c0001fd6  br x6
0x067B9BC4: 3a1c2797  bl #0x3180cac

; RVA 0x67B9BC8 | public void TrackItemDestroyOperation(ItemNotificationData itemData) { }
; bytes=236 sha256=a3da9b6b66b74f7c9cc0188fe613b2fe3859977578bf4b72797f9e6c658c8fb5 status=arm64_complete_bound indexed_start=True
0x067B9BC8: fe0f1df8  str x30, [sp, #-0x30]!
0x067B9BCC: f65701a9  stp x22, x21, [sp, #0x10]
0x067B9BD0: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B9BD4: 75ab00f0  adrp x21, #0x7d28000
0x067B9BD8: a8927b39  ldrb w8, [x21, #0xee4]
0x067B9BDC: f30301aa  mov x19, x1
0x067B9BE0: f40300aa  mov x20, x0
0x067B9BE4: 28010037  tbnz w8, #0, #0x67b9c08
0x067B9BE8: 407a00b0  adrp x0, #0x7702000
0x067B9BEC: 00b047f9  ldr x0, [x0, #0xf60]
0x067B9BF0: 8a1b2797  bl #0x3180a18
0x067B9BF4: e07800d0  adrp x0, #0x76d7000
0x067B9BF8: 008842f9  ldr x0, [x0, #0x510]
0x067B9BFC: 871b2797  bl #0x3180a18
0x067B9C00: 28008052  movz w8, #0x1
0x067B9C04: a8923b39  strb w8, [x21, #0xee4]
0x067B9C08: 942240f9  ldr x20, [x20, #0x40]
0x067B9C0C: 340500b4  cbz x20, #0x67b9cb0
0x067B9C10: 497a00b0  adrp x9, #0x7702000
0x067B9C14: 29b147f9  ldr x9, [x9, #0xf60]
0x067B9C18: 880240f9  ldr x8, [x20]
0x067B9C1C: 360140f9  ldr x22, [x9]
0x067B9C20: e97800d0  adrp x9, #0x76d7000
0x067B9C24: 298942f9  ldr x9, [x9, #0x510]
0x067B9C28: c11240f9  ldr x1, [x22, #0x20]
0x067B9C2C: c2a24079  ldrh w2, [x22, #0x50]
0x067B9C30: 350140f9  ldr x21, [x9]
0x067B9C34: 095d4279  ldrh w9, [x8, #0x12e]
0x067B9C38: 290100b4  cbz x9, #0x67b9c5c
0x067B9C3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B9C40: 4a210091  add x10, x10, #8
0x067B9C44: 4b815ff8  ldur x11, [x10, #-8]
0x067B9C48: 7f0101eb  cmp x11, x1
0x067B9C4C: e0000054  b.eq #0x67b9c68
0x067B9C50: 290500f1  subs x9, x9, #1
0x067B9C54: 4a410091  add x10, x10, #0x10
0x067B9C58: 61ffff54  b.ne #0x67b9c44
0x067B9C5C: e00314aa  mov x0, x20
0x067B9C60: ac732697  bl #0x3156b10
0x067B9C64: 05000014  b #0x67b9c78
0x067B9C68: 490140b9  ldr w9, [x10]
0x067B9C6C: 2901020b  add w9, w9, w2
0x067B9C70: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9C74: 00e10491  add x0, x8, #0x138
0x067B9C78: 000440f9  ldr x0, [x0, #8]
0x067B9C7C: e10316aa  mov x1, x22
0x067B9C80: c21b2797  bl #0x3180b88
0x067B9C84: e50300aa  mov x5, x0
0x067B9C88: 060440f9  ldr x6, [x0, #8]
0x067B9C8C: e00314aa  mov x0, x20
0x067B9C90: e10315aa  mov x1, x21
0x067B9C94: e20313aa  mov x2, x19
0x067B9C98: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B9C9C: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B9CA0: e3031faa  mov x3, xzr
0x067B9CA4: e4031faa  mov x4, xzr
0x067B9CA8: fe0743f8  ldr x30, [sp], #0x30
0x067B9CAC: c0001fd6  br x6
0x067B9CB0: ff1b2797  bl #0x3180cac

; RVA 0x67B9CB4 | public void TrackCreateItemOnBoardOperation(ItemNotificationData itemData) { }
; bytes=236 sha256=74631bfd920cabe74b55651bb6fa08fbb40723ac3e2678f24c11425f89d51383 status=arm64_complete_bound indexed_start=True
0x067B9CB4: fe0f1df8  str x30, [sp, #-0x30]!
0x067B9CB8: f65701a9  stp x22, x21, [sp, #0x10]
0x067B9CBC: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B9CC0: 75ab00f0  adrp x21, #0x7d28000
0x067B9CC4: a8967b39  ldrb w8, [x21, #0xee5]
0x067B9CC8: f30301aa  mov x19, x1
0x067B9CCC: f40300aa  mov x20, x0
0x067B9CD0: 28010037  tbnz w8, #0, #0x67b9cf4
0x067B9CD4: 407a00b0  adrp x0, #0x7702000
0x067B9CD8: 00b047f9  ldr x0, [x0, #0xf60]
0x067B9CDC: 4f1b2797  bl #0x3180a18
0x067B9CE0: c07a0090  adrp x0, #0x7711000
0x067B9CE4: 004844f9  ldr x0, [x0, #0x890]
0x067B9CE8: 4c1b2797  bl #0x3180a18
0x067B9CEC: 28008052  movz w8, #0x1
0x067B9CF0: a8963b39  strb w8, [x21, #0xee5]
0x067B9CF4: 942240f9  ldr x20, [x20, #0x40]
0x067B9CF8: 340500b4  cbz x20, #0x67b9d9c
0x067B9CFC: 497a00b0  adrp x9, #0x7702000
0x067B9D00: 29b147f9  ldr x9, [x9, #0xf60]
0x067B9D04: 880240f9  ldr x8, [x20]
0x067B9D08: 360140f9  ldr x22, [x9]
0x067B9D0C: c97a0090  adrp x9, #0x7711000
0x067B9D10: 294944f9  ldr x9, [x9, #0x890]
0x067B9D14: c11240f9  ldr x1, [x22, #0x20]
0x067B9D18: c2a24079  ldrh w2, [x22, #0x50]
0x067B9D1C: 350140f9  ldr x21, [x9]
0x067B9D20: 095d4279  ldrh w9, [x8, #0x12e]
0x067B9D24: 290100b4  cbz x9, #0x67b9d48
0x067B9D28: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B9D2C: 4a210091  add x10, x10, #8
0x067B9D30: 4b815ff8  ldur x11, [x10, #-8]
0x067B9D34: 7f0101eb  cmp x11, x1
0x067B9D38: e0000054  b.eq #0x67b9d54
0x067B9D3C: 290500f1  subs x9, x9, #1
0x067B9D40: 4a410091  add x10, x10, #0x10
0x067B9D44: 61ffff54  b.ne #0x67b9d30
0x067B9D48: e00314aa  mov x0, x20
0x067B9D4C: 71732697  bl #0x3156b10
0x067B9D50: 05000014  b #0x67b9d64
0x067B9D54: 490140b9  ldr w9, [x10]
0x067B9D58: 2901020b  add w9, w9, w2
0x067B9D5C: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9D60: 00e10491  add x0, x8, #0x138
0x067B9D64: 000440f9  ldr x0, [x0, #8]
0x067B9D68: e10316aa  mov x1, x22
0x067B9D6C: 871b2797  bl #0x3180b88
0x067B9D70: e50300aa  mov x5, x0
0x067B9D74: 060440f9  ldr x6, [x0, #8]
0x067B9D78: e00314aa  mov x0, x20
0x067B9D7C: e10315aa  mov x1, x21
0x067B9D80: e20313aa  mov x2, x19
0x067B9D84: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B9D88: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B9D8C: e3031faa  mov x3, xzr
0x067B9D90: e4031faa  mov x4, xzr
0x067B9D94: fe0743f8  ldr x30, [sp], #0x30
0x067B9D98: c0001fd6  br x6
0x067B9D9C: c41b2797  bl #0x3180cac

; RVA 0x67B9DA0 | public void TrackSwapItemOperation(List<ItemNotificationData> itemData) { }
; bytes=232 sha256=97b23f52f761108c55af034cc7f15a9f5567567463cb046248a961afc86ebd83 status=arm64_complete_bound indexed_start=True
0x067B9DA0: fe0f1df8  str x30, [sp, #-0x30]!
0x067B9DA4: f65701a9  stp x22, x21, [sp, #0x10]
0x067B9DA8: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B9DAC: 75ab00f0  adrp x21, #0x7d28000
0x067B9DB0: a89a7b39  ldrb w8, [x21, #0xee6]
0x067B9DB4: f30301aa  mov x19, x1
0x067B9DB8: f40300aa  mov x20, x0
0x067B9DBC: 28010037  tbnz w8, #0, #0x67b9de0
0x067B9DC0: 007600b0  adrp x0, #0x767a000
0x067B9DC4: 008445f9  ldr x0, [x0, #0xb08]
0x067B9DC8: 141b2797  bl #0x3180a18
0x067B9DCC: c07a0090  adrp x0, #0x7711000
0x067B9DD0: 004c44f9  ldr x0, [x0, #0x898]
0x067B9DD4: 111b2797  bl #0x3180a18
0x067B9DD8: 28008052  movz w8, #0x1
0x067B9DDC: a89a3b39  strb w8, [x21, #0xee6]
0x067B9DE0: 942240f9  ldr x20, [x20, #0x40]
0x067B9DE4: 140500b4  cbz x20, #0x67b9e84
0x067B9DE8: 097600b0  adrp x9, #0x767a000
0x067B9DEC: 298545f9  ldr x9, [x9, #0xb08]
0x067B9DF0: 880240f9  ldr x8, [x20]
0x067B9DF4: 360140f9  ldr x22, [x9]
0x067B9DF8: c97a0090  adrp x9, #0x7711000
0x067B9DFC: 294d44f9  ldr x9, [x9, #0x898]
0x067B9E00: c11240f9  ldr x1, [x22, #0x20]
0x067B9E04: c2a24079  ldrh w2, [x22, #0x50]
0x067B9E08: 350140f9  ldr x21, [x9]
0x067B9E0C: 095d4279  ldrh w9, [x8, #0x12e]
0x067B9E10: 290100b4  cbz x9, #0x67b9e34
0x067B9E14: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B9E18: 4a210091  add x10, x10, #8
0x067B9E1C: 4b815ff8  ldur x11, [x10, #-8]
0x067B9E20: 7f0101eb  cmp x11, x1
0x067B9E24: e0000054  b.eq #0x67b9e40
0x067B9E28: 290500f1  subs x9, x9, #1
0x067B9E2C: 4a410091  add x10, x10, #0x10
0x067B9E30: 61ffff54  b.ne #0x67b9e1c
0x067B9E34: e00314aa  mov x0, x20
0x067B9E38: 36732697  bl #0x3156b10
0x067B9E3C: 05000014  b #0x67b9e50
0x067B9E40: 490140b9  ldr w9, [x10]
0x067B9E44: 2901020b  add w9, w9, w2
0x067B9E48: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9E4C: 00e10491  add x0, x8, #0x138
0x067B9E50: 000440f9  ldr x0, [x0, #8]
0x067B9E54: e10316aa  mov x1, x22
0x067B9E58: 4c1b2797  bl #0x3180b88
0x067B9E5C: e40300aa  mov x4, x0
0x067B9E60: 050440f9  ldr x5, [x0, #8]
0x067B9E64: e00314aa  mov x0, x20
0x067B9E68: e10315aa  mov x1, x21
0x067B9E6C: e20313aa  mov x2, x19
0x067B9E70: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B9E74: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B9E78: e3031faa  mov x3, xzr
0x067B9E7C: fe0743f8  ldr x30, [sp], #0x30
0x067B9E80: a0001fd6  br x5
0x067B9E84: 8a1b2797  bl #0x3180cac

; RVA 0x67B9E88 | public void TrackExpireMeteorOperation(ItemNotificationData itemData) { }
; bytes=236 sha256=a47d9ca45de6dbdfee154bcb9a014e033be8a4396b18d0b60416d955a198247f status=arm64_complete_bound indexed_start=True
0x067B9E88: fe0f1df8  str x30, [sp, #-0x30]!
0x067B9E8C: f65701a9  stp x22, x21, [sp, #0x10]
0x067B9E90: f44f02a9  stp x20, x19, [sp, #0x20]
0x067B9E94: 75ab00f0  adrp x21, #0x7d28000
0x067B9E98: a89e7b39  ldrb w8, [x21, #0xee7]
0x067B9E9C: f30301aa  mov x19, x1
0x067B9EA0: f40300aa  mov x20, x0
0x067B9EA4: 28010037  tbnz w8, #0, #0x67b9ec8
0x067B9EA8: 407a00b0  adrp x0, #0x7702000
0x067B9EAC: 00b047f9  ldr x0, [x0, #0xf60]
0x067B9EB0: da1a2797  bl #0x3180a18
0x067B9EB4: c07a0090  adrp x0, #0x7711000
0x067B9EB8: 005044f9  ldr x0, [x0, #0x8a0]
0x067B9EBC: d71a2797  bl #0x3180a18
0x067B9EC0: 28008052  movz w8, #0x1
0x067B9EC4: a89e3b39  strb w8, [x21, #0xee7]
0x067B9EC8: 942240f9  ldr x20, [x20, #0x40]
0x067B9ECC: 340500b4  cbz x20, #0x67b9f70
0x067B9ED0: 497a00b0  adrp x9, #0x7702000
0x067B9ED4: 29b147f9  ldr x9, [x9, #0xf60]
0x067B9ED8: 880240f9  ldr x8, [x20]
0x067B9EDC: 360140f9  ldr x22, [x9]
0x067B9EE0: c97a0090  adrp x9, #0x7711000
0x067B9EE4: 295144f9  ldr x9, [x9, #0x8a0]
0x067B9EE8: c11240f9  ldr x1, [x22, #0x20]
0x067B9EEC: c2a24079  ldrh w2, [x22, #0x50]
0x067B9EF0: 350140f9  ldr x21, [x9]
0x067B9EF4: 095d4279  ldrh w9, [x8, #0x12e]
0x067B9EF8: 290100b4  cbz x9, #0x67b9f1c
0x067B9EFC: 0a5940f9  ldr x10, [x8, #0xb0]
0x067B9F00: 4a210091  add x10, x10, #8
0x067B9F04: 4b815ff8  ldur x11, [x10, #-8]
0x067B9F08: 7f0101eb  cmp x11, x1
0x067B9F0C: e0000054  b.eq #0x67b9f28
0x067B9F10: 290500f1  subs x9, x9, #1
0x067B9F14: 4a410091  add x10, x10, #0x10
0x067B9F18: 61ffff54  b.ne #0x67b9f04
0x067B9F1C: e00314aa  mov x0, x20
0x067B9F20: fc722697  bl #0x3156b10
0x067B9F24: 05000014  b #0x67b9f38
0x067B9F28: 490140b9  ldr w9, [x10]
0x067B9F2C: 2901020b  add w9, w9, w2
0x067B9F30: 08d1298b  add x8, x8, w9, sxtw #4
0x067B9F34: 00e10491  add x0, x8, #0x138
0x067B9F38: 000440f9  ldr x0, [x0, #8]
0x067B9F3C: e10316aa  mov x1, x22
0x067B9F40: 121b2797  bl #0x3180b88
0x067B9F44: e50300aa  mov x5, x0
0x067B9F48: 060440f9  ldr x6, [x0, #8]
0x067B9F4C: e00314aa  mov x0, x20
0x067B9F50: e10315aa  mov x1, x21
0x067B9F54: e20313aa  mov x2, x19
0x067B9F58: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067B9F5C: f65741a9  ldp x22, x21, [sp, #0x10]
0x067B9F60: e3031faa  mov x3, xzr
0x067B9F64: e4031faa  mov x4, xzr
0x067B9F68: fe0743f8  ldr x30, [sp], #0x30
0x067B9F6C: c0001fd6  br x6
0x067B9F70: 4f1b2797  bl #0x3180cac

; RVA 0x67B9F74 | public void .ctor() { }
; bytes=8 sha256=82617c59bbb406adb4183197cf7aa1dcb18984cf89b9c336031243afe78f6c49 status=arm64_complete_bound indexed_start=True
0x067B9F74: e1031faa  mov x1, xzr
0x067B9F78: 72b5ef17  b #0x63a7540

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D40BB4 | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackMergeOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackMergeOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, System_String_o* actionId, const MethodInfo_3D40BB4* method);
; bytes=352 sha256=62a9cc0c824292b3c96498df2f86e272173800e03c7fbd61f0645e860e9c5466 status=arm64_complete_bound indexed_start=True
0x03D40BB4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x03D40BB8: f65701a9  stp x22, x21, [sp, #0x10]
0x03D40BBC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D40BC0: 681c40f9  ldr x8, [x3, #0x38]
0x03D40BC4: f60303aa  mov x22, x3
0x03D40BC8: f70302aa  mov x23, x2
0x03D40BCC: f30301aa  mov x19, x1
0x03D40BD0: f40300aa  mov x20, x0
0x03D40BD4: 880200b5  cbnz x8, #0x3d40c24
0x03D40BD8: 80c80190  adrp x0, #0x7650000
0x03D40BDC: 00e843f9  ldr x0, [x0, #0x7d0]
0x03D40BE0: 8effd097  bl #0x3180a18
0x03D40BE4: c0c801d0  adrp x0, #0x765a000
0x03D40BE8: 00ac44f9  ldr x0, [x0, #0x958]
0x03D40BEC: 8bffd097  bl #0x3180a18
0x03D40BF0: 80c80190  adrp x0, #0x7650000
0x03D40BF4: 001c44f9  ldr x0, [x0, #0x838]
0x03D40BF8: 88ffd097  bl #0x3180a18
0x03D40BFC: c0c901d0  adrp x0, #0x767a000
0x03D40C00: 009445f9  ldr x0, [x0, #0xb28]
0x03D40C04: 85ffd097  bl #0x3180a18
0x03D40C08: c0c901b0  adrp x0, #0x7679000
0x03D40C0C: 004847f9  ldr x0, [x0, #0xe90]
0x03D40C10: 82ffd097  bl #0x3180a18
0x03D40C14: c81e40f9  ldr x8, [x22, #0x38]
0x03D40C18: 680000b5  cbnz x8, #0x3d40c24
0x03D40C1C: e00316aa  mov x0, x22
0x03D40C20: 1657d097  bl #0x3156878
0x03D40C24: 88c80190  adrp x8, #0x7650000
0x03D40C28: 942240f9  ldr x20, [x20, #0x40]
0x03D40C2C: 081d44f9  ldr x8, [x8, #0x838]
0x03D40C30: 000140f9  ldr x0, [x8]
0x03D40C34: 1b00d197  bl #0x3180ca0
0x03D40C38: c8c801d0  adrp x8, #0x765a000
0x03D40C3C: 08ad44f9  ldr x8, [x8, #0x958]
0x03D40C40: f50300aa  mov x21, x0
0x03D40C44: 010140f9  ldr x1, [x8]
0x03D40C48: d7844694  bl #0x4ee1fa4
0x03D40C4C: 350600b4  cbz x21, #0x3d40d10
0x03D40C50: c8c901b0  adrp x8, #0x7679000
0x03D40C54: 89c80190  adrp x9, #0x7650000
0x03D40C58: 084947f9  ldr x8, [x8, #0xe90]
0x03D40C5C: 29e943f9  ldr x9, [x9, #0x7d0]
0x03D40C60: e00315aa  mov x0, x21
0x03D40C64: e20317aa  mov x2, x23
0x03D40C68: 010140f9  ldr x1, [x8]
0x03D40C6C: 230140f9  ldr x3, [x9]
0x03D40C70: 43884694  bl #0x4ee2d7c
0x03D40C74: f40400b4  cbz x20, #0x3d40d10
0x03D40C78: c91e40f9  ldr x9, [x22, #0x38]
0x03D40C7C: 880240f9  ldr x8, [x20]
0x03D40C80: 370540f9  ldr x23, [x9, #8]
0x03D40C84: c9c901d0  adrp x9, #0x767a000
0x03D40C88: 299545f9  ldr x9, [x9, #0xb28]
0x03D40C8C: e11240f9  ldr x1, [x23, #0x20]
0x03D40C90: e2a24079  ldrh w2, [x23, #0x50]
0x03D40C94: 360140f9  ldr x22, [x9]
0x03D40C98: 095d4279  ldrh w9, [x8, #0x12e]
0x03D40C9C: 290100b4  cbz x9, #0x3d40cc0
0x03D40CA0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D40CA4: 4a210091  add x10, x10, #8
0x03D40CA8: 4b815ff8  ldur x11, [x10, #-8]
0x03D40CAC: 7f0101eb  cmp x11, x1
0x03D40CB0: e0000054  b.eq #0x3d40ccc
0x03D40CB4: 290500f1  subs x9, x9, #1
0x03D40CB8: 4a410091  add x10, x10, #0x10
0x03D40CBC: 61ffff54  b.ne #0x3d40ca8
0x03D40CC0: e00314aa  mov x0, x20
0x03D40CC4: 9357d097  bl #0x3156b10
0x03D40CC8: 05000014  b #0x3d40cdc
0x03D40CCC: 490140b9  ldr w9, [x10]
0x03D40CD0: 2901020b  add w9, w9, w2
0x03D40CD4: 08d1298b  add x8, x8, w9, sxtw #4
0x03D40CD8: 00e10491  add x0, x8, #0x138
0x03D40CDC: 000440f9  ldr x0, [x0, #8]
0x03D40CE0: e10317aa  mov x1, x23
0x03D40CE4: a9ffd097  bl #0x3180b88
0x03D40CE8: e40300aa  mov x4, x0
0x03D40CEC: 050440f9  ldr x5, [x0, #8]
0x03D40CF0: e00314aa  mov x0, x20
0x03D40CF4: e10316aa  mov x1, x22
0x03D40CF8: e20313aa  mov x2, x19
0x03D40CFC: e30315aa  mov x3, x21
0x03D40D00: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D40D04: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D40D08: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x03D40D0C: a0001fd6  br x5
0x03D40D10: e7ffd097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D4054C | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackInsertOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackInsertOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D4054C* method);
; bytes=224 sha256=3c33ff88b37d1cbaac03db174843c655283022b322e28923fb3c7a614f9a78dc status=arm64_complete_bound indexed_start=True
0x03D4054C: fe0f1df8  str x30, [sp, #-0x30]!
0x03D40550: f65701a9  stp x22, x21, [sp, #0x10]
0x03D40554: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D40558: 481c40f9  ldr x8, [x2, #0x38]
0x03D4055C: f50302aa  mov x21, x2
0x03D40560: f30301aa  mov x19, x1
0x03D40564: f40300aa  mov x20, x0
0x03D40568: 080100b5  cbnz x8, #0x3d40588
0x03D4056C: c0c901d0  adrp x0, #0x767a000
0x03D40570: 006c45f9  ldr x0, [x0, #0xad8]
0x03D40574: 2901d197  bl #0x3180a18
0x03D40578: a81e40f9  ldr x8, [x21, #0x38]
0x03D4057C: 680000b5  cbnz x8, #0x3d40588
0x03D40580: e00315aa  mov x0, x21
0x03D40584: bd58d097  bl #0x3156878
0x03D40588: 942240f9  ldr x20, [x20, #0x40]
0x03D4058C: f40400b4  cbz x20, #0x3d40628
0x03D40590: a91e40f9  ldr x9, [x21, #0x38]
0x03D40594: 880240f9  ldr x8, [x20]
0x03D40598: 360540f9  ldr x22, [x9, #8]
0x03D4059C: c9c901d0  adrp x9, #0x767a000
0x03D405A0: 296d45f9  ldr x9, [x9, #0xad8]
0x03D405A4: c11240f9  ldr x1, [x22, #0x20]
0x03D405A8: c2a24079  ldrh w2, [x22, #0x50]
0x03D405AC: 350140f9  ldr x21, [x9]
0x03D405B0: 095d4279  ldrh w9, [x8, #0x12e]
0x03D405B4: 290100b4  cbz x9, #0x3d405d8
0x03D405B8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D405BC: 4a210091  add x10, x10, #8
0x03D405C0: 4b815ff8  ldur x11, [x10, #-8]
0x03D405C4: 7f0101eb  cmp x11, x1
0x03D405C8: e0000054  b.eq #0x3d405e4
0x03D405CC: 290500f1  subs x9, x9, #1
0x03D405D0: 4a410091  add x10, x10, #0x10
0x03D405D4: 61ffff54  b.ne #0x3d405c0
0x03D405D8: e00314aa  mov x0, x20
0x03D405DC: 4d59d097  bl #0x3156b10
0x03D405E0: 05000014  b #0x3d405f4
0x03D405E4: 490140b9  ldr w9, [x10]
0x03D405E8: 2901020b  add w9, w9, w2
0x03D405EC: 08d1298b  add x8, x8, w9, sxtw #4
0x03D405F0: 00e10491  add x0, x8, #0x138
0x03D405F4: 000440f9  ldr x0, [x0, #8]
0x03D405F8: e10316aa  mov x1, x22
0x03D405FC: 6301d197  bl #0x3180b88
0x03D40600: e40300aa  mov x4, x0
0x03D40604: 050440f9  ldr x5, [x0, #8]
0x03D40608: e00314aa  mov x0, x20
0x03D4060C: e10315aa  mov x1, x21
0x03D40610: e20313aa  mov x2, x19
0x03D40614: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D40618: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D4061C: e3031faa  mov x3, xzr
0x03D40620: fe0743f8  ldr x30, [sp], #0x30
0x03D40624: a0001fd6  br x5
0x03D40628: a101d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D4046C | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackExtractOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackExtractOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D4046C* method);
; bytes=224 sha256=91ed36181f0f88d5cc26709b9ee4bcb7e80853f175161b2ca1898a9e4b4e968e status=arm64_complete_bound indexed_start=True
0x03D4046C: fe0f1df8  str x30, [sp, #-0x30]!
0x03D40470: f65701a9  stp x22, x21, [sp, #0x10]
0x03D40474: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D40478: 481c40f9  ldr x8, [x2, #0x38]
0x03D4047C: f50302aa  mov x21, x2
0x03D40480: f30301aa  mov x19, x1
0x03D40484: f40300aa  mov x20, x0
0x03D40488: 080100b5  cbnz x8, #0x3d404a8
0x03D4048C: c0c901d0  adrp x0, #0x767a000
0x03D40490: 006845f9  ldr x0, [x0, #0xad0]
0x03D40494: 6101d197  bl #0x3180a18
0x03D40498: a81e40f9  ldr x8, [x21, #0x38]
0x03D4049C: 680000b5  cbnz x8, #0x3d404a8
0x03D404A0: e00315aa  mov x0, x21
0x03D404A4: f558d097  bl #0x3156878
0x03D404A8: 942240f9  ldr x20, [x20, #0x40]
0x03D404AC: f40400b4  cbz x20, #0x3d40548
0x03D404B0: a91e40f9  ldr x9, [x21, #0x38]
0x03D404B4: 880240f9  ldr x8, [x20]
0x03D404B8: 360540f9  ldr x22, [x9, #8]
0x03D404BC: c9c901d0  adrp x9, #0x767a000
0x03D404C0: 296945f9  ldr x9, [x9, #0xad0]
0x03D404C4: c11240f9  ldr x1, [x22, #0x20]
0x03D404C8: c2a24079  ldrh w2, [x22, #0x50]
0x03D404CC: 350140f9  ldr x21, [x9]
0x03D404D0: 095d4279  ldrh w9, [x8, #0x12e]
0x03D404D4: 290100b4  cbz x9, #0x3d404f8
0x03D404D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D404DC: 4a210091  add x10, x10, #8
0x03D404E0: 4b815ff8  ldur x11, [x10, #-8]
0x03D404E4: 7f0101eb  cmp x11, x1
0x03D404E8: e0000054  b.eq #0x3d40504
0x03D404EC: 290500f1  subs x9, x9, #1
0x03D404F0: 4a410091  add x10, x10, #0x10
0x03D404F4: 61ffff54  b.ne #0x3d404e0
0x03D404F8: e00314aa  mov x0, x20
0x03D404FC: 8559d097  bl #0x3156b10
0x03D40500: 05000014  b #0x3d40514
0x03D40504: 490140b9  ldr w9, [x10]
0x03D40508: 2901020b  add w9, w9, w2
0x03D4050C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D40510: 00e10491  add x0, x8, #0x138
0x03D40514: 000440f9  ldr x0, [x0, #8]
0x03D40518: e10316aa  mov x1, x22
0x03D4051C: 9b01d197  bl #0x3180b88
0x03D40520: e40300aa  mov x4, x0
0x03D40524: 050440f9  ldr x5, [x0, #8]
0x03D40528: e00314aa  mov x0, x20
0x03D4052C: e10315aa  mov x1, x21
0x03D40530: e20313aa  mov x2, x19
0x03D40534: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D40538: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D4053C: e3031faa  mov x3, xzr
0x03D40540: fe0743f8  ldr x30, [sp], #0x30
0x03D40544: a0001fd6  br x5
0x03D40548: d901d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D4070C | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackItemAddedToInventoryOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackItemAddedToInventoryOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D4070C* method);
; bytes=224 sha256=7dc99b8af26424d397095dba9da16096a76db5e93865b8d663394446e83b66f0 status=arm64_complete_bound indexed_start=True
0x03D4070C: fe0f1df8  str x30, [sp, #-0x30]!
0x03D40710: f65701a9  stp x22, x21, [sp, #0x10]
0x03D40714: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D40718: 481c40f9  ldr x8, [x2, #0x38]
0x03D4071C: f50302aa  mov x21, x2
0x03D40720: f30301aa  mov x19, x1
0x03D40724: f40300aa  mov x20, x0
0x03D40728: 080100b5  cbnz x8, #0x3d40748
0x03D4072C: c0c901d0  adrp x0, #0x767a000
0x03D40730: 007445f9  ldr x0, [x0, #0xae8]
0x03D40734: b900d197  bl #0x3180a18
0x03D40738: a81e40f9  ldr x8, [x21, #0x38]
0x03D4073C: 680000b5  cbnz x8, #0x3d40748
0x03D40740: e00315aa  mov x0, x21
0x03D40744: 4d58d097  bl #0x3156878
0x03D40748: 942240f9  ldr x20, [x20, #0x40]
0x03D4074C: f40400b4  cbz x20, #0x3d407e8
0x03D40750: a91e40f9  ldr x9, [x21, #0x38]
0x03D40754: 880240f9  ldr x8, [x20]
0x03D40758: 360540f9  ldr x22, [x9, #8]
0x03D4075C: c9c901d0  adrp x9, #0x767a000
0x03D40760: 297545f9  ldr x9, [x9, #0xae8]
0x03D40764: c11240f9  ldr x1, [x22, #0x20]
0x03D40768: c2a24079  ldrh w2, [x22, #0x50]
0x03D4076C: 350140f9  ldr x21, [x9]
0x03D40770: 095d4279  ldrh w9, [x8, #0x12e]
0x03D40774: 290100b4  cbz x9, #0x3d40798
0x03D40778: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D4077C: 4a210091  add x10, x10, #8
0x03D40780: 4b815ff8  ldur x11, [x10, #-8]
0x03D40784: 7f0101eb  cmp x11, x1
0x03D40788: e0000054  b.eq #0x3d407a4
0x03D4078C: 290500f1  subs x9, x9, #1
0x03D40790: 4a410091  add x10, x10, #0x10
0x03D40794: 61ffff54  b.ne #0x3d40780
0x03D40798: e00314aa  mov x0, x20
0x03D4079C: dd58d097  bl #0x3156b10
0x03D407A0: 05000014  b #0x3d407b4
0x03D407A4: 490140b9  ldr w9, [x10]
0x03D407A8: 2901020b  add w9, w9, w2
0x03D407AC: 08d1298b  add x8, x8, w9, sxtw #4
0x03D407B0: 00e10491  add x0, x8, #0x138
0x03D407B4: 000440f9  ldr x0, [x0, #8]
0x03D407B8: e10316aa  mov x1, x22
0x03D407BC: f300d197  bl #0x3180b88
0x03D407C0: e40300aa  mov x4, x0
0x03D407C4: 050440f9  ldr x5, [x0, #8]
0x03D407C8: e00314aa  mov x0, x20
0x03D407CC: e10315aa  mov x1, x21
0x03D407D0: e20313aa  mov x2, x19
0x03D407D4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D407D8: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D407DC: e3031faa  mov x3, xzr
0x03D407E0: fe0743f8  ldr x30, [sp], #0x30
0x03D407E4: a0001fd6  br x5
0x03D407E8: 3101d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D409F4 | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackItemRestoredFromInventoryOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackItemRestoredFromInventoryOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D409F4* method);
; bytes=224 sha256=bec35180ca5727c46cc84a510df7038ff2604f0e199197377644e7eccf888dbc status=arm64_complete_bound indexed_start=True
0x03D409F4: fe0f1df8  str x30, [sp, #-0x30]!
0x03D409F8: f65701a9  stp x22, x21, [sp, #0x10]
0x03D409FC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D40A00: 481c40f9  ldr x8, [x2, #0x38]
0x03D40A04: f50302aa  mov x21, x2
0x03D40A08: f30301aa  mov x19, x1
0x03D40A0C: f40300aa  mov x20, x0
0x03D40A10: 080100b5  cbnz x8, #0x3d40a30
0x03D40A14: c0c901d0  adrp x0, #0x767a000
0x03D40A18: 008c45f9  ldr x0, [x0, #0xb18]
0x03D40A1C: ffffd097  bl #0x3180a18
0x03D40A20: a81e40f9  ldr x8, [x21, #0x38]
0x03D40A24: 680000b5  cbnz x8, #0x3d40a30
0x03D40A28: e00315aa  mov x0, x21
0x03D40A2C: 9357d097  bl #0x3156878
0x03D40A30: 942240f9  ldr x20, [x20, #0x40]
0x03D40A34: f40400b4  cbz x20, #0x3d40ad0
0x03D40A38: a91e40f9  ldr x9, [x21, #0x38]
0x03D40A3C: 880240f9  ldr x8, [x20]
0x03D40A40: 360540f9  ldr x22, [x9, #8]
0x03D40A44: c9c901d0  adrp x9, #0x767a000
0x03D40A48: 298d45f9  ldr x9, [x9, #0xb18]
0x03D40A4C: c11240f9  ldr x1, [x22, #0x20]
0x03D40A50: c2a24079  ldrh w2, [x22, #0x50]
0x03D40A54: 350140f9  ldr x21, [x9]
0x03D40A58: 095d4279  ldrh w9, [x8, #0x12e]
0x03D40A5C: 290100b4  cbz x9, #0x3d40a80
0x03D40A60: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D40A64: 4a210091  add x10, x10, #8
0x03D40A68: 4b815ff8  ldur x11, [x10, #-8]
0x03D40A6C: 7f0101eb  cmp x11, x1
0x03D40A70: e0000054  b.eq #0x3d40a8c
0x03D40A74: 290500f1  subs x9, x9, #1
0x03D40A78: 4a410091  add x10, x10, #0x10
0x03D40A7C: 61ffff54  b.ne #0x3d40a68
0x03D40A80: e00314aa  mov x0, x20
0x03D40A84: 2358d097  bl #0x3156b10
0x03D40A88: 05000014  b #0x3d40a9c
0x03D40A8C: 490140b9  ldr w9, [x10]
0x03D40A90: 2901020b  add w9, w9, w2
0x03D40A94: 08d1298b  add x8, x8, w9, sxtw #4
0x03D40A98: 00e10491  add x0, x8, #0x138
0x03D40A9C: 000440f9  ldr x0, [x0, #8]
0x03D40AA0: e10316aa  mov x1, x22
0x03D40AA4: 3900d197  bl #0x3180b88
0x03D40AA8: e40300aa  mov x4, x0
0x03D40AAC: 050440f9  ldr x5, [x0, #8]
0x03D40AB0: e00314aa  mov x0, x20
0x03D40AB4: e10315aa  mov x1, x21
0x03D40AB8: e20313aa  mov x2, x19
0x03D40ABC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D40AC0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D40AC4: e3031faa  mov x3, xzr
0x03D40AC8: fe0743f8  ldr x30, [sp], #0x30
0x03D40ACC: a0001fd6  br x5
0x03D40AD0: 7700d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D402AC | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackExpendOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackExpendOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D402AC* method);
; bytes=224 sha256=0fd0cf1b6871631ef73d83d12886a16778579b19b718da3da9a713dbfe84e6c4 status=arm64_complete_bound indexed_start=True
0x03D402AC: fe0f1df8  str x30, [sp, #-0x30]!
0x03D402B0: f65701a9  stp x22, x21, [sp, #0x10]
0x03D402B4: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D402B8: 481c40f9  ldr x8, [x2, #0x38]
0x03D402BC: f50302aa  mov x21, x2
0x03D402C0: f30301aa  mov x19, x1
0x03D402C4: f40300aa  mov x20, x0
0x03D402C8: 080100b5  cbnz x8, #0x3d402e8
0x03D402CC: c0c901d0  adrp x0, #0x767a000
0x03D402D0: 006045f9  ldr x0, [x0, #0xac0]
0x03D402D4: d101d197  bl #0x3180a18
0x03D402D8: a81e40f9  ldr x8, [x21, #0x38]
0x03D402DC: 680000b5  cbnz x8, #0x3d402e8
0x03D402E0: e00315aa  mov x0, x21
0x03D402E4: 6559d097  bl #0x3156878
0x03D402E8: 942240f9  ldr x20, [x20, #0x40]
0x03D402EC: f40400b4  cbz x20, #0x3d40388
0x03D402F0: a91e40f9  ldr x9, [x21, #0x38]
0x03D402F4: 880240f9  ldr x8, [x20]
0x03D402F8: 360540f9  ldr x22, [x9, #8]
0x03D402FC: c9c901d0  adrp x9, #0x767a000
0x03D40300: 296145f9  ldr x9, [x9, #0xac0]
0x03D40304: c11240f9  ldr x1, [x22, #0x20]
0x03D40308: c2a24079  ldrh w2, [x22, #0x50]
0x03D4030C: 350140f9  ldr x21, [x9]
0x03D40310: 095d4279  ldrh w9, [x8, #0x12e]
0x03D40314: 290100b4  cbz x9, #0x3d40338
0x03D40318: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D4031C: 4a210091  add x10, x10, #8
0x03D40320: 4b815ff8  ldur x11, [x10, #-8]
0x03D40324: 7f0101eb  cmp x11, x1
0x03D40328: e0000054  b.eq #0x3d40344
0x03D4032C: 290500f1  subs x9, x9, #1
0x03D40330: 4a410091  add x10, x10, #0x10
0x03D40334: 61ffff54  b.ne #0x3d40320
0x03D40338: e00314aa  mov x0, x20
0x03D4033C: f559d097  bl #0x3156b10
0x03D40340: 05000014  b #0x3d40354
0x03D40344: 490140b9  ldr w9, [x10]
0x03D40348: 2901020b  add w9, w9, w2
0x03D4034C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D40350: 00e10491  add x0, x8, #0x138
0x03D40354: 000440f9  ldr x0, [x0, #8]
0x03D40358: e10316aa  mov x1, x22
0x03D4035C: 0b02d197  bl #0x3180b88
0x03D40360: e40300aa  mov x4, x0
0x03D40364: 050440f9  ldr x5, [x0, #8]
0x03D40368: e00314aa  mov x0, x20
0x03D4036C: e10315aa  mov x1, x21
0x03D40370: e20313aa  mov x2, x19
0x03D40374: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D40378: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D4037C: e3031faa  mov x3, xzr
0x03D40380: fe0743f8  ldr x30, [sp], #0x30
0x03D40384: a0001fd6  br x5
0x03D40388: 4902d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D407EC | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackItemAddedToProducerInventoryOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackItemAddedToProducerInventoryOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D407EC* method);
; bytes=224 sha256=f6217490f503959589610a0dc30d0295d55dc7032a52debe2510a94a57273456 status=arm64_complete_bound indexed_start=True
0x03D407EC: fe0f1df8  str x30, [sp, #-0x30]!
0x03D407F0: f65701a9  stp x22, x21, [sp, #0x10]
0x03D407F4: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D407F8: 481c40f9  ldr x8, [x2, #0x38]
0x03D407FC: f50302aa  mov x21, x2
0x03D40800: f30301aa  mov x19, x1
0x03D40804: f40300aa  mov x20, x0
0x03D40808: 080100b5  cbnz x8, #0x3d40828
0x03D4080C: c0c901d0  adrp x0, #0x767a000
0x03D40810: 007845f9  ldr x0, [x0, #0xaf0]
0x03D40814: 8100d197  bl #0x3180a18
0x03D40818: a81e40f9  ldr x8, [x21, #0x38]
0x03D4081C: 680000b5  cbnz x8, #0x3d40828
0x03D40820: e00315aa  mov x0, x21
0x03D40824: 1558d097  bl #0x3156878
0x03D40828: 942240f9  ldr x20, [x20, #0x40]
0x03D4082C: f40400b4  cbz x20, #0x3d408c8
0x03D40830: a91e40f9  ldr x9, [x21, #0x38]
0x03D40834: 880240f9  ldr x8, [x20]
0x03D40838: 360540f9  ldr x22, [x9, #8]
0x03D4083C: c9c901d0  adrp x9, #0x767a000
0x03D40840: 297945f9  ldr x9, [x9, #0xaf0]
0x03D40844: c11240f9  ldr x1, [x22, #0x20]
0x03D40848: c2a24079  ldrh w2, [x22, #0x50]
0x03D4084C: 350140f9  ldr x21, [x9]
0x03D40850: 095d4279  ldrh w9, [x8, #0x12e]
0x03D40854: 290100b4  cbz x9, #0x3d40878
0x03D40858: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D4085C: 4a210091  add x10, x10, #8
0x03D40860: 4b815ff8  ldur x11, [x10, #-8]
0x03D40864: 7f0101eb  cmp x11, x1
0x03D40868: e0000054  b.eq #0x3d40884
0x03D4086C: 290500f1  subs x9, x9, #1
0x03D40870: 4a410091  add x10, x10, #0x10
0x03D40874: 61ffff54  b.ne #0x3d40860
0x03D40878: e00314aa  mov x0, x20
0x03D4087C: a558d097  bl #0x3156b10
0x03D40880: 05000014  b #0x3d40894
0x03D40884: 490140b9  ldr w9, [x10]
0x03D40888: 2901020b  add w9, w9, w2
0x03D4088C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D40890: 00e10491  add x0, x8, #0x138
0x03D40894: 000440f9  ldr x0, [x0, #8]
0x03D40898: e10316aa  mov x1, x22
0x03D4089C: bb00d197  bl #0x3180b88
0x03D408A0: e40300aa  mov x4, x0
0x03D408A4: 050440f9  ldr x5, [x0, #8]
0x03D408A8: e00314aa  mov x0, x20
0x03D408AC: e10315aa  mov x1, x21
0x03D408B0: e20313aa  mov x2, x19
0x03D408B4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D408B8: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D408BC: e3031faa  mov x3, xzr
0x03D408C0: fe0743f8  ldr x30, [sp], #0x30
0x03D408C4: a0001fd6  br x5
0x03D408C8: f900d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D408CC | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackItemMovedBetweenInventoryTabsOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackItemMovedBetweenInventoryTabsOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D408CC* method);
; bytes=296 sha256=efcd2b9b724aadff1b4cac0d79f357ef5544d915b7cadda172878a142384dd6c status=arm64_complete_bound indexed_start=True
0x03D408CC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x03D408D0: f65701a9  stp x22, x21, [sp, #0x10]
0x03D408D4: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D408D8: b7fe01f0  adrp x23, #0x7d17000
0x03D408DC: d6c901d0  adrp x22, #0x767a000
0x03D408E0: d5c901d0  adrp x21, #0x767a000
0x03D408E4: e8fa7639  ldrb w8, [x23, #0xdbe]
0x03D408E8: d67e45f9  ldr x22, [x22, #0xaf8]
0x03D408EC: b58245f9  ldr x21, [x21, #0xb00]
0x03D408F0: f40301aa  mov x20, x1
0x03D408F4: f30300aa  mov x19, x0
0x03D408F8: e8010037  tbnz w8, #0, #0x3d40934
0x03D408FC: c0c901d0  adrp x0, #0x767a000
0x03D40900: 007c45f9  ldr x0, [x0, #0xaf8]
0x03D40904: 4500d197  bl #0x3180a18
0x03D40908: c0c901d0  adrp x0, #0x767a000
0x03D4090C: 008045f9  ldr x0, [x0, #0xb00]
0x03D40910: 4200d197  bl #0x3180a18
0x03D40914: c0c901d0  adrp x0, #0x767a000
0x03D40918: 008445f9  ldr x0, [x0, #0xb08]
0x03D4091C: 3f00d197  bl #0x3180a18
0x03D40920: c0c901d0  adrp x0, #0x767a000
0x03D40924: 008845f9  ldr x0, [x0, #0xb10]
0x03D40928: 3c00d197  bl #0x3180a18
0x03D4092C: 28008052  movz w8, #0x1
0x03D40930: e8fa3639  strb w8, [x23, #0xdbe]
0x03D40934: c10240f9  ldr x1, [x22]
0x03D40938: 732240f9  ldr x19, [x19, #0x40]
0x03D4093C: e00314aa  mov x0, x20
0x03D40940: 5aaffb97  bl #0x3c2c6a8
0x03D40944: a10240f9  ldr x1, [x21]
0x03D40948: a27dfc97  bl #0x3c5ffd0
0x03D4094C: 330500b4  cbz x19, #0x3d409f0
0x03D40950: c9c901d0  adrp x9, #0x767a000
0x03D40954: 298545f9  ldr x9, [x9, #0xb08]
0x03D40958: 680240f9  ldr x8, [x19]
0x03D4095C: f40300aa  mov x20, x0
0x03D40960: 360140f9  ldr x22, [x9]
0x03D40964: c9c901d0  adrp x9, #0x767a000
0x03D40968: 298945f9  ldr x9, [x9, #0xb10]
0x03D4096C: c11240f9  ldr x1, [x22, #0x20]
0x03D40970: c2a24079  ldrh w2, [x22, #0x50]
0x03D40974: 350140f9  ldr x21, [x9]
0x03D40978: 095d4279  ldrh w9, [x8, #0x12e]
0x03D4097C: 290100b4  cbz x9, #0x3d409a0
0x03D40980: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D40984: 4a210091  add x10, x10, #8
0x03D40988: 4b815ff8  ldur x11, [x10, #-8]
0x03D4098C: 7f0101eb  cmp x11, x1
0x03D40990: e0000054  b.eq #0x3d409ac
0x03D40994: 290500f1  subs x9, x9, #1
0x03D40998: 4a410091  add x10, x10, #0x10
0x03D4099C: 61ffff54  b.ne #0x3d40988
0x03D409A0: e00313aa  mov x0, x19
0x03D409A4: 5b58d097  bl #0x3156b10
0x03D409A8: 05000014  b #0x3d409bc
0x03D409AC: 490140b9  ldr w9, [x10]
0x03D409B0: 2901020b  add w9, w9, w2
0x03D409B4: 08d1298b  add x8, x8, w9, sxtw #4
0x03D409B8: 00e10491  add x0, x8, #0x138
0x03D409BC: 000440f9  ldr x0, [x0, #8]
0x03D409C0: e10316aa  mov x1, x22
0x03D409C4: 7100d197  bl #0x3180b88
0x03D409C8: e40300aa  mov x4, x0
0x03D409CC: 050440f9  ldr x5, [x0, #8]
0x03D409D0: e00313aa  mov x0, x19
0x03D409D4: e10315aa  mov x1, x21
0x03D409D8: e20314aa  mov x2, x20
0x03D409DC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D409E0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D409E4: e3031faa  mov x3, xzr
0x03D409E8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x03D409EC: a0001fd6  br x5
0x03D409F0: af00d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D40AD4 | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackItemRestoredFromProducerInventoryOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackItemRestoredFromProducerInventoryOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D40AD4* method);
; bytes=224 sha256=489f1579a03612d812092871897d5c36f85d4970c7721201a4f536eadc50ffbd status=arm64_complete_bound indexed_start=True
0x03D40AD4: fe0f1df8  str x30, [sp, #-0x30]!
0x03D40AD8: f65701a9  stp x22, x21, [sp, #0x10]
0x03D40ADC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D40AE0: 481c40f9  ldr x8, [x2, #0x38]
0x03D40AE4: f50302aa  mov x21, x2
0x03D40AE8: f30301aa  mov x19, x1
0x03D40AEC: f40300aa  mov x20, x0
0x03D40AF0: 080100b5  cbnz x8, #0x3d40b10
0x03D40AF4: c0c901d0  adrp x0, #0x767a000
0x03D40AF8: 009045f9  ldr x0, [x0, #0xb20]
0x03D40AFC: c7ffd097  bl #0x3180a18
0x03D40B00: a81e40f9  ldr x8, [x21, #0x38]
0x03D40B04: 680000b5  cbnz x8, #0x3d40b10
0x03D40B08: e00315aa  mov x0, x21
0x03D40B0C: 5b57d097  bl #0x3156878
0x03D40B10: 942240f9  ldr x20, [x20, #0x40]
0x03D40B14: f40400b4  cbz x20, #0x3d40bb0
0x03D40B18: a91e40f9  ldr x9, [x21, #0x38]
0x03D40B1C: 880240f9  ldr x8, [x20]
0x03D40B20: 360540f9  ldr x22, [x9, #8]
0x03D40B24: c9c901d0  adrp x9, #0x767a000
0x03D40B28: 299145f9  ldr x9, [x9, #0xb20]
0x03D40B2C: c11240f9  ldr x1, [x22, #0x20]
0x03D40B30: c2a24079  ldrh w2, [x22, #0x50]
0x03D40B34: 350140f9  ldr x21, [x9]
0x03D40B38: 095d4279  ldrh w9, [x8, #0x12e]
0x03D40B3C: 290100b4  cbz x9, #0x3d40b60
0x03D40B40: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D40B44: 4a210091  add x10, x10, #8
0x03D40B48: 4b815ff8  ldur x11, [x10, #-8]
0x03D40B4C: 7f0101eb  cmp x11, x1
0x03D40B50: e0000054  b.eq #0x3d40b6c
0x03D40B54: 290500f1  subs x9, x9, #1
0x03D40B58: 4a410091  add x10, x10, #0x10
0x03D40B5C: 61ffff54  b.ne #0x3d40b48
0x03D40B60: e00314aa  mov x0, x20
0x03D40B64: eb57d097  bl #0x3156b10
0x03D40B68: 05000014  b #0x3d40b7c
0x03D40B6C: 490140b9  ldr w9, [x10]
0x03D40B70: 2901020b  add w9, w9, w2
0x03D40B74: 08d1298b  add x8, x8, w9, sxtw #4
0x03D40B78: 00e10491  add x0, x8, #0x138
0x03D40B7C: 000440f9  ldr x0, [x0, #8]
0x03D40B80: e10316aa  mov x1, x22
0x03D40B84: 0100d197  bl #0x3180b88
0x03D40B88: e40300aa  mov x4, x0
0x03D40B8C: 050440f9  ldr x5, [x0, #8]
0x03D40B90: e00314aa  mov x0, x20
0x03D40B94: e10315aa  mov x1, x21
0x03D40B98: e20313aa  mov x2, x19
0x03D40B9C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D40BA0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D40BA4: e3031faa  mov x3, xzr
0x03D40BA8: fe0743f8  ldr x30, [sp], #0x30
0x03D40BAC: a0001fd6  br x5
0x03D40BB0: 3f00d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D4038C | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackExpireBubbleOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackExpireBubbleOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D4038C* method);
; bytes=224 sha256=7f3d02a424d893f34e63e8545644144c9fb7e3a7ce583f5ae5c0b712e97f9505 status=arm64_complete_bound indexed_start=True
0x03D4038C: fe0f1df8  str x30, [sp, #-0x30]!
0x03D40390: f65701a9  stp x22, x21, [sp, #0x10]
0x03D40394: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D40398: 481c40f9  ldr x8, [x2, #0x38]
0x03D4039C: f50302aa  mov x21, x2
0x03D403A0: f30301aa  mov x19, x1
0x03D403A4: f40300aa  mov x20, x0
0x03D403A8: 080100b5  cbnz x8, #0x3d403c8
0x03D403AC: c0c901d0  adrp x0, #0x767a000
0x03D403B0: 006445f9  ldr x0, [x0, #0xac8]
0x03D403B4: 9901d197  bl #0x3180a18
0x03D403B8: a81e40f9  ldr x8, [x21, #0x38]
0x03D403BC: 680000b5  cbnz x8, #0x3d403c8
0x03D403C0: e00315aa  mov x0, x21
0x03D403C4: 2d59d097  bl #0x3156878
0x03D403C8: 942240f9  ldr x20, [x20, #0x40]
0x03D403CC: f40400b4  cbz x20, #0x3d40468
0x03D403D0: a91e40f9  ldr x9, [x21, #0x38]
0x03D403D4: 880240f9  ldr x8, [x20]
0x03D403D8: 360540f9  ldr x22, [x9, #8]
0x03D403DC: c9c901d0  adrp x9, #0x767a000
0x03D403E0: 296545f9  ldr x9, [x9, #0xac8]
0x03D403E4: c11240f9  ldr x1, [x22, #0x20]
0x03D403E8: c2a24079  ldrh w2, [x22, #0x50]
0x03D403EC: 350140f9  ldr x21, [x9]
0x03D403F0: 095d4279  ldrh w9, [x8, #0x12e]
0x03D403F4: 290100b4  cbz x9, #0x3d40418
0x03D403F8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D403FC: 4a210091  add x10, x10, #8
0x03D40400: 4b815ff8  ldur x11, [x10, #-8]
0x03D40404: 7f0101eb  cmp x11, x1
0x03D40408: e0000054  b.eq #0x3d40424
0x03D4040C: 290500f1  subs x9, x9, #1
0x03D40410: 4a410091  add x10, x10, #0x10
0x03D40414: 61ffff54  b.ne #0x3d40400
0x03D40418: e00314aa  mov x0, x20
0x03D4041C: bd59d097  bl #0x3156b10
0x03D40420: 05000014  b #0x3d40434
0x03D40424: 490140b9  ldr w9, [x10]
0x03D40428: 2901020b  add w9, w9, w2
0x03D4042C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D40430: 00e10491  add x0, x8, #0x138
0x03D40434: 000440f9  ldr x0, [x0, #8]
0x03D40438: e10316aa  mov x1, x22
0x03D4043C: d301d197  bl #0x3180b88
0x03D40440: e40300aa  mov x4, x0
0x03D40444: 050440f9  ldr x5, [x0, #8]
0x03D40448: e00314aa  mov x0, x20
0x03D4044C: e10315aa  mov x1, x21
0x03D40450: e20313aa  mov x2, x19
0x03D40454: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D40458: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D4045C: e3031faa  mov x3, xzr
0x03D40460: fe0743f8  ldr x30, [sp], #0x30
0x03D40464: a0001fd6  br x5
0x03D40468: 1102d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D40D14 | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackMoveOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackMoveOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D40D14* method);
; bytes=224 sha256=aa95f47790e0c764cc39680267bc31e1d055ed3d35027e7a112cc42261a47e74 status=arm64_complete_bound indexed_start=True
0x03D40D14: fe0f1df8  str x30, [sp, #-0x30]!
0x03D40D18: f65701a9  stp x22, x21, [sp, #0x10]
0x03D40D1C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D40D20: 481c40f9  ldr x8, [x2, #0x38]
0x03D40D24: f50302aa  mov x21, x2
0x03D40D28: f30301aa  mov x19, x1
0x03D40D2C: f40300aa  mov x20, x0
0x03D40D30: 080100b5  cbnz x8, #0x3d40d50
0x03D40D34: c0c901d0  adrp x0, #0x767a000
0x03D40D38: 009845f9  ldr x0, [x0, #0xb30]
0x03D40D3C: 37ffd097  bl #0x3180a18
0x03D40D40: a81e40f9  ldr x8, [x21, #0x38]
0x03D40D44: 680000b5  cbnz x8, #0x3d40d50
0x03D40D48: e00315aa  mov x0, x21
0x03D40D4C: cb56d097  bl #0x3156878
0x03D40D50: 942240f9  ldr x20, [x20, #0x40]
0x03D40D54: f40400b4  cbz x20, #0x3d40df0
0x03D40D58: a91e40f9  ldr x9, [x21, #0x38]
0x03D40D5C: 880240f9  ldr x8, [x20]
0x03D40D60: 360540f9  ldr x22, [x9, #8]
0x03D40D64: c9c901d0  adrp x9, #0x767a000
0x03D40D68: 299945f9  ldr x9, [x9, #0xb30]
0x03D40D6C: c11240f9  ldr x1, [x22, #0x20]
0x03D40D70: c2a24079  ldrh w2, [x22, #0x50]
0x03D40D74: 350140f9  ldr x21, [x9]
0x03D40D78: 095d4279  ldrh w9, [x8, #0x12e]
0x03D40D7C: 290100b4  cbz x9, #0x3d40da0
0x03D40D80: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D40D84: 4a210091  add x10, x10, #8
0x03D40D88: 4b815ff8  ldur x11, [x10, #-8]
0x03D40D8C: 7f0101eb  cmp x11, x1
0x03D40D90: e0000054  b.eq #0x3d40dac
0x03D40D94: 290500f1  subs x9, x9, #1
0x03D40D98: 4a410091  add x10, x10, #0x10
0x03D40D9C: 61ffff54  b.ne #0x3d40d88
0x03D40DA0: e00314aa  mov x0, x20
0x03D40DA4: 5b57d097  bl #0x3156b10
0x03D40DA8: 05000014  b #0x3d40dbc
0x03D40DAC: 490140b9  ldr w9, [x10]
0x03D40DB0: 2901020b  add w9, w9, w2
0x03D40DB4: 08d1298b  add x8, x8, w9, sxtw #4
0x03D40DB8: 00e10491  add x0, x8, #0x138
0x03D40DBC: 000440f9  ldr x0, [x0, #8]
0x03D40DC0: e10316aa  mov x1, x22
0x03D40DC4: 71ffd097  bl #0x3180b88
0x03D40DC8: e40300aa  mov x4, x0
0x03D40DCC: 050440f9  ldr x5, [x0, #8]
0x03D40DD0: e00314aa  mov x0, x20
0x03D40DD4: e10315aa  mov x1, x21
0x03D40DD8: e20313aa  mov x2, x19
0x03D40DDC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D40DE0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D40DE4: e3031faa  mov x3, xzr
0x03D40DE8: fe0743f8  ldr x30, [sp], #0x30
0x03D40DEC: a0001fd6  br x5
0x03D40DF0: afffd097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D4062C | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackInteractionOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackInteractionOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D4062C* method);
; bytes=224 sha256=827ad35abc2d9c43e4e6792ccbc41b8d2520b30c03b39c2b9f646482854bb32a status=arm64_complete_bound indexed_start=True
0x03D4062C: fe0f1df8  str x30, [sp, #-0x30]!
0x03D40630: f65701a9  stp x22, x21, [sp, #0x10]
0x03D40634: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D40638: 481c40f9  ldr x8, [x2, #0x38]
0x03D4063C: f50302aa  mov x21, x2
0x03D40640: f30301aa  mov x19, x1
0x03D40644: f40300aa  mov x20, x0
0x03D40648: 080100b5  cbnz x8, #0x3d40668
0x03D4064C: c0c901d0  adrp x0, #0x767a000
0x03D40650: 007045f9  ldr x0, [x0, #0xae0]
0x03D40654: f100d197  bl #0x3180a18
0x03D40658: a81e40f9  ldr x8, [x21, #0x38]
0x03D4065C: 680000b5  cbnz x8, #0x3d40668
0x03D40660: e00315aa  mov x0, x21
0x03D40664: 8558d097  bl #0x3156878
0x03D40668: 942240f9  ldr x20, [x20, #0x40]
0x03D4066C: f40400b4  cbz x20, #0x3d40708
0x03D40670: a91e40f9  ldr x9, [x21, #0x38]
0x03D40674: 880240f9  ldr x8, [x20]
0x03D40678: 360540f9  ldr x22, [x9, #8]
0x03D4067C: c9c901d0  adrp x9, #0x767a000
0x03D40680: 297145f9  ldr x9, [x9, #0xae0]
0x03D40684: c11240f9  ldr x1, [x22, #0x20]
0x03D40688: c2a24079  ldrh w2, [x22, #0x50]
0x03D4068C: 350140f9  ldr x21, [x9]
0x03D40690: 095d4279  ldrh w9, [x8, #0x12e]
0x03D40694: 290100b4  cbz x9, #0x3d406b8
0x03D40698: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D4069C: 4a210091  add x10, x10, #8
0x03D406A0: 4b815ff8  ldur x11, [x10, #-8]
0x03D406A4: 7f0101eb  cmp x11, x1
0x03D406A8: e0000054  b.eq #0x3d406c4
0x03D406AC: 290500f1  subs x9, x9, #1
0x03D406B0: 4a410091  add x10, x10, #0x10
0x03D406B4: 61ffff54  b.ne #0x3d406a0
0x03D406B8: e00314aa  mov x0, x20
0x03D406BC: 1559d097  bl #0x3156b10
0x03D406C0: 05000014  b #0x3d406d4
0x03D406C4: 490140b9  ldr w9, [x10]
0x03D406C8: 2901020b  add w9, w9, w2
0x03D406CC: 08d1298b  add x8, x8, w9, sxtw #4
0x03D406D0: 00e10491  add x0, x8, #0x138
0x03D406D4: 000440f9  ldr x0, [x0, #8]
0x03D406D8: e10316aa  mov x1, x22
0x03D406DC: 2b01d197  bl #0x3180b88
0x03D406E0: e40300aa  mov x4, x0
0x03D406E4: 050440f9  ldr x5, [x0, #8]
0x03D406E8: e00314aa  mov x0, x20
0x03D406EC: e10315aa  mov x1, x21
0x03D406F0: e20313aa  mov x2, x19
0x03D406F4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D406F8: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D406FC: e3031faa  mov x3, xzr
0x03D40700: fe0743f8  ldr x30, [sp], #0x30
0x03D40704: a0001fd6  br x5
0x03D40708: 6901d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D3FD8C | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackDequeueItemOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackDequeueItemOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, Il2CppObject* dequeuedItemData, System_String_o* uuidInBoardQueue, Il2CppObject* createdItemData, System_String_o* boosterUuid, MergeEngine_Configuration_IMergeItem_o* dequeuedItem, const MethodInfo_3D3FD8C* method);
; bytes=1312 sha256=936b1b99f399ea0218841185701a6b080fb12f541631b827680d84a4eb4d9c07 status=arm64_complete_bound indexed_start=True
0x03D3FD8C: ff8301d1  sub sp, sp, #0x60
0x03D3FD90: fe6f01a9  stp x30, x27, [sp, #0x10]
0x03D3FD94: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D3FD98: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D3FD9C: f65704a9  stp x22, x21, [sp, #0x40]
0x03D3FDA0: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D3FDA4: c81c40f9  ldr x8, [x6, #0x38]
0x03D3FDA8: f30306aa  mov x19, x6
0x03D3FDAC: f60305aa  mov x22, x5
0x03D3FDB0: f80304aa  mov x24, x4
0x03D3FDB4: f90303aa  mov x25, x3
0x03D3FDB8: f70302aa  mov x23, x2
0x03D3FDBC: f50301aa  mov x21, x1
0x03D3FDC0: f40300aa  mov x20, x0
0x03D3FDC4: 680400b5  cbnz x8, #0x3d3fe50
0x03D3FDC8: 40c901f0  adrp x0, #0x766a000
0x03D3FDCC: 005847f9  ldr x0, [x0, #0xeb0]
0x03D3FDD0: 1203d197  bl #0x3180a18
0x03D3FDD4: c0c901f0  adrp x0, #0x767a000
0x03D3FDD8: 004845f9  ldr x0, [x0, #0xa90]
0x03D3FDDC: 0f03d197  bl #0x3180a18
0x03D3FDE0: c0c901f0  adrp x0, #0x767a000
0x03D3FDE4: 004c45f9  ldr x0, [x0, #0xa98]
0x03D3FDE8: 0c03d197  bl #0x3180a18
0x03D3FDEC: c0c901f0  adrp x0, #0x767a000
0x03D3FDF0: 005045f9  ldr x0, [x0, #0xaa0]
0x03D3FDF4: 0903d197  bl #0x3180a18
0x03D3FDF8: c0c901f0  adrp x0, #0x767a000
0x03D3FDFC: 005445f9  ldr x0, [x0, #0xaa8]
0x03D3FE00: 0603d197  bl #0x3180a18
0x03D3FE04: c0c901d0  adrp x0, #0x7679000
0x03D3FE08: 001044f9  ldr x0, [x0, #0x820]
0x03D3FE0C: 0303d197  bl #0x3180a18
0x03D3FE10: c0c901f0  adrp x0, #0x767a000
0x03D3FE14: 005845f9  ldr x0, [x0, #0xab0]
0x03D3FE18: 0003d197  bl #0x3180a18
0x03D3FE1C: 80c801d0  adrp x0, #0x7651000
0x03D3FE20: 005441f9  ldr x0, [x0, #0x2a8]
0x03D3FE24: fd02d197  bl #0x3180a18
0x03D3FE28: 80c801d0  adrp x0, #0x7651000
0x03D3FE2C: 001042f9  ldr x0, [x0, #0x420]
0x03D3FE30: fa02d197  bl #0x3180a18
0x03D3FE34: c0c901f0  adrp x0, #0x767a000
0x03D3FE38: 005c45f9  ldr x0, [x0, #0xab8]
0x03D3FE3C: f702d197  bl #0x3180a18
0x03D3FE40: 681e40f9  ldr x8, [x19, #0x38]
0x03D3FE44: 680000b5  cbnz x8, #0x3d3fe50
0x03D3FE48: e00313aa  mov x0, x19
0x03D3FE4C: 8b5ad097  bl #0x3156878
0x03D3FE50: c8c901f0  adrp x8, #0x767a000
0x03D3FE54: 084d45f9  ldr x8, [x8, #0xa98]
0x03D3FE58: 000140f9  ldr x0, [x8]
0x03D3FE5C: 9103d197  bl #0x3180ca0
0x03D3FE60: e1031faa  mov x1, xzr
0x03D3FE64: fa0300aa  mov x26, x0
0x03D3FE68: e3c3af94  bl #0x6930df4
0x03D3FE6C: fa2100b4  cbz x26, #0x3d402a8
0x03D3FE70: e0031aaa  mov x0, x26
0x03D3FE74: 170c03f8  str x23, [x0, #0x30]!
0x03D3FE78: e10317aa  mov x1, x23
0x03D3FE7C: d202d197  bl #0x31809c4
0x03D3FE80: 552100b4  cbz x21, #0x3d402a8
0x03D3FE84: e00315aa  mov x0, x21
0x03D3FE88: 1a0c02f8  str x26, [x0, #0x20]!
0x03D3FE8C: e1031aaa  mov x1, x26
0x03D3FE90: cd02d197  bl #0x31809c4
0x03D3FE94: 681e40f9  ldr x8, [x19, #0x38]
0x03D3FE98: 000540f9  ldr x0, [x8, #8]
0x03D3FE9C: 08d44439  ldrb w8, [x0, #0x135]
0x03D3FEA0: 48000037  tbnz w8, #0, #0x3d3fea8
0x03D3FEA4: 5e5ad097  bl #0x315681c
0x03D3FEA8: 7e03d197  bl #0x3180ca0
0x03D3FEAC: 681e40f9  ldr x8, [x19, #0x38]
0x03D3FEB0: f70300aa  mov x23, x0
0x03D3FEB4: 010940f9  ldr x1, [x8, #0x10]
0x03D3FEB8: 600f0c94  bl #0x4043c38
0x03D3FEBC: 771f00b4  cbz x23, #0x3d402a8
0x03D3FEC0: 691e40f9  ldr x9, [x19, #0x38]
0x03D3FEC4: ea1e40b9  ldr w10, [x23, #0x1c]
0x03D3FEC8: e80a40f9  ldr x8, [x23, #0x10]
0x03D3FECC: 290d40f9  ldr x9, [x9, #0x18]
0x03D3FED0: 4a050011  add w10, w10, #1
0x03D3FED4: ea1e00b9  str w10, [x23, #0x1c]
0x03D3FED8: 881e00b4  cbz x8, #0x3d402a8
0x03D3FEDC: ea1a80b9  ldrsw x10, [x23, #0x18]
0x03D3FEE0: 0b1940b9  ldr w11, [x8, #0x18]
0x03D3FEE4: 5f010b6b  cmp w10, w11
0x03D3FEE8: 22010054  b.hs #0x3d3ff0c
0x03D3FEEC: 49050011  add w9, w10, #1
0x03D3FEF0: 000d0a8b  add x0, x8, x10, lsl #3
0x03D3FEF4: e91a00b9  str w9, [x23, #0x18]
0x03D3FEF8: 150c02f8  str x21, [x0, #0x20]!
0x03D3FEFC: e10315aa  mov x1, x21
0x03D3FF00: b102d197  bl #0x31809c4
0x03D3FF04: 390100b5  cbnz x25, #0x3d3ff28
0x03D3FF08: 2d000014  b #0x3d3ffbc
0x03D3FF0C: 281140f9  ldr x8, [x9, #0x20]
0x03D3FF10: e00317aa  mov x0, x23
0x03D3FF14: e10315aa  mov x1, x21
0x03D3FF18: 086140f9  ldr x8, [x8, #0xc0]
0x03D3FF1C: 023940f9  ldr x2, [x8, #0x70]
0x03D3FF20: 53110c94  bl #0x404446c
0x03D3FF24: d90400b4  cbz x25, #0x3d3ffbc
0x03D3FF28: 691e40f9  ldr x9, [x19, #0x38]
0x03D3FF2C: ea1e40b9  ldr w10, [x23, #0x1c]
0x03D3FF30: e80a40f9  ldr x8, [x23, #0x10]
0x03D3FF34: 290d40f9  ldr x9, [x9, #0x18]
0x03D3FF38: 4a050011  add w10, w10, #1
0x03D3FF3C: ea1e00b9  str w10, [x23, #0x1c]
0x03D3FF40: 481b00b4  cbz x8, #0x3d402a8
0x03D3FF44: ea1a80b9  ldrsw x10, [x23, #0x18]
0x03D3FF48: 0b1940b9  ldr w11, [x8, #0x18]
0x03D3FF4C: 5f010b6b  cmp w10, w11
0x03D3FF50: 02010054  b.hs #0x3d3ff70
0x03D3FF54: 49050011  add w9, w10, #1
0x03D3FF58: 000d0a8b  add x0, x8, x10, lsl #3
0x03D3FF5C: e91a00b9  str w9, [x23, #0x18]
0x03D3FF60: 190c02f8  str x25, [x0, #0x20]!
0x03D3FF64: e10319aa  mov x1, x25
0x03D3FF68: 9702d197  bl #0x31809c4
0x03D3FF6C: 07000014  b #0x3d3ff88
0x03D3FF70: 281140f9  ldr x8, [x9, #0x20]
0x03D3FF74: e00317aa  mov x0, x23
0x03D3FF78: e10319aa  mov x1, x25
0x03D3FF7C: 086140f9  ldr x8, [x8, #0xc0]
0x03D3FF80: 023940f9  ldr x2, [x8, #0x70]
0x03D3FF84: 3a110c94  bl #0x404446c
0x03D3FF88: c8c901f0  adrp x8, #0x767a000
0x03D3FF8C: 085945f9  ldr x8, [x8, #0xab0]
0x03D3FF90: 290340f9  ldr x9, [x25]
0x03D3FF94: 080140f9  ldr x8, [x8]
0x03D3FF98: 2bc14439  ldrb w11, [x9, #0x130]
0x03D3FF9C: 0ac14439  ldrb w10, [x8, #0x130]
0x03D3FFA0: 7f010a6b  cmp w11, w10
0x03D3FFA4: c3000054  b.lo #0x3d3ffbc
0x03D3FFA8: 296540f9  ldr x9, [x9, #0xc8]
0x03D3FFAC: 290d0a8b  add x9, x9, x10, lsl #3
0x03D3FFB0: 29815ff8  ldur x9, [x9, #-8]
0x03D3FFB4: 3f0108eb  cmp x9, x8
0x03D3FFB8: 40100054  b.eq #0x3d401c0
0x03D3FFBC: e8031faa  mov x8, xzr
0x03D3FFC0: 992640f9  ldr x25, [x20, #0x48]
0x03D3FFC4: 1f0100f1  cmp x8, #0
0x03D3FFC8: 1803889a  csel x24, x24, x8, eq
0x03D3FFCC: 791100b4  cbz x25, #0x3d401f8
0x03D3FFD0: cac901f0  adrp x10, #0x767a000
0x03D3FFD4: 280340f9  ldr x8, [x25]
0x03D3FFD8: 4a5545f9  ldr x10, [x10, #0xaa8]
0x03D3FFDC: 095d4279  ldrh w9, [x8, #0x12e]
0x03D3FFE0: 410140f9  ldr x1, [x10]
0x03D3FFE4: 290100b4  cbz x9, #0x3d40008
0x03D3FFE8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D3FFEC: 4a210091  add x10, x10, #8
0x03D3FFF0: 4b815ff8  ldur x11, [x10, #-8]
0x03D3FFF4: 7f0101eb  cmp x11, x1
0x03D3FFF8: 00010054  b.eq #0x3d40018
0x03D3FFFC: 290500f1  subs x9, x9, #1
0x03D40000: 4a410091  add x10, x10, #0x10
0x03D40004: 61ffff54  b.ne #0x3d3fff0
0x03D40008: 22018052  movz w2, #0x9
0x03D4000C: e00319aa  mov x0, x25
0x03D40010: c05ad097  bl #0x3156b10
0x03D40014: 05000014  b #0x3d40028
0x03D40018: 490140b9  ldr w9, [x10]
0x03D4001C: 29250011  add w9, w9, #9
0x03D40020: 08d1298b  add x8, x8, w9, sxtw #4
0x03D40024: 00e10491  add x0, x8, #0x138
0x03D40028: 080440a9  ldp x8, x1, [x0]
0x03D4002C: e00319aa  mov x0, x25
0x03D40030: 00013fd6  blr x8
0x03D40034: 200e00b4  cbz x0, #0x3d401f8
0x03D40038: 681e40f9  ldr x8, [x19, #0x38]
0x03D4003C: f90300aa  mov x25, x0
0x03D40040: 001540f9  ldr x0, [x8, #0x28]
0x03D40044: 08d44439  ldrb w8, [x0, #0x135]
0x03D40048: 48000037  tbnz w8, #0, #0x3d40050
0x03D4004C: f459d097  bl #0x315681c
0x03D40050: 08e040b9  ldr w8, [x0, #0xe0]
0x03D40054: 48000035  cbnz w8, #0x3d4005c
0x03D40058: cd02d197  bl #0x3180b8c
0x03D4005C: 681e40f9  ldr x8, [x19, #0x38]
0x03D40060: 001540f9  ldr x0, [x8, #0x28]
0x03D40064: 08d44439  ldrb w8, [x0, #0x135]
0x03D40068: 48000037  tbnz w8, #0, #0x3d40070
0x03D4006C: ec59d097  bl #0x315681c
0x03D40070: 085c40f9  ldr x8, [x0, #0xb8]
0x03D40074: 1a0540f9  ldr x26, [x8, #8]
0x03D40078: 5a0500b5  cbnz x26, #0x3d40120
0x03D4007C: 681e40f9  ldr x8, [x19, #0x38]
0x03D40080: 001540f9  ldr x0, [x8, #0x28]
0x03D40084: 08d44439  ldrb w8, [x0, #0x135]
0x03D40088: 48000037  tbnz w8, #0, #0x3d40090
0x03D4008C: e459d097  bl #0x315681c
0x03D40090: 08e040b9  ldr w8, [x0, #0xe0]
0x03D40094: 48000035  cbnz w8, #0x3d4009c
0x03D40098: bd02d197  bl #0x3180b8c
0x03D4009C: 681e40f9  ldr x8, [x19, #0x38]
0x03D400A0: 001540f9  ldr x0, [x8, #0x28]
0x03D400A4: 08d44439  ldrb w8, [x0, #0x135]
0x03D400A8: 48000037  tbnz w8, #0, #0x3d400b0
0x03D400AC: dc59d097  bl #0x315681c
0x03D400B0: c9c901d0  adrp x9, #0x767a000
0x03D400B4: 085c40f9  ldr x8, [x0, #0xb8]
0x03D400B8: 295145f9  ldr x9, [x9, #0xaa0]
0x03D400BC: 1b0140f9  ldr x27, [x8]
0x03D400C0: 200140f9  ldr x0, [x9]
0x03D400C4: f702d197  bl #0x3180ca0
0x03D400C8: 681e40f9  ldr x8, [x19, #0x38]
0x03D400CC: e1031baa  mov x1, x27
0x03D400D0: e3031faa  mov x3, xzr
0x03D400D4: fa0300aa  mov x26, x0
0x03D400D8: 021940f9  ldr x2, [x8, #0x30]
0x03D400DC: 375a5494  bl #0x52569b8
0x03D400E0: 681e40f9  ldr x8, [x19, #0x38]
0x03D400E4: 001540f9  ldr x0, [x8, #0x28]
0x03D400E8: 08d44439  ldrb w8, [x0, #0x135]
0x03D400EC: 48000037  tbnz w8, #0, #0x3d400f4
0x03D400F0: cb59d097  bl #0x315681c
0x03D400F4: 085c40f9  ldr x8, [x0, #0xb8]
0x03D400F8: 1a0500f9  str x26, [x8, #8]
0x03D400FC: 681e40f9  ldr x8, [x19, #0x38]
0x03D40100: 001540f9  ldr x0, [x8, #0x28]
0x03D40104: 08d44439  ldrb w8, [x0, #0x135]
0x03D40108: 48000037  tbnz w8, #0, #0x3d40110
0x03D4010C: c459d097  bl #0x315681c
0x03D40110: 085c40f9  ldr x8, [x0, #0xb8]
0x03D40114: e1031aaa  mov x1, x26
0x03D40118: 00210091  add x0, x8, #8
0x03D4011C: 2a02d197  bl #0x31809c4
0x03D40120: c8c901d0  adrp x8, #0x767a000
0x03D40124: 084945f9  ldr x8, [x8, #0xa90]
0x03D40128: e00319aa  mov x0, x25
0x03D4012C: e1031aaa  mov x1, x26
0x03D40130: 020140f9  ldr x2, [x8]
0x03D40134: 5842fc97  bl #0x3c50a94
0x03D40138: 48c901d0  adrp x8, #0x766a000
0x03D4013C: 085947f9  ldr x8, [x8, #0xeb0]
0x03D40140: e10318aa  mov x1, x24
0x03D40144: 020140f9  ldr x2, [x8]
0x03D40148: 9edefb97  bl #0x3c37bc0
0x03D4014C: 88c801b0  adrp x8, #0x7651000
0x03D40150: 081142f9  ldr x8, [x8, #0x420]
0x03D40154: 01000012  and w1, w0, #1
0x03D40158: e0330091  add x0, sp, #0xc
0x03D4015C: ff1b0079  strh wzr, [sp, #0xc]
0x03D40160: 020140f9  ldr x2, [x8]
0x03D40164: 2cdd1494  bl #0x4277614
0x03D40168: 960400b4  cbz x22, #0x3d401f8
0x03D4016C: e81b4079  ldrh w8, [sp, #0xc]
0x03D40170: 1f010471  cmp w8, #0x100
0x03D40174: 23040054  b.lo #0x3d401f8
0x03D40178: cac901b0  adrp x10, #0x7679000
0x03D4017C: c80240f9  ldr x8, [x22]
0x03D40180: 4a1144f9  ldr x10, [x10, #0x820]
0x03D40184: 095d4279  ldrh w9, [x8, #0x12e]
0x03D40188: 410140f9  ldr x1, [x10]
0x03D4018C: 290100b4  cbz x9, #0x3d401b0
0x03D40190: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D40194: 4a210091  add x10, x10, #8
0x03D40198: 4b815ff8  ldur x11, [x10, #-8]
0x03D4019C: 7f0101eb  cmp x11, x1
0x03D401A0: 80010054  b.eq #0x3d401d0
0x03D401A4: 290500f1  subs x9, x9, #1
0x03D401A8: 4a410091  add x10, x10, #0x10
0x03D401AC: 61ffff54  b.ne #0x3d40198
0x03D401B0: e00316aa  mov x0, x22
0x03D401B4: e2031f2a  mov w2, wzr
0x03D401B8: 565ad097  bl #0x3156b10
0x03D401BC: 08000014  b #0x3d401dc
0x03D401C0: 286f40f9  ldr x8, [x25, #0xd8]
0x03D401C4: e8efffb4  cbz x8, #0x3d3ffc0
0x03D401C8: 080940f9  ldr x8, [x8, #0x10]
0x03D401CC: 7dffff17  b #0x3d3ffc0
0x03D401D0: 490180b9  ldrsw x9, [x10]
0x03D401D4: 0811098b  add x8, x8, x9, lsl #4
0x03D401D8: 00e10491  add x0, x8, #0x138
0x03D401DC: 080440a9  ldp x8, x1, [x0]
0x03D401E0: e00316aa  mov x0, x22
0x03D401E4: 00013fd6  blr x8
0x03D401E8: a08e02f8  str x0, [x21, #0x28]!
0x03D401EC: e10300aa  mov x1, x0
0x03D401F0: e00315aa  mov x0, x21
0x03D401F4: f401d197  bl #0x31809c4
0x03D401F8: 942240f9  ldr x20, [x20, #0x40]
0x03D401FC: 740500b4  cbz x20, #0x3d402a8
0x03D40200: 691e40f9  ldr x9, [x19, #0x38]
0x03D40204: 880240f9  ldr x8, [x20]
0x03D40208: 351d40f9  ldr x21, [x9, #0x38]
0x03D4020C: c9c901d0  adrp x9, #0x767a000
0x03D40210: 295d45f9  ldr x9, [x9, #0xab8]
0x03D40214: a11240f9  ldr x1, [x21, #0x20]
0x03D40218: a2a24079  ldrh w2, [x21, #0x50]
0x03D4021C: 330140f9  ldr x19, [x9]
0x03D40220: 095d4279  ldrh w9, [x8, #0x12e]
0x03D40224: 290100b4  cbz x9, #0x3d40248
0x03D40228: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D4022C: 4a210091  add x10, x10, #8
0x03D40230: 4b815ff8  ldur x11, [x10, #-8]
0x03D40234: 7f0101eb  cmp x11, x1
0x03D40238: e0000054  b.eq #0x3d40254
0x03D4023C: 290500f1  subs x9, x9, #1
0x03D40240: 4a410091  add x10, x10, #0x10
0x03D40244: 61ffff54  b.ne #0x3d40230
0x03D40248: e00314aa  mov x0, x20
0x03D4024C: 315ad097  bl #0x3156b10
0x03D40250: 05000014  b #0x3d40264
0x03D40254: 490140b9  ldr w9, [x10]
0x03D40258: 2901020b  add w9, w9, w2
0x03D4025C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D40260: 00e10491  add x0, x8, #0x138
0x03D40264: 000440f9  ldr x0, [x0, #8]
0x03D40268: e10315aa  mov x1, x21
0x03D4026C: 4702d197  bl #0x3180b88
0x03D40270: 080440f9  ldr x8, [x0, #8]
0x03D40274: e40300aa  mov x4, x0
0x03D40278: e00314aa  mov x0, x20
0x03D4027C: e10313aa  mov x1, x19
0x03D40280: e20317aa  mov x2, x23
0x03D40284: e3031faa  mov x3, xzr
0x03D40288: 00013fd6  blr x8
0x03D4028C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D40290: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D40294: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D40298: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D4029C: fe6f41a9  ldp x30, x27, [sp, #0x10]
0x03D402A0: ff830191  add sp, sp, #0x60
0x03D402A4: c0035fd6  ret
0x03D402A8: 8102d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D3FCAC | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackCollectToolboxOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackCollectToolboxOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D3FCAC* method);
; bytes=224 sha256=71654decfcbf1b08ab26b4a0f2a7b75b04b8d186c4cf362764f74ac9ec357afa status=arm64_complete_bound indexed_start=True
0x03D3FCAC: fe0f1df8  str x30, [sp, #-0x30]!
0x03D3FCB0: f65701a9  stp x22, x21, [sp, #0x10]
0x03D3FCB4: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D3FCB8: 481c40f9  ldr x8, [x2, #0x38]
0x03D3FCBC: f50302aa  mov x21, x2
0x03D3FCC0: f30301aa  mov x19, x1
0x03D3FCC4: f40300aa  mov x20, x0
0x03D3FCC8: 080100b5  cbnz x8, #0x3d3fce8
0x03D3FCCC: c0c901f0  adrp x0, #0x767a000
0x03D3FCD0: 004445f9  ldr x0, [x0, #0xa88]
0x03D3FCD4: 5103d197  bl #0x3180a18
0x03D3FCD8: a81e40f9  ldr x8, [x21, #0x38]
0x03D3FCDC: 680000b5  cbnz x8, #0x3d3fce8
0x03D3FCE0: e00315aa  mov x0, x21
0x03D3FCE4: e55ad097  bl #0x3156878
0x03D3FCE8: 942240f9  ldr x20, [x20, #0x40]
0x03D3FCEC: f40400b4  cbz x20, #0x3d3fd88
0x03D3FCF0: a91e40f9  ldr x9, [x21, #0x38]
0x03D3FCF4: 880240f9  ldr x8, [x20]
0x03D3FCF8: 360540f9  ldr x22, [x9, #8]
0x03D3FCFC: c9c901f0  adrp x9, #0x767a000
0x03D3FD00: 294545f9  ldr x9, [x9, #0xa88]
0x03D3FD04: c11240f9  ldr x1, [x22, #0x20]
0x03D3FD08: c2a24079  ldrh w2, [x22, #0x50]
0x03D3FD0C: 350140f9  ldr x21, [x9]
0x03D3FD10: 095d4279  ldrh w9, [x8, #0x12e]
0x03D3FD14: 290100b4  cbz x9, #0x3d3fd38
0x03D3FD18: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D3FD1C: 4a210091  add x10, x10, #8
0x03D3FD20: 4b815ff8  ldur x11, [x10, #-8]
0x03D3FD24: 7f0101eb  cmp x11, x1
0x03D3FD28: e0000054  b.eq #0x3d3fd44
0x03D3FD2C: 290500f1  subs x9, x9, #1
0x03D3FD30: 4a410091  add x10, x10, #0x10
0x03D3FD34: 61ffff54  b.ne #0x3d3fd20
0x03D3FD38: e00314aa  mov x0, x20
0x03D3FD3C: 755bd097  bl #0x3156b10
0x03D3FD40: 05000014  b #0x3d3fd54
0x03D3FD44: 490140b9  ldr w9, [x10]
0x03D3FD48: 2901020b  add w9, w9, w2
0x03D3FD4C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D3FD50: 00e10491  add x0, x8, #0x138
0x03D3FD54: 000440f9  ldr x0, [x0, #8]
0x03D3FD58: e10316aa  mov x1, x22
0x03D3FD5C: 8b03d197  bl #0x3180b88
0x03D3FD60: e40300aa  mov x4, x0
0x03D3FD64: 050440f9  ldr x5, [x0, #8]
0x03D3FD68: e00314aa  mov x0, x20
0x03D3FD6C: e10315aa  mov x1, x21
0x03D3FD70: e20313aa  mov x2, x19
0x03D3FD74: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D3FD78: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D3FD7C: e3031faa  mov x3, xzr
0x03D3FD80: fe0743f8  ldr x30, [sp], #0x30
0x03D3FD84: a0001fd6  br x5
0x03D3FD88: c903d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D3FBCC | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackCollectToolFragment<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackCollectToolFragment_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, const MethodInfo_3D3FBCC* method);
; bytes=224 sha256=72da24ed1f57852f16817a2e1d2905d3c77f7aaf2fcd64e5b6b3ed195ee1ab6f status=arm64_complete_bound indexed_start=True
0x03D3FBCC: fe0f1df8  str x30, [sp, #-0x30]!
0x03D3FBD0: f65701a9  stp x22, x21, [sp, #0x10]
0x03D3FBD4: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D3FBD8: 481c40f9  ldr x8, [x2, #0x38]
0x03D3FBDC: f50302aa  mov x21, x2
0x03D3FBE0: f30301aa  mov x19, x1
0x03D3FBE4: f40300aa  mov x20, x0
0x03D3FBE8: 080100b5  cbnz x8, #0x3d3fc08
0x03D3FBEC: c0c901f0  adrp x0, #0x767a000
0x03D3FBF0: 004045f9  ldr x0, [x0, #0xa80]
0x03D3FBF4: 8903d197  bl #0x3180a18
0x03D3FBF8: a81e40f9  ldr x8, [x21, #0x38]
0x03D3FBFC: 680000b5  cbnz x8, #0x3d3fc08
0x03D3FC00: e00315aa  mov x0, x21
0x03D3FC04: 1d5bd097  bl #0x3156878
0x03D3FC08: 942240f9  ldr x20, [x20, #0x40]
0x03D3FC0C: f40400b4  cbz x20, #0x3d3fca8
0x03D3FC10: a91e40f9  ldr x9, [x21, #0x38]
0x03D3FC14: 880240f9  ldr x8, [x20]
0x03D3FC18: 360540f9  ldr x22, [x9, #8]
0x03D3FC1C: c9c901f0  adrp x9, #0x767a000
0x03D3FC20: 294145f9  ldr x9, [x9, #0xa80]
0x03D3FC24: c11240f9  ldr x1, [x22, #0x20]
0x03D3FC28: c2a24079  ldrh w2, [x22, #0x50]
0x03D3FC2C: 350140f9  ldr x21, [x9]
0x03D3FC30: 095d4279  ldrh w9, [x8, #0x12e]
0x03D3FC34: 290100b4  cbz x9, #0x3d3fc58
0x03D3FC38: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D3FC3C: 4a210091  add x10, x10, #8
0x03D3FC40: 4b815ff8  ldur x11, [x10, #-8]
0x03D3FC44: 7f0101eb  cmp x11, x1
0x03D3FC48: e0000054  b.eq #0x3d3fc64
0x03D3FC4C: 290500f1  subs x9, x9, #1
0x03D3FC50: 4a410091  add x10, x10, #0x10
0x03D3FC54: 61ffff54  b.ne #0x3d3fc40
0x03D3FC58: e00314aa  mov x0, x20
0x03D3FC5C: ad5bd097  bl #0x3156b10
0x03D3FC60: 05000014  b #0x3d3fc74
0x03D3FC64: 490140b9  ldr w9, [x10]
0x03D3FC68: 2901020b  add w9, w9, w2
0x03D3FC6C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D3FC70: 00e10491  add x0, x8, #0x138
0x03D3FC74: 000440f9  ldr x0, [x0, #8]
0x03D3FC78: e10316aa  mov x1, x22
0x03D3FC7C: c303d197  bl #0x3180b88
0x03D3FC80: e40300aa  mov x4, x0
0x03D3FC84: 050440f9  ldr x5, [x0, #8]
0x03D3FC88: e00314aa  mov x0, x20
0x03D3FC8C: e10315aa  mov x1, x21
0x03D3FC90: e20313aa  mov x2, x19
0x03D3FC94: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D3FC98: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D3FC9C: e3031faa  mov x3, xzr
0x03D3FCA0: fe0743f8  ldr x30, [sp], #0x30
0x03D3FCA4: a0001fd6  br x5
0x03D3FCA8: 0104d197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D40DF4 | Merger.Services.Backend.WebSocket.OperationTrackingSystem$$TrackStackingOperation<object>
; native signature: void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackStackingOperation_object_ (Merger_Services_Backend_WebSocket_OperationTrackingSystem_o* __this, System_Collections_Generic_List_TItemNotificationData__o* itemsNotificationData, System_String_o* actionId, const MethodInfo_3D40DF4* method);
; bytes=352 sha256=469e339acede1de1c29fbd356cf4f967afb72aa9b657e5caa02f9af6d05d5427 status=arm64_complete_bound indexed_start=True
0x03D40DF4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x03D40DF8: f65701a9  stp x22, x21, [sp, #0x10]
0x03D40DFC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D40E00: 681c40f9  ldr x8, [x3, #0x38]
0x03D40E04: f60303aa  mov x22, x3
0x03D40E08: f70302aa  mov x23, x2
0x03D40E0C: f30301aa  mov x19, x1
0x03D40E10: f40300aa  mov x20, x0
0x03D40E14: 880200b5  cbnz x8, #0x3d40e64
0x03D40E18: 80c80190  adrp x0, #0x7650000
0x03D40E1C: 00e843f9  ldr x0, [x0, #0x7d0]
0x03D40E20: fefed097  bl #0x3180a18
0x03D40E24: c0c801d0  adrp x0, #0x765a000
0x03D40E28: 00ac44f9  ldr x0, [x0, #0x958]
0x03D40E2C: fbfed097  bl #0x3180a18
0x03D40E30: 80c80190  adrp x0, #0x7650000
0x03D40E34: 001c44f9  ldr x0, [x0, #0x838]
0x03D40E38: f8fed097  bl #0x3180a18
0x03D40E3C: c0c901b0  adrp x0, #0x7679000
0x03D40E40: 004847f9  ldr x0, [x0, #0xe90]
0x03D40E44: f5fed097  bl #0x3180a18
0x03D40E48: c0c901d0  adrp x0, #0x767a000
0x03D40E4C: 009c45f9  ldr x0, [x0, #0xb38]
0x03D40E50: f2fed097  bl #0x3180a18
0x03D40E54: c81e40f9  ldr x8, [x22, #0x38]
0x03D40E58: 680000b5  cbnz x8, #0x3d40e64
0x03D40E5C: e00316aa  mov x0, x22
0x03D40E60: 8656d097  bl #0x3156878
0x03D40E64: 88c80190  adrp x8, #0x7650000
0x03D40E68: 942240f9  ldr x20, [x20, #0x40]
0x03D40E6C: 081d44f9  ldr x8, [x8, #0x838]
0x03D40E70: 000140f9  ldr x0, [x8]
0x03D40E74: 8bffd097  bl #0x3180ca0
0x03D40E78: c8c801d0  adrp x8, #0x765a000
0x03D40E7C: 08ad44f9  ldr x8, [x8, #0x958]
0x03D40E80: f50300aa  mov x21, x0
0x03D40E84: 010140f9  ldr x1, [x8]
0x03D40E88: 47844694  bl #0x4ee1fa4
0x03D40E8C: 350600b4  cbz x21, #0x3d40f50
0x03D40E90: c8c901b0  adrp x8, #0x7679000
0x03D40E94: 89c80190  adrp x9, #0x7650000
0x03D40E98: 084947f9  ldr x8, [x8, #0xe90]
0x03D40E9C: 29e943f9  ldr x9, [x9, #0x7d0]
0x03D40EA0: e00315aa  mov x0, x21
0x03D40EA4: e20317aa  mov x2, x23
0x03D40EA8: 010140f9  ldr x1, [x8]
0x03D40EAC: 230140f9  ldr x3, [x9]
0x03D40EB0: b3874694  bl #0x4ee2d7c
0x03D40EB4: f40400b4  cbz x20, #0x3d40f50
0x03D40EB8: c91e40f9  ldr x9, [x22, #0x38]
0x03D40EBC: 880240f9  ldr x8, [x20]
0x03D40EC0: 370540f9  ldr x23, [x9, #8]
0x03D40EC4: c9c901d0  adrp x9, #0x767a000
0x03D40EC8: 299d45f9  ldr x9, [x9, #0xb38]
0x03D40ECC: e11240f9  ldr x1, [x23, #0x20]
0x03D40ED0: e2a24079  ldrh w2, [x23, #0x50]
0x03D40ED4: 360140f9  ldr x22, [x9]
0x03D40ED8: 095d4279  ldrh w9, [x8, #0x12e]
0x03D40EDC: 290100b4  cbz x9, #0x3d40f00
0x03D40EE0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D40EE4: 4a210091  add x10, x10, #8
0x03D40EE8: 4b815ff8  ldur x11, [x10, #-8]
0x03D40EEC: 7f0101eb  cmp x11, x1
0x03D40EF0: e0000054  b.eq #0x3d40f0c
0x03D40EF4: 290500f1  subs x9, x9, #1
0x03D40EF8: 4a410091  add x10, x10, #0x10
0x03D40EFC: 61ffff54  b.ne #0x3d40ee8
0x03D40F00: e00314aa  mov x0, x20
0x03D40F04: 0357d097  bl #0x3156b10
0x03D40F08: 05000014  b #0x3d40f1c
0x03D40F0C: 490140b9  ldr w9, [x10]
0x03D40F10: 2901020b  add w9, w9, w2
0x03D40F14: 08d1298b  add x8, x8, w9, sxtw #4
0x03D40F18: 00e10491  add x0, x8, #0x138
0x03D40F1C: 000440f9  ldr x0, [x0, #8]
0x03D40F20: e10317aa  mov x1, x23
0x03D40F24: 19ffd097  bl #0x3180b88
0x03D40F28: e40300aa  mov x4, x0
0x03D40F2C: 050440f9  ldr x5, [x0, #8]
0x03D40F30: e00314aa  mov x0, x20
0x03D40F34: e10316aa  mov x1, x22
0x03D40F38: e20313aa  mov x2, x19
0x03D40F3C: e30315aa  mov x3, x21
0x03D40F40: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D40F44: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D40F48: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x03D40F4C: a0001fd6  br x5
0x03D40F50: 57ffd097  bl #0x3180cac

