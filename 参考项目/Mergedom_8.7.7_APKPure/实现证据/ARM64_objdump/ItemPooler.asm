
# ItemPooler :: System.Void Awake()
# VA 0x2c07114 .. 0x2c07228 (next mapped method entry)
 2c07114: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c07118: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c0711c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c07120: f001d854     	adrp	x20, 0x6712000
 2c07124: b001b7b6     	adrp	x22, 0x62fc000
 2c07128: b001b7b5     	adrp	x21, 0x62fc000
 2c0712c: 396eda88     	ldrb	w8, [x20, #0xbb6]
 2c07130: f94786d6     	ldr	x22, [x22, #0xf08]
 2c07134: f9478ab5     	ldr	x21, [x21, #0xf10]
 2c07138: aa0003f3     	mov	x19, x0
 2c0713c: 370002a8     	tbnz	w8, #0x0, 0x2c07190 <__start_il2cpp+0x13eb7c>
 2c07140: b001b7a0     	adrp	x0, 0x62fc000
 2c07144: f9478400     	ldr	x0, [x0, #0xf08]
 2c07148: 97f73f26     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0714c: 9001b780     	adrp	x0, 0x62f7000
 2c07150: f9455400     	ldr	x0, [x0, #0xaa8]
 2c07154: 97f73f23     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07158: b001b7a0     	adrp	x0, 0x62fc000
 2c0715c: f9478800     	ldr	x0, [x0, #0xf10]
 2c07160: 97f73f20     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07164: b001b7a0     	adrp	x0, 0x62fc000
 2c07168: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0716c: 97f73f1d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07170: b001b7a0     	adrp	x0, 0x62fc000
 2c07174: f9479000     	ldr	x0, [x0, #0xf20]
 2c07178: 97f73f1a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0717c: 9001b780     	adrp	x0, 0x62f7000
 2c07180: f945a400     	ldr	x0, [x0, #0xb48]
 2c07184: 97f73f17     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07188: 52800028     	mov	w8, #0x1                // =1
 2c0718c: 392eda88     	strb	w8, [x20, #0xbb6]
 2c07190: f94002c0     	ldr	x0, [x22]
 2c07194: f9401274     	ldr	x20, [x19, #0x20]
 2c07198: 97f73fb8     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0719c: f94002a2     	ldr	x2, [x21]
 2c071a0: aa1303e1     	mov	x1, x19
 2c071a4: aa1f03e3     	mov	x3, xzr
 2c071a8: aa0003f5     	mov	x21, x0
 2c071ac: 943c30d3     	bl	0x3b134f8 <__start_il2cpp+0x104aee4>
 2c071b0: b40003b4     	cbz	x20, 0x2c07224 <__start_il2cpp+0x13ec10>
 2c071b4: b001b7a8     	adrp	x8, 0x62fc000
 2c071b8: 9001b796     	adrp	x22, 0x62f7000
 2c071bc: b001b7b7     	adrp	x23, 0x62fc000
 2c071c0: f9479108     	ldr	x8, [x8, #0xf20]
 2c071c4: f94556d6     	ldr	x22, [x22, #0xaa8]
 2c071c8: f9478ef7     	ldr	x23, [x23, #0xf18]
 2c071cc: aa1403e0     	mov	x0, x20
 2c071d0: aa1503e1     	mov	x1, x21
 2c071d4: f9400102     	ldr	x2, [x8]
 2c071d8: 9428818b     	bl	0x3627804 <__start_il2cpp+0xb5f1f0>
 2c071dc: f94002c0     	ldr	x0, [x22]
 2c071e0: f9401274     	ldr	x20, [x19, #0x20]
 2c071e4: 97f73fa5     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c071e8: f94002e2     	ldr	x2, [x23]
 2c071ec: aa1303e1     	mov	x1, x19
 2c071f0: aa1f03e3     	mov	x3, xzr
 2c071f4: aa0003f5     	mov	x21, x0
 2c071f8: 943c3a52     	bl	0x3b15b40 <__start_il2cpp+0x104d52c>
 2c071fc: b4000154     	cbz	x20, 0x2c07224 <__start_il2cpp+0x13ec10>
 2c07200: 9001b788     	adrp	x8, 0x62f7000
 2c07204: aa1403e0     	mov	x0, x20
 2c07208: aa1503e1     	mov	x1, x21
 2c0720c: f945a508     	ldr	x8, [x8, #0xb48]
 2c07210: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c07214: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c07218: f9400102     	ldr	x2, [x8]
 2c0721c: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c07220: 14288498     	b	0x3628480 <__start_il2cpp+0xb5fe6c>
 2c07224: 97f73f99     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemPooler :: System.Void Initialize()
# VA 0x2c07228 .. 0x2c072a4 (next mapped method entry)
 2c07228: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c0722c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c07230: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c07234: f001d855     	adrp	x21, 0x6712000
 2c07238: b001b7b6     	adrp	x22, 0x62fc000
 2c0723c: b001b7b4     	adrp	x20, 0x62fc000
 2c07240: 396edea8     	ldrb	w8, [x21, #0xbb7]
 2c07244: f94796d6     	ldr	x22, [x22, #0xf28]
 2c07248: f9479a94     	ldr	x20, [x20, #0xf30]
 2c0724c: aa0003f3     	mov	x19, x0
 2c07250: 37000128     	tbnz	w8, #0x0, 0x2c07274 <__start_il2cpp+0x13ec60>
 2c07254: b001b7a0     	adrp	x0, 0x62fc000
 2c07258: f9479800     	ldr	x0, [x0, #0xf30]
 2c0725c: 97f73ee1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07260: b001b7a0     	adrp	x0, 0x62fc000
 2c07264: f9479400     	ldr	x0, [x0, #0xf28]
 2c07268: 97f73ede     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0726c: 52800028     	mov	w8, #0x1                // =1
 2c07270: 392edea8     	strb	w8, [x21, #0xbb7]
 2c07274: f94002c0     	ldr	x0, [x22]
 2c07278: 97f73f80     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0727c: f9400281     	ldr	x1, [x20]
 2c07280: aa0003f4     	mov	x20, x0
 2c07284: 94750da6     	bl	0x494a91c <__start_il2cpp+0x1e82308>
 2c07288: f8040e74     	str	x20, [x19, #0x40]!
 2c0728c: aa1303e0     	mov	x0, x19
 2c07290: aa1403e1     	mov	x1, x20
 2c07294: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c07298: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0729c: f84307fe     	ldr	x30, [sp], #0x30
 2c072a0: 17f73ebb     	b	0x29d6d8c <mono_class_get_checked+0x674>

# ItemPooler :: BaseItem GetFromCache(ItemData itemData)
# VA 0x2c072a4 .. 0x2c074cc (next mapped method entry)
 2c072a4: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c072a8: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c072ac: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c072b0: f001d855     	adrp	x21, 0x6712000
 2c072b4: aa0103f3     	mov	x19, x1
 2c072b8: aa0003f4     	mov	x20, x0
 2c072bc: 396ee2a8     	ldrb	w8, [x21, #0xbb8]
 2c072c0: 37000368     	tbnz	w8, #0x0, 0x2c0732c <__start_il2cpp+0x13ed18>
 2c072c4: b001b7a0     	adrp	x0, 0x62fc000
 2c072c8: f9479c00     	ldr	x0, [x0, #0xf38]
 2c072cc: 97f73ec5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c072d0: b001b7a0     	adrp	x0, 0x62fc000
 2c072d4: f947a000     	ldr	x0, [x0, #0xf40]
 2c072d8: 97f73ec2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c072dc: b001b7a0     	adrp	x0, 0x62fc000
 2c072e0: f947a400     	ldr	x0, [x0, #0xf48]
 2c072e4: 97f73ebf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c072e8: b001b7a0     	adrp	x0, 0x62fc000
 2c072ec: f947a800     	ldr	x0, [x0, #0xf50]
 2c072f0: 97f73ebc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c072f4: d001b780     	adrp	x0, 0x62f9000
 2c072f8: f9478400     	ldr	x0, [x0, #0xf08]
 2c072fc: 97f73eb9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07300: d001b780     	adrp	x0, 0x62f9000
 2c07304: f9479800     	ldr	x0, [x0, #0xf30]
 2c07308: 97f73eb6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0730c: d001b780     	adrp	x0, 0x62f9000
 2c07310: f947d800     	ldr	x0, [x0, #0xfb0]
 2c07314: 97f73eb3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07318: d001b780     	adrp	x0, 0x62f9000
 2c0731c: f9478000     	ldr	x0, [x0, #0xf00]
 2c07320: 97f73eb0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07324: 52800028     	mov	w8, #0x1                // =1
 2c07328: 392ee2a8     	strb	w8, [x21, #0xbb8]
 2c0732c: f9402280     	ldr	x0, [x20, #0x40]
 2c07330: b4000cc0     	cbz	x0, 0x2c074c8 <__start_il2cpp+0x13eeb4>
 2c07334: b001b7a8     	adrp	x8, 0x62fc000
 2c07338: aa1303e1     	mov	x1, x19
 2c0733c: f947a108     	ldr	x8, [x8, #0xf40]
 2c07340: f9400102     	ldr	x2, [x8]
 2c07344: 94751057     	bl	0x494b4a0 <__start_il2cpp+0x1e82e8c>
 2c07348: 37000260     	tbnz	w0, #0x0, 0x2c07394 <__start_il2cpp+0x13ed80>
 2c0734c: d001b788     	adrp	x8, 0x62f9000
 2c07350: f9478108     	ldr	x8, [x8, #0xf00]
 2c07354: f9402295     	ldr	x21, [x20, #0x40]
 2c07358: f9400100     	ldr	x0, [x8]
 2c0735c: 97f73f47     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c07360: d001b788     	adrp	x8, 0x62f9000
 2c07364: aa0003f6     	mov	x22, x0
 2c07368: f9478508     	ldr	x8, [x8, #0xf08]
 2c0736c: f9400101     	ldr	x1, [x8]
 2c07370: 943c8496     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2c07374: b4000ab5     	cbz	x21, 0x2c074c8 <__start_il2cpp+0x13eeb4>
 2c07378: b001b7a8     	adrp	x8, 0x62fc000
 2c0737c: aa1503e0     	mov	x0, x21
 2c07380: aa1303e1     	mov	x1, x19
 2c07384: f9479d08     	ldr	x8, [x8, #0xf38]
 2c07388: aa1603e2     	mov	x2, x22
 2c0738c: f9400103     	ldr	x3, [x8]
 2c07390: 94750fc7     	bl	0x494b2ac <__start_il2cpp+0x1e82c98>
 2c07394: f9402280     	ldr	x0, [x20, #0x40]
 2c07398: b4000980     	cbz	x0, 0x2c074c8 <__start_il2cpp+0x13eeb4>
 2c0739c: b001b7b5     	adrp	x21, 0x62fc000
 2c073a0: aa1303e1     	mov	x1, x19
 2c073a4: f947a6b5     	ldr	x21, [x21, #0xf48]
 2c073a8: f94002a2     	ldr	x2, [x21]
 2c073ac: 94750fa0     	bl	0x494b22c <__start_il2cpp+0x1e82c18>
 2c073b0: b40008c0     	cbz	x0, 0x2c074c8 <__start_il2cpp+0x13eeb4>
 2c073b4: b9401808     	ldr	w8, [x0, #0x18]
 2c073b8: 35000088     	cbnz	w8, 0x2c073c8 <__start_il2cpp+0x13edb4>
 2c073bc: aa1403e0     	mov	x0, x20
 2c073c0: aa1303e1     	mov	x1, x19
 2c073c4: 94000042     	bl	0x2c074cc <__start_il2cpp+0x13eeb8>
 2c073c8: f9402280     	ldr	x0, [x20, #0x40]
 2c073cc: b40007e0     	cbz	x0, 0x2c074c8 <__start_il2cpp+0x13eeb4>
 2c073d0: f94002a2     	ldr	x2, [x21]
 2c073d4: aa1303e1     	mov	x1, x19
 2c073d8: 94750f95     	bl	0x494b22c <__start_il2cpp+0x1e82c18>
 2c073dc: b4000760     	cbz	x0, 0x2c074c8 <__start_il2cpp+0x13eeb4>
 2c073e0: d001b788     	adrp	x8, 0x62f9000
 2c073e4: 2a1f03e1     	mov	w1, wzr
 2c073e8: f947d908     	ldr	x8, [x8, #0xfb0]
 2c073ec: f9400102     	ldr	x2, [x8]
 2c073f0: 943c85dc     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2c073f4: f9402288     	ldr	x8, [x20, #0x40]
 2c073f8: b4000688     	cbz	x8, 0x2c074c8 <__start_il2cpp+0x13eeb4>
 2c073fc: f94002a2     	ldr	x2, [x21]
 2c07400: aa0003f4     	mov	x20, x0
 2c07404: aa0803e0     	mov	x0, x8
 2c07408: aa1303e1     	mov	x1, x19
 2c0740c: 94750f88     	bl	0x494b22c <__start_il2cpp+0x1e82c18>
 2c07410: b40005c0     	cbz	x0, 0x2c074c8 <__start_il2cpp+0x13eeb4>
 2c07414: b001b7a8     	adrp	x8, 0x62fc000
 2c07418: aa1403e1     	mov	x1, x20
 2c0741c: f947a908     	ldr	x8, [x8, #0xf50]
 2c07420: f9400102     	ldr	x2, [x8]
 2c07424: 943c8bed     	bl	0x3b2a3d8 <__start_il2cpp+0x1061dc4>
 2c07428: b4000514     	cbz	x20, 0x2c074c8 <__start_il2cpp+0x13eeb4>
 2c0742c: aa1403e0     	mov	x0, x20
 2c07430: aa1f03e1     	mov	x1, xzr
 2c07434: 94bce14a     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c07438: f001d855     	adrp	x21, 0x6712000
 2c0743c: aa0003f3     	mov	x19, x0
 2c07440: 394786a8     	ldrb	w8, [x21, #0x1e1]
 2c07444: 350000c8     	cbnz	w8, 0x2c0745c <__start_il2cpp+0x13ee48>
 2c07448: d001b740     	adrp	x0, 0x62f1000
 2c0744c: f940dc00     	ldr	x0, [x0, #0x1b8]
 2c07450: 97f73e64     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07454: 52800028     	mov	w8, #0x1                // =1
 2c07458: 390786a8     	strb	w8, [x21, #0x1e1]
 2c0745c: b4000373     	cbz	x19, 0x2c074c8 <__start_il2cpp+0x13eeb4>
 2c07460: d001b748     	adrp	x8, 0x62f1000
 2c07464: aa1303e0     	mov	x0, x19
 2c07468: aa1f03e1     	mov	x1, xzr
 2c0746c: f940dd08     	ldr	x8, [x8, #0x1b8]
 2c07470: f9400108     	ldr	x8, [x8]
 2c07474: f9405d08     	ldr	x8, [x8, #0xb8]
 2c07478: 2d420901     	ldp	s1, s2, [x8, #0x10]
 2c0747c: bd400d00     	ldr	s0, [x8, #0xc]
 2c07480: 94bd36b1     	bl	0x5b54f44 <__start_il2cpp+0x308c930>
 2c07484: f9400288     	ldr	x8, [x20]
 2c07488: aa1403e0     	mov	x0, x20
 2c0748c: 2a1f03e1     	mov	w1, wzr
 2c07490: a95a8909     	ldp	x9, x2, [x8, #0x1a8]
 2c07494: d63f0120     	blr	x9
 2c07498: aa1403e0     	mov	x0, x20
 2c0749c: aa1f03e1     	mov	x1, xzr
 2c074a0: 94bce163     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2c074a4: b4000120     	cbz	x0, 0x2c074c8 <__start_il2cpp+0x13eeb4>
 2c074a8: 52800021     	mov	w1, #0x1                // =1
 2c074ac: aa1f03e2     	mov	x2, xzr
 2c074b0: 94bcf3b2     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2c074b4: aa1403e0     	mov	x0, x20
 2c074b8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c074bc: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c074c0: f84307fe     	ldr	x30, [sp], #0x30
 2c074c4: d65f03c0     	ret
 2c074c8: 97f73ef0     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemPooler :: System.Void PopulateItem(ItemData itemData)
# VA 0x2c074cc .. 0x2c07704 (next mapped method entry)
 2c074cc: a9bb6ffe     	stp	x30, x27, [sp, #-0x50]!
 2c074d0: a90167fa     	stp	x26, x25, [sp, #0x10]
 2c074d4: a9025ff8     	stp	x24, x23, [sp, #0x20]
 2c074d8: a90357f6     	stp	x22, x21, [sp, #0x30]
 2c074dc: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2c074e0: f001d855     	adrp	x21, 0x6712000
 2c074e4: aa0103f3     	mov	x19, x1
 2c074e8: aa0003f4     	mov	x20, x0
 2c074ec: 396ee6a8     	ldrb	w8, [x21, #0xbb9]
 2c074f0: 37000368     	tbnz	w8, #0x0, 0x2c0755c <__start_il2cpp+0x13ef48>
 2c074f4: b001b7a0     	adrp	x0, 0x62fc000
 2c074f8: f947ac00     	ldr	x0, [x0, #0xf58]
 2c074fc: 97f73e39     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07500: b001b7a0     	adrp	x0, 0x62fc000
 2c07504: f947a000     	ldr	x0, [x0, #0xf40]
 2c07508: 97f73e36     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0750c: b001b7a0     	adrp	x0, 0x62fc000
 2c07510: f947a400     	ldr	x0, [x0, #0xf48]
 2c07514: 97f73e33     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07518: b001b7a0     	adrp	x0, 0x62fc000
 2c0751c: f947b000     	ldr	x0, [x0, #0xf60]
 2c07520: 97f73e30     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07524: b001b7a0     	adrp	x0, 0x62fc000
 2c07528: f947b400     	ldr	x0, [x0, #0xf68]
 2c0752c: 97f73e2d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07530: d001b780     	adrp	x0, 0x62f9000
 2c07534: f9477400     	ldr	x0, [x0, #0xee8]
 2c07538: 97f73e2a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0753c: d001b780     	adrp	x0, 0x62f9000
 2c07540: f9478400     	ldr	x0, [x0, #0xf08]
 2c07544: 97f73e27     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07548: d001b780     	adrp	x0, 0x62f9000
 2c0754c: f9478000     	ldr	x0, [x0, #0xf00]
 2c07550: 97f73e24     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07554: 52800028     	mov	w8, #0x1                // =1
 2c07558: 392ee6a8     	strb	w8, [x21, #0xbb9]
 2c0755c: f9402280     	ldr	x0, [x20, #0x40]
 2c07560: b4000d00     	cbz	x0, 0x2c07700 <__start_il2cpp+0x13f0ec>
 2c07564: b001b7a8     	adrp	x8, 0x62fc000
 2c07568: aa1303e1     	mov	x1, x19
 2c0756c: f947a108     	ldr	x8, [x8, #0xf40]
 2c07570: f9400102     	ldr	x2, [x8]
 2c07574: 94750fcb     	bl	0x494b4a0 <__start_il2cpp+0x1e82e8c>
 2c07578: 36000260     	tbz	w0, #0x0, 0x2c075c4 <__start_il2cpp+0x13efb0>
 2c0757c: d001b788     	adrp	x8, 0x62f9000
 2c07580: f9478108     	ldr	x8, [x8, #0xf00]
 2c07584: f9402295     	ldr	x21, [x20, #0x40]
 2c07588: f9400100     	ldr	x0, [x8]
 2c0758c: 97f73ebb     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c07590: d001b788     	adrp	x8, 0x62f9000
 2c07594: aa0003f6     	mov	x22, x0
 2c07598: f9478508     	ldr	x8, [x8, #0xf08]
 2c0759c: f9400101     	ldr	x1, [x8]
 2c075a0: 943c840a     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2c075a4: b4000af5     	cbz	x21, 0x2c07700 <__start_il2cpp+0x13f0ec>
 2c075a8: b001b7a8     	adrp	x8, 0x62fc000
 2c075ac: aa1503e0     	mov	x0, x21
 2c075b0: aa1303e1     	mov	x1, x19
 2c075b4: f947b508     	ldr	x8, [x8, #0xf68]
 2c075b8: aa1603e2     	mov	x2, x22
 2c075bc: f9400103     	ldr	x3, [x8]
 2c075c0: 94750f36     	bl	0x494b298 <__start_il2cpp+0x1e82c84>
 2c075c4: b001b7b7     	adrp	x23, 0x62fc000
 2c075c8: b001b7b8     	adrp	x24, 0x62fc000
 2c075cc: b001b7b9     	adrp	x25, 0x62fc000
 2c075d0: d001b79a     	adrp	x26, 0x62f9000
 2c075d4: f947b2f7     	ldr	x23, [x23, #0xf60]
 2c075d8: f947af18     	ldr	x24, [x24, #0xf58]
 2c075dc: f947a739     	ldr	x25, [x25, #0xf48]
 2c075e0: f947775a     	ldr	x26, [x26, #0xee8]
 2c075e4: 5280009b     	mov	w27, #0x4               // =4
 2c075e8: f9401e88     	ldr	x8, [x20, #0x38]
 2c075ec: b40008a8     	cbz	x8, 0x2c07700 <__start_il2cpp+0x13f0ec>
 2c075f0: f9401d00     	ldr	x0, [x8, #0x38]
 2c075f4: b4000860     	cbz	x0, 0x2c07700 <__start_il2cpp+0x13f0ec>
 2c075f8: f94002e2     	ldr	x2, [x23]
 2c075fc: f9401695     	ldr	x21, [x20, #0x28]
 2c07600: aa1303e1     	mov	x1, x19
 2c07604: 94750f0a     	bl	0x494b22c <__start_il2cpp+0x1e82c18>
 2c07608: b40007d5     	cbz	x21, 0x2c07700 <__start_il2cpp+0x13f0ec>
 2c0760c: f9400302     	ldr	x2, [x24]
 2c07610: aa0003e1     	mov	x1, x0
 2c07614: aa1503e0     	mov	x0, x21
 2c07618: 941f50b8     	bl	0x33db8f8 <__start_il2cpp+0x9132e4>
 2c0761c: b4000720     	cbz	x0, 0x2c07700 <__start_il2cpp+0x13f0ec>
 2c07620: aa1f03e1     	mov	x1, xzr
 2c07624: aa0003f5     	mov	x21, x0
 2c07628: 94bce0cd     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0762c: aa0003f6     	mov	x22, x0
 2c07630: aa1403e0     	mov	x0, x20
 2c07634: aa1f03e1     	mov	x1, xzr
 2c07638: 94bce0c9     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0763c: b4000636     	cbz	x22, 0x2c07700 <__start_il2cpp+0x13f0ec>
 2c07640: aa0003e1     	mov	x1, x0
 2c07644: aa1603e0     	mov	x0, x22
 2c07648: aa1f03e2     	mov	x2, xzr
 2c0764c: 94bd3674     	bl	0x5b5501c <__start_il2cpp+0x308ca08>
 2c07650: aa1503e0     	mov	x0, x21
 2c07654: aa1f03e1     	mov	x1, xzr
 2c07658: 94bce0f5     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2c0765c: b4000520     	cbz	x0, 0x2c07700 <__start_il2cpp+0x13f0ec>
 2c07660: 2a1f03e1     	mov	w1, wzr
 2c07664: aa1f03e2     	mov	x2, xzr
 2c07668: 94bcf344     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2c0766c: f9402280     	ldr	x0, [x20, #0x40]
 2c07670: b4000480     	cbz	x0, 0x2c07700 <__start_il2cpp+0x13f0ec>
 2c07674: f9400322     	ldr	x2, [x25]
 2c07678: aa1303e1     	mov	x1, x19
 2c0767c: 94750eec     	bl	0x494b22c <__start_il2cpp+0x1e82c18>
 2c07680: b4000400     	cbz	x0, 0x2c07700 <__start_il2cpp+0x13f0ec>
 2c07684: b9401c0a     	ldr	w10, [x0, #0x1c]
 2c07688: f9400808     	ldr	x8, [x0, #0x10]
 2c0768c: f9400349     	ldr	x9, [x26]
 2c07690: 1100054a     	add	w10, w10, #0x1
 2c07694: b9001c0a     	str	w10, [x0, #0x1c]
 2c07698: b4000348     	cbz	x8, 0x2c07700 <__start_il2cpp+0x13f0ec>
 2c0769c: b980180a     	ldrsw	x10, [x0, #0x18]
 2c076a0: b940190b     	ldr	w11, [x8, #0x18]
 2c076a4: 6b0b015f     	cmp	w10, w11
 2c076a8: 54000122     	b.hs	0x2c076cc <__start_il2cpp+0x13f0b8>
 2c076ac: 8b0a0d08     	add	x8, x8, x10, lsl #3
 2c076b0: 11000549     	add	w9, w10, #0x1
 2c076b4: aa1503e1     	mov	x1, x21
 2c076b8: b9001809     	str	w9, [x0, #0x18]
 2c076bc: f8020d15     	str	x21, [x8, #0x20]!
 2c076c0: aa0803e0     	mov	x0, x8
 2c076c4: 97f73db2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c076c8: 14000006     	b	0x2c076e0 <__start_il2cpp+0x13f0cc>
 2c076cc: f9401128     	ldr	x8, [x9, #0x20]
 2c076d0: aa1503e1     	mov	x1, x21
 2c076d4: f9406108     	ldr	x8, [x8, #0xc0]
 2c076d8: f9403902     	ldr	x2, [x8, #0x70]
 2c076dc: 943c85d5     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2c076e0: 7100077b     	subs	w27, w27, #0x1
 2c076e4: 54fff821     	b.ne	0x2c075e8 <__start_il2cpp+0x13efd4>
 2c076e8: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2c076ec: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2c076f0: a9425ff8     	ldp	x24, x23, [sp, #0x20]
 2c076f4: a94167fa     	ldp	x26, x25, [sp, #0x10]
 2c076f8: a8c56ffe     	ldp	x30, x27, [sp], #0x50
 2c076fc: d65f03c0     	ret
 2c07700: 97f73e62     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemPooler :: BaseItem GetItem(System.Int32 itemId)
# VA 0x2c07704 .. 0x2c07724 (next mapped method entry)
 2c07704: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c07708: 52800022     	mov	w2, #0x1                // =1
 2c0770c: aa0003f3     	mov	x19, x0
 2c07710: 94000005     	bl	0x2c07724 <__start_il2cpp+0x13f110>
 2c07714: aa0003e1     	mov	x1, x0
 2c07718: aa1303e0     	mov	x0, x19
 2c0771c: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c07720: 17fffee1     	b	0x2c072a4 <__start_il2cpp+0x13ec90>

# ItemPooler :: ItemData _GetItemData(System.Int32 itemId, System.Boolean forceGetTutorialItemData)
# VA 0x2c07724 .. 0x2c07928 (next mapped method entry)
 2c07724: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c07728: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c0772c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c07730: f001d856     	adrp	x22, 0x6712000
 2c07734: 2a0203f5     	mov	w21, w2
 2c07738: 2a0103f3     	mov	w19, w1
 2c0773c: 396eeec8     	ldrb	w8, [x22, #0xbbb]
 2c07740: aa0003f4     	mov	x20, x0
 2c07744: 37000308     	tbnz	w8, #0x0, 0x2c077a4 <__start_il2cpp+0x13f190>
 2c07748: b001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0774c: f946e800     	ldr	x0, [x0, #0xdd0]
 2c07750: 97f73da4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07754: f001b760     	adrp	x0, 0x62f6000
 2c07758: f9404000     	ldr	x0, [x0, #0x80]
 2c0775c: 97f73da1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07760: b001b7a0     	adrp	x0, 0x62fc000
 2c07764: f947b800     	ldr	x0, [x0, #0xf70]
 2c07768: 97f73d9e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0776c: f001b760     	adrp	x0, 0x62f6000
 2c07770: f9404400     	ldr	x0, [x0, #0x88]
 2c07774: 97f73d9b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07778: b001b7a0     	adrp	x0, 0x62fc000
 2c0777c: f947bc00     	ldr	x0, [x0, #0xf78]
 2c07780: 97f73d98     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07784: b001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07788: f946f000     	ldr	x0, [x0, #0xde0]
 2c0778c: 97f73d95     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07790: b001b7a0     	adrp	x0, 0x62fc000
 2c07794: f947c000     	ldr	x0, [x0, #0xf80]
 2c07798: 97f73d92     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0779c: 52800028     	mov	w8, #0x1                // =1
 2c077a0: 392eeec8     	strb	w8, [x22, #0xbbb]
 2c077a4: 37000235     	tbnz	w21, #0x0, 0x2c077e8 <__start_il2cpp+0x13f1d4>
 2c077a8: f001d855     	adrp	x21, 0x6712000
 2c077ac: 395c46a8     	ldrb	w8, [x21, #0x711]
 2c077b0: 350000c8     	cbnz	w8, 0x2c077c8 <__start_il2cpp+0x13f1b4>
 2c077b4: d001b740     	adrp	x0, 0x62f1000
 2c077b8: f941fc00     	ldr	x0, [x0, #0x3f8]
 2c077bc: 97f73d89     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c077c0: 52800028     	mov	w8, #0x1                // =1
 2c077c4: 391c46a8     	strb	w8, [x21, #0x711]
 2c077c8: d001b748     	adrp	x8, 0x62f1000
 2c077cc: f941fd08     	ldr	x8, [x8, #0x3f8]
 2c077d0: f9400100     	ldr	x0, [x8]
 2c077d4: b940e408     	ldr	w8, [x0, #0xe4]
 2c077d8: 35000048     	cbnz	w8, 0x2c077e0 <__start_il2cpp+0x13f1cc>
 2c077dc: 97f73de0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c077e0: 7100027f     	cmp	w19, #0x0
 2c077e4: 5a935673     	cneg	w19, w19, mi
 2c077e8: f9401e88     	ldr	x8, [x20, #0x38]
 2c077ec: b40009c8     	cbz	x8, 0x2c07924 <__start_il2cpp+0x13f310>
 2c077f0: f9402100     	ldr	x0, [x8, #0x40]
 2c077f4: b4000980     	cbz	x0, 0x2c07924 <__start_il2cpp+0x13f310>
 2c077f8: b001b7a8     	adrp	x8, 0x62fc000
 2c077fc: 2a1303e1     	mov	w1, w19
 2c07800: f947b908     	ldr	x8, [x8, #0xf70]
 2c07804: f9400102     	ldr	x2, [x8]
 2c07808: 94728f86     	bl	0x48ab620 <__start_il2cpp+0x1de300c>
 2c0780c: 370002a0     	tbnz	w0, #0x0, 0x2c07860 <__start_il2cpp+0x13f24c>
 2c07810: f9401e88     	ldr	x8, [x20, #0x38]
 2c07814: b4000888     	cbz	x8, 0x2c07924 <__start_il2cpp+0x13f310>
 2c07818: f9402d00     	ldr	x0, [x8, #0x58]
 2c0781c: b4000840     	cbz	x0, 0x2c07924 <__start_il2cpp+0x13f310>
 2c07820: f001b768     	adrp	x8, 0x62f6000
 2c07824: 2a1303e1     	mov	w1, w19
 2c07828: f9404108     	ldr	x8, [x8, #0x80]
 2c0782c: f9400102     	ldr	x2, [x8]
 2c07830: 94726950     	bl	0x48a1d70 <__start_il2cpp+0x1dd975c>
 2c07834: 360002e0     	tbz	w0, #0x0, 0x2c07890 <__start_il2cpp+0x13f27c>
 2c07838: f9401e88     	ldr	x8, [x20, #0x38]
 2c0783c: b4000748     	cbz	x8, 0x2c07924 <__start_il2cpp+0x13f310>
 2c07840: f9402d00     	ldr	x0, [x8, #0x58]
 2c07844: b4000700     	cbz	x0, 0x2c07924 <__start_il2cpp+0x13f310>
 2c07848: f001b768     	adrp	x8, 0x62f6000
 2c0784c: 2a1303e1     	mov	w1, w19
 2c07850: f9404508     	ldr	x8, [x8, #0x88]
 2c07854: f9400102     	ldr	x2, [x8]
 2c07858: 947268a4     	bl	0x48a1ae8 <__start_il2cpp+0x1dd94d4>
 2c0785c: 2a0003f3     	mov	w19, w0
 2c07860: f9401e88     	ldr	x8, [x20, #0x38]
 2c07864: b4000608     	cbz	x8, 0x2c07924 <__start_il2cpp+0x13f310>
 2c07868: f9402100     	ldr	x0, [x8, #0x40]
 2c0786c: b40005c0     	cbz	x0, 0x2c07924 <__start_il2cpp+0x13f310>
 2c07870: b001b7a8     	adrp	x8, 0x62fc000
 2c07874: 2a1303e1     	mov	w1, w19
 2c07878: f947bd08     	ldr	x8, [x8, #0xf78]
 2c0787c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c07880: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c07884: f9400102     	ldr	x2, [x8]
 2c07888: f84307fe     	ldr	x30, [sp], #0x30
 2c0788c: 14728ec0     	b	0x48ab38c <__start_il2cpp+0x1de2d78>
 2c07890: b001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07894: 910033e1     	add	x1, sp, #0xc
 2c07898: f9470d08     	ldr	x8, [x8, #0xe18]
 2c0789c: b9000ff3     	str	w19, [sp, #0xc]
 2c078a0: f9402500     	ldr	x0, [x8, #0x48]
 2c078a4: 97f73db0     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c078a8: b001b7a8     	adrp	x8, 0x62fc000
 2c078ac: aa0003e1     	mov	x1, x0
 2c078b0: aa1f03e2     	mov	x2, xzr
 2c078b4: f947c108     	ldr	x8, [x8, #0xf80]
 2c078b8: f9400108     	ldr	x8, [x8]
 2c078bc: aa0803e0     	mov	x0, x8
 2c078c0: 948d93ac     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c078c4: b001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c078c8: aa0003f4     	mov	x20, x0
 2c078cc: f946f108     	ldr	x8, [x8, #0xde0]
 2c078d0: f9400108     	ldr	x8, [x8]
 2c078d4: aa0803e0     	mov	x0, x8
 2c078d8: 97f73de8     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c078dc: aa1403e1     	mov	x1, x20
 2c078e0: aa1f03e2     	mov	x2, xzr
 2c078e4: aa0003f3     	mov	x19, x0
 2c078e8: 9494f531     	bl	0x5144dac <__start_il2cpp+0x267c798>
 2c078ec: b001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c078f0: f946e908     	ldr	x8, [x8, #0xdd0]
 2c078f4: f9400100     	ldr	x0, [x8]
 2c078f8: b940e408     	ldr	w8, [x0, #0xe4]
 2c078fc: 35000048     	cbnz	w8, 0x2c07904 <__start_il2cpp+0x13f2f0>
 2c07900: 97f73d97     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c07904: aa1303e0     	mov	x0, x19
 2c07908: aa1f03e1     	mov	x1, xzr
 2c0790c: 94bbbebf     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2c07910: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c07914: aa1f03e0     	mov	x0, xzr
 2c07918: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0791c: f84307fe     	ldr	x30, [sp], #0x30
 2c07920: d65f03c0     	ret
 2c07924: 97f73dd9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemPooler :: BaseItem GetItem(ItemData itemData)
# VA 0x2c07928 .. 0x2c0792c (next mapped method entry)
 2c07928: 17fffe5f     	b	0x2c072a4 <__start_il2cpp+0x13ec90>

# ItemPooler :: System.Void DisposeItem(BaseItem baseItem, System.Boolean willPlayEffect = False)
# VA 0x2c0792c .. 0x2c07a44 (next mapped method entry)
 2c0792c: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c07930: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c07934: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c07938: f001d856     	adrp	x22, 0x6712000
 2c0793c: 2a0203f5     	mov	w21, w2
 2c07940: aa0103f3     	mov	x19, x1
 2c07944: 396eeac8     	ldrb	w8, [x22, #0xbba]
 2c07948: aa0003f4     	mov	x20, x0
 2c0794c: 37000128     	tbnz	w8, #0x0, 0x2c07970 <__start_il2cpp+0x13f35c>
 2c07950: b001b7a0     	adrp	x0, 0x62fc000
 2c07954: f947a400     	ldr	x0, [x0, #0xf48]
 2c07958: 97f73d22     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0795c: d001b780     	adrp	x0, 0x62f9000
 2c07960: f9477400     	ldr	x0, [x0, #0xee8]
 2c07964: 97f73d1f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07968: 52800028     	mov	w8, #0x1                // =1
 2c0796c: 392eeac8     	strb	w8, [x22, #0xbba]
 2c07970: b4000693     	cbz	x19, 0x2c07a40 <__start_il2cpp+0x13f42c>
 2c07974: aa1303e0     	mov	x0, x19
 2c07978: aa1f03e1     	mov	x1, xzr
 2c0797c: 94bce02c     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2c07980: b4000600     	cbz	x0, 0x2c07a40 <__start_il2cpp+0x13f42c>
 2c07984: 2a1f03e1     	mov	w1, wzr
 2c07988: aa1f03e2     	mov	x2, xzr
 2c0798c: 94bcf27b     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2c07990: f9400268     	ldr	x8, [x19]
 2c07994: 120002a1     	and	w1, w21, #0x1
 2c07998: aa1303e0     	mov	x0, x19
 2c0799c: a95a8909     	ldp	x9, x2, [x8, #0x1a8]
 2c079a0: d63f0120     	blr	x9
 2c079a4: f9402280     	ldr	x0, [x20, #0x40]
 2c079a8: b40004c0     	cbz	x0, 0x2c07a40 <__start_il2cpp+0x13f42c>
 2c079ac: b001b7a8     	adrp	x8, 0x62fc000
 2c079b0: f947a508     	ldr	x8, [x8, #0xf48]
 2c079b4: f9402a61     	ldr	x1, [x19, #0x50]
 2c079b8: f9400102     	ldr	x2, [x8]
 2c079bc: 94750e1c     	bl	0x494b22c <__start_il2cpp+0x1e82c18>
 2c079c0: b4000400     	cbz	x0, 0x2c07a40 <__start_il2cpp+0x13f42c>
 2c079c4: d001b78a     	adrp	x10, 0x62f9000
 2c079c8: aa0003e8     	mov	x8, x0
 2c079cc: f947754a     	ldr	x10, [x10, #0xee8]
 2c079d0: b9401c0b     	ldr	w11, [x0, #0x1c]
 2c079d4: f9400809     	ldr	x9, [x0, #0x10]
 2c079d8: f940014a     	ldr	x10, [x10]
 2c079dc: 1100056b     	add	w11, w11, #0x1
 2c079e0: b9001c0b     	str	w11, [x0, #0x1c]
 2c079e4: b40002e9     	cbz	x9, 0x2c07a40 <__start_il2cpp+0x13f42c>
 2c079e8: b980190b     	ldrsw	x11, [x8, #0x18]
 2c079ec: b940192c     	ldr	w12, [x9, #0x18]
 2c079f0: 6b0c017f     	cmp	w11, w12
 2c079f4: 54000142     	b.hs	0x2c07a1c <__start_il2cpp+0x13f408>
 2c079f8: 8b0b0d20     	add	x0, x9, x11, lsl #3
 2c079fc: aa1303e1     	mov	x1, x19
 2c07a00: 11000569     	add	w9, w11, #0x1
 2c07a04: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c07a08: b9001909     	str	w9, [x8, #0x18]
 2c07a0c: f8020c13     	str	x19, [x0, #0x20]!
 2c07a10: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c07a14: f84307fe     	ldr	x30, [sp], #0x30
 2c07a18: 17f73cdd     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2c07a1c: f9401149     	ldr	x9, [x10, #0x20]
 2c07a20: aa1303e1     	mov	x1, x19
 2c07a24: aa0803e0     	mov	x0, x8
 2c07a28: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c07a2c: f9406129     	ldr	x9, [x9, #0xc0]
 2c07a30: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c07a34: f9403922     	ldr	x2, [x9, #0x70]
 2c07a38: f84307fe     	ldr	x30, [sp], #0x30
 2c07a3c: 143c84fd     	b	0x3b28e30 <__start_il2cpp+0x106081c>
 2c07a40: 97f73d92     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemPooler :: ItemData GetItemData(System.Int32 itemId)
# VA 0x2c07a44 .. 0x2c07a4c (next mapped method entry)
 2c07a44: 2a1f03e2     	mov	w2, wzr
 2c07a48: 17ffff37     	b	0x2c07724 <__start_il2cpp+0x13f110>

# ItemPooler :: UnityEngine.Sprite GetItemVisual(System.Int32 itemId, System.Int32 itemLevel, System.Boolean throwIfNull = True)
# VA 0x2c07a4c .. 0x2c07db8 (next mapped method entry)
 2c07a4c: d10143ff     	sub	sp, sp, #0x50
 2c07a50: f9000bfe     	str	x30, [sp, #0x10]
 2c07a54: a9025ff8     	stp	x24, x23, [sp, #0x20]
 2c07a58: a90357f6     	stp	x22, x21, [sp, #0x30]
 2c07a5c: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2c07a60: f001d858     	adrp	x24, 0x6712000
 2c07a64: b9001fe1     	str	w1, [sp, #0x1c]
 2c07a68: b001b757     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07a6c: 396ef308     	ldrb	w8, [x24, #0xbbc]
 2c07a70: f9478ef7     	ldr	x23, [x23, #0xf18]
 2c07a74: 2a0303f3     	mov	w19, w3
 2c07a78: 2a0203f5     	mov	w21, w2
 2c07a7c: 2a0103f4     	mov	w20, w1
 2c07a80: aa0003f6     	mov	x22, x0
 2c07a84: b9001be2     	str	w2, [sp, #0x18]
 2c07a88: 370003c8     	tbnz	w8, #0x0, 0x2c07b00 <__start_il2cpp+0x13f4ec>
 2c07a8c: b001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07a90: f946e800     	ldr	x0, [x0, #0xdd0]
 2c07a94: 97f73cd3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07a98: b001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07a9c: f946f000     	ldr	x0, [x0, #0xde0]
 2c07aa0: 97f73cd0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07aa4: b001b760     	adrp	x0, 0x62f4000
 2c07aa8: f9476c00     	ldr	x0, [x0, #0xed8]
 2c07aac: 97f73ccd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07ab0: f001b780     	adrp	x0, 0x62fa000
 2c07ab4: f940b800     	ldr	x0, [x0, #0x170]
 2c07ab8: 97f73cca     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07abc: f001b780     	adrp	x0, 0x62fa000
 2c07ac0: f940a800     	ldr	x0, [x0, #0x150]
 2c07ac4: 97f73cc7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07ac8: b001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07acc: f9478c00     	ldr	x0, [x0, #0xf18]
 2c07ad0: 97f73cc4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07ad4: b001b7a0     	adrp	x0, 0x62fc000
 2c07ad8: f947c400     	ldr	x0, [x0, #0xf88]
 2c07adc: 97f73cc1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07ae0: b001b7a0     	adrp	x0, 0x62fc000
 2c07ae4: f947c800     	ldr	x0, [x0, #0xf90]
 2c07ae8: 97f73cbe     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07aec: b001b7a0     	adrp	x0, 0x62fc000
 2c07af0: f947cc00     	ldr	x0, [x0, #0xf98]
 2c07af4: 97f73cbb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07af8: 52800028     	mov	w8, #0x1                // =1
 2c07afc: 392ef308     	strb	w8, [x24, #0xbbc]
 2c07b00: aa1603e0     	mov	x0, x22
 2c07b04: 2a1403e1     	mov	w1, w20
 2c07b08: 2a1f03e2     	mov	w2, wzr
 2c07b0c: 97ffff06     	bl	0x2c07724 <__start_il2cpp+0x13f110>
 2c07b10: f94002e8     	ldr	x8, [x23]
 2c07b14: aa0003f4     	mov	x20, x0
 2c07b18: b940e509     	ldr	w9, [x8, #0xe4]
 2c07b1c: 35000069     	cbnz	w9, 0x2c07b28 <__start_il2cpp+0x13f514>
 2c07b20: aa0803e0     	mov	x0, x8
 2c07b24: 97f73d0e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c07b28: aa1403e0     	mov	x0, x20
 2c07b2c: aa1f03e1     	mov	x1, xzr
 2c07b30: aa1f03e2     	mov	x2, xzr
 2c07b34: 94bcfab1     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c07b38: 360008e0     	tbz	w0, #0x0, 0x2c07c54 <__start_il2cpp+0x13f640>
 2c07b3c: b001b7b5     	adrp	x21, 0x62fc000
 2c07b40: b001b7b6     	adrp	x22, 0x62fc000
 2c07b44: b001b777     	adrp	x23, 0x62f4000
 2c07b48: f947cab5     	ldr	x21, [x21, #0xf90]
 2c07b4c: f947c6d6     	ldr	x22, [x22, #0xf88]
 2c07b50: f9476ef7     	ldr	x23, [x23, #0xed8]
 2c07b54: 910073e0     	add	x0, sp, #0x1c
 2c07b58: aa1f03e1     	mov	x1, xzr
 2c07b5c: 9494051e     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2c07b60: aa0003f4     	mov	x20, x0
 2c07b64: 910063e0     	add	x0, sp, #0x18
 2c07b68: aa1f03e1     	mov	x1, xzr
 2c07b6c: 9494051a     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2c07b70: f94002a8     	ldr	x8, [x21]
 2c07b74: f94002c2     	ldr	x2, [x22]
 2c07b78: aa0003e3     	mov	x3, x0
 2c07b7c: aa1403e1     	mov	x1, x20
 2c07b80: aa1f03e4     	mov	x4, xzr
 2c07b84: aa0803e0     	mov	x0, x8
 2c07b88: 948dbbdb     	bl	0x4f76af4 <__start_il2cpp+0x24ae4e0>
 2c07b8c: f94002e8     	ldr	x8, [x23]
 2c07b90: aa0003f4     	mov	x20, x0
 2c07b94: aa0803e0     	mov	x0, x8
 2c07b98: 97f73d38     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c07b9c: aa1403e1     	mov	x1, x20
 2c07ba0: aa1f03e2     	mov	x2, xzr
 2c07ba4: aa1f03e3     	mov	x3, xzr
 2c07ba8: aa0003f5     	mov	x21, x0
 2c07bac: 97fca0db     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2c07bb0: aa1503e0     	mov	x0, x21
 2c07bb4: aa1f03e1     	mov	x1, xzr
 2c07bb8: 940cf47b     	bl	0x2f44da4 <__start_il2cpp+0x47c790>
 2c07bbc: aa1f03e0     	mov	x0, xzr
 2c07bc0: 36000ef3     	tbz	w19, #0x0, 0x2c07d9c <__start_il2cpp+0x13f788>
 2c07bc4: 910073e0     	add	x0, sp, #0x1c
 2c07bc8: aa1f03e1     	mov	x1, xzr
 2c07bcc: 94940502     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2c07bd0: aa0003f3     	mov	x19, x0
 2c07bd4: 910063e0     	add	x0, sp, #0x18
 2c07bd8: aa1f03e1     	mov	x1, xzr
 2c07bdc: 949404fe     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2c07be0: aa0003f4     	mov	x20, x0
 2c07be4: b001b7a0     	adrp	x0, 0x62fc000
 2c07be8: f947c800     	ldr	x0, [x0, #0xf90]
 2c07bec: 97f73c82     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c07bf0: aa0003f5     	mov	x21, x0
 2c07bf4: b001b7a0     	adrp	x0, 0x62fc000
 2c07bf8: f947c400     	ldr	x0, [x0, #0xf88]
 2c07bfc: 97f73c7e     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c07c00: aa0003e2     	mov	x2, x0
 2c07c04: aa1503e0     	mov	x0, x21
 2c07c08: aa1303e1     	mov	x1, x19
 2c07c0c: aa1403e3     	mov	x3, x20
 2c07c10: aa1f03e4     	mov	x4, xzr
 2c07c14: 948dbbb8     	bl	0x4f76af4 <__start_il2cpp+0x24ae4e0>
 2c07c18: aa0003f3     	mov	x19, x0
 2c07c1c: b001b760     	adrp	x0, 0x62f4000
 2c07c20: f9471800     	ldr	x0, [x0, #0xe30]
 2c07c24: 97f73c74     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c07c28: 97f73d14     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c07c2c: aa1303e1     	mov	x1, x19
 2c07c30: aa1f03e2     	mov	x2, xzr
 2c07c34: aa0003f4     	mov	x20, x0
 2c07c38: 94941b1f     	bl	0x510e8b4 <__start_il2cpp+0x26462a0>
 2c07c3c: b001b7a0     	adrp	x0, 0x62fc000
 2c07c40: f947d000     	ldr	x0, [x0, #0xfa0]
 2c07c44: 97f73c6c     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c07c48: aa0003e1     	mov	x1, x0
 2c07c4c: aa1403e0     	mov	x0, x20
 2c07c50: 97f73cbf     	bl	0x29d6f4c <mono_class_get_checked+0x834>
 2c07c54: 710006a1     	subs	w1, w21, #0x1
 2c07c58: 54000104     	b.mi	0x2c07c78 <__start_il2cpp+0x13f664>
 2c07c5c: b4000ad4     	cbz	x20, 0x2c07db4 <__start_il2cpp+0x13f7a0>
 2c07c60: f9402e80     	ldr	x0, [x20, #0x58]
 2c07c64: b4000a80     	cbz	x0, 0x2c07db4 <__start_il2cpp+0x13f7a0>
 2c07c68: b9401808     	ldr	w8, [x0, #0x18]
 2c07c6c: 6b08003f     	cmp	w1, w8
 2c07c70: 5400006a     	b.ge	0x2c07c7c <__start_il2cpp+0x13f668>
 2c07c74: 14000036     	b	0x2c07d4c <__start_il2cpp+0x13f738>
 2c07c78: b40009f4     	cbz	x20, 0x2c07db4 <__start_il2cpp+0x13f7a0>
 2c07c7c: b001b756     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07c80: 910033e1     	add	x1, sp, #0xc
 2c07c84: f9470ed6     	ldr	x22, [x22, #0xe18]
 2c07c88: b9403288     	ldr	w8, [x20, #0x30]
 2c07c8c: f94026c0     	ldr	x0, [x22, #0x48]
 2c07c90: b9000fe8     	str	w8, [sp, #0xc]
 2c07c94: 97f73cb4     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c07c98: aa0003f3     	mov	x19, x0
 2c07c9c: f94026c0     	ldr	x0, [x22, #0x48]
 2c07ca0: 910023e1     	add	x1, sp, #0x8
 2c07ca4: b9000bf5     	str	w21, [sp, #0x8]
 2c07ca8: 97f73caf     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c07cac: f9402e88     	ldr	x8, [x20, #0x58]
 2c07cb0: b4000828     	cbz	x8, 0x2c07db4 <__start_il2cpp+0x13f7a0>
 2c07cb4: aa0003f5     	mov	x21, x0
 2c07cb8: b9401908     	ldr	w8, [x8, #0x18]
 2c07cbc: f94026c0     	ldr	x0, [x22, #0x48]
 2c07cc0: 910013e1     	add	x1, sp, #0x4
 2c07cc4: b90007e8     	str	w8, [sp, #0x4]
 2c07cc8: 97f73ca7     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c07ccc: b001b7a8     	adrp	x8, 0x62fc000
 2c07cd0: aa0003e3     	mov	x3, x0
 2c07cd4: aa1303e1     	mov	x1, x19
 2c07cd8: f947cd08     	ldr	x8, [x8, #0xf98]
 2c07cdc: aa1503e2     	mov	x2, x21
 2c07ce0: aa1f03e4     	mov	x4, xzr
 2c07ce4: f9400108     	ldr	x8, [x8]
 2c07ce8: aa0803e0     	mov	x0, x8
 2c07cec: 948dbc93     	bl	0x4f76f38 <__start_il2cpp+0x24ae924>
 2c07cf0: b001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07cf4: aa0003f5     	mov	x21, x0
 2c07cf8: f946f108     	ldr	x8, [x8, #0xde0]
 2c07cfc: f9400108     	ldr	x8, [x8]
 2c07d00: aa0803e0     	mov	x0, x8
 2c07d04: 97f73cdd     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c07d08: aa1503e1     	mov	x1, x21
 2c07d0c: aa1f03e2     	mov	x2, xzr
 2c07d10: aa0003f3     	mov	x19, x0
 2c07d14: 9494f426     	bl	0x5144dac <__start_il2cpp+0x267c798>
 2c07d18: b001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07d1c: f946e908     	ldr	x8, [x8, #0xdd0]
 2c07d20: f9400100     	ldr	x0, [x8]
 2c07d24: b940e408     	ldr	w8, [x0, #0xe4]
 2c07d28: 35000048     	cbnz	w8, 0x2c07d30 <__start_il2cpp+0x13f71c>
 2c07d2c: 97f73c8c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c07d30: aa1303e0     	mov	x0, x19
 2c07d34: aa1f03e1     	mov	x1, xzr
 2c07d38: 94bbbdb4     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2c07d3c: f9402e80     	ldr	x0, [x20, #0x58]
 2c07d40: b40003a0     	cbz	x0, 0x2c07db4 <__start_il2cpp+0x13f7a0>
 2c07d44: b9401808     	ldr	w8, [x0, #0x18]
 2c07d48: 51000501     	sub	w1, w8, #0x1
 2c07d4c: f001b788     	adrp	x8, 0x62fa000
 2c07d50: f940a908     	ldr	x8, [x8, #0x150]
 2c07d54: f9400102     	ldr	x2, [x8]
 2c07d58: 943c8382     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2c07d5c: b40002c0     	cbz	x0, 0x2c07db4 <__start_il2cpp+0x13f7a0>
 2c07d60: aa0003f3     	mov	x19, x0
 2c07d64: f94002e0     	ldr	x0, [x23]
 2c07d68: f9401274     	ldr	x20, [x19, #0x20]
 2c07d6c: b940e408     	ldr	w8, [x0, #0xe4]
 2c07d70: 35000048     	cbnz	w8, 0x2c07d78 <__start_il2cpp+0x13f764>
 2c07d74: 97f73c7a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c07d78: aa1403e0     	mov	x0, x20
 2c07d7c: aa1f03e1     	mov	x1, xzr
 2c07d80: aa1f03e2     	mov	x2, xzr
 2c07d84: 94bcfa1d     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c07d88: 52800408     	mov	w8, #0x20               // =32
 2c07d8c: 7200001f     	tst	w0, #0x1
 2c07d90: 52800309     	mov	w9, #0x18               // =24
 2c07d94: 9a881128     	csel	x8, x9, x8, ne
 2c07d98: f8686a60     	ldr	x0, [x19, x8]
 2c07d9c: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2c07da0: f9400bfe     	ldr	x30, [sp, #0x10]
 2c07da4: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2c07da8: a9425ff8     	ldp	x24, x23, [sp, #0x20]
 2c07dac: 910143ff     	add	sp, sp, #0x50
 2c07db0: d65f03c0     	ret
 2c07db4: 97f73cb5     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemPooler :: System.Collections.Generic.Dictionary`2<ItemType, System.Collections.Generic.List`1<ItemData>> GetItemTypesToItemsData()
# VA 0x2c07db8 .. 0x2c07dd0 (next mapped method entry)
 2c07db8: f9401c08     	ldr	x8, [x0, #0x38]
 2c07dbc: b4000068     	cbz	x8, 0x2c07dc8 <__start_il2cpp+0x13f7b4>
 2c07dc0: f9402900     	ldr	x0, [x8, #0x50]
 2c07dc4: d65f03c0     	ret
 2c07dc8: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c07dcc: 97f73caf     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemPooler :: System.Boolean IsItemExplored(System.Int32 id, System.Int32 level)
# VA 0x2c07dd0 .. 0x2c07df4 (next mapped method entry)
 2c07dd0: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c07dd4: f9401808     	ldr	x8, [x0, #0x30]
 2c07dd8: b40000c8     	cbz	x8, 0x2c07df0 <__start_il2cpp+0x13f7dc>
 2c07ddc: f9405500     	ldr	x0, [x8, #0xa8]
 2c07de0: b4000080     	cbz	x0, 0x2c07df0 <__start_il2cpp+0x13f7dc>
 2c07de4: aa1f03e3     	mov	x3, xzr
 2c07de8: f84107fe     	ldr	x30, [sp], #0x10
 2c07dec: 17fd18b6     	b	0x2b4e0c4 <__start_il2cpp+0x85ab0>
 2c07df0: 97f73ca6     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemPooler :: System.Void SetItemToExplored(System.Int32 id, System.Int32 level)
# VA 0x2c07df4 .. 0x2c07e18 (next mapped method entry)
 2c07df4: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c07df8: f9401808     	ldr	x8, [x0, #0x30]
 2c07dfc: b40000c8     	cbz	x8, 0x2c07e14 <__start_il2cpp+0x13f800>
 2c07e00: f9405500     	ldr	x0, [x8, #0xa8]
 2c07e04: b4000080     	cbz	x0, 0x2c07e14 <__start_il2cpp+0x13f800>
 2c07e08: aa1f03e3     	mov	x3, xzr
 2c07e0c: f84107fe     	ldr	x30, [sp], #0x10
 2c07e10: 17fd18cf     	b	0x2b4e14c <__start_il2cpp+0x85b38>
 2c07e14: 97f73c9d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemPooler :: System.Void SetItemToConsumed(System.Int32 id)
# VA 0x2c07e18 .. 0x2c07e98 (next mapped method entry)
 2c07e18: d100c3ff     	sub	sp, sp, #0x30
 2c07e1c: a90157fe     	stp	x30, x21, [sp, #0x10]
 2c07e20: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c07e24: f001d855     	adrp	x21, 0x6712000
 2c07e28: b001b7b4     	adrp	x20, 0x62fc000
 2c07e2c: 2a0103f3     	mov	w19, w1
 2c07e30: 396ef6a8     	ldrb	w8, [x21, #0xbbd]
 2c07e34: f947d694     	ldr	x20, [x20, #0xfa8]
 2c07e38: 370000c8     	tbnz	w8, #0x0, 0x2c07e50 <__start_il2cpp+0x13f83c>
 2c07e3c: b001b7a0     	adrp	x0, 0x62fc000
 2c07e40: f947d400     	ldr	x0, [x0, #0xfa8]
 2c07e44: 97f73be7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07e48: 52800028     	mov	w8, #0x1                // =1
 2c07e4c: 392ef6a8     	strb	w8, [x21, #0xbbd]
 2c07e50: b001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07e54: 910033e1     	add	x1, sp, #0xc
 2c07e58: f9470d08     	ldr	x8, [x8, #0xe18]
 2c07e5c: b9000ff3     	str	w19, [sp, #0xc]
 2c07e60: f9402500     	ldr	x0, [x8, #0x48]
 2c07e64: 97f73c40     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c07e68: f9400288     	ldr	x8, [x20]
 2c07e6c: aa0003e1     	mov	x1, x0
 2c07e70: aa1f03e2     	mov	x2, xzr
 2c07e74: aa0803e0     	mov	x0, x8
 2c07e78: 948d923e     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c07e7c: 52800021     	mov	w1, #0x1                // =1
 2c07e80: aa1f03e2     	mov	x2, xzr
 2c07e84: 94bcbd21     	bl	0x5b37308 <__start_il2cpp+0x306ecf4>
 2c07e88: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c07e8c: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2c07e90: 9100c3ff     	add	sp, sp, #0x30
 2c07e94: d65f03c0     	ret

# ItemPooler :: System.Boolean IsItemConsumed(System.Int32 id)
# VA 0x2c07e98 .. 0x2c07f20 (next mapped method entry)
 2c07e98: d100c3ff     	sub	sp, sp, #0x30
 2c07e9c: a90157fe     	stp	x30, x21, [sp, #0x10]
 2c07ea0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c07ea4: f001d855     	adrp	x21, 0x6712000
 2c07ea8: b001b7b4     	adrp	x20, 0x62fc000
 2c07eac: 2a0103f3     	mov	w19, w1
 2c07eb0: 396efaa8     	ldrb	w8, [x21, #0xbbe]
 2c07eb4: f947d694     	ldr	x20, [x20, #0xfa8]
 2c07eb8: 370000c8     	tbnz	w8, #0x0, 0x2c07ed0 <__start_il2cpp+0x13f8bc>
 2c07ebc: b001b7a0     	adrp	x0, 0x62fc000
 2c07ec0: f947d400     	ldr	x0, [x0, #0xfa8]
 2c07ec4: 97f73bc7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07ec8: 52800028     	mov	w8, #0x1                // =1
 2c07ecc: 392efaa8     	strb	w8, [x21, #0xbbe]
 2c07ed0: b001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07ed4: 910033e1     	add	x1, sp, #0xc
 2c07ed8: f9470d08     	ldr	x8, [x8, #0xe18]
 2c07edc: b9000ff3     	str	w19, [sp, #0xc]
 2c07ee0: f9402500     	ldr	x0, [x8, #0x48]
 2c07ee4: 97f73c20     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c07ee8: f9400288     	ldr	x8, [x20]
 2c07eec: aa0003e1     	mov	x1, x0
 2c07ef0: aa1f03e2     	mov	x2, xzr
 2c07ef4: aa0803e0     	mov	x0, x8
 2c07ef8: 948d921e     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c07efc: 2a1f03e1     	mov	w1, wzr
 2c07f00: aa1f03e2     	mov	x2, xzr
 2c07f04: 94bcbd17     	bl	0x5b37360 <__start_il2cpp+0x306ed4c>
 2c07f08: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c07f0c: 7100041f     	cmp	w0, #0x1
 2c07f10: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2c07f14: 1a9f17e0     	cset	w0, eq
 2c07f18: 9100c3ff     	add	sp, sp, #0x30
 2c07f1c: d65f03c0     	ret

# ItemPooler :: System.Boolean IsValidItemId(System.Int32 id)
# VA 0x2c07f20 .. 0x2c08044 (next mapped method entry)
 2c07f20: d100c3ff     	sub	sp, sp, #0x30
 2c07f24: a90157fe     	stp	x30, x21, [sp, #0x10]
 2c07f28: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c07f2c: f001d855     	adrp	x21, 0x6712000
 2c07f30: 2a0103f3     	mov	w19, w1
 2c07f34: aa0003f4     	mov	x20, x0
 2c07f38: 396efea8     	ldrb	w8, [x21, #0xbbf]
 2c07f3c: 37000188     	tbnz	w8, #0x0, 0x2c07f6c <__start_il2cpp+0x13f958>
 2c07f40: f001b760     	adrp	x0, 0x62f6000
 2c07f44: f9404000     	ldr	x0, [x0, #0x80]
 2c07f48: 97f73ba6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07f4c: f001b760     	adrp	x0, 0x62f6000
 2c07f50: f9400c00     	ldr	x0, [x0, #0x18]
 2c07f54: 97f73ba3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07f58: b001b7a0     	adrp	x0, 0x62fc000
 2c07f5c: f947d800     	ldr	x0, [x0, #0xfb0]
 2c07f60: 97f73ba0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c07f64: 52800028     	mov	w8, #0x1                // =1
 2c07f68: 392efea8     	strb	w8, [x21, #0xbbf]
 2c07f6c: f9401e88     	ldr	x8, [x20, #0x38]
 2c07f70: b4000688     	cbz	x8, 0x2c08040 <__start_il2cpp+0x13fa2c>
 2c07f74: f9403100     	ldr	x0, [x8, #0x60]
 2c07f78: b4000640     	cbz	x0, 0x2c08040 <__start_il2cpp+0x13fa2c>
 2c07f7c: f9400008     	ldr	x8, [x0]
 2c07f80: 2a1303e1     	mov	w1, w19
 2c07f84: f9417509     	ldr	x9, [x8, #0x2e8]
 2c07f88: f9417902     	ldr	x2, [x8, #0x2f0]
 2c07f8c: d63f0120     	blr	x9
 2c07f90: 37000160     	tbnz	w0, #0x0, 0x2c07fbc <__start_il2cpp+0x13f9a8>
 2c07f94: f9401e88     	ldr	x8, [x20, #0x38]
 2c07f98: b4000548     	cbz	x8, 0x2c08040 <__start_il2cpp+0x13fa2c>
 2c07f9c: f9402d00     	ldr	x0, [x8, #0x58]
 2c07fa0: b4000500     	cbz	x0, 0x2c08040 <__start_il2cpp+0x13fa2c>
 2c07fa4: f001b768     	adrp	x8, 0x62f6000
 2c07fa8: 2a1303e1     	mov	w1, w19
 2c07fac: f9404108     	ldr	x8, [x8, #0x80]
 2c07fb0: f9400102     	ldr	x2, [x8]
 2c07fb4: 9472676f     	bl	0x48a1d70 <__start_il2cpp+0x1dd975c>
 2c07fb8: 36000060     	tbz	w0, #0x0, 0x2c07fc4 <__start_il2cpp+0x13f9b0>
 2c07fbc: 52800020     	mov	w0, #0x1                // =1
 2c07fc0: 1400001c     	b	0x2c08030 <__start_il2cpp+0x13fa1c>
 2c07fc4: 3100067f     	cmn	w19, #0x1
 2c07fc8: 54000320     	b.eq	0x2c0802c <__start_il2cpp+0x13fa18>
 2c07fcc: b001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07fd0: 910033e1     	add	x1, sp, #0xc
 2c07fd4: f9470d08     	ldr	x8, [x8, #0xe18]
 2c07fd8: b9000ff3     	str	w19, [sp, #0xc]
 2c07fdc: f9402500     	ldr	x0, [x8, #0x48]
 2c07fe0: 97f73be1     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c07fe4: b001b7a8     	adrp	x8, 0x62fc000
 2c07fe8: aa0003e1     	mov	x1, x0
 2c07fec: aa1f03e2     	mov	x2, xzr
 2c07ff0: f947d908     	ldr	x8, [x8, #0xfb0]
 2c07ff4: f9400108     	ldr	x8, [x8]
 2c07ff8: aa0803e0     	mov	x0, x8
 2c07ffc: 948d91dd     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c08000: d001b768     	adrp	x8, 0x62f6000
 2c08004: aa0003f3     	mov	x19, x0
 2c08008: f9400d08     	ldr	x8, [x8, #0x18]
 2c0800c: f9400108     	ldr	x8, [x8]
 2c08010: b940e509     	ldr	w9, [x8, #0xe4]
 2c08014: 35000069     	cbnz	w9, 0x2c08020 <__start_il2cpp+0x13fa0c>
 2c08018: aa0803e0     	mov	x0, x8
 2c0801c: 97f73bd0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c08020: aa1303e0     	mov	x0, x19
 2c08024: aa1f03e1     	mov	x1, xzr
 2c08028: 97fd2e78     	bl	0x2b53a08 <__start_il2cpp+0x8b3f4>
 2c0802c: 2a1f03e0     	mov	w0, wzr
 2c08030: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c08034: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2c08038: 9100c3ff     	add	sp, sp, #0x30
 2c0803c: d65f03c0     	ret
 2c08040: 97f73c12     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemPooler :: System.Void .ctor()
# VA 0x2c08044 .. 0x2c0804c (next mapped method entry)
 2c08044: aa1f03e1     	mov	x1, xzr
 2c08048: 14bcfff7     	b	0x5b48024 <__start_il2cpp+0x307fa10>

# ItemPooler :: System.Void <Awake>b__5_0(ItemAddedSignal t)
# VA 0x2c0804c .. 0x2c08074 (next mapped method entry)
 2c0804c: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c08050: b4000101     	cbz	x1, 0x2c08070 <__start_il2cpp+0x13fa5c>
 2c08054: f9402828     	ldr	x8, [x1, #0x50]
 2c08058: b40000c8     	cbz	x8, 0x2c08070 <__start_il2cpp+0x13fa5c>
 2c0805c: b9403108     	ldr	w8, [x8, #0x30]
 2c08060: b9404422     	ldr	w2, [x1, #0x44]
 2c08064: 2a0803e1     	mov	w1, w8
 2c08068: f84107fe     	ldr	x30, [sp], #0x10
 2c0806c: 17ffff62     	b	0x2c07df4 <__start_il2cpp+0x13f7e0>
 2c08070: 97f73c06     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemPooler :: System.Void <Awake>b__5_1(PostMergeSignal t)
# VA 0x2c08074 .. 0x2c08080 (next mapped method entry)
 2c08074: f9400c21     	ldr	x1, [x1, #0x18]
 2c08078: 2a1f03e2     	mov	w2, wzr
 2c0807c: 17fffe2c     	b	0x2c0792c <__start_il2cpp+0x13f318>
