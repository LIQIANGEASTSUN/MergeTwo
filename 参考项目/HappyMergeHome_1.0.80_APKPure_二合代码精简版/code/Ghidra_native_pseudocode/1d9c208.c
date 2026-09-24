
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dac208(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_01dac5d0 + 0x1dac224);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01dac5d4 + 0x1dac238));
    func_0x01438628(*(undefined4 *)(_UNK_01dac5d8 + 0x1dac244));
    func_0x01438628(*(undefined4 *)(_UNK_01dac5dc + 0x1dac250));
    func_0x01438628(*(undefined4 *)(_UNK_01dac5e0 + 0x1dac25c));
    func_0x01438628(*(undefined4 *)(_UNK_01dac5e4 + 0x1dac268));
    func_0x01438628(*(undefined4 *)(_UNK_01dac5e8 + 0x1dac274));
    func_0x01438628(*(undefined4 *)(_UNK_01dac5ec + 0x1dac280));
    func_0x01438628(*(undefined4 *)(_UNK_01dac5f0 + 0x1dac28c));
    func_0x01438628(*(undefined4 *)(_UNK_01dac5f4 + 0x1dac298));
    func_0x01438628(*(undefined4 *)(_UNK_01dac5f8 + 0x1dac2a4));
    func_0x01438628(*(undefined4 *)(_UNK_01dac5fc + 0x1dac2b0));
    func_0x01438628(*(undefined4 *)(_UNK_01dac600 + 0x1dac2bc));
    func_0x01438628(*(undefined4 *)(_UNK_01dac604 + 0x1dac2c8));
    func_0x01438628(*(undefined4 *)(_UNK_01dac608 + 0x1dac2d4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3f0e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3f0e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01dac60c + 0x1dac334) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01dac610 + 0x1dac350));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01dac614 + 0x1dac370));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x1ac);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01dac618 + 0x1dac3a4));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01dac61c + 0x1dac3bc));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_01dac620 + 0x1dac3d4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar9 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar9) {
    puVar10 = *(undefined4 **)(_UNK_01dac624 + 0x1dac400);
    puVar8 = *(undefined4 **)(_UNK_01dac628 + 0x1dac408);
    iStack_28 = iVar1;
    do {
      iVar1 = iStack_28;
      if (*(int *)(**(int **)(_UNK_01dac62c + 0x1dac414) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01dac630 + 0x1dac430));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_01dac634 + 0x1dac450));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x1ac);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar9,**(undefined4 **)(_UNK_01dac638 + 0x1dac488));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b73d40(iVar5,uVar7,**(undefined4 **)(_UNK_01dac63c + 0x1dac4b0));
      if (*(int *)(**(int **)(_UNK_01dac640 + 0x1dac4c8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = FUN_01dab484(iVar1);
      if ((param_2 != 0 && iVar5 != 0) && (0 < *(int *)(param_2 + 0xc))) {
        iVar5 = 0;
        do {
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar1 + 0x14);
          iVar2 = func_0x0152983c(param_2,iVar5,*puVar10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = *(undefined4 *)(iVar2 + 8);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x024f0540(iVar6,uVar7,*puVar8);
          if (iVar2 != 0) {
            iVar6 = *(int *)(iVar1 + 0x14);
            iVar2 = func_0x0152983c(param_2,iVar5,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar2 + 8);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            func_0x03b70e64(iVar6,uVar7,**(undefined4 **)(_UNK_01dac644 + 0x1dac5ac));
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_2 + 0xc));
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 < 0x80000000);
  }
  return;
}

