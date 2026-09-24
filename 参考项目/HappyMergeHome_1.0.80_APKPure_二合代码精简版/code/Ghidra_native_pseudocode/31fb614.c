
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0320b614(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_0320b8d4 + 0x320b62c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0320b8d8 + 0x320b640));
    func_0x01438628(*(undefined4 *)(_UNK_0320b8dc + 0x320b64c));
    func_0x01438628(*(undefined4 *)(_UNK_0320b8e0 + 0x320b658));
    func_0x01438628(*(undefined4 *)(_UNK_0320b8e4 + 0x320b664));
    func_0x01438628(*(undefined4 *)(_UNK_0320b8e8 + 0x320b670));
    func_0x01438628(*(undefined4 *)(_UNK_0320b8ec + 0x320b67c));
    func_0x01438628(*(undefined4 *)(_UNK_0320b8f0 + 0x320b688));
    func_0x01438628(*(undefined4 *)(_UNK_0320b8f4 + 0x320b694));
    func_0x01438628(*(undefined4 *)(_UNK_0320b8f8 + 0x320b6a0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xed5,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0320b8fc + 0x320b714));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0320b900 + 0x320b728));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_0320b904 + 0x320b74c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0320b908 + 0x320b768));
      iVar2 = FUN_0320a60c(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0320b90c + 0x320b7c4));
        puVar6 = *(undefined4 **)(_UNK_0320b910 + 0x320b7d8);
        puVar7 = *(undefined4 **)(_UNK_0320b914 + 0x320b7e0);
        while (iVar2 = func_0x04878f14(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x046cc8c8(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0320b918 + 0x320b838));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0xed5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

