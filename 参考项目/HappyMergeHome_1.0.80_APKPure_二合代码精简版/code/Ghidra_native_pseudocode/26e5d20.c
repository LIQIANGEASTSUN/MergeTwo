
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f5d20(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_026f5e58 + 0x26f5d34);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f5e5c + 0x26f5d48));
    func_0x01438628(*(undefined4 *)(_UNK_026f5e60 + 0x26f5d54));
    func_0x01438628(*(undefined4 *)(_UNK_026f5e64 + 0x26f5d60));
    func_0x01438628(*(undefined4 *)(_UNK_026f5e68 + 0x26f5d6c));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_026f5e6c + 0x26f5d80);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026f5e70 + 0x26f5d9c);
  func_0x03b75a00(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 8),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b75a00(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b75a00(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026f5e74 + 0x26f5e14));
  func_0x03b70b60(uVar1,0,0,**(undefined4 **)(_UNK_026f5e78 + 0x26f5e30));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x14),uVar1);
  (*(code *)&SUB_051b0d14)(param_1,0);
  return;
}

