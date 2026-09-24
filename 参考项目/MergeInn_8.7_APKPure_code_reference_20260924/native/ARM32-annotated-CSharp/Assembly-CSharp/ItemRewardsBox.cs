// Dll : Assembly-CSharp.dll
// Namespace: 
[Obsolete("Old class for rewards. Please use RewardsBox class.")]
public class ItemRewardsBox : ItemMerging // TypeDefIndex: 1327
{

	// Fields
	[CompilerGenerated]
	private Action<RewardItemData, Cell> dropItem; // 0x8C
	[SerializeField]
	private SparklesEffect sparklesEffect; // 0x90
	[SerializeField]
	private Image rewardImage; // 0x94
	private Tween scaleTween; // 0x98
	private Sequence animationSequence; // 0x9C

	// Methods

	[CompilerGenerated]
	// RVA: 0x111B49C Offset: 0x111B49C VA: 0x111B49C
	public void add_dropItem(Action<RewardItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111B49C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0111B4A0:  98409FE5     LDR r4, [pc, 0x98]
		   0x0111B4A4:  0090A0E1     MOV sb, r0
		   0x0111B4A8:  0180A0E1     MOV r8, r1
		   0x0111B4AC:  04408FE0     ADD r4, pc, r4
		   0x0111B4B0:  0000D4E5     LDRB r0, [r4]
		   0x0111B4B4:  000050E3     CMPS r0, r0, 0x0
		   0x0111B4B8:  0400001A     BNE $+0x18  // if (!=) goto 0x0111B4D0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111B4BC:  80009FE5     LDR r0, [pc, 0x80]
		   0x0111B4C0:  00009FE7     LDR r0, [pc, r0]
		   0x0111B4C4:  25FFF8EB     BL $-0x1c0364
		   0x0111B4C8:  0100A0E3     MOV r0, 0x1
		   0x0111B4CC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111B4D0:  8C00B9E5     LDR r0, [sb, 0x8c]!
		   0x0111B4D4:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0111B4D8:  0AA09FE7     LDR r10, [pc, r10]
		   0x0111B4DC:  0810A0E1     MOV r1, r8
		   0x0111B4E0:  0020A0E3     MOV r2, 0x0
		   0x0111B4E4:  0060A0E1     MOV r6, r0
		   0x0111B4E8:  0070A0E3     MOV r7, 0x0
		   0x0111B4EC:  11F87DEB     BL $+0x1f7e04c  // CALL → Delegate.Combine
		   0x0111B4F0:  000050E3     CMPS r0, r0, 0x0
		   0x0111B4F4:  0A00000A     BEQ $+0x30  // if (==) goto 0x0111B524
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0111B4F8:  00509AE5     LDR r5, [r10]
		   0x0111B4FC:  0040A0E1     MOV r4, r0
		   0x0111B500:  0510A0E1     MOV r1, r5
		   0x0111B504:  63FFF8EB     BL $-0x1c026c
		   0x0111B508:  0070A0E1     MOV r7, r0
		   0x0111B50C:  000050E3     CMPS r0, r0, 0x0
		   0x0111B510:  0300001A     BNE $+0x14  // if (!=) goto 0x0111B524
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0111B514:  0400A0E1     MOV r0, r4
		   0x0111B518:  0510A0E1     MOV r1, r5
		   0x0111B51C:  9900F9EB     BL $-0x1bfd94
		   0x0111B520:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x0111B524:  0900A0E1     MOV r0, sb
		   0x0111B528:  0710A0E1     MOV r1, r7
		   0x0111B52C:  0620A0E1     MOV r2, r6
		   0x0111B530:  D0EBF9EB     BL $-0x1850b8
		   0x0111B534:  060050E1     CMPS r0, r0, r6
		   0x0111B538:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x0111B53C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x0111B540:  B9091103     TSTSEQ r0, r1, 0x2e4000
		   0x0111B544:  F4E5F502     RSCSEQ lr, r5, 0x3d000000
		   0x0111B548:  DCE5F502     RSCSEQ lr, r5, 0x37000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x111B54C Offset: 0x111B54C VA: 0x111B54C
	public void remove_dropItem(Action<RewardItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111B54C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0111B550:  98409FE5     LDR r4, [pc, 0x98]
		   0x0111B554:  0090A0E1     MOV sb, r0
		   0x0111B558:  0180A0E1     MOV r8, r1
		   0x0111B55C:  04408FE0     ADD r4, pc, r4
		   0x0111B560:  0000D4E5     LDRB r0, [r4]
		   0x0111B564:  000050E3     CMPS r0, r0, 0x0
		   0x0111B568:  0400001A     BNE $+0x18  // if (!=) goto 0x0111B580
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111B56C:  80009FE5     LDR r0, [pc, 0x80]
		   0x0111B570:  00009FE7     LDR r0, [pc, r0]
		   0x0111B574:  F9FEF8EB     BL $-0x1c0414
		   0x0111B578:  0100A0E3     MOV r0, 0x1
		   0x0111B57C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111B580:  8C00B9E5     LDR r0, [sb, 0x8c]!
		   0x0111B584:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0111B588:  0AA09FE7     LDR r10, [pc, r10]
		   0x0111B58C:  0810A0E1     MOV r1, r8
		   0x0111B590:  0020A0E3     MOV r2, 0x0
		   0x0111B594:  0060A0E1     MOV r6, r0
		   0x0111B598:  0070A0E3     MOV r7, 0x0
		   0x0111B59C:  63F87DEB     BL $+0x1f7e194  // CALL → Delegate.Remove
		   0x0111B5A0:  000050E3     CMPS r0, r0, 0x0
		   0x0111B5A4:  0A00000A     BEQ $+0x30  // if (==) goto 0x0111B5D4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0111B5A8:  00509AE5     LDR r5, [r10]
		   0x0111B5AC:  0040A0E1     MOV r4, r0
		   0x0111B5B0:  0510A0E1     MOV r1, r5
		   0x0111B5B4:  37FFF8EB     BL $-0x1c031c
		   0x0111B5B8:  0070A0E1     MOV r7, r0
		   0x0111B5BC:  000050E3     CMPS r0, r0, 0x0
		   0x0111B5C0:  0300001A     BNE $+0x14  // if (!=) goto 0x0111B5D4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0111B5C4:  0400A0E1     MOV r0, r4
		   0x0111B5C8:  0510A0E1     MOV r1, r5
		   0x0111B5CC:  6D00F9EB     BL $-0x1bfe44
		   0x0111B5D0:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x0111B5D4:  0900A0E1     MOV r0, sb
		   0x0111B5D8:  0710A0E1     MOV r1, r7
		   0x0111B5DC:  0620A0E1     MOV r2, r6
		   0x0111B5E0:  A4EBF9EB     BL $-0x185168
		   0x0111B5E4:  060050E1     CMPS r0, r0, r6
		   0x0111B5E8:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x0111B5EC:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x0111B5F0:  0A091103     TSTSEQ r0, r1, 0x28000
		   0x0111B5F4:  44E5F502     RSCSEQ lr, r5, 0x11000000
		   0x0111B5F8:  2CE5F502     RSCSEQ lr, r5, 0xb000000
		*/
	}

	// RVA: 0x111B5FC Offset: 0x111B5FC VA: 0x111B5FC Slot: 10
	public override void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111B5FC:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		*/
	}

