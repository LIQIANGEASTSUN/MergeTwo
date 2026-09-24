
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026cdc44(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_026cddd0 + 0x26cdc58);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026cddd4 + 0x26cdc6c));
    func_0x01438628(*(undefined4 *)(_UNK_026cddd8 + 0x26cdc78));
    func_0x01438628(*(undefined4 *)(_UNK_026cdddc + 0x26cdc84));
    func_0x01438628(*(undefined4 *)(_UNK_026cdde0 + 0x26cdc90));
    func_0x01438628(*(undefined4 *)(_UNK_026cdde4 + 0x26cdc9c));
    func_0x01438628(*(undefined4 *)(_UNK_026cdde8 + 0x26cdca8));
    *pcVar2 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_026cddec + 0x26cdcbc);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_026cddf0 + 0x26cdcd8);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026cddf4 + 0x26cdcf8);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026cddf8 + 0x26cdd14);
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
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026cddfc + 0x26cdd8c));
  func_0x03b70590(uVar1,0,0,**(undefined4 **)(_UNK_026cde00 + 0x26cdda8));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x3c),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

