/* Ghidra 12.1.2 native pseudocode; RVA 0x66639E4; MergeEngine.ECS.Systems.Board.BoardQueueSystem.TryDequeueItem; status ok */

/* WARNING: Possible PIC construction at 0x06763a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06763b10: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x06763b14) */
/* WARNING: Removing unreachable block (ram,0x06763a50) */
/* WARNING: Removing unreachable block (ram,0x06763a58) */
/* WARNING: Removing unreachable block (ram,0x06763a88) */
/* WARNING: Removing unreachable block (ram,0x06763a90) */
/* WARNING: Removing unreachable block (ram,0x06763ab4) */
/* WARNING: Removing unreachable block (ram,0x06763a9c) */
/* WARNING: Removing unreachable block (ram,0x06763aa8) */
/* WARNING: Removing unreachable block (ram,0x06763ac4) */
/* WARNING: Removing unreachable block (ram,0x06763aec) */
/* WARNING: Removing unreachable block (ram,0x06763af0) */
/* WARNING: Removing unreachable block (ram,0x06763af4) */
/* WARNING: Removing unreachable block (ram,0x06763dc0) */
/* WARNING: Removing unreachable block (ram,0x03e4016c) */
/* WARNING: Removing unreachable block (ram,0x03e40178) */
/* WARNING: Removing unreachable block (ram,0x03e40190) */
/* WARNING: Removing unreachable block (ram,0x03e40198) */
/* WARNING: Removing unreachable block (ram,0x03e401d0) */
/* WARNING: Removing unreachable block (ram,0x03e401a4) */
/* WARNING: Removing unreachable block (ram,0x03e401b0) */
/* WARNING: Removing unreachable block (ram,0x03e401dc) */

long * MergeEngine_ECS_Systems_Board_BoardQueueSystem__TryDequeueItem
                 (undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],
                 undefined8 param_4,long param_5,undefined8 param_6,long *param_7,long *param_8,
                 long *param_9,long *param_10,long *param_11,ulong param_12)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *extraout_x1;
  long *extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  long lVar27;
  long *plVar28;
  undefined *unaff_x21;
  undefined8 uVar29;
  long *plVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined1 auVar33 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  long *plStack_190;
  ulong uStack_188;
  long *plStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint uStack_100;
  byte bStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_80;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  puVar5 = auStack_60;
  lVar27 = 0x7e28000;
  uVar32 = param_2;
  if ((bRam0000000007e280a8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772080);
    func_0x03280a18(PTR_DAT_07807c08);
    bRam0000000007e280a8 = 1;
  }
  uStack_58 = 0;
  if (*(ulong *)(param_5 + 0x80) != 0) {
    auVar33._8_8_ = 0;
    auVar33._0_8_ = *(ulong *)(param_5 + 0x80);
    uVar32 = 0x6763a50;
    goto SUB_06a04354;
  }
  lVar27 = func_0x03280cac();
  uStack_80 = 0x6763b38;
  if ((bRam0000000007e280a7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff48);
    func_0x03280a18(PTR_DAT_07807c10);
    bRam0000000007e280a7 = 1;
  }
  plVar28 = *(long **)(lVar27 + 0xa8);
  if (plVar28 != (long *)0x0) {
    lVar22 = *plVar28;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    uVar29 = *(undefined8 *)PTR_DAT_07807c10;
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777ff48) {
          puVar9 = (undefined8 *)(lVar22 + (long)(*piVar26 + 7) * 0x10 + 0x138);
          goto LAB_06763bdc;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_0777ff48,7);
