// Dll : Assembly-CSharp.dll
// Namespace: 
public class ChargeableContainerDropSystem // TypeDefIndex: 1269
{

	// Fields
	private Func<Vector2, Cell, Cell> getNearestFreeCell; // 0x8
	private SelectItemToSpawn selectItemToSpawn; // 0xC
	private Action<ItemData, Cell> onSpawnItem; // 0x10
	private Action reduceContainerCapacity; // 0x14

	// Methods

	// RVA: 0x11032D4 Offset: 0x11032D4 VA: 0x11032D4
	public void .ctor(Func<Vector2, Cell, Cell> getNearestFreeCell, SelectItemToSpawn selectItemToSpawn, Action reduceContainerCapacity, Action<ItemData, Cell> onSpawnItem) {
		/* Disassembly (ARM32, 13 instructions, 0x34 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011032D4:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x011032D8:  0160A0E1     MOV r6, r1
		   0x011032DC:  0010A0E3     MOV r1, 0x0
		   0x011032E0:  0340A0E1     MOV r4, r3
		   0x011032E4:  0250A0E1     MOV r5, r2
		   0x011032E8:  0070A0E1     MOV r7, r0
		   0x011032EC:  3E487EEB     BL $+0x1f92100  // CALL → Object..ctor
		   0x011032F0:  18009DE5     LDR r0, [sp, 0x18]
		   0x011032F4:  086087E5     STR r6, [r7, 0x8]
		   0x011032F8:  0C5087E5     STR r5, [r7, 0xc]
		   0x011032FC:  100087E5     STR r0, [r7, 0x10]
		   0x01103300:  144087E5     STR r4, [r7, 0x14]
		   0x01103304:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x1103308 Offset: 0x1103308 VA: 0x1103308
	public void GiveItem(Cell cell, Vector2 delta, EnergyConsumptionMode energyMode, int activationCost) {
		/* Disassembly (ARM32, 200 instructions, 0x320 bytes):
		   // CFG: 33 blocks, 31 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01103308:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0110330C:  34D04DE2     SUB sp, sp, 0x34
		   0x01103310:  D8429FE5     LDR r4, [pc, 0x2d8]
		   0x01103314:  0090A0E1     MOV sb, r0
		   0x01103318:  0380A0E1     MOV r8, r3
		   0x0110331C:  0270A0E1     MOV r7, r2
		   0x01103320:  04408FE0     ADD r4, pc, r4
		   0x01103324:  0160A0E1     MOV r6, r1
		   0x01103328:  0000D4E5     LDRB r0, [r4]
		   0x0110332C:  000050E3     CMPS r0, r0, 0x0
		   0x01103330:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0110336C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01103334:  B8029FE5     LDR r0, [pc, 0x2b8]
		   0x01103338:  00009FE7     LDR r0, [pc, r0]
		   0x0110333C:  875FF9EB     BL $-0x1a81dc
		   0x01103340:  B0029FE5     LDR r0, [pc, 0x2b0]
		   0x01103344:  00009FE7     LDR r0, [pc, r0]
		   0x01103348:  845FF9EB     BL $-0x1a81e8
		   0x0110334C:  A8029FE5     LDR r0, [pc, 0x2a8]
		   0x01103350:  00009FE7     LDR r0, [pc, r0]
		   0x01103354:  815FF9EB     BL $-0x1a81f4
		   0x01103358:  A0029FE5     LDR r0, [pc, 0x2a0]
		   0x0110335C:  00009FE7     LDR r0, [pc, r0]
		   0x01103360:  7E5FF9EB     BL $-0x1a8200
		   0x01103364:  0100A0E3     MOV r0, 0x1
		   0x01103368:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110336C:  084099E5     LDR r4, [sb, 0x8]
		   0x01103370:  0000A0E3     MOV r0, 0x0
		   0x01103374:  2C008DE5     STR r0, [sp, 0x2c]
		   0x01103378:  000054E3     CMPS r0, r4, 0x0
		   0x0110337C:  28008DE5     STR r0, [sp, 0x28]
		   0x01103380:  30008DE5     STR r0, [sp, 0x30]
		   0x01103384:  0000001A     BNE $+0x8  // if (!=) goto 0x0110338C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01103388:  1060F9EB     BL $-0x1a7fb8
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110338C:  0C5094E5     LDR r5, [r4, 0xc]
		   0x01103390:  0820A0E1     MOV r2, r8
		   0x01103394:  200094E5     LDR r0, [r4, 0x20]
		   0x01103398:  0630A0E1     MOV r3, r6
		   0x0110339C:  141094E5     LDR r1, [r4, 0x14]
		   0x011033A0:  00108DE5     STR r1, [sp]
		   0x011033A4:  0710A0E1     MOV r1, r7
		   0x011033A8:  35FF2FE1     BLX r5  // virtual call: Object.ToString
		   0x011033AC:  0050A0E1     MOV r5, r0
		   0x011033B0:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x011033B4:  00009FE7     LDR r0, [pc, r0]
		   0x011033B8:  000090E5     LDR r0, [r0]
		   0x011033BC:  741090E5     LDR r1, [r0, 0x74]
		   0x011033C0:  000051E3     CMPS r0, r1, 0x0
		   0x011033C4:  0000001A     BNE $+0x8  // if (!=) goto 0x011033CC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011033C8:  B15FF9EB     BL $-0x1a8134
		   // ──── Block 6 if (!=) ────────────────────
		   0x011033CC:  0500A0E1     MOV r0, r5
		   0x011033D0:  0010A0E3     MOV r1, 0x0
		   0x011033D4:  88D33BEB     BL $+0xef4e28  // CALL → sub_1FF81FC
		   0x011033D8:  000050E3     CMPS r0, r0, 0x0
		   0x011033DC:  5000000A     BEQ $+0x148  // if (==) goto 0x01103524
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x011033E0:  0C4099E5     LDR r4, [sb, 0xc]
		   0x011033E4:  58609DE5     LDR r6, [sp, 0x58]
		   0x011033E8:  000054E3     CMPS r0, r4, 0x0
		   0x011033EC:  0000001A     BNE $+0x8  // if (!=) goto 0x011033F4
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x011033F0:  F65FF9EB     BL $-0x1a8020
		   // ──── Block 9 if (!=) ────────────────────
		   0x011033F4:  0C3094E5     LDR r3, [r4, 0xc]
		   0x011033F8:  0610A0E1     MOV r1, r6
		   0x011033FC:  142094E5     LDR r2, [r4, 0x14]
		   0x01103400:  200094E5     LDR r0, [r4, 0x20]
		   0x01103404:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   0x01103408:  0010A0E1     MOV r1, r0
		   0x0110340C:  100099E5     LDR r0, [sb, 0x10]
		   0x01103410:  000050E3     CMPS r0, r0, 0x0
		   0x01103414:  0400000A     BEQ $+0x18  // if (==) goto 0x0110342C
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x01103418:  0C7090E5     LDR r7, [r0, 0xc]
		   0x0110341C:  0520A0E1     MOV r2, r5
		   0x01103420:  143090E5     LDR r3, [r0, 0x14]
		   0x01103424:  200090E5     LDR r0, [r0, 0x20]
		   0x01103428:  37FF2FE1     BLX r7  // virtual call: Object.ToString
		   // ──── Block 11 if (==) ────────────────────
		   0x0110342C:  0010A0E3     MOV r1, 0x0
		   0x01103430:  2B00A0E3     MOV r0, 0x2b
		   0x01103434:  F000CDE1     STRD r0, r1, [sp]
		   0x01103438:  28008DE2     ADD r0, sp, 0x28
		   0x0110343C:  1610A0E3     MOV r1, 0x16
		   0x01103440:  2920A0E3     MOV r2, 0x29
		   0x01103444:  2A30A0E3     MOV r3, 0x2a
		   0x01103448:  D25F08EB     BL $+0x217f50  // CALL → CurrencySinkDataContainer..ctor
		   0x0110344C:  C4019FE5     LDR r0, [pc, 0x1c4]
		   0x01103450:  00009FE7     LDR r0, [pc, r0]
		   0x01103454:  000090E5     LDR r0, [r0]
		   0x01103458:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110345C:  005090E5     LDR r5, [r0]
		   0x01103460:  000055E3     CMPS r0, r5, 0x0
		   0x01103464:  0000001A     BNE $+0x8  // if (!=) goto 0x0110346C
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01103468:  D85FF9EB     BL $-0x1a8098
		   // ──── Block 13 if (!=) ────────────────────
		   0x0110346C:  18908DE5     STR sb, [sp, 0x18]
		   0x01103470:  A4419FE5     LDR r4, [pc, 0x1a4]
		   0x01103474:  1C5095E5     LDR r5, [r5, 0x1c]
		   0x01103478:  04408FE0     ADD r4, pc, r4
		   0x0110347C:  0000D4E5     LDRB r0, [r4]
		   0x01103480:  000050E3     CMPS r0, r0, 0x0
		   0x01103484:  0400001A     BNE $+0x18  // if (!=) goto 0x0110349C
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x01103488:  90019FE5     LDR r0, [pc, 0x190]
		   0x0110348C:  00009FE7     LDR r0, [pc, r0]
		   0x01103490:  325FF9EB     BL $-0x1a8330
		   0x01103494:  0100A0E3     MOV r0, 0x1
		   0x01103498:  0000C4E5     STRB r0, [r4]
		   // ──── Block 15 if (!=) ────────────────────
		   0x0110349C:  80019FE5     LDR r0, [pc, 0x180]
		   0x011034A0:  0010A0E3     MOV r1, 0x0
		   0x011034A4:  00009FE7     LDR r0, [pc, r0]
		   0x011034A8:  000090E5     LDR r0, [r0]
		   0x011034AC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011034B0:  08B090E5     LDR fp, [r0, 0x8]
		   0x011034B4:  1C008DE2     ADD r0, sp, 0x1c
		   0x011034B8:  A28800EB     BL $+0x22290  // CALL → GameplayInterfaceManager.get_currentFieldGroup
		   0x011034BC:  20A08DE2     ADD r10, sp, 0x20
		   0x011034C0:  1C609DE5     LDR r6, [sp, 0x1c]
		   0x011034C4:  30909DE5     LDR sb, [sp, 0x30]
		   0x011034C8:  000055E3     CMPS r0, r5, 0x0
		   0x011034CC:  90059AE8     LDM r10, {r4, r7, r8, r10}
		   0x011034D0:  0000001A     BNE $+0x8  // if (!=) goto 0x011034D8
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x011034D4:  BD5FF9EB     BL $-0x1a8104
		   // ──── Block 17 if (!=) ────────────────────
		   0x011034D8:  5C109DE5     LDR r1, [sp, 0x5c]
		   0x011034DC:  0000A0E3     MOV r0, 0x0
		   0x011034E0:  14008DE5     STR r0, [sp, 0x14]
		   0x011034E4:  0500A0E1     MOV r0, r5
		   0x011034E8:  0B20A0E1     MOV r2, fp
		   0x011034EC:  0630A0E1     MOV r3, r6
		   0x011034F0:  90058DE8     STM sp, {r4, r7, r8, r10}
		   0x011034F4:  10908DE5     STR sb, [sp, 0x10]
		   0x011034F8:  4DC00CEB     BL $+0x33013c  // CALL → EnergySystem.SpendEnergy
		   0x011034FC:  18009DE5     LDR r0, [sp, 0x18]
		   0x01103500:  144090E5     LDR r4, [r0, 0x14]
		   0x01103504:  000054E3     CMPS r0, r4, 0x0
		   0x01103508:  0000001A     BNE $+0x8  // if (!=) goto 0x01103510
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x0110350C:  AF5FF9EB     BL $-0x1a813c
		   // ──── Block 19 if (!=) ────────────────────
		   0x01103510:  0C2094E5     LDR r2, [r4, 0xc]
		   0x01103514:  141094E5     LDR r1, [r4, 0x14]
		   0x01103518:  200094E5     LDR r0, [r4, 0x20]
		   0x0110351C:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01103520:  300000EA     B $+0xc8  // goto 0x011035E8
		   // ──── Block 20 if (==) ────────────────────
		   0x01103524:  DC409FE5     LDR r4, [pc, 0xdc]
		   0x01103528:  04409FE7     LDR r4, [pc, r4]
		   0x0110352C:  000094E5     LDR r0, [r4]
		   0x01103530:  741090E5     LDR r1, [r0, 0x74]
		   0x01103534:  000051E3     CMPS r0, r1, 0x0
		   0x01103538:  0000001A     BNE $+0x8  // if (!=) goto 0x01103540
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x0110353C:  545FF9EB     BL $-0x1a82a8
		   // ──── Block 22 if (!=) ────────────────────
		   0x01103540:  C4509FE5     LDR r5, [pc, 0xc4]
		   0x01103544:  05508FE0     ADD r5, pc, r5
		   0x01103548:  0000D5E5     LDRB r0, [r5]
		   0x0110354C:  000050E3     CMPS r0, r0, 0x0
		   0x01103550:  0400001A     BNE $+0x18  // if (!=) goto 0x01103568
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x01103554:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x01103558:  00009FE7     LDR r0, [pc, r0]
		   0x0110355C:  FF5EF9EB     BL $-0x1a83fc
		   0x01103560:  0100A0E3     MOV r0, 0x1
		   0x01103564:  0000C5E5     STRB r0, [r5]
		   // ──── Block 24 if (!=) ────────────────────
		   0x01103568:  000094E5     LDR r0, [r4]
		   0x0110356C:  741090E5     LDR r1, [r0, 0x74]
		   0x01103570:  000051E3     CMPS r0, r1, 0x0
		   0x01103574:  0100001A     BNE $+0xc  // if (!=) goto 0x01103580
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x01103578:  455FF9EB     BL $-0x1a82e4
		   0x0110357C:  000094E5     LDR r0, [r4]
		   // ──── Block 26 if (!=) ────────────────────
		   0x01103580:  8C109FE5     LDR r1, [pc, 0x8c]
		   0x01103584:  01109FE7     LDR r1, [pc, r1]
		   0x01103588:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110358C:  001091E5     LDR r1, [r1]
		   0x01103590:  044090E5     LDR r4, [r0, 0x4]
		   0x01103594:  742091E5     LDR r2, [r1, 0x74]
		   0x01103598:  000052E3     CMPS r0, r2, 0x0
		   0x0110359C:  0100001A     BNE $+0xc  // if (!=) goto 0x011035A8
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x011035A0:  0100A0E1     MOV r0, r1
		   0x011035A4:  3A5FF9EB     BL $-0x1a8310
		   // ──── Block 28 if (!=) ────────────────────
		   0x011035A8:  1C008DE2     ADD r0, sp, 0x1c
		   0x011035AC:  0010A0E3     MOV r1, 0x0
		   0x011035B0:  0080A0E3     MOV r8, 0x0
		   0x011035B4:  6A77FDEB     BL $-0xa2250
		   0x011035B8:  1C708DE2     ADD r7, sp, 0x1c
		   0x011035BC:  000054E3     CMPS r0, r4, 0x0
		   0x011035C0:  E00097E8     LDM r7, {r5, r6, r7}
		   0x011035C4:  0000001A     BNE $+0x8  // if (!=) goto 0x011035CC
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x011035C8:  805FF9EB     BL $-0x1a81f8
		   // ──── Block 30 if (!=) ────────────────────
		   0x011035CC:  0400A0E1     MOV r0, r4
		   0x011035D0:  0510A0E1     MOV r1, r5
		   0x011035D4:  0620A0E1     MOV r2, r6
		   0x011035D8:  0730A0E1     MOV r3, r7
		   0x011035DC:  00808DE5     STR r8, [sp]
		   0x011035E0:  04808DE5     STR r8, [sp, 0x4]
		   0x011035E4:  FDAC09EB     BL $+0x26b3fc  // CALL → UIPoppingAlert.ShowMessage
		   // ──── Block 31 ──────────────────────────────
		   0x011035E8:  34D08DE2     ADD sp, sp, 0x34
		   0x011035EC:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x011035F0:  838A1203     TSTSEQ r8, r2, 0x83000
		   0x011035F4:  C448F702     RSCSEQ r4, r7, 0xc40000
		   0x011035F8:  703EF702     RSCSEQ r3, r7, 0x700
		   0x011035FC:  E831F702     RSCSEQ r3, r7, 0x3a
		   0x01103600:  0460F702     RSCSEQ r6, r7, 0x4
		   0x01103604:  8431F702     RSCSEQ r3, r7, 0x21
		   0x01103608:  385EF702     RSCSEQ r5, r7, 0x380
		   0x0110360C:  9E871203     TSTSEQ r8, r2, 0x2780000
		   0x01103610:  085EF702     RSCSEQ r5, r7, 0x80
		   0x01103614:  303CF702     RSCSEQ r3, r7, 0x3000
		   0x01103618:  AC47F702     RSCSEQ r4, r7, 0x2b00000
		   0x0110361C:  69881203     TSTSEQ r8, r2, 0x690000
		   0x01103620:  C45EF702     RSCSEQ r5, r7, 0xc40
		   0x01103624:  AC5EF702     RSCSEQ r5, r7, 0xac0
		*/
	}

