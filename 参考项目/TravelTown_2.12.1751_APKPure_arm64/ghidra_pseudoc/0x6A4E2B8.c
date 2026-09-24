/* Ghidra 12.1.2 native pseudocode; RVA 0x6A4E2B8; Merger.MergeBoard.Utils.ExpendSpawnService.AddSpawnFailedResult; status ok */


/* WARNING: Possible PIC construction at 0x06b4e52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b4e768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b4e7ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b4e530) */
/* WARNING: Removing unreachable block (ram,0x06b4e534) */
/* WARNING: Removing unreachable block (ram,0x06b4e54c) */
/* WARNING: Removing unreachable block (ram,0x06b4e554) */
/* WARNING: Removing unreachable block (ram,0x06b4e5ac) */
/* WARNING: Removing unreachable block (ram,0x06b4e5b8) */
/* WARNING: Removing unreachable block (ram,0x06b4e5e4) */
/* WARNING: Removing unreachable block (ram,0x06b4e5f0) */
/* WARNING: Removing unreachable block (ram,0x06b4e5c4) */
/* WARNING: Removing unreachable block (ram,0x06b4e5f4) */
/* WARNING: Removing unreachable block (ram,0x06b4e5d0) */
/* WARNING: Removing unreachable block (ram,0x06b4e5f8) */
/* WARNING: Removing unreachable block (ram,0x06b4e7b0) */
/* WARNING: Removing unreachable block (ram,0x06b4e608) */
/* WARNING: Removing unreachable block (ram,0x06b4e60c) */
/* WARNING: Removing unreachable block (ram,0x06b4e610) */
/* WARNING: Removing unreachable block (ram,0x06b4e62c) */
/* WARNING: Removing unreachable block (ram,0x06b4e634) */
/* WARNING: Removing unreachable block (ram,0x06b4e65c) */
/* WARNING: Removing unreachable block (ram,0x06b4e640) */
/* WARNING: Removing unreachable block (ram,0x06b4e64c) */
/* WARNING: Removing unreachable block (ram,0x06b4e66c) */
/* WARNING: Removing unreachable block (ram,0x06b4e754) */
/* WARNING: Removing unreachable block (ram,0x06b4e76c) */
/* WARNING: Removing unreachable block (ram,0x06b4e7d0) */
/* WARNING: Removing unreachable block (ram,0x06b4e798) */
/* WARNING: Type propagation algorithm not settling */

ulong Merger_MergeBoard_Utils_ExpendSpawnService__AddSpawnFailedResult
                (undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *******pppppppuVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  ulong uVar28;
  long lVar29;
  undefined1 *puVar30;
  long *plVar31;
  long unaff_x25;
  long *unaff_x26;
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
  long *plStack_b8;
  undefined8 *******pppppppuStack_b0;
  long lStack_a8;
  long lStack_38;
  
  if ((bRam0000000007e2a5a7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782ff08);
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0782ff10);
    func_0x03280a18(PTR_DAT_0782ff18);
    bRam0000000007e2a5a7 = 1;
  }
  if (((param_2 == 0) || (plVar12 = *(long **)(param_2 + 0x10), plVar12 == (long *)0x0)) ||
     (uVar13 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0)),
     param_3 == (long *)0x0)) {
LAB_06b4e434:
    func_0x03280cac();
    puVar5 = PTR_DAT_0782ff20;
    lStack_38 = param_4;
    if ((bRam0000000007e2a5a6 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077cd968);
      func_0x03280a18(PTR_DAT_07810470);
      func_0x03280a18(PTR_DAT_07810478);
      func_0x03280a18(PTR_DAT_077c16b0);
      func_0x03280a18(PTR_DAT_0782fe78);
      func_0x03280a18(PTR_DAT_0782fe80);
      func_0x03280a18(PTR_DAT_078103b0);
      func_0x03280a18(PTR_DAT_0782fea8);
      func_0x03280a18(PTR_DAT_0782feb0);
      func_0x03280a18(PTR_DAT_0782ff28);
      func_0x03280a18(PTR_DAT_0782ff20);
      func_0x03280a18(PTR_DAT_0774f158);
      bRam0000000007e2a5a6 = 1;
    }
    uVar26 = func_0x03280ca0(*(undefined8 *)puVar5);
    return uVar26;
  }
  lVar23 = *param_3;
  cVar3 = *(char *)(param_2 + 0x20);
  uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar26 != 0) {
    piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_077c16b0) {
        puVar14 = (undefined8 *)(lVar23 + (long)(*piVar27 + 1) * 0x10 + 0x138);
        goto LAB_06b4e390;
      }
      uVar26 = uVar26 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar26 != 0);
  }
  puVar14 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_077c16b0,1);
