// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.TryMergeChargeableContainer 0x10E8500; private bool TryMergeChargeableContainer(Item originItem, Item targetItem, ref ItemData resultItemData, ref Item resultItem) {
// Image base: 0x10000; Ghidra address: 010f8500; native size hint: 0x19C


undefined4
GameState_TryMergeChargeableContainer_010E8500
          (undefined4 param_1,int param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar3 = (char *)(iRam010f8688 + 0x10f851c);
  if (*pcVar3 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f868c + 0x10f8534));
    func_0x00f6b160(*(undefined4 *)(iRam010f8690 + 0x10f8540));
    *pcVar3 = '\x01';
  }
  piVar5 = (int *)0x0;
  if (param_3 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(**(int **)(iRam010f8694 + 0x10f8560) + 0xb8);
    if ((uVar2 <= *(byte *)(*param_3 + 0xb8)) &&
       (piVar5 = param_3,
       *(int *)(*(int *)(*param_3 + 100) + uVar2 * 4 + -4) != **(int **)(iRam010f8694 + 0x10f8560)))
    {
      piVar5 = (int *)0x0;
    }
  }
  piVar7 = *(int **)(iRam010f8698 + 0x10f8598);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x00f6b294();
  }
  uVar6 = 0;
  iVar1 = func_0x020081fc(piVar5,0);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      func_0x00f6b3d0();
    }
    iVar1 = *(int *)(param_2 + 0x84);
    if (iVar1 == 0) {
      func_0x00f6b3d0();
    }
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
    if (piVar5 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    uVar6 = 0;
    iVar1 = func_0x0111632c(piVar5,uVar4,0);
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(param_2 + 0x10);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar1 = func_0x020081fc(uVar6,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_2 + 0x10);
        if (iVar1 == 0) {
          func_0x00f6b3d0();
        }
        func_0x010dcc80(iVar1,0);
      }
      if (piVar5 == (int *)0x0) {
        func_0x00f6b3d0();
      }
      *param_4 = piVar5[0x21];
      *param_5 = piVar5;
      func_0x010f5068(param_1,param_2,piVar5);
      uVar6 = 1;
    }
  }
  return uVar6;
}

