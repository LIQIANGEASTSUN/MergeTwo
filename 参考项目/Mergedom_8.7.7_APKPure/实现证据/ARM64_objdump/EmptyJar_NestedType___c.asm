
# EmptyJar+__c :: System.Void .cctor()
# VA 0x2bf8fd0 .. 0x2bf9038 (next mapped method entry)
 2bf8fd0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf8fd4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf8fd8: d001d8d3     	adrp	x19, 0x6712000
 2bf8fdc: 9001b834     	adrp	x20, 0x62fc000
 2bf8fe0: 396d1668     	ldrb	w8, [x19, #0xb45]
 2bf8fe4: f943e294     	ldr	x20, [x20, #0x7c0]
 2bf8fe8: 370000c8     	tbnz	w8, #0x0, 0x2bf9000 <__start_il2cpp+0x1309ec>
 2bf8fec: 9001b820     	adrp	x0, 0x62fc000
 2bf8ff0: f943e000     	ldr	x0, [x0, #0x7c0]
 2bf8ff4: 97f7777b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf8ff8: 52800028     	mov	w8, #0x1                // =1
 2bf8ffc: 392d1668     	strb	w8, [x19, #0xb45]
 2bf9000: f9400280     	ldr	x0, [x20]
 2bf9004: 97f7781d     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bf9008: aa1f03e1     	mov	x1, xzr
 2bf900c: aa0003f3     	mov	x19, x0
 2bf9010: 94955ace     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2bf9014: f9400288     	ldr	x8, [x20]
 2bf9018: aa1303e1     	mov	x1, x19
 2bf901c: f9405d08     	ldr	x8, [x8, #0xb8]
 2bf9020: f9000113     	str	x19, [x8]
 2bf9024: f9400288     	ldr	x8, [x20]
 2bf9028: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf902c: f9405d00     	ldr	x0, [x8, #0xb8]
 2bf9030: f84207fe     	ldr	x30, [sp], #0x20
 2bf9034: 17f77756     	b	0x29d6d8c <mono_class_get_checked+0x674>

# EmptyJar+__c :: System.Void .ctor()
# VA 0x2bf9038 .. 0x2bf9040 (next mapped method entry)
 2bf9038: aa1f03e1     	mov	x1, xzr
 2bf903c: 14955ac3     	b	0x514fb48 <__start_il2cpp+0x2687534>

# EmptyJar+__c :: System.Boolean <CanMergeWith>b__1_0(ItemProducer a)
# VA 0x2bf9040 .. 0x2bf9058 (next mapped method entry)
 2bf9040: b4000081     	cbz	x1, 0x2bf9050 <__start_il2cpp+0x130a3c>
 2bf9044: aa0103e0     	mov	x0, x1
 2bf9048: aa1f03e1     	mov	x1, xzr
 2bf904c: 140047c3     	b	0x2c0af58 <__start_il2cpp+0x142944>
 2bf9050: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bf9054: 97f7780d     	bl	0x29d7088 <mono_class_get_checked+0x970>
