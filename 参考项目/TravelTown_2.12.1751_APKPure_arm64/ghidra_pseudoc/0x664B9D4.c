/* Ghidra 12.1.2 native pseudocode; RVA 0x664B9D4; Merger.Game.ViewModel.Board.BoardQueueViewModel.RegisterRewardTargets; status ok */


/* WARNING: Possible PIC construction at 0x0674c360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0674c39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x055f9840: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0674c3a0) */
/* WARNING: Removing unreachable block (ram,0x0674c3b8) */
/* WARNING: Removing unreachable block (ram,0x0674c364) */
/* WARNING: Removing unreachable block (ram,0x0674c378) */
/* WARNING: Removing unreachable block (ram,0x0674c384) */
/* WARNING: Removing unreachable block (ram,0x055f9844) */

ulong Merger_Game_ViewModel_Board_BoardQueueViewModel__RegisterRewardTargets
                (long param_1,long param_2,undefined8 param_3,long *param_4,ulong param_5)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  int extraout_w1;
  long extraout_x1;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  undefined *puVar22;
  long *plVar23;
  undefined1 *puVar24;
  long *unaff_x22;
  ushort *puVar25;
  ushort *puVar26;
  undefined8 *unaff_x23;
  int iVar27;
  uint uVar28;
  undefined *unaff_x24;
  undefined *puVar29;
  undefined *unaff_x25;
  undefined *unaff_x26;
  uint uVar30;
  undefined *unaff_x27;
  long unaff_x28;
  undefined8 unaff_x29;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  unkbyte10 Var35;
  undefined8 auStack_c0 [2];
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *plVar14;
  
  puVar6 = (undefined8 *)auStack_90;
  plVar23 = (long *)0x7e27000;
  if ((bRam0000000007e27ffd & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807148);
    func_0x03280a18(PTR_DAT_07807150);
    func_0x03280a18(PTR_DAT_07807158);
    func_0x03280a18(PTR_DAT_07807160);
    func_0x03280a18(PTR_DAT_0777fd08);
    func_0x03280a18(PTR_DAT_077726c0);
    func_0x03280a18(PTR_DAT_0777efc0);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e27ffd = 1;
  }
  lVar16 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  func_0x06212bbc(param_1,param_2);
  puVar5 = PTR_DAT_07807150;
  puVar4 = PTR_DAT_07807148;
  puVar7 = PTR_DAT_0777fd08;
  puVar29 = PTR_DAT_077730b8;
  puVar22 = PTR_DAT_077726c0;
  if (*(long *)(param_1 + 0x100) != 0) {
    func_0x053c09a8(&uStack_88,*(long *)(param_1 + 0x100),*(undefined8 *)PTR_DAT_07807160);
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    plStack_60 = plStack_78;
LAB_0674bad4:
    uVar8 = func_0x05115444(&uStack_70,*(undefined8 *)puVar5);
    plVar23 = plStack_60;
    if ((uVar8 & 1) == 0) {
      uVar8 = func_0x05115440(&uStack_70,*(undefined8 *)puVar4);
      return uVar8;
    }
    lVar9 = *(long *)puVar29;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar9 = *(long *)puVar29;
    }
    if (plVar23 != (long *)0x0) goto code_r0x0674bb00;
    func_0x03280cac();
    goto LAB_0674bd48;
  }
