/* Ghidra 12.1.2 native pseudocode; RVA 0x613E240; MergeEngine.Model.Configuration.MergingConfigurationModel.GetNextItemOnGraph; status ok */


/* WARNING: Possible PIC construction at 0x0623e38c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0623e390) */
/* WARNING: Removing unreachable block (ram,0x0623e394) */
/* WARNING: Removing unreachable block (ram,0x0623e3c4) */
/* WARNING: Removing unreachable block (ram,0x0623e3f0) */
/* WARNING: Removing unreachable block (ram,0x0623e3f8) */
/* WARNING: Removing unreachable block (ram,0x0623e420) */
/* WARNING: Removing unreachable block (ram,0x0623e404) */
/* WARNING: Removing unreachable block (ram,0x0623e410) */
/* WARNING: Removing unreachable block (ram,0x0623e42c) */
/* WARNING: Removing unreachable block (ram,0x0623e460) */
/* WARNING: Removing unreachable block (ram,0x0623e48c) */
/* WARNING: Removing unreachable block (ram,0x0623e494) */
/* WARNING: Removing unreachable block (ram,0x0623e4bc) */
/* WARNING: Removing unreachable block (ram,0x0623e4a0) */
/* WARNING: Removing unreachable block (ram,0x0623e4ac) */
/* WARNING: Removing unreachable block (ram,0x0623e4c8) */
/* WARNING: Removing unreachable block (ram,0x0623e4d8) */
/* WARNING: Removing unreachable block (ram,0x0623e500) */
/* WARNING: Removing unreachable block (ram,0x0623e508) */
/* WARNING: Removing unreachable block (ram,0x0623e530) */
/* WARNING: Removing unreachable block (ram,0x0623e514) */
/* WARNING: Removing unreachable block (ram,0x0623e520) */
/* WARNING: Removing unreachable block (ram,0x0623e53c) */
/* WARNING: Removing unreachable block (ram,0x0623e54c) */
/* WARNING: Removing unreachable block (ram,0x0623e59c) */
/* WARNING: Removing unreachable block (ram,0x0623e55c) */
/* WARNING: Removing unreachable block (ram,0x0623e56c) */
/* WARNING: Removing unreachable block (ram,0x0623e574) */
/* WARNING: Removing unreachable block (ram,0x0623e5b0) */
/* WARNING: Removing unreachable block (ram,0x0623e580) */
/* WARNING: Removing unreachable block (ram,0x0623e58c) */
/* WARNING: Removing unreachable block (ram,0x0623e5bc) */
/* WARNING: Removing unreachable block (ram,0x0623e5ec) */
/* WARNING: Removing unreachable block (ram,0x0623e5cc) */
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

void MergeEngine_Model_Configuration_MergingConfigurationModel__GetNextItemOnGraph
               (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xffffffffffffffe0;
  uVar8 = 0x7e24000;
  if ((bRam0000000007e245af & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e245af = 1;
  }
  if (param_2 == (long *)0x0) {
    unaff_x30 = 0x623e2ec;
    func_0x03280cac();
    unaff_x20 = 0;
    uVar4 = extraout_x1;
  }
  else {
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07779820) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0623e2c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_0623e2c8:
    uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    puVar2 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    uVar8 = unaff_x21;
  }
  puVar1 = PTR_DAT_077db328;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x30;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x18) = uVar8;
  *(undefined8 *)(puVar2 + -0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + -8) = param_1;
  if ((bRam0000000007e245b0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248,uVar4);
    func_0x03280a18(PTR_DAT_077db330);
    func_0x03280a18(PTR_DAT_077db338);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_077db340);
    func_0x03280a18(PTR_DAT_077db348);
    func_0x03280a18(PTR_DAT_077db328);
    bRam0000000007e245b0 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

