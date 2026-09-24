
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016ee50c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_016ee9a0 + 0x16ee530);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016ee9a4 + 0x16ee544));
    func_0x01438628(*(undefined4 *)(_UNK_016ee9a8 + 0x16ee550));
    func_0x01438628(*(undefined4 *)(_UNK_016ee9ac + 0x16ee55c));
    func_0x01438628(*(undefined4 *)(_UNK_016ee9b0 + 0x16ee568));
    func_0x01438628(*(undefined4 *)(_UNK_016ee9b4 + 0x16ee574));
    func_0x01438628(*(undefined4 *)(_UNK_016ee9b8 + 0x16ee580));
    func_0x01438628(*(undefined4 *)(_UNK_016ee9bc + 0x16ee58c));
    func_0x01438628(*(undefined4 *)(_UNK_016ee9c0 + 0x16ee598));
    func_0x01438628(*(undefined4 *)(_UNK_016ee9c4 + 0x16ee5a4));
    func_0x01438628(*(undefined4 *)(_UNK_016ee9c8 + 0x16ee5b0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8a90,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016ee9cc + 0x16ee620) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_016ea198();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_016ed8d4(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_016ee9d0 + 0x16ee684);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_016ee9d4 + 0x16ee698));
        if (*(int *)(**(int **)(_UNK_016ee9d8 + 0x16ee6b0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_016ee9dc + 0x16ee6d0));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_016ee9e0 + 0x16ee79c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_016ea198();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_016edce8(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_016ee9e4 + 0x16ee7ec));
          iVar3 = FUN_016ea198();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_016edd54();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01707d7c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_016ee9e8 + 0x16ee718) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_016ee9ec + 0x16ee734));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_016ee9f0 + 0x16ee8a0),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_016ee9f4 + 0x16ee8d8) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_016ee9f8 + 0x16ee934));
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
    iVar1 = func_0x029540a4(0x8a90,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

