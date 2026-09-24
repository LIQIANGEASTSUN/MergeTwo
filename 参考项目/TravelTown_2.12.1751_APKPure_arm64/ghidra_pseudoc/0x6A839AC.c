/* Ghidra 12.1.2 native pseudocode; RVA 0x6A839AC; Merger.MergeBoard.Logic.ToolSpawnHandler.SumItemsMergeValue; status ok */


ulong Merger_MergeBoard_Logic_ToolSpawnHandler__SumItemsMergeValue
                (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  long **pplVar12;
  undefined **ppuVar13;
  code **ppcVar14;
  int iVar15;
  long *plVar17;
  uint uVar16;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long *plVar25;
  int extraout_w1;
  long lVar26;
  undefined *puVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  int *piVar34;
  long unaff_x21;
  code *pcVar35;
  long *unaff_x22;
  ulong uVar36;
  undefined *unaff_x23;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar37;
  code *pcVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  undefined8 auStack_220 [2];
  undefined1 auStack_210 [16];
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e0;
  undefined1 auStack_1d8 [16];
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  code *pcStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [16];
  long *plStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  undefined *puStack_120;
  undefined *puStack_118;
  long *plStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  puVar27 = PTR_DAT_07831b80;
  uVar22 = param_3;
  if ((bRam0000000007e2a77c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831b88);
    func_0x03280a18(PTR_DAT_07785d08);
    func_0x03280a18(PTR_DAT_07831b90);
    func_0x03280a18(PTR_DAT_07785d10);
    func_0x03280a18(PTR_DAT_0776e590);
    func_0x03280a18(PTR_DAT_077a6e80);
    func_0x03280a18(PTR_DAT_0776e5a8);
    func_0x03280a18(PTR_DAT_07785d18);
    func_0x03280a18(PTR_DAT_07831b98);
    func_0x03280a18(PTR_DAT_07831ba0);
    func_0x03280a18(PTR_DAT_07831b80);
    bRam0000000007e2a77c = 1;
  }
  lVar21 = func_0x03280ca0(*(undefined8 *)puVar27);
  func_0x06b84e28(lVar21,0);
  puVar10 = PTR_DAT_07831ba0;
  puVar9 = PTR_DAT_07831b98;
  puVar8 = PTR_DAT_07785d18;
  puVar7 = PTR_DAT_07785d10;
  puVar6 = PTR_DAT_07785d08;
  puVar5 = PTR_DAT_0776e5a8;
  puVar37 = PTR_DAT_0776e590;
  plVar17 = unaff_x24;
  if (lVar21 != 0) {
    *(undefined8 *)(lVar21 + 0x10) = param_2;
    func_0x032809c4((undefined8 *)(lVar21 + 0x10),param_2);
    *(long *)(lVar21 + 0x18) = (long)param_1;
    func_0x032809c4((long *)(lVar21 + 0x18),param_1);
    uVar22 = func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x05355fbc(uVar22,lVar21,*(undefined8 *)puVar9,0);
    uVar23 = func_0x03d872a8(param_3,uVar22,*(undefined8 *)puVar37);
    param_2 = func_0x03280ca0(*(undefined8 *)puVar8);
    param_4 = 0;
    func_0x05356664(param_2,lVar21,*(undefined8 *)puVar10);
    uVar22 = *(undefined8 *)puVar6;
    uVar23 = func_0x03d504ac(uVar23,param_2);
    param_3 = func_0x03d5b7c8(uVar23,*(undefined8 *)puVar7);
    uVar24 = func_0x03ce7ea0(param_3,*(undefined8 *)PTR_DAT_07831b88);
    if ((uVar24 & 1) != 0) {
      return 0;
    }
    uVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a6e80);
    puVar27 = puVar7;
    plVar17 = (long *)puVar5;
    unaff_x25 = puVar9;
    unaff_x26 = puVar37;
    if (param_1 != (long *)0x0) {
      func_0x05353e8c(uVar23,param_1,*(undefined8 *)(*param_1 + 0x280),0);
      lVar21 = *(long *)PTR_DAT_07831b90;
      lVar31 = *(long *)(lVar21 + 0x38);
      if (lVar31 == 0) {
        func_0x03256878(lVar21);
        lVar31 = *(long *)(lVar21 + 0x38);
      }
      plVar17 = (long *)func_0x03d4ea18(param_3,uVar23,*(undefined8 *)(lVar31 + 0x10));
      if ((bRam0000000007e1fbe1 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077a5818,0);
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_077617f0);
        func_0x03280a18(PTR_DAT_077617f8);
        func_0x03280a18(PTR_DAT_0774e8e0);
        bRam0000000007e1fbe1 = 1;
      }
      if (plVar17 == (long *)0x0) {
        func_0x03280a2c(PTR_DAT_07774b08);
        plVar17 = (long *)func_0x05ac7464();
        uVar22 = func_0x03280a2c(PTR_DAT_077a5818);
        func_0x03280b7c(plVar17,uVar22);
      }
      else {
        lVar21 = *plVar17;
        uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar24 != 0) {
          piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077617f0) {
              puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac78d8;
            }
            uVar24 = uVar24 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar24 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077617f0,0);
LAB_05ac78d8:
        unaff_x22 = (long *)PTR_DAT_0774e8c8;
        plVar17 = (long *)(*(code *)*puVar18)(plVar17,puVar18[1]);
        puVar37 = PTR_DAT_077617f8;
        puVar27 = PTR_DAT_0774e8e0;
        if (plVar17 != (long *)0x0) {
          uVar2 = 0;
          do {
            uVar16 = uVar2;
            lVar21 = *plVar17;
            uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar24 != 0) {
              piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar27) {
                  puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac7958;
                }
                uVar24 = uVar24 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar24 != 0);
            }
            puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar27,0);
LAB_05ac7958:
            uVar24 = (*(code *)*puVar18)(plVar17,puVar18[1]);
            if ((uVar24 & 1) == 0) goto LAB_05ac79e0;
            lVar21 = *plVar17;
            uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar24 != 0) {
              piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar37) {
                  puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac79b4;
                }
                uVar24 = uVar24 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar24 != 0);
            }
            puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar37,0);
LAB_05ac79b4:
            iVar15 = (*(code *)*puVar18)(plVar17,puVar18[1]);
            uVar2 = iVar15 + uVar16;
          } while (!SCARRY4(uVar16,iVar15));
          uVar22 = func_0x03280cbc();
          func_0x03280b7c(uVar22,*(undefined8 *)PTR_DAT_077a5818);
LAB_05ac79e0:
          unaff_x21 = 0;
          goto LAB_05ac79e4;
        }
      }
      func_0x03280cac();
      puVar37 = unaff_x23;
      while( true ) {
        auVar44 = func_0x03280ca4(unaff_x21);
        uVar16 = 0;
        if (auVar44._8_4_ != 1) break;
        plVar19 = (long *)func_0x072ce910();
        unaff_x21 = *plVar19;
        func_0x072ce920();
LAB_05ac79e4:
        if (plVar17 != (long *)0x0) {
          lVar21 = *plVar17;
          uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar24 != 0) {
            piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar34 + -2) == *unaff_x22) {
                puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
                goto LAB_05ac7a34;
              }
              uVar24 = uVar24 - 1;
              piVar34 = piVar34 + 4;
            } while (uVar24 != 0);
          }
          puVar18 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x22,0);
LAB_05ac7a34:
          (*(code *)*puVar18)(plVar17,puVar18[1]);
        }
        if (unaff_x21 == 0) {
          return (ulong)uVar16;
        }
      }
      if (plVar17 != (long *)0x0) {
        lVar21 = *plVar17;
        uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar24 != 0) {
          piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *unaff_x22) {
              puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7b18;
            }
            uVar24 = uVar24 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar24 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x22,0);
