/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD1114; Merger.MergeBoard.PowerBoost.Services.PowerBoostPersistanceService.MarkBoostAsUnlocked; status ok */


/* WARNING: Possible PIC construction at 0x06bd1038: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x06bd103c) */
/* WARNING: Removing unreachable block (ram,0x06bd13a8) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */

long * Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__MarkBoostAsUnlocked
                 (long *param_1,uint param_2)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long **pplVar8;
  long **pplVar9;
  uint uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined1 uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  int *piVar25;
  undefined8 uVar26;
  uint *puVar27;
  ulong uVar28;
  uint uVar29;
  long *plVar30;
  long *unaff_x22;
  uint *puVar31;
  long *unaff_x23;
  uint *unaff_x24;
  uint *unaff_x25;
  uint *puVar32;
  uint *unaff_x26;
  undefined *unaff_x27;
  uint *unaff_x28;
  int iVar33;
  ulong unaff_x29;
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  
  uVar28 = (ulong)param_2;
  if ((bRam0000000007e2aa88 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07759ac8);
    func_0x03280a18(PTR_DAT_0779bc18);
    bRam0000000007e2aa88 = 1;
  }
  lVar21 = param_1[6];
  if (lVar21 == 0) {
    plVar14 = (long *)Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__LoadData
                                (param_1);
    lVar21 = param_1[6];
    if (lVar21 == 0) {
      return plVar14;
    }
  }
  if (*(long *)(lVar21 + 0x18) != 0) {
    plVar14 = (long *)func_0x0411a010(*(long *)(lVar21 + 0x18),uVar28,
                                      *(undefined8 *)PTR_DAT_0779bc18);
    if (((ulong)plVar14 & 1) != 0) {
      return plVar14;
    }
    if ((param_1[6] != 0) && (lVar21 = *(long *)(param_1[6] + 0x18), lVar21 != 0)) {
      lVar22 = *(long *)(lVar21 + 0x10);
      lVar24 = *(long *)PTR_DAT_07759ac8;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      if (lVar22 != 0) {
        uVar10 = *(uint *)(lVar21 + 0x18);
        if (uVar10 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar21 + 0x18) = uVar10 + 1;
          *(uint *)(lVar22 + (long)(int)uVar10 * 4 + 0x20) = param_2;
        }
        else {
          func_0x04119c98(lVar21,uVar28,
                          *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        uVar26 = 0x7e2a000;
        plVar14 = param_1;
        if ((bRam0000000007e2aa86 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07834190);
          plVar14 = (long *)func_0x03280a18(PTR_DAT_07774240);
          bRam0000000007e2aa86 = 1;
        }
        lVar21 = param_1[6];
        if (lVar21 == 0) {
          return plVar14;
        }
        plVar30 = (long *)param_1[3];
        plVar14 = param_1;
        if (plVar30 != (long *)0x0) {
          lVar22 = *plVar30;
          plVar14 = (long *)param_1[4];
          plVar11 = (long *)param_1[5];
          lVar24 = *(long *)PTR_DAT_07834190;
          uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar28 != 0) {
            piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar24 + 0x20)) {
                lVar22 = lVar22 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar24 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_06bd0f24;
              }
              uVar28 = uVar28 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar28 != 0);
          }
          lVar22 = func_0x03256b10(plVar30);
LAB_06bd0f24:
          lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar24);
          uVar12 = (**(code **)(lVar22 + 8))(plVar30,lVar21,lVar22);
          uVar26 = 0;
          if (plVar11 != (long *)0x0) {
            lVar21 = *plVar11;
            uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar28 != 0) {
              piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_07774240) {
                  puVar13 = (undefined8 *)(lVar21 + (long)(*piVar25 + 7) * 0x10 + 0x138);
                  goto LAB_06bd0fa4;
                }
                uVar28 = uVar28 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar28 != 0);
            }
            puVar13 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07774240,7);
