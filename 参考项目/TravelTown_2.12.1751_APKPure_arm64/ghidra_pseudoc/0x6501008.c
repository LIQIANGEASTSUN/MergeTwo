/* Ghidra 12.1.2 native pseudocode; RVA 0x6501008; MergeEngine.ECS.Systems.Player.ResourcesSystem.AddPendingResource; status ok */


/* WARNING: Possible PIC construction at 0x04fb33d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb369c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb37ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb3a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb37d4: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x04fb3a6c) */
/* WARNING: Removing unreachable block (ram,0x04fb3990) */
/* WARNING: Removing unreachable block (ram,0x04fb3994) */
/* WARNING: Removing unreachable block (ram,0x04fb39a0) */
/* WARNING: Removing unreachable block (ram,0x04fb39a8) */
/* WARNING: Removing unreachable block (ram,0x04fb39b0) */
/* WARNING: Removing unreachable block (ram,0x04fb39b8) */
/* WARNING: Removing unreachable block (ram,0x04fb39d0) */
/* WARNING: Removing unreachable block (ram,0x04fb39d8) */

ulong * MergeEngine_ECS_Systems_Player_ResourcesSystem__AddPendingResource
                  (long param_1,long *param_2,int param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  uint *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  int *piVar25;
  long *unaff_x19;
  long unaff_x20;
  ulong *puVar26;
  long *unaff_x21;
  long lVar27;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar28;
  long *unaff_x24;
  uint *unaff_x25;
  long lVar29;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar30 [16];
  
  if ((bRam0000000007e2714a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    bRam0000000007e2714a = 1;
  }
  puVar7 = PTR_DAT_0774e618;
  lVar27 = *(long *)(param_1 + 0x50);
  if (lVar27 == 0) {
    puVar26 = (ulong *)func_0x03280cac();
    return puVar26;
  }
  iVar10 = func_0x04fb256c(lVar27,param_2,*(undefined8 *)PTR_DAT_0777a238);
  plVar17 = (long *)(ulong)(uint)(iVar10 + param_3);
  uVar18 = 1;
  uVar19 = *(ulong *)(*(long *)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0) + 0x118);
  puVar8 = (undefined1 *)register0x00000008;
  do {
    *(uint **)(puVar8 + -0x60) = unaff_x29;
    *(undefined8 *)(puVar8 + -0x58) = unaff_x30;
    *(long **)(puVar8 + -0x50) = unaff_x28;
    *(undefined **)(puVar8 + -0x48) = unaff_x27;
    *(undefined **)(puVar8 + -0x40) = unaff_x26;
    *(uint **)(puVar8 + -0x38) = unaff_x25;
    *(long **)(puVar8 + -0x30) = unaff_x24;
    *(long **)(puVar8 + -0x28) = unaff_x23;
    *(long **)(puVar8 + -0x20) = unaff_x22;
    *(long **)(puVar8 + -0x18) = unaff_x21;
    *(long *)(puVar8 + -0x10) = unaff_x20;
    *(long **)(puVar8 + -8) = unaff_x19;
    unaff_x29 = (uint *)((ulong)plVar17 & 0xffffffff);
    plVar16 = plVar17;
    if (param_2 == (long *)0x0) {
      func_0x057a867c(5);
    }
    *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
    if (*(long *)(lVar27 + 0x10) == 0) {
      plVar16 = *(long **)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x10);
      func_0x04fb2f50(lVar27,0);
    }
    plVar28 = *(long **)(lVar27 + 0x30);
    lVar29 = *(long *)(lVar27 + 0x18);
    if (plVar28 == (long *)0x0) {
      if (param_2 != (long *)0x0) {
        uVar9 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
        goto LAB_04fb3138;
      }
    }
    else {
      lVar14 = *(long *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar22 = *plVar28;
      uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == lVar14) {
            puVar11 = (undefined8 *)(lVar22 + (long)(*piVar25 + 1) * 0x10 + 0x138);
            goto LAB_04fb3128;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar28,lVar14,1);
LAB_04fb3128:
      plVar16 = (long *)puVar11[1];
      uVar9 = (*(code *)*puVar11)(plVar28,param_2);
LAB_04fb3138:
      lVar14 = *(long *)(lVar27 + 0x10);
      if (lVar14 != 0) {
        uVar21 = *(uint *)(lVar14 + 0x18);
        uVar9 = uVar9 & 0x7fffffff;
        unaff_x27 = (undefined *)(ulong)uVar9;
        iVar10 = 0;
        if (uVar21 != 0) {
          iVar10 = (int)uVar9 / (int)uVar21;
        }
        uVar20 = uVar9 - iVar10 * uVar21;
        plVar13 = plVar28;
        if (uVar20 < uVar21) {
          unaff_x28 = (long *)(lVar14 + (ulong)uVar20 * 4 + 0x20);
          uVar21 = *(int *)unaff_x28 - 1;
          unaff_x19 = (long *)(ulong)uVar21;
          if (plVar28 == (long *)0x0) {
            plVar13 = (long *)func_0x039574b0(*(undefined8 *)
                                               (*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x18));
            if (lVar29 != 0) {
              uVar23 = *(undefined8 *)(lVar29 + 0x18);
              uVar20 = (uint)uVar23;
              if (uVar21 < uVar20) {
                *(int *)(puVar8 + -100) = (int)uVar18;
                uVar18 = 0;
                unaff_x25 = (uint *)0x18;
                do {
                  uVar21 = (uint)uVar23;
                  uVar20 = (uint)unaff_x19;
                  unaff_x19 = (long *)(long)(int)uVar20;
                  plVar28 = plVar13;
                  if (*(uint *)(lVar29 + (long)(int)uVar20 * 0x18 + 0x20) == uVar9) {
                    if (plVar13 == (long *)0x0) goto LAB_04fb348c;
                    plVar16 = param_2;
                    uVar24 = (**(code **)(*plVar13 + 0x1b8))
                                       (plVar13,*(undefined8 *)
                                                 (lVar29 + (long)unaff_x19 * 0x18 + 0x28),param_2,
                                        *(undefined8 *)(*plVar13 + 0x1c0));
                    if ((uVar24 & 1) != 0) {
                      if ((*(uint *)(puVar8 + -100) & 0xff) == 2) goto LAB_04fb3474;
                      if ((*(uint *)(puVar8 + -100) & 0xff) != 1) {
                        return (ulong *)0x0;
                      }
                      if (uVar20 < *(uint *)(lVar29 + 0x18)) {
                        *(int *)(lVar29 + (long)unaff_x19 * 0x18 + 0x30) = (int)plVar17;
                        return (ulong *)0x1;
                      }
                      goto LAB_04fb3488;
                    }
                    uVar21 = *(uint *)(lVar29 + 0x18);
                  }
                  if (uVar21 <= uVar20) goto LAB_04fb3488;
                  uVar2 = *(uint *)(lVar29 + (long)unaff_x19 * 0x18 + 0x24);
                  unaff_x19 = (long *)(ulong)uVar2;
                  if ((int)uVar21 <= (int)uVar18) {
                    func_0x057b8684(0);
                  }
                  uVar23 = *(undefined8 *)(lVar29 + 0x18);
                  uVar18 = (ulong)((int)uVar18 + 1);
                  uVar20 = (uint)uVar23;
                } while (uVar2 < uVar20);
              }
              goto LAB_04fb3300;
            }
          }
          else if (lVar29 != 0) {
            uVar23 = *(undefined8 *)(lVar29 + 0x18);
            uVar20 = (uint)uVar23;
            if (uVar21 < uVar20) {
              *(int *)(puVar8 + -0x68) = (int)plVar17;
              *(int *)(puVar8 + -100) = (int)uVar18;
              unaff_x29 = (uint *)0x0;
              uVar18 = 0x18;
              do {
                uVar21 = (uint)uVar23;
                uVar20 = (uint)unaff_x19;
                unaff_x19 = (long *)(long)(int)uVar20;
                if (*(uint *)(lVar29 + (long)(int)uVar20 * 0x18 + 0x20) == uVar9) {
                  lVar14 = *(long *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 8);
                  unaff_x25 = *(uint **)(lVar29 + (long)unaff_x19 * 0x18 + 0x28);
                  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                    lVar14 = func_0x0325681c(lVar14);
                  }
                  lVar22 = *plVar28;
                  uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
                  if (uVar24 != 0) {
                    piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == lVar14) {
                        puVar11 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                        goto LAB_04fb320c;
                      }
                      uVar24 = uVar24 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar24 != 0);
                  }
                  puVar11 = (undefined8 *)func_0x03256b10(plVar28,lVar14,0);
LAB_04fb320c:
                  plVar16 = param_2;
                  uVar24 = (*(code *)*puVar11)(plVar28,unaff_x25,param_2,puVar11[1]);
                  if ((uVar24 & 1) != 0) {
                    if ((*(uint *)(puVar8 + -100) & 0xff) == 2) {
LAB_04fb3474:
                      func_0x057b8580(param_2,0);
                      return (ulong *)0x0;
                    }
                    if ((*(uint *)(puVar8 + -100) & 0xff) != 1) {
                      return (ulong *)0x0;
                    }
                    if (uVar20 < *(uint *)(lVar29 + 0x18)) {
                      *(undefined4 *)(lVar29 + (long)unaff_x19 * 0x18 + 0x30) =
                           *(undefined4 *)(puVar8 + -0x68);
                      return (ulong *)0x1;
                    }
                    goto LAB_04fb3488;
                  }
                  uVar21 = *(uint *)(lVar29 + 0x18);
                }
                if (uVar21 <= uVar20) goto LAB_04fb3488;
                uVar2 = *(uint *)(lVar29 + (long)unaff_x19 * 0x18 + 0x24);
                unaff_x19 = (long *)(ulong)uVar2;
                if ((int)uVar21 <= (int)unaff_x29) {
                  func_0x057b8684(0);
                }
                uVar23 = *(undefined8 *)(lVar29 + 0x18);
                unaff_x29 = (uint *)(ulong)((int)unaff_x29 + 1);
                uVar20 = (uint)uVar23;
              } while (uVar2 < uVar20);
              unaff_x29 = (uint *)(ulong)*(uint *)(puVar8 + -0x68);
            }
LAB_04fb3300:
            plVar13 = plVar28;
            if (*(int *)(lVar27 + 0x28) < 1) {
              uVar21 = *(uint *)(lVar27 + 0x20);
              unaff_x19 = (long *)(ulong)uVar21;
              if (uVar21 == uVar20) {
                func_0x04fb384c(lVar27,*(undefined8 *)
                                        (*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x1b8));
                lVar14 = *(long *)(lVar27 + 0x10);
                *(uint *)(lVar27 + 0x20) = uVar21 + 1;
                if (lVar14 == 0) goto LAB_04fb348c;
                uVar20 = *(uint *)(lVar14 + 0x18);
                iVar10 = 0;
                if (uVar20 != 0) {
                  iVar10 = (int)uVar9 / (int)uVar20;
                }
                uVar2 = uVar9 - iVar10 * uVar20;
                if (uVar20 <= uVar2) goto LAB_04fb3488;
                lVar29 = *(long *)(lVar27 + 0x18);
                unaff_x28 = (long *)(lVar14 + (ulong)uVar2 * 4 + 0x20);
              }
              else {
                lVar29 = *(long *)(lVar27 + 0x18);
                *(uint *)(lVar27 + 0x20) = uVar21 + 1;
              }
              if (lVar29 == 0) goto LAB_04fb348c;
              if (*(uint *)(lVar29 + 0x18) <= uVar21) goto LAB_04fb3488;
              lVar14 = (long)(int)uVar21;
            }
            else {
              *(int *)(lVar27 + 0x28) = *(int *)(lVar27 + 0x28) + -1;
              uVar21 = *(uint *)(lVar27 + 0x24);
              unaff_x19 = (long *)(ulong)uVar21;
              if (*(uint *)(lVar29 + 0x18) <= uVar21) goto LAB_04fb3488;
              lVar14 = (long)(int)uVar21;
              *(undefined4 *)(lVar27 + 0x24) = *(undefined4 *)(lVar29 + lVar14 * 0x18 + 0x24);
            }
            lVar29 = lVar29 + lVar14 * 0x18;
            *(uint *)(lVar29 + 0x20) = uVar9;
            lVar27 = *unaff_x28;
            puVar26 = (ulong *)(lVar29 + 0x28);
            *puVar26 = (ulong)param_2;
            *(int *)(lVar29 + 0x24) = (int)lVar27 + -1;
            goto SUB_032809c4;
          }
        }
        else {
LAB_04fb3488:
          func_0x03280cb4();
          plVar28 = plVar13;
        }
      }
    }
