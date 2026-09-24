// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemData.CloneAsLocked 0x1112E00; public ItemData CloneAsLocked(ItemObject lockedObjectToUse) {
// Image base: 0x10000; Ghidra address: 01122e00; native size hint: 0x54


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemData_CloneAsLocked_01112E00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pcVar5 = (char *)(_UNK_01122f2c + 0x1122e1c);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_01122f30 + 0x1122e30));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x00f6b3c4(**(undefined4 **)(_UNK_01122f34 + 0x1122e48));
  func_0x0112578c();
  uVar8 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = *(undefined4 *)(param_1 + 0xb8);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  *(undefined4 *)(iVar1 + 0xb8) = uVar2;
  *(undefined8 *)(iVar1 + 0xb0) = uVar8;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(iVar1 + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  uVar7 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(iVar1 + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  uVar6 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(iVar1 + 0xa0) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(iVar1 + 0xa8) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(iVar1 + 0x24) = param_2;
  *(undefined4 *)(iVar1 + 0x4c) = uVar4;
  *(undefined4 *)(iVar1 + 0x14) = uVar3;
  *(undefined4 *)(iVar1 + 0x9c) = uVar6;
  *(undefined4 *)(iVar1 + 0x68) = uVar7;
  *(undefined4 *)(iVar1 + 0xac) = uVar2;
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  uVar2 = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(iVar1 + 0xdc) = uVar2;
  uVar8 = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(iVar1 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(iVar1 + 0x34) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x3c);
  uVar9 = *(undefined8 *)(param_1 + 0x44);
  *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined8 *)(iVar1 + 0x3c) = uVar8;
  *(undefined8 *)(iVar1 + 0x44) = uVar9;
  return iVar1;
}