	// RVA: 0x1103628 Offset: 0x1103628 VA: 0x1103628
	public void GiveEnergy(int value, string itemCode, Transform transform) {
		/* Disassembly (ARM32, 73 instructions, 0x124 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01103628:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0110362C:  20D04DE2     SUB sp, sp, 0x20
		   0x01103630:  00419FE5     LDR r4, [pc, 0x100]
		   0x01103634:  0090A0E1     MOV sb, r0
		   0x01103638:  0380A0E1     MOV r8, r3
		   0x0110363C:  0270A0E1     MOV r7, r2
		   0x01103640:  04408FE0     ADD r4, pc, r4
		   0x01103644:  0150A0E1     MOV r5, r1
		   0x01103648:  0000D4E5     LDRB r0, [r4]
		   0x0110364C:  000050E3     CMPS r0, r0, 0x0
		   0x01103650:  0700001A     BNE $+0x24  // if (!=) goto 0x01103674
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01103654:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x01103658:  00009FE7     LDR r0, [pc, r0]
		   0x0110365C:  BF5EF9EB     BL $-0x1a84fc
		   0x01103660:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x01103664:  00009FE7     LDR r0, [pc, r0]
		   0x01103668:  BC5EF9EB     BL $-0x1a8508
		   0x0110366C:  0100A0E3     MOV r0, 0x1
		   0x01103670:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01103674:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x01103678:  00009FE7     LDR r0, [pc, r0]
		   0x0110367C:  000090E5     LDR r0, [r0]
		   0x01103680:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01103684:  004090E5     LDR r4, [r0]
		   0x01103688:  000054E3     CMPS r0, r4, 0x0
		   0x0110368C:  0000001A     BNE $+0x8  // if (!=) goto 0x01103694
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01103690:  4E5FF9EB     BL $-0x1a82c0
		   // ──── Block 4 if (!=) ────────────────────
		   0x01103694:  1C4094E5     LDR r4, [r4, 0x1c]
		   0x01103698:  2B0000EB     BL $+0xb4  // CALL → ChargeableContainerDropSystem.GetWSMilestone
		   0x0110369C:  0060A0E1     MOV r6, r0
		   0x011036A0:  000054E3     CMPS r0, r4, 0x0
		   0x011036A4:  0000001A     BNE $+0x8  // if (!=) goto 0x011036AC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011036A8:  485FF9EB     BL $-0x1a82d8
		   // ──── Block 6 if (!=) ────────────────────
		   0x011036AC:  94009FE5     LDR r0, [pc, 0x94]
		   0x011036B0:  0010A0E3     MOV r1, 0x0
		   0x011036B4:  2020A0E3     MOV r2, 0x20
		   0x011036B8:  0130A0E3     MOV r3, 0x1
		   0x011036BC:  00009FE7     LDR r0, [pc, r0]
		   0x011036C0:  000090E5     LDR r0, [r0]
		   0x011036C4:  14008DE5     STR r0, [sp, 0x14]
		   0x011036C8:  0400A0E1     MOV r0, r4
		   0x011036CC:  04108DE5     STR r1, [sp, 0x4]
		   0x011036D0:  08108DE5     STR r1, [sp, 0x8]
		   0x011036D4:  0C108DE5     STR r1, [sp, 0xc]
		   0x011036D8:  10108DE5     STR r1, [sp, 0x10]
		   0x011036DC:  1C108DE5     STR r1, [sp, 0x1c]
		   0x011036E0:  0510A0E1     MOV r1, r5
		   0x011036E4:  00708DE5     STR r7, [sp]
		   0x011036E8:  18608DE5     STR r6, [sp, 0x18]
		   0x011036EC:  90BD0CEB     BL $+0x32f648  // CALL → EnergySystem.AddEnergy
		   0x011036F0:  0000A0E3     MOV r0, 0x0
		   0x011036F4:  BC1CFFEB     BL $-0x38d08
		   0x011036F8:  0000A0E3     MOV r0, 0x0
		   0x011036FC:  0010A0E3     MOV r1, 0x0
		   0x01103700:  2BEDFDEB     BL $-0x84b4c
		   0x01103704:  144099E5     LDR r4, [sb, 0x14]
		   0x01103708:  000054E3     CMPS r0, r4, 0x0
		   0x0110370C:  0000001A     BNE $+0x8  // if (!=) goto 0x01103714
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01103710:  2E5FF9EB     BL $-0x1a8340
		   // ──── Block 8 if (!=) ────────────────────
		   0x01103714:  0C2094E5     LDR r2, [r4, 0xc]
		   0x01103718:  141094E5     LDR r1, [r4, 0x14]
		   0x0110371C:  200094E5     LDR r0, [r4, 0x20]
		   0x01103720:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01103724:  0510A0E1     MOV r1, r5
		   0x01103728:  0820A0E1     MOV r2, r8
		   0x0110372C:  20D08DE2     ADD sp, sp, 0x20
		   0x01103730:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01103734:  300000EA     B $+0xc8  // TAIL CALL → ChargeableContainerDropSystem.CreateFlyingCurrency
		   0x01103738:  64871203     TSTSEQ r8, r2, 0x1900000
		   0x0110373C:  A445F702     RSCSEQ r4, r7, 0x29000000
		   0x01103740:  DC33F702     RSCSEQ r3, r7, 0x70000003
		   0x01103744:  8445F702     RSCSEQ r4, r7, 0x21000000
		   0x01103748:  8433F702     RSCSEQ r3, r7, 0x10000002
		*/
	}

