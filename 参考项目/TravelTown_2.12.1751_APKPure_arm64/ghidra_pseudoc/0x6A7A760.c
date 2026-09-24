/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7A760; Merger.MergeBoard.Systems.TransformSystem.EmitItemExpiredResult; status ok */


/* WARNING: Removing unreachable block (ram,0x03ec34c4) */
/* WARNING: Removing unreachable block (ram,0x03ec34e4) */
/* WARNING: Removing unreachable block (ram,0x03ec358c) */
/* WARNING: Removing unreachable block (ram,0x03ec34f4) */
/* WARNING: Type propagation algorithm not settling */

ulong Merger_MergeBoard_Systems_TransformSystem__EmitItemExpiredResult
                (undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                undefined8 param_6,undefined8 param_7)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *******pppppppuVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  undefined8 uVar25;
  undefined1 *puVar26;
  long lVar27;
  ulong uVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  long unaff_x25;
  undefined1 *unaff_x26;
  long *plVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  long alStack_370 [5];
  long alStack_348 [4];
  long alStack_328 [4];
  long alStack_308 [4];
  long lStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined8 auStack_2c8 [3];
  undefined1 auStack_2b0 [24];
  ulong auStack_298 [5];
  undefined8 uStack_270;
  long lStack_268;
  undefined1 auStack_260 [8];
  long lStack_258;
  undefined1 auStack_250 [8];
  long alStack_248 [12];
  ulong auStack_1e8 [8];
  ulong auStack_1a8 [8];
  ulong auStack_168 [8];
  ulong auStack_128 [8];
  ulong auStack_e8 [5];
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  undefined8 *******pppppppuStack_b0;
  long lStack_a8;
  
  lVar22 = param_5;
  if ((bRam0000000007e2a722 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830b08);
    func_0x03280a18(PTR_DAT_07830b38);
    bRam0000000007e2a722 = 1;
  }
  puVar4 = PTR_DAT_07830b08;
  if (param_5 != 0) {
    *(undefined8 *)(param_5 + 0xb8) = param_6;
    func_0x032809c4((undefined8 *)(param_5 + 0xb8),param_6);
    *(undefined8 *)(param_5 + 0xc0) = param_7;
    func_0x032809c4((undefined8 *)(param_5 + 0xc0),param_7);
    *(undefined4 *)(param_5 + 0xa0) = 0;
    *(undefined8 *)(param_5 + 0x108) = 0;
  }
  uVar28 = *(ulong *)(param_2 + 0x10);
  lVar13 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x06b9a8d4(lVar13,0);
  if (lVar13 == 0) {
SUB_057da5fc:
    uVar28 = func_0x03280cac();
    return uVar28;
  }
  *(undefined8 *)(lVar13 + 0x10) = param_3;
  func_0x032809c4((undefined8 *)(lVar13 + 0x10),param_3);
  *(undefined8 *)(lVar13 + 0x18) = param_6;
  func_0x032809c4((undefined8 *)(lVar13 + 0x18),param_6);
  *(long *)(lVar13 + 0x20) = param_5;
  func_0x032809c4((long *)(lVar13 + 0x20),param_5);
  if (uVar28 == 0) goto SUB_057da5fc;
  puVar18 = *(undefined1 **)PTR_DAT_07830b38;
  puVar19 = *(undefined8 **)(puVar18 + 0x38);
  puVar17 = puVar18;
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(puVar18 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(puVar18);
      puVar19 = *(undefined8 **)(puVar18 + 0x38);
    }
  }
  uVar25 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar25 = func_0x057a51c4(uVar25,0);
  if (*(long *)(uVar28 + 0x10) != 0) {
    puVar17 = &stack0xffffffffffffffc8;
    param_4 = *(ulong *)PTR_DAT_0777b730;
    uVar5 = func_0x04fe48b0(*(long *)(uVar28 + 0x10),uVar25);
    if ((uVar5 & 1) == 0) {
      lVar27 = *(long *)(uVar28 + 0x10);
      lVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(lVar6,*(undefined8 *)PTR_DAT_07751030);
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar21 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar3 = *(uint *)(lVar6 + 0x18);
          if (uVar3 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar3 + 1;
            plVar20 = (long *)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
            *plVar20 = lVar13;
            func_0x032809c4(plVar20,lVar13);
          }
          else {
            puVar17 = *(undefined1 **)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(lVar6,lVar13);
          }
          if (lVar27 != 0) {
            func_0x04fe2d68(lVar27,uVar25,lVar6,*(undefined8 *)PTR_DAT_0777b738);
            return uVar28;
          }
        }
      }
    }
  }
  auVar32 = func_0x03280cac();
  pppppppuVar14 = auVar32._8_8_;
  uVar28 = auVar32._0_8_;
  lVar13 = tpidr_el0;
  lStack_a8 = *(long *)(lVar13 + 0x28);
  pppppppuStack_b0 = pppppppuVar14;
  plVar20 = *(long **)(puVar17 + 0x38);
  puVar18 = puVar17;
  if (plVar20 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar20 = *(long **)(puVar17 + 0x38);
    if (plVar20 == (long *)0x0) {
      func_0x03256878(puVar17);
      plVar20 = *(long **)(puVar17 + 0x38);
    }
  }
  puVar30 = (undefined1 *)(ulong)*(uint *)(plVar20[1] + 0xfc);
  lVar6 = -((ulong)(puVar30 + 0xf) & 0x1fffffff0);
  puVar29 = auStack_c0 + lVar6;
  puStack_b8 = (undefined1 *)0x0;
  lVar27 = *plVar20;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar7 = func_0x057a51c4(lVar27,0);
  puVar26 = puVar17;
  if (*(long *)(uVar28 + 0x10) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    param_4 = *(ulong *)PTR_DAT_0777b730;
    uVar5 = func_0x04fe48b0(*(long *)(uVar28 + 0x10),lVar7,&puStack_b8);
    puVar26 = puStack_b8;
    puVar18 = puVar30;
    if ((uVar5 & 1) == 0) {
      unaff_x25 = *(long *)(uVar28 + 0x10);
      unaff_x26 = (undefined1 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(unaff_x26,*(undefined8 *)PTR_DAT_07751030);
      puVar26 = *(undefined1 **)(puVar17 + 0x38);
      pppppppuVar1 = pppppppuVar14;
      if (-1 < *(int *)(*(long *)(puVar26 + 8) + 0x28)) {
        pppppppuVar1 = &pppppppuStack_b0;
      }
      func_0x072ce970(puVar29,pppppppuVar1);
      uVar25 = func_0x03280b94(*(undefined8 *)(puVar26 + 8),puVar29);
      lVar27 = lVar7;
      if (unaff_x26 != (undefined1 *)0x0) {
        lVar21 = *(long *)(unaff_x26 + 0x10);
        lVar23 = *(long *)PTR_DAT_07751038;
        *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
        if (lVar21 != 0) {
          uVar3 = *(uint *)(unaff_x26 + 0x18);
          if (uVar3 < *(uint *)(lVar21 + 0x18)) {
            *(uint *)(unaff_x26 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20) = uVar25;
            func_0x032809c4();
          }
          else {
            puVar18 = *(undefined1 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(unaff_x26);
          }
          if (unaff_x25 != 0) {
            param_4 = *(ulong *)PTR_DAT_0777b738;
            puVar18 = unaff_x26;
            func_0x04fe2d68(unaff_x25,lVar7);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar7 = *(long *)(puVar17 + 0x38);
    pppppppuVar1 = pppppppuVar14;
    if (-1 < *(int *)(*(long *)(lVar7 + 8) + 0x28)) {
      pppppppuVar1 = &pppppppuStack_b0;
    }
    func_0x072ce970(puVar29,pppppppuVar1);
    uVar25 = func_0x03280b94(*(undefined8 *)(lVar7 + 8),puVar29);
    lVar27 = lVar7;
    if (puVar26 == (undefined1 *)0x0) goto LAB_03ec38b8;
    lVar21 = *(long *)(puVar26 + 0x10);
    lVar23 = *(long *)PTR_DAT_07751038;
    *(int *)(puVar26 + 0x1c) = *(int *)(puVar26 + 0x1c) + 1;
    if (lVar21 == 0) goto LAB_03ec38b8;
    uVar3 = *(uint *)(puVar26 + 0x18);
    if (uVar3 < *(uint *)(lVar21 + 0x18)) {
      *(uint *)(puVar26 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20) = uVar25;
      func_0x032809c4();
    }
    else {
      puVar18 = *(undefined1 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(puVar26);
    }
LAB_03ec3884:
    lVar27 = lVar7;
    if (*(long *)(lVar13 + 0x28) == lStack_a8) {
      return uVar28;
    }
  }
  auVar32 = func_0x072ce990();
  *(undefined8 *)((long)auStack_128 + lVar6 + 0x38) = 0x3ec38c0;
  *(long *)((long)auStack_e8 + lVar6 + 8) = lVar27;
  *(undefined1 **)((long)auStack_e8 + lVar6 + 0x10) = puVar26;
  *(undefined8 ********)((long)auStack_e8 + lVar6 + 0x18) = pppppppuVar14;
  *(ulong *)((long)auStack_e8 + lVar6 + 0x20) = uVar28;
  *(undefined8 *)((long)auStack_e8 + lVar6) = 0;
  lVar27 = *(long *)(puVar18 + 0x20);
  puVar17 = puVar18;
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x10);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  if (*(int *)(lVar27 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar27 = *(long *)(puVar18 + 0x20);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x10);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  lVar27 = **(long **)(lVar27 + 0xb8);
  if (lVar27 != 0) {
    lVar7 = *(long *)(puVar18 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
    }
    puVar17 = *(undefined1 **)(*(long *)(lVar7 + 0xc0) + 0x18);
    uVar28 = func_0x04e81584(lVar27,(long)auStack_e8 + lVar6);
    if ((uVar28 & 1) == 0) {
      lVar7 = *(long *)(puVar18 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar28 = func_0x03280ca0();
      lVar7 = *(long *)(puVar18 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      func_0x04645340(uVar28,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
      puVar18 = (undefined1 *)0x0;
      if (uVar28 != 0) {
        *(undefined1 (*) [16])(uVar28 + 0x10) = auVar32;
        func_0x032809c4((undefined1 (*) [16])(uVar28 + 0x10),0);
        return uVar28;
      }
    }
    else if (*(long *)((long)auStack_e8 + lVar6) != 0) {
      pauVar8 = (undefined1 (*) [16])(*(long *)((long)auStack_e8 + lVar6) + 0x10);
      *pauVar8 = auVar32;
      func_0x032809c4(pauVar8,0);
      return *(ulong *)((long)auStack_e8 + lVar6);
    }
  }
  auVar33 = func_0x03280cac();
  uVar12 = auVar33._8_8_;
  uVar25 = auVar33._0_8_;
  *(undefined8 *)((long)auStack_128 + lVar6 + 8) = 0x3ec3a10;
  *(undefined1 **)((long)auStack_128 + lVar6 + 0x10) = puVar29;
  *(long *)((long)auStack_128 + lVar6 + 0x18) = lVar27;
  *(undefined1 **)((long)auStack_128 + lVar6 + 0x20) = puVar18;
  *(long *)((long)auStack_128 + lVar6 + 0x28) = auVar32._0_8_;
  *(long *)((long)auStack_128 + lVar6 + 0x30) = auVar32._8_8_;
  *(undefined8 *)((long)auStack_128 + lVar6) = 0;
  lVar27 = *(long *)(param_4 + 0x20);
  puVar18 = puVar17;
  uVar28 = param_4;
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x10);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  if (*(int *)(lVar27 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar27 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x10);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  lVar27 = **(long **)(lVar27 + 0xb8);
  if (lVar27 != 0) {
    lVar7 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
    }
    puVar18 = *(undefined1 **)(*(long *)(lVar7 + 0xc0) + 0x18);
    uVar5 = func_0x04e81584(lVar27,(long)auStack_128 + lVar6);
    if ((uVar5 & 1) == 0) {
      lVar7 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar5 = func_0x03280ca0();
      lVar7 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      func_0x046453e4(uVar5,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x40));
      param_4 = 0;
      if (uVar5 != 0) {
        *(undefined8 *)(uVar5 + 0x10) = uVar25;
        func_0x032809c4((undefined8 *)(uVar5 + 0x10),uVar25);
        *(undefined8 *)(uVar5 + 0x18) = uVar12;
        *(undefined1 **)(uVar5 + 0x20) = puVar17;
        func_0x032809c4((undefined8 *)(uVar5 + 0x18),0);
        return uVar5;
      }
    }
    else if (*(long *)((long)auStack_128 + lVar6) != 0) {
      puVar19 = (undefined8 *)(*(long *)((long)auStack_128 + lVar6) + 0x10);
      *puVar19 = uVar25;
      func_0x032809c4(puVar19,uVar25);
      lVar7 = *(long *)((long)auStack_128 + lVar6);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x18) = uVar12;
        *(undefined1 **)(lVar7 + 0x20) = puVar17;
        func_0x032809c4((undefined8 *)(lVar7 + 0x18),0);
        return *(ulong *)((long)auStack_128 + lVar6);
      }
    }
  }
  auVar32 = func_0x03280cac();
  uVar15 = auVar32._8_8_;
  uVar9 = auVar32._0_8_;
  *(undefined8 *)((long)auStack_168 + lVar6 + 8) = 0x3ec3b90;
  *(long *)((long)auStack_168 + lVar6 + 0x10) = lVar27;
  *(ulong *)((long)auStack_168 + lVar6 + 0x18) = param_4;
  *(undefined8 *)((long)auStack_168 + lVar6 + 0x20) = uVar25;
  *(undefined8 *)((long)auStack_168 + lVar6 + 0x28) = uVar12;
  *(undefined1 **)((long)auStack_168 + lVar6 + 0x30) = puVar17;
  *(undefined8 *)((long)auStack_168 + lVar6) = 0;
  lVar27 = *(long *)(uVar28 + 0x20);
  puVar17 = puVar18;
  uVar5 = uVar28;
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x10);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  if (*(int *)(lVar27 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar27 = *(long *)(uVar28 + 0x20);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x10);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  lVar27 = **(long **)(lVar27 + 0xb8);
  if (lVar27 != 0) {
    lVar7 = *(long *)(uVar28 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
    }
    puVar17 = *(undefined1 **)(*(long *)(lVar7 + 0xc0) + 0x18);
    uVar10 = func_0x04e81584(lVar27,(long)auStack_168 + lVar6);
    if ((uVar10 & 1) == 0) {
      lVar7 = *(long *)(uVar28 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar10 = func_0x03280ca0();
      lVar7 = *(long *)(uVar28 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      func_0x04645488(uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x40));
      uVar28 = 0;
      if (uVar10 != 0) {
        *(undefined8 *)(uVar10 + 0x10) = uVar9;
        func_0x032809c4((undefined8 *)(uVar10 + 0x10),uVar9);
        *(undefined8 *)(uVar10 + 0x18) = uVar15;
        *(undefined1 **)(uVar10 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(uVar10 + 0x18),0);
        return uVar10;
      }
    }
    else if (*(long *)((long)auStack_168 + lVar6) != 0) {
      puVar19 = (undefined8 *)(*(long *)((long)auStack_168 + lVar6) + 0x10);
      *puVar19 = uVar9;
      func_0x032809c4(puVar19,uVar9);
      lVar7 = *(long *)((long)auStack_168 + lVar6);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x18) = uVar15;
        *(undefined1 **)(lVar7 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(lVar7 + 0x18),0);
        return *(ulong *)((long)auStack_168 + lVar6);
      }
    }
  }
  auVar32 = func_0x03280cac();
  uVar12 = auVar32._8_8_;
  uVar25 = auVar32._0_8_;
  *(undefined8 *)((long)auStack_1e8 + lVar6 + 0x38) = 0x3ec3d10;
  *(undefined1 **)((long)auStack_1a8 + lVar6 + 8) = puVar30;
  *(long *)((long)auStack_1a8 + lVar6 + 0x10) = lVar27;
  *(ulong *)((long)auStack_1a8 + lVar6 + 0x18) = uVar28;
  *(undefined8 *)((long)auStack_1a8 + lVar6 + 0x20) = uVar9;
  *(undefined8 *)((long)auStack_1a8 + lVar6 + 0x28) = uVar15;
  *(undefined1 **)((long)auStack_1a8 + lVar6 + 0x30) = puVar18;
  *(undefined8 *)((long)auStack_1a8 + lVar6) = 0;
  lVar7 = *(long *)(lVar22 + 0x20);
  puVar18 = puVar17;
  uVar28 = uVar5;
  lVar27 = lVar22;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x0325681c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x0325681c();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar7 = *(long *)(lVar22 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x0325681c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x0325681c();
  }
  lVar7 = **(long **)(lVar7 + 0xb8);
  if (lVar7 != 0) {
    lVar21 = *(long *)(lVar22 + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    puVar18 = *(undefined1 **)(*(long *)(lVar21 + 0xc0) + 0x18);
    uVar10 = func_0x04e81584(lVar7,(long)auStack_1a8 + lVar6);
    if ((uVar10 & 1) == 0) {
      lVar21 = *(long *)(lVar22 + 0x20);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar10 = func_0x03280ca0();
      lVar22 = *(long *)(lVar22 + 0x20);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      func_0x04645704(uVar10,*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x48));
      lVar22 = 0;
      if (uVar10 != 0) {
        *(undefined8 *)(uVar10 + 0x10) = uVar25;
        func_0x032809c4((undefined8 *)(uVar10 + 0x10),uVar25);
        *(undefined8 *)(uVar10 + 0x18) = uVar12;
        *(undefined1 **)(uVar10 + 0x20) = puVar17;
        func_0x032809c4((undefined8 *)(uVar10 + 0x18),0);
LAB_03ec3e7c:
        *(int *)(uVar10 + 0x28) = (int)uVar5;
        return uVar10;
      }
    }
    else if (*(long *)((long)auStack_1a8 + lVar6) != 0) {
      puVar19 = (undefined8 *)(*(long *)((long)auStack_1a8 + lVar6) + 0x10);
      *puVar19 = uVar25;
      func_0x032809c4(puVar19,uVar25);
      lVar21 = *(long *)((long)auStack_1a8 + lVar6);
      if (lVar21 != 0) {
        *(undefined8 *)(lVar21 + 0x18) = uVar12;
        *(undefined1 **)(lVar21 + 0x20) = puVar17;
        func_0x032809c4((undefined8 *)(lVar21 + 0x18),0);
        uVar10 = *(ulong *)((long)auStack_1a8 + lVar6);
        if (uVar10 != 0) goto LAB_03ec3e7c;
        lVar22 = 0;
      }
    }
  }
  auVar32 = func_0x03280cac();
  uVar15 = auVar32._8_8_;
  uVar9 = auVar32._0_8_;
  *(undefined8 *)((long)alStack_248 + lVar6 + 0x58) = 0x3ec3ea0;
  *(long *)((long)auStack_1e8 + lVar6 + 8) = lVar7;
  *(long *)((long)auStack_1e8 + lVar6 + 0x10) = lVar22;
  *(undefined8 *)((long)auStack_1e8 + lVar6 + 0x18) = uVar25;
  *(undefined8 *)((long)auStack_1e8 + lVar6 + 0x20) = uVar12;
  *(undefined1 **)((long)auStack_1e8 + lVar6 + 0x28) = puVar17;
  *(ulong *)((long)auStack_1e8 + lVar6 + 0x30) = uVar5 & 0xffffffff;
  *(undefined8 *)((long)auStack_1e8 + lVar6) = 0;
  lVar22 = *(long *)(lVar27 + 0x20);
  puVar17 = puVar18;
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c(lVar22);
  }
  lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c();
  }
  if (*(int *)(lVar22 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar22 = *(long *)(lVar27 + 0x20);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c();
  }
  lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c();
  }
  lVar22 = **(long **)(lVar22 + 0xb8);
  if (lVar22 != 0) {
    lVar7 = *(long *)(lVar27 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
    }
    puVar17 = *(undefined1 **)(*(long *)(lVar7 + 0xc0) + 0x18);
    uVar5 = func_0x04e81584(lVar22,(long)auStack_1e8 + lVar6);
    if ((uVar5 & 1) == 0) {
      lVar7 = *(long *)(lVar27 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar5 = func_0x03280ca0();
      lVar27 = *(long *)(lVar27 + 0x20);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      func_0x046457b8(uVar5,*(undefined8 *)(*(long *)(lVar27 + 0xc0) + 0x48));
      lVar27 = 0;
      if (uVar5 != 0) {
        *(undefined8 *)(uVar5 + 0x10) = uVar9;
        func_0x032809c4((undefined8 *)(uVar5 + 0x10),uVar9);
        *(undefined8 *)(uVar5 + 0x18) = uVar15;
        *(undefined1 **)(uVar5 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(uVar5 + 0x18),0);
LAB_03ec400c:
        *(int *)(uVar5 + 0x28) = (int)uVar28;
        return uVar5;
      }
    }
    else if (*(long *)((long)auStack_1e8 + lVar6) != 0) {
      puVar19 = (undefined8 *)(*(long *)((long)auStack_1e8 + lVar6) + 0x10);
      *puVar19 = uVar9;
      func_0x032809c4(puVar19,uVar9);
      lVar7 = *(long *)((long)auStack_1e8 + lVar6);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x18) = uVar15;
        *(undefined1 **)(lVar7 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(lVar7 + 0x18),0);
        uVar5 = *(ulong *)((long)auStack_1e8 + lVar6);
        if (uVar5 != 0) goto LAB_03ec400c;
        lVar27 = 0;
      }
    }
  }
  auVar32 = func_0x03280cac();
  plVar20 = auVar32._8_8_;
  uVar5 = auVar32._0_8_;
  *(undefined1 **)(auStack_250 + lVar6) = &stack0xffffffffffffff60;
  *(undefined8 *)((long)alStack_248 + lVar6) = 0x3ec4030;
  *(long *)((long)alStack_248 + lVar6 + 8) = lVar13;
  *(undefined1 **)((long)alStack_248 + lVar6 + 0x18) = unaff_x26;
  *(long *)((long)alStack_248 + lVar6 + 0x20) = unaff_x25;
  *(long *)((long)alStack_248 + lVar6 + 0x28) = lVar22;
  *(long *)((long)alStack_248 + lVar6 + 0x30) = lVar27;
  *(undefined8 *)((long)alStack_248 + lVar6 + 0x38) = uVar9;
  *(undefined8 *)((long)alStack_248 + lVar6 + 0x40) = uVar15;
  *(undefined1 **)((long)alStack_248 + lVar6 + 0x48) = puVar18;
  *(ulong *)((long)alStack_248 + lVar6 + 0x50) = uVar28 & 0xffffffff;
  lVar22 = tpidr_el0;
  *(undefined8 *)((long)&lStack_258 + lVar6) = *(undefined8 *)(lVar22 + 0x28);
  plVar31 = *(long **)(puVar17 + 0x38);
  if (plVar31 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar31 = *(long **)(puVar17 + 0x38);
    if (plVar31 == (long *)0x0) {
      func_0x03256878(puVar17);
      plVar31 = *(long **)(puVar17 + 0x38);
    }
  }
  uVar10 = (ulong)*(uint *)(plVar31[4] + 0xfc);
  uVar28 = uVar10 + 0xf & 0x1fffffff0;
  lVar13 = (long)&uStack_270 + (lVar6 - uVar28);
  puVar19 = (undefined8 *)(lVar13 - uVar28);
  lVar27 = (long)puVar19 - uVar28;
  func_0x072ce9a0(lVar27,0,uVar10);
  if (plVar20 == (long *)0x0) {
    func_0x03280cac();
    plVar20 = (long *)0x0;
  }
  else {
    lVar7 = *plVar31;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c(lVar7);
    }
    lVar21 = *plVar20;
    uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar28 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar7) {
          puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar28 = uVar28 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar28 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar20,lVar7,0);
LAB_03ec4144:
    plVar20 = (long *)(*(code *)*puVar11)(plVar20,puVar11[1]);
    puVar4 = PTR_DAT_0774e8e0;
    if (plVar20 != (long *)0x0) {
      do {
        lVar7 = *plVar20;
        uVar28 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar28 != 0) {
          piVar24 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar7 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar28 = uVar28 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar28 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar4,0);
LAB_03ec41ac:
        uVar28 = (*(code *)*puVar11)(plVar20,puVar11[1]);
        if ((uVar28 & 1) == 0) {
          puVar17 = (undefined1 *)0x0;
          goto LAB_03ec429c;
        }
        lVar7 = *(long *)(*(long *)(puVar17 + 0x38) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = func_0x0325681c(lVar7);
        }
        lVar21 = *plVar20;
        uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar28 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar7) {
              lVar7 = lVar21 + (long)*piVar24 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar28 = uVar28 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar28 != 0);
        }
        lVar7 = func_0x03256b10(plVar20,lVar7,0);
