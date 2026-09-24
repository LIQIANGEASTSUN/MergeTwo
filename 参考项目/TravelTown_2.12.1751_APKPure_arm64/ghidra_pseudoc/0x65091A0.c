/* Ghidra 12.1.2 native pseudocode; RVA 0x65091A0; MergeEngine.ECS.Systems.Player.ResourcesSystem.GetResourceSpendCount; status ok */


/* WARNING: Possible PIC construction at 0x04fb33d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb369c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb37ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb3a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb37d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06609254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x066092e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0660930c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x066092ec) */
/* WARNING: Removing unreachable block (ram,0x06609258) */
/* WARNING: Removing unreachable block (ram,0x04fb3a6c) */
/* WARNING: Removing unreachable block (ram,0x04fb37b0) */
/* WARNING: Removing unreachable block (ram,0x04fb37c4) */
/* WARNING: Removing unreachable block (ram,0x04fb36a0) */
/* WARNING: Removing unreachable block (ram,0x04fb37c8) */
/* WARNING: Removing unreachable block (ram,0x04fb36a4) */
/* WARNING: Removing unreachable block (ram,0x04fb36d8) */
/* WARNING: Removing unreachable block (ram,0x04fb36dc) */
/* WARNING: Removing unreachable block (ram,0x04fb36ec) */
/* WARNING: Removing unreachable block (ram,0x04fb3720) */
/* WARNING: Removing unreachable block (ram,0x04fb372c) */
/* WARNING: Removing unreachable block (ram,0x04fb3730) */
/* WARNING: Removing unreachable block (ram,0x04fb3740) */
/* WARNING: Removing unreachable block (ram,0x04fb37d8) */
/* WARNING: Removing unreachable block (ram,0x04fb37e8) */
/* WARNING: Removing unreachable block (ram,0x04fb37ec) */
/* WARNING: Removing unreachable block (ram,0x04fb37f8) */
/* WARNING: Removing unreachable block (ram,0x04fb3750) */
/* WARNING: Removing unreachable block (ram,0x04fb3758) */
/* WARNING: Removing unreachable block (ram,0x04fb3764) */
/* WARNING: Removing unreachable block (ram,0x04fb376c) */
/* WARNING: Removing unreachable block (ram,0x04fb377c) */
/* WARNING: Removing unreachable block (ram,0x04fb3828) */
/* WARNING: Removing unreachable block (ram,0x04fb3784) */
/* WARNING: Removing unreachable block (ram,0x04fb33d8) */
/* WARNING: Removing unreachable block (ram,0x06609310) */
/* WARNING: Removing unreachable block (ram,0x064a7540) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */
/* WARNING: Removing unreachable block (ram,0x04fb3990) */
/* WARNING: Removing unreachable block (ram,0x04fb3994) */
/* WARNING: Removing unreachable block (ram,0x04fb39a0) */
/* WARNING: Removing unreachable block (ram,0x04fb39a8) */
/* WARNING: Removing unreachable block (ram,0x04fb39b0) */
/* WARNING: Removing unreachable block (ram,0x04fb39b8) */
/* WARNING: Removing unreachable block (ram,0x04fb39d0) */
/* WARNING: Removing unreachable block (ram,0x04fb39d8) */

