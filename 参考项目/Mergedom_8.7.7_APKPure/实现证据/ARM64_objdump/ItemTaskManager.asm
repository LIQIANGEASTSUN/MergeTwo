
# ItemTaskManager :: System.Collections.Generic.IEnumerable`1<ActiveItemTask> get_activeTasks()
# VA 0x2c1e9ac .. 0x2c1e9b4 (next mapped method entry)
 2c1e9ac: f9400800     	ldr	x0, [x0, #0x10]
 2c1e9b0: d65f03c0     	ret

# ItemTaskManager :: System.Boolean get_IsInitialized()
# VA 0x2c1e9b4 .. 0x2c1e9bc (next mapped method entry)
 2c1e9b4: 39427400     	ldrb	w0, [x0, #0x9d]
 2c1e9b8: d65f03c0     	ret

# ItemTaskManager :: System.Int32 get_totalCompletedTaskCount()
# VA 0x2c1e9bc .. 0x2c1ea14 (next mapped method entry)
 2c1e9bc: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c1e9c0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c1e9c4: 9001d7b4     	adrp	x20, 0x6712000
 2c1e9c8: aa0003f3     	mov	x19, x0
 2c1e9cc: 39718688     	ldrb	w8, [x20, #0xc61]
 2c1e9d0: 370000c8     	tbnz	w8, #0x0, 0x2c1e9e8 <__start_il2cpp+0x1563d4>
 2c1e9d4: 9001b6c0     	adrp	x0, 0x62f6000
 2c1e9d8: f940dc00     	ldr	x0, [x0, #0x1b8]
 2c1e9dc: 97f6e101     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1e9e0: 52800028     	mov	w8, #0x1                // =1
 2c1e9e4: 39318688     	strb	w8, [x20, #0xc61]
 2c1e9e8: f9402e68     	ldr	x8, [x19, #0x58]
 2c1e9ec: b4000128     	cbz	x8, 0x2c1ea10 <__start_il2cpp+0x1563fc>
 2c1e9f0: f9400d00     	ldr	x0, [x8, #0x18]
 2c1e9f4: b40000e0     	cbz	x0, 0x2c1ea10 <__start_il2cpp+0x1563fc>
 2c1e9f8: 9001b6c8     	adrp	x8, 0x62f6000
 2c1e9fc: f940dd08     	ldr	x8, [x8, #0x1b8]
 2c1ea00: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c1ea04: f9400101     	ldr	x1, [x8]
 2c1ea08: f84207fe     	ldr	x30, [sp], #0x20
 2c1ea0c: 146a78a1     	b	0x46bcc90 <__start_il2cpp+0x1bf467c>
 2c1ea10: 97f6e19e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Void set_totalCompletedTaskCount(System.Int32 value)
# VA 0x2c1ea14 .. 0x2c1ea80 (next mapped method entry)
 2c1ea14: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c1ea18: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c1ea1c: 9001d7b5     	adrp	x21, 0x6712000
 2c1ea20: 2a0103f3     	mov	w19, w1
 2c1ea24: aa0003f4     	mov	x20, x0
 2c1ea28: 39718aa8     	ldrb	w8, [x21, #0xc62]
 2c1ea2c: 370000c8     	tbnz	w8, #0x0, 0x2c1ea44 <__start_il2cpp+0x156430>
 2c1ea30: f001b6e0     	adrp	x0, 0x62fd000
 2c1ea34: f9446000     	ldr	x0, [x0, #0x8c0]
 2c1ea38: 97f6e0ea     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1ea3c: 52800028     	mov	w8, #0x1                // =1
 2c1ea40: 39318aa8     	strb	w8, [x21, #0xc62]
 2c1ea44: f9402e88     	ldr	x8, [x20, #0x58]
 2c1ea48: b40001a8     	cbz	x8, 0x2c1ea7c <__start_il2cpp+0x156468>
 2c1ea4c: f9400d00     	ldr	x0, [x8, #0x18]
 2c1ea50: b4000160     	cbz	x0, 0x2c1ea7c <__start_il2cpp+0x156468>
 2c1ea54: f001b6e8     	adrp	x8, 0x62fd000
 2c1ea58: 2a1303e1     	mov	w1, w19
 2c1ea5c: f9446108     	ldr	x8, [x8, #0x8c0]
 2c1ea60: f9400102     	ldr	x2, [x8]
 2c1ea64: 946a78ac     	bl	0x46bcd14 <__start_il2cpp+0x1bf4700>
 2c1ea68: 2a1303e0     	mov	w0, w19
 2c1ea6c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c1ea70: aa1f03e1     	mov	x1, xzr
 2c1ea74: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c1ea78: 17fe5f99     	b	0x2bb68dc <__start_il2cpp+0xee2c8>
 2c1ea7c: 97f6e183     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: IItemTaskLoader get_defaultItemTaskLoader()
# VA 0x2c1ea80 .. 0x2c1ea88 (next mapped method entry)
 2c1ea80: f9405800     	ldr	x0, [x0, #0xb0]
 2c1ea84: d65f03c0     	ret

# ItemTaskManager :: System.Void set_defaultItemTaskLoader(IItemTaskLoader value)
# VA 0x2c1ea88 .. 0x2c1ea90 (next mapped method entry)
 2c1ea88: f80b0c01     	str	x1, [x0, #0xb0]!
 2c1ea8c: 17f6e0c0     	b	0x29d6d8c <mono_class_get_checked+0x674>

# ItemTaskManager :: IItemTaskLoader get_arenaItemTaskLoader()
# VA 0x2c1ea90 .. 0x2c1ea98 (next mapped method entry)
 2c1ea90: f9405c00     	ldr	x0, [x0, #0xb8]
 2c1ea94: d65f03c0     	ret

# ItemTaskManager :: System.Void set_arenaItemTaskLoader(IItemTaskLoader value)
# VA 0x2c1ea98 .. 0x2c1eaa0 (next mapped method entry)
 2c1ea98: f80b8c01     	str	x1, [x0, #0xb8]!
 2c1ea9c: 17f6e0bc     	b	0x29d6d8c <mono_class_get_checked+0x674>

# ItemTaskManager :: QuickOrdersItemTaskLoader get_quickOrdersItemTaskLoader()
# VA 0x2c1eaa0 .. 0x2c1eaa8 (next mapped method entry)
 2c1eaa0: f9406000     	ldr	x0, [x0, #0xc0]
 2c1eaa4: d65f03c0     	ret

# ItemTaskManager :: System.Void set_quickOrdersItemTaskLoader(QuickOrdersItemTaskLoader value)
# VA 0x2c1eaa8 .. 0x2c1eab0 (next mapped method entry)
 2c1eaa8: f80c0c01     	str	x1, [x0, #0xc0]!
 2c1eaac: 17f6e0b8     	b	0x29d6d8c <mono_class_get_checked+0x674>

# ItemTaskManager :: System.Boolean get_arenaEnabled()
# VA 0x2c1eab0 .. 0x2c1eac8 (next mapped method entry)
 2c1eab0: f9403000     	ldr	x0, [x0, #0x60]
 2c1eab4: b4000060     	cbz	x0, 0x2c1eac0 <__start_il2cpp+0x1564ac>
 2c1eab8: aa1f03e1     	mov	x1, xzr
 2c1eabc: 17fdab22     	b	0x2b89744 <__start_il2cpp+0xc1130>
 2c1eac0: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c1eac4: 97f6e171     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: Cysharp.Threading.Tasks.UniTask Initialize(System.Action OnOrderInterstitialShown, System.Int32 numberOfGameBadges)
# VA 0x2c1eac8 .. 0x2c1eb8c (next mapped method entry)
 2c1eac8: d101c3ff     	sub	sp, sp, #0x70
 2c1eacc: a9045ffe     	stp	x30, x23, [sp, #0x40]
 2c1ead0: a90557f6     	stp	x22, x21, [sp, #0x50]
 2c1ead4: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2c1ead8: 9001d7b6     	adrp	x22, 0x6712000
 2c1eadc: f001b6f7     	adrp	x23, 0x62fd000
 2c1eae0: 2a0203f3     	mov	w19, w2
 2c1eae4: 39718ec8     	ldrb	w8, [x22, #0xc63]
 2c1eae8: f94466f7     	ldr	x23, [x23, #0x8c8]
 2c1eaec: aa0103f4     	mov	x20, x1
 2c1eaf0: aa0003f5     	mov	x21, x0
 2c1eaf4: 370000c8     	tbnz	w8, #0x0, 0x2c1eb0c <__start_il2cpp+0x1564f8>
 2c1eaf8: f001b6e0     	adrp	x0, 0x62fd000
 2c1eafc: f9446400     	ldr	x0, [x0, #0x8c8]
 2c1eb00: 97f6e0b8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1eb04: 52800028     	mov	w8, #0x1                // =1
 2c1eb08: 39318ec8     	strb	w8, [x22, #0xc63]
 2c1eb0c: 6f00e400     	movi	v0.2d, #0000000000000000
 2c1eb10: 910003f6     	mov	x22, sp
 2c1eb14: aa1f03e1     	mov	x1, xzr
 2c1eb18: b27d02c0     	orr	x0, x22, #0x8
 2c1eb1c: ad0003e0     	stp	q0, q0, [sp]
 2c1eb20: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2c1eb24: 97f6e09a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1eb28: 910062c0     	add	x0, x22, #0x18
 2c1eb2c: aa1503e1     	mov	x1, x21
 2c1eb30: f9000ff5     	str	x21, [sp, #0x18]
 2c1eb34: 97f6e096     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1eb38: 910082c0     	add	x0, x22, #0x20
 2c1eb3c: aa1403e1     	mov	x1, x20
 2c1eb40: f90013f4     	str	x20, [sp, #0x20]
 2c1eb44: 97f6e092     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1eb48: f94002e0     	ldr	x0, [x23]
 2c1eb4c: 12800009     	mov	w9, #-0x1               // =-1
 2c1eb50: b9002bf3     	str	w19, [sp, #0x28]
 2c1eb54: b90003e9     	str	w9, [sp]
 2c1eb58: f9401c08     	ldr	x8, [x0, #0x38]
 2c1eb5c: b5000048     	cbnz	x8, 0x2c1eb64 <__start_il2cpp+0x156550>
 2c1eb60: 97f7bd49     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c1eb64: 910003e0     	mov	x0, sp
 2c1eb68: 940019e8     	bl	0x2c25308 <__start_il2cpp+0x15ccf4>
 2c1eb6c: b27d02c0     	orr	x0, x22, #0x8
 2c1eb70: aa1f03e1     	mov	x1, xzr
 2c1eb74: 97fc2bf5     	bl	0x2b29b48 <__start_il2cpp+0x61534>
 2c1eb78: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c1eb7c: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c1eb80: a9445ffe     	ldp	x30, x23, [sp, #0x40]
 2c1eb84: 9101c3ff     	add	sp, sp, #0x70
 2c1eb88: d65f03c0     	ret

# ItemTaskManager :: System.Collections.Generic.IReadOnlyCollection`1<ActiveItemTaskData> GetActiveTasksData()
# VA 0x2c1eb8c .. 0x2c1ed58 (next mapped method entry)
 2c1eb8c: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c1eb90: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c1eb94: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c1eb98: 9001d7b5     	adrp	x21, 0x6712000
 2c1eb9c: f001b6f6     	adrp	x22, 0x62fd000
 2c1eba0: f001b6f4     	adrp	x20, 0x62fd000
 2c1eba4: 397192a8     	ldrb	w8, [x21, #0xc64]
 2c1eba8: f9445ad6     	ldr	x22, [x22, #0x8b0]
 2c1ebac: f9445e94     	ldr	x20, [x20, #0x8b8]
 2c1ebb0: aa0003f3     	mov	x19, x0
 2c1ebb4: 370001e8     	tbnz	w8, #0x0, 0x2c1ebf0 <__start_il2cpp+0x1565dc>
 2c1ebb8: f001b6e0     	adrp	x0, 0x62fd000
 2c1ebbc: f9446800     	ldr	x0, [x0, #0x8d0]
 2c1ebc0: 97f6e088     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1ebc4: f001b6e0     	adrp	x0, 0x62fd000
 2c1ebc8: f9446c00     	ldr	x0, [x0, #0x8d8]
 2c1ebcc: 97f6e085     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1ebd0: f001b6e0     	adrp	x0, 0x62fd000
 2c1ebd4: f9445c00     	ldr	x0, [x0, #0x8b8]
 2c1ebd8: 97f6e082     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1ebdc: f001b6e0     	adrp	x0, 0x62fd000
 2c1ebe0: f9445800     	ldr	x0, [x0, #0x8b0]
 2c1ebe4: 97f6e07f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1ebe8: 52800028     	mov	w8, #0x1                // =1
 2c1ebec: 393192a8     	strb	w8, [x21, #0xc64]
 2c1ebf0: f94002c0     	ldr	x0, [x22]
 2c1ebf4: 97f6e121     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c1ebf8: f9400281     	ldr	x1, [x20]
 2c1ebfc: aa0003f4     	mov	x20, x0
 2c1ec00: 943c2672     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2c1ec04: f9403260     	ldr	x0, [x19, #0x60]
 2c1ec08: b4000a60     	cbz	x0, 0x2c1ed54 <__start_il2cpp+0x156740>
 2c1ec0c: f001b6f7     	adrp	x23, 0x62fd000
 2c1ec10: f001b6f6     	adrp	x22, 0x62fd000
 2c1ec14: aa1f03e1     	mov	x1, xzr
 2c1ec18: f9446af7     	ldr	x23, [x23, #0x8d0]
 2c1ec1c: f9446ed6     	ldr	x22, [x22, #0x8d8]
 2c1ec20: 97fdaac9     	bl	0x2b89744 <__start_il2cpp+0xc1130>
 2c1ec24: 360003e0     	tbz	w0, #0x0, 0x2c1eca0 <__start_il2cpp+0x15668c>
 2c1ec28: f9405e75     	ldr	x21, [x19, #0xb8]
 2c1ec2c: b4000955     	cbz	x21, 0x2c1ed54 <__start_il2cpp+0x156740>
 2c1ec30: f94002a8     	ldr	x8, [x21]
 2c1ec34: f94002e1     	ldr	x1, [x23]
 2c1ec38: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1ec3c: b4000129     	cbz	x9, 0x2c1ec60 <__start_il2cpp+0x15664c>
 2c1ec40: f940590a     	ldr	x10, [x8, #0xb0]
 2c1ec44: 9100214a     	add	x10, x10, #0x8
 2c1ec48: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1ec4c: eb01017f     	cmp	x11, x1
 2c1ec50: 54000100     	b.eq	0x2c1ec70 <__start_il2cpp+0x15665c>
 2c1ec54: f1000529     	subs	x9, x9, #0x1
 2c1ec58: 9100414a     	add	x10, x10, #0x10
 2c1ec5c: 54ffff61     	b.ne	0x2c1ec48 <__start_il2cpp+0x156634>
 2c1ec60: aa1503e0     	mov	x0, x21
 2c1ec64: 52800082     	mov	w2, #0x4                // =4
 2c1ec68: 97f7bdbf     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1ec6c: 14000005     	b	0x2c1ec80 <__start_il2cpp+0x15666c>
 2c1ec70: b9400149     	ldr	w9, [x10]
 2c1ec74: 11001129     	add	w9, w9, #0x4
 2c1ec78: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c1ec7c: 9104e100     	add	x0, x8, #0x138
 2c1ec80: a9400408     	ldp	x8, x1, [x0]
 2c1ec84: aa1503e0     	mov	x0, x21
 2c1ec88: d63f0100     	blr	x8
 2c1ec8c: b4000654     	cbz	x20, 0x2c1ed54 <__start_il2cpp+0x156740>
 2c1ec90: f94002c2     	ldr	x2, [x22]
 2c1ec94: aa0003e1     	mov	x1, x0
 2c1ec98: aa1403e0     	mov	x0, x20
 2c1ec9c: 943c28e9     	bl	0x3b29040 <__start_il2cpp+0x1060a2c>
 2c1eca0: f9405a75     	ldr	x21, [x19, #0xb0]
 2c1eca4: b4000595     	cbz	x21, 0x2c1ed54 <__start_il2cpp+0x156740>
 2c1eca8: f94002a8     	ldr	x8, [x21]
 2c1ecac: f94002e1     	ldr	x1, [x23]
 2c1ecb0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1ecb4: b4000129     	cbz	x9, 0x2c1ecd8 <__start_il2cpp+0x1566c4>
 2c1ecb8: f940590a     	ldr	x10, [x8, #0xb0]
 2c1ecbc: 9100214a     	add	x10, x10, #0x8
 2c1ecc0: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1ecc4: eb01017f     	cmp	x11, x1
 2c1ecc8: 54000100     	b.eq	0x2c1ece8 <__start_il2cpp+0x1566d4>
 2c1eccc: f1000529     	subs	x9, x9, #0x1
 2c1ecd0: 9100414a     	add	x10, x10, #0x10
 2c1ecd4: 54ffff61     	b.ne	0x2c1ecc0 <__start_il2cpp+0x1566ac>
 2c1ecd8: aa1503e0     	mov	x0, x21
 2c1ecdc: 52800082     	mov	w2, #0x4                // =4
 2c1ece0: 97f7bda1     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1ece4: 14000005     	b	0x2c1ecf8 <__start_il2cpp+0x1566e4>
 2c1ece8: b9400149     	ldr	w9, [x10]
 2c1ecec: 11001129     	add	w9, w9, #0x4
 2c1ecf0: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c1ecf4: 9104e100     	add	x0, x8, #0x138
 2c1ecf8: a9400408     	ldp	x8, x1, [x0]
 2c1ecfc: aa1503e0     	mov	x0, x21
 2c1ed00: d63f0100     	blr	x8
 2c1ed04: f9406268     	ldr	x8, [x19, #0xc0]
 2c1ed08: b4000268     	cbz	x8, 0x2c1ed54 <__start_il2cpp+0x156740>
 2c1ed0c: aa0003f3     	mov	x19, x0
 2c1ed10: aa0803e0     	mov	x0, x8
 2c1ed14: aa1f03e1     	mov	x1, xzr
 2c1ed18: 94095027     	bl	0x2e72db4 <__start_il2cpp+0x3aa7a0>
 2c1ed1c: b40001d4     	cbz	x20, 0x2c1ed54 <__start_il2cpp+0x156740>
 2c1ed20: f94002c2     	ldr	x2, [x22]
 2c1ed24: aa0003e1     	mov	x1, x0
 2c1ed28: aa1403e0     	mov	x0, x20
 2c1ed2c: 943c28c5     	bl	0x3b29040 <__start_il2cpp+0x1060a2c>
 2c1ed30: f94002c2     	ldr	x2, [x22]
 2c1ed34: aa1403e0     	mov	x0, x20
 2c1ed38: aa1303e1     	mov	x1, x19
 2c1ed3c: 943c28c1     	bl	0x3b29040 <__start_il2cpp+0x1060a2c>
 2c1ed40: aa1403e0     	mov	x0, x20
 2c1ed44: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c1ed48: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c1ed4c: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c1ed50: d65f03c0     	ret
 2c1ed54: 97f6e0cd     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Void MarkArenaTasks()
# VA 0x2c1ed58 .. 0x2c1f024 (next mapped method entry)
 2c1ed58: d10103ff     	sub	sp, sp, #0x40
 2c1ed5c: f9000bfe     	str	x30, [sp, #0x10]
 2c1ed60: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c1ed64: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c1ed68: 9001d7b4     	adrp	x20, 0x6712000
 2c1ed6c: aa0003f3     	mov	x19, x0
 2c1ed70: 39719688     	ldrb	w8, [x20, #0xc65]
 2c1ed74: 37000248     	tbnz	w8, #0x0, 0x2c1edbc <__start_il2cpp+0x1567a8>
 2c1ed78: f001b680     	adrp	x0, 0x62f1000
 2c1ed7c: f947a800     	ldr	x0, [x0, #0xf50]
 2c1ed80: 97f6e018     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1ed84: f001b6e0     	adrp	x0, 0x62fd000
 2c1ed88: f9447000     	ldr	x0, [x0, #0x8e0]
 2c1ed8c: 97f6e015     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1ed90: f001b680     	adrp	x0, 0x62f1000
 2c1ed94: f947b400     	ldr	x0, [x0, #0xf68]
 2c1ed98: 97f6e012     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1ed9c: f001b6e0     	adrp	x0, 0x62fd000
 2c1eda0: f9446800     	ldr	x0, [x0, #0x8d0]
 2c1eda4: 97f6e00f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1eda8: f001b6e0     	adrp	x0, 0x62fd000
 2c1edac: f9447400     	ldr	x0, [x0, #0x8e8]
 2c1edb0: 97f6e00c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1edb4: 52800028     	mov	w8, #0x1                // =1
 2c1edb8: 39319688     	strb	w8, [x20, #0xc65]
 2c1edbc: f9405e73     	ldr	x19, [x19, #0xb8]
 2c1edc0: f9000fff     	str	xzr, [sp, #0x18]
 2c1edc4: b4001033     	cbz	x19, 0x2c1efc8 <__start_il2cpp+0x1569b4>
 2c1edc8: f001b6ea     	adrp	x10, 0x62fd000
 2c1edcc: f9400268     	ldr	x8, [x19]
 2c1edd0: f944694a     	ldr	x10, [x10, #0x8d0]
 2c1edd4: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1edd8: f9400141     	ldr	x1, [x10]
 2c1eddc: b4000129     	cbz	x9, 0x2c1ee00 <__start_il2cpp+0x1567ec>
 2c1ede0: f940590a     	ldr	x10, [x8, #0xb0]
 2c1ede4: 9100214a     	add	x10, x10, #0x8
 2c1ede8: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1edec: eb01017f     	cmp	x11, x1
 2c1edf0: 54000100     	b.eq	0x2c1ee10 <__start_il2cpp+0x1567fc>
 2c1edf4: f1000529     	subs	x9, x9, #0x1
 2c1edf8: 9100414a     	add	x10, x10, #0x10
 2c1edfc: 54ffff61     	b.ne	0x2c1ede8 <__start_il2cpp+0x1567d4>
 2c1ee00: aa1303e0     	mov	x0, x19
 2c1ee04: 52800082     	mov	w2, #0x4                // =4
 2c1ee08: 97f7bd57     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1ee0c: 14000005     	b	0x2c1ee20 <__start_il2cpp+0x15680c>
 2c1ee10: b9400149     	ldr	w9, [x10]
 2c1ee14: 11001129     	add	w9, w9, #0x4
 2c1ee18: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c1ee1c: 9104e100     	add	x0, x8, #0x138
 2c1ee20: a9400408     	ldp	x8, x1, [x0]
 2c1ee24: aa1303e0     	mov	x0, x19
 2c1ee28: d63f0100     	blr	x8
 2c1ee2c: b4000ce0     	cbz	x0, 0x2c1efc8 <__start_il2cpp+0x1569b4>
 2c1ee30: f001b6e8     	adrp	x8, 0x62fd000
 2c1ee34: f9447508     	ldr	x8, [x8, #0x8e8]
 2c1ee38: f9400101     	ldr	x1, [x8]
 2c1ee3c: 944ad156     	bl	0x3ed3394 <__start_il2cpp+0x140ad80>
 2c1ee40: 910063e8     	add	x8, sp, #0x18
 2c1ee44: f9000fe0     	str	x0, [sp, #0x18]
 2c1ee48: a90023ff     	stp	xzr, x8, [sp]
 2c1ee4c: b4000740     	cbz	x0, 0x2c1ef34 <__start_il2cpp+0x156920>
 2c1ee50: f001b694     	adrp	x20, 0x62f1000
 2c1ee54: f001b6f5     	adrp	x21, 0x62fd000
 2c1ee58: aa0003f3     	mov	x19, x0
 2c1ee5c: f947b694     	ldr	x20, [x20, #0xf68]
 2c1ee60: f94472b5     	ldr	x21, [x21, #0x8e0]
 2c1ee64: 52800056     	mov	w22, #0x2               // =2
 2c1ee68: f9400268     	ldr	x8, [x19]
 2c1ee6c: f9400281     	ldr	x1, [x20]
 2c1ee70: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1ee74: b4000129     	cbz	x9, 0x2c1ee98 <__start_il2cpp+0x156884>
 2c1ee78: f940590a     	ldr	x10, [x8, #0xb0]
 2c1ee7c: 9100214a     	add	x10, x10, #0x8
 2c1ee80: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1ee84: eb01017f     	cmp	x11, x1
 2c1ee88: 54000100     	b.eq	0x2c1eea8 <__start_il2cpp+0x156894>
 2c1ee8c: f1000529     	subs	x9, x9, #0x1
 2c1ee90: 9100414a     	add	x10, x10, #0x10
 2c1ee94: 54ffff61     	b.ne	0x2c1ee80 <__start_il2cpp+0x15686c>
 2c1ee98: aa1303e0     	mov	x0, x19
 2c1ee9c: 2a1f03e2     	mov	w2, wzr
 2c1eea0: 97f7bd31     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1eea4: 14000004     	b	0x2c1eeb4 <__start_il2cpp+0x1568a0>
 2c1eea8: b9800149     	ldrsw	x9, [x10]
 2c1eeac: 8b091108     	add	x8, x8, x9, lsl #4
 2c1eeb0: 9104e100     	add	x0, x8, #0x138
 2c1eeb4: a9400408     	ldp	x8, x1, [x0]
 2c1eeb8: aa1303e0     	mov	x0, x19
 2c1eebc: d63f0100     	blr	x8
 2c1eec0: 360003c0     	tbz	w0, #0x0, 0x2c1ef38 <__start_il2cpp+0x156924>
 2c1eec4: f9400ff3     	ldr	x19, [sp, #0x18]
 2c1eec8: b40007f3     	cbz	x19, 0x2c1efc4 <__start_il2cpp+0x1569b0>
 2c1eecc: f9400268     	ldr	x8, [x19]
 2c1eed0: f94002a1     	ldr	x1, [x21]
 2c1eed4: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1eed8: b4000129     	cbz	x9, 0x2c1eefc <__start_il2cpp+0x1568e8>
 2c1eedc: f940590a     	ldr	x10, [x8, #0xb0]
 2c1eee0: 9100214a     	add	x10, x10, #0x8
 2c1eee4: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1eee8: eb01017f     	cmp	x11, x1
 2c1eeec: 54000100     	b.eq	0x2c1ef0c <__start_il2cpp+0x1568f8>
 2c1eef0: f1000529     	subs	x9, x9, #0x1
 2c1eef4: 9100414a     	add	x10, x10, #0x10
 2c1eef8: 54ffff61     	b.ne	0x2c1eee4 <__start_il2cpp+0x1568d0>
 2c1eefc: aa1303e0     	mov	x0, x19
 2c1ef00: 2a1f03e2     	mov	w2, wzr
 2c1ef04: 97f7bd18     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1ef08: 14000004     	b	0x2c1ef18 <__start_il2cpp+0x156904>
 2c1ef0c: b9800149     	ldrsw	x9, [x10]
 2c1ef10: 8b091108     	add	x8, x8, x9, lsl #4
 2c1ef14: 9104e100     	add	x0, x8, #0x138
 2c1ef18: a9400408     	ldp	x8, x1, [x0]
 2c1ef1c: aa1303e0     	mov	x0, x19
 2c1ef20: d63f0100     	blr	x8
 2c1ef24: b40004e0     	cbz	x0, 0x2c1efc0 <__start_il2cpp+0x1569ac>
 2c1ef28: f9400ff3     	ldr	x19, [sp, #0x18]
 2c1ef2c: b9001c16     	str	w22, [x0, #0x1c]
 2c1ef30: b5fff9d3     	cbnz	x19, 0x2c1ee68 <__start_il2cpp+0x156854>
 2c1ef34: 97f6e055     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1ef38: aa1f03f3     	mov	x19, xzr
 2c1ef3c: 910063e8     	add	x8, sp, #0x18
 2c1ef40: f9400114     	ldr	x20, [x8]
 2c1ef44: b4000334     	cbz	x20, 0x2c1efa8 <__start_il2cpp+0x156994>
 2c1ef48: f001b68a     	adrp	x10, 0x62f1000
 2c1ef4c: f9400288     	ldr	x8, [x20]
 2c1ef50: f947a94a     	ldr	x10, [x10, #0xf50]
 2c1ef54: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1ef58: f9400141     	ldr	x1, [x10]
 2c1ef5c: b4000129     	cbz	x9, 0x2c1ef80 <__start_il2cpp+0x15696c>
 2c1ef60: f940590a     	ldr	x10, [x8, #0xb0]
 2c1ef64: 9100214a     	add	x10, x10, #0x8
 2c1ef68: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1ef6c: eb01017f     	cmp	x11, x1
 2c1ef70: 54000100     	b.eq	0x2c1ef90 <__start_il2cpp+0x15697c>
 2c1ef74: f1000529     	subs	x9, x9, #0x1
 2c1ef78: 9100414a     	add	x10, x10, #0x10
 2c1ef7c: 54ffff61     	b.ne	0x2c1ef68 <__start_il2cpp+0x156954>
 2c1ef80: aa1403e0     	mov	x0, x20
 2c1ef84: 2a1f03e2     	mov	w2, wzr
 2c1ef88: 97f7bcf7     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1ef8c: 14000004     	b	0x2c1ef9c <__start_il2cpp+0x156988>
 2c1ef90: b9800149     	ldrsw	x9, [x10]
 2c1ef94: 8b091108     	add	x8, x8, x9, lsl #4
 2c1ef98: 9104e100     	add	x0, x8, #0x138
 2c1ef9c: a9400408     	ldp	x8, x1, [x0]
 2c1efa0: aa1403e0     	mov	x0, x20
 2c1efa4: d63f0100     	blr	x8
 2c1efa8: b5000133     	cbnz	x19, 0x2c1efcc <__start_il2cpp+0x1569b8>
 2c1efac: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c1efb0: f9400bfe     	ldr	x30, [sp, #0x10]
 2c1efb4: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c1efb8: 910103ff     	add	sp, sp, #0x40
 2c1efbc: d65f03c0     	ret
 2c1efc0: 97f6e032     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1efc4: 97f6e031     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1efc8: 97f6e030     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1efcc: aa1303e0     	mov	x0, x19
 2c1efd0: 97f6e02c     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c1efd4: 14000004     	b	0x2c1efe4 <__start_il2cpp+0x1569d0>
 2c1efd8: 14000003     	b	0x2c1efe4 <__start_il2cpp+0x1569d0>
 2c1efdc: 14000002     	b	0x2c1efe4 <__start_il2cpp+0x1569d0>
 2c1efe0: 14000001     	b	0x2c1efe4 <__start_il2cpp+0x1569d0>
 2c1efe4: aa0003f3     	mov	x19, x0
 2c1efe8: 7100043f     	cmp	w1, #0x1
 2c1efec: 54000121     	b.ne	0x2c1f010 <__start_il2cpp+0x1569fc>
 2c1eff0: aa1303e0     	mov	x0, x19
 2c1eff4: 94cc1dd3     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c1eff8: f9400013     	ldr	x19, [x0]
 2c1effc: f90003f3     	str	x19, [sp]
 2c1f000: 94cc1dd4     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c1f004: f94007e8     	ldr	x8, [sp, #0x8]
 2c1f008: 17ffffce     	b	0x2c1ef40 <__start_il2cpp+0x15692c>
 2c1f00c: aa0003f3     	mov	x19, x0
 2c1f010: 910003e0     	mov	x0, sp
 2c1f014: 97ea1b66     	bl	0x26a5dac <.text+0xc4c>
 2c1f018: aa1303e0     	mov	x0, x19
 2c1f01c: 97fa95b0     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c1f020: 97ea1a8b     	bl	0x26a5a4c <.text+0x8ec>

# ItemTaskManager :: System.Void ReinitializeItemTaskViewer(System.Boolean arenaEnabledFlag)
# VA 0x2c1f024 .. 0x2c1f52c (next mapped method entry)
 2c1f024: d10243ff     	sub	sp, sp, #0x90
 2c1f028: f90023fe     	str	x30, [sp, #0x40]
 2c1f02c: a90567fa     	stp	x26, x25, [sp, #0x50]
 2c1f030: a9065ff8     	stp	x24, x23, [sp, #0x60]
 2c1f034: a90757f6     	stp	x22, x21, [sp, #0x70]
 2c1f038: a9084ff4     	stp	x20, x19, [sp, #0x80]
 2c1f03c: f001d795     	adrp	x21, 0x6712000
 2c1f040: 2a0103f4     	mov	w20, w1
 2c1f044: aa0003f3     	mov	x19, x0
 2c1f048: 39719aa8     	ldrb	w8, [x21, #0xc66]
 2c1f04c: 370006c8     	tbnz	w8, #0x0, 0x2c1f124 <__start_il2cpp+0x156b10>
 2c1f050: b001b680     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c1f054: f946e800     	ldr	x0, [x0, #0xdd0]
 2c1f058: 97f6df62     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f05c: d001b6e0     	adrp	x0, 0x62fd000
 2c1f060: f9447800     	ldr	x0, [x0, #0x8f0]
 2c1f064: 97f6df5f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f068: d001b6e0     	adrp	x0, 0x62fd000
 2c1f06c: f9447c00     	ldr	x0, [x0, #0x8f8]
 2c1f070: 97f6df5c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f074: d001b6e0     	adrp	x0, 0x62fd000
 2c1f078: f9448000     	ldr	x0, [x0, #0x900]
 2c1f07c: 97f6df59     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f080: d001b6e0     	adrp	x0, 0x62fd000
 2c1f084: f9446800     	ldr	x0, [x0, #0x8d0]
 2c1f088: 97f6df56     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f08c: b001b6a0     	adrp	x0, 0x62f4000
 2c1f090: f9476c00     	ldr	x0, [x0, #0xed8]
 2c1f094: 97f6df53     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f098: d001b6e0     	adrp	x0, 0x62fd000
 2c1f09c: f9448400     	ldr	x0, [x0, #0x908]
 2c1f0a0: 97f6df50     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f0a4: d001b6e0     	adrp	x0, 0x62fd000
 2c1f0a8: f9448800     	ldr	x0, [x0, #0x910]
 2c1f0ac: 97f6df4d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f0b0: d001b6e0     	adrp	x0, 0x62fd000
 2c1f0b4: f9448c00     	ldr	x0, [x0, #0x918]
 2c1f0b8: 97f6df4a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f0bc: d001b6e0     	adrp	x0, 0x62fd000
 2c1f0c0: f9449000     	ldr	x0, [x0, #0x920]
 2c1f0c4: 97f6df47     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f0c8: d001b6e0     	adrp	x0, 0x62fd000
 2c1f0cc: f9449400     	ldr	x0, [x0, #0x928]
 2c1f0d0: 97f6df44     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f0d4: d001b6e0     	adrp	x0, 0x62fd000
 2c1f0d8: f9449800     	ldr	x0, [x0, #0x930]
 2c1f0dc: 97f6df41     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f0e0: f001b6a0     	adrp	x0, 0x62f6000
 2c1f0e4: f9400c00     	ldr	x0, [x0, #0x18]
 2c1f0e8: 97f6df3e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f0ec: d001b6e0     	adrp	x0, 0x62fd000
 2c1f0f0: f9449c00     	ldr	x0, [x0, #0x938]
 2c1f0f4: 97f6df3b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f0f8: d001b6e0     	adrp	x0, 0x62fd000
 2c1f0fc: f944a000     	ldr	x0, [x0, #0x940]
 2c1f100: 97f6df38     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f104: d001b6e0     	adrp	x0, 0x62fd000
 2c1f108: f944a400     	ldr	x0, [x0, #0x948]
 2c1f10c: 97f6df35     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f110: d001b6e0     	adrp	x0, 0x62fd000
 2c1f114: f944a800     	ldr	x0, [x0, #0x950]
 2c1f118: 97f6df32     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f11c: 52800028     	mov	w8, #0x1                // =1
 2c1f120: 39319aa8     	strb	w8, [x21, #0xc66]
 2c1f124: f9400a68     	ldr	x8, [x19, #0x10]
 2c1f128: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2c1f12c: f9001bff     	str	xzr, [sp, #0x30]
 2c1f130: b4001c08     	cbz	x8, 0x2c1f4b0 <__start_il2cpp+0x156e9c>
 2c1f134: 29432502     	ldp	w2, w9, [x8, #0x18]
 2c1f138: 11000529     	add	w9, w9, #0x1
 2c1f13c: 7100045f     	cmp	w2, #0x1
 2c1f140: 2903251f     	stp	wzr, w9, [x8, #0x18]
 2c1f144: 540000ab     	b.lt	0x2c1f158 <__start_il2cpp+0x156b44>
 2c1f148: f9400900     	ldr	x0, [x8, #0x10]
 2c1f14c: 2a1f03e1     	mov	w1, wzr
 2c1f150: aa1f03e3     	mov	x3, xzr
 2c1f154: 949443a0     	bl	0x512ffd4 <__start_il2cpp+0x26679c0>
 2c1f158: aa1303e0     	mov	x0, x19
 2c1f15c: 97fffe8c     	bl	0x2c1eb8c <__start_il2cpp+0x156578>
 2c1f160: aa0003e1     	mov	x1, x0
 2c1f164: aa1303e0     	mov	x0, x19
 2c1f168: 940000f1     	bl	0x2c1f52c <__start_il2cpp+0x156f18>
 2c1f16c: f9401260     	ldr	x0, [x19, #0x20]
 2c1f170: b4001a00     	cbz	x0, 0x2c1f4b0 <__start_il2cpp+0x156e9c>
 2c1f174: f001b6b8     	adrp	x24, 0x62f6000
 2c1f178: d001b6f6     	adrp	x22, 0x62fd000
 2c1f17c: d001b6f7     	adrp	x23, 0x62fd000
 2c1f180: f9400f18     	ldr	x24, [x24, #0x18]
 2c1f184: f944a6d6     	ldr	x22, [x22, #0x948]
 2c1f188: f944a2f7     	ldr	x23, [x23, #0x940]
 2c1f18c: f9400a61     	ldr	x1, [x19, #0x10]
 2c1f190: 12000295     	and	w21, w20, #0x1
 2c1f194: 940002ec     	bl	0x2c1fd44 <__start_il2cpp+0x157730>
 2c1f198: f9400300     	ldr	x0, [x24]
 2c1f19c: b940e408     	ldr	w8, [x0, #0xe4]
 2c1f1a0: 35000048     	cbnz	w8, 0x2c1f1a8 <__start_il2cpp+0x156b94>
 2c1f1a4: 97f6df6e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c1f1a8: f94002c0     	ldr	x0, [x22]
 2c1f1ac: f94002e1     	ldr	x1, [x23]
 2c1f1b0: aa1f03e2     	mov	x2, xzr
 2c1f1b4: 97fcbadd     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2c1f1b8: b001b697     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c1f1bc: 910133e1     	add	x1, sp, #0x4c
 2c1f1c0: f9470ef7     	ldr	x23, [x23, #0xe18]
 2c1f1c4: 390133f5     	strb	w21, [sp, #0x4c]
 2c1f1c8: f94016e0     	ldr	x0, [x23, #0x28]
 2c1f1cc: 97f6df66     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c1f1d0: f9400a68     	ldr	x8, [x19, #0x10]
 2c1f1d4: b40016e8     	cbz	x8, 0x2c1f4b0 <__start_il2cpp+0x156e9c>
 2c1f1d8: d001b6f8     	adrp	x24, 0x62fd000
 2c1f1dc: aa0003f5     	mov	x21, x0
 2c1f1e0: b9401908     	ldr	w8, [x8, #0x18]
 2c1f1e4: f944ab18     	ldr	x24, [x24, #0x950]
 2c1f1e8: f94026e0     	ldr	x0, [x23, #0x48]
 2c1f1ec: 910023e1     	add	x1, sp, #0x8
 2c1f1f0: b9000be8     	str	w8, [sp, #0x8]
 2c1f1f4: 97f6df5c     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c1f1f8: f9400308     	ldr	x8, [x24]
 2c1f1fc: aa0003e2     	mov	x2, x0
 2c1f200: aa1503e1     	mov	x1, x21
 2c1f204: aa1f03e3     	mov	x3, xzr
 2c1f208: aa0803e0     	mov	x0, x8
 2c1f20c: 948d5f3a     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2c1f210: f94002c8     	ldr	x8, [x22]
 2c1f214: aa0003e1     	mov	x1, x0
 2c1f218: aa1f03e2     	mov	x2, xzr
 2c1f21c: aa0803e0     	mov	x0, x8
 2c1f220: 97fcbac2     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2c1f224: f9405a75     	ldr	x21, [x19, #0xb0]
 2c1f228: b4001455     	cbz	x21, 0x2c1f4b0 <__start_il2cpp+0x156e9c>
 2c1f22c: d001b6f6     	adrp	x22, 0x62fd000
 2c1f230: f94002a8     	ldr	x8, [x21]
 2c1f234: 52000297     	eor	w23, w20, #0x1
 2c1f238: f9446ad6     	ldr	x22, [x22, #0x8d0]
 2c1f23c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1f240: f94002c1     	ldr	x1, [x22]
 2c1f244: b4000129     	cbz	x9, 0x2c1f268 <__start_il2cpp+0x156c54>
 2c1f248: f940590a     	ldr	x10, [x8, #0xb0]
 2c1f24c: 9100214a     	add	x10, x10, #0x8
 2c1f250: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1f254: eb01017f     	cmp	x11, x1
 2c1f258: 54000100     	b.eq	0x2c1f278 <__start_il2cpp+0x156c64>
 2c1f25c: f1000529     	subs	x9, x9, #0x1
 2c1f260: 9100414a     	add	x10, x10, #0x10
 2c1f264: 54ffff61     	b.ne	0x2c1f250 <__start_il2cpp+0x156c3c>
 2c1f268: aa1503e0     	mov	x0, x21
 2c1f26c: 52800062     	mov	w2, #0x3                // =3
 2c1f270: 97f7bc3d     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1f274: 14000005     	b	0x2c1f288 <__start_il2cpp+0x156c74>
 2c1f278: b9400149     	ldr	w9, [x10]
 2c1f27c: 11000d29     	add	w9, w9, #0x3
 2c1f280: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c1f284: 9104e100     	add	x0, x8, #0x138
 2c1f288: a9400808     	ldp	x8, x2, [x0]
 2c1f28c: 120002e1     	and	w1, w23, #0x1
 2c1f290: aa1503e0     	mov	x0, x21
 2c1f294: d63f0100     	blr	x8
 2c1f298: f9406268     	ldr	x8, [x19, #0xc0]
 2c1f29c: b40010a8     	cbz	x8, 0x2c1f4b0 <__start_il2cpp+0x156e9c>
 2c1f2a0: 52800029     	mov	w9, #0x1                // =1
 2c1f2a4: 3901b109     	strb	w9, [x8, #0x6c]
 2c1f2a8: f9405e75     	ldr	x21, [x19, #0xb8]
 2c1f2ac: b4001035     	cbz	x21, 0x2c1f4b0 <__start_il2cpp+0x156e9c>
 2c1f2b0: f94002a8     	ldr	x8, [x21]
 2c1f2b4: f94002c1     	ldr	x1, [x22]
 2c1f2b8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1f2bc: b4000129     	cbz	x9, 0x2c1f2e0 <__start_il2cpp+0x156ccc>
 2c1f2c0: f940590a     	ldr	x10, [x8, #0xb0]
 2c1f2c4: 9100214a     	add	x10, x10, #0x8
 2c1f2c8: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1f2cc: eb01017f     	cmp	x11, x1
 2c1f2d0: 54000100     	b.eq	0x2c1f2f0 <__start_il2cpp+0x156cdc>
 2c1f2d4: f1000529     	subs	x9, x9, #0x1
 2c1f2d8: 9100414a     	add	x10, x10, #0x10
 2c1f2dc: 54ffff61     	b.ne	0x2c1f2c8 <__start_il2cpp+0x156cb4>
 2c1f2e0: aa1503e0     	mov	x0, x21
 2c1f2e4: 52800062     	mov	w2, #0x3                // =3
 2c1f2e8: 97f7bc1f     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1f2ec: 14000005     	b	0x2c1f300 <__start_il2cpp+0x156cec>
 2c1f2f0: b9400149     	ldr	w9, [x10]
 2c1f2f4: 11000d29     	add	w9, w9, #0x3
 2c1f2f8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c1f2fc: 9104e100     	add	x0, x8, #0x138
 2c1f300: a9400808     	ldp	x8, x2, [x0]
 2c1f304: 12000281     	and	w1, w20, #0x1
 2c1f308: aa1503e0     	mov	x0, x21
 2c1f30c: d63f0100     	blr	x8
 2c1f310: 37000ab4     	tbnz	w20, #0x0, 0x2c1f464 <__start_il2cpp+0x156e50>
 2c1f314: f9401260     	ldr	x0, [x19, #0x20]
 2c1f318: b4000cc0     	cbz	x0, 0x2c1f4b0 <__start_il2cpp+0x156e9c>
 2c1f31c: 940002d9     	bl	0x2c1fe80 <__start_il2cpp+0x15786c>
 2c1f320: d001b6e8     	adrp	x8, 0x62fd000
 2c1f324: f9449908     	ldr	x8, [x8, #0x930]
 2c1f328: f9400a75     	ldr	x21, [x19, #0x10]
 2c1f32c: f9400100     	ldr	x0, [x8]
 2c1f330: 97f6df52     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c1f334: d001b6e8     	adrp	x8, 0x62fd000
 2c1f338: aa1503e1     	mov	x1, x21
 2c1f33c: aa0003f4     	mov	x20, x0
 2c1f340: f9449108     	ldr	x8, [x8, #0x920]
 2c1f344: f9400102     	ldr	x2, [x8]
 2c1f348: 943c24ef     	bl	0x3b28704 <__start_il2cpp+0x10600f0>
 2c1f34c: b4000b34     	cbz	x20, 0x2c1f4b0 <__start_il2cpp+0x156e9c>
 2c1f350: d001b6e8     	adrp	x8, 0x62fd000
 2c1f354: aa1403e0     	mov	x0, x20
 2c1f358: f9448908     	ldr	x8, [x8, #0x910]
 2c1f35c: f9400101     	ldr	x1, [x8]
 2c1f360: 910023e8     	add	x8, sp, #0x8
 2c1f364: 943c2997     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2c1f368: 3cc083e0     	ldur	q0, [sp, #0x8]
 2c1f36c: f9400fe8     	ldr	x8, [sp, #0x18]
 2c1f370: d001b6f6     	adrp	x22, 0x62fd000
 2c1f374: d001b6f7     	adrp	x23, 0x62fd000
 2c1f378: f9447ed6     	ldr	x22, [x22, #0x8f8]
 2c1f37c: d001b6f8     	adrp	x24, 0x62fd000
 2c1f380: f9448ef7     	ldr	x23, [x23, #0x918]
 2c1f384: 3d800be0     	str	q0, [sp, #0x20]
 2c1f388: b001b6b9     	adrp	x25, 0x62f4000
 2c1f38c: f9001be8     	str	x8, [sp, #0x30]
 2c1f390: b001b69a     	adrp	x26, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c1f394: 910083e8     	add	x8, sp, #0x20
 2c1f398: f9449f18     	ldr	x24, [x24, #0x938]
 2c1f39c: f9476f39     	ldr	x25, [x25, #0xed8]
 2c1f3a0: f946eb5a     	ldr	x26, [x26, #0xdd0]
 2c1f3a4: a900a3ff     	stp	xzr, x8, [sp, #0x8]
 2c1f3a8: f94002c1     	ldr	x1, [x22]
 2c1f3ac: 910083e0     	add	x0, sp, #0x20
 2c1f3b0: 94799d3a     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2c1f3b4: 360004e0     	tbz	w0, #0x0, 0x2c1f450 <__start_il2cpp+0x156e3c>
 2c1f3b8: f9401bf4     	ldr	x20, [sp, #0x30]
 2c1f3bc: b4000774     	cbz	x20, 0x2c1f4a8 <__start_il2cpp+0x156e94>
 2c1f3c0: f9400a88     	ldr	x8, [x20, #0x10]
 2c1f3c4: b4000748     	cbz	x8, 0x2c1f4ac <__start_il2cpp+0x156e98>
 2c1f3c8: b9401d08     	ldr	w8, [x8, #0x1c]
 2c1f3cc: 7100091f     	cmp	w8, #0x2
 2c1f3d0: 54fffec1     	b.ne	0x2c1f3a8 <__start_il2cpp+0x156d94>
 2c1f3d4: f9400a60     	ldr	x0, [x19, #0x10]
 2c1f3d8: b40006e0     	cbz	x0, 0x2c1f4b4 <__start_il2cpp+0x156ea0>
 2c1f3dc: f94002e2     	ldr	x2, [x23]
 2c1f3e0: aa1403e1     	mov	x1, x20
 2c1f3e4: 943c2bfd     	bl	0x3b2a3d8 <__start_il2cpp+0x1061dc4>
 2c1f3e8: 3707fe00     	tbnz	w0, #0x0, 0x2c1f3a8 <__start_il2cpp+0x156d94>
 2c1f3ec: f9400288     	ldr	x8, [x20]
 2c1f3f0: f9400315     	ldr	x21, [x24]
 2c1f3f4: a9568509     	ldp	x9, x1, [x8, #0x168]
 2c1f3f8: aa1403e0     	mov	x0, x20
 2c1f3fc: d63f0120     	blr	x9
 2c1f400: aa0003e1     	mov	x1, x0
 2c1f404: aa1503e0     	mov	x0, x21
 2c1f408: aa1f03e2     	mov	x2, xzr
 2c1f40c: 948d2665     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2c1f410: aa0003f5     	mov	x21, x0
 2c1f414: f9400320     	ldr	x0, [x25]
 2c1f418: 97f6df18     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c1f41c: aa1503e1     	mov	x1, x21
 2c1f420: aa1f03e2     	mov	x2, xzr
 2c1f424: aa1f03e3     	mov	x3, xzr
 2c1f428: aa0003f4     	mov	x20, x0
 2c1f42c: 97fc42bb     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2c1f430: f9400340     	ldr	x0, [x26]
 2c1f434: b940e408     	ldr	w8, [x0, #0xe4]
 2c1f438: 35000048     	cbnz	w8, 0x2c1f440 <__start_il2cpp+0x156e2c>
 2c1f43c: 97f6dec8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c1f440: aa1403e0     	mov	x0, x20
 2c1f444: aa1f03e1     	mov	x1, xzr
 2c1f448: 94bb5ff0     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2c1f44c: 17ffffd7     	b	0x2c1f3a8 <__start_il2cpp+0x156d94>
 2c1f450: d001b6e8     	adrp	x8, 0x62fd000
 2c1f454: 910083e0     	add	x0, sp, #0x20
 2c1f458: f9447908     	ldr	x8, [x8, #0x8f0]
 2c1f45c: f9400101     	ldr	x1, [x8]
 2c1f460: 94799d0d     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2c1f464: f9403e68     	ldr	x8, [x19, #0x78]
 2c1f468: b4000248     	cbz	x8, 0x2c1f4b0 <__start_il2cpp+0x156e9c>
 2c1f46c: b9402108     	ldr	w8, [x8, #0x20]
 2c1f470: 7100091f     	cmp	w8, #0x2
 2c1f474: 54000081     	b.ne	0x2c1f484 <__start_il2cpp+0x156e70>
 2c1f478: aa1303e0     	mov	x0, x19
 2c1f47c: 940002e9     	bl	0x2c20020 <__start_il2cpp+0x157a0c>
 2c1f480: 14000003     	b	0x2c1f48c <__start_il2cpp+0x156e78>
 2c1f484: 52800028     	mov	w8, #0x1                // =1
 2c1f488: 39027a68     	strb	w8, [x19, #0x9e]
 2c1f48c: a9484ff4     	ldp	x20, x19, [sp, #0x80]
 2c1f490: f94023fe     	ldr	x30, [sp, #0x40]
 2c1f494: a94757f6     	ldp	x22, x21, [sp, #0x70]
 2c1f498: a9465ff8     	ldp	x24, x23, [sp, #0x60]
 2c1f49c: a94567fa     	ldp	x26, x25, [sp, #0x50]
 2c1f4a0: 910243ff     	add	sp, sp, #0x90
 2c1f4a4: d65f03c0     	ret
 2c1f4a8: 97f6def8     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1f4ac: 97f6def7     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1f4b0: 97f6def6     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1f4b4: 97f6def5     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1f4b8: 14000007     	b	0x2c1f4d4 <__start_il2cpp+0x156ec0>
 2c1f4bc: 14000006     	b	0x2c1f4d4 <__start_il2cpp+0x156ec0>
 2c1f4c0: 14000005     	b	0x2c1f4d4 <__start_il2cpp+0x156ec0>
 2c1f4c4: 14000004     	b	0x2c1f4d4 <__start_il2cpp+0x156ec0>
 2c1f4c8: 14000003     	b	0x2c1f4d4 <__start_il2cpp+0x156ec0>
 2c1f4cc: 14000002     	b	0x2c1f4d4 <__start_il2cpp+0x156ec0>
 2c1f4d0: 14000001     	b	0x2c1f4d4 <__start_il2cpp+0x156ec0>
 2c1f4d4: aa0003f4     	mov	x20, x0
 2c1f4d8: 7100043f     	cmp	w1, #0x1
 2c1f4dc: 540001e1     	b.ne	0x2c1f518 <__start_il2cpp+0x156f04>
 2c1f4e0: aa1403e0     	mov	x0, x20
 2c1f4e4: 94cc1c97     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c1f4e8: f9400014     	ldr	x20, [x0]
 2c1f4ec: f90007f4     	str	x20, [sp, #0x8]
 2c1f4f0: 94cc1c98     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c1f4f4: d001b6e8     	adrp	x8, 0x62fd000
 2c1f4f8: f9447908     	ldr	x8, [x8, #0x8f0]
 2c1f4fc: f9400be0     	ldr	x0, [sp, #0x10]
 2c1f500: f9400101     	ldr	x1, [x8]
 2c1f504: 94799ce4     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2c1f508: b4fffaf4     	cbz	x20, 0x2c1f464 <__start_il2cpp+0x156e50>
 2c1f50c: aa1403e0     	mov	x0, x20
 2c1f510: 97f6dedc     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c1f514: aa0003f4     	mov	x20, x0
 2c1f518: 910023e0     	add	x0, sp, #0x8
 2c1f51c: 97ea29e3     	bl	0x26a9ca8 <.text+0x4b48>
 2c1f520: aa1403e0     	mov	x0, x20
 2c1f524: 97fa946e     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c1f528: 97ea1949     	bl	0x26a5a4c <.text+0x8ec>

# ItemTaskManager :: System.Collections.Generic.List`1<ActiveItemTask> AddActiveTasks(System.Collections.Generic.IReadOnlyCollection`1<ActiveItemTaskData> activeItemTaskData)
# VA 0x2c1f52c .. 0x2c1fd44 (next mapped method entry)
 2c1f52c: d10243ff     	sub	sp, sp, #0x90
 2c1f530: a9037bfd     	stp	x29, x30, [sp, #0x30]
 2c1f534: a9046ffc     	stp	x28, x27, [sp, #0x40]
 2c1f538: a90567fa     	stp	x26, x25, [sp, #0x50]
 2c1f53c: a9065ff8     	stp	x24, x23, [sp, #0x60]
 2c1f540: a90757f6     	stp	x22, x21, [sp, #0x70]
 2c1f544: a9084ff4     	stp	x20, x19, [sp, #0x80]
 2c1f548: f001d797     	adrp	x23, 0x6712000
 2c1f54c: d001b6f6     	adrp	x22, 0x62fd000
 2c1f550: d001b6f3     	adrp	x19, 0x62fd000
 2c1f554: 3971a2e8     	ldrb	w8, [x23, #0xc68]
 2c1f558: f9449ad6     	ldr	x22, [x22, #0x930]
 2c1f55c: f944ae73     	ldr	x19, [x19, #0x958]
 2c1f560: aa0103f5     	mov	x21, x1
 2c1f564: aa0003f4     	mov	x20, x0
 2c1f568: 37000788     	tbnz	w8, #0x0, 0x2c1f658 <__start_il2cpp+0x157044>
 2c1f56c: d001b6e0     	adrp	x0, 0x62fd000
 2c1f570: f944b000     	ldr	x0, [x0, #0x960]
 2c1f574: 97f6de1b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f578: b001b680     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c1f57c: f946e800     	ldr	x0, [x0, #0xdd0]
 2c1f580: 97f6de18     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f584: d001b6e0     	adrp	x0, 0x62fd000
 2c1f588: f944b400     	ldr	x0, [x0, #0x968]
 2c1f58c: 97f6de15     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f590: d001b6e0     	adrp	x0, 0x62fd000
 2c1f594: f944b800     	ldr	x0, [x0, #0x970]
 2c1f598: 97f6de12     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f59c: d001b6e0     	adrp	x0, 0x62fd000
 2c1f5a0: f944bc00     	ldr	x0, [x0, #0x978]
 2c1f5a4: 97f6de0f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f5a8: d001b6e0     	adrp	x0, 0x62fd000
 2c1f5ac: f944c000     	ldr	x0, [x0, #0x980]
 2c1f5b0: 97f6de0c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f5b4: b001b680     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c1f5b8: f946f000     	ldr	x0, [x0, #0xde0]
 2c1f5bc: 97f6de09     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f5c0: d001b680     	adrp	x0, 0x62f1000
 2c1f5c4: f947a800     	ldr	x0, [x0, #0xf50]
 2c1f5c8: 97f6de06     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f5cc: d001b6e0     	adrp	x0, 0x62fd000
 2c1f5d0: f944c400     	ldr	x0, [x0, #0x988]
 2c1f5d4: 97f6de03     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f5d8: d001b6e0     	adrp	x0, 0x62fd000
 2c1f5dc: f9447000     	ldr	x0, [x0, #0x8e0]
 2c1f5e0: 97f6de00     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f5e4: d001b680     	adrp	x0, 0x62f1000
 2c1f5e8: f947b400     	ldr	x0, [x0, #0xf68]
 2c1f5ec: 97f6ddfd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f5f0: 9001b6a0     	adrp	x0, 0x62f3000
 2c1f5f4: f9479000     	ldr	x0, [x0, #0xf20]
 2c1f5f8: 97f6ddfa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f5fc: d001b6e0     	adrp	x0, 0x62fd000
 2c1f600: f944c800     	ldr	x0, [x0, #0x990]
 2c1f604: 97f6ddf7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f608: d001b6e0     	adrp	x0, 0x62fd000
 2c1f60c: f944cc00     	ldr	x0, [x0, #0x998]
 2c1f610: 97f6ddf4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f614: d001b6a0     	adrp	x0, 0x62f5000
 2c1f618: f940ec00     	ldr	x0, [x0, #0x1d8]
 2c1f61c: 97f6ddf1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f620: d001b6e0     	adrp	x0, 0x62fd000
 2c1f624: f944ac00     	ldr	x0, [x0, #0x958]
 2c1f628: 97f6ddee     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f62c: d001b6e0     	adrp	x0, 0x62fd000
 2c1f630: f9449800     	ldr	x0, [x0, #0x930]
 2c1f634: 97f6ddeb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f638: d001b6c0     	adrp	x0, 0x62f9000
 2c1f63c: f9477800     	ldr	x0, [x0, #0xef0]
 2c1f640: 97f6dde8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f644: d001b6e0     	adrp	x0, 0x62fd000
 2c1f648: f944d000     	ldr	x0, [x0, #0x9a0]
 2c1f64c: 97f6dde5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1f650: 52800028     	mov	w8, #0x1                // =1
 2c1f654: 3931a2e8     	strb	w8, [x23, #0xc68]
 2c1f658: f94002c0     	ldr	x0, [x22]
 2c1f65c: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2c1f660: 97f6de86     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c1f664: f9400261     	ldr	x1, [x19]
 2c1f668: f90007e0     	str	x0, [sp, #0x8]
 2c1f66c: 943c23d7     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2c1f670: b4002f95     	cbz	x21, 0x2c1fc60 <__start_il2cpp+0x15764c>
 2c1f674: d001b6ea     	adrp	x10, 0x62fd000
 2c1f678: f94002a8     	ldr	x8, [x21]
 2c1f67c: f944c54a     	ldr	x10, [x10, #0x988]
 2c1f680: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1f684: f9400141     	ldr	x1, [x10]
 2c1f688: b4000129     	cbz	x9, 0x2c1f6ac <__start_il2cpp+0x157098>
 2c1f68c: f940590a     	ldr	x10, [x8, #0xb0]
 2c1f690: 9100214a     	add	x10, x10, #0x8
 2c1f694: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1f698: eb01017f     	cmp	x11, x1
 2c1f69c: 54000100     	b.eq	0x2c1f6bc <__start_il2cpp+0x1570a8>
 2c1f6a0: f1000529     	subs	x9, x9, #0x1
 2c1f6a4: 9100414a     	add	x10, x10, #0x10
 2c1f6a8: 54ffff61     	b.ne	0x2c1f694 <__start_il2cpp+0x157080>
 2c1f6ac: aa1503e0     	mov	x0, x21
 2c1f6b0: 2a1f03e2     	mov	w2, wzr
 2c1f6b4: 97f7bb2c     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1f6b8: 14000004     	b	0x2c1f6c8 <__start_il2cpp+0x1570b4>
 2c1f6bc: b9800149     	ldrsw	x9, [x10]
 2c1f6c0: 8b091108     	add	x8, x8, x9, lsl #4
 2c1f6c4: 9104e100     	add	x0, x8, #0x138
 2c1f6c8: 9001b6bc     	adrp	x28, 0x62f3000
 2c1f6cc: d001b6dd     	adrp	x29, 0x62f9000
 2c1f6d0: d001b6fa     	adrp	x26, 0x62fd000
 2c1f6d4: d001b6fb     	adrp	x27, 0x62fd000
 2c1f6d8: f947939c     	ldr	x28, [x28, #0xf20]
 2c1f6dc: f9477bbd     	ldr	x29, [x29, #0xef0]
 2c1f6e0: f944bb5a     	ldr	x26, [x26, #0x970]
 2c1f6e4: f944cf7b     	ldr	x27, [x27, #0x998]
 2c1f6e8: a9400408     	ldp	x8, x1, [x0]
 2c1f6ec: aa1503e0     	mov	x0, x21
 2c1f6f0: d63f0100     	blr	x8
 2c1f6f4: 9100a3e8     	add	x8, sp, #0x28
 2c1f6f8: f90017e0     	str	x0, [sp, #0x28]
 2c1f6fc: a90123ff     	stp	xzr, x8, [sp, #0x10]
 2c1f700: f94017f5     	ldr	x21, [sp, #0x28]
 2c1f704: b4002a35     	cbz	x21, 0x2c1fc48 <__start_il2cpp+0x157634>
 2c1f708: f94002a8     	ldr	x8, [x21]
 2c1f70c: d001b68a     	adrp	x10, 0x62f1000
 2c1f710: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1f714: f947b54a     	ldr	x10, [x10, #0xf68]
 2c1f718: f9400141     	ldr	x1, [x10]
 2c1f71c: b4000129     	cbz	x9, 0x2c1f740 <__start_il2cpp+0x15712c>
 2c1f720: f940590a     	ldr	x10, [x8, #0xb0]
 2c1f724: 9100214a     	add	x10, x10, #0x8
 2c1f728: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1f72c: eb01017f     	cmp	x11, x1
 2c1f730: 54000100     	b.eq	0x2c1f750 <__start_il2cpp+0x15713c>
 2c1f734: f1000529     	subs	x9, x9, #0x1
 2c1f738: 9100414a     	add	x10, x10, #0x10
 2c1f73c: 54ffff61     	b.ne	0x2c1f728 <__start_il2cpp+0x157114>
 2c1f740: aa1503e0     	mov	x0, x21
 2c1f744: 2a1f03e2     	mov	w2, wzr
 2c1f748: 97f7bb07     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1f74c: 14000004     	b	0x2c1f75c <__start_il2cpp+0x157148>
 2c1f750: b9800149     	ldrsw	x9, [x10]
 2c1f754: 8b091108     	add	x8, x8, x9, lsl #4
 2c1f758: 9104e100     	add	x0, x8, #0x138
 2c1f75c: a9400408     	ldp	x8, x1, [x0]
 2c1f760: aa1503e0     	mov	x0, x21
 2c1f764: d63f0100     	blr	x8
 2c1f768: 36002100     	tbz	w0, #0x0, 0x2c1fb88 <__start_il2cpp+0x157574>
 2c1f76c: f94017f5     	ldr	x21, [sp, #0x28]
 2c1f770: b40026f5     	cbz	x21, 0x2c1fc4c <__start_il2cpp+0x157638>
 2c1f774: f94002a8     	ldr	x8, [x21]
 2c1f778: d001b6ea     	adrp	x10, 0x62fd000
 2c1f77c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1f780: f944714a     	ldr	x10, [x10, #0x8e0]
 2c1f784: f9400141     	ldr	x1, [x10]
 2c1f788: b4000129     	cbz	x9, 0x2c1f7ac <__start_il2cpp+0x157198>
 2c1f78c: f940590a     	ldr	x10, [x8, #0xb0]
 2c1f790: 9100214a     	add	x10, x10, #0x8
 2c1f794: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1f798: eb01017f     	cmp	x11, x1
 2c1f79c: 54000100     	b.eq	0x2c1f7bc <__start_il2cpp+0x1571a8>
 2c1f7a0: f1000529     	subs	x9, x9, #0x1
 2c1f7a4: 9100414a     	add	x10, x10, #0x10
 2c1f7a8: 54ffff61     	b.ne	0x2c1f794 <__start_il2cpp+0x157180>
 2c1f7ac: aa1503e0     	mov	x0, x21
 2c1f7b0: 2a1f03e2     	mov	w2, wzr
 2c1f7b4: 97f7baec     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1f7b8: 14000004     	b	0x2c1f7c8 <__start_il2cpp+0x1571b4>
 2c1f7bc: b9800149     	ldrsw	x9, [x10]
 2c1f7c0: 8b091108     	add	x8, x8, x9, lsl #4
 2c1f7c4: 9104e100     	add	x0, x8, #0x138
 2c1f7c8: a9400408     	ldp	x8, x1, [x0]
 2c1f7cc: aa1503e0     	mov	x0, x21
 2c1f7d0: d63f0100     	blr	x8
 2c1f7d4: d001b6e8     	adrp	x8, 0x62fd000
 2c1f7d8: aa0003f6     	mov	x22, x0
 2c1f7dc: f944b108     	ldr	x8, [x8, #0x960]
 2c1f7e0: f9400100     	ldr	x0, [x8]
 2c1f7e4: 97f6de25     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c1f7e8: aa1603e1     	mov	x1, x22
 2c1f7ec: aa1f03e2     	mov	x2, xzr
 2c1f7f0: aa0003f5     	mov	x21, x0
 2c1f7f4: 9408d8cc     	bl	0x2e55b24 <__start_il2cpp+0x38d510>
 2c1f7f8: b40022d6     	cbz	x22, 0x2c1fc50 <__start_il2cpp+0x15763c>
 2c1f7fc: f9405280     	ldr	x0, [x20, #0xa0]
 2c1f800: b40022a0     	cbz	x0, 0x2c1fc54 <__start_il2cpp+0x157640>
 2c1f804: d001b6a8     	adrp	x8, 0x62f5000
 2c1f808: b9401ac1     	ldr	w1, [x22, #0x18]
 2c1f80c: f940ed08     	ldr	x8, [x8, #0x1d8]
 2c1f810: f9400102     	ldr	x2, [x8]
 2c1f814: 943ac17d     	bl	0x3acfe08 <__start_il2cpp+0x10077f4>
 2c1f818: aa1403e0     	mov	x0, x20
 2c1f81c: aa1503e1     	mov	x1, x21
 2c1f820: 94000307     	bl	0x2c2043c <__start_il2cpp+0x157e28>
 2c1f824: b4001700     	cbz	x0, 0x2c1fb04 <__start_il2cpp+0x1574f0>
 2c1f828: f9400c00     	ldr	x0, [x0, #0x18]
 2c1f82c: b4002160     	cbz	x0, 0x2c1fc58 <__start_il2cpp+0x157644>
 2c1f830: 52800581     	mov	w1, #0x2c               // =44
 2c1f834: 2a1f03e2     	mov	w2, wzr
 2c1f838: aa1f03e3     	mov	x3, xzr
 2c1f83c: 948d6514     	bl	0x4f78c8c <__start_il2cpp+0x24b0678>
 2c1f840: aa0003f6     	mov	x22, x0
 2c1f844: b40020c0     	cbz	x0, 0x2c1fc5c <__start_il2cpp+0x157648>
 2c1f848: b9401ac8     	ldr	w8, [x22, #0x18]
 2c1f84c: 7100051f     	cmp	w8, #0x1
 2c1f850: 54000f0b     	b.lt	0x2c1fa30 <__start_il2cpp+0x15741c>
 2c1f854: 2a1f03f3     	mov	w19, wzr
 2c1f858: 6b08027f     	cmp	w19, w8
 2c1f85c: 54001e42     	b.hs	0x2c1fc24 <__start_il2cpp+0x157610>
 2c1f860: 8b33cec8     	add	x8, x22, w19, sxtw #3
 2c1f864: f9401118     	ldr	x24, [x8, #0x20]
 2c1f868: b4001e18     	cbz	x24, 0x2c1fc28 <__start_il2cpp+0x157614>
 2c1f86c: aa1803e0     	mov	x0, x24
 2c1f870: 52800be1     	mov	w1, #0x5f               // =95
 2c1f874: aa1f03e2     	mov	x2, xzr
 2c1f878: 948d6da4     	bl	0x4f7af08 <__start_il2cpp+0x24b28f4>
 2c1f87c: 2a0003f9     	mov	w25, w0
 2c1f880: aa1803e0     	mov	x0, x24
 2c1f884: 2a1f03e1     	mov	w1, wzr
 2c1f888: 2a1903e2     	mov	w2, w25
 2c1f88c: aa1f03e3     	mov	x3, xzr
 2c1f890: 948d62e1     	bl	0x4f78414 <__start_il2cpp+0x24afe00>
 2c1f894: aa1f03e1     	mov	x1, xzr
 2c1f898: 9493a69b     	bl	0x5109304 <__start_il2cpp+0x2640cf0>
 2c1f89c: 2a0003f7     	mov	w23, w0
 2c1f8a0: b9401308     	ldr	w8, [x24, #0x10]
 2c1f8a4: 2a3903e9     	mvn	w9, w25
 2c1f8a8: 11000721     	add	w1, w25, #0x1
 2c1f8ac: 0b090102     	add	w2, w8, w9
 2c1f8b0: aa1803e0     	mov	x0, x24
 2c1f8b4: aa1f03e3     	mov	x3, xzr
 2c1f8b8: 948d62d7     	bl	0x4f78414 <__start_il2cpp+0x24afe00>
 2c1f8bc: aa1f03e1     	mov	x1, xzr
 2c1f8c0: 9493a691     	bl	0x5109304 <__start_il2cpp+0x2640cf0>
 2c1f8c4: f9401699     	ldr	x25, [x20, #0x28]
 2c1f8c8: b4001b39     	cbz	x25, 0x2c1fc2c <__start_il2cpp+0x157618>
 2c1f8cc: f9400328     	ldr	x8, [x25]
 2c1f8d0: f9400381     	ldr	x1, [x28]
 2c1f8d4: 2a0003f8     	mov	w24, w0
 2c1f8d8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1f8dc: b4000129     	cbz	x9, 0x2c1f900 <__start_il2cpp+0x1572ec>
 2c1f8e0: f940590a     	ldr	x10, [x8, #0xb0]
 2c1f8e4: 9100214a     	add	x10, x10, #0x8
 2c1f8e8: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1f8ec: eb01017f     	cmp	x11, x1
 2c1f8f0: 54000100     	b.eq	0x2c1f910 <__start_il2cpp+0x1572fc>
 2c1f8f4: f1000529     	subs	x9, x9, #0x1
 2c1f8f8: 9100414a     	add	x10, x10, #0x10
 2c1f8fc: 54ffff61     	b.ne	0x2c1f8e8 <__start_il2cpp+0x1572d4>
 2c1f900: aa1903e0     	mov	x0, x25
 2c1f904: 52800102     	mov	w2, #0x8                // =8
 2c1f908: 97f7ba97     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1f90c: 14000005     	b	0x2c1f920 <__start_il2cpp+0x15730c>
 2c1f910: b9400149     	ldr	w9, [x10]
 2c1f914: 11002129     	add	w9, w9, #0x8
 2c1f918: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c1f91c: 9104e100     	add	x0, x8, #0x138
 2c1f920: a9400c08     	ldp	x8, x3, [x0]
 2c1f924: aa1903e0     	mov	x0, x25
 2c1f928: 2a1703e1     	mov	w1, w23
 2c1f92c: 2a1803e2     	mov	w2, w24
 2c1f930: d63f0100     	blr	x8
 2c1f934: f94003a3     	ldr	x3, [x29]
 2c1f938: 910083e0     	add	x0, sp, #0x20
 2c1f93c: 2a1703e1     	mov	w1, w23
 2c1f940: 2a1803e2     	mov	w2, w24
 2c1f944: 9445c4d8     	bl	0x3d90ca4 <__start_il2cpp+0x12c8690>
 2c1f948: b4001755     	cbz	x21, 0x2c1fc30 <__start_il2cpp+0x15761c>
 2c1f94c: f94012a0     	ldr	x0, [x21, #0x20]
 2c1f950: b4001720     	cbz	x0, 0x2c1fc34 <__start_il2cpp+0x157620>
 2c1f954: f94013e1     	ldr	x1, [sp, #0x20]
 2c1f958: f9400342     	ldr	x2, [x26]
 2c1f95c: 94712607     	bl	0x4869178 <__start_il2cpp+0x1da0b64>
 2c1f960: f94012b7     	ldr	x23, [x21, #0x20]
 2c1f964: 36000220     	tbz	w0, #0x0, 0x2c1f9a8 <__start_il2cpp+0x157394>
 2c1f968: b4001697     	cbz	x23, 0x2c1fc38 <__start_il2cpp+0x157624>
 2c1f96c: d001b6e8     	adrp	x8, 0x62fd000
 2c1f970: f94013f8     	ldr	x24, [sp, #0x20]
 2c1f974: f944bd08     	ldr	x8, [x8, #0x978]
 2c1f978: f9400102     	ldr	x2, [x8]
 2c1f97c: aa1703e0     	mov	x0, x23
 2c1f980: aa1803e1     	mov	x1, x24
 2c1f984: 94712558     	bl	0x4868ee4 <__start_il2cpp+0x1da08d0>
 2c1f988: d001b6e8     	adrp	x8, 0x62fd000
 2c1f98c: f944c108     	ldr	x8, [x8, #0x980]
 2c1f990: f9400103     	ldr	x3, [x8]
 2c1f994: 11000402     	add	w2, w0, #0x1
 2c1f998: aa1703e0     	mov	x0, x23
 2c1f99c: aa1803e1     	mov	x1, x24
 2c1f9a0: 94712574     	bl	0x4868f70 <__start_il2cpp+0x1da095c>
 2c1f9a4: 14000009     	b	0x2c1f9c8 <__start_il2cpp+0x1573b4>
 2c1f9a8: b40014b7     	cbz	x23, 0x2c1fc3c <__start_il2cpp+0x157628>
 2c1f9ac: d001b6e8     	adrp	x8, 0x62fd000
 2c1f9b0: f94013e1     	ldr	x1, [sp, #0x20]
 2c1f9b4: f944b508     	ldr	x8, [x8, #0x968]
 2c1f9b8: f9400103     	ldr	x3, [x8]
 2c1f9bc: aa1703e0     	mov	x0, x23
 2c1f9c0: 52800022     	mov	w2, #0x1                // =1
 2c1f9c4: 94712570     	bl	0x4868f84 <__start_il2cpp+0x1da0970>
 2c1f9c8: f94016a0     	ldr	x0, [x21, #0x28]
 2c1f9cc: b40012a0     	cbz	x0, 0x2c1fc20 <__start_il2cpp+0x15760c>
 2c1f9d0: b9401c0a     	ldr	w10, [x0, #0x1c]
 2c1f9d4: f9400808     	ldr	x8, [x0, #0x10]
 2c1f9d8: f9400369     	ldr	x9, [x27]
 2c1f9dc: 1100054a     	add	w10, w10, #0x1
 2c1f9e0: b9001c0a     	str	w10, [x0, #0x1c]
 2c1f9e4: b40011e8     	cbz	x8, 0x2c1fc20 <__start_il2cpp+0x15760c>
 2c1f9e8: b980180a     	ldrsw	x10, [x0, #0x18]
 2c1f9ec: b940190b     	ldr	w11, [x8, #0x18]
 2c1f9f0: 6b0b015f     	cmp	w10, w11
 2c1f9f4: 540000c2     	b.hs	0x2c1fa0c <__start_il2cpp+0x1573f8>
 2c1f9f8: 11000549     	add	w9, w10, #0x1
 2c1f9fc: 8b0a0108     	add	x8, x8, x10
 2c1fa00: b9001809     	str	w9, [x0, #0x18]
 2c1fa04: 3900811f     	strb	wzr, [x8, #0x20]
 2c1fa08: 14000006     	b	0x2c1fa20 <__start_il2cpp+0x15740c>
 2c1fa0c: f9401128     	ldr	x8, [x9, #0x20]
 2c1fa10: f9406108     	ldr	x8, [x8, #0xc0]
 2c1fa14: f9403902     	ldr	x2, [x8, #0x70]
 2c1fa18: 2a1f03e1     	mov	w1, wzr
 2c1fa1c: 9439b25a     	bl	0x3a8c384 <__start_il2cpp+0xfc3d70>
 2c1fa20: b9401ac8     	ldr	w8, [x22, #0x18]
 2c1fa24: 11000673     	add	w19, w19, #0x1
 2c1fa28: 6b08027f     	cmp	w19, w8
 2c1fa2c: 54fff16b     	b.lt	0x2c1f858 <__start_il2cpp+0x157244>
 2c1fa30: d001b6f3     	adrp	x19, 0x62fd000
 2c1fa34: f9400a80     	ldr	x0, [x20, #0x10]
 2c1fa38: f944ca73     	ldr	x19, [x19, #0x990]
 2c1fa3c: b4001020     	cbz	x0, 0x2c1fc40 <__start_il2cpp+0x15762c>
 2c1fa40: b9401c0a     	ldr	w10, [x0, #0x1c]
 2c1fa44: f9400808     	ldr	x8, [x0, #0x10]
 2c1fa48: f9400269     	ldr	x9, [x19]
 2c1fa4c: 1100054a     	add	w10, w10, #0x1
 2c1fa50: b9001c0a     	str	w10, [x0, #0x1c]
 2c1fa54: b4000f68     	cbz	x8, 0x2c1fc40 <__start_il2cpp+0x15762c>
 2c1fa58: b980180a     	ldrsw	x10, [x0, #0x18]
 2c1fa5c: b940190b     	ldr	w11, [x8, #0x18]
 2c1fa60: 6b0b015f     	cmp	w10, w11
 2c1fa64: 54000122     	b.hs	0x2c1fa88 <__start_il2cpp+0x157474>
 2c1fa68: 8b0a0d08     	add	x8, x8, x10, lsl #3
 2c1fa6c: 11000549     	add	w9, w10, #0x1
 2c1fa70: b9001809     	str	w9, [x0, #0x18]
 2c1fa74: f8020d15     	str	x21, [x8, #0x20]!
 2c1fa78: aa0803e0     	mov	x0, x8
 2c1fa7c: aa1503e1     	mov	x1, x21
 2c1fa80: 97f6dcc3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1fa84: 14000006     	b	0x2c1fa9c <__start_il2cpp+0x157488>
 2c1fa88: f9401128     	ldr	x8, [x9, #0x20]
 2c1fa8c: f9406108     	ldr	x8, [x8, #0xc0]
 2c1fa90: f9403902     	ldr	x2, [x8, #0x70]
 2c1fa94: aa1503e1     	mov	x1, x21
 2c1fa98: 943c24e6     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2c1fa9c: f94007ec     	ldr	x12, [sp, #0x8]
 2c1faa0: b4000d2c     	cbz	x12, 0x2c1fc44 <__start_il2cpp+0x157630>
 2c1faa4: b9401d8a     	ldr	w10, [x12, #0x1c]
 2c1faa8: f9400988     	ldr	x8, [x12, #0x10]
 2c1faac: f9400269     	ldr	x9, [x19]
 2c1fab0: 1100054a     	add	w10, w10, #0x1
 2c1fab4: b9001d8a     	str	w10, [x12, #0x1c]
 2c1fab8: b4000c68     	cbz	x8, 0x2c1fc44 <__start_il2cpp+0x157630>
 2c1fabc: b980198a     	ldrsw	x10, [x12, #0x18]
 2c1fac0: b940190b     	ldr	w11, [x8, #0x18]
 2c1fac4: 6b0b015f     	cmp	w10, w11
 2c1fac8: 54000102     	b.hs	0x2c1fae8 <__start_il2cpp+0x1574d4>
 2c1facc: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2c1fad0: 11000549     	add	w9, w10, #0x1
 2c1fad4: b9001989     	str	w9, [x12, #0x18]
 2c1fad8: f8020c15     	str	x21, [x0, #0x20]!
 2c1fadc: aa1503e1     	mov	x1, x21
 2c1fae0: 97f6dcab     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c1fae4: 17ffff07     	b	0x2c1f700 <__start_il2cpp+0x1570ec>
 2c1fae8: f9401128     	ldr	x8, [x9, #0x20]
 2c1faec: f9406108     	ldr	x8, [x8, #0xc0]
 2c1faf0: f9403902     	ldr	x2, [x8, #0x70]
 2c1faf4: aa0c03e0     	mov	x0, x12
 2c1faf8: aa1503e1     	mov	x1, x21
 2c1fafc: 943c24cd     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2c1fb00: 17ffff00     	b	0x2c1f700 <__start_il2cpp+0x1570ec>
 2c1fb04: d001b6e8     	adrp	x8, 0x62fd000
 2c1fb08: f944d108     	ldr	x8, [x8, #0x9a0]
 2c1fb0c: f9400116     	ldr	x22, [x8]
 2c1fb10: b40000f5     	cbz	x21, 0x2c1fb2c <__start_il2cpp+0x157518>
 2c1fb14: f94002a8     	ldr	x8, [x21]
 2c1fb18: a9568509     	ldp	x9, x1, [x8, #0x168]
 2c1fb1c: aa1503e0     	mov	x0, x21
 2c1fb20: d63f0120     	blr	x9
 2c1fb24: aa0003e1     	mov	x1, x0
 2c1fb28: 14000002     	b	0x2c1fb30 <__start_il2cpp+0x15751c>
 2c1fb2c: aa1f03e1     	mov	x1, xzr
 2c1fb30: aa1603e0     	mov	x0, x22
 2c1fb34: aa1f03e2     	mov	x2, xzr
 2c1fb38: 948d249a     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2c1fb3c: b001b688     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c1fb40: aa0003f6     	mov	x22, x0
 2c1fb44: f946f108     	ldr	x8, [x8, #0xde0]
 2c1fb48: f9400100     	ldr	x0, [x8]
 2c1fb4c: 97f6dd4b     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c1fb50: aa1603e1     	mov	x1, x22
 2c1fb54: aa1f03e2     	mov	x2, xzr
 2c1fb58: aa0003f5     	mov	x21, x0
 2c1fb5c: 94949494     	bl	0x5144dac <__start_il2cpp+0x267c798>
 2c1fb60: b001b688     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c1fb64: f946e908     	ldr	x8, [x8, #0xdd0]
 2c1fb68: f9400100     	ldr	x0, [x8]
 2c1fb6c: b940e408     	ldr	w8, [x0, #0xe4]
 2c1fb70: 35000048     	cbnz	w8, 0x2c1fb78 <__start_il2cpp+0x157564>
 2c1fb74: 97f6dcfa     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c1fb78: aa1503e0     	mov	x0, x21
 2c1fb7c: aa1f03e1     	mov	x1, xzr
 2c1fb80: 94bb5e22     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2c1fb84: 17fffedf     	b	0x2c1f700 <__start_il2cpp+0x1570ec>
 2c1fb88: aa1f03f4     	mov	x20, xzr
 2c1fb8c: 9100a3e8     	add	x8, sp, #0x28
 2c1fb90: f9400115     	ldr	x21, [x8]
 2c1fb94: b4000335     	cbz	x21, 0x2c1fbf8 <__start_il2cpp+0x1575e4>
 2c1fb98: f94002a8     	ldr	x8, [x21]
 2c1fb9c: d001b68a     	adrp	x10, 0x62f1000
 2c1fba0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c1fba4: f947a94a     	ldr	x10, [x10, #0xf50]
 2c1fba8: f9400141     	ldr	x1, [x10]
 2c1fbac: b4000129     	cbz	x9, 0x2c1fbd0 <__start_il2cpp+0x1575bc>
 2c1fbb0: f940590a     	ldr	x10, [x8, #0xb0]
 2c1fbb4: 9100214a     	add	x10, x10, #0x8
 2c1fbb8: f85f814b     	ldur	x11, [x10, #-0x8]
 2c1fbbc: eb01017f     	cmp	x11, x1
 2c1fbc0: 54000100     	b.eq	0x2c1fbe0 <__start_il2cpp+0x1575cc>
 2c1fbc4: f1000529     	subs	x9, x9, #0x1
 2c1fbc8: 9100414a     	add	x10, x10, #0x10
 2c1fbcc: 54ffff61     	b.ne	0x2c1fbb8 <__start_il2cpp+0x1575a4>
 2c1fbd0: aa1503e0     	mov	x0, x21
 2c1fbd4: 2a1f03e2     	mov	w2, wzr
 2c1fbd8: 97f7b9e3     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c1fbdc: 14000004     	b	0x2c1fbec <__start_il2cpp+0x1575d8>
 2c1fbe0: b9800149     	ldrsw	x9, [x10]
 2c1fbe4: 8b091108     	add	x8, x8, x9, lsl #4
 2c1fbe8: 9104e100     	add	x0, x8, #0x138
 2c1fbec: a9400408     	ldp	x8, x1, [x0]
 2c1fbf0: aa1503e0     	mov	x0, x21
 2c1fbf4: d63f0100     	blr	x8
 2c1fbf8: b5000374     	cbnz	x20, 0x2c1fc64 <__start_il2cpp+0x157650>
 2c1fbfc: a9484ff4     	ldp	x20, x19, [sp, #0x80]
 2c1fc00: f94007e0     	ldr	x0, [sp, #0x8]
 2c1fc04: a94757f6     	ldp	x22, x21, [sp, #0x70]
 2c1fc08: a9465ff8     	ldp	x24, x23, [sp, #0x60]
 2c1fc0c: a94567fa     	ldp	x26, x25, [sp, #0x50]
 2c1fc10: a9446ffc     	ldp	x28, x27, [sp, #0x40]
 2c1fc14: a9437bfd     	ldp	x29, x30, [sp, #0x30]
 2c1fc18: 910243ff     	add	sp, sp, #0x90
 2c1fc1c: d65f03c0     	ret
 2c1fc20: 97f6dd1a     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc24: 97f6dd1b     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2c1fc28: 97f6dd18     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc2c: 97f6dd17     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc30: 97f6dd16     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc34: 97f6dd15     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc38: 97f6dd14     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc3c: 97f6dd13     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc40: 97f6dd12     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc44: 97f6dd11     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc48: 97f6dd10     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc4c: 97f6dd0f     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc50: 97f6dd0e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc54: 97f6dd0d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc58: 97f6dd0c     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc5c: 97f6dd0b     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc60: 97f6dd0a     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c1fc64: aa1403e0     	mov	x0, x20
 2c1fc68: 97f6dd06     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c1fc6c: 14000026     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc70: 14000025     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc74: 14000024     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc78: 14000023     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc7c: 14000022     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc80: 14000021     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc84: 14000020     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc88: 1400001f     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc8c: 1400001e     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc90: 1400001d     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc94: 1400001c     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc98: 1400001b     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fc9c: 1400001a     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fca0: 14000019     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fca4: 14000018     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fca8: 14000017     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcac: 14000016     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcb0: 14000015     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcb4: 14000014     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcb8: 14000013     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcbc: 14000012     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcc0: 14000011     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcc4: 14000010     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcc8: 1400000f     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fccc: 1400000e     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcd0: 1400000d     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcd4: 1400000c     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcd8: 1400000b     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcdc: 1400000a     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fce0: 14000009     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fce4: 14000008     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fce8: 14000007     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcec: 14000006     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcf0: 14000005     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcf4: 14000004     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcf8: 14000003     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fcfc: 14000002     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fd00: 14000001     	b	0x2c1fd04 <__start_il2cpp+0x1576f0>
 2c1fd04: aa0003f4     	mov	x20, x0
 2c1fd08: 7100043f     	cmp	w1, #0x1
 2c1fd0c: 54000121     	b.ne	0x2c1fd30 <__start_il2cpp+0x15771c>
 2c1fd10: aa1403e0     	mov	x0, x20
 2c1fd14: 94cc1a8b     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c1fd18: f9400014     	ldr	x20, [x0]
 2c1fd1c: f9000bf4     	str	x20, [sp, #0x10]
 2c1fd20: 94cc1a8c     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c1fd24: f9400fe8     	ldr	x8, [sp, #0x18]
 2c1fd28: 17ffff9a     	b	0x2c1fb90 <__start_il2cpp+0x15757c>
 2c1fd2c: aa0003f4     	mov	x20, x0
 2c1fd30: 910043e0     	add	x0, sp, #0x10
 2c1fd34: 97ea181e     	bl	0x26a5dac <.text+0xc4c>
 2c1fd38: aa1403e0     	mov	x0, x20
 2c1fd3c: 97fa9268     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c1fd40: 97ea1743     	bl	0x26a5a4c <.text+0x8ec>

# ItemTaskManager :: System.Void CheckAndAddNewTasks()
# VA 0x2c20020 .. 0x2c2013c (next mapped method entry)
 2c20020: d100c3ff     	sub	sp, sp, #0x30
 2c20024: a90157fe     	stp	x30, x21, [sp, #0x10]
 2c20028: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c2002c: d001d794     	adrp	x20, 0x6712000
 2c20030: aa0003f3     	mov	x19, x0
 2c20034: 39719e88     	ldrb	w8, [x20, #0xc67]
 2c20038: 370001e8     	tbnz	w8, #0x0, 0x2c20074 <__start_il2cpp+0x157a60>
 2c2003c: b001b6e0     	adrp	x0, 0x62fd000
 2c20040: f9449400     	ldr	x0, [x0, #0x928]
 2c20044: 97f6db67     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20048: d001b6a0     	adrp	x0, 0x62f6000
 2c2004c: f9400c00     	ldr	x0, [x0, #0x18]
 2c20050: 97f6db64     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20054: b001b6e0     	adrp	x0, 0x62fd000
 2c20058: f944ec00     	ldr	x0, [x0, #0x9d8]
 2c2005c: 97f6db61     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20060: b001b6e0     	adrp	x0, 0x62fd000
 2c20064: f944a400     	ldr	x0, [x0, #0x948]
 2c20068: 97f6db5e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c2006c: 52800028     	mov	w8, #0x1                // =1
 2c20070: 39319e88     	strb	w8, [x20, #0xc67]
 2c20074: aa1303e0     	mov	x0, x19
 2c20078: 94000031     	bl	0x2c2013c <__start_il2cpp+0x157b28>
 2c2007c: aa0003e1     	mov	x1, x0
 2c20080: aa1303e0     	mov	x0, x19
 2c20084: 97fffd2a     	bl	0x2c1f52c <__start_il2cpp+0x156f18>
 2c20088: f9401268     	ldr	x8, [x19, #0x20]
 2c2008c: b4000568     	cbz	x8, 0x2c20138 <__start_il2cpp+0x157b24>
 2c20090: aa0003f4     	mov	x20, x0
 2c20094: f80c0d1f     	str	xzr, [x8, #0xc0]!
 2c20098: aa0803e0     	mov	x0, x8
 2c2009c: aa1f03e1     	mov	x1, xzr
 2c200a0: 97f6db3b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c200a4: aa1303e0     	mov	x0, x19
 2c200a8: aa1403e1     	mov	x1, x20
 2c200ac: 940000a0     	bl	0x2c2032c <__start_il2cpp+0x157d18>
 2c200b0: f9400a68     	ldr	x8, [x19, #0x10]
 2c200b4: b4000428     	cbz	x8, 0x2c20138 <__start_il2cpp+0x157b24>
 2c200b8: b001b6f3     	adrp	x19, 0x62fd000
 2c200bc: 9001b689     	adrp	x9, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c200c0: d001b6b5     	adrp	x21, 0x62f6000
 2c200c4: f944ee73     	ldr	x19, [x19, #0x9d8]
 2c200c8: f9470d29     	ldr	x9, [x9, #0xe18]
 2c200cc: b001b6f4     	adrp	x20, 0x62fd000
 2c200d0: f9400eb5     	ldr	x21, [x21, #0x18]
 2c200d4: b9401908     	ldr	w8, [x8, #0x18]
 2c200d8: f944a694     	ldr	x20, [x20, #0x948]
 2c200dc: f9402520     	ldr	x0, [x9, #0x48]
 2c200e0: 910033e1     	add	x1, sp, #0xc
 2c200e4: b9000fe8     	str	w8, [sp, #0xc]
 2c200e8: 97f6db9f     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c200ec: f9400268     	ldr	x8, [x19]
 2c200f0: aa0003e1     	mov	x1, x0
 2c200f4: aa1f03e2     	mov	x2, xzr
 2c200f8: aa0803e0     	mov	x0, x8
 2c200fc: 948d319d     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c20100: f94002a8     	ldr	x8, [x21]
 2c20104: aa0003f3     	mov	x19, x0
 2c20108: b940e509     	ldr	w9, [x8, #0xe4]
 2c2010c: 35000069     	cbnz	w9, 0x2c20118 <__start_il2cpp+0x157b04>
 2c20110: aa0803e0     	mov	x0, x8
 2c20114: 97f6db92     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c20118: f9400280     	ldr	x0, [x20]
 2c2011c: aa1303e1     	mov	x1, x19
 2c20120: aa1f03e2     	mov	x2, xzr
 2c20124: 97fcb701     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2c20128: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c2012c: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2c20130: 9100c3ff     	add	sp, sp, #0x30
 2c20134: d65f03c0     	ret
 2c20138: 97f6dbd4     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Collections.Generic.List`1<ActiveItemTaskData> GetNewActiveTasks()
# VA 0x2c2013c .. 0x2c20320 (next mapped method entry)
 2c2013c: d10103ff     	sub	sp, sp, #0x40
 2c20140: f9000bfe     	str	x30, [sp, #0x10]
 2c20144: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c20148: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c2014c: d001d796     	adrp	x22, 0x6712000
 2c20150: b001b6f5     	adrp	x21, 0x62fd000
 2c20154: b001b6f4     	adrp	x20, 0x62fd000
 2c20158: 3971a6c8     	ldrb	w8, [x22, #0xc69]
 2c2015c: f9445ab5     	ldr	x21, [x21, #0x8b0]
 2c20160: f9445e94     	ldr	x20, [x20, #0x8b8]
 2c20164: aa0003f3     	mov	x19, x0
 2c20168: 37000248     	tbnz	w8, #0x0, 0x2c201b0 <__start_il2cpp+0x157b9c>
 2c2016c: b001b6e0     	adrp	x0, 0x62fd000
 2c20170: f9446800     	ldr	x0, [x0, #0x8d0]
 2c20174: 97f6db1b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20178: b001b6e0     	adrp	x0, 0x62fd000
 2c2017c: f9446c00     	ldr	x0, [x0, #0x8d8]
 2c20180: 97f6db18     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20184: b001b6e0     	adrp	x0, 0x62fd000
 2c20188: f9445c00     	ldr	x0, [x0, #0x8b8]
 2c2018c: 97f6db15     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20190: b001b6e0     	adrp	x0, 0x62fd000
 2c20194: f9444c00     	ldr	x0, [x0, #0x898]
 2c20198: 97f6db12     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c2019c: b001b6e0     	adrp	x0, 0x62fd000
 2c201a0: f9445800     	ldr	x0, [x0, #0x8b0]
 2c201a4: 97f6db0f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c201a8: 52800028     	mov	w8, #0x1                // =1
 2c201ac: 3931a6c8     	strb	w8, [x22, #0xc69]
 2c201b0: 910003e0     	mov	x0, sp
 2c201b4: aa1303e1     	mov	x1, x19
 2c201b8: a9007ff3     	stp	x19, xzr, [sp]
 2c201bc: 910003f6     	mov	x22, sp
 2c201c0: 97f6daf3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c201c4: f94002a0     	ldr	x0, [x21]
 2c201c8: 97f6dbac     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c201cc: f9400281     	ldr	x1, [x20]
 2c201d0: aa0003f4     	mov	x20, x0
 2c201d4: 943c20fd     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2c201d8: 910022c0     	add	x0, x22, #0x8
 2c201dc: aa1403e1     	mov	x1, x20
 2c201e0: f90007f4     	str	x20, [sp, #0x8]
 2c201e4: 97f6daea     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c201e8: f9404a60     	ldr	x0, [x19, #0x90]
 2c201ec: b4000980     	cbz	x0, 0x2c2031c <__start_il2cpp+0x157d08>
 2c201f0: aa1f03e1     	mov	x1, xzr
 2c201f4: 97fee802     	bl	0x2bda1fc <__start_il2cpp+0x111be8>
 2c201f8: 360000c0     	tbz	w0, #0x0, 0x2c20210 <__start_il2cpp+0x157bfc>
 2c201fc: f9403260     	ldr	x0, [x19, #0x60]
 2c20200: b40008e0     	cbz	x0, 0x2c2031c <__start_il2cpp+0x157d08>
 2c20204: aa1f03e1     	mov	x1, xzr
 2c20208: 97fda54f     	bl	0x2b89744 <__start_il2cpp+0xc1130>
 2c2020c: 37000780     	tbnz	w0, #0x0, 0x2c202fc <__start_il2cpp+0x157ce8>
 2c20210: f9405a74     	ldr	x20, [x19, #0xb0]
 2c20214: b4000854     	cbz	x20, 0x2c2031c <__start_il2cpp+0x157d08>
 2c20218: b001b6ea     	adrp	x10, 0x62fd000
 2c2021c: f9400288     	ldr	x8, [x20]
 2c20220: f944694a     	ldr	x10, [x10, #0x8d0]
 2c20224: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c20228: f9400141     	ldr	x1, [x10]
 2c2022c: b4000129     	cbz	x9, 0x2c20250 <__start_il2cpp+0x157c3c>
 2c20230: f940590a     	ldr	x10, [x8, #0xb0]
 2c20234: 9100214a     	add	x10, x10, #0x8
 2c20238: f85f814b     	ldur	x11, [x10, #-0x8]
 2c2023c: eb01017f     	cmp	x11, x1
 2c20240: 54000100     	b.eq	0x2c20260 <__start_il2cpp+0x157c4c>
 2c20244: f1000529     	subs	x9, x9, #0x1
 2c20248: 9100414a     	add	x10, x10, #0x10
 2c2024c: 54ffff61     	b.ne	0x2c20238 <__start_il2cpp+0x157c24>
 2c20250: aa1403e0     	mov	x0, x20
 2c20254: 528000c2     	mov	w2, #0x6                // =6
 2c20258: 97f7b843     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c2025c: 14000005     	b	0x2c20270 <__start_il2cpp+0x157c5c>
 2c20260: b9400149     	ldr	w9, [x10]
 2c20264: 11001929     	add	w9, w9, #0x6
 2c20268: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c2026c: 9104e100     	add	x0, x8, #0x138
 2c20270: a9400408     	ldp	x8, x1, [x0]
 2c20274: aa1403e0     	mov	x0, x20
 2c20278: d63f0100     	blr	x8
 2c2027c: b4000080     	cbz	x0, 0x2c2028c <__start_il2cpp+0x157c78>
 2c20280: b9401808     	ldr	w8, [x0, #0x18]
 2c20284: aa0003e1     	mov	x1, x0
 2c20288: 35000248     	cbnz	w8, 0x2c202d0 <__start_il2cpp+0x157cbc>
 2c2028c: f9403260     	ldr	x0, [x19, #0x60]
 2c20290: b4000460     	cbz	x0, 0x2c2031c <__start_il2cpp+0x157d08>
 2c20294: aa1f03e1     	mov	x1, xzr
 2c20298: 97fda52b     	bl	0x2b89744 <__start_il2cpp+0xc1130>
 2c2029c: 37000260     	tbnz	w0, #0x0, 0x2c202e8 <__start_il2cpp+0x157cd4>
 2c202a0: f9406260     	ldr	x0, [x19, #0xc0]
 2c202a4: b40003c0     	cbz	x0, 0x2c2031c <__start_il2cpp+0x157d08>
 2c202a8: aa1f03e1     	mov	x1, xzr
 2c202ac: 94094c03     	bl	0x2e732b8 <__start_il2cpp+0x3aaca4>
 2c202b0: 7100041f     	cmp	w0, #0x1
 2c202b4: 540001ab     	b.lt	0x2c202e8 <__start_il2cpp+0x157cd4>
 2c202b8: f9406260     	ldr	x0, [x19, #0xc0]
 2c202bc: b4000300     	cbz	x0, 0x2c2031c <__start_il2cpp+0x157d08>
 2c202c0: aa1f03e1     	mov	x1, xzr
 2c202c4: 94094d78     	bl	0x2e738a4 <__start_il2cpp+0x3ab290>
 2c202c8: b4000100     	cbz	x0, 0x2c202e8 <__start_il2cpp+0x157cd4>
 2c202cc: aa0003e1     	mov	x1, x0
 2c202d0: f94007e0     	ldr	x0, [sp, #0x8]
 2c202d4: b4000240     	cbz	x0, 0x2c2031c <__start_il2cpp+0x157d08>
 2c202d8: b001b6e8     	adrp	x8, 0x62fd000
 2c202dc: f9446d08     	ldr	x8, [x8, #0x8d8]
 2c202e0: f9400102     	ldr	x2, [x8]
 2c202e4: 943c2357     	bl	0x3b29040 <__start_il2cpp+0x1060a2c>
 2c202e8: f9403260     	ldr	x0, [x19, #0x60]
 2c202ec: b4000180     	cbz	x0, 0x2c2031c <__start_il2cpp+0x157d08>
 2c202f0: aa1f03e1     	mov	x1, xzr
 2c202f4: 97fda514     	bl	0x2b89744 <__start_il2cpp+0xc1130>
 2c202f8: 36000080     	tbz	w0, #0x0, 0x2c20308 <__start_il2cpp+0x157cf4>
 2c202fc: 910003e1     	mov	x1, sp
 2c20300: aa1303e0     	mov	x0, x19
 2c20304: 940000a5     	bl	0x2c20598 <__start_il2cpp+0x157f84>
 2c20308: a940fbe0     	ldp	x0, x30, [sp, #0x8]
 2c2030c: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c20310: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c20314: 910103ff     	add	sp, sp, #0x40
 2c20318: d65f03c0     	ret
 2c2031c: 97f6db5b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: Cysharp.Threading.Tasks.UniTask ShowNewTasks(System.Collections.Generic.List`1<ActiveItemTask> newActiveTasks)
# VA 0x2c2032c .. 0x2c203ec (next mapped method entry)
 2c2032c: d101c3ff     	sub	sp, sp, #0x70
 2c20330: f90023fe     	str	x30, [sp, #0x40]
 2c20334: a90557f6     	stp	x22, x21, [sp, #0x50]
 2c20338: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2c2033c: d001d795     	adrp	x21, 0x6712000
 2c20340: b001b6f6     	adrp	x22, 0x62fd000
 2c20344: aa0103f3     	mov	x19, x1
 2c20348: 3971c2a8     	ldrb	w8, [x21, #0xc70]
 2c2034c: f944f2d6     	ldr	x22, [x22, #0x9e0]
 2c20350: aa0003f4     	mov	x20, x0
 2c20354: 370000c8     	tbnz	w8, #0x0, 0x2c2036c <__start_il2cpp+0x157d58>
 2c20358: b001b6e0     	adrp	x0, 0x62fd000
 2c2035c: f944f000     	ldr	x0, [x0, #0x9e0]
 2c20360: 97f6daa0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20364: 52800028     	mov	w8, #0x1                // =1
 2c20368: 3931c2a8     	strb	w8, [x21, #0xc70]
 2c2036c: 6f00e400     	movi	v0.2d, #0000000000000000
 2c20370: 910003f5     	mov	x21, sp
 2c20374: aa1f03e1     	mov	x1, xzr
 2c20378: b27d02a0     	orr	x0, x21, #0x8
 2c2037c: f9001bff     	str	xzr, [sp, #0x30]
 2c20380: ad0083e0     	stp	q0, q0, [sp, #0x10]
 2c20384: 3d8003e0     	str	q0, [sp]
 2c20388: 97f6da81     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c2038c: 910082a0     	add	x0, x21, #0x20
 2c20390: aa1403e1     	mov	x1, x20
 2c20394: f90013f4     	str	x20, [sp, #0x20]
 2c20398: 97f6da7d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c2039c: 910062a0     	add	x0, x21, #0x18
 2c203a0: aa1303e1     	mov	x1, x19
 2c203a4: f9000ff3     	str	x19, [sp, #0x18]
 2c203a8: 97f6da79     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c203ac: f94002c0     	ldr	x0, [x22]
 2c203b0: 12800009     	mov	w9, #-0x1               // =-1
 2c203b4: b90003e9     	str	w9, [sp]
 2c203b8: f9401c08     	ldr	x8, [x0, #0x38]
 2c203bc: b5000048     	cbnz	x8, 0x2c203c4 <__start_il2cpp+0x157db0>
 2c203c0: 97f7b731     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c203c4: 910003e0     	mov	x0, sp
 2c203c8: 94001e81     	bl	0x2c27dcc <__start_il2cpp+0x15f7b8>
 2c203cc: b27d02a0     	orr	x0, x21, #0x8
 2c203d0: aa1f03e1     	mov	x1, xzr
 2c203d4: 97fc25dd     	bl	0x2b29b48 <__start_il2cpp+0x61534>
 2c203d8: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c203dc: f94023fe     	ldr	x30, [sp, #0x40]
 2c203e0: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c203e4: 9101c3ff     	add	sp, sp, #0x70
 2c203e8: d65f03c0     	ret

# ItemTaskManager :: System.Void OnPlayerArenaStatusChanged(PlayerArenaStatusChangedSignal signal)
# VA 0x2c203ec .. 0x2c20420 (next mapped method entry)
 2c203ec: b4000161     	cbz	x1, 0x2c20418 <__start_il2cpp+0x157e04>
 2c203f0: b9401428     	ldr	w8, [x1, #0x14]
 2c203f4: 71000d1f     	cmp	w8, #0x3
 2c203f8: 54000080     	b.eq	0x2c20408 <__start_il2cpp+0x157df4>
 2c203fc: b9401029     	ldr	w9, [x1, #0x10]
 2c20400: 71000d3f     	cmp	w9, #0x3
 2c20404: 54000081     	b.ne	0x2c20414 <__start_il2cpp+0x157e00>
 2c20408: 71000d1f     	cmp	w8, #0x3
 2c2040c: 1a9f17e1     	cset	w1, eq
 2c20410: 17fffb05     	b	0x2c1f024 <__start_il2cpp+0x156a10>
 2c20414: d65f03c0     	ret
 2c20418: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c2041c: 97f6db1b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Void OnPostGameSceneModeUpdatedSignal(PostGameSceneModeUpdatedSignal signal)
# VA 0x2c20420 .. 0x2c2043c (next mapped method entry)
 2c20420: 7100083f     	cmp	w1, #0x2
 2c20424: 540000a1     	b.ne	0x2c20438 <__start_il2cpp+0x157e24>
 2c20428: 39427808     	ldrb	w8, [x0, #0x9e]
 2c2042c: 34000068     	cbz	w8, 0x2c20438 <__start_il2cpp+0x157e24>
 2c20430: 3902781f     	strb	wzr, [x0, #0x9e]
 2c20434: 17fffefb     	b	0x2c20020 <__start_il2cpp+0x157a0c>
 2c20438: d65f03c0     	ret

# ItemTaskManager :: ItemTask GetItemTask(ActiveItemTask activeItemTask)
# VA 0x2c2043c .. 0x2c20598 (next mapped method entry)
 2c2043c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c20440: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c20444: d001d795     	adrp	x21, 0x6712000
 2c20448: aa0103f4     	mov	x20, x1
 2c2044c: aa0003f3     	mov	x19, x0
 2c20450: 3971dea8     	ldrb	w8, [x21, #0xc77]
 2c20454: 370000c8     	tbnz	w8, #0x0, 0x2c2046c <__start_il2cpp+0x157e58>
 2c20458: b001b6e0     	adrp	x0, 0x62fd000
 2c2045c: f9446800     	ldr	x0, [x0, #0x8d0]
 2c20460: 97f6da60     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20464: 52800028     	mov	w8, #0x1                // =1
 2c20468: 3931dea8     	strb	w8, [x21, #0xc77]
 2c2046c: b4000954     	cbz	x20, 0x2c20594 <__start_il2cpp+0x157f80>
 2c20470: f9400a88     	ldr	x8, [x20, #0x10]
 2c20474: b4000908     	cbz	x8, 0x2c20594 <__start_il2cpp+0x157f80>
 2c20478: b9401d08     	ldr	w8, [x8, #0x1c]
 2c2047c: 71000d1f     	cmp	w8, #0x3
 2c20480: 54000300     	b.eq	0x2c204e0 <__start_il2cpp+0x157ecc>
 2c20484: 7100091f     	cmp	w8, #0x2
 2c20488: 54000421     	b.ne	0x2c2050c <__start_il2cpp+0x157ef8>
 2c2048c: f9405e73     	ldr	x19, [x19, #0xb8]
 2c20490: aa1403e0     	mov	x0, x20
 2c20494: aa1f03e1     	mov	x1, xzr
 2c20498: 9408d55a     	bl	0x2e55a00 <__start_il2cpp+0x38d3ec>
 2c2049c: b40007d3     	cbz	x19, 0x2c20594 <__start_il2cpp+0x157f80>
 2c204a0: b001b6ea     	adrp	x10, 0x62fd000
 2c204a4: f9400268     	ldr	x8, [x19]
 2c204a8: 2a0003f4     	mov	w20, w0
 2c204ac: f944694a     	ldr	x10, [x10, #0x8d0]
 2c204b0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c204b4: f9400141     	ldr	x1, [x10]
 2c204b8: b4000529     	cbz	x9, 0x2c2055c <__start_il2cpp+0x157f48>
 2c204bc: f940590a     	ldr	x10, [x8, #0xb0]
 2c204c0: 9100214a     	add	x10, x10, #0x8
 2c204c4: f85f814b     	ldur	x11, [x10, #-0x8]
 2c204c8: eb01017f     	cmp	x11, x1
 2c204cc: 54000500     	b.eq	0x2c2056c <__start_il2cpp+0x157f58>
 2c204d0: f1000529     	subs	x9, x9, #0x1
 2c204d4: 9100414a     	add	x10, x10, #0x10
 2c204d8: 54ffff61     	b.ne	0x2c204c4 <__start_il2cpp+0x157eb0>
 2c204dc: 14000020     	b	0x2c2055c <__start_il2cpp+0x157f48>
 2c204e0: f9406273     	ldr	x19, [x19, #0xc0]
 2c204e4: aa1403e0     	mov	x0, x20
 2c204e8: aa1f03e1     	mov	x1, xzr
 2c204ec: 9408d545     	bl	0x2e55a00 <__start_il2cpp+0x38d3ec>
 2c204f0: b4000533     	cbz	x19, 0x2c20594 <__start_il2cpp+0x157f80>
 2c204f4: 2a0003e1     	mov	w1, w0
 2c204f8: aa1303e0     	mov	x0, x19
 2c204fc: aa1f03e2     	mov	x2, xzr
 2c20500: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c20504: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c20508: 14095065     	b	0x2e7469c <__start_il2cpp+0x3ac088>
 2c2050c: f9405a73     	ldr	x19, [x19, #0xb0]
 2c20510: aa1403e0     	mov	x0, x20
 2c20514: aa1f03e1     	mov	x1, xzr
 2c20518: 9408d53a     	bl	0x2e55a00 <__start_il2cpp+0x38d3ec>
 2c2051c: b40003d3     	cbz	x19, 0x2c20594 <__start_il2cpp+0x157f80>
 2c20520: b001b6ea     	adrp	x10, 0x62fd000
 2c20524: f9400268     	ldr	x8, [x19]
 2c20528: 2a0003f4     	mov	w20, w0
 2c2052c: f944694a     	ldr	x10, [x10, #0x8d0]
 2c20530: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c20534: f9400141     	ldr	x1, [x10]
 2c20538: b4000129     	cbz	x9, 0x2c2055c <__start_il2cpp+0x157f48>
 2c2053c: f940590a     	ldr	x10, [x8, #0xb0]
 2c20540: 9100214a     	add	x10, x10, #0x8
 2c20544: f85f814b     	ldur	x11, [x10, #-0x8]
 2c20548: eb01017f     	cmp	x11, x1
 2c2054c: 54000100     	b.eq	0x2c2056c <__start_il2cpp+0x157f58>
 2c20550: f1000529     	subs	x9, x9, #0x1
 2c20554: 9100414a     	add	x10, x10, #0x10
 2c20558: 54ffff61     	b.ne	0x2c20544 <__start_il2cpp+0x157f30>
 2c2055c: aa1303e0     	mov	x0, x19
 2c20560: 52800122     	mov	w2, #0x9                // =9
 2c20564: 97f7b780     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c20568: 14000005     	b	0x2c2057c <__start_il2cpp+0x157f68>
 2c2056c: b9400149     	ldr	w9, [x10]
 2c20570: 11002529     	add	w9, w9, #0x9
 2c20574: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c20578: 9104e100     	add	x0, x8, #0x138
 2c2057c: a9400803     	ldp	x3, x2, [x0]
 2c20580: aa1303e0     	mov	x0, x19
 2c20584: 2a1403e1     	mov	w1, w20
 2c20588: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c2058c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c20590: d61f0060     	br	x3
 2c20594: 97f6dabd     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Void <GetNewActiveTasks>g__AddArenaTasks|53_0(ref ItemTaskManager+<>c__DisplayClass53_0 param_0)
# VA 0x2c20598 .. 0x2c20790 (next mapped method entry)
 2c20598: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c2059c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c205a0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c205a4: d001d795     	adrp	x21, 0x6712000
 2c205a8: aa0103f3     	mov	x19, x1
 2c205ac: aa0003f4     	mov	x20, x0
 2c205b0: 3971e6a8     	ldrb	w8, [x21, #0xc79]
 2c205b4: 370001e8     	tbnz	w8, #0x0, 0x2c205f0 <__start_il2cpp+0x157fdc>
 2c205b8: b001b6e0     	adrp	x0, 0x62fd000
 2c205bc: f9446800     	ldr	x0, [x0, #0x8d0]
 2c205c0: 97f6da08     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c205c4: b001b6e0     	adrp	x0, 0x62fd000
 2c205c8: f9446c00     	ldr	x0, [x0, #0x8d8]
 2c205cc: 97f6da05     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c205d0: b001b6e0     	adrp	x0, 0x62fd000
 2c205d4: f9444c00     	ldr	x0, [x0, #0x898]
 2c205d8: 97f6da02     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c205dc: b001b6e0     	adrp	x0, 0x62fd000
 2c205e0: f944f400     	ldr	x0, [x0, #0x9e8]
 2c205e4: 97f6d9ff     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c205e8: 52800028     	mov	w8, #0x1                // =1
 2c205ec: 3931e6a8     	strb	w8, [x21, #0xc79]
 2c205f0: f9405a95     	ldr	x21, [x20, #0xb0]
 2c205f4: b4000cd5     	cbz	x21, 0x2c2078c <__start_il2cpp+0x158178>
 2c205f8: b001b6f7     	adrp	x23, 0x62fd000
 2c205fc: f94002a8     	ldr	x8, [x21]
 2c20600: f9446af7     	ldr	x23, [x23, #0x8d0]
 2c20604: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c20608: f94002e1     	ldr	x1, [x23]
 2c2060c: b4000129     	cbz	x9, 0x2c20630 <__start_il2cpp+0x15801c>
 2c20610: f940590a     	ldr	x10, [x8, #0xb0]
 2c20614: 9100214a     	add	x10, x10, #0x8
 2c20618: f85f814b     	ldur	x11, [x10, #-0x8]
 2c2061c: eb01017f     	cmp	x11, x1
 2c20620: 54000100     	b.eq	0x2c20640 <__start_il2cpp+0x15802c>
 2c20624: f1000529     	subs	x9, x9, #0x1
 2c20628: 9100414a     	add	x10, x10, #0x10
 2c2062c: 54ffff61     	b.ne	0x2c20618 <__start_il2cpp+0x158004>
 2c20630: aa1503e0     	mov	x0, x21
 2c20634: 52800082     	mov	w2, #0x4                // =4
 2c20638: 97f7b74b     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c2063c: 14000005     	b	0x2c20650 <__start_il2cpp+0x15803c>
 2c20640: b9400149     	ldr	w9, [x10]
 2c20644: 11001129     	add	w9, w9, #0x4
 2c20648: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c2064c: 9104e100     	add	x0, x8, #0x138
 2c20650: a9400408     	ldp	x8, x1, [x0]
 2c20654: aa1503e0     	mov	x0, x21
 2c20658: d63f0100     	blr	x8
 2c2065c: b4000980     	cbz	x0, 0x2c2078c <__start_il2cpp+0x158178>
 2c20660: b001b6e8     	adrp	x8, 0x62fd000
 2c20664: f944f508     	ldr	x8, [x8, #0x9e8]
 2c20668: f9400101     	ldr	x1, [x8]
 2c2066c: 944acaae     	bl	0x3ed3124 <__start_il2cpp+0x140ab10>
 2c20670: b9409a88     	ldr	w8, [x20, #0x98]
 2c20674: f9405e95     	ldr	x21, [x20, #0xb8]
 2c20678: 6b000108     	subs	w8, w8, w0
 2c2067c: 1a9fc516     	csinc	w22, w8, wzr, gt
 2c20680: b4000875     	cbz	x21, 0x2c2078c <__start_il2cpp+0x158178>
 2c20684: f94002a8     	ldr	x8, [x21]
 2c20688: f94002e1     	ldr	x1, [x23]
 2c2068c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c20690: b4000129     	cbz	x9, 0x2c206b4 <__start_il2cpp+0x1580a0>
 2c20694: f940590a     	ldr	x10, [x8, #0xb0]
 2c20698: 9100214a     	add	x10, x10, #0x8
 2c2069c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c206a0: eb01017f     	cmp	x11, x1
 2c206a4: 54000100     	b.eq	0x2c206c4 <__start_il2cpp+0x1580b0>
 2c206a8: f1000529     	subs	x9, x9, #0x1
 2c206ac: 9100414a     	add	x10, x10, #0x10
 2c206b0: 54ffff61     	b.ne	0x2c2069c <__start_il2cpp+0x158088>
 2c206b4: aa1503e0     	mov	x0, x21
 2c206b8: 52800022     	mov	w2, #0x1                // =1
 2c206bc: 97f7b72a     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c206c0: 14000005     	b	0x2c206d4 <__start_il2cpp+0x1580c0>
 2c206c4: b9400149     	ldr	w9, [x10]
 2c206c8: 11000529     	add	w9, w9, #0x1
 2c206cc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c206d0: 9104e100     	add	x0, x8, #0x138
 2c206d4: a9400808     	ldp	x8, x2, [x0]
 2c206d8: aa1503e0     	mov	x0, x21
 2c206dc: 2a1603e1     	mov	w1, w22
 2c206e0: d63f0100     	blr	x8
 2c206e4: f9405e94     	ldr	x20, [x20, #0xb8]
 2c206e8: b4000534     	cbz	x20, 0x2c2078c <__start_il2cpp+0x158178>
 2c206ec: f9400288     	ldr	x8, [x20]
 2c206f0: f94002e1     	ldr	x1, [x23]
 2c206f4: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c206f8: b4000129     	cbz	x9, 0x2c2071c <__start_il2cpp+0x158108>
 2c206fc: f940590a     	ldr	x10, [x8, #0xb0]
 2c20700: 9100214a     	add	x10, x10, #0x8
 2c20704: f85f814b     	ldur	x11, [x10, #-0x8]
 2c20708: eb01017f     	cmp	x11, x1
 2c2070c: 54000100     	b.eq	0x2c2072c <__start_il2cpp+0x158118>
 2c20710: f1000529     	subs	x9, x9, #0x1
 2c20714: 9100414a     	add	x10, x10, #0x10
 2c20718: 54ffff61     	b.ne	0x2c20704 <__start_il2cpp+0x1580f0>
 2c2071c: aa1403e0     	mov	x0, x20
 2c20720: 528000c2     	mov	w2, #0x6                // =6
 2c20724: 97f7b710     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c20728: 14000005     	b	0x2c2073c <__start_il2cpp+0x158128>
 2c2072c: b9400149     	ldr	w9, [x10]
 2c20730: 11001929     	add	w9, w9, #0x6
 2c20734: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c20738: 9104e100     	add	x0, x8, #0x138
 2c2073c: a9400408     	ldp	x8, x1, [x0]
 2c20740: aa1403e0     	mov	x0, x20
 2c20744: d63f0100     	blr	x8
 2c20748: b40001a0     	cbz	x0, 0x2c2077c <__start_il2cpp+0x158168>
 2c2074c: b9401808     	ldr	w8, [x0, #0x18]
 2c20750: aa0003e1     	mov	x1, x0
 2c20754: 34000148     	cbz	w8, 0x2c2077c <__start_il2cpp+0x158168>
 2c20758: f9400660     	ldr	x0, [x19, #0x8]
 2c2075c: b4000180     	cbz	x0, 0x2c2078c <__start_il2cpp+0x158178>
 2c20760: b001b6e8     	adrp	x8, 0x62fd000
 2c20764: f9446d08     	ldr	x8, [x8, #0x8d8]
 2c20768: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c2076c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c20770: f9400102     	ldr	x2, [x8]
 2c20774: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c20778: 143c2232     	b	0x3b29040 <__start_il2cpp+0x1060a2c>
 2c2077c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c20780: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c20784: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c20788: d65f03c0     	ret
 2c2078c: 97f6da3f     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Void CheckItemTasksObjectives()
# VA 0x2c20790 .. 0x2c20f08 (next mapped method entry)
 2c20790: d10443ff     	sub	sp, sp, #0x110
 2c20794: 6d0a23e9     	stp	d9, d8, [sp, #0xa0]
 2c20798: a90b7bfd     	stp	x29, x30, [sp, #0xb0]
 2c2079c: a90c6ffc     	stp	x28, x27, [sp, #0xc0]
 2c207a0: a90d67fa     	stp	x26, x25, [sp, #0xd0]
 2c207a4: a90e5ff8     	stp	x24, x23, [sp, #0xe0]
 2c207a8: a90f57f6     	stp	x22, x21, [sp, #0xf0]
 2c207ac: a9104ff4     	stp	x20, x19, [sp, #0x100]
 2c207b0: d001d794     	adrp	x20, 0x6712000
 2c207b4: aa0003f3     	mov	x19, x0
 2c207b8: 3971aa88     	ldrb	w8, [x20, #0xc6a]
 2c207bc: 37000728     	tbnz	w8, #0x0, 0x2c208a0 <__start_il2cpp+0x15828c>
 2c207c0: b001b6e0     	adrp	x0, 0x62fd000
 2c207c4: f944f800     	ldr	x0, [x0, #0x9f0]
 2c207c8: 97f6d986     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c207cc: b001b6c0     	adrp	x0, 0x62f9000
 2c207d0: f947e000     	ldr	x0, [x0, #0xfc0]
 2c207d4: 97f6d983     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c207d8: b001b6e0     	adrp	x0, 0x62fd000
 2c207dc: f944fc00     	ldr	x0, [x0, #0x9f8]
 2c207e0: 97f6d980     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c207e4: b001b6c0     	adrp	x0, 0x62f9000
 2c207e8: f947b800     	ldr	x0, [x0, #0xf70]
 2c207ec: 97f6d97d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c207f0: b001b6e0     	adrp	x0, 0x62fd000
 2c207f4: f9450000     	ldr	x0, [x0, #0xa00]
 2c207f8: 97f6d97a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c207fc: b001b6e0     	adrp	x0, 0x62fd000
 2c20800: f9450400     	ldr	x0, [x0, #0xa08]
 2c20804: 97f6d977     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20808: b001b6c0     	adrp	x0, 0x62f9000
 2c2080c: f947c400     	ldr	x0, [x0, #0xf88]
 2c20810: 97f6d974     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20814: b001b6c0     	adrp	x0, 0x62f9000
 2c20818: f9476c00     	ldr	x0, [x0, #0xed8]
 2c2081c: 97f6d971     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20820: b001b680     	adrp	x0, 0x62f1000
 2c20824: f947a800     	ldr	x0, [x0, #0xf50]
 2c20828: 97f6d96e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c2082c: b001b6e0     	adrp	x0, 0x62fd000
 2c20830: f9450800     	ldr	x0, [x0, #0xa10]
 2c20834: 97f6d96b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20838: b001b6e0     	adrp	x0, 0x62fd000
 2c2083c: f9450c00     	ldr	x0, [x0, #0xa18]
 2c20840: 97f6d968     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20844: b001b680     	adrp	x0, 0x62f1000
 2c20848: f947b400     	ldr	x0, [x0, #0xf68]
 2c2084c: 97f6d965     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20850: b001b6e0     	adrp	x0, 0x62fd000
 2c20854: f9451000     	ldr	x0, [x0, #0xa20]
 2c20858: 97f6d962     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c2085c: b001b6e0     	adrp	x0, 0x62fd000
 2c20860: f9451400     	ldr	x0, [x0, #0xa28]
 2c20864: 97f6d95f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20868: b001b6c0     	adrp	x0, 0x62f9000
 2c2086c: f947cc00     	ldr	x0, [x0, #0xf98]
 2c20870: 97f6d95c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20874: b001b6c0     	adrp	x0, 0x62f9000
 2c20878: f9479800     	ldr	x0, [x0, #0xf30]
 2c2087c: 97f6d959     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20880: b001b6e0     	adrp	x0, 0x62fd000
 2c20884: f9451800     	ldr	x0, [x0, #0xa30]
 2c20888: 97f6d956     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c2088c: b001b6e0     	adrp	x0, 0x62fd000
 2c20890: f9451c00     	ldr	x0, [x0, #0xa38]
 2c20894: 97f6d953     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c20898: 52800028     	mov	w8, #0x1                // =1
 2c2089c: 3931aa88     	strb	w8, [x20, #0xc6a]
 2c208a0: 6f00e400     	movi	v0.2d, #0000000000000000
 2c208a4: f9400a74     	ldr	x20, [x19, #0x10]
 2c208a8: f9004fff     	str	xzr, [sp, #0x98]
 2c208ac: a9057fff     	stp	xzr, xzr, [sp, #0x50]
 2c208b0: f90033ff     	str	xzr, [sp, #0x60]
 2c208b4: ad0383e0     	stp	q0, q0, [sp, #0x70]
 2c208b8: b4002d54     	cbz	x20, 0x2c20e60 <__start_il2cpp+0x15884c>
 2c208bc: b001b6ea     	adrp	x10, 0x62fd000
 2c208c0: f9400288     	ldr	x8, [x20]
 2c208c4: f945094a     	ldr	x10, [x10, #0xa10]
 2c208c8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c208cc: f9400141     	ldr	x1, [x10]
 2c208d0: b4000129     	cbz	x9, 0x2c208f4 <__start_il2cpp+0x1582e0>
 2c208d4: f940590a     	ldr	x10, [x8, #0xb0]
 2c208d8: 9100214a     	add	x10, x10, #0x8
 2c208dc: f85f814b     	ldur	x11, [x10, #-0x8]
 2c208e0: eb01017f     	cmp	x11, x1
 2c208e4: 54000100     	b.eq	0x2c20904 <__start_il2cpp+0x1582f0>
 2c208e8: f1000529     	subs	x9, x9, #0x1
 2c208ec: 9100414a     	add	x10, x10, #0x10
 2c208f0: 54ffff61     	b.ne	0x2c208dc <__start_il2cpp+0x1582c8>
 2c208f4: aa1403e0     	mov	x0, x20
 2c208f8: 2a1f03e2     	mov	w2, wzr
 2c208fc: 97f7b69a     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c20900: 14000004     	b	0x2c20910 <__start_il2cpp+0x1582fc>
 2c20904: b9800149     	ldrsw	x9, [x10]
 2c20908: 8b091108     	add	x8, x8, x9, lsl #4
 2c2090c: 9104e100     	add	x0, x8, #0x138
 2c20910: b001b6dc     	adrp	x28, 0x62f9000
 2c20914: b001b6f9     	adrp	x25, 0x62fd000
 2c20918: f947bb9c     	ldr	x28, [x28, #0xf70]
 2c2091c: f9451b39     	ldr	x25, [x25, #0xa30]
 2c20920: a9400408     	ldp	x8, x1, [x0]
 2c20924: aa1403e0     	mov	x0, x20
 2c20928: d63f0100     	blr	x8
 2c2092c: 910263e9     	add	x9, sp, #0x98
 2c20930: 1e2e1008     	fmov	s8, #1.00000000
 2c20934: f9004fe0     	str	x0, [sp, #0x98]
 2c20938: 52800028     	mov	w8, #0x1                // =1
 2c2093c: a90427ff     	stp	xzr, x9, [sp, #0x40]
 2c20940: 910143fb     	add	x27, sp, #0x50
 2c20944: b9000be8     	str	w8, [sp, #0x8]
 2c20948: f9404ff4     	ldr	x20, [sp, #0x98]
 2c2094c: b40027f4     	cbz	x20, 0x2c20e48 <__start_il2cpp+0x158834>
 2c20950: f9400288     	ldr	x8, [x20]
 2c20954: b001b68a     	adrp	x10, 0x62f1000
 2c20958: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c2095c: f947b54a     	ldr	x10, [x10, #0xf68]
 2c20960: f9400141     	ldr	x1, [x10]
 2c20964: b4000129     	cbz	x9, 0x2c20988 <__start_il2cpp+0x158374>
 2c20968: f940590a     	ldr	x10, [x8, #0xb0]
 2c2096c: 9100214a     	add	x10, x10, #0x8
 2c20970: f85f814b     	ldur	x11, [x10, #-0x8]
 2c20974: eb01017f     	cmp	x11, x1
 2c20978: 54000100     	b.eq	0x2c20998 <__start_il2cpp+0x158384>
 2c2097c: f1000529     	subs	x9, x9, #0x1
 2c20980: 9100414a     	add	x10, x10, #0x10
 2c20984: 54ffff61     	b.ne	0x2c20970 <__start_il2cpp+0x15835c>
 2c20988: aa1403e0     	mov	x0, x20
 2c2098c: 2a1f03e2     	mov	w2, wzr
 2c20990: 97f7b675     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c20994: 14000004     	b	0x2c209a4 <__start_il2cpp+0x158390>
 2c20998: b9800149     	ldrsw	x9, [x10]
 2c2099c: 8b091108     	add	x8, x8, x9, lsl #4
 2c209a0: 9104e100     	add	x0, x8, #0x138
 2c209a4: a9400408     	ldp	x8, x1, [x0]
 2c209a8: aa1403e0     	mov	x0, x20
 2c209ac: d63f0100     	blr	x8
 2c209b0: 36001f00     	tbz	w0, #0x0, 0x2c20d90 <__start_il2cpp+0x15877c>
 2c209b4: f9404ff4     	ldr	x20, [sp, #0x98]
 2c209b8: b40024b4     	cbz	x20, 0x2c20e4c <__start_il2cpp+0x158838>
 2c209bc: f9400288     	ldr	x8, [x20]
 2c209c0: b001b6ea     	adrp	x10, 0x62fd000
 2c209c4: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c209c8: f9450d4a     	ldr	x10, [x10, #0xa18]
 2c209cc: f9400141     	ldr	x1, [x10]
 2c209d0: b4000129     	cbz	x9, 0x2c209f4 <__start_il2cpp+0x1583e0>
 2c209d4: f940590a     	ldr	x10, [x8, #0xb0]
 2c209d8: 9100214a     	add	x10, x10, #0x8
 2c209dc: f85f814b     	ldur	x11, [x10, #-0x8]
 2c209e0: eb01017f     	cmp	x11, x1
 2c209e4: 54000100     	b.eq	0x2c20a04 <__start_il2cpp+0x1583f0>
 2c209e8: f1000529     	subs	x9, x9, #0x1
 2c209ec: 9100414a     	add	x10, x10, #0x10
 2c209f0: 54ffff61     	b.ne	0x2c209dc <__start_il2cpp+0x1583c8>
 2c209f4: aa1403e0     	mov	x0, x20
 2c209f8: 2a1f03e2     	mov	w2, wzr
 2c209fc: 97f7b65a     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c20a00: 14000004     	b	0x2c20a10 <__start_il2cpp+0x1583fc>
 2c20a04: b9800149     	ldrsw	x9, [x10]
 2c20a08: 8b091108     	add	x8, x8, x9, lsl #4
 2c20a0c: 9104e100     	add	x0, x8, #0x138
 2c20a10: a9400408     	ldp	x8, x1, [x0]
 2c20a14: aa1403e0     	mov	x0, x20
 2c20a18: d63f0100     	blr	x8
 2c20a1c: aa0003f4     	mov	x20, x0
 2c20a20: b4002180     	cbz	x0, 0x2c20e50 <__start_il2cpp+0x15883c>
 2c20a24: f9401280     	ldr	x0, [x20, #0x20]
 2c20a28: b4002160     	cbz	x0, 0x2c20e54 <__start_il2cpp+0x158840>
 2c20a2c: b001b6e8     	adrp	x8, 0x62fd000
 2c20a30: f944f908     	ldr	x8, [x8, #0x9f0]
 2c20a34: f9400101     	ldr	x1, [x8]
 2c20a38: 910083e8     	add	x8, sp, #0x20
 2c20a3c: 94712251     	bl	0x4869380 <__start_il2cpp+0x1da0d6c>
 2c20a40: 2f00e409     	movi	d9, #0000000000000000
 2c20a44: ad4107e0     	ldp	q0, q1, [sp, #0x20]
 2c20a48: 52800028     	mov	w8, #0x1                // =1
 2c20a4c: 2a1f03fa     	mov	w26, wzr
 2c20a50: 2a1f03f5     	mov	w21, wzr
 2c20a54: b9000fe8     	str	w8, [sp, #0xc]
 2c20a58: 9101c3e8     	add	x8, sp, #0x70
 2c20a5c: ad0387e0     	stp	q0, q1, [sp, #0x70]
 2c20a60: a90123ff     	stp	xzr, x8, [sp, #0x10]
 2c20a64: b001b6e8     	adrp	x8, 0x62fd000
 2c20a68: f9450108     	ldr	x8, [x8, #0xa00]
 2c20a6c: f9400101     	ldr	x1, [x8]
 2c20a70: 9101c3e0     	add	x0, sp, #0x70
 2c20a74: 947a73f6     	bl	0x4abda4c <__start_il2cpp+0x1ff5438>
 2c20a78: 36000e80     	tbz	w0, #0x0, 0x2c20c48 <__start_il2cpp+0x158634>
 2c20a7c: b9408bfd     	ldr	w29, [sp, #0x88]
 2c20a80: f9401a76     	ldr	x22, [x19, #0x30]
 2c20a84: 0b1a03ba     	add	w26, w29, w26
 2c20a88: b40010f6     	cbz	x22, 0x2c20ca4 <__start_il2cpp+0x158690>
 2c20a8c: f94002c8     	ldr	x8, [x22]
 2c20a90: b001b6ca     	adrp	x10, 0x62f9000
 2c20a94: 295063f7     	ldp	w23, w24, [sp, #0x80]
 2c20a98: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c20a9c: f9476d4a     	ldr	x10, [x10, #0xed8]
 2c20aa0: f9400141     	ldr	x1, [x10]
 2c20aa4: b4000129     	cbz	x9, 0x2c20ac8 <__start_il2cpp+0x1584b4>
 2c20aa8: f940590a     	ldr	x10, [x8, #0xb0]
 2c20aac: 9100214a     	add	x10, x10, #0x8
 2c20ab0: f85f814b     	ldur	x11, [x10, #-0x8]
 2c20ab4: eb01017f     	cmp	x11, x1
 2c20ab8: 54000100     	b.eq	0x2c20ad8 <__start_il2cpp+0x1584c4>
 2c20abc: f1000529     	subs	x9, x9, #0x1
 2c20ac0: 9100414a     	add	x10, x10, #0x10
 2c20ac4: 54ffff61     	b.ne	0x2c20ab0 <__start_il2cpp+0x15849c>
 2c20ac8: aa1603e0     	mov	x0, x22
 2c20acc: 52800182     	mov	w2, #0xc                // =12
 2c20ad0: 97f7b625     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c20ad4: 14000005     	b	0x2c20ae8 <__start_il2cpp+0x1584d4>
 2c20ad8: b9400149     	ldr	w9, [x10]
 2c20adc: 11003129     	add	w9, w9, #0xc
 2c20ae0: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c20ae4: 9104e100     	add	x0, x8, #0x138
 2c20ae8: a9401008     	ldp	x8, x4, [x0]
 2c20aec: aa1603e0     	mov	x0, x22
 2c20af0: 2a1703e1     	mov	w1, w23
 2c20af4: 2a1803e2     	mov	w2, w24
 2c20af8: 52800023     	mov	w3, #0x1                // =1
 2c20afc: d63f0100     	blr	x8
 2c20b00: aa0003f8     	mov	x24, x0
 2c20b04: b4000d40     	cbz	x0, 0x2c20cac <__start_il2cpp+0x158698>
 2c20b08: b001b6c8     	adrp	x8, 0x62f9000
 2c20b0c: f947cd08     	ldr	x8, [x8, #0xf98]
 2c20b10: f9400101     	ldr	x1, [x8]
 2c20b14: 910083e8     	add	x8, sp, #0x20
 2c20b18: aa1803e0     	mov	x0, x24
 2c20b1c: 943c23a9     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2c20b20: 3dc00be0     	ldr	q0, [sp, #0x20]
 2c20b24: f9401be8     	ldr	x8, [sp, #0x30]
 2c20b28: a9026fff     	stp	xzr, x27, [sp, #0x20]
 2c20b2c: 3d8017e0     	str	q0, [sp, #0x50]
 2c20b30: f90033e8     	str	x8, [sp, #0x60]
 2c20b34: f9400381     	ldr	x1, [x28]
 2c20b38: 910143e0     	add	x0, sp, #0x50
 2c20b3c: 94799757     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2c20b40: 360000e0     	tbz	w0, #0x0, 0x2c20b5c <__start_il2cpp+0x158548>
 2c20b44: f94033e0     	ldr	x0, [sp, #0x60]
 2c20b48: b4000620     	cbz	x0, 0x2c20c0c <__start_il2cpp+0x1585f8>
 2c20b4c: 52800021     	mov	w1, #0x1                // =1
 2c20b50: aa1f03e2     	mov	x2, xzr
 2c20b54: 97ff4e9a     	bl	0x2bf45bc <__start_il2cpp+0x12bfa8>
 2c20b58: 17fffff7     	b	0x2c20b34 <__start_il2cpp+0x158520>
 2c20b5c: aa1f03f6     	mov	x22, xzr
 2c20b60: 910143e0     	add	x0, sp, #0x50
 2c20b64: b001b6c8     	adrp	x8, 0x62f9000
 2c20b68: f947e108     	ldr	x8, [x8, #0xfc0]
 2c20b6c: f9400101     	ldr	x1, [x8]
 2c20b70: 94799749     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2c20b74: b5000a16     	cbnz	x22, 0x2c20cb4 <__start_il2cpp+0x1586a0>
 2c20b78: b9401b08     	ldr	w8, [x24, #0x18]
 2c20b7c: 6b1d011f     	cmp	w8, w29
 2c20b80: 540001cb     	b.lt	0x2c20bb8 <__start_il2cpp+0x1585a4>
 2c20b84: 710007bf     	cmp	w29, #0x1
 2c20b88: 54fff6eb     	b.lt	0x2c20a64 <__start_il2cpp+0x158450>
 2c20b8c: f9401680     	ldr	x0, [x20, #0x28]
 2c20b90: b4000980     	cbz	x0, 0x2c20cc0 <__start_il2cpp+0x1586ac>
 2c20b94: f9400323     	ldr	x3, [x25]
 2c20b98: 2a1503e1     	mov	w1, w21
 2c20b9c: 52800022     	mov	w2, #0x1                // =1
 2c20ba0: 9439ad4d     	bl	0x3a8c0d4 <__start_il2cpp+0xfc3ac0>
 2c20ba4: 1e282929     	fadd	s9, s9, s8
 2c20ba8: 710007bd     	subs	w29, w29, #0x1
 2c20bac: 110006b5     	add	w21, w21, #0x1
 2c20bb0: 54fffee1     	b.ne	0x2c20b8c <__start_il2cpp+0x158578>
 2c20bb4: 17ffffac     	b	0x2c20a64 <__start_il2cpp+0x158450>
 2c20bb8: 710007bf     	cmp	w29, #0x1
 2c20bbc: b9000fff     	str	wzr, [sp, #0xc]
 2c20bc0: 54fff52b     	b.lt	0x2c20a64 <__start_il2cpp+0x158450>
 2c20bc4: 2a1f03f6     	mov	w22, wzr
 2c20bc8: 1e282920     	fadd	s0, s9, s8
 2c20bcc: b9401b08     	ldr	w8, [x24, #0x18]
 2c20bd0: f9401680     	ldr	x0, [x20, #0x28]
 2c20bd4: 6b0802df     	cmp	w22, w8
 2c20bd8: 1e29bc09     	fcsel	s9, s0, s9, lt
 2c20bdc: b4000760     	cbz	x0, 0x2c20cc8 <__start_il2cpp+0x1586b4>
 2c20be0: 6b0802df     	cmp	w22, w8
 2c20be4: f9400323     	ldr	x3, [x25]
 2c20be8: 1a9fa7e2     	cset	w2, lt
 2c20bec: 0b1602a1     	add	w1, w21, w22
 2c20bf0: 9439ad39     	bl	0x3a8c0d4 <__start_il2cpp+0xfc3ac0>
 2c20bf4: 110006d6     	add	w22, w22, #0x1
 2c20bf8: 6b1603bf     	cmp	w29, w22
 2c20bfc: 54fffe61     	b.ne	0x2c20bc8 <__start_il2cpp+0x1585b4>
 2c20c00: b9000fff     	str	wzr, [sp, #0xc]
 2c20c04: 0b1602b5     	add	w21, w21, w22
 2c20c08: 17ffff97     	b	0x2c20a64 <__start_il2cpp+0x158450>
 2c20c0c: 97f6d91f     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20c10: 14000098     	b	0x2c20e70 <__start_il2cpp+0x15885c>
 2c20c14: 14000002     	b	0x2c20c1c <__start_il2cpp+0x158608>
 2c20c18: 14000001     	b	0x2c20c1c <__start_il2cpp+0x158608>
 2c20c1c: aa0103f6     	mov	x22, x1
 2c20c20: aa0003f7     	mov	x23, x0
 2c20c24: 710006df     	cmp	w22, #0x1
 2c20c28: 54000581     	b.ne	0x2c20cd8 <__start_il2cpp+0x1586c4>
 2c20c2c: aa1703e0     	mov	x0, x23
 2c20c30: 94cc16c4     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c20c34: f9400016     	ldr	x22, [x0]
 2c20c38: f90013f6     	str	x22, [sp, #0x20]
 2c20c3c: 94cc16c5     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c20c40: f94017e0     	ldr	x0, [sp, #0x28]
 2c20c44: 17ffffc8     	b	0x2c20b64 <__start_il2cpp+0x158550>
 2c20c48: 528001f5     	mov	w21, #0xf               // =15
 2c20c4c: b001b6e8     	adrp	x8, 0x62fd000
 2c20c50: f9400fe0     	ldr	x0, [sp, #0x18]
 2c20c54: f944fd08     	ldr	x8, [x8, #0x9f8]
 2c20c58: f9400101     	ldr	x1, [x8]
 2c20c5c: 947a73c7     	bl	0x4abdb78 <__start_il2cpp+0x1ff5564>
 2c20c60: f9400be0     	ldr	x0, [sp, #0x10]
 2c20c64: b5000fa0     	cbnz	x0, 0x2c20e58 <__start_il2cpp+0x158844>
 2c20c68: 71003ebf     	cmp	w21, #0xf
 2c20c6c: 54000040     	b.eq	0x2c20c74 <__start_il2cpp+0x158660>
 2c20c70: 35000935     	cbnz	w21, 0x2c20d94 <__start_il2cpp+0x158780>
 2c20c74: 1e220340     	scvtf	s0, w26
 2c20c78: b9400ff5     	ldr	w21, [sp, #0xc]
 2c20c7c: 120002a8     	and	w8, w21, #0x1
 2c20c80: 39006288     	strb	w8, [x20, #0x18]
 2c20c84: 1e201920     	fdiv	s0, s9, s0
 2c20c88: bd001e80     	str	s0, [x20, #0x1c]
 2c20c8c: f9401260     	ldr	x0, [x19, #0x20]
 2c20c90: b4000e60     	cbz	x0, 0x2c20e5c <__start_il2cpp+0x158848>
 2c20c94: aa1403e1     	mov	x1, x20
 2c20c98: 9400009c     	bl	0x2c20f08 <__start_il2cpp+0x1588f4>
 2c20c9c: 3607e575     	tbz	w21, #0x0, 0x2c20948 <__start_il2cpp+0x158334>
 2c20ca0: 14000029     	b	0x2c20d44 <__start_il2cpp+0x158730>
 2c20ca4: 97f6d8f9     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20ca8: 14000072     	b	0x2c20e70 <__start_il2cpp+0x15885c>
 2c20cac: 97f6d8f7     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20cb0: 14000070     	b	0x2c20e70 <__start_il2cpp+0x15885c>
 2c20cb4: aa1603e0     	mov	x0, x22
 2c20cb8: 97f6d8f2     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c20cbc: 1400006d     	b	0x2c20e70 <__start_il2cpp+0x15885c>
 2c20cc0: 97f6d8f2     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20cc4: 1400006b     	b	0x2c20e70 <__start_il2cpp+0x15885c>
 2c20cc8: 97f6d8f0     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20ccc: 14000069     	b	0x2c20e70 <__start_il2cpp+0x15885c>
 2c20cd0: aa0103f6     	mov	x22, x1
 2c20cd4: aa0003f7     	mov	x23, x0
 2c20cd8: 910083e0     	add	x0, sp, #0x20
 2c20cdc: 97ea22d6     	bl	0x26a9834 <.text+0x46d4>
 2c20ce0: 14000010     	b	0x2c20d20 <__start_il2cpp+0x15870c>
 2c20ce4: 14000001     	b	0x2c20ce8 <__start_il2cpp+0x1586d4>
 2c20ce8: aa0103f6     	mov	x22, x1
 2c20cec: aa0003f7     	mov	x23, x0
 2c20cf0: b9000fff     	str	wzr, [sp, #0xc]
 2c20cf4: 1400000b     	b	0x2c20d20 <__start_il2cpp+0x15870c>
 2c20cf8: 14000008     	b	0x2c20d18 <__start_il2cpp+0x158704>
 2c20cfc: 14000007     	b	0x2c20d18 <__start_il2cpp+0x158704>
 2c20d00: 14000006     	b	0x2c20d18 <__start_il2cpp+0x158704>
 2c20d04: 14000005     	b	0x2c20d18 <__start_il2cpp+0x158704>
 2c20d08: 14000004     	b	0x2c20d18 <__start_il2cpp+0x158704>
 2c20d0c: 14000003     	b	0x2c20d18 <__start_il2cpp+0x158704>
 2c20d10: 14000002     	b	0x2c20d18 <__start_il2cpp+0x158704>
 2c20d14: 14000001     	b	0x2c20d18 <__start_il2cpp+0x158704>
 2c20d18: aa0103f6     	mov	x22, x1
 2c20d1c: aa0003f7     	mov	x23, x0
 2c20d20: 710006df     	cmp	w22, #0x1
 2c20d24: 54000ac1     	b.ne	0x2c20e7c <__start_il2cpp+0x158868>
 2c20d28: aa1703e0     	mov	x0, x23
 2c20d2c: 94cc1685     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c20d30: f9400008     	ldr	x8, [x0]
 2c20d34: f9000be8     	str	x8, [sp, #0x10]
 2c20d38: 94cc1686     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c20d3c: 2a1f03f5     	mov	w21, wzr
 2c20d40: 17ffffc3     	b	0x2c20c4c <__start_il2cpp+0x158638>
 2c20d44: f9402675     	ldr	x21, [x19, #0x48]
 2c20d48: aa1403e0     	mov	x0, x20
 2c20d4c: aa1f03e1     	mov	x1, xzr
 2c20d50: 9408d332     	bl	0x2e55a18 <__start_il2cpp+0x38d404>
 2c20d54: b40008b5     	cbz	x21, 0x2c20e68 <__start_il2cpp+0x158854>
 2c20d58: b001b6e8     	adrp	x8, 0x62fd000
 2c20d5c: 2a0003e1     	mov	w1, w0
 2c20d60: f9451d08     	ldr	x8, [x8, #0xa38]
 2c20d64: f9400102     	ldr	x2, [x8]
 2c20d68: aa1503e0     	mov	x0, x21
 2c20d6c: 942808a7     	bl	0x3623008 <__start_il2cpp+0xb5a9f4>
 2c20d70: b9400be9     	ldr	w9, [sp, #0x8]
 2c20d74: 2a1f03e8     	mov	w8, wzr
 2c20d78: 3607de69     	tbz	w9, #0x0, 0x2c20944 <__start_il2cpp+0x158330>
 2c20d7c: f9401260     	ldr	x0, [x19, #0x20]
 2c20d80: b4000760     	cbz	x0, 0x2c20e6c <__start_il2cpp+0x158858>
 2c20d84: 94000145     	bl	0x2c21298 <__start_il2cpp+0x158c84>
 2c20d88: 2a1f03e8     	mov	w8, wzr
 2c20d8c: 17fffeee     	b	0x2c20944 <__start_il2cpp+0x158330>
 2c20d90: 52800215     	mov	w21, #0x10              // =16
 2c20d94: f94027e8     	ldr	x8, [sp, #0x48]
 2c20d98: f9400114     	ldr	x20, [x8]
 2c20d9c: b4000334     	cbz	x20, 0x2c20e00 <__start_il2cpp+0x1587ec>
 2c20da0: f9400288     	ldr	x8, [x20]
 2c20da4: b001b68a     	adrp	x10, 0x62f1000
 2c20da8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c20dac: f947a94a     	ldr	x10, [x10, #0xf50]
 2c20db0: f9400141     	ldr	x1, [x10]
 2c20db4: b4000129     	cbz	x9, 0x2c20dd8 <__start_il2cpp+0x1587c4>
 2c20db8: f940590a     	ldr	x10, [x8, #0xb0]
 2c20dbc: 9100214a     	add	x10, x10, #0x8
 2c20dc0: f85f814b     	ldur	x11, [x10, #-0x8]
 2c20dc4: eb01017f     	cmp	x11, x1
 2c20dc8: 54000100     	b.eq	0x2c20de8 <__start_il2cpp+0x1587d4>
 2c20dcc: f1000529     	subs	x9, x9, #0x1
 2c20dd0: 9100414a     	add	x10, x10, #0x10
 2c20dd4: 54ffff61     	b.ne	0x2c20dc0 <__start_il2cpp+0x1587ac>
 2c20dd8: aa1403e0     	mov	x0, x20
 2c20ddc: 2a1f03e2     	mov	w2, wzr
 2c20de0: 97f7b561     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c20de4: 14000004     	b	0x2c20df4 <__start_il2cpp+0x1587e0>
 2c20de8: b9800149     	ldrsw	x9, [x10]
 2c20dec: 8b091108     	add	x8, x8, x9, lsl #4
 2c20df0: 9104e100     	add	x0, x8, #0x138
 2c20df4: a9400408     	ldp	x8, x1, [x0]
 2c20df8: aa1403e0     	mov	x0, x20
 2c20dfc: d63f0100     	blr	x8
 2c20e00: f94023e0     	ldr	x0, [sp, #0x40]
 2c20e04: b5000300     	cbnz	x0, 0x2c20e64 <__start_il2cpp+0x158850>
 2c20e08: 321c02a8     	orr	w8, w21, #0x10
 2c20e0c: 7100411f     	cmp	w8, #0x10
 2c20e10: 540000a1     	b.ne	0x2c20e24 <__start_il2cpp+0x158810>
 2c20e14: f9401260     	ldr	x0, [x19, #0x20]
 2c20e18: b4000240     	cbz	x0, 0x2c20e60 <__start_il2cpp+0x15884c>
 2c20e1c: f9400a61     	ldr	x1, [x19, #0x10]
 2c20e20: 94000148     	bl	0x2c21340 <__start_il2cpp+0x158d2c>
 2c20e24: a9504ff4     	ldp	x20, x19, [sp, #0x100]
 2c20e28: a94f57f6     	ldp	x22, x21, [sp, #0xf0]
 2c20e2c: a94e5ff8     	ldp	x24, x23, [sp, #0xe0]
 2c20e30: a94d67fa     	ldp	x26, x25, [sp, #0xd0]
 2c20e34: a94c6ffc     	ldp	x28, x27, [sp, #0xc0]
 2c20e38: a94b7bfd     	ldp	x29, x30, [sp, #0xb0]
 2c20e3c: 6d4a23e9     	ldp	d9, d8, [sp, #0xa0]
 2c20e40: 910443ff     	add	sp, sp, #0x110
 2c20e44: d65f03c0     	ret
 2c20e48: 97f6d890     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20e4c: 97f6d88f     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20e50: 97f6d88e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20e54: 97f6d88d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20e58: 97f6d88a     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c20e5c: 97f6d88b     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20e60: 97f6d88a     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20e64: 97f6d887     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c20e68: 97f6d888     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20e6c: 97f6d887     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c20e70: 97ea12f7     	bl	0x26a5a4c <.text+0x8ec>
 2c20e74: aa0103f6     	mov	x22, x1
 2c20e78: aa0003f7     	mov	x23, x0
 2c20e7c: 910043e0     	add	x0, sp, #0x10
 2c20e80: 97ea2396     	bl	0x26a9cd8 <.text+0x4b78>
 2c20e84: 14000012     	b	0x2c20ecc <__start_il2cpp+0x1588b8>
 2c20e88: 1400000f     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20e8c: 1400000e     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20e90: 1400000d     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20e94: 1400000c     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20e98: 1400000b     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20e9c: 1400000a     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20ea0: 14000009     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20ea4: 14000008     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20ea8: 14000007     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20eac: 14000006     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20eb0: 14000005     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20eb4: 14000004     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20eb8: 14000003     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20ebc: 14000002     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20ec0: 14000001     	b	0x2c20ec4 <__start_il2cpp+0x1588b0>
 2c20ec4: aa0103f6     	mov	x22, x1
 2c20ec8: aa0003f7     	mov	x23, x0
 2c20ecc: 710006df     	cmp	w22, #0x1
 2c20ed0: 54000121     	b.ne	0x2c20ef4 <__start_il2cpp+0x1588e0>
 2c20ed4: aa1703e0     	mov	x0, x23
 2c20ed8: 94cc161a     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c20edc: f9400008     	ldr	x8, [x0]
 2c20ee0: f90023e8     	str	x8, [sp, #0x40]
 2c20ee4: 94cc161b     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c20ee8: 2a1f03f5     	mov	w21, wzr
 2c20eec: 17ffffaa     	b	0x2c20d94 <__start_il2cpp+0x158780>
 2c20ef0: aa0003f7     	mov	x23, x0
 2c20ef4: 910103e0     	add	x0, sp, #0x40
 2c20ef8: 97ea13ad     	bl	0x26a5dac <.text+0xc4c>
 2c20efc: aa1703e0     	mov	x0, x23
 2c20f00: 97fa8df7     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c20f04: 97ea12d2     	bl	0x26a5a4c <.text+0x8ec>

# ItemTaskManager :: System.Void CompleteTask(ActiveItemTask activeItemTask, ItemTaskView itemTaskView, System.Boolean skip = False)
# VA 0x2c21df0 .. 0x2c21ee0 (next mapped method entry)
 2c21df0: d10343ff     	sub	sp, sp, #0xd0
 2c21df4: f9004bfe     	str	x30, [sp, #0x90]
 2c21df8: a90a5ff8     	stp	x24, x23, [sp, #0xa0]
 2c21dfc: a90b57f6     	stp	x22, x21, [sp, #0xb0]
 2c21e00: a90c4ff4     	stp	x20, x19, [sp, #0xc0]
 2c21e04: b001d798     	adrp	x24, 0x6712000
 2c21e08: 9001b6f7     	adrp	x23, 0x62fd000
 2c21e0c: 2a0303f6     	mov	w22, w3
 2c21e10: 3971af08     	ldrb	w8, [x24, #0xc6b]
 2c21e14: f94586f7     	ldr	x23, [x23, #0xb08]
 2c21e18: aa0203f3     	mov	x19, x2
 2c21e1c: aa0103f4     	mov	x20, x1
 2c21e20: aa0003f5     	mov	x21, x0
 2c21e24: 370000c8     	tbnz	w8, #0x0, 0x2c21e3c <__start_il2cpp+0x159828>
 2c21e28: 9001b6e0     	adrp	x0, 0x62fd000
 2c21e2c: f9458400     	ldr	x0, [x0, #0xb08]
 2c21e30: 97f6d3ec     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c21e34: 52800028     	mov	w8, #0x1                // =1
 2c21e38: 3931af08     	strb	w8, [x24, #0xc6b]
 2c21e3c: 6f00e400     	movi	v0.2d, #0000000000000000
 2c21e40: 910003e8     	mov	x8, sp
 2c21e44: aa1f03e0     	mov	x0, xzr
 2c21e48: 120002d6     	and	w22, w22, #0x1
 2c21e4c: 910083f8     	add	x24, sp, #0x20
 2c21e50: ad0183e0     	stp	q0, q0, [sp, #0x30]
 2c21e54: ad0283e0     	stp	q0, q0, [sp, #0x50]
 2c21e58: ad0383e0     	stp	q0, q0, [sp, #0x70]
 2c21e5c: 3d800be0     	str	q0, [sp, #0x20]
 2c21e60: 948fe1a4     	bl	0x501a4f0 <__start_il2cpp+0x2551edc>
 2c21e64: ad4007e0     	ldp	q0, q1, [sp]
 2c21e68: b27d0300     	orr	x0, x24, #0x8
 2c21e6c: aa1f03e1     	mov	x1, xzr
 2c21e70: 3c8283e0     	stur	q0, [sp, #0x28]
 2c21e74: 3c8383e1     	stur	q1, [sp, #0x38]
 2c21e78: 97f6d3c5     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c21e7c: 9100a300     	add	x0, x24, #0x28
 2c21e80: aa1503e1     	mov	x1, x21
 2c21e84: f90027f5     	str	x21, [sp, #0x48]
 2c21e88: 97f6d3c1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c21e8c: 9100c300     	add	x0, x24, #0x30
 2c21e90: aa1403e1     	mov	x1, x20
 2c21e94: f9002bf4     	str	x20, [sp, #0x50]
 2c21e98: 97f6d3bd     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c21e9c: 9100e300     	add	x0, x24, #0x38
 2c21ea0: aa1303e1     	mov	x1, x19
 2c21ea4: f9002ff3     	str	x19, [sp, #0x58]
 2c21ea8: 97f6d3b9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c21eac: f94002e2     	ldr	x2, [x23]
 2c21eb0: 12800008     	mov	w8, #-0x1               // =-1
 2c21eb4: b27d0300     	orr	x0, x24, #0x8
 2c21eb8: 910083e1     	add	x1, sp, #0x20
 2c21ebc: 390183f6     	strb	w22, [sp, #0x60]
 2c21ec0: b90023e8     	str	w8, [sp, #0x20]
 2c21ec4: 941c7173     	bl	0x333e490 <__start_il2cpp+0x875e7c>
 2c21ec8: a94c4ff4     	ldp	x20, x19, [sp, #0xc0]
 2c21ecc: f9404bfe     	ldr	x30, [sp, #0x90]
 2c21ed0: a94b57f6     	ldp	x22, x21, [sp, #0xb0]
 2c21ed4: a94a5ff8     	ldp	x24, x23, [sp, #0xa0]
 2c21ed8: 910343ff     	add	sp, sp, #0xd0
 2c21edc: d65f03c0     	ret

# ItemTaskManager :: System.Void RemoveItemTask(ActiveItemTask activeItemTask)
# VA 0x2c21ee0 .. 0x2c220e8 (next mapped method entry)
 2c21ee0: f81c0ffe     	str	x30, [sp, #-0x40]!
 2c21ee4: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2c21ee8: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c21eec: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c21ef0: b001d795     	adrp	x21, 0x6712000
 2c21ef4: 9001b6f6     	adrp	x22, 0x62fd000
 2c21ef8: aa0103f4     	mov	x20, x1
 2c21efc: 3971b2a8     	ldrb	w8, [x21, #0xc6c]
 2c21f00: f9458ad6     	ldr	x22, [x22, #0xb10]
 2c21f04: aa0003f3     	mov	x19, x0
 2c21f08: 370003c8     	tbnz	w8, #0x0, 0x2c21f80 <__start_il2cpp+0x15996c>
 2c21f0c: f001b660     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c21f10: f946e800     	ldr	x0, [x0, #0xdd0]
 2c21f14: 97f6d3b3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c21f18: f001b680     	adrp	x0, 0x62f4000
 2c21f1c: f9476c00     	ldr	x0, [x0, #0xed8]
 2c21f20: 97f6d3b0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c21f24: 9001b6e0     	adrp	x0, 0x62fd000
 2c21f28: f9455c00     	ldr	x0, [x0, #0xab8]
 2c21f2c: 97f6d3ad     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c21f30: 9001b6e0     	adrp	x0, 0x62fd000
 2c21f34: f9448c00     	ldr	x0, [x0, #0x918]
 2c21f38: 97f6d3aa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c21f3c: 9001b6e0     	adrp	x0, 0x62fd000
 2c21f40: f9456800     	ldr	x0, [x0, #0xad0]
 2c21f44: 97f6d3a7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c21f48: 9001b6e0     	adrp	x0, 0x62fd000
 2c21f4c: f9456c00     	ldr	x0, [x0, #0xad8]
 2c21f50: 97f6d3a4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c21f54: 9001b6e0     	adrp	x0, 0x62fd000
 2c21f58: f9458c00     	ldr	x0, [x0, #0xb18]
 2c21f5c: 97f6d3a1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c21f60: 9001b6e0     	adrp	x0, 0x62fd000
 2c21f64: f9458800     	ldr	x0, [x0, #0xb10]
 2c21f68: 97f6d39e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c21f6c: 9001b6e0     	adrp	x0, 0x62fd000
 2c21f70: f9449c00     	ldr	x0, [x0, #0x938]
 2c21f74: 97f6d39b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c21f78: 52800028     	mov	w8, #0x1                // =1
 2c21f7c: 3931b2a8     	strb	w8, [x21, #0xc6c]
 2c21f80: f94002c0     	ldr	x0, [x22]
 2c21f84: 97f6d43d     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c21f88: aa1f03e1     	mov	x1, xzr
 2c21f8c: aa0003f6     	mov	x22, x0
 2c21f90: 9494b6ee     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c21f94: b4000a96     	cbz	x22, 0x2c220e4 <__start_il2cpp+0x159ad0>
 2c21f98: 9001b6f7     	adrp	x23, 0x62fd000
 2c21f9c: 9001b6f8     	adrp	x24, 0x62fd000
 2c21fa0: aa1603f5     	mov	x21, x22
 2c21fa4: f9456ef7     	ldr	x23, [x23, #0xad8]
 2c21fa8: f9458f18     	ldr	x24, [x24, #0xb18]
 2c21fac: aa1403e1     	mov	x1, x20
 2c21fb0: f8010eb4     	str	x20, [x21, #0x10]!
 2c21fb4: aa1503e0     	mov	x0, x21
 2c21fb8: 97f6d375     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c21fbc: f94002e0     	ldr	x0, [x23]
 2c21fc0: f9400a74     	ldr	x20, [x19, #0x10]
 2c21fc4: 97f6d42d     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c21fc8: f9400302     	ldr	x2, [x24]
 2c21fcc: aa1603e1     	mov	x1, x22
 2c21fd0: aa1f03e3     	mov	x3, xzr
 2c21fd4: aa0003f7     	mov	x23, x0
 2c21fd8: 9446444d     	bl	0x3db310c <__start_il2cpp+0x12eaaf8>
 2c21fdc: b4000854     	cbz	x20, 0x2c220e4 <__start_il2cpp+0x159ad0>
 2c21fe0: 9001b6e8     	adrp	x8, 0x62fd000
 2c21fe4: aa1403e0     	mov	x0, x20
 2c21fe8: aa1703e1     	mov	x1, x23
 2c21fec: f9455d08     	ldr	x8, [x8, #0xab8]
 2c21ff0: f9400102     	ldr	x2, [x8]
 2c21ff4: 943c1da4     	bl	0x3b29684 <__start_il2cpp+0x1061070>
 2c21ff8: 37f802a0     	tbnz	w0, #0x1f, 0x2c2204c <__start_il2cpp+0x159a38>
 2c21ffc: f9400a73     	ldr	x19, [x19, #0x10]
 2c22000: b4000733     	cbz	x19, 0x2c220e4 <__start_il2cpp+0x159ad0>
 2c22004: f001b6c8     	adrp	x8, 0x62fd000
 2c22008: f001b6d4     	adrp	x20, 0x62fd000
 2c2200c: 2a0003e1     	mov	w1, w0
 2c22010: f9456908     	ldr	x8, [x8, #0xad0]
 2c22014: f9448e94     	ldr	x20, [x20, #0x918]
 2c22018: aa1303e0     	mov	x0, x19
 2c2201c: f9400102     	ldr	x2, [x8]
 2c22020: 943c1ad0     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2c22024: f9400282     	ldr	x2, [x20]
 2c22028: aa0003e1     	mov	x1, x0
 2c2202c: aa1303e0     	mov	x0, x19
 2c22030: 943c20ea     	bl	0x3b2a3d8 <__start_il2cpp+0x1061dc4>
 2c22034: 360000c0     	tbz	w0, #0x0, 0x2c2204c <__start_il2cpp+0x159a38>
 2c22038: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c2203c: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c22040: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c22044: f84407fe     	ldr	x30, [sp], #0x40
 2c22048: d65f03c0     	ret
 2c2204c: f001b6c8     	adrp	x8, 0x62fd000
 2c22050: d001b694     	adrp	x20, 0x62f4000
 2c22054: f9449d08     	ldr	x8, [x8, #0x938]
 2c22058: f9476e94     	ldr	x20, [x20, #0xed8]
 2c2205c: f94002a0     	ldr	x0, [x21]
 2c22060: d001b675     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c22064: f946eab5     	ldr	x21, [x21, #0xdd0]
 2c22068: f9400113     	ldr	x19, [x8]
 2c2206c: b40000c0     	cbz	x0, 0x2c22084 <__start_il2cpp+0x159a70>
 2c22070: f9400008     	ldr	x8, [x0]
 2c22074: a9568509     	ldp	x9, x1, [x8, #0x168]
 2c22078: d63f0120     	blr	x9
 2c2207c: aa0003e1     	mov	x1, x0
 2c22080: 14000002     	b	0x2c22088 <__start_il2cpp+0x159a74>
 2c22084: aa1f03e1     	mov	x1, xzr
 2c22088: aa1303e0     	mov	x0, x19
 2c2208c: aa1f03e2     	mov	x2, xzr
 2c22090: 948d1b44     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2c22094: f9400288     	ldr	x8, [x20]
 2c22098: aa0003f4     	mov	x20, x0
 2c2209c: aa0803e0     	mov	x0, x8
 2c220a0: 97f6d3f6     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c220a4: aa1403e1     	mov	x1, x20
 2c220a8: aa1f03e2     	mov	x2, xzr
 2c220ac: aa1f03e3     	mov	x3, xzr
 2c220b0: aa0003f3     	mov	x19, x0
 2c220b4: 97fc3799     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2c220b8: f94002a0     	ldr	x0, [x21]
 2c220bc: b940e408     	ldr	w8, [x0, #0xe4]
 2c220c0: 35000048     	cbnz	w8, 0x2c220c8 <__start_il2cpp+0x159ab4>
 2c220c4: 97f6d3a6     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c220c8: aa1303e0     	mov	x0, x19
 2c220cc: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c220d0: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c220d4: aa1f03e1     	mov	x1, xzr
 2c220d8: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c220dc: f84407fe     	ldr	x30, [sp], #0x40
 2c220e0: 14bb54ca     	b	0x5af7408 <__start_il2cpp+0x302edf4>
 2c220e4: 97f6d3e9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Threading.Tasks.Task OrderDoneReceivingItemRewards(ItemTaskView itemTaskView, ItemTask itemTask, System.Collections.Generic.List`1<Cysharp.Threading.Tasks.UniTask> uiAnimationTasks)
# VA 0x2c220f0 .. 0x2c2221c (next mapped method entry)
 2c220f0: d10303ff     	sub	sp, sp, #0xc0
 2c220f4: f90043fe     	str	x30, [sp, #0x80]
 2c220f8: a9095ff8     	stp	x24, x23, [sp, #0x90]
 2c220fc: a90a57f6     	stp	x22, x21, [sp, #0xa0]
 2c22100: a90b4ff4     	stp	x20, x19, [sp, #0xb0]
 2c22104: 9001d798     	adrp	x24, 0x6712000
 2c22108: f001b677     	adrp	x23, 0x62f1000
 2c2210c: aa0303f3     	mov	x19, x3
 2c22110: 3971b708     	ldrb	w8, [x24, #0xc6d]
 2c22114: f946c2f7     	ldr	x23, [x23, #0xd80]
 2c22118: aa0203f4     	mov	x20, x2
 2c2211c: aa0103f5     	mov	x21, x1
 2c22120: aa0003f6     	mov	x22, x0
 2c22124: 37000128     	tbnz	w8, #0x0, 0x2c22148 <__start_il2cpp+0x159b34>
 2c22128: f001b6c0     	adrp	x0, 0x62fd000
 2c2212c: f9459000     	ldr	x0, [x0, #0xb20]
 2c22130: 97f6d32c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22134: f001b660     	adrp	x0, 0x62f1000
 2c22138: f946c000     	ldr	x0, [x0, #0xd80]
 2c2213c: 97f6d329     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22140: 52800028     	mov	w8, #0x1                // =1
 2c22144: 3931b708     	strb	w8, [x24, #0xc6d]
 2c22148: 6f00e400     	movi	v0.2d, #0000000000000000
 2c2214c: f94002e0     	ldr	x0, [x23]
 2c22150: f9003bff     	str	xzr, [sp, #0x70]
 2c22154: f001b6d7     	adrp	x23, 0x62fd000
 2c22158: b940e408     	ldr	w8, [x0, #0xe4]
 2c2215c: ad0283e0     	stp	q0, q0, [sp, #0x50]
 2c22160: 3d8013e0     	str	q0, [sp, #0x40]
 2c22164: f94592f7     	ldr	x23, [x23, #0xb20]
 2c22168: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2c2216c: 35000048     	cbnz	w8, 0x2c22174 <__start_il2cpp+0x159b60>
 2c22170: 97f6d37b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c22174: 910023e8     	add	x8, sp, #0x8
 2c22178: aa1f03e0     	mov	x0, xzr
 2c2217c: 948fe27d     	bl	0x501ab70 <__start_il2cpp+0x255255c>
 2c22180: 3cc083e0     	ldur	q0, [sp, #0x8]
 2c22184: f9400fe8     	ldr	x8, [sp, #0x18]
 2c22188: 910083f8     	add	x24, sp, #0x20
 2c2218c: b27d0300     	orr	x0, x24, #0x8
 2c22190: aa1f03e1     	mov	x1, xzr
 2c22194: 3c8283e0     	stur	q0, [sp, #0x28]
 2c22198: f9001fe8     	str	x8, [sp, #0x38]
 2c2219c: 97f6d2fc     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c221a0: 9100c300     	add	x0, x24, #0x30
 2c221a4: aa1603e1     	mov	x1, x22
 2c221a8: f9002bf6     	str	x22, [sp, #0x50]
 2c221ac: 97f6d2f8     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c221b0: 9100e300     	add	x0, x24, #0x38
 2c221b4: aa1503e1     	mov	x1, x21
 2c221b8: f9002ff5     	str	x21, [sp, #0x58]
 2c221bc: 97f6d2f4     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c221c0: 91008300     	add	x0, x24, #0x20
 2c221c4: aa1403e1     	mov	x1, x20
 2c221c8: f90023f4     	str	x20, [sp, #0x40]
 2c221cc: 97f6d2f0     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c221d0: 9100a300     	add	x0, x24, #0x28
 2c221d4: aa1303e1     	mov	x1, x19
 2c221d8: f90027f3     	str	x19, [sp, #0x48]
 2c221dc: 97f6d2ec     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c221e0: f94002e2     	ldr	x2, [x23]
 2c221e4: 12800008     	mov	w8, #-0x1               // =-1
 2c221e8: b27d0300     	orr	x0, x24, #0x8
 2c221ec: 910083e1     	add	x1, sp, #0x20
 2c221f0: b90023e8     	str	w8, [sp, #0x20]
 2c221f4: 941ae833     	bl	0x32dc2c0 <__start_il2cpp+0x813cac>
 2c221f8: b27d0300     	orr	x0, x24, #0x8
 2c221fc: aa1f03e1     	mov	x1, xzr
 2c22200: 948fd9c4     	bl	0x5018910 <__start_il2cpp+0x25502fc>
 2c22204: a94b4ff4     	ldp	x20, x19, [sp, #0xb0]
 2c22208: f94043fe     	ldr	x30, [sp, #0x80]
 2c2220c: a94a57f6     	ldp	x22, x21, [sp, #0xa0]
 2c22210: a9495ff8     	ldp	x24, x23, [sp, #0x90]
 2c22214: 910303ff     	add	sp, sp, #0xc0
 2c22218: d65f03c0     	ret

# ItemTaskManager :: System.Threading.Tasks.Task OrderDoneTicketsAndStarsAnimation(ActiveItemTask activeItemTask, ItemTaskView itemTaskView)
# VA 0x2c2221c .. 0x2c22328 (next mapped method entry)
 2c2221c: d10283ff     	sub	sp, sp, #0xa0
 2c22220: a9075ffe     	stp	x30, x23, [sp, #0x70]
 2c22224: a90857f6     	stp	x22, x21, [sp, #0x80]
 2c22228: a9094ff4     	stp	x20, x19, [sp, #0x90]
 2c2222c: 9001d797     	adrp	x23, 0x6712000
 2c22230: f001b676     	adrp	x22, 0x62f1000
 2c22234: aa0203f3     	mov	x19, x2
 2c22238: 3971bae8     	ldrb	w8, [x23, #0xc6e]
 2c2223c: f946c2d6     	ldr	x22, [x22, #0xd80]
 2c22240: aa0103f4     	mov	x20, x1
 2c22244: aa0003f5     	mov	x21, x0
 2c22248: 37000128     	tbnz	w8, #0x0, 0x2c2226c <__start_il2cpp+0x159c58>
 2c2224c: f001b6c0     	adrp	x0, 0x62fd000
 2c22250: f9459400     	ldr	x0, [x0, #0xb28]
 2c22254: 97f6d2e3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22258: f001b660     	adrp	x0, 0x62f1000
 2c2225c: f946c000     	ldr	x0, [x0, #0xd80]
 2c22260: 97f6d2e0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22264: 52800028     	mov	w8, #0x1                // =1
 2c22268: 3931bae8     	strb	w8, [x23, #0xc6e]
 2c2226c: 6f00e400     	movi	v0.2d, #0000000000000000
 2c22270: f94002c0     	ldr	x0, [x22]
 2c22274: f90033ff     	str	xzr, [sp, #0x60]
 2c22278: f001b6d6     	adrp	x22, 0x62fd000
 2c2227c: b940e408     	ldr	w8, [x0, #0xe4]
 2c22280: ad0203e0     	stp	q0, q0, [sp, #0x40]
 2c22284: f94596d6     	ldr	x22, [x22, #0xb28]
 2c22288: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2c2228c: 35000048     	cbnz	w8, 0x2c22294 <__start_il2cpp+0x159c80>
 2c22290: 97f6d333     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c22294: 910023e8     	add	x8, sp, #0x8
 2c22298: aa1f03e0     	mov	x0, xzr
 2c2229c: 948fe235     	bl	0x501ab70 <__start_il2cpp+0x255255c>
 2c222a0: 3cc083e0     	ldur	q0, [sp, #0x8]
 2c222a4: f9400fe8     	ldr	x8, [sp, #0x18]
 2c222a8: 910083f7     	add	x23, sp, #0x20
 2c222ac: b27d02e0     	orr	x0, x23, #0x8
 2c222b0: aa1f03e1     	mov	x1, xzr
 2c222b4: 3c8283e0     	stur	q0, [sp, #0x28]
 2c222b8: f9001fe8     	str	x8, [sp, #0x38]
 2c222bc: 97f6d2b4     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c222c0: 9100c2e0     	add	x0, x23, #0x30
 2c222c4: aa1503e1     	mov	x1, x21
 2c222c8: f9002bf5     	str	x21, [sp, #0x50]
 2c222cc: 97f6d2b0     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c222d0: 910082e0     	add	x0, x23, #0x20
 2c222d4: aa1403e1     	mov	x1, x20
 2c222d8: f90023f4     	str	x20, [sp, #0x40]
 2c222dc: 97f6d2ac     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c222e0: 9100a2e0     	add	x0, x23, #0x28
 2c222e4: aa1303e1     	mov	x1, x19
 2c222e8: f90027f3     	str	x19, [sp, #0x48]
 2c222ec: 97f6d2a8     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c222f0: f94002c2     	ldr	x2, [x22]
 2c222f4: 12800008     	mov	w8, #-0x1               // =-1
 2c222f8: b27d02e0     	orr	x0, x23, #0x8
 2c222fc: 910083e1     	add	x1, sp, #0x20
 2c22300: b90023e8     	str	w8, [sp, #0x20]
 2c22304: 941ae82c     	bl	0x32dc3b4 <__start_il2cpp+0x813da0>
 2c22308: b27d02e0     	orr	x0, x23, #0x8
 2c2230c: aa1f03e1     	mov	x1, xzr
 2c22310: 948fd980     	bl	0x5018910 <__start_il2cpp+0x25502fc>
 2c22314: a9494ff4     	ldp	x20, x19, [sp, #0x90]
 2c22318: a94857f6     	ldp	x22, x21, [sp, #0x80]
 2c2231c: a9475ffe     	ldp	x30, x23, [sp, #0x70]
 2c22320: 910283ff     	add	sp, sp, #0xa0
 2c22324: d65f03c0     	ret

# ItemTaskManager :: System.Collections.Generic.List`1<Cysharp.Threading.Tasks.UniTask> RemoveItemsFromBoard(ActiveItemTask activeItemTask, ItemTaskView itemTaskView)
# VA 0x2c22328 .. 0x2c22d10 (next mapped method entry)
 2c22328: d10503ff     	sub	sp, sp, #0x140
 2c2232c: 6d0c2beb     	stp	d11, d10, [sp, #0xc0]
 2c22330: 6d0d23e9     	stp	d9, d8, [sp, #0xd0]
 2c22334: a90e7bfd     	stp	x29, x30, [sp, #0xe0]
 2c22338: a90f6ffc     	stp	x28, x27, [sp, #0xf0]
 2c2233c: a91067fa     	stp	x26, x25, [sp, #0x100]
 2c22340: a9115ff8     	stp	x24, x23, [sp, #0x110]
 2c22344: a91257f6     	stp	x22, x21, [sp, #0x120]
 2c22348: a9134ff4     	stp	x20, x19, [sp, #0x130]
 2c2234c: 9001d797     	adrp	x23, 0x6712000
 2c22350: 9001b6b4     	adrp	x20, 0x62f6000
 2c22354: 9001b6b3     	adrp	x19, 0x62f6000
 2c22358: 3971bee8     	ldrb	w8, [x23, #0xc6f]
 2c2235c: f9461a94     	ldr	x20, [x20, #0xc30]
 2c22360: f9461673     	ldr	x19, [x19, #0xc28]
 2c22364: aa0203f8     	mov	x24, x2
 2c22368: aa0103f6     	mov	x22, x1
 2c2236c: aa0003f5     	mov	x21, x0
 2c22370: 37000ae8     	tbnz	w8, #0x0, 0x2c224cc <__start_il2cpp+0x159eb8>
 2c22374: f001b6c0     	adrp	x0, 0x62fd000
 2c22378: f944b800     	ldr	x0, [x0, #0x970]
 2c2237c: 97f6d299     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22380: f001b6c0     	adrp	x0, 0x62fd000
 2c22384: f944f800     	ldr	x0, [x0, #0x9f0]
 2c22388: 97f6d296     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c2238c: f001b6c0     	adrp	x0, 0x62fd000
 2c22390: f9459800     	ldr	x0, [x0, #0xb30]
 2c22394: 97f6d293     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22398: d001b6c0     	adrp	x0, 0x62fc000
 2c2239c: f943ac00     	ldr	x0, [x0, #0x758]
 2c223a0: 97f6d290     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c223a4: f001b6a0     	adrp	x0, 0x62f9000
 2c223a8: f947e000     	ldr	x0, [x0, #0xfc0]
 2c223ac: 97f6d28d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c223b0: f001b6c0     	adrp	x0, 0x62fd000
 2c223b4: f944fc00     	ldr	x0, [x0, #0x9f8]
 2c223b8: 97f6d28a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c223bc: f001b6c0     	adrp	x0, 0x62fd000
 2c223c0: f9447800     	ldr	x0, [x0, #0x8f0]
 2c223c4: 97f6d287     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c223c8: f001b6a0     	adrp	x0, 0x62f9000
 2c223cc: f947b800     	ldr	x0, [x0, #0xf70]
 2c223d0: 97f6d284     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c223d4: f001b6c0     	adrp	x0, 0x62fd000
 2c223d8: f9450000     	ldr	x0, [x0, #0xa00]
 2c223dc: 97f6d281     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c223e0: f001b6c0     	adrp	x0, 0x62fd000
 2c223e4: f9447c00     	ldr	x0, [x0, #0x8f8]
 2c223e8: 97f6d27e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c223ec: f001b6c0     	adrp	x0, 0x62fd000
 2c223f0: f9448000     	ldr	x0, [x0, #0x900]
 2c223f4: 97f6d27b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c223f8: f001b6c0     	adrp	x0, 0x62fd000
 2c223fc: f9450400     	ldr	x0, [x0, #0xa08]
 2c22400: 97f6d278     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22404: f001b6a0     	adrp	x0, 0x62f9000
 2c22408: f947c400     	ldr	x0, [x0, #0xf88]
 2c2240c: 97f6d275     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22410: d001b6c0     	adrp	x0, 0x62fc000
 2c22414: f943b400     	ldr	x0, [x0, #0x768]
 2c22418: 97f6d272     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c2241c: f001b6a0     	adrp	x0, 0x62f9000
 2c22420: f9476c00     	ldr	x0, [x0, #0xed8]
 2c22424: 97f6d26f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22428: b001b680     	adrp	x0, 0x62f3000
 2c2242c: f9479000     	ldr	x0, [x0, #0xf20]
 2c22430: 97f6d26c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22434: f001b6c0     	adrp	x0, 0x62fd000
 2c22438: f9451000     	ldr	x0, [x0, #0xa20]
 2c2243c: 97f6d269     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22440: f001b6c0     	adrp	x0, 0x62fd000
 2c22444: f9451400     	ldr	x0, [x0, #0xa28]
 2c22448: 97f6d266     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c2244c: 9001b6a0     	adrp	x0, 0x62f6000
 2c22450: f9461000     	ldr	x0, [x0, #0xc20]
 2c22454: 97f6d263     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22458: f001b6c0     	adrp	x0, 0x62fd000
 2c2245c: f9448800     	ldr	x0, [x0, #0x910]
 2c22460: 97f6d260     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22464: f001b6a0     	adrp	x0, 0x62f9000
 2c22468: f947cc00     	ldr	x0, [x0, #0xf98]
 2c2246c: 97f6d25d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22470: 9001b6a0     	adrp	x0, 0x62f6000
 2c22474: f9461400     	ldr	x0, [x0, #0xc28]
 2c22478: 97f6d25a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c2247c: f001b6c0     	adrp	x0, 0x62fd000
 2c22480: f9449400     	ldr	x0, [x0, #0x928]
 2c22484: 97f6d257     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22488: f001b6a0     	adrp	x0, 0x62f9000
 2c2248c: f9479800     	ldr	x0, [x0, #0xf30]
 2c22490: 97f6d254     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22494: f001b6a0     	adrp	x0, 0x62f9000
 2c22498: f947d800     	ldr	x0, [x0, #0xfb0]
 2c2249c: 97f6d251     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c224a0: 9001b6a0     	adrp	x0, 0x62f6000
 2c224a4: f9461800     	ldr	x0, [x0, #0xc30]
 2c224a8: 97f6d24e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c224ac: f001b6c0     	adrp	x0, 0x62fd000
 2c224b0: f9459c00     	ldr	x0, [x0, #0xb38]
 2c224b4: 97f6d24b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c224b8: f001b6c0     	adrp	x0, 0x62fd000
 2c224bc: f945a000     	ldr	x0, [x0, #0xb40]
 2c224c0: 97f6d248     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c224c4: 52800028     	mov	w8, #0x1                // =1
 2c224c8: 3931bee8     	strb	w8, [x23, #0xc6f]
 2c224cc: 6f00e400     	movi	v0.2d, #0000000000000000
 2c224d0: f9400280     	ldr	x0, [x20]
 2c224d4: a9087fff     	stp	xzr, xzr, [sp, #0x80]
 2c224d8: f9004bff     	str	xzr, [sp, #0x90]
 2c224dc: a9067fff     	stp	xzr, xzr, [sp, #0x60]
 2c224e0: f9003bff     	str	xzr, [sp, #0x70]
 2c224e4: ad0503e0     	stp	q0, q0, [sp, #0xa0]
 2c224e8: 97f6d2e4     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c224ec: f9400261     	ldr	x1, [x19]
 2c224f0: aa0003f3     	mov	x19, x0
 2c224f4: 943dea6d     	bl	0x3b9cea8 <__start_il2cpp+0x10d4894>
 2c224f8: b4003836     	cbz	x22, 0x2c22bfc <__start_il2cpp+0x15a5e8>
 2c224fc: f94012c0     	ldr	x0, [x22, #0x20]
 2c22500: f9000bf8     	str	x24, [sp, #0x10]
 2c22504: b40037c0     	cbz	x0, 0x2c22bfc <__start_il2cpp+0x15a5e8>
 2c22508: f001b6c8     	adrp	x8, 0x62fd000
 2c2250c: f001b6bb     	adrp	x27, 0x62f9000
 2c22510: f001b6bc     	adrp	x28, 0x62f9000
 2c22514: f944f908     	ldr	x8, [x8, #0x9f0]
 2c22518: f947db7b     	ldr	x27, [x27, #0xfb0]
 2c2251c: f947bb9c     	ldr	x28, [x28, #0xf70]
 2c22520: f9400101     	ldr	x1, [x8]
 2c22524: 910103e8     	add	x8, sp, #0x40
 2c22528: 94711b96     	bl	0x4869380 <__start_il2cpp+0x1da0d6c>
 2c2252c: ad4207e0     	ldp	q0, q1, [sp, #0x40]
 2c22530: 910283e8     	add	x8, sp, #0xa0
 2c22534: 2a1f03fd     	mov	w29, wzr
 2c22538: a90323ff     	stp	xzr, x8, [sp, #0x30]
 2c2253c: ad0507e0     	stp	q0, q1, [sp, #0xa0]
 2c22540: f001b6c8     	adrp	x8, 0x62fd000
 2c22544: f9450108     	ldr	x8, [x8, #0xa00]
 2c22548: f9400101     	ldr	x1, [x8]
 2c2254c: 910283e0     	add	x0, sp, #0xa0
 2c22550: 947a6d3f     	bl	0x4abda4c <__start_il2cpp+0x1ff5438>
 2c22554: 36003060     	tbz	w0, #0x0, 0x2c22b60 <__start_il2cpp+0x15a54c>
 2c22558: f9401ab7     	ldr	x23, [x21, #0x30]
 2c2255c: b4003437     	cbz	x23, 0x2c22be0 <__start_il2cpp+0x15a5cc>
 2c22560: f9405bea     	ldr	x10, [sp, #0xb0]
 2c22564: f94002e8     	ldr	x8, [x23]
 2c22568: b940bbf4     	ldr	w20, [sp, #0xb8]
 2c2256c: f9000fea     	str	x10, [sp, #0x18]
 2c22570: f001b6aa     	adrp	x10, 0x62f9000
 2c22574: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c22578: f9476d4a     	ldr	x10, [x10, #0xed8]
 2c2257c: f9400141     	ldr	x1, [x10]
 2c22580: b4000129     	cbz	x9, 0x2c225a4 <__start_il2cpp+0x159f90>
 2c22584: f940590a     	ldr	x10, [x8, #0xb0]
 2c22588: 9100214a     	add	x10, x10, #0x8
 2c2258c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c22590: eb01017f     	cmp	x11, x1
 2c22594: 54000100     	b.eq	0x2c225b4 <__start_il2cpp+0x159fa0>
 2c22598: f1000529     	subs	x9, x9, #0x1
 2c2259c: 9100414a     	add	x10, x10, #0x10
 2c225a0: 54ffff61     	b.ne	0x2c2258c <__start_il2cpp+0x159f78>
 2c225a4: aa1703e0     	mov	x0, x23
 2c225a8: 52800182     	mov	w2, #0xc                // =12
 2c225ac: 97f7af6e     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c225b0: 14000005     	b	0x2c225c4 <__start_il2cpp+0x159fb0>
 2c225b4: b9400149     	ldr	w9, [x10]
 2c225b8: 11003129     	add	w9, w9, #0xc
 2c225bc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c225c0: 9104e100     	add	x0, x8, #0x138
 2c225c4: f9400fe1     	ldr	x1, [sp, #0x18]
 2c225c8: a9401008     	ldp	x8, x4, [x0]
 2c225cc: d360fc22     	lsr	x2, x1, #32
 2c225d0: aa1703e0     	mov	x0, x23
 2c225d4: 52800023     	mov	w3, #0x1                // =1
 2c225d8: d63f0100     	blr	x8
 2c225dc: f001b6c8     	adrp	x8, 0x62fd000
 2c225e0: aa0003f7     	mov	x23, x0
 2c225e4: f945a108     	ldr	x8, [x8, #0xb40]
 2c225e8: f9400100     	ldr	x0, [x8]
 2c225ec: b940e408     	ldr	w8, [x0, #0xe4]
 2c225f0: 350000a8     	cbnz	w8, 0x2c22604 <__start_il2cpp+0x159ff0>
 2c225f4: 97f6d25a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c225f8: f001b6c8     	adrp	x8, 0x62fd000
 2c225fc: f945a108     	ldr	x8, [x8, #0xb40]
 2c22600: f9400100     	ldr	x0, [x8]
 2c22604: f9405c08     	ldr	x8, [x0, #0xb8]
 2c22608: f9400918     	ldr	x24, [x8, #0x10]
 2c2260c: b5000378     	cbnz	x24, 0x2c22678 <__start_il2cpp+0x15a064>
 2c22610: b940e409     	ldr	w9, [x0, #0xe4]
 2c22614: 350000c9     	cbnz	w9, 0x2c2262c <__start_il2cpp+0x15a018>
 2c22618: 97f6d251     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c2261c: f001b6c8     	adrp	x8, 0x62fd000
 2c22620: f945a108     	ldr	x8, [x8, #0xb40]
 2c22624: f9400108     	ldr	x8, [x8]
 2c22628: f9405d08     	ldr	x8, [x8, #0xb8]
 2c2262c: f9400119     	ldr	x25, [x8]
 2c22630: d001b6c8     	adrp	x8, 0x62fc000
 2c22634: f943b508     	ldr	x8, [x8, #0x768]
 2c22638: f9400100     	ldr	x0, [x8]
 2c2263c: 97f6d28f     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c22640: f001b6c8     	adrp	x8, 0x62fd000
 2c22644: aa0003f8     	mov	x24, x0
 2c22648: f9459d08     	ldr	x8, [x8, #0xb38]
 2c2264c: f9400102     	ldr	x2, [x8]
 2c22650: aa1903e1     	mov	x1, x25
 2c22654: aa1f03e3     	mov	x3, xzr
 2c22658: 94824d8d     	bl	0x4cb5c8c <__start_il2cpp+0x21ed678>
 2c2265c: f001b6c8     	adrp	x8, 0x62fd000
 2c22660: f945a108     	ldr	x8, [x8, #0xb40]
 2c22664: f9400108     	ldr	x8, [x8]
 2c22668: f9405d00     	ldr	x0, [x8, #0xb8]
 2c2266c: f8010c18     	str	x24, [x0, #0x10]!
 2c22670: aa1803e1     	mov	x1, x24
 2c22674: 97f6d1c6     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c22678: f001b6c8     	adrp	x8, 0x62fd000
 2c2267c: f9459908     	ldr	x8, [x8, #0xb30]
 2c22680: f9400102     	ldr	x2, [x8]
 2c22684: aa1703e0     	mov	x0, x23
 2c22688: aa1803e1     	mov	x1, x24
 2c2268c: 94204c32     	bl	0x3435754 <__start_il2cpp+0x96d140>
 2c22690: d001b6c8     	adrp	x8, 0x62fc000
 2c22694: f943ad08     	ldr	x8, [x8, #0x758]
 2c22698: f9400101     	ldr	x1, [x8]
 2c2269c: 9420a6ab     	bl	0x344c148 <__start_il2cpp+0x983b34>
 2c226a0: aa0003f7     	mov	x23, x0
 2c226a4: b4002a00     	cbz	x0, 0x2c22be4 <__start_il2cpp+0x15a5d0>
 2c226a8: b9401ae8     	ldr	w8, [x23, #0x18]
 2c226ac: 6b14011f     	cmp	w8, w20
 2c226b0: 5400102b     	b.lt	0x2c228b4 <__start_il2cpp+0x15a2a0>
 2c226b4: 7100069f     	cmp	w20, #0x1
 2c226b8: 54000feb     	b.lt	0x2c228b4 <__start_il2cpp+0x15a2a0>
 2c226bc: 2a1f03f8     	mov	w24, wzr
 2c226c0: f9400362     	ldr	x2, [x27]
 2c226c4: aa1703e0     	mov	x0, x23
 2c226c8: 2a1803e1     	mov	w1, w24
 2c226cc: 943c1925     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2c226d0: b4002700     	cbz	x0, 0x2c22bb0 <__start_il2cpp+0x15a59c>
 2c226d4: f9402c1a     	ldr	x26, [x0, #0x58]
 2c226d8: b40026fa     	cbz	x26, 0x2c22bb4 <__start_il2cpp+0x15a5a0>
 2c226dc: f9401b59     	ldr	x25, [x26, #0x30]
 2c226e0: aa1a03e0     	mov	x0, x26
 2c226e4: aa1f03e1     	mov	x1, xzr
 2c226e8: 52800022     	mov	w2, #0x1                // =1
 2c226ec: aa1f03e3     	mov	x3, xzr
 2c226f0: 97fdf487     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2c226f4: 52800028     	mov	w8, #0x1                // =1
 2c226f8: aa1b03f6     	mov	x22, x27
 2c226fc: f9400362     	ldr	x2, [x27]
 2c22700: 3900b348     	strb	w8, [x26, #0x2c]
 2c22704: f94016ba     	ldr	x26, [x21, #0x28]
 2c22708: aa1703e0     	mov	x0, x23
 2c2270c: 2a1803e1     	mov	w1, w24
 2c22710: 943c1914     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2c22714: b400253a     	cbz	x26, 0x2c22bb8 <__start_il2cpp+0x15a5a4>
 2c22718: f9400348     	ldr	x8, [x26]
 2c2271c: b001b68a     	adrp	x10, 0x62f3000
 2c22720: aa0003fb     	mov	x27, x0
 2c22724: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c22728: f947914a     	ldr	x10, [x10, #0xf20]
 2c2272c: f9400141     	ldr	x1, [x10]
 2c22730: b4000129     	cbz	x9, 0x2c22754 <__start_il2cpp+0x15a140>
 2c22734: f940590a     	ldr	x10, [x8, #0xb0]
 2c22738: 9100214a     	add	x10, x10, #0x8
 2c2273c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c22740: eb01017f     	cmp	x11, x1
 2c22744: 54000100     	b.eq	0x2c22764 <__start_il2cpp+0x15a150>
 2c22748: f1000529     	subs	x9, x9, #0x1
 2c2274c: 9100414a     	add	x10, x10, #0x10
 2c22750: 54ffff61     	b.ne	0x2c2273c <__start_il2cpp+0x15a128>
 2c22754: aa1a03e0     	mov	x0, x26
 2c22758: 52800062     	mov	w2, #0x3                // =3
 2c2275c: 97f7af02     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c22760: 14000005     	b	0x2c22774 <__start_il2cpp+0x15a160>
 2c22764: b9400149     	ldr	w9, [x10]
 2c22768: 11000d29     	add	w9, w9, #0x3
 2c2276c: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c22770: 9104e100     	add	x0, x8, #0x138
 2c22774: a9400c08     	ldp	x8, x3, [x0]
 2c22778: aa1a03e0     	mov	x0, x26
 2c2277c: aa1b03e1     	mov	x1, x27
 2c22780: 2a1f03e2     	mov	w2, wzr
 2c22784: d63f0100     	blr	x8
 2c22788: b40021f9     	cbz	x25, 0x2c22bc4 <__start_il2cpp+0x15a5b0>
 2c2278c: aa1903e0     	mov	x0, x25
 2c22790: aa1f03e1     	mov	x1, xzr
 2c22794: 94bc7472     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c22798: b4002120     	cbz	x0, 0x2c22bbc <__start_il2cpp+0x15a5a8>
 2c2279c: aa1f03e1     	mov	x1, xzr
 2c227a0: 94bcc624     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c227a4: f9400be8     	ldr	x8, [sp, #0x10]
 2c227a8: b4002108     	cbz	x8, 0x2c22bc8 <__start_il2cpp+0x15a5b4>
 2c227ac: f9402d08     	ldr	x8, [x8, #0x58]
 2c227b0: b40020e8     	cbz	x8, 0x2c22bcc <__start_il2cpp+0x15a5b8>
 2c227b4: b9401909     	ldr	w9, [x8, #0x18]
 2c227b8: 6b0903bf     	cmp	w29, w9
 2c227bc: 54001f82     	b.hs	0x2c22bac <__start_il2cpp+0x15a598>
 2c227c0: 8b3dcd08     	add	x8, x8, w29, sxtw #3
 2c227c4: f9401100     	ldr	x0, [x8, #0x20]
 2c227c8: b4001fc0     	cbz	x0, 0x2c22bc0 <__start_il2cpp+0x15a5ac>
 2c227cc: aa1f03e1     	mov	x1, xzr
 2c227d0: 1e204008     	fmov	s8, s0
 2c227d4: 1e204029     	fmov	s9, s1
 2c227d8: 94bc7461     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c227dc: b4001fc0     	cbz	x0, 0x2c22bd4 <__start_il2cpp+0x15a5c0>
 2c227e0: aa1f03e1     	mov	x1, xzr
 2c227e4: 94bcc613     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c227e8: f9403328     	ldr	x8, [x25, #0x60]
 2c227ec: b4001f68     	cbz	x8, 0x2c22bd8 <__start_il2cpp+0x15a5c4>
 2c227f0: f9401500     	ldr	x0, [x8, #0x28]
 2c227f4: b4001ee0     	cbz	x0, 0x2c22bd0 <__start_il2cpp+0x15a5bc>
 2c227f8: aa1f03e1     	mov	x1, xzr
 2c227fc: 1e20400a     	fmov	s10, s0
 2c22800: 1e20402b     	fmov	s11, s1
 2c22804: 94bb3358     	bl	0x5aef564 <__start_il2cpp+0x3026f50>
 2c22808: aa0003e1     	mov	x1, x0
 2c2280c: f9400ea0     	ldr	x0, [x21, #0x18]
 2c22810: b4001e60     	cbz	x0, 0x2c22bdc <__start_il2cpp+0x15a5c8>
 2c22814: 1e204100     	fmov	s0, s8
 2c22818: 1e204121     	fmov	s1, s9
 2c2281c: aa1f03e2     	mov	x2, xzr
 2c22820: 1e204142     	fmov	s2, s10
 2c22824: 1e204163     	fmov	s3, s11
 2c22828: 94032beb     	bl	0x2ced7d4 <__start_il2cpp+0x2251c0>
 2c2282c: b4001bf3     	cbz	x19, 0x2c22ba8 <__start_il2cpp+0x15a594>
 2c22830: 9001b6aa     	adrp	x10, 0x62f6000
 2c22834: b9401e6b     	ldr	w11, [x19, #0x1c]
 2c22838: f9400a69     	ldr	x9, [x19, #0x10]
 2c2283c: f946114a     	ldr	x10, [x10, #0xc20]
 2c22840: 1100056b     	add	w11, w11, #0x1
 2c22844: f940014a     	ldr	x10, [x10]
 2c22848: b9001e6b     	str	w11, [x19, #0x1c]
 2c2284c: b4001ae9     	cbz	x9, 0x2c22ba8 <__start_il2cpp+0x15a594>
 2c22850: b9801a6b     	ldrsw	x11, [x19, #0x18]
 2c22854: b940192c     	ldr	w12, [x9, #0x18]
 2c22858: aa0003e8     	mov	x8, x0
 2c2285c: aa0103e2     	mov	x2, x1
 2c22860: 6b0c017f     	cmp	w11, w12
 2c22864: 54000122     	b.hs	0x2c22888 <__start_il2cpp+0x15a274>
 2c22868: 8b0b1120     	add	x0, x9, x11, lsl #4
 2c2286c: 1100056a     	add	w10, w11, #0x1
 2c22870: b9001a6a     	str	w10, [x19, #0x18]
 2c22874: a9820808     	stp	x8, x2, [x0, #0x20]!
 2c22878: aa1f03e1     	mov	x1, xzr
 2c2287c: 97f6d144     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c22880: aa1603fb     	mov	x27, x22
 2c22884: 14000008     	b	0x2c228a4 <__start_il2cpp+0x15a290>
 2c22888: f9401149     	ldr	x9, [x10, #0x20]
 2c2288c: f9406129     	ldr	x9, [x9, #0xc0]
 2c22890: f9403923     	ldr	x3, [x9, #0x70]
 2c22894: aa1303e0     	mov	x0, x19
 2c22898: aa0803e1     	mov	x1, x8
 2c2289c: 943debae     	bl	0x3b9d754 <__start_il2cpp+0x10d5140>
 2c228a0: aa1603fb     	mov	x27, x22
 2c228a4: 11000718     	add	w24, w24, #0x1
 2c228a8: 110007bd     	add	w29, w29, #0x1
 2c228ac: 6b14031f     	cmp	w24, w20
 2c228b0: 54fff081     	b.ne	0x2c226c0 <__start_il2cpp+0x15a0ac>
 2c228b4: f9400aa0     	ldr	x0, [x21, #0x10]
 2c228b8: b4001980     	cbz	x0, 0x2c22be8 <__start_il2cpp+0x15a5d4>
 2c228bc: b9401808     	ldr	w8, [x0, #0x18]
 2c228c0: 35000448     	cbnz	w8, 0x2c22948 <__start_il2cpp+0x15a334>
 2c228c4: f001b6a8     	adrp	x8, 0x62f9000
 2c228c8: f947cd08     	ldr	x8, [x8, #0xf98]
 2c228cc: f9400101     	ldr	x1, [x8]
 2c228d0: 910103e8     	add	x8, sp, #0x40
 2c228d4: aa1703e0     	mov	x0, x23
 2c228d8: 943c1c3a     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2c228dc: f9402be8     	ldr	x8, [sp, #0x50]
 2c228e0: 3dc013e0     	ldr	q0, [sp, #0x40]
 2c228e4: f9004be8     	str	x8, [sp, #0x90]
 2c228e8: 910203e8     	add	x8, sp, #0x80
 2c228ec: 3d8023e0     	str	q0, [sp, #0x80]
 2c228f0: a90423ff     	stp	xzr, x8, [sp, #0x40]
 2c228f4: f9400381     	ldr	x1, [x28]
 2c228f8: 910203e0     	add	x0, sp, #0x80
 2c228fc: 94798fe7     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2c22900: 360000e0     	tbz	w0, #0x0, 0x2c2291c <__start_il2cpp+0x15a308>
 2c22904: f9404be0     	ldr	x0, [sp, #0x90]
 2c22908: b4000da0     	cbz	x0, 0x2c22abc <__start_il2cpp+0x15a4a8>
 2c2290c: 2a1f03e1     	mov	w1, wzr
 2c22910: aa1f03e2     	mov	x2, xzr
 2c22914: 97ff472a     	bl	0x2bf45bc <__start_il2cpp+0x12bfa8>
 2c22918: 17fffff7     	b	0x2c228f4 <__start_il2cpp+0x15a2e0>
 2c2291c: aa1f03f8     	mov	x24, xzr
 2c22920: 2a1f03f4     	mov	w20, wzr
 2c22924: 910203e0     	add	x0, sp, #0x80
 2c22928: f001b6a8     	adrp	x8, 0x62f9000
 2c2292c: f947e108     	ldr	x8, [x8, #0xfc0]
 2c22930: f9400101     	ldr	x1, [x8]
 2c22934: 94798fd8     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2c22938: b50015d8     	cbnz	x24, 0x2c22bf0 <__start_il2cpp+0x15a5dc>
 2c2293c: 34ffe034     	cbz	w20, 0x2c22540 <__start_il2cpp+0x159f2c>
 2c22940: f9400aa0     	ldr	x0, [x21, #0x10]
 2c22944: b40015a0     	cbz	x0, 0x2c22bf8 <__start_il2cpp+0x15a5e4>
 2c22948: f001b6c8     	adrp	x8, 0x62fd000
 2c2294c: f9448908     	ldr	x8, [x8, #0x910]
 2c22950: f9400101     	ldr	x1, [x8]
 2c22954: 910103e8     	add	x8, sp, #0x40
 2c22958: 943c1c1a     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2c2295c: f9402be8     	ldr	x8, [sp, #0x50]
 2c22960: 3dc013e0     	ldr	q0, [sp, #0x40]
 2c22964: f9003be8     	str	x8, [sp, #0x70]
 2c22968: 910183e8     	add	x8, sp, #0x60
 2c2296c: 3d801be0     	str	q0, [sp, #0x60]
 2c22970: a90223ff     	stp	xzr, x8, [sp, #0x20]
 2c22974: f001b6c8     	adrp	x8, 0x62fd000
 2c22978: f9447d08     	ldr	x8, [x8, #0x8f8]
 2c2297c: f9400101     	ldr	x1, [x8]
 2c22980: 910183e0     	add	x0, sp, #0x60
 2c22984: 94798fc5     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2c22988: 360007a0     	tbz	w0, #0x0, 0x2c22a7c <__start_il2cpp+0x15a468>
 2c2298c: f9403be8     	ldr	x8, [sp, #0x70]
 2c22990: b40008e8     	cbz	x8, 0x2c22aac <__start_il2cpp+0x15a498>
 2c22994: f9401100     	ldr	x0, [x8, #0x20]
 2c22998: b40008e0     	cbz	x0, 0x2c22ab4 <__start_il2cpp+0x15a4a0>
 2c2299c: f001b6c8     	adrp	x8, 0x62fd000
 2c229a0: f944b908     	ldr	x8, [x8, #0x970]
 2c229a4: f9400102     	ldr	x2, [x8]
 2c229a8: f9400fe1     	ldr	x1, [sp, #0x18]
 2c229ac: 947119f3     	bl	0x4869178 <__start_il2cpp+0x1da0b64>
 2c229b0: 3707fe20     	tbnz	w0, #0x0, 0x2c22974 <__start_il2cpp+0x15a360>
 2c229b4: f001b6a8     	adrp	x8, 0x62f9000
 2c229b8: f947cd08     	ldr	x8, [x8, #0xf98]
 2c229bc: f9400101     	ldr	x1, [x8]
 2c229c0: 910103e8     	add	x8, sp, #0x40
 2c229c4: aa1703e0     	mov	x0, x23
 2c229c8: 943c1bfe     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2c229cc: f9402be8     	ldr	x8, [sp, #0x50]
 2c229d0: 3dc013e0     	ldr	q0, [sp, #0x40]
 2c229d4: f9004be8     	str	x8, [sp, #0x90]
 2c229d8: 910203e8     	add	x8, sp, #0x80
 2c229dc: 3d8023e0     	str	q0, [sp, #0x80]
 2c229e0: a90423ff     	stp	xzr, x8, [sp, #0x40]
 2c229e4: f9400381     	ldr	x1, [x28]
 2c229e8: 910203e0     	add	x0, sp, #0x80
 2c229ec: 94798fab     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2c229f0: 360000e0     	tbz	w0, #0x0, 0x2c22a0c <__start_il2cpp+0x15a3f8>
 2c229f4: f9404be0     	ldr	x0, [sp, #0x90]
 2c229f8: b4000220     	cbz	x0, 0x2c22a3c <__start_il2cpp+0x15a428>
 2c229fc: 2a1f03e1     	mov	w1, wzr
 2c22a00: aa1f03e2     	mov	x2, xzr
 2c22a04: 97ff46ee     	bl	0x2bf45bc <__start_il2cpp+0x12bfa8>
 2c22a08: 17fffff7     	b	0x2c229e4 <__start_il2cpp+0x15a3d0>
 2c22a0c: aa1f03f8     	mov	x24, xzr
 2c22a10: 52800174     	mov	w20, #0xb               // =11
 2c22a14: 910203e0     	add	x0, sp, #0x80
 2c22a18: f001b6a8     	adrp	x8, 0x62f9000
 2c22a1c: f947e108     	ldr	x8, [x8, #0xfc0]
 2c22a20: f9400101     	ldr	x1, [x8]
 2c22a24: 94798f9c     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2c22a28: b50004f8     	cbnz	x24, 0x2c22ac4 <__start_il2cpp+0x15a4b0>
 2c22a2c: 71002e9f     	cmp	w20, #0xb
 2c22a30: 54fffa20     	b.eq	0x2c22974 <__start_il2cpp+0x15a360>
 2c22a34: 34fffa14     	cbz	w20, 0x2c22974 <__start_il2cpp+0x15a360>
 2c22a38: 14000012     	b	0x2c22a80 <__start_il2cpp+0x15a46c>
 2c22a3c: 97f6d193     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22a40: 14000072     	b	0x2c22c08 <__start_il2cpp+0x15a5f4>
 2c22a44: 14000002     	b	0x2c22a4c <__start_il2cpp+0x15a438>
 2c22a48: 14000001     	b	0x2c22a4c <__start_il2cpp+0x15a438>
 2c22a4c: aa0103f8     	mov	x24, x1
 2c22a50: aa0003f9     	mov	x25, x0
 2c22a54: 7100071f     	cmp	w24, #0x1
 2c22a58: 54000401     	b.ne	0x2c22ad8 <__start_il2cpp+0x15a4c4>
 2c22a5c: aa1903e0     	mov	x0, x25
 2c22a60: 94cc0f38     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c22a64: f9400018     	ldr	x24, [x0]
 2c22a68: f90023f8     	str	x24, [sp, #0x40]
 2c22a6c: 94cc0f39     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c22a70: f94027e0     	ldr	x0, [sp, #0x48]
 2c22a74: 2a1f03f4     	mov	w20, wzr
 2c22a78: 17ffffe8     	b	0x2c22a18 <__start_il2cpp+0x15a404>
 2c22a7c: 52800054     	mov	w20, #0x2               // =2
 2c22a80: f001b6c8     	adrp	x8, 0x62fd000
 2c22a84: f94017e0     	ldr	x0, [sp, #0x28]
 2c22a88: f9447908     	ldr	x8, [x8, #0x8f0]
 2c22a8c: f9400101     	ldr	x1, [x8]
 2c22a90: 94798f81     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2c22a94: f94013e0     	ldr	x0, [sp, #0x20]
 2c22a98: b5000aa0     	cbnz	x0, 0x2c22bec <__start_il2cpp+0x15a5d8>
 2c22a9c: 321f0288     	orr	w8, w20, #0x2
 2c22aa0: 7100091f     	cmp	w8, #0x2
 2c22aa4: 54ffd4e0     	b.eq	0x2c22540 <__start_il2cpp+0x159f2c>
 2c22aa8: 1400002e     	b	0x2c22b60 <__start_il2cpp+0x15a54c>
 2c22aac: 97f6d177     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22ab0: 14000056     	b	0x2c22c08 <__start_il2cpp+0x15a5f4>
 2c22ab4: 97f6d175     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22ab8: 14000054     	b	0x2c22c08 <__start_il2cpp+0x15a5f4>
 2c22abc: 97f6d173     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22ac0: 14000052     	b	0x2c22c08 <__start_il2cpp+0x15a5f4>
 2c22ac4: aa1803e0     	mov	x0, x24
 2c22ac8: 97f6d16e     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c22acc: 1400004f     	b	0x2c22c08 <__start_il2cpp+0x15a5f4>
 2c22ad0: aa0103f8     	mov	x24, x1
 2c22ad4: aa0003f9     	mov	x25, x0
 2c22ad8: 910103e0     	add	x0, sp, #0x40
 2c22adc: 97ea1b56     	bl	0x26a9834 <.text+0x46d4>
 2c22ae0: 14000017     	b	0x2c22b3c <__start_il2cpp+0x15a528>
 2c22ae4: 14000014     	b	0x2c22b34 <__start_il2cpp+0x15a520>
 2c22ae8: 14000013     	b	0x2c22b34 <__start_il2cpp+0x15a520>
 2c22aec: 14000012     	b	0x2c22b34 <__start_il2cpp+0x15a520>
 2c22af0: 14000002     	b	0x2c22af8 <__start_il2cpp+0x15a4e4>
 2c22af4: 14000001     	b	0x2c22af8 <__start_il2cpp+0x15a4e4>
 2c22af8: aa0103f8     	mov	x24, x1
 2c22afc: aa0003f9     	mov	x25, x0
 2c22b00: 7100071f     	cmp	w24, #0x1
 2c22b04: 54000861     	b.ne	0x2c22c10 <__start_il2cpp+0x15a5fc>
 2c22b08: aa1903e0     	mov	x0, x25
 2c22b0c: 94cc0f0d     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c22b10: f9400018     	ldr	x24, [x0]
 2c22b14: f90023f8     	str	x24, [sp, #0x40]
 2c22b18: 94cc0f0e     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c22b1c: f94027e0     	ldr	x0, [sp, #0x48]
 2c22b20: 52800034     	mov	w20, #0x1               // =1
 2c22b24: 17ffff81     	b	0x2c22928 <__start_il2cpp+0x15a314>
 2c22b28: 14000003     	b	0x2c22b34 <__start_il2cpp+0x15a520>
 2c22b2c: 14000002     	b	0x2c22b34 <__start_il2cpp+0x15a520>
 2c22b30: 14000001     	b	0x2c22b34 <__start_il2cpp+0x15a520>
 2c22b34: aa0103f8     	mov	x24, x1
 2c22b38: aa0003f9     	mov	x25, x0
 2c22b3c: 7100071f     	cmp	w24, #0x1
 2c22b40: 54000741     	b.ne	0x2c22c28 <__start_il2cpp+0x15a614>
 2c22b44: aa1903e0     	mov	x0, x25
 2c22b48: 94cc0efe     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c22b4c: f9400008     	ldr	x8, [x0]
 2c22b50: f90013e8     	str	x8, [sp, #0x20]
 2c22b54: 94cc0eff     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c22b58: 2a1f03f4     	mov	w20, wzr
 2c22b5c: 17ffffc9     	b	0x2c22a80 <__start_il2cpp+0x15a46c>
 2c22b60: f9401bf4     	ldr	x20, [sp, #0x30]
 2c22b64: f001b6c8     	adrp	x8, 0x62fd000
 2c22b68: f9401fe0     	ldr	x0, [sp, #0x38]
 2c22b6c: f944fd08     	ldr	x8, [x8, #0x9f8]
 2c22b70: f9400101     	ldr	x1, [x8]
 2c22b74: 947a6c01     	bl	0x4abdb78 <__start_il2cpp+0x1ff5564>
 2c22b78: b5000454     	cbnz	x20, 0x2c22c00 <__start_il2cpp+0x15a5ec>
 2c22b7c: aa1303e0     	mov	x0, x19
 2c22b80: a9534ff4     	ldp	x20, x19, [sp, #0x130]
 2c22b84: a95257f6     	ldp	x22, x21, [sp, #0x120]
 2c22b88: a9515ff8     	ldp	x24, x23, [sp, #0x110]
 2c22b8c: a95067fa     	ldp	x26, x25, [sp, #0x100]
 2c22b90: a94f6ffc     	ldp	x28, x27, [sp, #0xf0]
 2c22b94: a94e7bfd     	ldp	x29, x30, [sp, #0xe0]
 2c22b98: 6d4d23e9     	ldp	d9, d8, [sp, #0xd0]
 2c22b9c: 6d4c2beb     	ldp	d11, d10, [sp, #0xc0]
 2c22ba0: 910503ff     	add	sp, sp, #0x140
 2c22ba4: d65f03c0     	ret
 2c22ba8: 97f6d138     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bac: 97f6d139     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2c22bb0: 97f6d136     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bb4: 97f6d135     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bb8: 97f6d134     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bbc: 97f6d133     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bc0: 97f6d132     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bc4: 97f6d131     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bc8: 97f6d130     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bcc: 97f6d12f     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bd0: 97f6d12e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bd4: 97f6d12d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bd8: 97f6d12c     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bdc: 97f6d12b     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22be0: 97f6d12a     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22be4: 97f6d129     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22be8: 97f6d128     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bec: 97f6d125     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c22bf0: aa1803e0     	mov	x0, x24
 2c22bf4: 97f6d123     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c22bf8: 97f6d124     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22bfc: 97f6d123     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c22c00: aa1403e0     	mov	x0, x20
 2c22c04: 97f6d11f     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c22c08: aa0103f8     	mov	x24, x1
 2c22c0c: aa0003f9     	mov	x25, x0
 2c22c10: 910103e0     	add	x0, sp, #0x40
 2c22c14: 97ea1b08     	bl	0x26a9834 <.text+0x46d4>
 2c22c18: 14000030     	b	0x2c22cd8 <__start_il2cpp+0x15a6c4>
 2c22c1c: 97ea0b8c     	bl	0x26a5a4c <.text+0x8ec>
 2c22c20: aa0103f8     	mov	x24, x1
 2c22c24: aa0003f9     	mov	x25, x0
 2c22c28: 910083e0     	add	x0, sp, #0x20
 2c22c2c: 97ea1c1f     	bl	0x26a9ca8 <.text+0x4b48>
 2c22c30: 1400002a     	b	0x2c22cd8 <__start_il2cpp+0x15a6c4>
 2c22c34: 14000027     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c38: 14000026     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c3c: 14000025     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c40: 14000024     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c44: 14000023     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c48: 14000022     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c4c: 14000021     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c50: 14000020     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c54: 1400001f     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c58: 1400001e     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c5c: 1400001d     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c60: 1400001c     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c64: 1400001b     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c68: 1400001a     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c6c: 14000019     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c70: 14000018     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c74: 14000017     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c78: 14000016     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c7c: 14000015     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c80: 14000014     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c84: 14000013     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c88: 14000012     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c8c: 14000011     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c90: 14000010     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c94: 1400000f     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c98: 1400000e     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22c9c: 1400000d     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22ca0: 1400000c     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22ca4: 1400000b     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22ca8: 1400000a     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22cac: 14000009     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22cb0: 14000008     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22cb4: 14000007     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22cb8: 14000006     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22cbc: 14000005     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22cc0: 14000004     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22cc4: 14000003     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22cc8: 14000002     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22ccc: 14000001     	b	0x2c22cd0 <__start_il2cpp+0x15a6bc>
 2c22cd0: aa0103f8     	mov	x24, x1
 2c22cd4: aa0003f9     	mov	x25, x0
 2c22cd8: 7100071f     	cmp	w24, #0x1
 2c22cdc: 54000101     	b.ne	0x2c22cfc <__start_il2cpp+0x15a6e8>
 2c22ce0: aa1903e0     	mov	x0, x25
 2c22ce4: 94cc0e97     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c22ce8: f9400014     	ldr	x20, [x0]
 2c22cec: f9001bf4     	str	x20, [sp, #0x30]
 2c22cf0: 94cc0e98     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c22cf4: 17ffff9c     	b	0x2c22b64 <__start_il2cpp+0x15a550>
 2c22cf8: aa0003f9     	mov	x25, x0
 2c22cfc: 9100c3e0     	add	x0, sp, #0x30
 2c22d00: 97ea1bf6     	bl	0x26a9cd8 <.text+0x4b78>
 2c22d04: aa1903e0     	mov	x0, x25
 2c22d08: 97fa8675     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c22d0c: 97ea0b50     	bl	0x26a5a4c <.text+0x8ec>

# ItemTaskManager :: System.Void OnInterstitialShow()
# VA 0x2c22d10 .. 0x2c22d48 (next mapped method entry)
 2c22d10: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c22d14: f9405408     	ldr	x8, [x0, #0xa8]
 2c22d18: b4000168     	cbz	x8, 0x2c22d44 <__start_il2cpp+0x15a730>
 2c22d1c: aa0003f3     	mov	x19, x0
 2c22d20: f9400d09     	ldr	x9, [x8, #0x18]
 2c22d24: f9402100     	ldr	x0, [x8, #0x40]
 2c22d28: f9401501     	ldr	x1, [x8, #0x28]
 2c22d2c: d63f0120     	blr	x9
 2c22d30: f9404660     	ldr	x0, [x19, #0x88]
 2c22d34: b4000080     	cbz	x0, 0x2c22d44 <__start_il2cpp+0x15a730>
 2c22d38: aa1f03e1     	mov	x1, xzr
 2c22d3c: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c22d40: 17fe2c1f     	b	0x2baddbc <__start_il2cpp+0xe57a8>
 2c22d44: 97f6d0d1     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Void UpdateItemTasksOfAddedItem(BaseItem addedItem)
# VA 0x2c22d48 .. 0x2c22dec (next mapped method entry)
 2c22d48: d100c3ff     	sub	sp, sp, #0x30
 2c22d4c: a90157fe     	stp	x30, x21, [sp, #0x10]
 2c22d50: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c22d54: 9001d795     	adrp	x21, 0x6712000
 2c22d58: aa0103f4     	mov	x20, x1
 2c22d5c: aa0003f3     	mov	x19, x0
 2c22d60: 3971c6a8     	ldrb	w8, [x21, #0xc71]
 2c22d64: 370000c8     	tbnz	w8, #0x0, 0x2c22d7c <__start_il2cpp+0x15a768>
 2c22d68: f001b6a0     	adrp	x0, 0x62f9000
 2c22d6c: f9477800     	ldr	x0, [x0, #0xef0]
 2c22d70: 97f6d01c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22d74: 52800028     	mov	w8, #0x1                // =1
 2c22d78: 3931c6a8     	strb	w8, [x21, #0xc71]
 2c22d7c: f90007ff     	str	xzr, [sp, #0x8]
 2c22d80: b4000354     	cbz	x20, 0x2c22de8 <__start_il2cpp+0x15a7d4>
 2c22d84: 39410288     	ldrb	w8, [x20, #0x40]
 2c22d88: 35000288     	cbnz	w8, 0x2c22dd8 <__start_il2cpp+0x15a7c4>
 2c22d8c: f9402a88     	ldr	x8, [x20, #0x50]
 2c22d90: b40002c8     	cbz	x8, 0x2c22de8 <__start_il2cpp+0x15a7d4>
 2c22d94: f001b6a9     	adrp	x9, 0x62f9000
 2c22d98: 910023e0     	add	x0, sp, #0x8
 2c22d9c: f9477929     	ldr	x9, [x9, #0xef0]
 2c22da0: b9403101     	ldr	w1, [x8, #0x30]
 2c22da4: b9404682     	ldr	w2, [x20, #0x44]
 2c22da8: f9400123     	ldr	x3, [x9]
 2c22dac: 9445b7be     	bl	0x3d90ca4 <__start_il2cpp+0x12c8690>
 2c22db0: f94007e1     	ldr	x1, [sp, #0x8]
 2c22db4: aa1303e0     	mov	x0, x19
 2c22db8: 9400000d     	bl	0x2c22dec <__start_il2cpp+0x15a7d8>
 2c22dbc: 360000e0     	tbz	w0, #0x0, 0x2c22dd8 <__start_il2cpp+0x15a7c4>
 2c22dc0: aa1403e0     	mov	x0, x20
 2c22dc4: 52800021     	mov	w1, #0x1                // =1
 2c22dc8: aa1f03e2     	mov	x2, xzr
 2c22dcc: 97ff45fc     	bl	0x2bf45bc <__start_il2cpp+0x12bfa8>
 2c22dd0: aa1303e0     	mov	x0, x19
 2c22dd4: 97fff66f     	bl	0x2c20790 <__start_il2cpp+0x15817c>
 2c22dd8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c22ddc: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2c22de0: 9100c3ff     	add	sp, sp, #0x30
 2c22de4: d65f03c0     	ret
 2c22de8: 97f6d0a8     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Boolean IsItemTaskObjective(Common.Collections.Pair`2<System.Int32, System.Int32> itemObjective)
# VA 0x2c22dec .. 0x2c22f38 (next mapped method entry)
 2c22dec: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c22df0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c22df4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c22df8: 9001d795     	adrp	x21, 0x6712000
 2c22dfc: f001b6d6     	adrp	x22, 0x62fd000
 2c22e00: aa0103f4     	mov	x20, x1
 2c22e04: 3971d6a8     	ldrb	w8, [x21, #0xc75]
 2c22e08: f945a6d6     	ldr	x22, [x22, #0xb48]
 2c22e0c: aa0003f3     	mov	x19, x0
 2c22e10: 37000308     	tbnz	w8, #0x0, 0x2c22e70 <__start_il2cpp+0x15a85c>
 2c22e14: f001b6c0     	adrp	x0, 0x62fd000
 2c22e18: f945a800     	ldr	x0, [x0, #0xb50]
 2c22e1c: 97f6cff1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22e20: d001b680     	adrp	x0, 0x62f4000
 2c22e24: f9466400     	ldr	x0, [x0, #0xcc8]
 2c22e28: 97f6cfee     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22e2c: f001b6c0     	adrp	x0, 0x62fd000
 2c22e30: f9454c00     	ldr	x0, [x0, #0xa98]
 2c22e34: 97f6cfeb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22e38: f001b6c0     	adrp	x0, 0x62fd000
 2c22e3c: f9449400     	ldr	x0, [x0, #0x928]
 2c22e40: 97f6cfe8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22e44: f001b6c0     	adrp	x0, 0x62fd000
 2c22e48: f945ac00     	ldr	x0, [x0, #0xb58]
 2c22e4c: 97f6cfe5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22e50: f001b6c0     	adrp	x0, 0x62fd000
 2c22e54: f945a400     	ldr	x0, [x0, #0xb48]
 2c22e58: 97f6cfe2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22e5c: f001b6c0     	adrp	x0, 0x62fd000
 2c22e60: f945b000     	ldr	x0, [x0, #0xb60]
 2c22e64: 97f6cfdf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22e68: 52800028     	mov	w8, #0x1                // =1
 2c22e6c: 3931d6a8     	strb	w8, [x21, #0xc75]
 2c22e70: f94002c0     	ldr	x0, [x22]
 2c22e74: 97f6d081     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c22e78: aa1f03e1     	mov	x1, xzr
 2c22e7c: aa0003f5     	mov	x21, x0
 2c22e80: 9494b332     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c22e84: b4000595     	cbz	x21, 0x2c22f34 <__start_il2cpp+0x15a920>
 2c22e88: f9000ab4     	str	x20, [x21, #0x10]
 2c22e8c: 39427668     	ldrb	w8, [x19, #0x9d]
 2c22e90: 34000328     	cbz	w8, 0x2c22ef4 <__start_il2cpp+0x15a8e0>
 2c22e94: f9400a73     	ldr	x19, [x19, #0x10]
 2c22e98: b4000453     	cbz	x19, 0x2c22f20 <__start_il2cpp+0x15a90c>
 2c22e9c: b9401a68     	ldr	w8, [x19, #0x18]
 2c22ea0: 34000408     	cbz	w8, 0x2c22f20 <__start_il2cpp+0x15a90c>
 2c22ea4: f001b6c8     	adrp	x8, 0x62fd000
 2c22ea8: f9454d08     	ldr	x8, [x8, #0xa98]
 2c22eac: f9400100     	ldr	x0, [x8]
 2c22eb0: 97f6d072     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c22eb4: f001b6c8     	adrp	x8, 0x62fd000
 2c22eb8: aa1503e1     	mov	x1, x21
 2c22ebc: aa1f03e3     	mov	x3, xzr
 2c22ec0: f945ad08     	ldr	x8, [x8, #0xb58]
 2c22ec4: aa0003f4     	mov	x20, x0
 2c22ec8: f9400102     	ldr	x2, [x8]
 2c22ecc: 94824b70     	bl	0x4cb5c8c <__start_il2cpp+0x21ed678>
 2c22ed0: f001b6c8     	adrp	x8, 0x62fd000
 2c22ed4: aa1303e0     	mov	x0, x19
 2c22ed8: aa1403e1     	mov	x1, x20
 2c22edc: f945a908     	ldr	x8, [x8, #0xb50]
 2c22ee0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c22ee4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c22ee8: f9400102     	ldr	x2, [x8]
 2c22eec: f84307fe     	ldr	x30, [sp], #0x30
 2c22ef0: 141f46db     	b	0x33f4a5c <__start_il2cpp+0x92c448>
 2c22ef4: d001b688     	adrp	x8, 0x62f4000
 2c22ef8: f9466508     	ldr	x8, [x8, #0xcc8]
 2c22efc: f9400100     	ldr	x0, [x8]
 2c22f00: b940e408     	ldr	w8, [x0, #0xe4]
 2c22f04: 35000048     	cbnz	w8, 0x2c22f0c <__start_il2cpp+0x15a8f8>
 2c22f08: 97f6d015     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c22f0c: f001b6c8     	adrp	x8, 0x62fd000
 2c22f10: aa1f03e1     	mov	x1, xzr
 2c22f14: f945b108     	ldr	x8, [x8, #0xb60]
 2c22f18: f9400100     	ldr	x0, [x8]
 2c22f1c: 97fc3e57     	bl	0x2b32878 <__start_il2cpp+0x6a264>
 2c22f20: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c22f24: 2a1f03e0     	mov	w0, wzr
 2c22f28: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c22f2c: f84307fe     	ldr	x30, [sp], #0x30
 2c22f30: d65f03c0     	ret
 2c22f34: 97f6d055     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Void UpdateItemTasksOfRemovedItem(System.Int32 itemId, System.Int32 itemLevel)
# VA 0x2c22f38 .. 0x2c22fc0 (next mapped method entry)
 2c22f38: d10103ff     	sub	sp, sp, #0x40
 2c22f3c: a9015ffe     	stp	x30, x23, [sp, #0x10]
 2c22f40: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c22f44: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c22f48: 9001d797     	adrp	x23, 0x6712000
 2c22f4c: f001b6b6     	adrp	x22, 0x62f9000
 2c22f50: 2a0203f4     	mov	w20, w2
 2c22f54: 3971cae8     	ldrb	w8, [x23, #0xc72]
 2c22f58: f9477ad6     	ldr	x22, [x22, #0xef0]
 2c22f5c: 2a0103f5     	mov	w21, w1
 2c22f60: aa0003f3     	mov	x19, x0
 2c22f64: 370000c8     	tbnz	w8, #0x0, 0x2c22f7c <__start_il2cpp+0x15a968>
 2c22f68: f001b6a0     	adrp	x0, 0x62f9000
 2c22f6c: f9477800     	ldr	x0, [x0, #0xef0]
 2c22f70: 97f6cf9c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22f74: 52800028     	mov	w8, #0x1                // =1
 2c22f78: 3931cae8     	strb	w8, [x23, #0xc72]
 2c22f7c: f94002c3     	ldr	x3, [x22]
 2c22f80: 910023e0     	add	x0, sp, #0x8
 2c22f84: 2a1503e1     	mov	w1, w21
 2c22f88: 2a1403e2     	mov	w2, w20
 2c22f8c: f90007ff     	str	xzr, [sp, #0x8]
 2c22f90: 9445b745     	bl	0x3d90ca4 <__start_il2cpp+0x12c8690>
 2c22f94: f94007e1     	ldr	x1, [sp, #0x8]
 2c22f98: aa1303e0     	mov	x0, x19
 2c22f9c: 97ffff94     	bl	0x2c22dec <__start_il2cpp+0x15a7d8>
 2c22fa0: 36000060     	tbz	w0, #0x0, 0x2c22fac <__start_il2cpp+0x15a998>
 2c22fa4: aa1303e0     	mov	x0, x19
 2c22fa8: 97fff5fa     	bl	0x2c20790 <__start_il2cpp+0x15817c>
 2c22fac: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c22fb0: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c22fb4: a9415ffe     	ldp	x30, x23, [sp, #0x10]
 2c22fb8: 910103ff     	add	sp, sp, #0x40
 2c22fbc: d65f03c0     	ret

# ItemTaskManager :: System.Void PostMergeCheck(PostMergeSignal signal)
# VA 0x2c22fc0 .. 0x2c2307c (next mapped method entry)
 2c22fc0: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c22fc4: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c22fc8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c22fcc: 9001d795     	adrp	x21, 0x6712000
 2c22fd0: aa0103f4     	mov	x20, x1
 2c22fd4: aa0003f3     	mov	x19, x0
 2c22fd8: 3971cea8     	ldrb	w8, [x21, #0xc73]
 2c22fdc: 370000c8     	tbnz	w8, #0x0, 0x2c22ff4 <__start_il2cpp+0x15a9e0>
 2c22fe0: f001b6a0     	adrp	x0, 0x62f9000
 2c22fe4: f9477800     	ldr	x0, [x0, #0xef0]
 2c22fe8: 97f6cf7e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c22fec: 52800028     	mov	w8, #0x1                // =1
 2c22ff0: 3931cea8     	strb	w8, [x21, #0xc73]
 2c22ff4: f9400a95     	ldr	x21, [x20, #0x10]
 2c22ff8: f90007ff     	str	xzr, [sp, #0x8]
 2c22ffc: b40003f5     	cbz	x21, 0x2c23078 <__start_il2cpp+0x15aa64>
 2c23000: f9402aa8     	ldr	x8, [x21, #0x50]
 2c23004: b40003a8     	cbz	x8, 0x2c23078 <__start_il2cpp+0x15aa64>
 2c23008: d001b6b6     	adrp	x22, 0x62f9000
 2c2300c: 910023e0     	add	x0, sp, #0x8
 2c23010: f9477ad6     	ldr	x22, [x22, #0xef0]
 2c23014: b9403101     	ldr	w1, [x8, #0x30]
 2c23018: b9400682     	ldr	w2, [x20, #0x4]
 2c2301c: f94002c3     	ldr	x3, [x22]
 2c23020: 9445b721     	bl	0x3d90ca4 <__start_il2cpp+0x12c8690>
 2c23024: f94007e1     	ldr	x1, [sp, #0x8]
 2c23028: aa1303e0     	mov	x0, x19
 2c2302c: 97ffff70     	bl	0x2c22dec <__start_il2cpp+0x15a7d8>
 2c23030: 37000180     	tbnz	w0, #0x0, 0x2c23060 <__start_il2cpp+0x15aa4c>
 2c23034: f9402aa8     	ldr	x8, [x21, #0x50]
 2c23038: b4000208     	cbz	x8, 0x2c23078 <__start_il2cpp+0x15aa64>
 2c2303c: b9403101     	ldr	w1, [x8, #0x30]
 2c23040: b9400282     	ldr	w2, [x20]
 2c23044: 910023e0     	add	x0, sp, #0x8
 2c23048: f94002c3     	ldr	x3, [x22]
 2c2304c: 9445b716     	bl	0x3d90ca4 <__start_il2cpp+0x12c8690>
 2c23050: f94007e1     	ldr	x1, [sp, #0x8]
 2c23054: aa1303e0     	mov	x0, x19
 2c23058: 97ffff65     	bl	0x2c22dec <__start_il2cpp+0x15a7d8>
 2c2305c: 36000060     	tbz	w0, #0x0, 0x2c23068 <__start_il2cpp+0x15aa54>
 2c23060: aa1303e0     	mov	x0, x19
 2c23064: 97fff5cb     	bl	0x2c20790 <__start_il2cpp+0x15817c>
 2c23068: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c2306c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c23070: f84307fe     	ldr	x30, [sp], #0x30
 2c23074: d65f03c0     	ret
 2c23078: 97f6d004     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Int32 GetUniqueTaskProviderId()
# VA 0x2c2307c .. 0x2c236ac (next mapped method entry)
 2c2307c: d101c3ff     	sub	sp, sp, #0x70
 2c23080: a9045ffe     	stp	x30, x23, [sp, #0x40]
 2c23084: a90557f6     	stp	x22, x21, [sp, #0x50]
 2c23088: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2c2308c: f001d774     	adrp	x20, 0x6712000
 2c23090: aa0003f3     	mov	x19, x0
 2c23094: 3971d288     	ldrb	w8, [x20, #0xc74]
 2c23098: 370004e8     	tbnz	w8, #0x0, 0x2c23134 <__start_il2cpp+0x15ab20>
 2c2309c: f001b680     	adrp	x0, 0x62f6000
 2c230a0: f940dc00     	ldr	x0, [x0, #0x1b8]
 2c230a4: 97f6cf4f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c230a8: d001b6c0     	adrp	x0, 0x62fd000
 2c230ac: f9447800     	ldr	x0, [x0, #0x8f0]
 2c230b0: 97f6cf4c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c230b4: d001b6c0     	adrp	x0, 0x62fd000
 2c230b8: f9447c00     	ldr	x0, [x0, #0x8f8]
 2c230bc: 97f6cf49     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c230c0: d001b6c0     	adrp	x0, 0x62fd000
 2c230c4: f9448000     	ldr	x0, [x0, #0x900]
 2c230c8: 97f6cf46     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c230cc: d001b680     	adrp	x0, 0x62f5000
 2c230d0: f940e800     	ldr	x0, [x0, #0x1d0]
 2c230d4: 97f6cf43     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c230d8: d001b6c0     	adrp	x0, 0x62fd000
 2c230dc: f9448800     	ldr	x0, [x0, #0x910]
 2c230e0: 97f6cf40     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c230e4: d001b6c0     	adrp	x0, 0x62fd000
 2c230e8: f945b400     	ldr	x0, [x0, #0xb68]
 2c230ec: 97f6cf3d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c230f0: d001b680     	adrp	x0, 0x62f5000
 2c230f4: f940ec00     	ldr	x0, [x0, #0x1d8]
 2c230f8: 97f6cf3a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c230fc: d001b660     	adrp	x0, 0x62f1000
 2c23100: f940f800     	ldr	x0, [x0, #0x1f0]
 2c23104: 97f6cf37     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c23108: d001b680     	adrp	x0, 0x62f5000
 2c2310c: f940f400     	ldr	x0, [x0, #0x1e8]
 2c23110: 97f6cf34     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c23114: d001b680     	adrp	x0, 0x62f5000
 2c23118: f940f800     	ldr	x0, [x0, #0x1f0]
 2c2311c: 97f6cf31     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c23120: d001b660     	adrp	x0, 0x62f1000
 2c23124: f9410000     	ldr	x0, [x0, #0x200]
 2c23128: 97f6cf2e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c2312c: 52800028     	mov	w8, #0x1                // =1
 2c23130: 3931d288     	strb	w8, [x20, #0xc74]
 2c23134: aa1303f4     	mov	x20, x19
 2c23138: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2c2313c: f84a0e88     	ldr	x8, [x20, #0xa0]!
 2c23140: f9001bff     	str	xzr, [sp, #0x30]
 2c23144: b40027e8     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c23148: b9401908     	ldr	w8, [x8, #0x18]
 2c2314c: 35002268     	cbnz	w8, 0x2c23598 <__start_il2cpp+0x15af84>
 2c23150: d001b668     	adrp	x8, 0x62f1000
 2c23154: f9410108     	ldr	x8, [x8, #0x200]
 2c23158: f9400100     	ldr	x0, [x8]
 2c2315c: 97f6cfc7     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c23160: d001b668     	adrp	x8, 0x62f1000
 2c23164: aa0003f5     	mov	x21, x0
 2c23168: f940f908     	ldr	x8, [x8, #0x1f0]
 2c2316c: f9400101     	ldr	x1, [x8]
 2c23170: 943aaba4     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2c23174: b4002675     	cbz	x21, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c23178: d001b696     	adrp	x22, 0x62f5000
 2c2317c: f940ead6     	ldr	x22, [x22, #0x1d0]
 2c23180: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c23184: f9400aa8     	ldr	x8, [x21, #0x10]
 2c23188: f94002c9     	ldr	x9, [x22]
 2c2318c: 1100054a     	add	w10, w10, #0x1
 2c23190: b9001eaa     	str	w10, [x21, #0x1c]
 2c23194: b4002568     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c23198: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2c2319c: b940190b     	ldr	w11, [x8, #0x18]
 2c231a0: 6b0b015f     	cmp	w10, w11
 2c231a4: 54000122     	b.hs	0x2c231c8 <__start_il2cpp+0x15abb4>
 2c231a8: 1100054b     	add	w11, w10, #0x1
 2c231ac: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c231b0: b9001aab     	str	w11, [x21, #0x18]
 2c231b4: b900215f     	str	wzr, [x10, #0x20]
 2c231b8: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c231bc: 1100054a     	add	w10, w10, #0x1
 2c231c0: b9001eaa     	str	w10, [x21, #0x1c]
 2c231c4: 1400000d     	b	0x2c231f8 <__start_il2cpp+0x15abe4>
 2c231c8: f9401128     	ldr	x8, [x9, #0x20]
 2c231cc: aa1503e0     	mov	x0, x21
 2c231d0: 2a1f03e1     	mov	w1, wzr
 2c231d4: f9406108     	ldr	x8, [x8, #0xc0]
 2c231d8: f9403902     	ldr	x2, [x8, #0x70]
 2c231dc: 943aadad     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c231e0: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c231e4: f9400aa8     	ldr	x8, [x21, #0x10]
 2c231e8: f94002c9     	ldr	x9, [x22]
 2c231ec: 1100054a     	add	w10, w10, #0x1
 2c231f0: b9001eaa     	str	w10, [x21, #0x1c]
 2c231f4: b4002268     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c231f8: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2c231fc: b940190b     	ldr	w11, [x8, #0x18]
 2c23200: 6b0b015f     	cmp	w10, w11
 2c23204: 54000142     	b.hs	0x2c2322c <__start_il2cpp+0x15ac18>
 2c23208: 1100054b     	add	w11, w10, #0x1
 2c2320c: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c23210: b9001aab     	str	w11, [x21, #0x18]
 2c23214: 5280002b     	mov	w11, #0x1               // =1
 2c23218: b900214b     	str	w11, [x10, #0x20]
 2c2321c: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c23220: 1100054a     	add	w10, w10, #0x1
 2c23224: b9001eaa     	str	w10, [x21, #0x1c]
 2c23228: 1400000d     	b	0x2c2325c <__start_il2cpp+0x15ac48>
 2c2322c: f9401128     	ldr	x8, [x9, #0x20]
 2c23230: aa1503e0     	mov	x0, x21
 2c23234: 52800021     	mov	w1, #0x1                // =1
 2c23238: f9406108     	ldr	x8, [x8, #0xc0]
 2c2323c: f9403902     	ldr	x2, [x8, #0x70]
 2c23240: 943aad94     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c23244: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c23248: f9400aa8     	ldr	x8, [x21, #0x10]
 2c2324c: f94002c9     	ldr	x9, [x22]
 2c23250: 1100054a     	add	w10, w10, #0x1
 2c23254: b9001eaa     	str	w10, [x21, #0x1c]
 2c23258: b4001f48     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c2325c: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2c23260: b940190b     	ldr	w11, [x8, #0x18]
 2c23264: 6b0b015f     	cmp	w10, w11
 2c23268: 54000142     	b.hs	0x2c23290 <__start_il2cpp+0x15ac7c>
 2c2326c: 1100054b     	add	w11, w10, #0x1
 2c23270: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c23274: b9001aab     	str	w11, [x21, #0x18]
 2c23278: 5280004b     	mov	w11, #0x2               // =2
 2c2327c: b900214b     	str	w11, [x10, #0x20]
 2c23280: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c23284: 1100054a     	add	w10, w10, #0x1
 2c23288: b9001eaa     	str	w10, [x21, #0x1c]
 2c2328c: 1400000d     	b	0x2c232c0 <__start_il2cpp+0x15acac>
 2c23290: f9401128     	ldr	x8, [x9, #0x20]
 2c23294: aa1503e0     	mov	x0, x21
 2c23298: 52800041     	mov	w1, #0x2                // =2
 2c2329c: f9406108     	ldr	x8, [x8, #0xc0]
 2c232a0: f9403902     	ldr	x2, [x8, #0x70]
 2c232a4: 943aad7b     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c232a8: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c232ac: f9400aa8     	ldr	x8, [x21, #0x10]
 2c232b0: f94002c9     	ldr	x9, [x22]
 2c232b4: 1100054a     	add	w10, w10, #0x1
 2c232b8: b9001eaa     	str	w10, [x21, #0x1c]
 2c232bc: b4001c28     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c232c0: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2c232c4: b940190b     	ldr	w11, [x8, #0x18]
 2c232c8: 6b0b015f     	cmp	w10, w11
 2c232cc: 54000142     	b.hs	0x2c232f4 <__start_il2cpp+0x15ace0>
 2c232d0: 1100054b     	add	w11, w10, #0x1
 2c232d4: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c232d8: b9001aab     	str	w11, [x21, #0x18]
 2c232dc: 5280006b     	mov	w11, #0x3               // =3
 2c232e0: b900214b     	str	w11, [x10, #0x20]
 2c232e4: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c232e8: 1100054a     	add	w10, w10, #0x1
 2c232ec: b9001eaa     	str	w10, [x21, #0x1c]
 2c232f0: 1400000d     	b	0x2c23324 <__start_il2cpp+0x15ad10>
 2c232f4: f9401128     	ldr	x8, [x9, #0x20]
 2c232f8: aa1503e0     	mov	x0, x21
 2c232fc: 52800061     	mov	w1, #0x3                // =3
 2c23300: f9406108     	ldr	x8, [x8, #0xc0]
 2c23304: f9403902     	ldr	x2, [x8, #0x70]
 2c23308: 943aad62     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c2330c: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c23310: f9400aa8     	ldr	x8, [x21, #0x10]
 2c23314: f94002c9     	ldr	x9, [x22]
 2c23318: 1100054a     	add	w10, w10, #0x1
 2c2331c: b9001eaa     	str	w10, [x21, #0x1c]
 2c23320: b4001908     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c23324: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2c23328: b940190b     	ldr	w11, [x8, #0x18]
 2c2332c: 6b0b015f     	cmp	w10, w11
 2c23330: 54000142     	b.hs	0x2c23358 <__start_il2cpp+0x15ad44>
 2c23334: 1100054b     	add	w11, w10, #0x1
 2c23338: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c2333c: b9001aab     	str	w11, [x21, #0x18]
 2c23340: 5280008b     	mov	w11, #0x4               // =4
 2c23344: b900214b     	str	w11, [x10, #0x20]
 2c23348: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c2334c: 1100054a     	add	w10, w10, #0x1
 2c23350: b9001eaa     	str	w10, [x21, #0x1c]
 2c23354: 1400000d     	b	0x2c23388 <__start_il2cpp+0x15ad74>
 2c23358: f9401128     	ldr	x8, [x9, #0x20]
 2c2335c: aa1503e0     	mov	x0, x21
 2c23360: 52800081     	mov	w1, #0x4                // =4
 2c23364: f9406108     	ldr	x8, [x8, #0xc0]
 2c23368: f9403902     	ldr	x2, [x8, #0x70]
 2c2336c: 943aad49     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c23370: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c23374: f9400aa8     	ldr	x8, [x21, #0x10]
 2c23378: f94002c9     	ldr	x9, [x22]
 2c2337c: 1100054a     	add	w10, w10, #0x1
 2c23380: b9001eaa     	str	w10, [x21, #0x1c]
 2c23384: b40015e8     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c23388: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2c2338c: b940190b     	ldr	w11, [x8, #0x18]
 2c23390: 6b0b015f     	cmp	w10, w11
 2c23394: 54000142     	b.hs	0x2c233bc <__start_il2cpp+0x15ada8>
 2c23398: 1100054b     	add	w11, w10, #0x1
 2c2339c: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c233a0: b9001aab     	str	w11, [x21, #0x18]
 2c233a4: 528000ab     	mov	w11, #0x5               // =5
 2c233a8: b900214b     	str	w11, [x10, #0x20]
 2c233ac: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c233b0: 1100054a     	add	w10, w10, #0x1
 2c233b4: b9001eaa     	str	w10, [x21, #0x1c]
 2c233b8: 1400000d     	b	0x2c233ec <__start_il2cpp+0x15add8>
 2c233bc: f9401128     	ldr	x8, [x9, #0x20]
 2c233c0: aa1503e0     	mov	x0, x21
 2c233c4: 528000a1     	mov	w1, #0x5                // =5
 2c233c8: f9406108     	ldr	x8, [x8, #0xc0]
 2c233cc: f9403902     	ldr	x2, [x8, #0x70]
 2c233d0: 943aad30     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c233d4: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c233d8: f9400aa8     	ldr	x8, [x21, #0x10]
 2c233dc: f94002c9     	ldr	x9, [x22]
 2c233e0: 1100054a     	add	w10, w10, #0x1
 2c233e4: b9001eaa     	str	w10, [x21, #0x1c]
 2c233e8: b40012c8     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c233ec: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2c233f0: b940190b     	ldr	w11, [x8, #0x18]
 2c233f4: 6b0b015f     	cmp	w10, w11
 2c233f8: 54000142     	b.hs	0x2c23420 <__start_il2cpp+0x15ae0c>
 2c233fc: 1100054b     	add	w11, w10, #0x1
 2c23400: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c23404: b9001aab     	str	w11, [x21, #0x18]
 2c23408: 528000cb     	mov	w11, #0x6               // =6
 2c2340c: b900214b     	str	w11, [x10, #0x20]
 2c23410: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c23414: 1100054a     	add	w10, w10, #0x1
 2c23418: b9001eaa     	str	w10, [x21, #0x1c]
 2c2341c: 1400000d     	b	0x2c23450 <__start_il2cpp+0x15ae3c>
 2c23420: f9401128     	ldr	x8, [x9, #0x20]
 2c23424: aa1503e0     	mov	x0, x21
 2c23428: 528000c1     	mov	w1, #0x6                // =6
 2c2342c: f9406108     	ldr	x8, [x8, #0xc0]
 2c23430: f9403902     	ldr	x2, [x8, #0x70]
 2c23434: 943aad17     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c23438: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c2343c: f9400aa8     	ldr	x8, [x21, #0x10]
 2c23440: f94002c9     	ldr	x9, [x22]
 2c23444: 1100054a     	add	w10, w10, #0x1
 2c23448: b9001eaa     	str	w10, [x21, #0x1c]
 2c2344c: b4000fa8     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c23450: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2c23454: b940190b     	ldr	w11, [x8, #0x18]
 2c23458: 6b0b015f     	cmp	w10, w11
 2c2345c: 54000142     	b.hs	0x2c23484 <__start_il2cpp+0x15ae70>
 2c23460: 1100054b     	add	w11, w10, #0x1
 2c23464: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c23468: b9001aab     	str	w11, [x21, #0x18]
 2c2346c: 528000eb     	mov	w11, #0x7               // =7
 2c23470: b900214b     	str	w11, [x10, #0x20]
 2c23474: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c23478: 1100054a     	add	w10, w10, #0x1
 2c2347c: b9001eaa     	str	w10, [x21, #0x1c]
 2c23480: 1400000d     	b	0x2c234b4 <__start_il2cpp+0x15aea0>
 2c23484: f9401128     	ldr	x8, [x9, #0x20]
 2c23488: aa1503e0     	mov	x0, x21
 2c2348c: 528000e1     	mov	w1, #0x7                // =7
 2c23490: f9406108     	ldr	x8, [x8, #0xc0]
 2c23494: f9403902     	ldr	x2, [x8, #0x70]
 2c23498: 943aacfe     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c2349c: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c234a0: f9400aa8     	ldr	x8, [x21, #0x10]
 2c234a4: f94002c9     	ldr	x9, [x22]
 2c234a8: 1100054a     	add	w10, w10, #0x1
 2c234ac: b9001eaa     	str	w10, [x21, #0x1c]
 2c234b0: b4000c88     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c234b4: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2c234b8: b940190b     	ldr	w11, [x8, #0x18]
 2c234bc: 6b0b015f     	cmp	w10, w11
 2c234c0: 540000e2     	b.hs	0x2c234dc <__start_il2cpp+0x15aec8>
 2c234c4: 11000549     	add	w9, w10, #0x1
 2c234c8: 8b0a0908     	add	x8, x8, x10, lsl #2
 2c234cc: b9001aa9     	str	w9, [x21, #0x18]
 2c234d0: 52800109     	mov	w9, #0x8                // =8
 2c234d4: b9002109     	str	w9, [x8, #0x20]
 2c234d8: 14000007     	b	0x2c234f4 <__start_il2cpp+0x15aee0>
 2c234dc: f9401128     	ldr	x8, [x9, #0x20]
 2c234e0: aa1503e0     	mov	x0, x21
 2c234e4: 52800101     	mov	w1, #0x8                // =8
 2c234e8: f9406108     	ldr	x8, [x8, #0xc0]
 2c234ec: f9403902     	ldr	x2, [x8, #0x70]
 2c234f0: 943aace8     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c234f4: aa1403e0     	mov	x0, x20
 2c234f8: aa1503e1     	mov	x1, x21
 2c234fc: f9005275     	str	x21, [x19, #0xa0]
 2c23500: 97f6ce23     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c23504: f9400a60     	ldr	x0, [x19, #0x10]
 2c23508: b40009c0     	cbz	x0, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c2350c: d001b6c8     	adrp	x8, 0x62fd000
 2c23510: f9448908     	ldr	x8, [x8, #0x910]
 2c23514: f9400101     	ldr	x1, [x8]
 2c23518: 910023e8     	add	x8, sp, #0x8
 2c2351c: 943c1929     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2c23520: 3cc083e0     	ldur	q0, [sp, #0x8]
 2c23524: f9400fe8     	ldr	x8, [sp, #0x18]
 2c23528: d001b6d6     	adrp	x22, 0x62fd000
 2c2352c: d001b697     	adrp	x23, 0x62f5000
 2c23530: 910083e9     	add	x9, sp, #0x20
 2c23534: 3d800be0     	str	q0, [sp, #0x20]
 2c23538: f9447ed6     	ldr	x22, [x22, #0x8f8]
 2c2353c: f9001be8     	str	x8, [sp, #0x30]
 2c23540: f940eef7     	ldr	x23, [x23, #0x1d8]
 2c23544: a900a7ff     	stp	xzr, x9, [sp, #0x8]
 2c23548: f94002c1     	ldr	x1, [x22]
 2c2354c: 910083e0     	add	x0, sp, #0x20
 2c23550: 94798cd2     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2c23554: 36000180     	tbz	w0, #0x0, 0x2c23584 <__start_il2cpp+0x15af70>
 2c23558: f9401be0     	ldr	x0, [sp, #0x30]
 2c2355c: b40006e0     	cbz	x0, 0x2c23638 <__start_il2cpp+0x15b024>
 2c23560: f9400295     	ldr	x21, [x20]
 2c23564: aa1f03e1     	mov	x1, xzr
 2c23568: 9408c932     	bl	0x2e55a30 <__start_il2cpp+0x38d41c>
 2c2356c: 2a0003e1     	mov	w1, w0
 2c23570: b4000675     	cbz	x21, 0x2c2363c <__start_il2cpp+0x15b028>
 2c23574: f94002e2     	ldr	x2, [x23]
 2c23578: aa1503e0     	mov	x0, x21
 2c2357c: 943ab223     	bl	0x3acfe08 <__start_il2cpp+0x10077f4>
 2c23580: 17fffff2     	b	0x2c23548 <__start_il2cpp+0x15af34>
 2c23584: d001b6c8     	adrp	x8, 0x62fd000
 2c23588: 910083e0     	add	x0, sp, #0x20
 2c2358c: f9447908     	ldr	x8, [x8, #0x8f0]
 2c23590: f9400101     	ldr	x1, [x8]
 2c23594: 94798cc0     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2c23598: f9402e68     	ldr	x8, [x19, #0x58]
 2c2359c: b4000528     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c235a0: f9400d00     	ldr	x0, [x8, #0x18]
 2c235a4: b40004e0     	cbz	x0, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c235a8: f001b688     	adrp	x8, 0x62f6000
 2c235ac: f940dd08     	ldr	x8, [x8, #0x1b8]
 2c235b0: f9400101     	ldr	x1, [x8]
 2c235b4: 946a65b7     	bl	0x46bcc90 <__start_il2cpp+0x1bf467c>
 2c235b8: 34000120     	cbz	w0, 0x2c235dc <__start_il2cpp+0x15afc8>
 2c235bc: f9400288     	ldr	x8, [x20]
 2c235c0: b4000408     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c235c4: b9401901     	ldr	w1, [x8, #0x18]
 2c235c8: 2a1f03e0     	mov	w0, wzr
 2c235cc: aa1f03e2     	mov	x2, xzr
 2c235d0: 94bc5398     	bl	0x5b38430 <__start_il2cpp+0x306fe1c>
 2c235d4: 2a0003f3     	mov	w19, w0
 2c235d8: 14000002     	b	0x2c235e0 <__start_il2cpp+0x15afcc>
 2c235dc: 2a1f03f3     	mov	w19, wzr
 2c235e0: f9400280     	ldr	x0, [x20]
 2c235e4: b40002e0     	cbz	x0, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c235e8: d001b688     	adrp	x8, 0x62f5000
 2c235ec: 2a1303e1     	mov	w1, w19
 2c235f0: f940f908     	ldr	x8, [x8, #0x1f0]
 2c235f4: f9400102     	ldr	x2, [x8]
 2c235f8: 943aabe8     	bl	0x3ace598 <__start_il2cpp+0x1005f84>
 2c235fc: f9400288     	ldr	x8, [x20]
 2c23600: b4000208     	cbz	x8, 0x2c23640 <__start_il2cpp+0x15b02c>
 2c23604: d001b6c9     	adrp	x9, 0x62fd000
 2c23608: 2a0003f4     	mov	w20, w0
 2c2360c: aa0803e0     	mov	x0, x8
 2c23610: f945b529     	ldr	x9, [x9, #0xb68]
 2c23614: 2a1303e1     	mov	w1, w19
 2c23618: f9400122     	ldr	x2, [x9]
 2c2361c: 943ab29c     	bl	0x3ad008c <__start_il2cpp+0x1007a78>
 2c23620: 2a1403e0     	mov	w0, w20
 2c23624: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c23628: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c2362c: a9445ffe     	ldp	x30, x23, [sp, #0x40]
 2c23630: 9101c3ff     	add	sp, sp, #0x70
 2c23634: d65f03c0     	ret
 2c23638: 97f6ce94     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c2363c: 97f6ce93     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c23640: 97f6ce92     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c23644: 14000004     	b	0x2c23654 <__start_il2cpp+0x15b040>
 2c23648: 14000003     	b	0x2c23654 <__start_il2cpp+0x15b040>
 2c2364c: 14000002     	b	0x2c23654 <__start_il2cpp+0x15b040>
 2c23650: 14000001     	b	0x2c23654 <__start_il2cpp+0x15b040>
 2c23654: aa0003f5     	mov	x21, x0
 2c23658: 7100043f     	cmp	w1, #0x1
 2c2365c: 540001e1     	b.ne	0x2c23698 <__start_il2cpp+0x15b084>
 2c23660: aa1503e0     	mov	x0, x21
 2c23664: 94cc0c37     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c23668: f9400015     	ldr	x21, [x0]
 2c2366c: f90007f5     	str	x21, [sp, #0x8]
 2c23670: 94cc0c38     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c23674: d001b6c8     	adrp	x8, 0x62fd000
 2c23678: f9447908     	ldr	x8, [x8, #0x8f0]
 2c2367c: f9400be0     	ldr	x0, [sp, #0x10]
 2c23680: f9400101     	ldr	x1, [x8]
 2c23684: 94798c84     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2c23688: b4fff895     	cbz	x21, 0x2c23598 <__start_il2cpp+0x15af84>
 2c2368c: aa1503e0     	mov	x0, x21
 2c23690: 97f6ce7c     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c23694: aa0003f5     	mov	x21, x0
 2c23698: 910023e0     	add	x0, sp, #0x8
 2c2369c: 97ea1983     	bl	0x26a9ca8 <.text+0x4b48>
 2c236a0: aa1503e0     	mov	x0, x21
 2c236a4: 97fa840e     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c236a8: 97ea08e9     	bl	0x26a5a4c <.text+0x8ec>

# ItemTaskManager :: ItemTaskView GetFirstActiveItemTaskView()
# VA 0x2c236b4 .. 0x2c23770 (next mapped method entry)
 2c236b4: d100c3ff     	sub	sp, sp, #0x30
 2c236b8: a90157fe     	stp	x30, x21, [sp, #0x10]
 2c236bc: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c236c0: f001d774     	adrp	x20, 0x6712000
 2c236c4: aa0003f3     	mov	x19, x0
 2c236c8: 3971da88     	ldrb	w8, [x20, #0xc76]
 2c236cc: 370000c8     	tbnz	w8, #0x0, 0x2c236e4 <__start_il2cpp+0x15b0d0>
 2c236d0: d001b6c0     	adrp	x0, 0x62fd000
 2c236d4: f945b800     	ldr	x0, [x0, #0xb70]
 2c236d8: 97f6cdc2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c236dc: 52800028     	mov	w8, #0x1                // =1
 2c236e0: 3931da88     	strb	w8, [x20, #0xc76]
 2c236e4: f9401268     	ldr	x8, [x19, #0x20]
 2c236e8: f90007ff     	str	xzr, [sp, #0x8]
 2c236ec: b4000328     	cbz	x8, 0x2c23750 <__start_il2cpp+0x15b13c>
 2c236f0: d001b6d5     	adrp	x21, 0x62fd000
 2c236f4: 2a1f03f4     	mov	w20, wzr
 2c236f8: f945bab5     	ldr	x21, [x21, #0xb70]
 2c236fc: f9402d00     	ldr	x0, [x8, #0x58]
 2c23700: b4000280     	cbz	x0, 0x2c23750 <__start_il2cpp+0x15b13c>
 2c23704: aa1f03e1     	mov	x1, xzr
 2c23708: 94bcd091     	bl	0x5b5794c <__start_il2cpp+0x308f338>
 2c2370c: 6b00029f     	cmp	w20, w0
 2c23710: 5400022a     	b.ge	0x2c23754 <__start_il2cpp+0x15b140>
 2c23714: f9401268     	ldr	x8, [x19, #0x20]
 2c23718: b40001c8     	cbz	x8, 0x2c23750 <__start_il2cpp+0x15b13c>
 2c2371c: f9402d00     	ldr	x0, [x8, #0x58]
 2c23720: b4000180     	cbz	x0, 0x2c23750 <__start_il2cpp+0x15b13c>
 2c23724: 2a1403e1     	mov	w1, w20
 2c23728: aa1f03e2     	mov	x2, xzr
 2c2372c: 94bcd441     	bl	0x5b58830 <__start_il2cpp+0x309021c>
 2c23730: b4000100     	cbz	x0, 0x2c23750 <__start_il2cpp+0x15b13c>
 2c23734: f94002a2     	ldr	x2, [x21]
 2c23738: 910023e1     	add	x1, sp, #0x8
 2c2373c: 941df83c     	bl	0x33a182c <__start_il2cpp+0x8d9218>
 2c23740: 370000e0     	tbnz	w0, #0x0, 0x2c2375c <__start_il2cpp+0x15b148>
 2c23744: f9401268     	ldr	x8, [x19, #0x20]
 2c23748: 11000694     	add	w20, w20, #0x1
 2c2374c: b5fffd88     	cbnz	x8, 0x2c236fc <__start_il2cpp+0x15b0e8>
 2c23750: 97f6ce4e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c23754: aa1f03e0     	mov	x0, xzr
 2c23758: 14000002     	b	0x2c23760 <__start_il2cpp+0x15b14c>
 2c2375c: f94007e0     	ldr	x0, [sp, #0x8]
 2c23760: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c23764: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2c23768: 9100c3ff     	add	sp, sp, #0x30
 2c2376c: d65f03c0     	ret

# ItemTaskManager :: System.Void .ctor()
# VA 0x2c23770 .. 0x2c23b8c (next mapped method entry)
 2c23770: f81c0ffe     	str	x30, [sp, #-0x40]!
 2c23774: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2c23778: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c2377c: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c23780: d001b6d5     	adrp	x21, 0x62fd000
 2c23784: f001d778     	adrp	x24, 0x6712000
 2c23788: d001b6d4     	adrp	x20, 0x62fd000
 2c2378c: d001b677     	adrp	x23, 0x62f1000
 2c23790: d001b676     	adrp	x22, 0x62f1000
 2c23794: f9449ab5     	ldr	x21, [x21, #0x930]
 2c23798: f944ae94     	ldr	x20, [x20, #0x958]
 2c2379c: 3971e308     	ldrb	w8, [x24, #0xc78]
 2c237a0: f94102f7     	ldr	x23, [x23, #0x200]
 2c237a4: f940fad6     	ldr	x22, [x22, #0x1f0]
 2c237a8: aa0003f3     	mov	x19, x0
 2c237ac: 37000248     	tbnz	w8, #0x0, 0x2c237f4 <__start_il2cpp+0x15b1e0>
 2c237b0: d001b680     	adrp	x0, 0x62f5000
 2c237b4: f940e800     	ldr	x0, [x0, #0x1d0]
 2c237b8: 97f6cd8a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c237bc: d001b6c0     	adrp	x0, 0x62fd000
 2c237c0: f944ac00     	ldr	x0, [x0, #0x958]
 2c237c4: 97f6cd87     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c237c8: d001b660     	adrp	x0, 0x62f1000
 2c237cc: f940f800     	ldr	x0, [x0, #0x1f0]
 2c237d0: 97f6cd84     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c237d4: d001b660     	adrp	x0, 0x62f1000
 2c237d8: f9410000     	ldr	x0, [x0, #0x200]
 2c237dc: 97f6cd81     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c237e0: d001b6c0     	adrp	x0, 0x62fd000
 2c237e4: f9449800     	ldr	x0, [x0, #0x930]
 2c237e8: 97f6cd7e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c237ec: 52800028     	mov	w8, #0x1                // =1
 2c237f0: 3931e308     	strb	w8, [x24, #0xc78]
 2c237f4: f94002a0     	ldr	x0, [x21]
 2c237f8: 97f6ce20     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c237fc: f9400281     	ldr	x1, [x20]
 2c23800: aa0003f4     	mov	x20, x0
 2c23804: 943c1371     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2c23808: aa1303f5     	mov	x21, x19
 2c2380c: aa1403e1     	mov	x1, x20
 2c23810: f8010eb4     	str	x20, [x21, #0x10]!
 2c23814: aa1503e0     	mov	x0, x21
 2c23818: 97f6cd5d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c2381c: f94002e0     	ldr	x0, [x23]
 2c23820: 528000a8     	mov	w8, #0x5                // =5
 2c23824: 52800029     	mov	w9, #0x1                // =1
 2c23828: b9008aa8     	str	w8, [x21, #0x88]
 2c2382c: 390232a9     	strb	w9, [x21, #0x8c]
 2c23830: 97f6ce12     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c23834: f94002c1     	ldr	x1, [x22]
 2c23838: aa0003f4     	mov	x20, x0
 2c2383c: 943aa9f1     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2c23840: b4001a54     	cbz	x20, 0x2c23b88 <__start_il2cpp+0x15b574>
 2c23844: d001b695     	adrp	x21, 0x62f5000
 2c23848: f940eab5     	ldr	x21, [x21, #0x1d0]
 2c2384c: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c23850: f9400a88     	ldr	x8, [x20, #0x10]
 2c23854: f94002a9     	ldr	x9, [x21]
 2c23858: 1100054a     	add	w10, w10, #0x1
 2c2385c: b9001e8a     	str	w10, [x20, #0x1c]
 2c23860: b4001948     	cbz	x8, 0x2c23b88 <__start_il2cpp+0x15b574>
 2c23864: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c23868: b940190b     	ldr	w11, [x8, #0x18]
 2c2386c: 6b0b015f     	cmp	w10, w11
 2c23870: 54000122     	b.hs	0x2c23894 <__start_il2cpp+0x15b280>
 2c23874: 1100054b     	add	w11, w10, #0x1
 2c23878: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c2387c: b9001a8b     	str	w11, [x20, #0x18]
 2c23880: b900215f     	str	wzr, [x10, #0x20]
 2c23884: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c23888: 1100054a     	add	w10, w10, #0x1
 2c2388c: b9001e8a     	str	w10, [x20, #0x1c]
 2c23890: 1400000d     	b	0x2c238c4 <__start_il2cpp+0x15b2b0>
 2c23894: f9401128     	ldr	x8, [x9, #0x20]
 2c23898: aa1403e0     	mov	x0, x20
 2c2389c: 2a1f03e1     	mov	w1, wzr
 2c238a0: f9406108     	ldr	x8, [x8, #0xc0]
 2c238a4: f9403902     	ldr	x2, [x8, #0x70]
 2c238a8: 943aabfa     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c238ac: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c238b0: f9400a88     	ldr	x8, [x20, #0x10]
 2c238b4: f94002a9     	ldr	x9, [x21]
 2c238b8: 1100054a     	add	w10, w10, #0x1
 2c238bc: b9001e8a     	str	w10, [x20, #0x1c]
 2c238c0: b4001648     	cbz	x8, 0x2c23b88 <__start_il2cpp+0x15b574>
 2c238c4: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c238c8: b940190b     	ldr	w11, [x8, #0x18]
 2c238cc: 6b0b015f     	cmp	w10, w11
 2c238d0: 54000142     	b.hs	0x2c238f8 <__start_il2cpp+0x15b2e4>
 2c238d4: 1100054b     	add	w11, w10, #0x1
 2c238d8: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c238dc: b9001a8b     	str	w11, [x20, #0x18]
 2c238e0: 5280002b     	mov	w11, #0x1               // =1
 2c238e4: b900214b     	str	w11, [x10, #0x20]
 2c238e8: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c238ec: 1100054a     	add	w10, w10, #0x1
 2c238f0: b9001e8a     	str	w10, [x20, #0x1c]
 2c238f4: 1400000d     	b	0x2c23928 <__start_il2cpp+0x15b314>
 2c238f8: f9401128     	ldr	x8, [x9, #0x20]
 2c238fc: aa1403e0     	mov	x0, x20
 2c23900: 52800021     	mov	w1, #0x1                // =1
 2c23904: f9406108     	ldr	x8, [x8, #0xc0]
 2c23908: f9403902     	ldr	x2, [x8, #0x70]
 2c2390c: 943aabe1     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c23910: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c23914: f9400a88     	ldr	x8, [x20, #0x10]
 2c23918: f94002a9     	ldr	x9, [x21]
 2c2391c: 1100054a     	add	w10, w10, #0x1
 2c23920: b9001e8a     	str	w10, [x20, #0x1c]
 2c23924: b4001328     	cbz	x8, 0x2c23b88 <__start_il2cpp+0x15b574>
 2c23928: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c2392c: b940190b     	ldr	w11, [x8, #0x18]
 2c23930: 6b0b015f     	cmp	w10, w11
 2c23934: 54000142     	b.hs	0x2c2395c <__start_il2cpp+0x15b348>
 2c23938: 1100054b     	add	w11, w10, #0x1
 2c2393c: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c23940: b9001a8b     	str	w11, [x20, #0x18]
 2c23944: 5280004b     	mov	w11, #0x2               // =2
 2c23948: b900214b     	str	w11, [x10, #0x20]
 2c2394c: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c23950: 1100054a     	add	w10, w10, #0x1
 2c23954: b9001e8a     	str	w10, [x20, #0x1c]
 2c23958: 1400000d     	b	0x2c2398c <__start_il2cpp+0x15b378>
 2c2395c: f9401128     	ldr	x8, [x9, #0x20]
 2c23960: aa1403e0     	mov	x0, x20
 2c23964: 52800041     	mov	w1, #0x2                // =2
 2c23968: f9406108     	ldr	x8, [x8, #0xc0]
 2c2396c: f9403902     	ldr	x2, [x8, #0x70]
 2c23970: 943aabc8     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c23974: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c23978: f9400a88     	ldr	x8, [x20, #0x10]
 2c2397c: f94002a9     	ldr	x9, [x21]
 2c23980: 1100054a     	add	w10, w10, #0x1
 2c23984: b9001e8a     	str	w10, [x20, #0x1c]
 2c23988: b4001008     	cbz	x8, 0x2c23b88 <__start_il2cpp+0x15b574>
 2c2398c: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c23990: b940190b     	ldr	w11, [x8, #0x18]
 2c23994: 6b0b015f     	cmp	w10, w11
 2c23998: 54000142     	b.hs	0x2c239c0 <__start_il2cpp+0x15b3ac>
 2c2399c: 1100054b     	add	w11, w10, #0x1
 2c239a0: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c239a4: b9001a8b     	str	w11, [x20, #0x18]
 2c239a8: 5280006b     	mov	w11, #0x3               // =3
 2c239ac: b900214b     	str	w11, [x10, #0x20]
 2c239b0: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c239b4: 1100054a     	add	w10, w10, #0x1
 2c239b8: b9001e8a     	str	w10, [x20, #0x1c]
 2c239bc: 1400000d     	b	0x2c239f0 <__start_il2cpp+0x15b3dc>
 2c239c0: f9401128     	ldr	x8, [x9, #0x20]
 2c239c4: aa1403e0     	mov	x0, x20
 2c239c8: 52800061     	mov	w1, #0x3                // =3
 2c239cc: f9406108     	ldr	x8, [x8, #0xc0]
 2c239d0: f9403902     	ldr	x2, [x8, #0x70]
 2c239d4: 943aabaf     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c239d8: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c239dc: f9400a88     	ldr	x8, [x20, #0x10]
 2c239e0: f94002a9     	ldr	x9, [x21]
 2c239e4: 1100054a     	add	w10, w10, #0x1
 2c239e8: b9001e8a     	str	w10, [x20, #0x1c]
 2c239ec: b4000ce8     	cbz	x8, 0x2c23b88 <__start_il2cpp+0x15b574>
 2c239f0: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c239f4: b940190b     	ldr	w11, [x8, #0x18]
 2c239f8: 6b0b015f     	cmp	w10, w11
 2c239fc: 54000142     	b.hs	0x2c23a24 <__start_il2cpp+0x15b410>
 2c23a00: 1100054b     	add	w11, w10, #0x1
 2c23a04: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c23a08: b9001a8b     	str	w11, [x20, #0x18]
 2c23a0c: 5280008b     	mov	w11, #0x4               // =4
 2c23a10: b900214b     	str	w11, [x10, #0x20]
 2c23a14: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c23a18: 1100054a     	add	w10, w10, #0x1
 2c23a1c: b9001e8a     	str	w10, [x20, #0x1c]
 2c23a20: 1400000d     	b	0x2c23a54 <__start_il2cpp+0x15b440>
 2c23a24: f9401128     	ldr	x8, [x9, #0x20]
 2c23a28: aa1403e0     	mov	x0, x20
 2c23a2c: 52800081     	mov	w1, #0x4                // =4
 2c23a30: f9406108     	ldr	x8, [x8, #0xc0]
 2c23a34: f9403902     	ldr	x2, [x8, #0x70]
 2c23a38: 943aab96     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c23a3c: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c23a40: f9400a88     	ldr	x8, [x20, #0x10]
 2c23a44: f94002a9     	ldr	x9, [x21]
 2c23a48: 1100054a     	add	w10, w10, #0x1
 2c23a4c: b9001e8a     	str	w10, [x20, #0x1c]
 2c23a50: b40009c8     	cbz	x8, 0x2c23b88 <__start_il2cpp+0x15b574>
 2c23a54: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c23a58: b940190b     	ldr	w11, [x8, #0x18]
 2c23a5c: 6b0b015f     	cmp	w10, w11
 2c23a60: 54000142     	b.hs	0x2c23a88 <__start_il2cpp+0x15b474>
 2c23a64: 1100054b     	add	w11, w10, #0x1
 2c23a68: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c23a6c: b9001a8b     	str	w11, [x20, #0x18]
 2c23a70: 528000ab     	mov	w11, #0x5               // =5
 2c23a74: b900214b     	str	w11, [x10, #0x20]
 2c23a78: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c23a7c: 1100054a     	add	w10, w10, #0x1
 2c23a80: b9001e8a     	str	w10, [x20, #0x1c]
 2c23a84: 1400000d     	b	0x2c23ab8 <__start_il2cpp+0x15b4a4>
 2c23a88: f9401128     	ldr	x8, [x9, #0x20]
 2c23a8c: aa1403e0     	mov	x0, x20
 2c23a90: 528000a1     	mov	w1, #0x5                // =5
 2c23a94: f9406108     	ldr	x8, [x8, #0xc0]
 2c23a98: f9403902     	ldr	x2, [x8, #0x70]
 2c23a9c: 943aab7d     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c23aa0: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c23aa4: f9400a88     	ldr	x8, [x20, #0x10]
 2c23aa8: f94002a9     	ldr	x9, [x21]
 2c23aac: 1100054a     	add	w10, w10, #0x1
 2c23ab0: b9001e8a     	str	w10, [x20, #0x1c]
 2c23ab4: b40006a8     	cbz	x8, 0x2c23b88 <__start_il2cpp+0x15b574>
 2c23ab8: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c23abc: b940190b     	ldr	w11, [x8, #0x18]
 2c23ac0: 6b0b015f     	cmp	w10, w11
 2c23ac4: 54000142     	b.hs	0x2c23aec <__start_il2cpp+0x15b4d8>
 2c23ac8: 1100054b     	add	w11, w10, #0x1
 2c23acc: 8b0a090a     	add	x10, x8, x10, lsl #2
 2c23ad0: b9001a8b     	str	w11, [x20, #0x18]
 2c23ad4: 528000cb     	mov	w11, #0x6               // =6
 2c23ad8: b900214b     	str	w11, [x10, #0x20]
 2c23adc: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c23ae0: 1100054a     	add	w10, w10, #0x1
 2c23ae4: b9001e8a     	str	w10, [x20, #0x1c]
 2c23ae8: 1400000d     	b	0x2c23b1c <__start_il2cpp+0x15b508>
 2c23aec: f9401128     	ldr	x8, [x9, #0x20]
 2c23af0: aa1403e0     	mov	x0, x20
 2c23af4: 528000c1     	mov	w1, #0x6                // =6
 2c23af8: f9406108     	ldr	x8, [x8, #0xc0]
 2c23afc: f9403902     	ldr	x2, [x8, #0x70]
 2c23b00: 943aab64     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c23b04: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c23b08: f9400a88     	ldr	x8, [x20, #0x10]
 2c23b0c: f94002a9     	ldr	x9, [x21]
 2c23b10: 1100054a     	add	w10, w10, #0x1
 2c23b14: b9001e8a     	str	w10, [x20, #0x1c]
 2c23b18: b4000388     	cbz	x8, 0x2c23b88 <__start_il2cpp+0x15b574>
 2c23b1c: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c23b20: b940190b     	ldr	w11, [x8, #0x18]
 2c23b24: 6b0b015f     	cmp	w10, w11
 2c23b28: 540000e2     	b.hs	0x2c23b44 <__start_il2cpp+0x15b530>
 2c23b2c: 11000549     	add	w9, w10, #0x1
 2c23b30: 8b0a0908     	add	x8, x8, x10, lsl #2
 2c23b34: b9001a89     	str	w9, [x20, #0x18]
 2c23b38: 528000e9     	mov	w9, #0x7                // =7
 2c23b3c: b9002109     	str	w9, [x8, #0x20]
 2c23b40: 14000007     	b	0x2c23b5c <__start_il2cpp+0x15b548>
 2c23b44: f9401128     	ldr	x8, [x9, #0x20]
 2c23b48: aa1403e0     	mov	x0, x20
 2c23b4c: 528000e1     	mov	w1, #0x7                // =7
 2c23b50: f9406108     	ldr	x8, [x8, #0xc0]
 2c23b54: f9403902     	ldr	x2, [x8, #0x70]
 2c23b58: 943aab4e     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c23b5c: aa1303e0     	mov	x0, x19
 2c23b60: aa1403e1     	mov	x1, x20
 2c23b64: f80a0c14     	str	x20, [x0, #0xa0]!
 2c23b68: 97f6cc89     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c23b6c: aa1303e0     	mov	x0, x19
 2c23b70: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c23b74: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c23b78: aa1f03e1     	mov	x1, xzr
 2c23b7c: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c23b80: f84407fe     	ldr	x30, [sp], #0x40
 2c23b84: 1494aff1     	b	0x514fb48 <__start_il2cpp+0x2687534>
 2c23b88: 97f6cd40     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Int32 <Initialize>b__45_3()
# VA 0x2c23b8c .. 0x2c23ba4 (next mapped method entry)
 2c23b8c: f9406000     	ldr	x0, [x0, #0xc0]
 2c23b90: b4000060     	cbz	x0, 0x2c23b9c <__start_il2cpp+0x15b588>
 2c23b94: aa1f03e1     	mov	x1, xzr
 2c23b98: 14093dc8     	b	0x2e732b8 <__start_il2cpp+0x3aaca4>
 2c23b9c: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c23ba0: 97f6cd3a     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemTaskManager :: System.Collections.Generic.IEnumerable`1<ActiveItemTask> <Initialize>b__45_0()
# VA 0x2c23ba4 .. 0x2c23bac (next mapped method entry)
 2c23ba4: f9400800     	ldr	x0, [x0, #0x10]
 2c23ba8: d65f03c0     	ret

# ItemTaskManager :: System.Void <Initialize>b__45_1(ItemAddedSignal t)
# VA 0x2c23bac .. 0x2c23bb0 (next mapped method entry)
 2c23bac: 17fffc67     	b	0x2c22d48 <__start_il2cpp+0x15a734>

# ItemTaskManager :: System.Void <Initialize>b__45_2(ItemRemovedSignal t)
# VA 0x2c23bb0 .. 0x2c23bb8 (next mapped method entry)
 2c23bb0: d360fc22     	lsr	x2, x1, #32
 2c23bb4: 17fffce1     	b	0x2c22f38 <__start_il2cpp+0x15a924>
