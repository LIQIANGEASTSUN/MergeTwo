/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD1288; Merger.MergeBoard.PowerBoost.Services.PowerBoostPersistanceService.MarkTooltipAsShownForBoost; status ok */


/* WARNING: Possible PIC construction at 0x04f1b964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04f1ba54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04f1bc98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04f1ba78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bd1380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bd13a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06bd1384) */
/* WARNING: Removing unreachable block (ram,0x04f1bc9c) */
/* WARNING: Removing unreachable block (ram,0x04f1ba58) */
/* WARNING: Removing unreachable block (ram,0x04f1ba68) */
/* WARNING: Removing unreachable block (ram,0x04f1b968) */
/* WARNING: Removing unreachable block (ram,0x04f1ba6c) */
/* WARNING: Removing unreachable block (ram,0x04f1b96c) */
/* WARNING: Removing unreachable block (ram,0x04f1b9a0) */
/* WARNING: Removing unreachable block (ram,0x04f1b9a4) */
/* WARNING: Removing unreachable block (ram,0x04f1b9b4) */
/* WARNING: Removing unreachable block (ram,0x04f1b9e8) */
/* WARNING: Removing unreachable block (ram,0x04f1b9f4) */
/* WARNING: Removing unreachable block (ram,0x04f1b9f8) */
/* WARNING: Removing unreachable block (ram,0x04f1ba08) */
/* WARNING: Removing unreachable block (ram,0x04f1ba7c) */
/* WARNING: Removing unreachable block (ram,0x04f1ba8c) */
/* WARNING: Removing unreachable block (ram,0x04f1ba90) */
/* WARNING: Removing unreachable block (ram,0x04f1ba9c) */
/* WARNING: Removing unreachable block (ram,0x04f1ba18) */
/* WARNING: Removing unreachable block (ram,0x04f1ba20) */
/* WARNING: Removing unreachable block (ram,0x04f1bacc) */
/* WARNING: Removing unreachable block (ram,0x04f1ba2c) */
/* WARNING: Removing unreachable block (ram,0x06bd13a8) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */

long * Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__MarkTooltipAsShownForBoost
                 (long param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  undefined1 uVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  int *piVar24;
  uint *unaff_x19;
  long unaff_x20;
  uint uVar25;
  long *unaff_x21;
  long *plVar26;
  long *unaff_x22;
  uint *puVar27;
  long lVar28;
  long *unaff_x23;
  uint *puVar29;
  uint *unaff_x24;
  uint *unaff_x25;
  uint *unaff_x26;
  undefined *unaff_x27;
  uint *unaff_x28;
  int iVar30;
  ulong unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  
  if ((bRam0000000007e2aa8a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077df858);
    bRam0000000007e2aa8a = 1;
  }
  auVar31._8_8_ = param_2 & 0xffffffff;
  auVar31._0_8_ = *(long *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar18 = func_0x03280cac();
    puVar7 = PTR_DAT_077dfec8;
    puVar6 = PTR_DAT_07774270;
    if ((bRam0000000007e2aa8b & 1) == 0) {
      func_0x03280a18(PTR_DAT_077df850);
      func_0x03280a18(PTR_DAT_077df860);
      func_0x03280a18(PTR_DAT_07774270);
      func_0x03280a18(PTR_DAT_077dfec8);
      bRam0000000007e2aa8b = 1;
    }
    lVar28 = func_0x03280ca0(*(undefined8 *)puVar6);
    func_0x06b0e5a4(lVar28,*(undefined8 *)puVar7,0);
    plVar26 = (long *)(lVar18 + 0x28);
    *plVar26 = lVar28;
SUB_032809c4:
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)plVar26 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar26 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    return plVar26;
  }
  puVar15 = (uint *)0x1;
  uVar17 = 1;
  lVar18 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_077df858 + 0x20) + 0xc0) + 0x118);
  puVar8 = (undefined1 *)register0x00000008;
  do {
    lVar28 = auVar31._0_8_;
    *(ulong *)(puVar8 + -0x60) = unaff_x29;
    *(undefined8 *)(puVar8 + -0x58) = unaff_x30;
    *(uint **)(puVar8 + -0x50) = unaff_x28;
    *(undefined **)(puVar8 + -0x48) = unaff_x27;
    *(uint **)(puVar8 + -0x40) = unaff_x26;
    *(uint **)(puVar8 + -0x38) = unaff_x25;
    *(uint **)(puVar8 + -0x30) = unaff_x24;
    *(long **)(puVar8 + -0x28) = unaff_x23;
    *(long **)(puVar8 + -0x20) = unaff_x22;
    *(long **)(puVar8 + -0x18) = unaff_x21;
    *(long *)(puVar8 + -0x10) = unaff_x20;
    *(uint **)(puVar8 + -8) = unaff_x19;
    *(int *)(puVar8 + -100) = auVar31._8_4_;
    puVar29 = (uint *)(auVar31._8_8_ & 0xffffffff);
    *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
    puVar16 = puVar15;
    if (*(long *)(lVar28 + 0x10) == 0) {
      puVar16 = *(uint **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x10);
      func_0x04f1b228(lVar28,0);
    }
    plVar26 = *(long **)(lVar28 + 0x30);
    unaff_x25 = *(uint **)(lVar28 + 0x18);
    if (plVar26 == (long *)0x0) {
      uVar9 = func_0x05793b44(puVar8 + -100,
                              *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 400));
    }
    else {
      lVar13 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar21 = *plVar26;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar13) {
            puVar10 = (undefined8 *)(lVar21 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_04f1b3f8;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar26,lVar13,1);
LAB_04f1b3f8:
      puVar16 = (uint *)puVar10[1];
      uVar9 = (*(code *)*puVar10)(plVar26,puVar29);
    }
    lVar13 = *(long *)(lVar28 + 0x10);
    puVar27 = puVar15;
    unaff_x29 = uVar17;
    if (lVar13 == 0) goto LAB_04f1b754;
    uVar25 = *(uint *)(lVar13 + 0x18);
    uVar9 = uVar9 & 0x7fffffff;
    unaff_x27 = (undefined *)(ulong)uVar9;
    iVar30 = 0;
    if (uVar25 != 0) {
      iVar30 = (int)uVar9 / (int)uVar25;
    }
    uVar20 = uVar9 - iVar30 * uVar25;
    if (uVar25 <= uVar20) goto LAB_04f1b750;
    unaff_x28 = (uint *)(lVar13 + (ulong)uVar20 * 4 + 0x20);
    uVar25 = *unaff_x28 - 1;
    puVar27 = (uint *)(ulong)uVar25;
    iVar30 = (int)uVar17;
    unaff_x26 = puVar15;
    if (plVar26 == (long *)0x0) {
      if (unaff_x25 != (uint *)0x0) {
        uVar22 = *(undefined8 *)(unaff_x25 + 6);
        uVar20 = (uint)uVar22;
        if (uVar25 < uVar20) {
          unaff_x21 = (long *)0x0;
          do {
            uVar25 = (uint)uVar22;
            uVar20 = (uint)puVar27;
            plVar26 = (long *)(long)(int)uVar20;
            if (unaff_x25[(long)(int)uVar20 * 4 + 8] == uVar9) {
              plVar11 = (long *)func_0x03c56b54(*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x18)
                                               );
              if (unaff_x25[6] <= uVar20) goto LAB_04f1b750;
              if (plVar11 == (long *)0x0) goto LAB_04f1b754;
              puVar16 = (uint *)(ulong)*(uint *)(puVar8 + -100);
              uVar23 = (**(code **)(*plVar11 + 0x1b8))
                                 (plVar11,unaff_x25[(long)plVar26 * 4 + 10],puVar16,
                                  *(undefined8 *)(*plVar11 + 0x1c0));
              if ((uVar23 & 1) != 0) {
                if (iVar30 == 2) {
                  puVar14 = puVar8 + -0x68;
                  *(undefined4 *)(puVar8 + -0x68) = *(undefined4 *)(puVar8 + -100);
LAB_04f1b730:
                  uVar22 = func_0x03280b94(*(undefined8 *)
                                            (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70),
                                           puVar14);
                  func_0x057b8580(uVar22,0);
                  return (long *)0x0;
                }
                if (iVar30 != 1) {
                  return (long *)0x0;
                }
                plVar11 = plVar26;
                if (uVar20 < unaff_x25[6]) {
LAB_04f1b70c:
                  *(char *)(unaff_x25 + (long)plVar11 * 4 + 0xb) = (char)puVar15;
                  return (long *)0x1;
                }
                goto LAB_04f1b750;
              }
              uVar25 = unaff_x25[6];
            }
            if (uVar25 <= uVar20) goto LAB_04f1b750;
            uVar2 = unaff_x25[(long)plVar26 * 4 + 9];
            puVar27 = (uint *)(ulong)uVar2;
            if ((int)uVar25 <= (int)unaff_x21) {
              func_0x057b8684(0);
            }
            uVar22 = *(undefined8 *)(unaff_x25 + 6);
            unaff_x21 = (long *)(ulong)((int)unaff_x21 + 1);
            uVar20 = (uint)uVar22;
          } while (uVar2 < uVar20);
        }
LAB_04f1b5c4:
        if (*(int *)(lVar28 + 0x28) < 1) {
          uVar25 = *(uint *)(lVar28 + 0x20);
          unaff_x21 = (long *)(ulong)uVar25;
          unaff_x29 = uVar17;
          if (uVar25 == uVar20) {
            func_0x04f1baf0(lVar28,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x1b8));
            lVar13 = *(long *)(lVar28 + 0x10);
            *(uint *)(lVar28 + 0x20) = uVar25 + 1;
            if (lVar13 == 0) goto LAB_04f1b754;
            uVar20 = *(uint *)(lVar13 + 0x18);
            iVar30 = 0;
            if (uVar20 != 0) {
              iVar30 = (int)uVar9 / (int)uVar20;
            }
            uVar2 = uVar9 - iVar30 * uVar20;
            if (uVar20 <= uVar2) goto LAB_04f1b750;
            unaff_x25 = *(uint **)(lVar28 + 0x18);
            unaff_x28 = (uint *)(lVar13 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x25 = *(uint **)(lVar28 + 0x18);
            *(uint *)(lVar28 + 0x20) = uVar25 + 1;
          }
          if (unaff_x25 == (uint *)0x0) goto LAB_04f1b754;
          if (uVar25 < unaff_x25[6]) {
            lVar18 = (long)(int)uVar25;
LAB_04f1b670:
            unaff_x25[lVar18 * 4 + 8] = uVar9;
            unaff_x25[lVar18 * 4 + 9] = *unaff_x28 - 1;
            uVar9 = *(uint *)(puVar8 + -100);
            *(char *)(unaff_x25 + lVar18 * 4 + 0xb) = (char)puVar15;
            unaff_x25[lVar18 * 4 + 10] = uVar9;
            *unaff_x28 = uVar25 + 1;
            return (long *)0x1;
          }
        }
        else {
          *(int *)(lVar28 + 0x28) = *(int *)(lVar28 + 0x28) + -1;
          uVar25 = *(uint *)(lVar28 + 0x24);
          unaff_x21 = (long *)(ulong)uVar25;
          if (uVar25 < unaff_x25[6]) {
            lVar18 = (long)(int)uVar25;
            *(uint *)(lVar28 + 0x24) = unaff_x25[lVar18 * 4 + 9];
            goto LAB_04f1b670;
          }
        }
LAB_04f1b750:
        func_0x03280cb4();
        unaff_x29 = uVar17;
      }
    }
    else if (unaff_x25 != (uint *)0x0) {
      uVar22 = *(undefined8 *)(unaff_x25 + 6);
      uVar20 = (uint)uVar22;
      if (uVar25 < uVar20) {
        *(int *)(puVar8 + -0x70) = iVar30;
        uVar17 = 0;
        do {
          uVar25 = (uint)uVar22;
          uVar20 = (uint)puVar27;
          unaff_x21 = (long *)(long)(int)uVar20;
          if (unaff_x25[(long)(int)uVar20 * 4 + 8] == uVar9) {
            puVar29 = (uint *)(ulong)*(uint *)(puVar8 + -100);
            lVar13 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 8);
            puVar27 = (uint *)(ulong)unaff_x25[(long)unaff_x21 * 4 + 10];
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c(lVar13);
            }
            lVar21 = *plVar26;
            uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == lVar13) {
                  puVar10 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_04f1b4dc;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar10 = (undefined8 *)func_0x03256b10(plVar26,lVar13,0);
LAB_04f1b4dc:
            puVar16 = puVar29;
            uVar23 = (*(code *)*puVar10)(plVar26,puVar27,puVar29,puVar10[1]);
            if ((uVar23 & 1) != 0) {
              if ((*(uint *)(puVar8 + -0x70) & 0xff) == 2) {
                puVar14 = puVar8 + -0x6c;
                *(undefined4 *)(puVar8 + -0x6c) = *(undefined4 *)(puVar8 + -100);
                goto LAB_04f1b730;
              }
              if ((*(uint *)(puVar8 + -0x70) & 0xff) != 1) {
                return (long *)0x0;
              }
              plVar11 = unaff_x21;
              if (unaff_x25[6] <= uVar20) goto LAB_04f1b750;
              goto LAB_04f1b70c;
            }
            uVar25 = unaff_x25[6];
          }
          if (uVar25 <= uVar20) goto LAB_04f1b750;
          uVar2 = unaff_x25[(long)unaff_x21 * 4 + 9];
          puVar27 = (uint *)(ulong)uVar2;
          if ((int)uVar25 <= (int)uVar17) {
            func_0x057b8684(0);
          }
          uVar22 = *(undefined8 *)(unaff_x25 + 6);
          uVar17 = (ulong)((int)uVar17 + 1);
          uVar20 = (uint)uVar22;
        } while (uVar2 < uVar20);
      }
      goto LAB_04f1b5c4;
    }
