// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemContainer.GetHasCapacity 0x1110D30; ItemContainer.GetHasCapacity (candidate)
// Image base: 0x10000; Ghidra address: 01120d30; native size hint: 0x28


bool ItemContainer_GetHasCapacity_01110D30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xec);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  return 0 < *(int *)(iVar1 + 0xc);
}

