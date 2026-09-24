
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0171dc34(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar4 = (char *)(_UNK_0171ddf4 + 0x171dc4c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0171ddf8 + 0x171dc60));
    func_0x01438628(*(undefined4 *)(_UNK_0171ddfc + 0x171dc6c));
    func_0x01438628(*(undefined4 *)(_UNK_0171de00 + 0x171dc78));
    func_0x01438628(*(undefined4 *)(_UNK_0171de04 + 0x171dc84));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8b8e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8b8e,0);
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
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar3,0,0);
    uVar2 = func_0x024f56e0(&uStack_38,0,0);
    return uVar2;
  }
  piVar8 = *(int **)(_UNK_0171de08 + 0x171dce0);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar5 = *(undefined4 **)(_UNK_0171de0c + 0x171dcfc);
  iVar1 = func_0x014e9518(*puVar5);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = 0;
    puVar9 = *(undefined4 **)(_UNK_0171de10 + 0x171dd2c);
    do {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(*puVar5);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x28);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      uVar2 = (uint)(iVar1 < iVar6);
      if (iVar6 <= iVar1) {
        return uVar2;
      }
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(*puVar5);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x28);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x0152983c(iVar6,iVar1,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = iVar1 + 1;
    } while (*(int *)(iVar6 + 0xc) != param_2);
  }
  return uVar2;
}

