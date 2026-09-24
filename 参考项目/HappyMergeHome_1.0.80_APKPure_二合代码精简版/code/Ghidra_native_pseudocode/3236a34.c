
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_03246a34(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
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
  
  pcVar4 = (char *)(_UNK_03246bf4 + 0x3246a4c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03246bf8 + 0x3246a60));
    func_0x01438628(*(undefined4 *)(_UNK_03246bfc + 0x3246a6c));
    func_0x01438628(*(undefined4 *)(_UNK_03246c00 + 0x3246a78));
    func_0x01438628(*(undefined4 *)(_UNK_03246c04 + 0x3246a84));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x7ff0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x7ff0,0);
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
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar3,0,0);
    uVar1 = func_0x024f56e0(&uStack_38,0,0);
    return uVar1;
  }
  piVar8 = *(int **)(_UNK_03246c08 + 0x3246ae0);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar5 = *(undefined4 **)(_UNK_03246c0c + 0x3246afc);
  iVar2 = func_0x04e4a028(*puVar5);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0x34) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = 0;
    puVar9 = *(undefined4 **)(_UNK_03246c10 + 0x3246b2c);
    do {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(*puVar5);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x34);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      uVar1 = (uint)(iVar2 < iVar6);
      if (iVar6 <= iVar2) {
        return uVar1;
      }
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(*puVar5);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x34);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x04cfd760(iVar6,iVar2,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = iVar2 + 1;
    } while (*(int *)(iVar6 + 0xc) != param_2);
  }
  return uVar1;
}