	// RVA: 0x111B73C Offset: 0x111B73C VA: 0x111B73C Slot: 8
	public override string GetLocDescription() {
		/* Disassembly (ARM32, 66 instructions, 0x108 bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111B73C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0111B740:  E8509FE5     LDR r5, [pc, 0xe8]
		   0x0111B744:  0040A0E1     MOV r4, r0
		   0x0111B748:  05508FE0     ADD r5, pc, r5
		   0x0111B74C:  0000D5E5     LDRB r0, [r5]
		   0x0111B750:  000050E3     CMPS r0, r0, 0x0
		   0x0111B754:  0700001A     BNE $+0x24  // if (!=) goto 0x0111B778
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111B758:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x0111B75C:  00009FE7     LDR r0, [pc, r0]
		   0x0111B760:  7EFEF8EB     BL $-0x1c0600
		   0x0111B764:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x0111B768:  00009FE7     LDR r0, [pc, r0]
		   0x0111B76C:  7BFEF8EB     BL $-0x1c060c
		   0x0111B770:  0100A0E3     MOV r0, 0x1
		   0x0111B774:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111B778:  0400A0E1     MOV r0, r4
		   0x0111B77C:  55B8FFEB     BL $-0x11ea4
		   0x0111B780:  0040A0E1     MOV r4, r0
		   0x0111B784:  000050E3     CMPS r0, r0, 0x0
		   0x0111B788:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B790
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111B78C:  0FFFF8EB     BL $-0x1c03bc
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111B790:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x0111B794:  00009FE7     LDR r0, [pc, r0]
		   0x0111B798:  7C4094E5     LDR r4, [r4, 0x7c]
		   0x0111B79C:  005090E5     LDR r5, [r0]
		   0x0111B7A0:  1C0095E5     LDR r0, [r5, 0x1c]
		   0x0111B7A4:  000050E3     CMPS r0, r0, 0x0
		   0x0111B7A8:  0200001A     BNE $+0x10  // if (!=) goto 0x0111B7B8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111B7AC:  0500A0E1     MOV r0, r5
		   0x0111B7B0:  D7ECF9EB     BL $-0x184c9c
		   0x0111B7B4:  1C0095E5     LDR r0, [r5, 0x1c]
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111B7B8:  080090E5     LDR r0, [r0, 0x8]
		   0x0111B7BC:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x0111B7C0:  010011E3     TSTS r0, r1, 0x1
		   0x0111B7C4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B7CC
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0111B7C8:  BAECF9EB     BL $-0x184d10
		   // ──── Block 8 if (!=) ────────────────────
		   0x0111B7CC:  741090E5     LDR r1, [r0, 0x74]
		   0x0111B7D0:  000051E3     CMPS r0, r1, 0x0
		   0x0111B7D4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B7DC
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0111B7D8:  ADFEF8EB     BL $-0x1c0544
		   // ──── Block 10 if (!=) ────────────────────
		   0x0111B7DC:  1C0095E5     LDR r0, [r5, 0x1c]
		   0x0111B7E0:  080090E5     LDR r0, [r0, 0x8]
		   0x0111B7E4:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x0111B7E8:  010011E3     TSTS r0, r1, 0x1
		   0x0111B7EC:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B7F4
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0111B7F0:  B0ECF9EB     BL $-0x184d38
		   // ──── Block 12 if (!=) ────────────────────
		   0x0111B7F4:  44109FE5     LDR r1, [pc, 0x44]
		   0x0111B7F8:  01109FE7     LDR r1, [pc, r1]
		   0x0111B7FC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0111B800:  001091E5     LDR r1, [r1]
		   0x0111B804:  005090E5     LDR r5, [r0]
		   0x0111B808:  742091E5     LDR r2, [r1, 0x74]
		   0x0111B80C:  000052E3     CMPS r0, r2, 0x0
		   0x0111B810:  0100001A     BNE $+0xc  // if (!=) goto 0x0111B81C
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0111B814:  0100A0E1     MOV r0, r1
		   0x0111B818:  9DFEF8EB     BL $-0x1c0584
		   // ──── Block 14 if (!=) ────────────────────
		   0x0111B81C:  0400A0E1     MOV r0, r4
		   0x0111B820:  0510A0E1     MOV r1, r5
		   0x0111B824:  0020A0E3     MOV r2, 0x0
		   0x0111B828:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0111B82C:  47840FEA     B $+0x3e1124  // TAIL CALL → MergeLocalization.GetLocalization
		   0x0111B830:  20071103     TSTSEQ r0, r1, 0x800000
		   0x0111B834:  44AEF502     RSCSEQ r10, r5, 0x440
		   0x0111B838:  40CFF502     RSCSEQ ip, r5, 0x100
		   0x0111B83C:  0CAEF502     RSCSEQ r10, r5, 0xc0
		   0x0111B840:  B0CEF502     RSCSEQ ip, r5, 0xb00
		*/
	}

