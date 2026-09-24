
/* WARNING: Possible PIC construction at 0x0362c6fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0362c700) */
/* WARNING: Removing unreachable block (ram,0x0362c734) */
/* WARNING: Removing unreachable block (ram,0x0362c73c) */
/* WARNING: Removing unreachable block (ram,0x0362c740) */
/* WARNING: Removing unreachable block (ram,0x0362c71c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bff960(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02bffc08 + 0x2bff978);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bffc0c + 0x2bff98c));
    func_0x01438628(*(undefined4 *)(_UNK_02bffc10 + 0x2bff998));
    func_0x01438628(*(undefined4 *)(_UNK_02bffc14 + 0x2bff9a4));
    func_0x01438628(*(undefined4 *)(_UNK_02bffc18 + 0x2bff9b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bffc1c + 0x2bff9bc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d59,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d59,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    uVar7 = func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return uVar7;
  }
  *(int *)(param_1 + 0xb8) = (int)param_2;
  func_0x014385cc((int *)(param_1 + 0xb8),param_2);
  piVar8 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(**(int **)(_UNK_02bffc20 + 0x2bffa34) + 0xb8);
    if ((uVar2 <= *(byte *)(*param_2 + 0xb8)) &&
       (piVar8 = param_2,
       *(int *)(*(int *)(*param_2 + 100) + uVar2 * 4 + -4) != **(int **)(_UNK_02bffc20 + 0x2bffa34))
       ) {
      piVar8 = (int *)0x0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  uVar7 = *(undefined4 *)(param_1 + 0xc0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x014e94d8(iVar1,0);
  if (*(int *)(**(int **)(_UNK_02bffc24 + 0x2bffa90) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar7,uVar3,0);
  if (iVar1 == 0) {
    piVar9 = *(int **)(_UNK_02bffc2c + 0x2bffb8c);
    uVar7 = *(undefined4 *)(param_1 + 0xc0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar6 = (char *)(_UNK_02bffc30 + 0x2bffbac);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02bffc34 + 0x2bffbc0));
      *pcVar6 = '\x01';
    }
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar9;
    }
    iVar5 = **(int **)(_UNK_02bffc38 + 0x2bffbf0);
    if (*(int *)(iVar5 + 0x1c) == 0) {
      func_0x024f83cc(*(undefined4 *)(_UNK_0362c754 + 0x362c618),piVar8,
                      *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x20));
      func_0x024f83cc(*(undefined4 *)(_UNK_0362c758 + 0x362c624));
      func_0x024f83cc(*(undefined4 *)(_UNK_0362c75c + 0x362c630));
      if (*(int *)(iVar5 + 0x1c) == 0) {
        func_0x024f83f8(iVar5);
      }
    }
    piVar8 = *(int **)(_UNK_0362c760 + 0x362c650);
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x024f83d8();
      iVar1 = *piVar8;
    }
    func_0x024f8e70(uVar7,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x48),0);
    iVar1 = *(int *)(*(int *)(*piVar8 + 0x5c) + 0x48);
    if (iVar1 == 0) {
      func_0x024f83d4();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      puVar10 = *(undefined4 **)(_UNK_0362c764 + 0x362c6ac);
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x024f83d8();
        iVar1 = *piVar8;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x48);
      if (iVar1 == 0) {
        func_0x024f83d4();
      }
      iVar1 = func_0x04cfd760(iVar1,0,*puVar10);
      if (iVar1 == 0) {
        func_0x024f83d4();
      }
      uVar7 = (*(code *)&UNK_05d3ad78)(iVar1,0);
      return uVar7;
    }
    return 0;
  }
  FUN_02bfde00(param_1,piVar8);
  piVar8 = *(int **)(_UNK_02bffc28 + 0x2bffad0);
  iVar1 = **(int **)(*piVar8 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b67784(iVar1,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = **(int **)(*piVar8 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b67abc(iVar1,2,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(*piVar8 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b67abc(iVar1,3,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = **(int **)(*piVar8 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x02953fd4(0x5bd9,0);
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = func_0x029540a4(0x5bd9,0);
  if (iVar5 == 0) {
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
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,iVar1,0);
  iVar4 = *(int *)(iVar5 + 8);
  uVar7 = *(undefined4 *)(iVar5 + 0xc);
  iVar1 = *(int *)(iVar5 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uVar7 = func_0x024f56d0(iVar4,uVar7,&uStack_30,uVar3);
  return uVar7;
}

