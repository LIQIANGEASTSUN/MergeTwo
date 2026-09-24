/* Ghidra 12.1.2 native pseudocode; RVA 0x6663C0C; MergeEngine.ECS.Systems.Board.BoardQueueSystem.TryDequeueItem; status ok */

/* WARNING: Possible PIC construction at 0x067645d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06763d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06763dbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06763d80) */
/* WARNING: Removing unreachable block (ram,0x06763d84) */
/* WARNING: Removing unreachable block (ram,0x06763d9c) */
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
/* WARNING: Removing unreachable block (ram,0x067647f4) */
/* WARNING: Removing unreachable block (ram,0x06764828) */
/* WARNING: Removing unreachable block (ram,0x06764874) */
/* WARNING: Removing unreachable block (ram,0x06764830) */
/* WARNING: Removing unreachable block (ram,0x06764850) */
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
                 (undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,
                 long *param_6,long *param_7,long *param_8,long *param_9,ulong param_10)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long *extraout_x1;
  long *plVar14;
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
  long *plVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 extraout_d0;
  undefined1 auVar30 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  long *plStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_80;
  byte bStack_78;
  undefined8 uStack_68;
  
  plVar14 = param_5;
  plVar15 = param_6;
  plVar16 = param_7;
  plVar18 = param_8;
  plVar20 = param_9;
  uVar25 = param_10;
  uVar28 = param_2;
  if ((bRam0000000007e280a9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c288);
    func_0x03280a18(PTR_DAT_0777a940);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777c290);
    bRam0000000007e280a9 = 1;
  }
  if (param_4 == (long *)0x0) {
LAB_06763de4:
    param_3 = func_0x03280cac();
    plVar7 = extraout_x1;
    param_4 = plVar14;
    param_7 = plVar20;
    uVar10 = extraout_d0;
  }
  else {
    plVar7 = (long *)func_0x03280b90(param_4[2],*(undefined8 *)PTR_DAT_0777e548);
    *param_6 = 0;
    if (plVar7 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(long *)(param_3 + 0x70) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_3 + 0x70) + 0x88), lVar8 == 0)) goto LAB_06763de4;
    uVar9 = func_0x06a022d4(lVar8,0);
    if ((uVar9 & 1) != 0) {
      if (((ulong)param_5 & 1) == 0) {
        return (long *)0x0;
      }
      lVar8 = *(long *)(param_3 + 0x28);
      uStack_68 = 0;
      func_0x069fdc94(&uStack_68,1,0,0);
      uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777c288);
      plVar14 = (long *)0x6;
      plVar15 = (long *)0x0;
      plVar16 = (long *)0x0;
      plVar18 = (long *)0x0;
      plVar20 = (long *)0x0;
      func_0x0686aa28(uVar10,uStack_68);
      if (lVar8 != 0) {
        func_0x03ea4d6c(lVar8,uVar10,*(undefined8 *)PTR_DAT_0777c290);
        return (long *)0x0;
      }
      goto LAB_06763de4;
    }
    plVar18 = (long *)param_4[7];
    bStack_78 = (byte)param_10 & 1;
    uVar25 = (ulong)((uint)param_8 & 1);
    plVar15 = (long *)0x0;
    plVar16 = (long *)0x0;
    uStack_80 = (uint)param_9;
    uVar10 = param_1;
    uVar28 = param_2;
  }
  plVar14 = param_4;
  plVar20 = plVar15;
  plVar17 = plVar16;
  plVar19 = plVar18;
  uStack_f0 = param_1;
  uStack_e8 = param_2;
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
  plVar27 = *(long **)(param_3 + 0x40);
  lVar8 = 0;
  if (plVar27 != (long *)0x0) {
    lVar8 = *plVar27;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar26 + 0x13) * 0x10 + 0x138);
          goto LAB_06763f38;
        }
        uVar9 = uVar9 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar27,*(long *)PTR_DAT_0777a498,0x13);
