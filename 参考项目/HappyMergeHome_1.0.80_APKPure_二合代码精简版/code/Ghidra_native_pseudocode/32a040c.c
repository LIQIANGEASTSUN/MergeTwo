
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b040c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_032b0704 + 0x32b042c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b0708 + 0x32b0444));
    func_0x01438628(*(undefined4 *)(_UNK_032b070c + 0x32b0450));
    func_0x01438628(*(undefined4 *)(_UNK_032b0710 + 0x32b045c));
    func_0x01438628(*(undefined4 *)(_UNK_032b0714 + 0x32b0468));
    func_0x01438628(*(undefined4 *)(_UNK_032b0718 + 0x32b0474));
    func_0x01438628(*(undefined4 *)(_UNK_032b071c + 0x32b0480));
    func_0x01438628(*(undefined4 *)(_UNK_032b0720 + 0x32b048c));
    func_0x01438628(*(undefined4 *)(_UNK_032b0724 + 0x32b0498));
    func_0x01438628(*(undefined4 *)(_UNK_032b0728 + 0x32b04a4));
    func_0x01438628(*(undefined4 *)(_UNK_032b072c + 0x32b04b0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5dd6,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032b0730 + 0x32b0524));
    func_0x032b7104(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0xc) = param_6;
    *(undefined4 *)(iVar1 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar1 + 0xc),param_6);
    if (*(int *)(**(int **)(_UNK_032b0734 + 0x32b0560) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b0738 + 0x32b057c));
    piVar5 = *(int **)(_UNK_032b073c + 0x32b0590);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar5;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x6c0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0374c388(iVar2,uVar6,**(undefined4 **)(_UNK_032b0740 + 0x32b05c8));
    if (*(int *)(**(int **)(_UNK_032b0744 + 0x32b05e0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x024eec50(iVar2,0,0);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x032c3e8c(iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x024ef228(&uStack_30,iVar2,0);
      if (*(int *)(**(int **)(_UNK_032b0748 + 0x32b0650) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b074c + 0x32b0678));
      uVar7 = *(undefined4 *)(iVar1 + 8);
      uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_032b0750 + 0x32b0690));
      func_0x05096384(uVar6,iVar1,**(undefined4 **)(_UNK_032b0754 + 0x32b06ac),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02b7f0c0(iVar2,uVar7,param_3,param_4,param_5,uStack_30,uStack_2c,uStack_28,0x3f333333,
                      uVar6,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5dd6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0287e67c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

