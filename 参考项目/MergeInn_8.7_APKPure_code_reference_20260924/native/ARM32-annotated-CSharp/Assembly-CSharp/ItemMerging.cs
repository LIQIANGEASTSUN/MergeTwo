// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemMerging : Item, IPoolingItem // TypeDefIndex: 1326
{

	// Fields
	[CompilerGenerated]
	private Action<IPoolingItem> onReturnToPool; // 0x88

	// Methods

	[CompilerGenerated]
	// RVA: 0x111B31C Offset: 0x111B31C VA: 0x111B31C
	private void add_onReturnToPool(Action<IPoolingItem> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111B31C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0111B320:  98409FE5     LDR r4, [pc, 0x98]
		   0x0111B324:  0090A0E1     MOV sb, r0
		   0x0111B328:  0180A0E1     MOV r8, r1
		   0x0111B32C:  04408FE0     ADD r4, pc, r4
		   0x0111B330:  0000D4E5     LDRB r0, [r4]
		   0x0111B334:  000050E3     CMPS r0, r0, 0x0
		   0x0111B338:  0400001A     BNE $+0x18  // if (!=) goto 0x0111B350
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111B33C:  80009FE5     LDR r0, [pc, 0x80]
		   0x0111B340:  00009FE7     LDR r0, [pc, r0]
		   0x0111B344:  85FFF8EB     BL $-0x1c01e4
		   0x0111B348:  0100A0E3     MOV r0, 0x1
		   0x0111B34C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111B350:  8800B9E5     LDR r0, [sb, 0x88]!
		   0x0111B354:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0111B358:  0AA09FE7     LDR r10, [pc, r10]
		   0x0111B35C:  0810A0E1     MOV r1, r8
		   0x0111B360:  0020A0E3     MOV r2, 0x0
		   0x0111B364:  0060A0E1     MOV r6, r0
		   0x0111B368:  0070A0E3     MOV r7, 0x0
		   0x0111B36C:  71F87DEB     BL $+0x1f7e1cc  // CALL → Delegate.Combine
		   0x0111B370:  000050E3     CMPS r0, r0, 0x0
		   0x0111B374:  0A00000A     BEQ $+0x30  // if (==) goto 0x0111B3A4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0111B378:  00509AE5     LDR r5, [r10]
		   0x0111B37C:  0040A0E1     MOV r4, r0
		   0x0111B380:  0510A0E1     MOV r1, r5
		   0x0111B384:  C3FFF8EB     BL $-0x1c00ec
		   0x0111B388:  0070A0E1     MOV r7, r0
		   0x0111B38C:  000050E3     CMPS r0, r0, 0x0
		   0x0111B390:  0300001A     BNE $+0x14  // if (!=) goto 0x0111B3A4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0111B394:  0400A0E1     MOV r0, r4
		   0x0111B398:  0510A0E1     MOV r1, r5
		   0x0111B39C:  F900F9EB     BL $-0x1bfc14
		   0x0111B3A0:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x0111B3A4:  0900A0E1     MOV r0, sb
		   0x0111B3A8:  0710A0E1     MOV r1, r7
		   0x0111B3AC:  0620A0E1     MOV r2, r6
		   0x0111B3B0:  30ECF9EB     BL $-0x184f38
		   0x0111B3B4:  060050E1     CMPS r0, r0, r6
		   0x0111B3B8:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x0111B3BC:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x0111B3C0:  360B1103     TSTSEQ r0, r1, 0xd800
		   0x0111B3C4:  A0E2F502     RSCSEQ lr, r5, 0xa
		   0x0111B3C8:  88E2F502     RSCSEQ lr, r5, 0x80000008
		*/
	}

	[CompilerGenerated]
	// RVA: 0x111B3CC Offset: 0x111B3CC VA: 0x111B3CC
	private void remove_onReturnToPool(Action<IPoolingItem> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111B3CC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0111B3D0:  98409FE5     LDR r4, [pc, 0x98]
		   0x0111B3D4:  0090A0E1     MOV sb, r0
		   0x0111B3D8:  0180A0E1     MOV r8, r1
		   0x0111B3DC:  04408FE0     ADD r4, pc, r4
		   0x0111B3E0:  0000D4E5     LDRB r0, [r4]
		   0x0111B3E4:  000050E3     CMPS r0, r0, 0x0
		   0x0111B3E8:  0400001A     BNE $+0x18  // if (!=) goto 0x0111B400
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111B3EC:  80009FE5     LDR r0, [pc, 0x80]
		   0x0111B3F0:  00009FE7     LDR r0, [pc, r0]
		   0x0111B3F4:  59FFF8EB     BL $-0x1c0294
		   0x0111B3F8:  0100A0E3     MOV r0, 0x1
		   0x0111B3FC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111B400:  8800B9E5     LDR r0, [sb, 0x88]!
		   0x0111B404:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0111B408:  0AA09FE7     LDR r10, [pc, r10]
		   0x0111B40C:  0810A0E1     MOV r1, r8
		   0x0111B410:  0020A0E3     MOV r2, 0x0
		   0x0111B414:  0060A0E1     MOV r6, r0
		   0x0111B418:  0070A0E3     MOV r7, 0x0
		   0x0111B41C:  C3F87DEB     BL $+0x1f7e314  // CALL → Delegate.Remove
		   0x0111B420:  000050E3     CMPS r0, r0, 0x0
		   0x0111B424:  0A00000A     BEQ $+0x30  // if (==) goto 0x0111B454
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0111B428:  00509AE5     LDR r5, [r10]
		   0x0111B42C:  0040A0E1     MOV r4, r0
		   0x0111B430:  0510A0E1     MOV r1, r5
		   0x0111B434:  97FFF8EB     BL $-0x1c019c
		   0x0111B438:  0070A0E1     MOV r7, r0
		   0x0111B43C:  000050E3     CMPS r0, r0, 0x0
		   0x0111B440:  0300001A     BNE $+0x14  // if (!=) goto 0x0111B454
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0111B444:  0400A0E1     MOV r0, r4
		   0x0111B448:  0510A0E1     MOV r1, r5
		   0x0111B44C:  CD00F9EB     BL $-0x1bfcc4
		   0x0111B450:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x0111B454:  0900A0E1     MOV r0, sb
		   0x0111B458:  0710A0E1     MOV r1, r7
		   0x0111B45C:  0620A0E1     MOV r2, r6
		   0x0111B460:  04ECF9EB     BL $-0x184fe8
		   0x0111B464:  060050E1     CMPS r0, r0, r6
		   0x0111B468:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x0111B46C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x0111B470:  870A1103     TSTSEQ r0, r1, 0x87000
		   0x0111B474:  F0E1F502     RSCSEQ lr, r5, 0x3c
		   0x0111B478:  D8E1F502     RSCSEQ lr, r5, 0x36
		*/
	}

	// RVA: 0x110EFDC Offset: 0x110EFDC VA: 0x110EFDC Slot: 10
	public override void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110EFDC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110EFE0:  0040A0E1     MOV r4, r0
		   0x0110EFE4:  75EDFFEB     BL $-0x4a24
		   0x0110EFE8:  000094E5     LDR r0, [r4]
		   0x0110EFEC:  0110A0E3     MOV r1, 0x1
		   0x0110EFF0:  EC5090E5     LDR r5, [r0, 0xec]
		   0x0110EFF4:  E83090E5     LDR r3, [r0, 0xe8]
		   0x0110EFF8:  0400A0E1     MOV r0, r4
		   0x0110EFFC:  0520A0E1     MOV r2, r5
		   0x0110F000:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110F004:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x110F334 Offset: 0x110F334 VA: 0x110F334 Slot: 22
	public override void ReturnToPool() {
		/* Disassembly (ARM32, 27 instructions, 0x6C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110F334:  10402DE9     PUSH {r4, lr}
		   0x0110F338:  0040A0E1     MOV r4, r0
		   0x0110F33C:  0000A0E3     MOV r0, 0x0
		   0x0110F340:  4100C4E5     STRB r0, [r4, 0x41]  // vtable: Object.Equals
		   0x0110F344:  100084E5     STR r0, [r4, 0x10]  // vtable: Object.Equals
		   0x0110F348:  0400A0E1     MOV r0, r4
		   0x0110F34C:  B0F6FFEB     BL $-0x2538
		   0x0110F350:  000094E5     LDR r0, [r4]
		   0x0110F354:  602190E5     LDR r2, [r0, 0x160]
		   0x0110F358:  641190E5     LDR r1, [r0, 0x164]
		   0x0110F35C:  0400A0E1     MOV r0, r4
		   0x0110F360:  32FF2FE1     BLX r2  // virtual call: vtable+0x160
		   0x0110F364:  140094E5     LDR r0, [r4, 0x14]
		   0x0110F368:  CD2C0CE3     MOV r2, 0xcccd
		   0x0110F36C:  4C2E43E3     MOVT r2, 0x3e4c
		   0x0110F370:  FE15A0E3     MOV r1, 0x3f800000
		   0x0110F374:  0030A0E3     MOV r3, 0x0
		   0x0110F378:  084112EB     BL $+0x490428  // CALL → DOTweenModuleUI.DOFade
		   0x0110F37C:  880094E5     LDR r0, [r4, 0x88]
		   0x0110F380:  000050E3     CMPS r0, r0, 0x0
		   0x0110F384:  1080BD08     POPEQ {r4, pc}
		   0x0110F388:  0C3090E5     LDR r3, [r0, 0xc]
		   0x0110F38C:  0410A0E1     MOV r1, r4
		   0x0110F390:  142090E5     LDR r2, [r0, 0x14]
		   0x0110F394:  200090E5     LDR r0, [r0, 0x20]
		   0x0110F398:  1040BDE8     POP {r4, lr}
		   0x0110F39C:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x111084C Offset: 0x111084C VA: 0x111084C Slot: 31
	public virtual void Show() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111084C:  B6F1FFEA     B $-0x3920
		*/
	}

	// RVA: 0x111A1E8 Offset: 0x111A1E8 VA: 0x111A1E8 Slot: 32
	public virtual void Hide() {
		/* Disassembly (ARM32, 24 instructions, 0x60 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111A1E8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0111A1EC:  0040A0E1     MOV r4, r0
		   0x0111A1F0:  000090E5     LDR r0, [r0]
		   0x0111A1F4:  D02EC0E1     LDRD r2, r3, [r0, 0xe0]
		   0x0111A1F8:  0400A0E1     MOV r0, r4
		   0x0111A1FC:  0310A0E1     MOV r1, r3
		   0x0111A200:  32FF2FE1     BLX r2
		   0x0111A204:  000050E3     CMPS r0, r0, 0x0
		   0x0111A208:  0400A011     MOVNE r0, r4
		   0x0111A20C:  F4C2FF1B     BLNE $-0xf428
		   0x0111A210:  000094E5     LDR r0, [r4]
		   0x0111A214:  0010A0E3     MOV r1, 0x0
		   0x0111A218:  0050A0E3     MOV r5, 0x0
		   0x0111A21C:  D86EC0E1     LDRD r6, r7, [r0, 0xe8]
		   0x0111A220:  0400A0E1     MOV r0, r4
		   0x0111A224:  0720A0E1     MOV r2, r7
		   0x0111A228:  36FF2FE1     BLX r6
		   0x0111A22C:  0400A0E1     MOV r0, r4
		   0x0111A230:  0010A0E3     MOV r1, 0x0
		   0x0111A234:  3950C4E5     STRB r5, [r4, 0x39]
		   0x0111A238:  6ECBFFEB     BL $-0xd240
		   0x0111A23C:  0000E0E3     MVN r0, r0, 0x0
		   0x0111A240:  340084E5     STR r0, [r4, 0x34]
		   0x0111A244:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x111B47C Offset: 0x111B47C VA: 0x111B47C Slot: 30
	public void AddReturnToPoolListener(Action<IPoolingItem> onReturnToPool) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111B47C:  881080E5     STR r1, [r0, 0x88]
		   0x0111B480:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110F588 Offset: 0x110F588 VA: 0x110F588
	public void .ctor() {
		/* Disassembly (ARM32, 28 instructions, 0x70 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110F588:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110F58C:  58509FE5     LDR r5, [pc, 0x58]
		   0x0110F590:  0040A0E1     MOV r4, r0
		   0x0110F594:  05508FE0     ADD r5, pc, r5
		   0x0110F598:  0000D5E5     LDRB r0, [r5]
		   0x0110F59C:  000050E3     CMPS r0, r0, 0x0
		   0x0110F5A0:  0400001A     BNE $+0x18  // if (!=) goto 0x0110F5B8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110F5A4:  44009FE5     LDR r0, [pc, 0x44]
		   0x0110F5A8:  00009FE7     LDR r0, [pc, r0]
		   0x0110F5AC:  EB2EF9EB     BL $-0x1b444c
		   0x0110F5B0:  0100A0E3     MOV r0, 0x1
		   0x0110F5B4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110F5B8:  34009FE5     LDR r0, [pc, 0x34]
		   0x0110F5BC:  00009FE7     LDR r0, [pc, r0]
		   0x0110F5C0:  000090E5     LDR r0, [r0]
		   0x0110F5C4:  741090E5     LDR r1, [r0, 0x74]
		   0x0110F5C8:  000051E3     CMPS r0, r1, 0x0
		   0x0110F5CC:  0000001A     BNE $+0x8  // if (!=) goto 0x0110F5D4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110F5D0:  2F2FF9EB     BL $-0x1b433c
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110F5D4:  0100A0E3     MOV r0, 0x1
		   0x0110F5D8:  0010A0E3     MOV r1, 0x0
		   0x0110F5DC:  4100C4E5     STRB r0, [r4, 0x41]
		   0x0110F5E0:  0400A0E1     MOV r0, r4
		   0x0110F5E4:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110F5E8:  2EA23BEA     B $+0xee88c0
		   0x0110F5EC:  D0C81103     TSTSEQ ip, r1, 0xd00000
		   0x0110F5F0:  F49FF602     RSCSEQ sb, r6, 0x3d0
		   0x0110F5F4:  E09FF602     RSCSEQ sb, r6, 0x380
		*/
	}

	// RVA: 0x111B484 Offset: 0x111B484 VA: 0x111B484 Slot: 24
	private Transform IPoolingItem.get_transform() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111B484:  0010A0E3     MOV r1, 0x0
		   0x0111B488:  87723BEA     B $+0xedca24
		*/
	}

	// RVA: 0x111B48C Offset: 0x111B48C VA: 0x111B48C Slot: 25
	private string IPoolingItem.get_name() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111B48C:  0010A0E3     MOV r1, 0x0
		   0x0111B490:  58733BEA     B $+0xedcd68
		*/
	}

	// RVA: 0x111B494 Offset: 0x111B494 VA: 0x111B494 Slot: 26
	private void IPoolingItem.set_name(string value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111B494:  0020A0E3     MOV r2, 0x0
		   0x0111B498:  55733BEA     B $+0xedcd5c
		*/
	}
}
