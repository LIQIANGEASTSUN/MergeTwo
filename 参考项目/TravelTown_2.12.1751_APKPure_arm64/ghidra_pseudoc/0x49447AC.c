/* Ghidra 12.1.2 native pseudocode; RVA 0x49447AC; MergeEngine.Util.WeightedItemList<TItem>.<AddItems>b__7_0; status ok */


/* WARNING: Possible PIC construction at 0x04144590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04144594) */

undefined1  [16]
MergeEngine_Util_WeightedItemList_TItem____AddItems_b__7_0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  long extraout_x1_07;
  long extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  long *plVar17;
  undefined8 extraout_x1_11;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  int *piVar28;
  long *unaff_x20;
  long *plVar29;
  undefined *puVar30;
  undefined *unaff_x28;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  undefined8 auStack_1a0 [4];
  long alStack_180 [2];
  long alStack_170 [2];
  undefined1 auStack_15c [12];
  undefined1 auStack_150 [8];
  long alStack_148 [11];
  undefined8 *puStack_f0;
  long lStack_e8;
  
  lVar19 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
  if (param_2 != 0) {
    lVar16 = *(long *)(param_1 + 0x10);
    lVar27 = *(long *)(*(long *)(lVar19 + 0x20) + 0xc0);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    if (lVar16 != 0) {
      lVar20 = *(long *)(lVar16 + 0x10);
      lVar27 = *(long *)(lVar27 + 0x78);
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar20 != 0) {
        uVar2 = *(uint *)(lVar16 + 0x18);
        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar2 + 1;
          plVar21 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
          *plVar21 = param_2;
          goto SUB_032809c4;
        }
        uVar2 = *(uint *)(lVar16 + 0x18);
        lVar19 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                        + 0x70) + 0x20) + 0xc0) + 0x78);
        func_0x04144aa0(lVar16,uVar2 + 1);
        lVar27 = *(long *)(lVar16 + 0x10);
        *(uint *)(lVar16 + 0x18) = uVar2 + 1;
        if (lVar27 == 0) {
          func_0x03280cac();
        }
        else if (uVar2 < *(uint *)(lVar27 + 0x18)) {
          plVar21 = (long *)(lVar27 + (long)(int)uVar2 * 8 + 0x20);
          *plVar21 = param_2;
          goto SUB_032809c4;
        }
        auVar37 = func_0x03280cb4();
        lVar20 = auVar37._8_8_;
        lVar16 = auVar37._0_8_;
        lVar18 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x58);
        func_0x03ec2768(lVar20,0x14);
        lVar27 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        if (lVar20 == 0) {
LAB_0414454c:
          param_2 = 0;
        }
        else {
          param_2 = func_0x03280b90(lVar20,lVar27);
          if (param_2 == 0) {
            func_0x03281048(lVar20,lVar27);
            goto LAB_0414454c;
          }
        }
        lVar27 = *(long *)(lVar16 + 0x10);
        lVar25 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar27 != 0) {
          uVar2 = *(uint *)(lVar16 + 0x18);
          if (uVar2 < *(uint *)(lVar27 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar2 + 1;
            plVar21 = (long *)(lVar27 + (long)(int)uVar2 * 8 + 0x20);
            *plVar21 = param_2;
SUB_032809c4:
            if (iRam00000000080486b8 != 0) {
              puVar15 = (ulong *)(((ulong)plVar21 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar15,0x10);
                if (bVar4) {
                  *puVar15 = *puVar15 | 1L << ((ulong)plVar21 >> 0xc & 0x3f);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            auVar37._8_8_ = param_2;
            auVar37._0_8_ = plVar21;
            return auVar37;
          }
          func_0x0414446c(lVar16,param_2,
                          *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          uVar11 = extraout_x1_09;
LAB_041445ac:
          auVar34._4_4_ = 0;
          auVar34._0_4_ = *(int *)(lVar16 + 0x18) - 1;
          auVar34._8_8_ = uVar11;
          return auVar34;
        }
        auVar39 = func_0x03280cac();
        uVar11 = auVar39._0_8_;
        if (auVar39._8_4_ == 1) {
          puVar10 = (undefined8 *)func_0x072ce910(uVar11);
          uVar11 = func_0x03280a2c(PTR_DAT_077542c0);
          uVar12 = func_0x032810d8(uVar11,*(undefined8 *)*puVar10);
          if ((uVar12 & 1) != 0) {
            func_0x072ce920();
            uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x68);
            lVar19 = func_0x03280a2c(PTR_DAT_0774e558);
            if (*(int *)(lVar19 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar11 = func_0x057a51c4(uVar11,0);
            func_0x057b7b18(lVar20,uVar11,0);
            uVar11 = extraout_x1_10;
            goto LAB_041445ac;
          }
          puVar13 = (undefined8 *)func_0x072ce930(8);
          *puVar13 = *puVar10;
          lVar18 = 0;
          uVar11 = func_0x072ce940(puVar13,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
          func_0x072ce920();
        }
        func_0x03365958(uVar11);
        auVar37 = func_0x02f09514();
        plVar17 = auVar37._8_8_;
        plVar8 = auVar37._0_8_;
        uVar2 = *(uint *)(plVar8 + 3);
        lVar19 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x90);
        uVar12 = (ulong)uVar2;
        plVar29 = (long *)0x7e18000;
        plVar21 = plVar17;
        if ((bRam0000000007e18233 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774e8c8);
          func_0x03280a18(PTR_DAT_0774e8e0);
          bRam0000000007e18233 = 1;
        }
        if (plVar17 == (long *)0x0) {
          func_0x057a867c(6,0);
        }
        if (*(uint *)(plVar8 + 3) < uVar2) {
          func_0x057b8434(0);
        }
        lVar16 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
        }
        plVar14 = (long *)func_0x03280b90(plVar17,lVar16);
        if (plVar14 == (long *)0x0) {
          if ((int)uVar2 < (int)plVar8[3]) {
            if (plVar17 == (long *)0x0) {
              func_0x03280cac();
            }
            else {
              lVar16 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x20);
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = func_0x0325681c(lVar16);
              }
              lVar27 = *plVar17;
              uVar26 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar26 != 0) {
                piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar16) {
                    puVar10 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_04145868;
                  }
                  uVar26 = uVar26 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar26 != 0);
              }
              plVar21 = (long *)0x0;
              puVar10 = (undefined8 *)func_0x03256b10(plVar17);
LAB_04145868:
              plVar29 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
              puVar30 = PTR_DAT_0774e8e0;
              if (plVar29 != (long *)0x0) {
                do {
                  lVar16 = *plVar29;
                  uVar26 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar26 != 0) {
                    piVar28 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == *(long *)puVar30) {
                        puVar10 = (undefined8 *)(lVar16 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_041458d0;
                      }
                      uVar26 = uVar26 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar26 != 0);
                  }
                  plVar21 = (long *)0x0;
                  puVar10 = (undefined8 *)func_0x03256b10(plVar29);
LAB_041458d0:
                  auVar37 = (*(code *)*puVar10)(plVar29,puVar10[1]);
                  if ((auVar37._0_8_ & 1) == 0) {
                    uVar12 = 0;
                    iVar6 = 5;
                    if (plVar29 == (long *)0x0) goto LAB_041459e8;
                    goto LAB_04145988;
                  }
                  lVar16 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x148);
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = func_0x0325681c(lVar16);
                  }
                  lVar27 = *plVar29;
                  uVar26 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar26 != 0) {
                    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar16) {
                        puVar10 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_04145948;
                      }
                      uVar26 = uVar26 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar26 != 0);
                  }
                  puVar10 = (undefined8 *)func_0x03256b10(plVar29,lVar16,0);
