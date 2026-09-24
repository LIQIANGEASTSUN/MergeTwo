// Dll : Assembly-CSharp.dll
// Namespace: Original.Game.Common
public class LevelLayout // TypeDefIndex: 3505
{

	// Fields
	private readonly object[] layout; // 0x8

	// Properties
	public int width { get; }
	public int height { get; }

	// Methods

	// RVA: 0x1436428 Offset: 0x1436428 VA: 0x1436428
	public void .ctor(LevelObject levelObject) {
		/* Disassembly (ARM32, 114 instructions, 0x1C8 bytes):
		   // CFG: 29 blocks, 28 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01436428:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0143642C:  08D04DE2     SUB sp, sp, 0x8
		   0x01436430:  AC419FE5     LDR r4, [pc, 0x1ac]
		   0x01436434:  0080A0E1     MOV r8, r0
		   0x01436438:  0190A0E1     MOV sb, r1
		   0x0143643C:  04408FE0     ADD r4, pc, r4
		   0x01436440:  0000D4E5     LDRB r0, [r4]
		   0x01436444:  000050E3     CMPS r0, r0, 0x0
		   0x01436448:  0400001A     BNE $+0x18  // if (!=) goto 0x01436460
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0143644C:  94019FE5     LDR r0, [pc, 0x194]
		   0x01436450:  00009FE7     LDR r0, [pc, r0]
		   0x01436454:  4193ECEB     BL $-0x4db2f4
		   0x01436458:  0100A0E3     MOV r0, 0x1
		   0x0143645C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01436460:  0800A0E1     MOV r0, r8
		   0x01436464:  0010A0E3     MOV r1, 0x0
		   0x01436468:  DF7B71EB     BL $+0x1c5ef84  // CALL → Object..ctor
		   0x0143646C:  000059E3     CMPS r0, sb, 0x0
		   0x01436470:  0400000A     BEQ $+0x18  // if (==) goto 0x01436488
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01436474:  0900A0E1     MOV r0, sb
		   0x01436478:  0010A0E3     MOV r1, 0x0
		   0x0143647C:  99FFF2EB     BL $-0x340194
		   0x01436480:  0060A0E1     MOV r6, r0
		   0x01436484:  050000EA     B $+0x1c  // goto 0x014364A0
		   // ──── Block 4 if (==) ────────────────────
		   0x01436488:  D093ECEB     BL $-0x4db0b8
		   0x0143648C:  0000A0E3     MOV r0, 0x0
		   0x01436490:  0010A0E3     MOV r1, 0x0
		   0x01436494:  93FFF2EB     BL $-0x3401ac
		   0x01436498:  0060A0E1     MOV r6, r0
		   0x0143649C:  CB93ECEB     BL $-0x4db0cc
		   // ──── Block 5 ──────────────────────────────
		   0x014364A0:  0900A0E1     MOV r0, sb
		   0x014364A4:  0010A0E3     MOV r1, 0x0
		   0x014364A8:  00A0A0E3     MOV r10, 0x0
		   0x014364AC:  8FFFF2EB     BL $-0x3401bc
		   0x014364B0:  34119FE5     LDR r1, [pc, 0x134]
		   0x014364B4:  01109FE7     LDR r1, [pc, r1]
		   0x014364B8:  04008DE5     STR r0, [sp, 0x4]
		   0x014364BC:  00608DE5     STR r6, [sp]
		   0x014364C0:  002091E5     LDR r2, [r1]
		   0x014364C4:  0D10A0E1     MOV r1, sp
		   0x014364C8:  0200A0E1     MOV r0, r2
		   0x014364CC:  4793ECEB     BL $-0x4db2dc
		   0x014364D0:  080088E5     STR r0, [r8, 0x8]
		   0x014364D4:  000059E3     CMPS r0, sb, 0x0
		   0x014364D8:  0000001A     BNE $+0x8  // if (!=) goto 0x014364E0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014364DC:  BB93ECEB     BL $-0x4db10c
		   // ──── Block 7 if (!=) ────────────────────
		   0x014364E0:  0900A0E1     MOV r0, sb
		   0x014364E4:  0010A0E3     MOV r1, 0x0
		   0x014364E8:  80FFF2EB     BL $-0x3401f8
		   0x014364EC:  00005AE1     CMPS r0, r10, r0
		   0x014364F0:  390000AA     BGE $+0xec  // if (>=) goto 0x014365DC
		   // 
		   // ──── Block 8 else (<) ────────────────────
		   0x014364F4:  0050A0E3     MOV r5, 0x0
		   0x014364F8:  000059E3     CMPS r0, sb, 0x0
		   0x014364FC:  0600000A     BEQ $+0x20  // if (==) goto 0x0143651C
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x01436500:  0900A0E1     MOV r0, sb
		   0x01436504:  0010A0E3     MOV r1, 0x0
		   0x01436508:  76FFF2EB     BL $-0x340220
		   0x0143650C:  000055E1     CMPS r0, r5, r0
		   0x01436510:  2F0000AA     BGE $+0xc4  // if (>=) goto 0x014365D4
		   // 
		   // ──── Block 10 else (<) ────────────────────
		   0x01436514:  084098E5     LDR r4, [r8, 0x8]
		   0x01436518:  070000EA     B $+0x24  // goto 0x0143653C
		   // ──── Block 11 if (==) ────────────────────
		   0x0143651C:  AB93ECEB     BL $-0x4db14c
		   0x01436520:  0000A0E3     MOV r0, 0x0
		   0x01436524:  0010A0E3     MOV r1, 0x0
		   0x01436528:  6EFFF2EB     BL $-0x340240
		   0x0143652C:  000055E1     CMPS r0, r5, r0
		   0x01436530:  270000AA     BGE $+0xa4  // if (>=) goto 0x014365D4
		   // 
		   // ──── Block 12 else (<) ────────────────────
		   0x01436534:  084098E5     LDR r4, [r8, 0x8]
		   0x01436538:  A493ECEB     BL $-0x4db168
		   // ──── Block 13 ──────────────────────────────
		   0x0143653C:  0900A0E1     MOV r0, sb
		   0x01436540:  0010A0E3     MOV r1, 0x0
		   0x01436544:  1C7099E5     LDR r7, [sb, 0x1c]
		   0x01436548:  66FFF2EB     BL $-0x340260
		   0x0143654C:  0060A0E1     MOV r6, r0
		   0x01436550:  000057E3     CMPS r0, r7, 0x0
		   0x01436554:  0000001A     BNE $+0x8  // if (!=) goto 0x0143655C
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x01436558:  9C93ECEB     BL $-0x4db188
		   // ──── Block 15 if (!=) ────────────────────
		   0x0143655C:  9A5626E0     MLA r6, r10, r6, r5
		   0x01436560:  0C0097E5     LDR r0, [r7, 0xc]
		   0x01436564:  060050E1     CMPS r0, r0, r6
		   0x01436568:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x01436570
		   // 
		   // ──── Block 16 else (<= (unsigned)) ────────────────────
		   0x0143656C:  9893ECEB     BL $-0x4db198
		   // ──── Block 17 if (> (unsigned)) ────────────────────
		   0x01436570:  060187E0     ADD r0, r7, r6, lsl 2
		   0x01436574:  106090E5     LDR r6, [r0, 0x10]
		   0x01436578:  000056E3     CMPS r0, r6, 0x0
		   0x0143657C:  0000001A     BNE $+0x8  // if (!=) goto 0x01436584
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x01436580:  9293ECEB     BL $-0x4db1b0
		   // ──── Block 19 if (!=) ────────────────────
		   0x01436584:  0860D6E5     LDRB r6, [r6, 0x8]
		   0x01436588:  000054E3     CMPS r0, r4, 0x0
		   0x0143658C:  0000001A     BNE $+0x8  // if (!=) goto 0x01436594
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x01436590:  8E93ECEB     BL $-0x4db1c0
		   // ──── Block 21 if (!=) ────────────────────
		   0x01436594:  080094E5     LDR r0, [r4, 0x8]
		   0x01436598:  001090E5     LDR r1, [r0]
		   0x0143659C:  050051E1     CMPS r0, r1, r5
		   0x014365A0:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x014365AC
		   // 
		   // ──── Block 22 else (<= (unsigned)) ────────────────────
		   0x014365A4:  8A93ECEB     BL $-0x4db1d0
		   0x014365A8:  080094E5     LDR r0, [r4, 0x8]
		   // ──── Block 23 if (> (unsigned)) ────────────────────
		   0x014365AC:  087090E5     LDR r7, [r0, 0x8]
		   0x014365B0:  0A0057E1     CMPS r0, r7, r10
		   0x014365B4:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x014365BC
		   // 
		   // ──── Block 24 else (<= (unsigned)) ────────────────────
		   0x014365B8:  8593ECEB     BL $-0x4db1e4
		   // ──── Block 25 if (> (unsigned)) ────────────────────
		   0x014365BC:  97A520E0     MLA r0, r7, r5, r10
		   0x014365C0:  015085E2     ADD r5, r5, 0x1
		   0x014365C4:  011026E2     EOR r1, r6, 0x1
		   0x014365C8:  000084E0     ADD r0, r4, r0
		   0x014365CC:  1010C0E5     STRB r1, [r0, 0x10]
		   0x014365D0:  C8FFFFEA     B $-0xd8
		   // ──── Block 26 (from 2 paths) ──────────────────
		   0x014365D4:  01A08AE2     ADD r10, r10, 0x1
		   0x014365D8:  BDFFFFEA     B $-0x104
		   // ──── Block 27 if (>=) ────────────────────
		   0x014365DC:  08D08DE2     ADD sp, sp, 0x8
		   0x014365E0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x014365E4:  F972DF02     SBCSEQ r7, pc, 0x9000000f
		   0x014365E8:  9CE3C402     SBCEQ lr, r4, 0x70000002
		   0x014365EC:  38E3C402     SBCEQ lr, r4, 0xe0000000
		*/
	}

