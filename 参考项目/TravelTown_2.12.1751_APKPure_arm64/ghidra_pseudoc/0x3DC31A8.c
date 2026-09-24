/* Ghidra 12.1.2 native pseudocode; RVA 0x3DC31A8; ContextualizedECS.Context.TickArgs.AddArgument<IntervalTick>; status ok */


/* WARNING: Type propagation algorithm not settling */

ulong ContextualizedECS_Context_TickArgs__AddArgument_IntervalTick_
                (undefined4 param_1,ulong param_2,long param_3,long *param_4,ulong param_5,
                long param_6)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *******pppppppuVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  undefined8 uVar26;
  long unaff_x22;
  long unaff_x23;
  undefined1 *puVar27;
  long *plVar28;
  long unaff_x25;
  long *unaff_x26;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  long alStack_3c0 [5];
  long alStack_398 [4];
  long alStack_378 [4];
  long alStack_358 [4];
  long lStack_338;
  undefined1 auStack_330 [24];
  undefined8 auStack_318 [3];
  undefined1 auStack_300 [24];
  ulong auStack_2e8 [5];
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined1 auStack_2b0 [8];
  long lStack_2a8;
  undefined1 auStack_2a0 [8];
  long alStack_298 [12];
  ulong auStack_238 [8];
  ulong auStack_1f8 [8];
  ulong auStack_1b8 [8];
  ulong auStack_178 [8];
  ulong auStack_138 [5];
  undefined1 auStack_110 [8];
  long *plStack_108;
  undefined8 *******pppppppuStack_100;
  long lStack_f8;
  long alStack_88 [3];
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined4 auStack_48 [2];
  long lStack_38;
  
  puVar18 = *(undefined8 **)(param_3 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(param_3 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(param_3);
      puVar18 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  lStack_38 = 0;
  uVar26 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar26,0);
  if (*(long *)(param_2 + 0x10) != 0) {
    param_4 = &lStack_38;
    param_5 = *(ulong *)PTR_DAT_0777b730;
    uVar6 = func_0x04fe48b0(*(long *)(param_2 + 0x10),uVar5);
    lVar20 = lStack_38;
    uVar26 = uVar5;
    auStack_48[0] = param_1;
    if ((uVar6 & 1) == 0) {
      unaff_x22 = *(long *)(param_2 + 0x10);
      unaff_x23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(unaff_x23,*(undefined8 *)PTR_DAT_07751030);
      uVar7 = func_0x03280b94(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),auStack_48);
      if (unaff_x23 != 0) {
        lVar20 = *(long *)(unaff_x23 + 0x10);
        lVar19 = *(long *)PTR_DAT_07751038;
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar20 != 0) {
          uVar3 = *(uint *)(unaff_x23 + 0x18);
          if (uVar3 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(unaff_x23 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar20 + (long)(int)uVar3 * 8 + 0x20) = uVar7;
            func_0x032809c4();
          }
          else {
            param_4 = *(long **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(unaff_x23);
          }
          if (unaff_x22 != 0) {
            func_0x04fe2d68(unaff_x22,uVar5,unaff_x23,*(undefined8 *)PTR_DAT_0777b738);
            return param_2;
          }
        }
      }
    }
    else {
      uVar5 = func_0x03280b94(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),auStack_48);
      param_3 = lVar20;
      if (lVar20 != 0) {
        lVar19 = *(long *)(lVar20 + 0x10);
        lVar23 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        if (lVar19 != 0) {
          uVar3 = *(uint *)(lVar20 + 0x18);
          if (uVar3 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar20 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar19 + (long)(int)uVar3 * 8 + 0x20) = uVar5;
            func_0x032809c4();
          }
          else {
            func_0x0414446c(lVar20,uVar5,
                            *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          return param_2;
        }
      }
    }
  }
  auVar29 = func_0x03280cac();
  uVar5 = auVar29._8_8_;
  uVar6 = auVar29._0_8_;
  alStack_88[1] = 0x3ec33e4;
  alStack_88[2] = unaff_x23;
  lStack_70 = unaff_x22;
  uStack_68 = uVar26;
  lStack_60 = param_3;
  uStack_58 = param_2;
  puVar18 = (undefined8 *)param_4[7];
  plVar16 = param_4;
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = (undefined8 *)param_4[7];
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(param_4);
      puVar18 = (undefined8 *)param_4[7];
    }
  }
  alStack_88[0] = 0;
  uVar26 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar26 = func_0x057a51c4(uVar26,0);
  if (*(long *)(uVar6 + 0x10) != 0) {
    plVar16 = alStack_88;
    param_5 = *(ulong *)PTR_DAT_0777b730;
    uVar8 = func_0x04fe48b0(*(long *)(uVar6 + 0x10),uVar26);
    if ((uVar8 & 1) == 0) {
      lVar19 = *(long *)(uVar6 + 0x10);
      lVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(lVar20,*(undefined8 *)PTR_DAT_07751030);
      if (lVar20 != 0) {
        lVar23 = *(long *)(lVar20 + 0x10);
        lVar9 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        if (lVar23 != 0) {
          uVar3 = *(uint *)(lVar20 + 0x18);
          if (uVar3 < *(uint *)(lVar23 + 0x18)) {
            *(uint *)(lVar20 + 0x18) = uVar3 + 1;
            puVar18 = (undefined8 *)(lVar23 + (long)(int)uVar3 * 8 + 0x20);
            *puVar18 = uVar5;
            func_0x032809c4(puVar18,uVar5);
          }
          else {
            plVar16 = *(long **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(lVar20,uVar5);
          }
          if (lVar19 != 0) {
            func_0x04fe2d68(lVar19,uVar26,lVar20,*(undefined8 *)PTR_DAT_0777b738);
            return uVar6;
          }
        }
      }
    }
    else if (alStack_88[0] != 0) {
      lVar20 = *(long *)(alStack_88[0] + 0x10);
      lVar19 = *(long *)PTR_DAT_07751038;
      *(int *)(alStack_88[0] + 0x1c) = *(int *)(alStack_88[0] + 0x1c) + 1;
      if (lVar20 != 0) {
        uVar3 = *(uint *)(alStack_88[0] + 0x18);
        if (uVar3 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(alStack_88[0] + 0x18) = uVar3 + 1;
          puVar18 = (undefined8 *)(lVar20 + (long)(int)uVar3 * 8 + 0x20);
          *puVar18 = uVar5;
          func_0x032809c4(puVar18,uVar5);
        }
        else {
          func_0x0414446c(alStack_88[0],uVar5,
                          *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        return uVar6;
      }
    }
  }
  auVar29 = func_0x03280cac();
  pppppppuVar13 = auVar29._8_8_;
  uVar6 = auVar29._0_8_;
  lVar20 = tpidr_el0;
  lStack_f8 = *(long *)(lVar20 + 0x28);
  pppppppuStack_100 = pppppppuVar13;
  plVar21 = (long *)plVar16[7];
  plVar17 = plVar16;
  if (plVar21 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar21 = (long *)plVar16[7];
    if (plVar21 == (long *)0x0) {
      func_0x03256878(plVar16);
      plVar21 = (long *)plVar16[7];
    }
  }
  plVar28 = (long *)(ulong)*(uint *)(plVar21[1] + 0xfc);
  lVar19 = -((long)plVar28 + 0xfU & 0x1fffffff0);
  puVar27 = auStack_110 + lVar19;
  plStack_108 = (long *)0x0;
  lVar23 = *plVar21;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar9 = func_0x057a51c4(lVar23,0);
  plVar21 = plVar16;
  if (*(long *)(uVar6 + 0x10) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    param_5 = *(ulong *)PTR_DAT_0777b730;
    uVar8 = func_0x04fe48b0(*(long *)(uVar6 + 0x10),lVar9,&plStack_108);
    plVar21 = plStack_108;
    plVar17 = plVar28;
    if ((uVar8 & 1) == 0) {
      unaff_x25 = *(long *)(uVar6 + 0x10);
      unaff_x26 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(unaff_x26,*(undefined8 *)PTR_DAT_07751030);
      plVar21 = (long *)plVar16[7];
      pppppppuVar1 = pppppppuVar13;
      if (-1 < *(int *)(plVar21[1] + 0x28)) {
        pppppppuVar1 = &pppppppuStack_100;
      }
      func_0x072ce970(puVar27,pppppppuVar1);
      uVar26 = func_0x03280b94(plVar21[1],puVar27);
      lVar23 = lVar9;
      if (unaff_x26 != (long *)0x0) {
        lVar22 = unaff_x26[2];
        lVar24 = *(long *)PTR_DAT_07751038;
        *(int *)((long)unaff_x26 + 0x1c) = *(int *)((long)unaff_x26 + 0x1c) + 1;
        if (lVar22 != 0) {
          uVar3 = *(uint *)(unaff_x26 + 3);
          if (uVar3 < *(uint *)(lVar22 + 0x18)) {
            *(uint *)(unaff_x26 + 3) = uVar3 + 1;
            *(undefined8 *)(lVar22 + (long)(int)uVar3 * 8 + 0x20) = uVar26;
            func_0x032809c4();
          }
          else {
            plVar17 = *(long **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(unaff_x26);
          }
          if (unaff_x25 != 0) {
            param_5 = *(ulong *)PTR_DAT_0777b738;
            plVar17 = unaff_x26;
            func_0x04fe2d68(unaff_x25,lVar9);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar9 = plVar16[7];
    pppppppuVar1 = pppppppuVar13;
    if (-1 < *(int *)(*(long *)(lVar9 + 8) + 0x28)) {
      pppppppuVar1 = &pppppppuStack_100;
    }
    func_0x072ce970(puVar27,pppppppuVar1);
    uVar26 = func_0x03280b94(*(undefined8 *)(lVar9 + 8),puVar27);
    lVar23 = lVar9;
    if (plVar21 == (long *)0x0) goto LAB_03ec38b8;
    lVar22 = plVar21[2];
    lVar24 = *(long *)PTR_DAT_07751038;
    *(int *)((long)plVar21 + 0x1c) = *(int *)((long)plVar21 + 0x1c) + 1;
    if (lVar22 == 0) goto LAB_03ec38b8;
    uVar3 = *(uint *)(plVar21 + 3);
    if (uVar3 < *(uint *)(lVar22 + 0x18)) {
      *(uint *)(plVar21 + 3) = uVar3 + 1;
      *(undefined8 *)(lVar22 + (long)(int)uVar3 * 8 + 0x20) = uVar26;
      func_0x032809c4();
    }
    else {
      plVar17 = *(long **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(plVar21);
    }
LAB_03ec3884:
    lVar23 = lVar9;
    if (*(long *)(lVar20 + 0x28) == lStack_f8) {
      return uVar6;
    }
  }
  auVar29 = func_0x072ce990();
  *(undefined8 *)((long)auStack_178 + lVar19 + 0x38) = 0x3ec38c0;
  *(long *)((long)auStack_138 + lVar19 + 8) = lVar23;
  *(long **)((long)auStack_138 + lVar19 + 0x10) = plVar21;
  *(undefined8 ********)((long)auStack_138 + lVar19 + 0x18) = pppppppuVar13;
  *(ulong *)((long)auStack_138 + lVar19 + 0x20) = uVar6;
  *(undefined8 *)((long)auStack_138 + lVar19) = 0;
  lVar23 = plVar17[4];
  plVar16 = plVar17;
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
  lVar23 = plVar17[4];
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = **(long **)(lVar23 + 0xb8);
  if (lVar23 != 0) {
    lVar9 = plVar17[4];
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
    }
    plVar16 = *(long **)(*(long *)(lVar9 + 0xc0) + 0x18);
    uVar6 = func_0x04e81584(lVar23,(long)auStack_138 + lVar19);
    if ((uVar6 & 1) == 0) {
      lVar9 = plVar17[4];
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar6 = func_0x03280ca0();
      lVar9 = plVar17[4];
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
      }
      func_0x04645340(uVar6,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x38));
      plVar17 = (long *)0x0;
      if (uVar6 != 0) {
        *(undefined1 (*) [16])(uVar6 + 0x10) = auVar29;
        func_0x032809c4((undefined1 (*) [16])(uVar6 + 0x10),0);
        return uVar6;
      }
    }
    else if (*(long *)((long)auStack_138 + lVar19) != 0) {
      pauVar10 = (undefined1 (*) [16])(*(long *)((long)auStack_138 + lVar19) + 0x10);
      *pauVar10 = auVar29;
      func_0x032809c4(pauVar10,0);
      return *(ulong *)((long)auStack_138 + lVar19);
    }
  }
  auVar30 = func_0x03280cac();
  uVar5 = auVar30._8_8_;
  uVar26 = auVar30._0_8_;
  *(undefined8 *)((long)auStack_178 + lVar19 + 8) = 0x3ec3a10;
  *(undefined1 **)((long)auStack_178 + lVar19 + 0x10) = puVar27;
  *(long *)((long)auStack_178 + lVar19 + 0x18) = lVar23;
  *(long **)((long)auStack_178 + lVar19 + 0x20) = plVar17;
  *(long *)((long)auStack_178 + lVar19 + 0x28) = auVar29._0_8_;
  *(long *)((long)auStack_178 + lVar19 + 0x30) = auVar29._8_8_;
  *(undefined8 *)((long)auStack_178 + lVar19) = 0;
  lVar23 = *(long *)(param_5 + 0x20);
  plVar17 = plVar16;
  uVar6 = param_5;
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
  lVar23 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = **(long **)(lVar23 + 0xb8);
  if (lVar23 != 0) {
    lVar9 = *(long *)(param_5 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
    }
    plVar17 = *(long **)(*(long *)(lVar9 + 0xc0) + 0x18);
    uVar8 = func_0x04e81584(lVar23,(long)auStack_178 + lVar19);
    if ((uVar8 & 1) == 0) {
      lVar9 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar8 = func_0x03280ca0();
      lVar9 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
      }
      func_0x046453e4(uVar8,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x40));
      param_5 = 0;
      if (uVar8 != 0) {
        *(undefined8 *)(uVar8 + 0x10) = uVar26;
        func_0x032809c4((undefined8 *)(uVar8 + 0x10),uVar26);
        *(undefined8 *)(uVar8 + 0x18) = uVar5;
        *(long **)(uVar8 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(uVar8 + 0x18),0);
        return uVar8;
      }
    }
    else if (*(long *)((long)auStack_178 + lVar19) != 0) {
      puVar18 = (undefined8 *)(*(long *)((long)auStack_178 + lVar19) + 0x10);
      *puVar18 = uVar26;
      func_0x032809c4(puVar18,uVar26);
      lVar9 = *(long *)((long)auStack_178 + lVar19);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x18) = uVar5;
        *(long **)(lVar9 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(lVar9 + 0x18),0);
        return *(ulong *)((long)auStack_178 + lVar19);
      }
    }
  }
  auVar29 = func_0x03280cac();
  uVar14 = auVar29._8_8_;
  uVar7 = auVar29._0_8_;
  *(undefined8 *)((long)auStack_1b8 + lVar19 + 8) = 0x3ec3b90;
  *(long *)((long)auStack_1b8 + lVar19 + 0x10) = lVar23;
  *(ulong *)((long)auStack_1b8 + lVar19 + 0x18) = param_5;
  *(undefined8 *)((long)auStack_1b8 + lVar19 + 0x20) = uVar26;
  *(undefined8 *)((long)auStack_1b8 + lVar19 + 0x28) = uVar5;
  *(long **)((long)auStack_1b8 + lVar19 + 0x30) = plVar16;
  *(undefined8 *)((long)auStack_1b8 + lVar19) = 0;
  lVar23 = *(long *)(uVar6 + 0x20);
  plVar16 = plVar17;
  uVar8 = uVar6;
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
  lVar23 = *(long *)(uVar6 + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = **(long **)(lVar23 + 0xb8);
  if (lVar23 != 0) {
    lVar9 = *(long *)(uVar6 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
    }
    plVar16 = *(long **)(*(long *)(lVar9 + 0xc0) + 0x18);
    uVar11 = func_0x04e81584(lVar23,(long)auStack_1b8 + lVar19);
    if ((uVar11 & 1) == 0) {
      lVar9 = *(long *)(uVar6 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar11 = func_0x03280ca0();
      lVar9 = *(long *)(uVar6 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
      }
      func_0x04645488(uVar11,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x40));
      uVar6 = 0;
      if (uVar11 != 0) {
        *(undefined8 *)(uVar11 + 0x10) = uVar7;
        func_0x032809c4((undefined8 *)(uVar11 + 0x10),uVar7);
        *(undefined8 *)(uVar11 + 0x18) = uVar14;
        *(long **)(uVar11 + 0x20) = plVar17;
        func_0x032809c4((undefined8 *)(uVar11 + 0x18),0);
        return uVar11;
      }
    }
    else if (*(long *)((long)auStack_1b8 + lVar19) != 0) {
      puVar18 = (undefined8 *)(*(long *)((long)auStack_1b8 + lVar19) + 0x10);
      *puVar18 = uVar7;
      func_0x032809c4(puVar18,uVar7);
      lVar9 = *(long *)((long)auStack_1b8 + lVar19);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x18) = uVar14;
        *(long **)(lVar9 + 0x20) = plVar17;
        func_0x032809c4((undefined8 *)(lVar9 + 0x18),0);
        return *(ulong *)((long)auStack_1b8 + lVar19);
      }
    }
  }
  auVar29 = func_0x03280cac();
  uVar5 = auVar29._8_8_;
  uVar26 = auVar29._0_8_;
  *(undefined8 *)((long)auStack_238 + lVar19 + 0x38) = 0x3ec3d10;
  *(long **)((long)auStack_1f8 + lVar19 + 8) = plVar28;
  *(long *)((long)auStack_1f8 + lVar19 + 0x10) = lVar23;
  *(ulong *)((long)auStack_1f8 + lVar19 + 0x18) = uVar6;
  *(undefined8 *)((long)auStack_1f8 + lVar19 + 0x20) = uVar7;
  *(undefined8 *)((long)auStack_1f8 + lVar19 + 0x28) = uVar14;
  *(long **)((long)auStack_1f8 + lVar19 + 0x30) = plVar17;
  *(undefined8 *)((long)auStack_1f8 + lVar19) = 0;
  lVar9 = *(long *)(param_6 + 0x20);
  plVar17 = plVar16;
  uVar6 = uVar8;
  lVar23 = param_6;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x0325681c(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x0325681c();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar9 = *(long *)(param_6 + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x0325681c();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x0325681c();
  }
  lVar9 = **(long **)(lVar9 + 0xb8);
  if (lVar9 != 0) {
    lVar22 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    plVar17 = *(long **)(*(long *)(lVar22 + 0xc0) + 0x18);
    uVar11 = func_0x04e81584(lVar9,(long)auStack_1f8 + lVar19);
    if ((uVar11 & 1) == 0) {
      lVar22 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar11 = func_0x03280ca0();
      lVar22 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      func_0x04645704(uVar11,*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x48));
      param_6 = 0;
      if (uVar11 != 0) {
        *(undefined8 *)(uVar11 + 0x10) = uVar26;
        func_0x032809c4((undefined8 *)(uVar11 + 0x10),uVar26);
        *(undefined8 *)(uVar11 + 0x18) = uVar5;
        *(long **)(uVar11 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(uVar11 + 0x18),0);
LAB_03ec3e7c:
        *(int *)(uVar11 + 0x28) = (int)uVar8;
        return uVar11;
      }
    }
    else if (*(long *)((long)auStack_1f8 + lVar19) != 0) {
      puVar18 = (undefined8 *)(*(long *)((long)auStack_1f8 + lVar19) + 0x10);
      *puVar18 = uVar26;
      func_0x032809c4(puVar18,uVar26);
      lVar22 = *(long *)((long)auStack_1f8 + lVar19);
      if (lVar22 != 0) {
        *(undefined8 *)(lVar22 + 0x18) = uVar5;
        *(long **)(lVar22 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(lVar22 + 0x18),0);
        uVar11 = *(ulong *)((long)auStack_1f8 + lVar19);
        if (uVar11 != 0) goto LAB_03ec3e7c;
        param_6 = 0;
      }
    }
  }
  auVar29 = func_0x03280cac();
  uVar14 = auVar29._8_8_;
  uVar7 = auVar29._0_8_;
  *(undefined8 *)((long)alStack_298 + lVar19 + 0x58) = 0x3ec3ea0;
  *(long *)((long)auStack_238 + lVar19 + 8) = lVar9;
  *(long *)((long)auStack_238 + lVar19 + 0x10) = param_6;
  *(undefined8 *)((long)auStack_238 + lVar19 + 0x18) = uVar26;
  *(undefined8 *)((long)auStack_238 + lVar19 + 0x20) = uVar5;
  *(long **)((long)auStack_238 + lVar19 + 0x28) = plVar16;
  *(ulong *)((long)auStack_238 + lVar19 + 0x30) = uVar8 & 0xffffffff;
  *(undefined8 *)((long)auStack_238 + lVar19) = 0;
  lVar9 = *(long *)(lVar23 + 0x20);
  plVar16 = plVar17;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x0325681c(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x0325681c();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar9 = *(long *)(lVar23 + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x0325681c();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x0325681c();
  }
  lVar9 = **(long **)(lVar9 + 0xb8);
  if (lVar9 != 0) {
    lVar22 = *(long *)(lVar23 + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    plVar16 = *(long **)(*(long *)(lVar22 + 0xc0) + 0x18);
    uVar8 = func_0x04e81584(lVar9,(long)auStack_238 + lVar19);
    if ((uVar8 & 1) == 0) {
      lVar22 = *(long *)(lVar23 + 0x20);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar8 = func_0x03280ca0();
      lVar23 = *(long *)(lVar23 + 0x20);
      if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x0325681c(lVar23);
      }
      func_0x046457b8(uVar8,*(undefined8 *)(*(long *)(lVar23 + 0xc0) + 0x48));
      lVar23 = 0;
      if (uVar8 != 0) {
        *(undefined8 *)(uVar8 + 0x10) = uVar7;
        func_0x032809c4((undefined8 *)(uVar8 + 0x10),uVar7);
        *(undefined8 *)(uVar8 + 0x18) = uVar14;
        *(long **)(uVar8 + 0x20) = plVar17;
        func_0x032809c4((undefined8 *)(uVar8 + 0x18),0);
LAB_03ec400c:
        *(int *)(uVar8 + 0x28) = (int)uVar6;
        return uVar8;
      }
    }
    else if (*(long *)((long)auStack_238 + lVar19) != 0) {
      puVar18 = (undefined8 *)(*(long *)((long)auStack_238 + lVar19) + 0x10);
      *puVar18 = uVar7;
      func_0x032809c4(puVar18,uVar7);
      lVar22 = *(long *)((long)auStack_238 + lVar19);
      if (lVar22 != 0) {
        *(undefined8 *)(lVar22 + 0x18) = uVar14;
        *(long **)(lVar22 + 0x20) = plVar17;
        func_0x032809c4((undefined8 *)(lVar22 + 0x18),0);
        uVar8 = *(ulong *)((long)auStack_238 + lVar19);
        if (uVar8 != 0) goto LAB_03ec400c;
        lVar23 = 0;
      }
    }
  }
  auVar29 = func_0x03280cac();
  plVar21 = auVar29._8_8_;
  uVar8 = auVar29._0_8_;
  *(undefined1 **)(auStack_2a0 + lVar19) = &stack0xffffffffffffff10;
  *(undefined8 *)((long)alStack_298 + lVar19) = 0x3ec4030;
  *(long *)((long)alStack_298 + lVar19 + 8) = lVar20;
  *(long **)((long)alStack_298 + lVar19 + 0x18) = unaff_x26;
  *(long *)((long)alStack_298 + lVar19 + 0x20) = unaff_x25;
  *(long *)((long)alStack_298 + lVar19 + 0x28) = lVar9;
  *(long *)((long)alStack_298 + lVar19 + 0x30) = lVar23;
  *(undefined8 *)((long)alStack_298 + lVar19 + 0x38) = uVar7;
  *(undefined8 *)((long)alStack_298 + lVar19 + 0x40) = uVar14;
  *(long **)((long)alStack_298 + lVar19 + 0x48) = plVar17;
  *(ulong *)((long)alStack_298 + lVar19 + 0x50) = uVar6 & 0xffffffff;
  lVar20 = tpidr_el0;
  *(undefined8 *)((long)&lStack_2a8 + lVar19) = *(undefined8 *)(lVar20 + 0x28);
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
  uVar11 = (ulong)*(uint *)(plVar17[4] + 0xfc);
  uVar6 = uVar11 + 0xf & 0x1fffffff0;
  lVar23 = (long)&uStack_2c0 + (lVar19 - uVar6);
  puVar18 = (undefined8 *)(lVar23 - uVar6);
  lVar9 = (long)puVar18 - uVar6;
  func_0x072ce9a0(lVar9,0,uVar11);
  if (plVar21 == (long *)0x0) {
    func_0x03280cac();
    plVar17 = (long *)0x0;
  }
  else {
    lVar22 = *plVar17;
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar24 = *plVar21;
    uVar6 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar6 != 0) {
      piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == lVar22) {
          puVar12 = (undefined8 *)(lVar24 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar6 = uVar6 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar6 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar21,lVar22,0);
LAB_03ec4144:
    plVar17 = (long *)(*(code *)*puVar12)(plVar21,puVar12[1]);
    puVar4 = PTR_DAT_0774e8e0;
    if (plVar17 != (long *)0x0) {
      do {
        lVar22 = *plVar17;
        uVar6 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar6 != 0) {
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar6 = uVar6 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar6 != 0);
        }
        puVar12 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar4,0);
LAB_03ec41ac:
        uVar6 = (*(code *)*puVar12)(plVar17,puVar12[1]);
        if ((uVar6 & 1) == 0) {
          plVar16 = (long *)0x0;
          goto LAB_03ec429c;
        }
        lVar22 = *(long *)(plVar16[7] + 0x10);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar24 = *plVar17;
        uVar6 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar6 != 0) {
          piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar22) {
              lVar22 = lVar24 + (long)*piVar25 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar6 = uVar6 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar6 != 0);
        }
        lVar22 = func_0x03256b10(plVar17,lVar22,0);
