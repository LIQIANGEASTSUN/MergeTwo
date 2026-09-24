
# EnergyController :: EnergyPauseCounter get_energyPauseCounter()
# VA 0x2bac874 .. 0x2bac87c (next mapped method entry)
 2bac874: f9403800     	ldr	x0, [x0, #0x70]
 2bac878: d65f03c0     	ret

# EnergyController :: System.Void set_energyPauseCounter(EnergyPauseCounter value)
# VA 0x2bac87c .. 0x2bac884 (next mapped method entry)
 2bac87c: f8070c01     	str	x1, [x0, #0x70]!
 2bac880: 17f8a943     	b	0x29d6d8c <mono_class_get_checked+0x674>

# EnergyController :: System.DateTime get_unlimitedEnergyStartTime()
# VA 0x2bac884 .. 0x2bac8a8 (next mapped method entry)
 2bac884: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bac888: f9401c08     	ldr	x8, [x0, #0x38]
 2bac88c: b40000c8     	cbz	x8, 0x2bac8a4 <__start_il2cpp+0xe4290>
 2bac890: f9401100     	ldr	x0, [x8, #0x20]
 2bac894: b4000080     	cbz	x0, 0x2bac8a4 <__start_il2cpp+0xe4290>
 2bac898: aa1f03e1     	mov	x1, xzr
 2bac89c: f84107fe     	ldr	x30, [sp], #0x10
 2bac8a0: 140ce09c     	b	0x2ee4b10 <__start_il2cpp+0x41c4fc>
 2bac8a4: 97f8a9f9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Void set_unlimitedEnergyStartTime(System.DateTime value)
# VA 0x2bac8a8 .. 0x2bac8cc (next mapped method entry)
 2bac8a8: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bac8ac: f9401c08     	ldr	x8, [x0, #0x38]
 2bac8b0: b40000c8     	cbz	x8, 0x2bac8c8 <__start_il2cpp+0xe42b4>
 2bac8b4: f9401100     	ldr	x0, [x8, #0x20]
 2bac8b8: b4000080     	cbz	x0, 0x2bac8c8 <__start_il2cpp+0xe42b4>
 2bac8bc: aa1f03e2     	mov	x2, xzr
 2bac8c0: f84107fe     	ldr	x30, [sp], #0x10
 2bac8c4: 140ce0bd     	b	0x2ee4bb8 <__start_il2cpp+0x41c5a4>
 2bac8c8: 97f8a9f0     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.DateTime get_unlimitedEnergyFinishTime()
# VA 0x2bac8cc .. 0x2bac8f0 (next mapped method entry)
 2bac8cc: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bac8d0: f9401c08     	ldr	x8, [x0, #0x38]
 2bac8d4: b40000c8     	cbz	x8, 0x2bac8ec <__start_il2cpp+0xe42d8>
 2bac8d8: f9401100     	ldr	x0, [x8, #0x20]
 2bac8dc: b4000080     	cbz	x0, 0x2bac8ec <__start_il2cpp+0xe42d8>
 2bac8e0: aa1f03e1     	mov	x1, xzr
 2bac8e4: f84107fe     	ldr	x30, [sp], #0x10
 2bac8e8: 140ce090     	b	0x2ee4b28 <__start_il2cpp+0x41c514>
 2bac8ec: 97f8a9e7     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Void set_unlimitedEnergyFinishTime(System.DateTime value)
# VA 0x2bac8f0 .. 0x2bac914 (next mapped method entry)
 2bac8f0: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bac8f4: f9401c08     	ldr	x8, [x0, #0x38]
 2bac8f8: b40000c8     	cbz	x8, 0x2bac910 <__start_il2cpp+0xe42fc>
 2bac8fc: f9401100     	ldr	x0, [x8, #0x20]
 2bac900: b4000080     	cbz	x0, 0x2bac910 <__start_il2cpp+0xe42fc>
 2bac904: aa1f03e2     	mov	x2, xzr
 2bac908: f84107fe     	ldr	x30, [sp], #0x10
 2bac90c: 140ce0bb     	b	0x2ee4bf8 <__start_il2cpp+0x41c5e4>
 2bac910: 97f8a9de     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.DateTime get_rechargeStartTime()
# VA 0x2bac914 .. 0x2bac938 (next mapped method entry)
 2bac914: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bac918: f9401c08     	ldr	x8, [x0, #0x38]
 2bac91c: b40000c8     	cbz	x8, 0x2bac934 <__start_il2cpp+0xe4320>
 2bac920: f9401100     	ldr	x0, [x8, #0x20]
 2bac924: b4000080     	cbz	x0, 0x2bac934 <__start_il2cpp+0xe4320>
 2bac928: aa1f03e1     	mov	x1, xzr
 2bac92c: f84107fe     	ldr	x30, [sp], #0x10
 2bac930: 140ce084     	b	0x2ee4b40 <__start_il2cpp+0x41c52c>
 2bac934: 97f8a9d5     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Void set_rechargeStartTime(System.DateTime value)
# VA 0x2bac938 .. 0x2bac95c (next mapped method entry)
 2bac938: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bac93c: f9401c08     	ldr	x8, [x0, #0x38]
 2bac940: b40000c8     	cbz	x8, 0x2bac958 <__start_il2cpp+0xe4344>
 2bac944: f9401100     	ldr	x0, [x8, #0x20]
 2bac948: b4000080     	cbz	x0, 0x2bac958 <__start_il2cpp+0xe4344>
 2bac94c: aa1f03e2     	mov	x2, xzr
 2bac950: f84107fe     	ldr	x30, [sp], #0x10
 2bac954: 140ce0b9     	b	0x2ee4c38 <__start_il2cpp+0x41c624>
 2bac958: 97f8a9cc     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.DateTime get_rechargeFinishTime()
# VA 0x2bac95c .. 0x2bac980 (next mapped method entry)
 2bac95c: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bac960: f9401c08     	ldr	x8, [x0, #0x38]
 2bac964: b40000c8     	cbz	x8, 0x2bac97c <__start_il2cpp+0xe4368>
 2bac968: f9401100     	ldr	x0, [x8, #0x20]
 2bac96c: b4000080     	cbz	x0, 0x2bac97c <__start_il2cpp+0xe4368>
 2bac970: aa1f03e1     	mov	x1, xzr
 2bac974: f84107fe     	ldr	x30, [sp], #0x10
 2bac978: 140ce078     	b	0x2ee4b58 <__start_il2cpp+0x41c544>
 2bac97c: 97f8a9c3     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Void set_rechargeFinishTime(System.DateTime value)
# VA 0x2bac980 .. 0x2bac9a4 (next mapped method entry)
 2bac980: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bac984: f9401c08     	ldr	x8, [x0, #0x38]
 2bac988: b40000c8     	cbz	x8, 0x2bac9a0 <__start_il2cpp+0xe438c>
 2bac98c: f9401100     	ldr	x0, [x8, #0x20]
 2bac990: b4000080     	cbz	x0, 0x2bac9a0 <__start_il2cpp+0xe438c>
 2bac994: aa1f03e2     	mov	x2, xzr
 2bac998: f84107fe     	ldr	x30, [sp], #0x10
 2bac99c: 140ce0b7     	b	0x2ee4c78 <__start_il2cpp+0x41c664>
 2bac9a0: 97f8a9ba     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Int64 get_EnergyPackThreshold()
# VA 0x2bac9a4 .. 0x2bac9ac (next mapped method entry)
 2bac9a4: f9403400     	ldr	x0, [x0, #0x68]
 2bac9a8: d65f03c0     	ret

# EnergyController :: System.Void Initialize()
# VA 0x2bac9ac .. 0x2bad0f4 (next mapped method entry)
 2bac9ac: d101c3ff     	sub	sp, sp, #0x70
 2bac9b0: fd001be8     	str	d8, [sp, #0x30]
 2bac9b4: f9001ffe     	str	x30, [sp, #0x38]
 2bac9b8: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2bac9bc: a90557f6     	stp	x22, x21, [sp, #0x50]
 2bac9c0: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2bac9c4: d001db34     	adrp	x20, 0x6712000
 2bac9c8: d001ba76     	adrp	x22, 0x62fa000
 2bac9cc: d001ba75     	adrp	x21, 0x62fa000
 2bac9d0: 3964ae88     	ldrb	w8, [x20, #0x92b]
 2bac9d4: f9434ed6     	ldr	x22, [x22, #0x698]
 2bac9d8: f94352b5     	ldr	x21, [x21, #0x6a0]
 2bac9dc: aa0003f3     	mov	x19, x0
 2bac9e0: 37000488     	tbnz	w8, #0x0, 0x2baca70 <__start_il2cpp+0xe445c>
 2bac9e4: d001ba60     	adrp	x0, 0x62fa000
 2bac9e8: f9434c00     	ldr	x0, [x0, #0x698]
 2bac9ec: 97f8a8fd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bac9f0: d001ba20     	adrp	x0, 0x62f2000
 2bac9f4: f940ac00     	ldr	x0, [x0, #0x158]
 2bac9f8: 97f8a8fa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bac9fc: d001ba60     	adrp	x0, 0x62fa000
 2baca00: f9435000     	ldr	x0, [x0, #0x6a0]
 2baca04: 97f8a8f7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baca08: 9001ba40     	adrp	x0, 0x62f4000
 2baca0c: f9461c00     	ldr	x0, [x0, #0xc38]
 2baca10: 97f8a8f4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baca14: d001ba40     	adrp	x0, 0x62f6000
 2baca18: f9400c00     	ldr	x0, [x0, #0x18]
 2baca1c: 97f8a8f1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baca20: d001ba60     	adrp	x0, 0x62fa000
 2baca24: f9435400     	ldr	x0, [x0, #0x6a8]
 2baca28: 97f8a8ee     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baca2c: d001ba60     	adrp	x0, 0x62fa000
 2baca30: f9435800     	ldr	x0, [x0, #0x6b0]
 2baca34: 97f8a8eb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baca38: 9001ba40     	adrp	x0, 0x62f4000
 2baca3c: f940b000     	ldr	x0, [x0, #0x160]
 2baca40: 97f8a8e8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baca44: d001ba60     	adrp	x0, 0x62fa000
 2baca48: f9435c00     	ldr	x0, [x0, #0x6b8]
 2baca4c: 97f8a8e5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baca50: d001ba60     	adrp	x0, 0x62fa000
 2baca54: f9436000     	ldr	x0, [x0, #0x6c0]
 2baca58: 97f8a8e2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baca5c: d001ba60     	adrp	x0, 0x62fa000
 2baca60: f9436400     	ldr	x0, [x0, #0x6c8]
 2baca64: 97f8a8df     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baca68: 52800028     	mov	w8, #0x1                // =1
 2baca6c: 3924ae88     	strb	w8, [x20, #0x92b]
 2baca70: f94002c0     	ldr	x0, [x22]
 2baca74: f9401a74     	ldr	x20, [x19, #0x30]
 2baca78: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2baca7c: f9000fff     	str	xzr, [sp, #0x18]
 2baca80: 97f8a97e     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2baca84: f94002a2     	ldr	x2, [x21]
 2baca88: aa1303e1     	mov	x1, x19
 2baca8c: aa1f03e3     	mov	x3, xzr
 2baca90: aa0003f5     	mov	x21, x0
 2baca94: 943d9631     	bl	0x3b12358 <__start_il2cpp+0x1049d44>
 2baca98: b40032d4     	cbz	x20, 0x2bad0f0 <__start_il2cpp+0xe4adc>
 2baca9c: d001ba68     	adrp	x8, 0x62fa000
 2bacaa0: d001ba37     	adrp	x23, 0x62f2000
 2bacaa4: d001ba78     	adrp	x24, 0x62fa000
 2bacaa8: f9435908     	ldr	x8, [x8, #0x6b0]
 2bacaac: 9001ba56     	adrp	x22, 0x62f4000
 2bacab0: f940aef7     	ldr	x23, [x23, #0x158]
 2bacab4: f9435718     	ldr	x24, [x24, #0x6a8]
 2bacab8: f9461ed6     	ldr	x22, [x22, #0xc38]
 2bacabc: aa1403e0     	mov	x0, x20
 2bacac0: f9400102     	ldr	x2, [x8]
 2bacac4: aa1503e1     	mov	x1, x21
 2bacac8: 9429eab6     	bl	0x36275a0 <__start_il2cpp+0xb5ef8c>
 2bacacc: f94002e0     	ldr	x0, [x23]
 2bacad0: b940e408     	ldr	w8, [x0, #0xe4]
 2bacad4: 35000048     	cbnz	w8, 0x2bacadc <__start_il2cpp+0xe44c8>
 2bacad8: 97f8a921     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacadc: d001ba75     	adrp	x21, 0x62fa000
 2bacae0: aa1f03e0     	mov	x0, xzr
 2bacae4: f9435eb5     	ldr	x21, [x21, #0x6b8]
 2bacae8: 9494fca7     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bacaec: f9400302     	ldr	x2, [x24]
 2bacaf0: aa0003f4     	mov	x20, x0
 2bacaf4: f90017e0     	str	x0, [sp, #0x28]
 2bacaf8: 910023e0     	add	x0, sp, #0x8
 2bacafc: 52800321     	mov	w1, #0x19               // =25
 2bacb00: a900ffff     	stp	xzr, xzr, [sp, #0x8]
 2bacb04: 9444da55     	bl	0x3ce3458 <__start_il2cpp+0x121ae44>
 2bacb08: f94002c0     	ldr	x0, [x22]
 2bacb0c: b940e408     	ldr	w8, [x0, #0xe4]
 2bacb10: 35000048     	cbnz	w8, 0x2bacb18 <__start_il2cpp+0xe4504>
 2bacb14: 97f8a912     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacb18: a9408be1     	ldp	x1, x2, [sp, #0x8]
 2bacb1c: 2a1f03e3     	mov	w3, wzr
 2bacb20: f94002a0     	ldr	x0, [x21]
 2bacb24: aa1f03e4     	mov	x4, xzr
 2bacb28: 97fe6720     	bl	0x2b467a8 <__start_il2cpp+0x7e194>
 2bacb2c: f9003660     	str	x0, [x19, #0x68]
 2bacb30: aa1303e0     	mov	x0, x19
 2bacb34: 97ffff54     	bl	0x2bac884 <__start_il2cpp+0xe4270>
 2bacb38: aa1f03e1     	mov	x1, xzr
 2bacb3c: aa1f03e2     	mov	x2, xzr
 2bacb40: f90013ff     	str	xzr, [sp, #0x20]
 2bacb44: 94950384     	bl	0x50ed954 <__start_il2cpp+0x2625340>
 2bacb48: 36001480     	tbz	w0, #0x0, 0x2bacdd8 <__start_il2cpp+0xe47c4>
 2bacb4c: aa1303e0     	mov	x0, x19
 2bacb50: 97ffff5f     	bl	0x2bac8cc <__start_il2cpp+0xe42b8>
 2bacb54: aa0003f5     	mov	x21, x0
 2bacb58: f94002e0     	ldr	x0, [x23]
 2bacb5c: f90013ff     	str	xzr, [sp, #0x20]
 2bacb60: b940e408     	ldr	w8, [x0, #0xe4]
 2bacb64: 35000048     	cbnz	w8, 0x2bacb6c <__start_il2cpp+0xe4558>
 2bacb68: 97f8a8fd     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacb6c: aa1503e0     	mov	x0, x21
 2bacb70: aa1f03e1     	mov	x1, xzr
 2bacb74: aa1f03e2     	mov	x2, xzr
 2bacb78: 94950377     	bl	0x50ed954 <__start_il2cpp+0x2625340>
 2bacb7c: 360012e0     	tbz	w0, #0x0, 0x2bacdd8 <__start_il2cpp+0xe47c4>
 2bacb80: aa1303e0     	mov	x0, x19
 2bacb84: 97ffff52     	bl	0x2bac8cc <__start_il2cpp+0xe42b8>
 2bacb88: f94002e8     	ldr	x8, [x23]
 2bacb8c: aa0003f5     	mov	x21, x0
 2bacb90: b940e509     	ldr	w9, [x8, #0xe4]
 2bacb94: 35000069     	cbnz	w9, 0x2bacba0 <__start_il2cpp+0xe458c>
 2bacb98: aa0803e0     	mov	x0, x8
 2bacb9c: 97f8a8f0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacba0: aa1403e0     	mov	x0, x20
 2bacba4: aa1503e1     	mov	x1, x21
 2bacba8: aa1f03e2     	mov	x2, xzr
 2bacbac: 94950384     	bl	0x50ed9bc <__start_il2cpp+0x26253a8>
 2bacbb0: 36000220     	tbz	w0, #0x0, 0x2bacbf4 <__start_il2cpp+0xe45e0>
 2bacbb4: aa1303e0     	mov	x0, x19
 2bacbb8: 97ffff33     	bl	0x2bac884 <__start_il2cpp+0xe4270>
 2bacbbc: f94002e8     	ldr	x8, [x23]
 2bacbc0: aa0003f5     	mov	x21, x0
 2bacbc4: b940e509     	ldr	w9, [x8, #0xe4]
 2bacbc8: 35000069     	cbnz	w9, 0x2bacbd4 <__start_il2cpp+0xe45c0>
 2bacbcc: aa0803e0     	mov	x0, x8
 2bacbd0: 97f8a8e3     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacbd4: aa1403e0     	mov	x0, x20
 2bacbd8: aa1503e1     	mov	x1, x21
 2bacbdc: aa1f03e2     	mov	x2, xzr
 2bacbe0: 949503ad     	bl	0x50eda94 <__start_il2cpp+0x2625480>
 2bacbe4: 36000080     	tbz	w0, #0x0, 0x2bacbf4 <__start_il2cpp+0xe45e0>
 2bacbe8: aa1303e0     	mov	x0, x19
 2bacbec: 94000142     	bl	0x2bad0f4 <__start_il2cpp+0xe4ae0>
 2bacbf0: 14000139     	b	0x2bad0d4 <__start_il2cpp+0xe4ac0>
 2bacbf4: aa1303e0     	mov	x0, x19
 2bacbf8: 97ffff35     	bl	0x2bac8cc <__start_il2cpp+0xe42b8>
 2bacbfc: f94002e8     	ldr	x8, [x23]
 2bacc00: aa0003f5     	mov	x21, x0
 2bacc04: b940e509     	ldr	w9, [x8, #0xe4]
 2bacc08: 35000069     	cbnz	w9, 0x2bacc14 <__start_il2cpp+0xe4600>
 2bacc0c: aa0803e0     	mov	x0, x8
 2bacc10: 97f8a8d3     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacc14: aa1403e0     	mov	x0, x20
 2bacc18: aa1503e1     	mov	x1, x21
 2bacc1c: aa1f03e2     	mov	x2, xzr
 2bacc20: 94950319     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2bacc24: 9001ba58     	adrp	x24, 0x62f4000
 2bacc28: f940b318     	ldr	x24, [x24, #0x160]
 2bacc2c: f9000fe0     	str	x0, [sp, #0x18]
 2bacc30: f9400308     	ldr	x8, [x24]
 2bacc34: b940e509     	ldr	w9, [x8, #0xe4]
 2bacc38: 35000069     	cbnz	w9, 0x2bacc44 <__start_il2cpp+0xe4630>
 2bacc3c: aa0803e0     	mov	x0, x8
 2bacc40: 97f8a8c7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacc44: 910063e0     	add	x0, sp, #0x18
 2bacc48: aa1f03e1     	mov	x1, xzr
 2bacc4c: 9495dccb     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2bacc50: aa1f03e0     	mov	x0, xzr
 2bacc54: 1e604008     	fmov	d8, d0
 2bacc58: 94002430     	bl	0x2bb5d18 <__start_il2cpp+0xed704>
 2bacc5c: 71018c1f     	cmp	w0, #0x63
 2bacc60: 5400062c     	b.gt	0x2bacd24 <__start_il2cpp+0xe4710>
 2bacc64: 1e780108     	fcvtzs	w8, d8
 2bacc68: 52911129     	mov	w9, #0x8889             // =34953
 2bacc6c: aa1f03e1     	mov	x1, xzr
 2bacc70: 72b11109     	movk	w9, #0x8888, lsl #16
 2bacc74: 9b297d09     	smull	x9, w8, w9
 2bacc78: d360fd29     	lsr	x9, x9, #32
 2bacc7c: 0b080128     	add	w8, w9, w8
 2bacc80: d2effe09     	mov	x9, #0x7ff0000000000000 // =9218868437227405312
 2bacc84: 9e670120     	fmov	d0, x9
 2bacc88: 13067d09     	asr	w9, w8, #6
 2bacc8c: 0b487d28     	add	w8, w9, w8, lsr #31
 2bacc90: 529dde09     	mov	w9, #0xeef0             // =61168
 2bacc94: 1e602100     	fcmp	d8, d0
 2bacc98: 72bfddc9     	movk	w9, #0xfeee, lsl #16
 2bacc9c: 1a880528     	csinc	w8, w9, w8, eq
 2bacca0: 52800c89     	mov	w9, #0x64               // =100
 2bacca4: 0b000108     	add	w8, w8, w0
 2bacca8: 7101911f     	cmp	w8, #0x64
 2baccac: 1a89b115     	csel	w21, w8, w9, lt
 2baccb0: 2a1503e0     	mov	w0, w21
 2baccb4: 940027a9     	bl	0x2bb6b58 <__start_il2cpp+0xee544>
 2baccb8: 9001ba28     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2baccbc: 910023e1     	add	x1, sp, #0x8
 2baccc0: f9470d08     	ldr	x8, [x8, #0xe18]
 2baccc4: b9000bf5     	str	w21, [sp, #0x8]
 2baccc8: f9402500     	ldr	x0, [x8, #0x48]
 2bacccc: 97f8a8a6     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2baccd0: d001ba68     	adrp	x8, 0x62fa000
 2baccd4: aa0003e1     	mov	x1, x0
 2baccd8: aa1f03e2     	mov	x2, xzr
 2baccdc: f9436508     	ldr	x8, [x8, #0x6c8]
 2bacce0: f9400108     	ldr	x8, [x8]
 2bacce4: aa0803e0     	mov	x0, x8
 2bacce8: 948efea2     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2baccec: d001ba48     	adrp	x8, 0x62f6000
 2baccf0: aa0003f5     	mov	x21, x0
 2baccf4: f9400d08     	ldr	x8, [x8, #0x18]
 2baccf8: f9400108     	ldr	x8, [x8]
 2baccfc: b940e509     	ldr	w9, [x8, #0xe4]
 2bacd00: 35000069     	cbnz	w9, 0x2bacd0c <__start_il2cpp+0xe46f8>
 2bacd04: aa0803e0     	mov	x0, x8
 2bacd08: 97f8a895     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacd0c: d001ba68     	adrp	x8, 0x62fa000
 2bacd10: aa1503e1     	mov	x1, x21
 2bacd14: aa1f03e2     	mov	x2, xzr
 2bacd18: f9436108     	ldr	x8, [x8, #0x6c0]
 2bacd1c: f9400100     	ldr	x0, [x8]
 2bacd20: 97fe8402     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2bacd24: f9401260     	ldr	x0, [x19, #0x20]
 2bacd28: b4001e40     	cbz	x0, 0x2bad0f0 <__start_il2cpp+0xe4adc>
 2bacd2c: 2a1f03e1     	mov	w1, wzr
 2bacd30: aa1f03e2     	mov	x2, xzr
 2bacd34: 94049232     	bl	0x2cd15fc <__start_il2cpp+0x208fe8>
 2bacd38: aa1303e0     	mov	x0, x19
 2bacd3c: 97fffee4     	bl	0x2bac8cc <__start_il2cpp+0xe42b8>
 2bacd40: aa0003f5     	mov	x21, x0
 2bacd44: aa1303e0     	mov	x0, x19
 2bacd48: 97fffecf     	bl	0x2bac884 <__start_il2cpp+0xe4270>
 2bacd4c: f94002e8     	ldr	x8, [x23]
 2bacd50: aa0003f6     	mov	x22, x0
 2bacd54: b940e509     	ldr	w9, [x8, #0xe4]
 2bacd58: 35000069     	cbnz	w9, 0x2bacd64 <__start_il2cpp+0xe4750>
 2bacd5c: aa0803e0     	mov	x0, x8
 2bacd60: 97f8a87f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacd64: aa1503e0     	mov	x0, x21
 2bacd68: aa1603e1     	mov	x1, x22
 2bacd6c: aa1f03e2     	mov	x2, xzr
 2bacd70: 949502c5     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2bacd74: f9400308     	ldr	x8, [x24]
 2bacd78: f9000fe0     	str	x0, [sp, #0x18]
 2bacd7c: b940e509     	ldr	w9, [x8, #0xe4]
 2bacd80: 35000069     	cbnz	w9, 0x2bacd8c <__start_il2cpp+0xe4778>
 2bacd84: aa0803e0     	mov	x0, x8
 2bacd88: 97f8a875     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacd8c: 910063e0     	add	x0, sp, #0x18
 2bacd90: aa1f03e1     	mov	x1, xzr
 2bacd94: 9495dc79     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2bacd98: d2effe08     	mov	x8, #0x7ff0000000000000 // =9218868437227405312
 2bacd9c: 1e780009     	fcvtzs	w9, d0
 2bacda0: aa1f03e1     	mov	x1, xzr
 2bacda4: 9e670101     	fmov	d1, x8
 2bacda8: 52b00008     	mov	w8, #-0x80000000        // =-2147483648
 2bacdac: 1e612000     	fcmp	d0, d1
 2bacdb0: 1a890100     	csel	w0, w8, w9, eq
 2bacdb4: 9406a157     	bl	0x2d55310 <__start_il2cpp+0x28ccfc>
 2bacdb8: aa1303e0     	mov	x0, x19
 2bacdbc: aa1f03e1     	mov	x1, xzr
 2bacdc0: f90013ff     	str	xzr, [sp, #0x20]
 2bacdc4: 97fffeb9     	bl	0x2bac8a8 <__start_il2cpp+0xe4294>
 2bacdc8: aa1303e0     	mov	x0, x19
 2bacdcc: aa1f03e1     	mov	x1, xzr
 2bacdd0: f90013ff     	str	xzr, [sp, #0x20]
 2bacdd4: 97fffec7     	bl	0x2bac8f0 <__start_il2cpp+0xe42dc>
 2bacdd8: aa1303e0     	mov	x0, x19
 2bacddc: 97fffee0     	bl	0x2bac95c <__start_il2cpp+0xe4348>
 2bacde0: aa0003f5     	mov	x21, x0
 2bacde4: f94002e0     	ldr	x0, [x23]
 2bacde8: f90013ff     	str	xzr, [sp, #0x20]
 2bacdec: b940e408     	ldr	w8, [x0, #0xe4]
 2bacdf0: 35000048     	cbnz	w8, 0x2bacdf8 <__start_il2cpp+0xe47e4>
 2bacdf4: 97f8a85a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacdf8: aa1503e0     	mov	x0, x21
 2bacdfc: aa1f03e1     	mov	x1, xzr
 2bace00: aa1f03e2     	mov	x2, xzr
 2bace04: 949502ba     	bl	0x50ed8ec <__start_il2cpp+0x26252d8>
 2bace08: 370001c0     	tbnz	w0, #0x0, 0x2bace40 <__start_il2cpp+0xe482c>
 2bace0c: aa1303e0     	mov	x0, x19
 2bace10: 97fffec1     	bl	0x2bac914 <__start_il2cpp+0xe4300>
 2bace14: aa0003f5     	mov	x21, x0
 2bace18: f94002e0     	ldr	x0, [x23]
 2bace1c: f90013ff     	str	xzr, [sp, #0x20]
 2bace20: b940e408     	ldr	w8, [x0, #0xe4]
 2bace24: 35000048     	cbnz	w8, 0x2bace2c <__start_il2cpp+0xe4818>
 2bace28: 97f8a84d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bace2c: aa1503e0     	mov	x0, x21
 2bace30: aa1f03e1     	mov	x1, xzr
 2bace34: aa1f03e2     	mov	x2, xzr
 2bace38: 949502ad     	bl	0x50ed8ec <__start_il2cpp+0x26252d8>
 2bace3c: 36000480     	tbz	w0, #0x0, 0x2bacecc <__start_il2cpp+0xe48b8>
 2bace40: aa1f03e0     	mov	x0, xzr
 2bace44: 940023b5     	bl	0x2bb5d18 <__start_il2cpp+0xed704>
 2bace48: 71018c1f     	cmp	w0, #0x63
 2bace4c: 540013cc     	b.gt	0x2bad0c4 <__start_il2cpp+0xe4ab0>
 2bace50: aa1303e0     	mov	x0, x19
 2bace54: aa1403e1     	mov	x1, x20
 2bace58: 97fffeb8     	bl	0x2bac938 <__start_il2cpp+0xe4324>
 2bace5c: aa1303e0     	mov	x0, x19
 2bace60: 97fffead     	bl	0x2bac914 <__start_il2cpp+0xe4300>
 2bace64: f94002e8     	ldr	x8, [x23]
 2bace68: f90013e0     	str	x0, [sp, #0x20]
 2bace6c: b940e509     	ldr	w9, [x8, #0xe4]
 2bace70: 35000069     	cbnz	w9, 0x2bace7c <__start_il2cpp+0xe4868>
 2bace74: aa0803e0     	mov	x0, x8
 2bace78: 97f8a839     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bace7c: d2e80bc8     	mov	x8, #0x405e000000000000 // =4638144666238189568
 2bace80: 910083e0     	add	x0, sp, #0x20
 2bace84: aa1f03e1     	mov	x1, xzr
 2bace88: 9e670100     	fmov	d0, x8
 2bace8c: 9494f76a     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2bace90: aa0003e1     	mov	x1, x0
 2bace94: aa1303e0     	mov	x0, x19
 2bace98: 97fffeba     	bl	0x2bac980 <__start_il2cpp+0xe436c>
 2bace9c: aa1303e0     	mov	x0, x19
 2bacea0: 940000a9     	bl	0x2bad144 <__start_il2cpp+0xe4b30>
 2bacea4: aa0003e1     	mov	x1, x0
 2bacea8: f8050e60     	str	x0, [x19, #0x50]!
 2baceac: aa1303e0     	mov	x0, x19
 2baceb0: 97f8a7b7     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2baceb4: f85c8260     	ldur	x0, [x19, #-0x38]
 2baceb8: b40011c0     	cbz	x0, 0x2bad0f0 <__start_il2cpp+0xe4adc>
 2bacebc: f9400261     	ldr	x1, [x19]
 2bacec0: aa1f03e2     	mov	x2, xzr
 2bacec4: 94be68e8     	bl	0x5b47264 <__start_il2cpp+0x307ec50>
 2bacec8: 14000083     	b	0x2bad0d4 <__start_il2cpp+0xe4ac0>
 2bacecc: aa1f03e0     	mov	x0, xzr
 2baced0: 94002392     	bl	0x2bb5d18 <__start_il2cpp+0xed704>
 2baced4: 7101901f     	cmp	w0, #0x64
 2baced8: 54000e6a     	b.ge	0x2bad0a4 <__start_il2cpp+0xe4a90>
 2bacedc: aa1303e0     	mov	x0, x19
 2bacee0: 97fffe9f     	bl	0x2bac95c <__start_il2cpp+0xe4348>
 2bacee4: f94002e8     	ldr	x8, [x23]
 2bacee8: aa0003f5     	mov	x21, x0
 2baceec: b940e509     	ldr	w9, [x8, #0xe4]
 2bacef0: 35000069     	cbnz	w9, 0x2bacefc <__start_il2cpp+0xe48e8>
 2bacef4: aa0803e0     	mov	x0, x8
 2bacef8: 97f8a819     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacefc: aa1403e0     	mov	x0, x20
 2bacf00: aa1503e1     	mov	x1, x21
 2bacf04: aa1f03e2     	mov	x2, xzr
 2bacf08: 949502fe     	bl	0x50edb00 <__start_il2cpp+0x26254ec>
 2bacf0c: 3607fc80     	tbz	w0, #0x0, 0x2bace9c <__start_il2cpp+0xe4888>
 2bacf10: aa1303e0     	mov	x0, x19
 2bacf14: 97fffe92     	bl	0x2bac95c <__start_il2cpp+0xe4348>
 2bacf18: f94002e8     	ldr	x8, [x23]
 2bacf1c: aa0003f5     	mov	x21, x0
 2bacf20: b940e509     	ldr	w9, [x8, #0xe4]
 2bacf24: 35000069     	cbnz	w9, 0x2bacf30 <__start_il2cpp+0xe491c>
 2bacf28: aa0803e0     	mov	x0, x8
 2bacf2c: 97f8a80c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacf30: aa1403e0     	mov	x0, x20
 2bacf34: aa1503e1     	mov	x1, x21
 2bacf38: aa1f03e2     	mov	x2, xzr
 2bacf3c: 94950252     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2bacf40: 9001ba48     	adrp	x8, 0x62f4000
 2bacf44: f940b108     	ldr	x8, [x8, #0x160]
 2bacf48: f9000fe0     	str	x0, [sp, #0x18]
 2bacf4c: f9400108     	ldr	x8, [x8]
 2bacf50: b940e509     	ldr	w9, [x8, #0xe4]
 2bacf54: 35000069     	cbnz	w9, 0x2bacf60 <__start_il2cpp+0xe494c>
 2bacf58: aa0803e0     	mov	x0, x8
 2bacf5c: 97f8a800     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bacf60: 910063e0     	add	x0, sp, #0x18
 2bacf64: aa1f03e1     	mov	x1, xzr
 2bacf68: 9495dc04     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2bacf6c: 1e780008     	fcvtzs	w8, d0
 2bacf70: 52911129     	mov	w9, #0x8889             // =34953
 2bacf74: aa1f03e0     	mov	x0, xzr
 2bacf78: 72b11109     	movk	w9, #0x8888, lsl #16
 2bacf7c: 1e604008     	fmov	d8, d0
 2bacf80: 9b297d09     	smull	x9, w8, w9
 2bacf84: d360fd29     	lsr	x9, x9, #32
 2bacf88: 0b080128     	add	w8, w9, w8
 2bacf8c: 13067d09     	asr	w9, w8, #6
 2bacf90: 0b487d34     	add	w20, w9, w8, lsr #31
 2bacf94: 94002361     	bl	0x2bb5d18 <__start_il2cpp+0xed704>
 2bacf98: d2effe08     	mov	x8, #0x7ff0000000000000 // =9218868437227405312
 2bacf9c: aa1f03e1     	mov	x1, xzr
 2bacfa0: 9e670100     	fmov	d0, x8
 2bacfa4: 529dde08     	mov	w8, #0xeef0             // =61168
 2bacfa8: 72bfddc8     	movk	w8, #0xfeee, lsl #16
 2bacfac: 1e602100     	fcmp	d8, d0
 2bacfb0: 1a940508     	csinc	w8, w8, w20, eq
 2bacfb4: 0b000115     	add	w21, w8, w0
 2bacfb8: 52800c88     	mov	w8, #0x64               // =100
 2bacfbc: 710192bf     	cmp	w21, #0x64
 2bacfc0: 1a88b2b4     	csel	w20, w21, w8, lt
 2bacfc4: 2a1403e0     	mov	w0, w20
 2bacfc8: 940026e4     	bl	0x2bb6b58 <__start_il2cpp+0xee544>
 2bacfcc: 9001ba28     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bacfd0: 910023e1     	add	x1, sp, #0x8
 2bacfd4: f9470d08     	ldr	x8, [x8, #0xe18]
 2bacfd8: b9000bf4     	str	w20, [sp, #0x8]
 2bacfdc: f9402500     	ldr	x0, [x8, #0x48]
 2bacfe0: 97f8a7e1     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2bacfe4: d001ba68     	adrp	x8, 0x62fa000
 2bacfe8: aa0003e1     	mov	x1, x0
 2bacfec: aa1f03e2     	mov	x2, xzr
 2bacff0: f9436508     	ldr	x8, [x8, #0x6c8]
 2bacff4: f9400108     	ldr	x8, [x8]
 2bacff8: aa0803e0     	mov	x0, x8
 2bacffc: 948efddd     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2bad000: b001ba48     	adrp	x8, 0x62f6000
 2bad004: aa0003f4     	mov	x20, x0
 2bad008: f9400d08     	ldr	x8, [x8, #0x18]
 2bad00c: f9400108     	ldr	x8, [x8]
 2bad010: b940e509     	ldr	w9, [x8, #0xe4]
 2bad014: 35000069     	cbnz	w9, 0x2bad020 <__start_il2cpp+0xe4a0c>
 2bad018: aa0803e0     	mov	x0, x8
 2bad01c: 97f8a7d0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad020: b001ba68     	adrp	x8, 0x62fa000
 2bad024: aa1403e1     	mov	x1, x20
 2bad028: aa1f03e2     	mov	x2, xzr
 2bad02c: f9436108     	ldr	x8, [x8, #0x6c0]
 2bad030: f9400100     	ldr	x0, [x8]
 2bad034: 97fe833d     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2bad038: f9401260     	ldr	x0, [x19, #0x20]
 2bad03c: b40005a0     	cbz	x0, 0x2bad0f0 <__start_il2cpp+0xe4adc>
 2bad040: 2a1f03e1     	mov	w1, wzr
 2bad044: aa1f03e2     	mov	x2, xzr
 2bad048: 9404916d     	bl	0x2cd15fc <__start_il2cpp+0x208fe8>
 2bad04c: 710192bf     	cmp	w21, #0x64
 2bad050: 540002aa     	b.ge	0x2bad0a4 <__start_il2cpp+0xe4a90>
 2bad054: d2e80bc8     	mov	x8, #0x405e000000000000 // =4638144666238189568
 2bad058: 1e604100     	fmov	d0, d8
 2bad05c: 9e670101     	fmov	d1, x8
 2bad060: 94cde5e0     	bl	0x5f267e0 <fmod@plt>
 2bad064: f94002e0     	ldr	x0, [x23]
 2bad068: 1e604008     	fmov	d8, d0
 2bad06c: b940e408     	ldr	w8, [x0, #0xe4]
 2bad070: 35000048     	cbnz	w8, 0x2bad078 <__start_il2cpp+0xe4a64>
 2bad074: 97f8a7ba     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad078: 1e614100     	fneg	d0, d8
 2bad07c: 9100a3e0     	add	x0, sp, #0x28
 2bad080: aa1f03e1     	mov	x1, xzr
 2bad084: 9494f6ec     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2bad088: aa0003e1     	mov	x1, x0
 2bad08c: aa1303e0     	mov	x0, x19
 2bad090: 97fffe2a     	bl	0x2bac938 <__start_il2cpp+0xe4324>
 2bad094: aa1303e0     	mov	x0, x19
 2bad098: 97fffe1f     	bl	0x2bac914 <__start_il2cpp+0xe4300>
 2bad09c: f90013e0     	str	x0, [sp, #0x20]
 2bad0a0: 17ffff77     	b	0x2bace7c <__start_il2cpp+0xe4868>
 2bad0a4: aa1303e0     	mov	x0, x19
 2bad0a8: aa1f03e1     	mov	x1, xzr
 2bad0ac: f90013ff     	str	xzr, [sp, #0x20]
 2bad0b0: 97fffe22     	bl	0x2bac938 <__start_il2cpp+0xe4324>
 2bad0b4: aa1303e0     	mov	x0, x19
 2bad0b8: aa1f03e1     	mov	x1, xzr
 2bad0bc: f90013ff     	str	xzr, [sp, #0x20]
 2bad0c0: 97fffe30     	bl	0x2bac980 <__start_il2cpp+0xe436c>
 2bad0c4: f9401660     	ldr	x0, [x19, #0x28]
 2bad0c8: b4000140     	cbz	x0, 0x2bad0f0 <__start_il2cpp+0xe4adc>
 2bad0cc: aa1f03e1     	mov	x1, xzr
 2bad0d0: 94049305     	bl	0x2cd1ce4 <__start_il2cpp+0x2096d0>
 2bad0d4: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2bad0d8: f9401ffe     	ldr	x30, [sp, #0x38]
 2bad0dc: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2bad0e0: fd401be8     	ldr	d8, [sp, #0x30]
 2bad0e4: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2bad0e8: 9101c3ff     	add	sp, sp, #0x70
 2bad0ec: d65f03c0     	ret
 2bad0f0: 97f8a7e6     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Void TryStartUnlimitedEnergyTimerCoroutine()
# VA 0x2bad0f4 .. 0x2bad144 (next mapped method entry)
 2bad0f4: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2bad0f8: aa0003f3     	mov	x19, x0
 2bad0fc: f9400c00     	ldr	x0, [x0, #0x18]
 2bad100: b4000200     	cbz	x0, 0x2bad140 <__start_il2cpp+0xe4b2c>
 2bad104: 91012261     	add	x1, x19, #0x48
 2bad108: aa1f03e2     	mov	x2, xzr
 2bad10c: 9402470c     	bl	0x2c3ed3c <__start_il2cpp+0x176728>
 2bad110: aa1303e0     	mov	x0, x19
 2bad114: 94000191     	bl	0x2bad758 <__start_il2cpp+0xe5144>
 2bad118: aa0003e1     	mov	x1, x0
 2bad11c: f9002660     	str	x0, [x19, #0x48]
 2bad120: 91012260     	add	x0, x19, #0x48
 2bad124: 97f8a71a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bad128: f9400e60     	ldr	x0, [x19, #0x18]
 2bad12c: b40000a0     	cbz	x0, 0x2bad140 <__start_il2cpp+0xe4b2c>
 2bad130: f8448261     	ldur	x1, [x19, #0x48]
 2bad134: aa1f03e2     	mov	x2, xzr
 2bad138: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2bad13c: 14be684a     	b	0x5b47264 <__start_il2cpp+0x307ec50>
 2bad140: 97f8a7d2     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Collections.IEnumerator UpdateRechargeTime()
# VA 0x2bad144 .. 0x2bad1b0 (next mapped method entry)
 2bad144: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bad148: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bad14c: b001db34     	adrp	x20, 0x6712000
 2bad150: b001ba75     	adrp	x21, 0x62fa000
 2bad154: aa0003f3     	mov	x19, x0
 2bad158: 3964b288     	ldrb	w8, [x20, #0x92c]
 2bad15c: f9436ab5     	ldr	x21, [x21, #0x6d0]
 2bad160: 370000c8     	tbnz	w8, #0x0, 0x2bad178 <__start_il2cpp+0xe4b64>
 2bad164: b001ba60     	adrp	x0, 0x62fa000
 2bad168: f9436800     	ldr	x0, [x0, #0x6d0]
 2bad16c: 97f8a71d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bad170: 52800028     	mov	w8, #0x1                // =1
 2bad174: 3924b288     	strb	w8, [x20, #0x92c]
 2bad178: f94002a0     	ldr	x0, [x21]
 2bad17c: 97f8a7bf     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bad180: aa1f03e1     	mov	x1, xzr
 2bad184: aa0003f4     	mov	x20, x0
 2bad188: 94968a70     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2bad18c: aa1403e0     	mov	x0, x20
 2bad190: aa1303e1     	mov	x1, x19
 2bad194: b900129f     	str	wzr, [x20, #0x10]
 2bad198: f8020c13     	str	x19, [x0, #0x20]!
 2bad19c: 97f8a6fc     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bad1a0: aa1403e0     	mov	x0, x20
 2bad1a4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bad1a8: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bad1ac: d65f03c0     	ret

# EnergyController :: System.Int32 GetRechargeRemainingTime()
# VA 0x2bad1d8 .. 0x2bad2a4 (next mapped method entry)
 2bad1d8: d100c3ff     	sub	sp, sp, #0x30
 2bad1dc: a90157fe     	stp	x30, x21, [sp, #0x10]
 2bad1e0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bad1e4: b001db35     	adrp	x21, 0x6712000
 2bad1e8: b001ba34     	adrp	x20, 0x62f2000
 2bad1ec: aa0003f3     	mov	x19, x0
 2bad1f0: 3964b6a8     	ldrb	w8, [x21, #0x92d]
 2bad1f4: f940ae94     	ldr	x20, [x20, #0x158]
 2bad1f8: 37000128     	tbnz	w8, #0x0, 0x2bad21c <__start_il2cpp+0xe4c08>
 2bad1fc: b001ba20     	adrp	x0, 0x62f2000
 2bad200: f940ac00     	ldr	x0, [x0, #0x158]
 2bad204: 97f8a6f7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bad208: f001ba20     	adrp	x0, 0x62f4000
 2bad20c: f940b000     	ldr	x0, [x0, #0x160]
 2bad210: 97f8a6f4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bad214: 52800028     	mov	w8, #0x1                // =1
 2bad218: 3924b6a8     	strb	w8, [x21, #0x92d]
 2bad21c: f9400280     	ldr	x0, [x20]
 2bad220: f001ba35     	adrp	x21, 0x62f4000
 2bad224: b940e408     	ldr	w8, [x0, #0xe4]
 2bad228: f940b2b5     	ldr	x21, [x21, #0x160]
 2bad22c: f90007ff     	str	xzr, [sp, #0x8]
 2bad230: 35000048     	cbnz	w8, 0x2bad238 <__start_il2cpp+0xe4c24>
 2bad234: 97f8a74a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad238: aa1f03e0     	mov	x0, xzr
 2bad23c: 9494fad2     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bad240: aa0003f4     	mov	x20, x0
 2bad244: aa1303e0     	mov	x0, x19
 2bad248: 97fffdc5     	bl	0x2bac95c <__start_il2cpp+0xe4348>
 2bad24c: aa1403e1     	mov	x1, x20
 2bad250: aa1f03e2     	mov	x2, xzr
 2bad254: 9495018c     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2bad258: f94002a8     	ldr	x8, [x21]
 2bad25c: f90007e0     	str	x0, [sp, #0x8]
 2bad260: b940e509     	ldr	w9, [x8, #0xe4]
 2bad264: 35000069     	cbnz	w9, 0x2bad270 <__start_il2cpp+0xe4c5c>
 2bad268: aa0803e0     	mov	x0, x8
 2bad26c: 97f8a73c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad270: 910023e0     	add	x0, sp, #0x8
 2bad274: aa1f03e1     	mov	x1, xzr
 2bad278: 9495db40     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2bad27c: d2effe08     	mov	x8, #0x7ff0000000000000 // =9218868437227405312
 2bad280: 1e780009     	fcvtzs	w9, d0
 2bad284: 9e670101     	fmov	d1, x8
 2bad288: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bad28c: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2bad290: 52b00008     	mov	w8, #-0x80000000        // =-2147483648
 2bad294: 1e612000     	fcmp	d0, d1
 2bad298: 1a890100     	csel	w0, w8, w9, eq
 2bad29c: 9100c3ff     	add	sp, sp, #0x30
 2bad2a0: d65f03c0     	ret

# EnergyController :: System.Int32 GetUnlimitedEnergyRemainingTime()
# VA 0x2bad2a4 .. 0x2bad370 (next mapped method entry)
 2bad2a4: d100c3ff     	sub	sp, sp, #0x30
 2bad2a8: a90157fe     	stp	x30, x21, [sp, #0x10]
 2bad2ac: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bad2b0: b001db35     	adrp	x21, 0x6712000
 2bad2b4: b001ba34     	adrp	x20, 0x62f2000
 2bad2b8: aa0003f3     	mov	x19, x0
 2bad2bc: 3964baa8     	ldrb	w8, [x21, #0x92e]
 2bad2c0: f940ae94     	ldr	x20, [x20, #0x158]
 2bad2c4: 37000128     	tbnz	w8, #0x0, 0x2bad2e8 <__start_il2cpp+0xe4cd4>
 2bad2c8: b001ba20     	adrp	x0, 0x62f2000
 2bad2cc: f940ac00     	ldr	x0, [x0, #0x158]
 2bad2d0: 97f8a6c4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bad2d4: f001ba20     	adrp	x0, 0x62f4000
 2bad2d8: f940b000     	ldr	x0, [x0, #0x160]
 2bad2dc: 97f8a6c1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bad2e0: 52800028     	mov	w8, #0x1                // =1
 2bad2e4: 3924baa8     	strb	w8, [x21, #0x92e]
 2bad2e8: f9400280     	ldr	x0, [x20]
 2bad2ec: f001ba35     	adrp	x21, 0x62f4000
 2bad2f0: b940e408     	ldr	w8, [x0, #0xe4]
 2bad2f4: f940b2b5     	ldr	x21, [x21, #0x160]
 2bad2f8: f90007ff     	str	xzr, [sp, #0x8]
 2bad2fc: 35000048     	cbnz	w8, 0x2bad304 <__start_il2cpp+0xe4cf0>
 2bad300: 97f8a717     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad304: aa1f03e0     	mov	x0, xzr
 2bad308: 9494fa9f     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bad30c: aa0003f4     	mov	x20, x0
 2bad310: aa1303e0     	mov	x0, x19
 2bad314: 97fffd6e     	bl	0x2bac8cc <__start_il2cpp+0xe42b8>
 2bad318: aa1403e1     	mov	x1, x20
 2bad31c: aa1f03e2     	mov	x2, xzr
 2bad320: 94950159     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2bad324: f94002a8     	ldr	x8, [x21]
 2bad328: f90007e0     	str	x0, [sp, #0x8]
 2bad32c: b940e509     	ldr	w9, [x8, #0xe4]
 2bad330: 35000069     	cbnz	w9, 0x2bad33c <__start_il2cpp+0xe4d28>
 2bad334: aa0803e0     	mov	x0, x8
 2bad338: 97f8a709     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad33c: 910023e0     	add	x0, sp, #0x8
 2bad340: aa1f03e1     	mov	x1, xzr
 2bad344: 9495db0d     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2bad348: d2effe08     	mov	x8, #0x7ff0000000000000 // =9218868437227405312
 2bad34c: 1e780009     	fcvtzs	w9, d0
 2bad350: 9e670101     	fmov	d1, x8
 2bad354: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bad358: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2bad35c: 52b00008     	mov	w8, #-0x80000000        // =-2147483648
 2bad360: 1e612000     	fcmp	d0, d1
 2bad364: 1a890100     	csel	w0, w8, w9, eq
 2bad368: 9100c3ff     	add	sp, sp, #0x30
 2bad36c: d65f03c0     	ret

# EnergyController :: System.Void OnRechargeEnded()
# VA 0x2bad370 .. 0x2bad594 (next mapped method entry)
 2bad370: d10143ff     	sub	sp, sp, #0x50
 2bad374: fd0013e8     	str	d8, [sp, #0x20]
 2bad378: f90017fe     	str	x30, [sp, #0x28]
 2bad37c: a90357f6     	stp	x22, x21, [sp, #0x30]
 2bad380: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2bad384: b001db34     	adrp	x20, 0x6712000
 2bad388: aa0003f3     	mov	x19, x0
 2bad38c: 3964be88     	ldrb	w8, [x20, #0x92f]
 2bad390: 37000128     	tbnz	w8, #0x0, 0x2bad3b4 <__start_il2cpp+0xe4da0>
 2bad394: b001ba20     	adrp	x0, 0x62f2000
 2bad398: f940ac00     	ldr	x0, [x0, #0x158]
 2bad39c: 97f8a691     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bad3a0: f001ba20     	adrp	x0, 0x62f4000
 2bad3a4: f940b000     	ldr	x0, [x0, #0x160]
 2bad3a8: 97f8a68e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bad3ac: 52800028     	mov	w8, #0x1                // =1
 2bad3b0: 3924be88     	strb	w8, [x20, #0x92f]
 2bad3b4: 39410268     	ldrb	w8, [x19, #0x40]
 2bad3b8: a9017fff     	stp	xzr, xzr, [sp, #0x10]
 2bad3bc: f90007ff     	str	xzr, [sp, #0x8]
 2bad3c0: 34000dc8     	cbz	w8, 0x2bad578 <__start_il2cpp+0xe4f64>
 2bad3c4: b001ba35     	adrp	x21, 0x62f2000
 2bad3c8: f001ba36     	adrp	x22, 0x62f4000
 2bad3cc: f940aeb5     	ldr	x21, [x21, #0x158]
 2bad3d0: f94002a0     	ldr	x0, [x21]
 2bad3d4: b940e408     	ldr	w8, [x0, #0xe4]
 2bad3d8: f940b2d6     	ldr	x22, [x22, #0x160]
 2bad3dc: 35000048     	cbnz	w8, 0x2bad3e4 <__start_il2cpp+0xe4dd0>
 2bad3e0: 97f8a6df     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad3e4: aa1f03e0     	mov	x0, xzr
 2bad3e8: 9494fa67     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bad3ec: aa0003f4     	mov	x20, x0
 2bad3f0: f9000fe0     	str	x0, [sp, #0x18]
 2bad3f4: aa1303e0     	mov	x0, x19
 2bad3f8: 97fffd59     	bl	0x2bac95c <__start_il2cpp+0xe4348>
 2bad3fc: aa0003e1     	mov	x1, x0
 2bad400: aa1403e0     	mov	x0, x20
 2bad404: aa1f03e2     	mov	x2, xzr
 2bad408: 9495011f     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2bad40c: f94002c8     	ldr	x8, [x22]
 2bad410: f9000be0     	str	x0, [sp, #0x10]
 2bad414: b940e509     	ldr	w9, [x8, #0xe4]
 2bad418: 35000069     	cbnz	w9, 0x2bad424 <__start_il2cpp+0xe4e10>
 2bad41c: aa0803e0     	mov	x0, x8
 2bad420: 97f8a6cf     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad424: 910043e0     	add	x0, sp, #0x10
 2bad428: aa1f03e1     	mov	x1, xzr
 2bad42c: 9495dad3     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2bad430: 1e780008     	fcvtzs	w8, d0
 2bad434: 52911129     	mov	w9, #0x8889             // =34953
 2bad438: aa1f03e0     	mov	x0, xzr
 2bad43c: 72b11109     	movk	w9, #0x8888, lsl #16
 2bad440: 1e604008     	fmov	d8, d0
 2bad444: 9b297d09     	smull	x9, w8, w9
 2bad448: d360fd29     	lsr	x9, x9, #32
 2bad44c: 0b080128     	add	w8, w9, w8
 2bad450: 13067d09     	asr	w9, w8, #6
 2bad454: 0b487d34     	add	w20, w9, w8, lsr #31
 2bad458: 94002230     	bl	0x2bb5d18 <__start_il2cpp+0xed704>
 2bad45c: d2effe08     	mov	x8, #0x7ff0000000000000 // =9218868437227405312
 2bad460: aa1f03e1     	mov	x1, xzr
 2bad464: 9e670100     	fmov	d0, x8
 2bad468: 529dde08     	mov	w8, #0xeef0             // =61168
 2bad46c: 72bfddc8     	movk	w8, #0xfeee, lsl #16
 2bad470: 1e602100     	fcmp	d8, d0
 2bad474: 1a940508     	csinc	w8, w8, w20, eq
 2bad478: 0b000114     	add	w20, w8, w0
 2bad47c: 52800c88     	mov	w8, #0x64               // =100
 2bad480: 7101929f     	cmp	w20, #0x64
 2bad484: 1a88b280     	csel	w0, w20, w8, lt
 2bad488: 940025b4     	bl	0x2bb6b58 <__start_il2cpp+0xee544>
 2bad48c: f9401260     	ldr	x0, [x19, #0x20]
 2bad490: b4000800     	cbz	x0, 0x2bad590 <__start_il2cpp+0xe4f7c>
 2bad494: 2a1f03e1     	mov	w1, wzr
 2bad498: aa1f03e2     	mov	x2, xzr
 2bad49c: 94049058     	bl	0x2cd15fc <__start_il2cpp+0x208fe8>
 2bad4a0: 71018e9f     	cmp	w20, #0x63
 2bad4a4: 540001ed     	b.le	0x2bad4e0 <__start_il2cpp+0xe4ecc>
 2bad4a8: f9401660     	ldr	x0, [x19, #0x28]
 2bad4ac: 3901027f     	strb	wzr, [x19, #0x40]
 2bad4b0: b4000700     	cbz	x0, 0x2bad590 <__start_il2cpp+0xe4f7c>
 2bad4b4: aa1f03e1     	mov	x1, xzr
 2bad4b8: 9404920b     	bl	0x2cd1ce4 <__start_il2cpp+0x2096d0>
 2bad4bc: aa1303e0     	mov	x0, x19
 2bad4c0: aa1f03e1     	mov	x1, xzr
 2bad4c4: f90007ff     	str	xzr, [sp, #0x8]
 2bad4c8: 97fffd1c     	bl	0x2bac938 <__start_il2cpp+0xe4324>
 2bad4cc: aa1303e0     	mov	x0, x19
 2bad4d0: aa1f03e1     	mov	x1, xzr
 2bad4d4: f90007ff     	str	xzr, [sp, #0x8]
 2bad4d8: 97fffd2a     	bl	0x2bac980 <__start_il2cpp+0xe436c>
 2bad4dc: 14000027     	b	0x2bad578 <__start_il2cpp+0xe4f64>
 2bad4e0: d2e80bc8     	mov	x8, #0x405e000000000000 // =4638144666238189568
 2bad4e4: 1e604100     	fmov	d0, d8
 2bad4e8: 9e670101     	fmov	d1, x8
 2bad4ec: 94cde4bd     	bl	0x5f267e0 <fmod@plt>
 2bad4f0: f94002a0     	ldr	x0, [x21]
 2bad4f4: 1e604008     	fmov	d8, d0
 2bad4f8: b940e408     	ldr	w8, [x0, #0xe4]
 2bad4fc: 35000048     	cbnz	w8, 0x2bad504 <__start_il2cpp+0xe4ef0>
 2bad500: 97f8a697     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad504: 1e614100     	fneg	d0, d8
 2bad508: 910063e0     	add	x0, sp, #0x18
 2bad50c: aa1f03e1     	mov	x1, xzr
 2bad510: 9494f5c9     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2bad514: aa0003e1     	mov	x1, x0
 2bad518: aa1303e0     	mov	x0, x19
 2bad51c: 97fffd07     	bl	0x2bac938 <__start_il2cpp+0xe4324>
 2bad520: aa1303e0     	mov	x0, x19
 2bad524: 97fffcfc     	bl	0x2bac914 <__start_il2cpp+0xe4300>
 2bad528: d2e80bc8     	mov	x8, #0x405e000000000000 // =4638144666238189568
 2bad52c: f90007e0     	str	x0, [sp, #0x8]
 2bad530: 910023e0     	add	x0, sp, #0x8
 2bad534: 9e670100     	fmov	d0, x8
 2bad538: aa1f03e1     	mov	x1, xzr
 2bad53c: 9494f5be     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2bad540: aa0003e1     	mov	x1, x0
 2bad544: aa1303e0     	mov	x0, x19
 2bad548: 97fffd0e     	bl	0x2bac980 <__start_il2cpp+0xe436c>
 2bad54c: aa1303e0     	mov	x0, x19
 2bad550: 97fffefd     	bl	0x2bad144 <__start_il2cpp+0xe4b30>
 2bad554: aa0003e1     	mov	x1, x0
 2bad558: f8050e60     	str	x0, [x19, #0x50]!
 2bad55c: aa1303e0     	mov	x0, x19
 2bad560: 97f8a60b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bad564: f85c8260     	ldur	x0, [x19, #-0x38]
 2bad568: b4000140     	cbz	x0, 0x2bad590 <__start_il2cpp+0xe4f7c>
 2bad56c: f9400261     	ldr	x1, [x19]
 2bad570: aa1f03e2     	mov	x2, xzr
 2bad574: 94be673c     	bl	0x5b47264 <__start_il2cpp+0x307ec50>
 2bad578: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2bad57c: f94017fe     	ldr	x30, [sp, #0x28]
 2bad580: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2bad584: fd4013e8     	ldr	d8, [sp, #0x20]
 2bad588: 910143ff     	add	sp, sp, #0x50
 2bad58c: d65f03c0     	ret
 2bad590: 97f8a6be     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Void AddSecondsToUnlimited(System.Int32 seconds)
# VA 0x2bad594 .. 0x2bad690 (next mapped method entry)
 2bad594: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bad598: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bad59c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bad5a0: b001db35     	adrp	x21, 0x6712000
 2bad5a4: b001ba36     	adrp	x22, 0x62f2000
 2bad5a8: 2a0103f4     	mov	w20, w1
 2bad5ac: 3964c2a8     	ldrb	w8, [x21, #0x930]
 2bad5b0: f940aed6     	ldr	x22, [x22, #0x158]
 2bad5b4: aa0003f3     	mov	x19, x0
 2bad5b8: 370000c8     	tbnz	w8, #0x0, 0x2bad5d0 <__start_il2cpp+0xe4fbc>
 2bad5bc: b001ba20     	adrp	x0, 0x62f2000
 2bad5c0: f940ac00     	ldr	x0, [x0, #0x158]
 2bad5c4: 97f8a607     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bad5c8: 52800028     	mov	w8, #0x1                // =1
 2bad5cc: 3924c2a8     	strb	w8, [x21, #0x930]
 2bad5d0: aa1303e0     	mov	x0, x19
 2bad5d4: f90007ff     	str	xzr, [sp, #0x8]
 2bad5d8: 97fffcbd     	bl	0x2bac8cc <__start_il2cpp+0xe42b8>
 2bad5dc: f94002c8     	ldr	x8, [x22]
 2bad5e0: aa0003f5     	mov	x21, x0
 2bad5e4: b940e509     	ldr	w9, [x8, #0xe4]
 2bad5e8: 35000069     	cbnz	w9, 0x2bad5f4 <__start_il2cpp+0xe4fe0>
 2bad5ec: aa0803e0     	mov	x0, x8
 2bad5f0: 97f8a65b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad5f4: aa1f03e0     	mov	x0, xzr
 2bad5f8: 9494f9e3     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bad5fc: aa0003e1     	mov	x1, x0
 2bad600: aa1503e0     	mov	x0, x21
 2bad604: aa1f03e2     	mov	x2, xzr
 2bad608: 949500ed     	bl	0x50ed9bc <__start_il2cpp+0x26253a8>
 2bad60c: 360001c0     	tbz	w0, #0x0, 0x2bad644 <__start_il2cpp+0xe5030>
 2bad610: f94002c0     	ldr	x0, [x22]
 2bad614: b940e408     	ldr	w8, [x0, #0xe4]
 2bad618: 35000048     	cbnz	w8, 0x2bad620 <__start_il2cpp+0xe500c>
 2bad61c: 97f8a650     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad620: aa1f03e0     	mov	x0, xzr
 2bad624: 9494f9d8     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bad628: aa0003e1     	mov	x1, x0
 2bad62c: aa1303e0     	mov	x0, x19
 2bad630: 97fffc9e     	bl	0x2bac8a8 <__start_il2cpp+0xe4294>
 2bad634: aa1303e0     	mov	x0, x19
 2bad638: 97fffc93     	bl	0x2bac884 <__start_il2cpp+0xe4270>
 2bad63c: f90007e0     	str	x0, [sp, #0x8]
 2bad640: 14000009     	b	0x2bad664 <__start_il2cpp+0xe5050>
 2bad644: aa1303e0     	mov	x0, x19
 2bad648: 97fffca1     	bl	0x2bac8cc <__start_il2cpp+0xe42b8>
 2bad64c: f94002c8     	ldr	x8, [x22]
 2bad650: f90007e0     	str	x0, [sp, #0x8]
 2bad654: b940e509     	ldr	w9, [x8, #0xe4]
 2bad658: 35000069     	cbnz	w9, 0x2bad664 <__start_il2cpp+0xe5050>
 2bad65c: aa0803e0     	mov	x0, x8
 2bad660: 97f8a63f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad664: 1e620280     	scvtf	d0, w20
 2bad668: 910023e0     	add	x0, sp, #0x8
 2bad66c: aa1f03e1     	mov	x1, xzr
 2bad670: 9494f571     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2bad674: aa0003e1     	mov	x1, x0
 2bad678: aa1303e0     	mov	x0, x19
 2bad67c: 97fffc9d     	bl	0x2bac8f0 <__start_il2cpp+0xe42dc>
 2bad680: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bad684: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bad688: f84307fe     	ldr	x30, [sp], #0x30
 2bad68c: d65f03c0     	ret

# EnergyController :: System.Void StartUnlimitedEnergyWithoutUpdateView(System.Int32 seconds, System.String trigger)
# VA 0x2bad690 .. 0x2bad71c (next mapped method entry)
 2bad690: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bad694: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bad698: 39404008     	ldrb	w8, [x0, #0x10]
 2bad69c: aa0203f3     	mov	x19, x2
 2bad6a0: aa0003f5     	mov	x21, x0
 2bad6a4: 2a0103f4     	mov	w20, w1
 2bad6a8: 340000e8     	cbz	w8, 0x2bad6c4 <__start_il2cpp+0xe50b0>
 2bad6ac: f9400ea0     	ldr	x0, [x21, #0x18]
 2bad6b0: b4000340     	cbz	x0, 0x2bad718 <__start_il2cpp+0xe5104>
 2bad6b4: 910122a1     	add	x1, x21, #0x48
 2bad6b8: aa1f03e2     	mov	x2, xzr
 2bad6bc: 940245a0     	bl	0x2c3ed3c <__start_il2cpp+0x176728>
 2bad6c0: 1400000a     	b	0x2bad6e8 <__start_il2cpp+0xe50d4>
 2bad6c4: 394102a8     	ldrb	w8, [x21, #0x40]
 2bad6c8: 34000108     	cbz	w8, 0x2bad6e8 <__start_il2cpp+0xe50d4>
 2bad6cc: aa1503e0     	mov	x0, x21
 2bad6d0: aa1f03e1     	mov	x1, xzr
 2bad6d4: 390102bf     	strb	wzr, [x21, #0x40]
 2bad6d8: 97fffc98     	bl	0x2bac938 <__start_il2cpp+0xe4324>
 2bad6dc: aa1503e0     	mov	x0, x21
 2bad6e0: aa1f03e1     	mov	x1, xzr
 2bad6e4: 97fffca7     	bl	0x2bac980 <__start_il2cpp+0xe436c>
 2bad6e8: aa1503e0     	mov	x0, x21
 2bad6ec: 2a1403e1     	mov	w1, w20
 2bad6f0: 97ffffa9     	bl	0x2bad594 <__start_il2cpp+0xe4f80>
 2bad6f4: 2a1403e0     	mov	w0, w20
 2bad6f8: aa1303e1     	mov	x1, x19
 2bad6fc: aa1f03e2     	mov	x2, xzr
 2bad700: 94069f75     	bl	0x2d554d4 <__start_il2cpp+0x28cec0>
 2bad704: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bad708: 52800020     	mov	w0, #0x1                // =1
 2bad70c: aa1f03e1     	mov	x1, xzr
 2bad710: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bad714: 1406aa38     	b	0x2d57ff4 <__start_il2cpp+0x28f9e0>
 2bad718: 97f8a65c     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Void UpdateUnlimitedEnergyView()
# VA 0x2bad71c .. 0x2bad758 (next mapped method entry)
 2bad71c: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2bad720: 39404008     	ldrb	w8, [x0, #0x10]
 2bad724: aa0003f3     	mov	x19, x0
 2bad728: 35000108     	cbnz	w8, 0x2bad748 <__start_il2cpp+0xe5134>
 2bad72c: 39410268     	ldrb	w8, [x19, #0x40]
 2bad730: 340000c8     	cbz	w8, 0x2bad748 <__start_il2cpp+0xe5134>
 2bad734: f9400e60     	ldr	x0, [x19, #0x18]
 2bad738: b40000e0     	cbz	x0, 0x2bad754 <__start_il2cpp+0xe5140>
 2bad73c: f9402a61     	ldr	x1, [x19, #0x50]
 2bad740: aa1f03e2     	mov	x2, xzr
 2bad744: 94be6714     	bl	0x5b47394 <__start_il2cpp+0x307ed80>
 2bad748: aa1303e0     	mov	x0, x19
 2bad74c: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2bad750: 17fffe69     	b	0x2bad0f4 <__start_il2cpp+0xe4ae0>
 2bad754: 97f8a64d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Collections.IEnumerator UpdateUnlimitedEnergyTime()
# VA 0x2bad758 .. 0x2bad7c4 (next mapped method entry)
 2bad758: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bad75c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bad760: b001db34     	adrp	x20, 0x6712000
 2bad764: b001ba75     	adrp	x21, 0x62fa000
 2bad768: aa0003f3     	mov	x19, x0
 2bad76c: 3964c688     	ldrb	w8, [x20, #0x931]
 2bad770: f9436eb5     	ldr	x21, [x21, #0x6d8]
 2bad774: 370000c8     	tbnz	w8, #0x0, 0x2bad78c <__start_il2cpp+0xe5178>
 2bad778: b001ba60     	adrp	x0, 0x62fa000
 2bad77c: f9436c00     	ldr	x0, [x0, #0x6d8]
 2bad780: 97f8a598     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bad784: 52800028     	mov	w8, #0x1                // =1
 2bad788: 3924c688     	strb	w8, [x20, #0x931]
 2bad78c: f94002a0     	ldr	x0, [x21]
 2bad790: 97f8a63a     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bad794: aa1f03e1     	mov	x1, xzr
 2bad798: aa0003f4     	mov	x20, x0
 2bad79c: 949688eb     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2bad7a0: aa1403e0     	mov	x0, x20
 2bad7a4: aa1303e1     	mov	x1, x19
 2bad7a8: b900129f     	str	wzr, [x20, #0x10]
 2bad7ac: f8020c13     	str	x19, [x0, #0x20]!
 2bad7b0: 97f8a577     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bad7b4: aa1403e0     	mov	x0, x20
 2bad7b8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bad7bc: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bad7c0: d65f03c0     	ret

# EnergyController :: System.Void StartUnlimitedEnergy(System.Int32 seconds, System.String trigger)
# VA 0x2bad7c4 .. 0x2bad854 (next mapped method entry)
 2bad7c4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bad7c8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bad7cc: 39404008     	ldrb	w8, [x0, #0x10]
 2bad7d0: aa0203f3     	mov	x19, x2
 2bad7d4: aa0003f5     	mov	x21, x0
 2bad7d8: 2a0103f4     	mov	w20, w1
 2bad7dc: 350001e8     	cbnz	w8, 0x2bad818 <__start_il2cpp+0xe5204>
 2bad7e0: 394102a8     	ldrb	w8, [x21, #0x40]
 2bad7e4: 340001a8     	cbz	w8, 0x2bad818 <__start_il2cpp+0xe5204>
 2bad7e8: f9400ea0     	ldr	x0, [x21, #0x18]
 2bad7ec: b4000320     	cbz	x0, 0x2bad850 <__start_il2cpp+0xe523c>
 2bad7f0: f9402aa1     	ldr	x1, [x21, #0x50]
 2bad7f4: aa1f03e2     	mov	x2, xzr
 2bad7f8: 94be66e7     	bl	0x5b47394 <__start_il2cpp+0x307ed80>
 2bad7fc: aa1503e0     	mov	x0, x21
 2bad800: aa1f03e1     	mov	x1, xzr
 2bad804: 390102bf     	strb	wzr, [x21, #0x40]
 2bad808: 97fffc4c     	bl	0x2bac938 <__start_il2cpp+0xe4324>
 2bad80c: aa1503e0     	mov	x0, x21
 2bad810: aa1f03e1     	mov	x1, xzr
 2bad814: 97fffc5b     	bl	0x2bac980 <__start_il2cpp+0xe436c>
 2bad818: aa1503e0     	mov	x0, x21
 2bad81c: 2a1403e1     	mov	w1, w20
 2bad820: 97ffff5d     	bl	0x2bad594 <__start_il2cpp+0xe4f80>
 2bad824: aa1503e0     	mov	x0, x21
 2bad828: 97fffe33     	bl	0x2bad0f4 <__start_il2cpp+0xe4ae0>
 2bad82c: 2a1403e0     	mov	w0, w20
 2bad830: aa1303e1     	mov	x1, x19
 2bad834: aa1f03e2     	mov	x2, xzr
 2bad838: 94069f27     	bl	0x2d554d4 <__start_il2cpp+0x28cec0>
 2bad83c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bad840: 52800020     	mov	w0, #0x1                // =1
 2bad844: aa1f03e1     	mov	x1, xzr
 2bad848: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bad84c: 1406a9ea     	b	0x2d57ff4 <__start_il2cpp+0x28f9e0>
 2bad850: 97f8a60e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Void OnUnlimitedEnergyEnded()
# VA 0x2bad87c .. 0x2badc08 (next mapped method entry)
 2bad87c: d10183ff     	sub	sp, sp, #0x60
 2bad880: fd0013e8     	str	d8, [sp, #0x20]
 2bad884: a9035ffe     	stp	x30, x23, [sp, #0x30]
 2bad888: a90457f6     	stp	x22, x21, [sp, #0x40]
 2bad88c: a9054ff4     	stp	x20, x19, [sp, #0x50]
 2bad890: b001db34     	adrp	x20, 0x6712000
 2bad894: aa0003f3     	mov	x19, x0
 2bad898: 3964ca88     	ldrb	w8, [x20, #0x932]
 2bad89c: 37000128     	tbnz	w8, #0x0, 0x2bad8c0 <__start_il2cpp+0xe52ac>
 2bad8a0: b001ba20     	adrp	x0, 0x62f2000
 2bad8a4: f940ac00     	ldr	x0, [x0, #0x158]
 2bad8a8: 97f8a54e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bad8ac: f001ba20     	adrp	x0, 0x62f4000
 2bad8b0: f940b000     	ldr	x0, [x0, #0x160]
 2bad8b4: 97f8a54b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bad8b8: 52800028     	mov	w8, #0x1                // =1
 2bad8bc: 3924ca88     	strb	w8, [x20, #0x932]
 2bad8c0: f9401260     	ldr	x0, [x19, #0x20]
 2bad8c4: f90017ff     	str	xzr, [sp, #0x28]
 2bad8c8: f9000fff     	str	xzr, [sp, #0x18]
 2bad8cc: b90013ff     	str	wzr, [sp, #0x10]
 2bad8d0: b4001360     	cbz	x0, 0x2badb3c <__start_il2cpp+0xe5528>
 2bad8d4: 2a1f03e1     	mov	w1, wzr
 2bad8d8: aa1f03e2     	mov	x2, xzr
 2bad8dc: 94048f48     	bl	0x2cd15fc <__start_il2cpp+0x208fe8>
 2bad8e0: f9401660     	ldr	x0, [x19, #0x28]
 2bad8e4: b40012c0     	cbz	x0, 0x2badb3c <__start_il2cpp+0xe5528>
 2bad8e8: b001ba37     	adrp	x23, 0x62f2000
 2bad8ec: f001ba36     	adrp	x22, 0x62f4000
 2bad8f0: aa1f03e1     	mov	x1, xzr
 2bad8f4: f940aef7     	ldr	x23, [x23, #0x158]
 2bad8f8: f940b2d6     	ldr	x22, [x22, #0x160]
 2bad8fc: 940490fa     	bl	0x2cd1ce4 <__start_il2cpp+0x2096d0>
 2bad900: f94002e0     	ldr	x0, [x23]
 2bad904: 3900427f     	strb	wzr, [x19, #0x10]
 2bad908: b940e408     	ldr	w8, [x0, #0xe4]
 2bad90c: 35000048     	cbnz	w8, 0x2bad914 <__start_il2cpp+0xe5300>
 2bad910: 97f8a593     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad914: aa1f03e0     	mov	x0, xzr
 2bad918: 9494f91b     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bad91c: aa0003f4     	mov	x20, x0
 2bad920: aa1303e0     	mov	x0, x19
 2bad924: 97fffbea     	bl	0x2bac8cc <__start_il2cpp+0xe42b8>
 2bad928: aa0003e1     	mov	x1, x0
 2bad92c: aa1403e0     	mov	x0, x20
 2bad930: aa1f03e2     	mov	x2, xzr
 2bad934: 9494ffd4     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2bad938: f94002c8     	ldr	x8, [x22]
 2bad93c: f90017e0     	str	x0, [sp, #0x28]
 2bad940: b940e509     	ldr	w9, [x8, #0xe4]
 2bad944: 35000069     	cbnz	w9, 0x2bad950 <__start_il2cpp+0xe533c>
 2bad948: aa0803e0     	mov	x0, x8
 2bad94c: 97f8a584     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bad950: 9100a3e0     	add	x0, sp, #0x28
 2bad954: aa1f03e1     	mov	x1, xzr
 2bad958: 9495d988     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2bad95c: 1e604008     	fmov	d8, d0
 2bad960: d2e80bc8     	mov	x8, #0x405e000000000000 // =4638144666238189568
 2bad964: 9e670100     	fmov	d0, x8
 2bad968: 1e602100     	fcmp	d8, d0
 2bad96c: 5400040b     	b.lt	0x2bad9ec <__start_il2cpp+0xe53d8>
 2bad970: aa1f03e0     	mov	x0, xzr
 2bad974: 940020e9     	bl	0x2bb5d18 <__start_il2cpp+0xed704>
 2bad978: 71018c1f     	cmp	w0, #0x63
 2bad97c: 5400038c     	b.gt	0x2bad9ec <__start_il2cpp+0xe53d8>
 2bad980: 1e780108     	fcvtzs	w8, d8
 2bad984: 52911129     	mov	w9, #0x8889             // =34953
 2bad988: aa1f03e0     	mov	x0, xzr
 2bad98c: 72b11109     	movk	w9, #0x8888, lsl #16
 2bad990: 9b297d09     	smull	x9, w8, w9
 2bad994: d360fd29     	lsr	x9, x9, #32
 2bad998: 0b080128     	add	w8, w9, w8
 2bad99c: 13067d09     	asr	w9, w8, #6
 2bad9a0: 0b487d34     	add	w20, w9, w8, lsr #31
 2bad9a4: 940020dd     	bl	0x2bb5d18 <__start_il2cpp+0xed704>
 2bad9a8: d2effe08     	mov	x8, #0x7ff0000000000000 // =9218868437227405312
 2bad9ac: 52800c89     	mov	w9, #0x64               // =100
 2bad9b0: aa1f03e1     	mov	x1, xzr
 2bad9b4: 9e670100     	fmov	d0, x8
 2bad9b8: 529dde08     	mov	w8, #0xeef0             // =61168
 2bad9bc: 72bfddc8     	movk	w8, #0xfeee, lsl #16
 2bad9c0: 1e602100     	fcmp	d8, d0
 2bad9c4: 1a940508     	csinc	w8, w8, w20, eq
 2bad9c8: 0b080008     	add	w8, w0, w8
 2bad9cc: 7101911f     	cmp	w8, #0x64
 2bad9d0: 1a89b100     	csel	w0, w8, w9, lt
 2bad9d4: 94002461     	bl	0x2bb6b58 <__start_il2cpp+0xee544>
 2bad9d8: f9401260     	ldr	x0, [x19, #0x20]
 2bad9dc: b4000b00     	cbz	x0, 0x2badb3c <__start_il2cpp+0xe5528>
 2bad9e0: 2a1f03e1     	mov	w1, wzr
 2bad9e4: aa1f03e2     	mov	x2, xzr
 2bad9e8: 94048f05     	bl	0x2cd15fc <__start_il2cpp+0x208fe8>
 2bad9ec: aa1f03e0     	mov	x0, xzr
 2bad9f0: 940020ca     	bl	0x2bb5d18 <__start_il2cpp+0xed704>
 2bad9f4: 71018c1f     	cmp	w0, #0x63
 2bad9f8: 5400042c     	b.gt	0x2bada7c <__start_il2cpp+0xe5468>
 2bad9fc: f94002e0     	ldr	x0, [x23]
 2bada00: b940e408     	ldr	w8, [x0, #0xe4]
 2bada04: 35000048     	cbnz	w8, 0x2bada0c <__start_il2cpp+0xe53f8>
 2bada08: 97f8a555     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bada0c: aa1f03e0     	mov	x0, xzr
 2bada10: 9494f8dd     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2bada14: aa0003e1     	mov	x1, x0
 2bada18: aa1303e0     	mov	x0, x19
 2bada1c: 97fffbc7     	bl	0x2bac938 <__start_il2cpp+0xe4324>
 2bada20: aa1303e0     	mov	x0, x19
 2bada24: 97fffbbc     	bl	0x2bac914 <__start_il2cpp+0xe4300>
 2bada28: d2e80bc8     	mov	x8, #0x405e000000000000 // =4638144666238189568
 2bada2c: f9000fe0     	str	x0, [sp, #0x18]
 2bada30: 910063e0     	add	x0, sp, #0x18
 2bada34: 9e670100     	fmov	d0, x8
 2bada38: aa1f03e1     	mov	x1, xzr
 2bada3c: 9494f47e     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2bada40: aa0003e1     	mov	x1, x0
 2bada44: aa1303e0     	mov	x0, x19
 2bada48: 97fffbce     	bl	0x2bac980 <__start_il2cpp+0xe436c>
 2bada4c: aa1303e0     	mov	x0, x19
 2bada50: 97fffdbd     	bl	0x2bad144 <__start_il2cpp+0xe4b30>
 2bada54: aa1303f4     	mov	x20, x19
 2bada58: aa0003e1     	mov	x1, x0
 2bada5c: f8050e80     	str	x0, [x20, #0x50]!
 2bada60: aa1403e0     	mov	x0, x20
 2bada64: 97f8a4ca     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bada68: f85c8280     	ldur	x0, [x20, #-0x38]
 2bada6c: b4000680     	cbz	x0, 0x2badb3c <__start_il2cpp+0xe5528>
 2bada70: f9400281     	ldr	x1, [x20]
 2bada74: aa1f03e2     	mov	x2, xzr
 2bada78: 94be65fb     	bl	0x5b47264 <__start_il2cpp+0x307ec50>
 2bada7c: aa1303e0     	mov	x0, x19
 2bada80: 97fffb93     	bl	0x2bac8cc <__start_il2cpp+0xe42b8>
 2bada84: aa0003f4     	mov	x20, x0
 2bada88: aa1303e0     	mov	x0, x19
 2bada8c: 97fffb7e     	bl	0x2bac884 <__start_il2cpp+0xe4270>
 2bada90: aa0003f5     	mov	x21, x0
 2bada94: f94002e0     	ldr	x0, [x23]
 2bada98: b940e408     	ldr	w8, [x0, #0xe4]
 2bada9c: 35000048     	cbnz	w8, 0x2badaa4 <__start_il2cpp+0xe5490>
 2badaa0: 97f8a52f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2badaa4: aa1403e0     	mov	x0, x20
 2badaa8: aa1503e1     	mov	x1, x21
 2badaac: aa1f03e2     	mov	x2, xzr
 2badab0: 9494ff75     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2badab4: aa0003e8     	mov	x8, x0
 2badab8: f94002c0     	ldr	x0, [x22]
 2badabc: f90017e8     	str	x8, [sp, #0x28]
 2badac0: b940e409     	ldr	w9, [x0, #0xe4]
 2badac4: 35000049     	cbnz	w9, 0x2badacc <__start_il2cpp+0xe54b8>
 2badac8: 97f8a525     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2badacc: 9100a3e0     	add	x0, sp, #0x28
 2badad0: aa1f03e1     	mov	x1, xzr
 2badad4: 9495d929     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2badad8: d2effe08     	mov	x8, #0x7ff0000000000000 // =9218868437227405312
 2badadc: 1e780009     	fcvtzs	w9, d0
 2badae0: 9e670101     	fmov	d1, x8
 2badae4: 52b00008     	mov	w8, #-0x80000000        // =-2147483648
 2badae8: 1e612000     	fcmp	d0, d1
 2badaec: 1a890100     	csel	w0, w8, w9, eq
 2badaf0: aa1f03e1     	mov	x1, xzr
 2badaf4: 94069e07     	bl	0x2d55310 <__start_il2cpp+0x28ccfc>
 2badaf8: aa1303e0     	mov	x0, x19
 2badafc: aa1f03e1     	mov	x1, xzr
 2badb00: f9000fff     	str	xzr, [sp, #0x18]
 2badb04: 97fffb69     	bl	0x2bac8a8 <__start_il2cpp+0xe4294>
 2badb08: aa1303e0     	mov	x0, x19
 2badb0c: aa1f03e1     	mov	x1, xzr
 2badb10: f9000fff     	str	xzr, [sp, #0x18]
 2badb14: 97fffb77     	bl	0x2bac8f0 <__start_il2cpp+0xe42dc>
 2badb18: 2a1f03e0     	mov	w0, wzr
 2badb1c: aa1f03e1     	mov	x1, xzr
 2badb20: 9406a935     	bl	0x2d57ff4 <__start_il2cpp+0x28f9e0>
 2badb24: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 2badb28: fd4013e8     	ldr	d8, [sp, #0x20]
 2badb2c: a94457f6     	ldp	x22, x21, [sp, #0x40]
 2badb30: a9435ffe     	ldp	x30, x23, [sp, #0x30]
 2badb34: 910183ff     	add	sp, sp, #0x60
 2badb38: d65f03c0     	ret
 2badb3c: 97f8a553     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2badb40: 14000005     	b	0x2badb54 <__start_il2cpp+0xe5540>
 2badb44: 14000004     	b	0x2badb54 <__start_il2cpp+0xe5540>
 2badb48: 14000003     	b	0x2badb54 <__start_il2cpp+0xe5540>
 2badb4c: 14000002     	b	0x2badb54 <__start_il2cpp+0xe5540>
 2badb50: 14000001     	b	0x2badb54 <__start_il2cpp+0xe5540>
 2badb54: aa0003f4     	mov	x20, x0
 2badb58: 7100043f     	cmp	w1, #0x1
 2badb5c: 54000501     	b.ne	0x2badbfc <__start_il2cpp+0xe55e8>
 2badb60: aa1403e0     	mov	x0, x20
 2badb64: 94cde2f7     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2badb68: aa0003f4     	mov	x20, x0
 2badb6c: f001ba00     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2badb70: f946f000     	ldr	x0, [x0, #0xde0]
 2badb74: 97f8a4a0     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2badb78: f9400288     	ldr	x8, [x20]
 2badb7c: f9400101     	ldr	x1, [x8]
 2badb80: 97f8a644     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2badb84: 36000280     	tbz	w0, #0x0, 0x2badbd4 <__start_il2cpp+0xe55c0>
 2badb88: b98013f5     	ldrsw	x21, [sp, #0x10]
 2badb8c: f9400294     	ldr	x20, [x20]
 2badb90: 910023e8     	add	x8, sp, #0x8
 2badb94: f8357914     	str	x20, [x8, x21, lsl #3]
 2badb98: 110006a8     	add	w8, w21, #0x1
 2badb9c: b90013e8     	str	w8, [sp, #0x10]
 2badba0: 94cde2ec     	bl	0x5f26750 <__cxa_end_catch@plt>
 2badba4: b001ba40     	adrp	x0, 0x62f6000
 2badba8: f9400c00     	ldr	x0, [x0, #0x18]
 2badbac: 97f8a492     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2badbb0: b940e408     	ldr	w8, [x0, #0xe4]
 2badbb4: 35000048     	cbnz	w8, 0x2badbbc <__start_il2cpp+0xe55a8>
 2badbb8: 97f8a4e9     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2badbbc: aa1403e0     	mov	x0, x20
 2badbc0: aa1f03e1     	mov	x1, xzr
 2badbc4: 97fea696     	bl	0x2b5761c <__start_il2cpp+0x8f008>
 2badbc8: 2a1f03e0     	mov	w0, wzr
 2badbcc: b90013f5     	str	w21, [sp, #0x10]
 2badbd0: 17ffffc8     	b	0x2badaf0 <__start_il2cpp+0xe54dc>
 2badbd4: 52800100     	mov	w0, #0x8                // =8
 2badbd8: 94cde2fa     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2badbdc: f9400288     	ldr	x8, [x20]
 2badbe0: f9000008     	str	x8, [x0]
 2badbe4: f0019be1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2badbe8: 91302021     	add	x1, x1, #0xc08
 2badbec: aa1f03e2     	mov	x2, xzr
 2badbf0: 94cde2f8     	bl	0x5f267d0 <__cxa_throw@plt>
 2badbf4: aa0003f4     	mov	x20, x0
 2badbf8: 94cde2d6     	bl	0x5f26750 <__cxa_end_catch@plt>
 2badbfc: aa1403e0     	mov	x0, x20
 2badc00: 97fc5ab7     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2badc04: 97ebdf92     	bl	0x26a5a4c <.text+0x8ec>

# EnergyController :: System.Void OnEnergyUpdated(EnergyUpdatedSignal energyUpdatedSignal)
# VA 0x2badc08 .. 0x2badc6c (next mapped method entry)
 2badc08: f81e0ffe     	str	x30, [sp, #-0x20]!
 2badc0c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2badc10: aa0103f4     	mov	x20, x1
 2badc14: aa0003f3     	mov	x19, x0
 2badc18: 36000094     	tbz	w20, #0x0, 0x2badc28 <__start_il2cpp+0xe5614>
 2badc1c: 37400174     	tbnz	w20, #0x8, 0x2badc48 <__start_il2cpp+0xe5634>
 2badc20: aa1303e0     	mov	x0, x19
 2badc24: 9400002e     	bl	0x2badcdc <__start_il2cpp+0xe56c8>
 2badc28: 368001b4     	tbz	w20, #0x10, 0x2badc5c <__start_il2cpp+0xe5648>
 2badc2c: f9401260     	ldr	x0, [x19, #0x20]
 2badc30: b40001c0     	cbz	x0, 0x2badc68 <__start_il2cpp+0xe5654>
 2badc34: 39404261     	ldrb	w1, [x19, #0x10]
 2badc38: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2badc3c: aa1f03e2     	mov	x2, xzr
 2badc40: f84207fe     	ldr	x30, [sp], #0x20
 2badc44: 14048e6e     	b	0x2cd15fc <__start_il2cpp+0x208fe8>
 2badc48: 39404268     	ldrb	w8, [x19, #0x10]
 2badc4c: 35000088     	cbnz	w8, 0x2badc5c <__start_il2cpp+0xe5648>
 2badc50: aa1303e0     	mov	x0, x19
 2badc54: 94000006     	bl	0x2badc6c <__start_il2cpp+0xe5658>
 2badc58: 3787feb4     	tbnz	w20, #0x10, 0x2badc2c <__start_il2cpp+0xe5618>
 2badc5c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2badc60: f84207fe     	ldr	x30, [sp], #0x20
 2badc64: d65f03c0     	ret
 2badc68: 97f8a508     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Void OnEnergyAdded()
# VA 0x2badc6c .. 0x2badcdc (next mapped method entry)
 2badc6c: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2badc70: aa0003f3     	mov	x19, x0
 2badc74: aa1f03e0     	mov	x0, xzr
 2badc78: 94002028     	bl	0x2bb5d18 <__start_il2cpp+0xed704>
 2badc7c: 7101901f     	cmp	w0, #0x64
 2badc80: 5400028b     	b.lt	0x2badcd0 <__start_il2cpp+0xe56bc>
 2badc84: 39410268     	ldrb	w8, [x19, #0x40]
 2badc88: 34000248     	cbz	w8, 0x2badcd0 <__start_il2cpp+0xe56bc>
 2badc8c: f9400e60     	ldr	x0, [x19, #0x18]
 2badc90: b4000240     	cbz	x0, 0x2badcd8 <__start_il2cpp+0xe56c4>
 2badc94: f9402a61     	ldr	x1, [x19, #0x50]
 2badc98: aa1f03e2     	mov	x2, xzr
 2badc9c: 94be65be     	bl	0x5b47394 <__start_il2cpp+0x307ed80>
 2badca0: f9401660     	ldr	x0, [x19, #0x28]
 2badca4: 3901027f     	strb	wzr, [x19, #0x40]
 2badca8: b4000180     	cbz	x0, 0x2badcd8 <__start_il2cpp+0xe56c4>
 2badcac: aa1f03e1     	mov	x1, xzr
 2badcb0: 9404900d     	bl	0x2cd1ce4 <__start_il2cpp+0x2096d0>
 2badcb4: aa1303e0     	mov	x0, x19
 2badcb8: aa1f03e1     	mov	x1, xzr
 2badcbc: 97fffb1f     	bl	0x2bac938 <__start_il2cpp+0xe4324>
 2badcc0: aa1303e0     	mov	x0, x19
 2badcc4: aa1f03e1     	mov	x1, xzr
 2badcc8: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2badccc: 17fffb2d     	b	0x2bac980 <__start_il2cpp+0xe436c>
 2badcd0: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2badcd4: d65f03c0     	ret
 2badcd8: 97f8a4ec     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Void OnEnergySpend()
# VA 0x2badcdc .. 0x2baddb8 (next mapped method entry)
 2badcdc: f81e0ffe     	str	x30, [sp, #-0x20]!
 2badce0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2badce4: b001db34     	adrp	x20, 0x6712000
 2badce8: aa0003f3     	mov	x19, x0
 2badcec: 3964ce88     	ldrb	w8, [x20, #0x933]
 2badcf0: 370000c8     	tbnz	w8, #0x0, 0x2badd08 <__start_il2cpp+0xe56f4>
 2badcf4: b001ba20     	adrp	x0, 0x62f2000
 2badcf8: f940ac00     	ldr	x0, [x0, #0x158]
 2badcfc: 97f8a439     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2badd00: 52800028     	mov	w8, #0x1                // =1
 2badd04: 3924ce88     	strb	w8, [x20, #0x933]
 2badd08: 39410268     	ldrb	w8, [x19, #0x40]
 2badd0c: f90007ff     	str	xzr, [sp, #0x8]
 2badd10: 350004c8     	cbnz	w8, 0x2badda8 <__start_il2cpp+0xe5794>
 2badd14: aa1f03e0     	mov	x0, xzr
 2badd18: 94002000     	bl	0x2bb5d18 <__start_il2cpp+0xed704>
 2badd1c: 71018c1f     	cmp	w0, #0x63
 2badd20: 5400044c     	b.gt	0x2badda8 <__start_il2cpp+0xe5794>
 2badd24: b001ba28     	adrp	x8, 0x62f2000
 2badd28: f940ad08     	ldr	x8, [x8, #0x158]
 2badd2c: f9400100     	ldr	x0, [x8]
 2badd30: b940e408     	ldr	w8, [x0, #0xe4]
 2badd34: 35000048     	cbnz	w8, 0x2badd3c <__start_il2cpp+0xe5728>
 2badd38: 97f8a489     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2badd3c: aa1f03e0     	mov	x0, xzr
 2badd40: 9494f811     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2badd44: aa0003e1     	mov	x1, x0
 2badd48: aa1303e0     	mov	x0, x19
 2badd4c: 97fffafb     	bl	0x2bac938 <__start_il2cpp+0xe4324>
 2badd50: aa1303e0     	mov	x0, x19
 2badd54: 97fffaf0     	bl	0x2bac914 <__start_il2cpp+0xe4300>
 2badd58: d2e80bc8     	mov	x8, #0x405e000000000000 // =4638144666238189568
 2badd5c: f90007e0     	str	x0, [sp, #0x8]
 2badd60: 910023e0     	add	x0, sp, #0x8
 2badd64: 9e670100     	fmov	d0, x8
 2badd68: aa1f03e1     	mov	x1, xzr
 2badd6c: 9494f3b2     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2badd70: aa0003e1     	mov	x1, x0
 2badd74: aa1303e0     	mov	x0, x19
 2badd78: 97fffb02     	bl	0x2bac980 <__start_il2cpp+0xe436c>
 2badd7c: aa1303e0     	mov	x0, x19
 2badd80: 97fffcf1     	bl	0x2bad144 <__start_il2cpp+0xe4b30>
 2badd84: aa0003e1     	mov	x1, x0
 2badd88: f8050e60     	str	x0, [x19, #0x50]!
 2badd8c: aa1303e0     	mov	x0, x19
 2badd90: 97f8a3ff     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2badd94: f85c8260     	ldur	x0, [x19, #-0x38]
 2badd98: b40000e0     	cbz	x0, 0x2baddb4 <__start_il2cpp+0xe57a0>
 2badd9c: f9400261     	ldr	x1, [x19]
 2badda0: aa1f03e2     	mov	x2, xzr
 2badda4: 94be6530     	bl	0x5b47264 <__start_il2cpp+0x307ec50>
 2badda8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2baddac: f84207fe     	ldr	x30, [sp], #0x20
 2baddb0: d65f03c0     	ret
 2baddb4: 97f8a4b5     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EnergyController :: System.Void CheckUnlimitedEnergyPause()
# VA 0x2baddb8 .. 0x2baddbc (next mapped method entry)
 2baddb8: d65f03c0     	ret

# EnergyController :: System.Void TrySetUnlimitedPause()
# VA 0x2baddbc .. 0x2baddc0 (next mapped method entry)
 2baddbc: d65f03c0     	ret

# EnergyController :: System.Void .ctor()
# VA 0x2baddc0 .. 0x2baddc8 (next mapped method entry)
 2baddc0: aa1f03e1     	mov	x1, xzr
 2baddc4: 14968761     	b	0x514fb48 <__start_il2cpp+0x2687534>
