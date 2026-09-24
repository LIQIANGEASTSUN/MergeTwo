/* Ghidra 12.1.2 native pseudocode; RVA 0x3DC35F8; ContextualizedECS.Context.TickArgs.AddArgument<__Il2CppFullySharedGenericType>; status ok */


/* WARNING: Type propagation algorithm not settling */

ulong ContextualizedECS_Context_TickArgs__AddArgument___Il2CppFullySharedGenericType_
                (ulong param_1,undefined8 *******param_2,ulong param_3,ulong param_4,long param_5)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  undefined1 *puVar27;
  ulong uVar28;
  long unaff_x25;
  ulong unaff_x26;
  long *plVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  long alStack_330 [5];
  long alStack_308 [4];
  long alStack_2e8 [4];
  long alStack_2c8 [4];
  long lStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined8 auStack_288 [3];
  undefined1 auStack_270 [24];
  ulong auStack_258 [5];
  undefined8 uStack_230;
  long lStack_228;
  undefined1 auStack_220 [8];
  long lStack_218;
  undefined1 auStack_210 [8];
  long alStack_208 [12];
  ulong auStack_1a8 [8];
  ulong auStack_168 [8];
  ulong auStack_128 [8];
  ulong auStack_e8 [8];
  ulong auStack_a8 [5];
  undefined1 auStack_80 [8];
  ulong uStack_78;
  undefined8 *******pppppppuStack_70;
  long lStack_68;
  
  lVar22 = tpidr_el0;
  lStack_68 = *(long *)(lVar22 + 0x28);
  plVar20 = *(long **)(param_3 + 0x38);
  uVar19 = param_3;
  pppppppuStack_70 = param_2;
  if (plVar20 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar20 = *(long **)(param_3 + 0x38);
    if (plVar20 == (long *)0x0) {
      func_0x03256878(param_3);
      plVar20 = *(long **)(param_3 + 0x38);
    }
  }
  uVar28 = (ulong)*(uint *)(plVar20[1] + 0xfc);
  lVar23 = -(uVar28 + 0xf & 0x1fffffff0);
  puVar27 = auStack_80 + lVar23;
  uStack_78 = 0;
  lVar26 = *plVar20;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar5 = func_0x057a51c4(lVar26,0);
  uVar18 = param_3;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    param_4 = *(ulong *)PTR_DAT_0777b730;
    uVar6 = func_0x04fe48b0(*(long *)(param_1 + 0x10),lVar5,&uStack_78);
    uVar18 = uStack_78;
    uVar19 = uVar28;
    if ((uVar6 & 1) == 0) {
      unaff_x25 = *(long *)(param_1 + 0x10);
      unaff_x26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(unaff_x26,*(undefined8 *)PTR_DAT_07751030);
      uVar18 = *(ulong *)(param_3 + 0x38);
      pppppppuVar1 = param_2;
      if (-1 < *(int *)(*(long *)(uVar18 + 8) + 0x28)) {
        pppppppuVar1 = &pppppppuStack_70;
      }
      func_0x072ce970(puVar27,pppppppuVar1);
      uVar7 = func_0x03280b94(*(undefined8 *)(uVar18 + 8),puVar27);
      lVar26 = lVar5;
      if (unaff_x26 != 0) {
        lVar21 = *(long *)(unaff_x26 + 0x10);
        lVar24 = *(long *)PTR_DAT_07751038;
        *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
        if (lVar21 != 0) {
          uVar3 = *(uint *)(unaff_x26 + 0x18);
          if (uVar3 < *(uint *)(lVar21 + 0x18)) {
            *(uint *)(unaff_x26 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20) = uVar7;
            func_0x032809c4();
          }
          else {
            uVar19 = *(ulong *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(unaff_x26);
          }
          if (unaff_x25 != 0) {
            param_4 = *(ulong *)PTR_DAT_0777b738;
            uVar19 = unaff_x26;
            func_0x04fe2d68(unaff_x25,lVar5);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar5 = *(long *)(param_3 + 0x38);
    pppppppuVar1 = param_2;
    if (-1 < *(int *)(*(long *)(lVar5 + 8) + 0x28)) {
      pppppppuVar1 = &pppppppuStack_70;
    }
    func_0x072ce970(puVar27,pppppppuVar1);
    uVar7 = func_0x03280b94(*(undefined8 *)(lVar5 + 8),puVar27);
    lVar26 = lVar5;
    if (uVar18 == 0) goto LAB_03ec38b8;
    lVar21 = *(long *)(uVar18 + 0x10);
    lVar24 = *(long *)PTR_DAT_07751038;
    *(int *)(uVar18 + 0x1c) = *(int *)(uVar18 + 0x1c) + 1;
    if (lVar21 == 0) goto LAB_03ec38b8;
    uVar3 = *(uint *)(uVar18 + 0x18);
    if (uVar3 < *(uint *)(lVar21 + 0x18)) {
      *(uint *)(uVar18 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20) = uVar7;
      func_0x032809c4();
    }
    else {
      uVar19 = *(ulong *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(uVar18);
    }
LAB_03ec3884:
    lVar26 = lVar5;
    if (*(long *)(lVar22 + 0x28) == lStack_68) {
      return param_1;
    }
  }
  auVar30 = func_0x072ce990();
  *(undefined8 *)((long)auStack_e8 + lVar23 + 0x38) = 0x3ec38c0;
  *(long *)((long)auStack_a8 + lVar23 + 8) = lVar26;
  *(ulong *)((long)auStack_a8 + lVar23 + 0x10) = uVar18;
  *(undefined8 ********)((long)auStack_a8 + lVar23 + 0x18) = param_2;
  *(ulong *)((long)auStack_a8 + lVar23 + 0x20) = param_1;
  *(undefined8 *)((long)auStack_a8 + lVar23) = 0;
  lVar26 = *(long *)(uVar19 + 0x20);
  uVar18 = uVar19;
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
  lVar26 = *(long *)(uVar19 + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar5 = *(long *)(uVar19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c();
    }
    uVar18 = *(ulong *)(*(long *)(lVar5 + 0xc0) + 0x18);
    uVar6 = func_0x04e81584(lVar26,(long)auStack_a8 + lVar23);
    if ((uVar6 & 1) == 0) {
      lVar5 = *(long *)(uVar19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar6 = func_0x03280ca0();
      lVar5 = *(long *)(uVar19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c(lVar5);
      }
      func_0x04645340(uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      uVar19 = 0;
      if (uVar6 != 0) {
        *(undefined1 (*) [16])(uVar6 + 0x10) = auVar30;
        func_0x032809c4((undefined1 (*) [16])(uVar6 + 0x10),0);
        return uVar6;
      }
    }
    else if (*(long *)((long)auStack_a8 + lVar23) != 0) {
      pauVar8 = (undefined1 (*) [16])(*(long *)((long)auStack_a8 + lVar23) + 0x10);
      *pauVar8 = auVar30;
      func_0x032809c4(pauVar8,0);
      return *(ulong *)((long)auStack_a8 + lVar23);
    }
  }
  auVar31 = func_0x03280cac();
  uVar15 = auVar31._8_8_;
  uVar7 = auVar31._0_8_;
  *(undefined8 *)((long)auStack_e8 + lVar23 + 8) = 0x3ec3a10;
  *(undefined1 **)((long)auStack_e8 + lVar23 + 0x10) = puVar27;
  *(long *)((long)auStack_e8 + lVar23 + 0x18) = lVar26;
  *(ulong *)((long)auStack_e8 + lVar23 + 0x20) = uVar19;
  *(long *)((long)auStack_e8 + lVar23 + 0x28) = auVar30._0_8_;
  *(long *)((long)auStack_e8 + lVar23 + 0x30) = auVar30._8_8_;
  *(undefined8 *)((long)auStack_e8 + lVar23) = 0;
  lVar26 = *(long *)(param_4 + 0x20);
  uVar6 = uVar18;
  uVar19 = param_4;
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
    lVar5 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c();
    }
    uVar6 = *(ulong *)(*(long *)(lVar5 + 0xc0) + 0x18);
    uVar9 = func_0x04e81584(lVar26,(long)auStack_e8 + lVar23);
    if ((uVar9 & 1) == 0) {
      lVar5 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar9 = func_0x03280ca0();
      lVar5 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c(lVar5);
      }
      func_0x046453e4(uVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40));
      param_4 = 0;
      if (uVar9 != 0) {
        *(undefined8 *)(uVar9 + 0x10) = uVar7;
        func_0x032809c4((undefined8 *)(uVar9 + 0x10),uVar7);
        *(undefined8 *)(uVar9 + 0x18) = uVar15;
        *(ulong *)(uVar9 + 0x20) = uVar18;
        func_0x032809c4((undefined8 *)(uVar9 + 0x18),0);
        return uVar9;
      }
    }
    else if (*(long *)((long)auStack_e8 + lVar23) != 0) {
      puVar10 = (undefined8 *)(*(long *)((long)auStack_e8 + lVar23) + 0x10);
      *puVar10 = uVar7;
      func_0x032809c4(puVar10,uVar7);
      lVar5 = *(long *)((long)auStack_e8 + lVar23);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x18) = uVar15;
        *(ulong *)(lVar5 + 0x20) = uVar18;
        func_0x032809c4((undefined8 *)(lVar5 + 0x18),0);
        return *(ulong *)((long)auStack_e8 + lVar23);
      }
    }
  }
  auVar30 = func_0x03280cac();
  uVar16 = auVar30._8_8_;
  uVar11 = auVar30._0_8_;
  *(undefined8 *)((long)auStack_128 + lVar23 + 8) = 0x3ec3b90;
  *(long *)((long)auStack_128 + lVar23 + 0x10) = lVar26;
  *(ulong *)((long)auStack_128 + lVar23 + 0x18) = param_4;
  *(undefined8 *)((long)auStack_128 + lVar23 + 0x20) = uVar7;
  *(undefined8 *)((long)auStack_128 + lVar23 + 0x28) = uVar15;
  *(ulong *)((long)auStack_128 + lVar23 + 0x30) = uVar18;
  *(undefined8 *)((long)auStack_128 + lVar23) = 0;
  lVar26 = *(long *)(uVar19 + 0x20);
  uVar18 = uVar6;
  uVar9 = uVar19;
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
  lVar26 = *(long *)(uVar19 + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar5 = *(long *)(uVar19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c();
    }
    uVar18 = *(ulong *)(*(long *)(lVar5 + 0xc0) + 0x18);
    uVar12 = func_0x04e81584(lVar26,(long)auStack_128 + lVar23);
    if ((uVar12 & 1) == 0) {
      lVar5 = *(long *)(uVar19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar12 = func_0x03280ca0();
      lVar5 = *(long *)(uVar19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c(lVar5);
      }
      func_0x04645488(uVar12,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40));
      uVar19 = 0;
      if (uVar12 != 0) {
        *(undefined8 *)(uVar12 + 0x10) = uVar11;
        func_0x032809c4((undefined8 *)(uVar12 + 0x10),uVar11);
        *(undefined8 *)(uVar12 + 0x18) = uVar16;
        *(ulong *)(uVar12 + 0x20) = uVar6;
        func_0x032809c4((undefined8 *)(uVar12 + 0x18),0);
        return uVar12;
      }
    }
    else if (*(long *)((long)auStack_128 + lVar23) != 0) {
      puVar10 = (undefined8 *)(*(long *)((long)auStack_128 + lVar23) + 0x10);
      *puVar10 = uVar11;
      func_0x032809c4(puVar10,uVar11);
      lVar5 = *(long *)((long)auStack_128 + lVar23);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x18) = uVar16;
        *(ulong *)(lVar5 + 0x20) = uVar6;
        func_0x032809c4((undefined8 *)(lVar5 + 0x18),0);
        return *(ulong *)((long)auStack_128 + lVar23);
      }
    }
  }
  auVar30 = func_0x03280cac();
  uVar15 = auVar30._8_8_;
  uVar7 = auVar30._0_8_;
  *(undefined8 *)((long)auStack_1a8 + lVar23 + 0x38) = 0x3ec3d10;
  *(ulong *)((long)auStack_168 + lVar23 + 8) = uVar28;
  *(long *)((long)auStack_168 + lVar23 + 0x10) = lVar26;
  *(ulong *)((long)auStack_168 + lVar23 + 0x18) = uVar19;
  *(undefined8 *)((long)auStack_168 + lVar23 + 0x20) = uVar11;
  *(undefined8 *)((long)auStack_168 + lVar23 + 0x28) = uVar16;
  *(ulong *)((long)auStack_168 + lVar23 + 0x30) = uVar6;
  *(undefined8 *)((long)auStack_168 + lVar23) = 0;
  lVar5 = *(long *)(param_5 + 0x20);
  uVar19 = uVar18;
  uVar28 = uVar9;
  lVar26 = param_5;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar5 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c();
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 != 0) {
    lVar21 = *(long *)(param_5 + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    uVar19 = *(ulong *)(*(long *)(lVar21 + 0xc0) + 0x18);
    uVar6 = func_0x04e81584(lVar5,(long)auStack_168 + lVar23);
    if ((uVar6 & 1) == 0) {
      lVar21 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar6 = func_0x03280ca0();
      lVar21 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
      }
      func_0x04645704(uVar6,*(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x48));
      param_5 = 0;
      if (uVar6 != 0) {
        *(undefined8 *)(uVar6 + 0x10) = uVar7;
        func_0x032809c4((undefined8 *)(uVar6 + 0x10),uVar7);
        *(undefined8 *)(uVar6 + 0x18) = uVar15;
        *(ulong *)(uVar6 + 0x20) = uVar18;
        func_0x032809c4((undefined8 *)(uVar6 + 0x18),0);
LAB_03ec3e7c:
        *(int *)(uVar6 + 0x28) = (int)uVar9;
        return uVar6;
      }
    }
    else if (*(long *)((long)auStack_168 + lVar23) != 0) {
      puVar10 = (undefined8 *)(*(long *)((long)auStack_168 + lVar23) + 0x10);
      *puVar10 = uVar7;
      func_0x032809c4(puVar10,uVar7);
      lVar21 = *(long *)((long)auStack_168 + lVar23);
      if (lVar21 != 0) {
        *(undefined8 *)(lVar21 + 0x18) = uVar15;
        *(ulong *)(lVar21 + 0x20) = uVar18;
        func_0x032809c4((undefined8 *)(lVar21 + 0x18),0);
        uVar6 = *(ulong *)((long)auStack_168 + lVar23);
        if (uVar6 != 0) goto LAB_03ec3e7c;
        param_5 = 0;
      }
    }
  }
  auVar30 = func_0x03280cac();
  uVar16 = auVar30._8_8_;
  uVar11 = auVar30._0_8_;
  *(undefined8 *)((long)alStack_208 + lVar23 + 0x58) = 0x3ec3ea0;
  *(long *)((long)auStack_1a8 + lVar23 + 8) = lVar5;
  *(long *)((long)auStack_1a8 + lVar23 + 0x10) = param_5;
  *(undefined8 *)((long)auStack_1a8 + lVar23 + 0x18) = uVar7;
  *(undefined8 *)((long)auStack_1a8 + lVar23 + 0x20) = uVar15;
  *(ulong *)((long)auStack_1a8 + lVar23 + 0x28) = uVar18;
  *(ulong *)((long)auStack_1a8 + lVar23 + 0x30) = uVar9 & 0xffffffff;
  *(undefined8 *)((long)auStack_1a8 + lVar23) = 0;
  lVar5 = *(long *)(lVar26 + 0x20);
  uVar18 = uVar19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar5 = *(long *)(lVar26 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c();
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 != 0) {
    lVar21 = *(long *)(lVar26 + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    uVar18 = *(ulong *)(*(long *)(lVar21 + 0xc0) + 0x18);
    uVar6 = func_0x04e81584(lVar5,(long)auStack_1a8 + lVar23);
    if ((uVar6 & 1) == 0) {
      lVar21 = *(long *)(lVar26 + 0x20);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar6 = func_0x03280ca0();
      lVar26 = *(long *)(lVar26 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      func_0x046457b8(uVar6,*(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x48));
      lVar26 = 0;
      if (uVar6 != 0) {
        *(undefined8 *)(uVar6 + 0x10) = uVar11;
        func_0x032809c4((undefined8 *)(uVar6 + 0x10),uVar11);
        *(undefined8 *)(uVar6 + 0x18) = uVar16;
        *(ulong *)(uVar6 + 0x20) = uVar19;
        func_0x032809c4((undefined8 *)(uVar6 + 0x18),0);
LAB_03ec400c:
        *(int *)(uVar6 + 0x28) = (int)uVar28;
        return uVar6;
      }
    }
    else if (*(long *)((long)auStack_1a8 + lVar23) != 0) {
      puVar10 = (undefined8 *)(*(long *)((long)auStack_1a8 + lVar23) + 0x10);
      *puVar10 = uVar11;
      func_0x032809c4(puVar10,uVar11);
      lVar21 = *(long *)((long)auStack_1a8 + lVar23);
      if (lVar21 != 0) {
        *(undefined8 *)(lVar21 + 0x18) = uVar16;
        *(ulong *)(lVar21 + 0x20) = uVar19;
        func_0x032809c4((undefined8 *)(lVar21 + 0x18),0);
        uVar6 = *(ulong *)((long)auStack_1a8 + lVar23);
        if (uVar6 != 0) goto LAB_03ec400c;
        lVar26 = 0;
      }
    }
  }
  auVar30 = func_0x03280cac();
  plVar20 = auVar30._8_8_;
  uVar6 = auVar30._0_8_;
  *(undefined1 **)(auStack_210 + lVar23) = &stack0xffffffffffffffa0;
  *(undefined8 *)((long)alStack_208 + lVar23) = 0x3ec4030;
  *(long *)((long)alStack_208 + lVar23 + 8) = lVar22;
  *(ulong *)((long)alStack_208 + lVar23 + 0x18) = unaff_x26;
  *(long *)((long)alStack_208 + lVar23 + 0x20) = unaff_x25;
  *(long *)((long)alStack_208 + lVar23 + 0x28) = lVar5;
  *(long *)((long)alStack_208 + lVar23 + 0x30) = lVar26;
  *(undefined8 *)((long)alStack_208 + lVar23 + 0x38) = uVar11;
  *(undefined8 *)((long)alStack_208 + lVar23 + 0x40) = uVar16;
  *(ulong *)((long)alStack_208 + lVar23 + 0x48) = uVar19;
  *(ulong *)((long)alStack_208 + lVar23 + 0x50) = uVar28 & 0xffffffff;
  lVar22 = tpidr_el0;
  *(undefined8 *)((long)&lStack_218 + lVar23) = *(undefined8 *)(lVar22 + 0x28);
  plVar29 = *(long **)(uVar18 + 0x38);
  if (plVar29 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar29 = *(long **)(uVar18 + 0x38);
    if (plVar29 == (long *)0x0) {
      func_0x03256878(uVar18);
      plVar29 = *(long **)(uVar18 + 0x38);
    }
  }
  uVar28 = (ulong)*(uint *)(plVar29[4] + 0xfc);
  uVar19 = uVar28 + 0xf & 0x1fffffff0;
  lVar26 = (long)&uStack_230 + (lVar23 - uVar19);
  puVar10 = (undefined8 *)(lVar26 - uVar19);
  lVar5 = (long)puVar10 - uVar19;
  func_0x072ce9a0(lVar5,0,uVar28);
  if (plVar20 == (long *)0x0) {
    func_0x03280cac();
    plVar20 = (long *)0x0;
  }
  else {
    lVar21 = *plVar29;
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c(lVar21);
    }
    lVar24 = *plVar20;
    uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar19 != 0) {
      piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == lVar21) {
          puVar13 = (undefined8 *)(lVar24 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar19 = uVar19 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar19 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar20,lVar21,0);
LAB_03ec4144:
    plVar20 = (long *)(*(code *)*puVar13)(plVar20,puVar13[1]);
    puVar4 = PTR_DAT_0774e8e0;
    if (plVar20 != (long *)0x0) {
      do {
        lVar21 = *plVar20;
        uVar19 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar19 != 0) {
          piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)puVar4) {
              puVar13 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar19 = uVar19 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar4,0);
LAB_03ec41ac:
        uVar19 = (*(code *)*puVar13)(plVar20,puVar13[1]);
        if ((uVar19 & 1) == 0) {
          uVar18 = 0;
          goto LAB_03ec429c;
        }
        lVar21 = *(long *)(*(long *)(uVar18 + 0x38) + 0x10);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
        }
        lVar24 = *plVar20;
        uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar19 != 0) {
          piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar21) {
              lVar21 = lVar24 + (long)*piVar25 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar19 = uVar19 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar19 != 0);
        }
        lVar21 = func_0x03256b10(plVar20,lVar21,0);
