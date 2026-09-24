
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bb119c(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar5 = (char *)(_UNK_01bb1360 + 0x1bb11b0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bb1364 + 0x1bb11c4));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1368 + 0x1bb11d0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa85c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa85c,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x015fcde8(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar1 == 0) {
    iVar1 = FUN_01ba9704(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eef64(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(param_1 + 0x10),0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_01ba9704(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0268be6c(iVar1,0);
    iVar1 = FUN_01ba9704(param_1);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026be500(iVar1,uVar7,0);
    iVar1 = FUN_01ba9704(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026be808(iVar1,1,0);
    if (*(int *)(**(int **)(_UNK_01bb136c + 0x1bb12e4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_01bb1370 + 0x1bb1300));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x020e9710(iVar1,0);
    if (iVar1 != 0) {
      iVar6 = FUN_01ba9704(param_1);
      iVar1 = *(int *)(iVar1 + 0x1a8);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      pcVar5 = (char *)(_UNK_026be674 + 0x26be5ec);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_026be678 + 0x26be600),iVar1,0);
        func_0x01438628(*(undefined4 *)(_UNK_026be67c + 0x26be60c));
        *pcVar5 = '\x01';
      }
      if (*(int *)(iVar6 + 0xc) == iVar1) {
        return;
      }
      piVar2 = *(int **)(_UNK_026be680 + 0x26be62c);
      *(int *)(iVar6 + 0xc) = iVar1;
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_026be684 + 0x26be64c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(uint *)(iVar1 + 0x60);
      *(uint *)(iVar1 + 0x60) = uVar3 + 1;
      *(uint *)(iVar1 + 100) = *(int *)(iVar1 + 100) + (uint)(0xfffffffe < uVar3);
      return;
    }
  }
  return;
}