	// RVA: 0x111B844 Offset: 0x111B844 VA: 0x111B844
	public void ClearRewardEvents() {
		/* Disassembly (ARM32, 64 instructions, 0x100 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111B844:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0111B848:  D8509FE5     LDR r5, [pc, 0xd8]
		   0x0111B84C:  0040A0E1     MOV r4, r0
		   0x0111B850:  05508FE0     ADD r5, pc, r5
		   0x0111B854:  0000D5E5     LDRB r0, [r5]
		   0x0111B858:  000050E3     CMPS r0, r0, 0x0
		   0x0111B85C:  0A00001A     BNE $+0x30  // if (!=) goto 0x0111B88C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111B860:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x0111B864:  00009FE7     LDR r0, [pc, r0]
		   0x0111B868:  3CFEF8EB     BL $-0x1c0708
		   0x0111B86C:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x0111B870:  00009FE7     LDR r0, [pc, r0]
		   0x0111B874:  39FEF8EB     BL $-0x1c0714
		   0x0111B878:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x0111B87C:  00009FE7     LDR r0, [pc, r0]
		   0x0111B880:  36FEF8EB     BL $-0x1c0720
		   0x0111B884:  0100A0E3     MOV r0, 0x1
		   0x0111B888:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111B88C:  9C0094E5     LDR r0, [r4, 0x9c]
		   0x0111B890:  0010A0E3     MOV r1, 0x0
		   0x0111B894:  20BA11EB     BL $+0x46e888  // CALL → TweenExtensions.IsActive
		   0x0111B898:  000050E3     CMPS r0, r0, 0x0
		   0x0111B89C:  0300000A     BEQ $+0x14  // if (==) goto 0x0111B8B0
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0111B8A0:  9C0094E5     LDR r0, [r4, 0x9c]
		   0x0111B8A4:  0010A0E3     MOV r1, 0x0
		   0x0111B8A8:  0020A0E3     MOV r2, 0x0
		   0x0111B8AC:  43B211EB     BL $+0x46c914  // CALL → TweenExtensions.Kill
		   // ──── Block 4 if (==) ────────────────────
		   0x0111B8B0:  80009FE5     LDR r0, [pc, 0x80]
		   0x0111B8B4:  00009FE7     LDR r0, [pc, r0]
		   0x0111B8B8:  000090E5     LDR r0, [r0]
		   0x0111B8BC:  C0FEF8EB     BL $-0x1c04f8
		   0x0111B8C0:  0050A0E1     MOV r5, r0
		   0x0111B8C4:  70009FE5     LDR r0, [pc, 0x70]
		   0x0111B8C8:  0410A0E1     MOV r1, r4
		   0x0111B8CC:  0030A0E3     MOV r3, 0x0
		   0x0111B8D0:  00009FE7     LDR r0, [pc, r0]
		   0x0111B8D4:  002090E5     LDR r2, [r0]
		   0x0111B8D8:  0500A0E1     MOV r0, r5
		   0x0111B8DC:  98467AEB     BL $+0x1e91a68  // CALL → Action..ctor
		   0x0111B8E0:  58009FE5     LDR r0, [pc, 0x58]
		   0x0111B8E4:  00009FE7     LDR r0, [pc, r0]
		   0x0111B8E8:  000090E5     LDR r0, [r0]
		   0x0111B8EC:  741090E5     LDR r1, [r0, 0x74]
		   0x0111B8F0:  000051E3     CMPS r0, r1, 0x0
		   0x0111B8F4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B8FC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111B8F8:  65FEF8EB     BL $-0x1c0664
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111B8FC:  0500A0E1     MOV r0, r5
		   0x0111B900:  0010A0E3     MOV r1, 0x0
		   0x0111B904:  EE3100EB     BL $+0xc7c0  // CALL → RewardsBox.remove_onRewardAdded
		   0x0111B908:  904094E5     LDR r4, [r4, 0x90]
		   0x0111B90C:  000054E3     CMPS r0, r4, 0x0
		   0x0111B910:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B918
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0111B914:  ADFEF8EB     BL $-0x1c0544
		   // ──── Block 8 if (!=) ────────────────────
		   0x0111B918:  0400A0E1     MOV r0, r4
		   0x0111B91C:  0010A0E3     MOV r1, 0x0
		   0x0111B920:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0111B924:  9A1810EA     B $+0x406270  // TAIL CALL → SparklesEffect.Hide
		   0x0111B928:  19061103     TSTSEQ r0, r1, 0x1900000
		   0x0111B92C:  60B0F502     RSCSEQ fp, r5, 0x60
		   0x0111B930:  48E2F502     RSCSEQ lr, r5, 0x80000004
		   0x0111B934:  98CFF502     RSCSEQ ip, r5, 0x260
		   0x0111B938:  10B0F502     RSCSEQ fp, r5, 0x10
		   0x0111B93C:  E8E1F502     RSCSEQ lr, r5, 0x3a
		   0x0111B940:  30CFF502     RSCSEQ ip, r5, 0xc0
		*/
	}

	// RVA: 0x111B944 Offset: 0x111B944 VA: 0x111B944
	private void UpdateHaloAnimationVisiblity() {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111B944:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0111B948:  905090E5     LDR r5, [r0, 0x90]
		   0x0111B94C:  0040A0E1     MOV r4, r0
		   0x0111B950:  000055E3     CMPS r0, r5, 0x0
		   0x0111B954:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B95C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111B958:  9CFEF8EB     BL $-0x1c0588
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111B95C:  0500A0E1     MOV r0, r5
		   0x0111B960:  0010A0E3     MOV r1, 0x0
		   0x0111B964:  4A1810EB     BL $+0x406130  // CALL → SparklesEffect.Show
		   0x0111B968:  0400A0E1     MOV r0, r4
		   0x0111B96C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0111B970:  FFFFFFEA     B $+0x4  // TAIL CALL → ItemRewardsBox.StartRewardAnimation
		*/
	}

