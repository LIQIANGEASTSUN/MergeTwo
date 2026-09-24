/* Ghidra 12.1.2 native pseudocode; RVA 0x44E86B8; MergeEngine.ECS.Components.SerializableComponent<TSerializable>.get_serializable; status ok */


undefined8
MergeEngine_ECS_Components_SerializableComponent_TSerializable___get_serializable
          (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           func_0x03280a38(param_1,*(undefined8 *)
                                    (**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80));
  return *puVar1;
}

