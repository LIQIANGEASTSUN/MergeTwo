
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5d798(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01b5dae4 + 0x1b5d7b0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5dae8 + 0x1b5d7c4));
    func_0x01438628(*(undefined4 *)(_UNK_01b5daec + 0x1b5d7d0));
    func_0x01438628(*(undefined4 *)(_UNK_01b5daf0 + 0x1b5d7dc));
    func_0x01438628(*(undefined4 *)(_UNK_01b5daf4 + 0x1b5d7e8));
    func_0x01438628(*(undefined4 *)(_UNK_01b5daf8 + 0x1b5d7f4));
    func_0x01438628(*(undefined4 *)(_UNK_01b5dafc + 0x1b5d800));
    func_0x01438628(*(undefined4 *)(_UNK_01b5db00 + 0x1b5d80c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5db04 + 0x1b5d818));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x1bbb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1bbb,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = FUN_01b58804();
  if (((iVar1 != 0) && (iVar1 = FUN_01b5797c(param_1), iVar1 != 0)) &&
     (iVar1 = func_0x01b5db30(param_1), iVar1 != 0)) {
    if (*(int *)(**(int **)(_UNK_01b5db08 + 0x1b5d8a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar10 = *(undefined4 **)(_UNK_01b5db0c + 0x1b5d8c4);
    iVar6 = func_0x03b2c734(*puVar10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 0;
    iVar6 = func_0x02b76b98(iVar6,0,**(undefined4 **)(_UNK_01b5db10 + 0x1b5d8f0),0);
    if (iVar6 == 0) {
      piVar11 = *(int **)(_UNK_01b5db14 + 0x1b5d90c);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar8 = *(undefined4 **)(_UNK_01b5db18 + 0x1b5d928);
      iVar6 = func_0x014e9518(*puVar8);
      piVar7 = *(int **)(_UNK_01b5db1c + 0x1b5d93c);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar7;
      }
      uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x13c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x02b0fd48(iVar6,uVar5,0);
      piVar9 = *(int **)(_UNK_01b5db20 + 0x1b5d984);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x024ef144(uVar5,0,0);
      uVar5 = 1;
      if (iVar6 == 0) {
        func_0x01b86040(iVar1,0);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar8);
        iVar6 = *piVar7;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar7;
        }
        puVar8 = *(undefined4 **)(_UNK_01b5db24 + 0x1b5da04);
        piVar11 = *(int **)(_UNK_01b5db28 + 0x1b5da0c);
        uVar3 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x13c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = 0;
        uVar3 = func_0x02b0fd48(iVar1,uVar3,0);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024ef144(uVar3,0,0);
        if (iVar1 != 0) {
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x03b2c734(*puVar10);
          if (*(int *)(**(int **)(_UNK_01b5db2c + 0x1b5da88) + 0x74) == 0) {
            func_0x014387a4();
          }
          uStack_38 = func_0x02aed6d8(0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          func_0x02b768cc(iVar1,0,*puVar8);
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}

