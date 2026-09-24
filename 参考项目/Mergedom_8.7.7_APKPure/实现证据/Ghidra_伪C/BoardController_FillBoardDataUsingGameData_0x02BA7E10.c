
undefined8 Recovered_BoardController_FillBoardDataUsingGameData_0x02BA7E10(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if ((bRam000000000681290c & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f9df8);
    func_0x02ad6de0(PTR_DAT_063fa128);
    func_0x02ad6de0(PTR_DAT_063f2158);
    func_0x02ad6de0(PTR_DAT_063f0dd0);
    func_0x02ad6de0(PTR_DAT_063fa428);
    func_0x02ad6de0(PTR_DAT_063fa430);
    func_0x02ad6de0(PTR_DAT_063fa438);
    func_0x02ad6de0(PTR_DAT_063f0de0);
    func_0x02ad6de0(PTR_DAT_063f9e30);
    func_0x02ad6de0(PTR_DAT_063fa440);
    func_0x02ad6de0(PTR_DAT_063fa448);
    func_0x02ad6de0(PTR_DAT_063f0f18);
    func_0x02ad6de0(PTR_DAT_063fa450);
    func_0x02ad6de0(PTR_DAT_063fa458);
    bRam000000000681290c = 1;
  }
  puVar3 = PTR_DAT_063f0f18;
  lVar15 = *(long *)(param_1 + 0xa0);
  plStack_70 = (long *)0x0;
  uStack_68 = 0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  if (lVar15 != 0) {
    if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
      uVar18 = 0;
      uVar17 = 0;
      uVar9 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar18) goto LAB_02ca84c0;
        lVar19 = *(long *)(lVar15 + uVar18 * 8 + 0x20);
        if ((lVar19 != 0) && (0 < (int)*(ulong *)(lVar19 + 0x18))) {
          uVar9 = 0;
          uVar10 = *(ulong *)(lVar19 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar9) goto LAB_02ca84c0;
            lVar13 = *(long *)(lVar19 + 0x20 + uVar9 * 8);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              func_0x02ad6f5c();
            }
            uVar10 = func_0x05c465f8(lVar13,0,0);
            if ((uVar10 & 1) == 0) {
              if (lVar13 == 0) goto LAB_02ca84bc;
              uVar14 = *(undefined8 *)(lVar13 + 0x30);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                func_0x02ad6f5c();
              }
              uVar8 = func_0x05c4a644(uVar14,0);
              uVar17 = uVar8 | uVar17;
            }
            uVar10 = (ulong)*(uint *)(lVar19 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((long)uVar9 < (long)(int)*(uint *)(lVar19 + 0x18));
          uVar9 = (ulong)*(uint *)(lVar15 + 0x18);
        }
        puVar7 = PTR_DAT_063fa450;
        puVar6 = PTR_DAT_063fa448;
        puVar5 = PTR_DAT_063f9df8;
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)(int)uVar9);
      if ((uVar17 & 1) != 0) {
        lVar15 = *(long *)(param_1 + 0x68);
        if (lVar15 == 0) {
LAB_02ca84bc:
                    /* WARNING: Subroutine does not return */
          NullReferenceThrowHelper();
        }
        if (0 < *(int *)(lVar15 + 0x18)) {
          uVar17 = 0;
          do {
            lVar19 = *(long *)(param_1 + 0xa0);
            if (lVar19 == 0) goto LAB_02ca84bc;
            if (*(uint *)(lVar19 + 0x18) <= uVar17) {
LAB_02ca84c0:
                    /* WARNING: Subroutine does not return */
              BoundsThrowHelper();
            }
            if (*(long *)(lVar19 + (ulong)uVar17 * 8 + 0x20) == 0) {
              return 0;
            }
            uVar18 = 0;
            while ((long)uVar18 < (long)*(int *)(lVar15 + 0x1c)) {
              lVar15 = *(long *)(param_1 + 0xa0);
              if (lVar15 == 0) goto LAB_02ca84bc;
              if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_02ca84c0;
              lVar15 = *(long *)(lVar15 + (ulong)uVar17 * 8 + 0x20);
              if (lVar15 == 0) goto LAB_02ca84bc;
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02ca84c0;
              lVar15 = *(long *)(lVar15 + uVar18 * 8 + 0x20);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                func_0x02ad6f5c();
              }
              uVar9 = func_0x05c465f8(lVar15,0,0);
              if ((uVar9 & 1) == 0) {
                if (*(long *)(param_1 + 0x68) == 0) goto LAB_02ca84bc;
                iVar1 = *(int *)(*(long *)(param_1 + 0x68) + 0x1c);
                lVar19 = func_0x02ca5f94(param_1);
                if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
                    (lVar19 = TailTarget_3b28b60(*(long *)(lVar19 + 0x10),
                                                 (int)uVar18 + iVar1 * uVar17,*(undefined8 *)puVar6)
                    , lVar19 == 0)) || (func_0x02c9d5c8(), lVar15 == 0)) goto LAB_02ca84bc;
                lVar13 = *(long *)puVar3;
                *(undefined1 *)(lVar19 + 0x10) = *(undefined1 *)(lVar15 + 0x2d);
                lVar16 = *(long *)(lVar15 + 0x30);
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  func_0x02ad6f5c();
                }
                uVar9 = func_0x05c4a644(lVar16,0);
                if ((uVar9 & 1) != 0) {
                  lVar13 = *(long *)(lVar15 + 0x30);
                  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x50) == 0)) goto LAB_02ca84bc;
                  *(undefined4 *)(lVar19 + 0x14) = *(undefined4 *)(*(long *)(lVar13 + 0x50) + 0x30);
                  *(undefined4 *)(lVar19 + 0x1c) = *(undefined4 *)(lVar13 + 0x44);
                  uVar14 = *(undefined8 *)PTR_DAT_063fa128;
                  *(undefined1 *)(lVar19 + 0x18) = *(undefined1 *)(lVar13 + 0x40);
                  uVar14 = func_0x034a0b10(lVar13,uVar14);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    func_0x02ad6f5c(*(long *)puVar3);
                  }
                  uVar9 = func_0x05c42ddc(uVar14,0,0);
                  puVar4 = PTR_DAT_063f2158;
                  if ((uVar9 & 1) == 0) {
                    lVar15 = *(long *)PTR_DAT_063f2158;
                    *(undefined8 *)(lVar19 + 0x20) = 0xffffffffffffffff;
                    if (*(int *)(lVar15 + 0xe4) == 0) {
                      func_0x02ad6f5c();
                      lVar15 = *(long *)puVar4;
                    }
                    uStack_68 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10);
                    uVar14 = func_0x051ecd28(&uStack_68,0);
                    *(undefined8 *)(lVar19 + 0x28) = uVar14;
                    func_0x02ad6d8c();
                  }
                  else {
                    if ((*(long *)(lVar15 + 0x30) == 0) ||
                       (lVar15 = func_0x034a0b10(*(long *)(lVar15 + 0x30),
                                                 *(undefined8 *)PTR_DAT_063fa128),
                       puVar4 = PTR_DAT_063f2158, lVar15 == 0)) goto LAB_02ca84bc;
                    *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(lVar15 + 0x58);
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      func_0x02ad6f5c();
                    }
                    uVar14 = func_0x051ecd28(lVar15 + 0x50,0);
                    *(undefined8 *)(lVar19 + 0x28) = uVar14;
                    func_0x02ad6d8c();
                  }
                  puVar4 = PTR_DAT_063fa430;
                  if (lVar16 == 0) goto LAB_02ca84bc;
                  if (*(long *)(lVar16 + 0xb8) != 0) {
                    func_0x03c299c0(&uStack_98,*(long *)(lVar16 + 0xb8),
                                    *(undefined8 *)PTR_DAT_063fa440);
                    plStack_70 = plStack_88;
                    puStack_78 = puStack_90;
                    uStack_80 = uStack_98;
                    uStack_98 = 0;
                    puStack_90 = &uStack_80;
                    while (uVar9 = func_0x04b86898(&uStack_80,*(undefined8 *)puVar4),
                          plVar11 = plStack_70, (uVar9 & 1) != 0) {
                      lVar15 = func_0x02ad7078(*(undefined8 *)puVar5);
                      func_0x0524fb48(lVar15,0);
                      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        NullReferenceThrowHelper();
                      }
                      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                        NullReferenceThrowHelper();
                      }
                      *(int *)(lVar15 + 0x10) = (int)plVar11[6];
                      *(undefined1 *)(lVar15 + 0x14) = *(undefined1 *)((long)plVar11 + 0x34);
                      *(int *)(lVar15 + 0x18) = (int)plVar11[7];
                      uVar14 = func_0x02d3f394(plVar11[9],0);
                      *(undefined8 *)(lVar15 + 0x20) = uVar14;
                      func_0x02ad6d8c();
                      uVar14 = func_0x02d3f394(plVar11[10],0);
                      *(undefined8 *)(lVar15 + 0x28) = uVar14;
                      func_0x02ad6d8c();
                      bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
                      if ((bVar2 <= *(byte *)(*plVar11 + 0x130)) &&
                         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) ==
                          *(long *)puVar7)) {
                        *(undefined4 *)(lVar15 + 0x30) = *(undefined4 *)((long)plVar11 + 0xd4);
                      }
                      lVar13 = *(long *)(lVar19 + 0x30);
                      if (lVar13 == 0) {
LAB_02ca83c0:
                    /* WARNING: Subroutine does not return */
                        NullReferenceThrowHelper();
                      }
                      lVar16 = *(long *)(lVar13 + 0x10);
                      lVar12 = *(long *)PTR_DAT_063f9e30;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      if (lVar16 == 0) goto LAB_02ca83c0;
                      uVar8 = *(uint *)(lVar13 + 0x18);
                      if (uVar8 < *(uint *)(lVar16 + 0x18)) {
                        *(uint *)(lVar13 + 0x18) = uVar8 + 1;
                        plVar11 = (long *)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
                        *plVar11 = lVar15;
                        func_0x02ad6d8c(plVar11,lVar15);
                      }
                      else {
                        func_0x03c28e30(lVar13,lVar15,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    func_0x04b86894(&uStack_80,*(undefined8 *)PTR_DAT_063fa428);
                  }
                }
              }
              lVar15 = *(long *)(param_1 + 0x68);
              uVar18 = uVar18 + 1;
              if (lVar15 == 0) goto LAB_02ca84bc;
            }
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < *(int *)(lVar15 + 0x18));
        }
        uVar14 = func_0x02ca5f94(param_1);
        return uVar14;
      }
    }
    uVar14 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063f0de0);
    func_0x05244dac(uVar14,*(undefined8 *)PTR_DAT_063fa458,0);
    if (*(int *)(*(long *)PTR_DAT_063f0dd0 + 0xe4) == 0) {
      func_0x02ad6f5c();
    }
    func_0x05bf7408(uVar14,0);
  }
  return 0;
}

