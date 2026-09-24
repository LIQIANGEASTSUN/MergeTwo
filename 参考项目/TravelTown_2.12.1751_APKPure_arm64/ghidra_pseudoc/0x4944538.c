/* Ghidra 12.1.2 native pseudocode; RVA 0x4944538; MergeEngine.Util.WeightedItemList<TItem>.get_Count; status ok */


/* WARNING: Possible PIC construction at 0x04144590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04144594) */

long * MergeEngine_Util_WeightedItemList_TItem___get_Count
                 (long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  ulong *puVar15;
  long lVar16;
  long *plVar17;
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
  long *plVar29;
  long *unaff_x20;
  long *plVar30;
  undefined *puVar31;
  undefined *unaff_x28;
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined8 auStack_1b0 [4];
  long alStack_190 [2];
  long alStack_180 [2];
  undefined1 auStack_16c [12];
  undefined1 auStack_160 [8];
  long alStack_158 [11];
  undefined8 *puStack_100;
  long lStack_f8;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  auVar32 = func_0x03280cac();
  lVar19 = auVar32._8_8_;
  if (lVar19 != 0) {
    lVar16 = *(long *)(auVar32._0_8_ + 0x10);
    lVar27 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    *(undefined4 *)(auVar32._0_8_ + 0x18) = *(undefined4 *)(lVar19 + 0x18);
    if (lVar16 != 0) {
      lVar20 = *(long *)(lVar16 + 0x10);
      lVar27 = *(long *)(lVar27 + 0x78);
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar20 != 0) {
        uVar6 = *(uint *)(lVar16 + 0x18);
        if (uVar6 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar6 + 1;
          plVar21 = (long *)(lVar20 + (long)(int)uVar6 * 8 + 0x20);
          *plVar21 = lVar19;
          goto SUB_032809c4;
        }
        uVar6 = *(uint *)(lVar16 + 0x18);
        lVar27 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                        + 0x70) + 0x20) + 0xc0) + 0x78);
        func_0x04144aa0(lVar16,uVar6 + 1);
        lVar20 = *(long *)(lVar16 + 0x10);
        *(uint *)(lVar16 + 0x18) = uVar6 + 1;
        if (lVar20 == 0) {
          func_0x03280cac();
        }
        else if (uVar6 < *(uint *)(lVar20 + 0x18)) {
          plVar21 = (long *)(lVar20 + (long)(int)uVar6 * 8 + 0x20);
          *plVar21 = lVar19;
          goto SUB_032809c4;
        }
        auVar32 = func_0x03280cb4();
        lVar20 = auVar32._8_8_;
        lVar19 = auVar32._0_8_;
        lVar18 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x58);
        func_0x03ec2768(lVar20,0x14);
        lVar16 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
        }
        if (lVar20 == 0) {
LAB_0414454c:
          lVar8 = 0;
        }
        else {
          lVar8 = func_0x03280b90(lVar20,lVar16);
          if (lVar8 == 0) {
            func_0x03281048(lVar20,lVar16);
            goto LAB_0414454c;
          }
        }
        lVar16 = *(long *)(lVar19 + 0x10);
        lVar25 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (lVar16 != 0) {
          uVar6 = *(uint *)(lVar19 + 0x18);
          if (uVar6 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar6 + 1;
            plVar21 = (long *)(lVar16 + (long)(int)uVar6 * 8 + 0x20);
            *plVar21 = lVar8;
SUB_032809c4:
            if (iRam00000000080486b8 != 0) {
              puVar15 = (ulong *)(((ulong)plVar21 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar15,0x10);
                if (bVar3) {
                  *puVar15 = *puVar15 | 1L << ((ulong)plVar21 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            return plVar21;
          }
          func_0x0414446c(lVar19,lVar8,
                          *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
LAB_041445ac:
          return (long *)(ulong)(*(int *)(lVar19 + 0x18) - 1);
        }
        auVar33 = func_0x03280cac();
        uVar10 = auVar33._0_8_;
        if (auVar33._8_4_ == 1) {
          puVar9 = (undefined8 *)func_0x072ce910(uVar10);
          uVar10 = func_0x03280a2c(PTR_DAT_077542c0);
          uVar11 = func_0x032810d8(uVar10,*(undefined8 *)*puVar9);
          if ((uVar11 & 1) != 0) {
            func_0x072ce920();
            uVar10 = *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x68);
            lVar16 = func_0x03280a2c(PTR_DAT_0774e558);
            if (*(int *)(lVar16 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar10 = func_0x057a51c4(uVar10,0);
            func_0x057b7b18(lVar20,uVar10,0);
            goto LAB_041445ac;
          }
          puVar12 = (undefined8 *)func_0x072ce930(8);
          *puVar12 = *puVar9;
          lVar18 = 0;
          uVar10 = func_0x072ce940(puVar12,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
          func_0x072ce920();
        }
        func_0x03365958(uVar10);
        auVar32 = func_0x02f09514();
        plVar17 = auVar32._8_8_;
        plVar29 = auVar32._0_8_;
        uVar6 = *(uint *)(plVar29 + 3);
        lVar19 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x90);
        uVar11 = (ulong)uVar6;
        plVar30 = (long *)0x7e18000;
        plVar21 = plVar17;
        if ((bRam0000000007e18233 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774e8c8);
          func_0x03280a18(PTR_DAT_0774e8e0);
          bRam0000000007e18233 = 1;
        }
        if (plVar17 == (long *)0x0) {
          func_0x057a867c(6,0);
        }
        if (*(uint *)(plVar29 + 3) < uVar6) {
          func_0x057b8434(0);
        }
        lVar16 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
        }
        plVar13 = (long *)func_0x03280b90(plVar17,lVar16);
        if (plVar13 == (long *)0x0) {
          if ((int)uVar6 < (int)plVar29[3]) {
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
                    puVar9 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_04145868;
                  }
                  uVar26 = uVar26 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar26 != 0);
              }
              plVar21 = (long *)0x0;
              puVar9 = (undefined8 *)func_0x03256b10(plVar17);
LAB_04145868:
              plVar30 = (long *)(*(code *)*puVar9)(plVar17,puVar9[1]);
              puVar31 = PTR_DAT_0774e8e0;
              if (plVar30 != (long *)0x0) {
                do {
                  lVar16 = *plVar30;
                  uVar26 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar26 != 0) {
                    piVar28 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == *(long *)puVar31) {
                        puVar9 = (undefined8 *)(lVar16 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_041458d0;
                      }
                      uVar26 = uVar26 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar26 != 0);
                  }
                  plVar21 = (long *)0x0;
                  puVar9 = (undefined8 *)func_0x03256b10(plVar30);
LAB_041458d0:
                  plVar14 = (long *)(*(code *)*puVar9)(plVar30,puVar9[1]);
                  if (((ulong)plVar14 & 1) == 0) {
                    uVar11 = 0;
                    iVar5 = 5;
                    if (plVar30 == (long *)0x0) goto LAB_041459e8;
                    goto LAB_04145988;
                  }
                  lVar16 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x148);
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = func_0x0325681c(lVar16);
                  }
                  lVar27 = *plVar30;
                  uVar26 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar26 != 0) {
                    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar16) {
                        puVar9 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_04145948;
                      }
                      uVar26 = uVar26 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar26 != 0);
                  }
                  puVar9 = (undefined8 *)func_0x03256b10(plVar30,lVar16,0);
