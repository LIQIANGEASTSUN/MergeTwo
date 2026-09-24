// Dll : Assembly-CSharp.dll
// Namespace: 
public class UIInventoryItem // TypeDefIndex: 2942
{

	// Fields
	private const int NULL_ITEM_ID = -1;
	[CompilerGenerated]
	private ItemData <ItemData>k__BackingField; // 0x8
	[CompilerGenerated]
	private int <ItemID>k__BackingField; // 0xC
	[CompilerGenerated]
	private bool <IsMaxLevel>k__BackingField; // 0x10
	public bool goalsCheckmarkIsActive; // 0x11
	private Item item; // 0x14

	// Properties
	public ItemData ItemData { get; set; }
	public int ItemID { get; set; }
	public bool HasItemData { get; }
	public bool IsMaxLevel { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x136E068 Offset: 0x136E068 VA: 0x136E068
	public ItemData get_ItemData() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0136E068:  080090E5     LDR r0, [r0, 0x8]
		   0x0136E06C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x136E070 Offset: 0x136E070 VA: 0x136E070
	private void set_ItemData(ItemData value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0136E070:  081080E5     STR r1, [r0, 0x8]
		   0x0136E074:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x136E078 Offset: 0x136E078 VA: 0x136E078
	public int get_ItemID() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0136E078:  0C0090E5     LDR r0, [r0, 0xc]
		   0x0136E07C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x136E080 Offset: 0x136E080 VA: 0x136E080
	private void set_ItemID(int value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0136E080:  0C1080E5     STR r1, [r0, 0xc]
		   0x0136E084:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x136E088 Offset: 0x136E088 VA: 0x136E088
	public bool get_HasItemData() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0136E088:  0C0090E5     LDR r0, [r0, 0xc]
		   0x0136E08C:  0000E0E1     MVN r0, r0
		   0x0136E090:  A00FA0E1     MOV r0, r0, r0, lsr 31
		   0x0136E094:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x136E098 Offset: 0x136E098 VA: 0x136E098
	public bool get_IsMaxLevel() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0136E098:  1000D0E5     LDRB r0, [r0, 0x10]
		   0x0136E09C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x136E0A0 Offset: 0x136E0A0 VA: 0x136E0A0
	private void set_IsMaxLevel(bool value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0136E0A0:  1010C0E5     STRB r1, [r0, 0x10]
		   0x0136E0A4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x136E0A8 Offset: 0x136E0A8 VA: 0x136E0A8
	public void .ctor(Item item) {
		/* Disassembly (ARM32, 53 instructions, 0xD4 bytes):
		   // CFG: 11 blocks, 9 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0136E0A8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0136E0AC:  BC609FE5     LDR r6, [pc, 0xbc]
		   0x0136E0B0:  0040A0E1     MOV r4, r0
		   0x0136E0B4:  0150A0E1     MOV r5, r1
		   0x0136E0B8:  06608FE0     ADD r6, pc, r6
		   0x0136E0BC:  0000D6E5     LDRB r0, [r6]
		   0x0136E0C0:  000050E3     CMPS r0, r0, 0x0
		   0x0136E0C4:  0400001A     BNE $+0x18  // if (!=) goto 0x0136E0DC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0136E0C8:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x0136E0CC:  00009FE7     LDR r0, [pc, r0]
		   0x0136E0D0:  22B4EFEB     BL $-0x412f70
		   0x0136E0D4:  0100A0E3     MOV r0, 0x1
		   0x0136E0D8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0136E0DC:  0400A0E1     MOV r0, r4
		   0x0136E0E0:  0010A0E3     MOV r1, 0x0
		   0x0136E0E4:  C09C74EB     BL $+0x1d27308  // CALL → Object..ctor
		   0x0136E0E8:  88009FE5     LDR r0, [pc, 0x88]
		   0x0136E0EC:  00009FE7     LDR r0, [pc, r0]
		   0x0136E0F0:  000090E5     LDR r0, [r0]
		   0x0136E0F4:  741090E5     LDR r1, [r0, 0x74]
		   0x0136E0F8:  000051E3     CMPS r0, r1, 0x0
		   0x0136E0FC:  0000001A     BNE $+0x8  // if (!=) goto 0x0136E104
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0136E100:  63B4EFEB     BL $-0x412e6c
		   // ──── Block 4 if (!=) ────────────────────
		   0x0136E104:  0500A0E1     MOV r0, r5
		   0x0136E108:  0010A0E3     MOV r1, 0x0
		   0x0136E10C:  0020A0E3     MOV r2, 0x0
		   0x0136E110:  0060A0E3     MOV r6, 0x0
		   0x0136E114:  96DAF2EB     BL $-0x3495a0
		   0x0136E118:  000050E3     CMPS r0, r0, 0x0
		   0x0136E11C:  145084E5     STR r5, [r4, 0x14]
		   0x0136E120:  0D00000A     BEQ $+0x3c  // if (==) goto 0x0136E15C
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0136E124:  000055E3     CMPS r0, r5, 0x0
		   0x0136E128:  0000001A     BNE $+0x8  // if (!=) goto 0x0136E130
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0136E12C:  A7B4EFEB     BL $-0x412d5c
		   // ──── Block 7 if (!=) ────────────────────
		   0x0136E130:  341095E5     LDR r1, [r5, 0x34]
		   0x0136E134:  840095E5     LDR r0, [r5, 0x84]
		   0x0136E138:  F800C4E1     STRD r0, r1, [r4, 0x8]
		   0x0136E13C:  0500A0E1     MOV r0, r5
		   0x0136E140:  0010A0E3     MOV r1, 0x0
		   0x0136E144:  F66CF6EB     BL $-0x264c20
		   0x0136E148:  3960D5E5     LDRB r6, [r5, 0x39]
		   0x0136E14C:  1000C4E5     STRB r0, [r4, 0x10]
		   0x0136E150:  000056E3     CMPS r0, r6, 0x0
		   0x0136E154:  01600013     MOVNE r6, 0x1
		   0x0136E158:  020000EA     B $+0x10  // goto 0x0136E168
		   // ──── Block 8 if (==) ────────────────────
		   0x0136E15C:  0070E0E3     MVN r7, r0, 0x0
		   0x0136E160:  1060C4E5     STRB r6, [r4, 0x10]
		   0x0136E164:  F860C4E1     STRD r6, r7, [r4, 0x8]
		   // ──── Block 9 ──────────────────────────────
		   0x0136E168:  1160C4E5     STRB r6, [r4, 0x11]
		   0x0136E16C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x0136E170:  E3F0EB02     RSCEQ pc, fp, 0xe3
		   0x0136E174:  6C84D002     SBCSEQ r8, r0, 0x6c000000
		   0x0136E178:  4C84D002     SBCSEQ r8, r0, 0x4c000000
		*/
	}

	// RVA: 0x136E17C Offset: 0x136E17C VA: 0x136E17C
	public void GetSprite(Action<Sprite> applySprite) {
		/* Disassembly (ARM32, 77 instructions, 0x134 bytes):
		   // CFG: 18 blocks, 18 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0136E17C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0136E180:  14619FE5     LDR r6, [pc, 0x114]
		   0x0136E184:  0050A0E1     MOV r5, r0
		   0x0136E188:  0170A0E1     MOV r7, r1
		   0x0136E18C:  06608FE0     ADD r6, pc, r6
		   0x0136E190:  0000D6E5     LDRB r0, [r6]
		   0x0136E194:  000050E3     CMPS r0, r0, 0x0
		   0x0136E198:  0700001A     BNE $+0x24  // if (!=) goto 0x0136E1BC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0136E19C:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x0136E1A0:  00009FE7     LDR r0, [pc, r0]
		   0x0136E1A4:  EDB3EFEB     BL $-0x413044
		   0x0136E1A8:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x0136E1AC:  00009FE7     LDR r0, [pc, r0]
		   0x0136E1B0:  EAB3EFEB     BL $-0x413050
		   0x0136E1B4:  0100A0E3     MOV r0, 0x1
		   0x0136E1B8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0136E1BC:  140095E5     LDR r0, [r5, 0x14]
		   0x0136E1C0:  0060A0E3     MOV r6, 0x0
		   0x0136E1C4:  000050E3     CMPS r0, r0, 0x0
		   0x0136E1C8:  0D00000A     BEQ $+0x3c  // if (==) goto 0x0136E204
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0136E1CC:  D4109FE5     LDR r1, [pc, 0xd4]
		   0x0136E1D0:  01109FE7     LDR r1, [pc, r1]
		   0x0136E1D4:  002090E5     LDR r2, [r0]
		   0x0136E1D8:  001091E5     LDR r1, [r1]
		   0x0136E1DC:  B840D2E5     LDRB r4, [r2, 0xb8]
		   0x0136E1E0:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x0136E1E4:  030054E1     CMPS r0, r4, r3
		   0x0136E1E8:  0500003A     BLO $+0x1c  // if (< (unsigned)) goto 0x0136E204
		   // 
		   // ──── Block 4 else (>= (unsigned)) ────────────────────
		   0x0136E1EC:  642092E5     LDR r2, [r2, 0x64]
		   0x0136E1F0:  032182E0     ADD r2, r2, r3, lsl 2
		   0x0136E1F4:  042012E5     LDR r2, [r2, -0x4]
		   0x0136E1F8:  010052E1     CMPS r0, r2, r1
		   0x0136E1FC:  0000A013     MOVNE r0, 0x0
		   0x0136E200:  0060A0E1     MOV r6, r0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x0136E204:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x0136E208:  00009FE7     LDR r0, [pc, r0]
		   0x0136E20C:  000090E5     LDR r0, [r0]
		   0x0136E210:  741090E5     LDR r1, [r0, 0x74]
		   0x0136E214:  000051E3     CMPS r0, r1, 0x0
		   0x0136E218:  0000001A     BNE $+0x8  // if (!=) goto 0x0136E220
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0136E21C:  1CB4EFEB     BL $-0x412f88
		   // ──── Block 7 if (!=) ────────────────────
		   0x0136E220:  0600A0E1     MOV r0, r6
		   0x0136E224:  0010A0E3     MOV r1, 0x0
		   0x0136E228:  F32732EB     BL $+0xc89fd4  // CALL → sub_1FF81FC
		   0x0136E22C:  000050E3     CMPS r0, r0, 0x0
		   0x0136E230:  1000000A     BEQ $+0x48  // if (==) goto 0x0136E278
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x0136E234:  000056E3     CMPS r0, r6, 0x0
		   0x0136E238:  0000001A     BNE $+0x8  // if (!=) goto 0x0136E240
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0136E23C:  63B4EFEB     BL $-0x412e6c
		   // ──── Block 10 if (!=) ────────────────────
		   0x0136E240:  0600A0E1     MOV r0, r6
		   0x0136E244:  0010A0E3     MOV r1, 0x0
		   0x0136E248:  0061F6EB     BL $-0x267bf8
		   0x0136E24C:  000050E3     CMPS r0, r0, 0x0
		   0x0136E250:  0800000A     BEQ $+0x28  // if (==) goto 0x0136E278
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x0136E254:  085095E5     LDR r5, [r5, 0x8]
		   0x0136E258:  000055E3     CMPS r0, r5, 0x0
		   0x0136E25C:  0000001A     BNE $+0x8  // if (!=) goto 0x0136E264
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0136E260:  5AB4EFEB     BL $-0x412e90
		   // ──── Block 13 if (!=) ────────────────────
		   0x0136E264:  0500A0E1     MOV r0, r5
		   0x0136E268:  0710A0E1     MOV r1, r7
		   0x0136E26C:  0020A0E3     MOV r2, 0x0
		   0x0136E270:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x0136E274:  A29CF6EA     B $-0x258d70
		   // ──── Block 14 (from 2 paths) ──────────────────
		   0x0136E278:  085095E5     LDR r5, [r5, 0x8]
		   0x0136E27C:  000055E3     CMPS r0, r5, 0x0
		   0x0136E280:  0000001A     BNE $+0x8  // if (!=) goto 0x0136E288
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0136E284:  51B4EFEB     BL $-0x412eb4
		   // ──── Block 16 if (!=) ────────────────────
		   0x0136E288:  0500A0E1     MOV r0, r5
		   0x0136E28C:  0710A0E1     MOV r1, r7
		   0x0136E290:  0020A0E3     MOV r2, 0x0
		   0x0136E294:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x0136E298:  5671F6EA     B $-0x263aa0
		   0x0136E29C:  10F0EB02     RSCEQ pc, fp, 0x10
		   0x0136E2A0:  20AED002     SBCSEQ r10, r0, 0x200
		   0x0136E2A4:  8C83D002     SBCSEQ r8, r0, 0x30000002
		   0x0136E2A8:  F0ADD002     SBCSEQ r10, r0, 0x3c00
		   0x0136E2AC:  3083D002     SBCSEQ r8, r0, 0xc0000000
		*/
	}
}
