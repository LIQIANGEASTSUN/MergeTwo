/* Ghidra 12.1.2 native pseudocode; RVA 0x650906C; MergeEngine.ECS.Systems.Player.ResourcesSystem.PurchaseResource; status ok */


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

ulong * MergeEngine_ECS_Systems_Player_ResourcesSystem__PurchaseResource
                  (undefined8 param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  code **ppcVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  long *plVar28;
  ulong *puVar29;
  undefined8 uVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *unaff_x24;
  uint *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  code *pcStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_48;
  
  uVar30 = 0x7e27000;
  plVar32 = (long *)(param_4 & 0xffffffff);
  param_3 = param_3 & 0xffffffff;
  if ((bRam0000000007e27162 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f9f0);
    func_0x03280a18(PTR_DAT_077fc6b8);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e27162 = 1;
  }
  if ((param_2 != (long *)0x0) &&
     (lVar16 = MergeEngine_ECS_Systems_Player_ResourcesSystem__GetResource
                         (param_1,*(undefined4 *)((long)param_2 + 0x1c)), lVar16 != 0)) {
    iVar3 = *(int *)(lVar16 + 0x20);
    iVar5 = (int)param_2[4];
    if (iVar5 <= iVar3) {
      uVar4 = *(undefined4 *)((long)param_2 + 0x1c);
      uStack_48 = 0;
      func_0x0437ba9c(&uStack_48,plVar32,*(undefined8 *)PTR_DAT_077fc6b8);
      MergeEngine_ECS_Systems_Player_ResourcesSystem__ConsumeResource
                (param_1,uVar4,iVar5,0,param_3,uStack_48,0,0);
      lVar16 = param_2[2];
      if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar30 = func_0x0624cb20((int)lVar16,0);
      MergeEngine_ECS_Systems_Player_ResourcesSystem__GrantResource
                (param_1,uVar30,(int)param_2[3],1,param_3,0,0,0);
    }
    return (ulong *)(ulong)(iVar5 <= iVar3);
  }
  auVar36 = func_0x03280cac();
  plVar28 = auVar36._8_8_;
  ppcVar10 = &pcStack_70;
  pcStack_70 = MergeEngine_ECS_Systems_Player_ResourcesSystem__GetResourceSpendCount;
  plStack_68 = param_2;
  uStack_60 = param_1;
  uStack_58 = param_3;
  if ((bRam0000000007e27163 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a238);
    bRam0000000007e27163 = 1;
  }
  plVar33 = plStack_68;
  lVar16 = *(long *)(auVar36._0_8_ + 0x48);
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x30), lVar16 != 0)) {
    plVar19 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_0777a238 + 0x20) + 0xc0) + 0x110);
    uVar12 = func_0x04fb2c6c();
    if ((int)uVar12 < 0) {
      func_0x057b861c(plVar28,0);
      return (ulong *)0x0;
    }
    lVar24 = *(long *)(lVar16 + 0x18);
    if (lVar24 == 0) {
      func_0x03280cac();
    }
    else if (uVar12 < *(uint *)(lVar24 + 0x18)) {
      return (ulong *)(ulong)*(uint *)(lVar24 + (ulong)uVar12 * 0x18 + 0x30);
    }
    uVar34 = 0x4fb25d8;
    auVar36 = func_0x03280cb4();
    uVar20 = 1;
    uVar21 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x118);
    goto SUB_04fb3030;
  }
  auVar37 = func_0x03280cac();
  auVar35._8_8_ = 0x7e27000;
  auVar35._0_8_ = auVar37._8_8_;
  puVar18 = auVar37._0_8_;
  puVar11 = auStack_a0;
  pcStack_90 = MergeEngine_ECS_Systems_Player_ResourcesSystem__HasPendingReward;
  uStack_88 = 0x7e27000;
  plVar33 = (long *)0x7e27000;
  auStack_80 = auVar36;
  if ((bRam0000000007e27164 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e668);
    bRam0000000007e27164 = 1;
  }
  uStack_94 = 0;
  auVar36._8_8_ = auVar37._8_8_;
  auVar36._0_8_ = *(long *)(puVar18 + 0x14);
  if (*(long *)(puVar18 + 0x14) == 0) {
    lVar16 = func_0x03280cac();
    puVar9 = PTR_DAT_0774e748;
    puVar8 = PTR_DAT_0774e740;
    if ((bRam0000000007e27166 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e748);
      func_0x03280a18(PTR_DAT_0774e740);
      bRam0000000007e27166 = 1;
    }
    uVar20 = func_0x03280ca0(*(undefined8 *)puVar8);
    func_0x04fb1810(uVar20,*(undefined8 *)puVar9);
    puVar29 = (ulong *)(lVar16 + 0x50);
    *puVar29 = uVar20;
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
  plVar28 = (long *)&uStack_94;
  lVar24 = *(long *)PTR_DAT_0774e668;
  uVar34 = 0x6609258;
  do {
    lVar16 = auVar36._0_8_;
    uVar30 = auVar35._8_8_;
    ppcVar10 = (code **)(puVar11 + -0x20);
    *(undefined8 *)(puVar11 + -0x20) = uVar34;
    *(uint **)(puVar11 + -0x10) = puVar18;
    *(long *)(puVar11 + -8) = auVar35._0_8_;
    plVar19 = *(long **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x110);
    uVar12 = func_0x04fb2c6c(lVar16,auVar36._8_8_);
    if ((int)uVar12 < 0) {
      *(undefined4 *)plVar28 = 0;
LAB_04fb411c:
      return (ulong *)(ulong)(~uVar12 >> 0x1f);
    }
    lVar17 = *(long *)(lVar16 + 0x18);
    if (lVar17 == 0) {
      func_0x03280cac();
    }
    else if (uVar12 < *(uint *)(lVar17 + 0x18)) {
      *(undefined4 *)plVar28 = *(undefined4 *)(lVar17 + (ulong)uVar12 * 0x18 + 0x30);
      goto LAB_04fb411c;
    }
    uVar34 = 0x4fb4138;
    auVar36 = func_0x03280cb4();
    uVar20 = 0;
    uVar21 = *(ulong *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x118);
SUB_04fb3030:
    plVar31 = auVar36._8_8_;
    lVar24 = auVar36._0_8_;
    *(uint **)((long)ppcVar10 + -0x60) = unaff_x29;
    *(undefined8 *)((long)ppcVar10 + -0x58) = uVar34;
    *(long **)((long)ppcVar10 + -0x50) = unaff_x28;
    *(undefined **)((long)ppcVar10 + -0x48) = unaff_x27;
    *(undefined **)((long)ppcVar10 + -0x40) = unaff_x26;
    *(uint **)((long)ppcVar10 + -0x38) = unaff_x25;
    *(long **)((long)ppcVar10 + -0x30) = unaff_x24;
    *(long **)((long)ppcVar10 + -0x28) = plVar32;
    *(undefined8 *)((long)ppcVar10 + -0x20) = uVar30;
    *(long **)((long)ppcVar10 + -0x18) = plVar33;
    *(long *)((long)ppcVar10 + -0x10) = lVar16;
    *(long **)((long)ppcVar10 + -8) = plVar28;
    unaff_x29 = (uint *)((ulong)plVar19 & 0xffffffff);
    plVar32 = plVar19;
    if (plVar31 == (long *)0x0) {
      func_0x057a867c(5);
    }
    *(int *)(lVar24 + 0x2c) = *(int *)(lVar24 + 0x2c) + 1;
    if (*(long *)(lVar24 + 0x10) == 0) {
      plVar32 = *(long **)(*(long *)(*(long *)(uVar21 + 0x20) + 0xc0) + 0x10);
      func_0x04fb2f50(lVar24,0);
    }
    plVar33 = *(long **)(lVar24 + 0x30);
    lVar16 = *(long *)(lVar24 + 0x18);
    if (plVar33 == (long *)0x0) {
      if (plVar31 != (long *)0x0) {
        uVar12 = (**(code **)(*plVar31 + 0x158))(plVar31,*(undefined8 *)(*plVar31 + 0x160));
        goto LAB_04fb3138;
      }
    }
    else {
      lVar17 = *(long *)(*(long *)(*(long *)(uVar21 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      lVar25 = *plVar33;
      uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar17) {
            puVar13 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_04fb3128;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar17,1);
LAB_04fb3128:
      plVar32 = (long *)puVar13[1];
      uVar12 = (*(code *)*puVar13)(plVar33,plVar31);
LAB_04fb3138:
      lVar17 = *(long *)(lVar24 + 0x10);
      if (lVar17 != 0) {
        uVar23 = *(uint *)(lVar17 + 0x18);
        uVar12 = uVar12 & 0x7fffffff;
        unaff_x27 = (undefined *)(ulong)uVar12;
        iVar3 = 0;
        if (uVar23 != 0) {
          iVar3 = (int)uVar12 / (int)uVar23;
        }
        uVar22 = uVar12 - iVar3 * uVar23;
        plVar15 = plVar33;
        if (uVar22 < uVar23) {
          unaff_x28 = (long *)(lVar17 + (ulong)uVar22 * 4 + 0x20);
          uVar23 = *(int *)unaff_x28 - 1;
          plVar28 = (long *)(ulong)uVar23;
          if (plVar33 == (long *)0x0) {
            plVar15 = (long *)func_0x039574b0(*(undefined8 *)
                                               (*(long *)(*(long *)(uVar21 + 0x20) + 0xc0) + 0x18));
            if (lVar16 != 0) {
              uVar30 = *(undefined8 *)(lVar16 + 0x18);
              uVar22 = (uint)uVar30;
              if (uVar23 < uVar22) {
                *(int *)((long)ppcVar10 + -100) = (int)uVar20;
                uVar20 = 0;
                unaff_x25 = (uint *)0x18;
                do {
                  uVar23 = (uint)uVar30;
                  uVar22 = (uint)plVar28;
                  plVar28 = (long *)(long)(int)uVar22;
                  plVar33 = plVar15;
                  if (*(uint *)(lVar16 + (long)(int)uVar22 * 0x18 + 0x20) == uVar12) {
                    if (plVar15 == (long *)0x0) goto LAB_04fb348c;
                    plVar32 = plVar31;
                    uVar26 = (**(code **)(*plVar15 + 0x1b8))
                                       (plVar15,*(undefined8 *)
                                                 (lVar16 + (long)plVar28 * 0x18 + 0x28),plVar31,
                                        *(undefined8 *)(*plVar15 + 0x1c0));
                    if ((uVar26 & 1) != 0) {
                      if ((*(uint *)((long)ppcVar10 + -100) & 0xff) == 2) goto LAB_04fb3474;
                      if ((*(uint *)((long)ppcVar10 + -100) & 0xff) != 1) {
                        return (ulong *)0x0;
                      }
                      if (uVar22 < *(uint *)(lVar16 + 0x18)) {
                        *(int *)(lVar16 + (long)plVar28 * 0x18 + 0x30) = (int)plVar19;
                        return (ulong *)0x1;
                      }
                      goto LAB_04fb3488;
                    }
                    uVar23 = *(uint *)(lVar16 + 0x18);
                  }
                  if (uVar23 <= uVar22) goto LAB_04fb3488;
                  uVar2 = *(uint *)(lVar16 + (long)plVar28 * 0x18 + 0x24);
                  plVar28 = (long *)(ulong)uVar2;
                  if ((int)uVar23 <= (int)uVar20) {
                    func_0x057b8684(0);
                  }
                  uVar30 = *(undefined8 *)(lVar16 + 0x18);
                  uVar20 = (ulong)((int)uVar20 + 1);
                  uVar22 = (uint)uVar30;
                } while (uVar2 < uVar22);
              }
              goto LAB_04fb3300;
            }
          }
          else if (lVar16 != 0) {
            uVar30 = *(undefined8 *)(lVar16 + 0x18);
            uVar22 = (uint)uVar30;
            if (uVar23 < uVar22) {
              *(int *)((long)ppcVar10 + -0x68) = (int)plVar19;
              *(int *)((long)ppcVar10 + -100) = (int)uVar20;
              unaff_x29 = (uint *)0x0;
              uVar20 = 0x18;
              do {
                uVar23 = (uint)uVar30;
                uVar22 = (uint)plVar28;
                plVar28 = (long *)(long)(int)uVar22;
                if (*(uint *)(lVar16 + (long)(int)uVar22 * 0x18 + 0x20) == uVar12) {
                  lVar17 = *(long *)(*(long *)(*(long *)(uVar21 + 0x20) + 0xc0) + 8);
                  unaff_x25 = *(uint **)(lVar16 + (long)plVar28 * 0x18 + 0x28);
                  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                    lVar17 = func_0x0325681c(lVar17);
                  }
                  lVar25 = *plVar33;
                  uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar26 != 0) {
                    piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar17) {
                        puVar13 = (undefined8 *)(lVar25 + (long)*piVar27 * 0x10 + 0x138);
                        goto LAB_04fb320c;
                      }
                      uVar26 = uVar26 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar26 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar17,0);
LAB_04fb320c:
                  plVar32 = plVar31;
                  uVar26 = (*(code *)*puVar13)(plVar33,unaff_x25,plVar31,puVar13[1]);
                  if ((uVar26 & 1) != 0) {
                    if ((*(uint *)((long)ppcVar10 + -100) & 0xff) == 2) {
LAB_04fb3474:
                      func_0x057b8580(plVar31,0);
                      return (ulong *)0x0;
                    }
                    if ((*(uint *)((long)ppcVar10 + -100) & 0xff) != 1) {
                      return (ulong *)0x0;
                    }
                    if (uVar22 < *(uint *)(lVar16 + 0x18)) {
                      *(undefined4 *)(lVar16 + (long)plVar28 * 0x18 + 0x30) =
                           *(undefined4 *)((long)ppcVar10 + -0x68);
                      return (ulong *)0x1;
                    }
                    goto LAB_04fb3488;
                  }
                  uVar23 = *(uint *)(lVar16 + 0x18);
                }
                if (uVar23 <= uVar22) goto LAB_04fb3488;
                uVar2 = *(uint *)(lVar16 + (long)plVar28 * 0x18 + 0x24);
                plVar28 = (long *)(ulong)uVar2;
                if ((int)uVar23 <= (int)unaff_x29) {
                  func_0x057b8684(0);
                }
                uVar30 = *(undefined8 *)(lVar16 + 0x18);
                unaff_x29 = (uint *)(ulong)((int)unaff_x29 + 1);
                uVar22 = (uint)uVar30;
              } while (uVar2 < uVar22);
              unaff_x29 = (uint *)(ulong)*(uint *)((long)ppcVar10 + -0x68);
            }
LAB_04fb3300:
            plVar15 = plVar33;
            if (*(int *)(lVar24 + 0x28) < 1) {
              uVar23 = *(uint *)(lVar24 + 0x20);
              plVar28 = (long *)(ulong)uVar23;
              if (uVar23 == uVar22) {
                func_0x04fb384c(lVar24,*(undefined8 *)
                                        (*(long *)(*(long *)(uVar21 + 0x20) + 0xc0) + 0x1b8));
                lVar17 = *(long *)(lVar24 + 0x10);
                *(uint *)(lVar24 + 0x20) = uVar23 + 1;
                if (lVar17 == 0) goto LAB_04fb348c;
                uVar22 = *(uint *)(lVar17 + 0x18);
                iVar3 = 0;
                if (uVar22 != 0) {
                  iVar3 = (int)uVar12 / (int)uVar22;
                }
                uVar2 = uVar12 - iVar3 * uVar22;
                if (uVar22 <= uVar2) goto LAB_04fb3488;
                lVar16 = *(long *)(lVar24 + 0x18);
                unaff_x28 = (long *)(lVar17 + (ulong)uVar2 * 4 + 0x20);
              }
              else {
                lVar16 = *(long *)(lVar24 + 0x18);
                *(uint *)(lVar24 + 0x20) = uVar23 + 1;
              }
              if (lVar16 == 0) goto LAB_04fb348c;
              if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_04fb3488;
              lVar17 = (long)(int)uVar23;
            }
            else {
              *(int *)(lVar24 + 0x28) = *(int *)(lVar24 + 0x28) + -1;
              uVar23 = *(uint *)(lVar24 + 0x24);
              plVar28 = (long *)(ulong)uVar23;
              if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_04fb3488;
              lVar17 = (long)(int)uVar23;
              *(undefined4 *)(lVar24 + 0x24) = *(undefined4 *)(lVar16 + lVar17 * 0x18 + 0x24);
            }
            lVar16 = lVar16 + lVar17 * 0x18;
            *(uint *)(lVar16 + 0x20) = uVar12;
            lVar24 = *unaff_x28;
            puVar29 = (ulong *)(lVar16 + 0x28);
            *puVar29 = (ulong)plVar31;
            *(int *)(lVar16 + 0x24) = (int)lVar24 + -1;
            goto SUB_032809c4;
          }
        }
        else {
LAB_04fb3488:
          func_0x03280cb4();
          plVar33 = plVar15;
        }
      }
    }
LAB_04fb348c:
    lVar24 = func_0x03280cac();
    unaff_x26 = PTR_DAT_07781380;
    *(undefined8 *)((long)ppcVar10 + -0xc0) = 0x4fb3490;
    *(undefined **)((long)ppcVar10 + -0xb8) = unaff_x27;
    *(long *)((long)ppcVar10 + -0xb0) = lVar16;
    *(uint **)((long)ppcVar10 + -0xa8) = unaff_x25;
    *(long **)((long)ppcVar10 + -0xa0) = plVar33;
    *(ulong *)((long)ppcVar10 + -0x98) = uVar20;
    *(ulong *)((long)ppcVar10 + -0x90) = uVar21;
    *(undefined1 (*) [16])((long)ppcVar10 + -0x88) = auVar36;
    *(long **)((long)ppcVar10 + -0x78) = plVar28;
    uVar26 = 0x7e1b000;
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
    *(undefined8 *)((long)ppcVar10 + -200) = 0;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar16 = func_0x057624fc(0);
    if (lVar16 != 0) {
      func_0x04e91150(lVar16,lVar24,(undefined1 *)((long)ppcVar10 + -200),
                      *(undefined8 *)PTR_DAT_07781618);
      if (*(long *)((long)ppcVar10 + -200) == 0) {
        return (ulong *)0x0;
      }
      uVar14 = func_0x056933d8(*(long *)((long)ppcVar10 + -200),*(undefined8 *)PTR_DAT_0775b648,0);
      puVar8 = PTR_DAT_0774e558;
      if (*(long *)((long)ppcVar10 + -200) != 0) {
        uVar26 = uVar14 & 0xffffffff;
        uVar21 = func_0x056933d8(*(long *)((long)ppcVar10 + -200),*(undefined8 *)PTR_DAT_07781600,0)
        ;
        lVar16 = *(long *)puVar8;
        lVar17 = *(long *)((long)ppcVar10 + -200);
        uVar21 = uVar21 & 0xffffffff;
        plVar33 = *(long **)(*(long *)(plVar32[4] + 0xc0) + 0x170);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          func_0x03280b8c(lVar16);
        }
        uVar30 = func_0x057a51c4(plVar33,0);
        uVar20 = 0;
        unaff_x27 = puVar8;
        if (lVar17 != 0) {
          lVar16 = func_0x05690f88(lVar17,*(undefined8 *)PTR_DAT_0777e440,uVar30,0);
          lVar17 = *(long *)(*(long *)(plVar32[4] + 0xc0) + 8);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = func_0x0325681c(lVar17);
          }
          if (lVar16 == 0) {
LAB_04fb3644:
            uVar20 = 0;
          }
          else {
            uVar20 = func_0x03280b90(lVar16,lVar17);
            if (uVar20 == 0) {
              func_0x03281048(lVar16,lVar17);
              goto LAB_04fb3644;
            }
          }
          puVar29 = (ulong *)(lVar24 + 0x30);
          *puVar29 = uVar20;
          lVar24 = *(long *)(*(long *)(plVar32[4] + 0xc0) + 8);
          if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
            lVar24 = func_0x0325681c(lVar24);
          }
          if ((lVar16 != 0) && (lVar17 = func_0x03280b90(lVar16,lVar24), lVar17 == 0)) {
            func_0x03281048(lVar16,lVar24);
          }
          goto SUB_032809c4;
        }
      }
    }
    func_0x03280cac();
    func_0x057b819c(0x10,0);
    func_0x03280cac();
    auVar36 = func_0x03281048(plVar33,uVar20);
    puVar8 = PTR_DAT_07781380;
    lVar16 = auVar36._0_8_;
    *(undefined8 *)((long)ppcVar10 + -0x100) = 0x4fb384c;
    *(ulong *)((long)ppcVar10 + -0xf0) = uVar21;
    *(ulong *)((long)ppcVar10 + -0xe8) = uVar26;
    *(long **)((long)ppcVar10 + -0xe0) = plVar32;
    *(long *)((long)ppcVar10 + -0xd8) = lVar24;
    if ((bRam0000000007e1b872 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07781380);
      bRam0000000007e1b872 = 1;
    }
    uVar4 = *(undefined4 *)(lVar16 + 0x20);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar12 = func_0x05762478(uVar4,0);
    puVar8 = PTR_DAT_07754420;
    puVar18 = (uint *)(ulong)uVar12;
    lVar24 = *(long *)(*(long *)(*(long *)(auVar36._8_8_ + 0x20) + 0xc0) + 0x1c8);
    *(undefined8 *)((long)ppcVar10 + -0x120) = *(undefined8 *)((long)ppcVar10 + -0x100);
    *(undefined **)((long)ppcVar10 + -0x110) = unaff_x26;
    *(uint **)((long)ppcVar10 + -0x108) = unaff_x25;
    *(long **)((long)ppcVar10 + -0x100) = plVar33;
    *(ulong *)((long)ppcVar10 + -0xf8) = uVar20;
    *(undefined8 *)((long)ppcVar10 + -0xf0) = *(undefined8 *)((long)ppcVar10 + -0xf0);
    *(undefined8 *)((long)ppcVar10 + -0xe8) = *(undefined8 *)((long)ppcVar10 + -0xe8);
    *(undefined8 *)((long)ppcVar10 + -0xe0) = *(undefined8 *)((long)ppcVar10 + -0xe0);
    *(undefined8 *)((long)ppcVar10 + -0xd8) = *(undefined8 *)((long)ppcVar10 + -0xd8);
    unaff_x25 = (uint *)0x0;
    if ((bRam0000000007e1b873 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07754420);
      bRam0000000007e1b873 = 1;
    }
    uVar20 = func_0x03280afc(*(undefined8 *)puVar8,puVar18);
    lVar24 = *(long *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x1b0);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    plVar32 = (long *)func_0x03280afc(lVar24,puVar18);
    uVar23 = *(uint *)(lVar16 + 0x20);
    unaff_x24 = (long *)(ulong)uVar23;
    lVar24 = 0;
    plVar28 = plVar32;
    func_0x057b9f30(*(undefined8 *)(lVar16 + 0x18),0,plVar32,0,unaff_x24,0);
    if ((int)uVar23 < 1) {
LAB_04fb3a5c:
      puVar29 = (ulong *)(lVar16 + 0x10);
      *puVar29 = uVar20;
      goto SUB_032809c4;
    }
    if (plVar32 != (long *)0x0) {
      uVar23 = *(uint *)(plVar32 + 3);
      plVar33 = (long *)0x0;
      while (plVar33 < (long *)(ulong)uVar23) {
        iVar3 = (int)plVar32[(long)plVar33 * 3 + 4];
        if (-1 < iVar3) {
          if (uVar20 == 0) goto LAB_04fb3a94;
          iVar5 = 0;
          if (uVar12 != 0) {
            iVar5 = iVar3 / (int)uVar12;
          }
          uVar22 = iVar3 - iVar5 * uVar12;
          if (*(uint *)(uVar20 + 0x18) <= uVar22) break;
          lVar17 = uVar20 + (ulong)uVar22 * 4;
          *(int *)((long)plVar32 + (long)plVar33 * 0x18 + 0x24) = *(int *)(lVar17 + 0x20) + -1;
          *(int *)(lVar17 + 0x20) = (int)plVar33 + 1;
        }
        plVar33 = (long *)((long)plVar33 + 1);
        if (plVar33 == unaff_x24) goto LAB_04fb3a5c;
      }
      func_0x03280cb4();
    }