ulong * MergeEngine_ECS_Systems_Player_ResourcesSystem__GetResourceSpendCount
                  (long param_1,long *param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  ulong *puVar29;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar30;
  long *unaff_x23;
  long *plVar31;
  long *unaff_x24;
  uint *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_50 [12];
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long *plStack_28;
  
  puVar10 = &stack0xffffffffffffffe0;
  if ((bRam0000000007e27163 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a238);
    bRam0000000007e27163 = 1;
  }
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x30), lVar16 == 0)) {
    auVar33 = func_0x03280cac();
    puVar11 = auStack_50;
    uStack_40 = 0x6609200;
    uStack_38 = 0x7e27000;
    unaff_x21 = (long *)0x7e27000;
    lStack_30 = param_1;
    plStack_28 = param_2;
    if ((bRam0000000007e27164 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e668);
      bRam0000000007e27164 = 1;
    }
    uStack_44 = 0;
    lVar16 = *(long *)(auVar33._0_8_ + 0x50);
    auVar34._8_8_ = auVar33._8_8_;
    auVar34._0_8_ = lVar16;
    if (lVar16 != 0) {
      param_2 = (long *)&uStack_44;
      lVar25 = *(long *)PTR_DAT_0774e668;
      uVar32 = 0x6609258;
      goto SUB_04fb40cc;
    }
    lVar16 = func_0x03280cac();
    puVar9 = PTR_DAT_0774e748;
    puVar8 = PTR_DAT_0774e740;
    if ((bRam0000000007e27166 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e748);
      func_0x03280a18(PTR_DAT_0774e740);
      bRam0000000007e27166 = 1;
    }
    uVar21 = func_0x03280ca0(*(undefined8 *)puVar8);
    func_0x04fb1810(uVar21,*(undefined8 *)puVar9);
    puVar29 = (ulong *)(lVar16 + 0x50);
    *puVar29 = uVar21;
SUB_032809c4:
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)puVar29 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar29 >> 0xc & 0x3f);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    return puVar29;
  }
  plVar19 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_0777a238 + 0x20) + 0xc0) + 0x110);
  uVar12 = func_0x04fb2c6c();
  if ((int)uVar12 < 0) {
    func_0x057b861c(param_2,0);
    return (ulong *)0x0;
  }
  lVar25 = *(long *)(lVar16 + 0x18);
  if (lVar25 == 0) {
    func_0x03280cac();
  }
  else if (uVar12 < *(uint *)(lVar25 + 0x18)) {
    return (ulong *)(ulong)*(uint *)(lVar25 + (ulong)uVar12 * 0x18 + 0x30);
  }
  uVar32 = 0x4fb25d8;
  auVar33 = func_0x03280cb4();
  uVar21 = 1;
  uVar22 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x118);
  do {
    plVar30 = auVar33._8_8_;
    lVar25 = auVar33._0_8_;
    *(uint **)(puVar10 + -0x60) = unaff_x29;
    *(undefined8 *)(puVar10 + -0x58) = uVar32;
    *(long **)(puVar10 + -0x50) = unaff_x28;
    *(undefined **)(puVar10 + -0x48) = unaff_x27;
    *(undefined **)(puVar10 + -0x40) = unaff_x26;
    *(uint **)(puVar10 + -0x38) = unaff_x25;
    *(long **)(puVar10 + -0x30) = unaff_x24;
    *(long **)(puVar10 + -0x28) = unaff_x23;
    *(long **)(puVar10 + -0x20) = unaff_x22;
    *(long **)(puVar10 + -0x18) = unaff_x21;
    *(long *)(puVar10 + -0x10) = lVar16;
    *(long **)(puVar10 + -8) = param_2;
    unaff_x29 = (uint *)((ulong)plVar19 & 0xffffffff);
    plVar20 = plVar19;
    if (plVar30 == (long *)0x0) {
      func_0x057a867c(5);
    }
    *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
    if (*(long *)(lVar25 + 0x10) == 0) {
      plVar20 = *(long **)(*(long *)(*(long *)(uVar22 + 0x20) + 0xc0) + 0x10);
      func_0x04fb2f50(lVar25,0);
    }
    plVar31 = *(long **)(lVar25 + 0x30);
    lVar16 = *(long *)(lVar25 + 0x18);
    if (plVar31 == (long *)0x0) {
      if (plVar30 != (long *)0x0) {
        uVar12 = (**(code **)(*plVar30 + 0x158))(plVar30,*(undefined8 *)(*plVar30 + 0x160));
        goto LAB_04fb3138;
      }
    }
    else {
      lVar17 = *(long *)(*(long *)(*(long *)(uVar22 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      lVar26 = *plVar31;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == lVar17) {
            puVar13 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
            goto LAB_04fb3128;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar31,lVar17,1);
LAB_04fb3128:
      plVar20 = (long *)puVar13[1];
      uVar12 = (*(code *)*puVar13)(plVar31,plVar30);
LAB_04fb3138:
      lVar17 = *(long *)(lVar25 + 0x10);
      if (lVar17 != 0) {
        uVar24 = *(uint *)(lVar17 + 0x18);
        uVar12 = uVar12 & 0x7fffffff;
        unaff_x27 = (undefined *)(ulong)uVar12;
        iVar4 = 0;
        if (uVar24 != 0) {
          iVar4 = (int)uVar12 / (int)uVar24;
        }
        uVar23 = uVar12 - iVar4 * uVar24;
        plVar14 = plVar31;
        if (uVar23 < uVar24) {
          unaff_x28 = (long *)(lVar17 + (ulong)uVar23 * 4 + 0x20);
          uVar24 = *(int *)unaff_x28 - 1;
          param_2 = (long *)(ulong)uVar24;
          if (plVar31 == (long *)0x0) {
            plVar14 = (long *)func_0x039574b0(*(undefined8 *)
                                               (*(long *)(*(long *)(uVar22 + 0x20) + 0xc0) + 0x18));
            if (lVar16 != 0) {
              uVar32 = *(undefined8 *)(lVar16 + 0x18);
              uVar23 = (uint)uVar32;
              if (uVar24 < uVar23) {
                *(int *)(puVar10 + -100) = (int)uVar21;
                uVar21 = 0;
                unaff_x25 = (uint *)0x18;
                do {
                  uVar24 = (uint)uVar32;
                  uVar23 = (uint)param_2;
                  param_2 = (long *)(long)(int)uVar23;
                  plVar31 = plVar14;
                  if (*(uint *)(lVar16 + (long)(int)uVar23 * 0x18 + 0x20) == uVar12) {
                    if (plVar14 == (long *)0x0) goto LAB_04fb348c;
                    plVar20 = plVar30;
                    uVar27 = (**(code **)(*plVar14 + 0x1b8))
                                       (plVar14,*(undefined8 *)
                                                 (lVar16 + (long)param_2 * 0x18 + 0x28),plVar30,
                                        *(undefined8 *)(*plVar14 + 0x1c0));
                    if ((uVar27 & 1) != 0) {
                      if ((*(uint *)(puVar10 + -100) & 0xff) == 2) goto LAB_04fb3474;
                      if ((*(uint *)(puVar10 + -100) & 0xff) != 1) {
                        return (ulong *)0x0;
                      }
                      if (uVar23 < *(uint *)(lVar16 + 0x18)) {
                        *(int *)(lVar16 + (long)param_2 * 0x18 + 0x30) = (int)plVar19;
                        return (ulong *)0x1;
                      }
                      goto LAB_04fb3488;
                    }
                    uVar24 = *(uint *)(lVar16 + 0x18);
                  }
                  if (uVar24 <= uVar23) goto LAB_04fb3488;
                  uVar2 = *(uint *)(lVar16 + (long)param_2 * 0x18 + 0x24);
                  param_2 = (long *)(ulong)uVar2;
                  if ((int)uVar24 <= (int)uVar21) {
                    func_0x057b8684(0);
                  }
                  uVar32 = *(undefined8 *)(lVar16 + 0x18);
                  uVar21 = (ulong)((int)uVar21 + 1);
                  uVar23 = (uint)uVar32;
                } while (uVar2 < uVar23);
              }
              goto LAB_04fb3300;
            }
          }
          else if (lVar16 != 0) {
            uVar32 = *(undefined8 *)(lVar16 + 0x18);
            uVar23 = (uint)uVar32;
            if (uVar24 < uVar23) {
              *(int *)(puVar10 + -0x68) = (int)plVar19;
              *(int *)(puVar10 + -100) = (int)uVar21;
              unaff_x29 = (uint *)0x0;
              uVar21 = 0x18;
              do {
                uVar24 = (uint)uVar32;
                uVar23 = (uint)param_2;
                param_2 = (long *)(long)(int)uVar23;
                if (*(uint *)(lVar16 + (long)(int)uVar23 * 0x18 + 0x20) == uVar12) {
                  lVar17 = *(long *)(*(long *)(*(long *)(uVar22 + 0x20) + 0xc0) + 8);
                  unaff_x25 = *(uint **)(lVar16 + (long)param_2 * 0x18 + 0x28);
                  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                    lVar17 = func_0x0325681c(lVar17);
                  }
                  lVar26 = *plVar31;
                  uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                  if (uVar27 != 0) {
                    piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar17) {
                        puVar13 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_04fb320c;
                      }
                      uVar27 = uVar27 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar27 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x03256b10(plVar31,lVar17,0);
LAB_04fb320c:
                  plVar20 = plVar30;
                  uVar27 = (*(code *)*puVar13)(plVar31,unaff_x25,plVar30,puVar13[1]);
                  if ((uVar27 & 1) != 0) {
                    if ((*(uint *)(puVar10 + -100) & 0xff) == 2) {
LAB_04fb3474:
                      func_0x057b8580(plVar30,0);
                      return (ulong *)0x0;
                    }
                    if ((*(uint *)(puVar10 + -100) & 0xff) != 1) {
                      return (ulong *)0x0;
                    }
                    if (uVar23 < *(uint *)(lVar16 + 0x18)) {
                      *(undefined4 *)(lVar16 + (long)param_2 * 0x18 + 0x30) =
                           *(undefined4 *)(puVar10 + -0x68);
                      return (ulong *)0x1;
                    }
                    goto LAB_04fb3488;
                  }
                  uVar24 = *(uint *)(lVar16 + 0x18);
                }
                if (uVar24 <= uVar23) goto LAB_04fb3488;
                uVar2 = *(uint *)(lVar16 + (long)param_2 * 0x18 + 0x24);
                param_2 = (long *)(ulong)uVar2;
                if ((int)uVar24 <= (int)unaff_x29) {
                  func_0x057b8684(0);
                }
                uVar32 = *(undefined8 *)(lVar16 + 0x18);
                unaff_x29 = (uint *)(ulong)((int)unaff_x29 + 1);
                uVar23 = (uint)uVar32;
              } while (uVar2 < uVar23);
              unaff_x29 = (uint *)(ulong)*(uint *)(puVar10 + -0x68);
            }
LAB_04fb3300:
            plVar14 = plVar31;
            if (*(int *)(lVar25 + 0x28) < 1) {
              uVar24 = *(uint *)(lVar25 + 0x20);
              param_2 = (long *)(ulong)uVar24;
              if (uVar24 == uVar23) {
                func_0x04fb384c(lVar25,*(undefined8 *)
                                        (*(long *)(*(long *)(uVar22 + 0x20) + 0xc0) + 0x1b8));
                lVar17 = *(long *)(lVar25 + 0x10);
                *(uint *)(lVar25 + 0x20) = uVar24 + 1;
                if (lVar17 == 0) goto LAB_04fb348c;
                uVar23 = *(uint *)(lVar17 + 0x18);
                iVar4 = 0;
                if (uVar23 != 0) {
                  iVar4 = (int)uVar12 / (int)uVar23;
                }
                uVar2 = uVar12 - iVar4 * uVar23;
                if (uVar23 <= uVar2) goto LAB_04fb3488;
                lVar16 = *(long *)(lVar25 + 0x18);
                unaff_x28 = (long *)(lVar17 + (ulong)uVar2 * 4 + 0x20);
              }
              else {
                lVar16 = *(long *)(lVar25 + 0x18);
                *(uint *)(lVar25 + 0x20) = uVar24 + 1;
              }
              if (lVar16 == 0) goto LAB_04fb348c;
              if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_04fb3488;
              lVar17 = (long)(int)uVar24;
            }
            else {
              *(int *)(lVar25 + 0x28) = *(int *)(lVar25 + 0x28) + -1;
              uVar24 = *(uint *)(lVar25 + 0x24);
              param_2 = (long *)(ulong)uVar24;
              if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_04fb3488;
              lVar17 = (long)(int)uVar24;
              *(undefined4 *)(lVar25 + 0x24) = *(undefined4 *)(lVar16 + lVar17 * 0x18 + 0x24);
            }
            lVar16 = lVar16 + lVar17 * 0x18;
            *(uint *)(lVar16 + 0x20) = uVar12;
            lVar25 = *unaff_x28;
            puVar29 = (ulong *)(lVar16 + 0x28);
            *puVar29 = (ulong)plVar30;
            *(int *)(lVar16 + 0x24) = (int)lVar25 + -1;
            goto SUB_032809c4;
          }
        }
        else {
LAB_04fb3488:
          func_0x03280cb4();
          plVar31 = plVar14;
        }
      }
    }
LAB_04fb348c:
    lVar25 = func_0x03280cac();
    unaff_x26 = PTR_DAT_07781380;
    *(undefined8 *)(puVar10 + -0xc0) = 0x4fb3490;
    *(undefined **)(puVar10 + -0xb8) = unaff_x27;
    *(long *)(puVar10 + -0xb0) = lVar16;
    *(uint **)(puVar10 + -0xa8) = unaff_x25;
    *(long **)(puVar10 + -0xa0) = plVar31;
    *(ulong *)(puVar10 + -0x98) = uVar21;
    *(ulong *)(puVar10 + -0x90) = uVar22;
    *(undefined1 (*) [16])(puVar10 + -0x88) = auVar33;
    *(long **)(puVar10 + -0x78) = param_2;
    uVar27 = 0x7e1b000;
    if ((bRam0000000007e1b871 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07781610);
      func_0x03280a18(PTR_DAT_07781618);
      func_0x03280a18(PTR_DAT_07781380);
      func_0x03280a18(PTR_DAT_0774e558);
      func_0x03280a18(PTR_DAT_07781600);
      func_0x03280a18(PTR_DAT_0777e440);
      func_0x03280a18(PTR_DAT_07781608);
      func_0x03280a18(PTR_DAT_0775b648);
      bRam0000000007e1b871 = 1;
    }
    lVar16 = *(long *)unaff_x26;
    *(undefined8 *)(puVar10 + -200) = 0;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar16 = func_0x057624fc(0);
    if (lVar16 != 0) {
      func_0x04e91150(lVar16,lVar25,puVar10 + -200,*(undefined8 *)PTR_DAT_07781618);
      if (*(long *)(puVar10 + -200) == 0) {
        return (ulong *)0x0;
      }
      uVar15 = func_0x056933d8(*(long *)(puVar10 + -200),*(undefined8 *)PTR_DAT_0775b648,0);
      puVar8 = PTR_DAT_0774e558;
      if (*(long *)(puVar10 + -200) != 0) {
        uVar27 = uVar15 & 0xffffffff;
        uVar22 = func_0x056933d8(*(long *)(puVar10 + -200),*(undefined8 *)PTR_DAT_07781600,0);
        lVar16 = *(long *)puVar8;
        lVar17 = *(long *)(puVar10 + -200);
        uVar22 = uVar22 & 0xffffffff;
        plVar31 = *(long **)(*(long *)(plVar20[4] + 0xc0) + 0x170);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          func_0x03280b8c(lVar16);
        }
        uVar32 = func_0x057a51c4(plVar31,0);
        uVar21 = 0;
        unaff_x27 = puVar8;
        if (lVar17 != 0) {
          lVar16 = func_0x05690f88(lVar17,*(undefined8 *)PTR_DAT_0777e440,uVar32,0);
          lVar17 = *(long *)(*(long *)(plVar20[4] + 0xc0) + 8);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = func_0x0325681c(lVar17);
          }
          if (lVar16 == 0) {
LAB_04fb3644:
            uVar21 = 0;
          }
          else {
            uVar21 = func_0x03280b90(lVar16,lVar17);
            if (uVar21 == 0) {
              func_0x03281048(lVar16,lVar17);
              goto LAB_04fb3644;
            }
          }
          puVar29 = (ulong *)(lVar25 + 0x30);
          *puVar29 = uVar21;
          lVar25 = *(long *)(*(long *)(plVar20[4] + 0xc0) + 8);
          if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
            lVar25 = func_0x0325681c(lVar25);
          }
          if ((lVar16 != 0) && (lVar17 = func_0x03280b90(lVar16,lVar25), lVar17 == 0)) {
            func_0x03281048(lVar16,lVar25);
          }
          goto SUB_032809c4;
        }
      }
    }
    func_0x03280cac();
    func_0x057b819c(0x10,0);
    func_0x03280cac();
    auVar33 = func_0x03281048(plVar31,uVar21);
    puVar8 = PTR_DAT_07781380;
    lVar16 = auVar33._0_8_;
    *(undefined8 *)(puVar10 + -0x100) = 0x4fb384c;
    *(ulong *)(puVar10 + -0xf0) = uVar22;
    *(ulong *)(puVar10 + -0xe8) = uVar27;
    *(long **)(puVar10 + -0xe0) = plVar20;
    *(long *)(puVar10 + -0xd8) = lVar25;
    if ((bRam0000000007e1b872 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07781380);
      bRam0000000007e1b872 = 1;
    }
    uVar3 = *(undefined4 *)(lVar16 + 0x20);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar12 = func_0x05762478(uVar3,0);
    puVar8 = PTR_DAT_07754420;
    puVar18 = (uint *)(ulong)uVar12;
    lVar25 = *(long *)(*(long *)(*(long *)(auVar33._8_8_ + 0x20) + 0xc0) + 0x1c8);
    *(undefined8 *)(puVar10 + -0x120) = *(undefined8 *)(puVar10 + -0x100);
    *(undefined **)(puVar10 + -0x110) = unaff_x26;
    *(uint **)(puVar10 + -0x108) = unaff_x25;
    *(long **)(puVar10 + -0x100) = plVar31;
    *(ulong *)(puVar10 + -0xf8) = uVar21;
    *(undefined8 *)(puVar10 + -0xf0) = *(undefined8 *)(puVar10 + -0xf0);
    *(undefined8 *)(puVar10 + -0xe8) = *(undefined8 *)(puVar10 + -0xe8);
    *(undefined8 *)(puVar10 + -0xe0) = *(undefined8 *)(puVar10 + -0xe0);
    *(undefined8 *)(puVar10 + -0xd8) = *(undefined8 *)(puVar10 + -0xd8);
    unaff_x25 = (uint *)0x0;
    if ((bRam0000000007e1b873 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07754420);
      bRam0000000007e1b873 = 1;
    }
    uVar21 = func_0x03280afc(*(undefined8 *)puVar8,puVar18);
    lVar25 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x1b0);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    plVar19 = (long *)func_0x03280afc(lVar25,puVar18);
    uVar24 = *(uint *)(lVar16 + 0x20);
    unaff_x24 = (long *)(ulong)uVar24;
    lVar25 = 0;
    param_2 = plVar19;
    func_0x057b9f30(*(undefined8 *)(lVar16 + 0x18),0,plVar19,0,unaff_x24,0);
    if ((int)uVar24 < 1) {
LAB_04fb3a5c:
      puVar29 = (ulong *)(lVar16 + 0x10);
      *puVar29 = uVar21;
      goto SUB_032809c4;
    }
    if (plVar19 != (long *)0x0) {
      uVar24 = *(uint *)(plVar19 + 3);
      plVar20 = (long *)0x0;
      while (plVar20 < (long *)(ulong)uVar24) {
        iVar4 = (int)plVar19[(long)plVar20 * 3 + 4];
        if (-1 < iVar4) {
          if (uVar21 == 0) goto LAB_04fb3a94;
          iVar5 = 0;
          if (uVar12 != 0) {
            iVar5 = iVar4 / (int)uVar12;
          }
          uVar23 = iVar4 - iVar5 * uVar12;
          if (*(uint *)(uVar21 + 0x18) <= uVar23) break;
          lVar17 = uVar21 + (ulong)uVar23 * 4;
          *(int *)((long)plVar19 + (long)plVar20 * 0x18 + 0x24) = *(int *)(lVar17 + 0x20) + -1;
          *(int *)(lVar17 + 0x20) = (int)plVar20 + 1;
        }
        plVar20 = (long *)((long)plVar20 + 1);
        if (plVar20 == unaff_x24) goto LAB_04fb3a5c;
      }
      func_0x03280cb4();
    }
