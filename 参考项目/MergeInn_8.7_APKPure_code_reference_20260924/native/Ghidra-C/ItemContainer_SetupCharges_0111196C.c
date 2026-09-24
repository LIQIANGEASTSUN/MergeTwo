// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemContainer.SetupCharges 0x111196C; ItemContainer.SetupCharges (candidate)
// Image base: 0x10000; Ghidra address: 0112196c; native size hint: 0x50


void ItemContainer_SetupCharges_0111196C(int param_1,int param_2)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar3;
  int iVar4;
  
  *(int *)(param_1 + 0xec) = param_2;
  func_0x01118f94(*(undefined4 *)(param_1 + 0x34));
  uVar1 = extraout_r2;
  uVar2 = extraout_r3;
  if (param_2 == 0) {
    func_0x00f6b3d0();
    uVar1 = extraout_r2_00;
    uVar2 = extraout_r3_00;
  }
  iVar4 = *(int *)(param_1 + 0xe8);
  iVar3 = *(int *)(param_2 + 8);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
    uVar1 = extraout_r2_01;
    uVar2 = extraout_r3_01;
  }
  if (iVar3 < *(int *)(iVar4 + 8)) {
    return;
  }
  func_0x011081c0(*(undefined4 *)(param_1 + 0x34),0,uVar1,uVar2,unaff_r4,unaff_r5);
  if (*(int *)(param_1 + 0xc0) != 0) {
    func_0x0111e784(param_1);
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}

