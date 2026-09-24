
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c5c488(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iStack_1c;
  
  iVar1 = func_0x02953fd4(0x5c6a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5c6a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02871f94(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_02c5c740 + 0x2c5c538);
  iStack_1c = param_3;
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c5c744 + 0x2c5c550));
    func_0x01438628(*(undefined4 *)(_UNK_02c5c748 + 0x2c5c55c));
    func_0x01438628(*(undefined4 *)(_UNK_02c5c74c + 0x2c5c568));
    func_0x01438628(*(undefined4 *)(_UNK_02c5c750 + 0x2c5c574));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5c6b,0);
  if (iVar2 == 0) {
    if (param_3 == 0) {
      iVar2 = *(int *)(iVar1 + 0x40);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_02c5c75c + 0x2c5c6a8));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar4 = 0;
      func_0x02032130(iVar2,**(undefined4 **)(_UNK_02c5c760 + 0x2c5c6d8),1,0);
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x44);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_02c5c754 + 0x2c5c5f0));
      uVar3 = func_0x02e67a04(param_2,0,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x024ef348(iVar2,uVar3,0);
      iVar2 = *(int *)(iVar1 + 0x40);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_02c5c758 + 0x2c5c648));
      uVar3 = func_0x01524ffc(&iStack_1c,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02032130(iVar2,uVar3,1,0);
      iVar4 = iStack_1c;
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    iVar2 = **(int **)(**(int **)(_UNK_02c5c764 + 0x2c5c6ec) + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02e61e0c(iVar2,param_2,iVar4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f13f0(iVar1,uVar3,0);
  }
  else {
    iVar2 = func_0x029540a4(0x5c6b,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02871f94(iVar2,iVar1,param_2,param_3,0);
  }
  return;
}

