/* Ghidra 12.1.2 native pseudocode; RVA 0x6509200; MergeEngine.ECS.Systems.Player.ResourcesSystem.HasPendingReward; status ok */


ulong MergeEngine_ECS_Systems_Player_ResourcesSystem__HasPendingReward
                (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iStack_24;
  
  if ((bRam0000000007e27164 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e668);
    bRam0000000007e27164 = 1;
  }
  iStack_24 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar3 = func_0x04fb40cc(*(long *)(param_1 + 0x50),param_2,&iStack_24,
                            *(undefined8 *)PTR_DAT_0774e668);
    return (ulong)(uVar3 & 0 < iStack_24);
  }
  uVar4 = func_0x03280cac();
  puVar2 = PTR_DAT_0774e748;
  puVar1 = PTR_DAT_0774e740;
  if ((bRam0000000007e27166 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e748);
    func_0x03280a18(PTR_DAT_0774e740);
    bRam0000000007e27166 = 1;
  }
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04fb1810(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(uVar4 + 0x50) = uVar5;
  func_0x032809c4((undefined8 *)(uVar4 + 0x50),uVar5);
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04fb1810(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(uVar4 + 0x58) = uVar5;
  func_0x032809c4((undefined8 *)(uVar4 + 0x58),uVar5);
  return uVar4;
}

