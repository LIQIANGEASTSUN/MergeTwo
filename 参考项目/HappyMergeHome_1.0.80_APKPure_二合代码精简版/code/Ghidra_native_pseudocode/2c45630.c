
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c55630(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
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
  
  pcVar5 = (char *)(_UNK_02c558b0 + 0x2c55644);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c558b4 + 0x2c55658));
    func_0x01438628(*(undefined4 *)(_UNK_02c558b8 + 0x2c55664));
    func_0x01438628(*(undefined4 *)(_UNK_02c558bc + 0x2c55670));
    func_0x01438628(*(undefined4 *)(_UNK_02c558c0 + 0x2c5567c));
    func_0x01438628(*(undefined4 *)(_UNK_02c558c4 + 0x2c55688));
    func_0x01438628(*(undefined4 *)(_UNK_02c558c8 + 0x2c55694));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f38,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f38,0);
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
  piVar7 = *(int **)(_UNK_02c558cc + 0x2c556ec);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02c558d0 + 0x2c55708);
  iVar1 = func_0x014e9518(*puVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02be0a54(iVar1,0,0);
  if (0 < iVar1) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02be0b0c(iVar1,0,0,0);
    if (*(int *)(**(int **)(_UNK_02c558d4 + 0x2c55784) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c558d8 + 0x2c557a0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar1 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029a6fa8(iVar4,uVar6,0);
    if (iVar1 != 0) {
      iVar4 = *(int *)(param_1 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02c558dc + 0x2c557ec) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c558e0 + 0x2c5580c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_02c488f4(iVar2);
      uVar6 = *(undefined4 *)(iVar1 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x024f0e8c(iVar2,uVar6,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024ef348(iVar4,uVar6,0);
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      (*(code *)&UNK_05d3ec04)(iVar1,1,0);
      return;
    }
  }
  return;
}

