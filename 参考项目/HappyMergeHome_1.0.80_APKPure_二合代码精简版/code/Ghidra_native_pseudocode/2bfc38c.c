
/* WARNING: Possible PIC construction at 0x02c247dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c247e0) */
/* WARNING: Removing unreachable block (ram,0x02c247ec) */
/* WARNING: Removing unreachable block (ram,0x02c247f0) */
/* WARNING: Removing unreachable block (ram,0x02c24808) */
/* WARNING: Removing unreachable block (ram,0x02c2480c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0c38c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
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
  
  pcVar7 = (char *)(_UNK_02c0c874 + 0x2c0c3a8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c0c878 + 0x2c0c3bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c87c + 0x2c0c3c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c880 + 0x2c0c3d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c884 + 0x2c0c3e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c888 + 0x2c0c3ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c88c + 0x2c0c3f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c890 + 0x2c0c404));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c894 + 0x2c0c410));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c898 + 0x2c0c41c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c89c + 0x2c0c428));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c8a0 + 0x2c0c434));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c8a4 + 0x2c0c440));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c8a8 + 0x2c0c44c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4fc9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4fc9,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x2ac),param_2,
                          **(undefined4 **)(_UNK_02c0c8ac + 0x2c0c4b0));
  *(char *)(param_1 + 0x2a8) = (char)iVar1;
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x024eecb8(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar10 = *(undefined4 **)(_UNK_02c0c8b0 + 0x2c0c4f4);
  iVar1 = func_0x024f0e6c(iVar1,*puVar10,0);
  piVar8 = *(int **)(_UNK_02c0c8b4 + 0x2c0c508);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x024eec50(iVar1,0,0);
  if (iVar5 != 0) {
    if (*(int *)(**(int **)(_UNK_02c0c8b8 + 0x2c0c53c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c0c8bc + 0x2c0c558));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c0c8c4 + 0x2c0c58c);
    uStack_30 = 0;
    uVar6 = func_0x036ac4cc(iVar1,**(undefined4 **)(_UNK_02c0c8c0 + 0x2c0c580),0,1);
    uVar4 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03680314(uVar6,uVar4,**(undefined4 **)(_UNK_02c0c8c8 + 0x2c0c5d8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x024ef308(iVar1,0);
    pcVar7 = (char *)(_UNK_02c0c8cc + 0x2c0c60c);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c0c8d0 + 0x2c0c620));
      *pcVar7 = '\x01';
    }
    piVar8 = *(int **)(_UNK_02c0c8d4 + 0x2c0c638);
    puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    uVar9 = puVar2[2];
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 0;
    func_0x024ef1f8(iVar5,uVar4,uVar6,uVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x024ef308(iVar1,0);
    pcVar7 = (char *)(_UNK_02c0c8d8 + 0x2c0c690);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c0c8dc + 0x2c0c6a4));
      *pcVar7 = '\x01';
    }
    iVar3 = *(int *)(*piVar8 + 0x5c);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    uVar4 = *(undefined4 *)(iVar3 + 0x10);
    uVar9 = *(undefined4 *)(iVar3 + 0x14);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 0;
    func_0x024ef328(iVar5,uVar6,uVar4,uVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
      func_0x024ef2f8(0,*puVar10,0);
      func_0x014388e4();
    }
    else {
      func_0x024ef2f8(iVar1,*puVar10,0);
    }
    iVar1 = func_0x024ef308(iVar1,0);
  }
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c0c8e0 + 0x2c0c74c),0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  puVar10 = *(undefined4 **)(_UNK_02c0c8e4 + 0x2c0c774);
  uVar6 = func_0x035e8140(iVar5,*puVar10);
  *(undefined4 *)(param_1 + 0x298) = uVar6;
  func_0x014385cc();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c0c8e8 + 0x2c0c7a4),0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x035e8140(iVar5,*puVar10);
  *(undefined4 *)(param_1 + 0x29c) = uVar6;
  func_0x014385cc();
  if (iVar1 == 0) {
    func_0x014388e4();
    uVar6 = func_0x024f0e6c(0,**(undefined4 **)(_UNK_02c0c8ec + 0x2c0c820),0);
    *(undefined4 *)(param_1 + 0x2a0) = uVar6;
    func_0x014385cc();
    func_0x014388e4();
  }
  else {
    uVar6 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c0c8f0 + 0x2c0c7f0),0);
    *(undefined4 *)(param_1 + 0x2a0) = uVar6;
    func_0x014385cc();
  }
  uVar6 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c0c8f4 + 0x2c0c84c),0);
  *(undefined4 *)(param_1 + 0x2a4) = uVar6;
  func_0x014385cc();
  pcVar7 = (char *)(_UNK_02c24820 + 0x2c2470c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c24824 + 0x2c24720));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4f82,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4f82,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar4);
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x2a0);
  if (*(int *)(**(int **)(_UNK_02c24828 + 0x2c24778) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024ef144(uVar6,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2a0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,0,0);
  return;
}

