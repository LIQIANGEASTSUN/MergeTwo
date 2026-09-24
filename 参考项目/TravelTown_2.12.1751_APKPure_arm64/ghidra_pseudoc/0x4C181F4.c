/* Ghidra 12.1.2 native pseudocode; RVA 0x4C181F4; MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem<TState>.GetExistingEntityIds; status ok */


long MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem_TState___GetExistingEntityIds
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 unaff_x23;
  undefined8 *unaff_x26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined8 auStack_1e0 [2];
  undefined1 auStack_1d0 [16];
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  long lStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  long lStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 auStack_110 [16];
  undefined8 auStack_100 [2];
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  
  if ((bRam0000000007e1af01 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780388);
    func_0x03280a18(PTR_DAT_07780390);
    func_0x03280a18(PTR_DAT_07780398);
    func_0x03280a18(PTR_DAT_077803a0);
    func_0x03280a18(PTR_DAT_077803a8);
    func_0x03280a18(PTR_DAT_077803b0);
    bRam0000000007e1af01 = 1;
  }
  if (param_1 == 0) {
    auVar22 = func_0x03280cac();
    lVar12 = auVar22._8_8_;
    lVar17 = auVar22._0_8_;
    if ((bRam0000000007e1af02 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a928);
      func_0x03280a18(PTR_DAT_077803b8);
      func_0x03280a18(PTR_DAT_077803c0);
      func_0x03280a18(PTR_DAT_077803c8);
      func_0x03280a18(PTR_DAT_077803d0);
      func_0x03280a18(PTR_DAT_07780368);
      func_0x03280a18(PTR_DAT_077803d8);
      func_0x03280a18(PTR_DAT_07780370);
      func_0x03280a18(PTR_DAT_07780378);
      bRam0000000007e1af02 = 1;
    }
    puVar2 = PTR_DAT_07780378;
    puVar10 = PTR_DAT_07780368;
    uStack_c0 = 0;
    uStack_b8 = 0;
    auStack_b0._0_8_ = 0;
    auStack_d0._8_8_ = 0;
    if ((lVar12 != 0) && (lVar17 != 0)) {
      func_0x054974a4(lVar17,param_3,*(undefined8 *)(lVar12 + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30));
      uVar11 = func_0x03eb68fc(lVar17,*(undefined8 *)puVar2);
      func_0x03bf70e8(lVar17,uVar11,lVar12,
                      *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38));
      lVar18 = *(long *)(lVar17 + 0x28);
      uVar11 = func_0x03280ca0(*(undefined8 *)puVar10);
      func_0x060f34dc(uVar11,0);
      if (lVar18 != 0) {
        func_0x03ea4d6c(lVar18,uVar11,*(undefined8 *)PTR_DAT_07780370);
        puVar4 = PTR_DAT_077803d0;
        puVar3 = PTR_DAT_077803c0;
        puVar2 = PTR_DAT_077803b8;
        puVar10 = PTR_DAT_0777a928;
        if (*(long *)(lVar12 + 0x28) != 0) {
          func_0x04145068(&uStack_e0,*(long *)(lVar12 + 0x28),*(undefined8 *)PTR_DAT_077803d8);
          uStack_b8 = uStack_d8;
          uStack_c0 = uStack_e0;
          auStack_b0._0_8_ = auStack_d0._0_8_;
          while( true ) {
            uVar13 = func_0x051159b4(&uStack_c0,*(undefined8 *)puVar3);
            uVar11 = auStack_b0._0_8_;
            if ((uVar13 & 1) == 0) {
              lVar17 = func_0x051159b0(&uStack_c0,*(undefined8 *)puVar2);
              return lVar17;
            }
            uVar21 = func_0x06a13cfc(0,0,0,0);
            uVar13 = func_0x05497634(lVar17,param_3,uVar11,uVar21,auStack_d0 + 8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40));
            if (auStack_d0._8_8_ == 0) break;
            uVar21 = func_0x03d20d84(auStack_d0._8_8_,*(undefined8 *)puVar10);
            if (uVar11 == 0) goto LAB_04d187c8;
            func_0x03bf70e8(lVar17,uVar21,*(undefined8 *)(uVar11 + 0xa8),
                            *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48));
            uVar21 = auStack_d0._8_8_;
            plVar16 = *(long **)(lVar17 + 0x58);
            if (plVar16 == (long *)0x0) {
              func_0x03280cac();
              break;
            }
            lVar12 = *plVar16;
            uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                  puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_04d18760;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar14 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar4,0);
LAB_04d18760:
            (*(code *)*puVar14)(plVar16,uVar21,uVar11,puVar14[1]);
            if ((uVar13 & 1) == 0) {
              func_0x054973f4(lVar17,auStack_d0._8_8_,
                              *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58));
            }
          }
          func_0x03280cac();
