
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01961954(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01961c14 + 0x196196c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01961c18 + 0x1961980));
    func_0x01438628(*(undefined4 *)(_UNK_01961c1c + 0x196198c));
    func_0x01438628(*(undefined4 *)(_UNK_01961c20 + 0x1961998));
    func_0x01438628(*(undefined4 *)(_UNK_01961c24 + 0x19619a4));
    func_0x01438628(*(undefined4 *)(_UNK_01961c28 + 0x19619b0));
    func_0x01438628(*(undefined4 *)(_UNK_01961c2c + 0x19619bc));
    func_0x01438628(*(undefined4 *)(_UNK_01961c30 + 0x19619c8));
    func_0x01438628(*(undefined4 *)(_UNK_01961c34 + 0x19619d4));
    func_0x01438628(*(undefined4 *)(_UNK_01961c38 + 0x19619e0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x1624,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01961c3c + 0x1961a54));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01961c40 + 0x1961a68));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_01961c44 + 0x1961a8c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01961c48 + 0x1961aa8));
      iVar2 = FUN_019608c4(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01961c4c + 0x1961b04));
        puVar6 = *(undefined4 **)(_UNK_01961c50 + 0x1961b18);
        puVar7 = *(undefined4 **)(_UNK_01961c54 + 0x1961b20);
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
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01961c58 + 0x1961b78));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x1624,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

