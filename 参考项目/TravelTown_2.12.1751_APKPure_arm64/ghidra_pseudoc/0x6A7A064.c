/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7A064; Merger.MergeBoard.Systems.TransformSystem.HandleTransformByDuration; status ok */


/* WARNING: Possible PIC construction at 0x06b7a1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a2f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b7a73c) */
/* WARNING: Removing unreachable block (ram,0x06b7a56c) */
/* WARNING: Removing unreachable block (ram,0x06b7a590) */
/* WARNING: Removing unreachable block (ram,0x06b7a5cc) */
/* WARNING: Removing unreachable block (ram,0x06b7a5d4) */
/* WARNING: Removing unreachable block (ram,0x06b7a5fc) */
/* WARNING: Removing unreachable block (ram,0x06b7a5e0) */
/* WARNING: Removing unreachable block (ram,0x06b7a5ec) */
/* WARNING: Removing unreachable block (ram,0x06b7a60c) */
/* WARNING: Removing unreachable block (ram,0x06b7a670) */
/* WARNING: Removing unreachable block (ram,0x06b7a6a0) */
/* WARNING: Removing unreachable block (ram,0x06b7a6a8) */
/* WARNING: Removing unreachable block (ram,0x06b7a6d0) */
/* WARNING: Removing unreachable block (ram,0x06b7a6b4) */
/* WARNING: Removing unreachable block (ram,0x06b7a6c0) */
/* WARNING: Removing unreachable block (ram,0x06b7a6dc) */
/* WARNING: Removing unreachable block (ram,0x06b7a21c) */
/* WARNING: Removing unreachable block (ram,0x06b7a2ac) */
/* WARNING: Removing unreachable block (ram,0x06b7a2b4) */
/* WARNING: Removing unreachable block (ram,0x06b7a2c0) */
/* WARNING: Removing unreachable block (ram,0x06b7a224) */
/* WARNING: Removing unreachable block (ram,0x06b7a248) */
/* WARNING: Removing unreachable block (ram,0x06b7a27c) */
/* WARNING: Removing unreachable block (ram,0x06b7a284) */
/* WARNING: Removing unreachable block (ram,0x06b7a2f8) */
/* WARNING: Removing unreachable block (ram,0x06b7a290) */
/* WARNING: Removing unreachable block (ram,0x06b7a29c) */
/* WARNING: Removing unreachable block (ram,0x06b7a308) */
/* WARNING: Removing unreachable block (ram,0x06b7a36c) */
/* WARNING: Removing unreachable block (ram,0x06b7a39c) */
/* WARNING: Removing unreachable block (ram,0x06b7a3a4) */
/* WARNING: Removing unreachable block (ram,0x06b7a3cc) */
/* WARNING: Removing unreachable block (ram,0x06b7a3b0) */
/* WARNING: Removing unreachable block (ram,0x06b7a3bc) */
/* WARNING: Removing unreachable block (ram,0x06b7a3d8) */
/* WARNING: Removing unreachable block (ram,0x06b7a1b4) */
/* WARNING: Removing unreachable block (ram,0x06b7a1e8) */
/* WARNING: Removing unreachable block (ram,0x06b7a204) */
/* WARNING: Removing unreachable block (ram,0x06b7a2f4) */
/* WARNING: Removing unreachable block (ram,0x06b7a438) */