LAB_03ec4220:
        *(long *)((long)&lStack_268 + lVar6) = lVar13;
        lVar7 = *(long *)(lVar7 + 8);
        (**(code **)(lVar7 + 0x10))
                  (*(undefined8 *)(lVar7 + 8),lVar7,plVar20,(long)&lStack_268 + lVar6,lVar13);
        func_0x072ce970(lVar27,lVar13,uVar10);
        func_0x072ce970(puVar19,lVar27,uVar10);
        puVar11 = puVar19;
        if (-1 < *(int *)(*(long *)(*(long *)(puVar17 + 0x38) + 0x20) + 0x28)) {
          puVar11 = (undefined8 *)*puVar19;
        }
        puVar16 = *(undefined8 **)(*(long *)(puVar17 + 0x38) + 0x28);
        uVar25 = *puVar16;
        *(undefined8 **)((long)&lStack_268 + lVar6) = puVar11;
        (*(code *)puVar16[2])(uVar25,puVar16,uVar5,(long)&lStack_268 + lVar6,auStack_260 + lVar6);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(puVar17);
  do {
    auVar34 = func_0x072ce990();
    if (auVar34._8_4_ != 1) {
      if (plVar20 == (long *)0x0) goto LAB_03ec43e8;
      lVar22 = *plVar20;
      uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar28 == 0) goto LAB_03ec43c0;
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      break;
    }
    puVar19 = (undefined8 *)func_0x072ce910(auVar34._0_8_);
    puVar17 = (undefined1 *)*puVar19;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar20 != (long *)0x0) {
      lVar13 = *plVar20;
      uVar28 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar28 != 0) {
        piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar19 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar28 = uVar28 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar28 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar19)(plVar20,puVar19[1]);
    }
    if (puVar17 != (undefined1 *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar22 + 0x28) == *(long *)((long)&lStack_258 + lVar6)) {
      return uVar5;
    }
  } while( true );
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar24 = piVar24 + 4;
    if (uVar28 == 0) break;
    if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar19 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar19 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar19)(plVar20,puVar19[1]);