LAB_04fb3a94:
    auVar36 = func_0x03280cac();
    plVar33 = auVar36._8_8_;
    lVar17 = auVar36._0_8_;
    *(uint **)((long)ppcVar10 + -0x180) = unaff_x29;
    *(undefined8 *)((long)ppcVar10 + -0x178) = 0x4fb3a98;
    *(long **)((long)ppcVar10 + -0x170) = unaff_x28;
    *(undefined **)((long)ppcVar10 + -0x168) = unaff_x27;
    *(undefined **)((long)ppcVar10 + -0x160) = unaff_x26;
    *(undefined8 *)((long)ppcVar10 + -0x158) = 0;
    *(long **)((long)ppcVar10 + -0x150) = unaff_x24;
    *(long **)((long)ppcVar10 + -0x148) = plVar32;
    *(undefined8 **)((long)ppcVar10 + -0x140) = (undefined8 *)(lVar16 + 0x18);
    *(ulong *)((long)ppcVar10 + -0x138) = uVar20;
    *(uint **)((long)ppcVar10 + -0x130) = puVar18;
    *(long *)((long)ppcVar10 + -0x128) = lVar16;
    *(long **)((long)ppcVar10 + -0x188) = plVar28;
    if (plVar33 == (long *)0x0) {
      func_0x057a867c(5);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      return (ulong *)0x0;
    }
    plVar19 = *(long **)(lVar17 + 0x30);
    if (plVar19 == (long *)0x0) {
      if (plVar33 != (long *)0x0) {
        uVar12 = (**(code **)(*plVar33 + 0x158))(plVar33,*(undefined8 *)(*plVar33 + 0x160));
        goto LAB_04fb3b74;
      }
LAB_04fb3da0:
      func_0x03280cac();
    }
    else {
      lVar16 = *(long *)(*(long *)(*(long *)(*(long *)((long)ppcVar10 + -0x188) + 0x20) + 0xc0) + 8)
      ;
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
      }
      lVar25 = *plVar19;
      uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar20 != 0) {
        piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar16) {
            puVar13 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_04fb3b64;
          }
          uVar20 = uVar20 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar19,lVar16,1);
