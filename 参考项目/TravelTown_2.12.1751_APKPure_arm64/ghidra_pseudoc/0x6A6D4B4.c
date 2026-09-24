/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6D4B4; Merger.MergeBoard.Systems.ItemDiscoverySystem.OnItemCreated; status ok */


/* WARNING: Type propagation algorithm not settling */

ulong Merger_MergeBoard_Systems_ItemDiscoverySystem__OnItemCreated
                (long param_1,long *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *******pppppppuVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  undefined1 *puVar27;
  long *plVar28;
  long unaff_x25;
  long *unaff_x26;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
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
  long *plStack_b8;
  undefined8 *******pppppppuStack_b0;
  long lStack_a8;
  long lStack_38;
  
  if ((bRam0000000007e2a6d0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d8f78);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_07831058);
    func_0x03280a18(PTR_DAT_07831060);
    bRam0000000007e2a6d0 = 1;
  }
  if (param_2 == (long *)0x0) {
SUB_057da5fc:
    uVar21 = func_0x03280cac();
    return uVar21;
  }
  lVar18 = *param_2;
  plVar26 = *(long **)(param_1 + 0x10);
  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07779820) {
        puVar10 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_06b6d570;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar10 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06b6d570:
  uVar11 = (*(code *)*puVar10)(param_2,puVar10[1]);
  if (plVar26 == (long *)0x0) goto SUB_057da5fc;
  lVar18 = *plVar26;
  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_077d8f78) {
        puVar10 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
        goto LAB_06b6d5dc;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar10 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_077d8f78,1);
