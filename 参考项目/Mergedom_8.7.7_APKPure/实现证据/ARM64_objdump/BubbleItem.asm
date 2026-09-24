
# BubbleItem :: System.Boolean CanMergeWith(BaseItem otherItem)
# VA 0x2bf6344 .. 0x2bf634c (next mapped method entry)
 2bf6344: 2a1f03e0     	mov	w0, wzr
 2bf6348: d65f03c0     	ret

# BubbleItem :: System.Void OnStartItemDrag()
# VA 0x2bf634c .. 0x2bf63c8 (next mapped method entry)
 2bf634c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf6350: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf6354: 9001d8f5     	adrp	x21, 0x6712000
 2bf6358: d001b7d4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf635c: aa0003f3     	mov	x19, x0
 2bf6360: 396cbea8     	ldrb	w8, [x21, #0xb2f]
 2bf6364: f9478e94     	ldr	x20, [x20, #0xf18]
 2bf6368: 370000c8     	tbnz	w8, #0x0, 0x2bf6380 <__start_il2cpp+0x12dd6c>
 2bf636c: d001b7c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf6370: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf6374: 97f7829b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6378: 52800028     	mov	w8, #0x1                // =1
 2bf637c: 392cbea8     	strb	w8, [x21, #0xb2f]
 2bf6380: f9400280     	ldr	x0, [x20]
 2bf6384: f9407274     	ldr	x20, [x19, #0xe0]
 2bf6388: b940e408     	ldr	w8, [x0, #0xe4]
 2bf638c: 35000048     	cbnz	w8, 0x2bf6394 <__start_il2cpp+0x12dd80>
 2bf6390: 97f782f3     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf6394: aa1403e0     	mov	x0, x20
 2bf6398: aa1f03e1     	mov	x1, xzr
 2bf639c: aa1f03e2     	mov	x2, xzr
 2bf63a0: 94bd4096     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2bf63a4: 370000a0     	tbnz	w0, #0x0, 0x2bf63b8 <__start_il2cpp+0x12dda4>
 2bf63a8: f9407268     	ldr	x8, [x19, #0xe0]
 2bf63ac: b40000c8     	cbz	x8, 0x2bf63c4 <__start_il2cpp+0x12ddb0>
 2bf63b0: 52800029     	mov	w9, #0x1                // =1
 2bf63b4: 39022109     	strb	w9, [x8, #0x88]
 2bf63b8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf63bc: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf63c0: d65f03c0     	ret
 2bf63c4: 97f78331     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleItem :: System.Void OnEndItemDrag()
# VA 0x2bf63c8 .. 0x2bf6440 (next mapped method entry)
 2bf63c8: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf63cc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf63d0: 9001d8f5     	adrp	x21, 0x6712000
 2bf63d4: d001b7d4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf63d8: aa0003f3     	mov	x19, x0
 2bf63dc: 396cc2a8     	ldrb	w8, [x21, #0xb30]
 2bf63e0: f9478e94     	ldr	x20, [x20, #0xf18]
 2bf63e4: 370000c8     	tbnz	w8, #0x0, 0x2bf63fc <__start_il2cpp+0x12dde8>
 2bf63e8: d001b7c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf63ec: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf63f0: 97f7827c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf63f4: 52800028     	mov	w8, #0x1                // =1
 2bf63f8: 392cc2a8     	strb	w8, [x21, #0xb30]
 2bf63fc: f9400280     	ldr	x0, [x20]
 2bf6400: f9407274     	ldr	x20, [x19, #0xe0]
 2bf6404: b940e408     	ldr	w8, [x0, #0xe4]
 2bf6408: 35000048     	cbnz	w8, 0x2bf6410 <__start_il2cpp+0x12ddfc>
 2bf640c: 97f782d4     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf6410: aa1403e0     	mov	x0, x20
 2bf6414: aa1f03e1     	mov	x1, xzr
 2bf6418: aa1f03e2     	mov	x2, xzr
 2bf641c: 94bd4077     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2bf6420: 37000080     	tbnz	w0, #0x0, 0x2bf6430 <__start_il2cpp+0x12de1c>
 2bf6424: f9407268     	ldr	x8, [x19, #0xe0]
 2bf6428: b40000a8     	cbz	x8, 0x2bf643c <__start_il2cpp+0x12de28>
 2bf642c: 3902211f     	strb	wzr, [x8, #0x88]
 2bf6430: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf6434: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf6438: d65f03c0     	ret
 2bf643c: 97f78313     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleItem :: System.Void Init(BoardSlotData boardSlotData)
# VA 0x2bf6440 .. 0x2bf6c88 (next mapped method entry)
 2bf6440: d10203ff     	sub	sp, sp, #0x80
 2bf6444: a9036ffe     	stp	x30, x27, [sp, #0x30]
 2bf6448: a90467fa     	stp	x26, x25, [sp, #0x40]
 2bf644c: a9055ff8     	stp	x24, x23, [sp, #0x50]
 2bf6450: a90657f6     	stp	x22, x21, [sp, #0x60]
 2bf6454: a9074ff4     	stp	x20, x19, [sp, #0x70]
 2bf6458: 9001d8f5     	adrp	x21, 0x6712000
 2bf645c: aa0103f4     	mov	x20, x1
 2bf6460: aa0003f3     	mov	x19, x0
 2bf6464: 396cc6a8     	ldrb	w8, [x21, #0xb31]
 2bf6468: 370005a8     	tbnz	w8, #0x0, 0x2bf651c <__start_il2cpp+0x12df08>
 2bf646c: 9001b820     	adrp	x0, 0x62fa000
 2bf6470: f9404400     	ldr	x0, [x0, #0x88]
 2bf6474: 97f7825b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6478: 9001b7e0     	adrp	x0, 0x62f2000
 2bf647c: f940ac00     	ldr	x0, [x0, #0x158]
 2bf6480: 97f78258     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6484: b001b7e0     	adrp	x0, 0x62f3000
 2bf6488: f9479000     	ldr	x0, [x0, #0xf20]
 2bf648c: 97f78255     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6490: 9001b820     	adrp	x0, 0x62fa000
 2bf6494: f940a800     	ldr	x0, [x0, #0x150]
 2bf6498: 97f78252     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf649c: 9001b800     	adrp	x0, 0x62f6000
 2bf64a0: f9400c00     	ldr	x0, [x0, #0x18]
 2bf64a4: 97f7824f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf64a8: d001b7c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf64ac: f9471000     	ldr	x0, [x0, #0xe20]
 2bf64b0: 97f7824c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf64b4: d001b820     	adrp	x0, 0x62fc000
 2bf64b8: f9437000     	ldr	x0, [x0, #0x6e0]
 2bf64bc: 97f78249     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf64c0: d001b820     	adrp	x0, 0x62fc000
 2bf64c4: f9437400     	ldr	x0, [x0, #0x6e8]
 2bf64c8: 97f78246     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf64cc: d001b820     	adrp	x0, 0x62fc000
 2bf64d0: f9437800     	ldr	x0, [x0, #0x6f0]
 2bf64d4: 97f78243     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf64d8: d001b820     	adrp	x0, 0x62fc000
 2bf64dc: f9437c00     	ldr	x0, [x0, #0x6f8]
 2bf64e0: 97f78240     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf64e4: d001b820     	adrp	x0, 0x62fc000
 2bf64e8: f9438000     	ldr	x0, [x0, #0x700]
 2bf64ec: 97f7823d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf64f0: d001b820     	adrp	x0, 0x62fc000
 2bf64f4: f9438400     	ldr	x0, [x0, #0x708]
 2bf64f8: 97f7823a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf64fc: d001b820     	adrp	x0, 0x62fc000
 2bf6500: f9438800     	ldr	x0, [x0, #0x710]
 2bf6504: 97f78237     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6508: d001b820     	adrp	x0, 0x62fc000
 2bf650c: f9438c00     	ldr	x0, [x0, #0x718]
 2bf6510: 97f78234     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6514: 52800028     	mov	w8, #0x1                // =1
 2bf6518: 392cc6a8     	strb	w8, [x21, #0xb31]
 2bf651c: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2bf6520: 390073ff     	strb	wzr, [sp, #0x1c]
 2bf6524: b90013ff     	str	wzr, [sp, #0x10]
 2bf6528: b4003954     	cbz	x20, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf652c: f9406e76     	ldr	x22, [x19, #0xd8]
 2bf6530: b4003916     	cbz	x22, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf6534: b001b7f8     	adrp	x24, 0x62f3000
 2bf6538: f94002c8     	ldr	x8, [x22]
 2bf653c: aa1403f5     	mov	x21, x20
 2bf6540: f9479318     	ldr	x24, [x24, #0xf20]
 2bf6544: b8420eb7     	ldr	w23, [x21, #0x20]!
 2bf6548: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf654c: f9400301     	ldr	x1, [x24]
 2bf6550: b4000129     	cbz	x9, 0x2bf6574 <__start_il2cpp+0x12df60>
 2bf6554: f940590a     	ldr	x10, [x8, #0xb0]
 2bf6558: 9100214a     	add	x10, x10, #0x8
 2bf655c: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf6560: eb01017f     	cmp	x11, x1
 2bf6564: 54000100     	b.eq	0x2bf6584 <__start_il2cpp+0x12df70>
 2bf6568: f1000529     	subs	x9, x9, #0x1
 2bf656c: 9100414a     	add	x10, x10, #0x10
 2bf6570: 54ffff61     	b.ne	0x2bf655c <__start_il2cpp+0x12df48>
 2bf6574: aa1603e0     	mov	x0, x22
 2bf6578: 52800162     	mov	w2, #0xb                // =11
 2bf657c: 97f85f7a     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf6580: 14000005     	b	0x2bf6594 <__start_il2cpp+0x12df80>
 2bf6584: b9400149     	ldr	w9, [x10]
 2bf6588: 11002d29     	add	w9, w9, #0xb
 2bf658c: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf6590: 9104e100     	add	x0, x8, #0x138
 2bf6594: a9400808     	ldp	x8, x2, [x0]
 2bf6598: aa1603e0     	mov	x0, x22
 2bf659c: 2a1703e1     	mov	w1, w23
 2bf65a0: d63f0100     	blr	x8
 2bf65a4: 36001c20     	tbz	w0, #0x0, 0x2bf6928 <__start_il2cpp+0x12e314>
 2bf65a8: 9001b7fa     	adrp	x26, 0x62f2000
 2bf65ac: f940af5a     	ldr	x26, [x26, #0x158]
 2bf65b0: f9401696     	ldr	x22, [x20, #0x28]
 2bf65b4: f9400340     	ldr	x0, [x26]
 2bf65b8: b940e408     	ldr	w8, [x0, #0xe4]
 2bf65bc: 35000048     	cbnz	w8, 0x2bf65c4 <__start_il2cpp+0x12dfb0>
 2bf65c0: 97f78267     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf65c4: 9100a3e1     	add	x1, sp, #0x28
 2bf65c8: aa1603e0     	mov	x0, x22
 2bf65cc: aa1f03e2     	mov	x2, xzr
 2bf65d0: 9493daae     	bl	0x50ed088 <__start_il2cpp+0x2624a74>
 2bf65d4: 36001ce0     	tbz	w0, #0x0, 0x2bf6970 <__start_il2cpp+0x12e35c>
 2bf65d8: d001b7c8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf65dc: 52800141     	mov	w1, #0xa                // =10
 2bf65e0: f9471108     	ldr	x8, [x8, #0xe20]
 2bf65e4: f9400100     	ldr	x0, [x8]
 2bf65e8: 97f78239     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2bf65ec: b4003320     	cbz	x0, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf65f0: b9401808     	ldr	w8, [x0, #0x18]
 2bf65f4: aa0003f6     	mov	x22, x0
 2bf65f8: 34002ea8     	cbz	w8, 0x2bf6bcc <__start_il2cpp+0x12e5b8>
 2bf65fc: d001b828     	adrp	x8, 0x62fc000
 2bf6600: aa1603e0     	mov	x0, x22
 2bf6604: f9438108     	ldr	x8, [x8, #0x700]
 2bf6608: f9400101     	ldr	x1, [x8]
 2bf660c: f8020c01     	str	x1, [x0, #0x20]!
 2bf6610: 97f781df     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf6614: f9400340     	ldr	x0, [x26]
 2bf6618: b940e408     	ldr	w8, [x0, #0xe4]
 2bf661c: 35000048     	cbnz	w8, 0x2bf6624 <__start_il2cpp+0x12e010>
 2bf6620: 97f7824f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf6624: 9100a3e0     	add	x0, sp, #0x28
 2bf6628: aa1f03e1     	mov	x1, xzr
 2bf662c: 9493d9bf     	bl	0x50ecd28 <__start_il2cpp+0x2624714>
 2bf6630: b9401ac8     	ldr	w8, [x22, #0x18]
 2bf6634: 721f791f     	tst	w8, #0xfffffffe
 2bf6638: 54002ca0     	b.eq	0x2bf6bcc <__start_il2cpp+0x12e5b8>
 2bf663c: aa1603f7     	mov	x23, x22
 2bf6640: aa0003e1     	mov	x1, x0
 2bf6644: f8028ee0     	str	x0, [x23, #0x28]!
 2bf6648: aa1703e0     	mov	x0, x23
 2bf664c: 97f781d0     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf6650: b85f02e8     	ldur	w8, [x23, #-0x10]
 2bf6654: 7100091f     	cmp	w8, #0x2
 2bf6658: 54002ba9     	b.ls	0x2bf6bcc <__start_il2cpp+0x12e5b8>
 2bf665c: d001b828     	adrp	x8, 0x62fc000
 2bf6660: aa1603e0     	mov	x0, x22
 2bf6664: f9437108     	ldr	x8, [x8, #0x6e0]
 2bf6668: f9400101     	ldr	x1, [x8]
 2bf666c: f8030c01     	str	x1, [x0, #0x30]!
 2bf6670: 97f781c7     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf6674: f9407268     	ldr	x8, [x19, #0xe0]
 2bf6678: b4002ec8     	cbz	x8, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf667c: b9406508     	ldr	w8, [x8, #0x64]
 2bf6680: 9100a3e0     	add	x0, sp, #0x28
 2bf6684: aa1f03e1     	mov	x1, xzr
 2bf6688: 1e620100     	scvtf	d0, w8
 2bf668c: 9493d16a     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2bf6690: f90013e0     	str	x0, [sp, #0x20]
 2bf6694: 910083e0     	add	x0, sp, #0x20
 2bf6698: aa1f03e1     	mov	x1, xzr
 2bf669c: 9493d9a3     	bl	0x50ecd28 <__start_il2cpp+0x2624714>
 2bf66a0: b9401ac8     	ldr	w8, [x22, #0x18]
 2bf66a4: 721e751f     	tst	w8, #0xfffffffc
 2bf66a8: 54002920     	b.eq	0x2bf6bcc <__start_il2cpp+0x12e5b8>
 2bf66ac: aa1603f7     	mov	x23, x22
 2bf66b0: aa0003e1     	mov	x1, x0
 2bf66b4: f8038ee0     	str	x0, [x23, #0x38]!
 2bf66b8: aa1703e0     	mov	x0, x23
 2bf66bc: 97f781b4     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf66c0: b85e02e8     	ldur	w8, [x23, #-0x20]
 2bf66c4: 7100111f     	cmp	w8, #0x4
 2bf66c8: 54002829     	b.ls	0x2bf6bcc <__start_il2cpp+0x12e5b8>
 2bf66cc: d001b828     	adrp	x8, 0x62fc000
 2bf66d0: aa1603f7     	mov	x23, x22
 2bf66d4: f9438d08     	ldr	x8, [x8, #0x718]
 2bf66d8: f9400101     	ldr	x1, [x8]
 2bf66dc: f8040ee1     	str	x1, [x23, #0x40]!
 2bf66e0: aa1703e0     	mov	x0, x23
 2bf66e4: 97f781aa     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf66e8: aa1f03e0     	mov	x0, xzr
 2bf66ec: 9493d5a6     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bf66f0: f90013e0     	str	x0, [sp, #0x20]
 2bf66f4: 910083e0     	add	x0, sp, #0x20
 2bf66f8: aa1f03e1     	mov	x1, xzr
 2bf66fc: 9493d98b     	bl	0x50ecd28 <__start_il2cpp+0x2624714>
 2bf6700: b85d82e8     	ldur	w8, [x23, #-0x28]
 2bf6704: 7100151f     	cmp	w8, #0x5
 2bf6708: 54002629     	b.ls	0x2bf6bcc <__start_il2cpp+0x12e5b8>
 2bf670c: aa1603f7     	mov	x23, x22
 2bf6710: aa0003e1     	mov	x1, x0
 2bf6714: f8048ee0     	str	x0, [x23, #0x48]!
 2bf6718: aa1703e0     	mov	x0, x23
 2bf671c: 97f7819c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf6720: b85d02e8     	ldur	w8, [x23, #-0x30]
 2bf6724: 7100191f     	cmp	w8, #0x6
 2bf6728: 54002529     	b.ls	0x2bf6bcc <__start_il2cpp+0x12e5b8>
 2bf672c: d001b828     	adrp	x8, 0x62fc000
 2bf6730: aa1603e0     	mov	x0, x22
 2bf6734: f9438508     	ldr	x8, [x8, #0x708]
 2bf6738: f9400101     	ldr	x1, [x8]
 2bf673c: f8050c01     	str	x1, [x0, #0x50]!
 2bf6740: 97f78193     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf6744: aa1f03e0     	mov	x0, xzr
 2bf6748: 9493d58f     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bf674c: f94017e1     	ldr	x1, [sp, #0x28]
 2bf6750: aa1f03e2     	mov	x2, xzr
 2bf6754: 9493dc9a     	bl	0x50ed9bc <__start_il2cpp+0x26253a8>
 2bf6758: d001b7d9     	adrp	x25, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf675c: 2a0003e8     	mov	w8, w0
 2bf6760: f9470f39     	ldr	x25, [x25, #0xe18]
 2bf6764: 12000108     	and	w8, w8, #0x1
 2bf6768: 390073e8     	strb	w8, [sp, #0x1c]
 2bf676c: f9401720     	ldr	x0, [x25, #0x28]
 2bf6770: b940e409     	ldr	w9, [x0, #0xe4]
 2bf6774: 35000049     	cbnz	w9, 0x2bf677c <__start_il2cpp+0x12e168>
 2bf6778: 97f781f9     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf677c: 910073e0     	add	x0, sp, #0x1c
 2bf6780: aa1f03e1     	mov	x1, xzr
 2bf6784: 9491bcea     	bl	0x5065b2c <__start_il2cpp+0x259d518>
 2bf6788: b9401ac8     	ldr	w8, [x22, #0x18]
 2bf678c: 721d711f     	tst	w8, #0xfffffff8
 2bf6790: 540021e0     	b.eq	0x2bf6bcc <__start_il2cpp+0x12e5b8>
 2bf6794: aa1603f7     	mov	x23, x22
 2bf6798: aa0003e1     	mov	x1, x0
 2bf679c: f8058ee0     	str	x0, [x23, #0x58]!
 2bf67a0: aa1703e0     	mov	x0, x23
 2bf67a4: 97f7817a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf67a8: b85c02e8     	ldur	w8, [x23, #-0x40]
 2bf67ac: 7100211f     	cmp	w8, #0x8
 2bf67b0: 540020e9     	b.ls	0x2bf6bcc <__start_il2cpp+0x12e5b8>
 2bf67b4: d001b828     	adrp	x8, 0x62fc000
 2bf67b8: aa1603e0     	mov	x0, x22
 2bf67bc: f9438908     	ldr	x8, [x8, #0x710]
 2bf67c0: f9400101     	ldr	x1, [x8]
 2bf67c4: f8060c01     	str	x1, [x0, #0x60]!
 2bf67c8: 97f78171     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf67cc: f9407268     	ldr	x8, [x19, #0xe0]
 2bf67d0: b4002408     	cbz	x8, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf67d4: b9406508     	ldr	w8, [x8, #0x64]
 2bf67d8: 9100a3e0     	add	x0, sp, #0x28
 2bf67dc: aa1f03e1     	mov	x1, xzr
 2bf67e0: 1e620100     	scvtf	d0, w8
 2bf67e4: 9493d114     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2bf67e8: aa0003f7     	mov	x23, x0
 2bf67ec: aa1f03e0     	mov	x0, xzr
 2bf67f0: 9493d565     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bf67f4: aa0003e1     	mov	x1, x0
 2bf67f8: aa1703e0     	mov	x0, x23
 2bf67fc: aa1f03e2     	mov	x2, xzr
 2bf6800: 9493dcc0     	bl	0x50edb00 <__start_il2cpp+0x26254ec>
 2bf6804: 12000008     	and	w8, w0, #0x1
 2bf6808: 910073e0     	add	x0, sp, #0x1c
 2bf680c: aa1f03e1     	mov	x1, xzr
 2bf6810: 390073e8     	strb	w8, [sp, #0x1c]
 2bf6814: 9491bcc6     	bl	0x5065b2c <__start_il2cpp+0x259d518>
 2bf6818: b9401ac8     	ldr	w8, [x22, #0x18]
 2bf681c: 7100251f     	cmp	w8, #0x9
 2bf6820: 54001d69     	b.ls	0x2bf6bcc <__start_il2cpp+0x12e5b8>
 2bf6824: aa0003e1     	mov	x1, x0
 2bf6828: aa1603e0     	mov	x0, x22
 2bf682c: f8068c01     	str	x1, [x0, #0x68]!
 2bf6830: 97f78157     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf6834: aa1603e0     	mov	x0, x22
 2bf6838: aa1f03e1     	mov	x1, xzr
 2bf683c: 948e00f0     	bl	0x4f76bfc <__start_il2cpp+0x24ae5e8>
 2bf6840: 9001b81b     	adrp	x27, 0x62f6000
 2bf6844: aa0003f6     	mov	x22, x0
 2bf6848: f9400f7b     	ldr	x27, [x27, #0x18]
 2bf684c: f9400368     	ldr	x8, [x27]
 2bf6850: b940e509     	ldr	w9, [x8, #0xe4]
 2bf6854: 35000069     	cbnz	w9, 0x2bf6860 <__start_il2cpp+0x12e24c>
 2bf6858: aa0803e0     	mov	x0, x8
 2bf685c: 97f781c0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf6860: d001b828     	adrp	x8, 0x62fc000
 2bf6864: aa1603e1     	mov	x1, x22
 2bf6868: aa1f03e2     	mov	x2, xzr
 2bf686c: f9437508     	ldr	x8, [x8, #0x6e8]
 2bf6870: f9400100     	ldr	x0, [x8]
 2bf6874: 97fd5d2d     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2bf6878: aa1f03e0     	mov	x0, xzr
 2bf687c: 9493d542     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bf6880: f94017e1     	ldr	x1, [sp, #0x28]
 2bf6884: aa1f03e2     	mov	x2, xzr
 2bf6888: 9493dc4d     	bl	0x50ed9bc <__start_il2cpp+0x26253a8>
 2bf688c: 37000280     	tbnz	w0, #0x0, 0x2bf68dc <__start_il2cpp+0x12e2c8>
 2bf6890: f9407268     	ldr	x8, [x19, #0xe0]
 2bf6894: b4001de8     	cbz	x8, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf6898: f9400340     	ldr	x0, [x26]
 2bf689c: b9406516     	ldr	w22, [x8, #0x64]
 2bf68a0: b940e409     	ldr	w9, [x0, #0xe4]
 2bf68a4: 35000049     	cbnz	w9, 0x2bf68ac <__start_il2cpp+0x12e298>
 2bf68a8: 97f781ad     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf68ac: 1e6202c0     	scvtf	d0, w22
 2bf68b0: 9100a3e0     	add	x0, sp, #0x28
 2bf68b4: aa1f03e1     	mov	x1, xzr
 2bf68b8: 9493d0df     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2bf68bc: aa0003f6     	mov	x22, x0
 2bf68c0: aa1f03e0     	mov	x0, xzr
 2bf68c4: 9493d530     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bf68c8: aa0003e1     	mov	x1, x0
 2bf68cc: aa1603e0     	mov	x0, x22
 2bf68d0: aa1f03e2     	mov	x2, xzr
 2bf68d4: 9493dc3a     	bl	0x50ed9bc <__start_il2cpp+0x26253a8>
 2bf68d8: 36000580     	tbz	w0, #0x0, 0x2bf6988 <__start_il2cpp+0x12e374>
 2bf68dc: f9406e76     	ldr	x22, [x19, #0xd8]
 2bf68e0: b4001b96     	cbz	x22, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf68e4: f94002c8     	ldr	x8, [x22]
 2bf68e8: b94002b7     	ldr	w23, [x21]
 2bf68ec: f9400301     	ldr	x1, [x24]
 2bf68f0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf68f4: b4000129     	cbz	x9, 0x2bf6918 <__start_il2cpp+0x12e304>
 2bf68f8: f940590a     	ldr	x10, [x8, #0xb0]
 2bf68fc: 9100214a     	add	x10, x10, #0x8
 2bf6900: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf6904: eb01017f     	cmp	x11, x1
 2bf6908: 54000660     	b.eq	0x2bf69d4 <__start_il2cpp+0x12e3c0>
 2bf690c: f1000529     	subs	x9, x9, #0x1
 2bf6910: 9100414a     	add	x10, x10, #0x10
 2bf6914: 54ffff61     	b.ne	0x2bf6900 <__start_il2cpp+0x12e2ec>
 2bf6918: aa1603e0     	mov	x0, x22
 2bf691c: 52800082     	mov	w2, #0x4                // =4
 2bf6920: 97f85e91     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf6924: 14000030     	b	0x2bf69e4 <__start_il2cpp+0x12e3d0>
 2bf6928: 9001b828     	adrp	x8, 0x62fa000
 2bf692c: f9404508     	ldr	x8, [x8, #0x88]
 2bf6930: f9407260     	ldr	x0, [x19, #0xe0]
 2bf6934: f9400108     	ldr	x8, [x8]
 2bf6938: f9405d08     	ldr	x8, [x8, #0xb8]
 2bf693c: b9400109     	ldr	w9, [x8]
 2bf6940: 11000529     	add	w9, w9, #0x1
 2bf6944: b9000109     	str	w9, [x8]
 2bf6948: b4001840     	cbz	x0, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf694c: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2bf6950: 52800021     	mov	w1, #0x1                // =1
 2bf6954: a94657f6     	ldp	x22, x21, [sp, #0x60]
 2bf6958: aa1f03e2     	mov	x2, xzr
 2bf695c: a9455ff8     	ldp	x24, x23, [sp, #0x50]
 2bf6960: a94467fa     	ldp	x26, x25, [sp, #0x40]
 2bf6964: a9436ffe     	ldp	x30, x27, [sp, #0x30]
 2bf6968: 910203ff     	add	sp, sp, #0x80
 2bf696c: 17fea90b     	b	0x2ba0d98 <__start_il2cpp+0xd8784>
 2bf6970: f9407260     	ldr	x0, [x19, #0xe0]
 2bf6974: b40016e0     	cbz	x0, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf6978: 52800021     	mov	w1, #0x1                // =1
 2bf697c: aa1f03e2     	mov	x2, xzr
 2bf6980: 97fea906     	bl	0x2ba0d98 <__start_il2cpp+0xd8784>
 2bf6984: 1400008b     	b	0x2bf6bb0 <__start_il2cpp+0x12e59c>
 2bf6988: f9406e76     	ldr	x22, [x19, #0xd8]
 2bf698c: b4001636     	cbz	x22, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf6990: f94002c8     	ldr	x8, [x22]
 2bf6994: b94002b5     	ldr	w21, [x21]
 2bf6998: f9400301     	ldr	x1, [x24]
 2bf699c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf69a0: b4000129     	cbz	x9, 0x2bf69c4 <__start_il2cpp+0x12e3b0>
 2bf69a4: f940590a     	ldr	x10, [x8, #0xb0]
 2bf69a8: 9100214a     	add	x10, x10, #0x8
 2bf69ac: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf69b0: eb01017f     	cmp	x11, x1
 2bf69b4: 54000900     	b.eq	0x2bf6ad4 <__start_il2cpp+0x12e4c0>
 2bf69b8: f1000529     	subs	x9, x9, #0x1
 2bf69bc: 9100414a     	add	x10, x10, #0x10
 2bf69c0: 54ffff61     	b.ne	0x2bf69ac <__start_il2cpp+0x12e398>
 2bf69c4: aa1603e0     	mov	x0, x22
 2bf69c8: 52800022     	mov	w2, #0x1                // =1
 2bf69cc: 97f85e66     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf69d0: 14000045     	b	0x2bf6ae4 <__start_il2cpp+0x12e4d0>
 2bf69d4: b9400149     	ldr	w9, [x10]
 2bf69d8: 11001129     	add	w9, w9, #0x4
 2bf69dc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf69e0: 9104e100     	add	x0, x8, #0x138
 2bf69e4: a9400808     	ldp	x8, x2, [x0]
 2bf69e8: aa1603e0     	mov	x0, x22
 2bf69ec: 2a1703e1     	mov	w1, w23
 2bf69f0: d63f0100     	blr	x8
 2bf69f4: 9001b828     	adrp	x8, 0x62fa000
 2bf69f8: aa0003f6     	mov	x22, x0
 2bf69fc: 91009280     	add	x0, x20, #0x24
 2bf6a00: f9404508     	ldr	x8, [x8, #0x88]
 2bf6a04: aa1f03e1     	mov	x1, xzr
 2bf6a08: f9400108     	ldr	x8, [x8]
 2bf6a0c: f9405d08     	ldr	x8, [x8, #0xb8]
 2bf6a10: b9400109     	ldr	w9, [x8]
 2bf6a14: 11000529     	add	w9, w9, #0x1
 2bf6a18: b9000109     	str	w9, [x8]
 2bf6a1c: 9494496e     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2bf6a20: d001b828     	adrp	x8, 0x62fc000
 2bf6a24: aa0003e1     	mov	x1, x0
 2bf6a28: aa1f03e2     	mov	x2, xzr
 2bf6a2c: f9437908     	ldr	x8, [x8, #0x6f0]
 2bf6a30: f9400108     	ldr	x8, [x8]
 2bf6a34: aa0803e0     	mov	x0, x8
 2bf6a38: 948dc8da     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2bf6a3c: f9400368     	ldr	x8, [x27]
 2bf6a40: aa0003f7     	mov	x23, x0
 2bf6a44: b940e509     	ldr	w9, [x8, #0xe4]
 2bf6a48: 35000069     	cbnz	w9, 0x2bf6a54 <__start_il2cpp+0x12e440>
 2bf6a4c: aa0803e0     	mov	x0, x8
 2bf6a50: 97f78143     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf6a54: aa1703e0     	mov	x0, x23
 2bf6a58: aa1f03e1     	mov	x1, xzr
 2bf6a5c: 97fd72b4     	bl	0x2b5352c <__start_il2cpp+0x8af18>
 2bf6a60: aa1503e0     	mov	x0, x21
 2bf6a64: aa1f03e1     	mov	x1, xzr
 2bf6a68: 9494495b     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2bf6a6c: d001b828     	adrp	x8, 0x62fc000
 2bf6a70: aa0003e1     	mov	x1, x0
 2bf6a74: aa1f03e2     	mov	x2, xzr
 2bf6a78: f9437d08     	ldr	x8, [x8, #0x6f8]
 2bf6a7c: f9400108     	ldr	x8, [x8]
 2bf6a80: aa0803e0     	mov	x0, x8
 2bf6a84: 948dc8c7     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2bf6a88: aa1f03e1     	mov	x1, xzr
 2bf6a8c: 97fd72a8     	bl	0x2b5352c <__start_il2cpp+0x8af18>
 2bf6a90: b4000a16     	cbz	x22, 0x2bf6bd0 <__start_il2cpp+0x12e5bc>
 2bf6a94: f9402ec0     	ldr	x0, [x22, #0x58]
 2bf6a98: b40009e0     	cbz	x0, 0x2bf6bd4 <__start_il2cpp+0x12e5c0>
 2bf6a9c: 9001b828     	adrp	x8, 0x62fa000
 2bf6aa0: f940a908     	ldr	x8, [x8, #0x150]
 2bf6aa4: b8424289     	ldur	w9, [x20, #0x24]
 2bf6aa8: f9407274     	ldr	x20, [x19, #0xe0]
 2bf6aac: f9400102     	ldr	x2, [x8]
 2bf6ab0: 51000521     	sub	w1, w9, #0x1
 2bf6ab4: 943cc82b     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf6ab8: b4000900     	cbz	x0, 0x2bf6bd8 <__start_il2cpp+0x12e5c4>
 2bf6abc: b4000914     	cbz	x20, 0x2bf6bdc <__start_il2cpp+0x12e5c8>
 2bf6ac0: b9403001     	ldr	w1, [x0, #0x30]
 2bf6ac4: aa1403e0     	mov	x0, x20
 2bf6ac8: aa1f03e2     	mov	x2, xzr
 2bf6acc: 97fea8b3     	bl	0x2ba0d98 <__start_il2cpp+0xd8784>
 2bf6ad0: 14000038     	b	0x2bf6bb0 <__start_il2cpp+0x12e59c>
 2bf6ad4: b9400149     	ldr	w9, [x10]
 2bf6ad8: 11000529     	add	w9, w9, #0x1
 2bf6adc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf6ae0: 9104e100     	add	x0, x8, #0x138
 2bf6ae4: a9400808     	ldp	x8, x2, [x0]
 2bf6ae8: aa1603e0     	mov	x0, x22
 2bf6aec: 2a1503e1     	mov	w1, w21
 2bf6af0: d63f0100     	blr	x8
 2bf6af4: b4000ae0     	cbz	x0, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf6af8: f9400008     	ldr	x8, [x0]
 2bf6afc: b9402682     	ldr	w2, [x20, #0x24]
 2bf6b00: 2a1f03e1     	mov	w1, wzr
 2bf6b04: aa0003f5     	mov	x21, x0
 2bf6b08: a9578d09     	ldp	x9, x3, [x8, #0x178]
 2bf6b0c: d63f0120     	blr	x9
 2bf6b10: f9407260     	ldr	x0, [x19, #0xe0]
 2bf6b14: b40009e0     	cbz	x0, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf6b18: aa1503e1     	mov	x1, x21
 2bf6b1c: aa1f03e2     	mov	x2, xzr
 2bf6b20: 97fea7f0     	bl	0x2ba0ae0 <__start_il2cpp+0xd84cc>
 2bf6b24: f9407260     	ldr	x0, [x19, #0xe0]
 2bf6b28: b4000940     	cbz	x0, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf6b2c: f94017e1     	ldr	x1, [sp, #0x28]
 2bf6b30: aa1f03e2     	mov	x2, xzr
 2bf6b34: 97fea830     	bl	0x2ba0bf4 <__start_il2cpp+0xd85e0>
 2bf6b38: f9406e76     	ldr	x22, [x19, #0xd8]
 2bf6b3c: b40008b6     	cbz	x22, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf6b40: f94002c8     	ldr	x8, [x22]
 2bf6b44: f9400301     	ldr	x1, [x24]
 2bf6b48: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf6b4c: b4000129     	cbz	x9, 0x2bf6b70 <__start_il2cpp+0x12e55c>
 2bf6b50: f940590a     	ldr	x10, [x8, #0xb0]
 2bf6b54: 9100214a     	add	x10, x10, #0x8
 2bf6b58: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf6b5c: eb01017f     	cmp	x11, x1
 2bf6b60: 54000100     	b.eq	0x2bf6b80 <__start_il2cpp+0x12e56c>
 2bf6b64: f1000529     	subs	x9, x9, #0x1
 2bf6b68: 9100414a     	add	x10, x10, #0x10
 2bf6b6c: 54ffff61     	b.ne	0x2bf6b58 <__start_il2cpp+0x12e544>
 2bf6b70: aa1603e0     	mov	x0, x22
 2bf6b74: 52800062     	mov	w2, #0x3                // =3
 2bf6b78: 97f85dfb     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf6b7c: 14000005     	b	0x2bf6b90 <__start_il2cpp+0x12e57c>
 2bf6b80: b9400149     	ldr	w9, [x10]
 2bf6b84: 11000d29     	add	w9, w9, #0x3
 2bf6b88: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf6b8c: 9104e100     	add	x0, x8, #0x138
 2bf6b90: a9400c08     	ldp	x8, x3, [x0]
 2bf6b94: aa1603e0     	mov	x0, x22
 2bf6b98: aa1503e1     	mov	x1, x21
 2bf6b9c: 2a1f03e2     	mov	w2, wzr
 2bf6ba0: d63f0100     	blr	x8
 2bf6ba4: aa1303e0     	mov	x0, x19
 2bf6ba8: aa1403e1     	mov	x1, x20
 2bf6bac: 97fff4f0     	bl	0x2bf3f6c <__start_il2cpp+0x12b958>
 2bf6bb0: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2bf6bb4: a94657f6     	ldp	x22, x21, [sp, #0x60]
 2bf6bb8: a9455ff8     	ldp	x24, x23, [sp, #0x50]
 2bf6bbc: a94467fa     	ldp	x26, x25, [sp, #0x40]
 2bf6bc0: a9436ffe     	ldp	x30, x27, [sp, #0x30]
 2bf6bc4: 910203ff     	add	sp, sp, #0x80
 2bf6bc8: d65f03c0     	ret
 2bf6bcc: 97f78131     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2bf6bd0: 97f7812e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf6bd4: 97f7812d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf6bd8: 97f7812c     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf6bdc: 97f7812b     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf6be0: 14000003     	b	0x2bf6bec <__start_il2cpp+0x12e5d8>
 2bf6be4: 14000002     	b	0x2bf6bec <__start_il2cpp+0x12e5d8>
 2bf6be8: 14000001     	b	0x2bf6bec <__start_il2cpp+0x12e5d8>
 2bf6bec: aa0003f4     	mov	x20, x0
 2bf6bf0: 7100043f     	cmp	w1, #0x1
 2bf6bf4: 54000441     	b.ne	0x2bf6c7c <__start_il2cpp+0x12e668>
 2bf6bf8: aa1403e0     	mov	x0, x20
 2bf6bfc: 94ccbed1     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf6c00: aa0003f4     	mov	x20, x0
 2bf6c04: f9400b20     	ldr	x0, [x25, #0x10]
 2bf6c08: f9400288     	ldr	x8, [x20]
 2bf6c0c: f9400101     	ldr	x1, [x8]
 2bf6c10: 97f78220     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2bf6c14: 36000200     	tbz	w0, #0x0, 0x2bf6c54 <__start_il2cpp+0x12e640>
 2bf6c18: b98013f5     	ldrsw	x21, [sp, #0x10]
 2bf6c1c: f9400288     	ldr	x8, [x20]
 2bf6c20: 910023e9     	add	x9, sp, #0x8
 2bf6c24: f8357928     	str	x8, [x9, x21, lsl #3]
 2bf6c28: 110006a8     	add	w8, w21, #0x1
 2bf6c2c: b90013e8     	str	w8, [sp, #0x10]
 2bf6c30: 94ccbec8     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf6c34: f9407260     	ldr	x0, [x19, #0xe0]
 2bf6c38: b40000c0     	cbz	x0, 0x2bf6c50 <__start_il2cpp+0x12e63c>
 2bf6c3c: 52800021     	mov	w1, #0x1                // =1
 2bf6c40: aa1f03e2     	mov	x2, xzr
 2bf6c44: 97fea855     	bl	0x2ba0d98 <__start_il2cpp+0xd8784>
 2bf6c48: b90013f5     	str	w21, [sp, #0x10]
 2bf6c4c: 17ffffd9     	b	0x2bf6bb0 <__start_il2cpp+0x12e59c>
 2bf6c50: 97f7810e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf6c54: 52800100     	mov	w0, #0x8                // =8
 2bf6c58: 94ccbeda     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2bf6c5c: f9400288     	ldr	x8, [x20]
 2bf6c60: f9000008     	str	x8, [x0]
 2bf6c64: d00199a1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2bf6c68: 91302021     	add	x1, x1, #0xc08
 2bf6c6c: aa1f03e2     	mov	x2, xzr
 2bf6c70: 94ccbed8     	bl	0x5f267d0 <__cxa_throw@plt>
 2bf6c74: aa0003f4     	mov	x20, x0
 2bf6c78: 94ccbeb6     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf6c7c: aa1403e0     	mov	x0, x20
 2bf6c80: 97fb3697     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf6c84: 97eabb72     	bl	0x26a5a4c <.text+0x8ec>

# BubbleItem :: System.Void SetVisual()
# VA 0x2bf6c88 .. 0x2bf6cf0 (next mapped method entry)
 2bf6c88: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf6c8c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf6c90: f9403008     	ldr	x8, [x0, #0x60]
 2bf6c94: b40002c8     	cbz	x8, 0x2bf6cec <__start_il2cpp+0x12e6d8>
 2bf6c98: f9401514     	ldr	x20, [x8, #0x28]
 2bf6c9c: aa0003f3     	mov	x19, x0
 2bf6ca0: 97fff3bb     	bl	0x2bf3b8c <__start_il2cpp+0x12b578>
 2bf6ca4: b4000240     	cbz	x0, 0x2bf6cec <__start_il2cpp+0x12e6d8>
 2bf6ca8: b4000234     	cbz	x20, 0x2bf6cec <__start_il2cpp+0x12e6d8>
 2bf6cac: f9400c01     	ldr	x1, [x0, #0x18]
 2bf6cb0: aa1403e0     	mov	x0, x20
 2bf6cb4: aa1f03e2     	mov	x2, xzr
 2bf6cb8: 94bbe25f     	bl	0x5aef634 <__start_il2cpp+0x3027020>
 2bf6cbc: f9403268     	ldr	x8, [x19, #0x60]
 2bf6cc0: b4000168     	cbz	x8, 0x2bf6cec <__start_il2cpp+0x12e6d8>
 2bf6cc4: f9401500     	ldr	x0, [x8, #0x28]
 2bf6cc8: b4000120     	cbz	x0, 0x2bf6cec <__start_il2cpp+0x12e6d8>
 2bf6ccc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf6cd0: 1e2e1000     	fmov	s0, #1.00000000
 2bf6cd4: 1e2e1001     	fmov	s1, #1.00000000
 2bf6cd8: 1e2e1002     	fmov	s2, #1.00000000
 2bf6cdc: 1e2e1003     	fmov	s3, #1.00000000
 2bf6ce0: aa1f03e1     	mov	x1, xzr
 2bf6ce4: f84207fe     	ldr	x30, [sp], #0x20
 2bf6ce8: 14bbe44a     	b	0x5aefe10 <__start_il2cpp+0x30277fc>
 2bf6cec: 97f780e7     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleItem :: System.Void .ctor()
# VA 0x2bf6cf0 .. 0x2bf6cf4 (next mapped method entry)
 2bf6cf0: 17ffef1f     	b	0x2bf296c <__start_il2cpp+0x12a358>
