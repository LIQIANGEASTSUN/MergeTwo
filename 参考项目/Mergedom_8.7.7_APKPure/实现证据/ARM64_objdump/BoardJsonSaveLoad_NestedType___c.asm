
# BoardJsonSaveLoad+__c :: System.Void .cctor()
# VA 0x2c6c3e0 .. 0x2c6c448 (next mapped method entry)
 2c6c3e0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c6c3e4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c6c3e8: d001d533     	adrp	x19, 0x6712000
 2c6c3ec: f001b494     	adrp	x20, 0x62ff000
 2c6c3f0: 397aea68     	ldrb	w8, [x19, #0xeba]
 2c6c3f4: f9415e94     	ldr	x20, [x20, #0x2b8]
 2c6c3f8: 370000c8     	tbnz	w8, #0x0, 0x2c6c410 <__start_il2cpp+0x1a3dfc>
 2c6c3fc: f001b480     	adrp	x0, 0x62ff000
 2c6c400: f9415c00     	ldr	x0, [x0, #0x2b8]
 2c6c404: 97f5aa77     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c6c408: 52800028     	mov	w8, #0x1                // =1
 2c6c40c: 393aea68     	strb	w8, [x19, #0xeba]
 2c6c410: f9400280     	ldr	x0, [x20]
 2c6c414: 97f5ab19     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c6c418: aa1f03e1     	mov	x1, xzr
 2c6c41c: aa0003f3     	mov	x19, x0
 2c6c420: 94938dca     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c6c424: f9400288     	ldr	x8, [x20]
 2c6c428: aa1303e1     	mov	x1, x19
 2c6c42c: f9405d08     	ldr	x8, [x8, #0xb8]
 2c6c430: f9000113     	str	x19, [x8]
 2c6c434: f9400288     	ldr	x8, [x20]
 2c6c438: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c6c43c: f9405d00     	ldr	x0, [x8, #0xb8]
 2c6c440: f84207fe     	ldr	x30, [sp], #0x20
 2c6c444: 17f5aa52     	b	0x29d6d8c <mono_class_get_checked+0x674>

# BoardJsonSaveLoad+__c :: System.Void .ctor()
# VA 0x2c6c448 .. 0x2c6c450 (next mapped method entry)
 2c6c448: aa1f03e1     	mov	x1, xzr
 2c6c44c: 14938dbf     	b	0x514fb48 <__start_il2cpp+0x2687534>

# BoardJsonSaveLoad+__c :: System.DateTime <Initialize>b__6_0(System.String d)
# VA 0x2c6c450 .. 0x2c6c4b8 (next mapped method entry)
 2c6c450: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c6c454: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c6c458: d001d534     	adrp	x20, 0x6712000
 2c6c45c: 9001b4b5     	adrp	x21, 0x6300000
 2c6c460: aa0103f3     	mov	x19, x1
 2c6c464: 397aee88     	ldrb	w8, [x20, #0xebb]
 2c6c468: f9426eb5     	ldr	x21, [x21, #0x4d8]
 2c6c46c: 370000c8     	tbnz	w8, #0x0, 0x2c6c484 <__start_il2cpp+0x1a3e70>
 2c6c470: 9001b4a0     	adrp	x0, 0x6300000
 2c6c474: f9426c00     	ldr	x0, [x0, #0x4d8]
 2c6c478: 97f5aa5a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c6c47c: 52800028     	mov	w8, #0x1                // =1
 2c6c480: 393aee88     	strb	w8, [x20, #0xebb]
 2c6c484: f94002a0     	ldr	x0, [x21]
 2c6c488: 97f5aafc     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c6c48c: aa1303e1     	mov	x1, x19
 2c6c490: aa1f03e2     	mov	x2, xzr
 2c6c494: aa0003f4     	mov	x20, x0
 2c6c498: 949196fc     	bl	0x50d2088 <__start_il2cpp+0x2609a74>
 2c6c49c: b40000d4     	cbz	x20, 0x2c6c4b4 <__start_il2cpp+0x1a3ea0>
 2c6c4a0: aa1403e0     	mov	x0, x20
 2c6c4a4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c6c4a8: aa1f03e1     	mov	x1, xzr
 2c6c4ac: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c6c4b0: 14919cce     	b	0x50d37e8 <__start_il2cpp+0x260b1d4>
 2c6c4b4: 97f5aaf5     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardJsonSaveLoad+__c :: System.String <Initialize>b__6_1(System.String file)
# VA 0x2c6c4b8 .. 0x2c6c550 (next mapped method entry)
 2c6c4b8: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c6c4bc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c6c4c0: d001d534     	adrp	x20, 0x6712000
 2c6c4c4: d001b435     	adrp	x21, 0x62f2000
 2c6c4c8: aa0103f3     	mov	x19, x1
 2c6c4cc: 397af288     	ldrb	w8, [x20, #0xebc]
 2c6c4d0: f9410eb5     	ldr	x21, [x21, #0x218]
 2c6c4d4: 37000188     	tbnz	w8, #0x0, 0x2c6c504 <__start_il2cpp+0x1a3ef0>
 2c6c4d8: d001b420     	adrp	x0, 0x62f2000
 2c6c4dc: f9410c00     	ldr	x0, [x0, #0x218]
 2c6c4e0: 97f5aa40     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c6c4e4: d001b480     	adrp	x0, 0x62fe000
 2c6c4e8: f9478000     	ldr	x0, [x0, #0xf00]
 2c6c4ec: 97f5aa3d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c6c4f0: b001b420     	adrp	x0, 0x62f1000
 2c6c4f4: f940d800     	ldr	x0, [x0, #0x1b0]
 2c6c4f8: 97f5aa3a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c6c4fc: 52800028     	mov	w8, #0x1                // =1
 2c6c500: 393af288     	strb	w8, [x20, #0xebc]
 2c6c504: f94002a0     	ldr	x0, [x21]
 2c6c508: b940e408     	ldr	w8, [x0, #0xe4]
 2c6c50c: 35000048     	cbnz	w8, 0x2c6c514 <__start_il2cpp+0x1a3f00>
 2c6c510: 97f5aa93     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c6c514: aa1303e0     	mov	x0, x19
 2c6c518: aa1f03e1     	mov	x1, xzr
 2c6c51c: 9491972d     	bl	0x50d21d0 <__start_il2cpp+0x2609bbc>
 2c6c520: b4000160     	cbz	x0, 0x2c6c54c <__start_il2cpp+0x1a3f38>
 2c6c524: d001b488     	adrp	x8, 0x62fe000
 2c6c528: b001b429     	adrp	x9, 0x62f1000
 2c6c52c: aa1f03e3     	mov	x3, xzr
 2c6c530: f9478108     	ldr	x8, [x8, #0xf00]
 2c6c534: f940d929     	ldr	x9, [x9, #0x1b0]
 2c6c538: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c6c53c: f9400101     	ldr	x1, [x8]
 2c6c540: f9400122     	ldr	x2, [x9]
 2c6c544: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c6c548: 148c303d     	b	0x4f7863c <__start_il2cpp+0x24b0028>
 2c6c54c: 97f5aacf     	bl	0x29d7088 <mono_class_get_checked+0x970>