LAB_05ac7b18:
        (*(code *)*puVar18)(plVar17,puVar18[1]);
      }
      func_0x03365958(auVar44._0_8_);
      func_0x03280ca4(0);
      plVar17 = (long *)func_0x02f09514();
      lVar21 = 0x7e1f000;
      if ((bRam0000000007e1fbe2 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_077a5820);
        func_0x03280a18(PTR_DAT_077a5828);
        func_0x03280a18(PTR_DAT_0774e8e0);
        bRam0000000007e1fbe2 = 1;
      }
      if (plVar17 == (long *)0x0) {
        func_0x03280a2c(PTR_DAT_07774b08);
        plVar17 = (long *)func_0x05ac7464();
        uVar22 = func_0x03280a2c(PTR_DAT_077a5830);
        func_0x03280b7c(plVar17,uVar22);
      }
      else {
        lVar31 = *plVar17;
        uVar24 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar24 != 0) {
          piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077a5820) {
              puVar18 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7bec;
            }
            uVar24 = uVar24 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar24 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077a5820,0);
LAB_05ac7bec:
        unaff_x22 = (long *)PTR_DAT_0774e8c8;
        plVar17 = (long *)(*(code *)*puVar18)(plVar17,puVar18[1]);
        puVar5 = PTR_DAT_077a5828;
        puVar27 = PTR_DAT_0774e8e0;
        if (plVar17 != (long *)0x0) {
          do {
            lVar21 = *plVar17;
            uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar24 != 0) {
              piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar27) {
                  puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac7c68;
                }
                uVar24 = uVar24 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar24 != 0);
            }
            puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar27,0);
LAB_05ac7c68:
            uVar24 = (*(code *)*puVar18)(plVar17,puVar18[1]);
            if ((uVar24 & 1) == 0) {
              lVar21 = 0;
              if (plVar17 == (long *)0x0) goto LAB_05ac7d40;
              goto LAB_05ac7ce8;
            }
            lVar21 = *plVar17;
            uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar24 != 0) {
              piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar5) {
                  puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac7cc4;
                }
                uVar24 = uVar24 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar24 != 0);
            }
            puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar5,0);
LAB_05ac7cc4:
            (*(code *)*puVar18)(plVar17,puVar18[1]);
          } while( true );
        }
      }
      func_0x03280cac();
      while( true ) {
        auVar44 = func_0x03280ca4(lVar21);
        lVar21 = auVar44._0_8_;
        if (auVar44._8_4_ != 1) break;
        plVar19 = (long *)func_0x072ce910(lVar21);
        lVar21 = *plVar19;
        uVar24 = func_0x072ce920();
        if (plVar17 != (long *)0x0) {
LAB_05ac7ce8:
          lVar31 = *plVar17;
          uVar24 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar24 != 0) {
            piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar34 + -2) == *unaff_x22) {
                puVar18 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
                goto LAB_05ac7d34;
              }
              uVar24 = uVar24 - 1;
              piVar34 = piVar34 + 4;
            } while (uVar24 != 0);
          }
          puVar18 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x22,0);
LAB_05ac7d34:
          uVar24 = (*(code *)*puVar18)(plVar17,puVar18[1]);
        }
LAB_05ac7d40:
        if (lVar21 == 0) {
          return uVar24;
        }
      }
      if (plVar17 != (long *)0x0) {
        lVar31 = *plVar17;
        uVar24 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar24 != 0) {
          piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *unaff_x22) {
              puVar18 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7e34;
            }
            uVar24 = uVar24 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar24 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x22,0);
LAB_05ac7e34:
        (*(code *)*puVar18)(plVar17,puVar18[1]);
      }
      func_0x03365958(lVar21);
      func_0x03280ca4(0);
      plVar19 = (long *)func_0x02f09514();
      uStack_a0 = 0x5ac7e58;
      uStack_70 = 0;
      puStack_88 = puVar37;
      plStack_80 = unaff_x22;
      lStack_78 = lVar21;
      plStack_68 = plVar17;
      if ((bRam0000000007e1fbe3 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_077617f0);
        func_0x03280a18(PTR_DAT_077617f8);
        func_0x03280a18(PTR_DAT_0774e8e0);
        bRam0000000007e1fbe3 = 1;
      }
      if (plVar19 == (long *)0x0) {
        func_0x03280a2c(PTR_DAT_07774b08);
        plVar17 = (long *)func_0x05ac7464();
        goto LAB_05ac80ac;
      }
      lVar31 = *plVar19;
      uVar24 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar24 != 0) {
        piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077617f0) {
            puVar18 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac7f08;
          }
          uVar24 = uVar24 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar24 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_077617f0,0);
LAB_05ac7f08:
      unaff_x24 = (long *)PTR_DAT_0774e8c8;
      plVar17 = (long *)(*(code *)*puVar18)(plVar19,puVar18[1]);
      puVar37 = PTR_DAT_077617f8;
      puVar27 = PTR_DAT_0774e8e0;
      if (plVar17 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_05ac80a0;
      }
      uVar24 = 0;
      uVar36 = 0;
      do {
        lVar21 = *plVar17;
        uVar33 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)puVar27) {
              puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7f88;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar27,0);
LAB_05ac7f88:
        uVar33 = (*(code *)*puVar18)(plVar17,puVar18[1]);
        if ((uVar33 & 1) == 0) goto LAB_05ac8008;
        lVar21 = *plVar17;
        uVar33 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)puVar37) {
              puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7fe4;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar37,0);
