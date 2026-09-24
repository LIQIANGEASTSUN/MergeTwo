/* Ghidra 12.1.2 native pseudocode; RVA 0x6A25ACC; MergeEngine.Configuration.Definitions.Reward.AddViewData; status ok */


/* WARNING: Possible PIC construction at 0x04144590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b25d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b25d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b25d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b25dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b25d90) */
/* WARNING: Removing unreachable block (ram,0x06b25d6c) */
/* WARNING: Removing unreachable block (ram,0x06b25d0c) */
/* WARNING: Removing unreachable block (ram,0x04144594) */
/* WARNING: Removing unreachable block (ram,0x06b25db0) */

undefined1  [16]
MergeEngine_Configuration_Definitions_Reward__AddViewData(long param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar14;
  undefined8 extraout_x1_01;
  long extraout_x1_02;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  
  if ((bRam0000000007e2a465 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077751d0);
    bRam0000000007e2a465 = 1;
  }
  lVar13 = *(long *)(param_1 + 0x18);
  if (lVar13 != 0) {
    lVar18 = *(long *)(lVar13 + 0x10);
    lVar22 = *(long *)PTR_DAT_077751d0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar18 != 0) {
      uVar17 = *(uint *)(lVar13 + 0x18);
      if (uVar17 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar17 + 1;
        plVar19 = (long *)(lVar18 + (long)(int)uVar17 * 8 + 0x20);
        *plVar19 = param_2;
        goto SUB_032809c4;
      }
      uVar17 = *(uint *)(lVar13 + 0x18);
      lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) +
                                                      0x70) + 0x20) + 0xc0) + 0x78);
      func_0x04144aa0(lVar13,uVar17 + 1);
      lVar22 = *(long *)(lVar13 + 0x10);
      *(uint *)(lVar13 + 0x18) = uVar17 + 1;
      if (lVar22 == 0) {
        func_0x03280cac();
      }
      else if (uVar17 < *(uint *)(lVar22 + 0x18)) {
        plVar19 = (long *)(lVar22 + (long)(int)uVar17 * 8 + 0x20);
        *plVar19 = param_2;
        goto SUB_032809c4;
      }
      auVar27 = func_0x03280cb4();
      lVar16 = auVar27._8_8_;
      lVar13 = auVar27._0_8_;
      lVar15 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x58);
      func_0x03ec2768(lVar16,0x14);
      lVar22 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      if (lVar16 == 0) {
LAB_0414454c:
        param_2 = 0;
      }
      else {
        param_2 = func_0x03280b90(lVar16,lVar22);
        if (param_2 == 0) {
          func_0x03281048(lVar16,lVar22);
          goto LAB_0414454c;
        }
      }
      lVar22 = *(long *)(lVar13 + 0x10);
      lVar20 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x80);
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar22 == 0) {
        auVar32 = func_0x03280cac();
        uVar7 = auVar32._0_8_;
        if (auVar32._8_4_ == 1) {
          puVar6 = (undefined8 *)func_0x072ce910(uVar7);
          uVar7 = func_0x03280a2c(PTR_DAT_077542c0);
          uVar8 = func_0x032810d8(uVar7,*(undefined8 *)*puVar6);
          if ((uVar8 & 1) != 0) {
            func_0x072ce920();
            uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x68);
            lVar18 = func_0x03280a2c(PTR_DAT_0774e558);
            if (*(int *)(lVar18 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar7 = func_0x057a51c4(uVar7,0);
            func_0x057b7b18(lVar16,uVar7,0);
            uVar7 = extraout_x1_00;
            goto LAB_041445ac;
          }
          puVar9 = (undefined8 *)func_0x072ce930(8);
          *puVar9 = *puVar6;
          lVar15 = 0;
          uVar7 = func_0x072ce940(puVar9,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
          func_0x072ce920();
        }
        func_0x03365958(uVar7);
        auVar27 = func_0x02f09514();
        plVar14 = auVar27._8_8_;
        plVar10 = auVar27._0_8_;
        uVar17 = *(uint *)(plVar10 + 3);
        lVar13 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x90);
        uVar8 = (ulong)uVar17;
        plVar25 = (long *)0x7e18000;
        plVar19 = plVar14;
        if ((bRam0000000007e18233 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774e8c8);
          func_0x03280a18(PTR_DAT_0774e8e0);
          bRam0000000007e18233 = 1;
        }
        if (plVar14 == (long *)0x0) {
          func_0x057a867c(6,0);
        }
        if (*(uint *)(plVar10 + 3) < uVar17) {
          func_0x057b8434(0);
        }
        lVar18 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
        }
        plVar11 = (long *)func_0x03280b90(plVar14,lVar18);
        if (plVar11 == (long *)0x0) {
          if ((int)uVar17 < (int)plVar10[3]) {
            if (plVar14 == (long *)0x0) {
              func_0x03280cac();
            }
            else {
              lVar18 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20);
              if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                lVar18 = func_0x0325681c(lVar18);
              }
              lVar22 = *plVar14;
              uVar21 = (ulong)*(ushort *)(lVar22 + 0x12e);
              if (uVar21 != 0) {
                piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == lVar18) {
                    puVar6 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_04145868;
                  }
                  uVar21 = uVar21 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar21 != 0);
              }
              plVar19 = (long *)0x0;
              puVar6 = (undefined8 *)func_0x03256b10(plVar14);
