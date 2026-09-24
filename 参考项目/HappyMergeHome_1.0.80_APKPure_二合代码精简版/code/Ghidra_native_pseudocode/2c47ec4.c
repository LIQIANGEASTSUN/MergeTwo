
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c57ec4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02c580c4 + 0x2c57ed8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c580c8 + 0x2c57eec));
    func_0x01438628(*(undefined4 *)(_UNK_02c580cc + 0x2c57ef8));
    func_0x01438628(*(undefined4 *)(_UNK_02c580d0 + 0x2c57f04));
    func_0x01438628(*(undefined4 *)(_UNK_02c580d4 + 0x2c57f10));
    func_0x01438628(*(undefined4 *)(_UNK_02c580d8 + 0x2c57f1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c580dc + 0x2c57f28));
    func_0x01438628(*(undefined4 *)(_UNK_02c580e0 + 0x2c57f34));
    func_0x01438628(*(undefined4 *)(_UNK_02c580e4 + 0x2c57f40));
    func_0x01438628(*(undefined4 *)(_UNK_02c580e8 + 0x2c57f4c));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c580ec + 0x2c57f60));
  func_0x024eed9c(uVar1,**(undefined4 **)(_UNK_02c580f0 + 0x2c57f74));
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x6c),uVar1);
  iVar2 = func_0x014386f0(**(undefined4 **)(_UNK_02c580f4 + 0x2c57f9c),4);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar1 = **(undefined4 **)(_UNK_02c580f8 + 0x2c57fbc);
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  func_0x014385cc((undefined4 *)(iVar2 + 0x10),uVar1);
  uVar1 = **(undefined4 **)(_UNK_02c580fc + 0x2c57ff4);
  if (*(uint *)(iVar2 + 0xc) < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x14) = uVar1;
  func_0x014385cc((undefined4 *)(iVar2 + 0x14),uVar1);
  uVar1 = **(undefined4 **)(_UNK_02c58100 + 0x2c58024);
  if (*(uint *)(iVar2 + 0xc) < 3) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x18) = uVar1;
  func_0x014385cc((undefined4 *)(iVar2 + 0x18),uVar1);
  uVar1 = **(undefined4 **)(_UNK_02c58104 + 0x2c58054);
  if (*(uint *)(iVar2 + 0xc) < 4) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  func_0x014385cc((undefined4 *)(iVar2 + 0x1c),uVar1);
  *(int *)(param_1 + 0x104) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x104),iVar2);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c58108 + 0x2c58088));
  func_0x04752f54(uVar1,**(undefined4 **)(_UNK_02c5810c + 0x2c5809c));
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x108),uVar1);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  (*(code *)&UNK_05d40524)(param_1,0);
  return;
}

