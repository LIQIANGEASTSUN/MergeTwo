/* Ghidra 12.1.2 native pseudocode; RVA 0x673122C; Merger.Game.Views.BoardItem.BoardItemView2.UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize; status ok */

/* WARNING: Possible PIC construction at 0x05a4e880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05a4f878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05a4e884) */
/* WARNING: Removing unreachable block (ram,0x05a4f87c) */
/* WARNING: Removing unreachable block (ram,0x05a4f88c) */
/* WARNING: Removing unreachable block (ram,0x05a4f890) */
/* WARNING: Removing unreachable block (ram,0x05a4ed3c) */
/* WARNING: Removing unreachable block (ram,0x05a4f678) */
/* WARNING: Removing unreachable block (ram,0x05a4f68c) */
/* WARNING: Removing unreachable block (ram,0x05a4f720) */
/* WARNING: Removing unreachable block (ram,0x05a4f734) */

void Merger_Game_Views_BoardItem_BoardItemView2__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
               (long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong *puVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long *in_x5;
  long lVar22;
  int *piVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  undefined *unaff_x23;
  long *plVar27;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  int iVar28;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  undefined1 auVar29 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar2 = PTR_DAT_077a08b8;
  if ((bRam0000000007e28986 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077a08b8);
    bRam0000000007e28986 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar4 = (long *)PTR_DAT_0774e4e0;
  plVar7 = param_1 + 0x17;
  uVar20 = 0;
  uVar21 = 0;
  uVar24 = 0x7e1f000;
  if ((bRam0000000007e1f7d2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077a1d18,plVar7,0);
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_077a26a0);
    func_0x03280a18(PTR_DAT_077a26a8);
    func_0x03280a18(PTR_DAT_077a26b0);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0774e6b8);
    func_0x03280a18(PTR_DAT_077a08b8);
    func_0x03280a18(PTR_DAT_077a26b8);
    func_0x03280a18(PTR_DAT_077a26c0);
    func_0x03280a18(PTR_DAT_077a26c8);
    bRam0000000007e1f7d2 = 1;
  }
  if (*(int *)(*plVar4 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar18 = (long *)0x0;
  uVar3 = func_0x06fe04ec(param_1,0);
  plVar25 = (long *)PTR_DAT_077a26b0;
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)func_0x03280b90(param_1,*(undefined8 *)PTR_DAT_077a26b0);
    if (plVar4 == (long *)0x0) {
      uVar3 = func_0x0539a8b0(*(undefined8 *)PTR_DAT_077a26a0);
      if ((uVar3 & 1) != 0) {
        lVar22 = func_0x0539a8d4(*(undefined8 *)PTR_DAT_077a26a8);
        uVar3 = uVar24;
        if (lVar22 != 0) {
          uVar3 = (ulong)*(uint *)(lVar22 + 0x1c);
          goto LAB_05a4e6fc;
        }
        goto LAB_05a4e8e8;
      }
LAB_05a4e84c:
      uVar3 = 0;
    }
    else {
      lVar22 = *plVar4;
      uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar24 != 0) {
        piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *plVar25) {
            puVar5 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_05a4e6e8;
          }
          uVar24 = uVar24 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar24 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar4,*plVar25,0);
LAB_05a4e6e8:
      plVar18 = (long *)puVar5[1];
      uVar3 = (*(code *)*puVar5)(plVar4,1);
      uVar3 = uVar3 & 0xffffffff;
