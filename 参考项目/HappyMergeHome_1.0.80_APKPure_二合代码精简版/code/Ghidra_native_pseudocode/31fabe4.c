
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0320abe4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0320ae9c + 0x320abfc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0320aea0 + 0x320ac10));
    func_0x01438628(*(undefined4 *)(_UNK_0320aea4 + 0x320ac1c));
    func_0x01438628(*(undefined4 *)(_UNK_0320aea8 + 0x320ac28));
    func_0x01438628(*(undefined4 *)(_UNK_0320aeac + 0x320ac34));
    func_0x01438628(*(undefined4 *)(_UNK_0320aeb0 + 0x320ac40));
    func_0x01438628(*(undefined4 *)(_UNK_0320aeb4 + 0x320ac4c));
    func_0x01438628(*(undefined4 *)(_UNK_0320aeb8 + 0x320ac58));
    func_0x01438628(*(undefined4 *)(_UNK_0320aebc + 0x320ac64));
    func_0x01438628(*(undefined4 *)(_UNK_0320aec0 + 0x320ac70));
    func_0x01438628(*(undefined4 *)(_UNK_0320aec4 + 0x320ac7c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7e81,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0320aec8 + 0x320acec));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0320aecc + 0x320ad00));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0320aed0 + 0x320ad24) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0320aed4 + 0x320ad40));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e41f0(iVar1,**(undefined4 **)(_UNK_0320aed8 + 0x320ad60));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0320aedc + 0x320ad8c));
      puVar5 = *(undefined4 **)(_UNK_0320aee0 + 0x320ada0);
      puVar7 = *(undefined4 **)(_UNK_0320aee4 + 0x320ada8);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0320aee8 + 0x320ae00));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7e81,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291dbcc(iVar1,param_1,0);
  }
  return iVar1;
}

