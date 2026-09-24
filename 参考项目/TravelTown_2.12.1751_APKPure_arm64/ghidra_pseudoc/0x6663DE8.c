/* Ghidra 12.1.2 native pseudocode; RVA 0x6663DE8; MergeEngine.ECS.Systems.Board.BoardQueueSystem.CreateItemOnBoard; status ok */

/* WARNING: Possible PIC construction at 0x067645d0: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x03e4016c) */
/* WARNING: Removing unreachable block (ram,0x03e40178) */
/* WARNING: Removing unreachable block (ram,0x03e40190) */
/* WARNING: Removing unreachable block (ram,0x03e40198) */
/* WARNING: Removing unreachable block (ram,0x03e401d0) */
/* WARNING: Removing unreachable block (ram,0x03e401a4) */
/* WARNING: Removing unreachable block (ram,0x03e401b0) */
/* WARNING: Removing unreachable block (ram,0x03e401dc) */

long * MergeEngine_ECS_Systems_Board_BoardQueueSystem__CreateItemOnBoard
                 (undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,
                 long *param_6,long *param_7,long *param_8,long *param_9,uint param_10,uint param_11
                 ,byte param_12)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  long *plVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  
  plVar24 = param_5;
  plVar10 = param_6;
  plVar11 = param_7;
  plVar12 = param_8;
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
  plVar21 = *(long **)(param_3 + 0x40);
  lVar15 = 0;
  if (plVar21 != (long *)0x0) {
    lVar15 = *plVar21;
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar7 = (undefined8 *)(lVar15 + (long)(*piVar20 + 0x13) * 0x10 + 0x138);
          goto LAB_06763f38;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_0777a498,0x13);