LAB_06763f38:
    uVar9 = (*(code *)*puVar11)(plVar27,plVar7,puVar11[1]);
    lVar8 = *(long *)(param_3 + 0x28);
    plVar14 = (long *)(uVar9 & 0xffffffff);
    uVar12 = func_0x03280ca0(*(undefined8 *)puVar2);
    plVar19 = (long *)0x0;
    plVar20 = plVar15;
    plVar17 = plVar16;
    func_0x060f37c0(uVar12,plVar7);
    if (lVar8 != 0) {
      plVar14 = *(long **)PTR_DAT_07807c30;
      func_0x03ea4d6c(lVar8,uVar12);
      lVar23 = *(long *)(param_3 + 0xf0);
      if (lVar23 != 0) {
        (**(code **)(lVar23 + 0x18))(*(undefined8 *)(lVar23 + 0x40),*(undefined8 *)(lVar23 + 0x28));
      }
      if (*(long *)(param_3 + 0x70) != 0) {
        lVar8 = MergeEngine_ECS_Systems_Board_BoardSystem__GetRandomAvailablePosition();
        plVar14 = plVar7;
        plVar20 = param_4;
        plVar27 = (long *)func_0x0676498c(param_3,lVar8);
        if (plVar27 != (long *)0x0) {
          lVar23 = func_0x03d20d84(plVar27,*(undefined8 *)PTR_DAT_0777a958);
          param_4 = plVar27;
          if (lVar23 != 0) {
            plVar7 = (long *)(lVar23 + 0x48);
            lVar23 = *plVar7;
            if (lVar23 == 0) {
              lVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e5f0);
              func_0x069fe0e4(lVar23,0);
              *plVar7 = lVar23;
              func_0x032809c4(plVar7,lVar23);
              lVar23 = *plVar7;
              if (lVar23 == 0) goto LAB_0676431c;
            }
            *(long *)(lVar23 + 0x28) = (long)plVar18;
            func_0x032809c4((long *)(lVar23 + 0x28),plVar18);
          }
          if (plVar16 != (long *)0x0) {
            plVar13 = (long *)func_0x03d203e4(plVar27,*(undefined8 *)PTR_DAT_07807c20);
            if (plVar13 == (long *)0x0) goto LAB_0676431c;
            plVar13[4] = (long)plVar16;
            func_0x032809c4(plVar13 + 4,plVar16);
            if (plVar15 == (long *)0x0) {
              lVar23 = 0;
            }
            else {
              lVar23 = *plVar15;
              uVar9 = (ulong)*(ushort *)(lVar23 + 0x12e);
              if (uVar9 != 0) {
                piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_07779820) {
                    puVar11 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
                    goto LAB_067640cc;
                  }
                  uVar9 = uVar9 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar9 != 0);
              }
              plVar14 = (long *)0x0;
              puVar11 = (undefined8 *)func_0x03256b10(plVar15);
LAB_067640cc:
              lVar23 = (*(code *)*puVar11)(plVar15,puVar11[1]);
              plVar16 = plVar13;
              plVar18 = plVar13;
              if (plVar15 == (long *)0x0) goto LAB_0676431c;
            }
            plVar18 = plVar13 + 5;
            *plVar18 = lVar23;
            func_0x032809c4(plVar18);
            *(undefined1 *)(plVar13 + 6) = 1;
          }
          plVar16 = (long *)(ulong)uStack_80;
          uVar9 = func_0x055f7aac(param_7,0);
          if ((uVar9 & 1) == 0) {
            plVar18 = *(long **)(param_3 + 0xd8);
            if (plVar18 == (long *)0x0) goto LAB_0676431c;
            lVar23 = *plVar18;
            lVar29 = *(long *)PTR_DAT_07772080;
            plVar7 = *(long **)PTR_DAT_07807c38;
            uVar9 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar9 != 0) {
              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)(lVar29 + 0x20)) {
                  lVar23 = lVar23 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar29 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_0676417c;
                }
                uVar9 = uVar9 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar9 != 0);
            }
            lVar23 = func_0x03256b10(plVar18);
