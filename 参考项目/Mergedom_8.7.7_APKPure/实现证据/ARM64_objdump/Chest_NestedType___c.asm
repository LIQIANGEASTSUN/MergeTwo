
# Chest+__c :: System.Void .cctor()
# VA 0x2bf7d00 .. 0x2bf7d68 (next mapped method entry)
 2bf7d00: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf7d04: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf7d08: f001d8d3     	adrp	x19, 0x6712000
 2bf7d0c: b001b834     	adrp	x20, 0x62fc000
 2bf7d10: 396cea68     	ldrb	w8, [x19, #0xb3a]
 2bf7d14: f943be94     	ldr	x20, [x20, #0x778]
 2bf7d18: 370000c8     	tbnz	w8, #0x0, 0x2bf7d30 <__start_il2cpp+0x12f71c>
 2bf7d1c: b001b820     	adrp	x0, 0x62fc000
 2bf7d20: f943bc00     	ldr	x0, [x0, #0x778]
 2bf7d24: 97f77c2f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7d28: 52800028     	mov	w8, #0x1                // =1
 2bf7d2c: 392cea68     	strb	w8, [x19, #0xb3a]
 2bf7d30: f9400280     	ldr	x0, [x20]
 2bf7d34: 97f77cd1     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bf7d38: aa1f03e1     	mov	x1, xzr
 2bf7d3c: aa0003f3     	mov	x19, x0
 2bf7d40: 94955f82     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2bf7d44: f9400288     	ldr	x8, [x20]
 2bf7d48: aa1303e1     	mov	x1, x19
 2bf7d4c: f9405d08     	ldr	x8, [x8, #0xb8]
 2bf7d50: f9000113     	str	x19, [x8]
 2bf7d54: f9400288     	ldr	x8, [x20]
 2bf7d58: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf7d5c: f9405d00     	ldr	x0, [x8, #0xb8]
 2bf7d60: f84207fe     	ldr	x30, [sp], #0x20
 2bf7d64: 17f77c0a     	b	0x29d6d8c <mono_class_get_checked+0x674>

# Chest+__c :: System.Void .ctor()
# VA 0x2bf7d68 .. 0x2bf7d70 (next mapped method entry)
 2bf7d68: aa1f03e1     	mov	x1, xzr
 2bf7d6c: 14955f77     	b	0x514fb48 <__start_il2cpp+0x2687534>

# Chest+__c :: System.Boolean <OnTapped>b__5_0(BaseItem baseItem)
# VA 0x2bf7d70 .. 0x2bf7df4 (next mapped method entry)
 2bf7d70: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf7d74: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf7d78: f001d8d4     	adrp	x20, 0x6712000
 2bf7d7c: aa0103f3     	mov	x19, x1
 2bf7d80: 396cee88     	ldrb	w8, [x20, #0xb3b]
 2bf7d84: 370000c8     	tbnz	w8, #0x0, 0x2bf7d9c <__start_il2cpp+0x12f788>
 2bf7d88: f001b800     	adrp	x0, 0x62fa000
 2bf7d8c: f9405000     	ldr	x0, [x0, #0xa0]
 2bf7d90: 97f77c14     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7d94: 52800028     	mov	w8, #0x1                // =1
 2bf7d98: 392cee88     	strb	w8, [x20, #0xb3b]
 2bf7d9c: b40002b3     	cbz	x19, 0x2bf7df0 <__start_il2cpp+0x12f7dc>
 2bf7da0: f9402a68     	ldr	x8, [x19, #0x50]
 2bf7da4: b4000268     	cbz	x8, 0x2bf7df0 <__start_il2cpp+0x12f7dc>
 2bf7da8: f001b809     	adrp	x9, 0x62fa000
 2bf7dac: f9405129     	ldr	x9, [x9, #0xa0]
 2bf7db0: b9403114     	ldr	w20, [x8, #0x30]
 2bf7db4: f9400120     	ldr	x0, [x9]
 2bf7db8: b940e409     	ldr	w9, [x0, #0xe4]
 2bf7dbc: 35000049     	cbnz	w9, 0x2bf7dc4 <__start_il2cpp+0x12f7b0>
 2bf7dc0: 97f77c67     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7dc4: 2a1403e0     	mov	w0, w20
 2bf7dc8: 9400000b     	bl	0x2bf7df4 <__start_il2cpp+0x12f7e0>
 2bf7dcc: 360000a0     	tbz	w0, #0x0, 0x2bf7de0 <__start_il2cpp+0x12f7cc>
 2bf7dd0: aa1303e0     	mov	x0, x19
 2bf7dd4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf7dd8: f84207fe     	ldr	x30, [sp], #0x20
 2bf7ddc: 17fff4f5     	b	0x2bf51b0 <__start_il2cpp+0x12cb9c>
 2bf7de0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf7de4: 2a1f03e0     	mov	w0, wzr
 2bf7de8: f84207fe     	ldr	x30, [sp], #0x20
 2bf7dec: d65f03c0     	ret
 2bf7df0: 97f77ca6     	bl	0x29d7088 <mono_class_get_checked+0x970>