LAB_04fb3a94:
    auVar33 = func_0x03280cac();
    unaff_x21 = auVar33._8_8_;
    lVar17 = auVar33._0_8_;
    *(uint **)(puVar10 + -0x180) = unaff_x29;
    *(undefined8 *)(puVar10 + -0x178) = 0x4fb3a98;
    *(long **)(puVar10 + -0x170) = unaff_x28;
    *(undefined **)(puVar10 + -0x168) = unaff_x27;
    *(undefined **)(puVar10 + -0x160) = unaff_x26;
    *(undefined8 *)(puVar10 + -0x158) = 0;
    *(long **)(puVar10 + -0x150) = unaff_x24;
    *(long **)(puVar10 + -0x148) = plVar19;
    *(undefined8 **)(puVar10 + -0x140) = (undefined8 *)(lVar16 + 0x18);
    *(ulong *)(puVar10 + -0x138) = uVar21;
    *(uint **)(puVar10 + -0x130) = puVar18;
    *(long *)(puVar10 + -0x128) = lVar16;
    *(long **)(puVar10 + -0x188) = param_2;
    if (unaff_x21 == (long *)0x0) {
      func_0x057a867c(5);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      return (ulong *)0x0;
    }
    plVar20 = *(long **)(lVar17 + 0x30);
    if (plVar20 == (long *)0x0) {
      if (unaff_x21 != (long *)0x0) {
        uVar12 = (**(code **)(*unaff_x21 + 0x158))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x160));
        goto LAB_04fb3b74;
      }
