/* Ghidra 12.1.2 native pseudocode; RVA 0x613EF4C; MergeEngine.Model.Configuration.MergingConfigurationModel.GetPreviousItemFromGraph; status ok */


/* WARNING: Possible PIC construction at 0x0623e6a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0623e6a4) */
/* WARNING: Removing unreachable block (ram,0x0623e6a8) */
/* WARNING: Removing unreachable block (ram,0x0623e6d8) */
/* WARNING: Removing unreachable block (ram,0x0623e704) */
/* WARNING: Removing unreachable block (ram,0x0623e70c) */
/* WARNING: Removing unreachable block (ram,0x0623e734) */
/* WARNING: Removing unreachable block (ram,0x0623e718) */
/* WARNING: Removing unreachable block (ram,0x0623e724) */
/* WARNING: Removing unreachable block (ram,0x0623e740) */
/* WARNING: Removing unreachable block (ram,0x0623e774) */
/* WARNING: Removing unreachable block (ram,0x0623e7a0) */
/* WARNING: Removing unreachable block (ram,0x0623e7a8) */
/* WARNING: Removing unreachable block (ram,0x0623e7d0) */
/* WARNING: Removing unreachable block (ram,0x0623e7b4) */
/* WARNING: Removing unreachable block (ram,0x0623e7c0) */
/* WARNING: Removing unreachable block (ram,0x0623e7dc) */
/* WARNING: Removing unreachable block (ram,0x0623e7ec) */
/* WARNING: Removing unreachable block (ram,0x0623e804) */
/* WARNING: Removing unreachable block (ram,0x0623e80c) */
/* WARNING: Removing unreachable block (ram,0x0623e83c) */
/* WARNING: Removing unreachable block (ram,0x0623e844) */
/* WARNING: Removing unreachable block (ram,0x0623e86c) */
/* WARNING: Removing unreachable block (ram,0x0623e850) */
/* WARNING: Removing unreachable block (ram,0x0623e85c) */
/* WARNING: Removing unreachable block (ram,0x0623e878) */
/* WARNING: Removing unreachable block (ram,0x0623e8ac) */
/* WARNING: Removing unreachable block (ram,0x0623e888) */
/* WARNING: Removing unreachable block (ram,0x0414419c) */
/* WARNING: Removing unreachable block (ram,0x041441b8) */
/* WARNING: Removing unreachable block (ram,0x041441c0) */
/* WARNING: Removing unreachable block (ram,0x041441e8) */
/* WARNING: Removing unreachable block (ram,0x041441c8) */
/* WARNING: Removing unreachable block (ram,0x041441ec) */
/* WARNING: Removing unreachable block (ram,0x04144210) */
/* WARNING: Removing unreachable block (ram,0x04144218) */
/* WARNING: Removing unreachable block (ram,0x04144254) */
/* WARNING: Removing unreachable block (ram,0x04144220) */
/* WARNING: Removing unreachable block (ram,0x04144258) */
/* WARNING: Removing unreachable block (ram,0x04144270) */
/* WARNING: Removing unreachable block (ram,0x0414427c) */
/* WARNING: Removing unreachable block (ram,0x0414428c) */
/* WARNING: Removing unreachable block (ram,0x04144298) */
/* WARNING: Removing unreachable block (ram,0x041442ac) */
/* WARNING: Removing unreachable block (ram,0x041442a4) */
/* WARNING: Removing unreachable block (ram,0x041442b4) */
/* WARNING: Removing unreachable block (ram,0x0414422c) */
/* WARNING: Removing unreachable block (ram,0x041441d4) */

void MergeEngine_Model_Configuration_MergingConfigurationModel__GetPreviousItemFromGraph
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  double dVar3;
  
  if (cRam0000000007e24624 == '\0') {
    func_0x03280a18(PTR_DAT_0774ee08);
    cRam0000000007e24624 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  dVar3 = (double)func_0x05797280((double)param_3,0x4000000000000000,0);
  puVar2 = PTR_DAT_077db350;
  iVar1 = -0x80000000;
  if ((float)dVar3 != INFINITY) {
    iVar1 = (int)dVar3;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  if ((bRam0000000007e245b1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248,param_2,-iVar1);
    func_0x03280a18(PTR_DAT_077db358);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_077db340);
    func_0x03280a18(PTR_DAT_077db360);
    func_0x03280a18(PTR_DAT_077db350);
    bRam0000000007e245b1 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar2);
  return;
}

