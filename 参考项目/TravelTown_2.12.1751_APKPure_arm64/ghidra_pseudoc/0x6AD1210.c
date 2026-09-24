/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD1210; Merger.MergeBoard.PowerBoost.Services.PowerBoostPersistanceService.WasTooltipShownForBoost; status ok */


/* WARNING: Possible PIC construction at 0x06bd1264: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x06bd1268) */
/* WARNING: Removing unreachable block (ram,0x06bd13a8) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */

long * Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__WasTooltipShownForBoost
                 (uint *param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  uint *puVar17;
  ulong uVar18;
  long *plVar19;
  undefined1 uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  uint *puVar25;
  uint uVar26;
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
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  code *pcStack_50;
  long *plStack_48;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [4];
  
  puVar9 = auStack_30;
  puVar8 = auStack_30;
  plStack_48 = (long *)0x7e2a000;
  puVar25 = (uint *)(param_2 & 0xffffffff);
  if ((bRam0000000007e2aa89 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077df848);
    bRam0000000007e2aa89 = 1;
  }
  auStack_24[0] = 0;
  auVar32._8_8_ = puVar25;
  auVar32._0_8_ = *(long *)(param_1 + 0xe);
  if (*(long *)(param_1 + 0xe) == 0) {
    auVar33 = func_0x03280cac();
    pcStack_50 = 
    Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__MarkTooltipAsShownForBoost;
    plStack_48 = (long *)0x7e2a000;
    if ((bRam0000000007e2aa8a & 1) == 0) {
      func_0x03280a18(PTR_DAT_077df858);
      bRam0000000007e2aa8a = 1;
    }
    lVar14 = *(long *)(auVar33._0_8_ + 0x38);
    auVar33._8_4_ = auVar33._8_4_;
    auVar33._0_8_ = lVar14;
    if (lVar14 != 0) {
      puVar17 = (uint *)0x1;
      uVar18 = 1;
      lVar14 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_077df858 + 0x20) + 0xc0) + 0x118);
      puVar29 = puVar25;
      puVar27 = param_1;
      goto SUB_04f1b308;
    }
    lVar14 = func_0x03280cac();
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
    plVar19 = (long *)(lVar14 + 0x28);
    *plVar19 = lVar28;
SUB_032809c4:
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)plVar19 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar19 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    return plVar19;
  }
  puVar29 = (uint *)auStack_24;
  plVar19 = *(long **)PTR_DAT_077df848;
  uVar31 = 0x6bd1268;
  do {
    puVar27 = auVar32._0_8_;
    puVar8 = puVar9 + -0x20;
    *(undefined8 *)(puVar9 + -0x20) = uVar31;
    *(uint **)(puVar9 + -0x10) = param_1;
    *(uint **)(puVar9 + -8) = puVar25;
    uVar26 = (uint)*(undefined8 *)(*(long *)(plVar19[4] + 0xc0) + 0x110);
    uVar10 = func_0x04f1af5c(puVar27,auVar32._8_8_);
    if ((int)uVar10 < 0) {
      uVar20 = 0;
LAB_04f1c2e4:
      *(undefined1 *)puVar29 = uVar20;
      return (long *)(ulong)(~uVar10 >> 0x1f);
    }
    lVar14 = *(long *)(puVar27 + 6);
    if (lVar14 == 0) {
      func_0x03280cac();
    }
    else if (uVar10 < *(uint *)(lVar14 + 0x18)) {
      uVar20 = *(undefined1 *)(lVar14 + (ulong)uVar10 * 0x10 + 0x2c);
      goto LAB_04f1c2e4;
    }
    pcStack_50 = (code *)0x4f1c304;
    auVar33 = func_0x03280cb4();
    puVar17 = (uint *)(ulong)(uVar26 & 1);
    uVar18 = 0;
    lVar14 = *(long *)(*(long *)(plVar19[4] + 0xc0) + 0x118);
SUB_04f1b308:
    lVar28 = auVar33._0_8_;
    *(ulong *)(puVar8 + -0x60) = unaff_x29;
    *(code **)(puVar8 + -0x58) = pcStack_50;
    *(uint **)(puVar8 + -0x50) = unaff_x28;
    *(undefined **)(puVar8 + -0x48) = unaff_x27;
    *(uint **)(puVar8 + -0x40) = unaff_x26;
    *(uint **)(puVar8 + -0x38) = unaff_x25;
    *(uint **)(puVar8 + -0x30) = unaff_x24;
    *(long **)(puVar8 + -0x28) = unaff_x23;
    *(long **)(puVar8 + -0x20) = unaff_x22;
    *(long **)(puVar8 + -0x18) = plStack_48;
    *(uint **)(puVar8 + -0x10) = puVar27;
    *(uint **)(puVar8 + -8) = puVar29;
    *(uint *)(puVar8 + -100) = auVar33._8_4_;
    puVar29 = (uint *)(ulong)auVar33._8_4_;
    *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
    puVar25 = puVar17;
    if (*(long *)(lVar28 + 0x10) == 0) {
      puVar25 = *(uint **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x10);
      func_0x04f1b228(lVar28,0);
    }
    plVar19 = *(long **)(lVar28 + 0x30);
    unaff_x25 = *(uint **)(lVar28 + 0x18);
    if (plVar19 == (long *)0x0) {
      uVar10 = func_0x05793b44(puVar8 + -100,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 400));
    }
    else {
      lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      lVar22 = *plVar19;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar15) {
            puVar11 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_04f1b3f8;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar19,lVar15,1);
