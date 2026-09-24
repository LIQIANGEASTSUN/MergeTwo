// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class Goal // TypeDefIndex: 1205
{

	// Fields
	[SerializeField]
	public string id; // 0x8
	[SerializeField]
	public List<GoalTarget> goalTarget; // 0xC
	[SerializeField]
	public List<ItemObject> rewardsItems; // 0x10
	[SerializeField]
	public List<ItemPack> rewardsAlbums; // 0x14
	[SerializeField]
	public int rewardsExp; // 0x18
	[SerializeField]
	public Sprite clientImage; // 0x1C
	private int[] idKeys; // 0x20
	private Nullable<bool> completedFlag; // 0x24
	private string entityId; // 0x28
	private List<ItemPack> rewardsDataCache; // 0x2C

	// Properties
	public int seasonNumber { get; }
	public int levelIndex { get; }
	public int orderIndex { get; }
	public bool Completed { get; set; }
	public bool Ready { get; }
	public int Weight { get; }
	public IReadOnlyList<ItemPack> rewardsData { get; }

	// Methods

	// RVA: 0x10F2A84 Offset: 0x10F2A84 VA: 0x10F2A84
	public int get_seasonNumber() {
		/* Disassembly (ARM32, 29 instructions, 0x74 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F2A84:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F2A88:  08D04DE2     SUB sp, sp, 0x8
		   0x010F2A8C:  58509FE5     LDR r5, [pc, 0x58]
		   0x010F2A90:  0040A0E1     MOV r4, r0
		   0x010F2A94:  05508FE0     ADD r5, pc, r5
		   0x010F2A98:  0000D5E5     LDRB r0, [r5]
		   0x010F2A9C:  000050E3     CMPS r0, r0, 0x0
		   0x010F2AA0:  0400001A     BNE $+0x18  // if (!=) goto 0x010F2AB8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F2AA4:  44009FE5     LDR r0, [pc, 0x44]
		   0x010F2AA8:  00009FE7     LDR r0, [pc, r0]
		   0x010F2AAC:  ABA1F9EB     BL $-0x19794c
		   0x010F2AB0:  0100A0E3     MOV r0, 0x1
		   0x010F2AB4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F2AB8:  0400A0E1     MOV r0, r4
		   0x010F2ABC:  0D0000EB     BL $+0x3c  // CALL → Goal.Parse
		   0x010F2AC0:  200094E5     LDR r0, [r4, 0x20]
		   0x010F2AC4:  0020E0E3     MVN r2, r0, 0x0
		   0x010F2AC8:  24109FE5     LDR r1, [pc, 0x24]
		   0x010F2ACC:  0130A0E3     MOV r3, 0x1
		   0x010F2AD0:  01109FE7     LDR r1, [pc, r1]
		   0x010F2AD4:  001091E5     LDR r1, [r1]
		   0x010F2AD8:  00108DE5     STR r1, [sp]
		   0x010F2ADC:  0010A0E3     MOV r1, 0x0
		   0x010F2AE0:  87C91EEB     BL $+0x7b2624  // CALL → ArrayExtensions.GetByIndexOrDefault<int>
		   0x010F2AE4:  08D08DE2     ADD sp, sp, 0x8
		   0x010F2AE8:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010F2AEC:  68921303     TSTSEQ sb, r3, 0x80000006
		   0x010F2AF0:  546AF802     RSCSEQ r6, r8, 0x54000
		   0x010F2AF4:  2C6AF802     RSCSEQ r6, r8, 0x2c000
		*/
	}

	// RVA: 0x10F2C3C Offset: 0x10F2C3C VA: 0x10F2C3C
	public int get_levelIndex() {
		/* Disassembly (ARM32, 29 instructions, 0x74 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F2C3C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F2C40:  08D04DE2     SUB sp, sp, 0x8
		   0x010F2C44:  58509FE5     LDR r5, [pc, 0x58]
		   0x010F2C48:  0040A0E1     MOV r4, r0
		   0x010F2C4C:  05508FE0     ADD r5, pc, r5
		   0x010F2C50:  0000D5E5     LDRB r0, [r5]
		   0x010F2C54:  000050E3     CMPS r0, r0, 0x0
		   0x010F2C58:  0400001A     BNE $+0x18  // if (!=) goto 0x010F2C70
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F2C5C:  44009FE5     LDR r0, [pc, 0x44]
		   0x010F2C60:  00009FE7     LDR r0, [pc, r0]
		   0x010F2C64:  3DA1F9EB     BL $-0x197b04
		   0x010F2C68:  0100A0E3     MOV r0, 0x1
		   0x010F2C6C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F2C70:  0400A0E1     MOV r0, r4
		   0x010F2C74:  9FFFFFEB     BL $-0x17c
		   0x010F2C78:  200094E5     LDR r0, [r4, 0x20]
		   0x010F2C7C:  0020E0E3     MVN r2, r0, 0x0
		   0x010F2C80:  24109FE5     LDR r1, [pc, 0x24]
		   0x010F2C84:  0130A0E3     MOV r3, 0x1
		   0x010F2C88:  01109FE7     LDR r1, [pc, r1]
		   0x010F2C8C:  001091E5     LDR r1, [r1]
		   0x010F2C90:  00108DE5     STR r1, [sp]
		   0x010F2C94:  0110A0E3     MOV r1, 0x1
		   0x010F2C98:  19C91EEB     BL $+0x7b246c  // CALL → ArrayExtensions.GetByIndexOrDefault<int>
		   0x010F2C9C:  08D08DE2     ADD sp, sp, 0x8
		   0x010F2CA0:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010F2CA4:  B1901303     TSTSEQ sb, r3, 0xb1
		   0x010F2CA8:  9C68F802     RSCSEQ r6, r8, 0x9c0000
		   0x010F2CAC:  7468F802     RSCSEQ r6, r8, 0x740000
		*/
	}

	// RVA: 0x10F2CB0 Offset: 0x10F2CB0 VA: 0x10F2CB0
	public int get_orderIndex() {
		/* Disassembly (ARM32, 29 instructions, 0x74 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F2CB0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F2CB4:  08D04DE2     SUB sp, sp, 0x8
		   0x010F2CB8:  58509FE5     LDR r5, [pc, 0x58]
		   0x010F2CBC:  0040A0E1     MOV r4, r0
		   0x010F2CC0:  05508FE0     ADD r5, pc, r5
		   0x010F2CC4:  0000D5E5     LDRB r0, [r5]
		   0x010F2CC8:  000050E3     CMPS r0, r0, 0x0
		   0x010F2CCC:  0400001A     BNE $+0x18  // if (!=) goto 0x010F2CE4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F2CD0:  44009FE5     LDR r0, [pc, 0x44]
		   0x010F2CD4:  00009FE7     LDR r0, [pc, r0]
		   0x010F2CD8:  20A1F9EB     BL $-0x197b78
		   0x010F2CDC:  0100A0E3     MOV r0, 0x1
		   0x010F2CE0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F2CE4:  0400A0E1     MOV r0, r4
		   0x010F2CE8:  82FFFFEB     BL $-0x1f0
		   0x010F2CEC:  200094E5     LDR r0, [r4, 0x20]
		   0x010F2CF0:  0020E0E3     MVN r2, r0, 0x0
		   0x010F2CF4:  24109FE5     LDR r1, [pc, 0x24]
		   0x010F2CF8:  0130A0E3     MOV r3, 0x1
		   0x010F2CFC:  01109FE7     LDR r1, [pc, r1]
		   0x010F2D00:  001091E5     LDR r1, [r1]
		   0x010F2D04:  00108DE5     STR r1, [sp]
		   0x010F2D08:  0210A0E3     MOV r1, 0x2
		   0x010F2D0C:  FCC81EEB     BL $+0x7b23f8  // CALL → ArrayExtensions.GetByIndexOrDefault<int>
		   0x010F2D10:  08D08DE2     ADD sp, sp, 0x8
		   0x010F2D14:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010F2D18:  3E901303     TSTSEQ sb, r3, 0x3e
		   0x010F2D1C:  2868F802     RSCSEQ r6, r8, 0x280000
		   0x010F2D20:  0068F802     RSCSEQ r6, r8, 0x0
		*/
	}

	// RVA: 0x10F08D4 Offset: 0x10F08D4 VA: 0x10F08D4
	public bool get_Completed() {
		/* Disassembly (ARM32, 81 instructions, 0x144 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F08D4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010F08D8:  08D04DE2     SUB sp, sp, 0x8
		   0x010F08DC:  08419FE5     LDR r4, [pc, 0x108]
		   0x010F08E0:  0050A0E1     MOV r5, r0
		   0x010F08E4:  04408FE0     ADD r4, pc, r4
		   0x010F08E8:  0000D4E5     LDRB r0, [r4]
		   0x010F08EC:  000050E3     CMPS r0, r0, 0x0
		   0x010F08F0:  1300001A     BNE $+0x54  // if (!=) goto 0x010F0944
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F08F4:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x010F08F8:  00009FE7     LDR r0, [pc, r0]
		   0x010F08FC:  17AAF9EB     BL $-0x19579c
		   0x010F0900:  EC009FE5     LDR r0, [pc, 0xec]
		   0x010F0904:  00009FE7     LDR r0, [pc, r0]
		   0x010F0908:  14AAF9EB     BL $-0x1957a8
		   0x010F090C:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x010F0910:  00009FE7     LDR r0, [pc, r0]
		   0x010F0914:  11AAF9EB     BL $-0x1957b4
		   0x010F0918:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x010F091C:  00009FE7     LDR r0, [pc, r0]
		   0x010F0920:  0EAAF9EB     BL $-0x1957c0
		   0x010F0924:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x010F0928:  00009FE7     LDR r0, [pc, r0]
		   0x010F092C:  0BAAF9EB     BL $-0x1957cc
		   0x010F0930:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x010F0934:  00009FE7     LDR r0, [pc, r0]
		   0x010F0938:  08AAF9EB     BL $-0x1957d8
		   0x010F093C:  0100A0E3     MOV r0, 0x1
		   0x010F0940:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F0944:  0540A0E1     MOV r4, r5
		   0x010F0948:  2400F4E5     LDRB r0, [r4, 0x24]!
		   0x010F094C:  000050E3     CMPS r0, r0, 0x0
		   0x010F0950:  1E00001A     BNE $+0x80  // if (!=) goto 0x010F09D0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F0954:  AC009FE5     LDR r0, [pc, 0xac]
		   0x010F0958:  0020A0E3     MOV r2, 0x0
		   0x010F095C:  0060A0E3     MOV r6, 0x0
		   0x010F0960:  00009FE7     LDR r0, [pc, r0]
		   0x010F0964:  081095E5     LDR r1, [r5, 0x8]
		   0x010F0968:  000090E5     LDR r0, [r0]
		   0x010F096C:  736376EB     BL $+0x1d98dd4  // CALL → String.Concat
		   0x010F0970:  0050A0E1     MOV r5, r0
		   0x010F0974:  90009FE5     LDR r0, [pc, 0x90]
		   0x010F0978:  00009FE7     LDR r0, [pc, r0]
		   0x010F097C:  000090E5     LDR r0, [r0]
		   0x010F0980:  741090E5     LDR r1, [r0, 0x74]
		   0x010F0984:  000051E3     CMPS r0, r1, 0x0
		   0x010F0988:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0990
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F098C:  40AAF9EB     BL $-0x1956f8
		   // ──── Block 5 if (!=) ────────────────────
		   0x010F0990:  0500A0E1     MOV r0, r5
		   0x010F0994:  0010A0E3     MOV r1, 0x0
		   0x010F0998:  0020A0E3     MOV r2, 0x0
		   0x010F099C:  0030A0E3     MOV r3, 0x0
		   0x010F09A0:  734FFEEB     BL $-0x6c22c
		   0x010F09A4:  64109FE5     LDR r1, [pc, 0x64]
		   0x010F09A8:  010040E2     SUB r0, r0, 0x1
		   0x010F09AC:  100F6FE1     CLZ r0, r0
		   0x010F09B0:  01109FE7     LDR r1, [pc, r1]
		   0x010F09B4:  B660CDE1     STRH r6, [sp, 0x6]
		   0x010F09B8:  002091E5     LDR r2, [r1]
		   0x010F09BC:  A012A0E1     MOV r1, r0, r0, lsr 5
		   0x010F09C0:  06008DE2     ADD r0, sp, 0x6
		   0x010F09C4:  D50331EB     BL $+0xc40f5c  // CALL → Nullable<bool>..ctor
		   0x010F09C8:  B600DDE1     LDRH r0, [sp, 0x6]
		   0x010F09CC:  B000C4E1     STRH r0, [r4]
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F09D0:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010F09D4:  00009FE7     LDR r0, [pc, r0]
		   0x010F09D8:  001090E5     LDR r1, [r0]
		   0x010F09DC:  0400A0E1     MOV r0, r4
		   0x010F09E0:  D40331EB     BL $+0xc40f58  // CALL → Nullable<bool>.get_Value
		   0x010F09E4:  08D08DE2     ADD sp, sp, 0x8
		   0x010F09E8:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010F09EC:  1BB41303     TSTSEQ fp, r3, 0x1b000000
		   0x010F09F0:  406DF802     RSCSEQ r6, r8, 0x1000
		   0x010F09F4:  C45CF802     RSCSEQ r5, r8, 0xc400
		   0x010F09F8:  605CF802     RSCSEQ r5, r8, 0x6000
		   0x010F09FC:  B05CF802     RSCSEQ r5, r8, 0xb000
		   0x010F0A00:  B45CF802     RSCSEQ r5, r8, 0xb400
		   0x010F0A04:  888BF802     RSCSEQ r8, r8, 0x22000
		   0x010F0A08:  5C8BF802     RSCSEQ r8, r8, 0x17000
		   0x010F0A0C:  C06CF802     RSCSEQ r6, r8, 0xc000
		   0x010F0A10:  C05BF802     RSCSEQ r5, r8, 0x30000
		   0x010F0A14:  085CF802     RSCSEQ r5, r8, 0x800
		*/
	}

	// RVA: 0x10F2D24 Offset: 0x10F2D24 VA: 0x10F2D24
	public void set_Completed(bool value) {
		/* Disassembly (ARM32, 61 instructions, 0xF4 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F2D24:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F2D28:  08D04DE2     SUB sp, sp, 0x8
		   0x010F2D2C:  C8609FE5     LDR r6, [pc, 0xc8]
		   0x010F2D30:  0040A0E1     MOV r4, r0
		   0x010F2D34:  0150A0E1     MOV r5, r1
		   0x010F2D38:  06608FE0     ADD r6, pc, r6
		   0x010F2D3C:  0000D6E5     LDRB r0, [r6]
		   0x010F2D40:  000050E3     CMPS r0, r0, 0x0
		   0x010F2D44:  0A00001A     BNE $+0x30  // if (!=) goto 0x010F2D74
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F2D48:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x010F2D4C:  00009FE7     LDR r0, [pc, r0]
		   0x010F2D50:  02A1F9EB     BL $-0x197bf0
		   0x010F2D54:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x010F2D58:  00009FE7     LDR r0, [pc, r0]
		   0x010F2D5C:  FFA0F9EB     BL $-0x197bfc
		   0x010F2D60:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x010F2D64:  00009FE7     LDR r0, [pc, r0]
		   0x010F2D68:  FCA0F9EB     BL $-0x197c08
		   0x010F2D6C:  0100A0E3     MOV r0, 0x1
		   0x010F2D70:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F2D74:  90009FE5     LDR r0, [pc, 0x90]
		   0x010F2D78:  0020A0E3     MOV r2, 0x0
		   0x010F2D7C:  0070A0E3     MOV r7, 0x0
		   0x010F2D80:  00009FE7     LDR r0, [pc, r0]
		   0x010F2D84:  081094E5     LDR r1, [r4, 0x8]
		   0x010F2D88:  000090E5     LDR r0, [r0]
		   0x010F2D8C:  6B5A76EB     BL $+0x1d969b4  // CALL → String.Concat
		   0x010F2D90:  0060A0E1     MOV r6, r0
		   0x010F2D94:  74009FE5     LDR r0, [pc, 0x74]
		   0x010F2D98:  00009FE7     LDR r0, [pc, r0]
		   0x010F2D9C:  000090E5     LDR r0, [r0]
		   0x010F2DA0:  741090E5     LDR r1, [r0, 0x74]
		   0x010F2DA4:  000051E3     CMPS r0, r1, 0x0
		   0x010F2DA8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2DB0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F2DAC:  38A1F9EB     BL $-0x197b18
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F2DB0:  0600A0E1     MOV r0, r6
		   0x010F2DB4:  0510A0E1     MOV r1, r5
		   0x010F2DB8:  0020A0E3     MOV r2, 0x0
		   0x010F2DBC:  0030A0E3     MOV r3, 0x0
		   0x010F2DC0:  5047FEEB     BL $-0x6e2b8
		   0x010F2DC4:  0000A0E3     MOV r0, 0x0
		   0x010F2DC8:  0010A0E3     MOV r1, 0x0
		   0x010F2DCC:  F55CFEEB     BL $-0x68c24
		   0x010F2DD0:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010F2DD4:  0510A0E1     MOV r1, r5
		   0x010F2DD8:  00009FE7     LDR r0, [pc, r0]
		   0x010F2DDC:  B670CDE1     STRH r7, [sp, 0x6]
		   0x010F2DE0:  002090E5     LDR r2, [r0]
		   0x010F2DE4:  06008DE2     ADD r0, sp, 0x6
		   0x010F2DE8:  CCFA30EB     BL $+0xc3eb38  // CALL → Nullable<bool>..ctor
		   0x010F2DEC:  B600DDE1     LDRH r0, [sp, 0x6]
		   0x010F2DF0:  B402C4E1     STRH r0, [r4, 0x24]
		   0x010F2DF4:  08D08DE2     ADD sp, sp, 0x8
		   0x010F2DF8:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010F2DFC:  C88F1303     TSTSEQ r8, r3, 0x320
		   0x010F2E00:  EC48F802     RSCSEQ r4, r8, 0xec0000
		   0x010F2E04:  1838F802     RSCSEQ r3, r8, 0x180000
		   0x010F2E08:  5867F802     RSCSEQ r6, r8, 0x1600000
		   0x010F2E0C:  3C67F802     RSCSEQ r6, r8, 0xf00000
		   0x010F2E10:  A048F802     RSCSEQ r4, r8, 0xa00000
		   0x010F2E14:  9837F802     RSCSEQ r3, r8, 0x2600000
		*/
	}

	// RVA: 0x10F2E18 Offset: 0x10F2E18 VA: 0x10F2E18
	public bool get_Ready() {
		/* Disassembly (ARM32, 75 instructions, 0x12C bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F2E18:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F2E1C:  FC509FE5     LDR r5, [pc, 0xfc]
		   0x010F2E20:  0040A0E1     MOV r4, r0
		   0x010F2E24:  05508FE0     ADD r5, pc, r5
		   0x010F2E28:  0000D5E5     LDRB r0, [r5]
		   0x010F2E2C:  000050E3     CMPS r0, r0, 0x0
		   0x010F2E30:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010F2E6C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F2E34:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x010F2E38:  00009FE7     LDR r0, [pc, r0]
		   0x010F2E3C:  C7A0F9EB     BL $-0x197cdc
		   0x010F2E40:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x010F2E44:  00009FE7     LDR r0, [pc, r0]
		   0x010F2E48:  C4A0F9EB     BL $-0x197ce8
		   0x010F2E4C:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x010F2E50:  00009FE7     LDR r0, [pc, r0]
		   0x010F2E54:  C1A0F9EB     BL $-0x197cf4
		   0x010F2E58:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010F2E5C:  00009FE7     LDR r0, [pc, r0]
		   0x010F2E60:  BEA0F9EB     BL $-0x197d00
		   0x010F2E64:  0100A0E3     MOV r0, 0x1
		   0x010F2E68:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F2E6C:  C0709FE5     LDR r7, [pc, 0xc0]
		   0x010F2E70:  07709FE7     LDR r7, [pc, r7]
		   0x010F2E74:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010F2E78:  000097E5     LDR r0, [r7]
		   0x010F2E7C:  741090E5     LDR r1, [r0, 0x74]
		   0x010F2E80:  000051E3     CMPS r0, r1, 0x0
		   0x010F2E84:  0100001A     BNE $+0xc  // if (!=) goto 0x010F2E90
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F2E88:  01A1F9EB     BL $-0x197bf4
		   0x010F2E8C:  000097E5     LDR r0, [r7]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F2E90:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010F2E94:  045091E5     LDR r5, [r1, 0x4]
		   0x010F2E98:  000055E3     CMPS r0, r5, 0x0
		   0x010F2E9C:  1500001A     BNE $+0x5c  // if (!=) goto 0x010F2EF8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F2EA0:  742090E5     LDR r2, [r0, 0x74]
		   0x010F2EA4:  000052E3     CMPS r0, r2, 0x0
		   0x010F2EA8:  0200001A     BNE $+0x10  // if (!=) goto 0x010F2EB8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010F2EAC:  F8A0F9EB     BL $-0x197c18
		   0x010F2EB0:  000097E5     LDR r0, [r7]
		   0x010F2EB4:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 7 if (!=) ────────────────────
		   0x010F2EB8:  78009FE5     LDR r0, [pc, 0x78]
		   0x010F2EBC:  00009FE7     LDR r0, [pc, r0]
		   0x010F2EC0:  006091E5     LDR r6, [r1]
		   0x010F2EC4:  000090E5     LDR r0, [r0]
		   0x010F2EC8:  3DA1F9EB     BL $-0x197b04
		   0x010F2ECC:  0050A0E1     MOV r5, r0
		   0x010F2ED0:  64009FE5     LDR r0, [pc, 0x64]
		   0x010F2ED4:  0610A0E1     MOV r1, r6
		   0x010F2ED8:  0030A0E3     MOV r3, 0x0
		   0x010F2EDC:  00009FE7     LDR r0, [pc, r0]
		   0x010F2EE0:  002090E5     LDR r2, [r0]
		   0x010F2EE4:  0500A0E1     MOV r0, r5
		   0x010F2EE8:  E66B33EB     BL $+0xcdafa0  // CALL → Predicate<object>..ctor
		   0x010F2EEC:  000097E5     LDR r0, [r7]
		   0x010F2EF0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F2EF4:  045080E5     STR r5, [r0, 0x4]
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F2EF8:  000054E3     CMPS r0, r4, 0x0
		   0x010F2EFC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2F04
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F2F00:  32A1F9EB     BL $-0x197b30
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F2F04:  34009FE5     LDR r0, [pc, 0x34]
		   0x010F2F08:  0510A0E1     MOV r1, r5
		   0x010F2F0C:  00009FE7     LDR r0, [pc, r0]
		   0x010F2F10:  002090E5     LDR r2, [r0]
		   0x010F2F14:  0400A0E1     MOV r0, r4
		   0x010F2F18:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010F2F1C:  C7066CEA     B $+0x1b01b24  // TAIL CALL → List<object>.TrueForAll
		   0x010F2F20:  DD8E1303     TSTSEQ r8, r3, 0xdd0
		   0x010F2F24:  CC66F802     RSCSEQ r6, r8, 0xcc00000
		   0x010F2F28:  DC64F802     RSCSEQ r6, r8, 0xdc000000
		   0x010F2F2C:  B866F802     RSCSEQ r6, r8, 0xb800000
		   0x010F2F30:  B066F802     RSCSEQ r6, r8, 0xb000000
		   0x010F2F34:  9C66F802     RSCSEQ r6, r8, 0x9c00000
		   0x010F2F38:  6464F802     RSCSEQ r6, r8, 0x64000000
		   0x010F2F3C:  2C66F802     RSCSEQ r6, r8, 0x2c00000
		   0x010F2F40:  F865F802     RSCSEQ r6, r8, 0x3e000000
		*/
	}

	// RVA: 0x10F2F44 Offset: 0x10F2F44 VA: 0x10F2F44
	public int get_Weight() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F2F44:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010F2F48:  18D04DE2     SUB sp, sp, 0x18
		   0x010F2F4C:  B4419FE5     LDR r4, [pc, 0x1b4]
		   0x010F2F50:  0080A0E1     MOV r8, r0
		   0x010F2F54:  04408FE0     ADD r4, pc, r4
		   0x010F2F58:  0000D4E5     LDRB r0, [r4]
		   0x010F2F5C:  000050E3     CMPS r0, r0, 0x0
		   0x010F2F60:  1000001A     BNE $+0x48
		   0x010F2F64:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x010F2F68:  00009FE7     LDR r0, [pc, r0]
		   0x010F2F6C:  7BA0F9EB     BL $-0x197e0c
		   0x010F2F70:  98019FE5     LDR r0, [pc, 0x198]
		   0x010F2F74:  00009FE7     LDR r0, [pc, r0]
		   0x010F2F78:  78A0F9EB     BL $-0x197e18
		   0x010F2F7C:  90019FE5     LDR r0, [pc, 0x190]
		   0x010F2F80:  00009FE7     LDR r0, [pc, r0]
		   0x010F2F84:  75A0F9EB     BL $-0x197e24
		   0x010F2F88:  88019FE5     LDR r0, [pc, 0x188]
		   0x010F2F8C:  00009FE7     LDR r0, [pc, r0]
		   0x010F2F90:  72A0F9EB     BL $-0x197e30
		   0x010F2F94:  80019FE5     LDR r0, [pc, 0x180]
		   0x010F2F98:  00009FE7     LDR r0, [pc, r0]
		   0x010F2F9C:  6FA0F9EB     BL $-0x197e3c
		   0x010F2FA0:  0100A0E3     MOV r0, 0x1
		   0x010F2FA4:  0000C4E5     STRB r0, [r4]
		*/
	}

	// RVA: 0x10F3130 Offset: 0x10F3130 VA: 0x10F3130
	public IReadOnlyList<ItemPack> get_rewardsData() {
		/* Disassembly (ARM32, 32 instructions, 0x80 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F3130:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010F3134:  1CD04DE2     SUB sp, sp, 0x1c
		   0x010F3138:  24529FE5     LDR r5, [pc, 0x224]
		   0x010F313C:  0040A0E1     MOV r4, r0
		   0x010F3140:  05508FE0     ADD r5, pc, r5
		   0x010F3144:  0000D5E5     LDRB r0, [r5]
		   0x010F3148:  000050E3     CMPS r0, r0, 0x0
		   0x010F314C:  1600001A     BNE $+0x60  // if (!=) goto 0x010F31AC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F3150:  10029FE5     LDR r0, [pc, 0x210]
		   0x010F3154:  00009FE7     LDR r0, [pc, r0]
		   0x010F3158:  00A0F9EB     BL $-0x197ff8
		   0x010F315C:  08029FE5     LDR r0, [pc, 0x208]
		   0x010F3160:  00009FE7     LDR r0, [pc, r0]
		   0x010F3164:  FD9FF9EB     BL $-0x198004
		   0x010F3168:  00029FE5     LDR r0, [pc, 0x200]
		   0x010F316C:  00009FE7     LDR r0, [pc, r0]
		   0x010F3170:  FA9FF9EB     BL $-0x198010
		   0x010F3174:  F8019FE5     LDR r0, [pc, 0x1f8]
		   0x010F3178:  00009FE7     LDR r0, [pc, r0]
		   0x010F317C:  F79FF9EB     BL $-0x19801c
		   0x010F3180:  F0019FE5     LDR r0, [pc, 0x1f0]
		   0x010F3184:  00009FE7     LDR r0, [pc, r0]
		   0x010F3188:  F49FF9EB     BL $-0x198028
		   0x010F318C:  E8019FE5     LDR r0, [pc, 0x1e8]
		   0x010F3190:  00009FE7     LDR r0, [pc, r0]
		   0x010F3194:  F19FF9EB     BL $-0x198034
		   0x010F3198:  E0019FE5     LDR r0, [pc, 0x1e0]
		   0x010F319C:  00009FE7     LDR r0, [pc, r0]
		   0x010F31A0:  EE9FF9EB     BL $-0x198040
		   0x010F31A4:  0100A0E3     MOV r0, 0x1
		   0x010F31A8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F31AC:  2C5094E5     LDR r5, [r4, 0x2c]
		*/
	}

	// RVA: 0x10F339C Offset: 0x10F339C VA: 0x10F339C
	public bool ImportRewards(IReadOnlyCollection<ItemPack> newRewards, out string errorMessage) {
		/* Disassembly (ARM32, 422 instructions, 0x698 bytes):
		   // CFG: 89 blocks, 95 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F339C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010F33A0:  14D04DE2     SUB sp, sp, 0x14
		   0x010F33A4:  1C469FE5     LDR r4, [pc, 0x61c]
		   0x010F33A8:  00B0A0E1     MOV fp, r0
		   0x010F33AC:  0280A0E1     MOV r8, r2
		   0x010F33B0:  0160A0E1     MOV r6, r1
		   0x010F33B4:  04408FE0     ADD r4, pc, r4
		   0x010F33B8:  0000D4E5     LDRB r0, [r4]
		   0x010F33BC:  000050E3     CMPS r0, r0, 0x0
		   0x010F33C0:  2500001A     BNE $+0x9c  // if (!=) goto 0x010F345C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F33C4:  00069FE5     LDR r0, [pc, 0x600]
		   0x010F33C8:  00009FE7     LDR r0, [pc, r0]
		   0x010F33CC:  639FF9EB     BL $-0x19826c
		   0x010F33D0:  F8059FE5     LDR r0, [pc, 0x5f8]
		   0x010F33D4:  00009FE7     LDR r0, [pc, r0]
		   0x010F33D8:  609FF9EB     BL $-0x198278
		   0x010F33DC:  F0059FE5     LDR r0, [pc, 0x5f0]
		   0x010F33E0:  00009FE7     LDR r0, [pc, r0]
		   0x010F33E4:  5D9FF9EB     BL $-0x198284
		   0x010F33E8:  E8059FE5     LDR r0, [pc, 0x5e8]
		   0x010F33EC:  00009FE7     LDR r0, [pc, r0]
		   0x010F33F0:  5A9FF9EB     BL $-0x198290
		   0x010F33F4:  E0059FE5     LDR r0, [pc, 0x5e0]
		   0x010F33F8:  00009FE7     LDR r0, [pc, r0]
		   0x010F33FC:  579FF9EB     BL $-0x19829c
		   0x010F3400:  D8059FE5     LDR r0, [pc, 0x5d8]
		   0x010F3404:  00009FE7     LDR r0, [pc, r0]
		   0x010F3408:  549FF9EB     BL $-0x1982a8
		   0x010F340C:  D0059FE5     LDR r0, [pc, 0x5d0]
		   0x010F3410:  00009FE7     LDR r0, [pc, r0]
		   0x010F3414:  519FF9EB     BL $-0x1982b4
		   0x010F3418:  C8059FE5     LDR r0, [pc, 0x5c8]
		   0x010F341C:  00009FE7     LDR r0, [pc, r0]
		   0x010F3420:  4E9FF9EB     BL $-0x1982c0
		   0x010F3424:  C0059FE5     LDR r0, [pc, 0x5c0]
		   0x010F3428:  00009FE7     LDR r0, [pc, r0]
		   0x010F342C:  4B9FF9EB     BL $-0x1982cc
		   0x010F3430:  B8059FE5     LDR r0, [pc, 0x5b8]
		   0x010F3434:  00009FE7     LDR r0, [pc, r0]
		   0x010F3438:  489FF9EB     BL $-0x1982d8
		   0x010F343C:  B0059FE5     LDR r0, [pc, 0x5b0]
		   0x010F3440:  00009FE7     LDR r0, [pc, r0]
		   0x010F3444:  459FF9EB     BL $-0x1982e4
		   0x010F3448:  A8059FE5     LDR r0, [pc, 0x5a8]
		   0x010F344C:  00009FE7     LDR r0, [pc, r0]
		   0x010F3450:  429FF9EB     BL $-0x1982f0
		   0x010F3454:  0100A0E3     MOV r0, 0x1
		   0x010F3458:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F345C:  98059FE5     LDR r0, [pc, 0x598]
		   0x010F3460:  0040A0E3     MOV r4, 0x0
		   0x010F3464:  00009FE7     LDR r0, [pc, r0]
		   0x010F3468:  10408DE5     STR r4, [sp, 0x10]
		   0x010F346C:  0C408DE5     STR r4, [sp, 0xc]
		   0x010F3470:  480090E5     LDR r0, [r0, 0x48]
		   0x010F3474:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F3478:  000090E5     LDR r0, [r0]
		   0x010F347C:  000088E5     STR r0, [r8]
		   0x010F3480:  2C509BE5     LDR r5, [fp, 0x2c]
		   0x010F3484:  000055E3     CMPS r0, r5, 0x0
		   0x010F3488:  0000001A     BNE $+0x8  // if (!=) goto 0x010F3490
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F348C:  CF9FF9EB     BL $-0x1980bc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F3490:  DC20C5E1     LDRD r2, r3, [r5, 0xc]
		   0x010F3494:  011083E2     ADD r1, r3, 0x1
		   0x010F3498:  0C4085E5     STR r4, [r5, 0xc]
		   0x010F349C:  010052E3     CMPS r0, r2, 0x1
		   0x010F34A0:  101085E5     STR r1, [r5, 0x10]
		   0x010F34A4:  030000BA     BLT $+0x14  // if (<) goto 0x010F34B8
		   // 
		   // ──── Block 5 else (>=) ────────────────────
		   0x010F34A8:  080095E5     LDR r0, [r5, 0x8]
		   0x010F34AC:  0010A0E3     MOV r1, 0x0
		   0x010F34B0:  0030A0E3     MOV r3, 0x0
		   0x010F34B4:  DFF47DEB     BL $+0x1f7d384  // CALL → Array.Clear
		   // ──── Block 6 if (<) ────────────────────
		   0x010F34B8:  000056E3     CMPS r0, r6, 0x0
		   0x010F34BC:  2F00000A     BEQ $+0xc4  // if (==) goto 0x010F3580
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010F34C0:  000096E5     LDR r0, [r6]
		   0x010F34C4:  34159FE5     LDR r1, [pc, 0x534]
		   0x010F34C8:  01109FE7     LDR r1, [pc, r1]
		   0x010F34CC:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010F34D0:  001091E5     LDR r1, [r1]
		   0x010F34D4:  000052E3     CMPS r0, r2, 0x0
		   0x010F34D8:  0700000A     BEQ $+0x24  // if (==) goto 0x010F34FC
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x010F34DC:  583090E5     LDR r3, [r0, 0x58]
		   0x010F34E0:  043083E2     ADD r3, r3, 0x4
		   0x010F34E4:  047013E5     LDR r7, [r3, -0x4]
		   0x010F34E8:  010057E1     CMPS r0, r7, r1
		   0x010F34EC:  0600000A     BEQ $+0x20  // if (==) goto 0x010F350C
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x010F34F0:  012052E2     SUBS r2, r2, 0x1
		   0x010F34F4:  083083E2     ADD r3, r3, 0x8
		   0x010F34F8:  F9FFFF1A     BNE $-0x14
		   // ──── Block 10 (from 2 paths) ──────────────────
		   0x010F34FC:  0600A0E1     MOV r0, r6
		   0x010F3500:  0020A0E3     MOV r2, 0x0
		   0x010F3504:  5F8EFAEB     BL $-0x15c67c
		   0x010F3508:  020000EA     B $+0x10  // goto 0x010F3518
		   // ──── Block 11 if (==) ────────────────────
		   0x010F350C:  001093E5     LDR r1, [r3]
		   0x010F3510:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010F3514:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 12 ──────────────────────────────
		   0x010F3518:  D020C0E1     LDRD r2, r3, [r0]
		   0x010F351C:  0600A0E1     MOV r0, r6
		   0x010F3520:  0310A0E1     MOV r1, r3
		   0x010F3524:  32FF2FE1     BLX r2
		   0x010F3528:  000050E3     CMPS r0, r0, 0x0
		   0x010F352C:  1300000A     BEQ $+0x54  // if (==) goto 0x010F3580
		   // 
		   // ──── Block 13 else (r2 != r2, 0x1) ────────────────────
		   0x010F3530:  000096E5     LDR r0, [r6]
		   0x010F3534:  D4149FE5     LDR r1, [pc, 0x4d4]
		   0x010F3538:  01109FE7     LDR r1, [pc, r1]
		   0x010F353C:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010F3540:  00808DE5     STR r8, [sp]
		   0x010F3544:  001091E5     LDR r1, [r1]
		   0x010F3548:  000052E3     CMPS r0, r2, 0x0
		   0x010F354C:  0700000A     BEQ $+0x24  // if (==) goto 0x010F3570
		   // 
		   // ──── Block 14 else (r2 != r2, 0x1) ────────────────────
		   0x010F3550:  583090E5     LDR r3, [r0, 0x58]
		   0x010F3554:  043083E2     ADD r3, r3, 0x4
		   0x010F3558:  047013E5     LDR r7, [r3, -0x4]
		   0x010F355C:  010057E1     CMPS r0, r7, r1
		   0x010F3560:  1D00000A     BEQ $+0x7c  // if (==) goto 0x010F35DC
		   // 
		   // ──── Block 15 else (r2 != r2, 0x1) ────────────────────
		   0x010F3564:  012052E2     SUBS r2, r2, 0x1
		   0x010F3568:  083083E2     ADD r3, r3, 0x8
		   0x010F356C:  F9FFFF1A     BNE $-0x14
		   // ──── Block 16 (from 2 paths) ──────────────────
		   0x010F3570:  0600A0E1     MOV r0, r6
		   0x010F3574:  0020A0E3     MOV r2, 0x0
		   0x010F3578:  428EFAEB     BL $-0x15c6f0
		   0x010F357C:  190000EA     B $+0x6c  // goto 0x010F35E8
		   // ──── Block 17 (from 2 paths) ──────────────────
		   0x010F3580:  7C049FE5     LDR r0, [pc, 0x47c]
		   0x010F3584:  0030A0E3     MOV r3, 0x0
		   0x010F3588:  0040A0E3     MOV r4, 0x0
		   0x010F358C:  00009FE7     LDR r0, [pc, r0]
		   0x010F3590:  000090E5     LDR r0, [r0]
		   0x010F3594:  000088E5     STR r0, [r8]
		   0x010F3598:  68149FE5     LDR r1, [pc, 0x468]
		   0x010F359C:  01109FE7     LDR r1, [pc, r1]
		   0x010F35A0:  08209BE5     LDR r2, [fp, 0x8]
		   0x010F35A4:  001091E5     LDR r1, [r1]
		   0x010F35A8:  DE9676EB     BL $+0x1da5b80  // CALL → String.Concat
		   0x010F35AC:  0050A0E1     MOV r5, r0
		   0x010F35B0:  54049FE5     LDR r0, [pc, 0x454]
		   0x010F35B4:  00009FE7     LDR r0, [pc, r0]
		   0x010F35B8:  000090E5     LDR r0, [r0]
		   0x010F35BC:  741090E5     LDR r1, [r0, 0x74]
		   0x010F35C0:  000051E3     CMPS r0, r1, 0x0
		   0x010F35C4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F35CC
		   // 
		   // ──── Block 18 else (r2 == r2, 0x1) ────────────────────
		   0x010F35C8:  319FF9EB     BL $-0x198334
		   // ──── Block 19 if (r2 != r2, 0x1) ────────────────────
		   0x010F35CC:  0500A0E1     MOV r0, r5
		   0x010F35D0:  0010A0E3     MOV r1, 0x0
		   0x010F35D4:  8E123CEB     BL $+0xf04a40  // CALL → sub_1FF8014
		   0x010F35D8:  DE0000EA     B $+0x380  // goto 0x010F3958
		   // ──── Block 20 if (r2 == r2, 0x1) ────────────────────
		   0x010F35DC:  001093E5     LDR r1, [r3]
		   0x010F35E0:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010F35E4:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 21 ──────────────────────────────
		   0x010F35E8:  D020C0E1     LDRD r2, r3, [r0]
		   0x010F35EC:  0600A0E1     MOV r0, r6
		   0x010F35F0:  0310A0E1     MOV r1, r3
		   0x010F35F4:  32FF2FE1     BLX r2
		   0x010F35F8:  0070A0E1     MOV r7, r0
		   0x010F35FC:  10008DE5     STR r0, [sp, 0x10]
		   0x010F3600:  10008DE2     ADD r0, sp, 0x10
		   0x010F3604:  08008DE5     STR r0, [sp, 0x8]
		   0x010F3608:  0000A0E3     MOV r0, 0x0
		   0x010F360C:  0CA08DE2     ADD r10, sp, 0xc
		   0x010F3610:  04008DE5     STR r0, [sp, 0x4]
		   0x010F3614:  F8939FE5     LDR sb, [pc, 0x3f8]  // vtable: Object.Equals
		   0x010F3618:  09909FE7     LDR sb, [pc, sb]
		   0x010F361C:  000057E3     CMPS r0, r7, 0x0
		   0x010F3620:  0000001A     BNE $+0x8  // if (!=) goto 0x010F3628
		   // 
		   // ──── Block 22 else (r2 == r2, 0x1) ────────────────────
		   0x010F3624:  699FF9EB     BL $-0x198254
		   // ──── Block 23 if (r2 != r2, 0x1) ────────────────────
		   0x010F3628:  000097E5     LDR r0, [r7]
		   0x010F362C:  001099E5     LDR r1, [sb]
		   0x010F3630:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010F3634:  000052E3     CMPS r0, r2, 0x0
		   0x010F3638:  0700000A     BEQ $+0x24  // if (==) goto 0x010F365C
		   // 
		   // ──── Block 24 else (r2 != r2, 0x1) ────────────────────
		   0x010F363C:  583090E5     LDR r3, [r0, 0x58]
		   0x010F3640:  043083E2     ADD r3, r3, 0x4
		   0x010F3644:  046013E5     LDR r6, [r3, -0x4]
		   0x010F3648:  010056E1     CMPS r0, r6, r1
		   0x010F364C:  0600000A     BEQ $+0x20  // if (==) goto 0x010F366C
		   // 
		   // ──── Block 25 else (r2 != r2, 0x1) ────────────────────
		   0x010F3650:  012052E2     SUBS r2, r2, 0x1
		   0x010F3654:  083083E2     ADD r3, r3, 0x8
		   0x010F3658:  F9FFFF1A     BNE $-0x14
		   // ──── Block 26 (from 2 paths) ──────────────────
		   0x010F365C:  0700A0E1     MOV r0, r7
		   0x010F3660:  0020A0E3     MOV r2, 0x0
		   0x010F3664:  078EFAEB     BL $-0x15c7dc
		   0x010F3668:  020000EA     B $+0x10  // goto 0x010F3678
		   // ──── Block 27 if (r2 == r2, 0x1) ────────────────────
		   0x010F366C:  001093E5     LDR r1, [r3]
		   0x010F3670:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010F3674:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 28 ──────────────────────────────
		   0x010F3678:  D020C0E1     LDRD r2, r3, [r0]
		   0x010F367C:  0700A0E1     MOV r0, r7
		   0x010F3680:  0310A0E1     MOV r1, r3
		   0x010F3684:  32FF2FE1     BLX r2
		   0x010F3688:  000050E3     CMPS r0, r0, 0x0
		   0x010F368C:  6C00000A     BEQ $+0x1b8  // if (==) goto 0x010F3844
		   // 
		   // ──── Block 29 else (r2 != r2, 0x1) ────────────────────
		   0x010F3690:  10709DE5     LDR r7, [sp, 0x10]
		   0x010F3694:  000057E3     CMPS r0, r7, 0x0
		   0x010F3698:  0000001A     BNE $+0x8  // if (!=) goto 0x010F36A0
		   // 
		   // ──── Block 30 else (r2 == r2, 0x1) ────────────────────
		   0x010F369C:  4B9FF9EB     BL $-0x1982cc
		   // ──── Block 31 if (r2 != r2, 0x1) ────────────────────
		   0x010F36A0:  000097E5     LDR r0, [r7]
		   0x010F36A4:  6C139FE5     LDR r1, [pc, 0x36c]
		   0x010F36A8:  01109FE7     LDR r1, [pc, r1]
		   0x010F36AC:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010F36B0:  001091E5     LDR r1, [r1]
		   0x010F36B4:  000052E3     CMPS r0, r2, 0x0
		   0x010F36B8:  0700000A     BEQ $+0x24  // if (==) goto 0x010F36DC
		   // 
		   // ──── Block 32 else (r2 != r2, 0x1) ────────────────────
		   0x010F36BC:  583090E5     LDR r3, [r0, 0x58]
		   0x010F36C0:  043083E2     ADD r3, r3, 0x4
		   0x010F36C4:  046013E5     LDR r6, [r3, -0x4]
		   0x010F36C8:  010056E1     CMPS r0, r6, r1
		   0x010F36CC:  0600000A     BEQ $+0x20  // if (==) goto 0x010F36EC
		   // 
		   // ──── Block 33 else (r2 != r2, 0x1) ────────────────────
		   0x010F36D0:  012052E2     SUBS r2, r2, 0x1
		   0x010F36D4:  083083E2     ADD r3, r3, 0x8
		   0x010F36D8:  F9FFFF1A     BNE $-0x14
		   // ──── Block 34 (from 2 paths) ──────────────────
		   0x010F36DC:  0700A0E1     MOV r0, r7
		   0x010F36E0:  0020A0E3     MOV r2, 0x0
		   0x010F36E4:  E78DFAEB     BL $-0x15c85c
		   0x010F36E8:  020000EA     B $+0x10  // goto 0x010F36F8
		   // ──── Block 35 if (r2 == r2, 0x1) ────────────────────
		   0x010F36EC:  001093E5     LDR r1, [r3]
		   0x010F36F0:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010F36F4:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 36 ──────────────────────────────
		   0x010F36F8:  D020C0E1     LDRD r2, r3, [r0]
		   0x010F36FC:  0700A0E1     MOV r0, r7
		   0x010F3700:  0310A0E1     MOV r1, r3
		   0x010F3704:  32FF2FE1     BLX r2
		   0x010F3708:  0070A0E1     MOV r7, r0
		   0x010F370C:  000050E3     CMPS r0, r0, 0x0
		   0x010F3710:  0000001A     BNE $+0x8  // if (!=) goto 0x010F3718
		   // 
		   // ──── Block 37 else (r2 == r2, 0x1) ────────────────────
		   0x010F3714:  2D9FF9EB     BL $-0x198344
		   // ──── Block 38 if (r2 != r2, 0x1) ────────────────────
		   0x010F3718:  0700A0E1     MOV r0, r7
		   0x010F371C:  0A10A0E1     MOV r1, r10
		   0x010F3720:  0020A0E3     MOV r2, 0x0
		   0x010F3724:  831D10EB     BL $+0x407614  // CALL → ItemPack.TryGetItemObject
		   0x010F3728:  000050E3     CMPS r0, r0, 0x0
		   0x010F372C:  1500000A     BEQ $+0x5c  // if (==) goto 0x010F3788
		   // 
		   // ──── Block 39 else (r2 != r2, 0x1) ────────────────────
		   0x010F3730:  2C409BE5     LDR r4, [fp, 0x2c]
		   0x010F3734:  000054E3     CMPS r0, r4, 0x0
		   0x010F3738:  0000001A     BNE $+0x8  // if (!=) goto 0x010F3740
		   // 
		   // ──── Block 40 else (r2 == r2, 0x1) ────────────────────
		   0x010F373C:  239FF9EB     BL $-0x19836c
		   // ──── Block 41 if (r2 != r2, 0x1) ────────────────────
		   0x010F3740:  100094E5     LDR r0, [r4, 0x10]
		   0x010F3744:  088094E5     LDR r8, [r4, 0x8]
		   0x010F3748:  0C6094E5     LDR r6, [r4, 0xc]
		   0x010F374C:  010080E2     ADD r0, r0, 0x1
		   0x010F3750:  C4129FE5     LDR r1, [pc, 0x2c4]
		   0x010F3754:  000058E3     CMPS r0, r8, 0x0
		   0x010F3758:  01109FE7     LDR r1, [pc, r1]
		   0x010F375C:  100084E5     STR r0, [r4, 0x10]
		   0x010F3760:  005091E5     LDR r5, [r1]
		   0x010F3764:  0000001A     BNE $+0x8  // if (!=) goto 0x010F376C
		   // 
		   // ──── Block 42 else (r2 == r2, 0x1) ────────────────────
		   0x010F3768:  189FF9EB     BL $-0x198398
		   // ──── Block 43 if (r2 != r2, 0x1) ────────────────────
		   0x010F376C:  0C0098E5     LDR r0, [r8, 0xc]
		   0x010F3770:  000056E1     CMPS r0, r6, r0
		   0x010F3774:  2300002A     BHS $+0x94  // if (>= (unsigned)) goto 0x010F3808
		   // 
		   // ──── Block 44 else (r2 < (unsigned) r2, 0x1) ────────────────────
		   0x010F3778:  010086E2     ADD r0, r6, 0x1
		   0x010F377C:  0C0084E5     STR r0, [r4, 0xc]
		   0x010F3780:  060188E0     ADD r0, r8, r6, lsl 2
		   0x010F3784:  1C0000EA     B $+0x78  // goto 0x010F37FC
		   // ──── Block 45 if (r2 == r2, 0x1) ────────────────────
		   0x010F3788:  000057E3     CMPS r0, r7, 0x0
		   0x010F378C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F3794
		   // 
		   // ──── Block 46 else (r2 == r2, 0x1) ────────────────────
		   0x010F3790:  0E9FF9EB     BL $-0x1983c0
		   // ──── Block 47 if (r2 != r2, 0x1) ────────────────────
		   0x010F3794:  0700A0E1     MOV r0, r7
		   0x010F3798:  0010A0E3     MOV r1, 0x0
		   0x010F379C:  8B2010EB     BL $+0x408234  // CALL → ItemPack.IsItCurrency
		   0x010F37A0:  000050E3     CMPS r0, r0, 0x0
		   0x010F37A4:  2A00000A     BEQ $+0xb0  // if (==) goto 0x010F3854
		   // 
		   // ──── Block 48 else (r2 != r2, 0x1) ────────────────────
		   0x010F37A8:  2C409BE5     LDR r4, [fp, 0x2c]
		   0x010F37AC:  000054E3     CMPS r0, r4, 0x0
		   0x010F37B0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F37B8
		   // 
		   // ──── Block 49 else (r2 == r2, 0x1) ────────────────────
		   0x010F37B4:  059FF9EB     BL $-0x1983e4
		   // ──── Block 50 if (r2 != r2, 0x1) ────────────────────
		   0x010F37B8:  100094E5     LDR r0, [r4, 0x10]
		   0x010F37BC:  086094E5     LDR r6, [r4, 0x8]
		   0x010F37C0:  0C5094E5     LDR r5, [r4, 0xc]
		   0x010F37C4:  010080E2     ADD r0, r0, 0x1
		   0x010F37C8:  50129FE5     LDR r1, [pc, 0x250]
		   0x010F37CC:  000056E3     CMPS r0, r6, 0x0
		   0x010F37D0:  01109FE7     LDR r1, [pc, r1]
		   0x010F37D4:  100084E5     STR r0, [r4, 0x10]
		   0x010F37D8:  008091E5     LDR r8, [r1]
		   0x010F37DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F37E4
		   // 
		   // ──── Block 51 else (r2 == r2, 0x1) ────────────────────
		   0x010F37E0:  FA9EF9EB     BL $-0x198410
		   // ──── Block 52 if (r2 != r2, 0x1) ────────────────────
		   0x010F37E4:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010F37E8:  000055E1     CMPS r0, r5, r0
		   0x010F37EC:  0C00002A     BHS $+0x38  // if (>= (unsigned)) goto 0x010F3824
		   // 
		   // ──── Block 53 else (r2 < (unsigned) r2, 0x1) ────────────────────
		   0x010F37F0:  010085E2     ADD r0, r5, 0x1
		   0x010F37F4:  0C0084E5     STR r0, [r4, 0xc]
		   0x010F37F8:  050186E0     ADD r0, r6, r5, lsl 2
		   // ──── Block 54 ──────────────────────────────
		   0x010F37FC:  100080E2     ADD r0, r0, 0x10
		   0x010F3800:  007080E5     STR r7, [r0]
		   0x010F3804:  0C0000EA     B $+0x38  // goto 0x010F383C
		   // ──── Block 55 if (r2 >= (unsigned) r2, 0x1) ────────────────────
		   0x010F3808:  100095E5     LDR r0, [r5, 0x10]
		   0x010F380C:  600090E5     LDR r0, [r0, 0x60]
		   0x010F3810:  382090E5     LDR r2, [r0, 0x38]
		   0x010F3814:  0400A0E1     MOV r0, r4
		   0x010F3818:  0710A0E1     MOV r1, r7
		   0x010F381C:  E6FC6BEB     BL $+0x1aff3a0  // CALL → List<object>.AddWithResize
		   0x010F3820:  050000EA     B $+0x1c  // goto 0x010F383C
		   // ──── Block 56 if (r2 >= (unsigned) r2, 0x1) ────────────────────
		   0x010F3824:  100098E5     LDR r0, [r8, 0x10]
		   0x010F3828:  600090E5     LDR r0, [r0, 0x60]
		   0x010F382C:  382090E5     LDR r2, [r0, 0x38]
		   0x010F3830:  0400A0E1     MOV r0, r4
		   0x010F3834:  0710A0E1     MOV r1, r7
		   0x010F3838:  DFFC6BEB     BL $+0x1aff384  // CALL → List<object>.AddWithResize
		   // ──── Block 57 ──────────────────────────────
		   0x010F383C:  10709DE5     LDR r7, [sp, 0x10]
		   0x010F3840:  75FFFFEA     B $-0x224
		   // ──── Block 58 if (r2 == r2, 0x1) ────────────────────
		   0x010F3844:  0140A0E3     MOV r4, 0x1
		   0x010F3848:  0050A0E3     MOV r5, 0x0
		   0x010F384C:  10608DE2     ADD r6, sp, 0x10
		   0x010F3850:  1F0000EA     B $+0x84  // goto 0x010F38D4
		   // ──── Block 59 if (r2 == r2, 0x1) ────────────────────
		   0x010F3854:  000057E3     CMPS r0, r7, 0x0
		   0x010F3858:  0000001A     BNE $+0x8  // if (!=) goto 0x010F3860
		   // 
		   // ──── Block 60 else (r2 == r2, 0x1) ────────────────────
		   0x010F385C:  DB9EF9EB     BL $-0x19848c
		   // ──── Block 61 if (r2 != r2, 0x1) ────────────────────
		   0x010F3860:  BC019FE5     LDR r0, [pc, 0x1bc]
		   0x010F3864:  00009FE7     LDR r0, [pc, r0]
		   0x010F3868:  081097E5     LDR r1, [r7, 0x8]
		   0x010F386C:  000090E5     LDR r0, [r0]
		   0x010F3870:  0020A0E3     MOV r2, 0x0
		   0x010F3874:  B15776EB     BL $+0x1d95ecc  // CALL → String.Concat
		   0x010F3878:  0010A0E1     MOV r1, r0
		   0x010F387C:  00009DE5     LDR r0, [sp]
		   0x010F3880:  10608DE2     ADD r6, sp, 0x10
		   0x010F3884:  001080E5     STR r1, [r0]
		   0x010F3888:  98019FE5     LDR r0, [pc, 0x198]
		   0x010F388C:  00009FE7     LDR r0, [pc, r0]
		   0x010F3890:  000090E5     LDR r0, [r0]
		   0x010F3894:  0720A0E1     MOV r2, r7
		   0x010F3898:  0030A0E3     MOV r3, 0x0
		   0x010F389C:  589976EB     BL $+0x1da6568  // CALL → String.Format
		   0x010F38A0:  0040A0E1     MOV r4, r0
		   0x010F38A4:  80019FE5     LDR r0, [pc, 0x180]
		   0x010F38A8:  00009FE7     LDR r0, [pc, r0]
		   0x010F38AC:  000090E5     LDR r0, [r0]
		   0x010F38B0:  741090E5     LDR r1, [r0, 0x74]
		   0x010F38B4:  000051E3     CMPS r0, r1, 0x0
		   0x010F38B8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F38C0
		   // 
		   // ──── Block 62 else (r2 == r2, 0x1) ────────────────────
		   0x010F38BC:  749EF9EB     BL $-0x198628
		   // ──── Block 63 if (r2 != r2, 0x1) ────────────────────
		   0x010F38C0:  0050A0E3     MOV r5, 0x0
		   0x010F38C4:  0400A0E1     MOV r0, r4
		   0x010F38C8:  0010A0E3     MOV r1, 0x0
		   0x010F38CC:  D0113CEB     BL $+0xf04748  // CALL → sub_1FF8014
		   0x010F38D0:  0040A0E3     MOV r4, 0x0
		   // ──── Block 64 ──────────────────────────────
		   0x010F38D4:  006096E5     LDR r6, [r6]
		   0x010F38D8:  000056E3     CMPS r0, r6, 0x0
		   0x010F38DC:  1900000A     BEQ $+0x6c  // if (==) goto 0x010F3948
		   // 
		   // ──── Block 65 else (r2 != r2, 0x1) ────────────────────
		   0x010F38E0:  000096E5     LDR r0, [r6]
		   0x010F38E4:  44119FE5     LDR r1, [pc, 0x144]
		   0x010F38E8:  01109FE7     LDR r1, [pc, r1]
		   0x010F38EC:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010F38F0:  001091E5     LDR r1, [r1]
		   0x010F38F4:  000052E3     CMPS r0, r2, 0x0
		   0x010F38F8:  0700000A     BEQ $+0x24  // if (==) goto 0x010F391C
		   // 
		   // ──── Block 66 else (r2 != r2, 0x1) ────────────────────
		   0x010F38FC:  583090E5     LDR r3, [r0, 0x58]
		   0x010F3900:  043083E2     ADD r3, r3, 0x4
		   0x010F3904:  047013E5     LDR r7, [r3, -0x4]
		   0x010F3908:  010057E1     CMPS r0, r7, r1
		   0x010F390C:  0600000A     BEQ $+0x20  // if (==) goto 0x010F392C
		   // 
		   // ──── Block 67 else (r2 != r2, 0x1) ────────────────────
		   0x010F3910:  012052E2     SUBS r2, r2, 0x1
		   0x010F3914:  083083E2     ADD r3, r3, 0x8
		   0x010F3918:  F9FFFF1A     BNE $-0x14
		   // ──── Block 68 (from 2 paths) ──────────────────
		   0x010F391C:  0600A0E1     MOV r0, r6
		   0x010F3920:  0020A0E3     MOV r2, 0x0
		   0x010F3924:  578DFAEB     BL $-0x15ca9c
		   0x010F3928:  020000EA     B $+0x10  // goto 0x010F3938
		   // ──── Block 69 if (r2 == r2, 0x1) ────────────────────
		   0x010F392C:  001093E5     LDR r1, [r3]
		   0x010F3930:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010F3934:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 70 ──────────────────────────────
		   0x010F3938:  D020C0E1     LDRD r2, r3, [r0]
		   0x010F393C:  0600A0E1     MOV r0, r6
		   0x010F3940:  0310A0E1     MOV r1, r3
		   0x010F3944:  32FF2FE1     BLX r2
		   // ──── Block 71 if (r2 == r2, 0x1) ────────────────────
		   0x010F3948:  000055E3     CMPS r0, r5, 0x0
		   0x010F394C:  0100000A     BEQ $+0xc  // if (==) goto 0x010F3958
		   // 
		   // ──── Block 72 else (r2 != r2, 0x1) ────────────────────
		   0x010F3950:  0500A0E1     MOV r0, r5
		   0x010F3954:  9C9EF9EB     BL $-0x198588
		   // ──── Block 73 if (r2 == r2, 0x1) ────────────────────
		   0x010F3958:  0400A0E1     MOV r0, r4
		   0x010F395C:  14D08DE2     ADD sp, sp, 0x14
		   0x010F3960:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010F3964:  0A0000EA     B $+0x30  // goto 0x010F3994
		   0x010F3968:  090000EA     B $+0x2c  // goto 0x010F3994
		   0x010F396C:  080000EA     B $+0x28  // goto 0x010F3994
		   0x010F3970:  070000EA     B $+0x24  // goto 0x010F3994
		   0x010F3974:  060000EA     B $+0x20  // goto 0x010F3994
		   0x010F3978:  050000EA     B $+0x1c  // goto 0x010F3994
		   0x010F397C:  040000EA     B $+0x18  // goto 0x010F3994
		   0x010F3980:  030000EA     B $+0x14  // goto 0x010F3994
		   0x010F3984:  020000EA     B $+0x10  // goto 0x010F3994
		   0x010F3988:  010000EA     B $+0xc  // goto 0x010F3994
		   0x010F398C:  000000EA     B $+0x8  // goto 0x010F3994
		   0x010F3990:  FFFFFFEA     B $+0x4  // goto 0x010F3994
		   // ──── Block 86 ──────────────────────────────
		   0x010F3994:  010051E3     CMPS r0, r1, 0x1
		   0x010F3998:  0600001A     BNE $+0x20  // if (!=) goto 0x010F39B8
		   // 
		   // ──── Block 87 else (r2 == r2, 0x1) ────────────────────
		   0x010F399C:  49C4FCEB     BL $-0xceed4
		   0x010F39A0:  005090E5     LDR r5, [r0]
		   0x010F39A4:  04508DE5     STR r5, [sp, 0x4]
		   0x010F39A8:  7AC4FCEB     BL $-0xcee10
		   0x010F39AC:  08609DE5     LDR r6, [sp, 0x8]
		   0x010F39B0:  0140A0E3     MOV r4, 0x1
		   0x010F39B4:  C6FFFFEA     B $-0xe0
		   // ──── Block 88 if (r2 != r2, 0x1) ────────────────────
		   0x010F39B8:  04008DE2     ADD r0, sp, 0x4
		   0x010F39BC:  8B70EDEB     BL $-0x4a3dcc
		   0x010F39C0:  78C4FCEB     BL $-0xcee18
		   0x010F39C4:  7670EDEB     BL $-0x4a3e20
		   0x010F39C8:  50891303     TSTSEQ r8, r3, 0x140000
		   0x010F39CC:  C031F802     RSCSEQ r3, r8, 0x30
		   0x010F39D0:  EC31F802     RSCSEQ r3, r8, 0x3b
		   0x010F39D4:  1C5FF802     RSCSEQ r5, r8, 0x70
		   0x010F39D8:  145FF802     RSCSEQ r5, r8, 0x50
		   0x010F39DC:  FC34F802     RSCSEQ r3, r8, 0xfc000000
		   0x010F39E0:  1061F802     RSCSEQ r6, r8, 0x4
		   0x010F39E4:  0061F802     RSCSEQ r6, r8, 0x0
		   0x010F39E8:  FC60F802     RSCSEQ r6, r8, 0xfc
		   0x010F39EC:  F460F802     RSCSEQ r6, r8, 0xf4
		   0x010F39F0:  EC60F802     RSCSEQ r6, r8, 0xec
		   0x010F39F4:  E460F802     RSCSEQ r6, r8, 0xe4
		   0x010F39F8:  DC60F802     RSCSEQ r6, r8, 0xdc
		   0x010F39FC:  5C32F802     RSCSEQ r3, r8, 0xc0000005
		   0x010F3A00:  4C60F802     RSCSEQ r6, r8, 0x4c
		   0x010F3A04:  905FF802     RSCSEQ r5, r8, 0x240
		   0x010F3A08:  885FF802     RSCSEQ r5, r8, 0x220
		   0x010F3A0C:  D42FF802     RSCSEQ r2, r8, 0x350
		   0x010F3A10:  C45DF802     RSCSEQ r5, r8, 0x3100
		   0x010F3A14:  DC32F802     RSCSEQ r3, r8, 0xc000000d
		   0x010F3A18:  585CF802     RSCSEQ r5, r8, 0x5800
		   0x010F3A1C:  B85DF802     RSCSEQ r5, r8, 0x2e00
		   0x010F3A20:  405DF802     RSCSEQ r5, r8, 0x1000
		   0x010F3A24:  C45CF802     RSCSEQ r5, r8, 0xc400
		   0x010F3A28:  945CF802     RSCSEQ r5, r8, 0x9400
		   0x010F3A2C:  E02CF802     RSCSEQ r2, r8, 0xe000
		   0x010F3A30:  D82CF802     RSCSEQ r2, r8, 0xd800
		*/
	}

	// RVA: 0x10F3A34 Offset: 0x10F3A34 VA: 0x10F3A34
	public void ResetRewards() {
		/* Disassembly (ARM32, 30 instructions, 0x78 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F3A34:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F3A38:  64509FE5     LDR r5, [pc, 0x64]
		   0x010F3A3C:  0040A0E1     MOV r4, r0
		   0x010F3A40:  05508FE0     ADD r5, pc, r5
		   0x010F3A44:  0000D5E5     LDRB r0, [r5]
		   0x010F3A48:  000050E3     CMPS r0, r0, 0x0
		   0x010F3A4C:  0400001A     BNE $+0x18  // if (!=) goto 0x010F3A64
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F3A50:  50009FE5     LDR r0, [pc, 0x50]
		   0x010F3A54:  00009FE7     LDR r0, [pc, r0]
		   0x010F3A58:  C09DF9EB     BL $-0x1988f8
		   0x010F3A5C:  0100A0E3     MOV r0, 0x1
		   0x010F3A60:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F3A64:  2C4094E5     LDR r4, [r4, 0x2c]
		   0x010F3A68:  000054E3     CMPS r0, r4, 0x0
		   0x010F3A6C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F3A74
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F3A70:  569EF9EB     BL $-0x1986a0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F3A74:  DC20C4E1     LDRD r2, r3, [r4, 0xc]
		   0x010F3A78:  011083E2     ADD r1, r3, 0x1
		   0x010F3A7C:  0000A0E3     MOV r0, 0x0
		   0x010F3A80:  010052E3     CMPS r0, r2, 0x1
		   0x010F3A84:  FC00C4E1     STRD r0, r1, [r4, 0xc]
		   0x010F3A88:  040000BA     BLT $+0x18  // if (<) goto 0x010F3AA0
		   // 
		   // ──── Block 5 else (>=) ────────────────────
		   0x010F3A8C:  080094E5     LDR r0, [r4, 0x8]
		   0x010F3A90:  0010A0E3     MOV r1, 0x0
		   0x010F3A94:  0030A0E3     MOV r3, 0x0
		   0x010F3A98:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010F3A9C:  65F37DEA     B $+0x1f7cd9c  // TAIL CALL → Array.Clear
		   // ──── Block 6 if (<) ────────────────────
		   0x010F3AA0:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010F3AA4:  C5821303     TSTSEQ r8, r3, 0x5000000c
		   0x010F3AA8:  C45AF802     RSCSEQ r5, r8, 0xc4000
		*/
	}

	// RVA: 0x10EE948 Offset: 0x10EE948 VA: 0x10EE948
	public Goal Clone() {
		/* Disassembly (ARM32, 50 instructions, 0xC8 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE948:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010EE94C:  24D04DE2     SUB sp, sp, 0x24
		   0x010EE950:  84539FE5     LDR r5, [pc, 0x384]
		   0x010EE954:  0040A0E1     MOV r4, r0
		   0x010EE958:  05508FE0     ADD r5, pc, r5
		   0x010EE95C:  0000D5E5     LDRB r0, [r5]
		   0x010EE960:  000050E3     CMPS r0, r0, 0x0
		   0x010EE964:  2800001A     BNE $+0xa8  // if (!=) goto 0x010EEA0C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE968:  70039FE5     LDR r0, [pc, 0x370]
		   0x010EE96C:  00009FE7     LDR r0, [pc, r0]
		   0x010EE970:  FAB1F9EB     BL $-0x193810
		   0x010EE974:  68039FE5     LDR r0, [pc, 0x368]
		   0x010EE978:  00009FE7     LDR r0, [pc, r0]
		   0x010EE97C:  F7B1F9EB     BL $-0x19381c
		   0x010EE980:  60039FE5     LDR r0, [pc, 0x360]
		   0x010EE984:  00009FE7     LDR r0, [pc, r0]
		   0x010EE988:  F4B1F9EB     BL $-0x193828
		   0x010EE98C:  58039FE5     LDR r0, [pc, 0x358]
		   0x010EE990:  00009FE7     LDR r0, [pc, r0]
		   0x010EE994:  F1B1F9EB     BL $-0x193834
		   0x010EE998:  50039FE5     LDR r0, [pc, 0x350]
		   0x010EE99C:  00009FE7     LDR r0, [pc, r0]
		   0x010EE9A0:  EEB1F9EB     BL $-0x193840
		   0x010EE9A4:  48039FE5     LDR r0, [pc, 0x348]
		   0x010EE9A8:  00009FE7     LDR r0, [pc, r0]
		   0x010EE9AC:  EBB1F9EB     BL $-0x19384c
		   0x010EE9B0:  40039FE5     LDR r0, [pc, 0x340]
		   0x010EE9B4:  00009FE7     LDR r0, [pc, r0]
		   0x010EE9B8:  E8B1F9EB     BL $-0x193858
		   0x010EE9BC:  38039FE5     LDR r0, [pc, 0x338]
		   0x010EE9C0:  00009FE7     LDR r0, [pc, r0]
		   0x010EE9C4:  E5B1F9EB     BL $-0x193864
		   0x010EE9C8:  30039FE5     LDR r0, [pc, 0x330]
		   0x010EE9CC:  00009FE7     LDR r0, [pc, r0]
		   0x010EE9D0:  E2B1F9EB     BL $-0x193870
		   0x010EE9D4:  28039FE5     LDR r0, [pc, 0x328]
		   0x010EE9D8:  00009FE7     LDR r0, [pc, r0]
		   0x010EE9DC:  DFB1F9EB     BL $-0x19387c
		   0x010EE9E0:  20039FE5     LDR r0, [pc, 0x320]
		   0x010EE9E4:  00009FE7     LDR r0, [pc, r0]
		   0x010EE9E8:  DCB1F9EB     BL $-0x193888
		   0x010EE9EC:  18039FE5     LDR r0, [pc, 0x318]
		   0x010EE9F0:  00009FE7     LDR r0, [pc, r0]
		   0x010EE9F4:  D9B1F9EB     BL $-0x193894
		   0x010EE9F8:  10039FE5     LDR r0, [pc, 0x310]
		   0x010EE9FC:  00009FE7     LDR r0, [pc, r0]
		   0x010EEA00:  D6B1F9EB     BL $-0x1938a0
		   0x010EEA04:  0100A0E3     MOV r0, 0x1
		   0x010EEA08:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EEA0C:  00039FE5     LDR r0, [pc, 0x300]
		*/
	}

	// RVA: 0x10F2AF8 Offset: 0x10F2AF8 VA: 0x10F2AF8
	private void Parse() {
		/* Disassembly (ARM32, 81 instructions, 0x144 bytes):
		   // CFG: 22 blocks, 22 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F2AF8:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010F2AFC:  08D04DE2     SUB sp, sp, 0x8
		   0x010F2B00:  28419FE5     LDR r4, [pc, 0x128]
		   0x010F2B04:  0090A0E1     MOV sb, r0
		   0x010F2B08:  04408FE0     ADD r4, pc, r4
		   0x010F2B0C:  0000D4E5     LDRB r0, [r4]
		   0x010F2B10:  000050E3     CMPS r0, r0, 0x0
		   0x010F2B14:  0400001A     BNE $+0x18  // if (!=) goto 0x010F2B2C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F2B18:  14019FE5     LDR r0, [pc, 0x114]
		   0x010F2B1C:  00009FE7     LDR r0, [pc, r0]
		   0x010F2B20:  8EA1F9EB     BL $-0x1979c0
		   0x010F2B24:  0100A0E3     MOV r0, 0x1
		   0x010F2B28:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F2B2C:  200099E5     LDR r0, [sb, 0x20]
		   0x010F2B30:  0010A0E3     MOV r1, 0x0
		   0x010F2B34:  04108DE5     STR r1, [sp, 0x4]
		   0x010F2B38:  000050E3     CMPS r0, r0, 0x0
		   0x010F2B3C:  0C009015     LDRNE r0, [r0, 0xc]
		   0x010F2B40:  00005013     CMPSNE r0, r0, 0x0
		   0x010F2B44:  3700001A     BNE $+0xe4  // if (!=) goto 0x010F2C28
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F2B48:  085099E5     LDR r5, [sb, 0x8]
		   0x010F2B4C:  000055E3     CMPS r0, r5, 0x0
		   0x010F2B50:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2B58
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F2B54:  1DA2F9EB     BL $-0x197784
		   // ──── Block 5 if (!=) ────────────────────
		   0x010F2B58:  0500A0E1     MOV r0, r5
		   0x010F2B5C:  2F10A0E3     MOV r1, 0x2f
		   0x010F2B60:  0020A0E3     MOV r2, 0x0
		   0x010F2B64:  0030A0E3     MOV r3, 0x0
		   0x010F2B68:  D3A376EB     BL $+0x1da8f54  // CALL → String.Split
		   0x010F2B6C:  00A0A0E1     MOV r10, r0
		   0x010F2B70:  000050E3     CMPS r0, r0, 0x0
		   0x010F2B74:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2B7C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010F2B78:  14A2F9EB     BL $-0x1977a8
		   // ──── Block 7 if (!=) ────────────────────
		   0x010F2B7C:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x010F2B80:  00009FE7     LDR r0, [pc, r0]
		   0x010F2B84:  0C109AE5     LDR r1, [r10, 0xc]
		   0x010F2B88:  000090E5     LDR r0, [r0]
		   0x010F2B8C:  96A1F9EB     BL $-0x1979a0
		   0x010F2B90:  0C109AE5     LDR r1, [r10, 0xc]
		   0x010F2B94:  200089E5     STR r0, [sb, 0x20]
		   0x010F2B98:  010051E3     CMPS r0, r1, 0x1
		   0x010F2B9C:  210000BA     BLT $+0x8c  // if (<) goto 0x010F2C28
		   // 
		   // ──── Block 8 else (>=) ────────────────────
		   0x010F2BA0:  04808DE2     ADD r8, sp, 0x4
		   0x010F2BA4:  0400A0E3     MOV r0, 0x4
		   0x010F2BA8:  044040E2     SUB r4, r0, 0x4
		   0x010F2BAC:  0070A0E1     MOV r7, r0
		   0x010F2BB0:  040051E1     CMPS r0, r1, r4
		   0x010F2BB4:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010F2BBC
		   // 
		   // ──── Block 9 else (<= (unsigned)) ────────────────────
		   0x010F2BB8:  05A2F9EB     BL $-0x1977e4
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x010F2BBC:  07019AE7     LDR r0, [r10, r7, lsl 2]
		   0x010F2BC0:  0810A0E1     MOV r1, r8
		   0x010F2BC4:  0020A0E3     MOV r2, 0x0
		   0x010F2BC8:  27487DEB     BL $+0x1f520a4  // CALL → Int32.TryParse
		   0x010F2BCC:  206099E5     LDR r6, [sb, 0x20]
		   0x010F2BD0:  000050E3     CMPS r0, r0, 0x0
		   0x010F2BD4:  0500000A     BEQ $+0x1c  // if (==) goto 0x010F2BF0
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010F2BD8:  04509DE5     LDR r5, [sp, 0x4]
		   0x010F2BDC:  000056E3     CMPS r0, r6, 0x0
		   0x010F2BE0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2BE8
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010F2BE4:  F9A1F9EB     BL $-0x197814
		   // ──── Block 13 if (!=) ────────────────────
		   0x010F2BE8:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010F2BEC:  040000EA     B $+0x18  // goto 0x010F2C04
		   // ──── Block 14 if (==) ────────────────────
		   0x010F2BF0:  000056E3     CMPS r0, r6, 0x0
		   0x010F2BF4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2BFC
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010F2BF8:  F4A1F9EB     BL $-0x197828
		   // ──── Block 16 if (!=) ────────────────────
		   0x010F2BFC:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010F2C00:  0050E0E3     MVN r5, r0, 0x0
		   // ──── Block 17 ──────────────────────────────
		   0x010F2C04:  040050E1     CMPS r0, r0, r4
		   0x010F2C08:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010F2C10
		   // 
		   // ──── Block 18 else (<= (unsigned)) ────────────────────
		   0x010F2C0C:  F0A1F9EB     BL $-0x197838
		   // ──── Block 19 if (> (unsigned)) ────────────────────
		   0x010F2C10:  075186E7     STR r5, [r6, r7, lsl 2]
		   0x010F2C14:  010087E2     ADD r0, r7, 0x1
		   0x010F2C18:  032047E2     SUB r2, r7, 0x3
		   0x010F2C1C:  0C109AE5     LDR r1, [r10, 0xc]
		   0x010F2C20:  010052E1     CMPS r0, r2, r1
		   0x010F2C24:  DFFFFFBA     BLT $-0x7c
		   // ──── Block 20 (from 3 paths) ──────────────────
		   0x010F2C28:  08D08DE2     ADD sp, sp, 0x8
		   0x010F2C2C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010F2C30:  FF911303     TSTSEQ sb, r3, 0xc000003f
		   0x010F2C34:  E469F802     RSCSEQ r6, r8, 0x390000
		   0x010F2C38:  8069F802     RSCSEQ r6, r8, 0x200000
		*/
	}

	// RVA: 0x10F3C58 Offset: 0x10F3C58 VA: 0x10F3C58 Slot: 3
	public override string ToString() {
		/* Disassembly (ARM32, 34 instructions, 0x88 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F3C58:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F3C5C:  08D04DE2     SUB sp, sp, 0x8
		   0x010F3C60:  64509FE5     LDR r5, [pc, 0x64]
		   0x010F3C64:  0040A0E1     MOV r4, r0
		   0x010F3C68:  05508FE0     ADD r5, pc, r5
		   0x010F3C6C:  0000D5E5     LDRB r0, [r5]
		   0x010F3C70:  000050E3     CMPS r0, r0, 0x0
		   0x010F3C74:  0700001A     BNE $+0x24  // if (!=) goto 0x010F3C98
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F3C78:  50009FE5     LDR r0, [pc, 0x50]
		   0x010F3C7C:  00009FE7     LDR r0, [pc, r0]
		   0x010F3C80:  369DF9EB     BL $-0x198b20
		   0x010F3C84:  48009FE5     LDR r0, [pc, 0x48]
		   0x010F3C88:  00009FE7     LDR r0, [pc, r0]
		   0x010F3C8C:  339DF9EB     BL $-0x198b2c
		   0x010F3C90:  0100A0E3     MOV r0, 0x1
		   0x010F3C94:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F3C98:  38009FE5     LDR r0, [pc, 0x38]
		   0x010F3C9C:  0050A0E3     MOV r5, 0x0
		   0x010F3CA0:  00009FE7     LDR r0, [pc, r0]
		   0x010F3CA4:  002090E5     LDR r2, [r0]
		   0x010F3CA8:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x010F3CAC:  00009FE7     LDR r0, [pc, r0]
		   0x010F3CB0:  081094E5     LDR r1, [r4, 0x8]
		   0x010F3CB4:  283094E5     LDR r3, [r4, 0x28]
		   0x010F3CB8:  000090E5     LDR r0, [r0]
		   0x010F3CBC:  00508DE5     STR r5, [sp]
		   0x010F3CC0:  319776EB     BL $+0x1da5ccc  // CALL → String.Concat
		   0x010F3CC4:  08D08DE2     ADD sp, sp, 0x8
		   0x010F3CC8:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010F3CCC:  A0801303     TSTSEQ r8, r3, 0xa0
		   0x010F3CD0:  B43BF802     RSCSEQ r3, r8, 0x2d000
		   0x010F3CD4:  A458F802     RSCSEQ r5, r8, 0xa40000
		   0x010F3CD8:  903BF802     RSCSEQ r3, r8, 0x24000
		   0x010F3CDC:  8058F802     RSCSEQ r5, r8, 0x800000
		*/
	}

	// RVA: 0x10F3AAC Offset: 0x10F3AAC VA: 0x10F3AAC
	public void .ctor() {
		/* Disassembly (ARM32, 29 instructions, 0x74 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F3AAC:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010F3AB0:  20D04DE2     SUB sp, sp, 0x20
		   0x010F3AB4:  68519FE5     LDR r5, [pc, 0x168]
		   0x010F3AB8:  0040A0E1     MOV r4, r0
		   0x010F3ABC:  05508FE0     ADD r5, pc, r5
		   0x010F3AC0:  0000D5E5     LDRB r0, [r5]
		   0x010F3AC4:  000050E3     CMPS r0, r0, 0x0
		   0x010F3AC8:  1300001A     BNE $+0x54  // if (!=) goto 0x010F3B1C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F3ACC:  54019FE5     LDR r0, [pc, 0x154]
		   0x010F3AD0:  00009FE7     LDR r0, [pc, r0]
		   0x010F3AD4:  A19DF9EB     BL $-0x198974
		   0x010F3AD8:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x010F3ADC:  00009FE7     LDR r0, [pc, r0]
		   0x010F3AE0:  9E9DF9EB     BL $-0x198980
		   0x010F3AE4:  44019FE5     LDR r0, [pc, 0x144]
		   0x010F3AE8:  00009FE7     LDR r0, [pc, r0]
		   0x010F3AEC:  9B9DF9EB     BL $-0x19898c
		   0x010F3AF0:  3C019FE5     LDR r0, [pc, 0x13c]
		   0x010F3AF4:  00009FE7     LDR r0, [pc, r0]
		   0x010F3AF8:  989DF9EB     BL $-0x198998
		   0x010F3AFC:  34019FE5     LDR r0, [pc, 0x134]
		   0x010F3B00:  00009FE7     LDR r0, [pc, r0]
		   0x010F3B04:  959DF9EB     BL $-0x1989a4
		   0x010F3B08:  2C019FE5     LDR r0, [pc, 0x12c]
		   0x010F3B0C:  00009FE7     LDR r0, [pc, r0]
		   0x010F3B10:  929DF9EB     BL $-0x1989b0
		   0x010F3B14:  0100A0E3     MOV r0, 0x1
		   0x010F3B18:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F3B1C:  1C019FE5     LDR r0, [pc, 0x11c]
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class <>c // TypeDefIndex: 1204
{

	// Fields
	public static readonly Goal.<>c <>9; // 0x0
	public static Predicate<GoalTarget> <>9__20_0; // 0x4

	// Methods

	// RVA: 0x10F3CE0 Offset: 0x10F3CE0 VA: 0x10F3CE0
	private static void .cctor() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F3CE0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F3CE4:  4C409FE5     LDR r4, [pc, 0x4c]
		   0x010F3CE8:  04408FE0     ADD r4, pc, r4
		   0x010F3CEC:  0000D4E5     LDRB r0, [r4]
		   0x010F3CF0:  000050E3     CMPS r0, r0, 0x0
		   0x010F3CF4:  0400001A     BNE $+0x18  // if (!=) goto 0x010F3D0C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F3CF8:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010F3CFC:  00009FE7     LDR r0, [pc, r0]
		   0x010F3D00:  169DF9EB     BL $-0x198ba0
		   0x010F3D04:  0100A0E3     MOV r0, 0x1
		   0x010F3D08:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F3D0C:  2C509FE5     LDR r5, [pc, 0x2c]
		   0x010F3D10:  05509FE7     LDR r5, [pc, r5]
		   0x010F3D14:  000095E5     LDR r0, [r5]
		   0x010F3D18:  A99DF9EB     BL $-0x198954
		   0x010F3D1C:  0010A0E3     MOV r1, 0x0
		   0x010F3D20:  0040A0E1     MOV r4, r0
		   0x010F3D24:  B0857EEB     BL $+0x1fa16c8  // CALL → Object..ctor
		   0x010F3D28:  000095E5     LDR r0, [r5]
		   0x010F3D2C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F3D30:  004080E5     STR r4, [r0]
		   0x010F3D34:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010F3D38:  22801303     TSTSEQ r8, r3, 0x22
		   0x010F3D3C:  1058F802     RSCSEQ r5, r8, 0x100000
		   0x010F3D40:  FC57F802     RSCSEQ r5, r8, 0x3f00000
		*/
	}

	// RVA: 0x10F3D44 Offset: 0x10F3D44 VA: 0x10F3D44
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F3D44:  0010A0E3     MOV r1, 0x0
		   0x010F3D48:  A7857EEA     B $+0x1fa16a4  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F3D4C Offset: 0x10F3D4C VA: 0x10F3D4C
	internal bool <get_Ready>b__20_0(GoalTarget gt) {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F3D4C:  10402DE9     PUSH {r4, lr}
		   0x010F3D50:  0140A0E1     MOV r4, r1
		   0x010F3D54:  000051E3     CMPS r0, r1, 0x0
		   0x010F3D58:  0000001A     BNE $+0x8  // if (!=) goto 0x010F3D60
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F3D5C:  9B9DF9EB     BL $-0x19898c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F3D60:  DC20C4E1     LDRD r2, r3, [r4, 0xc]
		   0x010F3D64:  0000A0E3     MOV r0, 0x0
		   0x010F3D68:  020053E1     CMPS r0, r3, r2
		   0x010F3D6C:  010000A3     MOVGE r0, 0x1
		   0x010F3D70:  1080BDE8     POP {r4, pc}
		*/
	}
}
