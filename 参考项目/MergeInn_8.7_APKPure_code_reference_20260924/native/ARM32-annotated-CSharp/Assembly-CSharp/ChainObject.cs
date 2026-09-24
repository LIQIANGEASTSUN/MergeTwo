// Dll : Assembly-CSharp.dll
// Namespace: 
[CreateAssetMenu]
public class ChainObject : ScriptableObject // TypeDefIndex: 1144
{

	// Fields
	private static int MAX_CONTAINER_RANK; // 0x0
	public string title; // 0xC
	[SerializeField]
	private ItemObject[] items; // 0x10
	[SerializeField]
	private ChainType chainType; // 0x14
	[SerializeField]
	public string chainName; // 0x18
	public InfoPopupDescription infoPopupDescription; // 0x1C
	public string infoPopupDescriptionLocKey; // 0x20
	private readonly Dictionary<string, int> indexByTitleCache; // 0x24
	[CompilerGenerated]
	private ItemObject[] <currentItems>k__BackingField; // 0x28

	// Properties
	public ItemObject[] currentItems { get; set; }
	[Obsolete]
	public ChainType OldChainType { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10CD5F4 Offset: 0x10CD5F4 VA: 0x10CD5F4
	public ItemObject[] get_currentItems() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CD5F4:  280090E5     LDR r0, [r0, 0x28]
		   0x010CD5F8:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CD5FC Offset: 0x10CD5FC VA: 0x10CD5FC
	private void set_currentItems(ItemObject[] value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CD5FC:  281080E5     STR r1, [r0, 0x28]
		   0x010CD600:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10CD604 Offset: 0x10CD604 VA: 0x10CD604
	public ChainType get_OldChainType() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CD604:  140090E5     LDR r0, [r0, 0x14]
		   0x010CD608:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10CD60C Offset: 0x10CD60C VA: 0x10CD60C
	public int GetItemIndex(ItemData itemData) {
		/* Disassembly (ARM32, 120 instructions, 0x1E0 bytes):
		   // CFG: 18 blocks, 16 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD60C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010CD610:  08D04DE2     SUB sp, sp, 0x8
		   0x010CD614:  9C519FE5     LDR r5, [pc, 0x19c]
		   0x010CD618:  0040A0E1     MOV r4, r0
		   0x010CD61C:  0160A0E1     MOV r6, r1
		   0x010CD620:  05508FE0     ADD r5, pc, r5
		   0x010CD624:  0000D5E5     LDRB r0, [r5]
		   0x010CD628:  000050E3     CMPS r0, r0, 0x0
		   0x010CD62C:  1300001A     BNE $+0x54  // if (!=) goto 0x010CD680
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CD630:  84019FE5     LDR r0, [pc, 0x184]
		   0x010CD634:  00009FE7     LDR r0, [pc, r0]
		   0x010CD638:  C836FAEB     BL $-0x1724d8
		   0x010CD63C:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x010CD640:  00009FE7     LDR r0, [pc, r0]
		   0x010CD644:  C536FAEB     BL $-0x1724e4
		   0x010CD648:  74019FE5     LDR r0, [pc, 0x174]
		   0x010CD64C:  00009FE7     LDR r0, [pc, r0]
		   0x010CD650:  C236FAEB     BL $-0x1724f0
		   0x010CD654:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x010CD658:  00009FE7     LDR r0, [pc, r0]
		   0x010CD65C:  BF36FAEB     BL $-0x1724fc
		   0x010CD660:  64019FE5     LDR r0, [pc, 0x164]
		   0x010CD664:  00009FE7     LDR r0, [pc, r0]
		   0x010CD668:  BC36FAEB     BL $-0x172508
		   0x010CD66C:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x010CD670:  00009FE7     LDR r0, [pc, r0]
		   0x010CD674:  B936FAEB     BL $-0x172514
		   0x010CD678:  0100A0E3     MOV r0, 0x1
		   0x010CD67C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CD680:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x010CD684:  0010A0E3     MOV r1, 0x0
		   0x010CD688:  00009FE7     LDR r0, [pc, r0]
		   0x010CD68C:  04108DE5     STR r1, [sp, 0x4]
		   0x010CD690:  000090E5     LDR r0, [r0]
		   0x010CD694:  4A37FAEB     BL $-0x1722d0
		   0x010CD698:  0010A0E3     MOV r1, 0x0
		   0x010CD69C:  0050A0E1     MOV r5, r0
		   0x010CD6A0:  511F7FEB     BL $+0x1fc7d4c  // CALL → Object..ctor
		   0x010CD6A4:  000056E3     CMPS r0, r6, 0x0
		   0x010CD6A8:  0000001A     BNE $+0x8  // if (!=) goto 0x010CD6B0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010CD6AC:  4737FAEB     BL $-0x1722dc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010CD6B0:  0600A0E1     MOV r0, r6
		   0x010CD6B4:  0010A0E3     MOV r1, 0x0
		   0x010CD6B8:  93F000EB     BL $+0x3c254  // CALL → ItemData.get_activeData
		   0x010CD6BC:  0070A0E1     MOV r7, r0
		   0x010CD6C0:  000055E3     CMPS r0, r5, 0x0
		   0x010CD6C4:  0000001A     BNE $+0x8  // if (!=) goto 0x010CD6CC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010CD6C8:  4037FAEB     BL $-0x1722f8
		   // ──── Block 6 if (!=) ────────────────────
		   0x010CD6CC:  246094E5     LDR r6, [r4, 0x24]
		   0x010CD6D0:  000057E3     CMPS r0, r7, 0x0
		   0x010CD6D4:  087085E5     STR r7, [r5, 0x8]
		   0x010CD6D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010CD6E0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010CD6DC:  3B37FAEB     BL $-0x17230c
		   // ──── Block 8 if (!=) ────────────────────
		   0x010CD6E0:  787097E5     LDR r7, [r7, 0x78]
		   0x010CD6E4:  000056E3     CMPS r0, r6, 0x0
		   0x010CD6E8:  0000001A     BNE $+0x8  // if (!=) goto 0x010CD6F0
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010CD6EC:  3737FAEB     BL $-0x17231c
		   // ──── Block 10 if (!=) ────────────────────
		   0x010CD6F0:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x010CD6F4:  04208DE2     ADD r2, sp, 0x4
		   0x010CD6F8:  0710A0E1     MOV r1, r7
		   0x010CD6FC:  00009FE7     LDR r0, [pc, r0]
		   0x010CD700:  003090E5     LDR r3, [r0]
		   0x010CD704:  0600A0E1     MOV r0, r6
		   0x010CD708:  30B554EB     BL $+0x152d4c8  // CALL → Dictionary<object, int>.TryGetValue
		   0x010CD70C:  000050E3     CMPS r0, r0, 0x0
		   0x010CD710:  2500001A     BNE $+0x9c  // if (!=) goto 0x010CD7AC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010CD714:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x010CD718:  00009FE7     LDR r0, [pc, r0]
		   0x010CD71C:  286094E5     LDR r6, [r4, 0x28]
		   0x010CD720:  000090E5     LDR r0, [r0]
		   0x010CD724:  2637FAEB     BL $-0x172360
		   0x010CD728:  0070A0E1     MOV r7, r0
		   0x010CD72C:  AC009FE5     LDR r0, [pc, 0xac]
		   0x010CD730:  0510A0E1     MOV r1, r5
		   0x010CD734:  0030A0E3     MOV r3, 0x0
		   0x010CD738:  00009FE7     LDR r0, [pc, r0]
		   0x010CD73C:  002090E5     LDR r2, [r0]
		   0x010CD740:  0700A0E1     MOV r0, r7
		   0x010CD744:  CF0134EB     BL $+0xd00744  // CALL → Predicate<object>..ctor
		   0x010CD748:  94009FE5     LDR r0, [pc, 0x94]
		   0x010CD74C:  0710A0E1     MOV r1, r7
		   0x010CD750:  00009FE7     LDR r0, [pc, r0]
		   0x010CD754:  002090E5     LDR r2, [r0]
		   0x010CD758:  0600A0E1     MOV r0, r6
		   0x010CD75C:  EB7729EB     BL $+0xa5dfb4  // CALL → Array.FindIndex<object>
		   0x010CD760:  085095E5     LDR r5, [r5, 0x8]
		   0x010CD764:  0060A0E1     MOV r6, r0
		   0x010CD768:  244094E5     LDR r4, [r4, 0x24]
		   0x010CD76C:  000055E3     CMPS r0, r5, 0x0
		   0x010CD770:  04008DE5     STR r0, [sp, 0x4]
		   0x010CD774:  0100001A     BNE $+0xc  // if (!=) goto 0x010CD780
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010CD778:  1437FAEB     BL $-0x1723a8
		   0x010CD77C:  04609DE5     LDR r6, [sp, 0x4]
		   // ──── Block 13 if (!=) ────────────────────
		   0x010CD780:  785095E5     LDR r5, [r5, 0x78]
		   0x010CD784:  000054E3     CMPS r0, r4, 0x0
		   0x010CD788:  0000001A     BNE $+0x8  // if (!=) goto 0x010CD790
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010CD78C:  0F37FAEB     BL $-0x1723bc
		   // ──── Block 15 if (!=) ────────────────────
		   0x010CD790:  50009FE5     LDR r0, [pc, 0x50]
		   0x010CD794:  0510A0E1     MOV r1, r5
		   0x010CD798:  0620A0E1     MOV r2, r6
		   0x010CD79C:  00009FE7     LDR r0, [pc, r0]
		   0x010CD7A0:  003090E5     LDR r3, [r0]
		   0x010CD7A4:  0400A0E1     MOV r0, r4
		   0x010CD7A8:  3CAD54EB     BL $+0x152b4f8  // CALL → Dictionary<object, int>.Add
		   // ──── Block 16 if (!=) ────────────────────
		   0x010CD7AC:  04009DE5     LDR r0, [sp, 0x4]
		   0x010CD7B0:  08D08DE2     ADD sp, sp, 0x8
		   0x010CD7B4:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010CD7B8:  F3E51503     TSTSEQ lr, r5, 0x3cc00000
		   0x010CD7BC:  68B7FA02     RSCSEQ fp, r10, 0x1a00000
		   0x010CD7C0:  B8ABFA02     RSCSEQ r10, r10, 0x2e000
		   0x010CD7C4:  C0ABFA02     RSCSEQ r10, r10, 0x30000
		   0x010CD7C8:  48B7FA02     RSCSEQ fp, r10, 0x1200000
		   0x010CD7CC:  40B7FA02     RSCSEQ fp, r10, 0x1000000
		   0x010CD7D0:  38B7FA02     RSCSEQ fp, r10, 0xe00000
		   0x010CD7D4:  20B7FA02     RSCSEQ fp, r10, 0x800000
		   0x010CD7D8:  10ABFA02     RSCSEQ r10, r10, 0x4000
		   0x010CD7DC:  88B6FA02     RSCSEQ fp, r10, 0x8800000
		   0x010CD7E0:  6CB6FA02     RSCSEQ fp, r10, 0x6c00000
		   0x010CD7E4:  4CB6FA02     RSCSEQ fp, r10, 0x4c00000
		   0x010CD7E8:  5CAAFA02     RSCSEQ r10, r10, 0x5c000
		*/
	}

	// RVA: 0x10CD7F4 Offset: 0x10CD7F4 VA: 0x10CD7F4
	public bool CanMerge(int order) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD7F4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010CD7F8:  285090E5     LDR r5, [r0, 0x28]
		   0x010CD7FC:  0140A0E1     MOV r4, r1
		   0x010CD800:  000055E3     CMPS r0, r5, 0x0
		   0x010CD804:  0000001A     BNE $+0x8  // if (!=) goto 0x010CD80C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CD808:  F036FAEB     BL $-0x172438
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CD80C:  0C0095E5     LDR r0, [r5, 0xc]
		   0x010CD810:  011040E2     SUB r1, r0, 0x1
		   0x010CD814:  0000A0E3     MOV r0, 0x0
		   0x010CD818:  040051E1     CMPS r0, r1, r4
		   0x010CD81C:  010000C3     MOVGT r0, 0x1
		   0x010CD820:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10CD824 Offset: 0x10CD824 VA: 0x10CD824
	public ItemObject GetItemAt(int index) {
		/* Disassembly (ARM32, 22 instructions, 0x58 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD824:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010CD828:  286090E5     LDR r6, [r0, 0x28]
		   0x010CD82C:  0140A0E1     MOV r4, r1
		   0x010CD830:  0050A0E1     MOV r5, r0
		   0x010CD834:  000056E3     CMPS r0, r6, 0x0
		   0x010CD838:  0000001A     BNE $+0x8  // if (!=) goto 0x010CD840
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CD83C:  E336FAEB     BL $-0x17246c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CD840:  0C1096E5     LDR r1, [r6, 0xc]
		   0x010CD844:  0000A0E3     MOV r0, 0x0
		   0x010CD848:  040051E1     CMPS r0, r1, r4
		   0x010CD84C:  090000DA     BLE $+0x2c  // if (<=) goto 0x010CD878
		   // 
		   // ──── Block 3 else (>) ────────────────────
		   0x010CD850:  285095E5     LDR r5, [r5, 0x28]
		   0x010CD854:  000055E3     CMPS r0, r5, 0x0
		   0x010CD858:  0000001A     BNE $+0x8  // if (!=) goto 0x010CD860
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010CD85C:  DB36FAEB     BL $-0x17248c
		   // ──── Block 5 if (!=) ────────────────────
		   0x010CD860:  0C0095E5     LDR r0, [r5, 0xc]
		   0x010CD864:  040050E1     CMPS r0, r0, r4
		   0x010CD868:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010CD870
		   // 
		   // ──── Block 6 else (<= (unsigned)) ────────────────────
		   0x010CD86C:  D836FAEB     BL $-0x172498
		   // ──── Block 7 if (> (unsigned)) ────────────────────
		   0x010CD870:  040185E0     ADD r0, r5, r4, lsl 2
		   0x010CD874:  100090E5     LDR r0, [r0, 0x10]
		   // ──── Block 8 if (<=) ────────────────────
		   0x010CD878:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x10CD87C Offset: 0x10CD87C VA: 0x10CD87C
	public int GetContainerRank(ItemData itemData) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CD87C:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		*/
	}

	// RVA: 0x10CDBF0 Offset: 0x10CDBF0 VA: 0x10CDBF0
	public bool CheckIsLowestTierContainer(ItemData itemData) {
		/* Disassembly (ARM32, 135 instructions, 0x21C bytes):
		   // CFG: 19 blocks, 18 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CDBF0:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010CDBF4:  D0419FE5     LDR r4, [pc, 0x1d0]
		   0x010CDBF8:  0050A0E1     MOV r5, r0
		   0x010CDBFC:  0160A0E1     MOV r6, r1
		   0x010CDC00:  04408FE0     ADD r4, pc, r4
		   0x010CDC04:  0000D4E5     LDRB r0, [r4]
		   0x010CDC08:  000050E3     CMPS r0, r0, 0x0
		   0x010CDC0C:  1600001A     BNE $+0x60  // if (!=) goto 0x010CDC6C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CDC10:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x010CDC14:  00009FE7     LDR r0, [pc, r0]
		   0x010CDC18:  5035FAEB     BL $-0x172ab8
		   0x010CDC1C:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x010CDC20:  00009FE7     LDR r0, [pc, r0]
		   0x010CDC24:  4D35FAEB     BL $-0x172ac4
		   0x010CDC28:  A8019FE5     LDR r0, [pc, 0x1a8]
		   0x010CDC2C:  00009FE7     LDR r0, [pc, r0]
		   0x010CDC30:  4A35FAEB     BL $-0x172ad0
		   0x010CDC34:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x010CDC38:  00009FE7     LDR r0, [pc, r0]
		   0x010CDC3C:  4735FAEB     BL $-0x172adc
		   0x010CDC40:  98019FE5     LDR r0, [pc, 0x198]
		   0x010CDC44:  00009FE7     LDR r0, [pc, r0]
		   0x010CDC48:  4435FAEB     BL $-0x172ae8
		   0x010CDC4C:  90019FE5     LDR r0, [pc, 0x190]
		   0x010CDC50:  00009FE7     LDR r0, [pc, r0]
		   0x010CDC54:  4135FAEB     BL $-0x172af4
		   0x010CDC58:  88019FE5     LDR r0, [pc, 0x188]
		   0x010CDC5C:  00009FE7     LDR r0, [pc, r0]
		   0x010CDC60:  3E35FAEB     BL $-0x172b00
		   0x010CDC64:  0100A0E3     MOV r0, 0x1
		   0x010CDC68:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CDC6C:  78019FE5     LDR r0, [pc, 0x178]
		   0x010CDC70:  00009FE7     LDR r0, [pc, r0]
		   0x010CDC74:  000090E5     LDR r0, [r0]
		   0x010CDC78:  D135FAEB     BL $-0x1728b4
		   0x010CDC7C:  0010A0E3     MOV r1, 0x0
		   0x010CDC80:  0040A0E1     MOV r4, r0
		   0x010CDC84:  D81D7FEB     BL $+0x1fc7768  // CALL → Object..ctor
		   0x010CDC88:  000054E3     CMPS r0, r4, 0x0
		   0x010CDC8C:  0000001A     BNE $+0x8  // if (!=) goto 0x010CDC94
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010CDC90:  CE35FAEB     BL $-0x1728c0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010CDC94:  000056E3     CMPS r0, r6, 0x0
		   0x010CDC98:  086084E5     STR r6, [r4, 0x8]
		   0x010CDC9C:  0000001A     BNE $+0x8  // if (!=) goto 0x010CDCA4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010CDCA0:  CA35FAEB     BL $-0x1728d0
		   // ──── Block 6 if (!=) ────────────────────
		   0x010CDCA4:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x010CDCA8:  010050E3     CMPS r0, r0, 0x1
		   0x010CDCAC:  0700000A     BEQ $+0x24  // if (==) goto 0x010CDCD0
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010CDCB0:  086094E5     LDR r6, [r4, 0x8]
		   0x010CDCB4:  000056E3     CMPS r0, r6, 0x0
		   0x010CDCB8:  0000001A     BNE $+0x8  // if (!=) goto 0x010CDCC0
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010CDCBC:  C335FAEB     BL $-0x1728ec
		   // ──── Block 9 if (!=) ────────────────────
		   0x010CDCC0:  4C1096E5     LDR r1, [r6, 0x4c]
		   0x010CDCC4:  0000A0E3     MOV r0, 0x0
		   0x010CDCC8:  080051E3     CMPS r0, r1, 0x8
		   0x010CDCCC:  3D00001A     BNE $+0xfc  // if (!=) goto 0x010CDDC8
		   // 
		   // ──── Block 10 (from 2 paths) ──────────────────
		   0x010CDCD0:  18819FE5     LDR r8, [pc, 0x118]
		   0x010CDCD4:  08809FE7     LDR r8, [pc, r8]
		   0x010CDCD8:  285095E5     LDR r5, [r5, 0x28]
		   0x010CDCDC:  000098E5     LDR r0, [r8]
		   0x010CDCE0:  741090E5     LDR r1, [r0, 0x74]
		   0x010CDCE4:  000051E3     CMPS r0, r1, 0x0
		   0x010CDCE8:  0100001A     BNE $+0xc  // if (!=) goto 0x010CDCF4
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010CDCEC:  6835FAEB     BL $-0x172a58
		   0x010CDCF0:  000098E5     LDR r0, [r8]
		   // ──── Block 12 if (!=) ────────────────────
		   0x010CDCF4:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010CDCF8:  086091E5     LDR r6, [r1, 0x8]
		   0x010CDCFC:  000056E3     CMPS r0, r6, 0x0
		   0x010CDD00:  1500001A     BNE $+0x5c  // if (!=) goto 0x010CDD5C
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010CDD04:  742090E5     LDR r2, [r0, 0x74]
		   0x010CDD08:  000052E3     CMPS r0, r2, 0x0
		   0x010CDD0C:  0200001A     BNE $+0x10  // if (!=) goto 0x010CDD1C
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010CDD10:  5F35FAEB     BL $-0x172a7c
		   0x010CDD14:  000098E5     LDR r0, [r8]
		   0x010CDD18:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 15 if (!=) ────────────────────
		   0x010CDD1C:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010CDD20:  00009FE7     LDR r0, [pc, r0]
		   0x010CDD24:  007091E5     LDR r7, [r1]
		   0x010CDD28:  000090E5     LDR r0, [r0]
		   0x010CDD2C:  A435FAEB     BL $-0x172968
		   0x010CDD30:  0060A0E1     MOV r6, r0
		   0x010CDD34:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x010CDD38:  0710A0E1     MOV r1, r7
		   0x010CDD3C:  0030A0E3     MOV r3, 0x0
		   0x010CDD40:  00009FE7     LDR r0, [pc, r0]
		   0x010CDD44:  002090E5     LDR r2, [r0]
		   0x010CDD48:  0600A0E1     MOV r0, r6
		   0x010CDD4C:  4D0034EB     BL $+0xd0013c  // CALL → Predicate<object>..ctor
		   0x010CDD50:  000098E5     LDR r0, [r8]
		   0x010CDD54:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010CDD58:  086080E5     STR r6, [r0, 0x8]
		   // ──── Block 16 if (!=) ────────────────────
		   0x010CDD5C:  98009FE5     LDR r0, [pc, 0x98]
		   0x010CDD60:  0610A0E1     MOV r1, r6
		   0x010CDD64:  00009FE7     LDR r0, [pc, r0]
		   0x010CDD68:  002090E5     LDR r2, [r0]
		   0x010CDD6C:  0500A0E1     MOV r0, r5
		   0x010CDD70:  C97429EB     BL $+0xa5d32c  // CALL → Array.FindAll<object>
		   0x010CDD74:  0050A0E1     MOV r5, r0
		   0x010CDD78:  80009FE5     LDR r0, [pc, 0x80]
		   0x010CDD7C:  00009FE7     LDR r0, [pc, r0]
		   0x010CDD80:  000090E5     LDR r0, [r0]
		   0x010CDD84:  8E35FAEB     BL $-0x1729c0
		   0x010CDD88:  0060A0E1     MOV r6, r0
		   0x010CDD8C:  70009FE5     LDR r0, [pc, 0x70]
		   0x010CDD90:  0410A0E1     MOV r1, r4
		   0x010CDD94:  0030A0E3     MOV r3, 0x0
		   0x010CDD98:  00009FE7     LDR r0, [pc, r0]
		   0x010CDD9C:  002090E5     LDR r2, [r0]
		   0x010CDDA0:  0600A0E1     MOV r0, r6
		   0x010CDDA4:  370034EB     BL $+0xd000e4  // CALL → Predicate<object>..ctor
		   0x010CDDA8:  58009FE5     LDR r0, [pc, 0x58]
		   0x010CDDAC:  0610A0E1     MOV r1, r6
		   0x010CDDB0:  00009FE7     LDR r0, [pc, r0]
		   0x010CDDB4:  002090E5     LDR r2, [r0]
		   0x010CDDB8:  0500A0E1     MOV r0, r5
		   0x010CDDBC:  537629EB     BL $+0xa5d954  // CALL → Array.FindIndex<object>
		   0x010CDDC0:  100F6FE1     CLZ r0, r0
		   0x010CDDC4:  A002A0E1     MOV r0, r0, r0, lsr 5
		   // ──── Block 17 if (!=) ────────────────────
		   0x010CDDC8:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x010CDDCC:  15E01503     TSTSEQ lr, r5, 0x15
		   0x010CDDD0:  98B1FA02     RSCSEQ fp, r10, 0x26
		   0x010CDDD4:  7CB1FA02     RSCSEQ fp, r10, 0x1f
		   0x010CDDD8:  74B1FA02     RSCSEQ fp, r10, 0x1d
		   0x010CDDDC:  8CB1FA02     RSCSEQ fp, r10, 0x23
		   0x010CDDE0:  84B1FA02     RSCSEQ fp, r10, 0x21
		   0x010CDDE4:  7CB1FA02     RSCSEQ fp, r10, 0x1f
		   0x010CDDE8:  64B1FA02     RSCSEQ fp, r10, 0x19
		   0x010CDDEC:  5CB1FA02     RSCSEQ fp, r10, 0x17
		   0x010CDDF0:  ECB0FA02     RSCSEQ fp, r10, 0xec
		   0x010CDDF4:  80B0FA02     RSCSEQ fp, r10, 0x80
		   0x010CDDF8:  84B0FA02     RSCSEQ fp, r10, 0x84
		   0x010CDDFC:  48B0FA02     RSCSEQ fp, r10, 0x48
		   0x010CDE00:  24B0FA02     RSCSEQ fp, r10, 0x24
		   0x010CDE04:  30B0FA02     RSCSEQ fp, r10, 0x30
		   0x010CDE08:  ECAFFA02     RSCSEQ r10, r10, 0x3b0
		*/
	}

	// RVA: 0x10CDE14 Offset: 0x10CDE14 VA: 0x10CDE14 Slot: 3
	public override string ToString() {
		/* Disassembly (ARM32, 28 instructions, 0x70 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CDE14:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010CDE18:  10D04DE2     SUB sp, sp, 0x10
		   0x010CDE1C:  54509FE5     LDR r5, [pc, 0x54]
		   0x010CDE20:  0040A0E1     MOV r4, r0
		   0x010CDE24:  05508FE0     ADD r5, pc, r5
		   0x010CDE28:  0000D5E5     LDRB r0, [r5]
		   0x010CDE2C:  000050E3     CMPS r0, r0, 0x0
		   0x010CDE30:  0400001A     BNE $+0x18  // if (!=) goto 0x010CDE48
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CDE34:  40009FE5     LDR r0, [pc, 0x40]
		   0x010CDE38:  00009FE7     LDR r0, [pc, r0]
		   0x010CDE3C:  C734FAEB     BL $-0x172cdc
		   0x010CDE40:  0100A0E3     MOV r0, 0x1
		   0x010CDE44:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CDE48:  30009FE5     LDR r0, [pc, 0x30]
		   0x010CDE4C:  0020E0E3     MVN r2, r0, 0x0
		   0x010CDE50:  00009FE7     LDR r0, [pc, r0]
		   0x010CDE54:  141094E5     LDR r1, [r4, 0x14]
		   0x010CDE58:  0C108DE5     STR r1, [sp, 0xc]
		   0x010CDE5C:  0010A0E3     MOV r1, 0x0
		   0x010CDE60:  000090E5     LDR r0, [r0]
		   0x010CDE64:  05008DE9     STMIA sp, {r0, r2}
		   0x010CDE68:  04008DE2     ADD r0, sp, 0x4
		   0x010CDE6C:  A1E67EEB     BL $+0x1fb9a8c  // CALL → Enum.ToString
		   0x010CDE70:  10D08DE2     ADD sp, sp, 0x10
		   0x010CDE74:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010CDE78:  F2DD1503     TSTSEQ sp, r5, 0x3c80
		   0x010CDE7C:  58AEFA02     RSCSEQ r10, r10, 0x580
		   0x010CDE80:  40AEFA02     RSCSEQ r10, r10, 0x400
		*/
	}

	// RVA: 0x10CDE84 Offset: 0x10CDE84 VA: 0x10CDE84
	public void Import(ItemObject[] newItems) {
		/* Disassembly (ARM32, 30 instructions, 0x78 bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CDE84:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010CDE88:  0140A0E1     MOV r4, r1
		   0x010CDE8C:  0050A0E1     MOV r5, r0
		   0x010CDE90:  281080E5     STR r1, [r0, 0x28]
		   0x010CDE94:  108081E2     ADD r8, r1, 0x10
		   0x010CDE98:  0070A0E3     MOV r7, 0x0
		   0x010CDE9C:  000054E3     CMPS r0, r4, 0x0
		   0x010CDEA0:  0000001A     BNE $+0x8  // if (!=) goto 0x010CDEA8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CDEA4:  4935FAEB     BL $-0x172ad4
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CDEA8:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010CDEAC:  000057E1     CMPS r0, r7, r0
		   0x010CDEB0:  100000AA     BGE $+0x48  // if (>=) goto 0x010CDEF8
		   // 
		   // ──── Block 3 else (<) ────────────────────
		   0x010CDEB4:  070050E1     CMPS r0, r0, r7
		   0x010CDEB8:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010CDEC0
		   // 
		   // ──── Block 4 else (<= (unsigned)) ────────────────────
		   0x010CDEBC:  4435FAEB     BL $-0x172ae8
		   // ──── Block 5 if (> (unsigned)) ────────────────────
		   0x010CDEC0:  076198E7     LDR r6, [r8, r7, lsl 2]
		   0x010CDEC4:  000056E3     CMPS r0, r6, 0x0
		   0x010CDEC8:  0000001A     BNE $+0x8  // if (!=) goto 0x010CDED0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010CDECC:  3F35FAEB     BL $-0x172afc
		   // ──── Block 7 if (!=) ────────────────────
		   0x010CDED0:  186096E5     LDR r6, [r6, 0x18]
		   0x010CDED4:  000056E3     CMPS r0, r6, 0x0
		   0x010CDED8:  0000001A     BNE $+0x8  // if (!=) goto 0x010CDEE0
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010CDEDC:  3B35FAEB     BL $-0x172b0c
		   // ──── Block 9 if (!=) ────────────────────
		   0x010CDEE0:  0600A0E1     MOV r0, r6
		   0x010CDEE4:  0510A0E1     MOV r1, r5
		   0x010CDEE8:  0020A0E3     MOV r2, 0x0
		   0x010CDEEC:  421C01EB     BL $+0x47110  // CALL → ItemData.SetChain
		   0x010CDEF0:  017087E2     ADD r7, r7, 0x1
		   0x010CDEF4:  E8FFFFEA     B $-0x58
		   // ──── Block 10 if (>=) ────────────────────
		   0x010CDEF8:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		*/
	}

	// RVA: 0x10CDEFC Offset: 0x10CDEFC VA: 0x10CDEFC
	public void Reset() {
		/* Disassembly (ARM32, 34 instructions, 0x88 bytes):
		   // CFG: 11 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CDEFC:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010CDF00:  106090E5     LDR r6, [r0, 0x10]
		   0x010CDF04:  0040A0E1     MOV r4, r0
		   0x010CDF08:  000056E3     CMPS r0, r6, 0x0
		   0x010CDF0C:  1900000A     BEQ $+0x6c  // if (==) goto 0x010CDF78
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x010CDF10:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010CDF14:  286084E5     STR r6, [r4, 0x28]
		   0x010CDF18:  010050E3     CMPS r0, r0, 0x1
		   0x010CDF1C:  140000BA     BLT $+0x58  // if (<) goto 0x010CDF74
		   // 
		   // ──── Block 2 else (>=) ────────────────────
		   0x010CDF20:  108086E2     ADD r8, r6, 0x10
		   0x010CDF24:  0070A0E3     MOV r7, 0x0
		   0x010CDF28:  070050E1     CMPS r0, r0, r7
		   0x010CDF2C:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010CDF34
		   // 
		   // ──── Block 3 else (<= (unsigned)) ────────────────────
		   0x010CDF30:  2735FAEB     BL $-0x172b5c
		   // ──── Block 4 if (> (unsigned)) ────────────────────
		   0x010CDF34:  075198E7     LDR r5, [r8, r7, lsl 2]
		   0x010CDF38:  000055E3     CMPS r0, r5, 0x0
		   0x010CDF3C:  0000001A     BNE $+0x8  // if (!=) goto 0x010CDF44
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010CDF40:  2235FAEB     BL $-0x172b70
		   // ──── Block 6 if (!=) ────────────────────
		   0x010CDF44:  185095E5     LDR r5, [r5, 0x18]
		   0x010CDF48:  000055E3     CMPS r0, r5, 0x0
		   0x010CDF4C:  0000001A     BNE $+0x8  // if (!=) goto 0x010CDF54
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010CDF50:  1E35FAEB     BL $-0x172b80
		   // ──── Block 8 if (!=) ────────────────────
		   0x010CDF54:  0500A0E1     MOV r0, r5
		   0x010CDF58:  0410A0E1     MOV r1, r4
		   0x010CDF5C:  0020A0E3     MOV r2, 0x0
		   0x010CDF60:  251C01EB     BL $+0x4709c  // CALL → ItemData.SetChain
		   0x010CDF64:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010CDF68:  017087E2     ADD r7, r7, 0x1
		   0x010CDF6C:  000057E1     CMPS r0, r7, r0
		   0x010CDF70:  ECFFFFBA     BLT $-0x48
		   // ──── Block 9 (from 2 paths) ──────────────────
		   0x010CDF74:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   // ──── Block 10 if (==) ────────────────────
		   0x010CDF78:  0000A0E3     MOV r0, 0x0
		   0x010CDF7C:  280084E5     STR r0, [r4, 0x28]  // vtable: Object.Equals
		   0x010CDF80:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		*/
	}

	// RVA: 0x10CDF84 Offset: 0x10CDF84 VA: 0x10CDF84
	public void OnEnable() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CDF84:  101090E5     LDR r1, [r0, 0x10]
		   0x010CDF88:  281080E5     STR r1, [r0, 0x28]
		   0x010CDF8C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10CDF90 Offset: 0x10CDF90 VA: 0x10CDF90
	public void .ctor() {
		/* Disassembly (ARM32, 35 instructions, 0x8C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CDF90:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010CDF94:  6C509FE5     LDR r5, [pc, 0x6c]
		   0x010CDF98:  0040A0E1     MOV r4, r0
		   0x010CDF9C:  05508FE0     ADD r5, pc, r5
		   0x010CDFA0:  0000D5E5     LDRB r0, [r5]
		   0x010CDFA4:  000050E3     CMPS r0, r0, 0x0
		   0x010CDFA8:  0700001A     BNE $+0x24  // if (!=) goto 0x010CDFCC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CDFAC:  58009FE5     LDR r0, [pc, 0x58]
		   0x010CDFB0:  00009FE7     LDR r0, [pc, r0]
		   0x010CDFB4:  6934FAEB     BL $-0x172e54
		   0x010CDFB8:  50009FE5     LDR r0, [pc, 0x50]
		   0x010CDFBC:  00009FE7     LDR r0, [pc, r0]
		   0x010CDFC0:  6634FAEB     BL $-0x172e60
		   0x010CDFC4:  0100A0E3     MOV r0, 0x1
		   0x010CDFC8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CDFCC:  40009FE5     LDR r0, [pc, 0x40]
		   0x010CDFD0:  00009FE7     LDR r0, [pc, r0]
		   0x010CDFD4:  000090E5     LDR r0, [r0]
		   0x010CDFD8:  F934FAEB     BL $-0x172c14
		   0x010CDFDC:  0050A0E1     MOV r5, r0
		   0x010CDFE0:  30009FE5     LDR r0, [pc, 0x30]
		   0x010CDFE4:  00009FE7     LDR r0, [pc, r0]
		   0x010CDFE8:  001090E5     LDR r1, [r0]
		   0x010CDFEC:  0500A0E1     MOV r0, r5
		   0x010CDFF0:  BBA854EB     BL $+0x152a2f4  // CALL → Dictionary<object, int>..ctor
		   0x010CDFF4:  245084E5     STR r5, [r4, 0x24]
		   0x010CDFF8:  0400A0E1     MOV r0, r4
		   0x010CDFFC:  0010A0E3     MOV r1, 0x0
		   0x010CE000:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010CE004:  C0A73CEA     B $+0xf29f08
		   0x010CE008:  7BDC1503     TSTSEQ sp, r5, 0x7b00
		   0x010CE00C:  8CA1FA02     RSCSEQ r10, r10, 0x23
		   0x010CE010:  90A1FA02     RSCSEQ r10, r10, 0x24
		   0x010CE014:  7CA1FA02     RSCSEQ r10, r10, 0x1f
		   0x010CE018:  58A1FA02     RSCSEQ r10, r10, 0x16
		*/
	}

	// RVA: 0x10CE01C Offset: 0x10CE01C VA: 0x10CE01C
	private static void .cctor() {
		/* Disassembly (ARM32, 21 instructions, 0x54 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CE01C:  10402DE9     PUSH {r4, lr}
		   0x010CE020:  3C409FE5     LDR r4, [pc, 0x3c]
		   0x010CE024:  04408FE0     ADD r4, pc, r4
		   0x010CE028:  0000D4E5     LDRB r0, [r4]
		   0x010CE02C:  000050E3     CMPS r0, r0, 0x0
		   0x010CE030:  0400001A     BNE $+0x18  // if (!=) goto 0x010CE048
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CE034:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x010CE038:  00009FE7     LDR r0, [pc, r0]
		   0x010CE03C:  4734FAEB     BL $-0x172edc
		   0x010CE040:  0100A0E3     MOV r0, 0x1
		   0x010CE044:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CE048:  1C009FE5     LDR r0, [pc, 0x1c]
		   0x010CE04C:  0410A0E3     MOV r1, 0x4
		   0x010CE050:  00009FE7     LDR r0, [pc, r0]
		   0x010CE054:  000090E5     LDR r0, [r0]
		   0x010CE058:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010CE05C:  001080E5     STR r1, [r0]
		   0x010CE060:  1080BDE8     POP {r4, pc}
		   0x010CE064:  F4DB1503     TSTSEQ sp, r5, 0x3d000
		   0x010CE068:  78ADFA02     RSCSEQ r10, r10, 0x1e00
		   0x010CE06C:  60ADFA02     RSCSEQ r10, r10, 0x1800
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class <>c // TypeDefIndex: 1140
{

	// Fields
	public static readonly ChainObject.<>c <>9; // 0x0
	public static Predicate<ItemObject> <>9__17_0; // 0x4
	public static Predicate<ItemObject> <>9__18_0; // 0x8

	// Methods

	// RVA: 0x10CE070 Offset: 0x10CE070 VA: 0x10CE070
	private static void .cctor() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CE070:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010CE074:  4C409FE5     LDR r4, [pc, 0x4c]
		   0x010CE078:  04408FE0     ADD r4, pc, r4
		   0x010CE07C:  0000D4E5     LDRB r0, [r4]
		   0x010CE080:  000050E3     CMPS r0, r0, 0x0
		   0x010CE084:  0400001A     BNE $+0x18  // if (!=) goto 0x010CE09C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CE088:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010CE08C:  00009FE7     LDR r0, [pc, r0]
		   0x010CE090:  3234FAEB     BL $-0x172f30
		   0x010CE094:  0100A0E3     MOV r0, 0x1
		   0x010CE098:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CE09C:  2C509FE5     LDR r5, [pc, 0x2c]
		   0x010CE0A0:  05509FE7     LDR r5, [pc, r5]
		   0x010CE0A4:  000095E5     LDR r0, [r5]
		   0x010CE0A8:  C534FAEB     BL $-0x172ce4
		   0x010CE0AC:  0010A0E3     MOV r1, 0x0
		   0x010CE0B0:  0040A0E1     MOV r4, r0
		   0x010CE0B4:  CC1C7FEB     BL $+0x1fc7338  // CALL → Object..ctor
		   0x010CE0B8:  000095E5     LDR r0, [r5]
		   0x010CE0BC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010CE0C0:  004080E5     STR r4, [r0]
		   0x010CE0C4:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010CE0C8:  A1DB1503     TSTSEQ sp, r5, 0x28400
		   0x010CE0CC:  34ADFA02     RSCSEQ r10, r10, 0xd00
		   0x010CE0D0:  20ADFA02     RSCSEQ r10, r10, 0x800
		*/
	}

	// RVA: 0x10CE0D4 Offset: 0x10CE0D4 VA: 0x10CE0D4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CE0D4:  0010A0E3     MOV r1, 0x0
		   0x010CE0D8:  C31C7FEA     B $+0x1fc7314  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10CE0DC Offset: 0x10CE0DC VA: 0x10CE0DC
	internal bool <GetContainerRank>b__17_0(ItemObject item) {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CE0DC:  10402DE9     PUSH {r4, lr}
		   0x010CE0E0:  0140A0E1     MOV r4, r1
		   0x010CE0E4:  000051E3     CMPS r0, r1, 0x0
		   0x010CE0E8:  0000001A     BNE $+0x8  // if (!=) goto 0x010CE0F0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CE0EC:  B734FAEB     BL $-0x172d1c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CE0F0:  184094E5     LDR r4, [r4, 0x18]
		   0x010CE0F4:  000054E3     CMPS r0, r4, 0x0
		   0x010CE0F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010CE100
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010CE0FC:  B334FAEB     BL $-0x172d2c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010CE100:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010CE104:  011040E2     SUB r1, r0, 0x1
		   0x010CE108:  080040E2     SUB r0, r0, 0x8
		   0x010CE10C:  100F6FE1     CLZ r0, r0
		   0x010CE110:  111F6FE1     CLZ r1, r1
		   0x010CE114:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x010CE118:  A112A0E1     MOV r1, r0, r1, lsr 5
		   0x010CE11C:  000081E1     ORR r0, r1, r0
		   0x010CE120:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x10CE124 Offset: 0x10CE124 VA: 0x10CE124
	internal bool <CheckIsLowestTierContainer>b__18_0(ItemObject item) {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CE124:  10402DE9     PUSH {r4, lr}
		   0x010CE128:  0140A0E1     MOV r4, r1
		   0x010CE12C:  000051E3     CMPS r0, r1, 0x0
		   0x010CE130:  0000001A     BNE $+0x8  // if (!=) goto 0x010CE138
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CE134:  A534FAEB     BL $-0x172d64
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CE138:  184094E5     LDR r4, [r4, 0x18]
		   0x010CE13C:  000054E3     CMPS r0, r4, 0x0
		   0x010CE140:  0000001A     BNE $+0x8  // if (!=) goto 0x010CE148
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010CE144:  A134FAEB     BL $-0x172d74
		   // ──── Block 4 if (!=) ────────────────────
		   0x010CE148:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010CE14C:  011040E2     SUB r1, r0, 0x1
		   0x010CE150:  080040E2     SUB r0, r0, 0x8
		   0x010CE154:  100F6FE1     CLZ r0, r0
		   0x010CE158:  111F6FE1     CLZ r1, r1
		   0x010CE15C:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x010CE160:  A112A0E1     MOV r1, r0, r1, lsr 5
		   0x010CE164:  000081E1     ORR r0, r1, r0
		   0x010CE168:  1080BDE8     POP {r4, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass14_0 // TypeDefIndex: 1141
{

	// Fields
	public ItemData targetItemData; // 0x8

	// Methods

	// RVA: 0x10CD7EC Offset: 0x10CD7EC VA: 0x10CD7EC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CD7EC:  0010A0E3     MOV r1, 0x0
		   0x010CD7F0:  FD1E7FEA     B $+0x1fc7bfc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10CE16C Offset: 0x10CE16C VA: 0x10CE16C
	internal bool <GetItemIndex>b__0(ItemObject item) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CE16C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010CE170:  0140A0E1     MOV r4, r1
		   0x010CE174:  0050A0E1     MOV r5, r0
		   0x010CE178:  000051E3     CMPS r0, r1, 0x0
		   0x010CE17C:  0000001A     BNE $+0x8  // if (!=) goto 0x010CE184
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CE180:  9234FAEB     BL $-0x172db0
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CE184:  080095E5     LDR r0, [r5, 0x8]
		   0x010CE188:  181094E5     LDR r1, [r4, 0x18]
		   0x010CE18C:  000041E0     SUB r0, r1, r0
		   0x010CE190:  100F6FE1     CLZ r0, r0
		   0x010CE194:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x010CE198:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass17_0 // TypeDefIndex: 1142
{

	// Fields
	public ItemData itemData; // 0x8

	// Methods

	// RVA: 0x10CDBE8 Offset: 0x10CDBE8 VA: 0x10CDBE8
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CDBE8:  0010A0E3     MOV r1, 0x0
		   0x010CDBEC:  FE1D7FEA     B $+0x1fc7800  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10CE19C Offset: 0x10CE19C VA: 0x10CE19C
	internal bool <GetContainerRank>b__1(ItemObject item) {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CE19C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010CE1A0:  0150A0E1     MOV r5, r1
		   0x010CE1A4:  0040A0E1     MOV r4, r0
		   0x010CE1A8:  000051E3     CMPS r0, r1, 0x0
		   0x010CE1AC:  0000001A     BNE $+0x8  // if (!=) goto 0x010CE1B4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CE1B0:  8634FAEB     BL $-0x172de0
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CE1B4:  185095E5     LDR r5, [r5, 0x18]
		   0x010CE1B8:  000055E3     CMPS r0, r5, 0x0
		   0x010CE1BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010CE1C4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010CE1C0:  8234FAEB     BL $-0x172df0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010CE1C4:  0500A0E1     MOV r0, r5
		   0x010CE1C8:  0010A0E3     MOV r1, 0x0
		   0x010CE1CC:  05EF00EB     BL $+0x3bc1c  // CALL → ItemData.get_Order
		   0x010CE1D0:  084094E5     LDR r4, [r4, 0x8]
		   0x010CE1D4:  0050A0E1     MOV r5, r0
		   0x010CE1D8:  000054E3     CMPS r0, r4, 0x0
		   0x010CE1DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010CE1E4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010CE1E0:  7A34FAEB     BL $-0x172e10
		   // ──── Block 6 if (!=) ────────────────────
		   0x010CE1E4:  0400A0E1     MOV r0, r4
		   0x010CE1E8:  0010A0E3     MOV r1, 0x0
		   0x010CE1EC:  FDEE00EB     BL $+0x3bbfc  // CALL → ItemData.get_Order
		   0x010CE1F0:  000045E0     SUB r0, r5, r0
		   0x010CE1F4:  100F6FE1     CLZ r0, r0
		   0x010CE1F8:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x010CE1FC:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass18_0 // TypeDefIndex: 1143
{

	// Fields
	public ItemData itemData; // 0x8

	// Methods

	// RVA: 0x10CDE0C Offset: 0x10CDE0C VA: 0x10CDE0C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CDE0C:  0010A0E3     MOV r1, 0x0
		   0x010CDE10:  751D7FEA     B $+0x1fc75dc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10CE200 Offset: 0x10CE200 VA: 0x10CE200
	internal bool <CheckIsLowestTierContainer>b__1(ItemObject item) {
		/* Disassembly (ARM32, 26 instructions, 0x68 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CE200:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010CE204:  0150A0E1     MOV r5, r1
		   0x010CE208:  0040A0E1     MOV r4, r0
		   0x010CE20C:  000051E3     CMPS r0, r1, 0x0
		   0x010CE210:  0000001A     BNE $+0x8  // if (!=) goto 0x010CE218
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CE214:  6D34FAEB     BL $-0x172e44
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CE218:  185095E5     LDR r5, [r5, 0x18]
		   0x010CE21C:  000055E3     CMPS r0, r5, 0x0
		   0x010CE220:  0000001A     BNE $+0x8  // if (!=) goto 0x010CE228
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010CE224:  6934FAEB     BL $-0x172e54
		   // ──── Block 4 if (!=) ────────────────────
		   0x010CE228:  0500A0E1     MOV r0, r5
		   0x010CE22C:  0010A0E3     MOV r1, 0x0
		   0x010CE230:  ECEE00EB     BL $+0x3bbb8  // CALL → ItemData.get_Order
		   0x010CE234:  084094E5     LDR r4, [r4, 0x8]
		   0x010CE238:  0050A0E1     MOV r5, r0
		   0x010CE23C:  000054E3     CMPS r0, r4, 0x0
		   0x010CE240:  0000001A     BNE $+0x8  // if (!=) goto 0x010CE248
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010CE244:  6134FAEB     BL $-0x172e74
		   // ──── Block 6 if (!=) ────────────────────
		   0x010CE248:  0400A0E1     MOV r0, r4
		   0x010CE24C:  0010A0E3     MOV r1, 0x0
		   0x010CE250:  E4EE00EB     BL $+0x3bb98  // CALL → ItemData.get_Order
		   0x010CE254:  000045E0     SUB r0, r5, r0
		   0x010CE258:  100F6FE1     CLZ r0, r0
		   0x010CE25C:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x010CE260:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010CE264:  00F020E3     INVALID
		*/
	}
}
