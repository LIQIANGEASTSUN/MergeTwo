// Dll : Assembly-CSharp.dll
// Namespace: 
public class EmptyBubbleConfig : BaseBubbleConfig // TypeDefIndex: 1128
{

	// Properties
	public override bool isItFtue { get; }
	public override bool limitApplies { get; }
	public override DiscountCost DCost { get; }
	public override float Chance { get; }

	// Methods

	// RVA: 0x10C979C Offset: 0x10C979C VA: 0x10C979C Slot: 4
	public override bool get_isItFtue() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C979C:  0000A0E3     MOV r0, 0x0
		   0x010C97A0:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10C97A4 Offset: 0x10C97A4 VA: 0x10C97A4 Slot: 5
	public override bool get_limitApplies() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C97A4:  0000A0E3     MOV r0, 0x0
		   0x010C97A8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10C97AC Offset: 0x10C97AC VA: 0x10C97AC Slot: 6
	public override DiscountCost get_DCost() {
		/* Disassembly (ARM32, 8 instructions, 0x20 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C97AC:  00482DE9     PUSH {fp, lr}
		   0x010C97B0:  0010A0E3     MOV r1, 0x0
		   0x010C97B4:  0020A0E3     MOV r2, 0x0
		   0x010C97B8:  0030A0E3     MOV r3, 0x0
		   0x010C97BC:  001080E5     STR r1, [r0]
		   0x010C97C0:  041080E5     STR r1, [r0, 0x4]
		   0x010C97C4:  D85211EB     BL $+0x454b68  // CALL → DiscountCost..ctor
		   0x010C97C8:  0088BDE8     POP {fp, pc}
		*/
	}

	// RVA: 0x10C97CC Offset: 0x10C97CC VA: 0x10C97CC Slot: 7
	public override float get_Chance() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C97CC:  0000A0E3     MOV r0, 0x0
		   0x010C97D0:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10C96A8 Offset: 0x10C96A8 VA: 0x10C96A8
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C96A8:  0010A0E3     MOV r1, 0x0
		   0x010C96AC:  4E2F7FEA     B $+0x1fcbd40  // TAIL CALL → Object..ctor
		*/
	}
}
