
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0180a38c(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_0180a6a0 + 0x180a3ac);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0180a6a4 + 0x180a3c0));
    func_0x01438628(*(undefined4 *)(_UNK_0180a6a8 + 0x180a3cc));
    func_0x01438628(*(undefined4 *)(_UNK_0180a6ac + 0x180a3d8));
    func_0x01438628(*(undefined4 *)(_UNK_0180a6b0 + 0x180a3e4));
    func_0x01438628(*(undefined4 *)(_UNK_0180a6b4 + 0x180a3f0));
    func_0x01438628(*(undefined4 *)(_UNK_0180a6b8 + 0x180a3fc));
    func_0x01438628(*(undefined4 *)(_UNK_0180a6bc + 0x180a408));
    func_0x01438628(*(undefined4 *)(_UNK_0180a6c0 + 0x180a414));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x90d5,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0180a6c4 + 0x180a484) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_017faff8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_0180a1d4(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_0180a6c8 + 0x180a4c8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0180a6cc + 0x180a4e8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029b1058(iVar1,uVar2,0);
    iVar8 = 0;
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_0180a6d0 + 0x180a544);
        puVar9 = *(undefined4 **)(_UNK_0180a6d4 + 0x180a54c);
        do {
          if (*(int *)(**(int **)(_UNK_0180a6d8 + 0x180a554) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar10);
          iVar3 = func_0x0152983c(iVar1,iVar6,*puVar9);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar3 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02be153c(iVar5,uVar2,0);
          if (*(int *)(**(int **)(_UNK_0180a6dc + 0x180a5c0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar10);
          iVar4 = func_0x0152983c(iVar1,iVar6,*puVar9);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x02be1348(iVar5,uVar2,0);
          if (iVar5 == 0 && iVar3 == 1) {
            uVar2 = *puVar9;
            *(undefined1 *)(param_2 + 0x53) = 1;
            iVar5 = func_0x0152983c(iVar1,iVar6,uVar2);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x0180a6e4(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_0180a6e0 + 0x180a684);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x90d5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