LAB_04fb348c:
    lVar14 = func_0x03280cac();
    unaff_x26 = PTR_DAT_07781380;
    *(undefined8 *)(puVar8 + -0xc0) = 0x4fb3490;
    *(undefined **)(puVar8 + -0xb8) = unaff_x27;
    *(long *)(puVar8 + -0xb0) = lVar29;
    *(uint **)(puVar8 + -0xa8) = unaff_x25;
    *(long **)(puVar8 + -0xa0) = plVar28;
    *(ulong *)(puVar8 + -0x98) = uVar18;
    *(ulong *)(puVar8 + -0x90) = uVar19;
    *(long *)(puVar8 + -0x88) = lVar27;
    *(long **)(puVar8 + -0x80) = param_2;
    *(long **)(puVar8 + -0x78) = unaff_x19;
    uVar24 = 0x7e1b000;
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
    lVar27 = *(long *)unaff_x26;
    *(undefined8 *)(puVar8 + -200) = 0;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar27 = func_0x057624fc(0);
    if (lVar27 != 0) {
      func_0x04e91150(lVar27,lVar14,puVar8 + -200,*(undefined8 *)PTR_DAT_07781618);
      if (*(long *)(puVar8 + -200) == 0) {
        return (ulong *)0x0;
      }
      uVar12 = func_0x056933d8(*(long *)(puVar8 + -200),*(undefined8 *)PTR_DAT_0775b648,0);
      puVar7 = PTR_DAT_0774e558;
      if (*(long *)(puVar8 + -200) != 0) {
        uVar24 = uVar12 & 0xffffffff;
        uVar19 = func_0x056933d8(*(long *)(puVar8 + -200),*(undefined8 *)PTR_DAT_07781600,0);
        lVar27 = *(long *)puVar7;
        lVar29 = *(long *)(puVar8 + -200);
        uVar19 = uVar19 & 0xffffffff;
        plVar28 = *(long **)(*(long *)(plVar16[4] + 0xc0) + 0x170);
        if (*(int *)(lVar27 + 0xe0) == 0) {
          func_0x03280b8c(lVar27);
        }
        uVar23 = func_0x057a51c4(plVar28,0);
        uVar18 = 0;
        unaff_x27 = puVar7;
        if (lVar29 != 0) {
          lVar27 = func_0x05690f88(lVar29,*(undefined8 *)PTR_DAT_0777e440,uVar23,0);
          lVar29 = *(long *)(*(long *)(plVar16[4] + 0xc0) + 8);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            lVar29 = func_0x0325681c(lVar29);
          }
          if (lVar27 == 0) {
LAB_04fb3644:
            uVar18 = 0;
          }
          else {
            uVar18 = func_0x03280b90(lVar27,lVar29);
            if (uVar18 == 0) {
              func_0x03281048(lVar27,lVar29);
              goto LAB_04fb3644;
            }
          }
          puVar26 = (ulong *)(lVar14 + 0x30);
          *puVar26 = uVar18;
          lVar29 = *(long *)(*(long *)(plVar16[4] + 0xc0) + 8);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            lVar29 = func_0x0325681c(lVar29);
          }
          if ((lVar27 != 0) && (lVar14 = func_0x03280b90(lVar27,lVar29), lVar14 == 0)) {
            func_0x03281048(lVar27,lVar29);
          }
          goto SUB_032809c4;
        }
      }
    }
    func_0x03280cac();
    func_0x057b819c(0x10,0);
    func_0x03280cac();
    auVar30 = func_0x03281048(plVar28,uVar18);
    puVar7 = PTR_DAT_07781380;
    lVar27 = auVar30._0_8_;
    *(undefined8 *)(puVar8 + -0x100) = 0x4fb384c;
    *(ulong *)(puVar8 + -0xf0) = uVar19;
    *(ulong *)(puVar8 + -0xe8) = uVar24;
    *(long **)(puVar8 + -0xe0) = plVar16;
    *(long *)(puVar8 + -0xd8) = lVar14;
    if ((bRam0000000007e1b872 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07781380);
      bRam0000000007e1b872 = 1;
    }
    uVar3 = *(undefined4 *)(lVar27 + 0x20);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar9 = func_0x05762478(uVar3,0);
    puVar7 = PTR_DAT_07754420;
    puVar15 = (uint *)(ulong)uVar9;
    lVar29 = *(long *)(*(long *)(*(long *)(auVar30._8_8_ + 0x20) + 0xc0) + 0x1c8);
    *(undefined8 *)(puVar8 + -0x120) = *(undefined8 *)(puVar8 + -0x100);
    *(undefined **)(puVar8 + -0x110) = unaff_x26;
    *(uint **)(puVar8 + -0x108) = unaff_x25;
    *(long **)(puVar8 + -0x100) = plVar28;
    *(ulong *)(puVar8 + -0xf8) = uVar18;
    *(undefined8 *)(puVar8 + -0xf0) = *(undefined8 *)(puVar8 + -0xf0);
    *(undefined8 *)(puVar8 + -0xe8) = *(undefined8 *)(puVar8 + -0xe8);
    *(undefined8 *)(puVar8 + -0xe0) = *(undefined8 *)(puVar8 + -0xe0);
    *(undefined8 *)(puVar8 + -0xd8) = *(undefined8 *)(puVar8 + -0xd8);
    unaff_x25 = (uint *)0x0;
    if ((bRam0000000007e1b873 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07754420);
      bRam0000000007e1b873 = 1;
    }
    uVar18 = func_0x03280afc(*(undefined8 *)puVar7,puVar15);
    lVar29 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x1b0);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
    }
    plVar17 = (long *)func_0x03280afc(lVar29,puVar15);
    uVar21 = *(uint *)(lVar27 + 0x20);
    unaff_x24 = (long *)(ulong)uVar21;
    lVar29 = 0;
    unaff_x19 = plVar17;
    func_0x057b9f30(*(undefined8 *)(lVar27 + 0x18),0,plVar17,0,unaff_x24,0);
    if ((int)uVar21 < 1) {
LAB_04fb3a5c:
      puVar26 = (ulong *)(lVar27 + 0x10);
      *puVar26 = uVar18;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar1 = (ulong *)(((ulong)puVar26 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar26 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      return puVar26;
    }
    if (plVar17 != (long *)0x0) {
      uVar21 = *(uint *)(plVar17 + 3);
      plVar16 = (long *)0x0;
      while (plVar16 < (long *)(ulong)uVar21) {
        iVar10 = (int)plVar17[(long)plVar16 * 3 + 4];
        if (-1 < iVar10) {
          if (uVar18 == 0) goto LAB_04fb3a94;
          iVar4 = 0;
          if (uVar9 != 0) {
            iVar4 = iVar10 / (int)uVar9;
          }
          uVar20 = iVar10 - iVar4 * uVar9;
          if (*(uint *)(uVar18 + 0x18) <= uVar20) break;
          lVar14 = uVar18 + (ulong)uVar20 * 4;
          *(int *)((long)plVar17 + (long)plVar16 * 0x18 + 0x24) = *(int *)(lVar14 + 0x20) + -1;
          *(int *)(lVar14 + 0x20) = (int)plVar16 + 1;
        }
        plVar16 = (long *)((long)plVar16 + 1);
        if (plVar16 == unaff_x24) goto LAB_04fb3a5c;
      }
      func_0x03280cb4();
    }
LAB_04fb3a94:
    auVar30 = func_0x03280cac();
    unaff_x21 = auVar30._8_8_;
    lVar14 = auVar30._0_8_;
    *(uint **)(puVar8 + -0x180) = unaff_x29;
    *(undefined8 *)(puVar8 + -0x178) = 0x4fb3a98;
    *(long **)(puVar8 + -0x170) = unaff_x28;
    *(undefined **)(puVar8 + -0x168) = unaff_x27;
    *(undefined **)(puVar8 + -0x160) = unaff_x26;
    *(undefined8 *)(puVar8 + -0x158) = 0;
    *(long **)(puVar8 + -0x150) = unaff_x24;
    *(long **)(puVar8 + -0x148) = plVar17;
    *(undefined8 **)(puVar8 + -0x140) = (undefined8 *)(lVar27 + 0x18);
    *(ulong *)(puVar8 + -0x138) = uVar18;
    *(uint **)(puVar8 + -0x130) = puVar15;
    *(long *)(puVar8 + -0x128) = lVar27;
    *(long **)(puVar8 + -0x188) = unaff_x19;
    if (unaff_x21 == (long *)0x0) {
      func_0x057a867c(5);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      return (ulong *)0x0;
    }
    plVar16 = *(long **)(lVar14 + 0x30);
    if (plVar16 == (long *)0x0) {
      if (unaff_x21 != (long *)0x0) {
        uVar9 = (**(code **)(*unaff_x21 + 0x158))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x160));
        goto LAB_04fb3b74;
      }
LAB_04fb3da0:
      func_0x03280cac();
    }
    else {
      lVar27 = *(long *)(*(long *)(*(long *)(*(long *)(puVar8 + -0x188) + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar22 = *plVar16;
      uVar18 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar18 != 0) {
        piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == lVar27) {
            puVar11 = (undefined8 *)(lVar22 + (long)(*piVar25 + 1) * 0x10 + 0x138);
            goto LAB_04fb3b64;
          }
          uVar18 = uVar18 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar16,lVar27,1);
LAB_04fb3b64:
      unaff_x19 = (long *)puVar11[1];
      uVar9 = (*(code *)*puVar11)(plVar16,unaff_x21);
LAB_04fb3b74:
      lVar27 = *(long *)(lVar14 + 0x10);
      if (lVar27 == 0) goto LAB_04fb3da0;
      uVar21 = *(uint *)(lVar27 + 0x18);
      uVar9 = uVar9 & 0x7fffffff;
      unaff_x27 = (undefined *)(ulong)uVar9;
      iVar10 = 0;
      if (uVar21 != 0) {
        iVar10 = (int)uVar9 / (int)uVar21;
      }
      uVar20 = uVar9 - iVar10 * uVar21;
      if (uVar20 < uVar21) {
        uVar21 = *(int *)(lVar27 + (ulong)uVar20 * 4 + 0x20) - 1;
        if ((int)uVar21 < 0) {
          return (ulong *)0x0;
        }
        plVar28 = (long *)0x0;
        unaff_x29 = (uint *)0xffffffff;
        puVar15 = (uint *)0x18;
        *(ulong *)(puVar8 + -400) = (ulong)uVar20;
        while( true ) {
          unaff_x24 = (long *)(ulong)uVar21;
          unaff_x26 = *(undefined **)(lVar14 + 0x18);
          plVar17 = plVar28;
          if (unaff_x26 == (undefined *)0x0) break;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar21) goto LAB_04fb3da4;
          unaff_x25 = (uint *)(unaff_x26 + (ulong)uVar21 * 0x18 + 0x20);
          unaff_x28 = unaff_x24;
          if (*unaff_x25 == uVar9) {
            plVar16 = *(long **)(lVar14 + 0x30);
            if (plVar16 == (long *)0x0) {
              plVar13 = (long *)func_0x039574b0(*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)(puVar8 + -0x188) +
                                                                     0x20) + 0xc0) + 0x18));
              plVar16 = plVar28;
              if (plVar13 == (long *)0x0) break;
              lVar29 = *(long *)(*plVar13 + 0x1c0);
              unaff_x19 = unaff_x21;
              uVar18 = (**(code **)(*plVar13 + 0x1b8))
                                 (plVar13,*(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28)
                                 );
            }
            else {
              if (plVar16 == (long *)0x0) break;
              lVar27 = *(long *)(*(long *)(*(long *)(*(long *)(puVar8 + -0x188) + 0x20) + 0xc0) + 8)
              ;
              plVar17 = *(long **)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28);
              if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
                lVar27 = func_0x0325681c(lVar27);
              }
              lVar29 = *plVar16;
              uVar18 = (ulong)*(ushort *)(lVar29 + 0x12e);
              if (uVar18 != 0) {
                piVar25 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == lVar27) {
                    puVar11 = (undefined8 *)(lVar29 + (long)*piVar25 * 0x10 + 0x138);
                    goto LAB_04fb3cb0;
                  }
                  uVar18 = uVar18 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar18 != 0);
              }
              puVar11 = (undefined8 *)func_0x03256b10(plVar16,lVar27,0);
