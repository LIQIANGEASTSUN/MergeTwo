/* Ghidra 12.1.2 native pseudocode; RVA 0x664BDEC; Merger.Game.ViewModel.Board.BoardQueueViewModel.ShouldSlide; status ok */


/* WARNING: Possible PIC construction at 0x0674c360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0674c39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x055f9840: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0674c3a0) */
/* WARNING: Removing unreachable block (ram,0x0674c3b8) */
/* WARNING: Removing unreachable block (ram,0x0674c364) */
/* WARNING: Removing unreachable block (ram,0x0674c378) */
/* WARNING: Removing unreachable block (ram,0x0674c384) */
/* WARNING: Removing unreachable block (ram,0x055f9844) */

ulong Merger_Game_ViewModel_Board_BoardQueueViewModel__ShouldSlide
                (undefined8 param_1,int param_2,long param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long extraout_x1;
  ulong uVar13;
  undefined8 uVar14;
  int *piVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong unaff_x19;
  undefined *puVar20;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined1 *puVar21;
  undefined8 unaff_x22;
  ushort *puVar22;
  ushort *puVar23;
  undefined8 unaff_x23;
  int iVar24;
  uint uVar25;
  undefined8 unaff_x24;
  undefined *puVar26;
  undefined *unaff_x25;
  long unaff_x26;
  uint uVar27;
  long unaff_x27;
  long unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  unkbyte10 Var31;
  long *plVar7;
  long *plVar12;
  
  uVar19 = param_4;
  if (param_2 == 1) {
    uVar9 = (ulong)((uint)param_5 & 1);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    uVar13 = param_5 & 1;
    unaff_x19 = (ulong)((uint)param_5 & 1);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x22 = 0x7e27000;
    uVar9 = unaff_x19;
    if ((bRam0000000007e27fff & 1) == 0) {
      func_0x03280a18(PTR_DAT_077eefb0);
      func_0x03280a18(PTR_DAT_077eefc0);
      func_0x03280a18(PTR_DAT_0777bfe8);
      bRam0000000007e27fff = 1;
    }
    if (param_3 != 0) {
      if (*(long **)(param_3 + 0x10) != (long *)0x0) {
        lVar18 = **(long **)(param_3 + 0x10);
        bVar2 = *(byte *)(*(long *)PTR_DAT_0777bfe8 + 0x130);
        if ((bVar2 <= *(byte *)(lVar18 + 0x130)) &&
           (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0777bfe8)
           ) {
          return 0;
        }
      }
      if ((param_4 >> 0x20 == 1) && ((param_4 & 0xff) != 0)) {
        return 0;
      }
      if (*(char *)(param_3 + 0x20) == '\0') {
        return 0;
      }
      if (uVar13 == 0) {
        return (ulong)(*(char *)(param_3 + 0x48) != '\0');
      }
      return (ulong)(*(char *)(param_3 + 0x20) != '\0');
    }
    unaff_x30 = 0x674bf08;
    func_0x03280cac();
    unaff_x20 = 0;
    param_3 = extraout_x1;
    unaff_x21 = param_4;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -8) = unaff_x19;
  uVar13 = uVar19;
  uVar8 = uVar9;
  if ((bRam0000000007e27ffe & 1) == 0) {
    func_0x03280a18(PTR_DAT_077eefb0);
    func_0x03280a18(PTR_DAT_077eefc0);
    func_0x03280a18(PTR_DAT_0777bfe8);
    bRam0000000007e27ffe = 1;
  }
  if (param_3 != 0) {
    if (*(long **)(param_3 + 0x10) != (long *)0x0) {
      lVar18 = **(long **)(param_3 + 0x10);
      bVar2 = *(byte *)(*(long *)PTR_DAT_0777bfe8 + 0x130);
      if ((bVar2 <= *(byte *)(lVar18 + 0x130)) &&
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0777bfe8))
      {
        return 0;
      }
    }
    if ((uVar19 >> 0x20 == 2) && ((uVar19 & 0xff) != 0)) {
      return 0;
    }
    if (*(char *)(param_3 + 0x20) == '\0') {
      return 0;
    }
    if ((uVar9 & 1) == 0) {
      return (ulong)(*(char *)(param_3 + 0x48) != '\0');
    }
    return (ulong)(*(char *)(param_3 + 0x20) != '\0');
  }
  uVar5 = func_0x03280cac();
  puVar4 = PTR_DAT_077dbd88;
  puVar26 = PTR_DAT_077dbd80;
  puVar20 = PTR_DAT_077730b8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x674bfe8;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0x7e27000;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar19;
  *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
  *(ulong *)((long)register0x00000008 + -0x38) = uVar9 & 0xffffffff;
  lVar18 = 0x7e28000;
  if ((bRam0000000007e28000 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077dbd78);
    func_0x03280a18(PTR_DAT_077dbd80);
    func_0x03280a18(PTR_DAT_077dbd88);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e28000 = 1;
  }
  lVar6 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x053bfe40(lVar6,*(undefined8 *)puVar26);
  if (*(int *)(*(long *)puVar20 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar26 = PTR_DAT_077dbd78;
  if (lVar6 != 0) {
    func_0x053c1024(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar20 + 0xb8) + 0x40),
                    *(undefined8 *)PTR_DAT_077dbd78);
    func_0x053c1024(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar20 + 0xb8) + 8),
                    *(undefined8 *)puVar26);
    func_0x053c1024(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar20 + 0xb8) + 0x48),
                    *(undefined8 *)puVar26);
    func_0x053c1024(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar20 + 0xb8) + 0x10),
                    *(undefined8 *)puVar26);
    func_0x053c1024(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar20 + 0xb8) + 0x18),
                    *(undefined8 *)puVar26);
    *(long *)(uVar5 + 0x100) = lVar6;
    func_0x032809c4(uVar5 + 0x100,lVar6);
    puVar26 = PTR_DAT_07828a38;
    puVar20 = PTR_DAT_07828a30;
    *(undefined8 *)((long)register0x00000008 + -0x60) =
         *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    if ((bRam0000000007e29c54 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a38,0);
      func_0x03280a18(PTR_DAT_07828a30);
      bRam0000000007e29c54 = 1;
    }
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar20);
    func_0x053bfe40(uVar11,*(undefined8 *)puVar26);
    *(undefined8 *)(uVar5 + 0x60) = uVar11;
    func_0x032809c4((undefined8 *)(uVar5 + 0x60),uVar11);
    return uVar5;
  }
  auVar29 = func_0x03280cac();
  plVar12 = auVar29._8_8_;
  plVar7 = auVar29._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0x674c128;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x7e28000;
  *(undefined **)((long)register0x00000008 + -0x78) = puVar20;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(ulong *)((long)register0x00000008 + -0x68) = uVar5;
  uVar11 = 0x7e28000;
  if ((bRam0000000007e28003 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff50);
    func_0x03280a18(PTR_DAT_077d88f0);
    func_0x03280a18(PTR_DAT_07807168);
    bRam0000000007e28003 = 1;
  }
  uVar19 = 0;
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    lVar18 = *(long *)PTR_DAT_077d88f0;
    uVar11 = *(undefined8 *)PTR_DAT_07807168;
    uVar19 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar19 != 0) {
      piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)(lVar18 + 0x20)) {
          lVar6 = lVar6 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 + 0x138;
          goto LAB_0674c1e0;
        }
        uVar19 = uVar19 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar19 != 0);
    }
    lVar6 = func_0x03256b10(plVar7);
