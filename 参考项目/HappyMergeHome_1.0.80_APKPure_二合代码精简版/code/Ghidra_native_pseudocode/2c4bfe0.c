
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c5bfe0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iStack_28;
  int aiStack_24 [3];
  
  iVar1 = func_0x02953fd4(0x5f7c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f7c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    aiStack_24[1] = 0;
    func_0x02871f94(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_02c5c274 + 0x2c5c090);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c5c278 + 0x2c5c0a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c5c27c + 0x2c5c0b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c5c280 + 0x2c5c0bc));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5f7d,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0x28);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_02c5c284 + 0x2c5c130));
    puVar6 = *(undefined4 **)(_UNK_02c5c288 + 0x2c5c14c);
    aiStack_24[0] = param_2;
    uVar3 = func_0x014387ac(*puVar6,aiStack_24);
    iStack_28 = param_3;
    uVar4 = func_0x014387ac(*puVar6,&iStack_28);
    uVar3 = func_0x014e95b8(**(undefined4 **)(_UNK_02c5c28c + 0x2c5c180),uVar3,uVar4,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02032130(iVar2,uVar3,1,0);
    iVar2 = *(int *)(iVar1 + 0x1c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (param_2 < param_3) {
      func_0x014e94e8(iVar2,0,0);
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 1;
    }
    else {
      func_0x014e94e8(iVar2,1,0);
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
    }
    func_0x014e94e8(iVar1,uVar3,0);
  }
  else {
    iVar2 = func_0x029540a4(0x5f7d,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02871f94(iVar2,iVar1,param_2,param_3,0);
  }
  return;
}

