
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_030e3334(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_030e3540 + 0x30e3348);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030e3544 + 0x30e335c));
    func_0x01438628(*(undefined4 *)(_UNK_030e3548 + 0x30e3368));
    func_0x01438628(*(undefined4 *)(_UNK_030e354c + 0x30e3374));
    func_0x01438628(*(undefined4 *)(_UNK_030e3550 + 0x30e3380));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x155a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x155a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar2 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
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
  piVar7 = *(int **)(_UNK_030e3554 + 0x30e33d8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_030e3558 + 0x30e33f4);
  iVar1 = func_0x03b2c734(*puVar8);
  piVar6 = *(int **)(_UNK_030e355c + 0x30e3408);
  iVar5 = *piVar6;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar6;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = 0;
  iVar1 = func_0x02b76b98(iVar1,0,uVar2,0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_030ccbc4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_030cf2ac(iVar1);
    if (iVar1 != 0) {
      func_0x030ff28c(0);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03b2c734(*puVar8);
      iVar5 = *piVar6;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x014387a4();
        iVar5 = *piVar6;
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x14);
      if (*(int *)(**(int **)(_UNK_030e3560 + 0x30e34d4) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_030e3560 + 0x30e34d4));
      }
      uStack_38 = func_0x02aed6d8(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      func_0x02b768cc(iVar1,0,uVar2);
      uVar4 = 1;
    }
  }
  return uVar4;
}

