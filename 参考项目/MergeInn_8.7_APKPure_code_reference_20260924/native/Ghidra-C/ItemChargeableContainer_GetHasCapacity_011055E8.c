// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemChargeableContainer.GetHasCapacity 0x11055E8; ItemChargeableContainer.GetHasCapacity (candidate)
// Image base: 0x10000; Ghidra address: 011155e8; native size hint: 0x28


bool ItemChargeableContainer_GetHasCapacity_011055E8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  return 0 < *(int *)(iVar1 + 0xc);
}

