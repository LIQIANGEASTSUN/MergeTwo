
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02be1608(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
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
  undefined4 uStack_18;
  
  pcVar7 = (char *)(_UNK_02be17bc + 0x2be1620);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be17c0 + 0x2be1634));
    func_0x01438628(*(undefined4 *)(_UNK_02be17c4 + 0x2be1640));
    func_0x01438628(*(undefined4 *)(_UNK_02be17c8 + 0x2be164c));
    func_0x01438628(*(undefined4 *)(_UNK_02be17cc + 0x2be1658));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x419,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x419,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    uVar1 = func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return uVar1;
  }
  iVar2 = FUN_02baef1c(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x14);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x046c26fc(iVar2,param_2,**(undefined4 **)(_UNK_02be17d0 + 0x2be16e0));
  if (iVar2 != 0) {
    iVar2 = FUN_02baef1c(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x14);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x03b70e64(iVar2,param_2,**(undefined4 **)(_UNK_02be17d4 + 0x2be1728));
  }
  iVar2 = FUN_02baef1c(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024f0f34(iVar2,param_2,**(undefined4 **)(_UNK_02be17d8 + 0x2be1768));
  if (iVar2 != 0) {
    iVar2 = FUN_02baef1c(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar5 = **(int **)(_UNK_02be17dc + 0x2be17b0);
    pcVar7 = (char *)(_UNK_03b75f98 + 0x3b75e88);
    if (*pcVar7 == '\0') {
      func_0x024f83cc(*(undefined4 *)(_UNK_03b75f9c + 0x3b75e9c));
      func_0x024f83cc(*(undefined4 *)(_UNK_03b75fa0 + 0x3b75ea8));
      func_0x024f83cc(*(undefined4 *)(_UNK_03b75fa4 + 0x3b75eb4));
      *pcVar7 = '\x01';
    }
    iVar8 = **(int **)(_UNK_03b75fa8 + 0x3b75ec8);
    iVar3 = *(int *)(iVar8 + 0x1c);
    if (iVar3 == 0) {
      func_0x024f83f8(iVar8);
      iVar3 = *(int *)(iVar8 + 0x1c);
    }
    iVar3 = *(int *)(iVar3 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x024f83fc();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar3 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x024f83fc();
    }
    uVar6 = **(undefined4 **)(iVar3 + 0x5c);
    if (*(int *)(**(int **)(_UNK_03b75fac + 0x3b75f28) + 0x74) == 0) {
      func_0x024f83d8(**(int **)(_UNK_03b75fac + 0x3b75f28));
    }
    func_0x02679550(**(undefined4 **)(_UNK_03b75fb0 + 0x3b75f58),uVar6,0);
    func_0x03b75a80(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x24));
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    uStack_18 = *(undefined4 *)
                 (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 
                                                  0x10) + 0x60) + 0x3c) + 0x10) + 0x60) + 0x68) +
                                   0x10) + 0x60) + 0xac);
    uVar1 = func_0x037bb330(*(undefined4 *)(iVar2 + 8),param_2,0,*(undefined4 *)(iVar2 + 0xc));
    if (-1 < (int)uVar1) {
      func_0x04cd4428(iVar2,uVar1);
    }
    return ~uVar1 >> 0x1f;
  }
  return 0;
}

