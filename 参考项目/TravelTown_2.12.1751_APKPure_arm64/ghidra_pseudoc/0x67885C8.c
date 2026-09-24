/* Ghidra 12.1.2 native pseudocode; RVA 0x67885C8; MergeEngine.ECS.Systems.Board.UnboxingSystem.ProcessResourceConsumeUnboxing; status ok */


/* WARNING: Possible PIC construction at 0x06888790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688880c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06888b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06888810) */
/* WARNING: Removing unreachable block (ram,0x0688881c) */
/* WARNING: Removing unreachable block (ram,0x06888794) */
/* WARNING: Removing unreachable block (ram,0x06888798) */
/* WARNING: Removing unreachable block (ram,0x068887a8) */
/* WARNING: Removing unreachable block (ram,0x068887b0) */
/* WARNING: Removing unreachable block (ram,0x068887d8) */
/* WARNING: Removing unreachable block (ram,0x068887bc) */
/* WARNING: Removing unreachable block (ram,0x068887c8) */
/* WARNING: Removing unreachable block (ram,0x068887e4) */
/* WARNING: Removing unreachable block (ram,0x06888b2c) */
/* WARNING: Removing unreachable block (ram,0x06888b34) */
/* WARNING: Removing unreachable block (ram,0x06888b4c) */
/* WARNING: Removing unreachable block (ram,0x06888bcc) */

undefined1  [16]
MergeEngine_ECS_Systems_Board_UnboxingSystem__ProcessResourceConsumeUnboxing
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000007e28d24 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_077d7770);
    func_0x03280a18(PTR_DAT_078101a0);
    func_0x03280a18(PTR_DAT_078101a8);
    func_0x03280a18(PTR_DAT_078101b0);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_078101b8);
    func_0x03280a18(PTR_DAT_078101f0);
    bRam0000000007e28d24 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
LAB_06888868:
    func_0x03280cac();
    auVar25 = func_0x03280cac();
    if (auVar25._8_4_ == 1) {
      plVar11 = (long *)func_0x072ce910(auVar25._0_8_);
      lVar9 = *plVar11;
      func_0x072ce920();
      auVar23 = func_0x05108f58(&uStack_80,*(undefined8 *)PTR_DAT_078101a0);
      if (lVar9 == 0) {
        return auVar23;
      }
      func_0x03280ca4(lVar9);
    }
    func_0x05108f58(&uStack_80,*(undefined8 *)PTR_DAT_078101a0);
    func_0x03365958(auVar25._0_8_);
    func_0x03280ca4(0);
    auVar23 = func_0x02f09514();
    lVar9 = auVar23._8_8_;
    param_1 = auVar23._0_8_;
  }
  else {
    auVar22 = func_0x06a02444(*(long *)(param_1 + 0x50),param_3);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = auVar22._8_8_;
    if (auVar22._0_8_ == 0) {
      return auVar23 << 0x40;
    }
    lVar9 = *(long *)(auVar22._0_8_ + 0x10);
    if (lVar9 == 0) goto LAB_06888868;
    auVar23 = func_0x03d20d84(lVar9,*(undefined8 *)PTR_DAT_077d7770);
    lVar9 = auVar23._0_8_;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar23._8_8_;
    if (lVar9 == 0) {
      return auVar22 << 0x40;
    }
    iVar2 = *(int *)(lVar9 + 0x48);
    iVar3 = *(int *)(lVar9 + 0x4c);
    uStack_98 = 0;
    func_0x05c6e674((float)(int)param_3,(float)(int)((ulong)param_3 >> 0x20),&uStack_98,0);
    if ((*(long *)(param_1 + 0x50) == 0) ||
       (lVar9 = func_0x06a02524(*(long *)(param_1 + 0x50),param_3,0,0), lVar9 == 0))
    goto LAB_06888868;
    func_0x040cf800(&uStack_98,lVar9,*(undefined8 *)PTR_DAT_078101b8);
    puVar8 = PTR_DAT_078101a8;
    puVar7 = PTR_DAT_0777e638;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    do {
      do {
        uVar10 = func_0x05108f5c(&uStack_80,*(undefined8 *)puVar8);
        if ((uVar10 & 1) == 0) {
          auVar23 = func_0x05108f58(&uStack_80,*(undefined8 *)PTR_DAT_078101a0);
          return auVar23;
        }
        if (*(long *)(param_1 + 0x50) == 0) {
          func_0x03280cac();
LAB_06888864:
          func_0x03280cac();
          goto LAB_06888868;
        }
        lVar9 = func_0x06a02444(*(long *)(param_1 + 0x50),uStack_70);
      } while (lVar9 == 0);
      lVar9 = func_0x03ced81c(lVar9,*(undefined8 *)puVar7);
      if (lVar9 == 0) goto LAB_06888864;
    } while (((*(char *)(lVar9 + 0x33) == '\0') || (*(int *)(lVar9 + 0x34) != 3)) ||
            (*(int *)(lVar9 + 0x40) != iVar2));
    *(int *)(lVar9 + 0x3c) = *(int *)(lVar9 + 0x3c) + iVar3;
  }
  if ((bRam0000000007e28d25 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e28d25 = 1;
  }
  plVar11 = *(long **)(param_1 + 0x80);
  if (plVar11 != (long *)0x0) {
    lVar15 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0x14) * 0x10 + 0x138);
          goto LAB_068889b4;
        }
        uVar10 = uVar10 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,0x14);