LAB_04f1b754:
    lVar13 = func_0x03280cac();
    puVar15 = (uint *)PTR_DAT_07781380;
    *(undefined8 *)(puVar8 + -0xc0) = 0x4f1b758;
    *(undefined **)(puVar8 + -0xb8) = unaff_x27;
    *(uint **)(puVar8 + -0xb0) = unaff_x26;
    *(uint **)(puVar8 + -0xa8) = unaff_x25;
    *(uint **)(puVar8 + -0xa0) = puVar29;
    *(uint **)(puVar8 + -0x98) = puVar27;
    *(long **)(puVar8 + -0x90) = plVar26;
    *(long **)(puVar8 + -0x88) = unaff_x21;
    *(long *)(puVar8 + -0x80) = lVar18;
    *(long *)(puVar8 + -0x78) = lVar28;
    uVar17 = 0x7e1b000;
    if ((bRam0000000007e1b6b9 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07781610);
      func_0x03280a18(PTR_DAT_07781618);
      func_0x03280a18(PTR_DAT_07781380);
      func_0x03280a18(PTR_DAT_0774e558);
      func_0x03280a18(PTR_DAT_07781600);
      func_0x03280a18(PTR_DAT_0777e440);
      func_0x03280a18(PTR_DAT_07781608);
      func_0x03280a18(PTR_DAT_0775b648);
      bRam0000000007e1b6b9 = 1;
    }
    lVar18 = *(long *)puVar15;
    *(undefined8 *)(puVar8 + -200) = 0;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar18 = func_0x057624fc(0);
    if (lVar18 != 0) {
      func_0x04e91150(lVar18,lVar13,puVar8 + -200,*(undefined8 *)PTR_DAT_07781618);
      if (*(long *)(puVar8 + -200) == 0) {
        return (long *)0x0;
      }
      uVar23 = func_0x056933d8(*(long *)(puVar8 + -200),*(undefined8 *)PTR_DAT_0775b648,0);
      puVar6 = PTR_DAT_0774e558;
      if (*(long *)(puVar8 + -200) != 0) {
        uVar17 = uVar23 & 0xffffffff;
        uVar23 = func_0x056933d8(*(long *)(puVar8 + -200),*(undefined8 *)PTR_DAT_07781600,0);
        lVar18 = *(long *)puVar6;
        lVar28 = *(long *)(puVar8 + -200);
        plVar26 = (long *)(uVar23 & 0xffffffff);
        puVar29 = *(uint **)(*(long *)(*(long *)(puVar16 + 8) + 0xc0) + 0x170);
        if (*(int *)(lVar18 + 0xe0) == 0) {
          func_0x03280b8c(lVar18);
        }
        uVar22 = func_0x057a51c4(puVar29,0);
        puVar27 = (uint *)0x0;
        unaff_x27 = puVar6;
        if (lVar28 != 0) {
          lVar18 = func_0x05690f88(lVar28,*(undefined8 *)PTR_DAT_0777e440,uVar22,0);
          lVar28 = *(long *)(*(long *)(*(long *)(puVar16 + 8) + 0xc0) + 8);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            lVar28 = func_0x0325681c(lVar28);
          }
          if (lVar18 == 0) {
LAB_04f1b90c:
            lVar21 = 0;
          }
          else {
            lVar21 = func_0x03280b90(lVar18,lVar28);
            if (lVar21 == 0) {
              func_0x03281048(lVar18,lVar28);
              goto LAB_04f1b90c;
            }
          }
          plVar26 = (long *)(lVar13 + 0x30);
          *plVar26 = lVar21;
          lVar28 = *(long *)(*(long *)(*(long *)(puVar16 + 8) + 0xc0) + 8);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            lVar28 = func_0x0325681c(lVar28);
          }
          if ((lVar18 != 0) && (lVar13 = func_0x03280b90(lVar18,lVar28), lVar13 == 0)) {
            func_0x03281048(lVar18,lVar28);
          }
          goto SUB_032809c4;
        }
      }
    }
    func_0x03280cac();
    func_0x057b819c(0x10,0);
    func_0x03280cac();
    auVar31 = func_0x03281048(puVar29,puVar27);
    puVar6 = PTR_DAT_07781380;
    lVar18 = auVar31._0_8_;
    *(undefined8 *)(puVar8 + -0x100) = 0x4f1baf0;
    *(long **)(puVar8 + -0xf0) = plVar26;
    *(ulong *)(puVar8 + -0xe8) = uVar17;
    *(uint **)(puVar8 + -0xe0) = puVar16;
    *(long *)(puVar8 + -0xd8) = lVar13;
    if ((bRam0000000007e1b6ba & 1) == 0) {
      func_0x03280a18(PTR_DAT_07781380);
      bRam0000000007e1b6ba = 1;
    }
    uVar3 = *(undefined4 *)(lVar18 + 0x20);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar9 = func_0x05762478(uVar3,0);
    puVar6 = PTR_DAT_07754420;
    uVar17 = (ulong)uVar9;
    lVar28 = *(long *)(*(long *)(*(long *)(auVar31._8_8_ + 0x20) + 0xc0) + 0x1c8);
    *(undefined8 *)(puVar8 + -0x110) = *(undefined8 *)(puVar8 + -0x100);
    *(uint **)(puVar8 + -0x100) = puVar29;
    *(uint **)(puVar8 + -0xf8) = puVar27;
    *(undefined8 *)(puVar8 + -0xf0) = *(undefined8 *)(puVar8 + -0xf0);
    *(undefined8 *)(puVar8 + -0xe8) = *(undefined8 *)(puVar8 + -0xe8);
    *(undefined8 *)(puVar8 + -0xe0) = *(undefined8 *)(puVar8 + -0xe0);
    *(undefined8 *)(puVar8 + -0xd8) = *(undefined8 *)(puVar8 + -0xd8);
    if ((bRam0000000007e1b6bb & 1) == 0) {
      func_0x03280a18(PTR_DAT_07754420,uVar17,0);
      bRam0000000007e1b6bb = 1;
    }
    plVar11 = (long *)func_0x03280afc(*(undefined8 *)puVar6,uVar17);
    lVar28 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x1b0);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c(lVar28);
    }
    puVar16 = (uint *)func_0x03280afc(lVar28,uVar17);
    uVar25 = *(uint *)(lVar18 + 0x20);
    unaff_x24 = (uint *)(ulong)uVar25;
    unaff_x21 = (long *)0x0;
    puVar29 = puVar16;
    func_0x057b9f30(*(undefined8 *)(lVar18 + 0x18),0,puVar16,0,unaff_x24,0);
    if ((int)uVar25 < 1) {
LAB_04f1bc8c:
      plVar26 = (long *)(lVar18 + 0x10);
      *plVar26 = (long)plVar11;
      goto SUB_032809c4;
    }
    if (puVar16 != (uint *)0x0) {
      uVar25 = puVar16[6];
      puVar27 = (uint *)0x0;
      while (puVar27 < (uint *)(ulong)uVar25) {
        uVar20 = puVar16[(long)puVar27 * 4 + 8];
        if (-1 < (int)uVar20) {
          if (plVar11 == (long *)0x0) goto LAB_04f1bcc0;
          iVar30 = 0;
          if (uVar9 != 0) {
            iVar30 = (int)uVar20 / (int)uVar9;
          }
          uVar20 = uVar20 - iVar30 * uVar9;
          if (*(uint *)(plVar11 + 3) <= uVar20) break;
          puVar16[(long)puVar27 * 4 + 9] = *(int *)((long)plVar11 + (ulong)uVar20 * 4 + 0x20) - 1;
          *(int *)((long)plVar11 + (ulong)uVar20 * 4 + 0x20) = (int)puVar27 + 1;
        }
        puVar27 = (uint *)((long)puVar27 + 1);
        if (puVar27 == unaff_x24) goto LAB_04f1bc8c;
      }
      func_0x03280cb4();
    }
