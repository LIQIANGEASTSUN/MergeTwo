/* Ghidra 12.1.2 native pseudocode; RVA 0x421F240; MergeEngine.Model.Configuration.MultipleConfigurableScriptableObjectConfigurationModelBase<T>..ctor; status ok */


undefined1  [16]
MergeEngine_Model_Configuration_MultipleConfigurableScriptableObjectConfigurationModelBase_T____ctor
          (ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = func_0x03d754d0(*(undefined8 *)
                           (*(long *)(*(long *)(**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20
                                               ) + 0xc0) + 0xd0));
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x032809c4();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}

