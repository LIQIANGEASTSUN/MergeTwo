
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01da9ab0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01da9e94 + 0x1da9ac8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da9e98 + 0x1da9adc));
    func_0x01438628(*(undefined4 *)(_UNK_01da9e9c + 0x1da9ae8));
    func_0x01438628(*(undefined4 *)(_UNK_01da9ea0 + 0x1da9af4));
    func_0x01438628(*(undefined4 *)(_UNK_01da9ea4 + 0x1da9b00));
    func_0x01438628(*(undefined4 *)(_UNK_01da9ea8 + 0x1da9b0c));
    func_0x01438628(*(undefined4 *)(_UNK_01da9eac + 0x1da9b18));
    func_0x01438628(*(undefined4 *)(_UNK_01da9eb0 + 0x1da9b24));
    func_0x01438628(*(undefined4 *)(_UNK_01da9eb4 + 0x1da9b30));
    func_0x01438628(*(undefined4 *)(_UNK_01da9eb8 + 0x1da9b3c));
    func_0x01438628(*(undefined4 *)(_UNK_01da9ebc + 0x1da9b48));
    func_0x01438628(*(undefined4 *)(_UNK_01da9ec0 + 0x1da9b54));
    func_0x01438628(*(undefined4 *)(_UNK_01da9ec4 + 0x1da9b60));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3f05,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3f05,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01da9ec8 + 0x1da9bbc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01da9ecc + 0x1da9bd8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01da9ed0 + 0x1da9bf8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x1ac);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01da9ed4 + 0x1da9c2c));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01da9ed8 + 0x1da9c44));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_01da9edc + 0x1da9c5c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_01da9ee0 + 0x1da9c88);
    puVar8 = *(undefined4 **)(_UNK_01da9ee4 + 0x1da9c90);
    do {
      if (*(int *)(**(int **)(_UNK_01da9ee8 + 0x1da9c98) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01da9eec + 0x1da9cb4));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_01da9ef0 + 0x1da9cd4));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x1ac);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x014e9678(iVar2,uVar7,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_01da9ef4 + 0x1da9dac));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_01da9ef8 + 0x1da9de4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01da9efc + 0x1da9e00));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_01da9f00 + 0x1da9e20));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x1ac);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar7,**(undefined4 **)(_UNK_01da9f04 + 0x1da9e78));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

