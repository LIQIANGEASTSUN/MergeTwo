
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032159a8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_03215be0 + 0x32159c4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03215be4 + 0x32159d8));
    func_0x01438628(*(undefined4 *)(_UNK_03215be8 + 0x32159e4));
    func_0x01438628(*(undefined4 *)(_UNK_03215bec + 0x32159f0));
    func_0x01438628(*(undefined4 *)(_UNK_03215bf0 + 0x32159fc));
    func_0x01438628(*(undefined4 *)(_UNK_03215bf4 + 0x3215a08));
    func_0x01438628(*(undefined4 *)(_UNK_03215bf8 + 0x3215a14));
    func_0x01438628(*(undefined4 *)(_UNK_03215bfc + 0x3215a20));
    func_0x01438628(*(undefined4 *)(_UNK_03215c00 + 0x3215a2c));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x7ea4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03215c04 + 0x3215a94));
    func_0x051b0d14(iVar1,0);
    if (*(int *)(**(int **)(_UNK_03215c08 + 0x3215ab0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03215c0c + 0x3215acc));
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x3c);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if (0x7fffffff < param_2) {
        param_2 = func_0x03215c28(param_1);
      }
      iVar4 = func_0x03215ce4(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03215c10 + 0x3215b64));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_03215c14 + 0x3215b84),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_03215c18 + 0x3215b9c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x20) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x20) + -2,
                                  **(undefined4 **)(_UNK_03215c1c + 0x3215bd0));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7ea4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291dcd4(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

