
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f22a8(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_026f251c + 0x26f22bc);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f2520 + 0x26f22d0));
    func_0x01438628(*(undefined4 *)(_UNK_026f2524 + 0x26f22dc));
    func_0x01438628(*(undefined4 *)(_UNK_026f2528 + 0x26f22e8));
    func_0x01438628(*(undefined4 *)(_UNK_026f252c + 0x26f22f4));
    func_0x01438628(*(undefined4 *)(_UNK_026f2530 + 0x26f2300));
    func_0x01438628(*(undefined4 *)(_UNK_026f2534 + 0x26f230c));
    func_0x01438628(*(undefined4 *)(_UNK_026f2538 + 0x26f2318));
    func_0x01438628(*(undefined4 *)(_UNK_026f253c + 0x26f2324));
    *pcVar2 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_026f2540 + 0x26f2338);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_026f2544 + 0x26f2354);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026f2548 + 0x26f2374);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026f254c + 0x26f2390);
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
  puVar3 = *(undefined4 **)(_UNK_026f2550 + 0x26f2408);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026f2554 + 0x26f2424);
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
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026f2558 + 0x26f24c8));
  FUN_026ec7d4();
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x6c),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026f255c + 0x26f24f0));
  FUN_026ee208();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x70),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

