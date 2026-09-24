/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6D320; Merger.MergeBoard.Systems.ItemDiscoverySystem.OnItemDiscovered; status ok */


ulong Merger_MergeBoard_Systems_ItemDiscoverySystem__OnItemDiscovered
                (long param_1,long *param_2,long param_3,ulong param_4,long param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar21;
  undefined1 *puVar22;
  long unaff_x21;
  long *plVar23;
  long unaff_x22;
  undefined1 *puVar24;
  long unaff_x23;
  undefined1 *puVar25;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined1 *unaff_x26;
  long *plVar26;
  undefined8 unaff_x27;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  
  lVar13 = param_3;
  if ((bRam0000000007e2a6cf & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d8f78);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_07831048);
    func_0x03280a18(PTR_DAT_07831050);
    bRam0000000007e2a6cf = 1;
  }
  lVar15 = 0x7e2a000;
  if (param_2 == (long *)0x0) {
LAB_06b6d4b0:
    unaff_x22 = lVar15;
    unaff_x21 = param_1;
    unaff_x20 = param_3;
    auVar27 = func_0x03280cac();
    plVar23 = auVar27._8_8_;
    if ((bRam0000000007e2a6d0 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077d8f78);
      func_0x03280a18(PTR_DAT_07779820);
      func_0x03280a18(PTR_DAT_07831058);
      func_0x03280a18(PTR_DAT_07831060);
      bRam0000000007e2a6d0 = 1;
    }
    if (plVar23 == (long *)0x0) {
SUB_057da5fc:
      uVar19 = func_0x03280cac();
      return uVar19;
    }
    lVar15 = *plVar23;
    plVar26 = *(long **)(auVar27._0_8_ + 0x10);
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07779820) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b6d570;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_07779820,0);
LAB_06b6d570:
    uVar21 = (*(code *)*puVar10)(plVar23,puVar10[1]);
    if (plVar26 == (long *)0x0) goto SUB_057da5fc;
    lVar15 = *plVar26;
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_077d8f78) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_06b6d5dc;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_077d8f78,1);
LAB_06b6d5dc:
    uVar19 = (*(code *)*puVar10)(plVar26,uVar21,puVar10[1]);
    if ((uVar19 & 1) != 0) {
      return uVar19;
    }
    uVar19 = *(ulong *)(param_4 + 0x10);
    param_1 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831058);
    param_4 = 0;
    func_0x06b9a7c4(param_1,plVar23,lVar13);
    if (uVar19 == 0) goto SUB_057da5fc;
    puVar14 = *(undefined1 **)PTR_DAT_07831060;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x30 = 0x6b6d4b4;
  }
  else {
    lVar17 = *param_2;
    plVar23 = *(long **)(param_1 + 0x10);
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07779820) {
          puVar10 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b6d3d8;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    lVar13 = 0;
    puVar10 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06b6d3d8:
    lVar17 = (*(code *)*puVar10)(param_2,puVar10[1]);
    param_1 = 0;
    if (plVar23 == (long *)0x0) goto LAB_06b6d4b0;
    lVar13 = *plVar23;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_077d8f78) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b6d440;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_077d8f78,0);
