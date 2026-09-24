/* Ghidra 12.1.2 native pseudocode; RVA 0x666B7B4; MergeEngine.ECS.Systems.Board.BoardSystem.49_3; status ok */

/* WARNING: Possible PIC construction at 0x04ed8fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04ed90a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04ed92f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04ed90c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04ed90a8) */
/* WARNING: Removing unreachable block (ram,0x04ed90b8) */
/* WARNING: Removing unreachable block (ram,0x04ed8fb8) */
/* WARNING: Removing unreachable block (ram,0x04ed90bc) */
/* WARNING: Removing unreachable block (ram,0x04ed8fbc) */
/* WARNING: Removing unreachable block (ram,0x04ed8ff0) */
/* WARNING: Removing unreachable block (ram,0x04ed8ff4) */
/* WARNING: Removing unreachable block (ram,0x04ed9004) */
/* WARNING: Removing unreachable block (ram,0x04ed9038) */
/* WARNING: Removing unreachable block (ram,0x04ed9044) */
/* WARNING: Removing unreachable block (ram,0x04ed9048) */
/* WARNING: Removing unreachable block (ram,0x04ed9058) */
/* WARNING: Removing unreachable block (ram,0x04ed90cc) */
/* WARNING: Removing unreachable block (ram,0x04ed90dc) */
/* WARNING: Removing unreachable block (ram,0x04ed90e0) */
/* WARNING: Removing unreachable block (ram,0x04ed90ec) */
/* WARNING: Removing unreachable block (ram,0x04ed9068) */
/* WARNING: Removing unreachable block (ram,0x04ed9070) */
/* WARNING: Removing unreachable block (ram,0x04ed911c) */
/* WARNING: Removing unreachable block (ram,0x04ed907c) */
/* WARNING: Removing unreachable block (ram,0x04ed92f4) */

long * MergeEngine_ECS_Systems_Board_BoardSystem__49_3
                 (long param_1,undefined8 param_2,ulong param_3,uint *param_4)

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
  undefined4 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  int *piVar25;
  uint uVar26;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar27;
  undefined4 *puVar28;
  long *unaff_x23;
  int *piVar29;
  long unaff_x24;
  uint *unaff_x25;
  long lVar30;
  undefined *unaff_x26;
  undefined *unaff_x27;
  int *unaff_x28;
  uint *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar31 [16];
  
  if ((bRam0000000007e280e4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807f40);
    func_0x03280a18(PTR_DAT_07807f48);
    func_0x03280a18(PTR_DAT_07807f50);
    func_0x03280a18(PTR_DAT_07807f58);
    func_0x03280a18(PTR_DAT_07807f60);
    func_0x03280a18(PTR_DAT_07807f68);
    bRam0000000007e280e4 = 1;
  }
  if ((*(long *)(param_1 + 0x88) == 0) ||
     (lVar15 = *(long *)(*(long *)(param_1 + 0x88) + 0x48), lVar15 == 0)) goto LAB_0676b8f8;
  uVar16 = func_0x04edb6e0(lVar15,param_2,*(undefined8 *)PTR_DAT_07807f40);
  if ((uVar16 & 1) == 0) {
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_0676b8f8;
    lVar15 = *(long *)(*(long *)(param_1 + 0x88) + 0x48);
    uVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07807f68);
    func_0x04ed7108(uVar17,*(undefined8 *)PTR_DAT_07807f48);
    if (lVar15 == 0) goto LAB_0676b8f8;
    func_0x04edb4d8(lVar15,param_2,uVar17,*(undefined8 *)PTR_DAT_07807f60);
  }
  if (((*(long *)(param_1 + 0x88) != 0) &&
      (lVar15 = *(long *)(*(long *)(param_1 + 0x88) + 0x48), lVar15 != 0)) &&
     (lVar15 = func_0x04edb44c(lVar15,param_2,*(undefined8 *)PTR_DAT_07807f50), lVar15 != 0)) {
    puVar20 = (uint *)(ulong)*param_4;
    puVar21 = (uint *)0x1;
    lVar22 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_07807f58 + 0x20) + 0xc0) + 0x118);
    puVar8 = (undefined1 *)register0x00000008;
    do {
      *(uint **)(puVar8 + -0x60) = unaff_x29;
      *(undefined8 *)(puVar8 + -0x58) = unaff_x30;
      *(int **)(puVar8 + -0x50) = unaff_x28;
      *(undefined **)(puVar8 + -0x48) = unaff_x27;
      *(undefined **)(puVar8 + -0x40) = unaff_x26;
      *(uint **)(puVar8 + -0x38) = unaff_x25;
      *(long *)(puVar8 + -0x30) = unaff_x24;
      *(long **)(puVar8 + -0x28) = unaff_x23;
      *(long **)(puVar8 + -0x20) = unaff_x22;
      *(long **)(puVar8 + -0x18) = unaff_x21;
      *(long *)(puVar8 + -0x10) = unaff_x20;
      *(undefined4 **)(puVar8 + -8) = unaff_x19;
      *(ulong *)(puVar8 + -0x68) = param_3;
      unaff_x25 = (uint *)((ulong)puVar20 & 0xffffffff);
      *(int *)(lVar15 + 0x2c) = *(int *)(lVar15 + 0x2c) + 1;
      puVar19 = puVar20;
      if (*(long *)(lVar15 + 0x10) == 0) {
        puVar19 = *(uint **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x10);
        func_0x04ed8860(lVar15,0);
      }
      plVar27 = *(long **)(lVar15 + 0x30);
      lVar30 = *(long *)(lVar15 + 0x18);
      if (plVar27 == (long *)0x0) {
        uVar9 = func_0x06a04fcc(puVar8 + -0x68,
                                *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 400));
      }
      else {
        lVar18 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
        }
        lVar24 = *plVar27;
        uVar16 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar16 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar18) {
              puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 1) * 0x10 + 0x138);
              goto LAB_04ed8a30;
            }
            uVar16 = uVar16 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar27,lVar18,1);