LAB_04f1b3f8:
      puVar25 = (uint *)puVar11[1];
      uVar10 = (*(code *)*puVar11)(plVar19,puVar29);
    }
    lVar15 = *(long *)(lVar28 + 0x10);
    puVar27 = puVar17;
    unaff_x29 = uVar18;
    if (lVar15 == 0) goto LAB_04f1b754;
    uVar26 = *(uint *)(lVar15 + 0x18);
    uVar10 = uVar10 & 0x7fffffff;
    unaff_x27 = (undefined *)(ulong)uVar10;
    iVar30 = 0;
    if (uVar26 != 0) {
      iVar30 = (int)uVar10 / (int)uVar26;
    }
    uVar21 = uVar10 - iVar30 * uVar26;
    if (uVar26 <= uVar21) goto LAB_04f1b750;
    unaff_x28 = (uint *)(lVar15 + (ulong)uVar21 * 4 + 0x20);
    uVar26 = *unaff_x28 - 1;
    puVar27 = (uint *)(ulong)uVar26;
    iVar30 = (int)uVar18;
    unaff_x26 = puVar17;
    if (plVar19 == (long *)0x0) {
      if (unaff_x25 != (uint *)0x0) {
        uVar31 = *(undefined8 *)(unaff_x25 + 6);
        uVar21 = (uint)uVar31;
        if (uVar26 < uVar21) {
          plStack_48 = (long *)0x0;
          do {
            uVar26 = (uint)uVar31;
            uVar21 = (uint)puVar27;
            plVar19 = (long *)(long)(int)uVar21;
            if (unaff_x25[(long)(int)uVar21 * 4 + 8] == uVar10) {
              plVar12 = (long *)func_0x03c56b54(*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x18)
                                               );
              if (unaff_x25[6] <= uVar21) goto LAB_04f1b750;
              if (plVar12 == (long *)0x0) goto LAB_04f1b754;
              puVar25 = (uint *)(ulong)*(uint *)(puVar8 + -100);
              uVar23 = (**(code **)(*plVar12 + 0x1b8))
                                 (plVar12,unaff_x25[(long)plVar19 * 4 + 10],puVar25,
                                  *(undefined8 *)(*plVar12 + 0x1c0));
              if ((uVar23 & 1) != 0) {
                if (iVar30 == 2) {
                  puVar16 = puVar8 + -0x68;
                  *(undefined4 *)(puVar8 + -0x68) = *(undefined4 *)(puVar8 + -100);
LAB_04f1b730:
                  uVar31 = func_0x03280b94(*(undefined8 *)
                                            (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70),
                                           puVar16);
                  func_0x057b8580(uVar31,0);
                  return (long *)0x0;
                }
                if (iVar30 != 1) {
                  return (long *)0x0;
                }
                plVar12 = plVar19;
                if (uVar21 < unaff_x25[6]) {
LAB_04f1b70c:
                  *(char *)(unaff_x25 + (long)plVar12 * 4 + 0xb) = (char)puVar17;
                  return (long *)0x1;
                }
                goto LAB_04f1b750;
              }
              uVar26 = unaff_x25[6];
            }
            if (uVar26 <= uVar21) goto LAB_04f1b750;
            uVar2 = unaff_x25[(long)plVar19 * 4 + 9];
            puVar27 = (uint *)(ulong)uVar2;
            if ((int)uVar26 <= (int)plStack_48) {
              func_0x057b8684(0);
            }
            uVar31 = *(undefined8 *)(unaff_x25 + 6);
            plStack_48 = (long *)(ulong)((int)plStack_48 + 1);
            uVar21 = (uint)uVar31;
          } while (uVar2 < uVar21);
        }
LAB_04f1b5c4:
        if (*(int *)(lVar28 + 0x28) < 1) {
          uVar26 = *(uint *)(lVar28 + 0x20);
          plStack_48 = (long *)(ulong)uVar26;
          unaff_x29 = uVar18;
          if (uVar26 == uVar21) {
            func_0x04f1baf0(lVar28,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x1b8));
            lVar15 = *(long *)(lVar28 + 0x10);
            *(uint *)(lVar28 + 0x20) = uVar26 + 1;
            if (lVar15 == 0) goto LAB_04f1b754;
            uVar21 = *(uint *)(lVar15 + 0x18);
            iVar30 = 0;
            if (uVar21 != 0) {
              iVar30 = (int)uVar10 / (int)uVar21;
            }
            uVar2 = uVar10 - iVar30 * uVar21;
            if (uVar21 <= uVar2) goto LAB_04f1b750;
            unaff_x25 = *(uint **)(lVar28 + 0x18);
            unaff_x28 = (uint *)(lVar15 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x25 = *(uint **)(lVar28 + 0x18);
            *(uint *)(lVar28 + 0x20) = uVar26 + 1;
          }
          if (unaff_x25 == (uint *)0x0) goto LAB_04f1b754;
          if (uVar26 < unaff_x25[6]) {
            lVar14 = (long)(int)uVar26;
LAB_04f1b670:
            unaff_x25[lVar14 * 4 + 8] = uVar10;
            unaff_x25[lVar14 * 4 + 9] = *unaff_x28 - 1;
            uVar10 = *(uint *)(puVar8 + -100);
            *(char *)(unaff_x25 + lVar14 * 4 + 0xb) = (char)puVar17;
            unaff_x25[lVar14 * 4 + 10] = uVar10;
            *unaff_x28 = uVar26 + 1;
            return (long *)0x1;
          }
        }
        else {
          *(int *)(lVar28 + 0x28) = *(int *)(lVar28 + 0x28) + -1;
          uVar26 = *(uint *)(lVar28 + 0x24);
          plStack_48 = (long *)(ulong)uVar26;
          if (uVar26 < unaff_x25[6]) {
            lVar14 = (long)(int)uVar26;
            *(uint *)(lVar28 + 0x24) = unaff_x25[lVar14 * 4 + 9];
            goto LAB_04f1b670;
          }
        }
LAB_04f1b750:
        func_0x03280cb4();
        unaff_x29 = uVar18;
      }
    }
    else if (unaff_x25 != (uint *)0x0) {
      uVar31 = *(undefined8 *)(unaff_x25 + 6);
      uVar21 = (uint)uVar31;
      if (uVar26 < uVar21) {
        *(int *)(puVar8 + -0x70) = iVar30;
        uVar18 = 0;
        do {
          uVar26 = (uint)uVar31;
          uVar21 = (uint)puVar27;
          plStack_48 = (long *)(long)(int)uVar21;
          if (unaff_x25[(long)(int)uVar21 * 4 + 8] == uVar10) {
            puVar29 = (uint *)(ulong)*(uint *)(puVar8 + -100);
            lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 8);
            puVar27 = (uint *)(ulong)unaff_x25[(long)plStack_48 * 4 + 10];
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = func_0x0325681c(lVar15);
            }
            lVar22 = *plVar19;
            uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == lVar15) {
                  puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_04f1b4dc;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(plVar19,lVar15,0);
LAB_04f1b4dc:
            puVar25 = puVar29;
            uVar23 = (*(code *)*puVar11)(plVar19,puVar27,puVar29,puVar11[1]);
            if ((uVar23 & 1) != 0) {
              if ((*(uint *)(puVar8 + -0x70) & 0xff) == 2) {
                puVar16 = puVar8 + -0x6c;
                *(undefined4 *)(puVar8 + -0x6c) = *(undefined4 *)(puVar8 + -100);
                goto LAB_04f1b730;
              }
              if ((*(uint *)(puVar8 + -0x70) & 0xff) != 1) {
                return (long *)0x0;
              }
              plVar12 = plStack_48;
              if (unaff_x25[6] <= uVar21) goto LAB_04f1b750;
              goto LAB_04f1b70c;
            }
            uVar26 = unaff_x25[6];
          }
          if (uVar26 <= uVar21) goto LAB_04f1b750;
          uVar2 = unaff_x25[(long)plStack_48 * 4 + 9];
          puVar27 = (uint *)(ulong)uVar2;
          if ((int)uVar26 <= (int)uVar18) {
            func_0x057b8684(0);
          }
          uVar31 = *(undefined8 *)(unaff_x25 + 6);
          uVar18 = (ulong)((int)uVar18 + 1);
          uVar21 = (uint)uVar31;
        } while (uVar2 < uVar21);
      }
      goto LAB_04f1b5c4;
    }
