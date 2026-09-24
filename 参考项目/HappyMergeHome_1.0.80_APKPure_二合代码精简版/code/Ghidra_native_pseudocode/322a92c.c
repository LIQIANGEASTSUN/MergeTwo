
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0323a92c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0323adc0 + 0x323a950);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0323adc4 + 0x323a964));
    func_0x01438628(*(undefined4 *)(_UNK_0323adc8 + 0x323a970));
    func_0x01438628(*(undefined4 *)(_UNK_0323adcc + 0x323a97c));
    func_0x01438628(*(undefined4 *)(_UNK_0323add0 + 0x323a988));
    func_0x01438628(*(undefined4 *)(_UNK_0323add4 + 0x323a994));
    func_0x01438628(*(undefined4 *)(_UNK_0323add8 + 0x323a9a0));
    func_0x01438628(*(undefined4 *)(_UNK_0323addc + 0x323a9ac));
    func_0x01438628(*(undefined4 *)(_UNK_0323ade0 + 0x323a9b8));
    func_0x01438628(*(undefined4 *)(_UNK_0323ade4 + 0x323a9c4));
    func_0x01438628(*(undefined4 *)(_UNK_0323ade8 + 0x323a9d0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7fc7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0323adec + 0x323aa40) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032356b8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_03239dbc(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0323adf0 + 0x323aaa4);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_0323adf4 + 0x323aab8));
        if (*(int *)(**(int **)(_UNK_0323adf8 + 0x323aad0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0323adfc + 0x323aaf0));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0323ae00 + 0x323abbc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_032356b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_0323a1d0(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_0323ae04 + 0x323ac0c));
          iVar3 = FUN_032356b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0323a23c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x03266d7c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0323ae08 + 0x323ab38) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0323ae0c + 0x323ab54));
          uVar2 = uStack_28;
          uVar7 = *(undefined4 *)(param_1 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02bd2cf0(iVar4,iVar3,uVar2,1,2,uVar7,param_2,1,0xffffffff,0,0);
        }
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0202346c(0);
        uVar2 = func_0x0515c4b0(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x358,uVar2,**(undefined4 **)(_UNK_0323ae10 + 0x323acc0),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0323ae14 + 0x323acf8) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0323ae18 + 0x323ad54));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x86;
          *(undefined4 *)(iVar4 + 0xc) = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02024d08(iVar3,iVar4,1,0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar1 + 0xc));
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7fc7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

