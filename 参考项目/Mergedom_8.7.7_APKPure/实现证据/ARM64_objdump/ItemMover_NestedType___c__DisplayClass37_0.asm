
# ItemMover+__c__DisplayClass37_0 :: System.Void .ctor()
# VA 0x2c069a8 .. 0x2c069b0 (next mapped method entry)
 2c069a8: aa1f03e1     	mov	x1, xzr
 2c069ac: 14952467     	b	0x514fb48 <__start_il2cpp+0x2687534>

# ItemMover+__c__DisplayClass37_0 :: System.Void <MoveItemToBoardSlot>b__0()
# VA 0x2c06f84 .. 0x2c07114 (next mapped method entry)
 2c06f84: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c06f88: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c06f8c: 9001d874     	adrp	x20, 0x6712000
 2c06f90: aa0003f3     	mov	x19, x0
 2c06f94: 396ed688     	ldrb	w8, [x20, #0xbb5]
 2c06f98: 37000188     	tbnz	w8, #0x0, 0x2c06fc8 <__start_il2cpp+0x13e9b4>
 2c06f9c: d001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06fa0: f9478c00     	ldr	x0, [x0, #0xf18]
 2c06fa4: 97f73f8f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06fa8: d001b7a0     	adrp	x0, 0x62fc000
 2c06fac: f9478000     	ldr	x0, [x0, #0xf00]
 2c06fb0: 97f73f8c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06fb4: d001b7a0     	adrp	x0, 0x62fc000
 2c06fb8: f9434400     	ldr	x0, [x0, #0x688]
 2c06fbc: 97f73f89     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06fc0: 52800028     	mov	w8, #0x1                // =1
 2c06fc4: 392ed688     	strb	w8, [x20, #0xbb5]
 2c06fc8: f9400a68     	ldr	x8, [x19, #0x10]
 2c06fcc: f90007ff     	str	xzr, [sp, #0x8]
 2c06fd0: b4000a08     	cbz	x8, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c06fd4: f9400e69     	ldr	x9, [x19, #0x18]
 2c06fd8: b40009c9     	cbz	x9, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c06fdc: f9403100     	ldr	x0, [x8, #0x60]
 2c06fe0: b4000980     	cbz	x0, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c06fe4: b9402921     	ldr	w1, [x9, #0x28]
 2c06fe8: aa1f03e2     	mov	x2, xzr
 2c06fec: 94010547     	bl	0x2c48508 <__start_il2cpp+0x17fef4>
 2c06ff0: f9400e69     	ldr	x9, [x19, #0x18]
 2c06ff4: b40008e9     	cbz	x9, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c06ff8: f9400a68     	ldr	x8, [x19, #0x10]
 2c06ffc: 5280002a     	mov	w10, #0x1               // =1
 2c07000: 3900b12a     	strb	w10, [x9, #0x2c]
 2c07004: b4000868     	cbz	x8, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c07008: f9401269     	ldr	x9, [x19, #0x20]
 2c0700c: b4000829     	cbz	x9, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c07010: f9403100     	ldr	x0, [x8, #0x60]
 2c07014: b40007e0     	cbz	x0, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c07018: f9403121     	ldr	x1, [x9, #0x60]
 2c0701c: aa1f03e2     	mov	x2, xzr
 2c07020: 9401055c     	bl	0x2c48590 <__start_il2cpp+0x17ff7c>
 2c07024: f9400a68     	ldr	x8, [x19, #0x10]
 2c07028: b4000748     	cbz	x8, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c0702c: b001b749     	adrp	x9, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c07030: f9478d29     	ldr	x9, [x9, #0xf18]
 2c07034: f9404114     	ldr	x20, [x8, #0x80]
 2c07038: f9400120     	ldr	x0, [x9]
 2c0703c: b940e409     	ldr	w9, [x0, #0xe4]
 2c07040: 35000049     	cbnz	w9, 0x2c07048 <__start_il2cpp+0x13ea34>
 2c07044: 97f73fc6     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c07048: aa1403e0     	mov	x0, x20
 2c0704c: aa1f03e1     	mov	x1, xzr
 2c07050: 94bd0d7d     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c07054: 360003c0     	tbz	w0, #0x0, 0x2c070cc <__start_il2cpp+0x13eab8>
 2c07058: f9400a68     	ldr	x8, [x19, #0x10]
 2c0705c: b40005a8     	cbz	x8, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c07060: f9404108     	ldr	x8, [x8, #0x80]
 2c07064: b4000568     	cbz	x8, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c07068: f9401500     	ldr	x0, [x8, #0x28]
 2c0706c: b4000520     	cbz	x0, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c07070: 52800021     	mov	w1, #0x1                // =1
 2c07074: aa1f03e2     	mov	x2, xzr
 2c07078: 94c8b7d2     	bl	0x5e34fc0 <__start_il2cpp+0x336c9ac>
 2c0707c: f9400a68     	ldr	x8, [x19, #0x10]
 2c07080: b4000488     	cbz	x8, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c07084: f9404108     	ldr	x8, [x8, #0x80]
 2c07088: b4000448     	cbz	x8, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c0708c: f9401500     	ldr	x0, [x8, #0x28]
 2c07090: b4000400     	cbz	x0, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c07094: b001b7a8     	adrp	x8, 0x62fc000
 2c07098: aa1f03e2     	mov	x2, xzr
 2c0709c: f9434508     	ldr	x8, [x8, #0x688]
 2c070a0: f9400101     	ldr	x1, [x8]
 2c070a4: 94c8b9f9     	bl	0x5e35888 <__start_il2cpp+0x336d274>
 2c070a8: f9400a68     	ldr	x8, [x19, #0x10]
 2c070ac: b4000328     	cbz	x8, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c070b0: f9404108     	ldr	x8, [x8, #0x80]
 2c070b4: b40002e8     	cbz	x8, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c070b8: f9401500     	ldr	x0, [x8, #0x28]
 2c070bc: b40002a0     	cbz	x0, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c070c0: 52800041     	mov	w1, #0x2                // =2
 2c070c4: aa1f03e2     	mov	x2, xzr
 2c070c8: 94c8b81c     	bl	0x5e35138 <__start_il2cpp+0x336cb24>
 2c070cc: f9401268     	ldr	x8, [x19, #0x20]
 2c070d0: b4000208     	cbz	x8, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c070d4: f9402d01     	ldr	x1, [x8, #0x58]
 2c070d8: f9401913     	ldr	x19, [x8, #0x30]
 2c070dc: 910023e0     	add	x0, sp, #0x8
 2c070e0: f90007e1     	str	x1, [sp, #0x8]
 2c070e4: 97f73f2a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c070e8: b4000153     	cbz	x19, 0x2c07110 <__start_il2cpp+0x13eafc>
 2c070ec: b001b7a8     	adrp	x8, 0x62fc000
 2c070f0: aa1303e0     	mov	x0, x19
 2c070f4: f9478108     	ldr	x8, [x8, #0xf00]
 2c070f8: f94007e1     	ldr	x1, [sp, #0x8]
 2c070fc: f9400102     	ldr	x2, [x8]
 2c07100: 9428712d     	bl	0x36235b4 <__start_il2cpp+0xb5afa0>
 2c07104: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c07108: f84207fe     	ldr	x30, [sp], #0x20
 2c0710c: d65f03c0     	ret
 2c07110: 97f73fde     	bl	0x29d7088 <mono_class_get_checked+0x970>