LAB_04ed8a30:
        puVar19 = (uint *)puVar11[1];
        uVar9 = (*(code *)*puVar11)(plVar27,param_3);
      }
      lVar18 = *(long *)(lVar15 + 0x10);
      unaff_x29 = puVar21;
      if (lVar18 == 0) goto LAB_04ed8da4;
      uVar26 = *(uint *)(lVar18 + 0x18);
      uVar9 = uVar9 & 0x7fffffff;
      unaff_x27 = (undefined *)(ulong)uVar9;
      iVar10 = 0;
      if (uVar26 != 0) {
        iVar10 = (int)uVar9 / (int)uVar26;
      }
      uVar23 = uVar9 - iVar10 * uVar26;
      if (uVar26 <= uVar23) goto LAB_04ed8da0;
      unaff_x28 = (int *)(lVar18 + (ulong)uVar23 * 4 + 0x20);
      uVar26 = *unaff_x28 - 1;
      param_3 = (ulong)uVar26;
      iVar10 = (int)puVar21;
      if (plVar27 == (long *)0x0) {
        if (lVar30 != 0) {
          uVar17 = *(undefined8 *)(lVar30 + 0x18);
          uVar23 = (uint)uVar17;
          if (uVar26 < uVar23) {
            unaff_x19 = (undefined4 *)0x0;
            unaff_x22 = (long *)0x14;
            do {
              uVar26 = (uint)uVar17;
              uVar23 = (uint)param_3;
              plVar27 = (long *)(long)(int)uVar23;
              if (*(uint *)(lVar30 + (long)(int)uVar23 * 0x14 + 0x20) == uVar9) {
                plVar14 = (long *)func_0x03d60eec(*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) +
                                                   0x18));
                if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_04ed8da0;
                if (plVar14 == (long *)0x0) goto LAB_04ed8da4;
                puVar19 = *(uint **)(puVar8 + -0x68);
                uVar16 = (**(code **)(*plVar14 + 0x1b8))
                                   (plVar14,*(undefined8 *)(lVar30 + (long)plVar27 * 0x14 + 0x28),
                                    puVar19,*(undefined8 *)(*plVar14 + 0x1c0));
                if ((uVar16 & 1) != 0) {
                  if (iVar10 == 2) goto LAB_04ed8d74;
                  if (iVar10 != 1) {
                    return (long *)0x0;
                  }
                  if (uVar23 < *(uint *)(lVar30 + 0x18)) {
                    *(int *)(lVar30 + (long)plVar27 * 0x14 + 0x30) = (int)puVar20;
                    return (long *)0x1;
                  }
                  goto LAB_04ed8da0;
                }
                uVar26 = *(uint *)(lVar30 + 0x18);
              }
              if (uVar26 <= uVar23) goto LAB_04ed8da0;
              uVar2 = *(uint *)(lVar30 + (long)plVar27 * 0x14 + 0x24);
              param_3 = (ulong)uVar2;
              if ((int)uVar26 <= (int)unaff_x19) {
                func_0x057b8684(0);
              }
              uVar17 = *(undefined8 *)(lVar30 + 0x18);
              unaff_x19 = (undefined4 *)(ulong)((int)unaff_x19 + 1);
              uVar23 = (uint)uVar17;
            } while (uVar2 < uVar23);
          }
          goto LAB_04ed8c0c;
        }
      }
      else if (lVar30 != 0) {
        uVar17 = *(undefined8 *)(lVar30 + 0x18);
        uVar23 = (uint)uVar17;
        if (uVar26 < uVar23) {
          *(int *)(puVar8 + -0x78) = iVar10;
          *(int *)(puVar8 + -0x74) = (int)puVar20;
          puVar21 = (uint *)0x0;
          unaff_x22 = (long *)0x14;
          do {
            uVar26 = (uint)uVar17;
            uVar23 = (uint)param_3;
            unaff_x19 = (undefined4 *)(long)(int)uVar23;
            if (*(uint *)(lVar30 + (long)(int)uVar23 * 0x14 + 0x20) == uVar9) {
              unaff_x25 = *(uint **)(puVar8 + -0x68);
              lVar18 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 8);
              param_3 = *(ulong *)(lVar30 + (long)unaff_x19 * 0x14 + 0x28);
              if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                lVar18 = func_0x0325681c(lVar18);
              }
              lVar24 = *plVar27;
              uVar16 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar16 != 0) {
                piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == lVar18) {
                    puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                    goto LAB_04ed8b18;
                  }
                  uVar16 = uVar16 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar16 != 0);
              }
              puVar11 = (undefined8 *)func_0x03256b10(plVar27,lVar18,0);
