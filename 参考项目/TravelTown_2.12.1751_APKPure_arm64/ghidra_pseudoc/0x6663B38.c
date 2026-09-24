/* Ghidra 12.1.2 native pseudocode; RVA 0x6663B38; MergeEngine.ECS.Systems.Board.BoardQueueSystem.DequeueCurrentItem; status ok */

/* WARNING: Possible PIC construction at 0x06a04194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a04384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067645d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06764818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06763d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06763dbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06763d80) */
/* WARNING: Removing unreachable block (ram,0x06763d84) */
/* WARNING: Removing unreachable block (ram,0x06763d9c) */
/* WARNING: Removing unreachable block (ram,0x0676481c) */
/* WARNING: Removing unreachable block (ram,0x06764828) */
/* WARNING: Removing unreachable block (ram,0x06764830) */
/* WARNING: Removing unreachable block (ram,0x067645d4) */
/* WARNING: Removing unreachable block (ram,0x067645d8) */
/* WARNING: Removing unreachable block (ram,0x067645f8) */
/* WARNING: Removing unreachable block (ram,0x06764664) */
/* WARNING: Removing unreachable block (ram,0x06764670) */
/* WARNING: Removing unreachable block (ram,0x0676468c) */
/* WARNING: Removing unreachable block (ram,0x06764694) */
/* WARNING: Removing unreachable block (ram,0x067646a0) */
/* WARNING: Removing unreachable block (ram,0x067646e8) */
/* WARNING: Removing unreachable block (ram,0x06764708) */
/* WARNING: Removing unreachable block (ram,0x06764724) */
/* WARNING: Removing unreachable block (ram,0x0676472c) */
/* WARNING: Removing unreachable block (ram,0x06764754) */
/* WARNING: Removing unreachable block (ram,0x06764738) */
/* WARNING: Removing unreachable block (ram,0x06764744) */
/* WARNING: Removing unreachable block (ram,0x06764764) */
/* WARNING: Removing unreachable block (ram,0x06764774) */
/* WARNING: Removing unreachable block (ram,0x0676477c) */
/* WARNING: Removing unreachable block (ram,0x06764784) */
/* WARNING: Removing unreachable block (ram,0x06764874) */
/* WARNING: Removing unreachable block (ram,0x0676478c) */
/* WARNING: Removing unreachable block (ram,0x0676479c) */
/* WARNING: Removing unreachable block (ram,0x067647a4) */
/* WARNING: Removing unreachable block (ram,0x067647cc) */
/* WARNING: Removing unreachable block (ram,0x067647b0) */
/* WARNING: Removing unreachable block (ram,0x067647bc) */
/* WARNING: Removing unreachable block (ram,0x067647dc) */
/* WARNING: Removing unreachable block (ram,0x06764844) */
/* WARNING: Removing unreachable block (ram,0x067647ec) */
/* WARNING: Removing unreachable block (ram,0x067647f0) */
/* WARNING: Removing unreachable block (ram,0x0676484c) */
/* WARNING: Removing unreachable block (ram,0x06764850) */
/* WARNING: Removing unreachable block (ram,0x067647f4) */
/* WARNING: Removing unreachable block (ram,0x06a04388) */
/* WARNING: Removing unreachable block (ram,0x06a0438c) */
/* WARNING: Removing unreachable block (ram,0x06a04390) */
/* WARNING: Removing unreachable block (ram,0x06a04198) */
/* WARNING: Removing unreachable block (ram,0x06a0419c) */
/* WARNING: Removing unreachable block (ram,0x06a041a8) */
/* WARNING: Removing unreachable block (ram,0x06a041c4) */
/* WARNING: Removing unreachable block (ram,0x06a041f8) */
/* WARNING: Removing unreachable block (ram,0x06a041cc) */
/* WARNING: Removing unreachable block (ram,0x06a041ec) */
/* WARNING: Removing unreachable block (ram,0x06763dc0) */
/* WARNING: Removing unreachable block (ram,0x03e4016c) */
/* WARNING: Removing unreachable block (ram,0x03e40178) */
/* WARNING: Removing unreachable block (ram,0x03e40190) */
/* WARNING: Removing unreachable block (ram,0x03e40198) */
/* WARNING: Removing unreachable block (ram,0x03e401d0) */
/* WARNING: Removing unreachable block (ram,0x03e401a4) */
/* WARNING: Removing unreachable block (ram,0x03e401b0) */
/* WARNING: Removing unreachable block (ram,0x03e401dc) */

long * MergeEngine_ECS_Systems_Board_BoardQueueSystem__DequeueCurrentItem
                 (undefined1 param_1 [16],undefined8 param_2,long param_3,undefined8 param_4,
                 long *param_5,long *param_6,long *param_7,long *param_8,long *param_9,
                 ulong param_10)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *extraout_x1;
  long *extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  long *plVar27;
  undefined *unaff_x21;
  undefined8 uVar28;
  long *plVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined1 auVar32 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  long *plStack_138;
  long *plStack_130;
  ulong uStack_128;
  long *plStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_a0;
  byte bStack_98;
  undefined8 uStack_88;
  
  if ((bRam0000000007e280a7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff48);
    func_0x03280a18(PTR_DAT_07807c10);
    bRam0000000007e280a7 = 1;
  }
  plVar27 = *(long **)(param_3 + 0xa8);
  if (plVar27 != (long *)0x0) {
    lVar21 = *plVar27;
    uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
    uVar28 = *(undefined8 *)PTR_DAT_07807c10;
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777ff48) {
          puVar8 = (undefined8 *)(lVar21 + (long)(*piVar26 + 7) * 0x10 + 0x138);
          goto LAB_06763bdc;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar27,*(long *)PTR_DAT_0777ff48,7);
