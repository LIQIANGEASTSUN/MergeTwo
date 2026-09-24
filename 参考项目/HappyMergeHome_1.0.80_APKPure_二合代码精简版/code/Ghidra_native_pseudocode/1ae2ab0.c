
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af2ab0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01af2dc4 + 0x1af2ad0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af2dc8 + 0x1af2ae4));
    func_0x01438628(*(undefined4 *)(_UNK_01af2dcc + 0x1af2af0));
    func_0x01438628(*(undefined4 *)(_UNK_01af2dd0 + 0x1af2afc));
    func_0x01438628(*(undefined4 *)(_UNK_01af2dd4 + 0x1af2b08));
    func_0x01438628(*(undefined4 *)(_UNK_01af2dd8 + 0x1af2b14));
    func_0x01438628(*(undefined4 *)(_UNK_01af2ddc + 0x1af2b20));
    func_0x01438628(*(undefined4 *)(_UNK_01af2de0 + 0x1af2b2c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4e4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa4e4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
    return;
  }
  iVar1 = FUN_01ae5790(param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_01ae5790(param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = 0x10;
    if (param_3 != 0) {
      iVar3 = 0xc;
    }
    uVar7 = *(undefined4 *)(iVar1 + iVar3);
    if (*(int *)(**(int **)(_UNK_01af2de8 + 0x1af2bd0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01af2dec + 0x1af2bf0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = 0;
    iVar1 = func_0x029b1058(iVar1,uVar7,0);
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0xc);
      if (0 < iVar4) {
        iVar3 = 0;
        iVar5 = 0;
        piVar10 = *(int **)(_UNK_01af2df0 + 0x1af2c4c);
        puVar8 = *(undefined4 **)(_UNK_01af2df4 + 0x1af2c54);
        puVar9 = *(undefined4 **)(_UNK_01af2df8 + 0x1af2c5c);
        do {
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(*puVar8);
          iVar2 = func_0x0152983c(iVar1,iVar5,*puVar9);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = *(undefined4 *)(iVar2 + 8);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x02be153c(iVar4,uVar7,0);
          if (iVar4 != 0) {
            iVar4 = func_0x0152983c(iVar1,iVar5,*puVar9);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            FUN_01ae9f38(param_2,*(undefined4 *)(iVar4 + 8));
            if (*(int *)(*piVar10 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(*puVar8);
            iVar2 = func_0x0152983c(iVar1,iVar5,*puVar9);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar2 + 8);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar3 = iVar3 + 1;
            iVar4 = func_0x02be1348(iVar4,uVar7,0);
            if (iVar4 == 0) {
              *(undefined1 *)(param_2 + 0x4c) = 1;
            }
          }
          iVar4 = *(int *)(iVar1 + 0xc);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
      uVar7 = **(undefined4 **)(_UNK_01af2dfc + 0x1af2d80);
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_01af2db8;
    }
  }
  iVar3 = 0;
  iVar4 = 0;
  uVar7 = **(undefined4 **)(_UNK_01af2de4 + 0x1af2da8);
  *param_1 = 0;
  param_1[1] = 0;
LAB_01af2db8:
  func_0x024f1088(param_1,iVar3,iVar4,uVar7);
  return;
}