LAB_05a4e6fc:
      if ((int)uVar3 == 2) {
        uVar24 = func_0x03280afc(*(undefined8 *)PTR_DAT_0774e6b8,5);
        if (uVar24 != 0) {
          if (*(int *)(uVar24 + 0x18) != 0) {
            plVar25 = (long *)(uVar24 + 0x20);
            *plVar25 = *(long *)PTR_DAT_077a26c0;
            func_0x032809c4(plVar25);
            unaff_x23 = PTR_DAT_077a1d18;
            uStack_48 = *(undefined8 *)PTR_DAT_077a1d18;
            uStack_38 = 2;
            uStack_40 = 0xffffffffffffffff;
            lVar22 = func_0x057cd6e4(&uStack_48,0);
            if (1 < *(uint *)(uVar24 + 0x18)) {
              plVar25 = (long *)(uVar24 + 0x28);
              *plVar25 = lVar22;
              func_0x032809c4(plVar25,lVar22);
              if (2 < *(uint *)(uVar24 + 0x18)) {
                plVar25 = (long *)(uVar24 + 0x30);
                *plVar25 = *(long *)PTR_DAT_077a26b8;
                func_0x032809c4(plVar25);
                uStack_60 = *(undefined8 *)unaff_x23;
                uStack_58 = 0xffffffffffffffff;
                uStack_50 = 0;
                lVar22 = func_0x057cd6e4(&uStack_60,0);
                if (3 < *(uint *)(uVar24 + 0x18)) {
                  plVar25 = (long *)(uVar24 + 0x38);
                  *plVar25 = lVar22;
                  func_0x032809c4(plVar25,lVar22);
                  if (4 < *(uint *)(uVar24 + 0x18)) {
                    *(undefined8 *)(uVar24 + 0x40) = *(undefined8 *)PTR_DAT_077a26c8;
                    func_0x032809c4();
                    uVar6 = func_0x055f7bd4(uVar24,0);
                    if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
                      func_0x03280b8c(*(long *)PTR_DAT_0774e598);
                    }
                    func_0x06fa8580(uVar6,0);
                    goto LAB_05a4e84c;
                  }
                }
              }
            }
          }
          func_0x03280cb4();
          plVar4 = plVar25;
          goto LAB_05a4e8a0;
        }
        goto LAB_05a4e8e8;
      }
    }
    uVar20 = uVar3;
    if (*(int *)(*(long *)PTR_DAT_077a08b8 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar18 = param_1 + 0x19;
    plVar4 = param_1 + 0x18;
    uVar21 = 0;
    in_x5 = (long *)0x0;
    uVar6 = 0x5a4e884;
    puVar5 = &uStack_60;
    plVar8 = param_1;
    uVar3 = uVar20;
  }
  else {
LAB_05a4e8a0:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    plVar7 = (long *)func_0x03280ca0();
    uVar6 = func_0x03280a2c(PTR_DAT_077a26d0);
    plVar18 = (long *)0x0;
    func_0x056e7310(plVar7,uVar6);
    uVar6 = func_0x03280a2c(PTR_DAT_077a26d8);
    func_0x03280b7c(plVar7,uVar6);
    uVar3 = uVar24;
    plVar25 = plVar4;
LAB_05a4e8e8:
    uVar6 = 0x5a4e8ec;
    auVar29 = func_0x03280cac();
    plVar4 = auVar29._8_8_;
    plVar8 = auVar29._0_8_;
    puVar5 = &uStack_60;
  }
SUB_05a4e8ec:
  plVar11 = (long *)PTR_DAT_0774e4e0;
  *(undefined8 *)((long)puVar5 + -0x60) = uVar6;
  *(undefined **)((long)puVar5 + -0x50) = unaff_x28;
  *(undefined8 *)((long)puVar5 + -0x48) = unaff_x27;
  *(undefined8 *)((long)puVar5 + -0x40) = unaff_x26;
  *(undefined **)((long)puVar5 + -0x38) = unaff_x25;
  *(long **)((long)puVar5 + -0x30) = unaff_x24;
  *(undefined **)((long)puVar5 + -0x28) = unaff_x23;
  *(long **)((long)puVar5 + -0x20) = plVar25;
  *(ulong *)((long)puVar5 + -0x18) = uVar3;
  *(long **)((long)puVar5 + -0x10) = param_1;
  *(long **)((long)puVar5 + -8) = plVar7;
  plVar26 = (long *)(uVar21 & 0xffffffff);
  plVar25 = (long *)(uVar20 & 0xffffffff);
  uVar24 = uVar20;
  uVar3 = uVar21;
  plVar7 = in_x5;
  if ((bRam0000000007e1f7d4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777b4d0);
    func_0x03280a18(PTR_DAT_0777b490);
    func_0x03280a18(PTR_DAT_077a18b0);
    func_0x03280a18(PTR_DAT_0777b4d8);
    func_0x03280a18(PTR_DAT_0777b4e0);
    func_0x03280a18(PTR_DAT_0777b498);
    func_0x03280a18(PTR_DAT_077a18a8);
    func_0x03280a18(PTR_DAT_077a1d18);
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_0777df68);
    func_0x03280a18(PTR_DAT_077a26a0);
    func_0x03280a18(PTR_DAT_077a26a8);
    func_0x03280a18(PTR_DAT_077a26e0);
    func_0x03280a18(PTR_DAT_0777b4c8);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e7b8);
    func_0x03280a18(PTR_DAT_07750198);
    func_0x03280a18(PTR_DAT_0774e7a8);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_077812c0);
    func_0x03280a18(PTR_DAT_077a08b8);
    func_0x03280a18(PTR_DAT_077a26e8);
    func_0x03280a18(PTR_DAT_077a26f0);
    bRam0000000007e1f7d4 = 1;
  }
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar19 = (long *)0x0;
  uVar9 = func_0x06fe04ec(plVar8,0);
  if ((uVar9 & 1) != 0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    plVar10 = (long *)func_0x03280ca0();
    uVar6 = func_0x03280a2c(PTR_DAT_077a26d0);
    plVar19 = (long *)0x0;
    func_0x056e7310(plVar10,uVar6);
    uVar6 = func_0x03280a2c(PTR_DAT_077a26f8);
    func_0x03280b7c(plVar10,uVar6);
    goto LAB_05a4f2d8;
  }
  if ((int)uVar20 == 2) {
    uVar6 = *(undefined8 *)PTR_DAT_077a1d18;
    *(undefined4 *)((long)puVar5 + -0x68) = 2;
    *(undefined8 *)((long)puVar5 + -0x78) = uVar6;
    *(undefined8 *)((long)puVar5 + -0x70) = 0xffffffffffffffff;
    uVar6 = func_0x057cd6e4((undefined1 *)((long)puVar5 + -0x78),0);
    uVar6 = func_0x055f7538(*(undefined8 *)PTR_DAT_077a26e8,uVar6,*(undefined8 *)PTR_DAT_077a26f0,0)
    ;
    if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0774e598);
    }
    func_0x06faa078(uVar6,0);
    return;
  }
  lVar22 = *plVar18;
  if (lVar22 == 0) {
    lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e7a8);
    func_0x04143c38(lVar22,*(undefined8 *)PTR_DAT_07750198);
    *plVar18 = lVar22;
    func_0x032809c4(plVar18,lVar22);
  }
  else {
    uVar1 = *(uint *)(lVar22 + 0x18);
    plVar19 = (long *)(ulong)uVar1;
    *(undefined4 *)(lVar22 + 0x18) = 0;
    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
    if (0 < (int)uVar1) {
      uVar24 = 0;
      func_0x057b9c7c(*(undefined8 *)(lVar22 + 0x10),0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_077a18a8 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar10 = (long *)func_0x04d3744c(*(undefined8 *)PTR_DAT_077a18b0);
  if (*(int *)(*(long *)PTR_DAT_0777b498 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)PTR_DAT_0777b498);
  }
  plVar11 = (long *)func_0x04d3744c(*(undefined8 *)PTR_DAT_0777b490);
  if (plVar11 == (long *)0x0) goto LAB_05a4f2e0;
  plVar27 = plVar8;
  plVar12 = plVar18;
  if (plVar11[3] == 0) goto LAB_05a4f2e4;
  func_0x05a4bdc4(plVar11[3],*plVar18);
  puVar2 = PTR_DAT_0777b4e0;
  if (in_x5 == (long *)0x0) {
    if (*(int *)(*(long *)PTR_DAT_0777b4e0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar13 = (long *)func_0x04d3744c(*(undefined8 *)PTR_DAT_0777b4d0);
    if (plVar13 == (long *)0x0) goto LAB_05a4f310;
    if (plVar13[3] == 0) goto LAB_05a4f314;
    lVar22 = func_0x05a205a0(plVar13[3],0);
    if (*(int *)(*(long *)PTR_DAT_077812c0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar6 = func_0x05a31174(0);
    if (lVar22 == 0) goto LAB_05a4f318;
    plVar18 = (long *)0x0;
    func_0x05a31500(lVar22,uVar6);
    uVar20 = func_0x0539a8b0(*(undefined8 *)PTR_DAT_077a26a0);
    lVar22 = plVar13[3];
    if ((uVar20 & 1) == 0) {
      if (lVar22 == 0) goto LAB_05a4f340;
      lVar22 = func_0x05a205a0(lVar22,0);
      if (lVar22 == 0) goto LAB_05a4f348;
      lVar22 = func_0x05a1f8d8(lVar22,0);
      if (lVar22 == 0) goto LAB_05a4f34c;
      plVar18 = (long *)0x0;
      func_0x05a31a4c(lVar22,0);
      if (plVar13[3] == 0) goto LAB_05a4f358;
      lVar22 = func_0x05a205a0(plVar13[3],0);
      if (lVar22 == 0) goto LAB_05a4f360;
      lVar22 = func_0x05a1f8d8(lVar22,0);
      if (lVar22 == 0) goto LAB_05a4f368;
      plVar18 = (long *)0x0;
      func_0x05a31a10(lVar22,0);
      if (plVar13[3] == 0) goto LAB_05a4f36c;
      lVar22 = func_0x05a205a0(plVar13[3],0);
      if (lVar22 == 0) goto LAB_05a4f378;
      lVar22 = func_0x05a1f8d8(lVar22,0);
      if (*(int *)(*(long *)PTR_DAT_0777df68 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar6 = func_0x059e9ba0(0);
      if (lVar22 == 0) goto LAB_05a4f380;
      plVar18 = (long *)0x0;
      func_0x05a31928(lVar22,uVar6);
    }
    else {
      if (lVar22 == 0) goto LAB_05a4f33c;
      lVar22 = func_0x05a205a0(lVar22,0);
      if (lVar22 == 0) goto LAB_05a4f344;
      lVar22 = func_0x05a1f8d8(lVar22,0);
      unaff_x28 = PTR_DAT_077a26a8;
      lVar15 = func_0x0539a8d4(*(undefined8 *)PTR_DAT_077a26a8);
      if (lVar15 == 0) goto LAB_05a4f350;
      if (lVar22 == 0) goto LAB_05a4f354;
      plVar18 = (long *)0x0;
      func_0x05a31a4c(lVar22,*(undefined4 *)(lVar15 + 0x28));
      if (plVar13[3] == 0) goto LAB_05a4f35c;
      lVar22 = func_0x05a205a0(plVar13[3],0);
      if (lVar22 == 0) goto LAB_05a4f364;
      lVar22 = func_0x05a1f8d8(lVar22,0);
      lVar15 = func_0x0539a8d4(*(undefined8 *)unaff_x28);
      if (lVar15 == 0) goto LAB_05a4f370;
      if (lVar22 == 0) goto LAB_05a4f374;
      plVar18 = (long *)0x0;
      func_0x05a31a10(lVar22,*(undefined4 *)(lVar15 + 0x24));
      if (plVar13[3] == 0) goto LAB_05a4f37c;
      lVar22 = func_0x05a205a0(plVar13[3],0);
      if (lVar22 == 0) goto LAB_05a4f384;
      lVar22 = func_0x05a1f8d8(lVar22,0);
      lVar15 = func_0x0539a8d4(*(undefined8 *)unaff_x28);
      if (lVar15 == 0) goto LAB_05a4f388;
      uVar6 = func_0x059e9ea8(lVar15,0);
      if (lVar22 == 0) goto LAB_05a4f38c;
      plVar18 = (long *)0x0;
      func_0x05a31928(lVar22,uVar6);
    }
    if (plVar13[3] == 0) goto LAB_05a4f324;
    *(long *)(plVar13[3] + 0x40) = plVar11[3];
    func_0x032809c4();
    if (plVar10 == (long *)0x0) goto LAB_05a4f328;
    if (plVar10[3] == 0) goto LAB_05a4f32c;
    uVar6 = func_0x05a24ba8(plVar10[3],0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar18 = (long *)func_0x04d37d00(plVar13,*(undefined8 *)PTR_DAT_0777b4d8);
    unaff_x28 = PTR_DAT_077a08b8;
    if (*(int *)(*(long *)PTR_DAT_077a08b8 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar25 = (long *)func_0x05a4f8c4(plVar25,uVar6);
    if (plVar25 == (long *)0x0) goto LAB_05a4f330;
    lVar22 = *plVar25;
    uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar20 != 0) {
      piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_077a26e0) {
          puVar14 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_05a4f024;
        }
        uVar20 = uVar20 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_077a26e0,0);
LAB_05a4f024:
    uVar6 = (*(code *)*puVar14)(plVar25,puVar14[1]);
    if (*(int *)(*(long *)unaff_x28 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar6 = func_0x03280b90(uVar6,*(undefined8 *)PTR_DAT_0777b4c8);
    plVar18 = (long *)(ulong)((uint)uVar21 & 1);
    func_0x05a4fb70(plVar8,uVar6);
    plVar12 = (long *)0x9;
    if (plVar25 != (long *)0x0) {
      lVar22 = *plVar25;
      uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar20 != 0) {
        piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar14 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_05a4f0cc;
          }
          uVar20 = uVar20 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar20 != 0);
      }
      plVar18 = (long *)0x0;
      puVar14 = (undefined8 *)func_0x03256b10(plVar25);
LAB_05a4f0cc:
      (*(code *)*puVar14)(plVar25,puVar14[1]);
    }
    plVar26 = (long *)0x0;
    do {
      if (plVar13 != (long *)0x0) {
        lVar22 = *plVar13;
        uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar20 != 0) {
          piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar14 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_05a4f144;
            }
            uVar20 = uVar20 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar20 != 0);
        }
        plVar18 = (long *)0x0;
        puVar14 = (undefined8 *)func_0x03256b10(plVar13);
LAB_05a4f144:
        (*(code *)*puVar14)(plVar13,puVar14[1]);
      }
      plVar27 = plVar26;
      if (plVar26 == (long *)0x0) {
        plVar8 = plVar26;
        if (((int)plVar12 == 9) || ((int)plVar12 == 0)) goto LAB_05a4f160;
        goto LAB_05a4f198;
      }
      while( true ) {
        func_0x03280ca4(plVar27);
LAB_05a4f324:
        func_0x03280cac();
LAB_05a4f328:
        func_0x03280cac();
LAB_05a4f32c:
        func_0x03280cac();
LAB_05a4f330:
        func_0x03280cac();
        func_0x03280ca4(plVar26);
LAB_05a4f33c:
        func_0x03280cac();
        plVar8 = plVar27;
LAB_05a4f340:
        func_0x03280cac();
LAB_05a4f344:
        func_0x03280cac();
LAB_05a4f348:
        func_0x03280cac();
LAB_05a4f34c:
        func_0x03280cac();
LAB_05a4f350:
        func_0x03280cac();
LAB_05a4f354:
        func_0x03280cac();
LAB_05a4f358:
        func_0x03280cac();
LAB_05a4f35c:
        func_0x03280cac();
LAB_05a4f360:
        func_0x03280cac();
LAB_05a4f364:
        func_0x03280cac();
LAB_05a4f368:
        func_0x03280cac();
LAB_05a4f36c:
        func_0x03280cac();
LAB_05a4f370:
        func_0x03280cac();
LAB_05a4f374:
        func_0x03280cac();
LAB_05a4f378:
        func_0x03280cac();
LAB_05a4f37c:
        func_0x03280cac();
LAB_05a4f380:
        func_0x03280cac();
LAB_05a4f384:
        func_0x03280cac();
LAB_05a4f388:
        func_0x03280cac();
        plVar27 = plVar8;
LAB_05a4f38c:
        auVar29 = func_0x03280cac();
        unaff_x27 = auVar29._8_8_;
        plVar12 = auVar29._0_8_;
        iVar28 = auVar29._8_4_;
        if (iVar28 == 1) break;
        plVar26 = (long *)0x0;
        in_x5 = plVar7;
        if (plVar13 != (long *)0x0) {
          lVar22 = *plVar13;
          uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar20 != 0) {
            piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar14 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_05a4f668;
              }
              uVar20 = uVar20 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar20 != 0);
          }
          plVar18 = (long *)0x0;
          puVar14 = (undefined8 *)func_0x03256b10(plVar13);
          in_x5 = plVar7;
LAB_05a4f668:
          (*(code *)*puVar14)(plVar13,puVar14[1]);
        }
        if (iVar28 == 1) {
          puVar14 = (undefined8 *)func_0x072ce910(plVar12);
          plVar4 = (long *)*puVar14;
          func_0x072ce920();
LAB_05a4f19c:
          if (plVar11 != (long *)0x0) {
            lVar22 = *plVar11;
            uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar20 != 0) {
              piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
                  puVar14 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_05a4f1f4;
                }
                uVar20 = uVar20 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar20 != 0);
            }
            plVar18 = (long *)0x0;
            puVar14 = (undefined8 *)func_0x03256b10(plVar11);
LAB_05a4f1f4:
            (*(code *)*puVar14)(plVar11,puVar14[1]);
          }
          plVar19 = plVar18;
          plVar7 = in_x5;
          if (plVar4 == (long *)0x0) {
            plVar11 = (long *)0x0;
            goto LAB_05a4f208;
          }
        }
        else {
          plVar4 = (long *)0x0;
          if (plVar11 != (long *)0x0) {
            lVar22 = *plVar11;
            uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar20 != 0) {
              piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
                  puVar14 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_05a4f710;
                }
                uVar20 = uVar20 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar20 != 0);
            }
            plVar18 = (long *)0x0;
            puVar14 = (undefined8 *)func_0x03256b10(plVar11);
LAB_05a4f710:
            (*(code *)*puVar14)(plVar11,puVar14[1]);
          }
          if (iVar28 != 1) {
            if (plVar10 == (long *)0x0) goto LAB_05a4f7cc;
            lVar22 = *plVar10;
            uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar20 == 0) goto LAB_05a4f7a4;
            piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            goto LAB_05a4f78c;
          }
          puVar14 = (undefined8 *)func_0x072ce910(plVar12);
          plVar11 = (long *)*puVar14;
          func_0x072ce920();
