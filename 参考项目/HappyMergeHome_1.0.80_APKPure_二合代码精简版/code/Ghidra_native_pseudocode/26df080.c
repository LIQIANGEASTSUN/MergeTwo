
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026ef080(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_026ef2e4 + 0x26ef094);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ef2e8 + 0x26ef0a8));
    func_0x01438628(*(undefined4 *)(_UNK_026ef2ec + 0x26ef0b4));
    func_0x01438628(*(undefined4 *)(_UNK_026ef2f0 + 0x26ef0c0));
    func_0x01438628(*(undefined4 *)(_UNK_026ef2f4 + 0x26ef0cc));
    func_0x01438628(*(undefined4 *)(_UNK_026ef2f8 + 0x26ef0d8));
    func_0x01438628(*(undefined4 *)(_UNK_026ef2fc + 0x26ef0e4));
    *pcVar2 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_026ef300 + 0x26ef0f8);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_026ef304 + 0x26ef114);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026ef308 + 0x26ef134);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026ef30c + 0x26ef150);
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
  puVar3 = *(undefined4 **)(_UNK_026ef310 + 0x26ef1c8);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026ef314 + 0x26ef1e4);
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

