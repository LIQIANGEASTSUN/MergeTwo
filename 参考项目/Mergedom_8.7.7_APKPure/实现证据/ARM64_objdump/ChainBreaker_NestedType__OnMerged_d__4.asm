
# ChainBreaker+_OnMerged_d__4 :: System.Void MoveNext()
# VA 0x2bf70b4 .. 0x2bf77ec (next mapped method entry)
 2bf70b4: d10283ff     	sub	sp, sp, #0xa0
 2bf70b8: f9003bfe     	str	x30, [sp, #0x70]
 2bf70bc: a90857f6     	stp	x22, x21, [sp, #0x80]
 2bf70c0: a9094ff4     	stp	x20, x19, [sp, #0x90]
 2bf70c4: f001d8d4     	adrp	x20, 0x6712000
 2bf70c8: aa0003f3     	mov	x19, x0
 2bf70cc: 396cda88     	ldrb	w8, [x20, #0xb36]
 2bf70d0: 37000428     	tbnz	w8, #0x0, 0x2bf7154 <__start_il2cpp+0x12eb40>
 2bf70d4: b001b820     	adrp	x0, 0x62fc000
 2bf70d8: f9439c00     	ldr	x0, [x0, #0x738]
 2bf70dc: 97f77f41     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf70e0: b001b820     	adrp	x0, 0x62fc000
 2bf70e4: f942f000     	ldr	x0, [x0, #0x5e0]
 2bf70e8: 97f77f3e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf70ec: b001b820     	adrp	x0, 0x62fc000
 2bf70f0: f942f400     	ldr	x0, [x0, #0x5e8]
 2bf70f4: 97f77f3b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf70f8: b001b820     	adrp	x0, 0x62fc000
 2bf70fc: f942f800     	ldr	x0, [x0, #0x5f0]
 2bf7100: 97f77f38     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7104: 9001b7e0     	adrp	x0, 0x62f3000
 2bf7108: f9479000     	ldr	x0, [x0, #0xf20]
 2bf710c: 97f77f35     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7110: f001b7e0     	adrp	x0, 0x62f6000
 2bf7114: f9400c00     	ldr	x0, [x0, #0x18]
 2bf7118: 97f77f32     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf711c: b001b820     	adrp	x0, 0x62fc000
 2bf7120: f942fc00     	ldr	x0, [x0, #0x5f8]
 2bf7124: 97f77f2f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7128: b001b820     	adrp	x0, 0x62fc000
 2bf712c: f943a000     	ldr	x0, [x0, #0x740]
 2bf7130: 97f77f2c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7134: b001b820     	adrp	x0, 0x62fc000
 2bf7138: f943a400     	ldr	x0, [x0, #0x748]
 2bf713c: 97f77f29     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7140: b001b820     	adrp	x0, 0x62fc000
 2bf7144: f943a800     	ldr	x0, [x0, #0x750]
 2bf7148: 97f77f26     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf714c: 52800028     	mov	w8, #0x1                // =1
 2bf7150: 392cda88     	strb	w8, [x20, #0xb36]
 2bf7154: b9400268     	ldr	w8, [x19]
 2bf7158: f9401674     	ldr	x20, [x19, #0x28]
 2bf715c: a9037fff     	stp	xzr, xzr, [sp, #0x30]
 2bf7160: f90023ff     	str	xzr, [sp, #0x40]
 2bf7164: a9017fff     	stp	xzr, xzr, [sp, #0x10]
 2bf7168: f90013ff     	str	xzr, [sp, #0x20]
 2bf716c: b9000bff     	str	wzr, [sp, #0x8]
 2bf7170: 34000de8     	cbz	w8, 0x2bf732c <__start_il2cpp+0x12ed18>
 2bf7174: f9401268     	ldr	x8, [x19, #0x20]
 2bf7178: b40028a8     	cbz	x8, 0x2bf768c <__start_il2cpp+0x12f078>
 2bf717c: f9402908     	ldr	x8, [x8, #0x50]
 2bf7180: b4002888     	cbz	x8, 0x2bf7690 <__start_il2cpp+0x12f07c>
 2bf7184: b001b7d6     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf7188: f9470ed6     	ldr	x22, [x22, #0xe18]
 2bf718c: b9403108     	ldr	w8, [x8, #0x30]
 2bf7190: f94026c0     	ldr	x0, [x22, #0x48]
 2bf7194: b90053e8     	str	w8, [sp, #0x50]
 2bf7198: 910143e1     	add	x1, sp, #0x50
 2bf719c: 97f77f72     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2bf71a0: f9401268     	ldr	x8, [x19, #0x20]
 2bf71a4: b4002788     	cbz	x8, 0x2bf7694 <__start_il2cpp+0x12f080>
 2bf71a8: aa0003f5     	mov	x21, x0
 2bf71ac: b9404508     	ldr	w8, [x8, #0x44]
 2bf71b0: f94026c0     	ldr	x0, [x22, #0x48]
 2bf71b4: b9007fe8     	str	w8, [sp, #0x7c]
 2bf71b8: 9101f3e1     	add	x1, sp, #0x7c
 2bf71bc: 97f77f6a     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2bf71c0: b001b828     	adrp	x8, 0x62fc000
 2bf71c4: aa0003e2     	mov	x2, x0
 2bf71c8: f943a508     	ldr	x8, [x8, #0x748]
 2bf71cc: f9400100     	ldr	x0, [x8]
 2bf71d0: aa1503e1     	mov	x1, x21
 2bf71d4: aa1f03e3     	mov	x3, xzr
 2bf71d8: 948dff47     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2bf71dc: f001b7e8     	adrp	x8, 0x62f6000
 2bf71e0: aa0003f5     	mov	x21, x0
 2bf71e4: f9400d08     	ldr	x8, [x8, #0x18]
 2bf71e8: f9400100     	ldr	x0, [x8]
 2bf71ec: b940e408     	ldr	w8, [x0, #0xe4]
 2bf71f0: 35000048     	cbnz	w8, 0x2bf71f8 <__start_il2cpp+0x12ebe4>
 2bf71f4: 97f77f5a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf71f8: b001b828     	adrp	x8, 0x62fc000
 2bf71fc: f943a108     	ldr	x8, [x8, #0x740]
 2bf7200: f9400100     	ldr	x0, [x8]
 2bf7204: aa1503e1     	mov	x1, x21
 2bf7208: aa1f03e2     	mov	x2, xzr
 2bf720c: 97fd5ac7     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2bf7210: f9401260     	ldr	x0, [x19, #0x20]
 2bf7214: aa1403e1     	mov	x1, x20
 2bf7218: 94000175     	bl	0x2bf77ec <__start_il2cpp+0x12f1d8>
 2bf721c: 360009c0     	tbz	w0, #0x0, 0x2bf7354 <__start_il2cpp+0x12ed40>
 2bf7220: b40023d4     	cbz	x20, 0x2bf7698 <__start_il2cpp+0x12f084>
 2bf7224: aa1403e0     	mov	x0, x20
 2bf7228: 97fffc23     	bl	0x2bf62b4 <__start_il2cpp+0x12dca0>
 2bf722c: 910143e8     	add	x8, sp, #0x50
 2bf7230: aa1403e0     	mov	x0, x20
 2bf7234: 97fff084     	bl	0x2bf3444 <__start_il2cpp+0x12ae30>
 2bf7238: b001b828     	adrp	x8, 0x62fc000
 2bf723c: f942fd08     	ldr	x8, [x8, #0x5f8]
 2bf7240: 3dc017e0     	ldr	q0, [sp, #0x50]
 2bf7244: f94033e9     	ldr	x9, [sp, #0x60]
 2bf7248: a905ffff     	stp	xzr, xzr, [sp, #0x58]
 2bf724c: f9400108     	ldr	x8, [x8]
 2bf7250: 3d8007e0     	str	q0, [sp, #0x10]
 2bf7254: f90013e9     	str	x9, [sp, #0x20]
 2bf7258: f9401100     	ldr	x0, [x8, #0x20]
 2bf725c: f9002bff     	str	xzr, [sp, #0x50]
 2bf7260: 3944d408     	ldrb	w8, [x0, #0x135]
 2bf7264: 37000048     	tbnz	w8, #0x0, 0x2bf726c <__start_il2cpp+0x12ec58>
 2bf7268: 97f85b70     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf726c: 3dc007e0     	ldr	q0, [sp, #0x10]
 2bf7270: f94013e8     	ldr	x8, [sp, #0x20]
 2bf7274: 3d8017e0     	str	q0, [sp, #0x50]
 2bf7278: f90033e8     	str	x8, [sp, #0x60]
 2bf727c: 910143e0     	add	x0, sp, #0x50
 2bf7280: aa1f03e1     	mov	x1, xzr
 2bf7284: 97f77ec2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf7288: b001b828     	adrp	x8, 0x62fc000
 2bf728c: f942f908     	ldr	x8, [x8, #0x5f0]
 2bf7290: 3dc017e0     	ldr	q0, [sp, #0x50]
 2bf7294: f94033e9     	ldr	x9, [sp, #0x60]
 2bf7298: f9400108     	ldr	x8, [x8]
 2bf729c: 3d800fe0     	str	q0, [sp, #0x30]
 2bf72a0: f90023e9     	str	x9, [sp, #0x40]
 2bf72a4: f9401100     	ldr	x0, [x8, #0x20]
 2bf72a8: 9104d408     	add	x8, x0, #0x135
 2bf72ac: 79400108     	ldrh	w8, [x8]
 2bf72b0: 37000048     	tbnz	w8, #0x0, 0x2bf72b8 <__start_il2cpp+0x12eca4>
 2bf72b4: 97f85b5d     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf72b8: f001d8d5     	adrp	x21, 0x6712000
 2bf72bc: 3957fea8     	ldrb	w8, [x21, #0x5ff]
 2bf72c0: 350000c8     	cbnz	w8, 0x2bf72d8 <__start_il2cpp+0x12ecc4>
 2bf72c4: 9001b7e0     	adrp	x0, 0x62f3000
 2bf72c8: f947e000     	ldr	x0, [x0, #0xfc0]
 2bf72cc: 97f77ec5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf72d0: 52800028     	mov	w8, #0x1                // =1
 2bf72d4: 3917fea8     	strb	w8, [x21, #0x5ff]
 2bf72d8: f9401bf5     	ldr	x21, [sp, #0x30]
 2bf72dc: b40014f5     	cbz	x21, 0x2bf7578 <__start_il2cpp+0x12ef64>
 2bf72e0: 9001b7ea     	adrp	x10, 0x62f3000
 2bf72e4: f94002a8     	ldr	x8, [x21]
 2bf72e8: f947e14a     	ldr	x10, [x10, #0xfc0]
 2bf72ec: 794083f6     	ldrh	w22, [sp, #0x40]
 2bf72f0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf72f4: f9400141     	ldr	x1, [x10]
 2bf72f8: b4000129     	cbz	x9, 0x2bf731c <__start_il2cpp+0x12ed08>
 2bf72fc: f940590a     	ldr	x10, [x8, #0xb0]
 2bf7300: 9100214a     	add	x10, x10, #0x8
 2bf7304: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf7308: eb01017f     	cmp	x11, x1
 2bf730c: 54000d60     	b.eq	0x2bf74b8 <__start_il2cpp+0x12eea4>
 2bf7310: f1000529     	subs	x9, x9, #0x1
 2bf7314: 9100414a     	add	x10, x10, #0x10
 2bf7318: 54ffff61     	b.ne	0x2bf7304 <__start_il2cpp+0x12ecf0>
 2bf731c: aa1503e0     	mov	x0, x21
 2bf7320: 2a1f03e2     	mov	w2, wzr
 2bf7324: 97f85c10     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf7328: 14000067     	b	0x2bf74c4 <__start_il2cpp+0x12eeb0>
 2bf732c: 3dc00e60     	ldr	q0, [x19, #0x30]
 2bf7330: f9402268     	ldr	x8, [x19, #0x40]
 2bf7334: a903fe7f     	stp	xzr, xzr, [x19, #0x38]
 2bf7338: f9001a7f     	str	xzr, [x19, #0x30]
 2bf733c: 3d800fe0     	str	q0, [sp, #0x30]
 2bf7340: f9401bf5     	ldr	x21, [sp, #0x30]
 2bf7344: f90023e8     	str	x8, [sp, #0x40]
 2bf7348: 12800008     	mov	w8, #-0x1               // =-1
 2bf734c: b9000268     	str	w8, [x19]
 2bf7350: 14000062     	b	0x2bf74d8 <__start_il2cpp+0x12eec4>
 2bf7354: f9401268     	ldr	x8, [x19, #0x20]
 2bf7358: b4001a28     	cbz	x8, 0x2bf769c <__start_il2cpp+0x12f088>
 2bf735c: f9402909     	ldr	x9, [x8, #0x50]
 2bf7360: b4001a09     	cbz	x9, 0x2bf76a0 <__start_il2cpp+0x12f08c>
 2bf7364: b001b82a     	adrp	x10, 0x62fc000
 2bf7368: f943a94a     	ldr	x10, [x10, #0x750]
 2bf736c: b9403121     	ldr	w1, [x9, #0x30]
 2bf7370: b9404502     	ldr	w2, [x8, #0x44]
 2bf7374: f9400140     	ldr	x0, [x10]
 2bf7378: aa1f03e3     	mov	x3, xzr
 2bf737c: 9401adda     	bl	0x2c62ae4 <__start_il2cpp+0x19a4d0>
 2bf7380: b4001934     	cbz	x20, 0x2bf76a4 <__start_il2cpp+0x12f090>
 2bf7384: f940126a     	ldr	x10, [x19, #0x20]
 2bf7388: b400190a     	cbz	x10, 0x2bf76a8 <__start_il2cpp+0x12f094>
 2bf738c: f9407294     	ldr	x20, [x20, #0xe0]
 2bf7390: b40018f4     	cbz	x20, 0x2bf76ac <__start_il2cpp+0x12f098>
 2bf7394: 9001b7eb     	adrp	x11, 0x62f3000
 2bf7398: f9400288     	ldr	x8, [x20]
 2bf739c: f947916b     	ldr	x11, [x11, #0xf20]
 2bf73a0: f9402955     	ldr	x21, [x10, #0x50]
 2bf73a4: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf73a8: f9400161     	ldr	x1, [x11]
 2bf73ac: b4000129     	cbz	x9, 0x2bf73d0 <__start_il2cpp+0x12edbc>
 2bf73b0: f940590a     	ldr	x10, [x8, #0xb0]
 2bf73b4: 9100214a     	add	x10, x10, #0x8
 2bf73b8: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf73bc: eb01017f     	cmp	x11, x1
 2bf73c0: 54000100     	b.eq	0x2bf73e0 <__start_il2cpp+0x12edcc>
 2bf73c4: f1000529     	subs	x9, x9, #0x1
 2bf73c8: 9100414a     	add	x10, x10, #0x10
 2bf73cc: 54ffff61     	b.ne	0x2bf73b8 <__start_il2cpp+0x12eda4>
 2bf73d0: aa1403e0     	mov	x0, x20
 2bf73d4: 52800042     	mov	w2, #0x2                // =2
 2bf73d8: 97f85be3     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf73dc: 14000005     	b	0x2bf73f0 <__start_il2cpp+0x12eddc>
 2bf73e0: b9400149     	ldr	w9, [x10]
 2bf73e4: 11000929     	add	w9, w9, #0x2
 2bf73e8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf73ec: 9104e100     	add	x0, x8, #0x138
 2bf73f0: a9400808     	ldp	x8, x2, [x0]
 2bf73f4: aa1403e0     	mov	x0, x20
 2bf73f8: aa1503e1     	mov	x1, x21
 2bf73fc: d63f0100     	blr	x8
 2bf7400: f9401268     	ldr	x8, [x19, #0x20]
 2bf7404: b4001568     	cbz	x8, 0x2bf76b0 <__start_il2cpp+0x12f09c>
 2bf7408: aa0003f4     	mov	x20, x0
 2bf740c: b4001540     	cbz	x0, 0x2bf76b4 <__start_il2cpp+0x12f0a0>
 2bf7410: f9400289     	ldr	x9, [x20]
 2bf7414: b9404502     	ldr	w2, [x8, #0x44]
 2bf7418: a9578d28     	ldp	x8, x3, [x9, #0x178]
 2bf741c: aa1403e0     	mov	x0, x20
 2bf7420: 2a1f03e1     	mov	w1, wzr
 2bf7424: d63f0100     	blr	x8
 2bf7428: aa1403e0     	mov	x0, x20
 2bf742c: 52800021     	mov	w1, #0x1                // =1
 2bf7430: aa1f03e2     	mov	x2, xzr
 2bf7434: 97fff328     	bl	0x2bf40d4 <__start_il2cpp+0x12bac0>
 2bf7438: f9401268     	ldr	x8, [x19, #0x20]
 2bf743c: b40013e8     	cbz	x8, 0x2bf76b8 <__start_il2cpp+0x12f0a4>
 2bf7440: f9402d00     	ldr	x0, [x8, #0x58]
 2bf7444: b40013c0     	cbz	x0, 0x2bf76bc <__start_il2cpp+0x12f0a8>
 2bf7448: aa1403e1     	mov	x1, x20
 2bf744c: 52800022     	mov	w2, #0x1                // =1
 2bf7450: aa1f03e3     	mov	x3, xzr
 2bf7454: 97fea12e     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2bf7458: f9403280     	ldr	x0, [x20, #0x60]
 2bf745c: b4001320     	cbz	x0, 0x2bf76c0 <__start_il2cpp+0x12f0ac>
 2bf7460: aa1f03e1     	mov	x1, xzr
 2bf7464: 94bd213e     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf7468: f001d8d6     	adrp	x22, 0x6712000
 2bf746c: aa0003f5     	mov	x21, x0
 2bf7470: 394786c8     	ldrb	w8, [x22, #0x1e1]
 2bf7474: 350000c8     	cbnz	w8, 0x2bf748c <__start_il2cpp+0x12ee78>
 2bf7478: d001b7c0     	adrp	x0, 0x62f1000
 2bf747c: f940dc00     	ldr	x0, [x0, #0x1b8]
 2bf7480: 97f77e58     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7484: 52800028     	mov	w8, #0x1                // =1
 2bf7488: 390786c8     	strb	w8, [x22, #0x1e1]
 2bf748c: b40011d5     	cbz	x21, 0x2bf76c4 <__start_il2cpp+0x12f0b0>
 2bf7490: d001b7c8     	adrp	x8, 0x62f1000
 2bf7494: f940dd08     	ldr	x8, [x8, #0x1b8]
 2bf7498: f9400108     	ldr	x8, [x8]
 2bf749c: f9405d08     	ldr	x8, [x8, #0xb8]
 2bf74a0: 2d420901     	ldp	s1, s2, [x8, #0x10]
 2bf74a4: bd400d00     	ldr	s0, [x8, #0xc]
 2bf74a8: aa1503e0     	mov	x0, x21
 2bf74ac: aa1f03e1     	mov	x1, xzr
 2bf74b0: 94bd76a5     	bl	0x5b54f44 <__start_il2cpp+0x308c930>
 2bf74b4: 14000031     	b	0x2bf7578 <__start_il2cpp+0x12ef64>
 2bf74b8: b9800149     	ldrsw	x9, [x10]
 2bf74bc: 8b091108     	add	x8, x8, x9, lsl #4
 2bf74c0: 9104e100     	add	x0, x8, #0x138
 2bf74c4: a9400808     	ldp	x8, x2, [x0]
 2bf74c8: aa1503e0     	mov	x0, x21
 2bf74cc: 2a1603e1     	mov	w1, w22
 2bf74d0: d63f0100     	blr	x8
 2bf74d4: 34000bc0     	cbz	w0, 0x2bf764c <__start_il2cpp+0x12f038>
 2bf74d8: b4000515     	cbz	x21, 0x2bf7578 <__start_il2cpp+0x12ef64>
 2bf74dc: b001b828     	adrp	x8, 0x62fc000
 2bf74e0: f942f508     	ldr	x8, [x8, #0x5e8]
 2bf74e4: 794083f6     	ldrh	w22, [sp, #0x40]
 2bf74e8: f9400108     	ldr	x8, [x8]
 2bf74ec: f9401100     	ldr	x0, [x8, #0x20]
 2bf74f0: 9104d408     	add	x8, x0, #0x135
 2bf74f4: 79400108     	ldrh	w8, [x8]
 2bf74f8: 37000048     	tbnz	w8, #0x0, 0x2bf7500 <__start_il2cpp+0x12eeec>
 2bf74fc: 97f85acb     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf7500: f9406008     	ldr	x8, [x0, #0xc0]
 2bf7504: f9401501     	ldr	x1, [x8, #0x28]
 2bf7508: 9104d428     	add	x8, x1, #0x135
 2bf750c: 79400108     	ldrh	w8, [x8]
 2bf7510: 37000088     	tbnz	w8, #0x0, 0x2bf7520 <__start_il2cpp+0x12ef0c>
 2bf7514: aa0103e0     	mov	x0, x1
 2bf7518: 97f85ac4     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf751c: aa0003e1     	mov	x1, x0
 2bf7520: f94002a8     	ldr	x8, [x21]
 2bf7524: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf7528: b4000129     	cbz	x9, 0x2bf754c <__start_il2cpp+0x12ef38>
 2bf752c: f940590a     	ldr	x10, [x8, #0xb0]
 2bf7530: 9100214a     	add	x10, x10, #0x8
 2bf7534: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf7538: eb01017f     	cmp	x11, x1
 2bf753c: 54000100     	b.eq	0x2bf755c <__start_il2cpp+0x12ef48>
 2bf7540: f1000529     	subs	x9, x9, #0x1
 2bf7544: 9100414a     	add	x10, x10, #0x10
 2bf7548: 54ffff61     	b.ne	0x2bf7534 <__start_il2cpp+0x12ef20>
 2bf754c: aa1503e0     	mov	x0, x21
 2bf7550: 2a1f03e2     	mov	w2, wzr
 2bf7554: 97f85b84     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf7558: 14000004     	b	0x2bf7568 <__start_il2cpp+0x12ef54>
 2bf755c: b9800149     	ldrsw	x9, [x10]
 2bf7560: 8b091108     	add	x8, x8, x9, lsl #4
 2bf7564: 9104e100     	add	x0, x8, #0x138
 2bf7568: a9400808     	ldp	x8, x2, [x0]
 2bf756c: aa1503e0     	mov	x0, x21
 2bf7570: 2a1603e1     	mov	w1, w22
 2bf7574: d63f0100     	blr	x8
 2bf7578: f9400675     	ldr	x21, [x19, #0x8]
 2bf757c: 12800028     	mov	w8, #-0x2               // =-2
 2bf7580: b9000268     	str	w8, [x19]
 2bf7584: b4000415     	cbz	x21, 0x2bf7604 <__start_il2cpp+0x12eff0>
 2bf7588: b001b828     	adrp	x8, 0x62fc000
 2bf758c: f942f108     	ldr	x8, [x8, #0x5e0]
 2bf7590: f9400108     	ldr	x8, [x8]
 2bf7594: f9401100     	ldr	x0, [x8, #0x20]
 2bf7598: 9104d408     	add	x8, x0, #0x135
 2bf759c: 79400108     	ldrh	w8, [x8]
 2bf75a0: 37000048     	tbnz	w8, #0x0, 0x2bf75a8 <__start_il2cpp+0x12ef94>
 2bf75a4: 97f85aa1     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf75a8: f9406008     	ldr	x8, [x0, #0xc0]
 2bf75ac: f9400501     	ldr	x1, [x8, #0x8]
 2bf75b0: 9104d428     	add	x8, x1, #0x135
 2bf75b4: 79400108     	ldrh	w8, [x8]
 2bf75b8: 37000088     	tbnz	w8, #0x0, 0x2bf75c8 <__start_il2cpp+0x12efb4>
 2bf75bc: aa0103e0     	mov	x0, x1
 2bf75c0: 97f85a9a     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf75c4: aa0003e1     	mov	x1, x0
 2bf75c8: f94002a8     	ldr	x8, [x21]
 2bf75cc: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf75d0: b4000129     	cbz	x9, 0x2bf75f4 <__start_il2cpp+0x12efe0>
 2bf75d4: f940590a     	ldr	x10, [x8, #0xb0]
 2bf75d8: 9100214a     	add	x10, x10, #0x8
 2bf75dc: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf75e0: eb01017f     	cmp	x11, x1
 2bf75e4: 540001a0     	b.eq	0x2bf7618 <__start_il2cpp+0x12f004>
 2bf75e8: f1000529     	subs	x9, x9, #0x1
 2bf75ec: 9100414a     	add	x10, x10, #0x10
 2bf75f0: 54ffff61     	b.ne	0x2bf75dc <__start_il2cpp+0x12efc8>
 2bf75f4: aa1503e0     	mov	x0, x21
 2bf75f8: 52800042     	mov	w2, #0x2                // =2
 2bf75fc: 97f85b5a     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf7600: 1400000a     	b	0x2bf7628 <__start_il2cpp+0x12f014>
 2bf7604: f8018e74     	str	x20, [x19, #0x18]!
 2bf7608: aa1303e0     	mov	x0, x19
 2bf760c: aa1403e1     	mov	x1, x20
 2bf7610: 97f77ddf     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf7614: 14000009     	b	0x2bf7638 <__start_il2cpp+0x12f024>
 2bf7618: b9400149     	ldr	w9, [x10]
 2bf761c: 11000929     	add	w9, w9, #0x2
 2bf7620: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf7624: 9104e100     	add	x0, x8, #0x138
 2bf7628: a9400808     	ldp	x8, x2, [x0]
 2bf762c: aa1503e0     	mov	x0, x21
 2bf7630: aa1403e1     	mov	x1, x20
 2bf7634: d63f0100     	blr	x8
 2bf7638: a9494ff4     	ldp	x20, x19, [sp, #0x90]
 2bf763c: f9403bfe     	ldr	x30, [sp, #0x70]
 2bf7640: a94857f6     	ldp	x22, x21, [sp, #0x80]
 2bf7644: 910283ff     	add	sp, sp, #0xa0
 2bf7648: d65f03c0     	ret
 2bf764c: 3dc00fe0     	ldr	q0, [sp, #0x30]
 2bf7650: f94023e8     	ldr	x8, [sp, #0x40]
 2bf7654: b900027f     	str	wzr, [x19]
 2bf7658: 3d800e60     	str	q0, [x19, #0x30]
 2bf765c: f9002268     	str	x8, [x19, #0x40]
 2bf7660: 9100c260     	add	x0, x19, #0x30
 2bf7664: aa1f03e1     	mov	x1, xzr
 2bf7668: 97f77dc9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf766c: b001b828     	adrp	x8, 0x62fc000
 2bf7670: f9439d08     	ldr	x8, [x8, #0x738]
 2bf7674: f9400103     	ldr	x3, [x8]
 2bf7678: 91002260     	add	x0, x19, #0x8
 2bf767c: 9100c3e1     	add	x1, sp, #0x30
 2bf7680: aa1303e2     	mov	x2, x19
 2bf7684: 94002c57     	bl	0x2c027e0 <__start_il2cpp+0x13a1cc>
 2bf7688: 17ffffec     	b	0x2bf7638 <__start_il2cpp+0x12f024>
 2bf768c: 97f77e7f     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf7690: 97f77e7e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf7694: 97f77e7d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf7698: 97f77e7c     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf769c: 97f77e7b     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf76a0: 97f77e7a     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf76a4: 97f77e79     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf76a8: 97f77e78     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf76ac: 97f77e77     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf76b0: 97f77e76     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf76b4: 97f77e75     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf76b8: 97f77e74     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf76bc: 97f77e73     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf76c0: 97f77e72     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf76c4: 97f77e71     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf76c8: 1400001d     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76cc: 1400001c     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76d0: 1400001b     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76d4: 1400001a     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76d8: 14000019     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76dc: 14000018     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76e0: 14000017     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76e4: 14000016     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76e8: 14000015     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76ec: 14000014     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76f0: 14000013     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76f4: 14000012     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76f8: 14000011     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf76fc: 14000010     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7700: 1400000f     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7704: 1400000e     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7708: 1400000d     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf770c: 1400000c     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7710: 1400000b     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7714: 1400000a     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7718: 14000009     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf771c: 14000008     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7720: 14000007     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7724: 14000006     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7728: 14000005     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf772c: 14000004     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7730: 14000003     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7734: 14000002     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf7738: 14000001     	b	0x2bf773c <__start_il2cpp+0x12f128>
 2bf773c: aa0003f4     	mov	x20, x0
 2bf7740: 7100043f     	cmp	w1, #0x1
 2bf7744: 540004e1     	b.ne	0x2bf77e0 <__start_il2cpp+0x12f1cc>
 2bf7748: aa1403e0     	mov	x0, x20
 2bf774c: 94ccbbfd     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf7750: aa0003f4     	mov	x20, x0
 2bf7754: b001b7c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf7758: f946f000     	ldr	x0, [x0, #0xde0]
 2bf775c: 97f77da6     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf7760: f9400288     	ldr	x8, [x20]
 2bf7764: f9400101     	ldr	x1, [x8]
 2bf7768: 97f77f4a     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2bf776c: 36000260     	tbz	w0, #0x0, 0x2bf77b8 <__start_il2cpp+0x12f1a4>
 2bf7770: b9800bf5     	ldrsw	x21, [sp, #0x8]
 2bf7774: f9400294     	ldr	x20, [x20]
 2bf7778: 910003e8     	mov	x8, sp
 2bf777c: f8357914     	str	x20, [x8, x21, lsl #3]
 2bf7780: 110006a8     	add	w8, w21, #0x1
 2bf7784: b9000be8     	str	w8, [sp, #0x8]
 2bf7788: 94ccbbf2     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf778c: 12800028     	mov	w8, #-0x2               // =-2
 2bf7790: b001b820     	adrp	x0, 0x62fc000
 2bf7794: b8008668     	str	w8, [x19], #0x8
 2bf7798: f9430000     	ldr	x0, [x0, #0x600]
 2bf779c: 97f77d96     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf77a0: aa0003e2     	mov	x2, x0
 2bf77a4: aa1303e0     	mov	x0, x19
 2bf77a8: aa1403e1     	mov	x1, x20
 2bf77ac: 97eabe9b     	bl	0x26a7218 <.text+0x20b8>
 2bf77b0: b9000bf5     	str	w21, [sp, #0x8]
 2bf77b4: 17ffffa1     	b	0x2bf7638 <__start_il2cpp+0x12f024>
 2bf77b8: 52800100     	mov	w0, #0x8                // =8
 2bf77bc: 94ccbc01     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2bf77c0: f9400288     	ldr	x8, [x20]
 2bf77c4: f9000008     	str	x8, [x0]
 2bf77c8: b00199a1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2bf77cc: 91302021     	add	x1, x1, #0xc08
 2bf77d0: aa1f03e2     	mov	x2, xzr
 2bf77d4: 94ccbbff     	bl	0x5f267d0 <__cxa_throw@plt>
 2bf77d8: aa0003f4     	mov	x20, x0
 2bf77dc: 94ccbbdd     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf77e0: aa1403e0     	mov	x0, x20
 2bf77e4: 97fb33be     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf77e8: 97eab899     	bl	0x26a5a4c <.text+0x8ec>

# ChainBreaker+_OnMerged_d__4 :: System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
# VA 0x2bf78ac .. 0x2bf7904 (next mapped method entry)
 2bf78ac: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bf78b0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf78b4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf78b8: f001d8d5     	adrp	x21, 0x6712000
 2bf78bc: b001b836     	adrp	x22, 0x62fc000
 2bf78c0: aa0103f3     	mov	x19, x1
 2bf78c4: 396cdea8     	ldrb	w8, [x21, #0xb37]
 2bf78c8: f94306d6     	ldr	x22, [x22, #0x608]
 2bf78cc: aa0003f4     	mov	x20, x0
 2bf78d0: 370000c8     	tbnz	w8, #0x0, 0x2bf78e8 <__start_il2cpp+0x12f2d4>
 2bf78d4: b001b820     	adrp	x0, 0x62fc000
 2bf78d8: f9430400     	ldr	x0, [x0, #0x608]
 2bf78dc: 97f77d41     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf78e0: 52800028     	mov	w8, #0x1                // =1
 2bf78e4: 392cdea8     	strb	w8, [x21, #0xb37]
 2bf78e8: f94002c2     	ldr	x2, [x22]
 2bf78ec: 91002280     	add	x0, x20, #0x8
 2bf78f0: aa1303e1     	mov	x1, x19
 2bf78f4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf78f8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf78fc: f84307fe     	ldr	x30, [sp], #0x30
 2bf7900: 14662a0e     	b	0x4582138 <__start_il2cpp+0x1ab9b24>
