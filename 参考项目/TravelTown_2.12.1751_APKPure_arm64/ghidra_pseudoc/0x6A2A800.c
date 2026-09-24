/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2A800; MergeEngine.Configuration.Definitions.ResourceMultiple.IsTool; status ok */


bool MergeEngine_Configuration_Definitions_ResourceMultiple__IsTool(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_077bf888;
  if ((bRam0000000007e2a434 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077bf888);
    bRam0000000007e2a434 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  return iVar1 - 7U < 10;
}