LAB_04145868:
              plVar25 = (long *)(*(code *)*puVar6)(plVar14,puVar6[1]);
              puVar3 = PTR_DAT_0774e8e0;
              if (plVar25 != (long *)0x0) {
                do {
                  lVar18 = *plVar25;
                  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
                  if (uVar21 != 0) {
                    piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == *(long *)puVar3) {
                        puVar6 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
                        goto LAB_041458d0;
                      }
                      uVar21 = uVar21 - 1;
                      piVar23 = piVar23 + 4;
                    } while (uVar21 != 0);
                  }
                  plVar19 = (long *)0x0;
                  puVar6 = (undefined8 *)func_0x03256b10(plVar25);
LAB_041458d0:
                  auVar27 = (*(code *)*puVar6)(plVar25,puVar6[1]);
                  if ((auVar27._0_8_ & 1) == 0) {
                    uVar8 = 0;
                    iVar5 = 5;
                    if (plVar25 == (long *)0x0) goto LAB_041459e8;
                    goto LAB_04145988;
                  }
                  lVar18 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x148);
                  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                    lVar18 = func_0x0325681c(lVar18);
                  }
                  lVar22 = *plVar25;
                  uVar21 = (ulong)*(ushort *)(lVar22 + 0x12e);
                  if (uVar21 != 0) {
                    piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == lVar18) {
                        puVar6 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                        goto LAB_04145948;
                      }
                      uVar21 = uVar21 - 1;
                      piVar23 = piVar23 + 4;
                    } while (uVar21 != 0);
                  }
                  puVar6 = (undefined8 *)func_0x03256b10(plVar25,lVar18,0);
LAB_04145948:
                  plVar19 = (long *)(*(code *)*puVar6)(plVar25,puVar6[1]);
                  func_0x04145380(plVar10,uVar8,plVar19,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x160));
                  uVar8 = (ulong)((int)uVar8 + 1);
                } while( true );
              }
            }
            func_0x03280cac();
            do {
              auVar32 = func_0x03280ca4(uVar8);
              if (auVar32._8_4_ != 1) {
                if (plVar25 == (long *)0x0) goto LAB_04145ae0;
                lVar13 = *plVar25;
                uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar8 == 0) goto LAB_04145ab8;
                piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                goto LAB_04145aa0;
              }
              puVar12 = (ulong *)func_0x072ce910(auVar32._0_8_);
              uVar8 = *puVar12;
              auVar27 = func_0x072ce920();
              iVar5 = 0;
              if (plVar25 != (long *)0x0) {
LAB_04145988:
                lVar18 = *plVar25;
                uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar21 != 0) {
                  piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
                      puVar6 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
                      goto LAB_041459dc;
                    }
                    uVar21 = uVar21 - 1;
                    piVar23 = piVar23 + 4;
                  } while (uVar21 != 0);
                }
                plVar19 = (long *)0x0;
                puVar6 = (undefined8 *)func_0x03256b10(plVar25);
LAB_041459dc:
                auVar27 = (*(code *)*puVar6)(plVar25,puVar6[1]);
              }
LAB_041459e8:
            } while (uVar8 != 0);
            if (iVar5 == 5) goto LAB_04145a10;
            if (iVar5 != 0) {
              return auVar27;
            }
          }
          auVar27 = func_0x041462cc(plVar10,plVar14,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x40));
        }
        else {
          lVar18 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x28);
          if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = func_0x0325681c(lVar18);
          }
          lVar22 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar8 != 0) {
            piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == lVar18) {
                puVar6 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_04145728;
              }
              uVar8 = uVar8 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar11,lVar18,0);
