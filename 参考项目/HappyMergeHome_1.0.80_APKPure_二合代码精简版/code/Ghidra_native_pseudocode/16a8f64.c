
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016b8f64(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_016b92ec + 0x16b8f84);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b92f0 + 0x16b8f98));
    func_0x01438628(*(undefined4 *)(_UNK_016b92f4 + 0x16b8fa4));
    func_0x01438628(*(undefined4 *)(_UNK_016b92f8 + 0x16b8fb0));
    func_0x01438628(*(undefined4 *)(_UNK_016b92fc + 0x16b8fbc));
    func_0x01438628(*(undefined4 *)(_UNK_016b9300 + 0x16b8fc8));
    func_0x01438628(*(undefined4 *)(_UNK_016b9304 + 0x16b8fd4));
    func_0x01438628(*(undefined4 *)(_UNK_016b9308 + 0x16b8fe0));
    func_0x01438628(*(undefined4 *)(_UNK_016b930c + 0x16b8fec));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b28,0);
  if (iVar1 == 0) {
    iVar1 = FUN_016afa88(param_2);
    if (iVar1 == 0) {
      uVar7 = **(undefined4 **)(_UNK_016b9338 + 0x16b9208);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_016b9310 + 0x16b906c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016b9314 + 0x16b908c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_016b9318 + 0x16b90c8);
        do {
          iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_016b931c + 0x16b90d4));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_016b9320 + 0x16b9114) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_016b9324 + 0x16b9144));
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
              iVar4 = func_0x024f0530(iVar3,iVar9,*puVar12);
              if (iVar9 < iVar11 + -1) {
                if ((iVar4 < iVar2) &&
                   (iVar11 = func_0x024f0530(iVar3,iVar9 + 1,*puVar12), iVar2 <= iVar11)) {
LAB_016b922c:
                  iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_016b9328 + 0x16b923c))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x024f0530(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_016b932c + 0x16b9288))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f0530(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_016b9330 + 0x16b92d8);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_016b9220;
                }
              }
              else if (iVar4 < iVar2) goto LAB_016b922c;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_016b9334 + 0x16b91ec);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_016b9220:
    func_0x024f1088(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3b28,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