LAB_04fb3da0:
      func_0x03280cac();
    }
    else {
      lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(puVar10 + -0x188) + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
      }
      lVar26 = *plVar20;
      uVar21 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar21 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == lVar16) {
            puVar13 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
            goto LAB_04fb3b64;
          }
          uVar21 = uVar21 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar21 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar20,lVar16,1);
LAB_04fb3b64:
      param_2 = (long *)puVar13[1];
      uVar12 = (*(code *)*puVar13)(plVar20,unaff_x21);
LAB_04fb3b74:
      lVar16 = *(long *)(lVar17 + 0x10);
      if (lVar16 == 0) goto LAB_04fb3da0;
      uVar24 = *(uint *)(lVar16 + 0x18);
      uVar12 = uVar12 & 0x7fffffff;
      unaff_x27 = (undefined *)(ulong)uVar12;
      iVar4 = 0;
      if (uVar24 != 0) {
        iVar4 = (int)uVar12 / (int)uVar24;
      }
      uVar23 = uVar12 - iVar4 * uVar24;
      if (uVar23 < uVar24) {
        uVar24 = *(int *)(lVar16 + (ulong)uVar23 * 4 + 0x20) - 1;
        if ((int)uVar24 < 0) {
          return (ulong *)0x0;
        }
        plVar30 = (long *)0x0;
        unaff_x29 = (uint *)0xffffffff;
        puVar18 = (uint *)0x18;
        *(ulong *)(puVar10 + -400) = (ulong)uVar23;
        while( true ) {
          unaff_x24 = (long *)(ulong)uVar24;
          unaff_x26 = *(undefined **)(lVar17 + 0x18);
          plVar19 = plVar30;
          if (unaff_x26 == (undefined *)0x0) break;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar24) goto LAB_04fb3da4;
          unaff_x25 = (uint *)(unaff_x26 + (ulong)uVar24 * 0x18 + 0x20);
          unaff_x28 = unaff_x24;
          if (*unaff_x25 == uVar12) {
            plVar20 = *(long **)(lVar17 + 0x30);
            if (plVar20 == (long *)0x0) {
              plVar31 = (long *)func_0x039574b0(*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)(puVar10 + -0x188) +
                                                                     0x20) + 0xc0) + 0x18));
              plVar20 = plVar30;
              if (plVar31 == (long *)0x0) break;
              lVar25 = *(long *)(*plVar31 + 0x1c0);
              param_2 = unaff_x21;
              uVar21 = (**(code **)(*plVar31 + 0x1b8))
                                 (plVar31,*(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28)
                                 );
            }
            else {
              if (plVar20 == (long *)0x0) break;
              lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(puVar10 + -0x188) + 0x20) + 0xc0) + 8
                                );
              plVar19 = *(long **)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28);
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = func_0x0325681c(lVar16);
              }
              lVar25 = *plVar20;
              uVar21 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar21 != 0) {
                piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar16) {
                    puVar13 = (undefined8 *)(lVar25 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_04fb3cb0;
                  }
                  uVar21 = uVar21 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar21 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar20,lVar16,0);
