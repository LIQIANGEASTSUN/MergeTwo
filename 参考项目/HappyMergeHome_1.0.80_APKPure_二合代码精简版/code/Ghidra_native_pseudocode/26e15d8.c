
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f15d8(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_026f184c + 0x26f15ec);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f1850 + 0x26f1600));
    func_0x01438628(*(undefined4 *)(_UNK_026f1854 + 0x26f160c));
    func_0x01438628(*(undefined4 *)(_UNK_026f1858 + 0x26f1618));
    func_0x01438628(*(undefined4 *)(_UNK_026f185c + 0x26f1624));
    func_0x01438628(*(undefined4 *)(_UNK_026f1860 + 0x26f1630));
    func_0x01438628(*(undefined4 *)(_UNK_026f1864 + 0x26f163c));
    func_0x01438628(*(undefined4 *)(_UNK_026f1868 + 0x26f1648));
    func_0x01438628(*(undefined4 *)(_UNK_026f186c + 0x26f1654));
    *pcVar2 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_026f1870 + 0x26f1668);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_026f1874 + 0x26f1684);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026f1878 + 0x26f16a4);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026f187c + 0x26f16c0);
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
  puVar3 = *(undefined4 **)(_UNK_026f1880 + 0x26f1738);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026f1884 + 0x26f1754);
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
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026f1888 + 0x26f17f8));
  FUN_026f0174();
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x6c),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026f188c + 0x26f1820));
  FUN_026ee208();
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x78),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

