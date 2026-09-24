
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bff064(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02bff224 + 0x2bff080);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bff228 + 0x2bff094));
    func_0x01438628(*(undefined4 *)(_UNK_02bff22c + 0x2bff0a0));
    func_0x01438628(*(undefined4 *)(_UNK_02bff230 + 0x2bff0ac));
    func_0x01438628(*(undefined4 *)(_UNK_02bff234 + 0x2bff0b8));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x2193,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xe0) != 0) {
      func_0x0152da0c(&uStack_28,*(int *)(param_1 + 0xe0),
                      **(undefined4 **)(_UNK_02bff238 + 0x2bff130));
      puVar4 = *(undefined4 **)(_UNK_02bff23c + 0x2bff144);
      do {
        iVar2 = func_0x04878f14(&uStack_28,*puVar4);
        iVar1 = iStack_1c;
        if (iVar2 == 0) break;
        if (iStack_1c == 0) {
          func_0x014388e4();
        }
        iVar1 = (**(code **)(iVar1 + 0xc))
                          (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
      } while (iVar1 == 0);
      func_0x04878f10(&uStack_28,**(undefined4 **)(_UNK_02bff240 + 0x2bff18c));
    }
  }
  else {
    iVar1 = func_0x029540a4(0x2193,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return;
}