LAB_0676417c:
            plVar20 = (long *)func_0x03280b88(*(undefined8 *)(lVar23 + 8),lVar29);
            plVar14 = (long *)0x1;
            uVar9 = (*(code *)plVar20[1])(plVar18,plVar7);
            if ((uStack_80 != 0x69) && ((uVar9 & 1) != 0)) {
              lVar23 = func_0x03d203e4(plVar27,*(undefined8 *)PTR_DAT_07807c18);
              if (lVar23 == 0) goto LAB_0676431c;
              plVar18 = (long *)(lVar23 + 0x20);
              *plVar18 = (long)param_7;
              func_0x032809c4(plVar18,param_7);
              *(uint *)(lVar23 + 0x28) = uStack_80;
            }
          }
          param_7 = *(long **)(param_3 + 0x10);
          if (param_7 != (long *)0x0) {
            lVar23 = *param_7;
            plVar18 = (long *)(ulong)bStack_78;
            uVar9 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar9 != 0) {
              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777e5c0) {
                  puVar11 = (undefined8 *)(lVar23 + (long)(*piVar26 + 5) * 0x10 + 0x138);
                  goto LAB_06764240;
                }
                uVar9 = uVar9 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(param_7,*(long *)PTR_DAT_0777e5c0,5);
LAB_06764240:
            plVar14 = (long *)puVar11[1];
            (*(code *)*puVar11)(param_7,plVar27);
            if ((bStack_78 & 1) != 0) {
              return plVar27;
            }
            if (plVar15 == (long *)0x0) {
              func_0x06764e18(uVar10,uVar28,param_3,lVar8,(uint)uVar25 & 1,plVar16);
              return plVar27;
            }
            lVar23 = *plVar15;
            uVar9 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar9 != 0) {
              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_077797a8) {
                  puVar11 = (undefined8 *)(lVar23 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                  goto LAB_067642d0;
                }
                uVar9 = uVar9 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar9 != 0);
            }
            plVar14 = (long *)0x1;
            puVar11 = (undefined8 *)func_0x03256b10(plVar15);
LAB_067642d0:
            lVar23 = (*(code *)*puVar11)(plVar15,puVar11[1]);
            if (lVar23 != 0) {
              func_0x06764b04(uVar10,uVar28,param_3,lVar8,*(undefined4 *)(lVar23 + 0x14));
              return plVar27;
            }
          }
        }
      }
    }
  }
