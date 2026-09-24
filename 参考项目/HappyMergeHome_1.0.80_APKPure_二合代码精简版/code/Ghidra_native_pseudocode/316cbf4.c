
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0317cbf4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0317d088 + 0x317cc18);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0317d08c + 0x317cc2c));
    func_0x01438628(*(undefined4 *)(_UNK_0317d090 + 0x317cc38));
    func_0x01438628(*(undefined4 *)(_UNK_0317d094 + 0x317cc44));
    func_0x01438628(*(undefined4 *)(_UNK_0317d098 + 0x317cc50));
    func_0x01438628(*(undefined4 *)(_UNK_0317d09c + 0x317cc5c));
    func_0x01438628(*(undefined4 *)(_UNK_0317d0a0 + 0x317cc68));
    func_0x01438628(*(undefined4 *)(_UNK_0317d0a4 + 0x317cc74));
    func_0x01438628(*(undefined4 *)(_UNK_0317d0a8 + 0x317cc80));
    func_0x01438628(*(undefined4 *)(_UNK_0317d0ac + 0x317cc8c));
    func_0x01438628(*(undefined4 *)(_UNK_0317d0b0 + 0x317cc98));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7b53,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0317d0b4 + 0x317cd08) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_031783f4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0317d0e4(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0317d0b8 + 0x317cd6c);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_0317d0bc + 0x317cd80));
        if (*(int *)(**(int **)(_UNK_0317d0c0 + 0x317cd98) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0317d0c4 + 0x317cdb8));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0317d0c8 + 0x317ce84) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_031783f4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x0317d4f8(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_0317d0cc + 0x317ced4));
          iVar3 = FUN_031783f4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x0317d564();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x03194d18(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0317d0d0 + 0x317ce00) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0317d0d4 + 0x317ce1c));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_0317d0d8 + 0x317cf88),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0317d0dc + 0x317cfc0) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0317d0e0 + 0x317d01c));
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
    iVar1 = func_0x029540a4(0x7b53,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

