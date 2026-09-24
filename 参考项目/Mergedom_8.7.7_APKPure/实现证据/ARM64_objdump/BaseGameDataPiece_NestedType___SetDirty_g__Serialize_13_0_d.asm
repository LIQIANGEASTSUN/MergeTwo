
# BaseGameDataPiece+__SetDirty_g__Serialize_13_0_d :: System.Void .ctor(System.Int32 <>1__state)
# VA 0x2ee14fc .. 0x2ee1524 (next mapped method entry)
 2ee14fc: f81e0ffe     	str	x30, [sp, #-0x20]!
 2ee1500: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ee1504: 2a0103f3     	mov	w19, w1
 2ee1508: aa1f03e1     	mov	x1, xzr
 2ee150c: aa0003f4     	mov	x20, x0
 2ee1510: 9489b98e     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2ee1514: b9001293     	str	w19, [x20, #0x10]
 2ee1518: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ee151c: f84207fe     	ldr	x30, [sp], #0x20
 2ee1520: d65f03c0     	ret

# BaseGameDataPiece+__SetDirty_g__Serialize_13_0_d :: System.Void System.IDisposable.Dispose()
# VA 0x2ee1524 .. 0x2ee1528 (next mapped method entry)
 2ee1524: d65f03c0     	ret

# BaseGameDataPiece+__SetDirty_g__Serialize_13_0_d :: System.Boolean MoveNext()
# VA 0x2ee1528 .. 0x2ee15bc (next mapped method entry)
 2ee1528: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ee152c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ee1530: b9401015     	ldr	w21, [x0, #0x10]
 2ee1534: aa0003f3     	mov	x19, x0
 2ee1538: 34000275     	cbz	w21, 0x2ee1584 <__start_il2cpp+0x418f70>
 2ee153c: 710006bf     	cmp	w21, #0x1
 2ee1540: 54000321     	b.ne	0x2ee15a4 <__start_il2cpp+0x418f90>
 2ee1544: f9401274     	ldr	x20, [x19, #0x20]
 2ee1548: 12800008     	mov	w8, #-0x1               // =-1
 2ee154c: b9001268     	str	w8, [x19, #0x10]
 2ee1550: b4000354     	cbz	x20, 0x2ee15b8 <__start_il2cpp+0x418fa4>
 2ee1554: 39408288     	ldrb	w8, [x20, #0x20]
 2ee1558: 350000c8     	cbnz	w8, 0x2ee1570 <__start_il2cpp+0x418f5c>
 2ee155c: f9400288     	ldr	x8, [x20]
 2ee1560: aa1403e0     	mov	x0, x20
 2ee1564: f9412d09     	ldr	x9, [x8, #0x258]
 2ee1568: f9413101     	ldr	x1, [x8, #0x260]
 2ee156c: d63f0120     	blr	x9
 2ee1570: f8018e9f     	str	xzr, [x20, #0x18]!
 2ee1574: aa1403e0     	mov	x0, x20
 2ee1578: aa1f03e1     	mov	x1, xzr
 2ee157c: 97ebd604     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ee1580: 14000009     	b	0x2ee15a4 <__start_il2cpp+0x418f90>
 2ee1584: f8018e7f     	str	xzr, [x19, #0x18]!
 2ee1588: 12800008     	mov	w8, #-0x1               // =-1
 2ee158c: aa1303e0     	mov	x0, x19
 2ee1590: aa1f03e1     	mov	x1, xzr
 2ee1594: b81f8268     	stur	w8, [x19, #-0x8]
 2ee1598: 97ebd5fd     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ee159c: 52800028     	mov	w8, #0x1                // =1
 2ee15a0: b81f8268     	stur	w8, [x19, #-0x8]
 2ee15a4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ee15a8: 710002bf     	cmp	w21, #0x0
 2ee15ac: 1a9f17e0     	cset	w0, eq
 2ee15b0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ee15b4: d65f03c0     	ret
 2ee15b8: 97ebd6b4     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseGameDataPiece+__SetDirty_g__Serialize_13_0_d :: System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
# VA 0x2ee15bc .. 0x2ee15c4 (next mapped method entry)
 2ee15bc: f9400c00     	ldr	x0, [x0, #0x18]
 2ee15c0: d65f03c0     	ret

# BaseGameDataPiece+__SetDirty_g__Serialize_13_0_d :: System.Void System.Collections.IEnumerator.Reset()
# VA 0x2ee15c4 .. 0x2ee15fc (next mapped method entry)
 2ee15c4: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2ee15c8: 9001a080     	adrp	x0, 0x62f1000
 2ee15cc: f9413400     	ldr	x0, [x0, #0x268]
 2ee15d0: 97ebd609     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ee15d4: 97ebd6a9     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ee15d8: aa1f03e1     	mov	x1, xzr
 2ee15dc: aa0003f3     	mov	x19, x0
 2ee15e0: 9488b47c     	bl	0x510e7d0 <__start_il2cpp+0x26461bc>
 2ee15e4: 9001a180     	adrp	x0, 0x6311000
 2ee15e8: f9468400     	ldr	x0, [x0, #0xd08]
 2ee15ec: 97ebd602     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ee15f0: aa0003e1     	mov	x1, x0
 2ee15f4: aa1303e0     	mov	x0, x19
 2ee15f8: 97ebd655     	bl	0x29d6f4c <mono_class_get_checked+0x834>

# BaseGameDataPiece+__SetDirty_g__Serialize_13_0_d :: System.Object System.Collections.IEnumerator.get_Current()
# VA 0x2ee15fc .. 0x2ee1604 (next mapped method entry)
 2ee15fc: f9400c00     	ldr	x0, [x0, #0x18]
 2ee1600: d65f03c0     	ret