	// RVA: 0x111BBEC Offset: 0x111BBEC VA: 0x111BBEC Slot: 14
	public override void Select(bool withAnim, Vector2 delta) {
		/* Disassembly (ARM32, 125 instructions, 0x1F4 bytes):
		   // CFG: 15 blocks, 13 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111BBEC:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0111BBF0:  08D04DE2     SUB sp, sp, 0x8
		   0x0111BBF4:  A8519FE5     LDR r5, [pc, 0x1a8]
		   0x0111BBF8:  0040A0E1     MOV r4, r0
		   0x0111BBFC:  0380A0E1     MOV r8, r3
		   0x0111BC00:  0290A0E1     MOV sb, r2
		   0x0111BC04:  05508FE0     ADD r5, pc, r5
		   0x0111BC08:  0170A0E1     MOV r7, r1
		   0x0111BC0C:  0000D5E5     LDRB r0, [r5]
		   0x0111BC10:  000050E3     CMPS r0, r0, 0x0
		   0x0111BC14:  1F00001A     BNE $+0x84  // if (!=) goto 0x0111BC98
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111BC18:  88019FE5     LDR r0, [pc, 0x188]
		   0x0111BC1C:  00009FE7     LDR r0, [pc, r0]
		   0x0111BC20:  4EFDF8EB     BL $-0x1c0ac0
		   0x0111BC24:  80019FE5     LDR r0, [pc, 0x180]
		   0x0111BC28:  00009FE7     LDR r0, [pc, r0]
		   0x0111BC2C:  4BFDF8EB     BL $-0x1c0acc
		   0x0111BC30:  78019FE5     LDR r0, [pc, 0x178]
		   0x0111BC34:  00009FE7     LDR r0, [pc, r0]
		   0x0111BC38:  48FDF8EB     BL $-0x1c0ad8
		   0x0111BC3C:  70019FE5     LDR r0, [pc, 0x170]
		   0x0111BC40:  00009FE7     LDR r0, [pc, r0]
		   0x0111BC44:  45FDF8EB     BL $-0x1c0ae4
		   0x0111BC48:  68019FE5     LDR r0, [pc, 0x168]
		   0x0111BC4C:  00009FE7     LDR r0, [pc, r0]
		   0x0111BC50:  42FDF8EB     BL $-0x1c0af0
		   0x0111BC54:  60019FE5     LDR r0, [pc, 0x160]
		   0x0111BC58:  00009FE7     LDR r0, [pc, r0]
		   0x0111BC5C:  3FFDF8EB     BL $-0x1c0afc
		   0x0111BC60:  58019FE5     LDR r0, [pc, 0x158]
		   0x0111BC64:  00009FE7     LDR r0, [pc, r0]
		   0x0111BC68:  3CFDF8EB     BL $-0x1c0b08
		   0x0111BC6C:  50019FE5     LDR r0, [pc, 0x150]
		   0x0111BC70:  00009FE7     LDR r0, [pc, r0]
		   0x0111BC74:  39FDF8EB     BL $-0x1c0b14
		   0x0111BC78:  48019FE5     LDR r0, [pc, 0x148]
		   0x0111BC7C:  00009FE7     LDR r0, [pc, r0]
		   0x0111BC80:  36FDF8EB     BL $-0x1c0b20
		   0x0111BC84:  40019FE5     LDR r0, [pc, 0x140]
		   0x0111BC88:  00009FE7     LDR r0, [pc, r0]
		   0x0111BC8C:  33FDF8EB     BL $-0x1c0b2c
		   0x0111BC90:  0100A0E3     MOV r0, 0x1
		   0x0111BC94:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111BC98:  0400A0E1     MOV r0, r4
		   0x0111BC9C:  0710A0E1     MOV r1, r7
		   0x0111BCA0:  3150D4E5     LDRB r5, [r4, 0x31]
		   0x0111BCA4:  63BDFFEB     BL $-0x10a6c
		   0x0111BCA8:  000055E3     CMPS r0, r5, 0x0
		   0x0111BCAC:  00005713     CMPSNE r0, r7, 0x0
		   0x0111BCB0:  0100001A     BNE $+0xc  // if (!=) goto 0x0111BCBC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111BCB4:  08D08DE2     ADD sp, sp, 0x8
		   0x0111BCB8:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111BCBC:  445094E5     LDR r5, [r4, 0x44]
		   0x0111BCC0:  107094E5     LDR r7, [r4, 0x10]
		   0x0111BCC4:  000055E3     CMPS r0, r5, 0x0
		   0x0111BCC8:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BCD0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111BCCC:  BFFDF8EB     BL $-0x1c08fc
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111BCD0:  0C6095E5     LDR r6, [r5, 0xc]
		   0x0111BCD4:  0820A0E1     MOV r2, r8
		   0x0111BCD8:  200095E5     LDR r0, [r5, 0x20]
		   0x0111BCDC:  0730A0E1     MOV r3, r7
		   0x0111BCE0:  141095E5     LDR r1, [r5, 0x14]
		   0x0111BCE4:  00108DE5     STR r1, [sp]
		   0x0111BCE8:  0910A0E1     MOV r1, sb
		   0x0111BCEC:  36FF2FE1     BLX r6  // virtual call: Item.ToString
		   0x0111BCF0:  0050A0E1     MOV r5, r0
		   0x0111BCF4:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x0111BCF8:  00009FE7     LDR r0, [pc, r0]
		   0x0111BCFC:  000090E5     LDR r0, [r0]
		   0x0111BD00:  741090E5     LDR r1, [r0, 0x74]
		   0x0111BD04:  000051E3     CMPS r0, r1, 0x0
		   0x0111BD08:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BD10
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0111BD0C:  60FDF8EB     BL $-0x1c0a78
		   // ──── Block 8 if (!=) ────────────────────
		   0x0111BD10:  0500A0E1     MOV r0, r5
		   0x0111BD14:  0010A0E3     MOV r1, 0x0
		   0x0111BD18:  37713BEB     BL $+0xedc4e4  // CALL → sub_1FF81FC
		   0x0111BD1C:  000050E3     CMPS r0, r0, 0x0
		   0x0111BD20:  E3FFFF0A     BEQ $-0x6c
		   // ──── Block 9 else (!=) ────────────────────
		   0x0111BD24:  980094E5     LDR r0, [r4, 0x98]
		   0x0111BD28:  0010A0E3     MOV r1, 0x0
		   0x0111BD2C:  FAB811EB     BL $+0x46e3f0  // CALL → TweenExtensions.IsActive
		   0x0111BD30:  000050E3     CMPS r0, r0, 0x0
		   0x0111BD34:  0300000A     BEQ $+0x14  // if (==) goto 0x0111BD48
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x0111BD38:  980094E5     LDR r0, [r4, 0x98]
		   0x0111BD3C:  0010A0E3     MOV r1, 0x0
		   0x0111BD40:  0020A0E3     MOV r2, 0x0
		   0x0111BD44:  1DB111EB     BL $+0x46c47c  // CALL → TweenExtensions.Kill
		   // ──── Block 11 if (==) ────────────────────
		   0x0111BD48:  84009FE5     LDR r0, [pc, 0x84]
		   0x0111BD4C:  00009FE7     LDR r0, [pc, r0]
		   0x0111BD50:  000090E5     LDR r0, [r0]
		   0x0111BD54:  9AFDF8EB     BL $-0x1c0990
		   0x0111BD58:  0040A0E1     MOV r4, r0
		   0x0111BD5C:  74009FE5     LDR r0, [pc, 0x74]
		   0x0111BD60:  0020A0E3     MOV r2, 0x0
		   0x0111BD64:  00009FE7     LDR r0, [pc, r0]
		   0x0111BD68:  001090E5     LDR r1, [r0]
		   0x0111BD6C:  0400A0E1     MOV r0, r4
		   0x0111BD70:  B1B47DEB     BL $+0x1f6d2cc  // CALL → Exception..ctor
		   0x0111BD74:  60009FE5     LDR r0, [pc, 0x60]
		   0x0111BD78:  00009FE7     LDR r0, [pc, r0]
		   0x0111BD7C:  000090E5     LDR r0, [r0]
		   0x0111BD80:  741090E5     LDR r1, [r0, 0x74]
		   0x0111BD84:  000051E3     CMPS r0, r1, 0x0
		   0x0111BD88:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BD90
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0111BD8C:  40FDF8EB     BL $-0x1c0af8
		   // ──── Block 13 if (!=) ────────────────────
		   0x0111BD90:  0400A0E1     MOV r0, r4
		   0x0111BD94:  0010A0E3     MOV r1, 0x0
		   0x0111BD98:  08D08DE2     ADD sp, sp, 0x8
		   0x0111BD9C:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0111BDA0:  F9703BEA     B $+0xedc3ec
		   0x0111BDA4:  66021103     TSTSEQ r0, r1, 0x60000006
		   0x0111BDA8:  18BAF502     RSCSEQ fp, r5, 0x18000
		   0x0111BDAC:  60A9F502     RSCSEQ r10, r5, 0x180000
		   0x0111BDB0:  BCACF502     RSCSEQ r10, r5, 0xbc00
		   0x0111BDB4:  A0ACF502     RSCSEQ r10, r5, 0xa000
		   0x0111BDB8:  98ACF502     RSCSEQ r10, r5, 0x9800
		   0x0111BDBC:  94ACF502     RSCSEQ r10, r5, 0x9400
		   0x0111BDC0:  D4A8F502     RSCSEQ r10, r5, 0xd40000
		   0x0111BDC4:  54DEF502     RSCSEQ sp, r5, 0x540
		   0x0111BDC8:  4CDEF502     RSCSEQ sp, r5, 0x4c0
		   0x0111BDCC:  44DEF502     RSCSEQ sp, r5, 0x440
		   0x0111BDD0:  40A8F502     RSCSEQ r10, r5, 0x400000
		   0x0111BDD4:  A0ABF502     RSCSEQ r10, r5, 0x28000
		   0x0111BDD8:  68DDF502     RSCSEQ sp, r5, 0x1a00
		   0x0111BDDC:  10A8F502     RSCSEQ r10, r5, 0x100000
		*/
	}