LAB_0676431c:
  auVar30 = func_0x03280cac();
  lVar23 = auVar30._0_8_;
  uStack_140 = 0x6764320;
  plStack_138 = plVar7;
  plStack_130 = plVar18;
  plStack_128 = plVar16;
  lStack_120 = lVar8;
  plStack_118 = param_4;
  plStack_110 = param_7;
  uStack_108 = uVar25 & 0xffffffff;
  plStack_100 = plVar15;
  lStack_f8 = param_3;
  if ((bRam0000000007e280b5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07807c40);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_077c1e18);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e280b5 = 1;
  }
  puVar2 = PTR_DAT_0777e4a0;
  plVar15 = *(long **)(lVar23 + 0x50);
  if (plVar15 == (long *)0x0) {
LAB_067644f0:
    func_0x03280cac();
    puVar2 = PTR_DAT_07807c48;
    uStack_148 = plVar20;
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
    plVar14 = (long *)func_0x03280ca0(*(undefined8 *)puVar2);
    return plVar14;
  }
  lVar8 = *plVar15;
  uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
  uVar28 = *(undefined8 *)PTR_DAT_0777e5f8;
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777e4a0) {
        puVar11 = (undefined8 *)(lVar8 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_06764404;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  puVar11 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777e4a0,0);
LAB_06764404:
  plVar15 = (long *)(*(code *)*puVar11)(plVar15,uVar28,plVar17,plVar19,0,puVar11[1]);
  plVar16 = *(long **)(lVar23 + 0x50);
  if (plVar16 == (long *)0x0) goto LAB_067644f0;
  lVar8 = *plVar16;
  uVar10 = *(undefined8 *)PTR_DAT_0776b160;
  uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
  uVar28 = *(undefined8 *)PTR_DAT_077c1e18;
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == *(long *)puVar2) {
        puVar11 = (undefined8 *)(lVar8 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_06764490;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  puVar11 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar2,0);
LAB_06764490:
  lVar8 = (*(code *)*puVar11)(plVar16,uVar10,auVar30._8_8_,plVar14,uVar28,puVar11[1]);
  lVar23 = *(long *)(lVar23 + 0x68);
  if (lVar23 == 0) goto LAB_067644f0;
  lVar21 = *(long *)PTR_DAT_07807c40;
  uVar25 = 0;
  lVar29 = 0;
  plVar14 = plVar20;
  plVar16 = plVar15;
  if (*(long *)(lVar21 + 0x38) == 0) {
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
    if (*(long *)(lVar21 + 0x38) == 0) {
      func_0x03256878(lVar21);
    }
  }
  lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
  func_0x06a30df4(lVar5,0);
  if (lVar5 == 0) goto LAB_03e402a8;
  *(undefined8 *)(lVar5 + 0x30) = plVar20;
  func_0x032809c4((undefined8 *)(lVar5 + 0x30),plVar20);
  if (lVar8 == 0) goto LAB_03e402a8;
  *(long *)(lVar8 + 0x20) = lVar5;
  func_0x032809c4((long *)(lVar8 + 0x20),lVar5);
  if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0x38) + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  func_0x04143c38(lVar5,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x10));
  if (lVar5 == 0) goto LAB_03e402a8;
  lVar22 = *(long *)(lVar5 + 0x10);
  lVar24 = *(long *)(*(long *)(lVar21 + 0x38) + 0x18);
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (lVar22 == 0) goto LAB_03e402a8;
  uVar4 = *(uint *)(lVar5 + 0x18);
  if (uVar4 < *(uint *)(lVar22 + 0x18)) {
    *(uint *)(lVar5 + 0x18) = uVar4 + 1;
    plVar18 = (long *)(lVar22 + (long)(int)uVar4 * 8 + 0x20);
    *plVar18 = lVar8;
    func_0x032809c4(plVar18,lVar8);
    if (plVar15 == (long *)0x0) goto LAB_03e3ffbc;
LAB_03e3ff28:
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar22 = *(long *)(*(long *)(lVar21 + 0x38) + 0x18);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_03e402a8;
    uVar4 = *(uint *)(lVar5 + 0x18);
    if (uVar4 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar4 + 1;
      plVar18 = (long *)(lVar8 + (long)(int)uVar4 * 8 + 0x20);
      *plVar18 = (long)plVar15;
      func_0x032809c4(plVar18,plVar15);
    }
    else {
      plVar14 = *(long **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(lVar5,plVar15);
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_0777aab0 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0777aab0))
    goto LAB_03e3ffbc;
    lVar8 = 0;
    if (plVar15[0x1b] != 0) {
      lVar8 = *(long *)(plVar15[0x1b] + 0x10);
    }
  }
  else {
    plVar14 = *(long **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70);
    func_0x0414446c(lVar5,lVar8);
    if (plVar15 != (long *)0x0) goto LAB_03e3ff28;
LAB_03e3ffbc:
    lVar8 = 0;
  }
  plVar15 = *(long **)(lVar23 + 0x48);
  lVar22 = 0;
  if (lVar8 != 0) {
    lVar22 = lVar8;
  }
  if (plVar15 != (long *)0x0) {
    lVar8 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0777aaa8) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar26 + 9) * 0x10 + 0x138);
          goto LAB_03e40028;
        }
        uVar9 = uVar9 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar9 != 0);
    }
    plVar14 = (long *)0x9;
    puVar11 = (undefined8 *)func_0x03256b10(plVar15);
