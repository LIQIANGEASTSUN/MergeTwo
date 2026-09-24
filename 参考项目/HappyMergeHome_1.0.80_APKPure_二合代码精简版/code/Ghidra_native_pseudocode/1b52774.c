
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b62774(undefined4 *param_1,int param_2,int param_3)

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
  
  pcVar6 = (char *)(_UNK_01b62a5c + 0x1b62794);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b62a60 + 0x1b627a8));
    func_0x01438628(*(undefined4 *)(_UNK_01b62a64 + 0x1b627b4));
    func_0x01438628(*(undefined4 *)(_UNK_01b62a68 + 0x1b627c0));
    func_0x01438628(*(undefined4 *)(_UNK_01b62a6c + 0x1b627cc));
    func_0x01438628(*(undefined4 *)(_UNK_01b62a70 + 0x1b627d8));
    func_0x01438628(*(undefined4 *)(_UNK_01b62a74 + 0x1b627e4));
    func_0x01438628(*(undefined4 *)(_UNK_01b62a78 + 0x1b627f0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa6b9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa6b9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
    return;
  }
  iVar1 = FUN_01b5b268(param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_01b5b268(param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = 0x10;
    if (param_3 != 0) {
      iVar3 = 0xc;
    }
    uVar7 = *(undefined4 *)(iVar1 + iVar3);
    if (*(int *)(**(int **)(_UNK_01b62a80 + 0x1b62894) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b62a84 + 0x1b628b4));
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
        piVar10 = *(int **)(_UNK_01b62a88 + 0x1b62910);
        puVar8 = *(undefined4 **)(_UNK_01b62a8c + 0x1b62918);
        puVar9 = *(undefined4 **)(_UNK_01b62a90 + 0x1b62920);
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
              *(undefined1 *)(param_2 + 0x48) = 1;
            }
          }
          iVar4 = *(int *)(iVar1 + 0xc);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
      uVar7 = **(undefined4 **)(_UNK_01b62a94 + 0x1b62a18);
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_01b62a50;
    }
  }
  iVar3 = 0;
  iVar4 = 0;
  uVar7 = **(undefined4 **)(_UNK_01b62a7c + 0x1b62a40);
  *param_1 = 0;
  param_1[1] = 0;
LAB_01b62a50:
  func_0x024f1088(param_1,iVar3,iVar4,uVar7);
  return;
}