LAB_04f1bcc0:
    auVar32 = func_0x03280cac();
    lVar28 = auVar32._0_8_;
    *(ulong *)(puVar8 + -0x170) = unaff_x29;
    *(undefined8 *)(puVar8 + -0x168) = 0x4f1bcc4;
    *(uint **)(puVar8 + -0x160) = unaff_x28;
    *(undefined **)(puVar8 + -0x158) = unaff_x27;
    *(uint **)(puVar8 + -0x150) = puVar15;
    *(uint **)(puVar8 + -0x148) = unaff_x25;
    *(uint **)(puVar8 + -0x140) = unaff_x24;
    *(uint **)(puVar8 + -0x138) = puVar16;
    *(undefined8 **)(puVar8 + -0x130) = (undefined8 *)(lVar18 + 0x18);
    *(long **)(puVar8 + -0x128) = plVar11;
    *(ulong *)(puVar8 + -0x120) = uVar17;
    *(long *)(puVar8 + -0x118) = lVar18;
    *(uint *)(puVar8 + -0x174) = auVar32._8_4_;
    if (*(long *)(lVar28 + 0x10) == 0) {
      return (long *)0x0;
    }
    unaff_x22 = *(long **)(lVar28 + 0x30);
    if (unaff_x22 == (long *)0x0) {
      unaff_x19 = puVar29;
      uVar9 = func_0x05793b44(puVar8 + -0x174,
                              *(undefined8 *)(*(long *)(*(long *)(puVar29 + 8) + 0xc0) + 400));
    }
    else {
      plVar11 = (long *)(ulong)auVar32._8_4_;
      lVar18 = *(long *)(*(long *)(*(long *)(puVar29 + 8) + 0xc0) + 8);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
      }
      lVar13 = *unaff_x22;
      uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar17 != 0) {
        piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar18) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_04f1bd84;
          }
          uVar17 = uVar17 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(unaff_x22,lVar18,1);