LAB_03e40028:
    lVar8 = (*(code *)*puVar11)(plVar15,puVar11[1]);
    if (lVar8 != 0) {
      lVar24 = *(long *)(*(long *)(lVar21 + 0x38) + 0x28);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      if (*(int *)(lVar24 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar24 = *(long *)(*(long *)(lVar21 + 0x38) + 0x28);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0xb8) + 8);
      if (lVar24 == 0) {
        lVar24 = *(long *)(*(long *)(lVar21 + 0x38) + 0x28);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c();
        }
        if (*(int *)(lVar24 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar24 = *(long *)(*(long *)(lVar21 + 0x38) + 0x28);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c();
        }
        uVar28 = **(undefined8 **)(lVar24 + 0xb8);
        lVar24 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aaa0);
        plVar16 = (long *)0x0;
        func_0x053569b8(lVar24,uVar28,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x30));
        lVar6 = *(long *)(*(long *)(lVar21 + 0x38) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x0325681c();
        }
        *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar24;
        lVar6 = *(long *)(*(long *)(lVar21 + 0x38) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x0325681c();
        }
        func_0x032809c4(*(long *)(lVar6 + 0xb8) + 8,lVar24);
      }
      uVar28 = func_0x03d50a94(lVar8,lVar24,*(undefined8 *)PTR_DAT_0777aa90);
      uVar4 = func_0x03d37bc0(uVar28,lVar22,*(undefined8 *)PTR_DAT_0776aeb0);
      uStack_148._0_6_ = (uint6)(uint)uStack_148;
      plVar14 = *(long **)PTR_DAT_07751420;
      func_0x04377614((long)&uStack_148 + 4,uVar4 & 1);
    }
  }
  plVar15 = *(long **)(lVar23 + 0x40);
  if (plVar15 != (long *)0x0) {
    lVar8 = *plVar15;
    lVar23 = *(long *)(*(long *)(lVar21 + 0x38) + 0x38);
    uVar28 = *(undefined8 *)PTR_DAT_0777aab8;
    uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
          lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40264;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    lVar8 = func_0x03256b10(plVar15);
LAB_03e40264:
    lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
    plVar14 = (long *)(**(code **)(lVar8 + 8))(plVar15,uVar28,lVar5,0,lVar8);
    return plVar14;
  }
LAB_03e402a8:
  auVar30 = func_0x03280cac();
  plVar15 = plVar14;
  if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777aac0), plVar14[7] == 0)) {
    func_0x03256878(plVar14);
  }
  plVar18 = *(long **)(auVar30._0_8_ + 0x40);
  if (plVar18 == (long *)0x0) {
    auVar30 = func_0x03280cac();
    plVar14 = plVar15;
    if ((plVar15[7] == 0) && (func_0x03280a18(PTR_DAT_0777aac8), plVar15[7] == 0)) {
      func_0x03256878(plVar15);
    }
    plVar18 = *(long **)(auVar30._0_8_ + 0x40);
    if (plVar18 == (long *)0x0) {
      auVar30 = func_0x03280cac();
      plVar15 = plVar14;
      if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777aad0), plVar14[7] == 0)) {
        func_0x03256878(plVar14);
      }
      plVar18 = *(long **)(auVar30._0_8_ + 0x40);
      if (plVar18 == (long *)0x0) {
        auVar30 = func_0x03280cac();
        plVar14 = plVar15;
        if ((plVar15[7] == 0) && (func_0x03280a18(PTR_DAT_0777aad8), plVar15[7] == 0)) {
          func_0x03256878(plVar15);
        }
        plVar18 = *(long **)(auVar30._0_8_ + 0x40);
        if (plVar18 == (long *)0x0) {
          auVar30 = func_0x03280cac();
          plVar15 = plVar14;
          if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777aae0), plVar14[7] == 0)) {
            func_0x03256878(plVar14);
          }
          plVar18 = *(long **)(auVar30._0_8_ + 0x40);
          if (plVar18 == (long *)0x0) {
            auVar30 = func_0x03280cac();
            plVar14 = plVar15;
            if ((plVar15[7] == 0) && (func_0x03280a18(PTR_DAT_0777aae8), plVar15[7] == 0)) {
              func_0x03256878(plVar15);
            }
            plVar18 = *(long **)(auVar30._0_8_ + 0x40);
            if (plVar18 == (long *)0x0) {
              auVar30 = func_0x03280cac();
              plVar15 = plVar14;
              if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777aaf0), plVar14[7] == 0)) {
                func_0x03256878(plVar14);
              }
              plVar18 = *(long **)(auVar30._0_8_ + 0x40);
              if (plVar18 == (long *)0x0) {
                auVar30 = func_0x03280cac();
                puVar3 = PTR_DAT_0777ab00;
                puVar2 = PTR_DAT_0777aaf8;
                if ((bRam0000000007e17dbe & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0777aaf8);
                  func_0x03280a18(PTR_DAT_0777ab00);
                  func_0x03280a18(PTR_DAT_0777ab08);
                  func_0x03280a18(PTR_DAT_0777ab10);
                  bRam0000000007e17dbe = 1;
                }
                plVar14 = *(long **)(auVar30._0_8_ + 0x40);
                uVar28 = func_0x03d2c6a8(auVar30._8_8_,*(undefined8 *)puVar2);
                uVar28 = func_0x03d5ffd0(uVar28,*(undefined8 *)puVar3);
                if (plVar14 == (long *)0x0) {
                  auVar30 = func_0x03280cac();
                  plVar14 = plVar15;
                  if ((plVar15[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab18), plVar15[7] == 0)) {
                    func_0x03256878(plVar15);
                  }
                  plVar18 = *(long **)(auVar30._0_8_ + 0x40);
                  if (plVar18 == (long *)0x0) {
                    auVar30 = func_0x03280cac();
                    plVar15 = plVar14;
                    if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab20), plVar14[7] == 0)) {
                      func_0x03256878(plVar14);
                    }
                    plVar18 = *(long **)(auVar30._0_8_ + 0x40);
                    if (plVar18 == (long *)0x0) {
                      auVar30 = func_0x03280cac();
                      plVar14 = plVar15;
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
                      plVar20 = *(long **)(auVar30._0_8_ + 0x40);
                      lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                      func_0x04fe1fa4(lVar8,*(undefined8 *)PTR_DAT_0775a958);
                      if (lVar8 != 0) {
                        plVar18 = *(long **)PTR_DAT_077507d0;
                        func_0x04fe2d7c(lVar8,*(undefined8 *)PTR_DAT_07779e90);
                        plVar14 = plVar15;
                        if (plVar20 != (long *)0x0) {
                          lVar23 = *plVar20;
                          lVar29 = *(long *)(plVar16[7] + 8);
                          uVar28 = *(undefined8 *)PTR_DAT_0777ab28;
                          uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
                          if (uVar25 != 0) {
                            piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar26 + -2) == *(long *)(lVar29 + 0x20)) {
                                lVar23 = lVar23 + (long)(int)(*piVar26 +
                                                             (uint)*(ushort *)(lVar29 + 0x50)) *
                                                  0x10 + 0x138;
                                goto LAB_03e40cdc;
                              }
                              uVar25 = uVar25 - 1;
                              piVar26 = piVar26 + 4;
                            } while (uVar25 != 0);
                          }
                          lVar23 = func_0x03256b10(plVar20);
