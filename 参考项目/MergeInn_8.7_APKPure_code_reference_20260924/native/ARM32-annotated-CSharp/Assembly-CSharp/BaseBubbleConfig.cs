// Dll : Assembly-CSharp.dll
// Namespace: 
public abstract class BaseBubbleConfig // TypeDefIndex: 1124
{

	// Properties
	public abstract bool isItFtue { get; }
	public abstract bool limitApplies { get; }
	public abstract DiscountCost DCost { get; }
	public abstract float Chance { get; }

	// Methods

	//  Slot: 4
	public abstract bool get_isItFtue();

	//  Slot: 5
	public abstract bool get_limitApplies();

	//  Slot: 6
	public abstract DiscountCost get_DCost();

	//  Slot: 7
	public abstract float get_Chance();

	// RVA: 0x10C810C Offset: 0x10C810C VA: 0x10C810C
	protected void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C810C:  0010A0E3     MOV r1, 0x0
		   0x010C8110:  B5347FEA     B $+0x1fcd2dc  // TAIL CALL → Object..ctor
		*/
	}
}
