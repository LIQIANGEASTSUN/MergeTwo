
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03144bd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0314506c + 0x3144bfc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03145070 + 0x3144c10));
    func_0x01438628(*(undefined4 *)(_UNK_03145074 + 0x3144c1c));
    func_0x01438628(*(undefined4 *)(_UNK_03145078 + 0x3144c28));
    func_0x01438628(*(undefined4 *)(_UNK_0314507c + 0x3144c34));
    func_0x01438628(*(undefined4 *)(_UNK_03145080 + 0x3144c40));
    func_0x01438628(*(undefined4 *)(_UNK_03145084 + 0x3144c4c));
    func_0x01438628(*(undefined4 *)(_UNK_03145088 + 0x3144c58));
    func_0x01438628(*(undefined4 *)(_UNK_0314508c + 0x3144c64));
    func_0x01438628(*(undefined4 *)(_UNK_03145090 + 0x3144c70));
    func_0x01438628(*(undefined4 *)(_UNK_03145094 + 0x3144c7c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7a0c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03145098 + 0x3144cec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0313e53c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_031431d8(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0314509c + 0x3144d50);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_031450a0 + 0x3144d64));
        if (*(int *)(**(int **)(_UNK_031450a4 + 0x3144d7c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_031450a8 + 0x3144d9c));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_031450ac + 0x3144e68) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0313e53c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_031435ec(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_031450b0 + 0x3144eb8));
          iVar3 = FUN_0313e53c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_03143658();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0315c208(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_031450b4 + 0x3144de4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_031450b8 + 0x3144e00));
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
        func_0x020257a4(iVar3,0x291,uVar2,**(undefined4 **)(_UNK_031450bc + 0x3144f6c),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_031450c0 + 0x3144fa4) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_031450c4 + 0x3145000));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x6a;
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
    iVar1 = func_0x029540a4(0x7a0c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

