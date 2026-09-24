
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026bf1dc(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_026bf2d0 + 0x26bf1f0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026bf2d4 + 0x26bf204));
    func_0x01438628(*(undefined4 *)(_UNK_026bf2d8 + 0x26bf210));
    func_0x01438628(*(undefined4 *)(_UNK_026bf2dc + 0x26bf21c));
    func_0x01438628(*(undefined4 *)(_UNK_026bf2e0 + 0x26bf228));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026bf2e4 + 0x26bf23c));
  func_0x026bf2f4();
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x18),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026bf2e8 + 0x26bf264));
  func_0x026bf5b4();
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x1c),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026bf2ec + 0x26bf28c));
  func_0x03b77470(uVar1,0,0,**(undefined4 **)(_UNK_026bf2f0 + 0x26bf2a8));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x20),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

