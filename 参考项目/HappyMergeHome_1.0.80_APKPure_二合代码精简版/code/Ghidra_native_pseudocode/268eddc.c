
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0269eddc(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_0269eee8 + 0x269edf0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0269eeec + 0x269ee04));
    func_0x01438628(*(undefined4 *)(_UNK_0269eef0 + 0x269ee10));
    func_0x01438628(*(undefined4 *)(_UNK_0269eef4 + 0x269ee1c));
    func_0x01438628(*(undefined4 *)(_UNK_0269eef8 + 0x269ee28));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0269eefc + 0x269ee3c));
  func_0x03b70b60(uVar1,0,0,**(undefined4 **)(_UNK_0269ef00 + 0x269ee58));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar1);
  puVar3 = *(undefined4 **)(_UNK_0269ef04 + 0x269ee7c);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_0269ef08 + 0x269ee98);
  func_0x03b75a00(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b75a00(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x38),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

