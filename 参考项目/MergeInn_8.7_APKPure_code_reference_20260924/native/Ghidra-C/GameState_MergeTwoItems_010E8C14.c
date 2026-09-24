// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.MergeTwoItems 0x10E8C14; private bool MergeTwoItems(Cell targetCell, Item originItem, Item targetItem, ItemObject resultItemObject, out ItemData resultItemData, out Item resultItem) {
// Image base: 0x10000; Ghidra address: 010f8c14; native size hint: 0x5CC


/* WARNING: Control flow encountered bad instruction data */

undefined4
GameState_MergeTwoItems_010E8C14
          (int param_1,int param_2,int *param_3,int *param_4,int param_5,int *param_6,
          undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(iRam010f91a0 + 0x10f8c38);
  if (*pcVar6 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f91a4 + 0x10f8c4c));
    func_0x00f6b160(*(undefined4 *)(iRam010f91a8 + 0x10f8c58));
    func_0x00f6b160(*(undefined4 *)(iRam010f91ac + 0x10f8c64));
    func_0x00f6b160(*(undefined4 *)(iRam010f91b0 + 0x10f8c70));
    func_0x00f6b160(*(undefined4 *)(iRam010f91b4 + 0x10f8c7c));
    func_0x00f6b160(*(undefined4 *)(iRam010f91b8 + 0x10f8c88));
    func_0x00f6b160(*(undefined4 *)(iRam010f91bc + 0x10f8c94));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x010f91e0(param_1,param_3,param_4);
  puVar7 = *(undefined4 **)(iRam010f91c0 + 0x10f8cbc);
  uStack_28 = func_0x00f6b3c4(*puVar7);
  puVar9 = *(undefined4 **)(iRam010f91c4 + 0x10f8ccc);
  func_0x02c023b0(uStack_28,*puVar9);
  uStack_2c = func_0x00f6b3c4(*puVar7);
  func_0x02c023b0(uStack_2c,*puVar9);
  if (param_4 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  iVar8 = param_4[0x21];
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  if (*(int *)(iVar8 + 0x4c) == 10) {
LAB_010f8d34:
    if (iVar1 == 0) {
LAB_010f9180:
      *param_6 = param_4[0x21];
      *param_7 = param_4;
      return 0;
    }
  }
  else {
    iVar8 = param_4[0x21];
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    if (*(int *)(iVar8 + 0x4c) == 0xc) goto LAB_010f8d34;
    iVar8 = param_4[0x21];
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    if (*(int *)(iVar8 + 0x4c) == 0xd && iVar1 == 0) goto LAB_010f9180;
  }
  iVar8 = param_4[0x21];
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  if (*(int *)(iVar8 + 0x4c) == 10) {
LAB_010f8d90:
    if (param_3 == (int *)0x0) {
      func_0x00f6b3d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar10 = *(int **)(iRam010f91c8 + 0x10f8da4);
    iVar8 = *piVar10;
    if (((uint)*(byte *)(*param_3 + 0xb8) < (uint)*(byte *)(iVar8 + 0xb8)) ||
       (iVar3 = *(int *)(*(int *)(*param_3 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4),
       iVar3 != iVar8)) {
      func_0x00f6b3d0();
      iVar8 = *piVar10;
      iVar3 = *(int *)(*(int *)(*param_3 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4);
    }
    piVar4 = (int *)0xc8;
    if (iVar3 == iVar8) {
      piVar4 = param_3 + 0x32;
    }
    iVar8 = *piVar4;
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    uStack_28 = func_0x01113ec4(iVar8,0);
    iVar8 = *piVar10;
    if (((uint)*(byte *)(*param_4 + 0xb8) < (uint)*(byte *)(iVar8 + 0xb8)) ||
       (iVar3 = *(int *)(*(int *)(*param_4 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4),
       iVar3 != iVar8)) {
      func_0x00f6b3d0();
      iVar8 = *piVar10;
      iVar3 = *(int *)(*(int *)(*param_4 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4);
    }
    piVar10 = (int *)0xc8;
    if (iVar3 == iVar8) {
      piVar10 = param_4 + 0x32;
    }
    iVar8 = *piVar10;
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    uStack_2c = func_0x01113ec4(iVar8,0);
  }
  else {
    iVar8 = param_4[0x21];
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    if (*(int *)(iVar8 + 0x4c) == 0xc) goto LAB_010f8d90;
    iVar8 = param_4[0x21];
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    if (*(int *)(iVar8 + 0x4c) == 0xd) goto LAB_010f8d90;
  }
  if (param_5 == 0) {
    func_0x00f6b3d0();
  }
  *param_6 = *(int *)(param_5 + 0x18);
  if (param_2 == 0) {
    func_0x00f6b3d0();
  }
  func_0x010dcc80(param_2,0);
  iVar8 = *param_6;
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  uVar2 = func_0x010e8708(param_1,iVar8,*(undefined1 *)(iVar8 + 0x1c),param_2,1,
                          *(undefined4 *)(param_1 + 0x44),0,0,0,1,0xffffffff,0,0,0xffffffff,1);
  *param_7 = uVar2;
  iVar8 = param_4[0x21];
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  if (*(int *)(iVar8 + 0x4c) != 1) {
    iVar8 = param_4[0x21];
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    if (*(int *)(iVar8 + 0x4c) != 8) goto LAB_010f90b4;
  }
  piVar4 = *(int **)(iRam010f91cc + 0x10f8f6c);
  iVar8 = *piVar4;
  piVar10 = (int *)0x0;
  if (((uint)*(byte *)(iVar8 + 0xb8) <= (uint)*(byte *)(*param_4 + 0xb8)) &&
     (piVar10 = param_4,
     *(int *)(*(int *)(*param_4 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4) != iVar8)) {
    piVar10 = (int *)0x0;
  }
  piVar11 = (int *)*param_7;
  iVar3 = *param_6;
  if (iVar3 == 0) {
    func_0x00f6b3d0();
    iVar8 = *piVar4;
  }
  piVar4 = (int *)0x0;
  if (param_3 != (int *)0x0) {
    if (((uint)*(byte *)(iVar8 + 0xb8) <= (uint)*(byte *)(*param_3 + 0xb8)) &&
       (piVar4 = param_3,
       *(int *)(*(int *)(*param_3 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4) != iVar8)) {
      piVar4 = (int *)0x0;
    }
  }
  uVar2 = func_0x01120d98(piVar4,piVar10,*(undefined4 *)(iVar3 + 0x5c),0);
  if (piVar11 != (int *)0x0) {
    uVar5 = (uint)*(byte *)(**(int **)(iRam010f91d0 + 0x10f901c) + 0xb8);
    if ((uVar5 <= *(byte *)(*piVar11 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar11 + 100) + uVar5 * 4 + -4) == **(int **)(iRam010f91d0 + 0x10f901c))
       ) {
      func_0x0112196c(piVar11,uVar2,0);
    }
  }
  piVar10 = *(int **)(iRam010f91d4 + 0x10f905c);
  iVar8 = *piVar10;
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x00f6b294();
    iVar8 = *piVar10;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x68);
  if (*(int *)(**(int **)(iRam010f91d8 + 0x10f9084) + 0x74) == 0) {
    func_0x00f6b294(**(int **)(iRam010f91d8 + 0x10f9084));
  }
  func_0x011eea64(uVar2,0x3f800000,0);
LAB_010f90b4:
  if (param_3 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  iVar8 = param_3[4];
  if (*(int *)(**(int **)(iRam010f91dc + 0x10f90cc) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar8 = func_0x020081fc(iVar8,0);
  if (iVar8 != 0) {
    iVar8 = param_3[4];
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    func_0x010dcc80(iVar8,0);
  }
  func_0x010f4f74(param_1,param_4,param_3,*param_7);
  if (iVar1 != 0) {
    func_0x010f9d3c(param_1,param_2,param_4,uStack_28);
    func_0x010f9d3c(param_1,param_2,param_4,uStack_2c);
  }
  return 1;
}

