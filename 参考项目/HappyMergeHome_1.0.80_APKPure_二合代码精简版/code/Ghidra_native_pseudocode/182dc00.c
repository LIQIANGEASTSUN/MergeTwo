
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0183dc00(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_0183dfe4 + 0x183dc18);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183dfe8 + 0x183dc2c));
    func_0x01438628(*(undefined4 *)(_UNK_0183dfec + 0x183dc38));
    func_0x01438628(*(undefined4 *)(_UNK_0183dff0 + 0x183dc44));
    func_0x01438628(*(undefined4 *)(_UNK_0183dff4 + 0x183dc50));
    func_0x01438628(*(undefined4 *)(_UNK_0183dff8 + 0x183dc5c));
    func_0x01438628(*(undefined4 *)(_UNK_0183dffc + 0x183dc68));
    func_0x01438628(*(undefined4 *)(_UNK_0183e000 + 0x183dc74));
    func_0x01438628(*(undefined4 *)(_UNK_0183e004 + 0x183dc80));
    func_0x01438628(*(undefined4 *)(_UNK_0183e008 + 0x183dc8c));
    func_0x01438628(*(undefined4 *)(_UNK_0183e00c + 0x183dc98));
    func_0x01438628(*(undefined4 *)(_UNK_0183e010 + 0x183dca4));
    func_0x01438628(*(undefined4 *)(_UNK_0183e014 + 0x183dcb0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9248,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9248,0);
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
  if (*(int *)(**(int **)(_UNK_0183e018 + 0x183dd0c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0183e01c + 0x183dd28));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0183e020 + 0x183dd48));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x310);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_0183e024 + 0x183dd7c));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0183e028 + 0x183dd94));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_0183e02c + 0x183ddac));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_0183e030 + 0x183ddd8);
    puVar8 = *(undefined4 **)(_UNK_0183e034 + 0x183dde0);
    do {
      if (*(int *)(**(int **)(_UNK_0183e038 + 0x183dde8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_0183e03c + 0x183de04));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0183e040 + 0x183de24));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x310);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f04d4(iVar5,uVar7,*puVar8);
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
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_0183e044 + 0x183defc));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_0183e048 + 0x183df34) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_0183e04c + 0x183df50));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0183e050 + 0x183df70));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x310);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_0183e054 + 0x183dfc8));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