LAB_05ac7fe4:
        uVar16 = (*(code *)*puVar18)(plVar17,puVar18[1]);
        uVar2 = uVar16;
        if ((int)(uint)uVar24 <= (int)uVar16) {
          uVar2 = (uint)uVar24;
        }
        if ((int)uVar36 == 0) {
          uVar2 = uVar16;
        }
        uVar24 = (ulong)uVar2;
        uVar36 = 1;
      } while( true );
    }
  }
  auVar42 = func_0x03280cac();
  lVar32 = auVar42._8_8_;
  lVar31 = auVar42._0_8_;
  pcStack_90 = Merger_MergeBoard_Logic_ToolSpawnHandler__GetToolToSpawn;
  uVar24 = 0x7e2a000;
  puStack_88 = puVar27;
  plStack_80 = (long *)lVar21;
  lStack_78 = param_2;
  uStack_70 = param_3;
  plStack_68 = param_1;
  if ((bRam0000000007e2a775 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831ba8);
    func_0x03280a18(PTR_DAT_07810720);
    bRam0000000007e2a775 = 1;
  }
  lStack_98 = 0;
  lVar21 = lVar32;
  uVar36 = Merger_MergeBoard_Logic_ToolSpawnHandler__SelectRandomWeightedTool(lVar31,uVar22,lVar32);
  if (*(long *)(lVar31 + 0x78) != 0) {
    uVar24 = uVar36 & 0xffffffff;
    lVar21 = *(long *)PTR_DAT_07810720;
    uVar23 = func_0x04f61e04(*(long *)(lVar31 + 0x78),uVar24,lVar21);
    if (lVar32 != 0) {
      func_0x04f63934(lVar32,uVar24,&lStack_98,*(undefined8 *)PTR_DAT_07831ba8);
      if ((lStack_98 != 0) && (iVar15 = func_0x06b84d70(lStack_98,0), 0 < iVar15)) {
        param_4 = Merger_MergeBoard_Logic_ToolSpawnHandler__FilterToolLevelsByProgressionOnBoard
                            (lVar31,param_4,lStack_98);
      }
      uVar24 = Merger_MergeBoard_Logic_ToolSpawnHandler__GenerateRandomToolItemFromWeights
                         (lVar31,param_4,uVar23);
      return uVar24;
    }
  }
  auVar43 = func_0x03280cac();
  puVar27 = PTR_DAT_07831bb0;
  lVar29 = auVar43._0_8_;
  pcStack_e0 = Merger_MergeBoard_Logic_ToolSpawnHandler__SelectRandomWeightedTool;
  puStack_d8 = unaff_x25;
  pcStack_d0 = (code *)plVar17;
  uStack_c8 = uVar24;
  uStack_c0 = uVar22;
  plStack_a8 = (long *)param_4;
  if ((bRam0000000007e2a776 & 1) == 0) {
    lStack_b8 = lVar32;
    lStack_b0 = lVar31;
    func_0x03280a18(PTR_DAT_077800c0);
    func_0x03280a18(PTR_DAT_077800c8);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_07831bb8);
    func_0x03280a18(PTR_DAT_07831bc0);
    func_0x03280a18(PTR_DAT_07831bb0);
    func_0x03280a18(PTR_DAT_077800d8);
    func_0x03280a18(PTR_DAT_077800e0);
    auVar42._8_8_ = lStack_b8;
    auVar42._0_8_ = lStack_b0;
    bRam0000000007e2a776 = 1;
  }
  lStack_b8 = auVar42._8_8_;
  lStack_b0 = auVar42._0_8_;
  uVar22 = Merger_MergeBoard_Logic_ToolSpawnHandler__GetFilteredTools(lVar29,auVar43._8_8_,lVar21);
  uVar23 = Merger_MergeBoard_Logic_ToolSpawnHandler__CalculateCurrentToolAmounts(lVar29,lVar21);
  Merger_MergeBoard_Logic_ToolSpawnHandler__ApplyMetagameWeightBoosts(lVar29,uVar22,uVar23);
  lVar21 = *(long *)puVar27;
  if (*(int *)(lVar21 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar21 = *(long *)puVar27;
  }
  lVar31 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
  if (lVar31 == 0) {
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar21 = *(long *)puVar27;
    }
    uVar23 = **(undefined8 **)(lVar21 + 0xb8);
    lVar31 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
    func_0x0535ab4c(lVar31,uVar23,*(undefined8 *)PTR_DAT_07831bb8,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar27 + 0xb8) + 8);
    *plVar17 = lVar31;
    func_0x032809c4(plVar17,lVar31);
    lVar21 = *(long *)puVar27;
  }
  if (*(int *)(lVar21 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar21 = *(long *)puVar27;
  }
  puVar37 = PTR_DAT_077800e0;
  plVar17 = *(long **)(*(long *)(lVar21 + 0xb8) + 0x10);
  if (plVar17 == (long *)0x0) {
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar21 = *(long *)puVar27;
    }
    uVar24 = **(ulong **)(lVar21 + 0xb8);
    plVar17 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
    func_0x0535ac00(plVar17,uVar24,*(undefined8 *)PTR_DAT_07831bc0,0);
    plVar19 = (long *)(*(long *)(*(long *)puVar27 + 0xb8) + 0x10);
    *plVar19 = (long)plVar17;
    func_0x032809c4(plVar19,plVar17);
  }
  plVar19 = plVar17;
  lVar21 = func_0x03f36e88(uVar22,lVar31,plVar17,*(undefined8 *)puVar37);
  plVar20 = *(long **)(lVar29 + 0x38);
  if (plVar20 != (long *)0x0) {
    lVar32 = *plVar20;
    uVar36 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar36 != 0) {
      piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar18 = (undefined8 *)(lVar32 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_06b83f10;
        }
        uVar36 = uVar36 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar36 != 0);
    }
    plVar19 = (long *)0x0;
    puVar18 = (undefined8 *)func_0x03256b10(plVar20);
