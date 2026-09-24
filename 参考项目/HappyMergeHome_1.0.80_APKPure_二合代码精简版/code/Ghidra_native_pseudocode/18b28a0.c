
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c28a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_02c0c028 + 0x2c0bb5c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c0c02c + 0x2c0bb70),0);
    func_0x01438628(*(undefined4 *)(_UNK_02c0c030 + 0x2c0bb7c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c034 + 0x2c0bb88));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c038 + 0x2c0bb94));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c03c + 0x2c0bba0));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c040 + 0x2c0bbac));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c044 + 0x2c0bbb8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c048 + 0x2c0bbc4));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c04c + 0x2c0bbd0));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c050 + 0x2c0bbdc));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c054 + 0x2c0bbe8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c058 + 0x2c0bbf4));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c05c + 0x2c0bc00));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c060 + 0x2c0bc0c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c064 + 0x2c0bc18));
    func_0x01438628(*(undefined4 *)(_UNK_02c0c068 + 0x2c0bc24));
    *pcVar5 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_02c0c06c + 0x2c0bc38);
  uVar1 = func_0x014388d4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_02c0c070 + 0x2c0bc4c);
  func_0x024eed9c(uVar1,*puVar8);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x50),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c0c074 + 0x2c0bc6c));
  func_0x04adbda8(uVar1,**(undefined4 **)(_UNK_02c0c078 + 0x2c0bc80));
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x60),uVar1);
  iVar2 = func_0x014386f0(**(undefined4 **)(_UNK_02c0c07c + 0x2c0bca8),4);
  puVar9 = *(undefined4 **)(_UNK_02c0c080 + 0x2c0bcc0);
  iVar3 = func_0x014386f0(*puVar9,2);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(uint *)(iVar3 + 0xc);
  if (uVar4 == 0) {
    func_0x014388e8();
    uVar4 = *(uint *)(iVar3 + 0xc);
  }
  *(undefined4 *)(iVar3 + 0x10) = 0xffffffff;
  if (uVar4 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar3 + 0x14) = 1;
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(int *)(iVar2 + 0x10) = iVar3;
  func_0x014385cc((int *)(iVar2 + 0x10),iVar3);
  iVar3 = func_0x014386f0(*puVar9,2);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(uint *)(iVar3 + 0xc);
  if (uVar4 == 0) {
    func_0x014388e8();
    uVar4 = *(uint *)(iVar3 + 0xc);
  }
  *(undefined4 *)(iVar3 + 0x10) = 1;
  if (uVar4 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar3 + 0x14) = 1;
  if (*(uint *)(iVar2 + 0xc) < 2) {
    func_0x014388e8();
  }
  *(int *)(iVar2 + 0x14) = iVar3;
  func_0x014385cc((int *)(iVar2 + 0x14),iVar3);
  iVar3 = func_0x014386f0(*puVar9,2);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(uint *)(iVar3 + 0xc);
  if (uVar4 == 0) {
    func_0x014388e8();
    uVar4 = *(uint *)(iVar3 + 0xc);
  }
  *(undefined4 *)(iVar3 + 0x10) = 0xffffffff;
  if (uVar4 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar3 + 0x14) = 0xffffffff;
  if (*(uint *)(iVar2 + 0xc) < 3) {
    func_0x014388e8();
  }
  *(int *)(iVar2 + 0x18) = iVar3;
  func_0x014385cc((int *)(iVar2 + 0x18),iVar3);
  iVar3 = func_0x014386f0(*puVar9,2);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(uint *)(iVar3 + 0xc);
  if (uVar4 == 0) {
    func_0x014388e8();
    uVar4 = *(uint *)(iVar3 + 0xc);
  }
  *(undefined4 *)(iVar3 + 0x10) = 1;
  if (uVar4 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar3 + 0x14) = 0xffffffff;
  if (*(uint *)(iVar2 + 0xc) < 4) {
    func_0x014388e8();
  }
  *(int *)(iVar2 + 0x1c) = iVar3;
  func_0x014385cc((int *)(iVar2 + 0x1c),iVar3);
  *(int *)(param_1 + 100) = iVar2;
  func_0x014385cc((int *)(param_1 + 100),iVar2);
  puVar9 = *(undefined4 **)(_UNK_02c0c084 + 0x2c0be8c);
  *(undefined4 *)(param_1 + 0x68) = 0x23;
  uVar1 = func_0x014388d4(*puVar9);
  puVar6 = *(undefined4 **)(_UNK_02c0c088 + 0x2c0bea4);
  func_0x024f0510(uVar1,*puVar6);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x6c),uVar1);
  uVar1 = func_0x014388d4(*puVar9);
  func_0x024f0510(uVar1,*puVar6);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x70),uVar1);
  uVar1 = func_0x014388d4(*puVar7);
  func_0x024eed9c(uVar1,*puVar8);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x74),uVar1);
  puVar9 = *(undefined4 **)(_UNK_02c0c08c + 0x2c0bf10);
  *(undefined1 *)(param_1 + 0x84) = 1;
  uVar1 = func_0x014388d4(*puVar9);
  func_0x024eed9c(uVar1,**(undefined4 **)(_UNK_02c0c090 + 0x2c0bf28));
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0xac),uVar1);
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  puVar9 = *(undefined4 **)(_UNK_02c0c094 + 0x2c0bf54);
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  uVar1 = func_0x014388d4(*puVar9);
  func_0x024efa54(uVar1,**(undefined4 **)(_UNK_02c0c098 + 0x2c0bf6c));
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0xcc),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c0c09c + 0x2c0bf90));
  func_0x04721f44(uVar1,**(undefined4 **)(_UNK_02c0c0a0 + 0x2c0bfa4));
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0xd0),uVar1);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c0c0a4 + 0x2c0bfc8));
  func_0x046cbdc8(uVar1,**(undefined4 **)(_UNK_02c0c0a8 + 0x2c0bfdc));
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0xd4),uVar1);
  uVar1 = func_0x014388d4(*puVar7);
  func_0x024eed9c(uVar1,*puVar8);
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0xd8),uVar1);
  (*(code *)&UNK_05d40524)(param_1,0);
  return;
}

