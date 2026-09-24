// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class GoalTarget // TypeDefIndex: 741
{

	// Fields
	[SerializeField]
	public ItemObject item; // 0x8
	[SerializeField]
	public int targetAmount; // 0xC
	[HideInInspector]
	public int currentAmount; // 0x10

	// Properties
	public int Weight { get; }

	// Methods

	// RVA: 0x1516FF8 Offset: 0x1516FF8 VA: 0x1516FF8
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01516FF8:  0010A0E3     MOV r1, 0x0
		   0x01516FFC:  FAF86DEA     B $+0x1b7e3f0  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1517000 Offset: 0x1517000 VA: 0x1517000
	public void .ctor(ItemObject item, int targetAmount) {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01517000:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01517004:  0160A0E1     MOV r6, r1
		   0x01517008:  0010A0E3     MOV r1, 0x0
		   0x0151700C:  0250A0E1     MOV r5, r2
		   0x01517010:  0040A0E1     MOV r4, r0
		   0x01517014:  F4F86DEB     BL $+0x1b7e3d8  // CALL → Object..ctor
		   0x01517018:  086084E5     STR r6, [r4, 0x8]
		   0x0151701C:  0C5084E5     STR r5, [r4, 0xc]
		   0x01517020:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x1517024 Offset: 0x1517024 VA: 0x1517024
	public int get_Weight() {
		/* Disassembly (ARM32, 5 instructions, 0x14 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01517024:  DC00C0E1     LDRD r0, r1, [r0, 0xc]
		   0x01517028:  000051E1     CMPS r0, r1, r0
		   0x0151702C:  FA1FA0A3     MOVGE r1, 0x3e8
		   0x01517030:  0100A0E1     MOV r0, r1
		   0x01517034:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1517038 Offset: 0x1517038 VA: 0x1517038
	public GoalTarget Clone() {
		/* Disassembly (ARM32, 53 instructions, 0xD4 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01517038:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0151703C:  B4509FE5     LDR r5, [pc, 0xb4]
		   0x01517040:  0040A0E1     MOV r4, r0
		   0x01517044:  05508FE0     ADD r5, pc, r5
		   0x01517048:  0000D5E5     LDRB r0, [r5]
		   0x0151704C:  000050E3     CMPS r0, r0, 0x0
		   0x01517050:  0700001A     BNE $+0x24  // if (!=) goto 0x01517074
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01517054:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x01517058:  00009FE7     LDR r0, [pc, r0]
		   0x0151705C:  3F10E9EB     BL $-0x5bbefc
		   0x01517060:  98009FE5     LDR r0, [pc, 0x98]
		   0x01517064:  00009FE7     LDR r0, [pc, r0]
		   0x01517068:  3C10E9EB     BL $-0x5bbf08
		   0x0151706C:  0100A0E3     MOV r0, 0x1
		   0x01517070:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01517074:  88009FE5     LDR r0, [pc, 0x88]
		   0x01517078:  00009FE7     LDR r0, [pc, r0]
		   0x0151707C:  086094E5     LDR r6, [r4, 0x8]
		   0x01517080:  000090E5     LDR r0, [r0]
		   0x01517084:  741090E5     LDR r1, [r0, 0x74]
		   0x01517088:  000051E3     CMPS r0, r1, 0x0
		   0x0151708C:  0000001A     BNE $+0x8  // if (!=) goto 0x01517094
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01517090:  7F10E9EB     BL $-0x5bbdfc
		   // ──── Block 4 if (!=) ────────────────────
		   0x01517094:  0600A0E1     MOV r0, r6
		   0x01517098:  0010A0E3     MOV r1, 0x0
		   0x0151709C:  0020A0E3     MOV r2, 0x0
		   0x015170A0:  0050A0E3     MOV r5, 0x0
		   0x015170A4:  7C832BEB     BL $+0xae0df8  // CALL → sub_1FF7E9C
		   0x015170A8:  000050E3     CMPS r0, r0, 0x0
		   0x015170AC:  0F00001A     BNE $+0x44  // if (!=) goto 0x015170F0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x015170B0:  50009FE5     LDR r0, [pc, 0x50]
		   0x015170B4:  00009FE7     LDR r0, [pc, r0]
		   0x015170B8:  000090E5     LDR r0, [r0]
		   0x015170BC:  C010E9EB     BL $-0x5bbcf8
		   0x015170C0:  0010A0E3     MOV r1, 0x0
		   0x015170C4:  0050A0E1     MOV r5, r0
		   0x015170C8:  0060A0E3     MOV r6, 0x0
		   0x015170CC:  C6F86DEB     BL $+0x1b7e320  // CALL → Object..ctor
		   0x015170D0:  087094E5     LDR r7, [r4, 0x8]
		   0x015170D4:  000055E3     CMPS r0, r5, 0x0
		   0x015170D8:  0000001A     BNE $+0x8  // if (!=) goto 0x015170E0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x015170DC:  BB10E9EB     BL $-0x5bbd0c
		   // ──── Block 7 if (!=) ────────────────────
		   0x015170E0:  0C0094E5     LDR r0, [r4, 0xc]
		   0x015170E4:  087085E5     STR r7, [r5, 0x8]
		   0x015170E8:  106085E5     STR r6, [r5, 0x10]
		   0x015170EC:  0C0085E5     STR r0, [r5, 0xc]
		   // ──── Block 8 if (!=) ────────────────────
		   0x015170F0:  0500A0E1     MOV r0, r5
		   0x015170F4:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x015170F8:  E06ED102     SBCSEQ r6, r1, 0xe00
		   0x015170FC:  1C46B602     ADCSEQ r4, r6, 0x1c00000
		   0x01517100:  D4F4B502     ADCSEQ pc, r5, 0xd4000000
		   0x01517104:  C0F4B502     ADCSEQ pc, r5, 0xc0000000
		   0x01517108:  C045B602     ADCSEQ r4, r6, 0x30000000
		*/
	}
}