LAB_03ec4220:
        *(long *)((long)&lStack_2b8 + lVar19) = lVar23;
        lVar22 = *(long *)(lVar22 + 8);
        (**(code **)(lVar22 + 0x10))
                  (*(undefined8 *)(lVar22 + 8),lVar22,plVar17,(long)&lStack_2b8 + lVar19,lVar23);
        func_0x072ce970(lVar9,lVar23,uVar11);
        func_0x072ce970(puVar18,lVar9,uVar11);
        puVar12 = puVar18;
        if (-1 < *(int *)(*(long *)(plVar16[7] + 0x20) + 0x28)) {
          puVar12 = (undefined8 *)*puVar18;
        }
        puVar15 = *(undefined8 **)(plVar16[7] + 0x28);
        uVar26 = *puVar15;
        *(undefined8 **)((long)&lStack_2b8 + lVar19) = puVar12;
        (*(code *)puVar15[2])(uVar26,puVar15,uVar8,(long)&lStack_2b8 + lVar19,auStack_2b0 + lVar19);
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
      lVar20 = *plVar17;
      uVar6 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar6 == 0) goto LAB_03ec43c0;
      piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      break;
    }
    puVar18 = (undefined8 *)func_0x072ce910(auVar31._0_8_);
    plVar16 = (long *)*puVar18;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar17 != (long *)0x0) {
      lVar23 = *plVar17;
      uVar6 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar6 != 0) {
        piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar18 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar6 = uVar6 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar6 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar18)(plVar17,puVar18[1]);
    }
    if (plVar16 != (long *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar20 + 0x28) == *(long *)((long)&lStack_2a8 + lVar19)) {
      return uVar8;
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar25 = piVar25 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar18 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
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
  lVar20 = auVar29._8_8_;
  *(undefined8 *)(lVar9 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar9 + -0x18) = 0;
  *(long **)(lVar9 + -0x10) = plVar17;
  *(ulong *)(lVar9 + -8) = uVar8;
  puVar18 = *(undefined8 **)(lVar20 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar20 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar20);
      puVar18 = *(undefined8 **)(lVar20 + 0x38);
    }
  }
  *(undefined8 *)(lVar9 + -0x28) = 0;
  uVar26 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar26,0);
  lVar19 = *(long *)(auVar29._0_8_ + 0x10);
  if (lVar19 != 0) {
    uVar6 = func_0x04fe48b0(lVar19,uVar5,lVar9 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar6 & 1) == 0) {
      lVar19 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
      lVar20 = *(long *)(lVar19 + 0x38);
      if (lVar20 == 0) {
        func_0x03256878(lVar19);
        lVar20 = *(long *)(lVar19 + 0x38);
      }
      lVar20 = *(long *)(lVar20 + 0x10);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c();
      }
      if (*(int *)(lVar20 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar20 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c();
      }
      uVar6 = **(ulong **)(lVar20 + 0xb8);
    }
    else {
      uVar6 = func_0x03d2c6a8(*(undefined8 *)(lVar9 + -0x28),
                              *(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x18));
    }
    return uVar6;
  }
  auVar30 = func_0x03280cac();
  lVar20 = auVar30._8_8_;
  *(undefined8 *)(lVar9 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar9 + -0x48) = uVar26;
  *(undefined1 (*) [16])(lVar9 + -0x40) = auVar29;
  puVar18 = *(undefined8 **)(lVar20 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar20 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar20);
      puVar18 = *(undefined8 **)(lVar20 + 0x38);
    }
  }
  *(undefined8 *)(lVar9 + -0x58) = 0;
  uVar26 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar26 = func_0x057a51c4(uVar26,0);
  lVar19 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar19 != 0) {
    uVar6 = func_0x04fe48b0(lVar19,uVar26,lVar9 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar6 & 1) == 0) {
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 8))();
    }
    else {
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 0x18))
                        (*(undefined8 *)(lVar9 + -0x58));
    }
    return uVar6;
  }
  auVar29 = func_0x03280cac();
  lVar20 = auVar29._8_8_;
  *(undefined8 *)(lVar9 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar9 + -0x70) = auVar30;
  puVar18 = *(undefined8 **)(lVar20 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar20 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar20);
      puVar18 = *(undefined8 **)(lVar20 + 0x38);
    }
  }
  *(undefined8 *)(lVar9 + -0x78) = 0;
  uVar26 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar26,0);
  lVar20 = *(long *)(auVar29._0_8_ + 0x10);
  if (lVar20 != 0) {
    uVar6 = func_0x04fe48b0(lVar20,uVar5,lVar9 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    lVar20 = *(long *)(lVar9 + -0x78);
    if (lVar20 != 0) {
      iVar2 = *(int *)(lVar20 + 0x18);
      if (iVar2 < 1) {
        return 0;
      }
      *(undefined4 *)(lVar20 + 0x18) = 0;
      *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar20 + 0x10),0,iVar2,0);
      return 1;
    }
  }
  auVar30 = func_0x03280cac();
  lVar20 = auVar30._8_8_;
  *(undefined8 *)(lVar9 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar9 + -0x90) = uVar26;
  *(long *)(lVar9 + -0x88) = auVar29._0_8_;
  puVar18 = *(undefined8 **)(lVar20 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar20 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar20);
      puVar18 = *(undefined8 **)(lVar20 + 0x38);
    }
  }
  *(undefined8 *)(lVar9 + -0x98) = 0;
  uVar26 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar26,0);
  lVar20 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar20 != 0) {
    uVar6 = func_0x04fe48b0(lVar20,uVar5,lVar9 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar9 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar9 + -0x98) + 0x18));
    }
  }
  auVar29 = func_0x03280cac();
  lVar20 = auVar29._8_8_;
  *(undefined8 *)(lVar9 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar9 + -0xb0) = uVar26;
  *(long *)(lVar9 + -0xa8) = auVar30._0_8_;
  puVar18 = *(undefined8 **)(lVar20 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar20 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar20);
      puVar18 = *(undefined8 **)(lVar20 + 0x38);
    }
  }
  *(undefined8 *)(lVar9 + -0xb8) = 0;
  uVar26 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar26,0);
  lVar20 = *(long *)(auVar29._0_8_ + 0x10);
  if (lVar20 != 0) {
    uVar6 = func_0x04fe48b0(lVar20,uVar5,lVar9 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar9 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar9 + -0xb8) + 0x18));
    }
  }
  auVar30 = func_0x03280cac();
  lVar20 = auVar30._8_8_;
  *(undefined8 *)(lVar9 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar9 + -0xd0) = uVar26;
  *(long *)(lVar9 + -200) = auVar29._0_8_;
  puVar18 = *(undefined8 **)(lVar20 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar18 = *(undefined8 **)(lVar20 + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x03256878(lVar20);
      puVar18 = *(undefined8 **)(lVar20 + 0x38);
    }
  }
  *(undefined8 *)(lVar9 + -0xd8) = 0;
  uVar26 = *puVar18;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar26,0);
  lVar20 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar20 != 0) {
    uVar6 = func_0x04fe48b0(lVar20,uVar5,lVar9 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      if (*(long *)(lVar9 + -0xd8) == 0) goto LAB_03ec4958;
      uVar6 = (ulong)(0 < *(int *)(*(long *)(lVar9 + -0xd8) + 0x18));
    }
    return uVar6;
  }
LAB_03ec4958:
  auVar29 = func_0x03280cac();
  lVar20 = auVar29._8_8_;
  *(undefined8 *)(lVar9 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar9 + -0xf0) = uVar26;
  *(long *)(lVar9 + -0xe8) = auVar30._0_8_;
  puVar18 = *(undefined8 **)(lVar20 + 0x38);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x03256878(lVar20);
    puVar18 = *(undefined8 **)(lVar20 + 0x38);
  }
  uVar6 = (**(code **)*puVar18)(auVar29._0_8_);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 8))(auVar29._0_8_);
  return uVar6;
}

