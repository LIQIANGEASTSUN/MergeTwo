
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0323d754(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_0323da0c + 0x323d76c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0323da10 + 0x323d780));
    func_0x01438628(*(undefined4 *)(_UNK_0323da14 + 0x323d78c));
    func_0x01438628(*(undefined4 *)(_UNK_0323da18 + 0x323d798));
    func_0x01438628(*(undefined4 *)(_UNK_0323da1c + 0x323d7a4));
    func_0x01438628(*(undefined4 *)(_UNK_0323da20 + 0x323d7b0));
    func_0x01438628(*(undefined4 *)(_UNK_0323da24 + 0x323d7bc));
    func_0x01438628(*(undefined4 *)(_UNK_0323da28 + 0x323d7c8));
    func_0x01438628(*(undefined4 *)(_UNK_0323da2c + 0x323d7d4));
    func_0x01438628(*(undefined4 *)(_UNK_0323da30 + 0x323d7e0));
    func_0x01438628(*(undefined4 *)(_UNK_0323da34 + 0x323d7ec));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7f9f,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0323da38 + 0x323d85c));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0323da3c + 0x323d870));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0323da40 + 0x323d894) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0323da44 + 0x323d8b0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e3558(iVar1,**(undefined4 **)(_UNK_0323da48 + 0x323d8d0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0323da4c + 0x323d8fc));
      puVar5 = *(undefined4 **)(_UNK_0323da50 + 0x323d910);
      puVar7 = *(undefined4 **)(_UNK_0323da54 + 0x323d918);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0323da58 + 0x323d970));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7f9f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291e55c(iVar1,param_1,0);
  }
  return iVar1;
}

