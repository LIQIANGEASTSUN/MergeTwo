
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018101ac(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
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
  
  pcVar2 = (char *)(_UNK_01810448 + 0x18101c0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0181044c + 0x18101d4));
    func_0x01438628(*(undefined4 *)(_UNK_01810450 + 0x18101e0));
    func_0x01438628(*(undefined4 *)(_UNK_01810454 + 0x18101ec));
    func_0x01438628(*(undefined4 *)(_UNK_01810458 + 0x18101f8));
    func_0x01438628(*(undefined4 *)(_UNK_0181045c + 0x1810204));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x13bc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x13bc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = (undefined4)uStack_48;
    uStack_2c = uStack_48._4_4_;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar5,uVar4,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar7 = *(int **)(_UNK_01810460 + 0x181025c);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_01810464 + 0x1810278);
  iVar1 = func_0x014e96a8(*puVar8);
  piVar6 = *(int **)(_UNK_01810468 + 0x181028c);
  iVar5 = *piVar6;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar6;
  }
  uVar3 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = 0;
  iVar1 = func_0x02b76b98(iVar1,0,uVar3,0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_017faff8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_017fcaac(iVar1);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_0181046c + 0x181031c) + 0x74) == 0) {
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
      iVar5 = FUN_017faff8();
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      FUN_017fd2f4(iVar5,iVar1);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e96a8(*puVar8);
      uVar3 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x10);
      if (*(int *)(**(int **)(_UNK_01810470 + 0x18103e0) + 0x74) == 0) {
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
      func_0x02b768cc(iVar1,0,uVar3);
      uVar4 = 1;
    }
  }
  return uVar4;
}

