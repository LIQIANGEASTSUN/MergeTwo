// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemChargeableContainerPredictable : ItemChargeableContainer // TypeDefIndex: 1281
{

	// Fields
	private PseudoRandom pseudoRandom; // 0xE4

	// Methods

	// RVA: 0x1108444 Offset: 0x1108444 VA: 0x1108444 Slot: 10
	public override void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01108444:  10402DE9     PUSH {r4, lr}
		   0x01108448:  0020A0E3     MOV r2, 0x0
		   0x0110844C:  0040A0E1     MOV r4, r0
		   0x01108450:  7EF4FFEB     BL $-0x2e00
		   0x01108454:  0400A0E1     MOV r0, r4
		   0x01108458:  1040BDE8     POP {r4, lr}
		   0x0110845C:  FFFFFFEA     B $+0x4  // TAIL CALL → ItemChargeableContainerPredictable.SetupPredictableRandom
		*/
	}

	// RVA: 0x11085E0 Offset: 0x11085E0 VA: 0x11085E0 Slot: 18
	public override void PreDispose() {
		/* Disassembly (ARM32, 48 instructions, 0xC0 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011085E0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011085E4:  08D04DE2     SUB sp, sp, 0x8
		   0x011085E8:  A4509FE5     LDR r5, [pc, 0xa4]
		   0x011085EC:  0040A0E1     MOV r4, r0
		   0x011085F0:  05508FE0     ADD r5, pc, r5
		   0x011085F4:  0000D5E5     LDRB r0, [r5]
		   0x011085F8:  000050E3     CMPS r0, r0, 0x0
		   0x011085FC:  0400001A     BNE $+0x18  // if (!=) goto 0x01108614
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108600:  90009FE5     LDR r0, [pc, 0x90]
		   0x01108604:  00009FE7     LDR r0, [pc, r0]
		   0x01108608:  D44AF9EB     BL $-0x1ad4a8
		   0x0110860C:  0100A0E3     MOV r0, 0x1
		   0x01108610:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108614:  000094E5     LDR r0, [r4]
		   0x01108618:  582190E5     LDR r2, [r0, 0x158]
		   0x0110861C:  5C1190E5     LDR r1, [r0, 0x15c]
		   0x01108620:  0000A0E3     MOV r0, 0x0
		   0x01108624:  04008DE5     STR r0, [sp, 0x4]
		   0x01108628:  0400A0E1     MOV r0, r4
		   0x0110862C:  32FF2FE1     BLX r2  // virtual call: vtable+0x158
		   0x01108630:  000094E5     LDR r0, [r4]
		   0x01108634:  602190E5     LDR r2, [r0, 0x160]
		   0x01108638:  641190E5     LDR r1, [r0, 0x164]
		   0x0110863C:  0400A0E1     MOV r0, r4
		   0x01108640:  32FF2FE1     BLX r2  // virtual call: vtable+0x160
		   0x01108644:  0400A0E1     MOV r0, r4
		   0x01108648:  4A0A00EB     BL $+0x2930  // CALL → Item.UnsubscribeBubble
		   0x0110864C:  340094E5     LDR r0, [r4, 0x34]
		   0x01108650:  0010A0E3     MOV r1, 0x0
		   0x01108654:  04008DE5     STR r0, [sp, 0x4]
		   0x01108658:  04008DE2     ADD r0, sp, 0x4
		   0x0110865C:  71EF7CEB     BL $+0x1f3bdcc  // CALL → Int32.ToString
		   0x01108660:  0040A0E1     MOV r4, r0
		   0x01108664:  30009FE5     LDR r0, [pc, 0x30]
		   0x01108668:  00009FE7     LDR r0, [pc, r0]
		   0x0110866C:  000090E5     LDR r0, [r0]
		   0x01108670:  741090E5     LDR r1, [r0, 0x74]
		   0x01108674:  000051E3     CMPS r0, r1, 0x0
		   0x01108678:  0000001A     BNE $+0x8  // if (!=) goto 0x01108680
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110867C:  044BF9EB     BL $-0x1ad3e8
		   // ──── Block 4 if (!=) ────────────────────
		   0x01108680:  0400A0E1     MOV r0, r4
		   0x01108684:  0010A0E3     MOV r1, 0x0
		   0x01108688:  1402FEEB     BL $-0x7f7a8
		   0x0110868C:  08D08DE2     ADD sp, sp, 0x8
		   0x01108690:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01108694:  E1371203     TSTSEQ r3, r2, 0x3840000
		   0x01108698:  0CF7F602     RSCSEQ pc, r6, 0x300000
		   0x0110869C:  A8F6F602     RSCSEQ pc, r6, 0xa800000
		*/
	}

	// RVA: 0x11086DC Offset: 0x11086DC VA: 0x11086DC Slot: 48
	protected override ItemData SelectItemToSpawn(EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 70 instructions, 0x118 bytes):
		   // CFG: 14 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011086DC:  70432DE9     PUSH {r4, r5, r6, r8, sb, lr}
		   0x011086E0:  10D04DE2     SUB sp, sp, 0x10
		   0x011086E4:  FC509FE5     LDR r5, [pc, 0xfc]
		   0x011086E8:  0040A0E1     MOV r4, r0
		   0x011086EC:  0180A0E1     MOV r8, r1
		   0x011086F0:  05508FE0     ADD r5, pc, r5
		   0x011086F4:  0000D5E5     LDRB r0, [r5]
		   0x011086F8:  000050E3     CMPS r0, r0, 0x0
		   0x011086FC:  0400001A     BNE $+0x18  // if (!=) goto 0x01108714
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108700:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x01108704:  00009FE7     LDR r0, [pc, r0]
		   0x01108708:  944AF9EB     BL $-0x1ad5a8
		   0x0110870C:  0100A0E3     MOV r0, 0x1
		   0x01108710:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108714:  AC5094E5     LDR r5, [r4, 0xac]
		   0x01108718:  0000A0E3     MOV r0, 0x0
		   0x0110871C:  0C008DE5     STR r0, [sp, 0xc]
		   0x01108720:  000055E3     CMPS r0, r5, 0x0
		   0x01108724:  0B00CDE5     STRB r0, [sp, 0xb]
		   0x01108728:  0000001A     BNE $+0x8  // if (!=) goto 0x01108730
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110872C:  274BF9EB     BL $-0x1ad35c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01108730:  0C0095E5     LDR r0, [r5, 0xc]
		   0x01108734:  000050E3     CMPS r0, r0, 0x0
		   0x01108738:  0000001A     BNE $+0x8  // if (!=) goto 0x01108740
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110873C:  244BF9EB     BL $-0x1ad368
		   // ──── Block 6 if (!=) ────────────────────
		   0x01108740:  105095E5     LDR r5, [r5, 0x10]
		   0x01108744:  000055E3     CMPS r0, r5, 0x0
		   0x01108748:  0000001A     BNE $+0x8  // if (!=) goto 0x01108750
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110874C:  1F4BF9EB     BL $-0x1ad37c
		   // ──── Block 8 if (!=) ────────────────────
		   0x01108750:  E46094E5     LDR r6, [r4, 0xe4]
		   0x01108754:  185095E5     LDR r5, [r5, 0x18]
		   0x01108758:  000056E3     CMPS r0, r6, 0x0
		   0x0110875C:  0000001A     BNE $+0x8  // if (!=) goto 0x01108764
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01108760:  1A4BF9EB     BL $-0x1ad390
		   // ──── Block 10 if (!=) ────────────────────
		   0x01108764:  0600A0E1     MOV r0, r6
		   0x01108768:  0010A0E3     MOV r1, 0x0
		   0x0110876C:  0090A0E3     MOV sb, 0x0
		   0x01108770:  B2380CEB     BL $+0x30e2d0  // CALL → PseudoRandom.GetNextIndex
		   0x01108774:  0060A0E1     MOV r6, r0
		   0x01108778:  70009FE5     LDR r0, [pc, 0x70]
		   0x0110877C:  00009FE7     LDR r0, [pc, r0]
		   0x01108780:  000090E5     LDR r0, [r0]
		   0x01108784:  741090E5     LDR r1, [r0, 0x74]
		   0x01108788:  000051E3     CMPS r0, r1, 0x0
		   0x0110878C:  0000001A     BNE $+0x8  // if (!=) goto 0x01108794
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01108790:  BF4AF9EB     BL $-0x1ad4fc
		   // ──── Block 12 if (!=) ────────────────────
		   0x01108794:  0000A0E3     MOV r0, 0x0
		   0x01108798:  2101FEEB     BL $-0x7fb74
		   0x0110879C:  0C208DE2     ADD r2, sp, 0xc
		   0x011087A0:  0B308DE2     ADD r3, sp, 0xb
		   0x011087A4:  0400A0E1     MOV r0, r4
		   0x011087A8:  0610A0E1     MOV r1, r6
		   0x011087AC:  F080CDE1     STRD r8, sb, [sp]
		   0x011087B0:  6AFCFFEB     BL $-0xe50
		   0x011087B4:  0B10DDE5     LDRB r1, [sp, 0xb]
		   0x011087B8:  0040A0E1     MOV r4, r0
		   0x011087BC:  0700A0E3     MOV r0, 0x7
		   0x011087C0:  000051E3     CMPS r0, r1, 0x0
		   0x011087C4:  0010A0E3     MOV r1, 0x0
		   0x011087C8:  04000003     MOVEQ r0, 0x4
		   0x011087CC:  F8D8FDEB     BL $-0x89c18
		   0x011087D0:  0C009DE5     LDR r0, [sp, 0xc]
		   0x011087D4:  000054E3     CMPS r0, r4, 0x0
		   0x011087D8:  0050A011     MOVNE r5, r0
		   0x011087DC:  0500A0E1     MOV r0, r5
		   0x011087E0:  10D08DE2     ADD sp, sp, 0x10
		   0x011087E4:  7083BDE8     POP {r4, r5, r6, r8, sb, pc}
		   0x011087E8:  E2361203     TSTSEQ r3, r2, 0xe200000
		   0x011087EC:  0CF6F602     RSCSEQ pc, r6, 0xc00000
		   0x011087F0:  94F5F602     RSCSEQ pc, r6, 0x25000000
		*/
	}

	// RVA: 0x1108460 Offset: 0x1108460 VA: 0x1108460
	private void SetupPredictableRandom() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01108460:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		*/
	}

	// RVA: 0x11087F4 Offset: 0x11087F4 VA: 0x11087F4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011087F4:  0010A0E3     MOV r1, 0x0
		   0x011087F8:  DDFEFFEA     B $-0x484
		*/
	}
}
