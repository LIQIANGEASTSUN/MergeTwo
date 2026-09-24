
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c47efc(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_02c4803c + 0x2c47f10);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c48040 + 0x2c47f24));
    func_0x01438628(*(undefined4 *)(_UNK_02c48044 + 0x2c47f30));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar5 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar5 + 0x84);
    if (*(int *)(**(int **)(_UNK_02c4804c + 0x2c47fb8) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = 0;
    iVar3 = func_0x024ef144(uVar2,0,0);
    if (iVar3 != 0) {
      iVar3 = *(int *)(iVar5 + 0x84);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x014e94d8(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar3,0,0);
    }
    *(undefined4 *)(iVar5 + 0x124) = 0;
    func_0x014385cc((undefined4 *)(iVar5 + 0x124),0);
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_02c48048 + 0x2c47f60);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x014388d4(*puVar1);
      func_0x024ef218(uVar2,0x40000000,0);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar2);
      uVar6 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar6;
}