LAB_04fb3cb0:
              lVar29 = puVar11[1];
              unaff_x19 = unaff_x21;
              uVar18 = (*(code *)*puVar11)(plVar16,plVar17);
              plVar28 = plVar16;
            }
            if ((uVar18 & 1) != 0) {
              plVar16 = plVar28;
              if ((int)(uint)unaff_x29 < 0) {
                lVar27 = *(long *)(lVar14 + 0x10);
                if (lVar27 == 0) break;
                if (*(uint *)(lVar27 + 0x18) <= (uint)*(long *)(puVar8 + -400)) goto LAB_04fb3da4;
                *(int *)(lVar27 + *(long *)(puVar8 + -400) * 4 + 0x20) =
                     *(int *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) + 1;
              }
              else {
                lVar27 = *(long *)(lVar14 + 0x18);
                if (lVar27 == 0) break;
                if (*(uint *)(lVar27 + 0x18) <= (uint)unaff_x29) goto LAB_04fb3da4;
                *(undefined4 *)(lVar27 + (long)unaff_x29 * 0x18 + 0x24) =
                     *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
              }
              *unaff_x25 = 0xffffffff;
              uVar3 = *(undefined4 *)(lVar14 + 0x24);
              *(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28) = 0;
              *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) = uVar3;
              *(uint *)(lVar14 + 0x24) = uVar21;
              *(ulong *)(lVar14 + 0x28) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar14 + 0x28) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar14 + 0x28) + 1);
              return (ulong *)0x1;
            }
          }
          unaff_x29 = (uint *)(ulong)uVar21;
          plVar16 = plVar28;
          uVar21 = *(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
          if ((int)*(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) < 0) {
            return (ulong *)0x0;
          }
        }
        goto LAB_04fb3da0;
      }
    }