LAB_068889b4:
    uVar13 = (*(code *)*puVar12)(plVar11,lVar9);
    if ((lVar9 != 0) && (plVar11 = *(long **)(param_1 + 0x68), plVar11 != (long *)0x0)) {
      lVar15 = *plVar11;
      uVar17 = *(undefined8 *)(lVar9 + 0x10);
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
      uVar18 = *(undefined8 *)PTR_DAT_07778fa0;
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06888a38;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777e4a0,0);
LAB_06888a38:
      uVar13 = (*(code *)*puVar12)(plVar11,uVar18,uVar13,uVar17,0,puVar12[1]);
      lVar9 = *(long *)(param_1 + 0x70);
      if (lVar9 != 0) {
        uVar17 = 0;
        uVar18 = 0;
        if ((bRam0000000007e28edd & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07807698);
          bRam0000000007e28edd = 1;
        }
        plVar11 = *(long **)(lVar9 + 0x40);
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          lVar15 = *(long *)PTR_DAT_07802f60;
          uVar17 = *(undefined8 *)PTR_DAT_07807698;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar9 = lVar9 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9554;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x03256b10(plVar11);
LAB_068b9554:
          lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar15);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar23 = (**(code **)(lVar9 + 8))(plVar11,uVar17,uVar13,0,0,lVar9);
          return auVar23;
        }
        auVar23 = func_0x03280cac();
        uVar13 = uVar17;
        if ((bRam0000000007e28ede & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811878);
          bRam0000000007e28ede = 1;
        }
        plVar11 = *(long **)(auVar23._0_8_ + 0x40);
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          lVar15 = *(long *)PTR_DAT_07802f60;
          uVar13 = *(undefined8 *)PTR_DAT_07811878;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar9 = lVar9 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9644;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x03256b10(plVar11);
LAB_068b9644:
          lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar15);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar23 = (**(code **)(lVar9 + 8))(plVar11,uVar13,auVar23._8_8_,0,uVar17,lVar9);
          return auVar23;
        }
        auVar23 = func_0x03280cac();
        uVar17 = uVar13;
        if ((bRam0000000007e28edf & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_0776b160);
          bRam0000000007e28edf = 1;
        }
        plVar11 = *(long **)(auVar23._0_8_ + 0x40);
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          lVar15 = *(long *)PTR_DAT_07802f60;
          uVar17 = *(undefined8 *)PTR_DAT_0776b160;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar9 = lVar9 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9734;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x03256b10(plVar11);
LAB_068b9734:
          lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar15);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar23 = (**(code **)(lVar9 + 8))(plVar11,uVar17,auVar23._8_8_,0,uVar13,lVar9);
          return auVar23;
        }
        auVar23 = func_0x03280cac();
        if ((bRam0000000007e28ee0 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811880);
          bRam0000000007e28ee0 = 1;
        }
        plVar11 = *(long **)(auVar23._0_8_ + 0x40);
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          lVar15 = *(long *)PTR_DAT_07802f60;
          uVar13 = *(undefined8 *)PTR_DAT_07811880;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar9 = lVar9 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9820;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x03256b10(plVar11);
