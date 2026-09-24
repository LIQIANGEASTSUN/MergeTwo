
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01d3f4f4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01d3f6a0 + 0x1d3f50c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3f6a4 + 0x1d3f520));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f6a8 + 0x1d3f52c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f6ac + 0x1d3f538));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f6b0 + 0x1d3f544));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x1af5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1af5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x024f56e0(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_01d39bc4(param_1,0);
  if (iVar1 != 0) {
    piVar8 = *(int **)(_UNK_01d3f6b4 + 0x1d3f5b8);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar6 = *(undefined4 **)(_UNK_01d3f6b8 + 0x1d3f5d4);
    iVar1 = func_0x03b2c734(*puVar6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = 0;
    puVar7 = *(undefined4 **)(_UNK_01d3f6bc + 0x1d3f604);
    iVar1 = func_0x02b76b98(iVar1,0,*puVar7,0);
    if (iVar1 == 0) {
      FUN_01d3a4d0(param_1);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03b2c734(*puVar6);
      if (*(int *)(**(int **)(_UNK_01d3f6c0 + 0x1d3f644) + 0x74) == 0) {
        func_0x014387a4();
      }
      uStack_38 = func_0x02aed6d8(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      func_0x02b768cc(iVar1,0,*puVar7);
      uVar4 = 1;
    }
  }
  return uVar4;
}