LAB_04145948:
                  plVar21 = (long *)(*(code *)*puVar9)(plVar30,puVar9[1]);
                  func_0x04145380(plVar29,uVar11,plVar21,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x160));
                  uVar11 = (ulong)((int)uVar11 + 1);
                } while( true );
              }
            }
            func_0x03280cac();
            do {
              auVar33 = func_0x03280ca4(uVar11);
              if (auVar33._8_4_ != 1) {
                if (plVar30 == (long *)0x0) goto LAB_04145ae0;
                lVar19 = *plVar30;
                uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar11 == 0) goto LAB_04145ab8;
                piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                goto LAB_04145aa0;
              }
              puVar15 = (ulong *)func_0x072ce910(auVar33._0_8_);
              uVar11 = *puVar15;
              plVar14 = (long *)func_0x072ce920();
              iVar5 = 0;
              if (plVar30 != (long *)0x0) {
LAB_04145988:
                lVar16 = *plVar30;
                uVar26 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar26 != 0) {
                  piVar28 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
                      puVar9 = (undefined8 *)(lVar16 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_041459dc;
                    }
                    uVar26 = uVar26 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar26 != 0);
                }
                plVar21 = (long *)0x0;
                puVar9 = (undefined8 *)func_0x03256b10(plVar30);
