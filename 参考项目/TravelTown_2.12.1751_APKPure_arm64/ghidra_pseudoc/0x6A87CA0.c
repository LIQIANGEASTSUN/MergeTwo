/* Ghidra 12.1.2 native pseudocode; RVA 0x6A87CA0; Merger.MergeBoard.Logic.CombineValidators.SplitterItemCombinerValidator.CanCombineItems; status ok */


/* WARNING: Possible PIC construction at 0x06b88090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b88094) */

ulong Merger_MergeBoard_Logic_CombineValidators_SplitterItemCombinerValidator__CanCombineItems
                (long param_1,long param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *extraout_x1;
  long *plVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined8 auStack_d0 [6];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000007e2a7aa & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07831028);
    func_0x03280a18(PTR_DAT_07831030);
    func_0x03280a18(PTR_DAT_07830748);
    func_0x03280a18(PTR_DAT_0777a520);
    func_0x03280a18(PTR_DAT_07831758);
    func_0x03280a18(PTR_DAT_0777a558);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a7aa = 1;
  }
  uVar2 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_06b88070;
  uVar4 = func_0x06b868e4(param_2);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = func_0x06b868e4(param_3), puVar1 = PTR_DAT_0777a520, (uVar4 & 1) == 0)) {
    uVar4 = func_0x03d1e508(param_2,&uStack_48,*(undefined8 *)PTR_DAT_0777a520);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = func_0x03d1e508(param_3,&uStack_60,*(undefined8 *)puVar1), (uVar4 & 1) != 0)) {
      if ((char)uStack_48 != '\0' || (char)uStack_60 != '\0') goto LAB_06b8806c;
    }
    puVar1 = PTR_DAT_07831758;
    uVar4 = func_0x03d1f57c(param_2,&uStack_70,*(undefined8 *)PTR_DAT_07831758);
    if ((uVar4 & 1) != 0) {
      plVar11 = *(long **)puVar1;
      uVar4 = func_0x03d1f57c(param_3,&uStack_80);
      if ((uVar4 & 1) != 0) {
        if (((int)uStack_70 == 4) != ((int)uStack_80 == 4)) {
          if ((int)uStack_70 != 4) {
            param_3 = param_2;
          }
          uVar4 = func_0x03d1bff8(param_3,*(undefined8 *)PTR_DAT_07830748);
          if ((uVar4 & 1) != 0) {
            plVar11 = *(long **)PTR_DAT_0777a558;
            uVar4 = func_0x03d1fd24(param_3,&uStack_a0);
            if (((uVar4 & 1) != 0) && ((char)uStack_98 != '\0')) goto LAB_06b8806c;
          }
          func_0x03d1b250(auStack_d0,param_3,*(undefined8 *)PTR_DAT_0777a488);
          puVar1 = PTR_DAT_0777a498;
          plVar15 = *(long **)(param_1 + 0x10);
          if (plVar15 != (long *)0x0) {
            lVar12 = *plVar15;
            uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar4 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777a498) {
                  puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                  goto LAB_06b87edc;
                }
                uVar4 = uVar4 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,9);
LAB_06b87edc:
            plVar11 = (long *)puVar5[1];
            plVar15 = (long *)(*(code *)*puVar5)(plVar15,auStack_d0[0]);
            if (plVar15 != (long *)0x0) {
              lVar12 = *plVar15;
              uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar4 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777e548) {
                    puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
                    goto LAB_06b87f4c;
                  }
                  uVar4 = uVar4 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar4 != 0);
              }
              plVar11 = (long *)0x14;
              puVar5 = (undefined8 *)func_0x03256b10(plVar15);
LAB_06b87f4c:
              uVar4 = (*(code *)*puVar5)(plVar15,puVar5[1]);
              if ((uVar4 & 1) != 0) {
                uVar2 = 1;
                goto LAB_06b88070;
              }
              uVar4 = func_0x03d1be30(param_3,*(undefined8 *)PTR_DAT_07831028);
              if (((uVar4 & 1) != 0) ||
                 (uVar4 = func_0x03d1bec8(param_3,*(undefined8 *)PTR_DAT_07831030), (uVar4 & 1) != 0
                 )) goto LAB_06b8806c;
              plVar15 = *(long **)(param_1 + 0x10);
              if (plVar15 != (long *)0x0) {
                lVar12 = *plVar15;
                uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar4 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                      puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                      goto LAB_06b87fec;
                    }
                    uVar4 = uVar4 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar4 != 0);
                }
                puVar5 = (undefined8 *)func_0x03256b10(plVar15,*(long *)puVar1,4);
LAB_06b87fec:
                plVar11 = (long *)puVar5[1];
                plVar15 = (long *)(*(code *)*puVar5)(plVar15,auStack_d0[0]);
                if (plVar15 != (long *)0x0) {
                  lVar12 = *plVar15;
                  uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar4 != 0) {
                    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777c248) {
                        puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
                        goto LAB_06b8805c;
                      }
                      uVar4 = uVar4 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar4 != 0);
                  }
                  plVar11 = (long *)0xb;
                  puVar5 = (undefined8 *)func_0x03256b10(plVar15);