LAB_04145948:
                  plVar21 = (long *)(*(code *)*puVar10)(plVar29,puVar10[1]);
                  func_0x04145380(plVar8,uVar12,plVar21,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x160));
                  uVar12 = (ulong)((int)uVar12 + 1);
                } while( true );
              }
            }
            func_0x03280cac();
            do {
              auVar39 = func_0x03280ca4(uVar12);
              if (auVar39._8_4_ != 1) {
                if (plVar29 == (long *)0x0) goto LAB_04145ae0;
                lVar19 = *plVar29;
                uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar12 == 0) goto LAB_04145ab8;
                piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                goto LAB_04145aa0;
              }
              puVar15 = (ulong *)func_0x072ce910(auVar39._0_8_);
              uVar12 = *puVar15;
              auVar37 = func_0x072ce920();
              iVar6 = 0;
              if (plVar29 != (long *)0x0) {
LAB_04145988:
                lVar16 = *plVar29;
                uVar26 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar26 != 0) {
                  piVar28 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
                      puVar10 = (undefined8 *)(lVar16 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_041459dc;
                    }
                    uVar26 = uVar26 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar26 != 0);
                }
                plVar21 = (long *)0x0;
                puVar10 = (undefined8 *)func_0x03256b10(plVar29);