LAB_04fb3b64:
      plVar28 = (long *)puVar13[1];
      uVar12 = (*(code *)*puVar13)(plVar19,plVar33);
LAB_04fb3b74:
      lVar16 = *(long *)(lVar17 + 0x10);
      if (lVar16 == 0) goto LAB_04fb3da0;
      uVar23 = *(uint *)(lVar16 + 0x18);
      uVar12 = uVar12 & 0x7fffffff;
      unaff_x27 = (undefined *)(ulong)uVar12;
      iVar3 = 0;
      if (uVar23 != 0) {
        iVar3 = (int)uVar12 / (int)uVar23;
      }
      uVar22 = uVar12 - iVar3 * uVar23;
      if (uVar22 < uVar23) {
        uVar23 = *(int *)(lVar16 + (ulong)uVar22 * 4 + 0x20) - 1;
        if ((int)uVar23 < 0) {
          return (ulong *)0x0;
        }
        plVar31 = (long *)0x0;
        unaff_x29 = (uint *)0xffffffff;
        puVar18 = (uint *)0x18;
        *(ulong *)((long)ppcVar10 + -400) = (ulong)uVar22;
        while( true ) {
          unaff_x24 = (long *)(ulong)uVar23;
          unaff_x26 = *(undefined **)(lVar17 + 0x18);
          plVar32 = plVar31;
          if (unaff_x26 == (undefined *)0x0) break;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar23) goto LAB_04fb3da4;
          unaff_x25 = (uint *)(unaff_x26 + (ulong)uVar23 * 0x18 + 0x20);
          unaff_x28 = unaff_x24;
          if (*unaff_x25 == uVar12) {
            plVar19 = *(long **)(lVar17 + 0x30);
            if (plVar19 == (long *)0x0) {
              plVar15 = (long *)func_0x039574b0(*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)((long)ppcVar10 +
                                                                               -0x188) + 0x20) +
                                                           0xc0) + 0x18));
              plVar19 = plVar31;
              if (plVar15 == (long *)0x0) break;
              lVar24 = *(long *)(*plVar15 + 0x1c0);
              plVar28 = plVar33;
              uVar20 = (**(code **)(*plVar15 + 0x1b8))
                                 (plVar15,*(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28)
                                 );
            }
            else {
              if (plVar19 == (long *)0x0) break;
              lVar16 = *(long *)(*(long *)(*(long *)(*(long *)((long)ppcVar10 + -0x188) + 0x20) +
                                          0xc0) + 8);
              plVar32 = *(long **)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28);
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = func_0x0325681c(lVar16);
              }
              lVar24 = *plVar19;
              uVar20 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar20 != 0) {
                piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar16) {
                    puVar13 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
                    goto LAB_04fb3cb0;
                  }
                  uVar20 = uVar20 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar20 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar19,lVar16,0);