LAB_0674bd50:
  auVar34 = func_0x03280cac();
  uVar8 = auVar34._0_8_;
  if (auVar34._8_4_ == 1) {
    plVar11 = (long *)func_0x072ce910(uVar8);
    lVar9 = *plVar11;
    func_0x072ce920();
    uVar12 = func_0x05115440(&uStack_70,*unaff_x23);
    if (lVar9 == 0) {
      return uVar12;
    }
    func_0x03280ca4(lVar9);
  }
  func_0x05115440(&uStack_70,*unaff_x23);
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  uVar31 = 0x674bdec;
  func_0x02f09514();
  plVar11 = param_4;
  if (extraout_w1 == 1) {
    uVar12 = (ulong)((uint)param_5 & 1);
  }
  else {
    if (extraout_w1 != 0) {
      return 0;
    }
    uVar13 = param_5 & 1;
    uVar19 = (ulong)((uint)param_5 & 1);
    puVar6 = auStack_c0;
    auStack_c0[0] = 0x674bdec;
    uStack_a0 = 0;
    uVar12 = uVar19;
    plStack_b0 = unaff_x22;
    plStack_a8 = plVar23;
    uStack_98 = uVar8;
    if ((bRam0000000007e27fff & 1) == 0) {
      func_0x03280a18(PTR_DAT_077eefb0);
      func_0x03280a18(PTR_DAT_077eefc0);
      func_0x03280a18(PTR_DAT_0777bfe8);
      bRam0000000007e27fff = 1;
    }
    if (lVar16 != 0) {
      if (*(long **)(lVar16 + 0x10) != (long *)0x0) {
        lVar9 = **(long **)(lVar16 + 0x10);
        bVar2 = *(byte *)(*(long *)PTR_DAT_0777bfe8 + 0x130);
        if ((bVar2 <= *(byte *)(lVar9 + 0x130)) &&
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0777bfe8))
        {
          return 0;
        }
      }
      if (((ulong)param_4 >> 0x20 == 1) && (((ulong)param_4 & 0xff) != 0)) {
        return 0;
      }
      if (*(char *)(lVar16 + 0x20) == '\0') {
        return 0;
      }
      if (uVar13 == 0) {
        return (ulong)(*(char *)(lVar16 + 0x48) != '\0');
      }
      return (ulong)(*(char *)(lVar16 + 0x20) != '\0');
    }
    uVar31 = 0x674bf08;
    func_0x03280cac();
    lVar16 = extraout_x1;
    uVar8 = uVar19;
    plVar23 = param_4;
    unaff_x22 = (long *)0x7e27000;
  }
  *(undefined8 *)((long)puVar6 + -0x30) = uVar31;
  *(long **)((long)puVar6 + -0x20) = unaff_x22;
  *(long **)((long)puVar6 + -0x18) = plVar23;
  *(undefined8 *)((long)puVar6 + -0x10) = 0;
  *(ulong *)((long)puVar6 + -8) = uVar8;
  plVar23 = plVar11;
  uVar8 = uVar12;
  if ((bRam0000000007e27ffe & 1) == 0) {
    func_0x03280a18(PTR_DAT_077eefb0);
    func_0x03280a18(PTR_DAT_077eefc0);
    func_0x03280a18(PTR_DAT_0777bfe8);
    bRam0000000007e27ffe = 1;
  }
  if (lVar16 != 0) {
    if (*(long **)(lVar16 + 0x10) != (long *)0x0) {
      lVar9 = **(long **)(lVar16 + 0x10);
      bVar2 = *(byte *)(*(long *)PTR_DAT_0777bfe8 + 0x130);
      if ((bVar2 <= *(byte *)(lVar9 + 0x130)) &&
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0777bfe8)) {
        return 0;
      }
    }
    if (((ulong)plVar11 >> 0x20 == 2) && (((ulong)plVar11 & 0xff) != 0)) {
      return 0;
    }
    if (*(char *)(lVar16 + 0x20) == '\0') {
      return 0;
    }
    if ((uVar12 & 1) == 0) {
      return (ulong)(*(char *)(lVar16 + 0x48) != '\0');
    }
    return (ulong)(*(char *)(lVar16 + 0x20) != '\0');
  }
  uVar13 = func_0x03280cac();
  puVar7 = PTR_DAT_077dbd88;
  puVar29 = PTR_DAT_077dbd80;
  puVar22 = PTR_DAT_077730b8;
  *(undefined8 *)((long)puVar6 + -0x60) = 0x674bfe8;
  *(undefined8 **)((long)puVar6 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar6 + -0x50) = 0x7e27000;
  *(long **)((long)puVar6 + -0x48) = plVar11;
  *(undefined8 *)((long)puVar6 + -0x40) = 0;
  *(ulong *)((long)puVar6 + -0x38) = uVar12 & 0xffffffff;
  lVar16 = 0x7e28000;
  if ((bRam0000000007e28000 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077dbd78);
    func_0x03280a18(PTR_DAT_077dbd80);
    func_0x03280a18(PTR_DAT_077dbd88);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e28000 = 1;
  }
  lVar9 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x053bfe40(lVar9,*(undefined8 *)puVar29);
  if (*(int *)(*(long *)puVar22 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar29 = PTR_DAT_077dbd78;
  if (lVar9 != 0) {
    func_0x053c1024(lVar9,*(undefined8 *)(*(long *)(*(long *)puVar22 + 0xb8) + 0x40),
                    *(undefined8 *)PTR_DAT_077dbd78);
    func_0x053c1024(lVar9,*(undefined8 *)(*(long *)(*(long *)puVar22 + 0xb8) + 8),
                    *(undefined8 *)puVar29);
    func_0x053c1024(lVar9,*(undefined8 *)(*(long *)(*(long *)puVar22 + 0xb8) + 0x48),
                    *(undefined8 *)puVar29);
    func_0x053c1024(lVar9,*(undefined8 *)(*(long *)(*(long *)puVar22 + 0xb8) + 0x10),
                    *(undefined8 *)puVar29);
    func_0x053c1024(lVar9,*(undefined8 *)(*(long *)(*(long *)puVar22 + 0xb8) + 0x18),
                    *(undefined8 *)puVar29);
    *(long *)(uVar13 + 0x100) = lVar9;
    func_0x032809c4(uVar13 + 0x100,lVar9);
    puVar29 = PTR_DAT_07828a38;
    puVar22 = PTR_DAT_07828a30;
    *(undefined8 *)((long)puVar6 + -0x60) = *(undefined8 *)((long)puVar6 + -0x60);
    *(undefined8 *)((long)puVar6 + -0x50) = *(undefined8 *)((long)puVar6 + -0x50);
    *(undefined8 *)((long)puVar6 + -0x48) = *(undefined8 *)((long)puVar6 + -0x48);
    *(undefined8 *)((long)puVar6 + -0x40) = *(undefined8 *)((long)puVar6 + -0x40);
    *(undefined8 *)((long)puVar6 + -0x38) = *(undefined8 *)((long)puVar6 + -0x38);
    if ((bRam0000000007e29c54 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a38,0);
      func_0x03280a18(PTR_DAT_07828a30);
      bRam0000000007e29c54 = 1;
    }
    uVar31 = func_0x03280ca0(*(undefined8 *)puVar22);
    func_0x053bfe40(uVar31,*(undefined8 *)puVar29);
    *(undefined8 *)(uVar13 + 0x60) = uVar31;
    func_0x032809c4((undefined8 *)(uVar13 + 0x60),uVar31);
    return uVar13;
  }
  auVar33 = func_0x03280cac();
  plVar14 = auVar33._8_8_;
  plVar11 = auVar33._0_8_;
  *(undefined8 *)((long)puVar6 + -0x90) = 0x674c128;
  *(undefined8 *)((long)puVar6 + -0x80) = 0x7e28000;
  *(undefined **)((long)puVar6 + -0x78) = puVar22;
  *(undefined8 *)((long)puVar6 + -0x70) = 0;
  *(ulong *)((long)puVar6 + -0x68) = uVar13;
  uVar31 = 0x7e28000;
  if ((bRam0000000007e28003 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff50);
    func_0x03280a18(PTR_DAT_077d88f0);
    func_0x03280a18(PTR_DAT_07807168);
    bRam0000000007e28003 = 1;
  }
  uVar12 = 0;
  if (plVar11 != (long *)0x0) {
    lVar9 = *plVar11;
    lVar16 = *(long *)PTR_DAT_077d88f0;
    uVar31 = *(undefined8 *)PTR_DAT_07807168;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)(lVar16 + 0x20)) {
          lVar9 = lVar9 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 + 0x138;
          goto LAB_0674c1e0;
        }
        uVar8 = uVar8 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar8 != 0);
    }
    lVar9 = func_0x03256b10(plVar11);
