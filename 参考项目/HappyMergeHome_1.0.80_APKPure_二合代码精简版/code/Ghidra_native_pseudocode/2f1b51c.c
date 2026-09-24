
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2b51c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_02f2b7fc + 0x2f2b53c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f2b800 + 0x2f2b550));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b804 + 0x2f2b55c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b808 + 0x2f2b568));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b80c + 0x2f2b574));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b810 + 0x2f2b580));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b814 + 0x2f2b58c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b818 + 0x2f2b598));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b81c + 0x2f2b5a4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6d45,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f2b820 + 0x2f2b614) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f1f154();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_02f2b364(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_02f2b824 + 0x2f2b658) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2b828 + 0x2f2b674));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_029b1058(iVar1,uVar2,0);
    iVar8 = 0;
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_02f2b82c + 0x2f2b6d0);
        puVar9 = *(undefined4 **)(_UNK_02f2b830 + 0x2f2b6d8);
        do {
          if (*(int *)(**(int **)(_UNK_02f2b834 + 0x2f2b6e0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(*puVar10);
          iVar3 = func_0x04cfd760(iVar1,iVar6,*puVar9);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar3 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02be153c(iVar5,uVar2,0);
          if (*(int *)(**(int **)(_UNK_02f2b838 + 0x2f2b74c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(*puVar10);
          iVar4 = func_0x04cfd760(iVar1,iVar6,*puVar9);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x02be1348(iVar5,uVar2,0);
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar8 = iVar8 + iVar3;
          if (iVar4 == 0 && iVar3 == 1) {
            *(undefined1 *)(param_2 + 0x53) = 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_02f2b83c + 0x2f2b7e0);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x6d45,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

