
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032a95d4(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_032a9960 + 0x32a95f4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a9964 + 0x32a9608));
    func_0x01438628(*(undefined4 *)(_UNK_032a9968 + 0x32a9614));
    func_0x01438628(*(undefined4 *)(_UNK_032a996c + 0x32a9620));
    func_0x01438628(*(undefined4 *)(_UNK_032a9970 + 0x32a962c));
    func_0x01438628(*(undefined4 *)(_UNK_032a9974 + 0x32a9638));
    func_0x01438628(*(undefined4 *)(_UNK_032a9978 + 0x32a9644));
    func_0x01438628(*(undefined4 *)(_UNK_032a997c + 0x32a9650));
    func_0x01438628(*(undefined4 *)(_UNK_032a9980 + 0x32a965c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a5b,0);
  if (iVar1 == 0) {
    iVar1 = FUN_032a8ec4(param_2,0);
    if (iVar1 == 0) {
      puVar12 = *(undefined4 **)(_UNK_032a99ac + 0x32a9880);
      *param_1 = 0;
      param_1[1] = 0;
      uVar7 = *puVar12;
    }
    else {
      if (*(int *)(**(int **)(_UNK_032a9984 + 0x32a96e4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032a9988 + 0x32a9704));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x38);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_032a998c + 0x32a9740);
        do {
          iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_032a9990 + 0x32a974c));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_032a9994 + 0x32a978c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_032a9998 + 0x32a97bc));
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
LAB_032a98a0:
                  iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_032a999c + 0x32a98b0))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x04cd26d0(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_032a99a0 + 0x32a98fc))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x04cd26d0(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_032a99a4 + 0x32a994c);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_032a9894;
                }
              }
              else if (iVar4 < iVar2) goto LAB_032a98a0;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_032a99a8 + 0x32a9864);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_032a9894:
    func_0x03fc9b24(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3a5b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

