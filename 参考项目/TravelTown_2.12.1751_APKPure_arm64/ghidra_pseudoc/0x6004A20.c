/* Ghidra 12.1.2 native pseudocode; RVA 0x6004A20; MergeEngine.Configuration.Definitions.WeakReferences.References.MergeItemWeakReference.Equals; status ok */


ulong MergeEngine_Configuration_Definitions_WeakReferences_References_MergeItemWeakReference__Equals
                (long *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  if ((bRam0000000007e23736 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4f0);
    bRam0000000007e23736 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0777e4f0 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0777e4f0))
    {
                    /* WARNING: Could not recover jumptable at 0x06104abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x268))(param_1,param_2,*(undefined8 *)(*param_1 + 0x270));
      return uVar2;
    }
  }
  return (ulong)(param_1 == param_2);
}

