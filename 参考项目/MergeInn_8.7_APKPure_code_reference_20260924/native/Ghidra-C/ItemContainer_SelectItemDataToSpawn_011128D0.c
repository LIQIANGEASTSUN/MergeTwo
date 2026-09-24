// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemContainer.SelectItemDataToSpawn 0x11128D0; ItemContainer::SelectItemDataToSpawn()
// Image base: 0x10000; Ghidra address: 011228d0; native size hint: 0x668


/* WARNING: Control flow encountered bad instruction data */

undefined4
ItemContainer_SelectItemDataToSpawn_011128D0
          (int param_1,uint param_2,int *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r3;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined4 in_cr13;
  int iStack_24;
  
  pcVar5 = (char *)(iRam01122cb4 + 0x11228f0);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam01122cb8 + 0x1122908));
    func_0x00f6b160(*(undefined4 *)(iRam01122cbc + 0x1122914));
    func_0x00f6b160(*(undefined4 *)(iRam01122cc0 + 0x1122920));
    func_0x00f6b160(*(undefined4 *)(iRam01122cc4 + 0x112292c));
    func_0x00f6b160(*(undefined4 *)(iRam01122cc8 + 0x1122938));
    func_0x00f6b160(*(undefined4 *)(iRam01122ccc + 0x1122944));
    func_0x00f6b160(*(undefined4 *)(iRam01122cd0 + 0x1122950));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0xb8);
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  if (*(uint *)(iVar6 + 0xc) <= param_2) {
    func_0x00f6b3d4();
  }
  *(bool *)param_4 = *(float *)(iVar6 + param_2 * 4 + 0x10) < fRam01122cb0;
  iVar6 = *(int *)(param_1 + 0xb0);
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  if (*(uint *)(iVar6 + 0xc) <= param_2) {
    func_0x00f6b3d4();
  }
  iVar6 = *(int *)(iVar6 + param_2 * 4 + 0x10);
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  iVar7 = *(int *)(iVar6 + 0x18);
  *param_3 = iVar7;
  iVar6 = iVar7;
  if (iVar7 == 0) {
    func_0x00f6b3d0();
    iVar6 = *param_3;
    bVar11 = true;
    if (iVar6 == 0) {
      func_0x00f6b3d0();
      if (!bVar11) {
        coprocessor_store(7,in_cr13,extraout_r3);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar9 = *(int *)(param_1 + 0x84);
  iVar6 = *(int *)(iVar6 + 0x4c);
  cVar1 = *(char *)(iVar7 + 0x1c);
  if (iVar9 == 0) {
    func_0x00f6b3d0();
  }
  uVar10 = 1;
  if (*(char *)(iVar9 + 0x90) == '\0') {
    return 1;
  }
  if (param_5 == -1 || param_5 == 1) {
    return 1;
  }
  if (param_5 != 2) {
    iStack_24 = param_5;
    uVar8 = func_0x00f6b29c(**(undefined4 **)(iRam01122ce0 + 0x1122a8c),&iStack_24);
    uVar10 = 0;
    uVar8 = func_0x02e9677c(**(undefined4 **)(iRam01122ce4 + 0x1122ab0),uVar8,0);
    goto LAB_01122c24;
  }
  iVar9 = *param_3;
  iVar7 = iVar9;
  if (iVar9 == 0) {
    func_0x00f6b3d0();
    iVar7 = *param_3;
  }
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 == 0) {
    func_0x00f6b3d0();
    uVar2 = func_0x010dd60c(0,iVar7,0);
    if (-1 < (int)uVar2) {
      func_0x00f6b3d0();
      goto LAB_01122adc;
    }
  }
  else {
    uVar2 = func_0x010dd60c(iVar9,iVar7,0);
    if (uVar2 < 0x80000000) {
LAB_01122adc:
      iVar7 = func_0x010dd824(iVar9,uVar2 + 1,0);
      if (*(int *)(**(int **)(iRam01122cd4 + 0x1122afc) + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar3 = func_0x02007e9c(iVar7,0,0);
      if (iVar3 != 0) {
        if (iVar9 == 0) {
          func_0x00f6b3d0();
        }
        iVar7 = *(int *)(iVar9 + 0x28);
        if (iVar7 == 0) {
          func_0x00f6b3d0();
        }
        iVar7 = func_0x010dd824(iVar9,*(int *)(iVar7 + 0xc) + -1,0);
      }
      if (iVar6 == 5) {
        if (iVar7 == 0) {
          func_0x00f6b3d0();
        }
        iVar6 = *(int *)(iVar7 + 0x18);
        if (iVar6 == 0) {
          func_0x00f6b3d0();
        }
        if (*(int *)(iVar6 + 0x4c) != 5) {
          iVar6 = *(int *)(iVar7 + 0x18);
          if (iVar6 == 0) {
            func_0x00f6b3d0();
          }
          iVar6 = func_0x01122cf0(iVar6,iVar7);
          goto LAB_01122ca4;
        }
      }
      if (cVar1 == '\0') {
        if (iVar7 == 0) {
          func_0x00f6b3d0();
        }
      }
      else {
        if (iVar7 == 0) {
          func_0x00f6b3d0();
        }
        iVar6 = *(int *)(iVar7 + 0x18);
        if (iVar6 == 0) {
          func_0x00f6b3d0();
        }
        if (*(char *)(iVar6 + 0x1c) == '\0') {
          iVar6 = *(int *)(iVar7 + 0x18);
          if (iVar6 == 0) {
            func_0x00f6b3d0();
          }
          iVar6 = func_0x01122e00(iVar6,iVar7);
          goto LAB_01122ca4;
        }
      }
      iVar6 = *(int *)(iVar7 + 0x18);
LAB_01122ca4:
      *param_3 = iVar6;
      return 1;
    }
  }
  iVar6 = *param_3;
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  uVar8 = *(undefined4 *)(iVar6 + 0x14);
  if (iVar9 == 0) {
    func_0x00f6b3d0();
  }
  uVar8 = func_0x02ea998c(**(undefined4 **)(iRam01122cdc + 0x1122c14),uVar8,
                          **(undefined4 **)(iRam01122cd8 + 0x1122c08),*(undefined4 *)(iVar9 + 0xc),0
                         );
LAB_01122c24:
  uVar4 = func_0x00f6b3c4(**(undefined4 **)(iRam01122ce8 + 0x1122c34));
  func_0x0152e284(uVar4,uVar8,0);
  if (*(int *)(**(int **)(iRam01122cec + 0x1122c54) + 0x74) == 0) {
    func_0x00f6b294();
  }
  func_0x0200818c(uVar4,0);
  return uVar10;
}

