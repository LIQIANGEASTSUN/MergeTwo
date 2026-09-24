
# MergeStone :: System.Void OnTapped()
# VA 0x2c080f4 .. 0x2c08180 (next mapped method entry)
 2c080f4: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c080f8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c080fc: d001d854     	adrp	x20, 0x6712000
 2c08100: aa0003f3     	mov	x19, x0
 2c08104: 396f0288     	ldrb	w8, [x20, #0xbc0]
 2c08108: 370000c8     	tbnz	w8, #0x0, 0x2c08120 <__start_il2cpp+0x13fb0c>
 2c0810c: 9001b7a0     	adrp	x0, 0x62fc000
 2c08110: f947dc00     	ldr	x0, [x0, #0xfb8]
 2c08114: 97f73b33     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c08118: 52800028     	mov	w8, #0x1                // =1
 2c0811c: 392f0288     	strb	w8, [x20, #0xbc0]
 2c08120: aa1303e0     	mov	x0, x19
 2c08124: aa1f03e1     	mov	x1, xzr
 2c08128: 97ffac93     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2c0812c: 360001e0     	tbz	w0, #0x0, 0x2c08168 <__start_il2cpp+0x13fb54>
 2c08130: f9407674     	ldr	x20, [x19, #0xe8]
 2c08134: aa1303e0     	mov	x0, x19
 2c08138: aa1f03e1     	mov	x1, xzr
 2c0813c: 94bcde08     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c08140: b40001e0     	cbz	x0, 0x2c0817c <__start_il2cpp+0x13fb68>
 2c08144: aa1f03e1     	mov	x1, xzr
 2c08148: 94bd2fba     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c0814c: b4000194     	cbz	x20, 0x2c0817c <__start_il2cpp+0x13fb68>
 2c08150: 9001b7a8     	adrp	x8, 0x62fc000
 2c08154: aa1403e0     	mov	x0, x20
 2c08158: aa1f03e2     	mov	x2, xzr
 2c0815c: f947dd08     	ldr	x8, [x8, #0xfb8]
 2c08160: f9400101     	ldr	x1, [x8]
 2c08164: 94037baa     	bl	0x2ce700c <__start_il2cpp+0x21e9f8>
 2c08168: aa1303e0     	mov	x0, x19
 2c0816c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c08170: aa1f03e1     	mov	x1, xzr
 2c08174: f84207fe     	ldr	x30, [sp], #0x20
 2c08178: 17ffb252     	b	0x2bf4ac0 <__start_il2cpp+0x12c4ac>
 2c0817c: 97f73bc3     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeStone :: System.Void OnItemPlacedToBoard(System.Boolean willPlayParticle = False)
# VA 0x2c08180 .. 0x2c082d4 (next mapped method entry)
 2c08180: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c08184: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c08188: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0818c: d001d856     	adrp	x22, 0x6712000
 2c08190: 9001b755     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c08194: 2a0103f4     	mov	w20, w1
 2c08198: 396f06c8     	ldrb	w8, [x22, #0xbc1]
 2c0819c: f9478eb5     	ldr	x21, [x21, #0xf18]
 2c081a0: aa0003f3     	mov	x19, x0
 2c081a4: 370000c8     	tbnz	w8, #0x0, 0x2c081bc <__start_il2cpp+0x13fba8>
 2c081a8: 9001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c081ac: f9478c00     	ldr	x0, [x0, #0xf18]
 2c081b0: 97f73b0c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c081b4: 52800028     	mov	w8, #0x1                // =1
 2c081b8: 392f06c8     	strb	w8, [x22, #0xbc1]
 2c081bc: 12000281     	and	w1, w20, #0x1
 2c081c0: aa1303e0     	mov	x0, x19
 2c081c4: aa1f03e2     	mov	x2, xzr
 2c081c8: 97ffb805     	bl	0x2bf61dc <__start_il2cpp+0x12dbc8>
 2c081cc: f94002a0     	ldr	x0, [x21]
 2c081d0: aa1303f4     	mov	x20, x19
 2c081d4: f84f8e95     	ldr	x21, [x20, #0xf8]!
 2c081d8: b940e408     	ldr	w8, [x0, #0xe4]
 2c081dc: 35000048     	cbnz	w8, 0x2c081e4 <__start_il2cpp+0x13fbd0>
 2c081e0: 97f73b5f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c081e4: aa1503e0     	mov	x0, x21
 2c081e8: aa1f03e1     	mov	x1, xzr
 2c081ec: aa1f03e2     	mov	x2, xzr
 2c081f0: 94bcf902     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c081f4: 36000660     	tbz	w0, #0x0, 0x2c082c0 <__start_il2cpp+0x13fcac>
 2c081f8: aa1303e0     	mov	x0, x19
 2c081fc: aa1f03e1     	mov	x1, xzr
 2c08200: 97ffac5d     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2c08204: 360005e0     	tbz	w0, #0x0, 0x2c082c0 <__start_il2cpp+0x13fcac>
 2c08208: f9401660     	ldr	x0, [x19, #0x28]
 2c0820c: b4000620     	cbz	x0, 0x2c082d0 <__start_il2cpp+0x13fcbc>
 2c08210: 52800261     	mov	w1, #0x13               // =19
 2c08214: aa1303e2     	mov	x2, x19
 2c08218: 2a1f03e3     	mov	w3, wzr
 2c0821c: aa1f03e4     	mov	x4, xzr
 2c08220: 94010378     	bl	0x2c49000 <__start_il2cpp+0x1809ec>
 2c08224: aa0003e1     	mov	x1, x0
 2c08228: f9007e60     	str	x0, [x19, #0xf8]
 2c0822c: aa1403e0     	mov	x0, x20
 2c08230: 97f73ad7     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c08234: f9407e75     	ldr	x21, [x19, #0xf8]
 2c08238: aa1303e0     	mov	x0, x19
 2c0823c: aa1f03e1     	mov	x1, xzr
 2c08240: 94bcddc7     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c08244: b4000475     	cbz	x21, 0x2c082d0 <__start_il2cpp+0x13fcbc>
 2c08248: aa0003e1     	mov	x1, x0
 2c0824c: aa1503e0     	mov	x0, x21
 2c08250: aa1f03e2     	mov	x2, xzr
 2c08254: 94010153     	bl	0x2c487a0 <__start_il2cpp+0x18018c>
 2c08258: f9400280     	ldr	x0, [x20]
 2c0825c: b40003a0     	cbz	x0, 0x2c082d0 <__start_il2cpp+0x13fcbc>
 2c08260: aa1f03e1     	mov	x1, xzr
 2c08264: 94bcddbe     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c08268: d001d854     	adrp	x20, 0x6712000
 2c0826c: aa0003f3     	mov	x19, x0
 2c08270: 39478688     	ldrb	w8, [x20, #0x1e1]
 2c08274: 350000c8     	cbnz	w8, 0x2c0828c <__start_il2cpp+0x13fc78>
 2c08278: b001b740     	adrp	x0, 0x62f1000
 2c0827c: f940dc00     	ldr	x0, [x0, #0x1b8]
 2c08280: 97f73ad8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c08284: 52800028     	mov	w8, #0x1                // =1
 2c08288: 39078688     	strb	w8, [x20, #0x1e1]
 2c0828c: b4000233     	cbz	x19, 0x2c082d0 <__start_il2cpp+0x13fcbc>
 2c08290: b001b748     	adrp	x8, 0x62f1000
 2c08294: aa1303e0     	mov	x0, x19
 2c08298: aa1f03e1     	mov	x1, xzr
 2c0829c: f940dd08     	ldr	x8, [x8, #0x1b8]
 2c082a0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c082a4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c082a8: f9400108     	ldr	x8, [x8]
 2c082ac: f9405d08     	ldr	x8, [x8, #0xb8]
 2c082b0: 2d418500     	ldp	s0, s1, [x8, #0xc]
 2c082b4: bd401502     	ldr	s2, [x8, #0x14]
 2c082b8: f84307fe     	ldr	x30, [sp], #0x30
 2c082bc: 14bd3322     	b	0x5b54f44 <__start_il2cpp+0x308c930>
 2c082c0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c082c4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c082c8: f84307fe     	ldr	x30, [sp], #0x30
 2c082cc: d65f03c0     	ret
 2c082d0: 97f73b6e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeStone :: System.Void OnStartItemDrag()
# VA 0x2c082d4 .. 0x2c083b4 (next mapped method entry)
 2c082d4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c082d8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c082dc: d001d855     	adrp	x21, 0x6712000
 2c082e0: 9001b754     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c082e4: aa0003f3     	mov	x19, x0
 2c082e8: 396f0aa8     	ldrb	w8, [x21, #0xbc2]
 2c082ec: f9478e94     	ldr	x20, [x20, #0xf18]
 2c082f0: 370000c8     	tbnz	w8, #0x0, 0x2c08308 <__start_il2cpp+0x13fcf4>
 2c082f4: 9001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c082f8: f9478c00     	ldr	x0, [x0, #0xf18]
 2c082fc: 97f73ab9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c08300: 52800028     	mov	w8, #0x1                // =1
 2c08304: 392f0aa8     	strb	w8, [x21, #0xbc2]
 2c08308: f9400280     	ldr	x0, [x20]
 2c0830c: f9407e74     	ldr	x20, [x19, #0xf8]
 2c08310: b940e408     	ldr	w8, [x0, #0xe4]
 2c08314: 35000048     	cbnz	w8, 0x2c0831c <__start_il2cpp+0x13fd08>
 2c08318: 97f73b11     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0831c: aa1403e0     	mov	x0, x20
 2c08320: aa1f03e1     	mov	x1, xzr
 2c08324: aa1f03e2     	mov	x2, xzr
 2c08328: 94bcf8b4     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c0832c: 36000080     	tbz	w0, #0x0, 0x2c0833c <__start_il2cpp+0x13fd28>
 2c08330: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c08334: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c08338: d65f03c0     	ret
 2c0833c: f9407e60     	ldr	x0, [x19, #0xf8]
 2c08340: b4000380     	cbz	x0, 0x2c083b0 <__start_il2cpp+0x13fd9c>
 2c08344: aa1f03e1     	mov	x1, xzr
 2c08348: 94bcdd85     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0834c: d001d855     	adrp	x21, 0x6712000
 2c08350: aa0003f4     	mov	x20, x0
 2c08354: 394766a8     	ldrb	w8, [x21, #0x1d9]
 2c08358: 350000c8     	cbnz	w8, 0x2c08370 <__start_il2cpp+0x13fd5c>
 2c0835c: b001b740     	adrp	x0, 0x62f1000
 2c08360: f940dc00     	ldr	x0, [x0, #0x1b8]
 2c08364: 97f73a9f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c08368: 52800028     	mov	w8, #0x1                // =1
 2c0836c: 390766a8     	strb	w8, [x21, #0x1d9]
 2c08370: b001b748     	adrp	x8, 0x62f1000
 2c08374: aa1403e0     	mov	x0, x20
 2c08378: aa1f03e1     	mov	x1, xzr
 2c0837c: f940dd08     	ldr	x8, [x8, #0x1b8]
 2c08380: f9400108     	ldr	x8, [x8]
 2c08384: f9405d08     	ldr	x8, [x8, #0xb8]
 2c08388: 2d400500     	ldp	s0, s1, [x8]
 2c0838c: bd400902     	ldr	s2, [x8, #0x8]
 2c08390: f0ff23c8     	adrp	x8, 0x1083000
 2c08394: bd462903     	ldr	s3, [x8, #0x628]
 2c08398: 940bc360     	bl	0x2ef9118 <__start_il2cpp+0x430b04>
 2c0839c: aa1303e0     	mov	x0, x19
 2c083a0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c083a4: aa1f03e1     	mov	x1, xzr
 2c083a8: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c083ac: 17ffaa67     	b	0x2bf2d48 <__start_il2cpp+0x12a734>
 2c083b0: 97f73b36     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeStone :: System.Void OnEndItemDrag()
# VA 0x2c083b4 .. 0x2c08494 (next mapped method entry)
 2c083b4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c083b8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c083bc: d001d855     	adrp	x21, 0x6712000
 2c083c0: 9001b754     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c083c4: aa0003f3     	mov	x19, x0
 2c083c8: 396f0ea8     	ldrb	w8, [x21, #0xbc3]
 2c083cc: f9478e94     	ldr	x20, [x20, #0xf18]
 2c083d0: 370000c8     	tbnz	w8, #0x0, 0x2c083e8 <__start_il2cpp+0x13fdd4>
 2c083d4: 9001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c083d8: f9478c00     	ldr	x0, [x0, #0xf18]
 2c083dc: 97f73a81     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c083e0: 52800028     	mov	w8, #0x1                // =1
 2c083e4: 392f0ea8     	strb	w8, [x21, #0xbc3]
 2c083e8: f9400280     	ldr	x0, [x20]
 2c083ec: f9407e74     	ldr	x20, [x19, #0xf8]
 2c083f0: b940e408     	ldr	w8, [x0, #0xe4]
 2c083f4: 35000048     	cbnz	w8, 0x2c083fc <__start_il2cpp+0x13fde8>
 2c083f8: 97f73ad9     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c083fc: aa1403e0     	mov	x0, x20
 2c08400: aa1f03e1     	mov	x1, xzr
 2c08404: aa1f03e2     	mov	x2, xzr
 2c08408: 94bcf87c     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c0840c: 36000080     	tbz	w0, #0x0, 0x2c0841c <__start_il2cpp+0x13fe08>
 2c08410: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c08414: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c08418: d65f03c0     	ret
 2c0841c: f9407e60     	ldr	x0, [x19, #0xf8]
 2c08420: b4000380     	cbz	x0, 0x2c08490 <__start_il2cpp+0x13fe7c>
 2c08424: aa1f03e1     	mov	x1, xzr
 2c08428: 94bcdd4d     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0842c: d001d855     	adrp	x21, 0x6712000
 2c08430: aa0003f4     	mov	x20, x0
 2c08434: 394786a8     	ldrb	w8, [x21, #0x1e1]
 2c08438: 350000c8     	cbnz	w8, 0x2c08450 <__start_il2cpp+0x13fe3c>
 2c0843c: b001b740     	adrp	x0, 0x62f1000
 2c08440: f940dc00     	ldr	x0, [x0, #0x1b8]
 2c08444: 97f73a67     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c08448: 52800028     	mov	w8, #0x1                // =1
 2c0844c: 390786a8     	strb	w8, [x21, #0x1e1]
 2c08450: b001b748     	adrp	x8, 0x62f1000
 2c08454: aa1403e0     	mov	x0, x20
 2c08458: aa1f03e1     	mov	x1, xzr
 2c0845c: f940dd08     	ldr	x8, [x8, #0x1b8]
 2c08460: f9400108     	ldr	x8, [x8]
 2c08464: f9405d08     	ldr	x8, [x8, #0xb8]
 2c08468: 2d418500     	ldp	s0, s1, [x8, #0xc]
 2c0846c: bd401502     	ldr	s2, [x8, #0x14]
 2c08470: f0ff23c8     	adrp	x8, 0x1083000
 2c08474: bd462903     	ldr	s3, [x8, #0x628]
 2c08478: 940bc328     	bl	0x2ef9118 <__start_il2cpp+0x430b04>
 2c0847c: aa1303e0     	mov	x0, x19
 2c08480: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c08484: aa1f03e1     	mov	x1, xzr
 2c08488: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c0848c: 17ffaa57     	b	0x2bf2de8 <__start_il2cpp+0x12a7d4>
 2c08490: 97f73afe     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeStone :: System.Boolean CanMergeWith(BaseItem otherItem)
# VA 0x2c08494 .. 0x2c0859c (next mapped method entry)
 2c08494: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c08498: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c0849c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c084a0: d001d855     	adrp	x21, 0x6712000
 2c084a4: aa0103f3     	mov	x19, x1
 2c084a8: aa0003f4     	mov	x20, x0
 2c084ac: 396f12a8     	ldrb	w8, [x21, #0xbc4]
 2c084b0: 37000128     	tbnz	w8, #0x0, 0x2c084d4 <__start_il2cpp+0x13fec0>
 2c084b4: d001b780     	adrp	x0, 0x62fa000
 2c084b8: f9405000     	ldr	x0, [x0, #0xa0]
 2c084bc: 97f73a49     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c084c0: 9001b7a0     	adrp	x0, 0x62fc000
 2c084c4: f9439800     	ldr	x0, [x0, #0x730]
 2c084c8: 97f73a46     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c084cc: 52800028     	mov	w8, #0x1                // =1
 2c084d0: 392f12a8     	strb	w8, [x21, #0xbc4]
 2c084d4: b4000633     	cbz	x19, 0x2c08598 <__start_il2cpp+0x13ff84>
 2c084d8: f9402a68     	ldr	x8, [x19, #0x50]
 2c084dc: b40005e8     	cbz	x8, 0x2c08598 <__start_il2cpp+0x13ff84>
 2c084e0: f9407a80     	ldr	x0, [x20, #0xf0]
 2c084e4: b40005a0     	cbz	x0, 0x2c08598 <__start_il2cpp+0x13ff84>
 2c084e8: 9001b7a9     	adrp	x9, 0x62fc000
 2c084ec: f9439929     	ldr	x9, [x9, #0x730]
 2c084f0: b9403101     	ldr	w1, [x8, #0x30]
 2c084f4: f9400122     	ldr	x2, [x9]
 2c084f8: 943b19c6     	bl	0x3acec10 <__start_il2cpp+0x10065fc>
 2c084fc: 36000060     	tbz	w0, #0x0, 0x2c08508 <__start_il2cpp+0x13fef4>
 2c08500: 2a1f03e8     	mov	w8, wzr
 2c08504: 14000020     	b	0x2c08584 <__start_il2cpp+0x13ff70>
 2c08508: f9402a88     	ldr	x8, [x20, #0x50]
 2c0850c: b4000468     	cbz	x8, 0x2c08598 <__start_il2cpp+0x13ff84>
 2c08510: f9402a69     	ldr	x9, [x19, #0x50]
 2c08514: b4000429     	cbz	x9, 0x2c08598 <__start_il2cpp+0x13ff84>
 2c08518: d001b78a     	adrp	x10, 0x62fa000
 2c0851c: f940514a     	ldr	x10, [x10, #0xa0]
 2c08520: b9403115     	ldr	w21, [x8, #0x30]
 2c08524: b9403136     	ldr	w22, [x9, #0x30]
 2c08528: f9400140     	ldr	x0, [x10]
 2c0852c: b940e40a     	ldr	w10, [x0, #0xe4]
 2c08530: 3500004a     	cbnz	w10, 0x2c08538 <__start_il2cpp+0x13ff24>
 2c08534: 97f73a8a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c08538: 2a1503e0     	mov	w0, w21
 2c0853c: 2a1603e1     	mov	w1, w22
 2c08540: aa1f03e2     	mov	x2, xzr
 2c08544: 97ffb484     	bl	0x2bf5754 <__start_il2cpp+0x12d140>
 2c08548: 360000e0     	tbz	w0, #0x0, 0x2c08564 <__start_il2cpp+0x13ff50>
 2c0854c: b9404688     	ldr	w8, [x20, #0x44]
 2c08550: b9404669     	ldr	w9, [x19, #0x44]
 2c08554: aa1403f3     	mov	x19, x20
 2c08558: 6b09011f     	cmp	w8, w9
 2c0855c: 54fffd21     	b.ne	0x2c08500 <__start_il2cpp+0x13feec>
 2c08560: 14000005     	b	0x2c08574 <__start_il2cpp+0x13ff60>
 2c08564: aa1403e0     	mov	x0, x20
 2c08568: aa1f03e1     	mov	x1, xzr
 2c0856c: 97ffab82     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2c08570: 3607fc80     	tbz	w0, #0x0, 0x2c08500 <__start_il2cpp+0x13feec>
 2c08574: aa1303e0     	mov	x0, x19
 2c08578: aa1f03e1     	mov	x1, xzr
 2c0857c: 97ffab7e     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2c08580: 52000008     	eor	w8, w0, #0x1
 2c08584: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c08588: 12000100     	and	w0, w8, #0x1
 2c0858c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c08590: f84307fe     	ldr	x30, [sp], #0x30
 2c08594: d65f03c0     	ret
 2c08598: 97f73abc     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeStone :: Cysharp.Threading.Tasks.UniTask`1<BaseItem> OnMerged(BaseItem otherItem = null)
# VA 0x2c0859c .. 0x2c086a4 (next mapped method entry)
 2c0859c: d102c3ff     	sub	sp, sp, #0xb0
 2c085a0: f9003bfe     	str	x30, [sp, #0x70]
 2c085a4: a9085ff8     	stp	x24, x23, [sp, #0x80]
 2c085a8: a90957f6     	stp	x22, x21, [sp, #0x90]
 2c085ac: a90a4ff4     	stp	x20, x19, [sp, #0xa0]
 2c085b0: d001d857     	adrp	x23, 0x6712000
 2c085b4: 9001b7b6     	adrp	x22, 0x62fc000
 2c085b8: aa0103f4     	mov	x20, x1
 2c085bc: 396f16e9     	ldrb	w9, [x23, #0xbc5]
 2c085c0: f947e2d6     	ldr	x22, [x22, #0xfc0]
 2c085c4: aa0003f5     	mov	x21, x0
 2c085c8: aa0803f3     	mov	x19, x8
 2c085cc: 37000189     	tbnz	w9, #0x0, 0x2c085fc <__start_il2cpp+0x13ffe8>
 2c085d0: 9001b7a0     	adrp	x0, 0x62fc000
 2c085d4: f942e000     	ldr	x0, [x0, #0x5c0]
 2c085d8: 97f73a02     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c085dc: 9001b7a0     	adrp	x0, 0x62fc000
 2c085e0: f947e000     	ldr	x0, [x0, #0xfc0]
 2c085e4: 97f739ff     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c085e8: 9001b7a0     	adrp	x0, 0x62fc000
 2c085ec: f942e400     	ldr	x0, [x0, #0x5c8]
 2c085f0: 97f739fc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c085f4: 52800028     	mov	w8, #0x1                // =1
 2c085f8: 392f16e8     	strb	w8, [x23, #0xbc5]
 2c085fc: 6f00e400     	movi	v0.2d, #0000000000000000
 2c08600: 9001b7b8     	adrp	x24, 0x62fc000
 2c08604: 910083f7     	add	x23, sp, #0x20
 2c08608: b27d02e0     	orr	x0, x23, #0x8
 2c0860c: aa1f03e1     	mov	x1, xzr
 2c08610: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2c08614: ad0283e0     	stp	q0, q0, [sp, #0x50]
 2c08618: 3d8013e0     	str	q0, [sp, #0x40]
 2c0861c: f9001fff     	str	xzr, [sp, #0x38]
 2c08620: f942e718     	ldr	x24, [x24, #0x5c8]
 2c08624: a902ffff     	stp	xzr, xzr, [sp, #0x28]
 2c08628: 97f739d9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0862c: 9100a2e0     	add	x0, x23, #0x28
 2c08630: aa1503e1     	mov	x1, x21
 2c08634: f90027f5     	str	x21, [sp, #0x48]
 2c08638: 97f739d5     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0863c: 910082e0     	add	x0, x23, #0x20
 2c08640: aa1403e1     	mov	x1, x20
 2c08644: f90023f4     	str	x20, [sp, #0x40]
 2c08648: 97f739d1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0864c: f94002c0     	ldr	x0, [x22]
 2c08650: 12800009     	mov	w9, #-0x1               // =-1
 2c08654: b90023e9     	str	w9, [sp, #0x20]
 2c08658: f9401c08     	ldr	x8, [x0, #0x38]
 2c0865c: b5000048     	cbnz	x8, 0x2c08664 <__start_il2cpp+0x140050>
 2c08660: 97f81689     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c08664: 910083e0     	add	x0, sp, #0x20
 2c08668: 9400003e     	bl	0x2c08760 <__start_il2cpp+0x14014c>
 2c0866c: f9400301     	ldr	x1, [x24]
 2c08670: 910023e8     	add	x8, sp, #0x8
 2c08674: b27d02e0     	orr	x0, x23, #0x8
 2c08678: 97fe4f2b     	bl	0x2b9c324 <__start_il2cpp+0xd3d10>
 2c0867c: 3cc083e0     	ldur	q0, [sp, #0x8]
 2c08680: f9400fe8     	ldr	x8, [sp, #0x18]
 2c08684: f9403bfe     	ldr	x30, [sp, #0x70]
 2c08688: a94957f6     	ldp	x22, x21, [sp, #0x90]
 2c0868c: 3d800260     	str	q0, [x19]
 2c08690: a9485ff8     	ldp	x24, x23, [sp, #0x80]
 2c08694: f9000a68     	str	x8, [x19, #0x10]
 2c08698: a94a4ff4     	ldp	x20, x19, [sp, #0xa0]
 2c0869c: 9102c3ff     	add	sp, sp, #0xb0
 2c086a0: d65f03c0     	ret

# MergeStone :: System.Void .ctor()
# VA 0x2c086a4 .. 0x2c0872c (next mapped method entry)
 2c086a4: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c086a8: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c086ac: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c086b0: d001d855     	adrp	x21, 0x6712000
 2c086b4: b001b756     	adrp	x22, 0x62f1000
 2c086b8: b001b754     	adrp	x20, 0x62f1000
 2c086bc: 396f1aa8     	ldrb	w8, [x21, #0xbc6]
 2c086c0: f94102d6     	ldr	x22, [x22, #0x200]
 2c086c4: f940fa94     	ldr	x20, [x20, #0x1f0]
 2c086c8: aa0003f3     	mov	x19, x0
 2c086cc: 37000128     	tbnz	w8, #0x0, 0x2c086f0 <__start_il2cpp+0x1400dc>
 2c086d0: b001b740     	adrp	x0, 0x62f1000
 2c086d4: f940f800     	ldr	x0, [x0, #0x1f0]
 2c086d8: 97f739c2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c086dc: b001b740     	adrp	x0, 0x62f1000
 2c086e0: f9410000     	ldr	x0, [x0, #0x200]
 2c086e4: 97f739bf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c086e8: 52800028     	mov	w8, #0x1                // =1
 2c086ec: 392f1aa8     	strb	w8, [x21, #0xbc6]
 2c086f0: f94002c0     	ldr	x0, [x22]
 2c086f4: 97f73a61     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c086f8: f9400281     	ldr	x1, [x20]
 2c086fc: aa0003f4     	mov	x20, x0
 2c08700: 943b1640     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2c08704: aa1303e0     	mov	x0, x19
 2c08708: aa1403e1     	mov	x1, x20
 2c0870c: f80f0c14     	str	x20, [x0, #0xf0]!
 2c08710: 97f7399f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c08714: aa1303e0     	mov	x0, x19
 2c08718: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0871c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c08720: aa1f03e1     	mov	x1, xzr
 2c08724: f84307fe     	ldr	x30, [sp], #0x30
 2c08728: 17ffb706     	b	0x2bf6340 <__start_il2cpp+0x12dd2c>

# MergeStone :: Cysharp.Threading.Tasks.UniTask`1<BaseItem> <>n__0(BaseItem otherItem)
# VA 0x2c0872c .. 0x2c08760 (next mapped method entry)
 2c0872c: d100c3ff     	sub	sp, sp, #0x30
 2c08730: a9024ffe     	stp	x30, x19, [sp, #0x20]
 2c08734: aa0803f3     	mov	x19, x8
 2c08738: 910023e8     	add	x8, sp, #0x8
 2c0873c: aa1f03e2     	mov	x2, xzr
 2c08740: 97ffb6cd     	bl	0x2bf6274 <__start_il2cpp+0x12dc60>
 2c08744: 3cc083e0     	ldur	q0, [sp, #0x8]
 2c08748: f9400fe8     	ldr	x8, [sp, #0x18]
 2c0874c: 3d800260     	str	q0, [x19]
 2c08750: f9000a68     	str	x8, [x19, #0x10]
 2c08754: a9424ffe     	ldp	x30, x19, [sp, #0x20]
 2c08758: 9100c3ff     	add	sp, sp, #0x30
 2c0875c: d65f03c0     	ret
