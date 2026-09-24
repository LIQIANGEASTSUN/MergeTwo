
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bc0e4(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_016bc398 + 0x16bc0f8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016bc39c + 0x16bc10c));
    func_0x01438628(*(undefined4 *)(_UNK_016bc3a0 + 0x16bc118));
    func_0x01438628(*(undefined4 *)(_UNK_016bc3a4 + 0x16bc124));
    func_0x01438628(*(undefined4 *)(_UNK_016bc3a8 + 0x16bc130));
    func_0x01438628(*(undefined4 *)(_UNK_016bc3ac + 0x16bc13c));
    func_0x01438628(*(undefined4 *)(_UNK_016bc3b0 + 0x16bc148));
    func_0x01438628(*(undefined4 *)(_UNK_016bc3b4 + 0x16bc154));
    func_0x01438628(*(undefined4 *)(_UNK_016bc3b8 + 0x16bc160));
    func_0x01438628(*(undefined4 *)(_UNK_016bc3bc + 0x16bc16c));
    func_0x01438628(*(undefined4 *)(_UNK_016bc3c0 + 0x16bc178));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8928,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8928,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_016bc3c4 + 0x16bc1d0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016bc3c8 + 0x16bc1ec));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_016bc3cc + 0x16bc210);
  iVar1 = func_0x024f04cc(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x35c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016bc3d0 + 0x16bc240));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016bc3d4 + 0x16bc258));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_016bc3d8 + 0x16bc270));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_016bc3dc + 0x16bc29c);
    puVar7 = *(undefined4 **)(_UNK_016bc3e0 + 0x16bc2a4);
    piVar8 = *(int **)(_UNK_016bc3e4 + 0x16bc2ac);
    do {
      if (*(int *)(**(int **)(_UNK_016bc3e8 + 0x16bc2b4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_016bc3ec + 0x16bc2d0));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x024f04cc(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x35c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x0152983c(iVar1,uVar4,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x024f04d4(iVar6,uVar3,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_016bbf24(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_016bc030(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

