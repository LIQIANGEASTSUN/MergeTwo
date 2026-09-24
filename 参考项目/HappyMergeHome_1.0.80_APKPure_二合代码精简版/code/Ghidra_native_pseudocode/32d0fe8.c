
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032e0fe8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_032e1220 + 0x32e1004);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e1224 + 0x32e1018));
    func_0x01438628(*(undefined4 *)(_UNK_032e1228 + 0x32e1024));
    func_0x01438628(*(undefined4 *)(_UNK_032e122c + 0x32e1030));
    func_0x01438628(*(undefined4 *)(_UNK_032e1230 + 0x32e103c));
    func_0x01438628(*(undefined4 *)(_UNK_032e1234 + 0x32e1048));
    func_0x01438628(*(undefined4 *)(_UNK_032e1238 + 0x32e1054));
    func_0x01438628(*(undefined4 *)(_UNK_032e123c + 0x32e1060));
    func_0x01438628(*(undefined4 *)(_UNK_032e1240 + 0x32e106c));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x83da,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032e1244 + 0x32e10d4));
    func_0x051b0d14(iVar1,0);
    if (*(int *)(**(int **)(_UNK_032e1248 + 0x32e10f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032e124c + 0x32e110c));
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
        param_2 = func_0x032e1268(param_1);
      }
      iVar4 = func_0x032e1324(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032e1250 + 0x32e11a4));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_032e1254 + 0x32e11c4),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_032e1258 + 0x32e11dc));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_032e125c + 0x32e1210));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x83da,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x029206c4(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

