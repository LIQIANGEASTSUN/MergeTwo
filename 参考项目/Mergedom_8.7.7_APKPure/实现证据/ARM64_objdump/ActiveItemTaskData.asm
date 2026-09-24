
# ActiveItemTaskData :: System.Void .ctor()
# VA 0x2c1e0fc .. 0x2c1e104 (next mapped method entry)
 2c1e0fc: aa1f03e1     	mov	x1, xzr
 2c1e100: 1494c692     	b	0x514fb48 <__start_il2cpp+0x2687534>

# ActiveItemTaskData :: System.Void .ctor(System.Int32 no, System.Int32 rNo, System.Int32 pId, ItemTaskKind kind)
# VA 0x2c1e104 .. 0x2c1e144 (next mapped method entry)
 2c1e104: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c1e108: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c1e10c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c1e110: 2a0103f6     	mov	w22, w1
 2c1e114: aa1f03e1     	mov	x1, xzr
 2c1e118: 2a0403f3     	mov	w19, w4
 2c1e11c: 2a0303f4     	mov	w20, w3
 2c1e120: 2a0203f5     	mov	w21, w2
 2c1e124: aa0003f7     	mov	x23, x0
 2c1e128: 9494c688     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c1e12c: 290256f6     	stp	w22, w21, [x23, #0x10]
 2c1e130: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c1e134: 29034ef4     	stp	w20, w19, [x23, #0x18]
 2c1e138: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c1e13c: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c1e140: d65f03c0     	ret

# ActiveItemTaskData :: System.Int32 get_itemTaskNo()
# VA 0x2c1e144 .. 0x2c1e14c (next mapped method entry)
 2c1e144: b9401000     	ldr	w0, [x0, #0x10]
 2c1e148: d65f03c0     	ret

# ActiveItemTaskData :: System.Int32 get_realItemTaskNo()
# VA 0x2c1e14c .. 0x2c1e154 (next mapped method entry)
 2c1e14c: b9401400     	ldr	w0, [x0, #0x14]
 2c1e150: d65f03c0     	ret

# ActiveItemTaskData :: System.Int32 get_providerId()
# VA 0x2c1e154 .. 0x2c1e15c (next mapped method entry)
 2c1e154: b9401800     	ldr	w0, [x0, #0x18]
 2c1e158: d65f03c0     	ret

# ActiveItemTaskData :: System.Boolean op_Equality(ActiveItemTaskData obj1, ActiveItemTaskData obj2)
# VA 0x2c1e15c .. 0x2c1e17c (next mapped method entry)
 2c1e15c: aa010008     	orr	x8, x0, x1
 2c1e160: f100011f     	cmp	x8, #0x0
 2c1e164: 1a9f17e8     	cset	w8, eq
 2c1e168: b4000060     	cbz	x0, 0x2c1e174 <__start_il2cpp+0x155b60>
 2c1e16c: b4000041     	cbz	x1, 0x2c1e174 <__start_il2cpp+0x155b60>
 2c1e170: 14000003     	b	0x2c1e17c <__start_il2cpp+0x155b68>
 2c1e174: 2a0803e0     	mov	w0, w8
 2c1e178: d65f03c0     	ret

# ActiveItemTaskData :: System.Boolean Equals(ActiveItemTaskData other)
# VA 0x2c1e17c .. 0x2c1e1d4 (next mapped method entry)
 2c1e17c: b4000281     	cbz	x1, 0x2c1e1cc <__start_il2cpp+0x155bb8>
 2c1e180: b9401008     	ldr	w8, [x0, #0x10]
 2c1e184: b9401029     	ldr	w9, [x1, #0x10]
 2c1e188: 6b09011f     	cmp	w8, w9
 2c1e18c: 540001c1     	b.ne	0x2c1e1c4 <__start_il2cpp+0x155bb0>
 2c1e190: b9401408     	ldr	w8, [x0, #0x14]
 2c1e194: b9401429     	ldr	w9, [x1, #0x14]
 2c1e198: 6b09011f     	cmp	w8, w9
 2c1e19c: 54000141     	b.ne	0x2c1e1c4 <__start_il2cpp+0x155bb0>
 2c1e1a0: b9401808     	ldr	w8, [x0, #0x18]
 2c1e1a4: b9401829     	ldr	w9, [x1, #0x18]
 2c1e1a8: 6b09011f     	cmp	w8, w9
 2c1e1ac: 540000c1     	b.ne	0x2c1e1c4 <__start_il2cpp+0x155bb0>
 2c1e1b0: b9401c08     	ldr	w8, [x0, #0x1c]
 2c1e1b4: b9401c29     	ldr	w9, [x1, #0x1c]
 2c1e1b8: 6b09011f     	cmp	w8, w9
 2c1e1bc: 1a9f17e0     	cset	w0, eq
 2c1e1c0: d65f03c0     	ret
 2c1e1c4: 2a1f03e0     	mov	w0, wzr
 2c1e1c8: d65f03c0     	ret
 2c1e1cc: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c1e1d0: 97f6e3ae     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ActiveItemTaskData :: System.Boolean op_Inequality(ActiveItemTaskData obj1, ActiveItemTaskData obj2)
# VA 0x2c1e1d4 .. 0x2c1e238 (next mapped method entry)
 2c1e1d4: aa010008     	orr	x8, x0, x1
 2c1e1d8: f100011f     	cmp	x8, #0x0
 2c1e1dc: 1a9f17e8     	cset	w8, eq
 2c1e1e0: b4000280     	cbz	x0, 0x2c1e230 <__start_il2cpp+0x155c1c>
 2c1e1e4: b4000261     	cbz	x1, 0x2c1e230 <__start_il2cpp+0x155c1c>
 2c1e1e8: b9401008     	ldr	w8, [x0, #0x10]
 2c1e1ec: b9401029     	ldr	w9, [x1, #0x10]
 2c1e1f0: 6b09011f     	cmp	w8, w9
 2c1e1f4: 540001c1     	b.ne	0x2c1e22c <__start_il2cpp+0x155c18>
 2c1e1f8: b9401408     	ldr	w8, [x0, #0x14]
 2c1e1fc: b9401429     	ldr	w9, [x1, #0x14]
 2c1e200: 6b09011f     	cmp	w8, w9
 2c1e204: 54000141     	b.ne	0x2c1e22c <__start_il2cpp+0x155c18>
 2c1e208: b9401808     	ldr	w8, [x0, #0x18]
 2c1e20c: b9401829     	ldr	w9, [x1, #0x18]
 2c1e210: 6b09011f     	cmp	w8, w9
 2c1e214: 540000c1     	b.ne	0x2c1e22c <__start_il2cpp+0x155c18>
 2c1e218: b9401c08     	ldr	w8, [x0, #0x1c]
 2c1e21c: b9401c29     	ldr	w9, [x1, #0x1c]
 2c1e220: 6b09011f     	cmp	w8, w9
 2c1e224: 1a9f17e8     	cset	w8, eq
 2c1e228: 14000002     	b	0x2c1e230 <__start_il2cpp+0x155c1c>
 2c1e22c: 2a1f03e8     	mov	w8, wzr
 2c1e230: 52000100     	eor	w0, w8, #0x1
 2c1e234: d65f03c0     	ret

# ActiveItemTaskData :: System.Boolean Equals(System.Object obj)
# VA 0x2c1e238 .. 0x2c1e2c4 (next mapped method entry)
 2c1e238: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c1e23c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c1e240: 9001d7b5     	adrp	x21, 0x6712000
 2c1e244: aa0103f3     	mov	x19, x1
 2c1e248: aa0003f4     	mov	x20, x0
 2c1e24c: 397166a8     	ldrb	w8, [x21, #0xc59]
 2c1e250: 370000c8     	tbnz	w8, #0x0, 0x2c1e268 <__start_il2cpp+0x155c54>
 2c1e254: f001b6e0     	adrp	x0, 0x62fd000
 2c1e258: f9442400     	ldr	x0, [x0, #0x848]
 2c1e25c: 97f6e2e1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1e260: 52800028     	mov	w8, #0x1                // =1
 2c1e264: 393166a8     	strb	w8, [x21, #0xc59]
 2c1e268: b40001d3     	cbz	x19, 0x2c1e2a0 <__start_il2cpp+0x155c8c>
 2c1e26c: f001b6e8     	adrp	x8, 0x62fd000
 2c1e270: f9442508     	ldr	x8, [x8, #0x848]
 2c1e274: f9400269     	ldr	x9, [x19]
 2c1e278: f9400108     	ldr	x8, [x8]
 2c1e27c: 3944c12b     	ldrb	w11, [x9, #0x130]
 2c1e280: 3944c10a     	ldrb	w10, [x8, #0x130]
 2c1e284: 6b0a017f     	cmp	w11, w10
 2c1e288: 540000c3     	b.lo	0x2c1e2a0 <__start_il2cpp+0x155c8c>
 2c1e28c: f9406529     	ldr	x9, [x9, #0xc8]
 2c1e290: 8b0a0d29     	add	x9, x9, x10, lsl #3
 2c1e294: f85f8129     	ldur	x9, [x9, #-0x8]
 2c1e298: eb08013f     	cmp	x9, x8
 2c1e29c: 540000a0     	b.eq	0x2c1e2b0 <__start_il2cpp+0x155c9c>
 2c1e2a0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c1e2a4: 2a1f03e0     	mov	w0, wzr
 2c1e2a8: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c1e2ac: d65f03c0     	ret
 2c1e2b0: aa1403e0     	mov	x0, x20
 2c1e2b4: aa1303e1     	mov	x1, x19
 2c1e2b8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c1e2bc: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c1e2c0: 17ffffaf     	b	0x2c1e17c <__start_il2cpp+0x155b68>

# ActiveItemTaskData :: System.Int32 GetHashCode()
# VA 0x2c1e2c4 .. 0x2c1e360 (next mapped method entry)
 2c1e2c4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c1e2c8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c1e2cc: 9001d7b4     	adrp	x20, 0x6712000
 2c1e2d0: d001b695     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c1e2d4: aa0003f3     	mov	x19, x0
 2c1e2d8: 39716a88     	ldrb	w8, [x20, #0xc5a]
 2c1e2dc: f947d6b5     	ldr	x21, [x21, #0xfa8]
 2c1e2e0: 370000c8     	tbnz	w8, #0x0, 0x2c1e2f8 <__start_il2cpp+0x155ce4>
 2c1e2e4: d001b680     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c1e2e8: f947d400     	ldr	x0, [x0, #0xfa8]
 2c1e2ec: 97f6e2bd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1e2f0: 52800028     	mov	w8, #0x1                // =1
 2c1e2f4: 39316a88     	strb	w8, [x20, #0xc5a]
 2c1e2f8: f94002a0     	ldr	x0, [x21]
 2c1e2fc: 52800081     	mov	w1, #0x4                // =4
 2c1e300: 97f6e2f3     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2c1e304: b40002c0     	cbz	x0, 0x2c1e35c <__start_il2cpp+0x155d48>
 2c1e308: b9401808     	ldr	w8, [x0, #0x18]
 2c1e30c: 34000268     	cbz	w8, 0x2c1e358 <__start_il2cpp+0x155d44>
 2c1e310: b9401269     	ldr	w9, [x19, #0x10]
 2c1e314: 7100051f     	cmp	w8, #0x1
 2c1e318: b9002009     	str	w9, [x0, #0x20]
 2c1e31c: 540001e0     	b.eq	0x2c1e358 <__start_il2cpp+0x155d44>
 2c1e320: b9401669     	ldr	w9, [x19, #0x14]
 2c1e324: 7100091f     	cmp	w8, #0x2
 2c1e328: b9002409     	str	w9, [x0, #0x24]
 2c1e32c: 54000169     	b.ls	0x2c1e358 <__start_il2cpp+0x155d44>
 2c1e330: b9401a69     	ldr	w9, [x19, #0x18]
 2c1e334: 71000d1f     	cmp	w8, #0x3
 2c1e338: b9002809     	str	w9, [x0, #0x28]
 2c1e33c: 540000e0     	b.eq	0x2c1e358 <__start_il2cpp+0x155d44>
 2c1e340: b9401e68     	ldr	w8, [x19, #0x1c]
 2c1e344: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c1e348: aa1f03e1     	mov	x1, xzr
 2c1e34c: b9002c08     	str	w8, [x0, #0x2c]
 2c1e350: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c1e354: 1408f48a     	b	0x2e5b57c <__start_il2cpp+0x392f68>
 2c1e358: 97f6e34e     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2c1e35c: 97f6e34b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ActiveItemTaskData :: System.Void SetRealNo(System.Int32 n)
# VA 0x2c1e360 .. 0x2c1e368 (next mapped method entry)
 2c1e360: b9001401     	str	w1, [x0, #0x14]
 2c1e364: d65f03c0     	ret

# ActiveItemTaskData :: System.Void SetNo(System.Int32 n)
# VA 0x2c1e368 .. 0x2c1e370 (next mapped method entry)
 2c1e368: b9001001     	str	w1, [x0, #0x10]
 2c1e36c: d65f03c0     	ret

# ActiveItemTaskData :: System.String ToString()
# VA 0x2c1e370 .. 0x2c1e52c (next mapped method entry)
 2c1e370: d10143ff     	sub	sp, sp, #0x50
 2c1e374: f90013fe     	str	x30, [sp, #0x20]
 2c1e378: a90357f6     	stp	x22, x21, [sp, #0x30]
 2c1e37c: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2c1e380: 9001d7b3     	adrp	x19, 0x6712000
 2c1e384: d001b695     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c1e388: aa0003f4     	mov	x20, x0
 2c1e38c: 39716e68     	ldrb	w8, [x19, #0xc5b]
 2c1e390: f94712b5     	ldr	x21, [x21, #0xe20]
 2c1e394: 37000188     	tbnz	w8, #0x0, 0x2c1e3c4 <__start_il2cpp+0x155db0>
 2c1e398: f001b6e0     	adrp	x0, 0x62fd000
 2c1e39c: f9442800     	ldr	x0, [x0, #0x850]
 2c1e3a0: 97f6e290     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1e3a4: d001b680     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c1e3a8: f9471000     	ldr	x0, [x0, #0xe20]
 2c1e3ac: 97f6e28d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1e3b0: f001b680     	adrp	x0, 0x62f1000
 2c1e3b4: f9419400     	ldr	x0, [x0, #0x328]
 2c1e3b8: 97f6e28a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1e3bc: 52800028     	mov	w8, #0x1                // =1
 2c1e3c0: 39316e68     	strb	w8, [x19, #0xc5b]
 2c1e3c4: f94002a0     	ldr	x0, [x21]
 2c1e3c8: 528000e1     	mov	w1, #0x7                // =7
 2c1e3cc: 97f6e2c0     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2c1e3d0: aa0003f3     	mov	x19, x0
 2c1e3d4: 91004280     	add	x0, x20, #0x10
 2c1e3d8: aa1f03e1     	mov	x1, xzr
 2c1e3dc: 9493aafe     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2c1e3e0: b4000a53     	cbz	x19, 0x2c1e528 <__start_il2cpp+0x155f14>
 2c1e3e4: b9401a68     	ldr	w8, [x19, #0x18]
 2c1e3e8: 340009e8     	cbz	w8, 0x2c1e524 <__start_il2cpp+0x155f10>
 2c1e3ec: aa1303f5     	mov	x21, x19
 2c1e3f0: aa0003e1     	mov	x1, x0
 2c1e3f4: f8020ea0     	str	x0, [x21, #0x20]!
 2c1e3f8: aa1503e0     	mov	x0, x21
 2c1e3fc: 97f6e264     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1e400: b85f82a8     	ldur	w8, [x21, #-0x8]
 2c1e404: 721f791f     	tst	w8, #0xfffffffe
 2c1e408: 540008e0     	b.eq	0x2c1e524 <__start_il2cpp+0x155f10>
 2c1e40c: f001b696     	adrp	x22, 0x62f1000
 2c1e410: aa1303f5     	mov	x21, x19
 2c1e414: f94196d6     	ldr	x22, [x22, #0x328]
 2c1e418: f94002c1     	ldr	x1, [x22]
 2c1e41c: f8028ea1     	str	x1, [x21, #0x28]!
 2c1e420: aa1503e0     	mov	x0, x21
 2c1e424: 97f6e25a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1e428: 91005280     	add	x0, x20, #0x14
 2c1e42c: aa1f03e1     	mov	x1, xzr
 2c1e430: 9493aae9     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2c1e434: b85f02a8     	ldur	w8, [x21, #-0x10]
 2c1e438: 7100091f     	cmp	w8, #0x2
 2c1e43c: 54000749     	b.ls	0x2c1e524 <__start_il2cpp+0x155f10>
 2c1e440: aa1303f5     	mov	x21, x19
 2c1e444: aa0003e1     	mov	x1, x0
 2c1e448: f8030ea0     	str	x0, [x21, #0x30]!
 2c1e44c: aa1503e0     	mov	x0, x21
 2c1e450: 97f6e24f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1e454: b85e82a8     	ldur	w8, [x21, #-0x18]
 2c1e458: 721e751f     	tst	w8, #0xfffffffc
 2c1e45c: 54000640     	b.eq	0x2c1e524 <__start_il2cpp+0x155f10>
 2c1e460: f94002c1     	ldr	x1, [x22]
 2c1e464: aa1303f5     	mov	x21, x19
 2c1e468: f8038ea1     	str	x1, [x21, #0x38]!
 2c1e46c: aa1503e0     	mov	x0, x21
 2c1e470: 97f6e247     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1e474: 91006280     	add	x0, x20, #0x18
 2c1e478: aa1f03e1     	mov	x1, xzr
 2c1e47c: 9493aad6     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2c1e480: b85e02a8     	ldur	w8, [x21, #-0x20]
 2c1e484: 7100111f     	cmp	w8, #0x4
 2c1e488: 540004e9     	b.ls	0x2c1e524 <__start_il2cpp+0x155f10>
 2c1e48c: aa1303f5     	mov	x21, x19
 2c1e490: aa0003e1     	mov	x1, x0
 2c1e494: f8040ea0     	str	x0, [x21, #0x40]!
 2c1e498: aa1503e0     	mov	x0, x21
 2c1e49c: 97f6e23c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1e4a0: b85d82a8     	ldur	w8, [x21, #-0x28]
 2c1e4a4: 7100151f     	cmp	w8, #0x5
 2c1e4a8: 540003e9     	b.ls	0x2c1e524 <__start_il2cpp+0x155f10>
 2c1e4ac: f94002c1     	ldr	x1, [x22]
 2c1e4b0: f001b6f6     	adrp	x22, 0x62fd000
 2c1e4b4: aa1303f5     	mov	x21, x19
 2c1e4b8: f9442ad6     	ldr	x22, [x22, #0x850]
 2c1e4bc: f8048ea1     	str	x1, [x21, #0x48]!
 2c1e4c0: aa1503e0     	mov	x0, x21
 2c1e4c4: 97f6e232     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1e4c8: f94002c8     	ldr	x8, [x22]
 2c1e4cc: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c1e4d0: 92800009     	mov	x9, #-0x1               // =-1
 2c1e4d4: 910023e0     	add	x0, sp, #0x8
 2c1e4d8: aa1f03e1     	mov	x1, xzr
 2c1e4dc: a900a7e8     	stp	x8, x9, [sp, #0x8]
 2c1e4e0: b9001bea     	str	w10, [sp, #0x18]
 2c1e4e4: 9494950a     	bl	0x514390c <__start_il2cpp+0x267b2f8>
 2c1e4e8: b85d02a8     	ldur	w8, [x21, #-0x30]
 2c1e4ec: 7100191f     	cmp	w8, #0x6
 2c1e4f0: 540001a9     	b.ls	0x2c1e524 <__start_il2cpp+0x155f10>
 2c1e4f4: aa0003e1     	mov	x1, x0
 2c1e4f8: aa1303e0     	mov	x0, x19
 2c1e4fc: f8050c01     	str	x1, [x0, #0x50]!
 2c1e500: 97f6e223     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1e504: aa1303e0     	mov	x0, x19
 2c1e508: aa1f03e1     	mov	x1, xzr
 2c1e50c: 948d61bc     	bl	0x4f76bfc <__start_il2cpp+0x24ae5e8>
 2c1e510: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2c1e514: f94013fe     	ldr	x30, [sp, #0x20]
 2c1e518: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2c1e51c: 910143ff     	add	sp, sp, #0x50
 2c1e520: d65f03c0     	ret
 2c1e524: 97f6e2db     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2c1e528: 97f6e2d8     	bl	0x29d7088 <mono_class_get_checked+0x970>