LAB_041459dc:
                auVar37 = (*(code *)*puVar10)(plVar29,puVar10[1]);
              }
LAB_041459e8:
            } while (uVar12 != 0);
            if (iVar6 == 5) goto LAB_04145a10;
            if (iVar6 != 0) {
              return auVar37;
            }
          }
          auVar37 = func_0x041462cc(plVar8,plVar17,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x40));
        }
        else {
          lVar16 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x28);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = func_0x0325681c(lVar16);
          }
          lVar27 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar12 != 0) {
            piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == lVar16) {
                puVar10 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_04145728;
              }
              uVar12 = uVar12 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar12 != 0);
          }
          puVar10 = (undefined8 *)func_0x03256b10(plVar14,lVar16,0);
LAB_04145728:
          auVar37 = (*(code *)*puVar10)(plVar14,puVar10[1]);
          iVar6 = auVar37._0_4_;
          if (0 < iVar6) {
            func_0x04144aa0(plVar8,(int)plVar8[3] + iVar6,
                            *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x78));
            iVar5 = (int)plVar8[3] - uVar2;
            if (iVar5 != 0 && (int)uVar2 <= (int)plVar8[3]) {
              func_0x057b9f30(plVar8[2],uVar2,plVar8[2],iVar6 + uVar2,iVar5,0);
            }
            if (plVar8 == plVar14) {
              func_0x057b9f30(plVar8[2],0,plVar8[2],uVar2,uVar2,0);
              auVar37 = func_0x057b9f30(plVar8[2],iVar6 + uVar2,plVar8[2],uVar2 << 1,
                                        (int)plVar8[3] - uVar2,0);
            }
            else {
              lVar16 = plVar8[2];
              lVar19 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x28);
              if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                lVar19 = func_0x0325681c(lVar19);
              }
              lVar27 = *plVar14;
              uVar12 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar12 != 0) {
                piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar19) {
                    puVar10 = (undefined8 *)(lVar27 + (long)(*piVar28 + 5) * 0x10 + 0x138);
                    goto LAB_04145838;
                  }
                  uVar12 = uVar12 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar12 != 0);
              }
              puVar10 = (undefined8 *)func_0x03256b10(plVar14,lVar19,5);
LAB_04145838:
              auVar37 = (*(code *)*puVar10)(plVar14,lVar16,uVar2,puVar10[1]);
            }
            *(int *)(plVar8 + 3) = (int)plVar8[3] + iVar6;
          }
        }
LAB_04145a10:
        *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
        return auVar37;
      }
    }
  }
  auVar37 = func_0x03280cac();
  plVar21 = auVar37._8_8_;
  lVar16 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c(lVar16);
  }
  lVar16 = func_0x03280ca0(lVar16);
  lVar27 = *(long *)(*(long *)(lVar19 + 0x20) + 0xc0);
  func_0x054221d4(lVar16,auVar37._0_8_,*(undefined8 *)(lVar27 + 0x80),*(undefined8 *)(lVar27 + 0x90)
                 );
  uVar26 = *(ulong *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x98);
  uVar12 = uVar26;
  if (*(long *)(uVar26 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar26 + 0x38) == 0) {
      func_0x03256878(uVar26);
    }
  }
  if (plVar21 == (long *)0x0) goto LAB_03e0f290;
  lVar19 = **(long **)(uVar26 + 0x38);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c(lVar19);
  }
  lVar27 = *plVar21;
  uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
  if (uVar22 != 0) {
    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == lVar19) {
        puVar10 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
        goto LAB_03e0f108;
      }
      uVar22 = uVar22 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar22 != 0);
  }
  uVar12 = 0;
  puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03e0f108:
  unaff_x20 = (long *)(*(code *)*puVar10)(plVar21,puVar10[1]);
  puVar30 = PTR_DAT_0774e8e0;
  if (unaff_x20 != (long *)0x0) {
    do {
      lVar19 = *unaff_x20;
      uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar22 != 0) {
        piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)puVar30) {
            puVar10 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0f170;
          }
          uVar22 = uVar22 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar22 != 0);
      }
      uVar12 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f170:
      auVar37 = (*(code *)*puVar10)(unaff_x20,puVar10[1]);
      uVar11 = auVar37._8_8_;
      if ((auVar37._0_8_ & 1) == 0) {
        uVar26 = 0;
        goto LAB_03e0f210;
      }
      lVar19 = *(long *)(*(long *)(uVar26 + 0x38) + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      lVar27 = *unaff_x20;
      uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar22 != 0) {
        piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == lVar19) {
            puVar10 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0f1e4;
          }
          uVar22 = uVar22 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar22 != 0);
      }
      uVar12 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f1e4:
      uVar11 = (*(code *)*puVar10)(unaff_x20,puVar10[1]);
      if (lVar16 == 0) goto LAB_03e0f28c;
      uVar12 = *(ulong *)(lVar16 + 0x28);
      (**(code **)(lVar16 + 0x18))(*(undefined8 *)(lVar16 + 0x40));
    } while( true );
  }
  goto LAB_03e0f294;
