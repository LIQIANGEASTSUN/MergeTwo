// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class FieldData // TypeDefIndex: 1165
{

	// Fields
	[SerializeField]
	public FieldData.Vector2IntSerializable size; // 0x8
	[SerializeField]
	public FieldGroup fieldGroup; // 0x10
	[SerializeField]
	public FieldData.FieldTileData[] tiles; // 0x1C
	private LevelLayout layoutCache; // 0x20

	// Methods

	// RVA: 0x10D1230 Offset: 0x10D1230 VA: 0x10D1230
	public LevelLayout GetLayout() {
		/* Disassembly (ARM32, 29 instructions, 0x74 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D1230:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010D1234:  5C509FE5     LDR r5, [pc, 0x5c]
		   0x010D1238:  0040A0E1     MOV r4, r0
		   0x010D123C:  05508FE0     ADD r5, pc, r5
		   0x010D1240:  0000D5E5     LDRB r0, [r5]
		   0x010D1244:  000050E3     CMPS r0, r0, 0x0
		   0x010D1248:  0400001A     BNE $+0x18  // if (!=) goto 0x010D1260
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D124C:  48009FE5     LDR r0, [pc, 0x48]
		   0x010D1250:  00009FE7     LDR r0, [pc, r0]
		   0x010D1254:  C127FAEB     BL $-0x1760f4
		   0x010D1258:  0100A0E3     MOV r0, 0x1
		   0x010D125C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D1260:  205094E5     LDR r5, [r4, 0x20]
		   0x010D1264:  000055E3     CMPS r0, r5, 0x0
		   0x010D1268:  0800001A     BNE $+0x28  // if (!=) goto 0x010D1290
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D126C:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x010D1270:  00009FE7     LDR r0, [pc, r0]
		   0x010D1274:  000090E5     LDR r0, [r0]
		   0x010D1278:  5128FAEB     BL $-0x175eb4
		   0x010D127C:  0410A0E1     MOV r1, r4
		   0x010D1280:  0020A0E3     MOV r2, 0x0
		   0x010D1284:  0050A0E1     MOV r5, r0
		   0x010D1288:  D8940DEB     BL $+0x365368  // CALL → LevelLayout..ctor
		   0x010D128C:  205084E5     STR r5, [r4, 0x20]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D1290:  0500A0E1     MOV r0, r5
		   0x010D1294:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010D1298:  09AA1503     TSTSEQ r10, r5, 0x9000
		   0x010D129C:  0C7CFA02     RSCSEQ r7, r10, 0xc00
		   0x010D12A0:  EC7BFA02     RSCSEQ r7, r10, 0x3b000
		*/
	}

	// RVA: 0x10D12A4 Offset: 0x10D12A4 VA: 0x10D12A4
	public void .ctor() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D12A4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010D12A8:  4C509FE5     LDR r5, [pc, 0x4c]
		   0x010D12AC:  0040A0E1     MOV r4, r0
		   0x010D12B0:  05508FE0     ADD r5, pc, r5
		   0x010D12B4:  0000D5E5     LDRB r0, [r5]
		   0x010D12B8:  000050E3     CMPS r0, r0, 0x0
		   0x010D12BC:  0400001A     BNE $+0x18  // if (!=) goto 0x010D12D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D12C0:  38009FE5     LDR r0, [pc, 0x38]
		   0x010D12C4:  00009FE7     LDR r0, [pc, r0]
		   0x010D12C8:  A427FAEB     BL $-0x176168
		   0x010D12CC:  0100A0E3     MOV r0, 0x1
		   0x010D12D0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D12D4:  28009FE5     LDR r0, [pc, 0x28]
		   0x010D12D8:  0010A0E3     MOV r1, 0x0
		   0x010D12DC:  00009FE7     LDR r0, [pc, r0]
		   0x010D12E0:  000090E5     LDR r0, [r0]
		   0x010D12E4:  C027FAEB     BL $-0x1760f8
		   0x010D12E8:  1C0084E5     STR r0, [r4, 0x1c]
		   0x010D12EC:  0400A0E1     MOV r0, r4
		   0x010D12F0:  0010A0E3     MOV r1, 0x0
		   0x010D12F4:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010D12F8:  3B107FEA     B $+0x1fc40f4  // TAIL CALL → Object..ctor
		   0x010D12FC:  96A91503     TSTSEQ r10, r5, 0x258000
		   0x010D1300:  9C7BFA02     RSCSEQ r7, r10, 0x27000
		   0x010D1304:  847BFA02     RSCSEQ r7, r10, 0x21000
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class FieldTileData // TypeDefIndex: 1162
{

	// Fields
	[SerializeField]
	public bool isHole; // 0x8
	[SerializeField]
	public FieldData.ItemTileData itemTileData; // 0xC

	// Methods

	// RVA: 0x10D1308 Offset: 0x10D1308 VA: 0x10D1308
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D1308:  0010A0E3     MOV r1, 0x0
		   0x010D130C:  36107FEA     B $+0x1fc40e0  // TAIL CALL → Object..ctor
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class ItemTileData // TypeDefIndex: 1163
{

	// Fields
	[SerializeField]
	public string itemCode; // 0x8
	[SerializeField]
	public bool isLocked; // 0xC
	[SerializeField]
	public bool isBoxed; // 0xD

	// Methods

	// RVA: 0x10D1310 Offset: 0x10D1310 VA: 0x10D1310
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D1310:  0010A0E3     MOV r1, 0x0
		   0x010D1314:  34107FEA     B $+0x1fc40d8  // TAIL CALL → Object..ctor
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public struct Vector2IntSerializable // TypeDefIndex: 1164
{

	// Fields
	public int x; // 0x0
	public int y; // 0x4

	// Methods

	// RVA: 0x10D1318 Offset: 0x10D1318 VA: 0x10D1318
	public void .ctor(int x, int y) {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D1318:  0230A0E1     MOV r3, r2
		   0x010D131C:  0120A0E1     MOV r2, r1
		   0x010D1320:  F020C0E1     STRD r2, r3, [r0]
		   0x010D1324:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10D1328 Offset: 0x10D1328 VA: 0x10D1328
	public Vector2Int ToVector2Int() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D1328:  D020C1E1     LDRD r2, r3, [r1]
		   0x010D132C:  F020C0E1     STRD r2, r3, [r0]
		   0x010D1330:  1EFF2FE1     BX lr
		*/
	}
}