LAB_06763bdc:
    param_7 = (long *)puVar9[1];
    (*(code *)*puVar9)(0x3f800000,plVar28,uVar29);
    lVar22 = *(long *)(lVar27 + 0x80);
    if (lVar22 != 0) {
      uVar29 = 0;
      puVar4 = &uStack_80;
      if ((bRam0000000007e29918 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07752c80,0);
        func_0x03280a18(PTR_DAT_078269a0);
        func_0x03280a18(PTR_DAT_07826980);
        func_0x03280a18(PTR_DAT_078269a8);
        bRam0000000007e29918 = 1;
        uVar29 = extraout_x1_01;
      }
      uVar32 = 0x6a04198;
      do {
        *(undefined8 *)((long)puVar4 + -0x20) = uVar32;
        *(undefined8 *)((long)puVar4 + -0x10) = 0x7e29000;
        *(long *)((long)puVar4 + -8) = lVar22;
        if ((bRam0000000007e29920 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07826908,uVar29);
          func_0x03280a18(PTR_DAT_07826998);
          func_0x03280a18(PTR_DAT_078269b0);
          bRam0000000007e29920 = 1;
        }
        lVar27 = *(long *)(lVar22 + 0x28);
        if (lVar27 != 0) {
          if (0 < *(int *)(lVar27 + 0x18)) {
            return *(long **)(lVar27 + 0x10);
          }
          lVar27 = *(long *)(lVar22 + 0x30);
          if (lVar27 != 0) {
            if (*(int *)(lVar27 + 0x18) < 1) {
              return (long *)0x0;
            }
            uVar32 = *(undefined8 *)PTR_DAT_078269b0;
            if (*(long *)(lVar27 + 0x10) == 0) {
              return (long *)0x0;
            }
            return *(long **)(*(long *)(lVar27 + 0x10) + 0x20);
          }
        }
        auVar33 = func_0x03280cac();
        lVar27 = auVar33._8_8_;
        param_5 = auVar33._0_8_;
        puVar5 = (undefined1 *)((long)puVar4 + -0x40);
        *(undefined8 *)((long)puVar4 + -0x40) = 0x6a0429c;
        *(undefined **)((long)puVar4 + -0x38) = unaff_x21;
        *(undefined8 *)((long)puVar4 + -0x30) = 0x7e29000;
        *(long *)((long)puVar4 + -0x28) = lVar22;
        if ((bRam0000000007e29919 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07752c80);
          func_0x03280a18(PTR_DAT_078269b8);
          bRam0000000007e29919 = 1;
        }
        puVar2 = PTR_DAT_078269b8;
        unaff_x21 = (undefined *)0x7e29000;
        if (*(long *)(param_5 + 0x28) != 0) {
          uVar25 = func_0x054f0d40(*(long *)(param_5 + 0x28),lVar27,*(undefined8 *)PTR_DAT_078269b8)
          ;
          unaff_x21 = puVar2;
          if ((uVar25 & 1) == 0) {
            if (*(long *)(param_5 + 0x30) == 0) goto LAB_06a04350;
            uVar25 = func_0x054f0d40(*(long *)(param_5 + 0x30),lVar27,*(undefined8 *)puVar2);
            if ((uVar25 & 1) == 0) {
              return (long *)0x0;
            }
          }
          if ((lVar27 != 0) && (*(long *)(param_5 + 0x38) != 0)) {
            func_0x053c1024(*(long *)(param_5 + 0x38),*(undefined8 *)(lVar27 + 0x20),
                            *(undefined8 *)PTR_DAT_07752c80);
            func_0x06a03fd0(param_5);
            return (long *)0x1;
          }
        }
LAB_06a04350:
        uVar32 = 0x6a04354;
        auVar33 = func_0x03280cac();
SUB_06a04354:
        uVar29 = auVar33._8_8_;
        lVar22 = auVar33._0_8_;
        puVar4 = (undefined8 *)(puVar5 + -0x20);
        *(undefined8 *)(puVar5 + -0x20) = uVar32;
        *(long *)(puVar5 + -0x10) = lVar27;
        *(long *)(puVar5 + -8) = param_5;
        if ((bRam0000000007e2991a & 1) == 0) {
          func_0x03280a18(PTR_DAT_07826980,uVar29);
          bRam0000000007e2991a = 1;
          uVar29 = extraout_x1_02;
        }
        uVar32 = 0x6a04388;
      } while( true );
    }
  }
  lVar27 = func_0x03280cac();
  uStack_d0 = 0x6763c0c;
  plVar28 = param_7;
  plVar15 = param_8;
  plVar16 = param_9;
  plVar18 = param_10;
  plVar20 = param_11;
  uVar25 = param_12;
  uVar29 = uVar32;
  uStack_e0 = param_2;
  uStack_d8 = param_4;
  if ((bRam0000000007e280a9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c288);
    func_0x03280a18(PTR_DAT_0777a940);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777c290);
    bRam0000000007e280a9 = 1;
  }
  if (extraout_x1 == (long *)0x0) {
LAB_06763de4:
    lVar27 = func_0x03280cac();
    plVar10 = extraout_x1_00;
    param_9 = plVar20;
    uVar12 = extraout_d0_00;
  }
  else {
    plVar10 = (long *)func_0x03280b90(extraout_x1[2],*(undefined8 *)PTR_DAT_0777e548);
    *param_8 = 0;
    if (plVar10 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(long *)(lVar27 + 0x70) == 0) ||
       (lVar22 = *(long *)(*(long *)(lVar27 + 0x70) + 0x88), lVar22 == 0)) goto LAB_06763de4;
    uVar11 = func_0x06a022d4(lVar22,0);
    if ((uVar11 & 1) != 0) {
      if (((ulong)param_7 & 1) == 0) {
        return (long *)0x0;
      }
      lVar27 = *(long *)(lVar27 + 0x28);
      uStack_e8 = 0;
      func_0x069fdc94(&uStack_e8,1,0,0);
      uVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777c288);
      plVar28 = (long *)0x6;
      plVar15 = (long *)0x0;
      plVar16 = (long *)0x0;
      plVar18 = (long *)0x0;
      plVar20 = (long *)0x0;
      func_0x0686aa28(uVar12,uStack_e8);
      if (lVar27 != 0) {
        func_0x03ea4d6c(lVar27,uVar12,*(undefined8 *)PTR_DAT_0777c290);
        return (long *)0x0;
      }
      goto LAB_06763de4;
    }
    plVar18 = (long *)extraout_x1[7];
    bStack_f8 = (byte)param_12 & 1;
    uVar25 = (ulong)((uint)param_10 & 1);
    plVar15 = (long *)0x0;
    plVar16 = (long *)0x0;
    uStack_100 = (uint)param_11;
    plVar28 = extraout_x1;
    uVar12 = extraout_d0;
    uVar29 = uVar32;
  }
  plVar20 = plVar28;
  plVar14 = plVar15;
  plVar17 = plVar16;
  plVar19 = plVar18;
  uStack_170 = extraout_d0;
  uStack_168 = uVar32;
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
  plVar30 = *(long **)(lVar27 + 0x40);
  lVar22 = 0;
  if (plVar30 != (long *)0x0) {
    lVar22 = *plVar30;
    uVar11 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar11 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar9 = (undefined8 *)(lVar22 + (long)(*piVar26 + 0x13) * 0x10 + 0x138);
          goto LAB_06763f38;
        }
        uVar11 = uVar11 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0777a498,0x13);
