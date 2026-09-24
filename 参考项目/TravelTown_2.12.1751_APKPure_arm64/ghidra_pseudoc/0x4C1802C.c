/* Ghidra 12.1.2 native pseudocode; RVA 0x4C1802C; MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem<TState>.EntitiesRemovalLogic; status ok */


long MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem_TState___EntitiesRemovalLogic
               (long param_1,long *param_2,ulong param_3,long param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  long lVar21;
  long unaff_x22;
  undefined8 uVar22;
  undefined8 unaff_x23;
  undefined8 *unaff_x26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined8 auStack_210 [2];
  undefined1 auStack_200 [16];
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d0;
  undefined1 auStack_1c8 [16];
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  long lStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 auStack_140 [16];
  undefined8 auStack_130 [2];
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  
  lVar21 = 0x7e1a000;
  if ((bRam0000000007e1af00 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780380);
    func_0x03280a18(PTR_DAT_0777e498);
    func_0x03280a18(PTR_DAT_0777e5c0);
    bRam0000000007e1af00 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar14 = *param_2;
    lVar21 = *(long *)(param_1 + 0x60);
    unaff_x22 = *(long *)PTR_DAT_07780380;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    param_3 = (ulong)*(ushort *)(unaff_x22 + 0x50);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)(unaff_x22 + 0x20)) {
          lVar14 = lVar14 + (long)(int)(*piVar19 + (uint)*(ushort *)(unaff_x22 + 0x50)) * 0x10 +
                   0x138;
          goto LAB_04d180dc;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    lVar14 = func_0x03256b10(param_2);
LAB_04d180dc:
    lVar14 = func_0x03280b88(*(undefined8 *)(lVar14 + 8),unaff_x22);
    uVar10 = (**(code **)(lVar14 + 8))(param_2,lVar14);
    if (lVar21 != 0) {
      param_3 = 0;
      func_0x06386b48(lVar21,uVar10,0);
      if (param_1 != 0) {
        lVar14 = *param_2;
        plVar20 = *(long **)(param_1 + 0x10);
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777e498) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_04d18168;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        param_3 = 0;
        puVar11 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0777e498,0);
LAB_04d18168:
        uVar10 = (*(code *)*puVar11)(param_2,puVar11[1]);
        if (plVar20 != (long *)0x0) {
          lVar21 = *plVar20;
          uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777e5c0) {
                puVar11 = (undefined8 *)(lVar21 + (long)(*piVar19 + 6) * 0x10 + 0x138);
                goto LAB_04d181d4;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777e5c0,6);
LAB_04d181d4:
                    /* WARNING: Could not recover jumptable at 0x04d181ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar21 = (*(code *)*puVar11)(plVar20,uVar10,puVar11[1]);
          return lVar21;
        }
      }
    }
  }
  auVar24 = func_0x03280cac();
  lVar14 = auVar24._8_8_;
  if ((bRam0000000007e1af01 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780388);
    func_0x03280a18(PTR_DAT_07780390);
    func_0x03280a18(PTR_DAT_07780398);
    func_0x03280a18(PTR_DAT_077803a0);
    func_0x03280a18(PTR_DAT_077803a8);
    func_0x03280a18(PTR_DAT_077803b0);
    bRam0000000007e1af01 = 1;
  }
  if (auVar24._0_8_ == 0) {
    auVar24 = func_0x03280cac();
    lVar14 = auVar24._8_8_;
    lVar21 = auVar24._0_8_;
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
    puVar3 = PTR_DAT_07780378;
    puVar9 = PTR_DAT_07780368;
    uStack_f0 = 0;
    uStack_e8 = 0;
    auStack_e0._0_8_ = 0;
    auStack_100._8_8_ = 0;
    if ((lVar14 != 0) && (lVar21 != 0)) {
      func_0x054974a4(lVar21,param_3,*(undefined8 *)(lVar14 + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30));
      uVar10 = func_0x03eb68fc(lVar21,*(undefined8 *)puVar3);
      func_0x03bf70e8(lVar21,uVar10,lVar14,
                      *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38));
      lVar15 = *(long *)(lVar21 + 0x28);
      uVar10 = func_0x03280ca0(*(undefined8 *)puVar9);
      func_0x060f34dc(uVar10,0);
      if (lVar15 != 0) {
        func_0x03ea4d6c(lVar15,uVar10,*(undefined8 *)PTR_DAT_07780370);
        puVar5 = PTR_DAT_077803d0;
        puVar4 = PTR_DAT_077803c0;
        puVar3 = PTR_DAT_077803b8;
        puVar9 = PTR_DAT_0777a928;
        if (*(long *)(lVar14 + 0x28) != 0) {
          func_0x04145068(&uStack_110,*(long *)(lVar14 + 0x28),*(undefined8 *)PTR_DAT_077803d8);
          uStack_e8 = uStack_108;
          uStack_f0 = uStack_110;
          auStack_e0._0_8_ = auStack_100._0_8_;
          while( true ) {
            uVar17 = func_0x051159b4(&uStack_f0,*(undefined8 *)puVar4);
            uVar10 = auStack_e0._0_8_;
            if ((uVar17 & 1) == 0) {
              lVar21 = func_0x051159b0(&uStack_f0,*(undefined8 *)puVar3);
              return lVar21;
            }
            uVar22 = func_0x06a13cfc(0,0,0,0);
            uVar17 = func_0x05497634(lVar21,param_3,uVar10,uVar22,auStack_100 + 8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40));
            if (auStack_100._8_8_ == 0) break;
            uVar22 = func_0x03d20d84(auStack_100._8_8_,*(undefined8 *)puVar9);
            if (uVar10 == 0) goto LAB_04d187c8;
            func_0x03bf70e8(lVar21,uVar22,*(undefined8 *)(uVar10 + 0xa8),
                            *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48));
            uVar22 = auStack_100._8_8_;
            plVar20 = *(long **)(lVar21 + 0x58);
            if (plVar20 == (long *)0x0) {
              func_0x03280cac();
              break;
            }
            lVar14 = *plVar20;
            uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
                  puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_04d18760;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar5,0);
LAB_04d18760:
            (*(code *)*puVar11)(plVar20,uVar22,uVar10,puVar11[1]);
            if ((uVar17 & 1) == 0) {
              func_0x054973f4(lVar21,auStack_100._8_8_,
                              *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58));
            }
          }
          func_0x03280cac();
LAB_04d187c8:
          func_0x03280cac();
          unaff_x26 = (undefined8 *)puVar3;
        }
      }
    }
    auVar25 = func_0x03280cac();
    if (auVar25._8_4_ == 1) {
      plVar20 = (long *)func_0x072ce910(auVar25._0_8_);
      lVar14 = *plVar20;
      func_0x072ce920();
      lVar21 = func_0x051159b0(&uStack_f0,*unaff_x26);
      if (lVar14 == 0) {
        return lVar21;
      }
      func_0x03280ca4(lVar14);
    }
    func_0x051159b0(&uStack_f0,*unaff_x26);
    func_0x03365958(auVar25._0_8_);
    func_0x03280ca4(0);
    lVar21 = func_0x02f09514();
    return lVar21;
  }
  uVar10 = func_0x03eb6ac8(auVar24._0_8_,*(undefined8 *)PTR_DAT_077803b0);
  lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c(lVar15);
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    func_0x03280b8c(lVar15);
  }
  lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  puVar9 = PTR_DAT_07780398;
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
  if (lVar15 == 0) {
    lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    if (*(int *)(lVar15 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    uVar22 = **(undefined8 **)(lVar15 + 0xb8);
    lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077803a0);
    param_4 = 0;
    func_0x05355fbc(lVar15,uVar22,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x18)
                   );
    lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    lVar12 = *(long *)(lVar16 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
      lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar12 + 0xb8) + 8) = lVar15;
    lVar12 = *(long *)(lVar16 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar12 + 0xb8) + 8,lVar15);
  }
  uVar10 = func_0x03d872a8(uVar10,lVar15,*(undefined8 *)puVar9);
  lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c(lVar15);
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    func_0x03280b8c(lVar15);
  }
  lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  puVar3 = PTR_DAT_07780390;
  puVar9 = PTR_DAT_07780388;
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
  if (lVar15 == 0) {
    lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    if (*(int *)(lVar15 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    uVar22 = **(undefined8 **)(lVar15 + 0xb8);
    lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077803a8);
    param_4 = 0;
    func_0x053569b8(lVar15,uVar22,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20)
                   );
    lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    lVar12 = *(long *)(lVar16 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
      lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar12 + 0xb8) + 0x10) = lVar15;
    lVar14 = *(long *)(lVar16 + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar14 + 0xb8) + 0x10,lVar15);
  }
  lVar12 = *(long *)puVar9;
  lVar14 = func_0x03d50a94(uVar10,lVar15);
  lVar15 = *(long *)puVar3;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (lVar14 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar21 = func_0x03280ca0();
    func_0x04143d60(lVar21,lVar14,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return lVar21;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar24 = func_0x03280b7c(uVar10,lVar15);
  lVar14 = auVar24._8_8_;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar21 = func_0x03280ca0();
    func_0x0419ce74(lVar21,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar21;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar24 = func_0x03280b7c(uVar10,lVar14);
  lVar14 = auVar24._8_8_;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar21 = func_0x03280ca0();
    func_0x041c2810(lVar21,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar21;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar24 = func_0x03280b7c(uVar10,lVar14);
  lVar14 = auVar24._8_8_;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar21 = func_0x03280ca0();
    func_0x041ddb58(lVar21,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar21;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar24 = func_0x03280b7c(uVar10,lVar14);
  lVar14 = auVar24._8_8_;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar21 = func_0x03280ca0();
    func_0x041e617c(lVar21,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar21;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar23 = func_0x03280b7c(uVar10,lVar14);
  lVar14 = auVar23._8_8_;
  uStack_f0 = 0x3d6023c;
  auStack_e0 = auVar24;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar21 = func_0x03280ca0();
    func_0x041e8ba0(lVar21,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar21;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar24 = func_0x03280b7c(uVar10,lVar14);
  lVar14 = auVar24._8_8_;
  uStack_110 = 0x3d602b8;
  auStack_100 = auVar23;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar21 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 0x10))(lVar21,auVar24._0_8_);
    return lVar21;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar23 = func_0x03280b7c(uVar10,lVar14);
  lVar14 = auVar23._8_8_;
  auStack_130[0] = 0x3d60338;
  auStack_120 = auVar24;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar21 = func_0x03280ca0();
    func_0x0420cec8(lVar21,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar21;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar24 = func_0x03280b7c(uVar10,lVar14);
  uStack_150 = 0x3d603b4;
  lVar14 = lVar12;
  lStack_148 = lVar21;
  auStack_140 = auVar23;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  auVar23._8_8_ = lStack_148;
  auVar23._0_8_ = unaff_x22;
  puVar9 = PTR_DAT_07779d10;
  if ((auVar24._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar24._8_8_ == 0)) {
    uVar10 = func_0x03280a2c(puVar9);
    uVar10 = func_0x05ac7464(uVar10,0);
    auVar23 = func_0x03280b7c(uVar10,lVar12);
    uStack_170 = 0x3d60428;
    lVar21 = lVar14;
    lStack_158 = lVar12;
    if (*(long *)(lVar14 + 0x38) == 0) {
      auStack_168 = auVar24;
      func_0x03256878(lVar14);
      auVar24 = auStack_168;
    }
    puVar9 = PTR_DAT_07779d10;
    auStack_168 = auVar24;
    if ((auVar23._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar23._8_8_ != 0)) {
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
      lVar15 = 0;
      puVar7 = &uStack_150;
      lVar21 = lStack_158;
      uVar10 = uStack_170;
      goto LAB_03d60730;
    }
    uVar10 = func_0x03280a2c(puVar9);
    uVar10 = func_0x05ac7464(uVar10,0);
    auVar24 = func_0x03280b7c(uVar10,lVar14);
    uStack_190 = 0x3d6049c;
    lVar15 = lVar21;
    lStack_178 = lVar14;
    auStack_188 = auVar23;
    if (*(long *)(lVar21 + 0x38) == 0) {
      func_0x03256878(lVar21);
    }
    puVar9 = PTR_DAT_07779d10;
    if ((auVar24._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar24._8_8_ == 0)) {
      uVar10 = func_0x03280a2c(puVar9);
      uVar10 = func_0x05ac7464(uVar10,0);
      auStack_1c8 = func_0x03280b7c(uVar10,lVar21);
      uStack_1b0 = 0x3d60510;
      lVar14 = lVar15;
      lStack_198 = lVar21;
      auStack_1a8 = auVar24;
      if (*(long *)(lVar15 + 0x38) == 0) {
        func_0x03256878(lVar15);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auStack_1c8._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auStack_1c8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 8))
                           (auStack_1c8._0_8_,auStack_1c8._8_8_,0);
        return lVar21;
      }
      uVar10 = func_0x03280a2c(puVar9);
      uVar10 = func_0x05ac7464(uVar10,0);
      auVar24 = func_0x03280b7c(uVar10,lVar15);
      uStack_1e0 = 0x3d60588;
      lVar12 = lVar14;
      lVar16 = param_4;
      lStack_1d0 = unaff_x22;
      lStack_1b8 = lVar15;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auVar24._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar24._8_8_ == 0)) {
        uVar10 = func_0x03280a2c(puVar9);
        uVar10 = func_0x05ac7464(uVar10,0);
        auVar23 = func_0x03280b7c(uVar10,param_4);
        auVar2._8_8_ = lVar16;
        auVar2._0_8_ = lVar12;
        puVar6 = auStack_210;
        auStack_210[0] = 0x3d60608;
        lVar21 = lVar12;
        lVar15 = lVar16;
        lStack_1f0 = lVar14;
        lStack_1e8 = param_4;
        auStack_200 = auVar24;
        if (*(long *)(lVar16 + 0x38) == 0) {
          func_0x03256878(lVar16);
        }
        puVar9 = PTR_DAT_07779d10;
        if ((auVar23._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar23._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 0x10))
                             (auVar23._0_8_,auVar23._8_8_,lVar12);
          return lVar21;
        }
        uVar10 = func_0x03280a2c(puVar9);
        uVar22 = func_0x05ac7464(uVar10,0);
        uVar10 = 0x3d6068c;
        auVar24 = func_0x03280b7c(uVar22,lVar16);
        goto LAB_03d6068c;
      }
      lVar21 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar8 = &uStack_1b0;
      lVar15 = lStack_1b8;
      unaff_x22 = lStack_1d0;
      uVar10 = uStack_1e0;
      auVar23 = auStack_1c8;
    }
    else {
      lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
      lVar14 = 0;
      puVar8 = &uStack_170;
      lVar15 = lStack_178;
      uVar10 = uStack_190;
      auVar23 = auStack_188;
    }
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
    lVar21 = 0;
    puVar6 = auStack_130;
    uVar10 = uStack_150;
    auVar2 = auStack_140;
LAB_03d6068c:
    puVar7 = (undefined8 *)((long)puVar6 + -0x30);
    *(undefined8 *)((long)puVar6 + -0x30) = uVar10;
    *(undefined1 (*) [16])((long)puVar6 + -0x20) = auVar23;
    *(undefined1 (*) [16])((long)puVar6 + -0x10) = auVar2;
    plVar20 = *(long **)(lVar15 + 0x38);
    lVar14 = lVar15;
    if (plVar20 == (long *)0x0) {
      func_0x03256878(lVar15);
      plVar20 = *(long **)(lVar15 + 0x38);
    }
    if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
    func_0x0531dbd0(lVar12,0xfffffffe);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x38) = auVar24._0_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x38),auVar24._0_8_);
      *(undefined8 *)(lVar12 + 0x48) = auVar24._8_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x48),auVar24._8_8_);
      *(long *)(lVar12 + 0x28) = lVar21;
      func_0x032809c4((long *)(lVar12 + 0x28),lVar21);
      return lVar12;
    }
    auVar23 = func_0x03280cac();
    unaff_x22 = 0;
    uVar10 = 0x3d60730;
LAB_03d60730:
    puVar8 = (undefined8 *)((long)puVar7 + -0x30);
    *(undefined8 *)((long)puVar7 + -0x30) = uVar10;
    *(long *)((long)puVar7 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar24;
    *(long *)((long)puVar7 + -8) = lVar21;
    plVar20 = *(long **)(lVar14 + 0x38);
    lVar21 = lVar14;
    if (plVar20 == (long *)0x0) {
      func_0x03256878(lVar14);
      plVar20 = *(long **)(lVar14 + 0x38);
    }
    if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
    func_0x0531e428(lVar12,0xfffffffe);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x38) = auVar23._0_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x38),auVar23._0_8_);
      *(undefined8 *)(lVar12 + 0x48) = auVar23._8_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x48),auVar23._8_8_);
      *(long *)(lVar12 + 0x28) = lVar15;
      func_0x032809c4((long *)(lVar12 + 0x28),lVar15);
      return lVar12;
    }
    auVar24 = func_0x03280cac();
    unaff_x22 = 0;
    uVar10 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar8 + -0x30) = uVar10;
  *(long *)((long)puVar8 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar8 + -0x18) = auVar23;
  *(long *)((long)puVar8 + -8) = lVar15;
  plVar20 = *(long **)(lVar21 + 0x38);
  lVar15 = lVar21;
  if (plVar20 == (long *)0x0) {
    func_0x03256878(lVar21);
    plVar20 = *(long **)(lVar21 + 0x38);
  }
  if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar12 = func_0x03280ca0();
  uVar10 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + 8);
  func_0x0531ec78(lVar12,0xfffffffe);
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 0x40) = auVar24._0_8_;
    func_0x032809c4((undefined8 *)(lVar12 + 0x40),auVar24._0_8_);
    *(undefined8 *)(lVar12 + 0x50) = auVar24._8_8_;
    func_0x032809c4((undefined8 *)(lVar12 + 0x50),auVar24._8_8_);
    *(long *)(lVar12 + 0x30) = lVar14;
    func_0x032809c4((long *)(lVar12 + 0x30),lVar14);
    return lVar12;
  }
  auVar23 = func_0x03280cac();
  lVar21 = auVar23._0_8_;
  *(undefined8 *)((long)puVar8 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar8 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar8 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar8 + -0x48) = auVar24;
  *(long *)((long)puVar8 + -0x38) = lVar14;
  plVar20 = *(long **)(lVar15 + 0x38);
  if (plVar20 == (long *)0x0) {
    func_0x03256878(lVar15);
    plVar20 = *(long **)(lVar15 + 0x38);
  }
  if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar14 = func_0x03280ca0();
  puVar11 = *(undefined8 **)(*(long *)(lVar15 + 0x38) + 8);
  (*(code *)*puVar11)(lVar14,0xfffffffe);
  if (lVar14 != 0) {
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0xc0,lVar21);
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0x100,auVar23._8_8_);
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0x80,uVar10);
    return lVar14;
  }
  auVar24 = func_0x03280cac();
  lVar14 = auVar24._8_8_;
  plVar20 = auVar24._0_8_;
  *(undefined8 *)((long)puVar8 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar8 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar8 + -0x80) = auVar23;
  *(long *)((long)puVar8 + -0x70) = lVar15;
  *(undefined8 *)((long)puVar8 + -0x68) = uVar10;
  puVar13 = puVar11;
  if (puVar11[7] == 0) {
    func_0x03256878(puVar11);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar20 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar14 == 0)) {
    uVar10 = func_0x03280a2c(puVar9);
    uVar10 = func_0x05ac7464(uVar10,0);
    func_0x03280b7c(uVar10,puVar11);
LAB_03d60c04:
    func_0x03281048(plVar20);
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(puVar11[7] + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar12 = *plVar20;
    bVar1 = *(byte *)(lVar12 + 0x130);
    if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15)) {
      lVar15 = *(long *)(puVar11[7] + 0x10);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
        lVar12 = *plVar20;
        bVar1 = *(byte *)(lVar12 + 0x130);
      }
      if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15))
      {
        lVar15 = *(long *)(puVar11[7] + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
          lVar12 = *plVar20;
          bVar1 = *(byte *)(lVar12 + 0x130);
        }
        if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar21 = (**(code **)(lVar12 + 0x228))(plVar20,lVar14,*(undefined8 *)(lVar12 + 0x230));
          return lVar21;
        }
      }
      goto LAB_03d60c04;
    }
    lVar21 = *(long *)(puVar11[7] + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c(lVar21);
    }
    lVar21 = func_0x03280b90(plVar20,lVar21);
    if (lVar21 == 0) {
      lVar21 = *(long *)(puVar11[7] + 0x38);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar21 + 0x130)) ||
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) != lVar21
         )) {
        if ((*(byte *)(*(long *)(puVar11[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar21 = func_0x03280ca0();
        func_0x04b68fa4(lVar21,plVar20,lVar14,*(undefined8 *)(puVar11[7] + 0x58));
        return lVar21;
      }
      if ((*(byte *)(*(long *)(puVar11[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar21 = func_0x03280ca0();
      lVar15 = *(long *)(puVar11[7] + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      if ((*(byte *)(lVar15 + 0x130) <= *(byte *)(*plVar20 + 0x130)) &&
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
         )) {
        func_0x04b713b0(lVar21,plVar20,lVar14,*(undefined8 *)(puVar11[7] + 0x48));
        return lVar21;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar11[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar21 = func_0x03280ca0();
    lVar15 = *(long *)(puVar11[7] + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar12 = func_0x03280b90(plVar20,lVar15);
    if (lVar12 != 0) {
      func_0x04b66610(lVar21,lVar12,lVar14,*(undefined8 *)(puVar11[7] + 0x30));
      return lVar21;
    }
  }
  auVar23 = func_0x03281048(plVar20,lVar15);
  lVar14 = auVar23._8_8_;
  plVar20 = auVar23._0_8_;
  *(undefined8 *)((long)puVar8 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar8 + -0xb8) = lVar15;
  *(long *)((long)puVar8 + -0xb0) = lVar21;
  *(undefined8 **)((long)puVar8 + -0xa8) = puVar11;
  *(undefined1 (*) [16])((long)puVar8 + -0xa0) = auVar24;
  if (puVar13[7] == 0) {
    func_0x03256878(puVar13);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar20 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar14 == 0)) {
    uVar10 = func_0x03280a2c(puVar9);
    uVar10 = func_0x05ac7464(uVar10,0);
    func_0x03280b7c(uVar10,puVar13);
  }
  else {
    lVar21 = *(long *)(puVar13[7] + 0x10);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    lVar12 = *plVar20;
    bVar1 = *(byte *)(lVar12 + 0x130);
    if ((bVar1 < *(byte *)(lVar21 + 0x130)) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) != lVar21)) {
      lVar21 = *(long *)(puVar13[7] + 0x20);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
      }
      lVar21 = func_0x03280b90(plVar20,lVar21);
      if (lVar21 != 0) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar21 = func_0x03280ca0();
        lVar15 = *(long *)(puVar13[7] + 0x20);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
        }
        lVar12 = func_0x03280b90(plVar20,lVar15);
        if (lVar12 != 0) {
          func_0x04b667e0(lVar21,lVar12,lVar14,*(undefined8 *)(puVar13[7] + 0x30));
          return lVar21;
        }
        goto LAB_03d60ee0;
      }
      lVar21 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar21 + 0x130)) ||
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) != lVar21
         )) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar21 = func_0x03280ca0();
        func_0x04b693d0(lVar21,plVar20,lVar14,*(undefined8 *)(puVar13[7] + 0x58));
        return lVar21;
      }
      if ((*(byte *)(*(long *)(puVar13[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar21 = func_0x03280ca0();
      lVar12 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar20 + 0x130)) &&
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
         )) {
        func_0x04b715c8(lVar21,plVar20,lVar14,*(undefined8 *)(puVar13[7] + 0x48));
        return lVar21;
      }
    }
    else {
      lVar21 = *(long *)(puVar13[7] + 0x10);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
        lVar12 = *plVar20;
        bVar1 = *(byte *)(lVar12 + 0x130);
      }
      if ((*(byte *)(lVar21 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) == lVar21))
      {
        lVar21 = *(long *)(puVar13[7] + 0x10);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
          lVar12 = *plVar20;
          bVar1 = *(byte *)(lVar12 + 0x130);
        }
        if ((*(byte *)(lVar21 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) == lVar21
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar21 = (**(code **)(lVar12 + 0x228))(plVar20,lVar14,*(undefined8 *)(lVar12 + 0x230));
          return lVar21;
        }
      }
    }
  }
  func_0x03281048(plVar20);
LAB_03d60ee0:
  lVar21 = func_0x03281048(plVar20,lVar15);
  *(undefined8 *)((long)puVar8 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar8 + -0xd0) = auVar23;
  lVar14 = *(long *)(lVar21 + 0x20);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  lVar14 = **(long **)(lVar14 + 0xb8);
  func_0x03280ab0();
  if (lVar14 == 0) {
    lVar14 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar14 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar15 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    **(long **)(lVar15 + 0xb8) = lVar14;
    lVar21 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar21 + 0xb8),lVar14);
  }
  return lVar14;
}

