
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026edc3c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_026edea0 + 0x26edc50);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026edea4 + 0x26edc64));
    func_0x01438628(*(undefined4 *)(_UNK_026edea8 + 0x26edc70));
    func_0x01438628(*(undefined4 *)(_UNK_026edeac + 0x26edc7c));
    func_0x01438628(*(undefined4 *)(_UNK_026edeb0 + 0x26edc88));
    func_0x01438628(*(undefined4 *)(_UNK_026edeb4 + 0x26edc94));
    func_0x01438628(*(undefined4 *)(_UNK_026edeb8 + 0x26edca0));
    *pcVar2 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_026edebc + 0x26edcb4);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_026edec0 + 0x26edcd0);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026edec4 + 0x26edcf0);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026edec8 + 0x26edd0c);
  func_0x03b70b60(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x14),uVar1);
  uVar1 = func_0x014388d4(*puVar5);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x18),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b70b60(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x30),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026edecc + 0x26edd84);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026eded0 + 0x26edda0);
  func_0x03b70590(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x3c),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b70590(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x44),uVar1);
  uVar1 = func_0x014388d4(*puVar5);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x48),uVar1);
  uVar1 = func_0x014388d4(*puVar5);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 100) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 100),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b70590(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x7c),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b70590(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x84),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