LAB_06763f38:
    uVar11 = (*(code *)*puVar9)(plVar30,plVar10,puVar9[1]);
    lVar22 = *(long *)(lVar27 + 0x28);
    plVar20 = (long *)(uVar11 & 0xffffffff);
    uVar32 = func_0x03280ca0(*(undefined8 *)puVar2);
    plVar19 = (long *)0x0;
    plVar14 = plVar15;
    plVar17 = plVar16;
    func_0x060f37c0(uVar32,plVar10);
    if (lVar22 != 0) {
      plVar20 = *(long **)PTR_DAT_07807c30;
      func_0x03ea4d6c(lVar22,uVar32);
      lVar23 = *(long *)(lVar27 + 0xf0);
      if (lVar23 != 0) {
        (**(code **)(lVar23 + 0x18))(*(undefined8 *)(lVar23 + 0x40),*(undefined8 *)(lVar23 + 0x28));
      }
      if (*(long *)(lVar27 + 0x70) != 0) {
        lVar22 = MergeEngine_ECS_Systems_Board_BoardSystem__GetRandomAvailablePosition();
        plVar20 = plVar10;
        plVar14 = plVar28;
        plVar30 = (long *)func_0x0676498c(lVar27,lVar22);
        if (plVar30 != (long *)0x0) {
          lVar23 = func_0x03d20d84(plVar30,*(undefined8 *)PTR_DAT_0777a958);
          plVar28 = plVar30;
          if (lVar23 != 0) {
            plVar10 = (long *)(lVar23 + 0x48);
            lVar23 = *plVar10;
            if (lVar23 == 0) {
              lVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e5f0);
              func_0x069fe0e4(lVar23,0);
              *plVar10 = lVar23;
              func_0x032809c4(plVar10,lVar23);
              lVar23 = *plVar10;
              if (lVar23 == 0) goto LAB_0676431c;
            }
            *(long *)(lVar23 + 0x28) = (long)plVar18;
            func_0x032809c4((long *)(lVar23 + 0x28),plVar18);
          }
          if (plVar16 != (long *)0x0) {
            plVar13 = (long *)func_0x03d203e4(plVar30,*(undefined8 *)PTR_DAT_07807c20);
            if (plVar13 == (long *)0x0) goto LAB_0676431c;
            plVar13[4] = (long)plVar16;
            func_0x032809c4(plVar13 + 4,plVar16);
            if (plVar15 == (long *)0x0) {
              lVar23 = 0;
            }
            else {
              lVar23 = *plVar15;
              uVar11 = (ulong)*(ushort *)(lVar23 + 0x12e);
              if (uVar11 != 0) {
                piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_07779820) {
                    puVar9 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
                    goto LAB_067640cc;
                  }
                  uVar11 = uVar11 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar11 != 0);
              }
              plVar20 = (long *)0x0;
              puVar9 = (undefined8 *)func_0x03256b10(plVar15);
LAB_067640cc:
              lVar23 = (*(code *)*puVar9)(plVar15,puVar9[1]);
              plVar16 = plVar13;
              plVar18 = plVar13;
              if (plVar15 == (long *)0x0) goto LAB_0676431c;
            }
            plVar18 = plVar13 + 5;
            *plVar18 = lVar23;
            func_0x032809c4(plVar18);
            *(undefined1 *)(plVar13 + 6) = 1;
          }
          plVar16 = (long *)(ulong)uStack_100;
          uVar11 = func_0x055f7aac(param_9,0);
          if ((uVar11 & 1) == 0) {
            plVar18 = *(long **)(lVar27 + 0xd8);
            if (plVar18 == (long *)0x0) goto LAB_0676431c;
            lVar23 = *plVar18;
            lVar31 = *(long *)PTR_DAT_07772080;
            plVar10 = *(long **)PTR_DAT_07807c38;
            uVar11 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar11 != 0) {
              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)(lVar31 + 0x20)) {
                  lVar23 = lVar23 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar31 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_0676417c;
                }
                uVar11 = uVar11 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar11 != 0);
            }
            lVar23 = func_0x03256b10(plVar18);
LAB_0676417c:
            plVar14 = (long *)func_0x03280b88(*(undefined8 *)(lVar23 + 8),lVar31);
            plVar20 = (long *)0x1;
            uVar11 = (*(code *)plVar14[1])(plVar18,plVar10);
            if ((uStack_100 != 0x69) && ((uVar11 & 1) != 0)) {
              lVar23 = func_0x03d203e4(plVar30,*(undefined8 *)PTR_DAT_07807c18);
              if (lVar23 == 0) goto LAB_0676431c;
              plVar18 = (long *)(lVar23 + 0x20);
              *plVar18 = (long)param_9;
              func_0x032809c4(plVar18,param_9);
              *(uint *)(lVar23 + 0x28) = uStack_100;
            }
          }
          param_9 = *(long **)(lVar27 + 0x10);
          if (param_9 != (long *)0x0) {
            lVar23 = *param_9;
            plVar18 = (long *)(ulong)bStack_f8;
            uVar11 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar11 != 0) {
              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777e5c0) {
                  puVar9 = (undefined8 *)(lVar23 + (long)(*piVar26 + 5) * 0x10 + 0x138);
                  goto LAB_06764240;
                }
                uVar11 = uVar11 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar11 != 0);
            }
            puVar9 = (undefined8 *)func_0x03256b10(param_9,*(long *)PTR_DAT_0777e5c0,5);
