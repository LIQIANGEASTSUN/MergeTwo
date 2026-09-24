
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03088908(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_03088c1c + 0x3088928);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03088c20 + 0x308893c));
    func_0x01438628(*(undefined4 *)(_UNK_03088c24 + 0x3088948));
    func_0x01438628(*(undefined4 *)(_UNK_03088c28 + 0x3088954));
    func_0x01438628(*(undefined4 *)(_UNK_03088c2c + 0x3088960));
    func_0x01438628(*(undefined4 *)(_UNK_03088c30 + 0x308896c));
    func_0x01438628(*(undefined4 *)(_UNK_03088c34 + 0x3088978));
    func_0x01438628(*(undefined4 *)(_UNK_03088c38 + 0x3088984));
    func_0x01438628(*(undefined4 *)(_UNK_03088c3c + 0x3088990));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x75ac,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03088c40 + 0x3088a00) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03078444();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_03088750(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_03088c44 + 0x3088a44) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03088c48 + 0x3088a64));
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
        puVar10 = *(undefined4 **)(_UNK_03088c4c + 0x3088ac0);
        puVar9 = *(undefined4 **)(_UNK_03088c50 + 0x3088ac8);
        do {
          if (*(int *)(**(int **)(_UNK_03088c54 + 0x3088ad0) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_03088c58 + 0x3088b3c) + 0x74) == 0) {
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
          iVar5 = func_0x02be1348(iVar5,uVar2,0);
          if (iVar5 == 0 && iVar3 == 1) {
            uVar2 = *puVar9;
            *(undefined1 *)(param_2 + 0x52) = 1;
            iVar5 = func_0x04cfd760(iVar1,iVar6,uVar2);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03088c60(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_03088c5c + 0x3088c00);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x75ac,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

