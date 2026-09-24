
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c7046c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02c70840 + 0x2c7048c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c70844 + 0x2c704a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c70848 + 0x2c704ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c7084c + 0x2c704b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c70850 + 0x2c704c4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x601a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x601a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(param_2 + 200);
  iStack_1c = iVar1;
  if (param_3 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(param_3 + 0x54) < 1) {
    iVar5 = *(int *)(param_1 + 0x28);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x024eecb8(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x024eff78(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x014e94d8(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar5,0,0);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x28);
    iVar1 = (*(int *)(param_3 + 0x54) * iVar1) / 100;
    iStack_1c = iVar1;
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x024eecb8(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x024eff78(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x014e94d8(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar5,1,0);
    iVar5 = *(int *)(param_1 + 0x28);
    uVar2 = func_0x01524ffc((int *)(param_2 + 200),0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x02032130(iVar5,uVar2,1,0);
  }
  iVar5 = *(int *)(param_1 + 0x50);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x014e94d8(iVar5,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar5,0 < iVar1,0);
  iVar1 = *(int *)(param_1 + 0x24);
  uVar2 = func_0x01524ffc(&iStack_1c,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02032130(iVar1,uVar2,1,0);
  piVar4 = *(int **)(_UNK_02c70854 + 0x2c70708);
  iVar1 = **(int **)(*piVar4 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b67abc(iVar1,0x67,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(*piVar4 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b67abc(iVar1,0x66,0);
    if (iVar1 == 0) goto LAB_02c70798;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02032130(iVar1,**(undefined4 **)(_UNK_02c70858 + 0x2c7078c),1,0);
  *(undefined4 *)(param_1 + 0xcc) = 0;
LAB_02c70798:
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,1,0);
  func_0x024ef2a8(param_1,**(undefined4 **)(_UNK_02c7085c + 0x2c707ec),0,0x3f800000,0);
  FUN_02c70134(param_1,*(int *)(param_3 + 0x50) == 1);
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0202e208(iVar1,**(undefined4 **)(_UNK_02c70860 + 0x2c70830),0);
  return;
}

