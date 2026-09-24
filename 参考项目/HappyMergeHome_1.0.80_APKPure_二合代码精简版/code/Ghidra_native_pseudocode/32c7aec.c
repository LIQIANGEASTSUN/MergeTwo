
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032d7aec(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_032d7ed0 + 0x32d7b04);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d7ed4 + 0x32d7b18));
    func_0x01438628(*(undefined4 *)(_UNK_032d7ed8 + 0x32d7b24));
    func_0x01438628(*(undefined4 *)(_UNK_032d7edc + 0x32d7b30));
    func_0x01438628(*(undefined4 *)(_UNK_032d7ee0 + 0x32d7b3c));
    func_0x01438628(*(undefined4 *)(_UNK_032d7ee4 + 0x32d7b48));
    func_0x01438628(*(undefined4 *)(_UNK_032d7ee8 + 0x32d7b54));
    func_0x01438628(*(undefined4 *)(_UNK_032d7eec + 0x32d7b60));
    func_0x01438628(*(undefined4 *)(_UNK_032d7ef0 + 0x32d7b6c));
    func_0x01438628(*(undefined4 *)(_UNK_032d7ef4 + 0x32d7b78));
    func_0x01438628(*(undefined4 *)(_UNK_032d7ef8 + 0x32d7b84));
    func_0x01438628(*(undefined4 *)(_UNK_032d7efc + 0x32d7b90));
    func_0x01438628(*(undefined4 *)(_UNK_032d7f00 + 0x32d7b9c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x83ba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x83ba,0);
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
  if (*(int *)(**(int **)(_UNK_032d7f04 + 0x32d7bf8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032d7f08 + 0x32d7c14));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032d7f0c + 0x32d7c34));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x32c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_032d7f10 + 0x32d7c68));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032d7f14 + 0x32d7c80));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_032d7f18 + 0x32d7c98));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_032d7f1c + 0x32d7cc4);
    puVar8 = *(undefined4 **)(_UNK_032d7f20 + 0x32d7ccc);
    do {
      if (*(int *)(**(int **)(_UNK_032d7f24 + 0x32d7cd4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_032d7f28 + 0x32d7cf0));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_032d7f2c + 0x32d7d10));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x32c);
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
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_032d7f30 + 0x32d7de8));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_032d7f34 + 0x32d7e20) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_032d7f38 + 0x32d7e3c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_032d7f3c + 0x32d7e5c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x32c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_032d7f40 + 0x32d7eb4));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

