// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class ConfigItemID // TypeDefIndex: 1232
{

	// Fields
	[JsonProperty("chain")]
	public string chain; // 0x8
	[JsonProperty("level")]
	public int level; // 0xC
	[JsonProperty("amount")]
	public int amount; // 0x10
	[JsonProperty("epIndex")]
	public string epIndex; // 0x14
	public int order; // 0x18
	public bool successParsed; // 0x1C
	private string chainName; // 0x20

	// Methods

	// RVA: 0x10F9EB0 Offset: 0x10F9EB0 VA: 0x10F9EB0
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F9EB0:  0010A0E3     MOV r1, 0x0
		   0x010F9EB4:  4C6D7EEA     B $+0x1f9b538  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F9EB8 Offset: 0x10F9EB8 VA: 0x10F9EB8
	public void .ctor(string chainName) {
		/* Disassembly (ARM32, 8 instructions, 0x20 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F9EB8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F9EBC:  0140A0E1     MOV r4, r1
		   0x010F9EC0:  0010A0E3     MOV r1, 0x0
		   0x010F9EC4:  0050A0E1     MOV r5, r0
		   0x010F9EC8:  476D7EEB     BL $+0x1f9b524  // CALL → Object..ctor
		   0x010F9ECC:  084085E5     STR r4, [r5, 0x8]
		   0x010F9ED0:  204085E5     STR r4, [r5, 0x20]
		   0x010F9ED4:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10F9ED8 Offset: 0x10F9ED8 VA: 0x10F9ED8
	public ConfigItemID Clone() {
		/* Disassembly (ARM32, 37 instructions, 0x94 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F9ED8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F9EDC:  7C509FE5     LDR r5, [pc, 0x7c]
		   0x010F9EE0:  0040A0E1     MOV r4, r0
		   0x010F9EE4:  05508FE0     ADD r5, pc, r5
		   0x010F9EE8:  0000D5E5     LDRB r0, [r5]
		   0x010F9EEC:  000050E3     CMPS r0, r0, 0x0
		   0x010F9EF0:  0400001A     BNE $+0x18  // if (!=) goto 0x010F9F08
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F9EF4:  68009FE5     LDR r0, [pc, 0x68]
		   0x010F9EF8:  00009FE7     LDR r0, [pc, r0]
		   0x010F9EFC:  9784F9EB     BL $-0x19ed9c
		   0x010F9F00:  0100A0E3     MOV r0, 0x1
		   0x010F9F04:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F9F08:  58009FE5     LDR r0, [pc, 0x58]
		   0x010F9F0C:  00009FE7     LDR r0, [pc, r0]
		   0x010F9F10:  000090E5     LDR r0, [r0]
		   0x010F9F14:  2A85F9EB     BL $-0x19eb50
		   0x010F9F18:  0010A0E3     MOV r1, 0x0
		   0x010F9F1C:  0050A0E1     MOV r5, r0
		   0x010F9F20:  316D7EEB     BL $+0x1f9b4cc  // CALL → Object..ctor
		   0x010F9F24:  087094E5     LDR r7, [r4, 0x8]
		   0x010F9F28:  000055E3     CMPS r0, r5, 0x0
		   0x010F9F2C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F9F34
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F9F30:  2685F9EB     BL $-0x19eb60
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F9F34:  0C3084E2     ADD r3, r4, 0xc
		   0x010F9F38:  0CC085E2     ADD ip, r5, 0xc
		   0x010F9F3C:  206094E5     LDR r6, [r4, 0x20]
		   0x010F9F40:  0F0093E8     LDM r3, {r0, r1, r2, r3}
		   0x010F9F44:  1C40D4E5     LDRB r4, [r4, 0x1c]
		   0x010F9F48:  0F008CE8     STM ip, {r0, r1, r2, r3}
		   0x010F9F4C:  0500A0E1     MOV r0, r5
		   0x010F9F50:  087085E5     STR r7, [r5, 0x8]
		   0x010F9F54:  1C40C5E5     STRB r4, [r5, 0x1c]
		   0x010F9F58:  206085E5     STR r6, [r5, 0x20]
		   0x010F9F5C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010F9F60:  701E1303     TSTSEQ r1, r3, 0x700
		   0x010F9F64:  0CEDF702     RSCSEQ lr, r7, 0x300
		   0x010F9F68:  F8ECF702     RSCSEQ lr, r7, 0xf800
		*/
	}

	// RVA: 0x10F9F6C Offset: 0x10F9F6C VA: 0x10F9F6C
	public int GetEpisodeIndex() {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F9F6C:  10402DE9     PUSH {r4, lr}
		   0x010F9F70:  0040A0E1     MOV r4, r0
		   0x010F9F74:  140090E5     LDR r0, [r0, 0x14]
		   0x010F9F78:  0010A0E3     MOV r1, 0x0
		   0x010F9F7C:  1D7976EB     BL $+0x1d9e47c  // CALL → String.IsNullOrEmpty
		   0x010F9F80:  000050E3     CMPS r0, r0, 0x0
		   0x010F9F84:  0000E013     MVNNE r0, r0, 0x0
		   0x010F9F88:  1080BD18     POPNE {r4, pc}
		   0x010F9F8C:  140094E5     LDR r0, [r4, 0x14]
		   0x010F9F90:  0010A0E3     MOV r1, 0x0
		   0x010F9F94:  1040BDE8     POP {r4, lr}
		   0x010F9F98:  0F2A7DEA     B $+0x1f4a844  // TAIL CALL → Int32.Parse
		*/
	}

	// RVA: 0x10F9F9C Offset: 0x10F9F9C VA: 0x10F9F9C
	public bool Parse() {
		/* Disassembly (ARM32, 60 instructions, 0xF0 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F9F9C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F9FA0:  C8509FE5     LDR r5, [pc, 0xc8]
		   0x010F9FA4:  0040A0E1     MOV r4, r0
		   0x010F9FA8:  05508FE0     ADD r5, pc, r5
		   0x010F9FAC:  0000D5E5     LDRB r0, [r5]
		   0x010F9FB0:  000050E3     CMPS r0, r0, 0x0
		   0x010F9FB4:  0A00001A     BNE $+0x30  // if (!=) goto 0x010F9FE4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F9FB8:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x010F9FBC:  00009FE7     LDR r0, [pc, r0]
		   0x010F9FC0:  6684F9EB     BL $-0x19ee60
		   0x010F9FC4:  AC009FE5     LDR r0, [pc, 0xac]
		   0x010F9FC8:  00009FE7     LDR r0, [pc, r0]
		   0x010F9FCC:  6384F9EB     BL $-0x19ee6c
		   0x010F9FD0:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x010F9FD4:  00009FE7     LDR r0, [pc, r0]
		   0x010F9FD8:  6084F9EB     BL $-0x19ee78
		   0x010F9FDC:  0100A0E3     MOV r0, 0x1
		   0x010F9FE0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F9FE4:  D860C4E1     LDRD r6, r7, [r4, 0x8]
		   0x010F9FE8:  000057E3     CMPS r0, r7, 0x0
		   0x010F9FEC:  0710A0E1     MOV r1, r7
		   0x010F9FF0:  206084E5     STR r6, [r4, 0x20]
		   0x010F9FF4:  150000CA     BGT $+0x5c  // if (>) goto 0x010FA050
		   // 
		   // ──── Block 3 else (<=) ────────────────────
		   0x010F9FF8:  80009FE5     LDR r0, [pc, 0x80]
		   0x010F9FFC:  00009FE7     LDR r0, [pc, r0]
		   0x010FA000:  000090E5     LDR r0, [r0]
		   0x010FA004:  EE84F9EB     BL $-0x19ec40
		   0x010FA008:  0050A0E1     MOV r5, r0
		   0x010FA00C:  70009FE5     LDR r0, [pc, 0x70]
		   0x010FA010:  0020A0E3     MOV r2, 0x0
		   0x010FA014:  00009FE7     LDR r0, [pc, r0]
		   0x010FA018:  001090E5     LDR r1, [r0]
		   0x010FA01C:  0500A0E1     MOV r0, r5
		   0x010FA020:  979010EB     BL $+0x424264  // CALL → InfoException..ctor
		   0x010FA024:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x010FA028:  00009FE7     LDR r0, [pc, r0]
		   0x010FA02C:  000090E5     LDR r0, [r0]
		   0x010FA030:  741090E5     LDR r1, [r0, 0x74]
		   0x010FA034:  000051E3     CMPS r0, r1, 0x0
		   0x010FA038:  0000001A     BNE $+0x8  // if (!=) goto 0x010FA040
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010FA03C:  9484F9EB     BL $-0x19eda8
		   // ──── Block 5 if (!=) ────────────────────
		   0x010FA040:  0500A0E1     MOV r0, r5
		   0x010FA044:  0010A0E3     MOV r1, 0x0
		   0x010FA048:  4FF83BEB     BL $+0xefe144  // CALL → sub_1FF818C
		   0x010FA04C:  0C1094E5     LDR r1, [r4, 0xc]
		   // ──── Block 6 if (>) ────────────────────
		   0x010FA050:  011041E2     SUB r1, r1, 0x1
		   0x010FA054:  0000A0E3     MOV r0, 0x0
		   0x010FA058:  000057E3     CMPS r0, r7, 0x0
		   0x010FA05C:  010000C3     MOVGT r0, 0x1
		   0x010FA060:  C11FC1E1     BIC r1, r1, r1, asr 31
		   0x010FA064:  1C00C4E5     STRB r0, [r4, 0x1c]
		   0x010FA068:  181084E5     STR r1, [r4, 0x18]
		   0x010FA06C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010FA070:  AD1D1303     TSTSEQ r1, r3, 0x2b40
		   0x010FA074:  CCC5F702     RSCSEQ ip, r7, 0x33000000
		   0x010FA078:  04D7F702     RSCSEQ sp, r7, 0x100000
		   0x010FA07C:  94F6F702     RSCSEQ pc, r7, 0x9400000
		   0x010FA080:  D0D6F702     RSCSEQ sp, r7, 0xd000000
		   0x010FA084:  54F6F702     RSCSEQ pc, r7, 0x5400000
		   0x010FA088:  60C5F702     RSCSEQ ip, r7, 0x18000000
		*/
	}

	// RVA: 0x10FA08C Offset: 0x10FA08C VA: 0x10FA08C
	public void SetChainName(string obj) {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010FA08C:  081080E5     STR r1, [r0, 0x8]
		   0x010FA090:  201080E5     STR r1, [r0, 0x20]
		   0x010FA094:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10EEF3C Offset: 0x10EEF3C VA: 0x10EEF3C
	public string GetChainName() {
		/* Disassembly (ARM32, 30 instructions, 0x78 bytes):
		   // CFG: 6 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EEF3C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EEF40:  6C509FE5     LDR r5, [pc, 0x6c]
		   0x010EEF44:  0040A0E1     MOV r4, r0
		   0x010EEF48:  05508FE0     ADD r5, pc, r5
		   0x010EEF4C:  0000D5E5     LDRB r0, [r5]
		   0x010EEF50:  000050E3     CMPS r0, r0, 0x0
		   0x010EEF54:  0400001A     BNE $+0x18  // if (!=) goto 0x010EEF6C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EEF58:  58009FE5     LDR r0, [pc, 0x58]
		   0x010EEF5C:  00009FE7     LDR r0, [pc, r0]
		   0x010EEF60:  7EB0F9EB     BL $-0x193e00
		   0x010EEF64:  0100A0E3     MOV r0, 0x1
		   0x010EEF68:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EEF6C:  200094E5     LDR r0, [r4, 0x20]
		   0x010EEF70:  0010A0E3     MOV r1, 0x0
		   0x010EEF74:  1FA576EB     BL $+0x1da9484  // CALL → String.IsNullOrEmpty
		   0x010EEF78:  000050E3     CMPS r0, r0, 0x0
		   0x010EEF7C:  0900001A     BNE $+0x2c  // if (!=) goto 0x010EEFA8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EEF80:  34009FE5     LDR r0, [pc, 0x34]
		   0x010EEF84:  0020A0E3     MOV r2, 0x0
		   0x010EEF88:  00009FE7     LDR r0, [pc, r0]
		   0x010EEF8C:  001090E5     LDR r1, [r0]
		   0x010EEF90:  200094E5     LDR r0, [r4, 0x20]
		   0x010EEF94:  AAA076EB     BL $+0x1da82b0  // CALL → String.op_Inequality
		   0x010EEF98:  000050E3     CMPS r0, r0, 0x0
		   0x010EEF9C:  0100000A     BEQ $+0xc  // if (==) goto 0x010EEFA8
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x010EEFA0:  200094E5     LDR r0, [r4, 0x20]
		   0x010EEFA4:  3088BDE8     POP {r4, r5, fp, pc}
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010EEFA8:  080094E5     LDR r0, [r4, 0x8]
		   0x010EEFAC:  200084E5     STR r0, [r4, 0x20]
		   0x010EEFB0:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}