LAB_04ed8b18:
              puVar19 = unaff_x25;
              uVar16 = (*(code *)*puVar11)(plVar27,param_3,unaff_x25,puVar11[1]);
              if ((uVar16 & 1) != 0) {
                if ((*(uint *)(puVar8 + -0x78) & 0xff) == 2) {
LAB_04ed8d74:
                  *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)(puVar8 + -0x68);
                  uVar17 = func_0x03280b94(*(undefined8 *)
                                            (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70),
                                           puVar8 + -0x70);
                  func_0x057b8580(uVar17,0);
                  return (long *)0x0;
                }
                if ((*(uint *)(puVar8 + -0x78) & 0xff) != 1) {
                  return (long *)0x0;
                }
                if (uVar23 < *(uint *)(lVar30 + 0x18)) {
                  *(undefined4 *)(lVar30 + (long)unaff_x19 * 0x14 + 0x30) =
                       *(undefined4 *)(puVar8 + -0x74);
                  return (long *)0x1;
                }
                goto LAB_04ed8da0;
              }
              uVar26 = *(uint *)(lVar30 + 0x18);
            }
            if (uVar26 <= uVar23) goto LAB_04ed8da0;
            uVar2 = *(uint *)(lVar30 + (long)unaff_x19 * 0x14 + 0x24);
            param_3 = (ulong)uVar2;
            if ((int)uVar26 <= (int)puVar21) {
              func_0x057b8684(0);
            }
            uVar17 = *(undefined8 *)(lVar30 + 0x18);
            puVar21 = (uint *)(ulong)((int)puVar21 + 1);
            uVar23 = (uint)uVar17;
          } while (uVar2 < uVar23);
          unaff_x25 = (uint *)(ulong)*(uint *)(puVar8 + -0x74);
        }
LAB_04ed8c0c:
        if (*(int *)(lVar15 + 0x28) < 1) {
          uVar26 = *(uint *)(lVar15 + 0x20);
          unaff_x19 = (undefined4 *)(ulong)uVar26;
          unaff_x29 = puVar21;
          if (uVar26 == uVar23) {
            func_0x04ed9140(lVar15,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x1b8));
            lVar18 = *(long *)(lVar15 + 0x10);
            *(uint *)(lVar15 + 0x20) = uVar26 + 1;
            if (lVar18 == 0) goto LAB_04ed8da4;
            uVar23 = *(uint *)(lVar18 + 0x18);
            iVar10 = 0;
            if (uVar23 != 0) {
              iVar10 = (int)uVar9 / (int)uVar23;
            }
            uVar2 = uVar9 - iVar10 * uVar23;
            if (uVar23 <= uVar2) goto LAB_04ed8da0;
            lVar30 = *(long *)(lVar15 + 0x18);
            unaff_x28 = (int *)(lVar18 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            lVar30 = *(long *)(lVar15 + 0x18);
            *(uint *)(lVar15 + 0x20) = uVar26 + 1;
          }
          if (lVar30 == 0) goto LAB_04ed8da4;
          if (uVar26 < *(uint *)(lVar30 + 0x18)) {
            lVar22 = (long)(int)uVar26;
LAB_04ed8cbc:
            lVar30 = lVar30 + lVar22 * 0x14;
            *(uint *)(lVar30 + 0x20) = uVar9;
            *(int *)(lVar30 + 0x24) = *unaff_x28 + -1;
            uVar17 = *(undefined8 *)(puVar8 + -0x68);
            *(int *)(lVar30 + 0x30) = (int)unaff_x25;
            *(undefined8 *)(lVar30 + 0x28) = uVar17;
            *unaff_x28 = uVar26 + 1;
            return (long *)0x1;
          }
        }
        else {
          *(int *)(lVar15 + 0x28) = *(int *)(lVar15 + 0x28) + -1;
          uVar26 = *(uint *)(lVar15 + 0x24);
          unaff_x19 = (undefined4 *)(ulong)uVar26;
          if (uVar26 < *(uint *)(lVar30 + 0x18)) {
            lVar22 = (long)(int)uVar26;
            *(undefined4 *)(lVar15 + 0x24) = *(undefined4 *)(lVar30 + lVar22 * 0x14 + 0x24);
            goto LAB_04ed8cbc;
          }
        }
LAB_04ed8da0:
        func_0x03280cb4();
        unaff_x29 = puVar21;
      }
