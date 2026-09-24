
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0310da08(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0310dcc8 + 0x310da20);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310dccc + 0x310da34));
    func_0x01438628(*(undefined4 *)(_UNK_0310dcd0 + 0x310da40));
    func_0x01438628(*(undefined4 *)(_UNK_0310dcd4 + 0x310da4c));
    func_0x01438628(*(undefined4 *)(_UNK_0310dcd8 + 0x310da58));
    func_0x01438628(*(undefined4 *)(_UNK_0310dcdc + 0x310da64));
    func_0x01438628(*(undefined4 *)(_UNK_0310dce0 + 0x310da70));
    func_0x01438628(*(undefined4 *)(_UNK_0310dce4 + 0x310da7c));
    func_0x01438628(*(undefined4 *)(_UNK_0310dce8 + 0x310da88));
    func_0x01438628(*(undefined4 *)(_UNK_0310dcec + 0x310da94));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xf1a,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0310dcf0 + 0x310db08));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0310dcf4 + 0x310db1c));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_0310dcf8 + 0x310db40) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0310dcfc + 0x310db5c));
      iVar2 = FUN_0310c978(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0310dd00 + 0x310dbb8));
        puVar6 = *(undefined4 **)(_UNK_0310dd04 + 0x310dbcc);
        puVar7 = *(undefined4 **)(_UNK_0310dd08 + 0x310dbd4);
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
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0310dd0c + 0x310dc2c));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0xf1a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