LAB_06763f38:
    uVar19 = (*(code *)*puVar7)(plVar21,param_4,puVar7[1]);
    lVar15 = *(long *)(param_3 + 0x28);
    plVar24 = (long *)(uVar19 & 0xffffffff);
    uVar8 = func_0x03280ca0(*(undefined8 *)puVar2);
    plVar12 = (long *)0x0;
    plVar10 = param_6;
    plVar11 = param_7;
    func_0x060f37c0(uVar8,param_4);
    if (lVar15 != 0) {
      plVar24 = *(long **)PTR_DAT_07807c30;
      func_0x03ea4d6c(lVar15,uVar8);
      lVar16 = *(long *)(param_3 + 0xf0);
      if (lVar16 != 0) {
        (**(code **)(lVar16 + 0x18))(*(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(lVar16 + 0x28));
      }
      if (*(long *)(param_3 + 0x70) != 0) {
        lVar15 = MergeEngine_ECS_Systems_Board_BoardSystem__GetRandomAvailablePosition();
        plVar24 = param_4;
        plVar10 = param_5;
        plVar21 = (long *)func_0x0676498c(param_3,lVar15);
        if (plVar21 != (long *)0x0) {
          lVar16 = func_0x03d20d84(plVar21,*(undefined8 *)PTR_DAT_0777a958);
          param_5 = plVar21;
          if (lVar16 != 0) {
            param_4 = (long *)(lVar16 + 0x48);
            lVar16 = *param_4;
            if (lVar16 == 0) {
              lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e5f0);
              func_0x069fe0e4(lVar16,0);
              *param_4 = lVar16;
              func_0x032809c4(param_4,lVar16);
              lVar16 = *param_4;
              if (lVar16 == 0) goto LAB_0676431c;
            }
            *(long *)(lVar16 + 0x28) = (long)param_8;
            func_0x032809c4((long *)(lVar16 + 0x28),param_8);
          }
          if (param_7 != (long *)0x0) {
            plVar9 = (long *)func_0x03d203e4(plVar21,*(undefined8 *)PTR_DAT_07807c20);
            if (plVar9 == (long *)0x0) goto LAB_0676431c;
            plVar9[4] = (long)param_7;
            func_0x032809c4(plVar9 + 4,param_7);
            if (param_6 == (long *)0x0) {
              lVar16 = 0;
            }
            else {
              lVar16 = *param_6;
              uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07779820) {
                    puVar7 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_067640cc;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              plVar24 = (long *)0x0;
              puVar7 = (undefined8 *)func_0x03256b10(param_6);
LAB_067640cc:
              lVar16 = (*(code *)*puVar7)(param_6,puVar7[1]);
              param_7 = plVar9;
              param_8 = plVar9;
              if (param_6 == (long *)0x0) goto LAB_0676431c;
            }
            param_8 = plVar9 + 5;
            *param_8 = lVar16;
            func_0x032809c4(param_8);
            *(undefined1 *)(plVar9 + 6) = 1;
          }
          param_7 = (long *)(ulong)param_11;
          uVar19 = func_0x055f7aac(param_9,0);
          if ((uVar19 & 1) == 0) {
            param_8 = *(long **)(param_3 + 0xd8);
            if (param_8 == (long *)0x0) goto LAB_0676431c;
            lVar16 = *param_8;
            lVar23 = *(long *)PTR_DAT_07772080;
            param_4 = *(long **)PTR_DAT_07807c38;
            uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)(lVar23 + 0x20)) {
                  lVar16 = lVar16 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_0676417c;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            lVar16 = func_0x03256b10(param_8);
LAB_0676417c:
            plVar10 = (long *)func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar23);
            plVar24 = (long *)0x1;
            uVar19 = (*(code *)plVar10[1])(param_8,param_4);
            if ((param_11 != 0x69) && ((uVar19 & 1) != 0)) {
              lVar16 = func_0x03d203e4(plVar21,*(undefined8 *)PTR_DAT_07807c18);
              if (lVar16 == 0) goto LAB_0676431c;
              param_8 = (long *)(lVar16 + 0x20);
              *param_8 = (long)param_9;
              func_0x032809c4(param_8,param_9);
              *(uint *)(lVar16 + 0x28) = param_11;
            }
          }
          param_9 = *(long **)(param_3 + 0x10);
          if (param_9 != (long *)0x0) {
            lVar16 = *param_9;
            param_8 = (long *)(ulong)param_12;
            uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777e5c0) {
                  puVar7 = (undefined8 *)(lVar16 + (long)(*piVar20 + 5) * 0x10 + 0x138);
                  goto LAB_06764240;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar7 = (undefined8 *)func_0x03256b10(param_9,*(long *)PTR_DAT_0777e5c0,5);
LAB_06764240:
            plVar24 = (long *)puVar7[1];
            (*(code *)*puVar7)(param_9,plVar21);
            if ((param_12 & 1) != 0) {
              return plVar21;
            }
            if (param_6 == (long *)0x0) {
              func_0x06764e18(param_1,param_2,param_3,lVar15,param_10 & 1,param_7);
              return plVar21;
            }
            lVar16 = *param_6;
            uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_077797a8) {
                  puVar7 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_067642d0;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            plVar24 = (long *)0x1;
            puVar7 = (undefined8 *)func_0x03256b10(param_6);
LAB_067642d0:
            lVar16 = (*(code *)*puVar7)(param_6,puVar7[1]);
            if (lVar16 != 0) {
              func_0x06764b04(param_1,param_2,param_3,lVar15,*(undefined4 *)(lVar16 + 0x14));
              return plVar21;
            }
          }
        }
      }
    }
  }
LAB_0676431c:
  auVar25 = func_0x03280cac();
  lVar16 = auVar25._0_8_;
  uStack_c0 = 0x6764320;
  plStack_b8 = param_4;
  plStack_b0 = param_8;
  plStack_a8 = param_7;
  lStack_a0 = lVar15;
  plStack_98 = param_5;
  plStack_90 = param_9;
  uStack_88 = (ulong)param_10;
  plStack_80 = param_6;
  lStack_78 = param_3;
  if ((bRam0000000007e280b5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07807c40);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_077c1e18);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e280b5 = 1;
  }
  puVar2 = PTR_DAT_0777e4a0;
  plVar21 = *(long **)(lVar16 + 0x50);
  if (plVar21 == (long *)0x0) {
LAB_067644f0:
    func_0x03280cac();
    puVar2 = PTR_DAT_07807c48;
    uStack_c8 = plVar10;
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
    plVar24 = (long *)func_0x03280ca0(*(undefined8 *)puVar2);
    return plVar24;
  }
  lVar15 = *plVar21;
  uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
  uVar8 = *(undefined8 *)PTR_DAT_0777e5f8;
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777e4a0) {
        puVar7 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_06764404;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_0777e4a0,0);
