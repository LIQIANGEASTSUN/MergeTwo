// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class RewardItemData // TypeDefIndex: 1376
{

	// Fields
	[Obsolete]
	[SerializeField]
	private ChainType chainType; // 0x8
	[SerializeField]
	public string chainName; // 0xC
	[SerializeField]
	public int order; // 0x10
	[SerializeField]
	public int episodeWhenReceived; // 0x14
	[SerializeField]
	public FieldGroup fieldGroup; // 0x18

	// Properties
	public ChainType OldChainType { get; }

	// Methods

	// RVA: 0x112A788 Offset: 0x112A788 VA: 0x112A788
	public void .ctor(string chainType, int order, int episodeWhenReceived, FieldGroup fieldGroup) {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0112A788:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0112A78C:  0160A0E1     MOV r6, r1
		   0x0112A790:  0010A0E3     MOV r1, 0x0
		   0x0112A794:  0340A0E1     MOV r4, r3
		   0x0112A798:  0250A0E1     MOV r5, r2
		   0x0112A79C:  0070A0E1     MOV r7, r0
		   0x0112A7A0:  11AB7DEB     BL $+0x1f6ac4c  // CALL → Object..ctor
		   0x0112A7A4:  20009DE5     LDR r0, [sp, 0x20]
		   0x0112A7A8:  1C109DE5     LDR r1, [sp, 0x1c]
		   0x0112A7AC:  18209DE5     LDR r2, [sp, 0x18]
		   0x0112A7B0:  0C6087E5     STR r6, [r7, 0xc]
		   0x0112A7B4:  105087E5     STR r5, [r7, 0x10]
		   0x0112A7B8:  144087E5     STR r4, [r7, 0x14]
		   0x0112A7BC:  182087E5     STR r2, [r7, 0x18]
		   0x0112A7C0:  1C1087E5     STR r1, [r7, 0x1c]
		   0x0112A7C4:  200087E5     STR r0, [r7, 0x20]
		   0x0112A7C8:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x112BC5C Offset: 0x112BC5C VA: 0x112BC5C
	public ChainType get_OldChainType() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0112BC5C:  080090E5     LDR r0, [r0, 0x8]
		   0x0112BC60:  1EFF2FE1     BX lr
		*/
	}
}
