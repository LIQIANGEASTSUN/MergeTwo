/* Ghidra 12.1.2 native pseudocode; RVA 0x6913BC8; MergeEngine.Configuration.MergeItemInstanceConfiguration.CreateBoardConfiguration; status ok */


/* WARNING: Possible PIC construction at 0x06a13c80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06a13c84) */
/* WARNING: Removing unreachable block (ram,0x06a13cf0) */
/* WARNING: Removing unreachable block (ram,0x06a13ca0) */

void MergeEngine_Configuration_MergeItemInstanceConfiguration__CreateBoardConfiguration
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((bRam0000000007e299f4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5c8);
    func_0x03280a18(PTR_DAT_07826da0);
    func_0x03280a18(PTR_DAT_077e6f08);
    bRam0000000007e299f4 = 1;
  }
  puVar1 = PTR_DAT_07826da0;
  if (param_3 == 0) {
    uVar2 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e5c8);
    func_0x061117cc(uVar2,0,0,0,0,0,0,1,0);
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

