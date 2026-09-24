// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public struct Timer // TypeDefIndex: 1228
{

	// Fields
	public double secondsPassed; // 0x0
	public string timeInvariant; // 0x8

	// Properties
	public DateTime date { get; set; }
	public double secondsPassedNow { get; }

	// Methods

	// RVA: 0x10F8428 Offset: 0x10F8428 VA: 0x10F8428
	public void .ctor(DateTime dateTime) {
		/* Disassembly (ARM32, 50 instructions, 0xC8 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F8428:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010F842C:  08D04DE2     SUB sp, sp, 0x8
		   0x010F8430:  A4509FE5     LDR r5, [pc, 0xa4]
		   0x010F8434:  0040A0E1     MOV r4, r0
		   0x010F8438:  04308DE5     STR r3, [sp, 0x4]
		   0x010F843C:  05508FE0     ADD r5, pc, r5
		   0x010F8440:  00208DE5     STR r2, [sp]
		   0x010F8444:  0000D5E5     LDRB r0, [r5]
		   0x010F8448:  000050E3     CMPS r0, r0, 0x0
		   0x010F844C:  0700001A     BNE $+0x24  // if (!=) goto 0x010F8470
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F8450:  88009FE5     LDR r0, [pc, 0x88]
		   0x010F8454:  00009FE7     LDR r0, [pc, r0]
		   0x010F8458:  408BF9EB     BL $-0x19d2f8
		   0x010F845C:  80009FE5     LDR r0, [pc, 0x80]
		   0x010F8460:  00009FE7     LDR r0, [pc, r0]
		   0x010F8464:  3D8BF9EB     BL $-0x19d304
		   0x010F8468:  0100A0E3     MOV r0, 0x1
		   0x010F846C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F8470:  70009FE5     LDR r0, [pc, 0x70]
		   0x010F8474:  00009FE7     LDR r0, [pc, r0]
		   0x010F8478:  000090E5     LDR r0, [r0]
		   0x010F847C:  741090E5     LDR r1, [r0, 0x74]
		   0x010F8480:  000051E3     CMPS r0, r1, 0x0
		   0x010F8484:  0000001A     BNE $+0x8  // if (!=) goto 0x010F848C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F8488:  818BF9EB     BL $-0x19d1f4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F848C:  0000A0E3     MOV r0, 0x0
		   0x010F8490:  0060A0E3     MOV r6, 0x0
		   0x010F8494:  05217BEB     BL $+0x1ec841c  // CALL → CultureInfo.get_InvariantCulture
		   0x010F8498:  0050A0E1     MOV r5, r0
		   0x010F849C:  48009FE5     LDR r0, [pc, 0x48]
		   0x010F84A0:  00009FE7     LDR r0, [pc, r0]
		   0x010F84A4:  000090E5     LDR r0, [r0]
		   0x010F84A8:  741090E5     LDR r1, [r0, 0x74]
		   0x010F84AC:  000051E3     CMPS r0, r1, 0x0
		   0x010F84B0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F84B8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F84B4:  768BF9EB     BL $-0x19d220
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F84B8:  0D00A0E1     MOV r0, sp
		   0x010F84BC:  0510A0E1     MOV r1, r5
		   0x010F84C0:  0020A0E3     MOV r2, 0x0
		   0x010F84C4:  EEAB7CEB     BL $+0x1f2afc0  // CALL → DateTime.ToString
		   0x010F84C8:  006084E5     STR r6, [r4]
		   0x010F84CC:  046084E5     STR r6, [r4, 0x4]
		   0x010F84D0:  080084E5     STR r0, [r4, 0x8]
		   0x010F84D4:  08D08DE2     ADD sp, sp, 0x8
		   0x010F84D8:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010F84DC:  02391303     TSTSEQ r3, r3, 0x8000
		   0x010F84E0:  58EBF702     RSCSEQ lr, r7, 0x16000
		   0x010F84E4:  0CEDF702     RSCSEQ lr, r7, 0x300
		   0x010F84E8:  38EBF702     RSCSEQ lr, r7, 0xe000
		   0x010F84EC:  CCECF702     RSCSEQ lr, r7, 0xcc00
		*/
	}

	// RVA: 0x10F5224 Offset: 0x10F5224 VA: 0x10F5224
	public DateTime get_date() {
		/* Disassembly (ARM32, 49 instructions, 0xC4 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F5224:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010F5228:  08D04DE2     SUB sp, sp, 0x8
		   0x010F522C:  A0609FE5     LDR r6, [pc, 0xa0]
		   0x010F5230:  0040A0E1     MOV r4, r0
		   0x010F5234:  0150A0E1     MOV r5, r1
		   0x010F5238:  06608FE0     ADD r6, pc, r6
		   0x010F523C:  0000D6E5     LDRB r0, [r6]
		   0x010F5240:  000050E3     CMPS r0, r0, 0x0
		   0x010F5244:  0700001A     BNE $+0x24  // if (!=) goto 0x010F5268
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F5248:  88009FE5     LDR r0, [pc, 0x88]
		   0x010F524C:  00009FE7     LDR r0, [pc, r0]
		   0x010F5250:  C297F9EB     BL $-0x19a0f0
		   0x010F5254:  80009FE5     LDR r0, [pc, 0x80]
		   0x010F5258:  00009FE7     LDR r0, [pc, r0]
		   0x010F525C:  BF97F9EB     BL $-0x19a0fc
		   0x010F5260:  0100A0E3     MOV r0, 0x1
		   0x010F5264:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F5268:  70009FE5     LDR r0, [pc, 0x70]
		   0x010F526C:  00009FE7     LDR r0, [pc, r0]
		   0x010F5270:  085095E5     LDR r5, [r5, 0x8]
		   0x010F5274:  000090E5     LDR r0, [r0]
		   0x010F5278:  741090E5     LDR r1, [r0, 0x74]
		   0x010F527C:  000051E3     CMPS r0, r1, 0x0
		   0x010F5280:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5288
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F5284:  0298F9EB     BL $-0x199ff0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F5288:  0000A0E3     MOV r0, 0x0
		   0x010F528C:  872D7BEB     BL $+0x1ecb624  // CALL → CultureInfo.get_InvariantCulture
		   0x010F5290:  0060A0E1     MOV r6, r0
		   0x010F5294:  48009FE5     LDR r0, [pc, 0x48]
		   0x010F5298:  00009FE7     LDR r0, [pc, r0]
		   0x010F529C:  000090E5     LDR r0, [r0]
		   0x010F52A0:  741090E5     LDR r1, [r0, 0x74]
		   0x010F52A4:  000051E3     CMPS r0, r1, 0x0
		   0x010F52A8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F52B0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F52AC:  F897F9EB     BL $-0x19a018
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F52B0:  0D00A0E1     MOV r0, sp
		   0x010F52B4:  0510A0E1     MOV r1, r5
		   0x010F52B8:  0620A0E1     MOV r2, r6
		   0x010F52BC:  0030A0E3     MOV r3, 0x0
		   0x010F52C0:  9BB47CEB     BL $+0x1f2d274  // CALL → DateTime.Parse
		   0x010F52C4:  03009DE8     LDM sp, {r0, r1}
		   0x010F52C8:  F000C4E1     STRD r0, r1, [r4]
		   0x010F52CC:  08D08DE2     ADD sp, sp, 0x8
		   0x010F52D0:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010F52D4:  076B1303     TSTSEQ r6, r3, 0x1c00
		   0x010F52D8:  601DF802     RSCSEQ r1, r8, 0x1800
		   0x010F52DC:  141FF802     RSCSEQ r1, r8, 0x50
		   0x010F52E0:  401DF802     RSCSEQ r1, r8, 0x1000
		   0x010F52E4:  D41EF802     RSCSEQ r1, r8, 0xd40
		*/
	}

	// RVA: 0x10F52E8 Offset: 0x10F52E8 VA: 0x10F52E8
	public void set_date(DateTime value) {
		/* Disassembly (ARM32, 47 instructions, 0xBC bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F52E8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F52EC:  08D04DE2     SUB sp, sp, 0x8
		   0x010F52F0:  98509FE5     LDR r5, [pc, 0x98]
		   0x010F52F4:  0040A0E1     MOV r4, r0
		   0x010F52F8:  04308DE5     STR r3, [sp, 0x4]
		   0x010F52FC:  05508FE0     ADD r5, pc, r5
		   0x010F5300:  00208DE5     STR r2, [sp]
		   0x010F5304:  0000D5E5     LDRB r0, [r5]
		   0x010F5308:  000050E3     CMPS r0, r0, 0x0
		   0x010F530C:  0700001A     BNE $+0x24  // if (!=) goto 0x010F5330
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F5310:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x010F5314:  00009FE7     LDR r0, [pc, r0]
		   0x010F5318:  9097F9EB     BL $-0x19a1b8
		   0x010F531C:  74009FE5     LDR r0, [pc, 0x74]
		   0x010F5320:  00009FE7     LDR r0, [pc, r0]
		   0x010F5324:  8D97F9EB     BL $-0x19a1c4
		   0x010F5328:  0100A0E3     MOV r0, 0x1
		   0x010F532C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F5330:  64009FE5     LDR r0, [pc, 0x64]
		   0x010F5334:  00009FE7     LDR r0, [pc, r0]
		   0x010F5338:  000090E5     LDR r0, [r0]
		   0x010F533C:  741090E5     LDR r1, [r0, 0x74]
		   0x010F5340:  000051E3     CMPS r0, r1, 0x0
		   0x010F5344:  0000001A     BNE $+0x8  // if (!=) goto 0x010F534C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F5348:  D197F9EB     BL $-0x19a0b4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F534C:  0000A0E3     MOV r0, 0x0
		   0x010F5350:  562D7BEB     BL $+0x1ecb560  // CALL → CultureInfo.get_InvariantCulture
		   0x010F5354:  0050A0E1     MOV r5, r0
		   0x010F5358:  40009FE5     LDR r0, [pc, 0x40]
		   0x010F535C:  00009FE7     LDR r0, [pc, r0]
		   0x010F5360:  000090E5     LDR r0, [r0]
		   0x010F5364:  741090E5     LDR r1, [r0, 0x74]
		   0x010F5368:  000051E3     CMPS r0, r1, 0x0
		   0x010F536C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5374
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F5370:  C797F9EB     BL $-0x19a0dc
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F5374:  0D00A0E1     MOV r0, sp
		   0x010F5378:  0510A0E1     MOV r1, r5
		   0x010F537C:  0020A0E3     MOV r2, 0x0
		   0x010F5380:  3FB87CEB     BL $+0x1f2e104  // CALL → DateTime.ToString
		   0x010F5384:  080084E5     STR r0, [r4, 0x8]
		   0x010F5388:  08D08DE2     ADD sp, sp, 0x8
		   0x010F538C:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010F5390:  446A1303     TSTSEQ r6, r3, 0x44000
		   0x010F5394:  981CF802     RSCSEQ r1, r8, 0x9800
		   0x010F5398:  4C1EF802     RSCSEQ r1, r8, 0x4c0
		   0x010F539C:  781CF802     RSCSEQ r1, r8, 0x7800
		   0x010F53A0:  101EF802     RSCSEQ r1, r8, 0x100
		*/
	}

	// RVA: 0x10F84F0 Offset: 0x10F84F0 VA: 0x10F84F0
	public double get_secondsPassedNow() {
		/* Disassembly (ARM32, 58 instructions, 0xE8 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F84F0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F84F4:  20D04DE2     SUB sp, sp, 0x20
		   0x010F84F8:  C4509FE5     LDR r5, [pc, 0xc4]
		   0x010F84FC:  0040A0E1     MOV r4, r0
		   0x010F8500:  05508FE0     ADD r5, pc, r5
		   0x010F8504:  0000D5E5     LDRB r0, [r5]
		   0x010F8508:  000050E3     CMPS r0, r0, 0x0
		   0x010F850C:  0700001A     BNE $+0x24  // if (!=) goto 0x010F8530
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F8510:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x010F8514:  00009FE7     LDR r0, [pc, r0]
		   0x010F8518:  108BF9EB     BL $-0x19d3b8
		   0x010F851C:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x010F8520:  00009FE7     LDR r0, [pc, r0]
		   0x010F8524:  0D8BF9EB     BL $-0x19d3c4
		   0x010F8528:  0100A0E3     MOV r0, 0x1
		   0x010F852C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F8530:  98009FE5     LDR r0, [pc, 0x98]
		   0x010F8534:  0070A0E3     MOV r7, 0x0
		   0x010F8538:  00009FE7     LDR r0, [pc, r0]
		   0x010F853C:  1C708DE5     STR r7, [sp, 0x1c]
		   0x010F8540:  18708DE5     STR r7, [sp, 0x18]
		   0x010F8544:  000090E5     LDR r0, [r0]
		   0x010F8548:  741090E5     LDR r1, [r0, 0x74]
		   0x010F854C:  000051E3     CMPS r0, r1, 0x0
		   0x010F8550:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8558
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F8554:  4E8BF9EB     BL $-0x19d2c0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F8558:  10008DE2     ADD r0, sp, 0x10
		   0x010F855C:  0010A0E3     MOV r1, 0x0
		   0x010F8560:  62A67CEB     BL $+0x1f29990  // CALL → DateTime.get_Now
		   0x010F8564:  10008DE2     ADD r0, sp, 0x10
		   0x010F8568:  0410A0E1     MOV r1, r4
		   0x010F856C:  10509DE5     LDR r5, [sp, 0x10]
		   0x010F8570:  14609DE5     LDR r6, [sp, 0x14]
		   0x010F8574:  2AF3FFEB     BL $-0x3350
		   0x010F8578:  10009DE5     LDR r0, [sp, 0x10]
		   0x010F857C:  0520A0E1     MOV r2, r5
		   0x010F8580:  14109DE5     LDR r1, [sp, 0x14]
		   0x010F8584:  0630A0E1     MOV r3, r6
		   0x010F8588:  83008DE8     STM sp, {r0, r1, r7}
		   0x010F858C:  18008DE2     ADD r0, sp, 0x18
		   0x010F8590:  4EAF7CEB     BL $+0x1f2bd40  // CALL → DateTime.op_Subtraction
		   0x010F8594:  38009FE5     LDR r0, [pc, 0x38]
		   0x010F8598:  00009FE7     LDR r0, [pc, r0]
		   0x010F859C:  000090E5     LDR r0, [r0]
		   0x010F85A0:  741090E5     LDR r1, [r0, 0x74]
		   0x010F85A4:  000051E3     CMPS r0, r1, 0x0
		   0x010F85A8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F85B0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F85AC:  388BF9EB     BL $-0x19d318
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F85B0:  18008DE2     ADD r0, sp, 0x18
		   0x010F85B4:  0010A0E3     MOV r1, 0x0
		   0x010F85B8:  46AB7DEB     BL $+0x1f6ad20  // CALL → TimeSpan.get_TotalSeconds
		   0x010F85BC:  20D08DE2     ADD sp, sp, 0x20
		   0x010F85C0:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010F85C4:  41381303     TSTSEQ r3, r3, 0x410000
		   0x010F85C8:  58ECF702     RSCSEQ lr, r7, 0x5800
		   0x010F85CC:  F4E9F702     RSCSEQ lr, r7, 0x3d0000
		   0x010F85D0:  34ECF702     RSCSEQ lr, r7, 0x3400
		   0x010F85D4:  7CE9F702     RSCSEQ lr, r7, 0x1f0000
		*/
	}

	// RVA: 0x10F85D8 Offset: 0x10F85D8 VA: 0x10F85D8
	public double GetSecondsToTheEndOfTimer(float timeToUnlock) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F85D8:  00482DE9     PUSH {fp, lr}
		*/
	}
}
