/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2B1F0; MergeEngine.Configuration.Definitions.Reward.Count; status ok */


undefined8 * MergeEngine_Configuration_Definitions_Reward__Count(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  int iVar8;
  long *plVar17;
  long *plVar18;
  ulong *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined1 *puVar25;
  long lVar26;
  long lVar27;
  long *extraout_x8;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  int *piVar33;
  undefined8 unaff_x19;
  long *plVar34;
  ulong uVar35;
  undefined8 unaff_x20;
  undefined1 *puVar36;
  undefined8 unaff_x21;
  long *plVar37;
  undefined *unaff_x22;
  long lVar38;
  undefined8 unaff_x23;
  undefined8 uVar39;
  undefined1 *puVar40;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined1 *puVar41;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined8 uVar42;
  undefined8 unaff_x30;
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  while( true ) {
    puVar15 = PTR_DAT_0782f158;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e2a467 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782f160);
      func_0x03280a18(PTR_DAT_07771778);
      func_0x03280a18(PTR_DAT_0782f168);
      func_0x03280a18(PTR_DAT_0782f158);
      bRam0000000007e2a467 = 1;
    }
    lVar20 = func_0x03280ca0(*(undefined8 *)puVar15);
    func_0x057da5fc(lVar20,0);
    puVar2 = PTR_DAT_0782f168;
    puVar1 = PTR_DAT_0782f160;
    puVar12 = PTR_DAT_07771778;
    if (lVar20 != 0) break;
    lVar20 = func_0x03280cac();
    puVar12 = PTR_DAT_077730b8;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x6b2b2d8;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = param_2;
    *(long *)((long)register0x00000008 + -0x48) = param_1;
    if ((bRam0000000007e2a447 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077730b8);
      bRam0000000007e2a447 = 1;
    }
    lVar21 = *(long *)puVar12;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar21 = *(long *)puVar12;
    }
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    param_2 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x50);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x58);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_1 = lVar20;
    unaff_x22 = puVar15;
  }
  *(undefined8 *)(lVar20 + 0x10) = param_2;
  func_0x032809c4((undefined8 *)(lVar20 + 0x10),param_2);
  plVar34 = *(long **)(param_1 + 0x18);
  lVar21 = func_0x03280ca0(*(undefined8 *)puVar12);
  puVar25 = (undefined1 *)0x0;
  func_0x05355fbc(lVar21,lVar20,*(undefined8 *)puVar2);
  lVar24 = *(long *)puVar1;
  uVar39 = *(undefined8 *)((long)register0x00000008 + -0x30);
  puVar15 = *(undefined **)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar39;
  *(undefined **)((long)register0x00000008 + -0x28) = puVar15;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar20 = lVar24;
  if (*(long *)(lVar24 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar24 + 0x38) == 0) {
      func_0x03256878(lVar24);
    }
  }
  puVar12 = PTR_DAT_07774b08;
  if ((plVar34 != (long *)0x0) && (puVar12 = PTR_DAT_077799b8, lVar21 != 0)) {
    lVar22 = **(long **)(lVar24 + 0x38);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar26 = *plVar34;
    uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar29 != 0) {
      piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == lVar22) {
          puVar9 = (undefined8 *)(lVar26 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3bbc4;
        }
        uVar29 = uVar29 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar29 != 0);
    }
    lVar20 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3bbc4:
    plVar34 = (long *)(*(code *)*puVar9)(plVar34,puVar9[1]);
    puVar15 = PTR_DAT_0774e8e0;
    puVar9 = (undefined8 *)0x0;
    uVar39 = 0x7fffffff;
    while (plVar34 != (long *)0x0) {
      lVar22 = *plVar34;
      uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)puVar15) {
            puVar10 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3bc34;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      lVar20 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3bc34:
      uVar29 = (*(code *)*puVar10)(plVar34,puVar10[1]);
      if ((uVar29 & 1) == 0) {
        lVar24 = 0;
        goto LAB_03d3bce0;
      }
      lVar20 = *(long *)(*(long *)(lVar24 + 0x38) + 0x18);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      lVar22 = *plVar34;
      uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar20) {
            puVar10 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3bca8;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar34,lVar20,0);
LAB_03d3bca8:
      uVar11 = (*(code *)*puVar10)(plVar34,puVar10[1]);
      lVar20 = *(long *)(lVar21 + 0x28);
      uVar29 = (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),uVar11);
      if ((uVar29 & 1) != 0) {
        if ((int)puVar9 == 0x7fffffff) goto LAB_03d3bd94;
        puVar9 = (undefined8 *)(ulong)((int)puVar9 + 1);
      }
    }
    func_0x03280cac();
    puVar12 = PTR_DAT_07774b08;
  }
  uVar11 = func_0x03280a2c(puVar12);
  uVar11 = func_0x05ac7464(uVar11,0);
  func_0x03280b7c(uVar11,lVar24);
  while( true ) {
    func_0x03280ca4(lVar24);
LAB_03d3bd94:
    uVar11 = func_0x03280cbc();
    auVar43 = func_0x03280b7c(uVar11,lVar24);
    uVar11 = auVar43._0_8_;
    puVar9 = (undefined8 *)0x7fffffff;
    if (auVar43._8_4_ != 1) break;
    plVar13 = (long *)func_0x072ce910(uVar11);
    lVar24 = *plVar13;
    func_0x072ce920();
LAB_03d3bce0:
    if (plVar34 != (long *)0x0) {
      lVar21 = *plVar34;
      uVar29 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar10 = (undefined8 *)(lVar21 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3bd38;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      lVar20 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3bd38:
      (*(code *)*puVar10)(plVar34,puVar10[1]);
    }
    if (lVar24 == 0) {
      return puVar9;
    }
  }
  if (plVar34 != (long *)0x0) {
    lVar21 = *plVar34;
    uVar29 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar29 != 0) {
      piVar33 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar9 = (undefined8 *)(lVar21 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3be44;
        }
        uVar29 = uVar29 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar29 != 0);
    }
    lVar20 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3be44:
    (*(code *)*puVar9)(plVar34,puVar9[1]);
  }
  func_0x03365958(uVar11);
  func_0x03280ca4(0);
  auVar44 = func_0x02f09514();
  plVar13 = auVar44._0_8_;
  puVar36 = (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3d3be68;
  *(undefined **)((long)register0x00000008 + -0x90) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar39;
  *(undefined **)((long)register0x00000008 + -0x68) = puVar15;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar11;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0x7fffffff;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(long **)((long)register0x00000008 + -0x48) = plVar34;
  lVar21 = tpidr_el0;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = *(undefined8 *)(lVar21 + 0x28);
  plVar34 = *(long **)(lVar20 + 0x38);
  if (plVar34 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar34 = *(long **)(lVar20 + 0x38);
    if (plVar34 == (long *)0x0) {
      func_0x03256878(lVar20);
      plVar34 = *(long **)(lVar20 + 0x38);
    }
  }
  uVar29 = (ulong)*(uint *)(plVar34[5] + 0xfc);
  uVar30 = uVar29 + 0xf & 0x1fffffff0;
  puVar40 = (undefined1 *)((long)register0x00000008 + (-0xc0 - uVar30));
  puVar9 = (undefined8 *)(puVar40 + -uVar30);
  puVar41 = (undefined1 *)((long)puVar9 - uVar30);
  uVar30 = uVar29;
  func_0x072ce9a0(puVar41,0);
  puVar15 = PTR_DAT_07774b08;
  if ((plVar13 != (long *)0x0) && (puVar15 = PTR_DAT_077799b8, auVar44._8_8_ != 0)) {
    lVar24 = *plVar34;
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    lVar22 = *plVar13;
    uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar31 != 0) {
      piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == lVar24) {
          puVar10 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3bf80;
        }
        uVar31 = uVar31 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar31 != 0);
    }
    uVar30 = 0;
    puVar10 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3bf80:
    plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
    unaff_x28 = PTR_DAT_0774e8e0;
    puVar10 = (undefined8 *)0x0;
    while (plVar13 != (long *)0x0) {
      lVar24 = *plVar13;
      uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar31 != 0) {
        piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)unaff_x28) {
            puVar14 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3bfec;
          }
          uVar31 = uVar31 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar31 != 0);
      }
      uVar30 = 0;
      puVar14 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3bfec:
      uVar31 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if ((uVar31 & 1) == 0) {
        lVar20 = 0;
        goto LAB_03d3c0f4;
      }
      lVar24 = *(long *)(*(long *)(lVar20 + 0x38) + 0x18);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      lVar22 = *plVar13;
      uVar30 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar30 != 0) {
        piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar24) {
            lVar24 = lVar22 + (long)*piVar33 * 0x10 + 0x138;
            goto LAB_03d3c060;
          }
          uVar30 = uVar30 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar30 != 0);
      }
      lVar24 = func_0x03256b10(plVar13,lVar24,0);