LAB_03e40cdc:
                          lVar23 = func_0x03280b88(*(undefined8 *)(lVar23 + 8),lVar29);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          plVar14 = (long *)(**(code **)(lVar23 + 8))
                                                      (plVar20,uVar28,auVar30._8_8_,lVar8,lVar23);
                          return plVar14;
                        }
                      }
                      auVar30 = func_0x03280cac();
                      plVar15 = plVar14;
                      if ((plVar14[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab30), plVar14[7] == 0))
                      {
                        func_0x03256878(plVar14);
                      }
                      plVar16 = *(long **)(auVar30._0_8_ + 0x40);
                      if (plVar16 == (long *)0x0) {
                        auVar30 = func_0x03280cac();
                        plVar14 = plVar15;
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
                        plVar20 = *(long **)(auVar30._0_8_ + 0x40);
                        lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                        func_0x04fe1fa4(lVar8,*(undefined8 *)PTR_DAT_0775a958);
                        if (lVar8 != 0) {
                          plVar16 = *(long **)PTR_DAT_077507d0;
                          func_0x04fe2d7c(lVar8,*(undefined8 *)PTR_DAT_07779e90,plVar15,plVar16);
                          plVar14 = plVar15;
                          if (plVar20 != (long *)0x0) {
                            lVar23 = *plVar20;
                            lVar29 = *(long *)(plVar18[7] + 8);
                            uVar28 = *(undefined8 *)PTR_DAT_0777ab38;
                            uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
                            if (uVar25 != 0) {
                              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar26 + -2) == *(long *)(lVar29 + 0x20)) {
                                  lVar23 = lVar23 + (long)(int)(*piVar26 +
                                                               (uint)*(ushort *)(lVar29 + 0x50)) *
                                                    0x10 + 0x138;
                                  goto LAB_03e40f1c;
                                }
                                uVar25 = uVar25 - 1;
                                piVar26 = piVar26 + 4;
                              } while (uVar25 != 0);
                            }
                            lVar23 = func_0x03256b10(plVar20);
