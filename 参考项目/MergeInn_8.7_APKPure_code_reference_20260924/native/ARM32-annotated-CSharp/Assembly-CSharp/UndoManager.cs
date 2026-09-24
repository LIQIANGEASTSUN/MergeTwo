// Dll : Assembly-CSharp.dll
// Namespace: 
public class UndoManager // TypeDefIndex: 1229
{

	// Fields
	private Cell cell; // 0x8
	private ItemDataSave itemDataSave; // 0xC
	private GameState gameState; // 0x10
	private GoalsController goalsController; // 0x14
	private ItemData itemData; // 0x18
	public Action<ItemData> OnItemChanged; // 0x1C

	// Methods

	// RVA: 0x10F860C Offset: 0x10F860C VA: 0x10F860C
	public void .ctor(GameState gameState, GoalsController goalsController) {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F860C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010F8610:  0160A0E1     MOV r6, r1
		   0x010F8614:  0010A0E3     MOV r1, 0x0
		   0x010F8618:  0250A0E1     MOV r5, r2
		   0x010F861C:  0040A0E1     MOV r4, r0
		   0x010F8620:  71737EEB     BL $+0x1f9cdcc  // CALL → Object..ctor
		   0x010F8624:  106084E5     STR r6, [r4, 0x10]
		   0x010F8628:  145084E5     STR r5, [r4, 0x14]
		   0x010F862C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010F8630:  FFFFFFEA     B $+0x4  // TAIL CALL → UndoManager.ReleaseSavedID
		*/
	}

	// RVA: 0x10F8634 Offset: 0x10F8634 VA: 0x10F8634
	public void ReleaseSavedID() {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 7 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F8634:  10402DE9     PUSH {r4, lr}
		   0x010F8638:  88409FE5     LDR r4, [pc, 0x88]
		   0x010F863C:  04408FE0     ADD r4, pc, r4
		   0x010F8640:  0000D4E5     LDRB r0, [r4]
		   0x010F8644:  000050E3     CMPS r0, r0, 0x0
		   0x010F8648:  0400001A     BNE $+0x18  // if (!=) goto 0x010F8660
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F864C:  78009FE5     LDR r0, [pc, 0x78]
		   0x010F8650:  00009FE7     LDR r0, [pc, r0]
		   0x010F8654:  C18AF9EB     BL $-0x19d4f4
		   0x010F8658:  0100A0E3     MOV r0, 0x1
		   0x010F865C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F8660:  0000A0E3     MOV r0, 0x0
		   0x010F8664:  060902EB     BL $+0x82420  // CALL → ProfileStorage.get_undoID
		   0x010F8668:  000050E3     CMPS r0, r0, 0x0
		   0x010F866C:  1080BD48     POPMI {r4, pc}
		   0x010F8670:  0000A0E3     MOV r0, 0x0
		   0x010F8674:  020902EB     BL $+0x82410  // CALL → ProfileStorage.get_undoID
		   0x010F8678:  D0FEFFEB     BL $-0x4b8
		   0x010F867C:  0000A0E3     MOV r0, 0x0
		   0x010F8680:  FF0802EB     BL $+0x82404  // CALL → ProfileStorage.get_undoID
		   0x010F8684:  0010A0E3     MOV r1, 0x0
		   0x010F8688:  0020A0E3     MOV r2, 0x0
		   0x010F868C:  404200EB     BL $+0x10908  // CALL → ContainerDataStorage.SetContainerCharges
		   0x010F8690:  0000E0E3     MVN r0, r0, 0x0
		   0x010F8694:  0010A0E3     MOV r1, 0x0
		   0x010F8698:  F41402EB     BL $+0x853d8  // CALL → ProfileStorage.set_undoID
		   0x010F869C:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x010F86A0:  00009FE7     LDR r0, [pc, r0]
		   0x010F86A4:  000090E5     LDR r0, [r0]
		   0x010F86A8:  741090E5     LDR r1, [r0, 0x74]
		   0x010F86AC:  000051E3     CMPS r0, r1, 0x0
		   0x010F86B0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F86B8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F86B4:  F68AF9EB     BL $-0x19d420
		   // ──── Block 5 if (!=) ────────────────────
		   0x010F86B8:  0000A0E3     MOV r0, 0x0
		   0x010F86BC:  0010A0E3     MOV r1, 0x0
		   0x010F86C0:  1040BDE8     POP {r4, lr}
		   0x010F86C4:  B746FEEA     B $-0x6e51c
		   0x010F86C8:  06371303     TSTSEQ r3, r3, 0x180000
		   0x010F86CC:  E8EFF702     RSCSEQ lr, r7, 0x3a0
		   0x010F86D0:  98EFF702     RSCSEQ lr, r7, 0x260
		*/
	}