ulong Merger_MergeBoard_Systems_TransformSystem__HandleTransformByDuration
                (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  long extraout_x1;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  undefined1 *puVar30;
  ulong uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  ulong uVar34;
  long *plVar35;
  undefined8 *unaff_x27;
  undefined8 unaff_x29;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined8 uStack_4f0;
  undefined1 auStack_4b0 [448];
  undefined1 auStack_290 [560];
  
  puVar5 = PTR_DAT_07830b20;
  puVar4 = PTR_DAT_0774f158;
  auVar37._8_8_ = param_2;
  auVar37._0_8_ = param_3;
  if ((bRam0000000007e2a720 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830b00);
    func_0x03280a18(PTR_DAT_078103b0);
    func_0x03280a18(PTR_DAT_07830b20);
    func_0x03280a18(PTR_DAT_07830b40);
    func_0x03280a18(PTR_DAT_07831838);
    func_0x03280a18(PTR_DAT_07831840);
    func_0x03280a18(PTR_DAT_078104d0);
    func_0x03280a18(PTR_DAT_0774f158);
    func_0x03280a18(PTR_DAT_078104c8);
    bRam0000000007e2a720 = 1;
  }
  uVar17 = *(ulong *)puVar4;
  uVar21 = 0;
  uVar19 = uVar17;
  uVar28 = uVar17;
  uVar13 = func_0x06ba3134(param_4,*(undefined8 *)(param_1 + 0x10));
  uVar34 = *(ulong *)(param_2 + 0x10);
  puVar14 = (undefined1 *)func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x06b9acd8(puVar14,0);
  puVar4 = PTR_DAT_078104c8;
  uVar9 = uVar19;
  uVar11 = uVar28;
  if (puVar14 == (undefined1 *)0x0) {
LAB_06b7a458:
    auVar37 = func_0x03280cac();
    puVar4 = PTR_DAT_07831848;
    puVar6 = auStack_4b0;
    uVar13 = uVar17;
    uVar19 = uVar9;
    uVar28 = uVar11;
    uVar7 = uVar21;
    if ((bRam0000000007e2a721 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07831848);
      func_0x03280a18(PTR_DAT_07830b00);
      func_0x03280a18(PTR_DAT_07831850);
      func_0x03280a18(PTR_DAT_07814400);
      func_0x03280a18(PTR_DAT_078104c8);
      func_0x03280a18(PTR_DAT_0777e958);
      bRam0000000007e2a721 = 1;
    }
    uVar34 = *(ulong *)(auVar37._8_8_ + 0x10);
    puVar14 = (undefined1 *)func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x06b9a4b8(puVar14,0);
    puVar4 = PTR_DAT_0777e958;
    uVar20 = uVar28;
    if (puVar14 != (undefined1 *)0x0) {
      *(ulong *)(puVar14 + 0x10) = uVar17;
      func_0x032809c4(puVar14 + 0x10,uVar17);
      *(int *)(puVar14 + 0x18) = (int)uVar11;
      unaff_x27 = (undefined8 *)(puVar14 + 0x20);
      *unaff_x27 = *(undefined8 *)puVar4;
      func_0x032809c4(unaff_x27);
      puVar14[0x28] = *(undefined1 *)(uVar9 + 0x20);
      *(undefined4 *)(puVar14 + 0x2c) = *(undefined4 *)(uVar9 + 0x24);
      uVar20 = uVar28;
      if (uVar34 != 0) {
        puVar18 = *(undefined1 **)PTR_DAT_07831850;
        uStack_4f0 = 0x6b7a56c;
        puVar6 = auStack_4b0;
        uVar31 = uVar34;
        puVar15 = puVar14;
        goto SUB_03ec33e4;
      }
    }
    func_0x03280cac();
    uStack_4f0 = 0x6b7a760;
    uVar28 = uVar20;
    if ((bRam0000000007e2a722 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07830b08);
      func_0x03280a18(PTR_DAT_07830b38);
      bRam0000000007e2a722 = 1;
    }
    puVar4 = PTR_DAT_07830b08;
    if (uVar20 != 0) {
      *(undefined8 *)(uVar20 + 0xb8) = uVar7;
      func_0x032809c4((undefined8 *)(uVar20 + 0xb8),uVar7);
      *(undefined8 *)(uVar20 + 0xc0) = param_7;
      func_0x032809c4((undefined8 *)(uVar20 + 0xc0),param_7);
      *(undefined4 *)(uVar20 + 0xa0) = 0;
      *(undefined8 *)(uVar20 + 0x108) = 0;
    }
    uVar31 = *(ulong *)(extraout_x1 + 0x10);
    puVar15 = (undefined1 *)func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x06b9a8d4(puVar15,0);
    if (puVar15 == (undefined1 *)0x0) {
SUB_057da5fc:
      uVar19 = func_0x03280cac();
      return uVar19;
    }
    *(ulong *)(puVar15 + 0x10) = uVar13;
    func_0x032809c4(puVar15 + 0x10,uVar13);
    *(undefined8 *)(puVar15 + 0x18) = uVar7;
    func_0x032809c4(puVar15 + 0x18,uVar7);
    *(ulong *)(puVar15 + 0x20) = uVar20;
    func_0x032809c4(puVar15 + 0x20,uVar20);
    if (uVar31 == 0) goto SUB_057da5fc;
    puVar18 = *(undefined1 **)PTR_DAT_07830b38;
  }
  else {
    *(undefined8 *)(puVar14 + 0x10) = param_4;
    func_0x032809c4(puVar14 + 0x10,param_4);
    *(int *)(puVar14 + 0x18) = (int)param_5;
    *(undefined8 *)(puVar14 + 0x20) = *(undefined8 *)puVar4;
    func_0x032809c4();
    uVar9 = uVar19;
    uVar11 = uVar28;
    if (uVar34 == 0) goto LAB_06b7a458;
    puVar18 = *(undefined1 **)PTR_DAT_07830b40;
    uStack_4f0 = 0x6b7a1b4;
    puVar6 = auStack_290;
    uVar31 = uVar34;
    puVar15 = puVar14;
    uVar21 = param_4;
    uVar17 = param_5;
    uVar11 = uVar13;
    uVar9 = param_1;
    unaff_x27 = (undefined8 *)PTR_DAT_07831840;
  }
SUB_03ec33e4:
  *(undefined8 *)(puVar6 + -0x30) = uStack_4f0;
  *(ulong *)(puVar6 + -0x28) = uVar9;
  *(ulong *)(puVar6 + -0x20) = uVar11;
  *(long *)(puVar6 + -0x18) = auVar37._8_8_;
  *(ulong *)(puVar6 + -0x10) = uVar17;
  *(undefined8 *)(puVar6 + -8) = uVar21;
  puVar22 = *(undefined8 **)(puVar18 + 0x38);
  puVar30 = puVar18;
  if (puVar22 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar22 = *(undefined8 **)(puVar18 + 0x38);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x03256878(puVar18);
      puVar22 = *(undefined8 **)(puVar18 + 0x38);
    }
  }
  *(undefined8 *)(puVar6 + -0x38) = 0;
  uVar21 = *puVar22;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar7 = func_0x057a51c4(uVar21,0);
  if (*(long *)(uVar31 + 0x10) != 0) {
    puVar30 = puVar6 + -0x38;
    uVar19 = *(ulong *)PTR_DAT_0777b730;
    uVar17 = func_0x04fe48b0(*(long *)(uVar31 + 0x10),uVar7);
    uVar21 = uVar7;
    if ((uVar17 & 1) == 0) {
      uVar11 = *(ulong *)(uVar31 + 0x10);
      uVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(uVar9,*(undefined8 *)PTR_DAT_07751030);
      if (uVar9 != 0) {
        lVar8 = *(long *)(uVar9 + 0x10);
        lVar23 = *(long *)PTR_DAT_07751038;
        *(int *)(uVar9 + 0x1c) = *(int *)(uVar9 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar3 = *(uint *)(uVar9 + 0x18);
          if (uVar3 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(uVar9 + 0x18) = uVar3 + 1;
            puVar22 = (undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
            *puVar22 = puVar15;
            func_0x032809c4(puVar22,puVar15);
          }
          else {
            puVar30 = *(undefined1 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(uVar9,puVar15);
          }
          if (uVar11 != 0) {
            func_0x04fe2d68(uVar11,uVar7,uVar9,*(undefined8 *)PTR_DAT_0777b738);
            return uVar31;
          }
        }
      }
    }
    else {
      lVar8 = *(long *)(puVar6 + -0x38);
      if (lVar8 != 0) {
        lVar23 = *(long *)(lVar8 + 0x10);
        lVar26 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar23 != 0) {
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar23 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            puVar22 = (undefined8 *)(lVar23 + (long)(int)uVar3 * 8 + 0x20);
            *puVar22 = puVar15;
            func_0x032809c4(puVar22,puVar15);
          }
          else {
            func_0x0414446c(lVar8,puVar15,
                            *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
          }
          return uVar31;
        }
      }
    }
  }
  auVar36 = func_0x03280cac();
  puVar18 = auVar36._8_8_;
  uVar17 = auVar36._0_8_;
  *(undefined8 *)(puVar6 + -0xa0) = unaff_x29;
  *(undefined8 *)(puVar6 + -0x98) = 0x3ec35f8;
  *(undefined8 **)(puVar6 + -0x90) = unaff_x27;
  *(undefined1 **)(puVar6 + -0x80) = puVar14;
  *(ulong *)(puVar6 + -0x78) = uVar34;
  *(long *)(puVar6 + -0x70) = auVar37._0_8_;
  *(ulong *)(puVar6 + -0x68) = uVar9;
  *(ulong *)(puVar6 + -0x60) = uVar11;
  *(undefined8 *)(puVar6 + -0x58) = uVar21;
  *(undefined1 **)(puVar6 + -0x50) = puVar15;
  *(ulong *)(puVar6 + -0x48) = uVar31;
  lVar8 = tpidr_el0;
  *(undefined8 *)(puVar6 + -0xa8) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined1 **)(puVar6 + -0xb0) = puVar18;
  plVar24 = *(long **)(puVar30 + 0x38);
  puVar15 = puVar30;
  if (plVar24 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar24 = *(long **)(puVar30 + 0x38);
    if (plVar24 == (long *)0x0) {
      func_0x03256878(puVar30);
      plVar24 = *(long **)(puVar30 + 0x38);
    }
  }
  puVar33 = (undefined1 *)(ulong)*(uint *)(plVar24[1] + 0xfc);
  puVar32 = puVar6 + (-0xc0 - ((ulong)(puVar33 + 0xf) & 0x1fffffff0));
  *(undefined8 *)(puVar6 + -0xb8) = 0;
  lVar23 = *plVar24;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = func_0x057a51c4(lVar23,0);
  if (*(long *)(uVar17 + 0x10) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    uVar19 = *(ulong *)PTR_DAT_0777b730;
    uVar9 = func_0x04fe48b0(*(long *)(uVar17 + 0x10),lVar26,puVar6 + -0xb8);
    puVar15 = puVar33;
    if ((uVar9 & 1) == 0) {
      uVar34 = *(ulong *)(uVar17 + 0x10);
      puVar14 = (undefined1 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(puVar14,*(undefined8 *)PTR_DAT_07751030);
      puVar30 = *(undefined1 **)(puVar30 + 0x38);
      puVar1 = puVar18;
      if (-1 < *(int *)(*(long *)(puVar30 + 8) + 0x28)) {
        puVar1 = puVar6 + -0xb0;
      }
      func_0x072ce970(puVar32,puVar1);
      uVar21 = func_0x03280b94(*(undefined8 *)(puVar30 + 8),puVar32);
      lVar23 = lVar26;
      if (puVar14 != (undefined1 *)0x0) {
        lVar25 = *(long *)(puVar14 + 0x10);
        lVar27 = *(long *)PTR_DAT_07751038;
        *(int *)(puVar14 + 0x1c) = *(int *)(puVar14 + 0x1c) + 1;
        if (lVar25 != 0) {
          uVar3 = *(uint *)(puVar14 + 0x18);
          if (uVar3 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(puVar14 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar25 + (long)(int)uVar3 * 8 + 0x20) = uVar21;
            func_0x032809c4();
          }
          else {
            puVar15 = *(undefined1 **)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(puVar14);
          }
          if (uVar34 != 0) {
            uVar19 = *(ulong *)PTR_DAT_0777b738;
            puVar15 = puVar14;
            func_0x04fe2d68(uVar34,lVar26);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar26 = *(long *)(puVar30 + 0x38);
    puVar30 = *(undefined1 **)(puVar6 + -0xb8);
    puVar1 = puVar18;
    if (-1 < *(int *)(*(long *)(lVar26 + 8) + 0x28)) {
      puVar1 = puVar6 + -0xb0;
    }
    func_0x072ce970(puVar32,puVar1);
    uVar21 = func_0x03280b94(*(undefined8 *)(lVar26 + 8),puVar32);
    lVar23 = lVar26;
    if (puVar30 == (undefined1 *)0x0) goto LAB_03ec38b8;
    lVar25 = *(long *)(puVar30 + 0x10);
    lVar27 = *(long *)PTR_DAT_07751038;
    *(int *)(puVar30 + 0x1c) = *(int *)(puVar30 + 0x1c) + 1;
    if (lVar25 == 0) goto LAB_03ec38b8;
    uVar3 = *(uint *)(puVar30 + 0x18);
    if (uVar3 < *(uint *)(lVar25 + 0x18)) {
      *(uint *)(puVar30 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar25 + (long)(int)uVar3 * 8 + 0x20) = uVar21;
      func_0x032809c4();
    }
    else {
      puVar15 = *(undefined1 **)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(puVar30);
    }
LAB_03ec3884:
    lVar23 = lVar26;
    if (*(long *)(lVar8 + 0x28) == *(long *)(puVar6 + -0xa8)) {
      return uVar17;
    }
  }
  auVar37 = func_0x072ce990();
  *(undefined8 *)(puVar32 + -0x30) = 0x3ec38c0;
  *(long *)(puVar32 + -0x20) = lVar23;
  *(undefined1 **)(puVar32 + -0x18) = puVar30;
  *(undefined1 **)(puVar32 + -0x10) = puVar18;
  *(ulong *)(puVar32 + -8) = uVar17;
  *(undefined8 *)(puVar32 + -0x28) = 0;
  lVar23 = *(long *)(puVar15 + 0x20);
  puVar18 = puVar15;
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c(lVar23);
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  if (*(int *)(lVar23 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar23 = *(long *)(puVar15 + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = **(long **)(lVar23 + 0xb8);
  if (lVar23 != 0) {
    lVar26 = *(long *)(puVar15 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    puVar18 = *(undefined1 **)(*(long *)(lVar26 + 0xc0) + 0x18);
    uVar9 = func_0x04e81584(lVar23,puVar32 + -0x28);
    if ((uVar9 & 1) == 0) {
      lVar26 = *(long *)(puVar15 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar9 = func_0x03280ca0();
      lVar26 = *(long *)(puVar15 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      func_0x04645340(uVar9,*(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x38));
      puVar15 = (undefined1 *)0x0;
      if (uVar9 != 0) {
        *(undefined1 (*) [16])(uVar9 + 0x10) = auVar37;
        func_0x032809c4((undefined1 (*) [16])(uVar9 + 0x10),0);
        return uVar9;
      }
    }
    else if (*(long *)(puVar32 + -0x28) != 0) {
      pauVar10 = (undefined1 (*) [16])(*(long *)(puVar32 + -0x28) + 0x10);
      *pauVar10 = auVar37;
      func_0x032809c4(pauVar10,0);
      return *(ulong *)(puVar32 + -0x28);
    }
  }
  auVar36 = func_0x03280cac();
  uVar21 = auVar36._0_8_;
  *(undefined8 *)(puVar32 + -0x60) = 0x3ec3a10;
  *(undefined1 **)(puVar32 + -0x58) = puVar32;
  *(long *)(puVar32 + -0x50) = lVar23;
  *(undefined1 **)(puVar32 + -0x48) = puVar15;
  *(undefined1 (*) [16])(puVar32 + -0x40) = auVar37;
  *(undefined8 *)(puVar32 + -0x68) = 0;
  lVar23 = *(long *)(uVar19 + 0x20);
  puVar15 = puVar18;
  uVar9 = uVar19;
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c(lVar23);
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  if (*(int *)(lVar23 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar23 = *(long *)(uVar19 + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = **(long **)(lVar23 + 0xb8);
  if (lVar23 != 0) {
    lVar26 = *(long *)(uVar19 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    puVar15 = *(undefined1 **)(*(long *)(lVar26 + 0xc0) + 0x18);
    uVar11 = func_0x04e81584(lVar23,puVar32 + -0x68);
    if ((uVar11 & 1) == 0) {
      lVar26 = *(long *)(uVar19 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar11 = func_0x03280ca0();
      lVar26 = *(long *)(uVar19 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      func_0x046453e4(uVar11,*(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x40));
      uVar19 = 0;
      if (uVar11 != 0) {
        *(undefined8 *)(uVar11 + 0x10) = uVar21;
        func_0x032809c4((undefined8 *)(uVar11 + 0x10),uVar21);
        *(undefined8 *)(uVar11 + 0x18) = auVar36._8_8_;
        *(undefined1 **)(uVar11 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(uVar11 + 0x18),0);
        return uVar11;
      }
    }
    else if (*(long *)(puVar32 + -0x68) != 0) {
      puVar22 = (undefined8 *)(*(long *)(puVar32 + -0x68) + 0x10);
      *puVar22 = uVar21;
      func_0x032809c4(puVar22,uVar21);
      lVar26 = *(long *)(puVar32 + -0x68);
      if (lVar26 != 0) {
        *(undefined8 *)(lVar26 + 0x18) = auVar36._8_8_;
        *(undefined1 **)(lVar26 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(lVar26 + 0x18),0);
        return *(ulong *)(puVar32 + -0x68);
      }
    }
  }
  auVar37 = func_0x03280cac();
  uVar21 = auVar37._0_8_;
  *(undefined8 *)(puVar32 + -0xa0) = 0x3ec3b90;
  *(long *)(puVar32 + -0x98) = lVar23;
  *(ulong *)(puVar32 + -0x90) = uVar19;
  *(undefined1 (*) [16])(puVar32 + -0x88) = auVar36;
  *(undefined1 **)(puVar32 + -0x78) = puVar18;
  *(undefined8 *)(puVar32 + -0xa8) = 0;
  lVar23 = *(long *)(uVar9 + 0x20);
  puVar18 = puVar15;
  uVar19 = uVar9;
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c(lVar23);
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  if (*(int *)(lVar23 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar23 = *(long *)(uVar9 + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = **(long **)(lVar23 + 0xb8);
  if (lVar23 != 0) {
    lVar26 = *(long *)(uVar9 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    puVar18 = *(undefined1 **)(*(long *)(lVar26 + 0xc0) + 0x18);
    uVar11 = func_0x04e81584(lVar23,puVar32 + -0xa8);
    if ((uVar11 & 1) == 0) {
      lVar26 = *(long *)(uVar9 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar11 = func_0x03280ca0();
      lVar26 = *(long *)(uVar9 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      func_0x04645488(uVar11,*(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x40));
      uVar9 = 0;
      if (uVar11 != 0) {
        *(undefined8 *)(uVar11 + 0x10) = uVar21;
        func_0x032809c4((undefined8 *)(uVar11 + 0x10),uVar21);
        *(undefined8 *)(uVar11 + 0x18) = auVar37._8_8_;
        *(undefined1 **)(uVar11 + 0x20) = puVar15;
        func_0x032809c4((undefined8 *)(uVar11 + 0x18),0);
        return uVar11;
      }
    }
    else if (*(long *)(puVar32 + -0xa8) != 0) {
      puVar22 = (undefined8 *)(*(long *)(puVar32 + -0xa8) + 0x10);
      *puVar22 = uVar21;
      func_0x032809c4(puVar22,uVar21);
      lVar26 = *(long *)(puVar32 + -0xa8);
      if (lVar26 != 0) {
        *(undefined8 *)(lVar26 + 0x18) = auVar37._8_8_;
        *(undefined1 **)(lVar26 + 0x20) = puVar15;
        func_0x032809c4((undefined8 *)(lVar26 + 0x18),0);
        return *(ulong *)(puVar32 + -0xa8);
      }
    }
  }
  auVar36 = func_0x03280cac();
  uVar21 = auVar36._0_8_;
  *(undefined8 *)(puVar32 + -0xf0) = 0x3ec3d10;
  *(undefined1 **)(puVar32 + -0xe0) = puVar33;
  *(long *)(puVar32 + -0xd8) = lVar23;
  *(ulong *)(puVar32 + -0xd0) = uVar9;
  *(undefined1 (*) [16])(puVar32 + -200) = auVar37;
  *(undefined1 **)(puVar32 + -0xb8) = puVar15;
  *(undefined8 *)(puVar32 + -0xe8) = 0;
  lVar23 = *(long *)(uVar28 + 0x20);
  puVar15 = puVar18;
  uVar11 = uVar19;
  uVar9 = uVar28;
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c(lVar23);
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  if (*(int *)(lVar23 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar23 = *(long *)(uVar28 + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = **(long **)(lVar23 + 0xb8);
  if (lVar23 != 0) {
    lVar26 = *(long *)(uVar28 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    puVar15 = *(undefined1 **)(*(long *)(lVar26 + 0xc0) + 0x18);
    uVar17 = func_0x04e81584(lVar23,puVar32 + -0xe8);
    if ((uVar17 & 1) == 0) {
      lVar26 = *(long *)(uVar28 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar17 = func_0x03280ca0();
      lVar26 = *(long *)(uVar28 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      func_0x04645704(uVar17,*(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x48));
      uVar28 = 0;
      if (uVar17 != 0) {
        *(undefined8 *)(uVar17 + 0x10) = uVar21;
        func_0x032809c4((undefined8 *)(uVar17 + 0x10),uVar21);
        *(undefined8 *)(uVar17 + 0x18) = auVar36._8_8_;
        *(undefined1 **)(uVar17 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(uVar17 + 0x18),0);
LAB_03ec3e7c:
        *(int *)(uVar17 + 0x28) = (int)uVar19;
        return uVar17;
      }
    }
    else if (*(long *)(puVar32 + -0xe8) != 0) {
      puVar22 = (undefined8 *)(*(long *)(puVar32 + -0xe8) + 0x10);
      *puVar22 = uVar21;
      func_0x032809c4(puVar22,uVar21);
      lVar26 = *(long *)(puVar32 + -0xe8);
      if (lVar26 != 0) {
        *(undefined8 *)(lVar26 + 0x18) = auVar36._8_8_;
        *(undefined1 **)(lVar26 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(lVar26 + 0x18),0);
        uVar17 = *(ulong *)(puVar32 + -0xe8);
        if (uVar17 != 0) goto LAB_03ec3e7c;
        uVar28 = 0;
      }
    }
  }
  auVar37 = func_0x03280cac();
  uVar21 = auVar37._0_8_;
  *(undefined8 *)(puVar32 + -0x130) = 0x3ec3ea0;
  *(long *)(puVar32 + -0x120) = lVar23;
  *(ulong *)(puVar32 + -0x118) = uVar28;
  *(undefined1 (*) [16])(puVar32 + -0x110) = auVar36;
  *(undefined1 **)(puVar32 + -0x100) = puVar18;
  *(ulong *)(puVar32 + -0xf8) = uVar19 & 0xffffffff;
  *(undefined8 *)(puVar32 + -0x128) = 0;
  lVar23 = *(long *)(uVar9 + 0x20);
  puVar18 = puVar15;
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c(lVar23);
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  if (*(int *)(lVar23 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar23 = *(long *)(uVar9 + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = **(long **)(lVar23 + 0xb8);
  if (lVar23 != 0) {
    lVar26 = *(long *)(uVar9 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    puVar18 = *(undefined1 **)(*(long *)(lVar26 + 0xc0) + 0x18);
    uVar19 = func_0x04e81584(lVar23,puVar32 + -0x128);
    if ((uVar19 & 1) == 0) {
      lVar26 = *(long *)(uVar9 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar19 = func_0x03280ca0();
      lVar26 = *(long *)(uVar9 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      func_0x046457b8(uVar19,*(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x48));
      uVar9 = 0;
      if (uVar19 != 0) {
        *(undefined8 *)(uVar19 + 0x10) = uVar21;
        func_0x032809c4((undefined8 *)(uVar19 + 0x10),uVar21);
        *(undefined8 *)(uVar19 + 0x18) = auVar37._8_8_;
        *(undefined1 **)(uVar19 + 0x20) = puVar15;
        func_0x032809c4((undefined8 *)(uVar19 + 0x18),0);
LAB_03ec400c:
        *(int *)(uVar19 + 0x28) = (int)uVar11;
        return uVar19;
      }
    }
    else if (*(long *)(puVar32 + -0x128) != 0) {
      puVar22 = (undefined8 *)(*(long *)(puVar32 + -0x128) + 0x10);
      *puVar22 = uVar21;
      func_0x032809c4(puVar22,uVar21);
      lVar26 = *(long *)(puVar32 + -0x128);
      if (lVar26 != 0) {
        *(undefined8 *)(lVar26 + 0x18) = auVar37._8_8_;
        *(undefined1 **)(lVar26 + 0x20) = puVar15;
        func_0x032809c4((undefined8 *)(lVar26 + 0x18),0);
        uVar19 = *(ulong *)(puVar32 + -0x128);
        if (uVar19 != 0) goto LAB_03ec400c;
        uVar9 = 0;
      }
    }
  }
  auVar36 = func_0x03280cac();
  plVar24 = auVar36._8_8_;
  uVar19 = auVar36._0_8_;
  *(undefined1 **)(puVar32 + -400) = puVar6 + -0xa0;
  *(undefined8 *)(puVar32 + -0x188) = 0x3ec4030;
  *(long *)(puVar32 + -0x180) = lVar8;
  *(undefined1 **)(puVar32 + -0x170) = puVar14;
  *(ulong *)(puVar32 + -0x168) = uVar34;
  *(long *)(puVar32 + -0x160) = lVar23;
  *(ulong *)(puVar32 + -0x158) = uVar9;
  *(undefined1 (*) [16])(puVar32 + -0x150) = auVar37;
  *(undefined1 **)(puVar32 + -0x140) = puVar15;
  *(ulong *)(puVar32 + -0x138) = uVar11 & 0xffffffff;
  lVar8 = tpidr_el0;
  *(undefined8 *)(puVar32 + -0x198) = *(undefined8 *)(lVar8 + 0x28);
  plVar35 = *(long **)(puVar18 + 0x38);
  if (plVar35 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar35 = *(long **)(puVar18 + 0x38);
    if (plVar35 == (long *)0x0) {
      func_0x03256878(puVar18);
      plVar35 = *(long **)(puVar18 + 0x38);
    }
  }
  uVar9 = (ulong)*(uint *)(plVar35[4] + 0xfc);
  uVar28 = uVar9 + 0xf & 0x1fffffff0;
  puVar14 = puVar32 + (-0x1b0 - uVar28);
  puVar22 = (undefined8 *)(puVar14 + -uVar28);
  lVar23 = (long)puVar22 - uVar28;
  func_0x072ce9a0(lVar23,0,uVar9);
  if (plVar24 == (long *)0x0) {
    func_0x03280cac();
    plVar24 = (long *)0x0;
  }
  else {
    lVar26 = *plVar35;
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    lVar25 = *plVar24;
    uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == lVar26) {
          puVar12 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar24,lVar26,0);
LAB_03ec4144:
    plVar24 = (long *)(*(code *)*puVar12)(plVar24,puVar12[1]);
    puVar4 = PTR_DAT_0774e8e0;
    if (plVar24 != (long *)0x0) {
      do {
        lVar26 = *plVar24;
        uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar28 != 0) {
          piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar28 = uVar28 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar28 != 0);
        }
        puVar12 = (undefined8 *)func_0x03256b10(plVar24,*(long *)puVar4,0);
LAB_03ec41ac:
        uVar28 = (*(code *)*puVar12)(plVar24,puVar12[1]);
        if ((uVar28 & 1) == 0) {
          puVar18 = (undefined1 *)0x0;
          goto LAB_03ec429c;
        }
        lVar26 = *(long *)(*(long *)(puVar18 + 0x38) + 0x10);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c(lVar26);
        }
        lVar25 = *plVar24;
        uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar28 != 0) {
          piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar26) {
              lVar26 = lVar25 + (long)*piVar29 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar28 = uVar28 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar28 != 0);
        }
        lVar26 = func_0x03256b10(plVar24,lVar26,0);
LAB_03ec4220:
        *(undefined1 **)(puVar32 + -0x1a8) = puVar14;
        lVar26 = *(long *)(lVar26 + 8);
        (**(code **)(lVar26 + 0x10))
                  (*(undefined8 *)(lVar26 + 8),lVar26,plVar24,puVar32 + -0x1a8,puVar14);
        func_0x072ce970(lVar23,puVar14,uVar9);
        func_0x072ce970(puVar22,lVar23,uVar9);
        puVar12 = puVar22;
        if (-1 < *(int *)(*(long *)(*(long *)(puVar18 + 0x38) + 0x20) + 0x28)) {
          puVar12 = (undefined8 *)*puVar22;
        }
        puVar16 = *(undefined8 **)(*(long *)(puVar18 + 0x38) + 0x28);
        uVar21 = *puVar16;
        *(undefined8 **)(puVar32 + -0x1a8) = puVar12;
        (*(code *)puVar16[2])(uVar21,puVar16,uVar19,puVar32 + -0x1a8,puVar32 + -0x1a0);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(puVar18);
  do {
    auVar38 = func_0x072ce990();
    if (auVar38._8_4_ != 1) {
      if (plVar24 == (long *)0x0) goto LAB_03ec43e8;
      lVar8 = *plVar24;
      uVar28 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar28 == 0) goto LAB_03ec43c0;
      piVar29 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    puVar22 = (undefined8 *)func_0x072ce910(auVar38._0_8_);
    puVar18 = (undefined1 *)*puVar22;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar24 != (long *)0x0) {
      lVar26 = *plVar24;
      uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar28 != 0) {
        piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar22 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar22)(plVar24,puVar22[1]);
    }
    if (puVar18 != (undefined1 *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar8 + 0x28) == *(long *)(puVar32 + -0x198)) {
      return uVar19;
    }
  } while( true );
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar29 = piVar29 + 4;
    if (uVar28 == 0) break;
    if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar22 = (undefined8 *)(lVar8 + (long)*piVar29 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar22 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar22)(plVar24,puVar22[1]);
LAB_03ec43e8:
  func_0x03365958(auVar38._0_8_);
  func_0x03280ca4(0);
  auVar37 = func_0x02f09514();
  lVar8 = auVar37._8_8_;
  *(undefined8 *)(lVar23 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar23 + -0x18) = 0;
  *(long **)(lVar23 + -0x10) = plVar24;
  *(ulong *)(lVar23 + -8) = uVar19;
  puVar22 = *(undefined8 **)(lVar8 + 0x38);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar22 = *(undefined8 **)(lVar8 + 0x38);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x03256878(lVar8);
      puVar22 = *(undefined8 **)(lVar8 + 0x38);
    }
  }
  *(undefined8 *)(lVar23 + -0x28) = 0;
  uVar21 = *puVar22;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar7 = func_0x057a51c4(uVar21,0);
  lVar26 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar26 != 0) {
    uVar19 = func_0x04fe48b0(lVar26,uVar7,lVar23 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      lVar23 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
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
      uVar19 = **(ulong **)(lVar8 + 0xb8);
    }
    else {
      uVar19 = func_0x03d2c6a8(*(undefined8 *)(lVar23 + -0x28),
                               *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18));
    }
    return uVar19;
  }
  auVar36 = func_0x03280cac();
  lVar8 = auVar36._8_8_;
  *(undefined8 *)(lVar23 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar23 + -0x48) = uVar21;
  *(undefined1 (*) [16])(lVar23 + -0x40) = auVar37;
  puVar22 = *(undefined8 **)(lVar8 + 0x38);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar22 = *(undefined8 **)(lVar8 + 0x38);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x03256878(lVar8);
      puVar22 = *(undefined8 **)(lVar8 + 0x38);
    }
  }
  *(undefined8 *)(lVar23 + -0x58) = 0;
  uVar21 = *puVar22;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar21 = func_0x057a51c4(uVar21,0);
  lVar26 = *(long *)(auVar36._0_8_ + 0x10);
  if (lVar26 != 0) {
    uVar19 = func_0x04fe48b0(lVar26,uVar21,lVar23 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 8))();
    }
    else {
      uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x18))
                         (*(undefined8 *)(lVar23 + -0x58));
    }
    return uVar19;
  }
  auVar37 = func_0x03280cac();
  lVar8 = auVar37._8_8_;
  *(undefined8 *)(lVar23 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar23 + -0x70) = auVar36;
  puVar22 = *(undefined8 **)(lVar8 + 0x38);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar22 = *(undefined8 **)(lVar8 + 0x38);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x03256878(lVar8);
      puVar22 = *(undefined8 **)(lVar8 + 0x38);
    }
  }
  *(undefined8 *)(lVar23 + -0x78) = 0;
  uVar21 = *puVar22;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar7 = func_0x057a51c4(uVar21,0);
  lVar8 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar8 != 0) {
    uVar19 = func_0x04fe48b0(lVar8,uVar7,lVar23 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    lVar8 = *(long *)(lVar23 + -0x78);
    if (lVar8 != 0) {
      iVar2 = *(int *)(lVar8 + 0x18);
      if (iVar2 < 1) {
        return 0;
      }
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar8 + 0x10),0,iVar2,0);
      return 1;
    }
  }
  auVar36 = func_0x03280cac();
  lVar8 = auVar36._8_8_;
  *(undefined8 *)(lVar23 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar23 + -0x90) = uVar21;
  *(long *)(lVar23 + -0x88) = auVar37._0_8_;
  puVar22 = *(undefined8 **)(lVar8 + 0x38);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar22 = *(undefined8 **)(lVar8 + 0x38);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x03256878(lVar8);
      puVar22 = *(undefined8 **)(lVar8 + 0x38);
    }
  }
  *(undefined8 *)(lVar23 + -0x98) = 0;
  uVar21 = *puVar22;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar7 = func_0x057a51c4(uVar21,0);
  lVar8 = *(long *)(auVar36._0_8_ + 0x10);
  if (lVar8 != 0) {
    uVar19 = func_0x04fe48b0(lVar8,uVar7,lVar23 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar23 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar23 + -0x98) + 0x18));
    }
  }
  auVar37 = func_0x03280cac();
  lVar8 = auVar37._8_8_;
  *(undefined8 *)(lVar23 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar23 + -0xb0) = uVar21;
  *(long *)(lVar23 + -0xa8) = auVar36._0_8_;
  puVar22 = *(undefined8 **)(lVar8 + 0x38);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar22 = *(undefined8 **)(lVar8 + 0x38);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x03256878(lVar8);
      puVar22 = *(undefined8 **)(lVar8 + 0x38);
    }
  }
  *(undefined8 *)(lVar23 + -0xb8) = 0;
  uVar21 = *puVar22;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar7 = func_0x057a51c4(uVar21,0);
  lVar8 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar8 != 0) {
    uVar19 = func_0x04fe48b0(lVar8,uVar7,lVar23 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar23 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar23 + -0xb8) + 0x18));
    }
  }
  auVar36 = func_0x03280cac();
  lVar8 = auVar36._8_8_;
  *(undefined8 *)(lVar23 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar23 + -0xd0) = uVar21;
  *(long *)(lVar23 + -200) = auVar37._0_8_;
  puVar22 = *(undefined8 **)(lVar8 + 0x38);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar22 = *(undefined8 **)(lVar8 + 0x38);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x03256878(lVar8);
      puVar22 = *(undefined8 **)(lVar8 + 0x38);
    }
  }
  *(undefined8 *)(lVar23 + -0xd8) = 0;
  uVar21 = *puVar22;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar7 = func_0x057a51c4(uVar21,0);
  lVar8 = *(long *)(auVar36._0_8_ + 0x10);
  if (lVar8 != 0) {
    uVar19 = func_0x04fe48b0(lVar8,uVar7,lVar23 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      uVar19 = 0;
    }
    else {
      if (*(long *)(lVar23 + -0xd8) == 0) goto LAB_03ec4958;
      uVar19 = (ulong)(0 < *(int *)(*(long *)(lVar23 + -0xd8) + 0x18));
    }
    return uVar19;
  }
LAB_03ec4958:
  auVar37 = func_0x03280cac();
  lVar8 = auVar37._8_8_;
  *(undefined8 *)(lVar23 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar23 + -0xf0) = uVar21;
  *(long *)(lVar23 + -0xe8) = auVar36._0_8_;
  puVar22 = *(undefined8 **)(lVar8 + 0x38);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x03256878(lVar8);
    puVar22 = *(undefined8 **)(lVar8 + 0x38);
  }
  uVar19 = (**(code **)*puVar22)(auVar37._0_8_);
  if ((uVar19 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 8))(auVar37._0_8_);
  return uVar19;
}

