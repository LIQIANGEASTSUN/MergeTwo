// Dll : Assembly-CSharp.dll
// Namespace: 
public static class ContainerDataStorage // TypeDefIndex: 1284
{

	// Fields
	public const string CONTAINER_RUNTIME_CHARGE_DATA = "ProfileStorage_containerCapacity";
	private const string CONTAINER_ENERGY_CONSUMPTION_MODE = "ContainerDataStorage_energyConsumptionMode";
	[CompilerGenerated]
	private static Action<EnergyConsumptionMode> onEnergyConsumptionModeChanged; // 0x0
	private static Nullable<EnergyConsumptionMode> energyConsumptionMode; // 0x4

	// Properties
	public static EnergyConsumptionMode EnergyConsumptionMode { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1108A50 Offset: 0x1108A50 VA: 0x1108A50
	public static void add_onEnergyConsumptionModeChanged(Action<EnergyConsumptionMode> value) {
		/* Disassembly (ARM32, 53 instructions, 0xD4 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01108A50:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01108A54:  B4409FE5     LDR r4, [pc, 0xb4]
		   0x01108A58:  0080A0E1     MOV r8, r0
		   0x01108A5C:  04408FE0     ADD r4, pc, r4
		   0x01108A60:  0000D4E5     LDRB r0, [r4]
		   0x01108A64:  000050E3     CMPS r0, r0, 0x0
		   0x01108A68:  0700001A     BNE $+0x24  // if (!=) goto 0x01108A8C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108A6C:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x01108A70:  00009FE7     LDR r0, [pc, r0]
		   0x01108A74:  B949F9EB     BL $-0x1ad914
		   0x01108A78:  98009FE5     LDR r0, [pc, 0x98]
		   0x01108A7C:  00009FE7     LDR r0, [pc, r0]
		   0x01108A80:  B649F9EB     BL $-0x1ad920
		   0x01108A84:  0100A0E3     MOV r0, 0x1
		   0x01108A88:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108A8C:  88909FE5     LDR sb, [pc, 0x88]
		   0x01108A90:  09909FE7     LDR sb, [pc, sb]
		   0x01108A94:  000099E5     LDR r0, [sb]
		   0x01108A98:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01108A9C:  000090E5     LDR r0, [r0]
		   0x01108AA0:  78A09FE5     LDR r10, [pc, 0x78]
		   0x01108AA4:  0AA09FE7     LDR r10, [pc, r10]
		   0x01108AA8:  0810A0E1     MOV r1, r8
		   0x01108AAC:  0020A0E3     MOV r2, 0x0
		   0x01108AB0:  0050A0E1     MOV r5, r0
		   0x01108AB4:  0060A0E3     MOV r6, 0x0
		   0x01108AB8:  9E427EEB     BL $+0x1f90a80  // CALL → Delegate.Combine
		   0x01108ABC:  000050E3     CMPS r0, r0, 0x0
		   0x01108AC0:  0A00000A     BEQ $+0x30  // if (==) goto 0x01108AF0
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01108AC4:  00409AE5     LDR r4, [r10]
		   0x01108AC8:  0070A0E1     MOV r7, r0
		   0x01108ACC:  0410A0E1     MOV r1, r4
		   0x01108AD0:  F049F9EB     BL $-0x1ad838
		   0x01108AD4:  0060A0E1     MOV r6, r0
		   0x01108AD8:  000050E3     CMPS r0, r0, 0x0
		   0x01108ADC:  0300001A     BNE $+0x14  // if (!=) goto 0x01108AF0
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01108AE0:  0700A0E1     MOV r0, r7
		   0x01108AE4:  0410A0E1     MOV r1, r4
		   0x01108AE8:  264BF9EB     BL $-0x1ad360
		   0x01108AEC:  0060A0E3     MOV r6, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01108AF0:  000099E5     LDR r0, [sb]
		   0x01108AF4:  0610A0E1     MOV r1, r6
		   0x01108AF8:  0520A0E1     MOV r2, r5
		   0x01108AFC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01108B00:  5C36FAEB     BL $-0x172688
		   0x01108B04:  050050E1     CMPS r0, r0, r5
		   0x01108B08:  E6FFFF1A     BNE $-0x60
		   // ──── Block 6 else (==) ────────────────────
		   0x01108B0C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01108B10:  79331203     TSTSEQ r3, r2, 0xe4000001
		   0x01108B14:  1804F702     RSCSEQ r0, r7, 0x18000000
		   0x01108B18:  5C0EF702     RSCSEQ r0, r7, 0x5c0
		   0x01108B1C:  480EF702     RSCSEQ r0, r7, 0x480
		   0x01108B20:  E403F702     RSCSEQ r0, r7, 0x90000003
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1108B24 Offset: 0x1108B24 VA: 0x1108B24
	public static void remove_onEnergyConsumptionModeChanged(Action<EnergyConsumptionMode> value) {
		/* Disassembly (ARM32, 53 instructions, 0xD4 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01108B24:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01108B28:  B4409FE5     LDR r4, [pc, 0xb4]
		   0x01108B2C:  0080A0E1     MOV r8, r0
		   0x01108B30:  04408FE0     ADD r4, pc, r4
		   0x01108B34:  0000D4E5     LDRB r0, [r4]
		   0x01108B38:  000050E3     CMPS r0, r0, 0x0
		   0x01108B3C:  0700001A     BNE $+0x24  // if (!=) goto 0x01108B60
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108B40:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x01108B44:  00009FE7     LDR r0, [pc, r0]
		   0x01108B48:  8449F9EB     BL $-0x1ad9e8
		   0x01108B4C:  98009FE5     LDR r0, [pc, 0x98]
		   0x01108B50:  00009FE7     LDR r0, [pc, r0]
		   0x01108B54:  8149F9EB     BL $-0x1ad9f4
		   0x01108B58:  0100A0E3     MOV r0, 0x1
		   0x01108B5C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108B60:  88909FE5     LDR sb, [pc, 0x88]
		   0x01108B64:  09909FE7     LDR sb, [pc, sb]
		   0x01108B68:  000099E5     LDR r0, [sb]
		   0x01108B6C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01108B70:  000090E5     LDR r0, [r0]
		   0x01108B74:  78A09FE5     LDR r10, [pc, 0x78]
		   0x01108B78:  0AA09FE7     LDR r10, [pc, r10]
		   0x01108B7C:  0810A0E1     MOV r1, r8
		   0x01108B80:  0020A0E3     MOV r2, 0x0
		   0x01108B84:  0050A0E1     MOV r5, r0
		   0x01108B88:  0060A0E3     MOV r6, 0x0
		   0x01108B8C:  E7427EEB     BL $+0x1f90ba4  // CALL → Delegate.Remove
		   0x01108B90:  000050E3     CMPS r0, r0, 0x0
		   0x01108B94:  0A00000A     BEQ $+0x30  // if (==) goto 0x01108BC4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01108B98:  00409AE5     LDR r4, [r10]
		   0x01108B9C:  0070A0E1     MOV r7, r0
		   0x01108BA0:  0410A0E1     MOV r1, r4
		   0x01108BA4:  BB49F9EB     BL $-0x1ad90c
		   0x01108BA8:  0060A0E1     MOV r6, r0
		   0x01108BAC:  000050E3     CMPS r0, r0, 0x0
		   0x01108BB0:  0300001A     BNE $+0x14  // if (!=) goto 0x01108BC4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01108BB4:  0700A0E1     MOV r0, r7
		   0x01108BB8:  0410A0E1     MOV r1, r4
		   0x01108BBC:  F14AF9EB     BL $-0x1ad434
		   0x01108BC0:  0060A0E3     MOV r6, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01108BC4:  000099E5     LDR r0, [sb]
		   0x01108BC8:  0610A0E1     MOV r1, r6
		   0x01108BCC:  0520A0E1     MOV r2, r5
		   0x01108BD0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01108BD4:  2736FAEB     BL $-0x17275c
		   0x01108BD8:  050050E1     CMPS r0, r0, r5
		   0x01108BDC:  E6FFFF1A     BNE $-0x60
		   // ──── Block 6 else (==) ────────────────────
		   0x01108BE0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01108BE4:  A6321203     TSTSEQ r3, r2, 0x6000000a
		   0x01108BE8:  4403F702     RSCSEQ r0, r7, 0x10000001
		   0x01108BEC:  880DF702     RSCSEQ r0, r7, 0x2200
		   0x01108BF0:  740DF702     RSCSEQ r0, r7, 0x1d00
		   0x01108BF4:  1003F702     RSCSEQ r0, r7, 0x40000000
		*/
	}

	// RVA: 0x1108BF8 Offset: 0x1108BF8 VA: 0x1108BF8
	public static EnergyConsumptionMode get_EnergyConsumptionMode() {
		/* Disassembly (ARM32, 90 instructions, 0x168 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01108BF8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01108BFC:  10D04DE2     SUB sp, sp, 0x10
		   0x01108C00:  24419FE5     LDR r4, [pc, 0x124]
		   0x01108C04:  04408FE0     ADD r4, pc, r4
		   0x01108C08:  0000D4E5     LDRB r0, [r4]
		   0x01108C0C:  000050E3     CMPS r0, r0, 0x0
		   0x01108C10:  1600001A     BNE $+0x60  // if (!=) goto 0x01108C70
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108C14:  14019FE5     LDR r0, [pc, 0x114]
		   0x01108C18:  00009FE7     LDR r0, [pc, r0]
		   0x01108C1C:  4F49F9EB     BL $-0x1adabc
		   0x01108C20:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x01108C24:  00009FE7     LDR r0, [pc, r0]
		   0x01108C28:  4C49F9EB     BL $-0x1adac8
		   0x01108C2C:  04019FE5     LDR r0, [pc, 0x104]
		   0x01108C30:  00009FE7     LDR r0, [pc, r0]
		   0x01108C34:  4949F9EB     BL $-0x1adad4
		   0x01108C38:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x01108C3C:  00009FE7     LDR r0, [pc, r0]
		   0x01108C40:  4649F9EB     BL $-0x1adae0
		   0x01108C44:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x01108C48:  00009FE7     LDR r0, [pc, r0]
		   0x01108C4C:  4349F9EB     BL $-0x1adaec
		   0x01108C50:  EC009FE5     LDR r0, [pc, 0xec]
		   0x01108C54:  00009FE7     LDR r0, [pc, r0]
		   0x01108C58:  4049F9EB     BL $-0x1adaf8
		   0x01108C5C:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x01108C60:  00009FE7     LDR r0, [pc, r0]
		   0x01108C64:  3D49F9EB     BL $-0x1adb04
		   0x01108C68:  0100A0E3     MOV r0, 0x1
		   0x01108C6C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108C70:  D4409FE5     LDR r4, [pc, 0xd4]
		   0x01108C74:  0020A0E3     MOV r2, 0x0
		   0x01108C78:  04409FE7     LDR r4, [pc, r4]
		   0x01108C7C:  0C208DE5     STR r2, [sp, 0xc]
		   0x01108C80:  08208DE5     STR r2, [sp, 0x8]
		   0x01108C84:  000094E5     LDR r0, [r4]
		   0x01108C88:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x01108C8C:  080091E5     LDR r0, [r1, 0x8]
		   0x01108C90:  0410D1E5     LDRB r1, [r1, 0x4]
		   0x01108C94:  000051E3     CMPS r0, r1, 0x0
		   0x01108C98:  2100001A     BNE $+0x8c  // if (!=) goto 0x01108D24
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01108C9C:  AC009FE5     LDR r0, [pc, 0xac]
		   0x01108CA0:  00009FE7     LDR r0, [pc, r0]
		   0x01108CA4:  000090E5     LDR r0, [r0]
		   0x01108CA8:  741090E5     LDR r1, [r0, 0x74]
		   0x01108CAC:  000051E3     CMPS r0, r1, 0x0
		   0x01108CB0:  0000001A     BNE $+0x8  // if (!=) goto 0x01108CB8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01108CB4:  7649F9EB     BL $-0x1ada20
		   // ──── Block 5 if (!=) ────────────────────
		   0x01108CB8:  94009FE5     LDR r0, [pc, 0x94]
		   0x01108CBC:  0110A0E3     MOV r1, 0x1
		   0x01108CC0:  0020A0E3     MOV r2, 0x0
		   0x01108CC4:  0030A0E3     MOV r3, 0x0
		   0x01108CC8:  0050A0E3     MOV r5, 0x0
		   0x01108CCC:  00009FE7     LDR r0, [pc, r0]
		   0x01108CD0:  000090E5     LDR r0, [r0]
		   0x01108CD4:  A6EEFDEB     BL $-0x84560
		   0x01108CD8:  0010A0E1     MOV r1, r0
		   0x01108CDC:  74009FE5     LDR r0, [pc, 0x74]
		   0x01108CE0:  00009FE7     LDR r0, [pc, r0]
		   0x01108CE4:  04508DE5     STR r5, [sp, 0x4]
		   0x01108CE8:  00508DE5     STR r5, [sp]
		   0x01108CEC:  002090E5     LDR r2, [r0]
		   0x01108CF0:  0D00A0E1     MOV r0, sp
		   0x01108CF4:  9BB630EB     BL $+0xc2da74  // CALL → Nullable<Int32Enum>..ctor
		   0x01108CF8:  000094E5     LDR r0, [r4]
		   0x01108CFC:  0C009DE8     LDM sp, {r2, r3}
		   0x01108D00:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01108D04:  50109FE5     LDR r1, [pc, 0x50]
		   0x01108D08:  01109FE7     LDR r1, [pc, r1]
		   0x01108D0C:  F420C0E1     STRD r2, r3, [r0, 0x4]
		   0x01108D10:  08008DE2     ADD r0, sp, 0x8
		   0x01108D14:  08208DE5     STR r2, [sp, 0x8]
		   0x01108D18:  001091E5     LDR r1, [r1]
		   0x01108D1C:  0C308DE5     STR r3, [sp, 0xc]
		   0x01108D20:  96B630EB     BL $+0xc2da60  // CALL → Nullable<Int32Enum>.get_Value
		   // ──── Block 6 if (!=) ────────────────────
		   0x01108D24:  10D08DE2     ADD sp, sp, 0x10
		   0x01108D28:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01108D2C:  D3311203     TSTSEQ r3, r2, 0xc0000034
		   0x01108D30:  C00CF702     RSCSEQ r0, r7, 0xc000
		   0x01108D34:  14EAF602     RSCSEQ lr, r6, 0x14000
		   0x01108D38:  AC0CF702     RSCSEQ r0, r7, 0xac00
		   0x01108D3C:  A40CF702     RSCSEQ r0, r7, 0xa400
		   0x01108D40:  9C0CF702     RSCSEQ r0, r7, 0x9c00
		   0x01108D44:  940CF702     RSCSEQ r0, r7, 0x9400
		   0x01108D48:  8C0CF702     RSCSEQ r0, r7, 0x8c00
		   0x01108D4C:  600CF702     RSCSEQ r0, r7, 0x6000
		   0x01108D50:  98E9F602     RSCSEQ lr, r6, 0x260000
		   0x01108D54:  200CF702     RSCSEQ r0, r7, 0x2000
		   0x01108D58:  000CF702     RSCSEQ r0, r7, 0x0
		   0x01108D5C:  E00BF702     RSCSEQ r0, r7, 0x38000
		*/
	}

	// RVA: 0x1108D60 Offset: 0x1108D60 VA: 0x1108D60
	public static void set_EnergyConsumptionMode(EnergyConsumptionMode value) {
		/* Disassembly (ARM32, 72 instructions, 0x120 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01108D60:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01108D64:  08D04DE2     SUB sp, sp, 0x8
		   0x01108D68:  EC509FE5     LDR r5, [pc, 0xec]
		   0x01108D6C:  0040A0E1     MOV r4, r0
		   0x01108D70:  05508FE0     ADD r5, pc, r5
		   0x01108D74:  0000D5E5     LDRB r0, [r5]
		   0x01108D78:  000050E3     CMPS r0, r0, 0x0
		   0x01108D7C:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01108DB8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108D80:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x01108D84:  00009FE7     LDR r0, [pc, r0]
		   0x01108D88:  F448F9EB     BL $-0x1adc28
		   0x01108D8C:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01108D90:  00009FE7     LDR r0, [pc, r0]
		   0x01108D94:  F148F9EB     BL $-0x1adc34
		   0x01108D98:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x01108D9C:  00009FE7     LDR r0, [pc, r0]
		   0x01108DA0:  EE48F9EB     BL $-0x1adc40
		   0x01108DA4:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x01108DA8:  00009FE7     LDR r0, [pc, r0]
		   0x01108DAC:  EB48F9EB     BL $-0x1adc4c
		   0x01108DB0:  0100A0E3     MOV r0, 0x1
		   0x01108DB4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108DB8:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x01108DBC:  0410A0E1     MOV r1, r4
		   0x01108DC0:  00009FE7     LDR r0, [pc, r0]
		   0x01108DC4:  002090E5     LDR r2, [r0]
		   0x01108DC8:  0000A0E3     MOV r0, 0x0
		   0x01108DCC:  04008DE5     STR r0, [sp, 0x4]
		   0x01108DD0:  00008DE5     STR r0, [sp]
		   0x01108DD4:  0D00A0E1     MOV r0, sp
		   0x01108DD8:  62B630EB     BL $+0xc2d990  // CALL → Nullable<Int32Enum>..ctor
		   0x01108DDC:  90509FE5     LDR r5, [pc, 0x90]
		   0x01108DE0:  05509FE7     LDR r5, [pc, r5]
		   0x01108DE4:  0C009DE8     LDM sp, {r2, r3}
		   0x01108DE8:  000095E5     LDR r0, [r5]
		   0x01108DEC:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x01108DF0:  80009FE5     LDR r0, [pc, 0x80]
		   0x01108DF4:  00009FE7     LDR r0, [pc, r0]
		   0x01108DF8:  F420C1E1     STRD r2, r3, [r1, 0x4]
		   0x01108DFC:  000090E5     LDR r0, [r0]
		   0x01108E00:  741090E5     LDR r1, [r0, 0x74]
		   0x01108E04:  000051E3     CMPS r0, r1, 0x0
		   0x01108E08:  0000001A     BNE $+0x8  // if (!=) goto 0x01108E10
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01108E0C:  2049F9EB     BL $-0x1adb78
		   // ──── Block 4 if (!=) ────────────────────
		   0x01108E10:  64009FE5     LDR r0, [pc, 0x64]
		   0x01108E14:  0410A0E1     MOV r1, r4
		   0x01108E18:  0120A0E3     MOV r2, 0x1
		   0x01108E1C:  0030A0E3     MOV r3, 0x0
		   0x01108E20:  00009FE7     LDR r0, [pc, r0]
		   0x01108E24:  000090E5     LDR r0, [r0]
		   0x01108E28:  36EFFDEB     BL $-0x84320
		   0x01108E2C:  000095E5     LDR r0, [r5]
		   0x01108E30:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01108E34:  000090E5     LDR r0, [r0]
		   0x01108E38:  000050E3     CMPS r0, r0, 0x0
		   0x01108E3C:  0400000A     BEQ $+0x18  // if (==) goto 0x01108E54
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01108E40:  0C3090E5     LDR r3, [r0, 0xc]
		   0x01108E44:  0410A0E1     MOV r1, r4
		   0x01108E48:  142090E5     LDR r2, [r0, 0x14]
		   0x01108E4C:  200090E5     LDR r0, [r0, 0x20]
		   0x01108E50:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 6 if (==) ────────────────────
		   0x01108E54:  08D08DE2     ADD sp, sp, 0x8
		   0x01108E58:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01108E5C:  68301203     TSTSEQ r3, r2, 0x68
		   0x01108E60:  540BF702     RSCSEQ r0, r7, 0x15000
		   0x01108E64:  A8E8F602     RSCSEQ lr, r6, 0xa80000
		   0x01108E68:  440BF702     RSCSEQ r0, r7, 0x11000
		   0x01108E6C:  440BF702     RSCSEQ r0, r7, 0x11000
		   0x01108E70:  200BF702     RSCSEQ r0, r7, 0x8000
		   0x01108E74:  F80AF702     RSCSEQ r0, r7, 0xf8000
		   0x01108E78:  44E8F602     RSCSEQ lr, r6, 0x440000
		   0x01108E7C:  CC0AF702     RSCSEQ r0, r7, 0xcc000
		*/
	}

	// RVA: 0x1108E80 Offset: 0x1108E80 VA: 0x1108E80
	public static ChargeData GetContainerCharges(int id) {
		/* Disassembly (ARM32, 69 instructions, 0x114 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01108E80:  10402DE9     PUSH {r4, lr}
		   0x01108E84:  08D04DE2     SUB sp, sp, 0x8
		   0x01108E88:  E0409FE5     LDR r4, [pc, 0xe0]
		   0x01108E8C:  04008DE5     STR r0, [sp, 0x4]
		   0x01108E90:  04408FE0     ADD r4, pc, r4
		   0x01108E94:  0010D4E5     LDRB r1, [r4]
		   0x01108E98:  000051E3     CMPS r0, r1, 0x0
		   0x01108E9C:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01108ED8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108EA0:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x01108EA4:  00009FE7     LDR r0, [pc, r0]
		   0x01108EA8:  AC48F9EB     BL $-0x1add48
		   0x01108EAC:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x01108EB0:  00009FE7     LDR r0, [pc, r0]
		   0x01108EB4:  A948F9EB     BL $-0x1add54
		   0x01108EB8:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x01108EBC:  00009FE7     LDR r0, [pc, r0]
		   0x01108EC0:  A648F9EB     BL $-0x1add60
		   0x01108EC4:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x01108EC8:  00009FE7     LDR r0, [pc, r0]
		   0x01108ECC:  A348F9EB     BL $-0x1add6c
		   0x01108ED0:  0100A0E3     MOV r0, 0x1
		   0x01108ED4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108ED8:  04008DE2     ADD r0, sp, 0x4
		   0x01108EDC:  0010A0E3     MOV r1, 0x0
		   0x01108EE0:  50ED7CEB     BL $+0x1f3b548  // CALL → Int32.ToString
		   0x01108EE4:  0010A0E1     MOV r1, r0
		   0x01108EE8:  94009FE5     LDR r0, [pc, 0x94]
		   0x01108EEC:  0020A0E3     MOV r2, 0x0
		   0x01108EF0:  00009FE7     LDR r0, [pc, r0]
		   0x01108EF4:  000090E5     LDR r0, [r0]
		   0x01108EF8:  100276EB     BL $+0x1d80848  // CALL → String.Concat
		   0x01108EFC:  0040A0E1     MOV r4, r0
		   0x01108F00:  80009FE5     LDR r0, [pc, 0x80]
		   0x01108F04:  00009FE7     LDR r0, [pc, r0]
		   0x01108F08:  000090E5     LDR r0, [r0]
		   0x01108F0C:  741090E5     LDR r1, [r0, 0x74]
		   0x01108F10:  000051E3     CMPS r0, r1, 0x0
		   0x01108F14:  0000001A     BNE $+0x8  // if (!=) goto 0x01108F1C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01108F18:  DD48F9EB     BL $-0x1adc84
		   // ──── Block 4 if (!=) ────────────────────
		   0x01108F1C:  0400A0E1     MOV r0, r4
		   0x01108F20:  0010A0E3     MOV r1, 0x0
		   0x01108F24:  0020A0E3     MOV r2, 0x0
		   0x01108F28:  0030A0E3     MOV r3, 0x0
		   0x01108F2C:  1503FEEB     BL $-0x7f3a4
		   0x01108F30:  0040A0E1     MOV r4, r0
		   0x01108F34:  50009FE5     LDR r0, [pc, 0x50]
		   0x01108F38:  00009FE7     LDR r0, [pc, r0]
		   0x01108F3C:  000090E5     LDR r0, [r0]
		   0x01108F40:  741090E5     LDR r1, [r0, 0x74]
		   0x01108F44:  000051E3     CMPS r0, r1, 0x0
		   0x01108F48:  0000001A     BNE $+0x8  // if (!=) goto 0x01108F50
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01108F4C:  D048F9EB     BL $-0x1adcb8
		   // ──── Block 6 if (!=) ────────────────────
		   0x01108F50:  38009FE5     LDR r0, [pc, 0x38]
		   0x01108F54:  0110A0E3     MOV r1, 0x1
		   0x01108F58:  00009FE7     LDR r0, [pc, r0]
		   0x01108F5C:  002090E5     LDR r2, [r0]
		   0x01108F60:  0400A0E1     MOV r0, r4
		   0x01108F64:  D3D522EB     BL $+0x8b5754  // CALL → JsonUtil.Deserialize<object>
		   0x01108F68:  08D08DE2     ADD sp, sp, 0x8
		   0x01108F6C:  1080BDE8     POP {r4, pc}
		   0x01108F70:  492F1203     TSTSEQ r2, r2, 0x124
		   0x01108F74:  94E7F602     RSCSEQ lr, r6, 0x2500000
		   0x01108F78:  400AF702     RSCSEQ r0, r7, 0x40000
		   0x01108F7C:  84EBF602     RSCSEQ lr, r6, 0x21000
		   0x01108F80:  2C0AF702     RSCSEQ r0, r7, 0x2c000
		   0x01108F84:  040AF702     RSCSEQ r0, r7, 0x4000
		   0x01108F88:  34E7F602     RSCSEQ lr, r6, 0xd00000
		   0x01108F8C:  08EBF602     RSCSEQ lr, r6, 0x2000
		   0x01108F90:  9809F702     RSCSEQ r0, r7, 0x260000
		*/
	}

	// RVA: 0x1108F94 Offset: 0x1108F94 VA: 0x1108F94
	public static void SetContainerCharges(int id, ChargeData chargeData) {
		/* Disassembly (ARM32, 78 instructions, 0x138 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01108F94:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01108F98:  08D04DE2     SUB sp, sp, 0x8
		   0x01108F9C:  04619FE5     LDR r6, [pc, 0x104]
		   0x01108FA0:  0050A0E1     MOV r5, r0
		   0x01108FA4:  0140A0E1     MOV r4, r1
		   0x01108FA8:  04508DE5     STR r5, [sp, 0x4]
		   0x01108FAC:  06608FE0     ADD r6, pc, r6
		   0x01108FB0:  0000D6E5     LDRB r0, [r6]
		   0x01108FB4:  000050E3     CMPS r0, r0, 0x0
		   0x01108FB8:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01108FF4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108FBC:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x01108FC0:  00009FE7     LDR r0, [pc, r0]
		   0x01108FC4:  6548F9EB     BL $-0x1ade64
		   0x01108FC8:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x01108FCC:  00009FE7     LDR r0, [pc, r0]
		   0x01108FD0:  6248F9EB     BL $-0x1ade70
		   0x01108FD4:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x01108FD8:  00009FE7     LDR r0, [pc, r0]
		   0x01108FDC:  5F48F9EB     BL $-0x1ade7c
		   0x01108FE0:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01108FE4:  00009FE7     LDR r0, [pc, r0]
		   0x01108FE8:  5C48F9EB     BL $-0x1ade88
		   0x01108FEC:  0100A0E3     MOV r0, 0x1
		   0x01108FF0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108FF4:  000054E3     CMPS r0, r4, 0x0
		   0x01108FF8:  2600000A     BEQ $+0xa0  // if (==) goto 0x01109098
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01108FFC:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x01109000:  00009FE7     LDR r0, [pc, r0]
		   0x01109004:  000090E5     LDR r0, [r0]
		   0x01109008:  741090E5     LDR r1, [r0, 0x74]
		   0x0110900C:  000051E3     CMPS r0, r1, 0x0
		   0x01109010:  0000001A     BNE $+0x8  // if (!=) goto 0x01109018
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01109014:  9E48F9EB     BL $-0x1add80
		   // ──── Block 5 if (!=) ────────────────────
		   0x01109018:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x0110901C:  0110A0E3     MOV r1, 0x1
		   0x01109020:  0020A0E3     MOV r2, 0x0
		   0x01109024:  00009FE7     LDR r0, [pc, r0]
		   0x01109028:  003090E5     LDR r3, [r0]
		   0x0110902C:  0400A0E1     MOV r0, r4
		   0x01109030:  06DE22EB     BL $+0x8b7820  // CALL → JsonUtil.Serialize<object>
		   0x01109034:  0040A0E1     MOV r4, r0
		   0x01109038:  04008DE2     ADD r0, sp, 0x4
		   0x0110903C:  0010A0E3     MOV r1, 0x0
		   0x01109040:  F8EC7CEB     BL $+0x1f3b3e8  // CALL → Int32.ToString
		   0x01109044:  0010A0E1     MOV r1, r0
		   0x01109048:  74009FE5     LDR r0, [pc, 0x74]
		   0x0110904C:  0020A0E3     MOV r2, 0x0
		   0x01109050:  00009FE7     LDR r0, [pc, r0]
		   0x01109054:  000090E5     LDR r0, [r0]
		   0x01109058:  B80176EB     BL $+0x1d806e8  // CALL → String.Concat
		   0x0110905C:  0050A0E1     MOV r5, r0
		   0x01109060:  60009FE5     LDR r0, [pc, 0x60]
		   0x01109064:  00009FE7     LDR r0, [pc, r0]
		   0x01109068:  000090E5     LDR r0, [r0]
		   0x0110906C:  741090E5     LDR r1, [r0, 0x74]
		   0x01109070:  000051E3     CMPS r0, r1, 0x0
		   0x01109074:  0000001A     BNE $+0x8  // if (!=) goto 0x0110907C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01109078:  8548F9EB     BL $-0x1adde4
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110907C:  0500A0E1     MOV r0, r5
		   0x01109080:  0410A0E1     MOV r1, r4
		   0x01109084:  0020A0E3     MOV r2, 0x0
		   0x01109088:  0030A0E3     MOV r3, 0x0
		   0x0110908C:  9903FEEB     BL $-0x7f194
		   0x01109090:  08D08DE2     ADD sp, sp, 0x8
		   0x01109094:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 8 if (==) ────────────────────
		   0x01109098:  0500A0E1     MOV r0, r5
		   0x0110909C:  08D08DE2     ADD sp, sp, 0x8
		   0x011090A0:  7040BDE8     POP {r4, r5, r6, lr}
		   0x011090A4:  080000EA     B $+0x28  // TAIL CALL → ContainerDataStorage.RemoveContainerChargeData
		   0x011090A8:  2E2E1203     TSTSEQ r2, r2, 0x2e0
		   0x011090AC:  78E6F602     RSCSEQ lr, r6, 0x7800000
		   0x011090B0:  2C09F702     RSCSEQ r0, r7, 0xb0000
		   0x011090B4:  68EAF602     RSCSEQ lr, r6, 0x68000
		   0x011090B8:  1009F702     RSCSEQ r0, r7, 0x40000
		   0x011090BC:  40EAF602     RSCSEQ lr, r6, 0x40000
		   0x011090C0:  D408F702     RSCSEQ r0, r7, 0xd40000
		   0x011090C4:  A408F702     RSCSEQ r0, r7, 0xa40000
		   0x011090C8:  D4E5F602     RSCSEQ lr, r6, 0x35000000
		*/
	}

	// RVA: 0x11090CC Offset: 0x11090CC VA: 0x11090CC
	public static void RemoveContainerChargeData(int id) {
		/* Disassembly (ARM32, 43 instructions, 0xAC bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011090CC:  10402DE9     PUSH {r4, lr}
		   0x011090D0:  08D04DE2     SUB sp, sp, 0x8
		   0x011090D4:  88409FE5     LDR r4, [pc, 0x88]
		   0x011090D8:  04008DE5     STR r0, [sp, 0x4]
		   0x011090DC:  04408FE0     ADD r4, pc, r4
		   0x011090E0:  0010D4E5     LDRB r1, [r4]
		   0x011090E4:  000051E3     CMPS r0, r1, 0x0
		   0x011090E8:  0700001A     BNE $+0x24  // if (!=) goto 0x0110910C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011090EC:  74009FE5     LDR r0, [pc, 0x74]
		   0x011090F0:  00009FE7     LDR r0, [pc, r0]
		   0x011090F4:  1948F9EB     BL $-0x1adf94
		   0x011090F8:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x011090FC:  00009FE7     LDR r0, [pc, r0]
		   0x01109100:  1648F9EB     BL $-0x1adfa0
		   0x01109104:  0100A0E3     MOV r0, 0x1
		   0x01109108:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110910C:  04008DE2     ADD r0, sp, 0x4
		   0x01109110:  0010A0E3     MOV r1, 0x0
		   0x01109114:  C3EC7CEB     BL $+0x1f3b314  // CALL → Int32.ToString
		   0x01109118:  0010A0E1     MOV r1, r0
		   0x0110911C:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x01109120:  0020A0E3     MOV r2, 0x0
		   0x01109124:  00009FE7     LDR r0, [pc, r0]
		   0x01109128:  000090E5     LDR r0, [r0]
		   0x0110912C:  830176EB     BL $+0x1d80614  // CALL → String.Concat
		   0x01109130:  0040A0E1     MOV r4, r0
		   0x01109134:  38009FE5     LDR r0, [pc, 0x38]
		   0x01109138:  00009FE7     LDR r0, [pc, r0]
		   0x0110913C:  000090E5     LDR r0, [r0]
		   0x01109140:  741090E5     LDR r1, [r0, 0x74]
		   0x01109144:  000051E3     CMPS r0, r1, 0x0
		   0x01109148:  0000001A     BNE $+0x8  // if (!=) goto 0x01109150
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110914C:  5048F9EB     BL $-0x1adeb8
		   // ──── Block 4 if (!=) ────────────────────
		   0x01109150:  0400A0E1     MOV r0, r4
		   0x01109154:  0010A0E3     MOV r1, 0x0
		   0x01109158:  AA47FEEB     BL $-0x6e150
		   0x0110915C:  08D08DE2     ADD sp, sp, 0x8
		   0x01109160:  1080BDE8     POP {r4, pc}
		   0x01109164:  FF2C1203     TSTSEQ r2, r2, 0xff00
		   0x01109168:  48E5F602     RSCSEQ lr, r6, 0x12000000
		   0x0110916C:  F807F702     RSCSEQ r0, r7, 0x3e00000
		   0x01109170:  D007F702     RSCSEQ r0, r7, 0x3400000
		   0x01109174:  00E5F602     RSCSEQ lr, r6, 0x0
		*/
	}
}
