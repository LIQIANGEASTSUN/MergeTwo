
/* WARNING: Possible PIC construction at 0x02c1cab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c1cab4) */
/* WARNING: Removing unreachable block (ram,0x02c1cacc) */
/* WARNING: Removing unreachable block (ram,0x02c1cad0) */
/* WARNING: Removing unreachable block (ram,0x02c1cafc) */
/* WARNING: Removing unreachable block (ram,0x02c1cb00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1c724(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
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
  
  pcVar6 = (char *)(_UNK_02c1cb34 + 0x2c1c73c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1cb38 + 0x2c1c750));
    func_0x01438628(*(undefined4 *)(_UNK_02c1cb3c + 0x2c1c75c));
    func_0x01438628(*(undefined4 *)(_UNK_02c1cb40 + 0x2c1c768));
    func_0x01438628(*(undefined4 *)(_UNK_02c1cb44 + 0x2c1c774));
    func_0x01438628(*(undefined4 *)(_UNK_02c1cb48 + 0x2c1c780));
    func_0x01438628(*(undefined4 *)(_UNK_02c1cb4c + 0x2c1c78c));
    func_0x01438628(*(undefined4 *)(_UNK_02c1cb50 + 0x2c1c798));
    func_0x01438628(*(undefined4 *)(_UNK_02c1cb54 + 0x2c1c7a4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4f8e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4f8e,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 < 1) {
LAB_02c1c854:
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    if (*(int *)(**(int **)(_UNK_02c1cb58 + 0x2c1c808) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c1cb5c + 0x2c1c824));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029a6fa8(iVar1,param_2,0);
    if (iVar1 == 0) goto LAB_02c1c854;
  }
  iVar4 = *(int *)(param_1 + 0xa4);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  piVar7 = *(int **)(_UNK_02c1cb60 + 0x2c1c87c);
  uVar5 = *(undefined4 *)(iVar4 + 0x80);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x024ef144(uVar5,0,0);
  if (iVar4 == 0) {
LAB_02c1c8e8:
    iVar4 = *(int *)(param_1 + 0xa4);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar5 = *(undefined4 *)(iVar4 + 0x80);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x024eec50(uVar5,0,0);
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0xa4);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x80);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x024ef0f0(iVar4,0);
    iVar4 = func_0x024eef64(uVar5,*(undefined4 *)(iVar1 + 0x10),0);
    if (iVar4 == 0) goto LAB_02c1c8e8;
  }
  uVar5 = **(undefined4 **)(_UNK_02c1cb64 + 0x2c1c934);
  if (*(int *)(iVar1 + 0x1c) == 99) {
    if (*(int *)(**(int **)(_UNK_02c1cb68 + 0x2c1c94c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c1cb6c + 0x2c1c968));
    uVar3 = *(undefined4 *)(param_1 + 0x11c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_02be5aa8(iVar4,uVar3,0);
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0xa4);
      if (*(int *)(**(int **)(_UNK_02c1cb70 + 0x2c1c9a4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c1cb74 + 0x2c1c9c4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x02c488f4(iVar2,0);
      uVar5 = func_0x014e9568(*(undefined4 *)(iVar1 + 0x14),uVar5,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x024f0e8c(iVar2,uVar5,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      goto SUB_024ef348;
    }
  }
  iVar4 = *(int *)(param_1 + 0xa4);
  if (*(int *)(**(int **)(_UNK_02c1cb78 + 0x2c1ca20) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c1cb7c + 0x2c1ca40));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x02c488f4(iVar2,0);
  uVar5 = func_0x014e9568(*(undefined4 *)(iVar1 + 0x10),uVar5,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar5 = func_0x024f0e8c(iVar2,uVar5,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
SUB_024ef348:
  (*(code *)&UNK_05e61cf0)(iVar4,uVar5,0);
  return;
}

