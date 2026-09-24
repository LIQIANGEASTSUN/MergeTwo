
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f464f4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02f467b4 + 0x2f4650c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f467b8 + 0x2f46520));
    func_0x01438628(*(undefined4 *)(_UNK_02f467bc + 0x2f4652c));
    func_0x01438628(*(undefined4 *)(_UNK_02f467c0 + 0x2f46538));
    func_0x01438628(*(undefined4 *)(_UNK_02f467c4 + 0x2f46544));
    func_0x01438628(*(undefined4 *)(_UNK_02f467c8 + 0x2f46550));
    func_0x01438628(*(undefined4 *)(_UNK_02f467cc + 0x2f4655c));
    func_0x01438628(*(undefined4 *)(_UNK_02f467d0 + 0x2f46568));
    func_0x01438628(*(undefined4 *)(_UNK_02f467d4 + 0x2f46574));
    func_0x01438628(*(undefined4 *)(_UNK_02f467d8 + 0x2f46580));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x14bc,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f467dc + 0x2f465f4));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02f467e0 + 0x2f46608));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_02f467e4 + 0x2f4662c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f467e8 + 0x2f46648));
      iVar2 = FUN_02f45464(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02f467ec + 0x2f466a4));
        puVar6 = *(undefined4 **)(_UNK_02f467f0 + 0x2f466b8);
        puVar7 = *(undefined4 **)(_UNK_02f467f4 + 0x2f466c0);
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
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f467f8 + 0x2f46718));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x14bc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