LAB_03ec43e8:
  func_0x03365958(auVar34._0_8_);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  lVar22 = auVar32._8_8_;
  *(undefined8 *)(lVar27 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar27 + -0x18) = 0;
  *(long **)(lVar27 + -0x10) = plVar20;
  *(ulong *)(lVar27 + -8) = uVar5;
  puVar19 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar19 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar27 + -0x28) = 0;
  uVar25 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar25,0);
  lVar13 = *(long *)(auVar32._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar28 = func_0x04fe48b0(lVar13,uVar12,lVar27 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar28 & 1) == 0) {
      lVar13 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      lVar22 = *(long *)(lVar13 + 0x38);
      if (lVar22 == 0) {
        func_0x03256878(lVar13);
        lVar22 = *(long *)(lVar13 + 0x38);
      }
      lVar22 = *(long *)(lVar22 + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      if (*(int *)(lVar22 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar22 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      uVar28 = **(ulong **)(lVar22 + 0xb8);
    }
    else {
      uVar28 = func_0x03d2c6a8(*(undefined8 *)(lVar27 + -0x28),
                               *(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x18));
    }
    return uVar28;
  }
  auVar33 = func_0x03280cac();
  lVar22 = auVar33._8_8_;
  *(undefined8 *)(lVar27 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar27 + -0x48) = uVar25;
  *(undefined1 (*) [16])(lVar27 + -0x40) = auVar32;
  puVar19 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar19 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar27 + -0x58) = 0;
  uVar25 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar25 = func_0x057a51c4(uVar25,0);
  lVar13 = *(long *)(auVar33._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar28 = func_0x04fe48b0(lVar13,uVar25,lVar27 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar28 & 1) == 0) {
      uVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 8))();
    }
    else {
      uVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 0x18))
                         (*(undefined8 *)(lVar27 + -0x58));
    }
    return uVar28;
  }
  auVar32 = func_0x03280cac();
  lVar22 = auVar32._8_8_;
  *(undefined8 *)(lVar27 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar27 + -0x70) = auVar33;
  puVar19 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar19 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar27 + -0x78) = 0;
  uVar25 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar25,0);
  lVar22 = *(long *)(auVar32._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar28 = func_0x04fe48b0(lVar22,uVar12,lVar27 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar28 & 1) == 0) {
      return 0;
    }
    lVar22 = *(long *)(lVar27 + -0x78);
    if (lVar22 != 0) {
      iVar2 = *(int *)(lVar22 + 0x18);
      if (iVar2 < 1) {
        return 0;
      }
      *(undefined4 *)(lVar22 + 0x18) = 0;
      *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar22 + 0x10),0,iVar2,0);
      return 1;
    }
  }
  auVar33 = func_0x03280cac();
  lVar22 = auVar33._8_8_;
  *(undefined8 *)(lVar27 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar27 + -0x90) = uVar25;
  *(long *)(lVar27 + -0x88) = auVar32._0_8_;
  puVar19 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar19 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar27 + -0x98) = 0;
  uVar25 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar25,0);
  lVar22 = *(long *)(auVar33._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar28 = func_0x04fe48b0(lVar22,uVar12,lVar27 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar28 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar27 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar27 + -0x98) + 0x18));
    }
  }
  auVar32 = func_0x03280cac();
  lVar22 = auVar32._8_8_;
  *(undefined8 *)(lVar27 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar27 + -0xb0) = uVar25;
  *(long *)(lVar27 + -0xa8) = auVar33._0_8_;
  puVar19 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar19 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar27 + -0xb8) = 0;
  uVar25 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar25,0);
  lVar22 = *(long *)(auVar32._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar28 = func_0x04fe48b0(lVar22,uVar12,lVar27 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar28 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar27 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar27 + -0xb8) + 0x18));
    }
  }
  auVar33 = func_0x03280cac();
  lVar22 = auVar33._8_8_;
  *(undefined8 *)(lVar27 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar27 + -0xd0) = uVar25;
  *(long *)(lVar27 + -200) = auVar32._0_8_;
  puVar19 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar19 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar27 + -0xd8) = 0;
  uVar25 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar25,0);
  lVar22 = *(long *)(auVar33._0_8_ + 0x10);
  if (lVar22 == 0) {
LAB_03ec4958:
    auVar32 = func_0x03280cac();
    lVar22 = auVar32._8_8_;
    *(undefined8 *)(lVar27 + -0x100) = 0x3ec495c;
    *(undefined8 *)(lVar27 + -0xf0) = uVar25;
    *(long *)(lVar27 + -0xe8) = auVar33._0_8_;
    puVar19 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar19 = *(undefined8 **)(lVar22 + 0x38);
    }
    uVar28 = (**(code **)*puVar19)(auVar32._0_8_);
    if ((uVar28 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 8))(auVar32._0_8_);
      return uVar28;
    }
    return 1;
  }
  uVar28 = func_0x04fe48b0(lVar22,uVar12,lVar27 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
  if ((uVar28 & 1) == 0) {
    uVar28 = 0;
  }
  else {
    if (*(long *)(lVar27 + -0xd8) == 0) goto LAB_03ec4958;
    uVar28 = (ulong)(0 < *(int *)(*(long *)(lVar27 + -0xd8) + 0x18));
  }
  return uVar28;
}