LAB_04f1bd84:
      unaff_x19 = (uint *)puVar10[1];
      uVar9 = (*(code *)*puVar10)(unaff_x22,plVar11);
    }
    lVar18 = *(long *)(lVar28 + 0x10);
    if (lVar18 == 0) {
LAB_04f1bf9c:
      func_0x03280cac();
    }
    else {
      uVar25 = *(uint *)(lVar18 + 0x18);
      uVar9 = uVar9 & 0x7fffffff;
      unaff_x27 = (undefined *)(ulong)uVar9;
      iVar30 = 0;
      if (uVar25 != 0) {
        iVar30 = (int)uVar9 / (int)uVar25;
      }
      uVar20 = uVar9 - iVar30 * uVar25;
      if (uVar20 < uVar25) {
        uVar25 = *(int *)(lVar18 + (ulong)uVar20 * 4 + 0x20) - 1;
        if ((int)uVar25 < 0) {
          return (long *)0x0;
        }
        plVar26 = (long *)0x0;
        unaff_x29 = 0xffffffff;
        *(ulong *)(puVar8 + -0x180) = (ulong)uVar20;
        while( true ) {
          unaff_x24 = (uint *)(ulong)uVar25;
          puVar15 = *(uint **)(lVar28 + 0x18);
          unaff_x22 = plVar26;
          if (puVar15 == (uint *)0x0) break;
          if (puVar15[6] <= uVar25) goto LAB_04f1bfa0;
          unaff_x25 = puVar15 + (ulong)uVar25 * 4 + 8;
          unaff_x28 = unaff_x24;
          if (*unaff_x25 == uVar9) {
            plVar11 = *(long **)(lVar28 + 0x30);
            if (plVar11 == (long *)0x0) {
              plVar12 = (long *)func_0x03c56b54(*(undefined8 *)
                                                 (*(long *)(*(long *)(puVar29 + 8) + 0xc0) + 0x18));
              plVar11 = plVar26;
              if (plVar12 == (long *)0x0) break;
              unaff_x19 = (uint *)(ulong)*(uint *)(puVar8 + -0x174);
              unaff_x21 = *(long **)(*plVar12 + 0x1c0);
              uVar17 = (**(code **)(*plVar12 + 0x1b8))(plVar12,puVar15[(long)unaff_x24 * 4 + 10]);
            }
            else {
              if (plVar11 == (long *)0x0) break;
              puVar16 = (uint *)(ulong)*(uint *)(puVar8 + -0x174);
              lVar18 = *(long *)(*(long *)(*(long *)(puVar29 + 8) + 0xc0) + 8);
              uVar20 = puVar15[(long)unaff_x24 * 4 + 10];
              if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                lVar18 = func_0x0325681c(lVar18);
              }
              lVar13 = *plVar11;
              uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar17 != 0) {
                piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == lVar18) {
                    puVar10 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_04f1bec0;
                  }
                  uVar17 = uVar17 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar17 != 0);
              }
              puVar10 = (undefined8 *)func_0x03256b10(plVar11,lVar18,0);
LAB_04f1bec0:
              unaff_x21 = (long *)puVar10[1];
              unaff_x19 = puVar16;
              uVar17 = (*(code *)*puVar10)(plVar11,(long *)(ulong)uVar20);
              plVar26 = plVar11;
              unaff_x22 = (long *)(ulong)uVar20;
            }
            if ((uVar17 & 1) != 0) {
              plVar11 = plVar26;
              if ((int)(uint)unaff_x29 < 0) {
                lVar18 = *(long *)(lVar28 + 0x10);
                if (lVar18 == 0) break;
                if (*(uint *)(lVar18 + 0x18) <= (uint)*(long *)(puVar8 + -0x180)) goto LAB_04f1bfa0;
                *(uint *)(lVar18 + *(long *)(puVar8 + -0x180) * 4 + 0x20) =
                     puVar15[(long)unaff_x24 * 4 + 9] + 1;
              }
              else {
                lVar18 = *(long *)(lVar28 + 0x18);
                if (lVar18 == 0) break;
                if (*(uint *)(lVar18 + 0x18) <= (uint)unaff_x29) goto LAB_04f1bfa0;
                *(uint *)(lVar18 + unaff_x29 * 0x10 + 0x24) = puVar15[(long)unaff_x24 * 4 + 9];
              }
              *unaff_x25 = 0xffffffff;
              puVar15[(long)unaff_x24 * 4 + 9] = *(uint *)(lVar28 + 0x24);
              *(uint *)(lVar28 + 0x24) = uVar25;
              *(ulong *)(lVar28 + 0x28) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar28 + 0x28) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar28 + 0x28) + 1);
              return (long *)0x1;
            }
          }
          unaff_x29 = (ulong)uVar25;
          plVar11 = plVar26;
          uVar25 = puVar15[(long)unaff_x24 * 4 + 9];
          if ((int)puVar15[(long)unaff_x24 * 4 + 9] < 0) {
            return (long *)0x0;
          }
        }
        goto LAB_04f1bf9c;
      }
    }
