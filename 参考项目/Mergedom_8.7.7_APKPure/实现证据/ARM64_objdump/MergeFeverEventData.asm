
# MergeFeverEventData :: System.Void .ctor(DataObjectMergeFeverEvent eventDataObject, ITimeProvider timeProvider)
# VA 0x2b7a9e0 .. 0x2b7aa24 (next mapped method entry)
 2b7a9e0: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b7a9e4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b7a9e8: aa0103f4     	mov	x20, x1
 2b7a9ec: aa1f03e1     	mov	x1, xzr
 2b7a9f0: aa0203f3     	mov	x19, x2
 2b7a9f4: aa0003f5     	mov	x21, x0
 2b7a9f8: 94975454     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2b7a9fc: aa1503e0     	mov	x0, x21
 2b7aa00: aa1403e1     	mov	x1, x20
 2b7aa04: f8010c14     	str	x20, [x0, #0x10]!
 2b7aa08: 97f970e1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b7aa0c: f8018eb3     	str	x19, [x21, #0x18]!
 2b7aa10: aa1303e1     	mov	x1, x19
 2b7aa14: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b7aa18: aa1503e0     	mov	x0, x21
 2b7aa1c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b7aa20: 17f970db     	b	0x29d6d8c <mono_class_get_checked+0x674>

# MergeFeverEventData :: System.String GetId()
# VA 0x2b7aa24 .. 0x2b7aa3c (next mapped method entry)
 2b7aa24: f9400808     	ldr	x8, [x0, #0x10]
 2b7aa28: b4000068     	cbz	x8, 0x2b7aa34 <__start_il2cpp+0xb2420>
 2b7aa2c: f9400900     	ldr	x0, [x8, #0x10]
 2b7aa30: d65f03c0     	ret
 2b7aa34: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b7aa38: 97f97194     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventData :: System.Int32 GetVersion()
# VA 0x2b7aa3c .. 0x2b7aa54 (next mapped method entry)
 2b7aa3c: f9400808     	ldr	x8, [x0, #0x10]
 2b7aa40: b4000068     	cbz	x8, 0x2b7aa4c <__start_il2cpp+0xb2438>
 2b7aa44: b9401900     	ldr	w0, [x8, #0x18]
 2b7aa48: d65f03c0     	ret
 2b7aa4c: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b7aa50: 97f9718e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventData :: System.Boolean IsActive()
# VA 0x2b7aa54 .. 0x2b7aa6c (next mapped method entry)
 2b7aa54: f9400808     	ldr	x8, [x0, #0x10]
 2b7aa58: b4000068     	cbz	x8, 0x2b7aa64 <__start_il2cpp+0xb2450>
 2b7aa5c: 3940c100     	ldrb	w0, [x8, #0x30]
 2b7aa60: d65f03c0     	ret
 2b7aa64: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b7aa68: 97f97188     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventData :: DataObjectMergeFeverEvent GetDataObject()
# VA 0x2b7aa6c .. 0x2b7aa74 (next mapped method entry)
 2b7aa6c: f9400800     	ldr	x0, [x0, #0x10]
 2b7aa70: d65f03c0     	ret

# MergeFeverEventData :: System.Void SetActive(System.Boolean isActive)
# VA 0x2b7aa74 .. 0x2b7aa90 (next mapped method entry)
 2b7aa74: f9400808     	ldr	x8, [x0, #0x10]
 2b7aa78: b4000088     	cbz	x8, 0x2b7aa88 <__start_il2cpp+0xb2474>
 2b7aa7c: 12000029     	and	w9, w1, #0x1
 2b7aa80: 3900c109     	strb	w9, [x8, #0x30]
 2b7aa84: d65f03c0     	ret
 2b7aa88: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b7aa8c: 97f9717f     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventData :: System.TimeSpan GetRemainingTime()
# VA 0x2b7aa90 .. 0x2b7abe8 (next mapped method entry)
 2b7aa90: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b7aa94: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b7aa98: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b7aa9c: 9001dcd4     	adrp	x20, 0x6712000
 2b7aaa0: aa0003f3     	mov	x19, x0
 2b7aaa4: 395ea688     	ldrb	w8, [x20, #0x7a9]
 2b7aaa8: 37000188     	tbnz	w8, #0x0, 0x2b7aad8 <__start_il2cpp+0xb24c4>
 2b7aaac: 9001bbc0     	adrp	x0, 0x62f2000
 2b7aab0: f940ac00     	ldr	x0, [x0, #0x158]
 2b7aab4: 97f970cb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b7aab8: 9001bbe0     	adrp	x0, 0x62f6000
 2b7aabc: f9422000     	ldr	x0, [x0, #0x440]
 2b7aac0: 97f970c8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b7aac4: d001bbc0     	adrp	x0, 0x62f4000
 2b7aac8: f940b000     	ldr	x0, [x0, #0x160]
 2b7aacc: 97f970c5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b7aad0: 52800028     	mov	w8, #0x1                // =1
 2b7aad4: 391ea688     	strb	w8, [x20, #0x7a9]
 2b7aad8: f9400a74     	ldr	x20, [x19, #0x10]
 2b7aadc: b4000854     	cbz	x20, 0x2b7abe4 <__start_il2cpp+0xb25d0>
 2b7aae0: f9400e73     	ldr	x19, [x19, #0x18]
 2b7aae4: b4000813     	cbz	x19, 0x2b7abe4 <__start_il2cpp+0xb25d0>
 2b7aae8: 9001bbea     	adrp	x10, 0x62f6000
 2b7aaec: f9400268     	ldr	x8, [x19]
 2b7aaf0: 9001bbd6     	adrp	x22, 0x62f2000
 2b7aaf4: f942214a     	ldr	x10, [x10, #0x440]
 2b7aaf8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2b7aafc: f940aed6     	ldr	x22, [x22, #0x158]
 2b7ab00: f9400141     	ldr	x1, [x10]
 2b7ab04: b4000129     	cbz	x9, 0x2b7ab28 <__start_il2cpp+0xb2514>
 2b7ab08: f940590a     	ldr	x10, [x8, #0xb0]
 2b7ab0c: 9100214a     	add	x10, x10, #0x8
 2b7ab10: f85f814b     	ldur	x11, [x10, #-0x8]
 2b7ab14: eb01017f     	cmp	x11, x1
 2b7ab18: 54000100     	b.eq	0x2b7ab38 <__start_il2cpp+0xb2524>
 2b7ab1c: f1000529     	subs	x9, x9, #0x1
 2b7ab20: 9100414a     	add	x10, x10, #0x10
 2b7ab24: 54ffff61     	b.ne	0x2b7ab10 <__start_il2cpp+0xb24fc>
 2b7ab28: aa1303e0     	mov	x0, x19
 2b7ab2c: 2a1f03e2     	mov	w2, wzr
 2b7ab30: 97fa4e0d     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2b7ab34: 14000004     	b	0x2b7ab44 <__start_il2cpp+0xb2530>
 2b7ab38: b9800149     	ldrsw	x9, [x10]
 2b7ab3c: 8b091108     	add	x8, x8, x9, lsl #4
 2b7ab40: 9104e100     	add	x0, x8, #0x138
 2b7ab44: d001bbd5     	adrp	x21, 0x62f4000
 2b7ab48: f940b2b5     	ldr	x21, [x21, #0x160]
 2b7ab4c: a9400408     	ldp	x8, x1, [x0]
 2b7ab50: aa1303e0     	mov	x0, x19
 2b7ab54: d63f0100     	blr	x8
 2b7ab58: f94002c8     	ldr	x8, [x22]
 2b7ab5c: aa0003f3     	mov	x19, x0
 2b7ab60: b940e509     	ldr	w9, [x8, #0xe4]
 2b7ab64: 35000069     	cbnz	w9, 0x2b7ab70 <__start_il2cpp+0xb255c>
 2b7ab68: aa0803e0     	mov	x0, x8
 2b7ab6c: 97f970fc     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b7ab70: 9100a280     	add	x0, x20, #0x28
 2b7ab74: aa1303e1     	mov	x1, x19
 2b7ab78: aa1f03e2     	mov	x2, xzr
 2b7ab7c: 9495c789     	bl	0x50ec9a0 <__start_il2cpp+0x262438c>
 2b7ab80: f94002a8     	ldr	x8, [x21]
 2b7ab84: aa0003f3     	mov	x19, x0
 2b7ab88: b940e509     	ldr	w9, [x8, #0xe4]
 2b7ab8c: 35000089     	cbnz	w9, 0x2b7ab9c <__start_il2cpp+0xb2588>
 2b7ab90: aa0803e0     	mov	x0, x8
 2b7ab94: 97f970f2     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b7ab98: f94002a8     	ldr	x8, [x21]
 2b7ab9c: f9405d08     	ldr	x8, [x8, #0xb8]
 2b7aba0: aa1303e0     	mov	x0, x19
 2b7aba4: aa1f03e2     	mov	x2, xzr
 2b7aba8: f9400101     	ldr	x1, [x8]
 2b7abac: 9496a7ff     	bl	0x5124ba8 <__start_il2cpp+0x265c594>
 2b7abb0: 36000100     	tbz	w0, #0x0, 0x2b7abd0 <__start_il2cpp+0xb25bc>
 2b7abb4: f94002a0     	ldr	x0, [x21]
 2b7abb8: b940e408     	ldr	w8, [x0, #0xe4]
 2b7abbc: 35000068     	cbnz	w8, 0x2b7abc8 <__start_il2cpp+0xb25b4>
 2b7abc0: 97f970e7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b7abc4: f94002a0     	ldr	x0, [x21]
 2b7abc8: f9405c08     	ldr	x8, [x0, #0xb8]
 2b7abcc: f9400113     	ldr	x19, [x8]
 2b7abd0: aa1303e0     	mov	x0, x19
 2b7abd4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b7abd8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b7abdc: f84307fe     	ldr	x30, [sp], #0x30
 2b7abe0: d65f03c0     	ret
 2b7abe4: 97f97129     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventData :: System.Boolean CanStart()
# VA 0x2b7abe8 .. 0x2b7accc (next mapped method entry)
 2b7abe8: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b7abec: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b7abf0: 9001dcd4     	adrp	x20, 0x6712000
 2b7abf4: aa0003f3     	mov	x19, x0
 2b7abf8: 395eaa88     	ldrb	w8, [x20, #0x7aa]
 2b7abfc: 37000128     	tbnz	w8, #0x0, 0x2b7ac20 <__start_il2cpp+0xb260c>
 2b7ac00: 9001bbc0     	adrp	x0, 0x62f2000
 2b7ac04: f940ac00     	ldr	x0, [x0, #0x158]
 2b7ac08: 97f97076     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b7ac0c: 9001bbe0     	adrp	x0, 0x62f6000
 2b7ac10: f9422000     	ldr	x0, [x0, #0x440]
 2b7ac14: 97f97073     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b7ac18: 52800028     	mov	w8, #0x1                // =1
 2b7ac1c: 391eaa88     	strb	w8, [x20, #0x7aa]
 2b7ac20: f9400e74     	ldr	x20, [x19, #0x18]
 2b7ac24: b4000534     	cbz	x20, 0x2b7acc8 <__start_il2cpp+0xb26b4>
 2b7ac28: 9001bbea     	adrp	x10, 0x62f6000
 2b7ac2c: f9400288     	ldr	x8, [x20]
 2b7ac30: f942214a     	ldr	x10, [x10, #0x440]
 2b7ac34: 79425d09     	ldrh	w9, [x8, #0x12e]
 2b7ac38: f9400141     	ldr	x1, [x10]
 2b7ac3c: b4000129     	cbz	x9, 0x2b7ac60 <__start_il2cpp+0xb264c>
 2b7ac40: f940590a     	ldr	x10, [x8, #0xb0]
 2b7ac44: 9100214a     	add	x10, x10, #0x8
 2b7ac48: f85f814b     	ldur	x11, [x10, #-0x8]
 2b7ac4c: eb01017f     	cmp	x11, x1
 2b7ac50: 54000100     	b.eq	0x2b7ac70 <__start_il2cpp+0xb265c>
 2b7ac54: f1000529     	subs	x9, x9, #0x1
 2b7ac58: 9100414a     	add	x10, x10, #0x10
 2b7ac5c: 54ffff61     	b.ne	0x2b7ac48 <__start_il2cpp+0xb2634>
 2b7ac60: aa1403e0     	mov	x0, x20
 2b7ac64: 2a1f03e2     	mov	w2, wzr
 2b7ac68: 97fa4dbf     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2b7ac6c: 14000004     	b	0x2b7ac7c <__start_il2cpp+0xb2668>
 2b7ac70: b9800149     	ldrsw	x9, [x10]
 2b7ac74: 8b091108     	add	x8, x8, x9, lsl #4
 2b7ac78: 9104e100     	add	x0, x8, #0x138
 2b7ac7c: a9400408     	ldp	x8, x1, [x0]
 2b7ac80: aa1403e0     	mov	x0, x20
 2b7ac84: d63f0100     	blr	x8
 2b7ac88: f9400a68     	ldr	x8, [x19, #0x10]
 2b7ac8c: b40001e8     	cbz	x8, 0x2b7acc8 <__start_il2cpp+0xb26b4>
 2b7ac90: 9001bbc9     	adrp	x9, 0x62f2000
 2b7ac94: aa0003f3     	mov	x19, x0
 2b7ac98: f940ad29     	ldr	x9, [x9, #0x158]
 2b7ac9c: f9401114     	ldr	x20, [x8, #0x20]
 2b7aca0: f9400120     	ldr	x0, [x9]
 2b7aca4: b940e409     	ldr	w9, [x0, #0xe4]
 2b7aca8: 35000049     	cbnz	w9, 0x2b7acb0 <__start_il2cpp+0xb269c>
 2b7acac: 97f970ac     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b7acb0: aa1303e0     	mov	x0, x19
 2b7acb4: aa1403e1     	mov	x1, x20
 2b7acb8: aa1f03e2     	mov	x2, xzr
 2b7acbc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b7acc0: f84207fe     	ldr	x30, [sp], #0x20
 2b7acc4: 1495cb8f     	b	0x50edb00 <__start_il2cpp+0x26254ec>
 2b7acc8: 97f970f0     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventData :: System.Boolean HasEnded()
# VA 0x2b7accc .. 0x2b7ad40 (next mapped method entry)
 2b7accc: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b7acd0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b7acd4: 9001dcd5     	adrp	x21, 0x6712000
 2b7acd8: d001bbd4     	adrp	x20, 0x62f4000
 2b7acdc: aa0003f3     	mov	x19, x0
 2b7ace0: 395eaea8     	ldrb	w8, [x21, #0x7ab]
 2b7ace4: f940b294     	ldr	x20, [x20, #0x160]
 2b7ace8: 370000c8     	tbnz	w8, #0x0, 0x2b7ad00 <__start_il2cpp+0xb26ec>
 2b7acec: d001bbc0     	adrp	x0, 0x62f4000
 2b7acf0: f940b000     	ldr	x0, [x0, #0x160]
 2b7acf4: 97f9703b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b7acf8: 52800028     	mov	w8, #0x1                // =1
 2b7acfc: 391eaea8     	strb	w8, [x21, #0x7ab]
 2b7ad00: aa1303e0     	mov	x0, x19
 2b7ad04: 97ffff63     	bl	0x2b7aa90 <__start_il2cpp+0xb247c>
 2b7ad08: f9400288     	ldr	x8, [x20]
 2b7ad0c: aa0003f3     	mov	x19, x0
 2b7ad10: b940e509     	ldr	w9, [x8, #0xe4]
 2b7ad14: 35000089     	cbnz	w9, 0x2b7ad24 <__start_il2cpp+0xb2710>
 2b7ad18: aa0803e0     	mov	x0, x8
 2b7ad1c: 97f97090     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b7ad20: f9400288     	ldr	x8, [x20]
 2b7ad24: f9405d08     	ldr	x8, [x8, #0xb8]
 2b7ad28: aa1303e0     	mov	x0, x19
 2b7ad2c: aa1f03e2     	mov	x2, xzr
 2b7ad30: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b7ad34: f9400101     	ldr	x1, [x8]
 2b7ad38: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b7ad3c: 1496a79e     	b	0x5124bb4 <__start_il2cpp+0x265c5a0>