LAB_06764404:
  plVar11 = (long *)(*(code *)*puVar7)(plVar21,uVar8,plVar11,plVar12,0,puVar7[1]);
  plVar12 = *(long **)(lVar16 + 0x50);
  if (plVar12 == (long *)0x0) goto LAB_067644f0;
  lVar15 = *plVar12;
  uVar22 = *(undefined8 *)PTR_DAT_0776b160;
  uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
  uVar8 = *(undefined8 *)PTR_DAT_077c1e18;
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_06764490;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar2,0);
LAB_06764490:
  lVar15 = (*(code *)*puVar7)(plVar12,uVar22,auVar25._8_8_,plVar24,uVar8,puVar7[1]);
  lVar16 = *(long *)(lVar16 + 0x68);
  if (lVar16 == 0) goto LAB_067644f0;
  lVar13 = *(long *)PTR_DAT_07807c40;
  uVar19 = 0;
  lVar23 = 0;
  plVar24 = plVar10;
  plVar12 = plVar11;
  if (*(long *)(lVar13 + 0x38) == 0) {
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
    if (*(long *)(lVar13 + 0x38) == 0) {
      func_0x03256878(lVar13);
    }
  }
  lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
  func_0x06a30df4(lVar5,0);
  if (lVar5 == 0) goto LAB_03e402a8;
  *(long *)(lVar5 + 0x30) = (long)plVar10;
  func_0x032809c4((long *)(lVar5 + 0x30),plVar10);
  if (lVar15 == 0) goto LAB_03e402a8;
  *(long *)(lVar15 + 0x20) = lVar5;
  func_0x032809c4((long *)(lVar15 + 0x20),lVar5);
  if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  func_0x04143c38(lVar5,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
  if (lVar5 == 0) goto LAB_03e402a8;
  lVar14 = *(long *)(lVar5 + 0x10);
  lVar17 = *(long *)(*(long *)(lVar13 + 0x38) + 0x18);
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (lVar14 == 0) goto LAB_03e402a8;
  uVar4 = *(uint *)(lVar5 + 0x18);
  if (uVar4 < *(uint *)(lVar14 + 0x18)) {
    *(uint *)(lVar5 + 0x18) = uVar4 + 1;
    plVar10 = (long *)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
    *plVar10 = lVar15;
    func_0x032809c4(plVar10,lVar15);
    if (plVar11 == (long *)0x0) goto LAB_03e3ffbc;
LAB_03e3ff28:
    lVar15 = *(long *)(lVar5 + 0x10);
    lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x18);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_03e402a8;
    uVar4 = *(uint *)(lVar5 + 0x18);
    if (uVar4 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar4 + 1;
      plVar10 = (long *)(lVar15 + (long)(int)uVar4 * 8 + 0x20);
      *plVar10 = (long)plVar11;
      func_0x032809c4(plVar10,plVar11);
    }
    else {
      plVar24 = *(long **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(lVar5,plVar11);
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_0777aab0 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0777aab0))
    goto LAB_03e3ffbc;
    lVar15 = 0;
    if (plVar11[0x1b] != 0) {
      lVar15 = *(long *)(plVar11[0x1b] + 0x10);
    }
  }
  else {
    plVar24 = *(long **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
    func_0x0414446c(lVar5,lVar15);
    if (plVar11 != (long *)0x0) goto LAB_03e3ff28;
LAB_03e3ffbc:
    lVar15 = 0;
  }
  plVar10 = *(long **)(lVar16 + 0x48);
  lVar14 = 0;
  if (lVar15 != 0) {
    lVar14 = lVar15;
  }
  if (plVar10 != (long *)0x0) {
    lVar15 = *plVar10;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777aaa8) {
          puVar7 = (undefined8 *)(lVar15 + (long)(*piVar20 + 9) * 0x10 + 0x138);
          goto LAB_03e40028;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    plVar24 = (long *)0x9;
    puVar7 = (undefined8 *)func_0x03256b10(plVar10);
LAB_03e40028:
    lVar15 = (*(code *)*puVar7)(plVar10,puVar7[1]);
    if (lVar15 != 0) {
      lVar17 = *(long *)(*(long *)(lVar13 + 0x38) + 0x28);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar17 = *(long *)(*(long *)(lVar13 + 0x38) + 0x28);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
      if (lVar17 == 0) {
        lVar17 = *(long *)(*(long *)(lVar13 + 0x38) + 0x28);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c();
        }
        if (*(int *)(lVar17 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar17 = *(long *)(*(long *)(lVar13 + 0x38) + 0x28);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c();
        }
        uVar8 = **(undefined8 **)(lVar17 + 0xb8);
        lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aaa0);
        plVar12 = (long *)0x0;
        func_0x053569b8(lVar17,uVar8,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x30));
        lVar6 = *(long *)(*(long *)(lVar13 + 0x38) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x0325681c();
        }
        *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar17;
        lVar6 = *(long *)(*(long *)(lVar13 + 0x38) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x0325681c();
        }
        func_0x032809c4(*(long *)(lVar6 + 0xb8) + 8,lVar17);
      }
      uVar8 = func_0x03d50a94(lVar15,lVar17,*(undefined8 *)PTR_DAT_0777aa90);
      uVar4 = func_0x03d37bc0(uVar8,lVar14,*(undefined8 *)PTR_DAT_0776aeb0);
      uStack_c8._0_6_ = (uint6)(uint)uStack_c8;
      plVar24 = *(long **)PTR_DAT_07751420;
      func_0x04377614((long)&uStack_c8 + 4,uVar4 & 1);
    }
  }
  plVar10 = *(long **)(lVar16 + 0x40);
  if (plVar10 != (long *)0x0) {
    lVar15 = *plVar10;
    lVar16 = *(long *)(*(long *)(lVar13 + 0x38) + 0x38);
    uVar8 = *(undefined8 *)PTR_DAT_0777aab8;
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
          lVar15 = lVar15 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40264;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    lVar15 = func_0x03256b10(plVar10);
LAB_03e40264:
    lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
    plVar24 = (long *)(**(code **)(lVar15 + 8))(plVar10,uVar8,lVar5,0,lVar15);
    return plVar24;
  }
