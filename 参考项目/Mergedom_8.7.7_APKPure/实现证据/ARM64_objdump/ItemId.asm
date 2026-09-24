
# ItemId :: System.Int32 GetAdjustedIdIncludeBoosters(System.Int32 realId)
# VA 0x2bf1564 .. 0x2bf15fc (next mapped method entry)
 2bf1564: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf1568: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf156c: b001d915     	adrp	x21, 0x6712000
 2bf1570: b001b854     	adrp	x20, 0x62fa000
 2bf1574: 2a0003f3     	mov	w19, w0
 2bf1578: 396e1ea8     	ldrb	w8, [x21, #0xb87]
 2bf157c: f9405294     	ldr	x20, [x20, #0xa0]
 2bf1580: 370000c8     	tbnz	w8, #0x0, 0x2bf1598 <__start_il2cpp+0x128f84>
 2bf1584: b001b840     	adrp	x0, 0x62fa000
 2bf1588: f9405000     	ldr	x0, [x0, #0xa0]
 2bf158c: 97f79615     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf1590: 52800028     	mov	w8, #0x1                // =1
 2bf1594: 392e1ea8     	strb	w8, [x21, #0xb87]
 2bf1598: f9400280     	ldr	x0, [x20]
 2bf159c: b940e408     	ldr	w8, [x0, #0xe4]
 2bf15a0: 35000048     	cbnz	w8, 0x2bf15a8 <__start_il2cpp+0x128f94>
 2bf15a4: 97f7966e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf15a8: 2a1303e0     	mov	w0, w19
 2bf15ac: 94003116     	bl	0x2bfda04 <__start_il2cpp+0x1353f0>
 2bf15b0: 370000e0     	tbnz	w0, #0x0, 0x2bf15cc <__start_il2cpp+0x128fb8>
 2bf15b4: f9400280     	ldr	x0, [x20]
 2bf15b8: b940e408     	ldr	w8, [x0, #0xe4]
 2bf15bc: 35000048     	cbnz	w8, 0x2bf15c4 <__start_il2cpp+0x128fb0>
 2bf15c0: 97f79667     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf15c4: 7103267f     	cmp	w19, #0xc9
 2bf15c8: 540000a1     	b.ne	0x2bf15dc <__start_il2cpp+0x128fc8>
 2bf15cc: 2a1303e0     	mov	w0, w19
 2bf15d0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf15d4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf15d8: d65f03c0     	ret
 2bf15dc: f9400280     	ldr	x0, [x20]
 2bf15e0: b940e408     	ldr	w8, [x0, #0xe4]
 2bf15e4: 35000048     	cbnz	w8, 0x2bf15ec <__start_il2cpp+0x128fd8>
 2bf15e8: 97f7965d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf15ec: 2a1303e0     	mov	w0, w19
 2bf15f0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf15f4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf15f8: 14002ea9     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_ChestTutorial()
# VA 0x2bf2fc8 .. 0x2bf3018 (next mapped method entry)
 2bf2fc8: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf2fcc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf2fd0: 9001d913     	adrp	x19, 0x6712000
 2bf2fd4: 9001b854     	adrp	x20, 0x62fa000
 2bf2fd8: 396de268     	ldrb	w8, [x19, #0xb78]
 2bf2fdc: f9405294     	ldr	x20, [x20, #0xa0]
 2bf2fe0: 370000c8     	tbnz	w8, #0x0, 0x2bf2ff8 <__start_il2cpp+0x12a9e4>
 2bf2fe4: 9001b840     	adrp	x0, 0x62fa000
 2bf2fe8: f9405000     	ldr	x0, [x0, #0xa0]
 2bf2fec: 97f78f7d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2ff0: 52800028     	mov	w8, #0x1                // =1
 2bf2ff4: 392de268     	strb	w8, [x19, #0xb78]
 2bf2ff8: f9400280     	ldr	x0, [x20]
 2bf2ffc: b940e408     	ldr	w8, [x0, #0xe4]
 2bf3000: 35000048     	cbnz	w8, 0x2bf3008 <__start_il2cpp+0x12a9f4>
 2bf3004: 97f78fd6     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf3008: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf300c: 12800760     	mov	w0, #-0x3c              // =-60
 2bf3010: f84207fe     	ldr	x30, [sp], #0x20
 2bf3014: 14002822     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Boolean IsTutorialItem(System.Int32 itemId)
# VA 0x2bf3b84 .. 0x2bf3b8c (next mapped method entry)
 2bf3b84: 531f7c00     	lsr	w0, w0, #31
 2bf3b88: d65f03c0     	ret

# ItemId :: System.Boolean IsSame(System.Int32 firstId, System.Int32 secondId)
# VA 0x2bf5754 .. 0x2bf57f4 (next mapped method entry)
 2bf5754: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bf5758: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf575c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf5760: b001d8f5     	adrp	x21, 0x6712000
 2bf5764: 2a0103f3     	mov	w19, w1
 2bf5768: 2a0003f4     	mov	w20, w0
 2bf576c: 395c46a8     	ldrb	w8, [x21, #0x711]
 2bf5770: 350000c8     	cbnz	w8, 0x2bf5788 <__start_il2cpp+0x12d174>
 2bf5774: 9001b7e0     	adrp	x0, 0x62f1000
 2bf5778: f941fc00     	ldr	x0, [x0, #0x3f8]
 2bf577c: 97f78599     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5780: 52800028     	mov	w8, #0x1                // =1
 2bf5784: 391c46a8     	strb	w8, [x21, #0x711]
 2bf5788: 9001b7f6     	adrp	x22, 0x62f1000
 2bf578c: f941fed6     	ldr	x22, [x22, #0x3f8]
 2bf5790: f94002c0     	ldr	x0, [x22]
 2bf5794: b940e408     	ldr	w8, [x0, #0xe4]
 2bf5798: 35000128     	cbnz	w8, 0x2bf57bc <__start_il2cpp+0x12d1a8>
 2bf579c: 97f785f0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf57a0: 395c46a8     	ldrb	w8, [x21, #0x711]
 2bf57a4: 350000c8     	cbnz	w8, 0x2bf57bc <__start_il2cpp+0x12d1a8>
 2bf57a8: 9001b7e0     	adrp	x0, 0x62f1000
 2bf57ac: f941fc00     	ldr	x0, [x0, #0x3f8]
 2bf57b0: 97f7858c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf57b4: 52800028     	mov	w8, #0x1                // =1
 2bf57b8: 391c46a8     	strb	w8, [x21, #0x711]
 2bf57bc: f94002c0     	ldr	x0, [x22]
 2bf57c0: b940e408     	ldr	w8, [x0, #0xe4]
 2bf57c4: 35000048     	cbnz	w8, 0x2bf57cc <__start_il2cpp+0x12d1b8>
 2bf57c8: 97f785e5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf57cc: 7100029f     	cmp	w20, #0x0
 2bf57d0: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf57d4: 5a945688     	cneg	w8, w20, mi
 2bf57d8: 7100027f     	cmp	w19, #0x0
 2bf57dc: 5a935669     	cneg	w9, w19, mi
 2bf57e0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf57e4: 6b09011f     	cmp	w8, w9
 2bf57e8: 1a9f17e0     	cset	w0, eq
 2bf57ec: f84307fe     	ldr	x30, [sp], #0x30
 2bf57f0: d65f03c0     	ret

# ItemId :: System.Boolean IsChest(System.Int32 itemId)
# VA 0x2bf7df4 .. 0x2bf7ef8 (next mapped method entry)
 2bf7df4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf7df8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf7dfc: f001d8d5     	adrp	x21, 0x6712000
 2bf7e00: f001b814     	adrp	x20, 0x62fa000
 2bf7e04: 2a0003f3     	mov	w19, w0
 2bf7e08: 396e2ea8     	ldrb	w8, [x21, #0xb8b]
 2bf7e0c: f9405294     	ldr	x20, [x20, #0xa0]
 2bf7e10: 370000c8     	tbnz	w8, #0x0, 0x2bf7e28 <__start_il2cpp+0x12f814>
 2bf7e14: f001b800     	adrp	x0, 0x62fa000
 2bf7e18: f9405000     	ldr	x0, [x0, #0xa0]
 2bf7e1c: 97f77bf1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7e20: 52800028     	mov	w8, #0x1                // =1
 2bf7e24: 392e2ea8     	strb	w8, [x21, #0xb8b]
 2bf7e28: f9400280     	ldr	x0, [x20]
 2bf7e2c: b940e408     	ldr	w8, [x0, #0xe4]
 2bf7e30: 35000048     	cbnz	w8, 0x2bf7e38 <__start_il2cpp+0x12f824>
 2bf7e34: 97f77c4a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7e38: 940015ce     	bl	0x2bfd570 <__start_il2cpp+0x134f5c>
 2bf7e3c: 6b13001f     	cmp	w0, w19
 2bf7e40: 54000100     	b.eq	0x2bf7e60 <__start_il2cpp+0x12f84c>
 2bf7e44: f9400280     	ldr	x0, [x20]
 2bf7e48: b940e408     	ldr	w8, [x0, #0xe4]
 2bf7e4c: 35000048     	cbnz	w8, 0x2bf7e54 <__start_il2cpp+0x12f840>
 2bf7e50: 97f77c43     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7e54: 97ffec5d     	bl	0x2bf2fc8 <__start_il2cpp+0x12a9b4>
 2bf7e58: 6b13001f     	cmp	w0, w19
 2bf7e5c: 540000a1     	b.ne	0x2bf7e70 <__start_il2cpp+0x12f85c>
 2bf7e60: 52800020     	mov	w0, #0x1                // =1
 2bf7e64: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf7e68: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf7e6c: d65f03c0     	ret
 2bf7e70: 3110ae7f     	cmn	w19, #0x42b
 2bf7e74: 52800020     	mov	w0, #0x1                // =1
 2bf7e78: 54ffff60     	b.eq	0x2bf7e64 <__start_il2cpp+0x12f850>
 2bf7e7c: 7110ae7f     	cmp	w19, #0x42b
 2bf7e80: 54ffff20     	b.eq	0x2bf7e64 <__start_il2cpp+0x12f850>
 2bf7e84: f9400280     	ldr	x0, [x20]
 2bf7e88: b940e408     	ldr	w8, [x0, #0xe4]
 2bf7e8c: 35000048     	cbnz	w8, 0x2bf7e94 <__start_il2cpp+0x12f880>
 2bf7e90: 97f77c33     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7e94: 940015df     	bl	0x2bfd610 <__start_il2cpp+0x134ffc>
 2bf7e98: 6b13001f     	cmp	w0, w19
 2bf7e9c: 54fffe20     	b.eq	0x2bf7e60 <__start_il2cpp+0x12f84c>
 2bf7ea0: f9400280     	ldr	x0, [x20]
 2bf7ea4: b940e408     	ldr	w8, [x0, #0xe4]
 2bf7ea8: 35000048     	cbnz	w8, 0x2bf7eb0 <__start_il2cpp+0x12f89c>
 2bf7eac: 97f77c2c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7eb0: 940015ec     	bl	0x2bfd660 <__start_il2cpp+0x13504c>
 2bf7eb4: 6b13001f     	cmp	w0, w19
 2bf7eb8: 54fffd40     	b.eq	0x2bf7e60 <__start_il2cpp+0x12f84c>
 2bf7ebc: f9400280     	ldr	x0, [x20]
 2bf7ec0: b940e408     	ldr	w8, [x0, #0xe4]
 2bf7ec4: 35000048     	cbnz	w8, 0x2bf7ecc <__start_il2cpp+0x12f8b8>
 2bf7ec8: 97f77c25     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7ecc: 940015f9     	bl	0x2bfd6b0 <__start_il2cpp+0x13509c>
 2bf7ed0: 6b13001f     	cmp	w0, w19
 2bf7ed4: 54fffc60     	b.eq	0x2bf7e60 <__start_il2cpp+0x12f84c>
 2bf7ed8: f9400280     	ldr	x0, [x20]
 2bf7edc: b940e408     	ldr	w8, [x0, #0xe4]
 2bf7ee0: 35000048     	cbnz	w8, 0x2bf7ee8 <__start_il2cpp+0x12f8d4>
 2bf7ee4: 97f77c1e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7ee8: 94001606     	bl	0x2bfd700 <__start_il2cpp+0x1350ec>
 2bf7eec: 6b13001f     	cmp	w0, w19
 2bf7ef0: 1a9f17e0     	cset	w0, eq
 2bf7ef4: 17ffffdc     	b	0x2bf7e64 <__start_il2cpp+0x12f850>

# ItemId :: System.Int32 get_Energy()
# VA 0x2bf8720 .. 0x2bf8770 (next mapped method entry)
 2bf8720: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf8724: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf8728: d001d8d3     	adrp	x19, 0x6712000
 2bf872c: d001b814     	adrp	x20, 0x62fa000
 2bf8730: 396dfe68     	ldrb	w8, [x19, #0xb7f]
 2bf8734: f9405294     	ldr	x20, [x20, #0xa0]
 2bf8738: 370000c8     	tbnz	w8, #0x0, 0x2bf8750 <__start_il2cpp+0x13013c>
 2bf873c: d001b800     	adrp	x0, 0x62fa000
 2bf8740: f9405000     	ldr	x0, [x0, #0xa0]
 2bf8744: 97f779a7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf8748: 52800028     	mov	w8, #0x1                // =1
 2bf874c: 392dfe68     	strb	w8, [x19, #0xb7f]
 2bf8750: f9400280     	ldr	x0, [x20]
 2bf8754: b940e408     	ldr	w8, [x0, #0xe4]
 2bf8758: 35000048     	cbnz	w8, 0x2bf8760 <__start_il2cpp+0x13014c>
 2bf875c: 97f77a00     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf8760: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf8764: 52800080     	mov	w0, #0x4                // =4
 2bf8768: f84207fe     	ldr	x30, [sp], #0x20
 2bf876c: 1400124c     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_CleaningTools()
# VA 0x2bfd04c .. 0x2bfd09c (next mapped method entry)
 2bfd04c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd050: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd054: b001d8b3     	adrp	x19, 0x6712000
 2bfd058: b001b7f4     	adrp	x20, 0x62fa000
 2bfd05c: 396da268     	ldrb	w8, [x19, #0xb68]
 2bfd060: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd064: 370000c8     	tbnz	w8, #0x0, 0x2bfd07c <__start_il2cpp+0x134a68>
 2bfd068: b001b7e0     	adrp	x0, 0x62fa000
 2bfd06c: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd070: 97f7675c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd074: 52800028     	mov	w8, #0x1                // =1
 2bfd078: 392da268     	strb	w8, [x19, #0xb68]
 2bfd07c: f9400280     	ldr	x0, [x20]
 2bfd080: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd084: 35000048     	cbnz	w8, 0x2bfd08c <__start_il2cpp+0x134a78>
 2bfd088: 97f767b5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd08c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd090: 52800160     	mov	w0, #0xb                // =11
 2bfd094: f84207fe     	ldr	x30, [sp], #0x20
 2bfd098: 14000001     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 GetAdjustedId(System.Int32 realId)
# VA 0x2bfd09c .. 0x2bfd110 (next mapped method entry)
 2bfd09c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd0a0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd0a4: b001d8b4     	adrp	x20, 0x6712000
 2bfd0a8: 2a0003f3     	mov	w19, w0
 2bfd0ac: 39654688     	ldrb	w8, [x20, #0x951]
 2bfd0b0: 350000c8     	cbnz	w8, 0x2bfd0c8 <__start_il2cpp+0x134ab4>
 2bfd0b4: b001b7e0     	adrp	x0, 0x62fa000
 2bfd0b8: f9445400     	ldr	x0, [x0, #0x8a8]
 2bfd0bc: 97f76749     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd0c0: 52800028     	mov	w8, #0x1                // =1
 2bfd0c4: 39254688     	strb	w8, [x20, #0x951]
 2bfd0c8: b001b7e8     	adrp	x8, 0x62fa000
 2bfd0cc: f9445508     	ldr	x8, [x8, #0x8a8]
 2bfd0d0: f9400108     	ldr	x8, [x8]
 2bfd0d4: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfd0d8: b9400108     	ldr	w8, [x8]
 2bfd0dc: 34000128     	cbz	w8, 0x2bfd100 <__start_il2cpp+0x134aec>
 2bfd0e0: 710fa27f     	cmp	w19, #0x3e8
 2bfd0e4: 540000ec     	b.gt	0x2bfd100 <__start_il2cpp+0x134aec>
 2bfd0e8: 7100051f     	cmp	w8, #0x1
 2bfd0ec: 540000a0     	b.eq	0x2bfd100 <__start_il2cpp+0x134aec>
 2bfd0f0: 7100027f     	cmp	w19, #0x0
 2bfd0f4: 52807d08     	mov	w8, #0x3e8              // =1000
 2bfd0f8: 5a88a508     	cneg	w8, w8, lt
 2bfd0fc: 0b130113     	add	w19, w8, w19
 2bfd100: 2a1303e0     	mov	w0, w19
 2bfd104: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd108: f84207fe     	ldr	x30, [sp], #0x20
 2bfd10c: d65f03c0     	ret

# ItemId :: System.Int32 get_SewingMachineTutorial()
# VA 0x2bfd110 .. 0x2bfd160 (next mapped method entry)
 2bfd110: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd114: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd118: b001d8b3     	adrp	x19, 0x6712000
 2bfd11c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd120: 396da668     	ldrb	w8, [x19, #0xb69]
 2bfd124: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd128: 370000c8     	tbnz	w8, #0x0, 0x2bfd140 <__start_il2cpp+0x134b2c>
 2bfd12c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd130: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd134: 97f7672b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd138: 52800028     	mov	w8, #0x1                // =1
 2bfd13c: 392da668     	strb	w8, [x19, #0xb69]
 2bfd140: f9400280     	ldr	x0, [x20]
 2bfd144: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd148: 35000048     	cbnz	w8, 0x2bfd150 <__start_il2cpp+0x134b3c>
 2bfd14c: 97f76784     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd150: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd154: 12800120     	mov	w0, #-0xa               // =-10
 2bfd158: f84207fe     	ldr	x30, [sp], #0x20
 2bfd15c: 17ffffd0     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_SewingMachine()
# VA 0x2bfd160 .. 0x2bfd1b0 (next mapped method entry)
 2bfd160: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd164: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd168: b001d8b3     	adrp	x19, 0x6712000
 2bfd16c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd170: 396daa68     	ldrb	w8, [x19, #0xb6a]
 2bfd174: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd178: 370000c8     	tbnz	w8, #0x0, 0x2bfd190 <__start_il2cpp+0x134b7c>
 2bfd17c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd180: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd184: 97f76717     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd188: 52800028     	mov	w8, #0x1                // =1
 2bfd18c: 392daa68     	strb	w8, [x19, #0xb6a]
 2bfd190: f9400280     	ldr	x0, [x20]
 2bfd194: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd198: 35000048     	cbnz	w8, 0x2bfd1a0 <__start_il2cpp+0x134b8c>
 2bfd19c: 97f76770     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd1a0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd1a4: 52800140     	mov	w0, #0xa                // =10
 2bfd1a8: f84207fe     	ldr	x30, [sp], #0x20
 2bfd1ac: 17ffffbc     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_KitchenCabinet()
# VA 0x2bfd1b0 .. 0x2bfd200 (next mapped method entry)
 2bfd1b0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd1b4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd1b8: b001d8b3     	adrp	x19, 0x6712000
 2bfd1bc: b001b7f4     	adrp	x20, 0x62fa000
 2bfd1c0: 396dae68     	ldrb	w8, [x19, #0xb6b]
 2bfd1c4: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd1c8: 370000c8     	tbnz	w8, #0x0, 0x2bfd1e0 <__start_il2cpp+0x134bcc>
 2bfd1cc: b001b7e0     	adrp	x0, 0x62fa000
 2bfd1d0: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd1d4: 97f76703     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd1d8: 52800028     	mov	w8, #0x1                // =1
 2bfd1dc: 392dae68     	strb	w8, [x19, #0xb6b]
 2bfd1e0: f9400280     	ldr	x0, [x20]
 2bfd1e4: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd1e8: 35000048     	cbnz	w8, 0x2bfd1f0 <__start_il2cpp+0x134bdc>
 2bfd1ec: 97f7675c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd1f0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd1f4: 52800280     	mov	w0, #0x14               // =20
 2bfd1f8: f84207fe     	ldr	x30, [sp], #0x20
 2bfd1fc: 17ffffa8     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_ToolBox()
# VA 0x2bfd200 .. 0x2bfd250 (next mapped method entry)
 2bfd200: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd204: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd208: b001d8b3     	adrp	x19, 0x6712000
 2bfd20c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd210: 396db268     	ldrb	w8, [x19, #0xb6c]
 2bfd214: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd218: 370000c8     	tbnz	w8, #0x0, 0x2bfd230 <__start_il2cpp+0x134c1c>
 2bfd21c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd220: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd224: 97f766ef     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd228: 52800028     	mov	w8, #0x1                // =1
 2bfd22c: 392db268     	strb	w8, [x19, #0xb6c]
 2bfd230: f9400280     	ldr	x0, [x20]
 2bfd234: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd238: 35000048     	cbnz	w8, 0x2bfd240 <__start_il2cpp+0x134c2c>
 2bfd23c: 97f76748     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd240: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd244: 528003c0     	mov	w0, #0x1e               // =30
 2bfd248: f84207fe     	ldr	x30, [sp], #0x20
 2bfd24c: 17ffff94     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_ToyBox()
# VA 0x2bfd250 .. 0x2bfd2a0 (next mapped method entry)
 2bfd250: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd254: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd258: b001d8b3     	adrp	x19, 0x6712000
 2bfd25c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd260: 396db668     	ldrb	w8, [x19, #0xb6d]
 2bfd264: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd268: 370000c8     	tbnz	w8, #0x0, 0x2bfd280 <__start_il2cpp+0x134c6c>
 2bfd26c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd270: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd274: 97f766db     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd278: 52800028     	mov	w8, #0x1                // =1
 2bfd27c: 392db668     	strb	w8, [x19, #0xb6d]
 2bfd280: f9400280     	ldr	x0, [x20]
 2bfd284: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd288: 35000048     	cbnz	w8, 0x2bfd290 <__start_il2cpp+0x134c7c>
 2bfd28c: 97f76734     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd290: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd294: 52800500     	mov	w0, #0x28               // =40
 2bfd298: f84207fe     	ldr	x30, [sp], #0x20
 2bfd29c: 17ffff80     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_Tree()
# VA 0x2bfd2a0 .. 0x2bfd2f0 (next mapped method entry)
 2bfd2a0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd2a4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd2a8: b001d8b3     	adrp	x19, 0x6712000
 2bfd2ac: b001b7f4     	adrp	x20, 0x62fa000
 2bfd2b0: 396dba68     	ldrb	w8, [x19, #0xb6e]
 2bfd2b4: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd2b8: 370000c8     	tbnz	w8, #0x0, 0x2bfd2d0 <__start_il2cpp+0x134cbc>
 2bfd2bc: b001b7e0     	adrp	x0, 0x62fa000
 2bfd2c0: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd2c4: 97f766c7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd2c8: 52800028     	mov	w8, #0x1                // =1
 2bfd2cc: 392dba68     	strb	w8, [x19, #0xb6e]
 2bfd2d0: f9400280     	ldr	x0, [x20]
 2bfd2d4: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd2d8: 35000048     	cbnz	w8, 0x2bfd2e0 <__start_il2cpp+0x134ccc>
 2bfd2dc: 97f76720     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd2e0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd2e4: 52800640     	mov	w0, #0x32               // =50
 2bfd2e8: f84207fe     	ldr	x30, [sp], #0x20
 2bfd2ec: 17ffff6c     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_CoinTree()
# VA 0x2bfd2f0 .. 0x2bfd340 (next mapped method entry)
 2bfd2f0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd2f4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd2f8: b001d8b3     	adrp	x19, 0x6712000
 2bfd2fc: b001b7f4     	adrp	x20, 0x62fa000
 2bfd300: 396dbe68     	ldrb	w8, [x19, #0xb6f]
 2bfd304: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd308: 370000c8     	tbnz	w8, #0x0, 0x2bfd320 <__start_il2cpp+0x134d0c>
 2bfd30c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd310: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd314: 97f766b3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd318: 52800028     	mov	w8, #0x1                // =1
 2bfd31c: 392dbe68     	strb	w8, [x19, #0xb6f]
 2bfd320: f9400280     	ldr	x0, [x20]
 2bfd324: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd328: 35000048     	cbnz	w8, 0x2bfd330 <__start_il2cpp+0x134d1c>
 2bfd32c: 97f7670c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd330: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd334: 52800340     	mov	w0, #0x1a               // =26
 2bfd338: f84207fe     	ldr	x30, [sp], #0x20
 2bfd33c: 17ffff58     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_Mixer()
# VA 0x2bfd340 .. 0x2bfd390 (next mapped method entry)
 2bfd340: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd344: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd348: b001d8b3     	adrp	x19, 0x6712000
 2bfd34c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd350: 396dc268     	ldrb	w8, [x19, #0xb70]
 2bfd354: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd358: 370000c8     	tbnz	w8, #0x0, 0x2bfd370 <__start_il2cpp+0x134d5c>
 2bfd35c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd360: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd364: 97f7669f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd368: 52800028     	mov	w8, #0x1                // =1
 2bfd36c: 392dc268     	strb	w8, [x19, #0xb70]
 2bfd370: f9400280     	ldr	x0, [x20]
 2bfd374: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd378: 35000048     	cbnz	w8, 0x2bfd380 <__start_il2cpp+0x134d6c>
 2bfd37c: 97f766f8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd380: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd384: 528002c0     	mov	w0, #0x16               // =22
 2bfd388: f84207fe     	ldr	x30, [sp], #0x20
 2bfd38c: 17ffff44     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_Soap()
# VA 0x2bfd390 .. 0x2bfd3e0 (next mapped method entry)
 2bfd390: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd394: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd398: b001d8b3     	adrp	x19, 0x6712000
 2bfd39c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd3a0: 396dc668     	ldrb	w8, [x19, #0xb71]
 2bfd3a4: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd3a8: 370000c8     	tbnz	w8, #0x0, 0x2bfd3c0 <__start_il2cpp+0x134dac>
 2bfd3ac: b001b7e0     	adrp	x0, 0x62fa000
 2bfd3b0: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd3b4: 97f7668b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd3b8: 52800028     	mov	w8, #0x1                // =1
 2bfd3bc: 392dc668     	strb	w8, [x19, #0xb71]
 2bfd3c0: f9400280     	ldr	x0, [x20]
 2bfd3c4: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd3c8: 35000048     	cbnz	w8, 0x2bfd3d0 <__start_il2cpp+0x134dbc>
 2bfd3cc: 97f766e4     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd3d0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd3d4: 52800180     	mov	w0, #0xc                // =12
 2bfd3d8: f84207fe     	ldr	x30, [sp], #0x20
 2bfd3dc: 17ffff30     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_Toaster()
# VA 0x2bfd3e0 .. 0x2bfd430 (next mapped method entry)
 2bfd3e0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd3e4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd3e8: b001d8b3     	adrp	x19, 0x6712000
 2bfd3ec: b001b7f4     	adrp	x20, 0x62fa000
 2bfd3f0: 396dca68     	ldrb	w8, [x19, #0xb72]
 2bfd3f4: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd3f8: 370000c8     	tbnz	w8, #0x0, 0x2bfd410 <__start_il2cpp+0x134dfc>
 2bfd3fc: b001b7e0     	adrp	x0, 0x62fa000
 2bfd400: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd404: 97f76677     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd408: 52800028     	mov	w8, #0x1                // =1
 2bfd40c: 392dca68     	strb	w8, [x19, #0xb72]
 2bfd410: f9400280     	ldr	x0, [x20]
 2bfd414: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd418: 35000048     	cbnz	w8, 0x2bfd420 <__start_il2cpp+0x134e0c>
 2bfd41c: 97f766d0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd420: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd424: 52800400     	mov	w0, #0x20               // =32
 2bfd428: f84207fe     	ldr	x30, [sp], #0x20
 2bfd42c: 17ffff1c     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_Sandwich()
# VA 0x2bfd430 .. 0x2bfd480 (next mapped method entry)
 2bfd430: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd434: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd438: b001d8b3     	adrp	x19, 0x6712000
 2bfd43c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd440: 396dce68     	ldrb	w8, [x19, #0xb73]
 2bfd444: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd448: 370000c8     	tbnz	w8, #0x0, 0x2bfd460 <__start_il2cpp+0x134e4c>
 2bfd44c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd450: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd454: 97f76663     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd458: 52800028     	mov	w8, #0x1                // =1
 2bfd45c: 392dce68     	strb	w8, [x19, #0xb73]
 2bfd460: f9400280     	ldr	x0, [x20]
 2bfd464: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd468: 35000048     	cbnz	w8, 0x2bfd470 <__start_il2cpp+0x134e5c>
 2bfd46c: 97f766bc     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd470: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd474: 52800420     	mov	w0, #0x21               // =33
 2bfd478: f84207fe     	ldr	x30, [sp], #0x20
 2bfd47c: 17ffff08     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_PlasmaBall()
# VA 0x2bfd480 .. 0x2bfd4d0 (next mapped method entry)
 2bfd480: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd484: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd488: b001d8b3     	adrp	x19, 0x6712000
 2bfd48c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd490: 396dd268     	ldrb	w8, [x19, #0xb74]
 2bfd494: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd498: 370000c8     	tbnz	w8, #0x0, 0x2bfd4b0 <__start_il2cpp+0x134e9c>
 2bfd49c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd4a0: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd4a4: 97f7664f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd4a8: 52800028     	mov	w8, #0x1                // =1
 2bfd4ac: 392dd268     	strb	w8, [x19, #0xb74]
 2bfd4b0: f9400280     	ldr	x0, [x20]
 2bfd4b4: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd4b8: 35000048     	cbnz	w8, 0x2bfd4c0 <__start_il2cpp+0x134eac>
 2bfd4bc: 97f766a8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd4c0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd4c4: 52800560     	mov	w0, #0x2b               // =43
 2bfd4c8: f84207fe     	ldr	x30, [sp], #0x20
 2bfd4cc: 17fffef4     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_Battery()
# VA 0x2bfd4d0 .. 0x2bfd520 (next mapped method entry)
 2bfd4d0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd4d4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd4d8: b001d8b3     	adrp	x19, 0x6712000
 2bfd4dc: b001b7f4     	adrp	x20, 0x62fa000
 2bfd4e0: 396dd668     	ldrb	w8, [x19, #0xb75]
 2bfd4e4: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd4e8: 370000c8     	tbnz	w8, #0x0, 0x2bfd500 <__start_il2cpp+0x134eec>
 2bfd4ec: b001b7e0     	adrp	x0, 0x62fa000
 2bfd4f0: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd4f4: 97f7663b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd4f8: 52800028     	mov	w8, #0x1                // =1
 2bfd4fc: 392dd668     	strb	w8, [x19, #0xb75]
 2bfd500: f9400280     	ldr	x0, [x20]
 2bfd504: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd508: 35000048     	cbnz	w8, 0x2bfd510 <__start_il2cpp+0x134efc>
 2bfd50c: 97f76694     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd510: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd514: 52800580     	mov	w0, #0x2c               // =44
 2bfd518: f84207fe     	ldr	x30, [sp], #0x20
 2bfd51c: 17fffee0     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_SafeBox()
# VA 0x2bfd520 .. 0x2bfd570 (next mapped method entry)
 2bfd520: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd524: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd528: b001d8b3     	adrp	x19, 0x6712000
 2bfd52c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd530: 396dda68     	ldrb	w8, [x19, #0xb76]
 2bfd534: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd538: 370000c8     	tbnz	w8, #0x0, 0x2bfd550 <__start_il2cpp+0x134f3c>
 2bfd53c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd540: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd544: 97f76627     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd548: 52800028     	mov	w8, #0x1                // =1
 2bfd54c: 392dda68     	strb	w8, [x19, #0xb76]
 2bfd550: f9400280     	ldr	x0, [x20]
 2bfd554: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd558: 35000048     	cbnz	w8, 0x2bfd560 <__start_il2cpp+0x134f4c>
 2bfd55c: 97f76680     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd560: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd564: 528007c0     	mov	w0, #0x3e               // =62
 2bfd568: f84207fe     	ldr	x30, [sp], #0x20
 2bfd56c: 17fffecc     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_Chest()
# VA 0x2bfd570 .. 0x2bfd5c0 (next mapped method entry)
 2bfd570: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd574: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd578: b001d8b3     	adrp	x19, 0x6712000
 2bfd57c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd580: 396dde68     	ldrb	w8, [x19, #0xb77]
 2bfd584: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd588: 370000c8     	tbnz	w8, #0x0, 0x2bfd5a0 <__start_il2cpp+0x134f8c>
 2bfd58c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd590: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd594: 97f76613     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd598: 52800028     	mov	w8, #0x1                // =1
 2bfd59c: 392dde68     	strb	w8, [x19, #0xb77]
 2bfd5a0: f9400280     	ldr	x0, [x20]
 2bfd5a4: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd5a8: 35000048     	cbnz	w8, 0x2bfd5b0 <__start_il2cpp+0x134f9c>
 2bfd5ac: 97f7666c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd5b0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd5b4: 52800780     	mov	w0, #0x3c               // =60
 2bfd5b8: f84207fe     	ldr	x30, [sp], #0x20
 2bfd5bc: 17fffeb8     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_EnergyChest()
# VA 0x2bfd5c0 .. 0x2bfd610 (next mapped method entry)
 2bfd5c0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd5c4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd5c8: b001d8b3     	adrp	x19, 0x6712000
 2bfd5cc: b001b7f4     	adrp	x20, 0x62fa000
 2bfd5d0: 396de668     	ldrb	w8, [x19, #0xb79]
 2bfd5d4: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd5d8: 370000c8     	tbnz	w8, #0x0, 0x2bfd5f0 <__start_il2cpp+0x134fdc>
 2bfd5dc: b001b7e0     	adrp	x0, 0x62fa000
 2bfd5e0: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd5e4: 97f765ff     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd5e8: 52800028     	mov	w8, #0x1                // =1
 2bfd5ec: 392de668     	strb	w8, [x19, #0xb79]
 2bfd5f0: f9400280     	ldr	x0, [x20]
 2bfd5f4: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd5f8: 35000048     	cbnz	w8, 0x2bfd600 <__start_il2cpp+0x134fec>
 2bfd5fc: 97f76658     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd600: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd604: 528007a0     	mov	w0, #0x3d               // =61
 2bfd608: f84207fe     	ldr	x30, [sp], #0x20
 2bfd60c: 17fffea4     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_ChestV2Tutorial()
# VA 0x2bfd610 .. 0x2bfd660 (next mapped method entry)
 2bfd610: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd614: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd618: b001d8b3     	adrp	x19, 0x6712000
 2bfd61c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd620: 396dea68     	ldrb	w8, [x19, #0xb7a]
 2bfd624: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd628: 370000c8     	tbnz	w8, #0x0, 0x2bfd640 <__start_il2cpp+0x13502c>
 2bfd62c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd630: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd634: 97f765eb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd638: 52800028     	mov	w8, #0x1                // =1
 2bfd63c: 392dea68     	strb	w8, [x19, #0xb7a]
 2bfd640: f9400280     	ldr	x0, [x20]
 2bfd644: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd648: 35000048     	cbnz	w8, 0x2bfd650 <__start_il2cpp+0x13503c>
 2bfd64c: 97f76644     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd650: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd654: 52804bc0     	mov	w0, #0x25e              // =606
 2bfd658: f84207fe     	ldr	x30, [sp], #0x20
 2bfd65c: 17fffe90     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_ChestV3Tutorial()
# VA 0x2bfd660 .. 0x2bfd6b0 (next mapped method entry)
 2bfd660: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd664: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd668: b001d8b3     	adrp	x19, 0x6712000
 2bfd66c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd670: 396dee68     	ldrb	w8, [x19, #0xb7b]
 2bfd674: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd678: 370000c8     	tbnz	w8, #0x0, 0x2bfd690 <__start_il2cpp+0x13507c>
 2bfd67c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd680: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd684: 97f765d7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd688: 52800028     	mov	w8, #0x1                // =1
 2bfd68c: 392dee68     	strb	w8, [x19, #0xb7b]
 2bfd690: f9400280     	ldr	x0, [x20]
 2bfd694: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd698: 35000048     	cbnz	w8, 0x2bfd6a0 <__start_il2cpp+0x13508c>
 2bfd69c: 97f76630     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd6a0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd6a4: 52804be0     	mov	w0, #0x25f              // =607
 2bfd6a8: f84207fe     	ldr	x30, [sp], #0x20
 2bfd6ac: 17fffe7c     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_ChestV4Tutorial()
# VA 0x2bfd6b0 .. 0x2bfd700 (next mapped method entry)
 2bfd6b0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd6b4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd6b8: b001d8b3     	adrp	x19, 0x6712000
 2bfd6bc: b001b7f4     	adrp	x20, 0x62fa000
 2bfd6c0: 396df268     	ldrb	w8, [x19, #0xb7c]
 2bfd6c4: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd6c8: 370000c8     	tbnz	w8, #0x0, 0x2bfd6e0 <__start_il2cpp+0x1350cc>
 2bfd6cc: b001b7e0     	adrp	x0, 0x62fa000
 2bfd6d0: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd6d4: 97f765c3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd6d8: 52800028     	mov	w8, #0x1                // =1
 2bfd6dc: 392df268     	strb	w8, [x19, #0xb7c]
 2bfd6e0: f9400280     	ldr	x0, [x20]
 2bfd6e4: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd6e8: 35000048     	cbnz	w8, 0x2bfd6f0 <__start_il2cpp+0x1350dc>
 2bfd6ec: 97f7661c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd6f0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd6f4: 52804c00     	mov	w0, #0x260              // =608
 2bfd6f8: f84207fe     	ldr	x30, [sp], #0x20
 2bfd6fc: 17fffe68     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_ChestV5Tutorial()
# VA 0x2bfd700 .. 0x2bfd750 (next mapped method entry)
 2bfd700: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd704: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd708: b001d8b3     	adrp	x19, 0x6712000
 2bfd70c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd710: 396df668     	ldrb	w8, [x19, #0xb7d]
 2bfd714: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd718: 370000c8     	tbnz	w8, #0x0, 0x2bfd730 <__start_il2cpp+0x13511c>
 2bfd71c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd720: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd724: 97f765af     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd728: 52800028     	mov	w8, #0x1                // =1
 2bfd72c: 392df668     	strb	w8, [x19, #0xb7d]
 2bfd730: f9400280     	ldr	x0, [x20]
 2bfd734: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd738: 35000048     	cbnz	w8, 0x2bfd740 <__start_il2cpp+0x13512c>
 2bfd73c: 97f76608     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd740: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd744: 52804c20     	mov	w0, #0x261              // =609
 2bfd748: f84207fe     	ldr	x30, [sp], #0x20
 2bfd74c: 17fffe54     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_Gold()
# VA 0x2bfd750 .. 0x2bfd7a0 (next mapped method entry)
 2bfd750: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd754: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd758: b001d8b3     	adrp	x19, 0x6712000
 2bfd75c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd760: 396dfa68     	ldrb	w8, [x19, #0xb7e]
 2bfd764: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd768: 370000c8     	tbnz	w8, #0x0, 0x2bfd780 <__start_il2cpp+0x13516c>
 2bfd76c: b001b7e0     	adrp	x0, 0x62fa000
 2bfd770: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd774: 97f7659b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd778: 52800028     	mov	w8, #0x1                // =1
 2bfd77c: 392dfa68     	strb	w8, [x19, #0xb7e]
 2bfd780: f9400280     	ldr	x0, [x20]
 2bfd784: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd788: 35000048     	cbnz	w8, 0x2bfd790 <__start_il2cpp+0x13517c>
 2bfd78c: 97f765f4     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd790: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd794: 528000a0     	mov	w0, #0x5                // =5
 2bfd798: f84207fe     	ldr	x30, [sp], #0x20
 2bfd79c: 17fffe40     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_UnlimitedEnergy()
# VA 0x2bfd7a0 .. 0x2bfd7a8 (next mapped method entry)
 2bfd7a0: 528000c0     	mov	w0, #0x6                // =6
 2bfd7a4: d65f03c0     	ret

# ItemId :: System.Int32 get_ActivityCurrency()
# VA 0x2bfd7a8 .. 0x2bfd800 (next mapped method entry)
 2bfd7a8: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd7ac: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd7b0: b001d8b4     	adrp	x20, 0x6712000
 2bfd7b4: b001b7f3     	adrp	x19, 0x62fa000
 2bfd7b8: 396e0288     	ldrb	w8, [x20, #0xb80]
 2bfd7bc: f9405273     	ldr	x19, [x19, #0xa0]
 2bfd7c0: 370000c8     	tbnz	w8, #0x0, 0x2bfd7d8 <__start_il2cpp+0x1351c4>
 2bfd7c4: b001b7e0     	adrp	x0, 0x62fa000
 2bfd7c8: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd7cc: 97f76585     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd7d0: 52800028     	mov	w8, #0x1                // =1
 2bfd7d4: 392e0288     	strb	w8, [x20, #0xb80]
 2bfd7d8: f9400260     	ldr	x0, [x19]
 2bfd7dc: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd7e0: 35000068     	cbnz	w8, 0x2bfd7ec <__start_il2cpp+0x1351d8>
 2bfd7e4: 97f765de     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd7e8: f9400260     	ldr	x0, [x19]
 2bfd7ec: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfd7f0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd7f4: b9400100     	ldr	w0, [x8]
 2bfd7f8: f84207fe     	ldr	x30, [sp], #0x20
 2bfd7fc: d65f03c0     	ret

# ItemId :: System.Void set_ActivityCurrency(System.Int32 value)
# VA 0x2bfd800 .. 0x2bfd85c (next mapped method entry)
 2bfd800: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bfd804: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd808: b001d8b5     	adrp	x21, 0x6712000
 2bfd80c: b001b7f4     	adrp	x20, 0x62fa000
 2bfd810: 2a0003f3     	mov	w19, w0
 2bfd814: 396e06a8     	ldrb	w8, [x21, #0xb81]
 2bfd818: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd81c: 370000c8     	tbnz	w8, #0x0, 0x2bfd834 <__start_il2cpp+0x135220>
 2bfd820: b001b7e0     	adrp	x0, 0x62fa000
 2bfd824: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd828: 97f7656e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd82c: 52800028     	mov	w8, #0x1                // =1
 2bfd830: 392e06a8     	strb	w8, [x21, #0xb81]
 2bfd834: f9400280     	ldr	x0, [x20]
 2bfd838: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd83c: 35000068     	cbnz	w8, 0x2bfd848 <__start_il2cpp+0x135234>
 2bfd840: 97f765c7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd844: f9400280     	ldr	x0, [x20]
 2bfd848: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfd84c: b9000113     	str	w19, [x8]
 2bfd850: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd854: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bfd858: d65f03c0     	ret

# ItemId :: System.Int32 get_ToolBoxLockedBox()
# VA 0x2bfd85c .. 0x2bfd8ac (next mapped method entry)
 2bfd85c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd860: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd864: b001d8b3     	adrp	x19, 0x6712000
 2bfd868: b001b7f4     	adrp	x20, 0x62fa000
 2bfd86c: 396e0a68     	ldrb	w8, [x19, #0xb82]
 2bfd870: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd874: 370000c8     	tbnz	w8, #0x0, 0x2bfd88c <__start_il2cpp+0x135278>
 2bfd878: b001b7e0     	adrp	x0, 0x62fa000
 2bfd87c: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd880: 97f76558     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd884: 52800028     	mov	w8, #0x1                // =1
 2bfd888: 392e0a68     	strb	w8, [x19, #0xb82]
 2bfd88c: f9400280     	ldr	x0, [x20]
 2bfd890: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd894: 35000048     	cbnz	w8, 0x2bfd89c <__start_il2cpp+0x135288>
 2bfd898: 97f765b1     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd89c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd8a0: 52800820     	mov	w0, #0x41               // =65
 2bfd8a4: f84207fe     	ldr	x30, [sp], #0x20
 2bfd8a8: 17fffdfd     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_KitchenCabinetLockedBox()
# VA 0x2bfd8ac .. 0x2bfd8fc (next mapped method entry)
 2bfd8ac: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd8b0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd8b4: b001d8b3     	adrp	x19, 0x6712000
 2bfd8b8: b001b7f4     	adrp	x20, 0x62fa000
 2bfd8bc: 396e0e68     	ldrb	w8, [x19, #0xb83]
 2bfd8c0: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd8c4: 370000c8     	tbnz	w8, #0x0, 0x2bfd8dc <__start_il2cpp+0x1352c8>
 2bfd8c8: b001b7e0     	adrp	x0, 0x62fa000
 2bfd8cc: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd8d0: 97f76544     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd8d4: 52800028     	mov	w8, #0x1                // =1
 2bfd8d8: 392e0e68     	strb	w8, [x19, #0xb83]
 2bfd8dc: f9400280     	ldr	x0, [x20]
 2bfd8e0: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd8e4: 35000048     	cbnz	w8, 0x2bfd8ec <__start_il2cpp+0x1352d8>
 2bfd8e8: 97f7659d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd8ec: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd8f0: 52800800     	mov	w0, #0x40               // =64
 2bfd8f4: f84207fe     	ldr	x30, [sp], #0x20
 2bfd8f8: 17fffde9     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_SewingMachineLockedBox()
# VA 0x2bfd8fc .. 0x2bfd94c (next mapped method entry)
 2bfd8fc: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd900: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd904: b001d8b3     	adrp	x19, 0x6712000
 2bfd908: b001b7f4     	adrp	x20, 0x62fa000
 2bfd90c: 396e1268     	ldrb	w8, [x19, #0xb84]
 2bfd910: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd914: 370000c8     	tbnz	w8, #0x0, 0x2bfd92c <__start_il2cpp+0x135318>
 2bfd918: b001b7e0     	adrp	x0, 0x62fa000
 2bfd91c: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd920: 97f76530     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd924: 52800028     	mov	w8, #0x1                // =1
 2bfd928: 392e1268     	strb	w8, [x19, #0xb84]
 2bfd92c: f9400280     	ldr	x0, [x20]
 2bfd930: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd934: 35000048     	cbnz	w8, 0x2bfd93c <__start_il2cpp+0x135328>
 2bfd938: 97f76589     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd93c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd940: 528007e0     	mov	w0, #0x3f               // =63
 2bfd944: f84207fe     	ldr	x30, [sp], #0x20
 2bfd948: 17fffdd5     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_ToyBoxLockedBox()
# VA 0x2bfd94c .. 0x2bfd99c (next mapped method entry)
 2bfd94c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd950: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd954: b001d8b3     	adrp	x19, 0x6712000
 2bfd958: b001b7f4     	adrp	x20, 0x62fa000
 2bfd95c: 396e1668     	ldrb	w8, [x19, #0xb85]
 2bfd960: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd964: 370000c8     	tbnz	w8, #0x0, 0x2bfd97c <__start_il2cpp+0x135368>
 2bfd968: b001b7e0     	adrp	x0, 0x62fa000
 2bfd96c: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd970: 97f7651c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd974: 52800028     	mov	w8, #0x1                // =1
 2bfd978: 392e1668     	strb	w8, [x19, #0xb85]
 2bfd97c: f9400280     	ldr	x0, [x20]
 2bfd980: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd984: 35000048     	cbnz	w8, 0x2bfd98c <__start_il2cpp+0x135378>
 2bfd988: 97f76575     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd98c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd990: 52800840     	mov	w0, #0x42               // =66
 2bfd994: f84207fe     	ldr	x30, [sp], #0x20
 2bfd998: 17fffdc1     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_DailyQuestChest()
# VA 0x2bfd99c .. 0x2bfd9ec (next mapped method entry)
 2bfd99c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfd9a0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfd9a4: b001d8b3     	adrp	x19, 0x6712000
 2bfd9a8: b001b7f4     	adrp	x20, 0x62fa000
 2bfd9ac: 396e1a68     	ldrb	w8, [x19, #0xb86]
 2bfd9b0: f9405294     	ldr	x20, [x20, #0xa0]
 2bfd9b4: 370000c8     	tbnz	w8, #0x0, 0x2bfd9cc <__start_il2cpp+0x1353b8>
 2bfd9b8: b001b7e0     	adrp	x0, 0x62fa000
 2bfd9bc: f9405000     	ldr	x0, [x0, #0xa0]
 2bfd9c0: 97f76508     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfd9c4: 52800028     	mov	w8, #0x1                // =1
 2bfd9c8: 392e1a68     	strb	w8, [x19, #0xb86]
 2bfd9cc: f9400280     	ldr	x0, [x20]
 2bfd9d0: b940e408     	ldr	w8, [x0, #0xe4]
 2bfd9d4: 35000048     	cbnz	w8, 0x2bfd9dc <__start_il2cpp+0x1353c8>
 2bfd9d8: 97f76561     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfd9dc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfd9e0: 528026e0     	mov	w0, #0x137              // =311
 2bfd9e4: f84207fe     	ldr	x30, [sp], #0x20
 2bfd9e8: 17fffdad     	b	0x2bfd09c <__start_il2cpp+0x134a88>

# ItemId :: System.Int32 get_Joker()
# VA 0x2bfd9ec .. 0x2bfd9f4 (next mapped method entry)
 2bfd9ec: 52801920     	mov	w0, #0xc9               // =201
 2bfd9f0: d65f03c0     	ret

# ItemId :: System.Int32 get_ChainBreaker()
# VA 0x2bfd9f4 .. 0x2bfd9fc (next mapped method entry)
 2bfd9f4: 52801940     	mov	w0, #0xca               // =202
 2bfd9f8: d65f03c0     	ret

# ItemId :: System.Int32 get_TimeSkipper()
# VA 0x2bfd9fc .. 0x2bfda04 (next mapped method entry)
 2bfd9fc: 52801960     	mov	w0, #0xcb               // =203
 2bfda00: d65f03c0     	ret

# ItemId :: System.Boolean IsBooster(System.Int32 itemId)
# VA 0x2bfda04 .. 0x2bfda7c (next mapped method entry)
 2bfda04: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bfda08: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfda0c: b001d8b5     	adrp	x21, 0x6712000
 2bfda10: b001b7f4     	adrp	x20, 0x62fa000
 2bfda14: 2a0003f3     	mov	w19, w0
 2bfda18: 396e22a8     	ldrb	w8, [x21, #0xb88]
 2bfda1c: f9405294     	ldr	x20, [x20, #0xa0]
 2bfda20: 370000c8     	tbnz	w8, #0x0, 0x2bfda38 <__start_il2cpp+0x135424>
 2bfda24: b001b7e0     	adrp	x0, 0x62fa000
 2bfda28: f9405000     	ldr	x0, [x0, #0xa0]
 2bfda2c: 97f764ed     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfda30: 52800028     	mov	w8, #0x1                // =1
 2bfda34: 392e22a8     	strb	w8, [x21, #0xb88]
 2bfda38: f9400280     	ldr	x0, [x20]
 2bfda3c: b940e408     	ldr	w8, [x0, #0xe4]
 2bfda40: 35000048     	cbnz	w8, 0x2bfda48 <__start_il2cpp+0x135434>
 2bfda44: 97f76546     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfda48: 71032a7f     	cmp	w19, #0xca
 2bfda4c: 54000061     	b.ne	0x2bfda58 <__start_il2cpp+0x135444>
 2bfda50: 52800020     	mov	w0, #0x1                // =1
 2bfda54: 14000007     	b	0x2bfda70 <__start_il2cpp+0x13545c>
 2bfda58: f9400280     	ldr	x0, [x20]
 2bfda5c: b940e408     	ldr	w8, [x0, #0xe4]
 2bfda60: 35000048     	cbnz	w8, 0x2bfda68 <__start_il2cpp+0x135454>
 2bfda64: 97f7653e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfda68: 71032e7f     	cmp	w19, #0xcb
 2bfda6c: 1a9f17e0     	cset	w0, eq
 2bfda70: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfda74: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bfda78: d65f03c0     	ret

# ItemId :: System.Int32 TutorialItemIdToItemId(System.Int32 itemId)
# VA 0x2bfda7c .. 0x2bfdad4 (next mapped method entry)
 2bfda7c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfda80: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfda84: b001d8b4     	adrp	x20, 0x6712000
 2bfda88: 2a0003f3     	mov	w19, w0
 2bfda8c: 395c4688     	ldrb	w8, [x20, #0x711]
 2bfda90: 350000c8     	cbnz	w8, 0x2bfdaa8 <__start_il2cpp+0x135494>
 2bfda94: 9001b7a0     	adrp	x0, 0x62f1000
 2bfda98: f941fc00     	ldr	x0, [x0, #0x3f8]
 2bfda9c: 97f764d1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfdaa0: 52800028     	mov	w8, #0x1                // =1
 2bfdaa4: 391c4688     	strb	w8, [x20, #0x711]
 2bfdaa8: 9001b7a8     	adrp	x8, 0x62f1000
 2bfdaac: f941fd08     	ldr	x8, [x8, #0x3f8]
 2bfdab0: f9400100     	ldr	x0, [x8]
 2bfdab4: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdab8: 35000048     	cbnz	w8, 0x2bfdac0 <__start_il2cpp+0x1354ac>
 2bfdabc: 97f76528     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdac0: 7100027f     	cmp	w19, #0x0
 2bfdac4: 5a935660     	cneg	w0, w19, mi
 2bfdac8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfdacc: f84207fe     	ldr	x30, [sp], #0x20
 2bfdad0: d65f03c0     	ret

# ItemId :: System.Boolean IsConsumable(System.Int32 itemId)
# VA 0x2bfdad4 .. 0x2bfdbc0 (next mapped method entry)
 2bfdad4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bfdad8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfdadc: b001d8b5     	adrp	x21, 0x6712000
 2bfdae0: b001b7f4     	adrp	x20, 0x62fa000
 2bfdae4: 2a0003f3     	mov	w19, w0
 2bfdae8: 396e26a8     	ldrb	w8, [x21, #0xb89]
 2bfdaec: f9405294     	ldr	x20, [x20, #0xa0]
 2bfdaf0: 370000c8     	tbnz	w8, #0x0, 0x2bfdb08 <__start_il2cpp+0x1354f4>
 2bfdaf4: b001b7e0     	adrp	x0, 0x62fa000
 2bfdaf8: f9405000     	ldr	x0, [x0, #0xa0]
 2bfdafc: 97f764b9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfdb00: 52800028     	mov	w8, #0x1                // =1
 2bfdb04: 392e26a8     	strb	w8, [x21, #0xb89]
 2bfdb08: f9400280     	ldr	x0, [x20]
 2bfdb0c: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdb10: 35000048     	cbnz	w8, 0x2bfdb18 <__start_il2cpp+0x135504>
 2bfdb14: 97f76512     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdb18: 97ffff0e     	bl	0x2bfd750 <__start_il2cpp+0x13513c>
 2bfdb1c: 6b13001f     	cmp	w0, w19
 2bfdb20: 540001c0     	b.eq	0x2bfdb58 <__start_il2cpp+0x135544>
 2bfdb24: f9400280     	ldr	x0, [x20]
 2bfdb28: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdb2c: 35000048     	cbnz	w8, 0x2bfdb34 <__start_il2cpp+0x135520>
 2bfdb30: 97f7650b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdb34: 97ffeafb     	bl	0x2bf8720 <__start_il2cpp+0x13010c>
 2bfdb38: 6b13001f     	cmp	w0, w19
 2bfdb3c: 540000e0     	b.eq	0x2bfdb58 <__start_il2cpp+0x135544>
 2bfdb40: f9400280     	ldr	x0, [x20]
 2bfdb44: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdb48: 35000048     	cbnz	w8, 0x2bfdb50 <__start_il2cpp+0x13553c>
 2bfdb4c: 97f76504     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdb50: 71001a7f     	cmp	w19, #0x6
 2bfdb54: 540000a1     	b.ne	0x2bfdb68 <__start_il2cpp+0x135554>
 2bfdb58: 52800020     	mov	w0, #0x1                // =1
 2bfdb5c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfdb60: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bfdb64: d65f03c0     	ret
 2bfdb68: f9400280     	ldr	x0, [x20]
 2bfdb6c: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdb70: 35000048     	cbnz	w8, 0x2bfdb78 <__start_il2cpp+0x135564>
 2bfdb74: 97f764fa     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdb78: b001d8b5     	adrp	x21, 0x6712000
 2bfdb7c: 396542a8     	ldrb	w8, [x21, #0x950]
 2bfdb80: 350000c8     	cbnz	w8, 0x2bfdb98 <__start_il2cpp+0x135584>
 2bfdb84: b001b7e0     	adrp	x0, 0x62fa000
 2bfdb88: f9405000     	ldr	x0, [x0, #0xa0]
 2bfdb8c: 97f76495     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfdb90: 52800028     	mov	w8, #0x1                // =1
 2bfdb94: 392542a8     	strb	w8, [x21, #0x950]
 2bfdb98: f9400280     	ldr	x0, [x20]
 2bfdb9c: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdba0: 35000068     	cbnz	w8, 0x2bfdbac <__start_il2cpp+0x135598>
 2bfdba4: 97f764ee     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdba8: f9400280     	ldr	x0, [x20]
 2bfdbac: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfdbb0: b9400108     	ldr	w8, [x8]
 2bfdbb4: 6b13011f     	cmp	w8, w19
 2bfdbb8: 1a9f17e0     	cset	w0, eq
 2bfdbbc: 17ffffe8     	b	0x2bfdb5c <__start_il2cpp+0x135548>

# ItemId :: System.Boolean IsLockedBox(System.Int32 itemId)
# VA 0x2bfdbc0 .. 0x2bfdc78 (next mapped method entry)
 2bfdbc0: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bfdbc4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfdbc8: b001d8b5     	adrp	x21, 0x6712000
 2bfdbcc: b001b7f4     	adrp	x20, 0x62fa000
 2bfdbd0: 2a0003f3     	mov	w19, w0
 2bfdbd4: 396e2aa8     	ldrb	w8, [x21, #0xb8a]
 2bfdbd8: f9405294     	ldr	x20, [x20, #0xa0]
 2bfdbdc: 370000c8     	tbnz	w8, #0x0, 0x2bfdbf4 <__start_il2cpp+0x1355e0>
 2bfdbe0: b001b7e0     	adrp	x0, 0x62fa000
 2bfdbe4: f9405000     	ldr	x0, [x0, #0xa0]
 2bfdbe8: 97f7647e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfdbec: 52800028     	mov	w8, #0x1                // =1
 2bfdbf0: 392e2aa8     	strb	w8, [x21, #0xb8a]
 2bfdbf4: f9400280     	ldr	x0, [x20]
 2bfdbf8: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdbfc: 35000048     	cbnz	w8, 0x2bfdc04 <__start_il2cpp+0x1355f0>
 2bfdc00: 97f764d7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdc04: 97ffff16     	bl	0x2bfd85c <__start_il2cpp+0x135248>
 2bfdc08: 6b13001f     	cmp	w0, w19
 2bfdc0c: 540001e0     	b.eq	0x2bfdc48 <__start_il2cpp+0x135634>
 2bfdc10: f9400280     	ldr	x0, [x20]
 2bfdc14: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdc18: 35000048     	cbnz	w8, 0x2bfdc20 <__start_il2cpp+0x13560c>
 2bfdc1c: 97f764d0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdc20: 97ffff23     	bl	0x2bfd8ac <__start_il2cpp+0x135298>
 2bfdc24: 6b13001f     	cmp	w0, w19
 2bfdc28: 54000100     	b.eq	0x2bfdc48 <__start_il2cpp+0x135634>
 2bfdc2c: f9400280     	ldr	x0, [x20]
 2bfdc30: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdc34: 35000048     	cbnz	w8, 0x2bfdc3c <__start_il2cpp+0x135628>
 2bfdc38: 97f764c9     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdc3c: 97ffff30     	bl	0x2bfd8fc <__start_il2cpp+0x1352e8>
 2bfdc40: 6b13001f     	cmp	w0, w19
 2bfdc44: 540000a1     	b.ne	0x2bfdc58 <__start_il2cpp+0x135644>
 2bfdc48: 52800020     	mov	w0, #0x1                // =1
 2bfdc4c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfdc50: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bfdc54: d65f03c0     	ret
 2bfdc58: f9400280     	ldr	x0, [x20]
 2bfdc5c: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdc60: 35000048     	cbnz	w8, 0x2bfdc68 <__start_il2cpp+0x135654>
 2bfdc64: 97f764be     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdc68: 97ffff39     	bl	0x2bfd94c <__start_il2cpp+0x135338>
 2bfdc6c: 6b13001f     	cmp	w0, w19
 2bfdc70: 1a9f17e0     	cset	w0, eq
 2bfdc74: 17fffff6     	b	0x2bfdc4c <__start_il2cpp+0x135638>

# ItemId :: System.Boolean IsTutorialChest(System.Int32 itemId)
# VA 0x2bfdc78 .. 0x2bfdd24 (next mapped method entry)
 2bfdc78: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bfdc7c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfdc80: b001d8b5     	adrp	x21, 0x6712000
 2bfdc84: b001b7f4     	adrp	x20, 0x62fa000
 2bfdc88: 2a0003f3     	mov	w19, w0
 2bfdc8c: 396e32a8     	ldrb	w8, [x21, #0xb8c]
 2bfdc90: f9405294     	ldr	x20, [x20, #0xa0]
 2bfdc94: 370000c8     	tbnz	w8, #0x0, 0x2bfdcac <__start_il2cpp+0x135698>
 2bfdc98: b001b7e0     	adrp	x0, 0x62fa000
 2bfdc9c: f9405000     	ldr	x0, [x0, #0xa0]
 2bfdca0: 97f76450     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfdca4: 52800028     	mov	w8, #0x1                // =1
 2bfdca8: 392e32a8     	strb	w8, [x21, #0xb8c]
 2bfdcac: f9400280     	ldr	x0, [x20]
 2bfdcb0: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdcb4: 35000048     	cbnz	w8, 0x2bfdcbc <__start_il2cpp+0x1356a8>
 2bfdcb8: 97f764a9     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdcbc: 97ffd4c3     	bl	0x2bf2fc8 <__start_il2cpp+0x12a9b4>
 2bfdcc0: 2a0003e8     	mov	w8, w0
 2bfdcc4: 3110ae7f     	cmn	w19, #0x42b
 2bfdcc8: 52800020     	mov	w0, #0x1                // =1
 2bfdccc: 54000260     	b.eq	0x2bfdd18 <__start_il2cpp+0x135704>
 2bfdcd0: 6b13011f     	cmp	w8, w19
 2bfdcd4: 54000220     	b.eq	0x2bfdd18 <__start_il2cpp+0x135704>
 2bfdcd8: f9400280     	ldr	x0, [x20]
 2bfdcdc: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdce0: 35000048     	cbnz	w8, 0x2bfdce8 <__start_il2cpp+0x1356d4>
 2bfdce4: 97f7649e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdce8: 97fffe4a     	bl	0x2bfd610 <__start_il2cpp+0x134ffc>
 2bfdcec: 6b13001f     	cmp	w0, w19
 2bfdcf0: 54000061     	b.ne	0x2bfdcfc <__start_il2cpp+0x1356e8>
 2bfdcf4: 52800020     	mov	w0, #0x1                // =1
 2bfdcf8: 14000008     	b	0x2bfdd18 <__start_il2cpp+0x135704>
 2bfdcfc: f9400280     	ldr	x0, [x20]
 2bfdd00: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdd04: 35000048     	cbnz	w8, 0x2bfdd0c <__start_il2cpp+0x1356f8>
 2bfdd08: 97f76495     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdd0c: 97fffe55     	bl	0x2bfd660 <__start_il2cpp+0x13504c>
 2bfdd10: 6b13001f     	cmp	w0, w19
 2bfdd14: 1a9f17e0     	cset	w0, eq
 2bfdd18: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfdd1c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bfdd20: d65f03c0     	ret

# ItemId :: System.Boolean IsDailyQuestChest(System.Int32 itemId)
# VA 0x2bfdd24 .. 0x2bfded8 (next mapped method entry)
 2bfdd24: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bfdd28: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfdd2c: b001d8b5     	adrp	x21, 0x6712000
 2bfdd30: b001b7f4     	adrp	x20, 0x62fa000
 2bfdd34: 2a0003f3     	mov	w19, w0
 2bfdd38: 396e36a8     	ldrb	w8, [x21, #0xb8d]
 2bfdd3c: f9405294     	ldr	x20, [x20, #0xa0]
 2bfdd40: 370000c8     	tbnz	w8, #0x0, 0x2bfdd58 <__start_il2cpp+0x135744>
 2bfdd44: b001b7e0     	adrp	x0, 0x62fa000
 2bfdd48: f9405000     	ldr	x0, [x0, #0xa0]
 2bfdd4c: 97f76425     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfdd50: 52800028     	mov	w8, #0x1                // =1
 2bfdd54: 392e36a8     	strb	w8, [x21, #0xb8d]
 2bfdd58: f9400280     	ldr	x0, [x20]
 2bfdd5c: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdd60: 35000048     	cbnz	w8, 0x2bfdd68 <__start_il2cpp+0x135754>
 2bfdd64: 97f7647e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdd68: 97ffff0d     	bl	0x2bfd99c <__start_il2cpp+0x135388>
 2bfdd6c: 6b13001f     	cmp	w0, w19
 2bfdd70: 54000a40     	b.eq	0x2bfdeb8 <__start_il2cpp+0x1358a4>
 2bfdd74: f9400280     	ldr	x0, [x20]
 2bfdd78: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdd7c: 35000068     	cbnz	w8, 0x2bfdd88 <__start_il2cpp+0x135774>
 2bfdd80: 97f76477     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdd84: f9400280     	ldr	x0, [x20]
 2bfdd88: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfdd8c: b9400509     	ldr	w9, [x8, #0x4]
 2bfdd90: 6b13013f     	cmp	w9, w19
 2bfdd94: 54000920     	b.eq	0x2bfdeb8 <__start_il2cpp+0x1358a4>
 2bfdd98: b940e409     	ldr	w9, [x0, #0xe4]
 2bfdd9c: 35000089     	cbnz	w9, 0x2bfddac <__start_il2cpp+0x135798>
 2bfdda0: 97f7646f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdda4: f9400280     	ldr	x0, [x20]
 2bfdda8: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfddac: b9400909     	ldr	w9, [x8, #0x8]
 2bfddb0: 6b13013f     	cmp	w9, w19
 2bfddb4: 54000820     	b.eq	0x2bfdeb8 <__start_il2cpp+0x1358a4>
 2bfddb8: b940e409     	ldr	w9, [x0, #0xe4]
 2bfddbc: 35000089     	cbnz	w9, 0x2bfddcc <__start_il2cpp+0x1357b8>
 2bfddc0: 97f76467     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfddc4: f9400280     	ldr	x0, [x20]
 2bfddc8: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfddcc: b9400d09     	ldr	w9, [x8, #0xc]
 2bfddd0: 6b13013f     	cmp	w9, w19
 2bfddd4: 54000720     	b.eq	0x2bfdeb8 <__start_il2cpp+0x1358a4>
 2bfddd8: b940e409     	ldr	w9, [x0, #0xe4]
 2bfdddc: 35000089     	cbnz	w9, 0x2bfddec <__start_il2cpp+0x1357d8>
 2bfdde0: 97f7645f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdde4: f9400280     	ldr	x0, [x20]
 2bfdde8: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfddec: b9401109     	ldr	w9, [x8, #0x10]
 2bfddf0: 6b13013f     	cmp	w9, w19
 2bfddf4: 54000620     	b.eq	0x2bfdeb8 <__start_il2cpp+0x1358a4>
 2bfddf8: b940e409     	ldr	w9, [x0, #0xe4]
 2bfddfc: 35000089     	cbnz	w9, 0x2bfde0c <__start_il2cpp+0x1357f8>
 2bfde00: 97f76457     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfde04: f9400280     	ldr	x0, [x20]
 2bfde08: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfde0c: b9401509     	ldr	w9, [x8, #0x14]
 2bfde10: 6b13013f     	cmp	w9, w19
 2bfde14: 54000520     	b.eq	0x2bfdeb8 <__start_il2cpp+0x1358a4>
 2bfde18: b940e409     	ldr	w9, [x0, #0xe4]
 2bfde1c: 35000089     	cbnz	w9, 0x2bfde2c <__start_il2cpp+0x135818>
 2bfde20: 97f7644f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfde24: f9400280     	ldr	x0, [x20]
 2bfde28: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfde2c: b9401909     	ldr	w9, [x8, #0x18]
 2bfde30: 6b13013f     	cmp	w9, w19
 2bfde34: 54000420     	b.eq	0x2bfdeb8 <__start_il2cpp+0x1358a4>
 2bfde38: b940e409     	ldr	w9, [x0, #0xe4]
 2bfde3c: 35000089     	cbnz	w9, 0x2bfde4c <__start_il2cpp+0x135838>
 2bfde40: 97f76447     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfde44: f9400280     	ldr	x0, [x20]
 2bfde48: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfde4c: b9401d09     	ldr	w9, [x8, #0x1c]
 2bfde50: 6b13013f     	cmp	w9, w19
 2bfde54: 54000320     	b.eq	0x2bfdeb8 <__start_il2cpp+0x1358a4>
 2bfde58: b940e409     	ldr	w9, [x0, #0xe4]
 2bfde5c: 35000089     	cbnz	w9, 0x2bfde6c <__start_il2cpp+0x135858>
 2bfde60: 97f7643f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfde64: f9400280     	ldr	x0, [x20]
 2bfde68: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfde6c: b9402109     	ldr	w9, [x8, #0x20]
 2bfde70: 6b13013f     	cmp	w9, w19
 2bfde74: 54000220     	b.eq	0x2bfdeb8 <__start_il2cpp+0x1358a4>
 2bfde78: b940e409     	ldr	w9, [x0, #0xe4]
 2bfde7c: 35000089     	cbnz	w9, 0x2bfde8c <__start_il2cpp+0x135878>
 2bfde80: 97f76437     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfde84: f9400280     	ldr	x0, [x20]
 2bfde88: f9405c08     	ldr	x8, [x0, #0xb8]
 2bfde8c: b9402509     	ldr	w9, [x8, #0x24]
 2bfde90: 6b13013f     	cmp	w9, w19
 2bfde94: 54000120     	b.eq	0x2bfdeb8 <__start_il2cpp+0x1358a4>
 2bfde98: b940e409     	ldr	w9, [x0, #0xe4]
 2bfde9c: 35000089     	cbnz	w9, 0x2bfdeac <__start_il2cpp+0x135898>
 2bfdea0: 97f7642f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdea4: f9400288     	ldr	x8, [x20]
 2bfdea8: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfdeac: b9402908     	ldr	w8, [x8, #0x28]
 2bfdeb0: 6b13011f     	cmp	w8, w19
 2bfdeb4: 540000a1     	b.ne	0x2bfdec8 <__start_il2cpp+0x1358b4>
 2bfdeb8: 52800020     	mov	w0, #0x1                // =1
 2bfdebc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfdec0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bfdec4: d65f03c0     	ret
 2bfdec8: 121e7668     	and	w8, w19, #0xfffffffc
 2bfdecc: 7114811f     	cmp	w8, #0x520
 2bfded0: 1a9f17e0     	cset	w0, eq
 2bfded4: 17fffffa     	b	0x2bfdebc <__start_il2cpp+0x1358a8>

# ItemId :: System.Boolean IsTreasure(System.Int32 itemId)
# VA 0x2bfded8 .. 0x2bfe01c (next mapped method entry)
 2bfded8: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bfdedc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfdee0: b001d8b5     	adrp	x21, 0x6712000
 2bfdee4: b001b7f4     	adrp	x20, 0x62fa000
 2bfdee8: 2a0003f3     	mov	w19, w0
 2bfdeec: 396e3aa8     	ldrb	w8, [x21, #0xb8e]
 2bfdef0: f9405294     	ldr	x20, [x20, #0xa0]
 2bfdef4: 370000c8     	tbnz	w8, #0x0, 0x2bfdf0c <__start_il2cpp+0x1358f8>
 2bfdef8: b001b7e0     	adrp	x0, 0x62fa000
 2bfdefc: f9405000     	ldr	x0, [x0, #0xa0]
 2bfdf00: 97f763b8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfdf04: 52800028     	mov	w8, #0x1                // =1
 2bfdf08: 392e3aa8     	strb	w8, [x21, #0xb8e]
 2bfdf0c: f9400280     	ldr	x0, [x20]
 2bfdf10: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdf14: 35000048     	cbnz	w8, 0x2bfdf1c <__start_il2cpp+0x135908>
 2bfdf18: 97f76411     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdf1c: 97fffd95     	bl	0x2bfd570 <__start_il2cpp+0x134f5c>
 2bfdf20: 6b13001f     	cmp	w0, w19
 2bfdf24: 54000640     	b.eq	0x2bfdfec <__start_il2cpp+0x1359d8>
 2bfdf28: f9400280     	ldr	x0, [x20]
 2bfdf2c: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdf30: 35000048     	cbnz	w8, 0x2bfdf38 <__start_il2cpp+0x135924>
 2bfdf34: 97f7640a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdf38: 97ffd424     	bl	0x2bf2fc8 <__start_il2cpp+0x12a9b4>
 2bfdf3c: 6b13001f     	cmp	w0, w19
 2bfdf40: 54000560     	b.eq	0x2bfdfec <__start_il2cpp+0x1359d8>
 2bfdf44: f9400280     	ldr	x0, [x20]
 2bfdf48: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdf4c: 35000048     	cbnz	w8, 0x2bfdf54 <__start_il2cpp+0x135940>
 2bfdf50: 97f76403     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdf54: 97fffd73     	bl	0x2bfd520 <__start_il2cpp+0x134f0c>
 2bfdf58: 6b13001f     	cmp	w0, w19
 2bfdf5c: 54000480     	b.eq	0x2bfdfec <__start_il2cpp+0x1359d8>
 2bfdf60: f9400280     	ldr	x0, [x20]
 2bfdf64: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdf68: 35000048     	cbnz	w8, 0x2bfdf70 <__start_il2cpp+0x13595c>
 2bfdf6c: 97f763fc     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdf70: 97fffe4f     	bl	0x2bfd8ac <__start_il2cpp+0x135298>
 2bfdf74: 6b13001f     	cmp	w0, w19
 2bfdf78: 540003a0     	b.eq	0x2bfdfec <__start_il2cpp+0x1359d8>
 2bfdf7c: f9400280     	ldr	x0, [x20]
 2bfdf80: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdf84: 35000048     	cbnz	w8, 0x2bfdf8c <__start_il2cpp+0x135978>
 2bfdf88: 97f763f5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdf8c: 97fffe5c     	bl	0x2bfd8fc <__start_il2cpp+0x1352e8>
 2bfdf90: 6b13001f     	cmp	w0, w19
 2bfdf94: 540002c0     	b.eq	0x2bfdfec <__start_il2cpp+0x1359d8>
 2bfdf98: f9400280     	ldr	x0, [x20]
 2bfdf9c: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdfa0: 35000048     	cbnz	w8, 0x2bfdfa8 <__start_il2cpp+0x135994>
 2bfdfa4: 97f763ee     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdfa8: 97fffe69     	bl	0x2bfd94c <__start_il2cpp+0x135338>
 2bfdfac: 6b13001f     	cmp	w0, w19
 2bfdfb0: 540001e0     	b.eq	0x2bfdfec <__start_il2cpp+0x1359d8>
 2bfdfb4: f9400280     	ldr	x0, [x20]
 2bfdfb8: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdfbc: 35000048     	cbnz	w8, 0x2bfdfc4 <__start_il2cpp+0x1359b0>
 2bfdfc0: 97f763e7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdfc4: 97fffe26     	bl	0x2bfd85c <__start_il2cpp+0x135248>
 2bfdfc8: 6b13001f     	cmp	w0, w19
 2bfdfcc: 54000100     	b.eq	0x2bfdfec <__start_il2cpp+0x1359d8>
 2bfdfd0: f9400280     	ldr	x0, [x20]
 2bfdfd4: b940e408     	ldr	w8, [x0, #0xe4]
 2bfdfd8: 35000048     	cbnz	w8, 0x2bfdfe0 <__start_il2cpp+0x1359cc>
 2bfdfdc: 97f763e0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfdfe0: 97fffd78     	bl	0x2bfd5c0 <__start_il2cpp+0x134fac>
 2bfdfe4: 6b13001f     	cmp	w0, w19
 2bfdfe8: 540000a1     	b.ne	0x2bfdffc <__start_il2cpp+0x1359e8>
 2bfdfec: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfdff0: 52800020     	mov	w0, #0x1                // =1
 2bfdff4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bfdff8: d65f03c0     	ret
 2bfdffc: f9400280     	ldr	x0, [x20]
 2bfe000: b940e408     	ldr	w8, [x0, #0xe4]
 2bfe004: 35000048     	cbnz	w8, 0x2bfe00c <__start_il2cpp+0x1359f8>
 2bfe008: 97f763d5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfe00c: 2a1303e0     	mov	w0, w19
 2bfe010: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfe014: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bfe018: 17ffff43     	b	0x2bfdd24 <__start_il2cpp+0x135710>

# ItemId :: System.Void .ctor()
# VA 0x2bfe01c .. 0x2bfe024 (next mapped method entry)
 2bfe01c: aa1f03e1     	mov	x1, xzr
 2bfe020: 149546ca     	b	0x514fb48 <__start_il2cpp+0x2687534>

# ItemId :: System.Void .cctor()
# VA 0x2bfe024 .. 0x2bfe138 (next mapped method entry)
 2bfe024: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bfe028: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfe02c: 9001d8b4     	adrp	x20, 0x6712000
 2bfe030: 9001b7f3     	adrp	x19, 0x62fa000
 2bfe034: 396e3e88     	ldrb	w8, [x20, #0xb8f]
 2bfe038: f9405273     	ldr	x19, [x19, #0xa0]
 2bfe03c: 370000c8     	tbnz	w8, #0x0, 0x2bfe054 <__start_il2cpp+0x135a40>
 2bfe040: 9001b7e0     	adrp	x0, 0x62fa000
 2bfe044: f9405000     	ldr	x0, [x0, #0xa0]
 2bfe048: 97f76366     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfe04c: 52800028     	mov	w8, #0x1                // =1
 2bfe050: 392e3e88     	strb	w8, [x20, #0xb8f]
 2bfe054: f9400268     	ldr	x8, [x19]
 2bfe058: 52803229     	mov	w9, #0x191              // =401
 2bfe05c: 528025a0     	mov	w0, #0x12d              // =301
 2bfe060: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfe064: b9000109     	str	w9, [x8]
 2bfe068: 97fffc0d     	bl	0x2bfd09c <__start_il2cpp+0x134a88>
 2bfe06c: f9400268     	ldr	x8, [x19]
 2bfe070: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfe074: b9000500     	str	w0, [x8, #0x4]
 2bfe078: 528025c0     	mov	w0, #0x12e              // =302
 2bfe07c: 97fffc08     	bl	0x2bfd09c <__start_il2cpp+0x134a88>
 2bfe080: f9400268     	ldr	x8, [x19]
 2bfe084: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfe088: b9000900     	str	w0, [x8, #0x8]
 2bfe08c: 528025e0     	mov	w0, #0x12f              // =303
 2bfe090: 97fffc03     	bl	0x2bfd09c <__start_il2cpp+0x134a88>
 2bfe094: f9400268     	ldr	x8, [x19]
 2bfe098: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfe09c: b9000d00     	str	w0, [x8, #0xc]
 2bfe0a0: 52802600     	mov	w0, #0x130              // =304
 2bfe0a4: 97fffbfe     	bl	0x2bfd09c <__start_il2cpp+0x134a88>
 2bfe0a8: f9400268     	ldr	x8, [x19]
 2bfe0ac: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfe0b0: b9001100     	str	w0, [x8, #0x10]
 2bfe0b4: 52802620     	mov	w0, #0x131              // =305
 2bfe0b8: 97fffbf9     	bl	0x2bfd09c <__start_il2cpp+0x134a88>
 2bfe0bc: f9400268     	ldr	x8, [x19]
 2bfe0c0: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfe0c4: b9001500     	str	w0, [x8, #0x14]
 2bfe0c8: 52802640     	mov	w0, #0x132              // =306
 2bfe0cc: 97fffbf4     	bl	0x2bfd09c <__start_il2cpp+0x134a88>
 2bfe0d0: f9400268     	ldr	x8, [x19]
 2bfe0d4: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfe0d8: b9001900     	str	w0, [x8, #0x18]
 2bfe0dc: 52802660     	mov	w0, #0x133              // =307
 2bfe0e0: 97fffbef     	bl	0x2bfd09c <__start_il2cpp+0x134a88>
 2bfe0e4: f9400268     	ldr	x8, [x19]
 2bfe0e8: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfe0ec: b9001d00     	str	w0, [x8, #0x1c]
 2bfe0f0: 52802680     	mov	w0, #0x134              // =308
 2bfe0f4: 97fffbea     	bl	0x2bfd09c <__start_il2cpp+0x134a88>
 2bfe0f8: f9400268     	ldr	x8, [x19]
 2bfe0fc: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfe100: b9002100     	str	w0, [x8, #0x20]
 2bfe104: 528026a0     	mov	w0, #0x135              // =309
 2bfe108: 97fffbe5     	bl	0x2bfd09c <__start_il2cpp+0x134a88>
 2bfe10c: f9400268     	ldr	x8, [x19]
 2bfe110: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfe114: b9002500     	str	w0, [x8, #0x24]
 2bfe118: 528026c0     	mov	w0, #0x136              // =310
 2bfe11c: 97fffbe0     	bl	0x2bfd09c <__start_il2cpp+0x134a88>
 2bfe120: f9400268     	ldr	x8, [x19]
 2bfe124: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfe128: f9405d08     	ldr	x8, [x8, #0xb8]
 2bfe12c: b9002900     	str	w0, [x8, #0x28]
 2bfe130: f84207fe     	ldr	x30, [sp], #0x20
 2bfe134: d65f03c0     	ret
