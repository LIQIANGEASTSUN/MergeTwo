
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0164c46c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
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
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_0164c664 + 0x164c484);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164c668 + 0x164c498));
    func_0x01438628(*(undefined4 *)(_UNK_0164c66c + 0x164c4a4));
    func_0x01438628(*(undefined4 *)(_UNK_0164c670 + 0x164c4b0));
    func_0x01438628(*(undefined4 *)(_UNK_0164c674 + 0x164c4bc));
    func_0x01438628(*(undefined4 *)(_UNK_0164c678 + 0x164c4c8));
    func_0x01438628(*(undefined4 *)(_UNK_0164c67c + 0x164c4d4));
    func_0x01438628(*(undefined4 *)(_UNK_0164c680 + 0x164c4e0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1677,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1677,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a1c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0164c684 + 0x164c53c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0163b7ec();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = FUN_0164baf4(iVar1,param_2);
  if (*(int *)(**(int **)(_UNK_0164c688 + 0x164c57c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0164c68c + 0x164c598));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029b1058(iVar1,uVar7,0);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar5 = 0;
    piVar8 = *(int **)(_UNK_0164c690 + 0x164c5e4);
    puVar9 = *(undefined4 **)(_UNK_0164c694 + 0x164c5ec);
    puVar10 = *(undefined4 **)(_UNK_0164c698 + 0x164c5f4);
    do {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(*puVar9);
      iVar3 = func_0x0152983c(iVar1,iVar5,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02be1608(iVar2,uVar7,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar1 + 0xc));
  }
  return;
}

