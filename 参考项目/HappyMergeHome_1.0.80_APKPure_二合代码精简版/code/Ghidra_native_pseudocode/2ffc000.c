
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0300c000(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_0300c388 + 0x300c020);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0300c38c + 0x300c034));
    func_0x01438628(*(undefined4 *)(_UNK_0300c390 + 0x300c040));
    func_0x01438628(*(undefined4 *)(_UNK_0300c394 + 0x300c04c));
    func_0x01438628(*(undefined4 *)(_UNK_0300c398 + 0x300c058));
    func_0x01438628(*(undefined4 *)(_UNK_0300c39c + 0x300c064));
    func_0x01438628(*(undefined4 *)(_UNK_0300c3a0 + 0x300c070));
    func_0x01438628(*(undefined4 *)(_UNK_0300c3a4 + 0x300c07c));
    func_0x01438628(*(undefined4 *)(_UNK_0300c3a8 + 0x300c088));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3ba0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_03003ef4(param_2);
    if (iVar1 == 0) {
      uVar7 = **(undefined4 **)(_UNK_0300c3d4 + 0x300c2a4);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_0300c3ac + 0x300c108) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0300c3b0 + 0x300c128));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_0300c3b4 + 0x300c164);
        do {
          iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_0300c3b8 + 0x300c170));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_0300c3bc + 0x300c1b0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_0300c3c0 + 0x300c1e0));
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
LAB_0300c2c8:
                  iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_0300c3c4 + 0x300c2d8))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x04cd26d0(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_0300c3c8 + 0x300c324))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x04cd26d0(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_0300c3cc + 0x300c374);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_0300c2bc;
                }
              }
              else if (iVar4 < iVar2) goto LAB_0300c2c8;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_0300c3d0 + 0x300c288);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_0300c2bc:
    func_0x03fc9b24(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3ba0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

