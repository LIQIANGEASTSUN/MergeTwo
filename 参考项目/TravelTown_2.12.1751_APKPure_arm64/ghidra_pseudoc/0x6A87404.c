/* Ghidra 12.1.2 native pseudocode; RVA 0x6A87404; Merger.MergeBoard.Logic.CombineValidators.ItemConsumableCombinerValidator.ToggleVisuals; status ok */

undefined8 *
Merger_MergeBoard_Logic_CombineValidators_ItemConsumableCombinerValidator__ToggleVisuals
          (undefined8 param_1,long *param_2,long *param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  undefined8 uVar27;
  long *plVar28;
  undefined8 uVar29;
  long *plVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 auStack_8b0 [2];
  undefined1 auStack_8a0 [16];
  long alStack_890 [5];
  undefined1 auStack_868 [16];
  long lStack_858;
  undefined8 uStack_850;
  undefined1 auStack_848 [16];
  long alStack_838 [2];
  undefined1 auStack_828 [16];
  long lStack_818;
  undefined8 uStack_810;
  undefined1 auStack_808 [16];
  long lStack_7f8;
  long alStack_7f0 [4];
  long alStack_7d0 [106];
  long alStack_480 [2];
  undefined8 **ppuStack_470;
  undefined8 *puStack_468;
  long lStack_460;
  undefined8 *puStack_458;
  long *plStack_450;
  long lStack_448;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000007e2a7a4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2a7a4 = 1;
  }
  puVar12 = PTR_DAT_077c1d88;
  if (param_3 != (long *)0x0) {
    lVar24 = *param_3;
    uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_077c1d88) {
          puVar13 = (undefined8 *)(lVar24 + (long)(*piVar26 + 0x5f) * 0x10 + 0x138);
          goto LAB_06b87498;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b87498:
    (*(code *)*puVar13)(param_3,param_4 & 1,puVar13[1]);
    if (param_2 != (long *)0x0) {
      lVar24 = *param_2;
      uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)puVar12) {
            puVar13 = (undefined8 *)(lVar24 + (long)(*piVar26 + 9) * 0x10 + 0x138);
            goto LAB_06b874fc;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar12,9);