LAB_04fb3cb0:
              lVar24 = puVar13[1];
              plVar28 = plVar33;
              uVar20 = (*(code *)*puVar13)(plVar19,plVar32);
              plVar31 = plVar19;
            }
            if ((uVar20 & 1) != 0) {
              plVar19 = plVar31;
              if ((int)(uint)unaff_x29 < 0) {
                lVar16 = *(long *)(lVar17 + 0x10);
                if (lVar16 == 0) break;
                if (*(uint *)(lVar16 + 0x18) <= (uint)*(long *)((long)ppcVar10 + -400))
                goto LAB_04fb3da4;
                *(int *)(lVar16 + *(long *)((long)ppcVar10 + -400) * 4 + 0x20) =
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
              uVar4 = *(undefined4 *)(lVar17 + 0x24);
              *(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28) = 0;
              *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) = uVar4;
              *(uint *)(lVar17 + 0x24) = uVar23;
              *(ulong *)(lVar17 + 0x28) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar17 + 0x28) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar17 + 0x28) + 1);
              return (ulong *)0x1;
            }
          }
          unaff_x29 = (uint *)(ulong)uVar23;
          plVar19 = plVar31;
          uVar23 = *(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
          if ((int)*(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) < 0) {
            return (ulong *)0x0;
          }
        }
        goto LAB_04fb3da0;
      }
    }
