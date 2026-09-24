/* Ghidra 12.1.2 native pseudocode; RVA 0x3DC33E4; ContextualizedECS.Context.TickArgs.AddArgument<object>; status ok */


/* WARNING: Type propagation algorithm not settling */

ulong ContextualizedECS_Context_TickArgs__AddArgument_object_
                (ulong param_1,undefined8 param_2,long *param_3,ulong param_4,long param_5)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  undefined8 uVar25;
  long lVar26;
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
  
  puVar18 = (undefined8 *)param_3[7];
  plVar16 = param_3;
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = (undefined8 *)param_3[7];
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(param_3);
      puVar18 = (undefined8 *)param_3[7];
    }
  }
  lStack_38 = 0;
  uVar25 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar25 = func_0x057a51c4(uVar25,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar16 = &lStack_38;
    param_4 = *(ulong *)PTR_DAT_0777b730;
    uVar5 = func_0x04fe48b0(*(long *)(param_1 + 0x10),uVar25);
    if ((uVar5 & 1) == 0) {
      lVar22 = *(long *)(param_1 + 0x10);
      lVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(lVar19,*(undefined8 *)PTR_DAT_07751030);
      if (lVar19 != 0) {
        lVar26 = *(long *)(lVar19 + 0x10);
        lVar6 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (lVar26 != 0) {
          uVar3 = *(uint *)(lVar19 + 0x18);
          if (uVar3 < *(uint *)(lVar26 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar3 + 1;
            puVar18 = (undefined8 *)(lVar26 + (long)(int)uVar3 * 8 + 0x20);
            *puVar18 = param_2;
            func_0x032809c4(puVar18,param_2);
          }
          else {
            plVar16 = *(long **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(lVar19,param_2);
          }
          if (lVar22 != 0) {
            func_0x04fe2d68(lVar22,uVar25,lVar19,*(undefined8 *)PTR_DAT_0777b738);
            return param_1;
          }
        }
      }
    }
    else if (lStack_38 != 0) {
      lVar19 = *(long *)(lStack_38 + 0x10);
      lVar22 = *(long *)PTR_DAT_07751038;
      *(int *)(lStack_38 + 0x1c) = *(int *)(lStack_38 + 0x1c) + 1;
      if (lVar19 != 0) {
        uVar3 = *(uint *)(lStack_38 + 0x18);
        if (uVar3 < *(uint *)(lVar19 + 0x18)) {
          *(uint *)(lStack_38 + 0x18) = uVar3 + 1;
          puVar18 = (undefined8 *)(lVar19 + (long)(int)uVar3 * 8 + 0x20);
          *puVar18 = param_2;
          func_0x032809c4(puVar18,param_2);
        }
        else {
          func_0x0414446c(lStack_38,param_2,
                          *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
        return param_1;
      }
    }
  }
  auVar29 = func_0x03280cac();
  pppppppuVar13 = auVar29._8_8_;
  uVar5 = auVar29._0_8_;
  lVar19 = tpidr_el0;
  lStack_a8 = *(long *)(lVar19 + 0x28);
  pppppppuStack_b0 = pppppppuVar13;
  plVar20 = (long *)plVar16[7];
  plVar17 = plVar16;
  if (plVar20 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar20 = (long *)plVar16[7];
    if (plVar20 == (long *)0x0) {
      func_0x03256878(plVar16);
      plVar20 = (long *)plVar16[7];
    }
  }
  plVar28 = (long *)(ulong)*(uint *)(plVar20[1] + 0xfc);
  lVar22 = -((long)plVar28 + 0xfU & 0x1fffffff0);
  puVar27 = auStack_c0 + lVar22;
  plStack_b8 = (long *)0x0;
  lVar26 = *plVar20;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar6 = func_0x057a51c4(lVar26,0);
  plVar20 = plVar16;
  if (*(long *)(uVar5 + 0x10) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    param_4 = *(ulong *)PTR_DAT_0777b730;
    uVar7 = func_0x04fe48b0(*(long *)(uVar5 + 0x10),lVar6,&plStack_b8);
    plVar20 = plStack_b8;
    plVar17 = plVar28;
    if ((uVar7 & 1) == 0) {
      unaff_x25 = *(long *)(uVar5 + 0x10);
      unaff_x26 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(unaff_x26,*(undefined8 *)PTR_DAT_07751030);
      plVar20 = (long *)plVar16[7];
      pppppppuVar1 = pppppppuVar13;
      if (-1 < *(int *)(plVar20[1] + 0x28)) {
        pppppppuVar1 = &pppppppuStack_b0;
      }
      func_0x072ce970(puVar27,pppppppuVar1);
      uVar25 = func_0x03280b94(plVar20[1],puVar27);
      lVar26 = lVar6;
      if (unaff_x26 != (long *)0x0) {
        lVar21 = unaff_x26[2];
        lVar23 = *(long *)PTR_DAT_07751038;
        *(int *)((long)unaff_x26 + 0x1c) = *(int *)((long)unaff_x26 + 0x1c) + 1;
        if (lVar21 != 0) {
          uVar3 = *(uint *)(unaff_x26 + 3);
          if (uVar3 < *(uint *)(lVar21 + 0x18)) {
            *(uint *)(unaff_x26 + 3) = uVar3 + 1;
            *(undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20) = uVar25;
            func_0x032809c4();
          }
          else {
            plVar17 = *(long **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(unaff_x26);
          }
          if (unaff_x25 != 0) {
            param_4 = *(ulong *)PTR_DAT_0777b738;
            plVar17 = unaff_x26;
            func_0x04fe2d68(unaff_x25,lVar6);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar6 = plVar16[7];
    pppppppuVar1 = pppppppuVar13;
    if (-1 < *(int *)(*(long *)(lVar6 + 8) + 0x28)) {
      pppppppuVar1 = &pppppppuStack_b0;
    }
    func_0x072ce970(puVar27,pppppppuVar1);
    uVar25 = func_0x03280b94(*(undefined8 *)(lVar6 + 8),puVar27);
    lVar26 = lVar6;
    if (plVar20 == (long *)0x0) goto LAB_03ec38b8;
    lVar21 = plVar20[2];
    lVar23 = *(long *)PTR_DAT_07751038;
    *(int *)((long)plVar20 + 0x1c) = *(int *)((long)plVar20 + 0x1c) + 1;
    if (lVar21 == 0) goto LAB_03ec38b8;
    uVar3 = *(uint *)(plVar20 + 3);
    if (uVar3 < *(uint *)(lVar21 + 0x18)) {
      *(uint *)(plVar20 + 3) = uVar3 + 1;
      *(undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20) = uVar25;
      func_0x032809c4();
    }
    else {
      plVar17 = *(long **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(plVar20);
    }
LAB_03ec3884:
    lVar26 = lVar6;
    if (*(long *)(lVar19 + 0x28) == lStack_a8) {
      return uVar5;
    }
  }
  auVar29 = func_0x072ce990();
  *(undefined8 *)((long)auStack_128 + lVar22 + 0x38) = 0x3ec38c0;
  *(long *)((long)auStack_e8 + lVar22 + 8) = lVar26;
  *(long **)((long)auStack_e8 + lVar22 + 0x10) = plVar20;
  *(undefined8 ********)((long)auStack_e8 + lVar22 + 0x18) = pppppppuVar13;
  *(ulong *)((long)auStack_e8 + lVar22 + 0x20) = uVar5;
  *(undefined8 *)((long)auStack_e8 + lVar22) = 0;
  lVar26 = plVar17[4];
  plVar16 = plVar17;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = plVar17[4];
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar6 = plVar17[4];
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c();
    }
    plVar16 = *(long **)(*(long *)(lVar6 + 0xc0) + 0x18);
    uVar5 = func_0x04e81584(lVar26,(long)auStack_e8 + lVar22);
    if ((uVar5 & 1) == 0) {
      lVar6 = plVar17[4];
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar5 = func_0x03280ca0();
      lVar6 = plVar17[4];
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c(lVar6);
      }
      func_0x04645340(uVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      plVar17 = (long *)0x0;
      if (uVar5 != 0) {
        *(undefined1 (*) [16])(uVar5 + 0x10) = auVar29;
        func_0x032809c4((undefined1 (*) [16])(uVar5 + 0x10),0);
        return uVar5;
      }
    }
    else if (*(long *)((long)auStack_e8 + lVar22) != 0) {
      pauVar8 = (undefined1 (*) [16])(*(long *)((long)auStack_e8 + lVar22) + 0x10);
      *pauVar8 = auVar29;
      func_0x032809c4(pauVar8,0);
      return *(ulong *)((long)auStack_e8 + lVar22);
    }
  }
  auVar30 = func_0x03280cac();
  uVar12 = auVar30._8_8_;
  uVar25 = auVar30._0_8_;
  *(undefined8 *)((long)auStack_128 + lVar22 + 8) = 0x3ec3a10;
  *(undefined1 **)((long)auStack_128 + lVar22 + 0x10) = puVar27;
  *(long *)((long)auStack_128 + lVar22 + 0x18) = lVar26;
  *(long **)((long)auStack_128 + lVar22 + 0x20) = plVar17;
  *(long *)((long)auStack_128 + lVar22 + 0x28) = auVar29._0_8_;
  *(long *)((long)auStack_128 + lVar22 + 0x30) = auVar29._8_8_;
  *(undefined8 *)((long)auStack_128 + lVar22) = 0;
  lVar26 = *(long *)(param_4 + 0x20);
  plVar17 = plVar16;
  uVar5 = param_4;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar6 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c();
    }
    plVar17 = *(long **)(*(long *)(lVar6 + 0xc0) + 0x18);
    uVar7 = func_0x04e81584(lVar26,(long)auStack_128 + lVar22);
    if ((uVar7 & 1) == 0) {
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar7 = func_0x03280ca0();
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c(lVar6);
      }
      func_0x046453e4(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
      param_4 = 0;
      if (uVar7 != 0) {
        *(undefined8 *)(uVar7 + 0x10) = uVar25;
        func_0x032809c4((undefined8 *)(uVar7 + 0x10),uVar25);
        *(undefined8 *)(uVar7 + 0x18) = uVar12;
        *(long **)(uVar7 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(uVar7 + 0x18),0);
        return uVar7;
      }
    }
    else if (*(long *)((long)auStack_128 + lVar22) != 0) {
      puVar18 = (undefined8 *)(*(long *)((long)auStack_128 + lVar22) + 0x10);
      *puVar18 = uVar25;
      func_0x032809c4(puVar18,uVar25);
      lVar6 = *(long *)((long)auStack_128 + lVar22);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x18) = uVar12;
        *(long **)(lVar6 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(lVar6 + 0x18),0);
        return *(ulong *)((long)auStack_128 + lVar22);
      }
    }
  }
  auVar29 = func_0x03280cac();
  uVar14 = auVar29._8_8_;
  uVar9 = auVar29._0_8_;
  *(undefined8 *)((long)auStack_168 + lVar22 + 8) = 0x3ec3b90;
  *(long *)((long)auStack_168 + lVar22 + 0x10) = lVar26;
  *(ulong *)((long)auStack_168 + lVar22 + 0x18) = param_4;
  *(undefined8 *)((long)auStack_168 + lVar22 + 0x20) = uVar25;
  *(undefined8 *)((long)auStack_168 + lVar22 + 0x28) = uVar12;
  *(long **)((long)auStack_168 + lVar22 + 0x30) = plVar16;
  *(undefined8 *)((long)auStack_168 + lVar22) = 0;
  lVar26 = *(long *)(uVar5 + 0x20);
  plVar16 = plVar17;
  uVar7 = uVar5;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = *(long *)(uVar5 + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar6 = *(long *)(uVar5 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c();
    }
    plVar16 = *(long **)(*(long *)(lVar6 + 0xc0) + 0x18);
    uVar10 = func_0x04e81584(lVar26,(long)auStack_168 + lVar22);
    if ((uVar10 & 1) == 0) {
      lVar6 = *(long *)(uVar5 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar10 = func_0x03280ca0();
      lVar6 = *(long *)(uVar5 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c(lVar6);
      }
      func_0x04645488(uVar10,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
      uVar5 = 0;
      if (uVar10 != 0) {
        *(undefined8 *)(uVar10 + 0x10) = uVar9;
        func_0x032809c4((undefined8 *)(uVar10 + 0x10),uVar9);
        *(undefined8 *)(uVar10 + 0x18) = uVar14;
        *(long **)(uVar10 + 0x20) = plVar17;
        func_0x032809c4((undefined8 *)(uVar10 + 0x18),0);
        return uVar10;
      }
    }
    else if (*(long *)((long)auStack_168 + lVar22) != 0) {
      puVar18 = (undefined8 *)(*(long *)((long)auStack_168 + lVar22) + 0x10);
      *puVar18 = uVar9;
      func_0x032809c4(puVar18,uVar9);
      lVar6 = *(long *)((long)auStack_168 + lVar22);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x18) = uVar14;
        *(long **)(lVar6 + 0x20) = plVar17;
        func_0x032809c4((undefined8 *)(lVar6 + 0x18),0);
        return *(ulong *)((long)auStack_168 + lVar22);
      }
    }
  }
  auVar29 = func_0x03280cac();
  uVar12 = auVar29._8_8_;
  uVar25 = auVar29._0_8_;
  *(undefined8 *)((long)auStack_1e8 + lVar22 + 0x38) = 0x3ec3d10;
  *(long **)((long)auStack_1a8 + lVar22 + 8) = plVar28;
  *(long *)((long)auStack_1a8 + lVar22 + 0x10) = lVar26;
  *(ulong *)((long)auStack_1a8 + lVar22 + 0x18) = uVar5;
  *(undefined8 *)((long)auStack_1a8 + lVar22 + 0x20) = uVar9;
  *(undefined8 *)((long)auStack_1a8 + lVar22 + 0x28) = uVar14;
  *(long **)((long)auStack_1a8 + lVar22 + 0x30) = plVar17;
  *(undefined8 *)((long)auStack_1a8 + lVar22) = 0;
  lVar6 = *(long *)(param_5 + 0x20);
  plVar17 = plVar16;
  uVar5 = uVar7;
  lVar26 = param_5;
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
    lVar21 = *(long *)(param_5 + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    plVar17 = *(long **)(*(long *)(lVar21 + 0xc0) + 0x18);
    uVar10 = func_0x04e81584(lVar6,(long)auStack_1a8 + lVar22);
    if ((uVar10 & 1) == 0) {
      lVar21 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar10 = func_0x03280ca0();
      lVar21 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
      }
      func_0x04645704(uVar10,*(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x48));
      param_5 = 0;
      if (uVar10 != 0) {
        *(undefined8 *)(uVar10 + 0x10) = uVar25;
        func_0x032809c4((undefined8 *)(uVar10 + 0x10),uVar25);
        *(undefined8 *)(uVar10 + 0x18) = uVar12;
        *(long **)(uVar10 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(uVar10 + 0x18),0);
LAB_03ec3e7c:
        *(int *)(uVar10 + 0x28) = (int)uVar7;
        return uVar10;
      }
    }
    else if (*(long *)((long)auStack_1a8 + lVar22) != 0) {
      puVar18 = (undefined8 *)(*(long *)((long)auStack_1a8 + lVar22) + 0x10);
      *puVar18 = uVar25;
      func_0x032809c4(puVar18,uVar25);
      lVar21 = *(long *)((long)auStack_1a8 + lVar22);
      if (lVar21 != 0) {
        *(undefined8 *)(lVar21 + 0x18) = uVar12;
        *(long **)(lVar21 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(lVar21 + 0x18),0);
        uVar10 = *(ulong *)((long)auStack_1a8 + lVar22);
        if (uVar10 != 0) goto LAB_03ec3e7c;
        param_5 = 0;
      }
    }
  }
  auVar29 = func_0x03280cac();
  uVar14 = auVar29._8_8_;
  uVar9 = auVar29._0_8_;
  *(undefined8 *)((long)alStack_248 + lVar22 + 0x58) = 0x3ec3ea0;
  *(long *)((long)auStack_1e8 + lVar22 + 8) = lVar6;
  *(long *)((long)auStack_1e8 + lVar22 + 0x10) = param_5;
  *(undefined8 *)((long)auStack_1e8 + lVar22 + 0x18) = uVar25;
  *(undefined8 *)((long)auStack_1e8 + lVar22 + 0x20) = uVar12;
  *(long **)((long)auStack_1e8 + lVar22 + 0x28) = plVar16;
  *(ulong *)((long)auStack_1e8 + lVar22 + 0x30) = uVar7 & 0xffffffff;
  *(undefined8 *)((long)auStack_1e8 + lVar22) = 0;
  lVar6 = *(long *)(lVar26 + 0x20);
  plVar16 = plVar17;
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
  lVar6 = *(long *)(lVar26 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c();
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    lVar21 = *(long *)(lVar26 + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    plVar16 = *(long **)(*(long *)(lVar21 + 0xc0) + 0x18);
    uVar7 = func_0x04e81584(lVar6,(long)auStack_1e8 + lVar22);
    if ((uVar7 & 1) == 0) {
      lVar21 = *(long *)(lVar26 + 0x20);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar7 = func_0x03280ca0();
      lVar26 = *(long *)(lVar26 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      func_0x046457b8(uVar7,*(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x48));
      lVar26 = 0;
      if (uVar7 != 0) {
        *(undefined8 *)(uVar7 + 0x10) = uVar9;
        func_0x032809c4((undefined8 *)(uVar7 + 0x10),uVar9);
        *(undefined8 *)(uVar7 + 0x18) = uVar14;
        *(long **)(uVar7 + 0x20) = plVar17;
        func_0x032809c4((undefined8 *)(uVar7 + 0x18),0);
LAB_03ec400c:
        *(int *)(uVar7 + 0x28) = (int)uVar5;
        return uVar7;
      }
    }
    else if (*(long *)((long)auStack_1e8 + lVar22) != 0) {
      puVar18 = (undefined8 *)(*(long *)((long)auStack_1e8 + lVar22) + 0x10);
      *puVar18 = uVar9;
      func_0x032809c4(puVar18,uVar9);
      lVar21 = *(long *)((long)auStack_1e8 + lVar22);
      if (lVar21 != 0) {
        *(undefined8 *)(lVar21 + 0x18) = uVar14;
        *(long **)(lVar21 + 0x20) = plVar17;
        func_0x032809c4((undefined8 *)(lVar21 + 0x18),0);
        uVar7 = *(ulong *)((long)auStack_1e8 + lVar22);
        if (uVar7 != 0) goto LAB_03ec400c;
        lVar26 = 0;
      }
    }
  }
  auVar29 = func_0x03280cac();
  plVar20 = auVar29._8_8_;
  uVar7 = auVar29._0_8_;
  *(undefined1 **)(auStack_250 + lVar22) = &stack0xffffffffffffff60;
  *(undefined8 *)((long)alStack_248 + lVar22) = 0x3ec4030;
  *(long *)((long)alStack_248 + lVar22 + 8) = lVar19;
  *(long **)((long)alStack_248 + lVar22 + 0x18) = unaff_x26;
  *(long *)((long)alStack_248 + lVar22 + 0x20) = unaff_x25;
  *(long *)((long)alStack_248 + lVar22 + 0x28) = lVar6;
  *(long *)((long)alStack_248 + lVar22 + 0x30) = lVar26;
  *(undefined8 *)((long)alStack_248 + lVar22 + 0x38) = uVar9;
  *(undefined8 *)((long)alStack_248 + lVar22 + 0x40) = uVar14;
  *(long **)((long)alStack_248 + lVar22 + 0x48) = plVar17;
  *(ulong *)((long)alStack_248 + lVar22 + 0x50) = uVar5 & 0xffffffff;
  lVar19 = tpidr_el0;
  *(undefined8 *)((long)&lStack_258 + lVar22) = *(undefined8 *)(lVar19 + 0x28);
  plVar17 = (long *)plVar16[7];
  if (plVar17 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar17 = (long *)plVar16[7];
    if (plVar17 == (long *)0x0) {
      func_0x03256878(plVar16);
      plVar17 = (long *)plVar16[7];
    }
  }
  uVar10 = (ulong)*(uint *)(plVar17[4] + 0xfc);
  uVar5 = uVar10 + 0xf & 0x1fffffff0;
  lVar26 = (long)&uStack_270 + (lVar22 - uVar5);
  puVar18 = (undefined8 *)(lVar26 - uVar5);
  lVar6 = (long)puVar18 - uVar5;
  func_0x072ce9a0(lVar6,0,uVar10);
  if (plVar20 == (long *)0x0) {
    func_0x03280cac();
    plVar17 = (long *)0x0;
  }
  else {
    lVar21 = *plVar17;
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c(lVar21);
    }
    lVar23 = *plVar20;
    uVar5 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar5 != 0) {
      piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar21) {
          puVar11 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar5 = uVar5 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar5 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar20,lVar21,0);
LAB_03ec4144:
    plVar17 = (long *)(*(code *)*puVar11)(plVar20,puVar11[1]);
    puVar4 = PTR_DAT_0774e8e0;
    if (plVar17 != (long *)0x0) {
      do {
        lVar21 = *plVar17;
        uVar5 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar5 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar5 = uVar5 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar5 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar4,0);
LAB_03ec41ac:
        uVar5 = (*(code *)*puVar11)(plVar17,puVar11[1]);
        if ((uVar5 & 1) == 0) {
          plVar16 = (long *)0x0;
          goto LAB_03ec429c;
        }
        lVar21 = *(long *)(plVar16[7] + 0x10);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
        }
        lVar23 = *plVar17;
        uVar5 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar5 != 0) {
          piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar21) {
              lVar21 = lVar23 + (long)*piVar24 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar5 = uVar5 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar5 != 0);
        }
        lVar21 = func_0x03256b10(plVar17,lVar21,0);
LAB_03ec4220:
        *(long *)((long)&lStack_268 + lVar22) = lVar26;
        lVar21 = *(long *)(lVar21 + 8);
        (**(code **)(lVar21 + 0x10))
                  (*(undefined8 *)(lVar21 + 8),lVar21,plVar17,(long)&lStack_268 + lVar22,lVar26);
        func_0x072ce970(lVar6,lVar26,uVar10);
        func_0x072ce970(puVar18,lVar6,uVar10);
        puVar11 = puVar18;
        if (-1 < *(int *)(*(long *)(plVar16[7] + 0x20) + 0x28)) {
          puVar11 = (undefined8 *)*puVar18;
        }
        puVar15 = *(undefined8 **)(plVar16[7] + 0x28);
        uVar25 = *puVar15;
        *(undefined8 **)((long)&lStack_268 + lVar22) = puVar11;
        (*(code *)puVar15[2])(uVar25,puVar15,uVar7,(long)&lStack_268 + lVar22,auStack_260 + lVar22);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(plVar16);
  do {
    auVar31 = func_0x072ce990();
    if (auVar31._8_4_ != 1) {
      if (plVar17 == (long *)0x0) goto LAB_03ec43e8;
      lVar19 = *plVar17;
      uVar5 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar5 == 0) goto LAB_03ec43c0;
      piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      break;
    }
    puVar18 = (undefined8 *)func_0x072ce910(auVar31._0_8_);
    plVar16 = (long *)*puVar18;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar17 != (long *)0x0) {
      lVar26 = *plVar17;
      uVar5 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar5 != 0) {
        piVar24 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar18 = (undefined8 *)(lVar26 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar5 = uVar5 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar5 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar18)(plVar17,puVar18[1]);
    }
    if (plVar16 != (long *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar19 + 0x28) == *(long *)((long)&lStack_258 + lVar22)) {
      return uVar7;
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar24 = piVar24 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar18 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
LAB_03ec43e8:
  func_0x03365958(auVar31._0_8_);
  func_0x03280ca4(0);
  auVar29 = func_0x02f09514();
  lVar19 = auVar29._8_8_;
  *(undefined8 *)(lVar6 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar6 + -0x18) = 0;
  *(long **)(lVar6 + -0x10) = plVar17;
  *(ulong *)(lVar6 + -8) = uVar7;
  puVar18 = *(undefined8 **)(lVar19 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar19 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar19);
      puVar18 = *(undefined8 **)(lVar19 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0x28) = 0;
  uVar25 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar25,0);
  lVar22 = *(long *)(auVar29._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar5 = func_0x04fe48b0(lVar22,uVar12,lVar6 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar5 & 1) == 0) {
      lVar22 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
      lVar19 = *(long *)(lVar22 + 0x38);
      if (lVar19 == 0) {
        func_0x03256878(lVar22);
        lVar19 = *(long *)(lVar22 + 0x38);
      }
      lVar19 = *(long *)(lVar19 + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if (*(int *)(lVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar19 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      uVar5 = **(ulong **)(lVar19 + 0xb8);
    }
    else {
      uVar5 = func_0x03d2c6a8(*(undefined8 *)(lVar6 + -0x28),
                              *(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x18));
    }
    return uVar5;
  }
  auVar30 = func_0x03280cac();
  lVar19 = auVar30._8_8_;
  *(undefined8 *)(lVar6 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar6 + -0x48) = uVar25;
  *(undefined1 (*) [16])(lVar6 + -0x40) = auVar29;
  puVar18 = *(undefined8 **)(lVar19 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar19 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar19);
      puVar18 = *(undefined8 **)(lVar19 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0x58) = 0;
  uVar25 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar25 = func_0x057a51c4(uVar25,0);
  lVar22 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar5 = func_0x04fe48b0(lVar22,uVar25,lVar6 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar5 & 1) == 0) {
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 8))();
    }
    else {
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x18))
                        (*(undefined8 *)(lVar6 + -0x58));
    }
    return uVar5;
  }
  auVar29 = func_0x03280cac();
  lVar19 = auVar29._8_8_;
  *(undefined8 *)(lVar6 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar6 + -0x70) = auVar30;
  puVar18 = *(undefined8 **)(lVar19 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar19 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar19);
      puVar18 = *(undefined8 **)(lVar19 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0x78) = 0;
  uVar25 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar25,0);
  lVar19 = *(long *)(auVar29._0_8_ + 0x10);
  if (lVar19 != 0) {
    uVar5 = func_0x04fe48b0(lVar19,uVar12,lVar6 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    lVar19 = *(long *)(lVar6 + -0x78);
    if (lVar19 != 0) {
      iVar2 = *(int *)(lVar19 + 0x18);
      if (iVar2 < 1) {
        return 0;
      }
      *(undefined4 *)(lVar19 + 0x18) = 0;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar19 + 0x10),0,iVar2,0);
      return 1;
    }
  }
  auVar30 = func_0x03280cac();
  lVar19 = auVar30._8_8_;
  *(undefined8 *)(lVar6 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar6 + -0x90) = uVar25;
  *(long *)(lVar6 + -0x88) = auVar29._0_8_;
  puVar18 = *(undefined8 **)(lVar19 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar19 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar19);
      puVar18 = *(undefined8 **)(lVar19 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0x98) = 0;
  uVar25 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar25,0);
  lVar19 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar19 != 0) {
    uVar5 = func_0x04fe48b0(lVar19,uVar12,lVar6 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar6 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar6 + -0x98) + 0x18));
    }
  }
  auVar29 = func_0x03280cac();
  lVar19 = auVar29._8_8_;
  *(undefined8 *)(lVar6 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar6 + -0xb0) = uVar25;
  *(long *)(lVar6 + -0xa8) = auVar30._0_8_;
  puVar18 = *(undefined8 **)(lVar19 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar19 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar19);
      puVar18 = *(undefined8 **)(lVar19 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0xb8) = 0;
  uVar25 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar25,0);
  lVar19 = *(long *)(auVar29._0_8_ + 0x10);
  if (lVar19 != 0) {
    uVar5 = func_0x04fe48b0(lVar19,uVar12,lVar6 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar6 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar6 + -0xb8) + 0x18));
    }
  }
  auVar30 = func_0x03280cac();
  lVar19 = auVar30._8_8_;
  *(undefined8 *)(lVar6 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar6 + -0xd0) = uVar25;
  *(long *)(lVar6 + -200) = auVar29._0_8_;
  puVar18 = *(undefined8 **)(lVar19 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar19 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar19);
      puVar18 = *(undefined8 **)(lVar19 + 0x38);
    }
  }
  *(undefined8 *)(lVar6 + -0xd8) = 0;
  uVar25 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar25,0);
  lVar19 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar19 != 0) {
    uVar5 = func_0x04fe48b0(lVar19,uVar12,lVar6 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      if (*(long *)(lVar6 + -0xd8) == 0) goto LAB_03ec4958;
      uVar5 = (ulong)(0 < *(int *)(*(long *)(lVar6 + -0xd8) + 0x18));
    }
    return uVar5;
  }
LAB_03ec4958:
  auVar29 = func_0x03280cac();
  lVar19 = auVar29._8_8_;
  *(undefined8 *)(lVar6 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar6 + -0xf0) = uVar25;
  *(long *)(lVar6 + -0xe8) = auVar30._0_8_;
  puVar18 = *(undefined8 **)(lVar19 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03256878(lVar19);
    puVar18 = *(undefined8 **)(lVar19 + 0x38);
  }
  uVar5 = (**(code **)*puVar18)(auVar29._0_8_);
  if ((uVar5 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 8))(auVar29._0_8_);
  return uVar5;
}

