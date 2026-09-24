/* Ghidra 12.1.2 native pseudocode; RVA 0x613ECA4; MergeEngine.Model.Configuration.MergingConfigurationModel.IsGatewayItem; status ok */


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

undefined8
MergeEngine_Model_Configuration_MergingConfigurationModel__IsGatewayItem
          (long *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000007e245b3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e245b3 = 1;
  }
  if (param_2 == (long *)0x0) {
    auVar12 = func_0x03280cac();
    plVar6 = auVar12._8_8_;
    plVar5 = auVar12._0_8_;
    if ((bRam0000000007e245b4 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_07779820);
      func_0x03280a18(PTR_DAT_0774e5d8);
      bRam0000000007e245b4 = 1;
    }
    uVar9 = MergeEngine_Model_Configuration_MergingConfigurationModel__IsGatewayItem(plVar5,plVar6);
    if ((uVar9 & 1) == 0) {
      return **(undefined8 **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    }
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0623eeb0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07779820,0);
LAB_0623eeb0:
      uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      uVar7 = *(undefined8 *)(*plVar5 + 0x4e0);
      plVar5 = (long *)(**(code **)(*plVar5 + 0x4d8))(plVar5,uVar4,uVar7);
      param_3 = (int)uVar7;
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x18) * 0x10 + 0x138);
              goto LAB_0623ef34;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777c248,0x18);
LAB_0623ef34:
                    /* WARNING: Could not recover jumptable at 0x0623ef44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        return uVar4;
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
    dVar11 = (double)func_0x05797280((double)param_3,0x4000000000000000,0);
    puVar2 = PTR_DAT_077db350;
    iVar1 = -0x80000000;
    if ((float)dVar11 != INFINITY) {
      iVar1 = (int)dVar11;
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
    uVar4 = func_0x03280ca0(*(undefined8 *)puVar2);
    return uVar4;
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0623ed38;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_0623ed38:
  uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
  plVar5 = (long *)(**(code **)(*param_1 + 0x4d8))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x4e0));
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  lVar8 = *plVar5;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777c248) {
        puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x17) * 0x10 + 0x138);
        goto LAB_0623edc8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777c248,0x17);
LAB_0623edc8:
                    /* WARNING: Could not recover jumptable at 0x0623edd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
  return uVar4;
}