LAB_03e0f28c:
  func_0x03280cac(uVar11,uVar11);
LAB_03e0f290:
  func_0x03280cac();
LAB_03e0f294:
  func_0x03280cac();
  while( true ) {
    auVar39 = func_0x03280ca4(uVar26);
    if (auVar39._8_4_ != 1) break;
    puVar15 = (ulong *)func_0x072ce910(auVar39._0_8_);
    uVar26 = *puVar15;
    func_0x072ce920();
    uVar11 = extraout_x1_00;
LAB_03e0f210:
    if (unaff_x20 != (long *)0x0) {
      lVar19 = *unaff_x20;
      uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar22 != 0) {
        piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar10 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0f268;
          }
          uVar22 = uVar22 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar22 != 0);
      }
      uVar12 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f268:
      (*(code *)*puVar10)(unaff_x20,puVar10[1]);
      uVar11 = extraout_x1;
    }
    if (uVar26 == 0) {
      auVar31._8_8_ = uVar11;
      auVar31._0_8_ = plVar21;
      return auVar31;
    }
  }
  if (unaff_x20 != (long *)0x0) {
    lVar19 = *unaff_x20;
    uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar26 != 0) {
      piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar10 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e0f334;
        }
        uVar26 = uVar26 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar26 != 0);
    }
    uVar12 = 0;
    puVar10 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f334:
    (*(code *)*puVar10)(unaff_x20,puVar10[1]);
  }
  func_0x03365958(auVar39._0_8_);
  func_0x03280ca4(0);
  auVar37 = func_0x02f09514();
  lVar19 = auVar37._8_8_;
  auVar32._0_8_ = auVar37._0_8_;
  uVar26 = uVar12;
  if (*(long *)(uVar12 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar12 + 0x38) == 0) {
      func_0x03256878(uVar12);
    }
  }
  if (auVar32._0_8_ == (long *)0x0) {
LAB_03e0f5a8:
    func_0x03280cac();
  }
  else {
    lVar16 = **(long **)(uVar12 + 0x38);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c(lVar16);
    }
    lVar27 = *auVar32._0_8_;
    uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar22 != 0) {
      piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar16) {
          puVar10 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e0f40c;
        }
        uVar22 = uVar22 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar22 != 0);
    }
    uVar26 = 0;
    puVar10 = (undefined8 *)func_0x03256b10(auVar32._0_8_);
