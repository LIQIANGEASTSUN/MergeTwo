
/* WARNING: Possible PIC construction at 0x02c1c42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1c468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1c4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1c510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1c58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1c5dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c1c590) */
/* WARNING: Removing unreachable block (ram,0x02c1c5a0) */
/* WARNING: Removing unreachable block (ram,0x02c1c5ac) */
/* WARNING: Removing unreachable block (ram,0x02c1c5b0) */
/* WARNING: Removing unreachable block (ram,0x02c1c5cc) */
/* WARNING: Removing unreachable block (ram,0x02c1c5d0) */
/* WARNING: Removing unreachable block (ram,0x02c1c514) */
/* WARNING: Removing unreachable block (ram,0x02c1c520) */
/* WARNING: Removing unreachable block (ram,0x02c1c524) */
/* WARNING: Removing unreachable block (ram,0x02c1c4b8) */
/* WARNING: Removing unreachable block (ram,0x02c1c4c4) */
/* WARNING: Removing unreachable block (ram,0x02c1c4c8) */
/* WARNING: Removing unreachable block (ram,0x02c1c4e4) */
/* WARNING: Removing unreachable block (ram,0x02c1c4e8) */
/* WARNING: Removing unreachable block (ram,0x02c1c4f4) */
/* WARNING: Removing unreachable block (ram,0x02c1c4f8) */
/* WARNING: Removing unreachable block (ram,0x02c1c500) */
/* WARNING: Removing unreachable block (ram,0x02c1c504) */
/* WARNING: Removing unreachable block (ram,0x02c1c46c) */
/* WARNING: Removing unreachable block (ram,0x02c1c554) */
/* WARNING: Removing unreachable block (ram,0x02c1c560) */
/* WARNING: Removing unreachable block (ram,0x02c1c564) */
/* WARNING: Removing unreachable block (ram,0x02c1c57c) */
/* WARNING: Removing unreachable block (ram,0x02c1c580) */
/* WARNING: Removing unreachable block (ram,0x02c1c47c) */
/* WARNING: Removing unreachable block (ram,0x02c1c488) */
/* WARNING: Removing unreachable block (ram,0x02c1c48c) */
/* WARNING: Removing unreachable block (ram,0x02c1c4a4) */
/* WARNING: Removing unreachable block (ram,0x02c1c4a8) */
/* WARNING: Removing unreachable block (ram,0x02c1c430) */
/* WARNING: Removing unreachable block (ram,0x02c1c43c) */
/* WARNING: Removing unreachable block (ram,0x02c1c440) */
/* WARNING: Removing unreachable block (ram,0x02c1c458) */
/* WARNING: Removing unreachable block (ram,0x02c1c45c) */
/* WARNING: Removing unreachable block (ram,0x02c1c5e0) */
/* WARNING: Removing unreachable block (ram,0x02c1c5f8) */
/* WARNING: Removing unreachable block (ram,0x02c1c620) */
/* WARNING: Removing unreachable block (ram,0x02c1c644) */
/* WARNING: Removing unreachable block (ram,0x02c1c6e8) */
/* WARNING: Removing unreachable block (ram,0x02c1c650) */
/* WARNING: Removing unreachable block (ram,0x02c1c670) */
/* WARNING: Removing unreachable block (ram,0x02c1c688) */
/* WARNING: Removing unreachable block (ram,0x02c1c68c) */
/* WARNING: Removing unreachable block (ram,0x02c1c6ac) */
/* WARNING: Removing unreachable block (ram,0x02c1c6b0) */
/* WARNING: Removing unreachable block (ram,0x02c1c6c4) */
/* WARNING: Removing unreachable block (ram,0x02c1c6cc) */
/* WARNING: Removing unreachable block (ram,0x02c1c6d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1af98(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_02c1b1a8 + 0x2c1afb4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1b1ac + 0x2c1afc8));
    func_0x01438628(*(undefined4 *)(_UNK_02c1b1b0 + 0x2c1afd4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4f8c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4f8c,0);
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
    func_0x01523a1c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = func_0x024eecb8(param_1,0);
  pcVar4 = (char *)(_UNK_02c1b1b4 + 0x2c1b044);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1b1b8 + 0x2c1b058));
    *pcVar4 = '\x01';
  }
  iVar3 = *(int *)(**(int **)(_UNK_02c1b1bc + 0x2c1b070) + 0x5c);
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  uVar5 = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_28 = 0;
  func_0x024ef328(iVar1,uVar2,uVar5,uVar6);
  if (param_2 != 0) {
    func_0x02c1b1d0(param_1);
  }
  iVar1 = FUN_02c195e4(param_1);
  if (iVar1 != -1) {
    if (*(int *)(**(int **)(_UNK_02c1b1c0 + 0x2c1b0cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c1b1c4 + 0x2c1b0e8));
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar5 = *(undefined4 *)(iVar3 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_02bd204c(iVar1,uVar5,0);
  }
  if (*(int *)(**(int **)(_UNK_02c1b1c8 + 0x2c1b12c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c1b1cc + 0x2c1b148));
  uVar2 = *(undefined4 *)(param_1 + 0x11c);
  uVar5 = FUN_02c19900(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_02bd2354(iVar1,uVar2,uVar5,0);
  func_0x02c1b844(param_1);
  func_0x02c1c0e4(param_1);
  func_0x02c1c20c(param_1);
  pcVar4 = (char *)(_UNK_02c1c6f0 + 0x2c1c304);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1c6f4 + 0x2c1c318));
    func_0x01438628(*(undefined4 *)(_UNK_02c1c6f8 + 0x2c1c324));
    func_0x01438628(*(undefined4 *)(_UNK_02c1c6fc + 0x2c1c330));
    func_0x01438628(*(undefined4 *)(_UNK_02c1c700 + 0x2c1c33c));
    func_0x01438628(*(undefined4 *)(_UNK_02c1c704 + 0x2c1c348));
    func_0x01438628(*(undefined4 *)(_UNK_02c1c708 + 0x2c1c354));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd50,0);
  if (iVar1 == 0) {
    func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c1c70c + 0x2c1c3b8),0);
    func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c1c710 + 0x2c1c3d0),0);
    func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c1c714 + 0x2c1c3e8),0);
    func_0x02c24960(param_1);
    iVar1 = *(int *)(param_1 + 0x34);
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
  iVar1 = func_0x029540a4(0xd50,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2);
  return;
}