LAB_05a4f208:
          if (plVar10 != (long *)0x0) {
            lVar22 = *plVar10;
            uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar20 != 0) {
              piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
                  puVar14 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_05a4f260;
                }
                uVar20 = uVar20 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar20 != 0);
            }
            plVar18 = (long *)0x0;
            puVar14 = (undefined8 *)func_0x03256b10(plVar10);
LAB_05a4f260:
            (*(code *)*puVar14)(plVar10,puVar14[1]);
          }
          plVar19 = plVar18;
          plVar7 = in_x5;
          in_x5 = plVar13;
          plVar8 = plVar27;
          plVar18 = plVar12;
          if (plVar11 == (long *)0x0) {
            return;
          }
LAB_05a4f2d8:
          func_0x03280ca4(plVar11);
LAB_05a4f2e0:
          func_0x03280cac();
          plVar27 = plVar8;
          plVar12 = plVar18;
LAB_05a4f2e4:
          func_0x03280cac();
          plVar13 = in_x5;
        }
        func_0x03280ca4(plVar4);
LAB_05a4f2f0:
        func_0x03280cac();
LAB_05a4f2f4:
        in_x5 = plVar19;
        func_0x03280cac();
LAB_05a4f2f8:
        func_0x03280cac();
        func_0x03280ca4(plVar12);
