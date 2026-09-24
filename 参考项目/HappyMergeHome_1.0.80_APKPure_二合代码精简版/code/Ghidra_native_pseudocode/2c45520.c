
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c55520(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  
  pcVar8 = (char *)(iRam02c55624 + 0x2c55538);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c55628 + 0x2c5554c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f47,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f47,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar4,uVar7,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x014388e8();
  }
  piVar6 = *(int **)(iVar1 + 0x10);
  iVar1 = **(int **)(_UNK_02c5562c + 0x2c555d4);
  if (piVar6 == (int *)0x0) {
    func_0x014388e4();
  }
  if (*(int *)(*piVar6 + 0x20) == *(int *)(iVar1 + 0x20)) {
    piVar6 = (int *)func_0x014387b0(piVar6);
    if (*piVar6 != 0) {
      return;
    }
    pcVar8 = (char *)(_UNK_02c52c70 + 0x2c52acc);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c52c74 + 0x2c52ae0));
      func_0x01438628(*(undefined4 *)(_UNK_02c52c78 + 0x2c52aec));
      func_0x01438628(*(undefined4 *)(_UNK_02c52c7c + 0x2c52af8));
      func_0x01438628(*(undefined4 *)(_UNK_02c52c80 + 0x2c52b04));
      func_0x01438628(*(undefined4 *)(_UNK_02c52c84 + 0x2c52b10));
      *pcVar8 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x1039,0);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_02c52c88 + 0x2c52b68) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02c9bf50(iVar1,0);
      if (*(int *)(**(int **)(_UNK_02c52c8c + 0x2c52b98) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c52c90 + 0x2c52bb8));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x029ca78c(iVar4,0);
      iVar5 = *(int *)(param_1 + 0x4c);
      if (iVar4 < 2) {
        iVar1 = 0;
      }
      if (iVar5 != 0) {
        uVar7 = func_0x01524ffc(&stack0xffffffec,0);
        func_0x02032130(iVar5,uVar7,1,0);
      }
      if (*(int *)(param_1 + 0x50) != 0) {
        func_0x014e94e8(*(int *)(param_1 + 0x50),0 < iVar1,0);
      }
      if (*(int *)(param_1 + 0x54) != 0) {
        puVar3 = *(undefined4 **)(_UNK_02c52c98 + 0x2c52c5c);
        if (iVar1 < 1) {
          puVar3 = *(undefined4 **)(_UNK_02c52c94 + 0x2c52c54);
        }
        func_0x024f1048(*(int *)(param_1 + 0x54),*puVar3,0);
      }
    }
    else {
      iVar1 = func_0x029540a4(0x1039,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar1,param_1,0);
    }
    return;
  }
  func_0x01438ca8(piVar6,iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