	// RVA: 0x10F86D4 Offset: 0x10F86D4 VA: 0x10F86D4
	public void Save(Cell targetCell) {
		/* Disassembly (ARM32, 229 instructions, 0x394 bytes):
		   // CFG: 38 blocks, 37 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F86D4:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010F86D8:  18D04DE2     SUB sp, sp, 0x18
		   0x010F86DC:  30639FE5     LDR r6, [pc, 0x330]
		   0x010F86E0:  0040A0E1     MOV r4, r0
		   0x010F86E4:  0150A0E1     MOV r5, r1
		   0x010F86E8:  06608FE0     ADD r6, pc, r6
		   0x010F86EC:  0000D6E5     LDRB r0, [r6]
		   0x010F86F0:  000050E3     CMPS r0, r0, 0x0
		   0x010F86F4:  1900001A     BNE $+0x6c  // if (!=) goto 0x010F8760
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F86F8:  18039FE5     LDR r0, [pc, 0x318]
		   0x010F86FC:  00009FE7     LDR r0, [pc, r0]
		   0x010F8700:  968AF9EB     BL $-0x19d5a0
		   0x010F8704:  10039FE5     LDR r0, [pc, 0x310]
		   0x010F8708:  00009FE7     LDR r0, [pc, r0]
		   0x010F870C:  938AF9EB     BL $-0x19d5ac
		   0x010F8710:  08039FE5     LDR r0, [pc, 0x308]
		   0x010F8714:  00009FE7     LDR r0, [pc, r0]
		   0x010F8718:  908AF9EB     BL $-0x19d5b8
		   0x010F871C:  00039FE5     LDR r0, [pc, 0x300]
		   0x010F8720:  00009FE7     LDR r0, [pc, r0]
		   0x010F8724:  8D8AF9EB     BL $-0x19d5c4
		   0x010F8728:  F8029FE5     LDR r0, [pc, 0x2f8]
		   0x010F872C:  00009FE7     LDR r0, [pc, r0]
		   0x010F8730:  8A8AF9EB     BL $-0x19d5d0
		   0x010F8734:  F0029FE5     LDR r0, [pc, 0x2f0]
		   0x010F8738:  00009FE7     LDR r0, [pc, r0]
		   0x010F873C:  878AF9EB     BL $-0x19d5dc
		   0x010F8740:  E8029FE5     LDR r0, [pc, 0x2e8]
		   0x010F8744:  00009FE7     LDR r0, [pc, r0]
		   0x010F8748:  848AF9EB     BL $-0x19d5e8
		   0x010F874C:  E0029FE5     LDR r0, [pc, 0x2e0]
		   0x010F8750:  00009FE7     LDR r0, [pc, r0]
		   0x010F8754:  818AF9EB     BL $-0x19d5f4
		   0x010F8758:  0100A0E3     MOV r0, 0x1
		   0x010F875C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F8760:  D0629FE5     LDR r6, [pc, 0x2d0]
		   0x010F8764:  06609FE7     LDR r6, [pc, r6]
		   0x010F8768:  000096E5     LDR r0, [r6]
		   0x010F876C:  741090E5     LDR r1, [r0, 0x74]
		   0x010F8770:  000051E3     CMPS r0, r1, 0x0
		   0x010F8774:  0000001A     BNE $+0x8  // if (!=) goto 0x010F877C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F8778:  C58AF9EB     BL $-0x19d4e4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F877C:  0500A0E1     MOV r0, r5
		   0x010F8780:  0010A0E3     MOV r1, 0x0
		   0x010F8784:  0020A0E3     MOV r2, 0x0
		   0x010F8788:  C3FD3BEB     BL $+0xeff714  // CALL → sub_1FF7E9C
		   0x010F878C:  000050E3     CMPS r0, r0, 0x0
		   0x010F8790:  0700000A     BEQ $+0x24  // if (==) goto 0x010F87B4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010F8794:  A0029FE5     LDR r0, [pc, 0x2a0]
		   0x010F8798:  00009FE7     LDR r0, [pc, r0]
		   0x010F879C:  000090E5     LDR r0, [r0]
		   0x010F87A0:  078BF9EB     BL $-0x19d3dc
		   0x010F87A4:  0040A0E1     MOV r4, r0
		   0x010F87A8:  90029FE5     LDR r0, [pc, 0x290]
		   0x010F87AC:  00009FE7     LDR r0, [pc, r0]
		   0x010F87B0:  870000EA     B $+0x224  // goto 0x010F89D4
		   // ──── Block 6 if (==) ────────────────────
		   0x010F87B4:  000055E3     CMPS r0, r5, 0x0
		   0x010F87B8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F87C0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F87BC:  038BF9EB     BL $-0x19d3ec
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F87C0:  000096E5     LDR r0, [r6]
		   0x010F87C4:  246095E5     LDR r6, [r5, 0x24]
		   0x010F87C8:  741090E5     LDR r1, [r0, 0x74]
		   0x010F87CC:  000051E3     CMPS r0, r1, 0x0
		   0x010F87D0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F87D8
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F87D4:  AE8AF9EB     BL $-0x19d540
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F87D8:  0600A0E1     MOV r0, r6
		   0x010F87DC:  0010A0E3     MOV r1, 0x0
		   0x010F87E0:  0020A0E3     MOV r2, 0x0
		   0x010F87E4:  ACFD3BEB     BL $+0xeff6b8  // CALL → sub_1FF7E9C
		   0x010F87E8:  000050E3     CMPS r0, r0, 0x0
		   0x010F87EC:  7100001A     BNE $+0x1cc  // if (!=) goto 0x010F89B8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F87F0:  107094E5     LDR r7, [r4, 0x10]
		   0x010F87F4:  246095E5     LDR r6, [r5, 0x24]
		   0x010F87F8:  000057E3     CMPS r0, r7, 0x0
		   0x010F87FC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8804
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010F8800:  F28AF9EB     BL $-0x19d430
		   // ──── Block 13 if (!=) ────────────────────
		   0x010F8804:  0700A0E1     MOV r0, r7
		   0x010F8808:  0610A0E1     MOV r1, r6
		   0x010F880C:  0020A0E3     MOV r2, 0x0
		   0x010F8810:  EEA0FFEB     BL $-0x17c40
		   0x010F8814:  000050E3     CMPS r0, r0, 0x0
		   0x010F8818:  0C0084E5     STR r0, [r4, 0xc]
		   0x010F881C:  6500000A     BEQ $+0x19c  // if (==) goto 0x010F89B8
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x010F8820:  246095E5     LDR r6, [r5, 0x24]
		   0x010F8824:  000056E3     CMPS r0, r6, 0x0
		   0x010F8828:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8830
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010F882C:  E78AF9EB     BL $-0x19d45c
		   // ──── Block 16 if (!=) ────────────────────
		   0x010F8830:  340096E5     LDR r0, [r6, 0x34]
		   0x010F8834:  0010A0E3     MOV r1, 0x0
		   0x010F8838:  8C1402EB     BL $+0x85238  // CALL → ProfileStorage.set_undoID
		   0x010F883C:  246095E5     LDR r6, [r5, 0x24]
		   0x010F8840:  000056E3     CMPS r0, r6, 0x0
		   0x010F8844:  0000001A     BNE $+0x8  // if (!=) goto 0x010F884C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010F8848:  E08AF9EB     BL $-0x19d478
		   // ──── Block 18 if (!=) ────────────────────
		   0x010F884C:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x010F8850:  841096E5     LDR r1, [r6, 0x84]
		   0x010F8854:  000050E3     CMPS r0, r0, 0x0
		   0x010F8858:  181084E5     STR r1, [r4, 0x18]
		   0x010F885C:  0300000A     BEQ $+0x14  // if (==) goto 0x010F8870
		   // 
		   // ──── Block 19 else (!=) ────────────────────
		   0x010F8860:  0C3090E5     LDR r3, [r0, 0xc]
		   0x010F8864:  142090E5     LDR r2, [r0, 0x14]
		   0x010F8868:  200090E5     LDR r0, [r0, 0x20]
		   0x010F886C:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 20 if (==) ────────────────────
		   0x010F8870:  246095E5     LDR r6, [r5, 0x24]
		   0x010F8874:  000056E3     CMPS r0, r6, 0x0
		   0x010F8878:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8880
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010F887C:  D38AF9EB     BL $-0x19d4ac
		   // ──── Block 22 if (!=) ────────────────────
		   0x010F8880:  000096E5     LDR r0, [r6]
		   0x010F8884:  702190E5     LDR r2, [r0, 0x170]
		   0x010F8888:  741190E5     LDR r1, [r0, 0x174]
		   0x010F888C:  0600A0E1     MOV r0, r6
		   0x010F8890:  32FF2FE1     BLX r2  // virtual call: vtable+0x170
		   0x010F8894:  0500A0E1     MOV r0, r5
		   0x010F8898:  0010A0E3     MOV r1, 0x0
		   0x010F889C:  0020A0E3     MOV r2, 0x0
		   0x010F88A0:  085084E5     STR r5, [r4, 0x8]
		   0x010F88A4:  0070A0E3     MOV r7, 0x0
		   0x010F88A8:  F450FFEB     BL $-0x2bc28
		   0x010F88AC:  9C519FE5     LDR r5, [pc, 0x19c]
		   0x010F88B0:  05508FE0     ADD r5, pc, r5
		   0x010F88B4:  0000D5E5     LDRB r0, [r5]
		   0x010F88B8:  000050E3     CMPS r0, r0, 0x0
		   0x010F88BC:  0400001A     BNE $+0x18  // if (!=) goto 0x010F88D4
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010F88C0:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x010F88C4:  00009FE7     LDR r0, [pc, r0]
		   0x010F88C8:  248AF9EB     BL $-0x19d768
		   0x010F88CC:  0100A0E3     MOV r0, 0x1
		   0x010F88D0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 24 if (!=) ────────────────────
		   0x010F88D4:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x010F88D8:  00009FE7     LDR r0, [pc, r0]
		   0x010F88DC:  000090E5     LDR r0, [r0]
		   0x010F88E0:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010F88E4:  70019FE5     LDR r0, [pc, 0x170]
		   0x010F88E8:  00009FE7     LDR r0, [pc, r0]
		   0x010F88EC:  086091E5     LDR r6, [r1, 0x8]
		   0x010F88F0:  000090E5     LDR r0, [r0]
		   0x010F88F4:  B28AF9EB     BL $-0x19d530
		   0x010F88F8:  0310A0E3     MOV r1, 0x3
		   0x010F88FC:  0520A0E3     MOV r2, 0x5
		   0x010F8900:  0E30A0E3     MOV r3, 0xe
		   0x010F8904:  0050A0E1     MOV r5, r0
		   0x010F8908:  F060CDE1     STRD r6, r7, [sp]
		   0x010F890C:  E58A08EB     BL $+0x222b9c  // CALL → EnumCurrencySourceDataContainer..ctor
		   0x010F8910:  48019FE5     LDR r0, [pc, 0x148]
		   0x010F8914:  00009FE7     LDR r0, [pc, r0]
		   0x010F8918:  000090E5     LDR r0, [r0]
		   0x010F891C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F8920:  007090E5     LDR r7, [r0]
		   0x010F8924:  000057E3     CMPS r0, r7, 0x0
		   0x010F8928:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8930
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x010F892C:  A78AF9EB     BL $-0x19d55c
		   // ──── Block 26 if (!=) ────────────────────
		   0x010F8930:  186094E5     LDR r6, [r4, 0x18]
		   0x010F8934:  144097E5     LDR r4, [r7, 0x14]
		   0x010F8938:  000056E3     CMPS r0, r6, 0x0
		   0x010F893C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8944
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x010F8940:  A28AF9EB     BL $-0x19d570
		   // ──── Block 28 if (!=) ────────────────────
		   0x010F8944:  0600A0E1     MOV r0, r6
		   0x010F8948:  0010A0E3     MOV r1, 0x0
		   0x010F894C:  EC7300EB     BL $+0x1cfb8  // CALL → ItemData.GetCostCoins
		   0x010F8950:  0060A0E1     MOV r6, r0
		   0x010F8954:  000055E3     CMPS r0, r5, 0x0
		   0x010F8958:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8960
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x010F895C:  9B8AF9EB     BL $-0x19d58c
		   // ──── Block 30 if (!=) ────────────────────
		   0x010F8960:  088095E5     LDR r8, [r5, 0x8]
		   0x010F8964:  000054E3     CMPS r0, r4, 0x0
		   0x010F8968:  0C5095E5     LDR r5, [r5, 0xc]
		   0x010F896C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8974
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x010F8970:  968AF9EB     BL $-0x19d5a0
		   // ──── Block 32 if (!=) ────────────────────
		   0x010F8974:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x010F8978:  0010A0E3     MOV r1, 0x0
		   0x010F897C:  0020E0E3     MVN r2, r0, 0x0
		   0x010F8980:  0530A0E1     MOV r3, r5
		   0x010F8984:  00009FE7     LDR r0, [pc, r0]
		   0x010F8988:  000090E5     LDR r0, [r0]
		   0x010F898C:  10208DE5     STR r2, [sp, 0x10]
		   0x010F8990:  0820A0E1     MOV r2, r8
		   0x010F8994:  03008DE8     STM sp, {r0, r1}
		   0x010F8998:  0C008DE5     STR r0, [sp, 0xc]
		   0x010F899C:  0400A0E1     MOV r0, r4
		   0x010F89A0:  08108DE5     STR r1, [sp, 0x8]
		   0x010F89A4:  14108DE5     STR r1, [sp, 0x14]
		   0x010F89A8:  0610A0E1     MOV r1, r6
		   0x010F89AC:  73DA0CEB     BL $+0x3369d4  // CALL → CoinsSystem.AddCoins
		   0x010F89B0:  18D08DE2     ADD sp, sp, 0x18
		   0x010F89B4:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   // ──── Block 33 (from 2 paths) ──────────────────
		   0x010F89B8:  88009FE5     LDR r0, [pc, 0x88]
		   0x010F89BC:  00009FE7     LDR r0, [pc, r0]
		   0x010F89C0:  000090E5     LDR r0, [r0]
		   0x010F89C4:  7E8AF9EB     BL $-0x19d600
		   0x010F89C8:  0040A0E1     MOV r4, r0
		   0x010F89CC:  78009FE5     LDR r0, [pc, 0x78]
		   0x010F89D0:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 34 ──────────────────────────────
		   0x010F89D4:  001090E5     LDR r1, [r0]
		   0x010F89D8:  0400A0E1     MOV r0, r4
		   0x010F89DC:  0020A0E3     MOV r2, 0x0
		   0x010F89E0:  95417EEB     BL $+0x1f9065c  // CALL → Exception..ctor
		   0x010F89E4:  58009FE5     LDR r0, [pc, 0x58]
		   0x010F89E8:  00009FE7     LDR r0, [pc, r0]
		   0x010F89EC:  000090E5     LDR r0, [r0]
		   0x010F89F0:  741090E5     LDR r1, [r0, 0x74]
		   0x010F89F4:  000051E3     CMPS r0, r1, 0x0
		   0x010F89F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8A00
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x010F89FC:  248AF9EB     BL $-0x19d768
		   // ──── Block 36 if (!=) ────────────────────
		   0x010F8A00:  0400A0E1     MOV r0, r4
		   0x010F8A04:  0010A0E3     MOV r1, 0x0
		   0x010F8A08:  18D08DE2     ADD sp, sp, 0x18
		   0x010F8A0C:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x010F8A10:  DDFD3BEA     B $+0xeff77c
		   0x010F8A14:  5B361303     TSTSEQ r3, r3, 0x5b00000
		   0x010F8A18:  00F5F702     RSCSEQ pc, r7, 0x0
		   0x010F8A1C:  80DEF702     RSCSEQ sp, r7, 0x800
		   0x010F8A20:  9C00F802     RSCSEQ r0, r8, 0x9c
		   0x010F8A24:  CCE1F702     RSCSEQ lr, r7, 0x33
		   0x010F8A28:  0CDEF702     RSCSEQ sp, r7, 0xc0
		   0x010F8A2C:  140FF802     RSCSEQ r0, r8, 0x50
		   0x010F8A30:  0C0FF802     RSCSEQ r0, r8, 0x30
		   0x010F8A34:  F0E2F702     RSCSEQ lr, r7, 0xf
		   0x010F8A38:  D4DDF702     RSCSEQ sp, r7, 0x3500
		   0x010F8A3C:  54E1F702     RSCSEQ lr, r7, 0x15
		   0x010F8A40:  A00EF802     RSCSEQ r0, r8, 0xa00
		   0x010F8A44:  A0DBF702     RSCSEQ sp, r7, 0x28000
		   0x010F8A48:  30DFF702     RSCSEQ sp, r7, 0xc0
		   0x010F8A4C:  800CF802     RSCSEQ r0, r8, 0x8000
		   0x010F8A50:  31341303     TSTSEQ r3, r3, 0x31000000
		   0x010F8A54:  8C0AF802     RSCSEQ r0, r8, 0x8c000
		   0x010F8A58:  780AF802     RSCSEQ r0, r8, 0x78000
		   0x010F8A5C:  C8FEF702     RSCSEQ pc, r7, 0xc80
		   0x010F8A60:  E8F2F702     RSCSEQ pc, r7, 0x8000000e
		   0x010F8A64:  BCE0F702     RSCSEQ lr, r7, 0xbc
		*/
	}