LAB_03e0f40c:
    unaff_x20 = (long *)(*(code *)*puVar10)(auVar32._0_8_,puVar10[1]);
    puVar30 = PTR_DAT_0774e8e0;
    if (unaff_x20 != (long *)0x0) {
      uVar22 = 0;
      do {
        lVar16 = *unaff_x20;
        uVar23 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar23 != 0) {
          piVar28 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == *(long *)puVar30) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_03e0f478;
            }
            uVar23 = uVar23 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar23 != 0);
        }
        uVar26 = 0;
        puVar10 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f478:
        auVar37 = (*(code *)*puVar10)(unaff_x20,puVar10[1]);
        uVar11 = auVar37._8_8_;
        if ((auVar37._0_8_ & 1) == 0) {
          uVar12 = 0;
          goto LAB_03e0f524;
        }
        lVar16 = *(long *)(*(long *)(uVar12 + 0x38) + 0x10);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
        }
        lVar27 = *unaff_x20;
        uVar23 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar23 != 0) {
          piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar16) {
              puVar10 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_03e0f4ec;
            }
            uVar23 = uVar23 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar23 != 0);
        }
        uVar26 = 0;
        puVar10 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f4ec:
        uVar11 = (*(code *)*puVar10)(unaff_x20,puVar10[1]);
        if (lVar19 == 0) goto LAB_03e0f5a4;
        iVar6 = (int)uVar22;
        (**(code **)(lVar19 + 0x18))
                  (*(undefined8 *)(lVar19 + 0x40),uVar11,uVar22,*(undefined8 *)(lVar19 + 0x28));
        uVar26 = uVar22;
        uVar22 = (ulong)(iVar6 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar39 = func_0x03280ca4(uVar12);
    if (auVar39._8_4_ != 1) break;
    puVar15 = (ulong *)func_0x072ce910(auVar39._0_8_);
    uVar12 = *puVar15;
    func_0x072ce920();
    uVar11 = extraout_x1_02;
LAB_03e0f524:
    if (unaff_x20 != (long *)0x0) {
      lVar19 = *unaff_x20;
      uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar22 != 0) {
        piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar10 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0f57c;
          }
          uVar22 = uVar22 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar22 != 0);
      }
      uVar26 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f57c:
      (*(code *)*puVar10)(unaff_x20,puVar10[1]);
      uVar11 = extraout_x1_01;
    }
    if (uVar12 == 0) {
      auVar32._8_8_ = uVar11;
      return auVar32;
    }
  }
  if (unaff_x20 != (long *)0x0) {
    lVar19 = *unaff_x20;
    uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar12 != 0) {
      piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar10 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e0f64c;
        }
        uVar12 = uVar12 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar12 != 0);
    }
    uVar26 = 0;
    puVar10 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f64c:
    (*(code *)*puVar10)(unaff_x20,puVar10[1]);
  }
  func_0x03365958(auVar39._0_8_);
  func_0x03280ca4(0);
  auVar37 = func_0x02f09514();
  uVar12 = auVar37._8_8_;
  auVar33._0_8_ = auVar37._0_8_;
  lVar19 = tpidr_el0;
  lStack_e8 = *(long *)(lVar19 + 0x28);
  plVar21 = *(long **)(uVar26 + 0x38);
  if (plVar21 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar21 = *(long **)(uVar26 + 0x38);
    if (plVar21 == (long *)0x0) {
      func_0x03256878(uVar26);
      plVar21 = *(long **)(uVar26 + 0x38);
    }
  }
  uVar23 = (ulong)*(uint *)(plVar21[4] + 0xfc);
  uVar22 = uVar23 + 0xf & 0x1fffffff0;
  puVar10 = (undefined8 *)((long)&puStack_f0 - uVar22);
  puVar13 = (undefined8 *)((long)puVar10 - uVar22);
  lVar16 = (long)puVar13 - uVar22;
  uVar22 = uVar23;
  func_0x072ce9a0(lVar16,0);
  puVar30 = unaff_x28;
  if (auVar33._0_8_ == (long *)0x0) {
LAB_03e0f97c:
    func_0x03280cac();
    unaff_x28 = puVar30;
  }
  else {
    lVar27 = *plVar21;
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar20 = *auVar33._0_8_;
    uVar24 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar24 != 0) {
      piVar28 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar27) {
          puVar7 = (undefined8 *)(lVar20 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e0f784;
        }
        uVar24 = uVar24 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar24 != 0);
    }
    uVar22 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(auVar33._0_8_);
