/* Ghidra 12.1.2 native pseudocode; RVA 0x6A57B60; Merger.MergeBoardQueue.Services.MergeBoardQueueOperationTrackingService.TrackEnqueueItemOperation; status ok */


void Merger_MergeBoardQueue_Services_MergeBoardQueueOperationTrackingService__TrackEnqueueItemOperation
               (long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long *plVar20;
  long *plVar21;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  ulong unaff_x29;
  undefined1 auVar22 [16];
  
  plVar21 = (long *)PTR_DAT_07830300;
  plVar15 = param_3;
  if ((bRam0000000007e2a604 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_077c1dd8);
    func_0x03280a18(PTR_DAT_07830308);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077c1de0);
    func_0x03280a18(PTR_DAT_077c1de8);
    func_0x03280a18(PTR_DAT_077c1df8);
    func_0x03280a18(PTR_DAT_077c1dc0);
    func_0x03280a18(PTR_DAT_077c1e00);
    func_0x03280a18(PTR_DAT_077c1db8);
    func_0x03280a18(PTR_DAT_07830300);
    func_0x03280a18(PTR_DAT_0777a4a8);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_077c1e10);
    func_0x03280a18(PTR_DAT_07830310);
    func_0x03280a18(PTR_DAT_077c1e18);
    bRam0000000007e2a604 = 1;
  }
  lVar9 = func_0x03280ca0(*plVar21);
  func_0x06b9aecc(lVar9,0);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_0777e5f8;
    func_0x032809c4();
    puVar5 = PTR_DAT_077c1e18;
    puVar4 = PTR_DAT_0777aa98;
    if (param_2 != (long *)0x0) {
      lVar16 = *param_2;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07779820) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_06b57cf8;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      plVar15 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b57cf8:
      uVar11 = (*(code *)*puVar10)(param_2,puVar10[1]);
      *(undefined8 *)(lVar9 + 0x28) = uVar11;
      func_0x032809c4();
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar5;
      func_0x032809c4();
      param_2 = (long *)func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x06a30df4(param_2,0);
      puVar7 = PTR_DAT_07830310;
      puVar6 = PTR_DAT_077c1e00;
      puVar3 = PTR_DAT_077c1df8;
      puVar2 = PTR_DAT_0777a4a8;
      plVar21 = (long *)puVar4;
      unaff_x25 = puVar5;
      if (param_2 != (long *)0x0) {
        param_2[6] = (long)param_3;
        func_0x032809c4(param_2 + 6,param_3);
        param_2[7] = (long)param_4;
        *(long *)(lVar9 + 0x20) = (long)param_2;
        func_0x032809c4((long *)(lVar9 + 0x20),param_2);
        *(long *)(lVar9 + 0x30) = (long)param_3;
        func_0x032809c4((long *)(lVar9 + 0x30),param_3);
        *(long **)(lVar9 + 0x38) = param_4;
        *(long **)(lVar9 + 0x68) = param_4;
        *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)puVar7;
        func_0x032809c4();
        uVar11 = func_0x03280ca0(*(undefined8 *)puVar2);
        plVar15 = (long *)0x0;
        func_0x06b9aed4(uVar11,0);
        *(undefined8 *)(lVar9 + 0x98) = uVar11;
        func_0x032809c4((undefined8 *)(lVar9 + 0x98),uVar11);
        param_4 = (long *)param_1[5];
        plVar12 = (long *)func_0x03280ca0(*(undefined8 *)puVar6);
        func_0x04143c38(plVar12,*(undefined8 *)puVar3);
        param_3 = plVar12;
        plVar21 = (long *)puVar7;
        unaff_x25 = puVar2;
        unaff_x26 = puVar6;
        unaff_x27 = puVar3;
        if (plVar12 != (long *)0x0) {
          lVar16 = plVar12[2];
          lVar18 = *(long *)PTR_DAT_077c1de8;
          *(int *)((long)plVar12 + 0x1c) = *(int *)((long)plVar12 + 0x1c) + 1;
          if (lVar16 != 0) {
            uVar1 = *(uint *)(plVar12 + 3);
            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(plVar12 + 3) = uVar1 + 1;
              plVar13 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
              *plVar13 = lVar9;
              func_0x032809c4(plVar13,lVar9);
            }
            else {
              plVar15 = *(long **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
              func_0x0414446c(plVar12,lVar9);
            }
            puVar5 = PTR_DAT_077c1dc0;
            puVar4 = PTR_DAT_077c1db8;
            if (param_4 != (long *)0x0) {
              lVar16 = *param_4;
              param_2 = *(long **)PTR_DAT_077c1dd8;
              lVar9 = *(long *)PTR_DAT_077c1e10;
              uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == param_2[4]) {
                    lVar16 = lVar16 + (long)(int)(*piVar19 + (uint)*(ushort *)(param_2 + 10)) * 0x10
                             + 0x138;
                    goto LAB_06b57ecc;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              lVar16 = func_0x03256b10(param_4);
LAB_06b57ecc:
              lVar16 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),param_2);
              param_3 = (long *)(**(code **)(lVar16 + 8))(param_4,lVar9,plVar12,0,lVar16);
              param_1 = (long *)param_1[5];
              param_4 = (long *)func_0x03280ca0(*(undefined8 *)puVar4);
              func_0x04143c38(param_4,*(undefined8 *)puVar5);
              plVar15 = plVar12;
              plVar21 = (long *)puVar5;
              unaff_x25 = puVar4;
              if (param_4 != (long *)0x0) {
                lVar16 = param_4[2];
                lVar18 = *(long *)PTR_DAT_077c1de0;
                *(int *)((long)param_4 + 0x1c) = *(int *)((long)param_4 + 0x1c) + 1;
                if (lVar16 != 0) {
                  uVar1 = *(uint *)(param_4 + 3);
                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                    *(uint *)(param_4 + 3) = uVar1 + 1;
                    plVar15 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar15 = (long)param_3;
                    func_0x032809c4(plVar15,param_3);
                  }
                  else {
                    plVar12 = *(long **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
                    func_0x0414446c(param_4,param_3);
                  }
                  plVar15 = plVar12;
                  if (param_1 != (long *)0x0) {
                    lVar9 = *param_1;
                    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar17 != 0) {
                      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07830308) {
                          puVar10 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                          goto LAB_06b57fd4;
                        }
                        uVar17 = uVar17 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x03256b10(param_1,*(long *)PTR_DAT_07830308,0);
LAB_06b57fd4:
                    /* WARNING: Could not recover jumptable at 0x06b57ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)*puVar10)(param_1,param_4,0,puVar10[1]);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auVar22 = func_0x03280cac();
  if ((bRam0000000007e2a605 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1e10);
    bRam0000000007e2a605 = 1;
  }
  if (*(long *)(auVar22._0_8_ + 0x28) == 0) {
    return;
  }
  plVar12 = *(long **)PTR_DAT_077c1e10;
  uVar11 = 0x6b58000;
  puVar8 = &stack0xffffffffffffffb0;
  do {
    plVar20 = auVar22._0_8_;
    *(ulong *)(puVar8 + -0x60) = unaff_x29;
    *(undefined8 *)(puVar8 + -0x58) = uVar11;
    *(undefined **)(puVar8 + -0x50) = unaff_x28;
    *(undefined **)(puVar8 + -0x48) = unaff_x27;
    *(undefined **)(puVar8 + -0x40) = unaff_x26;
    *(undefined **)(puVar8 + -0x38) = unaff_x25;
    *(long **)(puVar8 + -0x30) = plVar21;
    *(long **)(puVar8 + -0x28) = param_2;
    *(long *)(puVar8 + -0x20) = lVar9;
    *(long **)(puVar8 + -0x18) = param_3;
    *(long **)(puVar8 + -0x10) = param_4;
    *(long **)(puVar8 + -8) = param_1;
    param_2 = (long *)0x7e2a000;
    plVar13 = plVar15;
    if ((bRam0000000007e2a607 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a488);
      func_0x03280a18(PTR_DAT_0777aa98);
      func_0x03280a18(PTR_DAT_077c1dd8);
      func_0x03280a18(PTR_DAT_07830308);
      func_0x03280a18(PTR_DAT_07779820);
      func_0x03280a18(PTR_DAT_0777a4a0);
      func_0x03280a18(PTR_DAT_077c1de0);
      func_0x03280a18(PTR_DAT_077c1de8);
      func_0x03280a18(PTR_DAT_077c1df8);
      func_0x03280a18(PTR_DAT_077c1dc0);
      func_0x03280a18(PTR_DAT_077c1e00);
      func_0x03280a18(PTR_DAT_077c1db8);
      func_0x03280a18(PTR_DAT_07830300);
      func_0x03280a18(PTR_DAT_0777a4a8);
      func_0x03280a18(PTR_DAT_0777e5f8);
      func_0x03280a18(PTR_DAT_077c1e18);
      bRam0000000007e2a607 = 1;
    }
    puVar4 = PTR_DAT_07830300;
    lVar9 = 0;
    plVar21 = plVar12;
    if (auVar22._8_8_ != 0) {
      func_0x03d1b250(puVar8 + -0x90,auVar22._8_8_,*(undefined8 *)PTR_DAT_0777a488);
      param_2 = *(long **)(puVar8 + -0x88);
      unaff_x25 = *(undefined **)(puVar8 + -0x80);
      unaff_x26 = *(undefined **)(puVar8 + -0x78);
      uVar1 = *(uint *)(puVar8 + -0x70);
      unaff_x29 = (ulong)uVar1;
      unaff_x27 = *(undefined **)(puVar8 + -0x68);
      lVar9 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x06b9aecc(lVar9,0);
      unaff_x28 = puVar4;
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_0777e5f8;
        func_0x032809c4();
        puVar5 = PTR_DAT_077c1e18;
        puVar4 = PTR_DAT_0777aa98;
        if (plVar15 != (long *)0x0) {
          lVar16 = *plVar15;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07779820) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_06b58244;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          plVar13 = (long *)0x0;
          puVar10 = (undefined8 *)func_0x03256b10(plVar15);
LAB_06b58244:
          uVar11 = (*(code *)*puVar10)(plVar15,puVar10[1]);
          *(undefined8 *)(lVar9 + 0x28) = uVar11;
          func_0x032809c4();
          *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar5;
          func_0x032809c4();
          lVar16 = func_0x03280ca0(*(undefined8 *)puVar4);
          func_0x06a30df4(lVar16,0);
          puVar3 = PTR_DAT_0777a4a8;
          puVar2 = PTR_DAT_0777a4a0;
          plVar15 = (long *)0x0;
          param_4 = (long *)puVar5;
          unaff_x28 = puVar4;
          if (lVar16 != 0) {
            *(long *)(lVar16 + 0x30) = (long)param_2;
            func_0x032809c4((long *)(lVar16 + 0x30),param_2);
            *(undefined **)(lVar16 + 0x38) = unaff_x27;
            *(long *)(lVar9 + 0x20) = lVar16;
            func_0x032809c4((long *)(lVar9 + 0x20),lVar16);
            *(long *)(lVar9 + 0x30) = (long)param_2;
            func_0x032809c4((long *)(lVar9 + 0x30),param_2);
            *(undefined **)(lVar9 + 0x38) = unaff_x25;
            *(undefined **)(lVar9 + 0x68) = unaff_x26;
            *(undefined8 *)(puVar8 + -0x90) = *(undefined8 *)puVar2;
            *(undefined8 *)(puVar8 + -0x88) = 0xffffffffffffffff;
            *(uint *)(puVar8 + -0x80) = uVar1;
            uVar11 = func_0x057cd6e4(puVar8 + -0x90,0);
            *(undefined8 *)(lVar9 + 0x60) = uVar11;
            func_0x032809c4();
            uVar11 = func_0x03280ca0(*(undefined8 *)puVar3);
            plVar13 = (long *)0x0;
            func_0x06b9aed4(uVar11,0xffffffff);
            *(undefined8 *)(lVar9 + 0x98) = uVar11;
            func_0x032809c4((undefined8 *)(lVar9 + 0x98),uVar11);
            plVar15 = (long *)plVar20[5];
            param_2 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077c1e00);
            func_0x04143c38(param_2,*(undefined8 *)PTR_DAT_077c1df8);
            param_4 = (long *)puVar2;
            unaff_x28 = puVar3;
            if (param_2 != (long *)0x0) {
              lVar16 = param_2[2];
              lVar18 = *(long *)PTR_DAT_077c1de8;
              *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
              if (lVar16 != 0) {
                uVar1 = *(uint *)(param_2 + 3);
                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(param_2 + 3) = uVar1 + 1;
                  plVar14 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar14 = lVar9;
                  func_0x032809c4(plVar14,lVar9);
                }
                else {
                  plVar13 = *(long **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
                  func_0x0414446c(param_2,lVar9);
                }
                puVar5 = PTR_DAT_077c1dc0;
                puVar4 = PTR_DAT_077c1db8;
                param_4 = plVar12;
                if (plVar15 != (long *)0x0) {
                  lVar9 = *plVar15;
                  lVar16 = *(long *)PTR_DAT_077c1dd8;
                  uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar17 != 0) {
                    piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)(lVar16 + 0x20)) {
                        lVar9 = lVar9 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar16 + 0x50)) *
                                        0x10 + 0x138;
                        goto LAB_06b5842c;
                      }
                      uVar17 = uVar17 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 != 0);
                  }
                  lVar9 = func_0x03256b10(plVar15);
LAB_06b5842c:
                  lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar16);
                  plVar13 = param_2;
                  lVar9 = (**(code **)(lVar9 + 8))(plVar15,plVar12,param_2,0,lVar9);
                  plVar20 = (long *)plVar20[5];
                  param_4 = (long *)func_0x03280ca0(*(undefined8 *)puVar4);
                  func_0x04143c38(param_4,*(undefined8 *)puVar5);
                  plVar21 = (long *)puVar5;
                  unaff_x25 = puVar4;
                  if (param_4 != (long *)0x0) {
                    lVar16 = param_4[2];
                    lVar18 = *(long *)PTR_DAT_077c1de0;
                    *(int *)((long)param_4 + 0x1c) = *(int *)((long)param_4 + 0x1c) + 1;
                    if (lVar16 != 0) {
                      uVar1 = *(uint *)(param_4 + 3);
                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                        *(uint *)(param_4 + 3) = uVar1 + 1;
                        plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar12 = lVar9;
                        func_0x032809c4(plVar12,lVar9);
                      }
                      else {
                        plVar13 = *(long **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
                        func_0x0414446c(param_4,lVar9);
                      }
                      if (plVar20 != (long *)0x0) {
                        lVar9 = *plVar20;
                        uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
                        if (uVar17 == 0) goto LAB_06b58518;
                        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    auVar22 = func_0x03280cac();
    *(undefined8 *)(puVar8 + -0xc0) = 0x6b5856c;
    *(long **)(puVar8 + -0xb0) = plVar15;
    *(long *)(puVar8 + -0xa8) = lVar9;
    *(long **)(puVar8 + -0xa0) = param_4;
    *(long **)(puVar8 + -0x98) = plVar20;
    if ((bRam0000000007e2a606 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07811888);
      bRam0000000007e2a606 = 1;
    }
    if (*(long *)(auVar22._0_8_ + 0x28) == 0) {
      return;
    }
    plVar12 = *(long **)PTR_DAT_07811888;
    param_4 = *(long **)(puVar8 + -0xa0);
    param_1 = *(long **)(puVar8 + -0x98);
    lVar9 = *(long *)(puVar8 + -0xb0);
    param_3 = *(long **)(puVar8 + -0xa8);
    uVar11 = *(undefined8 *)(puVar8 + -0xc0);
    puVar8 = puVar8 + -0x90;
    plVar15 = plVar13;
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07830308) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_06b58534;
    }
  }
LAB_06b58518:
  puVar10 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_07830308,0);
LAB_06b58534:
  (*(code *)*puVar10)(plVar20,param_4,0,puVar10[1]);
  return;
}

