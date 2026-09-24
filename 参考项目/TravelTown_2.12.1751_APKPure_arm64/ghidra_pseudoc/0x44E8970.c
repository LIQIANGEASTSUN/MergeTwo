/* Ghidra 12.1.2 native pseudocode; RVA 0x44E8970; MergeEngine.ECS.Components.SerializableComponent<TSerializable>.GetSerialize; status ok */


void MergeEngine_ECS_Components_SerializableComponent_TSerializable___GetSerialize
               (long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((bRam0000000007e18ff9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777b110);
    bRam0000000007e18ff9 = 1;
  }
  plVar1 = (long *)func_0x03280a38(param_1,*(undefined8 *)
                                            (**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80));
  if (*plVar1 == 0) {
    uVar2 = func_0x03d754d0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10));
    func_0x02f17738(param_1,*(undefined8 *)(**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80),
                    uVar2);
    puVar3 = (undefined8 *)
             func_0x03280a38(param_1,*(undefined8 *)
                                      (**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80));
    uVar2 = *puVar3;
    if (*(int *)(*(long *)PTR_DAT_0777b110 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x03e6e2e8(uVar2,0,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30));
  }
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x045e8a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40))(param_1);
  return;
}