LAB_06764240:
            plVar20 = (long *)puVar9[1];
            (*(code *)*puVar9)(param_9,plVar30);
            if ((bStack_f8 & 1) != 0) {
              return plVar30;
            }
            if (plVar15 == (long *)0x0) {
              func_0x06764e18(uVar12,uVar29,lVar27,lVar22,(uint)uVar25 & 1,plVar16);
              return plVar30;
            }
            lVar23 = *plVar15;
            uVar11 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar11 != 0) {
              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_077797a8) {
                  puVar9 = (undefined8 *)(lVar23 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                  goto LAB_067642d0;
                }
                uVar11 = uVar11 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar11 != 0);
            }
            plVar20 = (long *)0x1;
            puVar9 = (undefined8 *)func_0x03256b10(plVar15);
LAB_067642d0:
            lVar23 = (*(code *)*puVar9)(plVar15,puVar9[1]);
            if (lVar23 != 0) {
              func_0x06764b04(uVar12,uVar29,lVar27,lVar22,*(undefined4 *)(lVar23 + 0x14));
              return plVar30;
            }
          }
        }
      }
    }
  }
LAB_0676431c:
  auVar33 = func_0x03280cac();
  lVar23 = auVar33._0_8_;
  uStack_1c0 = 0x6764320;
  plStack_1b8 = plVar10;
  plStack_1b0 = plVar18;
  plStack_1a8 = plVar16;
  lStack_1a0 = lVar22;
  plStack_198 = plVar28;
  plStack_190 = param_9;
  uStack_188 = uVar25 & 0xffffffff;
  plStack_180 = plVar15;
  lStack_178 = lVar27;
  if ((bRam0000000007e280b5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07807c40);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_077c1e18);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e280b5 = 1;
  }
  puVar2 = PTR_DAT_0777e4a0;
  plVar28 = *(long **)(lVar23 + 0x50);
  if (plVar28 == (long *)0x0) {
LAB_067644f0:
    func_0x03280cac();
    puVar2 = PTR_DAT_07807c48;
    uStack_1c8 = plVar14;
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
    plVar28 = (long *)func_0x03280ca0(*(undefined8 *)puVar2);
    return plVar28;
  }
  lVar27 = *plVar28;
  uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
  uVar32 = *(undefined8 *)PTR_DAT_0777e5f8;
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777e4a0) {
        puVar9 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_06764404;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  puVar9 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_0777e4a0,0);
