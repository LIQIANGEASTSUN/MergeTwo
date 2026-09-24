
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0317dbb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0317e048 + 0x317dbd8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0317e04c + 0x317dbec));
    func_0x01438628(*(undefined4 *)(_UNK_0317e050 + 0x317dbf8));
    func_0x01438628(*(undefined4 *)(_UNK_0317e054 + 0x317dc04));
    func_0x01438628(*(undefined4 *)(_UNK_0317e058 + 0x317dc10));
    func_0x01438628(*(undefined4 *)(_UNK_0317e05c + 0x317dc1c));
    func_0x01438628(*(undefined4 *)(_UNK_0317e060 + 0x317dc28));
    func_0x01438628(*(undefined4 *)(_UNK_0317e064 + 0x317dc34));
    func_0x01438628(*(undefined4 *)(_UNK_0317e068 + 0x317dc40));
    func_0x01438628(*(undefined4 *)(_UNK_0317e06c + 0x317dc4c));
    func_0x01438628(*(undefined4 *)(_UNK_0317e070 + 0x317dc58));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7b8a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0317e074 + 0x317dcc8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_031783f4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0317d0e4(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0317e078 + 0x317dd2c);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_0317e07c + 0x317dd40));
        if (*(int *)(**(int **)(_UNK_0317e080 + 0x317dd58) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0317e084 + 0x317dd78));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0317e088 + 0x317de44) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_031783f4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_0317d4f8(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_0317e08c + 0x317de94));
          iVar3 = FUN_031783f4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0317d564();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x03194d18(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0317e090 + 0x317ddc0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0317e094 + 0x317dddc));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_0317e098 + 0x317df48),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0317e09c + 0x317df80) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0317e0a0 + 0x317dfdc));
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
    iVar1 = func_0x029540a4(0x7b8a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