LAB_03ec4220:
        *(long *)((long)&lStack_228 + lVar23) = lVar26;
        lVar21 = *(long *)(lVar21 + 8);
        (**(code **)(lVar21 + 0x10))
                  (*(undefined8 *)(lVar21 + 8),lVar21,plVar20,(long)&lStack_228 + lVar23,lVar26);
        func_0x072ce970(lVar5,lVar26,uVar28);
        func_0x072ce970(puVar10,lVar5,uVar28);
        puVar13 = puVar10;
        if (-1 < *(int *)(*(long *)(*(long *)(uVar18 + 0x38) + 0x20) + 0x28)) {
          puVar13 = (undefined8 *)*puVar10;
        }
        puVar17 = *(undefined8 **)(*(long *)(uVar18 + 0x38) + 0x28);
        uVar7 = *puVar17;
        *(undefined8 **)((long)&lStack_228 + lVar23) = puVar13;
        (*(code *)puVar17[2])(uVar7,puVar17,uVar6,(long)&lStack_228 + lVar23,auStack_220 + lVar23);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(uVar18);
  do {
    auVar32 = func_0x072ce990();
    if (auVar32._8_4_ != 1) {
      if (plVar20 == (long *)0x0) goto LAB_03ec43e8;
      lVar22 = *plVar20;
      uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar19 == 0) goto LAB_03ec43c0;
      piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      break;
    }
    puVar14 = (ulong *)func_0x072ce910(auVar32._0_8_);
    uVar18 = *puVar14;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar20 != (long *)0x0) {
      lVar26 = *plVar20;
      uVar19 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar19 != 0) {
        piVar25 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar10 = (undefined8 *)(lVar26 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar19 = uVar19 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar19 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar10)(plVar20,puVar10[1]);
    }
    if (uVar18 != 0) goto LAB_03ec4340;
    if (*(long *)(lVar22 + 0x28) == *(long *)((long)&lStack_218 + lVar23)) {
      return uVar6;
    }
  } while( true );
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar25 = piVar25 + 4;
    if (uVar19 == 0) break;
    if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar10 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar10 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar10)(plVar20,puVar10[1]);