	// RVA: 0x111BDE8 Offset: 0x111BDE8 VA: 0x111BDE8
	private List<RewardItemData> GetDefaultRewards() {
		/* Disassembly (ARM32, 125 instructions, 0x1F4 bytes):
		   // CFG: 25 blocks, 23 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111BDE8:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0111BDEC:  1CD04DE2     SUB sp, sp, 0x1c
		   0x0111BDF0:  C0419FE5     LDR r4, [pc, 0x1c0]
		   0x0111BDF4:  0050A0E1     MOV r5, r0
		   0x0111BDF8:  04408FE0     ADD r4, pc, r4
		   0x0111BDFC:  0000D4E5     LDRB r0, [r4]
		   0x0111BE00:  000050E3     CMPS r0, r0, 0x0
		   0x0111BE04:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0111BE40
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111BE08:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x0111BE0C:  00009FE7     LDR r0, [pc, r0]
		   0x0111BE10:  D2FCF8EB     BL $-0x1c0cb0
		   0x0111BE14:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x0111BE18:  00009FE7     LDR r0, [pc, r0]
		   0x0111BE1C:  CFFCF8EB     BL $-0x1c0cbc
		   0x0111BE20:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x0111BE24:  00009FE7     LDR r0, [pc, r0]
		   0x0111BE28:  CCFCF8EB     BL $-0x1c0cc8
		   0x0111BE2C:  94019FE5     LDR r0, [pc, 0x194]
		   0x0111BE30:  00009FE7     LDR r0, [pc, r0]
		   0x0111BE34:  C9FCF8EB     BL $-0x1c0cd4
		   0x0111BE38:  0100A0E3     MOV r0, 0x1
		   0x0111BE3C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111BE40:  84019FE5     LDR r0, [pc, 0x184]
		   0x0111BE44:  00009FE7     LDR r0, [pc, r0]
		   0x0111BE48:  000090E5     LDR r0, [r0]
		   0x0111BE4C:  5CFDF8EB     BL $-0x1c0a88
		   0x0111BE50:  0090A0E1     MOV sb, r0
		   0x0111BE54:  74019FE5     LDR r0, [pc, 0x174]
		   0x0111BE58:  00009FE7     LDR r0, [pc, r0]
		   0x0111BE5C:  001090E5     LDR r1, [r0]
		   0x0111BE60:  0900A0E1     MOV r0, sb
		   0x0111BE64:  51596BEB     BL $+0x1ad654c  // CALL → List<object>..ctor
		   0x0111BE68:  845095E5     LDR r5, [r5, 0x84]
		   0x0111BE6C:  000055E3     CMPS r0, r5, 0x0
		   0x0111BE70:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BE78
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111BE74:  55FDF8EB     BL $-0x1c0aa4
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111BE78:  6C4095E5     LDR r4, [r5, 0x6c]
		   0x0111BE7C:  00B0A0E3     MOV fp, 0x0
		   0x0111BE80:  18408DE5     STR r4, [sp, 0x18]
		   0x0111BE84:  100084E2     ADD r0, r4, 0x10
		   0x0111BE88:  14008DE5     STR r0, [sp, 0x14]
		   0x0111BE8C:  000054E3     CMPS r0, r4, 0x0
		   0x0111BE90:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BE98
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111BE94:  4DFDF8EB     BL $-0x1c0ac4
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111BE98:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0111BE9C:  00005BE1     CMPS r0, fp, r0
		   0x0111BEA0:  410000AA     BGE $+0x10c  // if (>=) goto 0x0111BFAC
		   // 
		   // ──── Block 7 else (<) ────────────────────
		   0x0111BEA4:  0B0050E1     CMPS r0, r0, fp
		   0x0111BEA8:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0111BEB0
		   // 
		   // ──── Block 8 else (<= (unsigned)) ────────────────────
		   0x0111BEAC:  48FDF8EB     BL $-0x1c0ad8
		   // ──── Block 9 if (> (unsigned)) ────────────────────
		   0x0111BEB0:  14009DE5     LDR r0, [sp, 0x14]
		   0x0111BEB4:  0B5190E7     LDR r5, [r0, fp, lsl 2]
		   0x0111BEB8:  000055E3     CMPS r0, r5, 0x0
		   0x0111BEBC:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BEC4
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0111BEC0:  42FDF8EB     BL $-0x1c0af0
		   // ──── Block 11 if (!=) ────────────────────
		   0x0111BEC4:  185095E5     LDR r5, [r5, 0x18]
		   0x0111BEC8:  000055E3     CMPS r0, r5, 0x0
		   0x0111BECC:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BED4
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0111BED0:  3EFDF8EB     BL $-0x1c0b00
		   // ──── Block 13 if (!=) ────────────────────
		   0x0111BED4:  086095E5     LDR r6, [r5, 0x8]
		   0x0111BED8:  000056E3     CMPS r0, r6, 0x0
		   0x0111BEDC:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BEE4
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x0111BEE0:  3AFDF8EB     BL $-0x1c0b10
		   // ──── Block 15 if (!=) ────────────────────
		   0x0111BEE4:  0500A0E1     MOV r0, r5
		   0x0111BEE8:  18A096E5     LDR r10, [r6, 0x18]
		   0x0111BEEC:  BDB7FFEB     BL $-0x12104
		   0x0111BEF0:  B08085E2     ADD r8, r5, 0xb0
		   0x0111BEF4:  0070A0E1     MOV r7, r0
		   0x0111BEF8:  500198E8     LDM r8, {r4, r6, r8}
		   0x0111BEFC:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x0111BF00:  00009FE7     LDR r0, [pc, r0]
		   0x0111BF04:  000090E5     LDR r0, [r0]
		   0x0111BF08:  2DFDF8EB     BL $-0x1c0b44
		   0x0111BF0C:  0050A0E1     MOV r5, r0
		   0x0111BF10:  0000A0E3     MOV r0, 0x0
		   0x0111BF14:  0C008DE5     STR r0, [sp, 0xc]
		   0x0111BF18:  0500A0E1     MOV r0, r5
		   0x0111BF1C:  0A10A0E1     MOV r1, r10
		   0x0111BF20:  0720A0E1     MOV r2, r7
		   0x0111BF24:  0030A0E3     MOV r3, 0x0
		   0x0111BF28:  50018DE8     STM sp, {r4, r6, r8}
		   0x0111BF2C:  153A00EB     BL $+0xe85c  // CALL → RewardItemData..ctor
		   0x0111BF30:  000059E3     CMPS r0, sb, 0x0
		   0x0111BF34:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BF3C
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x0111BF38:  24FDF8EB     BL $-0x1c0b68
		   // ──── Block 17 if (!=) ────────────────────
		   0x0111BF3C:  100099E5     LDR r0, [sb, 0x10]
		   0x0111BF40:  086099E5     LDR r6, [sb, 0x8]
		   0x0111BF44:  0C7099E5     LDR r7, [sb, 0xc]
		   0x0111BF48:  010080E2     ADD r0, r0, 0x1
		   0x0111BF4C:  84109FE5     LDR r1, [pc, 0x84]
		   0x0111BF50:  000056E3     CMPS r0, r6, 0x0
		   0x0111BF54:  01109FE7     LDR r1, [pc, r1]
		   0x0111BF58:  18409DE5     LDR r4, [sp, 0x18]
		   0x0111BF5C:  100089E5     STR r0, [sb, 0x10]
		   0x0111BF60:  00A091E5     LDR r10, [r1]
		   0x0111BF64:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BF6C
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x0111BF68:  18FDF8EB     BL $-0x1c0b98
		   // ──── Block 19 if (!=) ────────────────────
		   0x0111BF6C:  0C0096E5     LDR r0, [r6, 0xc]
		   0x0111BF70:  000057E1     CMPS r0, r7, r0
		   0x0111BF74:  0400002A     BHS $+0x18  // if (>= (unsigned)) goto 0x0111BF8C
		   // 
		   // ──── Block 20 else (< (unsigned)) ────────────────────
		   0x0111BF78:  010087E2     ADD r0, r7, 0x1
		   0x0111BF7C:  0C0089E5     STR r0, [sb, 0xc]
		   0x0111BF80:  070186E0     ADD r0, r6, r7, lsl 2
		   0x0111BF84:  105080E5     STR r5, [r0, 0x10]
		   0x0111BF88:  050000EA     B $+0x1c  // goto 0x0111BFA4
		   // ──── Block 21 if (>= (unsigned)) ────────────────────
		   0x0111BF8C:  10009AE5     LDR r0, [r10, 0x10]
		   0x0111BF90:  0510A0E1     MOV r1, r5
		   0x0111BF94:  600090E5     LDR r0, [r0, 0x60]
		   0x0111BF98:  382090E5     LDR r2, [r0, 0x38]
		   0x0111BF9C:  0900A0E1     MOV r0, sb
		   0x0111BFA0:  055B6BEB     BL $+0x1ad6c1c  // CALL → List<object>.AddWithResize
		   // ──── Block 22 ──────────────────────────────
		   0x0111BFA4:  01B08BE2     ADD fp, fp, 0x1
		   0x0111BFA8:  B7FFFFEA     B $-0x11c
		   // ──── Block 23 if (>=) ────────────────────
		   0x0111BFAC:  0900A0E1     MOV r0, sb
		   0x0111BFB0:  1CD08DE2     ADD sp, sp, 0x1c
		   0x0111BFB4:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x0111BFB8:  73001103     TSTSEQ r0, r1, 0x73
		   0x0111BFBC:  C4DCF502     RSCSEQ sp, r5, 0xc400
		   0x0111BFC0:  BCDCF502     RSCSEQ sp, r5, 0xbc00
		   0x0111BFC4:  B4DCF502     RSCSEQ sp, r5, 0xb400
		   0x0111BFC8:  ACDCF502     RSCSEQ sp, r5, 0xac00
		   0x0111BFCC:  94DCF502     RSCSEQ sp, r5, 0x9400
		   0x0111BFD0:  7CDCF502     RSCSEQ sp, r5, 0x7c00
		   0x0111BFD4:  DCDBF502     RSCSEQ sp, r5, 0x37000
		   0x0111BFD8:  7CDBF502     RSCSEQ sp, r5, 0x1f000
		*/
	}

