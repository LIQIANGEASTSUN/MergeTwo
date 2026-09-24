/* Ghidra 12.1.2 native pseudocode; RVA 0x44E7D3C; MergeEngine.ECS.Components.SerializableComponent<TSerializable>.GetSerialize; status ok */


long MergeEngine_ECS_Components_SerializableComponent_TSerializable___GetSerialize
               (long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((bRam0000000007e18ff0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777b110);
    bRam0000000007e18ff0 = 1;
  }
  plVar2 = param_1 + 4;
  if (*plVar2 == 0) {
    lVar1 = func_0x03d754d0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10));
    *plVar2 = lVar1;
    func_0x032809c4(plVar2,lVar1);
    lVar1 = *plVar2;
    if (*(int *)(*(long *)PTR_DAT_0777b110 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x03e6e2e8(lVar1,0,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
  }
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  return param_1[4];
}

