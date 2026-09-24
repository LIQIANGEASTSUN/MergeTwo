/* Ghidra 12.1.2 native pseudocode; RVA 0x3BDC0F8; Merger.Boosters.Services.BoosterService.InteractWithBooster<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>; status ok */


long * Merger_Boosters_Services_BoosterService__InteractWithBooster___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                 (long *param_1,long param_2,undefined8 *****param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined8 extraout_x1;
  int iVar11;
  undefined8 *****pppppuVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined2 *puVar17;
  long *plVar18;
  undefined2 *puVar19;
  undefined8 *****pppppuVar20;
  long *plVar21;
  long lVar22;
  undefined1 auVar23 [16];
  ulong auStack_118 [6];
  undefined8 auStack_e8 [2];
  undefined4 auStack_d8 [2];
  long alStack_d0 [9];
  undefined8 ****ppppuStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  byte *pbVar9;
  byte *pbVar10;
  
  lVar6 = tpidr_el0;
  lStack_68 = *(long *)(lVar6 + 0x28);
  plVar13 = *(long **)(param_4 + 0x38);
  pppppuVar12 = param_3;
  ppppuStack_88 = param_3;
  if (plVar13 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0776f248);
    plVar13 = *(long **)(param_4 + 0x38);
    if (plVar13 == (long *)0x0) {
      func_0x03256878(param_4);
      plVar13 = *(long **)(param_4 + 0x38);
    }
  }
  pppppuVar20 = (undefined8 *****)(ulong)*(uint *)(plVar13[2] + 0xfc);
  lVar2 = -((long)pppppuVar20 + 0xfU & 0x1fffffff0);
  plVar18 = (long *)((long)alStack_d0 + lVar2 + 0x40);
  if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar13 = (long *)func_0x03280ca0();
  (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 8))();
  if (plVar13 == (long *)0x0) {
LAB_03cdc4d4:
    func_0x03280cac();
  }
  else {
    plVar13[2] = (long)param_1;
    func_0x032809c4(plVar13 + 2,param_1);
    plVar21 = plVar13 + 3;
    *plVar21 = param_2;
    func_0x032809c4(plVar21,param_2);
    lVar22 = *(long *)(param_4 + 0x38);
    param_1 = (long *)param_1[7];
    param_2 = *plVar21;
    pppppuVar12 = param_3;
    if (-1 < *(int *)(*(long *)(lVar22 + 0x10) + 0x28)) {
      pppppuVar12 = &ppppuStack_88;
    }
    func_0x072ce970(plVar18,pppppuVar12);
    pppppuVar12 = pppppuVar20;
    if (param_1 == (long *)0x0) goto LAB_03cdc4d4;
    lVar14 = *(long *)(lVar22 + 0x18);
    if (-1 < *(int *)(*(long *)(lVar22 + 0x10) + 0x28)) {
      plVar18 = (long *)*plVar18;
    }
    lVar22 = *param_1;
    uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)(lVar14 + 0x20)) {
          lVar22 = lVar22 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
          goto LAB_03cdc268;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    lVar22 = func_0x03256b10(param_1);
LAB_03cdc268:
    lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar14);
    lStack_80 = param_2;
    plStack_78 = plVar18;
    (**(code **)(lVar22 + 0x10))(*(undefined8 *)(lVar22 + 8),lVar22,param_1,&lStack_80,&plStack_70);
    if ((*(byte *)(*(long *)(*(long *)(param_4 + 0x38) + 0x30) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    param_3 = (undefined8 *****)func_0x03280ca0();
    pppppuVar12 = *(undefined8 ******)(*(long *)(param_4 + 0x38) + 0x28);
    (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 0x38))(param_3,plVar13);
    plVar18 = plStack_70;
    if (plStack_70 == (long *)0x0) goto LAB_03cdc4d4;
    lVar22 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar14 = *plStack_70;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar22) {
          puVar5 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03cdc330;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plStack_70,lVar22,0);
LAB_03cdc330:
    pppppuVar12 = (undefined8 *****)puVar5[1];
    plVar13 = (long *)(*(code *)*puVar5)(plStack_70,param_3);
    lVar22 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    if (*(int *)(lVar22 + 0xe0) == 0) {
      func_0x03280b8c(lVar22);
    }
    lVar22 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    param_3 = *(undefined8 ******)(*(long *)(lVar22 + 0xb8) + 8);
    if (param_3 == (undefined8 *****)0x0) {
      lVar22 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      if (*(int *)(lVar22 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar22 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      param_1 = (long *)**(long **)(lVar22 + 0xb8);
      param_3 = (undefined8 *****)func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f240);
      pppppuVar12 = *(undefined8 ******)(*(long *)(param_4 + 0x38) + 0x58);
      func_0x054221d4(param_3,param_1,pppppuVar12,0);
      lVar22 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      *(undefined8 ******)(*(long *)(lVar22 + 0xb8) + 8) = param_3;
      lVar22 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar22 + 0xb8) + 8,param_3);
    }
    if (plVar13 == (long *)0x0) goto LAB_03cdc4d4;
    lVar22 = *plVar13;
    uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0776f248) {
          puVar5 = (undefined8 *)(lVar22 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_03cdc490;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0776f248,1);
LAB_03cdc490:
    pppppuVar12 = (undefined8 *****)puVar5[1];
    (*(code *)*puVar5)(plVar13,param_3);
    if (*(long *)(lVar6 + 0x28) == lStack_68) {
      return plStack_70;
    }
  }
  func_0x072ce990();
  puVar4 = PTR_DAT_077797a8;
  *(undefined8 *)((long)alStack_d0 + lVar2) = 0x3cdc4dc;
  *(long *)((long)alStack_d0 + lVar2 + 0x10) = param_2;
  *(long **)((long)alStack_d0 + lVar2 + 0x18) = param_1;
  *(undefined8 ******)((long)alStack_d0 + lVar2 + 0x20) = param_3;
  *(long **)((long)alStack_d0 + lVar2 + 0x28) = plVar13;
  *(long **)((long)alStack_d0 + lVar2 + 0x30) = plVar18;
  *(long *)((long)alStack_d0 + lVar2 + 0x38) = param_4;
  pppppuVar20 = pppppuVar12;
  if ((bRam0000000007e17d83 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779810);
    func_0x03280a18(PTR_DAT_077797a8);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_0774e6b8);
    func_0x03280a18(PTR_DAT_0776a998);
    bRam0000000007e17d83 = 1;
  }
  plVar13 = (long *)func_0x03280b90(extraout_x1,*(undefined8 *)puVar4);
  puVar3 = PTR_DAT_077730b8;
  if (plVar13 == (long *)0x0) {
    ppppuVar8 = (undefined8 ****)0x0;
    *pppppuVar12 = (undefined8 ****)0x0;
LAB_03cdc7cc:
    func_0x032809c4(pppppuVar12,ppppuVar8);
    return (long *)(ulong)(plVar13 != (long *)0x0);
  }
  lVar6 = func_0x03280afc(*(undefined8 *)PTR_DAT_0774e6b8,5);
  lVar22 = *(long *)puVar3;
  if (*(int *)(lVar22 + 0xe0) == 0) {
    func_0x03280b8c(lVar22);
    lVar22 = *(long *)puVar3;
  }
  plVar18 = *(long **)(*(long *)(lVar22 + 0xb8) + 8);
  if (plVar18 != (long *)0x0) {
    lVar22 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07779818) {
          puVar5 = (undefined8 *)(lVar22 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03cdc624;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pppppuVar20 = (undefined8 *****)0x0;
    puVar5 = (undefined8 *)func_0x03256b10(plVar18);
LAB_03cdc624:
    uVar7 = (*(code *)*puVar5)(plVar18,puVar5[1]);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = uVar7;
        func_0x032809c4((undefined8 *)(lVar6 + 0x20),uVar7);
        puVar3 = PTR_DAT_0776a998;
        if (1 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_0776a998;
          func_0x032809c4();
          lVar22 = *plVar13;
          uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar5 = (undefined8 *)(lVar22 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_03cdc6c4;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          pppppuVar20 = (undefined8 *****)0x1;
          puVar5 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03cdc6c4:
          lVar22 = (*(code *)*puVar5)(plVar13,puVar5[1]);
          if (lVar22 == 0) goto LAB_03cdc7f4;
          *(undefined8 *)((long)auStack_e8 + lVar2) = *(undefined8 *)PTR_DAT_07779810;
          *(undefined8 *)((long)auStack_e8 + lVar2 + 8) = 0xffffffffffffffff;
          *(undefined4 *)((long)auStack_d8 + lVar2) = *(undefined4 *)(lVar22 + 0x14);
          uVar7 = func_0x057cd6e4((long)auStack_e8 + lVar2,0);
          if (2 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x30) = uVar7;
            func_0x032809c4((undefined8 *)(lVar6 + 0x30),uVar7);
            puVar4 = PTR_DAT_07779820;
            if (3 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)puVar3;
              func_0x032809c4();
              lVar22 = *plVar13;
              uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                    puVar5 = (undefined8 *)(lVar22 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_03cdc78c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              pppppuVar20 = (undefined8 *****)0x0;
              puVar5 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03cdc78c:
              uVar7 = (*(code *)*puVar5)(plVar13,puVar5[1]);
              if (4 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x40) = uVar7;
                func_0x032809c4();
                ppppuVar8 = (undefined8 ****)func_0x055f7bd4(lVar6,0);
                *pppppuVar12 = ppppuVar8;
                goto LAB_03cdc7cc;
              }
            }
          }
        }
      }
      func_0x03280cb4();
    }
  }