LAB_04fb3da4:
    auVar30 = func_0x03280cb4();
    unaff_x22 = auVar30._8_8_;
    lVar27 = auVar30._0_8_;
    *(uint **)(puVar8 + -0x1f0) = unaff_x29;
    *(undefined8 *)(puVar8 + -0x1e8) = 0x4fb3da8;
    *(long **)(puVar8 + -0x1e0) = unaff_x28;
    *(undefined **)(puVar8 + -0x1d8) = unaff_x27;
    *(undefined **)(puVar8 + -0x1d0) = unaff_x26;
    *(uint **)(puVar8 + -0x1c8) = unaff_x25;
    *(long **)(puVar8 + -0x1c0) = unaff_x24;
    *(long **)(puVar8 + -0x1b8) = plVar17;
    *(long **)(puVar8 + -0x1b0) = plVar16;
    *(long **)(puVar8 + -0x1a8) = unaff_x21;
    *(uint **)(puVar8 + -0x1a0) = puVar15;
    *(long *)(puVar8 + -0x198) = lVar14;
    *(long **)(puVar8 + -0x200) = unaff_x19;
    *(long *)(puVar8 + -0x1f8) = lVar29;
    if (unaff_x22 == (long *)0x0) {
      func_0x057a867c(5);
    }
    if (*(long *)(lVar27 + 0x10) == 0) goto LAB_04fb3ff0;
    unaff_x23 = *(long **)(lVar27 + 0x30);
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x22 != (long *)0x0) {
        uVar9 = (**(code **)(*unaff_x22 + 0x158))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x160));
        goto LAB_04fb3e84;
      }
