/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8809C; Merger.MergeBoard.Logic.CombineValidators.SplitterItemCombinerValidator.CanBeSplit; status ok */


ulong Merger_MergeBoard_Logic_CombineValidators_SplitterItemCombinerValidator__CanBeSplit
                (long param_1,undefined8 param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *extraout_x1;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  
  if ((bRam0000000007e2a7ad & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a7ad = 1;
  }
  uVar3 = func_0x055f7aac(param_2,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  plVar12 = *(long **)(param_1 + 0x10);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x19) * 0x10 + 0x138);
          goto LAB_06b88144;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,0x19);
LAB_06b88144:
    iVar2 = (*(code *)*puVar4)(plVar12,param_2,puVar4[1]);
    return (ulong)(1 < iVar2);
  }
  auVar14 = func_0x03280cac();
  uVar5 = auVar14._0_8_;
  if (auVar14._8_4_ == 1) {
    puVar4 = (undefined8 *)func_0x072ce910(uVar5);
    uVar5 = func_0x03280a2c(PTR_DAT_0774e4d8);
    uVar3 = func_0x032810d8(uVar5,*(undefined8 *)*puVar4);
    if ((uVar3 & 1) == 0) {
      puVar8 = (undefined8 *)func_0x072ce930(8);
      *puVar8 = *puVar4;
      param_3 = (long *)0x0;
      func_0x072ce940(puVar8,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    }
    else {
      plVar12 = (long *)*puVar4;
      func_0x072ce920();
      if (plVar12 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
        uVar6 = func_0x03280a2c(PTR_DAT_07831d68);
        uVar7 = func_0x03280a2c(PTR_DAT_0774f328);
        uVar5 = func_0x055f7acc(uVar6,param_2,uVar7,uVar5,0);
        lVar9 = func_0x03280a2c(PTR_DAT_0774e598);
        if (*(int *)(lVar9 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x06fa8580(uVar5,0);
        return 0;
      }
    }
    uVar5 = func_0x03280cac();
    func_0x072ce920();
  }
  func_0x03365958(uVar5);
  func_0x02f09514();
  if ((bRam0000000007e2a7ab & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2a7ab = 1;
  }
  puVar1 = PTR_DAT_077c1d88;
  if (param_3 != (long *)0x0) {
    lVar9 = *param_3;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077c1d88) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x5f) * 0x10 + 0x138);
          goto LAB_06b882f0;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b882f0:
    (*(code *)*puVar4)(param_3,param_4 & 1,puVar4[1]);
    lVar10 = *param_3;
    lVar9 = *(long *)puVar1;
    uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar9) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_06b88350;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_3,lVar9,9);
LAB_06b88350:
    (*(code *)*puVar4)(param_3,param_4 & 1,puVar4[1]);
    if (extraout_x1 != (long *)0x0) {
      lVar10 = *extraout_x1;
      lVar9 = *(long *)puVar1;
      uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_06b883b4;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(extraout_x1,lVar9,9);
LAB_06b883b4:
                    /* WARNING: Could not recover jumptable at 0x06b883cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar4)(extraout_x1,param_4 & 1,puVar4[1]);
      return uVar3;
    }
  }
  auVar13 = func_0x03280cac();
  if ((bRam0000000007e2a7ac & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2a7ac = 1;
  }
  plVar12 = *(long **)(auVar13._0_8_ + 0x10);
  if (plVar12 == (long *)0x0) {
    uVar3 = func_0x03280cac();
    return uVar3;
  }
  lVar9 = *plVar12;
  uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar3 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x11) * 0x10 + 0x138);
        goto LAB_06b88470;
      }
      uVar3 = uVar3 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,0x11);
LAB_06b88470:
  plVar12 = (long *)(*(code *)*puVar4)(plVar12,auVar13._8_8_,puVar4[1]);
  if (plVar12 == (long *)0x0) {
    return 0;
  }
  lVar9 = *plVar12;
  uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar3 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779820) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_06b884e8;
      }
      uVar3 = uVar3 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07779820,0);
LAB_06b884e8:
                    /* WARNING: Could not recover jumptable at 0x06b884f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  return uVar3;
}