LAB_04145728:
          auVar27 = (*(code *)*puVar6)(plVar11,puVar6[1]);
          iVar5 = auVar27._0_4_;
          if (0 < iVar5) {
            func_0x04144aa0(plVar10,(int)plVar10[3] + iVar5,
                            *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x78));
            iVar2 = (int)plVar10[3] - uVar17;
            if (iVar2 != 0 && (int)uVar17 <= (int)plVar10[3]) {
              func_0x057b9f30(plVar10[2],uVar17,plVar10[2],iVar5 + uVar17,iVar2,0);
            }
            if (plVar10 == plVar11) {
              func_0x057b9f30(plVar10[2],0,plVar10[2],uVar17,uVar17,0);
              auVar27 = func_0x057b9f30(plVar10[2],iVar5 + uVar17,plVar10[2],uVar17 << 1,
                                        (int)plVar10[3] - uVar17,0);
            }
            else {
              lVar18 = plVar10[2];
              lVar13 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x28);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = func_0x0325681c(lVar13);
              }
              lVar22 = *plVar11;
              uVar8 = (ulong)*(ushort *)(lVar22 + 0x12e);
              if (uVar8 != 0) {
                piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == lVar13) {
                    puVar6 = (undefined8 *)(lVar22 + (long)(*piVar23 + 5) * 0x10 + 0x138);
                    goto LAB_04145838;
                  }
                  uVar8 = uVar8 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(plVar11,lVar13,5);
LAB_04145838:
              auVar27 = (*(code *)*puVar6)(plVar11,lVar18,uVar17,puVar6[1]);
            }
            *(int *)(plVar10 + 3) = (int)plVar10[3] + iVar5;
          }
        }
LAB_04145a10:
        *(int *)((long)plVar10 + 0x1c) = *(int *)((long)plVar10 + 0x1c) + 1;
        return auVar27;
      }
      uVar17 = *(uint *)(lVar13 + 0x18);
      if (*(uint *)(lVar22 + 0x18) <= uVar17) {
        func_0x0414446c(lVar13,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        uVar7 = extraout_x1;
LAB_041445ac:
        auVar27._4_4_ = 0;
        auVar27._0_4_ = *(int *)(lVar13 + 0x18) - 1;
        auVar27._8_8_ = uVar7;
        return auVar27;
      }
      *(uint *)(lVar13 + 0x18) = uVar17 + 1;
      plVar19 = (long *)(lVar22 + (long)(int)uVar17 * 8 + 0x20);
      *plVar19 = param_2;
      goto SUB_032809c4;
    }
  }
  func_0x03280cac();
  param_2 = param_3;
  if ((bRam0000000007e2a3e8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782ef80);
    bRam0000000007e2a3e8 = 1;
    param_2 = param_3;
  }
  if (extraout_x1_02 != 0) {
    lVar13 = *(long *)(extraout_x1_02 + 0x30);
    auVar29._8_8_ = *(long *)PTR_DAT_0782ef80;
    if (lVar13 == auVar29._8_8_) {
      uVar17 = 1;
LAB_055f6d5c:
      auVar29._4_4_ = 0;
      auVar29._0_4_ = uVar17;
      return auVar29;
    }
    uVar17 = 0;
    if ((lVar13 == 0) || (auVar29._8_8_ == 0)) goto LAB_055f6d5c;
    if (*(int *)(lVar13 + 0x10) != *(int *)(auVar29._8_8_ + 0x10)) {
      uVar17 = 0;
      goto LAB_055f6d5c;
    }
    lVar18 = lVar13 + 0x14;
    lVar22 = auVar29._8_8_ + 0x14;
    lVar16 = (long)*(int *)(lVar13 + 0x10) << 1;
    lVar13 = lVar22;
    if (lVar18 != lVar22) {
      lVar15 = func_0x057e39f8(0,0,lVar16,0);
      uVar7 = func_0x057e3a04(lVar16,0);
      uVar8 = func_0x057e3a10(uVar7,0);
      if (7 < uVar8) {
        lVar16 = func_0x057e3a24(uVar7,8,0);
        while( true ) {
          uVar8 = func_0x057e3a10(lVar16,0);
          uVar21 = func_0x057e3a10(lVar15,0);
          if (uVar8 <= uVar21) {
            auVar31._8_8_ = *(long *)(lVar22 + lVar16);
            auVar31._1_7_ = 0;
            auVar31[0] = *(long *)(lVar18 + lVar16) == auVar31._8_8_;
            return auVar31;
          }
          auVar27 = func_0x057f2854(*(undefined8 *)(lVar18 + lVar15),
                                    *(undefined8 *)(lVar22 + lVar15),0);
          lVar13 = auVar27._8_8_;
          if ((auVar27._0_8_ & 1) != 0) break;
          lVar15 = func_0x057e3a1c(lVar15,8,0);
        }
        uVar8 = 0;
        goto LAB_057aa710;
      }
      uVar8 = func_0x057e3a10(uVar7,0);
      auVar27 = func_0x057e3a10(lVar15,0);
      lVar13 = auVar27._8_8_;
      if (auVar27._0_8_ < uVar8) {
        do {
          bVar4 = *(char *)(lVar18 + lVar15) == *(char *)(lVar22 + lVar15);
          uVar8 = (ulong)bVar4;
          if (!bVar4) break;
          lVar15 = func_0x057e3a1c(lVar15,1,0);
          uVar21 = func_0x057e3a10(uVar7,0);
          auVar27 = func_0x057e3a10(lVar15,0);
          lVar13 = auVar27._8_8_;
        } while (auVar27._0_8_ < uVar21);
        goto LAB_057aa710;
      }
    }
    uVar8 = 1;
LAB_057aa710:
    auVar30._8_8_ = lVar13;
    auVar30._0_8_ = uVar8;
    return auVar30;
  }
  auVar27 = func_0x03280cac();
  lVar18 = auVar27._8_8_;
  lVar13 = param_2;
  if ((bRam0000000007e2a3e7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780200);
    func_0x03280a18(PTR_DAT_077745d8);
    bRam0000000007e2a3e7 = 1;
  }
  if (((lVar18 == 0) || (lVar22 = *(long *)(lVar18 + 0x50), lVar22 == 0)) ||
     (*(long *)(lVar22 + 0x40) == 0)) {
LAB_06b25d24:
    param_2 = lVar13;
    lVar13 = func_0x03280cac();
  }
  else {
    if ((*(long *)(lVar22 + 0x48) == 0) ||
       (lVar13 = *(long *)(*(long *)(lVar22 + 0x48) + 0x50), lVar13 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar13 + 0x58);
    }
    uVar24 = *(undefined8 *)(*(long *)(lVar22 + 0x40) + 0x10);
    lVar13 = 0;
    func_0x055ea7a0(*(undefined8 *)(lVar22 + 0x58),uVar7);
    plVar19 = *(long **)(auVar27._0_8_ + 0x10);
    if (plVar19 == (long *)0x0) goto LAB_06b25d24;
    lVar13 = *plVar19;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_077745d8) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_06b25cb8;
        }
        uVar8 = uVar8 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_077745d8,0);
