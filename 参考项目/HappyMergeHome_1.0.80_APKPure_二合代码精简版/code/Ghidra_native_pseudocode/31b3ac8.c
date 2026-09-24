
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031c3ac8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_031c3d00 + 0x31c3ae4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c3d04 + 0x31c3af8));
    func_0x01438628(*(undefined4 *)(_UNK_031c3d08 + 0x31c3b04));
    func_0x01438628(*(undefined4 *)(_UNK_031c3d0c + 0x31c3b10));
    func_0x01438628(*(undefined4 *)(_UNK_031c3d10 + 0x31c3b1c));
    func_0x01438628(*(undefined4 *)(_UNK_031c3d14 + 0x31c3b28));
    func_0x01438628(*(undefined4 *)(_UNK_031c3d18 + 0x31c3b34));
    func_0x01438628(*(undefined4 *)(_UNK_031c3d1c + 0x31c3b40));
    func_0x01438628(*(undefined4 *)(_UNK_031c3d20 + 0x31c3b4c));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x7d35,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031c3d24 + 0x31c3bb4));
    func_0x031c8160(iVar1,0);
    if (*(int *)(**(int **)(_UNK_031c3d28 + 0x31c3bd0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_031c3d2c + 0x31c3bec));
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
        param_2 = func_0x031c3d40(param_1);
      }
      iVar4 = func_0x031c3dfc(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_031c3d30 + 0x31c3c84));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_031c3d34 + 0x31c3ca4),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_031c3d38 + 0x31c3cbc));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x20) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x20) + -2,
                                  **(undefined4 **)(_UNK_031c3d3c + 0x31c3cf0));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7d35,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291cf24(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

