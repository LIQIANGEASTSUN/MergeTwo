
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b62cb0(undefined4 *param_1,undefined4 param_2,int param_3)

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
  int iVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_01b62fbc + 0x1b62cd0);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b62fc0 + 0x1b62ce4));
    func_0x01438628(*(undefined4 *)(_UNK_01b62fc4 + 0x1b62cf0));
    func_0x01438628(*(undefined4 *)(_UNK_01b62fc8 + 0x1b62cfc));
    func_0x01438628(*(undefined4 *)(_UNK_01b62fcc + 0x1b62d08));
    func_0x01438628(*(undefined4 *)(_UNK_01b62fd0 + 0x1b62d14));
    func_0x01438628(*(undefined4 *)(_UNK_01b62fd4 + 0x1b62d20));
    func_0x01438628(*(undefined4 *)(_UNK_01b62fd8 + 0x1b62d2c));
    func_0x01438628(*(undefined4 *)(_UNK_01b62fdc + 0x1b62d38));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3c17,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3c17,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
    return;
  }
  iVar1 = FUN_01b5797c(param_2);
  if (param_3 != 0 && iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01b62fe4 + 0x1b62dbc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b62fe8 + 0x1b62dd8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 != 0) {
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_01b62fec + 0x1b62e1c);
        do {
          iVar2 = func_0x0152983c(iVar1,iVar9,**(undefined4 **)(_UNK_01b62ff0 + 0x1b62e28));
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == *(int *)(param_3 + 0x10))) {
            if (*(int *)(**(int **)(_UNK_01b62ff4 + 0x1b62e5c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar10 = 0;
            iVar3 = func_0x02af5448(param_3,0);
            iVar11 = *(int *)(iVar2 + 0x10);
            while( true ) {
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              iVar13 = *(int *)(iVar11 + 0xc);
              if (iVar13 <= iVar10) break;
              iVar4 = func_0x024f0530(iVar11,iVar10,*puVar12);
              if (iVar10 < iVar13 + -1) {
                if ((iVar4 < iVar3) &&
                   (iVar13 = func_0x024f0530(iVar11,iVar10 + 1,*puVar12), iVar3 <= iVar13)) {
LAB_01b62f4c:
                  iVar1 = *(int *)(iVar2 + 0x14);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x024f0530(iVar1,iVar10,*puVar12);
                  iVar1 = *(int *)(iVar2 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f0530(iVar1,iVar10,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_01b62ff8 + 0x1b62fa8);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_01b62f40;
                }
              }
              else if (iVar4 < iVar3) goto LAB_01b62f4c;
              iVar10 = iVar10 + 1;
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_01b62ffc + 0x1b62f0c);
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_01b62f38;
    }
  }
  uVar7 = **(undefined4 **)(_UNK_01b62fe0 + 0x1b62f28);
  *param_1 = 0;
  param_1[1] = 0;
LAB_01b62f38:
  uVar5 = 0;
  uVar6 = 0;
LAB_01b62f40:
  func_0x024f1088(param_1,uVar5,uVar6,uVar7);
  return;
}

