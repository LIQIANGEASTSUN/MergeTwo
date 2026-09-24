
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026ce8d8(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_026ceb54 + 0x26ce8ec);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ceb58 + 0x26ce900));
    func_0x01438628(*(undefined4 *)(_UNK_026ceb5c + 0x26ce90c));
    func_0x01438628(*(undefined4 *)(_UNK_026ceb60 + 0x26ce918));
    func_0x01438628(*(undefined4 *)(_UNK_026ceb64 + 0x26ce924));
    func_0x01438628(*(undefined4 *)(_UNK_026ceb68 + 0x26ce930));
    func_0x01438628(*(undefined4 *)(_UNK_026ceb6c + 0x26ce93c));
    func_0x01438628(*(undefined4 *)(_UNK_026ceb70 + 0x26ce948));
    func_0x01438628(*(undefined4 *)(_UNK_026ceb74 + 0x26ce954));
    *pcVar2 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_026ceb78 + 0x26ce968);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_026ceb7c + 0x26ce984);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026ceb80 + 0x26ce9a4);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026ceb84 + 0x26ce9c0);
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
  puVar3 = *(undefined4 **)(_UNK_026ceb88 + 0x26cea38);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026ceb8c + 0x26cea54);
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
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026ceb90 + 0x26ceaf8));
  func_0x026f0174(uVar1,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x6c),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026ceb94 + 0x26ceb24));
  func_0x026ee208(uVar1,0);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x74),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