LAB_04d187c8:
          func_0x03280cac();
          unaff_x26 = (undefined8 *)puVar2;
        }
      }
    }
    auVar25 = func_0x03280cac();
    if (auVar25._8_4_ == 1) {
      plVar16 = (long *)func_0x072ce910(auVar25._0_8_);
      lVar12 = *plVar16;
      func_0x072ce920();
      lVar17 = func_0x051159b0(&uStack_c0,*unaff_x26);
      if (lVar12 == 0) {
        return lVar17;
      }
      func_0x03280ca4(lVar12);
    }
    func_0x051159b0(&uStack_c0,*unaff_x26);
    func_0x03365958(auVar25._0_8_);
    func_0x03280ca4(0);
    lVar17 = func_0x02f09514();
    return lVar17;
  }
  uVar11 = func_0x03eb6ac8(param_1,*(undefined8 *)PTR_DAT_077803b0);
  lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c(lVar17);
  }
  if (*(int *)(lVar17 + 0xe0) == 0) {
    func_0x03280b8c(lVar17);
  }
  lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  puVar10 = PTR_DAT_07780398;
  lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
  if (lVar17 == 0) {
    lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    uVar21 = **(undefined8 **)(lVar17 + 0xb8);
    lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077803a0);
    param_4 = 0;
    func_0x05355fbc(lVar17,uVar21,
                    *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
    lVar18 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    lVar12 = *(long *)(lVar18 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
      lVar18 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar12 + 0xb8) + 8) = lVar17;
    lVar12 = *(long *)(lVar18 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar12 + 0xb8) + 8,lVar17);
  }
  uVar11 = func_0x03d872a8(uVar11,lVar17,*(undefined8 *)puVar10);
  lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c(lVar17);
  }
  if (*(int *)(lVar17 + 0xe0) == 0) {
    func_0x03280b8c(lVar17);
  }
  lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  puVar2 = PTR_DAT_07780390;
  puVar10 = PTR_DAT_07780388;
  lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
  if (lVar17 == 0) {
    lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    uVar21 = **(undefined8 **)(lVar17 + 0xb8);
    lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077803a8);
    param_4 = 0;
    func_0x053569b8(lVar17,uVar21,
                    *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20));
    lVar18 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    lVar12 = *(long *)(lVar18 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
      lVar18 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar12 + 0xb8) + 0x10) = lVar17;
    lVar12 = *(long *)(lVar18 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar12 + 0xb8) + 0x10,lVar17);
  }
  lVar18 = *(long *)puVar10;
  lVar17 = func_0x03d50a94(uVar11,lVar17);
  lVar12 = *(long *)puVar2;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (lVar17 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x04143d60(lVar18,lVar17,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar18;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar22 = func_0x03280b7c(uVar11,lVar12);
  lVar17 = auVar22._8_8_;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0419ce74(lVar12,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    return lVar12;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar22 = func_0x03280b7c(uVar11,lVar17);
  lVar17 = auVar22._8_8_;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041c2810(lVar12,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    return lVar12;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar22 = func_0x03280b7c(uVar11,lVar17);
  lVar17 = auVar22._8_8_;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041ddb58(lVar12,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    return lVar12;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar22 = func_0x03280b7c(uVar11,lVar17);
  lVar17 = auVar22._8_8_;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041e617c(lVar12,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    return lVar12;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar23 = func_0x03280b7c(uVar11,lVar17);
  lVar17 = auVar23._8_8_;
  uStack_c0 = 0x3d6023c;
  auStack_b0 = auVar22;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041e8ba0(lVar12,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    return lVar12;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar22 = func_0x03280b7c(uVar11,lVar17);
  lVar17 = auVar22._8_8_;
  uStack_e0 = 0x3d602b8;
  auStack_d0 = auVar23;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x38) + 0x10))(lVar12,auVar22._0_8_);
    return lVar12;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar23 = func_0x03280b7c(uVar11,lVar17);
  lVar17 = auVar23._8_8_;
  auStack_100[0] = 0x3d60338;
  auStack_f0 = auVar22;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0420cec8(lVar12,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    return lVar12;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar22 = func_0x03280b7c(uVar11,lVar17);
  uStack_120 = 0x3d603b4;
  lVar17 = lVar18;
  lStack_118 = unaff_x21;
  auStack_110 = auVar23;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  puVar10 = PTR_DAT_07779d10;
  if ((auVar22._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    auVar23 = func_0x03280b7c(uVar11,lVar18);
    uStack_140 = 0x3d60428;
    lVar12 = lVar17;
    lStack_128 = lVar18;
    if (*(long *)(lVar17 + 0x38) == 0) {
      auStack_138 = auVar22;
      func_0x03256878(lVar17);
      auVar22 = auStack_138;
    }
    puVar10 = PTR_DAT_07779d10;
    auStack_138 = auVar22;
    if ((auVar23._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auVar23._8_8_ != 0)) {
      lVar12 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
      lVar18 = 0;
      puVar6 = &uStack_120;
      lVar17 = lStack_128;
      uVar11 = uStack_140;
      goto LAB_03d60730;
    }
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    auVar22 = func_0x03280b7c(uVar11,lVar17);
    uStack_160 = 0x3d6049c;
    lVar18 = lVar12;
    lStack_148 = lVar17;
    auStack_158 = auVar23;
    if (*(long *)(lVar12 + 0x38) == 0) {
      func_0x03256878(lVar12);
    }
    puVar10 = PTR_DAT_07779d10;
    if ((auVar22._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
      uVar11 = func_0x03280a2c(puVar10);
      uVar11 = func_0x05ac7464(uVar11,0);
      auStack_198 = func_0x03280b7c(uVar11,lVar12);
      uStack_180 = 0x3d60510;
      lVar8 = lVar18;
      lStack_168 = lVar12;
      auStack_178 = auVar22;
      if (*(long *)(lVar18 + 0x38) == 0) {
        func_0x03256878(lVar18);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auStack_198._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auStack_198._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 8))
                           (auStack_198._0_8_,auStack_198._8_8_,0);
        return lVar17;
      }
      uVar11 = func_0x03280a2c(puVar10);
      uVar11 = func_0x05ac7464(uVar11,0);
      auVar22 = func_0x03280b7c(uVar11,lVar18);
      uStack_1b0 = 0x3d60588;
      lVar12 = lVar8;
      lVar9 = param_4;
      lStack_1a0 = unaff_x22;
      lStack_188 = lVar18;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auVar22._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
        uVar11 = func_0x03280a2c(puVar10);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar24 = func_0x03280b7c(uVar11,param_4);
        auVar23._8_8_ = lVar9;
        auVar23._0_8_ = lVar12;
        lStack_118 = auVar24._8_8_;
        unaff_x22 = auVar24._0_8_;
        puVar5 = auStack_1e0;
        auStack_1e0[0] = 0x3d60608;
        lVar17 = lVar12;
        lVar18 = lVar9;
        lStack_1c0 = lVar8;
        lStack_1b8 = param_4;
        auStack_1d0 = auVar22;
        if (*(long *)(lVar9 + 0x38) == 0) {
          func_0x03256878(lVar9);
        }
        puVar10 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar10 = PTR_DAT_07779d18, lStack_118 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 0x10))
                             (unaff_x22,lStack_118,lVar12);
          return lVar17;
        }
        uVar11 = func_0x03280a2c(puVar10);
        uVar21 = func_0x05ac7464(uVar11,0);
        uVar11 = 0x3d6068c;
        auVar22 = func_0x03280b7c(uVar21,lVar9);
        goto LAB_03d6068c;
      }
      lVar17 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar7 = &uStack_180;
      lVar18 = lStack_188;
      unaff_x22 = lStack_1a0;
      uVar11 = uStack_1b0;
      auVar23 = auStack_198;
    }
    else {
      lVar17 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      lVar8 = 0;
      puVar7 = &uStack_140;
      lVar18 = lStack_148;
      uVar11 = uStack_160;
      auVar23 = auStack_158;
    }
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
    lVar17 = 0;
    puVar5 = auStack_100;
    uVar11 = uStack_120;
    auVar23 = auStack_110;
LAB_03d6068c:
    puVar6 = (undefined8 *)((long)puVar5 + -0x30);
    *(undefined8 *)((long)puVar5 + -0x30) = uVar11;
    *(long *)((long)puVar5 + -0x20) = unaff_x22;
    *(long *)((long)puVar5 + -0x18) = lStack_118;
    *(undefined1 (*) [16])((long)puVar5 + -0x10) = auVar23;
    plVar16 = *(long **)(lVar18 + 0x38);
    lVar12 = lVar18;
    if (plVar16 == (long *)0x0) {
      func_0x03256878(lVar18);
      plVar16 = *(long **)(lVar18 + 0x38);
    }
    if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
    func_0x0531dbd0(lVar8,0xfffffffe);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x38) = auVar22._0_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x38),auVar22._0_8_);
      *(undefined8 *)(lVar8 + 0x48) = auVar22._8_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x48),auVar22._8_8_);
      *(long *)(lVar8 + 0x28) = lVar17;
      func_0x032809c4((long *)(lVar8 + 0x28),lVar17);
      return lVar8;
    }
    auVar23 = func_0x03280cac();
    unaff_x22 = 0;
    uVar11 = 0x3d60730;