LAB_06763bdc:
    param_5 = (long *)puVar8[1];
    (*(code *)*puVar8)(0x3f800000,plVar27,uVar28);
    lVar21 = *(long *)(param_3 + 0x80);
    if (lVar21 != 0) {
      uVar28 = 0;
      if ((bRam0000000007e29918 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07752c80,0);
        func_0x03280a18(PTR_DAT_078269a0);
        func_0x03280a18(PTR_DAT_07826980);
        func_0x03280a18(PTR_DAT_078269a8);
        bRam0000000007e29918 = 1;
        uVar28 = extraout_x1_01;
      }
      uVar31 = 0x6a04198;
      puVar4 = &stack0xffffffffffffffe0;
      do {
        *(undefined8 *)(puVar4 + -0x20) = uVar31;
        *(undefined8 *)(puVar4 + -0x10) = 0x7e29000;
        *(long *)(puVar4 + -8) = lVar21;
        if ((bRam0000000007e29920 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07826908,uVar28);
          func_0x03280a18(PTR_DAT_07826998);
          func_0x03280a18(PTR_DAT_078269b0);
          bRam0000000007e29920 = 1;
        }
        lVar23 = *(long *)(lVar21 + 0x28);
        if (lVar23 != 0) {
          if (0 < *(int *)(lVar23 + 0x18)) {
            return *(long **)(lVar23 + 0x10);
          }
          lVar23 = *(long *)(lVar21 + 0x30);
          if (lVar23 != 0) {
            if (*(int *)(lVar23 + 0x18) < 1) {
              return (long *)0x0;
            }
            uVar28 = *(undefined8 *)PTR_DAT_078269b0;
            if (*(long *)(lVar23 + 0x10) == 0) {
              return (long *)0x0;
            }
            return *(long **)(*(long *)(lVar23 + 0x10) + 0x20);
          }
        }
        auVar32 = func_0x03280cac();
        lVar22 = auVar32._8_8_;
        lVar23 = auVar32._0_8_;
        *(undefined8 *)(puVar4 + -0x40) = 0x6a0429c;
        *(undefined **)(puVar4 + -0x38) = unaff_x21;
        *(undefined8 *)(puVar4 + -0x30) = 0x7e29000;
        *(long *)(puVar4 + -0x28) = lVar21;
        if ((bRam0000000007e29919 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07752c80);
          func_0x03280a18(PTR_DAT_078269b8);
          bRam0000000007e29919 = 1;
        }
        puVar2 = PTR_DAT_078269b8;
        unaff_x21 = (undefined *)0x7e29000;
        if (*(long *)(lVar23 + 0x28) != 0) {
          uVar25 = func_0x054f0d40(*(long *)(lVar23 + 0x28),lVar22,*(undefined8 *)PTR_DAT_078269b8);
          unaff_x21 = puVar2;
          if ((uVar25 & 1) == 0) {
            if (*(long *)(lVar23 + 0x30) == 0) goto LAB_06a04350;
            uVar25 = func_0x054f0d40(*(long *)(lVar23 + 0x30),lVar22,*(undefined8 *)puVar2);
            if ((uVar25 & 1) == 0) {
              return (long *)0x0;
            }
          }
          if ((lVar22 != 0) && (*(long *)(lVar23 + 0x38) != 0)) {
            func_0x053c1024(*(long *)(lVar23 + 0x38),*(undefined8 *)(lVar22 + 0x20),
                            *(undefined8 *)PTR_DAT_07752c80);
            func_0x06a03fd0(lVar23);
            return (long *)0x1;
          }
        }
LAB_06a04350:
        auVar32 = func_0x03280cac();
        uVar28 = auVar32._8_8_;
        lVar21 = auVar32._0_8_;
        *(undefined8 *)(puVar4 + -0x60) = 0x6a04354;
        *(long *)(puVar4 + -0x50) = lVar22;
        *(long *)(puVar4 + -0x48) = lVar23;
        if ((bRam0000000007e2991a & 1) == 0) {
          func_0x03280a18(PTR_DAT_07826980);
          bRam0000000007e2991a = 1;
          uVar28 = extraout_x1_02;
        }
        uVar31 = 0x6a04388;
        puVar4 = puVar4 + -0x60;
      } while( true );
    }
  }
  lVar21 = func_0x03280cac();
  plVar27 = param_5;
  plVar14 = param_6;
  plVar15 = param_7;
  plVar17 = param_8;
  plVar19 = param_9;
  uVar25 = param_10;
  uVar28 = param_2;
  if ((bRam0000000007e280a9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c288);
    func_0x03280a18(PTR_DAT_0777a940);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777c290);
    bRam0000000007e280a9 = 1;
  }
  if (extraout_x1 == (long *)0x0) {
LAB_06763de4:
    lVar21 = func_0x03280cac();
    plVar9 = extraout_x1_00;
    param_7 = plVar19;
    uVar31 = extraout_d0_00;
  }
  else {
    plVar9 = (long *)func_0x03280b90(extraout_x1[2],*(undefined8 *)PTR_DAT_0777e548);
    *param_6 = 0;
    if (plVar9 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(long *)(lVar21 + 0x70) == 0) ||
       (lVar23 = *(long *)(*(long *)(lVar21 + 0x70) + 0x88), lVar23 == 0)) goto LAB_06763de4;
    uVar10 = func_0x06a022d4(lVar23,0);
    if ((uVar10 & 1) != 0) {
      if (((ulong)param_5 & 1) == 0) {
        return (long *)0x0;
      }
      lVar21 = *(long *)(lVar21 + 0x28);
      uStack_88 = 0;
      func_0x069fdc94(&uStack_88,1,0,0);
      uVar31 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777c288);
      plVar27 = (long *)0x6;
      plVar14 = (long *)0x0;
      plVar15 = (long *)0x0;
      plVar17 = (long *)0x0;
      plVar19 = (long *)0x0;
      func_0x0686aa28(uVar31,uStack_88);
      if (lVar21 != 0) {
        func_0x03ea4d6c(lVar21,uVar31,*(undefined8 *)PTR_DAT_0777c290);
        return (long *)0x0;
      }
      goto LAB_06763de4;
    }
    plVar17 = (long *)extraout_x1[7];
    bStack_98 = (byte)param_10 & 1;
    uVar25 = (ulong)((uint)param_8 & 1);
    plVar14 = (long *)0x0;
    plVar15 = (long *)0x0;
    uStack_a0 = (uint)param_9;
    plVar27 = extraout_x1;
    uVar31 = extraout_d0;
    uVar28 = param_2;
  }
  plVar19 = plVar27;
  plVar13 = plVar14;
  plVar16 = plVar15;
  plVar18 = plVar17;
  uStack_110 = extraout_d0;
  uStack_108 = param_2;
  if ((bRam0000000007e280ab & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807c18);
    func_0x03280a18(PTR_DAT_07807c20);
    func_0x03280a18(PTR_DAT_0777a958);
    func_0x03280a18(PTR_DAT_077797a8);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_07772080);
    func_0x03280a18(PTR_DAT_07807c28);
    func_0x03280a18(PTR_DAT_07807c30);
    func_0x03280a18(PTR_DAT_0777e5f0);
    func_0x03280a18(PTR_DAT_07807c38);
    bRam0000000007e280ab = 1;
  }
  puVar2 = PTR_DAT_07807c28;
  plVar29 = *(long **)(lVar21 + 0x40);
  lVar23 = 0;
  if (plVar29 != (long *)0x0) {
    lVar23 = *plVar29;
    uVar10 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar10 != 0) {
      piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar8 = (undefined8 *)(lVar23 + (long)(*piVar26 + 0x13) * 0x10 + 0x138);
          goto LAB_06763f38;
        }
        uVar10 = uVar10 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_0777a498,0x13);
