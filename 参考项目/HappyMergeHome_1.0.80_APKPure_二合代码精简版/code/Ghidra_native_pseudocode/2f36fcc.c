
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f46fcc(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_02f47354 + 0x2f46fec);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f47358 + 0x2f47000));
    func_0x01438628(*(undefined4 *)(_UNK_02f4735c + 0x2f4700c));
    func_0x01438628(*(undefined4 *)(_UNK_02f47360 + 0x2f47018));
    func_0x01438628(*(undefined4 *)(_UNK_02f47364 + 0x2f47024));
    func_0x01438628(*(undefined4 *)(_UNK_02f47368 + 0x2f47030));
    func_0x01438628(*(undefined4 *)(_UNK_02f4736c + 0x2f4703c));
    func_0x01438628(*(undefined4 *)(_UNK_02f47370 + 0x2f47048));
    func_0x01438628(*(undefined4 *)(_UNK_02f47374 + 0x2f47054));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b55,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02f3e088(param_2);
    if (iVar1 == 0) {
      uVar7 = **(undefined4 **)(_UNK_02f473a0 + 0x2f47270);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_02f47378 + 0x2f470d4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4737c + 0x2f470f4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_02f47380 + 0x2f47130);
        do {
          iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02f47384 + 0x2f4713c));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_02f47388 + 0x2f4717c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02f4738c + 0x2f471ac));
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
LAB_02f47294:
                  iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02f47390 + 0x2f472a4))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x04cd26d0(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02f47394 + 0x2f472f0))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x04cd26d0(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_02f47398 + 0x2f47340);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_02f47288;
                }
              }
              else if (iVar4 < iVar2) goto LAB_02f47294;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_02f4739c + 0x2f47254);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_02f47288:
    func_0x03fc9b24(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3b55,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