LAB_06b874fc:
                    /* WARNING: Could not recover jumptable at 0x06b87514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar13 = (undefined8 *)(*(code *)*puVar13)(param_2,param_4 & 1,puVar13[1]);
      return puVar13;
    }
  }
  lVar24 = func_0x03280cac();
  puVar12 = PTR_DAT_07831d58;
  uStack_70 = 0x6b8751c;
  if ((bRam0000000007e2a852 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e69d8);
    func_0x03280a18(PTR_DAT_0774eab0);
    func_0x03280a18(PTR_DAT_077e69e0);
    func_0x03280a18(PTR_DAT_07831d60);
    func_0x03280a18(PTR_DAT_07831d58);
    bRam0000000007e2a852 = 1;
  }
  lVar14 = *(long *)puVar12;
  uVar27 = *(undefined8 *)(lVar24 + 0x20);
  if (*(int *)(lVar14 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar14 = *(long *)puVar12;
  }
  puVar3 = PTR_DAT_077e69d8;
  puVar2 = PTR_DAT_0774eab0;
  lVar24 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
  if (lVar24 == 0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar14 = *(long *)puVar12;
    }
    uVar29 = **(undefined8 **)(lVar14 + 0xb8);
    lVar24 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e69e0);
    func_0x053569b8(lVar24,uVar29,*(undefined8 *)PTR_DAT_07831d60,0);
    plVar15 = (long *)(*(long *)(*(long *)puVar12 + 0xb8) + 8);
    *plVar15 = lVar24;
    func_0x032809c4(plVar15,lVar24);
  }
  lVar14 = *(long *)puVar3;
  lStack_80 = func_0x03d50a94(uVar27,lVar24);
  lVar24 = *(long *)puVar2;
  if (*(long *)(lVar24 + 0x38) == 0) {
    func_0x03256878(lVar24);
  }
  if (lStack_80 != 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x04d31d44(&uStack_70,lStack_80,*(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x10));
    puVar13 = (undefined8 *)
              func_0x04d32318(&stack0xffffffffffffffa0,
                              *(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x18));
    return puVar13;
  }
  uVar27 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar27 = func_0x05ac7464(uVar27,0);
  auStack_c0 = func_0x03280b7c(uVar27,lVar24);
  lVar22 = auStack_c0._8_8_;
  uStack_90 = 0x3d5b960;
  lStack_78 = lVar24;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  if (auStack_c0._0_8_ != 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    func_0x04d323d8(&uStack_b0,auStack_c0._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
    uStack_98 = uStack_a8;
    uStack_a0 = uStack_b0;
    puVar13 = (undefined8 *)
              func_0x04d32a1c(&uStack_a0,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x18));
    return puVar13;
  }
  uVar27 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar27 = func_0x05ac7464(uVar27,0);
  auStack_100 = func_0x03280b7c(uVar27,lVar22);
  lVar24 = auStack_100._8_8_;
  uStack_d0 = 0x3d5b9e8;
  if (*(long *)(lVar24 + 0x38) == 0) {
    func_0x03256878(lVar24);
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  if (auStack_100._0_8_ != 0) {
    uStack_f0 = 0;
    uStack_e8 = 0;
    func_0x04d32adc(&uStack_f0,auStack_100._0_8_,*(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x10));
    uStack_d8 = uStack_e8;
    uStack_e0 = uStack_f0;
    puVar13 = (undefined8 *)
              func_0x04d330a4(&uStack_e0,*(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x18));
    return puVar13;
  }
  uVar27 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar27 = func_0x05ac7464(uVar27,0);
  auStack_140 = func_0x03280b7c(uVar27,lVar24);
  lVar24 = auStack_140._8_8_;
  uStack_110 = 0x3d5ba70;
  if (*(long *)(lVar24 + 0x38) == 0) {
    func_0x03256878(lVar24);
  }
  uStack_120 = 0;
  uStack_118 = 0;
  if (auStack_140._0_8_ != 0) {
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x04d33164(&uStack_130,auStack_140._0_8_,*(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x10));
    uStack_118 = uStack_128;
    uStack_120 = uStack_130;
    puVar13 = (undefined8 *)
              func_0x04d33750(&uStack_120,*(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x18));
    return puVar13;
  }
  uVar27 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar27 = func_0x05ac7464(uVar27,0);
  auStack_180 = func_0x03280b7c(uVar27,lVar24);
  lVar24 = auStack_180._8_8_;
  uStack_150 = 0x3d5baf8;
  if (*(long *)(lVar24 + 0x38) == 0) {
    func_0x03256878(lVar24);
  }
  uStack_160 = 0;
  uStack_158 = 0;
  if (auStack_180._0_8_ != 0) {
    uStack_170 = 0;
    uStack_168 = 0;
    func_0x04d33810(&uStack_170,auStack_180._0_8_,*(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x10));
    uStack_158 = uStack_168;
    uStack_160 = uStack_170;
    puVar13 = (undefined8 *)
              (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x38) + 0x18))(&uStack_160);
    return puVar13;
  }
  uVar27 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar27 = func_0x05ac7464(uVar27,0);
  auVar35 = func_0x03280b7c(uVar27,lVar24);
  puVar13 = auVar35._8_8_;
  uStack_190 = 0x3d5bb84;
  if (puVar13[7] == 0) {
    func_0x03256878(puVar13);
  }
  uStack_1a0 = 0;
  uStack_198 = 0;
  if (auVar35._0_8_ != 0) {
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x04d33ff0(&uStack_1b0,auVar35._0_8_,*(undefined8 *)(puVar13[7] + 0x10));
    uStack_198 = uStack_1a8;
    uStack_1a0 = uStack_1b0;
    puVar13 = (undefined8 *)func_0x04d34630(&uStack_1a0,*(undefined8 *)(puVar13[7] + 0x18));
    return puVar13;
  }
  uVar27 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar27 = func_0x05ac7464(uVar27,0);
  auVar35 = func_0x03280b7c(uVar27,puVar13);
  lVar24 = auVar35._8_8_;
  plVar15 = auVar35._0_8_;
  lVar22 = *(long *)(lVar14 + 0x38);
  if (lVar22 == 0) {
    func_0x03256878(lVar14);
    lVar22 = *(long *)(lVar14 + 0x38);
  }
  puVar9 = (undefined8 *)func_0x053e0f2c(*(undefined8 *)(lVar22 + 0x10));
  plVar21 = *(long **)(*(long *)(lVar14 + 0x38) + 0x28);
  ppuVar19 = (undefined8 **)0x0;
  puVar17 = puVar9;
  plVar28 = plVar21;
  if (plVar21[7] == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (plVar21[7] == 0) {
      func_0x03256878(plVar21);
    }
  }
  puVar12 = PTR_DAT_07774b08;
  if (((plVar15 == (long *)0x0) || (puVar12 = PTR_DAT_07779460, lVar24 == 0)) ||
     (puVar12 = PTR_DAT_07779468, puVar9 == (undefined8 *)0x0)) goto LAB_03d5d734;
  if ((*(byte *)(*(long *)(plVar21[7] + 0x20) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar13 = (undefined8 *)func_0x03280ca0();
  puVar17 = *(undefined8 **)(plVar21[7] + 0x28);
  func_0x04f34d88(puVar13,0);
  lVar14 = *(long *)plVar21[7];
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c(lVar14);
  }
  lVar22 = *plVar15;
  uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == lVar14) {
        puVar10 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_03d5d550;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  puVar17 = (undefined8 *)0x0;
  puVar10 = (undefined8 *)func_0x03256b10(plVar15);
LAB_03d5d550:
  plVar15 = (long *)(*(code *)*puVar10)(plVar15,puVar10[1]);
  puVar12 = PTR_DAT_0774e8e0;
  if (plVar15 != (long *)0x0) {
    do {
      lVar14 = *plVar15;
      uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)puVar12) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5d5b8;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)func_0x03256b10(plVar15);
LAB_03d5d5b8:
      uVar25 = (*(code *)*puVar10)(plVar15,puVar10[1]);
      if ((uVar25 & 1) == 0) {
        plVar21 = (long *)0x0;
        goto LAB_03d5d68c;
      }
      lVar14 = *(long *)(plVar21[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar22 = *plVar15;
      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar14) {
            puVar17 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5d62c;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar17 = (undefined8 *)func_0x03256b10(plVar15,lVar14,0);
LAB_03d5d62c:
      uVar27 = (*(code *)*puVar17)(plVar15,puVar17[1]);
      uVar7 = (**(code **)(lVar24 + 0x18))
                        (*(undefined8 *)(lVar24 + 0x40),uVar27,*(undefined8 *)(lVar24 + 0x28));
      puVar10 = (undefined8 *)puVar9[5];
      puVar17 = (undefined8 *)(*(code *)puVar9[3])(puVar9[8],uVar27);
      if (puVar13 == (undefined8 *)0x0) goto LAB_03d5d710;
      ppuVar19 = *(undefined8 ***)(plVar21[7] + 0x70);
      func_0x04f35b58(puVar13,uVar7);
    } while( true );
  }
LAB_03d5d748:
  func_0x03280cac();
  while( true ) {
    auVar34 = func_0x03280ca4(plVar21);
    if (auVar34._8_4_ != 1) break;
    puVar9 = (undefined8 *)func_0x072ce910(auVar34._0_8_);
    plVar21 = (long *)*puVar9;
    func_0x072ce920();
LAB_03d5d68c:
    if (plVar15 != (long *)0x0) {
      lVar24 = *plVar15;
      uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5d6e4;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar15);
LAB_03d5d6e4:
      (*(code *)*puVar9)(plVar15,puVar9[1]);
    }
    if (plVar21 == (long *)0x0) {
      return puVar13;
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar24 = *plVar15;
    uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar9 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5d7ec;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar15);
LAB_03d5d7ec:
    (*(code *)*puVar9)(plVar15,puVar9[1]);
  }
  func_0x03365958(auVar34._0_8_);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  lVar24 = auVar35._8_8_;
  plVar21 = auVar35._0_8_;
  puVar9 = puVar17;
  ppuVar20 = ppuVar19;
  plVar15 = plVar28;
  if (plVar28[7] == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (plVar28[7] == 0) {
      func_0x03256878(plVar28);
    }
  }
  puVar12 = PTR_DAT_07774b08;
  if (((plVar21 == (long *)0x0) || (puVar12 = PTR_DAT_07779460, lVar24 == 0)) ||
     (puVar12 = PTR_DAT_07779468, puVar17 == (undefined8 *)0x0)) {
LAB_03d5dae8:
    uVar27 = func_0x03280a2c(puVar12);
    uVar27 = func_0x05ac7464(uVar27,0);
    func_0x03280b7c(uVar27,plVar28);
  }
  else {
    if ((*(byte *)(*(long *)(plVar28[7] + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    puVar9 = *(undefined8 **)(plVar28[7] + 0x28);
    func_0x04f610d4(puVar13,ppuVar19);
    lVar14 = *(long *)plVar28[7];
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar22 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5d904;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar9 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5d904:
    plVar21 = (long *)(*(code *)*puVar10)(plVar21,puVar10[1]);
    puVar12 = PTR_DAT_0774e8e0;
    if (plVar21 != (long *)0x0) {
      do {
        lVar14 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)puVar12) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5d96c;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar9 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5d96c:
        uVar25 = (*(code *)*puVar10)(plVar21,puVar10[1]);
        if ((uVar25 & 1) == 0) {
          plVar28 = (long *)0x0;
          goto LAB_03d5da40;
        }
        lVar14 = *(long *)(plVar28[7] + 0x38);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar22 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5d9e0;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar21,lVar14,0);
LAB_03d5d9e0:
        uVar27 = (*(code *)*puVar9)(plVar21,puVar9[1]);
        uVar7 = (**(code **)(lVar24 + 0x18))
                          (*(undefined8 *)(lVar24 + 0x40),uVar27,*(undefined8 *)(lVar24 + 0x28));
        puVar10 = (undefined8 *)puVar17[5];
        puVar9 = (undefined8 *)(*(code *)puVar17[3])(puVar17[8],uVar27);
        if (puVar13 == (undefined8 *)0x0) goto LAB_03d5dac4;
        ppuVar20 = *(undefined8 ***)(plVar28[7] + 0x70);
        func_0x04f61ea4(puVar13,uVar7);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar34 = func_0x03280ca4(plVar28);
    if (auVar34._8_4_ != 1) break;
    puVar17 = (undefined8 *)func_0x072ce910(auVar34._0_8_);
    plVar28 = (long *)*puVar17;
    func_0x072ce920();
LAB_03d5da40:
    if (plVar21 != (long *)0x0) {
      lVar24 = *plVar21;
      uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5da98;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar9 = (undefined8 *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5da98:
      (*(code *)*puVar17)(plVar21,puVar17[1]);
    }
    if (plVar28 == (long *)0x0) {
      return puVar13;
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar24 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar17 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5dba0;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar9 = (undefined8 *)0x0;
    puVar17 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5dba0:
    (*(code *)*puVar17)(plVar21,puVar17[1]);
  }
  func_0x03365958(auVar34._0_8_);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  lVar24 = auVar35._8_8_;
  plVar21 = auVar35._0_8_;
  puVar17 = puVar9;
  ppuVar19 = ppuVar20;
  plVar28 = plVar15;
  if (plVar15[7] == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (plVar15[7] == 0) {
      func_0x03256878(plVar15);
    }
  }
  puVar12 = PTR_DAT_07774b08;
  if (((plVar21 == (long *)0x0) || (puVar12 = PTR_DAT_07779460, lVar24 == 0)) ||
     (puVar12 = PTR_DAT_07779468, puVar9 == (undefined8 *)0x0)) {
LAB_03d5de9c:
    uVar27 = func_0x03280a2c(puVar12);
    uVar27 = func_0x05ac7464(uVar27,0);
    func_0x03280b7c(uVar27,plVar15);
  }
  else {
    if ((*(byte *)(*(long *)(plVar15[7] + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    puVar17 = *(undefined8 **)(plVar15[7] + 0x28);
    func_0x04f91cdc(puVar13,ppuVar20);
    lVar14 = *(long *)plVar15[7];
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar22 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5dcb8;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5dcb8:
    plVar21 = (long *)(*(code *)*puVar10)(plVar21,puVar10[1]);
    puVar12 = PTR_DAT_0774e8e0;
    if (plVar21 != (long *)0x0) {
      do {
        lVar14 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)puVar12) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5dd20;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar17 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5dd20:
        uVar25 = (*(code *)*puVar10)(plVar21,puVar10[1]);
        if ((uVar25 & 1) == 0) {
          plVar15 = (long *)0x0;
          goto LAB_03d5ddf4;
        }
        lVar14 = *(long *)(plVar15[7] + 0x38);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar22 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar14) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5dd94;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar21,lVar14,0);
LAB_03d5dd94:
        uVar27 = (*(code *)*puVar17)(plVar21,puVar17[1]);
        uVar29 = (**(code **)(lVar24 + 0x18))
                           (*(undefined8 *)(lVar24 + 0x40),uVar27,*(undefined8 *)(lVar24 + 0x28));
        puVar17 = (undefined8 *)puVar9[5];
        uVar8 = (*(code *)puVar9[3])(puVar9[8],uVar27);
        if (puVar13 == (undefined8 *)0x0) goto LAB_03d5de78;
        ppuVar19 = *(undefined8 ***)(plVar15[7] + 0x70);
        puVar17 = (undefined8 *)(ulong)(uVar8 & 1);
        func_0x04f92a98(puVar13,uVar29);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar34 = func_0x03280ca4(plVar15);
    if (auVar34._8_4_ != 1) break;
    puVar9 = (undefined8 *)func_0x072ce910(auVar34._0_8_);
    plVar15 = (long *)*puVar9;
    func_0x072ce920();
LAB_03d5ddf4:
    if (plVar21 != (long *)0x0) {
      lVar24 = *plVar21;
      uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5de4c;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5de4c:
      (*(code *)*puVar9)(plVar21,puVar9[1]);
    }
    if (plVar15 == (long *)0x0) {
      return puVar13;
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar24 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar9 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5df54;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5df54:
    (*(code *)*puVar9)(plVar21,puVar9[1]);
  }
  func_0x03365958(auVar34._0_8_);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  lVar24 = auVar35._8_8_;
  plVar21 = auVar35._0_8_;
  puVar9 = puVar17;
  ppuVar20 = ppuVar19;
  plVar15 = plVar28;
  if (plVar28[7] == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (plVar28[7] == 0) {
      func_0x03256878(plVar28);
    }
  }
  puVar12 = PTR_DAT_07774b08;
  if (((plVar21 == (long *)0x0) || (puVar12 = PTR_DAT_07779460, lVar24 == 0)) ||
     (puVar12 = PTR_DAT_07779468, puVar17 == (undefined8 *)0x0)) {
LAB_03d5e24c:
    uVar27 = func_0x03280a2c(puVar12);
    uVar27 = func_0x05ac7464(uVar27,0);
    func_0x03280b7c(uVar27,plVar28);
  }
  else {
    if ((*(byte *)(*(long *)(plVar28[7] + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    puVar9 = *(undefined8 **)(plVar28[7] + 0x28);
    func_0x04fae208(puVar13,ppuVar19);
    lVar14 = *(long *)plVar28[7];
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar22 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5e06c;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar9 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5e06c:
    plVar21 = (long *)(*(code *)*puVar10)(plVar21,puVar10[1]);
    puVar12 = PTR_DAT_0774e8e0;
    if (plVar21 != (long *)0x0) {
      do {
        lVar14 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)puVar12) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5e0d4;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar9 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5e0d4:
        uVar25 = (*(code *)*puVar10)(plVar21,puVar10[1]);
        if ((uVar25 & 1) == 0) {
          plVar28 = (long *)0x0;
          goto LAB_03d5e1a4;
        }
        lVar14 = *(long *)(plVar28[7] + 0x38);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar22 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5e148;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar21,lVar14,0);
LAB_03d5e148:
        uVar27 = (*(code *)*puVar9)(plVar21,puVar9[1]);
        uVar29 = (**(code **)(lVar24 + 0x18))
                           (*(undefined8 *)(lVar24 + 0x40),uVar27,*(undefined8 *)(lVar24 + 0x28));
        puVar9 = (undefined8 *)puVar17[5];
        (*(code *)puVar17[3])(puVar17[8],uVar27);
        if (puVar13 == (undefined8 *)0x0) goto LAB_03d5e228;
        puVar9 = *(undefined8 **)(plVar28[7] + 0x70);
        func_0x04faefb0(puVar13,uVar29);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar34 = func_0x03280ca4(plVar28);
    if (auVar34._8_4_ != 1) break;
    puVar17 = (undefined8 *)func_0x072ce910(auVar34._0_8_);
    plVar28 = (long *)*puVar17;
    func_0x072ce920();
LAB_03d5e1a4:
    if (plVar21 != (long *)0x0) {
      lVar24 = *plVar21;
      uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5e1fc;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar9 = (undefined8 *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5e1fc:
      (*(code *)*puVar17)(plVar21,puVar17[1]);
    }
    if (plVar28 == (long *)0x0) {
      return puVar13;
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar24 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar17 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5e304;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar9 = (undefined8 *)0x0;
    puVar17 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5e304:
    (*(code *)*puVar17)(plVar21,puVar17[1]);
  }
  func_0x03365958(auVar34._0_8_);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  lVar24 = auVar35._8_8_;
  plVar21 = auVar35._0_8_;
  puVar17 = puVar9;
  ppuVar19 = ppuVar20;
  plVar28 = plVar15;
  if (plVar15[7] == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (plVar15[7] == 0) {
      func_0x03256878(plVar15);
    }
  }
  puVar12 = PTR_DAT_07774b08;
  if (((plVar21 == (long *)0x0) || (puVar12 = PTR_DAT_07779460, lVar24 == 0)) ||
     (puVar12 = PTR_DAT_07779468, puVar9 == (undefined8 *)0x0)) {
LAB_03d5e600:
    uVar27 = func_0x03280a2c(puVar12);
    uVar27 = func_0x05ac7464(uVar27,0);
    func_0x03280b7c(uVar27,plVar15);
  }
  else {
    if ((*(byte *)(*(long *)(plVar15[7] + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    puVar17 = *(undefined8 **)(plVar15[7] + 0x28);
    func_0x04fb183c(puVar13,ppuVar20);
    lVar14 = *(long *)plVar15[7];
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar22 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5e41c;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5e41c:
    plVar21 = (long *)(*(code *)*puVar10)(plVar21,puVar10[1]);
    puVar12 = PTR_DAT_0774e8e0;
    if (plVar21 != (long *)0x0) {
      do {
        lVar14 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)puVar12) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5e484;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar17 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5e484:
        uVar25 = (*(code *)*puVar10)(plVar21,puVar10[1]);
        if ((uVar25 & 1) == 0) {
          plVar15 = (long *)0x0;
          goto LAB_03d5e558;
        }
        lVar14 = *(long *)(plVar15[7] + 0x38);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar22 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar14) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5e4f8;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar21,lVar14,0);
LAB_03d5e4f8:
        uVar27 = (*(code *)*puVar17)(plVar21,puVar17[1]);
        uVar29 = (**(code **)(lVar24 + 0x18))
                           (*(undefined8 *)(lVar24 + 0x40),uVar27,*(undefined8 *)(lVar24 + 0x28));
        puVar17 = (undefined8 *)puVar9[5];
        uVar25 = (*(code *)puVar9[3])(puVar9[8],uVar27);
        if (puVar13 == (undefined8 *)0x0) goto LAB_03d5e5dc;
        puVar17 = (undefined8 *)(uVar25 & 0xffffffff);
        ppuVar19 = *(undefined8 ***)(plVar15[7] + 0x70);
        func_0x04fb25ec(puVar13,uVar29);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar34 = func_0x03280ca4(plVar15);
    if (auVar34._8_4_ != 1) break;
    puVar9 = (undefined8 *)func_0x072ce910(auVar34._0_8_);
    plVar15 = (long *)*puVar9;
    func_0x072ce920();
LAB_03d5e558:
    if (plVar21 != (long *)0x0) {
      lVar24 = *plVar21;
      uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5e5b0;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5e5b0:
      (*(code *)*puVar9)(plVar21,puVar9[1]);
    }
    if (plVar15 == (long *)0x0) {
      return puVar13;
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar24 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar9 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5e6b8;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5e6b8:
    (*(code *)*puVar9)(plVar21,puVar9[1]);
  }
  func_0x03365958(auVar34._0_8_);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  lVar24 = auVar35._8_8_;
  plVar21 = auVar35._0_8_;
  puVar9 = puVar17;
  ppuVar20 = ppuVar19;
  plVar15 = plVar28;
  if (plVar28[7] == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (plVar28[7] == 0) {
      func_0x03256878(plVar28);
    }
  }
  puVar12 = PTR_DAT_07774b08;
  if (((plVar21 == (long *)0x0) || (puVar12 = PTR_DAT_07779460, lVar24 == 0)) ||
     (puVar12 = PTR_DAT_07779468, puVar17 == (undefined8 *)0x0)) {
LAB_03d5e9b4:
    uVar27 = func_0x03280a2c(puVar12);
    uVar27 = func_0x05ac7464(uVar27,0);
    func_0x03280b7c(uVar27,plVar28);
  }
  else {
    if ((*(byte *)(*(long *)(plVar28[7] + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    puVar9 = *(undefined8 **)(plVar28[7] + 0x28);
    func_0x04fb4ea8(puVar13,ppuVar19);
    lVar14 = *(long *)plVar28[7];
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar22 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5e7d0;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar9 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5e7d0:
    plVar21 = (long *)(*(code *)*puVar10)(plVar21,puVar10[1]);
    puVar12 = PTR_DAT_0774e8e0;
    if (plVar21 != (long *)0x0) {
      do {
        lVar14 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)puVar12) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5e838;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar9 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5e838:
        uVar25 = (*(code *)*puVar10)(plVar21,puVar10[1]);
        if ((uVar25 & 1) == 0) {
          plVar28 = (long *)0x0;
          goto LAB_03d5e90c;
        }
        lVar14 = *(long *)(plVar28[7] + 0x38);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar22 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5e8ac;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar21,lVar14,0);
LAB_03d5e8ac:
        uVar27 = (*(code *)*puVar9)(plVar21,puVar9[1]);
        uVar29 = (**(code **)(lVar24 + 0x18))
                           (*(undefined8 *)(lVar24 + 0x40),uVar27,*(undefined8 *)(lVar24 + 0x28));
        puVar9 = (undefined8 *)puVar17[5];
        uVar25 = (*(code *)puVar17[3])(puVar17[8],uVar27);
        if (puVar13 == (undefined8 *)0x0) goto LAB_03d5e990;
        puVar9 = (undefined8 *)(uVar25 & 0xffffffff);
        ppuVar20 = *(undefined8 ***)(plVar28[7] + 0x70);
        func_0x04fb5c58(puVar13,uVar29);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar34 = func_0x03280ca4(plVar28);
    if (auVar34._8_4_ != 1) break;
    puVar17 = (undefined8 *)func_0x072ce910(auVar34._0_8_);
    plVar28 = (long *)*puVar17;
    func_0x072ce920();
LAB_03d5e90c:
    if (plVar21 != (long *)0x0) {
      lVar24 = *plVar21;
      uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5e964;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar9 = (undefined8 *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5e964:
      (*(code *)*puVar17)(plVar21,puVar17[1]);
    }
    if (plVar28 == (long *)0x0) {
      return puVar13;
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar24 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar17 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5ea6c;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar9 = (undefined8 *)0x0;
    puVar17 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5ea6c:
    (*(code *)*puVar17)(plVar21,puVar17[1]);
  }
  func_0x03365958(auVar34._0_8_);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  lVar24 = auVar35._8_8_;
  plVar21 = auVar35._0_8_;
  puVar17 = puVar9;
  ppuVar19 = ppuVar20;
  plVar28 = plVar15;
  if (plVar15[7] == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (plVar15[7] == 0) {
      func_0x03256878(plVar15);
    }
  }
  puVar12 = PTR_DAT_07774b08;
  if (((plVar21 == (long *)0x0) || (puVar12 = PTR_DAT_07779460, lVar24 == 0)) ||
     (puVar12 = PTR_DAT_07779468, puVar9 == (undefined8 *)0x0)) {
LAB_03d5ed68:
    uVar27 = func_0x03280a2c(puVar12);
    uVar27 = func_0x05ac7464(uVar27,0);
    func_0x03280b7c(uVar27,plVar15);
  }
  else {
    if ((*(byte *)(*(long *)(plVar15[7] + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    puVar17 = *(undefined8 **)(plVar15[7] + 0x28);
    func_0x04fe1fd0(puVar13,ppuVar20);
    lVar14 = *(long *)plVar15[7];
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar22 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5eb84;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5eb84:
    plVar21 = (long *)(*(code *)*puVar10)(plVar21,puVar10[1]);
    puVar12 = PTR_DAT_0774e8e0;
    if (plVar21 != (long *)0x0) {
      do {
        lVar14 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)puVar12) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5ebec;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar17 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5ebec:
        uVar25 = (*(code *)*puVar10)(plVar21,puVar10[1]);
        if ((uVar25 & 1) == 0) {
          plVar15 = (long *)0x0;
          goto LAB_03d5ecc0;
        }
        lVar14 = *(long *)(plVar15[7] + 0x38);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar22 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar14) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5ec60;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar21,lVar14,0);
LAB_03d5ec60:
        uVar27 = (*(code *)*puVar17)(plVar21,puVar17[1]);
        uVar29 = (**(code **)(lVar24 + 0x18))
                           (*(undefined8 *)(lVar24 + 0x40),uVar27,*(undefined8 *)(lVar24 + 0x28));
        puVar10 = (undefined8 *)puVar9[5];
        puVar17 = (undefined8 *)(*(code *)puVar9[3])(puVar9[8],uVar27);
        if (puVar13 == (undefined8 *)0x0) goto LAB_03d5ed44;
        ppuVar19 = *(undefined8 ***)(plVar15[7] + 0x70);
        func_0x04fe2d7c(puVar13,uVar29);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar34 = func_0x03280ca4(plVar15);
    if (auVar34._8_4_ != 1) break;
    puVar9 = (undefined8 *)func_0x072ce910(auVar34._0_8_);
    plVar15 = (long *)*puVar9;
    func_0x072ce920();
LAB_03d5ecc0:
    if (plVar21 != (long *)0x0) {
      lVar24 = *plVar21;
      uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5ed18;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5ed18:
      (*(code *)*puVar9)(plVar21,puVar9[1]);
    }
    if (plVar15 == (long *)0x0) {
      return puVar13;
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar24 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5ee20;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5ee20:
    (*(code *)*puVar13)(plVar21,puVar13[1]);
  }
  func_0x03365958(auVar34._0_8_);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  lStack_460 = auVar35._8_8_;
  plVar21 = auVar35._0_8_;
  alStack_480[1] = tpidr_el0;
  lStack_448 = *(long *)(alStack_480[1] + 0x28);
  puVar13 = (undefined8 *)plVar28[7];
  plVar15 = plVar28;
  ppuStack_470 = ppuVar19;
  puStack_468 = puVar17;
  if (puVar13 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    puVar13 = (undefined8 *)plVar28[7];
    if (puVar13 == (undefined8 *)0x0) {
      func_0x03256878(plVar28);
      puVar13 = (undefined8 *)plVar28[7];
    }
  }
  puVar9 = (undefined8 *)(ulong)*(uint *)(puVar13[9] + 0xfc);
  uVar25 = (long)puVar9 + 0xfU & 0x1fffffff0;
  puVar10 = (undefined8 *)((long)alStack_480 - uVar25);
  puVar31 = (undefined8 *)((long)puVar10 - uVar25);
  puVar32 = (undefined8 *)((long)puVar31 - uVar25);
  puVar33 = (undefined8 *)
            ((long)puVar32 - ((ulong)*(uint *)(puVar13[0xb] + 0xfc) + 0xf & 0x1fffffff0));
  plVar30 = (long *)((long)puVar33 - ((ulong)*(uint *)(puVar13[0xd] + 0xfc) + 0xf & 0x1fffffff0));
  lVar24 = (long)plVar30 - uVar25;
  puVar17 = puVar9;
  func_0x072ce9a0(lVar24,0);
  puVar12 = PTR_DAT_07774b08;
  if (((plVar21 == (long *)0x0) || (puVar12 = PTR_DAT_07779460, lStack_460 == 0)) ||
     (puVar12 = PTR_DAT_07779468, puStack_468 == (undefined8 *)0x0)) {
LAB_03d5f294:
    uVar27 = func_0x03280a2c(puVar12);
    uVar27 = func_0x05ac7464(uVar27,0);
    func_0x03280b7c(uVar27,plVar28);
  }
  else {
    if ((*(byte *)(puVar13[4] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    puVar17 = *(undefined8 **)(plVar28[7] + 0x28);
    (*(code *)*puVar17)(puVar13,ppuStack_470);
    lVar14 = *(long *)plVar28[7];
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar22 = *plVar21;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar14) {
          puVar11 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5efe4;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5efe4:
    plVar21 = (long *)(*(code *)*puVar11)(plVar21,puVar11[1]);
    if (plVar21 != (long *)0x0) {
      do {
        lVar14 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8e0) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03d5f04c;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar17 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5f04c:
        uVar25 = (*(code *)*puVar11)(plVar21,puVar11[1]);
        if ((uVar25 & 1) == 0) {
          plVar28 = (long *)0x0;
          goto LAB_03d5f1d0;
        }
        lVar14 = *(long *)(plVar28[7] + 0x38);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar22 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar14) {
              lVar14 = lVar22 + (long)*piVar26 * 0x10 + 0x138;
              goto LAB_03d5f0c0;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        lVar14 = func_0x03256b10(plVar21,lVar14,0);
LAB_03d5f0c0:
        lVar14 = *(long *)(lVar14 + 8);
        puStack_458 = puVar10;
        (**(code **)(lVar14 + 0x10))
                  (*(undefined8 *)(lVar14 + 8),lVar14,plVar21,&puStack_458,puVar10);
        func_0x072ce970(lVar24,puVar10,puVar9);
        func_0x072ce970(puVar31,lVar24,puVar9);
        puStack_458 = puVar31;
        if (-1 < *(int *)(*(long *)(plVar28[7] + 0x48) + 0x28)) {
          puStack_458 = (undefined8 *)*puVar31;
        }
        puVar17 = *(undefined8 **)(plVar28[7] + 0x50);
        plStack_450 = puVar33;
        (*(code *)puVar17[2])(*puVar17,puVar17,lStack_460,&puStack_458,puVar33);
        func_0x072ce970(puVar32,lVar24,puVar9);
        puStack_458 = puVar32;
        if (-1 < *(int *)(*(long *)(plVar28[7] + 0x48) + 0x28)) {
          puStack_458 = (undefined8 *)*puVar32;
        }
        puVar11 = *(undefined8 **)(plVar28[7] + 0x60);
        ppuVar19 = &puStack_458;
        puVar17 = puStack_468;
        plVar15 = plVar30;
        plStack_450 = plVar30;
        (*(code *)puVar11[2])(*puVar11);
        if (puVar13 == (undefined8 *)0x0) goto LAB_03d5f270;
        lVar14 = plVar28[7];
        puStack_458 = puVar33;
        if (-1 < *(int *)(*(long *)(lVar14 + 0x58) + 0x28)) {
          puStack_458 = (undefined8 *)*puVar33;
        }
        plVar15 = plVar30;
        if (-1 < *(int *)(*(long *)(lVar14 + 0x68) + 0x28)) {
          plVar15 = (long *)*plVar30;
        }
        ppuVar19 = &puStack_458;
        puVar17 = puVar13;
        plStack_450 = plVar15;
        (*(code *)(*(undefined8 **)(lVar14 + 0x70))[2])(**(undefined8 **)(lVar14 + 0x70));
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03d5f2ac:
  func_0x03280ca4(plVar28);
  do {
    auVar34 = func_0x072ce990();
    uVar27 = auVar34._0_8_;
    if (auVar34._8_4_ != 1) {
      puVar33 = (undefined8 *)0x0;
      if (plVar21 == (long *)0x0) goto LAB_03d5f35c;
      lVar14 = *plVar21;
      uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar25 == 0) goto LAB_03d5f334;
      piVar26 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      goto LAB_03d5f31c;
    }
    puVar33 = (undefined8 *)func_0x072ce910(uVar27);
    plVar28 = (long *)*puVar33;
    func_0x072ce920();
LAB_03d5f1d0:
    if (plVar21 != (long *)0x0) {
      lVar14 = *plVar21;
      uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar33 = (undefined8 *)(lVar14 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5f228;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar33 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5f228:
      (*(code *)*puVar33)(plVar21,puVar33[1]);
    }
    if (plVar28 != (long *)0x0) goto LAB_03d5f2ac;
    if (*(long *)(alStack_480[1] + 0x28) == lStack_448) {
      return puVar13;
    }
  } while( true );
LAB_03d5d710:
  func_0x03280cac();
  puVar12 = PTR_DAT_07774b08;
  puVar17 = puVar10;
LAB_03d5d734:
  uVar27 = func_0x03280a2c(puVar12);
  uVar27 = func_0x05ac7464(uVar27,0);
  func_0x03280b7c(uVar27,plVar21);
  goto LAB_03d5d748;
LAB_03d5dac4:
  func_0x03280cac();
  puVar12 = PTR_DAT_07774b08;
  puVar9 = puVar10;
  goto LAB_03d5dae8;
LAB_03d5de78:
  func_0x03280cac();
  puVar12 = PTR_DAT_07774b08;
  goto LAB_03d5de9c;
LAB_03d5e228:
  func_0x03280cac();
  puVar12 = PTR_DAT_07774b08;
  goto LAB_03d5e24c;
LAB_03d5e5dc:
  func_0x03280cac();
  puVar12 = PTR_DAT_07774b08;
  goto LAB_03d5e600;
LAB_03d5e990:
  func_0x03280cac();
  puVar12 = PTR_DAT_07774b08;
  goto LAB_03d5e9b4;
LAB_03d5ed44:
  func_0x03280cac();
  puVar12 = PTR_DAT_07774b08;
  puVar17 = puVar10;
  goto LAB_03d5ed68;
LAB_03d5f270:
  func_0x03280cac();
  puVar12 = PTR_DAT_07774b08;
  goto LAB_03d5f294;
LAB_03d5f638:
  func_0x03280cac();
  puVar12 = PTR_DAT_07774b08;
  ppuVar20 = ppuVar19;
LAB_03d5f65c:
  uVar27 = func_0x03280a2c(puVar12);
  uVar27 = func_0x05ac7464(uVar27,0);
  func_0x03280b7c(uVar27,plVar15);
  goto LAB_03d5f670;
  while( true ) {
    uVar25 = uVar25 - 1;
    piVar26 = piVar26 + 4;
    if (uVar25 == 0) break;
LAB_03d5f31c:
    if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_03d5f350;
    }
  }
LAB_03d5f334:
  puVar17 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)func_0x03256b10(plVar21);
LAB_03d5f350:
  (*(code *)*puVar11)(plVar21,puVar11[1]);
LAB_03d5f35c:
  func_0x03365958(uVar27);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  lVar14 = auVar35._8_8_;
  plVar28 = auVar35._0_8_;
  *(undefined8 *)(lVar24 + -0x50) = 0x3d5f374;
  *(undefined8 **)(lVar24 + -0x48) = puVar32;
  *(undefined8 **)(lVar24 + -0x40) = puVar31;
  *(undefined8 **)(lVar24 + -0x38) = puVar10;
  *(undefined8 **)(lVar24 + -0x30) = puVar9;
  *(long *)(lVar24 + -0x28) = lVar24;
  *(undefined8 *)(lVar24 + -0x20) = uVar27;
  *(long **)(lVar24 + -0x18) = plVar21;
  *(undefined8 **)(lVar24 + -0x10) = puVar13;
  *(undefined8 *)(lVar24 + -8) = 0;
  ppuVar20 = ppuVar19;
  if (plVar15[7] == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (plVar15[7] == 0) {
      func_0x03256878(plVar15);
    }
  }
  puVar12 = PTR_DAT_07774b08;
  if (((plVar28 == (long *)0x0) || (puVar12 = PTR_DAT_07779460, lVar14 == 0)) ||
     (puVar12 = PTR_DAT_07779468, puVar17 == (undefined8 *)0x0)) goto LAB_03d5f65c;
  if ((*(byte *)(*(long *)(plVar15[7] + 0x20) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar33 = (undefined8 *)func_0x03280ca0();
  func_0x0501d6f4(puVar33,ppuVar19,*(undefined8 *)(plVar15[7] + 0x28));
  lVar22 = *(long *)plVar15[7];
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c(lVar22);
  }
  lVar23 = *plVar28;
  uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == lVar22) {
        puVar13 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_03d5f468;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  puVar13 = (undefined8 *)func_0x03256b10(plVar28,lVar22,0);
LAB_03d5f468:
  plVar28 = (long *)(*(code *)*puVar13)(plVar28,puVar13[1]);
  puVar12 = PTR_DAT_0774e8e0;
  if (plVar28 != (long *)0x0) {
    do {
      lVar22 = *plVar28;
      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)puVar12) {
            puVar13 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5f4d0;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar28,*(long *)puVar12,0);
LAB_03d5f4d0:
      uVar25 = (*(code *)*puVar13)(plVar28,puVar13[1]);
      if ((uVar25 & 1) == 0) {
        plVar15 = (long *)0x0;
        goto LAB_03d5f5b4;
      }
      lVar22 = *(long *)(plVar15[7] + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar23 = *plVar28;
      uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar22) {
            puVar13 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5f544;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar28,lVar22,0);
LAB_03d5f544:
      auVar35 = (*(code *)*puVar13)(plVar28,puVar13[1]);
      uVar27 = (**(code **)(lVar14 + 0x18))
                         (*(undefined8 *)(lVar14 + 0x40),auVar35._0_8_,auVar35._8_8_,
                          *(undefined8 *)(lVar14 + 0x28));
      ppuVar19 = (undefined8 **)puVar17[5];
      auVar35 = (*(code *)puVar17[3])(puVar17[8],auVar35._0_8_,auVar35._8_8_);
      ppuVar20 = auVar35._8_8_;
      if (puVar33 == (undefined8 *)0x0) goto LAB_03d5f638;
      func_0x0501e4b0(puVar33,uVar27,auVar35._0_8_,ppuVar20,*(undefined8 *)(plVar15[7] + 0x70));
    } while( true );
  }
LAB_03d5f670:
  func_0x03280cac();
  while( true ) {
    auVar34 = func_0x03280ca4(plVar15);
    uVar27 = auVar34._0_8_;
    if (auVar34._8_4_ != 1) break;
    puVar13 = (undefined8 *)func_0x072ce910(uVar27);
    plVar15 = (long *)*puVar13;
    func_0x072ce920();
LAB_03d5f5b4:
    if (plVar28 != (long *)0x0) {
      lVar22 = *plVar28;
      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03d5f60c;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_0774e8c8,0);
LAB_03d5f60c:
      (*(code *)*puVar13)(plVar28,puVar13[1]);
    }
    if (plVar15 == (long *)0x0) {
      return puVar33;
    }
  }
  if (plVar28 != (long *)0x0) {
    lVar22 = *plVar28;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03d5f718;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_0774e8c8,0);
LAB_03d5f718:
    (*(code *)*puVar13)(plVar28,puVar13[1]);
  }
  func_0x03365958(uVar27);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  lVar22 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x70) = 0x3d5f73c;
  *(long **)(lVar24 + -0x60) = plVar28;
  *(undefined8 **)(lVar24 + -0x58) = puVar33;
  lVar23 = *(long *)(lVar22 + 0x38);
  if (lVar23 == 0) {
    func_0x03256878(lVar22);
    lVar23 = *(long *)(lVar22 + 0x38);
  }
  lVar23 = *(long *)(lVar23 + 8);
  *(undefined8 *)(lVar24 + -0x70) = *(undefined8 *)(lVar24 + -0x70);
  *(undefined8 *)(lVar24 + -0x68) = 0;
  *(undefined8 *)(lVar24 + -0x60) = *(undefined8 *)(lVar24 + -0x60);
  *(undefined8 *)(lVar24 + -0x58) = *(undefined8 *)(lVar24 + -0x58);
  lVar22 = lVar23;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x053b7404(puVar13,auVar35._0_8_,0,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x18));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  *(undefined8 *)(lVar24 + -0x90) = 0x3d5f878;
  *(undefined8 *)(lVar24 + -0x88) = 0;
  *(undefined8 *)(lVar24 + -0x80) = 0;
  *(long *)(lVar24 + -0x78) = lVar23;
  lVar23 = lVar22;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x053bff7c(puVar13,auVar35._0_8_,auVar35._8_8_,
                    *(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x18));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar36 = func_0x03280b7c(uVar29,lVar22);
  *(undefined8 *)(lVar24 + -0xb0) = 0x3d5f8fc;
  *(undefined8 *)(lVar24 + -0xa8) = 0;
  *(long *)(lVar24 + -0xa0) = auVar35._8_8_;
  *(long *)(lVar24 + -0x98) = lVar22;
  lVar22 = lVar23;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar36._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 0x18))
              (puVar13,auVar36._0_8_,auVar36._8_8_);
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0xd0) = 0x3d5f984;
  *(long *)(lVar24 + -0xc0) = auVar36._8_8_;
  *(long *)(lVar24 + -0xb8) = lVar23;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x0551471c(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar16);
  lVar23 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0xf0) = 0x3d5fa00;
  *(undefined8 *)(lVar24 + -0xe0) = 0;
  *(long *)(lVar24 + -0xd8) = lVar16;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x055172c0(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x110) = 0x3d5fa7c;
  *(undefined8 *)(lVar24 + -0x100) = 0;
  *(long *)(lVar24 + -0xf8) = lVar23;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x040a8790(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar16);
  lVar23 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x130) = 0x3d5faf8;
  *(undefined8 *)(lVar24 + -0x120) = 0;
  *(long *)(lVar24 + -0x118) = lVar16;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x040ab334(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x150) = 0x3d5fb74;
  *(undefined8 *)(lVar24 + -0x140) = 0;
  *(long *)(lVar24 + -0x138) = lVar23;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x040cb958(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar16);
  lVar23 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x170) = 0x3d5fbf0;
  *(undefined8 *)(lVar24 + -0x160) = 0;
  *(long *)(lVar24 + -0x158) = lVar16;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x040ce4fc(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -400) = 0x3d5fc6c;
  *(undefined8 *)(lVar24 + -0x180) = 0;
  *(long *)(lVar24 + -0x178) = lVar23;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x040d0f20(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar16);
  lVar23 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x1b0) = 0x3d5fce8;
  *(undefined8 *)(lVar24 + -0x1a0) = 0;
  *(long *)(lVar24 + -0x198) = lVar16;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x04105b24(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x1d0) = 0x3d5fd64;
  *(undefined8 *)(lVar24 + -0x1c0) = 0;
  *(long *)(lVar24 + -0x1b8) = lVar23;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x0410b6c0(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar16);
  lVar23 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x1f0) = 0x3d5fde0;
  *(undefined8 *)(lVar24 + -0x1e0) = 0;
  *(long *)(lVar24 + -0x1d8) = lVar16;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x0411956c(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x210) = 0x3d5fe5c;
  *(undefined8 *)(lVar24 + -0x200) = 0;
  *(long *)(lVar24 + -0x1f8) = lVar23;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x0411bf8c(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar16);
  lVar23 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x230) = 0x3d5fed8;
  *(undefined8 *)(lVar24 + -0x220) = 0;
  *(long *)(lVar24 + -0x218) = lVar16;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x04132280(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x250) = 0x3d5ff54;
  *(undefined8 *)(lVar24 + -0x240) = 0;
  *(long *)(lVar24 + -0x238) = lVar23;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x04135278(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar16);
  lVar23 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x270) = 0x3d5ffd0;
  *(undefined8 *)(lVar24 + -0x260) = 0;
  *(long *)(lVar24 + -600) = lVar16;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x04143d60(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x290) = 0x3d6004c;
  *(undefined8 *)(lVar24 + -0x280) = 0;
  *(long *)(lVar24 + -0x278) = lVar23;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x0419ce74(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar16);
  lVar23 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x2b0) = 0x3d600c8;
  *(undefined8 *)(lVar24 + -0x2a0) = 0;
  *(long *)(lVar24 + -0x298) = lVar16;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x041c2810(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x2d0) = 0x3d60144;
  *(undefined8 *)(lVar24 + -0x2c0) = 0;
  *(long *)(lVar24 + -0x2b8) = lVar23;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x041ddb58(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar16);
  lVar23 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x2f0) = 0x3d601c0;
  *(undefined8 *)(lVar24 + -0x2e0) = 0;
  *(long *)(lVar24 + -0x2d8) = lVar16;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x041e617c(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x310) = 0x3d6023c;
  *(undefined8 *)(lVar24 + -0x300) = 0;
  *(long *)(lVar24 + -0x2f8) = lVar23;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x041e8ba0(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar16);
  lVar23 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x330) = 0x3d602b8;
  *(undefined8 *)(lVar24 + -800) = 0;
  *(long *)(lVar24 + -0x318) = lVar16;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 0x10))(puVar13,auVar35._0_8_);
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar23);
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(lVar24 + -0x350) = 0x3d60338;
  *(undefined8 *)(lVar24 + -0x340) = 0;
  *(long *)(lVar24 + -0x338) = lVar23;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    func_0x0420cec8(puVar13,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return puVar13;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar35 = func_0x03280b7c(uVar29,lVar16);
  *(undefined8 *)(lVar24 + -0x370) = 0x3d603b4;
  *(undefined8 *)(lVar24 + -0x368) = 0;
  *(undefined8 *)(lVar24 + -0x360) = 0;
  *(long *)(lVar24 + -0x358) = lVar16;
  lVar23 = lVar22;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  puVar12 = PTR_DAT_07779d10;
  if ((auVar35._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar35._8_8_ == 0)) {
    uVar29 = func_0x03280a2c(puVar12);
    uVar29 = func_0x05ac7464(uVar29,0);
    auVar36 = func_0x03280b7c(uVar29,lVar22);
    *(undefined8 *)(lVar24 + -0x390) = 0x3d60428;
    *(undefined1 (*) [16])(lVar24 + -0x388) = auVar35;
    *(long *)(lVar24 + -0x378) = lVar22;
    lVar22 = lVar23;
    if (*(long *)(lVar23 + 0x38) == 0) {
      func_0x03256878(lVar23);
    }
    puVar12 = PTR_DAT_07779d10;
    if ((auVar36._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar36._8_8_ != 0)) {
      lVar22 = *(long *)(lVar24 + -0x378);
      ppuVar19 = *(undefined8 ***)(*(long *)(lVar23 + 0x38) + 8);
      uVar18 = 0;
      puVar5 = (undefined1 *)(lVar24 + -0x370);
      uVar29 = *(undefined8 *)(lVar24 + -0x390);
      auVar35 = *(undefined1 (*) [16])(lVar24 + -0x388);
      goto LAB_03d60730;
    }
    uVar29 = func_0x03280a2c(puVar12);
    uVar29 = func_0x05ac7464(uVar29,0);
    auVar35 = func_0x03280b7c(uVar29,lVar23);
    *(undefined8 *)(lVar24 + -0x3b0) = 0x3d6049c;
    *(undefined1 (*) [16])(lVar24 + -0x3a8) = auVar36;
    *(long *)(lVar24 + -0x398) = lVar23;
    lVar23 = lVar22;
    if (*(long *)(lVar22 + 0x38) == 0) {
      func_0x03256878(lVar22);
    }
    puVar12 = PTR_DAT_07779d10;
    if ((auVar35._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar35._8_8_ == 0)) {
      uVar29 = func_0x03280a2c(puVar12);
      uVar29 = func_0x05ac7464(uVar29,0);
      auVar36 = func_0x03280b7c(uVar29,lVar22);
      *(undefined8 *)(lVar24 + -0x3d0) = 0x3d60510;
      *(undefined1 (*) [16])(lVar24 + -0x3c8) = auVar35;
      *(long *)(lVar24 + -0x3b8) = lVar22;
      lVar22 = lVar23;
      if (*(long *)(lVar23 + 0x38) == 0) {
        func_0x03256878(lVar23);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auVar36._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar36._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar13 = (undefined8 *)
                  (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 8))
                            (auVar36._0_8_,auVar36._8_8_,0);
        return puVar13;
      }
      uVar29 = func_0x03280a2c(puVar12);
      uVar29 = func_0x05ac7464(uVar29,0);
      auVar35 = func_0x03280b7c(uVar29,lVar23);
      *(undefined8 *)(lVar24 + -0x400) = 0x3d60588;
      *(undefined8 *)(lVar24 + -0x3f0) = uVar27;
      *(undefined1 (*) [16])(lVar24 + -1000) = auVar36;
      *(long *)(lVar24 + -0x3d8) = lVar23;
      lVar23 = lVar22;
      ppuVar19 = ppuVar20;
      if (ppuVar20[7] == (undefined8 *)0x0) {
        func_0x03256878(ppuVar20);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auVar35._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar35._8_8_ == 0)) {
        uVar27 = func_0x03280a2c(puVar12);
        uVar27 = func_0x05ac7464(uVar27,0);
        auVar36 = func_0x03280b7c(uVar27,ppuVar20);
        puVar4 = (undefined1 *)(lVar24 + -0x430);
        *(undefined8 *)(lVar24 + -0x430) = 0x3d60608;
        *(undefined1 (*) [16])(lVar24 + -0x420) = auVar35;
        *(long *)(lVar24 + -0x410) = lVar22;
        *(undefined8 ***)(lVar24 + -0x408) = ppuVar20;
        lVar22 = lVar23;
        ppuVar20 = ppuVar19;
        if (ppuVar19[7] == (undefined8 *)0x0) {
          func_0x03256878(ppuVar19);
        }
        puVar12 = PTR_DAT_07779d10;
        if ((auVar36._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar36._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar13 = (undefined8 *)(**(code **)ppuVar19[7][2])(auVar36._0_8_,auVar36._8_8_,lVar23);
          return puVar13;
        }
        uVar27 = func_0x03280a2c(puVar12);
        uVar27 = func_0x05ac7464(uVar27,0);
        uVar29 = 0x3d6068c;
        auVar35 = func_0x03280b7c(uVar27,ppuVar19);
        goto LAB_03d6068c;
      }
      ppuVar20 = (undefined8 **)ppuVar20[7][2];
      uVar18 = *(undefined8 *)(lVar24 + -0x3d8);
      uVar27 = *(undefined8 *)(lVar24 + -0x3f0);
      auVar36 = *(undefined1 (*) [16])(lVar24 + -1000);
      puVar6 = (undefined1 *)(lVar24 + -0x3d0);
      uVar29 = *(undefined8 *)(lVar24 + -0x400);
    }
    else {
      uVar18 = *(undefined8 *)(lVar24 + -0x398);
      ppuVar20 = *(undefined8 ***)(*(long *)(lVar22 + 0x38) + 8);
      lVar22 = 0;
      puVar6 = (undefined1 *)(lVar24 + -0x390);
      uVar29 = *(undefined8 *)(lVar24 + -0x3b0);
      auVar36 = *(undefined1 (*) [16])(lVar24 + -0x3a8);
    }
  }
  else {
    lVar23 = *(long *)(lVar24 + -0x360);
    ppuVar19 = *(undefined8 ***)(lVar24 + -0x358);
    ppuVar20 = *(undefined8 ***)(*(long *)(lVar22 + 0x38) + 8);
    lVar22 = 0;
    puVar4 = (undefined1 *)(lVar24 + -0x350);
    uVar29 = *(undefined8 *)(lVar24 + -0x370);
    auVar36._8_8_ = *(undefined8 *)(lVar24 + -0x368);
    auVar36._0_8_ = uVar27;
LAB_03d6068c:
    puVar5 = puVar4 + -0x30;
    *(undefined8 *)(puVar4 + -0x30) = uVar29;
    *(undefined1 (*) [16])(puVar4 + -0x20) = auVar36;
    *(long *)(puVar4 + -0x10) = lVar23;
    *(undefined8 ***)(puVar4 + -8) = ppuVar19;
    plVar15 = ppuVar20[7];
    ppuVar19 = ppuVar20;
    if (plVar15 == (long *)0x0) {
      func_0x03256878(ppuVar20);
      plVar15 = ppuVar20[7];
    }
    if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    uVar18 = ppuVar20[7][1];
    func_0x0531dbd0(puVar13,0xfffffffe);
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[7] = auVar35._0_8_;
      func_0x032809c4(puVar13 + 7,auVar35._0_8_);
      puVar13[9] = auVar35._8_8_;
      func_0x032809c4(puVar13 + 9,auVar35._8_8_);
      puVar13[5] = lVar22;
      func_0x032809c4(puVar13 + 5,lVar22);
      return puVar13;
    }
    uVar29 = 0x3d60730;
    auVar36 = func_0x03280cac();
    uVar27 = 0;
LAB_03d60730:
    puVar6 = puVar5 + -0x30;
    *(undefined8 *)(puVar5 + -0x30) = uVar29;
    *(undefined8 *)(puVar5 + -0x20) = uVar27;
    *(undefined1 (*) [16])(puVar5 + -0x18) = auVar35;
    *(long *)(puVar5 + -8) = lVar22;
    plVar15 = ppuVar19[7];
    ppuVar20 = ppuVar19;
    if (plVar15 == (long *)0x0) {
      func_0x03256878(ppuVar19);
      plVar15 = ppuVar19[7];
    }
    if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    lVar22 = ppuVar19[7][1];
    func_0x0531e428(puVar13,0xfffffffe);
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[7] = auVar36._0_8_;
      func_0x032809c4(puVar13 + 7,auVar36._0_8_);
      puVar13[9] = auVar36._8_8_;
      func_0x032809c4(puVar13 + 9,auVar36._8_8_);
      puVar13[5] = uVar18;
      func_0x032809c4(puVar13 + 5,uVar18);
      return puVar13;
    }
    uVar29 = 0x3d607d4;
    auVar35 = func_0x03280cac();
    uVar27 = 0;
  }
  *(undefined8 *)(puVar6 + -0x30) = uVar29;
  *(undefined8 *)(puVar6 + -0x20) = uVar27;
  *(undefined1 (*) [16])(puVar6 + -0x18) = auVar36;
  *(undefined8 *)(puVar6 + -8) = uVar18;
  plVar15 = ppuVar20[7];
  ppuVar19 = ppuVar20;
  if (plVar15 == (long *)0x0) {
    func_0x03256878(ppuVar20);
    plVar15 = ppuVar20[7];
  }
  if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar13 = (undefined8 *)func_0x03280ca0();
  uVar27 = ppuVar20[7][1];
  func_0x0531ec78(puVar13,0xfffffffe);
  if (puVar13 != (undefined8 *)0x0) {
    puVar13[8] = auVar35._0_8_;
    func_0x032809c4(puVar13 + 8,auVar35._0_8_);
    puVar13[10] = auVar35._8_8_;
    func_0x032809c4(puVar13 + 10,auVar35._8_8_);
    puVar13[6] = lVar22;
    func_0x032809c4(puVar13 + 6,lVar22);
    return puVar13;
  }
  auVar36 = func_0x03280cac();
  puVar13 = auVar36._0_8_;
  *(undefined8 *)(puVar6 + -0x60) = 0x3d60878;
  *(long *)(puVar6 + -0x58) = lVar14;
  *(undefined8 *)(puVar6 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar6 + -0x48) = auVar35;
  *(long *)(puVar6 + -0x38) = lVar22;
  plVar15 = ppuVar19[7];
  if (plVar15 == (long *)0x0) {
    func_0x03256878(ppuVar19);
    plVar15 = ppuVar19[7];
  }
  if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar17 = (undefined8 *)func_0x03280ca0();
  puVar9 = (undefined8 *)ppuVar19[7][1];
  (*(code *)*puVar9)(puVar17,0xfffffffe);
  if (puVar17 != (undefined8 *)0x0) {
    func_0x02f17738(puVar17,*(long *)(*ppuVar19[7] + 0x80) + 0xc0,puVar13);
    func_0x02f17738(puVar17,*(long *)(*ppuVar19[7] + 0x80) + 0x100,auVar36._8_8_);
    func_0x02f17738(puVar17,*(long *)(*ppuVar19[7] + 0x80) + 0x80,uVar27);
    return puVar17;
  }
  auVar35 = func_0x03280cac();
  lVar24 = auVar35._8_8_;
  plVar15 = auVar35._0_8_;
  *(undefined8 *)(puVar6 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar6 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar6 + -0x80) = auVar36;
  *(undefined8 ***)(puVar6 + -0x70) = ppuVar19;
  *(undefined8 *)(puVar6 + -0x68) = uVar27;
  puVar17 = puVar9;
  if (puVar9[7] == 0) {
    func_0x03256878(puVar9);
  }
  puVar12 = PTR_DAT_07774b08;
  if ((plVar15 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar24 == 0)) {
    uVar27 = func_0x03280a2c(puVar12);
    uVar27 = func_0x05ac7464(uVar27,0);
    func_0x03280b7c(uVar27,puVar9);
LAB_03d60c04:
    func_0x03281048(plVar15);
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(puVar9[7] + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar22 = *plVar15;
    bVar1 = *(byte *)(lVar22 + 0x130);
    if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar22 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14)) {
      lVar14 = *(long *)(puVar9[7] + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
        lVar22 = *plVar15;
        bVar1 = *(byte *)(lVar22 + 0x130);
      }
      if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar22 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14))
      {
        lVar14 = *(long *)(puVar9[7] + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
          lVar22 = *plVar15;
          bVar1 = *(byte *)(lVar22 + 0x130);
        }
        if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar22 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar13 = (undefined8 *)
                    (**(code **)(lVar22 + 0x228))(plVar15,lVar24,*(undefined8 *)(lVar22 + 0x230));
          return puVar13;
        }
      }
      goto LAB_03d60c04;
    }
    lVar14 = *(long *)(puVar9[7] + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar14 = func_0x03280b90(plVar15,lVar14);
    if (lVar14 == 0) {
      lVar14 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14
         )) {
        if ((*(byte *)(*(long *)(puVar9[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        puVar13 = (undefined8 *)func_0x03280ca0();
        func_0x04b68fa4(puVar13,plVar15,lVar24,*(undefined8 *)(puVar9[7] + 0x58));
        return puVar13;
      }
      if ((*(byte *)(*(long *)(puVar9[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      puVar13 = (undefined8 *)func_0x03280ca0();
      lVar14 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      if ((*(byte *)(lVar14 + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
         )) {
        func_0x04b713b0(puVar13,plVar15,lVar24,*(undefined8 *)(puVar9[7] + 0x48));
        return puVar13;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar9[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x03280ca0();
    lVar14 = *(long *)(puVar9[7] + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar22 = func_0x03280b90(plVar15,lVar14);
    if (lVar22 != 0) {
      func_0x04b66610(puVar13,lVar22,lVar24,*(undefined8 *)(puVar9[7] + 0x30));
      return puVar13;
    }
  }
  auVar36 = func_0x03281048(plVar15,lVar14);
  lVar24 = auVar36._8_8_;
  plVar15 = auVar36._0_8_;
  *(undefined8 *)(puVar6 + -0xc0) = 0x3d60c18;
  *(long *)(puVar6 + -0xb8) = lVar14;
  *(undefined8 **)(puVar6 + -0xb0) = puVar13;
  *(undefined8 **)(puVar6 + -0xa8) = puVar9;
  *(undefined1 (*) [16])(puVar6 + -0xa0) = auVar35;
  if (puVar17[7] == 0) {
    func_0x03256878(puVar17);
  }
  puVar12 = PTR_DAT_07774b08;
  if ((plVar15 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar24 == 0)) {
    uVar27 = func_0x03280a2c(puVar12);
    uVar27 = func_0x05ac7464(uVar27,0);
    func_0x03280b7c(uVar27,puVar17);
  }
  else {
    lVar22 = *(long *)(puVar17[7] + 0x10);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    lVar23 = *plVar15;
    bVar1 = *(byte *)(lVar23 + 0x130);
    if ((bVar1 < *(byte *)(lVar22 + 0x130)) ||
       (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) != lVar22)) {
      lVar22 = *(long *)(puVar17[7] + 0x20);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar22 = func_0x03280b90(plVar15,lVar22);
      if (lVar22 != 0) {
        if ((*(byte *)(*(long *)(puVar17[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        puVar13 = (undefined8 *)func_0x03280ca0();
        lVar14 = *(long *)(puVar17[7] + 0x20);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar22 = func_0x03280b90(plVar15,lVar14);
        if (lVar22 != 0) {
          func_0x04b667e0(puVar13,lVar22,lVar24,*(undefined8 *)(puVar17[7] + 0x30));
          return puVar13;
        }
        goto LAB_03d60ee0;
      }
      lVar22 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar22 + 0x130)) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) != lVar22
         )) {
        if ((*(byte *)(*(long *)(puVar17[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        puVar13 = (undefined8 *)func_0x03280ca0();
        func_0x04b693d0(puVar13,plVar15,lVar24,*(undefined8 *)(puVar17[7] + 0x58));
        return puVar13;
      }
      if ((*(byte *)(*(long *)(puVar17[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      puVar13 = (undefined8 *)func_0x03280ca0();
      lVar22 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      if ((*(byte *)(lVar22 + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22
         )) {
        func_0x04b715c8(puVar13,plVar15,lVar24,*(undefined8 *)(puVar17[7] + 0x48));
        return puVar13;
      }
    }
    else {
      lVar22 = *(long *)(puVar17[7] + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
        lVar23 = *plVar15;
        bVar1 = *(byte *)(lVar23 + 0x130);
      }
      if ((*(byte *)(lVar22 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22))
      {
        lVar22 = *(long *)(puVar17[7] + 0x10);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
          lVar23 = *plVar15;
          bVar1 = *(byte *)(lVar23 + 0x130);
        }
        if ((*(byte *)(lVar22 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar13 = (undefined8 *)
                    (**(code **)(lVar23 + 0x228))(plVar15,lVar24,*(undefined8 *)(lVar23 + 0x230));
          return puVar13;
        }
      }
    }
  }
  func_0x03281048(plVar15);
LAB_03d60ee0:
  lVar24 = func_0x03281048(plVar15,lVar14);
  *(undefined8 *)(puVar6 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar6 + -0xd0) = auVar36;
  lVar14 = *(long *)(lVar24 + 0x20);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  puVar13 = (undefined8 *)**(long **)(lVar14 + 0xb8);
  func_0x03280ab0();
  if (puVar13 == (undefined8 *)0x0) {
    lVar14 = *(long *)(lVar24 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    puVar13 = (undefined8 *)func_0x0522166c(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar14 = *(long *)(lVar24 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    **(long **)(lVar14 + 0xb8) = (long)puVar13;
    lVar24 = *(long *)(lVar24 + 0x20);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c();
    }
    lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 0x10);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar24 + 0xb8),puVar13);
  }
  return puVar13;
}