LAB_068b9820:
          lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar15);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar23 = (**(code **)(lVar9 + 8))(plVar11,uVar13,auVar23._8_8_,0,0,lVar9);
          return auVar23;
        }
        auVar23 = func_0x03280cac();
        if ((bRam0000000007e28ee1 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811888);
          bRam0000000007e28ee1 = 1;
        }
        plVar11 = *(long **)(auVar23._0_8_ + 0x40);
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          lVar15 = *(long *)PTR_DAT_07802f60;
          uVar13 = *(undefined8 *)PTR_DAT_07811888;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar9 = lVar9 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b990c;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x03256b10(plVar11);
LAB_068b990c:
          lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar15);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar23 = (**(code **)(lVar9 + 8))(plVar11,uVar13,auVar23._8_8_,0,0,lVar9);
          return auVar23;
        }
        auVar23 = func_0x03280cac();
        puVar7 = PTR_DAT_0777aa98;
        uVar13 = uVar17;
        uVar14 = uVar18;
        if ((bRam0000000007e28ee2 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777aa98);
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811888);
          bRam0000000007e28ee2 = 1;
        }
        lVar9 = func_0x03280ca0(*(undefined8 *)puVar7);
        func_0x06a30df4(lVar9,0);
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x30) = uVar17;
          func_0x032809c4((undefined8 *)(lVar9 + 0x30),uVar17);
          *(undefined8 *)(lVar9 + 0x38) = uVar18;
          plVar11 = *(long **)(auVar23._0_8_ + 0x40);
          if (plVar11 != (long *)0x0) {
            lVar15 = *plVar11;
            lVar19 = *(long *)PTR_DAT_07802f60;
            uVar13 = *(undefined8 *)PTR_DAT_07811888;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar19 + 0x20)) {
                  lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068b9a48;
                }
                uVar10 = uVar10 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar10 != 0);
            }
            lVar15 = func_0x03256b10(plVar11);
LAB_068b9a48:
            lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar23 = (**(code **)(lVar15 + 8))(plVar11,uVar13,auVar23._8_8_,0,lVar9,lVar15);
            return auVar23;
          }
        }
        auVar23 = func_0x03280cac();
        puVar7 = PTR_DAT_0777aa98;
        if ((bRam0000000007e28ee3 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777aa98);
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_077c1e10);
          bRam0000000007e28ee3 = 1;
        }
        lVar9 = func_0x03280ca0(*(undefined8 *)puVar7);
        func_0x06a30df4(lVar9,0);
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x30) = uVar13;
          func_0x032809c4((undefined8 *)(lVar9 + 0x30),uVar13);
          *(undefined8 *)(lVar9 + 0x38) = uVar14;
          plVar11 = *(long **)(auVar23._0_8_ + 0x40);
          if (plVar11 != (long *)0x0) {
            lVar15 = *plVar11;
            lVar19 = *(long *)PTR_DAT_07802f60;
            uVar13 = *(undefined8 *)PTR_DAT_077c1e10;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar19 + 0x20)) {
                  lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068b9b88;
                }
                uVar10 = uVar10 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar10 != 0);
            }
            lVar15 = func_0x03256b10(plVar11);
LAB_068b9b88:
            lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar23 = (**(code **)(lVar15 + 8))(plVar11,uVar13,auVar23._8_8_,0,lVar9,lVar15);
            return auVar23;
          }
        }
        auVar23 = func_0x03280cac();
        if ((bRam0000000007e28ee4 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_077d7510);
          bRam0000000007e28ee4 = 1;
        }
        plVar11 = *(long **)(auVar23._0_8_ + 0x40);
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          lVar15 = *(long *)PTR_DAT_07802f60;
          uVar13 = *(undefined8 *)PTR_DAT_077d7510;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar9 = lVar9 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9c78;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x03256b10(plVar11);
