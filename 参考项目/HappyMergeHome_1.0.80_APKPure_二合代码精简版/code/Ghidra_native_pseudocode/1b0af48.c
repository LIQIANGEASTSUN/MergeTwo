
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1af48(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01b1b068 + 0x1b1af60);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1b06c + 0x1b1af74));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b070 + 0x1b1af80));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b074 + 0x1b1af8c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b078 + 0x1b1af98));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b07c + 0x1b1afa4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b1b080 + 0x1b1afb8));
  func_0x024eed9c(uVar1,**(undefined4 **)(_UNK_01b1b084 + 0x1b1afcc));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x50),uVar1);
  if (*(int *)(**(int **)(_UNK_01b1b088 + 0x1b1aff0) + 0x74) == 0) {
    func_0x014387a4();
  }
  func_0x029f4038(param_1,0);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b1b08c + 0x1b1b01c));
  func_0x0152e3ec(uVar1,param_1,**(undefined4 **)(_UNK_01b1b090 + 0x1b1b038),0);
  func_0x02e596a8(0x3f800000,uVar1,0,1,0,0,0);
  return;
}