LAB_03e0f784:
    plVar21 = (long *)(*(code *)*puVar7)(auVar33._0_8_,puVar7[1]);
    puVar30 = PTR_DAT_0774e8e0;
    if (plVar21 != (long *)0x0) {
      do {
        lVar27 = *plVar21;
        uVar24 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar24 != 0) {
          piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == *(long *)puVar30) {
              puVar7 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_03e0f7ec;
            }
            uVar24 = uVar24 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar24 != 0);
        }
        uVar22 = 0;
        puVar7 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03e0f7ec:
        auVar37 = (*(code *)*puVar7)(plVar21,puVar7[1]);
        uVar11 = auVar37._8_8_;
        if ((auVar37._0_8_ & 1) == 0) {
          uVar26 = 0;
          goto LAB_03e0f8dc;
        }
        lVar27 = *(long *)(*(long *)(uVar26 + 0x38) + 0x10);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        lVar20 = *plVar21;
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar28 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar27) {
              lVar27 = lVar20 + (long)*piVar28 * 0x10 + 0x138;
              goto LAB_03e0f860;
            }
            uVar22 = uVar22 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar22 != 0);
        }
        lVar27 = func_0x03256b10(plVar21,lVar27,0);
LAB_03e0f860:
        lVar27 = *(long *)(lVar27 + 8);
        puStack_f0 = puVar10;
        (**(code **)(lVar27 + 0x10))(*(undefined8 *)(lVar27 + 8),lVar27,plVar21,&puStack_f0,puVar10)
        ;
        func_0x072ce970(lVar16,puVar10,uVar23);
        uVar22 = uVar23;
        func_0x072ce970(puVar13,lVar16);
        if (uVar12 == 0) goto LAB_03e0f978;
        puStack_f0 = puVar13;
        if (-1 < *(int *)(*(long *)(*(long *)(uVar26 + 0x38) + 0x20) + 0x28)) {
          puStack_f0 = (undefined8 *)*puVar13;
        }
        puVar7 = *(undefined8 **)(*(long *)(uVar26 + 0x38) + 0x30);
        uVar22 = uVar12;
        (*(code *)puVar7[2])(*puVar7,puVar7,uVar12,&puStack_f0);
      } while( true );
    }
  }
  puVar30 = unaff_x28;
  func_0x03280cac();
LAB_03e0f984:
  func_0x03280ca4(uVar26);
  do {
    auVar39 = func_0x072ce990();
    uVar11 = auVar39._0_8_;
    if (auVar39._8_4_ != 1) {
      if (plVar21 == (long *)0x0) goto LAB_03e0fa30;
      lVar27 = *plVar21;
      uVar12 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar12 == 0) goto LAB_03e0fa08;
      piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      goto LAB_03e0f9f0;
    }
    puVar15 = (ulong *)func_0x072ce910(uVar11);
    uVar26 = *puVar15;
    func_0x072ce920();
    uVar11 = extraout_x1_04;
LAB_03e0f8dc:
    if (plVar21 != (long *)0x0) {
      lVar27 = *plVar21;
      uVar12 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar7 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0f934;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      uVar22 = 0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03e0f934:
      (*(code *)*puVar7)(plVar21,puVar7[1]);
      uVar11 = extraout_x1_03;
    }
    if (uVar26 != 0) goto LAB_03e0f984;
    if (*(long *)(lVar19 + 0x28) == lStack_e8) {
      auVar33._8_8_ = uVar11;
      return auVar33;
    }
  } while( true );
LAB_03e0f5a4:
  func_0x03280cac(uVar11,uVar11);
  goto LAB_03e0f5a8;
LAB_03e0f978:
  func_0x03280cac();
  goto LAB_03e0f97c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar28 = piVar28 + 4;
    if (uVar12 == 0) break;
LAB_03e0f9f0:
    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar7 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_03e0fa24;
    }
  }
LAB_03e0fa08:
  uVar22 = 0;
  puVar7 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03e0fa24:
  (*(code *)*puVar7)(plVar21,puVar7[1]);