LAB_06b83f10:
    plVar25 = (long *)(*(code *)*puVar18)(plVar20,puVar18[1]);
    lVar29 = 0;
    if (lVar21 != 0) {
      lVar32 = *(long *)PTR_DAT_077800d8;
      pcStack_d0 = pcStack_e0;
      lVar31 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0xa0);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
      }
      lVar31 = func_0x03280ca0(lVar31);
      func_0x04c1b8d8(lVar31,*(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0xa8));
      if ((plVar25 != (long *)0x0) &&
         (iVar15 = (**(code **)(*plVar25 + 0x1a8))
                             (plVar25,*(undefined4 *)(lVar21 + 0x18),
                              *(undefined8 *)(*plVar25 + 0x1b0)), lVar31 != 0)) {
        *(int *)(lVar31 + 0x10) = iVar15 + 1;
        uVar22 = *(undefined8 *)(lVar21 + 0x10);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar23 = func_0x03280ca0();
        lVar21 = *(long *)(*(long *)(lVar32 + 0x20) + 0xc0);
        func_0x05355fbc(uVar23,lVar31,*(undefined8 *)(lVar21 + 0xb0),*(undefined8 *)(lVar21 + 0xc0))
        ;
        lVar21 = func_0x03d4294c(uVar22,uVar23,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 200));
        if (lVar21 != 0) {
          return (ulong)*(uint *)(lVar21 + 0x10);
        }
      }
      auVar42 = func_0x03280cac();
      plStack_f0 = (long *)0x4a44b20;
      lVar21 = *(long *)(*(long *)(*(long *)(auVar42._8_8_ + 0x20) + 0xc0) + 8);
      pcStack_e0 = (code *)lVar31;
      puStack_d8 = (undefined *)lVar32;
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
      }
      uVar22 = func_0x03280ca0(lVar21);
      func_0x04143c38(uVar22,*(undefined8 *)
                              (*(long *)(*(long *)(auVar42._8_8_ + 0x20) + 0xc0) + 0xe0));
      puVar18 = (undefined8 *)(auVar42._0_8_ + 0x10);
      *puVar18 = uVar22;
      func_0x032809c4(puVar18,uVar22);
      return auVar42._0_8_;
    }
  }
  auVar43 = func_0x03280cac();
  puVar5 = PTR_DAT_07831bc8;
  uVar22 = auVar43._0_8_;
  auStack_130._0_8_ = Merger_MergeBoard_Logic_ToolSpawnHandler__FilterToolLevelsByProgressionOnBoard
  ;
  puStack_118 = puVar37;
  plStack_110 = (long *)puVar27;
  plVar25 = plVar19;
  puStack_120 = unaff_x26;
  uStack_108 = uVar24;
  pcStack_100 = (code *)plVar17;
  lStack_f8 = lVar31;
  plStack_f0 = plVar20;
  plStack_e8 = (long *)lVar29;
  if ((bRam0000000007e2a778 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780080);
    func_0x03280a18(PTR_DAT_07780088);
    func_0x03280a18(PTR_DAT_07780090);
    func_0x03280a18(PTR_DAT_07831bd0);
    func_0x03280a18(PTR_DAT_07831bc8);
    bRam0000000007e2a778 = 1;
  }
  lVar21 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x06b84dbc(lVar21,0);
  puVar9 = PTR_DAT_07831bd0;
  puVar8 = PTR_DAT_07780090;
  puVar7 = PTR_DAT_07780088;
  puVar6 = PTR_DAT_07780080;
  if (lVar21 == 0) {
    auVar42 = func_0x03280cac();
    puVar6 = PTR_DAT_07831bb0;
    pcStack_180 = Merger_MergeBoard_Logic_ToolSpawnHandler__GenerateRandomToolItemFromWeights;
    puStack_168 = puVar37;
    puStack_160 = puVar27;
    puStack_158 = puVar5;
    uStack_170 = unaff_x26;
    auStack_150._0_8_ = lVar21;
    plStack_140 = plVar19;
    if ((bRam0000000007e2a777 & 1) == 0) {
      auStack_150._8_8_ = uVar22;
      uStack_138 = auVar43._8_8_;
      func_0x03280a18(PTR_DAT_077800e8);
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_077800d0);
      func_0x03280a18(PTR_DAT_0777e510);
      func_0x03280a18(PTR_DAT_07831bd8);
      func_0x03280a18(PTR_DAT_07831be0);
      func_0x03280a18(PTR_DAT_07831bb0);
      func_0x03280a18(PTR_DAT_077800f8);
      func_0x03280a18(PTR_DAT_07780100);
      auVar43._8_8_ = uStack_138;
      auVar43._0_8_ = auStack_150._8_8_;
      bRam0000000007e2a777 = 1;
    }
    uStack_138 = auVar43._8_8_;
    auStack_150._8_8_ = auVar43._0_8_;
    lVar21 = *(long *)puVar6;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar43._8_8_ = uStack_138;
      auVar43._0_8_ = auStack_150._8_8_;
      lVar21 = *(long *)puVar6;
    }
    uStack_138 = auVar43._8_8_;
    auStack_150._8_8_ = auVar43._0_8_;
    lVar31 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x18);
    if (lVar31 == 0) {
      if (*(int *)(lVar21 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar43._8_8_ = uStack_138;
        auVar43._0_8_ = auStack_150._8_8_;
        lVar21 = *(long *)puVar6;
      }
      uStack_138 = auVar43._8_8_;
      auStack_150._8_8_ = auVar43._0_8_;
      uVar22 = **(undefined8 **)(lVar21 + 0xb8);
      lVar31 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar31,uVar22,*(undefined8 *)PTR_DAT_07831bd8,0);
      plVar17 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
      *plVar17 = lVar31;
      func_0x032809c4(plVar17,lVar31);
      auVar43._8_8_ = uStack_138;
      auVar43._0_8_ = auStack_150._8_8_;
      lVar21 = *(long *)puVar6;
    }
    uStack_138 = auVar43._8_8_;
    auStack_150._8_8_ = auVar43._0_8_;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar43._8_8_ = uStack_138;
      auVar43._0_8_ = auStack_150._8_8_;
      lVar21 = *(long *)puVar6;
    }
    puVar27 = PTR_DAT_07780100;
    uStack_138 = auVar43._8_8_;
    auStack_150._8_8_ = auVar43._0_8_;
    lVar32 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x20);
    if (lVar32 == 0) {
      if (*(int *)(lVar21 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar43._8_8_ = uStack_138;
        auVar43._0_8_ = auStack_150._8_8_;
        lVar21 = *(long *)puVar6;
      }
      uStack_138 = auVar43._8_8_;
      auStack_150._8_8_ = auVar43._0_8_;
      uVar22 = **(undefined8 **)(lVar21 + 0xb8);
      lVar32 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar32,uVar22,*(undefined8 *)PTR_DAT_07831be0,0);
      plVar17 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
      *plVar17 = lVar32;
      func_0x032809c4(plVar17,lVar32);
      auVar43._8_8_ = uStack_138;
      auVar43._0_8_ = auStack_150._8_8_;
    }
    uStack_138 = auVar43._8_8_;
    auStack_150._8_8_ = auVar43._0_8_;
    lVar21 = func_0x03f372e4(auVar42._8_8_,lVar31,lVar32,*(undefined8 *)puVar27);
    plVar17 = *(long **)(auVar42._0_8_ + 0x38);
    if (plVar17 != (long *)0x0) {
      lVar31 = *plVar17;
      uVar24 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar24 != 0) {
        piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077800d0) {
            puVar18 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_06b8427c;
          }
          uVar24 = uVar24 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar24 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077800d0,0);
LAB_06b8427c:
      uVar22 = (*(code *)*puVar18)(plVar17,puVar18[1]);
      if ((lVar21 != 0) &&
         (iVar15 = func_0x04a44654(lVar21,uVar22,*(undefined8 *)PTR_DAT_077800f8),
         plVar25 != (long *)0x0)) {
        lVar21 = *plVar25;
        uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar24 != 0) {
          piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_06b84300;
            }
            uVar24 = uVar24 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar24 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_0777c248,0);
