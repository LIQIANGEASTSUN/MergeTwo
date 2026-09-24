/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8434C; Merger.MergeBoard.Logic.ToolSpawnHandler.GetFilteredTools; status ok */


undefined8
Merger_MergeBoard_Logic_ToolSpawnHandler__GetFilteredTools
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_07831be8;
  puVar2 = PTR_DAT_077800a8;
  puVar1 = PTR_DAT_077800a0;
  if ((bRam0000000007e2a77e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831be8);
    func_0x03280a18(PTR_DAT_077800a8);
    param_1 = func_0x03280a18(PTR_DAT_077800a0);
    bRam0000000007e2a77e = 1;
  }
  uVar4 = func_0x06b848d8(param_1,param_3);
  uVar4 = func_0x03d87b94(param_2,uVar4,*(undefined8 *)puVar1);
  uVar4 = func_0x03d601c0(uVar4,*(undefined8 *)puVar2);
  uVar5 = func_0x03ce8520(uVar4,*(undefined8 *)puVar3);
  if ((uVar5 & 1) == 0) {
    param_2 = uVar4;
  }
  return param_2;
}