LAB_04f1b754:
    lVar15 = func_0x03280cac();
    puVar17 = (uint *)PTR_DAT_07781380;
    *(undefined8 *)(puVar8 + -0xc0) = 0x4f1b758;
    *(undefined **)(puVar8 + -0xb8) = unaff_x27;
    *(uint **)(puVar8 + -0xb0) = unaff_x26;
    *(uint **)(puVar8 + -0xa8) = unaff_x25;
    *(uint **)(puVar8 + -0xa0) = puVar29;
    *(uint **)(puVar8 + -0x98) = puVar27;
    *(long **)(puVar8 + -0x90) = plVar19;
    *(long **)(puVar8 + -0x88) = plStack_48;
    *(long *)(puVar8 + -0x80) = lVar14;
    *(long *)(puVar8 + -0x78) = lVar28;
    uVar18 = 0x7e1b000;
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
    lVar14 = *(long *)puVar17;
    *(undefined8 *)(puVar8 + -200) = 0;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar14 = func_0x057624fc(0);
    if (lVar14 != 0) {
      func_0x04e91150(lVar14,lVar15,puVar8 + -200,*(undefined8 *)PTR_DAT_07781618);
      if (*(long *)(puVar8 + -200) == 0) {
        return (long *)0x0;
      }
      uVar23 = func_0x056933d8(*(long *)(puVar8 + -200),*(undefined8 *)PTR_DAT_0775b648,0);
      puVar6 = PTR_DAT_0774e558;
      if (*(long *)(puVar8 + -200) != 0) {
        uVar18 = uVar23 & 0xffffffff;
        uVar23 = func_0x056933d8(*(long *)(puVar8 + -200),*(undefined8 *)PTR_DAT_07781600,0);
        lVar14 = *(long *)puVar6;
        lVar28 = *(long *)(puVar8 + -200);
        plVar19 = (long *)(uVar23 & 0xffffffff);
        puVar29 = *(uint **)(*(long *)(*(long *)(puVar25 + 8) + 0xc0) + 0x170);
        if (*(int *)(lVar14 + 0xe0) == 0) {
          func_0x03280b8c(lVar14);
        }
        uVar31 = func_0x057a51c4(puVar29,0);
        puVar27 = (uint *)0x0;
        unaff_x27 = puVar6;
        if (lVar28 != 0) {
          lVar14 = func_0x05690f88(lVar28,*(undefined8 *)PTR_DAT_0777e440,uVar31,0);
          lVar28 = *(long *)(*(long *)(*(long *)(puVar25 + 8) + 0xc0) + 8);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            lVar28 = func_0x0325681c(lVar28);
          }
          if (lVar14 == 0) {
LAB_04f1b90c:
            lVar22 = 0;
          }
          else {
            lVar22 = func_0x03280b90(lVar14,lVar28);
            if (lVar22 == 0) {
              func_0x03281048(lVar14,lVar28);
              goto LAB_04f1b90c;
            }
          }
          plVar19 = (long *)(lVar15 + 0x30);
          *plVar19 = lVar22;
          lVar28 = *(long *)(*(long *)(*(long *)(puVar25 + 8) + 0xc0) + 8);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            lVar28 = func_0x0325681c(lVar28);
          }
          if ((lVar14 != 0) && (lVar15 = func_0x03280b90(lVar14,lVar28), lVar15 == 0)) {
            func_0x03281048(lVar14,lVar28);
          }
          goto SUB_032809c4;
        }
      }
    }
    func_0x03280cac();
    func_0x057b819c(0x10,0);
    func_0x03280cac();
    auVar32 = func_0x03281048(puVar29,puVar27);
    puVar6 = PTR_DAT_07781380;
    lVar14 = auVar32._0_8_;
    *(undefined8 *)(puVar8 + -0x100) = 0x4f1baf0;
    *(long **)(puVar8 + -0xf0) = plVar19;
    *(ulong *)(puVar8 + -0xe8) = uVar18;
    *(uint **)(puVar8 + -0xe0) = puVar25;
    *(long *)(puVar8 + -0xd8) = lVar15;
    if ((bRam0000000007e1b6ba & 1) == 0) {
      func_0x03280a18(PTR_DAT_07781380);
      bRam0000000007e1b6ba = 1;
    }
    uVar3 = *(undefined4 *)(lVar14 + 0x20);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar10 = func_0x05762478(uVar3,0);
    puVar6 = PTR_DAT_07754420;
    uVar18 = (ulong)uVar10;
    lVar28 = *(long *)(*(long *)(*(long *)(auVar32._8_8_ + 0x20) + 0xc0) + 0x1c8);
    *(undefined8 *)(puVar8 + -0x110) = *(undefined8 *)(puVar8 + -0x100);
    *(uint **)(puVar8 + -0x100) = puVar29;
    *(uint **)(puVar8 + -0xf8) = puVar27;
    *(undefined8 *)(puVar8 + -0xf0) = *(undefined8 *)(puVar8 + -0xf0);
    *(undefined8 *)(puVar8 + -0xe8) = *(undefined8 *)(puVar8 + -0xe8);
    *(undefined8 *)(puVar8 + -0xe0) = *(undefined8 *)(puVar8 + -0xe0);
    *(undefined8 *)(puVar8 + -0xd8) = *(undefined8 *)(puVar8 + -0xd8);
    if ((bRam0000000007e1b6bb & 1) == 0) {
      func_0x03280a18(PTR_DAT_07754420,uVar18,0);
      bRam0000000007e1b6bb = 1;
    }
    plVar12 = (long *)func_0x03280afc(*(undefined8 *)puVar6,uVar18);
    lVar28 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x1b0);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c(lVar28);
    }
    puVar27 = (uint *)func_0x03280afc(lVar28,uVar18);
    uVar26 = *(uint *)(lVar14 + 0x20);
    unaff_x24 = (uint *)(ulong)uVar26;
    plStack_48 = (long *)0x0;
    param_1 = puVar27;
    func_0x057b9f30(*(undefined8 *)(lVar14 + 0x18),0,puVar27,0,unaff_x24,0);
    if ((int)uVar26 < 1) {
LAB_04f1bc8c:
      plVar19 = (long *)(lVar14 + 0x10);
      *plVar19 = (long)plVar12;
      goto SUB_032809c4;
    }
    if (puVar27 != (uint *)0x0) {
      uVar26 = puVar27[6];
      puVar25 = (uint *)0x0;
      while (puVar25 < (uint *)(ulong)uVar26) {
        uVar21 = puVar27[(long)puVar25 * 4 + 8];
        if (-1 < (int)uVar21) {
          if (plVar12 == (long *)0x0) goto LAB_04f1bcc0;
          iVar30 = 0;
          if (uVar10 != 0) {
            iVar30 = (int)uVar21 / (int)uVar10;
          }
          uVar21 = uVar21 - iVar30 * uVar10;
          if (*(uint *)(plVar12 + 3) <= uVar21) break;
          puVar27[(long)puVar25 * 4 + 9] = *(int *)((long)plVar12 + (ulong)uVar21 * 4 + 0x20) - 1;
          *(int *)((long)plVar12 + (ulong)uVar21 * 4 + 0x20) = (int)puVar25 + 1;
        }
        puVar25 = (uint *)((long)puVar25 + 1);
        if (puVar25 == unaff_x24) goto LAB_04f1bc8c;
      }
      func_0x03280cb4();
    }
