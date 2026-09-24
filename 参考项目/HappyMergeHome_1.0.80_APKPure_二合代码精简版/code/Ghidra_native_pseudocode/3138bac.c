
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03148bac(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_03148f90 + 0x3148bc4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03148f94 + 0x3148bd8));
    func_0x01438628(*(undefined4 *)(_UNK_03148f98 + 0x3148be4));
    func_0x01438628(*(undefined4 *)(_UNK_03148f9c + 0x3148bf0));
    func_0x01438628(*(undefined4 *)(_UNK_03148fa0 + 0x3148bfc));
    func_0x01438628(*(undefined4 *)(_UNK_03148fa4 + 0x3148c08));
    func_0x01438628(*(undefined4 *)(_UNK_03148fa8 + 0x3148c14));
    func_0x01438628(*(undefined4 *)(_UNK_03148fac + 0x3148c20));
    func_0x01438628(*(undefined4 *)(_UNK_03148fb0 + 0x3148c2c));
    func_0x01438628(*(undefined4 *)(_UNK_03148fb4 + 0x3148c38));
    func_0x01438628(*(undefined4 *)(_UNK_03148fb8 + 0x3148c44));
    func_0x01438628(*(undefined4 *)(_UNK_03148fbc + 0x3148c50));
    func_0x01438628(*(undefined4 *)(_UNK_03148fc0 + 0x3148c5c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7a1d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7a1d,0);
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
  if (*(int *)(**(int **)(_UNK_03148fc4 + 0x3148cb8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03148fc8 + 0x3148cd4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03148fcc + 0x3148cf4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2fc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03148fd0 + 0x3148d28));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03148fd4 + 0x3148d40));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_03148fd8 + 0x3148d58));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_03148fdc + 0x3148d84);
    puVar8 = *(undefined4 **)(_UNK_03148fe0 + 0x3148d8c);
    do {
      if (*(int *)(**(int **)(_UNK_03148fe4 + 0x3148d94) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_03148fe8 + 0x3148db0));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_03148fec + 0x3148dd0));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x2fc);
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
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_03148ff0 + 0x3148ea8));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_03148ff4 + 0x3148ee0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_03148ff8 + 0x3148efc));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_03148ffc + 0x3148f1c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x2fc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_03149000 + 0x3148f74));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

