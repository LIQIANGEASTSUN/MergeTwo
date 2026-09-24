// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemData.CloneAsBoxed 0x1112CF0; ItemData.CloneAsBoxed (candidate)
// Image base: 0x10000; Ghidra address: 01122cf0; native size hint: 0x110


int ItemData_CloneAsBoxed_01112CF0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pcVar6 = (char *)(iRam01122df4 + 0x1122d0c);
  if (*pcVar6 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam01122df8 + 0x1122d20));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x00f6b3c4(**(undefined4 **)(iRam01122dfc + 0x1122d38));
  func_0x0112578c();
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = *(undefined4 *)(param_1 + 0xb8);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  *(undefined4 *)(iVar1 + 0xb8) = uVar2;
  *(undefined8 *)(iVar1 + 0xb0) = uVar9;
  *(undefined4 *)(iVar1 + 0x4c) = 5;
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar8 = *(undefined4 *)(param_1 + 0x68);
  uVar5 = *(undefined4 *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  uVar7 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(iVar1 + 0x28) = param_2;
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = uVar3;
  *(undefined4 *)(iVar1 + 0x9c) = uVar4;
  *(undefined4 *)(iVar1 + 0x68) = uVar8;
  *(undefined4 *)(iVar1 + 0x70) = uVar5;
  *(undefined4 *)(iVar1 + 0xc0) = uVar7;
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  uVar2 = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(iVar1 + 0xdc) = uVar2;
  uVar9 = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(iVar1 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(iVar1 + 0x34) = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 0x3c);
  uVar10 = *(undefined8 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(iVar1 + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(iVar1 + 0xac) = uVar2;
  *(undefined8 *)(iVar1 + 0x3c) = uVar9;
  *(undefined8 *)(iVar1 + 0x44) = uVar10;
  return iVar1;
}