LAB_06763f38:
    uVar10 = (*(code *)*puVar8)(plVar29,plVar9,puVar8[1]);
    lVar23 = *(long *)(lVar21 + 0x28);
    plVar19 = (long *)(uVar10 & 0xffffffff);
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar2);
    plVar18 = (long *)0x0;
    plVar13 = plVar14;
    plVar16 = plVar15;
    func_0x060f37c0(uVar11,plVar9);
    if (lVar23 != 0) {
      plVar19 = *(long **)PTR_DAT_07807c30;
      func_0x03ea4d6c(lVar23,uVar11);
      lVar22 = *(long *)(lVar21 + 0xf0);
      if (lVar22 != 0) {
        (**(code **)(lVar22 + 0x18))(*(undefined8 *)(lVar22 + 0x40),*(undefined8 *)(lVar22 + 0x28));
      }
      if (*(long *)(lVar21 + 0x70) != 0) {
        lVar23 = MergeEngine_ECS_Systems_Board_BoardSystem__GetRandomAvailablePosition();
        plVar19 = plVar9;
        plVar13 = plVar27;
        plVar29 = (long *)func_0x0676498c(lVar21,lVar23);
        if (plVar29 != (long *)0x0) {
          lVar22 = func_0x03d20d84(plVar29,*(undefined8 *)PTR_DAT_0777a958);
          plVar27 = plVar29;
          if (lVar22 != 0) {
            plVar9 = (long *)(lVar22 + 0x48);
            lVar22 = *plVar9;
            if (lVar22 == 0) {
              lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e5f0);
              func_0x069fe0e4(lVar22,0);
              *plVar9 = lVar22;
              func_0x032809c4(plVar9,lVar22);
              lVar22 = *plVar9;
              if (lVar22 == 0) goto LAB_0676431c;
            }
            *(long *)(lVar22 + 0x28) = (long)plVar17;
            func_0x032809c4((long *)(lVar22 + 0x28),plVar17);
          }
          if (plVar15 != (long *)0x0) {
            plVar12 = (long *)func_0x03d203e4(plVar29,*(undefined8 *)PTR_DAT_07807c20);
            if (plVar12 == (long *)0x0) goto LAB_0676431c;
            plVar12[4] = (long)plVar15;
            func_0x032809c4(plVar12 + 4,plVar15);
            if (plVar14 == (long *)0x0) {
              lVar22 = 0;
            }
            else {
              lVar22 = *plVar14;
              uVar10 = (ulong)*(ushort *)(lVar22 + 0x12e);
              if (uVar10 != 0) {
                piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_07779820) {
                    puVar8 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
                    goto LAB_067640cc;
                  }
                  uVar10 = uVar10 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar10 != 0);
              }
              plVar19 = (long *)0x0;
              puVar8 = (undefined8 *)func_0x03256b10(plVar14);
LAB_067640cc:
              lVar22 = (*(code *)*puVar8)(plVar14,puVar8[1]);
              plVar15 = plVar12;
              plVar17 = plVar12;
              if (plVar14 == (long *)0x0) goto LAB_0676431c;
            }
            plVar17 = plVar12 + 5;
            *plVar17 = lVar22;
            func_0x032809c4(plVar17);
            *(undefined1 *)(plVar12 + 6) = 1;
          }
          plVar15 = (long *)(ulong)uStack_a0;
          uVar10 = func_0x055f7aac(param_7,0);
          if ((uVar10 & 1) == 0) {
            plVar17 = *(long **)(lVar21 + 0xd8);
            if (plVar17 == (long *)0x0) goto LAB_0676431c;
            lVar22 = *plVar17;
            lVar30 = *(long *)PTR_DAT_07772080;
            plVar9 = *(long **)PTR_DAT_07807c38;
            uVar10 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar10 != 0) {
              piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)(lVar30 + 0x20)) {
                  lVar22 = lVar22 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar30 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_0676417c;
                }
                uVar10 = uVar10 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar10 != 0);
            }
            lVar22 = func_0x03256b10(plVar17);
