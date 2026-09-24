
# MergeFeverEventDataPiece :: System.Int32 get_lastMergeCount()
# VA 0x2b50094 .. 0x2b500ac (next mapped method entry)
 2b50094: f9401408     	ldr	x8, [x0, #0x28]
 2b50098: b4000068     	cbz	x8, 0x2b500a4 <__start_il2cpp+0x87a90>
 2b5009c: b9401500     	ldr	w0, [x8, #0x14]
 2b500a0: d65f03c0     	ret
 2b500a4: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b500a8: 97fa1bf8     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Int64 get_doubleMergeActivateTime()
# VA 0x2b500ac .. 0x2b500c4 (next mapped method entry)
 2b500ac: f9401408     	ldr	x8, [x0, #0x28]
 2b500b0: b4000068     	cbz	x8, 0x2b500bc <__start_il2cpp+0x87aa8>
 2b500b4: f9401100     	ldr	x0, [x8, #0x20]
 2b500b8: d65f03c0     	ret
 2b500bc: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b500c0: 97fa1bf2     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Int32 get_doubleMergeLifeTime()
# VA 0x2b500c4 .. 0x2b500dc (next mapped method entry)
 2b500c4: f9401408     	ldr	x8, [x0, #0x28]
 2b500c8: b4000068     	cbz	x8, 0x2b500d4 <__start_il2cpp+0x87ac0>
 2b500cc: b9402900     	ldr	w0, [x8, #0x28]
 2b500d0: d65f03c0     	ret
 2b500d4: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b500d8: 97fa1bec     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Int32 get_doubleMergeIncrementValue()
# VA 0x2b500dc .. 0x2b500f4 (next mapped method entry)
 2b500dc: f9401408     	ldr	x8, [x0, #0x28]
 2b500e0: b4000068     	cbz	x8, 0x2b500ec <__start_il2cpp+0x87ad8>
 2b500e4: b9401d00     	ldr	w0, [x8, #0x1c]
 2b500e8: d65f03c0     	ret
 2b500ec: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b500f0: 97fa1be6     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Int32 get_levelIndex()
# VA 0x2b500f4 .. 0x2b5010c (next mapped method entry)
 2b500f4: f9401408     	ldr	x8, [x0, #0x28]
 2b500f8: b4000068     	cbz	x8, 0x2b50104 <__start_il2cpp+0x87af0>
 2b500fc: b9401900     	ldr	w0, [x8, #0x18]
 2b50100: d65f03c0     	ret
 2b50104: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b50108: 97fa1be0     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Int32 get_currentMergeCount()
# VA 0x2b5010c .. 0x2b50124 (next mapped method entry)
 2b5010c: f9401408     	ldr	x8, [x0, #0x28]
 2b50110: b4000068     	cbz	x8, 0x2b5011c <__start_il2cpp+0x87b08>
 2b50114: b9401100     	ldr	w0, [x8, #0x10]
 2b50118: d65f03c0     	ret
 2b5011c: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b50120: 97fa1bda     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.String get_lastFeverId()
# VA 0x2b50124 .. 0x2b5013c (next mapped method entry)
 2b50124: f9401408     	ldr	x8, [x0, #0x28]
 2b50128: b4000068     	cbz	x8, 0x2b50134 <__start_il2cpp+0x87b20>
 2b5012c: f9401900     	ldr	x0, [x8, #0x30]
 2b50130: d65f03c0     	ret
 2b50134: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b50138: 97fa1bd4     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Void Init(System.String eventName)
# VA 0x2b5013c .. 0x2b501c8 (next mapped method entry)
 2b5013c: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b50140: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b50144: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b50148: d001de16     	adrp	x22, 0x6712000
 2b5014c: d001bd35     	adrp	x21, 0x62f6000
 2b50150: aa0103f4     	mov	x20, x1
 2b50154: 39593ac8     	ldrb	w8, [x22, #0x64e]
 2b50158: f94142b5     	ldr	x21, [x21, #0x280]
 2b5015c: aa0003f3     	mov	x19, x0
 2b50160: 370000c8     	tbnz	w8, #0x0, 0x2b50178 <__start_il2cpp+0x87b64>
 2b50164: d001bd20     	adrp	x0, 0x62f6000
 2b50168: f9414000     	ldr	x0, [x0, #0x280]
 2b5016c: 97fa1b1d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50170: 52800028     	mov	w8, #0x1                // =1
 2b50174: 39193ac8     	strb	w8, [x22, #0x64e]
 2b50178: aa1303e0     	mov	x0, x19
 2b5017c: aa1403e1     	mov	x1, x20
 2b50180: f8030c14     	str	x20, [x0, #0x30]!
 2b50184: 97fa1b02     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50188: f94002a0     	ldr	x0, [x21]
 2b5018c: aa1403e1     	mov	x1, x20
 2b50190: aa1f03e2     	mov	x2, xzr
 2b50194: 94906303     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2b50198: aa0003e1     	mov	x1, x0
 2b5019c: aa1303e0     	mov	x0, x19
 2b501a0: f8038c01     	str	x1, [x0, #0x38]!
 2b501a4: 97fa1afa     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b501a8: aa1303e0     	mov	x0, x19
 2b501ac: 94000007     	bl	0x2b501c8 <__start_il2cpp+0x87bb4>
 2b501b0: 52800028     	mov	w8, #0x1                // =1
 2b501b4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b501b8: 39010268     	strb	w8, [x19, #0x40]
 2b501bc: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b501c0: f84307fe     	ldr	x30, [sp], #0x30
 2b501c4: d65f03c0     	ret

# MergeFeverEventDataPiece :: System.Void LoadSave()
# VA 0x2b501c8 .. 0x2b50284 (next mapped method entry)
 2b501c8: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b501cc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b501d0: d001de14     	adrp	x20, 0x6712000
 2b501d4: f001bd15     	adrp	x21, 0x62f3000
 2b501d8: aa0003f3     	mov	x19, x0
 2b501dc: 39594a88     	ldrb	w8, [x20, #0x652]
 2b501e0: f946b6b5     	ldr	x21, [x21, #0xd68]
 2b501e4: 37000128     	tbnz	w8, #0x0, 0x2b50208 <__start_il2cpp+0x87bf4>
 2b501e8: d001bd20     	adrp	x0, 0x62f6000
 2b501ec: f9411800     	ldr	x0, [x0, #0x230]
 2b501f0: 97fa1afc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b501f4: f001bd00     	adrp	x0, 0x62f3000
 2b501f8: f946b400     	ldr	x0, [x0, #0xd68]
 2b501fc: 97fa1af9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50200: 52800028     	mov	w8, #0x1                // =1
 2b50204: 39194a88     	strb	w8, [x20, #0x652]
 2b50208: f94002a0     	ldr	x0, [x21]
 2b5020c: f9401e74     	ldr	x20, [x19, #0x38]
 2b50210: b940e408     	ldr	w8, [x0, #0xe4]
 2b50214: 35000048     	cbnz	w8, 0x2b5021c <__start_il2cpp+0x87c08>
 2b50218: 97fa1b51     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b5021c: aa1403e0     	mov	x0, x20
 2b50220: aa1f03e1     	mov	x1, xzr
 2b50224: 97ff77a8     	bl	0x2b2e0c4 <__start_il2cpp+0x65ab0>
 2b50228: 36000260     	tbz	w0, #0x0, 0x2b50274 <__start_il2cpp+0x87c60>
 2b5022c: f94002a0     	ldr	x0, [x21]
 2b50230: d001bd35     	adrp	x21, 0x62f6000
 2b50234: b940e408     	ldr	w8, [x0, #0xe4]
 2b50238: f9411ab5     	ldr	x21, [x21, #0x230]
 2b5023c: f9401e74     	ldr	x20, [x19, #0x38]
 2b50240: 35000048     	cbnz	w8, 0x2b50248 <__start_il2cpp+0x87c34>
 2b50244: 97fa1b46     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b50248: f94002a3     	ldr	x3, [x21]
 2b5024c: aa1403e0     	mov	x0, x20
 2b50250: 2a1f03e1     	mov	w1, wzr
 2b50254: 2a1f03e2     	mov	w2, wzr
 2b50258: 9421cd76     	bl	0x33c3830 <__start_il2cpp+0x8fb21c>
 2b5025c: f8028e60     	str	x0, [x19, #0x28]!
 2b50260: aa0003e1     	mov	x1, x0
 2b50264: aa1303e0     	mov	x0, x19
 2b50268: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b5026c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b50270: 17fa1ac7     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2b50274: aa1303e0     	mov	x0, x19
 2b50278: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b5027c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b50280: 140000d8     	b	0x2b505e0 <__start_il2cpp+0x87fcc>

# MergeFeverEventDataPiece :: System.Boolean get_isPopupShown()
# VA 0x2b50284 .. 0x2b50324 (next mapped method entry)
 2b50284: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b50288: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b5028c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b50290: d001de16     	adrp	x22, 0x6712000
 2b50294: d001bd35     	adrp	x21, 0x62f6000
 2b50298: f001bd14     	adrp	x20, 0x62f3000
 2b5029c: 39593ec8     	ldrb	w8, [x22, #0x64f]
 2b502a0: f9410eb5     	ldr	x21, [x21, #0x218]
 2b502a4: f946b694     	ldr	x20, [x20, #0xd68]
 2b502a8: aa0003f3     	mov	x19, x0
 2b502ac: 37000128     	tbnz	w8, #0x0, 0x2b502d0 <__start_il2cpp+0x87cbc>
 2b502b0: f001bd00     	adrp	x0, 0x62f3000
 2b502b4: f946b400     	ldr	x0, [x0, #0xd68]
 2b502b8: 97fa1aca     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b502bc: d001bd20     	adrp	x0, 0x62f6000
 2b502c0: f9410c00     	ldr	x0, [x0, #0x218]
 2b502c4: 97fa1ac7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b502c8: 52800028     	mov	w8, #0x1                // =1
 2b502cc: 39193ec8     	strb	w8, [x22, #0x64f]
 2b502d0: f9401a61     	ldr	x1, [x19, #0x30]
 2b502d4: f94002a0     	ldr	x0, [x21]
 2b502d8: aa1f03e2     	mov	x2, xzr
 2b502dc: 949062b1     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2b502e0: f9400288     	ldr	x8, [x20]
 2b502e4: aa0003f3     	mov	x19, x0
 2b502e8: b940e509     	ldr	w9, [x8, #0xe4]
 2b502ec: 35000069     	cbnz	w9, 0x2b502f8 <__start_il2cpp+0x87ce4>
 2b502f0: aa0803e0     	mov	x0, x8
 2b502f4: 97fa1b1a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b502f8: aa1303e0     	mov	x0, x19
 2b502fc: 52800021     	mov	w1, #0x1                // =1
 2b50300: 2a1f03e2     	mov	w2, wzr
 2b50304: aa1f03e3     	mov	x3, xzr
 2b50308: 97ff748f     	bl	0x2b2d544 <__start_il2cpp+0x64f30>
 2b5030c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b50310: 7100041f     	cmp	w0, #0x1
 2b50314: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b50318: 1a9f17e0     	cset	w0, eq
 2b5031c: f84307fe     	ldr	x30, [sp], #0x30
 2b50320: d65f03c0     	ret

# MergeFeverEventDataPiece :: System.Void set_isPopupShown(System.Boolean value)
# VA 0x2b50324 .. 0x2b503bc (next mapped method entry)
 2b50324: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2b50328: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b5032c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b50330: d001de17     	adrp	x23, 0x6712000
 2b50334: d001bd36     	adrp	x22, 0x62f6000
 2b50338: f001bd15     	adrp	x21, 0x62f3000
 2b5033c: 395942e8     	ldrb	w8, [x23, #0x650]
 2b50340: f9410ed6     	ldr	x22, [x22, #0x218]
 2b50344: f946b6b5     	ldr	x21, [x21, #0xd68]
 2b50348: 2a0103f3     	mov	w19, w1
 2b5034c: aa0003f4     	mov	x20, x0
 2b50350: 37000128     	tbnz	w8, #0x0, 0x2b50374 <__start_il2cpp+0x87d60>
 2b50354: f001bd00     	adrp	x0, 0x62f3000
 2b50358: f946b400     	ldr	x0, [x0, #0xd68]
 2b5035c: 97fa1aa1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50360: d001bd20     	adrp	x0, 0x62f6000
 2b50364: f9410c00     	ldr	x0, [x0, #0x218]
 2b50368: 97fa1a9e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b5036c: 52800028     	mov	w8, #0x1                // =1
 2b50370: 391942e8     	strb	w8, [x23, #0x650]
 2b50374: f9401a81     	ldr	x1, [x20, #0x30]
 2b50378: f94002c0     	ldr	x0, [x22]
 2b5037c: aa1f03e2     	mov	x2, xzr
 2b50380: 94906288     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2b50384: f94002a8     	ldr	x8, [x21]
 2b50388: aa0003f4     	mov	x20, x0
 2b5038c: b940e509     	ldr	w9, [x8, #0xe4]
 2b50390: 35000069     	cbnz	w9, 0x2b5039c <__start_il2cpp+0x87d88>
 2b50394: aa0803e0     	mov	x0, x8
 2b50398: 97fa1af1     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b5039c: 12000261     	and	w1, w19, #0x1
 2b503a0: aa1403e0     	mov	x0, x20
 2b503a4: 52800022     	mov	w2, #0x1                // =1
 2b503a8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b503ac: aa1f03e3     	mov	x3, xzr
 2b503b0: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b503b4: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2b503b8: 17ff75f9     	b	0x2b2db9c <__start_il2cpp+0x65588>

# MergeFeverEventDataPiece :: System.Void SetLastFeverId(System.String id)
# VA 0x2b503bc .. 0x2b50400 (next mapped method entry)
 2b503bc: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b503c0: aa0003f3     	mov	x19, x0
 2b503c4: f9401400     	ldr	x0, [x0, #0x28]
 2b503c8: b40001a0     	cbz	x0, 0x2b503fc <__start_il2cpp+0x87de8>
 2b503cc: f8030c01     	str	x1, [x0, #0x30]!
 2b503d0: 97fa1a6f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b503d4: f9400268     	ldr	x8, [x19]
 2b503d8: aa1303e0     	mov	x0, x19
 2b503dc: f9412d09     	ldr	x9, [x8, #0x258]
 2b503e0: f9413101     	ldr	x1, [x8, #0x260]
 2b503e4: d63f0120     	blr	x9
 2b503e8: aa1303e0     	mov	x0, x19
 2b503ec: 52800021     	mov	w1, #0x1                // =1
 2b503f0: aa1f03e2     	mov	x2, xzr
 2b503f4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b503f8: 140e41d3     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b503fc: 97fa1b23     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Void SetLastMergeCount(System.Int32 lastMergeCount)
# VA 0x2b50400 .. 0x2b5043c (next mapped method entry)
 2b50400: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b50404: f9401408     	ldr	x8, [x0, #0x28]
 2b50408: b4000188     	cbz	x8, 0x2b50438 <__start_il2cpp+0x87e24>
 2b5040c: b9001501     	str	w1, [x8, #0x14]
 2b50410: aa0003f3     	mov	x19, x0
 2b50414: f9400008     	ldr	x8, [x0]
 2b50418: f9412d09     	ldr	x9, [x8, #0x258]
 2b5041c: f9413101     	ldr	x1, [x8, #0x260]
 2b50420: d63f0120     	blr	x9
 2b50424: aa1303e0     	mov	x0, x19
 2b50428: 52800021     	mov	w1, #0x1                // =1
 2b5042c: aa1f03e2     	mov	x2, xzr
 2b50430: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50434: 140e41c4     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50438: 97fa1b14     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Void SetDoubleMergeActivateTime(System.Int64 time)
# VA 0x2b5043c .. 0x2b50478 (next mapped method entry)
 2b5043c: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b50440: f9401408     	ldr	x8, [x0, #0x28]
 2b50444: b4000188     	cbz	x8, 0x2b50474 <__start_il2cpp+0x87e60>
 2b50448: f9001101     	str	x1, [x8, #0x20]
 2b5044c: aa0003f3     	mov	x19, x0
 2b50450: f9400008     	ldr	x8, [x0]
 2b50454: f9412d09     	ldr	x9, [x8, #0x258]
 2b50458: f9413101     	ldr	x1, [x8, #0x260]
 2b5045c: d63f0120     	blr	x9
 2b50460: aa1303e0     	mov	x0, x19
 2b50464: 52800021     	mov	w1, #0x1                // =1
 2b50468: aa1f03e2     	mov	x2, xzr
 2b5046c: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50470: 140e41b5     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50474: 97fa1b05     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Void SetDoubleMergeLifeTime(System.Int32 time)
# VA 0x2b50478 .. 0x2b504b4 (next mapped method entry)
 2b50478: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b5047c: f9401408     	ldr	x8, [x0, #0x28]
 2b50480: b4000188     	cbz	x8, 0x2b504b0 <__start_il2cpp+0x87e9c>
 2b50484: b9002901     	str	w1, [x8, #0x28]
 2b50488: aa0003f3     	mov	x19, x0
 2b5048c: f9400008     	ldr	x8, [x0]
 2b50490: f9412d09     	ldr	x9, [x8, #0x258]
 2b50494: f9413101     	ldr	x1, [x8, #0x260]
 2b50498: d63f0120     	blr	x9
 2b5049c: aa1303e0     	mov	x0, x19
 2b504a0: 52800021     	mov	w1, #0x1                // =1
 2b504a4: aa1f03e2     	mov	x2, xzr
 2b504a8: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b504ac: 140e41a6     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b504b0: 97fa1af6     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Void SetDoubleMergeIncrementValue(System.Int32 val)
# VA 0x2b504b4 .. 0x2b504f0 (next mapped method entry)
 2b504b4: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b504b8: f9401408     	ldr	x8, [x0, #0x28]
 2b504bc: b4000188     	cbz	x8, 0x2b504ec <__start_il2cpp+0x87ed8>
 2b504c0: b9001d01     	str	w1, [x8, #0x1c]
 2b504c4: aa0003f3     	mov	x19, x0
 2b504c8: f9400008     	ldr	x8, [x0]
 2b504cc: f9412d09     	ldr	x9, [x8, #0x258]
 2b504d0: f9413101     	ldr	x1, [x8, #0x260]
 2b504d4: d63f0120     	blr	x9
 2b504d8: aa1303e0     	mov	x0, x19
 2b504dc: 52800021     	mov	w1, #0x1                // =1
 2b504e0: aa1f03e2     	mov	x2, xzr
 2b504e4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b504e8: 140e4197     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b504ec: 97fa1ae7     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Void SetLevelIndex(System.Int32 index)
# VA 0x2b504f0 .. 0x2b5052c (next mapped method entry)
 2b504f0: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b504f4: f9401408     	ldr	x8, [x0, #0x28]
 2b504f8: b4000188     	cbz	x8, 0x2b50528 <__start_il2cpp+0x87f14>
 2b504fc: b9001901     	str	w1, [x8, #0x18]
 2b50500: aa0003f3     	mov	x19, x0
 2b50504: f9400008     	ldr	x8, [x0]
 2b50508: f9412d09     	ldr	x9, [x8, #0x258]
 2b5050c: f9413101     	ldr	x1, [x8, #0x260]
 2b50510: d63f0120     	blr	x9
 2b50514: aa1303e0     	mov	x0, x19
 2b50518: 52800021     	mov	w1, #0x1                // =1
 2b5051c: aa1f03e2     	mov	x2, xzr
 2b50520: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50524: 140e4188     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50528: 97fa1ad8     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Void IncrementLevelIndex()
# VA 0x2b5052c .. 0x2b50548 (next mapped method entry)
 2b5052c: f9401408     	ldr	x8, [x0, #0x28]
 2b50530: b4000088     	cbz	x8, 0x2b50540 <__start_il2cpp+0x87f2c>
 2b50534: b9401908     	ldr	w8, [x8, #0x18]
 2b50538: 11000501     	add	w1, w8, #0x1
 2b5053c: 17ffffed     	b	0x2b504f0 <__start_il2cpp+0x87edc>
 2b50540: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b50544: 97fa1ad1     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Void AddCurrentMergeCount(System.Int32 mergeCount)
# VA 0x2b50548 .. 0x2b5058c (next mapped method entry)
 2b50548: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b5054c: f9401408     	ldr	x8, [x0, #0x28]
 2b50550: b40001c8     	cbz	x8, 0x2b50588 <__start_il2cpp+0x87f74>
 2b50554: b9401109     	ldr	w9, [x8, #0x10]
 2b50558: aa0003f3     	mov	x19, x0
 2b5055c: 0b010129     	add	w9, w9, w1
 2b50560: b9001109     	str	w9, [x8, #0x10]
 2b50564: f9400008     	ldr	x8, [x0]
 2b50568: f9412d09     	ldr	x9, [x8, #0x258]
 2b5056c: f9413101     	ldr	x1, [x8, #0x260]
 2b50570: d63f0120     	blr	x9
 2b50574: aa1303e0     	mov	x0, x19
 2b50578: 52800021     	mov	w1, #0x1                // =1
 2b5057c: aa1f03e2     	mov	x2, xzr
 2b50580: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50584: 140e4170     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50588: 97fa1ac0     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.String GetKey()
# VA 0x2b5058c .. 0x2b505d8 (next mapped method entry)
 2b5058c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b50590: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b50594: d001de15     	adrp	x21, 0x6712000
 2b50598: d001bd34     	adrp	x20, 0x62f6000
 2b5059c: aa0003f3     	mov	x19, x0
 2b505a0: 395946a8     	ldrb	w8, [x21, #0x651]
 2b505a4: f9411294     	ldr	x20, [x20, #0x220]
 2b505a8: 370000c8     	tbnz	w8, #0x0, 0x2b505c0 <__start_il2cpp+0x87fac>
 2b505ac: d001bd20     	adrp	x0, 0x62f6000
 2b505b0: f9411000     	ldr	x0, [x0, #0x220]
 2b505b4: 97fa1a0b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b505b8: 52800028     	mov	w8, #0x1                // =1
 2b505bc: 391946a8     	strb	w8, [x21, #0x651]
 2b505c0: f9401a61     	ldr	x1, [x19, #0x30]
 2b505c4: f9400280     	ldr	x0, [x20]
 2b505c8: aa1f03e2     	mov	x2, xzr
 2b505cc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b505d0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b505d4: 149061f3     	b	0x4f68da0 <__start_il2cpp+0x24a078c>

# MergeFeverEventDataPiece :: System.Boolean TryDeserializeFromLocal(System.Boolean createInitialValuesIfNotExist = False)
# VA 0x2b505d8 .. 0x2b505e0 (next mapped method entry)
 2b505d8: 52800020     	mov	w0, #0x1                // =1
 2b505dc: d65f03c0     	ret

# MergeFeverEventDataPiece :: System.Void ResetPlayerData()
# VA 0x2b505e0 .. 0x2b5067c (next mapped method entry)
 2b505e0: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b505e4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b505e8: d001de14     	adrp	x20, 0x6712000
 2b505ec: d001bd35     	adrp	x21, 0x62f6000
 2b505f0: aa0003f3     	mov	x19, x0
 2b505f4: 39594e88     	ldrb	w8, [x20, #0x653]
 2b505f8: f94116b5     	ldr	x21, [x21, #0x228]
 2b505fc: 370000c8     	tbnz	w8, #0x0, 0x2b50614 <__start_il2cpp+0x88000>
 2b50600: d001bd20     	adrp	x0, 0x62f6000
 2b50604: f9411400     	ldr	x0, [x0, #0x228]
 2b50608: 97fa19f6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b5060c: 52800028     	mov	w8, #0x1                // =1
 2b50610: 39194e88     	strb	w8, [x20, #0x653]
 2b50614: f94002a0     	ldr	x0, [x21]
 2b50618: 97fa1a98     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b5061c: aa1f03e1     	mov	x1, xzr
 2b50620: aa0003f4     	mov	x20, x0
 2b50624: 940c25e7     	bl	0x2e59dc0 <__start_il2cpp+0x3917ac>
 2b50628: b4000294     	cbz	x20, 0x2b50678 <__start_il2cpp+0x88064>
 2b5062c: d2c00028     	mov	x8, #0x100000000        // =4294967296
 2b50630: aa1303e0     	mov	x0, x19
 2b50634: aa1403e1     	mov	x1, x20
 2b50638: a901229f     	stp	xzr, x8, [x20, #0x10]
 2b5063c: f900129f     	str	xzr, [x20, #0x20]
 2b50640: b9002a9f     	str	wzr, [x20, #0x28]
 2b50644: f8028c14     	str	x20, [x0, #0x28]!
 2b50648: 97fa19d1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b5064c: f9400268     	ldr	x8, [x19]
 2b50650: aa1303e0     	mov	x0, x19
 2b50654: f9412d09     	ldr	x9, [x8, #0x258]
 2b50658: f9413101     	ldr	x1, [x8, #0x260]
 2b5065c: d63f0120     	blr	x9
 2b50660: aa1303e0     	mov	x0, x19
 2b50664: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b50668: 52800021     	mov	w1, #0x1                // =1
 2b5066c: aa1f03e2     	mov	x2, xzr
 2b50670: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b50674: 140e4134     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50678: 97fa1a84     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventDataPiece :: System.Void DeleteLocalData()
# VA 0x2b5067c .. 0x2b50718 (next mapped method entry)
 2b5067c: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b50680: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b50684: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b50688: d001de14     	adrp	x20, 0x6712000
 2b5068c: d001bd36     	adrp	x22, 0x62f6000
 2b50690: f001bd15     	adrp	x21, 0x62f3000
 2b50694: 39595288     	ldrb	w8, [x20, #0x654]
 2b50698: f94116d6     	ldr	x22, [x22, #0x228]
 2b5069c: f946b6b5     	ldr	x21, [x21, #0xd68]
 2b506a0: aa0003f3     	mov	x19, x0
 2b506a4: 37000128     	tbnz	w8, #0x0, 0x2b506c8 <__start_il2cpp+0x880b4>
 2b506a8: d001bd20     	adrp	x0, 0x62f6000
 2b506ac: f9411400     	ldr	x0, [x0, #0x228]
 2b506b0: 97fa19cc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b506b4: f001bd00     	adrp	x0, 0x62f3000
 2b506b8: f946b400     	ldr	x0, [x0, #0xd68]
 2b506bc: 97fa19c9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b506c0: 52800028     	mov	w8, #0x1                // =1
 2b506c4: 39195288     	strb	w8, [x20, #0x654]
 2b506c8: f94002c0     	ldr	x0, [x22]
 2b506cc: 97fa1a6b     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b506d0: aa1f03e1     	mov	x1, xzr
 2b506d4: aa0003f4     	mov	x20, x0
 2b506d8: 940c25ba     	bl	0x2e59dc0 <__start_il2cpp+0x3917ac>
 2b506dc: f8028e74     	str	x20, [x19, #0x28]!
 2b506e0: aa1303e0     	mov	x0, x19
 2b506e4: aa1403e1     	mov	x1, x20
 2b506e8: 97fa19a9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b506ec: f94002a0     	ldr	x0, [x21]
 2b506f0: f9400a73     	ldr	x19, [x19, #0x10]
 2b506f4: b940e408     	ldr	w8, [x0, #0xe4]
 2b506f8: 35000048     	cbnz	w8, 0x2b50700 <__start_il2cpp+0x880ec>
 2b506fc: 97fa1a18     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b50700: aa1303e0     	mov	x0, x19
 2b50704: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b50708: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b5070c: aa1f03e1     	mov	x1, xzr
 2b50710: f84307fe     	ldr	x30, [sp], #0x30
 2b50714: 17ff76b2     	b	0x2b2e1dc <__start_il2cpp+0x65bc8>

# MergeFeverEventDataPiece :: System.Void SerializeToLocal()
# VA 0x2b50718 .. 0x2b507a8 (next mapped method entry)
 2b50718: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b5071c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b50720: d001de14     	adrp	x20, 0x6712000
 2b50724: aa0003f3     	mov	x19, x0
 2b50728: 39595688     	ldrb	w8, [x20, #0x655]
 2b5072c: 37000128     	tbnz	w8, #0x0, 0x2b50750 <__start_il2cpp+0x8813c>
 2b50730: d001bd20     	adrp	x0, 0x62f6000
 2b50734: f9413c00     	ldr	x0, [x0, #0x278]
 2b50738: 97fa19aa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b5073c: f001bd00     	adrp	x0, 0x62f3000
 2b50740: f946b400     	ldr	x0, [x0, #0xd68]
 2b50744: 97fa19a7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50748: 52800028     	mov	w8, #0x1                // =1
 2b5074c: 39195688     	strb	w8, [x20, #0x655]
 2b50750: 39410268     	ldrb	w8, [x19, #0x40]
 2b50754: 34000248     	cbz	w8, 0x2b5079c <__start_il2cpp+0x88188>
 2b50758: f001bd08     	adrp	x8, 0x62f3000
 2b5075c: d001bd35     	adrp	x21, 0x62f6000
 2b50760: f946b508     	ldr	x8, [x8, #0xd68]
 2b50764: f9400100     	ldr	x0, [x8]
 2b50768: f9413eb5     	ldr	x21, [x21, #0x278]
 2b5076c: f9401e74     	ldr	x20, [x19, #0x38]
 2b50770: f9401673     	ldr	x19, [x19, #0x28]
 2b50774: b940e408     	ldr	w8, [x0, #0xe4]
 2b50778: 35000048     	cbnz	w8, 0x2b50780 <__start_il2cpp+0x8816c>
 2b5077c: 97fa19f8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b50780: aa1403e0     	mov	x0, x20
 2b50784: aa1303e1     	mov	x1, x19
 2b50788: f94002a3     	ldr	x3, [x21]
 2b5078c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b50790: 2a1f03e2     	mov	w2, wzr
 2b50794: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b50798: 1421cd39     	b	0x33c3c7c <__start_il2cpp+0x8fb668>
 2b5079c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b507a0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b507a4: d65f03c0     	ret

# MergeFeverEventDataPiece :: System.Void .ctor()
# VA 0x2b507a8 .. 0x2b507b0 (next mapped method entry)
 2b507a8: aa1f03e1     	mov	x1, xzr
 2b507ac: 140e4352     	b	0x2ee14f4 <__start_il2cpp+0x418ee0>