	// RVA: 0x14365F0 Offset: 0x14365F0 VA: 0x14365F0
	public void .ctor(FieldData fieldData) {
		/* Disassembly (ARM32, 97 instructions, 0x184 bytes):
		   // CFG: 29 blocks, 29 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014365F0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x014365F4:  08D04DE2     SUB sp, sp, 0x8
		   0x014365F8:  68419FE5     LDR r4, [pc, 0x168]
		   0x014365FC:  0080A0E1     MOV r8, r0
		   0x01436600:  0190A0E1     MOV sb, r1
		   0x01436604:  04408FE0     ADD r4, pc, r4
		   0x01436608:  0000D4E5     LDRB r0, [r4]
		   0x0143660C:  000050E3     CMPS r0, r0, 0x0
		   0x01436610:  0400001A     BNE $+0x18  // if (!=) goto 0x01436628
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01436614:  50019FE5     LDR r0, [pc, 0x150]
		   0x01436618:  00009FE7     LDR r0, [pc, r0]
		   0x0143661C:  CF92ECEB     BL $-0x4db4bc
		   0x01436620:  0100A0E3     MOV r0, 0x1
		   0x01436624:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01436628:  0800A0E1     MOV r0, r8
		   0x0143662C:  0010A0E3     MOV r1, 0x0
		   0x01436630:  6D7B71EB     BL $+0x1c5edbc  // CALL → Object..ctor
		   0x01436634:  000059E3     CMPS r0, sb, 0x0
		   0x01436638:  0000001A     BNE $+0x8  // if (!=) goto 0x01436640
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0143663C:  6393ECEB     BL $-0x4db26c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01436640:  D820C9E1     LDRD r2, r3, [sb, 0x8]
		   0x01436644:  0D10A0E1     MOV r1, sp
		   0x01436648:  20019FE5     LDR r0, [pc, 0x120]
		   0x0143664C:  00009FE7     LDR r0, [pc, r0]
		   0x01436650:  0C008DE8     STM sp, {r2, r3}
		   0x01436654:  000090E5     LDR r0, [r0]
		   0x01436658:  E492ECEB     BL $-0x4db468
		   0x0143665C:  080088E5     STR r0, [r8, 0x8]
		   0x01436660:  0C0099E5     LDR r0, [sb, 0xc]
		   0x01436664:  010050E3     CMPS r0, r0, 0x1
		   0x01436668:  3C0000BA     BLT $+0xf8  // if (<) goto 0x01436760
		   // 
		   // ──── Block 5 else (>=) ────────────────────
		   0x0143666C:  00A0A0E3     MOV r10, 0x0
		   0x01436670:  086099E5     LDR r6, [sb, 0x8]
		   0x01436674:  010056E3     CMPS r0, r6, 0x1
		   0x01436678:  340000BA     BLT $+0xd8  // if (<) goto 0x01436750
		   // 
		   // ──── Block 6 else (>=) ────────────────────
		   0x0143667C:  0070A0E3     MOV r7, 0x0
		   0x01436680:  1C5099E5     LDR r5, [sb, 0x1c]
		   0x01436684:  000055E3     CMPS r0, r5, 0x0
		   0x01436688:  0000001A     BNE $+0x8  // if (!=) goto 0x01436690
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0143668C:  4F93ECEB     BL $-0x4db2bc
		   // ──── Block 8 if (!=) ────────────────────
		   0x01436690:  9A7624E0     MLA r4, r10, r6, r7
		   0x01436694:  0C0095E5     LDR r0, [r5, 0xc]
		   0x01436698:  040050E1     CMPS r0, r0, r4
		   0x0143669C:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x014366A4
		   // 
		   // ──── Block 9 else (<= (unsigned)) ────────────────────
		   0x014366A0:  4B93ECEB     BL $-0x4db2cc
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x014366A4:  040185E0     ADD r0, r5, r4, lsl 2
		   0x014366A8:  100090E5     LDR r0, [r0, 0x10]
		   0x014366AC:  000050E3     CMPS r0, r0, 0x0
		   0x014366B0:  0E00000A     BEQ $+0x40  // if (==) goto 0x014366F0
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x014366B4:  1C5099E5     LDR r5, [sb, 0x1c]
		   0x014366B8:  000055E3     CMPS r0, r5, 0x0
		   0x014366BC:  0000001A     BNE $+0x8  // if (!=) goto 0x014366C4
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x014366C0:  4293ECEB     BL $-0x4db2f0
		   // ──── Block 13 if (!=) ────────────────────
		   0x014366C4:  0C0095E5     LDR r0, [r5, 0xc]
		   0x014366C8:  040050E1     CMPS r0, r0, r4
		   0x014366CC:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x014366D4
		   // 
		   // ──── Block 14 else (<= (unsigned)) ────────────────────
		   0x014366D0:  3F93ECEB     BL $-0x4db2fc
		   // ──── Block 15 if (> (unsigned)) ────────────────────
		   0x014366D4:  040185E0     ADD r0, r5, r4, lsl 2
		   0x014366D8:  104090E5     LDR r4, [r0, 0x10]
		   0x014366DC:  000054E3     CMPS r0, r4, 0x0
		   0x014366E0:  0000001A     BNE $+0x8  // if (!=) goto 0x014366E8
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x014366E4:  3993ECEB     BL $-0x4db314
		   // ──── Block 17 if (!=) ────────────────────
		   0x014366E8:  0850D4E5     LDRB r5, [r4, 0x8]
		   0x014366EC:  000000EA     B $+0x8  // goto 0x014366F4
		   // ──── Block 18 if (==) ────────────────────
		   0x014366F0:  0050A0E3     MOV r5, 0x0
		   // ──── Block 19 ──────────────────────────────
		   0x014366F4:  084098E5     LDR r4, [r8, 0x8]
		   0x014366F8:  000054E3     CMPS r0, r4, 0x0
		   0x014366FC:  0000001A     BNE $+0x8  // if (!=) goto 0x01436704
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x01436700:  3293ECEB     BL $-0x4db330
		   // ──── Block 21 if (!=) ────────────────────
		   0x01436704:  080094E5     LDR r0, [r4, 0x8]
		   0x01436708:  001090E5     LDR r1, [r0]
		   0x0143670C:  070051E1     CMPS r0, r1, r7
		   0x01436710:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x0143671C
		   // 
		   // ──── Block 22 else (<= (unsigned)) ────────────────────
		   0x01436714:  2E93ECEB     BL $-0x4db340
		   0x01436718:  080094E5     LDR r0, [r4, 0x8]
		   // ──── Block 23 if (> (unsigned)) ────────────────────
		   0x0143671C:  086090E5     LDR r6, [r0, 0x8]
		   0x01436720:  0A0056E1     CMPS r0, r6, r10
		   0x01436724:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0143672C
		   // 
		   // ──── Block 24 else (<= (unsigned)) ────────────────────
		   0x01436728:  2993ECEB     BL $-0x4db354
		   // ──── Block 25 if (> (unsigned)) ────────────────────
		   0x0143672C:  96A720E0     MLA r0, r6, r7, r10
		   0x01436730:  151F6FE1     CLZ r1, r5
		   0x01436734:  086099E5     LDR r6, [sb, 0x8]
		   0x01436738:  017087E2     ADD r7, r7, 0x1
		   0x0143673C:  A112A0E1     MOV r1, r0, r1, lsr 5
		   0x01436740:  060057E1     CMPS r0, r7, r6
		   0x01436744:  000084E0     ADD r0, r4, r0
		   0x01436748:  1010C0E5     STRB r1, [r0, 0x10]
		   0x0143674C:  CBFFFFBA     BLT $-0xcc
		   // ──── Block 26 (from 2 paths) ──────────────────
		   0x01436750:  0C0099E5     LDR r0, [sb, 0xc]
		   0x01436754:  01A08AE2     ADD r10, r10, 0x1
		   0x01436758:  00005AE1     CMPS r0, r10, r0
		   0x0143675C:  C3FFFFBA     BLT $-0xec
		   // ──── Block 27 (from 2 paths) ──────────────────
		   0x01436760:  08D08DE2     ADD sp, sp, 0x8
		   0x01436764:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01436768:  3271DF02     SBCSEQ r7, pc, 0x8000000c
		   0x0143676C:  D4E1C402     SBCEQ lr, r4, 0x35
		   0x01436770:  A0E1C402     SBCEQ lr, r4, 0x28
		*/
	}

