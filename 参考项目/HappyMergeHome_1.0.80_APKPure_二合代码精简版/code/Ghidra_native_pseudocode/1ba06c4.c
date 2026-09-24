
/* WARNING: Possible PIC construction at 0x01bb0910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01bb0914) */
/* WARNING: Removing unreachable block (ram,0x01bb0918) */
/* WARNING: Removing unreachable block (ram,0x01bb091c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01bb06c4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01bb09a0 + 0x1bb06dc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bb09a4 + 0x1bb06f0));
    func_0x01438628(*(undefined4 *)(_UNK_01bb09a8 + 0x1bb06fc));
    func_0x01438628(*(undefined4 *)(_UNK_01bb09ac + 0x1bb0708));
    func_0x01438628(*(undefined4 *)(_UNK_01bb09b0 + 0x1bb0714));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e56,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e56,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x024f56f0(&uStack_30,0,0);
    return uVar5;
  }
  piVar6 = *(int **)(_UNK_01bb09b4 + 0x1bb0770);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_01bb09b8 + 0x1bb078c);
  iVar1 = func_0x014e9518(*puVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x020a9a90(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x14) != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x020a9a90(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      puVar7 = *(undefined4 **)(_UNK_01bb09bc + 0x1bb0830);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x020a9a90(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x020a9a90(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = *puVar7;
      }
      else {
        iVar1 = FUN_01ba9704(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x020a9a90(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = *puVar7;
      }
      uVar5 = (*(code *)&SUB_04cd26d0)(iVar1,0,uVar5);
      return uVar5;
    }
  }
  return 100;
}