LAB_04f1bcc0:
    auVar33 = func_0x03280cac();
    lVar28 = auVar33._0_8_;
    *(ulong *)(puVar8 + -0x170) = unaff_x29;
    *(undefined8 *)(puVar8 + -0x168) = 0x4f1bcc4;
    *(uint **)(puVar8 + -0x160) = unaff_x28;
    *(undefined **)(puVar8 + -0x158) = unaff_x27;
    *(uint **)(puVar8 + -0x150) = puVar17;
    *(uint **)(puVar8 + -0x148) = unaff_x25;
    *(uint **)(puVar8 + -0x140) = unaff_x24;
    *(uint **)(puVar8 + -0x138) = puVar27;
    *(undefined8 **)(puVar8 + -0x130) = (undefined8 *)(lVar14 + 0x18);
    *(long **)(puVar8 + -0x128) = plVar12;
    *(ulong *)(puVar8 + -0x120) = uVar18;
    *(long *)(puVar8 + -0x118) = lVar14;
    *(uint *)(puVar8 + -0x174) = auVar33._8_4_;
    if (*(long *)(lVar28 + 0x10) == 0) {
      return (long *)0x0;
    }
    unaff_x22 = *(long **)(lVar28 + 0x30);
    if (unaff_x22 == (long *)0x0) {
      puVar29 = param_1;
      uVar10 = func_0x05793b44(puVar8 + -0x174,
                               *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 400));
    }
    else {
      plVar12 = (long *)(ulong)auVar33._8_4_;
      lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 8);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar15 = *unaff_x22;
      uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar18 != 0) {
        piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar14) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_04f1bd84;
          }
          uVar18 = uVar18 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(unaff_x22,lVar14,1);
