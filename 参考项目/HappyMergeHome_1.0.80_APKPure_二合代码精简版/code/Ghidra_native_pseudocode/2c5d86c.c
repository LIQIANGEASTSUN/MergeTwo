
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c6d86c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int iVar6;
  undefined4 unaff_r5;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar7 = (char *)(_UNK_02c6d98c + 0x2c6d880);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c6d990 + 0x2c6d894));
    func_0x01438628(*(undefined4 *)(_UNK_02c6d994 + 0x2c6d8a0));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x603b,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x603b,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar5);
    return;
  }
  pcVar7 = (char *)(_UNK_02c6d998 + 0x2c6d8f8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c6d99c + 0x2c6d90c));
    *pcVar7 = '\x01';
  }
  puVar4 = *(undefined4 **)(**(int **)(_UNK_02c6d9a0 + 0x2c6d920) + 0x5c);
  func_0x02c6d9ac(param_1,*puVar4,puVar4[1]);
  if (*(int *)(**(int **)(_UNK_02c6d9a4 + 0x2c6d93c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c6d9a8 + 0x2c6d958));
  uVar8 = FUN_02c6b6f0(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_02be3270 + 0x2be3184);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be3274 + 0x2be3198),uVar8,0);
    *pcVar7 = '\x01';
  }
  iVar9 = 0;
  iVar6 = func_0x02953fd4(0x5d1a,0);
  if (iVar6 != 0) {
    iVar6 = func_0x029540a4(0x5d1a,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,uVar8,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar3,0);
    func_0x01523a2c(&uStack_38,uVar8,0);
    iVar9 = *(int *)(iVar6 + 8);
    uVar8 = *(undefined4 *)(iVar6 + 0xc);
    iVar3 = *(int *)(iVar6 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar3 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar9,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  while( true ) {
    iVar6 = FUN_02bad050(iVar3,uVar8);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar6 + 0xc) <= iVar9) break;
    iVar1 = FUN_02bada20(iVar3,iVar9,uVar8);
    iVar2 = FUN_02be2d0c(iVar3,iVar9,uVar8);
    iVar6 = iVar1;
    if (iVar1 < 1) {
      iVar6 = iVar2 + -1;
    }
    if (iVar6 < 0 == (iVar1 < 1 && SBORROW4(iVar2,1))) {
      FUN_02bdfffc(iVar3,iVar9,uVar8);
    }
    iVar9 = iVar9 + 1;
  }
  return;
}