LAB_0676417c:
            plVar13 = (long *)func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar30);
            plVar19 = (long *)0x1;
            uVar10 = (*(code *)plVar13[1])(plVar17,plVar9);
            if ((uStack_a0 != 0x69) && ((uVar10 & 1) != 0)) {
              lVar22 = func_0x03d203e4(plVar29,*(undefined8 *)PTR_DAT_07807c18);
              if (lVar22 == 0) goto LAB_0676431c;
              plVar17 = (long *)(lVar22 + 0x20);
              *plVar17 = (long)param_7;
              func_0x032809c4(plVar17,param_7);
              *(uint *)(lVar22 + 0x28) = uStack_a0;
            }
          }
          param_7 = *(long **)(lVar21 + 0x10);
          if (param_7 != (long *)0x0) {
            lVar22 = *param_7;
            plVar17 = (long *)(ulong)bStack_98;
            uVar10 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar10 != 0) {
              piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777e5c0) {
                  puVar8 = (undefined8 *)(lVar22 + (long)(*piVar26 + 5) * 0x10 + 0x138);
                  goto LAB_06764240;
                }
                uVar10 = uVar10 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined8 *)func_0x03256b10(param_7,*(long *)PTR_DAT_0777e5c0,5);
LAB_06764240:
            plVar19 = (long *)puVar8[1];
            (*(code *)*puVar8)(param_7,plVar29);
            if ((bStack_98 & 1) != 0) {
              return plVar29;
            }
            if (plVar14 == (long *)0x0) {
              func_0x06764e18(uVar31,uVar28,lVar21,lVar23,(uint)uVar25 & 1,plVar15);
              return plVar29;
            }
            lVar22 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar10 != 0) {
              piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_077797a8) {
                  puVar8 = (undefined8 *)(lVar22 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                  goto LAB_067642d0;
                }
                uVar10 = uVar10 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar10 != 0);
            }
            plVar19 = (long *)0x1;
            puVar8 = (undefined8 *)func_0x03256b10(plVar14);
LAB_067642d0:
            lVar22 = (*(code *)*puVar8)(plVar14,puVar8[1]);
            if (lVar22 != 0) {
              func_0x06764b04(uVar31,uVar28,lVar21,lVar23,*(undefined4 *)(lVar22 + 0x14));
              return plVar29;
            }
          }
        }
      }
    }
  }