LAB_04f1bd84:
      puVar29 = (uint *)puVar11[1];
      uVar10 = (*(code *)*puVar11)(unaff_x22,plVar12);
    }
    lVar14 = *(long *)(lVar28 + 0x10);
    if (lVar14 == 0) {
LAB_04f1bf9c:
      func_0x03280cac();
    }
    else {
      uVar26 = *(uint *)(lVar14 + 0x18);
      uVar10 = uVar10 & 0x7fffffff;
      unaff_x27 = (undefined *)(ulong)uVar10;
      iVar30 = 0;
      if (uVar26 != 0) {
        iVar30 = (int)uVar10 / (int)uVar26;
      }
      uVar21 = uVar10 - iVar30 * uVar26;
      if (uVar21 < uVar26) {
        uVar26 = *(int *)(lVar14 + (ulong)uVar21 * 4 + 0x20) - 1;
        if ((int)uVar26 < 0) {
          return (long *)0x0;
        }
        plVar19 = (long *)0x0;
        unaff_x29 = 0xffffffff;
        *(ulong *)(puVar8 + -0x180) = (ulong)uVar21;
        while( true ) {
          unaff_x24 = (uint *)(ulong)uVar26;
          puVar17 = *(uint **)(lVar28 + 0x18);
          unaff_x22 = plVar19;
          if (puVar17 == (uint *)0x0) break;
          if (puVar17[6] <= uVar26) goto LAB_04f1bfa0;
          unaff_x25 = puVar17 + (ulong)uVar26 * 4 + 8;
          unaff_x28 = unaff_x24;
          if (*unaff_x25 == uVar10) {
            plVar12 = *(long **)(lVar28 + 0x30);
            if (plVar12 == (long *)0x0) {
              plVar13 = (long *)func_0x03c56b54(*(undefined8 *)
                                                 (*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x18));
              plVar12 = plVar19;
              if (plVar13 == (long *)0x0) break;
              puVar29 = (uint *)(ulong)*(uint *)(puVar8 + -0x174);
              plStack_48 = *(long **)(*plVar13 + 0x1c0);
              uVar18 = (**(code **)(*plVar13 + 0x1b8))(plVar13,puVar17[(long)unaff_x24 * 4 + 10]);
            }
            else {
              if (plVar12 == (long *)0x0) break;
              puVar27 = (uint *)(ulong)*(uint *)(puVar8 + -0x174);
              lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 8);
              uVar21 = puVar17[(long)unaff_x24 * 4 + 10];
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = func_0x0325681c(lVar14);
              }
              lVar15 = *plVar12;
              uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar18 != 0) {
                piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == lVar14) {
                    puVar11 = (undefined8 *)(lVar15 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_04f1bec0;
                  }
                  uVar18 = uVar18 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar18 != 0);
              }
              puVar11 = (undefined8 *)func_0x03256b10(plVar12,lVar14,0);
LAB_04f1bec0:
              plStack_48 = (long *)puVar11[1];
              puVar29 = puVar27;
              uVar18 = (*(code *)*puVar11)(plVar12,(long *)(ulong)uVar21);
              plVar19 = plVar12;
              unaff_x22 = (long *)(ulong)uVar21;
            }
            if ((uVar18 & 1) != 0) {
              plVar12 = plVar19;
              if ((int)(uint)unaff_x29 < 0) {
                lVar14 = *(long *)(lVar28 + 0x10);
                if (lVar14 == 0) break;
                if (*(uint *)(lVar14 + 0x18) <= (uint)*(long *)(puVar8 + -0x180)) goto LAB_04f1bfa0;
                *(uint *)(lVar14 + *(long *)(puVar8 + -0x180) * 4 + 0x20) =
                     puVar17[(long)unaff_x24 * 4 + 9] + 1;
              }
              else {
                lVar14 = *(long *)(lVar28 + 0x18);
                if (lVar14 == 0) break;
                if (*(uint *)(lVar14 + 0x18) <= (uint)unaff_x29) goto LAB_04f1bfa0;
                *(uint *)(lVar14 + unaff_x29 * 0x10 + 0x24) = puVar17[(long)unaff_x24 * 4 + 9];
              }
              *unaff_x25 = 0xffffffff;
              puVar17[(long)unaff_x24 * 4 + 9] = *(uint *)(lVar28 + 0x24);
              *(uint *)(lVar28 + 0x24) = uVar26;
              *(ulong *)(lVar28 + 0x28) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar28 + 0x28) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar28 + 0x28) + 1);
              return (long *)0x1;
            }
          }
          unaff_x29 = (ulong)uVar26;
          plVar12 = plVar19;
          uVar26 = puVar17[(long)unaff_x24 * 4 + 9];
          if ((int)puVar17[(long)unaff_x24 * 4 + 9] < 0) {
            return (long *)0x0;
          }
        }
        goto LAB_04f1bf9c;
      }
    }