LAB_04fb3da4:
    auVar35 = func_0x03280cb4();
    plVar31 = auVar35._8_8_;
    lVar16 = auVar35._0_8_;
    puVar11 = (undefined1 *)((long)ppcVar10 + -0x210);
    *(uint **)((long)ppcVar10 + -0x1f0) = unaff_x29;
    *(undefined8 *)((long)ppcVar10 + -0x1e8) = 0x4fb3da8;
    *(long **)((long)ppcVar10 + -0x1e0) = unaff_x28;
    *(undefined **)((long)ppcVar10 + -0x1d8) = unaff_x27;
    *(undefined **)((long)ppcVar10 + -0x1d0) = unaff_x26;
    *(uint **)((long)ppcVar10 + -0x1c8) = unaff_x25;
    *(long **)((long)ppcVar10 + -0x1c0) = unaff_x24;
    *(long **)((long)ppcVar10 + -0x1b8) = plVar32;
    *(long **)((long)ppcVar10 + -0x1b0) = plVar19;
    *(long **)((long)ppcVar10 + -0x1a8) = plVar33;
    *(uint **)((long)ppcVar10 + -0x1a0) = puVar18;
    *(long *)((long)ppcVar10 + -0x198) = lVar17;
    *(long **)((long)ppcVar10 + -0x200) = plVar28;
    *(long *)((long)ppcVar10 + -0x1f8) = lVar24;
    if (plVar31 == (long *)0x0) {
      func_0x057a867c(5);
    }
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_04fb3ff0;
    plVar32 = *(long **)(lVar16 + 0x30);
    if (plVar32 == (long *)0x0) {
      if (plVar31 != (long *)0x0) {
        uVar12 = (**(code **)(*plVar31 + 0x158))(plVar31,*(undefined8 *)(*plVar31 + 0x160));
        goto LAB_04fb3e84;
      }
LAB_04fb40c4:
      func_0x03280cac();
    }
    else {
      lVar17 = *(long *)(*(long *)(*(long *)(*(long *)((long)ppcVar10 + -0x1f8) + 0x20) + 0xc0) + 8)
      ;
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      lVar25 = *plVar32;
      uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar20 != 0) {
        piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar17) {
            puVar13 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_04fb3e74;
          }
          uVar20 = uVar20 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar32,lVar17,1);
