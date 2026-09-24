
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0323de74(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0323e134 + 0x323de8c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0323e138 + 0x323dea0));
    func_0x01438628(*(undefined4 *)(_UNK_0323e13c + 0x323deac));
    func_0x01438628(*(undefined4 *)(_UNK_0323e140 + 0x323deb8));
    func_0x01438628(*(undefined4 *)(_UNK_0323e144 + 0x323dec4));
    func_0x01438628(*(undefined4 *)(_UNK_0323e148 + 0x323ded0));
    func_0x01438628(*(undefined4 *)(_UNK_0323e14c + 0x323dedc));
    func_0x01438628(*(undefined4 *)(_UNK_0323e150 + 0x323dee8));
    func_0x01438628(*(undefined4 *)(_UNK_0323e154 + 0x323def4));
    func_0x01438628(*(undefined4 *)(_UNK_0323e158 + 0x323df00));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x16d8,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0323e15c + 0x323df74));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0323e160 + 0x323df88));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_0323e164 + 0x323dfac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0323e168 + 0x323dfc8));
      iVar2 = FUN_0323cde4(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0323e16c + 0x323e024));
        puVar6 = *(undefined4 **)(_UNK_0323e170 + 0x323e038);
        puVar7 = *(undefined4 **)(_UNK_0323e174 + 0x323e040);
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
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0323e178 + 0x323e098));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x16d8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

