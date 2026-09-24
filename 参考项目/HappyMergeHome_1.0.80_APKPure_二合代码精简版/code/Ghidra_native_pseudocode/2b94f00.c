
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba4f00(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
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
  
  pcVar5 = (char *)(_UNK_02ba5178 + 0x2ba4f14);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba517c + 0x2ba4f28));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5180 + 0x2ba4f34));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5184 + 0x2ba4f40));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5188 + 0x2ba4f4c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba518c + 0x2ba4f58));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5190 + 0x2ba4f64));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfe6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfe6,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02ba5194 + 0x2ba4fbc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba5198 + 0x2ba4fd8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029ca78c(iVar1,0);
  if (iVar1 == 2) {
    piVar6 = *(int **)(_UNK_02ba51a0 + 0x2ba500c);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar8 = *(undefined4 **)(_UNK_02ba51a4 + 0x2ba5028);
    iVar1 = func_0x014e9518(*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02d0fdb0(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    iVar1 = **(int **)(**(int **)(_UNK_02ba51a8 + 0x2ba5064) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x58);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0ef8(iVar1,0);
    if (iVar4 < 1) {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(*puVar8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x02d0fdb0(iVar4,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      bVar2 = iVar4 == 0;
      goto SUB_014e94e8;
    }
  }
  else {
    iVar1 = **(int **)(**(int **)(_UNK_02ba519c + 0x2ba50bc) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x58);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0ef8(iVar1,0);
  }
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  bVar2 = false;
SUB_014e94e8:
  (*(code *)&UNK_05d3ec04)(iVar1,bVar2,0);
  return;
}