	// RVA: 0x111BDE0 Offset: 0x111BDE0 VA: 0x111BDE0
	private RewardItemData SelectObject() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111BDE0:  0000A0E3     MOV r0, 0x0
		   0x0111BDE4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x111B974 Offset: 0x111B974 VA: 0x111B974
	private void StartRewardAnimation() {
		/* Disassembly (ARM32, 76 instructions, 0x130 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111B974:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0111B978:  20D04DE2     SUB sp, sp, 0x20
		   0x0111B97C:  44529FE5     LDR r5, [pc, 0x244]
		   0x0111B980:  0040A0E1     MOV r4, r0
		   0x0111B984:  05508FE0     ADD r5, pc, r5
		   0x0111B988:  0000D5E5     LDRB r0, [r5]
		   0x0111B98C:  000050E3     CMPS r0, r0, 0x0
		   0x0111B990:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0111B9CC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111B994:  30029FE5     LDR r0, [pc, 0x230]
		   0x0111B998:  00009FE7     LDR r0, [pc, r0]
		   0x0111B99C:  EFFDF8EB     BL $-0x1c083c
		   0x0111B9A0:  28029FE5     LDR r0, [pc, 0x228]
		   0x0111B9A4:  00009FE7     LDR r0, [pc, r0]
		   0x0111B9A8:  ECFDF8EB     BL $-0x1c0848
		   0x0111B9AC:  20029FE5     LDR r0, [pc, 0x220]
		   0x0111B9B0:  00009FE7     LDR r0, [pc, r0]
		   0x0111B9B4:  E9FDF8EB     BL $-0x1c0854
		   0x0111B9B8:  18029FE5     LDR r0, [pc, 0x218]
		   0x0111B9BC:  00009FE7     LDR r0, [pc, r0]
		   0x0111B9C0:  E6FDF8EB     BL $-0x1c0860
		   0x0111B9C4:  0100A0E3     MOV r0, 0x1
		   0x0111B9C8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111B9CC:  9C0094E5     LDR r0, [r4, 0x9c]
		   0x0111B9D0:  0010A0E3     MOV r1, 0x0
		   0x0111B9D4:  D0B911EB     BL $+0x46e748  // CALL → TweenExtensions.IsActive
		   0x0111B9D8:  000050E3     CMPS r0, r0, 0x0
		   0x0111B9DC:  7600001A     BNE $+0x1e0
		   0x0111B9E0:  945094E5     LDR r5, [r4, 0x94]
		   0x0111B9E4:  000055E3     CMPS r0, r5, 0x0
		   0x0111B9E8:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B9F0
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0111B9EC:  77FEF8EB     BL $-0x1c061c
		   // ──── Block 5 if (!=) ────────────────────
		   0x0111B9F0:  0500A0E1     MOV r0, r5
		   0x0111B9F4:  0010A0E3     MOV r1, 0x0
		   0x0111B9F8:  2B713BEB     BL $+0xedc4b4  // CALL → sub_1FF7EAC
		   0x0111B9FC:  0050A0E1     MOV r5, r0
		   0x0111BA00:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x0111BA04:  00009FE7     LDR r0, [pc, r0]
		   0x0111BA08:  000090E5     LDR r0, [r0]
		   0x0111BA0C:  741090E5     LDR r1, [r0, 0x74]
		   0x0111BA10:  000051E3     CMPS r0, r1, 0x0
		   0x0111BA14:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BA1C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0111BA18:  1DFEF8EB     BL $-0x1c0784
		   // ──── Block 7 if (!=) ────────────────────
		   0x0111BA1C:  0000A0E3     MOV r0, 0x0
		   0x0111BA20:  00A0A0E3     MOV r10, 0x0
		   0x0111BA24:  4CA411EB     BL $+0x469138  // CALL → DOTween.Sequence
		   0x0111BA28:  9A8909E3     MOV r8, 0x999a
		   0x0111BA2C:  0020A0E3     MOV r2, 0x0
		   0x0111BA30:  998E43E3     MOVT r8, 0x3e99
		   0x0111BA34:  9C0084E5     STR r0, [r4, 0x9c]
		   0x0111BA38:  0810A0E1     MOV r1, r8
		   0x0111BA3C:  CCAE11EB     BL $+0x46bb38  // CALL → TweenSettingsExtensions.AppendInterval
		   0x0111BA40:  9A1909E3     MOV r1, 0x999a
		   0x0111BA44:  CD2C0CE3     MOV r2, 0xcccd
		   0x0111BA48:  991F43E3     MOVT r1, 0x3f99
		   0x0111BA4C:  4C2E43E3     MOVT r2, 0x3e4c
		   0x0111BA50:  0500A0E1     MOV r0, r5
		   0x0111BA54:  0030A0E3     MOV r3, 0x0
		   0x0111BA58:  9C7094E5     LDR r7, [r4, 0x9c]
		   0x0111BA5C:  7ADB11EB     BL $+0x476df0  // CALL → ShortcutExtensions.DOScaleX
		   0x0111BA60:  0010A0E1     MOV r1, r0
		   0x0111BA64:  0700A0E1     MOV r0, r7
		   0x0111BA68:  0020A0E3     MOV r2, 0x0
		   0x0111BA6C:  82E511EB     BL $+0x479610  // CALL → TweenSettingsExtensions.Append
		   0x0111BA70:  68919FE5     LDR sb, [pc, 0x168]
		   0x0111BA74:  1210A0E3     MOV r1, 0x12
		   0x0111BA78:  09909FE7     LDR sb, [pc, sb]
		   0x0111BA7C:  002099E5     LDR r2, [sb]
		   0x0111BA80:  886C27EB     BL $+0x9db228  // CALL → TweenSettingsExtensions.SetEase<object>
		   0x0111BA84:  9C7094E5     LDR r7, [r4, 0x9c]
		   0x0111BA88:  000055E3     CMPS r0, r5, 0x0
		   0x0111BA8C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BA94
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0111BA90:  4EFEF8EB     BL $-0x1c06c0
		   // ──── Block 9 if (!=) ────────────────────
		   0x0111BA94:  14008DE2     ADD r0, sp, 0x14
		   0x0111BA98:  0510A0E1     MOV r1, r5
		   0x0111BA9C:  0020A0E3     MOV r2, 0x0
		   0x0111BAA0:  EC713BEB     BL $+0xedc7b8  // CALL → sub_1FF8258
		*/
	}

