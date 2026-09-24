
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0310f514(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_0310f8f8 + 0x310f52c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310f8fc + 0x310f540));
    func_0x01438628(*(undefined4 *)(_UNK_0310f900 + 0x310f54c));
    func_0x01438628(*(undefined4 *)(_UNK_0310f904 + 0x310f558));
    func_0x01438628(*(undefined4 *)(_UNK_0310f908 + 0x310f564));
    func_0x01438628(*(undefined4 *)(_UNK_0310f90c + 0x310f570));
    func_0x01438628(*(undefined4 *)(_UNK_0310f910 + 0x310f57c));
    func_0x01438628(*(undefined4 *)(_UNK_0310f914 + 0x310f588));
    func_0x01438628(*(undefined4 *)(_UNK_0310f918 + 0x310f594));
    func_0x01438628(*(undefined4 *)(_UNK_0310f91c + 0x310f5a0));
    func_0x01438628(*(undefined4 *)(_UNK_0310f920 + 0x310f5ac));
    func_0x01438628(*(undefined4 *)(_UNK_0310f924 + 0x310f5b8));
    func_0x01438628(*(undefined4 *)(_UNK_0310f928 + 0x310f5c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7895,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7895,0);
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
  if (*(int *)(**(int **)(_UNK_0310f92c + 0x310f620) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0310f930 + 0x310f63c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0310f934 + 0x310f65c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x360);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0310f938 + 0x310f690));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0310f93c + 0x310f6a8));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_0310f940 + 0x310f6c0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_0310f944 + 0x310f6ec);
    puVar8 = *(undefined4 **)(_UNK_0310f948 + 0x310f6f4);
    do {
      if (*(int *)(**(int **)(_UNK_0310f94c + 0x310f6fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0310f950 + 0x310f718));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0310f954 + 0x310f738));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x360);
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
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_0310f958 + 0x310f810));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_0310f95c + 0x310f848) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0310f960 + 0x310f864));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0310f964 + 0x310f884));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x360);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_0310f968 + 0x310f8dc));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