LAB_03d3c060:
      *(undefined1 **)((long)register0x00000008 + -0xb8) = puVar40;
      lVar24 = *(long *)(lVar24 + 8);
      (**(code **)(lVar24 + 0x10))
                (*(undefined8 *)(lVar24 + 8),lVar24,plVar13,
                 (undefined1 *)((long)register0x00000008 + -0xb8),puVar40);
      func_0x072ce970(puVar41,puVar40,uVar29);
      func_0x072ce970(puVar9,puVar41,uVar29);
      puVar14 = puVar9;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar20 + 0x38) + 0x28) + 0x28)) {
        puVar14 = (undefined8 *)*puVar9;
      }
      puVar23 = *(undefined8 **)(*(long *)(lVar20 + 0x38) + 0x30);
      uVar39 = *puVar23;
      *(undefined8 **)((long)register0x00000008 + -0xb8) = puVar14;
      puVar25 = (undefined1 *)((long)register0x00000008 + -0xb8);
      uVar30 = auVar44._8_8_;
      (*(code *)puVar23[2])(uVar39);
      if (*(char *)((long)register0x00000008 + -0xac) != '\0') {
        if ((int)puVar10 == 0x7fffffff) goto LAB_03d3c1c4;
        puVar10 = (undefined8 *)(ulong)((int)puVar10 + 1);
      }
    }
    func_0x03280cac();
    puVar15 = PTR_DAT_07774b08;
  }
  uVar39 = func_0x03280a2c(puVar15);
  uVar39 = func_0x05ac7464(uVar39,0);
  func_0x03280b7c(uVar39,lVar20);
LAB_03d3c1bc:
  func_0x03280ca4(lVar20);
LAB_03d3c1c4:
  uVar39 = func_0x03280cbc();
  func_0x03280b7c(uVar39,lVar20);
  do {
    auVar43 = func_0x072ce990();
    uVar39 = auVar43._0_8_;
    puVar10 = (undefined8 *)0x7fffffff;
    if (auVar43._8_4_ != 1) {
      if (plVar13 == (long *)0x0) goto LAB_03d3c284;
      lVar20 = *plVar13;
      uVar31 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar31 == 0) goto LAB_03d3c25c;
      piVar33 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      break;
    }
    plVar34 = (long *)func_0x072ce910(uVar39);
    lVar20 = *plVar34;
    func_0x072ce920();
LAB_03d3c0f4:
    if (plVar13 != (long *)0x0) {
      lVar24 = *plVar13;
      uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar31 != 0) {
        piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar14 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3c14c;
          }
          uVar31 = uVar31 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar31 != 0);
      }
      uVar30 = 0;
      puVar14 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3c14c:
      (*(code *)*puVar14)(plVar13,puVar14[1]);
    }
    if (lVar20 != 0) goto LAB_03d3c1bc;
    if (*(long *)(lVar21 + 0x28) == *(long *)((long)register0x00000008 + -0xa8)) {
      return puVar10;
    }
  } while( true );
  while( true ) {
    uVar31 = uVar31 - 1;
    piVar33 = piVar33 + 4;
    if (uVar31 == 0) break;
    if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar14 = (undefined8 *)(lVar20 + (long)*piVar33 * 0x10 + 0x138);
      goto LAB_03d3c278;
    }
  }
