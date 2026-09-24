// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.TryMergeRegularItem 0x10E869C; private bool TryMergeRegularItem(Cell targetCell, Item originItem, Item targetItem, ItemData originItemData, ItemData targetItemData, ref ItemData resultItemData, ref Item resultItem) {
// Image base: 0x10000; Ghidra address: 010f869c; native size hint: 0x258


undefined4
GameState_TryMergeRegularItem_010E869C
          (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
          int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar4 = (char *)(iRam010f88d0 + 0x10f86c4);
  if (*pcVar4 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f88d4 + 0x10f86d8));
    func_0x00f6b160(*(undefined4 *)(iRam010f88d8 + 0x10f86e4));
    func_0x00f6b160(*(undefined4 *)(iRam010f88dc + 0x10f86f0));
    func_0x00f6b160(*(undefined4 *)(iRam010f88e0 + 0x10f86fc));
    *pcVar4 = '\x01';
  }
  if (param_6 == 0) {
    func_0x00f6b3d0();
  }
  iVar1 = func_0x01119de8(param_6,0);
  if (param_5 == 0) {
    func_0x00f6b3d0();
  }
  iVar2 = func_0x01119de8(param_5,0);
  if (param_6 == 0) {
    func_0x00f6b3d0();
  }
  uVar6 = *(undefined4 *)(param_6 + 8);
  if (param_5 == 0) {
    func_0x00f6b3d0();
  }
  piVar7 = *(int **)(iRam010f88e4 + 0x10f8768);
  uVar5 = *(undefined4 *)(param_5 + 8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar3 = func_0x01034b74(uVar6,uVar5,0);
  if (iVar3 == 0 && iVar1 == iVar2) {
    iVar2 = *(int *)(param_6 + 8);
    if (iVar2 == 0) {
      func_0x00f6b3d0();
    }
    iVar2 = *(int *)(iVar2 + 0x28);
    if (iVar2 == 0) {
      func_0x00f6b3d0();
    }
    if (iVar1 < *(int *)(iVar2 + 0xc) + -1) {
      if (param_3 == 0) {
        func_0x00f6b3d0();
      }
      iVar1 = *(int *)(param_3 + 0x84);
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      iVar2 = *(int *)(iVar1 + 8);
      iVar1 = func_0x01119de8(iVar1,0);
      if (iVar2 == 0) {
        func_0x00f6b3d0();
      }
      uVar6 = func_0x010dd824(iVar2,iVar1 + 1);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar1 = func_0x02007e9c(uVar6,0,0);
      if (iVar1 == 0) {
        uVar6 = func_0x010f8c14(param_1,param_2,param_3,param_4,uVar6,param_7,param_8);
        return uVar6;
      }
      uVar6 = func_0x00f6b3c4(**(undefined4 **)(iRam010f88e8 + 0x10f8858));
      func_0x0309903c(uVar6,**(undefined4 **)(iRam010f88ec + 0x10f8870),0);
      if (*(int *)(**(int **)(iRam010f88f0 + 0x10f8884) + 0x74) == 0) {
        func_0x00f6b294();
      }
      func_0x02007ec0(uVar6,0);
    }
  }
  return 0;
}

