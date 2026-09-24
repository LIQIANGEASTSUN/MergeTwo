
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01641268(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_016416fc + 0x164128c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01641700 + 0x16412a0));
    func_0x01438628(*(undefined4 *)(_UNK_01641704 + 0x16412ac));
    func_0x01438628(*(undefined4 *)(_UNK_01641708 + 0x16412b8));
    func_0x01438628(*(undefined4 *)(_UNK_0164170c + 0x16412c4));
    func_0x01438628(*(undefined4 *)(_UNK_01641710 + 0x16412d0));
    func_0x01438628(*(undefined4 *)(_UNK_01641714 + 0x16412dc));
    func_0x01438628(*(undefined4 *)(_UNK_01641718 + 0x16412e8));
    func_0x01438628(*(undefined4 *)(_UNK_0164171c + 0x16412f4));
    func_0x01438628(*(undefined4 *)(_UNK_01641720 + 0x1641300));
    func_0x01438628(*(undefined4 *)(_UNK_01641724 + 0x164130c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8609,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01641728 + 0x164137c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0163b7ec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0163fef0(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0164172c + 0x16413e0);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_01641730 + 0x16413f4));
        if (*(int *)(**(int **)(_UNK_01641734 + 0x164140c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01641738 + 0x164142c));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0164173c + 0x16414f8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0163b7ec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_01640304(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_01641740 + 0x1641548));
          iVar3 = FUN_0163b7ec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_01640370();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01659c7c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_01641744 + 0x1641474) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01641748 + 0x1641490));
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
        func_0x020257a4(iVar3,0x344,uVar2,**(undefined4 **)(_UNK_0164174c + 0x16415fc),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_01641750 + 0x1641634) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01641754 + 0x1641690));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x84;
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
    iVar1 = func_0x029540a4(0x8609,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