LAB_0674c1e0:
    uVar8 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar18);
    uVar13 = 0;
    uVar19 = (**(code **)(uVar8 + 8))(plVar7,uVar11);
    uVar9 = func_0x055f7aac(uVar19,0);
    if ((uVar9 & 1) == 0) {
      return uVar19;
    }
    if (plVar12 != (long *)0x0) {
      lVar18 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 != 0) {
        piVar15 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0777ff50) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar15 + 0x13) * 0x10 + 0x138);
            goto LAB_0674c284;
          }
          uVar19 = uVar19 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar19 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777ff50,0x13);
LAB_0674c284:
                    /* WARNING: Could not recover jumptable at 0x0674c298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar19 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      return uVar19;
    }
  }
  auVar29 = func_0x03280cac();
  puVar20 = PTR_DAT_0777a680;
  lVar6 = auVar29._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x674c2a0;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0xb8) = puVar4;
  *(long *)((long)register0x00000008 + -0xb0) = lVar18;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar11;
  *(ulong *)((long)register0x00000008 + -0xa0) = uVar19;
  *(long **)((long)register0x00000008 + -0x98) = plVar12;
  if ((bRam0000000007e2800a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a678);
    func_0x03280a18(PTR_DAT_0777a680);
    func_0x03280a18(PTR_DAT_07807170);
    func_0x03280a18(PTR_DAT_077d0b68);
    func_0x03280a18(PTR_DAT_07807178);
    bRam0000000007e2800a = 1;
  }
  puVar23 = (ushort *)PTR_DAT_0777a678;
  if (*(int *)(*(long *)puVar20 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar18 = func_0x04607360(*(undefined8 *)puVar23);
  if ((lVar18 == 0) || (uVar19 = func_0x06b014d0(lVar18,0), lVar6 == 0)) {
    auVar28 = func_0x03280cac();
    uVar19 = auVar28._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x674c3e8;
    *(long *)((long)register0x00000008 + -0xe8) = auVar29._8_8_;
    *(ulong *)((long)register0x00000008 + -0xe0) = uVar13;
    *(ulong *)((long)register0x00000008 + -0xd8) = uVar8;
    if ((bRam0000000007e2800b & 1) == 0) {
      func_0x03280a18(PTR_DAT_07807180);
      bRam0000000007e2800b = 1;
    }
    if (auVar28._0_8_ == 0) {
      uVar19 = func_0x03280cac();
      return uVar19;
    }
    uVar13 = *(ulong *)((long)register0x00000008 + -0xe0);
    uVar8 = *(ulong *)((long)register0x00000008 + -0xd8);
    uVar9 = *(ulong *)PTR_DAT_07807180;
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0xf0);
    auVar29._8_8_ = *(undefined8 *)((long)register0x00000008 + -0xe8);
    auVar29._0_8_ = auVar28._0_8_;
  }
  else {
    uVar9 = *(ulong *)PTR_DAT_07807178;
    uVar11 = 0x674c364;
  }
  uVar5 = auVar29._0_8_;
  uVar14 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -0x128) = uVar11;
  *(long *)((long)register0x00000008 + -0x120) = unaff_x28;
  *(long *)((long)register0x00000008 + -0x118) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x110) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x108) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x100) = 0x7e28000;
  *(ushort **)((long)register0x00000008 + -0xf8) = puVar23;
  *(long *)((long)register0x00000008 + -0xf0) = lVar6;
  *(long *)((long)register0x00000008 + -0xe8) = auVar29._8_8_;
  *(ulong *)((long)register0x00000008 + -0xe0) = uVar13;
  *(ulong *)((long)register0x00000008 + -0xd8) = uVar8;
  puVar21 = (undefined1 *)((long)register0x00000008 + -0x170);
  puVar20 = (undefined *)tpidr_el0;
  uVar13 = 0x7e1c000;
  *(undefined8 *)((long)register0x00000008 + -0x138) = *(undefined8 *)(puVar20 + 0x28);
  if ((bRam0000000007e1cd71 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07788490);
    func_0x03280a18(PTR_DAT_0774e5d8);
    func_0x03280a18(PTR_DAT_07788498);
    func_0x03280a18(PTR_DAT_077884a0);
    func_0x03280a18(PTR_DAT_077884a8);
    func_0x03280a18(PTR_DAT_077884b0);
    func_0x03280a18(PTR_DAT_077884b8);
    bRam0000000007e1cd71 = 1;
  }
  puVar22 = (ushort *)PTR_DAT_077884b0;
  *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
  puVar26 = unaff_x25;
  if (uVar9 == 0) {
LAB_055f9890:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar5 = func_0x03280ca0();
    uVar11 = func_0x03280a2c(PTR_DAT_077884c0);
    uVar8 = 0;
    func_0x056e7310(uVar5,uVar11);
    puVar4 = puVar20;
    puVar22 = puVar23;
    unaff_x25 = puVar26;
LAB_055f9908:
    uVar11 = func_0x03280a2c(PTR_DAT_077884d0);
    func_0x03280b7c(uVar5,uVar11);
LAB_055f9920:
    uVar11 = 0x55f9924;
    auVar30 = func_0x072ce990();
    auVar28._8_8_ = param_5;
    auVar28._0_8_ = uVar14;
  }
  else {
    if (*(int *)(uVar9 + 0x10) == 0) {
      func_0x03280a2c(PTR_DAT_0774e6e8);
      uVar5 = func_0x03280ca0();
      puVar4 = (undefined *)func_0x03280a2c(PTR_DAT_077884c8);
      uVar8 = func_0x03280a2c(PTR_DAT_077884c0);
      uVar14 = 0;
      func_0x056e7388(uVar5,puVar4);
      puVar21 = (undefined1 *)((long)register0x00000008 + -0x170);
      puVar22 = puVar23;
      goto LAB_055f9908;
    }
    *(undefined **)((long)register0x00000008 + -0x168) = puVar20;
    if (uVar19 == 0) {
      uVar19 = **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    }
    puVar21 = (undefined1 *)((long)register0x00000008 + -0x370);
    *(ulong *)((long)register0x00000008 + -0x170) = uVar19;
    func_0x072ce9a0(puVar21,0,0x200);
    uVar14 = *(undefined8 *)puVar22;
    uVar8 = 0x80;
    func_0x0482a804((undefined1 *)((long)register0x00000008 + -0x160),puVar21);
    puVar26 = PTR_DAT_07788498;
    uVar1 = *(uint *)(uVar9 + 0x10);
    uVar25 = *(int *)(uVar5 + 0x10) - uVar1;
    uVar13 = (ulong)uVar25;
    if (-1 < (int)uVar25) {
      uVar19 = 0;
      unaff_x26 = uVar5 + 0x14;
      unaff_x27 = uVar9 + 0x14;
      do {
        uVar16 = (ulong)uVar1;
        iVar24 = (int)uVar19;
        if (0 < (int)uVar1) {
          unaff_x28 = 0;
          puVar22 = (ushort *)(unaff_x26 + (long)iVar24 * 2);
          do {
            uVar3 = *puVar22;
            puVar20 = (undefined *)(ulong)uVar3;
            if ((int)uVar16 <= unaff_x28) {
              func_0x057b7838(0);
            }
            if (uVar3 != *(ushort *)(unaff_x27 + unaff_x28 * 2)) {
              uVar1 = iVar24 + 1;
              goto LAB_055f97f4;
            }
            uVar16 = (ulong)*(int *)(uVar9 + 0x10);
            unaff_x28 = unaff_x28 + 1;
            puVar22 = puVar22 + 1;
          } while (unaff_x28 < (long)uVar16);
        }
        puVar22 = *(ushort **)puVar26;
        uVar1 = *(uint *)((long)register0x00000008 + -0x148);
        unaff_x28 = (long)(int)uVar1;
        if ((*(byte *)(*(long *)(puVar22 + 0x10) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar27 = *(uint *)((long)register0x00000008 + -0x158);
        if ((int)uVar27 <= (int)uVar1) {
          lVar18 = *(long *)(puVar22 + 0x10);
          if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = func_0x0325681c();
          }
          func_0x0482aa14((undefined1 *)((long)register0x00000008 + -0x160),
                          *(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x28));
          uVar27 = *(uint *)((long)register0x00000008 + -0x158);
        }
        if (uVar27 <= uVar1) {
          func_0x03280cb4();
          puVar23 = puVar22;
          goto LAB_055f9890;
        }
        *(int *)(*(long *)((long)register0x00000008 + -0x160) + unaff_x28 * 4) = iVar24;
        *(uint *)((long)register0x00000008 + -0x148) = uVar1 + 1;
        uVar1 = *(int *)(uVar9 + 0x10) + iVar24;
LAB_055f97f4:
        uVar19 = (ulong)uVar1;
        unaff_x25 = puVar26;
        if ((int)uVar25 < (int)uVar1) break;
        uVar1 = *(uint *)(uVar9 + 0x10);
      } while( true );
    }
    puVar4 = PTR_DAT_077884a8;
    if (*(int *)((long)register0x00000008 + -0x148) == 0) {
      puVar4 = puVar20;
      if (*(long *)(*(long *)((long)register0x00000008 + -0x168) + 0x28) ==
          *(long *)((long)register0x00000008 + -0x138)) {
        return uVar5;
      }
      goto LAB_055f9920;
    }
    auVar30._8_4_ = *(uint *)(uVar9 + 0x10);
    auVar30._0_8_ = uVar5;
    uVar9 = (ulong)*(uint *)(uVar9 + 0x10);
    auVar28 = func_0x0482a8a4((undefined1 *)((long)register0x00000008 + -0x160),
                              *(undefined8 *)PTR_DAT_077884a0);
    uVar8 = *(ulong *)((long)register0x00000008 + -0x170);
    uVar11 = 0x55f9844;
  }
  lVar18 = auVar30._0_8_;
  piVar15 = auVar28._0_8_;
  *(undefined1 **)(puVar21 + -0x60) = (undefined1 *)((long)register0x00000008 + -0x130);
  *(undefined8 *)(puVar21 + -0x58) = uVar11;
  *(long *)(puVar21 + -0x50) = unaff_x28;
  *(long *)(puVar21 + -0x48) = unaff_x27;
  *(long *)(puVar21 + -0x40) = unaff_x26;
  *(undefined **)(puVar21 + -0x38) = unaff_x25;
  *(ulong *)(puVar21 + -0x30) = uVar19;
  *(ushort **)(puVar21 + -0x28) = puVar22;
  *(ulong *)(puVar21 + -0x20) = uVar13;
  *(ulong *)(puVar21 + -0x18) = uVar9;
  *(undefined **)(puVar21 + -0x10) = puVar4;
  *(ulong *)(puVar21 + -8) = uVar5;
  *(int *)(puVar21 + -0x74) = auVar30._8_4_;
  uVar19 = uVar8;
  if ((bRam0000000007e1cd72 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077884d8);
    func_0x03280a18(PTR_DAT_077884e0);
    func_0x03280a18(PTR_DAT_077884e8);
    func_0x03280a18(PTR_DAT_0777b558);
    bRam0000000007e1cd72 = 1;
  }
  *(undefined8 *)(puVar21 + -0x70) = 0;
  *(undefined8 *)(puVar21 + -0x68) = 0;
  if (uVar8 != 0) {
    if (0x7fffffff <
        (long)auVar28._8_4_ * (long)(*(int *)(uVar8 + 0x10) - *(int *)(puVar21 + -0x74)) +
        (long)*(int *)(lVar18 + 0x10)) goto LAB_055f9c30;
    uVar9 = func_0x032bc400();
    if (uVar9 != 0) {
      uVar1 = *(uint *)(uVar9 + 0x10);
      *(long *)(puVar21 + -0x80) = lVar18;
      if (auVar28._8_4_ < 1) {
        uVar27 = 0;
        uVar25 = 0;
      }
      else {
        uVar25 = 0;
        uVar27 = 0;
        uVar19 = auVar28._8_8_ & 0xffffffff;
        *(long *)(puVar21 + -0x88) = lVar18 + 0x14;
        do {
          iVar24 = *piVar15;
          uVar17 = iVar24 - uVar25;
          if (uVar17 != 0) {
            if (cRam0000000007e1cdae == '\0') {
              func_0x03280a18(PTR_DAT_07781e48);
              cRam0000000007e1cdae = '\x01';
            }
            if ((*(uint *)(*(long *)(puVar21 + -0x80) + 0x10) < uVar25) ||
               (*(uint *)(*(long *)(puVar21 + -0x80) + 0x10) - uVar25 < uVar17)) {
              func_0x057a7e10(0x18,0);
            }
            lVar18 = *(long *)PTR_DAT_077884e8;
            *(long *)(puVar21 + -0x70) = *(long *)(puVar21 + -0x88) + (long)(int)uVar25 * 2;
            *(ulong *)(puVar21 + -0x68) = (ulong)uVar17;
            if (uVar1 < uVar27) {
              func_0x057b78b0(0);
            }
            if ((*(byte *)(*(long *)(lVar18 + 0x20) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            func_0x045b0de0(puVar21 + -0x70,uVar9 + (long)(int)uVar27 * 2 + 0x14,uVar1 - uVar27,
                            *(undefined8 *)PTR_DAT_077884d8);
            uVar27 = uVar17 + uVar27;
          }
          if (cRam0000000007e1cdaf == '\0') {
            func_0x03280a18(PTR_DAT_07781e48);
            cRam0000000007e1cdaf = '\x01';
          }
          uVar25 = *(uint *)(uVar8 + 0x10);
          *(ulong *)(puVar21 + -0x70) = uVar8 + 0x14;
          *(ulong *)(puVar21 + -0x68) = (ulong)uVar25;
          lVar18 = *(long *)PTR_DAT_077884e8;
          if (uVar1 < uVar27) {
            func_0x057b78b0(0);
          }
          if ((*(byte *)(*(long *)(lVar18 + 0x20) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar25 = iVar24 + *(int *)(puVar21 + -0x74);
          func_0x045b0de0(puVar21 + -0x70,uVar9 + (long)(int)uVar27 * 2 + 0x14,uVar1 - uVar27,
                          *(undefined8 *)PTR_DAT_077884d8);
          uVar19 = uVar19 - 1;
          piVar15 = piVar15 + 1;
          uVar27 = *(int *)(uVar8 + 0x10) + uVar27;
        } while (uVar19 != 0);
      }
      if (cRam0000000007e1cdb0 == '\0') {
        func_0x03280a18(PTR_DAT_07781e48);
        cRam0000000007e1cdb0 = '\x01';
      }
      lVar18 = *(long *)(puVar21 + -0x80);
      if (lVar18 == 0) {
        if (uVar25 != 0) {
          func_0x057a7e10(0x18,0);
        }
        lVar18 = 0;
        uVar19 = 0;
      }
      else {
        uVar17 = *(uint *)(lVar18 + 0x10);
        if (uVar17 < uVar25) {
          func_0x057a7e10(0x18,0);
          uVar17 = *(uint *)(lVar18 + 0x10);
        }
        lVar18 = lVar18 + (long)(int)uVar25 * 2 + 0x14;
        uVar19 = (ulong)(uVar17 - uVar25);
      }
      *(long *)(puVar21 + -0x70) = lVar18;
      *(ulong *)(puVar21 + -0x68) = uVar19;
      lVar18 = *(long *)PTR_DAT_077884e8;
      if (uVar1 < uVar27) {
        func_0x057b78b0(0);
      }
      if ((*(byte *)(*(long *)(lVar18 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      func_0x045b0de0(puVar21 + -0x70,uVar9 + (long)(int)uVar27 * 2 + 0x14,uVar1 - uVar27,
                      *(undefined8 *)PTR_DAT_077884d8);
      return uVar9;
    }
  }
  func_0x03280cac();
LAB_055f9c30:
  func_0x03280a2c(PTR_DAT_07777718);
  uVar11 = func_0x03280ca0();
  func_0x057b9534(uVar11,0);
  uVar14 = func_0x03280a2c(PTR_DAT_077884f0);
  Var31 = func_0x03280b7c(uVar11,uVar14);
  *(undefined8 *)(puVar21 + -0xb0) = 0x55f9c64;
  *(int **)(puVar21 + -0xa8) = piVar15;
  *(long *)(puVar21 + -0xa0) = lVar18;
  *(undefined8 *)(puVar21 + -0x98) = uVar11;
  *(short *)(puVar21 + -0xb4) = (short)((unkuint10)Var31 >> 0x40);
  if ((bRam0000000007e1cd73 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07781e48);
    bRam0000000007e1cd73 = 1;
  }
  uVar19 = func_0x055f9cc4((long)Var31,puVar21 + -0xb4,1,0x7fffffff,uVar19 & 0xffffffff);
  return uVar19;
}

