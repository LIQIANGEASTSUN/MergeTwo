
# ActiveItemProducerData :: System.Void .ctor()
# VA 0x2b9d0d4 .. 0x2b9d0dc (next mapped method entry)
 2b9d0d4: aa1f03e1     	mov	x1, xzr
 2b9d0d8: 1496ca9c     	b	0x514fb48 <__start_il2cpp+0x2687534>

# ActiveItemProducerData :: System.Void .ctor(DataObjectProducer data)
# VA 0x2b9d0dc .. 0x2b9d148 (next mapped method entry)
 2b9d0dc: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b9d0e0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9d0e4: aa0103f3     	mov	x19, x1
 2b9d0e8: aa1f03e1     	mov	x1, xzr
 2b9d0ec: aa0003f4     	mov	x20, x0
 2b9d0f0: 9496ca96     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2b9d0f4: b4000293     	cbz	x19, 0x2b9d144 <__start_il2cpp+0xd4b30>
 2b9d0f8: b9401268     	ldr	w8, [x19, #0x10]
 2b9d0fc: 39405269     	ldrb	w9, [x19, #0x14]
 2b9d100: aa1403e0     	mov	x0, x20
 2b9d104: b9401a6a     	ldr	w10, [x19, #0x18]
 2b9d108: f9401261     	ldr	x1, [x19, #0x20]
 2b9d10c: b9001288     	str	w8, [x20, #0x10]
 2b9d110: 39005289     	strb	w9, [x20, #0x14]
 2b9d114: b9001a8a     	str	w10, [x20, #0x18]
 2b9d118: f8020c01     	str	x1, [x0, #0x20]!
 2b9d11c: 97f8e71c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9d120: f9401661     	ldr	x1, [x19, #0x28]
 2b9d124: f8028e81     	str	x1, [x20, #0x28]!
 2b9d128: aa1403e0     	mov	x0, x20
 2b9d12c: 97f8e718     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9d130: b9403268     	ldr	w8, [x19, #0x30]
 2b9d134: b9000a88     	str	w8, [x20, #0x8]
 2b9d138: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9d13c: f84207fe     	ldr	x30, [sp], #0x20
 2b9d140: d65f03c0     	ret
 2b9d144: 97f8e7d1     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ActiveItemProducerData :: System.Void .ctor(SimpleJSON.JSONNode json)
# VA 0x2b9d148 .. 0x2b9d328 (next mapped method entry)
 2b9d148: f81b0ffe     	str	x30, [sp, #-0x50]!
 2b9d14c: a90167fa     	stp	x26, x25, [sp, #0x10]
 2b9d150: a9025ff8     	stp	x24, x23, [sp, #0x20]
 2b9d154: a90357f6     	stp	x22, x21, [sp, #0x30]
 2b9d158: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2b9d15c: b001dbb5     	adrp	x21, 0x6712000
 2b9d160: aa0103f4     	mov	x20, x1
 2b9d164: aa0003f3     	mov	x19, x0
 2b9d168: 3962c2a8     	ldrb	w8, [x21, #0x8b0]
 2b9d16c: 37000308     	tbnz	w8, #0x0, 0x2b9d1cc <__start_il2cpp+0xd4bb8>
 2b9d170: b001bac0     	adrp	x0, 0x62f6000
 2b9d174: f943d400     	ldr	x0, [x0, #0x7a8]
 2b9d178: 97f8e71a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d17c: 9001bae0     	adrp	x0, 0x62f9000
 2b9d180: f946e400     	ldr	x0, [x0, #0xdc8]
 2b9d184: 97f8e717     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d188: 9001bae0     	adrp	x0, 0x62f9000
 2b9d18c: f946e800     	ldr	x0, [x0, #0xdd0]
 2b9d190: 97f8e714     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d194: 9001bae0     	adrp	x0, 0x62f9000
 2b9d198: f946ec00     	ldr	x0, [x0, #0xdd8]
 2b9d19c: 97f8e711     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d1a0: 9001bae0     	adrp	x0, 0x62f9000
 2b9d1a4: f946f000     	ldr	x0, [x0, #0xde0]
 2b9d1a8: 97f8e70e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d1ac: 9001bae0     	adrp	x0, 0x62f9000
 2b9d1b0: f946f400     	ldr	x0, [x0, #0xde8]
 2b9d1b4: 97f8e70b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d1b8: 9001bae0     	adrp	x0, 0x62f9000
 2b9d1bc: f946f800     	ldr	x0, [x0, #0xdf0]
 2b9d1c0: 97f8e708     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d1c4: 52800028     	mov	w8, #0x1                // =1
 2b9d1c8: 3922c2a8     	strb	w8, [x21, #0x8b0]
 2b9d1cc: aa1303e0     	mov	x0, x19
 2b9d1d0: aa1f03e1     	mov	x1, xzr
 2b9d1d4: 9496ca5d     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2b9d1d8: b4000a74     	cbz	x20, 0x2b9d324 <__start_il2cpp+0xd4d10>
 2b9d1dc: 9001bae8     	adrp	x8, 0x62f9000
 2b9d1e0: b001bad5     	adrp	x21, 0x62f6000
 2b9d1e4: 9001bafa     	adrp	x26, 0x62f9000
 2b9d1e8: 9001baf9     	adrp	x25, 0x62f9000
 2b9d1ec: 9001baf8     	adrp	x24, 0x62f9000
 2b9d1f0: 9001baf7     	adrp	x23, 0x62f9000
 2b9d1f4: f946f908     	ldr	x8, [x8, #0xdf0]
 2b9d1f8: f943d6b5     	ldr	x21, [x21, #0x7a8]
 2b9d1fc: f946ef5a     	ldr	x26, [x26, #0xdd8]
 2b9d200: f946eb39     	ldr	x25, [x25, #0xdd0]
 2b9d204: f946f318     	ldr	x24, [x24, #0xde0]
 2b9d208: f946f6f7     	ldr	x23, [x23, #0xde8]
 2b9d20c: f9400289     	ldr	x9, [x20]
 2b9d210: 9001baf6     	adrp	x22, 0x62f9000
 2b9d214: aa1403e0     	mov	x0, x20
 2b9d218: f946e6d6     	ldr	x22, [x22, #0xdc8]
 2b9d21c: f9400101     	ldr	x1, [x8]
 2b9d220: a95a8928     	ldp	x8, x2, [x9, #0x1a8]
 2b9d224: d63f0100     	blr	x8
 2b9d228: f94002a8     	ldr	x8, [x21]
 2b9d22c: aa0003f5     	mov	x21, x0
 2b9d230: b940e509     	ldr	w9, [x8, #0xe4]
 2b9d234: 35000069     	cbnz	w9, 0x2b9d240 <__start_il2cpp+0xd4c2c>
 2b9d238: aa0803e0     	mov	x0, x8
 2b9d23c: 97f8e748     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9d240: aa1503e0     	mov	x0, x21
 2b9d244: aa1f03e1     	mov	x1, xzr
 2b9d248: 94a0a78e     	bl	0x53c7080 <__start_il2cpp+0x28fea6c>
 2b9d24c: b9001260     	str	w0, [x19, #0x10]
 2b9d250: f9400341     	ldr	x1, [x26]
 2b9d254: aa1403e0     	mov	x0, x20
 2b9d258: f9400288     	ldr	x8, [x20]
 2b9d25c: a95a8909     	ldp	x9, x2, [x8, #0x1a8]
 2b9d260: d63f0120     	blr	x9
 2b9d264: aa1f03e1     	mov	x1, xzr
 2b9d268: 94a0a88a     	bl	0x53c7490 <__start_il2cpp+0x28fee7c>
 2b9d26c: 12000008     	and	w8, w0, #0x1
 2b9d270: f9400321     	ldr	x1, [x25]
 2b9d274: aa1403e0     	mov	x0, x20
 2b9d278: 39005268     	strb	w8, [x19, #0x14]
 2b9d27c: f9400288     	ldr	x8, [x20]
 2b9d280: a95a8909     	ldp	x9, x2, [x8, #0x1a8]
 2b9d284: d63f0120     	blr	x9
 2b9d288: aa1f03e1     	mov	x1, xzr
 2b9d28c: 94a0a77d     	bl	0x53c7080 <__start_il2cpp+0x28fea6c>
 2b9d290: b9001a60     	str	w0, [x19, #0x18]
 2b9d294: f9400301     	ldr	x1, [x24]
 2b9d298: aa1403e0     	mov	x0, x20
 2b9d29c: f9400288     	ldr	x8, [x20]
 2b9d2a0: a95a8909     	ldp	x9, x2, [x8, #0x1a8]
 2b9d2a4: d63f0120     	blr	x9
 2b9d2a8: aa1f03e1     	mov	x1, xzr
 2b9d2ac: 94a0a653     	bl	0x53c6bf8 <__start_il2cpp+0x28fe5e4>
 2b9d2b0: aa0003e1     	mov	x1, x0
 2b9d2b4: aa1303e0     	mov	x0, x19
 2b9d2b8: f8020c01     	str	x1, [x0, #0x20]!
 2b9d2bc: 97f8e6b4     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9d2c0: f9400288     	ldr	x8, [x20]
 2b9d2c4: f94002e1     	ldr	x1, [x23]
 2b9d2c8: aa1403e0     	mov	x0, x20
 2b9d2cc: a95a8909     	ldp	x9, x2, [x8, #0x1a8]
 2b9d2d0: d63f0120     	blr	x9
 2b9d2d4: aa1f03e1     	mov	x1, xzr
 2b9d2d8: 94a0a648     	bl	0x53c6bf8 <__start_il2cpp+0x28fe5e4>
 2b9d2dc: aa0003e1     	mov	x1, x0
 2b9d2e0: f8028e60     	str	x0, [x19, #0x28]!
 2b9d2e4: aa1303e0     	mov	x0, x19
 2b9d2e8: 97f8e6a9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9d2ec: f9400288     	ldr	x8, [x20]
 2b9d2f0: f94002c1     	ldr	x1, [x22]
 2b9d2f4: aa1403e0     	mov	x0, x20
 2b9d2f8: a95a8909     	ldp	x9, x2, [x8, #0x1a8]
 2b9d2fc: d63f0120     	blr	x9
 2b9d300: aa1f03e1     	mov	x1, xzr
 2b9d304: 94a0a75f     	bl	0x53c7080 <__start_il2cpp+0x28fea6c>
 2b9d308: b9000a60     	str	w0, [x19, #0x8]
 2b9d30c: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2b9d310: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2b9d314: a9425ff8     	ldp	x24, x23, [sp, #0x20]
 2b9d318: a94167fa     	ldp	x26, x25, [sp, #0x10]
 2b9d31c: f84507fe     	ldr	x30, [sp], #0x50
 2b9d320: d65f03c0     	ret
 2b9d324: 97f8e759     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ActiveItemProducerData :: SimpleJSON.JSONObject ToJsonObject()
# VA 0x2b9d328 .. 0x2b9d510 (next mapped method entry)
 2b9d328: a9bc67fe     	stp	x30, x25, [sp, #-0x40]!
 2b9d32c: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2b9d330: a90257f6     	stp	x22, x21, [sp, #0x20]
 2b9d334: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2b9d338: b001dbb4     	adrp	x20, 0x6712000
 2b9d33c: b001bad6     	adrp	x22, 0x62f6000
 2b9d340: b001bad5     	adrp	x21, 0x62f6000
 2b9d344: 3962c688     	ldrb	w8, [x20, #0x8b1]
 2b9d348: f943dad6     	ldr	x22, [x22, #0x7b0]
 2b9d34c: f943d6b5     	ldr	x21, [x21, #0x7a8]
 2b9d350: aa0003f3     	mov	x19, x0
 2b9d354: 37000368     	tbnz	w8, #0x0, 0x2b9d3c0 <__start_il2cpp+0xd4dac>
 2b9d358: b001bac0     	adrp	x0, 0x62f6000
 2b9d35c: f943d400     	ldr	x0, [x0, #0x7a8]
 2b9d360: 97f8e6a0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d364: b001bac0     	adrp	x0, 0x62f6000
 2b9d368: f943d800     	ldr	x0, [x0, #0x7b0]
 2b9d36c: 97f8e69d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d370: 9001bae0     	adrp	x0, 0x62f9000
 2b9d374: f946e400     	ldr	x0, [x0, #0xdc8]
 2b9d378: 97f8e69a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d37c: 9001bae0     	adrp	x0, 0x62f9000
 2b9d380: f946e800     	ldr	x0, [x0, #0xdd0]
 2b9d384: 97f8e697     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d388: 9001bae0     	adrp	x0, 0x62f9000
 2b9d38c: f946ec00     	ldr	x0, [x0, #0xdd8]
 2b9d390: 97f8e694     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d394: 9001bae0     	adrp	x0, 0x62f9000
 2b9d398: f946f000     	ldr	x0, [x0, #0xde0]
 2b9d39c: 97f8e691     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d3a0: 9001bae0     	adrp	x0, 0x62f9000
 2b9d3a4: f946f400     	ldr	x0, [x0, #0xde8]
 2b9d3a8: 97f8e68e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d3ac: 9001bae0     	adrp	x0, 0x62f9000
 2b9d3b0: f946f800     	ldr	x0, [x0, #0xdf0]
 2b9d3b4: 97f8e68b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d3b8: 52800028     	mov	w8, #0x1                // =1
 2b9d3bc: 3922c688     	strb	w8, [x20, #0x8b1]
 2b9d3c0: f94002c0     	ldr	x0, [x22]
 2b9d3c4: 97f8e72d     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9d3c8: aa1f03e1     	mov	x1, xzr
 2b9d3cc: aa0003f4     	mov	x20, x0
 2b9d3d0: 94a0ac07     	bl	0x53c83ec <__start_il2cpp+0x28ffdd8>
 2b9d3d4: f94002a0     	ldr	x0, [x21]
 2b9d3d8: b9401275     	ldr	w21, [x19, #0x10]
 2b9d3dc: b940e408     	ldr	w8, [x0, #0xe4]
 2b9d3e0: 35000048     	cbnz	w8, 0x2b9d3e8 <__start_il2cpp+0xd4dd4>
 2b9d3e4: 97f8e6de     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9d3e8: 2a1503e0     	mov	w0, w21
 2b9d3ec: aa1f03e1     	mov	x1, xzr
 2b9d3f0: 94a0a70e     	bl	0x53c7028 <__start_il2cpp+0x28fea14>
 2b9d3f4: b40008d4     	cbz	x20, 0x2b9d50c <__start_il2cpp+0xd4ef8>
 2b9d3f8: 9001bae8     	adrp	x8, 0x62f9000
 2b9d3fc: 9001baf8     	adrp	x24, 0x62f9000
 2b9d400: 9001baf9     	adrp	x25, 0x62f9000
 2b9d404: 9001baf7     	adrp	x23, 0x62f9000
 2b9d408: 9001baf6     	adrp	x22, 0x62f9000
 2b9d40c: f946f908     	ldr	x8, [x8, #0xdf0]
 2b9d410: f946ef18     	ldr	x24, [x24, #0xdd8]
 2b9d414: f946eb39     	ldr	x25, [x25, #0xdd0]
 2b9d418: f946f2f7     	ldr	x23, [x23, #0xde0]
 2b9d41c: f946f6d6     	ldr	x22, [x22, #0xde8]
 2b9d420: f9400289     	ldr	x9, [x20]
 2b9d424: 9001baf5     	adrp	x21, 0x62f9000
 2b9d428: f946e6b5     	ldr	x21, [x21, #0xdc8]
 2b9d42c: f9400101     	ldr	x1, [x8]
 2b9d430: aa0003e2     	mov	x2, x0
 2b9d434: a95b8d28     	ldp	x8, x3, [x9, #0x1b8]
 2b9d438: aa1403e0     	mov	x0, x20
 2b9d43c: d63f0100     	blr	x8
 2b9d440: 39405260     	ldrb	w0, [x19, #0x14]
 2b9d444: aa1f03e1     	mov	x1, xzr
 2b9d448: 94a0a7e0     	bl	0x53c73c8 <__start_il2cpp+0x28fedb4>
 2b9d44c: f9400288     	ldr	x8, [x20]
 2b9d450: f9400301     	ldr	x1, [x24]
 2b9d454: aa0003e2     	mov	x2, x0
 2b9d458: aa1403e0     	mov	x0, x20
 2b9d45c: a95b8d09     	ldp	x9, x3, [x8, #0x1b8]
 2b9d460: d63f0120     	blr	x9
 2b9d464: b9401a60     	ldr	w0, [x19, #0x18]
 2b9d468: aa1f03e1     	mov	x1, xzr
 2b9d46c: 94a0a6ef     	bl	0x53c7028 <__start_il2cpp+0x28fea14>
 2b9d470: f9400288     	ldr	x8, [x20]
 2b9d474: f9400321     	ldr	x1, [x25]
 2b9d478: aa0003e2     	mov	x2, x0
 2b9d47c: aa1403e0     	mov	x0, x20
 2b9d480: a95b8d09     	ldp	x9, x3, [x8, #0x1b8]
 2b9d484: d63f0120     	blr	x9
 2b9d488: f9401260     	ldr	x0, [x19, #0x20]
 2b9d48c: aa1f03e1     	mov	x1, xzr
 2b9d490: 94a0a578     	bl	0x53c6a70 <__start_il2cpp+0x28fe45c>
 2b9d494: f9400288     	ldr	x8, [x20]
 2b9d498: f94002e1     	ldr	x1, [x23]
 2b9d49c: aa0003e2     	mov	x2, x0
 2b9d4a0: aa1403e0     	mov	x0, x20
 2b9d4a4: a95b8d09     	ldp	x9, x3, [x8, #0x1b8]
 2b9d4a8: d63f0120     	blr	x9
 2b9d4ac: f9401660     	ldr	x0, [x19, #0x28]
 2b9d4b0: aa1f03e1     	mov	x1, xzr
 2b9d4b4: 94a0a56f     	bl	0x53c6a70 <__start_il2cpp+0x28fe45c>
 2b9d4b8: f9400288     	ldr	x8, [x20]
 2b9d4bc: f94002c1     	ldr	x1, [x22]
 2b9d4c0: aa0003e2     	mov	x2, x0
 2b9d4c4: aa1403e0     	mov	x0, x20
 2b9d4c8: a95b8d09     	ldp	x9, x3, [x8, #0x1b8]
 2b9d4cc: d63f0120     	blr	x9
 2b9d4d0: b9403260     	ldr	w0, [x19, #0x30]
 2b9d4d4: aa1f03e1     	mov	x1, xzr
 2b9d4d8: 94a0a6d4     	bl	0x53c7028 <__start_il2cpp+0x28fea14>
 2b9d4dc: f9400288     	ldr	x8, [x20]
 2b9d4e0: f94002a1     	ldr	x1, [x21]
 2b9d4e4: aa0003e2     	mov	x2, x0
 2b9d4e8: aa1403e0     	mov	x0, x20
 2b9d4ec: a95b8d09     	ldp	x9, x3, [x8, #0x1b8]
 2b9d4f0: d63f0120     	blr	x9
 2b9d4f4: aa1403e0     	mov	x0, x20
 2b9d4f8: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2b9d4fc: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2b9d500: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2b9d504: a8c467fe     	ldp	x30, x25, [sp], #0x40
 2b9d508: d65f03c0     	ret
 2b9d50c: 97f8e6df     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ActiveItemProducerData :: ActiveItemProducerData Clone()
# VA 0x2b9d510 .. 0x2b9d5b0 (next mapped method entry)
 2b9d510: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b9d514: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9d518: b001dbb4     	adrp	x20, 0x6712000
 2b9d51c: 9001baf5     	adrp	x21, 0x62f9000
 2b9d520: aa0003f3     	mov	x19, x0
 2b9d524: 3962ca88     	ldrb	w8, [x20, #0x8b2]
 2b9d528: f946feb5     	ldr	x21, [x21, #0xdf8]
 2b9d52c: 370000c8     	tbnz	w8, #0x0, 0x2b9d544 <__start_il2cpp+0xd4f30>
 2b9d530: 9001bae0     	adrp	x0, 0x62f9000
 2b9d534: f946fc00     	ldr	x0, [x0, #0xdf8]
 2b9d538: 97f8e62a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d53c: 52800028     	mov	w8, #0x1                // =1
 2b9d540: 3922ca88     	strb	w8, [x20, #0x8b2]
 2b9d544: f94002a0     	ldr	x0, [x21]
 2b9d548: 97f8e6cc     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9d54c: aa1f03e1     	mov	x1, xzr
 2b9d550: aa0003f4     	mov	x20, x0
 2b9d554: 9496c97d     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2b9d558: b40002b4     	cbz	x20, 0x2b9d5ac <__start_il2cpp+0xd4f98>
 2b9d55c: b9401268     	ldr	w8, [x19, #0x10]
 2b9d560: 39405269     	ldrb	w9, [x19, #0x14]
 2b9d564: aa1403e0     	mov	x0, x20
 2b9d568: b9401a6a     	ldr	w10, [x19, #0x18]
 2b9d56c: f9401261     	ldr	x1, [x19, #0x20]
 2b9d570: b9001288     	str	w8, [x20, #0x10]
 2b9d574: 39005289     	strb	w9, [x20, #0x14]
 2b9d578: b9001a8a     	str	w10, [x20, #0x18]
 2b9d57c: f8020c01     	str	x1, [x0, #0x20]!
 2b9d580: 97f8e603     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9d584: f9401661     	ldr	x1, [x19, #0x28]
 2b9d588: aa1403e0     	mov	x0, x20
 2b9d58c: f8028c01     	str	x1, [x0, #0x28]!
 2b9d590: 97f8e5ff     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9d594: b9403268     	ldr	w8, [x19, #0x30]
 2b9d598: aa1403e0     	mov	x0, x20
 2b9d59c: b9003288     	str	w8, [x20, #0x30]
 2b9d5a0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9d5a4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b9d5a8: d65f03c0     	ret
 2b9d5ac: 97f8e6b7     	bl	0x29d7088 <mono_class_get_checked+0x970>