LAB_03e402a8:
  auVar25 = func_0x03280cac();
  plVar10 = plVar24;
  if ((plVar24[7] == 0) && (func_0x03280a18(PTR_DAT_0777aac0), plVar24[7] == 0)) {
    func_0x03256878(plVar24);
  }
  plVar11 = *(long **)(auVar25._0_8_ + 0x40);
  if (plVar11 == (long *)0x0) {
    auVar25 = func_0x03280cac();
    plVar24 = plVar10;
    if ((plVar10[7] == 0) && (func_0x03280a18(PTR_DAT_0777aac8), plVar10[7] == 0)) {
      func_0x03256878(plVar10);
    }
    plVar11 = *(long **)(auVar25._0_8_ + 0x40);
    if (plVar11 == (long *)0x0) {
      auVar25 = func_0x03280cac();
      plVar10 = plVar24;
      if ((plVar24[7] == 0) && (func_0x03280a18(PTR_DAT_0777aad0), plVar24[7] == 0)) {
        func_0x03256878(plVar24);
      }
      plVar11 = *(long **)(auVar25._0_8_ + 0x40);
      if (plVar11 == (long *)0x0) {
        auVar25 = func_0x03280cac();
        plVar24 = plVar10;
        if ((plVar10[7] == 0) && (func_0x03280a18(PTR_DAT_0777aad8), plVar10[7] == 0)) {
          func_0x03256878(plVar10);
        }
        plVar11 = *(long **)(auVar25._0_8_ + 0x40);
        if (plVar11 == (long *)0x0) {
          auVar25 = func_0x03280cac();
          plVar10 = plVar24;
          if ((plVar24[7] == 0) && (func_0x03280a18(PTR_DAT_0777aae0), plVar24[7] == 0)) {
            func_0x03256878(plVar24);
          }
          plVar11 = *(long **)(auVar25._0_8_ + 0x40);
          if (plVar11 == (long *)0x0) {
            auVar25 = func_0x03280cac();
            plVar24 = plVar10;
            if ((plVar10[7] == 0) && (func_0x03280a18(PTR_DAT_0777aae8), plVar10[7] == 0)) {
              func_0x03256878(plVar10);
            }
            plVar11 = *(long **)(auVar25._0_8_ + 0x40);
            if (plVar11 == (long *)0x0) {
              auVar25 = func_0x03280cac();
              plVar10 = plVar24;
              if ((plVar24[7] == 0) && (func_0x03280a18(PTR_DAT_0777aaf0), plVar24[7] == 0)) {
                func_0x03256878(plVar24);
              }
              plVar11 = *(long **)(auVar25._0_8_ + 0x40);
              if (plVar11 == (long *)0x0) {
                auVar25 = func_0x03280cac();
                puVar3 = PTR_DAT_0777ab00;
                puVar2 = PTR_DAT_0777aaf8;
                if ((bRam0000000007e17dbe & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0777aaf8);
                  func_0x03280a18(PTR_DAT_0777ab00);
                  func_0x03280a18(PTR_DAT_0777ab08);
                  func_0x03280a18(PTR_DAT_0777ab10);
                  bRam0000000007e17dbe = 1;
                }
                plVar24 = *(long **)(auVar25._0_8_ + 0x40);
                uVar8 = func_0x03d2c6a8(auVar25._8_8_,*(undefined8 *)puVar2);
                uVar8 = func_0x03d5ffd0(uVar8,*(undefined8 *)puVar3);
                if (plVar24 == (long *)0x0) {
                  auVar25 = func_0x03280cac();
                  plVar24 = plVar10;
                  if ((plVar10[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab18), plVar10[7] == 0)) {
                    func_0x03256878(plVar10);
                  }
                  plVar11 = *(long **)(auVar25._0_8_ + 0x40);
                  if (plVar11 == (long *)0x0) {
                    auVar25 = func_0x03280cac();
                    plVar10 = plVar24;
                    if ((plVar24[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab20), plVar24[7] == 0)) {
                      func_0x03256878(plVar24);
                    }
                    plVar11 = *(long **)(auVar25._0_8_ + 0x40);
                    if (plVar11 == (long *)0x0) {
                      auVar25 = func_0x03280cac();
                      plVar24 = plVar10;
                      plVar11 = plVar12;
                      if (plVar12[7] == 0) {
                        func_0x03280a18(PTR_DAT_077507d0);
                        func_0x03280a18(PTR_DAT_0775a958);
                        func_0x03280a18(PTR_DAT_07750838);
                        func_0x03280a18(PTR_DAT_0777ab28);
                        func_0x03280a18(PTR_DAT_07779e90);
                        if (plVar12[7] == 0) {
                          func_0x03256878(plVar12);
                        }
                      }
                      plVar21 = *(long **)(auVar25._0_8_ + 0x40);
                      lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                      func_0x04fe1fa4(lVar15,*(undefined8 *)PTR_DAT_0775a958);
                      if (lVar15 != 0) {
                        plVar11 = *(long **)PTR_DAT_077507d0;
                        func_0x04fe2d7c(lVar15,*(undefined8 *)PTR_DAT_07779e90);
                        plVar24 = plVar10;
                        if (plVar21 != (long *)0x0) {
                          lVar16 = *plVar21;
                          lVar23 = *(long *)(plVar12[7] + 8);
                          uVar8 = *(undefined8 *)PTR_DAT_0777ab28;
                          uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                          if (uVar19 != 0) {
                            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar20 + -2) == *(long *)(lVar23 + 0x20)) {
                                lVar16 = lVar16 + (long)(int)(*piVar20 +
                                                             (uint)*(ushort *)(lVar23 + 0x50)) *
                                                  0x10 + 0x138;
                                goto LAB_03e40cdc;
                              }
                              uVar19 = uVar19 - 1;
                              piVar20 = piVar20 + 4;
                            } while (uVar19 != 0);
                          }
                          lVar16 = func_0x03256b10(plVar21);
LAB_03e40cdc:
                          lVar16 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          plVar24 = (long *)(**(code **)(lVar16 + 8))
                                                      (plVar21,uVar8,auVar25._8_8_,lVar15,lVar16);
                          return plVar24;
                        }
                      }
                      auVar25 = func_0x03280cac();
                      plVar10 = plVar24;
                      if ((plVar24[7] == 0) && (func_0x03280a18(PTR_DAT_0777ab30), plVar24[7] == 0))
                      {
                        func_0x03256878(plVar24);
                      }
                      plVar12 = *(long **)(auVar25._0_8_ + 0x40);
                      if (plVar12 == (long *)0x0) {
                        auVar25 = func_0x03280cac();
                        plVar24 = plVar10;
                        plVar12 = plVar11;
                        if (plVar11[7] == 0) {
                          func_0x03280a18(PTR_DAT_077507d0);
                          func_0x03280a18(PTR_DAT_0775a958);
                          func_0x03280a18(PTR_DAT_07750838);
                          func_0x03280a18(PTR_DAT_07779e90);
                          func_0x03280a18(PTR_DAT_0777ab38);
                          if (plVar11[7] == 0) {
                            func_0x03256878(plVar11);
                          }
                        }
                        plVar21 = *(long **)(auVar25._0_8_ + 0x40);
                        lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                        func_0x04fe1fa4(lVar15,*(undefined8 *)PTR_DAT_0775a958);
                        if (lVar15 != 0) {
                          plVar12 = *(long **)PTR_DAT_077507d0;
                          func_0x04fe2d7c(lVar15,*(undefined8 *)PTR_DAT_07779e90,plVar10,plVar12);
                          plVar24 = plVar10;
                          if (plVar21 != (long *)0x0) {
                            lVar16 = *plVar21;
                            lVar23 = *(long *)(plVar11[7] + 8);
                            uVar8 = *(undefined8 *)PTR_DAT_0777ab38;
                            uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                            if (uVar19 != 0) {
                              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar20 + -2) == *(long *)(lVar23 + 0x20)) {
                                  lVar16 = lVar16 + (long)(int)(*piVar20 +
                                                               (uint)*(ushort *)(lVar23 + 0x50)) *
                                                    0x10 + 0x138;
                                  goto LAB_03e40f1c;
                                }
                                uVar19 = uVar19 - 1;
                                piVar20 = piVar20 + 4;
                              } while (uVar19 != 0);
                            }
                            lVar16 = func_0x03256b10(plVar21);
LAB_03e40f1c:
                            lVar16 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            plVar24 = (long *)(**(code **)(lVar16 + 8))
                                                        (plVar21,uVar8,auVar25._8_8_,lVar15,lVar16);
                            return plVar24;
                          }
                        }
                        auVar25 = func_0x03280cac();
                        if (*(long *)(lVar23 + 0x38) == 0) {
                          func_0x03280a18(PTR_DAT_0777ab40);
                          func_0x03280a18(PTR_DAT_0777ab48);
                          if (*(long *)(lVar23 + 0x38) == 0) {
                            func_0x03256878(lVar23);
                          }
                        }
                        lVar16 = *(long *)PTR_DAT_0777ab40;
                        lVar15 = *(long *)(lVar16 + 0x38);
                        if (lVar15 == 0) {
                          func_0x03256878(lVar16);
                          lVar15 = *(long *)(lVar16 + 0x38);
                        }
                        lVar15 = *(long *)(lVar15 + 0x10);
                        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                          lVar15 = func_0x0325681c();
                        }
                        if (*(int *)(lVar15 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
                        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                          lVar15 = func_0x0325681c();
                        }
                        uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 0x10))
                                          (auVar25._8_8_,plVar24,**(undefined8 **)(lVar15 + 0xb8));
                        plVar24 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
                        func_0x05a85e88(plVar24,auVar25._0_8_,plVar12,uVar19 & 0xffffffff,uVar8,0);
                        return plVar24;
                      }
                      lVar15 = *plVar12;
                      lVar16 = *(long *)(plVar24[7] + 8);
                      uVar8 = *(undefined8 *)PTR_DAT_0777ab30;
                      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
                      if (uVar19 != 0) {
                        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
                            lVar15 = lVar15 + (long)(int)(*piVar20 +
                                                         (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                                     0x138;
                            goto LAB_03e40dbc;
                          }
                          uVar19 = uVar19 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar19 != 0);
                      }
                      lVar15 = func_0x03256b10(plVar12);
LAB_03e40dbc:
                      lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      plVar24 = (long *)(**(code **)(lVar15 + 8))
                                                  (plVar12,uVar8,auVar25._8_8_,0,lVar15);
                      return plVar24;
                    }
                    lVar15 = *plVar11;
                    lVar16 = *(long *)(plVar24[7] + 8);
                    uVar8 = *(undefined8 *)PTR_DAT_0777ab20;
                    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    if (uVar19 != 0) {
                      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
                          lVar15 = lVar15 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar16 + 0x50))
                                            * 0x10 + 0x138;
                          goto LAB_03e40b7c;
                        }
                        uVar19 = uVar19 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar19 != 0);
                    }
                    lVar15 = func_0x03256b10(plVar11);