LAB_04fb3cb0:
              lVar25 = puVar13[1];
              param_2 = unaff_x21;
              uVar21 = (*(code *)*puVar13)(plVar20,plVar19);
              plVar30 = plVar20;
            }
            if ((uVar21 & 1) != 0) {
              plVar20 = plVar30;
              if ((int)(uint)unaff_x29 < 0) {
                lVar16 = *(long *)(lVar17 + 0x10);
                if (lVar16 == 0) break;
                if (*(uint *)(lVar16 + 0x18) <= (uint)*(long *)(puVar10 + -400)) goto LAB_04fb3da4;
                *(int *)(lVar16 + *(long *)(puVar10 + -400) * 4 + 0x20) =
                     *(int *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) + 1;
              }
              else {
                lVar16 = *(long *)(lVar17 + 0x18);
                if (lVar16 == 0) break;
                if (*(uint *)(lVar16 + 0x18) <= (uint)unaff_x29) goto LAB_04fb3da4;
                *(undefined4 *)(lVar16 + (long)unaff_x29 * 0x18 + 0x24) =
                     *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
              }
              *unaff_x25 = 0xffffffff;
              uVar3 = *(undefined4 *)(lVar17 + 0x24);
              *(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28) = 0;
              *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) = uVar3;
              *(uint *)(lVar17 + 0x24) = uVar24;
              *(ulong *)(lVar17 + 0x28) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar17 + 0x28) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar17 + 0x28) + 1);
              return (ulong *)0x1;
            }
          }
          unaff_x29 = (uint *)(ulong)uVar24;
          plVar20 = plVar30;
          uVar24 = *(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
          if ((int)*(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) < 0) {
            return (ulong *)0x0;
          }
        }
        goto LAB_04fb3da0;
      }
    }