LAB_03ec43e8:
  func_0x03365958(auVar32._0_8_);
  func_0x03280ca4(0);
  auVar30 = func_0x02f09514();
  lVar22 = auVar30._8_8_;
  *(undefined8 *)(lVar5 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar5 + -0x18) = 0;
  *(long **)(lVar5 + -0x10) = plVar20;
  *(ulong *)(lVar5 + -8) = uVar6;
  puVar10 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar10 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar5 + -0x28) = 0;
  uVar7 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar15 = func_0x057a51c4(uVar7,0);
  lVar23 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar23 != 0) {
    uVar19 = func_0x04fe48b0(lVar23,uVar15,lVar5 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      lVar23 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      lVar22 = *(long *)(lVar23 + 0x38);
      if (lVar22 == 0) {
        func_0x03256878(lVar23);
        lVar22 = *(long *)(lVar23 + 0x38);
      }
      lVar22 = *(long *)(lVar22 + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      if (*(int *)(lVar22 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar22 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      uVar19 = **(ulong **)(lVar22 + 0xb8);
    }
    else {
      uVar19 = func_0x03d2c6a8(*(undefined8 *)(lVar5 + -0x28),
                               *(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x18));
    }
    return uVar19;
  }
  auVar31 = func_0x03280cac();
  lVar22 = auVar31._8_8_;
  *(undefined8 *)(lVar5 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar5 + -0x48) = uVar7;
  *(undefined1 (*) [16])(lVar5 + -0x40) = auVar30;
  puVar10 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar10 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar5 + -0x58) = 0;
  uVar7 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar7 = func_0x057a51c4(uVar7,0);
  lVar23 = *(long *)(auVar31._0_8_ + 0x10);
  if (lVar23 != 0) {
    uVar19 = func_0x04fe48b0(lVar23,uVar7,lVar5 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 8))();
    }
    else {
      uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 0x18))
                         (*(undefined8 *)(lVar5 + -0x58));
    }
    return uVar19;
  }
  auVar30 = func_0x03280cac();
  lVar22 = auVar30._8_8_;
  *(undefined8 *)(lVar5 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar5 + -0x70) = auVar31;
  puVar10 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar10 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar5 + -0x78) = 0;
  uVar7 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar15 = func_0x057a51c4(uVar7,0);
  lVar22 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar19 = func_0x04fe48b0(lVar22,uVar15,lVar5 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    lVar22 = *(long *)(lVar5 + -0x78);
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
  auVar31 = func_0x03280cac();
  lVar22 = auVar31._8_8_;
  *(undefined8 *)(lVar5 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar5 + -0x90) = uVar7;
  *(long *)(lVar5 + -0x88) = auVar30._0_8_;
  puVar10 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar10 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar5 + -0x98) = 0;
  uVar7 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar15 = func_0x057a51c4(uVar7,0);
  lVar22 = *(long *)(auVar31._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar19 = func_0x04fe48b0(lVar22,uVar15,lVar5 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar5 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar5 + -0x98) + 0x18));
    }
  }
  auVar30 = func_0x03280cac();
  lVar22 = auVar30._8_8_;
  *(undefined8 *)(lVar5 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar5 + -0xb0) = uVar7;
  *(long *)(lVar5 + -0xa8) = auVar31._0_8_;
  puVar10 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar10 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar5 + -0xb8) = 0;
  uVar7 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar15 = func_0x057a51c4(uVar7,0);
  lVar22 = *(long *)(auVar30._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar19 = func_0x04fe48b0(lVar22,uVar15,lVar5 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar5 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar5 + -0xb8) + 0x18));
    }
  }
  auVar31 = func_0x03280cac();
  lVar22 = auVar31._8_8_;
  *(undefined8 *)(lVar5 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar5 + -0xd0) = uVar7;
  *(long *)(lVar5 + -200) = auVar30._0_8_;
  puVar10 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar10 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar5 + -0xd8) = 0;
  uVar7 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar15 = func_0x057a51c4(uVar7,0);
  lVar22 = *(long *)(auVar31._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar19 = func_0x04fe48b0(lVar22,uVar15,lVar5 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      uVar19 = 0;
    }
    else {
      if (*(long *)(lVar5 + -0xd8) == 0) goto LAB_03ec4958;
      uVar19 = (ulong)(0 < *(int *)(*(long *)(lVar5 + -0xd8) + 0x18));
    }
    return uVar19;
  }
LAB_03ec4958:
  auVar30 = func_0x03280cac();
  lVar22 = auVar30._8_8_;
  *(undefined8 *)(lVar5 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar5 + -0xf0) = uVar7;
  *(long *)(lVar5 + -0xe8) = auVar31._0_8_;
  puVar10 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03256878(lVar22);
    puVar10 = *(undefined8 **)(lVar22 + 0x38);
  }
  uVar19 = (**(code **)*puVar10)(auVar30._0_8_);
  if ((uVar19 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 8))(auVar30._0_8_);
  return uVar19;
}

