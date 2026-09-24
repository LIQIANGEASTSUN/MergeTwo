
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0163fa00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0163fe94 + 0x163fa24);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0163fe98 + 0x163fa38));
    func_0x01438628(*(undefined4 *)(_UNK_0163fe9c + 0x163fa44));
    func_0x01438628(*(undefined4 *)(_UNK_0163fea0 + 0x163fa50));
    func_0x01438628(*(undefined4 *)(_UNK_0163fea4 + 0x163fa5c));
    func_0x01438628(*(undefined4 *)(_UNK_0163fea8 + 0x163fa68));
    func_0x01438628(*(undefined4 *)(_UNK_0163feac + 0x163fa74));
    func_0x01438628(*(undefined4 *)(_UNK_0163feb0 + 0x163fa80));
    func_0x01438628(*(undefined4 *)(_UNK_0163feb4 + 0x163fa8c));
    func_0x01438628(*(undefined4 *)(_UNK_0163feb8 + 0x163fa98));
    func_0x01438628(*(undefined4 *)(_UNK_0163febc + 0x163faa4));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x85cf,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0163fec0 + 0x163fb14) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0163b7ec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0163fef0(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0163fec4 + 0x163fb78);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_0163fec8 + 0x163fb8c));
        if (*(int *)(**(int **)(_UNK_0163fecc + 0x163fba4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0163fed0 + 0x163fbc4));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0163fed4 + 0x163fc90) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0163b7ec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x01640304(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_0163fed8 + 0x163fce0));
          iVar3 = FUN_0163b7ec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x01640370();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01659c7c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0163fedc + 0x163fc0c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0163fee0 + 0x163fc28));
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
        func_0x020257a4(iVar3,0x344,uVar2,**(undefined4 **)(_UNK_0163fee4 + 0x163fd94),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0163fee8 + 0x163fdcc) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0163feec + 0x163fe28));
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
    iVar1 = func_0x029540a4(0x85cf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

