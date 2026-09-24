
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be88dc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_02be8b5c + 0x2be88f0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be8b60 + 0x2be8904));
    func_0x01438628(*(undefined4 *)(_UNK_02be8b64 + 0x2be8910));
    func_0x01438628(*(undefined4 *)(_UNK_02be8b68 + 0x2be891c));
    func_0x01438628(*(undefined4 *)(_UNK_02be8b6c + 0x2be8928));
    func_0x01438628(*(undefined4 *)(_UNK_02be8b70 + 0x2be8934));
    func_0x01438628(*(undefined4 *)(_UNK_02be8b74 + 0x2be8940));
    func_0x01438628(*(undefined4 *)(_UNK_02be8b78 + 0x2be894c));
    func_0x01438628(*(undefined4 *)(_UNK_02be8b7c + 0x2be8958));
    func_0x01438628(*(undefined4 *)(_UNK_02be8b80 + 0x2be8964));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02be8b84 + 0x2be8978));
  func_0x024f30e0(uVar1,0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x10),uVar1);
  puVar5 = *(undefined4 **)(_UNK_02be8b88 + 0x2be89a4);
  uVar1 = func_0x014388d4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_02be8b8c + 0x2be89b8);
  func_0x046c19b0(uVar1,*puVar6);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x1c),uVar1);
  uVar1 = *puVar5;
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar1 = func_0x014388d4(uVar1);
  func_0x046c19b0(uVar1,*puVar6);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x24),uVar1);
  puVar5 = *(undefined4 **)(_UNK_02be8b90 + 0x2be8a08);
  uVar1 = func_0x014386f0(*puVar5,3);
  func_0x024eec98(uVar1,**(undefined4 **)(_UNK_02be8b94 + 0x2be8a20),0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x28),uVar1);
  iVar2 = func_0x014386f0(*puVar5,2);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0xc);
  if (uVar3 == 0) {
    func_0x014388e8();
    uVar3 = *(uint *)(iVar2 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x526d;
  if (uVar3 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x14) = 0x5277;
  *(int *)(param_1 + 0x2c) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x2c),iVar2);
  iVar2 = func_0x014386f0(*puVar5,2);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0xc);
  if (uVar3 == 0) {
    func_0x014388e8();
    uVar3 = *(uint *)(iVar2 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x5a3d;
  if (uVar3 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x14) = 0x5a47;
  *(int *)(param_1 + 0x30) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x30),iVar2);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02be8b98 + 0x2be8afc));
  func_0x046cbdc8(uVar1,**(undefined4 **)(_UNK_02be8b9c + 0x2be8b10));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x34),uVar1);
  if (*(int *)(**(int **)(_UNK_02be8ba0 + 0x2be8b34) + 0x74) == 0) {
    func_0x014387a4();
  }
  (*(code *)&UNK_04e4a76c)(param_1,**(undefined4 **)(_UNK_02be8ba4 + 0x2be8b50));
  return;
}

