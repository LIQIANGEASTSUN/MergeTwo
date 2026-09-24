
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c4d0d8(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02c4d1e8 + 0x2c4d0ec);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4d1ec + 0x2c4d100));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d1f0 + 0x2c4d10c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d1f4 + 0x2c4d118));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d1f8 + 0x2c4d124));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d1fc + 0x2c4d130));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d200 + 0x2c4d13c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c4d204 + 0x2c4d150));
  func_0x024eed9c(uVar1,**(undefined4 **)(_UNK_02c4d208 + 0x2c4d164));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c4d20c + 0x2c4d188));
  func_0x046c19b0(uVar1,**(undefined4 **)(_UNK_02c4d210 + 0x2c4d19c));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x18),uVar1);
  if (*(int *)(**(int **)(_UNK_02c4d214 + 0x2c4d1c0) + 0x74) == 0) {
    func_0x014387a4();
  }
  (*(code *)&UNK_04e4a76c)(param_1,**(undefined4 **)(_UNK_02c4d218 + 0x2c4d1dc));
  return;
}

