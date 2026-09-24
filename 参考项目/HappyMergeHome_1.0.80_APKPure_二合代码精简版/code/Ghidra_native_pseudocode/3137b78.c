
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03147b78(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_03147f00 + 0x3147b98);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03147f04 + 0x3147bac));
    func_0x01438628(*(undefined4 *)(_UNK_03147f08 + 0x3147bb8));
    func_0x01438628(*(undefined4 *)(_UNK_03147f0c + 0x3147bc4));
    func_0x01438628(*(undefined4 *)(_UNK_03147f10 + 0x3147bd0));
    func_0x01438628(*(undefined4 *)(_UNK_03147f14 + 0x3147bdc));
    func_0x01438628(*(undefined4 *)(_UNK_03147f18 + 0x3147be8));
    func_0x01438628(*(undefined4 *)(_UNK_03147f1c + 0x3147bf4));
    func_0x01438628(*(undefined4 *)(_UNK_03147f20 + 0x3147c00));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a92,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0313e88c(param_2);
    if (iVar1 == 0) {
      uVar7 = **(undefined4 **)(_UNK_03147f4c + 0x3147e1c);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_03147f24 + 0x3147c80) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03147f28 + 0x3147ca0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_03147f2c + 0x3147cdc);
        do {
          iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_03147f30 + 0x3147ce8));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_03147f34 + 0x3147d28) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_03147f38 + 0x3147d58));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x10);
            iVar9 = 0;
            while( true ) {
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar11 = *(int *)(iVar3 + 0xc);
              if (iVar11 <= iVar9) break;
              iVar4 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
              if (iVar9 < iVar11 + -1) {
                if ((iVar4 < iVar2) &&
                   (iVar11 = func_0x04cd26d0(iVar3,iVar9 + 1,*puVar12), iVar2 <= iVar11)) {
LAB_03147e40:
                  iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_03147f3c + 0x3147e50))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x04cd26d0(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_03147f40 + 0x3147e9c))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x04cd26d0(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_03147f44 + 0x3147eec);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_03147e34;
                }
              }
              else if (iVar4 < iVar2) goto LAB_03147e40;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_03147f48 + 0x3147e00);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_03147e34:
    func_0x03fc9b24(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3a92,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

