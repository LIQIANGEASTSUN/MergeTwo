
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016ed3e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_016ed878 + 0x16ed408);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016ed87c + 0x16ed41c));
    func_0x01438628(*(undefined4 *)(_UNK_016ed880 + 0x16ed428));
    func_0x01438628(*(undefined4 *)(_UNK_016ed884 + 0x16ed434));
    func_0x01438628(*(undefined4 *)(_UNK_016ed888 + 0x16ed440));
    func_0x01438628(*(undefined4 *)(_UNK_016ed88c + 0x16ed44c));
    func_0x01438628(*(undefined4 *)(_UNK_016ed890 + 0x16ed458));
    func_0x01438628(*(undefined4 *)(_UNK_016ed894 + 0x16ed464));
    func_0x01438628(*(undefined4 *)(_UNK_016ed898 + 0x16ed470));
    func_0x01438628(*(undefined4 *)(_UNK_016ed89c + 0x16ed47c));
    func_0x01438628(*(undefined4 *)(_UNK_016ed8a0 + 0x16ed488));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8a57,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016ed8a4 + 0x16ed4f8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_016ea198();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x016ed8d4(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_016ed8a8 + 0x16ed55c);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_016ed8ac + 0x16ed570));
        if (*(int *)(**(int **)(_UNK_016ed8b0 + 0x16ed588) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_016ed8b4 + 0x16ed5a8));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_016ed8b8 + 0x16ed674) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_016ea198();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x016edce8(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_016ed8bc + 0x16ed6c4));
          iVar3 = FUN_016ea198();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x016edd54();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01707d7c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_016ed8c0 + 0x16ed5f0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_016ed8c4 + 0x16ed60c));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_016ed8c8 + 0x16ed778),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_016ed8cc + 0x16ed7b0) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_016ed8d0 + 0x16ed80c));
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
    iVar1 = func_0x029540a4(0x8a57,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

