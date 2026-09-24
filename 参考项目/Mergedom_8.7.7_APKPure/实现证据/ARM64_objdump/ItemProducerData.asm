
# ItemProducerData :: System.Void .ctor()
# VA 0x2bfcc1c .. 0x2bfccb8 (next mapped method entry)
 2bfcc1c: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bfcc20: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bfcc24: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bfcc28: d001d8b6     	adrp	x22, 0x6712000
 2bfcc2c: 9001b815     	adrp	x21, 0x62fc000
 2bfcc30: 9001b814     	adrp	x20, 0x62fc000
 2bfcc34: 396d9ac8     	ldrb	w8, [x22, #0xb66]
 2bfcc38: f9448eb5     	ldr	x21, [x21, #0x918]
 2bfcc3c: f9449294     	ldr	x20, [x20, #0x920]
 2bfcc40: aa0003f3     	mov	x19, x0
 2bfcc44: 37000128     	tbnz	w8, #0x0, 0x2bfcc68 <__start_il2cpp+0x134654>
 2bfcc48: 9001b800     	adrp	x0, 0x62fc000
 2bfcc4c: f9449000     	ldr	x0, [x0, #0x920]
 2bfcc50: 97f76864     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfcc54: 9001b800     	adrp	x0, 0x62fc000
 2bfcc58: f9448c00     	ldr	x0, [x0, #0x918]
 2bfcc5c: 97f76861     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfcc60: 52800028     	mov	w8, #0x1                // =1
 2bfcc64: 392d9ac8     	strb	w8, [x22, #0xb66]
 2bfcc68: d0ff2428     	adrp	x8, 0x1082000
 2bfcc6c: f94002a0     	ldr	x0, [x21]
 2bfcc70: fd45cd00     	ldr	d0, [x8, #0xb98]
 2bfcc74: 52800028     	mov	w8, #0x1                // =1
 2bfcc78: 39009268     	strb	w8, [x19, #0x24]
 2bfcc7c: fd000a60     	str	d0, [x19, #0x10]
 2bfcc80: 97f768fe     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bfcc84: f9400281     	ldr	x1, [x20]
 2bfcc88: aa0003f4     	mov	x20, x0
 2bfcc8c: 943cae4f     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2bfcc90: aa1303e0     	mov	x0, x19
 2bfcc94: aa1403e1     	mov	x1, x20
 2bfcc98: f8048c14     	str	x20, [x0, #0x48]!
 2bfcc9c: 97f7683c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bfcca0: aa1303e0     	mov	x0, x19
 2bfcca4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bfcca8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bfccac: aa1f03e1     	mov	x1, xzr
 2bfccb0: f84307fe     	ldr	x30, [sp], #0x30
 2bfccb4: 14954ba5     	b	0x514fb48 <__start_il2cpp+0x2687534>
