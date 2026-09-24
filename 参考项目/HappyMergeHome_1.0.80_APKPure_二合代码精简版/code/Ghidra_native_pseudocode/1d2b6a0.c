
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01d3b6a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01d3b8ac + 0x1d3b6b4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3b8b0 + 0x1d3b6c8));
    func_0x01438628(*(undefined4 *)(_UNK_01d3b8b4 + 0x1d3b6d4));
    func_0x01438628(*(undefined4 *)(_UNK_01d3b8b8 + 0x1d3b6e0));
    func_0x01438628(*(undefined4 *)(_UNK_01d3b8bc + 0x1d3b6ec));
    func_0x01438628(*(undefined4 *)(_UNK_01d3b8c0 + 0x1d3b6f8));
    func_0x01438628(*(undefined4 *)(_UNK_01d3b8c4 + 0x1d3b704));
    func_0x01438628(*(undefined4 *)(_UNK_01d3b8c8 + 0x1d3b710));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2e4a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2e4a,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x024f56f0(&uStack_30,0,0);
    return uVar6;
  }
  if (*(int *)(param_1 + 0x3c) == -1) {
    if (*(int *)(**(int **)(_UNK_01d3b8cc + 0x1d3b77c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01d3b8d0 + 0x1d3b798));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01d3b8d4 + 0x1d3b7b8));
    func_0x03a062d0(uVar6,param_1,**(undefined4 **)(_UNK_01d3b8d8 + 0x1d3b7d8),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0618(iVar1,uVar6,**(undefined4 **)(_UNK_01d3b8dc + 0x1d3b7fc));
    if (iVar1 != 0) {
      iVar4 = FUN_01d3a9c0(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x24);
      iVar5 = 0;
      puVar8 = *(undefined4 **)(_UNK_01d3b8e0 + 0x1d3b840);
      while( true ) {
        iVar7 = *(int *)(iVar1 + 0x14);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar5) break;
        iVar7 = *(int *)(iVar1 + 0x14);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x024f0530(iVar7,iVar5,*puVar8);
        if (iVar7 < iVar4 + 1) {
          iVar7 = *(int *)(iVar1 + 0x10);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uVar6 = func_0x024f0530(iVar7,iVar5,*puVar8);
          *(undefined4 *)(param_1 + 0x3c) = uVar6;
        }
        iVar5 = iVar5 + 1;
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x3c);
}

