/* Ghidra 12.1.2 native pseudocode; RVA 0x5397834; MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<object>.TryGetExistingItem; status ok */

ulong MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_object___TryGetExistingItem
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5
                )

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((bRam0000000007e1c3cc & 1) == 0) {
    func_0x03280a18(PTR_DAT_07782de0);
    func_0x03280a18(PTR_DAT_07782de8);
    bRam0000000007e1c3cc = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar3 = func_0x03280ca0();
  func_0x04034ff4(lVar3,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50));
  puVar2 = PTR_DAT_07782de8;
  puVar1 = PTR_DAT_07782de0;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_3;
    func_0x032809c4((undefined8 *)(lVar3 + 0x10),param_3);
    uVar4 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x05355fbc(uVar4,lVar3,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x58),
                    0);
    lVar3 = func_0x03d45130(param_2,uVar4,*(undefined8 *)puVar1);
    *param_4 = lVar3;
    func_0x032809c4(param_4,lVar3);
    return (ulong)(*param_4 != 0);
  }
  uVar5 = func_0x03280cac();
  return uVar5;
}