	// RVA: 0x1436774 Offset: 0x1436774 VA: 0x1436774
	public void .ctor(string data) {
		/* Disassembly (ARM32, 112 instructions, 0x1C0 bytes):
		   // CFG: 28 blocks, 28 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01436774:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01436778:  14D04DE2     SUB sp, sp, 0x14
		   0x0143677C:  08008DE5     STR r0, [sp, 0x8]
		   0x01436780:  0150A0E1     MOV r5, r1
		   0x01436784:  9C419FE5     LDR r4, [pc, 0x19c]
		   0x01436788:  04408FE0     ADD r4, pc, r4
		   0x0143678C:  0000D4E5     LDRB r0, [r4]
		   0x01436790:  000050E3     CMPS r0, r0, 0x0
		   0x01436794:  0400001A     BNE $+0x18  // if (!=) goto 0x014367AC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01436798:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x0143679C:  00009FE7     LDR r0, [pc, r0]
		   0x014367A0:  6E92ECEB     BL $-0x4db640
		   0x014367A4:  0100A0E3     MOV r0, 0x1
		   0x014367A8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014367AC:  08009DE5     LDR r0, [sp, 0x8]
		   0x014367B0:  0010A0E3     MOV r1, 0x0
		   0x014367B4:  0C7B71EB     BL $+0x1c5ec38  // CALL → Object..ctor
		   0x014367B8:  000055E3     CMPS r0, r5, 0x0
		   0x014367BC:  0000001A     BNE $+0x8  // if (!=) goto 0x014367C4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014367C0:  0293ECEB     BL $-0x4db3f0
		   // ──── Block 4 if (!=) ────────────────────
		   0x014367C4:  0500A0E1     MOV r0, r5
		   0x014367C8:  3B10A0E3     MOV r1, 0x3b
		   0x014367CC:  0120A0E3     MOV r2, 0x1
		   0x014367D0:  0030A0E3     MOV r3, 0x0
		   0x014367D4:  B89469EB     BL $+0x1a652e8  // CALL → String.Split
		   0x014367D8:  0050A0E1     MOV r5, r0
		   0x014367DC:  000050E3     CMPS r0, r0, 0x0
		   0x014367E0:  0000001A     BNE $+0x8  // if (!=) goto 0x014367E8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014367E4:  F992ECEB     BL $-0x4db414
		   // ──── Block 6 if (!=) ────────────────────
		   0x014367E8:  0C0095E5     LDR r0, [r5, 0xc]
		   0x014367EC:  000050E3     CMPS r0, r0, 0x0
		   0x014367F0:  0000001A     BNE $+0x8  // if (!=) goto 0x014367F8
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x014367F4:  F692ECEB     BL $-0x4db420
		   // ──── Block 8 if (!=) ────────────────────
		   0x014367F8:  100095E5     LDR r0, [r5, 0x10]
		   0x014367FC:  0010A0E3     MOV r1, 0x0
		   0x01436800:  F53770EB     BL $+0x1c0dfdc  // CALL → Int32.Parse
		   0x01436804:  00A0A0E1     MOV r10, r0
		   0x01436808:  0C0095E5     LDR r0, [r5, 0xc]
		   0x0143680C:  010050E3     CMPS r0, r0, 0x1
		   0x01436810:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x01436818
		   // 
		   // ──── Block 9 else (<= (unsigned)) ────────────────────
		   0x01436814:  EE92ECEB     BL $-0x4db440
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x01436818:  140095E5     LDR r0, [r5, 0x14]
		   0x0143681C:  0010A0E3     MOV r1, 0x0
		   0x01436820:  00B0A0E3     MOV fp, 0x0
		   0x01436824:  EC3770EB     BL $+0x1c0dfb8  // CALL → Int32.Parse
		   0x01436828:  0040A0E1     MOV r4, r0
		   0x0143682C:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x01436830:  0C108DE2     ADD r1, sp, 0xc
		   0x01436834:  00009FE7     LDR r0, [pc, r0]
		   0x01436838:  10408DE5     STR r4, [sp, 0x10]
		   0x0143683C:  0CA08DE5     STR r10, [sp, 0xc]
		   0x01436840:  000090E5     LDR r0, [r0]
		   0x01436844:  6992ECEB     BL $-0x4db654
		   0x01436848:  08109DE5     LDR r1, [sp, 0x8]
		   0x0143684C:  010054E3     CMPS r0, r4, 0x1
		   0x01436850:  04408DE5     STR r4, [sp, 0x4]
		   0x01436854:  080081E5     STR r0, [r1, 0x8]
		   0x01436858:  300000BA     BLT $+0xc8  // if (<) goto 0x01436920
		   // 
		   // ──── Block 11 else (>=) ────────────────────
		   0x0143685C:  0060A0E3     MOV r6, 0x0
		   0x01436860:  01005AE3     CMPS r0, r10, 0x1
		   0x01436864:  280000BA     BLT $+0xa8  // if (<) goto 0x0143690C
		   // 
		   // ──── Block 12 else (>=) ────────────────────
		   0x01436868:  0040A0E3     MOV r4, 0x0
		   0x0143686C:  08009DE5     LDR r0, [sp, 0x8]
		   0x01436870:  000055E3     CMPS r0, r5, 0x0
		   0x01436874:  088090E5     LDR r8, [r0, 0x8]
		   0x01436878:  0000001A     BNE $+0x8  // if (!=) goto 0x01436880
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0143687C:  D392ECEB     BL $-0x4db4ac
		   // ──── Block 14 if (!=) ────────────────────
		   0x01436880:  0C0095E5     LDR r0, [r5, 0xc]
		   0x01436884:  020050E3     CMPS r0, r0, 0x2
		   0x01436888:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x01436890
		   // 
		   // ──── Block 15 else (<= (unsigned)) ────────────────────
		   0x0143688C:  D092ECEB     BL $-0x4db4b8
		   // ──── Block 16 if (> (unsigned)) ────────────────────
		   0x01436890:  187095E5     LDR r7, [r5, 0x18]
		   0x01436894:  000057E3     CMPS r0, r7, 0x0
		   0x01436898:  0000001A     BNE $+0x8  // if (!=) goto 0x014368A0
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x0143689C:  CB92ECEB     BL $-0x4db4cc
		   // ──── Block 18 if (!=) ────────────────────
		   0x014368A0:  04108BE0     ADD r1, fp, r4
		   0x014368A4:  0700A0E1     MOV r0, r7
		   0x014368A8:  0020A0E3     MOV r2, 0x0
		   0x014368AC:  676E69EB     BL $+0x1a5b9a4  // CALL → String.get_Chars
		   0x014368B0:  0070A0E1     MOV r7, r0
		   0x014368B4:  000058E3     CMPS r0, r8, 0x0
		   0x014368B8:  0000001A     BNE $+0x8  // if (!=) goto 0x014368C0
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x014368BC:  C392ECEB     BL $-0x4db4ec
		   // ──── Block 20 if (!=) ────────────────────
		   0x014368C0:  080098E5     LDR r0, [r8, 0x8]
		   0x014368C4:  001090E5     LDR r1, [r0]
		   0x014368C8:  040051E1     CMPS r0, r1, r4
		   0x014368CC:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x014368D8
		   // 
		   // ──── Block 21 else (<= (unsigned)) ────────────────────
		   0x014368D0:  BF92ECEB     BL $-0x4db4fc
		   0x014368D4:  080098E5     LDR r0, [r8, 0x8]
		   // ──── Block 22 if (> (unsigned)) ────────────────────
		   0x014368D8:  089090E5     LDR sb, [r0, 0x8]
		   0x014368DC:  060059E1     CMPS r0, sb, r6
		   0x014368E0:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x014368E8
		   // 
		   // ──── Block 23 else (<= (unsigned)) ────────────────────
		   0x014368E4:  BA92ECEB     BL $-0x4db510
		   // ──── Block 24 if (> (unsigned)) ────────────────────
		   0x014368E8:  996420E0     MLA r0, sb, r4, r6
		   0x014368EC:  311047E2     SUB r1, r7, 0x31
		   0x014368F0:  111F6FE1     CLZ r1, r1
		   0x014368F4:  014084E2     ADD r4, r4, 0x1
		   0x014368F8:  04005AE1     CMPS r0, r10, r4
		   0x014368FC:  A112A0E1     MOV r1, r0, r1, lsr 5
		   0x01436900:  000088E0     ADD r0, r8, r0
		   0x01436904:  1010C0E5     STRB r1, [r0, 0x10]
		   0x01436908:  D7FFFF1A     BNE $-0x9c
		   // ──── Block 25 (from 2 paths) ──────────────────
		   0x0143690C:  04009DE5     LDR r0, [sp, 0x4]
		   0x01436910:  016086E2     ADD r6, r6, 0x1
		   0x01436914:  0AB08BE0     ADD fp, fp, r10
		   0x01436918:  000056E1     CMPS r0, r6, r0
		   0x0143691C:  CFFFFF1A     BNE $-0xbc
		   // ──── Block 26 (from 2 paths) ──────────────────
		   0x01436920:  14D08DE2     ADD sp, sp, 0x14
		   0x01436924:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x01436928:  AF6FDF02     SBCSEQ r6, pc, 0x2bc
		   0x0143692C:  50E0C402     SBCEQ lr, r4, 0x50
		   0x01436930:  B8DFC402     SBCEQ sp, r4, 0x2e0
		*/
	}