LAB_0676431c:
  auVar32 = func_0x03280cac();
  lVar22 = auVar32._0_8_;
  uStack_160 = 0x6764320;
  plStack_158 = plVar9;
  plStack_150 = plVar17;
  plStack_148 = plVar15;
  lStack_140 = lVar23;
  plStack_138 = plVar27;
  plStack_130 = param_7;
  uStack_128 = uVar25 & 0xffffffff;
  plStack_120 = plVar14;
  lStack_118 = lVar21;
  if ((bRam0000000007e280b5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07807c40);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_077c1e18);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e280b5 = 1;
  }
  puVar2 = PTR_DAT_0777e4a0;
  plVar27 = *(long **)(lVar22 + 0x50);
  if (plVar27 == (long *)0x0) {
LAB_067644f0:
    func_0x03280cac();
    puVar2 = PTR_DAT_07807c48;
    uStack_168 = plVar13;
    if ((bRam0000000007e280aa & 1) == 0) {
      func_0x03280a18(PTR_DAT_07807c50);
      func_0x03280a18(PTR_DAT_07807c58);
      func_0x03280a18(PTR_DAT_07807c60);
      func_0x03280a18(PTR_DAT_07807c68);
      func_0x03280a18(PTR_DAT_07807c70);
      func_0x03280a18(PTR_DAT_0777b2c0);
      func_0x03280a18(PTR_DAT_07807c78);
      func_0x03280a18(PTR_DAT_07807c80);
      func_0x03280a18(PTR_DAT_07807c48);
      func_0x03280a18(PTR_DAT_07807c88);
      bRam0000000007e280aa = 1;
    }
    plVar27 = (long *)func_0x03280ca0(*(undefined8 *)puVar2);
    return plVar27;
  }
  lVar21 = *plVar27;
  uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
  uVar28 = *(undefined8 *)PTR_DAT_0777e5f8;
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777e4a0) {
        puVar8 = (undefined8 *)(lVar21 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_06764404;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  puVar8 = (undefined8 *)func_0x03256b10(plVar27,*(long *)PTR_DAT_0777e4a0,0);
LAB_06764404:
  plVar27 = (long *)(*(code *)*puVar8)(plVar27,uVar28,plVar16,plVar18,0,puVar8[1]);
  plVar14 = *(long **)(lVar22 + 0x50);
  if (plVar14 == (long *)0x0) goto LAB_067644f0;
  lVar21 = *plVar14;
  uVar31 = *(undefined8 *)PTR_DAT_0776b160;
  uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
  uVar28 = *(undefined8 *)PTR_DAT_077c1e18;
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar21 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_06764490;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar2,0);
LAB_06764490:
  lVar21 = (*(code *)*puVar8)(plVar14,uVar31,auVar32._8_8_,plVar19,uVar28,puVar8[1]);
  lVar23 = *(long *)(lVar22 + 0x68);
  if (lVar23 == 0) goto LAB_067644f0;
  lVar30 = *(long *)PTR_DAT_07807c40;
  uVar25 = 0;
  lVar22 = 0;
  plVar14 = plVar13;
  plVar15 = plVar27;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0776aeb0);
    func_0x03280a18(PTR_DAT_0777aa90);
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_0777aaa0);
    func_0x03280a18(PTR_DAT_0777aaa8);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777aab0);
    func_0x03280a18(PTR_DAT_077512a8);
    func_0x03280a18(PTR_DAT_07751420);
    func_0x03280a18(PTR_DAT_0777aab8);
    if (*(long *)(lVar30 + 0x38) == 0) {
      func_0x03256878(lVar30);
    }
  }
  lVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
  func_0x06a30df4(lVar6,0);
  if (lVar6 == 0) goto LAB_03e402a8;
  *(undefined8 *)(lVar6 + 0x30) = plVar13;
  func_0x032809c4((undefined8 *)(lVar6 + 0x30),plVar13);
  if (lVar21 == 0) goto LAB_03e402a8;
  *(long *)(lVar21 + 0x20) = lVar6;
  func_0x032809c4((long *)(lVar21 + 0x20),lVar6);
  if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0x38) + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar6 = func_0x03280ca0();
  func_0x04143c38(lVar6,*(undefined8 *)(*(long *)(lVar30 + 0x38) + 0x10));
  if (lVar6 == 0) goto LAB_03e402a8;
  lVar20 = *(long *)(lVar6 + 0x10);
  lVar24 = *(long *)(*(long *)(lVar30 + 0x38) + 0x18);
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (lVar20 == 0) goto LAB_03e402a8;
  uVar5 = *(uint *)(lVar6 + 0x18);
  if (uVar5 < *(uint *)(lVar20 + 0x18)) {
    *(uint *)(lVar6 + 0x18) = uVar5 + 1;
    plVar17 = (long *)(lVar20 + (long)(int)uVar5 * 8 + 0x20);
    *plVar17 = lVar21;
    func_0x032809c4(plVar17,lVar21);
    if (plVar27 == (long *)0x0) goto LAB_03e3ffbc;
LAB_03e3ff28:
    lVar21 = *(long *)(lVar6 + 0x10);
    lVar20 = *(long *)(*(long *)(lVar30 + 0x38) + 0x18);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar21 == 0) goto LAB_03e402a8;
    uVar5 = *(uint *)(lVar6 + 0x18);
    if (uVar5 < *(uint *)(lVar21 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar5 + 1;
      plVar17 = (long *)(lVar21 + (long)(int)uVar5 * 8 + 0x20);
      *plVar17 = (long)plVar27;
      func_0x032809c4(plVar17,plVar27);
    }
    else {
      plVar14 = *(long **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(lVar6,plVar27);
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_0777aab0 + 0x130);
    if ((*(byte *)(*plVar27 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0777aab0))
    goto LAB_03e3ffbc;
    lVar21 = 0;
    if (plVar27[0x1b] != 0) {
      lVar21 = *(long *)(plVar27[0x1b] + 0x10);
    }
  }
  else {
    plVar14 = *(long **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70);
    func_0x0414446c(lVar6,lVar21);
    if (plVar27 != (long *)0x0) goto LAB_03e3ff28;
LAB_03e3ffbc:
    lVar21 = 0;
  }
  plVar27 = *(long **)(lVar23 + 0x48);
  lVar20 = 0;
  if (lVar21 != 0) {
    lVar20 = lVar21;
  }
  if (plVar27 != (long *)0x0) {
    lVar21 = *plVar27;
    uVar10 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar10 != 0) {
      piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777aaa8) {
          puVar8 = (undefined8 *)(lVar21 + (long)(*piVar26 + 9) * 0x10 + 0x138);
          goto LAB_03e40028;
        }
        uVar10 = uVar10 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar10 != 0);
    }
    plVar14 = (long *)0x9;
    puVar8 = (undefined8 *)func_0x03256b10(plVar27);
LAB_03e40028:
    lVar21 = (*(code *)*puVar8)(plVar27,puVar8[1]);
    if (lVar21 != 0) {
      lVar24 = *(long *)(*(long *)(lVar30 + 0x38) + 0x28);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      if (*(int *)(lVar24 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar24 = *(long *)(*(long *)(lVar30 + 0x38) + 0x28);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0xb8) + 8);
      if (lVar24 == 0) {
        lVar24 = *(long *)(*(long *)(lVar30 + 0x38) + 0x28);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c();
        }
        if (*(int *)(lVar24 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar24 = *(long *)(*(long *)(lVar30 + 0x38) + 0x28);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c();
        }
        uVar28 = **(undefined8 **)(lVar24 + 0xb8);
        lVar24 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aaa0);
        plVar15 = (long *)0x0;
        func_0x053569b8(lVar24,uVar28,*(undefined8 *)(*(long *)(lVar30 + 0x38) + 0x30));
        lVar7 = *(long *)(*(long *)(lVar30 + 0x38) + 0x28);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = func_0x0325681c();
        }
        *(long *)(*(long *)(lVar7 + 0xb8) + 8) = lVar24;
        lVar7 = *(long *)(*(long *)(lVar30 + 0x38) + 0x28);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = func_0x0325681c();
        }
        func_0x032809c4(*(long *)(lVar7 + 0xb8) + 8,lVar24);
      }
      uVar28 = func_0x03d50a94(lVar21,lVar24,*(undefined8 *)PTR_DAT_0777aa90);
      uVar5 = func_0x03d37bc0(uVar28,lVar20,*(undefined8 *)PTR_DAT_0776aeb0);
      uStack_168._0_6_ = (uint6)(uint)uStack_168;
      plVar14 = *(long **)PTR_DAT_07751420;
      func_0x04377614((long)&uStack_168 + 4,uVar5 & 1);
    }
  }
  plVar27 = *(long **)(lVar23 + 0x40);
  if (plVar27 != (long *)0x0) {
    lVar21 = *plVar27;
    lVar23 = *(long *)(*(long *)(lVar30 + 0x38) + 0x38);
    uVar28 = *(undefined8 *)PTR_DAT_0777aab8;
    uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
          lVar21 = lVar21 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40264;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    lVar21 = func_0x03256b10(plVar27);
LAB_03e40264:
    lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
    plVar27 = (long *)(**(code **)(lVar21 + 8))(plVar27,uVar28,lVar6,0,lVar21);
    return plVar27;
  }
