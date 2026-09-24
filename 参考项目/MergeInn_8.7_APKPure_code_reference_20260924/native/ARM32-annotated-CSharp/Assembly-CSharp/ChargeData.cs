// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class ChargeData // TypeDefIndex: 1283
{

	// Fields
	[JsonProperty("charges")]
	[SerializeField]
	public int charges; // 0x8
	[JsonProperty("drops")]
	[SerializeField]
	public int capacity; // 0xC

	// Methods

	// RVA: 0x1108A1C Offset: 0x1108A1C VA: 0x1108A1C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01108A1C:  0010A0E3     MOV r1, 0x0
		   0x01108A20:  71327EEA     B $+0x1f8c9cc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1108A24 Offset: 0x1108A24 VA: 0x1108A24
	public void .ctor(ChargeData chargeData) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01108A24:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01108A28:  0150A0E1     MOV r5, r1
		   0x01108A2C:  0010A0E3     MOV r1, 0x0
		   0x01108A30:  0040A0E1     MOV r4, r0
		   0x01108A34:  6C327EEB     BL $+0x1f8c9b8  // CALL → Object..ctor
		   0x01108A38:  000055E3     CMPS r0, r5, 0x0
		   0x01108A3C:  0000001A     BNE $+0x8  // if (!=) goto 0x01108A44
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108A40:  624AF9EB     BL $-0x1ad670
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108A44:  D800C5E1     LDRD r0, r1, [r5, 0x8]
		   0x01108A48:  F800C4E1     STRD r0, r1, [r4, 0x8]
		   0x01108A4C:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}
