/* Ghidra 12.1.2 native pseudocode; RVA 0x6140700; MergeEngine.Model.Configuration.MergingConfigurationModel.IsItemBoosted; status ok */


/* WARNING: Possible PIC construction at 0x06240768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06240854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0624076c) */
/* WARNING: Removing unreachable block (ram,0x06240784) */
/* WARNING: Removing unreachable block (ram,0x062407a0) */
/* WARNING: Removing unreachable block (ram,0x06240798) */
/* WARNING: Removing unreachable block (ram,0x06240858) */
/* WARNING: Removing unreachable block (ram,0x0624085c) */
/* WARNING: Removing unreachable block (ram,0x062408e0) */
/* WARNING: Removing unreachable block (ram,0x06240878) */
/* WARNING: Removing unreachable block (ram,0x06240894) */
/* WARNING: Removing unreachable block (ram,0x062408b0) */
/* WARNING: Removing unreachable block (ram,0x062408b8) */
/* WARNING: Removing unreachable block (ram,0x062408e8) */
/* WARNING: Removing unreachable block (ram,0x062408c4) */
/* WARNING: Removing unreachable block (ram,0x062408d0) */
/* WARNING: Removing unreachable block (ram,0x062408f4) */
/* WARNING: Removing unreachable block (ram,0x0624097c) */
/* WARNING: Removing unreachable block (ram,0x06240960) */
/* WARNING: Removing unreachable block (ram,0x0624096c) */

undefined8
MergeEngine_Model_Configuration_MergingConfigurationModel__IsItemBoosted
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  
  if ((bRam0000000007e245c2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07763de8);
    bRam0000000007e245c2 = 1;
  }
  if (param_2 == 0) {
    func_0x03280cac();
    param_4 = extraout_x1;
  }
  else {
    uVar2 = func_0x041447fc(param_2,param_3,*(undefined8 *)PTR_DAT_07763de8);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
  }
  puVar1 = PTR_DAT_077db438;
  if ((bRam0000000007e245c3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ffe8,param_4);
    func_0x03280a18(PTR_DAT_07780050);
    func_0x03280a18(PTR_DAT_07780058);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_077db440);
    func_0x03280a18(PTR_DAT_077db438);
    bRam0000000007e245c3 = 1;
  }
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  return uVar3;
}

