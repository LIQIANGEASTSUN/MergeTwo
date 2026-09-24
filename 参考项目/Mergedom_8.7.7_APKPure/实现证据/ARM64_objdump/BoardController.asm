
# BoardController :: BoardData get_boardData()
# VA 0x2ba5f94 .. 0x2ba5fb8 (next mapped method entry)
 2ba5f94: f81f0ffe     	str	x30, [sp, #-0x10]!
 2ba5f98: f9401c08     	ldr	x8, [x0, #0x38]
 2ba5f9c: b40000c8     	cbz	x8, 0x2ba5fb4 <__start_il2cpp+0xdd9a0>
 2ba5fa0: f9402500     	ldr	x0, [x8, #0x48]
 2ba5fa4: b4000080     	cbz	x0, 0x2ba5fb4 <__start_il2cpp+0xdd9a0>
 2ba5fa8: aa1f03e1     	mov	x1, xzr
 2ba5fac: f84107fe     	ldr	x30, [sp], #0x10
 2ba5fb0: 140ced95     	b	0x2ee1604 <__start_il2cpp+0x418ff0>
 2ba5fb4: 97f8c435     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: UnityEngine.Vector2 IBoardController.GetMinPosition()
# VA 0x2ba5fb8 .. 0x2ba5fc0 (next mapped method entry)
 2ba5fb8: 2d560400     	ldp	s0, s1, [x0, #0xb0]
 2ba5fbc: d65f03c0     	ret

# BoardController :: UnityEngine.Vector2 IBoardController.GetMaxPosition()
# VA 0x2ba5fc0 .. 0x2ba5fc8 (next mapped method entry)
 2ba5fc0: 2d570400     	ldp	s0, s1, [x0, #0xb8]
 2ba5fc4: d65f03c0     	ret

# BoardController :: BoardSlotIndicator IBoardController.GetBoardSlotIndicator()
# VA 0x2ba5fc8 .. 0x2ba5fd0 (next mapped method entry)
 2ba5fc8: f9403c00     	ldr	x0, [x0, #0x78]
 2ba5fcc: d65f03c0     	ret

# BoardController :: BoardSlot[][] IBoardController.GetBoardSlots()
# VA 0x2ba5fd0 .. 0x2ba5fd8 (next mapped method entry)
 2ba5fd0: f9405000     	ldr	x0, [x0, #0xa0]
 2ba5fd4: d65f03c0     	ret

# BoardController :: Cysharp.Threading.Tasks.UniTask Initialize()
# VA 0x2ba5fd8 .. 0x2ba6074 (next mapped method entry)
 2ba5fd8: d10103ff     	sub	sp, sp, #0x40
 2ba5fdc: a90257fe     	stp	x30, x21, [sp, #0x20]
 2ba5fe0: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2ba5fe4: b001db74     	adrp	x20, 0x6712000
 2ba5fe8: b001bab5     	adrp	x21, 0x62fa000
 2ba5fec: aa0003f3     	mov	x19, x0
 2ba5ff0: 39640e88     	ldrb	w8, [x20, #0x903]
 2ba5ff4: f941deb5     	ldr	x21, [x21, #0x3b8]
 2ba5ff8: 370000c8     	tbnz	w8, #0x0, 0x2ba6010 <__start_il2cpp+0xdd9fc>
 2ba5ffc: b001baa0     	adrp	x0, 0x62fa000
 2ba6000: f941dc00     	ldr	x0, [x0, #0x3b8]
 2ba6004: 97f8c377     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6008: 52800028     	mov	w8, #0x1                // =1
 2ba600c: 39240e88     	strb	w8, [x20, #0x903]
 2ba6010: 6f00e400     	movi	v0.2d, #0000000000000000
 2ba6014: 910003f4     	mov	x20, sp
 2ba6018: aa1f03e1     	mov	x1, xzr
 2ba601c: b27d0280     	orr	x0, x20, #0x8
 2ba6020: ad0003e0     	stp	q0, q0, [sp]
 2ba6024: 97f8c35a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba6028: 91006280     	add	x0, x20, #0x18
 2ba602c: aa1303e1     	mov	x1, x19
 2ba6030: f9000ff3     	str	x19, [sp, #0x18]
 2ba6034: 97f8c356     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba6038: f94002a0     	ldr	x0, [x21]
 2ba603c: 12800009     	mov	w9, #-0x1               // =-1
 2ba6040: b90003e9     	str	w9, [sp]
 2ba6044: f9401c08     	ldr	x8, [x0, #0x38]
 2ba6048: b5000048     	cbnz	x8, 0x2ba6050 <__start_il2cpp+0xdda3c>
 2ba604c: 97f9a00e     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2ba6050: 910003e0     	mov	x0, sp
 2ba6054: 940011fb     	bl	0x2baa840 <__start_il2cpp+0xe222c>
 2ba6058: b27d0280     	orr	x0, x20, #0x8
 2ba605c: aa1f03e1     	mov	x1, xzr
 2ba6060: 97fe0eba     	bl	0x2b29b48 <__start_il2cpp+0x61534>
 2ba6064: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2ba6068: a94257fe     	ldp	x30, x21, [sp, #0x20]
 2ba606c: 910103ff     	add	sp, sp, #0x40
 2ba6070: d65f03c0     	ret

# BoardController :: System.Void DestroyActivityItems()
# VA 0x2ba6074 .. 0x2ba62c8 (next mapped method entry)
 2ba6074: d101c3ff     	sub	sp, sp, #0x70
 2ba6078: a9017bfd     	stp	x29, x30, [sp, #0x10]
 2ba607c: a9026ffc     	stp	x28, x27, [sp, #0x20]
 2ba6080: a90367fa     	stp	x26, x25, [sp, #0x30]
 2ba6084: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2ba6088: a90557f6     	stp	x22, x21, [sp, #0x50]
 2ba608c: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2ba6090: 9001db74     	adrp	x20, 0x6712000
 2ba6094: aa0003f3     	mov	x19, x0
 2ba6098: 39641288     	ldrb	w8, [x20, #0x904]
 2ba609c: 37000188     	tbnz	w8, #0x0, 0x2ba60cc <__start_il2cpp+0xddab8>
 2ba60a0: b001ba60     	adrp	x0, 0x62f3000
 2ba60a4: f9479000     	ldr	x0, [x0, #0xf20]
 2ba60a8: 97f8c34e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba60ac: 9001baa0     	adrp	x0, 0x62fa000
 2ba60b0: f9405000     	ldr	x0, [x0, #0xa0]
 2ba60b4: 97f8c34b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba60b8: 9001baa0     	adrp	x0, 0x62fa000
 2ba60bc: f941e000     	ldr	x0, [x0, #0x3c0]
 2ba60c0: 97f8c348     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba60c4: 52800028     	mov	w8, #0x1                // =1
 2ba60c8: 39241288     	strb	w8, [x20, #0x904]
 2ba60cc: f9403668     	ldr	x8, [x19, #0x68]
 2ba60d0: a9007fff     	stp	xzr, xzr, [sp]
 2ba60d4: b4000f68     	cbz	x8, 0x2ba62c0 <__start_il2cpp+0xddcac>
 2ba60d8: b9401909     	ldr	w9, [x8, #0x18]
 2ba60dc: 7100053f     	cmp	w9, #0x1
 2ba60e0: 54000e0b     	b.lt	0x2ba62a0 <__start_il2cpp+0xddc8c>
 2ba60e4: 9001bab4     	adrp	x20, 0x62fa000
 2ba60e8: 9001bab8     	adrp	x24, 0x62fa000
 2ba60ec: b001ba79     	adrp	x25, 0x62f3000
 2ba60f0: f9405294     	ldr	x20, [x20, #0xa0]
 2ba60f4: f941e318     	ldr	x24, [x24, #0x3c0]
 2ba60f8: f9479339     	ldr	x25, [x25, #0xf20]
 2ba60fc: aa1f03f7     	mov	x23, xzr
 2ba6100: 910003fa     	mov	x26, sp
 2ba6104: 9001db7b     	adrp	x27, 0x6712000
 2ba6108: 5280003c     	mov	w28, #0x1               // =1
 2ba610c: 2a1f03fd     	mov	w29, wzr
 2ba6110: b9401d09     	ldr	w9, [x8, #0x1c]
 2ba6114: 6b0903bf     	cmp	w29, w9
 2ba6118: 54000bca     	b.ge	0x2ba6290 <__start_il2cpp+0xddc7c>
 2ba611c: f9405268     	ldr	x8, [x19, #0xa0]
 2ba6120: b4000d08     	cbz	x8, 0x2ba62c0 <__start_il2cpp+0xddcac>
 2ba6124: b9401909     	ldr	w9, [x8, #0x18]
 2ba6128: eb0902ff     	cmp	x23, x9
 2ba612c: 54000cc2     	b.hs	0x2ba62c4 <__start_il2cpp+0xddcb0>
 2ba6130: 8b170d08     	add	x8, x8, x23, lsl #3
 2ba6134: f9401108     	ldr	x8, [x8, #0x20]
 2ba6138: b4000c48     	cbz	x8, 0x2ba62c0 <__start_il2cpp+0xddcac>
 2ba613c: b9401909     	ldr	w9, [x8, #0x18]
 2ba6140: 6b0903bf     	cmp	w29, w9
 2ba6144: 54000c02     	b.hs	0x2ba62c4 <__start_il2cpp+0xddcb0>
 2ba6148: 8b3dcd08     	add	x8, x8, w29, sxtw #3
 2ba614c: f9401116     	ldr	x22, [x8, #0x20]
 2ba6150: b4000b96     	cbz	x22, 0x2ba62c0 <__start_il2cpp+0xddcac>
 2ba6154: aa1603e0     	mov	x0, x22
 2ba6158: 97ffe0ec     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba615c: 37000920     	tbnz	w0, #0x0, 0x2ba6280 <__start_il2cpp+0xddc6c>
 2ba6160: f9401ac8     	ldr	x8, [x22, #0x30]
 2ba6164: b4000ae8     	cbz	x8, 0x2ba62c0 <__start_il2cpp+0xddcac>
 2ba6168: f9402908     	ldr	x8, [x8, #0x50]
 2ba616c: b4000aa8     	cbz	x8, 0x2ba62c0 <__start_il2cpp+0xddcac>
 2ba6170: f9400280     	ldr	x0, [x20]
 2ba6174: b9403115     	ldr	w21, [x8, #0x30]
 2ba6178: b940e409     	ldr	w9, [x0, #0xe4]
 2ba617c: 35000049     	cbnz	w9, 0x2ba6184 <__start_il2cpp+0xddb70>
 2ba6180: 97f8c377     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba6184: 39654368     	ldrb	w8, [x27, #0x950]
 2ba6188: 35000088     	cbnz	w8, 0x2ba6198 <__start_il2cpp+0xddb84>
 2ba618c: aa1403e0     	mov	x0, x20
 2ba6190: 97f8c314     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6194: 3925437c     	strb	w28, [x27, #0x950]
 2ba6198: f9400280     	ldr	x0, [x20]
 2ba619c: b940e408     	ldr	w8, [x0, #0xe4]
 2ba61a0: 35000068     	cbnz	w8, 0x2ba61ac <__start_il2cpp+0xddb98>
 2ba61a4: 97f8c36e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba61a8: f9400280     	ldr	x0, [x20]
 2ba61ac: f9405c08     	ldr	x8, [x0, #0xb8]
 2ba61b0: b9400108     	ldr	w8, [x8]
 2ba61b4: 6b0802bf     	cmp	w21, w8
 2ba61b8: 54000641     	b.ne	0x2ba6280 <__start_il2cpp+0xddc6c>
 2ba61bc: f9401ad5     	ldr	x21, [x22, #0x30]
 2ba61c0: aa1603e0     	mov	x0, x22
 2ba61c4: aa1f03e1     	mov	x1, xzr
 2ba61c8: 52800022     	mov	w2, #0x1                // =1
 2ba61cc: 97ffe5d0     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2ba61d0: f9402a76     	ldr	x22, [x19, #0x50]
 2ba61d4: a9007fff     	stp	xzr, xzr, [sp]
 2ba61d8: b4000755     	cbz	x21, 0x2ba62c0 <__start_il2cpp+0xddcac>
 2ba61dc: f9402aa8     	ldr	x8, [x21, #0x50]
 2ba61e0: b4000708     	cbz	x8, 0x2ba62c0 <__start_il2cpp+0xddcac>
 2ba61e4: b9403108     	ldr	w8, [x8, #0x30]
 2ba61e8: b94046a9     	ldr	w9, [x21, #0x44]
 2ba61ec: 91002340     	add	x0, x26, #0x8
 2ba61f0: aa1503e1     	mov	x1, x21
 2ba61f4: f90007f5     	str	x21, [sp, #0x8]
 2ba61f8: 290027e8     	stp	w8, w9, [sp]
 2ba61fc: 97f8c2e4     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba6200: b4000616     	cbz	x22, 0x2ba62c0 <__start_il2cpp+0xddcac>
 2ba6204: a9400be1     	ldp	x1, x2, [sp]
 2ba6208: aa1603e0     	mov	x0, x22
 2ba620c: f9400303     	ldr	x3, [x24]
 2ba6210: 9429f520     	bl	0x3623690 <__start_il2cpp+0xb5b07c>
 2ba6214: f9401676     	ldr	x22, [x19, #0x28]
 2ba6218: b4000556     	cbz	x22, 0x2ba62c0 <__start_il2cpp+0xddcac>
 2ba621c: f94002c8     	ldr	x8, [x22]
 2ba6220: f9400321     	ldr	x1, [x25]
 2ba6224: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba6228: b4000129     	cbz	x9, 0x2ba624c <__start_il2cpp+0xddc38>
 2ba622c: f940590a     	ldr	x10, [x8, #0xb0]
 2ba6230: 9100214a     	add	x10, x10, #0x8
 2ba6234: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba6238: eb01017f     	cmp	x11, x1
 2ba623c: 54000100     	b.eq	0x2ba625c <__start_il2cpp+0xddc48>
 2ba6240: f1000529     	subs	x9, x9, #0x1
 2ba6244: 9100414a     	add	x10, x10, #0x10
 2ba6248: 54ffff61     	b.ne	0x2ba6234 <__start_il2cpp+0xddc20>
 2ba624c: aa1603e0     	mov	x0, x22
 2ba6250: 52800062     	mov	w2, #0x3                // =3
 2ba6254: 97f9a044     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba6258: 14000005     	b	0x2ba626c <__start_il2cpp+0xddc58>
 2ba625c: b9400149     	ldr	w9, [x10]
 2ba6260: 11000d29     	add	w9, w9, #0x3
 2ba6264: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba6268: 9104e100     	add	x0, x8, #0x138
 2ba626c: a9400c08     	ldp	x8, x3, [x0]
 2ba6270: aa1603e0     	mov	x0, x22
 2ba6274: aa1503e1     	mov	x1, x21
 2ba6278: 2a1f03e2     	mov	w2, wzr
 2ba627c: d63f0100     	blr	x8
 2ba6280: f9403668     	ldr	x8, [x19, #0x68]
 2ba6284: 110007bd     	add	w29, w29, #0x1
 2ba6288: b5fff448     	cbnz	x8, 0x2ba6110 <__start_il2cpp+0xddafc>
 2ba628c: 1400000d     	b	0x2ba62c0 <__start_il2cpp+0xddcac>
 2ba6290: b9801909     	ldrsw	x9, [x8, #0x18]
 2ba6294: 910006f7     	add	x23, x23, #0x1
 2ba6298: eb0902ff     	cmp	x23, x9
 2ba629c: 54fff38b     	b.lt	0x2ba610c <__start_il2cpp+0xddaf8>
 2ba62a0: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2ba62a4: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2ba62a8: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2ba62ac: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2ba62b0: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2ba62b4: a9417bfd     	ldp	x29, x30, [sp, #0x10]
 2ba62b8: 9101c3ff     	add	sp, sp, #0x70
 2ba62bc: d65f03c0     	ret
 2ba62c0: 97f8c372     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba62c4: 97f8c373     	bl	0x29d7090 <mono_class_get_checked+0x978>

# BoardController :: BoardPivots GetBoardPivots()
# VA 0x2ba62c8 .. 0x2ba6318 (next mapped method entry)
 2ba62c8: f81e0ffe     	str	x30, [sp, #-0x20]!
 2ba62cc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba62d0: 9001db74     	adrp	x20, 0x6712000
 2ba62d4: aa0003f3     	mov	x19, x0
 2ba62d8: 39641688     	ldrb	w8, [x20, #0x905]
 2ba62dc: 370000c8     	tbnz	w8, #0x0, 0x2ba62f4 <__start_il2cpp+0xddce0>
 2ba62e0: 9001baa0     	adrp	x0, 0x62fa000
 2ba62e4: f941e400     	ldr	x0, [x0, #0x3c8]
 2ba62e8: 97f8c2be     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba62ec: 52800028     	mov	w8, #0x1                // =1
 2ba62f0: 39241688     	strb	w8, [x20, #0x905]
 2ba62f4: f9403260     	ldr	x0, [x19, #0x60]
 2ba62f8: b40000e0     	cbz	x0, 0x2ba6314 <__start_il2cpp+0xddd00>
 2ba62fc: 9001baa8     	adrp	x8, 0x62fa000
 2ba6300: f941e508     	ldr	x8, [x8, #0x3c8]
 2ba6304: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba6308: f9400101     	ldr	x1, [x8]
 2ba630c: f84207fe     	ldr	x30, [sp], #0x20
 2ba6310: 141fea00     	b	0x33a0b10 <__start_il2cpp+0x8d84fc>
 2ba6314: 97f8c35d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void OnDestroy()
# VA 0x2ba6318 .. 0x2ba6414 (next mapped method entry)
 2ba6318: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ba631c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba6320: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba6324: 9001db74     	adrp	x20, 0x6712000
 2ba6328: aa0003f3     	mov	x19, x0
 2ba632c: 39641a88     	ldrb	w8, [x20, #0x906]
 2ba6330: 370001e8     	tbnz	w8, #0x0, 0x2ba636c <__start_il2cpp+0xddd58>
 2ba6334: 9001ba60     	adrp	x0, 0x62f2000
 2ba6338: f943f000     	ldr	x0, [x0, #0x7e0]
 2ba633c: 97f8c2a9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6340: 9001baa0     	adrp	x0, 0x62fa000
 2ba6344: f941e800     	ldr	x0, [x0, #0x3d0]
 2ba6348: 97f8c2a6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba634c: f001ba80     	adrp	x0, 0x62f9000
 2ba6350: f943e000     	ldr	x0, [x0, #0x7c0]
 2ba6354: 97f8c2a3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6358: d001ba60     	adrp	x0, 0x62f4000
 2ba635c: f9462800     	ldr	x0, [x0, #0xc50]
 2ba6360: 97f8c2a0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6364: 52800028     	mov	w8, #0x1                // =1
 2ba6368: 39241a88     	strb	w8, [x20, #0x906]
 2ba636c: f9401e68     	ldr	x8, [x19, #0x38]
 2ba6370: b4000508     	cbz	x8, 0x2ba6410 <__start_il2cpp+0xdddfc>
 2ba6374: f9402500     	ldr	x0, [x8, #0x48]
 2ba6378: b40004c0     	cbz	x0, 0x2ba6410 <__start_il2cpp+0xdddfc>
 2ba637c: d001ba74     	adrp	x20, 0x62f4000
 2ba6380: aa1f03e1     	mov	x1, xzr
 2ba6384: f9462a94     	ldr	x20, [x20, #0xc50]
 2ba6388: f8028c1f     	str	xzr, [x0, #0x28]!
 2ba638c: 97f8c280     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba6390: f9406a60     	ldr	x0, [x19, #0xd0]
 2ba6394: b4000060     	cbz	x0, 0x2ba63a0 <__start_il2cpp+0xddd8c>
 2ba6398: aa1f03e1     	mov	x1, xzr
 2ba639c: 949735a9     	bl	0x5173a40 <__start_il2cpp+0x26ab42c>
 2ba63a0: f9400280     	ldr	x0, [x20]
 2ba63a4: 9001ba76     	adrp	x22, 0x62f2000
 2ba63a8: 9001bab5     	adrp	x21, 0x62fa000
 2ba63ac: f943f2d6     	ldr	x22, [x22, #0x7e0]
 2ba63b0: b940e408     	ldr	w8, [x0, #0xe4]
 2ba63b4: f941eab5     	ldr	x21, [x21, #0x3d0]
 2ba63b8: 35000068     	cbnz	w8, 0x2ba63c4 <__start_il2cpp+0xdddb0>
 2ba63bc: 97f8c2e8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba63c0: f9400280     	ldr	x0, [x20]
 2ba63c4: f9405c08     	ldr	x8, [x0, #0xb8]
 2ba63c8: f94002c0     	ldr	x0, [x22]
 2ba63cc: f9400d14     	ldr	x20, [x8, #0x18]
 2ba63d0: 97f8c32a     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba63d4: f94002a2     	ldr	x2, [x21]
 2ba63d8: aa1303e1     	mov	x1, x19
 2ba63dc: aa1f03e3     	mov	x3, xzr
 2ba63e0: aa0003f5     	mov	x21, x0
 2ba63e4: 9492f051     	bl	0x5062528 <__start_il2cpp+0x2599f14>
 2ba63e8: b4000154     	cbz	x20, 0x2ba6410 <__start_il2cpp+0xdddfc>
 2ba63ec: f001ba88     	adrp	x8, 0x62f9000
 2ba63f0: aa1403e0     	mov	x0, x20
 2ba63f4: aa1503e1     	mov	x1, x21
 2ba63f8: f943e108     	ldr	x8, [x8, #0x7c0]
 2ba63fc: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba6400: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba6404: f9400102     	ldr	x2, [x8]
 2ba6408: f84307fe     	ldr	x30, [sp], #0x30
 2ba640c: 143e0ff3     	b	0x3b2a3d8 <__start_il2cpp+0x1061dc4>
 2ba6410: 97f8c31e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void SelectBoardSlot(BoardSlot boardSlot)
# VA 0x2ba6414 .. 0x2ba6894 (next mapped method entry)
 2ba6414: d10143ff     	sub	sp, sp, #0x50
 2ba6418: 6d0123e9     	stp	d9, d8, [sp, #0x10]
 2ba641c: a9025ffe     	stp	x30, x23, [sp, #0x20]
 2ba6420: a90357f6     	stp	x22, x21, [sp, #0x30]
 2ba6424: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2ba6428: 9001db74     	adrp	x20, 0x6712000
 2ba642c: d001ba57     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba6430: aa0103f5     	mov	x21, x1
 2ba6434: 39641e88     	ldrb	w8, [x20, #0x907]
 2ba6438: f9478ef7     	ldr	x23, [x23, #0xf18]
 2ba643c: aa0003f3     	mov	x19, x0
 2ba6440: 37000188     	tbnz	w8, #0x0, 0x2ba6470 <__start_il2cpp+0xdde5c>
 2ba6444: f001ba80     	adrp	x0, 0x62f9000
 2ba6448: f9474800     	ldr	x0, [x0, #0xe90]
 2ba644c: 97f8c265     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6450: d001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba6454: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba6458: 97f8c262     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba645c: 9001baa0     	adrp	x0, 0x62fa000
 2ba6460: f941ec00     	ldr	x0, [x0, #0x3d8]
 2ba6464: 97f8c25f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6468: 52800028     	mov	w8, #0x1                // =1
 2ba646c: 39241e88     	strb	w8, [x20, #0x907]
 2ba6470: f94002e0     	ldr	x0, [x23]
 2ba6474: f90007ff     	str	xzr, [sp, #0x8]
 2ba6478: b940e408     	ldr	w8, [x0, #0xe4]
 2ba647c: 35000048     	cbnz	w8, 0x2ba6484 <__start_il2cpp+0xdde70>
 2ba6480: 97f8c2b7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba6484: aa1503e0     	mov	x0, x21
 2ba6488: aa1f03e1     	mov	x1, xzr
 2ba648c: aa1f03e2     	mov	x2, xzr
 2ba6490: 94be805a     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba6494: 37000180     	tbnz	w0, #0x0, 0x2ba64c4 <__start_il2cpp+0xddeb0>
 2ba6498: b4001fd5     	cbz	x21, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba649c: f94002e0     	ldr	x0, [x23]
 2ba64a0: f9401ab4     	ldr	x20, [x21, #0x30]
 2ba64a4: b940e408     	ldr	w8, [x0, #0xe4]
 2ba64a8: 35000048     	cbnz	w8, 0x2ba64b0 <__start_il2cpp+0xdde9c>
 2ba64ac: 97f8c2ac     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba64b0: aa1403e0     	mov	x0, x20
 2ba64b4: aa1f03e1     	mov	x1, xzr
 2ba64b8: aa1f03e2     	mov	x2, xzr
 2ba64bc: 94be804f     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba64c0: 36000260     	tbz	w0, #0x0, 0x2ba650c <__start_il2cpp+0xddef8>
 2ba64c4: aa1303f4     	mov	x20, x19
 2ba64c8: aa1f03e1     	mov	x1, xzr
 2ba64cc: f80a8e9f     	str	xzr, [x20, #0xa8]!
 2ba64d0: aa1403e0     	mov	x0, x20
 2ba64d4: 97f8c22e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba64d8: f8578280     	ldur	x0, [x20, #-0x88]
 2ba64dc: b4001da0     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba64e0: aa1f03e1     	mov	x1, xzr
 2ba64e4: aa1f03e2     	mov	x2, xzr
 2ba64e8: 9404c42b     	bl	0x2cd7594 <__start_il2cpp+0x20ef80>
 2ba64ec: f9403e60     	ldr	x0, [x19, #0x78]
 2ba64f0: b4001d00     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba64f4: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2ba64f8: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2ba64fc: a9425ffe     	ldp	x30, x23, [sp, #0x20]
 2ba6500: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 2ba6504: 910143ff     	add	sp, sp, #0x50
 2ba6508: 17ffe682     	b	0x2b9ff10 <__start_il2cpp+0xd78fc>
 2ba650c: 3940b6a8     	ldrb	w8, [x21, #0x2d]
 2ba6510: 350019c8     	cbnz	w8, 0x2ba6848 <__start_il2cpp+0xde234>
 2ba6514: aa1503e0     	mov	x0, x21
 2ba6518: 97ffdffc     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba651c: 37001960     	tbnz	w0, #0x0, 0x2ba6848 <__start_il2cpp+0xde234>
 2ba6520: aa1f03e0     	mov	x0, xzr
 2ba6524: 94bfee33     	bl	0x5ba1df0 <__start_il2cpp+0x30d97dc>
 2ba6528: 0f0265e3     	movi	v3.2s, #0x4f, lsl #24
 2ba652c: b9409a60     	ldr	w0, [x19, #0x98]
 2ba6530: aa1f03e1     	mov	x1, xzr
 2ba6534: 9406d33e     	bl	0x2d5b22c <__start_il2cpp+0x292c18>
 2ba6538: 37001880     	tbnz	w0, #0x0, 0x2ba6848 <__start_il2cpp+0xde234>
 2ba653c: f94002e0     	ldr	x0, [x23]
 2ba6540: aa1303f4     	mov	x20, x19
 2ba6544: f84a8e96     	ldr	x22, [x20, #0xa8]!
 2ba6548: b940e408     	ldr	w8, [x0, #0xe4]
 2ba654c: 35000048     	cbnz	w8, 0x2ba6554 <__start_il2cpp+0xddf40>
 2ba6550: 97f8c283     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba6554: aa1603e0     	mov	x0, x22
 2ba6558: aa1f03e1     	mov	x1, xzr
 2ba655c: 94be903a     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba6560: 36000bc0     	tbz	w0, #0x0, 0x2ba66d8 <__start_il2cpp+0xde0c4>
 2ba6564: f94002e0     	ldr	x0, [x23]
 2ba6568: f9400296     	ldr	x22, [x20]
 2ba656c: b940e408     	ldr	w8, [x0, #0xe4]
 2ba6570: 35000048     	cbnz	w8, 0x2ba6578 <__start_il2cpp+0xddf64>
 2ba6574: 97f8c27a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba6578: aa1603e0     	mov	x0, x22
 2ba657c: aa1503e1     	mov	x1, x21
 2ba6580: aa1f03e2     	mov	x2, xzr
 2ba6584: 94be801d     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba6588: 36000a80     	tbz	w0, #0x0, 0x2ba66d8 <__start_il2cpp+0xde0c4>
 2ba658c: f9400280     	ldr	x0, [x20]
 2ba6590: b4001800     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6594: 97ffe575     	bl	0x2b9fb68 <__start_il2cpp+0xd7554>
 2ba6598: 36000a00     	tbz	w0, #0x0, 0x2ba66d8 <__start_il2cpp+0xde0c4>
 2ba659c: f9400280     	ldr	x0, [x20]
 2ba65a0: b4001780     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba65a4: 97ffdfd9     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba65a8: 37000260     	tbnz	w0, #0x0, 0x2ba65f4 <__start_il2cpp+0xddfe0>
 2ba65ac: f001ba95     	adrp	x21, 0x62f9000
 2ba65b0: f9474ab5     	ldr	x21, [x21, #0xe90]
 2ba65b4: f94002a0     	ldr	x0, [x21]
 2ba65b8: b940e408     	ldr	w8, [x0, #0xe4]
 2ba65bc: 35000068     	cbnz	w8, 0x2ba65c8 <__start_il2cpp+0xddfb4>
 2ba65c0: 97f8c267     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba65c4: f94002a0     	ldr	x0, [x21]
 2ba65c8: f9400288     	ldr	x8, [x20]
 2ba65cc: b4001628     	cbz	x8, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba65d0: f9405c09     	ldr	x9, [x0, #0xb8]
 2ba65d4: f9402d29     	ldr	x9, [x9, #0x58]
 2ba65d8: b40015c9     	cbz	x9, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba65dc: f9401901     	ldr	x1, [x8, #0x30]
 2ba65e0: f9400d28     	ldr	x8, [x9, #0x18]
 2ba65e4: aa1f03e2     	mov	x2, xzr
 2ba65e8: f9402120     	ldr	x0, [x9, #0x40]
 2ba65ec: f9401523     	ldr	x3, [x9, #0x28]
 2ba65f0: d63f0100     	blr	x8
 2ba65f4: f9405660     	ldr	x0, [x19, #0xa8]
 2ba65f8: b40014c0     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba65fc: f9403e75     	ldr	x21, [x19, #0x78]
 2ba6600: aa1f03e1     	mov	x1, xzr
 2ba6604: 94be64d6     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2ba6608: b4001440     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba660c: aa1f03e1     	mov	x1, xzr
 2ba6610: 94beb688     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2ba6614: f9400280     	ldr	x0, [x20]
 2ba6618: b40013c0     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba661c: 1e204008     	fmov	s8, s0
 2ba6620: 1e204029     	fmov	s9, s1
 2ba6624: 97ffdfb9     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba6628: 370000e0     	tbnz	w0, #0x0, 0x2ba6644 <__start_il2cpp+0xde030>
 2ba662c: f9400288     	ldr	x8, [x20]
 2ba6630: b4001308     	cbz	x8, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6634: f9401900     	ldr	x0, [x8, #0x30]
 2ba6638: b40012c0     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba663c: aa1f03e1     	mov	x1, xzr
 2ba6640: 9401334d     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2ba6644: b4001275     	cbz	x21, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6648: 1e204100     	fmov	s0, s8
 2ba664c: 1e204121     	fmov	s1, s9
 2ba6650: aa1503e0     	mov	x0, x21
 2ba6654: 2a1f03e1     	mov	w1, wzr
 2ba6658: 97ffe5d8     	bl	0x2b9fdb8 <__start_il2cpp+0xd77a4>
 2ba665c: f9400295     	ldr	x21, [x20]
 2ba6660: b4001195     	cbz	x21, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6664: 3940b2a8     	ldrb	w8, [x21, #0x2c]
 2ba6668: 34000108     	cbz	w8, 0x2ba6688 <__start_il2cpp+0xde074>
 2ba666c: f9401aa0     	ldr	x0, [x21, #0x30]
 2ba6670: b4001100     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6674: f9400008     	ldr	x8, [x0]
 2ba6678: f9411509     	ldr	x9, [x8, #0x228]
 2ba667c: f9411901     	ldr	x1, [x8, #0x230]
 2ba6680: d63f0120     	blr	x9
 2ba6684: f9400295     	ldr	x21, [x20]
 2ba6688: f94002e0     	ldr	x0, [x23]
 2ba668c: b940e408     	ldr	w8, [x0, #0xe4]
 2ba6690: 35000048     	cbnz	w8, 0x2ba6698 <__start_il2cpp+0xde084>
 2ba6694: 97f8c232     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba6698: aa1503e0     	mov	x0, x21
 2ba669c: aa1f03e1     	mov	x1, xzr
 2ba66a0: 94be8fe9     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba66a4: 36000d20     	tbz	w0, #0x0, 0x2ba6848 <__start_il2cpp+0xde234>
 2ba66a8: f9400280     	ldr	x0, [x20]
 2ba66ac: b4000f20     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba66b0: 97ffdf96     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba66b4: 36000d60     	tbz	w0, #0x0, 0x2ba6860 <__start_il2cpp+0xde24c>
 2ba66b8: aa1303e0     	mov	x0, x19
 2ba66bc: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2ba66c0: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2ba66c4: aa1f03e1     	mov	x1, xzr
 2ba66c8: a9425ffe     	ldp	x30, x23, [sp, #0x20]
 2ba66cc: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 2ba66d0: 910143ff     	add	sp, sp, #0x50
 2ba66d4: 17ffff50     	b	0x2ba6414 <__start_il2cpp+0xdde00>
 2ba66d8: aa1403e0     	mov	x0, x20
 2ba66dc: aa1503e1     	mov	x1, x21
 2ba66e0: f9000295     	str	x21, [x20]
 2ba66e4: 97f8c1aa     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba66e8: f9400280     	ldr	x0, [x20]
 2ba66ec: b4000d20     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba66f0: 97ffdf86     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba66f4: 360002e0     	tbz	w0, #0x0, 0x2ba6750 <__start_il2cpp+0xde13c>
 2ba66f8: f9401260     	ldr	x0, [x19, #0x20]
 2ba66fc: b4000ca0     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6700: aa1f03e1     	mov	x1, xzr
 2ba6704: aa1f03e2     	mov	x2, xzr
 2ba6708: 9404c3a3     	bl	0x2cd7594 <__start_il2cpp+0x20ef80>
 2ba670c: f9405660     	ldr	x0, [x19, #0xa8]
 2ba6710: b4000c00     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6714: f9403e73     	ldr	x19, [x19, #0x78]
 2ba6718: aa1f03e1     	mov	x1, xzr
 2ba671c: 94be6490     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2ba6720: b4000b80     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6724: aa1f03e1     	mov	x1, xzr
 2ba6728: 94beb642     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2ba672c: b4000b33     	cbz	x19, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6730: aa1303e0     	mov	x0, x19
 2ba6734: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2ba6738: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2ba673c: 2a1f03e1     	mov	w1, wzr
 2ba6740: a9425ffe     	ldp	x30, x23, [sp, #0x20]
 2ba6744: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 2ba6748: 910143ff     	add	sp, sp, #0x50
 2ba674c: 17ffe59b     	b	0x2b9fdb8 <__start_il2cpp+0xd77a4>
 2ba6750: f9405660     	ldr	x0, [x19, #0xa8]
 2ba6754: b40009e0     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6758: f9403e75     	ldr	x21, [x19, #0x78]
 2ba675c: aa1f03e1     	mov	x1, xzr
 2ba6760: 94be647f     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2ba6764: b4000960     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6768: aa1f03e1     	mov	x1, xzr
 2ba676c: 94beb631     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2ba6770: f9400288     	ldr	x8, [x20]
 2ba6774: b40008e8     	cbz	x8, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6778: f9401900     	ldr	x0, [x8, #0x30]
 2ba677c: b40008a0     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6780: aa1f03e1     	mov	x1, xzr
 2ba6784: 1e204008     	fmov	s8, s0
 2ba6788: 1e204029     	fmov	s9, s1
 2ba678c: 940132fa     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2ba6790: b4000815     	cbz	x21, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6794: 1e204100     	fmov	s0, s8
 2ba6798: 1e204121     	fmov	s1, s9
 2ba679c: aa1503e0     	mov	x0, x21
 2ba67a0: 2a1f03e1     	mov	w1, wzr
 2ba67a4: 97ffe585     	bl	0x2b9fdb8 <__start_il2cpp+0xd77a4>
 2ba67a8: f9405668     	ldr	x8, [x19, #0xa8]
 2ba67ac: b4000728     	cbz	x8, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba67b0: f9401260     	ldr	x0, [x19, #0x20]
 2ba67b4: b40006e0     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba67b8: f9401901     	ldr	x1, [x8, #0x30]
 2ba67bc: aa1f03e2     	mov	x2, xzr
 2ba67c0: 9404c375     	bl	0x2cd7594 <__start_il2cpp+0x20ef80>
 2ba67c4: f001ba95     	adrp	x21, 0x62f9000
 2ba67c8: f9474ab5     	ldr	x21, [x21, #0xe90]
 2ba67cc: f94002a0     	ldr	x0, [x21]
 2ba67d0: b940e408     	ldr	w8, [x0, #0xe4]
 2ba67d4: 35000068     	cbnz	w8, 0x2ba67e0 <__start_il2cpp+0xde1cc>
 2ba67d8: 97f8c1e1     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba67dc: f94002a0     	ldr	x0, [x21]
 2ba67e0: f9400288     	ldr	x8, [x20]
 2ba67e4: b4000568     	cbz	x8, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba67e8: f9405c09     	ldr	x9, [x0, #0xb8]
 2ba67ec: f9402d29     	ldr	x9, [x9, #0x58]
 2ba67f0: b4000509     	cbz	x9, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba67f4: f9401901     	ldr	x1, [x8, #0x30]
 2ba67f8: f9400d28     	ldr	x8, [x9, #0x18]
 2ba67fc: aa1f03e2     	mov	x2, xzr
 2ba6800: f9402120     	ldr	x0, [x9, #0x40]
 2ba6804: f9401523     	ldr	x3, [x9, #0x28]
 2ba6808: d63f0100     	blr	x8
 2ba680c: f9405668     	ldr	x8, [x19, #0xa8]
 2ba6810: f9402a73     	ldr	x19, [x19, #0x50]
 2ba6814: f90007ff     	str	xzr, [sp, #0x8]
 2ba6818: b40003c8     	cbz	x8, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba681c: f9401901     	ldr	x1, [x8, #0x30]
 2ba6820: 910023e0     	add	x0, sp, #0x8
 2ba6824: f90007e1     	str	x1, [sp, #0x8]
 2ba6828: 97f8c159     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba682c: b4000333     	cbz	x19, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6830: 9001baa8     	adrp	x8, 0x62fa000
 2ba6834: aa1303e0     	mov	x0, x19
 2ba6838: f941ed08     	ldr	x8, [x8, #0x3d8]
 2ba683c: f94007e1     	ldr	x1, [sp, #0x8]
 2ba6840: f9400102     	ldr	x2, [x8]
 2ba6844: 9429f3a8     	bl	0x36236e4 <__start_il2cpp+0xb5b0d0>
 2ba6848: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2ba684c: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2ba6850: a9425ffe     	ldp	x30, x23, [sp, #0x20]
 2ba6854: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 2ba6858: 910143ff     	add	sp, sp, #0x50
 2ba685c: d65f03c0     	ret
 2ba6860: f9405668     	ldr	x8, [x19, #0xa8]
 2ba6864: b4000168     	cbz	x8, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6868: f9401260     	ldr	x0, [x19, #0x20]
 2ba686c: b4000120     	cbz	x0, 0x2ba6890 <__start_il2cpp+0xde27c>
 2ba6870: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2ba6874: aa1f03e2     	mov	x2, xzr
 2ba6878: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2ba687c: f9401901     	ldr	x1, [x8, #0x30]
 2ba6880: a9425ffe     	ldp	x30, x23, [sp, #0x20]
 2ba6884: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 2ba6888: 910143ff     	add	sp, sp, #0x50
 2ba688c: 1404c342     	b	0x2cd7594 <__start_il2cpp+0x20ef80>
 2ba6890: 97f8c1fe     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void ResetCurrentlySelectedBoardSlot()
# VA 0x2ba6894 .. 0x2ba68a0 (next mapped method entry)
 2ba6894: aa1f03e1     	mov	x1, xzr
 2ba6898: f80a8c1f     	str	xzr, [x0, #0xa8]!
 2ba689c: 17f8c13c     	b	0x29d6d8c <mono_class_get_checked+0x674>

# BoardController :: System.Void SwapBoardSlotsData(BoardSlot firstSlot, BoardSlot secondSlot)
# VA 0x2ba68a0 .. 0x2ba6914 (next mapped method entry)
 2ba68a0: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2ba68a4: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba68a8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba68ac: b4000321     	cbz	x1, 0x2ba6910 <__start_il2cpp+0xde2fc>
 2ba68b0: aa0203f3     	mov	x19, x2
 2ba68b4: b40002e2     	cbz	x2, 0x2ba6910 <__start_il2cpp+0xde2fc>
 2ba68b8: aa0103f4     	mov	x20, x1
 2ba68bc: 3940b036     	ldrb	w22, [x1, #0x2c]
 2ba68c0: 3940b668     	ldrb	w8, [x19, #0x2d]
 2ba68c4: f9401835     	ldr	x21, [x1, #0x30]
 2ba68c8: 3940b437     	ldrb	w23, [x1, #0x2d]
 2ba68cc: aa1403e0     	mov	x0, x20
 2ba68d0: f9401a61     	ldr	x1, [x19, #0x30]
 2ba68d4: 2a1f03e2     	mov	w2, wzr
 2ba68d8: 3900b688     	strb	w8, [x20, #0x2d]
 2ba68dc: 97ffe40c     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2ba68e0: 3940b268     	ldrb	w8, [x19, #0x2c]
 2ba68e4: aa1303e0     	mov	x0, x19
 2ba68e8: aa1503e1     	mov	x1, x21
 2ba68ec: 2a1f03e2     	mov	w2, wzr
 2ba68f0: 3900b677     	strb	w23, [x19, #0x2d]
 2ba68f4: 3900b288     	strb	w8, [x20, #0x2c]
 2ba68f8: 97ffe405     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2ba68fc: 3900b276     	strb	w22, [x19, #0x2c]
 2ba6900: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba6904: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba6908: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2ba690c: d65f03c0     	ret
 2ba6910: 97f8c1de     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: BoardSlot GetBoardSlotSR(System.Int32 row, System.Int32 column)
# VA 0x2ba6914 .. 0x2ba6918 (next mapped method entry)
 2ba6914: 14000001     	b	0x2ba6918 <__start_il2cpp+0xde304>

# BoardController :: BoardSlot GetBoardSlot(System.Int32 row, System.Int32 column)
# VA 0x2ba6918 .. 0x2ba6994 (next mapped method entry)
 2ba6918: f81f0ffe     	str	x30, [sp, #-0x10]!
 2ba691c: f9403409     	ldr	x9, [x0, #0x68]
 2ba6920: b4000369     	cbz	x9, 0x2ba698c <__start_il2cpp+0xde378>
 2ba6924: aa0003e8     	mov	x8, x0
 2ba6928: aa1f03e0     	mov	x0, xzr
 2ba692c: 37f802c1     	tbnz	w1, #0x1f, 0x2ba6984 <__start_il2cpp+0xde370>
 2ba6930: b940192a     	ldr	w10, [x9, #0x18]
 2ba6934: 6b01015f     	cmp	w10, w1
 2ba6938: 5400026d     	b.le	0x2ba6984 <__start_il2cpp+0xde370>
 2ba693c: aa1f03e0     	mov	x0, xzr
 2ba6940: 37f80222     	tbnz	w2, #0x1f, 0x2ba6984 <__start_il2cpp+0xde370>
 2ba6944: b9401d29     	ldr	w9, [x9, #0x1c]
 2ba6948: 6b02013f     	cmp	w9, w2
 2ba694c: 540001cd     	b.le	0x2ba6984 <__start_il2cpp+0xde370>
 2ba6950: f9405108     	ldr	x8, [x8, #0xa0]
 2ba6954: b40001c8     	cbz	x8, 0x2ba698c <__start_il2cpp+0xde378>
 2ba6958: b9401909     	ldr	w9, [x8, #0x18]
 2ba695c: 6b01013f     	cmp	w9, w1
 2ba6960: 54000189     	b.ls	0x2ba6990 <__start_il2cpp+0xde37c>
 2ba6964: 8b214d08     	add	x8, x8, w1, uxtw #3
 2ba6968: f9401108     	ldr	x8, [x8, #0x20]
 2ba696c: b4000108     	cbz	x8, 0x2ba698c <__start_il2cpp+0xde378>
 2ba6970: b9401909     	ldr	w9, [x8, #0x18]
 2ba6974: 6b02013f     	cmp	w9, w2
 2ba6978: 540000c9     	b.ls	0x2ba6990 <__start_il2cpp+0xde37c>
 2ba697c: 8b224d08     	add	x8, x8, w2, uxtw #3
 2ba6980: f9401100     	ldr	x0, [x8, #0x20]
 2ba6984: f84107fe     	ldr	x30, [sp], #0x10
 2ba6988: d65f03c0     	ret
 2ba698c: 97f8c1bf     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba6990: 97f8c1c0     	bl	0x29d7090 <mono_class_get_checked+0x978>

# BoardController :: System.Void UnlockNeighbourBoardSlots(BoardSlot boardSlot)
# VA 0x2ba6994 .. 0x2ba69fc (next mapped method entry)
 2ba6994: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ba6998: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba699c: b40002e1     	cbz	x1, 0x2ba69f8 <__start_il2cpp+0xde3e4>
 2ba69a0: 29445434     	ldp	w20, w21, [x1, #0x20]
 2ba69a4: aa0003f3     	mov	x19, x0
 2ba69a8: 11000681     	add	w1, w20, #0x1
 2ba69ac: 2a1503e2     	mov	w2, w21
 2ba69b0: 94000013     	bl	0x2ba69fc <__start_il2cpp+0xde3e8>
 2ba69b4: 51000681     	sub	w1, w20, #0x1
 2ba69b8: aa1303e0     	mov	x0, x19
 2ba69bc: 2a1503e2     	mov	w2, w21
 2ba69c0: 9400000f     	bl	0x2ba69fc <__start_il2cpp+0xde3e8>
 2ba69c4: 110006a2     	add	w2, w21, #0x1
 2ba69c8: aa1303e0     	mov	x0, x19
 2ba69cc: 2a1403e1     	mov	w1, w20
 2ba69d0: 9400000b     	bl	0x2ba69fc <__start_il2cpp+0xde3e8>
 2ba69d4: 510006a2     	sub	w2, w21, #0x1
 2ba69d8: aa1303e0     	mov	x0, x19
 2ba69dc: 2a1403e1     	mov	w1, w20
 2ba69e0: 94000007     	bl	0x2ba69fc <__start_il2cpp+0xde3e8>
 2ba69e4: f9401a60     	ldr	x0, [x19, #0x30]
 2ba69e8: b4000080     	cbz	x0, 0x2ba69f8 <__start_il2cpp+0xde3e4>
 2ba69ec: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba69f0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ba69f4: 17ffdce7     	b	0x2b9dd90 <__start_il2cpp+0xd577c>
 2ba69f8: 97f8c1a4     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void <UnlockNeighbourBoardSlots>g__UnlockNeighbour|41_0(System.Int32 neighbourRow, System.Int32 neighbourColumn)
# VA 0x2ba69fc .. 0x2ba6b64 (next mapped method entry)
 2ba69fc: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2ba6a00: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba6a04: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba6a08: 9001db77     	adrp	x23, 0x6712000
 2ba6a0c: d001ba56     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba6a10: 2a0203f4     	mov	w20, w2
 2ba6a14: 39646ae8     	ldrb	w8, [x23, #0x91a]
 2ba6a18: f9478ed6     	ldr	x22, [x22, #0xf18]
 2ba6a1c: 2a0103f5     	mov	w21, w1
 2ba6a20: aa0003f3     	mov	x19, x0
 2ba6a24: 37000128     	tbnz	w8, #0x0, 0x2ba6a48 <__start_il2cpp+0xde434>
 2ba6a28: b001ba60     	adrp	x0, 0x62f3000
 2ba6a2c: f9479000     	ldr	x0, [x0, #0xf20]
 2ba6a30: 97f8c0ec     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6a34: d001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba6a38: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba6a3c: 97f8c0e9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6a40: 52800028     	mov	w8, #0x1                // =1
 2ba6a44: 39246ae8     	strb	w8, [x23, #0x91a]
 2ba6a48: aa1303e0     	mov	x0, x19
 2ba6a4c: 2a1503e1     	mov	w1, w21
 2ba6a50: 2a1403e2     	mov	w2, w20
 2ba6a54: 97ffffb1     	bl	0x2ba6918 <__start_il2cpp+0xde304>
 2ba6a58: f94002c8     	ldr	x8, [x22]
 2ba6a5c: aa0003f4     	mov	x20, x0
 2ba6a60: b940e509     	ldr	w9, [x8, #0xe4]
 2ba6a64: 35000069     	cbnz	w9, 0x2ba6a70 <__start_il2cpp+0xde45c>
 2ba6a68: aa0803e0     	mov	x0, x8
 2ba6a6c: 97f8c13c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba6a70: aa1403e0     	mov	x0, x20
 2ba6a74: aa1f03e1     	mov	x1, xzr
 2ba6a78: 94be8ef3     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba6a7c: 36000140     	tbz	w0, #0x0, 0x2ba6aa4 <__start_il2cpp+0xde490>
 2ba6a80: b4000714     	cbz	x20, 0x2ba6b60 <__start_il2cpp+0xde54c>
 2ba6a84: 3940b688     	ldrb	w8, [x20, #0x2d]
 2ba6a88: 340000e8     	cbz	w8, 0x2ba6aa4 <__start_il2cpp+0xde490>
 2ba6a8c: aa1403e0     	mov	x0, x20
 2ba6a90: 2a1f03e1     	mov	w1, wzr
 2ba6a94: 97ffe3e0     	bl	0x2b9fa14 <__start_il2cpp+0xd7400>
 2ba6a98: aa1403e0     	mov	x0, x20
 2ba6a9c: 97ffde9b     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba6aa0: 360000a0     	tbz	w0, #0x0, 0x2ba6ab4 <__start_il2cpp+0xde4a0>
 2ba6aa4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba6aa8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba6aac: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2ba6ab0: d65f03c0     	ret
 2ba6ab4: f9401a8a     	ldr	x10, [x20, #0x30]
 2ba6ab8: b400054a     	cbz	x10, 0x2ba6b60 <__start_il2cpp+0xde54c>
 2ba6abc: f940294b     	ldr	x11, [x10, #0x50]
 2ba6ac0: b400050b     	cbz	x11, 0x2ba6b60 <__start_il2cpp+0xde54c>
 2ba6ac4: f9401675     	ldr	x21, [x19, #0x28]
 2ba6ac8: b40004d5     	cbz	x21, 0x2ba6b60 <__start_il2cpp+0xde54c>
 2ba6acc: b001ba6c     	adrp	x12, 0x62f3000
 2ba6ad0: f94002a8     	ldr	x8, [x21]
 2ba6ad4: f947918c     	ldr	x12, [x12, #0xf20]
 2ba6ad8: b9403176     	ldr	w22, [x11, #0x30]
 2ba6adc: b9404557     	ldr	w23, [x10, #0x44]
 2ba6ae0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba6ae4: f9400181     	ldr	x1, [x12]
 2ba6ae8: b4000129     	cbz	x9, 0x2ba6b0c <__start_il2cpp+0xde4f8>
 2ba6aec: f940590a     	ldr	x10, [x8, #0xb0]
 2ba6af0: 9100214a     	add	x10, x10, #0x8
 2ba6af4: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba6af8: eb01017f     	cmp	x11, x1
 2ba6afc: 54000100     	b.eq	0x2ba6b1c <__start_il2cpp+0xde508>
 2ba6b00: f1000529     	subs	x9, x9, #0x1
 2ba6b04: 9100414a     	add	x10, x10, #0x10
 2ba6b08: 54ffff61     	b.ne	0x2ba6af4 <__start_il2cpp+0xde4e0>
 2ba6b0c: aa1503e0     	mov	x0, x21
 2ba6b10: 52800102     	mov	w2, #0x8                // =8
 2ba6b14: 97f99e14     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba6b18: 14000005     	b	0x2ba6b2c <__start_il2cpp+0xde518>
 2ba6b1c: b9400149     	ldr	w9, [x10]
 2ba6b20: 11002129     	add	w9, w9, #0x8
 2ba6b24: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba6b28: 9104e100     	add	x0, x8, #0x138
 2ba6b2c: a9400c08     	ldp	x8, x3, [x0]
 2ba6b30: aa1503e0     	mov	x0, x21
 2ba6b34: 2a1603e1     	mov	w1, w22
 2ba6b38: 2a1703e2     	mov	w2, w23
 2ba6b3c: d63f0100     	blr	x8
 2ba6b40: aa1403e0     	mov	x0, x20
 2ba6b44: 97ffe35e     	bl	0x2b9f8bc <__start_il2cpp+0xd72a8>
 2ba6b48: aa1303e0     	mov	x0, x19
 2ba6b4c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba6b50: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba6b54: 2f00e402     	movi	d2, #0000000000000000
 2ba6b58: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2ba6b5c: 14000d5e     	b	0x2baa0d4 <__start_il2cpp+0xe1ac0>
 2ba6b60: 97f8c14a     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void CheckForMergeHint()
# VA 0x2ba6b64 .. 0x2ba6b78 (next mapped method entry)
 2ba6b64: f9401800     	ldr	x0, [x0, #0x30]
 2ba6b68: b4000040     	cbz	x0, 0x2ba6b70 <__start_il2cpp+0xde55c>
 2ba6b6c: 17ffdc89     	b	0x2b9dd90 <__start_il2cpp+0xd577c>
 2ba6b70: f81f0ffe     	str	x30, [sp, #-0x10]!
 2ba6b74: 97f8c145     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: BoardSlot TryGetClosestEmptyBoardSlot(BoardSlot boardSlot, System.String parameters, System.Int32 degree = 1)
# VA 0x2ba6b78 .. 0x2ba6e94 (next mapped method entry)
 2ba6b78: d10203ff     	sub	sp, sp, #0x80
 2ba6b7c: f90013fe     	str	x30, [sp, #0x20]
 2ba6b80: a9036ffc     	stp	x28, x27, [sp, #0x30]
 2ba6b84: a90467fa     	stp	x26, x25, [sp, #0x40]
 2ba6b88: a9055ff8     	stp	x24, x23, [sp, #0x50]
 2ba6b8c: a90657f6     	stp	x22, x21, [sp, #0x60]
 2ba6b90: a9074ff4     	stp	x20, x19, [sp, #0x70]
 2ba6b94: aa0203f3     	mov	x19, x2
 2ba6b98: aa0103f5     	mov	x21, x1
 2ba6b9c: aa0003f4     	mov	x20, x0
 2ba6ba0: 2a0303e2     	mov	w2, w3
 2ba6ba4: 940000bc     	bl	0x2ba6e94 <__start_il2cpp+0xde880>
 2ba6ba8: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2ba6bac: f94013fe     	ldr	x30, [sp, #0x20]
 2ba6bb0: a94657f6     	ldp	x22, x21, [sp, #0x60]
 2ba6bb4: a9455ff8     	ldp	x24, x23, [sp, #0x50]
 2ba6bb8: a94467fa     	ldp	x26, x25, [sp, #0x40]
 2ba6bbc: a9436ffc     	ldp	x28, x27, [sp, #0x30]
 2ba6bc0: 910203ff     	add	sp, sp, #0x80
 2ba6bc4: d65f03c0     	ret
 2ba6bc8: 7100043f     	cmp	w1, #0x1
 2ba6bcc: aa0003f6     	mov	x22, x0
 2ba6bd0: 540015c1     	b.ne	0x2ba6e88 <__start_il2cpp+0xde874>
 2ba6bd4: aa1603e0     	mov	x0, x22
 2ba6bd8: 94cdfeda     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2ba6bdc: aa0003f6     	mov	x22, x0
 2ba6be0: d001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba6be4: f946f000     	ldr	x0, [x0, #0xde0]
 2ba6be8: 97f8c083     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba6bec: f94002c8     	ldr	x8, [x22]
 2ba6bf0: f9400101     	ldr	x1, [x8]
 2ba6bf4: 97f8c227     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2ba6bf8: 36001340     	tbz	w0, #0x0, 0x2ba6e60 <__start_il2cpp+0xde84c>
 2ba6bfc: f94002d7     	ldr	x23, [x22]
 2ba6c00: 94cdfed4     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba6c04: 9001baa0     	adrp	x0, 0x62fa000
 2ba6c08: f941f000     	ldr	x0, [x0, #0x3e0]
 2ba6c0c: 97f8c07a     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba6c10: 97f8c11a     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba6c14: aa0003f8     	mov	x24, x0
 2ba6c18: 9001baa0     	adrp	x0, 0x62fa000
 2ba6c1c: f941f400     	ldr	x0, [x0, #0x3e8]
 2ba6c20: 97f8c075     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba6c24: aa0003e1     	mov	x1, x0
 2ba6c28: aa1803e0     	mov	x0, x24
 2ba6c2c: 943e0667     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2ba6c30: f940529a     	ldr	x26, [x20, #0xa0]
 2ba6c34: b400113a     	cbz	x26, 0x2ba6e58 <__start_il2cpp+0xde844>
 2ba6c38: f9400f48     	ldr	x8, [x26, #0x18]
 2ba6c3c: 7100051f     	cmp	w8, #0x1
 2ba6c40: 5400028b     	b.lt	0x2ba6c90 <__start_il2cpp+0xde67c>
 2ba6c44: 9001bab6     	adrp	x22, 0x62fa000
 2ba6c48: aa1f03fb     	mov	x27, xzr
 2ba6c4c: 92407d08     	and	x8, x8, #0xffffffff
 2ba6c50: f941fad6     	ldr	x22, [x22, #0x3f0]
 2ba6c54: 9100835c     	add	x28, x26, #0x20
 2ba6c58: eb28437f     	cmp	x27, w8, uxtw
 2ba6c5c: 54001002     	b.hs	0x2ba6e5c <__start_il2cpp+0xde848>
 2ba6c60: b4000fd8     	cbz	x24, 0x2ba6e58 <__start_il2cpp+0xde844>
 2ba6c64: f87b7b99     	ldr	x25, [x28, x27, lsl #3]
 2ba6c68: aa1603e0     	mov	x0, x22
 2ba6c6c: 97f8c062     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba6c70: aa0003e2     	mov	x2, x0
 2ba6c74: aa1803e0     	mov	x0, x24
 2ba6c78: aa1903e1     	mov	x1, x25
 2ba6c7c: 943e08f1     	bl	0x3b29040 <__start_il2cpp+0x1060a2c>
 2ba6c80: b9401b48     	ldr	w8, [x26, #0x18]
 2ba6c84: 9100077b     	add	x27, x27, #0x1
 2ba6c88: eb28c37f     	cmp	x27, w8, sxtw
 2ba6c8c: 54fffe6b     	b.lt	0x2ba6c58 <__start_il2cpp+0xde644>
 2ba6c90: f001ba40     	adrp	x0, 0x62f1000
 2ba6c94: f9413c00     	ldr	x0, [x0, #0x278]
 2ba6c98: 97f8c057     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba6c9c: 52800081     	mov	w1, #0x4                // =4
 2ba6ca0: 97f8c08b     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2ba6ca4: aa0003f6     	mov	x22, x0
 2ba6ca8: d001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba6cac: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba6cb0: 97f8c051     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba6cb4: b940e408     	ldr	w8, [x0, #0xe4]
 2ba6cb8: 35000048     	cbnz	w8, 0x2ba6cc0 <__start_il2cpp+0xde6ac>
 2ba6cbc: 97f8c0a8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba6cc0: aa1503e0     	mov	x0, x21
 2ba6cc4: aa1f03e1     	mov	x1, xzr
 2ba6cc8: aa1f03e2     	mov	x2, xzr
 2ba6ccc: 94be7e4b     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba6cd0: d001ba59     	adrp	x25, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba6cd4: 12000008     	and	w8, w0, #0x1
 2ba6cd8: 9100b3e1     	add	x1, sp, #0x2c
 2ba6cdc: f9470f39     	ldr	x25, [x25, #0xe18]
 2ba6ce0: 3900b3e8     	strb	w8, [sp, #0x2c]
 2ba6ce4: f9401720     	ldr	x0, [x25, #0x28]
 2ba6ce8: 97f8c09f     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba6cec: b4000b76     	cbz	x22, 0x2ba6e58 <__start_il2cpp+0xde844>
 2ba6cf0: aa0003f5     	mov	x21, x0
 2ba6cf4: aa1603e0     	mov	x0, x22
 2ba6cf8: aa1503e1     	mov	x1, x21
 2ba6cfc: 97ec04e7     	bl	0x26a8098 <.text+0x2f38>
 2ba6d00: aa1603e0     	mov	x0, x22
 2ba6d04: aa1f03e1     	mov	x1, xzr
 2ba6d08: aa1503e2     	mov	x2, x21
 2ba6d0c: 97ebff16     	bl	0x26a6964 <.text+0x1804>
 2ba6d10: aa1603e0     	mov	x0, x22
 2ba6d14: aa1803e1     	mov	x1, x24
 2ba6d18: 97ec04e0     	bl	0x26a8098 <.text+0x2f38>
 2ba6d1c: aa1603e0     	mov	x0, x22
 2ba6d20: 52800021     	mov	w1, #0x1                // =1
 2ba6d24: aa1803e2     	mov	x2, x24
 2ba6d28: 97ebff0f     	bl	0x26a6964 <.text+0x1804>
 2ba6d2c: aa1403e0     	mov	x0, x20
 2ba6d30: aa1f03e1     	mov	x1, xzr
 2ba6d34: 94be633e     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2ba6d38: b4000900     	cbz	x0, 0x2ba6e58 <__start_il2cpp+0xde844>
 2ba6d3c: aa1f03e1     	mov	x1, xzr
 2ba6d40: 94be75bf     	bl	0x5b4443c <__start_il2cpp+0x307be28>
 2ba6d44: f9401728     	ldr	x8, [x25, #0x28]
 2ba6d48: 12000009     	and	w9, w0, #0x1
 2ba6d4c: 9100a3e1     	add	x1, sp, #0x28
 2ba6d50: 3900a3e9     	strb	w9, [sp, #0x28]
 2ba6d54: aa0803e0     	mov	x0, x8
 2ba6d58: 97f8c083     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba6d5c: aa0003f5     	mov	x21, x0
 2ba6d60: aa1603e0     	mov	x0, x22
 2ba6d64: aa1503e1     	mov	x1, x21
 2ba6d68: 97ec04cc     	bl	0x26a8098 <.text+0x2f38>
 2ba6d6c: aa1603e0     	mov	x0, x22
 2ba6d70: 52800041     	mov	w1, #0x2                // =2
 2ba6d74: aa1503e2     	mov	x2, x21
 2ba6d78: 97ebfefb     	bl	0x26a6964 <.text+0x1804>
 2ba6d7c: f9402694     	ldr	x20, [x20, #0x48]
 2ba6d80: b40006d4     	cbz	x20, 0x2ba6e58 <__start_il2cpp+0xde844>
 2ba6d84: 9001baa0     	adrp	x0, 0x62fa000
 2ba6d88: f941fc00     	ldr	x0, [x0, #0x3f8]
 2ba6d8c: 97f8c01a     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba6d90: 92800008     	mov	x8, #-0x1               // =-1
 2ba6d94: b9402289     	ldr	w9, [x20, #0x20]
 2ba6d98: aa1f03e1     	mov	x1, xzr
 2ba6d9c: a900a3e0     	stp	x0, x8, [sp, #0x8]
 2ba6da0: 910023e0     	add	x0, sp, #0x8
 2ba6da4: b9001be9     	str	w9, [sp, #0x18]
 2ba6da8: 949672d9     	bl	0x514390c <__start_il2cpp+0x267b2f8>
 2ba6dac: aa0003f4     	mov	x20, x0
 2ba6db0: aa1603e0     	mov	x0, x22
 2ba6db4: aa1403e1     	mov	x1, x20
 2ba6db8: 97ec04b8     	bl	0x26a8098 <.text+0x2f38>
 2ba6dbc: aa1603e0     	mov	x0, x22
 2ba6dc0: 52800061     	mov	w1, #0x3                // =3
 2ba6dc4: aa1403e2     	mov	x2, x20
 2ba6dc8: 97ebfee7     	bl	0x26a6964 <.text+0x1804>
 2ba6dcc: 9001baa0     	adrp	x0, 0x62fa000
 2ba6dd0: f9420000     	ldr	x0, [x0, #0x400]
 2ba6dd4: 97f8c008     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba6dd8: aa1603e1     	mov	x1, x22
 2ba6ddc: aa1f03e2     	mov	x2, xzr
 2ba6de0: 948f4067     	bl	0x4f76f7c <__start_il2cpp+0x24ae968>
 2ba6de4: aa0003f4     	mov	x20, x0
 2ba6de8: d001ba60     	adrp	x0, 0x62f4000
 2ba6dec: f9466400     	ldr	x0, [x0, #0xcc8]
 2ba6df0: 97f8c001     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba6df4: b940e408     	ldr	w8, [x0, #0xe4]
 2ba6df8: 35000048     	cbnz	w8, 0x2ba6e00 <__start_il2cpp+0xde7ec>
 2ba6dfc: 97f8c058     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba6e00: aa1403e0     	mov	x0, x20
 2ba6e04: aa1f03e1     	mov	x1, xzr
 2ba6e08: 97fe2e9c     	bl	0x2b32878 <__start_il2cpp+0x6a264>
 2ba6e0c: 9001baa0     	adrp	x0, 0x62fa000
 2ba6e10: f9420400     	ldr	x0, [x0, #0x408]
 2ba6e14: 97f8bff8     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba6e18: aa1303e1     	mov	x1, x19
 2ba6e1c: aa1f03e2     	mov	x2, xzr
 2ba6e20: 948f07e0     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2ba6e24: aa1f03e1     	mov	x1, xzr
 2ba6e28: 97fe2e94     	bl	0x2b32878 <__start_il2cpp+0x6a264>
 2ba6e2c: d001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba6e30: f946e800     	ldr	x0, [x0, #0xdd0]
 2ba6e34: 97f8bff0     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba6e38: b940e408     	ldr	w8, [x0, #0xe4]
 2ba6e3c: 35000048     	cbnz	w8, 0x2ba6e44 <__start_il2cpp+0xde830>
 2ba6e40: 97f8c047     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba6e44: aa1703e0     	mov	x0, x23
 2ba6e48: aa1f03e1     	mov	x1, xzr
 2ba6e4c: 94bd416f     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2ba6e50: aa1f03e0     	mov	x0, xzr
 2ba6e54: 17ffff55     	b	0x2ba6ba8 <__start_il2cpp+0xde594>
 2ba6e58: 97f8c08c     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba6e5c: 97f8c08d     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2ba6e60: 52800100     	mov	w0, #0x8                // =8
 2ba6e64: 94cdfe57     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2ba6e68: f94002c8     	ldr	x8, [x22]
 2ba6e6c: f9000008     	str	x8, [x0]
 2ba6e70: d0019c21     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2ba6e74: 91302021     	add	x1, x1, #0xc08
 2ba6e78: aa1f03e2     	mov	x2, xzr
 2ba6e7c: 94cdfe55     	bl	0x5f267d0 <__cxa_throw@plt>
 2ba6e80: aa0003f6     	mov	x22, x0
 2ba6e84: 94cdfe33     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba6e88: aa1603e0     	mov	x0, x22
 2ba6e8c: 97fc7614     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2ba6e90: 97ebfaef     	bl	0x26a5a4c <.text+0x8ec>

# BoardController :: BoardSlot <TryGetClosestEmptyBoardSlot>g__GetClosestEmptyBoardSlot|42_0(BoardSlot boardSlot, System.Int32 degree = 1)
# VA 0x2ba6e94 .. 0x2ba7514 (next mapped method entry)
 2ba6e94: d101c3ff     	sub	sp, sp, #0x70
 2ba6e98: a9017bfd     	stp	x29, x30, [sp, #0x10]
 2ba6e9c: a9026ffc     	stp	x28, x27, [sp, #0x20]
 2ba6ea0: a90367fa     	stp	x26, x25, [sp, #0x30]
 2ba6ea4: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2ba6ea8: a90557f6     	stp	x22, x21, [sp, #0x50]
 2ba6eac: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2ba6eb0: 9001db73     	adrp	x19, 0x6712000
 2ba6eb4: aa0103f5     	mov	x21, x1
 2ba6eb8: aa0003f4     	mov	x20, x0
 2ba6ebc: 39646e68     	ldrb	w8, [x19, #0x91b]
 2ba6ec0: b9000fe2     	str	w2, [sp, #0xc]
 2ba6ec4: 370002a8     	tbnz	w8, #0x0, 0x2ba6f18 <__start_il2cpp+0xde904>
 2ba6ec8: 9001baa0     	adrp	x0, 0x62fa000
 2ba6ecc: f9420800     	ldr	x0, [x0, #0x410]
 2ba6ed0: 97f8bfc4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6ed4: 9001baa0     	adrp	x0, 0x62fa000
 2ba6ed8: f941f400     	ldr	x0, [x0, #0x3e8]
 2ba6edc: 97f8bfc1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6ee0: 9001baa0     	adrp	x0, 0x62fa000
 2ba6ee4: f9420c00     	ldr	x0, [x0, #0x418]
 2ba6ee8: 97f8bfbe     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6eec: 9001baa0     	adrp	x0, 0x62fa000
 2ba6ef0: f9421000     	ldr	x0, [x0, #0x420]
 2ba6ef4: 97f8bfbb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6ef8: 9001baa0     	adrp	x0, 0x62fa000
 2ba6efc: f941f000     	ldr	x0, [x0, #0x3e0]
 2ba6f00: 97f8bfb8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6f04: d001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba6f08: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba6f0c: 97f8bfb5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba6f10: 52800028     	mov	w8, #0x1                // =1
 2ba6f14: 39246e68     	strb	w8, [x19, #0x91b]
 2ba6f18: b4002fd5     	cbz	x21, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba6f1c: 9001baa8     	adrp	x8, 0x62fa000
 2ba6f20: 9001bab3     	adrp	x19, 0x62fa000
 2ba6f24: f941f108     	ldr	x8, [x8, #0x3e0]
 2ba6f28: f941f673     	ldr	x19, [x19, #0x3e8]
 2ba6f2c: 29445aba     	ldp	w26, w22, [x21, #0x20]
 2ba6f30: f9400100     	ldr	x0, [x8]
 2ba6f34: 97f8c051     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba6f38: f9400261     	ldr	x1, [x19]
 2ba6f3c: aa0003f5     	mov	x21, x0
 2ba6f40: 943e05a2     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2ba6f44: b9400fe8     	ldr	w8, [sp, #0xc]
 2ba6f48: 7100051f     	cmp	w8, #0x1
 2ba6f4c: 54002aab     	b.lt	0x2ba74a0 <__start_il2cpp+0xdee8c>
 2ba6f50: d001ba5b     	adrp	x27, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba6f54: 9001babc     	adrp	x28, 0x62fa000
 2ba6f58: 5280003d     	mov	w29, #0x1               // =1
 2ba6f5c: f9478f7b     	ldr	x27, [x27, #0xf18]
 2ba6f60: f9420b9c     	ldr	x28, [x28, #0x410]
 2ba6f64: 2a1f03f3     	mov	w19, wzr
 2ba6f68: 0b130348     	add	w8, w26, w19
 2ba6f6c: aa1403e0     	mov	x0, x20
 2ba6f70: 2a1603e2     	mov	w2, w22
 2ba6f74: 11000501     	add	w1, w8, #0x1
 2ba6f78: 97fffe68     	bl	0x2ba6918 <__start_il2cpp+0xde304>
 2ba6f7c: f9400368     	ldr	x8, [x27]
 2ba6f80: aa0003f7     	mov	x23, x0
 2ba6f84: b940e509     	ldr	w9, [x8, #0xe4]
 2ba6f88: 35000069     	cbnz	w9, 0x2ba6f94 <__start_il2cpp+0xde980>
 2ba6f8c: aa0803e0     	mov	x0, x8
 2ba6f90: 97f8bff3     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba6f94: aa1703e0     	mov	x0, x23
 2ba6f98: aa1f03e1     	mov	x1, xzr
 2ba6f9c: 94be8daa     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba6fa0: 36000420     	tbz	w0, #0x0, 0x2ba7024 <__start_il2cpp+0xdea10>
 2ba6fa4: b4002b77     	cbz	x23, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba6fa8: 3940b2e8     	ldrb	w8, [x23, #0x2c]
 2ba6fac: 340003c8     	cbz	w8, 0x2ba7024 <__start_il2cpp+0xdea10>
 2ba6fb0: 3940b6e8     	ldrb	w8, [x23, #0x2d]
 2ba6fb4: 35000388     	cbnz	w8, 0x2ba7024 <__start_il2cpp+0xdea10>
 2ba6fb8: aa1703e0     	mov	x0, x23
 2ba6fbc: 97ffdd53     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba6fc0: 36000320     	tbz	w0, #0x0, 0x2ba7024 <__start_il2cpp+0xdea10>
 2ba6fc4: b4002a75     	cbz	x21, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba6fc8: b9401eaa     	ldr	w10, [x21, #0x1c]
 2ba6fcc: f9400aa8     	ldr	x8, [x21, #0x10]
 2ba6fd0: f9400389     	ldr	x9, [x28]
 2ba6fd4: 1100054a     	add	w10, w10, #0x1
 2ba6fd8: b9001eaa     	str	w10, [x21, #0x1c]
 2ba6fdc: b40029a8     	cbz	x8, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba6fe0: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2ba6fe4: b940190b     	ldr	w11, [x8, #0x18]
 2ba6fe8: 6b0b015f     	cmp	w10, w11
 2ba6fec: 54000102     	b.hs	0x2ba700c <__start_il2cpp+0xde9f8>
 2ba6ff0: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2ba6ff4: 11000549     	add	w9, w10, #0x1
 2ba6ff8: aa1703e1     	mov	x1, x23
 2ba6ffc: b9001aa9     	str	w9, [x21, #0x18]
 2ba7000: f8020c17     	str	x23, [x0, #0x20]!
 2ba7004: 97f8bf62     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba7008: 14000007     	b	0x2ba7024 <__start_il2cpp+0xdea10>
 2ba700c: f9401128     	ldr	x8, [x9, #0x20]
 2ba7010: aa1503e0     	mov	x0, x21
 2ba7014: aa1703e1     	mov	x1, x23
 2ba7018: f9406108     	ldr	x8, [x8, #0xc0]
 2ba701c: f9403902     	ldr	x2, [x8, #0x70]
 2ba7020: 943e0784     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2ba7024: 11000a69     	add	w9, w19, #0x2
 2ba7028: 11000668     	add	w8, w19, #0x1
 2ba702c: 6b1d013f     	cmp	w9, w29
 2ba7030: 2a0803f3     	mov	w19, w8
 2ba7034: 54fff9ad     	b.le	0x2ba6f68 <__start_il2cpp+0xde954>
 2ba7038: 2a1f03f3     	mov	w19, wzr
 2ba703c: 0b080357     	add	w23, w26, w8
 2ba7040: 0b1302c8     	add	w8, w22, w19
 2ba7044: aa1403e0     	mov	x0, x20
 2ba7048: 2a1703e1     	mov	w1, w23
 2ba704c: 11000502     	add	w2, w8, #0x1
 2ba7050: 97fffe32     	bl	0x2ba6918 <__start_il2cpp+0xde304>
 2ba7054: f9400368     	ldr	x8, [x27]
 2ba7058: aa0003f8     	mov	x24, x0
 2ba705c: b940e509     	ldr	w9, [x8, #0xe4]
 2ba7060: 35000069     	cbnz	w9, 0x2ba706c <__start_il2cpp+0xdea58>
 2ba7064: aa0803e0     	mov	x0, x8
 2ba7068: 97f8bfbd     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba706c: aa1803e0     	mov	x0, x24
 2ba7070: aa1f03e1     	mov	x1, xzr
 2ba7074: 94be8d74     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba7078: 36000420     	tbz	w0, #0x0, 0x2ba70fc <__start_il2cpp+0xdeae8>
 2ba707c: b40024b8     	cbz	x24, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba7080: 3940b308     	ldrb	w8, [x24, #0x2c]
 2ba7084: 340003c8     	cbz	w8, 0x2ba70fc <__start_il2cpp+0xdeae8>
 2ba7088: 3940b708     	ldrb	w8, [x24, #0x2d]
 2ba708c: 35000388     	cbnz	w8, 0x2ba70fc <__start_il2cpp+0xdeae8>
 2ba7090: aa1803e0     	mov	x0, x24
 2ba7094: 97ffdd1d     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba7098: 36000320     	tbz	w0, #0x0, 0x2ba70fc <__start_il2cpp+0xdeae8>
 2ba709c: b40023b5     	cbz	x21, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba70a0: b9401eaa     	ldr	w10, [x21, #0x1c]
 2ba70a4: f9400aa8     	ldr	x8, [x21, #0x10]
 2ba70a8: f9400389     	ldr	x9, [x28]
 2ba70ac: 1100054a     	add	w10, w10, #0x1
 2ba70b0: b9001eaa     	str	w10, [x21, #0x1c]
 2ba70b4: b40022e8     	cbz	x8, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba70b8: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2ba70bc: b940190b     	ldr	w11, [x8, #0x18]
 2ba70c0: 6b0b015f     	cmp	w10, w11
 2ba70c4: 54000102     	b.hs	0x2ba70e4 <__start_il2cpp+0xdead0>
 2ba70c8: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2ba70cc: 11000549     	add	w9, w10, #0x1
 2ba70d0: aa1803e1     	mov	x1, x24
 2ba70d4: b9001aa9     	str	w9, [x21, #0x18]
 2ba70d8: f8020c18     	str	x24, [x0, #0x20]!
 2ba70dc: 97f8bf2c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba70e0: 14000007     	b	0x2ba70fc <__start_il2cpp+0xdeae8>
 2ba70e4: f9401128     	ldr	x8, [x9, #0x20]
 2ba70e8: aa1503e0     	mov	x0, x21
 2ba70ec: aa1803e1     	mov	x1, x24
 2ba70f0: f9406108     	ldr	x8, [x8, #0xc0]
 2ba70f4: f9403902     	ldr	x2, [x8, #0x70]
 2ba70f8: 943e074e     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2ba70fc: 11000a69     	add	w9, w19, #0x2
 2ba7100: 11000668     	add	w8, w19, #0x1
 2ba7104: 6b1d013f     	cmp	w9, w29
 2ba7108: 2a0803f3     	mov	w19, w8
 2ba710c: 54fff9ad     	b.le	0x2ba7040 <__start_il2cpp+0xdea2c>
 2ba7110: 531f7bb3     	lsl	w19, w29, #1
 2ba7114: 0b0802d8     	add	w24, w22, w8
 2ba7118: 7100067f     	cmp	w19, #0x1
 2ba711c: 540014cb     	b.lt	0x2ba73b4 <__start_il2cpp+0xdeda0>
 2ba7120: 2a1f03fc     	mov	w28, wzr
 2ba7124: 510006f7     	sub	w23, w23, #0x1
 2ba7128: aa1403e0     	mov	x0, x20
 2ba712c: 2a1803e2     	mov	w2, w24
 2ba7130: 2a1703e1     	mov	w1, w23
 2ba7134: 97fffdf9     	bl	0x2ba6918 <__start_il2cpp+0xde304>
 2ba7138: f9400368     	ldr	x8, [x27]
 2ba713c: aa0003f9     	mov	x25, x0
 2ba7140: b940e509     	ldr	w9, [x8, #0xe4]
 2ba7144: 35000069     	cbnz	w9, 0x2ba7150 <__start_il2cpp+0xdeb3c>
 2ba7148: aa0803e0     	mov	x0, x8
 2ba714c: 97f8bf84     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba7150: aa1903e0     	mov	x0, x25
 2ba7154: aa1f03e1     	mov	x1, xzr
 2ba7158: 94be8d3b     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba715c: 36000460     	tbz	w0, #0x0, 0x2ba71e8 <__start_il2cpp+0xdebd4>
 2ba7160: b4001d99     	cbz	x25, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba7164: 3940b328     	ldrb	w8, [x25, #0x2c]
 2ba7168: 34000408     	cbz	w8, 0x2ba71e8 <__start_il2cpp+0xdebd4>
 2ba716c: 3940b728     	ldrb	w8, [x25, #0x2d]
 2ba7170: 350003c8     	cbnz	w8, 0x2ba71e8 <__start_il2cpp+0xdebd4>
 2ba7174: aa1903e0     	mov	x0, x25
 2ba7178: 97ffdce4     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba717c: 36000360     	tbz	w0, #0x0, 0x2ba71e8 <__start_il2cpp+0xdebd4>
 2ba7180: b4001c95     	cbz	x21, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba7184: f001ba89     	adrp	x9, 0x62fa000
 2ba7188: b9401eaa     	ldr	w10, [x21, #0x1c]
 2ba718c: f9400aa8     	ldr	x8, [x21, #0x10]
 2ba7190: f9420929     	ldr	x9, [x9, #0x410]
 2ba7194: 1100054a     	add	w10, w10, #0x1
 2ba7198: f9400129     	ldr	x9, [x9]
 2ba719c: b9001eaa     	str	w10, [x21, #0x1c]
 2ba71a0: b4001b88     	cbz	x8, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba71a4: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2ba71a8: b940190b     	ldr	w11, [x8, #0x18]
 2ba71ac: 6b0b015f     	cmp	w10, w11
 2ba71b0: 54000102     	b.hs	0x2ba71d0 <__start_il2cpp+0xdebbc>
 2ba71b4: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2ba71b8: 11000549     	add	w9, w10, #0x1
 2ba71bc: aa1903e1     	mov	x1, x25
 2ba71c0: b9001aa9     	str	w9, [x21, #0x18]
 2ba71c4: f8020c19     	str	x25, [x0, #0x20]!
 2ba71c8: 97f8bef1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba71cc: 14000007     	b	0x2ba71e8 <__start_il2cpp+0xdebd4>
 2ba71d0: f9401128     	ldr	x8, [x9, #0x20]
 2ba71d4: aa1503e0     	mov	x0, x21
 2ba71d8: aa1903e1     	mov	x1, x25
 2ba71dc: f9406108     	ldr	x8, [x8, #0xc0]
 2ba71e0: f9403902     	ldr	x2, [x8, #0x70]
 2ba71e4: 943e0713     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2ba71e8: 1100079c     	add	w28, w28, #0x1
 2ba71ec: 6b13039f     	cmp	w28, w19
 2ba71f0: 54fff9ab     	b.lt	0x2ba7124 <__start_il2cpp+0xdeb10>
 2ba71f4: 7100067f     	cmp	w19, #0x1
 2ba71f8: 54000dab     	b.lt	0x2ba73ac <__start_il2cpp+0xded98>
 2ba71fc: 2a1f03fc     	mov	w28, wzr
 2ba7200: 51000718     	sub	w24, w24, #0x1
 2ba7204: aa1403e0     	mov	x0, x20
 2ba7208: 2a1703e1     	mov	w1, w23
 2ba720c: 2a1803e2     	mov	w2, w24
 2ba7210: 97fffdc2     	bl	0x2ba6918 <__start_il2cpp+0xde304>
 2ba7214: f9400368     	ldr	x8, [x27]
 2ba7218: aa0003f9     	mov	x25, x0
 2ba721c: b940e509     	ldr	w9, [x8, #0xe4]
 2ba7220: 35000069     	cbnz	w9, 0x2ba722c <__start_il2cpp+0xdec18>
 2ba7224: aa0803e0     	mov	x0, x8
 2ba7228: 97f8bf4d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba722c: aa1903e0     	mov	x0, x25
 2ba7230: aa1f03e1     	mov	x1, xzr
 2ba7234: 94be8d04     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba7238: 36000460     	tbz	w0, #0x0, 0x2ba72c4 <__start_il2cpp+0xdecb0>
 2ba723c: b40016b9     	cbz	x25, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba7240: 3940b328     	ldrb	w8, [x25, #0x2c]
 2ba7244: 34000408     	cbz	w8, 0x2ba72c4 <__start_il2cpp+0xdecb0>
 2ba7248: 3940b728     	ldrb	w8, [x25, #0x2d]
 2ba724c: 350003c8     	cbnz	w8, 0x2ba72c4 <__start_il2cpp+0xdecb0>
 2ba7250: aa1903e0     	mov	x0, x25
 2ba7254: 97ffdcad     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba7258: 36000360     	tbz	w0, #0x0, 0x2ba72c4 <__start_il2cpp+0xdecb0>
 2ba725c: b40015b5     	cbz	x21, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba7260: f001ba89     	adrp	x9, 0x62fa000
 2ba7264: b9401eaa     	ldr	w10, [x21, #0x1c]
 2ba7268: f9400aa8     	ldr	x8, [x21, #0x10]
 2ba726c: f9420929     	ldr	x9, [x9, #0x410]
 2ba7270: 1100054a     	add	w10, w10, #0x1
 2ba7274: f9400129     	ldr	x9, [x9]
 2ba7278: b9001eaa     	str	w10, [x21, #0x1c]
 2ba727c: b40014a8     	cbz	x8, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba7280: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2ba7284: b940190b     	ldr	w11, [x8, #0x18]
 2ba7288: 6b0b015f     	cmp	w10, w11
 2ba728c: 54000102     	b.hs	0x2ba72ac <__start_il2cpp+0xdec98>
 2ba7290: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2ba7294: 11000549     	add	w9, w10, #0x1
 2ba7298: aa1903e1     	mov	x1, x25
 2ba729c: b9001aa9     	str	w9, [x21, #0x18]
 2ba72a0: f8020c19     	str	x25, [x0, #0x20]!
 2ba72a4: 97f8beba     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba72a8: 14000007     	b	0x2ba72c4 <__start_il2cpp+0xdecb0>
 2ba72ac: f9401128     	ldr	x8, [x9, #0x20]
 2ba72b0: aa1503e0     	mov	x0, x21
 2ba72b4: aa1903e1     	mov	x1, x25
 2ba72b8: f9406108     	ldr	x8, [x8, #0xc0]
 2ba72bc: f9403902     	ldr	x2, [x8, #0x70]
 2ba72c0: 943e06dc     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2ba72c4: 1100079c     	add	w28, w28, #0x1
 2ba72c8: 6b13039f     	cmp	w28, w19
 2ba72cc: 54fff9ab     	b.lt	0x2ba7200 <__start_il2cpp+0xdebec>
 2ba72d0: 7100067f     	cmp	w19, #0x1
 2ba72d4: 540006cb     	b.lt	0x2ba73ac <__start_il2cpp+0xded98>
 2ba72d8: 2a1f03fc     	mov	w28, wzr
 2ba72dc: 110006f7     	add	w23, w23, #0x1
 2ba72e0: aa1403e0     	mov	x0, x20
 2ba72e4: 2a1803e2     	mov	w2, w24
 2ba72e8: 2a1703e1     	mov	w1, w23
 2ba72ec: 97fffd8b     	bl	0x2ba6918 <__start_il2cpp+0xde304>
 2ba72f0: f9400368     	ldr	x8, [x27]
 2ba72f4: aa0003f9     	mov	x25, x0
 2ba72f8: b940e509     	ldr	w9, [x8, #0xe4]
 2ba72fc: 35000069     	cbnz	w9, 0x2ba7308 <__start_il2cpp+0xdecf4>
 2ba7300: aa0803e0     	mov	x0, x8
 2ba7304: 97f8bf16     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba7308: aa1903e0     	mov	x0, x25
 2ba730c: aa1f03e1     	mov	x1, xzr
 2ba7310: 94be8ccd     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba7314: 36000460     	tbz	w0, #0x0, 0x2ba73a0 <__start_il2cpp+0xded8c>
 2ba7318: b4000fd9     	cbz	x25, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba731c: 3940b328     	ldrb	w8, [x25, #0x2c]
 2ba7320: 34000408     	cbz	w8, 0x2ba73a0 <__start_il2cpp+0xded8c>
 2ba7324: 3940b728     	ldrb	w8, [x25, #0x2d]
 2ba7328: 350003c8     	cbnz	w8, 0x2ba73a0 <__start_il2cpp+0xded8c>
 2ba732c: aa1903e0     	mov	x0, x25
 2ba7330: 97ffdc76     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba7334: 36000360     	tbz	w0, #0x0, 0x2ba73a0 <__start_il2cpp+0xded8c>
 2ba7338: b4000ed5     	cbz	x21, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba733c: f001ba89     	adrp	x9, 0x62fa000
 2ba7340: b9401eaa     	ldr	w10, [x21, #0x1c]
 2ba7344: f9400aa8     	ldr	x8, [x21, #0x10]
 2ba7348: f9420929     	ldr	x9, [x9, #0x410]
 2ba734c: 1100054a     	add	w10, w10, #0x1
 2ba7350: f9400129     	ldr	x9, [x9]
 2ba7354: b9001eaa     	str	w10, [x21, #0x1c]
 2ba7358: b4000dc8     	cbz	x8, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba735c: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2ba7360: b940190b     	ldr	w11, [x8, #0x18]
 2ba7364: 6b0b015f     	cmp	w10, w11
 2ba7368: 54000102     	b.hs	0x2ba7388 <__start_il2cpp+0xded74>
 2ba736c: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2ba7370: 11000549     	add	w9, w10, #0x1
 2ba7374: aa1903e1     	mov	x1, x25
 2ba7378: b9001aa9     	str	w9, [x21, #0x18]
 2ba737c: f8020c19     	str	x25, [x0, #0x20]!
 2ba7380: 97f8be83     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba7384: 14000007     	b	0x2ba73a0 <__start_il2cpp+0xded8c>
 2ba7388: f9401128     	ldr	x8, [x9, #0x20]
 2ba738c: aa1503e0     	mov	x0, x21
 2ba7390: aa1903e1     	mov	x1, x25
 2ba7394: f9406108     	ldr	x8, [x8, #0xc0]
 2ba7398: f9403902     	ldr	x2, [x8, #0x70]
 2ba739c: 943e06a5     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2ba73a0: 1100079c     	add	w28, w28, #0x1
 2ba73a4: 6b13039f     	cmp	w28, w19
 2ba73a8: 54fff9ab     	b.lt	0x2ba72dc <__start_il2cpp+0xdecc8>
 2ba73ac: f001ba9c     	adrp	x28, 0x62fa000
 2ba73b0: f9420b9c     	ldr	x28, [x28, #0x410]
 2ba73b4: 52800033     	mov	w19, #0x1               // =1
 2ba73b8: 0b130302     	add	w2, w24, w19
 2ba73bc: aa1403e0     	mov	x0, x20
 2ba73c0: 2a1703e1     	mov	w1, w23
 2ba73c4: 97fffd55     	bl	0x2ba6918 <__start_il2cpp+0xde304>
 2ba73c8: f9400368     	ldr	x8, [x27]
 2ba73cc: aa0003f9     	mov	x25, x0
 2ba73d0: b940e509     	ldr	w9, [x8, #0xe4]
 2ba73d4: 35000069     	cbnz	w9, 0x2ba73e0 <__start_il2cpp+0xdedcc>
 2ba73d8: aa0803e0     	mov	x0, x8
 2ba73dc: 97f8bee0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba73e0: aa1903e0     	mov	x0, x25
 2ba73e4: aa1f03e1     	mov	x1, xzr
 2ba73e8: 94be8c97     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba73ec: 36000420     	tbz	w0, #0x0, 0x2ba7470 <__start_il2cpp+0xdee5c>
 2ba73f0: b4000919     	cbz	x25, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba73f4: 3940b328     	ldrb	w8, [x25, #0x2c]
 2ba73f8: 340003c8     	cbz	w8, 0x2ba7470 <__start_il2cpp+0xdee5c>
 2ba73fc: 3940b728     	ldrb	w8, [x25, #0x2d]
 2ba7400: 35000388     	cbnz	w8, 0x2ba7470 <__start_il2cpp+0xdee5c>
 2ba7404: aa1903e0     	mov	x0, x25
 2ba7408: 97ffdc40     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba740c: 36000320     	tbz	w0, #0x0, 0x2ba7470 <__start_il2cpp+0xdee5c>
 2ba7410: b4000815     	cbz	x21, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba7414: b9401eaa     	ldr	w10, [x21, #0x1c]
 2ba7418: f9400aa8     	ldr	x8, [x21, #0x10]
 2ba741c: f9400389     	ldr	x9, [x28]
 2ba7420: 1100054a     	add	w10, w10, #0x1
 2ba7424: b9001eaa     	str	w10, [x21, #0x1c]
 2ba7428: b4000748     	cbz	x8, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba742c: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2ba7430: b940190b     	ldr	w11, [x8, #0x18]
 2ba7434: 6b0b015f     	cmp	w10, w11
 2ba7438: 54000102     	b.hs	0x2ba7458 <__start_il2cpp+0xdee44>
 2ba743c: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2ba7440: 11000549     	add	w9, w10, #0x1
 2ba7444: aa1903e1     	mov	x1, x25
 2ba7448: b9001aa9     	str	w9, [x21, #0x18]
 2ba744c: f8020c19     	str	x25, [x0, #0x20]!
 2ba7450: 97f8be4f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba7454: 14000007     	b	0x2ba7470 <__start_il2cpp+0xdee5c>
 2ba7458: f9401128     	ldr	x8, [x9, #0x20]
 2ba745c: aa1503e0     	mov	x0, x21
 2ba7460: aa1903e1     	mov	x1, x25
 2ba7464: f9406108     	ldr	x8, [x8, #0xc0]
 2ba7468: f9403902     	ldr	x2, [x8, #0x70]
 2ba746c: 943e0671     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2ba7470: 11000673     	add	w19, w19, #0x1
 2ba7474: 6b1d027f     	cmp	w19, w29
 2ba7478: 54fffa0d     	b.le	0x2ba73b8 <__start_il2cpp+0xdeda4>
 2ba747c: b40004b5     	cbz	x21, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba7480: b9401aa1     	ldr	w1, [x21, #0x18]
 2ba7484: 7100003f     	cmp	w1, #0x0
 2ba7488: 5400012c     	b.gt	0x2ba74ac <__start_il2cpp+0xdee98>
 2ba748c: b9400fe8     	ldr	w8, [sp, #0xc]
 2ba7490: 6b0803bf     	cmp	w29, w8
 2ba7494: 110007bd     	add	w29, w29, #0x1
 2ba7498: 54ffd661     	b.ne	0x2ba6f64 <__start_il2cpp+0xde950>
 2ba749c: 14000002     	b	0x2ba74a4 <__start_il2cpp+0xdee90>
 2ba74a0: b4000395     	cbz	x21, 0x2ba7510 <__start_il2cpp+0xdeefc>
 2ba74a4: b9401aa1     	ldr	w1, [x21, #0x18]
 2ba74a8: 34000221     	cbz	w1, 0x2ba74ec <__start_il2cpp+0xdeed8>
 2ba74ac: f001ba93     	adrp	x19, 0x62fa000
 2ba74b0: 2a1f03e0     	mov	w0, wzr
 2ba74b4: aa1f03e2     	mov	x2, xzr
 2ba74b8: f9421273     	ldr	x19, [x19, #0x420]
 2ba74bc: 94be43dd     	bl	0x5b38430 <__start_il2cpp+0x306fe1c>
 2ba74c0: f9400262     	ldr	x2, [x19]
 2ba74c4: 2a0003e1     	mov	w1, w0
 2ba74c8: aa1503e0     	mov	x0, x21
 2ba74cc: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2ba74d0: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2ba74d4: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2ba74d8: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2ba74dc: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2ba74e0: a9417bfd     	ldp	x29, x30, [sp, #0x10]
 2ba74e4: 9101c3ff     	add	sp, sp, #0x70
 2ba74e8: 143e059e     	b	0x3b28b60 <__start_il2cpp+0x106054c>
 2ba74ec: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2ba74f0: aa1f03e0     	mov	x0, xzr
 2ba74f4: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2ba74f8: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2ba74fc: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2ba7500: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2ba7504: a9417bfd     	ldp	x29, x30, [sp, #0x10]
 2ba7508: 9101c3ff     	add	sp, sp, #0x70
 2ba750c: d65f03c0     	ret
 2ba7510: 97f8bede     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Collections.Generic.List`1<BoardSlot> GetEmptySlotsInRadius(BoardSlot boardSlot, System.Int32 radiusMax)
# VA 0x2ba7514 .. 0x2ba76e8 (next mapped method entry)
 2ba7514: d10203ff     	sub	sp, sp, #0x80
 2ba7518: a9027bfd     	stp	x29, x30, [sp, #0x20]
 2ba751c: a9036ffc     	stp	x28, x27, [sp, #0x30]
 2ba7520: a90467fa     	stp	x26, x25, [sp, #0x40]
 2ba7524: a9055ff8     	stp	x24, x23, [sp, #0x50]
 2ba7528: a90657f6     	stp	x22, x21, [sp, #0x60]
 2ba752c: a9074ff4     	stp	x20, x19, [sp, #0x70]
 2ba7530: f001db55     	adrp	x21, 0x6712000
 2ba7534: aa0103f3     	mov	x19, x1
 2ba7538: aa0003f4     	mov	x20, x0
 2ba753c: 396422a8     	ldrb	w8, [x21, #0x908]
 2ba7540: b9001fe2     	str	w2, [sp, #0x1c]
 2ba7544: 370001e8     	tbnz	w8, #0x0, 0x2ba7580 <__start_il2cpp+0xdef6c>
 2ba7548: f001ba80     	adrp	x0, 0x62fa000
 2ba754c: f941f400     	ldr	x0, [x0, #0x3e8]
 2ba7550: 97f8be24     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7554: f001ba80     	adrp	x0, 0x62fa000
 2ba7558: f9420c00     	ldr	x0, [x0, #0x418]
 2ba755c: 97f8be21     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7560: f001ba80     	adrp	x0, 0x62fa000
 2ba7564: f941f000     	ldr	x0, [x0, #0x3e0]
 2ba7568: 97f8be1e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba756c: d001ba40     	adrp	x0, 0x62f1000
 2ba7570: f941fc00     	ldr	x0, [x0, #0x3f8]
 2ba7574: 97f8be1b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7578: 52800028     	mov	w8, #0x1                // =1
 2ba757c: 392422a8     	strb	w8, [x21, #0x908]
 2ba7580: b4000b33     	cbz	x19, 0x2ba76e4 <__start_il2cpp+0xdf0d0>
 2ba7584: f9403688     	ldr	x8, [x20, #0x68]
 2ba7588: b4000ae8     	cbz	x8, 0x2ba76e4 <__start_il2cpp+0xdf0d0>
 2ba758c: f001ba89     	adrp	x9, 0x62fa000
 2ba7590: f001ba97     	adrp	x23, 0x62fa000
 2ba7594: d001ba5a     	adrp	x26, 0x62f1000
 2ba7598: f941f129     	ldr	x9, [x9, #0x3e0]
 2ba759c: f941f6f7     	ldr	x23, [x23, #0x3e8]
 2ba75a0: f941ff5a     	ldr	x26, [x26, #0x3f8]
 2ba75a4: 29445a75     	ldp	w21, w22, [x19, #0x20]
 2ba75a8: 29436113     	ldp	w19, w24, [x8, #0x18]
 2ba75ac: f9400120     	ldr	x0, [x9]
 2ba75b0: 97f8beb2     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba75b4: f94002e1     	ldr	x1, [x23]
 2ba75b8: aa0003f7     	mov	x23, x0
 2ba75bc: 943e0403     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2ba75c0: 51000669     	sub	w9, w19, #0x1
 2ba75c4: 51000708     	sub	w8, w24, #0x1
 2ba75c8: 2901cff8     	stp	w24, w19, [sp, #0xc]
 2ba75cc: 2902a7e8     	stp	w8, w9, [sp, #0x14]
 2ba75d0: 52800038     	mov	w24, #0x1               // =1
 2ba75d4: b9401fe8     	ldr	w8, [sp, #0x1c]
 2ba75d8: 6b08031f     	cmp	w24, w8
 2ba75dc: 5400072c     	b.gt	0x2ba76c0 <__start_il2cpp+0xdf0ac>
 2ba75e0: f9400340     	ldr	x0, [x26]
 2ba75e4: aa1a03f9     	mov	x25, x26
 2ba75e8: b940e408     	ldr	w8, [x0, #0xe4]
 2ba75ec: 35000048     	cbnz	w8, 0x2ba75f4 <__start_il2cpp+0xdefe0>
 2ba75f0: 97f8be5b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba75f4: 4b1802a1     	sub	w1, w21, w24
 2ba75f8: 2a1f03e0     	mov	w0, wzr
 2ba75fc: aa1f03e2     	mov	x2, xzr
 2ba7600: 949594e8     	bl	0x510c9a0 <__start_il2cpp+0x264438c>
 2ba7604: 2a0003fa     	mov	w26, w0
 2ba7608: 4b1802c1     	sub	w1, w22, w24
 2ba760c: 2a1f03e0     	mov	w0, wzr
 2ba7610: aa1f03e2     	mov	x2, xzr
 2ba7614: 949594e3     	bl	0x510c9a0 <__start_il2cpp+0x264438c>
 2ba7618: 2a0003f3     	mov	w19, w0
 2ba761c: b9401be0     	ldr	w0, [sp, #0x18]
 2ba7620: 0b150301     	add	w1, w24, w21
 2ba7624: aa1f03e2     	mov	x2, xzr
 2ba7628: 94959532     	bl	0x510caf0 <__start_il2cpp+0x26444dc>
 2ba762c: 2a0003fc     	mov	w28, w0
 2ba7630: b94017e0     	ldr	w0, [sp, #0x14]
 2ba7634: 0b160301     	add	w1, w24, w22
 2ba7638: aa1f03e2     	mov	x2, xzr
 2ba763c: 9495952d     	bl	0x510caf0 <__start_il2cpp+0x26444dc>
 2ba7640: 6b1c035f     	cmp	w26, w28
 2ba7644: 5400020c     	b.gt	0x2ba7684 <__start_il2cpp+0xdf070>
 2ba7648: 2a0003fd     	mov	w29, w0
 2ba764c: 6b1d027f     	cmp	w19, w29
 2ba7650: 2a1303fb     	mov	w27, w19
 2ba7654: 5400012c     	b.gt	0x2ba7678 <__start_il2cpp+0xdf064>
 2ba7658: aa1403e0     	mov	x0, x20
 2ba765c: 2a1a03e1     	mov	w1, w26
 2ba7660: 2a1b03e2     	mov	w2, w27
 2ba7664: aa1703e3     	mov	x3, x23
 2ba7668: 94000020     	bl	0x2ba76e8 <__start_il2cpp+0xdf0d4>
 2ba766c: 1100077b     	add	w27, w27, #0x1
 2ba7670: 6b1d037f     	cmp	w27, w29
 2ba7674: 54ffff2d     	b.le	0x2ba7658 <__start_il2cpp+0xdf044>
 2ba7678: 1100075a     	add	w26, w26, #0x1
 2ba767c: 6b1c035f     	cmp	w26, w28
 2ba7680: 54fffe6d     	b.le	0x2ba764c <__start_il2cpp+0xdf038>
 2ba7684: b4000317     	cbz	x23, 0x2ba76e4 <__start_il2cpp+0xdf0d0>
 2ba7688: b9401ae8     	ldr	w8, [x23, #0x18]
 2ba768c: 7100011f     	cmp	w8, #0x0
 2ba7690: 5400018c     	b.gt	0x2ba76c0 <__start_il2cpp+0xdf0ac>
 2ba7694: f9400320     	ldr	x0, [x25]
 2ba7698: aa1903fa     	mov	x26, x25
 2ba769c: b940e408     	ldr	w8, [x0, #0xe4]
 2ba76a0: 35000048     	cbnz	w8, 0x2ba76a8 <__start_il2cpp+0xdf094>
 2ba76a4: 97f8be2e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba76a8: 294183e1     	ldp	w1, w0, [sp, #0xc]
 2ba76ac: aa1f03e2     	mov	x2, xzr
 2ba76b0: 11000718     	add	w24, w24, #0x1
 2ba76b4: 949594bb     	bl	0x510c9a0 <__start_il2cpp+0x264438c>
 2ba76b8: 6b00031f     	cmp	w24, w0
 2ba76bc: 54fff8cd     	b.le	0x2ba75d4 <__start_il2cpp+0xdefc0>
 2ba76c0: aa1703e0     	mov	x0, x23
 2ba76c4: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2ba76c8: a94657f6     	ldp	x22, x21, [sp, #0x60]
 2ba76cc: a9455ff8     	ldp	x24, x23, [sp, #0x50]
 2ba76d0: a94467fa     	ldp	x26, x25, [sp, #0x40]
 2ba76d4: a9436ffc     	ldp	x28, x27, [sp, #0x30]
 2ba76d8: a9427bfd     	ldp	x29, x30, [sp, #0x20]
 2ba76dc: 910203ff     	add	sp, sp, #0x80
 2ba76e0: d65f03c0     	ret
 2ba76e4: 97f8be69     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void <GetEmptySlotsInRadius>g__CheckSlot|43_0(System.Int32 r, System.Int32 c, System.Collections.Generic.List`1<BoardSlot> slots)
# VA 0x2ba76e8 .. 0x2ba77d8 (next mapped method entry)
 2ba76e8: f81c0ffe     	str	x30, [sp, #-0x40]!
 2ba76ec: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2ba76f0: a90257f6     	stp	x22, x21, [sp, #0x20]
 2ba76f4: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2ba76f8: f001db58     	adrp	x24, 0x6712000
 2ba76fc: b001ba57     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba7700: aa0303f3     	mov	x19, x3
 2ba7704: 39647308     	ldrb	w8, [x24, #0x91c]
 2ba7708: f9478ef7     	ldr	x23, [x23, #0xf18]
 2ba770c: 2a0203f4     	mov	w20, w2
 2ba7710: 2a0103f5     	mov	w21, w1
 2ba7714: aa0003f6     	mov	x22, x0
 2ba7718: 37000128     	tbnz	w8, #0x0, 0x2ba773c <__start_il2cpp+0xdf128>
 2ba771c: f001ba80     	adrp	x0, 0x62fa000
 2ba7720: f9420800     	ldr	x0, [x0, #0x410]
 2ba7724: 97f8bdaf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7728: b001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba772c: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba7730: 97f8bdac     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7734: 52800028     	mov	w8, #0x1                // =1
 2ba7738: 39247308     	strb	w8, [x24, #0x91c]
 2ba773c: aa1603e0     	mov	x0, x22
 2ba7740: 2a1503e1     	mov	w1, w21
 2ba7744: 2a1403e2     	mov	w2, w20
 2ba7748: 97fffc74     	bl	0x2ba6918 <__start_il2cpp+0xde304>
 2ba774c: f94002e8     	ldr	x8, [x23]
 2ba7750: aa0003f4     	mov	x20, x0
 2ba7754: b940e509     	ldr	w9, [x8, #0xe4]
 2ba7758: 35000069     	cbnz	w9, 0x2ba7764 <__start_il2cpp+0xdf150>
 2ba775c: aa0803e0     	mov	x0, x8
 2ba7760: 97f8bdff     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba7764: aa1403e0     	mov	x0, x20
 2ba7768: aa1f03e1     	mov	x1, xzr
 2ba776c: 94be8bb6     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba7770: 36000280     	tbz	w0, #0x0, 0x2ba77c0 <__start_il2cpp+0xdf1ac>
 2ba7774: b4000314     	cbz	x20, 0x2ba77d4 <__start_il2cpp+0xdf1c0>
 2ba7778: 3940b288     	ldrb	w8, [x20, #0x2c]
 2ba777c: 34000228     	cbz	w8, 0x2ba77c0 <__start_il2cpp+0xdf1ac>
 2ba7780: 3940b688     	ldrb	w8, [x20, #0x2d]
 2ba7784: 350001e8     	cbnz	w8, 0x2ba77c0 <__start_il2cpp+0xdf1ac>
 2ba7788: aa1403e0     	mov	x0, x20
 2ba778c: 97ffdb5f     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba7790: 36000180     	tbz	w0, #0x0, 0x2ba77c0 <__start_il2cpp+0xdf1ac>
 2ba7794: b4000213     	cbz	x19, 0x2ba77d4 <__start_il2cpp+0xdf1c0>
 2ba7798: f001ba88     	adrp	x8, 0x62fa000
 2ba779c: aa1303e0     	mov	x0, x19
 2ba77a0: aa1403e1     	mov	x1, x20
 2ba77a4: f9420908     	ldr	x8, [x8, #0x410]
 2ba77a8: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2ba77ac: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2ba77b0: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2ba77b4: f9400102     	ldr	x2, [x8]
 2ba77b8: f84407fe     	ldr	x30, [sp], #0x40
 2ba77bc: 17ec03f0     	b	0x26a877c <.text+0x361c>
 2ba77c0: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2ba77c4: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2ba77c8: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2ba77cc: f84407fe     	ldr	x30, [sp], #0x40
 2ba77d0: d65f03c0     	ret
 2ba77d4: 97f8be2d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: BoardSlot GetFirstEmptyBoardSlot()
# VA 0x2ba77d8 .. 0x2ba7890 (next mapped method entry)
 2ba77d8: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ba77dc: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba77e0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba77e4: f9403408     	ldr	x8, [x0, #0x68]
 2ba77e8: b4000508     	cbz	x8, 0x2ba7888 <__start_il2cpp+0xdf274>
 2ba77ec: b9401909     	ldr	w9, [x8, #0x18]
 2ba77f0: 71000535     	subs	w21, w9, #0x1
 2ba77f4: 540003e4     	b.mi	0x2ba7870 <__start_il2cpp+0xdf25c>
 2ba77f8: aa0003f3     	mov	x19, x0
 2ba77fc: 2a1f03f6     	mov	w22, wzr
 2ba7800: b9401d09     	ldr	w9, [x8, #0x1c]
 2ba7804: 6b0902df     	cmp	w22, w9
 2ba7808: 5400030a     	b.ge	0x2ba7868 <__start_il2cpp+0xdf254>
 2ba780c: f9405268     	ldr	x8, [x19, #0xa0]
 2ba7810: b40003c8     	cbz	x8, 0x2ba7888 <__start_il2cpp+0xdf274>
 2ba7814: b9401909     	ldr	w9, [x8, #0x18]
 2ba7818: eb0902bf     	cmp	x21, x9
 2ba781c: 54000382     	b.hs	0x2ba788c <__start_il2cpp+0xdf278>
 2ba7820: 8b150d08     	add	x8, x8, x21, lsl #3
 2ba7824: f9401108     	ldr	x8, [x8, #0x20]
 2ba7828: b4000308     	cbz	x8, 0x2ba7888 <__start_il2cpp+0xdf274>
 2ba782c: b9401909     	ldr	w9, [x8, #0x18]
 2ba7830: 6b0902df     	cmp	w22, w9
 2ba7834: 540002c2     	b.hs	0x2ba788c <__start_il2cpp+0xdf278>
 2ba7838: 8b36cd08     	add	x8, x8, w22, sxtw #3
 2ba783c: f9401114     	ldr	x20, [x8, #0x20]
 2ba7840: b4000254     	cbz	x20, 0x2ba7888 <__start_il2cpp+0xdf274>
 2ba7844: aa1403e0     	mov	x0, x20
 2ba7848: 97ffdb30     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba784c: 36000060     	tbz	w0, #0x0, 0x2ba7858 <__start_il2cpp+0xdf244>
 2ba7850: 3940b288     	ldrb	w8, [x20, #0x2c]
 2ba7854: 35000108     	cbnz	w8, 0x2ba7874 <__start_il2cpp+0xdf260>
 2ba7858: f9403668     	ldr	x8, [x19, #0x68]
 2ba785c: 110006d6     	add	w22, w22, #0x1
 2ba7860: b5fffd08     	cbnz	x8, 0x2ba7800 <__start_il2cpp+0xdf1ec>
 2ba7864: 14000009     	b	0x2ba7888 <__start_il2cpp+0xdf274>
 2ba7868: f10006b5     	subs	x21, x21, #0x1
 2ba786c: 54fffc8a     	b.ge	0x2ba77fc <__start_il2cpp+0xdf1e8>
 2ba7870: aa1f03f4     	mov	x20, xzr
 2ba7874: aa1403e0     	mov	x0, x20
 2ba7878: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba787c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba7880: f84307fe     	ldr	x30, [sp], #0x30
 2ba7884: d65f03c0     	ret
 2ba7888: 97f8be00     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba788c: 97f8be01     	bl	0x29d7090 <mono_class_get_checked+0x978>

# BoardController :: System.Collections.Generic.List`1<BaseItem> GetItemsAtBoard(System.Int32 itemId, System.Int32 itemLevel = -1, System.Boolean checkLockStatus = True)
# VA 0x2ba7890 .. 0x2ba7a7c (next mapped method entry)
 2ba7890: f81a0ffe     	str	x30, [sp, #-0x60]!
 2ba7894: a9016ffc     	stp	x28, x27, [sp, #0x10]
 2ba7898: a90267fa     	stp	x26, x25, [sp, #0x20]
 2ba789c: a9035ff8     	stp	x24, x23, [sp, #0x30]
 2ba78a0: a90457f6     	stp	x22, x21, [sp, #0x40]
 2ba78a4: a9054ff4     	stp	x20, x19, [sp, #0x50]
 2ba78a8: f001db58     	adrp	x24, 0x6712000
 2ba78ac: d001ba99     	adrp	x25, 0x62f9000
 2ba78b0: d001ba97     	adrp	x23, 0x62f9000
 2ba78b4: 39642708     	ldrb	w8, [x24, #0x909]
 2ba78b8: f9478339     	ldr	x25, [x25, #0xf00]
 2ba78bc: f94786f7     	ldr	x23, [x23, #0xf08]
 2ba78c0: 2a0303f3     	mov	w19, w3
 2ba78c4: 2a0203f4     	mov	w20, w2
 2ba78c8: 2a0103f5     	mov	w21, w1
 2ba78cc: aa0003f6     	mov	x22, x0
 2ba78d0: 37000188     	tbnz	w8, #0x0, 0x2ba7900 <__start_il2cpp+0xdf2ec>
 2ba78d4: d001ba80     	adrp	x0, 0x62f9000
 2ba78d8: f9477400     	ldr	x0, [x0, #0xee8]
 2ba78dc: 97f8bd41     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba78e0: d001ba80     	adrp	x0, 0x62f9000
 2ba78e4: f9478400     	ldr	x0, [x0, #0xf08]
 2ba78e8: 97f8bd3e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba78ec: d001ba80     	adrp	x0, 0x62f9000
 2ba78f0: f9478000     	ldr	x0, [x0, #0xf00]
 2ba78f4: 97f8bd3b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba78f8: 52800028     	mov	w8, #0x1                // =1
 2ba78fc: 39242708     	strb	w8, [x24, #0x909]
 2ba7900: f9400320     	ldr	x0, [x25]
 2ba7904: 97f8bddd     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba7908: f94002e1     	ldr	x1, [x23]
 2ba790c: aa0003f7     	mov	x23, x0
 2ba7910: 943e032e     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2ba7914: f94036c8     	ldr	x8, [x22, #0x68]
 2ba7918: b4000ae8     	cbz	x8, 0x2ba7a74 <__start_il2cpp+0xdf460>
 2ba791c: b9401909     	ldr	w9, [x8, #0x18]
 2ba7920: 7100053f     	cmp	w9, #0x1
 2ba7924: 5400098b     	b.lt	0x2ba7a54 <__start_il2cpp+0xdf440>
 2ba7928: d001ba9a     	adrp	x26, 0x62f9000
 2ba792c: aa1f03fb     	mov	x27, xzr
 2ba7930: f947775a     	ldr	x26, [x26, #0xee8]
 2ba7934: 2a1f03fc     	mov	w28, wzr
 2ba7938: b9401d09     	ldr	w9, [x8, #0x1c]
 2ba793c: 6b09039f     	cmp	w28, w9
 2ba7940: 5400082a     	b.ge	0x2ba7a44 <__start_il2cpp+0xdf430>
 2ba7944: f94052c8     	ldr	x8, [x22, #0xa0]
 2ba7948: b4000968     	cbz	x8, 0x2ba7a74 <__start_il2cpp+0xdf460>
 2ba794c: b9401909     	ldr	w9, [x8, #0x18]
 2ba7950: eb09037f     	cmp	x27, x9
 2ba7954: 54000922     	b.hs	0x2ba7a78 <__start_il2cpp+0xdf464>
 2ba7958: 8b1b0d08     	add	x8, x8, x27, lsl #3
 2ba795c: f9401108     	ldr	x8, [x8, #0x20]
 2ba7960: b40008a8     	cbz	x8, 0x2ba7a74 <__start_il2cpp+0xdf460>
 2ba7964: b9401909     	ldr	w9, [x8, #0x18]
 2ba7968: 6b09039f     	cmp	w28, w9
 2ba796c: 54000862     	b.hs	0x2ba7a78 <__start_il2cpp+0xdf464>
 2ba7970: 8b3ccd08     	add	x8, x8, w28, sxtw #3
 2ba7974: f9401119     	ldr	x25, [x8, #0x20]
 2ba7978: b40007f9     	cbz	x25, 0x2ba7a74 <__start_il2cpp+0xdf460>
 2ba797c: 3940b728     	ldrb	w8, [x25, #0x2d]
 2ba7980: 350005a8     	cbnz	w8, 0x2ba7a34 <__start_il2cpp+0xdf420>
 2ba7984: f9401b38     	ldr	x24, [x25, #0x30]
 2ba7988: aa1903e0     	mov	x0, x25
 2ba798c: 97ffdadf     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba7990: 37000520     	tbnz	w0, #0x0, 0x2ba7a34 <__start_il2cpp+0xdf420>
 2ba7994: 360000b3     	tbz	w19, #0x0, 0x2ba79a8 <__start_il2cpp+0xdf394>
 2ba7998: f9401b28     	ldr	x8, [x25, #0x30]
 2ba799c: b40006c8     	cbz	x8, 0x2ba7a74 <__start_il2cpp+0xdf460>
 2ba79a0: 39410108     	ldrb	w8, [x8, #0x40]
 2ba79a4: 35000488     	cbnz	w8, 0x2ba7a34 <__start_il2cpp+0xdf420>
 2ba79a8: b4000678     	cbz	x24, 0x2ba7a74 <__start_il2cpp+0xdf460>
 2ba79ac: f9402b08     	ldr	x8, [x24, #0x50]
 2ba79b0: b4000628     	cbz	x8, 0x2ba7a74 <__start_il2cpp+0xdf460>
 2ba79b4: b9403108     	ldr	w8, [x8, #0x30]
 2ba79b8: 6b15011f     	cmp	w8, w21
 2ba79bc: 540003c1     	b.ne	0x2ba7a34 <__start_il2cpp+0xdf420>
 2ba79c0: 3100069f     	cmn	w20, #0x1
 2ba79c4: 54000080     	b.eq	0x2ba79d4 <__start_il2cpp+0xdf3c0>
 2ba79c8: b9404708     	ldr	w8, [x24, #0x44]
 2ba79cc: 6b14011f     	cmp	w8, w20
 2ba79d0: 54000321     	b.ne	0x2ba7a34 <__start_il2cpp+0xdf420>
 2ba79d4: b4000517     	cbz	x23, 0x2ba7a74 <__start_il2cpp+0xdf460>
 2ba79d8: b9401eea     	ldr	w10, [x23, #0x1c]
 2ba79dc: f9400ae8     	ldr	x8, [x23, #0x10]
 2ba79e0: f9400349     	ldr	x9, [x26]
 2ba79e4: 1100054a     	add	w10, w10, #0x1
 2ba79e8: b9001eea     	str	w10, [x23, #0x1c]
 2ba79ec: b4000448     	cbz	x8, 0x2ba7a74 <__start_il2cpp+0xdf460>
 2ba79f0: b9801aea     	ldrsw	x10, [x23, #0x18]
 2ba79f4: b940190b     	ldr	w11, [x8, #0x18]
 2ba79f8: 6b0b015f     	cmp	w10, w11
 2ba79fc: 54000102     	b.hs	0x2ba7a1c <__start_il2cpp+0xdf408>
 2ba7a00: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2ba7a04: 11000549     	add	w9, w10, #0x1
 2ba7a08: aa1803e1     	mov	x1, x24
 2ba7a0c: b9001ae9     	str	w9, [x23, #0x18]
 2ba7a10: f8020c18     	str	x24, [x0, #0x20]!
 2ba7a14: 97f8bcde     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba7a18: 14000007     	b	0x2ba7a34 <__start_il2cpp+0xdf420>
 2ba7a1c: f9401128     	ldr	x8, [x9, #0x20]
 2ba7a20: aa1703e0     	mov	x0, x23
 2ba7a24: aa1803e1     	mov	x1, x24
 2ba7a28: f9406108     	ldr	x8, [x8, #0xc0]
 2ba7a2c: f9403902     	ldr	x2, [x8, #0x70]
 2ba7a30: 943e0500     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2ba7a34: f94036c8     	ldr	x8, [x22, #0x68]
 2ba7a38: 1100079c     	add	w28, w28, #0x1
 2ba7a3c: b5fff7e8     	cbnz	x8, 0x2ba7938 <__start_il2cpp+0xdf324>
 2ba7a40: 1400000d     	b	0x2ba7a74 <__start_il2cpp+0xdf460>
 2ba7a44: b9801909     	ldrsw	x9, [x8, #0x18]
 2ba7a48: 9100077b     	add	x27, x27, #0x1
 2ba7a4c: eb09037f     	cmp	x27, x9
 2ba7a50: 54fff72b     	b.lt	0x2ba7934 <__start_il2cpp+0xdf320>
 2ba7a54: aa1703e0     	mov	x0, x23
 2ba7a58: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 2ba7a5c: a94457f6     	ldp	x22, x21, [sp, #0x40]
 2ba7a60: a9435ff8     	ldp	x24, x23, [sp, #0x30]
 2ba7a64: a94267fa     	ldp	x26, x25, [sp, #0x20]
 2ba7a68: a9416ffc     	ldp	x28, x27, [sp, #0x10]
 2ba7a6c: f84607fe     	ldr	x30, [sp], #0x60
 2ba7a70: d65f03c0     	ret
 2ba7a74: 97f8bd85     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba7a78: 97f8bd86     	bl	0x29d7090 <mono_class_get_checked+0x978>

# BoardController :: System.Collections.Generic.List`1<BaseItem> GetItemsAtBoardWithMinLevel(System.Int32 itemId, System.Int32 itemLevel = 1, System.Boolean checkLockStatus = True)
# VA 0x2ba7a7c .. 0x2ba7c60 (next mapped method entry)
 2ba7a7c: f81a0ffe     	str	x30, [sp, #-0x60]!
 2ba7a80: a9016ffc     	stp	x28, x27, [sp, #0x10]
 2ba7a84: a90267fa     	stp	x26, x25, [sp, #0x20]
 2ba7a88: a9035ff8     	stp	x24, x23, [sp, #0x30]
 2ba7a8c: a90457f6     	stp	x22, x21, [sp, #0x40]
 2ba7a90: a9054ff4     	stp	x20, x19, [sp, #0x50]
 2ba7a94: f001db58     	adrp	x24, 0x6712000
 2ba7a98: d001ba99     	adrp	x25, 0x62f9000
 2ba7a9c: d001ba97     	adrp	x23, 0x62f9000
 2ba7aa0: 39642b08     	ldrb	w8, [x24, #0x90a]
 2ba7aa4: f9478339     	ldr	x25, [x25, #0xf00]
 2ba7aa8: f94786f7     	ldr	x23, [x23, #0xf08]
 2ba7aac: 2a0303f3     	mov	w19, w3
 2ba7ab0: 2a0203f4     	mov	w20, w2
 2ba7ab4: 2a0103f5     	mov	w21, w1
 2ba7ab8: aa0003f6     	mov	x22, x0
 2ba7abc: 37000188     	tbnz	w8, #0x0, 0x2ba7aec <__start_il2cpp+0xdf4d8>
 2ba7ac0: d001ba80     	adrp	x0, 0x62f9000
 2ba7ac4: f9477400     	ldr	x0, [x0, #0xee8]
 2ba7ac8: 97f8bcc6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7acc: d001ba80     	adrp	x0, 0x62f9000
 2ba7ad0: f9478400     	ldr	x0, [x0, #0xf08]
 2ba7ad4: 97f8bcc3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7ad8: d001ba80     	adrp	x0, 0x62f9000
 2ba7adc: f9478000     	ldr	x0, [x0, #0xf00]
 2ba7ae0: 97f8bcc0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7ae4: 52800028     	mov	w8, #0x1                // =1
 2ba7ae8: 39242b08     	strb	w8, [x24, #0x90a]
 2ba7aec: f9400320     	ldr	x0, [x25]
 2ba7af0: 97f8bd62     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba7af4: f94002e1     	ldr	x1, [x23]
 2ba7af8: aa0003f7     	mov	x23, x0
 2ba7afc: 943e02b3     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2ba7b00: f94036c8     	ldr	x8, [x22, #0x68]
 2ba7b04: b4000aa8     	cbz	x8, 0x2ba7c58 <__start_il2cpp+0xdf644>
 2ba7b08: b9401909     	ldr	w9, [x8, #0x18]
 2ba7b0c: 7100053f     	cmp	w9, #0x1
 2ba7b10: 5400094b     	b.lt	0x2ba7c38 <__start_il2cpp+0xdf624>
 2ba7b14: d001ba9a     	adrp	x26, 0x62f9000
 2ba7b18: aa1f03fb     	mov	x27, xzr
 2ba7b1c: f947775a     	ldr	x26, [x26, #0xee8]
 2ba7b20: 2a1f03fc     	mov	w28, wzr
 2ba7b24: b9401d09     	ldr	w9, [x8, #0x1c]
 2ba7b28: 6b09039f     	cmp	w28, w9
 2ba7b2c: 540007ea     	b.ge	0x2ba7c28 <__start_il2cpp+0xdf614>
 2ba7b30: f94052c8     	ldr	x8, [x22, #0xa0]
 2ba7b34: b4000928     	cbz	x8, 0x2ba7c58 <__start_il2cpp+0xdf644>
 2ba7b38: b9401909     	ldr	w9, [x8, #0x18]
 2ba7b3c: eb09037f     	cmp	x27, x9
 2ba7b40: 540008e2     	b.hs	0x2ba7c5c <__start_il2cpp+0xdf648>
 2ba7b44: 8b1b0d08     	add	x8, x8, x27, lsl #3
 2ba7b48: f9401108     	ldr	x8, [x8, #0x20]
 2ba7b4c: b4000868     	cbz	x8, 0x2ba7c58 <__start_il2cpp+0xdf644>
 2ba7b50: b9401909     	ldr	w9, [x8, #0x18]
 2ba7b54: 6b09039f     	cmp	w28, w9
 2ba7b58: 54000822     	b.hs	0x2ba7c5c <__start_il2cpp+0xdf648>
 2ba7b5c: 8b3ccd08     	add	x8, x8, w28, sxtw #3
 2ba7b60: f9401119     	ldr	x25, [x8, #0x20]
 2ba7b64: b40007b9     	cbz	x25, 0x2ba7c58 <__start_il2cpp+0xdf644>
 2ba7b68: 3940b728     	ldrb	w8, [x25, #0x2d]
 2ba7b6c: 35000568     	cbnz	w8, 0x2ba7c18 <__start_il2cpp+0xdf604>
 2ba7b70: f9401b38     	ldr	x24, [x25, #0x30]
 2ba7b74: aa1903e0     	mov	x0, x25
 2ba7b78: 97ffda64     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba7b7c: 370004e0     	tbnz	w0, #0x0, 0x2ba7c18 <__start_il2cpp+0xdf604>
 2ba7b80: 360000b3     	tbz	w19, #0x0, 0x2ba7b94 <__start_il2cpp+0xdf580>
 2ba7b84: f9401b28     	ldr	x8, [x25, #0x30]
 2ba7b88: b4000688     	cbz	x8, 0x2ba7c58 <__start_il2cpp+0xdf644>
 2ba7b8c: 39410108     	ldrb	w8, [x8, #0x40]
 2ba7b90: 35000448     	cbnz	w8, 0x2ba7c18 <__start_il2cpp+0xdf604>
 2ba7b94: b4000638     	cbz	x24, 0x2ba7c58 <__start_il2cpp+0xdf644>
 2ba7b98: f9402b08     	ldr	x8, [x24, #0x50]
 2ba7b9c: b40005e8     	cbz	x8, 0x2ba7c58 <__start_il2cpp+0xdf644>
 2ba7ba0: b9403108     	ldr	w8, [x8, #0x30]
 2ba7ba4: 6b15011f     	cmp	w8, w21
 2ba7ba8: 54000381     	b.ne	0x2ba7c18 <__start_il2cpp+0xdf604>
 2ba7bac: b9404708     	ldr	w8, [x24, #0x44]
 2ba7bb0: 6b14011f     	cmp	w8, w20
 2ba7bb4: 5400032b     	b.lt	0x2ba7c18 <__start_il2cpp+0xdf604>
 2ba7bb8: b4000517     	cbz	x23, 0x2ba7c58 <__start_il2cpp+0xdf644>
 2ba7bbc: b9401eea     	ldr	w10, [x23, #0x1c]
 2ba7bc0: f9400ae8     	ldr	x8, [x23, #0x10]
 2ba7bc4: f9400349     	ldr	x9, [x26]
 2ba7bc8: 1100054a     	add	w10, w10, #0x1
 2ba7bcc: b9001eea     	str	w10, [x23, #0x1c]
 2ba7bd0: b4000448     	cbz	x8, 0x2ba7c58 <__start_il2cpp+0xdf644>
 2ba7bd4: b9801aea     	ldrsw	x10, [x23, #0x18]
 2ba7bd8: b940190b     	ldr	w11, [x8, #0x18]
 2ba7bdc: 6b0b015f     	cmp	w10, w11
 2ba7be0: 54000102     	b.hs	0x2ba7c00 <__start_il2cpp+0xdf5ec>
 2ba7be4: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2ba7be8: 11000549     	add	w9, w10, #0x1
 2ba7bec: aa1803e1     	mov	x1, x24
 2ba7bf0: b9001ae9     	str	w9, [x23, #0x18]
 2ba7bf4: f8020c18     	str	x24, [x0, #0x20]!
 2ba7bf8: 97f8bc65     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba7bfc: 14000007     	b	0x2ba7c18 <__start_il2cpp+0xdf604>
 2ba7c00: f9401128     	ldr	x8, [x9, #0x20]
 2ba7c04: aa1703e0     	mov	x0, x23
 2ba7c08: aa1803e1     	mov	x1, x24
 2ba7c0c: f9406108     	ldr	x8, [x8, #0xc0]
 2ba7c10: f9403902     	ldr	x2, [x8, #0x70]
 2ba7c14: 943e0487     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2ba7c18: f94036c8     	ldr	x8, [x22, #0x68]
 2ba7c1c: 1100079c     	add	w28, w28, #0x1
 2ba7c20: b5fff828     	cbnz	x8, 0x2ba7b24 <__start_il2cpp+0xdf510>
 2ba7c24: 1400000d     	b	0x2ba7c58 <__start_il2cpp+0xdf644>
 2ba7c28: b9801909     	ldrsw	x9, [x8, #0x18]
 2ba7c2c: 9100077b     	add	x27, x27, #0x1
 2ba7c30: eb09037f     	cmp	x27, x9
 2ba7c34: 54fff76b     	b.lt	0x2ba7b20 <__start_il2cpp+0xdf50c>
 2ba7c38: aa1703e0     	mov	x0, x23
 2ba7c3c: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 2ba7c40: a94457f6     	ldp	x22, x21, [sp, #0x40]
 2ba7c44: a9435ff8     	ldp	x24, x23, [sp, #0x30]
 2ba7c48: a94267fa     	ldp	x26, x25, [sp, #0x20]
 2ba7c4c: a9416ffc     	ldp	x28, x27, [sp, #0x10]
 2ba7c50: f84607fe     	ldr	x30, [sp], #0x60
 2ba7c54: d65f03c0     	ret
 2ba7c58: 97f8bd0c     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba7c5c: 97f8bd0d     	bl	0x29d7090 <mono_class_get_checked+0x978>

# BoardController :: System.Collections.Generic.List`1<BaseItem> GetAllItemsAtBoard(System.Boolean checkLockStatus = True)
# VA 0x2ba7c60 .. 0x2ba7e10 (next mapped method entry)
 2ba7c60: f81b0ffe     	str	x30, [sp, #-0x50]!
 2ba7c64: a90167fa     	stp	x26, x25, [sp, #0x10]
 2ba7c68: a9025ff8     	stp	x24, x23, [sp, #0x20]
 2ba7c6c: a90357f6     	stp	x22, x21, [sp, #0x30]
 2ba7c70: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2ba7c74: f001db56     	adrp	x22, 0x6712000
 2ba7c78: d001ba97     	adrp	x23, 0x62f9000
 2ba7c7c: d001ba95     	adrp	x21, 0x62f9000
 2ba7c80: 39642ec8     	ldrb	w8, [x22, #0x90b]
 2ba7c84: f94782f7     	ldr	x23, [x23, #0xf00]
 2ba7c88: f94786b5     	ldr	x21, [x21, #0xf08]
 2ba7c8c: 2a0103f3     	mov	w19, w1
 2ba7c90: aa0003f4     	mov	x20, x0
 2ba7c94: 37000188     	tbnz	w8, #0x0, 0x2ba7cc4 <__start_il2cpp+0xdf6b0>
 2ba7c98: d001ba80     	adrp	x0, 0x62f9000
 2ba7c9c: f9477400     	ldr	x0, [x0, #0xee8]
 2ba7ca0: 97f8bc50     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7ca4: d001ba80     	adrp	x0, 0x62f9000
 2ba7ca8: f9478400     	ldr	x0, [x0, #0xf08]
 2ba7cac: 97f8bc4d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7cb0: d001ba80     	adrp	x0, 0x62f9000
 2ba7cb4: f9478000     	ldr	x0, [x0, #0xf00]
 2ba7cb8: 97f8bc4a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7cbc: 52800028     	mov	w8, #0x1                // =1
 2ba7cc0: 39242ec8     	strb	w8, [x22, #0x90b]
 2ba7cc4: f94002e0     	ldr	x0, [x23]
 2ba7cc8: 97f8bcec     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba7ccc: f94002a1     	ldr	x1, [x21]
 2ba7cd0: aa0003f5     	mov	x21, x0
 2ba7cd4: 943e023d     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2ba7cd8: f9403688     	ldr	x8, [x20, #0x68]
 2ba7cdc: b4000968     	cbz	x8, 0x2ba7e08 <__start_il2cpp+0xdf7f4>
 2ba7ce0: b9401909     	ldr	w9, [x8, #0x18]
 2ba7ce4: 7100053f     	cmp	w9, #0x1
 2ba7ce8: 5400082b     	b.lt	0x2ba7dec <__start_il2cpp+0xdf7d8>
 2ba7cec: d001ba98     	adrp	x24, 0x62f9000
 2ba7cf0: aa1f03f9     	mov	x25, xzr
 2ba7cf4: f9477718     	ldr	x24, [x24, #0xee8]
 2ba7cf8: 2a1f03fa     	mov	w26, wzr
 2ba7cfc: b9401d09     	ldr	w9, [x8, #0x1c]
 2ba7d00: 6b09035f     	cmp	w26, w9
 2ba7d04: 540006ca     	b.ge	0x2ba7ddc <__start_il2cpp+0xdf7c8>
 2ba7d08: f9405288     	ldr	x8, [x20, #0xa0]
 2ba7d0c: b40007e8     	cbz	x8, 0x2ba7e08 <__start_il2cpp+0xdf7f4>
 2ba7d10: b9401909     	ldr	w9, [x8, #0x18]
 2ba7d14: eb09033f     	cmp	x25, x9
 2ba7d18: 540007a2     	b.hs	0x2ba7e0c <__start_il2cpp+0xdf7f8>
 2ba7d1c: 8b190d08     	add	x8, x8, x25, lsl #3
 2ba7d20: f9401108     	ldr	x8, [x8, #0x20]
 2ba7d24: b4000728     	cbz	x8, 0x2ba7e08 <__start_il2cpp+0xdf7f4>
 2ba7d28: b9401909     	ldr	w9, [x8, #0x18]
 2ba7d2c: 6b09035f     	cmp	w26, w9
 2ba7d30: 540006e2     	b.hs	0x2ba7e0c <__start_il2cpp+0xdf7f8>
 2ba7d34: 8b3acd08     	add	x8, x8, w26, sxtw #3
 2ba7d38: f9401117     	ldr	x23, [x8, #0x20]
 2ba7d3c: b4000677     	cbz	x23, 0x2ba7e08 <__start_il2cpp+0xdf7f4>
 2ba7d40: 3940b6e8     	ldrb	w8, [x23, #0x2d]
 2ba7d44: 35000448     	cbnz	w8, 0x2ba7dcc <__start_il2cpp+0xdf7b8>
 2ba7d48: f9401af6     	ldr	x22, [x23, #0x30]
 2ba7d4c: aa1703e0     	mov	x0, x23
 2ba7d50: 97ffd9ee     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba7d54: 370003c0     	tbnz	w0, #0x0, 0x2ba7dcc <__start_il2cpp+0xdf7b8>
 2ba7d58: 360000b3     	tbz	w19, #0x0, 0x2ba7d6c <__start_il2cpp+0xdf758>
 2ba7d5c: f9401ae8     	ldr	x8, [x23, #0x30]
 2ba7d60: b4000548     	cbz	x8, 0x2ba7e08 <__start_il2cpp+0xdf7f4>
 2ba7d64: 39410108     	ldrb	w8, [x8, #0x40]
 2ba7d68: 35000328     	cbnz	w8, 0x2ba7dcc <__start_il2cpp+0xdf7b8>
 2ba7d6c: b40004f5     	cbz	x21, 0x2ba7e08 <__start_il2cpp+0xdf7f4>
 2ba7d70: b9401eaa     	ldr	w10, [x21, #0x1c]
 2ba7d74: f9400aa8     	ldr	x8, [x21, #0x10]
 2ba7d78: f9400309     	ldr	x9, [x24]
 2ba7d7c: 1100054a     	add	w10, w10, #0x1
 2ba7d80: b9001eaa     	str	w10, [x21, #0x1c]
 2ba7d84: b4000428     	cbz	x8, 0x2ba7e08 <__start_il2cpp+0xdf7f4>
 2ba7d88: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2ba7d8c: b940190b     	ldr	w11, [x8, #0x18]
 2ba7d90: 6b0b015f     	cmp	w10, w11
 2ba7d94: 54000102     	b.hs	0x2ba7db4 <__start_il2cpp+0xdf7a0>
 2ba7d98: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2ba7d9c: 11000549     	add	w9, w10, #0x1
 2ba7da0: aa1603e1     	mov	x1, x22
 2ba7da4: b9001aa9     	str	w9, [x21, #0x18]
 2ba7da8: f8020c16     	str	x22, [x0, #0x20]!
 2ba7dac: 97f8bbf8     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba7db0: 14000007     	b	0x2ba7dcc <__start_il2cpp+0xdf7b8>
 2ba7db4: f9401128     	ldr	x8, [x9, #0x20]
 2ba7db8: aa1503e0     	mov	x0, x21
 2ba7dbc: aa1603e1     	mov	x1, x22
 2ba7dc0: f9406108     	ldr	x8, [x8, #0xc0]
 2ba7dc4: f9403902     	ldr	x2, [x8, #0x70]
 2ba7dc8: 943e041a     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2ba7dcc: f9403688     	ldr	x8, [x20, #0x68]
 2ba7dd0: 1100075a     	add	w26, w26, #0x1
 2ba7dd4: b5fff948     	cbnz	x8, 0x2ba7cfc <__start_il2cpp+0xdf6e8>
 2ba7dd8: 1400000c     	b	0x2ba7e08 <__start_il2cpp+0xdf7f4>
 2ba7ddc: b9801909     	ldrsw	x9, [x8, #0x18]
 2ba7de0: 91000739     	add	x25, x25, #0x1
 2ba7de4: eb09033f     	cmp	x25, x9
 2ba7de8: 54fff88b     	b.lt	0x2ba7cf8 <__start_il2cpp+0xdf6e4>
 2ba7dec: aa1503e0     	mov	x0, x21
 2ba7df0: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2ba7df4: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2ba7df8: a9425ff8     	ldp	x24, x23, [sp, #0x20]
 2ba7dfc: a94167fa     	ldp	x26, x25, [sp, #0x10]
 2ba7e00: f84507fe     	ldr	x30, [sp], #0x50
 2ba7e04: d65f03c0     	ret
 2ba7e08: 97f8bca0     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba7e0c: 97f8bca1     	bl	0x29d7090 <mono_class_get_checked+0x978>

# BoardController :: BoardData FillBoardDataUsingGameData()
# VA 0x2ba7e10 .. 0x2ba84e4 (next mapped method entry)
 2ba7e10: d10283ff     	sub	sp, sp, #0xa0
 2ba7e14: a9047bfd     	stp	x29, x30, [sp, #0x40]
 2ba7e18: a9056ffc     	stp	x28, x27, [sp, #0x50]
 2ba7e1c: a90667fa     	stp	x26, x25, [sp, #0x60]
 2ba7e20: a9075ff8     	stp	x24, x23, [sp, #0x70]
 2ba7e24: a90857f6     	stp	x22, x21, [sp, #0x80]
 2ba7e28: a9094ff4     	stp	x20, x19, [sp, #0x90]
 2ba7e2c: f001db54     	adrp	x20, 0x6712000
 2ba7e30: aa0003f3     	mov	x19, x0
 2ba7e34: 39643288     	ldrb	w8, [x20, #0x90c]
 2ba7e38: 370005a8     	tbnz	w8, #0x0, 0x2ba7eec <__start_il2cpp+0xdf8d8>
 2ba7e3c: d001ba80     	adrp	x0, 0x62f9000
 2ba7e40: f946fc00     	ldr	x0, [x0, #0xdf8]
 2ba7e44: 97f8bbe7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7e48: f001ba80     	adrp	x0, 0x62fa000
 2ba7e4c: f9409400     	ldr	x0, [x0, #0x128]
 2ba7e50: 97f8bbe4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7e54: f001ba40     	adrp	x0, 0x62f2000
 2ba7e58: f940ac00     	ldr	x0, [x0, #0x158]
 2ba7e5c: 97f8bbe1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7e60: b001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba7e64: f946e800     	ldr	x0, [x0, #0xdd0]
 2ba7e68: 97f8bbde     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7e6c: f001ba80     	adrp	x0, 0x62fa000
 2ba7e70: f9421400     	ldr	x0, [x0, #0x428]
 2ba7e74: 97f8bbdb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7e78: f001ba80     	adrp	x0, 0x62fa000
 2ba7e7c: f9421800     	ldr	x0, [x0, #0x430]
 2ba7e80: 97f8bbd8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7e84: f001ba80     	adrp	x0, 0x62fa000
 2ba7e88: f9421c00     	ldr	x0, [x0, #0x438]
 2ba7e8c: 97f8bbd5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7e90: b001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba7e94: f946f000     	ldr	x0, [x0, #0xde0]
 2ba7e98: 97f8bbd2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7e9c: d001ba80     	adrp	x0, 0x62f9000
 2ba7ea0: f9471800     	ldr	x0, [x0, #0xe30]
 2ba7ea4: 97f8bbcf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7ea8: f001ba80     	adrp	x0, 0x62fa000
 2ba7eac: f9422000     	ldr	x0, [x0, #0x440]
 2ba7eb0: 97f8bbcc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7eb4: f001ba80     	adrp	x0, 0x62fa000
 2ba7eb8: f9422400     	ldr	x0, [x0, #0x448]
 2ba7ebc: 97f8bbc9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7ec0: b001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba7ec4: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba7ec8: 97f8bbc6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7ecc: f001ba80     	adrp	x0, 0x62fa000
 2ba7ed0: f9422800     	ldr	x0, [x0, #0x450]
 2ba7ed4: 97f8bbc3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7ed8: f001ba80     	adrp	x0, 0x62fa000
 2ba7edc: f9422c00     	ldr	x0, [x0, #0x458]
 2ba7ee0: 97f8bbc0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba7ee4: 52800028     	mov	w8, #0x1                // =1
 2ba7ee8: 39243288     	strb	w8, [x20, #0x90c]
 2ba7eec: f9405275     	ldr	x21, [x19, #0xa0]
 2ba7ef0: a9037fff     	stp	xzr, xzr, [sp, #0x30]
 2ba7ef4: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2ba7ef8: b4002d15     	cbz	x21, 0x2ba8498 <__start_il2cpp+0xdfe84>
 2ba7efc: f9400ea8     	ldr	x8, [x21, #0x18]
 2ba7f00: 7100051f     	cmp	w8, #0x1
 2ba7f04: 54002a4b     	b.lt	0x2ba844c <__start_il2cpp+0xdfe38>
 2ba7f08: b001ba58     	adrp	x24, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba7f0c: aa1f03f7     	mov	x23, xzr
 2ba7f10: 2a1f03f6     	mov	w22, wzr
 2ba7f14: f9478f18     	ldr	x24, [x24, #0xf18]
 2ba7f18: 92407d08     	and	x8, x8, #0xffffffff
 2ba7f1c: eb2842ff     	cmp	x23, w8, uxtw
 2ba7f20: 54002d02     	b.hs	0x2ba84c0 <__start_il2cpp+0xdfeac>
 2ba7f24: 8b170ea9     	add	x9, x21, x23, lsl #3
 2ba7f28: f9401139     	ldr	x25, [x9, #0x20]
 2ba7f2c: b4000459     	cbz	x25, 0x2ba7fb4 <__start_il2cpp+0xdf9a0>
 2ba7f30: f9400f29     	ldr	x9, [x25, #0x18]
 2ba7f34: 7100053f     	cmp	w9, #0x1
 2ba7f38: 540003eb     	b.lt	0x2ba7fb4 <__start_il2cpp+0xdf9a0>
 2ba7f3c: aa1f03fa     	mov	x26, xzr
 2ba7f40: 92407d28     	and	x8, x9, #0xffffffff
 2ba7f44: 9100833b     	add	x27, x25, #0x20
 2ba7f48: eb28435f     	cmp	x26, w8, uxtw
 2ba7f4c: 54002ba2     	b.hs	0x2ba84c0 <__start_il2cpp+0xdfeac>
 2ba7f50: f9400300     	ldr	x0, [x24]
 2ba7f54: f87a7b74     	ldr	x20, [x27, x26, lsl #3]
 2ba7f58: b940e408     	ldr	w8, [x0, #0xe4]
 2ba7f5c: 35000048     	cbnz	w8, 0x2ba7f64 <__start_il2cpp+0xdf950>
 2ba7f60: 97f8bbff     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba7f64: aa1403e0     	mov	x0, x20
 2ba7f68: aa1f03e1     	mov	x1, xzr
 2ba7f6c: aa1f03e2     	mov	x2, xzr
 2ba7f70: 94be79a2     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba7f74: 37000160     	tbnz	w0, #0x0, 0x2ba7fa0 <__start_il2cpp+0xdf98c>
 2ba7f78: b4002a34     	cbz	x20, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba7f7c: f9400300     	ldr	x0, [x24]
 2ba7f80: f9401a94     	ldr	x20, [x20, #0x30]
 2ba7f84: b940e408     	ldr	w8, [x0, #0xe4]
 2ba7f88: 35000048     	cbnz	w8, 0x2ba7f90 <__start_il2cpp+0xdf97c>
 2ba7f8c: 97f8bbf4     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba7f90: aa1403e0     	mov	x0, x20
 2ba7f94: aa1f03e1     	mov	x1, xzr
 2ba7f98: 94be89ab     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba7f9c: 2a160016     	orr	w22, w0, w22
 2ba7fa0: b9401b28     	ldr	w8, [x25, #0x18]
 2ba7fa4: 9100075a     	add	x26, x26, #0x1
 2ba7fa8: eb28c35f     	cmp	x26, w8, sxtw
 2ba7fac: 54fffceb     	b.lt	0x2ba7f48 <__start_il2cpp+0xdf934>
 2ba7fb0: b9401aa8     	ldr	w8, [x21, #0x18]
 2ba7fb4: 910006f7     	add	x23, x23, #0x1
 2ba7fb8: eb28c2ff     	cmp	x23, w8, sxtw
 2ba7fbc: 54fffb0b     	b.lt	0x2ba7f1c <__start_il2cpp+0xdf908>
 2ba7fc0: 36002476     	tbz	w22, #0x0, 0x2ba844c <__start_il2cpp+0xdfe38>
 2ba7fc4: f9403668     	ldr	x8, [x19, #0x68]
 2ba7fc8: b40027a8     	cbz	x8, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba7fcc: b9401909     	ldr	w9, [x8, #0x18]
 2ba7fd0: 7100053f     	cmp	w9, #0x1
 2ba7fd4: 5400236b     	b.lt	0x2ba8440 <__start_il2cpp+0xdfe2c>
 2ba7fd8: f001ba9c     	adrp	x28, 0x62fa000
 2ba7fdc: d001ba9b     	adrp	x27, 0x62f9000
 2ba7fe0: f001ba9a     	adrp	x26, 0x62fa000
 2ba7fe4: f942279c     	ldr	x28, [x28, #0x448]
 2ba7fe8: f946ff7b     	ldr	x27, [x27, #0xdf8]
 2ba7fec: f9422b5a     	ldr	x26, [x26, #0x450]
 2ba7ff0: 2a1f03f7     	mov	w23, wzr
 2ba7ff4: f9405269     	ldr	x9, [x19, #0xa0]
 2ba7ff8: b4002629     	cbz	x9, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba7ffc: b940192a     	ldr	w10, [x9, #0x18]
 2ba8000: 6b0a02ff     	cmp	w23, w10
 2ba8004: 540025e2     	b.hs	0x2ba84c0 <__start_il2cpp+0xdfeac>
 2ba8008: 2a1703ea     	mov	w10, w23
 2ba800c: 8b0a0d29     	add	x9, x9, x10, lsl #3
 2ba8010: f90003ea     	str	x10, [sp]
 2ba8014: f9401129     	ldr	x9, [x9, #0x20]
 2ba8018: b4002409     	cbz	x9, 0x2ba8498 <__start_il2cpp+0xdfe84>
 2ba801c: aa1f03f9     	mov	x25, xzr
 2ba8020: b9801d09     	ldrsw	x9, [x8, #0x1c]
 2ba8024: eb09033f     	cmp	x25, x9
 2ba8028: 5400204a     	b.ge	0x2ba8430 <__start_il2cpp+0xdfe1c>
 2ba802c: f9405268     	ldr	x8, [x19, #0xa0]
 2ba8030: b4002468     	cbz	x8, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba8034: b9401909     	ldr	w9, [x8, #0x18]
 2ba8038: 6b0902ff     	cmp	w23, w9
 2ba803c: 54002422     	b.hs	0x2ba84c0 <__start_il2cpp+0xdfeac>
 2ba8040: f94003e9     	ldr	x9, [sp]
 2ba8044: 8b090d08     	add	x8, x8, x9, lsl #3
 2ba8048: f9401108     	ldr	x8, [x8, #0x20]
 2ba804c: b4002388     	cbz	x8, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba8050: b9401909     	ldr	w9, [x8, #0x18]
 2ba8054: eb09033f     	cmp	x25, x9
 2ba8058: 54002342     	b.hs	0x2ba84c0 <__start_il2cpp+0xdfeac>
 2ba805c: f9400300     	ldr	x0, [x24]
 2ba8060: 8b190d08     	add	x8, x8, x25, lsl #3
 2ba8064: b940e409     	ldr	w9, [x0, #0xe4]
 2ba8068: f9401116     	ldr	x22, [x8, #0x20]
 2ba806c: 35000049     	cbnz	w9, 0x2ba8074 <__start_il2cpp+0xdfa60>
 2ba8070: 97f8bbbb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba8074: aa1603e0     	mov	x0, x22
 2ba8078: aa1f03e1     	mov	x1, xzr
 2ba807c: aa1f03e2     	mov	x2, xzr
 2ba8080: 94be795e     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba8084: 37001960     	tbnz	w0, #0x0, 0x2ba83b0 <__start_il2cpp+0xdfd9c>
 2ba8088: f9403668     	ldr	x8, [x19, #0x68]
 2ba808c: b4002188     	cbz	x8, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba8090: b9401d14     	ldr	w20, [x8, #0x1c]
 2ba8094: aa1303e0     	mov	x0, x19
 2ba8098: 97fff7bf     	bl	0x2ba5f94 <__start_il2cpp+0xdd980>
 2ba809c: b4002100     	cbz	x0, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba80a0: f9400800     	ldr	x0, [x0, #0x10]
 2ba80a4: b40020c0     	cbz	x0, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba80a8: 1b176681     	madd	w1, w20, w23, w25
 2ba80ac: f9400382     	ldr	x2, [x28]
 2ba80b0: 943e02ac     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2ba80b4: b4002040     	cbz	x0, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba80b8: aa0003f4     	mov	x20, x0
 2ba80bc: 97ffd543     	bl	0x2b9d5c8 <__start_il2cpp+0xd4fb4>
 2ba80c0: b4001ff6     	cbz	x22, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba80c4: 3940b6c8     	ldrb	w8, [x22, #0x2d]
 2ba80c8: f9400300     	ldr	x0, [x24]
 2ba80cc: 39004288     	strb	w8, [x20, #0x10]
 2ba80d0: b940e408     	ldr	w8, [x0, #0xe4]
 2ba80d4: f9401ad5     	ldr	x21, [x22, #0x30]
 2ba80d8: 35000048     	cbnz	w8, 0x2ba80e0 <__start_il2cpp+0xdfacc>
 2ba80dc: 97f8bba0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba80e0: aa1503e0     	mov	x0, x21
 2ba80e4: aa1f03e1     	mov	x1, xzr
 2ba80e8: 94be8957     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba80ec: 36001620     	tbz	w0, #0x0, 0x2ba83b0 <__start_il2cpp+0xdfd9c>
 2ba80f0: f9401ac0     	ldr	x0, [x22, #0x30]
 2ba80f4: b4001e40     	cbz	x0, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba80f8: f9402808     	ldr	x8, [x0, #0x50]
 2ba80fc: b4001e08     	cbz	x8, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba8100: b9403108     	ldr	w8, [x8, #0x30]
 2ba8104: d001ba89     	adrp	x9, 0x62fa000
 2ba8108: aa1a03fd     	mov	x29, x26
 2ba810c: aa1b03fa     	mov	x26, x27
 2ba8110: aa1c03fb     	mov	x27, x28
 2ba8114: aa1803fc     	mov	x28, x24
 2ba8118: b9001688     	str	w8, [x20, #0x14]
 2ba811c: aa1303f8     	mov	x24, x19
 2ba8120: b9404408     	ldr	w8, [x0, #0x44]
 2ba8124: b9001e88     	str	w8, [x20, #0x1c]
 2ba8128: 39410008     	ldrb	w8, [x0, #0x40]
 2ba812c: f9409529     	ldr	x9, [x9, #0x128]
 2ba8130: f9400121     	ldr	x1, [x9]
 2ba8134: 39006288     	strb	w8, [x20, #0x18]
 2ba8138: 941fe276     	bl	0x33a0b10 <__start_il2cpp+0x8d84fc>
 2ba813c: f9400388     	ldr	x8, [x28]
 2ba8140: aa0003f3     	mov	x19, x0
 2ba8144: b940e509     	ldr	w9, [x8, #0xe4]
 2ba8148: 35000069     	cbnz	w9, 0x2ba8154 <__start_il2cpp+0xdfb40>
 2ba814c: aa0803e0     	mov	x0, x8
 2ba8150: 97f8bb83     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba8154: aa1303e0     	mov	x0, x19
 2ba8158: aa1f03e1     	mov	x1, xzr
 2ba815c: aa1f03e2     	mov	x2, xzr
 2ba8160: 94be6b1f     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2ba8164: 36000380     	tbz	w0, #0x0, 0x2ba81d4 <__start_il2cpp+0xdfbc0>
 2ba8168: f9401ac0     	ldr	x0, [x22, #0x30]
 2ba816c: b4001a80     	cbz	x0, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba8170: d001ba88     	adrp	x8, 0x62fa000
 2ba8174: aa1803f3     	mov	x19, x24
 2ba8178: f9409508     	ldr	x8, [x8, #0x128]
 2ba817c: f9400101     	ldr	x1, [x8]
 2ba8180: 941fe264     	bl	0x33a0b10 <__start_il2cpp+0x8d84fc>
 2ba8184: b40019c0     	cbz	x0, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba8188: d001ba48     	adrp	x8, 0x62f2000
 2ba818c: fd402c00     	ldr	d0, [x0, #0x58]
 2ba8190: aa0003f6     	mov	x22, x0
 2ba8194: f940ad08     	ldr	x8, [x8, #0x158]
 2ba8198: aa1c03f8     	mov	x24, x28
 2ba819c: aa1b03fc     	mov	x28, x27
 2ba81a0: fd001280     	str	d0, [x20, #0x20]
 2ba81a4: f9400100     	ldr	x0, [x8]
 2ba81a8: b940e408     	ldr	w8, [x0, #0xe4]
 2ba81ac: 35000048     	cbnz	w8, 0x2ba81b4 <__start_il2cpp+0xdfba0>
 2ba81b0: 97f8bb6b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba81b4: 910142c0     	add	x0, x22, #0x50
 2ba81b8: aa1f03e1     	mov	x1, xzr
 2ba81bc: 949512db     	bl	0x50ecd28 <__start_il2cpp+0x2624714>
 2ba81c0: aa0003e1     	mov	x1, x0
 2ba81c4: aa1403e0     	mov	x0, x20
 2ba81c8: f8028c01     	str	x1, [x0, #0x28]!
 2ba81cc: 97f8baf0     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba81d0: 14000018     	b	0x2ba8230 <__start_il2cpp+0xdfc1c>
 2ba81d4: d001ba49     	adrp	x9, 0x62f2000
 2ba81d8: 6f07e7e0     	movi	v0.2d, #0xffffffffffffffff
 2ba81dc: aa1803f3     	mov	x19, x24
 2ba81e0: f940ad29     	ldr	x9, [x9, #0x158]
 2ba81e4: f9400120     	ldr	x0, [x9]
 2ba81e8: fd001280     	str	d0, [x20, #0x20]
 2ba81ec: b940e408     	ldr	w8, [x0, #0xe4]
 2ba81f0: 35000088     	cbnz	w8, 0x2ba8200 <__start_il2cpp+0xdfbec>
 2ba81f4: aa0903f6     	mov	x22, x9
 2ba81f8: 97f8bb59     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba81fc: f94002c0     	ldr	x0, [x22]
 2ba8200: f9405c08     	ldr	x8, [x0, #0xb8]
 2ba8204: 9100e3e0     	add	x0, sp, #0x38
 2ba8208: aa1f03e1     	mov	x1, xzr
 2ba820c: aa1c03f8     	mov	x24, x28
 2ba8210: f9400908     	ldr	x8, [x8, #0x10]
 2ba8214: f9001fe8     	str	x8, [sp, #0x38]
 2ba8218: 949512c4     	bl	0x50ecd28 <__start_il2cpp+0x2624714>
 2ba821c: aa0003e1     	mov	x1, x0
 2ba8220: aa1403e0     	mov	x0, x20
 2ba8224: f8028c01     	str	x1, [x0, #0x28]!
 2ba8228: 97f8bad9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba822c: aa1b03fc     	mov	x28, x27
 2ba8230: aa1a03fb     	mov	x27, x26
 2ba8234: b4001455     	cbz	x21, 0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba8238: aa1d03fa     	mov	x26, x29
 2ba823c: d001ba9d     	adrp	x29, 0x62fa000
 2ba8240: f9405ea0     	ldr	x0, [x21, #0xb8]
 2ba8244: f9421bbd     	ldr	x29, [x29, #0x430]
 2ba8248: b4000b40     	cbz	x0, 0x2ba83b0 <__start_il2cpp+0xdfd9c>
 2ba824c: d001ba88     	adrp	x8, 0x62fa000
 2ba8250: f9422108     	ldr	x8, [x8, #0x440]
 2ba8254: f9400101     	ldr	x1, [x8]
 2ba8258: 910023e8     	add	x8, sp, #0x8
 2ba825c: 943e05d9     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2ba8260: f9400fe8     	ldr	x8, [sp, #0x18]
 2ba8264: 3cc083e0     	ldur	q0, [sp, #0x8]
 2ba8268: f9001be8     	str	x8, [sp, #0x30]
 2ba826c: 910083e8     	add	x8, sp, #0x20
 2ba8270: 3d800be0     	str	q0, [sp, #0x20]
 2ba8274: a900a3ff     	stp	xzr, x8, [sp, #0x8]
 2ba8278: f94003a1     	ldr	x1, [x29]
 2ba827c: 910083e0     	add	x0, sp, #0x20
 2ba8280: 947b7986     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2ba8284: 360008c0     	tbz	w0, #0x0, 0x2ba839c <__start_il2cpp+0xdfd88>
 2ba8288: f9401bf6     	ldr	x22, [sp, #0x30]
 2ba828c: f9400360     	ldr	x0, [x27]
 2ba8290: 97f8bb7a     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba8294: aa1f03e1     	mov	x1, xzr
 2ba8298: aa0003f5     	mov	x21, x0
 2ba829c: 94969e2b     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2ba82a0: b4000956     	cbz	x22, 0x2ba83c8 <__start_il2cpp+0xdfdb4>
 2ba82a4: b4000975     	cbz	x21, 0x2ba83d0 <__start_il2cpp+0xdfdbc>
 2ba82a8: b94032c8     	ldr	w8, [x22, #0x30]
 2ba82ac: b90012a8     	str	w8, [x21, #0x10]
 2ba82b0: 3940d2c8     	ldrb	w8, [x22, #0x34]
 2ba82b4: 390052a8     	strb	w8, [x21, #0x14]
 2ba82b8: b9403ac8     	ldr	w8, [x22, #0x38]
 2ba82bc: b9001aa8     	str	w8, [x21, #0x18]
 2ba82c0: f94026c0     	ldr	x0, [x22, #0x48]
 2ba82c4: aa1f03e1     	mov	x1, xzr
 2ba82c8: 94025c33     	bl	0x2c3f394 <__start_il2cpp+0x176d80>
 2ba82cc: aa0003e1     	mov	x1, x0
 2ba82d0: aa1503e0     	mov	x0, x21
 2ba82d4: f8020c01     	str	x1, [x0, #0x20]!
 2ba82d8: 97f8baad     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba82dc: f9402ac0     	ldr	x0, [x22, #0x50]
 2ba82e0: aa1f03e1     	mov	x1, xzr
 2ba82e4: 94025c2c     	bl	0x2c3f394 <__start_il2cpp+0x176d80>
 2ba82e8: aa0003e1     	mov	x1, x0
 2ba82ec: aa1503e0     	mov	x0, x21
 2ba82f0: f8028c01     	str	x1, [x0, #0x28]!
 2ba82f4: 97f8baa6     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba82f8: f9400348     	ldr	x8, [x26]
 2ba82fc: f94002c9     	ldr	x9, [x22]
 2ba8300: 3944c12b     	ldrb	w11, [x9, #0x130]
 2ba8304: 3944c10a     	ldrb	w10, [x8, #0x130]
 2ba8308: 6b0a017f     	cmp	w11, w10
 2ba830c: 54000103     	b.lo	0x2ba832c <__start_il2cpp+0xdfd18>
 2ba8310: f9406529     	ldr	x9, [x9, #0xc8]
 2ba8314: 8b0a0d29     	add	x9, x9, x10, lsl #3
 2ba8318: f85f8129     	ldur	x9, [x9, #-0x8]
 2ba831c: eb08013f     	cmp	x9, x8
 2ba8320: 54000061     	b.ne	0x2ba832c <__start_il2cpp+0xdfd18>
 2ba8324: b940d6c8     	ldr	w8, [x22, #0xd4]
 2ba8328: b90032a8     	str	w8, [x21, #0x30]
 2ba832c: f9401a80     	ldr	x0, [x20, #0x30]
 2ba8330: b4000480     	cbz	x0, 0x2ba83c0 <__start_il2cpp+0xdfdac>
 2ba8334: b001ba89     	adrp	x9, 0x62f9000
 2ba8338: b9401c0a     	ldr	w10, [x0, #0x1c]
 2ba833c: f9400808     	ldr	x8, [x0, #0x10]
 2ba8340: f9471929     	ldr	x9, [x9, #0xe30]
 2ba8344: 1100054a     	add	w10, w10, #0x1
 2ba8348: f9400129     	ldr	x9, [x9]
 2ba834c: b9001c0a     	str	w10, [x0, #0x1c]
 2ba8350: b4000388     	cbz	x8, 0x2ba83c0 <__start_il2cpp+0xdfdac>
 2ba8354: b980180a     	ldrsw	x10, [x0, #0x18]
 2ba8358: b940190b     	ldr	w11, [x8, #0x18]
 2ba835c: 6b0b015f     	cmp	w10, w11
 2ba8360: 54000122     	b.hs	0x2ba8384 <__start_il2cpp+0xdfd70>
 2ba8364: 8b0a0d08     	add	x8, x8, x10, lsl #3
 2ba8368: 11000549     	add	w9, w10, #0x1
 2ba836c: b9001809     	str	w9, [x0, #0x18]
 2ba8370: f8020d15     	str	x21, [x8, #0x20]!
 2ba8374: aa0803e0     	mov	x0, x8
 2ba8378: aa1503e1     	mov	x1, x21
 2ba837c: 97f8ba84     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba8380: 17ffffbe     	b	0x2ba8278 <__start_il2cpp+0xdfc64>
 2ba8384: f9401128     	ldr	x8, [x9, #0x20]
 2ba8388: f9406108     	ldr	x8, [x8, #0xc0]
 2ba838c: f9403902     	ldr	x2, [x8, #0x70]
 2ba8390: aa1503e1     	mov	x1, x21
 2ba8394: 943e02a7     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2ba8398: 17ffffb8     	b	0x2ba8278 <__start_il2cpp+0xdfc64>
 2ba839c: d001ba88     	adrp	x8, 0x62fa000
 2ba83a0: 910083e0     	add	x0, sp, #0x20
 2ba83a4: f9421508     	ldr	x8, [x8, #0x428]
 2ba83a8: f9400101     	ldr	x1, [x8]
 2ba83ac: 947b793a     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2ba83b0: f9403668     	ldr	x8, [x19, #0x68]
 2ba83b4: 91000739     	add	x25, x25, #0x1
 2ba83b8: b5ffe348     	cbnz	x8, 0x2ba8020 <__start_il2cpp+0xdfa0c>
 2ba83bc: 14000040     	b	0x2ba84bc <__start_il2cpp+0xdfea8>
 2ba83c0: 97f8bb32     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba83c4: 14000042     	b	0x2ba84cc <__start_il2cpp+0xdfeb8>
 2ba83c8: 97f8bb30     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba83cc: 14000040     	b	0x2ba84cc <__start_il2cpp+0xdfeb8>
 2ba83d0: 97f8bb2e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba83d4: 1400003e     	b	0x2ba84cc <__start_il2cpp+0xdfeb8>
 2ba83d8: 14000007     	b	0x2ba83f4 <__start_il2cpp+0xdfde0>
 2ba83dc: 14000006     	b	0x2ba83f4 <__start_il2cpp+0xdfde0>
 2ba83e0: 14000005     	b	0x2ba83f4 <__start_il2cpp+0xdfde0>
 2ba83e4: 14000004     	b	0x2ba83f4 <__start_il2cpp+0xdfde0>
 2ba83e8: 14000003     	b	0x2ba83f4 <__start_il2cpp+0xdfde0>
 2ba83ec: 14000002     	b	0x2ba83f4 <__start_il2cpp+0xdfde0>
 2ba83f0: 14000001     	b	0x2ba83f4 <__start_il2cpp+0xdfde0>
 2ba83f4: aa0003f4     	mov	x20, x0
 2ba83f8: 7100043f     	cmp	w1, #0x1
 2ba83fc: 540006a1     	b.ne	0x2ba84d0 <__start_il2cpp+0xdfebc>
 2ba8400: aa1403e0     	mov	x0, x20
 2ba8404: 94cdf8cf     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2ba8408: f9400014     	ldr	x20, [x0]
 2ba840c: f90007f4     	str	x20, [sp, #0x8]
 2ba8410: 94cdf8d0     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba8414: d001ba88     	adrp	x8, 0x62fa000
 2ba8418: f9400be0     	ldr	x0, [sp, #0x10]
 2ba841c: f9421508     	ldr	x8, [x8, #0x428]
 2ba8420: f9400101     	ldr	x1, [x8]
 2ba8424: 947b791c     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2ba8428: b4fffc54     	cbz	x20, 0x2ba83b0 <__start_il2cpp+0xdfd9c>
 2ba842c: 14000026     	b	0x2ba84c4 <__start_il2cpp+0xdfeb0>
 2ba8430: b9401909     	ldr	w9, [x8, #0x18]
 2ba8434: 110006f7     	add	w23, w23, #0x1
 2ba8438: 6b0902ff     	cmp	w23, w9
 2ba843c: 54ffddcb     	b.lt	0x2ba7ff4 <__start_il2cpp+0xdf9e0>
 2ba8440: aa1303e0     	mov	x0, x19
 2ba8444: 97fff6d4     	bl	0x2ba5f94 <__start_il2cpp+0xdd980>
 2ba8448: 14000015     	b	0x2ba849c <__start_il2cpp+0xdfe88>
 2ba844c: 9001ba48     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba8450: f946f108     	ldr	x8, [x8, #0xde0]
 2ba8454: f9400100     	ldr	x0, [x8]
 2ba8458: 97f8bb08     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba845c: d001ba88     	adrp	x8, 0x62fa000
 2ba8460: aa1f03e2     	mov	x2, xzr
 2ba8464: aa0003f3     	mov	x19, x0
 2ba8468: f9422d08     	ldr	x8, [x8, #0x458]
 2ba846c: f9400101     	ldr	x1, [x8]
 2ba8470: 9496724f     	bl	0x5144dac <__start_il2cpp+0x267c798>
 2ba8474: 9001ba48     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba8478: f946e908     	ldr	x8, [x8, #0xdd0]
 2ba847c: f9400100     	ldr	x0, [x8]
 2ba8480: b940e408     	ldr	w8, [x0, #0xe4]
 2ba8484: 35000048     	cbnz	w8, 0x2ba848c <__start_il2cpp+0xdfe78>
 2ba8488: 97f8bab5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba848c: aa1303e0     	mov	x0, x19
 2ba8490: aa1f03e1     	mov	x1, xzr
 2ba8494: 94bd3bdd     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2ba8498: aa1f03e0     	mov	x0, xzr
 2ba849c: a9494ff4     	ldp	x20, x19, [sp, #0x90]
 2ba84a0: a94857f6     	ldp	x22, x21, [sp, #0x80]
 2ba84a4: a9475ff8     	ldp	x24, x23, [sp, #0x70]
 2ba84a8: a94667fa     	ldp	x26, x25, [sp, #0x60]
 2ba84ac: a9456ffc     	ldp	x28, x27, [sp, #0x50]
 2ba84b0: a9447bfd     	ldp	x29, x30, [sp, #0x40]
 2ba84b4: 910283ff     	add	sp, sp, #0xa0
 2ba84b8: d65f03c0     	ret
 2ba84bc: 97f8baf3     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba84c0: 97f8baf4     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2ba84c4: aa1403e0     	mov	x0, x20
 2ba84c8: 97f8baee     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2ba84cc: aa0003f4     	mov	x20, x0
 2ba84d0: 910023e0     	add	x0, sp, #0x8
 2ba84d4: 97ec007d     	bl	0x26a86c8 <.text+0x3568>
 2ba84d8: aa1403e0     	mov	x0, x20
 2ba84dc: 97fc7080     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2ba84e0: 97ebf55b     	bl	0x26a5a4c <.text+0x8ec>

# BoardController :: System.Void SaveBoard(System.Boolean fromPause = False)
# VA 0x2ba84e4 .. 0x2ba8574 (next mapped method entry)
 2ba84e4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ba84e8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba84ec: 2a0103f4     	mov	w20, w1
 2ba84f0: aa0003f3     	mov	x19, x0
 2ba84f4: 370000a1     	tbnz	w1, #0x0, 0x2ba8508 <__start_il2cpp+0xdfef4>
 2ba84f8: f9401e68     	ldr	x8, [x19, #0x38]
 2ba84fc: b40003a8     	cbz	x8, 0x2ba8570 <__start_il2cpp+0xdff5c>
 2ba8500: 39446508     	ldrb	w8, [x8, #0x119]
 2ba8504: 34000308     	cbz	w8, 0x2ba8564 <__start_il2cpp+0xdff50>
 2ba8508: aa1303e0     	mov	x0, x19
 2ba850c: 97fffe41     	bl	0x2ba7e10 <__start_il2cpp+0xdf7fc>
 2ba8510: b40002a0     	cbz	x0, 0x2ba8564 <__start_il2cpp+0xdff50>
 2ba8514: f9401e68     	ldr	x8, [x19, #0x38]
 2ba8518: b40002c8     	cbz	x8, 0x2ba8570 <__start_il2cpp+0xdff5c>
 2ba851c: f9402515     	ldr	x21, [x8, #0x48]
 2ba8520: 97ffd520     	bl	0x2b9d9a0 <__start_il2cpp+0xd538c>
 2ba8524: b4000275     	cbz	x21, 0x2ba8570 <__start_il2cpp+0xdff5c>
 2ba8528: aa0003e1     	mov	x1, x0
 2ba852c: aa1503e0     	mov	x0, x21
 2ba8530: aa1f03e2     	mov	x2, xzr
 2ba8534: 940ce44c     	bl	0x2ee1664 <__start_il2cpp+0x419050>
 2ba8538: 36000174     	tbz	w20, #0x0, 0x2ba8564 <__start_il2cpp+0xdff50>
 2ba853c: f9401e68     	ldr	x8, [x19, #0x38]
 2ba8540: b4000188     	cbz	x8, 0x2ba8570 <__start_il2cpp+0xdff5c>
 2ba8544: f9402500     	ldr	x0, [x8, #0x48]
 2ba8548: b4000140     	cbz	x0, 0x2ba8570 <__start_il2cpp+0xdff5c>
 2ba854c: f9400008     	ldr	x8, [x0]
 2ba8550: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba8554: f9413101     	ldr	x1, [x8, #0x260]
 2ba8558: f9412d02     	ldr	x2, [x8, #0x258]
 2ba855c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ba8560: d61f0040     	br	x2
 2ba8564: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba8568: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ba856c: d65f03c0     	ret
 2ba8570: 97f8bac6     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void OnAppPause()
# VA 0x2ba8574 .. 0x2ba857c (next mapped method entry)
 2ba8574: 52800021     	mov	w1, #0x1                // =1
 2ba8578: 17ffffdb     	b	0x2ba84e4 <__start_il2cpp+0xdfed0>

# BoardController :: System.Void OnItemRemovedFromBoard(BaseItem item)
# VA 0x2ba857c .. 0x2ba8608 (next mapped method entry)
 2ba857c: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ba8580: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba8584: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba8588: d001db55     	adrp	x21, 0x6712000
 2ba858c: 9001ba56     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba8590: aa0103f4     	mov	x20, x1
 2ba8594: 396436a8     	ldrb	w8, [x21, #0x90d]
 2ba8598: f9478ed6     	ldr	x22, [x22, #0xf18]
 2ba859c: aa0003f3     	mov	x19, x0
 2ba85a0: 370000c8     	tbnz	w8, #0x0, 0x2ba85b8 <__start_il2cpp+0xdffa4>
 2ba85a4: 9001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba85a8: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba85ac: 97f8ba0d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba85b0: 52800028     	mov	w8, #0x1                // =1
 2ba85b4: 392436a8     	strb	w8, [x21, #0x90d]
 2ba85b8: f94002c0     	ldr	x0, [x22]
 2ba85bc: b940e408     	ldr	w8, [x0, #0xe4]
 2ba85c0: 35000048     	cbnz	w8, 0x2ba85c8 <__start_il2cpp+0xdffb4>
 2ba85c4: 97f8ba66     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba85c8: aa1403e0     	mov	x0, x20
 2ba85cc: aa1f03e1     	mov	x1, xzr
 2ba85d0: aa1f03e2     	mov	x2, xzr
 2ba85d4: 94be7809     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba85d8: 360000a0     	tbz	w0, #0x0, 0x2ba85ec <__start_il2cpp+0xdffd8>
 2ba85dc: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba85e0: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba85e4: f84307fe     	ldr	x30, [sp], #0x30
 2ba85e8: d65f03c0     	ret
 2ba85ec: f9401a60     	ldr	x0, [x19, #0x30]
 2ba85f0: b40000a0     	cbz	x0, 0x2ba8604 <__start_il2cpp+0xdfff0>
 2ba85f4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba85f8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba85fc: f84307fe     	ldr	x30, [sp], #0x30
 2ba8600: 17ffd5e4     	b	0x2b9dd90 <__start_il2cpp+0xd577c>
 2ba8604: 97f8baa1     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void OnPreMerge(PreMergeSignal preMergeSignal)
# VA 0x2ba8608 .. 0x2ba8630 (next mapped method entry)
 2ba8608: f81e0ffe     	str	x30, [sp, #-0x20]!
 2ba860c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba8610: aa0203f3     	mov	x19, x2
 2ba8614: aa0003f4     	mov	x20, x0
 2ba8618: 97ffffd9     	bl	0x2ba857c <__start_il2cpp+0xdff68>
 2ba861c: aa1403e0     	mov	x0, x20
 2ba8620: aa1303e1     	mov	x1, x19
 2ba8624: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba8628: f84207fe     	ldr	x30, [sp], #0x20
 2ba862c: 17ffffd4     	b	0x2ba857c <__start_il2cpp+0xdff68>

# BoardController :: System.Void OnPostMerge(PostMergeSignal postMergeSignal)
# VA 0x2ba8630 .. 0x2ba86a0 (next mapped method entry)
 2ba8630: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ba8634: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba8638: f9401034     	ldr	x20, [x1, #0x20]
 2ba863c: aa0103f5     	mov	x21, x1
 2ba8640: aa0003f3     	mov	x19, x0
 2ba8644: aa1403e1     	mov	x1, x20
 2ba8648: 97fff8d3     	bl	0x2ba6994 <__start_il2cpp+0xde380>
 2ba864c: aa1303e0     	mov	x0, x19
 2ba8650: aa1f03e1     	mov	x1, xzr
 2ba8654: f80a8c1f     	str	xzr, [x0, #0xa8]!
 2ba8658: 97f8b9cd     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba865c: aa1303e0     	mov	x0, x19
 2ba8660: aa1403e1     	mov	x1, x20
 2ba8664: 97fff76c     	bl	0x2ba6414 <__start_il2cpp+0xdde00>
 2ba8668: 3940c2a8     	ldrb	w8, [x21, #0x30]
 2ba866c: 37000088     	tbnz	w8, #0x0, 0x2ba867c <__start_il2cpp+0xe0068>
 2ba8670: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba8674: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ba8678: d65f03c0     	ret
 2ba867c: b4000114     	cbz	x20, 0x2ba869c <__start_il2cpp+0xe0088>
 2ba8680: aa1403e0     	mov	x0, x20
 2ba8684: 97ffdc8e     	bl	0x2b9f8bc <__start_il2cpp+0xd72a8>
 2ba8688: aa1303e0     	mov	x0, x19
 2ba868c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba8690: 2f00e402     	movi	d2, #0000000000000000
 2ba8694: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ba8698: 14000002     	b	0x2ba86a0 <__start_il2cpp+0xe008c>
 2ba869c: 97f8ba7b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void <OnPostMerge>g__PlayChainBrokeParticle|54_0(UnityEngine.Vector3 position)
# VA 0x2ba86a0 .. 0x2ba8710 (next mapped method entry)
 2ba86a0: fc1e0fea     	str	d10, [sp, #-0x20]!
 2ba86a4: 6d00a3e9     	stp	d9, d8, [sp, #0x8]
 2ba86a8: f9000ffe     	str	x30, [sp, #0x18]
 2ba86ac: aa0003e2     	mov	x2, x0
 2ba86b0: f9402000     	ldr	x0, [x0, #0x40]
 2ba86b4: b40002c0     	cbz	x0, 0x2ba870c <__start_il2cpp+0xe00f8>
 2ba86b8: 52800081     	mov	w1, #0x4                // =4
 2ba86bc: 52800023     	mov	w3, #0x1                // =1
 2ba86c0: aa1f03e4     	mov	x4, xzr
 2ba86c4: 1e204048     	fmov	s8, s2
 2ba86c8: 1e204029     	fmov	s9, s1
 2ba86cc: 1e20400a     	fmov	s10, s0
 2ba86d0: 9402824c     	bl	0x2c49000 <__start_il2cpp+0x1809ec>
 2ba86d4: b40001c0     	cbz	x0, 0x2ba870c <__start_il2cpp+0xe00f8>
 2ba86d8: f9400008     	ldr	x8, [x0]
 2ba86dc: 1e204140     	fmov	s0, s10
 2ba86e0: 1e204121     	fmov	s1, s9
 2ba86e4: 1e204102     	fmov	s2, s8
 2ba86e8: a95c8509     	ldp	x9, x1, [x8, #0x1c8]
 2ba86ec: d63f0120     	blr	x9
 2ba86f0: 97ffe265     	bl	0x2ba1084 <__start_il2cpp+0xd8a70>
 2ba86f4: b40000c0     	cbz	x0, 0x2ba870c <__start_il2cpp+0xe00f8>
 2ba86f8: 6d40a3e9     	ldp	d9, d8, [sp, #0x8]
 2ba86fc: f9408400     	ldr	x0, [x0, #0x108]
 2ba8700: f9400ffe     	ldr	x30, [sp, #0x18]
 2ba8704: fc4207ea     	ldr	d10, [sp], #0x20
 2ba8708: 17ffe272     	b	0x2ba10d0 <__start_il2cpp+0xd8abc>
 2ba870c: 97f8ba5f     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void OnChestPlacedOnBoard(BaseChest chest)
# VA 0x2ba8710 .. 0x2ba87dc (next mapped method entry)
 2ba8710: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ba8714: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba8718: d001db55     	adrp	x21, 0x6712000
 2ba871c: aa0103f3     	mov	x19, x1
 2ba8720: aa0003f4     	mov	x20, x0
 2ba8724: 39643aa8     	ldrb	w8, [x21, #0x90e]
 2ba8728: 37000128     	tbnz	w8, #0x0, 0x2ba874c <__start_il2cpp+0xe0138>
 2ba872c: d001ba80     	adrp	x0, 0x62fa000
 2ba8730: f9423000     	ldr	x0, [x0, #0x460]
 2ba8734: 97f8b9ab     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8738: 9001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba873c: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba8740: 97f8b9a8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8744: 52800028     	mov	w8, #0x1                // =1
 2ba8748: 39243aa8     	strb	w8, [x21, #0x90e]
 2ba874c: f9406280     	ldr	x0, [x20, #0xc0]
 2ba8750: b4000440     	cbz	x0, 0x2ba87d8 <__start_il2cpp+0xe01c4>
 2ba8754: d001ba88     	adrp	x8, 0x62fa000
 2ba8758: 9001ba55     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba875c: aa1303e1     	mov	x1, x19
 2ba8760: f9423108     	ldr	x8, [x8, #0x460]
 2ba8764: f9478eb5     	ldr	x21, [x21, #0xf18]
 2ba8768: f9400102     	ldr	x2, [x8]
 2ba876c: 948610d4     	bl	0x4d2cabc <__start_il2cpp+0x22644a8>
 2ba8770: f94002a0     	ldr	x0, [x21]
 2ba8774: f9406695     	ldr	x21, [x20, #0xc8]
 2ba8778: b940e408     	ldr	w8, [x0, #0xe4]
 2ba877c: 35000048     	cbnz	w8, 0x2ba8784 <__start_il2cpp+0xe0170>
 2ba8780: 97f8b9f7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba8784: aa1503e0     	mov	x0, x21
 2ba8788: aa1f03e1     	mov	x1, xzr
 2ba878c: 94be87ae     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba8790: b4000253     	cbz	x19, 0x2ba87d8 <__start_il2cpp+0xe01c4>
 2ba8794: 12000001     	and	w1, w0, #0x1
 2ba8798: aa1303e0     	mov	x0, x19
 2ba879c: aa1f03e2     	mov	x2, xzr
 2ba87a0: 94012993     	bl	0x2bf2dec <__start_il2cpp+0x12a7d8>
 2ba87a4: aa1303e0     	mov	x0, x19
 2ba87a8: aa1f03e1     	mov	x1, xzr
 2ba87ac: 94012907     	bl	0x2bf2bc8 <__start_il2cpp+0x12a5b4>
 2ba87b0: 360000e0     	tbz	w0, #0x0, 0x2ba87cc <__start_il2cpp+0xe01b8>
 2ba87b4: aa1403e0     	mov	x0, x20
 2ba87b8: aa1303e1     	mov	x1, x19
 2ba87bc: 52800022     	mov	w2, #0x1                // =1
 2ba87c0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba87c4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ba87c8: 14000005     	b	0x2ba87dc <__start_il2cpp+0xe01c8>
 2ba87cc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba87d0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ba87d4: d65f03c0     	ret
 2ba87d8: 97f8ba2c     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void OnChestRechargeStatusChanged(BaseChest chest, System.Boolean isRecharging)
# VA 0x2ba87dc .. 0x2ba8870 (next mapped method entry)
 2ba87dc: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ba87e0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba87e4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba87e8: d001db56     	adrp	x22, 0x6712000
 2ba87ec: 2a0203f5     	mov	w21, w2
 2ba87f0: aa0103f4     	mov	x20, x1
 2ba87f4: 396442c8     	ldrb	w8, [x22, #0x910]
 2ba87f8: aa0003f3     	mov	x19, x0
 2ba87fc: 370000c8     	tbnz	w8, #0x0, 0x2ba8814 <__start_il2cpp+0xe0200>
 2ba8800: 9001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba8804: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba8808: 97f8b976     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba880c: 52800028     	mov	w8, #0x1                // =1
 2ba8810: 392442c8     	strb	w8, [x22, #0x910]
 2ba8814: 370001d5     	tbnz	w21, #0x0, 0x2ba884c <__start_il2cpp+0xe0238>
 2ba8818: 9001ba48     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba881c: f9478d08     	ldr	x8, [x8, #0xf18]
 2ba8820: f84c8275     	ldur	x21, [x19, #0xc8]
 2ba8824: f9400100     	ldr	x0, [x8]
 2ba8828: b940e408     	ldr	w8, [x0, #0xe4]
 2ba882c: 35000048     	cbnz	w8, 0x2ba8834 <__start_il2cpp+0xe0220>
 2ba8830: 97f8b9cb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba8834: aa1503e0     	mov	x0, x21
 2ba8838: aa1403e1     	mov	x1, x20
 2ba883c: aa1f03e2     	mov	x2, xzr
 2ba8840: 94be776e     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba8844: aa1f03f4     	mov	x20, xzr
 2ba8848: 360000a0     	tbz	w0, #0x0, 0x2ba885c <__start_il2cpp+0xe0248>
 2ba884c: 91032260     	add	x0, x19, #0xc8
 2ba8850: aa1403e1     	mov	x1, x20
 2ba8854: f80c8274     	stur	x20, [x19, #0xc8]
 2ba8858: 97f8b94d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba885c: aa1303e0     	mov	x0, x19
 2ba8860: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba8864: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba8868: f84307fe     	ldr	x30, [sp], #0x30
 2ba886c: 14000033     	b	0x2ba8938 <__start_il2cpp+0xe0324>

# BoardController :: System.Void OnChestRemovedFromBoard(BaseChest chest)
# VA 0x2ba8870 .. 0x2ba8938 (next mapped method entry)
 2ba8870: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ba8874: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba8878: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba887c: d001db55     	adrp	x21, 0x6712000
 2ba8880: aa0103f4     	mov	x20, x1
 2ba8884: aa0003f3     	mov	x19, x0
 2ba8888: 39643ea8     	ldrb	w8, [x21, #0x90f]
 2ba888c: 37000128     	tbnz	w8, #0x0, 0x2ba88b0 <__start_il2cpp+0xe029c>
 2ba8890: d001ba80     	adrp	x0, 0x62fa000
 2ba8894: f9423400     	ldr	x0, [x0, #0x468]
 2ba8898: 97f8b952     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba889c: 9001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba88a0: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba88a4: 97f8b94f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba88a8: 52800028     	mov	w8, #0x1                // =1
 2ba88ac: 39243ea8     	strb	w8, [x21, #0x90f]
 2ba88b0: f9406260     	ldr	x0, [x19, #0xc0]
 2ba88b4: b4000400     	cbz	x0, 0x2ba8934 <__start_il2cpp+0xe0320>
 2ba88b8: d001ba88     	adrp	x8, 0x62fa000
 2ba88bc: 9001ba55     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba88c0: aa1403e1     	mov	x1, x20
 2ba88c4: f9423508     	ldr	x8, [x8, #0x468]
 2ba88c8: f9478eb5     	ldr	x21, [x21, #0xf18]
 2ba88cc: f9400102     	ldr	x2, [x8]
 2ba88d0: 94860e33     	bl	0x4d2c19c <__start_il2cpp+0x2263b88>
 2ba88d4: f94002a0     	ldr	x0, [x21]
 2ba88d8: aa1303f5     	mov	x21, x19
 2ba88dc: f84c8eb6     	ldr	x22, [x21, #0xc8]!
 2ba88e0: b940e408     	ldr	w8, [x0, #0xe4]
 2ba88e4: 35000048     	cbnz	w8, 0x2ba88ec <__start_il2cpp+0xe02d8>
 2ba88e8: 97f8b99d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba88ec: aa1603e0     	mov	x0, x22
 2ba88f0: aa1403e1     	mov	x1, x20
 2ba88f4: aa1f03e2     	mov	x2, xzr
 2ba88f8: 94be6939     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2ba88fc: 360000a0     	tbz	w0, #0x0, 0x2ba8910 <__start_il2cpp+0xe02fc>
 2ba8900: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba8904: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba8908: f84307fe     	ldr	x30, [sp], #0x30
 2ba890c: d65f03c0     	ret
 2ba8910: aa1503e0     	mov	x0, x21
 2ba8914: aa1f03e1     	mov	x1, xzr
 2ba8918: f900667f     	str	xzr, [x19, #0xc8]
 2ba891c: 97f8b91c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba8920: aa1303e0     	mov	x0, x19
 2ba8924: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba8928: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba892c: f84307fe     	ldr	x30, [sp], #0x30
 2ba8930: 14000002     	b	0x2ba8938 <__start_il2cpp+0xe0324>
 2ba8934: 97f8b9d5     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void CheckChestOpenIndicators()
# VA 0x2ba8938 .. 0x2ba8ab8 (next mapped method entry)
 2ba8938: d101c3ff     	sub	sp, sp, #0x70
 2ba893c: f9001bfe     	str	x30, [sp, #0x30]
 2ba8940: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2ba8944: a90557f6     	stp	x22, x21, [sp, #0x50]
 2ba8948: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2ba894c: d001db54     	adrp	x20, 0x6712000
 2ba8950: aa0003f3     	mov	x19, x0
 2ba8954: 39644688     	ldrb	w8, [x20, #0x911]
 2ba8958: 37000248     	tbnz	w8, #0x0, 0x2ba89a0 <__start_il2cpp+0xe038c>
 2ba895c: d001ba80     	adrp	x0, 0x62fa000
 2ba8960: f9423800     	ldr	x0, [x0, #0x470]
 2ba8964: 97f8b91f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8968: d001ba80     	adrp	x0, 0x62fa000
 2ba896c: f9423c00     	ldr	x0, [x0, #0x478]
 2ba8970: 97f8b91c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8974: d001ba80     	adrp	x0, 0x62fa000
 2ba8978: f9424000     	ldr	x0, [x0, #0x480]
 2ba897c: 97f8b919     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8980: d001ba80     	adrp	x0, 0x62fa000
 2ba8984: f9424400     	ldr	x0, [x0, #0x488]
 2ba8988: 97f8b916     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba898c: 9001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba8990: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba8994: 97f8b913     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8998: 52800028     	mov	w8, #0x1                // =1
 2ba899c: 39244688     	strb	w8, [x20, #0x911]
 2ba89a0: f9406260     	ldr	x0, [x19, #0xc0]
 2ba89a4: a901ffff     	stp	xzr, xzr, [sp, #0x18]
 2ba89a8: f90017ff     	str	xzr, [sp, #0x28]
 2ba89ac: b4000560     	cbz	x0, 0x2ba8a58 <__start_il2cpp+0xe0444>
 2ba89b0: d001ba88     	adrp	x8, 0x62fa000
 2ba89b4: d001ba97     	adrp	x23, 0x62fa000
 2ba89b8: 9001ba58     	adrp	x24, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba89bc: f9424508     	ldr	x8, [x8, #0x488]
 2ba89c0: d001ba96     	adrp	x22, 0x62fa000
 2ba89c4: f9423ef7     	ldr	x23, [x23, #0x478]
 2ba89c8: f9478f18     	ldr	x24, [x24, #0xf18]
 2ba89cc: f9423ad6     	ldr	x22, [x22, #0x470]
 2ba89d0: 910063f4     	add	x20, sp, #0x18
 2ba89d4: f9400101     	ldr	x1, [x8]
 2ba89d8: 910063e8     	add	x8, sp, #0x18
 2ba89dc: 94860e99     	bl	0x4d2c440 <__start_il2cpp+0x2263e2c>
 2ba89e0: a900d3ff     	stp	xzr, x20, [sp, #0x8]
 2ba89e4: f94002e1     	ldr	x1, [x23]
 2ba89e8: 910063e0     	add	x0, sp, #0x18
 2ba89ec: 947b715f     	bl	0x4a84f68 <__start_il2cpp+0x1fbc954>
 2ba89f0: 36000200     	tbz	w0, #0x0, 0x2ba8a30 <__start_il2cpp+0xe041c>
 2ba89f4: f9400300     	ldr	x0, [x24]
 2ba89f8: f94017f4     	ldr	x20, [sp, #0x28]
 2ba89fc: f9406675     	ldr	x21, [x19, #0xc8]
 2ba8a00: b940e408     	ldr	w8, [x0, #0xe4]
 2ba8a04: 35000048     	cbnz	w8, 0x2ba8a0c <__start_il2cpp+0xe03f8>
 2ba8a08: 97f8b955     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba8a0c: aa1503e0     	mov	x0, x21
 2ba8a10: aa1f03e1     	mov	x1, xzr
 2ba8a14: 94be870c     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba8a18: b40001f4     	cbz	x20, 0x2ba8a54 <__start_il2cpp+0xe0440>
 2ba8a1c: 12000001     	and	w1, w0, #0x1
 2ba8a20: aa1403e0     	mov	x0, x20
 2ba8a24: aa1f03e2     	mov	x2, xzr
 2ba8a28: 940128f1     	bl	0x2bf2dec <__start_il2cpp+0x12a7d8>
 2ba8a2c: 17ffffee     	b	0x2ba89e4 <__start_il2cpp+0xe03d0>
 2ba8a30: f94002c1     	ldr	x1, [x22]
 2ba8a34: 910063e0     	add	x0, sp, #0x18
 2ba8a38: 947b714b     	bl	0x4a84f64 <__start_il2cpp+0x1fbc950>
 2ba8a3c: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2ba8a40: f9401bfe     	ldr	x30, [sp, #0x30]
 2ba8a44: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2ba8a48: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2ba8a4c: 9101c3ff     	add	sp, sp, #0x70
 2ba8a50: d65f03c0     	ret
 2ba8a54: 97f8b98d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba8a58: 97f8b98c     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba8a5c: 14000003     	b	0x2ba8a68 <__start_il2cpp+0xe0454>
 2ba8a60: 14000002     	b	0x2ba8a68 <__start_il2cpp+0xe0454>
 2ba8a64: 14000001     	b	0x2ba8a68 <__start_il2cpp+0xe0454>
 2ba8a68: aa0003f3     	mov	x19, x0
 2ba8a6c: 7100043f     	cmp	w1, #0x1
 2ba8a70: 540001a1     	b.ne	0x2ba8aa4 <__start_il2cpp+0xe0490>
 2ba8a74: aa1303e0     	mov	x0, x19
 2ba8a78: 94cdf732     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2ba8a7c: f9400013     	ldr	x19, [x0]
 2ba8a80: f90007f3     	str	x19, [sp, #0x8]
 2ba8a84: 94cdf733     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba8a88: f9400be0     	ldr	x0, [sp, #0x10]
 2ba8a8c: f94002c1     	ldr	x1, [x22]
 2ba8a90: 947b7135     	bl	0x4a84f64 <__start_il2cpp+0x1fbc950>
 2ba8a94: b4fffd53     	cbz	x19, 0x2ba8a3c <__start_il2cpp+0xe0428>
 2ba8a98: aa1303e0     	mov	x0, x19
 2ba8a9c: 97f8b979     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2ba8aa0: aa0003f3     	mov	x19, x0
 2ba8aa4: 910023e0     	add	x0, sp, #0x8
 2ba8aa8: 97ebff14     	bl	0x26a86f8 <.text+0x3598>
 2ba8aac: aa1303e0     	mov	x0, x19
 2ba8ab0: 97fc6f0b     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2ba8ab4: 97ebf3e6     	bl	0x26a5a4c <.text+0x8ec>

# BoardController :: BoardSlot GetSelectedBoardSlot()
# VA 0x2ba8ab8 .. 0x2ba8ac0 (next mapped method entry)
 2ba8ab8: f9405400     	ldr	x0, [x0, #0xa8]
 2ba8abc: d65f03c0     	ret

# BoardController :: BoardSettings GetBoardSettings()
# VA 0x2ba8ac0 .. 0x2ba8ac8 (next mapped method entry)
 2ba8ac0: f9403400     	ldr	x0, [x0, #0x68]
 2ba8ac4: d65f03c0     	ret

# BoardController :: System.Void .ctor()
# VA 0x2ba8ac8 .. 0x2ba8b50 (next mapped method entry)
 2ba8ac8: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ba8acc: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba8ad0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba8ad4: d001db55     	adrp	x21, 0x6712000
 2ba8ad8: d001ba96     	adrp	x22, 0x62fa000
 2ba8adc: d001ba94     	adrp	x20, 0x62fa000
 2ba8ae0: 39644aa8     	ldrb	w8, [x21, #0x912]
 2ba8ae4: f9424ad6     	ldr	x22, [x22, #0x490]
 2ba8ae8: f9424e94     	ldr	x20, [x20, #0x498]
 2ba8aec: aa0003f3     	mov	x19, x0
 2ba8af0: 37000128     	tbnz	w8, #0x0, 0x2ba8b14 <__start_il2cpp+0xe0500>
 2ba8af4: d001ba80     	adrp	x0, 0x62fa000
 2ba8af8: f9424c00     	ldr	x0, [x0, #0x498]
 2ba8afc: 97f8b8b9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8b00: d001ba80     	adrp	x0, 0x62fa000
 2ba8b04: f9424800     	ldr	x0, [x0, #0x490]
 2ba8b08: 97f8b8b6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8b0c: 52800028     	mov	w8, #0x1                // =1
 2ba8b10: 39244aa8     	strb	w8, [x21, #0x912]
 2ba8b14: f94002c0     	ldr	x0, [x22]
 2ba8b18: 97f8b958     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba8b1c: f9400281     	ldr	x1, [x20]
 2ba8b20: aa0003f4     	mov	x20, x0
 2ba8b24: 94860b67     	bl	0x4d2b8c0 <__start_il2cpp+0x22632ac>
 2ba8b28: aa1303e0     	mov	x0, x19
 2ba8b2c: aa1403e1     	mov	x1, x20
 2ba8b30: f80c0c14     	str	x20, [x0, #0xc0]!
 2ba8b34: 97f8b896     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba8b38: aa1303e0     	mov	x0, x19
 2ba8b3c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba8b40: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba8b44: aa1f03e1     	mov	x1, xzr
 2ba8b48: f84307fe     	ldr	x30, [sp], #0x30
 2ba8b4c: 14be7d36     	b	0x5b48024 <__start_il2cpp+0x307fa10>

# BoardController :: System.Void <Initialize>b__32_0(PostMergeSignal s)
# VA 0x2ba8b50 .. 0x2ba8b90 (next mapped method entry)
 2ba8b50: d10143ff     	sub	sp, sp, #0x50
 2ba8b54: a9044ffe     	stp	x30, x19, [sp, #0x40]
 2ba8b58: ad400420     	ldp	q0, q1, [x1]
 2ba8b5c: aa0003f3     	mov	x19, x0
 2ba8b60: 3dc00822     	ldr	q2, [x1, #0x20]
 2ba8b64: f9401828     	ldr	x8, [x1, #0x30]
 2ba8b68: 910003e1     	mov	x1, sp
 2ba8b6c: ad0007e0     	stp	q0, q1, [sp]
 2ba8b70: 3d800be2     	str	q2, [sp, #0x20]
 2ba8b74: f9001be8     	str	x8, [sp, #0x30]
 2ba8b78: 97fffeae     	bl	0x2ba8630 <__start_il2cpp+0xe001c>
 2ba8b7c: aa1303e0     	mov	x0, x19
 2ba8b80: a9444ffe     	ldp	x30, x19, [sp, #0x40]
 2ba8b84: 2a1f03e1     	mov	w1, wzr
 2ba8b88: 910143ff     	add	sp, sp, #0x50
 2ba8b8c: 17fffe56     	b	0x2ba84e4 <__start_il2cpp+0xdfed0>

# BoardController :: System.Void <Initialize>g__SaveBoardCallBack|32_3()
# VA 0x2ba8b90 .. 0x2ba8b98 (next mapped method entry)
 2ba8b90: 2a1f03e1     	mov	w1, wzr
 2ba8b94: 17fffe54     	b	0x2ba84e4 <__start_il2cpp+0xdfed0>

# BoardController :: System.Void <Initialize>b__32_1()
# VA 0x2ba8b98 .. 0x2ba8bc0 (next mapped method entry)
 2ba8b98: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2ba8b9c: aa0003f3     	mov	x19, x0
 2ba8ba0: f9401800     	ldr	x0, [x0, #0x30]
 2ba8ba4: b40000c0     	cbz	x0, 0x2ba8bbc <__start_il2cpp+0xe05a8>
 2ba8ba8: 97ffd47a     	bl	0x2b9dd90 <__start_il2cpp+0xd577c>
 2ba8bac: aa1303e0     	mov	x0, x19
 2ba8bb0: 2a1f03e1     	mov	w1, wzr
 2ba8bb4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2ba8bb8: 17fffe4b     	b	0x2ba84e4 <__start_il2cpp+0xdfed0>
 2ba8bbc: 97f8b933     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void <Initialize>b__32_2(ItemRemovedSignal t)
# VA 0x2ba8bc0 .. 0x2ba8be0 (next mapped method entry)
 2ba8bc0: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2ba8bc4: aa0203e1     	mov	x1, x2
 2ba8bc8: aa0003f3     	mov	x19, x0
 2ba8bcc: 97fffe6c     	bl	0x2ba857c <__start_il2cpp+0xdff68>
 2ba8bd0: aa1303e0     	mov	x0, x19
 2ba8bd4: 2a1f03e1     	mov	w1, wzr
 2ba8bd8: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2ba8bdc: 17fffe42     	b	0x2ba84e4 <__start_il2cpp+0xdfed0>

# BoardController :: System.Void <Initialize>g__TrySetCompensationItems|32_4()
# VA 0x2ba8be0 .. 0x2ba8d7c (next mapped method entry)
 2ba8be0: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ba8be4: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba8be8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba8bec: d001db55     	adrp	x21, 0x6712000
 2ba8bf0: f001ba54     	adrp	x20, 0x62f3000
 2ba8bf4: aa0003f3     	mov	x19, x0
 2ba8bf8: 39644ea8     	ldrb	w8, [x21, #0x913]
 2ba8bfc: f946b694     	ldr	x20, [x20, #0xd68]
 2ba8c00: 37000308     	tbnz	w8, #0x0, 0x2ba8c60 <__start_il2cpp+0xe064c>
 2ba8c04: f001ba40     	adrp	x0, 0x62f3000
 2ba8c08: f946b400     	ldr	x0, [x0, #0xd68]
 2ba8c0c: 97f8b875     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8c10: 9001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba8c14: f946e800     	ldr	x0, [x0, #0xdd0]
 2ba8c18: 97f8b872     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8c1c: 9001ba60     	adrp	x0, 0x62f4000
 2ba8c20: f9476c00     	ldr	x0, [x0, #0xed8]
 2ba8c24: 97f8b86f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8c28: d001ba80     	adrp	x0, 0x62fa000
 2ba8c2c: f9425000     	ldr	x0, [x0, #0x4a0]
 2ba8c30: 97f8b86c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8c34: d001ba80     	adrp	x0, 0x62fa000
 2ba8c38: f9425400     	ldr	x0, [x0, #0x4a8]
 2ba8c3c: 97f8b869     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8c40: d001ba80     	adrp	x0, 0x62fa000
 2ba8c44: f9425800     	ldr	x0, [x0, #0x4b0]
 2ba8c48: 97f8b866     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8c4c: d001ba80     	adrp	x0, 0x62fa000
 2ba8c50: f9425c00     	ldr	x0, [x0, #0x4b8]
 2ba8c54: 97f8b863     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8c58: 52800028     	mov	w8, #0x1                // =1
 2ba8c5c: 39244ea8     	strb	w8, [x21, #0x913]
 2ba8c60: f9400280     	ldr	x0, [x20]
 2ba8c64: d001ba96     	adrp	x22, 0x62fa000
 2ba8c68: d001ba94     	adrp	x20, 0x62fa000
 2ba8c6c: d001ba95     	adrp	x21, 0x62fa000
 2ba8c70: f94252d6     	ldr	x22, [x22, #0x4a0]
 2ba8c74: f9425694     	ldr	x20, [x20, #0x4a8]
 2ba8c78: b940e408     	ldr	w8, [x0, #0xe4]
 2ba8c7c: f9425ab5     	ldr	x21, [x21, #0x4b0]
 2ba8c80: 35000048     	cbnz	w8, 0x2ba8c88 <__start_il2cpp+0xe0674>
 2ba8c84: 97f8b8b6     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba8c88: f94002c0     	ldr	x0, [x22]
 2ba8c8c: aa1f03e1     	mov	x1, xzr
 2ba8c90: 97fe150d     	bl	0x2b2e0c4 <__start_il2cpp+0x65ab0>
 2ba8c94: f9400288     	ldr	x8, [x20]
 2ba8c98: 2a0003f4     	mov	w20, w0
 2ba8c9c: aa1f03e1     	mov	x1, xzr
 2ba8ca0: aa0803e0     	mov	x0, x8
 2ba8ca4: 97fe1508     	bl	0x2b2e0c4 <__start_il2cpp+0x65ab0>
 2ba8ca8: f94002a8     	ldr	x8, [x21]
 2ba8cac: 2a0003f5     	mov	w21, w0
 2ba8cb0: aa1f03e1     	mov	x1, xzr
 2ba8cb4: aa0803e0     	mov	x0, x8
 2ba8cb8: 97fe1503     	bl	0x2b2e0c4 <__start_il2cpp+0x65ab0>
 2ba8cbc: 2a0003f6     	mov	w22, w0
 2ba8cc0: aa1303e0     	mov	x0, x19
 2ba8cc4: 97fff4b4     	bl	0x2ba5f94 <__start_il2cpp+0xdd980>
 2ba8cc8: b4000120     	cbz	x0, 0x2ba8cec <__start_il2cpp+0xe06d8>
 2ba8ccc: aa1303e0     	mov	x0, x19
 2ba8cd0: 97fff4b1     	bl	0x2ba5f94 <__start_il2cpp+0xdd980>
 2ba8cd4: b4000520     	cbz	x0, 0x2ba8d78 <__start_il2cpp+0xe0764>
 2ba8cd8: 97ffd3cf     	bl	0x2b9dc14 <__start_il2cpp+0xd5600>
 2ba8cdc: 2a160288     	orr	w8, w20, w22
 2ba8ce0: 2a2002a9     	orn	w9, w21, w0
 2ba8ce4: 2a080128     	orr	w8, w9, w8
 2ba8ce8: 36000108     	tbz	w8, #0x0, 0x2ba8d08 <__start_il2cpp+0xe06f4>
 2ba8cec: aa1303e0     	mov	x0, x19
 2ba8cf0: 97fff4a9     	bl	0x2ba5f94 <__start_il2cpp+0xdd980>
 2ba8cf4: b4000140     	cbz	x0, 0x2ba8d1c <__start_il2cpp+0xe0708>
 2ba8cf8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba8cfc: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba8d00: f84307fe     	ldr	x30, [sp], #0x30
 2ba8d04: d65f03c0     	ret
 2ba8d08: aa1303e0     	mov	x0, x19
 2ba8d0c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba8d10: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba8d14: f84307fe     	ldr	x30, [sp], #0x30
 2ba8d18: 14000019     	b	0x2ba8d7c <__start_il2cpp+0xe0768>
 2ba8d1c: 9001ba68     	adrp	x8, 0x62f4000
 2ba8d20: f9476d08     	ldr	x8, [x8, #0xed8]
 2ba8d24: f9400100     	ldr	x0, [x8]
 2ba8d28: 97f8b8d4     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba8d2c: d001ba88     	adrp	x8, 0x62fa000
 2ba8d30: aa1f03e2     	mov	x2, xzr
 2ba8d34: aa1f03e3     	mov	x3, xzr
 2ba8d38: f9425d08     	ldr	x8, [x8, #0x4b8]
 2ba8d3c: aa0003f3     	mov	x19, x0
 2ba8d40: f9400101     	ldr	x1, [x8]
 2ba8d44: 97fe1c75     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2ba8d48: 9001ba48     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba8d4c: f946e908     	ldr	x8, [x8, #0xdd0]
 2ba8d50: f9400100     	ldr	x0, [x8]
 2ba8d54: b940e408     	ldr	w8, [x0, #0xe4]
 2ba8d58: 35000048     	cbnz	w8, 0x2ba8d60 <__start_il2cpp+0xe074c>
 2ba8d5c: 97f8b880     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba8d60: aa1303e0     	mov	x0, x19
 2ba8d64: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba8d68: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba8d6c: aa1f03e1     	mov	x1, xzr
 2ba8d70: f84307fe     	ldr	x30, [sp], #0x30
 2ba8d74: 14bd39a5     	b	0x5af7408 <__start_il2cpp+0x302edf4>
 2ba8d78: 97f8b8c4     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void <Initialize>g__SetCompensationItems|32_9()
# VA 0x2ba8d7c .. 0x2ba9084 (next mapped method entry)
 2ba8d7c: d10183ff     	sub	sp, sp, #0x60
 2ba8d80: f9000bfe     	str	x30, [sp, #0x10]
 2ba8d84: a90267fa     	stp	x26, x25, [sp, #0x20]
 2ba8d88: a9035ff8     	stp	x24, x23, [sp, #0x30]
 2ba8d8c: a90457f6     	stp	x22, x21, [sp, #0x40]
 2ba8d90: a9054ff4     	stp	x20, x19, [sp, #0x50]
 2ba8d94: d001db54     	adrp	x20, 0x6712000
 2ba8d98: aa0003f3     	mov	x19, x0
 2ba8d9c: 39645288     	ldrb	w8, [x20, #0x914]
 2ba8da0: 37000188     	tbnz	w8, #0x0, 0x2ba8dd0 <__start_il2cpp+0xe07bc>
 2ba8da4: f001ba40     	adrp	x0, 0x62f3000
 2ba8da8: f946b400     	ldr	x0, [x0, #0xd68]
 2ba8dac: 97f8b80d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8db0: d001ba80     	adrp	x0, 0x62fa000
 2ba8db4: f9426000     	ldr	x0, [x0, #0x4c0]
 2ba8db8: 97f8b80a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8dbc: d001ba80     	adrp	x0, 0x62fa000
 2ba8dc0: f9425800     	ldr	x0, [x0, #0x4b0]
 2ba8dc4: 97f8b807     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba8dc8: 52800028     	mov	w8, #0x1                // =1
 2ba8dcc: 39245288     	strb	w8, [x20, #0x914]
 2ba8dd0: f9403668     	ldr	x8, [x19, #0x68]
 2ba8dd4: f90003ff     	str	xzr, [sp]
 2ba8dd8: b40009e8     	cbz	x8, 0x2ba8f14 <__start_il2cpp+0xe0900>
 2ba8ddc: b9401914     	ldr	w20, [x8, #0x18]
 2ba8de0: 7100069f     	cmp	w20, #0x1
 2ba8de4: 540005ab     	b.lt	0x2ba8e98 <__start_il2cpp+0xe0884>
 2ba8de8: d001ba96     	adrp	x22, 0x62fa000
 2ba8dec: aa1f03f5     	mov	x21, xzr
 2ba8df0: aa1f03f8     	mov	x24, xzr
 2ba8df4: f94262d6     	ldr	x22, [x22, #0x4c0]
 2ba8df8: b9401d17     	ldr	w23, [x8, #0x1c]
 2ba8dfc: 710006ff     	cmp	w23, #0x1
 2ba8e00: 5400044b     	b.lt	0x2ba8e88 <__start_il2cpp+0xe0874>
 2ba8e04: aa1f03f9     	mov	x25, xzr
 2ba8e08: f9403a68     	ldr	x8, [x19, #0x70]
 2ba8e0c: b40007c8     	cbz	x8, 0x2ba8f04 <__start_il2cpp+0xe08f0>
 2ba8e10: f9400d08     	ldr	x8, [x8, #0x18]
 2ba8e14: b40007a8     	cbz	x8, 0x2ba8f08 <__start_il2cpp+0xe08f4>
 2ba8e18: b9401909     	ldr	w9, [x8, #0x18]
 2ba8e1c: eb09031f     	cmp	x24, x9
 2ba8e20: 54000682     	b.hs	0x2ba8ef0 <__start_il2cpp+0xe08dc>
 2ba8e24: 8b180d08     	add	x8, x8, x24, lsl #3
 2ba8e28: f9401108     	ldr	x8, [x8, #0x20]
 2ba8e2c: b4000688     	cbz	x8, 0x2ba8efc <__start_il2cpp+0xe08e8>
 2ba8e30: f9400908     	ldr	x8, [x8, #0x10]
 2ba8e34: b4000668     	cbz	x8, 0x2ba8f00 <__start_il2cpp+0xe08ec>
 2ba8e38: b9401909     	ldr	w9, [x8, #0x18]
 2ba8e3c: 6b09033f     	cmp	w25, w9
 2ba8e40: 540005a2     	b.hs	0x2ba8ef4 <__start_il2cpp+0xe08e0>
 2ba8e44: 8b190d08     	add	x8, x8, x25, lsl #3
 2ba8e48: f940111a     	ldr	x26, [x8, #0x20]
 2ba8e4c: b400057a     	cbz	x26, 0x2ba8ef8 <__start_il2cpp+0xe08e4>
 2ba8e50: 39404348     	ldrb	w8, [x26, #0x10]
 2ba8e54: 35000148     	cbnz	w8, 0x2ba8e7c <__start_il2cpp+0xe0868>
 2ba8e58: aa1303e0     	mov	x0, x19
 2ba8e5c: 97fff44e     	bl	0x2ba5f94 <__start_il2cpp+0xdd980>
 2ba8e60: b4000560     	cbz	x0, 0x2ba8f0c <__start_il2cpp+0xe08f8>
 2ba8e64: f9400800     	ldr	x0, [x0, #0x10]
 2ba8e68: b4000540     	cbz	x0, 0x2ba8f10 <__start_il2cpp+0xe08fc>
 2ba8e6c: f9400f42     	ldr	x2, [x26, #0x18]
 2ba8e70: f94002c3     	ldr	x3, [x22]
 2ba8e74: 0b1902a1     	add	w1, w21, w25
 2ba8e78: 943dff4f     	bl	0x3b28bb4 <__start_il2cpp+0x10605a0>
 2ba8e7c: 91000739     	add	x25, x25, #0x1
 2ba8e80: 6b1902ff     	cmp	w23, w25
 2ba8e84: 54fffc21     	b.ne	0x2ba8e08 <__start_il2cpp+0xe07f4>
 2ba8e88: 91000718     	add	x24, x24, #0x1
 2ba8e8c: 8b1702b5     	add	x21, x21, x23
 2ba8e90: eb14031f     	cmp	x24, x20
 2ba8e94: 54fffb41     	b.ne	0x2ba8dfc <__start_il2cpp+0xe07e8>
 2ba8e98: aa1f03f3     	mov	x19, xzr
 2ba8e9c: f001ba48     	adrp	x8, 0x62f3000
 2ba8ea0: d001ba94     	adrp	x20, 0x62fa000
 2ba8ea4: f946b508     	ldr	x8, [x8, #0xd68]
 2ba8ea8: f9400100     	ldr	x0, [x8]
 2ba8eac: b940e408     	ldr	w8, [x0, #0xe4]
 2ba8eb0: f9425a94     	ldr	x20, [x20, #0x4b0]
 2ba8eb4: 35000048     	cbnz	w8, 0x2ba8ebc <__start_il2cpp+0xe08a8>
 2ba8eb8: 97f8b829     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba8ebc: f9400280     	ldr	x0, [x20]
 2ba8ec0: 52800021     	mov	w1, #0x1                // =1
 2ba8ec4: 2a1f03e2     	mov	w2, wzr
 2ba8ec8: aa1f03e3     	mov	x3, xzr
 2ba8ecc: 97fe6acc     	bl	0x2b439fc <__start_il2cpp+0x7b3e8>
 2ba8ed0: b5000253     	cbnz	x19, 0x2ba8f18 <__start_il2cpp+0xe0904>
 2ba8ed4: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 2ba8ed8: f9400bfe     	ldr	x30, [sp, #0x10]
 2ba8edc: a94457f6     	ldp	x22, x21, [sp, #0x40]
 2ba8ee0: a9435ff8     	ldp	x24, x23, [sp, #0x30]
 2ba8ee4: a94267fa     	ldp	x26, x25, [sp, #0x20]
 2ba8ee8: 910183ff     	add	sp, sp, #0x60
 2ba8eec: d65f03c0     	ret
 2ba8ef0: 97f8b868     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2ba8ef4: 97f8b867     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2ba8ef8: 97f8b864     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba8efc: 97f8b863     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba8f00: 97f8b862     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba8f04: 97f8b861     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba8f08: 97f8b860     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba8f0c: 97f8b85f     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba8f10: 97f8b85e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba8f14: 97f8b85d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba8f18: aa1303e0     	mov	x0, x19
 2ba8f1c: 97f8b859     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2ba8f20: 1400000a     	b	0x2ba8f48 <__start_il2cpp+0xe0934>
 2ba8f24: 14000009     	b	0x2ba8f48 <__start_il2cpp+0xe0934>
 2ba8f28: 14000008     	b	0x2ba8f48 <__start_il2cpp+0xe0934>
 2ba8f2c: 14000007     	b	0x2ba8f48 <__start_il2cpp+0xe0934>
 2ba8f30: 14000006     	b	0x2ba8f48 <__start_il2cpp+0xe0934>
 2ba8f34: 14000005     	b	0x2ba8f48 <__start_il2cpp+0xe0934>
 2ba8f38: 14000004     	b	0x2ba8f48 <__start_il2cpp+0xe0934>
 2ba8f3c: 14000003     	b	0x2ba8f48 <__start_il2cpp+0xe0934>
 2ba8f40: 14000002     	b	0x2ba8f48 <__start_il2cpp+0xe0934>
 2ba8f44: 14000001     	b	0x2ba8f48 <__start_il2cpp+0xe0934>
 2ba8f48: aa0003f3     	mov	x19, x0
 2ba8f4c: 7100043f     	cmp	w1, #0x1
 2ba8f50: 540007c1     	b.ne	0x2ba9048 <__start_il2cpp+0xe0a34>
 2ba8f54: aa1303e0     	mov	x0, x19
 2ba8f58: 94cdf5fa     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2ba8f5c: aa0003f3     	mov	x19, x0
 2ba8f60: 9001ba40     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba8f64: f946f000     	ldr	x0, [x0, #0xde0]
 2ba8f68: 97f8b7a3     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba8f6c: f9400268     	ldr	x8, [x19]
 2ba8f70: f9400101     	ldr	x1, [x8]
 2ba8f74: 97f8b947     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2ba8f78: 36000440     	tbz	w0, #0x0, 0x2ba9000 <__start_il2cpp+0xe09ec>
 2ba8f7c: f9400274     	ldr	x20, [x19]
 2ba8f80: 94cdf5f4     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba8f84: b4000174     	cbz	x20, 0x2ba8fb0 <__start_il2cpp+0xe099c>
 2ba8f88: d001ba80     	adrp	x0, 0x62fa000
 2ba8f8c: f9426400     	ldr	x0, [x0, #0x4c8]
 2ba8f90: 97f8b799     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba8f94: f9400288     	ldr	x8, [x20]
 2ba8f98: aa0003f3     	mov	x19, x0
 2ba8f9c: a9568509     	ldp	x9, x1, [x8, #0x168]
 2ba8fa0: aa1403e0     	mov	x0, x20
 2ba8fa4: d63f0120     	blr	x9
 2ba8fa8: aa0003e1     	mov	x1, x0
 2ba8fac: 14000006     	b	0x2ba8fc4 <__start_il2cpp+0xe09b0>
 2ba8fb0: d001ba80     	adrp	x0, 0x62fa000
 2ba8fb4: f9426400     	ldr	x0, [x0, #0x4c8]
 2ba8fb8: 97f8b78f     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba8fbc: aa0003f3     	mov	x19, x0
 2ba8fc0: aa1f03e1     	mov	x1, xzr
 2ba8fc4: aa1303e0     	mov	x0, x19
 2ba8fc8: aa1f03e2     	mov	x2, xzr
 2ba8fcc: 948eff75     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2ba8fd0: aa0003f3     	mov	x19, x0
 2ba8fd4: d001ba80     	adrp	x0, 0x62fa000
 2ba8fd8: f9426800     	ldr	x0, [x0, #0x4d0]
 2ba8fdc: 97f8b786     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba8fe0: b940e408     	ldr	w8, [x0, #0xe4]
 2ba8fe4: 35000048     	cbnz	w8, 0x2ba8fec <__start_il2cpp+0xe09d8>
 2ba8fe8: 97f8b7dd     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba8fec: aa1303e0     	mov	x0, x19
 2ba8ff0: aa1f03e1     	mov	x1, xzr
 2ba8ff4: 9496b162     	bl	0x515557c <__start_il2cpp+0x268cf68>
 2ba8ff8: aa1f03f3     	mov	x19, xzr
 2ba8ffc: 17ffffa8     	b	0x2ba8e9c <__start_il2cpp+0xe0888>
 2ba9000: 52800100     	mov	w0, #0x8                // =8
 2ba9004: 94cdf5ef     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2ba9008: f9400268     	ldr	x8, [x19]
 2ba900c: f9000008     	str	x8, [x0]
 2ba9010: f0019c01     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2ba9014: 91302021     	add	x1, x1, #0xc08
 2ba9018: aa1f03e2     	mov	x2, xzr
 2ba901c: 94cdf5ed     	bl	0x5f267d0 <__cxa_throw@plt>
 2ba9020: 14000002     	b	0x2ba9028 <__start_il2cpp+0xe0a14>
 2ba9024: 14000001     	b	0x2ba9028 <__start_il2cpp+0xe0a14>
 2ba9028: aa0003f3     	mov	x19, x0
 2ba902c: 14000007     	b	0x2ba9048 <__start_il2cpp+0xe0a34>
 2ba9030: aa0103f4     	mov	x20, x1
 2ba9034: aa0003f3     	mov	x19, x0
 2ba9038: 94cdf5c6     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba903c: 2a1403e1     	mov	w1, w20
 2ba9040: 14000002     	b	0x2ba9048 <__start_il2cpp+0xe0a34>
 2ba9044: aa0003f3     	mov	x19, x0
 2ba9048: 52800028     	mov	w8, #0x1                // =1
 2ba904c: 6b08003f     	cmp	w1, w8
 2ba9050: 54000101     	b.ne	0x2ba9070 <__start_il2cpp+0xe0a5c>
 2ba9054: aa1303e0     	mov	x0, x19
 2ba9058: 94cdf5ba     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2ba905c: f9400013     	ldr	x19, [x0]
 2ba9060: f90003f3     	str	x19, [sp]
 2ba9064: 94cdf5bb     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba9068: 17ffff8d     	b	0x2ba8e9c <__start_il2cpp+0xe0888>
 2ba906c: aa0003f3     	mov	x19, x0
 2ba9070: 910003e0     	mov	x0, sp
 2ba9074: 97ebfdad     	bl	0x26a8728 <.text+0x35c8>
 2ba9078: aa1303e0     	mov	x0, x19
 2ba907c: 97fc6d98     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2ba9080: 97ebf273     	bl	0x26a5a4c <.text+0x8ec>

# BoardController :: System.Void <Initialize>g__SaveBoardRepeatedly|32_5()
# VA 0x2ba9084 .. 0x2ba9128 (next mapped method entry)
 2ba9084: d10203ff     	sub	sp, sp, #0x80
 2ba9088: a90657fe     	stp	x30, x21, [sp, #0x60]
 2ba908c: a9074ff4     	stp	x20, x19, [sp, #0x70]
 2ba9090: b001db55     	adrp	x21, 0x6712000
 2ba9094: b001ba94     	adrp	x20, 0x62fa000
 2ba9098: aa0003f3     	mov	x19, x0
 2ba909c: 396456a8     	ldrb	w8, [x21, #0x915]
 2ba90a0: f9426e94     	ldr	x20, [x20, #0x4d8]
 2ba90a4: 370000c8     	tbnz	w8, #0x0, 0x2ba90bc <__start_il2cpp+0xe0aa8>
 2ba90a8: b001ba80     	adrp	x0, 0x62fa000
 2ba90ac: f9426c00     	ldr	x0, [x0, #0x4d8]
 2ba90b0: 97f8b74c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba90b4: 52800028     	mov	w8, #0x1                // =1
 2ba90b8: 392456a8     	strb	w8, [x21, #0x915]
 2ba90bc: 6f00e400     	movi	v0.2d, #0000000000000000
 2ba90c0: 910003e8     	mov	x8, sp
 2ba90c4: aa1f03e0     	mov	x0, xzr
 2ba90c8: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2ba90cc: ad0203e0     	stp	q0, q0, [sp, #0x40]
 2ba90d0: 9491c508     	bl	0x501a4f0 <__start_il2cpp+0x2551edc>
 2ba90d4: ad4007e0     	ldp	q0, q1, [sp]
 2ba90d8: 910083f5     	add	x21, sp, #0x20
 2ba90dc: b27d02a0     	orr	x0, x21, #0x8
 2ba90e0: aa1f03e1     	mov	x1, xzr
 2ba90e4: 3c8283e0     	stur	q0, [sp, #0x28]
 2ba90e8: 3c8383e1     	stur	q1, [sp, #0x38]
 2ba90ec: 97f8b728     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba90f0: 9100a2a0     	add	x0, x21, #0x28
 2ba90f4: aa1303e1     	mov	x1, x19
 2ba90f8: f90027f3     	str	x19, [sp, #0x48]
 2ba90fc: 97f8b724     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba9100: f9400282     	ldr	x2, [x20]
 2ba9104: 12800008     	mov	w8, #-0x1               // =-1
 2ba9108: b27d02a0     	orr	x0, x21, #0x8
 2ba910c: 910083e1     	add	x1, sp, #0x20
 2ba9110: b90023e8     	str	w8, [sp, #0x20]
 2ba9114: 941e38c1     	bl	0x3337418 <__start_il2cpp+0x86ee04>
 2ba9118: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2ba911c: a94657fe     	ldp	x30, x21, [sp, #0x60]
 2ba9120: 910203ff     	add	sp, sp, #0x80
 2ba9124: d65f03c0     	ret

# BoardController :: System.Void <Initialize>g__LogBoardData|32_6()
# VA 0x2ba9128 .. 0x2ba9674 (next mapped method entry)
 2ba9128: d10243ff     	sub	sp, sp, #0x90
 2ba912c: a9037bfd     	stp	x29, x30, [sp, #0x30]
 2ba9130: a9046ffc     	stp	x28, x27, [sp, #0x40]
 2ba9134: a90567fa     	stp	x26, x25, [sp, #0x50]
 2ba9138: a9065ff8     	stp	x24, x23, [sp, #0x60]
 2ba913c: a90757f6     	stp	x22, x21, [sp, #0x70]
 2ba9140: a9084ff4     	stp	x20, x19, [sp, #0x80]
 2ba9144: b001db54     	adrp	x20, 0x6712000
 2ba9148: aa0003f3     	mov	x19, x0
 2ba914c: 39645a88     	ldrb	w8, [x20, #0x916]
 2ba9150: 37000428     	tbnz	w8, #0x0, 0x2ba91d4 <__start_il2cpp+0xe0bc0>
 2ba9154: b001ba80     	adrp	x0, 0x62fa000
 2ba9158: f9427000     	ldr	x0, [x0, #0x4e0]
 2ba915c: 97f8b721     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9160: b001ba60     	adrp	x0, 0x62f6000
 2ba9164: f943d400     	ldr	x0, [x0, #0x7a8]
 2ba9168: 97f8b71e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba916c: b001ba80     	adrp	x0, 0x62fa000
 2ba9170: f9427400     	ldr	x0, [x0, #0x4e8]
 2ba9174: 97f8b71b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9178: b001ba60     	adrp	x0, 0x62f6000
 2ba917c: f9400c00     	ldr	x0, [x0, #0x18]
 2ba9180: 97f8b718     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9184: d001ba60     	adrp	x0, 0x62f7000
 2ba9188: f9445c00     	ldr	x0, [x0, #0x8b8]
 2ba918c: 97f8b715     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9190: d001ba60     	adrp	x0, 0x62f7000
 2ba9194: f9449c00     	ldr	x0, [x0, #0x938]
 2ba9198: 97f8b712     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba919c: 9001ba80     	adrp	x0, 0x62f9000
 2ba91a0: f9444000     	ldr	x0, [x0, #0x880]
 2ba91a4: 97f8b70f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba91a8: 9001ba40     	adrp	x0, 0x62f1000
 2ba91ac: f940d800     	ldr	x0, [x0, #0x1b0]
 2ba91b0: 97f8b70c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba91b4: b001ba80     	adrp	x0, 0x62fa000
 2ba91b8: f9427800     	ldr	x0, [x0, #0x4f0]
 2ba91bc: 97f8b709     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba91c0: b001ba80     	adrp	x0, 0x62fa000
 2ba91c4: f9427c00     	ldr	x0, [x0, #0x4f8]
 2ba91c8: 97f8b706     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba91cc: 52800028     	mov	w8, #0x1                // =1
 2ba91d0: 39245a88     	strb	w8, [x20, #0x916]
 2ba91d4: f9403668     	ldr	x8, [x19, #0x68]
 2ba91d8: b9002bff     	str	wzr, [sp, #0x28]
 2ba91dc: b40019e8     	cbz	x8, 0x2ba9518 <__start_il2cpp+0xe0f04>
 2ba91e0: b001ba89     	adrp	x9, 0x62fa000
 2ba91e4: f9427129     	ldr	x9, [x9, #0x4e0]
 2ba91e8: 2943710a     	ldp	w10, w28, [x8, #0x18]
 2ba91ec: f9400120     	ldr	x0, [x9]
 2ba91f0: f90003ea     	str	x10, [sp]
 2ba91f4: 97f8b7a1     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba91f8: aa1f03e1     	mov	x1, xzr
 2ba91fc: aa0003f4     	mov	x20, x0
 2ba9200: 94a07ca6     	bl	0x53c8498 <__start_il2cpp+0x28ffe84>
 2ba9204: f94003e8     	ldr	x8, [sp]
 2ba9208: 7100051f     	cmp	w8, #0x1
 2ba920c: 5400136b     	b.lt	0x2ba9478 <__start_il2cpp+0xe0e64>
 2ba9210: b001ba7b     	adrp	x27, 0x62f6000
 2ba9214: 9001ba58     	adrp	x24, 0x62f1000
 2ba9218: f001ba3d     	adrp	x29, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba921c: f943d77b     	ldr	x27, [x27, #0x7a8]
 2ba9220: f940db18     	ldr	x24, [x24, #0x1b0]
 2ba9224: f9470fbd     	ldr	x29, [x29, #0xe18]
 2ba9228: aa1f03fa     	mov	x26, xzr
 2ba922c: a900d3fc     	stp	x28, x20, [sp, #0x8]
 2ba9230: 7100079f     	cmp	w28, #0x1
 2ba9234: 540011ab     	b.lt	0x2ba9468 <__start_il2cpp+0xe0e54>
 2ba9238: aa1f03f9     	mov	x25, xzr
 2ba923c: f9405268     	ldr	x8, [x19, #0xa0]
 2ba9240: b4001528     	cbz	x8, 0x2ba94e4 <__start_il2cpp+0xe0ed0>
 2ba9244: b9401909     	ldr	w9, [x8, #0x18]
 2ba9248: eb09035f     	cmp	x26, x9
 2ba924c: 54001522     	b.hs	0x2ba94f0 <__start_il2cpp+0xe0edc>
 2ba9250: 8b1a0d08     	add	x8, x8, x26, lsl #3
 2ba9254: f9401108     	ldr	x8, [x8, #0x20]
 2ba9258: b4001488     	cbz	x8, 0x2ba94e8 <__start_il2cpp+0xe0ed4>
 2ba925c: b9401909     	ldr	w9, [x8, #0x18]
 2ba9260: 6b09033f     	cmp	w25, w9
 2ba9264: 54001442     	b.hs	0x2ba94ec <__start_il2cpp+0xe0ed8>
 2ba9268: 8b190d08     	add	x8, x8, x25, lsl #3
 2ba926c: f9401116     	ldr	x22, [x8, #0x20]
 2ba9270: b4001396     	cbz	x22, 0x2ba94e0 <__start_il2cpp+0xe0ecc>
 2ba9274: aa1603e0     	mov	x0, x22
 2ba9278: 97ffd4a4     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba927c: 36000240     	tbz	w0, #0x0, 0x2ba92c4 <__start_il2cpp+0xe0cb0>
 2ba9280: f9400360     	ldr	x0, [x27]
 2ba9284: b940e408     	ldr	w8, [x0, #0xe4]
 2ba9288: 35000048     	cbnz	w8, 0x2ba9290 <__start_il2cpp+0xe0c7c>
 2ba928c: 97f8b734     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba9290: d001ba68     	adrp	x8, 0x62f7000
 2ba9294: f9449d08     	ldr	x8, [x8, #0x938]
 2ba9298: f9400100     	ldr	x0, [x8]
 2ba929c: aa1f03e1     	mov	x1, xzr
 2ba92a0: 94a075f4     	bl	0x53c6a70 <__start_il2cpp+0x28fe45c>
 2ba92a4: aa0003e1     	mov	x1, x0
 2ba92a8: b40012d4     	cbz	x20, 0x2ba9500 <__start_il2cpp+0xe0eec>
 2ba92ac: f9400288     	ldr	x8, [x20]
 2ba92b0: f9414509     	ldr	x9, [x8, #0x288]
 2ba92b4: f9414902     	ldr	x2, [x8, #0x290]
 2ba92b8: aa1403e0     	mov	x0, x20
 2ba92bc: d63f0120     	blr	x9
 2ba92c0: 14000067     	b	0x2ba945c <__start_il2cpp+0xe0e48>
 2ba92c4: f9401ac8     	ldr	x8, [x22, #0x30]
 2ba92c8: b4001208     	cbz	x8, 0x2ba9508 <__start_il2cpp+0xe0ef4>
 2ba92cc: f9402908     	ldr	x8, [x8, #0x50]
 2ba92d0: b4001148     	cbz	x8, 0x2ba94f8 <__start_il2cpp+0xe0ee4>
 2ba92d4: b9403108     	ldr	w8, [x8, #0x30]
 2ba92d8: f94027a0     	ldr	x0, [x29, #0x48]
 2ba92dc: b9001fe8     	str	w8, [sp, #0x1c]
 2ba92e0: 910073e1     	add	x1, sp, #0x1c
 2ba92e4: 97f8b720     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba92e8: f9401ac8     	ldr	x8, [x22, #0x30]
 2ba92ec: b40010c8     	cbz	x8, 0x2ba9504 <__start_il2cpp+0xe0ef0>
 2ba92f0: aa0003f5     	mov	x21, x0
 2ba92f4: b9404508     	ldr	w8, [x8, #0x44]
 2ba92f8: f94027a0     	ldr	x0, [x29, #0x48]
 2ba92fc: b9001be8     	str	w8, [sp, #0x18]
 2ba9300: 910063e1     	add	x1, sp, #0x18
 2ba9304: 97f8b718     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba9308: d001ba68     	adrp	x8, 0x62f7000
 2ba930c: aa0003e2     	mov	x2, x0
 2ba9310: f9445d08     	ldr	x8, [x8, #0x8b8]
 2ba9314: f9400100     	ldr	x0, [x8]
 2ba9318: aa1503e1     	mov	x1, x21
 2ba931c: aa1f03e3     	mov	x3, xzr
 2ba9320: 948f36f5     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2ba9324: aa0003f5     	mov	x21, x0
 2ba9328: f9401ac0     	ldr	x0, [x22, #0x30]
 2ba932c: b4000e80     	cbz	x0, 0x2ba94fc <__start_il2cpp+0xe0ee8>
 2ba9330: f9400317     	ldr	x23, [x24]
 2ba9334: aa1f03e1     	mov	x1, xzr
 2ba9338: 94012f89     	bl	0x2bf515c <__start_il2cpp+0x12cb48>
 2ba933c: 360006a0     	tbz	w0, #0x0, 0x2ba9410 <__start_il2cpp+0xe0dfc>
 2ba9340: f9401ac8     	ldr	x8, [x22, #0x30]
 2ba9344: b4000e88     	cbz	x8, 0x2ba9514 <__start_il2cpp+0xe0f00>
 2ba9348: f9405d00     	ldr	x0, [x8, #0xb8]
 2ba934c: b4000e20     	cbz	x0, 0x2ba9510 <__start_il2cpp+0xe0efc>
 2ba9350: b001ba88     	adrp	x8, 0x62fa000
 2ba9354: f9427508     	ldr	x8, [x8, #0x4e8]
 2ba9358: f9400102     	ldr	x2, [x8]
 2ba935c: 2a1f03e1     	mov	w1, wzr
 2ba9360: 943dfe00     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2ba9364: aa0003f6     	mov	x22, x0
 2ba9368: b4000d20     	cbz	x0, 0x2ba950c <__start_il2cpp+0xe0ef8>
 2ba936c: b94032c8     	ldr	w8, [x22, #0x30]
 2ba9370: f94027a0     	ldr	x0, [x29, #0x48]
 2ba9374: aa1d03f8     	mov	x24, x29
 2ba9378: b9001fe8     	str	w8, [sp, #0x1c]
 2ba937c: 910073e1     	add	x1, sp, #0x1c
 2ba9380: 97f8b6f9     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba9384: aa0003f7     	mov	x23, x0
 2ba9388: 3940d2c8     	ldrb	w8, [x22, #0x34]
 2ba938c: f9401700     	ldr	x0, [x24, #0x28]
 2ba9390: aa1b03fc     	mov	x28, x27
 2ba9394: 390063e8     	strb	w8, [sp, #0x18]
 2ba9398: 910063e1     	add	x1, sp, #0x18
 2ba939c: 97f8b6f2     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba93a0: b001ba88     	adrp	x8, 0x62fa000
 2ba93a4: aa0003e2     	mov	x2, x0
 2ba93a8: f9427908     	ldr	x8, [x8, #0x4f0]
 2ba93ac: f9400100     	ldr	x0, [x8]
 2ba93b0: aa1703e1     	mov	x1, x23
 2ba93b4: aa1f03e3     	mov	x3, xzr
 2ba93b8: 948f36cf     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2ba93bc: aa0003f7     	mov	x23, x0
 2ba93c0: f94026c0     	ldr	x0, [x22, #0x48]
 2ba93c4: aa1f03e1     	mov	x1, xzr
 2ba93c8: 940257f3     	bl	0x2c3f394 <__start_il2cpp+0x176d80>
 2ba93cc: aa0003f8     	mov	x24, x0
 2ba93d0: f9402ac0     	ldr	x0, [x22, #0x50]
 2ba93d4: aa1f03e1     	mov	x1, xzr
 2ba93d8: 940257ef     	bl	0x2c3f394 <__start_il2cpp+0x176d80>
 2ba93dc: 9001ba88     	adrp	x8, 0x62f9000
 2ba93e0: aa0003e3     	mov	x3, x0
 2ba93e4: f9444108     	ldr	x8, [x8, #0x880]
 2ba93e8: f9400102     	ldr	x2, [x8]
 2ba93ec: aa1703e0     	mov	x0, x23
 2ba93f0: aa1803e1     	mov	x1, x24
 2ba93f4: aa1f03e4     	mov	x4, xzr
 2ba93f8: 948f35bf     	bl	0x4f76af4 <__start_il2cpp+0x24ae4e0>
 2ba93fc: aa1c03fb     	mov	x27, x28
 2ba9400: a940d3fc     	ldp	x28, x20, [sp, #0x8]
 2ba9404: 9001ba58     	adrp	x24, 0x62f1000
 2ba9408: aa0003f7     	mov	x23, x0
 2ba940c: f940db18     	ldr	x24, [x24, #0x1b0]
 2ba9410: aa1503e0     	mov	x0, x21
 2ba9414: aa1703e1     	mov	x1, x23
 2ba9418: aa1f03e2     	mov	x2, xzr
 2ba941c: 948efe61     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2ba9420: aa0003f5     	mov	x21, x0
 2ba9424: f9400360     	ldr	x0, [x27]
 2ba9428: b940e408     	ldr	w8, [x0, #0xe4]
 2ba942c: 35000048     	cbnz	w8, 0x2ba9434 <__start_il2cpp+0xe0e20>
 2ba9430: 97f8b6cb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba9434: aa1503e0     	mov	x0, x21
 2ba9438: aa1f03e1     	mov	x1, xzr
 2ba943c: 94a0758d     	bl	0x53c6a70 <__start_il2cpp+0x28fe45c>
 2ba9440: aa0003e1     	mov	x1, x0
 2ba9444: b4000594     	cbz	x20, 0x2ba94f4 <__start_il2cpp+0xe0ee0>
 2ba9448: f9400288     	ldr	x8, [x20]
 2ba944c: f9414509     	ldr	x9, [x8, #0x288]
 2ba9450: f9414902     	ldr	x2, [x8, #0x290]
 2ba9454: aa1403e0     	mov	x0, x20
 2ba9458: d63f0120     	blr	x9
 2ba945c: 91000739     	add	x25, x25, #0x1
 2ba9460: 6b19039f     	cmp	w28, w25
 2ba9464: 54ffeec1     	b.ne	0x2ba923c <__start_il2cpp+0xe0c28>
 2ba9468: f94003e8     	ldr	x8, [sp]
 2ba946c: 9100075a     	add	x26, x26, #0x1
 2ba9470: eb08035f     	cmp	x26, x8
 2ba9474: 54ffede1     	b.ne	0x2ba9230 <__start_il2cpp+0xe0c1c>
 2ba9478: b4000534     	cbz	x20, 0x2ba951c <__start_il2cpp+0xe0f08>
 2ba947c: f9400288     	ldr	x8, [x20]
 2ba9480: a9568509     	ldp	x9, x1, [x8, #0x168]
 2ba9484: aa1403e0     	mov	x0, x20
 2ba9488: d63f0120     	blr	x9
 2ba948c: b001ba68     	adrp	x8, 0x62f6000
 2ba9490: aa0003f3     	mov	x19, x0
 2ba9494: f9400d08     	ldr	x8, [x8, #0x18]
 2ba9498: f9400100     	ldr	x0, [x8]
 2ba949c: b940e408     	ldr	w8, [x0, #0xe4]
 2ba94a0: 35000048     	cbnz	w8, 0x2ba94a8 <__start_il2cpp+0xe0e94>
 2ba94a4: 97f8b6ae     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba94a8: b001ba88     	adrp	x8, 0x62fa000
 2ba94ac: f9427d08     	ldr	x8, [x8, #0x4f8]
 2ba94b0: f9400100     	ldr	x0, [x8]
 2ba94b4: aa1303e1     	mov	x1, x19
 2ba94b8: aa1f03e2     	mov	x2, xzr
 2ba94bc: 97fe921b     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2ba94c0: a9484ff4     	ldp	x20, x19, [sp, #0x80]
 2ba94c4: a94757f6     	ldp	x22, x21, [sp, #0x70]
 2ba94c8: a9465ff8     	ldp	x24, x23, [sp, #0x60]
 2ba94cc: a94567fa     	ldp	x26, x25, [sp, #0x50]
 2ba94d0: a9446ffc     	ldp	x28, x27, [sp, #0x40]
 2ba94d4: a9437bfd     	ldp	x29, x30, [sp, #0x30]
 2ba94d8: 910243ff     	add	sp, sp, #0x90
 2ba94dc: d65f03c0     	ret
 2ba94e0: 97f8b6ea     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba94e4: 97f8b6e9     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba94e8: 97f8b6e8     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba94ec: 97f8b6e9     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2ba94f0: 97f8b6e8     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2ba94f4: 97f8b6e5     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba94f8: 97f8b6e4     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba94fc: 97f8b6e3     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba9500: 97f8b6e2     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba9504: 97f8b6e1     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba9508: 97f8b6e0     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba950c: 97f8b6df     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba9510: 97f8b6de     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba9514: 97f8b6dd     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba9518: 97f8b6dc     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba951c: 97f8b6db     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba9520: 14000021     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9524: 14000020     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9528: 1400001f     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba952c: 1400001e     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9530: 1400001d     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9534: 1400001c     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9538: 1400001b     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba953c: 1400001a     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9540: 14000019     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9544: 14000018     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9548: 14000017     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba954c: 14000016     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9550: 14000015     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9554: 14000014     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9558: 14000013     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba955c: 14000012     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9560: 14000011     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9564: 14000010     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9568: 1400000f     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba956c: 1400000e     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9570: 1400000d     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9574: 1400000c     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9578: 1400000b     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba957c: 1400000a     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9580: 14000009     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9584: 14000008     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9588: 14000007     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba958c: 14000006     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9590: 14000005     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9594: 14000004     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba9598: 14000003     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba959c: 14000002     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba95a0: 14000001     	b	0x2ba95a4 <__start_il2cpp+0xe0f90>
 2ba95a4: aa0003f3     	mov	x19, x0
 2ba95a8: 7100043f     	cmp	w1, #0x1
 2ba95ac: 540005e1     	b.ne	0x2ba9668 <__start_il2cpp+0xe1054>
 2ba95b0: aa1303e0     	mov	x0, x19
 2ba95b4: 94cdf463     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2ba95b8: aa0003f3     	mov	x19, x0
 2ba95bc: f001ba20     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba95c0: f946f000     	ldr	x0, [x0, #0xde0]
 2ba95c4: 97f8b60c     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba95c8: f9400268     	ldr	x8, [x19]
 2ba95cc: f9400101     	ldr	x1, [x8]
 2ba95d0: 97f8b7b0     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2ba95d4: 36000360     	tbz	w0, #0x0, 0x2ba9640 <__start_il2cpp+0xe102c>
 2ba95d8: b9802bf4     	ldrsw	x20, [sp, #0x28]
 2ba95dc: f9400268     	ldr	x8, [x19]
 2ba95e0: 910083e9     	add	x9, sp, #0x20
 2ba95e4: f8347928     	str	x8, [x9, x20, lsl #3]
 2ba95e8: 11000688     	add	w8, w20, #0x1
 2ba95ec: b9002be8     	str	w8, [sp, #0x28]
 2ba95f0: 94cdf458     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba95f4: b001ba60     	adrp	x0, 0x62f6000
 2ba95f8: f9400c00     	ldr	x0, [x0, #0x18]
 2ba95fc: 97f8b5fe     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba9600: b940e408     	ldr	w8, [x0, #0xe4]
 2ba9604: 35000048     	cbnz	w8, 0x2ba960c <__start_il2cpp+0xe0ff8>
 2ba9608: 97f8b655     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba960c: b001ba80     	adrp	x0, 0x62fa000
 2ba9610: f9427c00     	ldr	x0, [x0, #0x4f8]
 2ba9614: 97f8b5f8     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba9618: aa0003f3     	mov	x19, x0
 2ba961c: b001ba80     	adrp	x0, 0x62fa000
 2ba9620: f9428000     	ldr	x0, [x0, #0x500]
 2ba9624: 97f8b5f4     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba9628: aa0003e1     	mov	x1, x0
 2ba962c: aa1303e0     	mov	x0, x19
 2ba9630: aa1f03e2     	mov	x2, xzr
 2ba9634: 97fe91bd     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2ba9638: b9002bf4     	str	w20, [sp, #0x28]
 2ba963c: 17ffffa1     	b	0x2ba94c0 <__start_il2cpp+0xe0eac>
 2ba9640: 52800100     	mov	w0, #0x8                // =8
 2ba9644: 94cdf45f     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2ba9648: f9400268     	ldr	x8, [x19]
 2ba964c: f9000008     	str	x8, [x0]
 2ba9650: f0019c01     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2ba9654: 91302021     	add	x1, x1, #0xc08
 2ba9658: aa1f03e2     	mov	x2, xzr
 2ba965c: 94cdf45d     	bl	0x5f267d0 <__cxa_throw@plt>
 2ba9660: aa0003f3     	mov	x19, x0
 2ba9664: 94cdf43b     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba9668: aa1303e0     	mov	x0, x19
 2ba966c: 97fc6c1c     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2ba9670: 97ebf0f7     	bl	0x26a5a4c <.text+0x8ec>

# BoardController :: System.Void <Initialize>g__Create|32_7()
# VA 0x2ba9674 .. 0x2ba9dc8 (next mapped method entry)
 2ba9674: d103c3ff     	sub	sp, sp, #0xf0
 2ba9678: 6d0633ed     	stp	d13, d12, [sp, #0x60]
 2ba967c: 6d072beb     	stp	d11, d10, [sp, #0x70]
 2ba9680: 6d0823e9     	stp	d9, d8, [sp, #0x80]
 2ba9684: a9097bfd     	stp	x29, x30, [sp, #0x90]
 2ba9688: a90a6ffc     	stp	x28, x27, [sp, #0xa0]
 2ba968c: a90b67fa     	stp	x26, x25, [sp, #0xb0]
 2ba9690: a90c5ff8     	stp	x24, x23, [sp, #0xc0]
 2ba9694: a90d57f6     	stp	x22, x21, [sp, #0xd0]
 2ba9698: a90e4ff4     	stp	x20, x19, [sp, #0xe0]
 2ba969c: b001db55     	adrp	x21, 0x6712000
 2ba96a0: d001ba54     	adrp	x20, 0x62f3000
 2ba96a4: aa0003f3     	mov	x19, x0
 2ba96a8: 39645ea8     	ldrb	w8, [x21, #0x917]
 2ba96ac: f946b694     	ldr	x20, [x20, #0xd68]
 2ba96b0: 37000428     	tbnz	w8, #0x0, 0x2ba9734 <__start_il2cpp+0xe1120>
 2ba96b4: b001ba60     	adrp	x0, 0x62f6000
 2ba96b8: f9449800     	ldr	x0, [x0, #0x930]
 2ba96bc: 97f8b5c9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba96c0: b001ba80     	adrp	x0, 0x62fa000
 2ba96c4: f9428400     	ldr	x0, [x0, #0x508]
 2ba96c8: 97f8b5c6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba96cc: b001ba80     	adrp	x0, 0x62fa000
 2ba96d0: f9428800     	ldr	x0, [x0, #0x510]
 2ba96d4: 97f8b5c3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba96d8: d001ba40     	adrp	x0, 0x62f3000
 2ba96dc: f946b400     	ldr	x0, [x0, #0xd68]
 2ba96e0: 97f8b5c0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba96e4: d001ba40     	adrp	x0, 0x62f3000
 2ba96e8: f9479000     	ldr	x0, [x0, #0xf20]
 2ba96ec: 97f8b5bd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba96f0: b001ba80     	adrp	x0, 0x62fa000
 2ba96f4: f9422400     	ldr	x0, [x0, #0x448]
 2ba96f8: 97f8b5ba     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba96fc: b001ba80     	adrp	x0, 0x62fa000
 2ba9700: f9428c00     	ldr	x0, [x0, #0x518]
 2ba9704: 97f8b5b7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9708: f001ba20     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba970c: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba9710: 97f8b5b4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9714: b001ba80     	adrp	x0, 0x62fa000
 2ba9718: f9429000     	ldr	x0, [x0, #0x520]
 2ba971c: 97f8b5b1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9720: 9001ba40     	adrp	x0, 0x62f1000
 2ba9724: f940d800     	ldr	x0, [x0, #0x1b0]
 2ba9728: 97f8b5ae     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba972c: 52800028     	mov	w8, #0x1                // =1
 2ba9730: 39245ea8     	strb	w8, [x21, #0x917]
 2ba9734: f9400280     	ldr	x0, [x20]
 2ba9738: b001ba94     	adrp	x20, 0x62fa000
 2ba973c: 9001ba56     	adrp	x22, 0x62f1000
 2ba9740: b001ba75     	adrp	x21, 0x62f6000
 2ba9744: f9429294     	ldr	x20, [x20, #0x520]
 2ba9748: f940dad6     	ldr	x22, [x22, #0x1b0]
 2ba974c: b940e408     	ldr	w8, [x0, #0xe4]
 2ba9750: f9449ab5     	ldr	x21, [x21, #0x930]
 2ba9754: 35000048     	cbnz	w8, 0x2ba975c <__start_il2cpp+0xe1148>
 2ba9758: 97f8b601     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba975c: f9400280     	ldr	x0, [x20]
 2ba9760: f94002c2     	ldr	x2, [x22]
 2ba9764: 2a1f03e1     	mov	w1, wzr
 2ba9768: aa1f03e3     	mov	x3, xzr
 2ba976c: 97fe2e7e     	bl	0x2b35164 <__start_il2cpp+0x6cb50>
 2ba9770: f94002a8     	ldr	x8, [x21]
 2ba9774: 92800009     	mov	x9, #-0x1               // =-1
 2ba9778: aa0003f4     	mov	x20, x0
 2ba977c: 910123e0     	add	x0, sp, #0x48
 2ba9780: aa1f03e1     	mov	x1, xzr
 2ba9784: a904a7e8     	stp	x8, x9, [sp, #0x48]
 2ba9788: 52800028     	mov	w8, #0x1                // =1
 2ba978c: b9005be8     	str	w8, [sp, #0x58]
 2ba9790: 9496685f     	bl	0x514390c <__start_il2cpp+0x267b2f8>
 2ba9794: aa0003e1     	mov	x1, x0
 2ba9798: aa1403e0     	mov	x0, x20
 2ba979c: aa1f03e2     	mov	x2, xzr
 2ba97a0: 948efda6     	bl	0x4f68e38 <__start_il2cpp+0x24a0824>
 2ba97a4: aa1f03f6     	mov	x22, xzr
 2ba97a8: 36000380     	tbz	w0, #0x0, 0x2ba9818 <__start_il2cpp+0xe1204>
 2ba97ac: f9404660     	ldr	x0, [x19, #0x88]
 2ba97b0: 52800021     	mov	w1, #0x1                // =1
 2ba97b4: aa1f03e2     	mov	x2, xzr
 2ba97b8: 9402ddb7     	bl	0x2c60e94 <__start_il2cpp+0x198880>
 2ba97bc: f001ba28     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba97c0: aa0003f4     	mov	x20, x0
 2ba97c4: f9478d08     	ldr	x8, [x8, #0xf18]
 2ba97c8: f9400108     	ldr	x8, [x8]
 2ba97cc: b940e509     	ldr	w9, [x8, #0xe4]
 2ba97d0: 35000069     	cbnz	w9, 0x2ba97dc <__start_il2cpp+0xe11c8>
 2ba97d4: aa0803e0     	mov	x0, x8
 2ba97d8: 97f8b5e1     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba97dc: aa1403e0     	mov	x0, x20
 2ba97e0: aa1f03e1     	mov	x1, xzr
 2ba97e4: aa1f03e2     	mov	x2, xzr
 2ba97e8: 94be657d     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2ba97ec: 360000c0     	tbz	w0, #0x0, 0x2ba9804 <__start_il2cpp+0xe11f0>
 2ba97f0: f9404260     	ldr	x0, [x19, #0x80]
 2ba97f4: b4002e00     	cbz	x0, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba97f8: aa1403e1     	mov	x1, x20
 2ba97fc: aa1f03e2     	mov	x2, xzr
 2ba9800: 94bd178d     	bl	0x5aef634 <__start_il2cpp+0x3027020>
 2ba9804: f9404a60     	ldr	x0, [x19, #0x90]
 2ba9808: 52800021     	mov	w1, #0x1                // =1
 2ba980c: aa1f03e2     	mov	x2, xzr
 2ba9810: 9402dda1     	bl	0x2c60e94 <__start_il2cpp+0x198880>
 2ba9814: aa0003f6     	mov	x22, x0
 2ba9818: f9403668     	ldr	x8, [x19, #0x68]
 2ba981c: b4002cc8     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9820: f9402e60     	ldr	x0, [x19, #0x58]
 2ba9824: b4002c80     	cbz	x0, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9828: 29432519     	ldp	w25, w9, [x8, #0x18]
 2ba982c: b001ba97     	adrp	x23, 0x62fa000
 2ba9830: aa1f03e1     	mov	x1, xzr
 2ba9834: f94286f7     	ldr	x23, [x23, #0x508]
 2ba9838: f9401d0a     	ldr	x10, [x8, #0x38]
 2ba983c: 7100013f     	cmp	w9, #0x0
 2ba9840: 2d442909     	ldp	s9, s10, [x8, #0x20]
 2ba9844: 1a89a534     	cinc	w20, w9, lt
 2ba9848: 7100033f     	cmp	w25, #0x0
 2ba984c: f9000bea     	str	x10, [sp, #0x10]
 2ba9850: b90033e9     	str	w9, [sp, #0x30]
 2ba9854: 1a99a735     	cinc	w21, w25, lt
 2ba9858: 94bea9f6     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2ba985c: f94002e0     	ldr	x0, [x23]
 2ba9860: 2a1903e1     	mov	w1, w25
 2ba9864: 1e204028     	fmov	s8, s1
 2ba9868: 97f8b599     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2ba986c: aa1303f8     	mov	x24, x19
 2ba9870: aa0003e1     	mov	x1, x0
 2ba9874: f80a0f00     	str	x0, [x24, #0xa0]!
 2ba9878: aa1803e0     	mov	x0, x24
 2ba987c: 97f8b544     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba9880: 7100073f     	cmp	w25, #0x1
 2ba9884: f90007f9     	str	x25, [sp, #0x8]
 2ba9888: 54001deb     	b.lt	0x2ba9c44 <__start_il2cpp+0xe1630>
 2ba988c: 13017ea8     	asr	w8, w21, #1
 2ba9890: aa1f03f5     	mov	x21, xzr
 2ba9894: 1e220100     	scvtf	s0, w8
 2ba9898: 13017e88     	asr	w8, w20, #1
 2ba989c: 1e220101     	scvtf	s1, w8
 2ba98a0: 1e200922     	fmul	s2, s9, s0
 2ba98a4: 1e210943     	fmul	s3, s10, s1
 2ba98a8: 1e202840     	fadd	s0, s2, s0
 2ba98ac: 1e212869     	fadd	s9, s3, s1
 2ba98b0: 1e203908     	fsub	s8, s8, s0
 2ba98b4: b001ba88     	adrp	x8, 0x62fa000
 2ba98b8: f9400314     	ldr	x20, [x24]
 2ba98bc: f9428908     	ldr	x8, [x8, #0x510]
 2ba98c0: b94033e1     	ldr	w1, [sp, #0x30]
 2ba98c4: f9400100     	ldr	x0, [x8]
 2ba98c8: 97f8b581     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2ba98cc: b4002754     	cbz	x20, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba98d0: aa0003f9     	mov	x25, x0
 2ba98d4: b40000c0     	cbz	x0, 0x2ba98ec <__start_il2cpp+0xe12d8>
 2ba98d8: f9400288     	ldr	x8, [x20]
 2ba98dc: aa1903e0     	mov	x0, x25
 2ba98e0: f9402101     	ldr	x1, [x8, #0x40]
 2ba98e4: 97f8b59f     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2ba98e8: b40026a0     	cbz	x0, 0x2ba9dbc <__start_il2cpp+0xe17a8>
 2ba98ec: b9401a88     	ldr	w8, [x20, #0x18]
 2ba98f0: eb0802bf     	cmp	x21, x8
 2ba98f4: 54002622     	b.hs	0x2ba9db8 <__start_il2cpp+0xe17a4>
 2ba98f8: 8b150e80     	add	x0, x20, x21, lsl #3
 2ba98fc: aa1903e1     	mov	x1, x25
 2ba9900: f8020c19     	str	x25, [x0, #0x20]!
 2ba9904: 97f8b522     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba9908: b94033e8     	ldr	w8, [sp, #0x30]
 2ba990c: 7100051f     	cmp	w8, #0x1
 2ba9910: 5400192b     	b.lt	0x2ba9c34 <__start_il2cpp+0xe1620>
 2ba9914: 1e2202aa     	scvtf	s10, w21
 2ba9918: f94007e8     	ldr	x8, [sp, #0x8]
 2ba991c: b94033e9     	ldr	w9, [sp, #0x30]
 2ba9920: 2a1f03f4     	mov	w20, wzr
 2ba9924: 4b150108     	sub	w8, w8, w21
 2ba9928: 1b157d29     	mul	w9, w9, w21
 2ba992c: 0b080908     	add	w8, w8, w8, lsl #2
 2ba9930: 1e2a290b     	fadd	s11, s8, s10
 2ba9934: 531f7908     	lsl	w8, w8, #1
 2ba9938: 2903a3e9     	stp	w9, w8, [sp, #0x1c]
 2ba993c: aa1303e0     	mov	x0, x19
 2ba9940: aa1f03e1     	mov	x1, xzr
 2ba9944: 94be5806     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2ba9948: f001ba28     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba994c: aa0003f9     	mov	x25, x0
 2ba9950: f9478d08     	ldr	x8, [x8, #0xf18]
 2ba9954: f9400108     	ldr	x8, [x8]
 2ba9958: b940e509     	ldr	w9, [x8, #0xe4]
 2ba995c: 35000069     	cbnz	w9, 0x2ba9968 <__start_il2cpp+0xe1354>
 2ba9960: aa0803e0     	mov	x0, x8
 2ba9964: 97f8b57e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba9968: b001ba88     	adrp	x8, 0x62fa000
 2ba996c: aa1903e1     	mov	x1, x25
 2ba9970: f9428d08     	ldr	x8, [x8, #0x518]
 2ba9974: f9400be0     	ldr	x0, [sp, #0x10]
 2ba9978: f9400102     	ldr	x2, [x8]
 2ba997c: 9425eb80     	bl	0x352477c <__start_il2cpp+0xa5c168>
 2ba9980: aa0003f9     	mov	x25, x0
 2ba9984: aa1603e0     	mov	x0, x22
 2ba9988: aa1f03e1     	mov	x1, xzr
 2ba998c: aa1f03e2     	mov	x2, xzr
 2ba9990: 94be6513     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2ba9994: 360000a0     	tbz	w0, #0x0, 0x2ba99a8 <__start_il2cpp+0xe1394>
 2ba9998: b40020f9     	cbz	x25, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba999c: aa1903e0     	mov	x0, x25
 2ba99a0: aa1603e1     	mov	x1, x22
 2ba99a4: 97ffd84c     	bl	0x2b9fad4 <__start_il2cpp+0xd74c0>
 2ba99a8: f9400308     	ldr	x8, [x24]
 2ba99ac: b4002048     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba99b0: b9401909     	ldr	w9, [x8, #0x18]
 2ba99b4: eb0902bf     	cmp	x21, x9
 2ba99b8: 54002002     	b.hs	0x2ba9db8 <__start_il2cpp+0xe17a4>
 2ba99bc: 8b150d08     	add	x8, x8, x21, lsl #3
 2ba99c0: f940111a     	ldr	x26, [x8, #0x20]
 2ba99c4: b4001f9a     	cbz	x26, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba99c8: b40000d9     	cbz	x25, 0x2ba99e0 <__start_il2cpp+0xe13cc>
 2ba99cc: f9400348     	ldr	x8, [x26]
 2ba99d0: aa1903e0     	mov	x0, x25
 2ba99d4: f9402101     	ldr	x1, [x8, #0x40]
 2ba99d8: 97f8b562     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2ba99dc: b4001f00     	cbz	x0, 0x2ba9dbc <__start_il2cpp+0xe17a8>
 2ba99e0: b9401b48     	ldr	w8, [x26, #0x18]
 2ba99e4: 6b08029f     	cmp	w20, w8
 2ba99e8: 54001e82     	b.hs	0x2ba9db8 <__start_il2cpp+0xe17a4>
 2ba99ec: 2a1403f7     	mov	w23, w20
 2ba99f0: aa1903e1     	mov	x1, x25
 2ba99f4: 8b170f40     	add	x0, x26, x23, lsl #3
 2ba99f8: f8020c19     	str	x25, [x0, #0x20]!
 2ba99fc: 97f8b4e4     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba9a00: f9400308     	ldr	x8, [x24]
 2ba9a04: b4001d88     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9a08: b9401909     	ldr	w9, [x8, #0x18]
 2ba9a0c: eb0902bf     	cmp	x21, x9
 2ba9a10: 54001d42     	b.hs	0x2ba9db8 <__start_il2cpp+0xe17a4>
 2ba9a14: 8b150d08     	add	x8, x8, x21, lsl #3
 2ba9a18: f9401108     	ldr	x8, [x8, #0x20]
 2ba9a1c: b4001cc8     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9a20: b9401909     	ldr	w9, [x8, #0x18]
 2ba9a24: 6b09029f     	cmp	w20, w9
 2ba9a28: 54001c82     	b.hs	0x2ba9db8 <__start_il2cpp+0xe17a4>
 2ba9a2c: 8b170d08     	add	x8, x8, x23, lsl #3
 2ba9a30: f9401108     	ldr	x8, [x8, #0x20]
 2ba9a34: b4001c08     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9a38: f9402900     	ldr	x0, [x8, #0x50]
 2ba9a3c: b4001bc0     	cbz	x0, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9a40: 0b150288     	add	w8, w20, w21
 2ba9a44: aa1f03e2     	mov	x2, xzr
 2ba9a48: 7200011f     	tst	w8, #0x1
 2ba9a4c: 1a9f17e1     	cset	w1, eq
 2ba9a50: 94027aba     	bl	0x2c48538 <__start_il2cpp+0x17ff24>
 2ba9a54: f9403668     	ldr	x8, [x19, #0x68]
 2ba9a58: b4001ae8     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9a5c: b4001ad9     	cbz	x25, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9a60: 2d44310d     	ldp	s13, s12, [x8, #0x20]
 2ba9a64: aa1903e0     	mov	x0, x25
 2ba9a68: aa1f03e1     	mov	x1, xzr
 2ba9a6c: 94be57bc     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2ba9a70: b4001a20     	cbz	x0, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9a74: 1e220280     	scvtf	s0, w20
 2ba9a78: 1e2a0982     	fmul	s2, s12, s10
 2ba9a7c: aa1f03e1     	mov	x1, xzr
 2ba9a80: 1e293801     	fsub	s1, s0, s9
 2ba9a84: 1e2009a0     	fmul	s0, s13, s0
 2ba9a88: 1e202820     	fadd	s0, s1, s0
 2ba9a8c: 1e222961     	fadd	s1, s11, s2
 2ba9a90: 2f00e402     	movi	d2, #0000000000000000
 2ba9a94: 94bea99e     	bl	0x5b5410c <__start_il2cpp+0x308baf8>
 2ba9a98: b94023e8     	ldr	w8, [sp, #0x20]
 2ba9a9c: aa1303e0     	mov	x0, x19
 2ba9aa0: 29045335     	stp	w21, w20, [x25, #0x20]
 2ba9aa4: 0b080288     	add	w8, w20, w8
 2ba9aa8: b9002b28     	str	w8, [x25, #0x28]
 2ba9aac: 97fff13a     	bl	0x2ba5f94 <__start_il2cpp+0xdd980>
 2ba9ab0: b4001820     	cbz	x0, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9ab4: f9400800     	ldr	x0, [x0, #0x10]
 2ba9ab8: b40017e0     	cbz	x0, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9abc: b001ba88     	adrp	x8, 0x62fa000
 2ba9ac0: f9422508     	ldr	x8, [x8, #0x448]
 2ba9ac4: f9400102     	ldr	x2, [x8]
 2ba9ac8: b9401fe8     	ldr	w8, [sp, #0x1c]
 2ba9acc: 0b080281     	add	w1, w20, w8
 2ba9ad0: 943dfc24     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2ba9ad4: aa0003fb     	mov	x27, x0
 2ba9ad8: aa1303e0     	mov	x0, x19
 2ba9adc: aa1b03e1     	mov	x1, x27
 2ba9ae0: 940000ba     	bl	0x2ba9dc8 <__start_il2cpp+0xe17b4>
 2ba9ae4: b400169b     	cbz	x27, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9ae8: b940177a     	ldr	w26, [x27, #0x14]
 2ba9aec: 3100075f     	cmn	w26, #0x1
 2ba9af0: 540009a0     	b.eq	0x2ba9c24 <__start_il2cpp+0xe1610>
 2ba9af4: f940167c     	ldr	x28, [x19, #0x28]
 2ba9af8: b40015fc     	cbz	x28, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9afc: f9400388     	ldr	x8, [x28]
 2ba9b00: d001ba4a     	adrp	x10, 0x62f3000
 2ba9b04: 39404377     	ldrb	w23, [x27, #0x10]
 2ba9b08: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba9b0c: f947914a     	ldr	x10, [x10, #0xf20]
 2ba9b10: f9400141     	ldr	x1, [x10]
 2ba9b14: b4000129     	cbz	x9, 0x2ba9b38 <__start_il2cpp+0xe1524>
 2ba9b18: f940590a     	ldr	x10, [x8, #0xb0]
 2ba9b1c: 9100214a     	add	x10, x10, #0x8
 2ba9b20: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba9b24: eb01017f     	cmp	x11, x1
 2ba9b28: 54000100     	b.eq	0x2ba9b48 <__start_il2cpp+0xe1534>
 2ba9b2c: f1000529     	subs	x9, x9, #0x1
 2ba9b30: 9100414a     	add	x10, x10, #0x10
 2ba9b34: 54ffff61     	b.ne	0x2ba9b20 <__start_il2cpp+0xe150c>
 2ba9b38: aa1c03e0     	mov	x0, x28
 2ba9b3c: 52800022     	mov	w2, #0x1                // =1
 2ba9b40: 97f99209     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba9b44: 14000005     	b	0x2ba9b58 <__start_il2cpp+0xe1544>
 2ba9b48: b9400149     	ldr	w9, [x10]
 2ba9b4c: 11000529     	add	w9, w9, #0x1
 2ba9b50: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba9b54: 9104e100     	add	x0, x8, #0x138
 2ba9b58: a9400808     	ldp	x8, x2, [x0]
 2ba9b5c: 710002ff     	cmp	w23, #0x0
 2ba9b60: aa1c03e0     	mov	x0, x28
 2ba9b64: 2a1a03e1     	mov	w1, w26
 2ba9b68: 1a9f07fd     	cset	w29, ne
 2ba9b6c: d63f0100     	blr	x8
 2ba9b70: aa0003fc     	mov	x28, x0
 2ba9b74: aa1903e0     	mov	x0, x25
 2ba9b78: 52800022     	mov	w2, #0x1                // =1
 2ba9b7c: aa1c03e1     	mov	x1, x28
 2ba9b80: 97ffd763     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2ba9b84: aa1903e0     	mov	x0, x25
 2ba9b88: 2a1d03e1     	mov	w1, w29
 2ba9b8c: 97ffd7a2     	bl	0x2b9fa14 <__start_il2cpp+0xd7400>
 2ba9b90: b400113c     	cbz	x28, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9b94: f9400388     	ldr	x8, [x28]
 2ba9b98: aa1c03e0     	mov	x0, x28
 2ba9b9c: aa1b03e1     	mov	x1, x27
 2ba9ba0: a9588909     	ldp	x9, x2, [x8, #0x188]
 2ba9ba4: d63f0120     	blr	x9
 2ba9ba8: 350003f7     	cbnz	w23, 0x2ba9c24 <__start_il2cpp+0xe1610>
 2ba9bac: f9401679     	ldr	x25, [x19, #0x28]
 2ba9bb0: b4001039     	cbz	x25, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9bb4: f9400328     	ldr	x8, [x25]
 2ba9bb8: d001ba4a     	adrp	x10, 0x62f3000
 2ba9bbc: b9401f7b     	ldr	w27, [x27, #0x1c]
 2ba9bc0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba9bc4: f947914a     	ldr	x10, [x10, #0xf20]
 2ba9bc8: f9400141     	ldr	x1, [x10]
 2ba9bcc: b4000129     	cbz	x9, 0x2ba9bf0 <__start_il2cpp+0xe15dc>
 2ba9bd0: f940590a     	ldr	x10, [x8, #0xb0]
 2ba9bd4: 9100214a     	add	x10, x10, #0x8
 2ba9bd8: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba9bdc: eb01017f     	cmp	x11, x1
 2ba9be0: 54000100     	b.eq	0x2ba9c00 <__start_il2cpp+0xe15ec>
 2ba9be4: f1000529     	subs	x9, x9, #0x1
 2ba9be8: 9100414a     	add	x10, x10, #0x10
 2ba9bec: 54ffff61     	b.ne	0x2ba9bd8 <__start_il2cpp+0xe15c4>
 2ba9bf0: aa1903e0     	mov	x0, x25
 2ba9bf4: 52800102     	mov	w2, #0x8                // =8
 2ba9bf8: 97f991db     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba9bfc: 14000005     	b	0x2ba9c10 <__start_il2cpp+0xe15fc>
 2ba9c00: b9400149     	ldr	w9, [x10]
 2ba9c04: 11002129     	add	w9, w9, #0x8
 2ba9c08: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba9c0c: 9104e100     	add	x0, x8, #0x138
 2ba9c10: a9400c08     	ldp	x8, x3, [x0]
 2ba9c14: aa1903e0     	mov	x0, x25
 2ba9c18: 2a1a03e1     	mov	w1, w26
 2ba9c1c: 2a1b03e2     	mov	w2, w27
 2ba9c20: d63f0100     	blr	x8
 2ba9c24: b94033e8     	ldr	w8, [sp, #0x30]
 2ba9c28: 11000694     	add	w20, w20, #0x1
 2ba9c2c: 6b08029f     	cmp	w20, w8
 2ba9c30: 54ffe861     	b.ne	0x2ba993c <__start_il2cpp+0xe1328>
 2ba9c34: f94007e8     	ldr	x8, [sp, #0x8]
 2ba9c38: 910006b5     	add	x21, x21, #0x1
 2ba9c3c: eb0802bf     	cmp	x21, x8
 2ba9c40: 54ffe3a1     	b.ne	0x2ba98b4 <__start_il2cpp+0xe12a0>
 2ba9c44: f9400308     	ldr	x8, [x24]
 2ba9c48: b4000b68     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9c4c: b9401909     	ldr	w9, [x8, #0x18]
 2ba9c50: 34000b49     	cbz	w9, 0x2ba9db8 <__start_il2cpp+0xe17a4>
 2ba9c54: f9401108     	ldr	x8, [x8, #0x20]
 2ba9c58: b4000ae8     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9c5c: b9401909     	ldr	w9, [x8, #0x18]
 2ba9c60: 34000ac9     	cbz	w9, 0x2ba9db8 <__start_il2cpp+0xe17a4>
 2ba9c64: f9401100     	ldr	x0, [x8, #0x20]
 2ba9c68: b4000a60     	cbz	x0, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9c6c: aa1f03e1     	mov	x1, xzr
 2ba9c70: 94be573b     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2ba9c74: b4000a00     	cbz	x0, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9c78: aa1f03e1     	mov	x1, xzr
 2ba9c7c: 94bea8ed     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2ba9c80: f9403668     	ldr	x8, [x19, #0x68]
 2ba9c84: b4000988     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9c88: 6e0c0420     	mov	v0.s[1], v1.s[0]
 2ba9c8c: fd401101     	ldr	d1, [x8, #0x20]
 2ba9c90: b001db54     	adrp	x20, 0x6712000
 2ba9c94: 39476a88     	ldrb	w8, [x20, #0x1da]
 2ba9c98: 0ea1d408     	fsub	v8.2s, v0.2s, v1.2s
 2ba9c9c: 350000c8     	cbnz	w8, 0x2ba9cb4 <__start_il2cpp+0xe16a0>
 2ba9ca0: 9001ba40     	adrp	x0, 0x62f1000
 2ba9ca4: f941d400     	ldr	x0, [x0, #0x3a8]
 2ba9ca8: 97f8b44e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9cac: 52800028     	mov	w8, #0x1                // =1
 2ba9cb0: 39076a88     	strb	w8, [x20, #0x1da]
 2ba9cb4: 9001ba55     	adrp	x21, 0x62f1000
 2ba9cb8: 0f0567e0     	movi	v0.2s, #0xbf, lsl #24
 2ba9cbc: f941d6b5     	ldr	x21, [x21, #0x3a8]
 2ba9cc0: f94002a8     	ldr	x8, [x21]
 2ba9cc4: f9405d08     	ldr	x8, [x8, #0xb8]
 2ba9cc8: fd400501     	ldr	d1, [x8, #0x8]
 2ba9ccc: f9405268     	ldr	x8, [x19, #0xa0]
 2ba9cd0: 2e20dc20     	fmul	v0.2s, v1.2s, v0.2s
 2ba9cd4: 0e20d500     	fadd	v0.2s, v8.2s, v0.2s
 2ba9cd8: fd005a60     	str	d0, [x19, #0xb0]
 2ba9cdc: b40006c8     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9ce0: f94007e9     	ldr	x9, [sp, #0x8]
 2ba9ce4: b940190a     	ldr	w10, [x8, #0x18]
 2ba9ce8: 51000529     	sub	w9, w9, #0x1
 2ba9cec: 6b0a013f     	cmp	w9, w10
 2ba9cf0: 54000642     	b.hs	0x2ba9db8 <__start_il2cpp+0xe17a4>
 2ba9cf4: 8b29cd08     	add	x8, x8, w9, sxtw #3
 2ba9cf8: f9401108     	ldr	x8, [x8, #0x20]
 2ba9cfc: b40005c8     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9d00: b94033e9     	ldr	w9, [sp, #0x30]
 2ba9d04: b940190a     	ldr	w10, [x8, #0x18]
 2ba9d08: 51000529     	sub	w9, w9, #0x1
 2ba9d0c: 6b0a013f     	cmp	w9, w10
 2ba9d10: 54000542     	b.hs	0x2ba9db8 <__start_il2cpp+0xe17a4>
 2ba9d14: 8b29cd08     	add	x8, x8, w9, sxtw #3
 2ba9d18: f9401100     	ldr	x0, [x8, #0x20]
 2ba9d1c: b40004c0     	cbz	x0, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9d20: aa1f03e1     	mov	x1, xzr
 2ba9d24: 94be570e     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2ba9d28: b4000460     	cbz	x0, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9d2c: aa1f03e1     	mov	x1, xzr
 2ba9d30: 94bea8c0     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2ba9d34: f9403668     	ldr	x8, [x19, #0x68]
 2ba9d38: b40003e8     	cbz	x8, 0x2ba9db4 <__start_il2cpp+0xe17a0>
 2ba9d3c: 39476a89     	ldrb	w9, [x20, #0x1da]
 2ba9d40: fd401108     	ldr	d8, [x8, #0x20]
 2ba9d44: 35000109     	cbnz	w9, 0x2ba9d64 <__start_il2cpp+0xe1750>
 2ba9d48: 9001ba40     	adrp	x0, 0x62f1000
 2ba9d4c: f941d400     	ldr	x0, [x0, #0x3a8]
 2ba9d50: ad0103e1     	stp	q1, q0, [sp, #0x20]
 2ba9d54: 97f8b423     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9d58: ad4103e1     	ldp	q1, q0, [sp, #0x20]
 2ba9d5c: 52800028     	mov	w8, #0x1                // =1
 2ba9d60: 39076a88     	strb	w8, [x20, #0x1da]
 2ba9d64: f94002a8     	ldr	x8, [x21]
 2ba9d68: 6e0c0420     	mov	v0.s[1], v1.s[0]
 2ba9d6c: 0f0167e3     	movi	v3.2s, #0x3f, lsl #24
 2ba9d70: a94d57f6     	ldp	x22, x21, [sp, #0xd0]
 2ba9d74: f9405d08     	ldr	x8, [x8, #0xb8]
 2ba9d78: a94c5ff8     	ldp	x24, x23, [sp, #0xc0]
 2ba9d7c: a94b67fa     	ldp	x26, x25, [sp, #0xb0]
 2ba9d80: fd400501     	ldr	d1, [x8, #0x8]
 2ba9d84: 0e28d402     	fadd	v2.2s, v0.2s, v8.2s
 2ba9d88: a94a6ffc     	ldp	x28, x27, [sp, #0xa0]
 2ba9d8c: 2e23dc20     	fmul	v0.2s, v1.2s, v3.2s
 2ba9d90: a9497bfd     	ldp	x29, x30, [sp, #0x90]
 2ba9d94: 6d4823e9     	ldp	d9, d8, [sp, #0x80]
 2ba9d98: 6d472beb     	ldp	d11, d10, [sp, #0x70]
 2ba9d9c: 6d4633ed     	ldp	d13, d12, [sp, #0x60]
 2ba9da0: 0e20d440     	fadd	v0.2s, v2.2s, v0.2s
 2ba9da4: fd005e60     	str	d0, [x19, #0xb8]
 2ba9da8: a94e4ff4     	ldp	x20, x19, [sp, #0xe0]
 2ba9dac: 9103c3ff     	add	sp, sp, #0xf0
 2ba9db0: d65f03c0     	ret
 2ba9db4: 97f8b4b5     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba9db8: 97f8b4b6     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2ba9dbc: 97f8b4bc     	bl	0x29d70ac <mono_class_get_checked+0x994>
 2ba9dc0: aa1f03e1     	mov	x1, xzr
 2ba9dc4: 97f8b462     	bl	0x29d6f4c <mono_class_get_checked+0x834>

# BoardController :: System.Void <Initialize>g__ValidateBoardSlotItemId|32_10(BoardSlotData boardSlot)
# VA 0x2ba9dc8 .. 0x2ba9e94 (next mapped method entry)
 2ba9dc8: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ba9dcc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba9dd0: b001db55     	adrp	x21, 0x6712000
 2ba9dd4: aa0103f3     	mov	x19, x1
 2ba9dd8: aa0003f4     	mov	x20, x0
 2ba9ddc: 396462a8     	ldrb	w8, [x21, #0x918]
 2ba9de0: 370000c8     	tbnz	w8, #0x0, 0x2ba9df8 <__start_il2cpp+0xe17e4>
 2ba9de4: d001ba40     	adrp	x0, 0x62f3000
 2ba9de8: f9479000     	ldr	x0, [x0, #0xf20]
 2ba9dec: 97f8b3fd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9df0: 52800028     	mov	w8, #0x1                // =1
 2ba9df4: 392462a8     	strb	w8, [x21, #0x918]
 2ba9df8: b40004d3     	cbz	x19, 0x2ba9e90 <__start_il2cpp+0xe187c>
 2ba9dfc: f9401694     	ldr	x20, [x20, #0x28]
 2ba9e00: b4000494     	cbz	x20, 0x2ba9e90 <__start_il2cpp+0xe187c>
 2ba9e04: d001ba4a     	adrp	x10, 0x62f3000
 2ba9e08: f9400288     	ldr	x8, [x20]
 2ba9e0c: f947914a     	ldr	x10, [x10, #0xf20]
 2ba9e10: b9401675     	ldr	w21, [x19, #0x14]
 2ba9e14: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba9e18: f9400141     	ldr	x1, [x10]
 2ba9e1c: b4000129     	cbz	x9, 0x2ba9e40 <__start_il2cpp+0xe182c>
 2ba9e20: f940590a     	ldr	x10, [x8, #0xb0]
 2ba9e24: 9100214a     	add	x10, x10, #0x8
 2ba9e28: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba9e2c: eb01017f     	cmp	x11, x1
 2ba9e30: 54000100     	b.eq	0x2ba9e50 <__start_il2cpp+0xe183c>
 2ba9e34: f1000529     	subs	x9, x9, #0x1
 2ba9e38: 9100414a     	add	x10, x10, #0x10
 2ba9e3c: 54ffff61     	b.ne	0x2ba9e28 <__start_il2cpp+0xe1814>
 2ba9e40: aa1403e0     	mov	x0, x20
 2ba9e44: 52800162     	mov	w2, #0xb                // =11
 2ba9e48: 97f99147     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba9e4c: 14000005     	b	0x2ba9e60 <__start_il2cpp+0xe184c>
 2ba9e50: b9400149     	ldr	w9, [x10]
 2ba9e54: 11002d29     	add	w9, w9, #0xb
 2ba9e58: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba9e5c: 9104e100     	add	x0, x8, #0x138
 2ba9e60: a9400808     	ldp	x8, x2, [x0]
 2ba9e64: aa1403e0     	mov	x0, x20
 2ba9e68: 2a1503e1     	mov	w1, w21
 2ba9e6c: d63f0100     	blr	x8
 2ba9e70: 370000a0     	tbnz	w0, #0x0, 0x2ba9e84 <__start_il2cpp+0xe1870>
 2ba9e74: 12800008     	mov	w8, #-0x1               // =-1
 2ba9e78: 3900427f     	strb	wzr, [x19, #0x10]
 2ba9e7c: 3900627f     	strb	wzr, [x19, #0x18]
 2ba9e80: b9001668     	str	w8, [x19, #0x14]
 2ba9e84: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba9e88: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ba9e8c: d65f03c0     	ret
 2ba9e90: 97f8b47e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardController :: System.Void <Initialize>g__SetBoardItems|32_8()
# VA 0x2ba9e94 .. 0x2baa0d4 (next mapped method entry)
 2ba9e94: d101c3ff     	sub	sp, sp, #0x70
 2ba9e98: a9017bfd     	stp	x29, x30, [sp, #0x10]
 2ba9e9c: a9026ffc     	stp	x28, x27, [sp, #0x20]
 2ba9ea0: a90367fa     	stp	x26, x25, [sp, #0x30]
 2ba9ea4: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2ba9ea8: a90557f6     	stp	x22, x21, [sp, #0x50]
 2ba9eac: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2ba9eb0: b001db54     	adrp	x20, 0x6712000
 2ba9eb4: aa0003f3     	mov	x19, x0
 2ba9eb8: 39646688     	ldrb	w8, [x20, #0x919]
 2ba9ebc: 37000188     	tbnz	w8, #0x0, 0x2ba9eec <__start_il2cpp+0xe18d8>
 2ba9ec0: d001ba40     	adrp	x0, 0x62f3000
 2ba9ec4: f9479000     	ldr	x0, [x0, #0xf20]
 2ba9ec8: 97f8b3c6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9ecc: b001ba80     	adrp	x0, 0x62fa000
 2ba9ed0: f9422400     	ldr	x0, [x0, #0x448]
 2ba9ed4: 97f8b3c3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9ed8: f001ba20     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba9edc: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba9ee0: 97f8b3c0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba9ee4: 52800028     	mov	w8, #0x1                // =1
 2ba9ee8: 39246688     	strb	w8, [x20, #0x919]
 2ba9eec: f9403668     	ldr	x8, [x19, #0x68]
 2ba9ef0: b4000ee8     	cbz	x8, 0x2baa0cc <__start_il2cpp+0xe1ab8>
 2ba9ef4: b9401909     	ldr	w9, [x8, #0x18]
 2ba9ef8: 7100053f     	cmp	w9, #0x1
 2ba9efc: f90007e9     	str	x9, [sp, #0x8]
 2ba9f00: 54000d6b     	b.lt	0x2baa0ac <__start_il2cpp+0xe1a98>
 2ba9f04: f001ba3a     	adrp	x26, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba9f08: d001ba5c     	adrp	x28, 0x62f3000
 2ba9f0c: aa1f03f9     	mov	x25, xzr
 2ba9f10: f9478f5a     	ldr	x26, [x26, #0xf18]
 2ba9f14: f947939c     	ldr	x28, [x28, #0xf20]
 2ba9f18: b9401d1d     	ldr	w29, [x8, #0x1c]
 2ba9f1c: 710007bf     	cmp	w29, #0x1
 2ba9f20: 54000beb     	b.lt	0x2baa09c <__start_il2cpp+0xe1a88>
 2ba9f24: 1b197fb8     	mul	w24, w29, w25
 2ba9f28: 2a1f03fb     	mov	w27, wzr
 2ba9f2c: f9405268     	ldr	x8, [x19, #0xa0]
 2ba9f30: b4000ce8     	cbz	x8, 0x2baa0cc <__start_il2cpp+0xe1ab8>
 2ba9f34: b9401909     	ldr	w9, [x8, #0x18]
 2ba9f38: eb09033f     	cmp	x25, x9
 2ba9f3c: 54000ca2     	b.hs	0x2baa0d0 <__start_il2cpp+0xe1abc>
 2ba9f40: 8b190d08     	add	x8, x8, x25, lsl #3
 2ba9f44: f9401108     	ldr	x8, [x8, #0x20]
 2ba9f48: b4000c28     	cbz	x8, 0x2baa0cc <__start_il2cpp+0xe1ab8>
 2ba9f4c: b9401909     	ldr	w9, [x8, #0x18]
 2ba9f50: 6b09037f     	cmp	w27, w9
 2ba9f54: 54000be2     	b.hs	0x2baa0d0 <__start_il2cpp+0xe1abc>
 2ba9f58: 8b3b4d08     	add	x8, x8, w27, uxtw #3
 2ba9f5c: f9401114     	ldr	x20, [x8, #0x20]
 2ba9f60: b4000b74     	cbz	x20, 0x2baa0cc <__start_il2cpp+0xe1ab8>
 2ba9f64: 3940b688     	ldrb	w8, [x20, #0x2d]
 2ba9f68: 35000948     	cbnz	w8, 0x2baa090 <__start_il2cpp+0xe1a7c>
 2ba9f6c: aa1403e0     	mov	x0, x20
 2ba9f70: 97ffd166     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba9f74: 370008e0     	tbnz	w0, #0x0, 0x2baa090 <__start_il2cpp+0xe1a7c>
 2ba9f78: f9400340     	ldr	x0, [x26]
 2ba9f7c: f9401a95     	ldr	x21, [x20, #0x30]
 2ba9f80: b940e408     	ldr	w8, [x0, #0xe4]
 2ba9f84: 35000048     	cbnz	w8, 0x2ba9f8c <__start_il2cpp+0xe1978>
 2ba9f88: 97f8b3f5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba9f8c: aa1503e0     	mov	x0, x21
 2ba9f90: aa1f03e1     	mov	x1, xzr
 2ba9f94: 94be81ac     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2ba9f98: 360000a0     	tbz	w0, #0x0, 0x2ba9fac <__start_il2cpp+0xe1998>
 2ba9f9c: f9401a88     	ldr	x8, [x20, #0x30]
 2ba9fa0: b4000968     	cbz	x8, 0x2baa0cc <__start_il2cpp+0xe1ab8>
 2ba9fa4: 39410108     	ldrb	w8, [x8, #0x40]
 2ba9fa8: 35000748     	cbnz	w8, 0x2baa090 <__start_il2cpp+0xe1a7c>
 2ba9fac: aa1303e0     	mov	x0, x19
 2ba9fb0: 97ffeff9     	bl	0x2ba5f94 <__start_il2cpp+0xdd980>
 2ba9fb4: b40008c0     	cbz	x0, 0x2baa0cc <__start_il2cpp+0xe1ab8>
 2ba9fb8: f9400800     	ldr	x0, [x0, #0x10]
 2ba9fbc: b4000880     	cbz	x0, 0x2baa0cc <__start_il2cpp+0xe1ab8>
 2ba9fc0: b001ba88     	adrp	x8, 0x62fa000
 2ba9fc4: 0b180361     	add	w1, w27, w24
 2ba9fc8: f9422508     	ldr	x8, [x8, #0x448]
 2ba9fcc: f9400102     	ldr	x2, [x8]
 2ba9fd0: 943dfae4     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2ba9fd4: b40007c0     	cbz	x0, 0x2baa0cc <__start_il2cpp+0xe1ab8>
 2ba9fd8: f9401676     	ldr	x22, [x19, #0x28]
 2ba9fdc: b4000796     	cbz	x22, 0x2baa0cc <__start_il2cpp+0xe1ab8>
 2ba9fe0: f94002c8     	ldr	x8, [x22]
 2ba9fe4: b9401417     	ldr	w23, [x0, #0x14]
 2ba9fe8: aa0003f5     	mov	x21, x0
 2ba9fec: f9400381     	ldr	x1, [x28]
 2ba9ff0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba9ff4: b4000129     	cbz	x9, 0x2baa018 <__start_il2cpp+0xe1a04>
 2ba9ff8: f940590a     	ldr	x10, [x8, #0xb0]
 2ba9ffc: 9100214a     	add	x10, x10, #0x8
 2baa000: f85f814b     	ldur	x11, [x10, #-0x8]
 2baa004: eb01017f     	cmp	x11, x1
 2baa008: 54000100     	b.eq	0x2baa028 <__start_il2cpp+0xe1a14>
 2baa00c: f1000529     	subs	x9, x9, #0x1
 2baa010: 9100414a     	add	x10, x10, #0x10
 2baa014: 54ffff61     	b.ne	0x2baa000 <__start_il2cpp+0xe19ec>
 2baa018: aa1603e0     	mov	x0, x22
 2baa01c: 52800162     	mov	w2, #0xb                // =11
 2baa020: 97f990d1     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2baa024: 14000005     	b	0x2baa038 <__start_il2cpp+0xe1a24>
 2baa028: b9400149     	ldr	w9, [x10]
 2baa02c: 11002d29     	add	w9, w9, #0xb
 2baa030: 8b29d108     	add	x8, x8, w9, sxtw #4
 2baa034: 9104e100     	add	x0, x8, #0x138
 2baa038: a9400808     	ldp	x8, x2, [x0]
 2baa03c: aa1603e0     	mov	x0, x22
 2baa040: 2a1703e1     	mov	w1, w23
 2baa044: d63f0100     	blr	x8
 2baa048: 360001c0     	tbz	w0, #0x0, 0x2baa080 <__start_il2cpp+0xe1a6c>
 2baa04c: f9401a80     	ldr	x0, [x20, #0x30]
 2baa050: b40003e0     	cbz	x0, 0x2baa0cc <__start_il2cpp+0xe1ab8>
 2baa054: f9401aa2     	ldr	x2, [x21, #0x30]
 2baa058: 52800021     	mov	w1, #0x1                // =1
 2baa05c: aa1f03e3     	mov	x3, xzr
 2baa060: 9401281d     	bl	0x2bf40d4 <__start_il2cpp+0x12bac0>
 2baa064: f9401a80     	ldr	x0, [x20, #0x30]
 2baa068: b4000320     	cbz	x0, 0x2baa0cc <__start_il2cpp+0xe1ab8>
 2baa06c: f9400008     	ldr	x8, [x0]
 2baa070: 2a1f03e1     	mov	w1, wzr
 2baa074: a95b8909     	ldp	x9, x2, [x8, #0x1b8]
 2baa078: d63f0120     	blr	x9
 2baa07c: 14000005     	b	0x2baa090 <__start_il2cpp+0xe1a7c>
 2baa080: 12800008     	mov	w8, #-0x1               // =-1
 2baa084: 390042bf     	strb	wzr, [x21, #0x10]
 2baa088: 390062bf     	strb	wzr, [x21, #0x18]
 2baa08c: b90016a8     	str	w8, [x21, #0x14]
 2baa090: 1100077b     	add	w27, w27, #0x1
 2baa094: 6b1d037f     	cmp	w27, w29
 2baa098: 54fff4a1     	b.ne	0x2ba9f2c <__start_il2cpp+0xe1918>
 2baa09c: f94007e8     	ldr	x8, [sp, #0x8]
 2baa0a0: 91000739     	add	x25, x25, #0x1
 2baa0a4: eb08033f     	cmp	x25, x8
 2baa0a8: 54fff3a1     	b.ne	0x2ba9f1c <__start_il2cpp+0xe1908>
 2baa0ac: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2baa0b0: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2baa0b4: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2baa0b8: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2baa0bc: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2baa0c0: a9417bfd     	ldp	x29, x30, [sp, #0x10]
 2baa0c4: 9101c3ff     	add	sp, sp, #0x70
 2baa0c8: d65f03c0     	ret
 2baa0cc: 97f8b3ef     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2baa0d0: 97f8b3f0     	bl	0x29d7090 <mono_class_get_checked+0x978>

# BoardController :: System.Void <UnlockNeighbourBoardSlots>g__PlayCardboardUnlockParticle|41_1(UnityEngine.Vector3 position)
# VA 0x2baa0d4 .. 0x2baa144 (next mapped method entry)
 2baa0d4: fc1e0fea     	str	d10, [sp, #-0x20]!
 2baa0d8: 6d00a3e9     	stp	d9, d8, [sp, #0x8]
 2baa0dc: f9000ffe     	str	x30, [sp, #0x18]
 2baa0e0: aa0003e2     	mov	x2, x0
 2baa0e4: f9402000     	ldr	x0, [x0, #0x40]
 2baa0e8: b40002c0     	cbz	x0, 0x2baa140 <__start_il2cpp+0xe1b2c>
 2baa0ec: 52800061     	mov	w1, #0x3                // =3
 2baa0f0: 52800023     	mov	w3, #0x1                // =1
 2baa0f4: aa1f03e4     	mov	x4, xzr
 2baa0f8: 1e204048     	fmov	s8, s2
 2baa0fc: 1e204029     	fmov	s9, s1
 2baa100: 1e20400a     	fmov	s10, s0
 2baa104: 94027bbf     	bl	0x2c49000 <__start_il2cpp+0x1809ec>
 2baa108: b40001c0     	cbz	x0, 0x2baa140 <__start_il2cpp+0xe1b2c>
 2baa10c: f9400008     	ldr	x8, [x0]
 2baa110: 1e204140     	fmov	s0, s10
 2baa114: 1e204121     	fmov	s1, s9
 2baa118: 1e204102     	fmov	s2, s8
 2baa11c: a95c8509     	ldp	x9, x1, [x8, #0x1c8]
 2baa120: d63f0120     	blr	x9
 2baa124: 97ffdbd8     	bl	0x2ba1084 <__start_il2cpp+0xd8a70>
 2baa128: b40000c0     	cbz	x0, 0x2baa140 <__start_il2cpp+0xe1b2c>
 2baa12c: 6d40a3e9     	ldp	d9, d8, [sp, #0x8]
 2baa130: f9407800     	ldr	x0, [x0, #0xf0]
 2baa134: f9400ffe     	ldr	x30, [sp, #0x18]
 2baa138: fc4207ea     	ldr	d10, [sp], #0x20
 2baa13c: 17ffdbe5     	b	0x2ba10d0 <__start_il2cpp+0xd8abc>
 2baa140: 97f8b3d2     	bl	0x29d7088 <mono_class_get_checked+0x970>
