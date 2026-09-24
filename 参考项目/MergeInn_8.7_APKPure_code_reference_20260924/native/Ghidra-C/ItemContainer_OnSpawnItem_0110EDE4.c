// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemContainer.OnSpawnItem 0x110EDE4; ItemContainer::OnSpawnItem()
// Image base: 0x10000; Ghidra address: 0111ede4; native size hint: 0x1C


void ItemContainer_OnSpawnItem_0110EDE4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0111edfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
  return;
}

