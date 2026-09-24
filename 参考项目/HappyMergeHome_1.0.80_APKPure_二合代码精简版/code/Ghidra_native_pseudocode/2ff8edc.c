
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03008edc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_03009370 + 0x3008f00);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03009374 + 0x3008f14));
    func_0x01438628(*(undefined4 *)(_UNK_03009378 + 0x3008f20));
    func_0x01438628(*(undefined4 *)(_UNK_0300937c + 0x3008f2c));
    func_0x01438628(*(undefined4 *)(_UNK_03009380 + 0x3008f38));
    func_0x01438628(*(undefined4 *)(_UNK_03009384 + 0x3008f44));
    func_0x01438628(*(undefined4 *)(_UNK_03009388 + 0x3008f50));
    func_0x01438628(*(undefined4 *)(_UNK_0300938c + 0x3008f5c));
    func_0x01438628(*(undefined4 *)(_UNK_03009390 + 0x3008f68));
    func_0x01438628(*(undefined4 *)(_UNK_03009394 + 0x3008f74));
    func_0x01438628(*(undefined4 *)(_UNK_03009398 + 0x3008f80));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7272,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0300939c + 0x3008ff0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03003ba4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0300840c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_030093a0 + 0x3009054);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_030093a4 + 0x3009068));
        if (*(int *)(**(int **)(_UNK_030093a8 + 0x3009080) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_030093ac + 0x30090a0));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_030093b0 + 0x300916c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_03003ba4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_03008820(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_030093b4 + 0x30091bc));
          iVar3 = FUN_03003ba4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0300888c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x03020dc8(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_030093b8 + 0x30090e8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_030093bc + 0x3009104));
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
        uVar2 = func_0x01524ffc(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_030093c0 + 0x3009270),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_030093c4 + 0x30092a8) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_030093c8 + 0x3009304));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x46;
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
    iVar1 = func_0x029540a4(0x7272,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