	// RVA: 0x11037FC Offset: 0x11037FC VA: 0x11037FC
	private void CreateFlyingCurrency(int value, Transform transform) {
		/* Disassembly (ARM32, 147 instructions, 0x24C bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011037FC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01103800:  28D04DE2     SUB sp, sp, 0x28
		   0x01103804:  FC419FE5     LDR r4, [pc, 0x1fc]
		   0x01103808:  0290A0E1     MOV sb, r2
		   0x0110380C:  0180A0E1     MOV r8, r1
		   0x01103810:  04408FE0     ADD r4, pc, r4
		   0x01103814:  0000D4E5     LDRB r0, [r4]
		   0x01103818:  000050E3     CMPS r0, r0, 0x0
		   0x0110381C:  1600001A     BNE $+0x60  // if (!=) goto 0x0110387C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01103820:  E4019FE5     LDR r0, [pc, 0x1e4]
		   0x01103824:  00009FE7     LDR r0, [pc, r0]
		   0x01103828:  4C5EF9EB     BL $-0x1a86c8
		   0x0110382C:  DC019FE5     LDR r0, [pc, 0x1dc]
		   0x01103830:  00009FE7     LDR r0, [pc, r0]
		   0x01103834:  495EF9EB     BL $-0x1a86d4
		   0x01103838:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x0110383C:  00009FE7     LDR r0, [pc, r0]
		   0x01103840:  465EF9EB     BL $-0x1a86e0
		   0x01103844:  CC019FE5     LDR r0, [pc, 0x1cc]
		   0x01103848:  00009FE7     LDR r0, [pc, r0]
		   0x0110384C:  435EF9EB     BL $-0x1a86ec
		   0x01103850:  C4019FE5     LDR r0, [pc, 0x1c4]
		   0x01103854:  00009FE7     LDR r0, [pc, r0]
		   0x01103858:  405EF9EB     BL $-0x1a86f8
		   0x0110385C:  BC019FE5     LDR r0, [pc, 0x1bc]
		   0x01103860:  00009FE7     LDR r0, [pc, r0]
		   0x01103864:  3D5EF9EB     BL $-0x1a8704
		   0x01103868:  B4019FE5     LDR r0, [pc, 0x1b4]
		   0x0110386C:  00009FE7     LDR r0, [pc, r0]
		   0x01103870:  3A5EF9EB     BL $-0x1a8710
		   0x01103874:  0100A0E3     MOV r0, 0x1
		   0x01103878:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110387C:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x01103880:  00009FE7     LDR r0, [pc, r0]
		   0x01103884:  000090E5     LDR r0, [r0]
		   0x01103888:  CD5EF9EB     BL $-0x1a84c4
		   0x0110388C:  0010A0E3     MOV r1, 0x0
		   0x01103890:  0060A0E1     MOV r6, r0
		   0x01103894:  D4467EEB     BL $+0x1f91b58  // CALL → Object..ctor
		   0x01103898:  8C519FE5     LDR r5, [pc, 0x18c]
		   0x0110389C:  05509FE7     LDR r5, [pc, r5]
		   0x011038A0:  000095E5     LDR r0, [r5]
		   0x011038A4:  741090E5     LDR r1, [r0, 0x74]
		   0x011038A8:  000051E3     CMPS r0, r1, 0x0
		   0x011038AC:  0100001A     BNE $+0xc  // if (!=) goto 0x011038B8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011038B0:  775EF9EB     BL $-0x1a861c
		   0x011038B4:  000095E5     LDR r0, [r5]
		   // ──── Block 4 if (!=) ────────────────────
		   0x011038B8:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x011038BC:  044091E5     LDR r4, [r1, 0x4]
		   0x011038C0:  000054E3     CMPS r0, r4, 0x0
		   0x011038C4:  1500001A     BNE $+0x5c  // if (!=) goto 0x01103920
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011038C8:  742090E5     LDR r2, [r0, 0x74]
		   0x011038CC:  000052E3     CMPS r0, r2, 0x0
		   0x011038D0:  0200001A     BNE $+0x10  // if (!=) goto 0x011038E0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x011038D4:  6E5EF9EB     BL $-0x1a8640
		   0x011038D8:  000095E5     LDR r0, [r5]
		   0x011038DC:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 7 if (!=) ────────────────────
		   0x011038E0:  48019FE5     LDR r0, [pc, 0x148]
		   0x011038E4:  00009FE7     LDR r0, [pc, r0]
		   0x011038E8:  007091E5     LDR r7, [r1]
		   0x011038EC:  000090E5     LDR r0, [r0]
		   0x011038F0:  B35EF9EB     BL $-0x1a852c
		   0x011038F4:  0040A0E1     MOV r4, r0
		   0x011038F8:  34019FE5     LDR r0, [pc, 0x134]
		   0x011038FC:  0710A0E1     MOV r1, r7
		   0x01103900:  0030A0E3     MOV r3, 0x0
		   0x01103904:  00009FE7     LDR r0, [pc, r0]
		   0x01103908:  002090E5     LDR r2, [r0]
		   0x0110390C:  0400A0E1     MOV r0, r4
		   0x01103910:  8BA67AEB     BL $+0x1ea9a34  // CALL → Action..ctor
		   0x01103914:  000095E5     LDR r0, [r5]
		   0x01103918:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110391C:  044080E5     STR r4, [r0, 0x4]
		   // ──── Block 8 if (!=) ────────────────────
		   0x01103920:  10019FE5     LDR r0, [pc, 0x110]
		   0x01103924:  00009FE7     LDR r0, [pc, r0]
		   0x01103928:  000090E5     LDR r0, [r0]
		   0x0110392C:  A45EF9EB     BL $-0x1a8568
		   0x01103930:  0410A0E1     MOV r1, r4
		   0x01103934:  0020A0E3     MOV r2, 0x0
		   0x01103938:  0070A0E1     MOV r7, r0
		   0x0110393C:  12F20FEB     BL $+0x3fc850  // CALL → OnceInvokedActionCommand..ctor
		   0x01103940:  000056E3     CMPS r0, r6, 0x0
		   0x01103944:  0000001A     BNE $+0x8  // if (!=) goto 0x0110394C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01103948:  A05EF9EB     BL $-0x1a8578
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110394C:  000059E3     CMPS r0, sb, 0x0
		   0x01103950:  087086E5     STR r7, [r6, 0x8]
		   0x01103954:  0000001A     BNE $+0x8  // if (!=) goto 0x0110395C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01103958:  9C5EF9EB     BL $-0x1a8588
		   // ──── Block 12 if (!=) ────────────────────
		   0x0110395C:  1C008DE2     ADD r0, sp, 0x1c
		   0x01103960:  0910A0E1     MOV r1, sb
		   0x01103964:  0020A0E3     MOV r2, 0x0
		   0x01103968:  00A0A0E3     MOV r10, 0x0
		   0x0110396C:  0CD23BEB     BL $+0xef4838  // CALL → sub_1FF81A4
		   0x01103970:  1C908DE2     ADD sb, sp, 0x1c
		   0x01103974:  A00299E8     LDM sb, {r5, r7, sb}
		   0x01103978:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x0110397C:  00009FE7     LDR r0, [pc, r0]
		   0x01103980:  000090E5     LDR r0, [r0]
		   0x01103984:  8E5EF9EB     BL $-0x1a85c0
		   0x01103988:  0040A0E1     MOV r4, r0
		   0x0110398C:  AC009FE5     LDR r0, [pc, 0xac]
		   0x01103990:  0610A0E1     MOV r1, r6
		   0x01103994:  0030A0E3     MOV r3, 0x0
		   0x01103998:  00009FE7     LDR r0, [pc, r0]
		   0x0110399C:  002090E5     LDR r2, [r0]
		   0x011039A0:  0400A0E1     MOV r0, r4
		   0x011039A4:  66A67AEB     BL $+0x1ea99a0  // CALL → Action..ctor
		   0x011039A8:  94009FE5     LDR r0, [pc, 0x94]
		   0x011039AC:  00009FE7     LDR r0, [pc, r0]
		   0x011039B0:  000090E5     LDR r0, [r0]
		   0x011039B4:  741090E5     LDR r1, [r0, 0x74]
		   0x011039B8:  000051E3     CMPS r0, r1, 0x0
		   0x011039BC:  0000001A     BNE $+0x8  // if (!=) goto 0x011039C4
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x011039C0:  335EF9EB     BL $-0x1a872c
		   // ──── Block 14 if (!=) ────────────────────
		   0x011039C4:  CD1C0CE3     MOV r1, 0xcccd
		   0x011039C8:  0A0058E3     CMPS r0, r8, 0xa
		   0x011039CC:  2000A0E3     MOV r0, 0x20
		   0x011039D0:  CC1D43E3     MOVT r1, 0x3dcc
		   0x011039D4:  0A80A0A3     MOVGE r8, 0xa
		   0x011039D8:  02018DE9     STMIA sp, {r1, r8}
		   0x011039DC:  0510A0E1     MOV r1, r5
		   0x011039E0:  10008DE5     STR r0, [sp, 0x10]
		   0x011039E4:  0100A0E3     MOV r0, 0x1
		   0x011039E8:  0720A0E1     MOV r2, r7
		   0x011039EC:  0930A0E1     MOV r3, sb
		   0x011039F0:  00A08DE5     STR r10, [sp]
		   0x011039F4:  0C408DE5     STR r4, [sp, 0xc]
		   0x011039F8:  14A08DE5     STR r10, [sp, 0x14]
		   0x011039FC:  1AFD06EB     BL $+0x1bf470  // CALL → FlyingCurrency.CreateAndFlyCanvas
		   0x01103A00:  28D08DE2     ADD sp, sp, 0x28
		   0x01103A04:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01103A08:  95851203     TSTSEQ r8, r2, 0x25400000
		   0x01103A0C:  A030F702     RSCSEQ r3, r7, 0xa0
		   0x01103A10:  D043F702     RSCSEQ r4, r7, 0x40000003
		   0x01103A14:  905FF702     RSCSEQ r5, r7, 0x240
		   0x01103A18:  885FF702     RSCSEQ r5, r7, 0x220
		   0x01103A1C:  805FF702     RSCSEQ r5, r7, 0x200
		   0x01103A20:  785FF702     RSCSEQ r5, r7, 0x1e0
		   0x01103A24:  705FF702     RSCSEQ r5, r7, 0x1c0
		   0x01103A28:  585FF702     RSCSEQ r5, r7, 0x160
		   0x01103A2C:  405FF702     RSCSEQ r5, r7, 0x100
		   0x01103A30:  E02FF702     RSCSEQ r2, r7, 0x380
		   0x01103A34:  CC5EF702     RSCSEQ r5, r7, 0xcc0
		   0x01103A38:  A85EF702     RSCSEQ r5, r7, 0xa80
		   0x01103A3C:  482FF702     RSCSEQ r2, r7, 0x120
		   0x01103A40:  3C5EF702     RSCSEQ r5, r7, 0x3c0
		   0x01103A44:  5442F702     RSCSEQ r4, r7, 0x40000005
		*/
	}

