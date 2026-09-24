/* Ghidra 12.1.2 native pseudocode; RVA 0x68FBF4C; MergeEngine.ECS.Components.Items.CombiningComponent.LoadComponent; status ok */


void MergeEngine_ECS_Components_Items_CombiningComponent__LoadComponent(long param_1,long param_2)

{
  long lVar1;
  
  if ((bRam0000000007e29898 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cda58);
    bRam0000000007e29898 = 1;
  }
  if (param_2 != 0) {
    *(long *)(param_1 + 0x30) = param_2;
    func_0x032809c4((long *)(param_1 + 0x30),param_2);
    lVar1 = func_0x0636fa5c(param_1,0);
    if (lVar1 == 0) {
      func_0x03280cac();
      return;
    }
    if (0 < *(int *)(lVar1 + 0x18)) {
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
  }
  return;
}

