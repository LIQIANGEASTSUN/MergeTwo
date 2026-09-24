
# ItemLevelData :: System.Void .ctor()
# VA 0x2bfcb88 .. 0x2bfcc1c (next mapped method entry)
 2bfcb88: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bfcb8c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bfcb90: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bfcb94: d001d8b6     	adrp	x22, 0x6712000
 2bfcb98: 9001b815     	adrp	x21, 0x62fc000
 2bfcb9c: 9001b814     	adrp	x20, 0x62fc000
 2bfcba0: 396d96c8     	ldrb	w8, [x22, #0xb65]
 2bfcba4: f94486b5     	ldr	x21, [x21, #0x908]
 2bfcba8: f9448a94     	ldr	x20, [x20, #0x910]
 2bfcbac: aa0003f3     	mov	x19, x0
 2bfcbb0: 37000128     	tbnz	w8, #0x0, 0x2bfcbd4 <__start_il2cpp+0x1345c0>
 2bfcbb4: 9001b800     	adrp	x0, 0x62fc000
 2bfcbb8: f9448800     	ldr	x0, [x0, #0x910]
 2bfcbbc: 97f76889     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfcbc0: 9001b800     	adrp	x0, 0x62fc000
 2bfcbc4: f9448400     	ldr	x0, [x0, #0x908]
 2bfcbc8: 97f76886     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfcbcc: 52800028     	mov	w8, #0x1                // =1
 2bfcbd0: 392d96c8     	strb	w8, [x22, #0xb65]
 2bfcbd4: d0ff2428     	adrp	x8, 0x1082000
 2bfcbd8: f94002a0     	ldr	x0, [x21]
 2bfcbdc: fd45c900     	ldr	d0, [x8, #0xb90]
 2bfcbe0: fc02c260     	stur	d0, [x19, #0x2c]
 2bfcbe4: 97f76925     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bfcbe8: f9400281     	ldr	x1, [x20]
 2bfcbec: aa0003f4     	mov	x20, x0
 2bfcbf0: 943cae76     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2bfcbf4: aa1303e0     	mov	x0, x19
 2bfcbf8: aa1403e1     	mov	x1, x20
 2bfcbfc: f8038c14     	str	x20, [x0, #0x38]!
 2bfcc00: 97f76863     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bfcc04: aa1303e0     	mov	x0, x19
 2bfcc08: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bfcc0c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bfcc10: aa1f03e1     	mov	x1, xzr
 2bfcc14: f84307fe     	ldr	x30, [sp], #0x30
 2bfcc18: 14954bcc     	b	0x514fb48 <__start_il2cpp+0x2687534>