	// RVA: 0x110374C Offset: 0x110374C VA: 0x110374C
	private int GetWSMilestone() {
		/* Disassembly (ARM32, 21 instructions, 0x54 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110374C:  10402DE9     PUSH {r4, lr}
		   0x01103750:  20D04DE2     SUB sp, sp, 0x20
		   0x01103754:  94409FE5     LDR r4, [pc, 0x94]
		   0x01103758:  04408FE0     ADD r4, pc, r4
		   0x0110375C:  0000D4E5     LDRB r0, [r4]
		   0x01103760:  000050E3     CMPS r0, r0, 0x0
		   0x01103764:  0400001A     BNE $+0x18  // if (!=) goto 0x0110377C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01103768:  84009FE5     LDR r0, [pc, 0x84]
		   0x0110376C:  00009FE7     LDR r0, [pc, r0]
		   0x01103770:  7A5EF9EB     BL $-0x1a8610
		   0x01103774:  0100A0E3     MOV r0, 0x1
		   0x01103778:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110377C:  0000A0E3     MOV r0, 0x0
		   0x01103780:  0010A0E3     MOV r1, 0x0
		   0x01103784:  14008DE5     STR r0, [sp, 0x14]
		   0x01103788:  10008DE5     STR r0, [sp, 0x10]
		   0x0110378C:  18008DE5     STR r0, [sp, 0x18]
		   0x01103790:  0D00A0E1     MOV r0, sp
		   0x01103794:  EB8700EB     BL $+0x21fb4  // CALL → GameplayInterfaceManager.get_currentFieldGroup
		   0x01103798:  58009FE5     LDR r0, [pc, 0x58]
		   0x0110379C:  00009FE7     LDR r0, [pc, r0]
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class <>c // TypeDefIndex: 1267
{

	// Fields
	public static readonly ChargeableContainerDropSystem.<>c <>9; // 0x0
	public static Action <>9__7_0; // 0x4

	// Methods

	// RVA: 0x1103A50 Offset: 0x1103A50 VA: 0x1103A50
	private static void .cctor() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01103A50:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01103A54:  4C409FE5     LDR r4, [pc, 0x4c]
		   0x01103A58:  04408FE0     ADD r4, pc, r4
		   0x01103A5C:  0000D4E5     LDRB r0, [r4]
		   0x01103A60:  000050E3     CMPS r0, r0, 0x0
		   0x01103A64:  0400001A     BNE $+0x18  // if (!=) goto 0x01103A7C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01103A68:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x01103A6C:  00009FE7     LDR r0, [pc, r0]
		   0x01103A70:  BA5DF9EB     BL $-0x1a8910
		   0x01103A74:  0100A0E3     MOV r0, 0x1
		   0x01103A78:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01103A7C:  2C509FE5     LDR r5, [pc, 0x2c]
		   0x01103A80:  05509FE7     LDR r5, [pc, r5]
		   0x01103A84:  000095E5     LDR r0, [r5]
		   0x01103A88:  4D5EF9EB     BL $-0x1a86c4
		   0x01103A8C:  0010A0E3     MOV r1, 0x0
		   0x01103A90:  0040A0E1     MOV r4, r0
		   0x01103A94:  54467EEB     BL $+0x1f91958  // CALL → Object..ctor
		   0x01103A98:  000095E5     LDR r0, [r5]
		   0x01103A9C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01103AA0:  004080E5     STR r4, [r0]
		   0x01103AA4:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01103AA8:  4F831203     TSTSEQ r8, r2, 0x3c000001
		   0x01103AAC:  705DF702     RSCSEQ r5, r7, 0x1c00
		   0x01103AB0:  5C5DF702     RSCSEQ r5, r7, 0x1700
		*/
	}