LAB_04f1bfa0:
    auVar32 = func_0x03280cb4();
    lVar18 = auVar32._0_8_;
    *(ulong *)(puVar8 + -0x1e0) = unaff_x29;
    *(undefined8 *)(puVar8 + -0x1d8) = 0x4f1bfa4;
    *(uint **)(puVar8 + -0x1d0) = unaff_x28;
    *(undefined **)(puVar8 + -0x1c8) = unaff_x27;
    *(uint **)(puVar8 + -0x1c0) = puVar15;
    *(uint **)(puVar8 + -0x1b8) = unaff_x25;
    *(uint **)(puVar8 + -0x1b0) = unaff_x24;
    *(uint **)(puVar8 + -0x1a8) = puVar16;
    *(long **)(puVar8 + -0x1a0) = unaff_x22;
    *(long **)(puVar8 + -0x198) = plVar11;
    *(uint **)(puVar8 + -400) = puVar29;
    *(long *)(puVar8 + -0x188) = lVar28;
    *(uint *)(puVar8 + -0x1e4) = auVar32._8_4_;
    lVar28 = *(long *)(lVar18 + 0x10);
    *(uint **)(puVar8 + -0x1f0) = unaff_x19;
    if (lVar28 == 0) {
LAB_04f1c1d4:
      **(undefined1 **)(puVar8 + -0x1f0) = 0;
      return (long *)0x0;
    }
    unaff_x23 = *(long **)(lVar18 + 0x30);
    plVar26 = unaff_x21;
    if (unaff_x23 == (long *)0x0) {
      uVar9 = func_0x05793b44(puVar8 + -0x1e4,*(undefined8 *)(*(long *)(unaff_x21[4] + 0xc0) + 400))
      ;
    }
    else {
      unaff_x22 = (long *)(ulong)auVar32._8_4_;
      lVar28 = *(long *)(*(long *)(unaff_x21[4] + 0xc0) + 8);
      if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
        lVar28 = func_0x0325681c(lVar28);
      }
      lVar13 = *unaff_x23;
      uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar17 != 0) {
        piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar28) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_04f1c068;
          }
          uVar17 = uVar17 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(unaff_x23,lVar28,1);
