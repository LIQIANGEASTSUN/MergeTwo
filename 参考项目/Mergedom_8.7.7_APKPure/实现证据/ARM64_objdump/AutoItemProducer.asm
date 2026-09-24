
# AutoItemProducer :: System.Int32 get_dropPlaceDegree()
# VA 0x2c097e8 .. 0x2c097f0 (next mapped method entry)
 2c097e8: 52800020     	mov	w0, #0x1                // =1
 2c097ec: d65f03c0     	ret

# AutoItemProducer :: System.Boolean get_consumeEnergy()
# VA 0x2c097f0 .. 0x2c097f8 (next mapped method entry)
 2c097f0: 2a1f03e0     	mov	w0, wzr
 2c097f4: d65f03c0     	ret

# AutoItemProducer :: System.Void Init(BaseItem producerBaseItem, ItemProducerData itemProducerData, ItemProducerTimer itemProducerTimer, UnityEngine.GameObject energyIcon, System.Boolean startOnInit, ActiveItemProducerData activeItemProducerInitData = null, ParticleSystemController producerParticles = null)
# VA 0x2c097f8 .. 0x2c098a0 (next mapped method entry)
 2c097f8: d100c3ff     	sub	sp, sp, #0x30
 2c097fc: f9000bfe     	str	x30, [sp, #0x10]
 2c09800: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c09804: 2a0503f4     	mov	w20, w5
 2c09808: aa0003f3     	mov	x19, x0
 2c0980c: 94000025     	bl	0x2c098a0 <__start_il2cpp+0x14128c>
 2c09810: 36000234     	tbz	w20, #0x0, 0x2c09854 <__start_il2cpp+0x141240>
 2c09814: f9403a68     	ldr	x8, [x19, #0x70]
 2c09818: b4000428     	cbz	x8, 0x2c0989c <__start_il2cpp+0x141288>
 2c0981c: b9402108     	ldr	w8, [x8, #0x20]
 2c09820: 7100091f     	cmp	w8, #0x2
 2c09824: 54000121     	b.ne	0x2c09848 <__start_il2cpp+0x141234>
 2c09828: b9403268     	ldr	w8, [x19, #0x30]
 2c0982c: 7100051f     	cmp	w8, #0x1
 2c09830: 5400012b     	b.lt	0x2c09854 <__start_il2cpp+0x141240>
 2c09834: aa1303e0     	mov	x0, x19
 2c09838: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0983c: f9400bfe     	ldr	x30, [sp, #0x10]
 2c09840: 9100c3ff     	add	sp, sp, #0x30
 2c09844: 14000196     	b	0x2c09e9c <__start_il2cpp+0x141888>
 2c09848: aa1303f4     	mov	x20, x19
 2c0984c: f84c8e88     	ldr	x8, [x20, #0xc8]!
 2c09850: b40000a8     	cbz	x8, 0x2c09864 <__start_il2cpp+0x141250>
 2c09854: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c09858: f9400bfe     	ldr	x30, [sp, #0x10]
 2c0985c: 9100c3ff     	add	sp, sp, #0x30
 2c09860: d65f03c0     	ret
 2c09864: aa1303e0     	mov	x0, x19
 2c09868: 94000172     	bl	0x2c09e30 <__start_il2cpp+0x14181c>
 2c0986c: aa0003e1     	mov	x1, x0
 2c09870: f9006660     	str	x0, [x19, #0xc8]
 2c09874: aa1403e0     	mov	x0, x20
 2c09878: 97f73545     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0987c: f9403e60     	ldr	x0, [x19, #0x78]
 2c09880: b40000e0     	cbz	x0, 0x2c0989c <__start_il2cpp+0x141288>
 2c09884: f9400281     	ldr	x1, [x20]
 2c09888: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0988c: f9400bfe     	ldr	x30, [sp, #0x10]
 2c09890: aa1f03e2     	mov	x2, xzr
 2c09894: 9100c3ff     	add	sp, sp, #0x30
 2c09898: 14bcf673     	b	0x5b47264 <__start_il2cpp+0x307ec50>
 2c0989c: 97f735fb     	bl	0x29d7088 <mono_class_get_checked+0x970>

# AutoItemProducer :: System.Collections.IEnumerator TryToProduce()
# VA 0x2c09e30 .. 0x2c09e9c (next mapped method entry)
 2c09e30: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c09e34: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c09e38: b001d854     	adrp	x20, 0x6712000
 2c09e3c: f001b795     	adrp	x21, 0x62fc000
 2c09e40: aa0003f3     	mov	x19, x0
 2c09e44: 396f4288     	ldrb	w8, [x20, #0xbd0]
 2c09e48: f947feb5     	ldr	x21, [x21, #0xff8]
 2c09e4c: 370000c8     	tbnz	w8, #0x0, 0x2c09e64 <__start_il2cpp+0x141850>
 2c09e50: f001b780     	adrp	x0, 0x62fc000
 2c09e54: f947fc00     	ldr	x0, [x0, #0xff8]
 2c09e58: 97f733e2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09e5c: 52800028     	mov	w8, #0x1                // =1
 2c09e60: 392f4288     	strb	w8, [x20, #0xbd0]
 2c09e64: f94002a0     	ldr	x0, [x21]
 2c09e68: 97f73484     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c09e6c: aa1f03e1     	mov	x1, xzr
 2c09e70: aa0003f4     	mov	x20, x0
 2c09e74: 94951735     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c09e78: aa1403e0     	mov	x0, x20
 2c09e7c: aa1303e1     	mov	x1, x19
 2c09e80: b900129f     	str	wzr, [x20, #0x10]
 2c09e84: f8020c13     	str	x19, [x0, #0x20]!
 2c09e88: 97f733c1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c09e8c: aa1403e0     	mov	x0, x20
 2c09e90: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c09e94: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c09e98: d65f03c0     	ret

# AutoItemProducer :: System.Void OnProduceSucceed(BaseItem producedItem)
# VA 0x2c0a2bc .. 0x2c0a2f8 (next mapped method entry)
 2c0a2bc: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0a2c0: aa0003f3     	mov	x19, x0
 2c0a2c4: 9400000d     	bl	0x2c0a2f8 <__start_il2cpp+0x141ce4>
 2c0a2c8: aa1f03e0     	mov	x0, xzr
 2c0a2cc: 97fe5b6e     	bl	0x2ba1084 <__start_il2cpp+0xd8a70>
 2c0a2d0: b4000120     	cbz	x0, 0x2c0a2f4 <__start_il2cpp+0x141ce0>
 2c0a2d4: f9405000     	ldr	x0, [x0, #0xa0]
 2c0a2d8: aa1f03e1     	mov	x1, xzr
 2c0a2dc: 97fe5b7d     	bl	0x2ba10d0 <__start_il2cpp+0xd8abc>
 2c0a2e0: aa1303e0     	mov	x0, x19
 2c0a2e4: 940000c1     	bl	0x2c0a5e8 <__start_il2cpp+0x141fd4>
 2c0a2e8: aa1303e0     	mov	x0, x19
 2c0a2ec: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0a2f0: 17fffeeb     	b	0x2c09e9c <__start_il2cpp+0x141888>
 2c0a2f4: 97f73365     	bl	0x29d7088 <mono_class_get_checked+0x970>

# AutoItemProducer :: System.Void StopTryToProduceCoroutine()
# VA 0x2c0a5e8 .. 0x2c0a628 (next mapped method entry)
 2c0a5e8: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0a5ec: aa0003f3     	mov	x19, x0
 2c0a5f0: f84c8e61     	ldr	x1, [x19, #0xc8]!
 2c0a5f4: b4000141     	cbz	x1, 0x2c0a61c <__start_il2cpp+0x142008>
 2c0a5f8: f9403c00     	ldr	x0, [x0, #0x78]
 2c0a5fc: b4000140     	cbz	x0, 0x2c0a624 <__start_il2cpp+0x142010>
 2c0a600: aa1f03e2     	mov	x2, xzr
 2c0a604: 94bcf364     	bl	0x5b47394 <__start_il2cpp+0x307ed80>
 2c0a608: aa1303e0     	mov	x0, x19
 2c0a60c: aa1f03e1     	mov	x1, xzr
 2c0a610: f900027f     	str	xzr, [x19]
 2c0a614: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0a618: 17f731dd     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2c0a61c: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0a620: d65f03c0     	ret
 2c0a624: 97f73299     	bl	0x29d7088 <mono_class_get_checked+0x970>

# AutoItemProducer :: System.Void StopProductionCoroutines()
# VA 0x2c0a628 .. 0x2c0a640 (next mapped method entry)
 2c0a628: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0a62c: aa0003f3     	mov	x19, x0
 2c0a630: 94000004     	bl	0x2c0a640 <__start_il2cpp+0x14202c>
 2c0a634: aa1303e0     	mov	x0, x19
 2c0a638: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0a63c: 17ffffeb     	b	0x2c0a5e8 <__start_il2cpp+0x141fd4>

# AutoItemProducer :: System.Void ResumeProductionCoroutines()
# VA 0x2c0a6a4 .. 0x2c0a6d0 (next mapped method entry)
 2c0a6a4: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0a6a8: aa0003f3     	mov	x19, x0
 2c0a6ac: 94000009     	bl	0x2c0a6d0 <__start_il2cpp+0x1420bc>
 2c0a6b0: b9403268     	ldr	w8, [x19, #0x30]
 2c0a6b4: 7100051f     	cmp	w8, #0x1
 2c0a6b8: 5400008b     	b.lt	0x2c0a6c8 <__start_il2cpp+0x1420b4>
 2c0a6bc: aa1303e0     	mov	x0, x19
 2c0a6c0: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0a6c4: 17fffdf6     	b	0x2c09e9c <__start_il2cpp+0x141888>
 2c0a6c8: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0a6cc: d65f03c0     	ret

# AutoItemProducer :: System.Void OnProduceFailed(Producer+ProduceFailTypes produceFailType)
# VA 0x2c0a754 .. 0x2c0a7b4 (next mapped method entry)
 2c0a754: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0a758: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0a75c: aa0003f3     	mov	x19, x0
 2c0a760: 94000015     	bl	0x2c0a7b4 <__start_il2cpp+0x1421a0>
 2c0a764: aa1303f4     	mov	x20, x19
 2c0a768: f84c8e88     	ldr	x8, [x20, #0xc8]!
 2c0a76c: b4000088     	cbz	x8, 0x2c0a77c <__start_il2cpp+0x142168>
 2c0a770: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0a774: f84207fe     	ldr	x30, [sp], #0x20
 2c0a778: d65f03c0     	ret
 2c0a77c: aa1303e0     	mov	x0, x19
 2c0a780: 97fffdac     	bl	0x2c09e30 <__start_il2cpp+0x14181c>
 2c0a784: aa0003e1     	mov	x1, x0
 2c0a788: f9006660     	str	x0, [x19, #0xc8]
 2c0a78c: aa1403e0     	mov	x0, x20
 2c0a790: 97f7317f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0a794: f9403e60     	ldr	x0, [x19, #0x78]
 2c0a798: b40000c0     	cbz	x0, 0x2c0a7b0 <__start_il2cpp+0x14219c>
 2c0a79c: f9400281     	ldr	x1, [x20]
 2c0a7a0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0a7a4: aa1f03e2     	mov	x2, xzr
 2c0a7a8: f84207fe     	ldr	x30, [sp], #0x20
 2c0a7ac: 14bcf2ae     	b	0x5b47264 <__start_il2cpp+0x307ec50>
 2c0a7b0: 97f73236     	bl	0x29d7088 <mono_class_get_checked+0x970>

# AutoItemProducer :: System.Void OnRechargeEnded(System.Boolean isSpeedUpUsed = False)
# VA 0x2c0a840 .. 0x2c0a858 (next mapped method entry)
 2c0a840: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0a844: aa0003f3     	mov	x19, x0
 2c0a848: 94000004     	bl	0x2c0a858 <__start_il2cpp+0x142244>
 2c0a84c: aa1303e0     	mov	x0, x19
 2c0a850: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0a854: 17fffd92     	b	0x2c09e9c <__start_il2cpp+0x141888>

# AutoItemProducer :: System.Void .ctor()
# VA 0x2c0aae8 .. 0x2c0aaf0 (next mapped method entry)
 2c0aae8: aa1f03e1     	mov	x1, xzr
 2c0aaec: 14951417     	b	0x514fb48 <__start_il2cpp+0x2687534>
