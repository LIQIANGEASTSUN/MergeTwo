
# ExperiencePoint :: System.Void Collect()
# VA 0x2bf8774 .. 0x2bf89b4 (next mapped method entry)
 2bf8774: f81c0ffe     	str	x30, [sp, #-0x40]!
 2bf8778: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2bf877c: a90257f6     	stp	x22, x21, [sp, #0x20]
 2bf8780: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2bf8784: d001d8d4     	adrp	x20, 0x6712000
 2bf8788: 9001b835     	adrp	x21, 0x62fc000
 2bf878c: aa0003f3     	mov	x19, x0
 2bf8790: 396d0288     	ldrb	w8, [x20, #0xb40]
 2bf8794: f9435ab5     	ldr	x21, [x21, #0x6b0]
 2bf8798: 370002a8     	tbnz	w8, #0x0, 0x2bf87ec <__start_il2cpp+0x1301d8>
 2bf879c: d001b7e0     	adrp	x0, 0x62f6000
 2bf87a0: f9404400     	ldr	x0, [x0, #0x88]
 2bf87a4: 97f7798f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf87a8: f001b800     	adrp	x0, 0x62fb000
 2bf87ac: f9466400     	ldr	x0, [x0, #0xcc8]
 2bf87b0: 97f7798c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf87b4: 9001b820     	adrp	x0, 0x62fc000
 2bf87b8: f9435800     	ldr	x0, [x0, #0x6b0]
 2bf87bc: 97f77989     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf87c0: 9001b820     	adrp	x0, 0x62fc000
 2bf87c4: f943cc00     	ldr	x0, [x0, #0x798]
 2bf87c8: 97f77986     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf87cc: 9001b820     	adrp	x0, 0x62fc000
 2bf87d0: f941f000     	ldr	x0, [x0, #0x3e0]
 2bf87d4: 97f77983     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf87d8: f001b7e0     	adrp	x0, 0x62f7000
 2bf87dc: f9445c00     	ldr	x0, [x0, #0x8b8]
 2bf87e0: 97f77980     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf87e4: 52800028     	mov	w8, #0x1                // =1
 2bf87e8: 392d0288     	strb	w8, [x20, #0xb40]
 2bf87ec: f94002a0     	ldr	x0, [x21]
 2bf87f0: f9407274     	ldr	x20, [x19, #0xe0]
 2bf87f4: b940e408     	ldr	w8, [x0, #0xe4]
 2bf87f8: 35000068     	cbnz	w8, 0x2bf8804 <__start_il2cpp+0x1301f0>
 2bf87fc: 97f779d8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf8800: f94002a0     	ldr	x0, [x21]
 2bf8804: f9405c08     	ldr	x8, [x0, #0xb8]
 2bf8808: f9400500     	ldr	x0, [x8, #0x8]
 2bf880c: b4000d20     	cbz	x0, 0x2bf89b0 <__start_il2cpp+0x13039c>
 2bf8810: d001b7e8     	adrp	x8, 0x62f6000
 2bf8814: f9404508     	ldr	x8, [x8, #0x88]
 2bf8818: b9404661     	ldr	w1, [x19, #0x44]
 2bf881c: f9400102     	ldr	x2, [x8]
 2bf8820: 9472a4b2     	bl	0x48a1ae8 <__start_il2cpp+0x1dd94d4>
 2bf8824: f9402a68     	ldr	x8, [x19, #0x50]
 2bf8828: b4000c48     	cbz	x8, 0x2bf89b0 <__start_il2cpp+0x13039c>
 2bf882c: 9001b7d7     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf8830: f001b7f8     	adrp	x24, 0x62f7000
 2bf8834: 2a0003f5     	mov	w21, w0
 2bf8838: f9470ef7     	ldr	x23, [x23, #0xe18]
 2bf883c: b9403108     	ldr	w8, [x8, #0x30]
 2bf8840: f9445f18     	ldr	x24, [x24, #0x8b8]
 2bf8844: 910033e1     	add	x1, sp, #0xc
 2bf8848: f94026e0     	ldr	x0, [x23, #0x48]
 2bf884c: b9000fe8     	str	w8, [sp, #0xc]
 2bf8850: 97f779c5     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2bf8854: aa0003f6     	mov	x22, x0
 2bf8858: b9404668     	ldr	w8, [x19, #0x44]
 2bf885c: f94026e0     	ldr	x0, [x23, #0x48]
 2bf8860: 910023e1     	add	x1, sp, #0x8
 2bf8864: b9000be8     	str	w8, [sp, #0x8]
 2bf8868: 97f779bf     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2bf886c: f9400308     	ldr	x8, [x24]
 2bf8870: aa0003e2     	mov	x2, x0
 2bf8874: aa1603e1     	mov	x1, x22
 2bf8878: aa1f03e3     	mov	x3, xzr
 2bf887c: aa0803e0     	mov	x0, x8
 2bf8880: 948df99d     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2bf8884: b4000974     	cbz	x20, 0x2bf89b0 <__start_il2cpp+0x13039c>
 2bf8888: f001b80a     	adrp	x10, 0x62fb000
 2bf888c: f9400288     	ldr	x8, [x20]
 2bf8890: aa0003f6     	mov	x22, x0
 2bf8894: f946654a     	ldr	x10, [x10, #0xcc8]
 2bf8898: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf889c: f9400141     	ldr	x1, [x10]
 2bf88a0: b4000129     	cbz	x9, 0x2bf88c4 <__start_il2cpp+0x1302b0>
 2bf88a4: f940590a     	ldr	x10, [x8, #0xb0]
 2bf88a8: 9100214a     	add	x10, x10, #0x8
 2bf88ac: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf88b0: eb01017f     	cmp	x11, x1
 2bf88b4: 54000100     	b.eq	0x2bf88d4 <__start_il2cpp+0x1302c0>
 2bf88b8: f1000529     	subs	x9, x9, #0x1
 2bf88bc: 9100414a     	add	x10, x10, #0x10
 2bf88c0: 54ffff61     	b.ne	0x2bf88ac <__start_il2cpp+0x130298>
 2bf88c4: aa1403e0     	mov	x0, x20
 2bf88c8: 52800022     	mov	w2, #0x1                // =1
 2bf88cc: 97f856a6     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf88d0: 14000005     	b	0x2bf88e4 <__start_il2cpp+0x1302d0>
 2bf88d4: b9400149     	ldr	w9, [x10]
 2bf88d8: 11000529     	add	w9, w9, #0x1
 2bf88dc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf88e0: 9104e100     	add	x0, x8, #0x138
 2bf88e4: a9401008     	ldp	x8, x4, [x0]
 2bf88e8: aa1403e0     	mov	x0, x20
 2bf88ec: 2a1503e1     	mov	w1, w21
 2bf88f0: 2a1f03e2     	mov	w2, wzr
 2bf88f4: aa1603e3     	mov	x3, x22
 2bf88f8: d63f0100     	blr	x8
 2bf88fc: f9403268     	ldr	x8, [x19, #0x60]
 2bf8900: b4000588     	cbz	x8, 0x2bf89b0 <__start_il2cpp+0x13039c>
 2bf8904: f9401500     	ldr	x0, [x8, #0x28]
 2bf8908: b4000540     	cbz	x0, 0x2bf89b0 <__start_il2cpp+0x13039c>
 2bf890c: f9407e74     	ldr	x20, [x19, #0xf8]
 2bf8910: aa1f03e1     	mov	x1, xzr
 2bf8914: 94bbdb14     	bl	0x5aef564 <__start_il2cpp+0x3026f50>
 2bf8918: aa0003f5     	mov	x21, x0
 2bf891c: aa1303e0     	mov	x0, x19
 2bf8920: aa1f03e1     	mov	x1, xzr
 2bf8924: 94bd1c0e     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf8928: b4000440     	cbz	x0, 0x2bf89b0 <__start_il2cpp+0x13039c>
 2bf892c: aa1f03e1     	mov	x1, xzr
 2bf8930: 94bd6dc0     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2bf8934: b40003f4     	cbz	x20, 0x2bf89b0 <__start_il2cpp+0x13039c>
 2bf8938: 9001b828     	adrp	x8, 0x62fc000
 2bf893c: 9001b829     	adrp	x9, 0x62fc000
 2bf8940: 1e2e1002     	fmov	s2, #1.00000000
 2bf8944: f941f108     	ldr	x8, [x8, #0x3e0]
 2bf8948: f943cd29     	ldr	x9, [x9, #0x798]
 2bf894c: 1e2e1004     	fmov	s4, #1.00000000
 2bf8950: aa1403e0     	mov	x0, x20
 2bf8954: aa1503e1     	mov	x1, x21
 2bf8958: 52800022     	mov	w2, #0x1                // =1
 2bf895c: f9400104     	ldr	x4, [x8]
 2bf8960: f0ff2448     	adrp	x8, 0x1083000
 2bf8964: f9400125     	ldr	x5, [x9]
 2bf8968: bd477903     	ldr	s3, [x8, #0x778]
 2bf896c: 2a1f03e3     	mov	w3, wzr
 2bf8970: 942c143c     	bl	0x36fda60 <__start_il2cpp+0xc3544c>
 2bf8974: f9408268     	ldr	x8, [x19, #0x100]
 2bf8978: b40001c8     	cbz	x8, 0x2bf89b0 <__start_il2cpp+0x13039c>
 2bf897c: f9402900     	ldr	x0, [x8, #0x50]
 2bf8980: b4000180     	cbz	x0, 0x2bf89b0 <__start_il2cpp+0x13039c>
 2bf8984: 528005a1     	mov	w1, #0x2d               // =45
 2bf8988: 52800022     	mov	w2, #0x1                // =1
 2bf898c: aa1f03e3     	mov	x3, xzr
 2bf8990: 97fd6f77     	bl	0x2b5476c <__start_il2cpp+0x8c158>
 2bf8994: aa1303e0     	mov	x0, x19
 2bf8998: 97fffe02     	bl	0x2bf81a0 <__start_il2cpp+0x12fb8c>
 2bf899c: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2bf89a0: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2bf89a4: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2bf89a8: f84407fe     	ldr	x30, [sp], #0x40
 2bf89ac: d65f03c0     	ret
 2bf89b0: 97f779b6     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ExperiencePoint :: System.Void .ctor()
# VA 0x2bf89b4 .. 0x2bf89b8 (next mapped method entry)
 2bf89b4: 17ffe7ee     	b	0x2bf296c <__start_il2cpp+0x12a358>