LAB_04fb3da4:
    auVar33 = func_0x03280cb4();
    unaff_x22 = auVar33._8_8_;
    lVar16 = auVar33._0_8_;
    puVar11 = puVar10 + -0x210;
    *(uint **)(puVar10 + -0x1f0) = unaff_x29;
    *(undefined8 *)(puVar10 + -0x1e8) = 0x4fb3da8;
    *(long **)(puVar10 + -0x1e0) = unaff_x28;
    *(undefined **)(puVar10 + -0x1d8) = unaff_x27;
    *(undefined **)(puVar10 + -0x1d0) = unaff_x26;
    *(uint **)(puVar10 + -0x1c8) = unaff_x25;
    *(long **)(puVar10 + -0x1c0) = unaff_x24;
    *(long **)(puVar10 + -0x1b8) = plVar19;
    *(long **)(puVar10 + -0x1b0) = plVar20;
    *(long **)(puVar10 + -0x1a8) = unaff_x21;
    *(uint **)(puVar10 + -0x1a0) = puVar18;
    *(long *)(puVar10 + -0x198) = lVar17;
    *(long **)(puVar10 + -0x200) = param_2;
    *(long *)(puVar10 + -0x1f8) = lVar25;
    if (unaff_x22 == (long *)0x0) {
      func_0x057a867c(5);
    }
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_04fb3ff0;
    unaff_x23 = *(long **)(lVar16 + 0x30);
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x22 != (long *)0x0) {
        uVar12 = (**(code **)(*unaff_x22 + 0x158))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x160));
        goto LAB_04fb3e84;
      }
