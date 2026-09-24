
# DataObjectBoard :: BoardData get_boardData()
# VA 0x2e55f40 .. 0x2e55f48 (next mapped method entry)
 2e55f40: f9401c00     	ldr	x0, [x0, #0x38]
 2e55f44: d65f03c0     	ret

# DataObjectBoard :: System.Void set_boardData(BoardData value)
# VA 0x2e55f48 .. 0x2e55f50 (next mapped method entry)
 2e55f48: f8038c01     	str	x1, [x0, #0x38]!
 2e55f4c: 17ee0390     	b	0x29d6d8c <mono_class_get_checked+0x674>

# DataObjectBoard :: System.Void .ctor()
# VA 0x2e55f50 .. 0x2e56098 (next mapped method entry)
 2e55f50: f81c0ffe     	str	x30, [sp, #-0x40]!
 2e55f54: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2e55f58: a90257f6     	stp	x22, x21, [sp, #0x20]
 2e55f5c: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2e55f60: 9001a4f8     	adrp	x24, 0x62f1000
 2e55f64: d001c5f4     	adrp	x20, 0x6713000
 2e55f68: 9001a4f7     	adrp	x23, 0x62f1000
 2e55f6c: 9001a5d6     	adrp	x22, 0x630d000
 2e55f70: 9001a5d5     	adrp	x21, 0x630d000
 2e55f74: f9410318     	ldr	x24, [x24, #0x200]
 2e55f78: f940faf7     	ldr	x23, [x23, #0x1f0]
 2e55f7c: 39799688     	ldrb	w8, [x20, #0xe65]
 2e55f80: f9445ad6     	ldr	x22, [x22, #0x8b0]
 2e55f84: f9445eb5     	ldr	x21, [x21, #0x8b8]
 2e55f88: aa0003f3     	mov	x19, x0
 2e55f8c: 370001e8     	tbnz	w8, #0x0, 0x2e55fc8 <__start_il2cpp+0x38d9b4>
 2e55f90: 9001a4e0     	adrp	x0, 0x62f1000
 2e55f94: f940f800     	ldr	x0, [x0, #0x1f0]
 2e55f98: 97ee0392     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55f9c: 9001a5c0     	adrp	x0, 0x630d000
 2e55fa0: f9445c00     	ldr	x0, [x0, #0x8b8]
 2e55fa4: 97ee038f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55fa8: 9001a4e0     	adrp	x0, 0x62f1000
 2e55fac: f9410000     	ldr	x0, [x0, #0x200]
 2e55fb0: 97ee038c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55fb4: 9001a5c0     	adrp	x0, 0x630d000
 2e55fb8: f9445800     	ldr	x0, [x0, #0x8b0]
 2e55fbc: 97ee0389     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55fc0: 52800028     	mov	w8, #0x1                // =1
 2e55fc4: 39399688     	strb	w8, [x20, #0xe65]
 2e55fc8: f9400300     	ldr	x0, [x24]
 2e55fcc: 97ee042b     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e55fd0: f94002e1     	ldr	x1, [x23]
 2e55fd4: aa0003f4     	mov	x20, x0
 2e55fd8: 9431e00a     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e55fdc: aa1303e0     	mov	x0, x19
 2e55fe0: aa1403e1     	mov	x1, x20
 2e55fe4: f8010c14     	str	x20, [x0, #0x10]!
 2e55fe8: 97ee0369     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e55fec: f9400300     	ldr	x0, [x24]
 2e55ff0: 97ee0422     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e55ff4: f94002e1     	ldr	x1, [x23]
 2e55ff8: aa0003f4     	mov	x20, x0
 2e55ffc: 9431e001     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e56000: aa1303e0     	mov	x0, x19
 2e56004: aa1403e1     	mov	x1, x20
 2e56008: f8018c14     	str	x20, [x0, #0x18]!
 2e5600c: 97ee0360     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e56010: f9400300     	ldr	x0, [x24]
 2e56014: 97ee0419     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56018: f94002e1     	ldr	x1, [x23]
 2e5601c: aa0003f4     	mov	x20, x0
 2e56020: 9431dff8     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e56024: aa1303e0     	mov	x0, x19
 2e56028: aa1403e1     	mov	x1, x20
 2e5602c: f8020c14     	str	x20, [x0, #0x20]!
 2e56030: 97ee0357     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e56034: f9400300     	ldr	x0, [x24]
 2e56038: 97ee0410     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e5603c: f94002e1     	ldr	x1, [x23]
 2e56040: aa0003f4     	mov	x20, x0
 2e56044: 9431dfef     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e56048: aa1303e0     	mov	x0, x19
 2e5604c: aa1403e1     	mov	x1, x20
 2e56050: f8028c14     	str	x20, [x0, #0x28]!
 2e56054: 97ee034e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e56058: f94002c0     	ldr	x0, [x22]
 2e5605c: 97ee0407     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56060: f94002a1     	ldr	x1, [x21]
 2e56064: aa0003f4     	mov	x20, x0
 2e56068: 94334958     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2e5606c: aa1303e0     	mov	x0, x19
 2e56070: aa1403e1     	mov	x1, x20
 2e56074: f8030c14     	str	x20, [x0, #0x30]!
 2e56078: 97ee0345     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e5607c: aa1303e0     	mov	x0, x19
 2e56080: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2e56084: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2e56088: aa1f03e1     	mov	x1, xzr
 2e5608c: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2e56090: f84407fe     	ldr	x30, [sp], #0x40
 2e56094: 148be6ad     	b	0x514fb48 <__start_il2cpp+0x2687534>

# DataObjectBoard :: System.Void .ctor(BoardData data)
# VA 0x2e56098 .. 0x2e56278 (next mapped method entry)
 2e56098: a9bc67fe     	stp	x30, x25, [sp, #-0x40]!
 2e5609c: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2e560a0: a90257f6     	stp	x22, x21, [sp, #0x20]
 2e560a4: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2e560a8: f001a4d9     	adrp	x25, 0x62f1000
 2e560ac: b001c5f5     	adrp	x21, 0x6713000
 2e560b0: f001a4d8     	adrp	x24, 0x62f1000
 2e560b4: f001a5b7     	adrp	x23, 0x630d000
 2e560b8: f001a5b6     	adrp	x22, 0x630d000
 2e560bc: f9410339     	ldr	x25, [x25, #0x200]
 2e560c0: f940fb18     	ldr	x24, [x24, #0x1f0]
 2e560c4: 39799aa8     	ldrb	w8, [x21, #0xe66]
 2e560c8: f9445af7     	ldr	x23, [x23, #0x8b0]
 2e560cc: f9445ed6     	ldr	x22, [x22, #0x8b8]
 2e560d0: aa0103f3     	mov	x19, x1
 2e560d4: aa0003f4     	mov	x20, x0
 2e560d8: 37000308     	tbnz	w8, #0x0, 0x2e56138 <__start_il2cpp+0x38db24>
 2e560dc: d001a4c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2e560e0: f946e800     	ldr	x0, [x0, #0xdd0]
 2e560e4: 97ee033f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e560e8: d001a4c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2e560ec: f946f000     	ldr	x0, [x0, #0xde0]
 2e560f0: 97ee033c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e560f4: f001a4c0     	adrp	x0, 0x62f1000
 2e560f8: f940f800     	ldr	x0, [x0, #0x1f0]
 2e560fc: 97ee0339     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56100: f001a5a0     	adrp	x0, 0x630d000
 2e56104: f9445c00     	ldr	x0, [x0, #0x8b8]
 2e56108: 97ee0336     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e5610c: f001a4c0     	adrp	x0, 0x62f1000
 2e56110: f9410000     	ldr	x0, [x0, #0x200]
 2e56114: 97ee0333     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56118: f001a5a0     	adrp	x0, 0x630d000
 2e5611c: f9445800     	ldr	x0, [x0, #0x8b0]
 2e56120: 97ee0330     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56124: f001a5a0     	adrp	x0, 0x630d000
 2e56128: f9446000     	ldr	x0, [x0, #0x8c0]
 2e5612c: 97ee032d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56130: 52800028     	mov	w8, #0x1                // =1
 2e56134: 39399aa8     	strb	w8, [x21, #0xe66]
 2e56138: f9400320     	ldr	x0, [x25]
 2e5613c: 97ee03cf     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56140: f9400301     	ldr	x1, [x24]
 2e56144: aa0003f5     	mov	x21, x0
 2e56148: 9431dfae     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e5614c: aa1403e0     	mov	x0, x20
 2e56150: aa1503e1     	mov	x1, x21
 2e56154: f8010c15     	str	x21, [x0, #0x10]!
 2e56158: 97ee030d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e5615c: f9400320     	ldr	x0, [x25]
 2e56160: 97ee03c6     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56164: f9400301     	ldr	x1, [x24]
 2e56168: aa0003f5     	mov	x21, x0
 2e5616c: 9431dfa5     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e56170: aa1403e0     	mov	x0, x20
 2e56174: aa1503e1     	mov	x1, x21
 2e56178: f8018c15     	str	x21, [x0, #0x18]!
 2e5617c: 97ee0304     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e56180: f9400320     	ldr	x0, [x25]
 2e56184: 97ee03bd     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56188: f9400301     	ldr	x1, [x24]
 2e5618c: aa0003f5     	mov	x21, x0
 2e56190: 9431df9c     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e56194: aa1403e0     	mov	x0, x20
 2e56198: aa1503e1     	mov	x1, x21
 2e5619c: f8020c15     	str	x21, [x0, #0x20]!
 2e561a0: 97ee02fb     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e561a4: f9400320     	ldr	x0, [x25]
 2e561a8: 97ee03b4     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e561ac: f9400301     	ldr	x1, [x24]
 2e561b0: aa0003f5     	mov	x21, x0
 2e561b4: 9431df93     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e561b8: aa1403e0     	mov	x0, x20
 2e561bc: aa1503e1     	mov	x1, x21
 2e561c0: f8028c15     	str	x21, [x0, #0x28]!
 2e561c4: 97ee02f2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e561c8: f94002e0     	ldr	x0, [x23]
 2e561cc: 97ee03ab     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e561d0: f94002c1     	ldr	x1, [x22]
 2e561d4: aa0003f5     	mov	x21, x0
 2e561d8: 943348fc     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2e561dc: aa1403e0     	mov	x0, x20
 2e561e0: aa1503e1     	mov	x1, x21
 2e561e4: f8030c15     	str	x21, [x0, #0x30]!
 2e561e8: 97ee02e9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e561ec: aa1403e0     	mov	x0, x20
 2e561f0: aa1f03e1     	mov	x1, xzr
 2e561f4: 948be655     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2e561f8: b4000133     	cbz	x19, 0x2e5621c <__start_il2cpp+0x38dc08>
 2e561fc: f8038e93     	str	x19, [x20, #0x38]!
 2e56200: aa1403e0     	mov	x0, x20
 2e56204: aa1303e1     	mov	x1, x19
 2e56208: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2e5620c: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2e56210: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2e56214: a8c467fe     	ldp	x30, x25, [sp], #0x40
 2e56218: 17ee02dd     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2e5621c: d001a4c8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2e56220: f946f108     	ldr	x8, [x8, #0xde0]
 2e56224: f9400100     	ldr	x0, [x8]
 2e56228: 97ee0394     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e5622c: f001a5a8     	adrp	x8, 0x630d000
 2e56230: aa1f03e2     	mov	x2, xzr
 2e56234: aa0003f3     	mov	x19, x0
 2e56238: f9446108     	ldr	x8, [x8, #0x8c0]
 2e5623c: f9400101     	ldr	x1, [x8]
 2e56240: 948bbadb     	bl	0x5144dac <__start_il2cpp+0x267c798>
 2e56244: d001a4c8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2e56248: f946e908     	ldr	x8, [x8, #0xdd0]
 2e5624c: f9400100     	ldr	x0, [x8]
 2e56250: b940e408     	ldr	w8, [x0, #0xe4]
 2e56254: 35000048     	cbnz	w8, 0x2e5625c <__start_il2cpp+0x38dc48>
 2e56258: 97ee0341     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2e5625c: aa1303e0     	mov	x0, x19
 2e56260: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2e56264: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2e56268: aa1f03e1     	mov	x1, xzr
 2e5626c: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2e56270: a8c467fe     	ldp	x30, x25, [sp], #0x40
 2e56274: 14b28465     	b	0x5af7408 <__start_il2cpp+0x302edf4>

# DataObjectBoard :: System.Void .ctor(SimpleJSON.JSONObject json)
# VA 0x2e56278 .. 0x2e56a4c (next mapped method entry)
 2e56278: d10483ff     	sub	sp, sp, #0x120
 2e5627c: a90c7bfd     	stp	x29, x30, [sp, #0xc0]
 2e56280: a90d6ffc     	stp	x28, x27, [sp, #0xd0]
 2e56284: a90e67fa     	stp	x26, x25, [sp, #0xe0]
 2e56288: a90f5ff8     	stp	x24, x23, [sp, #0xf0]
 2e5628c: a91057f6     	stp	x22, x21, [sp, #0x100]
 2e56290: a9114ff4     	stp	x20, x19, [sp, #0x110]
 2e56294: f001a4db     	adrp	x27, 0x62f1000
 2e56298: f001a4da     	adrp	x26, 0x62f1000
 2e5629c: f001a5b9     	adrp	x25, 0x630d000
 2e562a0: f001a5b7     	adrp	x23, 0x630d000
 2e562a4: b001c5f4     	adrp	x20, 0x6713000
 2e562a8: f001a516     	adrp	x22, 0x62f9000
 2e562ac: f001a515     	adrp	x21, 0x62f9000
 2e562b0: f001a513     	adrp	x19, 0x62f9000
 2e562b4: f941037b     	ldr	x27, [x27, #0x200]
 2e562b8: f940fb5a     	ldr	x26, [x26, #0x1f0]
 2e562bc: f9445b39     	ldr	x25, [x25, #0x8b0]
 2e562c0: f9445ef7     	ldr	x23, [x23, #0x8b8]
 2e562c4: f94722d6     	ldr	x22, [x22, #0xe40]
 2e562c8: 39799e88     	ldrb	w8, [x20, #0xe67]
 2e562cc: f9473ab5     	ldr	x21, [x21, #0xe70]
 2e562d0: f9473e73     	ldr	x19, [x19, #0xe78]
 2e562d4: aa0103f8     	mov	x24, x1
 2e562d8: aa0003fc     	mov	x28, x0
 2e562dc: 37000848     	tbnz	w8, #0x0, 0x2e563e4 <__start_il2cpp+0x38ddd0>
 2e562e0: f001a500     	adrp	x0, 0x62f9000
 2e562e4: f946fc00     	ldr	x0, [x0, #0xdf8]
 2e562e8: 97ee02be     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e562ec: f001a500     	adrp	x0, 0x62f9000
 2e562f0: f9472000     	ldr	x0, [x0, #0xe40]
 2e562f4: 97ee02bb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e562f8: f001a500     	adrp	x0, 0x62f9000
 2e562fc: f9470800     	ldr	x0, [x0, #0xe10]
 2e56300: 97ee02b8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56304: 9001a500     	adrp	x0, 0x62f6000
 2e56308: f943d400     	ldr	x0, [x0, #0x7a8]
 2e5630c: 97ee02b5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56310: f001a5a0     	adrp	x0, 0x630d000
 2e56314: f9446400     	ldr	x0, [x0, #0x8c8]
 2e56318: 97ee02b2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e5631c: f001a500     	adrp	x0, 0x62f9000
 2e56320: f9473000     	ldr	x0, [x0, #0xe60]
 2e56324: 97ee02af     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56328: f001a500     	adrp	x0, 0x62f9000
 2e5632c: f9471800     	ldr	x0, [x0, #0xe30]
 2e56330: 97ee02ac     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56334: f001a4c0     	adrp	x0, 0x62f1000
 2e56338: f940f800     	ldr	x0, [x0, #0x1f0]
 2e5633c: 97ee02a9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56340: f001a500     	adrp	x0, 0x62f9000
 2e56344: f9470000     	ldr	x0, [x0, #0xe00]
 2e56348: 97ee02a6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e5634c: f001a500     	adrp	x0, 0x62f9000
 2e56350: f9473c00     	ldr	x0, [x0, #0xe78]
 2e56354: 97ee02a3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56358: f001a5a0     	adrp	x0, 0x630d000
 2e5635c: f9445c00     	ldr	x0, [x0, #0x8b8]
 2e56360: 97ee02a0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56364: b001a5a0     	adrp	x0, 0x630b000
 2e56368: f9400400     	ldr	x0, [x0, #0x8]
 2e5636c: 97ee029d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56370: f001a500     	adrp	x0, 0x62f9000
 2e56374: f9470400     	ldr	x0, [x0, #0xe08]
 2e56378: 97ee029a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e5637c: f001a4c0     	adrp	x0, 0x62f1000
 2e56380: f9410000     	ldr	x0, [x0, #0x200]
 2e56384: 97ee0297     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56388: f001a500     	adrp	x0, 0x62f9000
 2e5638c: f9473800     	ldr	x0, [x0, #0xe70]
 2e56390: 97ee0294     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56394: f001a5a0     	adrp	x0, 0x630d000
 2e56398: f9445800     	ldr	x0, [x0, #0x8b0]
 2e5639c: 97ee0291     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e563a0: f001a5a0     	adrp	x0, 0x630d000
 2e563a4: f9446800     	ldr	x0, [x0, #0x8d0]
 2e563a8: 97ee028e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e563ac: 9001a4e0     	adrp	x0, 0x62f2000
 2e563b0: f942ec00     	ldr	x0, [x0, #0x5d8]
 2e563b4: 97ee028b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e563b8: f001a5a0     	adrp	x0, 0x630d000
 2e563bc: f9446c00     	ldr	x0, [x0, #0x8d8]
 2e563c0: 97ee0288     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e563c4: f001a5a0     	adrp	x0, 0x630d000
 2e563c8: f9447000     	ldr	x0, [x0, #0x8e0]
 2e563cc: 97ee0285     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e563d0: f001a5a0     	adrp	x0, 0x630d000
 2e563d4: f9447400     	ldr	x0, [x0, #0x8e8]
 2e563d8: 97ee0282     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e563dc: 52800028     	mov	w8, #0x1                // =1
 2e563e0: 39399e88     	strb	w8, [x20, #0xe67]
 2e563e4: 6f00e400     	movi	v0.2d, #0000000000000000
 2e563e8: f9400360     	ldr	x0, [x27]
 2e563ec: f9005bff     	str	xzr, [sp, #0xb0]
 2e563f0: ad0383e0     	stp	q0, q0, [sp, #0x70]
 2e563f4: ad0483e0     	stp	q0, q0, [sp, #0x90]
 2e563f8: 97ee0320     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e563fc: f9400341     	ldr	x1, [x26]
 2e56400: aa0003f4     	mov	x20, x0
 2e56404: 9431deff     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e56408: aa1c03e0     	mov	x0, x28
 2e5640c: aa1403e1     	mov	x1, x20
 2e56410: f8010c14     	str	x20, [x0, #0x10]!
 2e56414: 97ee025e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e56418: f9400360     	ldr	x0, [x27]
 2e5641c: 97ee0317     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56420: f9400341     	ldr	x1, [x26]
 2e56424: aa0003f4     	mov	x20, x0
 2e56428: 9431def6     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e5642c: aa1c03e0     	mov	x0, x28
 2e56430: aa1403e1     	mov	x1, x20
 2e56434: f8018c14     	str	x20, [x0, #0x18]!
 2e56438: 97ee0255     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e5643c: f9400360     	ldr	x0, [x27]
 2e56440: 97ee030e     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56444: f9400341     	ldr	x1, [x26]
 2e56448: aa0003f4     	mov	x20, x0
 2e5644c: 9431deed     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e56450: aa1c03e0     	mov	x0, x28
 2e56454: aa1403e1     	mov	x1, x20
 2e56458: f8020c14     	str	x20, [x0, #0x20]!
 2e5645c: 97ee024c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e56460: f9400360     	ldr	x0, [x27]
 2e56464: 97ee0305     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56468: f9400341     	ldr	x1, [x26]
 2e5646c: aa0003f4     	mov	x20, x0
 2e56470: 9431dee4     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2e56474: aa1c03e0     	mov	x0, x28
 2e56478: aa1403e1     	mov	x1, x20
 2e5647c: f8028c14     	str	x20, [x0, #0x28]!
 2e56480: 97ee0243     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e56484: f9400320     	ldr	x0, [x25]
 2e56488: 97ee02fc     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e5648c: f94002e1     	ldr	x1, [x23]
 2e56490: aa0003f4     	mov	x20, x0
 2e56494: 9433484d     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2e56498: aa1c03e0     	mov	x0, x28
 2e5649c: aa1403e1     	mov	x1, x20
 2e564a0: f8030c14     	str	x20, [x0, #0x30]!
 2e564a4: 97ee023a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e564a8: aa1c03e0     	mov	x0, x28
 2e564ac: aa1f03e1     	mov	x1, xzr
 2e564b0: 948be5a6     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2e564b4: f94002c0     	ldr	x0, [x22]
 2e564b8: 97ee02f0     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e564bc: aa1f03e1     	mov	x1, xzr
 2e564c0: aa0003f4     	mov	x20, x0
 2e564c4: 97f51db2     	bl	0x2b9db8c <__start_il2cpp+0xd5578>
 2e564c8: f94002a0     	ldr	x0, [x21]
 2e564cc: 97ee02eb     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e564d0: f9400261     	ldr	x1, [x19]
 2e564d4: aa0003f5     	mov	x21, x0
 2e564d8: 9433483c     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2e564dc: b40025f4     	cbz	x20, 0x2e56998 <__start_il2cpp+0x38e384>
 2e564e0: aa1403e0     	mov	x0, x20
 2e564e4: aa1503e1     	mov	x1, x21
 2e564e8: f8010c15     	str	x21, [x0, #0x10]!
 2e564ec: 97ee0228     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e564f0: f8038f94     	str	x20, [x28, #0x38]!
 2e564f4: aa1c03e0     	mov	x0, x28
 2e564f8: aa1403e1     	mov	x1, x20
 2e564fc: 97ee0224     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e56500: b40024d8     	cbz	x24, 0x2e56998 <__start_il2cpp+0x38e384>
 2e56504: 9001a4e8     	adrp	x8, 0x62f2000
 2e56508: aa1803e0     	mov	x0, x24
 2e5650c: aa1f03e2     	mov	x2, xzr
 2e56510: f942ed08     	ldr	x8, [x8, #0x5d8]
 2e56514: f9400309     	ldr	x9, [x24]
 2e56518: f9400101     	ldr	x1, [x8]
 2e5651c: f9418528     	ldr	x8, [x9, #0x308]
 2e56520: f9418923     	ldr	x3, [x9, #0x310]
 2e56524: d63f0100     	blr	x8
 2e56528: b4002380     	cbz	x0, 0x2e56998 <__start_il2cpp+0x38e384>
 2e5652c: f9400008     	ldr	x8, [x0]
 2e56530: f001a5b3     	adrp	x19, 0x630d000
 2e56534: f9446a73     	ldr	x19, [x19, #0x8d0]
 2e56538: f9420509     	ldr	x9, [x8, #0x408]
 2e5653c: f9420901     	ldr	x1, [x8, #0x410]
 2e56540: d63f0120     	blr	x9
 2e56544: f9400308     	ldr	x8, [x24]
 2e56548: f9400261     	ldr	x1, [x19]
 2e5654c: aa0003f4     	mov	x20, x0
 2e56550: aa1803e0     	mov	x0, x24
 2e56554: aa1f03e2     	mov	x2, xzr
 2e56558: f9418509     	ldr	x9, [x8, #0x308]
 2e5655c: f9418903     	ldr	x3, [x8, #0x310]
 2e56560: d63f0120     	blr	x9
 2e56564: b40021a0     	cbz	x0, 0x2e56998 <__start_il2cpp+0x38e384>
 2e56568: f9400008     	ldr	x8, [x0]
 2e5656c: f001a5b3     	adrp	x19, 0x630d000
 2e56570: f9447273     	ldr	x19, [x19, #0x8e0]
 2e56574: f9420509     	ldr	x9, [x8, #0x408]
 2e56578: f9420901     	ldr	x1, [x8, #0x410]
 2e5657c: d63f0120     	blr	x9
 2e56580: f9400308     	ldr	x8, [x24]
 2e56584: f9400261     	ldr	x1, [x19]
 2e56588: aa0003fd     	mov	x29, x0
 2e5658c: aa1803e0     	mov	x0, x24
 2e56590: aa1f03e2     	mov	x2, xzr
 2e56594: f9418509     	ldr	x9, [x8, #0x308]
 2e56598: f9418903     	ldr	x3, [x8, #0x310]
 2e5659c: d63f0120     	blr	x9
 2e565a0: b4001fc0     	cbz	x0, 0x2e56998 <__start_il2cpp+0x38e384>
 2e565a4: f9400008     	ldr	x8, [x0]
 2e565a8: f001a5b3     	adrp	x19, 0x630d000
 2e565ac: f9446e73     	ldr	x19, [x19, #0x8d8]
 2e565b0: f9420509     	ldr	x9, [x8, #0x408]
 2e565b4: f9420901     	ldr	x1, [x8, #0x410]
 2e565b8: d63f0120     	blr	x9
 2e565bc: f9400308     	ldr	x8, [x24]
 2e565c0: f9400261     	ldr	x1, [x19]
 2e565c4: aa0003f7     	mov	x23, x0
 2e565c8: aa1803e0     	mov	x0, x24
 2e565cc: aa1f03e2     	mov	x2, xzr
 2e565d0: f9418509     	ldr	x9, [x8, #0x308]
 2e565d4: f9418903     	ldr	x3, [x8, #0x310]
 2e565d8: d63f0120     	blr	x9
 2e565dc: b4001de0     	cbz	x0, 0x2e56998 <__start_il2cpp+0x38e384>
 2e565e0: f9400008     	ldr	x8, [x0]
 2e565e4: f001a5b3     	adrp	x19, 0x630d000
 2e565e8: f9447673     	ldr	x19, [x19, #0x8e8]
 2e565ec: f9420509     	ldr	x9, [x8, #0x408]
 2e565f0: f9420901     	ldr	x1, [x8, #0x410]
 2e565f4: d63f0120     	blr	x9
 2e565f8: f9400308     	ldr	x8, [x24]
 2e565fc: f9400261     	ldr	x1, [x19]
 2e56600: aa1f03e2     	mov	x2, xzr
 2e56604: f9000fe0     	str	x0, [sp, #0x18]
 2e56608: aa1803e0     	mov	x0, x24
 2e5660c: f9418509     	ldr	x9, [x8, #0x308]
 2e56610: f9418903     	ldr	x3, [x8, #0x310]
 2e56614: d63f0120     	blr	x9
 2e56618: b4001c00     	cbz	x0, 0x2e56998 <__start_il2cpp+0x38e384>
 2e5661c: f9400008     	ldr	x8, [x0]
 2e56620: f9420509     	ldr	x9, [x8, #0x408]
 2e56624: f9420901     	ldr	x1, [x8, #0x410]
 2e56628: d63f0120     	blr	x9
 2e5662c: f9000be0     	str	x0, [sp, #0x10]
 2e56630: b4001b54     	cbz	x20, 0x2e56998 <__start_il2cpp+0x38e384>
 2e56634: f9400288     	ldr	x8, [x20]
 2e56638: aa1403e0     	mov	x0, x20
 2e5663c: a95e8509     	ldp	x9, x1, [x8, #0x1e8]
 2e56640: d63f0120     	blr	x9
 2e56644: 7100041f     	cmp	w0, #0x1
 2e56648: 540018ab     	b.lt	0x2e5695c <__start_il2cpp+0x38e348>
 2e5664c: f001a515     	adrp	x21, 0x62f9000
 2e56650: f001a516     	adrp	x22, 0x62f9000
 2e56654: d001a4d3     	adrp	x19, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2e56658: f946feb5     	ldr	x21, [x21, #0xdf8]
 2e5665c: f9471ad6     	ldr	x22, [x22, #0xe30]
 2e56660: f9470e73     	ldr	x19, [x19, #0xe18]
 2e56664: 2a1f03f9     	mov	w25, wzr
 2e56668: 52800038     	mov	w24, #0x1               // =1
 2e5666c: f90007f4     	str	x20, [sp, #0x8]
 2e56670: f001a508     	adrp	x8, 0x62f9000
 2e56674: f9470908     	ldr	x8, [x8, #0xe10]
 2e56678: f9400100     	ldr	x0, [x8]
 2e5667c: 97ee027f     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56680: aa1f03e1     	mov	x1, xzr
 2e56684: aa0003fa     	mov	x26, x0
 2e56688: 97f51cc4     	bl	0x2b9d998 <__start_il2cpp+0xd5384>
 2e5668c: f9400288     	ldr	x8, [x20]
 2e56690: aa1403e0     	mov	x0, x20
 2e56694: 2a1903e1     	mov	w1, w25
 2e56698: a9588909     	ldp	x9, x2, [x8, #0x188]
 2e5669c: d63f0120     	blr	x9
 2e566a0: 9001a508     	adrp	x8, 0x62f6000
 2e566a4: aa0003fb     	mov	x27, x0
 2e566a8: f943d508     	ldr	x8, [x8, #0x7a8]
 2e566ac: f9400108     	ldr	x8, [x8]
 2e566b0: b940e509     	ldr	w9, [x8, #0xe4]
 2e566b4: 35000069     	cbnz	w9, 0x2e566c0 <__start_il2cpp+0x38e0ac>
 2e566b8: aa0803e0     	mov	x0, x8
 2e566bc: 97ee0228     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2e566c0: aa1b03e0     	mov	x0, x27
 2e566c4: aa1f03e1     	mov	x1, xzr
 2e566c8: 9495c26e     	bl	0x53c7080 <__start_il2cpp+0x28fea6c>
 2e566cc: b400167a     	cbz	x26, 0x2e56998 <__start_il2cpp+0x38e384>
 2e566d0: b9001740     	str	w0, [x26, #0x14]
 2e566d4: b400163d     	cbz	x29, 0x2e56998 <__start_il2cpp+0x38e384>
 2e566d8: f94003a8     	ldr	x8, [x29]
 2e566dc: aa1d03e0     	mov	x0, x29
 2e566e0: 2a1903e1     	mov	w1, w25
 2e566e4: a9588909     	ldp	x9, x2, [x8, #0x188]
 2e566e8: d63f0120     	blr	x9
 2e566ec: aa1f03e1     	mov	x1, xzr
 2e566f0: 9495c264     	bl	0x53c7080 <__start_il2cpp+0x28fea6c>
 2e566f4: 7100041f     	cmp	w0, #0x1
 2e566f8: 1a9fc408     	csinc	w8, w0, wzr, gt
 2e566fc: b9001f48     	str	w8, [x26, #0x1c]
 2e56700: b40014d7     	cbz	x23, 0x2e56998 <__start_il2cpp+0x38e384>
 2e56704: f94002e8     	ldr	x8, [x23]
 2e56708: aa1703e0     	mov	x0, x23
 2e5670c: 2a1903e1     	mov	w1, w25
 2e56710: aa1703f4     	mov	x20, x23
 2e56714: a9588909     	ldp	x9, x2, [x8, #0x188]
 2e56718: d63f0120     	blr	x9
 2e5671c: aa0003fb     	mov	x27, x0
 2e56720: f9402660     	ldr	x0, [x19, #0x48]
 2e56724: 9101b3e1     	add	x1, sp, #0x6c
 2e56728: b9006ff8     	str	w24, [sp, #0x6c]
 2e5672c: 97ee020e     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2e56730: aa0003e1     	mov	x1, x0
 2e56734: aa1b03e0     	mov	x0, x27
 2e56738: aa1f03e2     	mov	x2, xzr
 2e5673c: 9495c150     	bl	0x53c6c7c <__start_il2cpp+0x28fe668>
 2e56740: 12000008     	and	w8, w0, #0x1
 2e56744: f9400fe0     	ldr	x0, [sp, #0x18]
 2e56748: 39004348     	strb	w8, [x26, #0x10]
 2e5674c: b4001260     	cbz	x0, 0x2e56998 <__start_il2cpp+0x38e384>
 2e56750: f9400008     	ldr	x8, [x0]
 2e56754: 2a1903e1     	mov	w1, w25
 2e56758: aa1c03f7     	mov	x23, x28
 2e5675c: a9588909     	ldp	x9, x2, [x8, #0x188]
 2e56760: d63f0120     	blr	x9
 2e56764: aa0003fb     	mov	x27, x0
 2e56768: f9402660     	ldr	x0, [x19, #0x48]
 2e5676c: 9101a3e1     	add	x1, sp, #0x68
 2e56770: b9006bf8     	str	w24, [sp, #0x68]
 2e56774: 97ee01fc     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2e56778: aa0003e1     	mov	x1, x0
 2e5677c: aa1b03e0     	mov	x0, x27
 2e56780: aa1f03e2     	mov	x2, xzr
 2e56784: 9495c13e     	bl	0x53c6c7c <__start_il2cpp+0x28fe668>
 2e56788: f001a508     	adrp	x8, 0x62f9000
 2e5678c: 12000009     	and	w9, w0, #0x1
 2e56790: f9470508     	ldr	x8, [x8, #0xe08]
 2e56794: 39006349     	strb	w9, [x26, #0x18]
 2e56798: f9400108     	ldr	x8, [x8]
 2e5679c: aa0803e0     	mov	x0, x8
 2e567a0: 97ee0236     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e567a4: f001a508     	adrp	x8, 0x62f9000
 2e567a8: aa0003fc     	mov	x28, x0
 2e567ac: f9470108     	ldr	x8, [x8, #0xe00]
 2e567b0: f9400101     	ldr	x1, [x8]
 2e567b4: 94334785     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2e567b8: aa1a03fb     	mov	x27, x26
 2e567bc: aa1c03e1     	mov	x1, x28
 2e567c0: f8030f7c     	str	x28, [x27, #0x30]!
 2e567c4: aa1b03e0     	mov	x0, x27
 2e567c8: 97ee0171     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e567cc: f9400be0     	ldr	x0, [sp, #0x10]
 2e567d0: b4000e40     	cbz	x0, 0x2e56998 <__start_il2cpp+0x38e384>
 2e567d4: f9400008     	ldr	x8, [x0]
 2e567d8: 2a1903e1     	mov	w1, w25
 2e567dc: aa1d03f8     	mov	x24, x29
 2e567e0: a9588909     	ldp	x9, x2, [x8, #0x188]
 2e567e4: d63f0120     	blr	x9
 2e567e8: b4000d80     	cbz	x0, 0x2e56998 <__start_il2cpp+0x38e384>
 2e567ec: f9400008     	ldr	x8, [x0]
 2e567f0: f9419d09     	ldr	x9, [x8, #0x338]
 2e567f4: f941a101     	ldr	x1, [x8, #0x340]
 2e567f8: 910083e8     	add	x8, sp, #0x20
 2e567fc: d63f0120     	blr	x9
 2e56800: 9101c3e0     	add	x0, sp, #0x70
 2e56804: 910083e1     	add	x1, sp, #0x20
 2e56808: 52800902     	mov	w2, #0x48               // =72
 2e5680c: 94c33fbd     	bl	0x5f26700 <__register_atfork@plt+0x10>
 2e56810: 9101c3e0     	add	x0, sp, #0x70
 2e56814: aa1f03e1     	mov	x1, xzr
 2e56818: 9495df97     	bl	0x53ce674 <__start_il2cpp+0x2906060>
 2e5681c: 360004a0     	tbz	w0, #0x0, 0x2e568b0 <__start_il2cpp+0x38e29c>
 2e56820: 9101c3e0     	add	x0, sp, #0x70
 2e56824: aa1f03e1     	mov	x1, xzr
 2e56828: 9495df5f     	bl	0x53ce5a4 <__start_il2cpp+0x2905f90>
 2e5682c: f94002a0     	ldr	x0, [x21]
 2e56830: f940037c     	ldr	x28, [x27]
 2e56834: aa0103f3     	mov	x19, x1
 2e56838: 97ee0210     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e5683c: aa1303e1     	mov	x1, x19
 2e56840: aa1f03e2     	mov	x2, xzr
 2e56844: aa0003fd     	mov	x29, x0
 2e56848: 97f51a40     	bl	0x2b9d148 <__start_il2cpp+0xd4b34>
 2e5684c: b4000a7c     	cbz	x28, 0x2e56998 <__start_il2cpp+0x38e384>
 2e56850: b9401f8a     	ldr	w10, [x28, #0x1c]
 2e56854: f9400b88     	ldr	x8, [x28, #0x10]
 2e56858: f94002c9     	ldr	x9, [x22]
 2e5685c: 1100054a     	add	w10, w10, #0x1
 2e56860: b9001f8a     	str	w10, [x28, #0x1c]
 2e56864: b40009a8     	cbz	x8, 0x2e56998 <__start_il2cpp+0x38e384>
 2e56868: b9801b8a     	ldrsw	x10, [x28, #0x18]
 2e5686c: b940190b     	ldr	w11, [x8, #0x18]
 2e56870: 6b0b015f     	cmp	w10, w11
 2e56874: 54000102     	b.hs	0x2e56894 <__start_il2cpp+0x38e280>
 2e56878: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2e5687c: 11000549     	add	w9, w10, #0x1
 2e56880: aa1d03e1     	mov	x1, x29
 2e56884: b9001b89     	str	w9, [x28, #0x18]
 2e56888: f8020c1d     	str	x29, [x0, #0x20]!
 2e5688c: 97ee0140     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e56890: 17ffffe0     	b	0x2e56810 <__start_il2cpp+0x38e1fc>
 2e56894: f9401128     	ldr	x8, [x9, #0x20]
 2e56898: aa1c03e0     	mov	x0, x28
 2e5689c: aa1d03e1     	mov	x1, x29
 2e568a0: f9406108     	ldr	x8, [x8, #0xc0]
 2e568a4: f9403902     	ldr	x2, [x8, #0x70]
 2e568a8: 94334962     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2e568ac: 17ffffd9     	b	0x2e56810 <__start_il2cpp+0x38e1fc>
 2e568b0: f94002e8     	ldr	x8, [x23]
 2e568b4: b4000728     	cbz	x8, 0x2e56998 <__start_il2cpp+0x38e384>
 2e568b8: f9400900     	ldr	x0, [x8, #0x10]
 2e568bc: b40006e0     	cbz	x0, 0x2e56998 <__start_il2cpp+0x38e384>
 2e568c0: b9401c0a     	ldr	w10, [x0, #0x1c]
 2e568c4: f001a509     	adrp	x9, 0x62f9000
 2e568c8: f9400808     	ldr	x8, [x0, #0x10]
 2e568cc: f9473129     	ldr	x9, [x9, #0xe60]
 2e568d0: d001a4d3     	adrp	x19, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2e568d4: aa1703fc     	mov	x28, x23
 2e568d8: 1100054a     	add	w10, w10, #0x1
 2e568dc: aa1403f7     	mov	x23, x20
 2e568e0: f94007f4     	ldr	x20, [sp, #0x8]
 2e568e4: b9001c0a     	str	w10, [x0, #0x1c]
 2e568e8: f9400129     	ldr	x9, [x9]
 2e568ec: aa1803fd     	mov	x29, x24
 2e568f0: f9470e73     	ldr	x19, [x19, #0xe18]
 2e568f4: 52800038     	mov	w24, #0x1               // =1
 2e568f8: b4000508     	cbz	x8, 0x2e56998 <__start_il2cpp+0x38e384>
 2e568fc: b980180a     	ldrsw	x10, [x0, #0x18]
 2e56900: b940190b     	ldr	w11, [x8, #0x18]
 2e56904: 6b0b015f     	cmp	w10, w11
 2e56908: 54000122     	b.hs	0x2e5692c <__start_il2cpp+0x38e318>
 2e5690c: 8b0a0d08     	add	x8, x8, x10, lsl #3
 2e56910: 11000549     	add	w9, w10, #0x1
 2e56914: aa1a03e1     	mov	x1, x26
 2e56918: b9001809     	str	w9, [x0, #0x18]
 2e5691c: f8020d1a     	str	x26, [x8, #0x20]!
 2e56920: aa0803e0     	mov	x0, x8
 2e56924: 97ee011a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e56928: 14000006     	b	0x2e56940 <__start_il2cpp+0x38e32c>
 2e5692c: f9401128     	ldr	x8, [x9, #0x20]
 2e56930: aa1a03e1     	mov	x1, x26
 2e56934: f9406108     	ldr	x8, [x8, #0xc0]
 2e56938: f9403902     	ldr	x2, [x8, #0x70]
 2e5693c: 9433493d     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2e56940: f9400288     	ldr	x8, [x20]
 2e56944: aa1403e0     	mov	x0, x20
 2e56948: 11000739     	add	w25, w25, #0x1
 2e5694c: a95e8509     	ldp	x9, x1, [x8, #0x1e8]
 2e56950: d63f0120     	blr	x9
 2e56954: 6b00033f     	cmp	w25, w0
 2e56958: 54ffe8cb     	b.lt	0x2e56670 <__start_il2cpp+0x38e05c>
 2e5695c: f9400393     	ldr	x19, [x28]
 2e56960: b40001d3     	cbz	x19, 0x2e56998 <__start_il2cpp+0x38e384>
 2e56964: f9400a68     	ldr	x8, [x19, #0x10]
 2e56968: b4000188     	cbz	x8, 0x2e56998 <__start_il2cpp+0x38e384>
 2e5696c: b9401908     	ldr	w8, [x8, #0x18]
 2e56970: 7100f91f     	cmp	w8, #0x3e
 2e56974: 5400014d     	b.le	0x2e5699c <__start_il2cpp+0x38e388>
 2e56978: a9514ff4     	ldp	x20, x19, [sp, #0x110]
 2e5697c: a95057f6     	ldp	x22, x21, [sp, #0x100]
 2e56980: a94f5ff8     	ldp	x24, x23, [sp, #0xf0]
 2e56984: a94e67fa     	ldp	x26, x25, [sp, #0xe0]
 2e56988: a94d6ffc     	ldp	x28, x27, [sp, #0xd0]
 2e5698c: a94c7bfd     	ldp	x29, x30, [sp, #0xc0]
 2e56990: 910483ff     	add	sp, sp, #0x120
 2e56994: d65f03c0     	ret
 2e56998: 97ee01bc     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e5699c: aa1303e0     	mov	x0, x19
 2e569a0: 97e14f09     	bl	0x26aa5c4 <.text+0x5464>
 2e569a4: f9400a73     	ldr	x19, [x19, #0x10]
 2e569a8: aa1303e0     	mov	x0, x19
 2e569ac: 97e14f06     	bl	0x26aa5c4 <.text+0x5464>
 2e569b0: b001a5a0     	adrp	x0, 0x630b000
 2e569b4: f9400400     	ldr	x0, [x0, #0x8]
 2e569b8: 97ee010f     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2e569bc: d001a4d4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2e569c0: 910083e1     	add	x1, sp, #0x20
 2e569c4: f9470e94     	ldr	x20, [x20, #0xe18]
 2e569c8: b9401a68     	ldr	w8, [x19, #0x18]
 2e569cc: f9402680     	ldr	x0, [x20, #0x48]
 2e569d0: b90023e8     	str	w8, [sp, #0x20]
 2e569d4: 97ee0164     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2e569d8: aa0003f3     	mov	x19, x0
 2e569dc: f9402680     	ldr	x0, [x20, #0x48]
 2e569e0: 528007e8     	mov	w8, #0x3f               // =63
 2e569e4: 9101b3e1     	add	x1, sp, #0x6c
 2e569e8: b9006fe8     	str	w8, [sp, #0x6c]
 2e569ec: 97ee015e     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2e569f0: aa0003f4     	mov	x20, x0
 2e569f4: f001a5a0     	adrp	x0, 0x630d000
 2e569f8: f9447800     	ldr	x0, [x0, #0x8f0]
 2e569fc: 97ee00fe     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2e56a00: aa1303e1     	mov	x1, x19
 2e56a04: aa1403e2     	mov	x2, x20
 2e56a08: aa1f03e3     	mov	x3, xzr
 2e56a0c: 9484813a     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2e56a10: aa0003f3     	mov	x19, x0
 2e56a14: d001a4c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2e56a18: f946f000     	ldr	x0, [x0, #0xde0]
 2e56a1c: 97ee00f6     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2e56a20: 97ee0196     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56a24: aa1303e1     	mov	x1, x19
 2e56a28: aa1f03e2     	mov	x2, xzr
 2e56a2c: aa0003f4     	mov	x20, x0
 2e56a30: 948bb8df     	bl	0x5144dac <__start_il2cpp+0x267c798>
 2e56a34: f001a5a0     	adrp	x0, 0x630d000
 2e56a38: f9447c00     	ldr	x0, [x0, #0x8f8]
 2e56a3c: 97ee00ee     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2e56a40: aa0003e1     	mov	x1, x0
 2e56a44: aa1403e0     	mov	x0, x20
 2e56a48: 97ee0141     	bl	0x29d6f4c <mono_class_get_checked+0x834>

# DataObjectBoard :: System.Void FillJsonObject(SimpleJSON.JSONObject json)
# VA 0x2e56a4c .. 0x2e56ff0 (next mapped method entry)
 2e56a4c: d10343ff     	sub	sp, sp, #0xd0
 2e56a50: a9077bfd     	stp	x29, x30, [sp, #0x70]
 2e56a54: a9086ffc     	stp	x28, x27, [sp, #0x80]
 2e56a58: a90967fa     	stp	x26, x25, [sp, #0x90]
 2e56a5c: a90a5ff8     	stp	x24, x23, [sp, #0xa0]
 2e56a60: a90b57f6     	stp	x22, x21, [sp, #0xb0]
 2e56a64: a90c4ff4     	stp	x20, x19, [sp, #0xc0]
 2e56a68: b001c5f3     	adrp	x19, 0x6713000
 2e56a6c: aa0003f9     	mov	x25, x0
 2e56a70: f90003e1     	str	x1, [sp]
 2e56a74: 3979a268     	ldrb	w8, [x19, #0xe68]
 2e56a78: 37000668     	tbnz	w8, #0x0, 0x2e56b44 <__start_il2cpp+0x38e530>
 2e56a7c: f001a500     	adrp	x0, 0x62f9000
 2e56a80: f9470c00     	ldr	x0, [x0, #0xe18]
 2e56a84: 97ee00d7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56a88: f001a500     	adrp	x0, 0x62f9000
 2e56a8c: f9472400     	ldr	x0, [x0, #0xe48]
 2e56a90: 97ee00d4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56a94: f001a500     	adrp	x0, 0x62f9000
 2e56a98: f9471000     	ldr	x0, [x0, #0xe20]
 2e56a9c: 97ee00d1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56aa0: f001a500     	adrp	x0, 0x62f9000
 2e56aa4: f9472800     	ldr	x0, [x0, #0xe50]
 2e56aa8: 97ee00ce     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56aac: f001a500     	adrp	x0, 0x62f9000
 2e56ab0: f9472c00     	ldr	x0, [x0, #0xe58]
 2e56ab4: 97ee00cb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56ab8: f001a500     	adrp	x0, 0x62f9000
 2e56abc: f9471400     	ldr	x0, [x0, #0xe28]
 2e56ac0: 97ee00c8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56ac4: 9001a520     	adrp	x0, 0x62fa000
 2e56ac8: f9427000     	ldr	x0, [x0, #0x4e0]
 2e56acc: 97ee00c5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56ad0: 9001a500     	adrp	x0, 0x62f6000
 2e56ad4: f943d400     	ldr	x0, [x0, #0x7a8]
 2e56ad8: 97ee00c2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56adc: f001a500     	adrp	x0, 0x62f9000
 2e56ae0: f9473400     	ldr	x0, [x0, #0xe68]
 2e56ae4: 97ee00bf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56ae8: f001a500     	adrp	x0, 0x62f9000
 2e56aec: f9471c00     	ldr	x0, [x0, #0xe38]
 2e56af0: 97ee00bc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56af4: d001a520     	adrp	x0, 0x62fc000
 2e56af8: f9432800     	ldr	x0, [x0, #0x650]
 2e56afc: 97ee00b9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56b00: f001a5a0     	adrp	x0, 0x630d000
 2e56b04: f9446800     	ldr	x0, [x0, #0x8d0]
 2e56b08: 97ee00b6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56b0c: 9001a4e0     	adrp	x0, 0x62f2000
 2e56b10: f942ec00     	ldr	x0, [x0, #0x5d8]
 2e56b14: 97ee00b3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56b18: f001a5a0     	adrp	x0, 0x630d000
 2e56b1c: f9446c00     	ldr	x0, [x0, #0x8d8]
 2e56b20: 97ee00b0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56b24: f001a5a0     	adrp	x0, 0x630d000
 2e56b28: f9447000     	ldr	x0, [x0, #0x8e0]
 2e56b2c: 97ee00ad     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56b30: f001a5a0     	adrp	x0, 0x630d000
 2e56b34: f9447400     	ldr	x0, [x0, #0x8e8]
 2e56b38: 97ee00aa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e56b3c: 52800028     	mov	w8, #0x1                // =1
 2e56b40: 3939a268     	strb	w8, [x19, #0xe68]
 2e56b44: a9057fff     	stp	xzr, xzr, [sp, #0x50]
 2e56b48: 9001a533     	adrp	x19, 0x62fa000
 2e56b4c: f90033ff     	str	xzr, [sp, #0x60]
 2e56b50: a9037fff     	stp	xzr, xzr, [sp, #0x30]
 2e56b54: f9427273     	ldr	x19, [x19, #0x4e0]
 2e56b58: f90023ff     	str	xzr, [sp, #0x40]
 2e56b5c: f9400260     	ldr	x0, [x19]
 2e56b60: 97ee0146     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56b64: aa1f03e1     	mov	x1, xzr
 2e56b68: aa0003f8     	mov	x24, x0
 2e56b6c: 9495c64b     	bl	0x53c8498 <__start_il2cpp+0x28ffe84>
 2e56b70: f9400260     	ldr	x0, [x19]
 2e56b74: 97ee0141     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56b78: aa1f03e1     	mov	x1, xzr
 2e56b7c: aa0003f7     	mov	x23, x0
 2e56b80: 9495c646     	bl	0x53c8498 <__start_il2cpp+0x28ffe84>
 2e56b84: f9400260     	ldr	x0, [x19]
 2e56b88: 97ee013c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56b8c: aa1f03e1     	mov	x1, xzr
 2e56b90: aa0003f6     	mov	x22, x0
 2e56b94: 9495c641     	bl	0x53c8498 <__start_il2cpp+0x28ffe84>
 2e56b98: f9400260     	ldr	x0, [x19]
 2e56b9c: 97ee0137     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56ba0: aa1f03e1     	mov	x1, xzr
 2e56ba4: aa0003f5     	mov	x21, x0
 2e56ba8: 9495c63c     	bl	0x53c8498 <__start_il2cpp+0x28ffe84>
 2e56bac: f9400260     	ldr	x0, [x19]
 2e56bb0: 97ee0132     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56bb4: aa1f03e1     	mov	x1, xzr
 2e56bb8: aa0003f4     	mov	x20, x0
 2e56bbc: 9495c637     	bl	0x53c8498 <__start_il2cpp+0x28ffe84>
 2e56bc0: f9401f28     	ldr	x8, [x25, #0x38]
 2e56bc4: b4001c08     	cbz	x8, 0x2e56f44 <__start_il2cpp+0x38e930>
 2e56bc8: f9400900     	ldr	x0, [x8, #0x10]
 2e56bcc: b4001bc0     	cbz	x0, 0x2e56f44 <__start_il2cpp+0x38e930>
 2e56bd0: f001a508     	adrp	x8, 0x62f9000
 2e56bd4: f001a51c     	adrp	x28, 0x62f9000
 2e56bd8: 9001a51d     	adrp	x29, 0x62f6000
 2e56bdc: f9473508     	ldr	x8, [x8, #0xe68]
 2e56be0: f001a513     	adrp	x19, 0x62f9000
 2e56be4: f9472b9c     	ldr	x28, [x28, #0xe50]
 2e56be8: f943d7bd     	ldr	x29, [x29, #0x7a8]
 2e56bec: f9471273     	ldr	x19, [x19, #0xe20]
 2e56bf0: f9400101     	ldr	x1, [x8]
 2e56bf4: 910063e8     	add	x8, sp, #0x18
 2e56bf8: 94334b72     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2e56bfc: f94017e8     	ldr	x8, [sp, #0x28]
 2e56c00: 3cc183e0     	ldur	q0, [sp, #0x18]
 2e56c04: f90033e8     	str	x8, [sp, #0x60]
 2e56c08: 910143e8     	add	x8, sp, #0x50
 2e56c0c: 3d8017e0     	str	q0, [sp, #0x50]
 2e56c10: a900a3ff     	stp	xzr, x8, [sp, #0x8]
 2e56c14: f9400381     	ldr	x1, [x28]
 2e56c18: 910143e0     	add	x0, sp, #0x50
 2e56c1c: 9470bf1f     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2e56c20: 36001080     	tbz	w0, #0x0, 0x2e56e30 <__start_il2cpp+0x38e81c>
 2e56c24: f94033fa     	ldr	x26, [sp, #0x60]
 2e56c28: b400181a     	cbz	x26, 0x2e56f28 <__start_il2cpp+0x38e914>
 2e56c2c: f94003a0     	ldr	x0, [x29]
 2e56c30: b9401759     	ldr	w25, [x26, #0x14]
 2e56c34: b940e408     	ldr	w8, [x0, #0xe4]
 2e56c38: 35000048     	cbnz	w8, 0x2e56c40 <__start_il2cpp+0x38e62c>
 2e56c3c: 97ee00c8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2e56c40: 2a1903e0     	mov	w0, w25
 2e56c44: aa1f03e1     	mov	x1, xzr
 2e56c48: 9495c0f8     	bl	0x53c7028 <__start_il2cpp+0x28fea14>
 2e56c4c: aa0003e1     	mov	x1, x0
 2e56c50: b40016f8     	cbz	x24, 0x2e56f2c <__start_il2cpp+0x38e918>
 2e56c54: f9400308     	ldr	x8, [x24]
 2e56c58: f9414509     	ldr	x9, [x8, #0x288]
 2e56c5c: f9414902     	ldr	x2, [x8, #0x290]
 2e56c60: aa1803e0     	mov	x0, x24
 2e56c64: d63f0120     	blr	x9
 2e56c68: b9401f40     	ldr	w0, [x26, #0x1c]
 2e56c6c: aa1f03e1     	mov	x1, xzr
 2e56c70: 9495c0ee     	bl	0x53c7028 <__start_il2cpp+0x28fea14>
 2e56c74: aa0003e1     	mov	x1, x0
 2e56c78: b40015d7     	cbz	x23, 0x2e56f30 <__start_il2cpp+0x38e91c>
 2e56c7c: f94002e8     	ldr	x8, [x23]
 2e56c80: f9414509     	ldr	x9, [x8, #0x288]
 2e56c84: f9414902     	ldr	x2, [x8, #0x290]
 2e56c88: aa1703e0     	mov	x0, x23
 2e56c8c: d63f0120     	blr	x9
 2e56c90: f94003a0     	ldr	x0, [x29]
 2e56c94: 39404359     	ldrb	w25, [x26, #0x10]
 2e56c98: b940e408     	ldr	w8, [x0, #0xe4]
 2e56c9c: 35000048     	cbnz	w8, 0x2e56ca4 <__start_il2cpp+0x38e690>
 2e56ca0: 97ee00af     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2e56ca4: 2a1903e0     	mov	w0, w25
 2e56ca8: aa1f03e1     	mov	x1, xzr
 2e56cac: 9495c0df     	bl	0x53c7028 <__start_il2cpp+0x28fea14>
 2e56cb0: aa0003e1     	mov	x1, x0
 2e56cb4: b4001416     	cbz	x22, 0x2e56f34 <__start_il2cpp+0x38e920>
 2e56cb8: f94002c8     	ldr	x8, [x22]
 2e56cbc: f9414509     	ldr	x9, [x8, #0x288]
 2e56cc0: f9414902     	ldr	x2, [x8, #0x290]
 2e56cc4: aa1603e0     	mov	x0, x22
 2e56cc8: d63f0120     	blr	x9
 2e56ccc: f94003a0     	ldr	x0, [x29]
 2e56cd0: 39406359     	ldrb	w25, [x26, #0x18]
 2e56cd4: b940e408     	ldr	w8, [x0, #0xe4]
 2e56cd8: 35000048     	cbnz	w8, 0x2e56ce0 <__start_il2cpp+0x38e6cc>
 2e56cdc: 97ee00a0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2e56ce0: 2a1903e0     	mov	w0, w25
 2e56ce4: aa1f03e1     	mov	x1, xzr
 2e56ce8: 9495c0d0     	bl	0x53c7028 <__start_il2cpp+0x28fea14>
 2e56cec: aa0003e1     	mov	x1, x0
 2e56cf0: b40011b5     	cbz	x21, 0x2e56f24 <__start_il2cpp+0x38e910>
 2e56cf4: f94002a8     	ldr	x8, [x21]
 2e56cf8: f9414509     	ldr	x9, [x8, #0x288]
 2e56cfc: f9414902     	ldr	x2, [x8, #0x290]
 2e56d00: aa1503e0     	mov	x0, x21
 2e56d04: d63f0120     	blr	x9
 2e56d08: 9001a528     	adrp	x8, 0x62fa000
 2e56d0c: f9427108     	ldr	x8, [x8, #0x4e0]
 2e56d10: f9400100     	ldr	x0, [x8]
 2e56d14: 97ee00d9     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e56d18: aa1f03e1     	mov	x1, xzr
 2e56d1c: aa0003f9     	mov	x25, x0
 2e56d20: 9495c5de     	bl	0x53c8498 <__start_il2cpp+0x28ffe84>
 2e56d24: f9401b40     	ldr	x0, [x26, #0x30]
 2e56d28: b4000540     	cbz	x0, 0x2e56dd0 <__start_il2cpp+0x38e7bc>
 2e56d2c: b9401808     	ldr	w8, [x0, #0x18]
 2e56d30: 7100051f     	cmp	w8, #0x1
 2e56d34: 540004eb     	b.lt	0x2e56dd0 <__start_il2cpp+0x38e7bc>
 2e56d38: f001a508     	adrp	x8, 0x62f9000
 2e56d3c: f9471d08     	ldr	x8, [x8, #0xe38]
 2e56d40: f9400101     	ldr	x1, [x8]
 2e56d44: 910063e8     	add	x8, sp, #0x18
 2e56d48: 94334b1e     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2e56d4c: f94017e8     	ldr	x8, [sp, #0x28]
 2e56d50: 3cc183e0     	ldur	q0, [sp, #0x18]
 2e56d54: f90023e8     	str	x8, [sp, #0x40]
 2e56d58: 9100c3e8     	add	x8, sp, #0x30
 2e56d5c: 3d800fe0     	str	q0, [sp, #0x30]
 2e56d60: a901a3ff     	stp	xzr, x8, [sp, #0x18]
 2e56d64: f9400261     	ldr	x1, [x19]
 2e56d68: 9100c3e0     	add	x0, sp, #0x30
 2e56d6c: 9470becb     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2e56d70: 360001a0     	tbz	w0, #0x0, 0x2e56da4 <__start_il2cpp+0x38e790>
 2e56d74: f94023e0     	ldr	x0, [sp, #0x40]
 2e56d78: b40003c0     	cbz	x0, 0x2e56df0 <__start_il2cpp+0x38e7dc>
 2e56d7c: aa1f03e1     	mov	x1, xzr
 2e56d80: 97f5196a     	bl	0x2b9d328 <__start_il2cpp+0xd4d14>
 2e56d84: aa0003e1     	mov	x1, x0
 2e56d88: b4000399     	cbz	x25, 0x2e56df8 <__start_il2cpp+0x38e7e4>
 2e56d8c: f9400328     	ldr	x8, [x25]
 2e56d90: f9414509     	ldr	x9, [x8, #0x288]
 2e56d94: f9414902     	ldr	x2, [x8, #0x290]
 2e56d98: aa1903e0     	mov	x0, x25
 2e56d9c: d63f0120     	blr	x9
 2e56da0: 17fffff1     	b	0x2e56d64 <__start_il2cpp+0x38e750>
 2e56da4: aa1f03fa     	mov	x26, xzr
 2e56da8: 5280015b     	mov	w27, #0xa               // =10
 2e56dac: 9100c3e0     	add	x0, sp, #0x30
 2e56db0: f001a508     	adrp	x8, 0x62f9000
 2e56db4: f9470d08     	ldr	x8, [x8, #0xe18]
 2e56db8: f9400101     	ldr	x1, [x8]
 2e56dbc: 9470beb6     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2e56dc0: b5000bfa     	cbnz	x26, 0x2e56f3c <__start_il2cpp+0x38e928>
 2e56dc4: 71002b7f     	cmp	w27, #0xa
 2e56dc8: 54000040     	b.eq	0x2e56dd0 <__start_il2cpp+0x38e7bc>
 2e56dcc: 3500035b     	cbnz	w27, 0x2e56e34 <__start_il2cpp+0x38e820>
 2e56dd0: b4000b54     	cbz	x20, 0x2e56f38 <__start_il2cpp+0x38e924>
 2e56dd4: f9400288     	ldr	x8, [x20]
 2e56dd8: f9414509     	ldr	x9, [x8, #0x288]
 2e56ddc: f9414902     	ldr	x2, [x8, #0x290]
 2e56de0: aa1403e0     	mov	x0, x20
 2e56de4: aa1903e1     	mov	x1, x25
 2e56de8: d63f0120     	blr	x9
 2e56dec: 17ffff8a     	b	0x2e56c14 <__start_il2cpp+0x38e600>
 2e56df0: 97ee00a6     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e56df4: 14000057     	b	0x2e56f50 <__start_il2cpp+0x38e93c>
 2e56df8: 97ee00a4     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e56dfc: 14000055     	b	0x2e56f50 <__start_il2cpp+0x38e93c>
 2e56e00: 14000003     	b	0x2e56e0c <__start_il2cpp+0x38e7f8>
 2e56e04: 14000002     	b	0x2e56e0c <__start_il2cpp+0x38e7f8>
 2e56e08: 14000001     	b	0x2e56e0c <__start_il2cpp+0x38e7f8>
 2e56e0c: 7100043f     	cmp	w1, #0x1
 2e56e10: 54000a01     	b.ne	0x2e56f50 <__start_il2cpp+0x38e93c>
 2e56e14: 94c33e4b     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2e56e18: f940001a     	ldr	x26, [x0]
 2e56e1c: f9000ffa     	str	x26, [sp, #0x18]
 2e56e20: 94c33e4c     	bl	0x5f26750 <__cxa_end_catch@plt>
 2e56e24: f94013e0     	ldr	x0, [sp, #0x20]
 2e56e28: 2a1f03fb     	mov	w27, wzr
 2e56e2c: 17ffffe1     	b	0x2e56db0 <__start_il2cpp+0x38e79c>
 2e56e30: 528001bb     	mov	w27, #0xd               // =13
 2e56e34: f94007f9     	ldr	x25, [sp, #0x8]
 2e56e38: f001a508     	adrp	x8, 0x62f9000
 2e56e3c: f9400be0     	ldr	x0, [sp, #0x10]
 2e56e40: f9472508     	ldr	x8, [x8, #0xe48]
 2e56e44: f9400101     	ldr	x1, [x8]
 2e56e48: 9470be93     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2e56e4c: b50007f9     	cbnz	x25, 0x2e56f48 <__start_il2cpp+0x38e934>
 2e56e50: 7100377f     	cmp	w27, #0xd
 2e56e54: 54000040     	b.eq	0x2e56e5c <__start_il2cpp+0x38e848>
 2e56e58: 3500057b     	cbnz	w27, 0x2e56f04 <__start_il2cpp+0x38e8f0>
 2e56e5c: f94003f3     	ldr	x19, [sp]
 2e56e60: b4000733     	cbz	x19, 0x2e56f44 <__start_il2cpp+0x38e930>
 2e56e64: 9001a4e9     	adrp	x9, 0x62f2000
 2e56e68: f9400268     	ldr	x8, [x19]
 2e56e6c: aa1303e0     	mov	x0, x19
 2e56e70: f942ed29     	ldr	x9, [x9, #0x5d8]
 2e56e74: aa1803e2     	mov	x2, x24
 2e56e78: f9400121     	ldr	x1, [x9]
 2e56e7c: a95b8d09     	ldp	x9, x3, [x8, #0x1b8]
 2e56e80: d63f0120     	blr	x9
 2e56e84: f001a5a9     	adrp	x9, 0x630d000
 2e56e88: f9400268     	ldr	x8, [x19]
 2e56e8c: aa1303e0     	mov	x0, x19
 2e56e90: f9446929     	ldr	x9, [x9, #0x8d0]
 2e56e94: aa1703e2     	mov	x2, x23
 2e56e98: f9400121     	ldr	x1, [x9]
 2e56e9c: a95b8d09     	ldp	x9, x3, [x8, #0x1b8]
 2e56ea0: d63f0120     	blr	x9
 2e56ea4: f001a5a9     	adrp	x9, 0x630d000
 2e56ea8: f9400268     	ldr	x8, [x19]
 2e56eac: aa1303e0     	mov	x0, x19
 2e56eb0: f9447129     	ldr	x9, [x9, #0x8e0]
 2e56eb4: aa1603e2     	mov	x2, x22
 2e56eb8: f9400121     	ldr	x1, [x9]
 2e56ebc: a95b8d09     	ldp	x9, x3, [x8, #0x1b8]
 2e56ec0: d63f0120     	blr	x9
 2e56ec4: f001a5a9     	adrp	x9, 0x630d000
 2e56ec8: f9400268     	ldr	x8, [x19]
 2e56ecc: aa1303e0     	mov	x0, x19
 2e56ed0: f9446d29     	ldr	x9, [x9, #0x8d8]
 2e56ed4: aa1503e2     	mov	x2, x21
 2e56ed8: f9400121     	ldr	x1, [x9]
 2e56edc: a95b8d09     	ldp	x9, x3, [x8, #0x1b8]
 2e56ee0: d63f0120     	blr	x9
 2e56ee4: f001a5a9     	adrp	x9, 0x630d000
 2e56ee8: f9400268     	ldr	x8, [x19]
 2e56eec: aa1303e0     	mov	x0, x19
 2e56ef0: f9447529     	ldr	x9, [x9, #0x8e8]
 2e56ef4: aa1403e2     	mov	x2, x20
 2e56ef8: f9400121     	ldr	x1, [x9]
 2e56efc: a95b8d09     	ldp	x9, x3, [x8, #0x1b8]
 2e56f00: d63f0120     	blr	x9
 2e56f04: a94c4ff4     	ldp	x20, x19, [sp, #0xc0]
 2e56f08: a94b57f6     	ldp	x22, x21, [sp, #0xb0]
 2e56f0c: a94a5ff8     	ldp	x24, x23, [sp, #0xa0]
 2e56f10: a94967fa     	ldp	x26, x25, [sp, #0x90]
 2e56f14: a9486ffc     	ldp	x28, x27, [sp, #0x80]
 2e56f18: a9477bfd     	ldp	x29, x30, [sp, #0x70]
 2e56f1c: 910343ff     	add	sp, sp, #0xd0
 2e56f20: d65f03c0     	ret
 2e56f24: 97ee0059     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e56f28: 97ee0058     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e56f2c: 97ee0057     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e56f30: 97ee0056     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e56f34: 97ee0055     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e56f38: 97ee0054     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e56f3c: aa1a03e0     	mov	x0, x26
 2e56f40: 97ee0050     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2e56f44: 97ee0051     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e56f48: aa1903e0     	mov	x0, x25
 2e56f4c: 97ee004d     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2e56f50: aa0103f9     	mov	x25, x1
 2e56f54: aa0003fa     	mov	x26, x0
 2e56f58: 910063e0     	add	x0, sp, #0x18
 2e56f5c: 97e14522     	bl	0x26a83e4 <.text+0x3284>
 2e56f60: 14000005     	b	0x2e56f74 <__start_il2cpp+0x38e960>
 2e56f64: 14000015     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56f68: 14000001     	b	0x2e56f6c <__start_il2cpp+0x38e958>
 2e56f6c: aa0103f9     	mov	x25, x1
 2e56f70: aa0003fa     	mov	x26, x0
 2e56f74: aa1a03e0     	mov	x0, x26
 2e56f78: aa1903e1     	mov	x1, x25
 2e56f7c: 1400000f     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56f80: 1400000e     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56f84: 1400000d     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56f88: 1400000c     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56f8c: 1400000b     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56f90: 1400000a     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56f94: 14000009     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56f98: 14000008     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56f9c: 14000007     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56fa0: 14000006     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56fa4: 14000005     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56fa8: 14000004     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56fac: 14000003     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56fb0: 14000002     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56fb4: 14000001     	b	0x2e56fb8 <__start_il2cpp+0x38e9a4>
 2e56fb8: 7100043f     	cmp	w1, #0x1
 2e56fbc: 540000e1     	b.ne	0x2e56fd8 <__start_il2cpp+0x38e9c4>
 2e56fc0: 94c33de0     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2e56fc4: f9400019     	ldr	x25, [x0]
 2e56fc8: f90007f9     	str	x25, [sp, #0x8]
 2e56fcc: 94c33de1     	bl	0x5f26750 <__cxa_end_catch@plt>
 2e56fd0: 2a1f03fb     	mov	w27, wzr
 2e56fd4: 17ffff99     	b	0x2e56e38 <__start_il2cpp+0x38e824>
 2e56fd8: aa0003f3     	mov	x19, x0
 2e56fdc: 910023e0     	add	x0, sp, #0x8
 2e56fe0: 97e1450d     	bl	0x26a8414 <.text+0x32b4>
 2e56fe4: aa1303e0     	mov	x0, x19
 2e56fe8: 97f1b5bd     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2e56fec: 97e13a98     	bl	0x26a5a4c <.text+0x8ec>

# DataObjectBoard :: JsonUtil+SerializerMode get_mode()
# VA 0x2e56ff0 .. 0x2e56ff8 (next mapped method entry)
 2e56ff0: 2a1f03e0     	mov	w0, wzr
 2e56ff4: d65f03c0     	ret

# DataObjectBoard :: System.Void PreSerialize()
# VA 0x2e56ff8 .. 0x2e57610 (next mapped method entry)
 2e56ff8: d10343ff     	sub	sp, sp, #0xd0
 2e56ffc: a9077bfd     	stp	x29, x30, [sp, #0x70]
 2e57000: a9086ffc     	stp	x28, x27, [sp, #0x80]
 2e57004: a90967fa     	stp	x26, x25, [sp, #0x90]
 2e57008: a90a5ff8     	stp	x24, x23, [sp, #0xa0]
 2e5700c: a90b57f6     	stp	x22, x21, [sp, #0xb0]
 2e57010: a90c4ff4     	stp	x20, x19, [sp, #0xc0]
 2e57014: 9001c5f4     	adrp	x20, 0x6713000
 2e57018: aa0003f3     	mov	x19, x0
 2e5701c: 3979a688     	ldrb	w8, [x20, #0xe69]
 2e57020: 370006c8     	tbnz	w8, #0x0, 0x2e570f8 <__start_il2cpp+0x38eae4>
 2e57024: d001a5a0     	adrp	x0, 0x630d000
 2e57028: f9448000     	ldr	x0, [x0, #0x900]
 2e5702c: 97edff6d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57030: d001a500     	adrp	x0, 0x62f9000
 2e57034: f9470c00     	ldr	x0, [x0, #0xe18]
 2e57038: 97edff6a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e5703c: d001a500     	adrp	x0, 0x62f9000
 2e57040: f9472400     	ldr	x0, [x0, #0xe48]
 2e57044: 97edff67     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57048: d001a500     	adrp	x0, 0x62f9000
 2e5704c: f9471000     	ldr	x0, [x0, #0xe20]
 2e57050: 97edff64     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57054: d001a500     	adrp	x0, 0x62f9000
 2e57058: f9472800     	ldr	x0, [x0, #0xe50]
 2e5705c: 97edff61     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57060: d001a500     	adrp	x0, 0x62f9000
 2e57064: f9472c00     	ldr	x0, [x0, #0xe58]
 2e57068: 97edff5e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e5706c: d001a500     	adrp	x0, 0x62f9000
 2e57070: f9471400     	ldr	x0, [x0, #0xe28]
 2e57074: 97edff5b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57078: d001a4e0     	adrp	x0, 0x62f5000
 2e5707c: f940e800     	ldr	x0, [x0, #0x1d0]
 2e57080: 97edff58     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57084: d001a5a0     	adrp	x0, 0x630d000
 2e57088: f9448400     	ldr	x0, [x0, #0x908]
 2e5708c: 97edff55     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57090: d001a5a0     	adrp	x0, 0x630d000
 2e57094: f9448800     	ldr	x0, [x0, #0x910]
 2e57098: 97edff52     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e5709c: d001a5a0     	adrp	x0, 0x630d000
 2e570a0: f9448c00     	ldr	x0, [x0, #0x918]
 2e570a4: 97edff4f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e570a8: b001a520     	adrp	x0, 0x62fc000
 2e570ac: f9460000     	ldr	x0, [x0, #0xc00]
 2e570b0: 97edff4c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e570b4: d001a500     	adrp	x0, 0x62f9000
 2e570b8: f9473400     	ldr	x0, [x0, #0xe68]
 2e570bc: 97edff49     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e570c0: d001a500     	adrp	x0, 0x62f9000
 2e570c4: f9471c00     	ldr	x0, [x0, #0xe38]
 2e570c8: 97edff46     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e570cc: d001a5a0     	adrp	x0, 0x630d000
 2e570d0: f9449000     	ldr	x0, [x0, #0x920]
 2e570d4: 97edff43     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e570d8: b001a520     	adrp	x0, 0x62fc000
 2e570dc: f9432800     	ldr	x0, [x0, #0x650]
 2e570e0: 97edff40     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e570e4: d001a5a0     	adrp	x0, 0x630d000
 2e570e8: f9449400     	ldr	x0, [x0, #0x928]
 2e570ec: 97edff3d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e570f0: 52800028     	mov	w8, #0x1                // =1
 2e570f4: 3939a688     	strb	w8, [x20, #0xe69]
 2e570f8: f9400a68     	ldr	x8, [x19, #0x10]
 2e570fc: a9057fff     	stp	xzr, xzr, [sp, #0x50]
 2e57100: f90033ff     	str	xzr, [sp, #0x60]
 2e57104: a9037fff     	stp	xzr, xzr, [sp, #0x30]
 2e57108: f90023ff     	str	xzr, [sp, #0x40]
 2e5710c: b4002368     	cbz	x8, 0x2e57578 <__start_il2cpp+0x38ef64>
 2e57110: b9401d09     	ldr	w9, [x8, #0x1c]
 2e57114: 11000529     	add	w9, w9, #0x1
 2e57118: 2903251f     	stp	wzr, w9, [x8, #0x18]
 2e5711c: f9400e68     	ldr	x8, [x19, #0x18]
 2e57120: b40022c8     	cbz	x8, 0x2e57578 <__start_il2cpp+0x38ef64>
 2e57124: b9401d09     	ldr	w9, [x8, #0x1c]
 2e57128: 11000529     	add	w9, w9, #0x1
 2e5712c: 2903251f     	stp	wzr, w9, [x8, #0x18]
 2e57130: f9401268     	ldr	x8, [x19, #0x20]
 2e57134: b4002228     	cbz	x8, 0x2e57578 <__start_il2cpp+0x38ef64>
 2e57138: b9401d09     	ldr	w9, [x8, #0x1c]
 2e5713c: 11000529     	add	w9, w9, #0x1
 2e57140: 2903251f     	stp	wzr, w9, [x8, #0x18]
 2e57144: f9401668     	ldr	x8, [x19, #0x28]
 2e57148: b4002188     	cbz	x8, 0x2e57578 <__start_il2cpp+0x38ef64>
 2e5714c: b9401d09     	ldr	w9, [x8, #0x1c]
 2e57150: 11000529     	add	w9, w9, #0x1
 2e57154: 2903251f     	stp	wzr, w9, [x8, #0x18]
 2e57158: f9401a68     	ldr	x8, [x19, #0x30]
 2e5715c: b40020e8     	cbz	x8, 0x2e57578 <__start_il2cpp+0x38ef64>
 2e57160: 29432502     	ldp	w2, w9, [x8, #0x18]
 2e57164: 11000529     	add	w9, w9, #0x1
 2e57168: 7100045f     	cmp	w2, #0x1
 2e5716c: 2903251f     	stp	wzr, w9, [x8, #0x18]
 2e57170: 540000ab     	b.lt	0x2e57184 <__start_il2cpp+0x38eb70>
 2e57174: f9400900     	ldr	x0, [x8, #0x10]
 2e57178: 2a1f03e1     	mov	w1, wzr
 2e5717c: aa1f03e3     	mov	x3, xzr
 2e57180: 948b6395     	bl	0x512ffd4 <__start_il2cpp+0x26679c0>
 2e57184: f9401e68     	ldr	x8, [x19, #0x38]
 2e57188: b4001f88     	cbz	x8, 0x2e57578 <__start_il2cpp+0x38ef64>
 2e5718c: f9400900     	ldr	x0, [x8, #0x10]
 2e57190: b4001f40     	cbz	x0, 0x2e57578 <__start_il2cpp+0x38ef64>
 2e57194: d001a508     	adrp	x8, 0x62f9000
 2e57198: d001a518     	adrp	x24, 0x62f9000
 2e5719c: d001a4f9     	adrp	x25, 0x62f5000
 2e571a0: f9473508     	ldr	x8, [x8, #0xe68]
 2e571a4: d001a5ba     	adrp	x26, 0x630d000
 2e571a8: d001a5bb     	adrp	x27, 0x630d000
 2e571ac: d001a517     	adrp	x23, 0x62f9000
 2e571b0: d001a5bd     	adrp	x29, 0x630d000
 2e571b4: d001a5bc     	adrp	x28, 0x630d000
 2e571b8: f9472b18     	ldr	x24, [x24, #0xe50]
 2e571bc: f940eb39     	ldr	x25, [x25, #0x1d0]
 2e571c0: f944975a     	ldr	x26, [x26, #0x928]
 2e571c4: f944937b     	ldr	x27, [x27, #0x920]
 2e571c8: f94712f7     	ldr	x23, [x23, #0xe20]
 2e571cc: f94483bd     	ldr	x29, [x29, #0x900]
 2e571d0: f944879c     	ldr	x28, [x28, #0x908]
 2e571d4: f9400101     	ldr	x1, [x8]
 2e571d8: 910063e8     	add	x8, sp, #0x18
 2e571dc: 943349f9     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2e571e0: f94017e8     	ldr	x8, [sp, #0x28]
 2e571e4: 3cc183e0     	ldur	q0, [sp, #0x18]
 2e571e8: f90033e8     	str	x8, [sp, #0x60]
 2e571ec: 910143e8     	add	x8, sp, #0x50
 2e571f0: 3d8017e0     	str	q0, [sp, #0x50]
 2e571f4: a900a3ff     	stp	xzr, x8, [sp, #0x8]
 2e571f8: f9400301     	ldr	x1, [x24]
 2e571fc: 910143e0     	add	x0, sp, #0x50
 2e57200: 9470bda6     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2e57204: 360018e0     	tbz	w0, #0x0, 0x2e57520 <__start_il2cpp+0x38ef0c>
 2e57208: f94033f5     	ldr	x21, [sp, #0x60]
 2e5720c: b4001b15     	cbz	x21, 0x2e5756c <__start_il2cpp+0x38ef58>
 2e57210: f9400a60     	ldr	x0, [x19, #0x10]
 2e57214: b4001a60     	cbz	x0, 0x2e57560 <__start_il2cpp+0x38ef4c>
 2e57218: b9401c0a     	ldr	w10, [x0, #0x1c]
 2e5721c: f9400808     	ldr	x8, [x0, #0x10]
 2e57220: b94016a1     	ldr	w1, [x21, #0x14]
 2e57224: f9400329     	ldr	x9, [x25]
 2e57228: 1100054a     	add	w10, w10, #0x1
 2e5722c: b9001c0a     	str	w10, [x0, #0x1c]
 2e57230: b4001988     	cbz	x8, 0x2e57560 <__start_il2cpp+0x38ef4c>
 2e57234: b980180a     	ldrsw	x10, [x0, #0x18]
 2e57238: b940190b     	ldr	w11, [x8, #0x18]
 2e5723c: 6b0b015f     	cmp	w10, w11
 2e57240: 540000c2     	b.hs	0x2e57258 <__start_il2cpp+0x38ec44>
 2e57244: 8b0a0908     	add	x8, x8, x10, lsl #2
 2e57248: 11000549     	add	w9, w10, #0x1
 2e5724c: b9001809     	str	w9, [x0, #0x18]
 2e57250: b9002101     	str	w1, [x8, #0x20]
 2e57254: 14000005     	b	0x2e57268 <__start_il2cpp+0x38ec54>
 2e57258: f9401128     	ldr	x8, [x9, #0x20]
 2e5725c: f9406108     	ldr	x8, [x8, #0xc0]
 2e57260: f9403902     	ldr	x2, [x8, #0x70]
 2e57264: 9431dd8b     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2e57268: f9400e60     	ldr	x0, [x19, #0x18]
 2e5726c: b40017c0     	cbz	x0, 0x2e57564 <__start_il2cpp+0x38ef50>
 2e57270: b9401c0a     	ldr	w10, [x0, #0x1c]
 2e57274: f9400808     	ldr	x8, [x0, #0x10]
 2e57278: b9401ea1     	ldr	w1, [x21, #0x1c]
 2e5727c: f9400329     	ldr	x9, [x25]
 2e57280: 1100054a     	add	w10, w10, #0x1
 2e57284: b9001c0a     	str	w10, [x0, #0x1c]
 2e57288: b40016e8     	cbz	x8, 0x2e57564 <__start_il2cpp+0x38ef50>
 2e5728c: b980180a     	ldrsw	x10, [x0, #0x18]
 2e57290: b940190b     	ldr	w11, [x8, #0x18]
 2e57294: 6b0b015f     	cmp	w10, w11
 2e57298: 540000c2     	b.hs	0x2e572b0 <__start_il2cpp+0x38ec9c>
 2e5729c: 8b0a0908     	add	x8, x8, x10, lsl #2
 2e572a0: 11000549     	add	w9, w10, #0x1
 2e572a4: b9001809     	str	w9, [x0, #0x18]
 2e572a8: b9002101     	str	w1, [x8, #0x20]
 2e572ac: 14000005     	b	0x2e572c0 <__start_il2cpp+0x38ecac>
 2e572b0: f9401128     	ldr	x8, [x9, #0x20]
 2e572b4: f9406108     	ldr	x8, [x8, #0xc0]
 2e572b8: f9403902     	ldr	x2, [x8, #0x70]
 2e572bc: 9431dd75     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2e572c0: f9401260     	ldr	x0, [x19, #0x20]
 2e572c4: b40014c0     	cbz	x0, 0x2e5755c <__start_il2cpp+0x38ef48>
 2e572c8: b9401c0a     	ldr	w10, [x0, #0x1c]
 2e572cc: f9400808     	ldr	x8, [x0, #0x10]
 2e572d0: 394042a1     	ldrb	w1, [x21, #0x10]
 2e572d4: f9400329     	ldr	x9, [x25]
 2e572d8: 1100054a     	add	w10, w10, #0x1
 2e572dc: b9001c0a     	str	w10, [x0, #0x1c]
 2e572e0: b40013e8     	cbz	x8, 0x2e5755c <__start_il2cpp+0x38ef48>
 2e572e4: b980180a     	ldrsw	x10, [x0, #0x18]
 2e572e8: b940190b     	ldr	w11, [x8, #0x18]
 2e572ec: 6b0b015f     	cmp	w10, w11
 2e572f0: 540000c2     	b.hs	0x2e57308 <__start_il2cpp+0x38ecf4>
 2e572f4: 8b0a0908     	add	x8, x8, x10, lsl #2
 2e572f8: 11000549     	add	w9, w10, #0x1
 2e572fc: b9001809     	str	w9, [x0, #0x18]
 2e57300: b9002101     	str	w1, [x8, #0x20]
 2e57304: 14000005     	b	0x2e57318 <__start_il2cpp+0x38ed04>
 2e57308: f9401128     	ldr	x8, [x9, #0x20]
 2e5730c: f9406108     	ldr	x8, [x8, #0xc0]
 2e57310: f9403902     	ldr	x2, [x8, #0x70]
 2e57314: 9431dd5f     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2e57318: f9401660     	ldr	x0, [x19, #0x28]
 2e5731c: b4001200     	cbz	x0, 0x2e5755c <__start_il2cpp+0x38ef48>
 2e57320: b9401c0a     	ldr	w10, [x0, #0x1c]
 2e57324: f9400808     	ldr	x8, [x0, #0x10]
 2e57328: 394062a1     	ldrb	w1, [x21, #0x18]
 2e5732c: f9400329     	ldr	x9, [x25]
 2e57330: 1100054a     	add	w10, w10, #0x1
 2e57334: b9001c0a     	str	w10, [x0, #0x1c]
 2e57338: b4001128     	cbz	x8, 0x2e5755c <__start_il2cpp+0x38ef48>
 2e5733c: b980180a     	ldrsw	x10, [x0, #0x18]
 2e57340: b940190b     	ldr	w11, [x8, #0x18]
 2e57344: 6b0b015f     	cmp	w10, w11
 2e57348: 540000c2     	b.hs	0x2e57360 <__start_il2cpp+0x38ed4c>
 2e5734c: 8b0a0908     	add	x8, x8, x10, lsl #2
 2e57350: 11000549     	add	w9, w10, #0x1
 2e57354: b9001809     	str	w9, [x0, #0x18]
 2e57358: b9002101     	str	w1, [x8, #0x20]
 2e5735c: 14000005     	b	0x2e57370 <__start_il2cpp+0x38ed5c>
 2e57360: f9401128     	ldr	x8, [x9, #0x20]
 2e57364: f9406108     	ldr	x8, [x8, #0xc0]
 2e57368: f9403902     	ldr	x2, [x8, #0x70]
 2e5736c: 9431dd49     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2e57370: f9400340     	ldr	x0, [x26]
 2e57374: 97edff41     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e57378: f9400361     	ldr	x1, [x27]
 2e5737c: aa0003f4     	mov	x20, x0
 2e57380: 94334492     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2e57384: f9401aa0     	ldr	x0, [x21, #0x30]
 2e57388: b40007a0     	cbz	x0, 0x2e5747c <__start_il2cpp+0x38ee68>
 2e5738c: b9401808     	ldr	w8, [x0, #0x18]
 2e57390: 7100051f     	cmp	w8, #0x1
 2e57394: 5400074b     	b.lt	0x2e5747c <__start_il2cpp+0x38ee68>
 2e57398: d001a508     	adrp	x8, 0x62f9000
 2e5739c: f9471d08     	ldr	x8, [x8, #0xe38]
 2e573a0: f9400101     	ldr	x1, [x8]
 2e573a4: 910063e8     	add	x8, sp, #0x18
 2e573a8: 94334986     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2e573ac: f94017e8     	ldr	x8, [sp, #0x28]
 2e573b0: 3cc183e0     	ldur	q0, [sp, #0x18]
 2e573b4: f90023e8     	str	x8, [sp, #0x40]
 2e573b8: 9100c3e8     	add	x8, sp, #0x30
 2e573bc: 3d800fe0     	str	q0, [sp, #0x30]
 2e573c0: a901a3ff     	stp	xzr, x8, [sp, #0x18]
 2e573c4: f94002e1     	ldr	x1, [x23]
 2e573c8: 9100c3e0     	add	x0, sp, #0x30
 2e573cc: 9470bd33     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2e573d0: 36000400     	tbz	w0, #0x0, 0x2e57450 <__start_il2cpp+0x38ee3c>
 2e573d4: f94023f6     	ldr	x22, [sp, #0x40]
 2e573d8: f94003a0     	ldr	x0, [x29]
 2e573dc: 97edff27     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e573e0: aa1603e1     	mov	x1, x22
 2e573e4: aa0003f5     	mov	x21, x0
 2e573e8: 9400008a     	bl	0x2e57610 <__start_il2cpp+0x38effc>
 2e573ec: b4000814     	cbz	x20, 0x2e574ec <__start_il2cpp+0x38eed8>
 2e573f0: b9401e8a     	ldr	w10, [x20, #0x1c]
 2e573f4: f9400a88     	ldr	x8, [x20, #0x10]
 2e573f8: f9400389     	ldr	x9, [x28]
 2e573fc: 1100054a     	add	w10, w10, #0x1
 2e57400: b9001e8a     	str	w10, [x20, #0x1c]
 2e57404: b4000748     	cbz	x8, 0x2e574ec <__start_il2cpp+0x38eed8>
 2e57408: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2e5740c: b940190b     	ldr	w11, [x8, #0x18]
 2e57410: 6b0b015f     	cmp	w10, w11
 2e57414: 54000102     	b.hs	0x2e57434 <__start_il2cpp+0x38ee20>
 2e57418: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2e5741c: 11000549     	add	w9, w10, #0x1
 2e57420: b9001a89     	str	w9, [x20, #0x18]
 2e57424: f8020c15     	str	x21, [x0, #0x20]!
 2e57428: aa1503e1     	mov	x1, x21
 2e5742c: 97edfe58     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e57430: 17ffffe5     	b	0x2e573c4 <__start_il2cpp+0x38edb0>
 2e57434: f9401128     	ldr	x8, [x9, #0x20]
 2e57438: f9406108     	ldr	x8, [x8, #0xc0]
 2e5743c: f9403902     	ldr	x2, [x8, #0x70]
 2e57440: aa1403e0     	mov	x0, x20
 2e57444: aa1503e1     	mov	x1, x21
 2e57448: 9433467a     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2e5744c: 17ffffde     	b	0x2e573c4 <__start_il2cpp+0x38edb0>
 2e57450: aa1f03f5     	mov	x21, xzr
 2e57454: 52800156     	mov	w22, #0xa               // =10
 2e57458: 9100c3e0     	add	x0, sp, #0x30
 2e5745c: d001a508     	adrp	x8, 0x62f9000
 2e57460: f9470d08     	ldr	x8, [x8, #0xe18]
 2e57464: f9400101     	ldr	x1, [x8]
 2e57468: 9470bd0b     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2e5746c: b5000835     	cbnz	x21, 0x2e57570 <__start_il2cpp+0x38ef5c>
 2e57470: 71002adf     	cmp	w22, #0xa
 2e57474: 54000040     	b.eq	0x2e5747c <__start_il2cpp+0x38ee68>
 2e57478: 35000556     	cbnz	w22, 0x2e57520 <__start_il2cpp+0x38ef0c>
 2e5747c: f9401a60     	ldr	x0, [x19, #0x30]
 2e57480: b4000740     	cbz	x0, 0x2e57568 <__start_il2cpp+0x38ef54>
 2e57484: d001a5a9     	adrp	x9, 0x630d000
 2e57488: b9401c0a     	ldr	w10, [x0, #0x1c]
 2e5748c: f9400808     	ldr	x8, [x0, #0x10]
 2e57490: f9448929     	ldr	x9, [x9, #0x910]
 2e57494: 1100054a     	add	w10, w10, #0x1
 2e57498: f9400129     	ldr	x9, [x9]
 2e5749c: b9001c0a     	str	w10, [x0, #0x1c]
 2e574a0: b4000648     	cbz	x8, 0x2e57568 <__start_il2cpp+0x38ef54>
 2e574a4: b980180a     	ldrsw	x10, [x0, #0x18]
 2e574a8: b940190b     	ldr	w11, [x8, #0x18]
 2e574ac: 6b0b015f     	cmp	w10, w11
 2e574b0: 54000122     	b.hs	0x2e574d4 <__start_il2cpp+0x38eec0>
 2e574b4: 8b0a0d08     	add	x8, x8, x10, lsl #3
 2e574b8: 11000549     	add	w9, w10, #0x1
 2e574bc: b9001809     	str	w9, [x0, #0x18]
 2e574c0: f8020d14     	str	x20, [x8, #0x20]!
 2e574c4: aa0803e0     	mov	x0, x8
 2e574c8: aa1403e1     	mov	x1, x20
 2e574cc: 97edfe30     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e574d0: 17ffff4a     	b	0x2e571f8 <__start_il2cpp+0x38ebe4>
 2e574d4: f9401128     	ldr	x8, [x9, #0x20]
 2e574d8: f9406108     	ldr	x8, [x8, #0xc0]
 2e574dc: f9403902     	ldr	x2, [x8, #0x70]
 2e574e0: aa1403e1     	mov	x1, x20
 2e574e4: 94334653     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2e574e8: 17ffff44     	b	0x2e571f8 <__start_il2cpp+0x38ebe4>
 2e574ec: 97edfee7     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e574f0: 14000025     	b	0x2e57584 <__start_il2cpp+0x38ef70>
 2e574f4: 14000002     	b	0x2e574fc <__start_il2cpp+0x38eee8>
 2e574f8: 14000001     	b	0x2e574fc <__start_il2cpp+0x38eee8>
 2e574fc: 7100043f     	cmp	w1, #0x1
 2e57500: 54000421     	b.ne	0x2e57584 <__start_il2cpp+0x38ef70>
 2e57504: 94c33c8f     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2e57508: f9400015     	ldr	x21, [x0]
 2e5750c: f9000ff5     	str	x21, [sp, #0x18]
 2e57510: 94c33c90     	bl	0x5f26750 <__cxa_end_catch@plt>
 2e57514: f94013e0     	ldr	x0, [sp, #0x20]
 2e57518: 2a1f03f6     	mov	w22, wzr
 2e5751c: 17ffffd0     	b	0x2e5745c <__start_il2cpp+0x38ee48>
 2e57520: f94007f3     	ldr	x19, [sp, #0x8]
 2e57524: d001a508     	adrp	x8, 0x62f9000
 2e57528: f9400be0     	ldr	x0, [sp, #0x10]
 2e5752c: f9472508     	ldr	x8, [x8, #0xe48]
 2e57530: f9400101     	ldr	x1, [x8]
 2e57534: 9470bcd8     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2e57538: b5000233     	cbnz	x19, 0x2e5757c <__start_il2cpp+0x38ef68>
 2e5753c: a94c4ff4     	ldp	x20, x19, [sp, #0xc0]
 2e57540: a94b57f6     	ldp	x22, x21, [sp, #0xb0]
 2e57544: a94a5ff8     	ldp	x24, x23, [sp, #0xa0]
 2e57548: a94967fa     	ldp	x26, x25, [sp, #0x90]
 2e5754c: a9486ffc     	ldp	x28, x27, [sp, #0x80]
 2e57550: a9477bfd     	ldp	x29, x30, [sp, #0x70]
 2e57554: 910343ff     	add	sp, sp, #0xd0
 2e57558: d65f03c0     	ret
 2e5755c: 97edfecb     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e57560: 97edfeca     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e57564: 97edfec9     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e57568: 97edfec8     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e5756c: 97edfec7     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e57570: aa1503e0     	mov	x0, x21
 2e57574: 97edfec3     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2e57578: 97edfec4     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e5757c: aa1303e0     	mov	x0, x19
 2e57580: 97edfec0     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2e57584: aa0103f3     	mov	x19, x1
 2e57588: aa0003f4     	mov	x20, x0
 2e5758c: 910063e0     	add	x0, sp, #0x18
 2e57590: 97e14395     	bl	0x26a83e4 <.text+0x3284>
 2e57594: 14000004     	b	0x2e575a4 <__start_il2cpp+0x38ef90>
 2e57598: 14000001     	b	0x2e5759c <__start_il2cpp+0x38ef88>
 2e5759c: aa0103f3     	mov	x19, x1
 2e575a0: aa0003f4     	mov	x20, x0
 2e575a4: aa1403e0     	mov	x0, x20
 2e575a8: aa1303e1     	mov	x1, x19
 2e575ac: 1400000c     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575b0: 1400000b     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575b4: 1400000a     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575b8: 14000009     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575bc: 14000008     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575c0: 14000007     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575c4: 14000006     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575c8: 14000005     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575cc: 14000004     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575d0: 14000003     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575d4: 14000002     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575d8: 14000001     	b	0x2e575dc <__start_il2cpp+0x38efc8>
 2e575dc: 7100043f     	cmp	w1, #0x1
 2e575e0: 540000c1     	b.ne	0x2e575f8 <__start_il2cpp+0x38efe4>
 2e575e4: 94c33c57     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2e575e8: f9400013     	ldr	x19, [x0]
 2e575ec: f90007f3     	str	x19, [sp, #0x8]
 2e575f0: 94c33c58     	bl	0x5f26750 <__cxa_end_catch@plt>
 2e575f4: 17ffffcc     	b	0x2e57524 <__start_il2cpp+0x38ef10>
 2e575f8: aa0003f3     	mov	x19, x0
 2e575fc: 910023e0     	add	x0, sp, #0x8
 2e57600: 97e14385     	bl	0x26a8414 <.text+0x32b4>
 2e57604: aa1303e0     	mov	x0, x19
 2e57608: 97f1b435     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2e5760c: 97e13910     	bl	0x26a5a4c <.text+0x8ec>

# DataObjectBoard :: System.Void PostDeserialize()
# VA 0x2e5767c .. 0x2e57c30 (next mapped method entry)
 2e5767c: d102c3ff     	sub	sp, sp, #0xb0
 2e57680: a9057bfd     	stp	x29, x30, [sp, #0x50]
 2e57684: a9066ffc     	stp	x28, x27, [sp, #0x60]
 2e57688: a90767fa     	stp	x26, x25, [sp, #0x70]
 2e5768c: a9085ff8     	stp	x24, x23, [sp, #0x80]
 2e57690: a90957f6     	stp	x22, x21, [sp, #0x90]
 2e57694: a90a4ff4     	stp	x20, x19, [sp, #0xa0]
 2e57698: 9001c5f7     	adrp	x23, 0x6713000
 2e5769c: d001a515     	adrp	x21, 0x62f9000
 2e576a0: d001a516     	adrp	x22, 0x62f9000
 2e576a4: d001a514     	adrp	x20, 0x62f9000
 2e576a8: f94722b5     	ldr	x21, [x21, #0xe40]
 2e576ac: 3979aae8     	ldrb	w8, [x23, #0xe6a]
 2e576b0: f9473ad6     	ldr	x22, [x22, #0xe70]
 2e576b4: f9473e94     	ldr	x20, [x20, #0xe78]
 2e576b8: aa0003f3     	mov	x19, x0
 2e576bc: 37000728     	tbnz	w8, #0x0, 0x2e577a0 <__start_il2cpp+0x38f18c>
 2e576c0: d001a500     	adrp	x0, 0x62f9000
 2e576c4: f946fc00     	ldr	x0, [x0, #0xdf8]
 2e576c8: 97edfdc6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e576cc: d001a500     	adrp	x0, 0x62f9000
 2e576d0: f9472000     	ldr	x0, [x0, #0xe40]
 2e576d4: 97edfdc3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e576d8: d001a500     	adrp	x0, 0x62f9000
 2e576dc: f9470800     	ldr	x0, [x0, #0xe10]
 2e576e0: 97edfdc0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e576e4: d001a5a0     	adrp	x0, 0x630d000
 2e576e8: f9449800     	ldr	x0, [x0, #0x930]
 2e576ec: 97edfdbd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e576f0: d001a5a0     	adrp	x0, 0x630d000
 2e576f4: f9449c00     	ldr	x0, [x0, #0x938]
 2e576f8: 97edfdba     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e576fc: d001a5a0     	adrp	x0, 0x630d000
 2e57700: f944a000     	ldr	x0, [x0, #0x940]
 2e57704: 97edfdb7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57708: d001a500     	adrp	x0, 0x62f9000
 2e5770c: f9473000     	ldr	x0, [x0, #0xe60]
 2e57710: 97edfdb4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57714: d001a500     	adrp	x0, 0x62f9000
 2e57718: f9471800     	ldr	x0, [x0, #0xe30]
 2e5771c: 97edfdb1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57720: d001a5a0     	adrp	x0, 0x630d000
 2e57724: f944a400     	ldr	x0, [x0, #0x948]
 2e57728: 97edfdae     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e5772c: d001a500     	adrp	x0, 0x62f9000
 2e57730: f9470000     	ldr	x0, [x0, #0xe00]
 2e57734: 97edfdab     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57738: d001a500     	adrp	x0, 0x62f9000
 2e5773c: f9473c00     	ldr	x0, [x0, #0xe78]
 2e57740: 97edfda8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57744: 9001a5a0     	adrp	x0, 0x630b000
 2e57748: f9400400     	ldr	x0, [x0, #0x8]
 2e5774c: 97edfda5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57750: d001a5a0     	adrp	x0, 0x630d000
 2e57754: f944a800     	ldr	x0, [x0, #0x950]
 2e57758: 97edfda2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e5775c: d001a4e0     	adrp	x0, 0x62f5000
 2e57760: f940f400     	ldr	x0, [x0, #0x1e8]
 2e57764: 97edfd9f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57768: d001a5a0     	adrp	x0, 0x630d000
 2e5776c: f944ac00     	ldr	x0, [x0, #0x958]
 2e57770: 97edfd9c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57774: d001a4e0     	adrp	x0, 0x62f5000
 2e57778: f940f800     	ldr	x0, [x0, #0x1f0]
 2e5777c: 97edfd99     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57780: d001a500     	adrp	x0, 0x62f9000
 2e57784: f9470400     	ldr	x0, [x0, #0xe08]
 2e57788: 97edfd96     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e5778c: d001a500     	adrp	x0, 0x62f9000
 2e57790: f9473800     	ldr	x0, [x0, #0xe70]
 2e57794: 97edfd93     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e57798: 52800028     	mov	w8, #0x1                // =1
 2e5779c: 3939aae8     	strb	w8, [x23, #0xe6a]
 2e577a0: f94002a0     	ldr	x0, [x21]
 2e577a4: a9037fff     	stp	xzr, xzr, [sp, #0x30]
 2e577a8: f90023ff     	str	xzr, [sp, #0x40]
 2e577ac: 97edfe33     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e577b0: aa1f03e1     	mov	x1, xzr
 2e577b4: aa0003f5     	mov	x21, x0
 2e577b8: 97f518f5     	bl	0x2b9db8c <__start_il2cpp+0xd5578>
 2e577bc: f94002c0     	ldr	x0, [x22]
 2e577c0: 97edfe2e     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e577c4: f9400281     	ldr	x1, [x20]
 2e577c8: aa0003f4     	mov	x20, x0
 2e577cc: 9433437f     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2e577d0: b4001cb5     	cbz	x21, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e577d4: aa1503e0     	mov	x0, x21
 2e577d8: aa1403e1     	mov	x1, x20
 2e577dc: f8010c14     	str	x20, [x0, #0x10]!
 2e577e0: 97edfd6b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e577e4: aa1303f4     	mov	x20, x19
 2e577e8: aa1503e1     	mov	x1, x21
 2e577ec: f8038e95     	str	x21, [x20, #0x38]!
 2e577f0: aa1403e0     	mov	x0, x20
 2e577f4: 97edfd66     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e577f8: f85d8288     	ldur	x8, [x20, #-0x28]
 2e577fc: f90007f4     	str	x20, [sp, #0x8]
 2e57800: b4001b28     	cbz	x8, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e57804: d001a4fb     	adrp	x27, 0x62f5000
 2e57808: d001a5bd     	adrp	x29, 0x630d000
 2e5780c: d001a51c     	adrp	x28, 0x62f9000
 2e57810: d001a514     	adrp	x20, 0x62f9000
 2e57814: f940fb7b     	ldr	x27, [x27, #0x1f0]
 2e57818: f9449fbd     	ldr	x29, [x29, #0x938]
 2e5781c: f946ff9c     	ldr	x28, [x28, #0xdf8]
 2e57820: f9471a94     	ldr	x20, [x20, #0xe30]
 2e57824: 2a1f03f5     	mov	w21, wzr
 2e57828: b9401908     	ldr	w8, [x8, #0x18]
 2e5782c: 6b0802bf     	cmp	w21, w8
 2e57830: 540017aa     	b.ge	0x2e57b24 <__start_il2cpp+0x38f510>
 2e57834: f9400e60     	ldr	x0, [x19, #0x18]
 2e57838: b4001960     	cbz	x0, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e5783c: b9401808     	ldr	w8, [x0, #0x18]
 2e57840: 6b0802bf     	cmp	w21, w8
 2e57844: 540000ca     	b.ge	0x2e5785c <__start_il2cpp+0x38f248>
 2e57848: f9400362     	ldr	x2, [x27]
 2e5784c: 2a1503e1     	mov	w1, w21
 2e57850: 9431db52     	bl	0x3ace598 <__start_il2cpp+0x1005f84>
 2e57854: 2a0003f7     	mov	w23, w0
 2e57858: 14000002     	b	0x2e57860 <__start_il2cpp+0x38f24c>
 2e5785c: 2a1f03f7     	mov	w23, wzr
 2e57860: f9401260     	ldr	x0, [x19, #0x20]
 2e57864: b4001800     	cbz	x0, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e57868: b9401808     	ldr	w8, [x0, #0x18]
 2e5786c: 6b0802bf     	cmp	w21, w8
 2e57870: 540000ca     	b.ge	0x2e57888 <__start_il2cpp+0x38f274>
 2e57874: f9400362     	ldr	x2, [x27]
 2e57878: 2a1503e1     	mov	w1, w21
 2e5787c: 9431db47     	bl	0x3ace598 <__start_il2cpp+0x1005f84>
 2e57880: 2a0003f8     	mov	w24, w0
 2e57884: 14000002     	b	0x2e5788c <__start_il2cpp+0x38f278>
 2e57888: 2a1f03f8     	mov	w24, wzr
 2e5788c: f9401660     	ldr	x0, [x19, #0x28]
 2e57890: b40016a0     	cbz	x0, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e57894: b9401808     	ldr	w8, [x0, #0x18]
 2e57898: 6b0802bf     	cmp	w21, w8
 2e5789c: 540000ca     	b.ge	0x2e578b4 <__start_il2cpp+0x38f2a0>
 2e578a0: f9400362     	ldr	x2, [x27]
 2e578a4: 2a1503e1     	mov	w1, w21
 2e578a8: 9431db3c     	bl	0x3ace598 <__start_il2cpp+0x1005f84>
 2e578ac: 2a0003f9     	mov	w25, w0
 2e578b0: 14000002     	b	0x2e578b8 <__start_il2cpp+0x38f2a4>
 2e578b4: 2a1f03f9     	mov	w25, wzr
 2e578b8: d001a508     	adrp	x8, 0x62f9000
 2e578bc: f9470908     	ldr	x8, [x8, #0xe10]
 2e578c0: f9400100     	ldr	x0, [x8]
 2e578c4: 97edfded     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e578c8: aa1f03e1     	mov	x1, xzr
 2e578cc: aa0003f6     	mov	x22, x0
 2e578d0: 97f51832     	bl	0x2b9d998 <__start_il2cpp+0xd5384>
 2e578d4: f9400a60     	ldr	x0, [x19, #0x10]
 2e578d8: b4001460     	cbz	x0, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e578dc: f9400362     	ldr	x2, [x27]
 2e578e0: 2a1503e1     	mov	w1, w21
 2e578e4: 9431db2d     	bl	0x3ace598 <__start_il2cpp+0x1005f84>
 2e578e8: b40013f6     	cbz	x22, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e578ec: 710006ff     	cmp	w23, #0x1
 2e578f0: b90016c0     	str	w0, [x22, #0x14]
 2e578f4: d001a509     	adrp	x9, 0x62f9000
 2e578f8: 1a9fc6e8     	csinc	w8, w23, wzr, gt
 2e578fc: 7100071f     	cmp	w24, #0x1
 2e57900: b9001ec8     	str	w8, [x22, #0x1c]
 2e57904: 1a9f17e8     	cset	w8, eq
 2e57908: 7100073f     	cmp	w25, #0x1
 2e5790c: 390042c8     	strb	w8, [x22, #0x10]
 2e57910: 1a9f17e8     	cset	w8, eq
 2e57914: f9470529     	ldr	x9, [x9, #0xe08]
 2e57918: 390062c8     	strb	w8, [x22, #0x18]
 2e5791c: f9400120     	ldr	x0, [x9]
 2e57920: 97edfdd6     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e57924: d001a508     	adrp	x8, 0x62f9000
 2e57928: aa0003f8     	mov	x24, x0
 2e5792c: f9470108     	ldr	x8, [x8, #0xe00]
 2e57930: f9400101     	ldr	x1, [x8]
 2e57934: 94334325     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2e57938: aa1603f7     	mov	x23, x22
 2e5793c: aa1803e1     	mov	x1, x24
 2e57940: f8030ef8     	str	x24, [x23, #0x30]!
 2e57944: aa1703e0     	mov	x0, x23
 2e57948: 97edfd11     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e5794c: f9401a60     	ldr	x0, [x19, #0x30]
 2e57950: b40010a0     	cbz	x0, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e57954: b9401808     	ldr	w8, [x0, #0x18]
 2e57958: 6b0802bf     	cmp	w21, w8
 2e5795c: 5400078a     	b.ge	0x2e57a4c <__start_il2cpp+0x38f438>
 2e57960: d001a5a8     	adrp	x8, 0x630d000
 2e57964: 2a1503e1     	mov	w1, w21
 2e57968: f944ad08     	ldr	x8, [x8, #0x958]
 2e5796c: f9400102     	ldr	x2, [x8]
 2e57970: 9433447c     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2e57974: b4000f80     	cbz	x0, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e57978: d001a5a8     	adrp	x8, 0x630d000
 2e5797c: f944a508     	ldr	x8, [x8, #0x948]
 2e57980: f9400101     	ldr	x1, [x8]
 2e57984: 910063e8     	add	x8, sp, #0x18
 2e57988: 9433480e     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2e5798c: f94017e8     	ldr	x8, [sp, #0x28]
 2e57990: 3cc183e0     	ldur	q0, [sp, #0x18]
 2e57994: f90023e8     	str	x8, [sp, #0x40]
 2e57998: 9100c3e8     	add	x8, sp, #0x30
 2e5799c: 3d800fe0     	str	q0, [sp, #0x30]
 2e579a0: a901a3ff     	stp	xzr, x8, [sp, #0x18]
 2e579a4: f94003a1     	ldr	x1, [x29]
 2e579a8: 9100c3e0     	add	x0, sp, #0x30
 2e579ac: 9470bbbb     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2e579b0: 36000440     	tbz	w0, #0x0, 0x2e57a38 <__start_il2cpp+0x38f424>
 2e579b4: f94023fa     	ldr	x26, [sp, #0x40]
 2e579b8: f94002f8     	ldr	x24, [x23]
 2e579bc: f9400380     	ldr	x0, [x28]
 2e579c0: 97edfdae     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e579c4: aa1a03e1     	mov	x1, x26
 2e579c8: aa1f03e2     	mov	x2, xzr
 2e579cc: aa0003f9     	mov	x25, x0
 2e579d0: 97f515c3     	bl	0x2b9d0dc <__start_il2cpp+0xd4ac8>
 2e579d4: b4000818     	cbz	x24, 0x2e57ad4 <__start_il2cpp+0x38f4c0>
 2e579d8: b9401f0a     	ldr	w10, [x24, #0x1c]
 2e579dc: f9400b08     	ldr	x8, [x24, #0x10]
 2e579e0: f9400289     	ldr	x9, [x20]
 2e579e4: 1100054a     	add	w10, w10, #0x1
 2e579e8: b9001f0a     	str	w10, [x24, #0x1c]
 2e579ec: b4000748     	cbz	x8, 0x2e57ad4 <__start_il2cpp+0x38f4c0>
 2e579f0: b9801b0a     	ldrsw	x10, [x24, #0x18]
 2e579f4: b940190b     	ldr	w11, [x8, #0x18]
 2e579f8: 6b0b015f     	cmp	w10, w11
 2e579fc: 54000102     	b.hs	0x2e57a1c <__start_il2cpp+0x38f408>
 2e57a00: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2e57a04: 11000549     	add	w9, w10, #0x1
 2e57a08: b9001b09     	str	w9, [x24, #0x18]
 2e57a0c: f8020c19     	str	x25, [x0, #0x20]!
 2e57a10: aa1903e1     	mov	x1, x25
 2e57a14: 97edfcde     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e57a18: 17ffffe3     	b	0x2e579a4 <__start_il2cpp+0x38f390>
 2e57a1c: f9401128     	ldr	x8, [x9, #0x20]
 2e57a20: f9406108     	ldr	x8, [x8, #0xc0]
 2e57a24: f9403902     	ldr	x2, [x8, #0x70]
 2e57a28: aa1803e0     	mov	x0, x24
 2e57a2c: aa1903e1     	mov	x1, x25
 2e57a30: 94334500     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2e57a34: 17ffffdc     	b	0x2e579a4 <__start_il2cpp+0x38f390>
 2e57a38: d001a5a8     	adrp	x8, 0x630d000
 2e57a3c: 9100c3e0     	add	x0, sp, #0x30
 2e57a40: f9449908     	ldr	x8, [x8, #0x930]
 2e57a44: f9400101     	ldr	x1, [x8]
 2e57a48: 9470bb93     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2e57a4c: f94007e8     	ldr	x8, [sp, #0x8]
 2e57a50: f9400108     	ldr	x8, [x8]
 2e57a54: b4000888     	cbz	x8, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e57a58: f9400900     	ldr	x0, [x8, #0x10]
 2e57a5c: b4000840     	cbz	x0, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e57a60: d001a509     	adrp	x9, 0x62f9000
 2e57a64: b9401c0a     	ldr	w10, [x0, #0x1c]
 2e57a68: f9400808     	ldr	x8, [x0, #0x10]
 2e57a6c: f9473129     	ldr	x9, [x9, #0xe60]
 2e57a70: 1100054a     	add	w10, w10, #0x1
 2e57a74: f9400129     	ldr	x9, [x9]
 2e57a78: b9001c0a     	str	w10, [x0, #0x1c]
 2e57a7c: b4000748     	cbz	x8, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e57a80: b980180a     	ldrsw	x10, [x0, #0x18]
 2e57a84: b940190b     	ldr	w11, [x8, #0x18]
 2e57a88: 6b0b015f     	cmp	w10, w11
 2e57a8c: 54000122     	b.hs	0x2e57ab0 <__start_il2cpp+0x38f49c>
 2e57a90: 8b0a0d08     	add	x8, x8, x10, lsl #3
 2e57a94: 11000549     	add	w9, w10, #0x1
 2e57a98: aa1603e1     	mov	x1, x22
 2e57a9c: b9001809     	str	w9, [x0, #0x18]
 2e57aa0: f8020d16     	str	x22, [x8, #0x20]!
 2e57aa4: aa0803e0     	mov	x0, x8
 2e57aa8: 97edfcb9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e57aac: 14000006     	b	0x2e57ac4 <__start_il2cpp+0x38f4b0>
 2e57ab0: f9401128     	ldr	x8, [x9, #0x20]
 2e57ab4: aa1603e1     	mov	x1, x22
 2e57ab8: f9406108     	ldr	x8, [x8, #0xc0]
 2e57abc: f9403902     	ldr	x2, [x8, #0x70]
 2e57ac0: 943344dc     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2e57ac4: f9400a68     	ldr	x8, [x19, #0x10]
 2e57ac8: 110006b5     	add	w21, w21, #0x1
 2e57acc: b5ffeae8     	cbnz	x8, 0x2e57828 <__start_il2cpp+0x38f214>
 2e57ad0: 14000025     	b	0x2e57b64 <__start_il2cpp+0x38f550>
 2e57ad4: 97edfd6d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e57ad8: 14000050     	b	0x2e57c18 <__start_il2cpp+0x38f604>
 2e57adc: 14000002     	b	0x2e57ae4 <__start_il2cpp+0x38f4d0>
 2e57ae0: 14000001     	b	0x2e57ae4 <__start_il2cpp+0x38f4d0>
 2e57ae4: aa0003f7     	mov	x23, x0
 2e57ae8: 7100043f     	cmp	w1, #0x1
 2e57aec: 54000981     	b.ne	0x2e57c1c <__start_il2cpp+0x38f608>
 2e57af0: aa1703e0     	mov	x0, x23
 2e57af4: 94c33b13     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2e57af8: f9400017     	ldr	x23, [x0]
 2e57afc: f9000ff7     	str	x23, [sp, #0x18]
 2e57b00: 94c33b14     	bl	0x5f26750 <__cxa_end_catch@plt>
 2e57b04: d001a5a8     	adrp	x8, 0x630d000
 2e57b08: f94013e0     	ldr	x0, [sp, #0x20]
 2e57b0c: f9449908     	ldr	x8, [x8, #0x930]
 2e57b10: f9400101     	ldr	x1, [x8]
 2e57b14: 9470bb60     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2e57b18: b4fff9b7     	cbz	x23, 0x2e57a4c <__start_il2cpp+0x38f438>
 2e57b1c: aa1703e0     	mov	x0, x23
 2e57b20: 97edfd58     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2e57b24: f94007e8     	ldr	x8, [sp, #0x8]
 2e57b28: f9400113     	ldr	x19, [x8]
 2e57b2c: b40001d3     	cbz	x19, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e57b30: f9400a68     	ldr	x8, [x19, #0x10]
 2e57b34: b4000188     	cbz	x8, 0x2e57b64 <__start_il2cpp+0x38f550>
 2e57b38: b9401908     	ldr	w8, [x8, #0x18]
 2e57b3c: 7100f91f     	cmp	w8, #0x3e
 2e57b40: 5400014d     	b.le	0x2e57b68 <__start_il2cpp+0x38f554>
 2e57b44: a94a4ff4     	ldp	x20, x19, [sp, #0xa0]
 2e57b48: a94957f6     	ldp	x22, x21, [sp, #0x90]
 2e57b4c: a9485ff8     	ldp	x24, x23, [sp, #0x80]
 2e57b50: a94767fa     	ldp	x26, x25, [sp, #0x70]
 2e57b54: a9466ffc     	ldp	x28, x27, [sp, #0x60]
 2e57b58: a9457bfd     	ldp	x29, x30, [sp, #0x50]
 2e57b5c: 9102c3ff     	add	sp, sp, #0xb0
 2e57b60: d65f03c0     	ret
 2e57b64: 97edfd49     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2e57b68: aa1303e0     	mov	x0, x19
 2e57b6c: 97e14a96     	bl	0x26aa5c4 <.text+0x5464>
 2e57b70: f9400a73     	ldr	x19, [x19, #0x10]
 2e57b74: aa1303e0     	mov	x0, x19
 2e57b78: 97e14a93     	bl	0x26aa5c4 <.text+0x5464>
 2e57b7c: 9001a5a0     	adrp	x0, 0x630b000
 2e57b80: f9400400     	ldr	x0, [x0, #0x8]
 2e57b84: 97edfc9c     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2e57b88: b001a4d4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2e57b8c: 910063e1     	add	x1, sp, #0x18
 2e57b90: f9470e94     	ldr	x20, [x20, #0xe18]
 2e57b94: b9401a68     	ldr	w8, [x19, #0x18]
 2e57b98: f9402680     	ldr	x0, [x20, #0x48]
 2e57b9c: b9001be8     	str	w8, [sp, #0x18]
 2e57ba0: 97edfcf1     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2e57ba4: aa0003f3     	mov	x19, x0
 2e57ba8: f9402680     	ldr	x0, [x20, #0x48]
 2e57bac: 528007e8     	mov	w8, #0x3f               // =63
 2e57bb0: 910053e1     	add	x1, sp, #0x14
 2e57bb4: b90017e8     	str	w8, [sp, #0x14]
 2e57bb8: 97edfceb     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2e57bbc: aa0003f4     	mov	x20, x0
 2e57bc0: d001a5a0     	adrp	x0, 0x630d000
 2e57bc4: f9447800     	ldr	x0, [x0, #0x8f0]
 2e57bc8: 97edfc8b     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2e57bcc: aa1303e1     	mov	x1, x19
 2e57bd0: aa1403e2     	mov	x2, x20
 2e57bd4: aa1f03e3     	mov	x3, xzr
 2e57bd8: 94847cc7     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2e57bdc: aa0003f3     	mov	x19, x0
 2e57be0: b001a4c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2e57be4: f946f000     	ldr	x0, [x0, #0xde0]
 2e57be8: 97edfc83     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2e57bec: 97edfd23     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e57bf0: aa1303e1     	mov	x1, x19
 2e57bf4: aa1f03e2     	mov	x2, xzr
 2e57bf8: aa0003f4     	mov	x20, x0
 2e57bfc: 948bb46c     	bl	0x5144dac <__start_il2cpp+0x267c798>
 2e57c00: d001a5a0     	adrp	x0, 0x630d000
 2e57c04: f944b000     	ldr	x0, [x0, #0x960]
 2e57c08: 97edfc7b     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2e57c0c: aa0003e1     	mov	x1, x0
 2e57c10: aa1403e0     	mov	x0, x20
 2e57c14: 97edfcce     	bl	0x29d6f4c <mono_class_get_checked+0x834>
 2e57c18: aa0003f7     	mov	x23, x0
 2e57c1c: 910063e0     	add	x0, sp, #0x18
 2e57c20: 97e16842     	bl	0x26b1d28 <.text+0xcbc8>
 2e57c24: aa1703e0     	mov	x0, x23
 2e57c28: 97f1b2ad     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2e57c2c: 97e13788     	bl	0x26a5a4c <.text+0x8ec>
