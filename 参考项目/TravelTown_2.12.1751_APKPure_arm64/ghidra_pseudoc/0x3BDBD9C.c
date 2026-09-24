/* Ghidra 12.1.2 native pseudocode; RVA 0x3BDBD9C; Merger.Boosters.Services.BoosterService.InteractWithBooster<object, object>; status ok */


long * Merger_Boosters_Services_BoosterService__InteractWithBooster_object__object_
                 (long param_1,undefined8 param_2,undefined8 *****param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 ****ppppuVar8;
  undefined8 extraout_x1;
  int iVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  undefined8 uVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *****pppppuVar25;
  long *plVar26;
  long lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong auStack_158 [6];
  undefined8 auStack_128 [2];
  undefined4 auStack_118 [2];
  long alStack_110 [9];
  undefined8 ****ppppuStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  byte *pbVar9;
  byte *pbVar10;
  
  plVar14 = *(long **)(param_4 + 0x38);
  pppppuVar12 = param_3;
  lVar15 = param_4;
  if (plVar14 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0776f248);
    plVar14 = *(long **)(param_4 + 0x38);
    if (plVar14 == (long *)0x0) {
      func_0x03256878(param_4);
      plVar14 = *(long **)(param_4 + 0x38);
    }
  }
  if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar6 = func_0x03280ca0();
  func_0x04c09dec(lVar6,*(undefined8 *)(*(long *)(param_4 + 0x38) + 8));
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_1;
    func_0x032809c4((long *)(lVar6 + 0x10),param_1);
    puVar24 = (undefined8 *)(lVar6 + 0x18);
    *puVar24 = param_2;
    func_0x032809c4(puVar24,param_2);
    plVar14 = *(long **)(param_1 + 0x38);
    if (plVar14 != (long *)0x0) {
      lVar15 = *plVar14;
      uVar21 = *puVar24;
      lVar23 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)(lVar23 + 0x20)) {
            lVar15 = lVar15 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_03cdbea0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      lVar15 = func_0x03256b10(plVar14);
LAB_03cdbea0:
      lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar23);
      plVar14 = (long *)(**(code **)(lVar15 + 8))(plVar14,uVar21,param_3,lVar15);
      lVar15 = *(long *)(*(long *)(param_4 + 0x38) + 0x30);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      uVar21 = func_0x03280ca0(lVar15);
      pppppuVar12 = *(undefined8 ******)(*(long *)(param_4 + 0x38) + 0x28);
      lVar15 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
      func_0x054221d4(uVar21,lVar6);
      if (plVar14 != (long *)0x0) {
        lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x0325681c(lVar6);
        }
        lVar23 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar6) {
              puVar24 = (undefined8 *)(lVar23 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03cdbf6c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar24 = (undefined8 *)func_0x03256b10(plVar14,lVar6,0);
LAB_03cdbf6c:
        pppppuVar12 = (undefined8 *****)puVar24[1];
        plVar7 = (long *)(*(code *)*puVar24)(plVar14,uVar21);
        lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x0325681c(lVar6);
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          func_0x03280b8c(lVar6);
        }
        lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x0325681c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 == 0) {
          lVar15 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = func_0x0325681c();
          }
          if (*(int *)(lVar15 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar15 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = func_0x0325681c();
          }
          uVar21 = **(undefined8 **)(lVar15 + 0xb8);
          lVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f240);
          lVar15 = 0;
          pppppuVar12 = *(undefined8 ******)(*(long *)(param_4 + 0x38) + 0x58);
          func_0x054221d4(lVar6,uVar21);
          lVar23 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
          if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
            lVar23 = func_0x0325681c();
          }
          *(long *)(*(long *)(lVar23 + 0xb8) + 8) = lVar6;
          lVar23 = *(long *)(*(long *)(param_4 + 0x38) + 0x50);
          if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
            lVar23 = func_0x0325681c();
          }
          func_0x032809c4(*(long *)(lVar23 + 0xb8) + 8,lVar6);
        }
        if (plVar7 != (long *)0x0) {
          lVar15 = *plVar7;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0776f248) {
                puVar24 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_03cdc0cc;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar24 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0776f248,1);
