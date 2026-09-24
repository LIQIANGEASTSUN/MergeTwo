
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c788d4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar7 = (char *)(_UNK_02c7896c + 0x2c788e8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c78970 + 0x2c788fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c78974 + 0x2c78908));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c78978 + 0x2c7891c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c7897c + 0x2c78938));
  uVar5 = FUN_02c6b6f0(param_1);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_02be2d04 + 0x2be2c18);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be2d08 + 0x2be2c2c),uVar5,0);
    *pcVar7 = '\x01';
  }
  iVar8 = 0;
  iVar1 = func_0x02953fd4(0x5d18,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d18,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,uVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar4,0);
    func_0x01523a2c(&uStack_38,uVar5,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar4 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar4 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar8,uVar5,&uStack_38,uVar6,0,0);
    return;
  }
  while( true ) {
    iVar1 = FUN_02bad050(iVar4,uVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar8) break;
    iVar2 = FUN_02bada20(iVar4,iVar8,uVar5);
    iVar3 = FUN_02be2d0c(iVar4,iVar8,uVar5);
    iVar1 = iVar2;
    if (iVar2 < 1) {
      iVar1 = iVar3 + -1;
    }
    if (iVar1 < 0 == (iVar2 < 1 && SBORROW4(iVar3,1))) {
      FUN_02be2ef0(iVar4,iVar8,uVar5);
    }
    iVar8 = iVar8 + 1;
  }
  return;
}

