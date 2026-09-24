
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a0151c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02a01804 + 0x2a01530);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a01808 + 0x2a01544));
    func_0x01438628(*(undefined4 *)(_UNK_02a0180c + 0x2a01550));
    func_0x01438628(*(undefined4 *)(_UNK_02a01810 + 0x2a0155c));
    func_0x01438628(*(undefined4 *)(_UNK_02a01814 + 0x2a01568));
    func_0x01438628(*(undefined4 *)(_UNK_02a01818 + 0x2a01574));
    func_0x01438628(*(undefined4 *)(_UNK_02a0181c + 0x2a01580));
    func_0x01438628(*(undefined4 *)(_UNK_02a01820 + 0x2a0158c));
    func_0x01438628(*(undefined4 *)(_UNK_02a01824 + 0x2a01598));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2509,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2509,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_028bc74c + 0x28bc66c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028bc750 + 0x28bc680),param_1,0);
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028bc754 + 0x28bc73c));
    return;
  }
  iVar1 = FUN_029fcfe8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar7 = *(int **)(_UNK_02a01828 + 0x2a01608);
  iVar1 = *(int *)(iVar1 + 0x40);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02a0182c + 0x2a01628);
  iVar4 = func_0x014e9518(*puVar8);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x20);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0xc);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(*puVar8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x20);
  if (iVar1 < iVar4) {
    iVar1 = FUN_029fcfe8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0x40);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    puVar8 = *(undefined4 **)(_UNK_02a01844 + 0x2a016c0);
  }
  else {
    piVar9 = *(int **)(_UNK_02a01830 + 0x2a016cc);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar9;
    }
    iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
    if (iVar4 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar9;
      }
      uVar6 = **(undefined4 **)(iVar1 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02a01834 + 0x2a01714));
      func_0x03a062d0(iVar4,uVar6,**(undefined4 **)(_UNK_02a01838 + 0x2a01734),0);
      piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 8);
      *piVar9 = iVar4;
      func_0x014385cc(piVar9,iVar4);
    }
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0f0c(iVar2,iVar4,**(undefined4 **)(_UNK_02a0183c + 0x2a0176c));
    iVar1 = FUN_029fcfe8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x40);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(*puVar8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x20);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e67d4(iVar1 - iVar4,*(undefined4 *)(iVar2 + 0xc));
    puVar8 = *(undefined4 **)(_UNK_02a01840 + 0x2a017f8);
    uVar6 = extraout_r1;
  }
  (*(code *)&SUB_04cfd760)(iVar2,uVar6,*puVar8);
  return;
}

