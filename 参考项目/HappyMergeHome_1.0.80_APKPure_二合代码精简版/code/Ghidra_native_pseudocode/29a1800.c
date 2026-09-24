
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029b1800(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_029b19f0 + 0x29b1814);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029b19f4 + 0x29b1828));
    func_0x01438628(*(undefined4 *)(_UNK_029b19f8 + 0x29b1834));
    func_0x01438628(*(undefined4 *)(_UNK_029b19fc + 0x29b1840));
    func_0x01438628(*(undefined4 *)(_UNK_029b1a00 + 0x29b184c));
    func_0x01438628(*(undefined4 *)(_UNK_029b1a04 + 0x29b1858));
    func_0x01438628(*(undefined4 *)(_UNK_029b1a08 + 0x29b1864));
    func_0x01438628(*(undefined4 *)(_UNK_029b1a0c + 0x29b1870));
    func_0x01438628(*(undefined4 *)(_UNK_029b1a10 + 0x29b187c));
    func_0x01438628(*(undefined4 *)(_UNK_029b1a14 + 0x29b1888));
    func_0x01438628(*(undefined4 *)(_UNK_029b1a18 + 0x29b1894));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_029b1a1c + 0x29b18a8);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_029b1a20 + 0x29b18bc);
  func_0x046cbdc8(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x38),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x046cbdc8(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x3c),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_029b1a24 + 0x29b1900));
  func_0x046cbdc8(uVar1,**(undefined4 **)(_UNK_029b1a28 + 0x29b1914));
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x40),uVar1);
  puVar3 = *(undefined4 **)(_UNK_029b1a2c + 0x29b1938);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_029b1a30 + 0x29b194c);
  func_0x046cbdc8(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x44),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x046cbdc8(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x48),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_029b1a34 + 0x29b1990));
  func_0x046cbdc8(uVar1,**(undefined4 **)(_UNK_029b1a38 + 0x29b19a4));
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x4c),uVar1);
  if (*(int *)(**(int **)(_UNK_029b1a3c + 0x29b19c8) + 0x74) == 0) {
    func_0x014387a4();
  }
  (*(code *)&UNK_04e4a76c)(param_1,**(undefined4 **)(_UNK_029b1a40 + 0x29b19e4));
  return;
}

