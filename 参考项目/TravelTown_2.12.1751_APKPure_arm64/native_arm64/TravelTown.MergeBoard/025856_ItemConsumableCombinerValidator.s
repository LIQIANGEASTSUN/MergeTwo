; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25856 Merger.MergeBoard.Logic.CombineValidators.ItemConsumableCombinerValidator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8727C | public bool CanCombineItems(Entity movedEntity, Entity otherEntity) { }
; bytes=300 sha256=166e30d5c28ca9632024dae892d7a96cefc81ec406a5f283d9ab9c7026d96147 status=arm64_complete_bound indexed_start=True
0x06A8727C: ffc302d1  sub sp, sp, #0xb0
0x06A87280: fe5709a9  stp x30, x21, [sp, #0x90]
0x06A87284: f44f0aa9  stp x20, x19, [sp, #0xa0]
0x06A87288: 159500f0  adrp x21, #0x7d2a000
0x06A8728C: a88e5e39  ldrb w8, [x21, #0x7a3]
0x06A87290: f40302aa  mov x20, x2
0x06A87294: f30301aa  mov x19, x1
0x06A87298: e8010037  tbnz w8, #0, #0x6a872d4
0x06A8729C: 805f00f0  adrp x0, #0x767a000
0x06A872A0: 004442f9  ldr x0, [x0, #0x488]
0x06A872A4: dde51b97  bl #0x3180a18
0x06A872A8: 406500b0  adrp x0, #0x7730000
0x06A872AC: 00d847f9  ldr x0, [x0, #0xfb0]
0x06A872B0: dae51b97  bl #0x3180a18
0x06A872B4: 40650090  adrp x0, #0x772f000
0x06A872B8: 008845f9  ldr x0, [x0, #0xb10]
0x06A872BC: d7e51b97  bl #0x3180a18
0x06A872C0: 406500d0  adrp x0, #0x7731000
0x06A872C4: 00a846f9  ldr x0, [x0, #0xd50]
0x06A872C8: d4e51b97  bl #0x3180a18
0x06A872CC: 28008052  movz w8, #0x1
0x06A872D0: a88e1e39  strb w8, [x21, #0x7a3]
0x06A872D4: e0031f2a  mov w0, wzr
0x06A872D8: 00e4006f  movi v0.2d, #0000000000000000
0x06A872DC: ff4300f9  str xzr, [sp, #0x80]
0x06A872E0: e00303ad  stp q0, q0, [sp, #0x60]
0x06A872E4: d30300b4  cbz x19, #0x6a8735c
0x06A872E8: b40300b4  cbz x20, #0x6a8735c
0x06A872EC: e00313aa  mov x0, x19
0x06A872F0: 7dfdff97  bl #0x6a868e4
0x06A872F4: 20030037  tbnz w0, #0, #0x6a87358
0x06A872F8: e00314aa  mov x0, x20
0x06A872FC: 7afdff97  bl #0x6a868e4
0x06A87300: c0020037  tbnz w0, #0, #0x6a87358
0x06A87304: 48650090  adrp x8, #0x772f000
0x06A87308: 088945f9  ldr x8, [x8, #0xb10]
0x06A8730C: e1830191  add x1, sp, #0x60
0x06A87310: e00314aa  mov x0, x20
0x06A87314: 020140f9  ldr x2, [x8]
0x06A87318: 405f4697  bl #0x3c1f018
0x06A8731C: e0010036  tbz w0, #0, #0x6a87358
0x06A87320: e8e34139  ldrb w8, [sp, #0x78]
0x06A87324: a8010036  tbz w8, #0, #0x6a87358
0x06A87328: 486500d0  adrp x8, #0x7731000
0x06A8732C: e04340f9  ldr x0, [sp, #0x80]
0x06A87330: 08a946f9  ldr x8, [x8, #0xd50]
0x06A87334: 010140f9  ldr x1, [x8]
0x06A87338: 9c834697  bl #0x3c281a8
0x06A8733C: e0000036  tbz w0, #0, #0x6a87358
0x06A87340: 486500b0  adrp x8, #0x7730000
0x06A87344: 08d947f9  ldr x8, [x8, #0xfb0]
0x06A87348: e00314aa  mov x0, x20
0x06A8734C: 010140f9  ldr x1, [x8]
0x06A87350: 3c514697  bl #0x3c1b840
0x06A87354: e0000036  tbz w0, #0, #0x6a87370
0x06A87358: e0031f2a  mov w0, wzr
0x06A8735C: f44f4aa9  ldp x20, x19, [sp, #0xa0]
0x06A87360: fe5749a9  ldp x30, x21, [sp, #0x90]
0x06A87364: 00000012  and w0, w0, #1
0x06A87368: ffc30291  add sp, sp, #0xb0
0x06A8736C: c0035fd6  ret
0x06A87370: 885f00f0  adrp x8, #0x767a000
0x06A87374: 084542f9  ldr x8, [x8, #0x488]
0x06A87378: e00313aa  mov x0, x19
0x06A8737C: 010140f9  ldr x1, [x8]
0x06A87380: e8c30091  add x8, sp, #0x30
0x06A87384: b34f4697  bl #0x3c1b250
0x06A87388: e00743ad  ldp q0, q1, [sp, #0x60]
0x06A8738C: e84340f9  ldr x8, [sp, #0x80]
0x06A87390: e21b40f9  ldr x2, [sp, #0x30]
0x06A87394: e1030091  mov x1, sp
0x06A87398: e00700ad  stp q0, q1, [sp]
0x06A8739C: e81300f9  str x8, [sp, #0x20]
0x06A873A0: 02000094  bl #0x6a873a8
0x06A873A4: eeffff17  b #0x6a8735c

; RVA 0x6A87404 | public void ToggleVisuals(IVisualComponent draggedItem, IVisualComponent overlapItemOnDragAction, bool toggle) { }
; bytes=280 sha256=c301e5057b7137f492e11c11b8c730ddb924364c00c3d60eb874baf093a800c0 status=arm64_complete_bound indexed_start=True
0x06A87404: fe0f1df8  str x30, [sp, #-0x30]!
0x06A87408: f65701a9  stp x22, x21, [sp, #0x10]
0x06A8740C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A87410: 169500f0  adrp x22, #0x7d2a000
0x06A87414: c8925e39  ldrb w8, [x22, #0x7a4]
0x06A87418: f303032a  mov w19, w3
0x06A8741C: f50302aa  mov x21, x2
0x06A87420: f40301aa  mov x20, x1
0x06A87424: c8000037  tbnz w8, #0, #0x6a8743c
0x06A87428: c06100d0  adrp x0, #0x76c1000
0x06A8742C: 00c446f9  ldr x0, [x0, #0xd88]
0x06A87430: 7ae51b97  bl #0x3180a18
0x06A87434: 28008052  movz w8, #0x1
0x06A87438: c8921e39  strb w8, [x22, #0x7a4]
0x06A8743C: f50600b4  cbz x21, #0x6a87518
0x06A87440: d66100d0  adrp x22, #0x76c1000
0x06A87444: a80240f9  ldr x8, [x21]
0x06A87448: d6c646f9  ldr x22, [x22, #0xd88]
0x06A8744C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A87450: c10240f9  ldr x1, [x22]
0x06A87454: 290100b4  cbz x9, #0x6a87478
0x06A87458: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8745C: 4a210091  add x10, x10, #8
0x06A87460: 4b815ff8  ldur x11, [x10, #-8]
0x06A87464: 7f0101eb  cmp x11, x1
0x06A87468: 00010054  b.eq #0x6a87488
0x06A8746C: 290500f1  subs x9, x9, #1
0x06A87470: 4a410091  add x10, x10, #0x10
0x06A87474: 61ffff54  b.ne #0x6a87460
0x06A87478: e20b8052  movz w2, #0x5f
0x06A8747C: e00315aa  mov x0, x21
0x06A87480: a43d1b97  bl #0x3156b10
0x06A87484: 05000014  b #0x6a87498
0x06A87488: 490140b9  ldr w9, [x10]
0x06A8748C: 297d0111  add w9, w9, #0x5f
0x06A87490: 08d1298b  add x8, x8, w9, sxtw #4
0x06A87494: 00e10491  add x0, x8, #0x138
0x06A87498: 080840a9  ldp x8, x2, [x0]
0x06A8749C: 61020012  and w1, w19, #1
0x06A874A0: e00315aa  mov x0, x21
0x06A874A4: 00013fd6  blr x8
0x06A874A8: 940300b4  cbz x20, #0x6a87518
0x06A874AC: 880240f9  ldr x8, [x20]
0x06A874B0: c10240f9  ldr x1, [x22]
0x06A874B4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A874B8: 290100b4  cbz x9, #0x6a874dc
0x06A874BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A874C0: 4a210091  add x10, x10, #8
0x06A874C4: 4b815ff8  ldur x11, [x10, #-8]
0x06A874C8: 7f0101eb  cmp x11, x1
0x06A874CC: 00010054  b.eq #0x6a874ec
0x06A874D0: 290500f1  subs x9, x9, #1
0x06A874D4: 4a410091  add x10, x10, #0x10
0x06A874D8: 61ffff54  b.ne #0x6a874c4
0x06A874DC: 22018052  movz w2, #0x9
0x06A874E0: e00314aa  mov x0, x20
0x06A874E4: 8b3d1b97  bl #0x3156b10
0x06A874E8: 05000014  b #0x6a874fc
0x06A874EC: 490140b9  ldr w9, [x10]
0x06A874F0: 29250011  add w9, w9, #9
0x06A874F4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A874F8: 00e10491  add x0, x8, #0x138
0x06A874FC: 030840a9  ldp x3, x2, [x0]
0x06A87500: 61020012  and w1, w19, #1
0x06A87504: e00314aa  mov x0, x20
0x06A87508: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A8750C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A87510: fe0743f8  ldr x30, [sp], #0x30
0x06A87514: 60001fd6  br x3
0x06A87518: e5e51b97  bl #0x3180cac

; RVA 0x6A873A8 | private bool CanConsume(InteractionComponent interactionComponent, string itemId) { }
; bytes=92 sha256=3a3183856b806810385712b865c35694ae6aa28b49e4230941cae39bdae8df0d status=arm64_complete_bound indexed_start=True
0x06A873A8: fe0f1df8  str x30, [sp, #-0x30]!
0x06A873AC: f65701a9  stp x22, x21, [sp, #0x10]
0x06A873B0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A873B4: 169500f0  adrp x22, #0x7d2a000
0x06A873B8: 155f00f0  adrp x21, #0x766a000
0x06A873BC: c8965e39  ldrb w8, [x22, #0x7a5]
0x06A873C0: b55a47f9  ldr x21, [x21, #0xeb0]
0x06A873C4: f30302aa  mov x19, x2
0x06A873C8: f40301aa  mov x20, x1
0x06A873CC: c8000037  tbnz w8, #0, #0x6a873e4
0x06A873D0: 005f00f0  adrp x0, #0x766a000
0x06A873D4: 005847f9  ldr x0, [x0, #0xeb0]
0x06A873D8: 90e51b97  bl #0x3180a18
0x06A873DC: 28008052  movz w8, #0x1
0x06A873E0: c8961e39  strb w8, [x22, #0x7a5]
0x06A873E4: e00314aa  mov x0, x20
0x06A873E8: 4d000094  bl #0x6a8751c
0x06A873EC: a20240f9  ldr x2, [x21]
0x06A873F0: e10313aa  mov x1, x19
0x06A873F4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A873F8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A873FC: fe0743f8  ldr x30, [sp], #0x30
0x06A87400: f0c14617  b #0x3c37bc0

; RVA 0x6A8763C | public void .ctor() { }
; bytes=8 sha256=6a3f6f61721df04bad54c6b63a3fe205889de5c2baad0b7028b35047909cf8a8 status=arm64_complete_bound indexed_start=True
0x06A8763C: e1031faa  mov x1, xzr
0x06A87640: ef4bb117  b #0x56da5fc

