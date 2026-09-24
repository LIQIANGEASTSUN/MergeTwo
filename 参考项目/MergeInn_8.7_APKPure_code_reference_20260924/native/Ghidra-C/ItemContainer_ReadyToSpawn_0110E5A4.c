// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemContainer.ReadyToSpawn 0x110E5A4; protected virtual void ReadyToSpawn() {
// Image base: 0x10000; Ghidra address: 0111e5a4; native size hint: 0x3C


void ItemContainer_ReadyToSpawn_0110E5A4(int *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x268))(param_1,*(undefined4 *)(*param_1 + 0x26c));
  iVar2 = param_1[0x25];
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  iVar3 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x00f6b3d0(iVar2,0);
  }
  iVar3 = func_0x02007fd4(iVar3,0);
  if (iVar3 != 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x28) != 0) {
    func_0x02007f68(iVar2,*(int *)(iVar2 + 0x28),0,extraout_r3,unaff_r4);
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  uVar1 = func_0x01531b28(iVar2);
  uVar1 = func_0x02007f6c(iVar2,uVar1,0);
  iVar3 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x28) = uVar1;
  if (iVar3 == 0) {
    func_0x00f6b3d0();
  }
  func_0x02007fbc(iVar3,1,0);
  *(undefined1 *)(iVar2 + 0x1c) = 1;
  return;
}