LAB_05a4f304:
        func_0x03280cac();
        plVar19 = in_x5;
LAB_05a4f308:
        func_0x03280cac();
LAB_05a4f30c:
        func_0x03280cac();
LAB_05a4f310:
        func_0x03280cac();
LAB_05a4f314:
        func_0x03280cac();
LAB_05a4f318:
        func_0x03280cac();
        plVar18 = plVar19;
      }
      puVar17 = (ulong *)func_0x072ce910(plVar12);
      plVar26 = (long *)*puVar17;
      func_0x072ce920();
      plVar12 = (long *)0x0;
    } while( true );
  }
  in_x5[8] = plVar11[3];
  func_0x032809c4();
  plVar13 = in_x5;
  if (plVar10 == (long *)0x0) goto LAB_05a4f2f0;
  if (plVar10[3] == 0) goto LAB_05a4f2f4;
  plVar12 = (long *)func_0x05a24ba8(plVar10[3],0);
  puVar2 = PTR_DAT_077a08b8;
  if (*(int *)(*(long *)PTR_DAT_077a08b8 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar13 = (long *)func_0x05a4f8c4(uVar20 & 0xffffffff,plVar12);
  if (plVar13 == (long *)0x0) goto LAB_05a4f2f8;
  lVar22 = *plVar13;
  uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar20 == 0) goto LAB_05a4ec64;
  piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
  goto LAB_05a4ec4c;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar23 = piVar23 + 4;
    if (uVar20 == 0) break;
LAB_05a4ec4c:
    if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_077a26e0) {
      puVar14 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_05a4ec80;
    }
  }
