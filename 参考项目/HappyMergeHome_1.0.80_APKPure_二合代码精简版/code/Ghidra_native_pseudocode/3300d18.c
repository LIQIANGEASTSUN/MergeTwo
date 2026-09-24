
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03310d18(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_033110a4 + 0x3310d38);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_033110a8 + 0x3310d4c));
    func_0x01438628(*(undefined4 *)(_UNK_033110ac + 0x3310d58));
    func_0x01438628(*(undefined4 *)(_UNK_033110b0 + 0x3310d64));
    func_0x01438628(*(undefined4 *)(_UNK_033110b4 + 0x3310d70));
    func_0x01438628(*(undefined4 *)(_UNK_033110b8 + 0x3310d7c));
    func_0x01438628(*(undefined4 *)(_UNK_033110bc + 0x3310d88));
    func_0x01438628(*(undefined4 *)(_UNK_033110c0 + 0x3310d94));
    func_0x01438628(*(undefined4 *)(_UNK_033110c4 + 0x3310da0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a77,0);
  if (iVar1 == 0) {
    iVar1 = FUN_03310620(param_2,0);
    if (iVar1 == 0) {
      puVar12 = *(undefined4 **)(_UNK_033110f0 + 0x3310fc4);
      *param_1 = 0;
      param_1[1] = 0;
      uVar7 = *puVar12;
    }
    else {
      if (*(int *)(**(int **)(_UNK_033110c8 + 0x3310e28) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_033110cc + 0x3310e48));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x3c);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_033110d0 + 0x3310e84);
        do {
          iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_033110d4 + 0x3310e90));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_033110d8 + 0x3310ed0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_033110dc + 0x3310f00));
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
LAB_03310fe4:
                  iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_033110e0 + 0x3310ff4))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x04cd26d0(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_033110e4 + 0x3311040))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x04cd26d0(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_033110e8 + 0x3311090);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_03310fd8;
                }
              }
              else if (iVar4 < iVar2) goto LAB_03310fe4;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_033110ec + 0x3310fa8);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_03310fd8:
    func_0x03fc9b24(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3a77,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

