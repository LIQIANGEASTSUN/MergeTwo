
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0310d2e8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0310d5a0 + 0x310d300);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310d5a4 + 0x310d314));
    func_0x01438628(*(undefined4 *)(_UNK_0310d5a8 + 0x310d320));
    func_0x01438628(*(undefined4 *)(_UNK_0310d5ac + 0x310d32c));
    func_0x01438628(*(undefined4 *)(_UNK_0310d5b0 + 0x310d338));
    func_0x01438628(*(undefined4 *)(_UNK_0310d5b4 + 0x310d344));
    func_0x01438628(*(undefined4 *)(_UNK_0310d5b8 + 0x310d350));
    func_0x01438628(*(undefined4 *)(_UNK_0310d5bc + 0x310d35c));
    func_0x01438628(*(undefined4 *)(_UNK_0310d5c0 + 0x310d368));
    func_0x01438628(*(undefined4 *)(_UNK_0310d5c4 + 0x310d374));
    func_0x01438628(*(undefined4 *)(_UNK_0310d5c8 + 0x310d380));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7863,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0310d5cc + 0x310d3f0));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0310d5d0 + 0x310d404));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0310d5d4 + 0x310d428) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0310d5d8 + 0x310d444));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e7038(iVar1,**(undefined4 **)(_UNK_0310d5dc + 0x310d464));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0310d5e0 + 0x310d490));
      puVar5 = *(undefined4 **)(_UNK_0310d5e4 + 0x310d4a4);
      puVar7 = *(undefined4 **)(_UNK_0310d5e8 + 0x310d4ac);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0310d5ec + 0x310d504));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7863,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291a50c(iVar1,param_1,0);
  }
  return iVar1;
}