LAB_068b9c78:
          lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar15);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar23 = (**(code **)(lVar9 + 8))(plVar11,uVar13,auVar23._8_8_,0,0,lVar9);
          return auVar23;
        }
        auVar23 = func_0x03280cac();
        if ((bRam0000000007e28ee5 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811890);
          bRam0000000007e28ee5 = 1;
        }
        plVar11 = *(long **)(auVar23._0_8_ + 0x40);
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          lVar15 = *(long *)PTR_DAT_07802f60;
          uVar13 = *(undefined8 *)PTR_DAT_07811890;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar9 = lVar9 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9d64;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x03256b10(plVar11);
LAB_068b9d64:
          lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar15);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar23 = (**(code **)(lVar9 + 8))(plVar11,uVar13,auVar23._8_8_,0,0,lVar9);
          return auVar23;
        }
        auVar23 = func_0x03280cac();
        if ((bRam0000000007e28ee6 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777ab08);
          func_0x03280a18(PTR_DAT_07811898);
          bRam0000000007e28ee6 = 1;
        }
        plVar11 = *(long **)(auVar23._0_8_ + 0x40);
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          lVar15 = *(long *)PTR_DAT_0777ab08;
          uVar13 = *(undefined8 *)PTR_DAT_07811898;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar9 = lVar9 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9e50;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x03256b10(plVar11);
LAB_068b9e50:
          lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar15);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar23 = (**(code **)(lVar9 + 8))(plVar11,uVar13,auVar23._8_8_,0,lVar9);
          return auVar23;
        }
        auVar23 = func_0x03280cac();
        if ((bRam0000000007e28ee7 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_078118a0);
          bRam0000000007e28ee7 = 1;
        }
        plVar11 = *(long **)(auVar23._0_8_ + 0x40);
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          lVar15 = *(long *)PTR_DAT_07802f60;
          uVar13 = *(undefined8 *)PTR_DAT_078118a0;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar9 = lVar9 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9f38;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x03256b10(plVar11);
LAB_068b9f38:
          lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar15);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar23 = (**(code **)(lVar9 + 8))(plVar11,uVar13,auVar23._8_8_,0,0,lVar9);
          return auVar23;
        }
        uVar10 = func_0x03280cac();
        goto SUB_057da5fc;
      }
    }
  }
  auVar23 = func_0x03280cac();
  lVar9 = auVar23._8_8_;
  if ((bRam0000000007e28d26 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_078101c0);
    func_0x03280a18(PTR_DAT_078101c8);
    bRam0000000007e28d26 = 1;
  }
  lVar15 = *(long *)(auVar23._0_8_ + 0x78);
  if (lVar15 == 0) {
LAB_06888c08:
    auVar24 = func_0x03280cac();
  }
  else {
    auVar23 = func_0x06603648(lVar15,0);
    if (auVar23._0_8_ == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar23._8_8_;
      return auVar6 << 0x40;
    }
    if (lVar9 == 0) goto LAB_06888c08;
    func_0x03ced81c(lVar9,*(undefined8 *)PTR_DAT_077d75b8);
    auVar24._8_8_ = extraout_x1;
    auVar24._0_8_ = lVar9;
  }
  uVar10 = auVar24._8_8_;
  lVar9 = auVar24._0_8_;
  if ((bRam0000000007e28d27 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e28d27 = 1;
    uVar10 = extraout_x1_00;
  }
  if (lVar9 != 0) {
    iVar2 = *(int *)(lVar9 + 0x38);
    if (0 < iVar2) {
      iVar3 = *(int *)(lVar9 + 0x3c);
      if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar4 = iVar2 - iVar3;
      uVar1 = uVar4;
      if ((int)uVar4 < 1) {
        uVar1 = 0;
      }
      auVar20._4_4_ = 0;
      auVar20._0_4_ = uVar1;
      auVar20._8_4_ = uVar4;
      auVar20._12_4_ = 0;
      return auVar20;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar10;
    return auVar5 << 0x40;
  }
  uVar10 = func_0x03280cac();
SUB_057da5fc:
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar10;
  return auVar21;
}