LAB_06b84300:
        puVar27 = (undefined *)(*(code *)*puVar18)(plVar25,puVar18[1]);
        uVar22 = auStack_150._8_8_;
        if (puVar27 != (undefined *)0x0) {
          uVar2 = iVar15 - 1;
          uVar23 = *(undefined8 *)PTR_DAT_0777e510;
          auStack_150._0_8_ = pcStack_180;
          if (*(uint *)(puVar27 + 0x18) <= uVar2) {
            func_0x057b8434(0);
          }
          lVar21 = *(long *)(puVar27 + 0x10);
          if (lVar21 == 0) {
            func_0x03280cac();
          }
          else if (uVar2 < *(uint *)(lVar21 + 0x18)) {
            return *(ulong *)(lVar21 + (long)(int)uVar2 * 8 + 0x20);
          }
          auVar44 = func_0x03280cb4();
          uVar16 = auVar44._8_4_;
          lVar21 = auVar44._0_8_;
          uStack_170 = (undefined *)0x41441f0;
          puStack_168 = (undefined *)uVar22;
          puStack_160 = puVar27;
          puStack_158 = (undefined *)(ulong)uVar2;
          if (*(uint *)(lVar21 + 0x18) <= uVar16) {
            func_0x057b8434(0);
          }
          lVar31 = *(long *)(lVar21 + 0x10);
          if (lVar31 == 0) {
            func_0x03280cac();
          }
          else if (uVar16 < *(uint *)(lVar31 + 0x18)) {
            puVar18 = (undefined8 *)(lVar31 + (long)(int)uVar16 * 8 + 0x20);
            *puVar18 = uVar23;
            uVar24 = func_0x032809c4(puVar18,uVar23);
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            return uVar24;
          }
          auVar42 = func_0x03280cb4();
          pcStack_180 = (code *)0x414425c;
          lVar31 = *(long *)(auVar42._8_8_ + 0x20);
          auStack_178 = (undefined1  [8])lVar21;
          if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
            lVar31 = func_0x0325681c(lVar31);
          }
          lVar21 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x48);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c(lVar21);
          }
          lVar21 = func_0x03280b90(auVar42._0_8_,lVar21);
          if (lVar21 == 0) {
            uVar24 = (ulong)(auVar42._0_8_ == 0);
          }
          else {
            uVar24 = 1;
          }
          return uVar24;
        }
      }
    }
    func_0x03280cac();
    return (ulong)(uint)(1 << (ulong)(extraout_w1 - 1U & 0x1f));
  }
  *(undefined8 *)(lVar21 + 0x10) = uVar22;
  func_0x032809c4((undefined8 *)(lVar21 + 0x10),uVar22);
  *(long *)(lVar21 + 0x18) = (long)plVar19;
  func_0x032809c4((long *)(lVar21 + 0x18),plVar19);
  uVar22 = func_0x03280ca0(*(undefined8 *)puVar8);
  lVar30 = 0;
  func_0x0535acb4(uVar22,lVar21,*(undefined8 *)puVar9);
  lVar29 = *(long *)puVar7;
  lVar31 = func_0x03d87e68(auVar43._8_8_,uVar22);
  lVar21 = lStack_f8;
  pcVar35 = pcStack_100;
  uVar24 = uStack_108;
  lVar32 = *(long *)puVar6;
  pcStack_100 = (code *)auStack_130._0_8_;
  if (*(long *)(lVar32 + 0x38) == 0) {
    func_0x03256878(lVar32);
  }
  if (lVar31 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar32 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar24 = func_0x03280ca0();
    func_0x041e8ba0(uVar24,lVar31,*(undefined8 *)(*(long *)(lVar32 + 0x38) + 0x10));
    return uVar24;
  }
  uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar22 = func_0x05ac7464(uVar22,0);
  auVar42 = func_0x03280b7c(uVar22,lVar32);
  lVar26 = auVar42._8_8_;
  puStack_120 = (undefined *)0x3d602b8;
  plStack_110 = (long *)lVar31;
  uStack_108 = lVar32;
  if (*(long *)(lVar26 + 0x38) == 0) {
    func_0x03256878(lVar26);
  }
  if (auVar42._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar24 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x38) + 0x10))(uVar24,auVar42._0_8_);
    return uVar24;
  }
  uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar22 = func_0x05ac7464(uVar22,0);
  auVar43 = func_0x03280b7c(uVar22,lVar26);
  lVar31 = auVar43._8_8_;
  plStack_140 = (long *)0x3d60338;
  auStack_130 = auVar42;
  if (*(long *)(lVar31 + 0x38) == 0) {
    func_0x03256878(lVar31);
  }
  if (auVar43._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar31 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar24 = func_0x03280ca0();
    func_0x0420cec8(uVar24,auVar43._0_8_,*(undefined8 *)(*(long *)(lVar31 + 0x38) + 0x10));
    return uVar24;
  }
  uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar22 = func_0x05ac7464(uVar22,0);
  auVar42 = func_0x03280b7c(uVar22,lVar31);
  puStack_160 = (undefined *)0x3d603b4;
  puStack_158 = (undefined *)lVar21;
  lVar21 = lVar29;
  auStack_150 = auVar43;
  if (*(long *)(lVar29 + 0x38) == 0) {
    func_0x03256878(lVar29);
  }
  auVar41._8_8_ = puStack_158;
  auVar41._0_8_ = pcVar35;
  puVar27 = PTR_DAT_07779d10;
  if ((auVar42._0_8_ == 0) || (puVar27 = PTR_DAT_07779d18, auVar42._8_8_ == 0)) {
    uVar22 = func_0x03280a2c(puVar27);
    uVar22 = func_0x05ac7464(uVar22,0);
    auVar43 = func_0x03280b7c(uVar22,lVar29);
    pcStack_180 = (code *)0x3d60428;
    lVar31 = lVar21;
    puStack_168 = (undefined *)lVar29;
    if (*(long *)(lVar21 + 0x38) == 0) {
      _auStack_178 = auVar42;
      func_0x03256878(lVar21);
      auVar42 = _auStack_178;
    }
    puVar27 = PTR_DAT_07779d10;
    _auStack_178 = auVar42;
    if ((auVar43._0_8_ != 0) && (puVar27 = PTR_DAT_07779d18, auVar43._8_8_ != 0)) {
      lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
      lVar31 = 0;
      ppuVar13 = &puStack_160;
      puVar27 = puStack_168;
      pcVar38 = pcStack_180;
      goto LAB_03d60730;
    }
    uVar22 = func_0x03280a2c(puVar27);
    uVar22 = func_0x05ac7464(uVar22,0);
    auVar42 = func_0x03280b7c(uVar22,lVar21);
    uStack_1a0 = 0x3d6049c;
    lVar32 = lVar31;
    lStack_188 = lVar21;
    auStack_198 = auVar43;
    if (*(long *)(lVar31 + 0x38) == 0) {
      func_0x03256878(lVar31);
    }
    puVar27 = PTR_DAT_07779d10;
    if ((auVar42._0_8_ == 0) || (puVar27 = PTR_DAT_07779d18, auVar42._8_8_ == 0)) {
      uVar22 = func_0x03280a2c(puVar27);
      uVar22 = func_0x05ac7464(uVar22,0);
      auStack_1d8 = func_0x03280b7c(uVar22,lVar31);
      uStack_1c0 = 0x3d60510;
      lVar21 = lVar32;
      lStack_1a8 = lVar31;
      auStack_1b8 = auVar42;
      if (*(long *)(lVar32 + 0x38) == 0) {
        func_0x03256878(lVar32);
      }
      puVar27 = PTR_DAT_07779d10;
      if ((auStack_1d8._0_8_ != 0) && (puVar27 = PTR_DAT_07779d18, auStack_1d8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x38) + 8))
                           (auStack_1d8._0_8_,auStack_1d8._8_8_,0);
        return uVar24;
      }
      uVar22 = func_0x03280a2c(puVar27);
      uVar22 = func_0x05ac7464(uVar22,0);
      auVar42 = func_0x03280b7c(uVar22,lVar32);
      uStack_1f0 = 0x3d60588;
      plStack_1e0 = (long *)pcVar35;
      lVar31 = lVar21;
      lVar29 = lVar30;
      lStack_1c8 = lVar32;
      if (*(long *)(lVar30 + 0x38) == 0) {
        func_0x03256878(lVar30);
      }
      puVar27 = PTR_DAT_07779d10;
      if ((auVar42._0_8_ == 0) || (puVar27 = PTR_DAT_07779d18, auVar42._8_8_ == 0)) {
        uVar22 = func_0x03280a2c(puVar27);
        uVar22 = func_0x05ac7464(uVar22,0);
        auVar41 = func_0x03280b7c(uVar22,lVar30);
        auVar4._8_8_ = lVar29;
        auVar4._0_8_ = lVar31;
        pplVar12 = (long **)auStack_220;
        auStack_220[0] = 0x3d60608;
        puVar27 = (undefined *)lVar31;
        lVar32 = lVar29;
        lStack_200 = lVar21;
        lStack_1f8 = lVar30;
        auStack_210 = auVar42;
        if (*(long *)(lVar29 + 0x38) == 0) {
          func_0x03256878(lVar29);
        }
        puVar37 = PTR_DAT_07779d10;
        if ((auVar41._0_8_ != 0) && (puVar37 = PTR_DAT_07779d18, auVar41._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x38) + 0x10))
                             (auVar41._0_8_,auVar41._8_8_,lVar31);
          return uVar24;
        }
        uVar22 = func_0x03280a2c(puVar37);
        uVar22 = func_0x05ac7464(uVar22,0);
        puVar37 = (undefined *)0x3d6068c;
        auVar42 = func_0x03280b7c(uVar22,lVar29);
        goto LAB_03d6068c;
      }
      lVar32 = *(long *)(*(long *)(lVar30 + 0x38) + 0x10);
      ppcVar14 = (code **)&uStack_1c0;
      lVar31 = lStack_1c8;
      pcVar35 = (code *)plStack_1e0;
      uVar22 = uStack_1f0;
      auVar43 = auStack_1d8;
    }
    else {
      lVar32 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
      lVar21 = 0;
      ppcVar14 = &pcStack_180;
      lVar31 = lStack_188;
      uVar22 = uStack_1a0;
      auVar43 = auStack_198;
    }
  }
  else {
    lVar32 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
    puVar27 = (undefined *)0x0;
    pplVar12 = &plStack_140;
    puVar37 = puStack_160;
    auVar4 = auStack_150;
LAB_03d6068c:
    ppuVar13 = (undefined **)((long)pplVar12 + -0x30);
    *(undefined **)((long)pplVar12 + -0x30) = puVar37;
    *(undefined1 (*) [16])((long)pplVar12 + -0x20) = auVar41;
    *(undefined1 (*) [16])((long)pplVar12 + -0x10) = auVar4;
    plVar17 = *(long **)(lVar32 + 0x38);
    lVar21 = lVar32;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar32);
      plVar17 = *(long **)(lVar32 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar36 = func_0x03280ca0();
    lVar31 = *(long *)(*(long *)(lVar32 + 0x38) + 8);
    func_0x0531dbd0(uVar36,0xfffffffe);
    if (uVar36 != 0) {
      *(undefined8 *)(uVar36 + 0x38) = auVar42._0_8_;
      func_0x032809c4((undefined8 *)(uVar36 + 0x38),auVar42._0_8_);
      *(undefined8 *)(uVar36 + 0x48) = auVar42._8_8_;
      func_0x032809c4((undefined8 *)(uVar36 + 0x48),auVar42._8_8_);
      *(long *)(uVar36 + 0x28) = (long)puVar27;
      func_0x032809c4((long *)(uVar36 + 0x28),puVar27);
      return uVar36;
    }
    auVar43 = func_0x03280cac();
    pcVar35 = (code *)0x0;
    pcVar38 = (code *)0x3d60730;
LAB_03d60730:
    ppcVar14 = (code **)((long)ppuVar13 + -0x30);
    *(code **)((long)ppuVar13 + -0x30) = pcVar38;
    *(code **)((long)ppuVar13 + -0x20) = pcVar35;
    *(undefined1 (*) [16])((long)ppuVar13 + -0x18) = auVar42;
    *(undefined **)((long)ppuVar13 + -8) = puVar27;
    plVar17 = *(long **)(lVar21 + 0x38);
    lVar32 = lVar21;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar21);
      plVar17 = *(long **)(lVar21 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar36 = func_0x03280ca0();
    lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
    func_0x0531e428(uVar36,0xfffffffe);
    if (uVar36 != 0) {
      *(undefined8 *)(uVar36 + 0x38) = auVar43._0_8_;
      func_0x032809c4((undefined8 *)(uVar36 + 0x38),auVar43._0_8_);
      *(undefined8 *)(uVar36 + 0x48) = auVar43._8_8_;
      func_0x032809c4((undefined8 *)(uVar36 + 0x48),auVar43._8_8_);
      *(long *)(uVar36 + 0x28) = lVar31;
      func_0x032809c4((long *)(uVar36 + 0x28),lVar31);
      return uVar36;
    }
    auVar42 = func_0x03280cac();
    pcVar35 = (code *)(long *)0x0;
    uVar22 = 0x3d607d4;
  }
  *(undefined8 *)((long)ppcVar14 + -0x30) = uVar22;
  *(code **)((long)ppcVar14 + -0x20) = pcVar35;
  *(undefined1 (*) [16])((long)ppcVar14 + -0x18) = auVar43;
  *(long *)((long)ppcVar14 + -8) = lVar31;
  plVar17 = *(long **)(lVar32 + 0x38);
  lVar31 = lVar32;
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar32);
    plVar17 = *(long **)(lVar32 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar36 = func_0x03280ca0();
  uVar22 = *(undefined8 *)(*(long *)(lVar32 + 0x38) + 8);
  func_0x0531ec78(uVar36,0xfffffffe);
  if (uVar36 != 0) {
    *(undefined8 *)(uVar36 + 0x40) = auVar42._0_8_;
    func_0x032809c4((undefined8 *)(uVar36 + 0x40),auVar42._0_8_);
    *(undefined8 *)(uVar36 + 0x50) = auVar42._8_8_;
    func_0x032809c4((undefined8 *)(uVar36 + 0x50),auVar42._8_8_);
    *(long *)(uVar36 + 0x30) = lVar21;
    func_0x032809c4((long *)(uVar36 + 0x30),lVar21);
    return uVar36;
  }
  auVar43 = func_0x03280cac();
  uVar36 = auVar43._0_8_;
  *(undefined8 *)((long)ppcVar14 + -0x60) = 0x3d60878;
  *(ulong *)((long)ppcVar14 + -0x58) = uVar24;
  *(undefined8 *)((long)ppcVar14 + -0x50) = 0;
  *(undefined1 (*) [16])((long)ppcVar14 + -0x48) = auVar42;
  *(long *)((long)ppcVar14 + -0x38) = lVar21;
  plVar17 = *(long **)(lVar31 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar31);
    plVar17 = *(long **)(lVar31 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar24 = func_0x03280ca0();
  puVar18 = *(undefined8 **)(*(long *)(lVar31 + 0x38) + 8);
  (*(code *)*puVar18)(uVar24,0xfffffffe);
  if (uVar24 != 0) {
    func_0x02f17738(uVar24,*(long *)(**(long **)(lVar31 + 0x38) + 0x80) + 0xc0,uVar36);
    func_0x02f17738(uVar24,*(long *)(**(long **)(lVar31 + 0x38) + 0x80) + 0x100,auVar43._8_8_);
    func_0x02f17738(uVar24,*(long *)(**(long **)(lVar31 + 0x38) + 0x80) + 0x80,uVar22);
    return uVar24;
  }
  auVar42 = func_0x03280cac();
  lVar21 = auVar42._8_8_;
  plVar17 = auVar42._0_8_;
  *(undefined8 *)((long)ppcVar14 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)ppcVar14 + -0x88) = 0;
  *(undefined1 (*) [16])((long)ppcVar14 + -0x80) = auVar43;
  *(long *)((long)ppcVar14 + -0x70) = lVar31;
  *(undefined8 *)((long)ppcVar14 + -0x68) = uVar22;
  puVar28 = puVar18;
  if (puVar18[7] == 0) {
    func_0x03256878(puVar18);
  }
  puVar27 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar27 = PTR_DAT_077799b8, lVar21 == 0)) {
    uVar22 = func_0x03280a2c(puVar27);
    uVar22 = func_0x05ac7464(uVar22,0);
    func_0x03280b7c(uVar22,puVar18);
LAB_03d60c04:
    func_0x03281048(plVar17);
    lVar31 = 0;
  }
  else {
    lVar31 = *(long *)(puVar18[7] + 0x10);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c();
    }
    lVar32 = *plVar17;
    bVar1 = *(byte *)(lVar32 + 0x130);
    if ((*(byte *)(lVar31 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar32 + 200) + (ulong)*(byte *)(lVar31 + 0x130) * 8 + -8) == lVar31)) {
      lVar31 = *(long *)(puVar18[7] + 0x10);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
        lVar32 = *plVar17;
        bVar1 = *(byte *)(lVar32 + 0x130);
      }
      if ((*(byte *)(lVar31 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar32 + 200) + (ulong)*(byte *)(lVar31 + 0x130) * 8 + -8) == lVar31))
      {
        lVar31 = *(long *)(puVar18[7] + 0x10);
        if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
          lVar31 = func_0x0325681c(lVar31);
          lVar32 = *plVar17;
          bVar1 = *(byte *)(lVar32 + 0x130);
        }
        if ((*(byte *)(lVar31 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar32 + 200) + (ulong)*(byte *)(lVar31 + 0x130) * 8 + -8) == lVar31
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar24 = (**(code **)(lVar32 + 0x228))(plVar17,lVar21,*(undefined8 *)(lVar32 + 0x230));
          return uVar24;
        }
      }
      goto LAB_03d60c04;
    }
    lVar31 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c(lVar31);
    }
    lVar31 = func_0x03280b90(plVar17,lVar31);
    if (lVar31 == 0) {
      lVar31 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar31 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar31 + 0x130) * 8 + -8) != lVar31
         )) {
        if ((*(byte *)(*(long *)(puVar18[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar24 = func_0x03280ca0();
        func_0x04b68fa4(uVar24,plVar17,lVar21,*(undefined8 *)(puVar18[7] + 0x58));
        return uVar24;
      }
      if ((*(byte *)(*(long *)(puVar18[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar36 = func_0x03280ca0();
      lVar31 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
      }
      if ((*(byte *)(lVar31 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar31 + 0x130) * 8 + -8) == lVar31
         )) {
        func_0x04b713b0(uVar36,plVar17,lVar21,*(undefined8 *)(puVar18[7] + 0x48));
        return uVar36;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar18[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar36 = func_0x03280ca0();
    lVar31 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c(lVar31);
    }
    lVar32 = func_0x03280b90(plVar17,lVar31);
    if (lVar32 != 0) {
      func_0x04b66610(uVar36,lVar32,lVar21,*(undefined8 *)(puVar18[7] + 0x30));
      return uVar36;
    }
  }
  auVar43 = func_0x03281048(plVar17,lVar31);
  lVar21 = auVar43._8_8_;
  plVar17 = auVar43._0_8_;
  *(undefined8 *)((long)ppcVar14 + -0xc0) = 0x3d60c18;
  *(long *)((long)ppcVar14 + -0xb8) = lVar31;
  *(ulong *)((long)ppcVar14 + -0xb0) = uVar36;
  *(undefined8 **)((long)ppcVar14 + -0xa8) = puVar18;
  *(undefined1 (*) [16])((long)ppcVar14 + -0xa0) = auVar42;
  if (puVar28[7] == 0) {
    func_0x03256878(puVar28);
  }
  puVar27 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar27 = PTR_DAT_077799b8, lVar21 == 0)) {
    uVar22 = func_0x03280a2c(puVar27);
    uVar22 = func_0x05ac7464(uVar22,0);
    func_0x03280b7c(uVar22,puVar28);
  }
  else {
    lVar32 = *(long *)(puVar28[7] + 0x10);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c();
    }
    lVar29 = *plVar17;
    bVar1 = *(byte *)(lVar29 + 0x130);
    if ((bVar1 < *(byte *)(lVar32 + 0x130)) ||
       (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar32 + 0x130) * 8 + -8) != lVar32)) {
      lVar32 = *(long *)(puVar28[7] + 0x20);
      if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = func_0x0325681c(lVar32);
      }
      lVar32 = func_0x03280b90(plVar17,lVar32);
      if (lVar32 != 0) {
        if ((*(byte *)(*(long *)(puVar28[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar24 = func_0x03280ca0();
        lVar31 = *(long *)(puVar28[7] + 0x20);
        if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
          lVar31 = func_0x0325681c(lVar31);
        }
        lVar32 = func_0x03280b90(plVar17,lVar31);
        if (lVar32 != 0) {
          func_0x04b667e0(uVar24,lVar32,lVar21,*(undefined8 *)(puVar28[7] + 0x30));
          return uVar24;
        }
        goto LAB_03d60ee0;
      }
      lVar32 = *(long *)(puVar28[7] + 0x38);
      if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar32 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar32 + 0x130) * 8 + -8) != lVar32
         )) {
        if ((*(byte *)(*(long *)(puVar28[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar24 = func_0x03280ca0();
        func_0x04b693d0(uVar24,plVar17,lVar21,*(undefined8 *)(puVar28[7] + 0x58));
        return uVar24;
      }
      if ((*(byte *)(*(long *)(puVar28[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar24 = func_0x03280ca0();
      lVar32 = *(long *)(puVar28[7] + 0x38);
      if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = func_0x0325681c(lVar32);
      }
      if ((*(byte *)(lVar32 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar32 + 0x130) * 8 + -8) == lVar32
         )) {
        func_0x04b715c8(uVar24,plVar17,lVar21,*(undefined8 *)(puVar28[7] + 0x48));
        return uVar24;
      }
    }
    else {
      lVar32 = *(long *)(puVar28[7] + 0x10);
      if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = func_0x0325681c(lVar32);
        lVar29 = *plVar17;
        bVar1 = *(byte *)(lVar29 + 0x130);
      }
      if ((*(byte *)(lVar32 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar32 + 0x130) * 8 + -8) == lVar32))
      {
        lVar32 = *(long *)(puVar28[7] + 0x10);
        if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = func_0x0325681c(lVar32);
          lVar29 = *plVar17;
          bVar1 = *(byte *)(lVar29 + 0x130);
        }
        if ((*(byte *)(lVar32 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar32 + 0x130) * 8 + -8) == lVar32
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar24 = (**(code **)(lVar29 + 0x228))(plVar17,lVar21,*(undefined8 *)(lVar29 + 0x230));
          return uVar24;
        }
      }
    }
  }
  func_0x03281048(plVar17);
LAB_03d60ee0:
  lVar21 = func_0x03281048(plVar17,lVar31);
  *(undefined8 *)((long)ppcVar14 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)ppcVar14 + -0xd0) = auVar43;
  lVar31 = *(long *)(lVar21 + 0x20);
  if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
    lVar31 = func_0x0325681c();
  }
  lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
  if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
    lVar31 = func_0x0325681c();
  }
  uVar24 = **(ulong **)(lVar31 + 0xb8);
  func_0x03280ab0();
  if (uVar24 == 0) {
    lVar31 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c();
    }
    uVar24 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar31 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar31 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c();
    }
    lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c();
    }
    **(ulong **)(lVar31 + 0xb8) = uVar24;
    lVar21 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar21 + 0xb8),uVar24);
  }
  return uVar24;
