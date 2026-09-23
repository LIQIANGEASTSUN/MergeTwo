// MergeValidator_CanMergeSame RVA 0x6A87820
// 06b87820


ulong target_MergeValidator_CanMergeSame
                (long param_1,int param_2,undefined8 param_3,uint param_4,undefined8 param_5,
                undefined8 *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *extraout_x1;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined1 auVar14 [12];
  
  puVar3 = param_6;
  puVar7 = param_7;
  uVar5 = param_4;
  if ((bRam0000000007e2a7a8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2a7a8 = 1;
  }
  if (param_2 == 0 && param_4 == 0) {
    uVar4 = 0;
    uVar2 = func_0x055ea870(*param_6,*param_7);
    if ((uVar2 & 1) != 0) {
      plVar11 = *(long **)(param_1 + 0x10);
      if (plVar11 == (long *)0x0) {
        auVar14 = func_0x03280cac();
        uVar6 = uVar5;
        if ((bRam0000000007e2a7a9 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777a498);
          func_0x03280a18(PTR_DAT_07779820);
          bRam0000000007e2a7a9 = 1;
        }
        if ((auVar14._8_4_ == 3) || (puVar7 = puVar3, uVar4 = param_5, uVar5 == 3)) {
          uVar12 = *puVar7;
          plVar11 = (long *)0x0;
          uVar2 = func_0x055ea870(uVar12,uVar4);
          if ((uVar2 & 1) != 0) {
            plVar13 = *(long **)(auVar14._0_8_ + 0x10);
            if (plVar13 == (long *)0x0) {
              func_0x03280cac();
              if ((bRam0000000007e2a7a7 & 1) == 0) {
                func_0x03280a18(PTR_DAT_077c1d88);
                bRam0000000007e2a7a7 = 1;
              }
              puVar1 = PTR_DAT_077c1d88;
              if (plVar11 != (long *)0x0) {
                lVar8 = *plVar11;
                uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar2 != 0) {
                  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077c1d88) {
                      puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x5f) * 0x10 + 0x138);
                      goto LAB_06b87bb4;
                    }
                    uVar2 = uVar2 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar2 != 0);
                }
                puVar3 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b87bb4:
                (*(code *)*puVar3)(plVar11,uVar6 & 1,puVar3[1]);
                lVar9 = *plVar11;
                lVar8 = *(long *)puVar1;
                uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar2 != 0) {
                  piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == lVar8) {
                      puVar3 = (undefined8 *)(lVar9 + (long)(*piVar10 + 9) * 0x10 + 0x138);
                      goto LAB_06b87c14;
                    }
                    uVar2 = uVar2 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar2 != 0);
                }
                puVar3 = (undefined8 *)func_0x03256b10(plVar11,lVar8,9);
LAB_06b87c14:
                (*(code *)*puVar3)(plVar11,uVar6 & 1,puVar3[1]);
                if (extraout_x1 != (long *)0x0) {
                  lVar9 = *extraout_x1;
                  lVar8 = *(long *)puVar1;
                  uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar2 != 0) {
                    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == lVar8) {
                        puVar3 = (undefined8 *)(lVar9 + (long)(*piVar10 + 9) * 0x10 + 0x138);
                        goto LAB_06b87c78;
                      }
                      uVar2 = uVar2 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar2 != 0);
                  }
                  puVar3 = (undefined8 *)func_0x03256b10(extraout_x1,lVar8,9);
LAB_06b87c78:
                    /* WARNING: Could not recover jumptable at 0x06b87c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar2 = (*(code *)*puVar3)(extraout_x1,uVar6 & 1,puVar3[1]);
                  return uVar2;
                }
              }
              uVar2 = func_0x03280cac();
              return uVar2;
            }
            lVar8 = *plVar13;
            uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar2 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
                  puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
                  goto LAB_06b87a84;
                }
                uVar2 = uVar2 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777a498,0xd);
LAB_06b87a84:
            plVar11 = (long *)(*(code *)*puVar3)(plVar13,uVar12,puVar3[1]);
            if (plVar11 == (long *)0x0) {
              return 0;
            }
            lVar8 = *plVar11;
            uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar2 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
                  puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_06b87af0;
                }
                uVar2 = uVar2 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07779820,0);
LAB_06b87af0:
            lVar8 = (*(code *)*puVar3)(plVar11,puVar3[1]);
            return (ulong)(lVar8 != 0);
          }
        }
        return 0;
      }
      lVar8 = *plVar11;
      uVar4 = *param_6;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
            goto LAB_06b87908;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,0xd);
LAB_06b87908:
      plVar11 = (long *)(*(code *)*puVar3)(plVar11,uVar4,puVar3[1]);
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      lVar8 = *plVar11;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b87974;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07779820,0);
LAB_06b87974:
      lVar8 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      return (ulong)(lVar8 != 0);
    }
  }
  return 0;
}

