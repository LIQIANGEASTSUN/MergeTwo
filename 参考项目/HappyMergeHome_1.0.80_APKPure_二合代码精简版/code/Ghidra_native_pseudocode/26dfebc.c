
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026efebc(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_026f0130 + 0x26efed0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f0134 + 0x26efee4));
    func_0x01438628(*(undefined4 *)(_UNK_026f0138 + 0x26efef0));
    func_0x01438628(*(undefined4 *)(_UNK_026f013c + 0x26efefc));
    func_0x01438628(*(undefined4 *)(_UNK_026f0140 + 0x26eff08));
    func_0x01438628(*(undefined4 *)(_UNK_026f0144 + 0x26eff14));
    func_0x01438628(*(undefined4 *)(_UNK_026f0148 + 0x26eff20));
    func_0x01438628(*(undefined4 *)(_UNK_026f014c + 0x26eff2c));
    func_0x01438628(*(undefined4 *)(_UNK_026f0150 + 0x26eff38));
    *pcVar2 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_026f0154 + 0x26eff4c);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_026f0158 + 0x26eff68);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026f015c + 0x26eff88);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026f0160 + 0x26effa4);
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
  puVar3 = *(undefined4 **)(_UNK_026f0164 + 0x26f001c);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026f0168 + 0x26f0038);
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
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026f016c + 0x26f00dc));
  func_0x026f0174();
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x6c),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_026f0170 + 0x26f0104));
  FUN_026ee208();
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x74),uVar1);
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

