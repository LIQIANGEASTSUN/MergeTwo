// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemFiniteContainerPredictable : ItemFiniteContainer // TypeDefIndex: 1325
{

	// Fields
	private PseudoRandom pseudoRandom; // 0x130

	// Methods

	// RVA: 0x111AC20 Offset: 0x111AC20 VA: 0x111AC20 Slot: 10
	public override void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111AC20:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		*/
	}

	// RVA: 0x111ADA8 Offset: 0x111ADA8 VA: 0x111ADA8 Slot: 48
	protected override ItemData SelectItemToSpawn(EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 305 instructions, 0x4C4 bytes):
		   // CFG: 70 blocks, 73 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111ADA8:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0111ADAC:  08D04DE2     SUB sp, sp, 0x8
		   0x0111ADB0:  58449FE5     LDR r4, [pc, 0x458]
		   0x0111ADB4:  0060A0E1     MOV r6, r0
		   0x0111ADB8:  0150A0E1     MOV r5, r1
		   0x0111ADBC:  04408FE0     ADD r4, pc, r4
		   0x0111ADC0:  0000D4E5     LDRB r0, [r4]
		   0x0111ADC4:  000050E3     CMPS r0, r0, 0x0
		   0x0111ADC8:  1C00001A     BNE $+0x78  // if (!=) goto 0x0111AE40
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111ADCC:  40049FE5     LDR r0, [pc, 0x440]
		   0x0111ADD0:  00009FE7     LDR r0, [pc, r0]
		   0x0111ADD4:  E100F9EB     BL $-0x1bfc74
		   0x0111ADD8:  38049FE5     LDR r0, [pc, 0x438]
		   0x0111ADDC:  00009FE7     LDR r0, [pc, r0]
		   0x0111ADE0:  DE00F9EB     BL $-0x1bfc80
		   0x0111ADE4:  30049FE5     LDR r0, [pc, 0x430]
		   0x0111ADE8:  00009FE7     LDR r0, [pc, r0]
		   0x0111ADEC:  DB00F9EB     BL $-0x1bfc8c
		   0x0111ADF0:  28049FE5     LDR r0, [pc, 0x428]
		   0x0111ADF4:  00009FE7     LDR r0, [pc, r0]
		   0x0111ADF8:  D800F9EB     BL $-0x1bfc98
		   0x0111ADFC:  20049FE5     LDR r0, [pc, 0x420]
		   0x0111AE00:  00009FE7     LDR r0, [pc, r0]
		   0x0111AE04:  D500F9EB     BL $-0x1bfca4
		   0x0111AE08:  18049FE5     LDR r0, [pc, 0x418]
		   0x0111AE0C:  00009FE7     LDR r0, [pc, r0]
		   0x0111AE10:  D200F9EB     BL $-0x1bfcb0
		   0x0111AE14:  10049FE5     LDR r0, [pc, 0x410]
		   0x0111AE18:  00009FE7     LDR r0, [pc, r0]
		   0x0111AE1C:  CF00F9EB     BL $-0x1bfcbc
		   0x0111AE20:  08049FE5     LDR r0, [pc, 0x408]
		   0x0111AE24:  00009FE7     LDR r0, [pc, r0]
		   0x0111AE28:  CC00F9EB     BL $-0x1bfcc8
		   0x0111AE2C:  00049FE5     LDR r0, [pc, 0x400]
		   0x0111AE30:  00009FE7     LDR r0, [pc, r0]
		   0x0111AE34:  C900F9EB     BL $-0x1bfcd4
		   0x0111AE38:  0100A0E3     MOV r0, 0x1
		   0x0111AE3C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111AE40:  304196E5     LDR r4, [r6, 0x130]
		   0x0111AE44:  000054E3     CMPS r0, r4, 0x0
		   0x0111AE48:  0000001A     BNE $+0x8  // if (!=) goto 0x0111AE50
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111AE4C:  5F01F9EB     BL $-0x1bfa7c
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111AE50:  0400A0E1     MOV r0, r4
		   0x0111AE54:  0010A0E3     MOV r1, 0x0
		   0x0111AE58:  F8EE0BEB     BL $+0x2fbbe8  // CALL → PseudoRandom.GetNextIndex
		   0x0111AE5C:  0040A0E1     MOV r4, r0
		   0x0111AE60:  D0039FE5     LDR r0, [pc, 0x3d0]
		   0x0111AE64:  00009FE7     LDR r0, [pc, r0]
		   0x0111AE68:  000090E5     LDR r0, [r0]
		   0x0111AE6C:  741090E5     LDR r1, [r0, 0x74]
		   0x0111AE70:  000051E3     CMPS r0, r1, 0x0
		   0x0111AE74:  0000001A     BNE $+0x8  // if (!=) goto 0x0111AE7C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111AE78:  0501F9EB     BL $-0x1bfbe4
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111AE7C:  0000A0E3     MOV r0, 0x0
		   0x0111AE80:  67B7FDEB     BL $-0x9225c
		   0x0111AE84:  C47096E5     LDR r7, [r6, 0xc4]
		   0x0111AE88:  000057E3     CMPS r0, r7, 0x0
		   0x0111AE8C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111AE94
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0111AE90:  4E01F9EB     BL $-0x1bfac0
		   // ──── Block 8 if (!=) ────────────────────
		   0x0111AE94:  0C0097E5     LDR r0, [r7, 0xc]
		   0x0111AE98:  040050E1     CMPS r0, r0, r4
		   0x0111AE9C:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0111AEA4
		   // 
		   // ──── Block 9 else (<= (unsigned)) ────────────────────
		   0x0111AEA0:  4B01F9EB     BL $-0x1bfacc
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x0111AEA4:  040187E0     ADD r0, r7, r4, lsl 2
		   0x0111AEA8:  104090E5     LDR r4, [r0, 0x10]
		   0x0111AEAC:  000054E3     CMPS r0, r4, 0x0
		   0x0111AEB0:  0000001A     BNE $+0x8  // if (!=) goto 0x0111AEB8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0111AEB4:  4501F9EB     BL $-0x1bfae4
		   // ──── Block 12 if (!=) ────────────────────
		   0x0111AEB8:  184094E5     LDR r4, [r4, 0x18]
		   0x0111AEBC:  000054E3     CMPS r0, r4, 0x0
		   0x0111AEC0:  B700000A     BEQ $+0x2e4  // if (==) goto 0x0111B1A4
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x0111AEC4:  846096E5     LDR r6, [r6, 0x84]
		   0x0111AEC8:  4C7094E5     LDR r7, [r4, 0x4c]
		   0x0111AECC:  1C80D4E5     LDRB r8, [r4, 0x1c]
		   0x0111AED0:  000056E3     CMPS r0, r6, 0x0
		   0x0111AED4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111AEDC
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x0111AED8:  3C01F9EB     BL $-0x1bfb08
		   // ──── Block 15 if (!=) ────────────────────
		   0x0111AEDC:  9000D6E5     LDRB r0, [r6, 0x90]
		   0x0111AEE0:  000050E3     CMPS r0, r0, 0x0
		   0x0111AEE4:  BB00000A     BEQ $+0x2f4  // if (==) goto 0x0111B1D8
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x0111AEE8:  010075E3     CMNS r0, r5, 0x1
		   0x0111AEEC:  01005513     CMPSNE r0, r5, 0x1
		   0x0111AEF0:  B800000A     BEQ $+0x2e8  // if (==) goto 0x0111B1D8
		   // 
		   // ──── Block 17 else (!=) ────────────────────
		   0x0111AEF4:  020055E3     CMPS r0, r5, 0x2
		   0x0111AEF8:  0B00001A     BNE $+0x34  // if (!=) goto 0x0111AF2C
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x0111AEFC:  085094E5     LDR r5, [r4, 0x8]
		   0x0111AF00:  000055E3     CMPS r0, r5, 0x0
		   0x0111AF04:  1500000A     BEQ $+0x5c  // if (==) goto 0x0111AF60
		   // 
		   // ──── Block 19 else (!=) ────────────────────
		   0x0111AF08:  0500A0E1     MOV r0, r5
		   0x0111AF0C:  0410A0E1     MOV r1, r4
		   0x0111AF10:  0020A0E3     MOV r2, 0x0
		   0x0111AF14:  BCC9FEEB     BL $-0x4d908
		   0x0111AF18:  0060A0E1     MOV r6, r0
		   0x0111AF1C:  010070E3     CMNS r0, r0, 0x1
		   0x0111AF20:  170000CA     BGT $+0x64  // if (>) goto 0x0111AF84
		   // 
		   // ──── Block 20 else (<=) ────────────────────
		   0x0111AF24:  146094E5     LDR r6, [r4, 0x14]
		   0x0111AF28:  650000EA     B $+0x19c  // goto 0x0111B0C4
		   // ──── Block 21 if (!=) ────────────────────
		   0x0111AF2C:  24039FE5     LDR r0, [pc, 0x324]
		   0x0111AF30:  04108DE2     ADD r1, sp, 0x4
		   0x0111AF34:  00009FE7     LDR r0, [pc, r0]
		   0x0111AF38:  04508DE5     STR r5, [sp, 0x4]
		   0x0111AF3C:  000090E5     LDR r0, [r0]
		   0x0111AF40:  D500F9EB     BL $-0x1bfca4
		   0x0111AF44:  0010A0E1     MOV r1, r0
		   0x0111AF48:  0C039FE5     LDR r0, [pc, 0x30c]
		   0x0111AF4C:  0020A0E3     MOV r2, 0x0
		   0x0111AF50:  00009FE7     LDR r0, [pc, r0]
		   0x0111AF54:  000090E5     LDR r0, [r0]
		   0x0111AF58:  07AE75EB     BL $+0x1d6b824  // CALL → String.Format
		   0x0111AF5C:  630000EA     B $+0x194  // goto 0x0111B0F0
		   // ──── Block 22 if (==) ────────────────────
		   0x0111AF60:  1A01F9EB     BL $-0x1bfb90
		   0x0111AF64:  0000A0E3     MOV r0, 0x0
		   0x0111AF68:  0410A0E1     MOV r1, r4
		   0x0111AF6C:  0020A0E3     MOV r2, 0x0
		   0x0111AF70:  A5C9FEEB     BL $-0x4d964
		   0x0111AF74:  010070E3     CMNS r0, r0, 0x1
		   0x0111AF78:  4F0000DA     BLE $+0x144  // if (<=) goto 0x0111B0BC
		   // 
		   // ──── Block 23 else (>) ────────────────────
		   0x0111AF7C:  0060A0E1     MOV r6, r0
		   0x0111AF80:  1201F9EB     BL $-0x1bfbb0
		   // ──── Block 24 if (>) ────────────────────
		   0x0111AF84:  011086E2     ADD r1, r6, 0x1
		   0x0111AF88:  0500A0E1     MOV r0, r5
		   0x0111AF8C:  0020A0E3     MOV r2, 0x0
		   0x0111AF90:  23CAFEEB     BL $-0x4d76c
		   0x0111AF94:  0040A0E1     MOV r4, r0
		   0x0111AF98:  B4029FE5     LDR r0, [pc, 0x2b4]
		   0x0111AF9C:  00009FE7     LDR r0, [pc, r0]
		   0x0111AFA0:  000090E5     LDR r0, [r0]
		   0x0111AFA4:  741090E5     LDR r1, [r0, 0x74]
		   0x0111AFA8:  000051E3     CMPS r0, r1, 0x0
		   0x0111AFAC:  0000001A     BNE $+0x8  // if (!=) goto 0x0111AFB4
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x0111AFB0:  B700F9EB     BL $-0x1bfd1c
		   // ──── Block 26 if (!=) ────────────────────
		   0x0111AFB4:  0400A0E1     MOV r0, r4
		   0x0111AFB8:  0010A0E3     MOV r1, 0x0
		   0x0111AFBC:  0020A0E3     MOV r2, 0x0
		   0x0111AFC0:  B5733BEB     BL $+0xedcedc  // CALL → sub_1FF7E9C
		   0x0111AFC4:  000050E3     CMPS r0, r0, 0x0
		   0x0111AFC8:  0C00000A     BEQ $+0x38  // if (==) goto 0x0111B000
		   // 
		   // ──── Block 27 else (!=) ────────────────────
		   0x0111AFCC:  000055E3     CMPS r0, r5, 0x0
		   0x0111AFD0:  0000001A     BNE $+0x8  // if (!=) goto 0x0111AFD8
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x0111AFD4:  FD00F9EB     BL $-0x1bfc04
		   // ──── Block 29 if (!=) ────────────────────
		   0x0111AFD8:  284095E5     LDR r4, [r5, 0x28]
		   0x0111AFDC:  000054E3     CMPS r0, r4, 0x0
		   0x0111AFE0:  0000001A     BNE $+0x8  // if (!=) goto 0x0111AFE8
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x0111AFE4:  F900F9EB     BL $-0x1bfc14
		   // ──── Block 31 if (!=) ────────────────────
		   0x0111AFE8:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0111AFEC:  0020A0E3     MOV r2, 0x0
		   0x0111AFF0:  011040E2     SUB r1, r0, 0x1
		   0x0111AFF4:  0500A0E1     MOV r0, r5
		   0x0111AFF8:  09CAFEEB     BL $-0x4d7d4
		   0x0111AFFC:  0040A0E1     MOV r4, r0
		   // ──── Block 32 if (==) ────────────────────
		   0x0111B000:  050057E3     CMPS r0, r7, 0x5
		   0x0111B004:  0900001A     BNE $+0x2c  // if (!=) goto 0x0111B030
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x0111B008:  000054E3     CMPS r0, r4, 0x0
		   0x0111B00C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B014
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x0111B010:  EE00F9EB     BL $-0x1bfc40
		   // ──── Block 35 if (!=) ────────────────────
		   0x0111B014:  185094E5     LDR r5, [r4, 0x18]
		   0x0111B018:  000055E3     CMPS r0, r5, 0x0
		   0x0111B01C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B024
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x0111B020:  EA00F9EB     BL $-0x1bfc50
		   // ──── Block 37 if (!=) ────────────────────
		   0x0111B024:  4C0095E5     LDR r0, [r5, 0x4c]
		   0x0111B028:  050050E3     CMPS r0, r0, 0x5
		   0x0111B02C:  1900001A     BNE $+0x6c  // if (!=) goto 0x0111B098
		   // 
		   // ──── Block 38 (from 2 paths) ──────────────────
		   0x0111B030:  000058E3     CMPS r0, r8, 0x0
		   0x0111B034:  1200000A     BEQ $+0x50  // if (==) goto 0x0111B084
		   // 
		   // ──── Block 39 else (!=) ────────────────────
		   0x0111B038:  000054E3     CMPS r0, r4, 0x0
		   0x0111B03C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B044
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x0111B040:  E200F9EB     BL $-0x1bfc70
		   // ──── Block 41 if (!=) ────────────────────
		   0x0111B044:  185094E5     LDR r5, [r4, 0x18]
		   0x0111B048:  000055E3     CMPS r0, r5, 0x0
		   0x0111B04C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B054
		   // 
		   // ──── Block 42 else (==) ────────────────────
		   0x0111B050:  DE00F9EB     BL $-0x1bfc80
		   // ──── Block 43 if (!=) ────────────────────
		   0x0111B054:  1C00D5E5     LDRB r0, [r5, 0x1c]
		   0x0111B058:  000050E3     CMPS r0, r0, 0x0
		   0x0111B05C:  0B00001A     BNE $+0x34  // if (!=) goto 0x0111B090
		   // 
		   // ──── Block 44 else (==) ────────────────────
		   0x0111B060:  185094E5     LDR r5, [r4, 0x18]
		   0x0111B064:  000055E3     CMPS r0, r5, 0x0
		   0x0111B068:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B070
		   // 
		   // ──── Block 45 else (==) ────────────────────
		   0x0111B06C:  D700F9EB     BL $-0x1bfc9c
		   // ──── Block 46 if (!=) ────────────────────
		   0x0111B070:  0500A0E1     MOV r0, r5
		   0x0111B074:  0410A0E1     MOV r1, r4
		   0x0111B078:  08D08DE2     ADD sp, sp, 0x8
		   0x0111B07C:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x0111B080:  5EDFFFEA     B $-0x8280
		   // ──── Block 47 if (==) ────────────────────
		   0x0111B084:  000054E3     CMPS r0, r4, 0x0
		   0x0111B088:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B090
		   // 
		   // ──── Block 48 else (==) ────────────────────
		   0x0111B08C:  CF00F9EB     BL $-0x1bfcbc
		   // ──── Block 49 (from 2 paths) ──────────────────
		   0x0111B090:  184094E5     LDR r4, [r4, 0x18]
		   0x0111B094:  4F0000EA     B $+0x144  // goto 0x0111B1D8
		   // ──── Block 50 if (!=) ────────────────────
		   0x0111B098:  185094E5     LDR r5, [r4, 0x18]
		   0x0111B09C:  000055E3     CMPS r0, r5, 0x0
		   0x0111B0A0:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B0A8
		   // 
		   // ──── Block 51 else (==) ────────────────────
		   0x0111B0A4:  C900F9EB     BL $-0x1bfcd4
		   // ──── Block 52 if (!=) ────────────────────
		   0x0111B0A8:  0500A0E1     MOV r0, r5
		   0x0111B0AC:  0410A0E1     MOV r1, r4
		   0x0111B0B0:  08D08DE2     ADD sp, sp, 0x8
		   0x0111B0B4:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x0111B0B8:  0CDFFFEA     B $-0x83c8
		   // ──── Block 53 if (<=) ────────────────────
		   0x0111B0BC:  146094E5     LDR r6, [r4, 0x14]
		   0x0111B0C0:  C200F9EB     BL $-0x1bfcf0
		   // ──── Block 54 ──────────────────────────────
		   0x0111B0C4:  80019FE5     LDR r0, [pc, 0x180]
		   0x0111B0C8:  0040A0E3     MOV r4, 0x0
		   0x0111B0CC:  0610A0E1     MOV r1, r6
		   0x0111B0D0:  00009FE7     LDR r0, [pc, r0]
		   0x0111B0D4:  002090E5     LDR r2, [r0]
		   0x0111B0D8:  70019FE5     LDR r0, [pc, 0x170]
		   0x0111B0DC:  00009FE7     LDR r0, [pc, r0]
		   0x0111B0E0:  0C3095E5     LDR r3, [r5, 0xc]
		   0x0111B0E4:  000090E5     LDR r0, [r0]
		   0x0111B0E8:  00408DE5     STR r4, [sp]
		   0x0111B0EC:  26FA75EB     BL $+0x1d7e8a0  // CALL → String.Concat
		   // ──── Block 55 ──────────────────────────────
		   0x0111B0F0:  0060A0E1     MOV r6, r0
		   0x0111B0F4:  64019FE5     LDR r0, [pc, 0x164]
		   0x0111B0F8:  00009FE7     LDR r0, [pc, r0]
		   0x0111B0FC:  000090E5     LDR r0, [r0]
		   0x0111B100:  AF00F9EB     BL $-0x1bfd3c
		   0x0111B104:  0610A0E1     MOV r1, r6
		   0x0111B108:  0020A0E3     MOV r2, 0x0
		   0x0111B10C:  0050A0E1     MOV r5, r0
		   0x0111B110:  5B0C10EB     BL $+0x403174  // CALL → InfoException..ctor
		   0x0111B114:  48019FE5     LDR r0, [pc, 0x148]
		   0x0111B118:  00009FE7     LDR r0, [pc, r0]
		   0x0111B11C:  000090E5     LDR r0, [r0]
		   0x0111B120:  741090E5     LDR r1, [r0, 0x74]
		   0x0111B124:  000051E3     CMPS r0, r1, 0x0
		   0x0111B128:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B130
		   // 
		   // ──── Block 56 else (==) ────────────────────
		   0x0111B12C:  5800F9EB     BL $-0x1bfe98
		   // ──── Block 57 if (!=) ────────────────────
		   0x0111B130:  0500A0E1     MOV r0, r5
		   0x0111B134:  0010A0E3     MOV r1, 0x0
		   0x0111B138:  13743BEB     BL $+0xedd054  // CALL → sub_1FF818C
		   0x0111B13C:  250000EA     B $+0x9c  // goto 0x0111B1D8
		   0x0111B140:  FFFFFFEA     B $+0x4  // goto 0x0111B144
		   // ──── Block 59 ──────────────────────────────
		   0x0111B144:  010051E3     CMPS r0, r1, 0x1
		   0x0111B148:  2E00001A     BNE $+0xc0  // if (!=) goto 0x0111B208
		   // 
		   // ──── Block 60 else (==) ────────────────────
		   0x0111B14C:  5D26FCEB     BL $-0xf6684
		   0x0111B150:  0040A0E1     MOV r4, r0
		   0x0111B154:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x0111B158:  00009FE7     LDR r0, [pc, r0]
		   0x0111B15C:  0300F9EB     BL $-0x1bffec
		   0x0111B160:  001094E5     LDR r1, [r4]
		   0x0111B164:  001091E5     LDR r1, [r1]
		   0x0111B168:  B401F9EB     BL $-0x1bf928
		   0x0111B16C:  000050E3     CMPS r0, r0, 0x0
		   0x0111B170:  1B00000A     BEQ $+0x74  // if (==) goto 0x0111B1E4
		   // 
		   // ──── Block 61 else (!=) ────────────────────
		   0x0111B174:  004094E5     LDR r4, [r4]
		   0x0111B178:  8626FCEB     BL $-0xf65e0
		   0x0111B17C:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x0111B180:  00009FE7     LDR r0, [pc, r0]
		   0x0111B184:  F9FFF8EB     BL $-0x1c0014
		   0x0111B188:  741090E5     LDR r1, [r0, 0x74]
		   0x0111B18C:  000051E3     CMPS r0, r1, 0x0
		   0x0111B190:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B198
		   // 
		   // ──── Block 62 else (==) ────────────────────
		   0x0111B194:  3E00F9EB     BL $-0x1bff00
		   // ──── Block 63 if (!=) ────────────────────
		   0x0111B198:  0400A0E1     MOV r0, r4
		   0x0111B19C:  0010A0E3     MOV r1, 0x0
		   0x0111B1A0:  F9733BEB     BL $+0xedcfec  // CALL → sub_1FF818C
		   // ──── Block 64 if (==) ────────────────────
		   0x0111B1A4:  98009FE5     LDR r0, [pc, 0x98]
		   0x0111B1A8:  00009FE7     LDR r0, [pc, r0]
		   0x0111B1AC:  000090E5     LDR r0, [r0]
		   0x0111B1B0:  741090E5     LDR r1, [r0, 0x74]
		   0x0111B1B4:  000051E3     CMPS r0, r1, 0x0
		   0x0111B1B8:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B1C0
		   // 
		   // ──── Block 65 else (==) ────────────────────
		   0x0111B1BC:  3400F9EB     BL $-0x1bff28
		   // ──── Block 66 if (!=) ────────────────────
		   0x0111B1C0:  80009FE5     LDR r0, [pc, 0x80]
		   0x0111B1C4:  0010A0E3     MOV r1, 0x0
		   0x0111B1C8:  0040A0E3     MOV r4, 0x0
		   0x0111B1CC:  00009FE7     LDR r0, [pc, r0]
		   0x0111B1D0:  000090E5     LDR r0, [r0]
		   0x0111B1D4:  8A733BEB     BL $+0xedce30  // CALL → sub_1FF8004
		   // ──── Block 67 (from 2 paths) ──────────────────
		   0x0111B1D8:  0400A0E1     MOV r0, r4
		   0x0111B1DC:  08D08DE2     ADD sp, sp, 0x8
		   0x0111B1E0:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   // ──── Block 68 if (==) ────────────────────
		   0x0111B1E4:  0400A0E3     MOV r0, 0x4
		   0x0111B1E8:  CF32FCEB     BL $-0xf34bc
		   0x0111B1EC:  002094E5     LDR r2, [r4]
		   0x0111B1F0:  70109FE5     LDR r1, [pc, 0x70]
		   0x0111B1F4:  002080E5     STR r2, [r0]
		   0x0111B1F8:  01108FE0     ADD r1, pc, r1
		   0x0111B1FC:  0020A0E3     MOV r2, 0x0
		   0x0111B200:  CD32FCEB     BL $-0xf34c4
		   0x0111B204:  6326FCEB     BL $-0xf666c
		   // ──── Block 69 if (!=) ────────────────────
		   0x0111B208:  6626FCEB     BL $-0xf6660
		   0x0111B20C:  64D2ECEB     BL $-0x4cb668
		   0x0111B210:  A4101103     TSTSEQ r1, r1, 0xa4
		   0x0111B214:  B8B7F502     RSCSEQ fp, r5, 0x2e00000
		   0x0111B218:  80EAF502     RSCSEQ lr, r5, 0x80000
		   0x0111B21C:  E4C8F502     RSCSEQ ip, r5, 0xe40000
		   0x0111B220:  44B7F502     RSCSEQ fp, r5, 0x1100000
		   0x0111B224:  10CFF502     RSCSEQ ip, r5, 0x40
		   0x0111B228:  A4ECF502     RSCSEQ lr, r5, 0xa400
		   0x0111B22C:  98EAF502     RSCSEQ lr, r5, 0x98000
		   0x0111B230:  A0EAF502     RSCSEQ lr, r5, 0xa0000
		   0x0111B234:  98EAF502     RSCSEQ lr, r5, 0x98000
		   0x0111B238:  ACCEF502     RSCSEQ ip, r5, 0xac0
		   0x0111B23C:  94B7F502     RSCSEQ fp, r5, 0x2500000
		   0x0111B240:  08B4F502     RSCSEQ fp, r5, 0x8000000
		   0x0111B244:  E0B3F502     RSCSEQ fp, r5, 0x80000003
		   0x0111B248:  E4E8F502     RSCSEQ lr, r5, 0xe40000
		   0x0111B24C:  F4E7F502     RSCSEQ lr, r5, 0x3d00000
		   0x0111B250:  ECE7F502     RSCSEQ lr, r5, 0x3b00000
		   0x0111B254:  9CB5F502     RSCSEQ fp, r5, 0x27000000
		   0x0111B258:  28E9F502     RSCSEQ lr, r5, 0xa0000
		   0x0111B25C:  60E9F502     RSCSEQ lr, r5, 0x180000
		   0x0111B260:  D4C5F502     RSCSEQ ip, r5, 0x35000000
		   0x0111B264:  70B4F502     RSCSEQ fp, r5, 0x70000000
		   0x0111B268:  64DEE002     RSCEQ sp, r0, 0x640
		*/
	}

	// RVA: 0x111B26C Offset: 0x111B26C VA: 0x111B26C Slot: 18
	public override void PreDispose() {
		/* Disassembly (ARM32, 43 instructions, 0xAC bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111B26C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0111B270:  94509FE5     LDR r5, [pc, 0x94]
		   0x0111B274:  0040A0E1     MOV r4, r0
		   0x0111B278:  05508FE0     ADD r5, pc, r5
		   0x0111B27C:  0000D5E5     LDRB r0, [r5]
		   0x0111B280:  000050E3     CMPS r0, r0, 0x0
		   0x0111B284:  0400001A     BNE $+0x18  // if (!=) goto 0x0111B29C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111B288:  80009FE5     LDR r0, [pc, 0x80]
		   0x0111B28C:  00009FE7     LDR r0, [pc, r0]
		   0x0111B290:  B2FFF8EB     BL $-0x1c0130
		   0x0111B294:  0100A0E3     MOV r0, 0x1
		   0x0111B298:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111B29C:  000094E5     LDR r0, [r4]
		   0x0111B2A0:  582190E5     LDR r2, [r0, 0x158]
		   0x0111B2A4:  5C1190E5     LDR r1, [r0, 0x15c]
		   0x0111B2A8:  0400A0E1     MOV r0, r4
		   0x0111B2AC:  32FF2FE1     BLX r2  // virtual call: vtable+0x158
		   0x0111B2B0:  000094E5     LDR r0, [r4]
		   0x0111B2B4:  602190E5     LDR r2, [r0, 0x160]
		   0x0111B2B8:  641190E5     LDR r1, [r0, 0x164]
		   0x0111B2BC:  0400A0E1     MOV r0, r4
		   0x0111B2C0:  32FF2FE1     BLX r2  // virtual call: vtable+0x160
		   0x0111B2C4:  0400A0E1     MOV r0, r4
		   0x0111B2C8:  2ABFFFEB     BL $-0x10350
		   0x0111B2CC:  844094E5     LDR r4, [r4, 0x84]
		   0x0111B2D0:  000054E3     CMPS r0, r4, 0x0
		   0x0111B2D4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B2DC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111B2D8:  3C00F9EB     BL $-0x1bff08
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111B2DC:  30009FE5     LDR r0, [pc, 0x30]
		   0x0111B2E0:  00009FE7     LDR r0, [pc, r0]
		   0x0111B2E4:  144094E5     LDR r4, [r4, 0x14]
		   0x0111B2E8:  000090E5     LDR r0, [r0]
		   0x0111B2EC:  741090E5     LDR r1, [r0, 0x74]
		   0x0111B2F0:  000051E3     CMPS r0, r1, 0x0
		   0x0111B2F4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111B2FC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111B2F8:  E5FFF8EB     BL $-0x1c0064
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111B2FC:  0400A0E1     MOV r0, r4
		   0x0111B300:  0010A0E3     MOV r1, 0x0
		   0x0111B304:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0111B308:  F4B6FDEA     B $-0x92428
		   0x0111B30C:  E90B1103     TSTSEQ r0, r1, 0x3a400
		   0x0111B310:  84CAF502     RSCSEQ ip, r5, 0x84000
		   0x0111B314:  30CAF502     RSCSEQ ip, r5, 0x30000
		*/
	}

	// RVA: 0x111B318 Offset: 0x111B318 VA: 0x111B318
	public void .ctor() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111B318:  53FCFFEA     B $-0xeac
		*/
	}
}
