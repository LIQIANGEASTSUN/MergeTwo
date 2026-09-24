
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03311d60(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_03312144 + 0x3311d78);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03312148 + 0x3311d8c));
    func_0x01438628(*(undefined4 *)(_UNK_0331214c + 0x3311d98));
    func_0x01438628(*(undefined4 *)(_UNK_03312150 + 0x3311da4));
    func_0x01438628(*(undefined4 *)(_UNK_03312154 + 0x3311db0));
    func_0x01438628(*(undefined4 *)(_UNK_03312158 + 0x3311dbc));
    func_0x01438628(*(undefined4 *)(_UNK_0331215c + 0x3311dc8));
    func_0x01438628(*(undefined4 *)(_UNK_03312160 + 0x3311dd4));
    func_0x01438628(*(undefined4 *)(_UNK_03312164 + 0x3311de0));
    func_0x01438628(*(undefined4 *)(_UNK_03312168 + 0x3311dec));
    func_0x01438628(*(undefined4 *)(_UNK_0331216c + 0x3311df8));
    func_0x01438628(*(undefined4 *)(_UNK_03312170 + 0x3311e04));
    func_0x01438628(*(undefined4 *)(_UNK_03312174 + 0x3311e10));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8532,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8532,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_03312178 + 0x3311e6c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0331217c + 0x3311e88));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03312180 + 0x3311ea8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x270);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03312184 + 0x3311edc));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03312188 + 0x3311ef4));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_0331218c + 0x3311f0c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_03312190 + 0x3311f38);
    puVar8 = *(undefined4 **)(_UNK_03312194 + 0x3311f40);
    do {
      if (*(int *)(**(int **)(_UNK_03312198 + 0x3311f48) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0331219c + 0x3311f64));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_033121a0 + 0x3311f84));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x270);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x03b73d40(iVar5,uVar6,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x04f6a364(iVar2,uVar6,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_033121a4 + 0x331205c));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_033121a8 + 0x3312094) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_033121ac + 0x33120b0));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_033121b0 + 0x33120d0));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x270);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_033121b4 + 0x3312128));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