LAB_05a4ec64:
  puVar14 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077a26e0,0);
LAB_05a4ec80:
  uVar6 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar6 = func_0x03280b90(uVar6,*(undefined8 *)PTR_DAT_0777b4c8);
  plVar18 = (long *)(ulong)((uint)uVar21 & 1);
  func_0x05a4fb70(plVar8,uVar6);
  plVar12 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    lVar22 = *plVar13;
    uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar20 != 0) {
      piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar14 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_05a4ed24;
        }
        uVar20 = uVar20 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar20 != 0);
    }
    plVar18 = (long *)0x0;
    puVar14 = (undefined8 *)func_0x03256b10(plVar13);
LAB_05a4ed24:
    (*(code *)*puVar14)(plVar13,puVar14[1]);
  }
LAB_05a4f160:
  in_x5 = plVar18;
  plVar27 = plVar8;
  if (plVar10 == (long *)0x0) goto LAB_05a4f304;
  plVar19 = plVar18;
  if (plVar10[3] == 0) goto LAB_05a4f308;
  plVar16 = (long *)func_0x05a24ba8(plVar10[3],0);
  plVar19 = plVar18;
  if (plVar16 == (long *)0x0) goto LAB_05a4f30c;
  lVar22 = (**(code **)(*plVar16 + 0x418))(plVar16,*(undefined8 *)(*plVar16 + 0x420));
  *plVar4 = lVar22;
  func_0x032809c4(plVar4);
