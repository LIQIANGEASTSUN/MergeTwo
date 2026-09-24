/* Ghidra 12.1.2 native pseudocode; RVA 0x45450F0; MergeEngine.ECS.Systems.State.StateSystemBase<TStatePayload>.DisposeSystem; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload___DisposeSystem
          (ulong param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x20);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) == 0)
    {
      func_0x0325681c();
    }
    uVar1 = func_0x03280ca0();
    lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    func_0x054221d4(uVar1,param_1,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x38));
    if (lVar3 != 0) {
      func_0x04d0f3b8(lVar3,uVar1,
                      *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_1;
      return auVar5;
    }
  }
  auVar4 = func_0x03280cac();
  if (auVar4._8_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x04645190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)(*auVar4._0_8_ + 0x208))
                       (auVar4._0_8_,auVar4._8_8_,*(undefined8 *)(*auVar4._0_8_ + 0x210));
    return auVar4;
  }
  auVar4._8_8_ = 0;
  return auVar4;
}