LAB_06764404:
  plVar28 = (long *)(*(code *)*puVar9)(plVar28,uVar32,plVar17,plVar19,0,puVar9[1]);
  plVar15 = *(long **)(lVar23 + 0x50);
  if (plVar15 == (long *)0x0) goto LAB_067644f0;
  lVar27 = *plVar15;
  uVar29 = *(undefined8 *)PTR_DAT_0776b160;
  uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
  uVar32 = *(undefined8 *)PTR_DAT_077c1e18;
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == *(long *)puVar2) {
        puVar9 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_06764490;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  puVar9 = (undefined8 *)func_0x03256b10(plVar15,*(long *)puVar2,0);
LAB_06764490:
  lVar27 = (*(code *)*puVar9)(plVar15,uVar29,auVar33._8_8_,plVar20,uVar32,puVar9[1]);
  lVar22 = *(long *)(lVar23 + 0x68);
  if (lVar22 == 0) goto LAB_067644f0;
  lVar31 = *(long *)PTR_DAT_07807c40;
  uVar25 = 0;
  lVar23 = 0;
  plVar15 = plVar14;
  plVar16 = plVar28;
  if (*(long *)(lVar31 + 0x38) == 0) {
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
    if (*(long *)(lVar31 + 0x38) == 0) {
      func_0x03256878(lVar31);
    }
  }
  lVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
  func_0x06a30df4(lVar7,0);
  if (lVar7 == 0) goto LAB_03e402a8;
  *(undefined8 *)(lVar7 + 0x30) = plVar14;
  func_0x032809c4((undefined8 *)(lVar7 + 0x30),plVar14);
  if (lVar27 == 0) goto LAB_03e402a8;
  *(long *)(lVar27 + 0x20) = lVar7;
  func_0x032809c4((long *)(lVar27 + 0x20),lVar7);
  if ((*(byte *)(*(long *)(*(long *)(lVar31 + 0x38) + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar7 = func_0x03280ca0();
  func_0x04143c38(lVar7,*(undefined8 *)(*(long *)(lVar31 + 0x38) + 0x10));
  if (lVar7 == 0) goto LAB_03e402a8;
  lVar21 = *(long *)(lVar7 + 0x10);
  lVar24 = *(long *)(*(long *)(lVar31 + 0x38) + 0x18);
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (lVar21 == 0) goto LAB_03e402a8;
  uVar6 = *(uint *)(lVar7 + 0x18);
  if (uVar6 < *(uint *)(lVar21 + 0x18)) {
    *(uint *)(lVar7 + 0x18) = uVar6 + 1;
    plVar18 = (long *)(lVar21 + (long)(int)uVar6 * 8 + 0x20);
    *plVar18 = lVar27;
    func_0x032809c4(plVar18,lVar27);
    if (plVar28 == (long *)0x0) goto LAB_03e3ffbc;
LAB_03e3ff28:
    lVar27 = *(long *)(lVar7 + 0x10);
    lVar21 = *(long *)(*(long *)(lVar31 + 0x38) + 0x18);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar27 == 0) goto LAB_03e402a8;
    uVar6 = *(uint *)(lVar7 + 0x18);
    if (uVar6 < *(uint *)(lVar27 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar6 + 1;
      plVar18 = (long *)(lVar27 + (long)(int)uVar6 * 8 + 0x20);
      *plVar18 = (long)plVar28;
      func_0x032809c4(plVar18,plVar28);
    }
    else {
      plVar15 = *(long **)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(lVar7,plVar28);
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_0777aab0 + 0x130);
    if ((*(byte *)(*plVar28 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0777aab0))
    goto LAB_03e3ffbc;
    lVar27 = 0;
    if (plVar28[0x1b] != 0) {
      lVar27 = *(long *)(plVar28[0x1b] + 0x10);
    }
  }
  else {
    plVar15 = *(long **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70);
    func_0x0414446c(lVar7,lVar27);
    if (plVar28 != (long *)0x0) goto LAB_03e3ff28;
LAB_03e3ffbc:
    lVar27 = 0;
  }
  plVar28 = *(long **)(lVar22 + 0x48);
  lVar21 = 0;
  if (lVar27 != 0) {
    lVar21 = lVar27;
  }
  if (plVar28 != (long *)0x0) {
    lVar27 = *plVar28;
    uVar11 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar11 != 0) {
      piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777aaa8) {
          puVar9 = (undefined8 *)(lVar27 + (long)(*piVar26 + 9) * 0x10 + 0x138);
          goto LAB_03e40028;
        }
        uVar11 = uVar11 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar11 != 0);
    }
    plVar15 = (long *)0x9;
    puVar9 = (undefined8 *)func_0x03256b10(plVar28);
LAB_03e40028:
    lVar27 = (*(code *)*puVar9)(plVar28,puVar9[1]);
    if (lVar27 != 0) {
      lVar24 = *(long *)(*(long *)(lVar31 + 0x38) + 0x28);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      if (*(int *)(lVar24 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar24 = *(long *)(*(long *)(lVar31 + 0x38) + 0x28);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0xb8) + 8);
      if (lVar24 == 0) {
        lVar24 = *(long *)(*(long *)(lVar31 + 0x38) + 0x28);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c();
        }
        if (*(int *)(lVar24 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar24 = *(long *)(*(long *)(lVar31 + 0x38) + 0x28);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c();
        }
        uVar32 = **(undefined8 **)(lVar24 + 0xb8);
        lVar24 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aaa0);
        plVar16 = (long *)0x0;
        func_0x053569b8(lVar24,uVar32,*(undefined8 *)(*(long *)(lVar31 + 0x38) + 0x30));
        lVar8 = *(long *)(*(long *)(lVar31 + 0x38) + 0x28);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        *(long *)(*(long *)(lVar8 + 0xb8) + 8) = lVar24;
        lVar8 = *(long *)(*(long *)(lVar31 + 0x38) + 0x28);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        func_0x032809c4(*(long *)(lVar8 + 0xb8) + 8,lVar24);
      }
      uVar32 = func_0x03d50a94(lVar27,lVar24,*(undefined8 *)PTR_DAT_0777aa90);
      uVar6 = func_0x03d37bc0(uVar32,lVar21,*(undefined8 *)PTR_DAT_0776aeb0);
      uStack_1c8._0_6_ = (uint6)(uint)uStack_1c8;
      plVar15 = *(long **)PTR_DAT_07751420;
      func_0x04377614((long)&uStack_1c8 + 4,uVar6 & 1);
    }
  }
  plVar28 = *(long **)(lVar22 + 0x40);
  if (plVar28 != (long *)0x0) {
    lVar27 = *plVar28;
    lVar22 = *(long *)(*(long *)(lVar31 + 0x38) + 0x38);
    uVar32 = *(undefined8 *)PTR_DAT_0777aab8;
    uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
          lVar27 = lVar27 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40264;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    lVar27 = func_0x03256b10(plVar28);
LAB_03e40264:
    lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
    plVar28 = (long *)(**(code **)(lVar27 + 8))(plVar28,uVar32,lVar7,0,lVar27);
    return plVar28;
  }
LAB_03e402a8:
  auVar33 = func_0x03280cac();
  plVar28 = plVar15;
  if ((plVar15[7] == 0) && (func_0x03280a18(PTR_DAT_0777aac0), plVar15[7] == 0)) {
    func_0x03256878(plVar15);
  }
  plVar18 = *(long **)(auVar33._0_8_ + 0x40);
  if (plVar18 == (long *)0x0) {
    auVar33 = func_0x03280cac();
    plVar15 = plVar28;
    if ((plVar28[7] == 0) && (func_0x03280a18(PTR_DAT_0777aac8), plVar28[7] == 0)) {
      func_0x03256878(plVar28);
    }
    plVar18 = *(long **)(auVar33._0_8_ + 0x40);
    if (plVar18 == (long *)0x0) {
      auVar33 = func_0x03280cac();
      plVar28 = plVar15;
      if ((plVar15[7] == 0) && (func_0x03280a18(PTR_DAT_0777aad0), plVar15[7] == 0)) {
        func_0x03256878(plVar15);
      }
      plVar18 = *(long **)(auVar33._0_8_ + 0x40);
      if (plVar18 == (long *)0x0) {
        auVar33 = func_0x03280cac();
        plVar15 = plVar28;
        if ((plVar28[7] == 0) && (func_0x03280a18(PTR_DAT_0777aad8), plVar28[7] == 0)) {
          func_0x03256878(plVar28);
        }
        plVar18 = *(long **)(auVar33._0_8_ + 0x40);
        if (plVar18 == (long *)0x0) {
          auVar33 = func_0x03280cac();
          plVar28 = plVar15;
          if ((plVar15[7] == 0) && (func_0x03280a18(PTR_DAT_0777aae0), plVar15[7] == 0)) {
            func_0x03256878(plVar15);
          }
          plVar18 = *(long **)(auVar33._0_8_ + 0x40);
          if (plVar18 == (long *)0x0) {
            auVar33 = func_0x03280cac();
            plVar15 = plVar28;
            if ((plVar28[7] == 0) && (func_0x03280a18(PTR_DAT_0777aae8), plVar28[7] == 0)) {
              func_0x03256878(plVar28);
            }
            plVar18 = *(long **)(auVar33._0_8_ + 0x40);
            if (plVar18 == (long *)0x0) {
              auVar33 = func_0x03280cac();
              plVar28 = plVar15;
              if ((plVar15[7] == 0) && (func_0x03280a18(PTR_DAT_0777aaf0), plVar15[7] == 0)) {
                func_0x03256878(plVar15);
              }
              plVar18 = *(long **)(auVar33._0_8_ + 0x40);
              if (plVar18 == (long *)0x0) {
                auVar33 = func_0x03280cac();
                puVar3 = PTR_DAT_0777ab00;
                puVar2 = PTR_DAT_0777aaf8;
                if ((bRam0000000007e17dbe & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0777aaf8);
                  func_0x03280a18(PTR_DAT_0777ab00);
                  func_0x03280a18(PTR_DAT_0777ab08);
                  func_0x03280a18(PTR_DAT_0777ab10);
                  bRam0000000007e17dbe = 1;
                }
                plVar15 = *(long **)(auVar33._0_8_ + 0x40);
                uVar32 = func_0x03d2c6a8(auVar33._8_8_,*(undefined8 *)puVar2);
                uVar32 = func_0x03d5ffd0(uVar32,*(undefined8 *)puVar3);
                if (plVar15 == (long *)0x0) {
                  auVar33 = func_0x03280cac();
                  plVar15 = plVar28;
                  if ((plVar28[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab18), plVar28[7] == 0)) {
                    func_0x03256878(plVar28);
                  }
                  plVar18 = *(long **)(auVar33._0_8_ + 0x40);
                  if (plVar18 == (long *)0x0) {
                    auVar33 = func_0x03280cac();
                    plVar28 = plVar15;
                    if ((plVar15[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab20), plVar15[7] == 0)) {
                      func_0x03256878(plVar15);
                    }
                    plVar18 = *(long **)(auVar33._0_8_ + 0x40);
                    if (plVar18 == (long *)0x0) {
                      auVar33 = func_0x03280cac();
                      plVar15 = plVar28;
                      plVar18 = plVar16;
                      if (plVar16[7] == 0) {
                        func_0x03280a18(PTR_DAT_077507d0);
                        func_0x03280a18(PTR_DAT_0775a958);
                        func_0x03280a18(PTR_DAT_07750838);
                        func_0x03280a18(PTR_DAT_0777ab28);
                        func_0x03280a18(PTR_DAT_07779e90);
                        if (plVar16[7] == 0) {
                          func_0x03256878(plVar16);
                        }
                      }
                      plVar20 = *(long **)(auVar33._0_8_ + 0x40);
                      lVar27 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                      func_0x04fe1fa4(lVar27,*(undefined8 *)PTR_DAT_0775a958);
                      if (lVar27 != 0) {
                        plVar18 = *(long **)PTR_DAT_077507d0;
                        func_0x04fe2d7c(lVar27,*(undefined8 *)PTR_DAT_07779e90);
                        plVar15 = plVar28;
                        if (plVar20 != (long *)0x0) {
                          lVar22 = *plVar20;
                          lVar23 = *(long *)(plVar16[7] + 8);
                          uVar32 = *(undefined8 *)PTR_DAT_0777ab28;
                          uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                          if (uVar25 != 0) {
                            piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                                lVar22 = lVar22 + (long)(int)(*piVar26 +
                                                             (uint)*(ushort *)(lVar23 + 0x50)) *
                                                  0x10 + 0x138;
                                goto LAB_03e40cdc;
                              }
                              uVar25 = uVar25 - 1;
                              piVar26 = piVar26 + 4;
                            } while (uVar25 != 0);
                          }
                          lVar22 = func_0x03256b10(plVar20);
LAB_03e40cdc:
                          lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          plVar28 = (long *)(**(code **)(lVar22 + 8))
                                                      (plVar20,uVar32,auVar33._8_8_,lVar27,lVar22);
                          return plVar28;
                        }
                      }
                      auVar33 = func_0x03280cac();
                      plVar28 = plVar15;
                      if ((plVar15[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab30), plVar15[7] == 0))
                      {
                        func_0x03256878(plVar15);
                      }
                      plVar16 = *(long **)(auVar33._0_8_ + 0x40);
                      if (plVar16 == (long *)0x0) {
                        auVar33 = func_0x03280cac();
                        plVar15 = plVar28;
                        plVar16 = plVar18;
                        if (plVar18[7] == 0) {
                          func_0x03280a18(PTR_DAT_077507d0);
                          func_0x03280a18(PTR_DAT_0775a958);
                          func_0x03280a18(PTR_DAT_07750838);
                          func_0x03280a18(PTR_DAT_07779e90);
                          func_0x03280a18(PTR_DAT_0777ab38);
                          if (plVar18[7] == 0) {
                            func_0x03256878(plVar18);
                          }
                        }
                        plVar20 = *(long **)(auVar33._0_8_ + 0x40);
                        lVar27 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                        func_0x04fe1fa4(lVar27,*(undefined8 *)PTR_DAT_0775a958);
                        if (lVar27 != 0) {
                          plVar16 = *(long **)PTR_DAT_077507d0;
                          func_0x04fe2d7c(lVar27,*(undefined8 *)PTR_DAT_07779e90,plVar28,plVar16);
                          plVar15 = plVar28;
                          if (plVar20 != (long *)0x0) {
                            lVar22 = *plVar20;
                            lVar23 = *(long *)(plVar18[7] + 8);
                            uVar32 = *(undefined8 *)PTR_DAT_0777ab38;
                            uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                            if (uVar25 != 0) {
                              piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                                  lVar22 = lVar22 + (long)(int)(*piVar26 +
                                                               (uint)*(ushort *)(lVar23 + 0x50)) *
                                                    0x10 + 0x138;
                                  goto LAB_03e40f1c;
                                }
                                uVar25 = uVar25 - 1;
                                piVar26 = piVar26 + 4;
                              } while (uVar25 != 0);
                            }
                            lVar22 = func_0x03256b10(plVar20);
LAB_03e40f1c:
                            lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            plVar28 = (long *)(**(code **)(lVar22 + 8))
                                                        (plVar20,uVar32,auVar33._8_8_,lVar27,lVar22)
                            ;
                            return plVar28;
                          }
                        }
                        auVar33 = func_0x03280cac();
                        if (*(long *)(lVar23 + 0x38) == 0) {
                          func_0x03280a18(PTR_DAT_0777ab40);
                          func_0x03280a18(PTR_DAT_0777ab48);
                          if (*(long *)(lVar23 + 0x38) == 0) {
                            func_0x03256878(lVar23);
                          }
                        }
                        lVar22 = *(long *)PTR_DAT_0777ab40;
                        lVar27 = *(long *)(lVar22 + 0x38);
                        if (lVar27 == 0) {
                          func_0x03256878(lVar22);
                          lVar27 = *(long *)(lVar22 + 0x38);
                        }
                        lVar27 = *(long *)(lVar27 + 0x10);
                        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
                          lVar27 = func_0x0325681c();
                        }
                        if (*(int *)(lVar27 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        lVar27 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
                        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
                          lVar27 = func_0x0325681c();
                        }
                        uVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 0x10))
                                           (auVar33._8_8_,plVar15,**(undefined8 **)(lVar27 + 0xb8));
                        plVar28 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
                        func_0x05a85e88(plVar28,auVar33._0_8_,plVar16,uVar25 & 0xffffffff,uVar32,0);
                        return plVar28;
                      }
                      lVar27 = *plVar16;
                      lVar22 = *(long *)(plVar15[7] + 8);
                      uVar32 = *(undefined8 *)PTR_DAT_0777ab30;
                      uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
                      if (uVar25 != 0) {
                        piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
                            lVar27 = lVar27 + (long)(int)(*piVar26 +
                                                         (uint)*(ushort *)(lVar22 + 0x50)) * 0x10 +
                                     0x138;
                            goto LAB_03e40dbc;
                          }
                          uVar25 = uVar25 - 1;
                          piVar26 = piVar26 + 4;
                        } while (uVar25 != 0);
                      }
                      lVar27 = func_0x03256b10(plVar16);
LAB_03e40dbc:
                      lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      plVar28 = (long *)(**(code **)(lVar27 + 8))
                                                  (plVar16,uVar32,auVar33._8_8_,0,lVar27);
                      return plVar28;
                    }
                    lVar27 = *plVar18;
                    lVar22 = *(long *)(plVar15[7] + 8);
                    uVar32 = *(undefined8 *)PTR_DAT_0777ab20;
                    uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
                    if (uVar25 != 0) {
                      piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
                          lVar27 = lVar27 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x50))
                                            * 0x10 + 0x138;
                          goto LAB_03e40b7c;
                        }
                        uVar25 = uVar25 - 1;
                        piVar26 = piVar26 + 4;
                      } while (uVar25 != 0);
                    }
                    lVar27 = func_0x03256b10(plVar18);
