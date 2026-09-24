
/* WARNING: Possible PIC construction at 0x02c26c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c26c30) */
/* WARNING: Removing unreachable block (ram,0x02c26c7c) */
/* WARNING: Removing unreachable block (ram,0x02c26c80) */
/* WARNING: Removing unreachable block (ram,0x024ef208) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c26844(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02c26ccc + 0x2c2685c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c26cd0 + 0x2c26870));
    func_0x01438628(*(undefined4 *)(_UNK_02c26cd4 + 0x2c2687c));
    func_0x01438628(*(undefined4 *)(_UNK_02c26cd8 + 0x2c26888));
    func_0x01438628(*(undefined4 *)(_UNK_02c26cdc + 0x2c26894));
    func_0x01438628(*(undefined4 *)(_UNK_02c26ce0 + 0x2c268a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c26ce4 + 0x2c268ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c26ce8 + 0x2c268b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c26cec + 0x2c268c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c26cf0 + 0x2c268d0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ef9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ef9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
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
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c26cf4 + 0x2c2692c));
  func_0x02c471d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 8) = param_1;
  func_0x014385cc((int *)(iVar1 + 8),param_1);
  piVar8 = *(int **)(_UNK_02c26cf8 + 0x2c26964);
  iVar4 = *(int *)(param_1 + 0x11c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02c26cfc + 0x2c26984);
  iVar2 = func_0x014e9518(*puVar9);
  uVar7 = FUN_02c19900(param_1);
  uVar3 = FUN_02c0c0ac(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = FUN_02bad204(iVar2,uVar7,uVar3,0);
  if (iVar4 == iVar2) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(*puVar9);
    uVar7 = FUN_02c19900(param_1);
    uVar3 = FUN_02c0c0ac(param_1);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_02bad204(iVar4,uVar7,uVar3,0);
    piVar6 = (int *)(iVar1 + 0xc);
    *piVar6 = iVar4;
    func_0x014385cc(piVar6,iVar4);
    iVar1 = *piVar6;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) == 6) {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar9);
      uVar7 = FUN_02c19900(param_1);
      uVar3 = FUN_02c0c0ac(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02be2d0c(iVar1,uVar7,uVar3,0);
      if (0 < iVar1) {
        iVar1 = *(int *)(param_1 + 0xfc);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(*puVar9);
        uVar7 = FUN_02c19900(param_1);
        uVar3 = FUN_02c0c0ac(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar7 = FUN_02be8510(iVar4,uVar7,uVar3,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f0350(iVar1,uVar7,0);
        iVar1 = *(int *)(param_1 + 0xfc);
        iVar4 = *(int *)(param_1 + 0x100);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_40 = 0;
        func_0x024ef130(&uStack_34,0,0,*(float *)(iVar1 + 0x94) * _UNK_02c26cc4 * _UNK_02c26cc8);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uStack_3c = 0;
        uStack_40 = uStack_28;
        func_0x024f07e8(iVar4,uStack_34,uStack_30,uStack_2c);
        return;
      }
      uVar7 = **(undefined4 **)(_UNK_02c26d04 + 0x2c26c28);
    }
    else {
      iVar1 = *(int *)(param_1 + 0xf8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar1,0,0);
      uVar7 = **(undefined4 **)(_UNK_02c26d00 + 0x2c26c04);
    }
    (*(code *)&UNK_05d3fb3c)(param_1,uVar7,0);
    return;
  }
  return;
}