LAB_041459dc:
                plVar14 = (long *)(*(code *)*puVar9)(plVar30,puVar9[1]);
              }
LAB_041459e8:
            } while (uVar11 != 0);
            if (iVar5 == 5) goto LAB_04145a10;
            if (iVar5 != 0) {
              return plVar14;
            }
          }
          plVar14 = (long *)func_0x041462cc(plVar29,plVar17,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x40));
        }
        else {
          lVar16 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x28);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = func_0x0325681c(lVar16);
          }
          lVar27 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar11 != 0) {
            piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == lVar16) {
                puVar9 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_04145728;
              }
              uVar11 = uVar11 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)func_0x03256b10(plVar13,lVar16,0);
LAB_04145728:
          plVar14 = (long *)(*(code *)*puVar9)(plVar13,puVar9[1]);
          iVar5 = (int)plVar14;
          if (0 < iVar5) {
            func_0x04144aa0(plVar29,(int)plVar29[3] + iVar5,
                            *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x78));
            iVar4 = (int)plVar29[3] - uVar6;
            if (iVar4 != 0 && (int)uVar6 <= (int)plVar29[3]) {
              func_0x057b9f30(plVar29[2],uVar6,plVar29[2],iVar5 + uVar6,iVar4,0);
            }
            if (plVar29 == plVar13) {
              func_0x057b9f30(plVar29[2],0,plVar29[2],uVar6,uVar6,0);
              plVar14 = (long *)func_0x057b9f30(plVar29[2],iVar5 + uVar6,plVar29[2],uVar6 << 1,
                                                (int)plVar29[3] - uVar6,0);
            }
            else {
              lVar16 = plVar29[2];
              lVar19 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x28);
              if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                lVar19 = func_0x0325681c(lVar19);
              }
              lVar27 = *plVar13;
              uVar11 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar11 != 0) {
                piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar19) {
                    puVar9 = (undefined8 *)(lVar27 + (long)(*piVar28 + 5) * 0x10 + 0x138);
                    goto LAB_04145838;
                  }
                  uVar11 = uVar11 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar11 != 0);
              }
              puVar9 = (undefined8 *)func_0x03256b10(plVar13,lVar19,5);
LAB_04145838:
              plVar14 = (long *)(*(code *)*puVar9)(plVar13,lVar16,uVar6,puVar9[1]);
            }
            *(int *)(plVar29 + 3) = (int)plVar29[3] + iVar5;
          }
        }
