// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemContainer.CalculateCharge 0x1110D98; ItemContainer::CalculateCharge()
// Image base: 0x10000; Ghidra address: 01120d98; native size hint: 0x200


int ItemContainer_CalculateCharge_01110D98(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  pcVar4 = (char *)(iRam01120f78 + 0x1120db8);
  if (*pcVar4 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam01120f7c + 0x1120dcc));
    func_0x00f6b160(*(undefined4 *)(iRam01120f80 + 0x1120dd8));
    func_0x00f6b160(*(undefined4 *)(iRam01120f84 + 0x1120de4));
    *pcVar4 = '\x01';
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0xc) < 1)) {
    if (*(int *)(**(int **)(iRam01120f88 + 0x1120f2c) + 0x74) == 0) {
      func_0x00f6b294();
    }
    func_0x02008014(**(undefined4 **)(iRam01120f8c + 0x1120f4c),0);
    iVar1 = func_0x00f6b3c4(**(undefined4 **)(iRam01120f90 + 0x1120f5c));
    func_0x030a53ec(iVar1,0);
  }
  else {
    iVar1 = func_0x00f6b3c4(**(undefined4 **)(iRam01120f94 + 0x1120e0c));
    func_0x030a53ec(iVar1,0);
    if (param_1 == 0) {
      func_0x00f6b3d0();
    }
    iVar8 = *(int *)(param_1 + 0xec);
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    iVar5 = *(int *)(param_1 + 0xe8);
    iVar8 = *(int *)(iVar8 + 8);
    if (iVar5 == 0) {
      func_0x00f6b3d0();
    }
    iVar9 = *(int *)(param_1 + 0xec);
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar9 == 0) {
      func_0x00f6b3d0();
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    if (param_2 == 0) {
      func_0x00f6b3d0();
    }
    iVar6 = *(int *)(param_2 + 0xec);
    if (iVar6 == 0) {
      func_0x00f6b3d0();
    }
    iVar10 = *(int *)(param_2 + 0xe8);
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar10 == 0) {
      func_0x00f6b3d0();
    }
    iVar7 = *(int *)(param_2 + 0xec);
    uVar11 = iVar5 * (iVar8 + -1) + iVar9;
    iVar8 = *(int *)(iVar10 + 0xc);
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    iVar9 = *(int *)(param_3 + 0xc);
    uVar2 = iVar8 * (iVar6 + -1) + *(int *)(iVar7 + 0xc);
    iVar5 = (uVar2 & ~((int)uVar2 >> 0x1f)) + (uVar11 & ~((int)uVar11 >> 0x1f));
    iVar8 = func_0x010310d8(iVar5,iVar9);
    iVar5 = iVar5 - iVar8 * iVar9;
    if (iVar1 == 0) {
      func_0x00f6b3d0();
    }
    *(int *)(iVar1 + 8) = iVar8 + 2;
    *(int *)(iVar1 + 0xc) = iVar5;
    if (iVar5 == 0) {
      iVar8 = iVar8 + 1;
      uVar3 = *(undefined4 *)(param_3 + 0xc);
      if (iVar8 < 2) {
        iVar8 = 1;
      }
      *(int *)(iVar1 + 8) = iVar8;
      *(undefined4 *)(iVar1 + 0xc) = uVar3;
    }
  }
  return iVar1;
}