LAB_04ed8da4:
      lVar18 = func_0x03280cac();
      unaff_x26 = PTR_DAT_07781380;
      *(undefined8 *)(puVar8 + -0xd0) = 0x4ed8da8;
      *(undefined **)(puVar8 + -200) = unaff_x27;
      *(long *)(puVar8 + -0xc0) = lVar30;
      *(uint **)(puVar8 + -0xb8) = unaff_x25;
      *(ulong *)(puVar8 + -0xb0) = param_3;
      *(long **)(puVar8 + -0xa8) = plVar27;
      *(long **)(puVar8 + -0xa0) = unaff_x22;
      *(long *)(puVar8 + -0x98) = lVar22;
      *(long *)(puVar8 + -0x90) = lVar15;
      *(undefined4 **)(puVar8 + -0x88) = unaff_x19;
      uVar16 = 0x7e1b000;
      if ((bRam0000000007e1b5e0 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07781610);
        func_0x03280a18(PTR_DAT_07781618);
        func_0x03280a18(PTR_DAT_07781380);
        func_0x03280a18(PTR_DAT_0774e558);
        func_0x03280a18(PTR_DAT_07781600);
        func_0x03280a18(PTR_DAT_0777e440);
        func_0x03280a18(PTR_DAT_07781608);
        func_0x03280a18(PTR_DAT_0775b648);
        bRam0000000007e1b5e0 = 1;
      }
      lVar15 = *(long *)unaff_x26;
      *(undefined8 *)(puVar8 + -0xd8) = 0;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar15 = func_0x057624fc(0);
      if (lVar15 != 0) {
        func_0x04e91150(lVar15,lVar18,puVar8 + -0xd8,*(undefined8 *)PTR_DAT_07781618);
        if (*(long *)(puVar8 + -0xd8) == 0) {
          return (long *)0x0;
        }
        uVar12 = func_0x056933d8(*(long *)(puVar8 + -0xd8),*(undefined8 *)PTR_DAT_0775b648,0);
        puVar7 = PTR_DAT_0774e558;
        if (*(long *)(puVar8 + -0xd8) != 0) {
          uVar16 = uVar12 & 0xffffffff;
          uVar12 = func_0x056933d8(*(long *)(puVar8 + -0xd8),*(undefined8 *)PTR_DAT_07781600,0);
          lVar15 = *(long *)puVar7;
          lVar22 = *(long *)(puVar8 + -0xd8);
          unaff_x22 = (long *)(uVar12 & 0xffffffff);
          param_3 = *(ulong *)(*(long *)(*(long *)(puVar19 + 8) + 0xc0) + 0x170);
          if (*(int *)(lVar15 + 0xe0) == 0) {
            func_0x03280b8c(lVar15);
          }
          uVar17 = func_0x057a51c4(param_3,0);
          plVar27 = (long *)0x0;
          unaff_x27 = puVar7;
          if (lVar22 != 0) {
            lVar15 = func_0x05690f88(lVar22,*(undefined8 *)PTR_DAT_0777e440,uVar17,0);
            lVar22 = *(long *)(*(long *)(*(long *)(puVar19 + 8) + 0xc0) + 8);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = func_0x0325681c(lVar22);
            }
            if (lVar15 == 0) {
LAB_04ed8f5c:
              lVar30 = 0;
            }
            else {
              lVar30 = func_0x03280b90(lVar15,lVar22);
              if (lVar30 == 0) {
                func_0x03281048(lVar15,lVar22);
                goto LAB_04ed8f5c;
              }
            }
            plVar27 = (long *)(lVar18 + 0x30);
            *plVar27 = lVar30;
            lVar22 = *(long *)(*(long *)(*(long *)(puVar19 + 8) + 0xc0) + 8);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = func_0x0325681c(lVar22);
            }
            if ((lVar15 != 0) && (lVar30 = func_0x03280b90(lVar15,lVar22), lVar30 == 0)) {
              func_0x03281048(lVar15,lVar22);
            }
            goto SUB_032809c4;
          }
        }
      }
      func_0x03280cac();
      func_0x057b819c(0x10,0);
      func_0x03280cac();
      auVar31 = func_0x03281048(param_3,plVar27);
      puVar7 = PTR_DAT_07781380;
      lVar15 = auVar31._0_8_;
      *(undefined8 *)(puVar8 + -0x110) = 0x4ed9140;
      *(long **)(puVar8 + -0x100) = unaff_x22;
      *(ulong *)(puVar8 + -0xf8) = uVar16;
      *(uint **)(puVar8 + -0xf0) = puVar19;
      *(long *)(puVar8 + -0xe8) = lVar18;
      if ((bRam0000000007e1b5e1 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07781380);
        bRam0000000007e1b5e1 = 1;
      }
      uVar3 = *(undefined4 *)(lVar15 + 0x20);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar9 = func_0x05762478(uVar3,0);
      puVar7 = PTR_DAT_07754420;
      puVar20 = (uint *)(ulong)uVar9;
      lVar22 = *(long *)(*(long *)(*(long *)(auVar31._8_8_ + 0x20) + 0xc0) + 0x1c8);
      *(undefined8 *)(puVar8 + -0x120) = *(undefined8 *)(puVar8 + -0x110);
      *(ulong *)(puVar8 + -0x110) = param_3;
      *(long **)(puVar8 + -0x108) = plVar27;
      *(undefined8 *)(puVar8 + -0x100) = *(undefined8 *)(puVar8 + -0x100);
      *(undefined8 *)(puVar8 + -0xf8) = *(undefined8 *)(puVar8 + -0xf8);
      *(undefined8 *)(puVar8 + -0xf0) = *(undefined8 *)(puVar8 + -0xf0);
      *(undefined8 *)(puVar8 + -0xe8) = *(undefined8 *)(puVar8 + -0xe8);
      if ((bRam0000000007e1b5e2 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07754420,puVar20,0);
        bRam0000000007e1b5e2 = 1;
      }
      unaff_x21 = (long *)func_0x03280afc(*(undefined8 *)puVar7,puVar20);
      lVar22 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x1b0);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      puVar13 = (undefined4 *)func_0x03280afc(lVar22,puVar20);
      uVar26 = *(uint *)(lVar15 + 0x20);
      piVar29 = (int *)(ulong)uVar26;
      unaff_x24 = 0;
      puVar28 = puVar13;
      func_0x057b9f30(*(undefined8 *)(lVar15 + 0x18),0,puVar13,0,piVar29,0);
      if ((int)uVar26 < 1) {
LAB_04ed92e4:
        plVar27 = (long *)(lVar15 + 0x10);
        *plVar27 = (long)unaff_x21;
        goto SUB_032809c4;
      }
      if (puVar13 != (undefined4 *)0x0) {
        uVar26 = puVar13[6];
        piVar25 = (int *)0x0;
        while (piVar25 < (int *)(ulong)uVar26) {
          iVar10 = puVar13[(long)piVar25 * 5 + 8];
          if (-1 < iVar10) {
            if (unaff_x21 == (long *)0x0) goto LAB_04ed9318;
            iVar4 = 0;
            if (uVar9 != 0) {
              iVar4 = iVar10 / (int)uVar9;
            }
            uVar23 = iVar10 - iVar4 * uVar9;
            if (*(uint *)(unaff_x21 + 3) <= uVar23) break;
            puVar13[(long)piVar25 * 5 + 9] =
                 *(int *)((long)unaff_x21 + (ulong)uVar23 * 4 + 0x20) + -1;
            *(int *)((long)unaff_x21 + (ulong)uVar23 * 4 + 0x20) = (int)piVar25 + 1;
          }
          piVar25 = (int *)((long)piVar25 + 1);
          if (piVar25 == piVar29) goto LAB_04ed92e4;
        }
        func_0x03280cb4();
      }
