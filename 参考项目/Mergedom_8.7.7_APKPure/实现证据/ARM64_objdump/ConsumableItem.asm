
# ConsumableItem :: System.Void Collect()
# VA 0x2bf81a0 .. 0x2bf83ec (next mapped method entry)
 2bf81a0: d10103ff     	sub	sp, sp, #0x40
 2bf81a4: f9000bfe     	str	x30, [sp, #0x10]
 2bf81a8: a90257f6     	stp	x22, x21, [sp, #0x20]
 2bf81ac: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2bf81b0: d001d8d4     	adrp	x20, 0x6712000
 2bf81b4: aa0003f3     	mov	x19, x0
 2bf81b8: 396cf688     	ldrb	w8, [x20, #0xb3d]
 2bf81bc: 37000188     	tbnz	w8, #0x0, 0x2bf81ec <__start_il2cpp+0x12fbd8>
 2bf81c0: b001b800     	adrp	x0, 0x62f9000
 2bf81c4: f9476c00     	ldr	x0, [x0, #0xed8]
 2bf81c8: 97f77b06     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf81cc: f001b7c0     	adrp	x0, 0x62f3000
 2bf81d0: f9479000     	ldr	x0, [x0, #0xf20]
 2bf81d4: 97f77b03     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf81d8: d001b800     	adrp	x0, 0x62fa000
 2bf81dc: f941e000     	ldr	x0, [x0, #0x3c0]
 2bf81e0: 97f77b00     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf81e4: 52800028     	mov	w8, #0x1                // =1
 2bf81e8: 392cf688     	strb	w8, [x20, #0xb3d]
 2bf81ec: f9402e74     	ldr	x20, [x19, #0x58]
 2bf81f0: a9007fff     	stp	xzr, xzr, [sp]
 2bf81f4: b4000fb4     	cbz	x20, 0x2bf83e8 <__start_il2cpp+0x12fdd4>
 2bf81f8: f9407675     	ldr	x21, [x19, #0xe8]
 2bf81fc: 3900b29f     	strb	wzr, [x20, #0x2c]
 2bf8200: b4000f55     	cbz	x21, 0x2bf83e8 <__start_il2cpp+0x12fdd4>
 2bf8204: b001b816     	adrp	x22, 0x62f9000
 2bf8208: f94002a8     	ldr	x8, [x21]
 2bf820c: f9476ed6     	ldr	x22, [x22, #0xed8]
 2bf8210: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf8214: f94002c1     	ldr	x1, [x22]
 2bf8218: b4000129     	cbz	x9, 0x2bf823c <__start_il2cpp+0x12fc28>
 2bf821c: f940590a     	ldr	x10, [x8, #0xb0]
 2bf8220: 9100214a     	add	x10, x10, #0x8
 2bf8224: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf8228: eb01017f     	cmp	x11, x1
 2bf822c: 54000100     	b.eq	0x2bf824c <__start_il2cpp+0x12fc38>
 2bf8230: f1000529     	subs	x9, x9, #0x1
 2bf8234: 9100414a     	add	x10, x10, #0x10
 2bf8238: 54ffff61     	b.ne	0x2bf8224 <__start_il2cpp+0x12fc10>
 2bf823c: aa1503e0     	mov	x0, x21
 2bf8240: 52800062     	mov	w2, #0x3                // =3
 2bf8244: 97f85848     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf8248: 14000005     	b	0x2bf825c <__start_il2cpp+0x12fc48>
 2bf824c: b9400149     	ldr	w9, [x10]
 2bf8250: 11000d29     	add	w9, w9, #0x3
 2bf8254: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf8258: 9104e100     	add	x0, x8, #0x138
 2bf825c: a9400408     	ldp	x8, x1, [x0]
 2bf8260: aa1503e0     	mov	x0, x21
 2bf8264: d63f0100     	blr	x8
 2bf8268: f9407675     	ldr	x21, [x19, #0xe8]
 2bf826c: b4000bf5     	cbz	x21, 0x2bf83e8 <__start_il2cpp+0x12fdd4>
 2bf8270: f94002a8     	ldr	x8, [x21]
 2bf8274: f94002c1     	ldr	x1, [x22]
 2bf8278: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf827c: b4000129     	cbz	x9, 0x2bf82a0 <__start_il2cpp+0x12fc8c>
 2bf8280: f940590a     	ldr	x10, [x8, #0xb0]
 2bf8284: 9100214a     	add	x10, x10, #0x8
 2bf8288: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf828c: eb01017f     	cmp	x11, x1
 2bf8290: 54000100     	b.eq	0x2bf82b0 <__start_il2cpp+0x12fc9c>
 2bf8294: f1000529     	subs	x9, x9, #0x1
 2bf8298: 9100414a     	add	x10, x10, #0x10
 2bf829c: 54ffff61     	b.ne	0x2bf8288 <__start_il2cpp+0x12fc74>
 2bf82a0: aa1503e0     	mov	x0, x21
 2bf82a4: 52800042     	mov	w2, #0x2                // =2
 2bf82a8: 97f8582f     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf82ac: 14000005     	b	0x2bf82c0 <__start_il2cpp+0x12fcac>
 2bf82b0: b9400149     	ldr	w9, [x10]
 2bf82b4: 11000929     	add	w9, w9, #0x2
 2bf82b8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf82bc: 9104e100     	add	x0, x8, #0x138
 2bf82c0: a9400808     	ldp	x8, x2, [x0]
 2bf82c4: aa1503e0     	mov	x0, x21
 2bf82c8: aa1f03e1     	mov	x1, xzr
 2bf82cc: d63f0100     	blr	x8
 2bf82d0: aa1403e0     	mov	x0, x20
 2bf82d4: aa1f03e1     	mov	x1, xzr
 2bf82d8: 52800022     	mov	w2, #0x1                // =1
 2bf82dc: aa1f03e3     	mov	x3, xzr
 2bf82e0: 97fe9d8b     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2bf82e4: f9402a68     	ldr	x8, [x19, #0x50]
 2bf82e8: f9407a75     	ldr	x21, [x19, #0xf0]
 2bf82ec: a9007fff     	stp	xzr, xzr, [sp]
 2bf82f0: b40007c8     	cbz	x8, 0x2bf83e8 <__start_il2cpp+0x12fdd4>
 2bf82f4: b9403108     	ldr	w8, [x8, #0x30]
 2bf82f8: b9404669     	ldr	w9, [x19, #0x44]
 2bf82fc: aa1303e1     	mov	x1, x19
 2bf8300: f90007f3     	str	x19, [sp, #0x8]
 2bf8304: 290027e8     	stp	w8, w9, [sp]
 2bf8308: 910003e8     	mov	x8, sp
 2bf830c: 91002100     	add	x0, x8, #0x8
 2bf8310: 97f77a9f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf8314: b40006b5     	cbz	x21, 0x2bf83e8 <__start_il2cpp+0x12fdd4>
 2bf8318: d001b808     	adrp	x8, 0x62fa000
 2bf831c: aa1503e0     	mov	x0, x21
 2bf8320: f941e108     	ldr	x8, [x8, #0x3c0]
 2bf8324: a9400be1     	ldp	x1, x2, [sp]
 2bf8328: f9400103     	ldr	x3, [x8]
 2bf832c: 9428acd9     	bl	0x3623690 <__start_il2cpp+0xb5b07c>
 2bf8330: f9404e68     	ldr	x8, [x19, #0x98]
 2bf8334: b40005a8     	cbz	x8, 0x2bf83e8 <__start_il2cpp+0x12fdd4>
 2bf8338: f9401d00     	ldr	x0, [x8, #0x38]
 2bf833c: b4000080     	cbz	x0, 0x2bf834c <__start_il2cpp+0x12fd38>
 2bf8340: 2a1f03e1     	mov	w1, wzr
 2bf8344: aa1f03e2     	mov	x2, xzr
 2bf8348: 940be05b     	bl	0x2ef04b4 <__start_il2cpp+0x427ea0>
 2bf834c: 52800080     	mov	w0, #0x4                // =4
 2bf8350: aa1f03e1     	mov	x1, xzr
 2bf8354: 97fceff0     	bl	0x2b34314 <__start_il2cpp+0x6bd00>
 2bf8358: f9406e75     	ldr	x21, [x19, #0xd8]
 2bf835c: b4000475     	cbz	x21, 0x2bf83e8 <__start_il2cpp+0x12fdd4>
 2bf8360: f001b7ca     	adrp	x10, 0x62f3000
 2bf8364: f94002a8     	ldr	x8, [x21]
 2bf8368: f947914a     	ldr	x10, [x10, #0xf20]
 2bf836c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf8370: f9400141     	ldr	x1, [x10]
 2bf8374: b4000129     	cbz	x9, 0x2bf8398 <__start_il2cpp+0x12fd84>
 2bf8378: f940590a     	ldr	x10, [x8, #0xb0]
 2bf837c: 9100214a     	add	x10, x10, #0x8
 2bf8380: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf8384: eb01017f     	cmp	x11, x1
 2bf8388: 54000100     	b.eq	0x2bf83a8 <__start_il2cpp+0x12fd94>
 2bf838c: f1000529     	subs	x9, x9, #0x1
 2bf8390: 9100414a     	add	x10, x10, #0x10
 2bf8394: 54ffff61     	b.ne	0x2bf8380 <__start_il2cpp+0x12fd6c>
 2bf8398: aa1503e0     	mov	x0, x21
 2bf839c: 52800062     	mov	w2, #0x3                // =3
 2bf83a0: 97f857f1     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf83a4: 14000005     	b	0x2bf83b8 <__start_il2cpp+0x12fda4>
 2bf83a8: b9400149     	ldr	w9, [x10]
 2bf83ac: 11000d29     	add	w9, w9, #0x3
 2bf83b0: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf83b4: 9104e100     	add	x0, x8, #0x138
 2bf83b8: a9400c08     	ldp	x8, x3, [x0]
 2bf83bc: aa1503e0     	mov	x0, x21
 2bf83c0: aa1303e1     	mov	x1, x19
 2bf83c4: 2a1f03e2     	mov	w2, wzr
 2bf83c8: d63f0100     	blr	x8
 2bf83cc: 52800028     	mov	w8, #0x1                // =1
 2bf83d0: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2bf83d4: 3900b288     	strb	w8, [x20, #0x2c]
 2bf83d8: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2bf83dc: f9400bfe     	ldr	x30, [sp, #0x10]
 2bf83e0: 910103ff     	add	sp, sp, #0x40
 2bf83e4: d65f03c0     	ret
 2bf83e8: 97f77b28     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ConsumableItem :: System.Void .ctor()
# VA 0x2bf83f0 .. 0x2bf83f4 (next mapped method entry)
 2bf83f0: 17ffe95f     	b	0x2bf296c <__start_il2cpp+0x12a358>

# ConsumableItem :: System.Void OnTapped()
# VA 0x2bf83f4 .. 0x2bf8404 (next mapped method entry)
 2bf83f4: f9400008     	ldr	x8, [x0]
 2bf83f8: f9414101     	ldr	x1, [x8, #0x280]
 2bf83fc: f9413d02     	ldr	x2, [x8, #0x278]
 2bf8400: d61f0040     	br	x2

# ConsumableItem :: System.Void OnItemPlacedToBoard(System.Boolean willPlayParticle = False)
# VA 0x2bf8404 .. 0x2bf8494 (next mapped method entry)
 2bf8404: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf8408: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf840c: d001d8d4     	adrp	x20, 0x6712000
 2bf8410: aa0003f3     	mov	x19, x0
 2bf8414: 396cfa88     	ldrb	w8, [x20, #0xb3e]
 2bf8418: 370000c8     	tbnz	w8, #0x0, 0x2bf8430 <__start_il2cpp+0x12fe1c>
 2bf841c: b001b800     	adrp	x0, 0x62f9000
 2bf8420: f9474800     	ldr	x0, [x0, #0xe90]
 2bf8424: 97f77a6f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf8428: 52800028     	mov	w8, #0x1                // =1
 2bf842c: 392cfa88     	strb	w8, [x20, #0xb3e]
 2bf8430: aa1303e0     	mov	x0, x19
 2bf8434: 97ffebd0     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2bf8438: 36000260     	tbz	w0, #0x0, 0x2bf8484 <__start_il2cpp+0x12fe70>
 2bf843c: b001b814     	adrp	x20, 0x62f9000
 2bf8440: f9474a94     	ldr	x20, [x20, #0xe90]
 2bf8444: f9400280     	ldr	x0, [x20]
 2bf8448: b940e408     	ldr	w8, [x0, #0xe4]
 2bf844c: 35000068     	cbnz	w8, 0x2bf8458 <__start_il2cpp+0x12fe44>
 2bf8450: 97f77ac3     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf8454: f9400280     	ldr	x0, [x20]
 2bf8458: f9405c08     	ldr	x8, [x0, #0xb8]
 2bf845c: f9401d08     	ldr	x8, [x8, #0x38]
 2bf8460: b4000188     	cbz	x8, 0x2bf8490 <__start_il2cpp+0x12fe7c>
 2bf8464: aa1303e1     	mov	x1, x19
 2bf8468: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf846c: f9402100     	ldr	x0, [x8, #0x40]
 2bf8470: f9401503     	ldr	x3, [x8, #0x28]
 2bf8474: aa1f03e2     	mov	x2, xzr
 2bf8478: f9400d04     	ldr	x4, [x8, #0x18]
 2bf847c: f84207fe     	ldr	x30, [sp], #0x20
 2bf8480: d61f0080     	br	x4
 2bf8484: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf8488: f84207fe     	ldr	x30, [sp], #0x20
 2bf848c: d65f03c0     	ret
 2bf8490: 97f77afe     	bl	0x29d7088 <mono_class_get_checked+0x970>