LAB_05ac8008:
  lVar21 = 0;
  do {
    if (plVar17 != (long *)0x0) {
      lVar31 = *plVar17;
      uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar33 != 0) {
        piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *unaff_x24) {
            puVar18 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac805c;
          }
          uVar33 = uVar33 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar33 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x24,0);
LAB_05ac805c:
      (*(code *)*puVar18)(plVar17,puVar18[1]);
    }
    if (lVar21 == 0) {
      if ((int)uVar36 != 0) {
        return uVar24;
      }
    }
    else {
LAB_05ac80a0:
      func_0x03280ca4(lVar21);
    }
    plVar17 = (long *)func_0x05ac75f4();
LAB_05ac80ac:
    uVar22 = func_0x03280a2c(PTR_DAT_077a5838);
    auVar44 = func_0x03280b7c(plVar17,uVar22);
    uVar22 = auVar44._0_8_;
    uVar24 = 0;
    uVar36 = (ulong)(plVar17 != (long *)0x0);
    if (auVar44._8_4_ != 1) break;
    plVar19 = (long *)func_0x072ce910(uVar22);
    lVar21 = *plVar19;
    func_0x072ce920();
  } while( true );
  lVar21 = 0;
  if (plVar17 != (long *)0x0) {
    lVar31 = *plVar17;
    uVar24 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar24 != 0) {
      piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *unaff_x24) {
          puVar18 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac815c;
        }
        uVar24 = uVar24 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar24 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x24,0);
