/* Ghidra 12.1.2 native pseudocode; RVA 0x45F042C; MergeEngine.ECS.Systems.TickableSystem<TComponent>.MergeEngine.ECS.Systems.ITickableSystem.Tick; status ok */


void MergeEngine_ECS_Systems_TickableSystem_TComponent___MergeEngine_ECS_Systems_ITickableSystem_Tick
               (long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    func_0x03280cac();
    return;
  }
  lVar2 = (**(code **)**(undefined8 **)(*(long *)(param_2 + 0x20) + 0xc0))();
  if ((lVar2 != 0) &&
     (iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10))(),
     0 < iVar1)) {
                    /* WARNING: Could not recover jumptable at 0x046f0494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x238))(param_1,lVar2,*(undefined8 *)(*param_1 + 0x240));
    return;
  }
  return;
}

