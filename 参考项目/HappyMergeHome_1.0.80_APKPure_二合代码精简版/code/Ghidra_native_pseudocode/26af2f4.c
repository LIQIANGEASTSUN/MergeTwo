
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026bf2f4(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_026bf570 + 0x26bf308);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026bf574 + 0x26bf31c));
    func_0x01438628(*(undefined4 *)(_UNK_026bf578 + 0x26bf328));
    func_0x01438628(*(undefined4 *)(_UNK_026bf57c + 0x26bf334));
    func_0x01438628(*(undefined4 *)(_UNK_026bf580 + 0x26bf340));
    func_0x01438628(*(undefined4 *)(_UNK_026bf584 + 0x26bf34c));
    func_0x01438628(*(undefined4 *)(_UNK_026bf588 + 0x26bf358));
    func_0x01438628(*(undefined4 *)(_UNK_026bf58c + 0x26bf364));
    func_0x01438628(*(undefined4 *)(_UNK_026bf590 + 0x26bf370));
    *pcVar2 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_026bf594 + 0x26bf384);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_026bf598 + 0x26bf3a0);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026bf59c + 0x26bf3c0);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026bf5a0 + 0x26bf3dc);
  func_0x03b70b60(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  uVar1 = func_0x014388d4(*puVar5);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x14),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b70b60(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x18),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026bf5a4 + 0x26bf454);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026bf5a8 + 0x26bf470);
  func_0x03b70590(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x24),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b70590(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x2c),uVar1);
  uVar1 = func_0x014388d4(*puVar5);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x30),uVar1);
  uVar1 = func_0x014388d4(*puVar5);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x48),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026bf5ac + 0x26bf514));
  func_0x026ec7d4(uVar1,0);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x60),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026bf5b0 + 0x26bf540));
  func_0x026ee208(uVar1,0);
  *(undefined4 *)(param_1 + 100) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 100),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

