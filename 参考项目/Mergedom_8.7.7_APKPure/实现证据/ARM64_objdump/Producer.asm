
# Producer :: System.Void .ctor()
# VA 0x2c0ae88 .. 0x2c0ae90 (next mapped method entry)
 2c0ae88: aa1f03e1     	mov	x1, xzr
 2c0ae8c: 1495132f     	b	0x514fb48 <__start_il2cpp+0x2687534>

# Producer :: BaseItem Produce(System.Int32 itemId, System.Int32 itemLevel, BoardSlot fromProduceBoardSlot, BoardSlot toBoardSlot, System.Boolean lockItem)
# VA 0x2c0b430 .. 0x2c0b7ac (next mapped method entry)
 2c0b430: d101c3ff     	sub	sp, sp, #0x70
 2c0b434: f9000bfe     	str	x30, [sp, #0x10]
 2c0b438: a9026ffc     	stp	x28, x27, [sp, #0x20]
 2c0b43c: a90367fa     	stp	x26, x25, [sp, #0x30]
 2c0b440: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2c0b444: a90557f6     	stp	x22, x21, [sp, #0x50]
 2c0b448: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2c0b44c: f001d83a     	adrp	x26, 0x6712000
 2c0b450: d001b796     	adrp	x22, 0x62fd000
 2c0b454: 2a0503f8     	mov	w24, w5
 2c0b458: 396fbf48     	ldrb	w8, [x26, #0xbef]
 2c0b45c: f9402ed6     	ldr	x22, [x22, #0x58]
 2c0b460: aa0403f5     	mov	x21, x4
 2c0b464: aa0303f4     	mov	x20, x3
 2c0b468: 2a0203f9     	mov	w25, w2
 2c0b46c: 2a0103f7     	mov	w23, w1
 2c0b470: aa0003f3     	mov	x19, x0
 2c0b474: 37000368     	tbnz	w8, #0x0, 0x2c0b4e0 <__start_il2cpp+0x142ecc>
 2c0b478: 9001b740     	adrp	x0, 0x62f3000
 2c0b47c: f9479000     	ldr	x0, [x0, #0xf20]
 2c0b480: 97f72e58     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b484: b001b780     	adrp	x0, 0x62fc000
 2c0b488: f9443800     	ldr	x0, [x0, #0x870]
 2c0b48c: 97f72e55     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b490: d001b760     	adrp	x0, 0x62f9000
 2c0b494: f9474800     	ldr	x0, [x0, #0xe90]
 2c0b498: 97f72e52     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b49c: d001b780     	adrp	x0, 0x62fd000
 2c0b4a0: f9403000     	ldr	x0, [x0, #0x60]
 2c0b4a4: 97f72e4f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b4a8: d001b720     	adrp	x0, 0x62f1000
 2c0b4ac: f9433c00     	ldr	x0, [x0, #0x678]
 2c0b4b0: 97f72e4c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b4b4: d001b780     	adrp	x0, 0x62fd000
 2c0b4b8: f9403400     	ldr	x0, [x0, #0x68]
 2c0b4bc: 97f72e49     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b4c0: d001b780     	adrp	x0, 0x62fd000
 2c0b4c4: f9403800     	ldr	x0, [x0, #0x70]
 2c0b4c8: 97f72e46     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b4cc: d001b780     	adrp	x0, 0x62fd000
 2c0b4d0: f9402c00     	ldr	x0, [x0, #0x58]
 2c0b4d4: 97f72e43     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b4d8: 52800028     	mov	w8, #0x1                // =1
 2c0b4dc: 392fbf48     	strb	w8, [x26, #0xbef]
 2c0b4e0: f94002c0     	ldr	x0, [x22]
 2c0b4e4: a9007fff     	stp	xzr, xzr, [sp]
 2c0b4e8: 97f72ee4     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0b4ec: aa1f03e1     	mov	x1, xzr
 2c0b4f0: aa0003f6     	mov	x22, x0
 2c0b4f4: 94951195     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c0b4f8: b4001596     	cbz	x22, 0x2c0b7a8 <__start_il2cpp+0x143194>
 2c0b4fc: aa1603e0     	mov	x0, x22
 2c0b500: aa1303e1     	mov	x1, x19
 2c0b504: f8010c13     	str	x19, [x0, #0x10]!
 2c0b508: 97f72e21     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0b50c: b40014f5     	cbz	x21, 0x2c0b7a8 <__start_il2cpp+0x143194>
 2c0b510: f9400e7a     	ldr	x26, [x19, #0x18]
 2c0b514: 3900b2bf     	strb	wzr, [x21, #0x2c]
 2c0b518: b400149a     	cbz	x26, 0x2c0b7a8 <__start_il2cpp+0x143194>
 2c0b51c: 9001b75b     	adrp	x27, 0x62f3000
 2c0b520: f9400348     	ldr	x8, [x26]
 2c0b524: f947937b     	ldr	x27, [x27, #0xf20]
 2c0b528: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0b52c: f9400361     	ldr	x1, [x27]
 2c0b530: b4000129     	cbz	x9, 0x2c0b554 <__start_il2cpp+0x142f40>
 2c0b534: f940590a     	ldr	x10, [x8, #0xb0]
 2c0b538: 9100214a     	add	x10, x10, #0x8
 2c0b53c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0b540: eb01017f     	cmp	x11, x1
 2c0b544: 54000100     	b.eq	0x2c0b564 <__start_il2cpp+0x142f50>
 2c0b548: f1000529     	subs	x9, x9, #0x1
 2c0b54c: 9100414a     	add	x10, x10, #0x10
 2c0b550: 54ffff61     	b.ne	0x2c0b53c <__start_il2cpp+0x142f28>
 2c0b554: aa1a03e0     	mov	x0, x26
 2c0b558: 52800022     	mov	w2, #0x1                // =1
 2c0b55c: 97f80b82     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0b560: 14000005     	b	0x2c0b574 <__start_il2cpp+0x142f60>
 2c0b564: b9400149     	ldr	w9, [x10]
 2c0b568: 11000529     	add	w9, w9, #0x1
 2c0b56c: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0b570: 9104e100     	add	x0, x8, #0x138
 2c0b574: a9400808     	ldp	x8, x2, [x0]
 2c0b578: aa1a03e0     	mov	x0, x26
 2c0b57c: 2a1703e1     	mov	w1, w23
 2c0b580: d63f0100     	blr	x8
 2c0b584: aa1603f7     	mov	x23, x22
 2c0b588: aa0003e1     	mov	x1, x0
 2c0b58c: f8018ee0     	str	x0, [x23, #0x18]!
 2c0b590: aa1703e0     	mov	x0, x23
 2c0b594: 97f72dfe     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0b598: f94002e0     	ldr	x0, [x23]
 2c0b59c: b4001060     	cbz	x0, 0x2c0b7a8 <__start_il2cpp+0x143194>
 2c0b5a0: f9400008     	ldr	x8, [x0]
 2c0b5a4: 12000301     	and	w1, w24, #0x1
 2c0b5a8: 2a1903e2     	mov	w2, w25
 2c0b5ac: a9578d09     	ldp	x9, x3, [x8, #0x178]
 2c0b5b0: d63f0120     	blr	x9
 2c0b5b4: f94002e1     	ldr	x1, [x23]
 2c0b5b8: aa1503e0     	mov	x0, x21
 2c0b5bc: 2a1f03e2     	mov	w2, wzr
 2c0b5c0: aa1f03e3     	mov	x3, xzr
 2c0b5c4: 97fe50d2     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2c0b5c8: f94002ea     	ldr	x10, [x23]
 2c0b5cc: b4000eea     	cbz	x10, 0x2c0b7a8 <__start_il2cpp+0x143194>
 2c0b5d0: f940294b     	ldr	x11, [x10, #0x50]
 2c0b5d4: b4000eab     	cbz	x11, 0x2c0b7a8 <__start_il2cpp+0x143194>
 2c0b5d8: f9400e78     	ldr	x24, [x19, #0x18]
 2c0b5dc: b4000e78     	cbz	x24, 0x2c0b7a8 <__start_il2cpp+0x143194>
 2c0b5e0: f9400308     	ldr	x8, [x24]
 2c0b5e4: b9403179     	ldr	w25, [x11, #0x30]
 2c0b5e8: b940455a     	ldr	w26, [x10, #0x44]
 2c0b5ec: f9400361     	ldr	x1, [x27]
 2c0b5f0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0b5f4: b4000129     	cbz	x9, 0x2c0b618 <__start_il2cpp+0x143004>
 2c0b5f8: f940590a     	ldr	x10, [x8, #0xb0]
 2c0b5fc: 9100214a     	add	x10, x10, #0x8
 2c0b600: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0b604: eb01017f     	cmp	x11, x1
 2c0b608: 54000100     	b.eq	0x2c0b628 <__start_il2cpp+0x143014>
 2c0b60c: f1000529     	subs	x9, x9, #0x1
 2c0b610: 9100414a     	add	x10, x10, #0x10
 2c0b614: 54ffff61     	b.ne	0x2c0b600 <__start_il2cpp+0x142fec>
 2c0b618: aa1803e0     	mov	x0, x24
 2c0b61c: 52800102     	mov	w2, #0x8                // =8
 2c0b620: 97f80b51     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0b624: 14000005     	b	0x2c0b638 <__start_il2cpp+0x143024>
 2c0b628: b9400149     	ldr	w9, [x10]
 2c0b62c: 11002129     	add	w9, w9, #0x8
 2c0b630: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0b634: 9104e100     	add	x0, x8, #0x138
 2c0b638: a9400c08     	ldp	x8, x3, [x0]
 2c0b63c: aa1803e0     	mov	x0, x24
 2c0b640: 2a1903e1     	mov	w1, w25
 2c0b644: 2a1a03e2     	mov	w2, w26
 2c0b648: d63f0100     	blr	x8
 2c0b64c: f9401678     	ldr	x24, [x19, #0x28]
 2c0b650: a9007fff     	stp	xzr, xzr, [sp]
 2c0b654: b4000ab4     	cbz	x20, 0x2c0b7a8 <__start_il2cpp+0x143194>
 2c0b658: f9401a81     	ldr	x1, [x20, #0x30]
 2c0b65c: 910003e0     	mov	x0, sp
 2c0b660: 910003f9     	mov	x25, sp
 2c0b664: f90003e1     	str	x1, [sp]
 2c0b668: 97f72dc9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0b66c: f94002e1     	ldr	x1, [x23]
 2c0b670: 91002320     	add	x0, x25, #0x8
 2c0b674: f90007e1     	str	x1, [sp, #0x8]
 2c0b678: 97f72dc5     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0b67c: b4000978     	cbz	x24, 0x2c0b7a8 <__start_il2cpp+0x143194>
 2c0b680: d001b788     	adrp	x8, 0x62fd000
 2c0b684: b001b799     	adrp	x25, 0x62fc000
 2c0b688: d001b73a     	adrp	x26, 0x62f1000
 2c0b68c: f9403108     	ldr	x8, [x8, #0x60]
 2c0b690: d001b79b     	adrp	x27, 0x62fd000
 2c0b694: f9443b39     	ldr	x25, [x25, #0x870]
 2c0b698: f9433f5a     	ldr	x26, [x26, #0x678]
 2c0b69c: f940377b     	ldr	x27, [x27, #0x68]
 2c0b6a0: aa1803e0     	mov	x0, x24
 2c0b6a4: a9400be1     	ldp	x1, x2, [sp]
 2c0b6a8: f9400103     	ldr	x3, [x8]
 2c0b6ac: 94285f98     	bl	0x362350c <__start_il2cpp+0xb5aef8>
 2c0b6b0: f9400320     	ldr	x0, [x25]
 2c0b6b4: 97f72e71     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0b6b8: aa1f03e1     	mov	x1, xzr
 2c0b6bc: aa0003f8     	mov	x24, x0
 2c0b6c0: 97ffb7ab     	bl	0x2bf956c <__start_il2cpp+0x130f58>
 2c0b6c4: f9400340     	ldr	x0, [x26]
 2c0b6c8: 97f72e6c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0b6cc: f9400362     	ldr	x2, [x27]
 2c0b6d0: aa1603e1     	mov	x1, x22
 2c0b6d4: aa1f03e3     	mov	x3, xzr
 2c0b6d8: aa0003f9     	mov	x25, x0
 2c0b6dc: 940b7a03     	bl	0x2ee9ee8 <__start_il2cpp+0x4218d4>
 2c0b6e0: b4000658     	cbz	x24, 0x2c0b7a8 <__start_il2cpp+0x143194>
 2c0b6e4: d001b79c     	adrp	x28, 0x62fd000
 2c0b6e8: d001b77b     	adrp	x27, 0x62f9000
 2c0b6ec: aa1803e0     	mov	x0, x24
 2c0b6f0: f9403b9c     	ldr	x28, [x28, #0x70]
 2c0b6f4: f9474b7b     	ldr	x27, [x27, #0xe90]
 2c0b6f8: aa1903e1     	mov	x1, x25
 2c0b6fc: f8030c19     	str	x25, [x0, #0x30]!
 2c0b700: 97f72da3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0b704: f9400340     	ldr	x0, [x26]
 2c0b708: 97f72e5c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0b70c: f9400382     	ldr	x2, [x28]
 2c0b710: aa1603e1     	mov	x1, x22
 2c0b714: aa1f03e3     	mov	x3, xzr
 2c0b718: aa0003f9     	mov	x25, x0
 2c0b71c: 940b79f3     	bl	0x2ee9ee8 <__start_il2cpp+0x4218d4>
 2c0b720: aa1803e0     	mov	x0, x24
 2c0b724: aa1903e1     	mov	x1, x25
 2c0b728: f8028c19     	str	x25, [x0, #0x28]!
 2c0b72c: 97f72d98     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0b730: f9400360     	ldr	x0, [x27]
 2c0b734: b940e408     	ldr	w8, [x0, #0xe4]
 2c0b738: 35000068     	cbnz	w8, 0x2c0b744 <__start_il2cpp+0x143130>
 2c0b73c: 97f72e08     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b740: f9400360     	ldr	x0, [x27]
 2c0b744: f9405c08     	ldr	x8, [x0, #0xb8]
 2c0b748: f9401508     	ldr	x8, [x8, #0x28]
 2c0b74c: b40002e8     	cbz	x8, 0x2c0b7a8 <__start_il2cpp+0x143194>
 2c0b750: f94002e1     	ldr	x1, [x23]
 2c0b754: f9400d09     	ldr	x9, [x8, #0x18]
 2c0b758: aa1503e2     	mov	x2, x21
 2c0b75c: f9402100     	ldr	x0, [x8, #0x40]
 2c0b760: f9401505     	ldr	x5, [x8, #0x28]
 2c0b764: aa1403e3     	mov	x3, x20
 2c0b768: aa1803e4     	mov	x4, x24
 2c0b76c: d63f0120     	blr	x9
 2c0b770: f9400268     	ldr	x8, [x19]
 2c0b774: f94002e1     	ldr	x1, [x23]
 2c0b778: aa1303e0     	mov	x0, x19
 2c0b77c: a9588909     	ldp	x9, x2, [x8, #0x188]
 2c0b780: d63f0120     	blr	x9
 2c0b784: f94002e0     	ldr	x0, [x23]
 2c0b788: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c0b78c: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c0b790: f9400bfe     	ldr	x30, [sp, #0x10]
 2c0b794: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c0b798: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2c0b79c: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2c0b7a0: 9101c3ff     	add	sp, sp, #0x70
 2c0b7a4: d65f03c0     	ret
 2c0b7a8: 97f72e38     	bl	0x29d7088 <mono_class_get_checked+0x970>

# Producer :: System.Void OnProduceSucceed(BaseItem producedItem)
# VA 0x2c0c528 .. 0x2c0c52c (next mapped method entry)
 2c0c528: d65f03c0     	ret

# Producer :: System.Void StopProductionCoroutines()
# VA 0x2c0ce5c .. 0x2c0ce60 (next mapped method entry)
 2c0ce5c: d65f03c0     	ret

# Producer :: System.Void ResumeProductionCoroutines()
# VA 0x2c0ce60 .. 0x2c0ce64 (next mapped method entry)
 2c0ce60: d65f03c0     	ret

# Producer :: System.Void OnProduceFailed(Producer+ProduceFailTypes produceFailTypes)
# VA 0x2c0e6d4 .. 0x2c0e6d8 (next mapped method entry)
 2c0e6d4: d65f03c0     	ret