LAB_04f1bfa0:
    auVar33 = func_0x03280cb4();
    puVar25 = auVar33._0_8_;
    puVar9 = puVar8 + -0x200;
    *(ulong *)(puVar8 + -0x1e0) = unaff_x29;
    *(undefined8 *)(puVar8 + -0x1d8) = 0x4f1bfa4;
    *(uint **)(puVar8 + -0x1d0) = unaff_x28;
    *(undefined **)(puVar8 + -0x1c8) = unaff_x27;
    *(uint **)(puVar8 + -0x1c0) = puVar17;
    *(uint **)(puVar8 + -0x1b8) = unaff_x25;
    *(uint **)(puVar8 + -0x1b0) = unaff_x24;
    *(uint **)(puVar8 + -0x1a8) = puVar27;
    *(long **)(puVar8 + -0x1a0) = unaff_x22;
    *(long **)(puVar8 + -0x198) = plVar12;
    *(uint **)(puVar8 + -400) = param_1;
    *(long *)(puVar8 + -0x188) = lVar28;
    *(uint *)(puVar8 + -0x1e4) = auVar33._8_4_;
    lVar14 = *(long *)(puVar25 + 4);
    *(uint **)(puVar8 + -0x1f0) = puVar29;
    if (lVar14 == 0) {
LAB_04f1c1d4:
      **(undefined1 **)(puVar8 + -0x1f0) = 0;
      return (long *)0x0;
    }
    unaff_x23 = *(long **)(puVar25 + 0xc);
    plVar19 = plStack_48;
    if (unaff_x23 == (long *)0x0) {
      uVar10 = func_0x05793b44(puVar8 + -0x1e4,
                               *(undefined8 *)(*(long *)(plStack_48[4] + 0xc0) + 400));
    }
    else {
      unaff_x22 = (long *)(ulong)auVar33._8_4_;
      lVar14 = *(long *)(*(long *)(plStack_48[4] + 0xc0) + 8);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar28 = *unaff_x23;
      uVar18 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar18 != 0) {
        piVar24 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar14) {
            puVar11 = (undefined8 *)(lVar28 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_04f1c068;
          }
          uVar18 = uVar18 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(unaff_x23,lVar14,1);
LAB_04f1c068:
      puVar29 = (uint *)puVar11[1];
      uVar10 = (*(code *)*puVar11)(unaff_x23,unaff_x22);
    }
    lVar14 = *(long *)(puVar25 + 4);
    if (lVar14 == 0) {
LAB_04f1c294:
      func_0x03280cac();
      unaff_x26 = puVar17;
    }
    else {
      uVar26 = *(uint *)(lVar14 + 0x18);
      uVar10 = uVar10 & 0x7fffffff;
      unaff_x28 = (uint *)(ulong)uVar10;
      iVar30 = 0;
      if (uVar26 != 0) {
        iVar30 = (int)uVar10 / (int)uVar26;
      }
      uVar21 = uVar10 - iVar30 * uVar26;
      unaff_x26 = puVar17;
      if (uVar21 < uVar26) {
        iVar30 = *(int *)(lVar14 + (ulong)uVar21 * 4 + 0x20);
        *(ulong *)(puVar8 + -0x1f8) = (ulong)uVar21;
        uVar26 = iVar30 - 1;
        if ((int)uVar26 < 0) goto LAB_04f1c1d4;
        plVar12 = (long *)0x0;
        unaff_x29 = 0xffffffff;
        while( true ) {
          unaff_x25 = (uint *)(ulong)uVar26;
          unaff_x27 = *(undefined **)(puVar25 + 6);
          unaff_x23 = plVar12;
          if (unaff_x27 == (undefined *)0x0) break;
          unaff_x26 = puVar17;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar26) goto LAB_04f1c298;
          param_1 = (uint *)(unaff_x27 + (ulong)uVar26 * 0x10 + 0x20);
          puVar17 = unaff_x25;
          if (*param_1 == uVar10) {
            unaff_x22 = *(long **)(puVar25 + 0xc);
            if (unaff_x22 == (long *)0x0) {
              plVar13 = (long *)func_0x03c56b54(*(undefined8 *)
                                                 (*(long *)(plStack_48[4] + 0xc0) + 0x18));
              unaff_x22 = plVar12;
              if (plVar13 == (long *)0x0) break;
              puVar29 = (uint *)(ulong)*(uint *)(puVar8 + -0x1e4);
              plVar19 = *(long **)(*plVar13 + 0x1c0);
              uVar18 = (**(code **)(*plVar13 + 0x1b8))
                                 (plVar13,*(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x28)
                                 );
            }
            else {
              if (unaff_x22 == (long *)0x0) break;
              unaff_x24 = (uint *)(ulong)*(uint *)(puVar8 + -0x1e4);
              lVar14 = *(long *)(*(long *)(plStack_48[4] + 0xc0) + 8);
              uVar21 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x28);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = func_0x0325681c(lVar14);
              }
              lVar28 = *unaff_x22;
              uVar18 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar18 != 0) {
                piVar24 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == lVar14) {
                    puVar11 = (undefined8 *)(lVar28 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_04f1c1a4;
                  }
                  uVar18 = uVar18 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar18 != 0);
              }
              puVar11 = (undefined8 *)func_0x03256b10(unaff_x22,lVar14,0);
