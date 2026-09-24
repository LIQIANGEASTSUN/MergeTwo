
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03015c1c(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_03015e54 + 0x3015c38);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03015e58 + 0x3015c4c));
    func_0x01438628(*(undefined4 *)(_UNK_03015e5c + 0x3015c58));
    func_0x01438628(*(undefined4 *)(_UNK_03015e60 + 0x3015c64));
    func_0x01438628(*(undefined4 *)(_UNK_03015e64 + 0x3015c70));
    func_0x01438628(*(undefined4 *)(_UNK_03015e68 + 0x3015c7c));
    func_0x01438628(*(undefined4 *)(_UNK_03015e6c + 0x3015c88));
    func_0x01438628(*(undefined4 *)(_UNK_03015e70 + 0x3015c94));
    func_0x01438628(*(undefined4 *)(_UNK_03015e74 + 0x3015ca0));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x729f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03015e78 + 0x3015d08));
    func_0x0301a8c0(iVar1,0);
    if (*(int *)(**(int **)(_UNK_03015e7c + 0x3015d24) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03015e80 + 0x3015d40));
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x2c);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if (0x7fffffff < param_2) {
        param_2 = func_0x03015e94(param_1);
      }
      iVar4 = func_0x03015f50(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03015e84 + 0x3015dd8));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_03015e88 + 0x3015df8),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_03015e8c + 0x3015e10));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_03015e90 + 0x3015e44));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x729f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02917258(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