LAB_05a4f198:
  plVar4 = (long *)0x0;
  in_x5 = plVar7;
  plVar27 = plVar8;
  goto LAB_05a4f19c;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar23 = piVar23 + 4;
    if (uVar20 == 0) break;
LAB_05a4f78c:
    if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar14 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_05a4f7c0;
    }
  }
LAB_05a4f7a4:
  plVar18 = (long *)0x0;
  puVar14 = (undefined8 *)func_0x03256b10(plVar10);
LAB_05a4f7c0:
  (*(code *)*puVar14)(plVar10,puVar14[1]);
LAB_05a4f7cc:
  func_0x03365958(plVar12);
  func_0x03280ca4(0);
  auVar29 = func_0x02f09514();
  puVar2 = PTR_DAT_077a08b8;
  plVar7 = auVar29._8_8_;
  plVar8 = auVar29._0_8_;
  *(undefined8 *)((long)puVar5 + -0xd0) = 0x5a4f7e4;
  *(long **)((long)puVar5 + -0xc0) = plVar12;
  *(long **)((long)puVar5 + -0xb8) = plVar25;
  *(long **)((long)puVar5 + -0xb0) = plVar27;
  *(undefined8 *)((long)puVar5 + -0xa8) = 0;
  *(long **)((long)puVar5 + -0xa0) = plVar13;
  *(undefined8 *)((long)puVar5 + -0x98) = 0;
  *(undefined8 *)((long)puVar5 + -0x90) = 0;
  *(long **)((long)puVar5 + -0x88) = plVar10;
  unaff_x26 = 0x7e1f000;
  unaff_x23 = (undefined *)(uVar3 & 0xffffffff);
  uVar20 = uVar24 & 0xffffffff;
  if ((bRam0000000007e1f7d3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f270);
    func_0x03280a18(PTR_DAT_077a08b8);
    bRam0000000007e1f7d3 = 1;
  }
  unaff_x25 = PTR_DAT_0774f270;
  lVar22 = *(long *)puVar2;
  *(undefined8 *)((long)puVar5 + -200) = 0;
  if (*(int *)(lVar22 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar21 = (ulong)((uint)uVar3 & 1);
  plVar4 = (long *)((long)puVar5 + -200);
  uVar6 = 0x5a4f87c;
  puVar5 = (undefined8 *)((long)puVar5 + -0xd0);
  param_1 = in_x5;
  uVar3 = uVar20;
  plVar25 = plVar18;
  unaff_x24 = plVar8;
  goto SUB_05a4e8ec;
}

