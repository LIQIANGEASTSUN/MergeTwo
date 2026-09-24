
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f1210(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_016f1598 + 0x16f1230);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f159c + 0x16f1244));
    func_0x01438628(*(undefined4 *)(_UNK_016f15a0 + 0x16f1250));
    func_0x01438628(*(undefined4 *)(_UNK_016f15a4 + 0x16f125c));
    func_0x01438628(*(undefined4 *)(_UNK_016f15a8 + 0x16f1268));
    func_0x01438628(*(undefined4 *)(_UNK_016f15ac + 0x16f1274));
    func_0x01438628(*(undefined4 *)(_UNK_016f15b0 + 0x16f1280));
    func_0x01438628(*(undefined4 *)(_UNK_016f15b4 + 0x16f128c));
    func_0x01438628(*(undefined4 *)(_UNK_016f15b8 + 0x16f1298));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3ab0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_016ea4e8(param_2);
    if (iVar1 == 0) {
      uVar7 = **(undefined4 **)(_UNK_016f15e4 + 0x16f14b4);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_016f15bc + 0x16f1318) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f15c0 + 0x16f1338));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x3c);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_016f15c4 + 0x16f1374);
        do {
          iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_016f15c8 + 0x16f1380));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_016f15cc + 0x16f13c0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_016f15d0 + 0x16f13f0));
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
LAB_016f14d8:
                  iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_016f15d4 + 0x16f14e8))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x024f0530(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_016f15d8 + 0x16f1534))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f0530(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_016f15dc + 0x16f1584);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_016f14cc;
                }
              }
              else if (iVar4 < iVar2) goto LAB_016f14d8;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_016f15e0 + 0x16f1498);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_016f14cc:
    func_0x024f1088(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3ab0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