LAB_04f1c068:
      unaff_x19 = (uint *)puVar10[1];
      uVar9 = (*(code *)*puVar10)(unaff_x23,unaff_x22);
    }
    lVar28 = *(long *)(lVar18 + 0x10);
    if (lVar28 == 0) {
LAB_04f1c294:
      func_0x03280cac();
      unaff_x26 = puVar15;
    }
    else {
      uVar25 = *(uint *)(lVar28 + 0x18);
      uVar9 = uVar9 & 0x7fffffff;
      unaff_x28 = (uint *)(ulong)uVar9;
      iVar30 = 0;
      if (uVar25 != 0) {
        iVar30 = (int)uVar9 / (int)uVar25;
      }
      uVar20 = uVar9 - iVar30 * uVar25;
      unaff_x26 = puVar15;
      if (uVar20 < uVar25) {
        iVar30 = *(int *)(lVar28 + (ulong)uVar20 * 4 + 0x20);
        *(ulong *)(puVar8 + -0x1f8) = (ulong)uVar20;
        uVar25 = iVar30 - 1;
        if ((int)uVar25 < 0) goto LAB_04f1c1d4;
        plVar11 = (long *)0x0;
        unaff_x29 = 0xffffffff;
        while( true ) {
          unaff_x25 = (uint *)(ulong)uVar25;
          unaff_x27 = *(undefined **)(lVar18 + 0x18);
          unaff_x23 = plVar11;
          if (unaff_x27 == (undefined *)0x0) break;
          unaff_x26 = puVar15;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar25) goto LAB_04f1c298;
          puVar29 = (uint *)(unaff_x27 + (ulong)uVar25 * 0x10 + 0x20);
          puVar15 = unaff_x25;
          if (*puVar29 == uVar9) {
            unaff_x22 = *(long **)(lVar18 + 0x30);
            if (unaff_x22 == (long *)0x0) {
              plVar12 = (long *)func_0x03c56b54(*(undefined8 *)
                                                 (*(long *)(unaff_x21[4] + 0xc0) + 0x18));
              unaff_x22 = plVar11;
              if (plVar12 == (long *)0x0) break;
              unaff_x19 = (uint *)(ulong)*(uint *)(puVar8 + -0x1e4);
              plVar26 = *(long **)(*plVar12 + 0x1c0);
              uVar17 = (**(code **)(*plVar12 + 0x1b8))
                                 (plVar12,*(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x28)
                                 );
            }
            else {
              if (unaff_x22 == (long *)0x0) break;
              unaff_x24 = (uint *)(ulong)*(uint *)(puVar8 + -0x1e4);
              lVar28 = *(long *)(*(long *)(unaff_x21[4] + 0xc0) + 8);
              uVar20 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x28);
              if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
                lVar28 = func_0x0325681c(lVar28);
              }
              lVar13 = *unaff_x22;
              uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar17 != 0) {
                piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == lVar28) {
                    puVar10 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_04f1c1a4;
                  }
                  uVar17 = uVar17 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar17 != 0);
              }
              puVar10 = (undefined8 *)func_0x03256b10(unaff_x22,lVar28,0);
