
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02fd14dc(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02fd179c + 0x2fd14f4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd17a0 + 0x2fd1508));
    func_0x01438628(*(undefined4 *)(_UNK_02fd17a4 + 0x2fd1514));
    func_0x01438628(*(undefined4 *)(_UNK_02fd17a8 + 0x2fd1520));
    func_0x01438628(*(undefined4 *)(_UNK_02fd17ac + 0x2fd152c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd17b0 + 0x2fd1538));
    func_0x01438628(*(undefined4 *)(_UNK_02fd17b4 + 0x2fd1544));
    func_0x01438628(*(undefined4 *)(_UNK_02fd17b8 + 0x2fd1550));
    func_0x01438628(*(undefined4 *)(_UNK_02fd17bc + 0x2fd155c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd17c0 + 0x2fd1568));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x1570,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02fd17c4 + 0x2fd15dc));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02fd17c8 + 0x2fd15f0));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_02fd17cc + 0x2fd1614) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd17d0 + 0x2fd1630));
      iVar2 = FUN_02fd044c(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02fd17d4 + 0x2fd168c));
        puVar6 = *(undefined4 **)(_UNK_02fd17d8 + 0x2fd16a0);
        puVar7 = *(undefined4 **)(_UNK_02fd17dc + 0x2fd16a8);
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
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02fd17e0 + 0x2fd1700));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x1570,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

