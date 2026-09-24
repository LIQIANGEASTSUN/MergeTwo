
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03248944(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_03248b7c + 0x3248960);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03248b80 + 0x3248974));
    func_0x01438628(*(undefined4 *)(_UNK_03248b84 + 0x3248980));
    func_0x01438628(*(undefined4 *)(_UNK_03248b88 + 0x324898c));
    func_0x01438628(*(undefined4 *)(_UNK_03248b8c + 0x3248998));
    func_0x01438628(*(undefined4 *)(_UNK_03248b90 + 0x32489a4));
    func_0x01438628(*(undefined4 *)(_UNK_03248b94 + 0x32489b0));
    func_0x01438628(*(undefined4 *)(_UNK_03248b98 + 0x32489bc));
    func_0x01438628(*(undefined4 *)(_UNK_03248b9c + 0x32489c8));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x8000,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03248ba0 + 0x3248a30));
    func_0x051b0d14(iVar1,0);
    if (*(int *)(**(int **)(_UNK_03248ba4 + 0x3248a4c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03248ba8 + 0x3248a68));
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x38);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if (0x7fffffff < param_2) {
        param_2 = func_0x03248bc4(param_1);
      }
      iVar4 = func_0x03248c80(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03248bac + 0x3248b00));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_03248bb0 + 0x3248b20),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_03248bb4 + 0x3248b38));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_03248bb8 + 0x3248b6c));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8000,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291e874(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

