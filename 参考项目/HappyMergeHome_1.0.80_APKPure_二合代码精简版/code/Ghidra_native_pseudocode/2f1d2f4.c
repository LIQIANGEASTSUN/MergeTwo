
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f2d2f4(void)

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
  
  pcVar3 = (char *)(_UNK_02f2d590 + 0x2f2d308);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f2d594 + 0x2f2d31c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d598 + 0x2f2d328));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d59c + 0x2f2d334));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d5a0 + 0x2f2d340));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d5a4 + 0x2f2d34c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1334,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1334,0);
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
  piVar7 = *(int **)(_UNK_02f2d5a8 + 0x2f2d3a4);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02f2d5ac + 0x2f2d3c0);
  iVar1 = func_0x03b2c734(*puVar8);
  piVar6 = *(int **)(_UNK_02f2d5b0 + 0x2f2d3d4);
  iVar5 = *piVar6;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar6;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0xc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = 0;
  iVar1 = func_0x02b76b98(iVar1,0,uVar2,0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f1f154();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02f20224(iVar1);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02f2d5b4 + 0x2f2d464) + 0x74) == 0) {
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
      iVar5 = FUN_02f1f154();
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      FUN_02f207e8(iVar5,iVar1);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03b2c734(*puVar8);
      uVar2 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xc);
      if (*(int *)(**(int **)(_UNK_02f2d5b8 + 0x2f2d528) + 0x74) == 0) {
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