LAB_03e402a8:
  auVar32 = func_0x03280cac();
  plVar27 = plVar14;
  if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777aac0), plVar14[7] == 0)) {
    func_0x03256878(plVar14);
  }
  plVar17 = *(long **)(auVar32._0_8_ + 0x40);
  if (plVar17 == (long *)0x0) {
    auVar32 = func_0x03280cac();
    plVar14 = plVar27;
    if ((plVar27[7] == 0) && (func_0x03280a18(PTR_DAT_0777aac8), plVar27[7] == 0)) {
      func_0x03256878(plVar27);
    }
    plVar17 = *(long **)(auVar32._0_8_ + 0x40);
    if (plVar17 == (long *)0x0) {
      auVar32 = func_0x03280cac();
      plVar27 = plVar14;
      if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777aad0), plVar14[7] == 0)) {
        func_0x03256878(plVar14);
      }
      plVar17 = *(long **)(auVar32._0_8_ + 0x40);
      if (plVar17 == (long *)0x0) {
        auVar32 = func_0x03280cac();
        plVar14 = plVar27;
        if ((plVar27[7] == 0) && (func_0x03280a18(PTR_DAT_0777aad8), plVar27[7] == 0)) {
          func_0x03256878(plVar27);
        }
        plVar17 = *(long **)(auVar32._0_8_ + 0x40);
        if (plVar17 == (long *)0x0) {
          auVar32 = func_0x03280cac();
          plVar27 = plVar14;
          if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777aae0), plVar14[7] == 0)) {
            func_0x03256878(plVar14);
          }
          plVar17 = *(long **)(auVar32._0_8_ + 0x40);
          if (plVar17 == (long *)0x0) {
            auVar32 = func_0x03280cac();
            plVar14 = plVar27;
            if ((plVar27[7] == 0) && (func_0x03280a18(PTR_DAT_0777aae8), plVar27[7] == 0)) {
              func_0x03256878(plVar27);
            }
            plVar17 = *(long **)(auVar32._0_8_ + 0x40);
            if (plVar17 == (long *)0x0) {
              auVar32 = func_0x03280cac();
              plVar27 = plVar14;
              if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777aaf0), plVar14[7] == 0)) {
                func_0x03256878(plVar14);
              }
              plVar17 = *(long **)(auVar32._0_8_ + 0x40);
              if (plVar17 == (long *)0x0) {
                auVar32 = func_0x03280cac();
                puVar3 = PTR_DAT_0777ab00;
                puVar2 = PTR_DAT_0777aaf8;
                if ((bRam0000000007e17dbe & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0777aaf8);
                  func_0x03280a18(PTR_DAT_0777ab00);
                  func_0x03280a18(PTR_DAT_0777ab08);
                  func_0x03280a18(PTR_DAT_0777ab10);
                  bRam0000000007e17dbe = 1;
                }
                plVar14 = *(long **)(auVar32._0_8_ + 0x40);
                uVar28 = func_0x03d2c6a8(auVar32._8_8_,*(undefined8 *)puVar2);
                uVar28 = func_0x03d5ffd0(uVar28,*(undefined8 *)puVar3);
                if (plVar14 == (long *)0x0) {
                  auVar32 = func_0x03280cac();
                  plVar14 = plVar27;
                  if ((plVar27[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab18), plVar27[7] == 0)) {
                    func_0x03256878(plVar27);
                  }
                  plVar17 = *(long **)(auVar32._0_8_ + 0x40);
                  if (plVar17 == (long *)0x0) {
                    auVar32 = func_0x03280cac();
                    plVar27 = plVar14;
                    if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab20), plVar14[7] == 0)) {
                      func_0x03256878(plVar14);
                    }
                    plVar17 = *(long **)(auVar32._0_8_ + 0x40);
                    if (plVar17 == (long *)0x0) {
                      auVar32 = func_0x03280cac();
                      plVar14 = plVar27;
                      plVar17 = plVar15;
                      if (plVar15[7] == 0) {
                        func_0x03280a18(PTR_DAT_077507d0);
                        func_0x03280a18(PTR_DAT_0775a958);
                        func_0x03280a18(PTR_DAT_07750838);
                        func_0x03280a18(PTR_DAT_0777ab28);
                        func_0x03280a18(PTR_DAT_07779e90);
                        if (plVar15[7] == 0) {
                          func_0x03256878(plVar15);
                        }
                      }
                      plVar19 = *(long **)(auVar32._0_8_ + 0x40);
                      lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                      func_0x04fe1fa4(lVar21,*(undefined8 *)PTR_DAT_0775a958);
                      if (lVar21 != 0) {
                        plVar17 = *(long **)PTR_DAT_077507d0;
                        func_0x04fe2d7c(lVar21,*(undefined8 *)PTR_DAT_07779e90);
                        plVar14 = plVar27;
                        if (plVar19 != (long *)0x0) {
                          lVar23 = *plVar19;
                          lVar22 = *(long *)(plVar15[7] + 8);
                          uVar28 = *(undefined8 *)PTR_DAT_0777ab28;
                          uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
                          if (uVar25 != 0) {
                            piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
                                lVar23 = lVar23 + (long)(int)(*piVar26 +
                                                             (uint)*(ushort *)(lVar22 + 0x50)) *
                                                  0x10 + 0x138;
                                goto LAB_03e40cdc;
                              }
                              uVar25 = uVar25 - 1;
                              piVar26 = piVar26 + 4;
                            } while (uVar25 != 0);
                          }
                          lVar23 = func_0x03256b10(plVar19);
LAB_03e40cdc:
                          lVar23 = func_0x03280b88(*(undefined8 *)(lVar23 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          plVar27 = (long *)(**(code **)(lVar23 + 8))
                                                      (plVar19,uVar28,auVar32._8_8_,lVar21,lVar23);
                          return plVar27;
                        }
                      }
                      auVar32 = func_0x03280cac();
                      plVar27 = plVar14;
                      if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab30), plVar14[7] == 0))
                      {
                        func_0x03256878(plVar14);
                      }
                      plVar15 = *(long **)(auVar32._0_8_ + 0x40);
                      if (plVar15 == (long *)0x0) {
                        auVar32 = func_0x03280cac();
                        plVar14 = plVar27;
                        plVar15 = plVar17;
                        if (plVar17[7] == 0) {
                          func_0x03280a18(PTR_DAT_077507d0);
                          func_0x03280a18(PTR_DAT_0775a958);
                          func_0x03280a18(PTR_DAT_07750838);
                          func_0x03280a18(PTR_DAT_07779e90);
                          func_0x03280a18(PTR_DAT_0777ab38);
                          if (plVar17[7] == 0) {
                            func_0x03256878(plVar17);
                          }
                        }
                        plVar19 = *(long **)(auVar32._0_8_ + 0x40);
                        lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                        func_0x04fe1fa4(lVar21,*(undefined8 *)PTR_DAT_0775a958);
                        if (lVar21 != 0) {
                          plVar15 = *(long **)PTR_DAT_077507d0;
                          func_0x04fe2d7c(lVar21,*(undefined8 *)PTR_DAT_07779e90,plVar27,plVar15);
                          plVar14 = plVar27;
                          if (plVar19 != (long *)0x0) {
                            lVar23 = *plVar19;
                            lVar22 = *(long *)(plVar17[7] + 8);
                            uVar28 = *(undefined8 *)PTR_DAT_0777ab38;
                            uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
                            if (uVar25 != 0) {
                              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
                                  lVar23 = lVar23 + (long)(int)(*piVar26 +
                                                               (uint)*(ushort *)(lVar22 + 0x50)) *
                                                    0x10 + 0x138;
                                  goto LAB_03e40f1c;
                                }
                                uVar25 = uVar25 - 1;
                                piVar26 = piVar26 + 4;
                              } while (uVar25 != 0);
                            }
                            lVar23 = func_0x03256b10(plVar19);
LAB_03e40f1c:
                            lVar23 = func_0x03280b88(*(undefined8 *)(lVar23 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            plVar27 = (long *)(**(code **)(lVar23 + 8))
                                                        (plVar19,uVar28,auVar32._8_8_,lVar21,lVar23)
                            ;
                            return plVar27;
                          }
                        }
                        auVar32 = func_0x03280cac();
                        if (*(long *)(lVar22 + 0x38) == 0) {
                          func_0x03280a18(PTR_DAT_0777ab40);
                          func_0x03280a18(PTR_DAT_0777ab48);
                          if (*(long *)(lVar22 + 0x38) == 0) {
                            func_0x03256878(lVar22);
                          }
                        }
                        lVar23 = *(long *)PTR_DAT_0777ab40;
                        lVar21 = *(long *)(lVar23 + 0x38);
                        if (lVar21 == 0) {
                          func_0x03256878(lVar23);
                          lVar21 = *(long *)(lVar23 + 0x38);
                        }
                        lVar21 = *(long *)(lVar21 + 0x10);
                        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                          lVar21 = func_0x0325681c();
                        }
                        if (*(int *)(lVar21 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        lVar21 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
                        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                          lVar21 = func_0x0325681c();
                        }
                        uVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 0x10))
                                           (auVar32._8_8_,plVar14,**(undefined8 **)(lVar21 + 0xb8));
                        plVar27 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
                        func_0x05a85e88(plVar27,auVar32._0_8_,plVar15,uVar25 & 0xffffffff,uVar28,0);
                        return plVar27;
                      }
                      lVar21 = *plVar15;
                      lVar23 = *(long *)(plVar14[7] + 8);
                      uVar28 = *(undefined8 *)PTR_DAT_0777ab30;
                      uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
                      if (uVar25 != 0) {
                        piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                            lVar21 = lVar21 + (long)(int)(*piVar26 +
                                                         (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 +
                                     0x138;
                            goto LAB_03e40dbc;
                          }
                          uVar25 = uVar25 - 1;
                          piVar26 = piVar26 + 4;
                        } while (uVar25 != 0);
                      }
                      lVar21 = func_0x03256b10(plVar15);
