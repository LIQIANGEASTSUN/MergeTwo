// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class GameStateSave : ISerializableToJson // TypeDefIndex: 1443
{

	// Fields
	public const string GAME_STATE_SAVE = "ProfileStorage_GameStateSave";
	[SerializeField]
	public string questIdx; // 0x8
	[SerializeField]
	public List<ItemDataSave> field; // 0xC
	private InventorySave inventorySave; // 0x10
	private Coroutine coroutine; // 0x14

	// Properties
	public List<ItemDataSave> Inventory { get; }
	[JsonIgnore]
	public JsonUtil.SerializerMode mode { get; }
	[JsonIgnore]
	public bool isEmpty { get; }
	[JsonIgnore]
	private string storageKey { get; }

	// Methods

	// RVA: 0x112468C Offset: 0x112468C VA: 0x112468C
	public List<ItemDataSave> get_Inventory() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0112468C:  10402DE9     PUSH {r4, lr}
		   0x01124690:  104090E5     LDR r4, [r0, 0x10]
		   0x01124694:  000054E3     CMPS r0, r4, 0x0
		   0x01124698:  0000001A     BNE $+0x8  // if (!=) goto 0x011246A0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0112469C:  4BDBF8EB     BL $-0x1c92cc
		   // ──── Block 2 if (!=) ────────────────────
		   0x011246A0:  080094E5     LDR r0, [r4, 0x8]
		   0x011246A4:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x1138D50 Offset: 0x1138D50 VA: 0x1138D50
	private static void .cctor() {
		/* Disassembly (ARM32, 48 instructions, 0xC0 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01138D50:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01138D54:  20D04DE2     SUB sp, sp, 0x20
		   0x01138D58:  18419FE5     LDR r4, [pc, 0x118]
		   0x01138D5C:  04408FE0     ADD r4, pc, r4
		   0x01138D60:  0000D4E5     LDRB r0, [r4]
		   0x01138D64:  000050E3     CMPS r0, r0, 0x0
		   0x01138D68:  0A00001A     BNE $+0x30  // if (!=) goto 0x01138D98
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01138D6C:  08019FE5     LDR r0, [pc, 0x108]
		   0x01138D70:  00009FE7     LDR r0, [pc, r0]
		   0x01138D74:  F988F8EB     BL $-0x1ddc14
		   0x01138D78:  00019FE5     LDR r0, [pc, 0x100]
		   0x01138D7C:  00009FE7     LDR r0, [pc, r0]
		   0x01138D80:  F688F8EB     BL $-0x1ddc20
		   0x01138D84:  F8009FE5     LDR r0, [pc, 0xf8]
		   0x01138D88:  00009FE7     LDR r0, [pc, r0]
		   0x01138D8C:  F388F8EB     BL $-0x1ddc2c
		   0x01138D90:  0100A0E3     MOV r0, 0x1
		   0x01138D94:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01138D98:  E8809FE5     LDR r8, [pc, 0xe8]
		   0x01138D9C:  0040A0E3     MOV r4, 0x0
		   0x01138DA0:  08809FE7     LDR r8, [pc, r8]
		   0x01138DA4:  14408DE5     STR r4, [sp, 0x14]
		   0x01138DA8:  10408DE5     STR r4, [sp, 0x10]
		   0x01138DAC:  000098E5     LDR r0, [r8]
		   0x01138DB0:  18408DE5     STR r4, [sp, 0x18]
		   0x01138DB4:  741090E5     LDR r1, [r0, 0x74]
		   0x01138DB8:  000051E3     CMPS r0, r1, 0x0
		   0x01138DBC:  0000001A     BNE $+0x8  // if (!=) goto 0x01138DC4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01138DC0:  3389F8EB     BL $-0x1ddb2c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01138DC4:  C0909FE5     LDR sb, [pc, 0xc0]
		   0x01138DC8:  0010A0E3     MOV r1, 0x0
		   0x01138DCC:  0020A0E3     MOV r2, 0x0
		   0x01138DD0:  09909FE7     LDR sb, [pc, sb]
		   0x01138DD4:  000099E5     LDR r0, [sb]
		   0x01138DD8:  DB86FDEB     BL $-0x9e48c
		   0x01138DDC:  ACA09FE5     LDR r10, [pc, 0xac]
		   0x01138DE0:  10608DE2     ADD r6, sp, 0x10
		   0x01138DE4:  0D50A0E1     MOV r5, sp
		   0x01138DE8:  0AA09FE7     LDR r10, [pc, r10]
		   0x01138DEC:  00009AE5     LDR r0, [r10]
		   0x01138DF0:  741090E5     LDR r1, [r0, 0x74]
		   0x01138DF4:  000051E3     CMPS r0, r1, 0x0
		   0x01138DF8:  0000001A     BNE $+0x8  // if (!=) goto 0x01138E00
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01138DFC:  2489F8EB     BL $-0x1ddb68
		   // ──── Block 6 if (!=) ────────────────────
		   0x01138E00:  0500A0E1     MOV r0, r5
		   0x01138E04:  0410A0E1     MOV r1, r4
		   0x01138E08:  0020A0E3     MOV r2, 0x0
		   0x01138E0C:  9C000FEB     BL $+0x3c0278  // CALL → FieldGroup.CreateSeasons
		*/
	}

	// RVA: 0x1123FB8 Offset: 0x1123FB8 VA: 0x1123FB8
	public void .ctor(string id) {
		/* Disassembly (ARM32, 49 instructions, 0xC4 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01123FB8:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01123FBC:  9C609FE5     LDR r6, [pc, 0x9c]
		   0x01123FC0:  0050A0E1     MOV r5, r0
		   0x01123FC4:  0140A0E1     MOV r4, r1
		   0x01123FC8:  06608FE0     ADD r6, pc, r6
		   0x01123FCC:  0000D6E5     LDRB r0, [r6]
		   0x01123FD0:  000050E3     CMPS r0, r0, 0x0
		   0x01123FD4:  0A00001A     BNE $+0x30  // if (!=) goto 0x01124004
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01123FD8:  84009FE5     LDR r0, [pc, 0x84]
		   0x01123FDC:  00009FE7     LDR r0, [pc, r0]
		   0x01123FE0:  5EDCF8EB     BL $-0x1c8e80
		   0x01123FE4:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x01123FE8:  00009FE7     LDR r0, [pc, r0]
		   0x01123FEC:  5BDCF8EB     BL $-0x1c8e8c
		   0x01123FF0:  74009FE5     LDR r0, [pc, 0x74]
		   0x01123FF4:  00009FE7     LDR r0, [pc, r0]
		   0x01123FF8:  58DCF8EB     BL $-0x1c8e98
		   0x01123FFC:  0100A0E3     MOV r0, 0x1
		   0x01124000:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01124004:  64009FE5     LDR r0, [pc, 0x64]
		   0x01124008:  00009FE7     LDR r0, [pc, r0]
		   0x0112400C:  000090E5     LDR r0, [r0]
		   0x01124010:  EBDCF8EB     BL $-0x1c8c4c
		   0x01124014:  0060A0E1     MOV r6, r0
		   0x01124018:  54009FE5     LDR r0, [pc, 0x54]
		   0x0112401C:  00009FE7     LDR r0, [pc, r0]
		   0x01124020:  001090E5     LDR r1, [r0]
		   0x01124024:  0600A0E1     MOV r0, r6
		   0x01124028:  E0386BEB     BL $+0x1ace388  // CALL → List<object>..ctor
		   0x0112402C:  44009FE5     LDR r0, [pc, 0x44]
		   0x01124030:  00009FE7     LDR r0, [pc, r0]
		   0x01124034:  0C6085E5     STR r6, [r5, 0xc]
		   0x01124038:  000090E5     LDR r0, [r0]
		   0x0112403C:  E0DCF8EB     BL $-0x1c8c78
		   0x01124040:  0060A0E1     MOV r6, r0
		   0x01124044:  925300EB     BL $+0x14e50  // CALL → InventorySave..ctor
		   0x01124048:  0500A0E1     MOV r0, r5
		   0x0112404C:  0010A0E3     MOV r1, 0x0
		   0x01124050:  106085E5     STR r6, [r5, 0x10]
		   0x01124054:  E4C47DEB     BL $+0x1f71398  // CALL → Object..ctor
		   0x01124058:  084085E5     STR r4, [r5, 0x8]
		   0x0112405C:  7080BDE8     POP {r4, r5, r6, pc}
		   0x01124060:  C67F1003     TSTSEQ r7, r0, 0x318
		   0x01124064:  BC5CF502     RSCSEQ r5, r5, 0xbc00
		   0x01124068:  9053F502     RSCSEQ r5, r5, 0x40000002
		   0x0112406C:  8853F502     RSCSEQ r5, r5, 0x20000002
		   0x01124070:  7453F502     RSCSEQ r5, r5, 0xd0000001
		   0x01124074:  5C53F502     RSCSEQ r5, r5, 0x70000001
		   0x01124078:  685CF502     RSCSEQ r5, r5, 0x6800
		*/
	}

	// RVA: 0x1138F20 Offset: 0x1138F20 VA: 0x1138F20 Slot: 4
	public JsonUtil.SerializerMode get_mode() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01138F20:  0100A0E3     MOV r0, 0x1
		   0x01138F24:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1138F28 Offset: 0x1138F28 VA: 0x1138F28
	public bool get_isEmpty() {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01138F28:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01138F2C:  80509FE5     LDR r5, [pc, 0x80]
		   0x01138F30:  0040A0E1     MOV r4, r0
		   0x01138F34:  05508FE0     ADD r5, pc, r5
		   0x01138F38:  0000D5E5     LDRB r0, [r5]
		   0x01138F3C:  000050E3     CMPS r0, r0, 0x0
		   0x01138F40:  0700001A     BNE $+0x24  // if (!=) goto 0x01138F64
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01138F44:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x01138F48:  00009FE7     LDR r0, [pc, r0]
		   0x01138F4C:  8388F8EB     BL $-0x1dddec
		   0x01138F50:  64009FE5     LDR r0, [pc, 0x64]
		   0x01138F54:  00009FE7     LDR r0, [pc, r0]
		   0x01138F58:  8088F8EB     BL $-0x1dddf8
		   0x01138F5C:  0100A0E3     MOV r0, 0x1
		   0x01138F60:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01138F64:  0400A0E1     MOV r0, r4
		   0x01138F68:  160000EB     BL $+0x60  // CALL → GameStateSave.get_storageKey
		   0x01138F6C:  0040A0E1     MOV r4, r0
		   0x01138F70:  48009FE5     LDR r0, [pc, 0x48]
		   0x01138F74:  00009FE7     LDR r0, [pc, r0]
		   0x01138F78:  000090E5     LDR r0, [r0]
		   0x01138F7C:  741090E5     LDR r1, [r0, 0x74]
		   0x01138F80:  000051E3     CMPS r0, r1, 0x0
		   0x01138F84:  0000001A     BNE $+0x8  // if (!=) goto 0x01138F8C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01138F88:  C188F8EB     BL $-0x1ddcf4
		   // ──── Block 4 if (!=) ────────────────────
		   0x01138F8C:  30009FE5     LDR r0, [pc, 0x30]
		   0x01138F90:  0010A0E3     MOV r1, 0x0
		   0x01138F94:  0030A0E3     MOV r3, 0x0
		   0x01138F98:  00009FE7     LDR r0, [pc, r0]
		   0x01138F9C:  002090E5     LDR r2, [r0]
		   0x01138FA0:  0400A0E1     MOV r0, r4
		   0x01138FA4:  F742FDEB     BL $-0xaf41c
		   0x01138FA8:  0010A0E3     MOV r1, 0x0
		   0x01138FAC:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01138FB0:  107D75EA     B $+0x1d5f448  // TAIL CALL → String.IsNullOrEmpty
		   0x01138FB4:  5B300F03     MOVEQ r3, 0xf05b
		   0x01138FB8:  F0E6F302     RSCSEQ lr, r3, 0xf000000
		   0x01138FBC:  ECDAF302     RSCSEQ sp, r3, 0xec000
		   0x01138FC0:  C4E6F302     RSCSEQ lr, r3, 0xc400000
		   0x01138FC4:  A8DAF302     RSCSEQ sp, r3, 0xa8000
		*/
	}

	// RVA: 0x1138FC8 Offset: 0x1138FC8 VA: 0x1138FC8
	private string get_storageKey() {
		/* Disassembly (ARM32, 22 instructions, 0x58 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01138FC8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01138FCC:  40509FE5     LDR r5, [pc, 0x40]
		   0x01138FD0:  0040A0E1     MOV r4, r0
		   0x01138FD4:  05508FE0     ADD r5, pc, r5
		   0x01138FD8:  0000D5E5     LDRB r0, [r5]
		   0x01138FDC:  000050E3     CMPS r0, r0, 0x0
		   0x01138FE0:  0400001A     BNE $+0x18  // if (!=) goto 0x01138FF8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01138FE4:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x01138FE8:  00009FE7     LDR r0, [pc, r0]
		   0x01138FEC:  5B88F8EB     BL $-0x1dde8c
		   0x01138FF0:  0100A0E3     MOV r0, 0x1
		   0x01138FF4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01138FF8:  1C009FE5     LDR r0, [pc, 0x1c]
		   0x01138FFC:  0020A0E3     MOV r2, 0x0
		   0x01139000:  00009FE7     LDR r0, [pc, r0]
		   0x01139004:  081094E5     LDR r1, [r4, 0x8]
		   0x01139008:  000090E5     LDR r0, [r0]
		   0x0113900C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01139010:  CA4175EA     B $+0x1d50730  // TAIL CALL → String.Concat
		   0x01139014:  BC2F0F03     MOVEQ r2, 0xffbc
		   0x01139018:  AC0CF402     RSCSEQ r0, r4, 0xac00
		   0x0113901C:  940CF402     RSCSEQ r0, r4, 0x9400
		*/
	}

	// RVA: 0x1139020 Offset: 0x1139020 VA: 0x1139020
	public void AddItem(int id, int order, bool isLocked, int gemsCost, ItemType itemType, string chainType, Vector2Int coordinates, bool isFtue, bool isItBubble, int stimulusChestEpisode) {
		/* Disassembly (ARM32, 93 instructions, 0x174 bytes):
		   // CFG: 13 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01139020:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01139024:  14D04DE2     SUB sp, sp, 0x14
		   0x01139028:  0C308DE5     STR r3, [sp, 0xc]
		   0x0113902C:  4C708DE2     ADD r7, sp, 0x4c
		   0x01139030:  08208DE5     STR r2, [sp, 0x8]
		   0x01139034:  01A0A0E1     MOV r10, r1
		   0x01139038:  10008DE5     STR r0, [sp, 0x10]
		   0x0113903C:  3C519FE5     LDR r5, [pc, 0x13c]
		   0x01139040:  48009DE5     LDR r0, [sp, 0x48]
		   0x01139044:  00008DE5     STR r0, [sp]
		   0x01139048:  05508FE0     ADD r5, pc, r5
		   0x0113904C:  910097E8     LDM r7, {r0, r4, r7}
		   0x01139050:  44809DE5     LDR r8, [sp, 0x44]
		   0x01139054:  04008DE5     STR r0, [sp, 0x4]
		   0x01139058:  0000D5E5     LDRB r0, [r5]
		   0x0113905C:  40B09DE5     LDR fp, [sp, 0x40]
		   0x01139060:  3C609DE5     LDR r6, [sp, 0x3c]
		   0x01139064:  000050E3     CMPS r0, r0, 0x0
		   0x01139068:  38909DE5     LDR sb, [sp, 0x38]
		   0x0113906C:  0700001A     BNE $+0x24  // if (!=) goto 0x01139090
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01139070:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x01139074:  00009FE7     LDR r0, [pc, r0]
		   0x01139078:  3888F8EB     BL $-0x1ddf18
		   0x0113907C:  04019FE5     LDR r0, [pc, 0x104]
		   0x01139080:  00009FE7     LDR r0, [pc, r0]
		   0x01139084:  3588F8EB     BL $-0x1ddf24
		   0x01139088:  0100A0E3     MOV r0, 0x1
		   0x0113908C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01139090:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x01139094:  00009FE7     LDR r0, [pc, r0]
		   0x01139098:  000090E5     LDR r0, [r0]
		   0x0113909C:  C888F8EB     BL $-0x1ddcd8
		   0x011390A0:  0010A0E3     MOV r1, 0x0
		   0x011390A4:  0050A0E1     MOV r5, r0
		   0x011390A8:  6D1800EB     BL $+0x61bc  // CALL → ItemDataSave..ctor
		   0x011390AC:  000055E3     CMPS r0, r5, 0x0
		   0x011390B0:  0000001A     BNE $+0x8  // if (!=) goto 0x011390B8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011390B4:  C588F8EB     BL $-0x1ddce4
		   // ──── Block 4 if (!=) ────────────────────
		   0x011390B8:  0C009DE5     LDR r0, [sp, 0xc]
		   0x011390BC:  1000C5E5     STRB r0, [r5, 0x10]
		   0x011390C0:  149085E5     STR sb, [r5, 0x14]
		   0x011390C4:  08009DE5     LDR r0, [sp, 0x8]
		   0x011390C8:  10909DE5     LDR sb, [sp, 0x10]
		   0x011390CC:  08A085E5     STR r10, [r5, 0x8]
		   0x011390D0:  0C0085E5     STR r0, [r5, 0xc]
		   0x011390D4:  00009DE5     LDR r0, [sp]
		   0x011390D8:  2C0085E5     STR r0, [r5, 0x2c]
		   0x011390DC:  288085E5     STR r8, [r5, 0x28]
		   0x011390E0:  1C6085E5     STR r6, [r5, 0x1c]
		   0x011390E4:  0C6099E5     LDR r6, [sb, 0xc]
		   0x011390E8:  04009DE5     LDR r0, [sp, 0x4]
		   0x011390EC:  000056E3     CMPS r0, r6, 0x0
		   0x011390F0:  1840C5E5     STRB r4, [r5, 0x18]
		   0x011390F4:  24B085E5     STR fp, [r5, 0x24]
		   0x011390F8:  347085E5     STR r7, [r5, 0x34]
		   0x011390FC:  3000C5E5     STRB r0, [r5, 0x30]
		   0x01139100:  0000001A     BNE $+0x8  // if (!=) goto 0x01139108
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01139104:  B188F8EB     BL $-0x1ddd34
		   // ──── Block 6 if (!=) ────────────────────
		   0x01139108:  100096E5     LDR r0, [r6, 0x10]
		   0x0113910C:  084096E5     LDR r4, [r6, 0x8]
		   0x01139110:  0C7096E5     LDR r7, [r6, 0xc]
		   0x01139114:  010080E2     ADD r0, r0, 0x1
		   0x01139118:  70109FE5     LDR r1, [pc, 0x70]
		   0x0113911C:  000054E3     CMPS r0, r4, 0x0
		   0x01139120:  01109FE7     LDR r1, [pc, r1]
		   0x01139124:  100086E5     STR r0, [r6, 0x10]
		   0x01139128:  008091E5     LDR r8, [r1]
		   0x0113912C:  0000001A     BNE $+0x8  // if (!=) goto 0x01139134
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01139130:  A688F8EB     BL $-0x1ddd60
		   // ──── Block 8 if (!=) ────────────────────
		   0x01139134:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01139138:  000057E1     CMPS r0, r7, r0
		   0x0113913C:  0400002A     BHS $+0x18  // if (>= (unsigned)) goto 0x01139154
		   // 
		   // ──── Block 9 else (< (unsigned)) ────────────────────
		   0x01139140:  010087E2     ADD r0, r7, 0x1
		   0x01139144:  0C0086E5     STR r0, [r6, 0xc]
		   0x01139148:  070184E0     ADD r0, r4, r7, lsl 2
		   0x0113914C:  105080E5     STR r5, [r0, 0x10]
		   0x01139150:  050000EA     B $+0x1c  // goto 0x0113916C
		   // ──── Block 10 if (>= (unsigned)) ────────────────────
		   0x01139154:  100098E5     LDR r0, [r8, 0x10]
		   0x01139158:  0510A0E1     MOV r1, r5
		   0x0113915C:  600090E5     LDR r0, [r0, 0x60]
		   0x01139160:  382090E5     LDR r2, [r0, 0x38]
		   0x01139164:  0600A0E1     MOV r0, r6
		   0x01139168:  93E66AEB     BL $+0x1ab9a54  // CALL → List<object>.AddWithResize
		   // ──── Block 11 ──────────────────────────────
		   0x0113916C:  0900A0E1     MOV r0, sb
		   0x01139170:  0010A0E3     MOV r1, 0x0
		   0x01139174:  14D08DE2     ADD sp, sp, 0x14
		   0x01139178:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0113917C:  040000EA     B $+0x18  // TAIL CALL → GameStateSave.Save
		   0x01139180:  492F0F03     MOVEQ r2, 0xff49
		   0x01139184:  CC03F402     RSCSEQ r0, r4, 0x30000003
		   0x01139188:  8810F402     RSCSEQ r1, r4, 0x88
		   0x0113918C:  AC03F402     RSCSEQ r0, r4, 0xb0000002
		   0x01139190:  E80FF402     RSCSEQ r0, r4, 0x3a0
		*/
	}

	// RVA: 0x1139220 Offset: 0x1139220 VA: 0x1139220
	public void RemoveBubbleByID(int id) {
		/* Disassembly (ARM32, 137 instructions, 0x224 bytes):
		   // CFG: 17 blocks, 15 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01139220:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01139224:  D4419FE5     LDR r4, [pc, 0x1d4]
		   0x01139228:  0080A0E1     MOV r8, r0
		   0x0113922C:  0150A0E1     MOV r5, r1
		   0x01139230:  04408FE0     ADD r4, pc, r4
		   0x01139234:  0000D4E5     LDRB r0, [r4]
		   0x01139238:  000050E3     CMPS r0, r0, 0x0
		   0x0113923C:  1900001A     BNE $+0x6c  // if (!=) goto 0x011392A8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01139240:  BC019FE5     LDR r0, [pc, 0x1bc]
		   0x01139244:  00009FE7     LDR r0, [pc, r0]
		   0x01139248:  C487F8EB     BL $-0x1de0e8
		   0x0113924C:  B4019FE5     LDR r0, [pc, 0x1b4]
		   0x01139250:  00009FE7     LDR r0, [pc, r0]
		   0x01139254:  C187F8EB     BL $-0x1de0f4
		   0x01139258:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x0113925C:  00009FE7     LDR r0, [pc, r0]
		   0x01139260:  BE87F8EB     BL $-0x1de100
		   0x01139264:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x01139268:  00009FE7     LDR r0, [pc, r0]
		   0x0113926C:  BB87F8EB     BL $-0x1de10c
		   0x01139270:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x01139274:  00009FE7     LDR r0, [pc, r0]
		   0x01139278:  B887F8EB     BL $-0x1de118
		   0x0113927C:  94019FE5     LDR r0, [pc, 0x194]
		   0x01139280:  00009FE7     LDR r0, [pc, r0]
		   0x01139284:  B587F8EB     BL $-0x1de124
		   0x01139288:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x0113928C:  00009FE7     LDR r0, [pc, r0]
		   0x01139290:  B287F8EB     BL $-0x1de130
		   0x01139294:  84019FE5     LDR r0, [pc, 0x184]
		   0x01139298:  00009FE7     LDR r0, [pc, r0]
		   0x0113929C:  AF87F8EB     BL $-0x1de13c
		   0x011392A0:  0100A0E3     MOV r0, 0x1
		   0x011392A4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011392A8:  74019FE5     LDR r0, [pc, 0x174]
		   0x011392AC:  00009FE7     LDR r0, [pc, r0]
		   0x011392B0:  000090E5     LDR r0, [r0]
		   0x011392B4:  4288F8EB     BL $-0x1ddef0
		   0x011392B8:  0010A0E3     MOV r1, 0x0
		   0x011392BC:  0070A0E1     MOV r7, r0
		   0x011392C0:  49707DEB     BL $+0x1f5c12c  // CALL → Object..ctor
		   0x011392C4:  000057E3     CMPS r0, r7, 0x0
		   0x011392C8:  0000001A     BNE $+0x8  // if (!=) goto 0x011392D0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011392CC:  3F88F8EB     BL $-0x1ddefc
		   // ──── Block 4 if (!=) ────────────────────
		   0x011392D0:  50019FE5     LDR r0, [pc, 0x150]
		   0x011392D4:  0760A0E1     MOV r6, r7
		   0x011392D8:  00009FE7     LDR r0, [pc, r0]
		   0x011392DC:  0C4098E5     LDR r4, [r8, 0xc]
		   0x011392E0:  0850A6E5     STR r5, [r6, 0x8]!
		   0x011392E4:  000090E5     LDR r0, [r0]
		   0x011392E8:  3588F8EB     BL $-0x1ddf24
		   0x011392EC:  0050A0E1     MOV r5, r0
		   0x011392F0:  34019FE5     LDR r0, [pc, 0x134]
		   0x011392F4:  0710A0E1     MOV r1, r7
		   0x011392F8:  0030A0E3     MOV r3, 0x0
		   0x011392FC:  00009FE7     LDR r0, [pc, r0]
		   0x01139300:  002090E5     LDR r2, [r0]
		   0x01139304:  0500A0E1     MOV r0, r5
		   0x01139308:  DE5232EB     BL $+0xc94b80  // CALL → Predicate<object>..ctor
		   0x0113930C:  000054E3     CMPS r0, r4, 0x0
		   0x01139310:  0000001A     BNE $+0x8  // if (!=) goto 0x01139318
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01139314:  2D88F8EB     BL $-0x1ddf44
		   // ──── Block 6 if (!=) ────────────────────
		   0x01139318:  10019FE5     LDR r0, [pc, 0x110]
		   0x0113931C:  0510A0E1     MOV r1, r5
		   0x01139320:  00009FE7     LDR r0, [pc, r0]
		   0x01139324:  002090E5     LDR r2, [r0]
		   0x01139328:  0400A0E1     MOV r0, r4
		   0x0113932C:  6AE86AEB     BL $+0x1aba1b0  // CALL → List<object>.FindIndex
		   0x01139330:  010070E3     CMNS r0, r0, 0x1
		   0x01139334:  1100000A     BEQ $+0x4c  // if (==) goto 0x01139380
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x01139338:  0C5098E5     LDR r5, [r8, 0xc]
		   0x0113933C:  0040A0E1     MOV r4, r0
		   0x01139340:  000055E3     CMPS r0, r5, 0x0
		   0x01139344:  0000001A     BNE $+0x8  // if (!=) goto 0x0113934C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01139348:  2088F8EB     BL $-0x1ddf78
		   // ──── Block 9 if (!=) ────────────────────
		   0x0113934C:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x01139350:  0410A0E1     MOV r1, r4
		   0x01139354:  00009FE7     LDR r0, [pc, r0]
		   0x01139358:  002090E5     LDR r2, [r0]
		   0x0113935C:  0500A0E1     MOV r0, r5
		   0x01139360:  66E56AEB     BL $+0x1ab95a0  // CALL → List<object>.get_Item
		   0x01139364:  0040A0E1     MOV r4, r0
		   0x01139368:  000050E3     CMPS r0, r0, 0x0
		   0x0113936C:  0000001A     BNE $+0x8  // if (!=) goto 0x01139374
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x01139370:  1688F8EB     BL $-0x1ddfa0
		   // ──── Block 11 if (!=) ────────────────────
		   0x01139374:  0000A0E3     MOV r0, 0x0
		   0x01139378:  1800C4E5     STRB r0, [r4, 0x18]  // vtable: Object.Equals
		   0x0113937C:  1B0000EA     B $+0x74  // goto 0x011393F0
		   // ──── Block 12 if (==) ────────────────────
		   0x01139380:  0600A0E1     MOV r0, r6
		   0x01139384:  0010A0E3     MOV r1, 0x0
		   0x01139388:  262C7CEB     BL $+0x1f0b0a0  // CALL → Int32.ToString
		   0x0113938C:  0010A0E1     MOV r1, r0
		   0x01139390:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x01139394:  0020A0E3     MOV r2, 0x0
		   0x01139398:  00009FE7     LDR r0, [pc, r0]
		   0x0113939C:  000090E5     LDR r0, [r0]
		   0x011393A0:  E64075EB     BL $+0x1d503a0  // CALL → String.Concat
		   0x011393A4:  0050A0E1     MOV r5, r0
		   0x011393A8:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x011393AC:  00009FE7     LDR r0, [pc, r0]
		   0x011393B0:  000090E5     LDR r0, [r0]
		   0x011393B4:  0288F8EB     BL $-0x1ddff0
		   0x011393B8:  0510A0E1     MOV r1, r5
		   0x011393BC:  0020A0E3     MOV r2, 0x0
		   0x011393C0:  0040A0E1     MOV r4, r0
		   0x011393C4:  1C3F7DEB     BL $+0x1f4fc78  // CALL → Exception..ctor
		   0x011393C8:  70009FE5     LDR r0, [pc, 0x70]
		   0x011393CC:  00009FE7     LDR r0, [pc, r0]
		   0x011393D0:  000090E5     LDR r0, [r0]
		   0x011393D4:  741090E5     LDR r1, [r0, 0x74]
		   0x011393D8:  000051E3     CMPS r0, r1, 0x0
		   0x011393DC:  0000001A     BNE $+0x8  // if (!=) goto 0x011393E4
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x011393E0:  AB87F8EB     BL $-0x1de14c
		   // ──── Block 14 if (!=) ────────────────────
		   0x011393E4:  0400A0E1     MOV r0, r4
		   0x011393E8:  0010A0E3     MOV r1, 0x0
		   0x011393EC:  66FB3AEB     BL $+0xebeda0  // CALL → sub_1FF818C
		   // ──── Block 15 ──────────────────────────────
		   0x011393F0:  0800A0E1     MOV r0, r8
		   0x011393F4:  0010A0E3     MOV r1, 0x0
		   0x011393F8:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x011393FC:  64FFFFEA     B $-0x268
		   0x01139400:  622D0F03     MOVEQ r2, 0xfd62
		   0x01139404:  44D3F302     RSCSEQ sp, r3, 0x10000001
		   0x01139408:  9CD6F302     RSCSEQ sp, r3, 0x9c00000
		   0x0113940C:  9CFFF302     RSCSEQ pc, r3, 0x270
		   0x01139410:  6CFEF302     RSCSEQ pc, r3, 0x6c0
		   0x01139414:  90FCF302     RSCSEQ pc, r3, 0x9000
		   0x01139418:  8C0EF402     RSCSEQ r0, r4, 0x8c0
		   0x0113941C:  840EF402     RSCSEQ r0, r4, 0x840
		   0x01139420:  7C0EF402     RSCSEQ r0, r4, 0x7c0
		   0x01139424:  640EF402     RSCSEQ r0, r4, 0x640
		   0x01139428:  2CFCF302     RSCSEQ pc, r3, 0x2c00
		   0x0113942C:  100EF402     RSCSEQ r0, r4, 0x100
		   0x01139430:  D8FEF302     RSCSEQ pc, r3, 0xd80
		   0x01139434:  80FDF302     RSCSEQ pc, r3, 0x2000
		   0x01139438:  7C0DF402     RSCSEQ r0, r4, 0x1f00
		   0x0113943C:  40D5F302     RSCSEQ sp, r3, 0x10000000
		   0x01139440:  BCD1F302     RSCSEQ sp, r3, 0x2f
		*/
	}

	// RVA: 0x113944C Offset: 0x113944C VA: 0x113944C
	public bool UpdateCoordinates(Item item, Vector2Int coordinates) {
		/* Disassembly (ARM32, 305 instructions, 0x4C4 bytes):
		   // CFG: 54 blocks, 52 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113944C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01139450:  10D04DE2     SUB sp, sp, 0x10
		   0x01139454:  48549FE5     LDR r5, [pc, 0x448]
		   0x01139458:  0060A0E1     MOV r6, r0
		   0x0113945C:  0140A0E1     MOV r4, r1
		   0x01139460:  0C308DE5     STR r3, [sp, 0xc]
		   0x01139464:  05508FE0     ADD r5, pc, r5
		   0x01139468:  08208DE5     STR r2, [sp, 0x8]
		   0x0113946C:  0000D5E5     LDRB r0, [r5]
		   0x01139470:  000050E3     CMPS r0, r0, 0x0
		   0x01139474:  2500001A     BNE $+0x9c  // if (!=) goto 0x01139510
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01139478:  28049FE5     LDR r0, [pc, 0x428]
		   0x0113947C:  00009FE7     LDR r0, [pc, r0]
		   0x01139480:  3687F8EB     BL $-0x1de320
		   0x01139484:  20049FE5     LDR r0, [pc, 0x420]
		   0x01139488:  00009FE7     LDR r0, [pc, r0]
		   0x0113948C:  3387F8EB     BL $-0x1de32c
		   0x01139490:  18049FE5     LDR r0, [pc, 0x418]
		   0x01139494:  00009FE7     LDR r0, [pc, r0]
		   0x01139498:  3087F8EB     BL $-0x1de338
		   0x0113949C:  10049FE5     LDR r0, [pc, 0x410]
		   0x011394A0:  00009FE7     LDR r0, [pc, r0]
		   0x011394A4:  2D87F8EB     BL $-0x1de344
		   0x011394A8:  08049FE5     LDR r0, [pc, 0x408]
		   0x011394AC:  00009FE7     LDR r0, [pc, r0]
		   0x011394B0:  2A87F8EB     BL $-0x1de350
		   0x011394B4:  00049FE5     LDR r0, [pc, 0x400]
		   0x011394B8:  00009FE7     LDR r0, [pc, r0]
		   0x011394BC:  2787F8EB     BL $-0x1de35c
		   0x011394C0:  F8039FE5     LDR r0, [pc, 0x3f8]
		   0x011394C4:  00009FE7     LDR r0, [pc, r0]
		   0x011394C8:  2487F8EB     BL $-0x1de368
		   0x011394CC:  F0039FE5     LDR r0, [pc, 0x3f0]
		   0x011394D0:  00009FE7     LDR r0, [pc, r0]
		   0x011394D4:  2187F8EB     BL $-0x1de374
		   0x011394D8:  E8039FE5     LDR r0, [pc, 0x3e8]
		   0x011394DC:  00009FE7     LDR r0, [pc, r0]
		   0x011394E0:  1E87F8EB     BL $-0x1de380
		   0x011394E4:  E0039FE5     LDR r0, [pc, 0x3e0]
		   0x011394E8:  00009FE7     LDR r0, [pc, r0]
		   0x011394EC:  1B87F8EB     BL $-0x1de38c
		   0x011394F0:  D8039FE5     LDR r0, [pc, 0x3d8]
		   0x011394F4:  00009FE7     LDR r0, [pc, r0]
		   0x011394F8:  1887F8EB     BL $-0x1de398
		   0x011394FC:  D0039FE5     LDR r0, [pc, 0x3d0]
		   0x01139500:  00009FE7     LDR r0, [pc, r0]
		   0x01139504:  1587F8EB     BL $-0x1de3a4
		   0x01139508:  0100A0E3     MOV r0, 0x1
		   0x0113950C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01139510:  C0039FE5     LDR r0, [pc, 0x3c0]
		   0x01139514:  0010A0E3     MOV r1, 0x0
		   0x01139518:  00009FE7     LDR r0, [pc, r0]
		   0x0113951C:  04108DE5     STR r1, [sp, 0x4]
		   0x01139520:  000090E5     LDR r0, [r0]
		   0x01139524:  A687F8EB     BL $-0x1de160
		   0x01139528:  0010A0E3     MOV r1, 0x0
		   0x0113952C:  0050A0E1     MOV r5, r0
		   0x01139530:  AD6F7DEB     BL $+0x1f5bebc  // CALL → Object..ctor
		   0x01139534:  000055E3     CMPS r0, r5, 0x0
		   0x01139538:  0000001A     BNE $+0x8  // if (!=) goto 0x01139540
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0113953C:  A387F8EB     BL $-0x1de16c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01139540:  94039FE5     LDR r0, [pc, 0x394]
		   0x01139544:  00009FE7     LDR r0, [pc, r0]
		   0x01139548:  0C7096E5     LDR r7, [r6, 0xc]
		   0x0113954C:  084085E5     STR r4, [r5, 0x8]
		   0x01139550:  000090E5     LDR r0, [r0]
		   0x01139554:  9A87F8EB     BL $-0x1de190
		   0x01139558:  0040A0E1     MOV r4, r0
		   0x0113955C:  7C039FE5     LDR r0, [pc, 0x37c]
		   0x01139560:  0510A0E1     MOV r1, r5
		   0x01139564:  0030A0E3     MOV r3, 0x0
		   0x01139568:  00009FE7     LDR r0, [pc, r0]
		   0x0113956C:  002090E5     LDR r2, [r0]
		   0x01139570:  0400A0E1     MOV r0, r4
		   0x01139574:  435232EB     BL $+0xc94914  // CALL → Predicate<object>..ctor
		   0x01139578:  000057E3     CMPS r0, r7, 0x0
		   0x0113957C:  0000001A     BNE $+0x8  // if (!=) goto 0x01139584
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01139580:  9287F8EB     BL $-0x1de1b0
		   // ──── Block 6 if (!=) ────────────────────
		   0x01139584:  58039FE5     LDR r0, [pc, 0x358]
		   0x01139588:  0410A0E1     MOV r1, r4
		   0x0113958C:  00009FE7     LDR r0, [pc, r0]
		   0x01139590:  002090E5     LDR r2, [r0]
		   0x01139594:  0700A0E1     MOV r0, r7
		   0x01139598:  3AE76AEB     BL $+0x1ab9cf0  // CALL → List<object>.Find
		   0x0113959C:  0040A0E1     MOV r4, r0
		   0x011395A0:  000050E3     CMPS r0, r0, 0x0
		   0x011395A4:  0600000A     BEQ $+0x20  // if (==) goto 0x011395C4
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x011395A8:  0C109DE5     LDR r1, [sp, 0xc]
		   0x011395AC:  08009DE5     LDR r0, [sp, 0x8]
		   0x011395B0:  F802C4E1     STRD r0, r1, [r4, 0x28]
		   0x011395B4:  0600A0E1     MOV r0, r6
		   0x011395B8:  0010A0E3     MOV r1, 0x0
		   0x011395BC:  F4FEFFEB     BL $-0x428
		   0x011395C0:  B20000EA     B $+0x2d0  // goto 0x01139890
		   // ──── Block 8 if (==) ────────────────────
		   0x011395C4:  086095E5     LDR r6, [r5, 0x8]
		   0x011395C8:  000056E3     CMPS r0, r6, 0x0
		   0x011395CC:  0000001A     BNE $+0x8  // if (!=) goto 0x011395D4
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x011395D0:  7E87F8EB     BL $-0x1de200
		   // ──── Block 10 if (!=) ────────────────────
		   0x011395D4:  840096E5     LDR r0, [r6, 0x84]
		   0x011395D8:  000050E3     CMPS r0, r0, 0x0
		   0x011395DC:  7E00000A     BEQ $+0x200  // if (==) goto 0x011397DC
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x011395E0:  00039FE5     LDR r0, [pc, 0x300]
		   0x011395E4:  0A10A0E3     MOV r1, 0xa
		   0x011395E8:  00009FE7     LDR r0, [pc, r0]
		   0x011395EC:  000090E5     LDR r0, [r0]
		   0x011395F0:  FD86F8EB     BL $-0x1de404
		   0x011395F4:  0060A0E1     MOV r6, r0
		   0x011395F8:  000050E3     CMPS r0, r0, 0x0
		   0x011395FC:  0000001A     BNE $+0x8  // if (!=) goto 0x01139604
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01139600:  7287F8EB     BL $-0x1de230
		   // ──── Block 13 if (!=) ────────────────────
		   0x01139604:  E0029FE5     LDR r0, [pc, 0x2e0]
		   0x01139608:  00009FE7     LDR r0, [pc, r0]
		   0x0113960C:  007090E5     LDR r7, [r0]
		   0x01139610:  0C0096E5     LDR r0, [r6, 0xc]
		   0x01139614:  000050E3     CMPS r0, r0, 0x0
		   0x01139618:  0000001A     BNE $+0x8  // if (!=) goto 0x01139620
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x0113961C:  6C87F8EB     BL $-0x1de248
		   // ──── Block 15 if (!=) ────────────────────
		   0x01139620:  107086E5     STR r7, [r6, 0x10]
		   0x01139624:  087095E5     LDR r7, [r5, 0x8]
		   0x01139628:  000057E3     CMPS r0, r7, 0x0
		   0x0113962C:  0000001A     BNE $+0x8  // if (!=) goto 0x01139634
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x01139630:  6687F8EB     BL $-0x1de260
		   // ──── Block 17 if (!=) ────────────────────
		   0x01139634:  340097E5     LDR r0, [r7, 0x34]
		   0x01139638:  0010A0E3     MOV r1, 0x0
		   0x0113963C:  04008DE5     STR r0, [sp, 0x4]
		   0x01139640:  04008DE2     ADD r0, sp, 0x4
		   0x01139644:  772B7CEB     BL $+0x1f0ade4  // CALL → Int32.ToString
		   0x01139648:  0070A0E1     MOV r7, r0
		   0x0113964C:  0C0096E5     LDR r0, [r6, 0xc]
		   0x01139650:  010050E3     CMPS r0, r0, 0x1
		   0x01139654:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x01139660
		   // 
		   // ──── Block 18 else (<= (unsigned)) ────────────────────
		   0x01139658:  5D87F8EB     BL $-0x1de284
		   0x0113965C:  0C0096E5     LDR r0, [r6, 0xc]
		   // ──── Block 19 if (> (unsigned)) ────────────────────
		   0x01139660:  147086E5     STR r7, [r6, 0x14]
		   0x01139664:  020050E3     CMPS r0, r0, 0x2
		   0x01139668:  80129FE5     LDR r1, [pc, 0x280]
		   0x0113966C:  01109FE7     LDR r1, [pc, r1]
		   0x01139670:  007091E5     LDR r7, [r1]
		   0x01139674:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0113967C
		   // 
		   // ──── Block 20 else (<= (unsigned)) ────────────────────
		   0x01139678:  5587F8EB     BL $-0x1de2a4
		   // ──── Block 21 if (> (unsigned)) ────────────────────
		   0x0113967C:  08008DE2     ADD r0, sp, 0x8
		   0x01139680:  0010A0E3     MOV r1, 0x0
		   0x01139684:  0020A0E3     MOV r2, 0x0
		   0x01139688:  0030A0E3     MOV r3, 0x0
		   0x0113968C:  187086E5     STR r7, [r6, 0x18]
		   0x01139690:  37D1FEEB     BL $-0x4bb1c
		   0x01139694:  0070A0E1     MOV r7, r0
		   0x01139698:  0C0096E5     LDR r0, [r6, 0xc]
		   0x0113969C:  030050E3     CMPS r0, r0, 0x3
		   0x011396A0:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x011396AC
		   // 
		   // ──── Block 22 else (<= (unsigned)) ────────────────────
		   0x011396A4:  4A87F8EB     BL $-0x1de2d0
		   0x011396A8:  0C0096E5     LDR r0, [r6, 0xc]
		   // ──── Block 23 if (> (unsigned)) ────────────────────
		   0x011396AC:  1C7086E5     STR r7, [r6, 0x1c]
		   0x011396B0:  040050E3     CMPS r0, r0, 0x4
		   0x011396B4:  38129FE5     LDR r1, [pc, 0x238]
		   0x011396B8:  01109FE7     LDR r1, [pc, r1]
		   0x011396BC:  007091E5     LDR r7, [r1]
		   0x011396C0:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x011396C8
		   // 
		   // ──── Block 24 else (<= (unsigned)) ────────────────────
		   0x011396C4:  4287F8EB     BL $-0x1de2f0
		   // ──── Block 25 if (> (unsigned)) ────────────────────
		   0x011396C8:  207086E5     STR r7, [r6, 0x20]
		   0x011396CC:  087095E5     LDR r7, [r5, 0x8]
		   0x011396D0:  000057E3     CMPS r0, r7, 0x0
		   0x011396D4:  0000001A     BNE $+0x8  // if (!=) goto 0x011396DC
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x011396D8:  3C87F8EB     BL $-0x1de308
		   // ──── Block 27 if (!=) ────────────────────
		   0x011396DC:  0700A0E1     MOV r0, r7
		   0x011396E0:  0010A0E3     MOV r1, 0x0
		   0x011396E4:  BB40FFEB     BL $-0x2fd0c
		   0x011396E8:  0070A0E1     MOV r7, r0
		   0x011396EC:  0C0096E5     LDR r0, [r6, 0xc]
		   0x011396F0:  050050E3     CMPS r0, r0, 0x5
		   0x011396F4:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x01139700
		   // 
		   // ──── Block 28 else (<= (unsigned)) ────────────────────
		   0x011396F8:  3587F8EB     BL $-0x1de324
		   0x011396FC:  0C0096E5     LDR r0, [r6, 0xc]
		   // ──── Block 29 if (> (unsigned)) ────────────────────
		   0x01139700:  247086E5     STR r7, [r6, 0x24]
		   0x01139704:  060050E3     CMPS r0, r0, 0x6
		   0x01139708:  E8119FE5     LDR r1, [pc, 0x1e8]
		   0x0113970C:  01109FE7     LDR r1, [pc, r1]
		   0x01139710:  007091E5     LDR r7, [r1]
		   0x01139714:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0113971C
		   // 
		   // ──── Block 30 else (<= (unsigned)) ────────────────────
		   0x01139718:  2D87F8EB     BL $-0x1de344
		   // ──── Block 31 if (> (unsigned)) ────────────────────
		   0x0113971C:  287086E5     STR r7, [r6, 0x28]
		   0x01139720:  087095E5     LDR r7, [r5, 0x8]
		   0x01139724:  000057E3     CMPS r0, r7, 0x0
		   0x01139728:  0000001A     BNE $+0x8  // if (!=) goto 0x01139730
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x0113972C:  2787F8EB     BL $-0x1de35c
		   // ──── Block 33 if (!=) ────────────────────
		   0x01139730:  847097E5     LDR r7, [r7, 0x84]
		   0x01139734:  000057E3     CMPS r0, r7, 0x0
		   0x01139738:  0000001A     BNE $+0x8  // if (!=) goto 0x01139740
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x0113973C:  2387F8EB     BL $-0x1de36c
		   // ──── Block 35 if (!=) ────────────────────
		   0x01139740:  0700A0E1     MOV r0, r7
		   0x01139744:  0010A0E3     MOV r1, 0x0
		   0x01139748:  A641FFEB     BL $-0x2f960
		   0x0113974C:  04008DE5     STR r0, [sp, 0x4]
		   0x01139750:  04008DE2     ADD r0, sp, 0x4
		   0x01139754:  0010A0E3     MOV r1, 0x0
		   0x01139758:  322B7CEB     BL $+0x1f0acd0  // CALL → Int32.ToString
		   0x0113975C:  0070A0E1     MOV r7, r0
		   0x01139760:  0C0096E5     LDR r0, [r6, 0xc]
		   0x01139764:  070050E3     CMPS r0, r0, 0x7
		   0x01139768:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x01139774
		   // 
		   // ──── Block 36 else (<= (unsigned)) ────────────────────
		   0x0113976C:  1887F8EB     BL $-0x1de398
		   0x01139770:  0C0096E5     LDR r0, [r6, 0xc]
		   // ──── Block 37 if (> (unsigned)) ────────────────────
		   0x01139774:  2C7086E5     STR r7, [r6, 0x2c]
		   0x01139778:  080050E3     CMPS r0, r0, 0x8
		   0x0113977C:  78119FE5     LDR r1, [pc, 0x178]
		   0x01139780:  01109FE7     LDR r1, [pc, r1]
		   0x01139784:  007091E5     LDR r7, [r1]
		   0x01139788:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x01139790
		   // 
		   // ──── Block 38 else (<= (unsigned)) ────────────────────
		   0x0113978C:  1087F8EB     BL $-0x1de3b8
		   // ──── Block 39 if (> (unsigned)) ────────────────────
		   0x01139790:  307086E5     STR r7, [r6, 0x30]
		   0x01139794:  085095E5     LDR r5, [r5, 0x8]
		   0x01139798:  000055E3     CMPS r0, r5, 0x0
		   0x0113979C:  0000001A     BNE $+0x8  // if (!=) goto 0x011397A4
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x011397A0:  0A87F8EB     BL $-0x1de3d0
		   // ──── Block 41 if (!=) ────────────────────
		   0x011397A4:  845095E5     LDR r5, [r5, 0x84]
		   0x011397A8:  000055E3     CMPS r0, r5, 0x0
		   0x011397AC:  0000001A     BNE $+0x8  // if (!=) goto 0x011397B4
		   // 
		   // ──── Block 42 else (==) ────────────────────
		   0x011397B0:  0687F8EB     BL $-0x1de3e0
		   // ──── Block 43 if (!=) ────────────────────
		   0x011397B4:  0C0096E5     LDR r0, [r6, 0xc]
		   0x011397B8:  145095E5     LDR r5, [r5, 0x14]
		   0x011397BC:  090050E3     CMPS r0, r0, 0x9
		   0x011397C0:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x011397C8
		   // 
		   // ──── Block 44 else (<= (unsigned)) ────────────────────
		   0x011397C4:  0287F8EB     BL $-0x1de3f0
		   // ──── Block 45 if (> (unsigned)) ────────────────────
		   0x011397C8:  0600A0E1     MOV r0, r6
		   0x011397CC:  0010A0E3     MOV r1, 0x0
		   0x011397D0:  345086E5     STR r5, [r6, 0x34]
		   0x011397D4:  AB8075EB     BL $+0x1d602b4  // CALL → String.Concat
		   0x011397D8:  190000EA     B $+0x6c  // goto 0x01139844
		   // ──── Block 46 if (==) ────────────────────
		   0x011397DC:  085095E5     LDR r5, [r5, 0x8]
		   0x011397E0:  000055E3     CMPS r0, r5, 0x0
		   0x011397E4:  0000001A     BNE $+0x8  // if (!=) goto 0x011397EC
		   // 
		   // ──── Block 47 else (==) ────────────────────
		   0x011397E8:  F886F8EB     BL $-0x1de418
		   // ──── Block 48 if (!=) ────────────────────
		   0x011397EC:  340095E5     LDR r0, [r5, 0x34]
		   0x011397F0:  0010A0E3     MOV r1, 0x0
		   0x011397F4:  04008DE5     STR r0, [sp, 0x4]
		   0x011397F8:  04008DE2     ADD r0, sp, 0x4
		   0x011397FC:  0060A0E3     MOV r6, 0x0
		   0x01139800:  082B7CEB     BL $+0x1f0ac28  // CALL → Int32.ToString
		   0x01139804:  0050A0E1     MOV r5, r0
		   0x01139808:  08008DE2     ADD r0, sp, 0x8
		   0x0113980C:  0010A0E3     MOV r1, 0x0
		   0x01139810:  0020A0E3     MOV r2, 0x0
		   0x01139814:  0030A0E3     MOV r3, 0x0
		   0x01139818:  D5D0FEEB     BL $-0x4bca4
		   0x0113981C:  0030A0E1     MOV r3, r0
		   0x01139820:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x01139824:  00009FE7     LDR r0, [pc, r0]
		   0x01139828:  000090E5     LDR r0, [r0]
		   0x0113982C:  D0109FE5     LDR r1, [pc, 0xd0]
		   0x01139830:  01109FE7     LDR r1, [pc, r1]
		   0x01139834:  00608DE5     STR r6, [sp]
		   0x01139838:  002091E5     LDR r2, [r1]
		   0x0113983C:  0510A0E1     MOV r1, r5
		   0x01139840:  518075EB     BL $+0x1d6014c  // CALL → String.Concat
		   // ──── Block 49 ──────────────────────────────
		   0x01139844:  0060A0E1     MOV r6, r0
		   0x01139848:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x0113984C:  00009FE7     LDR r0, [pc, r0]
		   0x01139850:  000090E5     LDR r0, [r0]
		   0x01139854:  DA86F8EB     BL $-0x1de490
		   0x01139858:  0610A0E1     MOV r1, r6
		   0x0113985C:  0020A0E3     MOV r2, 0x0
		   0x01139860:  0050A0E1     MOV r5, r0
		   0x01139864:  86920FEB     BL $+0x3e4a20  // CALL → InfoException..ctor
		   0x01139868:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x0113986C:  00009FE7     LDR r0, [pc, r0]
		   0x01139870:  000090E5     LDR r0, [r0]
		   0x01139874:  741090E5     LDR r1, [r0, 0x74]
		   0x01139878:  000051E3     CMPS r0, r1, 0x0
		   0x0113987C:  0000001A     BNE $+0x8  // if (!=) goto 0x01139884
		   // 
		   // ──── Block 50 else (==) ────────────────────
		   0x01139880:  8386F8EB     BL $-0x1de5ec
		   // ──── Block 51 if (!=) ────────────────────
		   0x01139884:  0500A0E1     MOV r0, r5
		   0x01139888:  0010A0E3     MOV r1, 0x0
		   0x0113988C:  3EFA3AEB     BL $+0xebe900  // CALL → sub_1FF818C
		   // ──── Block 52 ──────────────────────────────
		   0x01139890:  000054E3     CMPS r0, r4, 0x0
		   0x01139894:  01400013     MOVNE r4, 0x1
		   0x01139898:  0400A0E1     MOV r0, r4
		   0x0113989C:  10D08DE2     ADD sp, sp, 0x10
		   0x011398A0:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x011398A4:  2F2B0F03     MOVEQ r2, 0xfb2f
		   0x011398A8:  0CD1F302     RSCSEQ sp, r3, 0x3
		   0x011398AC:  44E2F302     RSCSEQ lr, r3, 0x40000004
		   0x011398B0:  6CFAF302     RSCSEQ pc, r3, 0x6c000
		   0x011398B4:  64FAF302     RSCSEQ pc, r3, 0x64000
		   0x011398B8:  54D6F302     RSCSEQ sp, r3, 0x5400000
		   0x011398BC:  600CF402     RSCSEQ r0, r4, 0x6000
		   0x011398C0:  580CF402     RSCSEQ r0, r4, 0x5800
		   0x011398C4:  500CF402     RSCSEQ r0, r4, 0x5000
		   0x011398C8:  480CF402     RSCSEQ r0, r4, 0x4800
		   0x011398CC:  400CF402     RSCSEQ r0, r4, 0x4000
		   0x011398D0:  20FFF302     RSCSEQ pc, r3, 0x80
		   0x011398D4:  2C0CF402     RSCSEQ r0, r4, 0x2c00
		   0x011398D8:  040CF402     RSCSEQ r0, r4, 0x400
		   0x011398DC:  C0F9F302     RSCSEQ pc, r3, 0x300000
		   0x011398E0:  B00BF402     RSCSEQ r0, r4, 0x2c000
		   0x011398E4:  74F9F302     RSCSEQ pc, r3, 0x1d0000
		   0x011398E8:  18D5F302     RSCSEQ sp, r3, 0x6000000
		   0x011398EC:  180BF402     RSCSEQ r0, r4, 0x6000
		   0x011398F0:  C00AF402     RSCSEQ r0, r4, 0xc0000
		   0x011398F4:  6C0AF402     RSCSEQ r0, r4, 0x6c000
		   0x011398F8:  08FDF302     RSCSEQ pc, r3, 0x200
		   0x011398FC:  A809F402     RSCSEQ r0, r4, 0x2a0000
		   0x01139900:  FC08F402     RSCSEQ r0, r4, 0xfc0000
		   0x01139904:  FC08F402     RSCSEQ r0, r4, 0xfc0000
		   0x01139908:  80DEF302     RSCSEQ sp, r3, 0x800
		   0x0113990C:  1CCDF302     RSCSEQ ip, r3, 0x700
		*/
	}

	// RVA: 0x1139918 Offset: 0x1139918 VA: 0x1139918
	public void RemoveByID(int id) {
		/* Disassembly (ARM32, 129 instructions, 0x204 bytes):
		   // CFG: 21 blocks, 19 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01139918:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0113991C:  C0519FE5     LDR r5, [pc, 0x1c0]
		   0x01139920:  0040A0E1     MOV r4, r0
		   0x01139924:  0160A0E1     MOV r6, r1
		   0x01139928:  05508FE0     ADD r5, pc, r5
		   0x0113992C:  0000D5E5     LDRB r0, [r5]
		   0x01139930:  000050E3     CMPS r0, r0, 0x0
		   0x01139934:  1300001A     BNE $+0x54  // if (!=) goto 0x01139988
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01139938:  A8019FE5     LDR r0, [pc, 0x1a8]
		   0x0113993C:  00009FE7     LDR r0, [pc, r0]
		   0x01139940:  0686F8EB     BL $-0x1de7e0
		   0x01139944:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x01139948:  00009FE7     LDR r0, [pc, r0]
		   0x0113994C:  0386F8EB     BL $-0x1de7ec
		   0x01139950:  98019FE5     LDR r0, [pc, 0x198]
		   0x01139954:  00009FE7     LDR r0, [pc, r0]
		   0x01139958:  0086F8EB     BL $-0x1de7f8
		   0x0113995C:  90019FE5     LDR r0, [pc, 0x190]
		   0x01139960:  00009FE7     LDR r0, [pc, r0]
		   0x01139964:  FD85F8EB     BL $-0x1de804
		   0x01139968:  88019FE5     LDR r0, [pc, 0x188]
		   0x0113996C:  00009FE7     LDR r0, [pc, r0]
		   0x01139970:  FA85F8EB     BL $-0x1de810
		   0x01139974:  80019FE5     LDR r0, [pc, 0x180]
		   0x01139978:  00009FE7     LDR r0, [pc, r0]
		   0x0113997C:  F785F8EB     BL $-0x1de81c
		   0x01139980:  0100A0E3     MOV r0, 0x1
		   0x01139984:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01139988:  70019FE5     LDR r0, [pc, 0x170]
		   0x0113998C:  00009FE7     LDR r0, [pc, r0]
		   0x01139990:  000090E5     LDR r0, [r0]
		   0x01139994:  8A86F8EB     BL $-0x1de5d0
		   0x01139998:  0010A0E3     MOV r1, 0x0
		   0x0113999C:  0050A0E1     MOV r5, r0
		   0x011399A0:  916E7DEB     BL $+0x1f5ba4c  // CALL → Object..ctor
		   0x011399A4:  000055E3     CMPS r0, r5, 0x0
		   0x011399A8:  0000001A     BNE $+0x8  // if (!=) goto 0x011399B0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011399AC:  8786F8EB     BL $-0x1de5dc
		   // ──── Block 4 if (!=) ────────────────────
		   0x011399B0:  4C819FE5     LDR r8, [pc, 0x14c]
		   0x011399B4:  08809FE7     LDR r8, [pc, r8]
		   0x011399B8:  0C7094E5     LDR r7, [r4, 0xc]
		   0x011399BC:  086085E5     STR r6, [r5, 0x8]
		   0x011399C0:  000098E5     LDR r0, [r8]
		   0x011399C4:  7E86F8EB     BL $-0x1de600
		   0x011399C8:  0060A0E1     MOV r6, r0
		   0x011399CC:  34019FE5     LDR r0, [pc, 0x134]
		   0x011399D0:  0510A0E1     MOV r1, r5
		   0x011399D4:  0030A0E3     MOV r3, 0x0
		   0x011399D8:  00009FE7     LDR r0, [pc, r0]
		   0x011399DC:  002090E5     LDR r2, [r0]
		   0x011399E0:  0600A0E1     MOV r0, r6
		   0x011399E4:  275132EB     BL $+0xc944a4  // CALL → Predicate<object>..ctor
		   0x011399E8:  000057E3     CMPS r0, r7, 0x0
		   0x011399EC:  0000001A     BNE $+0x8  // if (!=) goto 0x011399F4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011399F0:  7686F8EB     BL $-0x1de620
		   // ──── Block 6 if (!=) ────────────────────
		   0x011399F4:  10919FE5     LDR sb, [pc, 0x110]
		   0x011399F8:  0700A0E1     MOV r0, r7
		   0x011399FC:  0610A0E1     MOV r1, r6
		   0x01139A00:  09909FE7     LDR sb, [pc, sb]
		   0x01139A04:  002099E5     LDR r2, [sb]
		   0x01139A08:  1EE66AEB     BL $+0x1ab9880  // CALL → List<object>.Find
		   0x01139A0C:  000050E3     CMPS r0, r0, 0x0
		   0x01139A10:  0A00000A     BEQ $+0x30  // if (==) goto 0x01139A40
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x01139A14:  0C5094E5     LDR r5, [r4, 0xc]
		   0x01139A18:  0060A0E1     MOV r6, r0
		   0x01139A1C:  000055E3     CMPS r0, r5, 0x0
		   0x01139A20:  0000001A     BNE $+0x8  // if (!=) goto 0x01139A28
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01139A24:  6986F8EB     BL $-0x1de654
		   // ──── Block 9 if (!=) ────────────────────
		   0x01139A28:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x01139A2C:  0610A0E1     MOV r1, r6
		   0x01139A30:  00009FE7     LDR r0, [pc, r0]
		   0x01139A34:  002090E5     LDR r2, [r0]
		   0x01139A38:  0500A0E1     MOV r0, r5
		   0x01139A3C:  230000EA     B $+0x94  // goto 0x01139AD0
		   // ──── Block 10 if (==) ────────────────────
		   0x01139A40:  106094E5     LDR r6, [r4, 0x10]
		   0x01139A44:  000056E3     CMPS r0, r6, 0x0
		   0x01139A48:  0000001A     BNE $+0x8  // if (!=) goto 0x01139A50
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01139A4C:  5F86F8EB     BL $-0x1de67c
		   // ──── Block 12 if (!=) ────────────────────
		   0x01139A50:  000098E5     LDR r0, [r8]
		   0x01139A54:  086096E5     LDR r6, [r6, 0x8]
		   0x01139A58:  5986F8EB     BL $-0x1de694
		   0x01139A5C:  0070A0E1     MOV r7, r0
		   0x01139A60:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x01139A64:  0510A0E1     MOV r1, r5
		   0x01139A68:  0030A0E3     MOV r3, 0x0
		   0x01139A6C:  00009FE7     LDR r0, [pc, r0]
		   0x01139A70:  002090E5     LDR r2, [r0]
		   0x01139A74:  0700A0E1     MOV r0, r7
		   0x01139A78:  025132EB     BL $+0xc94410  // CALL → Predicate<object>..ctor
		   0x01139A7C:  000056E3     CMPS r0, r6, 0x0
		   0x01139A80:  0000001A     BNE $+0x8  // if (!=) goto 0x01139A88
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x01139A84:  5186F8EB     BL $-0x1de6b4
		   // ──── Block 14 if (!=) ────────────────────
		   0x01139A88:  002099E5     LDR r2, [sb]
		   0x01139A8C:  0600A0E1     MOV r0, r6
		   0x01139A90:  0710A0E1     MOV r1, r7
		   0x01139A94:  FBE56AEB     BL $+0x1ab97f4  // CALL → List<object>.Find
		   0x01139A98:  106094E5     LDR r6, [r4, 0x10]
		   0x01139A9C:  0050A0E1     MOV r5, r0
		   0x01139AA0:  000056E3     CMPS r0, r6, 0x0
		   0x01139AA4:  0000001A     BNE $+0x8  // if (!=) goto 0x01139AAC
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x01139AA8:  4886F8EB     BL $-0x1de6d8
		   // ──── Block 16 if (!=) ────────────────────
		   0x01139AAC:  086096E5     LDR r6, [r6, 0x8]
		   0x01139AB0:  000056E3     CMPS r0, r6, 0x0
		   0x01139AB4:  0000001A     BNE $+0x8  // if (!=) goto 0x01139ABC
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01139AB8:  4486F8EB     BL $-0x1de6e8
		   // ──── Block 18 if (!=) ────────────────────
		   0x01139ABC:  50009FE5     LDR r0, [pc, 0x50]
		   0x01139AC0:  0510A0E1     MOV r1, r5
		   0x01139AC4:  00009FE7     LDR r0, [pc, r0]
		   0x01139AC8:  002090E5     LDR r2, [r0]
		   0x01139ACC:  0600A0E1     MOV r0, r6
		   // ──── Block 19 ──────────────────────────────
		   0x01139AD0:  F5E96AEB     BL $+0x1aba7dc  // CALL → List<object>.Remove
		   0x01139AD4:  0400A0E1     MOV r0, r4
		   0x01139AD8:  0010A0E3     MOV r1, 0x0
		   0x01139ADC:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01139AE0:  ABFDFFEA     B $-0x94c
		   0x01139AE4:  6C260F03     MOVEQ r2, 0xf66c
		   0x01139AE8:  C4F5F302     RSCSEQ pc, r3, 0x31000000
		   0x01139AEC:  E807F402     RSCSEQ r0, r4, 0x3a00000
		   0x01139AF0:  B0F5F302     RSCSEQ pc, r3, 0x2c000000
		   0x01139AF4:  D407F402     RSCSEQ r0, r4, 0x3500000
		   0x01139AF8:  CC07F402     RSCSEQ r0, r4, 0x3300000
		   0x01139AFC:  C407F402     RSCSEQ r0, r4, 0x3100000
		   0x01139B00:  B007F402     RSCSEQ r0, r4, 0x2c00000
		   0x01139B04:  50F5F302     RSCSEQ pc, r3, 0x14000000
		   0x01139B08:  5C07F402     RSCSEQ r0, r4, 0x1700000
		   0x01139B0C:  00F5F302     RSCSEQ pc, r3, 0x0
		   0x01139B10:  CC06F402     RSCSEQ r0, r4, 0xcc00000
		   0x01139B14:  6C06F402     RSCSEQ r0, r4, 0x6c00000
		   0x01139B18:  0007F402     RSCSEQ r0, r4, 0x0
		*/
	}

	// RVA: 0x1139B24 Offset: 0x1139B24 VA: 0x1139B24
	public void MoveToInventoryByID(int id, int pos, bool fromField) {
		/* Disassembly (ARM32, 238 instructions, 0x3B8 bytes):
		   // CFG: 41 blocks, 42 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01139B24:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01139B28:  44539FE5     LDR r5, [pc, 0x344]
		   0x01139B2C:  0090A0E1     MOV sb, r0
		   0x01139B30:  0360A0E1     MOV r6, r3
		   0x01139B34:  0280A0E1     MOV r8, r2
		   0x01139B38:  05508FE0     ADD r5, pc, r5
		   0x01139B3C:  0170A0E1     MOV r7, r1
		   0x01139B40:  0000D5E5     LDRB r0, [r5]
		   0x01139B44:  000050E3     CMPS r0, r0, 0x0
		   0x01139B48:  2200001A     BNE $+0x90  // if (!=) goto 0x01139BD8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01139B4C:  24039FE5     LDR r0, [pc, 0x324]
		   0x01139B50:  00009FE7     LDR r0, [pc, r0]
		   0x01139B54:  8185F8EB     BL $-0x1de9f4
		   0x01139B58:  1C039FE5     LDR r0, [pc, 0x31c]
		   0x01139B5C:  00009FE7     LDR r0, [pc, r0]
		   0x01139B60:  7E85F8EB     BL $-0x1dea00
		   0x01139B64:  14039FE5     LDR r0, [pc, 0x314]
		   0x01139B68:  00009FE7     LDR r0, [pc, r0]
		   0x01139B6C:  7B85F8EB     BL $-0x1dea0c
		   0x01139B70:  0C039FE5     LDR r0, [pc, 0x30c]
		   0x01139B74:  00009FE7     LDR r0, [pc, r0]
		   0x01139B78:  7885F8EB     BL $-0x1dea18
		   0x01139B7C:  04039FE5     LDR r0, [pc, 0x304]
		   0x01139B80:  00009FE7     LDR r0, [pc, r0]
		   0x01139B84:  7585F8EB     BL $-0x1dea24
		   0x01139B88:  FC029FE5     LDR r0, [pc, 0x2fc]
		   0x01139B8C:  00009FE7     LDR r0, [pc, r0]
		   0x01139B90:  7285F8EB     BL $-0x1dea30
		   0x01139B94:  F4029FE5     LDR r0, [pc, 0x2f4]
		   0x01139B98:  00009FE7     LDR r0, [pc, r0]
		   0x01139B9C:  6F85F8EB     BL $-0x1dea3c
		   0x01139BA0:  EC029FE5     LDR r0, [pc, 0x2ec]
		   0x01139BA4:  00009FE7     LDR r0, [pc, r0]
		   0x01139BA8:  6C85F8EB     BL $-0x1dea48
		   0x01139BAC:  E4029FE5     LDR r0, [pc, 0x2e4]
		   0x01139BB0:  00009FE7     LDR r0, [pc, r0]
		   0x01139BB4:  6985F8EB     BL $-0x1dea54
		   0x01139BB8:  DC029FE5     LDR r0, [pc, 0x2dc]
		   0x01139BBC:  00009FE7     LDR r0, [pc, r0]
		   0x01139BC0:  6685F8EB     BL $-0x1dea60
		   0x01139BC4:  D4029FE5     LDR r0, [pc, 0x2d4]
		   0x01139BC8:  00009FE7     LDR r0, [pc, r0]
		   0x01139BCC:  6385F8EB     BL $-0x1dea6c
		   0x01139BD0:  0100A0E3     MOV r0, 0x1
		   0x01139BD4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01139BD8:  C4029FE5     LDR r0, [pc, 0x2c4]
		   0x01139BDC:  00009FE7     LDR r0, [pc, r0]
		   0x01139BE0:  000090E5     LDR r0, [r0]
		   0x01139BE4:  F685F8EB     BL $-0x1de820
		   0x01139BE8:  0010A0E3     MOV r1, 0x0
		   0x01139BEC:  0050A0E1     MOV r5, r0
		   0x01139BF0:  FD6D7DEB     BL $+0x1f5b7fc  // CALL → Object..ctor
		   0x01139BF4:  000055E3     CMPS r0, r5, 0x0
		   0x01139BF8:  0000001A     BNE $+0x8  // if (!=) goto 0x01139C00
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01139BFC:  F385F8EB     BL $-0x1de82c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01139C00:  000056E3     CMPS r0, r6, 0x0
		   0x01139C04:  087085E5     STR r7, [r5, 0x8]
		   0x01139C08:  0100000A     BEQ $+0xc  // if (==) goto 0x01139C14
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01139C0C:  0C1089E2     ADD r1, sb, 0xc
		   0x01139C10:  040000EA     B $+0x18  // goto 0x01139C28
		   // ──── Block 6 if (==) ────────────────────
		   0x01139C14:  104099E5     LDR r4, [sb, 0x10]
		   0x01139C18:  000054E3     CMPS r0, r4, 0x0
		   0x01139C1C:  0000001A     BNE $+0x8  // if (!=) goto 0x01139C24
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01139C20:  EA85F8EB     BL $-0x1de850
		   // ──── Block 8 if (!=) ────────────────────
		   0x01139C24:  081084E2     ADD r1, r4, 0x8
		   // ──── Block 9 ──────────────────────────────
		   0x01139C28:  78029FE5     LDR r0, [pc, 0x278]
		   0x01139C2C:  00009FE7     LDR r0, [pc, r0]
		   0x01139C30:  007091E5     LDR r7, [r1]
		   0x01139C34:  000090E5     LDR r0, [r0]
		   0x01139C38:  E185F8EB     BL $-0x1de874
		   0x01139C3C:  0060A0E1     MOV r6, r0
		   0x01139C40:  64029FE5     LDR r0, [pc, 0x264]
		   0x01139C44:  0510A0E1     MOV r1, r5
		   0x01139C48:  0030A0E3     MOV r3, 0x0
		   0x01139C4C:  00009FE7     LDR r0, [pc, r0]
		   0x01139C50:  002090E5     LDR r2, [r0]
		   0x01139C54:  0600A0E1     MOV r0, r6
		   0x01139C58:  8A5032EB     BL $+0xc94230  // CALL → Predicate<object>..ctor
		   0x01139C5C:  000057E3     CMPS r0, r7, 0x0
		   0x01139C60:  0900000A     BEQ $+0x2c  // if (==) goto 0x01139C8C
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x01139C64:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x01139C68:  0610A0E1     MOV r1, r6
		   0x01139C6C:  00009FE7     LDR r0, [pc, r0]
		   0x01139C70:  002090E5     LDR r2, [r0]
		   0x01139C74:  0700A0E1     MOV r0, r7
		   0x01139C78:  82E56AEB     BL $+0x1ab9610  // CALL → List<object>.Find
		   0x01139C7C:  0060A0E1     MOV r6, r0
		   0x01139C80:  000050E3     CMPS r0, r0, 0x0
		   0x01139C84:  0B00001A     BNE $+0x34  // if (!=) goto 0x01139CB8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01139C88:  3F0000EA     B $+0x104  // goto 0x01139D8C
		   // ──── Block 12 if (==) ────────────────────
		   0x01139C8C:  CF85F8EB     BL $-0x1de8bc
		   0x01139C90:  18029FE5     LDR r0, [pc, 0x218]
		   0x01139C94:  0610A0E1     MOV r1, r6
		   0x01139C98:  00009FE7     LDR r0, [pc, r0]
		   0x01139C9C:  002090E5     LDR r2, [r0]
		   0x01139CA0:  0000A0E3     MOV r0, 0x0
		   0x01139CA4:  77E56AEB     BL $+0x1ab95e4  // CALL → List<object>.Find
		   0x01139CA8:  000050E3     CMPS r0, r0, 0x0
		   0x01139CAC:  3600000A     BEQ $+0xe0  // if (==) goto 0x01139D8C
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x01139CB0:  0060A0E1     MOV r6, r0
		   0x01139CB4:  C585F8EB     BL $-0x1de8e4
		   // ──── Block 14 if (!=) ────────────────────
		   0x01139CB8:  F4019FE5     LDR r0, [pc, 0x1f4]
		   0x01139CBC:  0610A0E1     MOV r1, r6
		   0x01139CC0:  00009FE7     LDR r0, [pc, r0]
		   0x01139CC4:  002090E5     LDR r2, [r0]
		   0x01139CC8:  0700A0E1     MOV r0, r7
		   0x01139CCC:  76E96AEB     BL $+0x1aba5e0  // CALL → List<object>.Remove
		   0x01139CD0:  000050E3     CMPS r0, r0, 0x0
		   0x01139CD4:  6200000A     BEQ $+0x190  // if (==) goto 0x01139E64
		   // 
		   // ──── Block 15 else (!=) ────────────────────
		   0x01139CD8:  D8419FE5     LDR r4, [pc, 0x1d8]
		   0x01139CDC:  04408FE0     ADD r4, pc, r4
		   0x01139CE0:  0000D4E5     LDRB r0, [r4]
		   0x01139CE4:  000050E3     CMPS r0, r0, 0x0
		   0x01139CE8:  0400001A     BNE $+0x18  // if (!=) goto 0x01139D00
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x01139CEC:  C8019FE5     LDR r0, [pc, 0x1c8]
		   0x01139CF0:  00009FE7     LDR r0, [pc, r0]
		   0x01139CF4:  1985F8EB     BL $-0x1deb94
		   0x01139CF8:  0100A0E3     MOV r0, 0x1
		   0x01139CFC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 17 if (!=) ────────────────────
		   0x01139D00:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x01139D04:  00009FE7     LDR r0, [pc, r0]
		   0x01139D08:  000090E5     LDR r0, [r0]
		   0x01139D0C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01139D10:  D802C0E1     LDRD r0, r1, [r0, 0x28]
		   0x01139D14:  910801E0     MUL r1, r1, r8
		   0x01139D18:  900800E0     MUL r0, r0, r8
		   0x01139D1C:  F802C6E1     STRD r0, r1, [r6, 0x28]
		   0x01139D20:  104099E5     LDR r4, [sb, 0x10]
		   0x01139D24:  000054E3     CMPS r0, r4, 0x0
		   0x01139D28:  0000001A     BNE $+0x8  // if (!=) goto 0x01139D30
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x01139D2C:  A785F8EB     BL $-0x1de95c
		   // ──── Block 19 if (!=) ────────────────────
		   0x01139D30:  084094E5     LDR r4, [r4, 0x8]
		   0x01139D34:  000054E3     CMPS r0, r4, 0x0
		   0x01139D38:  0000001A     BNE $+0x8  // if (!=) goto 0x01139D40
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x01139D3C:  A385F8EB     BL $-0x1de96c
		   // ──── Block 21 if (!=) ────────────────────
		   0x01139D40:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01139D44:  105099E5     LDR r5, [sb, 0x10]
		   0x01139D48:  080050E1     CMPS r0, r0, r8
		   0x01139D4C:  240000DA     BLE $+0x98  // if (<=) goto 0x01139DE4
		   // 
		   // ──── Block 22 else (>) ────────────────────
		   0x01139D50:  000055E3     CMPS r0, r5, 0x0
		   0x01139D54:  0000001A     BNE $+0x8  // if (!=) goto 0x01139D5C
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x01139D58:  9C85F8EB     BL $-0x1de988
		   // ──── Block 24 if (!=) ────────────────────
		   0x01139D5C:  085095E5     LDR r5, [r5, 0x8]
		   0x01139D60:  000055E3     CMPS r0, r5, 0x0
		   0x01139D64:  0000001A     BNE $+0x8  // if (!=) goto 0x01139D6C
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x01139D68:  9885F8EB     BL $-0x1de998
		   // ──── Block 26 if (!=) ────────────────────
		   0x01139D6C:  50019FE5     LDR r0, [pc, 0x150]
		   0x01139D70:  0810A0E1     MOV r1, r8
		   0x01139D74:  0620A0E1     MOV r2, r6
		   0x01139D78:  00009FE7     LDR r0, [pc, r0]
		   0x01139D7C:  003090E5     LDR r3, [r0]
		   0x01139D80:  0500A0E1     MOV r0, r5
		   0x01139D84:  5FE76AEB     BL $+0x1ab9d84  // CALL → List<object>.Insert
		   0x01139D88:  350000EA     B $+0xdc  // goto 0x01139E64
		   // ──── Block 27 if (==) ────────────────────
		   0x01139D8C:  38019FE5     LDR r0, [pc, 0x138]
		   0x01139D90:  00009FE7     LDR r0, [pc, r0]
		   0x01139D94:  000090E5     LDR r0, [r0]
		   0x01139D98:  8985F8EB     BL $-0x1de9d4
		   0x01139D9C:  0040A0E1     MOV r4, r0
		   0x01139DA0:  28019FE5     LDR r0, [pc, 0x128]
		   0x01139DA4:  0020A0E3     MOV r2, 0x0
		   0x01139DA8:  00009FE7     LDR r0, [pc, r0]
		   0x01139DAC:  001090E5     LDR r1, [r0]
		   0x01139DB0:  0400A0E1     MOV r0, r4
		   0x01139DB4:  A03C7DEB     BL $+0x1f4f288  // CALL → Exception..ctor
		   0x01139DB8:  14019FE5     LDR r0, [pc, 0x114]
		   0x01139DBC:  00009FE7     LDR r0, [pc, r0]
		   0x01139DC0:  000090E5     LDR r0, [r0]
		   0x01139DC4:  741090E5     LDR r1, [r0, 0x74]
		   0x01139DC8:  000051E3     CMPS r0, r1, 0x0
		   0x01139DCC:  0000001A     BNE $+0x8  // if (!=) goto 0x01139DD4
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x01139DD0:  2F85F8EB     BL $-0x1deb3c
		   // ──── Block 29 if (!=) ────────────────────
		   0x01139DD4:  0400A0E1     MOV r0, r4
		   0x01139DD8:  0010A0E3     MOV r1, 0x0
		   0x01139DDC:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01139DE0:  E9F83AEA     B $+0xebe3ac
		   // ──── Block 30 if (<=) ────────────────────
		   0x01139DE4:  000055E3     CMPS r0, r5, 0x0
		   0x01139DE8:  0000001A     BNE $+0x8  // if (!=) goto 0x01139DF0
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x01139DEC:  7785F8EB     BL $-0x1dea1c
		   // ──── Block 32 if (!=) ────────────────────
		   0x01139DF0:  085095E5     LDR r5, [r5, 0x8]
		   0x01139DF4:  000055E3     CMPS r0, r5, 0x0
		   0x01139DF8:  0000001A     BNE $+0x8  // if (!=) goto 0x01139E00
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x01139DFC:  7385F8EB     BL $-0x1dea2c
		   // ──── Block 34 if (!=) ────────────────────
		   0x01139E00:  100095E5     LDR r0, [r5, 0x10]
		   0x01139E04:  087095E5     LDR r7, [r5, 0x8]
		   0x01139E08:  0C4095E5     LDR r4, [r5, 0xc]
		   0x01139E0C:  010080E2     ADD r0, r0, 0x1
		   0x01139E10:  C0109FE5     LDR r1, [pc, 0xc0]
		   0x01139E14:  000057E3     CMPS r0, r7, 0x0
		   0x01139E18:  01109FE7     LDR r1, [pc, r1]
		   0x01139E1C:  100085E5     STR r0, [r5, 0x10]
		   0x01139E20:  008091E5     LDR r8, [r1]
		   0x01139E24:  0000001A     BNE $+0x8  // if (!=) goto 0x01139E2C
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x01139E28:  6885F8EB     BL $-0x1dea58
		   // ──── Block 36 if (!=) ────────────────────
		   0x01139E2C:  0C0097E5     LDR r0, [r7, 0xc]
		   0x01139E30:  000054E1     CMPS r0, r4, r0
		   0x01139E34:  0400002A     BHS $+0x18  // if (>= (unsigned)) goto 0x01139E4C
		   // 
		   // ──── Block 37 else (< (unsigned)) ────────────────────
		   0x01139E38:  010084E2     ADD r0, r4, 0x1
		   0x01139E3C:  0C0085E5     STR r0, [r5, 0xc]
		   0x01139E40:  040187E0     ADD r0, r7, r4, lsl 2
		   0x01139E44:  106080E5     STR r6, [r0, 0x10]
		   0x01139E48:  050000EA     B $+0x1c  // goto 0x01139E64
		   // ──── Block 38 if (>= (unsigned)) ────────────────────
		   0x01139E4C:  100098E5     LDR r0, [r8, 0x10]
		   0x01139E50:  0610A0E1     MOV r1, r6
		   0x01139E54:  600090E5     LDR r0, [r0, 0x60]
		   0x01139E58:  382090E5     LDR r2, [r0, 0x38]
		   0x01139E5C:  0500A0E1     MOV r0, r5
		   0x01139E60:  55E36AEB     BL $+0x1ab8d5c  // CALL → List<object>.AddWithResize
		   // ──── Block 39 if (==) ────────────────────
		   0x01139E64:  0900A0E1     MOV r0, sb
		   0x01139E68:  0010A0E3     MOV r1, 0x0
		   0x01139E6C:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01139E70:  C7FCFFEA     B $-0xcdc
		   0x01139E74:  5D240F03     MOVEQ r2, 0xf45d
		   0x01139E78:  38CAF302     RSCSEQ ip, r3, 0x38000
		   0x01139E7C:  90CDF302     RSCSEQ ip, r3, 0x2400
		   0x01139E80:  A005F402     RSCSEQ r0, r4, 0x28000000
		   0x01139E84:  8CF3F302     RSCSEQ pc, r3, 0x30000002
		   0x01139E88:  C005F402     RSCSEQ r0, r4, 0x30000000
		   0x01139E8C:  A405F402     RSCSEQ r0, r4, 0x29000000
		   0x01139E90:  F8F4F302     RSCSEQ pc, r3, 0xf8000000
		   0x01139E94:  60F3F302     RSCSEQ pc, r3, 0x80000001
		   0x01139E98:  9405F402     RSCSEQ r0, r4, 0x25000000
		   0x01139E9C:  8C05F402     RSCSEQ r0, r4, 0x23000000
		   0x01139EA0:  8405F402     RSCSEQ r0, r4, 0x21000000
		   0x01139EA4:  6C05F402     RSCSEQ r0, r4, 0x1b000000
		   0x01139EA8:  D8F2F302     RSCSEQ pc, r3, 0x8000000d
		   0x01139EAC:  F804F402     RSCSEQ r0, r4, 0xf8000000
		   0x01139EB0:  68F2F302     RSCSEQ pc, r3, 0x80000006
		   0x01139EB4:  7004F402     RSCSEQ r0, r4, 0x70000000
		   0x01139EB8:  D1220F03     MOVEQ r2, 0xf2d1
		   0x01139EBC:  6004F402     RSCSEQ r0, r4, 0x60000000
		   0x01139EC0:  4C04F402     RSCSEQ r0, r4, 0x4c000000
		   0x01139EC4:  C803F402     RSCSEQ r0, r4, 0x20000003
		   0x01139EC8:  94F2F302     RSCSEQ pc, r3, 0x40000009
		   0x01139ECC:  5CCBF302     RSCSEQ ip, r3, 0x17000
		   0x01139ED0:  A403F402     RSCSEQ r0, r4, 0x90000002
		   0x01139ED4:  CCC7F302     RSCSEQ ip, r3, 0x3300000
		   0x01139ED8:  F002F402     RSCSEQ r0, r4, 0xf
		*/
	}

	// RVA: 0x1139EE4 Offset: 0x1139EE4 VA: 0x1139EE4
	public void MoveFromInventoryByID(int id) {
		/* Disassembly (ARM32, 167 instructions, 0x29C bytes):
		   // CFG: 26 blocks, 25 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01139EE4:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01139EE8:  44629FE5     LDR r6, [pc, 0x244]
		   0x01139EEC:  0080A0E1     MOV r8, r0
		   0x01139EF0:  0150A0E1     MOV r5, r1
		   0x01139EF4:  06608FE0     ADD r6, pc, r6
		   0x01139EF8:  0000D6E5     LDRB r0, [r6]
		   0x01139EFC:  000050E3     CMPS r0, r0, 0x0
		   0x01139F00:  1C00001A     BNE $+0x78  // if (!=) goto 0x01139F78
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01139F04:  2C029FE5     LDR r0, [pc, 0x22c]
		   0x01139F08:  00009FE7     LDR r0, [pc, r0]
		   0x01139F0C:  9384F8EB     BL $-0x1dedac
		   0x01139F10:  24029FE5     LDR r0, [pc, 0x224]
		   0x01139F14:  00009FE7     LDR r0, [pc, r0]
		   0x01139F18:  9084F8EB     BL $-0x1dedb8
		   0x01139F1C:  1C029FE5     LDR r0, [pc, 0x21c]
		   0x01139F20:  00009FE7     LDR r0, [pc, r0]
		   0x01139F24:  8D84F8EB     BL $-0x1dedc4
		   0x01139F28:  14029FE5     LDR r0, [pc, 0x214]
		   0x01139F2C:  00009FE7     LDR r0, [pc, r0]
		   0x01139F30:  8A84F8EB     BL $-0x1dedd0
		   0x01139F34:  0C029FE5     LDR r0, [pc, 0x20c]
		   0x01139F38:  00009FE7     LDR r0, [pc, r0]
		   0x01139F3C:  8784F8EB     BL $-0x1deddc
		   0x01139F40:  04029FE5     LDR r0, [pc, 0x204]
		   0x01139F44:  00009FE7     LDR r0, [pc, r0]
		   0x01139F48:  8484F8EB     BL $-0x1dede8
		   0x01139F4C:  FC019FE5     LDR r0, [pc, 0x1fc]
		   0x01139F50:  00009FE7     LDR r0, [pc, r0]
		   0x01139F54:  8184F8EB     BL $-0x1dedf4
		   0x01139F58:  F4019FE5     LDR r0, [pc, 0x1f4]
		   0x01139F5C:  00009FE7     LDR r0, [pc, r0]
		   0x01139F60:  7E84F8EB     BL $-0x1dee00
		   0x01139F64:  EC019FE5     LDR r0, [pc, 0x1ec]
		   0x01139F68:  00009FE7     LDR r0, [pc, r0]
		   0x01139F6C:  7B84F8EB     BL $-0x1dee0c
		   0x01139F70:  0100A0E3     MOV r0, 0x1
		   0x01139F74:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01139F78:  DC019FE5     LDR r0, [pc, 0x1dc]
		   0x01139F7C:  00009FE7     LDR r0, [pc, r0]
		   0x01139F80:  000090E5     LDR r0, [r0]
		   0x01139F84:  0E85F8EB     BL $-0x1debc0
		   0x01139F88:  0010A0E3     MOV r1, 0x0
		   0x01139F8C:  0060A0E1     MOV r6, r0
		   0x01139F90:  156D7DEB     BL $+0x1f5b45c  // CALL → Object..ctor
		   0x01139F94:  000056E3     CMPS r0, r6, 0x0
		   0x01139F98:  0000001A     BNE $+0x8  // if (!=) goto 0x01139FA0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01139F9C:  0B85F8EB     BL $-0x1debcc
		   // ──── Block 4 if (!=) ────────────────────
		   0x01139FA0:  104098E5     LDR r4, [r8, 0x10]
		   0x01139FA4:  085086E5     STR r5, [r6, 0x8]
		   0x01139FA8:  000054E3     CMPS r0, r4, 0x0
		   0x01139FAC:  0000001A     BNE $+0x8  // if (!=) goto 0x01139FB4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01139FB0:  0685F8EB     BL $-0x1debe0
		   // ──── Block 6 if (!=) ────────────────────
		   0x01139FB4:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x01139FB8:  00009FE7     LDR r0, [pc, r0]
		   0x01139FBC:  085094E5     LDR r5, [r4, 0x8]
		   0x01139FC0:  000090E5     LDR r0, [r0]
		   0x01139FC4:  FE84F8EB     BL $-0x1dec00
		   0x01139FC8:  0070A0E1     MOV r7, r0
		   0x01139FCC:  90019FE5     LDR r0, [pc, 0x190]
		   0x01139FD0:  0610A0E1     MOV r1, r6
		   0x01139FD4:  0030A0E3     MOV r3, 0x0
		   0x01139FD8:  00009FE7     LDR r0, [pc, r0]
		   0x01139FDC:  002090E5     LDR r2, [r0]
		   0x01139FE0:  0700A0E1     MOV r0, r7
		   0x01139FE4:  A74F32EB     BL $+0xc93ea4  // CALL → Predicate<object>..ctor
		   0x01139FE8:  000055E3     CMPS r0, r5, 0x0
		   0x01139FEC:  0000001A     BNE $+0x8  // if (!=) goto 0x01139FF4
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01139FF0:  F684F8EB     BL $-0x1dec20
		   // ──── Block 8 if (!=) ────────────────────
		   0x01139FF4:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x01139FF8:  0710A0E1     MOV r1, r7
		   0x01139FFC:  00009FE7     LDR r0, [pc, r0]
		   0x0113A000:  002090E5     LDR r2, [r0]
		   0x0113A004:  0500A0E1     MOV r0, r5
		   0x0113A008:  9EE46AEB     BL $+0x1ab9280  // CALL → List<object>.Find
		   0x0113A00C:  000050E3     CMPS r0, r0, 0x0
		   0x0113A010:  2700000A     BEQ $+0xa4  // if (==) goto 0x0113A0B4
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x0113A014:  104098E5     LDR r4, [r8, 0x10]
		   0x0113A018:  0050A0E1     MOV r5, r0
		   0x0113A01C:  000054E3     CMPS r0, r4, 0x0
		   0x0113A020:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A028
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0113A024:  E984F8EB     BL $-0x1dec54
		   // ──── Block 11 if (!=) ────────────────────
		   0x0113A028:  086094E5     LDR r6, [r4, 0x8]
		   0x0113A02C:  000056E3     CMPS r0, r6, 0x0
		   0x0113A030:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A038
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0113A034:  E584F8EB     BL $-0x1dec64
		   // ──── Block 13 if (!=) ────────────────────
		   0x0113A038:  38019FE5     LDR r0, [pc, 0x138]
		   0x0113A03C:  0510A0E1     MOV r1, r5
		   0x0113A040:  00009FE7     LDR r0, [pc, r0]
		   0x0113A044:  002090E5     LDR r2, [r0]
		   0x0113A048:  0600A0E1     MOV r0, r6
		   0x0113A04C:  96E86AEB     BL $+0x1aba260  // CALL → List<object>.Remove
		   0x0113A050:  000050E3     CMPS r0, r0, 0x0
		   0x0113A054:  3200000A     BEQ $+0xd0  // if (==) goto 0x0113A124
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x0113A058:  0C6098E5     LDR r6, [r8, 0xc]
		   0x0113A05C:  000056E3     CMPS r0, r6, 0x0
		   0x0113A060:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A068
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0113A064:  D984F8EB     BL $-0x1dec94
		   // ──── Block 16 if (!=) ────────────────────
		   0x0113A068:  100096E5     LDR r0, [r6, 0x10]
		   0x0113A06C:  087096E5     LDR r7, [r6, 0x8]
		   0x0113A070:  0C4096E5     LDR r4, [r6, 0xc]
		   0x0113A074:  010080E2     ADD r0, r0, 0x1
		   0x0113A078:  FC109FE5     LDR r1, [pc, 0xfc]
		   0x0113A07C:  000057E3     CMPS r0, r7, 0x0
		   0x0113A080:  01109FE7     LDR r1, [pc, r1]
		   0x0113A084:  100086E5     STR r0, [r6, 0x10]
		   0x0113A088:  009091E5     LDR sb, [r1]
		   0x0113A08C:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A094
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x0113A090:  CE84F8EB     BL $-0x1decc0
		   // ──── Block 18 if (!=) ────────────────────
		   0x0113A094:  0C0097E5     LDR r0, [r7, 0xc]
		   0x0113A098:  000054E1     CMPS r0, r4, r0
		   0x0113A09C:  1A00002A     BHS $+0x70  // if (>= (unsigned)) goto 0x0113A10C
		   // 
		   // ──── Block 19 else (< (unsigned)) ────────────────────
		   0x0113A0A0:  010084E2     ADD r0, r4, 0x1
		   0x0113A0A4:  0C0086E5     STR r0, [r6, 0xc]
		   0x0113A0A8:  040187E0     ADD r0, r7, r4, lsl 2
		   0x0113A0AC:  105080E5     STR r5, [r0, 0x10]
		   0x0113A0B0:  1B0000EA     B $+0x74  // goto 0x0113A124
		   // ──── Block 20 if (==) ────────────────────
		   0x0113A0B4:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x0113A0B8:  00009FE7     LDR r0, [pc, r0]
		   0x0113A0BC:  000090E5     LDR r0, [r0]
		   0x0113A0C0:  BF84F8EB     BL $-0x1decfc
		   0x0113A0C4:  0040A0E1     MOV r4, r0
		   0x0113A0C8:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x0113A0CC:  0020A0E3     MOV r2, 0x0
		   0x0113A0D0:  00009FE7     LDR r0, [pc, r0]
		   0x0113A0D4:  001090E5     LDR r1, [r0]
		   0x0113A0D8:  0400A0E1     MOV r0, r4
		   0x0113A0DC:  D63B7DEB     BL $+0x1f4ef60  // CALL → Exception..ctor
		   0x0113A0E0:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x0113A0E4:  00009FE7     LDR r0, [pc, r0]
		   0x0113A0E8:  000090E5     LDR r0, [r0]
		   0x0113A0EC:  741090E5     LDR r1, [r0, 0x74]
		   0x0113A0F0:  000051E3     CMPS r0, r1, 0x0
		   0x0113A0F4:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A0FC
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x0113A0F8:  6584F8EB     BL $-0x1dee64
		   // ──── Block 22 if (!=) ────────────────────
		   0x0113A0FC:  0400A0E1     MOV r0, r4
		   0x0113A100:  0010A0E3     MOV r1, 0x0
		   0x0113A104:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0113A108:  1FF83AEA     B $+0xebe084
		   // ──── Block 23 if (>= (unsigned)) ────────────────────
		   0x0113A10C:  100099E5     LDR r0, [sb, 0x10]
		   0x0113A110:  0510A0E1     MOV r1, r5
		   0x0113A114:  600090E5     LDR r0, [r0, 0x60]
		   0x0113A118:  382090E5     LDR r2, [r0, 0x38]
		   0x0113A11C:  0600A0E1     MOV r0, r6
		   0x0113A120:  A5E26AEB     BL $+0x1ab8a9c  // CALL → List<object>.AddWithResize
		   // ──── Block 24 if (==) ────────────────────
		   0x0113A124:  0800A0E1     MOV r0, r8
		   0x0113A128:  0010A0E3     MOV r1, 0x0
		   0x0113A12C:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0113A130:  17FCFFEA     B $-0xf9c
		   0x0113A134:  A2200F03     MOVEQ r2, 0xf0a2
		   0x0113A138:  80C6F302     RSCSEQ ip, r3, 0x8000000
		   0x0113A13C:  D8C9F302     RSCSEQ ip, r3, 0x360000
		   0x0113A140:  E801F402     RSCSEQ r0, r4, 0x3a
		   0x0113A144:  D4EFF302     RSCSEQ lr, r3, 0x350
		   0x0113A148:  F801F402     RSCSEQ r0, r4, 0x3e
		   0x0113A14C:  C0EFF302     RSCSEQ lr, r3, 0x300
		   0x0113A150:  0402F402     RSCSEQ r0, r4, 0x40000000
		   0x0113A154:  FC01F402     RSCSEQ r0, r4, 0x3f
		   0x0113A158:  F401F402     RSCSEQ r0, r4, 0x3d
		   0x0113A15C:  DC01F402     RSCSEQ r0, r4, 0x37
		   0x0113A160:  4CEFF302     RSCSEQ lr, r3, 0x130
		   0x0113A164:  7C01F402     RSCSEQ r0, r4, 0x1f
		   0x0113A168:  04EFF302     RSCSEQ lr, r3, 0x10
		   0x0113A16C:  34C8F302     RSCSEQ ip, r3, 0x340000
		   0x0113A170:  8C00F402     RSCSEQ r0, r4, 0x8c
		   0x0113A174:  A4C4F302     RSCSEQ ip, r3, 0xa4000000
		   0x0113A178:  F000F402     RSCSEQ r0, r4, 0xf0
		   0x0113A17C:  8800F402     RSCSEQ r0, r4, 0x88
		*/
	}

	// RVA: 0x113A188 Offset: 0x113A188 VA: 0x113A188
	public ItemDataSave RemoveItemDataByID(int id) {
		/* Disassembly (ARM32, 87 instructions, 0x15C bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113A188:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0113A18C:  24619FE5     LDR r6, [pc, 0x124]
		   0x0113A190:  0040A0E1     MOV r4, r0
		   0x0113A194:  0150A0E1     MOV r5, r1
		   0x0113A198:  06608FE0     ADD r6, pc, r6
		   0x0113A19C:  0000D6E5     LDRB r0, [r6]
		   0x0113A1A0:  000050E3     CMPS r0, r0, 0x0
		   0x0113A1A4:  1000001A     BNE $+0x48  // if (!=) goto 0x0113A1EC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113A1A8:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x0113A1AC:  00009FE7     LDR r0, [pc, r0]
		   0x0113A1B0:  EA83F8EB     BL $-0x1df050
		   0x0113A1B4:  04019FE5     LDR r0, [pc, 0x104]
		   0x0113A1B8:  00009FE7     LDR r0, [pc, r0]
		   0x0113A1BC:  E783F8EB     BL $-0x1df05c
		   0x0113A1C0:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x0113A1C4:  00009FE7     LDR r0, [pc, r0]
		   0x0113A1C8:  E483F8EB     BL $-0x1df068
		   0x0113A1CC:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x0113A1D0:  00009FE7     LDR r0, [pc, r0]
		   0x0113A1D4:  E183F8EB     BL $-0x1df074
		   0x0113A1D8:  EC009FE5     LDR r0, [pc, 0xec]
		   0x0113A1DC:  00009FE7     LDR r0, [pc, r0]
		   0x0113A1E0:  DE83F8EB     BL $-0x1df080
		   0x0113A1E4:  0100A0E3     MOV r0, 0x1
		   0x0113A1E8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113A1EC:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x0113A1F0:  00009FE7     LDR r0, [pc, r0]
		   0x0113A1F4:  000090E5     LDR r0, [r0]
		   0x0113A1F8:  7184F8EB     BL $-0x1dee34
		   0x0113A1FC:  0010A0E3     MOV r1, 0x0
		   0x0113A200:  0060A0E1     MOV r6, r0
		   0x0113A204:  786C7DEB     BL $+0x1f5b1e8  // CALL → Object..ctor
		   0x0113A208:  000056E3     CMPS r0, r6, 0x0
		   0x0113A20C:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A214
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0113A210:  6E84F8EB     BL $-0x1dee40
		   // ──── Block 4 if (!=) ────────────────────
		   0x0113A214:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x0113A218:  00009FE7     LDR r0, [pc, r0]
		   0x0113A21C:  0C7094E5     LDR r7, [r4, 0xc]
		   0x0113A220:  085086E5     STR r5, [r6, 0x8]
		   0x0113A224:  000090E5     LDR r0, [r0]
		   0x0113A228:  6584F8EB     BL $-0x1dee64
		   0x0113A22C:  0050A0E1     MOV r5, r0
		   0x0113A230:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x0113A234:  0610A0E1     MOV r1, r6
		   0x0113A238:  0030A0E3     MOV r3, 0x0
		   0x0113A23C:  00009FE7     LDR r0, [pc, r0]
		   0x0113A240:  002090E5     LDR r2, [r0]
		   0x0113A244:  0500A0E1     MOV r0, r5
		   0x0113A248:  0E4F32EB     BL $+0xc93c40  // CALL → Predicate<object>..ctor
		   0x0113A24C:  000057E3     CMPS r0, r7, 0x0
		   0x0113A250:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A258
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0113A254:  5D84F8EB     BL $-0x1dee84
		   // ──── Block 6 if (!=) ────────────────────
		   0x0113A258:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x0113A25C:  0510A0E1     MOV r1, r5
		   0x0113A260:  00009FE7     LDR r0, [pc, r0]
		   0x0113A264:  002090E5     LDR r2, [r0]
		   0x0113A268:  0700A0E1     MOV r0, r7
		   0x0113A26C:  05E46AEB     BL $+0x1ab901c  // CALL → List<object>.Find
		   0x0113A270:  0050A0E1     MOV r5, r0
		   0x0113A274:  000050E3     CMPS r0, r0, 0x0
		   0x0113A278:  0900000A     BEQ $+0x2c  // if (==) goto 0x0113A2A4
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x0113A27C:  0C6094E5     LDR r6, [r4, 0xc]
		   0x0113A280:  000056E3     CMPS r0, r6, 0x0
		   0x0113A284:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A28C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0113A288:  5084F8EB     BL $-0x1deeb8
		   // ──── Block 9 if (!=) ────────────────────
		   0x0113A28C:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x0113A290:  0510A0E1     MOV r1, r5
		   0x0113A294:  00009FE7     LDR r0, [pc, r0]
		   0x0113A298:  002090E5     LDR r2, [r0]
		   0x0113A29C:  0600A0E1     MOV r0, r6
		   0x0113A2A0:  01E86AEB     BL $+0x1aba00c  // CALL → List<object>.Remove
		   // ──── Block 10 if (==) ────────────────────
		   0x0113A2A4:  0400A0E1     MOV r0, r4
		   0x0113A2A8:  0010A0E3     MOV r1, 0x0
		   0x0113A2AC:  B8FBFFEB     BL $-0x1118
		   0x0113A2B0:  0500A0E1     MOV r0, r5
		   0x0113A2B4:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x0113A2B8:  FF1D0F03     MOVEQ r1, 0xfdff
		   0x0113A2BC:  54EDF302     RSCSEQ lr, r3, 0x1500
		   0x0113A2C0:  78FFF302     RSCSEQ pc, r3, 0x1e0
		   0x0113A2C4:  40EDF302     RSCSEQ lr, r3, 0x1000
		   0x0113A2C8:  90FFF302     RSCSEQ pc, r3, 0x240
		   0x0113A2CC:  88FFF302     RSCSEQ pc, r3, 0x220
		   0x0113A2D0:  74FFF302     RSCSEQ pc, r3, 0x1d0
		   0x0113A2D4:  ECECF302     RSCSEQ lr, r3, 0xec00
		   0x0113A2D8:  24FFF302     RSCSEQ pc, r3, 0x90
		   0x0113A2DC:  A0ECF302     RSCSEQ lr, r3, 0xa000
		   0x0113A2E0:  9CFEF302     RSCSEQ pc, r3, 0x9c0
		*/
	}

	// RVA: 0x113A2EC Offset: 0x113A2EC VA: 0x113A2EC
	public void SetItemData(ItemDataSave dataSave) {
		/* Disassembly (ARM32, 88 instructions, 0x160 bytes):
		   // CFG: 15 blocks, 13 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113A2EC:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0113A2F0:  30619FE5     LDR r6, [pc, 0x130]
		   0x0113A2F4:  0080A0E1     MOV r8, r0
		   0x0113A2F8:  0150A0E1     MOV r5, r1
		   0x0113A2FC:  06608FE0     ADD r6, pc, r6
		   0x0113A300:  0000D6E5     LDRB r0, [r6]
		   0x0113A304:  000050E3     CMPS r0, r0, 0x0
		   0x0113A308:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0113A344
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113A30C:  18019FE5     LDR r0, [pc, 0x118]
		   0x0113A310:  00009FE7     LDR r0, [pc, r0]
		   0x0113A314:  9183F8EB     BL $-0x1df1b4
		   0x0113A318:  10019FE5     LDR r0, [pc, 0x110]
		   0x0113A31C:  00009FE7     LDR r0, [pc, r0]
		   0x0113A320:  8E83F8EB     BL $-0x1df1c0
		   0x0113A324:  08019FE5     LDR r0, [pc, 0x108]
		   0x0113A328:  00009FE7     LDR r0, [pc, r0]
		   0x0113A32C:  8B83F8EB     BL $-0x1df1cc
		   0x0113A330:  00019FE5     LDR r0, [pc, 0x100]
		   0x0113A334:  00009FE7     LDR r0, [pc, r0]
		   0x0113A338:  8883F8EB     BL $-0x1df1d8
		   0x0113A33C:  0100A0E3     MOV r0, 0x1
		   0x0113A340:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113A344:  000055E3     CMPS r0, r5, 0x0
		   0x0113A348:  1600000A     BEQ $+0x60  // if (==) goto 0x0113A3A8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0113A34C:  0C6098E5     LDR r6, [r8, 0xc]
		   0x0113A350:  000056E3     CMPS r0, r6, 0x0
		   0x0113A354:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A35C
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0113A358:  1C84F8EB     BL $-0x1def88
		   // ──── Block 5 if (!=) ────────────────────
		   0x0113A35C:  100096E5     LDR r0, [r6, 0x10]
		   0x0113A360:  087096E5     LDR r7, [r6, 0x8]
		   0x0113A364:  0C4096E5     LDR r4, [r6, 0xc]
		   0x0113A368:  010080E2     ADD r0, r0, 0x1
		   0x0113A36C:  D4109FE5     LDR r1, [pc, 0xd4]
		   0x0113A370:  000057E3     CMPS r0, r7, 0x0
		   0x0113A374:  01109FE7     LDR r1, [pc, r1]
		   0x0113A378:  100086E5     STR r0, [r6, 0x10]
		   0x0113A37C:  009091E5     LDR sb, [r1]
		   0x0113A380:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A388
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0113A384:  1184F8EB     BL $-0x1defb4
		   // ──── Block 7 if (!=) ────────────────────
		   0x0113A388:  0C0097E5     LDR r0, [r7, 0xc]
		   0x0113A38C:  000054E1     CMPS r0, r4, r0
		   0x0113A390:  1A00002A     BHS $+0x70  // if (>= (unsigned)) goto 0x0113A400
		   // 
		   // ──── Block 8 else (< (unsigned)) ────────────────────
		   0x0113A394:  010084E2     ADD r0, r4, 0x1
		   0x0113A398:  0C0086E5     STR r0, [r6, 0xc]
		   0x0113A39C:  040187E0     ADD r0, r7, r4, lsl 2
		   0x0113A3A0:  105080E5     STR r5, [r0, 0x10]
		   0x0113A3A4:  1B0000EA     B $+0x74  // goto 0x0113A418
		   // ──── Block 9 if (==) ────────────────────
		   0x0113A3A8:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x0113A3AC:  00009FE7     LDR r0, [pc, r0]
		   0x0113A3B0:  000090E5     LDR r0, [r0]
		   0x0113A3B4:  0284F8EB     BL $-0x1deff0
		   0x0113A3B8:  0040A0E1     MOV r4, r0
		   0x0113A3BC:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x0113A3C0:  0020A0E3     MOV r2, 0x0
		   0x0113A3C4:  00009FE7     LDR r0, [pc, r0]
		   0x0113A3C8:  001090E5     LDR r1, [r0]
		   0x0113A3CC:  0400A0E1     MOV r0, r4
		   0x0113A3D0:  193B7DEB     BL $+0x1f4ec6c  // CALL → Exception..ctor
		   0x0113A3D4:  68009FE5     LDR r0, [pc, 0x68]
		   0x0113A3D8:  00009FE7     LDR r0, [pc, r0]
		   0x0113A3DC:  000090E5     LDR r0, [r0]
		   0x0113A3E0:  741090E5     LDR r1, [r0, 0x74]
		   0x0113A3E4:  000051E3     CMPS r0, r1, 0x0
		   0x0113A3E8:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A3F0
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0113A3EC:  A883F8EB     BL $-0x1df158
		   // ──── Block 11 if (!=) ────────────────────
		   0x0113A3F0:  0400A0E1     MOV r0, r4
		   0x0113A3F4:  0010A0E3     MOV r1, 0x0
		   0x0113A3F8:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0113A3FC:  62F73AEA     B $+0xebdd90
		   // ──── Block 12 if (>= (unsigned)) ────────────────────
		   0x0113A400:  100099E5     LDR r0, [sb, 0x10]
		   0x0113A404:  0510A0E1     MOV r1, r5
		   0x0113A408:  600090E5     LDR r0, [r0, 0x60]
		   0x0113A40C:  382090E5     LDR r2, [r0, 0x38]
		   0x0113A410:  0600A0E1     MOV r0, r6
		   0x0113A414:  E8E16AEB     BL $+0x1ab87a8  // CALL → List<object>.AddWithResize
		   // ──── Block 13 ──────────────────────────────
		   0x0113A418:  0800A0E1     MOV r0, r8
		   0x0113A41C:  0010A0E3     MOV r1, 0x0
		   0x0113A420:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0113A424:  5AFBFFEA     B $-0x1290
		   0x0113A428:  9C1C0F03     MOVEQ r1, 0xfc9c
		   0x0113A42C:  78C2F302     RSCSEQ ip, r3, 0x80000007
		   0x0113A430:  D0C5F302     RSCSEQ ip, r3, 0x34000000
		   0x0113A434:  E0FDF302     RSCSEQ pc, r3, 0x3800
		   0x0113A438:  34FEF302     RSCSEQ pc, r3, 0x340
		   0x0113A43C:  40C5F302     RSCSEQ ip, r3, 0x10000000
		   0x0113A440:  A4FDF302     RSCSEQ pc, r3, 0x2900
		   0x0113A444:  B0C1F302     RSCSEQ ip, r3, 0x2c
		   0x0113A448:  94FDF302     RSCSEQ pc, r3, 0x2500
		*/
	}

	// RVA: 0x113A44C Offset: 0x113A44C VA: 0x113A44C
	public void ResetSave() {
		/* Disassembly (ARM32, 94 instructions, 0x178 bytes):
		   // CFG: 22 blocks, 20 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113A44C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0113A450:  54519FE5     LDR r5, [pc, 0x154]
		   0x0113A454:  0040A0E1     MOV r4, r0
		   0x0113A458:  05508FE0     ADD r5, pc, r5
		   0x0113A45C:  0000D5E5     LDRB r0, [r5]
		   0x0113A460:  000050E3     CMPS r0, r0, 0x0
		   0x0113A464:  0A00001A     BNE $+0x30  // if (!=) goto 0x0113A494
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113A468:  40019FE5     LDR r0, [pc, 0x140]
		   0x0113A46C:  00009FE7     LDR r0, [pc, r0]
		   0x0113A470:  3A83F8EB     BL $-0x1df310
		   0x0113A474:  38019FE5     LDR r0, [pc, 0x138]
		   0x0113A478:  00009FE7     LDR r0, [pc, r0]
		   0x0113A47C:  3783F8EB     BL $-0x1df31c
		   0x0113A480:  30019FE5     LDR r0, [pc, 0x130]
		   0x0113A484:  00009FE7     LDR r0, [pc, r0]
		   0x0113A488:  3483F8EB     BL $-0x1df328
		   0x0113A48C:  0100A0E3     MOV r0, 0x1
		   0x0113A490:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113A494:  145094E5     LDR r5, [r4, 0x14]
		   0x0113A498:  000055E3     CMPS r0, r5, 0x0
		   0x0113A49C:  0B00000A     BEQ $+0x34  // if (==) goto 0x0113A4D0
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0113A4A0:  14019FE5     LDR r0, [pc, 0x114]
		   0x0113A4A4:  00009FE7     LDR r0, [pc, r0]
		   0x0113A4A8:  000090E5     LDR r0, [r0]
		   0x0113A4AC:  741090E5     LDR r1, [r0, 0x74]
		   0x0113A4B0:  000051E3     CMPS r0, r1, 0x0
		   0x0113A4B4:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A4BC
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0113A4B8:  7583F8EB     BL $-0x1df224
		   // ──── Block 5 if (!=) ────────────────────
		   0x0113A4BC:  0500A0E1     MOV r0, r5
		   0x0113A4C0:  0010A0E3     MOV r1, 0x0
		   0x0113A4C4:  0060A0E3     MOV r6, 0x0
		   0x0113A4C8:  5FF73AEB     BL $+0xebdd84  // CALL → sub_1FF824C
		   0x0113A4CC:  146084E5     STR r6, [r4, 0x14]
		   // ──── Block 6 if (==) ────────────────────
		   0x0113A4D0:  0400A0E1     MOV r0, r4
		   0x0113A4D4:  BBFAFFEB     BL $-0x150c
		   0x0113A4D8:  0050A0E1     MOV r5, r0
		   0x0113A4DC:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x0113A4E0:  00009FE7     LDR r0, [pc, r0]
		   0x0113A4E4:  000090E5     LDR r0, [r0]
		   0x0113A4E8:  741090E5     LDR r1, [r0, 0x74]
		   0x0113A4EC:  000051E3     CMPS r0, r1, 0x0
		   0x0113A4F0:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A4F8
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0113A4F4:  6683F8EB     BL $-0x1df260
		   // ──── Block 8 if (!=) ────────────────────
		   0x0113A4F8:  0500A0E1     MOV r0, r5
		   0x0113A4FC:  0010A0E3     MOV r1, 0x0
		   0x0113A500:  C082FDEB     BL $-0x9f4f8
		   0x0113A504:  105094E5     LDR r5, [r4, 0x10]
		   0x0113A508:  000055E3     CMPS r0, r5, 0x0
		   0x0113A50C:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A514
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0113A510:  AE83F8EB     BL $-0x1df140
		   // ──── Block 10 if (!=) ────────────────────
		   0x0113A514:  085095E5     LDR r5, [r5, 0x8]
		   0x0113A518:  000055E3     CMPS r0, r5, 0x0
		   0x0113A51C:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A524
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0113A520:  AA83F8EB     BL $-0x1df150
		   // ──── Block 12 if (!=) ────────────────────
		   0x0113A524:  DC20C5E1     LDRD r2, r3, [r5, 0xc]
		   0x0113A528:  011083E2     ADD r1, r3, 0x1
		   0x0113A52C:  0000A0E3     MOV r0, 0x0
		   0x0113A530:  010052E3     CMPS r0, r2, 0x1
		   0x0113A534:  FC00C5E1     STRD r0, r1, [r5, 0xc]
		   0x0113A538:  030000BA     BLT $+0x14  // if (<) goto 0x0113A54C
		   // 
		   // ──── Block 13 else (>=) ────────────────────
		   0x0113A53C:  080095E5     LDR r0, [r5, 0x8]
		   0x0113A540:  0010A0E3     MOV r1, 0x0
		   0x0113A544:  0030A0E3     MOV r3, 0x0
		   0x0113A548:  BAD87CEB     BL $+0x1f362f0  // CALL → Array.Clear
		   // ──── Block 14 if (<) ────────────────────
		   0x0113A54C:  105094E5     LDR r5, [r4, 0x10]
		   0x0113A550:  000055E3     CMPS r0, r5, 0x0
		   0x0113A554:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A55C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0113A558:  9C83F8EB     BL $-0x1df188
		   // ──── Block 16 if (!=) ────────────────────
		   0x0113A55C:  0500A0E1     MOV r0, r5
		   0x0113A560:  170000EB     BL $+0x64  // CALL → InventorySave.Save
		   0x0113A564:  0C4094E5     LDR r4, [r4, 0xc]
		   0x0113A568:  000054E3     CMPS r0, r4, 0x0
		   0x0113A56C:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A574
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x0113A570:  9683F8EB     BL $-0x1df1a0
		   // ──── Block 18 if (!=) ────────────────────
		   0x0113A574:  DC20C4E1     LDRD r2, r3, [r4, 0xc]
		   0x0113A578:  011083E2     ADD r1, r3, 0x1
		   0x0113A57C:  0000A0E3     MOV r0, 0x0
		   0x0113A580:  010052E3     CMPS r0, r2, 0x1
		   0x0113A584:  FC00C4E1     STRD r0, r1, [r4, 0xc]
		   0x0113A588:  030000BA     BLT $+0x14  // if (<) goto 0x0113A59C
		   // 
		   // ──── Block 19 else (>=) ────────────────────
		   0x0113A58C:  080094E5     LDR r0, [r4, 0x8]
		   0x0113A590:  0010A0E3     MOV r1, 0x0
		   0x0113A594:  0030A0E3     MOV r3, 0x0
		   0x0113A598:  A6D87CEB     BL $+0x1f362a0  // CALL → Array.Clear
		   // ──── Block 20 if (<) ────────────────────
		   0x0113A59C:  0000A0E3     MOV r0, 0x0
		   0x0113A5A0:  0010A0E3     MOV r1, 0x0
		   0x0113A5A4:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0113A5A8:  FE3EFDEA     B $-0xb0400
		   0x0113A5AC:  411B0F03     MOVEQ r1, 0xfb41
		   0x0113A5B0:  CCD1F302     RSCSEQ sp, r3, 0x33
		   0x0113A5B4:  28F8F302     RSCSEQ pc, r3, 0x280000
		   0x0113A5B8:  ACD1F302     RSCSEQ sp, r3, 0x2b
		   0x0113A5BC:  8CD1F302     RSCSEQ sp, r3, 0x23
		   0x0113A5C0:  58D1F302     RSCSEQ sp, r3, 0x16
		*/
	}

	// RVA: 0x113A6B4 Offset: 0x113A6B4 VA: 0x113A6B4
	public void DeleteFieldSave() {
		/* Disassembly (ARM32, 72 instructions, 0x120 bytes):
		   // CFG: 14 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113A6B4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0113A6B8:  FC509FE5     LDR r5, [pc, 0xfc]
		   0x0113A6BC:  0040A0E1     MOV r4, r0
		   0x0113A6C0:  05508FE0     ADD r5, pc, r5
		   0x0113A6C4:  0000D5E5     LDRB r0, [r5]
		   0x0113A6C8:  000050E3     CMPS r0, r0, 0x0
		   0x0113A6CC:  0A00001A     BNE $+0x30  // if (!=) goto 0x0113A6FC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113A6D0:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x0113A6D4:  00009FE7     LDR r0, [pc, r0]
		   0x0113A6D8:  A082F8EB     BL $-0x1df578
		   0x0113A6DC:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x0113A6E0:  00009FE7     LDR r0, [pc, r0]
		   0x0113A6E4:  9D82F8EB     BL $-0x1df584
		   0x0113A6E8:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x0113A6EC:  00009FE7     LDR r0, [pc, r0]
		   0x0113A6F0:  9A82F8EB     BL $-0x1df590
		   0x0113A6F4:  0100A0E3     MOV r0, 0x1
		   0x0113A6F8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113A6FC:  145094E5     LDR r5, [r4, 0x14]
		   0x0113A700:  000055E3     CMPS r0, r5, 0x0
		   0x0113A704:  0B00000A     BEQ $+0x34  // if (==) goto 0x0113A738
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0113A708:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x0113A70C:  00009FE7     LDR r0, [pc, r0]
		   0x0113A710:  000090E5     LDR r0, [r0]
		   0x0113A714:  741090E5     LDR r1, [r0, 0x74]
		   0x0113A718:  000051E3     CMPS r0, r1, 0x0
		   0x0113A71C:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A724
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0113A720:  DB82F8EB     BL $-0x1df48c
		   // ──── Block 5 if (!=) ────────────────────
		   0x0113A724:  0500A0E1     MOV r0, r5
		   0x0113A728:  0010A0E3     MOV r1, 0x0
		   0x0113A72C:  0060A0E3     MOV r6, 0x0
		   0x0113A730:  C5F63AEB     BL $+0xebdb1c  // CALL → sub_1FF824C
		   0x0113A734:  146084E5     STR r6, [r4, 0x14]
		   // ──── Block 6 if (==) ────────────────────
		   0x0113A738:  0400A0E1     MOV r0, r4
		   0x0113A73C:  240000EB     BL $+0x98  // CALL → GameStateSave.DestroyFieldsItemsSaves
		   0x0113A740:  0C5094E5     LDR r5, [r4, 0xc]
		   0x0113A744:  000055E3     CMPS r0, r5, 0x0
		   0x0113A748:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A750
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0113A74C:  1F83F8EB     BL $-0x1df37c
		   // ──── Block 8 if (!=) ────────────────────
		   0x0113A750:  DC20C5E1     LDRD r2, r3, [r5, 0xc]
		   0x0113A754:  011083E2     ADD r1, r3, 0x1
		   0x0113A758:  0000A0E3     MOV r0, 0x0
		   0x0113A75C:  010052E3     CMPS r0, r2, 0x1
		   0x0113A760:  FC00C5E1     STRD r0, r1, [r5, 0xc]
		   0x0113A764:  030000BA     BLT $+0x14  // if (<) goto 0x0113A778
		   // 
		   // ──── Block 9 else (>=) ────────────────────
		   0x0113A768:  080095E5     LDR r0, [r5, 0x8]
		   0x0113A76C:  0010A0E3     MOV r1, 0x0
		   0x0113A770:  0030A0E3     MOV r3, 0x0
		   0x0113A774:  2FD87CEB     BL $+0x1f360c4  // CALL → Array.Clear
		   // ──── Block 10 if (<) ────────────────────
		   0x0113A778:  0400A0E1     MOV r0, r4
		   0x0113A77C:  11FAFFEB     BL $-0x17b4
		   0x0113A780:  0040A0E1     MOV r4, r0
		   0x0113A784:  44009FE5     LDR r0, [pc, 0x44]
		   0x0113A788:  00009FE7     LDR r0, [pc, r0]
		   0x0113A78C:  000090E5     LDR r0, [r0]
		   0x0113A790:  741090E5     LDR r1, [r0, 0x74]
		   0x0113A794:  000051E3     CMPS r0, r1, 0x0
		   0x0113A798:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A7A0
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0113A79C:  BC82F8EB     BL $-0x1df508
		   // ──── Block 12 if (!=) ────────────────────
		   0x0113A7A0:  0400A0E1     MOV r0, r4
		   0x0113A7A4:  0010A0E3     MOV r1, 0x0
		   0x0113A7A8:  1682FDEB     BL $-0x9f7a0
		   0x0113A7AC:  0000A0E3     MOV r0, 0x0
		   0x0113A7B0:  0010A0E3     MOV r1, 0x0
		   0x0113A7B4:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0113A7B8:  7A3EFDEA     B $-0xb0610
		   0x0113A7BC:  DA180F03     MOVEQ r1, 0xf8da
		   0x0113A7C0:  64CFF302     RSCSEQ ip, r3, 0x190
		   0x0113A7C4:  C0F5F302     RSCSEQ pc, r3, 0x30000000
		   0x0113A7C8:  44CFF302     RSCSEQ ip, r3, 0x110
		   0x0113A7CC:  24CFF302     RSCSEQ ip, r3, 0x90
		   0x0113A7D0:  B0CEF302     RSCSEQ ip, r3, 0xb00
		*/
	}

	// RVA: 0x1139194 Offset: 0x1139194 VA: 0x1139194
	public void Save(bool forced = false) {
		/* Disassembly (ARM32, 32 instructions, 0x80 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01139194:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01139198:  74609FE5     LDR r6, [pc, 0x74]
		   0x0113919C:  0040A0E1     MOV r4, r0
		   0x011391A0:  0150A0E1     MOV r5, r1
		   0x011391A4:  06608FE0     ADD r6, pc, r6
		   0x011391A8:  0000D6E5     LDRB r0, [r6]
		   0x011391AC:  000050E3     CMPS r0, r0, 0x0
		   0x011391B0:  0400001A     BNE $+0x18  // if (!=) goto 0x011391C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011391B4:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x011391B8:  00009FE7     LDR r0, [pc, r0]
		   0x011391BC:  E787F8EB     BL $-0x1de05c
		   0x011391C0:  0100A0E3     MOV r0, 0x1
		   0x011391C4:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011391C8:  140094E5     LDR r0, [r4, 0x14]
		   0x011391CC:  000050E3     CMPS r0, r0, 0x0
		   0x011391D0:  7080BD18     POPNE {r4, r5, r6, pc}
		   0x011391D4:  0400A0E1     MOV r0, r4
		   0x011391D8:  0510A0E1     MOV r1, r5
		   0x011391DC:  E00500EB     BL $+0x1788  // CALL → GameStateSave.SaveAsync
		   0x011391E0:  0050A0E1     MOV r5, r0
		   0x011391E4:  30009FE5     LDR r0, [pc, 0x30]
		   0x011391E8:  00009FE7     LDR r0, [pc, r0]
		   0x011391EC:  000090E5     LDR r0, [r0]
		   0x011391F0:  741090E5     LDR r1, [r0, 0x74]
		   0x011391F4:  000051E3     CMPS r0, r1, 0x0
		   0x011391F8:  0000001A     BNE $+0x8  // if (!=) goto 0x01139200
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x011391FC:  2488F8EB     BL $-0x1ddf68
		   // ──── Block 5 if (!=) ────────────────────
		   0x01139200:  0500A0E1     MOV r0, r5
		   0x01139204:  0010A0E3     MOV r1, 0x0
		   0x01139208:  E1FB3AEB     BL $+0xebef8c  // CALL → sub_1FF8194
		   0x0113920C:  140084E5     STR r0, [r4, 0x14]
		   0x01139210:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	[IteratorStateMachine]
	// RVA: 0x113A964 Offset: 0x113A964 VA: 0x113A964
	private IEnumerator SaveAsync(bool forced) {
		/* Disassembly (ARM32, 29 instructions, 0x74 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113A964:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0113A968:  5C609FE5     LDR r6, [pc, 0x5c]
		   0x0113A96C:  0050A0E1     MOV r5, r0
		   0x0113A970:  0140A0E1     MOV r4, r1
		   0x0113A974:  06608FE0     ADD r6, pc, r6
		   0x0113A978:  0000D6E5     LDRB r0, [r6]
		   0x0113A97C:  000050E3     CMPS r0, r0, 0x0
		   0x0113A980:  0400001A     BNE $+0x18  // if (!=) goto 0x0113A998
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113A984:  44009FE5     LDR r0, [pc, 0x44]
		   0x0113A988:  00009FE7     LDR r0, [pc, r0]
		   0x0113A98C:  F381F8EB     BL $-0x1df82c
		   0x0113A990:  0100A0E3     MOV r0, 0x1
		   0x0113A994:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113A998:  34009FE5     LDR r0, [pc, 0x34]
		   0x0113A99C:  00009FE7     LDR r0, [pc, r0]
		   0x0113A9A0:  000090E5     LDR r0, [r0]
		   0x0113A9A4:  8682F8EB     BL $-0x1df5e0
		   0x0113A9A8:  0010A0E3     MOV r1, 0x0
		   0x0113A9AC:  0060A0E1     MOV r6, r0
		   0x0113A9B0:  0070A0E3     MOV r7, 0x0
		   0x0113A9B4:  8C6A7DEB     BL $+0x1f5aa38  // CALL → Object..ctor
		   0x0113A9B8:  0600A0E1     MOV r0, r6
		   0x0113A9BC:  145086E5     STR r5, [r6, 0x14]
		   0x0113A9C0:  087086E5     STR r7, [r6, 0x8]
		   0x0113A9C4:  1040C6E5     STRB r4, [r6, 0x10]
		   0x0113A9C8:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x0113A9CC:  28160F03     MOVEQ r1, 0xf628
		   0x0113A9D0:  ECF7F302     RSCSEQ pc, r3, 0x3b00000
		   0x0113A9D4:  D8F7F302     RSCSEQ pc, r3, 0x3600000
		*/
	}

	// RVA: 0x112407C Offset: 0x112407C VA: 0x112407C
	public void Load() {
		/* Disassembly (ARM32, 38 instructions, 0x98 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0112407C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01124080:  2CD04DE2     SUB sp, sp, 0x2c
		   0x01124084:  88429FE5     LDR r4, [pc, 0x288]
		   0x01124088:  0090A0E1     MOV sb, r0
		   0x0112408C:  04408FE0     ADD r4, pc, r4
		   0x01124090:  0000D4E5     LDRB r0, [r4]
		   0x01124094:  000050E3     CMPS r0, r0, 0x0
		   0x01124098:  1C00001A     BNE $+0x78  // if (!=) goto 0x01124110
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0112409C:  74029FE5     LDR r0, [pc, 0x274]
		   0x011240A0:  00009FE7     LDR r0, [pc, r0]
		   0x011240A4:  2DDCF8EB     BL $-0x1c8f44
		   0x011240A8:  6C029FE5     LDR r0, [pc, 0x26c]
		   0x011240AC:  00009FE7     LDR r0, [pc, r0]
		   0x011240B0:  2ADCF8EB     BL $-0x1c8f50
		   0x011240B4:  64029FE5     LDR r0, [pc, 0x264]
		   0x011240B8:  00009FE7     LDR r0, [pc, r0]
		   0x011240BC:  27DCF8EB     BL $-0x1c8f5c
		   0x011240C0:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x011240C4:  00009FE7     LDR r0, [pc, r0]
		   0x011240C8:  24DCF8EB     BL $-0x1c8f68
		   0x011240CC:  54029FE5     LDR r0, [pc, 0x254]
		   0x011240D0:  00009FE7     LDR r0, [pc, r0]
		   0x011240D4:  21DCF8EB     BL $-0x1c8f74
		   0x011240D8:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x011240DC:  00009FE7     LDR r0, [pc, r0]
		   0x011240E0:  1EDCF8EB     BL $-0x1c8f80
		   0x011240E4:  44029FE5     LDR r0, [pc, 0x244]
		   0x011240E8:  00009FE7     LDR r0, [pc, r0]
		   0x011240EC:  1BDCF8EB     BL $-0x1c8f8c
		   0x011240F0:  3C029FE5     LDR r0, [pc, 0x23c]
		   0x011240F4:  00009FE7     LDR r0, [pc, r0]
		   0x011240F8:  18DCF8EB     BL $-0x1c8f98
		   0x011240FC:  34029FE5     LDR r0, [pc, 0x234]
		   0x01124100:  00009FE7     LDR r0, [pc, r0]
		   0x01124104:  15DCF8EB     BL $-0x1c8fa4
		   0x01124108:  0100A0E3     MOV r0, 0x1
		   0x0112410C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01124110:  105099E5     LDR r5, [sb, 0x10]
		*/
	}

	// RVA: 0x113AE74 Offset: 0x113AE74 VA: 0x113AE74
	public List<ItemDataSave> GetFieldData() {
		/* Disassembly (ARM32, 37 instructions, 0x94 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113AE74:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0113AE78:  28D04DE2     SUB sp, sp, 0x28
		   0x0113AE7C:  34529FE5     LDR r5, [pc, 0x234]
		   0x0113AE80:  0040A0E1     MOV r4, r0
		   0x0113AE84:  05508FE0     ADD r5, pc, r5
		   0x0113AE88:  0000D5E5     LDRB r0, [r5]
		   0x0113AE8C:  000050E3     CMPS r0, r0, 0x0
		   0x0113AE90:  1C00001A     BNE $+0x78
		   0x0113AE94:  20029FE5     LDR r0, [pc, 0x220]
		   0x0113AE98:  00009FE7     LDR r0, [pc, r0]
		   0x0113AE9C:  AF80F8EB     BL $-0x1dfd3c
		   0x0113AEA0:  18029FE5     LDR r0, [pc, 0x218]
		   0x0113AEA4:  00009FE7     LDR r0, [pc, r0]
		   0x0113AEA8:  AC80F8EB     BL $-0x1dfd48
		   0x0113AEAC:  10029FE5     LDR r0, [pc, 0x210]
		   0x0113AEB0:  00009FE7     LDR r0, [pc, r0]
		   0x0113AEB4:  A980F8EB     BL $-0x1dfd54
		   0x0113AEB8:  08029FE5     LDR r0, [pc, 0x208]
		   0x0113AEBC:  00009FE7     LDR r0, [pc, r0]
		   0x0113AEC0:  A680F8EB     BL $-0x1dfd60
		   0x0113AEC4:  00029FE5     LDR r0, [pc, 0x200]
		   0x0113AEC8:  00009FE7     LDR r0, [pc, r0]
		   0x0113AECC:  A380F8EB     BL $-0x1dfd6c
		   0x0113AED0:  F8019FE5     LDR r0, [pc, 0x1f8]
		   0x0113AED4:  00009FE7     LDR r0, [pc, r0]
		   0x0113AED8:  A080F8EB     BL $-0x1dfd78
		   0x0113AEDC:  F0019FE5     LDR r0, [pc, 0x1f0]
		   0x0113AEE0:  00009FE7     LDR r0, [pc, r0]
		   0x0113AEE4:  9D80F8EB     BL $-0x1dfd84
		   0x0113AEE8:  E8019FE5     LDR r0, [pc, 0x1e8]
		   0x0113AEEC:  00009FE7     LDR r0, [pc, r0]
		   0x0113AEF0:  9A80F8EB     BL $-0x1dfd90
		   0x0113AEF4:  E0019FE5     LDR r0, [pc, 0x1e0]
		   0x0113AEF8:  00009FE7     LDR r0, [pc, r0]
		   0x0113AEFC:  9780F8EB     BL $-0x1dfd9c
		   0x0113AF00:  0100A0E3     MOV r0, 0x1
		   0x0113AF04:  0000C5E5     STRB r0, [r5]
		*/
	}

	// RVA: 0x113ACD0 Offset: 0x113ACD0 VA: 0x113ACD0
	private void RemoveRewardsBox(List<ItemDataSave> cField) {
		/* Disassembly (ARM32, 105 instructions, 0x1A4 bytes):
		   // CFG: 16 blocks, 15 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113ACD0:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0113ACD4:  68419FE5     LDR r4, [pc, 0x168]
		   0x0113ACD8:  0080A0E1     MOV r8, r0
		   0x0113ACDC:  0150A0E1     MOV r5, r1
		   0x0113ACE0:  04408FE0     ADD r4, pc, r4
		   0x0113ACE4:  0000D4E5     LDRB r0, [r4]
		   0x0113ACE8:  000050E3     CMPS r0, r0, 0x0
		   0x0113ACEC:  1000001A     BNE $+0x48  // if (!=) goto 0x0113AD34
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113ACF0:  50019FE5     LDR r0, [pc, 0x150]
		   0x0113ACF4:  00009FE7     LDR r0, [pc, r0]
		   0x0113ACF8:  1881F8EB     BL $-0x1dfb98
		   0x0113ACFC:  48019FE5     LDR r0, [pc, 0x148]
		   0x0113AD00:  00009FE7     LDR r0, [pc, r0]
		   0x0113AD04:  1581F8EB     BL $-0x1dfba4
		   0x0113AD08:  40019FE5     LDR r0, [pc, 0x140]
		   0x0113AD0C:  00009FE7     LDR r0, [pc, r0]
		   0x0113AD10:  1281F8EB     BL $-0x1dfbb0
		   0x0113AD14:  38019FE5     LDR r0, [pc, 0x138]
		   0x0113AD18:  00009FE7     LDR r0, [pc, r0]
		   0x0113AD1C:  0F81F8EB     BL $-0x1dfbbc
		   0x0113AD20:  30019FE5     LDR r0, [pc, 0x130]
		   0x0113AD24:  00009FE7     LDR r0, [pc, r0]
		   0x0113AD28:  0C81F8EB     BL $-0x1dfbc8
		   0x0113AD2C:  0100A0E3     MOV r0, 0x1
		   0x0113AD30:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113AD34:  20419FE5     LDR r4, [pc, 0x120]
		   0x0113AD38:  04409FE7     LDR r4, [pc, r4]
		   0x0113AD3C:  000094E5     LDR r0, [r4]
		   0x0113AD40:  741090E5     LDR r1, [r0, 0x74]
		   0x0113AD44:  000051E3     CMPS r0, r1, 0x0
		   0x0113AD48:  0100001A     BNE $+0xc  // if (!=) goto 0x0113AD54
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0113AD4C:  5081F8EB     BL $-0x1dfab8
		   0x0113AD50:  000094E5     LDR r0, [r4]
		   // ──── Block 4 if (!=) ────────────────────
		   0x0113AD54:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x0113AD58:  046091E5     LDR r6, [r1, 0x4]
		   0x0113AD5C:  000056E3     CMPS r0, r6, 0x0
		   0x0113AD60:  1500001A     BNE $+0x5c  // if (!=) goto 0x0113ADBC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0113AD64:  742090E5     LDR r2, [r0, 0x74]
		   0x0113AD68:  000052E3     CMPS r0, r2, 0x0
		   0x0113AD6C:  0200001A     BNE $+0x10  // if (!=) goto 0x0113AD7C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0113AD70:  4781F8EB     BL $-0x1dfadc
		   0x0113AD74:  000094E5     LDR r0, [r4]
		   0x0113AD78:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 7 if (!=) ────────────────────
		   0x0113AD7C:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x0113AD80:  00009FE7     LDR r0, [pc, r0]
		   0x0113AD84:  007091E5     LDR r7, [r1]
		   0x0113AD88:  000090E5     LDR r0, [r0]
		   0x0113AD8C:  8C81F8EB     BL $-0x1df9c8
		   0x0113AD90:  0060A0E1     MOV r6, r0
		   0x0113AD94:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x0113AD98:  0710A0E1     MOV r1, r7
		   0x0113AD9C:  0030A0E3     MOV r3, 0x0
		   0x0113ADA0:  00009FE7     LDR r0, [pc, r0]
		   0x0113ADA4:  002090E5     LDR r2, [r0]
		   0x0113ADA8:  0600A0E1     MOV r0, r6
		   0x0113ADAC:  354C32EB     BL $+0xc930dc  // CALL → Predicate<object>..ctor
		   0x0113ADB0:  000094E5     LDR r0, [r4]
		   0x0113ADB4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0113ADB8:  046080E5     STR r6, [r0, 0x4]
		   // ──── Block 8 if (!=) ────────────────────
		   0x0113ADBC:  000055E3     CMPS r0, r5, 0x0
		   0x0113ADC0:  0900000A     BEQ $+0x2c  // if (==) goto 0x0113ADEC
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x0113ADC4:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x0113ADC8:  0610A0E1     MOV r1, r6
		   0x0113ADCC:  00009FE7     LDR r0, [pc, r0]
		   0x0113ADD0:  002090E5     LDR r2, [r0]
		   0x0113ADD4:  0500A0E1     MOV r0, r5
		   0x0113ADD8:  2AE16AEB     BL $+0x1ab84b0  // CALL → List<object>.Find
		   0x0113ADDC:  0060A0E1     MOV r6, r0
		   0x0113ADE0:  000050E3     CMPS r0, r0, 0x0
		   0x0113ADE4:  0B00001A     BNE $+0x34  // if (!=) goto 0x0113AE18
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0113ADE8:  140000EA     B $+0x58  // goto 0x0113AE40
		   // ──── Block 11 if (==) ────────────────────
		   0x0113ADEC:  7781F8EB     BL $-0x1dfa1c
		   0x0113ADF0:  70009FE5     LDR r0, [pc, 0x70]
		   0x0113ADF4:  0610A0E1     MOV r1, r6
		   0x0113ADF8:  00009FE7     LDR r0, [pc, r0]
		   0x0113ADFC:  002090E5     LDR r2, [r0]
		   0x0113AE00:  0500A0E1     MOV r0, r5
		   0x0113AE04:  1FE16AEB     BL $+0x1ab8484  // CALL → List<object>.Find
		   0x0113AE08:  000050E3     CMPS r0, r0, 0x0
		   0x0113AE0C:  0B00000A     BEQ $+0x34  // if (==) goto 0x0113AE40
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x0113AE10:  0060A0E1     MOV r6, r0
		   0x0113AE14:  6D81F8EB     BL $-0x1dfa44
		   // ──── Block 13 if (!=) ────────────────────
		   0x0113AE18:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x0113AE1C:  0610A0E1     MOV r1, r6
		   0x0113AE20:  00009FE7     LDR r0, [pc, r0]
		   0x0113AE24:  002090E5     LDR r2, [r0]
		   0x0113AE28:  0500A0E1     MOV r0, r5
		   0x0113AE2C:  1EE56AEB     BL $+0x1ab9480  // CALL → List<object>.Remove
		   0x0113AE30:  0800A0E1     MOV r0, r8
		   0x0113AE34:  0010A0E3     MOV r1, 0x0
		   0x0113AE38:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x0113AE3C:  D4F8FFEA     B $-0x1ca8
		   // ──── Block 14 if (==) ────────────────────
		   0x0113AE40:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x0113AE44:  BF120F03     MOVEQ r1, 0xf2bf
		   0x0113AE48:  0CE2F302     RSCSEQ lr, r3, 0xc0000000
		   0x0113AE4C:  30F4F302     RSCSEQ pc, r3, 0x30000000
		   0x0113AE50:  F8E1F302     RSCSEQ lr, r3, 0x3e
		   0x0113AE54:  60F4F302     RSCSEQ pc, r3, 0x60000000
		   0x0113AE58:  58F4F302     RSCSEQ pc, r3, 0x58000000
		   0x0113AE5C:  44F4F302     RSCSEQ pc, r3, 0x44000000
		   0x0113AE60:  84E1F302     RSCSEQ lr, r3, 0x21
		   0x0113AE64:  D8F3F302     RSCSEQ pc, r3, 0x60000003
		   0x0113AE68:  08E1F302     RSCSEQ lr, r3, 0x2
		   0x0113AE6C:  10F3F302     RSCSEQ pc, r3, 0x40000000
		   0x0113AE70:  34E1F302     RSCSEQ lr, r3, 0xd
		*/
	}

	// RVA: 0x113A7D4 Offset: 0x113A7D4 VA: 0x113A7D4
	private void DestroyFieldsItemsSaves() {
		/* Disassembly (ARM32, 23 instructions, 0x5C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113A7D4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0113A7D8:  18D04DE2     SUB sp, sp, 0x18
		   0x0113A7DC:  5C519FE5     LDR r5, [pc, 0x15c]
		   0x0113A7E0:  0040A0E1     MOV r4, r0
		   0x0113A7E4:  05508FE0     ADD r5, pc, r5
		   0x0113A7E8:  0000D5E5     LDRB r0, [r5]
		   0x0113A7EC:  000050E3     CMPS r0, r0, 0x0
		   0x0113A7F0:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0113A82C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113A7F4:  48019FE5     LDR r0, [pc, 0x148]
		   0x0113A7F8:  00009FE7     LDR r0, [pc, r0]
		   0x0113A7FC:  5782F8EB     BL $-0x1df69c
		   0x0113A800:  40019FE5     LDR r0, [pc, 0x140]
		   0x0113A804:  00009FE7     LDR r0, [pc, r0]
		   0x0113A808:  5482F8EB     BL $-0x1df6a8
		   0x0113A80C:  38019FE5     LDR r0, [pc, 0x138]
		   0x0113A810:  00009FE7     LDR r0, [pc, r0]
		   0x0113A814:  5182F8EB     BL $-0x1df6b4
		   0x0113A818:  30019FE5     LDR r0, [pc, 0x130]
		   0x0113A81C:  00009FE7     LDR r0, [pc, r0]
		   0x0113A820:  4E82F8EB     BL $-0x1df6c0
		   0x0113A824:  0100A0E3     MOV r0, 0x1
		   0x0113A828:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113A82C:  0C5094E5     LDR r5, [r4, 0xc]
		*/
	}

	// RVA: 0x113B104 Offset: 0x113B104 VA: 0x113B104 Slot: 5
	public void PreSerialize() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0113B104:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x113B108 Offset: 0x113B108 VA: 0x113B108 Slot: 6
	public void PostDeserialize() {
		/* Disassembly (ARM32, 101 instructions, 0x194 bytes):
		   // CFG: 18 blocks, 17 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B108:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0113B10C:  04D04DE2     SUB sp, sp, 0x4
		   0x0113B110:  54519FE5     LDR r5, [pc, 0x154]
		   0x0113B114:  0040A0E1     MOV r4, r0
		   0x0113B118:  05508FE0     ADD r5, pc, r5
		   0x0113B11C:  0000D5E5     LDRB r0, [r5]
		   0x0113B120:  000050E3     CMPS r0, r0, 0x0
		   0x0113B124:  1300001A     BNE $+0x54  // if (!=) goto 0x0113B178
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B128:  40019FE5     LDR r0, [pc, 0x140]
		   0x0113B12C:  00009FE7     LDR r0, [pc, r0]
		   0x0113B130:  0A80F8EB     BL $-0x1dffd0
		   0x0113B134:  38019FE5     LDR r0, [pc, 0x138]
		   0x0113B138:  00009FE7     LDR r0, [pc, r0]
		   0x0113B13C:  0780F8EB     BL $-0x1dffdc
		   0x0113B140:  30019FE5     LDR r0, [pc, 0x130]
		   0x0113B144:  00009FE7     LDR r0, [pc, r0]
		   0x0113B148:  0480F8EB     BL $-0x1dffe8
		   0x0113B14C:  28019FE5     LDR r0, [pc, 0x128]
		   0x0113B150:  00009FE7     LDR r0, [pc, r0]
		   0x0113B154:  0180F8EB     BL $-0x1dfff4
		   0x0113B158:  20019FE5     LDR r0, [pc, 0x120]
		   0x0113B15C:  00009FE7     LDR r0, [pc, r0]
		   0x0113B160:  FE7FF8EB     BL $-0x1e0000
		   0x0113B164:  18019FE5     LDR r0, [pc, 0x118]
		   0x0113B168:  00009FE7     LDR r0, [pc, r0]
		   0x0113B16C:  FB7FF8EB     BL $-0x1e000c
		   0x0113B170:  0100A0E3     MOV r0, 0x1
		   0x0113B174:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B178:  0C5094E5     LDR r5, [r4, 0xc]
		   0x0113B17C:  000055E3     CMPS r0, r5, 0x0
		   0x0113B180:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B188
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0113B184:  9180F8EB     BL $-0x1dfdb4
		   // ──── Block 4 if (!=) ────────────────────
		   0x0113B188:  0C5095E5     LDR r5, [r5, 0xc]
		   0x0113B18C:  010055E2     SUBS r0, r5, 0x1
		   0x0113B190:  3300004A     BMI $+0xd4  // if (< 0) goto 0x0113B264
		   // 
		   // ──── Block 5 else (r0 < 0 r5, 0x1) ────────────────────
		   0x0113B194:  EC709FE5     LDR r7, [pc, 0xec]
		   0x0113B198:  07709FE7     LDR r7, [pc, r7]
		   0x0113B19C:  E8809FE5     LDR r8, [pc, 0xe8]
		   0x0113B1A0:  08809FE7     LDR r8, [pc, r8]
		   0x0113B1A4:  E4909FE5     LDR sb, [pc, 0xe4]
		   0x0113B1A8:  09909FE7     LDR sb, [pc, sb]
		   0x0113B1AC:  E0A09FE5     LDR r10, [pc, 0xe0]
		   0x0113B1B0:  0AA09FE7     LDR r10, [pc, r10]
		   0x0113B1B4:  DCB09FE5     LDR fp, [pc, 0xdc]
		   0x0113B1B8:  0BB09FE7     LDR fp, [pc, fp]
		   0x0113B1BC:  0C6094E5     LDR r6, [r4, 0xc]
		   0x0113B1C0:  000056E3     CMPS r0, r6, 0x0
		   0x0113B1C4:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B1CC
		   // 
		   // ──── Block 6 else (r0 == r5, 0x1) ────────────────────
		   0x0113B1C8:  8080F8EB     BL $-0x1dfdf8
		   // ──── Block 7 if (r0 != r5, 0x1) ────────────────────
		   0x0113B1CC:  015045E2     SUB r5, r5, 0x1
		   0x0113B1D0:  002097E5     LDR r2, [r7]
		   0x0113B1D4:  0600A0E1     MOV r0, r6
		   0x0113B1D8:  0510A0E1     MOV r1, r5
		   0x0113B1DC:  C7DD6AEB     BL $+0x1ab7724  // CALL → List<object>.get_Item
		   0x0113B1E0:  0060A0E1     MOV r6, r0
		   0x0113B1E4:  000050E3     CMPS r0, r0, 0x0
		   0x0113B1E8:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B1F0
		   // 
		   // ──── Block 8 else (r0 == r5, 0x1) ────────────────────
		   0x0113B1EC:  7780F8EB     BL $-0x1dfe1c
		   // ──── Block 9 if (r0 != r5, 0x1) ────────────────────
		   0x0113B1F0:  0600A0E1     MOV r0, r6
		   0x0113B1F4:  0010A0E3     MOV r1, 0x0
		   0x0113B1F8:  FB0F00EB     BL $+0x3ff4  // CALL → ItemDataSave.IsValid
		   0x0113B1FC:  000050E3     CMPS r0, r0, 0x0
		   0x0113B200:  1500001A     BNE $+0x5c  // if (!=) goto 0x0113B25C
		   // 
		   // ──── Block 10 else (r0 == r5, 0x1) ────────────────────
		   0x0113B204:  0C6094E5     LDR r6, [r4, 0xc]
		   0x0113B208:  000056E3     CMPS r0, r6, 0x0
		   0x0113B20C:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B214
		   // 
		   // ──── Block 11 else (r0 == r5, 0x1) ────────────────────
		   0x0113B210:  6E80F8EB     BL $-0x1dfe40
		   // ──── Block 12 if (r0 != r5, 0x1) ────────────────────
		   0x0113B214:  002098E5     LDR r2, [r8]
		   0x0113B218:  0600A0E1     MOV r0, r6
		   0x0113B21C:  0510A0E1     MOV r1, r5
		   0x0113B220:  CFE46AEB     BL $+0x1ab9344  // CALL → List<object>.RemoveAt
		   0x0113B224:  000099E5     LDR r0, [sb]
		   0x0113B228:  6580F8EB     BL $-0x1dfe64
		   0x0113B22C:  00109AE5     LDR r1, [r10]
		   0x0113B230:  0020A0E3     MOV r2, 0x0
		   0x0113B234:  0060A0E1     MOV r6, r0
		   0x0113B238:  7F377DEB     BL $+0x1f4de04  // CALL → Exception..ctor
		   0x0113B23C:  00009BE5     LDR r0, [fp]
		   0x0113B240:  741090E5     LDR r1, [r0, 0x74]
		   0x0113B244:  000051E3     CMPS r0, r1, 0x0
		   0x0113B248:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B250
		   // 
		   // ──── Block 13 else (r0 == r5, 0x1) ────────────────────
		   0x0113B24C:  1080F8EB     BL $-0x1dffb8
		   // ──── Block 14 if (r0 != r5, 0x1) ────────────────────
		   0x0113B250:  0600A0E1     MOV r0, r6
		   0x0113B254:  0010A0E3     MOV r1, 0x0
		   0x0113B258:  CBF33AEB     BL $+0xebcf34  // CALL → sub_1FF818C
		   // ──── Block 15 if (r0 != r5, 0x1) ────────────────────
		   0x0113B25C:  000055E3     CMPS r0, r5, 0x0
		   0x0113B260:  D5FFFFCA     BGT $-0xa4
		   // ──── Block 16 (from 2 paths) ──────────────────
		   0x0113B264:  04D08DE2     ADD sp, sp, 0x4
		   0x0113B268:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x0113B26C:  890E0F03     MOVEQ r0, 0xfe89
		   0x0113B270:  5CB4F302     RSCSEQ fp, r3, 0x5c000000
		   0x0113B274:  B4B7F302     RSCSEQ fp, r3, 0x2d00000
		   0x0113B278:  88DFF302     RSCSEQ sp, r3, 0x220
		   0x0113B27C:  40DFF302     RSCSEQ sp, r3, 0x100
		   0x0113B280:  78DFF302     RSCSEQ sp, r3, 0x1e0
		   0x0113B284:  18F0F302     RSCSEQ pc, r3, 0x18
		   0x0113B288:  3CDFF302     RSCSEQ sp, r3, 0xf0
		   0x0113B28C:  2CDFF302     RSCSEQ sp, r3, 0xb0
		   0x0113B290:  44B7F302     RSCSEQ fp, r3, 0x1100000
		   0x0113B294:  D0EFF302     RSCSEQ lr, r3, 0x340
		   0x0113B298:  D0B3F302     RSCSEQ fp, r3, 0x40000003
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class <>c // TypeDefIndex: 1435
{

	// Fields
	public static readonly GameStateSave.<>c <>9; // 0x0
	public static Predicate<ItemDataSave> <>9__29_0; // 0x4

	// Methods

	// RVA: 0x113B29C Offset: 0x113B29C VA: 0x113B29C
	private static void .cctor() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B29C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0113B2A0:  4C409FE5     LDR r4, [pc, 0x4c]
		   0x0113B2A4:  04408FE0     ADD r4, pc, r4
		   0x0113B2A8:  0000D4E5     LDRB r0, [r4]
		   0x0113B2AC:  000050E3     CMPS r0, r0, 0x0
		   0x0113B2B0:  0400001A     BNE $+0x18  // if (!=) goto 0x0113B2C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B2B4:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x0113B2B8:  00009FE7     LDR r0, [pc, r0]
		   0x0113B2BC:  A77FF8EB     BL $-0x1e015c
		   0x0113B2C0:  0100A0E3     MOV r0, 0x1
		   0x0113B2C4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B2C8:  2C509FE5     LDR r5, [pc, 0x2c]
		   0x0113B2CC:  05509FE7     LDR r5, [pc, r5]
		   0x0113B2D0:  000095E5     LDR r0, [r5]
		   0x0113B2D4:  3A80F8EB     BL $-0x1dff10
		   0x0113B2D8:  0010A0E3     MOV r1, 0x0
		   0x0113B2DC:  0040A0E1     MOV r4, r0
		   0x0113B2E0:  41687DEB     BL $+0x1f5a10c  // CALL → Object..ctor
		   0x0113B2E4:  000095E5     LDR r0, [r5]
		   0x0113B2E8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0113B2EC:  004080E5     STR r4, [r0]
		   0x0113B2F0:  3088BDE8     POP {r4, r5, fp, pc}
		   0x0113B2F4:  FE0C0F03     MOVEQ r0, 0xfcfe
		   0x0113B2F8:  C4EEF302     RSCSEQ lr, r3, 0xc40
		   0x0113B2FC:  B0EEF302     RSCSEQ lr, r3, 0xb00
		*/
	}

	// RVA: 0x113B300 Offset: 0x113B300 VA: 0x113B300
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0113B300:  0010A0E3     MOV r1, 0x0
		   0x0113B304:  38687DEA     B $+0x1f5a0e8  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x113B308 Offset: 0x113B308 VA: 0x113B308
	internal bool <RemoveRewardsBox>b__29_0(ItemDataSave item) {
		/* Disassembly (ARM32, 36 instructions, 0x90 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B308:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0113B30C:  10D04DE2     SUB sp, sp, 0x10
		   0x0113B310:  74509FE5     LDR r5, [pc, 0x74]
		   0x0113B314:  0140A0E1     MOV r4, r1
		   0x0113B318:  05508FE0     ADD r5, pc, r5
		   0x0113B31C:  0000D5E5     LDRB r0, [r5]
		   0x0113B320:  000050E3     CMPS r0, r0, 0x0
		   0x0113B324:  0400001A     BNE $+0x18  // if (!=) goto 0x0113B33C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B328:  60009FE5     LDR r0, [pc, 0x60]
		   0x0113B32C:  00009FE7     LDR r0, [pc, r0]
		   0x0113B330:  8A7FF8EB     BL $-0x1e01d0
		   0x0113B334:  0100A0E3     MOV r0, 0x1
		   0x0113B338:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B33C:  000054E3     CMPS r0, r4, 0x0
		   0x0113B340:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B348
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0113B344:  2180F8EB     BL $-0x1dff74
		   // ──── Block 4 if (!=) ────────────────────
		   0x0113B348:  44009FE5     LDR r0, [pc, 0x44]
		   0x0113B34C:  0F10A0E3     MOV r1, 0xf
		   0x0113B350:  00009FE7     LDR r0, [pc, r0]
		   0x0113B354:  0C108DE5     STR r1, [sp, 0xc]
		   0x0113B358:  0010E0E3     MVN r1, r0, 0x0
		   0x0113B35C:  244094E5     LDR r4, [r4, 0x24]
		   0x0113B360:  000090E5     LDR r0, [r0]
		   0x0113B364:  03008DE9     STMIA sp, {r0, r1}
		   0x0113B368:  04008DE2     ADD r0, sp, 0x4
		   0x0113B36C:  0010A0E3     MOV r1, 0x0
		   0x0113B370:  60317DEB     BL $+0x1f4c588  // CALL → Enum.ToString
		   0x0113B374:  0010A0E1     MOV r1, r0
		   0x0113B378:  0400A0E1     MOV r0, r4
		   0x0113B37C:  0020A0E3     MOV r2, 0x0
		   0x0113B380:  A22D75EB     BL $+0x1d4b690  // CALL → String.op_Equality
		   0x0113B384:  10D08DE2     ADD sp, sp, 0x10
		   0x0113B388:  3088BDE8     POP {r4, r5, fp, pc}
		   0x0113B38C:  8B0C0F03     MOVEQ r0, 0xfc8b
		   0x0113B390:  64D9F302     RSCSEQ sp, r3, 0x190000
		   0x0113B394:  40D9F302     RSCSEQ sp, r3, 0x100000
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass16_0 // TypeDefIndex: 1436
{

	// Fields
	public int id; // 0x8

	// Methods

	// RVA: 0x1139444 Offset: 0x1139444 VA: 0x1139444
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01139444:  0010A0E3     MOV r1, 0x0
		   0x01139448:  E76F7DEA     B $+0x1f5bfa4  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x113B398 Offset: 0x113B398 VA: 0x113B398
	internal bool <RemoveBubbleByID>b__0(ItemDataSave x) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B398:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0113B39C:  0140A0E1     MOV r4, r1
		   0x0113B3A0:  0050A0E1     MOV r5, r0
		   0x0113B3A4:  000051E3     CMPS r0, r1, 0x0
		   0x0113B3A8:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B3B0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B3AC:  0780F8EB     BL $-0x1dffdc
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B3B0:  080095E5     LDR r0, [r5, 0x8]
		   0x0113B3B4:  081094E5     LDR r1, [r4, 0x8]
		   0x0113B3B8:  000041E0     SUB r0, r1, r0
		   0x0113B3BC:  100F6FE1     CLZ r0, r0
		   0x0113B3C0:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x0113B3C4:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass17_0 // TypeDefIndex: 1437
{

	// Fields
	public Item item; // 0x8

	// Methods

	// RVA: 0x1139910 Offset: 0x1139910 VA: 0x1139910
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01139910:  0010A0E3     MOV r1, 0x0
		   0x01139914:  B46E7DEA     B $+0x1f5bad8  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x113B3C8 Offset: 0x113B3C8 VA: 0x113B3C8
	internal bool <UpdateCoordinates>b__0(ItemDataSave x) {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B3C8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0113B3CC:  0140A0E1     MOV r4, r1
		   0x0113B3D0:  0050A0E1     MOV r5, r0
		   0x0113B3D4:  000051E3     CMPS r0, r1, 0x0
		   0x0113B3D8:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B3E0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B3DC:  FB7FF8EB     BL $-0x1e000c
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B3E0:  085095E5     LDR r5, [r5, 0x8]
		   0x0113B3E4:  084094E5     LDR r4, [r4, 0x8]
		   0x0113B3E8:  000055E3     CMPS r0, r5, 0x0
		   0x0113B3EC:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B3F4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0113B3F0:  F67FF8EB     BL $-0x1e0020
		   // ──── Block 4 if (!=) ────────────────────
		   0x0113B3F4:  340095E5     LDR r0, [r5, 0x34]
		   0x0113B3F8:  000044E0     SUB r0, r4, r0
		   0x0113B3FC:  100F6FE1     CLZ r0, r0
		   0x0113B400:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x0113B404:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass18_0 // TypeDefIndex: 1438
{

	// Fields
	public int id; // 0x8

	// Methods

	// RVA: 0x1139B1C Offset: 0x1139B1C VA: 0x1139B1C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01139B1C:  0010A0E3     MOV r1, 0x0
		   0x01139B20:  316E7DEA     B $+0x1f5b8cc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x113B408 Offset: 0x113B408 VA: 0x113B408
	internal bool <RemoveByID>b__0(ItemDataSave x) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B408:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0113B40C:  0140A0E1     MOV r4, r1
		   0x0113B410:  0050A0E1     MOV r5, r0
		   0x0113B414:  000051E3     CMPS r0, r1, 0x0
		   0x0113B418:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B420
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B41C:  EB7FF8EB     BL $-0x1e004c
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B420:  080095E5     LDR r0, [r5, 0x8]
		   0x0113B424:  081094E5     LDR r1, [r4, 0x8]
		   0x0113B428:  000041E0     SUB r0, r1, r0
		   0x0113B42C:  100F6FE1     CLZ r0, r0
		   0x0113B430:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x0113B434:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x113B438 Offset: 0x113B438 VA: 0x113B438
	internal bool <RemoveByID>b__1(ItemDataSave x) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B438:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0113B43C:  0140A0E1     MOV r4, r1
		   0x0113B440:  0050A0E1     MOV r5, r0
		   0x0113B444:  000051E3     CMPS r0, r1, 0x0
		   0x0113B448:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B450
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B44C:  DF7FF8EB     BL $-0x1e007c
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B450:  080095E5     LDR r0, [r5, 0x8]
		   0x0113B454:  081094E5     LDR r1, [r4, 0x8]
		   0x0113B458:  000041E0     SUB r0, r1, r0
		   0x0113B45C:  100F6FE1     CLZ r0, r0
		   0x0113B460:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x0113B464:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass19_0 // TypeDefIndex: 1439
{

	// Fields
	public int id; // 0x8

	// Methods

	// RVA: 0x1139EDC Offset: 0x1139EDC VA: 0x1139EDC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01139EDC:  0010A0E3     MOV r1, 0x0
		   0x01139EE0:  416D7DEA     B $+0x1f5b50c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x113B468 Offset: 0x113B468 VA: 0x113B468
	internal bool <MoveToInventoryByID>b__0(ItemDataSave x) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B468:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0113B46C:  0140A0E1     MOV r4, r1
		   0x0113B470:  0050A0E1     MOV r5, r0
		   0x0113B474:  000051E3     CMPS r0, r1, 0x0
		   0x0113B478:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B480
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B47C:  D37FF8EB     BL $-0x1e00ac
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B480:  080095E5     LDR r0, [r5, 0x8]
		   0x0113B484:  081094E5     LDR r1, [r4, 0x8]
		   0x0113B488:  000041E0     SUB r0, r1, r0
		   0x0113B48C:  100F6FE1     CLZ r0, r0
		   0x0113B490:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x0113B494:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass20_0 // TypeDefIndex: 1440
{

	// Fields
	public int id; // 0x8

	// Methods

	// RVA: 0x113A180 Offset: 0x113A180 VA: 0x113A180
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0113A180:  0010A0E3     MOV r1, 0x0
		   0x0113A184:  986C7DEA     B $+0x1f5b268  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x113B498 Offset: 0x113B498 VA: 0x113B498
	internal bool <MoveFromInventoryByID>b__0(ItemDataSave x) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B498:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0113B49C:  0140A0E1     MOV r4, r1
		   0x0113B4A0:  0050A0E1     MOV r5, r0
		   0x0113B4A4:  000051E3     CMPS r0, r1, 0x0
		   0x0113B4A8:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B4B0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B4AC:  C77FF8EB     BL $-0x1e00dc
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B4B0:  080095E5     LDR r0, [r5, 0x8]
		   0x0113B4B4:  081094E5     LDR r1, [r4, 0x8]
		   0x0113B4B8:  000041E0     SUB r0, r1, r0
		   0x0113B4BC:  100F6FE1     CLZ r0, r0
		   0x0113B4C0:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x0113B4C4:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass21_0 // TypeDefIndex: 1441
{

	// Fields
	public int id; // 0x8

	// Methods

	// RVA: 0x113A2E4 Offset: 0x113A2E4 VA: 0x113A2E4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0113A2E4:  0010A0E3     MOV r1, 0x0
		   0x0113A2E8:  3F6C7DEA     B $+0x1f5b104  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x113B4C8 Offset: 0x113B4C8 VA: 0x113B4C8
	internal bool <RemoveItemDataByID>b__0(ItemDataSave x) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B4C8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0113B4CC:  0140A0E1     MOV r4, r1
		   0x0113B4D0:  0050A0E1     MOV r5, r0
		   0x0113B4D4:  000051E3     CMPS r0, r1, 0x0
		   0x0113B4D8:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B4E0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B4DC:  BB7FF8EB     BL $-0x1e010c
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B4E0:  080095E5     LDR r0, [r5, 0x8]
		   0x0113B4E4:  081094E5     LDR r1, [r4, 0x8]
		   0x0113B4E8:  000041E0     SUB r0, r1, r0
		   0x0113B4EC:  100F6FE1     CLZ r0, r0
		   0x0113B4F0:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x0113B4F4:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <SaveAsync>d__26 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 1442
{

	// Fields
	private int <>1__state; // 0x8
	private object <>2__current; // 0xC
	public bool forced; // 0x10
	public GameStateSave <>4__this; // 0x14

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x113A9D8 Offset: 0x113A9D8 VA: 0x113A9D8
	public void .ctor(int <>1__state) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0113A9D8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0113A9DC:  0140A0E1     MOV r4, r1
		   0x0113A9E0:  0010A0E3     MOV r1, 0x0
		   0x0113A9E4:  0050A0E1     MOV r5, r0
		   0x0113A9E8:  7F6A7DEB     BL $+0x1f5aa04  // CALL → Object..ctor
		   0x0113A9EC:  084085E5     STR r4, [r5, 0x8]
		   0x0113A9F0:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	[DebuggerHidden]
	// RVA: 0x113B4F8 Offset: 0x113B4F8 VA: 0x113B4F8 Slot: 5
	private void System.IDisposable.Dispose() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0113B4F8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x113B4FC Offset: 0x113B4FC VA: 0x113B4FC Slot: 6
	private bool MoveNext() {
		/* Disassembly (ARM32, 74 instructions, 0x128 bytes):
		   // CFG: 18 blocks, 17 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B4FC:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0113B500:  08419FE5     LDR r4, [pc, 0x108]
		   0x0113B504:  0050A0E1     MOV r5, r0
		   0x0113B508:  04408FE0     ADD r4, pc, r4
		   0x0113B50C:  0000D4E5     LDRB r0, [r4]
		   0x0113B510:  000050E3     CMPS r0, r0, 0x0
		   0x0113B514:  0700001A     BNE $+0x24  // if (!=) goto 0x0113B538
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B518:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x0113B51C:  00009FE7     LDR r0, [pc, r0]
		   0x0113B520:  0E7FF8EB     BL $-0x1e03c0
		   0x0113B524:  EC009FE5     LDR r0, [pc, 0xec]
		   0x0113B528:  00009FE7     LDR r0, [pc, r0]
		   0x0113B52C:  0B7FF8EB     BL $-0x1e03cc
		   0x0113B530:  0100A0E3     MOV r0, 0x1
		   0x0113B534:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B538:  080095E5     LDR r0, [r5, 0x8]
		   0x0113B53C:  144095E5     LDR r4, [r5, 0x14]
		   0x0113B540:  010050E3     CMPS r0, r0, 0x1
		   0x0113B544:  0B00000A     BEQ $+0x34  // if (==) goto 0x0113B578
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0113B548:  0060A0E3     MOV r6, 0x0
		   0x0113B54C:  000050E3     CMPS r0, r0, 0x0
		   0x0113B550:  2C00001A     BNE $+0xb8  // if (!=) goto 0x0113B608
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0113B554:  1000D5E5     LDRB r0, [r5, 0x10]
		   0x0113B558:  0010E0E3     MVN r1, r0, 0x0
		   0x0113B55C:  081085E5     STR r1, [r5, 0x8]
		   0x0113B560:  000050E3     CMPS r0, r0, 0x0
		   0x0113B564:  0500001A     BNE $+0x1c  // if (!=) goto 0x0113B580
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0113B568:  0160A0E3     MOV r6, 0x1
		   0x0113B56C:  0070A0E3     MOV r7, 0x0
		   0x0113B570:  F860C5E1     STRD r6, r7, [r5, 0x8]
		   0x0113B574:  230000EA     B $+0x94  // goto 0x0113B608
		   // ──── Block 6 if (==) ────────────────────
		   0x0113B578:  0000E0E3     MVN r0, r0, 0x0
		   0x0113B57C:  080085E5     STR r0, [r5, 0x8]
		   // ──── Block 7 if (!=) ────────────────────
		   0x0113B580:  000054E3     CMPS r0, r4, 0x0
		   0x0113B584:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B58C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0113B588:  907FF8EB     BL $-0x1e01b8
		   // ──── Block 9 if (!=) ────────────────────
		   0x0113B58C:  0400A0E1     MOV r0, r4
		   0x0113B590:  8CF6FFEB     BL $-0x25c8
		   0x0113B594:  0050A0E1     MOV r5, r0
		   0x0113B598:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x0113B59C:  00009FE7     LDR r0, [pc, r0]
		   0x0113B5A0:  000090E5     LDR r0, [r0]
		   0x0113B5A4:  741090E5     LDR r1, [r0, 0x74]
		   0x0113B5A8:  000051E3     CMPS r0, r1, 0x0
		   0x0113B5AC:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B5B4
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0113B5B0:  377FF8EB     BL $-0x1e031c
		   // ──── Block 11 if (!=) ────────────────────
		   0x0113B5B4:  64009FE5     LDR r0, [pc, 0x64]
		   0x0113B5B8:  0410A0E1     MOV r1, r4
		   0x0113B5BC:  0020A0E3     MOV r2, 0x0
		   0x0113B5C0:  00009FE7     LDR r0, [pc, r0]
		   0x0113B5C4:  003090E5     LDR r3, [r0]
		   0x0113B5C8:  0500A0E1     MOV r0, r5
		   0x0113B5CC:  C7BB1FEB     BL $+0x7eef24  // CALL → DataStorage.SetObject<object>
		   0x0113B5D0:  000054E3     CMPS r0, r4, 0x0
		   0x0113B5D4:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B5DC
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0113B5D8:  7C7FF8EB     BL $-0x1e0208
		   // ──── Block 13 if (!=) ────────────────────
		   0x0113B5DC:  105094E5     LDR r5, [r4, 0x10]
		   0x0113B5E0:  000055E3     CMPS r0, r5, 0x0
		   0x0113B5E4:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B5EC
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x0113B5E8:  787FF8EB     BL $-0x1e0218
		   // ──── Block 15 if (!=) ────────────────────
		   0x0113B5EC:  0500A0E1     MOV r0, r5
		   0x0113B5F0:  F3FBFFEB     BL $-0x102c
		   0x0113B5F4:  0000A0E3     MOV r0, 0x0
		   0x0113B5F8:  0010A0E3     MOV r1, 0x0
		   0x0113B5FC:  0060A0E3     MOV r6, 0x0
		   0x0113B600:  E83AFDEB     BL $-0xb1458
		   0x0113B604:  146084E5     STR r6, [r4, 0x14]
		   // ──── Block 16 if (!=) ────────────────────
		   0x0113B608:  0600A0E1     MOV r0, r6
		   0x0113B60C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x0113B610:  9C0A0F03     MOVEQ r0, 0xfa9c
		   0x0113B614:  68ECF302     RSCSEQ lr, r3, 0x6800
		   0x0113B618:  10C1F302     RSCSEQ ip, r3, 0x4
		   0x0113B61C:  9CC0F302     RSCSEQ ip, r3, 0x9c
		   0x0113B620:  C4EBF302     RSCSEQ lr, r3, 0x31000
		*/
	}

	[DebuggerHidden]
	// RVA: 0x113B624 Offset: 0x113B624 VA: 0x113B624 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0113B624:  0C0090E5     LDR r0, [r0, 0xc]
		   0x0113B628:  1EFF2FE1     BX lr
		*/
	}

	[DebuggerHidden]
	// RVA: 0x113B62C Offset: 0x113B62C VA: 0x113B62C Slot: 8
	private void System.Collections.IEnumerator.Reset() {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0113B62C:  10402DE9     PUSH {r4, lr}
		   0x0113B630:  30009FE5     LDR r0, [pc, 0x30]
		   0x0113B634:  00009FE7     LDR r0, [pc, r0]
		   0x0113B638:  CC7EF8EB     BL $-0x1e04c8
		   0x0113B63C:  607FF8EB     BL $-0x1e0278
		   0x0113B640:  0010A0E3     MOV r1, 0x0
		   0x0113B644:  0040A0E1     MOV r4, r0
		   0x0113B648:  293D7CEB     BL $+0x1f0f4ac  // CALL → NotSupportedException..ctor
		   0x0113B64C:  18009FE5     LDR r0, [pc, 0x18]
		   0x0113B650:  00009FE7     LDR r0, [pc, r0]
		   0x0113B654:  C57EF8EB     BL $-0x1e04e4
		   0x0113B658:  0010A0E1     MOV r1, r0
		   0x0113B65C:  0400A0E1     MOV r0, r4
		   0x0113B660:  067FF8EB     BL $-0x1e03e0
		   0x0113B664:  A77EF8EB     BL $-0x1e055c
		   0x0113B668:  A8B4F302     RSCSEQ fp, r3, 0xa8000000
		   0x0113B66C:  38EBF302     RSCSEQ lr, r3, 0xe000
		*/
	}

	[DebuggerHidden]
	// RVA: 0x113B670 Offset: 0x113B670 VA: 0x113B670 Slot: 7
	private object System.Collections.IEnumerator.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0113B670:  0C0090E5     LDR r0, [r0, 0xc]
		   0x0113B674:  1EFF2FE1     BX lr
		*/
	}
}