LAB_04145a10:
        *(int *)((long)plVar29 + 0x1c) = *(int *)((long)plVar29 + 0x1c) + 1;
        return plVar14;
      }
    }
  }
  auVar32 = func_0x03280cac();
  plVar21 = auVar32._8_8_;
  lVar19 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c(lVar19);
  }
  lVar19 = func_0x03280ca0(lVar19);
  lVar16 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  func_0x054221d4(lVar19,auVar32._0_8_,*(undefined8 *)(lVar16 + 0x80),*(undefined8 *)(lVar16 + 0x90)
                 );
  uVar26 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x98);
  uVar11 = uVar26;
  if (*(long *)(uVar26 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar26 + 0x38) == 0) {
      func_0x03256878(uVar26);
    }
  }
  if (plVar21 == (long *)0x0) goto LAB_03e0f290;
  lVar16 = **(long **)(uVar26 + 0x38);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c(lVar16);
  }
  lVar27 = *plVar21;
  uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
  if (uVar22 != 0) {
    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == lVar16) {
        puVar9 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
        goto LAB_03e0f108;
      }
      uVar22 = uVar22 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar22 != 0);
  }
  uVar11 = 0;
  puVar9 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03e0f108:
  unaff_x20 = (long *)(*(code *)*puVar9)(plVar21,puVar9[1]);
  puVar31 = PTR_DAT_0774e8e0;
  if (unaff_x20 != (long *)0x0) {
    do {
      lVar16 = *unaff_x20;
      uVar22 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar22 != 0) {
        piVar28 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)puVar31) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0f170;
          }
          uVar22 = uVar22 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar22 != 0);
      }
      uVar11 = 0;
      puVar9 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f170:
      uVar22 = (*(code *)*puVar9)(unaff_x20,puVar9[1]);
      if ((uVar22 & 1) == 0) {
        uVar26 = 0;
        goto LAB_03e0f210;
      }
      lVar16 = *(long *)(*(long *)(uVar26 + 0x38) + 0x10);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
      }
      lVar27 = *unaff_x20;
      uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar22 != 0) {
        piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == lVar16) {
            puVar9 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0f1e4;
          }
          uVar22 = uVar22 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar22 != 0);
      }
      uVar11 = 0;
      puVar9 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f1e4:
      uVar10 = (*(code *)*puVar9)(unaff_x20,puVar9[1]);
      if (lVar19 == 0) goto LAB_03e0f28c;
      uVar11 = *(ulong *)(lVar19 + 0x28);
      (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40));
    } while( true );
  }