LAB_04f1c1a4:
              plVar26 = (long *)puVar10[1];
              unaff_x19 = unaff_x24;
              uVar17 = (*(code *)*puVar10)(unaff_x22,(long *)(ulong)uVar20);
              plVar11 = unaff_x22;
              unaff_x23 = (long *)(ulong)uVar20;
            }
            if ((uVar17 & 1) != 0) {
              unaff_x22 = plVar11;
              unaff_x26 = unaff_x25;
              if ((int)(uint)unaff_x29 < 0) {
                lVar28 = *(long *)(lVar18 + 0x10);
                if (lVar28 == 0) break;
                if (*(uint *)(lVar28 + 0x18) <= (uint)*(long *)(puVar8 + -0x1f8)) goto LAB_04f1c298;
                *(int *)(lVar28 + *(long *)(puVar8 + -0x1f8) * 4 + 0x20) =
                     *(int *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) + 1;
              }
              else {
                lVar28 = *(long *)(lVar18 + 0x18);
                if (lVar28 == 0) break;
                if (*(uint *)(lVar28 + 0x18) <= (uint)unaff_x29) goto LAB_04f1c298;
                *(undefined4 *)(lVar28 + unaff_x29 * 0x10 + 0x24) =
                     *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24);
              }
              **(undefined1 **)(puVar8 + -0x1f0) = unaff_x27[(long)unaff_x25 * 0x10 + 0x2c];
              *puVar29 = 0xffffffff;
              *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) =
                   *(undefined4 *)(lVar18 + 0x24);
              *(uint *)(lVar18 + 0x24) = uVar25;
              *(ulong *)(lVar18 + 0x28) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar18 + 0x28) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar18 + 0x28) + 1);
              return (long *)0x1;
            }
          }
          unaff_x29 = (ulong)uVar25;
          unaff_x22 = plVar11;
          uVar25 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24);
          if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) < 0) goto LAB_04f1c1d4;
        }
        goto LAB_04f1c294;
      }
    }
LAB_04f1c298:
    unaff_x20 = func_0x03280cb4();
    *(undefined8 *)(puVar8 + -0x220) = 0x4f1c29c;
    *(uint **)(puVar8 + -0x210) = puVar29;
    *(long *)(puVar8 + -0x208) = lVar18;
    uVar25 = (uint)*(undefined8 *)(*(long *)(plVar26[4] + 0xc0) + 0x110);
    uVar9 = func_0x04f1af5c();
    if ((int)uVar9 < 0) {
      uVar19 = 0;
      goto LAB_04f1c2e4;
    }
    lVar18 = *(long *)(unaff_x20 + 0x18);
    if (lVar18 == 0) {
      func_0x03280cac();
    }
    else if (uVar9 < *(uint *)(lVar18 + 0x18)) {
      uVar19 = *(undefined1 *)(lVar18 + (ulong)uVar9 * 0x10 + 0x2c);
LAB_04f1c2e4:
      *(undefined1 *)unaff_x19 = uVar19;
      return (long *)(ulong)(~uVar9 >> 0x1f);
    }
    unaff_x30 = 0x4f1c304;
    auVar31 = func_0x03280cb4();
    puVar15 = (uint *)(ulong)(uVar25 & 1);
    uVar17 = 0;
    lVar18 = *(long *)(*(long *)(plVar26[4] + 0xc0) + 0x118);
    puVar8 = puVar8 + -0x220;
  } while( true );
}

