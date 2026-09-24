
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c5a5ec(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_02c5abc4 + 0x2c5a60c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c5abc8 + 0x2c5a624));
    func_0x01438628(*(undefined4 *)(_UNK_02c5abcc + 0x2c5a630));
    func_0x01438628(*(undefined4 *)(_UNK_02c5abd0 + 0x2c5a63c));
    func_0x01438628(*(undefined4 *)(_UNK_02c5abd4 + 0x2c5a648));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5c5c,0);
  if (iVar1 == 0) {
    iVar1 = func_0x024eecb8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar6 = *(undefined4 **)(_UNK_02c5abd8 + 0x2c5a6dc);
    iVar1 = func_0x035e8140(iVar1,*puVar6);
    piVar5 = (int *)(param_1 + 0x30);
    *piVar5 = iVar1;
    func_0x014385cc(piVar5,iVar1);
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xb4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f1134(iVar1,0);
    if (*piVar5 != 0) {
      iVar1 = *(int *)(*piVar5 + 0xb4);
      uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02c5abdc + 0x2c5a738));
      func_0x024f097c(uVar2,param_1,**(undefined4 **)(_UNK_02c5abe0 + 0x2c5a758),0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f098c(iVar1,uVar2,0);
    }
    iVar1 = func_0x024eecb8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c5abe4 + 0x2c5a7a8),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x035e8140(iVar1,*puVar6);
    piVar5 = (int *)(param_1 + 0x34);
    *piVar5 = iVar1;
    func_0x014385cc(piVar5,iVar1);
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xb4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f1134(iVar1,0);
    if (*piVar5 != 0) {
      iVar1 = *(int *)(*piVar5 + 0xb4);
      uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02c5abe8 + 0x2c5a824));
      func_0x024f097c(uVar2,param_1,**(undefined4 **)(_UNK_02c5abec + 0x2c5a844),0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f098c(iVar1,uVar2,0);
    }
    if ((7 < param_4) || (bVar3 = true, (1 << (param_4 & 0xff) & 0xb0U) == 0)) {
      bVar3 = param_4 == 6;
    }
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,bVar3,0);
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,bVar3 ^ 1,0);
    *(undefined4 *)(param_1 + 0x40) = param_2;
    func_0x014385cc((undefined4 *)(param_1 + 0x40),param_2);
    *(undefined4 *)(param_1 + 0x38) = param_3;
    *(uint *)(param_1 + 0x3c) = param_4;
    func_0x02c5abf0(param_1);
    switch(param_4) {
    case 0:
    case 4:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      break;
    case 1:
    case 3:
    case 5:
    case 7:
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      param_6 = 0;
      break;
    case 2:
    case 6:
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      param_6 = 0;
      break;
    default:
      goto LAB_02c5aa5c;
    case 10:
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      param_6 = 0;
      param_4 = 10;
      break;
    case 0xb:
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      param_6 = 0;
      param_4 = 0xb;
      break;
    case 0xc:
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      param_6 = 0;
      param_4 = 0xc;
    }
    func_0x02c5ad6c(iVar1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    iVar1 = func_0x029540a4(0x5c5c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028f9814(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
LAB_02c5aa5c:
  return;
}