LAB_03e0f294:
  func_0x03280cac();
  while( true ) {
    auVar33 = func_0x03280ca4(uVar26);
    if (auVar33._8_4_ != 1) break;
    puVar15 = (ulong *)func_0x072ce910(auVar33._0_8_);
    uVar26 = *puVar15;
    func_0x072ce920();
LAB_03e0f210:
    if (unaff_x20 != (long *)0x0) {
      lVar19 = *unaff_x20;
      uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar22 != 0) {
        piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0f268;
          }
          uVar22 = uVar22 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar22 != 0);
      }
      uVar11 = 0;
      puVar9 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f268:
      (*(code *)*puVar9)(unaff_x20,puVar9[1]);
    }
    if (uVar26 == 0) {
      return plVar21;
    }
  }
  if (unaff_x20 != (long *)0x0) {
    lVar19 = *unaff_x20;
    uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar26 != 0) {
      piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar9 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e0f334;
        }
        uVar26 = uVar26 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar26 != 0);
    }
    uVar11 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f334:
    (*(code *)*puVar9)(unaff_x20,puVar9[1]);
  }
  func_0x03365958(auVar33._0_8_);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  lVar19 = auVar32._8_8_;
  plVar21 = auVar32._0_8_;
  uVar26 = uVar11;
  if (*(long *)(uVar11 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar11 + 0x38) == 0) {
      func_0x03256878(uVar11);
    }
  }
  if (plVar21 == (long *)0x0) {
LAB_03e0f5a8:
    func_0x03280cac();
  }
  else {
    lVar16 = **(long **)(uVar11 + 0x38);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c(lVar16);
    }
    lVar27 = *plVar21;
    uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar22 != 0) {
      piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar16) {
          puVar9 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e0f40c;
        }
        uVar22 = uVar22 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar22 != 0);
    }
    uVar26 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03e0f40c:
    unaff_x20 = (long *)(*(code *)*puVar9)(plVar21,puVar9[1]);
    puVar31 = PTR_DAT_0774e8e0;
    if (unaff_x20 != (long *)0x0) {
      uVar22 = 0;
      do {
        lVar16 = *unaff_x20;
        uVar23 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar23 != 0) {
          piVar28 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == *(long *)puVar31) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_03e0f478;
            }
            uVar23 = uVar23 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar23 != 0);
        }
        uVar26 = 0;
        puVar9 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f478:
        uVar23 = (*(code *)*puVar9)(unaff_x20,puVar9[1]);
        if ((uVar23 & 1) == 0) {
          uVar11 = 0;
          goto LAB_03e0f524;
        }
        lVar16 = *(long *)(*(long *)(uVar11 + 0x38) + 0x10);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
        }
        lVar27 = *unaff_x20;
        uVar23 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar23 != 0) {
          piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar16) {
              puVar9 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_03e0f4ec;
            }
            uVar23 = uVar23 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar23 != 0);
        }
        uVar26 = 0;
        puVar9 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f4ec:
        uVar10 = (*(code *)*puVar9)(unaff_x20,puVar9[1]);
        if (lVar19 == 0) goto LAB_03e0f5a4;
        iVar5 = (int)uVar22;
        (**(code **)(lVar19 + 0x18))
                  (*(undefined8 *)(lVar19 + 0x40),uVar10,uVar22,*(undefined8 *)(lVar19 + 0x28));
        uVar26 = uVar22;
        uVar22 = (ulong)(iVar5 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar33 = func_0x03280ca4(uVar11);
    if (auVar33._8_4_ != 1) break;
    puVar15 = (ulong *)func_0x072ce910(auVar33._0_8_);
    uVar11 = *puVar15;
    func_0x072ce920();
LAB_03e0f524:
    if (unaff_x20 != (long *)0x0) {
      lVar19 = *unaff_x20;
      uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar22 != 0) {
        piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0f57c;
          }
          uVar22 = uVar22 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar22 != 0);
      }
      uVar26 = 0;
      puVar9 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f57c:
      (*(code *)*puVar9)(unaff_x20,puVar9[1]);
    }
    if (uVar11 == 0) {
      return plVar21;
    }
  }
  if (unaff_x20 != (long *)0x0) {
    lVar19 = *unaff_x20;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar11 != 0) {
      piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar9 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e0f64c;
        }
        uVar11 = uVar11 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar11 != 0);
    }
    uVar26 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f64c:
    (*(code *)*puVar9)(unaff_x20,puVar9[1]);
  }
  func_0x03365958(auVar33._0_8_);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  uVar11 = auVar32._8_8_;
  plVar21 = auVar32._0_8_;
  lVar19 = tpidr_el0;
  lStack_f8 = *(long *)(lVar19 + 0x28);
  plVar29 = *(long **)(uVar26 + 0x38);
  if (plVar29 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar29 = *(long **)(uVar26 + 0x38);
    if (plVar29 == (long *)0x0) {
      func_0x03256878(uVar26);
      plVar29 = *(long **)(uVar26 + 0x38);
    }
  }
  uVar23 = (ulong)*(uint *)(plVar29[4] + 0xfc);
  uVar22 = uVar23 + 0xf & 0x1fffffff0;
  puVar9 = (undefined8 *)((long)&puStack_100 - uVar22);
  puVar12 = (undefined8 *)((long)puVar9 - uVar22);
  lVar16 = (long)puVar12 - uVar22;
  uVar22 = uVar23;
  func_0x072ce9a0(lVar16,0);
  puVar31 = unaff_x28;
  if (plVar21 == (long *)0x0) {
LAB_03e0f97c:
    func_0x03280cac();
    unaff_x28 = puVar31;
  }
  else {
    lVar27 = *plVar29;
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar20 = *plVar21;
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
    puVar7 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03e0f784:
    plVar29 = (long *)(*(code *)*puVar7)(plVar21,puVar7[1]);
    puVar31 = PTR_DAT_0774e8e0;
    if (plVar29 != (long *)0x0) {
      do {
        lVar27 = *plVar29;
        uVar24 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar24 != 0) {
          piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == *(long *)puVar31) {
              puVar7 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_03e0f7ec;
            }
            uVar24 = uVar24 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar24 != 0);
        }
        uVar22 = 0;
        puVar7 = (undefined8 *)func_0x03256b10(plVar29);
