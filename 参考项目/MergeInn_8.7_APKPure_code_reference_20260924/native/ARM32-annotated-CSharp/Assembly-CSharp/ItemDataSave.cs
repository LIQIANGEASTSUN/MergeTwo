// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class ItemDataSave // TypeDefIndex: 1465
{

	// Fields
	[SerializeField]
	public int id; // 0x8
	[SerializeField]
	public int order; // 0xC
	[SerializeField]
	public bool isLocked; // 0x10
	[SerializeField]
	public int gemsCost; // 0x14
	[SerializeField]
	public bool isItBubble; // 0x18
	[SerializeField]
	public ItemType itemType; // 0x1C
	[Obsolete]
	[SerializeField]
	private ChainType chainType; // 0x20
	[SerializeField]
	public string chainName; // 0x24
	[SerializeField]
	public Vector2Int coordinates; // 0x28
	[SerializeField]
	public bool isFtue; // 0x30
	[SerializeField]
	public int stimulusChestEpisode; // 0x34

	// Properties
	[Obsolete]
	public ChainType OldChainType { get; }

	// Methods

	// RVA: 0x113F1E4 Offset: 0x113F1E4 VA: 0x113F1E4
	public ChainType get_OldChainType() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0113F1E4:  200090E5     LDR r0, [r0, 0x20]
		   0x0113F1E8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x113F1EC Offset: 0x113F1EC VA: 0x113F1EC
	public bool IsValid() {
		/* Disassembly (ARM32, 30 instructions, 0x78 bytes):
		   // CFG: 7 blocks, 5 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113F1EC:  082090E5     LDR r2, [r0, 0x8]
		   0x0113F1F0:  0010A0E1     MOV r1, r0
		   0x0113F1F4:  0100A0E3     MOV r0, 0x1
		   0x0113F1F8:  000052E3     CMPS r0, r2, 0x0
		   0x0113F1FC:  1EFF2F11     BXNE lr
		   0x0113F200:  0C2091E5     LDR r2, [r1, 0xc]
		   0x0113F204:  000052E3     CMPS r0, r2, 0x0
		   0x0113F208:  1020D105     LDRBEQ r2, [r1, 0x10]
		   0x0113F20C:  00005203     CMPSEQ r0, r2, 0x0
		   0x0113F210:  0000000A     BEQ $+0x8  // if (==) goto 0x0113F218
		   // 
		   // ──── Block 2 else (!=) ────────────────────
		   0x0113F214:  1EFF2FE1     BX lr
		   // ──── Block 3 if (==) ────────────────────
		   0x0113F218:  142091E5     LDR r2, [r1, 0x14]
		   0x0113F21C:  000052E3     CMPS r0, r2, 0x0
		   0x0113F220:  1820D105     LDRBEQ r2, [r1, 0x18]
		   0x0113F224:  00005203     CMPSEQ r0, r2, 0x0
		   0x0113F228:  F9FFFF1A     BNE $-0x14
		   // ──── Block 4 else (==) ────────────────────
		   0x0113F22C:  1C2091E5     LDR r2, [r1, 0x1c]
		   0x0113F230:  000052E3     CMPS r0, r2, 0x0
		   0x0113F234:  24209105     LDREQ r2, [r1, 0x24]
		   0x0113F238:  00005203     CMPSEQ r0, r2, 0x0
		   0x0113F23C:  F4FFFF1A     BNE $-0x28
		   // ──── Block 5 else (==) ────────────────────
		   0x0113F240:  D822C1E1     LDRD r2, r3, [r1, 0x28]
		   0x0113F244:  032092E1     ORRS r2, r2, r3
		   0x0113F248:  3020D105     LDRBEQ r2, [r1, 0x30]
		   0x0113F24C:  00005203     CMPSEQ r0, r2, 0x0
		   0x0113F250:  EFFFFF1A     BNE $-0x3c
		   // ──── Block 6 else (==) ────────────────────
		   0x0113F254:  340091E5     LDR r0, [r1, 0x34]
		   0x0113F258:  000050E3     CMPS r0, r0, 0x0
		   0x0113F25C:  01000013     MOVNE r0, 0x1
		   0x0113F260:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x113F264 Offset: 0x113F264 VA: 0x113F264
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0113F264:  0010A0E3     MOV r1, 0x0
		   0x0113F268:  5F587DEA     B $+0x1f56184  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x113F26C Offset: 0x113F26C VA: 0x113F26C
	public void .ctor(Item item) {
		/* Disassembly (ARM32, 75 instructions, 0x12C bytes):
		   // CFG: 16 blocks, 18 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113F26C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0113F270:  08D04DE2     SUB sp, sp, 0x8
		   0x0113F274:  0150A0E1     MOV r5, r1
		   0x0113F278:  0010A0E3     MOV r1, 0x0
		   0x0113F27C:  0040A0E1     MOV r4, r0
		   0x0113F280:  59587DEB     BL $+0x1f5616c  // CALL → Object..ctor
		   0x0113F284:  000055E3     CMPS r0, r5, 0x0
		   0x0113F288:  0000001A     BNE $+0x8  // if (!=) goto 0x0113F290
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113F28C:  4F70F8EB     BL $-0x1e3ebc
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113F290:  846095E5     LDR r6, [r5, 0x84]
		   0x0113F294:  340095E5     LDR r0, [r5, 0x34]
		   0x0113F298:  000056E3     CMPS r0, r6, 0x0
		   0x0113F29C:  080084E5     STR r0, [r4, 0x8]
		   0x0113F2A0:  0000001A     BNE $+0x8  // if (!=) goto 0x0113F2A8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0113F2A4:  4970F8EB     BL $-0x1e3ed4
		   // ──── Block 4 if (!=) ────────────────────
		   0x0113F2A8:  0600A0E1     MOV r0, r6
		   0x0113F2AC:  0010A0E3     MOV r1, 0x0
		   0x0113F2B0:  CC2AFFEB     BL $-0x354c8
		   0x0113F2B4:  3810D5E5     LDRB r1, [r5, 0x38]
		   0x0113F2B8:  0C0084E5     STR r0, [r4, 0xc]
		   0x0113F2BC:  0500A0E1     MOV r0, r5
		   0x0113F2C0:  1010C4E5     STRB r1, [r4, 0x10]
		   0x0113F2C4:  0010A0E3     MOV r1, 0x0
		   0x0113F2C8:  8228FFEB     BL $-0x35df0
		   0x0113F2CC:  841095E5     LDR r1, [r5, 0x84]
		   0x0113F2D0:  1800C4E5     STRB r0, [r4, 0x18]
		   0x0113F2D4:  000051E3     CMPS r0, r1, 0x0
		   0x0113F2D8:  0200000A     BEQ $+0x10  // if (==) goto 0x0113F2E8
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0113F2DC:  4C0091E5     LDR r0, [r1, 0x4c]
		   0x0113F2E0:  1C0084E5     STR r0, [r4, 0x1c]
		   0x0113F2E4:  060000EA     B $+0x20  // goto 0x0113F304
		   // ──── Block 6 if (==) ────────────────────
		   0x0113F2E8:  3870F8EB     BL $-0x1e3f18
		   0x0113F2EC:  841095E5     LDR r1, [r5, 0x84]
		   0x0113F2F0:  4C00A0E3     MOV r0, 0x4c
		   0x0113F2F4:  000090E5     LDR r0, [r0]
		   0x0113F2F8:  000051E3     CMPS r0, r1, 0x0
		   0x0113F2FC:  1C0084E5     STR r0, [r4, 0x1c]
		   0x0113F300:  2300000A     BEQ $+0x94  // if (==) goto 0x0113F394
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x0113F304:  086091E5     LDR r6, [r1, 0x8]
		   0x0113F308:  840091E5     LDR r0, [r1, 0x84]
		   0x0113F30C:  000056E3     CMPS r0, r6, 0x0
		   0x0113F310:  140084E5     STR r0, [r4, 0x14]
		   0x0113F314:  0200000A     BEQ $+0x10  // if (==) goto 0x0113F324
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x0113F318:  140096E5     LDR r0, [r6, 0x14]
		   0x0113F31C:  200084E5     STR r0, [r4, 0x20]
		   0x0113F320:  050000EA     B $+0x1c  // goto 0x0113F33C
		   // ──── Block 9 if (==) ────────────────────
		   0x0113F324:  2970F8EB     BL $-0x1e3f54
		   0x0113F328:  841095E5     LDR r1, [r5, 0x84]
		   0x0113F32C:  140096E5     LDR r0, [r6, 0x14]
		   0x0113F330:  000051E3     CMPS r0, r1, 0x0
		   0x0113F334:  200084E5     STR r0, [r4, 0x20]
		   0x0113F338:  1500000A     BEQ $+0x5c  // if (==) goto 0x0113F394
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x0113F33C:  086091E5     LDR r6, [r1, 0x8]
		   0x0113F340:  000056E3     CMPS r0, r6, 0x0
		   0x0113F344:  0000001A     BNE $+0x8  // if (!=) goto 0x0113F34C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0113F348:  2070F8EB     BL $-0x1e3f78
		   // ──── Block 12 if (!=) ────────────────────
		   0x0113F34C:  180096E5     LDR r0, [r6, 0x18]
		   0x0113F350:  0510A0E1     MOV r1, r5
		   0x0113F354:  240084E5     STR r0, [r4, 0x24]
		   0x0113F358:  0D00A0E1     MOV r0, sp
		   0x0113F35C:  0020A0E3     MOV r2, 0x0
		   0x0113F360:  9528FFEB     BL $-0x35da4
		   0x0113F364:  03009DE8     LDM sp, {r0, r1}
		   0x0113F368:  F802C4E1     STRD r0, r1, [r4, 0x28]
		   0x0113F36C:  846095E5     LDR r6, [r5, 0x84]
		   0x0113F370:  3200D5E5     LDRB r0, [r5, 0x32]
		   0x0113F374:  000056E3     CMPS r0, r6, 0x0
		   0x0113F378:  3000C4E5     STRB r0, [r4, 0x30]
		   0x0113F37C:  0000001A     BNE $+0x8  // if (!=) goto 0x0113F384
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0113F380:  1270F8EB     BL $-0x1e3fb0
		   // ──── Block 14 if (!=) ────────────────────
		   0x0113F384:  940096E5     LDR r0, [r6, 0x94]
		   0x0113F388:  340084E5     STR r0, [r4, 0x34]
		   0x0113F38C:  08D08DE2     ADD sp, sp, 0x8
		   0x0113F390:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 15 (from 2 paths) ──────────────────
		   0x0113F394:  0D70F8EB     BL $-0x1e3fc4
		*/
	}
}