LAB_03cdc0cc:
          (*(code *)*puVar24)(plVar7,lVar6,puVar24[1]);
          return plVar14;
        }
      }
    }
  }
  auVar28 = func_0x03280cac();
  lVar23 = auVar28._0_8_;
  lVar6 = tpidr_el0;
  lStack_a8 = *(long *)(lVar6 + 0x28);
  plVar14 = *(long **)(lVar15 + 0x38);
  pppppuVar13 = pppppuVar12;
  ppppuStack_c8 = pppppuVar12;
  if (plVar14 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0776f248);
    plVar14 = *(long **)(lVar15 + 0x38);
    if (plVar14 == (long *)0x0) {
      func_0x03256878(lVar15);
      plVar14 = *(long **)(lVar15 + 0x38);
    }
  }
  pppppuVar25 = (undefined8 *****)(ulong)*(uint *)(plVar14[2] + 0xfc);
  lVar2 = -((long)pppppuVar25 + 0xfU & 0x1fffffff0);
  plVar7 = (long *)((long)alStack_110 + lVar2 + 0x40);
  if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar14 = (long *)func_0x03280ca0();
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 8))();
  if (plVar14 == (long *)0x0) {
LAB_03cdc4d4:
    func_0x03280cac();
  }
  else {
    plVar14[2] = lVar23;
    func_0x032809c4(plVar14 + 2,lVar23);
    plVar26 = plVar14 + 3;
    *plVar26 = auVar28._8_8_;
    func_0x032809c4(plVar26,auVar28._8_8_);
    lVar27 = *(long *)(lVar15 + 0x38);
    plVar22 = *(long **)(lVar23 + 0x38);
    lVar23 = *plVar26;
    auVar3._8_8_ = lVar23;
    auVar3._0_8_ = plVar22;
    auVar28._8_8_ = lVar23;
    auVar28._0_8_ = plVar22;
    pppppuVar13 = pppppuVar12;
    if (-1 < *(int *)(*(long *)(lVar27 + 0x10) + 0x28)) {
      pppppuVar13 = &ppppuStack_c8;
    }
    func_0x072ce970(plVar7,pppppuVar13);
    pppppuVar13 = pppppuVar25;
    if (plVar22 == (long *)0x0) goto LAB_03cdc4d4;
    lVar16 = *(long *)(lVar27 + 0x18);
    if (-1 < *(int *)(*(long *)(lVar27 + 0x10) + 0x28)) {
      plVar7 = (long *)*plVar7;
    }
    lVar27 = *plVar22;
    uVar17 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)(lVar16 + 0x20)) {
          lVar27 = lVar27 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 + 0x138;
          goto LAB_03cdc268;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    lVar27 = func_0x03256b10(plVar22);
LAB_03cdc268:
    lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar16);
    lStack_c0 = lVar23;
    plStack_b8 = plVar7;
    (**(code **)(lVar27 + 0x10))(*(undefined8 *)(lVar27 + 8),lVar27,plVar22,&lStack_c0,&plStack_b0);
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 0x30) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    pppppuVar12 = (undefined8 *****)func_0x03280ca0();
    pppppuVar13 = *(undefined8 ******)(*(long *)(lVar15 + 0x38) + 0x28);
    (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 0x38))(pppppuVar12,plVar14);
    plVar7 = plStack_b0;
    auVar28 = auVar3;
    if (plStack_b0 == (long *)0x0) goto LAB_03cdc4d4;
    lVar27 = *(long *)(*(long *)(lVar15 + 0x38) + 0x20);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar16 = *plStack_b0;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar27) {
          puVar24 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_03cdc330;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar24 = (undefined8 *)func_0x03256b10(plStack_b0,lVar27,0);
LAB_03cdc330:
    pppppuVar13 = (undefined8 *****)puVar24[1];
    plVar14 = (long *)(*(code *)*puVar24)(plStack_b0,pppppuVar12);
    lVar27 = *(long *)(*(long *)(lVar15 + 0x38) + 0x50);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    if (*(int *)(lVar27 + 0xe0) == 0) {
      func_0x03280b8c(lVar27);
    }
    lVar27 = *(long *)(*(long *)(lVar15 + 0x38) + 0x50);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c();
    }
    pppppuVar12 = *(undefined8 ******)(*(long *)(lVar27 + 0xb8) + 8);
    if (pppppuVar12 == (undefined8 *****)0x0) {
      lVar27 = *(long *)(*(long *)(lVar15 + 0x38) + 0x50);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c();
      }
      if (*(int *)(lVar27 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar27 = *(long *)(*(long *)(lVar15 + 0x38) + 0x50);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c();
      }
      plVar22 = (long *)**(undefined8 **)(lVar27 + 0xb8);
      pppppuVar12 = (undefined8 *****)func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f240);
      pppppuVar13 = *(undefined8 ******)(*(long *)(lVar15 + 0x38) + 0x58);
      func_0x054221d4(pppppuVar12,plVar22,pppppuVar13,0);
      lVar27 = *(long *)(*(long *)(lVar15 + 0x38) + 0x50);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c();
      }
      *(undefined8 ******)(*(long *)(lVar27 + 0xb8) + 8) = pppppuVar12;
      lVar27 = *(long *)(*(long *)(lVar15 + 0x38) + 0x50);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar27 + 0xb8) + 8,pppppuVar12);
    }
    auVar28._0_8_ = plVar22;
    if (plVar14 == (long *)0x0) goto LAB_03cdc4d4;
    lVar23 = *plVar14;
    uVar17 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0776f248) {
          puVar24 = (undefined8 *)(lVar23 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_03cdc490;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar24 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0776f248,1);
LAB_03cdc490:
    pppppuVar13 = (undefined8 *****)puVar24[1];
    (*(code *)*puVar24)(plVar14,pppppuVar12);
    if (*(long *)(lVar6 + 0x28) == lStack_a8) {
      return plStack_b0;
    }
  }
  func_0x072ce990();
  puVar5 = PTR_DAT_077797a8;
  *(undefined8 *)((long)alStack_110 + lVar2) = 0x3cdc4dc;
  *(long *)((long)alStack_110 + lVar2 + 0x10) = auVar28._8_8_;
  *(long *)((long)alStack_110 + lVar2 + 0x18) = auVar28._0_8_;
  *(undefined8 ******)((long)alStack_110 + lVar2 + 0x20) = pppppuVar12;
  *(long **)((long)alStack_110 + lVar2 + 0x28) = plVar14;
  *(long **)((long)alStack_110 + lVar2 + 0x30) = plVar7;
  *(long *)((long)alStack_110 + lVar2 + 0x38) = lVar15;
  pppppuVar12 = pppppuVar13;
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
  plVar14 = (long *)func_0x03280b90(extraout_x1,*(undefined8 *)puVar5);
  puVar4 = PTR_DAT_077730b8;
  if (plVar14 == (long *)0x0) {
    ppppuVar8 = (undefined8 ****)0x0;
    *pppppuVar13 = (undefined8 ****)0x0;
LAB_03cdc7cc:
    func_0x032809c4(pppppuVar13,ppppuVar8);
    return (long *)(ulong)(plVar14 != (long *)0x0);
  }
  lVar15 = func_0x03280afc(*(undefined8 *)PTR_DAT_0774e6b8,5);
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    func_0x03280b8c(lVar6);
    lVar6 = *(long *)puVar4;
  }
  plVar7 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    uVar17 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07779818) {
          puVar24 = (undefined8 *)(lVar6 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_03cdc624;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    pppppuVar12 = (undefined8 *****)0x0;
    puVar24 = (undefined8 *)func_0x03256b10(plVar7);
LAB_03cdc624:
    uVar21 = (*(code *)*puVar24)(plVar7,puVar24[1]);
    if (lVar15 != 0) {
      if (*(int *)(lVar15 + 0x18) != 0) {
        *(undefined8 *)(lVar15 + 0x20) = uVar21;
        func_0x032809c4((undefined8 *)(lVar15 + 0x20),uVar21);
        puVar4 = PTR_DAT_0776a998;
        if (1 < *(uint *)(lVar15 + 0x18)) {
          *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)PTR_DAT_0776a998;
          func_0x032809c4();
          lVar6 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                puVar24 = (undefined8 *)(lVar6 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_03cdc6c4;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          pppppuVar12 = (undefined8 *****)0x1;
          puVar24 = (undefined8 *)func_0x03256b10(plVar14);
LAB_03cdc6c4:
          lVar6 = (*(code *)*puVar24)(plVar14,puVar24[1]);
          if (lVar6 == 0) goto LAB_03cdc7f4;
          *(undefined8 *)((long)auStack_128 + lVar2) = *(undefined8 *)PTR_DAT_07779810;
          *(undefined8 *)((long)auStack_128 + lVar2 + 8) = 0xffffffffffffffff;
          *(undefined4 *)((long)auStack_118 + lVar2) = *(undefined4 *)(lVar6 + 0x14);
          uVar21 = func_0x057cd6e4((long)auStack_128 + lVar2,0);
          if (2 < *(uint *)(lVar15 + 0x18)) {
            *(undefined8 *)(lVar15 + 0x30) = uVar21;
            func_0x032809c4((undefined8 *)(lVar15 + 0x30),uVar21);
            puVar5 = PTR_DAT_07779820;
            if (3 < *(uint *)(lVar15 + 0x18)) {
              *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)puVar4;
              func_0x032809c4();
              lVar6 = *plVar14;
              uVar17 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                    puVar24 = (undefined8 *)(lVar6 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_03cdc78c;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              pppppuVar12 = (undefined8 *****)0x0;
              puVar24 = (undefined8 *)func_0x03256b10(plVar14);
LAB_03cdc78c:
              uVar21 = (*(code *)*puVar24)(plVar14,puVar24[1]);
              if (4 < *(uint *)(lVar15 + 0x18)) {
                *(undefined8 *)(lVar15 + 0x40) = uVar21;
                func_0x032809c4();
                ppppuVar8 = (undefined8 ****)func_0x055f7bd4(lVar15,0);
                *pppppuVar13 = ppppuVar8;
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
  auVar29 = func_0x03280cac();
  pbVar10 = auVar29._8_8_;
  pbVar9 = auVar29._0_8_;
  iVar11 = (int)pppppuVar12;
  if (((ulong)((long)pbVar9 - (long)pbVar10) < ((ulong)pppppuVar12 & 0xffffffff)) ||
     ((ulong)((long)pbVar10 - (long)pbVar9) < ((ulong)pppppuVar12 & 0xffffffff))) {
    plVar14 = (long *)(*(code *)PTR_memmove_07861088)
                                (pbVar9,pbVar10,(ulong)pppppuVar12 & 0xffffffff,0);
    return plVar14;
  }
  *(undefined8 *)((long)auStack_158 + lVar2 + 8) = 0x3cdc7f8;
  *(long *)((long)auStack_158 + lVar2 + 0x10) = lVar15;
  *(long **)((long)auStack_158 + lVar2 + 0x18) = plVar14;
  *(undefined8 ******)((long)auStack_158 + lVar2 + 0x20) = pppppuVar13;
  uVar17 = (ulong)pppppuVar12 & 0xffffffff;
  if (0x20 < iVar11) {
    *(ulong *)((long)auStack_158 + lVar2) = (ulong)*pbVar9;
    func_0x0580a9dc((long)auStack_158 + lVar2,0);
    plVar14 = (long *)func_0x032a26f8(pbVar9,pbVar10,uVar17);
    return plVar14;
  }
  if (((auVar29._8_4_ | auVar29._0_4_) & 3) != 0) {
    if ((0 < iVar11) && ((auVar29._0_4_ & auVar29._8_4_ & 1) != 0)) {
      uVar17 = (ulong)(iVar11 - 1);
      auVar29._8_8_ = pbVar10 + 1;
      auVar29._0_8_ = pbVar9 + 1;
      *pbVar9 = *pbVar10;
    }
    puVar19 = auVar29._8_8_;
    puVar20 = auVar29._0_8_;
    if ((((auVar29._0_4_ >> 1 & 1) != 0) && (1 < (int)uVar17)) && ((auVar29._8_4_ >> 1 & 1) != 0)) {
      uVar17 = (ulong)((int)uVar17 - 2);
      auVar29._8_8_ = puVar19 + 1;
      auVar29._0_8_ = puVar20 + 1;
      *puVar20 = *puVar19;
    }
    uVar1 = auVar29._0_4_ | auVar29._8_4_;
    if ((uVar1 & 1) != 0) {
      plVar14 = (long *)func_0x057c45e0(auVar29._0_8_,auVar29._8_8_,uVar17);
      return plVar14;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      plVar14 = (long *)func_0x057c4574(auVar29._0_8_,auVar29._8_8_,uVar17);
      return plVar14;
    }
  }
  plVar14 = (long *)func_0x057c44f8(auVar29._0_8_,auVar29._8_8_,uVar17);
  return plVar14;
}