LAB_04fb40c4:
      func_0x03280cac();
    }
    else {
      lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(puVar8 + -0x1f8) + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar22 = *unaff_x23;
      uVar18 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar18 != 0) {
        piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == lVar14) {
            puVar11 = (undefined8 *)(lVar22 + (long)(*piVar25 + 1) * 0x10 + 0x138);
            goto LAB_04fb3e74;
          }
          uVar18 = uVar18 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(unaff_x23,lVar14,1);
LAB_04fb3e74:
      unaff_x19 = (long *)puVar11[1];
      uVar9 = (*(code *)*puVar11)(unaff_x23,unaff_x22);
LAB_04fb3e84:
      lVar14 = *(long *)(lVar27 + 0x10);
      if (lVar14 == 0) goto LAB_04fb40c4;
      uVar21 = *(uint *)(lVar14 + 0x18);
      uVar9 = uVar9 & 0x7fffffff;
      unaff_x28 = (long *)(ulong)uVar9;
      iVar10 = 0;
      if (uVar21 != 0) {
        iVar10 = (int)uVar9 / (int)uVar21;
      }
      uVar20 = uVar9 - iVar10 * uVar21;
      if (uVar20 < uVar21) {
        iVar10 = *(int *)(lVar14 + (ulong)uVar20 * 4 + 0x20);
        *(ulong *)(puVar8 + -0x208) = (ulong)uVar20;
        uVar21 = iVar10 - 1;
        if ((int)uVar21 < 0) {
LAB_04fb3ff0:
          **(undefined4 **)(puVar8 + -0x200) = 0;
          return (ulong *)0x0;
        }
        plVar17 = (long *)0x0;
        unaff_x26 = (undefined *)0xffffffff;
        unaff_x21 = (long *)0x18;
        while( true ) {
          unaff_x25 = (uint *)(ulong)uVar21;
          unaff_x27 = *(undefined **)(lVar27 + 0x18);
          unaff_x24 = plVar17;
          if (unaff_x27 == (undefined *)0x0) break;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar21) goto LAB_04fb40c8;
          unaff_x29 = (uint *)(unaff_x27 + (ulong)uVar21 * 0x18 + 0x20);
          puVar15 = unaff_x25;
          if (*unaff_x29 == uVar9) {
            unaff_x23 = *(long **)(lVar27 + 0x30);
            if (unaff_x23 == (long *)0x0) {
              plVar16 = (long *)func_0x039574b0(*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)(puVar8 + -0x1f8) +
                                                                     0x20) + 0xc0) + 0x18));
              unaff_x23 = plVar17;
              if (plVar16 == (long *)0x0) break;
              lVar29 = *(long *)(*plVar16 + 0x1c0);
              unaff_x19 = unaff_x22;
              uVar18 = (**(code **)(*plVar16 + 0x1b8))
                                 (plVar16,*(undefined8 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28)
                                 );
            }
            else {
              if (unaff_x23 == (long *)0x0) break;
              lVar29 = *(long *)(*(long *)(*(long *)(*(long *)(puVar8 + -0x1f8) + 0x20) + 0xc0) + 8)
              ;
              unaff_x24 = *(long **)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28);
              if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
                lVar29 = func_0x0325681c(lVar29);
              }
              lVar14 = *unaff_x23;
              uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar18 != 0) {
                piVar25 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == lVar29) {
                    puVar11 = (undefined8 *)(lVar14 + (long)*piVar25 * 0x10 + 0x138);
                    goto LAB_04fb3fc0;
                  }
                  uVar18 = uVar18 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar18 != 0);
              }
              puVar11 = (undefined8 *)func_0x03256b10(unaff_x23,lVar29,0);
