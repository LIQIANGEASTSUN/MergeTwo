
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026cf7f8(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_026cfa74 + 0x26cf80c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026cfa78 + 0x26cf820));
    func_0x01438628(*(undefined4 *)(_UNK_026cfa7c + 0x26cf82c));
    func_0x01438628(*(undefined4 *)(_UNK_026cfa80 + 0x26cf838));
    func_0x01438628(*(undefined4 *)(_UNK_026cfa84 + 0x26cf844));
    func_0x01438628(*(undefined4 *)(_UNK_026cfa88 + 0x26cf850));
    func_0x01438628(*(undefined4 *)(_UNK_026cfa8c + 0x26cf85c));
    func_0x01438628(*(undefined4 *)(_UNK_026cfa90 + 0x26cf868));
    func_0x01438628(*(undefined4 *)(_UNK_026cfa94 + 0x26cf874));
    *pcVar2 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_026cfa98 + 0x26cf888);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_026cfa9c + 0x26cf8a4);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026cfaa0 + 0x26cf8c4);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026cfaa4 + 0x26cf8e0);
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
  puVar3 = *(undefined4 **)(_UNK_026cfaa8 + 0x26cf958);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026cfaac + 0x26cf974);
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
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026cfab0 + 0x26cfa18));
  func_0x026ec7d4(uVar1,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x6c),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026cfab4 + 0x26cfa44));
  func_0x026ee208(uVar1,0);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x78),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