LAB_03d3c25c:
  uVar30 = 0;
  puVar14 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3c278:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_03d3c284:
  func_0x03365958(uVar39);
  func_0x03280ca4(0);
  auVar45 = func_0x02f09514();
  *(undefined8 *)(puVar41 + -0x20) = 0x3d3c29c;
  *(undefined8 *)(puVar41 + -0x18) = uVar39;
  *(undefined8 *)(puVar41 + -0x10) = 0;
  *(long **)(puVar41 + -8) = plVar13;
  uVar35 = auVar45._8_8_ & 0xffffffff;
  auVar44._8_8_ = uVar35;
  auVar44._0_8_ = auVar45._0_8_;
  uVar31 = uVar30;
  if (*(long *)(uVar30 + 0x38) == 0) {
    func_0x03256878(uVar30);
  }
  if (auVar45._0_8_ == 0) {
    uVar39 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar39 = func_0x05ac7464(uVar39,0);
    auVar45 = func_0x03280b7c(uVar39,uVar30);
    puVar36 = puVar41 + -0x60;
    *(undefined1 **)(puVar41 + -0x60) = (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)(puVar41 + -0x58) = 0x3d3c2fc;
    *(undefined1 **)(puVar41 + -0x50) = puVar40;
    *(ulong *)(puVar41 + -0x48) = uVar29;
    *(undefined8 *)(puVar41 + -0x40) = 0x7fffffff;
    *(undefined8 *)(puVar41 + -0x38) = 0;
    *(ulong *)(puVar41 + -0x30) = uVar35;
    *(ulong *)(puVar41 + -0x28) = uVar30;
    uVar29 = tpidr_el0;
    *(undefined8 *)(puVar41 + -0x68) = *(undefined8 *)(uVar29 + 0x28);
    *(undefined1 **)(puVar41 + -0x88) = auVar45._8_8_;
    puVar40 = *(undefined1 **)(uVar31 + 0x38);
    if (puVar40 == (undefined1 *)0x0) {
      func_0x03256878(uVar31);
      puVar40 = *(undefined1 **)(uVar31 + 0x38);
    }
    uVar30 = (ulong)*(uint *)(*(long *)(puVar40 + 8) + 0xfc);
    puVar14 = (undefined8 *)(puVar41 + (-0x90 - (uVar30 + 0xf & 0x1fffffff0)));
    puVar10 = puVar14;
    if (auVar45._0_8_ == 0) {
      uVar39 = func_0x03280a2c(PTR_DAT_07774b08);
      uVar39 = func_0x05ac7464(uVar39,0);
      puVar23 = (undefined8 *)func_0x03280b7c(uVar39,uVar31);
    }
    else {
      puVar25 = auVar45._8_8_;
      if (-1 < *(int *)(*(long *)(puVar40 + 8) + 0x28)) {
        puVar25 = puVar41 + -0x88;
      }
      func_0x072ce970(puVar14,puVar25);
      puVar23 = *(undefined8 **)(puVar40 + 0x10);
      uVar39 = *puVar23;
      if (-1 < *(int *)(*(long *)(puVar40 + 8) + 0x28)) {
        puVar10 = (undefined8 *)*puVar14;
      }
      *(long *)(puVar41 + -0x80) = auVar45._0_8_;
      *(undefined8 **)(puVar41 + -0x78) = puVar10;
      puVar25 = puVar41 + -0x80;
      uVar30 = 0;
      (*(code *)puVar23[2])(uVar39);
      puVar23 = *(undefined8 **)(puVar41 + -0x70);
      if (*(long *)(uVar29 + 0x28) == *(long *)(puVar41 + -0x68)) {
        return puVar23;
      }
    }
    uVar39 = 0x3d3c3f4;
    auVar44 = func_0x072ce990(puVar23);
  }
  else {
    uVar31 = *(ulong *)(puVar41 + -0x10);
    uVar30 = *(ulong *)(*(long *)(uVar30 + 0x38) + 0x10);
    uVar39 = *(undefined8 *)(puVar41 + -0x20);
    auVar45._8_8_ = *(undefined8 *)(puVar41 + -0x18);
    auVar45._0_8_ = *(undefined8 *)(puVar41 + -8);
    puVar14 = (undefined8 *)puVar41;
  }
  uVar11 = auVar44._0_8_;
  puVar14[-4] = uVar39;
  puVar14[-3] = auVar45._8_8_;
  puVar14[-2] = uVar31;
  puVar14[-1] = auVar45._0_8_;
  plVar34 = *(long **)(uVar30 + 0x38);
  if (plVar34 == (long *)0x0) {
    func_0x03256878(uVar30);
    plVar34 = *(long **)(uVar30 + 0x38);
  }
  if ((*(byte *)(*plVar34 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar23 = (undefined8 *)func_0x03280ca0();
  plVar34 = *(long **)(*(long *)(uVar30 + 0x38) + 8);
  func_0x04fd61e4(puVar23,0xfffffffe);
  if (puVar23 != (undefined8 *)0x0) {
    puVar23[5] = uVar11;
    func_0x032809c4(puVar23 + 5,uVar11);
    *(int *)((long)puVar23 + 0x34) = auVar44._8_4_;
    return puVar23;
  }
  auVar45 = func_0x03280cac();
  lVar24 = auVar45._8_8_;
  puVar15 = auVar45._0_8_;
  puVar14[-0xe] = puVar36;
  puVar14[-0xd] = 0x3d3c470;
  puVar14[-0xc] = puVar9;
  puVar14[-10] = puVar40;
  puVar14[-9] = uVar29;
  puVar14[-8] = puVar10;
  puVar14[-7] = 0;
  puVar14[-6] = uVar11;
  puVar14[-5] = auVar44._8_8_ & 0xffffffff;
  lVar20 = tpidr_el0;
  puVar14[-0xf] = *(undefined8 *)(lVar20 + 0x28);
  puVar14[-0x10] = lVar24;
  plVar13 = (long *)plVar34[7];
  if (plVar13 == (long *)0x0) {
    func_0x03256878(plVar34);
    plVar13 = (long *)plVar34[7];
  }
  puVar36 = (undefined1 *)(ulong)*(uint *)(plVar13[3] + 0xfc);
  puVar9 = (undefined8 *)((long)puVar14 + (-0x80 - ((ulong)(puVar36 + 0xf) & 0x1fffffff0)));
  if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar23 = (undefined8 *)func_0x03280ca0();
  puVar10 = *(undefined8 **)(plVar34[7] + 8);
  (*(code *)*puVar10)(puVar23,0xfffffffe);
  if (puVar23 == (undefined8 *)0x0) {
    func_0x03280cac();
  }
  else {
    func_0x02f17738(puVar23,*(long *)(*(long *)plVar34[7] + 0x80) + 0x80,puVar15);
    plVar34 = (long *)plVar34[7];
    lVar22 = lVar24;
    if (-1 < *(int *)(plVar34[3] + 0x28)) {
      lVar22 = (long)(puVar14 + -0x10);
    }
    func_0x072ce970(puVar9,lVar22,puVar36);
    puVar10 = puVar9;
    puVar25 = puVar36;
    func_0x03280a3c(puVar23,*(long *)(*plVar34 + 0x80) + 0xc0);
    if (*(long *)(lVar20 + 0x28) == puVar14[-0xf]) {
      return puVar23;
    }
  }
  auVar44 = func_0x072ce990();
  lVar22 = auVar44._8_8_;
  puVar9[-4] = 0x3d3c59c;
  puVar9[-2] = plVar34;
  puVar9[-1] = lVar24;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (auVar44._0_8_ == 0) {
    uVar39 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar39 = func_0x05ac7464(uVar39,0);
    auVar44 = func_0x03280b7c(uVar39,lVar22);
    lVar24 = auVar44._8_8_;
    puVar9[-8] = 0x3d3c5f8;
    puVar9[-6] = 0;
    puVar9[-5] = lVar22;
    if (*(long *)(lVar24 + 0x38) == 0) {
      func_0x03256878(lVar24);
    }
    if (auVar44._0_8_ != 0) {
      auVar46 = *(undefined1 (*) [16])(puVar9 + -6);
      auVar47._8_8_ = 0;
      auVar47._0_8_ = auVar44._0_8_;
      lVar24 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
      puVar4 = puVar9 + -4;
      uVar39 = puVar9[-8];
      goto LAB_03d3c85c;
    }
    uVar39 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar39 = func_0x05ac7464(uVar39,0);
    auVar44 = func_0x03280b7c(uVar39,lVar24);
    lVar22 = auVar44._8_8_;
    puVar9[-0xc] = 0x3d3c654;
    puVar9[-10] = 0;
    puVar9[-9] = lVar24;
    if (*(long *)(lVar22 + 0x38) == 0) {
      func_0x03256878(lVar22);
    }
    if (auVar44._0_8_ != 0) {
      auVar47 = *(undefined1 (*) [16])(puVar9 + -10);
      auVar48._8_8_ = 0;
      auVar48._0_8_ = auVar44._0_8_;
      lVar24 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      puVar5 = puVar9 + -8;
      uVar39 = puVar9[-0xc];
      goto LAB_03d3c8e4;
    }
    uVar39 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar39 = func_0x05ac7464(uVar39,0);
    auVar44 = func_0x03280b7c(uVar39,lVar22);
    lVar24 = auVar44._8_8_;
    puVar9[-0x10] = 0x3d3c6b0;
    puVar9[-0xe] = 0;
    puVar9[-0xd] = lVar22;
    if (*(long *)(lVar24 + 0x38) == 0) {
      func_0x03256878(lVar24);
    }
    if (auVar44._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x03d3c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar9 = (undefined8 *)
               (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x38) + 8))(auVar44._0_8_,0);
      return puVar9;
    }
    uVar39 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar39 = func_0x05ac7464(uVar39,0);
    auVar44 = func_0x03280b7c(uVar39,lVar24);
    puVar9[-0x14] = 0x3d3c710;
    puVar9[-0x13] = puVar36;
    puVar9[-0x12] = 0;
    puVar9[-0x11] = lVar24;
    puVar16 = puVar10;
    if (puVar10[7] == 0) {
      func_0x03256878(puVar10);
    }
    if (auVar44._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x03d3c754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar9 = (undefined8 *)
               (*(code *)**(undefined8 **)(puVar10[7] + 0x10))(auVar44._0_8_,auVar44._8_8_);
      return puVar9;
    }
    uVar39 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar39 = func_0x05ac7464(uVar39,0);
    auVar45 = func_0x03280b7c(uVar39,puVar10);
    uVar39 = auVar45._8_8_;
    puVar3 = puVar9 + -0x18;
    puVar9[-0x18] = 0x3d3c774;
    puVar9[-0x17] = 0;
    puVar9[-0x16] = auVar44._8_8_;
    puVar9[-0x15] = puVar10;
    puVar10 = puVar16;
    if (puVar16[7] == 0) {
      func_0x03256878(puVar16);
    }
    if (auVar45._0_8_ == 0) {
      uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
      uVar11 = func_0x05ac7464(uVar11,0);
      uVar42 = 0x3d3c7d4;
      auVar46 = func_0x03280b7c(uVar11,puVar16);
      puVar36 = (undefined1 *)0x0;
      goto LAB_03d3c7d4;
    }
    lVar24 = puVar9[-0x16];
    puVar10 = *(undefined8 **)(puVar16[7] + 0x10);
    puVar6 = puVar9 + -0x14;
    uVar39 = puVar9[-0x18];
    auVar49._8_8_ = puVar9[-0x15];
    auVar49._0_8_ = puVar9[-0x17];
  }
  else {
    uVar39 = puVar9[-2];
    puVar16 = (undefined8 *)puVar9[-1];
    auVar46._8_8_ = 0;
    auVar46._0_8_ = auVar44._0_8_;
    puVar10 = *(undefined8 **)(*(long *)(lVar22 + 0x38) + 8);
    uVar42 = puVar9[-4];
    puVar3 = puVar9;
LAB_03d3c7d4:
    puVar4 = puVar3 + -4;
    puVar3[-4] = uVar42;
    puVar3[-3] = puVar36;
    puVar3[-2] = uVar39;
    puVar3[-1] = puVar16;
    plVar34 = (long *)puVar10[7];
    if (plVar34 == (long *)0x0) {
      func_0x03256878(puVar10);
      plVar34 = (long *)puVar10[7];
    }
    if ((*(byte *)(*plVar34 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar16 = (undefined8 *)func_0x03280ca0();
    lVar24 = *(long *)(puVar10[7] + 8);
    func_0x04fd7fb0(puVar16,0xfffffffe);
    if (puVar16 != (undefined8 *)0x0) {
      puVar16[7] = auVar46._0_8_;
      func_0x032809c4(puVar16 + 7,auVar46._0_8_);
      puVar16[5] = auVar46._8_8_;
      func_0x032809c4(puVar16 + 5,auVar46._8_8_);
      return puVar16;
    }
    uVar39 = 0x3d3c85c;
    auVar47 = func_0x03280cac();
    puVar36 = (undefined1 *)0x0;
LAB_03d3c85c:
    puVar5 = (undefined8 *)((long)puVar4 + -0x20);
    *(undefined8 *)((long)puVar4 + -0x20) = uVar39;
    *(undefined1 **)((long)puVar4 + -0x18) = puVar36;
    *(undefined1 (*) [16])((long)puVar4 + -0x10) = auVar46;
    plVar34 = *(long **)(lVar24 + 0x38);
    if (plVar34 == (long *)0x0) {
      func_0x03256878(lVar24);
      plVar34 = *(long **)(lVar24 + 0x38);
    }
    if ((*(byte *)(*plVar34 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar10 = (undefined8 *)func_0x03280ca0();
    lVar24 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
    func_0x04fd8508(puVar10,0xfffffffe);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[7] = auVar47._0_8_;
      func_0x032809c4(puVar10 + 7,auVar47._0_8_);
      puVar10[5] = auVar47._8_8_;
      func_0x032809c4(puVar10 + 5,auVar47._8_8_);
      return puVar10;
    }
    uVar39 = 0x3d3c8e4;
    auVar48 = func_0x03280cac();
    puVar36 = (undefined1 *)0x0;
LAB_03d3c8e4:
    *(undefined8 *)((long)puVar5 + -0x20) = uVar39;
    *(undefined1 **)((long)puVar5 + -0x18) = puVar36;
    *(undefined1 (*) [16])((long)puVar5 + -0x10) = auVar47;
    plVar34 = *(long **)(lVar24 + 0x38);
    if (plVar34 == (long *)0x0) {
      func_0x03256878(lVar24);
      plVar34 = *(long **)(lVar24 + 0x38);
    }
    if ((*(byte *)(*plVar34 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar10 = (undefined8 *)func_0x03280ca0();
    lVar24 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
    func_0x04fd8a60(puVar10,0xfffffffe);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[8] = auVar48._0_8_;
      func_0x032809c4(puVar10 + 8,auVar48._0_8_);
      puVar10[6] = auVar48._8_8_;
      func_0x032809c4(puVar10 + 6,auVar48._8_8_);
      return puVar10;
    }
    auVar49 = func_0x03280cac();
    puVar6 = (undefined8 *)((long)puVar5 + -0x50);
    *(undefined8 *)((long)puVar5 + -0x50) = 0x3d3c96c;
    *(undefined **)((long)puVar5 + -0x40) = puVar15;
    *(undefined8 *)((long)puVar5 + -0x38) = 0;
    *(undefined1 (*) [16])((long)puVar5 + -0x30) = auVar48;
    plVar34 = *(long **)(lVar24 + 0x38);
    if (plVar34 == (long *)0x0) {
      func_0x03256878(lVar24);
      plVar34 = *(long **)(lVar24 + 0x38);
    }
    if ((*(byte *)(*plVar34 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar16 = (undefined8 *)func_0x03280ca0();
    puVar10 = *(undefined8 **)(*(long *)(lVar24 + 0x38) + 8);
    (*(code *)*puVar10)(puVar16,0xfffffffe);
    if (puVar16 != (undefined8 *)0x0) {
      func_0x02f17738(puVar16,*(long *)(**(long **)(lVar24 + 0x38) + 0x80) + 0xc0,auVar49._0_8_);
      func_0x02f17738(puVar16,*(long *)(**(long **)(lVar24 + 0x38) + 0x80) + 0x80,auVar49._8_8_);
      return puVar16;
    }
    uVar39 = 0x3d3ca18;
    auVar45 = func_0x03280cac();
    puVar15 = (undefined *)0x0;
  }
  *(undefined8 *)((long)puVar6 + -0x20) = uVar39;
  *(long *)((long)puVar6 + -0x18) = auVar49._0_8_;
  *(long *)((long)puVar6 + -0x10) = lVar24;
  *(long *)((long)puVar6 + -8) = auVar49._8_8_;
  plVar34 = (long *)puVar10[7];
  if (plVar34 == (long *)0x0) {
    func_0x03256878(puVar10);
    plVar34 = (long *)puVar10[7];
  }
  if ((*(byte *)(*plVar34 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar16 = (undefined8 *)func_0x03280ca0();
  lVar24 = *(long *)(puVar10[7] + 8);
  func_0x04fd99ec(puVar16,0xfffffffe);
  if (puVar16 != (undefined8 *)0x0) {
    puVar16[9] = auVar45._0_8_;
    func_0x032809c4(puVar16 + 9,auVar45._0_8_);
    puVar16[7] = auVar45._8_8_;
    func_0x032809c4(puVar16 + 7,auVar45._8_8_);
    return puVar16;
  }
  auVar44 = func_0x03280cac();
  plVar34 = auVar44._0_8_;
  *(undefined8 *)((long)puVar6 + -0x50) = 0x3d3caa0;
  *(undefined8 **)((long)puVar6 + -0x48) = puVar9;
  *(undefined **)((long)puVar6 + -0x40) = puVar15;
  *(undefined8 *)((long)puVar6 + -0x38) = 0;
  *(undefined1 (*) [16])((long)puVar6 + -0x30) = auVar45;
  puVar10 = (undefined8 *)(auVar44._8_8_ & 0xffffffff);
  lVar22 = lVar24;
  if (*(long *)(lVar24 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar24 + 0x38) == 0) {
      func_0x03256878(lVar24);
    }
  }
  puVar12 = puVar15;
  if (plVar34 == (long *)0x0) {
LAB_03d3cd94:
    uVar39 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar39 = func_0x05ac7464(uVar39,0);
    puVar15 = puVar12;
LAB_03d3cdc0:
    func_0x03280b7c(uVar39,lVar24);
  }
  else {
    lVar26 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    plVar13 = (long *)func_0x03280b90(plVar34,lVar26);
    if (plVar13 != (long *)0x0) {
      lVar20 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      lVar21 = *plVar13;
      uVar29 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar20) {
            puVar9 = (undefined8 *)(lVar21 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3cbd8;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar13,lVar20,0);
LAB_03d3cbd8:
                    /* WARNING: Could not recover jumptable at 0x03d3cbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar9 = (undefined8 *)(*(code *)*puVar9)(plVar13,puVar10,puVar9[1]);
      return puVar9;
    }
    if (auVar44._8_4_ < 0) {
      uVar39 = func_0x03280a2c(PTR_DAT_07751628);
      uVar39 = func_0x05ac74c0(uVar39,0);
      goto LAB_03d3cdc0;
    }
    lVar26 = **(long **)(lVar24 + 0x38);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    lVar27 = *plVar34;
    uVar29 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar29 != 0) {
      piVar33 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == lVar26) {
          puVar16 = (undefined8 *)(lVar27 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3cc00;
        }
        uVar29 = uVar29 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar29 != 0);
    }
    lVar22 = 0;
    puVar16 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3cc00:
    plVar34 = (long *)(*(code *)*puVar16)(plVar34,puVar16[1]);
    puVar12 = PTR_DAT_0774e8e0;
    if (plVar34 != (long *)0x0) {
      do {
        puVar9 = puVar10;
        lVar26 = *plVar34;
        uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar29 != 0) {
          piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == *(long *)puVar12) {
              puVar10 = (undefined8 *)(lVar26 + (long)*piVar33 * 0x10 + 0x138);
              goto LAB_03d3cc6c;
            }
            uVar29 = uVar29 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar29 != 0);
        }
        lVar22 = 0;
        puVar10 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3cc6c:
        uVar29 = (*(code *)*puVar10)(plVar34,puVar10[1]);
        if ((uVar29 & 1) == 0) {
          uVar39 = func_0x03280a2c(PTR_DAT_07751628);
          uVar39 = func_0x05ac74c0(uVar39,0);
          func_0x03280b7c(uVar39,lVar24);
          goto LAB_03d3cd94;
        }
        puVar10 = (undefined8 *)(ulong)((int)puVar9 - 1);
      } while ((int)puVar9 != 0);
      lVar24 = *(long *)(*(long *)(lVar24 + 0x38) + 0x28);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      lVar26 = *plVar34;
      uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar24) {
            puVar10 = (undefined8 *)(lVar26 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3cce8;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      lVar22 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3cce8:
      puVar10 = (undefined8 *)(*(code *)*puVar10)(plVar34,puVar10[1]);
      lVar24 = 0;
      if (plVar34 == (long *)0x0) goto LAB_03d3cd60;
      goto LAB_03d3cd00;
    }
  }
  puVar12 = puVar15;
  func_0x03280cac();
  while( true ) {
    auVar43 = func_0x03280ca4(lVar24);
    uVar39 = auVar43._0_8_;
    if (auVar43._8_4_ != 1) break;
    plVar13 = (long *)func_0x072ce910(uVar39);
    lVar24 = *plVar13;
    func_0x072ce920();
    puVar10 = (undefined8 *)0x0;
    if (plVar34 != (long *)0x0) {
LAB_03d3cd00:
      lVar26 = *plVar34;
      uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar16 = (undefined8 *)(lVar26 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3cd54;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      lVar22 = 0;
      puVar16 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3cd54:
      (*(code *)*puVar16)(plVar34,puVar16[1]);
    }
LAB_03d3cd60:
    if (lVar24 == 0) {
      return puVar10;
    }
  }
  if (plVar34 != (long *)0x0) {
    lVar24 = *plVar34;
    uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar29 != 0) {
      piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar10 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3ce6c;
        }
        uVar29 = uVar29 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar29 != 0);
    }
    lVar22 = 0;
    puVar10 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3ce6c:
    (*(code *)*puVar10)(plVar34,puVar10[1]);
  }
  func_0x03365958(uVar39);
  func_0x03280ca4(0);
  auVar44 = func_0x02f09514();
  plVar13 = auVar44._0_8_;
  *(undefined8 *)((long)puVar6 + -0x80) = 0x3d3ce90;
  *(undefined8 **)((long)puVar6 + -0x78) = puVar9;
  *(undefined **)((long)puVar6 + -0x70) = puVar12;
  *(undefined8 *)((long)puVar6 + -0x68) = uVar39;
  *(undefined8 *)((long)puVar6 + -0x60) = 0;
  *(long **)((long)puVar6 + -0x58) = plVar34;
  puVar10 = (undefined8 *)(auVar44._8_8_ & 0xffffffff);
  lVar24 = lVar22;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar22 + 0x38) == 0) {
      func_0x03256878(lVar22);
    }
  }
  puVar15 = puVar12;
  if (plVar13 == (long *)0x0) {
LAB_03d3d184:
    uVar39 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar39 = func_0x05ac7464(uVar39,0);
    puVar12 = puVar15;
LAB_03d3d1b0:
    func_0x03280b7c(uVar39,lVar22);
  }
  else {
    lVar26 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    plVar34 = (long *)func_0x03280b90(plVar13,lVar26);
    if (plVar34 != (long *)0x0) {
      lVar20 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      lVar21 = *plVar34;
      uVar29 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar20) {
            puVar9 = (undefined8 *)(lVar21 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3cfc8;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar34,lVar20,0);
LAB_03d3cfc8:
                    /* WARNING: Could not recover jumptable at 0x03d3cfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar9 = (undefined8 *)(*(code *)*puVar9)(plVar34,puVar10,puVar9[1]);
      return puVar9;
    }
    if (auVar44._8_4_ < 0) {
      uVar39 = func_0x03280a2c(PTR_DAT_07751628);
      uVar39 = func_0x05ac74c0(uVar39,0);
      goto LAB_03d3d1b0;
    }
    lVar26 = **(long **)(lVar22 + 0x38);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    lVar27 = *plVar13;
    uVar29 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar29 != 0) {
      piVar33 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == lVar26) {
          puVar16 = (undefined8 *)(lVar27 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3cff0;
        }
        uVar29 = uVar29 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar29 != 0);
    }
    lVar24 = 0;
    puVar16 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3cff0:
    plVar13 = (long *)(*(code *)*puVar16)(plVar13,puVar16[1]);
    puVar15 = PTR_DAT_0774e8e0;
    if (plVar13 != (long *)0x0) {
      do {
        puVar9 = puVar10;
        lVar26 = *plVar13;
        uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar29 != 0) {
          piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == *(long *)puVar15) {
              puVar10 = (undefined8 *)(lVar26 + (long)*piVar33 * 0x10 + 0x138);
              goto LAB_03d3d05c;
            }
            uVar29 = uVar29 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar29 != 0);
        }
        lVar24 = 0;
        puVar10 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3d05c:
        uVar29 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        if ((uVar29 & 1) == 0) {
          uVar39 = func_0x03280a2c(PTR_DAT_07751628);
          uVar39 = func_0x05ac74c0(uVar39,0);
          func_0x03280b7c(uVar39,lVar22);
          goto LAB_03d3d184;
        }
        puVar10 = (undefined8 *)(ulong)((int)puVar9 - 1);
      } while ((int)puVar9 != 0);
      lVar22 = *(long *)(*(long *)(lVar22 + 0x38) + 0x28);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar26 = *plVar13;
      uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar26 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3d0d8;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      lVar24 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3d0d8:
      uVar29 = (*(code *)*puVar10)(plVar13,puVar10[1]);
      puVar10 = (undefined8 *)(uVar29 & 0xffffffff);
      lVar22 = 0;
      if (plVar13 == (long *)0x0) goto LAB_03d3d150;
      goto LAB_03d3d0f0;
    }
  }
  puVar15 = puVar12;
  func_0x03280cac();
  while( true ) {
    auVar43 = func_0x03280ca4(lVar22);
    uVar39 = auVar43._0_8_;
    if (auVar43._8_4_ != 1) break;
    plVar34 = (long *)func_0x072ce910(uVar39);
    lVar22 = *plVar34;
    func_0x072ce920();
    puVar10 = (undefined8 *)0x0;
    if (plVar13 != (long *)0x0) {
LAB_03d3d0f0:
      lVar26 = *plVar13;
      uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar16 = (undefined8 *)(lVar26 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3d144;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      lVar24 = 0;
      puVar16 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3d144:
      (*(code *)*puVar16)(plVar13,puVar16[1]);
    }
LAB_03d3d150:
    if (lVar22 == 0) {
      return puVar10;
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar22 = *plVar13;
    uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar29 != 0) {
      piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar10 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3d25c;
        }
        uVar29 = uVar29 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar29 != 0);
    }
    lVar24 = 0;
    puVar10 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3d25c:
    (*(code *)*puVar10)(plVar13,puVar10[1]);
  }
  func_0x03365958(uVar39);
  func_0x03280ca4(0);
  auVar44 = func_0x02f09514();
  plVar34 = auVar44._0_8_;
  *(undefined8 **)((long)puVar6 + -0xe0) = puVar14 + -0xe;
  *(undefined8 *)((long)puVar6 + -0xd8) = 0x3d3d280;
  *(undefined **)((long)puVar6 + -0xd0) = unaff_x28;
  *(long *)((long)puVar6 + -200) = lVar21;
  *(undefined1 **)((long)puVar6 + -0xc0) = puVar41;
  *(long *)((long)puVar6 + -0xb8) = lVar20;
  *(undefined8 **)((long)puVar6 + -0xb0) = puVar23;
  *(undefined8 **)((long)puVar6 + -0xa8) = puVar9;
  *(undefined **)((long)puVar6 + -0xa0) = puVar15;
  *(undefined8 *)((long)puVar6 + -0x98) = uVar39;
  *(undefined8 *)((long)puVar6 + -0x90) = 0;
  *(long **)((long)puVar6 + -0x88) = plVar13;
  lVar20 = tpidr_el0;
  *(undefined8 *)((long)puVar6 + -0xe8) = *(undefined8 *)(lVar20 + 0x28);
  plVar13 = *(long **)(puVar25 + 0x38);
  puVar36 = puVar25;
  if (plVar13 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar13 = *(long **)(puVar25 + 0x38);
    if (plVar13 == (long *)0x0) {
      func_0x03256878(puVar25);
      plVar13 = *(long **)(puVar25 + 0x38);
    }
  }
  uVar30 = (ulong)*(uint *)(plVar13[3] + 0xfc);
  uVar29 = uVar30 + 0xf & 0x1fffffff0;
  puVar40 = (undefined1 *)((long)puVar6 + (-0x100 - uVar29));
  lVar21 = (long)puVar40 - uVar29;
  uVar29 = uVar30;
  func_0x072ce9a0(lVar21,0);
  plVar17 = plVar13;
  if (plVar34 == (long *)0x0) {
LAB_03d3d644:
    uVar39 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar39 = func_0x05ac7464(uVar39,0);
    plVar13 = plVar17;
  }
  else {
    lVar22 = plVar13[1];
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    plVar17 = (long *)func_0x03280b90(plVar34,lVar22);
    if (plVar17 != (long *)0x0) {
      lVar22 = *(long *)(*(long *)(puVar25 + 0x38) + 8);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      *(int *)((long)puVar6 + -0xec) = auVar44._8_4_;
      lVar26 = *plVar17;
      uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar22) {
            lVar22 = lVar26 + (long)*piVar33 * 0x10 + 0x138;
            goto LAB_03d3d418;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      lVar22 = func_0x03256b10(plVar17,lVar22,0);
LAB_03d3d418:
      *(undefined1 **)((long)puVar6 + -0x100) = (undefined1 *)((long)puVar6 + -0xec);
      *(undefined1 **)((long)puVar6 + -0xf8) = puVar40;
      lVar22 = *(long *)(lVar22 + 8);
      puVar36 = (undefined1 *)((long)puVar6 + -0x100);
      (**(code **)(lVar22 + 0x10))(*(undefined8 *)(lVar22 + 8),lVar22,plVar17,puVar36,puVar40);
      goto LAB_03d3d5e8;
    }
    if (-1 < auVar44._8_4_) {
      lVar22 = **(long **)(puVar25 + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar26 = *plVar34;
      uVar31 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar31 != 0) {
        piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar22) {
            puVar9 = (undefined8 *)(lVar26 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3d448;
          }
          uVar31 = uVar31 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar31 != 0);
      }
      uVar29 = 0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3d448:
      plVar34 = (long *)(*(code *)*puVar9)(plVar34,puVar9[1]);
      plVar17 = (long *)PTR_DAT_0774e8e0;
      puVar15 = (undefined *)(auVar44._8_8_ & 0xffffffff);
      if (plVar34 != (long *)0x0) {
        do {
          unaff_x28 = puVar15;
          lVar22 = *plVar34;
          uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar31 != 0) {
            piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == *plVar17) {
                puVar9 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
                goto LAB_03d3d4b4;
              }
              uVar31 = uVar31 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar31 != 0);
          }
          uVar29 = 0;
          puVar9 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3d4b4:
          uVar31 = (*(code *)*puVar9)(plVar34,puVar9[1]);
          if ((uVar31 & 1) == 0) {
            uVar39 = func_0x03280a2c(PTR_DAT_07751628);
            uVar39 = func_0x05ac74c0(uVar39,0);
            func_0x03280b7c(uVar39,puVar25);
            goto LAB_03d3d644;
          }
          puVar15 = (undefined *)(ulong)((int)unaff_x28 - 1);
        } while ((int)unaff_x28 != 0);
        lVar22 = *(long *)(*(long *)(puVar25 + 0x38) + 0x28);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar26 = *plVar34;
        uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar29 != 0) {
          piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == lVar22) {
              lVar22 = lVar26 + (long)*piVar33 * 0x10 + 0x138;
              goto LAB_03d3d530;
            }
            uVar29 = uVar29 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar29 != 0);
        }
        lVar22 = func_0x03256b10(plVar34,lVar22,0);
LAB_03d3d530:
        *(undefined1 **)((long)puVar6 + -0x100) = puVar40;
        lVar22 = *(long *)(lVar22 + 8);
        puVar36 = (undefined1 *)((long)puVar6 + -0x100);
        (**(code **)(lVar22 + 0x10))(*(undefined8 *)(lVar22 + 8),lVar22,plVar34,puVar36,puVar40);
        uVar29 = uVar30;
        puVar9 = (undefined8 *)func_0x072ce970(lVar21,puVar40);
        puVar25 = (undefined1 *)0x0;
        iVar8 = 0xf;
        iVar7 = 0xf;
        if (plVar34 == (long *)0x0) goto LAB_03d3d5c8;
        goto LAB_03d3d568;
      }
      goto LAB_03d3d678;
    }
    uVar39 = func_0x03280a2c(PTR_DAT_07751628);
    uVar39 = func_0x05ac74c0(uVar39,0);
  }
  func_0x03280b7c(uVar39,puVar25);
LAB_03d3d678:
  plVar17 = plVar13;
  func_0x03280cac();
LAB_03d3d67c:
  func_0x03280ca4(puVar25);
  do {
    auVar43 = func_0x072ce990();
    uVar39 = auVar43._0_8_;
    if (auVar43._8_4_ != 1) {
      uVar31 = 0;
      if (plVar34 == (long *)0x0) goto LAB_03d3d72c;
      lVar22 = *plVar34;
      uVar35 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar35 == 0) goto LAB_03d3d704;
      piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      goto LAB_03d3d6ec;
    }
    puVar9 = (undefined8 *)func_0x072ce910(uVar39);
    puVar25 = (undefined1 *)*puVar9;
    puVar9 = (undefined8 *)func_0x072ce920();
    iVar8 = 0;
    iVar7 = 0;
    if (plVar34 != (long *)0x0) {
LAB_03d3d568:
      iVar8 = iVar7;
      lVar22 = *plVar34;
      uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar31 != 0) {
        piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3d5bc;
          }
          uVar31 = uVar31 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar31 != 0);
      }
      uVar29 = 0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3d5bc:
      puVar9 = (undefined8 *)(*(code *)*puVar9)(plVar34,puVar9[1]);
    }
LAB_03d3d5c8:
    if (puVar25 != (undefined1 *)0x0) goto LAB_03d3d67c;
    if ((iVar8 == 0xf) || (iVar8 == 0)) {
      func_0x072ce970(puVar40,lVar21,uVar30);
LAB_03d3d5e8:
      uVar29 = uVar30;
      puVar9 = (undefined8 *)func_0x072ce970(lVar24,puVar40);
    }
    if (*(long *)(lVar20 + 0x28) == *(long *)((long)puVar6 + -0xe8)) {
      return puVar9;
    }
  } while( true );
  while( true ) {
    uVar29 = uVar29 - 1;
    piVar33 = piVar33 + 4;
    if (uVar29 == 0) break;
LAB_03d3db28:
    if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar9 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
      goto LAB_03d3db5c;
    }
  }
LAB_03d3db40:
  uVar30 = 0;
  puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3db5c:
  (*(code *)*puVar9)(plVar13,puVar9[1]);
LAB_03d3db68:
  func_0x03365958(uVar11);
  func_0x03280ca4(0);
  auVar44 = func_0x02f09514();
  plVar34 = auVar44._0_8_;
  *(undefined8 *)(lVar21 + -0xb0) = 0x3d3db80;
  *(long **)(lVar21 + -0xa8) = plVar18;
  *(undefined8 *)(lVar21 + -0xa0) = uVar11;
  *(undefined8 *)(lVar21 + -0x98) = 0;
  *(long **)(lVar21 + -0x90) = plVar13;
  *(long **)(lVar21 + -0x88) = extraout_x8;
  uVar35 = auVar44._8_8_ & 0xffffffff;
  uVar29 = uVar30;
  if (*(long *)(uVar30 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar30 + 0x38) == 0) {
      func_0x03256878(uVar30);
    }
  }
  if (plVar34 == (long *)0x0) {
    uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,uVar30);
    plVar13 = extraout_x8;
  }
  else {
    if (auVar44._8_4_ < 0) {
      return (undefined8 *)0x0;
    }
    lVar24 = *(long *)(*(long *)(uVar30 + 0x38) + 8);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    plVar13 = (long *)func_0x03280b90(plVar34,lVar24);
    if (plVar13 != (long *)0x0) {
      lVar20 = *(long *)(*(long *)(uVar30 + 0x38) + 0x10);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      lVar21 = *plVar13;
      uVar29 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar20) {
            puVar9 = (undefined8 *)(lVar21 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3dcb8;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar13,lVar20,0);
LAB_03d3dcb8:
      iVar7 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      if (iVar7 <= auVar44._8_4_) {
        return (undefined8 *)0x0;
      }
      lVar20 = *(long *)(*(long *)(uVar30 + 0x38) + 8);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      lVar21 = *plVar13;
      uVar29 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar20) {
            puVar9 = (undefined8 *)(lVar21 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3de30;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar13,lVar20,0);
LAB_03d3de30:
      puVar9 = (undefined8 *)(*(code *)*puVar9)(plVar13,auVar44._8_8_ & 0xffffffff,puVar9[1]);
      return puVar9;
    }
    lVar24 = **(long **)(uVar30 + 0x38);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    lVar22 = *plVar34;
    uVar32 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar32 != 0) {
      piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == lVar24) {
          puVar9 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3dd30;
        }
        uVar32 = uVar32 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar32 != 0);
    }
    uVar29 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3dd30:
    plVar13 = (long *)(*(code *)*puVar9)(plVar34,puVar9[1]);
    puVar15 = PTR_DAT_0774e8e0;
    if (plVar13 != (long *)0x0) {
      do {
        lVar24 = *plVar13;
        uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar32 != 0) {
          piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == *(long *)puVar15) {
              puVar9 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
              goto LAB_03d3dd9c;
            }
            uVar32 = uVar32 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar32 != 0);
        }
        uVar29 = 0;
        puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3dd9c:
        uVar32 = (*(code *)*puVar9)(plVar13,puVar9[1]);
        if ((uVar32 & 1) == 0) {
          uVar30 = 0;
          plVar18 = (long *)0x5;
          goto joined_r0x03d3de1c;
        }
        iVar7 = (int)uVar35;
        uVar35 = (ulong)(iVar7 - 1);
      } while (iVar7 != 0);
      lVar24 = *(long *)(*(long *)(uVar30 + 0x38) + 0x38);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      lVar22 = *plVar13;
      uVar30 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar30 != 0) {
        piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar24) {
            puVar9 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3de58;
          }
          uVar30 = uVar30 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar30 != 0);
      }
      uVar29 = 0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3de58:
      auVar44 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      uVar30 = 0;
      plVar18 = (long *)0xb;
      if (plVar13 == (long *)0x0) goto LAB_03d3ded8;
      goto LAB_03d3de78;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar43 = func_0x03280ca4(uVar30);
    uVar11 = auVar43._0_8_;
    if (auVar43._8_4_ != 1) break;
    puVar19 = (ulong *)func_0x072ce910(uVar11);
    uVar30 = *puVar19;
    func_0x072ce920();
    plVar18 = (long *)0x0;
joined_r0x03d3de1c:
    auVar44 = ZEXT816(0);
    if (plVar13 != (long *)0x0) {
LAB_03d3de78:
      lVar24 = *plVar13;
      uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar35 != 0) {
        piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3decc;
          }
          uVar35 = uVar35 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar35 != 0);
      }
      uVar29 = 0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3decc:
      (*(code *)*puVar9)(plVar13,puVar9[1]);
    }
LAB_03d3ded8:
    plVar34 = auVar44._8_8_;
    if (uVar30 == 0) {
      if (((int)plVar18 != 5) && ((int)plVar18 != 0)) {
        return auVar44._0_8_;
      }
      return (undefined8 *)0x0;
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar24 = *plVar13;
    uVar30 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar30 != 0) {
      piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar9 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3dfcc;
        }
        uVar30 = uVar30 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar30 != 0);
    }
    uVar29 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3dfcc:
    (*(code *)*puVar9)(plVar13,puVar9[1]);
  }
  func_0x03365958(uVar11);
  func_0x03280ca4(0);
  auVar44 = func_0x02f09514();
  plVar37 = auVar44._0_8_;
  *(undefined8 *)(lVar21 + -0xe0) = 0x3d3dff0;
  *(long **)(lVar21 + -0xd8) = plVar18;
  *(long **)(lVar21 + -0xd0) = plVar34;
  *(undefined8 *)(lVar21 + -200) = uVar11;
  *(undefined8 *)(lVar21 + -0xc0) = 0;
  *(long **)(lVar21 + -0xb8) = plVar13;
  uVar30 = uVar29;
  if (*(long *)(uVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar29 + 0x38) == 0) {
      func_0x03256878(uVar29);
    }
  }
  if (plVar37 == (long *)0x0) {
    uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,uVar29);
  }
  else {
    if (auVar44._8_4_ < 0) {
      return (undefined8 *)0x0;
    }
    lVar24 = *(long *)(*(long *)(uVar29 + 0x38) + 8);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    plVar34 = (long *)func_0x03280b90(plVar37,lVar24);
    if (plVar34 != (long *)0x0) {
      lVar20 = *(long *)(*(long *)(uVar29 + 0x38) + 0x10);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      lVar21 = *plVar34;
      uVar30 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar30 != 0) {
        piVar33 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar20) {
            puVar9 = (undefined8 *)(lVar21 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3e128;
          }
          uVar30 = uVar30 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar30 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar34,lVar20,0);
LAB_03d3e128:
      iVar7 = (*(code *)*puVar9)(plVar34,puVar9[1]);
      if (iVar7 <= auVar44._8_4_) {
        return (undefined8 *)0x0;
      }
      lVar20 = *(long *)(*(long *)(uVar29 + 0x38) + 8);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      lVar21 = *plVar34;
      uVar29 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar20) {
            puVar9 = (undefined8 *)(lVar21 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3e29c;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar34,lVar20,0);
LAB_03d3e29c:
                    /* WARNING: Could not recover jumptable at 0x03d3e2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar9 = (undefined8 *)(*(code *)*puVar9)(plVar34,auVar44._8_8_ & 0xffffffff,puVar9[1]);
      return puVar9;
    }
    lVar24 = **(long **)(uVar29 + 0x38);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    lVar22 = *plVar37;
    uVar35 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar35 != 0) {
      piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == lVar24) {
          puVar9 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3e1a0;
        }
        uVar35 = uVar35 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar35 != 0);
    }
    uVar30 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar37);
LAB_03d3e1a0:
    plVar13 = (long *)(*(code *)*puVar9)(plVar37,puVar9[1]);
    puVar15 = PTR_DAT_0774e8e0;
    plVar34 = (long *)(auVar44._8_8_ & 0xffffffff);
    if (plVar13 != (long *)0x0) {
      do {
        plVar18 = plVar34;
        lVar24 = *plVar13;
        uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar35 != 0) {
          piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == *(long *)puVar15) {
              puVar9 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
              goto LAB_03d3e20c;
            }
            uVar35 = uVar35 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar35 != 0);
        }
        uVar30 = 0;
        puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3e20c:
        uVar35 = (*(code *)*puVar9)(plVar13,puVar9[1]);
        if ((uVar35 & 1) == 0) {
          uVar29 = 0;
          plVar37 = (long *)0x5;
          goto joined_r0x03d3e288;
        }
        plVar34 = (long *)(ulong)((int)plVar18 - 1);
      } while ((int)plVar18 != 0);
      lVar24 = *(long *)(*(long *)(uVar29 + 0x38) + 0x38);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      lVar22 = *plVar13;
      uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar24) {
            puVar9 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3e2c4;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      uVar30 = 0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3e2c4:
      puVar9 = (undefined8 *)(*(code *)*puVar9)(plVar13,puVar9[1]);
      uVar29 = 0;
      plVar37 = (long *)0xb;
      if (plVar13 == (long *)0x0) goto LAB_03d3e340;
      goto LAB_03d3e2e0;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar43 = func_0x03280ca4(uVar29);
    uVar11 = auVar43._0_8_;
    if (auVar43._8_4_ != 1) break;
    puVar19 = (ulong *)func_0x072ce910(uVar11);
    uVar29 = *puVar19;
    func_0x072ce920();
    plVar37 = (long *)0x0;
joined_r0x03d3e288:
    puVar9 = (undefined8 *)0x0;
    if (plVar13 != (long *)0x0) {
LAB_03d3e2e0:
      lVar24 = *plVar13;
      uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar35 != 0) {
        piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar10 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3e334;
          }
          uVar35 = uVar35 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar35 != 0);
      }
      uVar30 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3e334:
      (*(code *)*puVar10)(plVar13,puVar10[1]);
    }
LAB_03d3e340:
    if (uVar29 == 0) {
      if (((int)plVar37 != 5) && ((int)plVar37 != 0)) {
        return puVar9;
      }
      return (undefined8 *)0x0;
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar24 = *plVar13;
    uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar29 != 0) {
      piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar9 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3e428;
        }
        uVar29 = uVar29 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar29 != 0);
    }
    uVar30 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3e428:
    (*(code *)*puVar9)(plVar13,puVar9[1]);
  }
  func_0x03365958(uVar11);
  func_0x03280ca4(0);
  auVar44 = func_0x02f09514();
  plVar34 = auVar44._0_8_;
  *(undefined1 **)(lVar21 + -0x140) = (undefined1 *)((long)puVar6 + -0xe0);
  *(undefined8 *)(lVar21 + -0x138) = 0x3d3e44c;
  *(undefined **)(lVar21 + -0x130) = unaff_x28;
  *(long *)(lVar21 + -0x128) = lVar20;
  *(long **)(lVar21 + -0x120) = plVar17;
  *(undefined8 *)(lVar21 + -0x118) = uVar39;
  *(ulong *)(lVar21 + -0x110) = uVar31;
  *(long **)(lVar21 + -0x108) = plVar18;
  *(long **)(lVar21 + -0x100) = plVar37;
  *(undefined8 *)(lVar21 + -0xf8) = uVar11;
  *(undefined8 *)(lVar21 + -0xf0) = 0;
  *(long **)(lVar21 + -0xe8) = plVar13;
  *(ulong *)(lVar21 + -0x168) = uVar30;
  lVar20 = tpidr_el0;
  uVar29 = auVar44._8_8_ & 0xffffffff;
  *(undefined8 *)(lVar21 + -0x148) = *(undefined8 *)(lVar20 + 0x28);
  lVar24 = *(long *)(puVar36 + 0x38);
  if (lVar24 == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    lVar24 = *(long *)(puVar36 + 0x38);
    if (lVar24 == 0) {
      func_0x03256878(puVar36);
      lVar24 = *(long *)(puVar36 + 0x38);
    }
  }
  uVar30 = (ulong)*(uint *)(*(long *)(lVar24 + 0x28) + 0xfc);
  uVar31 = uVar30 + 0xf & 0x1fffffff0;
  lVar26 = (lVar21 + -0x170) - uVar31;
  lVar38 = lVar26 - uVar31;
  func_0x072ce9a0(lVar38,0,uVar30);
  lVar27 = lVar38 - uVar31;
  func_0x072ce9a0(lVar27,0,uVar30);
  lVar22 = lVar27;
  if (plVar34 == (long *)0x0) {
    uVar39 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar39 = func_0x05ac7464(uVar39,0);
    func_0x03280b7c(uVar39,puVar36);
  }
  else {
    iVar7 = auVar44._8_4_;
    if (iVar7 < 0) goto LAB_03d3e854;
    lVar24 = *(long *)(lVar24 + 8);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    plVar13 = (long *)func_0x03280b90(plVar34,lVar24);
    if (plVar13 != (long *)0x0) {
      lVar24 = *(long *)(*(long *)(puVar36 + 0x38) + 0x10);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      lVar28 = *plVar13;
      uVar31 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar31 != 0) {
        piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar24) {
            puVar9 = (undefined8 *)(lVar28 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3e5fc;
          }
          uVar31 = uVar31 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar31 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar13,lVar24,0);
LAB_03d3e5fc:
      iVar8 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      if (iVar8 <= iVar7) goto LAB_03d3e854;
      lVar24 = *(long *)(*(long *)(puVar36 + 0x38) + 8);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      *(int *)(lVar21 + -0x14c) = iVar7;
      lVar28 = *plVar13;
      lVar22 = *(long *)(lVar21 + -0x168);
      uVar31 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar31 != 0) {
        piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar24) {
            lVar24 = lVar28 + (long)*piVar33 * 0x10 + 0x138;
            goto LAB_03d3e774;
          }
          uVar31 = uVar31 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar31 != 0);
      }
      lVar24 = func_0x03256b10(plVar13,lVar24,0);
LAB_03d3e774:
      *(long *)(lVar21 + -0x160) = lVar21 + -0x14c;
      *(long *)(lVar21 + -0x158) = lVar26;
      lVar24 = *(long *)(lVar24 + 8);
      (**(code **)(lVar24 + 0x10))
                (*(undefined8 *)(lVar24 + 8),lVar24,plVar13,lVar21 + -0x160,lVar26);
      goto LAB_03d3e878;
    }
    lVar24 = **(long **)(puVar36 + 0x38);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    lVar28 = *plVar34;
    uVar31 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar31 != 0) {
      piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == lVar24) {
          puVar9 = (undefined8 *)(lVar28 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3e67c;
        }
        uVar31 = uVar31 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar31 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar34,lVar24,0);
LAB_03d3e67c:
    plVar34 = (long *)(*(code *)*puVar9)(plVar34,puVar9[1]);
    puVar15 = PTR_DAT_0774e8e0;
    if (plVar34 != (long *)0x0) {
      do {
        lVar24 = *plVar34;
        uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar31 != 0) {
          piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == *(long *)puVar15) {
              puVar9 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
              goto LAB_03d3e6e8;
            }
            uVar31 = uVar31 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar31 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar34,*(long *)puVar15,0);
LAB_03d3e6e8:
        puVar9 = (undefined8 *)(*(code *)*puVar9)(plVar34,puVar9[1]);
        if (((ulong)puVar9 & 1) == 0) {
          puVar36 = (undefined1 *)0x0;
          iVar8 = 5;
          iVar7 = 5;
          goto joined_r0x03d3e760;
        }
        iVar7 = (int)uVar29;
        uVar29 = (ulong)(iVar7 - 1);
      } while (iVar7 != 0);
      lVar24 = *(long *)(*(long *)(puVar36 + 0x38) + 0x38);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      lVar28 = *plVar34;
      uVar31 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar31 != 0) {
        piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar24) {
            lVar24 = lVar28 + (long)*piVar33 * 0x10 + 0x138;
            goto LAB_03d3e7a4;
          }
          uVar31 = uVar31 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar31 != 0);
      }
      lVar24 = func_0x03256b10(plVar34,lVar24,0);
LAB_03d3e7a4:
      *(long *)(lVar21 + -0x160) = lVar26;
      lVar24 = *(long *)(lVar24 + 8);
      (**(code **)(lVar24 + 0x10))
                (*(undefined8 *)(lVar24 + 8),lVar24,plVar34,lVar21 + -0x160,lVar26);
      puVar9 = (undefined8 *)func_0x072ce970(lVar38,lVar26,uVar30);
      puVar36 = (undefined1 *)0x0;
      iVar7 = 0xb;
      iVar8 = 0xb;
      if (plVar34 == (long *)0x0) goto LAB_03d3e83c;
      goto LAB_03d3e7dc;
    }
  }
  func_0x03280cac();
LAB_03d3e8e4:
  func_0x03280ca4(puVar36);
  do {
    auVar43 = func_0x072ce990();
    if (auVar43._8_4_ != 1) {
      if (plVar34 == (long *)0x0) goto LAB_03d3e990;
      lVar20 = *plVar34;
      uVar30 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar30 == 0) goto LAB_03d3e968;
      piVar33 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      break;
    }
    puVar9 = (undefined8 *)func_0x072ce910(auVar43._0_8_);
    puVar36 = (undefined1 *)*puVar9;
    puVar9 = (undefined8 *)func_0x072ce920();
    iVar8 = 0;
    iVar7 = 0;
joined_r0x03d3e760:
    if (plVar34 != (long *)0x0) {
LAB_03d3e7dc:
      iVar7 = iVar8;
      lVar24 = *plVar34;
      uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar31 != 0) {
        piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3e830;
          }
          uVar31 = uVar31 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar31 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar34,*(long *)PTR_DAT_0774e8c8,0);
LAB_03d3e830:
      puVar9 = (undefined8 *)(*(code *)*puVar9)(plVar34,puVar9[1]);
    }
LAB_03d3e83c:
    if (puVar36 != (undefined1 *)0x0) goto LAB_03d3e8e4;
    if (iVar7 == 0) {
LAB_03d3e854:
      func_0x072ce9a0(lVar22,0,uVar30);
      lVar24 = lVar22;
LAB_03d3e86c:
      func_0x072ce970(lVar26,lVar24,uVar30);
      lVar22 = *(long *)(lVar21 + -0x168);
LAB_03d3e878:
      puVar9 = (undefined8 *)func_0x072ce970(lVar22,lVar26,uVar30);
    }
    else {
      lVar24 = lVar38;
      if (iVar7 == 0xb) goto LAB_03d3e86c;
      if (iVar7 == 5) goto LAB_03d3e854;
    }
    if (*(long *)(lVar20 + 0x28) == *(long *)(lVar21 + -0x148)) {
      return puVar9;
    }
  } while( true );
  while( true ) {
    uVar30 = uVar30 - 1;
    piVar33 = piVar33 + 4;
    if (uVar30 == 0) break;
    if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar9 = (undefined8 *)(lVar20 + (long)*piVar33 * 0x10 + 0x138);
      goto LAB_03d3e984;
    }
  }
LAB_03d3e968:
  puVar9 = (undefined8 *)func_0x03256b10(plVar34,*(long *)PTR_DAT_0774e8c8,0);
LAB_03d3e984:
  (*(code *)*puVar9)(plVar34,puVar9[1]);
LAB_03d3e990:
  func_0x03365958(auVar43._0_8_);
  func_0x03280ca4(0);
  lVar20 = func_0x02f09514();
  *(undefined8 *)(lVar27 + -0x10) = 0x3d3e9a8;
  *(ulong *)(lVar27 + -8) = uVar29;
  lVar21 = *(long *)(lVar20 + 0x38);
  if (lVar21 == 0) {
    func_0x03256878(lVar20);
    lVar21 = *(long *)(lVar20 + 0x38);
  }
  lVar21 = *(long *)(lVar21 + 0x10);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  if (*(int *)(lVar21 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  return (undefined8 *)**(undefined8 **)(lVar20 + 0xb8);
  while( true ) {
    uVar35 = uVar35 - 1;
    piVar33 = piVar33 + 4;
    if (uVar35 == 0) break;
LAB_03d3d6ec:
    if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar9 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
      goto LAB_03d3d720;
    }
  }
LAB_03d3d704:
  uVar29 = 0;
  puVar9 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d3d720:
  (*(code *)*puVar9)(plVar34,puVar9[1]);
LAB_03d3d72c:
  func_0x03365958(uVar39);
  func_0x03280ca4(0);
  auVar44 = func_0x02f09514();
  plVar13 = auVar44._0_8_;
  *(undefined8 *)(lVar21 + -0x40) = 0x3d3d744;
  *(undefined8 *)(lVar21 + -0x30) = 0;
  *(long **)(lVar21 + -0x28) = plVar34;
  *(long *)(lVar21 + -0x20) = lVar21;
  *(undefined1 **)(lVar21 + -0x18) = puVar40;
  *(ulong *)(lVar21 + -0x10) = uVar30;
  *(long *)(lVar21 + -8) = lVar24;
  uVar35 = auVar44._8_8_ & 0xffffffff;
  uVar30 = uVar29;
  if (*(long *)(uVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar29 + 0x38) == 0) {
      func_0x03256878(uVar29);
    }
  }
  *(undefined8 *)(lVar21 + -0x60) = 0;
  *(undefined8 *)(lVar21 + -0x58) = 0;
  *(undefined8 *)(lVar21 + -0x50) = 0;
  plVar18 = plVar34;
  if (plVar13 == (long *)0x0) {
LAB_03d3da84:
    uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar11 = func_0x05ac7464(uVar11,0);
    plVar34 = plVar18;
LAB_03d3dab0:
    func_0x03280b7c(uVar11,uVar29);
  }
  else {
    lVar24 = *(long *)(*(long *)(uVar29 + 0x38) + 8);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    plVar18 = (long *)func_0x03280b90(plVar13,lVar24);
    if (plVar18 != (long *)0x0) {
      lVar20 = *(long *)(*(long *)(uVar29 + 0x38) + 8);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      lVar24 = *plVar18;
      uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar20) {
            puVar9 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3d890;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar18,lVar20,0);
LAB_03d3d890:
      puVar9 = (undefined8 *)(*(code *)*puVar9)(lVar21 + -0x78,plVar18,uVar35,puVar9[1]);
      lVar20 = *(long *)(lVar21 + -0x68);
      lVar24 = *(long *)(lVar21 + -0x70);
      lVar21 = *(long *)(lVar21 + -0x78);
      goto LAB_03d3da48;
    }
    if (auVar44._8_4_ < 0) {
      uVar11 = func_0x03280a2c(PTR_DAT_07751628);
      uVar11 = func_0x05ac74c0(uVar11,0);
      goto LAB_03d3dab0;
    }
    lVar24 = **(long **)(uVar29 + 0x38);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    lVar22 = *plVar13;
    uVar32 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar32 != 0) {
      piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == lVar24) {
          puVar9 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_03d3d8bc;
        }
        uVar32 = uVar32 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar32 != 0);
    }
    uVar30 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3d8bc:
    plVar13 = (long *)(*(code *)*puVar9)(plVar13,puVar9[1]);
    plVar18 = (long *)PTR_DAT_0774e8e0;
    if (plVar13 != (long *)0x0) {
      do {
        uVar31 = uVar35;
        lVar24 = *plVar13;
        uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar35 != 0) {
          piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == *plVar18) {
              puVar9 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
              goto LAB_03d3d928;
            }
            uVar35 = uVar35 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar35 != 0);
        }
        uVar30 = 0;
        puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3d928:
        uVar35 = (*(code *)*puVar9)(plVar13,puVar9[1]);
        if ((uVar35 & 1) == 0) {
          uVar11 = func_0x03280a2c(PTR_DAT_07751628);
          uVar11 = func_0x05ac74c0(uVar11,0);
          func_0x03280b7c(uVar11,uVar29);
          goto LAB_03d3da84;
        }
        uVar35 = (ulong)((int)uVar31 - 1);
      } while ((int)uVar31 != 0);
      lVar24 = *(long *)(*(long *)(uVar29 + 0x38) + 0x28);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      lVar22 = *plVar13;
      uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar29 != 0) {
        piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == lVar24) {
            puVar9 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3d9a4;
          }
          uVar29 = uVar29 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar29 != 0);
      }
      uVar30 = 0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3d9a4:
      puVar9 = (undefined8 *)(*(code *)*puVar9)(lVar21 + -0x78,plVar13,puVar9[1]);
      uVar29 = 0;
      iVar7 = 0xf;
      *(undefined8 *)(lVar21 + -0x58) = *(undefined8 *)(lVar21 + -0x70);
      *(undefined8 *)(lVar21 + -0x60) = *(undefined8 *)(lVar21 + -0x78);
      *(undefined8 *)(lVar21 + -0x50) = *(undefined8 *)(lVar21 + -0x68);
      if (plVar13 == (long *)0x0) goto LAB_03d3da30;
      goto LAB_03d3d9d0;
    }
  }
  plVar18 = plVar34;
  func_0x03280cac();
  do {
    auVar43 = func_0x03280ca4(uVar29);
    uVar11 = auVar43._0_8_;
    if (auVar43._8_4_ != 1) {
      if (plVar13 == (long *)0x0) goto LAB_03d3db68;
      lVar24 = *plVar13;
      uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar29 == 0) goto LAB_03d3db40;
      piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      goto LAB_03d3db28;
    }
    puVar19 = (ulong *)func_0x072ce910(uVar11);
    uVar29 = *puVar19;
    puVar9 = (undefined8 *)func_0x072ce920();
    iVar7 = 0;
    if (plVar13 != (long *)0x0) {
LAB_03d3d9d0:
      lVar24 = *plVar13;
      uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar35 != 0) {
        piVar33 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar24 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03d3da24;
          }
          uVar35 = uVar35 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar35 != 0);
      }
      uVar30 = 0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3da24:
      puVar9 = (undefined8 *)(*(code *)*puVar9)(plVar13,puVar9[1]);
    }
LAB_03d3da30:
  } while (uVar29 != 0);
  if ((iVar7 != 0xf) && (iVar7 != 0)) {
    return puVar9;
  }
  lVar20 = *(long *)(lVar21 + -0x50);
  lVar24 = *(long *)(lVar21 + -0x58);
  lVar21 = *(long *)(lVar21 + -0x60);
LAB_03d3da48:
  extraout_x8[2] = lVar20;
  extraout_x8[1] = lVar24;
  *extraout_x8 = lVar21;
  return puVar9;
}

