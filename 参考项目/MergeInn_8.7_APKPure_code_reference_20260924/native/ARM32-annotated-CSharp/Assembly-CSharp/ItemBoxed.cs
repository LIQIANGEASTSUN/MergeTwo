// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemBoxed : ItemMerging // TypeDefIndex: 1301
{

	// Fields
	[SerializeField]
	private ItemBoxed.BoxSpriteSet[] boxesSprites; // 0x8C
	private ItemBoxed.BoxSpriteSet spriteSet; // 0x90

	// Methods

	// RVA: 0x110EF40 Offset: 0x110EF40 VA: 0x110EF40 Slot: 10
	public override void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110EF40:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0110EF44:  0040A0E1     MOV r4, r0
		   0x0110EF48:  9CEDFFEB     BL $-0x4988
		   0x0110EF4C:  000094E5     LDR r0, [r4]
		   0x0110EF50:  0110A0E3     MOV r1, 0x1
		   0x0110EF54:  D86EC0E1     LDRD r6, r7, [r0, 0xe8]
		   0x0110EF58:  0400A0E1     MOV r0, r4
		   0x0110EF5C:  0720A0E1     MOV r2, r7
		   0x0110EF60:  36FF2FE1     BLX r6
		   0x0110EF64:  8C6094E5     LDR r6, [r4, 0x8c]
		   0x0110EF68:  000056E3     CMPS r0, r6, 0x0
		   0x0110EF6C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110EF74
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110EF70:  1631F9EB     BL $-0x1b3ba0
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110EF74:  0C1096E5     LDR r1, [r6, 0xc]
		   0x0110EF78:  0000A0E3     MOV r0, 0x0
		   0x0110EF7C:  0020A0E3     MOV r2, 0x0
		   0x0110EF80:  ED56FCEB     BL $-0xea444
		   0x0110EF84:  0050A0E1     MOV r5, r0
		   0x0110EF88:  0C0096E5     LDR r0, [r6, 0xc]
		   0x0110EF8C:  050050E1     CMPS r0, r0, r5
		   0x0110EF90:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0110EF98
		   // 
		   // ──── Block 3 else (<= (unsigned)) ────────────────────
		   0x0110EF94:  0E31F9EB     BL $-0x1b3bc0
		   // ──── Block 4 if (> (unsigned)) ────────────────────
		   0x0110EF98:  851186E0     ADD r1, r6, r5, lsl 3
		   0x0110EF9C:  000094E5     LDR r0, [r4]
		   0x0110EFA0:  D061C1E1     LDRD r6, r7, [r1, 0x10]
		   0x0110EFA4:  F069C4E1     STRD r6, r7, [r4, 0x90]
		   0x0110EFA8:  783190E5     LDR r3, [r0, 0x178]
		   0x0110EFAC:  7C2190E5     LDR r2, [r0, 0x17c]
		   0x0110EFB0:  0400A0E1     MOV r0, r4
		   0x0110EFB4:  0610A0E1     MOV r1, r6
		   0x0110EFB8:  33FF2FE1     BLX r3  // virtual call: vtable+0x178
		   0x0110EFBC:  000094E5     LDR r0, [r4]
		   0x0110EFC0:  0110A0E3     MOV r1, 0x1
		   0x0110EFC4:  EC5090E5     LDR r5, [r0, 0xec]
		   0x0110EFC8:  E83090E5     LDR r3, [r0, 0xe8]
		   0x0110EFCC:  0400A0E1     MOV r0, r4
		   0x0110EFD0:  0520A0E1     MOV r2, r5
		   0x0110EFD4:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x0110EFD8:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x110F008 Offset: 0x110F008 VA: 0x110F008 Slot: 14
	public override void Select(bool withAnim, Vector2 delta) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110F008:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110F00C Offset: 0x110F00C VA: 0x110F00C Slot: 21
	public override void DestroyWithAnim(Vector3 mergePos) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110F00C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		*/
	}

	// RVA: 0x110F330 Offset: 0x110F330 VA: 0x110F330 Slot: 22
	public override void ReturnToPool() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110F330:  FFFFFFEA     B $+0x4  // TAIL CALL → ItemMerging.ReturnToPool
		*/
	}

	// RVA: 0x110F3A0 Offset: 0x110F3A0 VA: 0x110F3A0 Slot: 32
	public override void Hide() {
		/* Disassembly (ARM32, 59 instructions, 0xEC bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110F3A0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0110F3A4:  0040A0E1     MOV r4, r0
		   0x0110F3A8:  5BE9FFEB     BL $-0x5a8c
		   0x0110F3AC:  0050A0E1     MOV r5, r0
		   0x0110F3B0:  000050E3     CMPS r0, r0, 0x0
		   0x0110F3B4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110F3BC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110F3B8:  0430F9EB     BL $-0x1b3fe8
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110F3BC:  0500A0E1     MOV r0, r5
		   0x0110F3C0:  3F14A0E3     MOV r1, 0x3f000000
		   0x0110F3C4:  3F24A0E3     MOV r2, 0x3f000000
		   0x0110F3C8:  0030A0E3     MOV r3, 0x0
		   0x0110F3CC:  F0A23BEB     BL $+0xee8bc8  // CALL → sub_1FF7F94
		   0x0110F3D0:  0400A0E1     MOV r0, r4
		   0x0110F3D4:  50E9FFEB     BL $-0x5ab8
		   0x0110F3D8:  A0609FE5     LDR r6, [pc, 0xa0]
		   0x0110F3DC:  0050A0E1     MOV r5, r0
		   0x0110F3E0:  06608FE0     ADD r6, pc, r6
		   0x0110F3E4:  0000D6E5     LDRB r0, [r6]
		   0x0110F3E8:  000050E3     CMPS r0, r0, 0x0
		   0x0110F3EC:  0400001A     BNE $+0x18  // if (!=) goto 0x0110F404
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110F3F0:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x0110F3F4:  00009FE7     LDR r0, [pc, r0]
		   0x0110F3F8:  582FF9EB     BL $-0x1b4298
		   0x0110F3FC:  0100A0E3     MOV r0, 0x1
		   0x0110F400:  0000C6E5     STRB r0, [r6]
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110F404:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x0110F408:  000055E3     CMPS r0, r5, 0x0
		   0x0110F40C:  00009FE7     LDR r0, [pc, r0]
		   0x0110F410:  000090E5     LDR r0, [r0]
		   0x0110F414:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110F418:  D060C0E1     LDRD r6, r7, [r0]
		   0x0110F41C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110F424
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110F420:  EA2FF9EB     BL $-0x1b4050
		   // ──── Block 6 if (!=) ────────────────────
		   0x0110F424:  0500A0E1     MOV r0, r5
		   0x0110F428:  0610A0E1     MOV r1, r6
		   0x0110F42C:  0720A0E1     MOV r2, r7
		   0x0110F430:  0030A0E3     MOV r3, 0x0
		   0x0110F434:  BDA23BEB     BL $+0xee8afc  // CALL → sub_1FF7F30
		   0x0110F438:  285094E5     LDR r5, [r4, 0x28]
		   0x0110F43C:  000055E3     CMPS r0, r5, 0x0
		   0x0110F440:  0000001A     BNE $+0x8  // if (!=) goto 0x0110F448
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110F444:  E12FF9EB     BL $-0x1b4074
		   // ──── Block 8 if (!=) ────────────────────
		   0x0110F448:  0500A0E1     MOV r0, r5
		   0x0110F44C:  0010A0E3     MOV r1, 0x0
		   0x0110F450:  0020A0E3     MOV r2, 0x0
		   0x0110F454:  D8A23BEB     BL $+0xee8b68  // CALL → sub_1FF7FBC
		   0x0110F458:  000094E5     LDR r0, [r4]
		   0x0110F45C:  0010A0E3     MOV r1, 0x0
		   0x0110F460:  EC5090E5     LDR r5, [r0, 0xec]
		   0x0110F464:  E83090E5     LDR r3, [r0, 0xe8]
		   0x0110F468:  0000E0E3     MVN r0, r0, 0x0
		   0x0110F46C:  340084E5     STR r0, [r4, 0x34]
		   0x0110F470:  0400A0E1     MOV r0, r4
		   0x0110F474:  0520A0E1     MOV r2, r5
		   0x0110F478:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x0110F47C:  13FF2FE1     BX r3
		   0x0110F480:  53C41103     TSTSEQ ip, r1, 0x53000000
		   0x0110F484:  EC79F602     RSCSEQ r7, r6, 0x3b0000
		   0x0110F488:  D479F602     RSCSEQ r7, r6, 0x350000
		*/
	}

	// RVA: 0x110F48C Offset: 0x110F48C VA: 0x110F48C Slot: 23
	protected override void SetMainSprite(Sprite s) {
		/* Disassembly (ARM32, 57 instructions, 0xE4 bytes):
		   // CFG: 12 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110F48C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110F490:  D8609FE5     LDR r6, [pc, 0xd8]
		   0x0110F494:  0050A0E1     MOV r5, r0
		   0x0110F498:  0140A0E1     MOV r4, r1
		   0x0110F49C:  06608FE0     ADD r6, pc, r6
		   0x0110F4A0:  0000D6E5     LDRB r0, [r6]
		   0x0110F4A4:  000050E3     CMPS r0, r0, 0x0
		   0x0110F4A8:  0700001A     BNE $+0x24  // if (!=) goto 0x0110F4CC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110F4AC:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x0110F4B0:  00009FE7     LDR r0, [pc, r0]
		   0x0110F4B4:  292FF9EB     BL $-0x1b4354
		   0x0110F4B8:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x0110F4BC:  00009FE7     LDR r0, [pc, r0]
		   0x0110F4C0:  262FF9EB     BL $-0x1b4360
		   0x0110F4C4:  0100A0E3     MOV r0, 0x1
		   0x0110F4C8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110F4CC:  A8609FE5     LDR r6, [pc, 0xa8]
		   0x0110F4D0:  06609FE7     LDR r6, [pc, r6]
		   0x0110F4D4:  000096E5     LDR r0, [r6]
		   0x0110F4D8:  741090E5     LDR r1, [r0, 0x74]
		   0x0110F4DC:  000051E3     CMPS r0, r1, 0x0
		   0x0110F4E0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110F4E8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110F4E4:  6A2FF9EB     BL $-0x1b4250
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110F4E8:  0400A0E1     MOV r0, r4
		   0x0110F4EC:  0010A0E3     MOV r1, 0x0
		   0x0110F4F0:  0020A0E3     MOV r2, 0x0
		   0x0110F4F4:  68A23BEB     BL $+0xee89a8  // CALL → sub_1FF7E9C
		   0x0110F4F8:  000050E3     CMPS r0, r0, 0x0
		   0x0110F4FC:  7080BD18     POPNE {r4, r5, r6, pc}
		   0x0110F500:  940095E5     LDR r0, [r5, 0x94]
		   0x0110F504:  000050E3     CMPS r0, r0, 0x0
		   0x0110F508:  1300000A     BEQ $+0x54  // if (==) goto 0x0110F55C
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x0110F50C:  000096E5     LDR r0, [r6]
		   0x0110F510:  906095E5     LDR r6, [r5, 0x90]
		   0x0110F514:  741090E5     LDR r1, [r0, 0x74]
		   0x0110F518:  000051E3     CMPS r0, r1, 0x0
		   0x0110F51C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110F524
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110F520:  5B2FF9EB     BL $-0x1b428c
		   // ──── Block 8 if (!=) ────────────────────
		   0x0110F524:  0600A0E1     MOV r0, r6
		   0x0110F528:  0410A0E1     MOV r1, r4
		   0x0110F52C:  0020A0E3     MOV r2, 0x0
		   0x0110F530:  8F55FCEB     BL $-0xea9bc
		   0x0110F534:  000050E3     CMPS r0, r0, 0x0
		   0x0110F538:  0700000A     BEQ $+0x24  // if (==) goto 0x0110F55C
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x0110F53C:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x0110F540:  0410A0E1     MOV r1, r4
		   0x0110F544:  00009FE7     LDR r0, [pc, r0]
		   0x0110F548:  002090E5     LDR r2, [r0]
		   0x0110F54C:  940095E5     LDR r0, [r5, 0x94]
		   0x0110F550:  95782BEB     BL $+0xade25c  // CALL → Array.IndexOf<object>
		   0x0110F554:  010070E3     CMNS r0, r0, 0x1
		   0x0110F558:  0300000A     BEQ $+0x14  // if (==) goto 0x0110F56C
		   // 
		   // ──── Block 10 (from 3 paths) ──────────────────
		   0x0110F55C:  0500A0E1     MOV r0, r5
		   0x0110F560:  0410A0E1     MOV r1, r4
		   0x0110F564:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110F568:  DBF6FFEA     B $-0x248c
		   // ──── Block 11 if (==) ────────────────────
		   0x0110F56C:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x110F584 Offset: 0x110F584 VA: 0x110F584
	public void .ctor() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110F584:  FFFFFFEA     B $+0x4  // TAIL CALL → ItemMerging..ctor
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
private struct BoxSpriteSet // TypeDefIndex: 1299
{

	// Fields
	public Sprite mainSprite; // 0x0
	public Sprite[] animation; // 0x4
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass5_0 // TypeDefIndex: 1300
{

	// Fields
	public int currentFrame; // 0x8
	public ItemBoxed <>4__this; // 0xC

	// Methods

	// RVA: 0x110F328 Offset: 0x110F328 VA: 0x110F328
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110F328:  0010A0E3     MOV r1, 0x0
		   0x0110F32C:  2E187EEA     B $+0x1f860c0  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x110F5F8 Offset: 0x110F5F8 VA: 0x110F5F8
	internal int <DestroyWithAnim>b__0() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110F5F8:  080090E5     LDR r0, [r0, 0x8]
		   0x0110F5FC:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110F600 Offset: 0x110F600 VA: 0x110F600
	internal void <DestroyWithAnim>b__1(int val) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110F600:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		*/
	}
}