LAB_03e40b7c:
                    lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    plVar24 = (long *)(**(code **)(lVar15 + 8))
                                                (plVar11,uVar8,auVar25._8_8_,0,lVar15);
                    return plVar24;
                  }
                  lVar15 = *plVar11;
                  lVar16 = *(long *)(plVar10[7] + 8);
                  uVar8 = *(undefined8 *)PTR_DAT_0777ab18;
                  uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar19 != 0) {
                    piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
                        lVar15 = lVar15 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar16 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_03e40a9c;
                      }
                      uVar19 = uVar19 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar19 != 0);
                  }
                  lVar15 = func_0x03256b10(plVar11);
LAB_03e40a9c:
                  lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar24 = (long *)(**(code **)(lVar15 + 8))(plVar11,uVar8,auVar25._8_8_,0,lVar15);
                  return plVar24;
                }
                lVar15 = *plVar24;
                lVar16 = *(long *)PTR_DAT_0777ab08;
                uVar22 = *(undefined8 *)PTR_DAT_0777ab10;
                uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar19 != 0) {
                  piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
                      lVar15 = lVar15 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar16 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_03e409bc;
                    }
                    uVar19 = uVar19 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar19 != 0);
                }
                lVar15 = func_0x03256b10(plVar24);