LAB_03e0f7ec:
        uVar24 = (*(code *)*puVar7)(plVar29,puVar7[1]);
        if ((uVar24 & 1) == 0) {
          uVar26 = 0;
          goto LAB_03e0f8dc;
        }
        lVar27 = *(long *)(*(long *)(uVar26 + 0x38) + 0x10);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        lVar20 = *plVar29;
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
        lVar27 = func_0x03256b10(plVar29,lVar27,0);
LAB_03e0f860:
        lVar27 = *(long *)(lVar27 + 8);
        puStack_100 = puVar9;
        (**(code **)(lVar27 + 0x10))(*(undefined8 *)(lVar27 + 8),lVar27,plVar29,&puStack_100,puVar9)
        ;
        func_0x072ce970(lVar16,puVar9,uVar23);
        uVar22 = uVar23;
        func_0x072ce970(puVar12,lVar16);
        if (uVar11 == 0) goto LAB_03e0f978;
        puStack_100 = puVar12;
        if (-1 < *(int *)(*(long *)(*(long *)(uVar26 + 0x38) + 0x20) + 0x28)) {
          puStack_100 = (undefined8 *)*puVar12;
        }
        puVar7 = *(undefined8 **)(*(long *)(uVar26 + 0x38) + 0x30);
        uVar22 = uVar11;
        (*(code *)puVar7[2])(*puVar7,puVar7,uVar11,&puStack_100);
      } while( true );
    }
  }
  puVar31 = unaff_x28;
  func_0x03280cac();
LAB_03e0f984:
  func_0x03280ca4(uVar26);
  do {
    auVar33 = func_0x072ce990();
    uVar10 = auVar33._0_8_;
    if (auVar33._8_4_ != 1) {
      if (plVar29 == (long *)0x0) goto LAB_03e0fa30;
      lVar27 = *plVar29;
      uVar11 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar11 == 0) goto LAB_03e0fa08;
      piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      goto LAB_03e0f9f0;
    }
    puVar15 = (ulong *)func_0x072ce910(uVar10);
    uVar26 = *puVar15;
    func_0x072ce920();
LAB_03e0f8dc:
    if (plVar29 != (long *)0x0) {
      lVar27 = *plVar29;
      uVar11 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar11 != 0) {
        piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar7 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0f934;
          }
          uVar11 = uVar11 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar11 != 0);
      }
      uVar22 = 0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar29);
LAB_03e0f934:
      (*(code *)*puVar7)(plVar29,puVar7[1]);
    }
    if (uVar26 != 0) goto LAB_03e0f984;
    if (*(long *)(lVar19 + 0x28) == lStack_f8) {
      return plVar21;
    }
  } while( true );
LAB_03e0f28c:
  func_0x03280cac(uVar10,uVar10);
LAB_03e0f290:
  func_0x03280cac();
  goto LAB_03e0f294;
LAB_03e0f5a4:
  func_0x03280cac(uVar10,uVar10);
  goto LAB_03e0f5a8;
LAB_03e0f978:
  func_0x03280cac();
  goto LAB_03e0f97c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar28 = piVar28 + 4;
    if (uVar11 == 0) break;
LAB_03e0f9f0:
    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar7 = (undefined8 *)(lVar27 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_03e0fa24;
    }
  }
LAB_03e0fa08:
  uVar22 = 0;
  puVar7 = (undefined8 *)func_0x03256b10(plVar29);
LAB_03e0fa24:
  (*(code *)*puVar7)(plVar29,puVar7[1]);
