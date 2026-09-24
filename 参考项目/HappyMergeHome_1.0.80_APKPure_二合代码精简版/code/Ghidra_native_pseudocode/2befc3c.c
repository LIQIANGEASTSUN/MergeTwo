
/* WARNING: Possible PIC construction at 0x0362c6fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0362c700) */
/* WARNING: Removing unreachable block (ram,0x0362c734) */
/* WARNING: Removing unreachable block (ram,0x0362c73c) */
/* WARNING: Removing unreachable block (ram,0x0362c740) */
/* WARNING: Removing unreachable block (ram,0x0362c71c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bffc3c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
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
  
  pcVar3 = (char *)(_UNK_02bfff08 + 0x2bffc54);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfff0c + 0x2bffc68));
    func_0x01438628(*(undefined4 *)(_UNK_02bfff10 + 0x2bffc74));
    func_0x01438628(*(undefined4 *)(_UNK_02bfff14 + 0x2bffc80));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d5a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d5a,0);
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
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    iVar1 = func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar2,0,0);
    return iVar1;
  }
  piVar4 = *(int **)(_UNK_02bfff18 + 0x2bffcdc);
  uVar6 = *(undefined4 *)(param_1 + 0xbc);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar6,0,0);
  if (iVar1 == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0xc0);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar6,0,0);
    if (iVar1 == 0) {
      uVar7 = *(uint *)(param_1 + 0xb0);
      if (uVar7 != 0xffffffff) {
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar7) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + uVar7 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(*piVar4 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024ef144(uVar6,0,0);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x44);
          uVar7 = *(uint *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar7) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar7 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02c28390(iVar1,0,0,0);
          iVar1 = *(int *)(param_1 + 0x44);
          uVar7 = *(uint *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar7) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar7 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02c285cc(iVar1,0,0);
        }
      }
      *(undefined4 *)(param_1 + 0xb8) = param_2;
      func_0x014385cc((undefined4 *)(param_1 + 0xb8),param_2);
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xbc);
      func_0x014385cc((undefined4 *)(param_1 + 0xc0));
      piVar4 = *(int **)(_UNK_02bfff1c + 0x2bffe90);
      uVar6 = *(undefined4 *)(param_1 + 0xc0);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar3 = (char *)(_UNK_02bfff20 + 0x2bffeb0);
      if (*pcVar3 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02bfff24 + 0x2bffec4));
        *pcVar3 = '\x01';
      }
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar4;
      }
      iVar5 = **(int **)(_UNK_02bfff28 + 0x2bffef4);
      if (*(int *)(iVar5 + 0x1c) == 0) {
        func_0x024f83cc(*(undefined4 *)(_UNK_0362c754 + 0x362c618),param_2,
                        *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1c));
        func_0x024f83cc(*(undefined4 *)(_UNK_0362c758 + 0x362c624));
        func_0x024f83cc(*(undefined4 *)(_UNK_0362c75c + 0x362c630));
        if (*(int *)(iVar5 + 0x1c) == 0) {
          func_0x024f83f8(iVar5);
        }
      }
      piVar4 = *(int **)(_UNK_0362c760 + 0x362c650);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x024f83d8();
        iVar1 = *piVar4;
      }
      func_0x024f8e70(uVar6,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x48),0);
      iVar1 = *(int *)(*(int *)(*piVar4 + 0x5c) + 0x48);
      if (iVar1 == 0) {
        func_0x024f83d4();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        puVar8 = *(undefined4 **)(_UNK_0362c764 + 0x362c6ac);
        iVar1 = *piVar4;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x024f83d8();
          iVar1 = *piVar4;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x48);
        if (iVar1 == 0) {
          func_0x024f83d4();
        }
        iVar1 = func_0x04cfd760(iVar1,0,*puVar8);
        if (iVar1 == 0) {
          func_0x024f83d4();
        }
        iVar1 = (*(code *)&UNK_05d3ad78)(iVar1,0);
        return iVar1;
      }
      return 0;
    }
  }
  return iVar1;
}