LAB_04fb40c4:
      func_0x03280cac();
    }
    else {
      lVar17 = *(long *)(*(long *)(*(long *)(*(long *)(puVar10 + -0x1f8) + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      lVar26 = *unaff_x23;
      uVar21 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar21 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == lVar17) {
            puVar13 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
            goto LAB_04fb3e74;
          }
          uVar21 = uVar21 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar21 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(unaff_x23,lVar17,1);
LAB_04fb3e74:
      param_2 = (long *)puVar13[1];
      uVar12 = (*(code *)*puVar13)(unaff_x23,unaff_x22);
LAB_04fb3e84:
      lVar17 = *(long *)(lVar16 + 0x10);
      if (lVar17 == 0) goto LAB_04fb40c4;
      uVar24 = *(uint *)(lVar17 + 0x18);
      uVar12 = uVar12 & 0x7fffffff;
      unaff_x28 = (long *)(ulong)uVar12;
      iVar4 = 0;
      if (uVar24 != 0) {
        iVar4 = (int)uVar12 / (int)uVar24;
      }
      uVar23 = uVar12 - iVar4 * uVar24;
      if (uVar23 < uVar24) {
        iVar4 = *(int *)(lVar17 + (ulong)uVar23 * 4 + 0x20);
        *(ulong *)(puVar10 + -0x208) = (ulong)uVar23;
        uVar24 = iVar4 - 1;
        if ((int)uVar24 < 0) {
LAB_04fb3ff0:
          **(undefined4 **)(puVar10 + -0x200) = 0;
          return (ulong *)0x0;
        }
        plVar19 = (long *)0x0;
        unaff_x26 = (undefined *)0xffffffff;
        unaff_x21 = (long *)0x18;
        while( true ) {
          unaff_x25 = (uint *)(ulong)uVar24;
          unaff_x27 = *(undefined **)(lVar16 + 0x18);
          unaff_x24 = plVar19;
          if (unaff_x27 == (undefined *)0x0) break;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar24) goto LAB_04fb40c8;
          unaff_x29 = (uint *)(unaff_x27 + (ulong)uVar24 * 0x18 + 0x20);
          puVar18 = unaff_x25;
          if (*unaff_x29 == uVar12) {
            unaff_x23 = *(long **)(lVar16 + 0x30);
            if (unaff_x23 == (long *)0x0) {
              plVar20 = (long *)func_0x039574b0(*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)(puVar10 + -0x1f8) +
                                                                     0x20) + 0xc0) + 0x18));
              unaff_x23 = plVar19;
              if (plVar20 == (long *)0x0) break;
              lVar25 = *(long *)(*plVar20 + 0x1c0);
              param_2 = unaff_x22;
              uVar21 = (**(code **)(*plVar20 + 0x1b8))
                                 (plVar20,*(undefined8 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28)
                                 );
            }
            else {
              if (unaff_x23 == (long *)0x0) break;
              lVar25 = *(long *)(*(long *)(*(long *)(*(long *)(puVar10 + -0x1f8) + 0x20) + 0xc0) + 8
                                );
              unaff_x24 = *(long **)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28);
              if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                lVar25 = func_0x0325681c(lVar25);
              }
              lVar17 = *unaff_x23;
              uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar21 != 0) {
                piVar28 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar25) {
                    puVar13 = (undefined8 *)(lVar17 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_04fb3fc0;
                  }
                  uVar21 = uVar21 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar21 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(unaff_x23,lVar25,0);
LAB_04fb3fc0:
              lVar25 = puVar13[1];
              param_2 = unaff_x22;
              uVar21 = (*(code *)*puVar13)(unaff_x23,unaff_x24);
              plVar19 = unaff_x23;
            }
            if ((uVar21 & 1) != 0) {
              unaff_x23 = plVar19;
              if ((int)(uint)unaff_x26 < 0) {
                lVar17 = *(long *)(lVar16 + 0x10);
                if (lVar17 == 0) break;
                if (*(uint *)(lVar17 + 0x18) <= (uint)*(long *)(puVar10 + -0x208))
                goto LAB_04fb40c8;
                *(int *)(lVar17 + *(long *)(puVar10 + -0x208) * 4 + 0x20) =
                     *(int *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) + 1;
              }
              else {
                lVar17 = *(long *)(lVar16 + 0x18);
                if (lVar17 == 0) break;
                if (*(uint *)(lVar17 + 0x18) <= (uint)unaff_x26) goto LAB_04fb40c8;
                *(undefined4 *)(lVar17 + (long)unaff_x26 * 0x18 + 0x24) =
                     *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
              }
              **(undefined4 **)(puVar10 + -0x200) =
                   *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x30);
              *unaff_x29 = 0xffffffff;
              uVar3 = *(undefined4 *)(lVar16 + 0x24);
              *(undefined8 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28) = 0;
              *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) = uVar3;
              *(uint *)(lVar16 + 0x24) = uVar24;
              *(ulong *)(lVar16 + 0x28) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar16 + 0x28) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar16 + 0x28) + 1);
              return (ulong *)0x1;
            }
          }
          unaff_x26 = (undefined *)(ulong)uVar24;
          unaff_x23 = plVar19;
          uVar24 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
          if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) < 0) goto LAB_04fb3ff0;
        }
        goto LAB_04fb40c4;
      }
    }