LAB_03e40b7c:
                    lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    plVar28 = (long *)(**(code **)(lVar27 + 8))
                                                (plVar18,uVar32,auVar33._8_8_,0,lVar27);
                    return plVar28;
                  }
                  lVar27 = *plVar18;
                  lVar22 = *(long *)(plVar28[7] + 8);
                  uVar32 = *(undefined8 *)PTR_DAT_0777ab18;
                  uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar25 != 0) {
                    piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
                        lVar27 = lVar27 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_03e40a9c;
                      }
                      uVar25 = uVar25 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar25 != 0);
                  }
                  lVar27 = func_0x03256b10(plVar18);
LAB_03e40a9c:
                  lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar28 = (long *)(**(code **)(lVar27 + 8))(plVar18,uVar32,auVar33._8_8_,0,lVar27)
                  ;
                  return plVar28;
                }
                lVar27 = *plVar15;
                lVar22 = *(long *)PTR_DAT_0777ab08;
                uVar29 = *(undefined8 *)PTR_DAT_0777ab10;
                uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar25 != 0) {
                  piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
                      lVar27 = lVar27 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_03e409bc;
                    }
                    uVar25 = uVar25 - 1;
                    piVar26 = piVar26 + 4;
                  } while (uVar25 != 0);
                }
                lVar27 = func_0x03256b10(plVar15);
