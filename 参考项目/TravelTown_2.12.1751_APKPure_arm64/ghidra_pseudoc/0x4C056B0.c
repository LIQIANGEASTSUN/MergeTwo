/* Ghidra 12.1.2 native pseudocode; RVA 0x4C056B0; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.<GetToolGraphsFromItems>b__25_1; status ok */


uint MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T____GetToolGraphsFromItems_b__25_1
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  
  if ((bRam0000000007e1ae81 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780148);
    bRam0000000007e1ae81 = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = func_0x04fb62d8(*(long *)(param_1 + 0x78),param_2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)PTR_DAT_07780148 + 0x20) + 0xc0) + 0x110)
                           );
    return ~uVar1 >> 0x1f;
  }
  func_0x03280cac();
  return 0xf;
}