LAB_03e40dbc:
                      lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      plVar27 = (long *)(**(code **)(lVar21 + 8))
                                                  (plVar15,uVar28,auVar32._8_8_,0,lVar21);
                      return plVar27;
                    }
                    lVar21 = *plVar17;
                    lVar23 = *(long *)(plVar14[7] + 8);
                    uVar28 = *(undefined8 *)PTR_DAT_0777ab20;
                    uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
                    if (uVar25 != 0) {
                      piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                          lVar21 = lVar21 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50))
                                            * 0x10 + 0x138;
                          goto LAB_03e40b7c;
                        }
                        uVar25 = uVar25 - 1;
                        piVar26 = piVar26 + 4;
                      } while (uVar25 != 0);
                    }
                    lVar21 = func_0x03256b10(plVar17);
LAB_03e40b7c:
                    lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    plVar27 = (long *)(**(code **)(lVar21 + 8))
                                                (plVar17,uVar28,auVar32._8_8_,0,lVar21);
                    return plVar27;
                  }
                  lVar21 = *plVar17;
                  lVar23 = *(long *)(plVar27[7] + 8);
                  uVar28 = *(undefined8 *)PTR_DAT_0777ab18;
                  uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar25 != 0) {
                    piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                        lVar21 = lVar21 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_03e40a9c;
                      }
                      uVar25 = uVar25 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar25 != 0);
                  }
                  lVar21 = func_0x03256b10(plVar17);