	// RVA: 0x10F8A68 Offset: 0x10F8A68 VA: 0x10F8A68
	public Cell Restore() {
		/* Disassembly (ARM32, 271 instructions, 0x43C bytes):
		   // CFG: 48 blocks, 51 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F8A68:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010F8A6C:  18D04DE2     SUB sp, sp, 0x18
		   0x010F8A70:  F0439FE5     LDR r4, [pc, 0x3f0]
		   0x010F8A74:  0080A0E1     MOV r8, r0
		   0x010F8A78:  04408FE0     ADD r4, pc, r4
		   0x010F8A7C:  0000D4E5     LDRB r0, [r4]
		   0x010F8A80:  000050E3     CMPS r0, r0, 0x0
		   0x010F8A84:  1300001A     BNE $+0x54  // if (!=) goto 0x010F8AD8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F8A88:  DC039FE5     LDR r0, [pc, 0x3dc]
		   0x010F8A8C:  00009FE7     LDR r0, [pc, r0]
		   0x010F8A90:  B289F9EB     BL $-0x19d930
		   0x010F8A94:  D4039FE5     LDR r0, [pc, 0x3d4]
		   0x010F8A98:  00009FE7     LDR r0, [pc, r0]
		   0x010F8A9C:  AF89F9EB     BL $-0x19d93c
		   0x010F8AA0:  CC039FE5     LDR r0, [pc, 0x3cc]
		   0x010F8AA4:  00009FE7     LDR r0, [pc, r0]
		   0x010F8AA8:  AC89F9EB     BL $-0x19d948
		   0x010F8AAC:  C4039FE5     LDR r0, [pc, 0x3c4]
		   0x010F8AB0:  00009FE7     LDR r0, [pc, r0]
		   0x010F8AB4:  A989F9EB     BL $-0x19d954
		   0x010F8AB8:  BC039FE5     LDR r0, [pc, 0x3bc]
		   0x010F8ABC:  00009FE7     LDR r0, [pc, r0]
		   0x010F8AC0:  A689F9EB     BL $-0x19d960
		   0x010F8AC4:  B4039FE5     LDR r0, [pc, 0x3b4]
		   0x010F8AC8:  00009FE7     LDR r0, [pc, r0]
		   0x010F8ACC:  A389F9EB     BL $-0x19d96c
		   0x010F8AD0:  0100A0E3     MOV r0, 0x1
		   0x010F8AD4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F8AD8:  084098E5     LDR r4, [r8, 0x8]
		   0x010F8ADC:  0000A0E3     MOV r0, 0x0
		   0x010F8AE0:  0C008DE5     STR r0, [sp, 0xc]
		   0x010F8AE4:  000054E3     CMPS r0, r4, 0x0
		   0x010F8AE8:  08008DE5     STR r0, [sp, 0x8]
		   0x010F8AEC:  0450A0E1     MOV r5, r4
		   0x010F8AF0:  10008DE5     STR r0, [sp, 0x10]
		   0x010F8AF4:  0100001A     BNE $+0xc  // if (!=) goto 0x010F8B00
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F8AF8:  348AF9EB     BL $-0x19d728
		   0x010F8AFC:  085098E5     LDR r5, [r8, 0x8]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F8B00:  2800D4E5     LDRB r0, [r4, 0x28]
		   0x010F8B04:  000050E3     CMPS r0, r0, 0x0
		   0x010F8B08:  C400000A     BEQ $+0x318  // if (==) goto 0x010F8E20
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010F8B0C:  DC60C8E1     LDRD r6, r7, [r8, 0xc]
		   0x010F8B10:  000057E3     CMPS r0, r7, 0x0
		   0x010F8B14:  184098E5     LDR r4, [r8, 0x18]
		   0x010F8B18:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8B20
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010F8B1C:  2B8AF9EB     BL $-0x19d74c
		   // ──── Block 7 if (!=) ────────────────────
		   0x010F8B20:  0000A0E3     MOV r0, 0x0
		   0x010F8B24:  0610A0E1     MOV r1, r6
		   0x010F8B28:  00008DE5     STR r0, [sp]
		   0x010F8B2C:  0700A0E1     MOV r0, r7
		   0x010F8B30:  0420A0E1     MOV r2, r4
		   0x010F8B34:  0530A0E1     MOV r3, r5
		   0x010F8B38:  BEA2FFEB     BL $-0x17500
		   0x010F8B3C:  184098E5     LDR r4, [r8, 0x18]
		   0x010F8B40:  0050A0E1     MOV r5, r0
		   0x010F8B44:  000054E3     CMPS r0, r4, 0x0
		   0x010F8B48:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8B50
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010F8B4C:  1F8AF9EB     BL $-0x19d77c
		   // ──── Block 9 if (!=) ────────────────────
		   0x010F8B50:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010F8B54:  0D0050E3     CMPS r0, r0, 0xd
		   0x010F8B58:  B300008A     BHI $+0x2d4  // if (> (unsigned)) goto 0x010F8E2C
		   // 
		   // ──── Block 10 else (<= (unsigned)) ────────────────────
		   0x010F8B5C:  04108FE2     ADR r1, pc, 0x4
		   0x010F8B60:  000191E7     LDR r0, [r1, r0, lsl 2]
		   0x010F8B64:  00F081E0     ADD pc, r1, r0
		   0x010F8B68:  D4010000     LDRDEQ r0, r1, [r0], -r4
		   0x010F8B6C:  28010000     ANDEQ r0, r0, r8, lsr 2
		   0x010F8B70:  D4010000     LDRDEQ r0, r1, [r0], -r4
		   0x010F8B74:  B0000000     STRHEQ r0, [r0], -r0
		   0x010F8B78:  D4010000     LDRDEQ r0, r1, [r0], -r4
		   0x010F8B7C:  D4010000     LDRDEQ r0, r1, [r0], -r4
		   0x010F8B80:  D4010000     LDRDEQ r0, r1, [r0], -r4
		   0x010F8B84:  4C010000     ANDEQ r0, r0, ip, asr 2
		   0x010F8B88:  28010000     ANDEQ r0, r0, r8, lsr 2
		   0x010F8B8C:  B0000000     STRHEQ r0, [r0], -r0
		   0x010F8B90:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x010F8B94:  C4020000     ANDEQ r0, r0, r4, asr 5
		   0x010F8B98:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x010F8B9C:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x010F8BA0:  000055E3     CMPS r0, r5, 0x0
		   0x010F8BA4:  3E00000A     BEQ $+0x100  // if (==) goto 0x010F8CA4
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010F8BA8:  E0429FE5     LDR r4, [pc, 0x2e0]
		   0x010F8BAC:  04409FE7     LDR r4, [pc, r4]
		   0x010F8BB0:  002095E5     LDR r2, [r5]
		   0x010F8BB4:  001094E5     LDR r1, [r4]
		   0x010F8BB8:  B870D2E5     LDRB r7, [r2, 0xb8]
		   0x010F8BBC:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010F8BC0:  030057E1     CMPS r0, r7, r3
		   0x010F8BC4:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x010F8BDC
		   // 
		   // ──── Block 12 else (>= (unsigned)) ────────────────────
		   0x010F8BC8:  640092E5     LDR r0, [r2, 0x64]
		   0x010F8BCC:  030180E0     ADD r0, r0, r3, lsl 2
		   0x010F8BD0:  040010E5     LDR r0, [r0, -0x4]
		   0x010F8BD4:  010050E1     CMPS r0, r0, r1
		   0x010F8BD8:  0400000A     BEQ $+0x18  // if (==) goto 0x010F8BF0
		   // 
		   // ──── Block 13 (from 2 paths) ──────────────────
		   0x010F8BDC:  FB89F9EB     BL $-0x19d80c
		   0x010F8BE0:  001094E5     LDR r1, [r4]
		   0x010F8BE4:  002095E5     LDR r2, [r5]
		   0x010F8BE8:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010F8BEC:  B870D2E5     LDRB r7, [r2, 0xb8]
		   // ──── Block 14 if (==) ────────────────────
		   0x010F8BF0:  0000A0E3     MOV r0, 0x0
		   0x010F8BF4:  030057E1     CMPS r0, r7, r3
		   0x010F8BF8:  2B00003A     BLO $+0xb4  // if (< (unsigned)) goto 0x010F8CAC
		   // 
		   // ──── Block 15 else (>= (unsigned)) ────────────────────
		   0x010F8BFC:  640092E5     LDR r0, [r2, 0x64]
		   0x010F8C00:  030180E0     ADD r0, r0, r3, lsl 2
		   0x010F8C04:  040010E5     LDR r0, [r0, -0x4]
		   0x010F8C08:  010050E1     CMPS r0, r0, r1
		   0x010F8C0C:  0050A013     MOVNE r5, 0x0
		   0x010F8C10:  0500A0E1     MOV r0, r5
		   0x010F8C14:  240000EA     B $+0x98  // goto 0x010F8CAC
		   0x010F8C18:  000055E3     CMPS r0, r5, 0x0
		   0x010F8C1C:  4200000A     BEQ $+0x110  // if (==) goto 0x010F8D2C
		   // 
		   // ──── Block 17 else (!=) ────────────────────
		   0x010F8C20:  60429FE5     LDR r4, [pc, 0x260]
		   0x010F8C24:  04409FE7     LDR r4, [pc, r4]
		   0x010F8C28:  002095E5     LDR r2, [r5]
		   0x010F8C2C:  001094E5     LDR r1, [r4]
		   0x010F8C30:  B870D2E5     LDRB r7, [r2, 0xb8]
		   0x010F8C34:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010F8C38:  030057E1     CMPS r0, r7, r3
		   0x010F8C3C:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x010F8C54
		   // 
		   // ──── Block 18 else (>= (unsigned)) ────────────────────
		   0x010F8C40:  640092E5     LDR r0, [r2, 0x64]
		   0x010F8C44:  030180E0     ADD r0, r0, r3, lsl 2
		   0x010F8C48:  040010E5     LDR r0, [r0, -0x4]
		   0x010F8C4C:  010050E1     CMPS r0, r0, r1
		   0x010F8C50:  0400000A     BEQ $+0x18  // if (==) goto 0x010F8C68
		   // 
		   // ──── Block 19 (from 2 paths) ──────────────────
		   0x010F8C54:  DD89F9EB     BL $-0x19d884
		   0x010F8C58:  001094E5     LDR r1, [r4]
		   0x010F8C5C:  002095E5     LDR r2, [r5]
		   0x010F8C60:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010F8C64:  B870D2E5     LDRB r7, [r2, 0xb8]
		   // ──── Block 20 if (==) ────────────────────
		   0x010F8C68:  0000A0E3     MOV r0, 0x0
		   0x010F8C6C:  030057E1     CMPS r0, r7, r3
		   0x010F8C70:  2F00003A     BLO $+0xc4  // if (< (unsigned)) goto 0x010F8D34
		   // 
		   // ──── Block 21 else (>= (unsigned)) ────────────────────
		   0x010F8C74:  640092E5     LDR r0, [r2, 0x64]
		   0x010F8C78:  030180E0     ADD r0, r0, r3, lsl 2
		   0x010F8C7C:  040010E5     LDR r0, [r0, -0x4]
		   0x010F8C80:  010050E1     CMPS r0, r0, r1
		   0x010F8C84:  0050A013     MOVNE r5, 0x0
		   0x010F8C88:  0500A0E1     MOV r0, r5
		   0x010F8C8C:  280000EA     B $+0xa8  // goto 0x010F8D34
		   0x010F8C90:  000055E3     CMPS r0, r5, 0x0
		   0x010F8C94:  7200000A     BEQ $+0x1d0  // if (==) goto 0x010F8E64
		   // 
		   // ──── Block 23 else (!=) ────────────────────
		   0x010F8C98:  E4419FE5     LDR r4, [pc, 0x1e4]
		   0x010F8C9C:  04409FE7     LDR r4, [pc, r4]
		   0x010F8CA0:  070000EA     B $+0x24  // goto 0x010F8CC4
		   // ──── Block 24 if (==) ────────────────────
		   0x010F8CA4:  C989F9EB     BL $-0x19d8d4
		   0x010F8CA8:  0000A0E3     MOV r0, 0x0
		   // ──── Block 25 if (< (unsigned)) ────────────────────
		   0x010F8CAC:  7C0000EB     BL $+0x1f8  // CALL → ItemChargeableContainer.Restore
		   0x010F8CB0:  210000EA     B $+0x8c  // goto 0x010F8D3C
		   0x010F8CB4:  000055E3     CMPS r0, r5, 0x0
		   0x010F8CB8:  6900000A     BEQ $+0x1ac  // if (==) goto 0x010F8E64
		   // 
		   // ──── Block 27 else (!=) ────────────────────
		   0x010F8CBC:  C8419FE5     LDR r4, [pc, 0x1c8]
		   0x010F8CC0:  04409FE7     LDR r4, [pc, r4]
		   // ──── Block 28 ──────────────────────────────
		   0x010F8CC4:  000094E5     LDR r0, [r4]
		   0x010F8CC8:  001095E5     LDR r1, [r5]
		   0x010F8CCC:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010F8CD0:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010F8CD4:  020053E1     CMPS r0, r3, r2
		   0x010F8CD8:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x010F8CF0
		   // 
		   // ──── Block 29 else (>= (unsigned)) ────────────────────
		   0x010F8CDC:  641091E5     LDR r1, [r1, 0x64]
		   0x010F8CE0:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010F8CE4:  041011E5     LDR r1, [r1, -0x4]
		   0x010F8CE8:  000051E1     CMPS r0, r1, r0
		   0x010F8CEC:  0600000A     BEQ $+0x20  // if (==) goto 0x010F8D0C
		   // 
		   // ──── Block 30 (from 2 paths) ──────────────────
		   0x010F8CF0:  B689F9EB     BL $-0x19d920
		   0x010F8CF4:  000094E5     LDR r0, [r4]
		   0x010F8CF8:  001095E5     LDR r1, [r5]
		   0x010F8CFC:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010F8D00:  641091E5     LDR r1, [r1, 0x64]
		   0x010F8D04:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010F8D08:  041011E5     LDR r1, [r1, -0x4]
		   // ──── Block 31 if (==) ────────────────────
		   0x010F8D0C:  000051E1     CMPS r0, r1, r0
		   0x010F8D10:  0050A013     MOVNE r5, 0x0
		   0x010F8D14:  000095E5     LDR r0, [r5]
		   0x010F8D18:  582290E5     LDR r2, [r0, 0x258]
		   0x010F8D1C:  5C1290E5     LDR r1, [r0, 0x25c]
		   0x010F8D20:  0500A0E1     MOV r0, r5
		   0x010F8D24:  32FF2FE1     BLX r2  // virtual call: vtable+0x258
		   0x010F8D28:  030000EA     B $+0x14  // goto 0x010F8D3C
		   // ──── Block 32 if (==) ────────────────────
		   0x010F8D2C:  A789F9EB     BL $-0x19d95c
		   0x010F8D30:  0000A0E3     MOV r0, 0x0
		   // ──── Block 33 if (< (unsigned)) ────────────────────
		   0x010F8D34:  0010A0E3     MOV r1, 0x0
		   0x010F8D38:  DC7F00EB     BL $+0x1ff78  // CALL → ItemFiniteContainer.Restore
		   // ──── Block 34 ──────────────────────────────
		   0x010F8D3C:  0010A0E3     MOV r1, 0x0
		   0x010F8D40:  1E00A0E3     MOV r0, 0x1e
		   0x010F8D44:  F000CDE1     STRD r0, r1, [sp]
		   0x010F8D48:  08008DE2     ADD r0, sp, 0x8
		   0x010F8D4C:  1520A0E3     MOV r2, 0x15
		   0x010F8D50:  1630A0E3     MOV r3, 0x16
		   0x010F8D54:  8F8908EB     BL $+0x222644  // CALL → CurrencySinkDataContainer..ctor
		   0x010F8D58:  34019FE5     LDR r0, [pc, 0x134]
		   0x010F8D5C:  00009FE7     LDR r0, [pc, r0]
		   0x010F8D60:  000090E5     LDR r0, [r0]
		   0x010F8D64:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F8D68:  005090E5     LDR r5, [r0]
		   0x010F8D6C:  000055E3     CMPS r0, r5, 0x0
		   0x010F8D70:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8D78
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x010F8D74:  9589F9EB     BL $-0x19d9a4
		   // ──── Block 36 if (!=) ────────────────────
		   0x010F8D78:  184098E5     LDR r4, [r8, 0x18]
		   0x010F8D7C:  145095E5     LDR r5, [r5, 0x14]
		   0x010F8D80:  000054E3     CMPS r0, r4, 0x0
		   0x010F8D84:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8D8C
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x010F8D88:  9089F9EB     BL $-0x19d9b8
		   // ──── Block 38 if (!=) ────────────────────
		   0x010F8D8C:  0400A0E1     MOV r0, r4
		   0x010F8D90:  0010A0E3     MOV r1, 0x0
		   0x010F8D94:  0090A0E3     MOV sb, 0x0
		   0x010F8D98:  D97200EB     BL $+0x1cb6c  // CALL → ItemData.GetCostCoins
		   0x010F8D9C:  08709DE5     LDR r7, [sp, 0x8]
		   0x010F8DA0:  0060A0E1     MOV r6, r0
		   0x010F8DA4:  0C409DE5     LDR r4, [sp, 0xc]
		   0x010F8DA8:  000055E3     CMPS r0, r5, 0x0
		   0x010F8DAC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8DB4
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x010F8DB0:  8689F9EB     BL $-0x19d9e0
		   // ──── Block 40 if (!=) ────────────────────
		   0x010F8DB4:  0500A0E1     MOV r0, r5
		   0x010F8DB8:  0610A0E1     MOV r1, r6
		   0x010F8DBC:  0720A0E1     MOV r2, r7
		   0x010F8DC0:  0430A0E1     MOV r3, r4
		   0x010F8DC4:  00908DE5     STR sb, [sp]
		   0x010F8DC8:  11DA0CEB     BL $+0x33684c  // CALL → CoinsSystem.SpendCoins
		   0x010F8DCC:  0000E0E3     MVN r0, r0, 0x0
		   0x010F8DD0:  0010A0E3     MOV r1, 0x0
		   0x010F8DD4:  251302EB     BL $+0x84c9c  // CALL → ProfileStorage.set_undoID
		   0x010F8DD8:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010F8DDC:  00009FE7     LDR r0, [pc, r0]
		   0x010F8DE0:  000090E5     LDR r0, [r0]
		   0x010F8DE4:  741090E5     LDR r1, [r0, 0x74]
		   0x010F8DE8:  000051E3     CMPS r0, r1, 0x0
		   0x010F8DEC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8DF4
		   // 
		   // ──── Block 41 else (==) ────────────────────
		   0x010F8DF0:  2789F9EB     BL $-0x19db5c
		   // ──── Block 42 if (!=) ────────────────────
		   0x010F8DF4:  0000A0E3     MOV r0, 0x0
		   0x010F8DF8:  0010A0E3     MOV r1, 0x0
		   0x010F8DFC:  E944FEEB     BL $-0x6ec54
		   0x010F8E00:  144098E5     LDR r4, [r8, 0x14]
		   0x010F8E04:  000054E3     CMPS r0, r4, 0x0
		   0x010F8E08:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8E10
		   // 
		   // ──── Block 43 else (==) ────────────────────
		   0x010F8E0C:  6F89F9EB     BL $-0x19da3c
		   // ──── Block 44 if (!=) ────────────────────
		   0x010F8E10:  0400A0E1     MOV r0, r4
		   0x010F8E14:  0010A0E3     MOV r1, 0x0
		   0x010F8E18:  A3E0FFEB     BL $-0x7d6c
		   0x010F8E1C:  085098E5     LDR r5, [r8, 0x8]
		   // ──── Block 45 if (==) ────────────────────
		   0x010F8E20:  0500A0E1     MOV r0, r5
		   0x010F8E24:  18D08DE2     ADD sp, sp, 0x18
		   0x010F8E28:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   // ──── Block 46 if (> (unsigned)) ────────────────────
		   0x010F8E2C:  68009FE5     LDR r0, [pc, 0x68]
		   0x010F8E30:  00009FE7     LDR r0, [pc, r0]
		   0x010F8E34:  CD88F9EB     BL $-0x19dcc4
		   0x010F8E38:  6189F9EB     BL $-0x19da74
		   0x010F8E3C:  0010A0E3     MOV r1, 0x0
		   0x010F8E40:  0040A0E1     MOV r4, r0
		   0x010F8E44:  CFD97AEB     BL $+0x1eb6744  // CALL → ArgumentOutOfRangeException..ctor
		   0x010F8E48:  50009FE5     LDR r0, [pc, 0x50]
		   0x010F8E4C:  00009FE7     LDR r0, [pc, r0]
		   0x010F8E50:  C688F9EB     BL $-0x19dce0
		   0x010F8E54:  0010A0E1     MOV r1, r0
		   0x010F8E58:  0400A0E1     MOV r0, r4
		   0x010F8E5C:  0789F9EB     BL $-0x19dbdc
		   0x010F8E60:  A888F9EB     BL $-0x19dd58
		   // ──── Block 47 (from 2 paths) ──────────────────
		   0x010F8E64:  5989F9EB     BL $-0x19da94
		   0x010F8E68:  CC321303     TSTSEQ r3, r3, 0xc000000c
		   0x010F8E6C:  70F1F702     RSCSEQ pc, r7, 0x1c
		   0x010F8E70:  A0EBF702     RSCSEQ lr, r7, 0x28000
		   0x010F8E74:  1805F802     RSCSEQ r0, r8, 0x6000000
		   0x010F8E78:  1005F802     RSCSEQ r0, r8, 0x4000000
		   0x010F8E7C:  0C05F802     RSCSEQ r0, r8, 0x3000000
		   0x010F8E80:  2C04F802     RSCSEQ r0, r8, 0x2c000000
		   0x010F8E84:  2C03F802     RSCSEQ r0, r8, 0xb0000000
		   0x010F8E88:  D002F802     RSCSEQ r0, r8, 0xd
		   0x010F8E8C:  FC02F802     RSCSEQ r0, r8, 0xc000000f
		   0x010F8E90:  1404F802     RSCSEQ r0, r8, 0x14000000
		   0x010F8E94:  A0EEF702     RSCSEQ lr, r7, 0xa00
		   0x010F8E98:  5CE8F702     RSCSEQ lr, r7, 0x5c0000
		   0x010F8E9C:  84E1F702     RSCSEQ lr, r7, 0x21
		   0x010F8EA0:  0808F802     RSCSEQ r0, r8, 0x80000
		*/
	}
}