LAB_03e409bc:
                lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e409ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar24 = (long *)(**(code **)(lVar15 + 8))(plVar24,uVar22,uVar8,0,lVar15);
                return plVar24;
              }
              lVar15 = *plVar11;
              lVar16 = *(long *)(plVar24[7] + 8);
              uVar8 = *(undefined8 *)PTR_DAT_0777aaf0;
              uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
                    lVar15 = lVar15 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar16 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_03e40894;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              lVar15 = func_0x03256b10(plVar11);
LAB_03e40894:
              lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e408c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar24 = (long *)(**(code **)(lVar15 + 8))(plVar11,uVar8,auVar25._8_8_,0,lVar15);
              return plVar24;
            }
            lVar15 = *plVar11;
            lVar16 = *(long *)(plVar10[7] + 8);
            uVar8 = *(undefined8 *)PTR_DAT_0777aae8;
            uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
                  lVar15 = lVar15 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03e407b4;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            lVar15 = func_0x03256b10(plVar11);
LAB_03e407b4:
            lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e407e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar24 = (long *)(**(code **)(lVar15 + 8))(plVar11,uVar8,auVar25._8_8_,0,lVar15);
            return plVar24;
          }
          lVar15 = *plVar11;
          lVar16 = *(long *)(plVar24[7] + 8);
          uVar8 = *(undefined8 *)PTR_DAT_0777aae0;
          uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
                lVar15 = lVar15 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_03e406d4;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar15 = func_0x03256b10(plVar11);