LAB_05ac815c:
    (*(code *)*puVar18)(plVar17,puVar18[1]);
  }
  func_0x03365958(uVar22);
  func_0x03280ca4(0);
  plVar19 = (long *)func_0x02f09514();
  pcStack_e0 = (code *)0x5ac8180;
  lStack_b8 = 0;
  lStack_b0 = 0;
  pcStack_d0 = (code *)unaff_x24;
  uStack_c8 = uVar36;
  uStack_c0 = uVar22;
  plStack_a8 = plVar17;
  if ((bRam0000000007e1fbe4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077617f0);
    func_0x03280a18(PTR_DAT_077617f8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e1fbe4 = 1;
  }
  if (plVar19 == (long *)0x0) {
    func_0x03280a2c(PTR_DAT_07774b08);
    plVar17 = (long *)func_0x05ac7464();
    goto LAB_05ac83d4;
  }
  lVar31 = *plVar19;
  uVar24 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar24 != 0) {
    piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077617f0) {
        puVar18 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
        goto LAB_05ac8230;
      }
      uVar24 = uVar24 - 1;
      piVar34 = piVar34 + 4;
    } while (uVar24 != 0);
  }
  puVar18 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_077617f0,0);
LAB_05ac8230:
  unaff_x24 = (long *)PTR_DAT_0774e8c8;
  plVar17 = (long *)(*(code *)*puVar18)(plVar19,puVar18[1]);
  puVar37 = PTR_DAT_077617f8;
  puVar27 = PTR_DAT_0774e8e0;
  if (plVar17 == (long *)0x0) {
    func_0x03280cac();
    goto LAB_05ac83c8;
  }
  uVar24 = 0;
  uVar36 = 0;
  do {
    lVar21 = *plVar17;
    uVar33 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar33 != 0) {
      piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *(long *)puVar27) {
          puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac82b0;
        }
        uVar33 = uVar33 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar33 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar27,0);