	// RVA: 0x1103AB4 Offset: 0x1103AB4 VA: 0x1103AB4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01103AB4:  0010A0E3     MOV r1, 0x0
		   0x01103AB8:  4B467EEA     B $+0x1f91934  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1103ABC Offset: 0x1103ABC VA: 0x1103ABC
	internal void <CreateFlyingCurrency>b__7_0() {
		/* Disassembly (ARM32, 30 instructions, 0x78 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01103ABC:  10402DE9     PUSH {r4, lr}
		   0x01103AC0:  60409FE5     LDR r4, [pc, 0x60]
		   0x01103AC4:  04408FE0     ADD r4, pc, r4
		   0x01103AC8:  0000D4E5     LDRB r0, [r4]
		   0x01103ACC:  000050E3     CMPS r0, r0, 0x0
		   0x01103AD0:  0400001A     BNE $+0x18  // if (!=) goto 0x01103AE8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01103AD4:  50009FE5     LDR r0, [pc, 0x50]
		   0x01103AD8:  00009FE7     LDR r0, [pc, r0]
		   0x01103ADC:  9F5DF9EB     BL $-0x1a897c
		   0x01103AE0:  0100A0E3     MOV r0, 0x1
		   0x01103AE4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01103AE8:  40009FE5     LDR r0, [pc, 0x40]
		   0x01103AEC:  00009FE7     LDR r0, [pc, r0]
		   0x01103AF0:  000090E5     LDR r0, [r0]
		   0x01103AF4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01103AF8:  004090E5     LDR r4, [r0]
		   0x01103AFC:  000054E3     CMPS r0, r4, 0x0
		   0x01103B00:  0000001A     BNE $+0x8  // if (!=) goto 0x01103B08
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01103B04:  315EF9EB     BL $-0x1a8734
		   // ──── Block 4 if (!=) ────────────────────
		   0x01103B08:  1C4094E5     LDR r4, [r4, 0x1c]
		   0x01103B0C:  000054E3     CMPS r0, r4, 0x0
		   0x01103B10:  0000001A     BNE $+0x8  // if (!=) goto 0x01103B18
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01103B14:  2D5EF9EB     BL $-0x1a8744
		   // ──── Block 6 if (!=) ────────────────────
		   0x01103B18:  0400A0E1     MOV r0, r4
		   0x01103B1C:  0010A0E3     MOV r1, 0x0
		   0x01103B20:  1040BDE8     POP {r4, lr}
		   0x01103B24:  42BC0CEA     B $+0x32f110  // TAIL CALL → EnergySystem.UpdateAfterSilentAddition
		   0x01103B28:  E4821203     TSTSEQ r8, r2, 0x4000000e
		   0x01103B2C:  2441F702     RSCSEQ r4, r7, 0x9
		   0x01103B30:  1041F702     RSCSEQ r4, r7, 0x4
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass7_0 // TypeDefIndex: 1268
{

	// Fields
	public OnceInvokedActionCommand endEventHandler; // 0x8

	// Methods

	// RVA: 0x1103A48 Offset: 0x1103A48 VA: 0x1103A48
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01103A48:  0010A0E3     MOV r1, 0x0
		   0x01103A4C:  66467EEA     B $+0x1f919a0  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1103B34 Offset: 0x1103B34 VA: 0x1103B34
	internal void <CreateFlyingCurrency>b__1() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01103B34:  10402DE9     PUSH {r4, lr}
		   0x01103B38:  084090E5     LDR r4, [r0, 0x8]
		   0x01103B3C:  000054E3     CMPS r0, r4, 0x0
		   0x01103B40:  0000001A     BNE $+0x8  // if (!=) goto 0x01103B48
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01103B44:  215EF9EB     BL $-0x1a8774
		   // ──── Block 2 if (!=) ────────────────────
		   0x01103B48:  0400A0E1     MOV r0, r4
		   0x01103B4C:  0010A0E3     MOV r1, 0x0
		   0x01103B50:  1040BDE8     POP {r4, lr}
		   0x01103B54:  93F10FEA     B $+0x3fc654  // TAIL CALL → OnceInvokedActionCommand.Execute
		*/
	}
}