LAB_04ed9318:
      auVar31 = func_0x03280cac();
      plVar27 = auVar31._8_8_;
      lVar22 = auVar31._0_8_;
      *(uint **)(puVar8 + -0x180) = unaff_x29;
      *(undefined8 *)(puVar8 + -0x178) = 0x4ed931c;
      *(int **)(puVar8 + -0x170) = unaff_x28;
      *(undefined **)(puVar8 + -0x168) = unaff_x27;
      *(undefined **)(puVar8 + -0x160) = unaff_x26;
      *(uint **)(puVar8 + -0x158) = unaff_x25;
      *(int **)(puVar8 + -0x150) = piVar29;
      *(undefined4 **)(puVar8 + -0x148) = puVar13;
      *(undefined8 **)(puVar8 + -0x140) = (undefined8 *)(lVar15 + 0x18);
      *(long **)(puVar8 + -0x138) = unaff_x21;
      *(uint **)(puVar8 + -0x130) = puVar20;
      *(long *)(puVar8 + -0x128) = lVar15;
      *(long **)(puVar8 + -0x188) = plVar27;
      if (*(long *)(lVar22 + 0x10) == 0) {
        return (long *)0x0;
      }
      unaff_x22 = *(long **)(lVar22 + 0x30);
      if (unaff_x22 == (long *)0x0) {
        unaff_x19 = puVar28;
        uVar9 = func_0x06a04fcc(puVar8 + -0x188,
                                *(undefined8 *)(*(long *)(*(long *)(puVar28 + 8) + 0xc0) + 400));
      }
      else {
        lVar15 = *(long *)(*(long *)(*(long *)(puVar28 + 8) + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
        }
        lVar30 = *unaff_x22;
        uVar16 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar16 != 0) {
          piVar25 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar15) {
              puVar11 = (undefined8 *)(lVar30 + (long)(*piVar25 + 1) * 0x10 + 0x138);
              goto LAB_04ed93dc;
            }
            uVar16 = uVar16 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(unaff_x22,lVar15,1);
LAB_04ed93dc:
        unaff_x19 = (undefined4 *)puVar11[1];
        uVar9 = (*(code *)*puVar11)(unaff_x22,plVar27);
        unaff_x21 = plVar27;
      }
      lVar15 = *(long *)(lVar22 + 0x10);
      if (lVar15 == 0) {
LAB_04ed9614:
        func_0x03280cac();
      }
      else {
        uVar26 = *(uint *)(lVar15 + 0x18);
        uVar9 = uVar9 & 0x7fffffff;
        unaff_x27 = (undefined *)(ulong)uVar9;
        iVar10 = 0;
        if (uVar26 != 0) {
          iVar10 = (int)uVar9 / (int)uVar26;
        }
        uVar23 = uVar9 - iVar10 * uVar26;
        if (uVar23 < uVar26) {
          uVar26 = *(int *)(lVar15 + (ulong)uVar23 * 4 + 0x20) - 1;
          if ((int)uVar26 < 0) {
            return (long *)0x0;
          }
          plVar27 = (long *)0x0;
          unaff_x29 = (uint *)0xffffffff;
          puVar20 = (uint *)0x14;
          *(ulong *)(puVar8 + -0x198) = (ulong)uVar23;
          *(undefined4 **)(puVar8 + -400) = puVar28;
          while( true ) {
            piVar29 = (int *)(ulong)uVar26;
            unaff_x26 = *(undefined **)(lVar22 + 0x18);
            unaff_x22 = plVar27;
            if (unaff_x26 == (undefined *)0x0) break;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar26) goto LAB_04ed9618;
            unaff_x25 = (uint *)(unaff_x26 + (ulong)uVar26 * 0x14 + 0x20);
            unaff_x28 = piVar29;
            if (*unaff_x25 == uVar9) {
              unaff_x21 = *(long **)(lVar22 + 0x30);
              if (unaff_x21 == (long *)0x0) {
                plVar14 = (long *)func_0x03d60eec(*(undefined8 *)
                                                   (*(long *)(*(long *)(puVar28 + 8) + 0xc0) + 0x18)
                                                 );
                unaff_x21 = plVar27;
                if (plVar14 == (long *)0x0) break;
                unaff_x19 = *(undefined4 **)(puVar8 + -0x188);
                unaff_x24 = *(long *)(*plVar14 + 0x1c0);
                uVar16 = (**(code **)(*plVar14 + 0x1b8))
                                   (plVar14,*(undefined8 *)(unaff_x26 + (long)piVar29 * 0x14 + 0x28)
                                   );
              }
              else {
                if (unaff_x21 == (long *)0x0) break;
                unaff_x19 = *(undefined4 **)(puVar8 + -0x188);
                lVar15 = *(long *)(*(long *)(*(long *)(puVar28 + 8) + 0xc0) + 8);
                unaff_x22 = *(long **)(unaff_x26 + (long)piVar29 * 0x14 + 0x28);
                if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                  lVar15 = func_0x0325681c(lVar15);
                }
                lVar30 = *unaff_x21;
                uVar16 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar16 != 0) {
                  piVar25 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == lVar15) {
                      puVar11 = (undefined8 *)(lVar30 + (long)*piVar25 * 0x10 + 0x138);
                      goto LAB_04ed9524;
                    }
                    uVar16 = uVar16 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)func_0x03256b10(unaff_x21,lVar15,0);
LAB_04ed9524:
                unaff_x24 = puVar11[1];
                uVar16 = (*(code *)*puVar11)(unaff_x21,unaff_x22);
                puVar28 = *(undefined4 **)(puVar8 + -400);
                plVar27 = unaff_x21;
              }
              if ((uVar16 & 1) != 0) {
                unaff_x21 = plVar27;
                if ((int)(uint)unaff_x29 < 0) {
                  lVar15 = *(long *)(lVar22 + 0x10);
                  if (lVar15 == 0) break;
                  if (*(uint *)(lVar15 + 0x18) <= (uint)*(long *)(puVar8 + -0x198))
                  goto LAB_04ed9618;
                  *(int *)(lVar15 + *(long *)(puVar8 + -0x198) * 4 + 0x20) =
                       *(int *)(unaff_x26 + (long)piVar29 * 0x14 + 0x24) + 1;
                }
                else {
                  lVar15 = *(long *)(lVar22 + 0x18);
                  if (lVar15 == 0) break;
                  if (*(uint *)(lVar15 + 0x18) <= (uint)unaff_x29) goto LAB_04ed9618;
                  *(undefined4 *)(lVar15 + (long)unaff_x29 * 0x14 + 0x24) =
                       *(undefined4 *)(unaff_x26 + (long)piVar29 * 0x14 + 0x24);
                }
                *unaff_x25 = 0xffffffff;
                *(undefined4 *)(unaff_x26 + (long)piVar29 * 0x14 + 0x24) =
                     *(undefined4 *)(lVar22 + 0x24);
                *(uint *)(lVar22 + 0x24) = uVar26;
                *(ulong *)(lVar22 + 0x28) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar22 + 0x28) >> 0x20) + 1,
                              (int)*(undefined8 *)(lVar22 + 0x28) + 1);
                return (long *)0x1;
              }
            }
            unaff_x29 = (uint *)(ulong)uVar26;
            unaff_x21 = plVar27;
            uVar26 = *(uint *)(unaff_x26 + (long)piVar29 * 0x14 + 0x24);
            if ((int)*(uint *)(unaff_x26 + (long)piVar29 * 0x14 + 0x24) < 0) {
              return (long *)0x0;
            }
          }
          goto LAB_04ed9614;
        }
      }