LAB_05ac82b0:
    uVar33 = (*(code *)*puVar18)(plVar17,puVar18[1]);
    if ((uVar33 & 1) == 0) break;
    lVar21 = *plVar17;
    uVar33 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar33 != 0) {
      piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *(long *)puVar37) {
          puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac830c;
        }
        uVar33 = uVar33 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar33 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar37,0);
LAB_05ac830c:
    uVar16 = (*(code *)*puVar18)(plVar17,puVar18[1]);
    uVar2 = uVar16;
    if ((int)uVar16 <= (int)(uint)uVar24) {
      uVar2 = (uint)uVar24;
    }
    if ((int)uVar36 == 0) {
      uVar2 = uVar16;
    }
    uVar24 = (ulong)uVar2;
    uVar36 = 1;
  } while( true );
  lVar21 = 0;
  do {
    if (plVar17 != (long *)0x0) {
      lVar31 = *plVar17;
      uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar33 != 0) {
        piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *unaff_x24) {
            puVar18 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac8384;
          }
          uVar33 = uVar33 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar33 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x24,0);
LAB_05ac8384:
      (*(code *)*puVar18)(plVar17,puVar18[1]);
    }
    if (lVar21 == 0) {
      if ((int)uVar36 != 0) {
        return uVar24;
      }
    }
    else {
LAB_05ac83c8:
      func_0x03280ca4(lVar21);
    }
    plVar17 = (long *)func_0x05ac75f4();
LAB_05ac83d4:
    uVar22 = func_0x03280a2c(PTR_DAT_077a5840);
    auVar44 = func_0x03280b7c(plVar17,uVar22);
    plVar19 = auVar44._0_8_;
    uVar24 = 0;
    uVar36 = (ulong)(plVar17 != (long *)0x0);
    if (auVar44._8_4_ != 1) break;
    plVar19 = (long *)func_0x072ce910(plVar19);
    lVar21 = *plVar19;
    func_0x072ce920();
  } while( true );
  if (plVar17 != (long *)0x0) {
    lVar21 = *plVar17;
    uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar24 != 0) {
      piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *unaff_x24) {
          puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac8484;
        }
        uVar24 = uVar24 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar24 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x24,0);
LAB_05ac8484:
    (*(code *)*puVar18)(plVar17,puVar18[1]);
  }
  func_0x03365958(plVar19);
  func_0x03280ca4(0);
  plVar20 = (long *)func_0x02f09514();
  auStack_130._0_8_ = 0;
  puStack_120 = (undefined *)0x5ac84a8;
  lStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  plStack_110 = unaff_x24;
  uStack_108 = uVar36;
  pcStack_100 = (code *)plVar19;
  plStack_e8 = plVar17;
  if ((bRam0000000007e1fbe5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077a5820);
    func_0x03280a18(PTR_DAT_077a5828);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e1fbe5 = 1;
  }
  if (plVar20 == (long *)0x0) {
LAB_05ac8710:
    func_0x03280a2c(PTR_DAT_07774b08);
    plVar17 = (long *)func_0x05ac7464();
    goto LAB_05ac8730;
  }
  lVar21 = *plVar20;
  uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar24 != 0) {
    piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077a5820) {
        puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
        goto LAB_05ac855c;
      }
      uVar24 = uVar24 - 1;
      piVar34 = piVar34 + 4;
    } while (uVar24 != 0);
  }
  puVar18 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_077a5820,0);
LAB_05ac855c:
  puVar37 = PTR_DAT_077a5828;
  puVar27 = PTR_DAT_0774e8e0;
  plVar19 = (long *)PTR_DAT_0774e8c8;
  plVar17 = (long *)(*(code *)*puVar18)(plVar20,puVar18[1]);
  bVar11 = false;
  fVar40 = 0.0;
  do {
    fVar39 = fVar40;
    do {
      bVar3 = bVar11;
      if (plVar17 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_05ac8710;
      }
      lVar21 = *plVar17;
      uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar24 != 0) {
        piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)puVar27) {
            puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac85f0;
          }
          uVar24 = uVar24 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar24 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar27,0);
LAB_05ac85f0:
      uVar24 = (*(code *)*puVar18)(plVar17,puVar18[1]);
      if ((uVar24 & 1) == 0) {
        lVar21 = 0;
        iVar15 = 9;
        goto joined_r0x05ac8680;
      }
      lVar21 = *plVar17;
      uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar24 != 0) {
        piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)puVar37) {
            puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac864c;
          }
          uVar24 = uVar24 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar24 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar37,0);
LAB_05ac864c:
      fVar40 = (float)(*(code *)*puVar18)(plVar17,puVar18[1]);
      bVar11 = true;
    } while (((fVar40 <= fVar39) && ((ulong)ABS((double)fVar39) < 0x7ff0000000000001)) && (bVar3));
  } while( true );
joined_r0x05ac8680:
  if (plVar17 != (long *)0x0) {
    lVar31 = *plVar17;
    uVar24 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar24 != 0) {
      piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *plVar19) {
          puVar18 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac86d0;
        }
        uVar24 = uVar24 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar24 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar17,*plVar19,0);
LAB_05ac86d0:
    uVar24 = (*(code *)*puVar18)(plVar17,puVar18[1]);
  }
  if (lVar21 == 0) {
    if (((iVar15 != 9) && (iVar15 != 0)) || (bVar3)) {
      return uVar24;
    }
  }
  else {
    func_0x03280ca4(lVar21);
  }
  plVar17 = (long *)func_0x05ac75f4();
LAB_05ac8730:
  uVar22 = func_0x03280a2c(PTR_DAT_077a5848);
  auVar44 = func_0x03280b7c(plVar17,uVar22);
  auStack_130._8_8_ = auVar44._0_8_;
  bVar3 = false;
  if (auVar44._8_4_ != 1) goto LAB_05ac878c;
  plVar20 = (long *)func_0x072ce910();
  lVar21 = *plVar20;
  uVar24 = func_0x072ce920();
  iVar15 = 0;
  goto joined_r0x05ac8680;
LAB_05ac878c:
  if (plVar17 != (long *)0x0) {
    lVar21 = *plVar17;
    uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar24 != 0) {
      piVar34 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *plVar19) {
          puVar18 = (undefined8 *)(lVar21 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac87dc;
        }
        uVar24 = uVar24 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar24 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar17,*plVar19,0);
LAB_05ac87dc:
    (*(code *)*puVar18)(plVar17,puVar18[1]);
  }
  func_0x03365958(auStack_130._8_8_);
  func_0x03280ca4(0);
  uVar24 = func_0x02f09514();
  return uVar24;
}

