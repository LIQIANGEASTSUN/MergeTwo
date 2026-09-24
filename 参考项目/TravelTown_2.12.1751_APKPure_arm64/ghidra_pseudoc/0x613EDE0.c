/* Ghidra 12.1.2 native pseudocode; RVA 0x613EDE0; MergeEngine.Model.Configuration.MergingConfigurationModel.GetGatewayFloatingTextKey; status ok */


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

undefined1  [16]
MergeEngine_Model_Configuration_MergingConfigurationModel__GetGatewayFloatingTextKey
          (long *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((bRam0000000007e245b4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0774e5d8);
    bRam0000000007e245b4 = 1;
  }
  auVar12 = func_0x0623eca4(param_1,param_2);
  if ((auVar12._0_8_ & 1) == 0) {
    auVar12._0_8_ = **(undefined8 **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    return auVar12;
  }
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0623eeb0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_0623eeb0:
    uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    uVar6 = *(undefined8 *)(*param_1 + 0x4e0);
    plVar5 = (long *)(**(code **)(*param_1 + 0x4d8))(param_1,uVar4,uVar6);
    param_3 = (int)uVar6;
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x18) * 0x10 + 0x138);
            goto LAB_0623ef34;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777c248,0x18);
LAB_0623ef34:
                    /* WARNING: Could not recover jumptable at 0x0623ef44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar12 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      return auVar12;
    }
  }
  func_0x03280cac();
  if (cRam0000000007e24624 == '\0') {
    func_0x03280a18(PTR_DAT_0774ee08);
    cRam0000000007e24624 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  dVar10 = (double)func_0x05797280((double)param_3,0x4000000000000000,0);
  puVar2 = PTR_DAT_077db350;
  iVar1 = -0x80000000;
  if ((float)dVar10 != INFINITY) {
    iVar1 = (int)dVar10;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  if ((bRam0000000007e245b1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248,extraout_x1,-iVar1);
    func_0x03280a18(PTR_DAT_077db358);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_077db340);
    func_0x03280a18(PTR_DAT_077db360);
    func_0x03280a18(PTR_DAT_077db350);
    bRam0000000007e245b1 = 1;
  }
  auVar11._0_8_ = func_0x03280ca0(*(undefined8 *)puVar2);
  auVar11._8_8_ = 0;
  return auVar11;
}

