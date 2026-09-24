/* Ghidra 12.1.2 native pseudocode; RVA 0x6788908; MergeEngine.ECS.Systems.Board.UnboxingSystem.NotifyAndTrackInteractionProgress; status ok */


/* WARNING: Possible PIC construction at 0x06888b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06888b2c) */
/* WARNING: Removing unreachable block (ram,0x06888b34) */
/* WARNING: Removing unreachable block (ram,0x06888b4c) */
/* WARNING: Removing unreachable block (ram,0x06888bcc) */

undefined1  [16]
MergeEngine_ECS_Systems_Board_UnboxingSystem__NotifyAndTrackInteractionProgress
          (long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  if ((bRam0000000007e28d25 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e28d25 = 1;
  }
  plVar15 = *(long **)(param_1 + 0x80);
  if (plVar15 != (long *)0x0) {
    lVar11 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x14) * 0x10 + 0x138);
          goto LAB_068889b4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,0x14);
LAB_068889b4:
    uVar9 = (*(code *)*puVar8)(plVar15,param_2);
    if ((param_2 != 0) && (plVar15 = *(long **)(param_1 + 0x68), plVar15 != (long *)0x0)) {
      lVar11 = *plVar15;
      uVar14 = *(undefined8 *)(param_2 + 0x10);
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar16 = *(undefined8 *)PTR_DAT_07778fa0;
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06888a38;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777e4a0,0);
LAB_06888a38:
      uVar9 = (*(code *)*puVar8)(plVar15,uVar16,uVar9,uVar14,0,puVar8[1]);
      lVar11 = *(long *)(param_1 + 0x70);
      if (lVar11 != 0) {
        uVar14 = 0;
        uVar16 = 0;
        if ((bRam0000000007e28edd & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07807698);
          bRam0000000007e28edd = 1;
        }
        plVar15 = *(long **)(lVar11 + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar11 = *plVar15;
          lVar17 = *(long *)PTR_DAT_07802f60;
          uVar14 = *(undefined8 *)PTR_DAT_07807698;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9554;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x03256b10(plVar15);
LAB_068b9554:
          lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar17);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar21 = (**(code **)(lVar11 + 8))(plVar15,uVar14,uVar9,0,0,lVar11);
          return auVar21;
        }
        auVar21 = func_0x03280cac();
        uVar9 = uVar14;
        if ((bRam0000000007e28ede & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811878);
          bRam0000000007e28ede = 1;
        }
        plVar15 = *(long **)(auVar21._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar11 = *plVar15;
          lVar17 = *(long *)PTR_DAT_07802f60;
          uVar9 = *(undefined8 *)PTR_DAT_07811878;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9644;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x03256b10(plVar15);
LAB_068b9644:
          lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar17);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar21 = (**(code **)(lVar11 + 8))(plVar15,uVar9,auVar21._8_8_,0,uVar14,lVar11);
          return auVar21;
        }
        auVar21 = func_0x03280cac();
        uVar14 = uVar9;
        if ((bRam0000000007e28edf & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_0776b160);
          bRam0000000007e28edf = 1;
        }
        plVar15 = *(long **)(auVar21._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar11 = *plVar15;
          lVar17 = *(long *)PTR_DAT_07802f60;
          uVar14 = *(undefined8 *)PTR_DAT_0776b160;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9734;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x03256b10(plVar15);
LAB_068b9734:
          lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar17);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar21 = (**(code **)(lVar11 + 8))(plVar15,uVar14,auVar21._8_8_,0,uVar9,lVar11);
          return auVar21;
        }
        auVar21 = func_0x03280cac();
        if ((bRam0000000007e28ee0 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811880);
          bRam0000000007e28ee0 = 1;
        }
        plVar15 = *(long **)(auVar21._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar11 = *plVar15;
          lVar17 = *(long *)PTR_DAT_07802f60;
          uVar9 = *(undefined8 *)PTR_DAT_07811880;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9820;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x03256b10(plVar15);
LAB_068b9820:
          lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar17);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar21 = (**(code **)(lVar11 + 8))(plVar15,uVar9,auVar21._8_8_,0,0,lVar11);
          return auVar21;
        }
        auVar21 = func_0x03280cac();
        if ((bRam0000000007e28ee1 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811888);
          bRam0000000007e28ee1 = 1;
        }
        plVar15 = *(long **)(auVar21._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar11 = *plVar15;
          lVar17 = *(long *)PTR_DAT_07802f60;
          uVar9 = *(undefined8 *)PTR_DAT_07811888;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b990c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x03256b10(plVar15);
LAB_068b990c:
          lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar17);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar21 = (**(code **)(lVar11 + 8))(plVar15,uVar9,auVar21._8_8_,0,0,lVar11);
          return auVar21;
        }
        auVar21 = func_0x03280cac();
        puVar7 = PTR_DAT_0777aa98;
        uVar9 = uVar14;
        uVar10 = uVar16;
        if ((bRam0000000007e28ee2 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777aa98);
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811888);
          bRam0000000007e28ee2 = 1;
        }
        lVar11 = func_0x03280ca0(*(undefined8 *)puVar7);
        func_0x06a30df4(lVar11,0);
        if (lVar11 != 0) {
          *(undefined8 *)(lVar11 + 0x30) = uVar14;
          func_0x032809c4((undefined8 *)(lVar11 + 0x30),uVar14);
          *(undefined8 *)(lVar11 + 0x38) = uVar16;
          plVar15 = *(long **)(auVar21._0_8_ + 0x40);
          if (plVar15 != (long *)0x0) {
            lVar17 = *plVar15;
            lVar18 = *(long *)PTR_DAT_07802f60;
            uVar9 = *(undefined8 *)PTR_DAT_07811888;
            uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar18 + 0x20)) {
                  lVar17 = lVar17 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068b9a48;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            lVar17 = func_0x03256b10(plVar15);
LAB_068b9a48:
            lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar21 = (**(code **)(lVar17 + 8))(plVar15,uVar9,auVar21._8_8_,0,lVar11,lVar17);
            return auVar21;
          }
        }
        auVar21 = func_0x03280cac();
        puVar7 = PTR_DAT_0777aa98;
        if ((bRam0000000007e28ee3 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777aa98);
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_077c1e10);
          bRam0000000007e28ee3 = 1;
        }
        lVar11 = func_0x03280ca0(*(undefined8 *)puVar7);
        func_0x06a30df4(lVar11,0);
        if (lVar11 != 0) {
          *(undefined8 *)(lVar11 + 0x30) = uVar9;
          func_0x032809c4((undefined8 *)(lVar11 + 0x30),uVar9);
          *(undefined8 *)(lVar11 + 0x38) = uVar10;
          plVar15 = *(long **)(auVar21._0_8_ + 0x40);
          if (plVar15 != (long *)0x0) {
            lVar17 = *plVar15;
            lVar18 = *(long *)PTR_DAT_07802f60;
            uVar9 = *(undefined8 *)PTR_DAT_077c1e10;
            uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar18 + 0x20)) {
                  lVar17 = lVar17 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068b9b88;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            lVar17 = func_0x03256b10(plVar15);
LAB_068b9b88:
            lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar21 = (**(code **)(lVar17 + 8))(plVar15,uVar9,auVar21._8_8_,0,lVar11,lVar17);
            return auVar21;
          }
        }
        auVar21 = func_0x03280cac();
        if ((bRam0000000007e28ee4 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_077d7510);
          bRam0000000007e28ee4 = 1;
        }
        plVar15 = *(long **)(auVar21._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar11 = *plVar15;
          lVar17 = *(long *)PTR_DAT_07802f60;
          uVar9 = *(undefined8 *)PTR_DAT_077d7510;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9c78;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x03256b10(plVar15);
LAB_068b9c78:
          lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar17);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar21 = (**(code **)(lVar11 + 8))(plVar15,uVar9,auVar21._8_8_,0,0,lVar11);
          return auVar21;
        }
        auVar21 = func_0x03280cac();
        if ((bRam0000000007e28ee5 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811890);
          bRam0000000007e28ee5 = 1;
        }
        plVar15 = *(long **)(auVar21._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar11 = *plVar15;
          lVar17 = *(long *)PTR_DAT_07802f60;
          uVar9 = *(undefined8 *)PTR_DAT_07811890;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9d64;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x03256b10(plVar15);
LAB_068b9d64:
          lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar17);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar21 = (**(code **)(lVar11 + 8))(plVar15,uVar9,auVar21._8_8_,0,0,lVar11);
          return auVar21;
        }
        auVar21 = func_0x03280cac();
        if ((bRam0000000007e28ee6 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777ab08);
          func_0x03280a18(PTR_DAT_07811898);
          bRam0000000007e28ee6 = 1;
        }
        plVar15 = *(long **)(auVar21._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar11 = *plVar15;
          lVar17 = *(long *)PTR_DAT_0777ab08;
          uVar9 = *(undefined8 *)PTR_DAT_07811898;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9e50;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x03256b10(plVar15);
LAB_068b9e50:
          lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar17);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar21 = (**(code **)(lVar11 + 8))(plVar15,uVar9,auVar21._8_8_,0,lVar11);
          return auVar21;
        }
        auVar21 = func_0x03280cac();
        if ((bRam0000000007e28ee7 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_078118a0);
          bRam0000000007e28ee7 = 1;
        }
        plVar15 = *(long **)(auVar21._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar11 = *plVar15;
          lVar17 = *(long *)PTR_DAT_07802f60;
          uVar9 = *(undefined8 *)PTR_DAT_078118a0;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9f38;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x03256b10(plVar15);
LAB_068b9f38:
          lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar17);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar21 = (**(code **)(lVar11 + 8))(plVar15,uVar9,auVar21._8_8_,0,0,lVar11);
          return auVar21;
        }
        uVar12 = func_0x03280cac();
        goto SUB_057da5fc;
      }
    }
  }
  auVar21 = func_0x03280cac();
  lVar11 = auVar21._8_8_;
  if ((bRam0000000007e28d26 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_078101c0);
    func_0x03280a18(PTR_DAT_078101c8);
    bRam0000000007e28d26 = 1;
  }
  lVar17 = *(long *)(auVar21._0_8_ + 0x78);
  if (lVar17 == 0) {
LAB_06888c08:
    auVar21 = func_0x03280cac();
  }
  else {
    auVar21 = func_0x06603648(lVar17,0);
    if (auVar21._0_8_ == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar21._8_8_;
      return auVar6 << 0x40;
    }
    if (lVar11 == 0) goto LAB_06888c08;
    func_0x03ced81c(lVar11,*(undefined8 *)PTR_DAT_077d75b8);
    auVar21._8_8_ = extraout_x1;
    auVar21._0_8_ = lVar11;
  }
  uVar12 = auVar21._8_8_;
  lVar11 = auVar21._0_8_;
  if ((bRam0000000007e28d27 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e28d27 = 1;
    uVar12 = extraout_x1_00;
  }
  if (lVar11 != 0) {
    iVar2 = *(int *)(lVar11 + 0x38);
    if (0 < iVar2) {
      iVar3 = *(int *)(lVar11 + 0x3c);
      if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar4 = iVar2 - iVar3;
      uVar1 = uVar4;
      if ((int)uVar4 < 1) {
        uVar1 = 0;
      }
      auVar19._4_4_ = 0;
      auVar19._0_4_ = uVar1;
      auVar19._8_4_ = uVar4;
      auVar19._12_4_ = 0;
      return auVar19;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar12;
    return auVar5 << 0x40;
  }
  uVar12 = func_0x03280cac();
SUB_057da5fc:
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar12;
  return auVar20;
}

