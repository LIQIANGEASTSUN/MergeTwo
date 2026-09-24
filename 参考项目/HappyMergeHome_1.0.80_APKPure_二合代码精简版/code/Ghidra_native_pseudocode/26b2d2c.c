
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026c2d2c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_026c2e0c + 0x26c2d40);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026c2e10 + 0x26c2d54));
    func_0x01438628(*(undefined4 *)(_UNK_026c2e14 + 0x26c2d60));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_026c2e18 + 0x26c2d74);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026c2e1c + 0x26c2d90);
  func_0x03b75a00(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b75a00(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x20),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b75a00(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x28),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

