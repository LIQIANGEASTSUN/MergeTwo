
# Pair`2 :: System.Void .ctor(T t, K k)
# VA 0x3d90ca4 .. 0x3d90cac (next mapped method entry)
 3d90ca4: 29000801     	stp	w1, w2, [x0]
 3d90ca8: d65f03c0     	ret

# Pair`2 :: System.Void Deconstruct(out T obj1, out K obj2)
# VA 0x3d90cac .. 0x3d911c0 (next mapped method entry)
 3d90cac: b9400008     	ldr	w8, [x0]
 3d90cb0: b9000028     	str	w8, [x1]
 3d90cb4: b9400408     	ldr	w8, [x0, #0x4]
 3d90cb8: b9000048     	str	w8, [x2]
 3d90cbc: d65f03c0     	ret
 3d90cc0: f81e0ffe     	str	x30, [sp, #-0x20]!
 3d90cc4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 3d90cc8: 2a0203f3     	mov	w19, w2
 3d90ccc: aa0003f4     	mov	x20, x0
 3d90cd0: f9000001     	str	x1, [x0]
 3d90cd4: 97b1182e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 3d90cd8: b9000a93     	str	w19, [x20, #0x8]
 3d90cdc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 3d90ce0: f84207fe     	ldr	x30, [sp], #0x20
 3d90ce4: d65f03c0     	ret
 3d90ce8: f81e0ffe     	str	x30, [sp, #-0x20]!
 3d90cec: a9014ff4     	stp	x20, x19, [sp, #0x10]
 3d90cf0: f9400008     	ldr	x8, [x0]
 3d90cf4: aa0003f4     	mov	x20, x0
 3d90cf8: aa0103e0     	mov	x0, x1
 3d90cfc: aa0203f3     	mov	x19, x2
 3d90d00: f9000028     	str	x8, [x1]
 3d90d04: aa0803e1     	mov	x1, x8
 3d90d08: 97b11821     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 3d90d0c: b9400a88     	ldr	w8, [x20, #0x8]
 3d90d10: b9000268     	str	w8, [x19]
 3d90d14: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 3d90d18: f84207fe     	ldr	x30, [sp], #0x20
 3d90d1c: d65f03c0     	ret
 3d90d20: f81e0ffe     	str	x30, [sp, #-0x20]!
 3d90d24: a9014ff4     	stp	x20, x19, [sp, #0x10]
 3d90d28: aa0203f3     	mov	x19, x2
 3d90d2c: aa0003f4     	mov	x20, x0
 3d90d30: f9000001     	str	x1, [x0]
 3d90d34: 97b11816     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 3d90d38: f8008e93     	str	x19, [x20, #0x8]!
 3d90d3c: aa1403e0     	mov	x0, x20
 3d90d40: aa1303e1     	mov	x1, x19
 3d90d44: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 3d90d48: f84207fe     	ldr	x30, [sp], #0x20
 3d90d4c: 17b11810     	b	0x29d6d8c <mono_class_get_checked+0x674>
 3d90d50: f81e0ffe     	str	x30, [sp, #-0x20]!
 3d90d54: a9014ff4     	stp	x20, x19, [sp, #0x10]
 3d90d58: f9400008     	ldr	x8, [x0]
 3d90d5c: aa0003f4     	mov	x20, x0
 3d90d60: aa0103e0     	mov	x0, x1
 3d90d64: aa0203f3     	mov	x19, x2
 3d90d68: f9000028     	str	x8, [x1]
 3d90d6c: aa0803e1     	mov	x1, x8
 3d90d70: 97b11807     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 3d90d74: f9400681     	ldr	x1, [x20, #0x8]
 3d90d78: aa1303e0     	mov	x0, x19
 3d90d7c: f9000261     	str	x1, [x19]
 3d90d80: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 3d90d84: f84207fe     	ldr	x30, [sp], #0x20
 3d90d88: 17b11801     	b	0x29d6d8c <mono_class_get_checked+0x674>
 3d90d8c: 2d000400     	stp	s0, s1, [x0]
 3d90d90: b9000801     	str	w1, [x0, #0x8]
 3d90d94: d65f03c0     	ret
 3d90d98: f9400008     	ldr	x8, [x0]
 3d90d9c: f9000028     	str	x8, [x1]
 3d90da0: b9400808     	ldr	w8, [x0, #0x8]
 3d90da4: b9000048     	str	w8, [x2]
 3d90da8: d65f03c0     	ret
 3d90dac: 2d000400     	stp	s0, s1, [x0]
 3d90db0: 2d010c02     	stp	s2, s3, [x0, #0x8]
 3d90db4: d65f03c0     	ret
 3d90db8: f9400008     	ldr	x8, [x0]
 3d90dbc: f9000028     	str	x8, [x1]
 3d90dc0: f9400408     	ldr	x8, [x0, #0x8]
 3d90dc4: f9000048     	str	x8, [x2]
 3d90dc8: d65f03c0     	ret
 3d90dcc: a9ba7bfd     	stp	x29, x30, [sp, #-0x60]!
 3d90dd0: a9016ffc     	stp	x28, x27, [sp, #0x10]
 3d90dd4: a90267fa     	stp	x26, x25, [sp, #0x20]
 3d90dd8: a9035ff8     	stp	x24, x23, [sp, #0x30]
 3d90ddc: a90457f6     	stp	x22, x21, [sp, #0x40]
 3d90de0: a9054ff4     	stp	x20, x19, [sp, #0x50]
 3d90de4: 910003fd     	mov	x29, sp
 3d90de8: d10083ff     	sub	sp, sp, #0x20
 3d90dec: d53bd05c     	mrs	x28, TPIDR_EL0
 3d90df0: aa0303f5     	mov	x21, x3
 3d90df4: aa0203f4     	mov	x20, x2
 3d90df8: f9401788     	ldr	x8, [x28, #0x28]
 3d90dfc: aa0103f8     	mov	x24, x1
 3d90e00: aa0003f3     	mov	x19, x0
 3d90e04: f81f83a8     	stur	x8, [x29, #-0x8]
 3d90e08: f9401079     	ldr	x25, [x3, #0x20]
 3d90e0c: a93e87a2     	stp	x2, x1, [x29, #-0x18]
 3d90e10: 9104d728     	add	x8, x25, #0x135
 3d90e14: 79400108     	ldrh	w8, [x8]
 3d90e18: 370000e8     	tbnz	w8, #0x0, 0x3d90e34 <__start_il2cpp+0x12c8820>
 3d90e1c: aa1903e0     	mov	x0, x25
 3d90e20: 97b1f482     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d90e24: f94012b9     	ldr	x25, [x21, #0x20]
 3d90e28: 9104d728     	add	x8, x25, #0x135
 3d90e2c: 79400108     	ldrh	w8, [x8]
 3d90e30: 14000002     	b	0x3d90e38 <__start_il2cpp+0x12c8824>
 3d90e34: aa1903e0     	mov	x0, x25
 3d90e38: f9406009     	ldr	x9, [x0, #0xc0]
 3d90e3c: f9400129     	ldr	x9, [x9]
 3d90e40: b940fd3a     	ldr	w26, [x9, #0xfc]
 3d90e44: 370000e8     	tbnz	w8, #0x0, 0x3d90e60 <__start_il2cpp+0x12c884c>
 3d90e48: aa1903e0     	mov	x0, x25
 3d90e4c: 97b1f477     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d90e50: f94012b9     	ldr	x25, [x21, #0x20]
 3d90e54: 9104d728     	add	x8, x25, #0x135
 3d90e58: 79400108     	ldrh	w8, [x8]
 3d90e5c: 14000002     	b	0x3d90e64 <__start_il2cpp+0x12c8850>
 3d90e60: aa1903e0     	mov	x0, x25
 3d90e64: f9406009     	ldr	x9, [x0, #0xc0]
 3d90e68: 91003f4a     	add	x10, x26, #0xf
 3d90e6c: 927c714a     	and	x10, x10, #0x1fffffff0
 3d90e70: f9400929     	ldr	x9, [x9, #0x10]
 3d90e74: b940fd36     	ldr	w22, [x9, #0xfc]
 3d90e78: 910003e9     	mov	x9, sp
 3d90e7c: cb0a013b     	sub	x27, x9, x10
 3d90e80: 9100037f     	mov	sp, x27
 3d90e84: 91003eca     	add	x10, x22, #0xf
 3d90e88: 910003e9     	mov	x9, sp
 3d90e8c: 927c714a     	and	x10, x10, #0x1fffffff0
 3d90e90: cb0a0137     	sub	x23, x9, x10
 3d90e94: 910002ff     	mov	sp, x23
 3d90e98: 370000a8     	tbnz	w8, #0x0, 0x3d90eac <__start_il2cpp+0x12c8898>
 3d90e9c: aa1903e0     	mov	x0, x25
 3d90ea0: 97b1f462     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d90ea4: f94012b9     	ldr	x25, [x21, #0x20]
 3d90ea8: 14000002     	b	0x3d90eb0 <__start_il2cpp+0x12c889c>
 3d90eac: aa1903e0     	mov	x0, x25
 3d90eb0: f9406008     	ldr	x8, [x0, #0xc0]
 3d90eb4: aa1b03e0     	mov	x0, x27
 3d90eb8: aa1a03e2     	mov	x2, x26
 3d90ebc: f9400108     	ldr	x8, [x8]
 3d90ec0: b9402908     	ldr	w8, [x8, #0x28]
 3d90ec4: 7100011f     	cmp	w8, #0x0
 3d90ec8: d10043a8     	sub	x8, x29, #0x10
 3d90ecc: 9a88b301     	csel	x1, x24, x8, lt
 3d90ed0: 9486560c     	bl	0x5f26700 <__register_atfork@plt+0x10>
 3d90ed4: 9104d728     	add	x8, x25, #0x135
 3d90ed8: 79400108     	ldrh	w8, [x8]
 3d90edc: 37000088     	tbnz	w8, #0x0, 0x3d90eec <__start_il2cpp+0x12c88d8>
 3d90ee0: aa1903e0     	mov	x0, x25
 3d90ee4: 97b1f451     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d90ee8: aa0003f9     	mov	x25, x0
 3d90eec: f9406328     	ldr	x8, [x25, #0xc0]
 3d90ef0: aa1303e0     	mov	x0, x19
 3d90ef4: aa1b03e2     	mov	x2, x27
 3d90ef8: 2a1a03e3     	mov	w3, w26
 3d90efc: f9400508     	ldr	x8, [x8, #0x8]
 3d90f00: f9404101     	ldr	x1, [x8, #0x80]
 3d90f04: 97b117c1     	bl	0x29d6e08 <mono_class_get_checked+0x6f0>
 3d90f08: f94012b8     	ldr	x24, [x21, #0x20]
 3d90f0c: 9104d708     	add	x8, x24, #0x135
 3d90f10: 79400119     	ldrh	w25, [x8]
 3d90f14: 370000f9     	tbnz	w25, #0x0, 0x3d90f30 <__start_il2cpp+0x12c891c>
 3d90f18: aa1803e0     	mov	x0, x24
 3d90f1c: 97b1f443     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d90f20: f94012b8     	ldr	x24, [x21, #0x20]
 3d90f24: 9104d708     	add	x8, x24, #0x135
 3d90f28: 79400119     	ldrh	w25, [x8]
 3d90f2c: 14000002     	b	0x3d90f34 <__start_il2cpp+0x12c8920>
 3d90f30: aa1803e0     	mov	x0, x24
 3d90f34: f9406008     	ldr	x8, [x0, #0xc0]
 3d90f38: aa1703e0     	mov	x0, x23
 3d90f3c: aa1603e2     	mov	x2, x22
 3d90f40: f9400908     	ldr	x8, [x8, #0x10]
 3d90f44: b9402908     	ldr	w8, [x8, #0x28]
 3d90f48: 7100011f     	cmp	w8, #0x0
 3d90f4c: d10063a8     	sub	x8, x29, #0x18
 3d90f50: 9a88b281     	csel	x1, x20, x8, lt
 3d90f54: 948655eb     	bl	0x5f26700 <__register_atfork@plt+0x10>
 3d90f58: 37000099     	tbnz	w25, #0x0, 0x3d90f68 <__start_il2cpp+0x12c8954>
 3d90f5c: aa1803e0     	mov	x0, x24
 3d90f60: 97b1f432     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d90f64: aa0003f8     	mov	x24, x0
 3d90f68: f9406308     	ldr	x8, [x24, #0xc0]
 3d90f6c: aa1303e0     	mov	x0, x19
 3d90f70: aa1703e2     	mov	x2, x23
 3d90f74: 2a1603e3     	mov	w3, w22
 3d90f78: f9400508     	ldr	x8, [x8, #0x8]
 3d90f7c: f9404108     	ldr	x8, [x8, #0x80]
 3d90f80: 91008101     	add	x1, x8, #0x20
 3d90f84: 97b117a1     	bl	0x29d6e08 <mono_class_get_checked+0x6f0>
 3d90f88: f9401788     	ldr	x8, [x28, #0x28]
 3d90f8c: f85f83a9     	ldur	x9, [x29, #-0x8]
 3d90f90: eb09011f     	cmp	x8, x9
 3d90f94: 54000121     	b.ne	0x3d90fb8 <__start_il2cpp+0x12c89a4>
 3d90f98: 910003bf     	mov	sp, x29
 3d90f9c: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 3d90fa0: a94457f6     	ldp	x22, x21, [sp, #0x40]
 3d90fa4: a9435ff8     	ldp	x24, x23, [sp, #0x30]
 3d90fa8: a94267fa     	ldp	x26, x25, [sp, #0x20]
 3d90fac: a9416ffc     	ldp	x28, x27, [sp, #0x10]
 3d90fb0: a8c67bfd     	ldp	x29, x30, [sp], #0x60
 3d90fb4: d65f03c0     	ret
 3d90fb8: 948655de     	bl	0x5f26730 <__stack_chk_fail@plt>
 3d90fbc: a9ba7bfd     	stp	x29, x30, [sp, #-0x60]!
 3d90fc0: a9016ffc     	stp	x28, x27, [sp, #0x10]
 3d90fc4: a90267fa     	stp	x26, x25, [sp, #0x20]
 3d90fc8: a9035ff8     	stp	x24, x23, [sp, #0x30]
 3d90fcc: a90457f6     	stp	x22, x21, [sp, #0x40]
 3d90fd0: a9054ff4     	stp	x20, x19, [sp, #0x50]
 3d90fd4: 910003fd     	mov	x29, sp
 3d90fd8: d10043ff     	sub	sp, sp, #0x10
 3d90fdc: d53bd05c     	mrs	x28, TPIDR_EL0
 3d90fe0: aa0303f4     	mov	x20, x3
 3d90fe4: aa0203f3     	mov	x19, x2
 3d90fe8: f9401788     	ldr	x8, [x28, #0x28]
 3d90fec: aa0103f6     	mov	x22, x1
 3d90ff0: aa0003f5     	mov	x21, x0
 3d90ff4: f81f83a8     	stur	x8, [x29, #-0x8]
 3d90ff8: f9401068     	ldr	x8, [x3, #0x20]
 3d90ffc: 9104d509     	add	x9, x8, #0x135
 3d91000: 79400129     	ldrh	w9, [x9]
 3d91004: 370000e9     	tbnz	w9, #0x0, 0x3d91020 <__start_il2cpp+0x12c8a0c>
 3d91008: aa0803e0     	mov	x0, x8
 3d9100c: 97b1f407     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d91010: f9401288     	ldr	x8, [x20, #0x20]
 3d91014: 9104d509     	add	x9, x8, #0x135
 3d91018: 79400129     	ldrh	w9, [x9]
 3d9101c: 14000002     	b	0x3d91024 <__start_il2cpp+0x12c8a10>
 3d91020: aa0803e0     	mov	x0, x8
 3d91024: f940600a     	ldr	x10, [x0, #0xc0]
 3d91028: f940014a     	ldr	x10, [x10]
 3d9102c: b940fd5a     	ldr	w26, [x10, #0xfc]
 3d91030: 370000e9     	tbnz	w9, #0x0, 0x3d9104c <__start_il2cpp+0x12c8a38>
 3d91034: aa0803e0     	mov	x0, x8
 3d91038: 97b1f3fc     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d9103c: f9401288     	ldr	x8, [x20, #0x20]
 3d91040: 9104d509     	add	x9, x8, #0x135
 3d91044: 79400129     	ldrh	w9, [x9]
 3d91048: 14000002     	b	0x3d91050 <__start_il2cpp+0x12c8a3c>
 3d9104c: aa0803e0     	mov	x0, x8
 3d91050: f940600a     	ldr	x10, [x0, #0xc0]
 3d91054: 91003f4b     	add	x11, x26, #0xf
 3d91058: 927c716b     	and	x11, x11, #0x1fffffff0
 3d9105c: f940094a     	ldr	x10, [x10, #0x10]
 3d91060: b940fd58     	ldr	w24, [x10, #0xfc]
 3d91064: 910003ea     	mov	x10, sp
 3d91068: cb0b0159     	sub	x25, x10, x11
 3d9106c: 9100033f     	mov	sp, x25
 3d91070: 91003f0b     	add	x11, x24, #0xf
 3d91074: 910003ea     	mov	x10, sp
 3d91078: 927c716b     	and	x11, x11, #0x1fffffff0
 3d9107c: cb0b0157     	sub	x23, x10, x11
 3d91080: 910002ff     	mov	sp, x23
 3d91084: 37000089     	tbnz	w9, #0x0, 0x3d91094 <__start_il2cpp+0x12c8a80>
 3d91088: aa0803e0     	mov	x0, x8
 3d9108c: 97b1f3e7     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d91090: aa0003e8     	mov	x8, x0
 3d91094: f9406108     	ldr	x8, [x8, #0xc0]
 3d91098: aa1503e0     	mov	x0, x21
 3d9109c: f9400508     	ldr	x8, [x8, #0x8]
 3d910a0: f9404101     	ldr	x1, [x8, #0x80]
 3d910a4: 97b11758     	bl	0x29d6e04 <mono_class_get_checked+0x6ec>
 3d910a8: aa0003fb     	mov	x27, x0
 3d910ac: aa1903e0     	mov	x0, x25
 3d910b0: aa1a03e2     	mov	x2, x26
 3d910b4: aa1b03e1     	mov	x1, x27
 3d910b8: 94865592     	bl	0x5f26700 <__register_atfork@plt+0x10>
 3d910bc: aa1603e0     	mov	x0, x22
 3d910c0: aa1b03e1     	mov	x1, x27
 3d910c4: aa1a03e2     	mov	x2, x26
 3d910c8: 94865592     	bl	0x5f26710 <__register_atfork@plt+0x20>
 3d910cc: f9401280     	ldr	x0, [x20, #0x20]
 3d910d0: 9104d408     	add	x8, x0, #0x135
 3d910d4: 79400108     	ldrh	w8, [x8]
 3d910d8: 37000048     	tbnz	w8, #0x0, 0x3d910e0 <__start_il2cpp+0x12c8acc>
 3d910dc: 97b1f3d3     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d910e0: f9406008     	ldr	x8, [x0, #0xc0]
 3d910e4: f9400100     	ldr	x0, [x8]
 3d910e8: 9104d408     	add	x8, x0, #0x135
 3d910ec: 79400108     	ldrh	w8, [x8]
 3d910f0: 37000048     	tbnz	w8, #0x0, 0x3d910f8 <__start_il2cpp+0x12c8ae4>
 3d910f4: 97b1f3cd     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d910f8: aa1603e1     	mov	x1, x22
 3d910fc: aa1903e2     	mov	x2, x25
 3d91100: 97b11724     	bl	0x29d6d90 <mono_class_get_checked+0x678>
 3d91104: f9401280     	ldr	x0, [x20, #0x20]
 3d91108: 9104d408     	add	x8, x0, #0x135
 3d9110c: 79400108     	ldrh	w8, [x8]
 3d91110: 37000048     	tbnz	w8, #0x0, 0x3d91118 <__start_il2cpp+0x12c8b04>
 3d91114: 97b1f3c5     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d91118: f9406008     	ldr	x8, [x0, #0xc0]
 3d9111c: aa1503e0     	mov	x0, x21
 3d91120: f9400508     	ldr	x8, [x8, #0x8]
 3d91124: f9404108     	ldr	x8, [x8, #0x80]
 3d91128: 91008101     	add	x1, x8, #0x20
 3d9112c: 97b11736     	bl	0x29d6e04 <mono_class_get_checked+0x6ec>
 3d91130: aa0003f5     	mov	x21, x0
 3d91134: aa1703e0     	mov	x0, x23
 3d91138: aa1803e2     	mov	x2, x24
 3d9113c: aa1503e1     	mov	x1, x21
 3d91140: 94865570     	bl	0x5f26700 <__register_atfork@plt+0x10>
 3d91144: aa1303e0     	mov	x0, x19
 3d91148: aa1503e1     	mov	x1, x21
 3d9114c: aa1803e2     	mov	x2, x24
 3d91150: 94865570     	bl	0x5f26710 <__register_atfork@plt+0x20>
 3d91154: f9401280     	ldr	x0, [x20, #0x20]
 3d91158: 9104d408     	add	x8, x0, #0x135
 3d9115c: 79400108     	ldrh	w8, [x8]
 3d91160: 37000048     	tbnz	w8, #0x0, 0x3d91168 <__start_il2cpp+0x12c8b54>
 3d91164: 97b1f3b1     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d91168: f9406008     	ldr	x8, [x0, #0xc0]
 3d9116c: f9400900     	ldr	x0, [x8, #0x10]
 3d91170: 9104d408     	add	x8, x0, #0x135
 3d91174: 79400108     	ldrh	w8, [x8]
 3d91178: 37000048     	tbnz	w8, #0x0, 0x3d91180 <__start_il2cpp+0x12c8b6c>
 3d9117c: 97b1f3ab     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 3d91180: aa1303e1     	mov	x1, x19
 3d91184: aa1703e2     	mov	x2, x23
 3d91188: 97b11702     	bl	0x29d6d90 <mono_class_get_checked+0x678>
 3d9118c: f9401788     	ldr	x8, [x28, #0x28]
 3d91190: f85f83a9     	ldur	x9, [x29, #-0x8]
 3d91194: eb09011f     	cmp	x8, x9
 3d91198: 54000121     	b.ne	0x3d911bc <__start_il2cpp+0x12c8ba8>
 3d9119c: 910003bf     	mov	sp, x29
 3d911a0: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 3d911a4: a94457f6     	ldp	x22, x21, [sp, #0x40]
 3d911a8: a9435ff8     	ldp	x24, x23, [sp, #0x30]
 3d911ac: a94267fa     	ldp	x26, x25, [sp, #0x20]
 3d911b0: a9416ffc     	ldp	x28, x27, [sp, #0x10]
 3d911b4: a8c67bfd     	ldp	x29, x30, [sp], #0x60
 3d911b8: d65f03c0     	ret
 3d911bc: 9486555d     	bl	0x5f26730 <__stack_chk_fail@plt>
