// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public struct FieldGroup // TypeDefIndex: 634
{

	// Fields
	public const string FIELD_TYPE_UNKNOWN = "unknown";
	public const string FIELD_TYPE_COMMON = "common";
	public const string FIELD_TYPE_SEASONS = "seasons";
	public const string FIELD_TYPE_SIDEJOBS = "sidejobs";
	public const string FIELD_TYPE_WORKSHOPS = "workshops";
	[SerializeField]
	public FieldGroupData data; // 0x0
	private static Dictionary<string, int> stringToTypeIndex; // 0x0

	// Properties
	[JsonIgnore]
	public int Type { get; }
	[JsonIgnore]
	public int Subtype { get; }
	[JsonIgnore]
	public string fieldBalance { get; }
	[JsonIgnore]
	public bool IsHolidaySidejob { get; }

	// Methods

	// RVA: 0x14F892C Offset: 0x14F892C VA: 0x14F892C
	public int get_Type() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014F892C:  000090E5     LDR r0, [r0]
		   0x014F8930:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x14E4178 Offset: 0x14E4178 VA: 0x14E4178
	public int get_Subtype() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014E4178:  040090E5     LDR r0, [r0, 0x4]
		   0x014E417C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x14F8934 Offset: 0x14F8934 VA: 0x14F8934
	public string get_fieldBalance() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014F8934:  080090E5     LDR r0, [r0, 0x8]
		   0x014F8938:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x14F893C Offset: 0x14F893C VA: 0x14F893C
	public bool get_IsHolidaySidejob() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F893C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x014F8940:  4C509FE5     LDR r5, [pc, 0x4c]
		   0x014F8944:  0040A0E1     MOV r4, r0
		   0x014F8948:  05508FE0     ADD r5, pc, r5
		   0x014F894C:  0000D5E5     LDRB r0, [r5]
		   0x014F8950:  000050E3     CMPS r0, r0, 0x0
		   0x014F8954:  0400001A     BNE $+0x18  // if (!=) goto 0x014F896C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F8958:  38009FE5     LDR r0, [pc, 0x38]
		   0x014F895C:  00009FE7     LDR r0, [pc, r0]
		   0x014F8960:  FE89E9EB     BL $-0x59d800
		   0x014F8964:  0100A0E3     MOV r0, 0x1
		   0x014F8968:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F896C:  28009FE5     LDR r0, [pc, 0x28]
		   0x014F8970:  00009FE7     LDR r0, [pc, r0]
		   0x014F8974:  000090E5     LDR r0, [r0]
		   0x014F8978:  741090E5     LDR r1, [r0, 0x74]
		   0x014F897C:  000051E3     CMPS r0, r1, 0x0
		   0x014F8980:  0000001A     BNE $+0x8  // if (!=) goto 0x014F8988
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014F8984:  428AE9EB     BL $-0x59d6f0
		   // ──── Block 4 if (!=) ────────────────────
		   0x014F8988:  0400A0E1     MOV r0, r4
		   0x014F898C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x014F8990:  020000EA     B $+0x10  // TAIL CALL → FieldGroup.IsHolidaySideJob
		   0x014F8994:  C354D302     SBCSEQ r5, r3, 0xc3000000
		   0x014F8998:  84FBB702     ADCSEQ pc, r7, 0x21000
		   0x014F899C:  70FBB702     ADCSEQ pc, r7, 0x1c000
		*/
	}

	// RVA: 0x14F8A34 Offset: 0x14F8A34 VA: 0x14F8A34
	public void .ctor(int type, int subtype, string fieldBalance) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014F8A34:  0E0080E8     STM r0, {r1, r2, r3}
		   0x014F8A38:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x14F8A3C Offset: 0x14F8A3C VA: 0x14F8A3C
	public void .ctor(RemoteFieldGroupData data, string fieldBalance) {
		/* Disassembly (ARM32, 273 instructions, 0x444 bytes):
		   // CFG: 33 blocks, 35 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F8A3C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x014F8A40:  18D04DE2     SUB sp, sp, 0x18
		   0x014F8A44:  B4539FE5     LDR r5, [pc, 0x3b4]
		   0x014F8A48:  00A0A0E1     MOV r10, r0
		   0x014F8A4C:  0280A0E1     MOV r8, r2
		   0x014F8A50:  0160A0E1     MOV r6, r1
		   0x014F8A54:  05508FE0     ADD r5, pc, r5
		   0x014F8A58:  0000D5E5     LDRB r0, [r5]
		   0x014F8A5C:  000050E3     CMPS r0, r0, 0x0
		   0x014F8A60:  2B00001A     BNE $+0xb4  // if (!=) goto 0x014F8B14
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F8A64:  98039FE5     LDR r0, [pc, 0x398]
		   0x014F8A68:  00009FE7     LDR r0, [pc, r0]
		   0x014F8A6C:  BB89E9EB     BL $-0x59d90c
		   0x014F8A70:  90039FE5     LDR r0, [pc, 0x390]
		   0x014F8A74:  00009FE7     LDR r0, [pc, r0]
		   0x014F8A78:  B889E9EB     BL $-0x59d918
		   0x014F8A7C:  88039FE5     LDR r0, [pc, 0x388]
		   0x014F8A80:  00009FE7     LDR r0, [pc, r0]
		   0x014F8A84:  B589E9EB     BL $-0x59d924
		   0x014F8A88:  80039FE5     LDR r0, [pc, 0x380]
		   0x014F8A8C:  00009FE7     LDR r0, [pc, r0]
		   0x014F8A90:  B289E9EB     BL $-0x59d930
		   0x014F8A94:  78039FE5     LDR r0, [pc, 0x378]
		   0x014F8A98:  00009FE7     LDR r0, [pc, r0]
		   0x014F8A9C:  AF89E9EB     BL $-0x59d93c
		   0x014F8AA0:  70039FE5     LDR r0, [pc, 0x370]
		   0x014F8AA4:  00009FE7     LDR r0, [pc, r0]
		   0x014F8AA8:  AC89E9EB     BL $-0x59d948
		   0x014F8AAC:  68039FE5     LDR r0, [pc, 0x368]
		   0x014F8AB0:  00009FE7     LDR r0, [pc, r0]
		   0x014F8AB4:  A989E9EB     BL $-0x59d954
		   0x014F8AB8:  60039FE5     LDR r0, [pc, 0x360]
		   0x014F8ABC:  00009FE7     LDR r0, [pc, r0]
		   0x014F8AC0:  A689E9EB     BL $-0x59d960
		   0x014F8AC4:  58039FE5     LDR r0, [pc, 0x358]
		   0x014F8AC8:  00009FE7     LDR r0, [pc, r0]
		   0x014F8ACC:  A389E9EB     BL $-0x59d96c
		   0x014F8AD0:  50039FE5     LDR r0, [pc, 0x350]
		   0x014F8AD4:  00009FE7     LDR r0, [pc, r0]
		   0x014F8AD8:  A089E9EB     BL $-0x59d978
		   0x014F8ADC:  48039FE5     LDR r0, [pc, 0x348]
		   0x014F8AE0:  00009FE7     LDR r0, [pc, r0]
		   0x014F8AE4:  9D89E9EB     BL $-0x59d984
		   0x014F8AE8:  40039FE5     LDR r0, [pc, 0x340]
		   0x014F8AEC:  00009FE7     LDR r0, [pc, r0]
		   0x014F8AF0:  9A89E9EB     BL $-0x59d990
		   0x014F8AF4:  38039FE5     LDR r0, [pc, 0x338]
		   0x014F8AF8:  00009FE7     LDR r0, [pc, r0]
		   0x014F8AFC:  9789E9EB     BL $-0x59d99c
		   0x014F8B00:  30039FE5     LDR r0, [pc, 0x330]
		   0x014F8B04:  00009FE7     LDR r0, [pc, r0]
		   0x014F8B08:  9489E9EB     BL $-0x59d9a8
		   0x014F8B0C:  0100A0E3     MOV r0, 0x1
		   0x014F8B10:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F8B14:  20439FE5     LDR r4, [pc, 0x320]
		   0x014F8B18:  0010A0E3     MOV r1, 0x0
		   0x014F8B1C:  04409FE7     LDR r4, [pc, r4]
		   0x014F8B20:  10108DE5     STR r1, [sp, 0x10]
		   0x014F8B24:  14108DE5     STR r1, [sp, 0x14]
		   0x014F8B28:  000094E5     LDR r0, [r4]
		   0x014F8B2C:  0C108DE5     STR r1, [sp, 0xc]
		   0x014F8B30:  08108DE5     STR r1, [sp, 0x8]
		   0x014F8B34:  742090E5     LDR r2, [r0, 0x74]
		   0x014F8B38:  04108DE5     STR r1, [sp, 0x4]
		   0x014F8B3C:  000052E3     CMPS r0, r2, 0x0
		   0x014F8B40:  0100001A     BNE $+0xc  // if (!=) goto 0x014F8B4C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014F8B44:  D289E9EB     BL $-0x59d8b0
		   0x014F8B48:  000094E5     LDR r0, [r4]
		   // ──── Block 4 if (!=) ────────────────────
		   0x014F8B4C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014F8B50:  000056E3     CMPS r0, r6, 0x0
		   0x014F8B54:  007090E5     LDR r7, [r0]
		   0x014F8B58:  0000001A     BNE $+0x8  // if (!=) goto 0x014F8B60
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014F8B5C:  1B8AE9EB     BL $-0x59d78c
		   // ──── Block 6 if (!=) ────────────────────
		   0x014F8B60:  085096E5     LDR r5, [r6, 0x8]
		   0x014F8B64:  000057E3     CMPS r0, r7, 0x0
		   0x014F8B68:  0000001A     BNE $+0x8  // if (!=) goto 0x014F8B70
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x014F8B6C:  178AE9EB     BL $-0x59d79c
		   // ──── Block 8 if (!=) ────────────────────
		   0x014F8B70:  C8029FE5     LDR r0, [pc, 0x2c8]
		   0x014F8B74:  14208DE2     ADD r2, sp, 0x14
		   0x014F8B78:  0510A0E1     MOV r1, r5
		   0x014F8B7C:  00009FE7     LDR r0, [pc, r0]
		   0x014F8B80:  003090E5     LDR r3, [r0]
		   0x014F8B84:  0700A0E1     MOV r0, r7
		   0x014F8B88:  100844EB     BL $+0x1102048  // CALL → Dictionary<object, int>.TryGetValue
		   0x014F8B8C:  087096E5     LDR r7, [r6, 0x8]
		   0x014F8B90:  000050E3     CMPS r0, r0, 0x0
		   0x014F8B94:  1900000A     BEQ $+0x6c  // if (==) goto 0x014F8C00
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x014F8B98:  B4029FE5     LDR r0, [pc, 0x2b4]
		   0x014F8B9C:  0020A0E3     MOV r2, 0x0
		   0x014F8BA0:  00009FE7     LDR r0, [pc, r0]
		   0x014F8BA4:  001090E5     LDR r1, [r0]
		   0x014F8BA8:  0700A0E1     MOV r0, r7
		   0x014F8BAC:  973766EB     BL $+0x198de64  // CALL → String.op_Equality
		   0x014F8BB0:  000050E3     CMPS r0, r0, 0x0
		   0x014F8BB4:  3100000A     BEQ $+0xcc  // if (==) goto 0x014F8C80
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x014F8BB8:  A4029FE5     LDR r0, [pc, 0x2a4]
		   0x014F8BBC:  00009FE7     LDR r0, [pc, r0]
		   0x014F8BC0:  0C7096E5     LDR r7, [r6, 0xc]
		   0x014F8BC4:  4C0090E5     LDR r0, [r0, 0x4c]
		   0x014F8BC8:  741090E5     LDR r1, [r0, 0x74]
		   0x014F8BCC:  000051E3     CMPS r0, r1, 0x0
		   0x014F8BD0:  0000001A     BNE $+0x8  // if (!=) goto 0x014F8BD8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x014F8BD4:  AE89E9EB     BL $-0x59d940
		   // ──── Block 12 if (!=) ────────────────────
		   0x014F8BD8:  88029FE5     LDR r0, [pc, 0x288]
		   0x014F8BDC:  0C108DE2     ADD r1, sp, 0xc
		   0x014F8BE0:  00009FE7     LDR r0, [pc, r0]
		   0x014F8BE4:  002090E5     LDR r2, [r0]
		   0x014F8BE8:  0700A0E1     MOV r0, r7
		   0x014F8BEC:  A60311EB     BL $+0x440ea0  // CALL → Enum.TryParse<Int32Enum>
		   0x014F8BF0:  000050E3     CMPS r0, r0, 0x0
		   0x014F8BF4:  3900000A     BEQ $+0xec  // if (==) goto 0x014F8CE0
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x014F8BF8:  0C509DE5     LDR r5, [sp, 0xc]
		   0x014F8BFC:  6D0000EA     B $+0x1bc  // goto 0x014F8DB8
		   // ──── Block 14 if (==) ────────────────────
		   0x014F8C00:  3C029FE5     LDR r0, [pc, 0x23c]
		   0x014F8C04:  0710A0E1     MOV r1, r7
		   0x014F8C08:  0020A0E3     MOV r2, 0x0
		   0x014F8C0C:  0040A0E3     MOV r4, 0x0
		   0x014F8C10:  00009FE7     LDR r0, [pc, r0]
		   0x014F8C14:  000090E5     LDR r0, [r0]
		   0x014F8C18:  C84266EB     BL $+0x1990b28  // CALL → String.Concat
		   0x014F8C1C:  0060A0E1     MOV r6, r0
		   0x014F8C20:  20029FE5     LDR r0, [pc, 0x220]
		   0x014F8C24:  00009FE7     LDR r0, [pc, r0]
		   0x014F8C28:  000090E5     LDR r0, [r0]
		   0x014F8C2C:  E489E9EB     BL $-0x59d868
		   0x014F8C30:  0610A0E1     MOV r1, r6
		   0x014F8C34:  0020A0E3     MOV r2, 0x0
		   0x014F8C38:  0050A0E1     MOV r5, r0
		   0x014F8C3C:  909500EB     BL $+0x25648  // CALL → InfoException..ctor
		   0x014F8C40:  04029FE5     LDR r0, [pc, 0x204]
		   0x014F8C44:  00009FE7     LDR r0, [pc, r0]
		   0x014F8C48:  000090E5     LDR r0, [r0]
		   0x014F8C4C:  741090E5     LDR r1, [r0, 0x74]
		   0x014F8C50:  000051E3     CMPS r0, r1, 0x0
		   0x014F8C54:  0000001A     BNE $+0x8  // if (!=) goto 0x014F8C5C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x014F8C58:  8D89E9EB     BL $-0x59d9c4
		   // ──── Block 16 if (!=) ────────────────────
		   0x014F8C5C:  0500A0E1     MOV r0, r5
		   0x014F8C60:  0010A0E3     MOV r1, 0x0
		   0x014F8C64:  48FD2BEB     BL $+0xaff528  // CALL → sub_1FF818C
		   0x014F8C68:  E0019FE5     LDR r0, [pc, 0x1e0]
		   0x014F8C6C:  0050A0E3     MOV r5, 0x0
		   0x014F8C70:  00009FE7     LDR r0, [pc, r0]
		   0x014F8C74:  000090E5     LDR r0, [r0]
		   0x014F8C78:  10008DE5     STR r0, [sp, 0x10]
		   0x014F8C7C:  5A0000EA     B $+0x170  // goto 0x014F8DEC
		   // ──── Block 17 if (==) ────────────────────
		   0x014F8C80:  D0019FE5     LDR r0, [pc, 0x1d0]
		   0x014F8C84:  0020A0E3     MOV r2, 0x0
		   0x014F8C88:  00009FE7     LDR r0, [pc, r0]
		   0x014F8C8C:  001090E5     LDR r1, [r0]
		   0x014F8C90:  0700A0E1     MOV r0, r7
		   0x014F8C94:  5D3766EB     BL $+0x198dd7c  // CALL → String.op_Equality
		   0x014F8C98:  000050E3     CMPS r0, r0, 0x0
		   0x014F8C9C:  1200000A     BEQ $+0x50  // if (==) goto 0x014F8CEC
		   // 
		   // ──── Block 18 else (!=) ────────────────────
		   0x014F8CA0:  D0019FE5     LDR r0, [pc, 0x1d0]
		   0x014F8CA4:  00009FE7     LDR r0, [pc, r0]
		   0x014F8CA8:  0C5096E5     LDR r5, [r6, 0xc]
		   0x014F8CAC:  000090E5     LDR r0, [r0]
		   0x014F8CB0:  741090E5     LDR r1, [r0, 0x74]
		   0x014F8CB4:  000051E3     CMPS r0, r1, 0x0
		   0x014F8CB8:  0000001A     BNE $+0x8  // if (!=) goto 0x014F8CC0
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x014F8CBC:  7489E9EB     BL $-0x59da28
		   // ──── Block 20 if (!=) ────────────────────
		   0x014F8CC0:  08108DE2     ADD r1, sp, 0x8
		   0x014F8CC4:  0500A0E1     MOV r0, r5
		   0x014F8CC8:  0020A0E3     MOV r2, 0x0
		   0x014F8CCC:  59EFF0EB     BL $-0x3c4294
		   0x014F8CD0:  000050E3     CMPS r0, r0, 0x0
		   0x014F8CD4:  1D00000A     BEQ $+0x7c  // if (==) goto 0x014F8D50
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x014F8CD8:  08509DE5     LDR r5, [sp, 0x8]
		   0x014F8CDC:  350000EA     B $+0xdc  // goto 0x014F8DB8
		   // ──── Block 22 if (==) ────────────────────
		   0x014F8CE0:  84019FE5     LDR r0, [pc, 0x184]
		   0x014F8CE4:  00009FE7     LDR r0, [pc, r0]
		   0x014F8CE8:  1A0000EA     B $+0x70  // goto 0x014F8D58
		   // ──── Block 23 if (==) ────────────────────
		   0x014F8CEC:  68019FE5     LDR r0, [pc, 0x168]
		   0x014F8CF0:  0020A0E3     MOV r2, 0x0
		   0x014F8CF4:  0050A0E3     MOV r5, 0x0
		   0x014F8CF8:  00009FE7     LDR r0, [pc, r0]
		   0x014F8CFC:  001090E5     LDR r1, [r0]
		   0x014F8D00:  0700A0E1     MOV r0, r7
		   0x014F8D04:  413766EB     BL $+0x198dd0c  // CALL → String.op_Equality
		   0x014F8D08:  000050E3     CMPS r0, r0, 0x0
		   0x014F8D0C:  0700001A     BNE $+0x24  // if (!=) goto 0x014F8D30
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x014F8D10:  48019FE5     LDR r0, [pc, 0x148]
		   0x014F8D14:  0020A0E3     MOV r2, 0x0
		   0x014F8D18:  00009FE7     LDR r0, [pc, r0]
		   0x014F8D1C:  001090E5     LDR r1, [r0]
		   0x014F8D20:  0700A0E1     MOV r0, r7
		   0x014F8D24:  393766EB     BL $+0x198dcec  // CALL → String.op_Equality
		   0x014F8D28:  000050E3     CMPS r0, r0, 0x0
		   0x014F8D2C:  2100000A     BEQ $+0x8c  // if (==) goto 0x014F8DB8
		   // 
		   // ──── Block 25 (from 2 paths) ──────────────────
		   0x014F8D30:  0C0096E5     LDR r0, [r6, 0xc]
		   0x014F8D34:  04108DE2     ADD r1, sp, 0x4
		   0x014F8D38:  0020A0E3     MOV r2, 0x0
		   0x014F8D3C:  CA2F6DEB     BL $+0x1b4bf30  // CALL → Int32.TryParse
		   0x014F8D40:  04509DE5     LDR r5, [sp, 0x4]
		   0x014F8D44:  000050E3     CMPS r0, r0, 0x0
		   0x014F8D48:  0050A001     MOVEQ r5, r0
		   0x014F8D4C:  190000EA     B $+0x6c  // goto 0x014F8DB8
		   // ──── Block 26 if (==) ────────────────────
		   0x014F8D50:  24019FE5     LDR r0, [pc, 0x124]
		   0x014F8D54:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 27 ──────────────────────────────
		   0x014F8D58:  000090E5     LDR r0, [r0]
		   0x014F8D5C:  0020A0E3     MOV r2, 0x0
		   0x014F8D60:  0C1096E5     LDR r1, [r6, 0xc]
		   0x014F8D64:  0050A0E3     MOV r5, 0x0
		   0x014F8D68:  744266EB     BL $+0x19909d8  // CALL → String.Concat
		   0x014F8D6C:  0090A0E1     MOV sb, r0
		   0x014F8D70:  F8009FE5     LDR r0, [pc, 0xf8]
		   0x014F8D74:  00009FE7     LDR r0, [pc, r0]
		   0x014F8D78:  000090E5     LDR r0, [r0]
		   0x014F8D7C:  9089E9EB     BL $-0x59d9b8
		   0x014F8D80:  0910A0E1     MOV r1, sb
		   0x014F8D84:  0020A0E3     MOV r2, 0x0
		   0x014F8D88:  0070A0E1     MOV r7, r0
		   0x014F8D8C:  3C9500EB     BL $+0x254f8  // CALL → InfoException..ctor
		   0x014F8D90:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x014F8D94:  00009FE7     LDR r0, [pc, r0]
		   0x014F8D98:  000090E5     LDR r0, [r0]
		   0x014F8D9C:  741090E5     LDR r1, [r0, 0x74]
		   0x014F8DA0:  000051E3     CMPS r0, r1, 0x0
		   0x014F8DA4:  0000001A     BNE $+0x8  // if (!=) goto 0x014F8DAC
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x014F8DA8:  3989E9EB     BL $-0x59db14
		   // ──── Block 29 if (!=) ────────────────────
		   0x014F8DAC:  0700A0E1     MOV r0, r7
		   0x014F8DB0:  0010A0E3     MOV r1, 0x0
		   0x014F8DB4:  F4FC2BEB     BL $+0xaff3d8  // CALL → sub_1FF818C
		   // ──── Block 30 if (==) ────────────────────
		   0x014F8DB8:  0000A0E3     MOV r0, 0x0
		   0x014F8DBC:  0010A0E3     MOV r1, 0x0
		   0x014F8DC0:  10008DE5     STR r0, [sp, 0x10]
		   0x014F8DC4:  0800A0E1     MOV r0, r8
		   0x014F8DC8:  14409DE5     LDR r4, [sp, 0x14]
		   0x014F8DCC:  897D66EB     BL $+0x199f62c  // CALL → String.IsNullOrEmpty
		   0x014F8DD0:  10108DE2     ADD r1, sp, 0x10
		   0x014F8DD4:  000050E3     CMPS r0, r0, 0x0
		   0x014F8DD8:  10809615     LDRNE r8, [r6, 0x10]
		   0x014F8DDC:  0100A0E1     MOV r0, r1
		   0x014F8DE0:  08000013     MOVNE r0, 0x8
		   0x014F8DE4:  0100A011     MOVNE r0, r1
		   0x014F8DE8:  008080E5     STR r8, [r0]
		   // ──── Block 31 ──────────────────────────────
		   0x014F8DEC:  10009DE5     LDR r0, [sp, 0x10]
		   0x014F8DF0:  30008AE8     STM r10, {r4, r5}
		   0x014F8DF4:  08008AE5     STR r0, [r10, 0x8]
		   0x014F8DF8:  18D08DE2     ADD sp, sp, 0x18
		   0x014F8DFC:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x014F8E00:  B853D302     SBCSEQ r5, r3, 0xe0000002
		   0x014F8E04:  20DBB702     ADCSEQ sp, r7, 0x8000
		   0x014F8E08:  98F7B702     ADCSEQ pc, r7, 0x2600000
		   0x014F8E0C:  C4EDB802     ADCSEQ lr, r8, 0x3100
		   0x014F8E10:  54FAB702     ADCSEQ pc, r7, 0x54000
		   0x014F8E14:  34ECB702     ADCSEQ lr, r7, 0x3400
		   0x014F8E18:  F8FFB702     ADCSEQ pc, r7, 0x3e0
		   0x014F8E1C:  98EDB802     ADCSEQ lr, r8, 0x2600
		   0x014F8E20:  90EDB802     ADCSEQ lr, r8, 0x2400
		   0x014F8E24:  88EDB802     ADCSEQ lr, r8, 0x2200
		   0x014F8E28:  80EDB802     ADCSEQ lr, r8, 0x2000
		   0x014F8E2C:  78EDB802     ADCSEQ lr, r8, 0x1e00
		   0x014F8E30:  70EDB802     ADCSEQ lr, r8, 0x1c00
		   0x014F8E34:  48DFB702     ADCSEQ sp, r7, 0x120
		   0x014F8E38:  5CEDB802     ADCSEQ lr, r8, 0x1700
		   0x014F8E3C:  C4F9B702     ADCSEQ pc, r7, 0x310000
		   0x014F8E40:  90F6B702     ADCSEQ pc, r7, 0x9000000
		   0x014F8E44:  38ECB802     ADCSEQ lr, r8, 0x3800
		   0x014F8E48:  A8EAB702     ADCSEQ lr, r7, 0xa8000
		   0x014F8E4C:  44D9B702     ADCSEQ sp, r7, 0x110000
		   0x014F8E50:  D0DDB702     ADCSEQ sp, r7, 0x3400
		   0x014F8E54:  ACECB802     ADCSEQ lr, r8, 0xac00
		   0x014F8E58:  CCEBB802     ADCSEQ lr, r8, 0x33000
		   0x014F8E5C:  60EBB802     ADCSEQ lr, r8, 0x18000
		   0x014F8E60:  48EBB802     ADCSEQ lr, r8, 0x12000
		   0x014F8E64:  04DBB702     ADCSEQ sp, r7, 0x1000
		   0x014F8E68:  64ECB802     ADCSEQ lr, r8, 0x6400
		   0x014F8E6C:  78EBB802     ADCSEQ lr, r8, 0x1e000
		   0x014F8E70:  58E9B702     ADCSEQ lr, r7, 0x160000
		   0x014F8E74:  F4D7B702     ADCSEQ sp, r7, 0x3d00000
		   0x014F8E78:  F8FDB702     ADCSEQ pc, r7, 0x3e00
		   0x014F8E7C:  FCEAB802     ADCSEQ lr, r8, 0xfc000
		*/
	}

	// RVA: 0x14F8E80 Offset: 0x14F8E80 VA: 0x14F8E80
	public string GetSubtypeStr() {
		/* Disassembly (ARM32, 61 instructions, 0xF4 bytes):
		   // CFG: 11 blocks, 9 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F8E80:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x014F8E84:  10D04DE2     SUB sp, sp, 0x10
		   0x014F8E88:  C8509FE5     LDR r5, [pc, 0xc8]
		   0x014F8E8C:  0040A0E1     MOV r4, r0
		   0x014F8E90:  05508FE0     ADD r5, pc, r5
		   0x014F8E94:  0000D5E5     LDRB r0, [r5]
		   0x014F8E98:  000050E3     CMPS r0, r0, 0x0
		   0x014F8E9C:  0A00001A     BNE $+0x30  // if (!=) goto 0x014F8ECC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F8EA0:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x014F8EA4:  00009FE7     LDR r0, [pc, r0]
		   0x014F8EA8:  AC88E9EB     BL $-0x59dd48
		   0x014F8EAC:  AC009FE5     LDR r0, [pc, 0xac]
		   0x014F8EB0:  00009FE7     LDR r0, [pc, r0]
		   0x014F8EB4:  A988E9EB     BL $-0x59dd54
		   0x014F8EB8:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x014F8EBC:  00009FE7     LDR r0, [pc, r0]
		   0x014F8EC0:  A688E9EB     BL $-0x59dd60
		   0x014F8EC4:  0100A0E3     MOV r0, 0x1
		   0x014F8EC8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F8ECC:  000094E5     LDR r0, [r4]
		   0x014F8ED0:  040050E3     CMPS r0, r0, 0x4
		   0x014F8ED4:  0D00000A     BEQ $+0x3c  // if (==) goto 0x014F8F10
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x014F8ED8:  030050E3     CMPS r0, r0, 0x3
		   0x014F8EDC:  1800001A     BNE $+0x68  // if (!=) goto 0x014F8F44
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x014F8EE0:  040094E5     LDR r0, [r4, 0x4]
		   0x014F8EE4:  7C109FE5     LDR r1, [pc, 0x7c]
		   0x014F8EE8:  01109FE7     LDR r1, [pc, r1]
		   0x014F8EEC:  0C008DE5     STR r0, [sp, 0xc]
		   0x014F8EF0:  0000E0E3     MVN r0, r0, 0x0
		   0x014F8EF4:  08008DE5     STR r0, [sp, 0x8]
		   0x014F8EF8:  04008DE2     ADD r0, sp, 0x4
		   0x014F8EFC:  001091E5     LDR r1, [r1]
		   0x014F8F00:  04108DE5     STR r1, [sp, 0x4]
		   0x014F8F04:  0010A0E3     MOV r1, 0x0
		   0x014F8F08:  7A3A6EEB     BL $+0x1b8e9f0  // CALL → Enum.ToString
		   0x014F8F0C:  0F0000EA     B $+0x44  // goto 0x014F8F50
		   // ──── Block 5 if (==) ────────────────────
		   0x014F8F10:  54009FE5     LDR r0, [pc, 0x54]
		   0x014F8F14:  00009FE7     LDR r0, [pc, r0]
		   0x014F8F18:  044094E5     LDR r4, [r4, 0x4]
		   0x014F8F1C:  000090E5     LDR r0, [r0]
		   0x014F8F20:  741090E5     LDR r1, [r0, 0x74]
		   0x014F8F24:  000051E3     CMPS r0, r1, 0x0
		   0x014F8F28:  0000001A     BNE $+0x8  // if (!=) goto 0x014F8F30
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014F8F2C:  D888E9EB     BL $-0x59dc98
		   // ──── Block 7 if (!=) ────────────────────
		   0x014F8F30:  0400A0E1     MOV r0, r4
		   0x014F8F34:  0010A0E3     MOV r1, 0x0
		   0x014F8F38:  10D08DE2     ADD sp, sp, 0x10
		   0x014F8F3C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x014F8F40:  A7EDF0EA     B $-0x3c495c
		   // ──── Block 8 if (!=) ────────────────────
		   0x014F8F44:  24009FE5     LDR r0, [pc, 0x24]
		   0x014F8F48:  00009FE7     LDR r0, [pc, r0]
		   0x014F8F4C:  000090E5     LDR r0, [r0]
		   // ──── Block 9 ──────────────────────────────
		   0x014F8F50:  10D08DE2     ADD sp, sp, 0x10
		   0x014F8F54:  3088BDE8     POP {r4, r5, fp, pc}
		   0x014F8F58:  7D4FD302     SBCSEQ r4, r3, 0x1f4
		   0x014F8F5C:  3C0EB802     ADCSEQ r0, r8, 0x3c0
		   0x014F8F60:  ECFBB702     ADCSEQ pc, r7, 0x3b000
		   0x014F8F64:  84DBB702     ADCSEQ sp, r7, 0x21000
		   0x014F8F68:  F80DB802     ADCSEQ r0, r8, 0x3e00
		   0x014F8F6C:  88FBB702     ADCSEQ pc, r7, 0x22000
		   0x014F8F70:  F8DAB702     ADCSEQ sp, r7, 0xf8000
		*/
	}

	// RVA: 0x14F8F74 Offset: 0x14F8F74 VA: 0x14F8F74
	public string GetTypeStr() {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 7 blocks, 5 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F8F74:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x014F8F78:  84509FE5     LDR r5, [pc, 0x84]
		   0x014F8F7C:  0040A0E1     MOV r4, r0
		   0x014F8F80:  05508FE0     ADD r5, pc, r5
		   0x014F8F84:  0000D5E5     LDRB r0, [r5]
		   0x014F8F88:  000050E3     CMPS r0, r0, 0x0
		   0x014F8F8C:  1000001A     BNE $+0x48  // if (!=) goto 0x014F8FD4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F8F90:  70009FE5     LDR r0, [pc, 0x70]
		   0x014F8F94:  00009FE7     LDR r0, [pc, r0]
		   0x014F8F98:  7088E9EB     BL $-0x59de38
		   0x014F8F9C:  68009FE5     LDR r0, [pc, 0x68]
		   0x014F8FA0:  00009FE7     LDR r0, [pc, r0]
		   0x014F8FA4:  6D88E9EB     BL $-0x59de44
		   0x014F8FA8:  60009FE5     LDR r0, [pc, 0x60]
		   0x014F8FAC:  00009FE7     LDR r0, [pc, r0]
		   0x014F8FB0:  6A88E9EB     BL $-0x59de50
		   0x014F8FB4:  58009FE5     LDR r0, [pc, 0x58]
		   0x014F8FB8:  00009FE7     LDR r0, [pc, r0]
		   0x014F8FBC:  6788E9EB     BL $-0x59de5c
		   0x014F8FC0:  50009FE5     LDR r0, [pc, 0x50]
		   0x014F8FC4:  00009FE7     LDR r0, [pc, r0]
		   0x014F8FC8:  6488E9EB     BL $-0x59de68
		   0x014F8FCC:  0100A0E3     MOV r0, 0x1
		   0x014F8FD0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F8FD4:  000094E5     LDR r0, [r4]
		   0x014F8FD8:  010040E2     SUB r0, r0, 0x1
		   0x014F8FDC:  030050E3     CMPS r0, r0, 0x3
		   0x014F8FE0:  0300008A     BHI $+0x14  // if (> (unsigned)) goto 0x014F8FF4
		   // 
		   // ──── Block 3 else (<= (unsigned)) ────────────────────
		   0x014F8FE4:  34109FE5     LDR r1, [pc, 0x34]
		   0x014F8FE8:  01108FE0     ADD r1, pc, r1
		   0x014F8FEC:  000191E7     LDR r0, [r1, r0, lsl 2]
		   0x014F8FF0:  010000EA     B $+0xc  // goto 0x014F8FFC
		   // ──── Block 4 if (> (unsigned)) ────────────────────
		   0x014F8FF4:  20009FE5     LDR r0, [pc, 0x20]
		   0x014F8FF8:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 5 ──────────────────────────────
		   0x014F8FFC:  000090E5     LDR r0, [r0]
		   0x014F9000:  3088BDE8     POP {r4, r5, fp, pc}
		   0x014F9004:  8E4ED302     SBCSEQ r4, r3, 0x8e0
		   0x014F9008:  64EEB702     ADCSEQ lr, r7, 0x640
		   0x014F900C:  ACE8B802     ADCSEQ lr, r8, 0xac0000
		   0x014F9010:  A8E8B802     ADCSEQ lr, r8, 0xa80000
		   0x014F9014:  A0E8B802     ADCSEQ lr, r8, 0xa00000
		   0x014F9018:  9CE8B802     ADCSEQ lr, r8, 0x9c0000
		   0x014F901C:  00EEB702     ADCSEQ lr, r7, 0x0
		   0x014F9020:  0801A302     ADCEQ r0, r3, 0x2
		*/
	}

	// RVA: 0x14F9024 Offset: 0x14F9024 VA: 0x14F9024
	public static FieldGroup CreateCommon() {
		/* Disassembly (ARM32, 24 instructions, 0x60 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F9024:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x014F9028:  48509FE5     LDR r5, [pc, 0x48]
		   0x014F902C:  0040A0E1     MOV r4, r0
		   0x014F9030:  05508FE0     ADD r5, pc, r5
		   0x014F9034:  0000D5E5     LDRB r0, [r5]
		   0x014F9038:  000050E3     CMPS r0, r0, 0x0
		   0x014F903C:  0400001A     BNE $+0x18  // if (!=) goto 0x014F9054
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F9040:  34009FE5     LDR r0, [pc, 0x34]
		   0x014F9044:  00009FE7     LDR r0, [pc, r0]
		   0x014F9048:  4488E9EB     BL $-0x59dee8
		   0x014F904C:  0100A0E3     MOV r0, 0x1
		   0x014F9050:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F9054:  24009FE5     LDR r0, [pc, 0x24]
		   0x014F9058:  0010A0E3     MOV r1, 0x0
		   0x014F905C:  0120A0E3     MOV r2, 0x1
		   0x014F9060:  00009FE7     LDR r0, [pc, r0]
		   0x014F9064:  002084E5     STR r2, [r4]
		   0x014F9068:  041084E5     STR r1, [r4, 0x4]
		   0x014F906C:  000090E5     LDR r0, [r0]
		   0x014F9070:  080084E5     STR r0, [r4, 0x8]
		   0x014F9074:  3088BDE8     POP {r4, r5, fp, pc}
		   0x014F9078:  DF4DD302     SBCSEQ r4, r3, 0x37c0
		   0x014F907C:  04E6B702     ADCSEQ lr, r7, 0x400000
		   0x014F9080:  E8E5B702     ADCSEQ lr, r7, 0x3a000000
		*/
	}

	// RVA: 0x14F9084 Offset: 0x14F9084 VA: 0x14F9084
	public static FieldGroup CreateSeasons(int subtype) {
		/* Disassembly (ARM32, 23 instructions, 0x5C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F9084:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x014F9088:  44609FE5     LDR r6, [pc, 0x44]
		   0x014F908C:  0040A0E1     MOV r4, r0
		   0x014F9090:  0150A0E1     MOV r5, r1
		   0x014F9094:  06608FE0     ADD r6, pc, r6
		   0x014F9098:  0000D6E5     LDRB r0, [r6]
		   0x014F909C:  000050E3     CMPS r0, r0, 0x0
		   0x014F90A0:  0400001A     BNE $+0x18  // if (!=) goto 0x014F90B8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F90A4:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x014F90A8:  00009FE7     LDR r0, [pc, r0]
		   0x014F90AC:  2B88E9EB     BL $-0x59df4c
		   0x014F90B0:  0100A0E3     MOV r0, 0x1
		   0x014F90B4:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F90B8:  1C009FE5     LDR r0, [pc, 0x1c]
		   0x014F90BC:  0210A0E3     MOV r1, 0x2
		   0x014F90C0:  00009FE7     LDR r0, [pc, r0]
		   0x014F90C4:  220084E8     STM r4, {r1, r5}
		   0x014F90C8:  000090E5     LDR r0, [r0]
		   0x014F90CC:  080084E5     STR r0, [r4, 0x8]
		   0x014F90D0:  7080BDE8     POP {r4, r5, r6, pc}
		   0x014F90D4:  7C4DD302     SBCSEQ r4, r3, 0x1f00
		   0x014F90D8:  A0E5B702     ADCSEQ lr, r7, 0x28000000
		   0x014F90DC:  88E5B702     ADCSEQ lr, r7, 0x22000000
		*/
	}

	// RVA: 0x14F90E0 Offset: 0x14F90E0 VA: 0x14F90E0
	public static FieldGroup CreateWorkshop(int workshopIdx) {
		/* Disassembly (ARM32, 23 instructions, 0x5C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F90E0:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x014F90E4:  44609FE5     LDR r6, [pc, 0x44]
		   0x014F90E8:  0040A0E1     MOV r4, r0
		   0x014F90EC:  0150A0E1     MOV r5, r1
		   0x014F90F0:  06608FE0     ADD r6, pc, r6
		   0x014F90F4:  0000D6E5     LDRB r0, [r6]
		   0x014F90F8:  000050E3     CMPS r0, r0, 0x0
		   0x014F90FC:  0400001A     BNE $+0x18  // if (!=) goto 0x014F9114
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F9100:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x014F9104:  00009FE7     LDR r0, [pc, r0]
		   0x014F9108:  1488E9EB     BL $-0x59dfa8
		   0x014F910C:  0100A0E3     MOV r0, 0x1
		   0x014F9110:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F9114:  1C009FE5     LDR r0, [pc, 0x1c]
		   0x014F9118:  0410A0E3     MOV r1, 0x4
		   0x014F911C:  00009FE7     LDR r0, [pc, r0]
		   0x014F9120:  220084E8     STM r4, {r1, r5}
		   0x014F9124:  000090E5     LDR r0, [r0]
		   0x014F9128:  080084E5     STR r0, [r4, 0x8]
		   0x014F912C:  7080BDE8     POP {r4, r5, r6, pc}
		   0x014F9130:  214DD302     SBCSEQ r4, r3, 0x840
		   0x014F9134:  3CD9B702     ADCSEQ sp, r7, 0xf0000
		   0x014F9138:  24D9B702     ADCSEQ sp, r7, 0x90000
		*/
	}

	// RVA: 0x14F913C Offset: 0x14F913C VA: 0x14F913C
	public static FieldGroup CreateSidejob(SideJobsTypes sideJobsType) {
		/* Disassembly (ARM32, 23 instructions, 0x5C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F913C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x014F9140:  44609FE5     LDR r6, [pc, 0x44]
		   0x014F9144:  0040A0E1     MOV r4, r0
		   0x014F9148:  0150A0E1     MOV r5, r1
		   0x014F914C:  06608FE0     ADD r6, pc, r6
		   0x014F9150:  0000D6E5     LDRB r0, [r6]
		   0x014F9154:  000050E3     CMPS r0, r0, 0x0
		   0x014F9158:  0400001A     BNE $+0x18  // if (!=) goto 0x014F9170
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F915C:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x014F9160:  00009FE7     LDR r0, [pc, r0]
		   0x014F9164:  FD87E9EB     BL $-0x59e004
		   0x014F9168:  0100A0E3     MOV r0, 0x1
		   0x014F916C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F9170:  1C009FE5     LDR r0, [pc, 0x1c]
		   0x014F9174:  0310A0E3     MOV r1, 0x3
		   0x014F9178:  00009FE7     LDR r0, [pc, r0]
		   0x014F917C:  220084E8     STM r4, {r1, r5}
		   0x014F9180:  000090E5     LDR r0, [r0]
		   0x014F9184:  080084E5     STR r0, [r4, 0x8]
		   0x014F9188:  7080BDE8     POP {r4, r5, r6, pc}
		   0x014F918C:  C64CD302     SBCSEQ r4, r3, 0xc600
		   0x014F9190:  E0D8B702     ADCSEQ sp, r7, 0xe00000
		   0x014F9194:  C8D8B702     ADCSEQ sp, r7, 0xc80000
		*/
	}

	// RVA: 0x14F9198 Offset: 0x14F9198 VA: 0x14F9198
	public static int GetSeasonByEpisode(int episode) {
		/* Disassembly (ARM32, 144 instructions, 0x240 bytes):
		   // CFG: 38 blocks, 39 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F9198:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x014F919C:  04D04DE2     SUB sp, sp, 0x4
		   0x014F91A0:  10429FE5     LDR r4, [pc, 0x210]
		   0x014F91A4:  00A0A0E1     MOV r10, r0
		   0x014F91A8:  04408FE0     ADD r4, pc, r4
		   0x014F91AC:  0000D4E5     LDRB r0, [r4]
		   0x014F91B0:  000050E3     CMPS r0, r0, 0x0
		   0x014F91B4:  0D00001A     BNE $+0x3c  // if (!=) goto 0x014F91F0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F91B8:  FC019FE5     LDR r0, [pc, 0x1fc]
		   0x014F91BC:  00009FE7     LDR r0, [pc, r0]
		   0x014F91C0:  E687E9EB     BL $-0x59e060
		   0x014F91C4:  F4019FE5     LDR r0, [pc, 0x1f4]
		   0x014F91C8:  00009FE7     LDR r0, [pc, r0]
		   0x014F91CC:  E387E9EB     BL $-0x59e06c
		   0x014F91D0:  EC019FE5     LDR r0, [pc, 0x1ec]
		   0x014F91D4:  00009FE7     LDR r0, [pc, r0]
		   0x014F91D8:  E087E9EB     BL $-0x59e078
		   0x014F91DC:  E4019FE5     LDR r0, [pc, 0x1e4]
		   0x014F91E0:  00009FE7     LDR r0, [pc, r0]
		   0x014F91E4:  DD87E9EB     BL $-0x59e084
		   0x014F91E8:  0100A0E3     MOV r0, 0x1
		   0x014F91EC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F91F0:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x014F91F4:  00009FE7     LDR r0, [pc, r0]
		   0x014F91F8:  000090E5     LDR r0, [r0]
		   0x014F91FC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014F9200:  004090E5     LDR r4, [r0]
		   0x014F9204:  000054E3     CMPS r0, r4, 0x0
		   0x014F9208:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9210
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014F920C:  6F88E9EB     BL $-0x59de3c
		   // ──── Block 4 if (!=) ────────────────────
		   0x014F9210:  204094E5     LDR r4, [r4, 0x20]
		   0x014F9214:  000054E3     CMPS r0, r4, 0x0
		   0x014F9218:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9220
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014F921C:  6B88E9EB     BL $-0x59de4c
		   // ──── Block 6 if (!=) ────────────────────
		   0x014F9220:  107094E5     LDR r7, [r4, 0x10]
		   0x014F9224:  00B0A0E3     MOV fp, 0x0
		   0x014F9228:  A0819FE5     LDR r8, [pc, 0x1a0]
		   0x014F922C:  0040A0E3     MOV r4, 0x0
		   0x014F9230:  08809FE7     LDR r8, [pc, r8]
		   0x014F9234:  98919FE5     LDR sb, [pc, 0x198]
		   0x014F9238:  09909FE7     LDR sb, [pc, sb]
		   0x014F923C:  000057E3     CMPS r0, r7, 0x0
		   0x014F9240:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9248
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x014F9244:  6188E9EB     BL $-0x59de74
		   // ──── Block 8 if (!=) ────────────────────
		   0x014F9248:  086097E5     LDR r6, [r7, 0x8]
		   0x014F924C:  000056E3     CMPS r0, r6, 0x0
		   0x014F9250:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9258
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x014F9254:  5D88E9EB     BL $-0x59de84
		   // ──── Block 10 if (!=) ────────────────────
		   0x014F9258:  000096E5     LDR r0, [r6]
		   0x014F925C:  001098E5     LDR r1, [r8]
		   0x014F9260:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x014F9264:  000052E3     CMPS r0, r2, 0x0
		   0x014F9268:  0700000A     BEQ $+0x24  // if (==) goto 0x014F928C
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x014F926C:  583090E5     LDR r3, [r0, 0x58]
		   0x014F9270:  043083E2     ADD r3, r3, 0x4
		   0x014F9274:  045013E5     LDR r5, [r3, -0x4]
		   0x014F9278:  010055E1     CMPS r0, r5, r1
		   0x014F927C:  0600000A     BEQ $+0x20  // if (==) goto 0x014F929C
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x014F9280:  012052E2     SUBS r2, r2, 0x1
		   0x014F9284:  083083E2     ADD r3, r3, 0x8
		   0x014F9288:  F9FFFF1A     BNE $-0x14
		   // ──── Block 13 (from 2 paths) ──────────────────
		   0x014F928C:  0600A0E1     MOV r0, r6
		   0x014F9290:  0020A0E3     MOV r2, 0x0
		   0x014F9294:  FB76EAEB     BL $-0x56240c
		   0x014F9298:  020000EA     B $+0x10  // goto 0x014F92A8
		   // ──── Block 14 if (==) ────────────────────
		   0x014F929C:  001093E5     LDR r1, [r3]
		   0x014F92A0:  810180E0     ADD r0, r0, r1, lsl 3
		   0x014F92A4:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 15 ──────────────────────────────
		   0x014F92A8:  D020C0E1     LDRD r2, r3, [r0]
		   0x014F92AC:  0600A0E1     MOV r0, r6
		   0x014F92B0:  0310A0E1     MOV r1, r3
		   0x014F92B4:  32FF2FE1     BLX r2
		   0x014F92B8:  00005BE1     CMPS r0, fp, r0
		   0x014F92BC:  310000AA     BGE $+0xcc  // if (>=) goto 0x014F9388
		   // 
		   // ──── Block 16 else (r2 < r2, 0x1) ────────────────────
		   0x014F92C0:  000057E3     CMPS r0, r7, 0x0
		   0x014F92C4:  0000001A     BNE $+0x8  // if (!=) goto 0x014F92CC
		   // 
		   // ──── Block 17 else (r2 == r2, 0x1) ────────────────────
		   0x014F92C8:  4088E9EB     BL $-0x59def8
		   // ──── Block 18 if (r2 != r2, 0x1) ────────────────────
		   0x014F92CC:  086097E5     LDR r6, [r7, 0x8]
		   0x014F92D0:  000056E3     CMPS r0, r6, 0x0
		   0x014F92D4:  0000001A     BNE $+0x8  // if (!=) goto 0x014F92DC
		   // 
		   // ──── Block 19 else (r2 == r2, 0x1) ────────────────────
		   0x014F92D8:  3C88E9EB     BL $-0x59df08
		   // ──── Block 20 if (r2 != r2, 0x1) ────────────────────
		   0x014F92DC:  000096E5     LDR r0, [r6]
		   0x014F92E0:  001099E5     LDR r1, [sb]
		   0x014F92E4:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x014F92E8:  000052E3     CMPS r0, r2, 0x0
		   0x014F92EC:  0700000A     BEQ $+0x24  // if (==) goto 0x014F9310
		   // 
		   // ──── Block 21 else (r2 != r2, 0x1) ────────────────────
		   0x014F92F0:  583090E5     LDR r3, [r0, 0x58]
		   0x014F92F4:  043083E2     ADD r3, r3, 0x4
		   0x014F92F8:  045013E5     LDR r5, [r3, -0x4]
		   0x014F92FC:  010055E1     CMPS r0, r5, r1
		   0x014F9300:  0600000A     BEQ $+0x20  // if (==) goto 0x014F9320
		   // 
		   // ──── Block 22 else (r2 != r2, 0x1) ────────────────────
		   0x014F9304:  012052E2     SUBS r2, r2, 0x1
		   0x014F9308:  083083E2     ADD r3, r3, 0x8
		   0x014F930C:  F9FFFF1A     BNE $-0x14
		   // ──── Block 23 (from 2 paths) ──────────────────
		   0x014F9310:  0600A0E1     MOV r0, r6
		   0x014F9314:  0020A0E3     MOV r2, 0x0
		   0x014F9318:  DA76EAEB     BL $-0x562490
		   0x014F931C:  020000EA     B $+0x10  // goto 0x014F932C
		   // ──── Block 24 if (r2 == r2, 0x1) ────────────────────
		   0x014F9320:  001093E5     LDR r1, [r3]
		   0x014F9324:  810180E0     ADD r0, r0, r1, lsl 3
		   0x014F9328:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 25 ──────────────────────────────
		   0x014F932C:  280090E8     LDM r0, {r3, r5}
		   0x014F9330:  0600A0E1     MOV r0, r6
		   0x014F9334:  0B10A0E1     MOV r1, fp
		   0x014F9338:  0520A0E1     MOV r2, r5
		   0x014F933C:  33FF2FE1     BLX r3
		   0x014F9340:  0060A0E1     MOV r6, r0
		   0x014F9344:  000050E3     CMPS r0, r0, 0x0
		   0x014F9348:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9350
		   // 
		   // ──── Block 26 else (r2 == r2, 0x1) ────────────────────
		   0x014F934C:  1F88E9EB     BL $-0x59df7c
		   // ──── Block 27 if (r2 != r2, 0x1) ────────────────────
		   0x014F9350:  306096E5     LDR r6, [r6, 0x30]
		   0x014F9354:  000056E3     CMPS r0, r6, 0x0
		   0x014F9358:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9360
		   // 
		   // ──── Block 28 else (r2 == r2, 0x1) ────────────────────
		   0x014F935C:  1B88E9EB     BL $-0x59df8c
		   // ──── Block 29 if (r2 != r2, 0x1) ────────────────────
		   0x014F9360:  086096E5     LDR r6, [r6, 0x8]
		   0x014F9364:  000056E3     CMPS r0, r6, 0x0
		   0x014F9368:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9370
		   // 
		   // ──── Block 30 else (r2 == r2, 0x1) ────────────────────
		   0x014F936C:  1788E9EB     BL $-0x59df9c
		   // ──── Block 31 if (r2 != r2, 0x1) ────────────────────
		   0x014F9370:  0C0096E5     LDR r0, [r6, 0xc]
		   0x014F9374:  044080E0     ADD r4, r0, r4
		   0x014F9378:  0A0054E1     CMPS r0, r4, r10
		   0x014F937C:  0A0000CA     BGT $+0x30  // if (>) goto 0x014F93AC
		   // 
		   // ──── Block 32 else (r2 <= r2, 0x1) ────────────────────
		   0x014F9380:  01B08BE2     ADD fp, fp, 0x1
		   0x014F9384:  ACFFFFEA     B $-0x148
		   // ──── Block 33 if (r2 >= r2, 0x1) ────────────────────
		   0x014F9388:  12005AE3     CMPS r0, r10, 0x12
		   0x014F938C:  030000DA     BLE $+0x14  // if (<=) goto 0x014F93A0
		   // 
		   // ──── Block 34 else (r2 > r2, 0x1) ────────────────────
		   0x014F9390:  02B0A0E3     MOV fp, 0x2
		   0x014F9394:  1D005AE3     CMPS r0, r10, 0x1d
		   0x014F9398:  03B00083     MOVHI fp, 0x3
		   0x014F939C:  020000EA     B $+0x10  // goto 0x014F93AC
		   // ──── Block 35 if (r2 <= r2, 0x1) ────────────────────
		   0x014F93A0:  00B0A0E3     MOV fp, 0x0
		   0x014F93A4:  09005AE3     CMPS r0, r10, 0x9
		   0x014F93A8:  01B000C3     MOVGT fp, 0x1
		   // ──── Block 36 if (r2 > r2, 0x1) ────────────────────
		   0x014F93AC:  0B00A0E1     MOV r0, fp
		   0x014F93B0:  04D08DE2     ADD sp, sp, 0x4
		   0x014F93B4:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x014F93B8:  6B4CD302     SBCSEQ r4, r3, 0x6b00
		   0x014F93BC:  9CFEB702     ADCSEQ pc, r7, 0x9c0
		   0x014F93C0:  94FEB702     ADCSEQ pc, r7, 0x940
		   0x014F93C4:  90FEB702     ADCSEQ pc, r7, 0x900
		   0x014F93C8:  08F3B702     ADCSEQ pc, r7, 0x20000000
		   0x014F93CC:  F4F2B702     ADCSEQ pc, r7, 0x4000000f
		   0x014F93D0:  28FEB702     ADCSEQ pc, r7, 0x280
		   0x014F93D4:  24FEB702     ADCSEQ pc, r7, 0x240
		*/
	}

	// RVA: 0x14F93D8 Offset: 0x14F93D8 VA: 0x14F93D8
	public static int GetEpisodeIndexInSeason(int episode) {
		/* Disassembly (ARM32, 139 instructions, 0x22C bytes):
		   // CFG: 36 blocks, 36 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F93D8:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x014F93DC:  04D04DE2     SUB sp, sp, 0x4
		   0x014F93E0:  FC419FE5     LDR r4, [pc, 0x1fc]
		   0x014F93E4:  00A0A0E1     MOV r10, r0
		   0x014F93E8:  04408FE0     ADD r4, pc, r4
		   0x014F93EC:  0000D4E5     LDRB r0, [r4]
		   0x014F93F0:  000050E3     CMPS r0, r0, 0x0
		   0x014F93F4:  0D00001A     BNE $+0x3c  // if (!=) goto 0x014F9430
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F93F8:  E8019FE5     LDR r0, [pc, 0x1e8]
		   0x014F93FC:  00009FE7     LDR r0, [pc, r0]
		   0x014F9400:  5687E9EB     BL $-0x59e2a0
		   0x014F9404:  E0019FE5     LDR r0, [pc, 0x1e0]
		   0x014F9408:  00009FE7     LDR r0, [pc, r0]
		   0x014F940C:  5387E9EB     BL $-0x59e2ac
		   0x014F9410:  D8019FE5     LDR r0, [pc, 0x1d8]
		   0x014F9414:  00009FE7     LDR r0, [pc, r0]
		   0x014F9418:  5087E9EB     BL $-0x59e2b8
		   0x014F941C:  D0019FE5     LDR r0, [pc, 0x1d0]
		   0x014F9420:  00009FE7     LDR r0, [pc, r0]
		   0x014F9424:  4D87E9EB     BL $-0x59e2c4
		   0x014F9428:  0100A0E3     MOV r0, 0x1
		   0x014F942C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F9430:  C0019FE5     LDR r0, [pc, 0x1c0]
		   0x014F9434:  00009FE7     LDR r0, [pc, r0]
		   0x014F9438:  000090E5     LDR r0, [r0]
		   0x014F943C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014F9440:  004090E5     LDR r4, [r0]
		   0x014F9444:  000054E3     CMPS r0, r4, 0x0
		   0x014F9448:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9450
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014F944C:  DF87E9EB     BL $-0x59e07c
		   // ──── Block 4 if (!=) ────────────────────
		   0x014F9450:  204094E5     LDR r4, [r4, 0x20]
		   0x014F9454:  000054E3     CMPS r0, r4, 0x0
		   0x014F9458:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9460
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014F945C:  DB87E9EB     BL $-0x59e08c
		   // ──── Block 6 if (!=) ────────────────────
		   0x014F9460:  107094E5     LDR r7, [r4, 0x10]
		   0x014F9464:  0050A0E3     MOV r5, 0x0
		   0x014F9468:  8C819FE5     LDR r8, [pc, 0x18c]
		   0x014F946C:  0000A0E3     MOV r0, 0x0
		   0x014F9470:  08809FE7     LDR r8, [pc, r8]
		   0x014F9474:  84919FE5     LDR sb, [pc, 0x184]  // vtable: FieldGroup.Equals
		   0x014F9478:  09909FE7     LDR sb, [pc, sb]
		   0x014F947C:  00B0A0E1     MOV fp, r0
		   0x014F9480:  000057E3     CMPS r0, r7, 0x0
		   0x014F9484:  0000001A     BNE $+0x8  // if (!=) goto 0x014F948C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x014F9488:  D087E9EB     BL $-0x59e0b8
		   // ──── Block 8 if (!=) ────────────────────
		   0x014F948C:  086097E5     LDR r6, [r7, 0x8]
		   0x014F9490:  000056E3     CMPS r0, r6, 0x0
		   0x014F9494:  0000001A     BNE $+0x8  // if (!=) goto 0x014F949C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x014F9498:  CC87E9EB     BL $-0x59e0c8
		   // ──── Block 10 if (!=) ────────────────────
		   0x014F949C:  000096E5     LDR r0, [r6]
		   0x014F94A0:  001098E5     LDR r1, [r8]
		   0x014F94A4:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x014F94A8:  000052E3     CMPS r0, r2, 0x0
		   0x014F94AC:  0700000A     BEQ $+0x24  // if (==) goto 0x014F94D0
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x014F94B0:  583090E5     LDR r3, [r0, 0x58]
		   0x014F94B4:  043083E2     ADD r3, r3, 0x4
		   0x014F94B8:  044013E5     LDR r4, [r3, -0x4]
		   0x014F94BC:  010054E1     CMPS r0, r4, r1
		   0x014F94C0:  0600000A     BEQ $+0x20  // if (==) goto 0x014F94E0
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x014F94C4:  012052E2     SUBS r2, r2, 0x1
		   0x014F94C8:  083083E2     ADD r3, r3, 0x8
		   0x014F94CC:  F9FFFF1A     BNE $-0x14
		   // ──── Block 13 (from 2 paths) ──────────────────
		   0x014F94D0:  0600A0E1     MOV r0, r6
		   0x014F94D4:  0020A0E3     MOV r2, 0x0
		   0x014F94D8:  6A76EAEB     BL $-0x562650
		   0x014F94DC:  020000EA     B $+0x10  // goto 0x014F94EC
		   // ──── Block 14 if (==) ────────────────────
		   0x014F94E0:  001093E5     LDR r1, [r3]
		   0x014F94E4:  810180E0     ADD r0, r0, r1, lsl 3
		   0x014F94E8:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 15 ──────────────────────────────
		   0x014F94EC:  D020C0E1     LDRD r2, r3, [r0]
		   0x014F94F0:  0600A0E1     MOV r0, r6
		   0x014F94F4:  0310A0E1     MOV r1, r3
		   0x014F94F8:  32FF2FE1     BLX r2
		   0x014F94FC:  000055E1     CMPS r0, r5, r0
		   0x014F9500:  340000AA     BGE $+0xd8  // if (>=) goto 0x014F95D8
		   // 
		   // ──── Block 16 else (r2 < r2, 0x1) ────────────────────
		   0x014F9504:  000057E3     CMPS r0, r7, 0x0
		   0x014F9508:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9510
		   // 
		   // ──── Block 17 else (r2 == r2, 0x1) ────────────────────
		   0x014F950C:  AF87E9EB     BL $-0x59e13c
		   // ──── Block 18 if (r2 != r2, 0x1) ────────────────────
		   0x014F9510:  086097E5     LDR r6, [r7, 0x8]
		   0x014F9514:  000056E3     CMPS r0, r6, 0x0
		   0x014F9518:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9520
		   // 
		   // ──── Block 19 else (r2 == r2, 0x1) ────────────────────
		   0x014F951C:  AB87E9EB     BL $-0x59e14c
		   // ──── Block 20 if (r2 != r2, 0x1) ────────────────────
		   0x014F9520:  000096E5     LDR r0, [r6]
		   0x014F9524:  001099E5     LDR r1, [sb]
		   0x014F9528:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x014F952C:  000052E3     CMPS r0, r2, 0x0
		   0x014F9530:  0700000A     BEQ $+0x24  // if (==) goto 0x014F9554
		   // 
		   // ──── Block 21 else (r2 != r2, 0x1) ────────────────────
		   0x014F9534:  583090E5     LDR r3, [r0, 0x58]
		   0x014F9538:  043083E2     ADD r3, r3, 0x4
		   0x014F953C:  044013E5     LDR r4, [r3, -0x4]
		   0x014F9540:  010054E1     CMPS r0, r4, r1
		   0x014F9544:  0600000A     BEQ $+0x20  // if (==) goto 0x014F9564
		   // 
		   // ──── Block 22 else (r2 != r2, 0x1) ────────────────────
		   0x014F9548:  012052E2     SUBS r2, r2, 0x1
		   0x014F954C:  083083E2     ADD r3, r3, 0x8
		   0x014F9550:  F9FFFF1A     BNE $-0x14
		   // ──── Block 23 (from 2 paths) ──────────────────
		   0x014F9554:  0600A0E1     MOV r0, r6
		   0x014F9558:  0020A0E3     MOV r2, 0x0
		   0x014F955C:  4976EAEB     BL $-0x5626d4
		   0x014F9560:  020000EA     B $+0x10  // goto 0x014F9570
		   // ──── Block 24 if (r2 == r2, 0x1) ────────────────────
		   0x014F9564:  001093E5     LDR r1, [r3]
		   0x014F9568:  810180E0     ADD r0, r0, r1, lsl 3
		   0x014F956C:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 25 ──────────────────────────────
		   0x014F9570:  043090E5     LDR r3, [r0, 0x4]
		   0x014F9574:  0510A0E1     MOV r1, r5
		   0x014F9578:  004090E5     LDR r4, [r0]
		   0x014F957C:  0600A0E1     MOV r0, r6
		   0x014F9580:  0320A0E1     MOV r2, r3
		   0x014F9584:  34FF2FE1     BLX r4  // virtual call: FieldGroup.Equals
		   0x014F9588:  0060A0E1     MOV r6, r0
		   0x014F958C:  000050E3     CMPS r0, r0, 0x0
		   0x014F9590:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9598
		   // 
		   // ──── Block 26 else (r2 == r2, 0x1) ────────────────────
		   0x014F9594:  8D87E9EB     BL $-0x59e1c4
		   // ──── Block 27 if (r2 != r2, 0x1) ────────────────────
		   0x014F9598:  306096E5     LDR r6, [r6, 0x30]
		   0x014F959C:  000056E3     CMPS r0, r6, 0x0
		   0x014F95A0:  0000001A     BNE $+0x8  // if (!=) goto 0x014F95A8
		   // 
		   // ──── Block 28 else (r2 == r2, 0x1) ────────────────────
		   0x014F95A4:  8987E9EB     BL $-0x59e1d4
		   // ──── Block 29 if (r2 != r2, 0x1) ────────────────────
		   0x014F95A8:  086096E5     LDR r6, [r6, 0x8]
		   0x014F95AC:  000056E3     CMPS r0, r6, 0x0
		   0x014F95B0:  0000001A     BNE $+0x8  // if (!=) goto 0x014F95B8
		   // 
		   // ──── Block 30 else (r2 == r2, 0x1) ────────────────────
		   0x014F95B4:  8587E9EB     BL $-0x59e1e4
		   // ──── Block 31 if (r2 != r2, 0x1) ────────────────────
		   0x014F95B8:  0C0096E5     LDR r0, [r6, 0xc]
		   0x014F95BC:  015085E2     ADD r5, r5, 0x1
		   0x014F95C0:  0B0080E0     ADD r0, r0, fp
		   0x014F95C4:  0A0050E1     CMPS r0, r0, r10
		   0x014F95C8:  ABFFFFDA     BLE $-0x14c
		   // ──── Block 32 else (r2 > r2, 0x1) ────────────────────
		   0x014F95CC:  0B00E0E1     MVN r0, fp
		   0x014F95D0:  0A0080E0     ADD r0, r0, r10
		   0x014F95D4:  000000EA     B $+0x8  // goto 0x014F95DC
		   // ──── Block 33 if (r2 >= r2, 0x1) ────────────────────
		   0x014F95D8:  0000E0E3     MVN r0, r0, 0x0
		   // ──── Block 34 ──────────────────────────────
		   0x014F95DC:  04D08DE2     ADD sp, sp, 0x4
		   0x014F95E0:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x014F95E4:  2C4AD302     SBCSEQ r4, r3, 0x2c000
		   0x014F95E8:  5CFCB702     ADCSEQ pc, r7, 0x5c00
		   0x014F95EC:  54FCB702     ADCSEQ pc, r7, 0x5400
		   0x014F95F0:  50FCB702     ADCSEQ pc, r7, 0x5000
		   0x014F95F4:  C8F0B702     ADCSEQ pc, r7, 0xc8
		   0x014F95F8:  B4F0B702     ADCSEQ pc, r7, 0xb4
		   0x014F95FC:  E8FBB702     ADCSEQ pc, r7, 0x3a000
		   0x014F9600:  E4FBB702     ADCSEQ pc, r7, 0x39000
		*/
	}

	// RVA: 0x14F9604 Offset: 0x14F9604 VA: 0x14F9604
	public static bool op_Equality(FieldGroup x, FieldGroup y) {
		/* Disassembly (ARM32, 37 instructions, 0x94 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F9604:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x014F9608:  7C709FE5     LDR r7, [pc, 0x7c]
		   0x014F960C:  0060A0E1     MOV r6, r0
		   0x014F9610:  0350A0E1     MOV r5, r3
		   0x014F9614:  0140A0E1     MOV r4, r1
		   0x014F9618:  07708FE0     ADD r7, pc, r7
		   0x014F961C:  0000D7E5     LDRB r0, [r7]
		   0x014F9620:  000050E3     CMPS r0, r0, 0x0
		   0x014F9624:  0400001A     BNE $+0x18  // if (!=) goto 0x014F963C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F9628:  60009FE5     LDR r0, [pc, 0x60]
		   0x014F962C:  00009FE7     LDR r0, [pc, r0]
		   0x014F9630:  CA86E9EB     BL $-0x59e4d0
		   0x014F9634:  0100A0E3     MOV r0, 0x1
		   0x014F9638:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F963C:  50709FE5     LDR r7, [pc, 0x50]
		   0x014F9640:  07709FE7     LDR r7, [pc, r7]
		   0x014F9644:  000097E5     LDR r0, [r7]
		   0x014F9648:  741090E5     LDR r1, [r0, 0x74]
		   0x014F964C:  000051E3     CMPS r0, r1, 0x0
		   0x014F9650:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9658
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014F9654:  0E87E9EB     BL $-0x59e3c0
		   // ──── Block 4 if (!=) ────────────────────
		   0x014F9658:  0000A0E3     MOV r0, 0x0
		   0x014F965C:  050056E1     CMPS r0, r6, r5
		   0x014F9660:  0800001A     BNE $+0x28  // if (!=) goto 0x014F9688
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014F9664:  000097E5     LDR r0, [r7]
		   0x014F9668:  18509DE5     LDR r5, [sp, 0x18]
		   0x014F966C:  741090E5     LDR r1, [r0, 0x74]
		   0x014F9670:  000051E3     CMPS r0, r1, 0x0
		   0x014F9674:  0000001A     BNE $+0x8  // if (!=) goto 0x014F967C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014F9678:  0587E9EB     BL $-0x59e3e4
		   // ──── Block 7 if (!=) ────────────────────
		   0x014F967C:  050044E0     SUB r0, r4, r5
		   0x014F9680:  100F6FE1     CLZ r0, r0
		   0x014F9684:  A002A0E1     MOV r0, r0, r0, lsr 5
		   // ──── Block 8 if (!=) ────────────────────
		   0x014F9688:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x014F968C:  FD47D302     SBCSEQ r4, r3, 0x3f40000
		   0x014F9690:  B4EEB702     ADCSEQ lr, r7, 0xb40
		   0x014F9694:  A0EEB702     ADCSEQ lr, r7, 0xa00
		*/
	}

	// RVA: 0x14F9698 Offset: 0x14F9698 VA: 0x14F9698
	public static bool op_Inequality(FieldGroup x, FieldGroup y) {
		/* Disassembly (ARM32, 36 instructions, 0x90 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F9698:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x014F969C:  78709FE5     LDR r7, [pc, 0x78]
		   0x014F96A0:  0060A0E1     MOV r6, r0
		   0x014F96A4:  0350A0E1     MOV r5, r3
		   0x014F96A8:  0140A0E1     MOV r4, r1
		   0x014F96AC:  07708FE0     ADD r7, pc, r7
		   0x014F96B0:  0000D7E5     LDRB r0, [r7]
		   0x014F96B4:  000050E3     CMPS r0, r0, 0x0
		   0x014F96B8:  0400001A     BNE $+0x18  // if (!=) goto 0x014F96D0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F96BC:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x014F96C0:  00009FE7     LDR r0, [pc, r0]
		   0x014F96C4:  A586E9EB     BL $-0x59e564
		   0x014F96C8:  0100A0E3     MOV r0, 0x1
		   0x014F96CC:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F96D0:  4C709FE5     LDR r7, [pc, 0x4c]
		   0x014F96D4:  07709FE7     LDR r7, [pc, r7]
		   0x014F96D8:  000097E5     LDR r0, [r7]
		   0x014F96DC:  741090E5     LDR r1, [r0, 0x74]
		   0x014F96E0:  000051E3     CMPS r0, r1, 0x0
		   0x014F96E4:  0000001A     BNE $+0x8  // if (!=) goto 0x014F96EC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014F96E8:  E986E9EB     BL $-0x59e454
		   // ──── Block 4 if (!=) ────────────────────
		   0x014F96EC:  0100A0E3     MOV r0, 0x1
		   0x014F96F0:  050056E1     CMPS r0, r6, r5
		   0x014F96F4:  0700001A     BNE $+0x24  // if (!=) goto 0x014F9718
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014F96F8:  000097E5     LDR r0, [r7]
		   0x014F96FC:  18509DE5     LDR r5, [sp, 0x18]
		   0x014F9700:  741090E5     LDR r1, [r0, 0x74]
		   0x014F9704:  000051E3     CMPS r0, r1, 0x0
		   0x014F9708:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9710
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014F970C:  E086E9EB     BL $-0x59e478
		   // ──── Block 7 if (!=) ────────────────────
		   0x014F9710:  050054E0     SUBS r0, r4, r5
		   0x014F9714:  01000013     MOVNE r0, 0x1
		   // ──── Block 8 if (!=) ────────────────────
		   0x014F9718:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x014F971C:  6A47D302     SBCSEQ r4, r3, 0x1a80000
		   0x014F9720:  20EEB702     ADCSEQ lr, r7, 0x200
		   0x014F9724:  0CEEB702     ADCSEQ lr, r7, 0xc0
		*/
	}

	// RVA: 0x14F9728 Offset: 0x14F9728 VA: 0x14F9728 Slot: 3
	public override string ToString() {
		/* Disassembly (ARM32, 43 instructions, 0xAC bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F9728:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x014F972C:  08D04DE2     SUB sp, sp, 0x8
		   0x014F9730:  90509FE5     LDR r5, [pc, 0x90]
		   0x014F9734:  0040A0E1     MOV r4, r0
		   0x014F9738:  05508FE0     ADD r5, pc, r5
		   0x014F973C:  0000D5E5     LDRB r0, [r5]
		   0x014F9740:  000050E3     CMPS r0, r0, 0x0
		   0x014F9744:  0400001A     BNE $+0x18  // if (!=) goto 0x014F975C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F9748:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x014F974C:  00009FE7     LDR r0, [pc, r0]
		   0x014F9750:  8286E9EB     BL $-0x59e5f0
		   0x014F9754:  0100A0E3     MOV r0, 0x1
		   0x014F9758:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F975C:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x014F9760:  0020A0E3     MOV r2, 0x0
		   0x014F9764:  00009FE7     LDR r0, [pc, r0]
		   0x014F9768:  04208DE5     STR r2, [sp, 0x4]
		   0x014F976C:  000090E5     LDR r0, [r0]
		   0x014F9770:  741090E5     LDR r1, [r0, 0x74]
		   0x014F9774:  000051E3     CMPS r0, r1, 0x0
		   0x014F9778:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9780
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014F977C:  C486E9EB     BL $-0x59e4e8
		   // ──── Block 4 if (!=) ────────────────────
		   0x014F9780:  04508DE2     ADD r5, sp, 0x4
		   0x014F9784:  000094E5     LDR r0, [r4]
		   0x014F9788:  04008DE5     STR r0, [sp, 0x4]
		   0x014F978C:  0010A0E3     MOV r1, 0x0
		   0x014F9790:  0500A0E1     MOV r0, r5
		   0x014F9794:  232B6DEB     BL $+0x1b4ac94  // CALL → Int32.ToString
		   0x014F9798:  0060A0E1     MOV r6, r0
		   0x014F979C:  040094E5     LDR r0, [r4, 0x4]
		   0x014F97A0:  04008DE5     STR r0, [sp, 0x4]
		   0x014F97A4:  0500A0E1     MOV r0, r5
		   0x014F97A8:  0010A0E3     MOV r1, 0x0
		   0x014F97AC:  1D2B6DEB     BL $+0x1b4ac7c  // CALL → Int32.ToString
		   0x014F97B0:  0010A0E1     MOV r1, r0
		   0x014F97B4:  0600A0E1     MOV r0, r6
		   0x014F97B8:  0020A0E3     MOV r2, 0x0
		   0x014F97BC:  DF3F66EB     BL $+0x198ff84  // CALL → String.Concat
		   0x014F97C0:  08D08DE2     ADD sp, sp, 0x8
		   0x014F97C4:  7080BDE8     POP {r4, r5, r6, pc}
		   0x014F97C8:  DF46D302     SBCSEQ r4, r3, 0xdf00000
		   0x014F97CC:  94EDB702     ADCSEQ lr, r7, 0x2500
		   0x014F97D0:  7CEDB702     ADCSEQ lr, r7, 0x1f00
		*/
	}

	// RVA: 0x14F97D4 Offset: 0x14F97D4 VA: 0x14F97D4 Slot: 0
	public override bool Equals(object obj) {
		/* Disassembly (ARM32, 47 instructions, 0xBC bytes):
		   // CFG: 10 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F97D4:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x014F97D8:  20D04DE2     SUB sp, sp, 0x20
		   0x014F97DC:  08519FE5     LDR r5, [pc, 0x108]
		   0x014F97E0:  0040A0E1     MOV r4, r0
		   0x014F97E4:  0160A0E1     MOV r6, r1
		   0x014F97E8:  05508FE0     ADD r5, pc, r5
		   0x014F97EC:  0000D5E5     LDRB r0, [r5]
		   0x014F97F0:  000050E3     CMPS r0, r0, 0x0
		   0x014F97F4:  0700001A     BNE $+0x24  // if (!=) goto 0x014F9818
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F97F8:  F0009FE5     LDR r0, [pc, 0xf0]
		   0x014F97FC:  00009FE7     LDR r0, [pc, r0]
		   0x014F9800:  5686E9EB     BL $-0x59e6a0
		   0x014F9804:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x014F9808:  00009FE7     LDR r0, [pc, r0]
		   0x014F980C:  5386E9EB     BL $-0x59e6ac
		   0x014F9810:  0100A0E3     MOV r0, 0x1
		   0x014F9814:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F9818:  0050A0E3     MOV r5, 0x0
		   0x014F981C:  000056E3     CMPS r0, r6, 0x0
		   0x014F9820:  2E00000A     BEQ $+0xc0
		   0x014F9824:  CC709FE5     LDR r7, [pc, 0xcc]
		   0x014F9828:  07709FE7     LDR r7, [pc, r7]
		   0x014F982C:  001096E5     LDR r1, [r6]
		   0x014F9830:  000097E5     LDR r0, [r7]
		   0x014F9834:  000051E1     CMPS r0, r1, r0
		   0x014F9838:  2800001A     BNE $+0xa8
		   0x014F983C:  0600A0E1     MOV r0, r6
		   0x014F9840:  9686E9EB     BL $-0x59e5a0
		   0x014F9844:  0010A0E1     MOV r1, r0
		   0x014F9848:  000097E5     LDR r0, [r7]
		   0x014F984C:  400291E8     LDM r1, {r6, sb}
		   0x014F9850:  088091E5     LDR r8, [r1, 0x8]
		   0x014F9854:  741090E5     LDR r1, [r0, 0x74]
		   0x014F9858:  000051E3     CMPS r0, r1, 0x0
		   0x014F985C:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9864
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014F9860:  8B86E9EB     BL $-0x59e5cc
		   // ──── Block 6 if (!=) ────────────────────
		   0x014F9864:  000094E5     LDR r0, [r4]
		   0x014F9868:  060050E1     CMPS r0, r0, r6
		   0x014F986C:  1B00001A     BNE $+0x74
		   0x014F9870:  000097E5     LDR r0, [r7]
		   0x014F9874:  741090E5     LDR r1, [r0, 0x74]
		   0x014F9878:  000051E3     CMPS r0, r1, 0x0
		   0x014F987C:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9884
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x014F9880:  8386E9EB     BL $-0x59e5ec
		   // ──── Block 9 if (!=) ────────────────────
		   0x014F9884:  040094E5     LDR r0, [r4, 0x4]
		   0x014F9888:  090050E1     CMPS r0, r0, sb
		   0x014F988C:  1300001A     BNE $+0x54
		*/
	}

	// RVA: 0x14F9900 Offset: 0x14F9900 VA: 0x14F9900 Slot: 2
	public override int GetHashCode() {
		/* Disassembly (ARM32, 54 instructions, 0xD8 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F9900:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x014F9904:  08D04DE2     SUB sp, sp, 0x8
		   0x014F9908:  AC509FE5     LDR r5, [pc, 0xac]
		   0x014F990C:  0040A0E1     MOV r4, r0
		   0x014F9910:  05508FE0     ADD r5, pc, r5
		   0x014F9914:  0000D5E5     LDRB r0, [r5]
		   0x014F9918:  000050E3     CMPS r0, r0, 0x0
		   0x014F991C:  0A00001A     BNE $+0x30  // if (!=) goto 0x014F994C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F9920:  98009FE5     LDR r0, [pc, 0x98]
		   0x014F9924:  00009FE7     LDR r0, [pc, r0]
		   0x014F9928:  0C86E9EB     BL $-0x59e7c8
		   0x014F992C:  90009FE5     LDR r0, [pc, 0x90]
		   0x014F9930:  00009FE7     LDR r0, [pc, r0]
		   0x014F9934:  0986E9EB     BL $-0x59e7d4
		   0x014F9938:  88009FE5     LDR r0, [pc, 0x88]
		   0x014F993C:  00009FE7     LDR r0, [pc, r0]
		   0x014F9940:  0686E9EB     BL $-0x59e7e0
		   0x014F9944:  0100A0E3     MOV r0, 0x1
		   0x014F9948:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F994C:  78009FE5     LDR r0, [pc, 0x78]
		   0x014F9950:  00009FE7     LDR r0, [pc, r0]
		   0x014F9954:  000090E5     LDR r0, [r0]
		   0x014F9958:  741090E5     LDR r1, [r0, 0x74]
		   0x014F995C:  000051E3     CMPS r0, r1, 0x0
		   0x014F9960:  0000001A     BNE $+0x8  // if (!=) goto 0x014F9968
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014F9964:  4A86E9EB     BL $-0x59e6d0
		   // ──── Block 4 if (!=) ────────────────────
		   0x014F9968:  60009FE5     LDR r0, [pc, 0x60]
		   0x014F996C:  00009FE7     LDR r0, [pc, r0]
		   0x014F9970:  600094E8     LDM r4, {r5, r6}
		   0x014F9974:  000090E5     LDR r0, [r0]
		   0x014F9978:  084094E5     LDR r4, [r4, 0x8]
		   0x014F997C:  741090E5     LDR r1, [r0, 0x74]
		   0x014F9980:  000051E3     CMPS r0, r1, 0x0
		   0x014F9984:  0000001A     BNE $+0x8  // if (!=) goto 0x014F998C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014F9988:  4186E9EB     BL $-0x59e6f4
		   // ──── Block 6 if (!=) ────────────────────
		   0x014F998C:  40009FE5     LDR r0, [pc, 0x40]
		   0x014F9990:  0520A0E1     MOV r2, r5
		   0x014F9994:  0630A0E1     MOV r3, r6
		   0x014F9998:  00009FE7     LDR r0, [pc, r0]
		   0x014F999C:  00408DE5     STR r4, [sp]
		   0x014F99A0:  001090E5     LDR r1, [r0]
		   0x014F99A4:  0500A0E1     MOV r0, r5
		   0x014F99A8:  04108DE5     STR r1, [sp, 0x4]
		   0x014F99AC:  0610A0E1     MOV r1, r6
		   0x014F99B0:  6AB812EB     BL $+0x4ae1b0  // CALL → HashCode.Combine<int, int, FieldGroupData>
		   0x014F99B4:  08D08DE2     ADD sp, sp, 0x8
		   0x014F99B8:  7080BDE8     POP {r4, r5, r6, pc}
		   0x014F99BC:  0945D302     SBCSEQ r4, r3, 0x2400000
		   0x014F99C0:  BCEBB702     ADCSEQ lr, r7, 0x2f000
		   0x014F99C4:  38DFB802     ADCSEQ sp, r8, 0xe0
		   0x014F99C8:  50B6B802     ADCSEQ fp, r8, 0x5000000
		   0x014F99CC:  90EBB702     ADCSEQ lr, r7, 0x24000
		   0x014F99D0:  20B6B802     ADCSEQ fp, r8, 0x2000000
		   0x014F99D4:  D0DEB802     ADCSEQ sp, r8, 0xd00
		*/
	}

	// RVA: 0x14F89A0 Offset: 0x14F89A0 VA: 0x14F89A0
	private bool IsHolidaySideJob() {
		/* Disassembly (ARM32, 37 instructions, 0x94 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F89A0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x014F89A4:  7C509FE5     LDR r5, [pc, 0x7c]
		   0x014F89A8:  0040A0E1     MOV r4, r0
		   0x014F89AC:  05508FE0     ADD r5, pc, r5
		   0x014F89B0:  0000D5E5     LDRB r0, [r5]
		   0x014F89B4:  000050E3     CMPS r0, r0, 0x0
		   0x014F89B8:  0400001A     BNE $+0x18  // if (!=) goto 0x014F89D0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F89BC:  68009FE5     LDR r0, [pc, 0x68]
		   0x014F89C0:  00009FE7     LDR r0, [pc, r0]
		   0x014F89C4:  E589E9EB     BL $-0x59d864
		   0x014F89C8:  0100A0E3     MOV r0, 0x1
		   0x014F89CC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F89D0:  58509FE5     LDR r5, [pc, 0x58]
		   0x014F89D4:  05509FE7     LDR r5, [pc, r5]
		   0x014F89D8:  000095E5     LDR r0, [r5]
		   0x014F89DC:  741090E5     LDR r1, [r0, 0x74]
		   0x014F89E0:  000051E3     CMPS r0, r1, 0x0
		   0x014F89E4:  0000001A     BNE $+0x8  // if (!=) goto 0x014F89EC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014F89E8:  298AE9EB     BL $-0x59d754
		   // ──── Block 4 if (!=) ────────────────────
		   0x014F89EC:  001094E5     LDR r1, [r4]
		   0x014F89F0:  0000A0E3     MOV r0, 0x0
		   0x014F89F4:  030051E3     CMPS r0, r1, 0x3
		   0x014F89F8:  0900001A     BNE $+0x2c  // if (!=) goto 0x014F8A24
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014F89FC:  000095E5     LDR r0, [r5]
		   0x014F8A00:  741090E5     LDR r1, [r0, 0x74]
		   0x014F8A04:  000051E3     CMPS r0, r1, 0x0
		   0x014F8A08:  0000001A     BNE $+0x8  // if (!=) goto 0x014F8A10
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014F8A0C:  208AE9EB     BL $-0x59d778
		   // ──── Block 7 if (!=) ────────────────────
		   0x014F8A10:  040094E5     LDR r0, [r4, 0x4]
		   0x014F8A14:  071040E2     SUB r1, r0, 0x7
		   0x014F8A18:  0000A0E3     MOV r0, 0x0
		   0x014F8A1C:  040051E3     CMPS r0, r1, 0x4
		   0x014F8A20:  01000033     MOVLO r0, 0x1
		   // ──── Block 8 if (!=) ────────────────────
		   0x014F8A24:  3088BDE8     POP {r4, r5, fp, pc}
		   0x014F8A28:  6E54D302     SBCSEQ r5, r3, 0x6e000000
		   0x014F8A2C:  20FBB702     ADCSEQ pc, r7, 0x8000
		   0x014F8A30:  0CFBB702     ADCSEQ pc, r7, 0x3000
		*/
	}

	// RVA: 0x14F99D8 Offset: 0x14F99D8 VA: 0x14F99D8
	private static void .cctor() {
		/* Disassembly (ARM32, 153 instructions, 0x264 bytes):
		   // CFG: 7 blocks, 5 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F99D8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x014F99DC:  F4419FE5     LDR r4, [pc, 0x1f4]
		   0x014F99E0:  04408FE0     ADD r4, pc, r4
		   0x014F99E4:  0000D4E5     LDRB r0, [r4]
		   0x014F99E8:  000050E3     CMPS r0, r0, 0x0
		   0x014F99EC:  1C00001A     BNE $+0x78  // if (!=) goto 0x014F9A64
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F99F0:  E4019FE5     LDR r0, [pc, 0x1e4]
		   0x014F99F4:  00009FE7     LDR r0, [pc, r0]
		   0x014F99F8:  D885E9EB     BL $-0x59e898
		   0x014F99FC:  DC019FE5     LDR r0, [pc, 0x1dc]
		   0x014F9A00:  00009FE7     LDR r0, [pc, r0]
		   0x014F9A04:  D585E9EB     BL $-0x59e8a4
		   0x014F9A08:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x014F9A0C:  00009FE7     LDR r0, [pc, r0]
		   0x014F9A10:  D285E9EB     BL $-0x59e8b0
		   0x014F9A14:  CC019FE5     LDR r0, [pc, 0x1cc]
		   0x014F9A18:  00009FE7     LDR r0, [pc, r0]
		   0x014F9A1C:  CF85E9EB     BL $-0x59e8bc
		   0x014F9A20:  C4019FE5     LDR r0, [pc, 0x1c4]
		   0x014F9A24:  00009FE7     LDR r0, [pc, r0]
		   0x014F9A28:  CC85E9EB     BL $-0x59e8c8
		   0x014F9A2C:  BC019FE5     LDR r0, [pc, 0x1bc]
		   0x014F9A30:  00009FE7     LDR r0, [pc, r0]
		   0x014F9A34:  C985E9EB     BL $-0x59e8d4
		   0x014F9A38:  B4019FE5     LDR r0, [pc, 0x1b4]
		   0x014F9A3C:  00009FE7     LDR r0, [pc, r0]
		   0x014F9A40:  C685E9EB     BL $-0x59e8e0
		   0x014F9A44:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x014F9A48:  00009FE7     LDR r0, [pc, r0]
		   0x014F9A4C:  C385E9EB     BL $-0x59e8ec
		   0x014F9A50:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x014F9A54:  00009FE7     LDR r0, [pc, r0]
		   0x014F9A58:  C085E9EB     BL $-0x59e8f8
		   0x014F9A5C:  0100A0E3     MOV r0, 0x1
		   0x014F9A60:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F9A64:  94019FE5     LDR r0, [pc, 0x194]
		   0x014F9A68:  00009FE7     LDR r0, [pc, r0]
		   0x014F9A6C:  000090E5     LDR r0, [r0]
		   0x014F9A70:  5386E9EB     BL $-0x59e6ac
		   0x014F9A74:  0040A0E1     MOV r4, r0
		   0x014F9A78:  84019FE5     LDR r0, [pc, 0x184]
		   0x014F9A7C:  00009FE7     LDR r0, [pc, r0]
		   0x014F9A80:  001090E5     LDR r1, [r0]
		   0x014F9A84:  0400A0E1     MOV r0, r4
		   0x014F9A88:  15FA43EB     BL $+0x10fe85c  // CALL → Dictionary<object, int>..ctor
		   0x014F9A8C:  000054E3     CMPS r0, r4, 0x0
		   0x014F9A90:  1E00000A     BEQ $+0x80  // if (==) goto 0x014F9B10
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x014F9A94:  6C519FE5     LDR r5, [pc, 0x16c]
		   0x014F9A98:  0020A0E3     MOV r2, 0x0
		   0x014F9A9C:  05509FE7     LDR r5, [pc, r5]
		   0x014F9AA0:  003095E5     LDR r3, [r5]
		   0x014F9AA4:  60019FE5     LDR r0, [pc, 0x160]
		   0x014F9AA8:  00009FE7     LDR r0, [pc, r0]
		   0x014F9AAC:  001090E5     LDR r1, [r0]
		   0x014F9AB0:  0400A0E1     MOV r0, r4
		   0x014F9AB4:  79FC43EB     BL $+0x10ff1ec  // CALL → Dictionary<object, int>.Add
		   0x014F9AB8:  003095E5     LDR r3, [r5]
		   0x014F9ABC:  0120A0E3     MOV r2, 0x1
		   0x014F9AC0:  48019FE5     LDR r0, [pc, 0x148]
		   0x014F9AC4:  00009FE7     LDR r0, [pc, r0]
		   0x014F9AC8:  001090E5     LDR r1, [r0]
		   0x014F9ACC:  0400A0E1     MOV r0, r4
		   0x014F9AD0:  72FC43EB     BL $+0x10ff1d0  // CALL → Dictionary<object, int>.Add
		   0x014F9AD4:  003095E5     LDR r3, [r5]
		   0x014F9AD8:  0220A0E3     MOV r2, 0x2
		   0x014F9ADC:  30019FE5     LDR r0, [pc, 0x130]
		   0x014F9AE0:  00009FE7     LDR r0, [pc, r0]
		   0x014F9AE4:  001090E5     LDR r1, [r0]
		   0x014F9AE8:  0400A0E1     MOV r0, r4
		   0x014F9AEC:  6BFC43EB     BL $+0x10ff1b4  // CALL → Dictionary<object, int>.Add
		   0x014F9AF0:  003095E5     LDR r3, [r5]
		   0x014F9AF4:  0320A0E3     MOV r2, 0x3
		   0x014F9AF8:  18019FE5     LDR r0, [pc, 0x118]
		   0x014F9AFC:  00009FE7     LDR r0, [pc, r0]
		   0x014F9B00:  001090E5     LDR r1, [r0]
		   0x014F9B04:  0400A0E1     MOV r0, r4
		   0x014F9B08:  64FC43EB     BL $+0x10ff198  // CALL → Dictionary<object, int>.Add
		   0x014F9B0C:  220000EA     B $+0x90  // goto 0x014F9B9C
		   // ──── Block 4 if (==) ────────────────────
		   0x014F9B10:  2E86E9EB     BL $-0x59e740
		   0x014F9B14:  00519FE5     LDR r5, [pc, 0x100]
		   0x014F9B18:  0020A0E3     MOV r2, 0x0
		   0x014F9B1C:  05509FE7     LDR r5, [pc, r5]
		   0x014F9B20:  003095E5     LDR r3, [r5]
		   0x014F9B24:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x014F9B28:  00009FE7     LDR r0, [pc, r0]
		   0x014F9B2C:  001090E5     LDR r1, [r0]
		   0x014F9B30:  0000A0E3     MOV r0, 0x0
		   0x014F9B34:  59FC43EB     BL $+0x10ff16c  // CALL → Dictionary<object, int>.Add
		   0x014F9B38:  2486E9EB     BL $-0x59e768
		   0x014F9B3C:  003095E5     LDR r3, [r5]
		   0x014F9B40:  0120A0E3     MOV r2, 0x1
		   0x014F9B44:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x014F9B48:  00009FE7     LDR r0, [pc, r0]
		   0x014F9B4C:  001090E5     LDR r1, [r0]
		   0x014F9B50:  0000A0E3     MOV r0, 0x0
		   0x014F9B54:  51FC43EB     BL $+0x10ff14c  // CALL → Dictionary<object, int>.Add
		   0x014F9B58:  1C86E9EB     BL $-0x59e788
		   0x014F9B5C:  003095E5     LDR r3, [r5]
		   0x014F9B60:  0220A0E3     MOV r2, 0x2
		   0x014F9B64:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x014F9B68:  00009FE7     LDR r0, [pc, r0]
		   0x014F9B6C:  001090E5     LDR r1, [r0]
		   0x014F9B70:  0000A0E3     MOV r0, 0x0
		   0x014F9B74:  49FC43EB     BL $+0x10ff12c  // CALL → Dictionary<object, int>.Add
		   0x014F9B78:  1486E9EB     BL $-0x59e7a8
		   0x014F9B7C:  003095E5     LDR r3, [r5]
		   0x014F9B80:  0320A0E3     MOV r2, 0x3
		   0x014F9B84:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x014F9B88:  00009FE7     LDR r0, [pc, r0]
		   0x014F9B8C:  001090E5     LDR r1, [r0]
		   0x014F9B90:  0000A0E3     MOV r0, 0x0
		   0x014F9B94:  41FC43EB     BL $+0x10ff10c  // CALL → Dictionary<object, int>.Add
		   0x014F9B98:  0C86E9EB     BL $-0x59e7c8
		   // ──── Block 5 ──────────────────────────────
		   0x014F9B9C:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x014F9BA0:  0420A0E3     MOV r2, 0x4
		   0x014F9BA4:  00009FE7     LDR r0, [pc, r0]
		   0x014F9BA8:  003090E5     LDR r3, [r0]
		   0x014F9BAC:  80009FE5     LDR r0, [pc, 0x80]
		   0x014F9BB0:  00009FE7     LDR r0, [pc, r0]
		   0x014F9BB4:  001090E5     LDR r1, [r0]
		   0x014F9BB8:  0400A0E1     MOV r0, r4
		   0x014F9BBC:  37FC43EB     BL $+0x10ff0e4  // CALL → Dictionary<object, int>.Add
		   0x014F9BC0:  70009FE5     LDR r0, [pc, 0x70]
		   0x014F9BC4:  00009FE7     LDR r0, [pc, r0]
		   0x014F9BC8:  000090E5     LDR r0, [r0]
		   0x014F9BCC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014F9BD0:  004080E5     STR r4, [r0]
		   0x014F9BD4:  3088BDE8     POP {r4, r5, fp, pc}
		   0x014F9BD8:  3B44D302     SBCSEQ r4, r3, 0x3b000000
		   0x014F9BDC:  04E8B702     ADCSEQ lr, r7, 0x40000
		   0x014F9BE0:  3CE7B702     ADCSEQ lr, r7, 0xf00000
		   0x014F9BE4:  40E7B702     ADCSEQ lr, r7, 0x1000000
		   0x014F9BE8:  C8EAB702     ADCSEQ lr, r7, 0xc8000
		   0x014F9BEC:  D4E3B702     ADCSEQ lr, r7, 0x50000003
		   0x014F9BF0:  1CDEB802     ADCSEQ sp, r8, 0x1c0
		   0x014F9BF4:  18DEB802     ADCSEQ sp, r8, 0x180
		   0x014F9BF8:  10DEB802     ADCSEQ sp, r8, 0x100
		   0x014F9BFC:  0CDEB802     ADCSEQ sp, r8, 0xc0
		   0x014F9C00:  E4E6B702     ADCSEQ lr, r7, 0xe400000
		   0x014F9C04:  C0E6B702     ADCSEQ lr, r7, 0xc000000
		   0x014F9C08:  5CE7B702     ADCSEQ lr, r7, 0x1700000
		   0x014F9C0C:  50E3B702     ADCSEQ lr, r7, 0x40000001
		   0x014F9C10:  9CDDB802     ADCSEQ sp, r8, 0x2700
		   0x014F9C14:  78DDB802     ADCSEQ sp, r8, 0x1e00
		   0x014F9C18:  50DDB802     ADCSEQ sp, r8, 0x1400
		   0x014F9C1C:  DCE6B702     ADCSEQ lr, r7, 0xdc00000
		   0x014F9C20:  D0E2B702     ADCSEQ lr, r7, 0xd
		   0x014F9C24:  18DDB802     ADCSEQ sp, r8, 0x600
		   0x014F9C28:  F0DCB802     ADCSEQ sp, r8, 0xf000
		   0x014F9C2C:  C4DCB802     ADCSEQ sp, r8, 0xc400
		   0x014F9C30:  54E6B702     ADCSEQ lr, r7, 0x5400000
		   0x014F9C34:  A4DCB802     ADCSEQ sp, r8, 0xa400
		   0x014F9C38:  1CE9B702     ADCSEQ lr, r7, 0x70000
		*/
	}
}
