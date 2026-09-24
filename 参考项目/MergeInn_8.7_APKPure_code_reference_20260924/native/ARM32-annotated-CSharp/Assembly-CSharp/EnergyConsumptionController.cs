// Dll : Assembly-CSharp.dll
// Namespace: 
public class EnergyConsumptionController // TypeDefIndex: 1286
{

	// Fields
	private const string ENERGY_TOGGLE_CONFIG_KEY = "energy_toggle_config";
	private EnergyConsumptionController.EnergyToggleConfig config; // 0x8
	private bool isInitialized; // 0xC

	// Methods

	// RVA: 0x1109178 Offset: 0x1109178 VA: 0x1109178
	public void Initialize(EventToggleChangedSender eventSender) {
		/* Disassembly (ARM32, 97 instructions, 0x184 bytes):
		   // CFG: 22 blocks, 23 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01109178:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0110917C:  78619FE5     LDR r6, [pc, 0x178]
		   0x01109180:  0040A0E1     MOV r4, r0
		   0x01109184:  0150A0E1     MOV r5, r1
		   0x01109188:  06608FE0     ADD r6, pc, r6
		   0x0110918C:  0000D6E5     LDRB r0, [r6]
		   0x01109190:  000050E3     CMPS r0, r0, 0x0
		   0x01109194:  0D00001A     BNE $+0x3c  // if (!=) goto 0x011091D0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01109198:  60019FE5     LDR r0, [pc, 0x160]
		   0x0110919C:  00009FE7     LDR r0, [pc, r0]
		   0x011091A0:  EE47F9EB     BL $-0x1ae040
		   0x011091A4:  58019FE5     LDR r0, [pc, 0x158]
		   0x011091A8:  00009FE7     LDR r0, [pc, r0]
		   0x011091AC:  EB47F9EB     BL $-0x1ae04c
		   0x011091B0:  50019FE5     LDR r0, [pc, 0x150]
		   0x011091B4:  00009FE7     LDR r0, [pc, r0]
		   0x011091B8:  E847F9EB     BL $-0x1ae058
		   0x011091BC:  48019FE5     LDR r0, [pc, 0x148]
		   0x011091C0:  00009FE7     LDR r0, [pc, r0]
		   0x011091C4:  E547F9EB     BL $-0x1ae064
		   0x011091C8:  0100A0E3     MOV r0, 0x1
		   0x011091CC:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011091D0:  0C00D4E5     LDRB r0, [r4, 0xc]
		   0x011091D4:  000050E3     CMPS r0, r0, 0x0
		   0x011091D8:  F088BD18     POPNE {r4, r5, r6, r7, fp, pc}
		   0x011091DC:  2C019FE5     LDR r0, [pc, 0x12c]
		   0x011091E0:  00009FE7     LDR r0, [pc, r0]
		   0x011091E4:  000090E5     LDR r0, [r0]
		   0x011091E8:  741090E5     LDR r1, [r0, 0x74]
		   0x011091EC:  000051E3     CMPS r0, r1, 0x0
		   0x011091F0:  0000001A     BNE $+0x8  // if (!=) goto 0x011091F8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x011091F4:  2648F9EB     BL $-0x1adf60
		   // ──── Block 5 if (!=) ────────────────────
		   0x011091F8:  14019FE5     LDR r0, [pc, 0x114]
		   0x011091FC:  0010A0E3     MOV r1, 0x0
		   0x01109200:  00009FE7     LDR r0, [pc, r0]
		   0x01109204:  002090E5     LDR r2, [r0]
		   0x01109208:  08019FE5     LDR r0, [pc, 0x108]
		   0x0110920C:  00009FE7     LDR r0, [pc, r0]
		   0x01109210:  000090E5     LDR r0, [r0]
		   0x01109214:  676122EB     BL $+0x8985a4  // CALL → FlexValues.GetObject<object>
		   0x01109218:  000050E3     CMPS r0, r0, 0x0
		   0x0110921C:  080084E5     STR r0, [r4, 0x8]
		   0x01109220:  0900000A     BEQ $+0x2c  // if (==) goto 0x0110924C
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x01109224:  0000A0E3     MOV r0, 0x0
		   0x01109228:  4EC301EB     BL $+0x70d40  // CALL → ProfileStorage.get_numLevels
		   0x0110922C:  087094E5     LDR r7, [r4, 0x8]
		   0x01109230:  0060A0E1     MOV r6, r0
		   0x01109234:  000057E3     CMPS r0, r7, 0x0
		   0x01109238:  0000001A     BNE $+0x8  // if (!=) goto 0x01109240
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110923C:  6348F9EB     BL $-0x1ade6c
		   // ──── Block 8 if (!=) ────────────────────
		   0x01109240:  080097E5     LDR r0, [r7, 0x8]
		   0x01109244:  000056E1     CMPS r0, r6, r0
		   0x01109248:  020000AA     BGE $+0x10  // if (>=) goto 0x01109258
		   // 
		   // ──── Block 9 (from 2 paths) ──────────────────
		   0x0110924C:  0000E0E3     MVN r0, r0, 0x0
		   0x01109250:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x01109254:  C1FEFFEA     B $-0x4f4
		   // ──── Block 10 if (>=) ────────────────────
		   0x01109258:  BC709FE5     LDR r7, [pc, 0xbc]
		   0x0110925C:  07709FE7     LDR r7, [pc, r7]
		   0x01109260:  000097E5     LDR r0, [r7]
		   0x01109264:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01109268:  046090E5     LDR r6, [r0, 0x4]
		   0x0110926C:  000056E3     CMPS r0, r6, 0x0
		   0x01109270:  0000001A     BNE $+0x8  // if (!=) goto 0x01109278
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01109274:  5548F9EB     BL $-0x1adea4
		   // ──── Block 12 if (!=) ────────────────────
		   0x01109278:  0600A0E1     MOV r0, r6
		   0x0110927C:  0010A0E3     MOV r1, 0x0
		   0x01109280:  8C8310EB     BL $+0x420e38  // CALL → FTUEEnergyConsumption.get_completed
		   0x01109284:  000050E3     CMPS r0, r0, 0x0
		   0x01109288:  0A00001A     BNE $+0x30  // if (!=) goto 0x011092B8
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0110928C:  000097E5     LDR r0, [r7]
		   0x01109290:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01109294:  046090E5     LDR r6, [r0, 0x4]
		   0x01109298:  000056E3     CMPS r0, r6, 0x0
		   0x0110929C:  0000001A     BNE $+0x8  // if (!=) goto 0x011092A4
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x011092A0:  4A48F9EB     BL $-0x1aded0
		   // ──── Block 15 if (!=) ────────────────────
		   0x011092A4:  0600A0E1     MOV r0, r6
		   0x011092A8:  0010A0E3     MOV r1, 0x0
		   0x011092AC:  7C8410EB     BL $+0x4211f8  // CALL → FTUEEnergyConsumption.TryActivate
		   0x011092B0:  000050E3     CMPS r0, r0, 0x0
		   0x011092B4:  E4FFFF0A     BEQ $-0x68
		   // ──── Block 16 (from 2 paths) ──────────────────
		   0x011092B8:  4EFEFFEB     BL $-0x6c0
		   0x011092BC:  000050E3     CMPS r0, r0, 0x0
		   0x011092C0:  0200000A     BEQ $+0x10  // if (==) goto 0x011092D0
		   // 
		   // ──── Block 17 else (!=) ────────────────────
		   0x011092C4:  4BFEFFEB     BL $-0x6cc
		   0x011092C8:  010070E3     CMNS r0, r0, 0x1
		   0x011092CC:  0100001A     BNE $+0xc  // if (!=) goto 0x011092D8
		   // 
		   // ──── Block 18 (from 2 paths) ──────────────────
		   0x011092D0:  0100A0E3     MOV r0, 0x1
		   0x011092D4:  A1FEFFEB     BL $-0x574
		   // ──── Block 19 if (!=) ────────────────────
		   0x011092D8:  000055E3     CMPS r0, r5, 0x0
		   0x011092DC:  0000001A     BNE $+0x8  // if (!=) goto 0x011092E4
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x011092E0:  3A48F9EB     BL $-0x1adf10
		   // ──── Block 21 if (!=) ────────────────────
		   0x011092E4:  0500A0E1     MOV r0, r5
		   0x011092E8:  0010A0E3     MOV r1, 0x0
		   0x011092EC:  0B7708EB     BL $+0x21dc34  // CALL → EventToggleChangedSender.PasteVeryFirstLaunchValues
		   0x011092F0:  0100A0E3     MOV r0, 0x1
		   0x011092F4:  0C00C4E5     STRB r0, [r4, 0xc]
		   0x011092F8:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x1109320 Offset: 0x1109320 VA: 0x1109320
	public void SwitchMode() {
		/* Disassembly (ARM32, 77 instructions, 0x134 bytes):
		   // CFG: 13 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01109320:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01109324:  08D04DE2     SUB sp, sp, 0x8
		   0x01109328:  00419FE5     LDR r4, [pc, 0x100]
		   0x0110932C:  04408FE0     ADD r4, pc, r4
		   0x01109330:  0000D4E5     LDRB r0, [r4]
		   0x01109334:  000050E3     CMPS r0, r0, 0x0
		   0x01109338:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01109374
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110933C:  F0009FE5     LDR r0, [pc, 0xf0]
		   0x01109340:  00009FE7     LDR r0, [pc, r0]
		   0x01109344:  8547F9EB     BL $-0x1ae1e4
		   0x01109348:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x0110934C:  00009FE7     LDR r0, [pc, r0]
		   0x01109350:  8247F9EB     BL $-0x1ae1f0
		   0x01109354:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x01109358:  00009FE7     LDR r0, [pc, r0]
		   0x0110935C:  7F47F9EB     BL $-0x1ae1fc
		   0x01109360:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x01109364:  00009FE7     LDR r0, [pc, r0]
		   0x01109368:  7C47F9EB     BL $-0x1ae208
		   0x0110936C:  0100A0E3     MOV r0, 0x1
		   0x01109370:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01109374:  1FFEFFEB     BL $-0x77c
		   0x01109378:  010070E3     CMNS r0, r0, 0x1
		   0x0110937C:  2900000A     BEQ $+0xac  // if (==) goto 0x01109428
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01109380:  020050E3     CMPS r0, r0, 0x2
		   0x01109384:  0300000A     BEQ $+0x14  // if (==) goto 0x01109398
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x01109388:  010050E3     CMPS r0, r0, 0x1
		   0x0110938C:  0500001A     BNE $+0x1c  // if (!=) goto 0x011093A8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01109390:  0200A0E3     MOV r0, 0x2
		   0x01109394:  000000EA     B $+0x8  // goto 0x0110939C
		   // ──── Block 6 if (==) ────────────────────
		   0x01109398:  0100A0E3     MOV r0, 0x1
		   // ──── Block 7 ──────────────────────────────
		   0x0110939C:  08D08DE2     ADD sp, sp, 0x8
		   0x011093A0:  3048BDE8     POP {r4, r5, fp, lr}
		   0x011093A4:  6DFEFFEA     B $-0x644
		   // ──── Block 8 if (!=) ────────────────────
		   0x011093A8:  94109FE5     LDR r1, [pc, 0x94]
		   0x011093AC:  01109FE7     LDR r1, [pc, r1]
		   0x011093B0:  04008DE5     STR r0, [sp, 0x4]
		   0x011093B4:  002091E5     LDR r2, [r1]
		   0x011093B8:  04108DE2     ADD r1, sp, 0x4
		   0x011093BC:  0200A0E1     MOV r0, r2
		   0x011093C0:  B547F9EB     BL $-0x1ae124
		   0x011093C4:  0010A0E1     MOV r1, r0
		   0x011093C8:  78009FE5     LDR r0, [pc, 0x78]
		   0x011093CC:  0020A0E3     MOV r2, 0x0
		   0x011093D0:  00009FE7     LDR r0, [pc, r0]
		   0x011093D4:  000090E5     LDR r0, [r0]
		   0x011093D8:  E7F475EB     BL $+0x1d7d3a4  // CALL → String.Format
		   0x011093DC:  0050A0E1     MOV r5, r0
		   0x011093E0:  64009FE5     LDR r0, [pc, 0x64]
		   0x011093E4:  00009FE7     LDR r0, [pc, r0]
		   0x011093E8:  000090E5     LDR r0, [r0]
		   0x011093EC:  F447F9EB     BL $-0x1ae028
		   0x011093F0:  0510A0E1     MOV r1, r5
		   0x011093F4:  0020A0E3     MOV r2, 0x0
		   0x011093F8:  0040A0E1     MOV r4, r0
		   0x011093FC:  A05310EB     BL $+0x414e88  // CALL → InfoException..ctor
		   0x01109400:  48009FE5     LDR r0, [pc, 0x48]
		   0x01109404:  00009FE7     LDR r0, [pc, r0]
		   0x01109408:  000090E5     LDR r0, [r0]
		   0x0110940C:  741090E5     LDR r1, [r0, 0x74]
		   0x01109410:  000051E3     CMPS r0, r1, 0x0
		   0x01109414:  0000001A     BNE $+0x8  // if (!=) goto 0x0110941C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01109418:  9D47F9EB     BL $-0x1ae184
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110941C:  0400A0E1     MOV r0, r4
		   0x01109420:  0010A0E3     MOV r1, 0x0
		   0x01109424:  58BB3BEB     BL $+0xeeed68  // CALL → sub_1FF818C
		   // ──── Block 11 if (==) ────────────────────
		   0x01109428:  08D08DE2     ADD sp, sp, 0x8
		   0x0110942C:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01109430:  B12A1203     TSTSEQ r2, r2, 0xb1000
		   0x01109434:  48D2F602     RSCSEQ sp, r6, 0x80000004
		   0x01109438:  1005F702     RSCSEQ r0, r7, 0x4000000
		   0x0110943C:  74E3F602     RSCSEQ lr, r6, 0xd0000001
		   0x01109440:  4C05F702     RSCSEQ r0, r7, 0x13000000
		   0x01109444:  B004F702     RSCSEQ r0, r7, 0xb0000000
		   0x01109448:  E004F702     RSCSEQ r0, r7, 0xe0000000
		   0x0110944C:  E8E2F602     RSCSEQ lr, r6, 0x8000000e
		   0x01109450:  84D1F602     RSCSEQ sp, r6, 0x21
		*/
	}

	// RVA: 0x1109454 Offset: 0x1109454 VA: 0x1109454
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01109454:  0010A0E3     MOV r1, 0x0
		   0x01109458:  E32F7EEA     B $+0x1f8bf94  // TAIL CALL → Object..ctor
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
private class EnergyToggleConfig // TypeDefIndex: 1285
{

	// Fields
	[JsonProperty("x2_toggle_lvl_from")]
	public int levelFromX2; // 0x8

	// Methods

	// RVA: 0x110945C Offset: 0x110945C VA: 0x110945C
	public void .ctor() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110945C:  0110A0E3     MOV r1, 0x1
		   0x01109460:  081080E5     STR r1, [r0, 0x8]
		   0x01109464:  0010A0E3     MOV r1, 0x0
		   0x01109468:  DF2F7EEA     B $+0x1f8bf84  // TAIL CALL → Object..ctor
		*/
	}
}