LAB_04f1c1a4:
              plVar19 = (long *)puVar11[1];
              puVar29 = unaff_x24;
              uVar18 = (*(code *)*puVar11)(unaff_x22,(long *)(ulong)uVar21);
              plVar12 = unaff_x22;
              unaff_x23 = (long *)(ulong)uVar21;
            }
            if ((uVar18 & 1) != 0) {
              unaff_x22 = plVar12;
              unaff_x26 = unaff_x25;
              if ((int)(uint)unaff_x29 < 0) {
                lVar14 = *(long *)(puVar25 + 4);
                if (lVar14 == 0) break;
                if (*(uint *)(lVar14 + 0x18) <= (uint)*(long *)(puVar8 + -0x1f8)) goto LAB_04f1c298;
                *(int *)(lVar14 + *(long *)(puVar8 + -0x1f8) * 4 + 0x20) =
                     *(int *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) + 1;
              }
              else {
                lVar14 = *(long *)(puVar25 + 6);
                if (lVar14 == 0) break;
                if (*(uint *)(lVar14 + 0x18) <= (uint)unaff_x29) goto LAB_04f1c298;
                *(undefined4 *)(lVar14 + unaff_x29 * 0x10 + 0x24) =
                     *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24);
              }
              **(undefined1 **)(puVar8 + -0x1f0) = unaff_x27[(long)unaff_x25 * 0x10 + 0x2c];
              *param_1 = 0xffffffff;
              *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) = puVar25[9];
              puVar25[9] = uVar26;
              *(ulong *)(puVar25 + 10) =
                   CONCAT44((int)((ulong)*(undefined8 *)(puVar25 + 10) >> 0x20) + 1,
                            (int)*(undefined8 *)(puVar25 + 10) + 1);
              return (long *)0x1;
            }
          }
          unaff_x29 = (ulong)uVar26;
          unaff_x22 = plVar12;
          uVar26 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24);
          if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) < 0) goto LAB_04f1c1d4;
        }
        goto LAB_04f1c294;
      }
    }
LAB_04f1c298:
    uVar31 = 0x4f1c29c;
    auVar32 = func_0x03280cb4();
  } while( true );
}