LAB_06b6d5dc:
  uVar21 = (*(code *)*puVar10)(plVar26,uVar11,puVar10[1]);
  if ((uVar21 & 1) != 0) {
    return uVar21;
  }
  uVar24 = *(ulong *)(param_4 + 0x10);
  uVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831058);
  uVar21 = 0;
  func_0x06b9a7c4(uVar11,param_2,param_3);
  if (uVar24 == 0) goto SUB_057da5fc;
  plVar15 = *(long **)PTR_DAT_07831060;
  puVar10 = (undefined8 *)plVar15[7];
  plVar26 = plVar15;
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = (undefined8 *)plVar15[7];
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(plVar15);
      puVar10 = (undefined8 *)plVar15[7];
    }
  }
  lStack_38 = 0;
  uVar23 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar23 = func_0x057a51c4(uVar23,0);
  if (*(long *)(uVar24 + 0x10) != 0) {
    plVar26 = &lStack_38;
    uVar21 = *(ulong *)PTR_DAT_0777b730;
    uVar5 = func_0x04fe48b0(*(long *)(uVar24 + 0x10),uVar23);
    if ((uVar5 & 1) == 0) {
      lVar19 = *(long *)(uVar24 + 0x10);
      lVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(lVar18,*(undefined8 *)PTR_DAT_07751030);
      if (lVar18 != 0) {
        lVar25 = *(long *)(lVar18 + 0x10);
        lVar6 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar25 != 0) {
          uVar3 = *(uint *)(lVar18 + 0x18);
          if (uVar3 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar3 + 1;
            puVar10 = (undefined8 *)(lVar25 + (long)(int)uVar3 * 8 + 0x20);
            *puVar10 = uVar11;
            func_0x032809c4(puVar10,uVar11);
          }
          else {
            plVar26 = *(long **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(lVar18,uVar11);
          }
          if (lVar19 != 0) {
            func_0x04fe2d68(lVar19,uVar23,lVar18,*(undefined8 *)PTR_DAT_0777b738);
            return uVar24;
          }
        }
      }
    }
    else if (lStack_38 != 0) {
      lVar18 = *(long *)(lStack_38 + 0x10);
      lVar19 = *(long *)PTR_DAT_07751038;
      *(int *)(lStack_38 + 0x1c) = *(int *)(lStack_38 + 0x1c) + 1;
      if (lVar18 != 0) {
        uVar3 = *(uint *)(lStack_38 + 0x18);
        if (uVar3 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lStack_38 + 0x18) = uVar3 + 1;
          puVar10 = (undefined8 *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
          *puVar10 = uVar11;
          func_0x032809c4(puVar10,uVar11);
        }
        else {
          func_0x0414446c(lStack_38,uVar11,
                          *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        return uVar24;
      }
    }
  }
  auVar29 = func_0x03280cac();
  pppppppuVar12 = auVar29._8_8_;
  uVar24 = auVar29._0_8_;
  lVar18 = tpidr_el0;
  lStack_a8 = *(long *)(lVar18 + 0x28);
  pppppppuStack_b0 = pppppppuVar12;
  plVar16 = (long *)plVar26[7];
  plVar15 = plVar26;
  if (plVar16 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar16 = (long *)plVar26[7];
    if (plVar16 == (long *)0x0) {
      func_0x03256878(plVar26);
      plVar16 = (long *)plVar26[7];
    }
  }
  plVar28 = (long *)(ulong)*(uint *)(plVar16[1] + 0xfc);
  lVar19 = -((long)plVar28 + 0xfU & 0x1fffffff0);
  puVar27 = auStack_c0 + lVar19;
  plStack_b8 = (long *)0x0;
  lVar25 = *plVar16;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar6 = func_0x057a51c4(lVar25,0);
  plVar16 = plVar26;
  if (*(long *)(uVar24 + 0x10) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    uVar21 = *(ulong *)PTR_DAT_0777b730;
    uVar5 = func_0x04fe48b0(*(long *)(uVar24 + 0x10),lVar6,&plStack_b8);
    plVar16 = plStack_b8;
    plVar15 = plVar28;
    if ((uVar5 & 1) == 0) {
      unaff_x25 = *(long *)(uVar24 + 0x10);
      unaff_x26 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(unaff_x26,*(undefined8 *)PTR_DAT_07751030);
      plVar16 = (long *)plVar26[7];
      pppppppuVar1 = pppppppuVar12;
      if (-1 < *(int *)(plVar16[1] + 0x28)) {
        pppppppuVar1 = &pppppppuStack_b0;
      }
      func_0x072ce970(puVar27,pppppppuVar1);
      uVar11 = func_0x03280b94(plVar16[1],puVar27);
      lVar25 = lVar6;
      if (unaff_x26 != (long *)0x0) {
        lVar17 = unaff_x26[2];
        lVar20 = *(long *)PTR_DAT_07751038;
        *(int *)((long)unaff_x26 + 0x1c) = *(int *)((long)unaff_x26 + 0x1c) + 1;
        if (lVar17 != 0) {
          uVar3 = *(uint *)(unaff_x26 + 3);
          if (uVar3 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(unaff_x26 + 3) = uVar3 + 1;
            *(undefined8 *)(lVar17 + (long)(int)uVar3 * 8 + 0x20) = uVar11;
            func_0x032809c4();
          }
          else {
            plVar15 = *(long **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(unaff_x26);
          }
          if (unaff_x25 != 0) {
            uVar21 = *(ulong *)PTR_DAT_0777b738;
            plVar15 = unaff_x26;
            func_0x04fe2d68(unaff_x25,lVar6);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar6 = plVar26[7];
    pppppppuVar1 = pppppppuVar12;
    if (-1 < *(int *)(*(long *)(lVar6 + 8) + 0x28)) {
      pppppppuVar1 = &pppppppuStack_b0;
    }
    func_0x072ce970(puVar27,pppppppuVar1);
    uVar11 = func_0x03280b94(*(undefined8 *)(lVar6 + 8),puVar27);
    lVar25 = lVar6;
    if (plVar16 == (long *)0x0) goto LAB_03ec38b8;
    lVar17 = plVar16[2];
    lVar20 = *(long *)PTR_DAT_07751038;
    *(int *)((long)plVar16 + 0x1c) = *(int *)((long)plVar16 + 0x1c) + 1;
    if (lVar17 == 0) goto LAB_03ec38b8;
    uVar3 = *(uint *)(plVar16 + 3);
    if (uVar3 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(plVar16 + 3) = uVar3 + 1;
      *(undefined8 *)(lVar17 + (long)(int)uVar3 * 8 + 0x20) = uVar11;
      func_0x032809c4();
    }
    else {
      plVar15 = *(long **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(plVar16);
    }
LAB_03ec3884:
    lVar25 = lVar6;
    if (*(long *)(lVar18 + 0x28) == lStack_a8) {
      return uVar24;
    }
  }
  auVar29 = func_0x072ce990();
  *(undefined8 *)((long)auStack_128 + lVar19 + 0x38) = 0x3ec38c0;
  *(long *)((long)auStack_e8 + lVar19 + 8) = lVar25;
  *(long **)((long)auStack_e8 + lVar19 + 0x10) = plVar16;
  *(undefined8 ********)((long)auStack_e8 + lVar19 + 0x18) = pppppppuVar12;
  *(ulong *)((long)auStack_e8 + lVar19 + 0x20) = uVar24;
  *(undefined8 *)((long)auStack_e8 + lVar19) = 0;
  lVar25 = plVar15[4];
  plVar26 = plVar15;
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  if (*(int *)(lVar25 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar25 = plVar15[4];
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = **(long **)(lVar25 + 0xb8);
  if (lVar25 != 0) {
    lVar6 = plVar15[4];
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c();
    }
    plVar26 = *(long **)(*(long *)(lVar6 + 0xc0) + 0x18);
    uVar24 = func_0x04e81584(lVar25,(long)auStack_e8 + lVar19);
    if ((uVar24 & 1) == 0) {
      lVar6 = plVar15[4];
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar24 = func_0x03280ca0();
      lVar6 = plVar15[4];
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c(lVar6);
      }
      func_0x04645340(uVar24,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      plVar15 = (long *)0x0;
      if (uVar24 != 0) {
        *(undefined1 (*) [16])(uVar24 + 0x10) = auVar29;
        func_0x032809c4((undefined1 (*) [16])(uVar24 + 0x10),0);
        return uVar24;
      }
    }
    else if (*(long *)((long)auStack_e8 + lVar19) != 0) {
      pauVar7 = (undefined1 (*) [16])(*(long *)((long)auStack_e8 + lVar19) + 0x10);
      *pauVar7 = auVar29;
      func_0x032809c4(pauVar7,0);
      return *(ulong *)((long)auStack_e8 + lVar19);
    }
  }
  auVar30 = func_0x03280cac();
  uVar23 = auVar30._8_8_;
  uVar11 = auVar30._0_8_;
  *(undefined8 *)((long)auStack_128 + lVar19 + 8) = 0x3ec3a10;
  *(undefined1 **)((long)auStack_128 + lVar19 + 0x10) = puVar27;
  *(long *)((long)auStack_128 + lVar19 + 0x18) = lVar25;
  *(long **)((long)auStack_128 + lVar19 + 0x20) = plVar15;
  *(long *)((long)auStack_128 + lVar19 + 0x28) = auVar29._0_8_;
  *(long *)((long)auStack_128 + lVar19 + 0x30) = auVar29._8_8_;
  *(undefined8 *)((long)auStack_128 + lVar19) = 0;
  lVar25 = *(long *)(uVar21 + 0x20);
  plVar15 = plVar26;
  uVar24 = uVar21;
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  if (*(int *)(lVar25 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar25 = *(long *)(uVar21 + 0x20);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = **(long **)(lVar25 + 0xb8);
  if (lVar25 != 0) {
    lVar6 = *(long *)(uVar21 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c();
    }
    plVar15 = *(long **)(*(long *)(lVar6 + 0xc0) + 0x18);
    uVar5 = func_0x04e81584(lVar25,(long)auStack_128 + lVar19);
    if ((uVar5 & 1) == 0) {
      lVar6 = *(long *)(uVar21 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar5 = func_0x03280ca0();
      lVar6 = *(long *)(uVar21 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c(lVar6);
      }
      func_0x046453e4(uVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
      uVar21 = 0;
      if (uVar5 != 0) {
        *(undefined8 *)(uVar5 + 0x10) = uVar11;
        func_0x032809c4((undefined8 *)(uVar5 + 0x10),uVar11);
        *(undefined8 *)(uVar5 + 0x18) = uVar23;
        *(long **)(uVar5 + 0x20) = plVar26;
        func_0x032809c4((undefined8 *)(uVar5 + 0x18),0);
        return uVar5;
      }
    }
    else if (*(long *)((long)auStack_128 + lVar19) != 0) {
      puVar10 = (undefined8 *)(*(long *)((long)auStack_128 + lVar19) + 0x10);
      *puVar10 = uVar11;
      func_0x032809c4(puVar10,uVar11);
      lVar6 = *(long *)((long)auStack_128 + lVar19);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x18) = uVar23;
        *(long **)(lVar6 + 0x20) = plVar26;
        func_0x032809c4((undefined8 *)(lVar6 + 0x18),0);
        return *(ulong *)((long)auStack_128 + lVar19);
      }
    }
  }
  auVar29 = func_0x03280cac();
  uVar13 = auVar29._8_8_;
  uVar8 = auVar29._0_8_;
  *(undefined8 *)((long)auStack_168 + lVar19 + 8) = 0x3ec3b90;
  *(long *)((long)auStack_168 + lVar19 + 0x10) = lVar25;
  *(ulong *)((long)auStack_168 + lVar19 + 0x18) = uVar21;
  *(undefined8 *)((long)auStack_168 + lVar19 + 0x20) = uVar11;
  *(undefined8 *)((long)auStack_168 + lVar19 + 0x28) = uVar23;
  *(long **)((long)auStack_168 + lVar19 + 0x30) = plVar26;
  *(undefined8 *)((long)auStack_168 + lVar19) = 0;
  lVar25 = *(long *)(uVar24 + 0x20);
  plVar26 = plVar15;
  uVar21 = uVar24;
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  if (*(int *)(lVar25 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar25 = *(long *)(uVar24 + 0x20);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = **(long **)(lVar25 + 0xb8);
  if (lVar25 != 0) {
    lVar6 = *(long *)(uVar24 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c();
    }
    plVar26 = *(long **)(*(long *)(lVar6 + 0xc0) + 0x18);
    uVar5 = func_0x04e81584(lVar25,(long)auStack_168 + lVar19);
    if ((uVar5 & 1) == 0) {
      lVar6 = *(long *)(uVar24 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar5 = func_0x03280ca0();
      lVar6 = *(long *)(uVar24 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c(lVar6);
      }
      func_0x04645488(uVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
      uVar24 = 0;
      if (uVar5 != 0) {
        *(undefined8 *)(uVar5 + 0x10) = uVar8;
        func_0x032809c4((undefined8 *)(uVar5 + 0x10),uVar8);
        *(undefined8 *)(uVar5 + 0x18) = uVar13;
        *(long **)(uVar5 + 0x20) = plVar15;
        func_0x032809c4((undefined8 *)(uVar5 + 0x18),0);
        return uVar5;
      }
    }
    else if (*(long *)((long)auStack_168 + lVar19) != 0) {
      puVar10 = (undefined8 *)(*(long *)((long)auStack_168 + lVar19) + 0x10);
      *puVar10 = uVar8;
      func_0x032809c4(puVar10,uVar8);
      lVar6 = *(long *)((long)auStack_168 + lVar19);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x18) = uVar13;
        *(long **)(lVar6 + 0x20) = plVar15;
        func_0x032809c4((undefined8 *)(lVar6 + 0x18),0);
        return *(ulong *)((long)auStack_168 + lVar19);
      }
    }
  }
  auVar29 = func_0x03280cac();
  uVar23 = auVar29._8_8_;
  uVar11 = auVar29._0_8_;
  *(undefined8 *)((long)auStack_1e8 + lVar19 + 0x38) = 0x3ec3d10;
  *(long **)((long)auStack_1a8 + lVar19 + 8) = plVar28;
  *(long *)((long)auStack_1a8 + lVar19 + 0x10) = lVar25;
  *(ulong *)((long)auStack_1a8 + lVar19 + 0x18) = uVar24;
  *(undefined8 *)((long)auStack_1a8 + lVar19 + 0x20) = uVar8;
  *(undefined8 *)((long)auStack_1a8 + lVar19 + 0x28) = uVar13;
  *(long **)((long)auStack_1a8 + lVar19 + 0x30) = plVar15;
  *(undefined8 *)((long)auStack_1a8 + lVar19) = 0;
  lVar6 = *(long *)(param_5 + 0x20);
  plVar15 = plVar26;
  uVar24 = uVar21;
  lVar25 = param_5;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar6 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c();
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    lVar17 = *(long *)(param_5 + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    plVar15 = *(long **)(*(long *)(lVar17 + 0xc0) + 0x18);
    uVar5 = func_0x04e81584(lVar6,(long)auStack_1a8 + lVar19);
    if ((uVar5 & 1) == 0) {
      lVar17 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar5 = func_0x03280ca0();
      lVar17 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      func_0x04645704(uVar5,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x48));
      param_5 = 0;
      if (uVar5 != 0) {
        *(undefined8 *)(uVar5 + 0x10) = uVar11;
        func_0x032809c4((undefined8 *)(uVar5 + 0x10),uVar11);
        *(undefined8 *)(uVar5 + 0x18) = uVar23;
        *(long **)(uVar5 + 0x20) = plVar26;
        func_0x032809c4((undefined8 *)(uVar5 + 0x18),0);
LAB_03ec3e7c:
        *(int *)(uVar5 + 0x28) = (int)uVar21;
        return uVar5;
      }
    }
    else if (*(long *)((long)auStack_1a8 + lVar19) != 0) {
      puVar10 = (undefined8 *)(*(long *)((long)auStack_1a8 + lVar19) + 0x10);
      *puVar10 = uVar11;
      func_0x032809c4(puVar10,uVar11);
      lVar17 = *(long *)((long)auStack_1a8 + lVar19);
      if (lVar17 != 0) {
        *(undefined8 *)(lVar17 + 0x18) = uVar23;
        *(long **)(lVar17 + 0x20) = plVar26;
        func_0x032809c4((undefined8 *)(lVar17 + 0x18),0);
        uVar5 = *(ulong *)((long)auStack_1a8 + lVar19);
        if (uVar5 != 0) goto LAB_03ec3e7c;
        param_5 = 0;
      }
    }
  }
  auVar29 = func_0x03280cac();
  uVar13 = auVar29._8_8_;
  uVar8 = auVar29._0_8_;
  *(undefined8 *)((long)alStack_248 + lVar19 + 0x58) = 0x3ec3ea0;
  *(long *)((long)auStack_1e8 + lVar19 + 8) = lVar6;
  *(long *)((long)auStack_1e8 + lVar19 + 0x10) = param_5;
  *(undefined8 *)((long)auStack_1e8 + lVar19 + 0x18) = uVar11;
  *(undefined8 *)((long)auStack_1e8 + lVar19 + 0x20) = uVar23;
  *(long **)((long)auStack_1e8 + lVar19 + 0x28) = plVar26;
  *(ulong *)((long)auStack_1e8 + lVar19 + 0x30) = uVar21 & 0xffffffff;
  *(undefined8 *)((long)auStack_1e8 + lVar19) = 0;
  lVar6 = *(long *)(lVar25 + 0x20);
  plVar26 = plVar15;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar6 = *(long *)(lVar25 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c();
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    lVar17 = *(long *)(lVar25 + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    plVar26 = *(long **)(*(long *)(lVar17 + 0xc0) + 0x18);
    uVar21 = func_0x04e81584(lVar6,(long)auStack_1e8 + lVar19);
    if ((uVar21 & 1) == 0) {
      lVar17 = *(long *)(lVar25 + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar21 = func_0x03280ca0();
      lVar25 = *(long *)(lVar25 + 0x20);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      func_0x046457b8(uVar21,*(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x48));
      lVar25 = 0;
      if (uVar21 != 0) {
        *(undefined8 *)(uVar21 + 0x10) = uVar8;
        func_0x032809c4((undefined8 *)(uVar21 + 0x10),uVar8);
        *(undefined8 *)(uVar21 + 0x18) = uVar13;
        *(long **)(uVar21 + 0x20) = plVar15;
        func_0x032809c4((undefined8 *)(uVar21 + 0x18),0);
LAB_03ec400c:
        *(int *)(uVar21 + 0x28) = (int)uVar24;
        return uVar21;
      }
    }
    else if (*(long *)((long)auStack_1e8 + lVar19) != 0) {
      puVar10 = (undefined8 *)(*(long *)((long)auStack_1e8 + lVar19) + 0x10);
      *puVar10 = uVar8;
      func_0x032809c4(puVar10,uVar8);
      lVar17 = *(long *)((long)auStack_1e8 + lVar19);
      if (lVar17 != 0) {
        *(undefined8 *)(lVar17 + 0x18) = uVar13;
        *(long **)(lVar17 + 0x20) = plVar15;
        func_0x032809c4((undefined8 *)(lVar17 + 0x18),0);
        uVar21 = *(ulong *)((long)auStack_1e8 + lVar19);
        if (uVar21 != 0) goto LAB_03ec400c;
        lVar25 = 0;
      }
    }
  }
  auVar29 = func_0x03280cac();
  plVar16 = auVar29._8_8_;
  uVar21 = auVar29._0_8_;
  *(undefined1 **)(auStack_250 + lVar19) = &stack0xffffffffffffff60;
  *(undefined8 *)((long)alStack_248 + lVar19) = 0x3ec4030;
  *(long *)((long)alStack_248 + lVar19 + 8) = lVar18;
  *(long **)((long)alStack_248 + lVar19 + 0x18) = unaff_x26;
  *(long *)((long)alStack_248 + lVar19 + 0x20) = unaff_x25;
  *(long *)((long)alStack_248 + lVar19 + 0x28) = lVar6;
  *(long *)((long)alStack_248 + lVar19 + 0x30) = lVar25;
  *(undefined8 *)((long)alStack_248 + lVar19 + 0x38) = uVar8;
  *(undefined8 *)((long)alStack_248 + lVar19 + 0x40) = uVar13;
  *(long **)((long)alStack_248 + lVar19 + 0x48) = plVar15;
  *(ulong *)((long)alStack_248 + lVar19 + 0x50) = uVar24 & 0xffffffff;
  lVar18 = tpidr_el0;
  *(undefined8 *)((long)&lStack_258 + lVar19) = *(undefined8 *)(lVar18 + 0x28);
  plVar15 = (long *)plVar26[7];
  if (plVar15 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar15 = (long *)plVar26[7];
    if (plVar15 == (long *)0x0) {
      func_0x03256878(plVar26);
      plVar15 = (long *)plVar26[7];
    }
  }
  uVar5 = (ulong)*(uint *)(plVar15[4] + 0xfc);
  uVar24 = uVar5 + 0xf & 0x1fffffff0;
  lVar25 = (long)&uStack_270 + (lVar19 - uVar24);
  puVar10 = (undefined8 *)(lVar25 - uVar24);
  lVar6 = (long)puVar10 - uVar24;
  func_0x072ce9a0(lVar6,0,uVar5);
  if (plVar16 == (long *)0x0) {
    func_0x03280cac();
    plVar15 = (long *)0x0;
  }
  else {
    lVar17 = *plVar15;
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar20 = *plVar16;
    uVar24 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar24 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar17) {
          puVar9 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar24 = uVar24 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar24 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar16,lVar17,0);
LAB_03ec4144:
    plVar15 = (long *)(*(code *)*puVar9)(plVar16,puVar9[1]);
    puVar4 = PTR_DAT_0774e8e0;
    if (plVar15 != (long *)0x0) {
      do {
        lVar17 = *plVar15;
        uVar24 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar24 != 0) {
          piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar24 = uVar24 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar24 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar15,*(long *)puVar4,0);
LAB_03ec41ac:
        uVar24 = (*(code *)*puVar9)(plVar15,puVar9[1]);
        if ((uVar24 & 1) == 0) {
          plVar26 = (long *)0x0;
          goto LAB_03ec429c;
        }
        lVar17 = *(long *)(plVar26[7] + 0x10);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
        }
        lVar20 = *plVar15;
        uVar24 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar24 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar17) {
              lVar17 = lVar20 + (long)*piVar22 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar24 = uVar24 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar24 != 0);
        }
        lVar17 = func_0x03256b10(plVar15,lVar17,0);
LAB_03ec4220:
        *(long *)((long)&lStack_268 + lVar19) = lVar25;
        lVar17 = *(long *)(lVar17 + 8);
        (**(code **)(lVar17 + 0x10))
                  (*(undefined8 *)(lVar17 + 8),lVar17,plVar15,(long)&lStack_268 + lVar19,lVar25);
        func_0x072ce970(lVar6,lVar25,uVar5);
        func_0x072ce970(puVar10,lVar6,uVar5);
        puVar9 = puVar10;
        if (-1 < *(int *)(*(long *)(plVar26[7] + 0x20) + 0x28)) {
          puVar9 = (undefined8 *)*puVar10;
        }
        puVar14 = *(undefined8 **)(plVar26[7] + 0x28);
        uVar11 = *puVar14;
        *(undefined8 **)((long)&lStack_268 + lVar19) = puVar9;
        (*(code *)puVar14[2])(uVar11,puVar14,uVar21,(long)&lStack_268 + lVar19,auStack_260 + lVar19)
        ;
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(plVar26);
  do {
    auVar31 = func_0x072ce990();
    if (auVar31._8_4_ != 1) {
      if (plVar15 == (long *)0x0) goto LAB_03ec43e8;
      lVar18 = *plVar15;
      uVar24 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar24 == 0) goto LAB_03ec43c0;
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      break;
    }
    puVar10 = (undefined8 *)func_0x072ce910(auVar31._0_8_);
    plVar26 = (long *)*puVar10;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar15 != (long *)0x0) {
      lVar25 = *plVar15;
      uVar24 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar24 != 0) {
        piVar22 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar10 = (undefined8 *)(lVar25 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar24 = uVar24 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar24 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar10)(plVar15,puVar10[1]);
    }
    if (plVar26 != (long *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar18 + 0x28) == *(long *)((long)&lStack_258 + lVar19)) {
      return uVar21;
    }
  } while( true );
  while( true ) {
    uVar24 = uVar24 - 1;
    piVar22 = piVar22 + 4;
    if (uVar24 == 0) break;
    if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar10 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar10 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar10)(plVar15,puVar10[1]);
LAB_03ec43e8:
  func_0x03365958(auVar31._0_8_);
  func_0x03280ca4(0);
  auVar29 = func_0x02f09514();
  lVar18 = auVar29._8_8_;
  *(undefined8 *)(lVar6 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar6 + -0x18) = 0;
  *(long **)(lVar6 + -0x10) = plVar15;
  *(ulong *)(lVar6 + -8) = uVar21;
  puVar10 = *(undefined8 **)(lVar18 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar18 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar18);
      puVar10 = *(undefined8 **)(lVar18 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0x28) = 0;
  uVar11 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar23 = func_0x057a51c4(uVar11,0);
  lVar19 = *(long *)(auVar29._0_8_ + 0x10);
  if (lVar19 != 0) {
    uVar21 = func_0x04fe48b0(lVar19,uVar23,lVar6 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar21 & 1) == 0) {
      lVar19 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
      lVar18 = *(long *)(lVar19 + 0x38);
      if (lVar18 == 0) {
        func_0x03256878(lVar19);
        lVar18 = *(long *)(lVar19 + 0x38);
      }
      lVar18 = *(long *)(lVar18 + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      if (*(int *)(lVar18 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      uVar21 = **(ulong **)(lVar18 + 0xb8);
    }
    else {
      uVar21 = func_0x03d2c6a8(*(undefined8 *)(lVar6 + -0x28),
                               *(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x18));
    }
    return uVar21;
  }
  auVar30 = func_0x03280cac();
  lVar18 = auVar30._8_8_;
  *(undefined8 *)(lVar6 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar6 + -0x48) = uVar11;
  *(undefined1 (*) [16])(lVar6 + -0x40) = auVar29;
  puVar10 = *(undefined8 **)(lVar18 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar18 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar18);
      puVar10 = *(undefined8 **)(lVar18 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0x58) = 0;
  uVar11 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar11,0);
  lVar19 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar19 != 0) {
    uVar21 = func_0x04fe48b0(lVar19,uVar11,lVar6 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar21 & 1) == 0) {
      uVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 8))();
    }
    else {
      uVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 0x18))
                         (*(undefined8 *)(lVar6 + -0x58));
    }
    return uVar21;
  }
  auVar29 = func_0x03280cac();
  lVar18 = auVar29._8_8_;
  *(undefined8 *)(lVar6 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar6 + -0x70) = auVar30;
  puVar10 = *(undefined8 **)(lVar18 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar18 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar18);
      puVar10 = *(undefined8 **)(lVar18 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0x78) = 0;
  uVar11 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar23 = func_0x057a51c4(uVar11,0);
  lVar18 = *(long *)(auVar29._0_8_ + 0x10);
  if (lVar18 != 0) {
    uVar21 = func_0x04fe48b0(lVar18,uVar23,lVar6 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar21 & 1) == 0) {
      return 0;
    }
    lVar18 = *(long *)(lVar6 + -0x78);
    if (lVar18 != 0) {
      iVar2 = *(int *)(lVar18 + 0x18);
      if (iVar2 < 1) {
        return 0;
      }
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar18 + 0x10),0,iVar2,0);
      return 1;
    }
  }
  auVar30 = func_0x03280cac();
  lVar18 = auVar30._8_8_;
  *(undefined8 *)(lVar6 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar6 + -0x90) = uVar11;
  *(long *)(lVar6 + -0x88) = auVar29._0_8_;
  puVar10 = *(undefined8 **)(lVar18 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar18 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar18);
      puVar10 = *(undefined8 **)(lVar18 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0x98) = 0;
  uVar11 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar23 = func_0x057a51c4(uVar11,0);
  lVar18 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar18 != 0) {
    uVar21 = func_0x04fe48b0(lVar18,uVar23,lVar6 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar21 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar6 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar6 + -0x98) + 0x18));
    }
  }
  auVar29 = func_0x03280cac();
  lVar18 = auVar29._8_8_;
  *(undefined8 *)(lVar6 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar6 + -0xb0) = uVar11;
  *(long *)(lVar6 + -0xa8) = auVar30._0_8_;
  puVar10 = *(undefined8 **)(lVar18 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar18 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar18);
      puVar10 = *(undefined8 **)(lVar18 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0xb8) = 0;
  uVar11 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar23 = func_0x057a51c4(uVar11,0);
  lVar18 = *(long *)(auVar29._0_8_ + 0x10);
  if (lVar18 != 0) {
    uVar21 = func_0x04fe48b0(lVar18,uVar23,lVar6 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar21 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar6 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar6 + -0xb8) + 0x18));
    }
  }
  auVar30 = func_0x03280cac();
  lVar18 = auVar30._8_8_;
  *(undefined8 *)(lVar6 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar6 + -0xd0) = uVar11;
  *(long *)(lVar6 + -200) = auVar29._0_8_;
  puVar10 = *(undefined8 **)(lVar18 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar18 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar18);
      puVar10 = *(undefined8 **)(lVar18 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0xd8) = 0;
  uVar11 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar23 = func_0x057a51c4(uVar11,0);
  lVar18 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar18 != 0) {
    uVar21 = func_0x04fe48b0(lVar18,uVar23,lVar6 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar21 & 1) == 0) {
      uVar21 = 0;
    }
    else {
      if (*(long *)(lVar6 + -0xd8) == 0) goto LAB_03ec4958;
      uVar21 = (ulong)(0 < *(int *)(*(long *)(lVar6 + -0xd8) + 0x18));
    }
    return uVar21;
  }
LAB_03ec4958:
  auVar29 = func_0x03280cac();
  lVar18 = auVar29._8_8_;
  *(undefined8 *)(lVar6 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar6 + -0xf0) = uVar11;
  *(long *)(lVar6 + -0xe8) = auVar30._0_8_;
  puVar10 = *(undefined8 **)(lVar18 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03256878(lVar18);
    puVar10 = *(undefined8 **)(lVar18 + 0x38);
  }
  uVar21 = (**(code **)*puVar10)(auVar29._0_8_);
  if ((uVar21 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 8))(auVar29._0_8_);
  return uVar21;
}

