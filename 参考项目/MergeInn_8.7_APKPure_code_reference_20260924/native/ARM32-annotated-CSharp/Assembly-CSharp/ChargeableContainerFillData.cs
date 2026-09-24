// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class ChargeableContainerFillData // TypeDefIndex: 1274
{

	// Fields
	[SerializeField]
	public List<ChargeableContainerFillData.FillData> data; // 0x8
	[SerializeField]
	public int numberOfFills; // 0xC

	// Methods

	// RVA: 0x1103C58 Offset: 0x1103C58 VA: 0x1103C58
	public bool IsFullyFilled() {
		/* Disassembly (ARM32, 77 instructions, 0x134 bytes):
		   // CFG: 13 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01103C58:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01103C5C:  28519FE5     LDR r5, [pc, 0x128]
		   0x01103C60:  0040A0E1     MOV r4, r0
		   0x01103C64:  05508FE0     ADD r5, pc, r5
		   0x01103C68:  0000D5E5     LDRB r0, [r5]
		   0x01103C6C:  000050E3     CMPS r0, r0, 0x0
		   0x01103C70:  1000001A     BNE $+0x48  // if (!=) goto 0x01103CB8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01103C74:  14019FE5     LDR r0, [pc, 0x114]
		   0x01103C78:  00009FE7     LDR r0, [pc, r0]
		   0x01103C7C:  375DF9EB     BL $-0x1a8b1c
		   0x01103C80:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x01103C84:  00009FE7     LDR r0, [pc, r0]
		   0x01103C88:  345DF9EB     BL $-0x1a8b28
		   0x01103C8C:  04019FE5     LDR r0, [pc, 0x104]
		   0x01103C90:  00009FE7     LDR r0, [pc, r0]
		   0x01103C94:  315DF9EB     BL $-0x1a8b34
		   0x01103C98:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x01103C9C:  00009FE7     LDR r0, [pc, r0]
		   0x01103CA0:  2E5DF9EB     BL $-0x1a8b40
		   0x01103CA4:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x01103CA8:  00009FE7     LDR r0, [pc, r0]
		   0x01103CAC:  2B5DF9EB     BL $-0x1a8b4c
		   0x01103CB0:  0100A0E3     MOV r0, 0x1
		   0x01103CB4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01103CB8:  084094E5     LDR r4, [r4, 0x8]
		   0x01103CBC:  000054E3     CMPS r0, r4, 0x0
		   0x01103CC0:  2F00000A     BEQ $+0xc4  // if (==) goto 0x01103D84
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01103CC4:  D8709FE5     LDR r7, [pc, 0xd8]
		   0x01103CC8:  07709FE7     LDR r7, [pc, r7]
		   0x01103CCC:  000097E5     LDR r0, [r7]
		   0x01103CD0:  741090E5     LDR r1, [r0, 0x74]
		   0x01103CD4:  000051E3     CMPS r0, r1, 0x0
		   0x01103CD8:  0100001A     BNE $+0xc  // if (!=) goto 0x01103CE4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01103CDC:  6C5DF9EB     BL $-0x1a8a48
		   0x01103CE0:  000097E5     LDR r0, [r7]
		   // ──── Block 5 if (!=) ────────────────────
		   0x01103CE4:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x01103CE8:  045091E5     LDR r5, [r1, 0x4]
		   0x01103CEC:  000055E3     CMPS r0, r5, 0x0
		   0x01103CF0:  1500001A     BNE $+0x5c  // if (!=) goto 0x01103D4C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01103CF4:  742090E5     LDR r2, [r0, 0x74]
		   0x01103CF8:  000052E3     CMPS r0, r2, 0x0
		   0x01103CFC:  0200001A     BNE $+0x10  // if (!=) goto 0x01103D0C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01103D00:  635DF9EB     BL $-0x1a8a6c
		   0x01103D04:  000097E5     LDR r0, [r7]
		   0x01103D08:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 8 if (!=) ────────────────────
		   0x01103D0C:  94009FE5     LDR r0, [pc, 0x94]
		   0x01103D10:  00009FE7     LDR r0, [pc, r0]
		   0x01103D14:  006091E5     LDR r6, [r1]
		   0x01103D18:  000090E5     LDR r0, [r0]
		   0x01103D1C:  A85DF9EB     BL $-0x1a8958
		   0x01103D20:  0050A0E1     MOV r5, r0
		   0x01103D24:  80009FE5     LDR r0, [pc, 0x80]
		   0x01103D28:  0610A0E1     MOV r1, r6
		   0x01103D2C:  0030A0E3     MOV r3, 0x0
		   0x01103D30:  00009FE7     LDR r0, [pc, r0]
		   0x01103D34:  002090E5     LDR r2, [r0]
		   0x01103D38:  0500A0E1     MOV r0, r5
		   0x01103D3C:  512833EB     BL $+0xcca14c  // CALL → Predicate<object>..ctor
		   0x01103D40:  000097E5     LDR r0, [r7]
		   0x01103D44:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01103D48:  045080E5     STR r5, [r0, 0x4]
		   // ──── Block 9 if (!=) ────────────────────
		   0x01103D4C:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x01103D50:  0510A0E1     MOV r1, r5
		   0x01103D54:  00009FE7     LDR r0, [pc, r0]
		   0x01103D58:  002090E5     LDR r2, [r0]
		   0x01103D5C:  0400A0E1     MOV r0, r4
		   0x01103D60:  7BBD6BEB     BL $+0x1aef5f4  // CALL → List<object>.FindAll
		   0x01103D64:  0040A0E1     MOV r4, r0
		   0x01103D68:  000050E3     CMPS r0, r0, 0x0
		   0x01103D6C:  0000001A     BNE $+0x8  // if (!=) goto 0x01103D74
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x01103D70:  965DF9EB     BL $-0x1a89a0
		   // ──── Block 11 if (!=) ────────────────────
		   0x01103D74:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01103D78:  100F6FE1     CLZ r0, r0
		   0x01103D7C:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x01103D80:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 12 if (==) ────────────────────
		   0x01103D84:  0000A0E3     MOV r0, 0x0
		   0x01103D88:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x1103DB4 Offset: 0x1103DB4 VA: 0x1103DB4
	public int GetNumberOfFilledItems() {
		/* Disassembly (ARM32, 66 instructions, 0x108 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01103DB4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01103DB8:  D8509FE5     LDR r5, [pc, 0xd8]
		   0x01103DBC:  0040A0E1     MOV r4, r0
		   0x01103DC0:  05508FE0     ADD r5, pc, r5
		   0x01103DC4:  0000D5E5     LDRB r0, [r5]
		   0x01103DC8:  000050E3     CMPS r0, r0, 0x0
		   0x01103DCC:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01103E08
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01103DD0:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x01103DD4:  00009FE7     LDR r0, [pc, r0]
		   0x01103DD8:  E05CF9EB     BL $-0x1a8c78
		   0x01103DDC:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x01103DE0:  00009FE7     LDR r0, [pc, r0]
		   0x01103DE4:  DD5CF9EB     BL $-0x1a8c84
		   0x01103DE8:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x01103DEC:  00009FE7     LDR r0, [pc, r0]
		   0x01103DF0:  DA5CF9EB     BL $-0x1a8c90
		   0x01103DF4:  AC009FE5     LDR r0, [pc, 0xac]
		   0x01103DF8:  00009FE7     LDR r0, [pc, r0]
		   0x01103DFC:  D75CF9EB     BL $-0x1a8c9c
		   0x01103E00:  0100A0E3     MOV r0, 0x1
		   0x01103E04:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01103E08:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x01103E0C:  00009FE7     LDR r0, [pc, r0]
		   0x01103E10:  000090E5     LDR r0, [r0]
		   0x01103E14:  6A5DF9EB     BL $-0x1a8a50
		   0x01103E18:  0010A0E3     MOV r1, 0x0
		   0x01103E1C:  0050A0E1     MOV r5, r0
		   0x01103E20:  0060A0E3     MOV r6, 0x0
		   0x01103E24:  70457EEB     BL $+0x1f915c8  // CALL → Object..ctor
		   0x01103E28:  000055E3     CMPS r0, r5, 0x0
		   0x01103E2C:  0000001A     BNE $+0x8  // if (!=) goto 0x01103E34
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01103E30:  665DF9EB     BL $-0x1a8a60
		   // ──── Block 4 if (!=) ────────────────────
		   0x01103E34:  74009FE5     LDR r0, [pc, 0x74]
		   0x01103E38:  00009FE7     LDR r0, [pc, r0]
		   0x01103E3C:  084094E5     LDR r4, [r4, 0x8]
		   0x01103E40:  086085E5     STR r6, [r5, 0x8]
		   0x01103E44:  000090E5     LDR r0, [r0]
		   0x01103E48:  5D5DF9EB     BL $-0x1a8a84
		   0x01103E4C:  0060A0E1     MOV r6, r0
		   0x01103E50:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x01103E54:  0510A0E1     MOV r1, r5
		   0x01103E58:  0030A0E3     MOV r3, 0x0
		   0x01103E5C:  00009FE7     LDR r0, [pc, r0]
		   0x01103E60:  002090E5     LDR r2, [r0]
		   0x01103E64:  0600A0E1     MOV r0, r6
		   0x01103E68:  F68952EB     BL $+0x14a27e0  // CALL → Action<object>..ctor
		   0x01103E6C:  000054E3     CMPS r0, r4, 0x0
		   0x01103E70:  0000001A     BNE $+0x8  // if (!=) goto 0x01103E78
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01103E74:  555DF9EB     BL $-0x1a8aa4
		   // ──── Block 6 if (!=) ────────────────────
		   0x01103E78:  38009FE5     LDR r0, [pc, 0x38]
		   0x01103E7C:  0610A0E1     MOV r1, r6
		   0x01103E80:  00009FE7     LDR r0, [pc, r0]
		   0x01103E84:  002090E5     LDR r2, [r0]
		   0x01103E88:  0400A0E1     MOV r0, r4
		   0x01103E8C:  41BE6BEB     BL $+0x1aef90c  // CALL → List<object>.ForEach
		   0x01103E90:  080095E5     LDR r0, [r5, 0x8]
		   0x01103E94:  7080BDE8     POP {r4, r5, r6, pc}
		   0x01103E98:  EA7F1203     TSTSEQ r7, r2, 0x3a8
		   0x01103E9C:  205AF702     RSCSEQ r5, r7, 0x20000
		   0x01103EA0:  185AF702     RSCSEQ r5, r7, 0x18000
		   0x01103EA4:  105AF702     RSCSEQ r5, r7, 0x10000
		   0x01103EA8:  085AF702     RSCSEQ r5, r7, 0x8000
		   0x01103EAC:  F459F702     RSCSEQ r5, r7, 0x3d0000
		   0x01103EB0:  BC59F702     RSCSEQ r5, r7, 0x2f0000
		   0x01103EB4:  A059F702     RSCSEQ r5, r7, 0x280000
		   0x01103EB8:  7859F702     RSCSEQ r5, r7, 0x1e0000
		*/
	}

	// RVA: 0x1103EC4 Offset: 0x1103EC4 VA: 0x1103EC4
	public List<ItemPack> GetAllFilledItems() {
		/* Disassembly (ARM32, 35 instructions, 0x8C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01103EC4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01103EC8:  2CD04DE2     SUB sp, sp, 0x2c
		   0x01103ECC:  60429FE5     LDR r4, [pc, 0x260]
		   0x01103ED0:  0060A0E1     MOV r6, r0
		   0x01103ED4:  04408FE0     ADD r4, pc, r4
		   0x01103ED8:  0000D4E5     LDRB r0, [r4]
		   0x01103EDC:  000050E3     CMPS r0, r0, 0x0
		   0x01103EE0:  1900001A     BNE $+0x6c  // if (!=) goto 0x01103F4C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01103EE4:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x01103EE8:  00009FE7     LDR r0, [pc, r0]
		   0x01103EEC:  9B5CF9EB     BL $-0x1a8d8c
		   0x01103EF0:  44029FE5     LDR r0, [pc, 0x244]
		   0x01103EF4:  00009FE7     LDR r0, [pc, r0]
		   0x01103EF8:  985CF9EB     BL $-0x1a8d98
		   0x01103EFC:  3C029FE5     LDR r0, [pc, 0x23c]
		   0x01103F00:  00009FE7     LDR r0, [pc, r0]
		   0x01103F04:  955CF9EB     BL $-0x1a8da4
		   0x01103F08:  34029FE5     LDR r0, [pc, 0x234]
		   0x01103F0C:  00009FE7     LDR r0, [pc, r0]
		   0x01103F10:  925CF9EB     BL $-0x1a8db0
		   0x01103F14:  2C029FE5     LDR r0, [pc, 0x22c]
		   0x01103F18:  00009FE7     LDR r0, [pc, r0]
		   0x01103F1C:  8F5CF9EB     BL $-0x1a8dbc
		   0x01103F20:  24029FE5     LDR r0, [pc, 0x224]
		   0x01103F24:  00009FE7     LDR r0, [pc, r0]
		   0x01103F28:  8C5CF9EB     BL $-0x1a8dc8
		   0x01103F2C:  1C029FE5     LDR r0, [pc, 0x21c]
		   0x01103F30:  00009FE7     LDR r0, [pc, r0]
		   0x01103F34:  895CF9EB     BL $-0x1a8dd4
		   0x01103F38:  14029FE5     LDR r0, [pc, 0x214]
		   0x01103F3C:  00009FE7     LDR r0, [pc, r0]
		   0x01103F40:  865CF9EB     BL $-0x1a8de0
		   0x01103F44:  0100A0E3     MOV r0, 0x1
		   0x01103F48:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01103F4C:  04029FE5     LDR r0, [pc, 0x204]
		*/
	}

	// RVA: 0x1104220 Offset: 0x1104220 VA: 0x1104220
	public bool TryGetNotFilledItem(ref ItemData resItemData) {
		/* Disassembly (ARM32, 24 instructions, 0x60 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01104220:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01104224:  18D04DE2     SUB sp, sp, 0x18
		   0x01104228:  7C619FE5     LDR r6, [pc, 0x17c]
		   0x0110422C:  0050A0E1     MOV r5, r0
		   0x01104230:  0180A0E1     MOV r8, r1
		   0x01104234:  06608FE0     ADD r6, pc, r6
		   0x01104238:  0000D6E5     LDRB r0, [r6]
		   0x0110423C:  000050E3     CMPS r0, r0, 0x0
		   0x01104240:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0110427C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01104244:  64019FE5     LDR r0, [pc, 0x164]
		   0x01104248:  00009FE7     LDR r0, [pc, r0]
		   0x0110424C:  C35BF9EB     BL $-0x1a90ec
		   0x01104250:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x01104254:  00009FE7     LDR r0, [pc, r0]
		   0x01104258:  C05BF9EB     BL $-0x1a90f8
		   0x0110425C:  54019FE5     LDR r0, [pc, 0x154]
		   0x01104260:  00009FE7     LDR r0, [pc, r0]
		   0x01104264:  BD5BF9EB     BL $-0x1a9104
		   0x01104268:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x0110426C:  00009FE7     LDR r0, [pc, r0]
		   0x01104270:  BA5BF9EB     BL $-0x1a9110
		   0x01104274:  0100A0E3     MOV r0, 0x1
		   0x01104278:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110427C:  085095E5     LDR r5, [r5, 0x8]
		*/
	}

	// RVA: 0x11043D0 Offset: 0x11043D0 VA: 0x11043D0
	public bool TryGetAllNotFilledItem(ref List<ItemData> resItemsData) {
		/* Disassembly (ARM32, 155 instructions, 0x26C bytes):
		   // CFG: 20 blocks, 18 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011043D0:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x011043D4:  18429FE5     LDR r4, [pc, 0x218]
		   0x011043D8:  0050A0E1     MOV r5, r0
		   0x011043DC:  0180A0E1     MOV r8, r1
		   0x011043E0:  04408FE0     ADD r4, pc, r4
		   0x011043E4:  0000D4E5     LDRB r0, [r4]
		   0x011043E8:  000050E3     CMPS r0, r0, 0x0
		   0x011043EC:  1C00001A     BNE $+0x78  // if (!=) goto 0x01104464
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011043F0:  00029FE5     LDR r0, [pc, 0x200]
		   0x011043F4:  00009FE7     LDR r0, [pc, r0]
		   0x011043F8:  585BF9EB     BL $-0x1a9298
		   0x011043FC:  F8019FE5     LDR r0, [pc, 0x1f8]
		   0x01104400:  00009FE7     LDR r0, [pc, r0]
		   0x01104404:  555BF9EB     BL $-0x1a92a4
		   0x01104408:  F0019FE5     LDR r0, [pc, 0x1f0]
		   0x0110440C:  00009FE7     LDR r0, [pc, r0]
		   0x01104410:  525BF9EB     BL $-0x1a92b0
		   0x01104414:  E8019FE5     LDR r0, [pc, 0x1e8]
		   0x01104418:  00009FE7     LDR r0, [pc, r0]
		   0x0110441C:  4F5BF9EB     BL $-0x1a92bc
		   0x01104420:  E0019FE5     LDR r0, [pc, 0x1e0]
		   0x01104424:  00009FE7     LDR r0, [pc, r0]
		   0x01104428:  4C5BF9EB     BL $-0x1a92c8
		   0x0110442C:  D8019FE5     LDR r0, [pc, 0x1d8]
		   0x01104430:  00009FE7     LDR r0, [pc, r0]
		   0x01104434:  495BF9EB     BL $-0x1a92d4
		   0x01104438:  D0019FE5     LDR r0, [pc, 0x1d0]
		   0x0110443C:  00009FE7     LDR r0, [pc, r0]
		   0x01104440:  465BF9EB     BL $-0x1a92e0
		   0x01104444:  C8019FE5     LDR r0, [pc, 0x1c8]
		   0x01104448:  00009FE7     LDR r0, [pc, r0]
		   0x0110444C:  435BF9EB     BL $-0x1a92ec
		   0x01104450:  C0019FE5     LDR r0, [pc, 0x1c0]
		   0x01104454:  00009FE7     LDR r0, [pc, r0]
		   0x01104458:  405BF9EB     BL $-0x1a92f8
		   0x0110445C:  0100A0E3     MOV r0, 0x1
		   0x01104460:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01104464:  B0919FE5     LDR sb, [pc, 0x1b0]
		   0x01104468:  09909FE7     LDR sb, [pc, sb]
		   0x0110446C:  086095E5     LDR r6, [r5, 0x8]
		   0x01104470:  005098E5     LDR r5, [r8]
		   0x01104474:  000099E5     LDR r0, [sb]
		   0x01104478:  741090E5     LDR r1, [r0, 0x74]
		   0x0110447C:  000051E3     CMPS r0, r1, 0x0
		   0x01104480:  0100001A     BNE $+0xc  // if (!=) goto 0x0110448C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01104484:  825BF9EB     BL $-0x1a91f0
		   0x01104488:  000099E5     LDR r0, [sb]
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110448C:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x01104490:  087091E5     LDR r7, [r1, 0x8]
		   0x01104494:  000057E3     CMPS r0, r7, 0x0
		   0x01104498:  1500001A     BNE $+0x5c  // if (!=) goto 0x011044F4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110449C:  742090E5     LDR r2, [r0, 0x74]
		   0x011044A0:  000052E3     CMPS r0, r2, 0x0
		   0x011044A4:  0200001A     BNE $+0x10  // if (!=) goto 0x011044B4
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x011044A8:  795BF9EB     BL $-0x1a9214
		   0x011044AC:  000099E5     LDR r0, [sb]
		   0x011044B0:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 7 if (!=) ────────────────────
		   0x011044B4:  64019FE5     LDR r0, [pc, 0x164]
		   0x011044B8:  00009FE7     LDR r0, [pc, r0]
		   0x011044BC:  004091E5     LDR r4, [r1]
		   0x011044C0:  000090E5     LDR r0, [r0]
		   0x011044C4:  BE5BF9EB     BL $-0x1a9100
		   0x011044C8:  0070A0E1     MOV r7, r0
		   0x011044CC:  50019FE5     LDR r0, [pc, 0x150]
		   0x011044D0:  0410A0E1     MOV r1, r4
		   0x011044D4:  0030A0E3     MOV r3, 0x0
		   0x011044D8:  00009FE7     LDR r0, [pc, r0]
		   0x011044DC:  002090E5     LDR r2, [r0]
		   0x011044E0:  0700A0E1     MOV r0, r7
		   0x011044E4:  52BE60EB     BL $+0x182f950  // CALL → Func<object, bool>..ctor
		   0x011044E8:  000099E5     LDR r0, [sb]
		   0x011044EC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011044F0:  087080E5     STR r7, [r0, 0x8]
		   // ──── Block 8 if (!=) ────────────────────
		   0x011044F4:  2C019FE5     LDR r0, [pc, 0x12c]
		   0x011044F8:  0710A0E1     MOV r1, r7
		   0x011044FC:  00009FE7     LDR r0, [pc, r0]
		   0x01104500:  002090E5     LDR r2, [r0]
		   0x01104504:  0600A0E1     MOV r0, r6
		   0x01104508:  2E7721EB     BL $+0x85dcc0  // CALL → Enumerable.Where<object>
		   0x0110450C:  0060A0E1     MOV r6, r0
		   0x01104510:  000099E5     LDR r0, [sb]
		   0x01104514:  741090E5     LDR r1, [r0, 0x74]
		   0x01104518:  000051E3     CMPS r0, r1, 0x0
		   0x0110451C:  0100001A     BNE $+0xc  // if (!=) goto 0x01104528
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01104520:  5B5BF9EB     BL $-0x1a928c
		   0x01104524:  000099E5     LDR r0, [sb]
		   // ──── Block 10 if (!=) ────────────────────
		   0x01104528:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x0110452C:  0C7091E5     LDR r7, [r1, 0xc]
		   0x01104530:  000057E3     CMPS r0, r7, 0x0
		   0x01104534:  1500001A     BNE $+0x5c  // if (!=) goto 0x01104590
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01104538:  742090E5     LDR r2, [r0, 0x74]
		   0x0110453C:  000052E3     CMPS r0, r2, 0x0
		   0x01104540:  0200001A     BNE $+0x10  // if (!=) goto 0x01104550
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01104544:  525BF9EB     BL $-0x1a92b0
		   0x01104548:  000099E5     LDR r0, [sb]
		   0x0110454C:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 13 if (!=) ────────────────────
		   0x01104550:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x01104554:  00009FE7     LDR r0, [pc, r0]
		   0x01104558:  004091E5     LDR r4, [r1]
		   0x0110455C:  000090E5     LDR r0, [r0]
		   0x01104560:  975BF9EB     BL $-0x1a919c
		   0x01104564:  0070A0E1     MOV r7, r0
		   0x01104568:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x0110456C:  0410A0E1     MOV r1, r4
		   0x01104570:  0030A0E3     MOV r3, 0x0
		   0x01104574:  00009FE7     LDR r0, [pc, r0]
		   0x01104578:  002090E5     LDR r2, [r0]
		   0x0110457C:  0700A0E1     MOV r0, r7
		   0x01104580:  F8C060EB     BL $+0x18303e8  // CALL → Func<object, object>..ctor
		   0x01104584:  000099E5     LDR r0, [sb]
		   0x01104588:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110458C:  0C7080E5     STR r7, [r0, 0xc]
		   // ──── Block 14 if (!=) ────────────────────
		   0x01104590:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x01104594:  0710A0E1     MOV r1, r7
		   0x01104598:  00009FE7     LDR r0, [pc, r0]
		   0x0110459C:  002090E5     LDR r2, [r0]
		   0x011045A0:  0600A0E1     MOV r0, r6
		   0x011045A4:  773D21EB     BL $+0x84f5e4  // CALL → Enumerable.Select<object, object>
		   0x011045A8:  0060A0E1     MOV r6, r0
		   0x011045AC:  000055E3     CMPS r0, r5, 0x0
		   0x011045B0:  0000001A     BNE $+0x8  // if (!=) goto 0x011045B8
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x011045B4:  855BF9EB     BL $-0x1a91e4
		   // ──── Block 16 if (!=) ────────────────────
		   0x011045B8:  78009FE5     LDR r0, [pc, 0x78]
		   0x011045BC:  0610A0E1     MOV r1, r6
		   0x011045C0:  00009FE7     LDR r0, [pc, r0]
		   0x011045C4:  002090E5     LDR r2, [r0]
		   0x011045C8:  0500A0E1     MOV r0, r5
		   0x011045CC:  FAB96BEB     BL $+0x1aee7f0  // CALL → List<object>.AddRange
		   0x011045D0:  004098E5     LDR r4, [r8]
		   0x011045D4:  000054E3     CMPS r0, r4, 0x0
		   0x011045D8:  0000001A     BNE $+0x8  // if (!=) goto 0x011045E0
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x011045DC:  7B5BF9EB     BL $-0x1a920c
		   // ──── Block 18 if (!=) ────────────────────
		   0x011045E0:  0C1094E5     LDR r1, [r4, 0xc]
		   0x011045E4:  0000A0E3     MOV r0, 0x0
		   0x011045E8:  000051E3     CMPS r0, r1, 0x0
		   0x011045EC:  010000C3     MOVGT r0, 0x1
		   0x011045F0:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x011045F4:  CD791203     TSTSEQ r7, r2, 0x334000
		   0x011045F8:  2454F702     RSCSEQ r5, r7, 0x24000000
		   0x011045FC:  1C54F702     RSCSEQ r5, r7, 0x1c000000
		   0x01104600:  1454F702     RSCSEQ r5, r7, 0x14000000
		   0x01104604:  0C54F702     RSCSEQ r5, r7, 0xc000000
		   0x01104608:  244DF702     RSCSEQ r4, r7, 0x900
		   0x0110460C:  244DF702     RSCSEQ r4, r7, 0x900
		   0x01104610:  EC53F702     RSCSEQ r5, r7, 0xb0000003
		   0x01104614:  E453F702     RSCSEQ r5, r7, 0x90000003
		   0x01104618:  9C53F702     RSCSEQ r5, r7, 0x70000002
		   0x0110461C:  8853F702     RSCSEQ r5, r7, 0x20000002
		   0x01104620:  6853F702     RSCSEQ r5, r7, 0xa0000001
		   0x01104624:  5053F702     RSCSEQ r5, r7, 0x40000001
		   0x01104628:  2053F702     RSCSEQ r5, r7, 0x80000000
		   0x0110462C:  D052F702     RSCSEQ r5, r7, 0xd
		   0x01104630:  B852F702     RSCSEQ r5, r7, 0x8000000b
		   0x01104634:  8052F702     RSCSEQ r5, r7, 0x8
		   0x01104638:  884BF702     RSCSEQ r4, r7, 0x22000
		*/
	}

	// RVA: 0x110463C Offset: 0x110463C VA: 0x110463C
	public void .ctor() {
		/* Disassembly (ARM32, 36 instructions, 0x90 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110463C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01104640:  70509FE5     LDR r5, [pc, 0x70]
		   0x01104644:  0040A0E1     MOV r4, r0
		   0x01104648:  05508FE0     ADD r5, pc, r5
		   0x0110464C:  0000D5E5     LDRB r0, [r5]
		   0x01104650:  000050E3     CMPS r0, r0, 0x0
		   0x01104654:  0700001A     BNE $+0x24  // if (!=) goto 0x01104678
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01104658:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x0110465C:  00009FE7     LDR r0, [pc, r0]
		   0x01104660:  BE5AF9EB     BL $-0x1a9500
		   0x01104664:  54009FE5     LDR r0, [pc, 0x54]
		   0x01104668:  00009FE7     LDR r0, [pc, r0]
		   0x0110466C:  BB5AF9EB     BL $-0x1a950c
		   0x01104670:  0100A0E3     MOV r0, 0x1
		   0x01104674:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01104678:  44009FE5     LDR r0, [pc, 0x44]
		   0x0110467C:  00009FE7     LDR r0, [pc, r0]
		   0x01104680:  000090E5     LDR r0, [r0]
		   0x01104684:  4E5BF9EB     BL $-0x1a92c0
		   0x01104688:  0060A0E1     MOV r6, r0
		   0x0110468C:  34009FE5     LDR r0, [pc, 0x34]
		   0x01104690:  00009FE7     LDR r0, [pc, r0]
		   0x01104694:  001090E5     LDR r1, [r0]
		   0x01104698:  0600A0E1     MOV r0, r6
		   0x0110469C:  43B76BEB     BL $+0x1aedd14  // CALL → List<object>..ctor
		   0x011046A0:  0070E0E3     MVN r7, r0, 0x0
		   0x011046A4:  0400A0E1     MOV r0, r4
		   0x011046A8:  F860C4E1     STRD r6, r7, [r4, 0x8]
		   0x011046AC:  0010A0E3     MOV r1, 0x0
		   0x011046B0:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x011046B4:  4C437EEA     B $+0x1f90d38  // TAIL CALL → Object..ctor
		   0x011046B8:  66771203     TSTSEQ r7, r2, 0x1980000
		   0x011046BC:  D451F702     RSCSEQ r5, r7, 0x35
		   0x011046C0:  CC51F702     RSCSEQ r5, r7, 0x33
		   0x011046C4:  B851F702     RSCSEQ r5, r7, 0x2e
		   0x011046C8:  A051F702     RSCSEQ r5, r7, 0x28
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class FillData // TypeDefIndex: 1271
{

	// Fields
	[SerializeField]
	public ItemPack item; // 0x8
	[SerializeField]
	public int amountToFill; // 0xC

	// Methods

	// RVA: 0x11046CC Offset: 0x11046CC VA: 0x11046CC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011046CC:  0010A0E3     MOV r1, 0x0
		   0x011046D0:  45437EEA     B $+0x1f90d1c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x11046D4 Offset: 0x11046D4 VA: 0x11046D4
	public void .ctor(ItemPack itemPack) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011046D4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011046D8:  0150A0E1     MOV r5, r1
		   0x011046DC:  0010A0E3     MOV r1, 0x0
		   0x011046E0:  0040A0E1     MOV r4, r0
		   0x011046E4:  40437EEB     BL $+0x1f90d08  // CALL → Object..ctor
		   0x011046E8:  000055E3     CMPS r0, r5, 0x0
		   0x011046EC:  085084E5     STR r5, [r4, 0x8]
		   0x011046F0:  0000001A     BNE $+0x8  // if (!=) goto 0x011046F8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011046F4:  355BF9EB     BL $-0x1a9324
		   // ──── Block 2 if (!=) ────────────────────
		   0x011046F8:  0C0095E5     LDR r0, [r5, 0xc]
		   0x011046FC:  0C0084E5     STR r0, [r4, 0xc]
		   0x01104700:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x1104188 Offset: 0x1104188 VA: 0x1104188
	public ValueTuple<int, int> GetAmount() {
		/* Disassembly (ARM32, 38 instructions, 0x98 bytes):
		   // CFG: 6 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01104188:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110418C:  80609FE5     LDR r6, [pc, 0x80]
		   0x01104190:  0040A0E1     MOV r4, r0
		   0x01104194:  0150A0E1     MOV r5, r1
		   0x01104198:  06608FE0     ADD r6, pc, r6
		   0x0110419C:  0000D6E5     LDRB r0, [r6]
		   0x011041A0:  000050E3     CMPS r0, r0, 0x0
		   0x011041A4:  0400001A     BNE $+0x18  // if (!=) goto 0x011041BC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011041A8:  68009FE5     LDR r0, [pc, 0x68]
		   0x011041AC:  00009FE7     LDR r0, [pc, r0]
		   0x011041B0:  EA5BF9EB     BL $-0x1a9050
		   0x011041B4:  0100A0E3     MOV r0, 0x1
		   0x011041B8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011041BC:  086095E5     LDR r6, [r5, 0x8]
		   0x011041C0:  000056E3     CMPS r0, r6, 0x0
		   0x011041C4:  0600A0E1     MOV r0, r6
		   0x011041C8:  0300001A     BNE $+0x14  // if (!=) goto 0x011041DC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011041CC:  7F5CF9EB     BL $-0x1a8dfc
		   0x011041D0:  080095E5     LDR r0, [r5, 0x8]
		   0x011041D4:  000050E3     CMPS r0, r0, 0x0
		   0x011041D8:  0C00000A     BEQ $+0x38  // if (==) goto 0x01104210
		   // 
		   // ──── Block 4 (from 2 paths) ──────────────────
		   0x011041DC:  38109FE5     LDR r1, [pc, 0x38]
		   0x011041E0:  01109FE7     LDR r1, [pc, r1]
		   0x011041E4:  0C2090E5     LDR r2, [r0, 0xc]
		   0x011041E8:  0C0096E5     LDR r0, [r6, 0xc]
		   0x011041EC:  0C6095E5     LDR r6, [r5, 0xc]
		   0x011041F0:  003091E5     LDR r3, [r1]
		   0x011041F4:  0010A0E3     MOV r1, 0x0
		   0x011041F8:  001084E5     STR r1, [r4]
		   0x011041FC:  041084E5     STR r1, [r4, 0x4]
		   0x01104200:  061040E0     SUB r1, r0, r6
		   0x01104204:  0400A0E1     MOV r0, r4
		   0x01104208:  041345EB     BL $+0x1144c18  // CALL → ValueTuple<int, int>..ctor
		   0x0110420C:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 5 if (==) ────────────────────
		   0x01104210:  6E5CF9EB     BL $-0x1a8e40
		   0x01104214:  177C1203     TSTSEQ r7, r2, 0x1700
		   0x01104218:  6856F702     RSCSEQ r5, r7, 0x6800000
		   0x0110421C:  3456F702     RSCSEQ r5, r7, 0x3400000
		*/
	}

	// RVA: 0x1104178 Offset: 0x1104178 VA: 0x1104178
	public bool IsFilled() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01104178:  0C0090E5     LDR r0, [r0, 0xc]
		   0x0110417C:  100F6FE1     CLZ r0, r0
		   0x01104180:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x01104184:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1104704 Offset: 0x1104704 VA: 0x1104704
	public string GetAmountStr() {
		/* Disassembly (ARM32, 49 instructions, 0xC4 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01104704:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01104708:  08D04DE2     SUB sp, sp, 0x8
		   0x0110470C:  A4509FE5     LDR r5, [pc, 0xa4]
		   0x01104710:  0040A0E1     MOV r4, r0
		   0x01104714:  05508FE0     ADD r5, pc, r5
		   0x01104718:  0000D5E5     LDRB r0, [r5]
		   0x0110471C:  000050E3     CMPS r0, r0, 0x0
		   0x01104720:  0400001A     BNE $+0x18  // if (!=) goto 0x01104738
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01104724:  90009FE5     LDR r0, [pc, 0x90]
		   0x01104728:  00009FE7     LDR r0, [pc, r0]
		   0x0110472C:  8B5AF9EB     BL $-0x1a95cc
		   0x01104730:  0100A0E3     MOV r0, 0x1
		   0x01104734:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01104738:  085094E5     LDR r5, [r4, 0x8]
		   0x0110473C:  000055E3     CMPS r0, r5, 0x0
		   0x01104740:  0000001A     BNE $+0x8  // if (!=) goto 0x01104748
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01104744:  215BF9EB     BL $-0x1a9374
		   // ──── Block 4 if (!=) ────────────────────
		   0x01104748:  0C1094E5     LDR r1, [r4, 0xc]
		   0x0110474C:  0C2095E5     LDR r2, [r5, 0xc]
		   0x01104750:  68609FE5     LDR r6, [pc, 0x68]
		   0x01104754:  011042E0     SUB r1, r2, r1
		   0x01104758:  06609FE7     LDR r6, [pc, r6]
		   0x0110475C:  04108DE5     STR r1, [sp, 0x4]
		   0x01104760:  04108DE2     ADD r1, sp, 0x4
		   0x01104764:  240096E5     LDR r0, [r6, 0x24]
		   0x01104768:  CB5AF9EB     BL $-0x1a94cc
		   0x0110476C:  084094E5     LDR r4, [r4, 0x8]
		   0x01104770:  0050A0E1     MOV r5, r0
		   0x01104774:  000054E3     CMPS r0, r4, 0x0
		   0x01104778:  0000001A     BNE $+0x8  // if (!=) goto 0x01104780
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110477C:  135BF9EB     BL $-0x1a93ac
		   // ──── Block 6 if (!=) ────────────────────
		   0x01104780:  240096E5     LDR r0, [r6, 0x24]
		   0x01104784:  0C1094E5     LDR r1, [r4, 0xc]
		   0x01104788:  00108DE5     STR r1, [sp]
		   0x0110478C:  0D10A0E1     MOV r1, sp
		   0x01104790:  C15AF9EB     BL $-0x1a94f4
		   0x01104794:  0020A0E1     MOV r2, r0
		   0x01104798:  24009FE5     LDR r0, [pc, 0x24]
		   0x0110479C:  0510A0E1     MOV r1, r5
		   0x011047A0:  0030A0E3     MOV r3, 0x0
		   0x011047A4:  00009FE7     LDR r0, [pc, r0]
		   0x011047A8:  000090E5     LDR r0, [r0]
		   0x011047AC:  945576EB     BL $+0x1d95658  // CALL → String.Format
		   0x011047B0:  08D08DE2     ADD sp, sp, 0x8
		   0x011047B4:  7080BDE8     POP {r4, r5, r6, pc}
		   0x011047B8:  9C761203     TSTSEQ r7, r2, 0x9c00000
		   0x011047BC:  C841F702     RSCSEQ r4, r7, 0x32
		   0x011047C0:  681FF702     RSCSEQ r1, r7, 0x1a0
		   0x011047C4:  4C41F702     RSCSEQ r4, r7, 0x13
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class <>c // TypeDefIndex: 1272
{

	// Fields
	public static readonly ChargeableContainerFillData.<>c <>9; // 0x0
	public static Predicate<ChargeableContainerFillData.FillData> <>9__2_0; // 0x4
	public static Func<ChargeableContainerFillData.FillData, bool> <>9__6_0; // 0x8
	public static Func<ChargeableContainerFillData.FillData, ItemData> <>9__6_1; // 0xC

	// Methods

	// RVA: 0x11047C8 Offset: 0x11047C8 VA: 0x11047C8
	private static void .cctor() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011047C8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011047CC:  4C409FE5     LDR r4, [pc, 0x4c]
		   0x011047D0:  04408FE0     ADD r4, pc, r4
		   0x011047D4:  0000D4E5     LDRB r0, [r4]
		   0x011047D8:  000050E3     CMPS r0, r0, 0x0
		   0x011047DC:  0400001A     BNE $+0x18  // if (!=) goto 0x011047F4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011047E0:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x011047E4:  00009FE7     LDR r0, [pc, r0]
		   0x011047E8:  5C5AF9EB     BL $-0x1a9688
		   0x011047EC:  0100A0E3     MOV r0, 0x1
		   0x011047F0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011047F4:  2C509FE5     LDR r5, [pc, 0x2c]
		   0x011047F8:  05509FE7     LDR r5, [pc, r5]
		   0x011047FC:  000095E5     LDR r0, [r5]
		   0x01104800:  EF5AF9EB     BL $-0x1a943c
		   0x01104804:  0010A0E3     MOV r1, 0x0
		   0x01104808:  0040A0E1     MOV r4, r0
		   0x0110480C:  F6427EEB     BL $+0x1f90be0  // CALL → Object..ctor
		   0x01104810:  000095E5     LDR r0, [r5]
		   0x01104814:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01104818:  004080E5     STR r4, [r0]
		   0x0110481C:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01104820:  E1751203     TSTSEQ r7, r2, 0x38400000
		   0x01104824:  0C50F702     RSCSEQ r5, r7, 0xc
		   0x01104828:  F84FF702     RSCSEQ r4, r7, 0x3e0
		*/
	}

	// RVA: 0x110482C Offset: 0x110482C VA: 0x110482C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110482C:  0010A0E3     MOV r1, 0x0
		   0x01104830:  ED427EEA     B $+0x1f90bbc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1104834 Offset: 0x1104834 VA: 0x1104834
	internal bool <IsFullyFilled>b__2_0(ChargeableContainerFillData.FillData d) {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01104834:  10402DE9     PUSH {r4, lr}
		   0x01104838:  0140A0E1     MOV r4, r1
		   0x0110483C:  000051E3     CMPS r0, r1, 0x0
		   0x01104840:  0000001A     BNE $+0x8  // if (!=) goto 0x01104848
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01104844:  E15AF9EB     BL $-0x1a9474
		   // ──── Block 2 if (!=) ────────────────────
		   0x01104848:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0110484C:  000050E3     CMPS r0, r0, 0x0
		   0x01104850:  01000013     MOVNE r0, 0x1
		   0x01104854:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x1104858 Offset: 0x1104858 VA: 0x1104858
	internal bool <TryGetAllNotFilledItem>b__6_0(ChargeableContainerFillData.FillData filledData) {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01104858:  10402DE9     PUSH {r4, lr}
		   0x0110485C:  0140A0E1     MOV r4, r1
		   0x01104860:  000051E3     CMPS r0, r1, 0x0
		   0x01104864:  0000001A     BNE $+0x8  // if (!=) goto 0x0110486C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01104868:  D85AF9EB     BL $-0x1a9498
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110486C:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01104870:  000050E3     CMPS r0, r0, 0x0
		   0x01104874:  01000013     MOVNE r0, 0x1
		   0x01104878:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x110487C Offset: 0x110487C VA: 0x110487C
	internal ItemData <TryGetAllNotFilledItem>b__6_1(ChargeableContainerFillData.FillData filledData) {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110487C:  10402DE9     PUSH {r4, lr}
		   0x01104880:  0140A0E1     MOV r4, r1
		   0x01104884:  000051E3     CMPS r0, r1, 0x0
		   0x01104888:  0000001A     BNE $+0x8  // if (!=) goto 0x01104890
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110488C:  CF5AF9EB     BL $-0x1a94bc
		   // ──── Block 2 if (!=) ────────────────────
		   0x01104890:  084094E5     LDR r4, [r4, 0x8]
		   0x01104894:  000054E3     CMPS r0, r4, 0x0
		   0x01104898:  0000001A     BNE $+0x8  // if (!=) goto 0x011048A0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110489C:  CB5AF9EB     BL $-0x1a94cc
		   // ──── Block 4 if (!=) ────────────────────
		   0x011048A0:  0400A0E1     MOV r0, r4
		   0x011048A4:  0010A0E3     MOV r1, 0x0
		   0x011048A8:  78990FEB     BL $+0x3e65e8  // CALL → ItemPack.GetItemObject
		   0x011048AC:  0040A0E1     MOV r4, r0
		   0x011048B0:  000050E3     CMPS r0, r0, 0x0
		   0x011048B4:  0000001A     BNE $+0x8  // if (!=) goto 0x011048BC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011048B8:  C45AF9EB     BL $-0x1a94e8
		   // ──── Block 6 if (!=) ────────────────────
		   0x011048BC:  180094E5     LDR r0, [r4, 0x18]
		   0x011048C0:  1080BDE8     POP {r4, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass3_0 // TypeDefIndex: 1273
{

	// Fields
	public int sumOfFilledItems; // 0x8

	// Methods

	// RVA: 0x1103EBC Offset: 0x1103EBC VA: 0x1103EBC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01103EBC:  0010A0E3     MOV r1, 0x0
		   0x01103EC0:  49457EEA     B $+0x1f9152c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x11048C4 Offset: 0x11048C4 VA: 0x11048C4
	internal void <GetNumberOfFilledItems>b__0(ChargeableContainerFillData.FillData d) {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011048C4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x011048C8:  08D04DE2     SUB sp, sp, 0x8
		   0x011048CC:  086090E5     LDR r6, [r0, 0x8]
		   0x011048D0:  0150A0E1     MOV r5, r1
		   0x011048D4:  0040A0E1     MOV r4, r0
		   0x011048D8:  000051E3     CMPS r0, r1, 0x0
		   0x011048DC:  0000001A     BNE $+0x8  // if (!=) goto 0x011048E4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011048E0:  BA5AF9EB     BL $-0x1a9510
		   // ──── Block 2 if (!=) ────────────────────
		   0x011048E4:  0D00A0E1     MOV r0, sp
		   0x011048E8:  0510A0E1     MOV r1, r5
		   0x011048EC:  25FEFFEB     BL $-0x764
		   0x011048F0:  00009DE5     LDR r0, [sp]
		   0x011048F4:  060080E0     ADD r0, r0, r6
		   0x011048F8:  080084E5     STR r0, [r4, 0x8]
		   0x011048FC:  08D08DE2     ADD sp, sp, 0x8
		   0x01104900:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}
}
