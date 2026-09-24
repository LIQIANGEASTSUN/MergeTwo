
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01644a80(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_01644e08 + 0x1644aa0);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01644e0c + 0x1644ab4));
    func_0x01438628(*(undefined4 *)(_UNK_01644e10 + 0x1644ac0));
    func_0x01438628(*(undefined4 *)(_UNK_01644e14 + 0x1644acc));
    func_0x01438628(*(undefined4 *)(_UNK_01644e18 + 0x1644ad8));
    func_0x01438628(*(undefined4 *)(_UNK_01644e1c + 0x1644ae4));
    func_0x01438628(*(undefined4 *)(_UNK_01644e20 + 0x1644af0));
    func_0x01438628(*(undefined4 *)(_UNK_01644e24 + 0x1644afc));
    func_0x01438628(*(undefined4 *)(_UNK_01644e28 + 0x1644b08));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3beb,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0163bb3c(param_2);
    if (iVar1 == 0) {
      uVar7 = **(undefined4 **)(_UNK_01644e54 + 0x1644d24);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_01644e2c + 0x1644b88) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01644e30 + 0x1644ba8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_01644e34 + 0x1644be4);
        do {
          iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01644e38 + 0x1644bf0));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_01644e3c + 0x1644c30) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01644e40 + 0x1644c60));
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
LAB_01644d48:
                  iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01644e44 + 0x1644d58))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x024f0530(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01644e48 + 0x1644da4))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f0530(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_01644e4c + 0x1644df4);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_01644d3c;
                }
              }
              else if (iVar4 < iVar2) goto LAB_01644d48;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_01644e50 + 0x1644d08);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_01644d3c:
    func_0x024f1088(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3beb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