LAB_03e40f1c:
                            lVar23 = func_0x03280b88(*(undefined8 *)(lVar23 + 8),lVar29);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            plVar14 = (long *)(**(code **)(lVar23 + 8))
                                                        (plVar20,uVar28,auVar30._8_8_,lVar8,lVar23);
                            return plVar14;
                          }
                        }
                        auVar30 = func_0x03280cac();
                        if (*(long *)(lVar29 + 0x38) == 0) {
                          func_0x03280a18(PTR_DAT_0777ab40);
                          func_0x03280a18(PTR_DAT_0777ab48);
                          if (*(long *)(lVar29 + 0x38) == 0) {
                            func_0x03256878(lVar29);
                          }
                        }
                        lVar23 = *(long *)PTR_DAT_0777ab40;
                        lVar8 = *(long *)(lVar23 + 0x38);
                        if (lVar8 == 0) {
                          func_0x03256878(lVar23);
                          lVar8 = *(long *)(lVar23 + 0x38);
                        }
                        lVar8 = *(long *)(lVar8 + 0x10);
                        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                          lVar8 = func_0x0325681c();
                        }
                        if (*(int *)(lVar8 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        lVar8 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
                        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                          lVar8 = func_0x0325681c();
                        }
                        uVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x38) + 0x10))
                                           (auVar30._8_8_,plVar14,**(undefined8 **)(lVar8 + 0xb8));
                        plVar14 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
                        func_0x05a85e88(plVar14,auVar30._0_8_,plVar16,uVar25 & 0xffffffff,uVar28,0);
                        return plVar14;
                      }
                      lVar8 = *plVar16;
                      lVar23 = *(long *)(plVar14[7] + 8);
                      uVar28 = *(undefined8 *)PTR_DAT_0777ab30;
                      uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar25 != 0) {
                        piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                            lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50))
                                            * 0x10 + 0x138;
                            goto LAB_03e40dbc;
                          }
                          uVar25 = uVar25 - 1;
                          piVar26 = piVar26 + 4;
                        } while (uVar25 != 0);
                      }
                      lVar8 = func_0x03256b10(plVar16);
LAB_03e40dbc:
                      lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      plVar14 = (long *)(**(code **)(lVar8 + 8))
                                                  (plVar16,uVar28,auVar30._8_8_,0,lVar8);
                      return plVar14;
                    }
                    lVar8 = *plVar18;
                    lVar23 = *(long *)(plVar14[7] + 8);
                    uVar28 = *(undefined8 *)PTR_DAT_0777ab20;
                    uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    if (uVar25 != 0) {
                      piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                          lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) *
                                          0x10 + 0x138;
                          goto LAB_03e40b7c;
                        }
                        uVar25 = uVar25 - 1;
                        piVar26 = piVar26 + 4;
                      } while (uVar25 != 0);
                    }
                    lVar8 = func_0x03256b10(plVar18);
LAB_03e40b7c:
                    lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    plVar14 = (long *)(**(code **)(lVar8 + 8))(plVar18,uVar28,auVar30._8_8_,0,lVar8)
                    ;
                    return plVar14;
                  }
                  lVar8 = *plVar18;
                  lVar23 = *(long *)(plVar15[7] + 8);
                  uVar28 = *(undefined8 *)PTR_DAT_0777ab18;
                  uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar25 != 0) {
                    piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                        lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) *
                                        0x10 + 0x138;
                        goto LAB_03e40a9c;
                      }
                      uVar25 = uVar25 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar25 != 0);
                  }
                  lVar8 = func_0x03256b10(plVar18);
LAB_03e40a9c:
                  lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar14 = (long *)(**(code **)(lVar8 + 8))(plVar18,uVar28,auVar30._8_8_,0,lVar8);
                  return plVar14;
                }
                lVar8 = *plVar14;
                lVar23 = *(long *)PTR_DAT_0777ab08;
                uVar10 = *(undefined8 *)PTR_DAT_0777ab10;
                uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar25 != 0) {
                  piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                      lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) *
                                      0x10 + 0x138;
                      goto LAB_03e409bc;
                    }
                    uVar25 = uVar25 - 1;
                    piVar26 = piVar26 + 4;
                  } while (uVar25 != 0);
                }
                lVar8 = func_0x03256b10(plVar14);