LAB_03d60730:
    puVar7 = (undefined8 *)((long)puVar6 + -0x30);
    *(undefined8 *)((long)puVar6 + -0x30) = uVar11;
    *(long *)((long)puVar6 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar6 + -0x18) = auVar22;
    *(long *)((long)puVar6 + -8) = lVar17;
    plVar16 = *(long **)(lVar12 + 0x38);
    lVar17 = lVar12;
    if (plVar16 == (long *)0x0) {
      func_0x03256878(lVar12);
      plVar16 = *(long **)(lVar12 + 0x38);
    }
    if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar9 = func_0x03280ca0();
    lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
    func_0x0531e428(lVar9,0xfffffffe);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x38) = auVar23._0_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x38),auVar23._0_8_);
      *(undefined8 *)(lVar9 + 0x48) = auVar23._8_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x48),auVar23._8_8_);
      *(long *)(lVar9 + 0x28) = lVar18;
      func_0x032809c4((long *)(lVar9 + 0x28),lVar18);
      return lVar9;
    }
    auVar22 = func_0x03280cac();
    unaff_x22 = 0;
    uVar11 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar7 + -0x30) = uVar11;
  *(long *)((long)puVar7 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar23;
  *(long *)((long)puVar7 + -8) = lVar18;
  plVar16 = *(long **)(lVar17 + 0x38);
  lVar12 = lVar17;
  if (plVar16 == (long *)0x0) {
    func_0x03256878(lVar17);
    plVar16 = *(long **)(lVar17 + 0x38);
  }
  if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar18 = func_0x03280ca0();
  uVar11 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + 8);
  func_0x0531ec78(lVar18,0xfffffffe);
  if (lVar18 != 0) {
    *(undefined8 *)(lVar18 + 0x40) = auVar22._0_8_;
    func_0x032809c4((undefined8 *)(lVar18 + 0x40),auVar22._0_8_);
    *(undefined8 *)(lVar18 + 0x50) = auVar22._8_8_;
    func_0x032809c4((undefined8 *)(lVar18 + 0x50),auVar22._8_8_);
    *(long *)(lVar18 + 0x30) = lVar8;
    func_0x032809c4((long *)(lVar18 + 0x30),lVar8);
    return lVar18;
  }
  auVar23 = func_0x03280cac();
  lVar17 = auVar23._0_8_;
  *(undefined8 *)((long)puVar7 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar7 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x48) = auVar22;
  *(long *)((long)puVar7 + -0x38) = lVar8;
  plVar16 = *(long **)(lVar12 + 0x38);
  if (plVar16 == (long *)0x0) {
    func_0x03256878(lVar12);
    plVar16 = *(long **)(lVar12 + 0x38);
  }
  if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar18 = func_0x03280ca0();
  puVar14 = *(undefined8 **)(*(long *)(lVar12 + 0x38) + 8);
  (*(code *)*puVar14)(lVar18,0xfffffffe);
  if (lVar18 != 0) {
    func_0x02f17738(lVar18,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0xc0,lVar17);
    func_0x02f17738(lVar18,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x100,auVar23._8_8_);
    func_0x02f17738(lVar18,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x80,uVar11);
    return lVar18;
  }
  auVar22 = func_0x03280cac();
  lVar18 = auVar22._8_8_;
  plVar16 = auVar22._0_8_;
  *(undefined8 *)((long)puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x80) = auVar23;
  *(long *)((long)puVar7 + -0x70) = lVar12;
  *(undefined8 *)((long)puVar7 + -0x68) = uVar11;
  puVar15 = puVar14;
  if (puVar14[7] == 0) {
    func_0x03256878(puVar14);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar16 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar18 == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,puVar14);