LAB_03cdc7f4:
  auVar23 = func_0x03280cac();
  pbVar10 = auVar23._8_8_;
  pbVar9 = auVar23._0_8_;
  iVar11 = (int)pppppuVar20;
  if (((ulong)((long)pbVar9 - (long)pbVar10) < ((ulong)pppppuVar20 & 0xffffffff)) ||
     ((ulong)((long)pbVar10 - (long)pbVar9) < ((ulong)pppppuVar20 & 0xffffffff))) {
    plVar13 = (long *)(*(code *)PTR_memmove_07861088)
                                (pbVar9,pbVar10,(ulong)pppppuVar20 & 0xffffffff,0);
    return plVar13;
  }
  *(undefined8 *)((long)auStack_118 + lVar2 + 8) = 0x3cdc7f8;
  *(long *)((long)auStack_118 + lVar2 + 0x10) = lVar6;
  *(long **)((long)auStack_118 + lVar2 + 0x18) = plVar13;
  *(undefined8 ******)((long)auStack_118 + lVar2 + 0x20) = pppppuVar12;
  uVar15 = (ulong)pppppuVar20 & 0xffffffff;
  if (0x20 < iVar11) {
    *(ulong *)((long)auStack_118 + lVar2) = (ulong)*pbVar9;
    func_0x0580a9dc((long)auStack_118 + lVar2,0);
    plVar13 = (long *)func_0x032a26f8(pbVar9,pbVar10,uVar15);
    return plVar13;
  }
  if (((auVar23._8_4_ | auVar23._0_4_) & 3) != 0) {
    if ((0 < iVar11) && ((auVar23._0_4_ & auVar23._8_4_ & 1) != 0)) {
      uVar15 = (ulong)(iVar11 - 1);
      auVar23._8_8_ = pbVar10 + 1;
      auVar23._0_8_ = pbVar9 + 1;
      *pbVar9 = *pbVar10;
    }
    puVar17 = auVar23._8_8_;
    puVar19 = auVar23._0_8_;
    if ((((auVar23._0_4_ >> 1 & 1) != 0) && (1 < (int)uVar15)) && ((auVar23._8_4_ >> 1 & 1) != 0)) {
      uVar15 = (ulong)((int)uVar15 - 2);
      auVar23._8_8_ = puVar17 + 1;
      auVar23._0_8_ = puVar19 + 1;
      *puVar19 = *puVar17;
    }
    uVar1 = auVar23._0_4_ | auVar23._8_4_;
    if ((uVar1 & 1) != 0) {
      plVar13 = (long *)func_0x057c45e0(auVar23._0_8_,auVar23._8_8_,uVar15);
      return plVar13;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      plVar13 = (long *)func_0x057c4574(auVar23._0_8_,auVar23._8_8_,uVar15);
      return plVar13;
    }
  }
  plVar13 = (long *)func_0x057c44f8(auVar23._0_8_,auVar23._8_8_,uVar15);
  return plVar13;
}

