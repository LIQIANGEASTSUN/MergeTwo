/* Ghidra 12.1.2 native pseudocode; RVA 0x6004AC0; MergeEngine.Configuration.Definitions.WeakReferences.References.MergeItemWeakReference.GetHashCode; status ok */


undefined1  [16]
MergeEngine_Configuration_Definitions_WeakReferences_References_MergeItemWeakReference__GetHashCode
          (long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06104ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,*(undefined8 *)(*plVar2 + 0x160));
    return auVar4;
  }
  auVar4._0_8_ = func_0x03280cac();
  puVar1 = PTR_DAT_077ced68;
  if ((bRam0000000007e23737 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077ced68);
    bRam0000000007e23737 = 1;
  }
  uVar3 = *(undefined8 *)puVar1;
  auVar4._8_8_ = 0;
  return auVar4;
}