LAB_03e0fa30:
  func_0x03365958(uVar10);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  plVar30 = auVar32._0_8_;
  *(undefined1 **)(lVar16 + -0x60) = &stack0xffffffffffffff10;
  *(undefined8 *)(lVar16 + -0x58) = 0x3e0fa48;
  *(undefined **)(lVar16 + -0x50) = puVar31;
  *(long *)(lVar16 + -0x48) = lVar19;
  *(long *)(lVar16 + -0x40) = lVar16;
  *(undefined8 **)(lVar16 + -0x38) = puVar12;
  *(undefined8 **)(lVar16 + -0x30) = puVar9;
  *(ulong *)(lVar16 + -0x28) = uVar23;
  *(undefined8 *)(lVar16 + -0x20) = uVar10;
  *(undefined8 *)(lVar16 + -0x18) = 0;
  *(long **)(lVar16 + -0x10) = plVar29;
  *(long **)(lVar16 + -8) = plVar21;
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
  uVar11 = uVar26 + 0xf & 0x1fffffff0;
  lVar19 = (lVar16 + -0x90) - uVar11;
  puVar9 = (undefined8 *)(lVar19 - uVar11);
  lVar27 = (long)puVar9 - uVar11;
  func_0x072ce9a0(lVar27,0,uVar26);
  plVar29 = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    lVar20 = *plVar21;
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar18 = *plVar30;
    uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar11 != 0) {
      piVar28 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar20) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e0fb60;
        }
        uVar11 = uVar11 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar30,lVar20,0);
LAB_03e0fb60:
    pcVar1 = (code *)*puVar12;
    uVar10 = puVar12[1];
    *(long **)(lVar16 + -0x90) = plVar30;
    plVar29 = (long *)(*pcVar1)(plVar30,uVar10);
    puVar31 = PTR_DAT_0774e8e0;
    if (plVar29 != (long *)0x0) {
      iVar5 = 0;
      plVar21 = (long *)(lVar16 + -0x6c);
      do {
        lVar20 = *plVar29;
        uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar11 != 0) {
          piVar28 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == *(long *)puVar31) {
              puVar12 = (undefined8 *)(lVar20 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_03e0fbd4;
            }
            uVar11 = uVar11 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)func_0x03256b10(plVar29,*(long *)puVar31,0);
LAB_03e0fbd4:
        uVar11 = (*(code *)*puVar12)(plVar29,puVar12[1]);
        if ((uVar11 & 1) == 0) {
          uVar22 = 0;
          goto LAB_03e0fcd0;
        }
        lVar20 = *(long *)(*(long *)(uVar22 + 0x38) + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
        }
        lVar18 = *plVar29;
        uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar11 != 0) {
          piVar28 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar20) {
              lVar20 = lVar18 + (long)*piVar28 * 0x10 + 0x138;
              goto LAB_03e0fc48;
            }
            uVar11 = uVar11 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar11 != 0);
        }
        lVar20 = func_0x03256b10(plVar29,lVar20,0);
LAB_03e0fc48:
        *(long *)(lVar16 + -0x80) = lVar19;
        lVar20 = *(long *)(lVar20 + 8);
        (**(code **)(lVar20 + 0x10))
                  (*(undefined8 *)(lVar20 + 8),lVar20,plVar29,lVar16 + -0x80,lVar19);
        func_0x072ce970(lVar27,lVar19,uVar26);
        func_0x072ce970(puVar9,lVar27,uVar26);
        if (auVar32._8_8_ == 0) goto LAB_03e0fd6c;
        puVar12 = puVar9;
        if (-1 < *(int *)(*(long *)(*(long *)(uVar22 + 0x38) + 0x20) + 0x28)) {
          puVar12 = (undefined8 *)*puVar9;
        }
        puVar7 = *(undefined8 **)(*(long *)(uVar22 + 0x38) + 0x30);
        uVar10 = *puVar7;
        *(int *)(lVar16 + -0x6c) = iVar5;
        *(undefined8 **)(lVar16 + -0x80) = puVar12;
        *(long **)(lVar16 + -0x78) = plVar21;
        (*(code *)puVar7[2])(uVar10,puVar7,auVar32._8_8_,lVar16 + -0x80,lVar16 + -0x6c);
        iVar5 = iVar5 + 1;
      } while( true );
    }
    goto LAB_03e0fd74;
  }
