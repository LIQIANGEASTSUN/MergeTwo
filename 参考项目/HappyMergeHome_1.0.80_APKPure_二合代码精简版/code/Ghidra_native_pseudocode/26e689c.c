
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f689c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_026f6b00 + 0x26f68b0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f6b04 + 0x26f68c4));
    func_0x01438628(*(undefined4 *)(_UNK_026f6b08 + 0x26f68d0));
    func_0x01438628(*(undefined4 *)(_UNK_026f6b0c + 0x26f68dc));
    func_0x01438628(*(undefined4 *)(_UNK_026f6b10 + 0x26f68e8));
    func_0x01438628(*(undefined4 *)(_UNK_026f6b14 + 0x26f68f4));
    func_0x01438628(*(undefined4 *)(_UNK_026f6b18 + 0x26f6900));
    *pcVar2 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_026f6b1c + 0x26f6914);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_026f6b20 + 0x26f6930);
  func_0x03b77470(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  uVar1 = func_0x014388d4(*puVar5);
  func_0x03b77470(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x14),uVar1);
  uVar1 = func_0x014388d4(*puVar5);
  func_0x03b77470(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x1c),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026f6b24 + 0x26f69a8);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026f6b28 + 0x26f69c4);
  func_0x03b70b60(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x20),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b70b60(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x30),uVar1);
  uVar1 = func_0x014388d4(*puVar5);
  func_0x03b77470(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x34),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b70b60(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x48),uVar1);
  uVar1 = func_0x014388d4(*puVar5);
  func_0x03b77470(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x4c),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026f6b2c + 0x26f6a94);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026f6b30 + 0x26f6ab0);
  func_0x03b75a00(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x60),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b75a00(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 100) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 100),uVar1);
  (*(code *)&SUB_051b0d14)(param_1,0);
  return;
}