LAB_04ed9618:
      auVar31 = func_0x03280cb4();
      plVar27 = auVar31._8_8_;
      lVar15 = auVar31._0_8_;
      *(uint **)(puVar8 + -0x200) = unaff_x29;
      *(undefined8 *)(puVar8 + -0x1f8) = 0x4ed961c;
      *(int **)(puVar8 + -0x1f0) = unaff_x28;
      *(undefined **)(puVar8 + -0x1e8) = unaff_x27;
      *(undefined **)(puVar8 + -0x1e0) = unaff_x26;
      *(uint **)(puVar8 + -0x1d8) = unaff_x25;
      *(int **)(puVar8 + -0x1d0) = piVar29;
      *(undefined4 **)(puVar8 + -0x1c8) = puVar28;
      *(long **)(puVar8 + -0x1c0) = unaff_x22;
      *(long **)(puVar8 + -0x1b8) = unaff_x21;
      *(uint **)(puVar8 + -0x1b0) = puVar20;
      *(long *)(puVar8 + -0x1a8) = lVar22;
      *(long **)(puVar8 + -0x208) = plVar27;
      lVar22 = *(long *)(lVar15 + 0x10);
      *(undefined4 **)(puVar8 + -0x218) = unaff_x19;
      if (lVar22 == 0) {
LAB_04ed9860:
        **(undefined4 **)(puVar8 + -0x218) = 0;
        return (long *)0x0;
      }
      unaff_x23 = *(long **)(lVar15 + 0x30);
      lVar22 = unaff_x24;
      if (unaff_x23 == (long *)0x0) {
        uVar9 = func_0x06a04fcc(puVar8 + -0x208,
                                *(undefined8 *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 400)
                               );
      }
      else {
        lVar30 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          lVar30 = func_0x0325681c(lVar30);
        }
        lVar18 = *unaff_x23;
        uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar16 != 0) {
          piVar29 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar30) {
              puVar11 = (undefined8 *)(lVar18 + (long)(*piVar29 + 1) * 0x10 + 0x138);
              goto LAB_04ed96e0;
            }
            uVar16 = uVar16 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(unaff_x23,lVar30,1);
