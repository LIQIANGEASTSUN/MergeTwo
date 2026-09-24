
# MergeItemProducer :: System.Int32 get_dropPlaceDegree()
# VA 0x2c0e08c .. 0x2c0e094 (next mapped method entry)
 2c0e08c: 52800140     	mov	w0, #0xa                // =10
 2c0e090: d65f03c0     	ret

# MergeItemProducer :: System.Boolean OnProducerItemMerged(BaseItem item)
# VA 0x2c0e094 .. 0x2c0e5ec (next mapped method entry)
 2c0e094: d10183ff     	sub	sp, sp, #0x60
 2c0e098: f9000bfe     	str	x30, [sp, #0x10]
 2c0e09c: a90267fa     	stp	x26, x25, [sp, #0x20]
 2c0e0a0: a9035ff8     	stp	x24, x23, [sp, #0x30]
 2c0e0a4: a90457f6     	stp	x22, x21, [sp, #0x40]
 2c0e0a8: a9054ff4     	stp	x20, x19, [sp, #0x50]
 2c0e0ac: 9001d835     	adrp	x21, 0x6712000
 2c0e0b0: aa0103f4     	mov	x20, x1
 2c0e0b4: aa0003f3     	mov	x19, x0
 2c0e0b8: 396fb6a8     	ldrb	w8, [x21, #0xbed]
 2c0e0bc: 370002a8     	tbnz	w8, #0x0, 0x2c0e110 <__start_il2cpp+0x145afc>
 2c0e0c0: f001b740     	adrp	x0, 0x62f9000
 2c0e0c4: f9476c00     	ldr	x0, [x0, #0xed8]
 2c0e0c8: 97f72346     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0e0cc: b001b720     	adrp	x0, 0x62f3000
 2c0e0d0: f9479000     	ldr	x0, [x0, #0xf20]
 2c0e0d4: 97f72343     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0e0d8: f001b740     	adrp	x0, 0x62f9000
 2c0e0dc: f9474800     	ldr	x0, [x0, #0xe90]
 2c0e0e0: 97f72340     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0e0e4: d001b700     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0e0e8: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0e0ec: 97f7233d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0e0f0: 9001b760     	adrp	x0, 0x62fa000
 2c0e0f4: f9406c00     	ldr	x0, [x0, #0xd8]
 2c0e0f8: 97f7233a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0e0fc: 9001b760     	adrp	x0, 0x62fa000
 2c0e100: f941e000     	ldr	x0, [x0, #0x3c0]
 2c0e104: 97f72337     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0e108: 52800028     	mov	w8, #0x1                // =1
 2c0e10c: 392fb6a8     	strb	w8, [x21, #0xbed]
 2c0e110: f9402268     	ldr	x8, [x19, #0x40]
 2c0e114: a9007fff     	stp	xzr, xzr, [sp]
 2c0e118: f9000fff     	str	xzr, [sp, #0x18]
 2c0e11c: b4002668     	cbz	x8, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e120: 3940d519     	ldrb	w25, [x8, #0x35]
 2c0e124: 34002519     	cbz	w25, 0x2c0e5c4 <__start_il2cpp+0x145fb0>
 2c0e128: d001b709     	adrp	x9, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0e12c: f9478d29     	ldr	x9, [x9, #0xf18]
 2c0e130: f9401d15     	ldr	x21, [x8, #0x38]
 2c0e134: f9400120     	ldr	x0, [x9]
 2c0e138: b940e409     	ldr	w9, [x0, #0xe4]
 2c0e13c: 35000049     	cbnz	w9, 0x2c0e144 <__start_il2cpp+0x145b30>
 2c0e140: 97f72387     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0e144: aa1503e0     	mov	x0, x21
 2c0e148: aa1f03e1     	mov	x1, xzr
 2c0e14c: 94bcf13e     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0e150: 36000400     	tbz	w0, #0x0, 0x2c0e1d0 <__start_il2cpp+0x145bbc>
 2c0e154: aa1f03e0     	mov	x0, xzr
 2c0e158: 97fe4bcb     	bl	0x2ba1084 <__start_il2cpp+0xd8a70>
 2c0e15c: b4002460     	cbz	x0, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e160: f9409800     	ldr	x0, [x0, #0x130]
 2c0e164: aa1f03e1     	mov	x1, xzr
 2c0e168: 97fe4bda     	bl	0x2ba10d0 <__start_il2cpp+0xd8abc>
 2c0e16c: f9402268     	ldr	x8, [x19, #0x40]
 2c0e170: b40023c8     	cbz	x8, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e174: f9401d0a     	ldr	x10, [x8, #0x38]
 2c0e178: b400238a     	cbz	x10, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e17c: f9400e75     	ldr	x21, [x19, #0x18]
 2c0e180: b4002355     	cbz	x21, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e184: b001b73a     	adrp	x26, 0x62f3000
 2c0e188: f94002a8     	ldr	x8, [x21]
 2c0e18c: f947935a     	ldr	x26, [x26, #0xf20]
 2c0e190: b9403156     	ldr	w22, [x10, #0x30]
 2c0e194: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0e198: f9400341     	ldr	x1, [x26]
 2c0e19c: b4000129     	cbz	x9, 0x2c0e1c0 <__start_il2cpp+0x145bac>
 2c0e1a0: f940590a     	ldr	x10, [x8, #0xb0]
 2c0e1a4: 9100214a     	add	x10, x10, #0x8
 2c0e1a8: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0e1ac: eb01017f     	cmp	x11, x1
 2c0e1b0: 54000700     	b.eq	0x2c0e290 <__start_il2cpp+0x145c7c>
 2c0e1b4: f1000529     	subs	x9, x9, #0x1
 2c0e1b8: 9100414a     	add	x10, x10, #0x10
 2c0e1bc: 54ffff61     	b.ne	0x2c0e1a8 <__start_il2cpp+0x145b94>
 2c0e1c0: aa1503e0     	mov	x0, x21
 2c0e1c4: 52800022     	mov	w2, #0x1                // =1
 2c0e1c8: 97f80067     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0e1cc: 14000035     	b	0x2c0e2a0 <__start_il2cpp+0x145c8c>
 2c0e1d0: b40020d4     	cbz	x20, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e1d4: f9402e80     	ldr	x0, [x20, #0x58]
 2c0e1d8: b4002080     	cbz	x0, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e1dc: aa1f03e1     	mov	x1, xzr
 2c0e1e0: 52800022     	mov	w2, #0x1                // =1
 2c0e1e4: aa1f03e3     	mov	x3, xzr
 2c0e1e8: 97fe45c9     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2c0e1ec: f9403661     	ldr	x1, [x19, #0x68]
 2c0e1f0: f9406674     	ldr	x20, [x19, #0xc8]
 2c0e1f4: a9007fff     	stp	xzr, xzr, [sp]
 2c0e1f8: b4001f81     	cbz	x1, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e1fc: f9402828     	ldr	x8, [x1, #0x50]
 2c0e200: b4001f48     	cbz	x8, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e204: b9403108     	ldr	w8, [x8, #0x30]
 2c0e208: b9404429     	ldr	w9, [x1, #0x44]
 2c0e20c: f90007e1     	str	x1, [sp, #0x8]
 2c0e210: 290027e8     	stp	w8, w9, [sp]
 2c0e214: 910003e8     	mov	x8, sp
 2c0e218: 91002100     	add	x0, x8, #0x8
 2c0e21c: 97f722dc     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0e220: b4001e54     	cbz	x20, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e224: 9001b768     	adrp	x8, 0x62fa000
 2c0e228: aa1403e0     	mov	x0, x20
 2c0e22c: f941e108     	ldr	x8, [x8, #0x3c0]
 2c0e230: a9400be1     	ldp	x1, x2, [sp]
 2c0e234: f9400103     	ldr	x3, [x8]
 2c0e238: 94285516     	bl	0x3623690 <__start_il2cpp+0xb5b07c>
 2c0e23c: f9400e74     	ldr	x20, [x19, #0x18]
 2c0e240: b4001d54     	cbz	x20, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e244: b001b72a     	adrp	x10, 0x62f3000
 2c0e248: f9400288     	ldr	x8, [x20]
 2c0e24c: f947914a     	ldr	x10, [x10, #0xf20]
 2c0e250: f9403675     	ldr	x21, [x19, #0x68]
 2c0e254: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0e258: f9400141     	ldr	x1, [x10]
 2c0e25c: b4000129     	cbz	x9, 0x2c0e280 <__start_il2cpp+0x145c6c>
 2c0e260: f940590a     	ldr	x10, [x8, #0xb0]
 2c0e264: 9100214a     	add	x10, x10, #0x8
 2c0e268: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0e26c: eb01017f     	cmp	x11, x1
 2c0e270: 54000ba0     	b.eq	0x2c0e3e4 <__start_il2cpp+0x145dd0>
 2c0e274: f1000529     	subs	x9, x9, #0x1
 2c0e278: 9100414a     	add	x10, x10, #0x10
 2c0e27c: 54ffff61     	b.ne	0x2c0e268 <__start_il2cpp+0x145c54>
 2c0e280: aa1403e0     	mov	x0, x20
 2c0e284: 52800062     	mov	w2, #0x3                // =3
 2c0e288: 97f80037     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0e28c: 1400005a     	b	0x2c0e3f4 <__start_il2cpp+0x145de0>
 2c0e290: b9400149     	ldr	w9, [x10]
 2c0e294: 11000529     	add	w9, w9, #0x1
 2c0e298: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0e29c: 9104e100     	add	x0, x8, #0x138
 2c0e2a0: a9400808     	ldp	x8, x2, [x0]
 2c0e2a4: aa1503e0     	mov	x0, x21
 2c0e2a8: 2a1603e1     	mov	w1, w22
 2c0e2ac: d63f0100     	blr	x8
 2c0e2b0: f9402268     	ldr	x8, [x19, #0x40]
 2c0e2b4: b40019a8     	cbz	x8, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e2b8: aa0003f5     	mov	x21, x0
 2c0e2bc: b4001960     	cbz	x0, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e2c0: f94002a9     	ldr	x9, [x21]
 2c0e2c4: b9404102     	ldr	w2, [x8, #0x40]
 2c0e2c8: aa1503e0     	mov	x0, x21
 2c0e2cc: 2a1f03e1     	mov	w1, wzr
 2c0e2d0: a9578d28     	ldp	x8, x3, [x9, #0x178]
 2c0e2d4: d63f0100     	blr	x8
 2c0e2d8: aa1503e0     	mov	x0, x21
 2c0e2dc: 52800021     	mov	w1, #0x1                // =1
 2c0e2e0: aa1f03e2     	mov	x2, xzr
 2c0e2e4: aa1f03e3     	mov	x3, xzr
 2c0e2e8: 52800037     	mov	w23, #0x1               // =1
 2c0e2ec: 97ff977a     	bl	0x2bf40d4 <__start_il2cpp+0x12bac0>
 2c0e2f0: aa1503e0     	mov	x0, x21
 2c0e2f4: aa1f03e1     	mov	x1, xzr
 2c0e2f8: 94bcc599     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0e2fc: 9001d838     	adrp	x24, 0x6712000
 2c0e300: aa0003f6     	mov	x22, x0
 2c0e304: 39476708     	ldrb	w8, [x24, #0x1d9]
 2c0e308: 350000a8     	cbnz	w8, 0x2c0e31c <__start_il2cpp+0x145d08>
 2c0e30c: f001b700     	adrp	x0, 0x62f1000
 2c0e310: f940dc00     	ldr	x0, [x0, #0x1b8]
 2c0e314: 97f722b3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0e318: 39076717     	strb	w23, [x24, #0x1d9]
 2c0e31c: b4001676     	cbz	x22, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e320: f001b708     	adrp	x8, 0x62f1000
 2c0e324: aa1603e0     	mov	x0, x22
 2c0e328: aa1f03e1     	mov	x1, xzr
 2c0e32c: f940dd08     	ldr	x8, [x8, #0x1b8]
 2c0e330: f9400108     	ldr	x8, [x8]
 2c0e334: f9405d08     	ldr	x8, [x8, #0xb8]
 2c0e338: 2d408901     	ldp	s1, s2, [x8, #0x4]
 2c0e33c: bd400100     	ldr	s0, [x8]
 2c0e340: 94bd1b01     	bl	0x5b54f44 <__start_il2cpp+0x308c930>
 2c0e344: f001b756     	adrp	x22, 0x62f9000
 2c0e348: f9474ad6     	ldr	x22, [x22, #0xe90]
 2c0e34c: f94002c0     	ldr	x0, [x22]
 2c0e350: b940e408     	ldr	w8, [x0, #0xe4]
 2c0e354: 35000068     	cbnz	w8, 0x2c0e360 <__start_il2cpp+0x145d4c>
 2c0e358: 97f72301     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0e35c: f94002c0     	ldr	x0, [x22]
 2c0e360: f9405c08     	ldr	x8, [x0, #0xb8]
 2c0e364: f9400908     	ldr	x8, [x8, #0x10]
 2c0e368: b4001408     	cbz	x8, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e36c: f9400d09     	ldr	x9, [x8, #0x18]
 2c0e370: f9402100     	ldr	x0, [x8, #0x40]
 2c0e374: aa1503e1     	mov	x1, x21
 2c0e378: f9401503     	ldr	x3, [x8, #0x28]
 2c0e37c: aa1f03e2     	mov	x2, xzr
 2c0e380: d63f0120     	blr	x9
 2c0e384: f9402aaa     	ldr	x10, [x21, #0x50]
 2c0e388: b400130a     	cbz	x10, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e38c: f940226b     	ldr	x11, [x19, #0x40]
 2c0e390: b40012cb     	cbz	x11, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e394: f9400e76     	ldr	x22, [x19, #0x18]
 2c0e398: b4001296     	cbz	x22, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e39c: f94002c8     	ldr	x8, [x22]
 2c0e3a0: b9403157     	ldr	w23, [x10, #0x30]
 2c0e3a4: b9404178     	ldr	w24, [x11, #0x40]
 2c0e3a8: f9400341     	ldr	x1, [x26]
 2c0e3ac: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0e3b0: b4000129     	cbz	x9, 0x2c0e3d4 <__start_il2cpp+0x145dc0>
 2c0e3b4: f940590a     	ldr	x10, [x8, #0xb0]
 2c0e3b8: 9100214a     	add	x10, x10, #0x8
 2c0e3bc: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0e3c0: eb01017f     	cmp	x11, x1
 2c0e3c4: 540005c0     	b.eq	0x2c0e47c <__start_il2cpp+0x145e68>
 2c0e3c8: f1000529     	subs	x9, x9, #0x1
 2c0e3cc: 9100414a     	add	x10, x10, #0x10
 2c0e3d0: 54ffff61     	b.ne	0x2c0e3bc <__start_il2cpp+0x145da8>
 2c0e3d4: aa1603e0     	mov	x0, x22
 2c0e3d8: 52800102     	mov	w2, #0x8                // =8
 2c0e3dc: 97f7ffe2     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0e3e0: 1400002b     	b	0x2c0e48c <__start_il2cpp+0x145e78>
 2c0e3e4: b9400149     	ldr	w9, [x10]
 2c0e3e8: 11000d29     	add	w9, w9, #0x3
 2c0e3ec: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0e3f0: 9104e100     	add	x0, x8, #0x138
 2c0e3f4: a9400c08     	ldp	x8, x3, [x0]
 2c0e3f8: aa1403e0     	mov	x0, x20
 2c0e3fc: aa1503e1     	mov	x1, x21
 2c0e400: 52800022     	mov	w2, #0x1                // =1
 2c0e404: d63f0100     	blr	x8
 2c0e408: f9401273     	ldr	x19, [x19, #0x20]
 2c0e40c: b4000ef3     	cbz	x19, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e410: f001b74a     	adrp	x10, 0x62f9000
 2c0e414: f9400268     	ldr	x8, [x19]
 2c0e418: f9476d4a     	ldr	x10, [x10, #0xed8]
 2c0e41c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0e420: f9400141     	ldr	x1, [x10]
 2c0e424: b4000129     	cbz	x9, 0x2c0e448 <__start_il2cpp+0x145e34>
 2c0e428: f940590a     	ldr	x10, [x8, #0xb0]
 2c0e42c: 9100214a     	add	x10, x10, #0x8
 2c0e430: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0e434: eb01017f     	cmp	x11, x1
 2c0e438: 54000100     	b.eq	0x2c0e458 <__start_il2cpp+0x145e44>
 2c0e43c: f1000529     	subs	x9, x9, #0x1
 2c0e440: 9100414a     	add	x10, x10, #0x10
 2c0e444: 54ffff61     	b.ne	0x2c0e430 <__start_il2cpp+0x145e1c>
 2c0e448: aa1303e0     	mov	x0, x19
 2c0e44c: 52800042     	mov	w2, #0x2                // =2
 2c0e450: 97f7ffc5     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0e454: 14000005     	b	0x2c0e468 <__start_il2cpp+0x145e54>
 2c0e458: b9400149     	ldr	w9, [x10]
 2c0e45c: 11000929     	add	w9, w9, #0x2
 2c0e460: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0e464: 9104e100     	add	x0, x8, #0x138
 2c0e468: a9400808     	ldp	x8, x2, [x0]
 2c0e46c: aa1303e0     	mov	x0, x19
 2c0e470: aa1f03e1     	mov	x1, xzr
 2c0e474: d63f0100     	blr	x8
 2c0e478: 14000053     	b	0x2c0e5c4 <__start_il2cpp+0x145fb0>
 2c0e47c: b9400149     	ldr	w9, [x10]
 2c0e480: 11002129     	add	w9, w9, #0x8
 2c0e484: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0e488: 9104e100     	add	x0, x8, #0x138
 2c0e48c: a9400c08     	ldp	x8, x3, [x0]
 2c0e490: aa1603e0     	mov	x0, x22
 2c0e494: 2a1703e1     	mov	w1, w23
 2c0e498: 2a1803e2     	mov	w2, w24
 2c0e49c: d63f0100     	blr	x8
 2c0e4a0: b4000a54     	cbz	x20, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e4a4: f9402e80     	ldr	x0, [x20, #0x58]
 2c0e4a8: b4000a00     	cbz	x0, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e4ac: aa1503e1     	mov	x1, x21
 2c0e4b0: 52800022     	mov	w2, #0x1                // =1
 2c0e4b4: aa1f03e3     	mov	x3, xzr
 2c0e4b8: 97fe4515     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2c0e4bc: f9402a88     	ldr	x8, [x20, #0x50]
 2c0e4c0: f9406676     	ldr	x22, [x19, #0xc8]
 2c0e4c4: a9007fff     	stp	xzr, xzr, [sp]
 2c0e4c8: b4000908     	cbz	x8, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e4cc: b9403108     	ldr	w8, [x8, #0x30]
 2c0e4d0: b9404689     	ldr	w9, [x20, #0x44]
 2c0e4d4: f9403661     	ldr	x1, [x19, #0x68]
 2c0e4d8: 290027e8     	stp	w8, w9, [sp]
 2c0e4dc: 910003e8     	mov	x8, sp
 2c0e4e0: 91002100     	add	x0, x8, #0x8
 2c0e4e4: f90007e1     	str	x1, [sp, #0x8]
 2c0e4e8: 97f72229     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0e4ec: b40007f6     	cbz	x22, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e4f0: 9001b768     	adrp	x8, 0x62fa000
 2c0e4f4: aa1603e0     	mov	x0, x22
 2c0e4f8: f941e108     	ldr	x8, [x8, #0x3c0]
 2c0e4fc: a9400be1     	ldp	x1, x2, [sp]
 2c0e500: f9400103     	ldr	x3, [x8]
 2c0e504: 94285463     	bl	0x3623690 <__start_il2cpp+0xb5b07c>
 2c0e508: f9406674     	ldr	x20, [x19, #0xc8]
 2c0e50c: 910063e0     	add	x0, sp, #0x18
 2c0e510: aa1503e1     	mov	x1, x21
 2c0e514: f9000ff5     	str	x21, [sp, #0x18]
 2c0e518: 97f7221d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0e51c: b4000674     	cbz	x20, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e520: 9001b768     	adrp	x8, 0x62fa000
 2c0e524: aa1403e0     	mov	x0, x20
 2c0e528: f9406d08     	ldr	x8, [x8, #0xd8]
 2c0e52c: f9400fe1     	ldr	x1, [sp, #0x18]
 2c0e530: f9400102     	ldr	x2, [x8]
 2c0e534: 94285378     	bl	0x3623314 <__start_il2cpp+0xb5ad00>
 2c0e538: f9400e74     	ldr	x20, [x19, #0x18]
 2c0e53c: b4000574     	cbz	x20, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e540: f9400288     	ldr	x8, [x20]
 2c0e544: f9403673     	ldr	x19, [x19, #0x68]
 2c0e548: f9400341     	ldr	x1, [x26]
 2c0e54c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0e550: b4000129     	cbz	x9, 0x2c0e574 <__start_il2cpp+0x145f60>
 2c0e554: f940590a     	ldr	x10, [x8, #0xb0]
 2c0e558: 9100214a     	add	x10, x10, #0x8
 2c0e55c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0e560: eb01017f     	cmp	x11, x1
 2c0e564: 54000100     	b.eq	0x2c0e584 <__start_il2cpp+0x145f70>
 2c0e568: f1000529     	subs	x9, x9, #0x1
 2c0e56c: 9100414a     	add	x10, x10, #0x10
 2c0e570: 54ffff61     	b.ne	0x2c0e55c <__start_il2cpp+0x145f48>
 2c0e574: aa1403e0     	mov	x0, x20
 2c0e578: 52800062     	mov	w2, #0x3                // =3
 2c0e57c: 97f7ff7a     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0e580: 14000005     	b	0x2c0e594 <__start_il2cpp+0x145f80>
 2c0e584: b9400149     	ldr	w9, [x10]
 2c0e588: 11000d29     	add	w9, w9, #0x3
 2c0e58c: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0e590: 9104e100     	add	x0, x8, #0x138
 2c0e594: a9400c08     	ldp	x8, x3, [x0]
 2c0e598: aa1403e0     	mov	x0, x20
 2c0e59c: aa1303e1     	mov	x1, x19
 2c0e5a0: 2a1f03e2     	mov	w2, wzr
 2c0e5a4: d63f0100     	blr	x8
 2c0e5a8: aa1503e0     	mov	x0, x21
 2c0e5ac: aa1f03e1     	mov	x1, xzr
 2c0e5b0: 94bcc51f     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2c0e5b4: b40001a0     	cbz	x0, 0x2c0e5e8 <__start_il2cpp+0x145fd4>
 2c0e5b8: 52800021     	mov	w1, #0x1                // =1
 2c0e5bc: aa1f03e2     	mov	x2, xzr
 2c0e5c0: 94bcd76e     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2c0e5c4: 7100033f     	cmp	w25, #0x0
 2c0e5c8: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 2c0e5cc: a94457f6     	ldp	x22, x21, [sp, #0x40]
 2c0e5d0: 1a9f07e0     	cset	w0, ne
 2c0e5d4: a9435ff8     	ldp	x24, x23, [sp, #0x30]
 2c0e5d8: f9400bfe     	ldr	x30, [sp, #0x10]
 2c0e5dc: a94267fa     	ldp	x26, x25, [sp, #0x20]
 2c0e5e0: 910183ff     	add	sp, sp, #0x60
 2c0e5e4: d65f03c0     	ret
 2c0e5e8: 97f722a8     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeItemProducer :: System.Void .ctor()
# VA 0x2c0e5ec .. 0x2c0e5f4 (next mapped method entry)
 2c0e5ec: aa1f03e1     	mov	x1, xzr
 2c0e5f0: 14950556     	b	0x514fb48 <__start_il2cpp+0x2687534>
