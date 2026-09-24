
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f7e40(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_026f7f98 + 0x26f7e54);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f7f9c + 0x26f7e68));
    func_0x01438628(*(undefined4 *)(_UNK_026f7fa0 + 0x26f7e74));
    func_0x01438628(*(undefined4 *)(_UNK_026f7fa4 + 0x26f7e80));
    func_0x01438628(*(undefined4 *)(_UNK_026f7fa8 + 0x26f7e8c));
    func_0x01438628(*(undefined4 *)(_UNK_026f7fac + 0x26f7e98));
    *pcVar2 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_026f7fb0 + 0x26f7eac);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_026f7fb4 + 0x26f7ec8);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x38),uVar1);
  puVar3 = *(undefined4 **)(_UNK_026f7fb8 + 0x26f7ee8);
  uVar1 = func_0x014388d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_026f7fbc + 0x26f7f04);
  func_0x03b70b60(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x68),uVar1);
  uVar1 = func_0x014388d4(*puVar3);
  func_0x03b70b60(uVar1,0,0,*puVar4);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x84),uVar1);
  *(undefined4 *)(param_1 + 0x88) = **(undefined4 **)(_UNK_026f7fc0 + 0x26f7f50);
  func_0x014385cc();
  uVar1 = func_0x014388d4(*puVar5);
  func_0x03b75a00(uVar1,0,0,*puVar6);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x90),uVar1);
  (*(code *)&SUB_051b0d14)(param_1,0);
  return;
}