LAB_04ed96e0:
        unaff_x19 = (undefined4 *)puVar11[1];
        uVar9 = (*(code *)*puVar11)(unaff_x23,plVar27);
        unaff_x22 = plVar27;
      }
      lVar30 = *(long *)(lVar15 + 0x10);
      if (lVar30 == 0) {
LAB_04ed9930:
        func_0x03280cac();
      }
      else {
        uVar26 = *(uint *)(lVar30 + 0x18);
        uVar9 = uVar9 & 0x7fffffff;
        unaff_x28 = (int *)(ulong)uVar9;
        iVar10 = 0;
        if (uVar26 != 0) {
          iVar10 = (int)uVar9 / (int)uVar26;
        }
        uVar23 = uVar9 - iVar10 * uVar26;
        if (uVar23 < uVar26) {
          iVar10 = *(int *)(lVar30 + (ulong)uVar23 * 4 + 0x20);
          *(ulong *)(puVar8 + -0x220) = (ulong)uVar23;
          uVar26 = iVar10 - 1;
          if ((int)uVar26 < 0) goto LAB_04ed9860;
          plVar27 = (long *)0x0;
          unaff_x26 = (undefined *)0xffffffff;
          unaff_x21 = (long *)0x14;
          *(long *)(puVar8 + -0x210) = unaff_x24;
          while( true ) {
            unaff_x25 = (uint *)(ulong)uVar26;
            unaff_x27 = *(undefined **)(lVar15 + 0x18);
            unaff_x23 = plVar27;
            if (unaff_x27 == (undefined *)0x0) break;
            if (*(uint *)(unaff_x27 + 0x18) <= uVar26) goto LAB_04ed9934;
            unaff_x29 = (uint *)(unaff_x27 + (ulong)uVar26 * 0x14 + 0x20);
            puVar20 = unaff_x25;
            if (*unaff_x29 == uVar9) {
              unaff_x22 = *(long **)(lVar15 + 0x30);
              if (unaff_x22 == (long *)0x0) {
                plVar14 = (long *)func_0x03d60eec(*(undefined8 *)
                                                   (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) +
                                                   0x18));
                unaff_x22 = plVar27;
                if (plVar14 == (long *)0x0) break;
                unaff_x19 = *(undefined4 **)(puVar8 + -0x208);
                lVar22 = *(long *)(*plVar14 + 0x1c0);
                uVar16 = (**(code **)(*plVar14 + 0x1b8))
                                   (plVar14,*(undefined8 *)
                                             (unaff_x27 + (long)unaff_x25 * 0x14 + 0x28));
              }
              else {
                if (unaff_x22 == (long *)0x0) break;
                unaff_x19 = *(undefined4 **)(puVar8 + -0x208);
                lVar22 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
                unaff_x23 = *(long **)(unaff_x27 + (long)unaff_x25 * 0x14 + 0x28);
                if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                  lVar22 = func_0x0325681c(lVar22);
                }
                lVar30 = *unaff_x22;
                uVar16 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar16 != 0) {
                  piVar29 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == lVar22) {
                      puVar11 = (undefined8 *)(lVar30 + (long)*piVar29 * 0x10 + 0x138);
                      goto LAB_04ed982c;
                    }
                    uVar16 = uVar16 - 1;
                    piVar29 = piVar29 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)func_0x03256b10(unaff_x22,lVar22,0);
LAB_04ed982c:
                lVar22 = puVar11[1];
                uVar16 = (*(code *)*puVar11)(unaff_x22,unaff_x23);
                unaff_x24 = *(long *)(puVar8 + -0x210);
                plVar27 = unaff_x22;
              }
              if ((uVar16 & 1) != 0) {
                unaff_x22 = plVar27;
                if ((int)(uint)unaff_x26 < 0) {
                  lVar30 = *(long *)(lVar15 + 0x10);
                  if (lVar30 == 0) break;
                  if (*(uint *)(lVar30 + 0x18) <= (uint)*(long *)(puVar8 + -0x220))
                  goto LAB_04ed9934;
                  *(int *)(lVar30 + *(long *)(puVar8 + -0x220) * 4 + 0x20) =
                       *(int *)(unaff_x27 + (long)unaff_x25 * 0x14 + 0x24) + 1;
                }
                else {
                  lVar30 = *(long *)(lVar15 + 0x18);
                  if (lVar30 == 0) break;
                  if (*(uint *)(lVar30 + 0x18) <= (uint)unaff_x26) goto LAB_04ed9934;
                  *(undefined4 *)(lVar30 + (long)unaff_x26 * 0x14 + 0x24) =
                       *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x14 + 0x24);
                }
                **(undefined4 **)(puVar8 + -0x218) =
                     *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x14 + 0x30);
                *unaff_x29 = 0xffffffff;
                *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x14 + 0x24) =
                     *(undefined4 *)(lVar15 + 0x24);
                *(uint *)(lVar15 + 0x24) = uVar26;
                *(ulong *)(lVar15 + 0x28) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar15 + 0x28) >> 0x20) + 1,
                              (int)*(undefined8 *)(lVar15 + 0x28) + 1);
                return (long *)0x1;
              }
            }
            unaff_x26 = (undefined *)(ulong)uVar26;
            unaff_x22 = plVar27;
            uVar26 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x14 + 0x24);
            if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x14 + 0x24) < 0) goto LAB_04ed9860;
          }
          goto LAB_04ed9930;
        }
      }
