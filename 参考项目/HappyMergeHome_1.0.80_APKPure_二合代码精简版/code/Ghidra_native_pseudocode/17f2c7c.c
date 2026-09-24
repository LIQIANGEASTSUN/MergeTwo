
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01802c7c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01802f3c + 0x1802c94);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01802f40 + 0x1802ca8));
    func_0x01438628(*(undefined4 *)(_UNK_01802f44 + 0x1802cb4));
    func_0x01438628(*(undefined4 *)(_UNK_01802f48 + 0x1802cc0));
    func_0x01438628(*(undefined4 *)(_UNK_01802f4c + 0x1802ccc));
    func_0x01438628(*(undefined4 *)(_UNK_01802f50 + 0x1802cd8));
    func_0x01438628(*(undefined4 *)(_UNK_01802f54 + 0x1802ce4));
    func_0x01438628(*(undefined4 *)(_UNK_01802f58 + 0x1802cf0));
    func_0x01438628(*(undefined4 *)(_UNK_01802f5c + 0x1802cfc));
    func_0x01438628(*(undefined4 *)(_UNK_01802f60 + 0x1802d08));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x13af,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01802f64 + 0x1802d7c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01802f68 + 0x1802d90));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_01802f6c + 0x1802db4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01802f70 + 0x1802dd0));
      iVar2 = FUN_01801bec(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01802f74 + 0x1802e2c));
        puVar6 = *(undefined4 **)(_UNK_01802f78 + 0x1802e40);
        puVar7 = *(undefined4 **)(_UNK_01802f7c + 0x1802e48);
        while (iVar2 = func_0x015109ec(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x024f1078(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01802f80 + 0x1802ea0));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x13af,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

