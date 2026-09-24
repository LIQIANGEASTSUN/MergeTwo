
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03142ce8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0314317c + 0x3142d0c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03143180 + 0x3142d20));
    func_0x01438628(*(undefined4 *)(_UNK_03143184 + 0x3142d2c));
    func_0x01438628(*(undefined4 *)(_UNK_03143188 + 0x3142d38));
    func_0x01438628(*(undefined4 *)(_UNK_0314318c + 0x3142d44));
    func_0x01438628(*(undefined4 *)(_UNK_03143190 + 0x3142d50));
    func_0x01438628(*(undefined4 *)(_UNK_03143194 + 0x3142d5c));
    func_0x01438628(*(undefined4 *)(_UNK_03143198 + 0x3142d68));
    func_0x01438628(*(undefined4 *)(_UNK_0314319c + 0x3142d74));
    func_0x01438628(*(undefined4 *)(_UNK_031431a0 + 0x3142d80));
    func_0x01438628(*(undefined4 *)(_UNK_031431a4 + 0x3142d8c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x79ce,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031431a8 + 0x3142dfc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0313e53c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x031431d8(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_031431ac + 0x3142e60);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_031431b0 + 0x3142e74));
        if (*(int *)(**(int **)(_UNK_031431b4 + 0x3142e8c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_031431b8 + 0x3142eac));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_031431bc + 0x3142f78) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0313e53c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x031435ec(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_031431c0 + 0x3142fc8));
          iVar3 = FUN_0313e53c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x03143658();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0315c208(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_031431c4 + 0x3142ef4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_031431c8 + 0x3142f10));
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
        func_0x020257a4(iVar3,0x291,uVar2,**(undefined4 **)(_UNK_031431cc + 0x314307c),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_031431d0 + 0x31430b4) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_031431d4 + 0x3143110));
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
    iVar1 = func_0x029540a4(0x79ce,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