LAB_06b8805c:
                  uVar4 = (*(code *)*puVar5)(plVar15,puVar5[1]);
                  uVar9 = auStack_d0[0];
                  if ((uVar4 & 1) == 0) goto SUB_06b8809c;
                  goto LAB_06b8806c;
                }
              }
            }
          }
          auVar16 = func_0x03280cac();
          param_1 = auVar16._0_8_;
          uVar9 = auVar16._8_8_;
SUB_06b8809c:
          if ((bRam0000000007e2a7ad & 1) == 0) {
            func_0x03280a18(PTR_DAT_0777a498);
            bRam0000000007e2a7ad = 1;
          }
          uVar4 = func_0x055f7aac(uVar9,0);
          if ((uVar4 & 1) != 0) {
            return 0;
          }
          plVar15 = *(long **)(param_1 + 0x10);
          if (plVar15 != (long *)0x0) {
            lVar12 = *plVar15;
            uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar4 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777a498) {
                  puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
                  goto LAB_06b88144;
                }
                uVar4 = uVar4 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,0x19);
LAB_06b88144:
            iVar3 = (*(code *)*puVar5)(plVar15,uVar9,puVar5[1]);
            return (ulong)(1 < iVar3);
          }
          auVar17 = func_0x03280cac();
          uVar6 = auVar17._0_8_;
          if (auVar17._8_4_ == 1) {
            puVar5 = (undefined8 *)func_0x072ce910(uVar6);
            uVar6 = func_0x03280a2c(PTR_DAT_0774e4d8);
            uVar4 = func_0x032810d8(uVar6,*(undefined8 *)*puVar5);
            if ((uVar4 & 1) == 0) {
              puVar10 = (undefined8 *)func_0x072ce930(8);
              *puVar10 = *puVar5;
              plVar11 = (long *)0x0;
              func_0x072ce940(puVar10,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
            }
            else {
              plVar15 = (long *)*puVar5;
              func_0x072ce920();
              if (plVar15 != (long *)0x0) {
                uVar6 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
                uVar7 = func_0x03280a2c(PTR_DAT_07831d68);
                uVar8 = func_0x03280a2c(PTR_DAT_0774f328);
                uVar9 = func_0x055f7acc(uVar7,uVar9,uVar8,uVar6,0);
                lVar12 = func_0x03280a2c(PTR_DAT_0774e598);
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                func_0x06fa8580(uVar9,0);
                return 0;
              }
            }
            uVar6 = func_0x03280cac();
            func_0x072ce920();
          }
          func_0x03365958(uVar6);
          func_0x02f09514();
          if ((bRam0000000007e2a7ab & 1) == 0) {
            func_0x03280a18(PTR_DAT_077c1d88);
            bRam0000000007e2a7ab = 1;
          }
          puVar1 = PTR_DAT_077c1d88;
          if (plVar11 != (long *)0x0) {
            lVar12 = *plVar11;
            uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar4 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077c1d88) {
                  puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x5f) * 0x10 + 0x138);
                  goto LAB_06b882f0;
                }
                uVar4 = uVar4 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b882f0:
            (*(code *)*puVar5)(plVar11,param_4 & 1,puVar5[1]);
            lVar13 = *plVar11;
            lVar12 = *(long *)puVar1;
            uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar4 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar12) {
                  puVar5 = (undefined8 *)(lVar13 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                  goto LAB_06b88350;
                }
                uVar4 = uVar4 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)func_0x03256b10(plVar11,lVar12,9);
LAB_06b88350:
            (*(code *)*puVar5)(plVar11,param_4 & 1,puVar5[1]);
            if (extraout_x1 != (long *)0x0) {
              lVar13 = *extraout_x1;
              lVar12 = *(long *)puVar1;
              uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar4 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar12) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                    goto LAB_06b883b4;
                  }
                  uVar4 = uVar4 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar4 != 0);
              }
              puVar5 = (undefined8 *)func_0x03256b10(extraout_x1,lVar12,9);
LAB_06b883b4:
                    /* WARNING: Could not recover jumptable at 0x06b883cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar4 = (*(code *)*puVar5)(extraout_x1,param_4 & 1,puVar5[1]);
              return uVar4;
            }
          }
          auVar16 = func_0x03280cac();
          if ((bRam0000000007e2a7ac & 1) == 0) {
            func_0x03280a18(PTR_DAT_0777a498);
            func_0x03280a18(PTR_DAT_07779820);
            bRam0000000007e2a7ac = 1;
          }
          plVar11 = *(long **)(auVar16._0_8_ + 0x10);
          if (plVar11 == (long *)0x0) {
            uVar4 = func_0x03280cac();
            return uVar4;
          }
          lVar12 = *plVar11;
          uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar4 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x11) * 0x10 + 0x138);
                goto LAB_06b88470;
              }
              uVar4 = uVar4 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,0x11);
LAB_06b88470:
          plVar11 = (long *)(*(code *)*puVar5)(plVar11,auVar16._8_8_,puVar5[1]);
          if (plVar11 == (long *)0x0) {
            return 0;
          }
          lVar12 = *plVar11;
          uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar4 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07779820) {
                puVar5 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_06b884e8;
              }
              uVar4 = uVar4 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07779820,0);
LAB_06b884e8:
                    /* WARNING: Could not recover jumptable at 0x06b884f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
          return uVar4;
        }
      }
    }
  }
LAB_06b8806c:
  uVar2 = 0;
LAB_06b88070:
  return (ulong)uVar2;
}

