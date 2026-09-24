/* Ghidra 12.1.2 native pseudocode; RVA 0x6A860D4; Merger.MergeBoard.Logic.CombineValidators.AnyItemCombinerValidator.CanCombineItems; status ok */


ulong Merger_MergeBoard_Logic_CombineValidators_AnyItemCombinerValidator__CanCombineItems
                (long *param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *extraout_x1;
  long *plVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined *unaff_x23;
  undefined1 auVar12 [16];
  undefined8 auStack_140 [6];
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long *plStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *aplStack_b0 [6];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000007e2a79d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07831028);
    func_0x03280a18(PTR_DAT_07831030);
    func_0x03280a18(PTR_DAT_0777a520);
    func_0x03280a18(PTR_DAT_07831758);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2a79d = 1;
  }
  puVar2 = PTR_DAT_07831758;
  uVar3 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_06b86480;
  uVar5 = func_0x03d1f57c(param_2,&uStack_40,*(undefined8 *)PTR_DAT_07831758);
  if (((uVar5 & 1) != 0) &&
     (uVar5 = func_0x03d1f57c(param_3,&uStack_50,*(undefined8 *)puVar2), puVar2 = PTR_DAT_0777a520,
     (uVar5 & 1) != 0)) {
    plVar8 = *(long **)PTR_DAT_0777a520;
    uVar5 = func_0x03d1e508(param_2,&uStack_68);
    if ((uVar5 & 1) != 0) {
      plVar8 = *(long **)puVar2;
      uVar5 = func_0x03d1e508(param_3,&uStack_80);
      if (((uVar5 & 1) != 0) && ((char)uStack_68 != '\0' || (char)uStack_80 != '\0'))
      goto LAB_06b8647c;
    }
    if (((int)uStack_40 == 1) != ((int)uStack_50 == 1)) {
      if ((int)uStack_40 != 0) {
        param_2 = param_3;
      }
      func_0x03d1b250(aplStack_b0,param_2,*(undefined8 *)PTR_DAT_0777a488);
      puVar2 = PTR_DAT_0777a498;
      plStack_d0 = (long *)param_1[2];
      if (plStack_d0 == (long *)0x0) {
LAB_06b8652c:
        func_0x03280cac();
        uStack_e0 = 0x6b86530;
        plVar7 = plVar8;
        plStack_c8 = param_2;
        plStack_c0 = param_3;
        plStack_b8 = param_1;
        if ((bRam0000000007e2a79e & 1) == 0) {
          func_0x03280a18(PTR_DAT_077c1d88);
          bRam0000000007e2a79e = 1;
        }
        puVar2 = PTR_DAT_077c1d88;
        puStack_100 = (undefined *)0x7e2a000;
        if (plVar8 != (long *)0x0) {
          lVar9 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077c1d88) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x5f) * 0x10 + 0x138);
                goto LAB_06b865c4;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b865c4:
          uVar3 = (uint)param_4;
          (*(code *)*puVar6)(plVar8,uVar3 & 1,puVar6[1]);
          lVar9 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 9) * 0x10 + 0x138);
                goto LAB_06b86624;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar2,9);
LAB_06b86624:
          plVar7 = (long *)puVar6[1];
          (*(code *)*puVar6)(plVar8,uVar3 & 1);
          puStack_100 = puVar2;
          if (extraout_x1 != (long *)0x0) {
            lVar9 = *extraout_x1;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 9) * 0x10 + 0x138);
                  goto LAB_06b86688;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar2,9);