LAB_06b6d440:
    uVar19 = (*(code *)*puVar10)(plVar23,lVar17,puVar10[1]);
    if ((uVar19 & 1) != 0) {
      return uVar19;
    }
    uVar19 = *(ulong *)(param_3 + 0x10);
    param_1 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831048);
    lVar13 = 0;
    func_0x06b9a874(param_1,param_2,0);
    param_3 = 0;
    lVar15 = lVar17;
    if (uVar19 == 0) goto LAB_06b6d4b0;
    puVar14 = *(undefined1 **)PTR_DAT_07831050;
    param_2 = unaff_x19;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(long **)((long)register0x00000008 + -8) = param_2;
  puVar10 = *(undefined8 **)(puVar14 + 0x38);
  puVar22 = puVar14;
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(puVar14 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(puVar14);
      puVar10 = *(undefined8 **)(puVar14 + 0x38);
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
  uVar21 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar21,0);
  if (*(long *)(uVar19 + 0x10) != 0) {
    puVar22 = (undefined1 *)((long)register0x00000008 + -0x38);
    param_4 = *(ulong *)PTR_DAT_0777b730;
    uVar6 = func_0x04fe48b0(*(long *)(uVar19 + 0x10),uVar5);
    uVar21 = uVar5;
    if ((uVar6 & 1) == 0) {
      unaff_x22 = *(long *)(uVar19 + 0x10);
      unaff_x23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(unaff_x23,*(undefined8 *)PTR_DAT_07751030);
      if (unaff_x23 != 0) {
        lVar13 = *(long *)(unaff_x23 + 0x10);
        lVar15 = *(long *)PTR_DAT_07751038;
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar13 != 0) {
          uVar3 = *(uint *)(unaff_x23 + 0x18);
          if (uVar3 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(unaff_x23 + 0x18) = uVar3 + 1;
            plVar23 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
            *plVar23 = param_1;
            func_0x032809c4(plVar23,param_1);
          }
          else {
            puVar22 = *(undefined1 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(unaff_x23,param_1);
          }
          if (unaff_x22 != 0) {
            func_0x04fe2d68(unaff_x22,uVar5,unaff_x23,*(undefined8 *)PTR_DAT_0777b738);
            return uVar19;
          }
        }
      }
    }
    else {
      lVar13 = *(long *)((long)register0x00000008 + -0x38);
      if (lVar13 != 0) {
        lVar15 = *(long *)(lVar13 + 0x10);
        lVar17 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar3 = *(uint *)(lVar13 + 0x18);
          if (uVar3 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar3 + 1;
            plVar23 = (long *)(lVar15 + (long)(int)uVar3 * 8 + 0x20);
            *plVar23 = param_1;
            func_0x032809c4(plVar23,param_1);
          }
          else {
            func_0x0414446c(lVar13,param_1,
                            *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          return uVar19;
        }
      }
    }
  }
  auVar27 = func_0x03280cac();
  puVar11 = auVar27._8_8_;
  uVar6 = auVar27._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3ec35f8;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x27;
  *(undefined1 **)((long)register0x00000008 + -0x80) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x78) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x60) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar21;
  *(long *)((long)register0x00000008 + -0x50) = param_1;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar19;
  lVar13 = tpidr_el0;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = *(undefined8 *)(lVar13 + 0x28);
  *(undefined1 **)((long)register0x00000008 + -0xb0) = puVar11;
  plVar23 = *(long **)(puVar22 + 0x38);
  puVar14 = puVar22;
  if (plVar23 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar23 = *(long **)(puVar22 + 0x38);
    if (plVar23 == (long *)0x0) {
      func_0x03256878(puVar22);
      plVar23 = *(long **)(puVar22 + 0x38);
    }
  }
  puVar25 = (undefined1 *)(ulong)*(uint *)(plVar23[1] + 0xfc);
  puVar24 = (undefined1 *)
            ((long)register0x00000008 + (-0xc0 - ((ulong)(puVar25 + 0xf) & 0x1fffffff0)));
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
  lVar15 = *plVar23;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar17 = func_0x057a51c4(lVar15,0);
  if (*(long *)(uVar6 + 0x10) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    param_4 = *(ulong *)PTR_DAT_0777b730;
    uVar19 = func_0x04fe48b0(*(long *)(uVar6 + 0x10),lVar17,
                             (undefined1 *)((long)register0x00000008 + -0xb8));
    puVar14 = puVar25;
    if ((uVar19 & 1) == 0) {
      unaff_x25 = *(long *)(uVar6 + 0x10);
      unaff_x26 = (undefined1 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(unaff_x26,*(undefined8 *)PTR_DAT_07751030);
      puVar22 = *(undefined1 **)(puVar22 + 0x38);
      puVar1 = puVar11;
      if (-1 < *(int *)(*(long *)(puVar22 + 8) + 0x28)) {
        puVar1 = (undefined1 *)((long)register0x00000008 + -0xb0);
      }
      func_0x072ce970(puVar24,puVar1);
      uVar21 = func_0x03280b94(*(undefined8 *)(puVar22 + 8),puVar24);
      lVar15 = lVar17;
      if (unaff_x26 != (undefined1 *)0x0) {
        lVar16 = *(long *)(unaff_x26 + 0x10);
        lVar18 = *(long *)PTR_DAT_07751038;
        *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
        if (lVar16 != 0) {
          uVar3 = *(uint *)(unaff_x26 + 0x18);
          if (uVar3 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(unaff_x26 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20) = uVar21;
            func_0x032809c4();
          }
          else {
            puVar14 = *(undefined1 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(unaff_x26);
          }
          if (unaff_x25 != 0) {
            param_4 = *(ulong *)PTR_DAT_0777b738;
            puVar14 = unaff_x26;
            func_0x04fe2d68(unaff_x25,lVar17);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar17 = *(long *)(puVar22 + 0x38);
    puVar22 = *(undefined1 **)((long)register0x00000008 + -0xb8);
    puVar1 = puVar11;
    if (-1 < *(int *)(*(long *)(lVar17 + 8) + 0x28)) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0xb0);
    }
    func_0x072ce970(puVar24,puVar1);
    uVar21 = func_0x03280b94(*(undefined8 *)(lVar17 + 8),puVar24);
    lVar15 = lVar17;
    if (puVar22 == (undefined1 *)0x0) goto LAB_03ec38b8;
    lVar16 = *(long *)(puVar22 + 0x10);
    lVar18 = *(long *)PTR_DAT_07751038;
    *(int *)(puVar22 + 0x1c) = *(int *)(puVar22 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_03ec38b8;
    uVar3 = *(uint *)(puVar22 + 0x18);
    if (uVar3 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(puVar22 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20) = uVar21;
      func_0x032809c4();
    }
    else {
      puVar14 = *(undefined1 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(puVar22);
    }
LAB_03ec3884:
    lVar15 = lVar17;
    if (*(long *)(lVar13 + 0x28) == *(long *)((long)register0x00000008 + -0xa8)) {
      return uVar6;
    }
  }
  auVar27 = func_0x072ce990();
  *(undefined8 *)(puVar24 + -0x30) = 0x3ec38c0;
  *(long *)(puVar24 + -0x20) = lVar15;
  *(undefined1 **)(puVar24 + -0x18) = puVar22;
  *(undefined1 **)(puVar24 + -0x10) = puVar11;
  *(ulong *)(puVar24 + -8) = uVar6;
  *(undefined8 *)(puVar24 + -0x28) = 0;
  lVar15 = *(long *)(puVar14 + 0x20);
  puVar22 = puVar14;
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c(lVar15);
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar15 = *(long *)(puVar14 + 0x20);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  lVar15 = **(long **)(lVar15 + 0xb8);
  if (lVar15 != 0) {
    lVar17 = *(long *)(puVar14 + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    puVar22 = *(undefined1 **)(*(long *)(lVar17 + 0xc0) + 0x18);
    uVar19 = func_0x04e81584(lVar15,puVar24 + -0x28);
    if ((uVar19 & 1) == 0) {
      lVar17 = *(long *)(puVar14 + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar19 = func_0x03280ca0();
      lVar17 = *(long *)(puVar14 + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      func_0x04645340(uVar19,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x38));
      puVar14 = (undefined1 *)0x0;
      if (uVar19 != 0) {
        *(undefined1 (*) [16])(uVar19 + 0x10) = auVar27;
        func_0x032809c4((undefined1 (*) [16])(uVar19 + 0x10),0);
        return uVar19;
      }
    }
    else if (*(long *)(puVar24 + -0x28) != 0) {
      pauVar7 = (undefined1 (*) [16])(*(long *)(puVar24 + -0x28) + 0x10);
      *pauVar7 = auVar27;
      func_0x032809c4(pauVar7,0);
      return *(ulong *)(puVar24 + -0x28);
    }
  }
  auVar28 = func_0x03280cac();
  uVar21 = auVar28._0_8_;
  *(undefined8 *)(puVar24 + -0x60) = 0x3ec3a10;
  *(undefined1 **)(puVar24 + -0x58) = puVar24;
  *(long *)(puVar24 + -0x50) = lVar15;
  *(undefined1 **)(puVar24 + -0x48) = puVar14;
  *(undefined1 (*) [16])(puVar24 + -0x40) = auVar27;
  *(undefined8 *)(puVar24 + -0x68) = 0;
  lVar15 = *(long *)(param_4 + 0x20);
  puVar14 = puVar22;
  uVar19 = param_4;
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c(lVar15);
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar15 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  lVar15 = **(long **)(lVar15 + 0xb8);
  if (lVar15 != 0) {
    lVar17 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    puVar14 = *(undefined1 **)(*(long *)(lVar17 + 0xc0) + 0x18);
    uVar6 = func_0x04e81584(lVar15,puVar24 + -0x68);
    if ((uVar6 & 1) == 0) {
      lVar17 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar6 = func_0x03280ca0();
      lVar17 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      func_0x046453e4(uVar6,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x40));
      param_4 = 0;
      if (uVar6 != 0) {
        *(undefined8 *)(uVar6 + 0x10) = uVar21;
        func_0x032809c4((undefined8 *)(uVar6 + 0x10),uVar21);
        *(undefined8 *)(uVar6 + 0x18) = auVar28._8_8_;
        *(undefined1 **)(uVar6 + 0x20) = puVar22;
        func_0x032809c4((undefined8 *)(uVar6 + 0x18),0);
        return uVar6;
      }
    }
    else if (*(long *)(puVar24 + -0x68) != 0) {
      puVar10 = (undefined8 *)(*(long *)(puVar24 + -0x68) + 0x10);
      *puVar10 = uVar21;
      func_0x032809c4(puVar10,uVar21);
      lVar17 = *(long *)(puVar24 + -0x68);
      if (lVar17 != 0) {
        *(undefined8 *)(lVar17 + 0x18) = auVar28._8_8_;
        *(undefined1 **)(lVar17 + 0x20) = puVar22;
        func_0x032809c4((undefined8 *)(lVar17 + 0x18),0);
        return *(ulong *)(puVar24 + -0x68);
      }
    }
  }
  auVar27 = func_0x03280cac();
  uVar21 = auVar27._0_8_;
  *(undefined8 *)(puVar24 + -0xa0) = 0x3ec3b90;
  *(long *)(puVar24 + -0x98) = lVar15;
  *(ulong *)(puVar24 + -0x90) = param_4;
  *(undefined1 (*) [16])(puVar24 + -0x88) = auVar28;
  *(undefined1 **)(puVar24 + -0x78) = puVar22;
  *(undefined8 *)(puVar24 + -0xa8) = 0;
  lVar15 = *(long *)(uVar19 + 0x20);
  puVar22 = puVar14;
  uVar6 = uVar19;
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c(lVar15);
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar15 = *(long *)(uVar19 + 0x20);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  lVar15 = **(long **)(lVar15 + 0xb8);
  if (lVar15 != 0) {
    lVar17 = *(long *)(uVar19 + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    puVar22 = *(undefined1 **)(*(long *)(lVar17 + 0xc0) + 0x18);
    uVar8 = func_0x04e81584(lVar15,puVar24 + -0xa8);
    if ((uVar8 & 1) == 0) {
      lVar17 = *(long *)(uVar19 + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar8 = func_0x03280ca0();
      lVar17 = *(long *)(uVar19 + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      func_0x04645488(uVar8,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x40));
      uVar19 = 0;
      if (uVar8 != 0) {
        *(undefined8 *)(uVar8 + 0x10) = uVar21;
        func_0x032809c4((undefined8 *)(uVar8 + 0x10),uVar21);
        *(undefined8 *)(uVar8 + 0x18) = auVar27._8_8_;
        *(undefined1 **)(uVar8 + 0x20) = puVar14;
        func_0x032809c4((undefined8 *)(uVar8 + 0x18),0);
        return uVar8;
      }
    }
    else if (*(long *)(puVar24 + -0xa8) != 0) {
      puVar10 = (undefined8 *)(*(long *)(puVar24 + -0xa8) + 0x10);
      *puVar10 = uVar21;
      func_0x032809c4(puVar10,uVar21);
      lVar17 = *(long *)(puVar24 + -0xa8);
      if (lVar17 != 0) {
        *(undefined8 *)(lVar17 + 0x18) = auVar27._8_8_;
        *(undefined1 **)(lVar17 + 0x20) = puVar14;
        func_0x032809c4((undefined8 *)(lVar17 + 0x18),0);
        return *(ulong *)(puVar24 + -0xa8);
      }
    }
  }
  auVar28 = func_0x03280cac();
  uVar21 = auVar28._0_8_;
  *(undefined8 *)(puVar24 + -0xf0) = 0x3ec3d10;
  *(undefined1 **)(puVar24 + -0xe0) = puVar25;
  *(long *)(puVar24 + -0xd8) = lVar15;
  *(ulong *)(puVar24 + -0xd0) = uVar19;
  *(undefined1 (*) [16])(puVar24 + -200) = auVar27;
  *(undefined1 **)(puVar24 + -0xb8) = puVar14;
  *(undefined8 *)(puVar24 + -0xe8) = 0;
  lVar17 = *(long *)(param_5 + 0x20);
  puVar14 = puVar22;
  uVar19 = uVar6;
  lVar15 = param_5;
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c(lVar17);
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  if (*(int *)(lVar17 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar17 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  lVar17 = **(long **)(lVar17 + 0xb8);
  if (lVar17 != 0) {
    lVar16 = *(long *)(param_5 + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    puVar14 = *(undefined1 **)(*(long *)(lVar16 + 0xc0) + 0x18);
    uVar8 = func_0x04e81584(lVar17,puVar24 + -0xe8);
    if ((uVar8 & 1) == 0) {
      lVar16 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar8 = func_0x03280ca0();
      lVar16 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
      }
      func_0x04645704(uVar8,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x48));
      param_5 = 0;
      if (uVar8 != 0) {
        *(undefined8 *)(uVar8 + 0x10) = uVar21;
        func_0x032809c4((undefined8 *)(uVar8 + 0x10),uVar21);
        *(undefined8 *)(uVar8 + 0x18) = auVar28._8_8_;
        *(undefined1 **)(uVar8 + 0x20) = puVar22;
        func_0x032809c4((undefined8 *)(uVar8 + 0x18),0);
LAB_03ec3e7c:
        *(int *)(uVar8 + 0x28) = (int)uVar6;
        return uVar8;
      }
    }
    else if (*(long *)(puVar24 + -0xe8) != 0) {
      puVar10 = (undefined8 *)(*(long *)(puVar24 + -0xe8) + 0x10);
      *puVar10 = uVar21;
      func_0x032809c4(puVar10,uVar21);
      lVar16 = *(long *)(puVar24 + -0xe8);
      if (lVar16 != 0) {
        *(undefined8 *)(lVar16 + 0x18) = auVar28._8_8_;
        *(undefined1 **)(lVar16 + 0x20) = puVar22;
        func_0x032809c4((undefined8 *)(lVar16 + 0x18),0);
        uVar8 = *(ulong *)(puVar24 + -0xe8);
        if (uVar8 != 0) goto LAB_03ec3e7c;
        param_5 = 0;
      }
    }
  }
  auVar27 = func_0x03280cac();
  uVar21 = auVar27._0_8_;
  *(undefined8 *)(puVar24 + -0x130) = 0x3ec3ea0;
  *(long *)(puVar24 + -0x120) = lVar17;
  *(long *)(puVar24 + -0x118) = param_5;
  *(undefined1 (*) [16])(puVar24 + -0x110) = auVar28;
  *(undefined1 **)(puVar24 + -0x100) = puVar22;
  *(ulong *)(puVar24 + -0xf8) = uVar6 & 0xffffffff;
  *(undefined8 *)(puVar24 + -0x128) = 0;
  lVar17 = *(long *)(lVar15 + 0x20);
  puVar22 = puVar14;
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c(lVar17);
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  if (*(int *)(lVar17 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar17 = *(long *)(lVar15 + 0x20);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  lVar17 = **(long **)(lVar17 + 0xb8);
  if (lVar17 != 0) {
    lVar16 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    puVar22 = *(undefined1 **)(*(long *)(lVar16 + 0xc0) + 0x18);
    uVar6 = func_0x04e81584(lVar17,puVar24 + -0x128);
    if ((uVar6 & 1) == 0) {
      lVar16 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar6 = func_0x03280ca0();
      lVar15 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      func_0x046457b8(uVar6,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x48));
      lVar15 = 0;
      if (uVar6 != 0) {
        *(undefined8 *)(uVar6 + 0x10) = uVar21;
        func_0x032809c4((undefined8 *)(uVar6 + 0x10),uVar21);
        *(undefined8 *)(uVar6 + 0x18) = auVar27._8_8_;
        *(undefined1 **)(uVar6 + 0x20) = puVar14;
        func_0x032809c4((undefined8 *)(uVar6 + 0x18),0);
LAB_03ec400c:
        *(int *)(uVar6 + 0x28) = (int)uVar19;
        return uVar6;
      }
    }
    else if (*(long *)(puVar24 + -0x128) != 0) {
      puVar10 = (undefined8 *)(*(long *)(puVar24 + -0x128) + 0x10);
      *puVar10 = uVar21;
      func_0x032809c4(puVar10,uVar21);
      lVar16 = *(long *)(puVar24 + -0x128);
      if (lVar16 != 0) {
        *(undefined8 *)(lVar16 + 0x18) = auVar27._8_8_;
        *(undefined1 **)(lVar16 + 0x20) = puVar14;
        func_0x032809c4((undefined8 *)(lVar16 + 0x18),0);
        uVar6 = *(ulong *)(puVar24 + -0x128);
        if (uVar6 != 0) goto LAB_03ec400c;
        lVar15 = 0;
      }
    }
  }
  auVar28 = func_0x03280cac();
  plVar23 = auVar28._8_8_;
  uVar6 = auVar28._0_8_;
  *(undefined1 **)(puVar24 + -400) = (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)(puVar24 + -0x188) = 0x3ec4030;
  *(long *)(puVar24 + -0x180) = lVar13;
  *(undefined1 **)(puVar24 + -0x170) = unaff_x26;
  *(long *)(puVar24 + -0x168) = unaff_x25;
  *(long *)(puVar24 + -0x160) = lVar17;
  *(long *)(puVar24 + -0x158) = lVar15;
  *(undefined1 (*) [16])(puVar24 + -0x150) = auVar27;
  *(undefined1 **)(puVar24 + -0x140) = puVar14;
  *(ulong *)(puVar24 + -0x138) = uVar19 & 0xffffffff;
  lVar13 = tpidr_el0;
  *(undefined8 *)(puVar24 + -0x198) = *(undefined8 *)(lVar13 + 0x28);
  plVar26 = *(long **)(puVar22 + 0x38);
  if (plVar26 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar26 = *(long **)(puVar22 + 0x38);
    if (plVar26 == (long *)0x0) {
      func_0x03256878(puVar22);
      plVar26 = *(long **)(puVar22 + 0x38);
    }
  }
  uVar8 = (ulong)*(uint *)(plVar26[4] + 0xfc);
  uVar19 = uVar8 + 0xf & 0x1fffffff0;
  puVar14 = puVar24 + (-0x1b0 - uVar19);
  puVar10 = (undefined8 *)(puVar14 + -uVar19);
  lVar15 = (long)puVar10 - uVar19;
  func_0x072ce9a0(lVar15,0,uVar8);
  if (plVar23 == (long *)0x0) {
    func_0x03280cac();
    plVar23 = (long *)0x0;
  }
  else {
    lVar17 = *plVar26;
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar16 = *plVar23;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar17) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar23,lVar17,0);
LAB_03ec4144:
    plVar23 = (long *)(*(code *)*puVar9)(plVar23,puVar9[1]);
    puVar4 = PTR_DAT_0774e8e0;
    if (plVar23 != (long *)0x0) {
      do {
        lVar17 = *plVar23;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar23,*(long *)puVar4,0);
LAB_03ec41ac:
        uVar19 = (*(code *)*puVar9)(plVar23,puVar9[1]);
        if ((uVar19 & 1) == 0) {
          puVar22 = (undefined1 *)0x0;
          goto LAB_03ec429c;
        }
        lVar17 = *(long *)(*(long *)(puVar22 + 0x38) + 0x10);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
        }
        lVar16 = *plVar23;
        uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              lVar17 = lVar16 + (long)*piVar20 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        lVar17 = func_0x03256b10(plVar23,lVar17,0);
LAB_03ec4220:
        *(undefined1 **)(puVar24 + -0x1a8) = puVar14;
        lVar17 = *(long *)(lVar17 + 8);
        (**(code **)(lVar17 + 0x10))
                  (*(undefined8 *)(lVar17 + 8),lVar17,plVar23,puVar24 + -0x1a8,puVar14);
        func_0x072ce970(lVar15,puVar14,uVar8);
        func_0x072ce970(puVar10,lVar15,uVar8);
        puVar9 = puVar10;
        if (-1 < *(int *)(*(long *)(*(long *)(puVar22 + 0x38) + 0x20) + 0x28)) {
          puVar9 = (undefined8 *)*puVar10;
        }
        puVar12 = *(undefined8 **)(*(long *)(puVar22 + 0x38) + 0x28);
        uVar21 = *puVar12;
        *(undefined8 **)(puVar24 + -0x1a8) = puVar9;
        (*(code *)puVar12[2])(uVar21,puVar12,uVar6,puVar24 + -0x1a8,puVar24 + -0x1a0);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(puVar22);
  do {
    auVar29 = func_0x072ce990();
    if (auVar29._8_4_ != 1) {
      if (plVar23 == (long *)0x0) goto LAB_03ec43e8;
      lVar13 = *plVar23;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar19 == 0) goto LAB_03ec43c0;
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    puVar10 = (undefined8 *)func_0x072ce910(auVar29._0_8_);
    puVar22 = (undefined1 *)*puVar10;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar23 != (long *)0x0) {
      lVar17 = *plVar23;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar10 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar10)(plVar23,puVar10[1]);
    }
    if (puVar22 != (undefined1 *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar13 + 0x28) == *(long *)(puVar24 + -0x198)) {
      return uVar6;
    }
  } while( true );
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar10)(plVar23,puVar10[1]);
LAB_03ec43e8:
  func_0x03365958(auVar29._0_8_);
  func_0x03280ca4(0);
  auVar27 = func_0x02f09514();
  lVar13 = auVar27._8_8_;
  *(undefined8 *)(lVar15 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar15 + -0x18) = 0;
  *(long **)(lVar15 + -0x10) = plVar23;
  *(ulong *)(lVar15 + -8) = uVar6;
  puVar10 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar10 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0x28) = 0;
  uVar21 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar21,0);
  lVar17 = *(long *)(auVar27._0_8_ + 0x10);
  if (lVar17 != 0) {
    uVar19 = func_0x04fe48b0(lVar17,uVar5,lVar15 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      lVar15 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      lVar13 = *(long *)(lVar15 + 0x38);
      if (lVar13 == 0) {
        func_0x03256878(lVar15);
        lVar13 = *(long *)(lVar15 + 0x38);
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      uVar19 = **(ulong **)(lVar13 + 0xb8);
    }
    else {
      uVar19 = func_0x03d2c6a8(*(undefined8 *)(lVar15 + -0x28),
                               *(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
    }
    return uVar19;
  }
  auVar28 = func_0x03280cac();
  lVar13 = auVar28._8_8_;
  *(undefined8 *)(lVar15 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar15 + -0x48) = uVar21;
  *(undefined1 (*) [16])(lVar15 + -0x40) = auVar27;
  puVar10 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar10 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0x58) = 0;
  uVar21 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar21 = func_0x057a51c4(uVar21,0);
  lVar17 = *(long *)(auVar28._0_8_ + 0x10);
  if (lVar17 != 0) {
    uVar19 = func_0x04fe48b0(lVar17,uVar21,lVar15 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 8))();
    }
    else {
      uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x18))
                         (*(undefined8 *)(lVar15 + -0x58));
    }
    return uVar19;
  }
  auVar27 = func_0x03280cac();
  lVar13 = auVar27._8_8_;
  *(undefined8 *)(lVar15 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar15 + -0x70) = auVar28;
  puVar10 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar10 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0x78) = 0;
  uVar21 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar21,0);
  lVar13 = *(long *)(auVar27._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar19 = func_0x04fe48b0(lVar13,uVar5,lVar15 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    lVar13 = *(long *)(lVar15 + -0x78);
    if (lVar13 != 0) {
      iVar2 = *(int *)(lVar13 + 0x18);
      if (iVar2 < 1) {
        return 0;
      }
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar13 + 0x10),0,iVar2,0);
      return 1;
    }
  }
  auVar28 = func_0x03280cac();
  lVar13 = auVar28._8_8_;
  *(undefined8 *)(lVar15 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar15 + -0x90) = uVar21;
  *(long *)(lVar15 + -0x88) = auVar27._0_8_;
  puVar10 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar10 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0x98) = 0;
  uVar21 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar21,0);
  lVar13 = *(long *)(auVar28._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar19 = func_0x04fe48b0(lVar13,uVar5,lVar15 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar15 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar15 + -0x98) + 0x18));
    }
  }
  auVar27 = func_0x03280cac();
  lVar13 = auVar27._8_8_;
  *(undefined8 *)(lVar15 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar15 + -0xb0) = uVar21;
  *(long *)(lVar15 + -0xa8) = auVar28._0_8_;
  puVar10 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar10 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0xb8) = 0;
  uVar21 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar21,0);
  lVar13 = *(long *)(auVar27._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar19 = func_0x04fe48b0(lVar13,uVar5,lVar15 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar15 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar15 + -0xb8) + 0x18));
    }
  }
  auVar28 = func_0x03280cac();
  lVar13 = auVar28._8_8_;
  *(undefined8 *)(lVar15 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar15 + -0xd0) = uVar21;
  *(long *)(lVar15 + -200) = auVar27._0_8_;
  puVar10 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar10 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar10 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0xd8) = 0;
  uVar21 = *puVar10;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar21,0);
  lVar13 = *(long *)(auVar28._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar19 = func_0x04fe48b0(lVar13,uVar5,lVar15 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar19 & 1) == 0) {
      uVar19 = 0;
    }
    else {
      if (*(long *)(lVar15 + -0xd8) == 0) goto LAB_03ec4958;
      uVar19 = (ulong)(0 < *(int *)(*(long *)(lVar15 + -0xd8) + 0x18));
    }
    return uVar19;
  }
LAB_03ec4958:
  auVar27 = func_0x03280cac();
  lVar13 = auVar27._8_8_;
  *(undefined8 *)(lVar15 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar15 + -0xf0) = uVar21;
  *(long *)(lVar15 + -0xe8) = auVar28._0_8_;
  puVar10 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x03256878(lVar13);
    puVar10 = *(undefined8 **)(lVar13 + 0x38);
  }
  uVar19 = (**(code **)*puVar10)(auVar27._0_8_);
  if ((uVar19 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 8))(auVar27._0_8_);
  return uVar19;
}

