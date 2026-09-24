
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c71b1c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
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
  
  pcVar5 = (char *)(_UNK_02c71d88 + 0x2c71b30);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c71d8c + 0x2c71b44));
    func_0x01438628(*(undefined4 *)(_UNK_02c71d90 + 0x2c71b50));
    func_0x01438628(*(undefined4 *)(_UNK_02c71d94 + 0x2c71b5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c71d98 + 0x2c71b68));
    func_0x01438628(*(undefined4 *)(_UNK_02c71d9c + 0x2c71b74));
    func_0x01438628(*(undefined4 *)(_UNK_02c71da0 + 0x2c71b80));
    func_0x01438628(*(undefined4 *)(_UNK_02c71da4 + 0x2c71b8c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6026,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6026,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c71da8 + 0x2c71be4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c71dac + 0x2c71c00));
  piVar7 = *(int **)(_UNK_02c71db0 + 0x2c71c14);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar7;
  }
  iVar8 = **(int **)(_UNK_02c71db4 + 0x2c71c34);
  iVar2 = *(int *)(iVar8 + 0x1c);
  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x1d8);
  if (iVar2 == 0) {
    func_0x014909d8(iVar8);
    iVar2 = *(int *)(iVar8 + 0x1c);
  }
  iVar4 = *(int *)(iVar2 + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x0149097c();
  }
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x0149097c();
  }
  uVar3 = **(undefined4 **)(iVar4 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar7 = (int *)func_0x02b0c90c(iVar1,uVar6,uVar3,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c71db8 + 0x2c71ccc));
  func_0x0152e3ec(iVar1,param_1,**(undefined4 **)(_UNK_02c71dbc + 0x2c71ce8),0);
  iVar4 = *(int *)(param_1 + 0x8c);
  if (piVar7 == (int *)0x0) {
    func_0x014388e4();
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(_UNK_02c71dc0 + 0x2c71d08);
    iVar2 = *piVar9;
    if (((uint)*(byte *)(*piVar7 + 0xb8) < (uint)*(byte *)(iVar2 + 0xb8)) ||
       (*(int *)(*(int *)(*piVar7 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
      func_0x014388e4();
      iVar2 = *piVar9;
    }
    piVar9 = (int *)0x0;
    if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar7 + 0xb8)) &&
       (piVar9 = piVar7,
       *(int *)(*(int *)(*piVar7 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
      piVar9 = (int *)0x0;
    }
  }
  pcVar5 = (char *)(_UNK_02c87974 + 0x2c87844);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c87978 + 0x2c87858),iVar1,iVar4,0);
    func_0x01438628(*(undefined4 *)(_UNK_02c8797c + 0x2c87864));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x602f,0);
  if (iVar2 == 0) {
    piVar9[0xc] = iVar1;
    func_0x014385cc(piVar9 + 0xc,iVar1);
    iVar1 = piVar9[0xd];
    if (*(int *)(**(int **)(_UNK_02c87980 + 0x2c878dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c87984 + 0x2c878fc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_02c488f4(iVar2,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar4 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x024f0e8c(iVar2,uVar6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    (*(code *)&UNK_05e61cf0)(iVar1,uVar6,0);
    return;
  }
  iVar2 = func_0x029540a4(0x602f,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_20 = 0;
  func_0x028691b4(iVar2,piVar9,iVar1,iVar4);
  return;
}