LAB_03d60c04:
    func_0x03281048(plVar16);
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(puVar14[7] + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar8 = *plVar16;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)) {
      lVar12 = *(long *)(puVar14[7] + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
        lVar8 = *plVar16;
        bVar1 = *(byte *)(lVar8 + 0x130);
      }
      if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12))
      {
        lVar12 = *(long *)(puVar14[7] + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
          lVar8 = *plVar16;
          bVar1 = *(byte *)(lVar8 + 0x130);
        }
        if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar17 = (**(code **)(lVar8 + 0x228))(plVar16,lVar18,*(undefined8 *)(lVar8 + 0x230));
          return lVar17;
        }
      }
      goto LAB_03d60c04;
    }
    lVar17 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar17 = func_0x03280b90(plVar16,lVar17);
    if (lVar17 == 0) {
      lVar17 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) != lVar17
         )) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar17 = func_0x03280ca0();
        func_0x04b68fa4(lVar17,plVar16,lVar18,*(undefined8 *)(puVar14[7] + 0x58));
        return lVar17;
      }
      if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar17 = func_0x03280ca0();
      lVar12 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
         )) {
        func_0x04b713b0(lVar17,plVar16,lVar18,*(undefined8 *)(puVar14[7] + 0x48));
        return lVar17;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    lVar12 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar8 = func_0x03280b90(plVar16,lVar12);
    if (lVar8 != 0) {
      func_0x04b66610(lVar17,lVar8,lVar18,*(undefined8 *)(puVar14[7] + 0x30));
      return lVar17;
    }
  }
  auVar23 = func_0x03281048(plVar16,lVar12);
  lVar18 = auVar23._8_8_;
  plVar16 = auVar23._0_8_;
  *(undefined8 *)((long)puVar7 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar7 + -0xb8) = lVar12;
  *(long *)((long)puVar7 + -0xb0) = lVar17;
  *(undefined8 **)((long)puVar7 + -0xa8) = puVar14;
  *(undefined1 (*) [16])((long)puVar7 + -0xa0) = auVar22;
  if (puVar15[7] == 0) {
    func_0x03256878(puVar15);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar16 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar18 == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,puVar15);
  }
  else {
    lVar17 = *(long *)(puVar15[7] + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar8 = *plVar16;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((bVar1 < *(byte *)(lVar17 + 0x130)) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) != lVar17)) {
      lVar17 = *(long *)(puVar15[7] + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      lVar17 = func_0x03280b90(plVar16,lVar17);
      if (lVar17 != 0) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar17 = func_0x03280ca0();
        lVar12 = *(long *)(puVar15[7] + 0x20);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
        }
        lVar8 = func_0x03280b90(plVar16,lVar12);
        if (lVar8 != 0) {
          func_0x04b667e0(lVar17,lVar8,lVar18,*(undefined8 *)(puVar15[7] + 0x30));
          return lVar17;
        }
        goto LAB_03d60ee0;
      }
      lVar17 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) != lVar17
         )) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar17 = func_0x03280ca0();
        func_0x04b693d0(lVar17,plVar16,lVar18,*(undefined8 *)(puVar15[7] + 0x58));
        return lVar17;
      }
      if ((*(byte *)(*(long *)(puVar15[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar17 = func_0x03280ca0();
      lVar8 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
      {
        func_0x04b715c8(lVar17,plVar16,lVar18,*(undefined8 *)(puVar15[7] + 0x48));
        return lVar17;
      }
    }
    else {
      lVar17 = *(long *)(puVar15[7] + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
        lVar8 = *plVar16;
        bVar1 = *(byte *)(lVar8 + 0x130);
      }
      if ((*(byte *)(lVar17 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17))
      {
        lVar17 = *(long *)(puVar15[7] + 0x10);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
          lVar8 = *plVar16;
          bVar1 = *(byte *)(lVar8 + 0x130);
        }
        if ((*(byte *)(lVar17 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar17 = (**(code **)(lVar8 + 0x228))(plVar16,lVar18,*(undefined8 *)(lVar8 + 0x230));
          return lVar17;
        }
      }
    }
  }
  func_0x03281048(plVar16);
LAB_03d60ee0:
  lVar17 = func_0x03281048(plVar16,lVar12);
  *(undefined8 *)((long)puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar7 + -0xd0) = auVar23;
  lVar12 = *(long *)(lVar17 + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  func_0x03280ab0();
  if (lVar12 == 0) {
    lVar12 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar12 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar18 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    **(long **)(lVar18 + 0xb8) = lVar12;
    lVar17 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar17 + 0xb8),lVar12);
  }
  return lVar12;
}

