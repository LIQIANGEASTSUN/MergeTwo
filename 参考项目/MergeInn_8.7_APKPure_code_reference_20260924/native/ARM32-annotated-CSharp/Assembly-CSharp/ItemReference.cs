// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class ItemReference // TypeDefIndex: 1214
{

	// Fields
	public ItemObject target; // 0x8
	[Range(0, 1)]
	public float chance; // 0xC

	// Methods

	// RVA: 0x10F5800 Offset: 0x10F5800 VA: 0x10F5800
	public void .ctor() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F5800:  FE15A0E3     MOV r1, 0x3f800000
		   0x010F5804:  0C1080E5     STR r1, [r0, 0xc]
		   0x010F5808:  0010A0E3     MOV r1, 0x0
		   0x010F580C:  F67E7EEA     B $+0x1f9fbe0  // TAIL CALL → Object..ctor
		*/
	}
}
