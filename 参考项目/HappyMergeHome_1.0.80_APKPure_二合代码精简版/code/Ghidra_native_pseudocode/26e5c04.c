
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f5c04(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_026f5cfc + 0x26f5c18);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f5d00 + 0x26f5c2c));
    func_0x01438628(*(undefined4 *)(_UNK_026f5d04 + 0x26f5c38));
    func_0x01438628(*(undefined4 *)(_UNK_026f5d08 + 0x26f5c44));
    func_0x01438628(*(undefined4 *)(_UNK_026f5d0c + 0x26f5c50));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026f5d10 + 0x26f5c64));
  func_0x03b71cfc(uVar1,0,0,**(undefined4 **)(_UNK_026f5d14 + 0x26f5c80));
  *(undefined4 *)(param_1 + 8) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 8),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026f5d18 + 0x26f5ca4));
  func_0x026f5d20();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026f5d1c + 0x26f5ccc));
  FUN_0268b170(uVar1,0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