LAB_04fb3e74:
      plVar28 = (long *)puVar13[1];
      uVar12 = (*(code *)*puVar13)(plVar32,plVar31);
LAB_04fb3e84:
      lVar17 = *(long *)(lVar16 + 0x10);
      if (lVar17 == 0) goto LAB_04fb40c4;
      uVar23 = *(uint *)(lVar17 + 0x18);
      uVar12 = uVar12 & 0x7fffffff;
      unaff_x28 = (long *)(ulong)uVar12;
      iVar3 = 0;
      if (uVar23 != 0) {
        iVar3 = (int)uVar12 / (int)uVar23;
      }
      uVar22 = uVar12 - iVar3 * uVar23;
      if (uVar22 < uVar23) {
        iVar3 = *(int *)(lVar17 + (ulong)uVar22 * 4 + 0x20);
        *(ulong *)((long)ppcVar10 + -0x208) = (ulong)uVar22;
        uVar23 = iVar3 - 1;
        if ((int)uVar23 < 0) {
LAB_04fb3ff0:
          **(undefined4 **)((long)ppcVar10 + -0x200) = 0;
          return (ulong *)0x0;
        }
        plVar19 = (long *)0x0;
        unaff_x26 = (undefined *)0xffffffff;
        plVar33 = (long *)0x18;
        while( true ) {
          unaff_x25 = (uint *)(ulong)uVar23;
          unaff_x27 = *(undefined **)(lVar16 + 0x18);
          unaff_x24 = plVar19;
          if (unaff_x27 == (undefined *)0x0) break;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar23) goto LAB_04fb40c8;
          unaff_x29 = (uint *)(unaff_x27 + (ulong)uVar23 * 0x18 + 0x20);
          puVar18 = unaff_x25;
          if (*unaff_x29 == uVar12) {
            plVar32 = *(long **)(lVar16 + 0x30);
            if (plVar32 == (long *)0x0) {
              plVar15 = (long *)func_0x039574b0(*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)((long)ppcVar10 +
                                                                               -0x1f8) + 0x20) +
                                                           0xc0) + 0x18));
              plVar32 = plVar19;
              if (plVar15 == (long *)0x0) break;
              lVar24 = *(long *)(*plVar15 + 0x1c0);
              plVar28 = plVar31;
              uVar20 = (**(code **)(*plVar15 + 0x1b8))
                                 (plVar15,*(undefined8 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28)
                                 );
            }
            else {
              if (plVar32 == (long *)0x0) break;
              lVar24 = *(long *)(*(long *)(*(long *)(*(long *)((long)ppcVar10 + -0x1f8) + 0x20) +
                                          0xc0) + 8);
              unaff_x24 = *(long **)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28);
              if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                lVar24 = func_0x0325681c(lVar24);
              }
              lVar17 = *plVar32;
              uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar20 != 0) {
                piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar24) {
                    puVar13 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                    goto LAB_04fb3fc0;
                  }
                  uVar20 = uVar20 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar20 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar32,lVar24,0);
