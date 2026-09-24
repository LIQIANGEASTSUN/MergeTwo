
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017206ec(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_01720924 + 0x1720708);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01720928 + 0x172071c));
    func_0x01438628(*(undefined4 *)(_UNK_0172092c + 0x1720728));
    func_0x01438628(*(undefined4 *)(_UNK_01720930 + 0x1720734));
    func_0x01438628(*(undefined4 *)(_UNK_01720934 + 0x1720740));
    func_0x01438628(*(undefined4 *)(_UNK_01720938 + 0x172074c));
    func_0x01438628(*(undefined4 *)(_UNK_0172093c + 0x1720758));
    func_0x01438628(*(undefined4 *)(_UNK_01720940 + 0x1720764));
    func_0x01438628(*(undefined4 *)(_UNK_01720944 + 0x1720770));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x8b9a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01720948 + 0x17207d8));
    func_0x01725390(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0172094c + 0x17207f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01720950 + 0x1720810));
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
        param_2 = func_0x01720964(param_1);
      }
      iVar4 = func_0x01720a20(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01720954 + 0x17208a8));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_01720958 + 0x17208c8),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_0172095c + 0x17208e0));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_01720960 + 0x1720914));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8b9a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02924864(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

