
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d3ae34(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
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
  
  pcVar7 = (char *)(_UNK_01d3af60 + 0x1d3ae48);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3af64 + 0x1d3ae5c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3af68 + 0x1d3ae68));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7cc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7cc,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar9,uVar10,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f14b8(0,*(undefined4 *)(iVar1 + 0xc),0);
  iVar9 = *(int *)(param_1 + 0x44);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar8 = *(int *)(iVar9 + 0xc);
  iVar2 = FUN_01d3a9c0(param_1);
  iVar6 = *(int *)(param_1 + 0x44);
  iVar9 = 0;
  if (iVar1 < iVar8) {
    iVar9 = iVar1;
  }
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x0152983c(iVar6,iVar9,**(undefined4 **)(_UNK_01d3af6c + 0x1d3af24));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_0269f764 + 0x269f6dc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0269f768 + 0x269f6f0),iVar1,0);
    func_0x01438628(*(undefined4 *)(_UNK_0269f76c + 0x269f6fc));
    *pcVar7 = '\x01';
  }
  if (*(int *)(iVar2 + 0x34) == iVar1) {
    return;
  }
  piVar3 = *(int **)(_UNK_0269f770 + 0x269f71c);
  *(int *)(iVar2 + 0x34) = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0269f774 + 0x269f73c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(uint *)(iVar1 + 0x60);
  *(uint *)(iVar1 + 0x60) = uVar4 + 1;
  *(uint *)(iVar1 + 100) = *(int *)(iVar1 + 100) + (uint)(0xfffffffe < uVar4);
  return;
}