LAB_03e406d4:
          lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar24 = (long *)(**(code **)(lVar15 + 8))(plVar11,uVar8,auVar25._8_8_,0,lVar15);
          return plVar24;
        }
        lVar15 = *plVar11;
        lVar16 = *(long *)(plVar10[7] + 8);
        uVar8 = *(undefined8 *)PTR_DAT_0777aad8;
        uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
              lVar15 = lVar15 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_03e405f4;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        lVar15 = func_0x03256b10(plVar11);
LAB_03e405f4:
        lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar24 = (long *)(**(code **)(lVar15 + 8))(plVar11,uVar8,auVar25._8_8_,0,lVar15);
        return plVar24;
      }
      lVar15 = *plVar11;
      lVar16 = *(long *)(plVar24[7] + 8);
      uVar8 = *(undefined8 *)PTR_DAT_0777aad0;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
            lVar15 = lVar15 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_03e40514;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      lVar15 = func_0x03256b10(plVar11);
LAB_03e40514:
      lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar24 = (long *)(**(code **)(lVar15 + 8))(plVar11,uVar8,auVar25._8_8_,0,lVar15);
      return plVar24;
    }
    lVar15 = *plVar11;
    lVar16 = *(long *)(plVar10[7] + 8);
    uVar8 = *(undefined8 *)PTR_DAT_0777aac8;
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
          lVar15 = lVar15 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40434;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    lVar15 = func_0x03256b10(plVar11);
LAB_03e40434:
    lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar24 = (long *)(**(code **)(lVar15 + 8))(plVar11,uVar8,auVar25._8_8_,0,lVar15);
    return plVar24;
  }
  lVar15 = *plVar11;
  lVar16 = *(long *)(plVar24[7] + 8);
  uVar8 = *(undefined8 *)PTR_DAT_0777aac0;
  uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)(lVar16 + 0x20)) {
        lVar15 = lVar15 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40354;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  lVar15 = func_0x03256b10(plVar11);
LAB_03e40354:
  lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar24 = (long *)(**(code **)(lVar15 + 8))(plVar11,uVar8,auVar25._8_8_,0,lVar15);
  return plVar24;
}