LAB_04fb3fc0:
              lVar29 = puVar11[1];
              unaff_x19 = unaff_x22;
              uVar18 = (*(code *)*puVar11)(unaff_x23,unaff_x24);
              plVar17 = unaff_x23;
            }
            if ((uVar18 & 1) != 0) {
              unaff_x23 = plVar17;
              if ((int)(uint)unaff_x26 < 0) {
                lVar14 = *(long *)(lVar27 + 0x10);
                if (lVar14 == 0) break;
                if (*(uint *)(lVar14 + 0x18) <= (uint)*(long *)(puVar8 + -0x208)) goto LAB_04fb40c8;
                *(int *)(lVar14 + *(long *)(puVar8 + -0x208) * 4 + 0x20) =
                     *(int *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) + 1;
              }
              else {
                lVar14 = *(long *)(lVar27 + 0x18);
                if (lVar14 == 0) break;
                if (*(uint *)(lVar14 + 0x18) <= (uint)unaff_x26) goto LAB_04fb40c8;
                *(undefined4 *)(lVar14 + (long)unaff_x26 * 0x18 + 0x24) =
                     *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
              }
              **(undefined4 **)(puVar8 + -0x200) =
                   *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x30);
              *unaff_x29 = 0xffffffff;
              uVar3 = *(undefined4 *)(lVar27 + 0x24);
              *(undefined8 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28) = 0;
              *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) = uVar3;
              *(uint *)(lVar27 + 0x24) = uVar21;
              *(ulong *)(lVar27 + 0x28) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar27 + 0x28) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar27 + 0x28) + 1);
              return (ulong *)0x1;
            }
          }
          unaff_x26 = (undefined *)(ulong)uVar21;
          unaff_x23 = plVar17;
          uVar21 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
          if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) < 0) goto LAB_04fb3ff0;
        }
        goto LAB_04fb40c4;
      }
    }
