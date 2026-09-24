
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02fe0270(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_02fe050c + 0x2fe0284);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fe0510 + 0x2fe0298));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0514 + 0x2fe02a4));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0518 + 0x2fe02b0));
    func_0x01438628(*(undefined4 *)(_UNK_02fe051c + 0x2fe02bc));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0520 + 0x2fe02c8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x157d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x157d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar2 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = (undefined4)uStack_48;
    uStack_2c = uStack_48._4_4_;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  piVar7 = *(int **)(_UNK_02fe0524 + 0x2fe0320);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02fe0528 + 0x2fe033c);
  iVar1 = func_0x03b2c734(*puVar8);
  piVar6 = *(int **)(_UNK_02fe052c + 0x2fe0350);
  iVar5 = *piVar6;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar6;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = 0;
  iVar1 = func_0x02b76b98(iVar1,0,uVar2,0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02fc8d20();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02fca7d4(iVar1);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02fe0530 + 0x2fe03e0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_48._0_4_ = 0;
      uStack_48._4_4_ = 0;
      uStack_40 = 0;
      func_0x020257a4(iVar5,0x221,0,0);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = FUN_02fc8d20();
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      FUN_02fcae30(iVar5,iVar1);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03b2c734(*puVar8);
      uVar2 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x10);
      if (*(int *)(**(int **)(_UNK_02fe0534 + 0x2fe04a4) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar9 = func_0x02aed6d8(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_48 = uVar9;
      func_0x02b768cc(iVar1,0,uVar2);
      uVar4 = 1;
    }
  }
  return uVar4;
}

