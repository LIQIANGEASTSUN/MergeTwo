
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a488c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_017a4b4c + 0x17a48a4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a4b50 + 0x17a48b8));
    func_0x01438628(*(undefined4 *)(_UNK_017a4b54 + 0x17a48c4));
    func_0x01438628(*(undefined4 *)(_UNK_017a4b58 + 0x17a48d0));
    func_0x01438628(*(undefined4 *)(_UNK_017a4b5c + 0x17a48dc));
    func_0x01438628(*(undefined4 *)(_UNK_017a4b60 + 0x17a48e8));
    func_0x01438628(*(undefined4 *)(_UNK_017a4b64 + 0x17a48f4));
    func_0x01438628(*(undefined4 *)(_UNK_017a4b68 + 0x17a4900));
    func_0x01438628(*(undefined4 *)(_UNK_017a4b6c + 0x17a490c));
    func_0x01438628(*(undefined4 *)(_UNK_017a4b70 + 0x17a4918));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x1742,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017a4b74 + 0x17a498c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_017a4b78 + 0x17a49a0));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_017a4b7c + 0x17a49c4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a4b80 + 0x17a49e0));
      iVar2 = FUN_017a37fc(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_017a4b84 + 0x17a4a3c));
        puVar6 = *(undefined4 **)(_UNK_017a4b88 + 0x17a4a50);
        puVar7 = *(undefined4 **)(_UNK_017a4b8c + 0x17a4a58);
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
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017a4b90 + 0x17a4ab0));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x1742,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