LAB_04fb40c8:
    auVar33._8_8_ = lVar16;
    auVar33._0_8_ = puVar18;
    uVar32 = 0x4fb40cc;
    auVar34 = func_0x03280cb4();
SUB_04fb40cc:
    lVar16 = auVar34._0_8_;
    puVar10 = puVar11 + -0x20;
    *(undefined8 *)(puVar11 + -0x20) = uVar32;
    *(undefined1 (*) [16])(puVar11 + -0x10) = auVar33;
    plVar19 = *(long **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x110);
    uVar12 = func_0x04fb2c6c(lVar16,auVar34._8_8_);
    if ((int)uVar12 < 0) {
      *(undefined4 *)param_2 = 0;
      goto LAB_04fb411c;
    }
    lVar17 = *(long *)(lVar16 + 0x18);
    if (lVar17 == 0) {
      func_0x03280cac();
    }
    else if (uVar12 < *(uint *)(lVar17 + 0x18)) {
      *(undefined4 *)param_2 = *(undefined4 *)(lVar17 + (ulong)uVar12 * 0x18 + 0x30);
LAB_04fb411c:
      return (ulong *)(ulong)(~uVar12 >> 0x1f);
    }
    uVar32 = 0x4fb4138;
    auVar33 = func_0x03280cb4();
    uVar21 = 0;
    uVar22 = *(ulong *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x118);
  } while( true );
}

