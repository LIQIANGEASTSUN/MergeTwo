
# BoardHintChecker :: MergeHintState get_MergeHintState()
# VA 0x2b9dd80 .. 0x2b9dd88 (next mapped method entry)
 2b9dd80: b9404000     	ldr	w0, [x0, #0x40]
 2b9dd84: d65f03c0     	ret

# BoardHintChecker :: System.Void set_MergeHintState(MergeHintState value)
# VA 0x2b9dd88 .. 0x2b9dd90 (next mapped method entry)
 2b9dd88: b9004001     	str	w1, [x0, #0x40]
 2b9dd8c: d65f03c0     	ret

# BoardHintChecker :: System.Void CheckForMergeHint()
# VA 0x2b9dd90 .. 0x2b9ddfc (next mapped method entry)
 2b9dd90: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b9dd94: f9401c08     	ldr	x8, [x0, #0x38]
 2b9dd98: b4000308     	cbz	x8, 0x2b9ddf8 <__start_il2cpp+0xd57e4>
 2b9dd9c: 39439108     	ldrb	w8, [x8, #0xe4]
 2b9dda0: aa0003f3     	mov	x19, x0
 2b9dda4: 350000a8     	cbnz	w8, 0x2b9ddb8 <__start_il2cpp+0xd57a4>
 2b9dda8: aa1f03e0     	mov	x0, xzr
 2b9ddac: 94005fc4     	bl	0x2bb5cbc <__start_il2cpp+0xed6a8>
 2b9ddb0: 7100081f     	cmp	w0, #0x2
 2b9ddb4: 540001eb     	b.lt	0x2b9ddf0 <__start_il2cpp+0xd57dc>
 2b9ddb8: aa1303e0     	mov	x0, x19
 2b9ddbc: 94000010     	bl	0x2b9ddfc <__start_il2cpp+0xd57e8>
 2b9ddc0: aa1303e0     	mov	x0, x19
 2b9ddc4: 94000021     	bl	0x2b9de48 <__start_il2cpp+0xd5834>
 2b9ddc8: aa0003e1     	mov	x1, x0
 2b9ddcc: f8060e60     	str	x0, [x19, #0x60]!
 2b9ddd0: aa1303e0     	mov	x0, x19
 2b9ddd4: 97f8e3ee     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9ddd8: f85c8260     	ldur	x0, [x19, #-0x38]
 2b9dddc: b40000e0     	cbz	x0, 0x2b9ddf8 <__start_il2cpp+0xd57e4>
 2b9dde0: f9400261     	ldr	x1, [x19]
 2b9dde4: aa1f03e2     	mov	x2, xzr
 2b9dde8: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b9ddec: 14bea51e     	b	0x5b47264 <__start_il2cpp+0x307ec50>
 2b9ddf0: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b9ddf4: d65f03c0     	ret
 2b9ddf8: 97f8e4a4     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardHintChecker :: System.Void Reset()
# VA 0x2b9ddfc .. 0x2b9de48 (next mapped method entry)
 2b9ddfc: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b9de00: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9de04: aa0003f4     	mov	x20, x0
 2b9de08: aa0003f3     	mov	x19, x0
 2b9de0c: f8460e81     	ldr	x1, [x20, #0x60]!
 2b9de10: b4000121     	cbz	x1, 0x2b9de34 <__start_il2cpp+0xd5820>
 2b9de14: f9401660     	ldr	x0, [x19, #0x28]
 2b9de18: b4000160     	cbz	x0, 0x2b9de44 <__start_il2cpp+0xd5830>
 2b9de1c: aa1f03e2     	mov	x2, xzr
 2b9de20: 94bea55d     	bl	0x5b47394 <__start_il2cpp+0x307ed80>
 2b9de24: aa1403e0     	mov	x0, x20
 2b9de28: aa1f03e1     	mov	x1, xzr
 2b9de2c: f900029f     	str	xzr, [x20]
 2b9de30: 97f8e3d7     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9de34: aa1303e0     	mov	x0, x19
 2b9de38: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9de3c: f84207fe     	ldr	x30, [sp], #0x20
 2b9de40: 1400001d     	b	0x2b9deb4 <__start_il2cpp+0xd58a0>
 2b9de44: 97f8e491     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardHintChecker :: System.Collections.IEnumerator IterateOverHintCombinations()
# VA 0x2b9de48 .. 0x2b9deb4 (next mapped method entry)
 2b9de48: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b9de4c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9de50: b001dbb4     	adrp	x20, 0x6712000
 2b9de54: 9001baf5     	adrp	x21, 0x62f9000
 2b9de58: aa0003f3     	mov	x19, x0
 2b9de5c: 3962ee88     	ldrb	w8, [x20, #0x8bb]
 2b9de60: f94746b5     	ldr	x21, [x21, #0xe88]
 2b9de64: 370000c8     	tbnz	w8, #0x0, 0x2b9de7c <__start_il2cpp+0xd5868>
 2b9de68: 9001bae0     	adrp	x0, 0x62f9000
 2b9de6c: f9474400     	ldr	x0, [x0, #0xe88]
 2b9de70: 97f8e3dc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9de74: 52800028     	mov	w8, #0x1                // =1
 2b9de78: 3922ee88     	strb	w8, [x20, #0x8bb]
 2b9de7c: f94002a0     	ldr	x0, [x21]
 2b9de80: 97f8e47e     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9de84: aa1f03e1     	mov	x1, xzr
 2b9de88: aa0003f4     	mov	x20, x0
 2b9de8c: 9496c72f     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2b9de90: aa1403e0     	mov	x0, x20
 2b9de94: aa1303e1     	mov	x1, x19
 2b9de98: b900129f     	str	wzr, [x20, #0x10]
 2b9de9c: f8020c13     	str	x19, [x0, #0x20]!
 2b9dea0: 97f8e3bb     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9dea4: aa1403e0     	mov	x0, x20
 2b9dea8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9deac: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b9deb0: d65f03c0     	ret

# BoardHintChecker :: System.Void ResetHintedItems()
# VA 0x2b9deb4 .. 0x2b9dff4 (next mapped method entry)
 2b9deb4: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b9deb8: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b9debc: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9dec0: b001dbb4     	adrp	x20, 0x6712000
 2b9dec4: f001ba96     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b9dec8: aa0003f3     	mov	x19, x0
 2b9decc: 3962ea88     	ldrb	w8, [x20, #0x8ba]
 2b9ded0: f9478ed6     	ldr	x22, [x22, #0xf18]
 2b9ded4: 37000128     	tbnz	w8, #0x0, 0x2b9def8 <__start_il2cpp+0xd58e4>
 2b9ded8: 9001bae0     	adrp	x0, 0x62f9000
 2b9dedc: f9474800     	ldr	x0, [x0, #0xe90]
 2b9dee0: 97f8e3c0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9dee4: f001ba80     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b9dee8: f9478c00     	ldr	x0, [x0, #0xf18]
 2b9deec: 97f8e3bd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9def0: 52800028     	mov	w8, #0x1                // =1
 2b9def4: 3922ea88     	strb	w8, [x20, #0x8ba]
 2b9def8: f94002c0     	ldr	x0, [x22]
 2b9defc: aa1303f4     	mov	x20, x19
 2b9df00: f8450e95     	ldr	x21, [x20, #0x50]!
 2b9df04: b940e408     	ldr	w8, [x0, #0xe4]
 2b9df08: 35000048     	cbnz	w8, 0x2b9df10 <__start_il2cpp+0xd58fc>
 2b9df0c: 97f8e414     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9df10: aa1503e0     	mov	x0, x21
 2b9df14: aa1f03e1     	mov	x1, xzr
 2b9df18: aa1f03e2     	mov	x2, xzr
 2b9df1c: 94be93b0     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2b9df20: 36000600     	tbz	w0, #0x0, 0x2b9dfe0 <__start_il2cpp+0xd59cc>
 2b9df24: f94002c0     	ldr	x0, [x22]
 2b9df28: f8458e75     	ldr	x21, [x19, #0x58]!
 2b9df2c: b940e408     	ldr	w8, [x0, #0xe4]
 2b9df30: 35000048     	cbnz	w8, 0x2b9df38 <__start_il2cpp+0xd5924>
 2b9df34: 97f8e40a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9df38: aa1503e0     	mov	x0, x21
 2b9df3c: aa1f03e1     	mov	x1, xzr
 2b9df40: aa1f03e2     	mov	x2, xzr
 2b9df44: 94be93a6     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2b9df48: 360004c0     	tbz	w0, #0x0, 0x2b9dfe0 <__start_il2cpp+0xd59cc>
 2b9df4c: 9001baf5     	adrp	x21, 0x62f9000
 2b9df50: f9474ab5     	ldr	x21, [x21, #0xe90]
 2b9df54: f94002a0     	ldr	x0, [x21]
 2b9df58: b940e408     	ldr	w8, [x0, #0xe4]
 2b9df5c: 35000068     	cbnz	w8, 0x2b9df68 <__start_il2cpp+0xd5954>
 2b9df60: 97f8e3ff     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9df64: f94002a0     	ldr	x0, [x21]
 2b9df68: f9405c08     	ldr	x8, [x0, #0xb8]
 2b9df6c: f9403508     	ldr	x8, [x8, #0x68]
 2b9df70: b4000408     	cbz	x8, 0x2b9dff0 <__start_il2cpp+0xd59dc>
 2b9df74: f9400281     	ldr	x1, [x20]
 2b9df78: f9400d09     	ldr	x9, [x8, #0x18]
 2b9df7c: aa1f03e2     	mov	x2, xzr
 2b9df80: f9402100     	ldr	x0, [x8, #0x40]
 2b9df84: f9401503     	ldr	x3, [x8, #0x28]
 2b9df88: d63f0120     	blr	x9
 2b9df8c: f94002a8     	ldr	x8, [x21]
 2b9df90: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9df94: f9403508     	ldr	x8, [x8, #0x68]
 2b9df98: b40002c8     	cbz	x8, 0x2b9dff0 <__start_il2cpp+0xd59dc>
 2b9df9c: f9400261     	ldr	x1, [x19]
 2b9dfa0: f9400d09     	ldr	x9, [x8, #0x18]
 2b9dfa4: aa1f03e2     	mov	x2, xzr
 2b9dfa8: f9402100     	ldr	x0, [x8, #0x40]
 2b9dfac: f9401503     	ldr	x3, [x8, #0x28]
 2b9dfb0: d63f0120     	blr	x9
 2b9dfb4: aa1403e0     	mov	x0, x20
 2b9dfb8: aa1f03e1     	mov	x1, xzr
 2b9dfbc: f900029f     	str	xzr, [x20]
 2b9dfc0: 97f8e373     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9dfc4: aa1303e0     	mov	x0, x19
 2b9dfc8: f900027f     	str	xzr, [x19]
 2b9dfcc: aa1f03e1     	mov	x1, xzr
 2b9dfd0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9dfd4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9dfd8: f84307fe     	ldr	x30, [sp], #0x30
 2b9dfdc: 17f8e36c     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2b9dfe0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9dfe4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9dfe8: f84307fe     	ldr	x30, [sp], #0x30
 2b9dfec: d65f03c0     	ret
 2b9dff0: 97f8e426     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardHintChecker :: System.Void FindHintCombinations()
# VA 0x2b9dff4 .. 0x2b9e46c (next mapped method entry)
 2b9dff4: d10343ff     	sub	sp, sp, #0xd0
 2b9dff8: a9077bfd     	stp	x29, x30, [sp, #0x70]
 2b9dffc: a9086ffc     	stp	x28, x27, [sp, #0x80]
 2b9e000: a90967fa     	stp	x26, x25, [sp, #0x90]
 2b9e004: a90a5ff8     	stp	x24, x23, [sp, #0xa0]
 2b9e008: a90b57f6     	stp	x22, x21, [sp, #0xb0]
 2b9e00c: a90c4ff4     	stp	x20, x19, [sp, #0xc0]
 2b9e010: 9001dbb4     	adrp	x20, 0x6712000
 2b9e014: aa0003f3     	mov	x19, x0
 2b9e018: 3962e688     	ldrb	w8, [x20, #0x8b9]
 2b9e01c: 370004e8     	tbnz	w8, #0x0, 0x2b9e0b8 <__start_il2cpp+0xd5aa4>
 2b9e020: f001bac0     	adrp	x0, 0x62f9000
 2b9e024: f9474c00     	ldr	x0, [x0, #0xe98]
 2b9e028: 97f8e36e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e02c: f001bac0     	adrp	x0, 0x62f9000
 2b9e030: f9475000     	ldr	x0, [x0, #0xea0]
 2b9e034: 97f8e36b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e038: f001bac0     	adrp	x0, 0x62f9000
 2b9e03c: f9475400     	ldr	x0, [x0, #0xea8]
 2b9e040: 97f8e368     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e044: f001bac0     	adrp	x0, 0x62f9000
 2b9e048: f9475800     	ldr	x0, [x0, #0xeb0]
 2b9e04c: 97f8e365     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e050: f001bac0     	adrp	x0, 0x62f9000
 2b9e054: f9475c00     	ldr	x0, [x0, #0xeb8]
 2b9e058: 97f8e362     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e05c: f001bac0     	adrp	x0, 0x62f9000
 2b9e060: f9476000     	ldr	x0, [x0, #0xec0]
 2b9e064: 97f8e35f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e068: f001bac0     	adrp	x0, 0x62f9000
 2b9e06c: f9476400     	ldr	x0, [x0, #0xec8]
 2b9e070: 97f8e35c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e074: f001bac0     	adrp	x0, 0x62f9000
 2b9e078: f9476800     	ldr	x0, [x0, #0xed0]
 2b9e07c: 97f8e359     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e080: f001bac0     	adrp	x0, 0x62f9000
 2b9e084: f9476c00     	ldr	x0, [x0, #0xed8]
 2b9e088: 97f8e356     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e08c: f001bac0     	adrp	x0, 0x62f9000
 2b9e090: f9477000     	ldr	x0, [x0, #0xee0]
 2b9e094: 97f8e353     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e098: f001bac0     	adrp	x0, 0x62f9000
 2b9e09c: f9477400     	ldr	x0, [x0, #0xee8]
 2b9e0a0: 97f8e350     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e0a4: f001bac0     	adrp	x0, 0x62f9000
 2b9e0a8: f9477800     	ldr	x0, [x0, #0xef0]
 2b9e0ac: 97f8e34d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e0b0: 52800028     	mov	w8, #0x1                // =1
 2b9e0b4: 3922e688     	strb	w8, [x20, #0x8b9]
 2b9e0b8: 6f00e400     	movi	v0.2d, #0000000000000000
 2b9e0bc: f9402660     	ldr	x0, [x19, #0x48]
 2b9e0c0: f90033ff     	str	xzr, [sp, #0x60]
 2b9e0c4: f9001fff     	str	xzr, [sp, #0x38]
 2b9e0c8: ad0203e0     	stp	q0, q0, [sp, #0x40]
 2b9e0cc: b4001960     	cbz	x0, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e0d0: f001bac8     	adrp	x8, 0x62f9000
 2b9e0d4: f001bad4     	adrp	x20, 0x62f9000
 2b9e0d8: f001bad5     	adrp	x21, 0x62f9000
 2b9e0dc: f9475908     	ldr	x8, [x8, #0xeb0]
 2b9e0e0: f001bad8     	adrp	x24, 0x62f9000
 2b9e0e4: f001bad9     	adrp	x25, 0x62f9000
 2b9e0e8: f001bad6     	adrp	x22, 0x62f9000
 2b9e0ec: f9476694     	ldr	x20, [x20, #0xec8]
 2b9e0f0: f9476eb5     	ldr	x21, [x21, #0xed8]
 2b9e0f4: f9477b18     	ldr	x24, [x24, #0xef0]
 2b9e0f8: f9475739     	ldr	x25, [x25, #0xea8]
 2b9e0fc: f94762d6     	ldr	x22, [x22, #0xec0]
 2b9e100: f9400101     	ldr	x1, [x8]
 2b9e104: 910043e8     	add	x8, sp, #0x10
 2b9e108: 94733988     	bl	0x486c728 <__start_il2cpp+0x1da4114>
 2b9e10c: ad4087e0     	ldp	q0, q1, [sp, #0x10]
 2b9e110: f9401be8     	ldr	x8, [sp, #0x30]
 2b9e114: f90033e8     	str	x8, [sp, #0x60]
 2b9e118: 910103e8     	add	x8, sp, #0x40
 2b9e11c: ad0207e0     	stp	q0, q1, [sp, #0x40]
 2b9e120: a90123ff     	stp	xzr, x8, [sp, #0x10]
 2b9e124: f9400281     	ldr	x1, [x20]
 2b9e128: 910103e0     	add	x0, sp, #0x40
 2b9e12c: 947c807d     	bl	0x4abe320 <__start_il2cpp+0x1ff5d0c>
 2b9e130: 360000a0     	tbz	w0, #0x0, 0x2b9e144 <__start_il2cpp+0xd5b30>
 2b9e134: f9402fe0     	ldr	x0, [sp, #0x58]
 2b9e138: b4001640     	cbz	x0, 0x2b9e400 <__start_il2cpp+0xd5dec>
 2b9e13c: 940000cc     	bl	0x2b9e46c <__start_il2cpp+0xd5e58>
 2b9e140: 17fffff9     	b	0x2b9e124 <__start_il2cpp+0xd5b10>
 2b9e144: f94002c1     	ldr	x1, [x22]
 2b9e148: 910103e0     	add	x0, sp, #0x40
 2b9e14c: 947c80bd     	bl	0x4abe440 <__start_il2cpp+0x1ff5e2c>
 2b9e150: f9400e74     	ldr	x20, [x19, #0x18]
 2b9e154: b4001534     	cbz	x20, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e158: f9400288     	ldr	x8, [x20]
 2b9e15c: f94002a1     	ldr	x1, [x21]
 2b9e160: 79425d09     	ldrh	w9, [x8, #0x12e]
 2b9e164: b4000129     	cbz	x9, 0x2b9e188 <__start_il2cpp+0xd5b74>
 2b9e168: f940590a     	ldr	x10, [x8, #0xb0]
 2b9e16c: 9100214a     	add	x10, x10, #0x8
 2b9e170: f85f814b     	ldur	x11, [x10, #-0x8]
 2b9e174: eb01017f     	cmp	x11, x1
 2b9e178: 54000100     	b.eq	0x2b9e198 <__start_il2cpp+0xd5b84>
 2b9e17c: f1000529     	subs	x9, x9, #0x1
 2b9e180: 9100414a     	add	x10, x10, #0x10
 2b9e184: 54ffff61     	b.ne	0x2b9e170 <__start_il2cpp+0xd5b5c>
 2b9e188: aa1403e0     	mov	x0, x20
 2b9e18c: 52800022     	mov	w2, #0x1                // =1
 2b9e190: 97f9c075     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2b9e194: 14000005     	b	0x2b9e1a8 <__start_il2cpp+0xd5b94>
 2b9e198: b9400149     	ldr	w9, [x10]
 2b9e19c: 11000529     	add	w9, w9, #0x1
 2b9e1a0: 8b29d108     	add	x8, x8, w9, sxtw #4
 2b9e1a4: 9104e100     	add	x0, x8, #0x138
 2b9e1a8: a9400408     	ldp	x8, x1, [x0]
 2b9e1ac: aa1403e0     	mov	x0, x20
 2b9e1b0: d63f0100     	blr	x8
 2b9e1b4: b4001220     	cbz	x0, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e1b8: f9400c08     	ldr	x8, [x0, #0x18]
 2b9e1bc: aa0003f4     	mov	x20, x0
 2b9e1c0: 340011e8     	cbz	w8, 0x2b9e3fc <__start_il2cpp+0xd5de8>
 2b9e1c4: f9401289     	ldr	x9, [x20, #0x20]
 2b9e1c8: b4001189     	cbz	x9, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e1cc: 7100051f     	cmp	w8, #0x1
 2b9e1d0: 5400104b     	b.lt	0x2b9e3d8 <__start_il2cpp+0xd5dc4>
 2b9e1d4: f001ba95     	adrp	x21, 0x62f1000
 2b9e1d8: f9400d3b     	ldr	x27, [x9, #0x18]
 2b9e1dc: 92407d08     	and	x8, x8, #0xffffffff
 2b9e1e0: f941feb5     	ldr	x21, [x21, #0x3f8]
 2b9e1e4: aa1f03fa     	mov	x26, xzr
 2b9e1e8: f90007e8     	str	x8, [sp, #0x8]
 2b9e1ec: 7100077f     	cmp	w27, #0x1
 2b9e1f0: 54000ecb     	b.lt	0x2b9e3c8 <__start_il2cpp+0xd5db4>
 2b9e1f4: 8b1a0e9c     	add	x28, x20, x26, lsl #3
 2b9e1f8: aa1f03fd     	mov	x29, xzr
 2b9e1fc: b9401a88     	ldr	w8, [x20, #0x18]
 2b9e200: eb08035f     	cmp	x26, x8
 2b9e204: 54000fc2     	b.hs	0x2b9e3fc <__start_il2cpp+0xd5de8>
 2b9e208: f8420388     	ldur	x8, [x28, #0x20]
 2b9e20c: b4000f68     	cbz	x8, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e210: b9401909     	ldr	w9, [x8, #0x18]
 2b9e214: 6b0903bf     	cmp	w29, w9
 2b9e218: 54000f22     	b.hs	0x2b9e3fc <__start_il2cpp+0xd5de8>
 2b9e21c: 8b1d0d08     	add	x8, x8, x29, lsl #3
 2b9e220: f9401116     	ldr	x22, [x8, #0x20]
 2b9e224: b4000eb6     	cbz	x22, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e228: aa1603e0     	mov	x0, x22
 2b9e22c: 940000b7     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2b9e230: 37000c60     	tbnz	w0, #0x0, 0x2b9e3bc <__start_il2cpp+0xd5da8>
 2b9e234: 3940b6c8     	ldrb	w8, [x22, #0x2d]
 2b9e238: 35000c28     	cbnz	w8, 0x2b9e3bc <__start_il2cpp+0xd5da8>
 2b9e23c: f9401ad6     	ldr	x22, [x22, #0x30]
 2b9e240: b4000dd6     	cbz	x22, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e244: f94002c8     	ldr	x8, [x22]
 2b9e248: aa1603e0     	mov	x0, x22
 2b9e24c: f9412d09     	ldr	x9, [x8, #0x258]
 2b9e250: f9413101     	ldr	x1, [x8, #0x260]
 2b9e254: d63f0120     	blr	x9
 2b9e258: 36000b20     	tbz	w0, #0x0, 0x2b9e3bc <__start_il2cpp+0xd5da8>
 2b9e25c: f9402ac8     	ldr	x8, [x22, #0x50]
 2b9e260: b4000cc8     	cbz	x8, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e264: 9001dba9     	adrp	x9, 0x6712000
 2b9e268: b9403117     	ldr	w23, [x8, #0x30]
 2b9e26c: 395c4529     	ldrb	w9, [x9, #0x711]
 2b9e270: 350000c9     	cbnz	w9, 0x2b9e288 <__start_il2cpp+0xd5c74>
 2b9e274: aa1503e0     	mov	x0, x21
 2b9e278: 97f8e2da     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e27c: 9001dba8     	adrp	x8, 0x6712000
 2b9e280: 52800029     	mov	w9, #0x1                // =1
 2b9e284: 391c4509     	strb	w9, [x8, #0x711]
 2b9e288: f94002a0     	ldr	x0, [x21]
 2b9e28c: b940e408     	ldr	w8, [x0, #0xe4]
 2b9e290: 35000048     	cbnz	w8, 0x2b9e298 <__start_il2cpp+0xd5c84>
 2b9e294: 97f8e332     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9e298: 710002ff     	cmp	w23, #0x0
 2b9e29c: b94046c2     	ldr	w2, [x22, #0x44]
 2b9e2a0: f9400303     	ldr	x3, [x24]
 2b9e2a4: 5a9756e1     	cneg	w1, w23, mi
 2b9e2a8: 9100e3e0     	add	x0, sp, #0x38
 2b9e2ac: 9447ca7e     	bl	0x3d90ca4 <__start_il2cpp+0x12c8690>
 2b9e2b0: f9402660     	ldr	x0, [x19, #0x48]
 2b9e2b4: b4000a20     	cbz	x0, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e2b8: f9401fe1     	ldr	x1, [sp, #0x38]
 2b9e2bc: f9400322     	ldr	x2, [x25]
 2b9e2c0: 94733889     	bl	0x486c4e4 <__start_il2cpp+0x1da3ed0>
 2b9e2c4: 370002a0     	tbnz	w0, #0x0, 0x2b9e318 <__start_il2cpp+0xd5d04>
 2b9e2c8: f001bac8     	adrp	x8, 0x62f9000
 2b9e2cc: f9402677     	ldr	x23, [x19, #0x48]
 2b9e2d0: f9401ff8     	ldr	x24, [sp, #0x38]
 2b9e2d4: f9474d08     	ldr	x8, [x8, #0xe98]
 2b9e2d8: f9400100     	ldr	x0, [x8]
 2b9e2dc: 97f8e367     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9e2e0: aa0003f9     	mov	x25, x0
 2b9e2e4: 940000a1     	bl	0x2b9e568 <__start_il2cpp+0xd5f54>
 2b9e2e8: b4000897     	cbz	x23, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e2ec: f001bac8     	adrp	x8, 0x62f9000
 2b9e2f0: aa1703e0     	mov	x0, x23
 2b9e2f4: aa1803e1     	mov	x1, x24
 2b9e2f8: f9475108     	ldr	x8, [x8, #0xea0]
 2b9e2fc: aa1903e2     	mov	x2, x25
 2b9e300: f9400103     	ldr	x3, [x8]
 2b9e304: 947337fb     	bl	0x486c2f0 <__start_il2cpp+0x1da3cdc>
 2b9e308: f001bad8     	adrp	x24, 0x62f9000
 2b9e30c: f001bad9     	adrp	x25, 0x62f9000
 2b9e310: f9477b18     	ldr	x24, [x24, #0xef0]
 2b9e314: f9475739     	ldr	x25, [x25, #0xea8]
 2b9e318: f9402660     	ldr	x0, [x19, #0x48]
 2b9e31c: b40006e0     	cbz	x0, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e320: f001bac8     	adrp	x8, 0x62f9000
 2b9e324: f9401fe1     	ldr	x1, [sp, #0x38]
 2b9e328: f9475d08     	ldr	x8, [x8, #0xeb8]
 2b9e32c: f9400102     	ldr	x2, [x8]
 2b9e330: 947337c8     	bl	0x486c250 <__start_il2cpp+0x1da3c3c>
 2b9e334: 394102c8     	ldrb	w8, [x22, #0x40]
 2b9e338: 340000a8     	cbz	w8, 0x2b9e34c <__start_il2cpp+0xd5d38>
 2b9e33c: b40005e0     	cbz	x0, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e340: f9400800     	ldr	x0, [x0, #0x10]
 2b9e344: b50000a0     	cbnz	x0, 0x2b9e358 <__start_il2cpp+0xd5d44>
 2b9e348: 1400002c     	b	0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e34c: b4000560     	cbz	x0, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e350: f9400c00     	ldr	x0, [x0, #0x18]
 2b9e354: b4000520     	cbz	x0, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e358: f001bac9     	adrp	x9, 0x62f9000
 2b9e35c: b9401c0a     	ldr	w10, [x0, #0x1c]
 2b9e360: f9400808     	ldr	x8, [x0, #0x10]
 2b9e364: f9477529     	ldr	x9, [x9, #0xee8]
 2b9e368: 1100054a     	add	w10, w10, #0x1
 2b9e36c: f9400129     	ldr	x9, [x9]
 2b9e370: b9001c0a     	str	w10, [x0, #0x1c]
 2b9e374: b4000428     	cbz	x8, 0x2b9e3f8 <__start_il2cpp+0xd5de4>
 2b9e378: b980180a     	ldrsw	x10, [x0, #0x18]
 2b9e37c: b940190b     	ldr	w11, [x8, #0x18]
 2b9e380: 6b0b015f     	cmp	w10, w11
 2b9e384: 54000122     	b.hs	0x2b9e3a8 <__start_il2cpp+0xd5d94>
 2b9e388: 8b0a0d08     	add	x8, x8, x10, lsl #3
 2b9e38c: 11000549     	add	w9, w10, #0x1
 2b9e390: aa1603e1     	mov	x1, x22
 2b9e394: b9001809     	str	w9, [x0, #0x18]
 2b9e398: f8020d16     	str	x22, [x8, #0x20]!
 2b9e39c: aa0803e0     	mov	x0, x8
 2b9e3a0: 97f8e27b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9e3a4: 14000006     	b	0x2b9e3bc <__start_il2cpp+0xd5da8>
 2b9e3a8: f9401128     	ldr	x8, [x9, #0x20]
 2b9e3ac: aa1603e1     	mov	x1, x22
 2b9e3b0: f9406108     	ldr	x8, [x8, #0xc0]
 2b9e3b4: f9403902     	ldr	x2, [x8, #0x70]
 2b9e3b8: 943e2a9e     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2b9e3bc: 910007bd     	add	x29, x29, #0x1
 2b9e3c0: 6b1d037f     	cmp	w27, w29
 2b9e3c4: 54fff1c1     	b.ne	0x2b9e1fc <__start_il2cpp+0xd5be8>
 2b9e3c8: f94007e8     	ldr	x8, [sp, #0x8]
 2b9e3cc: 9100075a     	add	x26, x26, #0x1
 2b9e3d0: eb08035f     	cmp	x26, x8
 2b9e3d4: 54fff0c1     	b.ne	0x2b9e1ec <__start_il2cpp+0xd5bd8>
 2b9e3d8: a94c4ff4     	ldp	x20, x19, [sp, #0xc0]
 2b9e3dc: a94b57f6     	ldp	x22, x21, [sp, #0xb0]
 2b9e3e0: a94a5ff8     	ldp	x24, x23, [sp, #0xa0]
 2b9e3e4: a94967fa     	ldp	x26, x25, [sp, #0x90]
 2b9e3e8: a9486ffc     	ldp	x28, x27, [sp, #0x80]
 2b9e3ec: a9477bfd     	ldp	x29, x30, [sp, #0x70]
 2b9e3f0: 910343ff     	add	sp, sp, #0xd0
 2b9e3f4: d65f03c0     	ret
 2b9e3f8: 97f8e324     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9e3fc: 97f8e325     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2b9e400: 97f8e322     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9e404: 14000002     	b	0x2b9e40c <__start_il2cpp+0xd5df8>
 2b9e408: 14000001     	b	0x2b9e40c <__start_il2cpp+0xd5df8>
 2b9e40c: aa0003f4     	mov	x20, x0
 2b9e410: 7100043f     	cmp	w1, #0x1
 2b9e414: 54000221     	b.ne	0x2b9e458 <__start_il2cpp+0xd5e44>
 2b9e418: aa1403e0     	mov	x0, x20
 2b9e41c: 94ce20c9     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2b9e420: f9400014     	ldr	x20, [x0]
 2b9e424: f9000bf4     	str	x20, [sp, #0x10]
 2b9e428: 94ce20ca     	bl	0x5f26750 <__cxa_end_catch@plt>
 2b9e42c: f9400fe0     	ldr	x0, [sp, #0x18]
 2b9e430: f94002c1     	ldr	x1, [x22]
 2b9e434: 947c8003     	bl	0x4abe440 <__start_il2cpp+0x1ff5e2c>
 2b9e438: f001bad8     	adrp	x24, 0x62f9000
 2b9e43c: f001bad9     	adrp	x25, 0x62f9000
 2b9e440: f9477b18     	ldr	x24, [x24, #0xef0]
 2b9e444: f9475739     	ldr	x25, [x25, #0xea8]
 2b9e448: b4ffe854     	cbz	x20, 0x2b9e150 <__start_il2cpp+0xd5b3c>
 2b9e44c: aa1403e0     	mov	x0, x20
 2b9e450: 97f8e30c     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2b9e454: aa0003f4     	mov	x20, x0
 2b9e458: 910043e0     	add	x0, sp, #0x10
 2b9e45c: 97ec27fa     	bl	0x26a8444 <.text+0x32e4>
 2b9e460: aa1403e0     	mov	x0, x20
 2b9e464: 97fc989e     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2b9e468: 97ec1d79     	bl	0x26a5a4c <.text+0x8ec>

# BoardHintChecker :: System.Void HintItems(BaseItem item1, BaseItem item2)
# VA 0x2b9e63c .. 0x2b9e738 (next mapped method entry)
 2b9e63c: d10103ff     	sub	sp, sp, #0x40
 2b9e640: a9015ffe     	stp	x30, x23, [sp, #0x10]
 2b9e644: a90257f6     	stp	x22, x21, [sp, #0x20]
 2b9e648: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2b9e64c: 9001dbb7     	adrp	x23, 0x6712000
 2b9e650: f001bad6     	adrp	x22, 0x62f9000
 2b9e654: aa0203f4     	mov	x20, x2
 2b9e658: 3962f2e8     	ldrb	w8, [x23, #0x8bc]
 2b9e65c: f9474ad6     	ldr	x22, [x22, #0xe90]
 2b9e660: aa0103f5     	mov	x21, x1
 2b9e664: aa0003f3     	mov	x19, x0
 2b9e668: 37000128     	tbnz	w8, #0x0, 0x2b9e68c <__start_il2cpp+0xd6078>
 2b9e66c: f001bac0     	adrp	x0, 0x62f9000
 2b9e670: f9474800     	ldr	x0, [x0, #0xe90]
 2b9e674: 97f8e1db     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e678: f001bac0     	adrp	x0, 0x62f9000
 2b9e67c: f9478800     	ldr	x0, [x0, #0xf10]
 2b9e680: 97f8e1d8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e684: 52800028     	mov	w8, #0x1                // =1
 2b9e688: 3922f2e8     	strb	w8, [x23, #0x8bc]
 2b9e68c: f94002c0     	ldr	x0, [x22]
 2b9e690: b940e408     	ldr	w8, [x0, #0xe4]
 2b9e694: 35000068     	cbnz	w8, 0x2b9e6a0 <__start_il2cpp+0xd608c>
 2b9e698: 97f8e231     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9e69c: f94002c0     	ldr	x0, [x22]
 2b9e6a0: f9405c08     	ldr	x8, [x0, #0xb8]
 2b9e6a4: f9402108     	ldr	x8, [x8, #0x40]
 2b9e6a8: b4000468     	cbz	x8, 0x2b9e734 <__start_il2cpp+0xd6120>
 2b9e6ac: f9400d09     	ldr	x9, [x8, #0x18]
 2b9e6b0: f9402100     	ldr	x0, [x8, #0x40]
 2b9e6b4: aa1503e1     	mov	x1, x21
 2b9e6b8: f9401503     	ldr	x3, [x8, #0x28]
 2b9e6bc: aa1f03e2     	mov	x2, xzr
 2b9e6c0: d63f0120     	blr	x9
 2b9e6c4: f94002c8     	ldr	x8, [x22]
 2b9e6c8: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9e6cc: f9402108     	ldr	x8, [x8, #0x40]
 2b9e6d0: b4000328     	cbz	x8, 0x2b9e734 <__start_il2cpp+0xd6120>
 2b9e6d4: f001bad6     	adrp	x22, 0x62f9000
 2b9e6d8: aa1403e1     	mov	x1, x20
 2b9e6dc: aa1f03e2     	mov	x2, xzr
 2b9e6e0: f9478ad6     	ldr	x22, [x22, #0xf10]
 2b9e6e4: f9400d09     	ldr	x9, [x8, #0x18]
 2b9e6e8: f9402100     	ldr	x0, [x8, #0x40]
 2b9e6ec: f9401503     	ldr	x3, [x8, #0x28]
 2b9e6f0: d63f0120     	blr	x9
 2b9e6f4: f94002c3     	ldr	x3, [x22]
 2b9e6f8: 910003e0     	mov	x0, sp
 2b9e6fc: aa1503e1     	mov	x1, x21
 2b9e700: aa1403e2     	mov	x2, x20
 2b9e704: a9007fff     	stp	xzr, xzr, [sp]
 2b9e708: 9447c986     	bl	0x3d90d20 <__start_il2cpp+0x12c870c>
 2b9e70c: 3dc003e0     	ldr	q0, [sp]
 2b9e710: 91014260     	add	x0, x19, #0x50
 2b9e714: aa1f03e1     	mov	x1, xzr
 2b9e718: 3d801660     	str	q0, [x19, #0x50]
 2b9e71c: 97f8e19c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9e720: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2b9e724: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2b9e728: a9415ffe     	ldp	x30, x23, [sp, #0x10]
 2b9e72c: 910103ff     	add	sp, sp, #0x40
 2b9e730: d65f03c0     	ret
 2b9e734: 97f8e255     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardHintChecker :: System.Void .ctor()
# VA 0x2b9e738 .. 0x2b9e7c0 (next mapped method entry)
 2b9e738: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b9e73c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b9e740: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9e744: 9001dbb5     	adrp	x21, 0x6712000
 2b9e748: f001bad6     	adrp	x22, 0x62f9000
 2b9e74c: f001bad4     	adrp	x20, 0x62f9000
 2b9e750: 3962f6a8     	ldrb	w8, [x21, #0x8bd]
 2b9e754: f9478ed6     	ldr	x22, [x22, #0xf18]
 2b9e758: f9479294     	ldr	x20, [x20, #0xf20]
 2b9e75c: aa0003f3     	mov	x19, x0
 2b9e760: 37000128     	tbnz	w8, #0x0, 0x2b9e784 <__start_il2cpp+0xd6170>
 2b9e764: f001bac0     	adrp	x0, 0x62f9000
 2b9e768: f9479000     	ldr	x0, [x0, #0xf20]
 2b9e76c: 97f8e19d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e770: f001bac0     	adrp	x0, 0x62f9000
 2b9e774: f9478c00     	ldr	x0, [x0, #0xf18]
 2b9e778: 97f8e19a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e77c: 52800028     	mov	w8, #0x1                // =1
 2b9e780: 3922f6a8     	strb	w8, [x21, #0x8bd]
 2b9e784: f94002c0     	ldr	x0, [x22]
 2b9e788: 97f8e23c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9e78c: f9400281     	ldr	x1, [x20]
 2b9e790: aa0003f4     	mov	x20, x0
 2b9e794: 9473346b     	bl	0x486b940 <__start_il2cpp+0x1da332c>
 2b9e798: aa1303e0     	mov	x0, x19
 2b9e79c: aa1403e1     	mov	x1, x20
 2b9e7a0: f8048c14     	str	x20, [x0, #0x48]!
 2b9e7a4: 97f8e17a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9e7a8: aa1303e0     	mov	x0, x19
 2b9e7ac: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9e7b0: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9e7b4: aa1f03e1     	mov	x1, xzr
 2b9e7b8: f84307fe     	ldr	x30, [sp], #0x30
 2b9e7bc: 1496c4e3     	b	0x514fb48 <__start_il2cpp+0x2687534>

# BoardHintChecker :: System.Boolean <IterateOverHintCombinations>b__19_0(System.Collections.Generic.KeyValuePair`2<Common.Collections.Pair`2<System.Int32, System.Int32>, BoardHintItemGroup> item)
# VA 0x2b9e7c0 .. 0x2b9e84c (next mapped method entry)
 2b9e7c0: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b9e7c4: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b9e7c8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9e7cc: 9001dbb6     	adrp	x22, 0x6712000
 2b9e7d0: aa0203f4     	mov	x20, x2
 2b9e7d4: aa0103f3     	mov	x19, x1
 2b9e7d8: 3962fac8     	ldrb	w8, [x22, #0x8be]
 2b9e7dc: aa0003f5     	mov	x21, x0
 2b9e7e0: 37000128     	tbnz	w8, #0x0, 0x2b9e804 <__start_il2cpp+0xd61f0>
 2b9e7e4: f001bac0     	adrp	x0, 0x62f9000
 2b9e7e8: f9479400     	ldr	x0, [x0, #0xf28]
 2b9e7ec: 97f8e17d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e7f0: f001bac0     	adrp	x0, 0x62f9000
 2b9e7f4: f9477000     	ldr	x0, [x0, #0xee0]
 2b9e7f8: 97f8e17a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e7fc: 52800028     	mov	w8, #0x1                // =1
 2b9e800: 3922fac8     	strb	w8, [x22, #0x8be]
 2b9e804: b4000174     	cbz	x20, 0x2b9e830 <__start_il2cpp+0xd621c>
 2b9e808: aa1403e0     	mov	x0, x20
 2b9e80c: 94000010     	bl	0x2b9e84c <__start_il2cpp+0xd6238>
 2b9e810: 36000100     	tbz	w0, #0x0, 0x2b9e830 <__start_il2cpp+0xd621c>
 2b9e814: f94012a0     	ldr	x0, [x21, #0x20]
 2b9e818: b4000180     	cbz	x0, 0x2b9e848 <__start_il2cpp+0xd6234>
 2b9e81c: aa1303e1     	mov	x1, x19
 2b9e820: aa1f03e2     	mov	x2, xzr
 2b9e824: 94021172     	bl	0x2c22dec <__start_il2cpp+0x15a7d8>
 2b9e828: 52000008     	eor	w8, w0, #0x1
 2b9e82c: 14000002     	b	0x2b9e834 <__start_il2cpp+0xd6220>
 2b9e830: 2a1f03e8     	mov	w8, wzr
 2b9e834: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9e838: 12000100     	and	w0, w8, #0x1
 2b9e83c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9e840: f84307fe     	ldr	x30, [sp], #0x30
 2b9e844: d65f03c0     	ret
 2b9e848: 97f8e210     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardHintChecker :: System.Boolean <IterateOverHintCombinations>b__19_1(System.Collections.Generic.KeyValuePair`2<Common.Collections.Pair`2<System.Int32, System.Int32>, BoardHintItemGroup> item)
# VA 0x2b9e8b8 .. 0x2b9e944 (next mapped method entry)
 2b9e8b8: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b9e8bc: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b9e8c0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9e8c4: 9001dbb6     	adrp	x22, 0x6712000
 2b9e8c8: aa0203f4     	mov	x20, x2
 2b9e8cc: aa0103f3     	mov	x19, x1
 2b9e8d0: 3962fec8     	ldrb	w8, [x22, #0x8bf]
 2b9e8d4: aa0003f5     	mov	x21, x0
 2b9e8d8: 37000128     	tbnz	w8, #0x0, 0x2b9e8fc <__start_il2cpp+0xd62e8>
 2b9e8dc: f001bac0     	adrp	x0, 0x62f9000
 2b9e8e0: f9479400     	ldr	x0, [x0, #0xf28]
 2b9e8e4: 97f8e13f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e8e8: f001bac0     	adrp	x0, 0x62f9000
 2b9e8ec: f9477000     	ldr	x0, [x0, #0xee0]
 2b9e8f0: 97f8e13c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e8f4: 52800028     	mov	w8, #0x1                // =1
 2b9e8f8: 3922fec8     	strb	w8, [x22, #0x8bf]
 2b9e8fc: b4000174     	cbz	x20, 0x2b9e928 <__start_il2cpp+0xd6314>
 2b9e900: aa1403e0     	mov	x0, x20
 2b9e904: 94000010     	bl	0x2b9e944 <__start_il2cpp+0xd6330>
 2b9e908: 36000100     	tbz	w0, #0x0, 0x2b9e928 <__start_il2cpp+0xd6314>
 2b9e90c: f94012a0     	ldr	x0, [x21, #0x20]
 2b9e910: b4000180     	cbz	x0, 0x2b9e940 <__start_il2cpp+0xd632c>
 2b9e914: aa1303e1     	mov	x1, x19
 2b9e918: aa1f03e2     	mov	x2, xzr
 2b9e91c: 94021134     	bl	0x2c22dec <__start_il2cpp+0x15a7d8>
 2b9e920: 52000008     	eor	w8, w0, #0x1
 2b9e924: 14000002     	b	0x2b9e92c <__start_il2cpp+0xd6318>
 2b9e928: 2a1f03e8     	mov	w8, wzr
 2b9e92c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9e930: 12000100     	and	w0, w8, #0x1
 2b9e934: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9e938: f84307fe     	ldr	x30, [sp], #0x30
 2b9e93c: d65f03c0     	ret
 2b9e940: 97f8e1d2     	bl	0x29d7088 <mono_class_get_checked+0x970>
