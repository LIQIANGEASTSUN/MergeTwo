
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192e8ac(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_0192ebbc + 0x192e8cc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0192ebc0 + 0x192e8e0));
    func_0x01438628(*(undefined4 *)(_UNK_0192ebc4 + 0x192e8ec));
    func_0x01438628(*(undefined4 *)(_UNK_0192ebc8 + 0x192e8f8));
    func_0x01438628(*(undefined4 *)(_UNK_0192ebcc + 0x192e904));
    func_0x01438628(*(undefined4 *)(_UNK_0192ebd0 + 0x192e910));
    func_0x01438628(*(undefined4 *)(_UNK_0192ebd4 + 0x192e91c));
    func_0x01438628(*(undefined4 *)(_UNK_0192ebd8 + 0x192e928));
    func_0x01438628(*(undefined4 *)(_UNK_0192ebdc + 0x192e934));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x97a8,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0192ebe0 + 0x192e9a4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01920184();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_0192e6f4(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_0192ebe4 + 0x192e9e8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0192ebe8 + 0x192ea04));
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
        puVar10 = *(undefined4 **)(_UNK_0192ebec + 0x192ea60);
        puVar9 = *(undefined4 **)(_UNK_0192ebf0 + 0x192ea68);
        do {
          if (*(int *)(**(int **)(_UNK_0192ebf4 + 0x192ea70) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_0192ebf8 + 0x192eadc) + 0x74) == 0) {
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
            iVar5 = func_0x0152983c(iVar1,iVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x0192ec00(param_2,*(undefined4 *)(iVar5 + 8));
            *(undefined1 *)(param_2 + 0x52) = 1;
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_0192ebfc + 0x192eba0);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x97a8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