	// RVA: 0x1436934 Offset: 0x1436934 VA: 0x1436934
	public int get_width() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01436934:  10402DE9     PUSH {r4, lr}
		   0x01436938:  084090E5     LDR r4, [r0, 0x8]
		   0x0143693C:  000054E3     CMPS r0, r4, 0x0
		   0x01436940:  0000001A     BNE $+0x8  // if (!=) goto 0x01436948
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01436944:  A192ECEB     BL $-0x4db574
		   // ──── Block 2 if (!=) ────────────────────
		   0x01436948:  0400A0E1     MOV r0, r4
		   0x0143694C:  0010A0E3     MOV r1, 0x0
		   0x01436950:  0020A0E3     MOV r2, 0x0
		   0x01436954:  1040BDE8     POP {r4, lr}
		   0x01436958:  79ED70EA     B $+0x1c3b5ec  // TAIL CALL → Array.GetLength
		*/
	}

	// RVA: 0x143695C Offset: 0x143695C VA: 0x143695C
	public int get_height() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0143695C:  10402DE9     PUSH {r4, lr}
		   0x01436960:  084090E5     LDR r4, [r0, 0x8]
		   0x01436964:  000054E3     CMPS r0, r4, 0x0
		   0x01436968:  0000001A     BNE $+0x8  // if (!=) goto 0x01436970
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0143696C:  9792ECEB     BL $-0x4db59c
		   // ──── Block 2 if (!=) ────────────────────
		   0x01436970:  0400A0E1     MOV r0, r4
		   0x01436974:  0110A0E3     MOV r1, 0x1
		   0x01436978:  0020A0E3     MOV r2, 0x0
		   0x0143697C:  1040BDE8     POP {r4, lr}
		   0x01436980:  6FED70EA     B $+0x1c3b5c4  // TAIL CALL → Array.GetLength
		*/
	}

	// RVA: 0x1436984 Offset: 0x1436984 VA: 0x1436984
	public bool IsSolid(int x, int y) {
		/* Disassembly (ARM32, 37 instructions, 0x94 bytes):
		   // CFG: 12 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01436984:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01436988:  0060A0E3     MOV r6, 0x0
		   0x0143698C:  000051E3     CMPS r0, r1, 0x0
		   0x01436990:  1E00004A     BMI $+0x80  // if (< 0) goto 0x01436A10
		   // 
		   // ──── Block 1 else (< 0) ────────────────────
		   0x01436994:  0240A0E1     MOV r4, r2
		   0x01436998:  0150A0E1     MOV r5, r1
		   0x0143699C:  0070A0E1     MOV r7, r0
		   0x014369A0:  E3FFFFEB     BL $-0x6c
		   0x014369A4:  000054E3     CMPS r0, r4, 0x0
		   0x014369A8:  1800004A     BMI $+0x68  // if (< 0) goto 0x01436A10
		   // 
		   // ──── Block 2 else (< 0) ────────────────────
		   0x014369AC:  050050E1     CMPS r0, r0, r5
		   0x014369B0:  160000DA     BLE $+0x60  // if (<=) goto 0x01436A10
		   // 
		   // ──── Block 3 else (>) ────────────────────
		   0x014369B4:  0700A0E1     MOV r0, r7
		   0x014369B8:  E7FFFFEB     BL $-0x5c
		   0x014369BC:  040050E1     CMPS r0, r0, r4
		   0x014369C0:  120000DA     BLE $+0x50  // if (<=) goto 0x01436A10
		   // 
		   // ──── Block 4 else (>) ────────────────────
		   0x014369C4:  086097E5     LDR r6, [r7, 0x8]
		   0x014369C8:  000056E3     CMPS r0, r6, 0x0
		   0x014369CC:  0000001A     BNE $+0x8  // if (!=) goto 0x014369D4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014369D0:  7E92ECEB     BL $-0x4db600
		   // ──── Block 6 if (!=) ────────────────────
		   0x014369D4:  080096E5     LDR r0, [r6, 0x8]
		   0x014369D8:  001090E5     LDR r1, [r0]
		   0x014369DC:  050051E1     CMPS r0, r1, r5
		   0x014369E0:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x014369EC
		   // 
		   // ──── Block 7 else (<= (unsigned)) ────────────────────
		   0x014369E4:  7A92ECEB     BL $-0x4db610
		   0x014369E8:  080096E5     LDR r0, [r6, 0x8]
		   // ──── Block 8 if (> (unsigned)) ────────────────────
		   0x014369EC:  087090E5     LDR r7, [r0, 0x8]
		   0x014369F0:  040057E1     CMPS r0, r7, r4
		   0x014369F4:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x014369FC
		   // 
		   // ──── Block 9 else (<= (unsigned)) ────────────────────
		   0x014369F8:  7592ECEB     BL $-0x4db624
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x014369FC:  974520E0     MLA r0, r7, r5, r4
		   0x01436A00:  000086E0     ADD r0, r6, r0
		   0x01436A04:  1060D0E5     LDRB r6, [r0, 0x10]
		   0x01436A08:  000056E3     CMPS r0, r6, 0x0
		   0x01436A0C:  01600013     MOVNE r6, 0x1
		   // ──── Block 11 (from 4 paths) ──────────────────
		   0x01436A10:  0600A0E1     MOV r0, r6
		   0x01436A14:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x1436A18 Offset: 0x1436A18 VA: 0x1436A18 Slot: 3
	public override string ToString() {
		/* Disassembly (ARM32, 142 instructions, 0x238 bytes):
		   // CFG: 24 blocks, 24 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01436A18:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01436A1C:  04D04DE2     SUB sp, sp, 0x4
		   0x01436A20:  04429FE5     LDR r4, [pc, 0x204]
		   0x01436A24:  00A0A0E1     MOV r10, r0
		   0x01436A28:  04408FE0     ADD r4, pc, r4
		   0x01436A2C:  0000D4E5     LDRB r0, [r4]
		   0x01436A30:  000050E3     CMPS r0, r0, 0x0
		   0x01436A34:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01436A70
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01436A38:  F0019FE5     LDR r0, [pc, 0x1f0]
		   0x01436A3C:  00009FE7     LDR r0, [pc, r0]
		   0x01436A40:  C691ECEB     BL $-0x4db8e0
		   0x01436A44:  E8019FE5     LDR r0, [pc, 0x1e8]
		   0x01436A48:  00009FE7     LDR r0, [pc, r0]
		   0x01436A4C:  C391ECEB     BL $-0x4db8ec
		   0x01436A50:  E0019FE5     LDR r0, [pc, 0x1e0]
		   0x01436A54:  00009FE7     LDR r0, [pc, r0]
		   0x01436A58:  C091ECEB     BL $-0x4db8f8
		   0x01436A5C:  D8019FE5     LDR r0, [pc, 0x1d8]
		   0x01436A60:  00009FE7     LDR r0, [pc, r0]
		   0x01436A64:  BD91ECEB     BL $-0x4db904
		   0x01436A68:  0100A0E3     MOV r0, 0x1
		   0x01436A6C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01436A70:  C8019FE5     LDR r0, [pc, 0x1c8]
		   0x01436A74:  00009FE7     LDR r0, [pc, r0]
		   0x01436A78:  000090E5     LDR r0, [r0]
		   0x01436A7C:  5092ECEB     BL $-0x4db6b8
		   0x01436A80:  0010A0E3     MOV r1, 0x0
		   0x01436A84:  00B0A0E1     MOV fp, r0
		   0x01436A88:  EFC369EB     BL $+0x1a70fc4  // CALL → StringBuilder..ctor
		   0x01436A8C:  0A00A0E1     MOV r0, r10
		   0x01436A90:  A7FFFFEB     BL $-0x15c
		   0x01436A94:  0060A0E1     MOV r6, r0
		   0x01436A98:  00005BE3     CMPS r0, fp, 0x0
		   0x01436A9C:  0400000A     BEQ $+0x18  // if (==) goto 0x01436AB4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01436AA0:  0B00A0E1     MOV r0, fp
		   0x01436AA4:  0610A0E1     MOV r1, r6
		   0x01436AA8:  0020A0E3     MOV r2, 0x0
		   0x01436AAC:  48CE69EB     BL $+0x1a73928  // CALL → StringBuilder.Append
		   0x01436AB0:  050000EA     B $+0x1c  // goto 0x01436ACC
		   // ──── Block 4 if (==) ────────────────────
		   0x01436AB4:  4592ECEB     BL $-0x4db6e4
		   0x01436AB8:  0000A0E3     MOV r0, 0x0
		   0x01436ABC:  0610A0E1     MOV r1, r6
		   0x01436AC0:  0020A0E3     MOV r2, 0x0
		   0x01436AC4:  42CE69EB     BL $+0x1a73910  // CALL → StringBuilder.Append
		   0x01436AC8:  4092ECEB     BL $-0x4db6f8
		   // ──── Block 5 ──────────────────────────────
		   0x01436ACC:  70419FE5     LDR r4, [pc, 0x170]
		   0x01436AD0:  0B00A0E1     MOV r0, fp
		   0x01436AD4:  0020A0E3     MOV r2, 0x0
		   0x01436AD8:  04409FE7     LDR r4, [pc, r4]
		   0x01436ADC:  001094E5     LDR r1, [r4]
		   0x01436AE0:  B3A669EB     BL $+0x1a69ad4  // CALL → StringBuilder.Append
		   0x01436AE4:  0A00A0E1     MOV r0, r10
		   0x01436AE8:  9BFFFFEB     BL $-0x18c
		   0x01436AEC:  0060A0E1     MOV r6, r0
		   0x01436AF0:  00005BE3     CMPS r0, fp, 0x0
		   0x01436AF4:  0400000A     BEQ $+0x18  // if (==) goto 0x01436B0C
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x01436AF8:  0B00A0E1     MOV r0, fp
		   0x01436AFC:  0610A0E1     MOV r1, r6
		   0x01436B00:  0020A0E3     MOV r2, 0x0
		   0x01436B04:  32CE69EB     BL $+0x1a738d0  // CALL → StringBuilder.Append
		   0x01436B08:  050000EA     B $+0x1c  // goto 0x01436B24
		   // ──── Block 7 if (==) ────────────────────
		   0x01436B0C:  2F92ECEB     BL $-0x4db73c
		   0x01436B10:  0000A0E3     MOV r0, 0x0
		   0x01436B14:  0610A0E1     MOV r1, r6
		   0x01436B18:  0020A0E3     MOV r2, 0x0
		   0x01436B1C:  2CCE69EB     BL $+0x1a738b8  // CALL → StringBuilder.Append
		   0x01436B20:  2A92ECEB     BL $-0x4db750
		   // ──── Block 8 ──────────────────────────────
		   0x01436B24:  001094E5     LDR r1, [r4]
		   0x01436B28:  0B00A0E1     MOV r0, fp
		   0x01436B2C:  0020A0E3     MOV r2, 0x0
		   0x01436B30:  0070A0E3     MOV r7, 0x0
		   0x01436B34:  9EA669EB     BL $+0x1a69a80  // CALL → StringBuilder.Append
		   0x01436B38:  0A00A0E1     MOV r0, r10
		   0x01436B3C:  86FFFFEB     BL $-0x1e0
		   0x01436B40:  010050E3     CMPS r0, r0, 0x1
		   0x01436B44:  2E0000BA     BLT $+0xc0  // if (<) goto 0x01436C04
		   // 
		   // ──── Block 9 else (>=) ────────────────────
		   0x01436B48:  F8809FE5     LDR r8, [pc, 0xf8]
		   0x01436B4C:  08809FE7     LDR r8, [pc, r8]
		   0x01436B50:  F4909FE5     LDR sb, [pc, 0xf4]
		   0x01436B54:  09909FE7     LDR sb, [pc, sb]
		   0x01436B58:  0A00A0E1     MOV r0, r10
		   0x01436B5C:  74FFFFEB     BL $-0x228
		   0x01436B60:  010050E3     CMPS r0, r0, 0x1
		   0x01436B64:  210000BA     BLT $+0x8c  // if (<) goto 0x01436BF0
		   // 
		   // ──── Block 10 else (>=) ────────────────────
		   0x01436B68:  0040A0E3     MOV r4, 0x0
		   0x01436B6C:  08609AE5     LDR r6, [r10, 0x8]
		   0x01436B70:  000056E3     CMPS r0, r6, 0x0
		   0x01436B74:  0000001A     BNE $+0x8  // if (!=) goto 0x01436B7C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01436B78:  1492ECEB     BL $-0x4db7a8
		   // ──── Block 12 if (!=) ────────────────────
		   0x01436B7C:  080096E5     LDR r0, [r6, 0x8]
		   0x01436B80:  001090E5     LDR r1, [r0]
		   0x01436B84:  040051E1     CMPS r0, r1, r4
		   0x01436B88:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x01436B94
		   // 
		   // ──── Block 13 else (<= (unsigned)) ────────────────────
		   0x01436B8C:  1092ECEB     BL $-0x4db7b8
		   0x01436B90:  080096E5     LDR r0, [r6, 0x8]
		   // ──── Block 14 if (> (unsigned)) ────────────────────
		   0x01436B94:  085090E5     LDR r5, [r0, 0x8]
		   0x01436B98:  070055E1     CMPS r0, r5, r7
		   0x01436B9C:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x01436BA4
		   // 
		   // ──── Block 15 else (<= (unsigned)) ────────────────────
		   0x01436BA0:  0B92ECEB     BL $-0x4db7cc
		   // ──── Block 16 if (> (unsigned)) ────────────────────
		   0x01436BA4:  957420E0     MLA r0, r5, r4, r7
		   0x01436BA8:  000086E0     ADD r0, r6, r0
		   0x01436BAC:  1000D0E5     LDRB r0, [r0, 0x10]
		   0x01436BB0:  000050E3     CMPS r0, r0, 0x0
		   0x01436BB4:  0900A0E1     MOV r0, sb
		   0x01436BB8:  0800A001     MOVEQ r0, r8
		   0x01436BBC:  00005BE3     CMPS r0, fp, 0x0
		   0x01436BC0:  006090E5     LDR r6, [r0]
		   0x01436BC4:  0000001A     BNE $+0x8  // if (!=) goto 0x01436BCC
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01436BC8:  0092ECEB     BL $-0x4db7f8
		   // ──── Block 18 if (!=) ────────────────────
		   0x01436BCC:  0B00A0E1     MOV r0, fp
		   0x01436BD0:  0610A0E1     MOV r1, r6
		   0x01436BD4:  0020A0E3     MOV r2, 0x0
		   0x01436BD8:  75A669EB     BL $+0x1a699dc  // CALL → StringBuilder.Append
		   0x01436BDC:  0A00A0E1     MOV r0, r10
		   0x01436BE0:  53FFFFEB     BL $-0x2ac
		   0x01436BE4:  014084E2     ADD r4, r4, 0x1
		   0x01436BE8:  000054E1     CMPS r0, r4, r0
		   0x01436BEC:  DEFFFFBA     BLT $-0x80
		   // ──── Block 19 (from 2 paths) ──────────────────
		   0x01436BF0:  0A00A0E1     MOV r0, r10
		   0x01436BF4:  58FFFFEB     BL $-0x298
		   0x01436BF8:  017087E2     ADD r7, r7, 0x1
		   0x01436BFC:  000057E1     CMPS r0, r7, r0
		   0x01436C00:  D4FFFFBA     BLT $-0xa8
		   // ──── Block 20 (from 2 paths) ──────────────────
		   0x01436C04:  00005BE3     CMPS r0, fp, 0x0
		   0x01436C08:  0000001A     BNE $+0x8  // if (!=) goto 0x01436C10
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x01436C0C:  EF91ECEB     BL $-0x4db83c
		   // ──── Block 22 if (!=) ────────────────────
		   0x01436C10:  00009BE5     LDR r0, [fp]
		   0x01436C14:  D82DC0E1     LDRD r2, r3, [r0, 0xd8]
		   0x01436C18:  0B00A0E1     MOV r0, fp
		   0x01436C1C:  0310A0E1     MOV r1, r3
		   0x01436C20:  04D08DE2     ADD sp, sp, 0x4
		   0x01436C24:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01436C28:  12FF2FE1     BX r2
		   0x01436C2C:  106DDF02     SBCSEQ r6, pc, 0x400
		   0x01436C30:  4C03C402     SBCEQ r0, r4, 0x30000001
		   0x01436C34:  3413C402     SBCEQ r1, r4, 0xd0000000
		   0x01436C38:  4862C402     SBCEQ r6, r4, 0x80000004
		   0x01436C3C:  3439C402     SBCEQ r3, r4, 0xd0000
		   0x01436C40:  1403C402     SBCEQ r0, r4, 0x50000000
		   0x01436C44:  A412C402     SBCEQ r1, r4, 0x4000000a
		   0x01436C48:  4838C402     SBCEQ r3, r4, 0x480000
		   0x01436C4C:  4861C402     SBCEQ r6, r4, 0x12
		*/
	}
}