LAB_06b25cb8:
    lVar13 = puVar6[1];
    lVar22 = (*(code *)*puVar6)(plVar19,uVar24);
    if ((lVar22 == 0) || (*(long *)(lVar18 + 0x50) == 0)) goto LAB_06b25d24;
    lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780200);
  }
  func_0x057da5fc(lVar13,0);
  plVar19 = (long *)(lVar13 + 0x10);
  *plVar19 = param_2;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar12 = (ulong *)(((ulong)plVar19 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar4) {
        *puVar12 = *puVar12 | 1L << ((ulong)plVar19 >> 0xc & 0x3f);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = plVar19;
  return auVar26;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar23 = piVar23 + 4;
    if (uVar8 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar19 = (long *)0x0;
  puVar6 = (undefined8 *)func_0x03256b10(plVar25);
LAB_04145ad4:
  (*(code *)*puVar6)(plVar25,puVar6[1]);
LAB_04145ae0:
  func_0x03365958(auVar32._0_8_);
  func_0x03280ca4(0);
  auVar27 = func_0x02f09514();
  lVar13 = auVar27._0_8_;
  auVar27 = func_0x03f898d4(*(undefined8 *)(lVar13 + 0x10),auVar27._8_8_,0,
                            *(undefined4 *)(lVar13 + 0x18),
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(*(long *)(plVar19[4] + 0xc0) + 0xd0) +
                                                 0x20) + 0xc0) + 0x158));
  uVar7 = auVar27._8_8_;
  if (-1 < (int)auVar27._0_4_) {
    func_0x04145da4(lVar13,auVar27._0_8_ & 0xffffffff);
    uVar7 = extraout_x1_01;
  }
  auVar28._4_4_ = 0;
  auVar28._0_4_ = ~auVar27._0_4_ >> 0x1f;
  auVar28._8_8_ = uVar7;
  return auVar28;
}