	// RVA: 0x111BFDC Offset: 0x111BFDC VA: 0x111BFDC
	private void ResetToDefalutSpriteTransform() {
		/* Disassembly (ARM32, 103 instructions, 0x19C bytes):
		   // CFG: 18 blocks, 16 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111BFDC:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0111BFE0:  28D04DE2     SUB sp, sp, 0x28
		   0x0111BFE4:  944090E5     LDR r4, [r0, 0x94]
		   0x0111BFE8:  0080A0E1     MOV r8, r0
		   0x0111BFEC:  000054E3     CMPS r0, r4, 0x0
		   0x0111BFF0:  0000001A     BNE $+0x8  // if (!=) goto 0x0111BFF8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111BFF4:  F5FCF8EB     BL $-0x1c0c24
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111BFF8:  0400A0E1     MOV r0, r4
		   0x0111BFFC:  0010A0E3     MOV r1, 0x0
		   0x0111C000:  A96F3BEB     BL $+0xedbeac  // CALL → sub_1FF7EAC
		   0x0111C004:  58419FE5     LDR r4, [pc, 0x158]
		   0x0111C008:  0050A0E1     MOV r5, r0
		   0x0111C00C:  04408FE0     ADD r4, pc, r4
		   0x0111C010:  0000D4E5     LDRB r0, [r4]
		   0x0111C014:  000050E3     CMPS r0, r0, 0x0
		   0x0111C018:  0400001A     BNE $+0x18  // if (!=) goto 0x0111C030
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111C01C:  44019FE5     LDR r0, [pc, 0x144]
		   0x0111C020:  00009FE7     LDR r0, [pc, r0]
		   0x0111C024:  4DFCF8EB     BL $-0x1c0ec4
		   0x0111C028:  0100A0E3     MOV r0, 0x1
		   0x0111C02C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111C030:  34919FE5     LDR sb, [pc, 0x134]
		   0x0111C034:  000055E3     CMPS r0, r5, 0x0
		   0x0111C038:  09909FE7     LDR sb, [pc, sb]
		   0x0111C03C:  000099E5     LDR r0, [sb]
		   0x0111C040:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0111C044:  0C6090E5     LDR r6, [r0, 0xc]
		   0x0111C048:  107090E5     LDR r7, [r0, 0x10]
		   0x0111C04C:  144090E5     LDR r4, [r0, 0x14]
		   0x0111C050:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C058
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111C054:  DDFCF8EB     BL $-0x1c0c84
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111C058:  0000A0E3     MOV r0, 0x0
		   0x0111C05C:  0610A0E1     MOV r1, r6
		   0x0111C060:  00008DE5     STR r0, [sp]
		   0x0111C064:  0500A0E1     MOV r0, r5
		   0x0111C068:  0720A0E1     MOV r2, r7
		   0x0111C06C:  0430A0E1     MOV r3, r4
		   0x0111C070:  3E703BEB     BL $+0xedc100  // CALL → sub_1FF8170
		   0x0111C074:  944098E5     LDR r4, [r8, 0x94]
		   0x0111C078:  000054E3     CMPS r0, r4, 0x0
		   0x0111C07C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C084
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0111C080:  D2FCF8EB     BL $-0x1c0cb0
		   // ──── Block 8 if (!=) ────────────────────
		   0x0111C084:  0400A0E1     MOV r0, r4
		   0x0111C088:  0010A0E3     MOV r1, 0x0
		   0x0111C08C:  866F3BEB     BL $+0xedbe20  // CALL → sub_1FF7EAC
		   0x0111C090:  D8409FE5     LDR r4, [pc, 0xd8]
		   0x0111C094:  0050A0E1     MOV r5, r0
		   0x0111C098:  04408FE0     ADD r4, pc, r4
		   0x0111C09C:  0000D4E5     LDRB r0, [r4]
		   0x0111C0A0:  000050E3     CMPS r0, r0, 0x0
		   0x0111C0A4:  0400001A     BNE $+0x18  // if (!=) goto 0x0111C0BC
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0111C0A8:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x0111C0AC:  00009FE7     LDR r0, [pc, r0]
		   0x0111C0B0:  2AFCF8EB     BL $-0x1c0f50
		   0x0111C0B4:  0100A0E3     MOV r0, 0x1
		   0x0111C0B8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 10 if (!=) ────────────────────
		   0x0111C0BC:  000099E5     LDR r0, [sb]
		   0x0111C0C0:  000055E3     CMPS r0, r5, 0x0
		   0x0111C0C4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0111C0C8:  D00090E8     LDM r0, {r4, r6, r7}
		   0x0111C0CC:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C0D4
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0111C0D0:  BEFCF8EB     BL $-0x1c0d00
		   // ──── Block 12 if (!=) ────────────────────
		   0x0111C0D4:  0090A0E3     MOV sb, 0x0
		   0x0111C0D8:  0500A0E1     MOV r0, r5
		   0x0111C0DC:  0410A0E1     MOV r1, r4
		   0x0111C0E0:  0620A0E1     MOV r2, r6
		   0x0111C0E4:  0730A0E1     MOV r3, r7
		   0x0111C0E8:  00908DE5     STR sb, [sp]
		   0x0111C0EC:  1D703BEB     BL $+0xedc07c  // CALL → sub_1FF8168
		   0x0111C0F0:  944098E5     LDR r4, [r8, 0x94]
		   0x0111C0F4:  000054E3     CMPS r0, r4, 0x0
		   0x0111C0F8:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C100
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0111C0FC:  B3FCF8EB     BL $-0x1c0d2c
		   // ──── Block 14 if (!=) ────────────────────
		   0x0111C100:  0400A0E1     MOV r0, r4
		   0x0111C104:  0010A0E3     MOV r1, 0x0
		   0x0111C108:  676F3BEB     BL $+0xedbda4  // CALL → sub_1FF7EAC
		   0x0111C10C:  0040A0E1     MOV r4, r0
		   0x0111C110:  08008DE2     ADD r0, sp, 0x8
		   0x0111C114:  18108DE2     ADD r1, sp, 0x18
		   0x0111C118:  0020A0E3     MOV r2, 0x0
		   0x0111C11C:  1C908DE5     STR sb, [sp, 0x1c]
		   0x0111C120:  18908DE5     STR sb, [sp, 0x18]
		   0x0111C124:  20908DE5     STR sb, [sp, 0x20]
		   0x0111C128:  56703BEB     BL $+0xedc160  // CALL → sub_1FF8288
		   0x0111C12C:  08808DE2     ADD r8, sp, 0x8
		   0x0111C130:  000054E3     CMPS r0, r4, 0x0
		   0x0111C134:  E00198E8     LDM r8, {r5, r6, r7, r8}
		   0x0111C138:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C140
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0111C13C:  A3FCF8EB     BL $-0x1c0d6c
		   // ──── Block 16 if (!=) ────────────────────
		   0x0111C140:  0090A0E3     MOV sb, 0x0
		   0x0111C144:  0400A0E1     MOV r0, r4
		   0x0111C148:  0510A0E1     MOV r1, r5
		   0x0111C14C:  0620A0E1     MOV r2, r6
		   0x0111C150:  0730A0E1     MOV r3, r7
		   0x0111C154:  F080CDE1     STRD r8, sb, [sp]
		   0x0111C158:  44703BEB     BL $+0xedc118  // CALL → sub_1FF8270
		   0x0111C15C:  28D08DE2     ADD sp, sp, 0x28
		   0x0111C160:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x0111C164:  A7FB1003     TSTSEQ pc, r0, 0x29c00
		   0x0111C168:  10B4F502     RSCSEQ fp, r5, 0x10000000
		   0x0111C16C:  F8B3F502     RSCSEQ fp, r5, 0xe0000003
		   0x0111C170:  EBF81003     TSTSEQ pc, r0, 0xeb0000
		   0x0111C174:  84B3F502     RSCSEQ fp, r5, 0x10000002
		*/
	}

	// RVA: 0x111C178 Offset: 0x111C178 VA: 0x111C178
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111C178:  02CDFFEA     B $-0xcbf0
		   0x0111C17C:  00F020E3     INVALID
		*/
	}
}