LAB_04ed9934:
      unaff_x20 = func_0x03280cb4();
      *(undefined8 *)(puVar8 + -0x240) = 0x4ed9938;
      *(uint **)(puVar8 + -0x230) = puVar20;
      *(long *)(puVar8 + -0x228) = lVar15;
      puVar20 = *(uint **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x110);
      uVar9 = func_0x04ed8584();
      if ((int)uVar9 < 0) {
        *unaff_x19 = 0;
        goto LAB_04ed9988;
      }
      lVar15 = *(long *)(unaff_x20 + 0x18);
      if (lVar15 == 0) {
        func_0x03280cac();
      }
      else if (uVar9 < *(uint *)(lVar15 + 0x18)) {
        *unaff_x19 = *(undefined4 *)(lVar15 + (ulong)uVar9 * 0x14 + 0x30);
LAB_04ed9988:
        return (long *)(ulong)(~uVar9 >> 0x1f);
      }
      unaff_x30 = 0x4ed99a4;
      auVar31 = func_0x03280cb4();
      param_3 = auVar31._8_8_;
      lVar15 = auVar31._0_8_;
      puVar21 = (uint *)0x0;
      lVar22 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x118);
      puVar8 = puVar8 + -0x240;
    } while( true );
  }
LAB_0676b8f8:
  lVar15 = func_0x03280cac();
  if (*(long *)(lVar15 + 0x80) != 0) {
    iVar10 = func_0x062b1fcc(*(long *)(lVar15 + 0x80),0);
    return (long *)(ulong)(1 < iVar10);
  }
  func_0x03280cac();
  puVar7 = PTR_DAT_07807de8;
  if ((bRam0000000007e280e5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807de8);
    bRam0000000007e280e5 = 1;
  }
  uVar17 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x057da5fc(uVar17,0);
  **(undefined8 **)(*(long *)puVar7 + 0xb8) = uVar17;
  plVar27 = *(long **)(*(long *)puVar7 + 0xb8);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar27 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar27 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return plVar27;
}