LAB_03e0fa30:
  func_0x03365958(uVar11);
  func_0x03280ca4(0);
  auVar37 = func_0x02f09514();
  plVar8 = auVar37._0_8_;
  *(undefined1 **)(lVar16 + -0x60) = &stack0xffffffffffffff20;
  *(undefined8 *)(lVar16 + -0x58) = 0x3e0fa48;
  *(undefined **)(lVar16 + -0x50) = puVar30;
  *(long *)(lVar16 + -0x48) = lVar19;
  *(long *)(lVar16 + -0x40) = lVar16;
  *(undefined8 **)(lVar16 + -0x38) = puVar13;
  *(undefined8 **)(lVar16 + -0x30) = puVar10;
  *(ulong *)(lVar16 + -0x28) = uVar23;
  *(undefined8 *)(lVar16 + -0x20) = uVar11;
  *(undefined8 *)(lVar16 + -0x18) = 0;
  *(long **)(lVar16 + -0x10) = plVar21;
  *(long **)(lVar16 + -8) = auVar33._0_8_;
  lVar19 = tpidr_el0;
  *(long *)(lVar16 + -0x88) = lVar19;
  *(undefined8 *)(lVar16 + -0x68) = *(undefined8 *)(lVar19 + 0x28);
  plVar21 = *(long **)(uVar22 + 0x38);
  if (plVar21 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar21 = *(long **)(uVar22 + 0x38);
    if (plVar21 == (long *)0x0) {
      func_0x03256878(uVar22);
      plVar21 = *(long **)(uVar22 + 0x38);
    }
  }
  uVar26 = (ulong)*(uint *)(plVar21[4] + 0xfc);
  uVar12 = uVar26 + 0xf & 0x1fffffff0;
  lVar19 = (lVar16 + -0x90) - uVar12;
  puVar10 = (undefined8 *)(lVar19 - uVar12);
  lVar27 = (long)puVar10 - uVar12;
  func_0x072ce9a0(lVar27,0,uVar26);
  plVar29 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    lVar20 = *plVar21;
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar18 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar12 != 0) {
      piVar28 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar20) {
          puVar13 = (undefined8 *)(lVar18 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e0fb60;
        }
        uVar12 = uVar12 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar8,lVar20,0);
LAB_03e0fb60:
    pcVar1 = (code *)*puVar13;
    uVar11 = puVar13[1];
    *(long **)(lVar16 + -0x90) = plVar8;
    plVar29 = (long *)(*pcVar1)(plVar8,uVar11);
    puVar30 = PTR_DAT_0774e8e0;
    if (plVar29 != (long *)0x0) {
      iVar6 = 0;
      plVar21 = (long *)(lVar16 + -0x6c);
      do {
        lVar20 = *plVar29;
        uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar12 != 0) {
          piVar28 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == *(long *)puVar30) {
              puVar13 = (undefined8 *)(lVar20 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_03e0fbd4;
            }
            uVar12 = uVar12 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar29,*(long *)puVar30,0);
LAB_03e0fbd4:
        auVar34 = (*(code *)*puVar13)(plVar29,puVar13[1]);
        uVar11 = auVar34._8_8_;
        if ((auVar34._0_8_ & 1) == 0) {
          uVar22 = 0;
          goto LAB_03e0fcd0;
        }
        lVar20 = *(long *)(*(long *)(uVar22 + 0x38) + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
        }
        lVar18 = *plVar29;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 != 0) {
          piVar28 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar20) {
              lVar20 = lVar18 + (long)*piVar28 * 0x10 + 0x138;
              goto LAB_03e0fc48;
            }
            uVar12 = uVar12 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar12 != 0);
        }
        lVar20 = func_0x03256b10(plVar29,lVar20,0);
LAB_03e0fc48:
        *(long *)(lVar16 + -0x80) = lVar19;
        lVar20 = *(long *)(lVar20 + 8);
        (**(code **)(lVar20 + 0x10))
                  (*(undefined8 *)(lVar20 + 8),lVar20,plVar29,lVar16 + -0x80,lVar19);
        func_0x072ce970(lVar27,lVar19,uVar26);
        func_0x072ce970(puVar10,lVar27,uVar26);
        if (auVar37._8_8_ == 0) goto LAB_03e0fd6c;
        puVar13 = puVar10;
        if (-1 < *(int *)(*(long *)(*(long *)(uVar22 + 0x38) + 0x20) + 0x28)) {
          puVar13 = (undefined8 *)*puVar10;
        }
        puVar7 = *(undefined8 **)(*(long *)(uVar22 + 0x38) + 0x30);
        uVar11 = *puVar7;
        *(int *)(lVar16 + -0x6c) = iVar6;
        *(undefined8 **)(lVar16 + -0x80) = puVar13;
        *(long **)(lVar16 + -0x78) = plVar21;
        (*(code *)puVar7[2])(uVar11,puVar7,auVar37._8_8_,lVar16 + -0x80,lVar16 + -0x6c);
        iVar6 = iVar6 + 1;
      } while( true );
    }
    goto LAB_03e0fd74;
  }