LAB_06b86688:
                    /* WARNING: Could not recover jumptable at 0x06b866a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (*(code *)*puVar6)(extraout_x1,uVar3 & 1,puVar6[1]);
            return uVar5;
          }
        }
        auVar12 = func_0x03280cac();
        uStack_110 = 0x6b866a8;
        puStack_108 = unaff_x23;
        plStack_f8 = plVar8;
        plStack_f0 = extraout_x1;
        uStack_e8 = param_4 & 0xffffffff;
        if ((bRam0000000007e2a79f & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777a488);
          func_0x03280a18(PTR_DAT_07830dd8);
          func_0x03280a18(PTR_DAT_0777a498);
          bRam0000000007e2a79f = 1;
        }
        if ((plVar7 != (long *)0x0) &&
           (iVar4 = func_0x03d1b52c(plVar7,*(undefined8 *)PTR_DAT_07830dd8),
           puVar2 = PTR_DAT_0777a488, auVar12._8_8_ != 0)) {
          func_0x03d1b250(auStack_140,auVar12._8_8_,*(undefined8 *)PTR_DAT_0777a488);
          uVar1 = auStack_140[0];
          func_0x03d1b250(auStack_140,plVar7,*(undefined8 *)puVar2);
          plVar8 = *(long **)(auVar12._0_8_ + 0x10);
          if (plVar8 != (long *)0x0) {
            lVar9 = *plVar8;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
                  goto LAB_06b867ac;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,0xd);
LAB_06b867ac:
            if (iVar4 != 1) {
              uVar1 = auStack_140[0];
            }
            uVar5 = (*(code *)*puVar6)(plVar8,uVar1,puVar6[1]);
            return uVar5;
          }
        }
        uVar5 = func_0x03280cac();
        return uVar5;
      }
      lVar9 = *plStack_d0;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_06b862a8;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plStack_d0,*(long *)PTR_DAT_0777a498,9);
LAB_06b862a8:
      plVar8 = (long *)puVar6[1];
      plVar7 = (long *)(*(code *)*puVar6)(plStack_d0,aplStack_b0[0]);
      param_3 = aplStack_b0[0];
      unaff_x23 = puVar2;
      if (plVar7 == (long *)0x0) goto LAB_06b8652c;
      lVar9 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777e548) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x14) * 0x10 + 0x138);
            goto LAB_06b86318;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      plVar8 = (long *)0x14;
      puVar6 = (undefined8 *)func_0x03256b10(plVar7);
LAB_06b86318:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar5 & 1) != 0) {
        uVar3 = 1;
        goto LAB_06b86480;
      }
      uVar5 = func_0x03d1be30(param_2,*(undefined8 *)PTR_DAT_07831028);
      if (((uVar5 & 1) == 0) &&
         (uVar5 = func_0x03d1bec8(param_2,*(undefined8 *)PTR_DAT_07831030), (uVar5 & 1) == 0)) {
        plVar11 = (long *)param_1[2];
        param_2 = (long *)0x0;
        plStack_d0 = plVar7;
        if (plVar11 == (long *)0x0) goto LAB_06b8652c;
        lVar9 = *plVar11;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
              goto LAB_06b863b8;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar2,0xd);
LAB_06b863b8:
        plVar8 = (long *)puVar6[1];
        param_2 = (long *)(*(code *)*puVar6)(plVar11,aplStack_b0[0]);
        if (param_2 != (long *)0x0) {
          lVar9 = *param_2;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_06b86424;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          plVar8 = (long *)0x0;
          puVar6 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b86424:
          lVar9 = (*(code *)*puVar6)(param_2,puVar6[1]);
          if (lVar9 != 0) {
            param_1 = (long *)param_1[2];
            if (param_1 != (long *)0x0) {
              lVar9 = *param_1;
              uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar5 != 0) {
                piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                    puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                    goto LAB_06b864a8;
                  }
                  uVar5 = uVar5 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar5 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(param_1,*(long *)puVar2,4);
LAB_06b864a8:
              plVar8 = (long *)puVar6[1];
              plVar7 = (long *)(*(code *)*puVar6)(param_1,aplStack_b0[0]);
              if (plVar7 != (long *)0x0) {
                lVar9 = *plVar7;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777c248) {
                      puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
                      goto LAB_06b86518;
                    }
                    uVar5 = uVar5 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar5 != 0);
                }
                puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777c248,0xb);
LAB_06b86518:
                uVar3 = (*(code *)*puVar6)(plVar7,puVar6[1]);
                uVar3 = uVar3 ^ 1;
                goto LAB_06b86480;
              }
            }
            goto LAB_06b8652c;
          }
        }
      }
    }
  }
LAB_06b8647c:
  uVar3 = 0;
LAB_06b86480:
  return (ulong)(uVar3 & 1);
}