LAB_03e409bc:
                lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e409ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar28 = (long *)(**(code **)(lVar27 + 8))(plVar15,uVar29,uVar32,0,lVar27);
                return plVar28;
              }
              lVar27 = *plVar18;
              lVar22 = *(long *)(plVar15[7] + 8);
              uVar32 = *(undefined8 *)PTR_DAT_0777aaf0;
              uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar25 != 0) {
                piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
                    lVar27 = lVar27 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_03e40894;
                  }
                  uVar25 = uVar25 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar25 != 0);
              }
              lVar27 = func_0x03256b10(plVar18);
LAB_03e40894:
              lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e408c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar28 = (long *)(**(code **)(lVar27 + 8))(plVar18,uVar32,auVar33._8_8_,0,lVar27);
              return plVar28;
            }
            lVar27 = *plVar18;
            lVar22 = *(long *)(plVar28[7] + 8);
            uVar32 = *(undefined8 *)PTR_DAT_0777aae8;
            uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
            if (uVar25 != 0) {
              piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
                  lVar27 = lVar27 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03e407b4;
                }
                uVar25 = uVar25 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar25 != 0);
            }
            lVar27 = func_0x03256b10(plVar18);
LAB_03e407b4:
            lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e407e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar28 = (long *)(**(code **)(lVar27 + 8))(plVar18,uVar32,auVar33._8_8_,0,lVar27);
            return plVar28;
          }
          lVar27 = *plVar18;
          lVar22 = *(long *)(plVar15[7] + 8);
          uVar32 = *(undefined8 *)PTR_DAT_0777aae0;
          uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar25 != 0) {
            piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
                lVar27 = lVar27 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_03e406d4;
              }
              uVar25 = uVar25 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar25 != 0);
          }
          lVar27 = func_0x03256b10(plVar18);
