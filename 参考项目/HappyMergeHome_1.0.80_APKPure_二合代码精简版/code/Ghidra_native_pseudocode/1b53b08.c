
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b63b08(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01b63e38 + 0x1b63b24);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b63e3c + 0x1b63b38));
    func_0x01438628(*(undefined4 *)(_UNK_01b63e40 + 0x1b63b44));
    func_0x01438628(*(undefined4 *)(_UNK_01b63e44 + 0x1b63b50));
    func_0x01438628(*(undefined4 *)(_UNK_01b63e48 + 0x1b63b5c));
    func_0x01438628(*(undefined4 *)(_UNK_01b63e4c + 0x1b63b68));
    func_0x01438628(*(undefined4 *)(_UNK_01b63e50 + 0x1b63b74));
    func_0x01438628(*(undefined4 *)(_UNK_01b63e54 + 0x1b63b80));
    func_0x01438628(*(undefined4 *)(_UNK_01b63e58 + 0x1b63b8c));
    func_0x01438628(*(undefined4 *)(_UNK_01b63e5c + 0x1b63b98));
    func_0x01438628(*(undefined4 *)(_UNK_01b63e60 + 0x1b63ba4));
    func_0x01438628(*(undefined4 *)(_UNK_01b63e64 + 0x1b63bb0));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2d10,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01b63e68 + 0x1b63c10));
    func_0x024eed9c(iVar2,**(undefined4 **)(_UNK_01b63e6c + 0x1b63c24));
    if (param_2 != 0) {
      if (*(int *)(**(int **)(_UNK_01b63e70 + 0x1b63c40) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01b63e74 + 0x1b63c5c));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x34);
      if (iVar7 != 0) {
        iStack_2c = iVar2;
        if (0 < *(int *)(iVar7 + 0xc)) {
          iVar6 = 0;
          iVar2 = *(int *)(param_2 + 8) * 100;
          iStack_28 = iVar2 + 100;
          puVar10 = *(undefined4 **)(_UNK_01b63e78 + 0x1b63cb0);
          iStack_30 = iVar2;
          do {
            iVar3 = func_0x0152983c(iVar7,iVar6,*puVar10);
            iVar1 = iStack_2c;
            if (((iVar3 != 0) && (iVar2 <= *(int *)(iVar3 + 8))) &&
               (*(int *)(iVar3 + 8) < iStack_28)) {
              if (iStack_2c == 0) {
                func_0x014388e4();
              }
              iVar12 = *(int *)(iVar1 + 8);
              uVar11 = *(uint *)(iVar1 + 0xc);
              piVar4 = *(int **)(_UNK_01b63e7c + 0x1b63d14);
              *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
              iVar2 = *piVar4;
              if (iVar12 == 0) {
                func_0x014388e4();
              }
              if (uVar11 < *(uint *)(iVar12 + 0xc)) {
                *(uint *)(iVar1 + 0xc) = uVar11 + 1;
                piVar4 = (int *)(iVar12 + uVar11 * 4 + 0x10);
                *piVar4 = iVar3;
                func_0x014385cc(piVar4,iVar3);
                iVar2 = iStack_30;
              }
              else {
                func_0x0152874c(iVar1,iVar3,
                                *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
                iVar2 = iStack_30;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(iVar7 + 0xc));
        }
        piVar4 = *(int **)(_UNK_01b63e80 + 0x1b63d80);
        iVar7 = *piVar4;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar4;
        }
        iVar2 = iStack_2c;
        iVar6 = *(int *)(*(int *)(iVar7 + 0x5c) + 4);
        if (iVar6 == 0) {
          if (*(int *)(iVar7 + 0x74) == 0) {
            func_0x014387a4();
            iVar7 = *piVar4;
          }
          uVar9 = **(undefined4 **)(iVar7 + 0x5c);
          iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01b63e84 + 0x1b63dcc));
          func_0x024f1190(iVar6,uVar9,**(undefined4 **)(_UNK_01b63e88 + 0x1b63dec),0);
          piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 4);
          *piVar4 = iVar6;
          func_0x014385cc(piVar4,iVar6);
        }
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f11a0(iVar2,iVar6,**(undefined4 **)(_UNK_01b63e8c + 0x1b63e24));
      }
    }
    return iVar2;
  }
  iVar2 = func_0x029540a4(0x2d10,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar8 = (char *)(_UNK_028c6ce8 + 0x28c6bf4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028c6cec + 0x28c6c08),param_1,param_2,0);
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x024f56c0(&uStack_50,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  iStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x024f56d0(iVar7,uVar9,&uStack_38,uVar5,0,0);
  iVar2 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028c6cf0 + 0x28c6cd8));
  return iVar2;
}

