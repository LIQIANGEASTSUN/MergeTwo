
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019f1378(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_019f1510 + 0x19f138c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019f1514 + 0x19f13a0));
    func_0x01438628(*(undefined4 *)(_UNK_019f1518 + 0x19f13ac));
    func_0x01438628(*(undefined4 *)(_UNK_019f151c + 0x19f13b8));
    func_0x01438628(*(undefined4 *)(_UNK_019f1520 + 0x19f13c4));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x1a17,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1a17,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar7,uVar5,&uStack_30,uVar3,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = func_0x019f1534(param_1);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_019f1524 + 0x19f1430) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019f1528 + 0x19f144c));
    piVar6 = *(int **)(_UNK_019f152c + 0x19f1460);
    iVar7 = *piVar6;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar6;
    }
    iVar8 = **(int **)(_UNK_019f1530 + 0x19f1480);
    iVar2 = *(int *)(iVar8 + 0x1c);
    uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xb10);
    if (iVar2 == 0) {
      func_0x014909d8(iVar8);
      iVar2 = *(int *)(iVar8 + 0x1c);
    }
    iVar7 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x0149097c();
    }
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x0149097c();
    }
    uVar3 = **(undefined4 **)(iVar7 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b0c90c(iVar1,uVar5,uVar3,0);
    uVar5 = 1;
  }
  return uVar5;
}

