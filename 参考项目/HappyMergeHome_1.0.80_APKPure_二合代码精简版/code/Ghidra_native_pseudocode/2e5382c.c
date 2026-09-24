
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e6382c(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_02e6407c + 0x2e6384c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e64080 + 0x2e63860));
    func_0x01438628(*(undefined4 *)(_UNK_02e64084 + 0x2e6386c));
    func_0x01438628(*(undefined4 *)(_UNK_02e64088 + 0x2e63878));
    func_0x01438628(*(undefined4 *)(_UNK_02e6408c + 0x2e63884));
    func_0x01438628(*(undefined4 *)(_UNK_02e64090 + 0x2e63890));
    func_0x01438628(*(undefined4 *)(_UNK_02e64094 + 0x2e6389c));
    func_0x01438628(*(undefined4 *)(_UNK_02e64098 + 0x2e638a8));
    func_0x01438628(*(undefined4 *)(_UNK_02e6409c + 0x2e638b4));
    func_0x01438628(*(undefined4 *)(_UNK_02e640a0 + 0x2e638c0));
    func_0x01438628(*(undefined4 *)(_UNK_02e640a4 + 0x2e638cc));
    func_0x01438628(*(undefined4 *)(_UNK_02e640a8 + 0x2e638d8));
    func_0x01438628(*(undefined4 *)(_UNK_02e640ac + 0x2e638e4));
    func_0x01438628(*(undefined4 *)(_UNK_02e640b0 + 0x2e638f0));
    func_0x01438628(*(undefined4 *)(_UNK_02e640b4 + 0x2e638fc));
    func_0x01438628(*(undefined4 *)(_UNK_02e640b8 + 0x2e63908));
    func_0x01438628(*(undefined4 *)(_UNK_02e640bc + 0x2e63914));
    func_0x01438628(*(undefined4 *)(_UNK_02e640c0 + 0x2e63920));
    func_0x01438628(*(undefined4 *)(_UNK_02e640c4 + 0x2e6392c));
    func_0x01438628(*(undefined4 *)(_UNK_02e640c8 + 0x2e63938));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x707,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x707,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02881fa0(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,0);
    return;
  }
  iVar2 = FUN_02e61f28(param_1,param_2);
  uVar1 = (int)param_3 >> 0x1f;
  if (param_2 < 0x69) {
    if (param_2 < 0x5f) {
      if (param_2 == 0x5a) {
        if (*(int *)(**(int **)(_UNK_02e64108 + 0x2e63e20) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x032a3fc4(0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x032af104(iVar3,param_3 - iVar2,0);
        goto LAB_02e63fcc;
      }
      if (param_2 == 0x5e) {
        if (*(int *)(**(int **)(_UNK_02e640cc + 0x2e63b80) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_018f5b04(0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        FUN_01900c54(iVar3,param_3 - iVar2,0);
        goto LAB_02e63fcc;
      }
    }
    else {
      if (param_2 - 0x65U < 2) {
        uVar4 = func_0x02e673e8(param_1,param_2);
        iVar3 = FUN_02e61c0c(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 8);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        param_3 = param_3 & ~uVar1;
        iVar3 = func_0x04753c80(iVar3,uVar4,**(undefined4 **)(_UNK_02e640e0 + 0x2e63c0c));
        if (iVar3 == 0) {
          iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02e640e8 + 0x2e63e6c));
          func_0x026ab4fc(iVar3,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x026ab25c(iVar3,param_3,0);
          iVar5 = FUN_02e61c0c(param_1);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x03b73a64(iVar5,uVar4,iVar3,**(undefined4 **)(_UNK_02e640ec + 0x2e63ed8));
        }
        else {
          iVar3 = FUN_02e61c0c(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x03b73d40(iVar3,uVar4,**(undefined4 **)(_UNK_02e640e4 + 0x2e63c58));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x026ab25c(iVar3,param_3,0);
        }
        goto LAB_02e63fcc;
      }
      if (param_2 == 0x68) {
        iVar3 = FUN_02e61c0c(param_1);
        param_3 = param_3 & ~uVar1;
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x026b4abc(iVar3,param_3,0);
        goto LAB_02e63fcc;
      }
    }
  }
  else if (param_2 < 0xcb) {
    if (param_2 == 0xc9) {
      if (*(int *)(**(int **)(_UNK_02e640f0 + 0x2e63da0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02e640f4 + 0x2e63dbc));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02ca4590(iVar2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,0,1,0);
      return;
    }
    if (param_2 == 0xca) {
      if (*(int *)(**(int **)(_UNK_02e640d0 + 0x2e63ad8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02e640d4 + 0x2e63af4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar4 = **(undefined4 **)(_UNK_02e640d8 + 0x2e63b24);
      func_0x02ca49e0(iVar2,param_3 * 1000,param_5,param_6,param_7,param_8,param_9,param_10,param_11
                      ,param_12,uVar4,uVar4,uVar4,uVar4,0,0);
      return;
    }
  }
  else if (param_2 < 0x387) {
    if (param_2 == 0x2be) {
      if (*(int *)(**(int **)(_UNK_02e640fc + 0x2e63f88) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02e64100 + 0x2e63fa8));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02ebdab0(iVar3,param_3 - iVar2,0);
      goto LAB_02e63fcc;
    }
    if (param_2 == 0x321) {
      iVar3 = func_0x01d90c54(0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x01d9b918(iVar3,param_3 - iVar2,0);
      goto LAB_02e63fcc;
    }
  }
  else {
    if (param_2 == 0x387) {
      if (*(int *)(**(int **)(_UNK_02e640f8 + 0x2e63ef0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x01c5144c(0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x01c572d0(iVar3,param_3 - iVar2,0);
      goto LAB_02e63fcc;
    }
    if (param_2 == 0x388) {
      if (*(int *)(**(int **)(_UNK_02e64104 + 0x2e63f3c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = FUN_019e7f30(0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_019ee520(iVar3,param_3 - iVar2,0);
      goto LAB_02e63fcc;
    }
    if (param_2 == 0x389) {
      if (*(int *)(**(int **)(_UNK_02e640dc + 0x2e63a2c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = FUN_017d0b50(0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_017dbe18(iVar3,param_3 - iVar2,0);
      goto LAB_02e63fcc;
    }
  }
  iVar3 = FUN_02e61d28(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x046c26fc(iVar3,param_2,**(undefined4 **)(_UNK_02e6410c + 0x2e63cf4));
  iVar5 = FUN_02e61d28(param_1);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (iVar3 == 0) {
    func_0x03b70cd0(iVar5,param_2,param_3 & ~uVar1,**(undefined4 **)(_UNK_02e64114 + 0x2e63d50));
  }
  else {
    func_0x03b70fe4(iVar5,param_2,param_3 & ~uVar1,**(undefined4 **)(_UNK_02e64110 + 0x2e63d34));
  }
  iVar3 = FUN_02e61d28(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  param_3 = func_0x03b70fac(iVar3,param_2,**(undefined4 **)(_UNK_02e64118 + 0x2e63d84));
LAB_02e63fcc:
  if (*(int *)(**(int **)(_UNK_02e6411c + 0x2e63fe0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x0202346c(0);
  iVar5 = FUN_02e61f28(param_1,param_2);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x02026724(iVar3,param_2,param_3 - iVar2,(int)(param_3 - iVar2) >> 0x1f,iVar5,iVar5 >> 0x1f,
                  param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,0);
  return;
}