LAB_03e0fd70:
  func_0x03280cac();
LAB_03e0fd74:
  func_0x03280cac();
LAB_03e0fd78:
  plVar30 = (long *)func_0x03280ca4(uVar22);
  do {
    auVar33 = func_0x072ce990(plVar30);
    if (auVar33._8_4_ != 1) {
      if (plVar29 == (long *)0x0) goto LAB_03e0fe24;
      lVar19 = *plVar29;
      uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar11 == 0) goto LAB_03e0fdfc;
      piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      goto LAB_03e0fde4;
    }
    puVar15 = (ulong *)func_0x072ce910(auVar33._0_8_);
    uVar22 = *puVar15;
    func_0x072ce920();
LAB_03e0fcd0:
    if (plVar29 != (long *)0x0) {
      lVar19 = *plVar29;
      uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar11 != 0) {
        piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03e0fd28;
          }
          uVar11 = uVar11 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_0774e8c8,0);
LAB_03e0fd28:
      (*(code *)*puVar9)(plVar29,puVar9[1]);
    }
    if (uVar22 != 0) goto LAB_03e0fd78;
    plVar30 = *(long **)(lVar16 + -0x90);
    if (*(long *)(*(long *)(lVar16 + -0x88) + 0x28) == *(long *)(lVar16 + -0x68)) {
      return plVar30;
    }
  } while( true );
LAB_03e0fd6c:
  func_0x03280cac();
  goto LAB_03e0fd70;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar28 = piVar28 + 4;
    if (uVar11 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar9 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar21 = (long *)0x0;
  puVar9 = (undefined8 *)func_0x03256b10(plVar30);
LAB_04145ad4:
  (*(code *)*puVar9)(plVar30,puVar9[1]);
LAB_04145ae0:
  func_0x03365958(auVar33._0_8_);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  lVar19 = auVar32._0_8_;
  uVar6 = func_0x03f898d4(*(undefined8 *)(lVar19 + 0x10),auVar32._8_8_,0,
                          *(undefined4 *)(lVar19 + 0x18),
                          *(undefined8 *)
                           (*(long *)(*(long *)(*(long *)(*(long *)(plVar21[4] + 0xc0) + 0xd0) +
                                               0x20) + 0xc0) + 0x158));
  if (-1 < (int)uVar6) {
    func_0x04145da4(lVar19,uVar6);
  }
  return (long *)(ulong)(~uVar6 >> 0x1f);
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar28 = piVar28 + 4;
    if (uVar11 == 0) break;
LAB_03e0fde4:
    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar9 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_03e0fe18;
    }
  }
LAB_03e0fdfc:
  puVar9 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_0774e8c8,0);
LAB_03e0fe18:
  (*(code *)*puVar9)(plVar29,puVar9[1]);
LAB_03e0fe24:
  func_0x03365958(auVar33._0_8_);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  lVar19 = auVar32._8_8_;
  plVar30 = auVar32._0_8_;
  *(undefined8 *)(lVar27 + -0x20) = 0x3e0fe3c;
  *(long **)(lVar27 + -0x10) = plVar29;
  *(long **)(lVar27 + -8) = plVar21;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (plVar30 == (long *)0x0) {
    plVar21 = (long *)0x1;
  }
  else {
    lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar16 = *plVar30;
    uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar11 != 0) {
      piVar28 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar19) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e0fed0;
        }
        uVar11 = uVar11 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar30,lVar19,0);
LAB_03e0fed0:
    iVar5 = (*(code *)*puVar9)(plVar30,puVar9[1]);
    plVar21 = (long *)(ulong)(iVar5 == 0);
  }
  return plVar21;
}