LAB_04fb3fc0:
              lVar24 = puVar13[1];
              plVar28 = plVar31;
              uVar20 = (*(code *)*puVar13)(plVar32,unaff_x24);
              plVar19 = plVar32;
            }
            if ((uVar20 & 1) != 0) {
              plVar32 = plVar19;
              if ((int)(uint)unaff_x26 < 0) {
                lVar17 = *(long *)(lVar16 + 0x10);
                if (lVar17 == 0) break;
                if (*(uint *)(lVar17 + 0x18) <= (uint)*(long *)((long)ppcVar10 + -0x208))
                goto LAB_04fb40c8;
                *(int *)(lVar17 + *(long *)((long)ppcVar10 + -0x208) * 4 + 0x20) =
                     *(int *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) + 1;
              }
              else {
                lVar17 = *(long *)(lVar16 + 0x18);
                if (lVar17 == 0) break;
                if (*(uint *)(lVar17 + 0x18) <= (uint)unaff_x26) goto LAB_04fb40c8;
                *(undefined4 *)(lVar17 + (long)unaff_x26 * 0x18 + 0x24) =
                     *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
              }
              **(undefined4 **)((long)ppcVar10 + -0x200) =
                   *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x30);
              *unaff_x29 = 0xffffffff;
              uVar4 = *(undefined4 *)(lVar16 + 0x24);
              *(undefined8 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28) = 0;
              *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) = uVar4;
              *(uint *)(lVar16 + 0x24) = uVar23;
              *(ulong *)(lVar16 + 0x28) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar16 + 0x28) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar16 + 0x28) + 1);
              return (ulong *)0x1;
            }
          }
          unaff_x26 = (undefined *)(ulong)uVar23;
          plVar32 = plVar19;
          uVar23 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
          if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) < 0) goto LAB_04fb3ff0;
        }
        goto LAB_04fb40c4;
      }
    }
LAB_04fb40c8:
    uVar34 = 0x4fb40cc;
    auVar36 = func_0x03280cb4();
  } while( true );
}