LAB_06bd0fa4:
                    /* WARNING: Could not recover jumptable at 0x06bd0fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar14 = (long *)(*(code *)*puVar13)(plVar11,plVar14,uVar12,1,puVar13[1]);
            return plVar14;
          }
        }
        lVar22 = func_0x03280cac();
        puVar7 = PTR_DAT_07759a18;
        puVar6 = PTR_DAT_07759a10;
        plStack_50 = plVar30;
        uStack_48 = lVar21;
        plStack_40 = plVar14;
        uStack_38 = uVar26;
        if ((bRam0000000007e2aab8 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07759a18);
          func_0x03280a18(PTR_DAT_07759a10);
          bRam0000000007e2aab8 = 1;
        }
        lVar21 = func_0x03280ca0(*(undefined8 *)puVar6);
        func_0x04119444(lVar21,*(undefined8 *)puVar7);
        plVar14 = (long *)(lVar22 + 0x18);
        *plVar14 = lVar21;
        goto SUB_032809c4;
      }
    }
  }
  auVar34 = func_0x03280cac();
  puVar17 = auVar34._0_8_;
  pplVar9 = &plStack_50;
  plStack_40 = (long *)0x6bd1210;
  uStack_38 = 0x7e2a000;
  plStack_68 = (long *)0x7e2a000;
  puVar27 = (uint *)(auVar34._8_8_ & 0xffffffff);
  uStack_30 = uVar28;
  if ((bRam0000000007e2aa89 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077df848);
    bRam0000000007e2aa89 = 1;
  }
  uStack_48._0_5_ = (uint5)(uint)uStack_48;
  auVar34._8_8_ = puVar27;
  auVar34._0_8_ = *(long *)(puVar17 + 0xe);
  if (*(long *)(puVar17 + 0xe) != 0) {
    puVar31 = (uint *)((long)&uStack_48 + 4);
    plVar14 = *(long **)PTR_DAT_077df848;
    uVar26 = 0x6bd1268;
    goto SUB_04f1c29c;
  }
  auVar35 = func_0x03280cac();
  uStack_70 = 0x6bd1288;
  plStack_68 = (long *)0x7e2a000;
  if ((bRam0000000007e2aa8a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077df858);
    bRam0000000007e2aa8a = 1;
  }
  lVar21 = *(long *)(auVar35._0_8_ + 0x38);
  auVar35._8_4_ = auVar35._8_4_;
  auVar35._0_8_ = lVar21;
  if (lVar21 != 0) {
    pplVar8 = &plStack_50;
    puVar16 = (uint *)0x1;
    uVar28 = 1;
    lVar21 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_077df858 + 0x20) + 0xc0) + 0x118);
    puVar31 = puVar27;
    puVar32 = puVar17;
    do {
      lVar22 = auVar35._0_8_;
      *(ulong *)((long)pplVar8 + -0x60) = unaff_x29;
      *(undefined8 *)((long)pplVar8 + -0x58) = uStack_70;
      *(uint **)((long)pplVar8 + -0x50) = unaff_x28;
      *(undefined **)((long)pplVar8 + -0x48) = unaff_x27;
      *(uint **)((long)pplVar8 + -0x40) = unaff_x26;
      *(uint **)((long)pplVar8 + -0x38) = unaff_x25;
      *(uint **)((long)pplVar8 + -0x30) = unaff_x24;
      *(long **)((long)pplVar8 + -0x28) = unaff_x23;
      *(long **)((long)pplVar8 + -0x20) = unaff_x22;
      *(long **)((long)pplVar8 + -0x18) = plStack_68;
      *(uint **)((long)pplVar8 + -0x10) = puVar32;
      *(uint **)((long)pplVar8 + -8) = puVar31;
      *(uint *)((long)pplVar8 + -100) = auVar35._8_4_;
      puVar27 = (uint *)(ulong)auVar35._8_4_;
      *(int *)(lVar22 + 0x2c) = *(int *)(lVar22 + 0x2c) + 1;
      puVar17 = puVar16;
      if (*(long *)(lVar22 + 0x10) == 0) {
        puVar17 = *(uint **)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x10);
        func_0x04f1b228(lVar22,0);
      }
      plVar14 = *(long **)(lVar22 + 0x30);
      unaff_x25 = *(uint **)(lVar22 + 0x18);
      if (plVar14 == (long *)0x0) {
        uVar10 = func_0x05793b44((undefined1 *)((long)pplVar8 + -100),
                                 *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 400));
      }
      else {
        lVar24 = *(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c(lVar24);
        }
        lVar20 = *plVar14;
        uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar23 != 0) {
          piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar24) {
              puVar13 = (undefined8 *)(lVar20 + (long)(*piVar25 + 1) * 0x10 + 0x138);
              goto LAB_04f1b3f8;
            }
            uVar23 = uVar23 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar23 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar14,lVar24,1);
LAB_04f1b3f8:
        puVar17 = (uint *)puVar13[1];
        uVar10 = (*(code *)*puVar13)(plVar14,puVar27);
      }
      lVar24 = *(long *)(lVar22 + 0x10);
      puVar31 = puVar16;
      unaff_x29 = uVar28;
      if (lVar24 == 0) goto LAB_04f1b754;
      uVar29 = *(uint *)(lVar24 + 0x18);
      uVar10 = uVar10 & 0x7fffffff;
      unaff_x27 = (undefined *)(ulong)uVar10;
      iVar33 = 0;
      if (uVar29 != 0) {
        iVar33 = (int)uVar10 / (int)uVar29;
      }
      uVar19 = uVar10 - iVar33 * uVar29;
      if (uVar29 <= uVar19) goto LAB_04f1b750;
      unaff_x28 = (uint *)(lVar24 + (ulong)uVar19 * 4 + 0x20);
      uVar29 = *unaff_x28 - 1;
      puVar31 = (uint *)(ulong)uVar29;
      iVar33 = (int)uVar28;
      unaff_x26 = puVar16;
      if (plVar14 == (long *)0x0) {
        if (unaff_x25 != (uint *)0x0) {
          uVar26 = *(undefined8 *)(unaff_x25 + 6);
          uVar19 = (uint)uVar26;
          if (uVar29 < uVar19) {
            plStack_68 = (long *)0x0;
            do {
              uVar29 = (uint)uVar26;
              uVar19 = (uint)puVar31;
              plVar14 = (long *)(long)(int)uVar19;
              if (unaff_x25[(long)(int)uVar19 * 4 + 8] == uVar10) {
                plVar30 = (long *)func_0x03c56b54(*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) +
                                                   0x18));
                if (unaff_x25[6] <= uVar19) goto LAB_04f1b750;
                if (plVar30 == (long *)0x0) goto LAB_04f1b754;
                puVar17 = (uint *)(ulong)*(uint *)((long)pplVar8 + -100);
                uVar23 = (**(code **)(*plVar30 + 0x1b8))
                                   (plVar30,unaff_x25[(long)plVar14 * 4 + 10],puVar17,
                                    *(undefined8 *)(*plVar30 + 0x1c0));
                if ((uVar23 & 1) != 0) {
                  if (iVar33 == 2) {
                    puVar15 = (undefined1 *)((long)pplVar8 + -0x68);
                    *(undefined4 *)((long)pplVar8 + -0x68) = *(undefined4 *)((long)pplVar8 + -100);
LAB_04f1b730:
                    uVar26 = func_0x03280b94(*(undefined8 *)
                                              (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70),
                                             puVar15);
                    func_0x057b8580(uVar26,0);
                    return (long *)0x0;
                  }
                  if (iVar33 != 1) {
                    return (long *)0x0;
                  }
                  plVar30 = plVar14;
                  if (uVar19 < unaff_x25[6]) {
LAB_04f1b70c:
                    *(char *)(unaff_x25 + (long)plVar30 * 4 + 0xb) = (char)puVar16;
                    return (long *)0x1;
                  }
                  goto LAB_04f1b750;
                }
                uVar29 = unaff_x25[6];
              }
              if (uVar29 <= uVar19) goto LAB_04f1b750;
              uVar2 = unaff_x25[(long)plVar14 * 4 + 9];
              puVar31 = (uint *)(ulong)uVar2;
              if ((int)uVar29 <= (int)plStack_68) {
                func_0x057b8684(0);
              }
              uVar26 = *(undefined8 *)(unaff_x25 + 6);
              plStack_68 = (long *)(ulong)((int)plStack_68 + 1);
              uVar19 = (uint)uVar26;
            } while (uVar2 < uVar19);
          }
LAB_04f1b5c4:
          if (*(int *)(lVar22 + 0x28) < 1) {
            uVar29 = *(uint *)(lVar22 + 0x20);
            plStack_68 = (long *)(ulong)uVar29;
            unaff_x29 = uVar28;
            if (uVar29 == uVar19) {
              func_0x04f1baf0(lVar22,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x1b8));
              lVar24 = *(long *)(lVar22 + 0x10);
              *(uint *)(lVar22 + 0x20) = uVar29 + 1;
              if (lVar24 == 0) goto LAB_04f1b754;
              uVar19 = *(uint *)(lVar24 + 0x18);
              iVar33 = 0;
              if (uVar19 != 0) {
                iVar33 = (int)uVar10 / (int)uVar19;
              }
              uVar2 = uVar10 - iVar33 * uVar19;
              if (uVar19 <= uVar2) goto LAB_04f1b750;
              unaff_x25 = *(uint **)(lVar22 + 0x18);
              unaff_x28 = (uint *)(lVar24 + (ulong)uVar2 * 4 + 0x20);
            }
            else {
              unaff_x25 = *(uint **)(lVar22 + 0x18);
              *(uint *)(lVar22 + 0x20) = uVar29 + 1;
            }
            if (unaff_x25 == (uint *)0x0) goto LAB_04f1b754;
            if (uVar29 < unaff_x25[6]) {
              lVar21 = (long)(int)uVar29;
LAB_04f1b670:
              unaff_x25[lVar21 * 4 + 8] = uVar10;
              unaff_x25[lVar21 * 4 + 9] = *unaff_x28 - 1;
              uVar10 = *(uint *)((long)pplVar8 + -100);
              *(char *)(unaff_x25 + lVar21 * 4 + 0xb) = (char)puVar16;
              unaff_x25[lVar21 * 4 + 10] = uVar10;
              *unaff_x28 = uVar29 + 1;
              return (long *)0x1;
            }
          }
          else {
            *(int *)(lVar22 + 0x28) = *(int *)(lVar22 + 0x28) + -1;
            uVar29 = *(uint *)(lVar22 + 0x24);
            plStack_68 = (long *)(ulong)uVar29;
            if (uVar29 < unaff_x25[6]) {
              lVar21 = (long)(int)uVar29;
              *(uint *)(lVar22 + 0x24) = unaff_x25[lVar21 * 4 + 9];
              goto LAB_04f1b670;
            }
          }
LAB_04f1b750:
          func_0x03280cb4();
          unaff_x29 = uVar28;
        }
      }
      else if (unaff_x25 != (uint *)0x0) {
        uVar26 = *(undefined8 *)(unaff_x25 + 6);
        uVar19 = (uint)uVar26;
        if (uVar29 < uVar19) {
          *(int *)((long)pplVar8 + -0x70) = iVar33;
          uVar28 = 0;
          do {
            uVar29 = (uint)uVar26;
            uVar19 = (uint)puVar31;
            plStack_68 = (long *)(long)(int)uVar19;
            if (unaff_x25[(long)(int)uVar19 * 4 + 8] == uVar10) {
              puVar27 = (uint *)(ulong)*(uint *)((long)pplVar8 + -100);
              lVar24 = *(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 8);
              puVar31 = (uint *)(ulong)unaff_x25[(long)plStack_68 * 4 + 10];
              if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                lVar24 = func_0x0325681c(lVar24);
              }
              lVar20 = *plVar14;
              uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar23 != 0) {
                piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == lVar24) {
                    puVar13 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
                    goto LAB_04f1b4dc;
                  }
                  uVar23 = uVar23 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar23 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar14,lVar24,0);
LAB_04f1b4dc:
              puVar17 = puVar27;
              uVar23 = (*(code *)*puVar13)(plVar14,puVar31,puVar27,puVar13[1]);
              if ((uVar23 & 1) != 0) {
                if ((*(uint *)((long)pplVar8 + -0x70) & 0xff) == 2) {
                  puVar15 = (undefined1 *)((long)pplVar8 + -0x6c);
                  *(undefined4 *)((long)pplVar8 + -0x6c) = *(undefined4 *)((long)pplVar8 + -100);
                  goto LAB_04f1b730;
                }
                if ((*(uint *)((long)pplVar8 + -0x70) & 0xff) != 1) {
                  return (long *)0x0;
                }
                plVar30 = plStack_68;
                if (unaff_x25[6] <= uVar19) goto LAB_04f1b750;
                goto LAB_04f1b70c;
              }
              uVar29 = unaff_x25[6];
            }
            if (uVar29 <= uVar19) goto LAB_04f1b750;
            uVar2 = unaff_x25[(long)plStack_68 * 4 + 9];
            puVar31 = (uint *)(ulong)uVar2;
            if ((int)uVar29 <= (int)uVar28) {
              func_0x057b8684(0);
            }
            uVar26 = *(undefined8 *)(unaff_x25 + 6);
            uVar28 = (ulong)((int)uVar28 + 1);
            uVar19 = (uint)uVar26;
          } while (uVar2 < uVar19);
        }
        goto LAB_04f1b5c4;
      }
LAB_04f1b754:
      lVar24 = func_0x03280cac();
      puVar32 = (uint *)PTR_DAT_07781380;
      *(undefined8 *)((long)pplVar8 + -0xc0) = 0x4f1b758;
      *(undefined **)((long)pplVar8 + -0xb8) = unaff_x27;
      *(uint **)((long)pplVar8 + -0xb0) = unaff_x26;
      *(uint **)((long)pplVar8 + -0xa8) = unaff_x25;
      *(uint **)((long)pplVar8 + -0xa0) = puVar27;
      *(uint **)((long)pplVar8 + -0x98) = puVar31;
      *(long **)((long)pplVar8 + -0x90) = plVar14;
      *(long **)((long)pplVar8 + -0x88) = plStack_68;
      *(long *)((long)pplVar8 + -0x80) = lVar21;
      *(long *)((long)pplVar8 + -0x78) = lVar22;
      uVar28 = 0x7e1b000;
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
      lVar21 = *(long *)puVar32;
      *(undefined8 *)((long)pplVar8 + -200) = 0;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar21 = func_0x057624fc(0);
      if (lVar21 != 0) {
        func_0x04e91150(lVar21,lVar24,(undefined1 *)((long)pplVar8 + -200),
                        *(undefined8 *)PTR_DAT_07781618);
        if (*(long *)((long)pplVar8 + -200) == 0) {
          return (long *)0x0;
        }
        uVar23 = func_0x056933d8(*(long *)((long)pplVar8 + -200),*(undefined8 *)PTR_DAT_0775b648,0);
        puVar6 = PTR_DAT_0774e558;
        if (*(long *)((long)pplVar8 + -200) != 0) {
          uVar28 = uVar23 & 0xffffffff;
          uVar23 = func_0x056933d8(*(long *)((long)pplVar8 + -200),*(undefined8 *)PTR_DAT_07781600,0
                                  );
          lVar21 = *(long *)puVar6;
          lVar22 = *(long *)((long)pplVar8 + -200);
          plVar14 = (long *)(uVar23 & 0xffffffff);
          puVar27 = *(uint **)(*(long *)(*(long *)(puVar17 + 8) + 0xc0) + 0x170);
          if (*(int *)(lVar21 + 0xe0) == 0) {
            func_0x03280b8c(lVar21);
          }
          uVar26 = func_0x057a51c4(puVar27,0);
          puVar31 = (uint *)0x0;
          unaff_x27 = puVar6;
          if (lVar22 != 0) {
            lVar21 = func_0x05690f88(lVar22,*(undefined8 *)PTR_DAT_0777e440,uVar26,0);
            lVar22 = *(long *)(*(long *)(*(long *)(puVar17 + 8) + 0xc0) + 8);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = func_0x0325681c(lVar22);
            }
            if (lVar21 == 0) {
LAB_04f1b90c:
              lVar20 = 0;
            }
            else {
              lVar20 = func_0x03280b90(lVar21,lVar22);
              if (lVar20 == 0) {
                func_0x03281048(lVar21,lVar22);
                goto LAB_04f1b90c;
              }
            }
            plVar14 = (long *)(lVar24 + 0x30);
            *plVar14 = lVar20;
            lVar22 = *(long *)(*(long *)(*(long *)(puVar17 + 8) + 0xc0) + 8);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = func_0x0325681c(lVar22);
            }
            if ((lVar21 != 0) && (lVar24 = func_0x03280b90(lVar21,lVar22), lVar24 == 0)) {
              func_0x03281048(lVar21,lVar22);
            }
            goto SUB_032809c4;
          }
        }
      }
      func_0x03280cac();
      func_0x057b819c(0x10,0);
      func_0x03280cac();
      auVar34 = func_0x03281048(puVar27,puVar31);
      puVar6 = PTR_DAT_07781380;
      lVar21 = auVar34._0_8_;
      *(undefined8 *)((long)pplVar8 + -0x100) = 0x4f1baf0;
      *(long **)((long)pplVar8 + -0xf0) = plVar14;
      *(ulong *)((long)pplVar8 + -0xe8) = uVar28;
      *(uint **)((long)pplVar8 + -0xe0) = puVar17;
      *(long *)((long)pplVar8 + -0xd8) = lVar24;
      if ((bRam0000000007e1b6ba & 1) == 0) {
        func_0x03280a18(PTR_DAT_07781380);
        bRam0000000007e1b6ba = 1;
      }
      uVar3 = *(undefined4 *)(lVar21 + 0x20);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar10 = func_0x05762478(uVar3,0);
      puVar6 = PTR_DAT_07754420;
      uVar28 = (ulong)uVar10;
      lVar22 = *(long *)(*(long *)(*(long *)(auVar34._8_8_ + 0x20) + 0xc0) + 0x1c8);
      *(undefined8 *)((long)pplVar8 + -0x110) = *(undefined8 *)((long)pplVar8 + -0x100);
      *(uint **)((long)pplVar8 + -0x100) = puVar27;
      *(uint **)((long)pplVar8 + -0xf8) = puVar31;
      *(undefined8 *)((long)pplVar8 + -0xf0) = *(undefined8 *)((long)pplVar8 + -0xf0);
      *(undefined8 *)((long)pplVar8 + -0xe8) = *(undefined8 *)((long)pplVar8 + -0xe8);
      *(undefined8 *)((long)pplVar8 + -0xe0) = *(undefined8 *)((long)pplVar8 + -0xe0);
      *(undefined8 *)((long)pplVar8 + -0xd8) = *(undefined8 *)((long)pplVar8 + -0xd8);
      if ((bRam0000000007e1b6bb & 1) == 0) {
        func_0x03280a18(PTR_DAT_07754420,uVar28,0);
        bRam0000000007e1b6bb = 1;
      }
      plVar30 = (long *)func_0x03280afc(*(undefined8 *)puVar6,uVar28);
      lVar22 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x1b0);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      puVar16 = (uint *)func_0x03280afc(lVar22,uVar28);
      uVar29 = *(uint *)(lVar21 + 0x20);
      unaff_x24 = (uint *)(ulong)uVar29;
      plStack_68 = (long *)0x0;
      puVar17 = puVar16;
      func_0x057b9f30(*(undefined8 *)(lVar21 + 0x18),0,puVar16,0,unaff_x24,0);
      if ((int)uVar29 < 1) {
LAB_04f1bc8c:
        plVar14 = (long *)(lVar21 + 0x10);
        *plVar14 = (long)plVar30;
        goto SUB_032809c4;
      }
      if (puVar16 != (uint *)0x0) {
        uVar29 = puVar16[6];
        puVar27 = (uint *)0x0;
        while (puVar27 < (uint *)(ulong)uVar29) {
          uVar19 = puVar16[(long)puVar27 * 4 + 8];
          if (-1 < (int)uVar19) {
            if (plVar30 == (long *)0x0) goto LAB_04f1bcc0;
            iVar33 = 0;
            if (uVar10 != 0) {
              iVar33 = (int)uVar19 / (int)uVar10;
            }
            uVar19 = uVar19 - iVar33 * uVar10;
            if (*(uint *)(plVar30 + 3) <= uVar19) break;
            puVar16[(long)puVar27 * 4 + 9] = *(int *)((long)plVar30 + (ulong)uVar19 * 4 + 0x20) - 1;
            *(int *)((long)plVar30 + (ulong)uVar19 * 4 + 0x20) = (int)puVar27 + 1;
          }
          puVar27 = (uint *)((long)puVar27 + 1);
          if (puVar27 == unaff_x24) goto LAB_04f1bc8c;
        }
        func_0x03280cb4();
      }
LAB_04f1bcc0:
      auVar35 = func_0x03280cac();
      lVar22 = auVar35._0_8_;
      *(ulong *)((long)pplVar8 + -0x170) = unaff_x29;
      *(undefined8 *)((long)pplVar8 + -0x168) = 0x4f1bcc4;
      *(uint **)((long)pplVar8 + -0x160) = unaff_x28;
      *(undefined **)((long)pplVar8 + -0x158) = unaff_x27;
      *(uint **)((long)pplVar8 + -0x150) = puVar32;
      *(uint **)((long)pplVar8 + -0x148) = unaff_x25;
      *(uint **)((long)pplVar8 + -0x140) = unaff_x24;
      *(uint **)((long)pplVar8 + -0x138) = puVar16;
      *(undefined8 **)((long)pplVar8 + -0x130) = (undefined8 *)(lVar21 + 0x18);
      *(long **)((long)pplVar8 + -0x128) = plVar30;
      *(ulong *)((long)pplVar8 + -0x120) = uVar28;
      *(long *)((long)pplVar8 + -0x118) = lVar21;
      *(uint *)((long)pplVar8 + -0x174) = auVar35._8_4_;
      if (*(long *)(lVar22 + 0x10) == 0) {
        return (long *)0x0;
      }
      unaff_x22 = *(long **)(lVar22 + 0x30);
      if (unaff_x22 == (long *)0x0) {
        puVar31 = puVar17;
        uVar10 = func_0x05793b44((undefined1 *)((long)pplVar8 + -0x174),
                                 *(undefined8 *)(*(long *)(*(long *)(puVar17 + 8) + 0xc0) + 400));
      }
      else {
        plVar30 = (long *)(ulong)auVar35._8_4_;
        lVar21 = *(long *)(*(long *)(*(long *)(puVar17 + 8) + 0xc0) + 8);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
        }
        lVar24 = *unaff_x22;
        uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar28 != 0) {
          piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar21) {
              puVar13 = (undefined8 *)(lVar24 + (long)(*piVar25 + 1) * 0x10 + 0x138);
              goto LAB_04f1bd84;
            }
            uVar28 = uVar28 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar28 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(unaff_x22,lVar21,1);
LAB_04f1bd84:
        puVar31 = (uint *)puVar13[1];
        uVar10 = (*(code *)*puVar13)(unaff_x22,plVar30);
      }
      lVar21 = *(long *)(lVar22 + 0x10);
      if (lVar21 == 0) {
LAB_04f1bf9c:
        func_0x03280cac();
      }
      else {
        uVar29 = *(uint *)(lVar21 + 0x18);
        uVar10 = uVar10 & 0x7fffffff;
        unaff_x27 = (undefined *)(ulong)uVar10;
        iVar33 = 0;
        if (uVar29 != 0) {
          iVar33 = (int)uVar10 / (int)uVar29;
        }
        uVar19 = uVar10 - iVar33 * uVar29;
        if (uVar19 < uVar29) {
          uVar29 = *(int *)(lVar21 + (ulong)uVar19 * 4 + 0x20) - 1;
          if ((int)uVar29 < 0) {
            return (long *)0x0;
          }
          plVar14 = (long *)0x0;
          unaff_x29 = 0xffffffff;
          *(ulong *)((long)pplVar8 + -0x180) = (ulong)uVar19;
          while( true ) {
            unaff_x24 = (uint *)(ulong)uVar29;
            puVar32 = *(uint **)(lVar22 + 0x18);
            unaff_x22 = plVar14;
            if (puVar32 == (uint *)0x0) break;
            if (puVar32[6] <= uVar29) goto LAB_04f1bfa0;
            unaff_x25 = puVar32 + (ulong)uVar29 * 4 + 8;
            unaff_x28 = unaff_x24;
            if (*unaff_x25 == uVar10) {
              plVar30 = *(long **)(lVar22 + 0x30);
              if (plVar30 == (long *)0x0) {
                plVar11 = (long *)func_0x03c56b54(*(undefined8 *)
                                                   (*(long *)(*(long *)(puVar17 + 8) + 0xc0) + 0x18)
                                                 );
                plVar30 = plVar14;
                if (plVar11 == (long *)0x0) break;
                puVar31 = (uint *)(ulong)*(uint *)((long)pplVar8 + -0x174);
                plStack_68 = *(long **)(*plVar11 + 0x1c0);
                uVar28 = (**(code **)(*plVar11 + 0x1b8))(plVar11,puVar32[(long)unaff_x24 * 4 + 10]);
              }
              else {
                if (plVar30 == (long *)0x0) break;
                puVar16 = (uint *)(ulong)*(uint *)((long)pplVar8 + -0x174);
                lVar21 = *(long *)(*(long *)(*(long *)(puVar17 + 8) + 0xc0) + 8);
                uVar19 = puVar32[(long)unaff_x24 * 4 + 10];
                if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                  lVar21 = func_0x0325681c(lVar21);
                }
                lVar24 = *plVar30;
                uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar28 != 0) {
                  piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == lVar21) {
                      puVar13 = (undefined8 *)(lVar24 + (long)*piVar25 * 0x10 + 0x138);
                      goto LAB_04f1bec0;
                    }
                    uVar28 = uVar28 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar28 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar30,lVar21,0);
LAB_04f1bec0:
                plStack_68 = (long *)puVar13[1];
                puVar31 = puVar16;
                uVar28 = (*(code *)*puVar13)(plVar30,(long *)(ulong)uVar19);
                plVar14 = plVar30;
                unaff_x22 = (long *)(ulong)uVar19;
              }
              if ((uVar28 & 1) != 0) {
                plVar30 = plVar14;
                if ((int)(uint)unaff_x29 < 0) {
                  lVar21 = *(long *)(lVar22 + 0x10);
                  if (lVar21 == 0) break;
                  if (*(uint *)(lVar21 + 0x18) <= (uint)*(long *)((long)pplVar8 + -0x180))
                  goto LAB_04f1bfa0;
                  *(uint *)(lVar21 + *(long *)((long)pplVar8 + -0x180) * 4 + 0x20) =
                       puVar32[(long)unaff_x24 * 4 + 9] + 1;
                }
                else {
                  lVar21 = *(long *)(lVar22 + 0x18);
                  if (lVar21 == 0) break;
                  if (*(uint *)(lVar21 + 0x18) <= (uint)unaff_x29) goto LAB_04f1bfa0;
                  *(uint *)(lVar21 + unaff_x29 * 0x10 + 0x24) = puVar32[(long)unaff_x24 * 4 + 9];
                }
                *unaff_x25 = 0xffffffff;
                puVar32[(long)unaff_x24 * 4 + 9] = *(uint *)(lVar22 + 0x24);
                *(uint *)(lVar22 + 0x24) = uVar29;
                *(ulong *)(lVar22 + 0x28) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar22 + 0x28) >> 0x20) + 1,
                              (int)*(undefined8 *)(lVar22 + 0x28) + 1);
                return (long *)0x1;
              }
            }
            unaff_x29 = (ulong)uVar29;
            plVar30 = plVar14;
            uVar29 = puVar32[(long)unaff_x24 * 4 + 9];
            if ((int)puVar32[(long)unaff_x24 * 4 + 9] < 0) {
              return (long *)0x0;
            }
          }
          goto LAB_04f1bf9c;
        }
      }
LAB_04f1bfa0:
      auVar35 = func_0x03280cb4();
      puVar27 = auVar35._0_8_;
      pplVar9 = (long **)((long)pplVar8 + -0x200);
      *(ulong *)((long)pplVar8 + -0x1e0) = unaff_x29;
      *(undefined8 *)((long)pplVar8 + -0x1d8) = 0x4f1bfa4;
      *(uint **)((long)pplVar8 + -0x1d0) = unaff_x28;
      *(undefined **)((long)pplVar8 + -0x1c8) = unaff_x27;
      *(uint **)((long)pplVar8 + -0x1c0) = puVar32;
      *(uint **)((long)pplVar8 + -0x1b8) = unaff_x25;
      *(uint **)((long)pplVar8 + -0x1b0) = unaff_x24;
      *(uint **)((long)pplVar8 + -0x1a8) = puVar16;
      *(long **)((long)pplVar8 + -0x1a0) = unaff_x22;
      *(long **)((long)pplVar8 + -0x198) = plVar30;
      *(uint **)((long)pplVar8 + -400) = puVar17;
      *(long *)((long)pplVar8 + -0x188) = lVar22;
      *(uint *)((long)pplVar8 + -0x1e4) = auVar35._8_4_;
      lVar21 = *(long *)(puVar27 + 4);
      *(uint **)((long)pplVar8 + -0x1f0) = puVar31;
      if (lVar21 == 0) {
LAB_04f1c1d4:
        **(undefined1 **)((long)pplVar8 + -0x1f0) = 0;
        return (long *)0x0;
      }
      unaff_x23 = *(long **)(puVar27 + 0xc);
      plVar14 = plStack_68;
      if (unaff_x23 == (long *)0x0) {
        uVar10 = func_0x05793b44((undefined1 *)((long)pplVar8 + -0x1e4),
                                 *(undefined8 *)(*(long *)(plStack_68[4] + 0xc0) + 400));
      }
      else {
        unaff_x22 = (long *)(ulong)auVar35._8_4_;
        lVar21 = *(long *)(*(long *)(plStack_68[4] + 0xc0) + 8);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
        }
        lVar22 = *unaff_x23;
        uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar28 != 0) {
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar21) {
              puVar13 = (undefined8 *)(lVar22 + (long)(*piVar25 + 1) * 0x10 + 0x138);
              goto LAB_04f1c068;
            }
            uVar28 = uVar28 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar28 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(unaff_x23,lVar21,1);
LAB_04f1c068:
        puVar31 = (uint *)puVar13[1];
        uVar10 = (*(code *)*puVar13)(unaff_x23,unaff_x22);
      }
      lVar21 = *(long *)(puVar27 + 4);
      if (lVar21 == 0) {
LAB_04f1c294:
        func_0x03280cac();
        unaff_x26 = puVar32;
      }
      else {
        uVar29 = *(uint *)(lVar21 + 0x18);
        uVar10 = uVar10 & 0x7fffffff;
        unaff_x28 = (uint *)(ulong)uVar10;
        iVar33 = 0;
        if (uVar29 != 0) {
          iVar33 = (int)uVar10 / (int)uVar29;
        }
        uVar19 = uVar10 - iVar33 * uVar29;
        unaff_x26 = puVar32;
        if (uVar19 < uVar29) {
          iVar33 = *(int *)(lVar21 + (ulong)uVar19 * 4 + 0x20);
          *(ulong *)((long)pplVar8 + -0x1f8) = (ulong)uVar19;
          uVar29 = iVar33 - 1;
          if ((int)uVar29 < 0) goto LAB_04f1c1d4;
          plVar30 = (long *)0x0;
          unaff_x29 = 0xffffffff;
          while( true ) {
            unaff_x25 = (uint *)(ulong)uVar29;
            unaff_x27 = *(undefined **)(puVar27 + 6);
            unaff_x23 = plVar30;
            if (unaff_x27 == (undefined *)0x0) break;
            unaff_x26 = puVar32;
            if (*(uint *)(unaff_x27 + 0x18) <= uVar29) goto LAB_04f1c298;
            puVar17 = (uint *)(unaff_x27 + (ulong)uVar29 * 0x10 + 0x20);
            puVar32 = unaff_x25;
            if (*puVar17 == uVar10) {
              unaff_x22 = *(long **)(puVar27 + 0xc);
              if (unaff_x22 == (long *)0x0) {
                plVar11 = (long *)func_0x03c56b54(*(undefined8 *)
                                                   (*(long *)(plStack_68[4] + 0xc0) + 0x18));
                unaff_x22 = plVar30;
                if (plVar11 == (long *)0x0) break;
                puVar31 = (uint *)(ulong)*(uint *)((long)pplVar8 + -0x1e4);
                plVar14 = *(long **)(*plVar11 + 0x1c0);
                uVar28 = (**(code **)(*plVar11 + 0x1b8))
                                   (plVar11,*(undefined4 *)
                                             (unaff_x27 + (long)unaff_x25 * 0x10 + 0x28));
              }
              else {
                if (unaff_x22 == (long *)0x0) break;
                unaff_x24 = (uint *)(ulong)*(uint *)((long)pplVar8 + -0x1e4);
                lVar21 = *(long *)(*(long *)(plStack_68[4] + 0xc0) + 8);
                uVar19 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x28);
                if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                  lVar21 = func_0x0325681c(lVar21);
                }
                lVar22 = *unaff_x22;
                uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
                if (uVar28 != 0) {
                  piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == lVar21) {
                      puVar13 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                      goto LAB_04f1c1a4;
                    }
                    uVar28 = uVar28 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar28 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(unaff_x22,lVar21,0);
LAB_04f1c1a4:
                plVar14 = (long *)puVar13[1];
                puVar31 = unaff_x24;
                uVar28 = (*(code *)*puVar13)(unaff_x22,(long *)(ulong)uVar19);
                plVar30 = unaff_x22;
                unaff_x23 = (long *)(ulong)uVar19;
              }
              if ((uVar28 & 1) != 0) {
                unaff_x22 = plVar30;
                unaff_x26 = unaff_x25;
                if ((int)(uint)unaff_x29 < 0) {
                  lVar21 = *(long *)(puVar27 + 4);
                  if (lVar21 == 0) break;
                  if (*(uint *)(lVar21 + 0x18) <= (uint)*(long *)((long)pplVar8 + -0x1f8))
                  goto LAB_04f1c298;
                  *(int *)(lVar21 + *(long *)((long)pplVar8 + -0x1f8) * 4 + 0x20) =
                       *(int *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) + 1;
                }
                else {
                  lVar21 = *(long *)(puVar27 + 6);
                  if (lVar21 == 0) break;
                  if (*(uint *)(lVar21 + 0x18) <= (uint)unaff_x29) goto LAB_04f1c298;
                  *(undefined4 *)(lVar21 + unaff_x29 * 0x10 + 0x24) =
                       *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24);
                }
                **(undefined1 **)((long)pplVar8 + -0x1f0) = unaff_x27[(long)unaff_x25 * 0x10 + 0x2c]
                ;
                *puVar17 = 0xffffffff;
                *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) = puVar27[9];
                puVar27[9] = uVar29;
                *(ulong *)(puVar27 + 10) =
                     CONCAT44((int)((ulong)*(undefined8 *)(puVar27 + 10) >> 0x20) + 1,
                              (int)*(undefined8 *)(puVar27 + 10) + 1);
                return (long *)0x1;
              }
            }
            unaff_x29 = (ulong)uVar29;
            unaff_x22 = plVar30;
            uVar29 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24);
            if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) < 0) goto LAB_04f1c1d4;
          }
          goto LAB_04f1c294;
        }
      }
LAB_04f1c298:
      uVar26 = 0x4f1c29c;
      auVar34 = func_0x03280cb4();
SUB_04f1c29c:
      puVar32 = auVar34._0_8_;
      pplVar8 = (long **)((long)pplVar9 + -0x20);
      *(undefined8 *)((long)pplVar9 + -0x20) = uVar26;
      *(uint **)((long)pplVar9 + -0x10) = puVar17;
      *(uint **)((long)pplVar9 + -8) = puVar27;
      uVar29 = (uint)*(undefined8 *)(*(long *)(plVar14[4] + 0xc0) + 0x110);
      uVar10 = func_0x04f1af5c(puVar32,auVar34._8_8_);
      if ((int)uVar10 < 0) {
        uVar18 = 0;
        goto LAB_04f1c2e4;
      }
      lVar21 = *(long *)(puVar32 + 6);
      if (lVar21 == 0) {
        func_0x03280cac();
      }
      else if (uVar10 < *(uint *)(lVar21 + 0x18)) {
        uVar18 = *(undefined1 *)(lVar21 + (ulong)uVar10 * 0x10 + 0x2c);
LAB_04f1c2e4:
        *(undefined1 *)puVar31 = uVar18;
        return (long *)(ulong)(~uVar10 >> 0x1f);
      }
      uStack_70 = 0x4f1c304;
      auVar35 = func_0x03280cb4();
      puVar16 = (uint *)(ulong)(uVar29 & 1);
      uVar28 = 0;
      lVar21 = *(long *)(*(long *)(plVar14[4] + 0xc0) + 0x118);
    } while( true );
  }
  lVar21 = func_0x03280cac();
  puVar7 = PTR_DAT_077dfec8;
  puVar6 = PTR_DAT_07774270;
  if ((bRam0000000007e2aa8b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077df850);
    func_0x03280a18(PTR_DAT_077df860);
    func_0x03280a18(PTR_DAT_07774270);
    func_0x03280a18(PTR_DAT_077dfec8);
    bRam0000000007e2aa8b = 1;
  }
  lVar22 = func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x06b0e5a4(lVar22,*(undefined8 *)puVar7,0);
  plVar14 = (long *)(lVar21 + 0x28);
  *plVar14 = lVar22;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  return plVar14;
}