LAB_03e406d4:
          lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar28 = (long *)(**(code **)(lVar27 + 8))(plVar18,uVar32,auVar33._8_8_,0,lVar27);
          return plVar28;
        }
        lVar27 = *plVar18;
        lVar22 = *(long *)(plVar28[7] + 8);
        uVar32 = *(undefined8 *)PTR_DAT_0777aad8;
        uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
              lVar27 = lVar27 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_03e405f4;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        lVar27 = func_0x03256b10(plVar18);
LAB_03e405f4:
        lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar28 = (long *)(**(code **)(lVar27 + 8))(plVar18,uVar32,auVar33._8_8_,0,lVar27);
        return plVar28;
      }
      lVar27 = *plVar18;
      lVar22 = *(long *)(plVar15[7] + 8);
      uVar32 = *(undefined8 *)PTR_DAT_0777aad0;
      uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
            lVar27 = lVar27 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_03e40514;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      lVar27 = func_0x03256b10(plVar18);
LAB_03e40514:
      lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar28 = (long *)(**(code **)(lVar27 + 8))(plVar18,uVar32,auVar33._8_8_,0,lVar27);
      return plVar28;
    }
    lVar27 = *plVar18;
    lVar22 = *(long *)(plVar28[7] + 8);
    uVar32 = *(undefined8 *)PTR_DAT_0777aac8;
    uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
          lVar27 = lVar27 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40434;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    lVar27 = func_0x03256b10(plVar18);
LAB_03e40434:
    lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar28 = (long *)(**(code **)(lVar27 + 8))(plVar18,uVar32,auVar33._8_8_,0,lVar27);
    return plVar28;
  }
  lVar27 = *plVar18;
  lVar22 = *(long *)(plVar15[7] + 8);
  uVar32 = *(undefined8 *)PTR_DAT_0777aac0;
  uVar25 = (ulong)*(ushort *)(lVar27 + 0x12e);
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x20)) {
        lVar27 = lVar27 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40354;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  lVar27 = func_0x03256b10(plVar18);
LAB_03e40354:
  lVar27 = func_0x03280b88(*(undefined8 *)(lVar27 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar28 = (long *)(**(code **)(lVar27 + 8))(plVar18,uVar32,auVar33._8_8_,0,lVar27);
  return plVar28;
}