LAB_06b4e390:
  uVar13 = (*(code *)*puVar14)(param_3,uVar13,0xffffffff,4,cVar3 != '\0',0,puVar14[1]);
  puVar6 = PTR_DAT_0782ff18;
  puVar5 = PTR_DAT_0782ff08;
  plVar12 = *(long **)(param_2 + 0x10);
  if (plVar12 == (long *)0x0) goto LAB_06b4e434;
  uVar28 = *(ulong *)(param_4 + 0x10);
  uVar26 = (**(code **)(*plVar12 + 0x1e8))(plVar12,*(undefined8 *)(*plVar12 + 0x1f0));
  uVar15 = func_0x03280ca0(*(undefined8 *)puVar5);
  lVar23 = 0;
  func_0x06b9a3cc(uVar15,uVar13,*(undefined8 *)puVar6);
  param_4 = 0;
  if (uVar28 == 0) goto LAB_06b4e434;
  plVar19 = *(long **)PTR_DAT_0782ff10;
  puVar14 = (undefined8 *)plVar19[7];
  plVar12 = plVar19;
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = (undefined8 *)plVar19[7];
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(plVar19);
      puVar14 = (undefined8 *)plVar19[7];
    }
  }
  lStack_38 = 0;
  uVar13 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar13 = func_0x057a51c4(uVar13,0);
  if (*(long *)(uVar28 + 0x10) != 0) {
    plVar12 = &lStack_38;
    uVar26 = *(ulong *)PTR_DAT_0777b730;
    uVar7 = func_0x04fe48b0(*(long *)(uVar28 + 0x10),uVar13);
    if ((uVar7 & 1) == 0) {
      lVar24 = *(long *)(uVar28 + 0x10);
      lVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(lVar20,*(undefined8 *)PTR_DAT_07751030);
      if (lVar20 != 0) {
        lVar29 = *(long *)(lVar20 + 0x10);
        lVar8 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        if (lVar29 != 0) {
          uVar4 = *(uint *)(lVar20 + 0x18);
          if (uVar4 < *(uint *)(lVar29 + 0x18)) {
            *(uint *)(lVar20 + 0x18) = uVar4 + 1;
            puVar14 = (undefined8 *)(lVar29 + (long)(int)uVar4 * 8 + 0x20);
            *puVar14 = uVar15;
            func_0x032809c4(puVar14,uVar15);
          }
          else {
            plVar12 = *(long **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(lVar20,uVar15);
          }
          if (lVar24 != 0) {
            func_0x04fe2d68(lVar24,uVar13,lVar20,*(undefined8 *)PTR_DAT_0777b738);
            return uVar28;
          }
        }
      }
    }
    else if (lStack_38 != 0) {
      lVar20 = *(long *)(lStack_38 + 0x10);
      lVar24 = *(long *)PTR_DAT_07751038;
      *(int *)(lStack_38 + 0x1c) = *(int *)(lStack_38 + 0x1c) + 1;
      if (lVar20 != 0) {
        uVar4 = *(uint *)(lStack_38 + 0x18);
        if (uVar4 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lStack_38 + 0x18) = uVar4 + 1;
          puVar14 = (undefined8 *)(lVar20 + (long)(int)uVar4 * 8 + 0x20);
          *puVar14 = uVar15;
          func_0x032809c4(puVar14,uVar15);
        }
        else {
          func_0x0414446c(lStack_38,uVar15,
                          *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        return uVar28;
      }
    }
  }
  auVar32 = func_0x03280cac();
  pppppppuVar16 = auVar32._8_8_;
  uVar28 = auVar32._0_8_;
  lVar20 = tpidr_el0;
  lStack_a8 = *(long *)(lVar20 + 0x28);
  pppppppuStack_b0 = pppppppuVar16;
  plVar21 = (long *)plVar12[7];
  plVar19 = plVar12;
  if (plVar21 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar21 = (long *)plVar12[7];
    if (plVar21 == (long *)0x0) {
      func_0x03256878(plVar12);
      plVar21 = (long *)plVar12[7];
    }
  }
  plVar31 = (long *)(ulong)*(uint *)(plVar21[1] + 0xfc);
  lVar24 = -((long)plVar31 + 0xfU & 0x1fffffff0);
  puVar30 = auStack_c0 + lVar24;
  plStack_b8 = (long *)0x0;
  lVar29 = *plVar21;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar8 = func_0x057a51c4(lVar29,0);
  plVar21 = plVar12;
  if (*(long *)(uVar28 + 0x10) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    uVar26 = *(ulong *)PTR_DAT_0777b730;
    uVar7 = func_0x04fe48b0(*(long *)(uVar28 + 0x10),lVar8,&plStack_b8);
    plVar21 = plStack_b8;
    plVar19 = plVar31;
    if ((uVar7 & 1) == 0) {
      unaff_x25 = *(long *)(uVar28 + 0x10);
      unaff_x26 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(unaff_x26,*(undefined8 *)PTR_DAT_07751030);
      plVar21 = (long *)plVar12[7];
      pppppppuVar1 = pppppppuVar16;
      if (-1 < *(int *)(plVar21[1] + 0x28)) {
        pppppppuVar1 = &pppppppuStack_b0;
      }
      func_0x072ce970(puVar30,pppppppuVar1);
      uVar13 = func_0x03280b94(plVar21[1],puVar30);
      lVar29 = lVar8;
      if (unaff_x26 != (long *)0x0) {
        lVar22 = unaff_x26[2];
        lVar25 = *(long *)PTR_DAT_07751038;
        *(int *)((long)unaff_x26 + 0x1c) = *(int *)((long)unaff_x26 + 0x1c) + 1;
        if (lVar22 != 0) {
          uVar4 = *(uint *)(unaff_x26 + 3);
          if (uVar4 < *(uint *)(lVar22 + 0x18)) {
            *(uint *)(unaff_x26 + 3) = uVar4 + 1;
            *(undefined8 *)(lVar22 + (long)(int)uVar4 * 8 + 0x20) = uVar13;
            func_0x032809c4();
          }
          else {
            plVar19 = *(long **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(unaff_x26);
          }
          if (unaff_x25 != 0) {
            uVar26 = *(ulong *)PTR_DAT_0777b738;
            plVar19 = unaff_x26;
            func_0x04fe2d68(unaff_x25,lVar8);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar8 = plVar12[7];
    pppppppuVar1 = pppppppuVar16;
    if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
      pppppppuVar1 = &pppppppuStack_b0;
    }
    func_0x072ce970(puVar30,pppppppuVar1);
    uVar13 = func_0x03280b94(*(undefined8 *)(lVar8 + 8),puVar30);
    lVar29 = lVar8;
    if (plVar21 == (long *)0x0) goto LAB_03ec38b8;
    lVar22 = plVar21[2];
    lVar25 = *(long *)PTR_DAT_07751038;
    *(int *)((long)plVar21 + 0x1c) = *(int *)((long)plVar21 + 0x1c) + 1;
    if (lVar22 == 0) goto LAB_03ec38b8;
    uVar4 = *(uint *)(plVar21 + 3);
    if (uVar4 < *(uint *)(lVar22 + 0x18)) {
      *(uint *)(plVar21 + 3) = uVar4 + 1;
      *(undefined8 *)(lVar22 + (long)(int)uVar4 * 8 + 0x20) = uVar13;
      func_0x032809c4();
    }
    else {
      plVar19 = *(long **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(plVar21);
    }
LAB_03ec3884:
    lVar29 = lVar8;
    if (*(long *)(lVar20 + 0x28) == lStack_a8) {
      return uVar28;
    }
  }
  auVar32 = func_0x072ce990();
  *(undefined8 *)((long)auStack_128 + lVar24 + 0x38) = 0x3ec38c0;
  *(long *)((long)auStack_e8 + lVar24 + 8) = lVar29;
  *(long **)((long)auStack_e8 + lVar24 + 0x10) = plVar21;
  *(undefined8 ********)((long)auStack_e8 + lVar24 + 0x18) = pppppppuVar16;
  *(ulong *)((long)auStack_e8 + lVar24 + 0x20) = uVar28;
  *(undefined8 *)((long)auStack_e8 + lVar24) = 0;
  lVar29 = plVar19[4];
  plVar12 = plVar19;
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  if (*(int *)(lVar29 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar29 = plVar19[4];
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = **(long **)(lVar29 + 0xb8);
  if (lVar29 != 0) {
    lVar8 = plVar19[4];
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    plVar12 = *(long **)(*(long *)(lVar8 + 0xc0) + 0x18);
    uVar28 = func_0x04e81584(lVar29,(long)auStack_e8 + lVar24);
    if ((uVar28 & 1) == 0) {
      lVar8 = plVar19[4];
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar28 = func_0x03280ca0();
      lVar8 = plVar19[4];
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      func_0x04645340(uVar28,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
      plVar19 = (long *)0x0;
      if (uVar28 != 0) {
        *(undefined1 (*) [16])(uVar28 + 0x10) = auVar32;
        func_0x032809c4((undefined1 (*) [16])(uVar28 + 0x10),0);
        return uVar28;
      }
    }
    else if (*(long *)((long)auStack_e8 + lVar24) != 0) {
      pauVar9 = (undefined1 (*) [16])(*(long *)((long)auStack_e8 + lVar24) + 0x10);
      *pauVar9 = auVar32;
      func_0x032809c4(pauVar9,0);
      return *(ulong *)((long)auStack_e8 + lVar24);
    }
  }
  auVar33 = func_0x03280cac();
  uVar15 = auVar33._8_8_;
  uVar13 = auVar33._0_8_;
  *(undefined8 *)((long)auStack_128 + lVar24 + 8) = 0x3ec3a10;
  *(undefined1 **)((long)auStack_128 + lVar24 + 0x10) = puVar30;
  *(long *)((long)auStack_128 + lVar24 + 0x18) = lVar29;
  *(long **)((long)auStack_128 + lVar24 + 0x20) = plVar19;
  *(long *)((long)auStack_128 + lVar24 + 0x28) = auVar32._0_8_;
  *(long *)((long)auStack_128 + lVar24 + 0x30) = auVar32._8_8_;
  *(undefined8 *)((long)auStack_128 + lVar24) = 0;
  lVar29 = *(long *)(uVar26 + 0x20);
  plVar19 = plVar12;
  uVar28 = uVar26;
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  if (*(int *)(lVar29 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar29 = *(long *)(uVar26 + 0x20);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = **(long **)(lVar29 + 0xb8);
  if (lVar29 != 0) {
    lVar8 = *(long *)(uVar26 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    plVar19 = *(long **)(*(long *)(lVar8 + 0xc0) + 0x18);
    uVar7 = func_0x04e81584(lVar29,(long)auStack_128 + lVar24);
    if ((uVar7 & 1) == 0) {
      lVar8 = *(long *)(uVar26 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar7 = func_0x03280ca0();
      lVar8 = *(long *)(uVar26 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      func_0x046453e4(uVar7,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40));
      uVar26 = 0;
      if (uVar7 != 0) {
        *(undefined8 *)(uVar7 + 0x10) = uVar13;
        func_0x032809c4((undefined8 *)(uVar7 + 0x10),uVar13);
        *(undefined8 *)(uVar7 + 0x18) = uVar15;
        *(long **)(uVar7 + 0x20) = plVar12;
        func_0x032809c4((undefined8 *)(uVar7 + 0x18),0);
        return uVar7;
      }
    }
    else if (*(long *)((long)auStack_128 + lVar24) != 0) {
      puVar14 = (undefined8 *)(*(long *)((long)auStack_128 + lVar24) + 0x10);
      *puVar14 = uVar13;
      func_0x032809c4(puVar14,uVar13);
      lVar8 = *(long *)((long)auStack_128 + lVar24);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x18) = uVar15;
        *(long **)(lVar8 + 0x20) = plVar12;
        func_0x032809c4((undefined8 *)(lVar8 + 0x18),0);
        return *(ulong *)((long)auStack_128 + lVar24);
      }
    }
  }
  auVar32 = func_0x03280cac();
  uVar17 = auVar32._8_8_;
  uVar10 = auVar32._0_8_;
  *(undefined8 *)((long)auStack_168 + lVar24 + 8) = 0x3ec3b90;
  *(long *)((long)auStack_168 + lVar24 + 0x10) = lVar29;
  *(ulong *)((long)auStack_168 + lVar24 + 0x18) = uVar26;
  *(undefined8 *)((long)auStack_168 + lVar24 + 0x20) = uVar13;
  *(undefined8 *)((long)auStack_168 + lVar24 + 0x28) = uVar15;
  *(long **)((long)auStack_168 + lVar24 + 0x30) = plVar12;
  *(undefined8 *)((long)auStack_168 + lVar24) = 0;
  lVar29 = *(long *)(uVar28 + 0x20);
  plVar12 = plVar19;
  uVar26 = uVar28;
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  if (*(int *)(lVar29 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar29 = *(long *)(uVar28 + 0x20);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = **(long **)(lVar29 + 0xb8);
  if (lVar29 != 0) {
    lVar8 = *(long *)(uVar28 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    plVar12 = *(long **)(*(long *)(lVar8 + 0xc0) + 0x18);
    uVar7 = func_0x04e81584(lVar29,(long)auStack_168 + lVar24);
    if ((uVar7 & 1) == 0) {
      lVar8 = *(long *)(uVar28 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar7 = func_0x03280ca0();
      lVar8 = *(long *)(uVar28 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      func_0x04645488(uVar7,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40));
      uVar28 = 0;
      if (uVar7 != 0) {
        *(undefined8 *)(uVar7 + 0x10) = uVar10;
        func_0x032809c4((undefined8 *)(uVar7 + 0x10),uVar10);
        *(undefined8 *)(uVar7 + 0x18) = uVar17;
        *(long **)(uVar7 + 0x20) = plVar19;
        func_0x032809c4((undefined8 *)(uVar7 + 0x18),0);
        return uVar7;
      }
    }
    else if (*(long *)((long)auStack_168 + lVar24) != 0) {
      puVar14 = (undefined8 *)(*(long *)((long)auStack_168 + lVar24) + 0x10);
      *puVar14 = uVar10;
      func_0x032809c4(puVar14,uVar10);
      lVar8 = *(long *)((long)auStack_168 + lVar24);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x18) = uVar17;
        *(long **)(lVar8 + 0x20) = plVar19;
        func_0x032809c4((undefined8 *)(lVar8 + 0x18),0);
        return *(ulong *)((long)auStack_168 + lVar24);
      }
    }
  }
  auVar32 = func_0x03280cac();
  uVar15 = auVar32._8_8_;
  uVar13 = auVar32._0_8_;
  *(undefined8 *)((long)auStack_1e8 + lVar24 + 0x38) = 0x3ec3d10;
  *(long **)((long)auStack_1a8 + lVar24 + 8) = plVar31;
  *(long *)((long)auStack_1a8 + lVar24 + 0x10) = lVar29;
  *(ulong *)((long)auStack_1a8 + lVar24 + 0x18) = uVar28;
  *(undefined8 *)((long)auStack_1a8 + lVar24 + 0x20) = uVar10;
  *(undefined8 *)((long)auStack_1a8 + lVar24 + 0x28) = uVar17;
  *(long **)((long)auStack_1a8 + lVar24 + 0x30) = plVar19;
  *(undefined8 *)((long)auStack_1a8 + lVar24) = 0;
  lVar8 = *(long *)(lVar23 + 0x20);
  plVar19 = plVar12;
  uVar28 = uVar26;
  lVar29 = lVar23;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c(lVar8);
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar8 = *(long *)(lVar23 + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (lVar8 != 0) {
    lVar22 = *(long *)(lVar23 + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    plVar19 = *(long **)(*(long *)(lVar22 + 0xc0) + 0x18);
    uVar7 = func_0x04e81584(lVar8,(long)auStack_1a8 + lVar24);
    if ((uVar7 & 1) == 0) {
      lVar22 = *(long *)(lVar23 + 0x20);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar7 = func_0x03280ca0();
      lVar23 = *(long *)(lVar23 + 0x20);
      if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x0325681c(lVar23);
      }
      func_0x04645704(uVar7,*(undefined8 *)(*(long *)(lVar23 + 0xc0) + 0x48));
      lVar23 = 0;
      if (uVar7 != 0) {
        *(undefined8 *)(uVar7 + 0x10) = uVar13;
        func_0x032809c4((undefined8 *)(uVar7 + 0x10),uVar13);
        *(undefined8 *)(uVar7 + 0x18) = uVar15;
        *(long **)(uVar7 + 0x20) = plVar12;
        func_0x032809c4((undefined8 *)(uVar7 + 0x18),0);
LAB_03ec3e7c:
        *(int *)(uVar7 + 0x28) = (int)uVar26;
        return uVar7;
      }
    }
    else if (*(long *)((long)auStack_1a8 + lVar24) != 0) {
      puVar14 = (undefined8 *)(*(long *)((long)auStack_1a8 + lVar24) + 0x10);
      *puVar14 = uVar13;
      func_0x032809c4(puVar14,uVar13);
      lVar22 = *(long *)((long)auStack_1a8 + lVar24);
      if (lVar22 != 0) {
        *(undefined8 *)(lVar22 + 0x18) = uVar15;
        *(long **)(lVar22 + 0x20) = plVar12;
        func_0x032809c4((undefined8 *)(lVar22 + 0x18),0);
        uVar7 = *(ulong *)((long)auStack_1a8 + lVar24);
        if (uVar7 != 0) goto LAB_03ec3e7c;
        lVar23 = 0;
      }
    }
  }
  auVar32 = func_0x03280cac();
  uVar17 = auVar32._8_8_;
  uVar10 = auVar32._0_8_;
  *(undefined8 *)((long)alStack_248 + lVar24 + 0x58) = 0x3ec3ea0;
  *(long *)((long)auStack_1e8 + lVar24 + 8) = lVar8;
  *(long *)((long)auStack_1e8 + lVar24 + 0x10) = lVar23;
  *(undefined8 *)((long)auStack_1e8 + lVar24 + 0x18) = uVar13;
  *(undefined8 *)((long)auStack_1e8 + lVar24 + 0x20) = uVar15;
  *(long **)((long)auStack_1e8 + lVar24 + 0x28) = plVar12;
  *(ulong *)((long)auStack_1e8 + lVar24 + 0x30) = uVar26 & 0xffffffff;
  *(undefined8 *)((long)auStack_1e8 + lVar24) = 0;
  lVar23 = *(long *)(lVar29 + 0x20);
  plVar12 = plVar19;
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
  lVar23 = *(long *)(lVar29 + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = **(long **)(lVar23 + 0xb8);
  if (lVar23 != 0) {
    lVar8 = *(long *)(lVar29 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    plVar12 = *(long **)(*(long *)(lVar8 + 0xc0) + 0x18);
    uVar26 = func_0x04e81584(lVar23,(long)auStack_1e8 + lVar24);
    if ((uVar26 & 1) == 0) {
      lVar8 = *(long *)(lVar29 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar26 = func_0x03280ca0();
      lVar29 = *(long *)(lVar29 + 0x20);
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c(lVar29);
      }
      func_0x046457b8(uVar26,*(undefined8 *)(*(long *)(lVar29 + 0xc0) + 0x48));
      lVar29 = 0;
      if (uVar26 != 0) {
        *(undefined8 *)(uVar26 + 0x10) = uVar10;
        func_0x032809c4((undefined8 *)(uVar26 + 0x10),uVar10);
        *(undefined8 *)(uVar26 + 0x18) = uVar17;
        *(long **)(uVar26 + 0x20) = plVar19;
        func_0x032809c4((undefined8 *)(uVar26 + 0x18),0);
LAB_03ec400c:
        *(int *)(uVar26 + 0x28) = (int)uVar28;
        return uVar26;
      }
    }
    else if (*(long *)((long)auStack_1e8 + lVar24) != 0) {
      puVar14 = (undefined8 *)(*(long *)((long)auStack_1e8 + lVar24) + 0x10);
      *puVar14 = uVar10;
      func_0x032809c4(puVar14,uVar10);
      lVar8 = *(long *)((long)auStack_1e8 + lVar24);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x18) = uVar17;
        *(long **)(lVar8 + 0x20) = plVar19;
        func_0x032809c4((undefined8 *)(lVar8 + 0x18),0);
        uVar26 = *(ulong *)((long)auStack_1e8 + lVar24);
        if (uVar26 != 0) goto LAB_03ec400c;
        lVar29 = 0;
      }
    }
  }
  auVar32 = func_0x03280cac();
  plVar21 = auVar32._8_8_;
  uVar26 = auVar32._0_8_;
  *(undefined1 **)(auStack_250 + lVar24) = &stack0xffffffffffffff60;
  *(undefined8 *)((long)alStack_248 + lVar24) = 0x3ec4030;
  *(long *)((long)alStack_248 + lVar24 + 8) = lVar20;
  *(long **)((long)alStack_248 + lVar24 + 0x18) = unaff_x26;
  *(long *)((long)alStack_248 + lVar24 + 0x20) = unaff_x25;
  *(long *)((long)alStack_248 + lVar24 + 0x28) = lVar23;
  *(long *)((long)alStack_248 + lVar24 + 0x30) = lVar29;
  *(undefined8 *)((long)alStack_248 + lVar24 + 0x38) = uVar10;
  *(undefined8 *)((long)alStack_248 + lVar24 + 0x40) = uVar17;
  *(long **)((long)alStack_248 + lVar24 + 0x48) = plVar19;
  *(ulong *)((long)alStack_248 + lVar24 + 0x50) = uVar28 & 0xffffffff;
  lVar23 = tpidr_el0;
  *(undefined8 *)((long)&lStack_258 + lVar24) = *(undefined8 *)(lVar23 + 0x28);
  plVar19 = (long *)plVar12[7];
  if (plVar19 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar19 = (long *)plVar12[7];
    if (plVar19 == (long *)0x0) {
      func_0x03256878(plVar12);
      plVar19 = (long *)plVar12[7];
    }
  }
  uVar7 = (ulong)*(uint *)(plVar19[4] + 0xfc);
  uVar28 = uVar7 + 0xf & 0x1fffffff0;
  lVar20 = (long)&uStack_270 + (lVar24 - uVar28);
  puVar14 = (undefined8 *)(lVar20 - uVar28);
  lVar29 = (long)puVar14 - uVar28;
  func_0x072ce9a0(lVar29,0,uVar7);
  if (plVar21 == (long *)0x0) {
    func_0x03280cac();
    plVar19 = (long *)0x0;
  }
  else {
    lVar8 = *plVar19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c(lVar8);
    }
    lVar22 = *plVar21;
    uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar28 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == lVar8) {
          puVar11 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar28 = uVar28 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar28 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar21,lVar8,0);
LAB_03ec4144:
    plVar19 = (long *)(*(code *)*puVar11)(plVar21,puVar11[1]);
    puVar5 = PTR_DAT_0774e8e0;
    if (plVar19 != (long *)0x0) {
      do {
        lVar8 = *plVar19;
        uVar28 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar28 != 0) {
          piVar27 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)puVar5) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar28 = uVar28 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar28 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar5,0);
LAB_03ec41ac:
        uVar28 = (*(code *)*puVar11)(plVar19,puVar11[1]);
        if ((uVar28 & 1) == 0) {
          plVar12 = (long *)0x0;
          goto LAB_03ec429c;
        }
        lVar8 = *(long *)(plVar12[7] + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c(lVar8);
        }
        lVar22 = *plVar19;
        uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar28 != 0) {
          piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar8) {
              lVar8 = lVar22 + (long)*piVar27 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar28 = uVar28 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar28 != 0);
        }
        lVar8 = func_0x03256b10(plVar19,lVar8,0);
LAB_03ec4220:
        *(long *)((long)&lStack_268 + lVar24) = lVar20;
        lVar8 = *(long *)(lVar8 + 8);
        (**(code **)(lVar8 + 0x10))
                  (*(undefined8 *)(lVar8 + 8),lVar8,plVar19,(long)&lStack_268 + lVar24,lVar20);
        func_0x072ce970(lVar29,lVar20,uVar7);
        func_0x072ce970(puVar14,lVar29,uVar7);
        puVar11 = puVar14;
        if (-1 < *(int *)(*(long *)(plVar12[7] + 0x20) + 0x28)) {
          puVar11 = (undefined8 *)*puVar14;
        }
        puVar18 = *(undefined8 **)(plVar12[7] + 0x28);
        uVar13 = *puVar18;
        *(undefined8 **)((long)&lStack_268 + lVar24) = puVar11;
        (*(code *)puVar18[2])(uVar13,puVar18,uVar26,(long)&lStack_268 + lVar24,auStack_260 + lVar24)
        ;
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(plVar12);
  do {
    auVar34 = func_0x072ce990();
    if (auVar34._8_4_ != 1) {
      if (plVar19 == (long *)0x0) goto LAB_03ec43e8;
      lVar23 = *plVar19;
      uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar28 == 0) goto LAB_03ec43c0;
      piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      break;
    }
    puVar14 = (undefined8 *)func_0x072ce910(auVar34._0_8_);
    plVar12 = (long *)*puVar14;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar19 != (long *)0x0) {
      lVar20 = *plVar19;
      uVar28 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar28 != 0) {
        piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar14 = (undefined8 *)(lVar20 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar28 = uVar28 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar28 != 0);
      }
      puVar14 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar14)(plVar19,puVar14[1]);
    }
    if (plVar12 != (long *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar23 + 0x28) == *(long *)((long)&lStack_258 + lVar24)) {
      return uVar26;
    }
  } while( true );
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar27 = piVar27 + 4;
    if (uVar28 == 0) break;
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar14 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar14)(plVar19,puVar14[1]);
LAB_03ec43e8:
  func_0x03365958(auVar34._0_8_);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  lVar23 = auVar32._8_8_;
  *(undefined8 *)(lVar29 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar29 + -0x18) = 0;
  *(long **)(lVar29 + -0x10) = plVar19;
  *(ulong *)(lVar29 + -8) = uVar26;
  puVar14 = *(undefined8 **)(lVar23 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar23 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar23);
      puVar14 = *(undefined8 **)(lVar23 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0x28) = 0;
  uVar13 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar15 = func_0x057a51c4(uVar13,0);
  lVar20 = *(long *)(auVar32._0_8_ + 0x10);
  if (lVar20 != 0) {
    uVar26 = func_0x04fe48b0(lVar20,uVar15,lVar29 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar26 & 1) == 0) {
      lVar20 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
      lVar23 = *(long *)(lVar20 + 0x38);
      if (lVar23 == 0) {
        func_0x03256878(lVar20);
        lVar23 = *(long *)(lVar20 + 0x38);
      }
      lVar23 = *(long *)(lVar23 + 0x10);
      if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x0325681c();
      }
      if (*(int *)(lVar23 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar23 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
      if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x0325681c();
      }
      uVar26 = **(ulong **)(lVar23 + 0xb8);
    }
    else {
      uVar26 = func_0x03d2c6a8(*(undefined8 *)(lVar29 + -0x28),
                               *(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x18));
    }
    return uVar26;
  }
  auVar33 = func_0x03280cac();
  lVar23 = auVar33._8_8_;
  *(undefined8 *)(lVar29 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar29 + -0x48) = uVar13;
  *(undefined1 (*) [16])(lVar29 + -0x40) = auVar32;
  puVar14 = *(undefined8 **)(lVar23 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar23 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar23);
      puVar14 = *(undefined8 **)(lVar23 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0x58) = 0;
  uVar13 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar13 = func_0x057a51c4(uVar13,0);
  lVar20 = *(long *)(auVar33._0_8_ + 0x10);
  if (lVar20 != 0) {
    uVar26 = func_0x04fe48b0(lVar20,uVar13,lVar29 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar26 & 1) == 0) {
      uVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 8))();
    }
    else {
      uVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 0x18))
                         (*(undefined8 *)(lVar29 + -0x58));
    }
    return uVar26;
  }
  auVar32 = func_0x03280cac();
  lVar23 = auVar32._8_8_;
  *(undefined8 *)(lVar29 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar29 + -0x70) = auVar33;
  puVar14 = *(undefined8 **)(lVar23 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar23 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar23);
      puVar14 = *(undefined8 **)(lVar23 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0x78) = 0;
  uVar13 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar15 = func_0x057a51c4(uVar13,0);
  lVar23 = *(long *)(auVar32._0_8_ + 0x10);
  if (lVar23 != 0) {
    uVar26 = func_0x04fe48b0(lVar23,uVar15,lVar29 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar26 & 1) == 0) {
      return 0;
    }
    lVar23 = *(long *)(lVar29 + -0x78);
    if (lVar23 != 0) {
      iVar2 = *(int *)(lVar23 + 0x18);
      if (iVar2 < 1) {
        return 0;
      }
      *(undefined4 *)(lVar23 + 0x18) = 0;
      *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar23 + 0x10),0,iVar2,0);
      return 1;
    }
  }
  auVar33 = func_0x03280cac();
  lVar23 = auVar33._8_8_;
  *(undefined8 *)(lVar29 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar29 + -0x90) = uVar13;
  *(long *)(lVar29 + -0x88) = auVar32._0_8_;
  puVar14 = *(undefined8 **)(lVar23 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar23 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar23);
      puVar14 = *(undefined8 **)(lVar23 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0x98) = 0;
  uVar13 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar15 = func_0x057a51c4(uVar13,0);
  lVar23 = *(long *)(auVar33._0_8_ + 0x10);
  if (lVar23 != 0) {
    uVar26 = func_0x04fe48b0(lVar23,uVar15,lVar29 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar26 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar29 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar29 + -0x98) + 0x18));
    }
  }
  auVar32 = func_0x03280cac();
  lVar23 = auVar32._8_8_;
  *(undefined8 *)(lVar29 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar29 + -0xb0) = uVar13;
  *(long *)(lVar29 + -0xa8) = auVar33._0_8_;
  puVar14 = *(undefined8 **)(lVar23 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar23 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar23);
      puVar14 = *(undefined8 **)(lVar23 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0xb8) = 0;
  uVar13 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar15 = func_0x057a51c4(uVar13,0);
  lVar23 = *(long *)(auVar32._0_8_ + 0x10);
  if (lVar23 != 0) {
    uVar26 = func_0x04fe48b0(lVar23,uVar15,lVar29 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar26 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar29 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar29 + -0xb8) + 0x18));
    }
  }
  auVar33 = func_0x03280cac();
  lVar23 = auVar33._8_8_;
  *(undefined8 *)(lVar29 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar29 + -0xd0) = uVar13;
  *(long *)(lVar29 + -200) = auVar32._0_8_;
  puVar14 = *(undefined8 **)(lVar23 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar23 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar23);
      puVar14 = *(undefined8 **)(lVar23 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0xd8) = 0;
  uVar13 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar15 = func_0x057a51c4(uVar13,0);
  lVar23 = *(long *)(auVar33._0_8_ + 0x10);
  if (lVar23 != 0) {
    uVar26 = func_0x04fe48b0(lVar23,uVar15,lVar29 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar26 & 1) == 0) {
      uVar26 = 0;
    }
    else {
      if (*(long *)(lVar29 + -0xd8) == 0) goto LAB_03ec4958;
      uVar26 = (ulong)(0 < *(int *)(*(long *)(lVar29 + -0xd8) + 0x18));
    }
    return uVar26;
  }
LAB_03ec4958:
  auVar32 = func_0x03280cac();
  lVar23 = auVar32._8_8_;
  *(undefined8 *)(lVar29 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar29 + -0xf0) = uVar13;
  *(long *)(lVar29 + -0xe8) = auVar33._0_8_;
  puVar14 = *(undefined8 **)(lVar23 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03256878(lVar23);
    puVar14 = *(undefined8 **)(lVar23 + 0x38);
  }
  uVar26 = (**(code **)*puVar14)(auVar32._0_8_);
  if ((uVar26 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 8))(auVar32._0_8_);
  return uVar26;
}