LAB_03e40a9c:
                  lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar27 = (long *)(**(code **)(lVar21 + 8))(plVar17,uVar28,auVar32._8_8_,0,lVar21)
                  ;
                  return plVar27;
                }
                lVar21 = *plVar14;
                lVar23 = *(long *)PTR_DAT_0777ab08;
                uVar31 = *(undefined8 *)PTR_DAT_0777ab10;
                uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
                if (uVar25 != 0) {
                  piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                      lVar21 = lVar21 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_03e409bc;
                    }
                    uVar25 = uVar25 - 1;
                    piVar26 = piVar26 + 4;
                  } while (uVar25 != 0);
                }
                lVar21 = func_0x03256b10(plVar14);
LAB_03e409bc:
                lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e409ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar27 = (long *)(**(code **)(lVar21 + 8))(plVar14,uVar31,uVar28,0,lVar21);
                return plVar27;
              }
              lVar21 = *plVar17;
              lVar23 = *(long *)(plVar14[7] + 8);
              uVar28 = *(undefined8 *)PTR_DAT_0777aaf0;
              uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
              if (uVar25 != 0) {
                piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                    lVar21 = lVar21 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_03e40894;
                  }
                  uVar25 = uVar25 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar25 != 0);
              }
              lVar21 = func_0x03256b10(plVar17);
LAB_03e40894:
              lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e408c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar27 = (long *)(**(code **)(lVar21 + 8))(plVar17,uVar28,auVar32._8_8_,0,lVar21);
              return plVar27;
            }
            lVar21 = *plVar17;
            lVar23 = *(long *)(plVar27[7] + 8);
            uVar28 = *(undefined8 *)PTR_DAT_0777aae8;
            uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar25 != 0) {
              piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                  lVar21 = lVar21 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03e407b4;
                }
                uVar25 = uVar25 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar25 != 0);
            }
            lVar21 = func_0x03256b10(plVar17);
LAB_03e407b4:
            lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e407e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar27 = (long *)(**(code **)(lVar21 + 8))(plVar17,uVar28,auVar32._8_8_,0,lVar21);
            return plVar27;
          }
          lVar21 = *plVar17;
          lVar23 = *(long *)(plVar14[7] + 8);
          uVar28 = *(undefined8 *)PTR_DAT_0777aae0;
          uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar25 != 0) {
            piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                lVar21 = lVar21 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_03e406d4;
              }
              uVar25 = uVar25 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar25 != 0);
          }
          lVar21 = func_0x03256b10(plVar17);
LAB_03e406d4:
          lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar27 = (long *)(**(code **)(lVar21 + 8))(plVar17,uVar28,auVar32._8_8_,0,lVar21);
          return plVar27;
        }
        lVar21 = *plVar17;
        lVar23 = *(long *)(plVar27[7] + 8);
        uVar28 = *(undefined8 *)PTR_DAT_0777aad8;
        uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
              lVar21 = lVar21 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_03e405f4;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        lVar21 = func_0x03256b10(plVar17);
LAB_03e405f4:
        lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar27 = (long *)(**(code **)(lVar21 + 8))(plVar17,uVar28,auVar32._8_8_,0,lVar21);
        return plVar27;
      }
      lVar21 = *plVar17;
      lVar23 = *(long *)(plVar14[7] + 8);
      uVar28 = *(undefined8 *)PTR_DAT_0777aad0;
      uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
            lVar21 = lVar21 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_03e40514;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      lVar21 = func_0x03256b10(plVar17);
LAB_03e40514:
      lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar27 = (long *)(**(code **)(lVar21 + 8))(plVar17,uVar28,auVar32._8_8_,0,lVar21);
      return plVar27;
    }
    lVar21 = *plVar17;
    lVar23 = *(long *)(plVar27[7] + 8);
    uVar28 = *(undefined8 *)PTR_DAT_0777aac8;
    uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
          lVar21 = lVar21 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40434;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    lVar21 = func_0x03256b10(plVar17);
LAB_03e40434:
    lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar27 = (long *)(**(code **)(lVar21 + 8))(plVar17,uVar28,auVar32._8_8_,0,lVar21);
    return plVar27;
  }
  lVar21 = *plVar17;
  lVar23 = *(long *)(plVar14[7] + 8);
  uVar28 = *(undefined8 *)PTR_DAT_0777aac0;
  uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
        lVar21 = lVar21 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40354;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  lVar21 = func_0x03256b10(plVar17);
LAB_03e40354:
  lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar27 = (long *)(**(code **)(lVar21 + 8))(plVar17,uVar28,auVar32._8_8_,0,lVar21);
  return plVar27;
}

