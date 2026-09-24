
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03144440(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_031448d4 + 0x3144464);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031448d8 + 0x3144478));
    func_0x01438628(*(undefined4 *)(_UNK_031448dc + 0x3144484));
    func_0x01438628(*(undefined4 *)(_UNK_031448e0 + 0x3144490));
    func_0x01438628(*(undefined4 *)(_UNK_031448e4 + 0x314449c));
    func_0x01438628(*(undefined4 *)(_UNK_031448e8 + 0x31444a8));
    func_0x01438628(*(undefined4 *)(_UNK_031448ec + 0x31444b4));
    func_0x01438628(*(undefined4 *)(_UNK_031448f0 + 0x31444c0));
    func_0x01438628(*(undefined4 *)(_UNK_031448f4 + 0x31444cc));
    func_0x01438628(*(undefined4 *)(_UNK_031448f8 + 0x31444d8));
    func_0x01438628(*(undefined4 *)(_UNK_031448fc + 0x31444e4));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7a08,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03144900 + 0x3144554) + 0x74) == 0) {
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
      piVar8 = *(int **)(_UNK_03144904 + 0x31445b8);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_03144908 + 0x31445cc));
        if (*(int *)(**(int **)(_UNK_0314490c + 0x31445e4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03144910 + 0x3144604));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_03144914 + 0x31446d0) + 0x74) == 0) {
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
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_03144918 + 0x3144720));
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
          if (*(int *)(**(int **)(_UNK_0314491c + 0x314464c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03144920 + 0x3144668));
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
        func_0x020257a4(iVar3,0x291,uVar2,**(undefined4 **)(_UNK_03144924 + 0x31447d4),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_03144928 + 0x314480c) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0314492c + 0x3144868));
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
    iVar1 = func_0x029540a4(0x7a08,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

