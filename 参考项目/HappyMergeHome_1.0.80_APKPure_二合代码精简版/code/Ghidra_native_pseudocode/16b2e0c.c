
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c2e0c(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_016c3044 + 0x16c2e28);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c3048 + 0x16c2e3c));
    func_0x01438628(*(undefined4 *)(_UNK_016c304c + 0x16c2e48));
    func_0x01438628(*(undefined4 *)(_UNK_016c3050 + 0x16c2e54));
    func_0x01438628(*(undefined4 *)(_UNK_016c3054 + 0x16c2e60));
    func_0x01438628(*(undefined4 *)(_UNK_016c3058 + 0x16c2e6c));
    func_0x01438628(*(undefined4 *)(_UNK_016c305c + 0x16c2e78));
    func_0x01438628(*(undefined4 *)(_UNK_016c3060 + 0x16c2e84));
    func_0x01438628(*(undefined4 *)(_UNK_016c3064 + 0x16c2e90));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x8942,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016c3068 + 0x16c2ef8));
    func_0x016c7348(iVar1,0);
    if (*(int *)(**(int **)(_UNK_016c306c + 0x16c2f14) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_016c3070 + 0x16c2f30));
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
        param_2 = func_0x016c3084(param_1);
      }
      iVar4 = func_0x016c3140(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_016c3074 + 0x16c2fc8));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_016c3078 + 0x16c2fe8),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_016c307c + 0x16c3000));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_016c3080 + 0x16c3034));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8942,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x029234c0(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