LAB_0674c1e0:
    uVar8 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar16);
    plVar23 = (long *)0x0;
    uVar12 = (**(code **)(uVar8 + 8))(plVar11,uVar31);
    uVar13 = func_0x055f7aac(uVar12,0);
    if ((uVar13 & 1) == 0) {
      return uVar12;
    }
    if (plVar14 != (long *)0x0) {
      lVar16 = *plVar14;
      uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar8 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777ff50) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x13) * 0x10 + 0x138);
            goto LAB_0674c284;
          }
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777ff50,0x13);
LAB_0674c284:
                    /* WARNING: Could not recover jumptable at 0x0674c298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      return uVar8;
    }
  }
  auVar33 = func_0x03280cac();
  puVar22 = PTR_DAT_0777a680;
  lVar9 = auVar33._0_8_;
  *(undefined8 *)((long)puVar6 + -0xd0) = 0x674c2a0;
  *(undefined **)((long)puVar6 + -0xc0) = unaff_x24;
  *(undefined **)((long)puVar6 + -0xb8) = puVar7;
  *(long *)((long)puVar6 + -0xb0) = lVar16;
  *(undefined8 *)((long)puVar6 + -0xa8) = uVar31;
  *(ulong *)((long)puVar6 + -0xa0) = uVar12;
  *(long **)((long)puVar6 + -0x98) = plVar14;
  if ((bRam0000000007e2800a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a678);
    func_0x03280a18(PTR_DAT_0777a680);
    func_0x03280a18(PTR_DAT_07807170);
    func_0x03280a18(PTR_DAT_077d0b68);
    func_0x03280a18(PTR_DAT_07807178);
    bRam0000000007e2800a = 1;
  }
  puVar26 = (ushort *)PTR_DAT_0777a678;
  if (*(int *)(*(long *)puVar22 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar16 = func_0x04607360(*(undefined8 *)puVar26);
  if ((lVar16 == 0) || (uVar12 = func_0x06b014d0(lVar16,0), lVar9 == 0)) {
    auVar32 = func_0x03280cac();
    uVar12 = auVar32._8_8_;
    *(undefined8 *)((long)puVar6 + -0xf0) = 0x674c3e8;
    *(long *)((long)puVar6 + -0xe8) = auVar33._8_8_;
    *(long **)((long)puVar6 + -0xe0) = plVar23;
    *(ulong *)((long)puVar6 + -0xd8) = uVar8;
    if ((bRam0000000007e2800b & 1) == 0) {
      func_0x03280a18(PTR_DAT_07807180);
      bRam0000000007e2800b = 1;
    }
    if (auVar32._0_8_ == 0) {
      uVar8 = func_0x03280cac();
      return uVar8;
    }
    plVar23 = *(long **)((long)puVar6 + -0xe0);
    uVar8 = *(ulong *)((long)puVar6 + -0xd8);
    uVar13 = *(ulong *)PTR_DAT_07807180;
    uVar31 = *(undefined8 *)((long)puVar6 + -0xf0);
    auVar33._8_8_ = *(undefined8 *)((long)puVar6 + -0xe8);
    auVar33._0_8_ = auVar32._0_8_;
  }
  else {
    uVar13 = *(ulong *)PTR_DAT_07807178;
    uVar31 = 0x674c364;
  }
  uVar19 = auVar33._0_8_;
  uVar17 = 0;
  *(undefined8 *)((long)puVar6 + -0x130) = unaff_x29;
  *(undefined8 *)((long)puVar6 + -0x128) = uVar31;
  *(long *)((long)puVar6 + -0x120) = unaff_x28;
  *(undefined **)((long)puVar6 + -0x118) = unaff_x27;
  *(undefined **)((long)puVar6 + -0x110) = unaff_x26;
  *(undefined **)((long)puVar6 + -0x108) = unaff_x25;
  *(undefined8 *)((long)puVar6 + -0x100) = 0x7e28000;
  *(ushort **)((long)puVar6 + -0xf8) = puVar26;
  *(long *)((long)puVar6 + -0xf0) = lVar9;
  *(long *)((long)puVar6 + -0xe8) = auVar33._8_8_;
  *(long **)((long)puVar6 + -0xe0) = plVar23;
  *(ulong *)((long)puVar6 + -0xd8) = uVar8;
  puVar24 = (undefined1 *)((long)puVar6 + -0x170);
  puVar22 = (undefined *)tpidr_el0;
  uVar8 = 0x7e1c000;
  *(undefined8 *)((long)puVar6 + -0x138) = *(undefined8 *)(puVar22 + 0x28);
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
  puVar25 = (ushort *)PTR_DAT_077884b0;
  *(undefined8 *)((long)puVar6 + -0x158) = 0;
  *(undefined8 *)((long)puVar6 + -0x160) = 0;
  *(undefined8 *)((long)puVar6 + -0x148) = 0;
  *(undefined8 *)((long)puVar6 + -0x150) = 0;
  puVar29 = unaff_x25;
  if (uVar13 == 0) {
LAB_055f9890:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar19 = func_0x03280ca0();
    uVar31 = func_0x03280a2c(PTR_DAT_077884c0);
    uVar15 = 0;
    func_0x056e7310(uVar19,uVar31);
    puVar7 = puVar22;
    puVar25 = puVar26;
    unaff_x25 = puVar29;
LAB_055f9908:
    uVar31 = func_0x03280a2c(PTR_DAT_077884d0);
    func_0x03280b7c(uVar19,uVar31);
LAB_055f9920:
    uVar31 = 0x55f9924;
    auVar34 = func_0x072ce990();
    auVar32._8_8_ = param_5;
    auVar32._0_8_ = uVar17;
  }
  else {
    if (*(int *)(uVar13 + 0x10) == 0) {
      func_0x03280a2c(PTR_DAT_0774e6e8);
      uVar19 = func_0x03280ca0();
      puVar7 = (undefined *)func_0x03280a2c(PTR_DAT_077884c8);
      uVar15 = func_0x03280a2c(PTR_DAT_077884c0);
      uVar17 = 0;
      func_0x056e7388(uVar19,puVar7);
      puVar24 = (undefined1 *)((long)puVar6 + -0x170);
      puVar25 = puVar26;
      goto LAB_055f9908;
    }
    *(undefined **)((long)puVar6 + -0x168) = puVar22;
    if (uVar12 == 0) {
      uVar12 = **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    }
    puVar24 = (undefined1 *)((long)puVar6 + -0x370);
    *(ulong *)((long)puVar6 + -0x170) = uVar12;
    func_0x072ce9a0(puVar24,0,0x200);
    uVar17 = *(undefined8 *)puVar25;
    uVar15 = 0x80;
    func_0x0482a804((undefined1 *)((long)puVar6 + -0x160),puVar24);
    puVar29 = PTR_DAT_07788498;
    uVar1 = *(uint *)(uVar13 + 0x10);
    uVar28 = *(int *)(uVar19 + 0x10) - uVar1;
    uVar8 = (ulong)uVar28;
    if (-1 < (int)uVar28) {
      uVar12 = 0;
      unaff_x26 = (undefined *)(uVar19 + 0x14);
      unaff_x27 = (undefined *)(uVar13 + 0x14);
      do {
        uVar20 = (ulong)uVar1;
        iVar27 = (int)uVar12;
        if (0 < (int)uVar1) {
          unaff_x28 = 0;
          puVar25 = (ushort *)(unaff_x26 + (long)iVar27 * 2);
          do {
            uVar3 = *puVar25;
            puVar22 = (undefined *)(ulong)uVar3;
            if ((int)uVar20 <= unaff_x28) {
              func_0x057b7838(0);
            }
            if (uVar3 != *(ushort *)(unaff_x27 + unaff_x28 * 2)) {
              uVar1 = iVar27 + 1;
              goto LAB_055f97f4;
            }
            uVar20 = (ulong)*(int *)(uVar13 + 0x10);
            unaff_x28 = unaff_x28 + 1;
            puVar25 = puVar25 + 1;
          } while (unaff_x28 < (long)uVar20);
        }
        puVar25 = *(ushort **)puVar29;
        uVar1 = *(uint *)((long)puVar6 + -0x148);
        unaff_x28 = (long)(int)uVar1;
        if ((*(byte *)(*(long *)(puVar25 + 0x10) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar30 = *(uint *)((long)puVar6 + -0x158);
        if ((int)uVar30 <= (int)uVar1) {
          lVar16 = *(long *)(puVar25 + 0x10);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = func_0x0325681c();
          }
          func_0x0482aa14((undefined1 *)((long)puVar6 + -0x160),
                          *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x28));
          uVar30 = *(uint *)((long)puVar6 + -0x158);
        }
        if (uVar30 <= uVar1) {
          func_0x03280cb4();
          puVar26 = puVar25;
          goto LAB_055f9890;
        }
        *(int *)(*(long *)((long)puVar6 + -0x160) + unaff_x28 * 4) = iVar27;
        *(uint *)((long)puVar6 + -0x148) = uVar1 + 1;
        uVar1 = *(int *)(uVar13 + 0x10) + iVar27;
LAB_055f97f4:
        uVar12 = (ulong)uVar1;
        unaff_x25 = puVar29;
        if ((int)uVar28 < (int)uVar1) break;
        uVar1 = *(uint *)(uVar13 + 0x10);
      } while( true );
    }
    puVar7 = PTR_DAT_077884a8;
    if (*(int *)((long)puVar6 + -0x148) == 0) {
      puVar7 = puVar22;
      if (*(long *)(*(long *)((long)puVar6 + -0x168) + 0x28) == *(long *)((long)puVar6 + -0x138)) {
        return uVar19;
      }
      goto LAB_055f9920;
    }
    auVar34._8_4_ = *(uint *)(uVar13 + 0x10);
    auVar34._0_8_ = uVar19;
    uVar13 = (ulong)*(uint *)(uVar13 + 0x10);
    auVar32 = func_0x0482a8a4((undefined1 *)((long)puVar6 + -0x160),*(undefined8 *)PTR_DAT_077884a0)
    ;
    uVar15 = *(ulong *)((long)puVar6 + -0x170);
    uVar31 = 0x55f9844;
  }
  lVar16 = auVar34._0_8_;
  piVar18 = auVar32._0_8_;
  *(undefined1 **)(puVar24 + -0x60) = (undefined1 *)((long)puVar6 + -0x130);
  *(undefined8 *)(puVar24 + -0x58) = uVar31;
  *(long *)(puVar24 + -0x50) = unaff_x28;
  *(undefined **)(puVar24 + -0x48) = unaff_x27;
  *(undefined **)(puVar24 + -0x40) = unaff_x26;
  *(undefined **)(puVar24 + -0x38) = unaff_x25;
  *(ulong *)(puVar24 + -0x30) = uVar12;
  *(ushort **)(puVar24 + -0x28) = puVar25;
  *(ulong *)(puVar24 + -0x20) = uVar8;
  *(ulong *)(puVar24 + -0x18) = uVar13;
  *(undefined **)(puVar24 + -0x10) = puVar7;
  *(ulong *)(puVar24 + -8) = uVar19;
  *(int *)(puVar24 + -0x74) = auVar34._8_4_;
  uVar8 = uVar15;
  if ((bRam0000000007e1cd72 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077884d8);
    func_0x03280a18(PTR_DAT_077884e0);
    func_0x03280a18(PTR_DAT_077884e8);
    func_0x03280a18(PTR_DAT_0777b558);
    bRam0000000007e1cd72 = 1;
  }
  *(undefined8 *)(puVar24 + -0x70) = 0;
  *(undefined8 *)(puVar24 + -0x68) = 0;
  if (uVar15 != 0) {
    if (0x7fffffff <
        (long)auVar32._8_4_ * (long)(*(int *)(uVar15 + 0x10) - *(int *)(puVar24 + -0x74)) +
        (long)*(int *)(lVar16 + 0x10)) goto LAB_055f9c30;
    uVar12 = func_0x032bc400();
    if (uVar12 != 0) {
      uVar1 = *(uint *)(uVar12 + 0x10);
      *(long *)(puVar24 + -0x80) = lVar16;
      if (auVar32._8_4_ < 1) {
        uVar30 = 0;
        uVar28 = 0;
      }
      else {
        uVar28 = 0;
        uVar30 = 0;
        uVar8 = auVar32._8_8_ & 0xffffffff;
        *(long *)(puVar24 + -0x88) = lVar16 + 0x14;
        do {
          iVar27 = *piVar18;
          uVar21 = iVar27 - uVar28;
          if (uVar21 != 0) {
            if (cRam0000000007e1cdae == '\0') {
              func_0x03280a18(PTR_DAT_07781e48);
              cRam0000000007e1cdae = '\x01';
            }
            if ((*(uint *)(*(long *)(puVar24 + -0x80) + 0x10) < uVar28) ||
               (*(uint *)(*(long *)(puVar24 + -0x80) + 0x10) - uVar28 < uVar21)) {
              func_0x057a7e10(0x18,0);
            }
            lVar16 = *(long *)PTR_DAT_077884e8;
            *(long *)(puVar24 + -0x70) = *(long *)(puVar24 + -0x88) + (long)(int)uVar28 * 2;
            *(ulong *)(puVar24 + -0x68) = (ulong)uVar21;
            if (uVar1 < uVar30) {
              func_0x057b78b0(0);
            }
            if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            func_0x045b0de0(puVar24 + -0x70,uVar12 + (long)(int)uVar30 * 2 + 0x14,uVar1 - uVar30,
                            *(undefined8 *)PTR_DAT_077884d8);
            uVar30 = uVar21 + uVar30;
          }
          if (cRam0000000007e1cdaf == '\0') {
            func_0x03280a18(PTR_DAT_07781e48);
            cRam0000000007e1cdaf = '\x01';
          }
          uVar28 = *(uint *)(uVar15 + 0x10);
          *(ulong *)(puVar24 + -0x70) = uVar15 + 0x14;
          *(ulong *)(puVar24 + -0x68) = (ulong)uVar28;
          lVar16 = *(long *)PTR_DAT_077884e8;
          if (uVar1 < uVar30) {
            func_0x057b78b0(0);
          }
          if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar28 = iVar27 + *(int *)(puVar24 + -0x74);
          func_0x045b0de0(puVar24 + -0x70,uVar12 + (long)(int)uVar30 * 2 + 0x14,uVar1 - uVar30,
                          *(undefined8 *)PTR_DAT_077884d8);
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 1;
          uVar30 = *(int *)(uVar15 + 0x10) + uVar30;
        } while (uVar8 != 0);
      }
      if (cRam0000000007e1cdb0 == '\0') {
        func_0x03280a18(PTR_DAT_07781e48);
        cRam0000000007e1cdb0 = '\x01';
      }
      lVar16 = *(long *)(puVar24 + -0x80);
      if (lVar16 == 0) {
        if (uVar28 != 0) {
          func_0x057a7e10(0x18,0);
        }
        lVar16 = 0;
        uVar8 = 0;
      }
      else {
        uVar21 = *(uint *)(lVar16 + 0x10);
        if (uVar21 < uVar28) {
          func_0x057a7e10(0x18,0);
          uVar21 = *(uint *)(lVar16 + 0x10);
        }
        lVar16 = lVar16 + (long)(int)uVar28 * 2 + 0x14;
        uVar8 = (ulong)(uVar21 - uVar28);
      }
      *(long *)(puVar24 + -0x70) = lVar16;
      *(ulong *)(puVar24 + -0x68) = uVar8;
      lVar16 = *(long *)PTR_DAT_077884e8;
      if (uVar1 < uVar30) {
        func_0x057b78b0(0);
      }
      if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      func_0x045b0de0(puVar24 + -0x70,uVar12 + (long)(int)uVar30 * 2 + 0x14,uVar1 - uVar30,
                      *(undefined8 *)PTR_DAT_077884d8);
      return uVar12;
    }
  }
  func_0x03280cac();
LAB_055f9c30:
  func_0x03280a2c(PTR_DAT_07777718);
  uVar31 = func_0x03280ca0();
  func_0x057b9534(uVar31,0);
  uVar17 = func_0x03280a2c(PTR_DAT_077884f0);
  Var35 = func_0x03280b7c(uVar31,uVar17);
  *(undefined8 *)(puVar24 + -0xb0) = 0x55f9c64;
  *(int **)(puVar24 + -0xa8) = piVar18;
  *(long *)(puVar24 + -0xa0) = lVar16;
  *(undefined8 *)(puVar24 + -0x98) = uVar31;
  *(short *)(puVar24 + -0xb4) = (short)((unkuint10)Var35 >> 0x40);
  if ((bRam0000000007e1cd73 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07781e48);
    bRam0000000007e1cd73 = 1;
  }
  uVar8 = func_0x055f9cc4((long)Var35,puVar24 + -0xb4,1,0x7fffffff,uVar8 & 0xffffffff);
  return uVar8;
code_r0x0674bb00:
  lVar16 = *plVar23;
  unaff_x22 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x48);
  uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar8 != 0) {
    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)puVar7) {
        puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_0674bb54;
      }
      uVar8 = uVar8 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)puVar7,0);
LAB_0674bb54:
  lVar16 = puVar10[1];
  uVar8 = (*(code *)*puVar10)(plVar23,unaff_x22);
  if ((uVar8 & 1) == 0) {
    lVar16 = *(long *)puVar29;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar16 = *(long *)puVar29;
    }
    lVar9 = *plVar23;
    unaff_x22 = *(long **)(*(long *)(lVar16 + 0xb8) + 0x10);
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar7) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0674bbd0;
        }
        uVar8 = uVar8 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)puVar7,0);
LAB_0674bbd0:
    lVar16 = puVar10[1];
    uVar8 = (*(code *)*puVar10)(plVar23,unaff_x22);
    if ((uVar8 & 1) == 0) {
      lVar16 = *(long *)puVar29;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar16 = *(long *)puVar29;
      }
      lVar9 = *plVar23;
      unaff_x22 = *(long **)(*(long *)(lVar16 + 0xb8) + 0x18);
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar7) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0674bc4c;
          }
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)puVar7,0);
LAB_0674bc4c:
      lVar16 = puVar10[1];
      uVar8 = (*(code *)*puVar10)(plVar23,unaff_x22);
      if ((uVar8 & 1) == 0) {
        unaff_x22 = *(long **)(param_1 + 0xd0);
        if (unaff_x22 != (long *)0x0) {
          lVar9 = *unaff_x22;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar8 != 0) {
            piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar22) {
                puVar10 = (undefined8 *)(lVar9 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                goto LAB_0674bcb8;
              }
              uVar8 = uVar8 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar8 != 0);
          }
          lVar16 = 5;
          puVar10 = (undefined8 *)func_0x03256b10(unaff_x22);
LAB_0674bcb8:
          lVar9 = (*(code *)*puVar10)(unaff_x22,puVar10[1]);
          if (lVar9 != 0) {
            if (*(int *)(lVar9 + 0x20) == 0) {
              uVar8 = func_0x0674b87c(param_1);
              if ((uVar8 & 1) != 0) {
                param_4 = (long *)0x2;
                param_5 = 0;
                lVar16 = param_2;
                func_0x06212bc0(param_1,plVar23);
              }
            }
            else if (*(int *)(lVar9 + 0x20) == 1) {
              param_4 = (long *)0x1;
              param_5 = 0;
              lVar16 = param_2;
              func_0x06212bc0(param_1,plVar23);
            }
            goto LAB_0674bad4;
          }
LAB_0674bd48:
          func_0x03280cac();
        }
        func_0x03280cac();
        unaff_x23 = (undefined8 *)puVar4;
        unaff_x24 = puVar5;
        unaff_x25 = puVar29;
        unaff_x26 = puVar7;
        unaff_x27 = puVar22;
        goto LAB_0674bd50;
      }
    }
  }
  goto LAB_0674bad4;
}