LAB_04fb40c8:
    unaff_x20 = func_0x03280cb4();
    *(undefined8 *)(puVar8 + -0x230) = 0x4fb40cc;
    *(uint **)(puVar8 + -0x220) = puVar15;
    *(long *)(puVar8 + -0x218) = lVar27;
    plVar17 = *(long **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x110);
    uVar9 = func_0x04fb2c6c();
    if ((int)uVar9 < 0) {
      *(undefined4 *)unaff_x19 = 0;
      goto LAB_04fb411c;
    }
    lVar27 = *(long *)(unaff_x20 + 0x18);
    if (lVar27 == 0) {
      func_0x03280cac();
    }
    else if (uVar9 < *(uint *)(lVar27 + 0x18)) {
      *(undefined4 *)unaff_x19 = *(undefined4 *)(lVar27 + (ulong)uVar9 * 0x18 + 0x30);
LAB_04fb411c:
      return (ulong *)(ulong)(~uVar9 >> 0x1f);
    }
    unaff_x30 = 0x4fb4138;
    auVar30 = func_0x03280cb4();
    param_2 = auVar30._8_8_;
    lVar27 = auVar30._0_8_;
    uVar18 = 0;
    uVar19 = *(ulong *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x118);
    puVar8 = puVar8 + -0x230;
  } while( true );
}