LAB_03e409bc:
                lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e409ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar14 = (long *)(**(code **)(lVar8 + 8))(plVar14,uVar10,uVar28,0,lVar8);
                return plVar14;
              }
              lVar8 = *plVar18;
              lVar23 = *(long *)(plVar14[7] + 8);
              uVar28 = *(undefined8 *)PTR_DAT_0777aaf0;
              uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar25 != 0) {
                piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                    lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10
                            + 0x138;
                    goto LAB_03e40894;
                  }
                  uVar25 = uVar25 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar25 != 0);
              }
              lVar8 = func_0x03256b10(plVar18);
LAB_03e40894:
              lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e408c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar14 = (long *)(**(code **)(lVar8 + 8))(plVar18,uVar28,auVar30._8_8_,0,lVar8);
              return plVar14;
            }
            lVar8 = *plVar18;
            lVar23 = *(long *)(plVar15[7] + 8);
            uVar28 = *(undefined8 *)PTR_DAT_0777aae8;
            uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar25 != 0) {
              piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                  lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_03e407b4;
                }
                uVar25 = uVar25 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar25 != 0);
            }
            lVar8 = func_0x03256b10(plVar18);
LAB_03e407b4:
            lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e407e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar14 = (long *)(**(code **)(lVar8 + 8))(plVar18,uVar28,auVar30._8_8_,0,lVar8);
            return plVar14;
          }
          lVar8 = *plVar18;
          lVar23 = *(long *)(plVar14[7] + 8);
          uVar28 = *(undefined8 *)PTR_DAT_0777aae0;
          uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar25 != 0) {
            piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_03e406d4;
              }
              uVar25 = uVar25 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar25 != 0);
          }
          lVar8 = func_0x03256b10(plVar18);
LAB_03e406d4:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar14 = (long *)(**(code **)(lVar8 + 8))(plVar18,uVar28,auVar30._8_8_,0,lVar8);
          return plVar14;
        }
        lVar8 = *plVar18;
        lVar23 = *(long *)(plVar15[7] + 8);
        uVar28 = *(undefined8 *)PTR_DAT_0777aad8;
        uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
              lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 +
                      0x138;
              goto LAB_03e405f4;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        lVar8 = func_0x03256b10(plVar18);
LAB_03e405f4:
        lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar14 = (long *)(**(code **)(lVar8 + 8))(plVar18,uVar28,auVar30._8_8_,0,lVar8);
        return plVar14;
      }
      lVar8 = *plVar18;
      lVar23 = *(long *)(plVar14[7] + 8);
      uVar28 = *(undefined8 *)PTR_DAT_0777aad0;
      uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
            lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 + 0x138;
            goto LAB_03e40514;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      lVar8 = func_0x03256b10(plVar18);
LAB_03e40514:
      lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar14 = (long *)(**(code **)(lVar8 + 8))(plVar18,uVar28,auVar30._8_8_,0,lVar8);
      return plVar14;
    }
    lVar8 = *plVar18;
    lVar23 = *(long *)(plVar15[7] + 8);
    uVar28 = *(undefined8 *)PTR_DAT_0777aac8;
    uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
          lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40434;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    lVar8 = func_0x03256b10(plVar18);
LAB_03e40434:
    lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar14 = (long *)(**(code **)(lVar8 + 8))(plVar18,uVar28,auVar30._8_8_,0,lVar8);
    return plVar14;
  }
  lVar8 = *plVar18;
  lVar23 = *(long *)(plVar14[7] + 8);
  uVar28 = *(undefined8 *)PTR_DAT_0777aac0;
  uVar25 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == *(long *)(lVar23 + 0x20)) {
        lVar8 = lVar8 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40354;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  lVar8 = func_0x03256b10(plVar18);
LAB_03e40354:
  lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar14 = (long *)(**(code **)(lVar8 + 8))(plVar18,uVar28,auVar30._8_8_,0,lVar8);
  return plVar14;
}

