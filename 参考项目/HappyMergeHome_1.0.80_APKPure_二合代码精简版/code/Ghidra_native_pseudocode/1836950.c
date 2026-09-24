
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01846950(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_01846b88 + 0x184696c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01846b8c + 0x1846980));
    func_0x01438628(*(undefined4 *)(_UNK_01846b90 + 0x184698c));
    func_0x01438628(*(undefined4 *)(_UNK_01846b94 + 0x1846998));
    func_0x01438628(*(undefined4 *)(_UNK_01846b98 + 0x18469a4));
    func_0x01438628(*(undefined4 *)(_UNK_01846b9c + 0x18469b0));
    func_0x01438628(*(undefined4 *)(_UNK_01846ba0 + 0x18469bc));
    func_0x01438628(*(undefined4 *)(_UNK_01846ba4 + 0x18469c8));
    func_0x01438628(*(undefined4 *)(_UNK_01846ba8 + 0x18469d4));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x9266,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01846bac + 0x1846a3c));
    func_0x0184ae8c(iVar1,0);
    if (*(int *)(**(int **)(_UNK_01846bb0 + 0x1846a58) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01846bb4 + 0x1846a74));
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
        param_2 = func_0x01846bc8(param_1);
      }
      iVar4 = func_0x01846c84(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01846bb8 + 0x1846b0c));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_01846bbc + 0x1846b2c),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_01846bc0 + 0x1846b44));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_01846bc4 + 0x1846b78));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x9266,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02927ff0(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

