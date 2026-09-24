
# BaseGameDataPiece :: System.Void SetDirty(System.Boolean deviceSpecific = True)
# VA 0x2ee0b44 .. 0x2ee0c5c (next mapped method entry)
 2ee0b44: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ee0b48: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ee0b4c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ee0b50: 9001c1b6     	adrp	x22, 0x6714000
 2ee0b54: f001a095     	adrp	x21, 0x62f3000
 2ee0b58: 2a0103f4     	mov	w20, w1
 2ee0b5c: 394e7ec8     	ldrb	w8, [x22, #0x39f]
 2ee0b60: f946b6b5     	ldr	x21, [x21, #0xd68]
 2ee0b64: aa0003f3     	mov	x19, x0
 2ee0b68: 37000188     	tbnz	w8, #0x0, 0x2ee0b98 <__start_il2cpp+0x418584>
 2ee0b6c: 9001a080     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee0b70: f9471400     	ldr	x0, [x0, #0xe28]
 2ee0b74: 97ebd89b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee0b78: f001a080     	adrp	x0, 0x62f3000
 2ee0b7c: f946b400     	ldr	x0, [x0, #0xd68]
 2ee0b80: 97ebd898     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee0b84: 9001a0a0     	adrp	x0, 0x62f4000
 2ee0b88: f9462800     	ldr	x0, [x0, #0xc50]
 2ee0b8c: 97ebd895     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee0b90: 52800028     	mov	w8, #0x1                // =1
 2ee0b94: 390e7ec8     	strb	w8, [x22, #0x39f]
 2ee0b98: aa1303e0     	mov	x0, x19
 2ee0b9c: 940001f9     	bl	0x2ee1380 <__start_il2cpp+0x418d6c>
 2ee0ba0: f94002a8     	ldr	x8, [x21]
 2ee0ba4: aa0003f5     	mov	x21, x0
 2ee0ba8: b940e509     	ldr	w9, [x8, #0xe4]
 2ee0bac: 35000069     	cbnz	w9, 0x2ee0bb8 <__start_il2cpp+0x4185a4>
 2ee0bb0: aa0803e0     	mov	x0, x8
 2ee0bb4: 97ebd8ea     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee0bb8: 12000282     	and	w2, w20, #0x1
 2ee0bbc: aa1503e0     	mov	x0, x21
 2ee0bc0: 52800021     	mov	w1, #0x1                // =1
 2ee0bc4: aa1f03e3     	mov	x3, xzr
 2ee0bc8: 97f133f5     	bl	0x2b2db9c <__start_il2cpp+0x65588>
 2ee0bcc: aa1303f4     	mov	x20, x19
 2ee0bd0: f8418e88     	ldr	x8, [x20, #0x18]!
 2ee0bd4: b50003c8     	cbnz	x8, 0x2ee0c4c <__start_il2cpp+0x418638>
 2ee0bd8: 9001a088     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee0bdc: f9471508     	ldr	x8, [x8, #0xe28]
 2ee0be0: f9400100     	ldr	x0, [x8]
 2ee0be4: b940e408     	ldr	w8, [x0, #0xe4]
 2ee0be8: 35000048     	cbnz	w8, 0x2ee0bf0 <__start_il2cpp+0x4185dc>
 2ee0bec: 97ebd8dc     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee0bf0: aa1f03e0     	mov	x0, xzr
 2ee0bf4: 94b05038     	bl	0x5af4cd4 <__start_il2cpp+0x302c6c0>
 2ee0bf8: 360002a0     	tbz	w0, #0x0, 0x2ee0c4c <__start_il2cpp+0x418638>
 2ee0bfc: aa1303e0     	mov	x0, x19
 2ee0c00: 940001fd     	bl	0x2ee13f4 <__start_il2cpp+0x418de0>
 2ee0c04: 9001a0a8     	adrp	x8, 0x62f4000
 2ee0c08: aa0003f3     	mov	x19, x0
 2ee0c0c: f9462908     	ldr	x8, [x8, #0xc50]
 2ee0c10: f9400108     	ldr	x8, [x8]
 2ee0c14: b940e509     	ldr	w9, [x8, #0xe4]
 2ee0c18: 35000069     	cbnz	w9, 0x2ee0c24 <__start_il2cpp+0x418610>
 2ee0c1c: aa0803e0     	mov	x0, x8
 2ee0c20: 97ebd8cf     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee0c24: aa1303e0     	mov	x0, x19
 2ee0c28: aa1f03e1     	mov	x1, xzr
 2ee0c2c: 97f5b90e     	bl	0x2c4f064 <__start_il2cpp+0x186a50>
 2ee0c30: aa0003e1     	mov	x1, x0
 2ee0c34: aa1403e0     	mov	x0, x20
 2ee0c38: f9000281     	str	x1, [x20]
 2ee0c3c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ee0c40: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ee0c44: f84307fe     	ldr	x30, [sp], #0x30
 2ee0c48: 17ebd851     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2ee0c4c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ee0c50: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ee0c54: f84307fe     	ldr	x30, [sp], #0x30
 2ee0c58: d65f03c0     	ret

# BaseGameDataPiece :: System.String get_dirtyKey()
# VA 0x2ee1380 .. 0x2ee13dc (next mapped method entry)
 2ee1380: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ee1384: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ee1388: f001c195     	adrp	x21, 0x6714000
 2ee138c: 9001a194     	adrp	x20, 0x6311000
 2ee1390: aa0003f3     	mov	x19, x0
 2ee1394: 394e7aa8     	ldrb	w8, [x21, #0x39e]
 2ee1398: f9467e94     	ldr	x20, [x20, #0xcf8]
 2ee139c: 370000c8     	tbnz	w8, #0x0, 0x2ee13b4 <__start_il2cpp+0x418da0>
 2ee13a0: 9001a180     	adrp	x0, 0x6311000
 2ee13a4: f9467c00     	ldr	x0, [x0, #0xcf8]
 2ee13a8: 97ebd68e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee13ac: 52800028     	mov	w8, #0x1                // =1
 2ee13b0: 390e7aa8     	strb	w8, [x21, #0x39e]
 2ee13b4: f9400268     	ldr	x8, [x19]
 2ee13b8: aa1303e0     	mov	x0, x19
 2ee13bc: f9411509     	ldr	x9, [x8, #0x228]
 2ee13c0: f9411901     	ldr	x1, [x8, #0x230]
 2ee13c4: d63f0120     	blr	x9
 2ee13c8: f9400281     	ldr	x1, [x20]
 2ee13cc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ee13d0: aa1f03e2     	mov	x2, xzr
 2ee13d4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ee13d8: 14821e72     	b	0x4f68da0 <__start_il2cpp+0x24a078c>

# BaseGameDataPiece :: System.Boolean get_locked()
# VA 0x2ee13dc .. 0x2ee13e4 (next mapped method entry)
 2ee13dc: 39408000     	ldrb	w0, [x0, #0x20]
 2ee13e0: d65f03c0     	ret

# BaseGameDataPiece :: System.Void set_locked(System.Boolean value)
# VA 0x2ee13e4 .. 0x2ee13ec (next mapped method entry)
 2ee13e4: 39008001     	strb	w1, [x0, #0x20]
 2ee13e8: d65f03c0     	ret

# BaseGameDataPiece :: System.Void Initialize(GameData data)
# VA 0x2ee13ec .. 0x2ee13f4 (next mapped method entry)
 2ee13ec: f8010c01     	str	x1, [x0, #0x10]!
 2ee13f0: 17ebd667     	b	0x29d6d8c <mono_class_get_checked+0x674>

# BaseGameDataPiece :: System.Collections.IEnumerator <SetDirty>g__Serialize|13_0()
# VA 0x2ee13f4 .. 0x2ee1460 (next mapped method entry)
 2ee13f4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ee13f8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ee13fc: f001c194     	adrp	x20, 0x6714000
 2ee1400: 9001a195     	adrp	x21, 0x6311000
 2ee1404: aa0003f3     	mov	x19, x0
 2ee1408: 394e8688     	ldrb	w8, [x20, #0x3a1]
 2ee140c: f94682b5     	ldr	x21, [x21, #0xd00]
 2ee1410: 370000c8     	tbnz	w8, #0x0, 0x2ee1428 <__start_il2cpp+0x418e14>
 2ee1414: 9001a180     	adrp	x0, 0x6311000
 2ee1418: f9468000     	ldr	x0, [x0, #0xd00]
 2ee141c: 97ebd671     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1420: 52800028     	mov	w8, #0x1                // =1
 2ee1424: 390e8688     	strb	w8, [x20, #0x3a1]
 2ee1428: f94002a0     	ldr	x0, [x21]
 2ee142c: 97ebd713     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ee1430: aa1f03e1     	mov	x1, xzr
 2ee1434: aa0003f4     	mov	x20, x0
 2ee1438: 9489b9c4     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2ee143c: aa1403e0     	mov	x0, x20
 2ee1440: aa1303e1     	mov	x1, x19
 2ee1444: b900129f     	str	wzr, [x20, #0x10]
 2ee1448: f8020c13     	str	x19, [x0, #0x20]!
 2ee144c: 97ebd650     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ee1450: aa1403e0     	mov	x0, x20
 2ee1454: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ee1458: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ee145c: d65f03c0     	ret

# BaseGameDataPiece :: System.Boolean IsDirty()
# VA 0x2ee1460 .. 0x2ee14dc (next mapped method entry)
 2ee1460: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ee1464: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ee1468: f001c195     	adrp	x21, 0x6714000
 2ee146c: d001a094     	adrp	x20, 0x62f3000
 2ee1470: aa0003f3     	mov	x19, x0
 2ee1474: 394e82a8     	ldrb	w8, [x21, #0x3a0]
 2ee1478: f946b694     	ldr	x20, [x20, #0xd68]
 2ee147c: 370000c8     	tbnz	w8, #0x0, 0x2ee1494 <__start_il2cpp+0x418e80>
 2ee1480: d001a080     	adrp	x0, 0x62f3000
 2ee1484: f946b400     	ldr	x0, [x0, #0xd68]
 2ee1488: 97ebd656     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee148c: 52800028     	mov	w8, #0x1                // =1
 2ee1490: 390e82a8     	strb	w8, [x21, #0x3a0]
 2ee1494: aa1303e0     	mov	x0, x19
 2ee1498: 97ffffba     	bl	0x2ee1380 <__start_il2cpp+0x418d6c>
 2ee149c: f9400288     	ldr	x8, [x20]
 2ee14a0: aa0003f3     	mov	x19, x0
 2ee14a4: b940e509     	ldr	w9, [x8, #0xe4]
 2ee14a8: 35000069     	cbnz	w9, 0x2ee14b4 <__start_il2cpp+0x418ea0>
 2ee14ac: aa0803e0     	mov	x0, x8
 2ee14b0: 97ebd6ab     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee14b4: aa1303e0     	mov	x0, x19
 2ee14b8: 52800021     	mov	w1, #0x1                // =1
 2ee14bc: 2a1f03e2     	mov	w2, wzr
 2ee14c0: aa1f03e3     	mov	x3, xzr
 2ee14c4: 97f13020     	bl	0x2b2d544 <__start_il2cpp+0x64f30>
 2ee14c8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ee14cc: 7100041f     	cmp	w0, #0x1
 2ee14d0: 1a9f17e0     	cset	w0, eq
 2ee14d4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ee14d8: d65f03c0     	ret

# BaseGameDataPiece :: System.Void LockChanges()
# VA 0x2ee14dc .. 0x2ee14e8 (next mapped method entry)
 2ee14dc: 52800028     	mov	w8, #0x1                // =1
 2ee14e0: 39008008     	strb	w8, [x0, #0x20]
 2ee14e4: d65f03c0     	ret

# BaseGameDataPiece :: System.Void UnlockChanges()
# VA 0x2ee14e8 .. 0x2ee14f0 (next mapped method entry)
 2ee14e8: 3900801f     	strb	wzr, [x0, #0x20]
 2ee14ec: d65f03c0     	ret

# BaseGameDataPiece :: System.Void TriggerUpdate()
# VA 0x2ee14f0 .. 0x2ee14f4 (next mapped method entry)
 2ee14f0: d65f03c0     	ret

# BaseGameDataPiece :: System.Void .ctor()
# VA 0x2ee14f4 .. 0x2ee14fc (next mapped method entry)
 2ee14f4: aa1f03e1     	mov	x1, xzr
 2ee14f8: 1489b994     	b	0x514fb48 <__start_il2cpp+0x2687534>
