/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2A75C; MergeEngine.Configuration.Definitions.ResourceMultiple.GetExtraLogData; status ok */


void MergeEngine_Configuration_Definitions_ResourceMultiple__GetExtraLogData(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uStack_34;
  
  puVar3 = PTR_DAT_0782f0f0;
  puVar2 = PTR_DAT_0782f0e8;
  puVar1 = PTR_DAT_0777a670;
  if ((bRam0000000007e2a433 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a670);
    func_0x03280a18(PTR_DAT_0782f0f0);
    func_0x03280a18(PTR_DAT_0782f0e8);
    bRam0000000007e2a433 = 1;
  }
  uStack_34 = *(undefined4 *)(param_1 + 0x5c);
  uVar4 = func_0x03280b94(*(undefined8 *)puVar1,&uStack_34);
  func_0x055f7edc(*(undefined8 *)puVar2,*(undefined8 *)puVar3,uVar4,0);
  return;
}