LAB_03e0fd70:
  func_0x03280cac();
LAB_03e0fd74:
  func_0x03280cac();
LAB_03e0fd78:
  uVar9 = func_0x03280ca4(uVar22);
  do {
    auVar39 = func_0x072ce990(uVar9);
    if (auVar39._8_4_ != 1) {
      if (plVar29 == (long *)0x0) goto LAB_03e0fe24;
      lVar19 = *plVar29;
      uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar12 == 0) goto LAB_03e0fdfc;
      piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      goto LAB_03e0fde4;
    }
    puVar15 = (ulong *)func_0x072ce910(auVar39._0_8_);
    uVar22 = *puVar15;
    func_0x072ce920();
    uVar11 = extraout_x1_06;
LAB_03e0fcd0:
    if (plVar29 != (long *)0x0) {
      lVar19 = *plVar29;
      uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar10 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0fd28;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_0774e8c8,0);
LAB_03e0fd28:
      (*(code *)*puVar10)(plVar29,puVar10[1]);
      uVar11 = extraout_x1_05;
    }
    if (uVar22 != 0) goto LAB_03e0fd78;
    uVar9 = *(undefined8 *)(lVar16 + -0x90);
    if (*(long *)(*(long *)(lVar16 + -0x88) + 0x28) == *(long *)(lVar16 + -0x68)) {
      auVar35._8_8_ = uVar11;
      auVar35._0_8_ = uVar9;
      return auVar35;
    }
  } while( true );
LAB_03e0fd6c:
  func_0x03280cac();
  goto LAB_03e0fd70;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar28 = piVar28 + 4;
    if (uVar12 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar10 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar21 = (long *)0x0;
  puVar10 = (undefined8 *)func_0x03256b10(plVar29);
LAB_04145ad4:
  (*(code *)*puVar10)(plVar29,puVar10[1]);
LAB_04145ae0:
  func_0x03365958(auVar39._0_8_);
  func_0x03280ca4(0);
  auVar37 = func_0x02f09514();
  lVar19 = auVar37._0_8_;
  auVar37 = func_0x03f898d4(*(undefined8 *)(lVar19 + 0x10),auVar37._8_8_,0,
                            *(undefined4 *)(lVar19 + 0x18),
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(*(long *)(plVar21[4] + 0xc0) + 0xd0) +
                                                 0x20) + 0xc0) + 0x158));
  uVar11 = auVar37._8_8_;
  if (-1 < (int)auVar37._0_4_) {
    func_0x04145da4(lVar19,auVar37._0_8_ & 0xffffffff);
    uVar11 = extraout_x1_11;
  }
  auVar38._4_4_ = 0;
  auVar38._0_4_ = ~auVar37._0_4_ >> 0x1f;
  auVar38._8_8_ = uVar11;
  return auVar38;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar28 = piVar28 + 4;
    if (uVar12 == 0) break;
LAB_03e0fde4:
    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar10 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_03e0fe18;
    }
  }
LAB_03e0fdfc:
  puVar10 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_0774e8c8,0);
LAB_03e0fe18:
  (*(code *)*puVar10)(plVar29,puVar10[1]);
LAB_03e0fe24:
  func_0x03365958(auVar39._0_8_);
  func_0x03280ca4(0);
  auVar37 = func_0x02f09514();
  lVar16 = auVar37._8_8_;
  plVar8 = auVar37._0_8_;
  *(undefined8 *)(lVar27 + -0x20) = 0x3e0fe3c;
  *(long **)(lVar27 + -0x10) = plVar29;
  *(long **)(lVar27 + -8) = plVar21;
  lVar19 = lVar16;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
    lVar19 = extraout_x1_07;
  }
  if (plVar8 == (long *)0x0) {
    uVar12 = 1;
  }
  else {
    lVar19 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar16 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar12 != 0) {
      piVar28 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar19) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e0fed0;
        }
        uVar12 = uVar12 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar8,lVar19,0);
LAB_03e0fed0:
    iVar6 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    uVar12 = (ulong)(iVar6 == 0);
    lVar19 = extraout_x1_08;
  }
  auVar36._8_8_ = lVar19;
  auVar36._0_8_ = uVar12;
  return auVar36;
}

