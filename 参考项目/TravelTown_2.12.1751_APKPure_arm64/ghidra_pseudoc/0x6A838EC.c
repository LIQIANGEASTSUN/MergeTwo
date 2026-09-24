/* Ghidra 12.1.2 native pseudocode; RVA 0x6A838EC; Merger.MergeBoard.Logic.ToolSpawnHandler.GetMaxItemMergeValue; status ok */


/* WARNING: Possible PIC construction at 0x06b83c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b83cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b83c40) */
/* WARNING: Removing unreachable block (ram,0x06b83c48) */
/* WARNING: Removing unreachable block (ram,0x06b83cd8) */
/* WARNING: Removing unreachable block (ram,0x06b83c68) */
/* WARNING: Removing unreachable block (ram,0x06b83c90) */
/* WARNING: Removing unreachable block (ram,0x06b83ca0) */
/* WARNING: Removing unreachable block (ram,0x06b83cb0) */
/* WARNING: Removing unreachable block (ram,0x06b83cb4) */

ulong Merger_MergeBoard_Logic_ToolSpawnHandler__GetMaxItemMergeValue
                (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 *puVar14;
  int iVar15;
  long *plVar17;
  uint uVar16;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  int extraout_w1;
  long lVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  int *piVar34;
  long unaff_x21;
  long lVar35;
  long *unaff_x22;
  ulong uVar36;
  undefined *unaff_x23;
  undefined8 uVar37;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  undefined8 auStack_240 [2];
  undefined1 auStack_230 [16];
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long *plStack_200;
  undefined1 auStack_1f8 [16];
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [16];
  long *plStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined *puStack_140;
  undefined *puStack_138;
  long *plStack_130;
  ulong uStack_128;
  long *plStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  
  if ((bRam0000000007e2a77d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e508);
    bRam0000000007e2a77d = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar31 = *param_2;
    uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar33 != 0) {
      piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_0777c248) {
          puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_06b8397c;
        }
        uVar33 = uVar33 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar33 != 0);
    }
    param_3 = 0;
    puVar20 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b8397c:
    lVar31 = (*(code *)*puVar20)(param_2,puVar20[1]);
    if (lVar31 != 0) {
      return (ulong)(uint)(1 << (ulong)(*(int *)(lVar31 + 0x18) - 1U & 0x1f));
    }
  }
  auVar42 = func_0x03280cac();
  puVar26 = PTR_DAT_07831b80;
  uVar23 = auVar42._8_8_;
  plVar17 = auVar42._0_8_;
  uVar21 = param_3;
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
  lVar31 = func_0x03280ca0(*(undefined8 *)puVar26);
  func_0x06b84e28(lVar31,0);
  puVar10 = PTR_DAT_07831ba0;
  puVar9 = PTR_DAT_07831b98;
  puVar8 = PTR_DAT_07785d18;
  puVar7 = PTR_DAT_07785d10;
  puVar6 = PTR_DAT_07785d08;
  puVar5 = PTR_DAT_0776e5a8;
  puVar38 = PTR_DAT_0776e590;
  plVar18 = unaff_x24;
  if (lVar31 != 0) {
    *(undefined8 *)(lVar31 + 0x10) = uVar23;
    func_0x032809c4((undefined8 *)(lVar31 + 0x10),uVar23);
    *(long *)(lVar31 + 0x18) = (long)plVar17;
    func_0x032809c4((long *)(lVar31 + 0x18),plVar17);
    uVar21 = func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x05355fbc(uVar21,lVar31,*(undefined8 *)puVar9,0);
    uVar22 = func_0x03d872a8(param_3,uVar21,*(undefined8 *)puVar38);
    uVar23 = func_0x03280ca0(*(undefined8 *)puVar8);
    param_4 = 0;
    func_0x05356664(uVar23,lVar31,*(undefined8 *)puVar10);
    uVar21 = *(undefined8 *)puVar6;
    uVar22 = func_0x03d504ac(uVar22,uVar23);
    param_3 = func_0x03d5b7c8(uVar22,*(undefined8 *)puVar7);
    uVar33 = func_0x03ce7ea0(param_3,*(undefined8 *)PTR_DAT_07831b88);
    if ((uVar33 & 1) != 0) {
      return 0;
    }
    uVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a6e80);
    puVar26 = puVar7;
    plVar18 = (long *)puVar5;
    unaff_x25 = puVar9;
    unaff_x26 = puVar38;
    if (plVar17 != (long *)0x0) {
      func_0x05353e8c(uVar22,plVar17,*(undefined8 *)(*plVar17 + 0x280),0);
      lVar31 = *(long *)PTR_DAT_07831b90;
      lVar30 = *(long *)(lVar31 + 0x38);
      if (lVar30 == 0) {
        func_0x03256878(lVar31);
        lVar30 = *(long *)(lVar31 + 0x38);
      }
      plVar17 = (long *)func_0x03d4ea18(param_3,uVar22,*(undefined8 *)(lVar30 + 0x10));
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
        uVar21 = func_0x03280a2c(PTR_DAT_077a5818);
        func_0x03280b7c(plVar17,uVar21);
      }
      else {
        lVar31 = *plVar17;
        uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077617f0) {
              puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac78d8;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077617f0,0);
LAB_05ac78d8:
        unaff_x22 = (long *)PTR_DAT_0774e8c8;
        plVar17 = (long *)(*(code *)*puVar20)(plVar17,puVar20[1]);
        puVar38 = PTR_DAT_077617f8;
        puVar26 = PTR_DAT_0774e8e0;
        if (plVar17 != (long *)0x0) {
          uVar2 = 0;
          do {
            uVar16 = uVar2;
            lVar31 = *plVar17;
            uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar33 != 0) {
              piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar26) {
                  puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac7958;
                }
                uVar33 = uVar33 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar33 != 0);
            }
            puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar26,0);
LAB_05ac7958:
            uVar33 = (*(code *)*puVar20)(plVar17,puVar20[1]);
            if ((uVar33 & 1) == 0) goto LAB_05ac79e0;
            lVar31 = *plVar17;
            uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar33 != 0) {
              piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar38) {
                  puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac79b4;
                }
                uVar33 = uVar33 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar33 != 0);
            }
            puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar38,0);
LAB_05ac79b4:
            iVar15 = (*(code *)*puVar20)(plVar17,puVar20[1]);
            uVar2 = iVar15 + uVar16;
          } while (!SCARRY4(uVar16,iVar15));
          uVar21 = func_0x03280cbc();
          func_0x03280b7c(uVar21,*(undefined8 *)PTR_DAT_077a5818);
LAB_05ac79e0:
          unaff_x21 = 0;
          goto LAB_05ac79e4;
        }
      }
      func_0x03280cac();
      puVar38 = unaff_x23;
      while( true ) {
        auVar44 = func_0x03280ca4(unaff_x21);
        uVar16 = 0;
        if (auVar44._8_4_ != 1) break;
        plVar18 = (long *)func_0x072ce910();
        unaff_x21 = *plVar18;
        func_0x072ce920();
LAB_05ac79e4:
        if (plVar17 != (long *)0x0) {
          lVar31 = *plVar17;
          uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar33 != 0) {
            piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar34 + -2) == *unaff_x22) {
                puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
                goto LAB_05ac7a34;
              }
              uVar33 = uVar33 - 1;
              piVar34 = piVar34 + 4;
            } while (uVar33 != 0);
          }
          puVar20 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x22,0);
LAB_05ac7a34:
          (*(code *)*puVar20)(plVar17,puVar20[1]);
        }
        if (unaff_x21 == 0) {
          return (ulong)uVar16;
        }
      }
      if (plVar17 != (long *)0x0) {
        lVar31 = *plVar17;
        uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *unaff_x22) {
              puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7b18;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar20 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x22,0);
LAB_05ac7b18:
        (*(code *)*puVar20)(plVar17,puVar20[1]);
      }
      func_0x03365958(auVar44._0_8_);
      func_0x03280ca4(0);
      plVar17 = (long *)func_0x02f09514();
      lVar31 = 0x7e1f000;
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
        uVar21 = func_0x03280a2c(PTR_DAT_077a5830);
        func_0x03280b7c(plVar17,uVar21);
      }
      else {
        lVar30 = *plVar17;
        uVar33 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077a5820) {
              puVar20 = (undefined8 *)(lVar30 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7bec;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077a5820,0);
LAB_05ac7bec:
        unaff_x22 = (long *)PTR_DAT_0774e8c8;
        plVar17 = (long *)(*(code *)*puVar20)(plVar17,puVar20[1]);
        puVar5 = PTR_DAT_077a5828;
        puVar26 = PTR_DAT_0774e8e0;
        if (plVar17 != (long *)0x0) {
          do {
            lVar31 = *plVar17;
            uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar33 != 0) {
              piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar26) {
                  puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac7c68;
                }
                uVar33 = uVar33 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar33 != 0);
            }
            puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar26,0);
LAB_05ac7c68:
            uVar33 = (*(code *)*puVar20)(plVar17,puVar20[1]);
            if ((uVar33 & 1) == 0) {
              lVar31 = 0;
              if (plVar17 == (long *)0x0) goto LAB_05ac7d40;
              goto LAB_05ac7ce8;
            }
            lVar31 = *plVar17;
            uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar33 != 0) {
              piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar5) {
                  puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac7cc4;
                }
                uVar33 = uVar33 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar33 != 0);
            }
            puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar5,0);
LAB_05ac7cc4:
            (*(code *)*puVar20)(plVar17,puVar20[1]);
          } while( true );
        }
      }
      func_0x03280cac();
      while( true ) {
        auVar44 = func_0x03280ca4(lVar31);
        lVar31 = auVar44._0_8_;
        if (auVar44._8_4_ != 1) break;
        plVar18 = (long *)func_0x072ce910(lVar31);
        lVar31 = *plVar18;
        uVar33 = func_0x072ce920();
        if (plVar17 != (long *)0x0) {
LAB_05ac7ce8:
          lVar30 = *plVar17;
          uVar33 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar33 != 0) {
            piVar34 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar34 + -2) == *unaff_x22) {
                puVar20 = (undefined8 *)(lVar30 + (long)*piVar34 * 0x10 + 0x138);
                goto LAB_05ac7d34;
              }
              uVar33 = uVar33 - 1;
              piVar34 = piVar34 + 4;
            } while (uVar33 != 0);
          }
          puVar20 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x22,0);
LAB_05ac7d34:
          uVar33 = (*(code *)*puVar20)(plVar17,puVar20[1]);
        }
LAB_05ac7d40:
        if (lVar31 == 0) {
          return uVar33;
        }
      }
      if (plVar17 != (long *)0x0) {
        lVar30 = *plVar17;
        uVar33 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *unaff_x22) {
              puVar20 = (undefined8 *)(lVar30 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7e34;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar20 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x22,0);
LAB_05ac7e34:
        (*(code *)*puVar20)(plVar17,puVar20[1]);
      }
      func_0x03365958(lVar31);
      func_0x03280ca4(0);
      plVar18 = (long *)func_0x02f09514();
      uStack_c0 = 0x5ac7e58;
      uStack_90 = 0;
      puStack_a8 = puVar38;
      plStack_a0 = unaff_x22;
      lStack_98 = lVar31;
      plStack_88 = plVar17;
      if ((bRam0000000007e1fbe3 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_077617f0);
        func_0x03280a18(PTR_DAT_077617f8);
        func_0x03280a18(PTR_DAT_0774e8e0);
        bRam0000000007e1fbe3 = 1;
      }
      if (plVar18 == (long *)0x0) {
        func_0x03280a2c(PTR_DAT_07774b08);
        plVar17 = (long *)func_0x05ac7464();
        goto LAB_05ac80ac;
      }
      lVar30 = *plVar18;
      uVar33 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar33 != 0) {
        piVar34 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077617f0) {
            puVar20 = (undefined8 *)(lVar30 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac7f08;
          }
          uVar33 = uVar33 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar33 != 0);
      }
      puVar20 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077617f0,0);
LAB_05ac7f08:
      unaff_x24 = (long *)PTR_DAT_0774e8c8;
      plVar17 = (long *)(*(code *)*puVar20)(plVar18,puVar20[1]);
      puVar38 = PTR_DAT_077617f8;
      puVar26 = PTR_DAT_0774e8e0;
      if (plVar17 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_05ac80a0;
      }
      uVar33 = 0;
      uVar36 = 0;
      do {
        lVar31 = *plVar17;
        uVar32 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar32 != 0) {
          piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)puVar26) {
              puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7f88;
            }
            uVar32 = uVar32 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar32 != 0);
        }
        puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar26,0);
LAB_05ac7f88:
        uVar32 = (*(code *)*puVar20)(plVar17,puVar20[1]);
        if ((uVar32 & 1) == 0) goto LAB_05ac8008;
        lVar31 = *plVar17;
        uVar32 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar32 != 0) {
          piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)puVar38) {
              puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7fe4;
            }
            uVar32 = uVar32 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar32 != 0);
        }
        puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar38,0);
LAB_05ac7fe4:
        uVar16 = (*(code *)*puVar20)(plVar17,puVar20[1]);
        uVar2 = uVar16;
        if ((int)(uint)uVar33 <= (int)uVar16) {
          uVar2 = (uint)uVar33;
        }
        if ((int)uVar36 == 0) {
          uVar2 = uVar16;
        }
        uVar33 = (ulong)uVar2;
        uVar36 = 1;
      } while( true );
    }
  }
  auVar42 = func_0x03280cac();
  uVar22 = auVar42._8_8_;
  lVar30 = auVar42._0_8_;
  uStack_b0 = 0x6b83be0;
  uVar37 = 0x7e2a000;
  puStack_a8 = puVar26;
  plStack_a0 = (long *)lVar31;
  lStack_98 = uVar23;
  uStack_90 = param_3;
  plStack_88 = plVar17;
  if ((bRam0000000007e2a775 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831ba8);
    func_0x03280a18(PTR_DAT_07810720);
    bRam0000000007e2a775 = 1;
  }
  puVar26 = PTR_DAT_07831bb0;
  uStack_b8 = 0;
  lStack_100 = 0x6b83c40;
  uStack_e8 = 0x7e2a000;
  puStack_f8 = unaff_x25;
  plStack_f0 = plVar18;
  uStack_e0 = uVar21;
  plStack_c8 = (long *)param_4;
  if ((bRam0000000007e2a776 & 1) == 0) {
    uStack_d8 = uVar22;
    lStack_d0 = lVar30;
    func_0x03280a18(PTR_DAT_077800c0);
    func_0x03280a18(PTR_DAT_077800c8);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_07831bb8);
    func_0x03280a18(PTR_DAT_07831bc0);
    func_0x03280a18(PTR_DAT_07831bb0);
    func_0x03280a18(PTR_DAT_077800d8);
    func_0x03280a18(PTR_DAT_077800e0);
    auVar42._8_8_ = uStack_d8;
    auVar42._0_8_ = lStack_d0;
    bRam0000000007e2a776 = 1;
  }
  uStack_d8 = auVar42._8_8_;
  lStack_d0 = auVar42._0_8_;
  uVar21 = func_0x06b8434c(lVar30,uVar21,uVar22);
  uVar23 = func_0x06b843fc(lVar30,uVar22);
  func_0x06b84674(lVar30,uVar21,uVar23);
  lVar31 = *(long *)puVar26;
  if (*(int *)(lVar31 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar31 = *(long *)puVar26;
  }
  lVar35 = *(long *)(*(long *)(lVar31 + 0xb8) + 8);
  if (lVar35 == 0) {
    if (*(int *)(lVar31 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar31 = *(long *)puVar26;
    }
    uVar23 = **(undefined8 **)(lVar31 + 0xb8);
    lVar35 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
    func_0x0535ab4c(lVar35,uVar23,*(undefined8 *)PTR_DAT_07831bb8,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar26 + 0xb8) + 8);
    *plVar17 = lVar35;
    func_0x032809c4(plVar17,lVar35);
    lVar31 = *(long *)puVar26;
  }
  if (*(int *)(lVar31 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar31 = *(long *)puVar26;
  }
  puVar38 = PTR_DAT_077800e0;
  plVar17 = *(long **)(*(long *)(lVar31 + 0xb8) + 0x10);
  if (plVar17 == (long *)0x0) {
    if (*(int *)(lVar31 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar31 = *(long *)puVar26;
    }
    uVar37 = **(undefined8 **)(lVar31 + 0xb8);
    plVar17 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
    func_0x0535ac00(plVar17,uVar37,*(undefined8 *)PTR_DAT_07831bc0,0);
    plVar18 = (long *)(*(long *)(*(long *)puVar26 + 0xb8) + 0x10);
    *plVar18 = (long)plVar17;
    func_0x032809c4(plVar18,plVar17);
  }
  plVar18 = plVar17;
  lVar31 = func_0x03f36e88(uVar21,lVar35,plVar17,*(undefined8 *)puVar38);
  plVar19 = *(long **)(lVar30 + 0x38);
  if (plVar19 != (long *)0x0) {
    lVar30 = *plVar19;
    uVar33 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar33 != 0) {
      piVar34 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar20 = (undefined8 *)(lVar30 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_06b83f10;
        }
        uVar33 = uVar33 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar33 != 0);
    }
    plVar18 = (long *)0x0;
    puVar20 = (undefined8 *)func_0x03256b10(plVar19);
LAB_06b83f10:
    plVar24 = (long *)(*(code *)*puVar20)(plVar19,puVar20[1]);
    lVar30 = 0;
    if (lVar31 != 0) {
      lVar35 = *(long *)PTR_DAT_077800d8;
      plStack_f0 = (long *)lStack_100;
      lVar30 = *(long *)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0xa0);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar30 = func_0x03280ca0(lVar30);
      func_0x04c1b8d8(lVar30,*(undefined8 *)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0xa8));
      if ((plVar24 != (long *)0x0) &&
         (iVar15 = (**(code **)(*plVar24 + 0x1a8))
                             (plVar24,*(undefined4 *)(lVar31 + 0x18),
                              *(undefined8 *)(*plVar24 + 0x1b0)), lVar30 != 0)) {
        *(int *)(lVar30 + 0x10) = iVar15 + 1;
        uVar21 = *(undefined8 *)(lVar31 + 0x10);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar23 = func_0x03280ca0();
        lVar31 = *(long *)(*(long *)(lVar35 + 0x20) + 0xc0);
        func_0x05355fbc(uVar23,lVar30,*(undefined8 *)(lVar31 + 0xb0),*(undefined8 *)(lVar31 + 0xc0))
        ;
        lVar31 = func_0x03d4294c(uVar21,uVar23,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 200));
        if (lVar31 != 0) {
          return (ulong)*(uint *)(lVar31 + 0x10);
        }
      }
      auVar42 = func_0x03280cac();
      plStack_110 = (long *)0x4a44b20;
      lVar31 = *(long *)(*(long *)(*(long *)(auVar42._8_8_ + 0x20) + 0xc0) + 8);
      lStack_100 = lVar30;
      puStack_f8 = (undefined *)lVar35;
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
      }
      uVar21 = func_0x03280ca0(lVar31);
      func_0x04143c38(uVar21,*(undefined8 *)
                              (*(long *)(*(long *)(auVar42._8_8_ + 0x20) + 0xc0) + 0xe0));
      puVar20 = (undefined8 *)(auVar42._0_8_ + 0x10);
      *puVar20 = uVar21;
      func_0x032809c4(puVar20,uVar21);
      return auVar42._0_8_;
    }
  }
  auVar43 = func_0x03280cac();
  puVar5 = PTR_DAT_07831bc8;
  uVar21 = auVar43._0_8_;
  auStack_150._0_8_ = 0x6b83f4c;
  puStack_138 = puVar38;
  plStack_130 = (long *)puVar26;
  plVar24 = plVar18;
  puStack_140 = unaff_x26;
  uStack_128 = uVar37;
  plStack_120 = plVar17;
  lStack_118 = lVar35;
  plStack_110 = plVar19;
  plStack_108 = (long *)lVar30;
  if ((bRam0000000007e2a778 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780080);
    func_0x03280a18(PTR_DAT_07780088);
    func_0x03280a18(PTR_DAT_07780090);
    func_0x03280a18(PTR_DAT_07831bd0);
    func_0x03280a18(PTR_DAT_07831bc8);
    bRam0000000007e2a778 = 1;
  }
  lVar31 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x06b84dbc(lVar31,0);
  puVar9 = PTR_DAT_07831bd0;
  puVar8 = PTR_DAT_07780090;
  puVar7 = PTR_DAT_07780088;
  puVar6 = PTR_DAT_07780080;
  if (lVar31 == 0) {
    auVar42 = func_0x03280cac();
    puVar6 = PTR_DAT_07831bb0;
    uStack_1a0 = 0x6b84068;
    puStack_188 = puVar38;
    puStack_180 = puVar26;
    puStack_178 = puVar5;
    uStack_190 = unaff_x26;
    auStack_170._0_8_ = lVar31;
    plStack_160 = plVar18;
    if ((bRam0000000007e2a777 & 1) == 0) {
      auStack_170._8_8_ = uVar21;
      uStack_158 = auVar43._8_8_;
      func_0x03280a18(PTR_DAT_077800e8);
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_077800d0);
      func_0x03280a18(PTR_DAT_0777e510);
      func_0x03280a18(PTR_DAT_07831bd8);
      func_0x03280a18(PTR_DAT_07831be0);
      func_0x03280a18(PTR_DAT_07831bb0);
      func_0x03280a18(PTR_DAT_077800f8);
      func_0x03280a18(PTR_DAT_07780100);
      auVar43._8_8_ = uStack_158;
      auVar43._0_8_ = auStack_170._8_8_;
      bRam0000000007e2a777 = 1;
    }
    uStack_158 = auVar43._8_8_;
    auStack_170._8_8_ = auVar43._0_8_;
    lVar31 = *(long *)puVar6;
    if (*(int *)(lVar31 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar43._8_8_ = uStack_158;
      auVar43._0_8_ = auStack_170._8_8_;
      lVar31 = *(long *)puVar6;
    }
    uStack_158 = auVar43._8_8_;
    auStack_170._8_8_ = auVar43._0_8_;
    lVar30 = *(long *)(*(long *)(lVar31 + 0xb8) + 0x18);
    if (lVar30 == 0) {
      if (*(int *)(lVar31 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar43._8_8_ = uStack_158;
        auVar43._0_8_ = auStack_170._8_8_;
        lVar31 = *(long *)puVar6;
      }
      uStack_158 = auVar43._8_8_;
      auStack_170._8_8_ = auVar43._0_8_;
      uVar21 = **(undefined8 **)(lVar31 + 0xb8);
      lVar30 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar30,uVar21,*(undefined8 *)PTR_DAT_07831bd8,0);
      plVar17 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
      *plVar17 = lVar30;
      func_0x032809c4(plVar17,lVar30);
      auVar43._8_8_ = uStack_158;
      auVar43._0_8_ = auStack_170._8_8_;
      lVar31 = *(long *)puVar6;
    }
    uStack_158 = auVar43._8_8_;
    auStack_170._8_8_ = auVar43._0_8_;
    if (*(int *)(lVar31 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar43._8_8_ = uStack_158;
      auVar43._0_8_ = auStack_170._8_8_;
      lVar31 = *(long *)puVar6;
    }
    puVar26 = PTR_DAT_07780100;
    uStack_158 = auVar43._8_8_;
    auStack_170._8_8_ = auVar43._0_8_;
    lVar35 = *(long *)(*(long *)(lVar31 + 0xb8) + 0x20);
    if (lVar35 == 0) {
      if (*(int *)(lVar31 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar43._8_8_ = uStack_158;
        auVar43._0_8_ = auStack_170._8_8_;
        lVar31 = *(long *)puVar6;
      }
      uStack_158 = auVar43._8_8_;
      auStack_170._8_8_ = auVar43._0_8_;
      uVar21 = **(undefined8 **)(lVar31 + 0xb8);
      lVar35 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar35,uVar21,*(undefined8 *)PTR_DAT_07831be0,0);
      plVar17 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
      *plVar17 = lVar35;
      func_0x032809c4(plVar17,lVar35);
      auVar43._8_8_ = uStack_158;
      auVar43._0_8_ = auStack_170._8_8_;
    }
    uStack_158 = auVar43._8_8_;
    auStack_170._8_8_ = auVar43._0_8_;
    lVar31 = func_0x03f372e4(auVar42._8_8_,lVar30,lVar35,*(undefined8 *)puVar26);
    plVar17 = *(long **)(auVar42._0_8_ + 0x38);
    if (plVar17 != (long *)0x0) {
      lVar30 = *plVar17;
      uVar33 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar33 != 0) {
        piVar34 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077800d0) {
            puVar20 = (undefined8 *)(lVar30 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_06b8427c;
          }
          uVar33 = uVar33 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar33 != 0);
      }
      puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077800d0,0);
LAB_06b8427c:
      uVar21 = (*(code *)*puVar20)(plVar17,puVar20[1]);
      if ((lVar31 != 0) &&
         (iVar15 = func_0x04a44654(lVar31,uVar21,*(undefined8 *)PTR_DAT_077800f8),
         plVar24 != (long *)0x0)) {
        lVar31 = *plVar24;
        uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_06b84300;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar20 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0777c248,0);
LAB_06b84300:
        puVar26 = (undefined *)(*(code *)*puVar20)(plVar24,puVar20[1]);
        uVar21 = auStack_170._8_8_;
        if (puVar26 != (undefined *)0x0) {
          uVar2 = iVar15 - 1;
          uVar23 = *(undefined8 *)PTR_DAT_0777e510;
          auStack_170._0_8_ = uStack_1a0;
          if (*(uint *)(puVar26 + 0x18) <= uVar2) {
            func_0x057b8434(0);
          }
          lVar31 = *(long *)(puVar26 + 0x10);
          if (lVar31 == 0) {
            func_0x03280cac();
          }
          else if (uVar2 < *(uint *)(lVar31 + 0x18)) {
            return *(ulong *)(lVar31 + (long)(int)uVar2 * 8 + 0x20);
          }
          auVar44 = func_0x03280cb4();
          uVar16 = auVar44._8_4_;
          lVar31 = auVar44._0_8_;
          uStack_190 = (undefined *)0x41441f0;
          puStack_188 = (undefined *)uVar21;
          puStack_180 = puVar26;
          puStack_178 = (undefined *)(ulong)uVar2;
          if (*(uint *)(lVar31 + 0x18) <= uVar16) {
            func_0x057b8434(0);
          }
          lVar30 = *(long *)(lVar31 + 0x10);
          if (lVar30 == 0) {
            func_0x03280cac();
          }
          else if (uVar16 < *(uint *)(lVar30 + 0x18)) {
            puVar20 = (undefined8 *)(lVar30 + (long)(int)uVar16 * 8 + 0x20);
            *puVar20 = uVar23;
            uVar33 = func_0x032809c4(puVar20,uVar23);
            *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
            return uVar33;
          }
          auVar42 = func_0x03280cb4();
          uStack_1a0 = 0x414425c;
          lVar30 = *(long *)(auVar42._8_8_ + 0x20);
          auStack_198 = (undefined1  [8])lVar31;
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            lVar30 = func_0x0325681c(lVar30);
          }
          lVar31 = *(long *)(*(long *)(lVar30 + 0xc0) + 0x48);
          if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
            lVar31 = func_0x0325681c(lVar31);
          }
          lVar31 = func_0x03280b90(auVar42._0_8_,lVar31);
          if (lVar31 == 0) {
            uVar33 = (ulong)(auVar42._0_8_ == 0);
          }
          else {
            uVar33 = 1;
          }
          return uVar33;
        }
      }
    }
    func_0x03280cac();
    return (ulong)(uint)(1 << (ulong)(extraout_w1 - 1U & 0x1f));
  }
  *(undefined8 *)(lVar31 + 0x10) = uVar21;
  func_0x032809c4((undefined8 *)(lVar31 + 0x10),uVar21);
  *(long *)(lVar31 + 0x18) = (long)plVar18;
  func_0x032809c4((long *)(lVar31 + 0x18),plVar18);
  uVar21 = func_0x03280ca0(*(undefined8 *)puVar8);
  lVar29 = 0;
  func_0x0535acb4(uVar21,lVar31,*(undefined8 *)puVar9);
  lVar28 = *(long *)puVar7;
  lVar30 = func_0x03d87e68(auVar43._8_8_,uVar21);
  lVar31 = lStack_118;
  plVar17 = plStack_120;
  uVar33 = uStack_128;
  lVar35 = *(long *)puVar6;
  plStack_120 = (long *)auStack_150._0_8_;
  if (*(long *)(lVar35 + 0x38) == 0) {
    func_0x03256878(lVar35);
  }
  if (lVar30 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar35 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar33 = func_0x03280ca0();
    func_0x041e8ba0(uVar33,lVar30,*(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x10));
    return uVar33;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar42 = func_0x03280b7c(uVar21,lVar35);
  lVar25 = auVar42._8_8_;
  puStack_140 = (undefined *)0x3d602b8;
  plStack_130 = (long *)lVar30;
  uStack_128 = lVar35;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar42._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar33 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 0x10))(uVar33,auVar42._0_8_);
    return uVar33;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar43 = func_0x03280b7c(uVar21,lVar25);
  lVar30 = auVar43._8_8_;
  plStack_160 = (long *)0x3d60338;
  auStack_150 = auVar42;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03256878(lVar30);
  }
  if (auVar43._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar33 = func_0x03280ca0();
    func_0x0420cec8(uVar33,auVar43._0_8_,*(undefined8 *)(*(long *)(lVar30 + 0x38) + 0x10));
    return uVar33;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar42 = func_0x03280b7c(uVar21,lVar30);
  puStack_180 = (undefined *)0x3d603b4;
  puStack_178 = (undefined *)lVar31;
  lVar31 = lVar28;
  auStack_170 = auVar43;
  if (*(long *)(lVar28 + 0x38) == 0) {
    func_0x03256878(lVar28);
  }
  auVar41._8_8_ = puStack_178;
  auVar41._0_8_ = plVar17;
  puVar26 = PTR_DAT_07779d10;
  if ((auVar42._0_8_ == 0) || (puVar26 = PTR_DAT_07779d18, auVar42._8_8_ == 0)) {
    uVar21 = func_0x03280a2c(puVar26);
    uVar21 = func_0x05ac7464(uVar21,0);
    auVar43 = func_0x03280b7c(uVar21,lVar28);
    uStack_1a0 = 0x3d60428;
    lVar30 = lVar31;
    puStack_188 = (undefined *)lVar28;
    if (*(long *)(lVar31 + 0x38) == 0) {
      _auStack_198 = auVar42;
      func_0x03256878(lVar31);
      auVar42 = _auStack_198;
    }
    puVar26 = PTR_DAT_07779d10;
    _auStack_198 = auVar42;
    if ((auVar43._0_8_ != 0) && (puVar26 = PTR_DAT_07779d18, auVar43._8_8_ != 0)) {
      lVar31 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
      lVar30 = 0;
      ppuVar13 = &puStack_180;
      puVar26 = puStack_188;
      uVar21 = uStack_1a0;
      goto LAB_03d60730;
    }
    uVar21 = func_0x03280a2c(puVar26);
    uVar21 = func_0x05ac7464(uVar21,0);
    auVar42 = func_0x03280b7c(uVar21,lVar31);
    uStack_1c0 = 0x3d6049c;
    lVar35 = lVar30;
    lStack_1a8 = lVar31;
    auStack_1b8 = auVar43;
    if (*(long *)(lVar30 + 0x38) == 0) {
      func_0x03256878(lVar30);
    }
    puVar26 = PTR_DAT_07779d10;
    if ((auVar42._0_8_ == 0) || (puVar26 = PTR_DAT_07779d18, auVar42._8_8_ == 0)) {
      uVar21 = func_0x03280a2c(puVar26);
      uVar21 = func_0x05ac7464(uVar21,0);
      auStack_1f8 = func_0x03280b7c(uVar21,lVar30);
      uStack_1e0 = 0x3d60510;
      lVar31 = lVar35;
      lStack_1c8 = lVar30;
      auStack_1d8 = auVar42;
      if (*(long *)(lVar35 + 0x38) == 0) {
        func_0x03256878(lVar35);
      }
      puVar26 = PTR_DAT_07779d10;
      if ((auStack_1f8._0_8_ != 0) && (puVar26 = PTR_DAT_07779d18, auStack_1f8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar33 = (*(code *)**(undefined8 **)(*(long *)(lVar35 + 0x38) + 8))
                           (auStack_1f8._0_8_,auStack_1f8._8_8_,0);
        return uVar33;
      }
      uVar21 = func_0x03280a2c(puVar26);
      uVar21 = func_0x05ac7464(uVar21,0);
      auVar42 = func_0x03280b7c(uVar21,lVar35);
      uStack_210 = 0x3d60588;
      plStack_200 = plVar17;
      lVar30 = lVar31;
      lVar28 = lVar29;
      lStack_1e8 = lVar35;
      if (*(long *)(lVar29 + 0x38) == 0) {
        func_0x03256878(lVar29);
      }
      puVar26 = PTR_DAT_07779d10;
      if ((auVar42._0_8_ == 0) || (puVar26 = PTR_DAT_07779d18, auVar42._8_8_ == 0)) {
        uVar21 = func_0x03280a2c(puVar26);
        uVar21 = func_0x05ac7464(uVar21,0);
        auVar41 = func_0x03280b7c(uVar21,lVar29);
        auVar4._8_8_ = lVar28;
        auVar4._0_8_ = lVar30;
        pplVar12 = (long **)auStack_240;
        auStack_240[0] = 0x3d60608;
        puVar26 = (undefined *)lVar30;
        lVar35 = lVar28;
        lStack_220 = lVar31;
        lStack_218 = lVar29;
        auStack_230 = auVar42;
        if (*(long *)(lVar28 + 0x38) == 0) {
          func_0x03256878(lVar28);
        }
        puVar38 = PTR_DAT_07779d10;
        if ((auVar41._0_8_ != 0) && (puVar38 = PTR_DAT_07779d18, auVar41._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar33 = (*(code *)**(undefined8 **)(*(long *)(lVar28 + 0x38) + 0x10))
                             (auVar41._0_8_,auVar41._8_8_,lVar30);
          return uVar33;
        }
        uVar21 = func_0x03280a2c(puVar38);
        uVar21 = func_0x05ac7464(uVar21,0);
        puVar38 = (undefined *)0x3d6068c;
        auVar42 = func_0x03280b7c(uVar21,lVar28);
        goto LAB_03d6068c;
      }
      lVar35 = *(long *)(*(long *)(lVar29 + 0x38) + 0x10);
      puVar14 = &uStack_1e0;
      lVar30 = lStack_1e8;
      plVar17 = plStack_200;
      uVar21 = uStack_210;
      auVar43 = auStack_1f8;
    }
    else {
      lVar35 = *(long *)(*(long *)(lVar30 + 0x38) + 8);
      lVar31 = 0;
      puVar14 = &uStack_1a0;
      lVar30 = lStack_1a8;
      uVar21 = uStack_1c0;
      auVar43 = auStack_1b8;
    }
  }
  else {
    lVar35 = *(long *)(*(long *)(lVar28 + 0x38) + 8);
    puVar26 = (undefined *)0x0;
    pplVar12 = &plStack_160;
    puVar38 = puStack_180;
    auVar4 = auStack_170;
LAB_03d6068c:
    ppuVar13 = (undefined **)((long)pplVar12 + -0x30);
    *(undefined **)((long)pplVar12 + -0x30) = puVar38;
    *(undefined1 (*) [16])((long)pplVar12 + -0x20) = auVar41;
    *(undefined1 (*) [16])((long)pplVar12 + -0x10) = auVar4;
    plVar17 = *(long **)(lVar35 + 0x38);
    lVar31 = lVar35;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar35);
      plVar17 = *(long **)(lVar35 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar36 = func_0x03280ca0();
    lVar30 = *(long *)(*(long *)(lVar35 + 0x38) + 8);
    func_0x0531dbd0(uVar36,0xfffffffe);
    if (uVar36 != 0) {
      *(undefined8 *)(uVar36 + 0x38) = auVar42._0_8_;
      func_0x032809c4((undefined8 *)(uVar36 + 0x38),auVar42._0_8_);
      *(undefined8 *)(uVar36 + 0x48) = auVar42._8_8_;
      func_0x032809c4((undefined8 *)(uVar36 + 0x48),auVar42._8_8_);
      *(long *)(uVar36 + 0x28) = (long)puVar26;
      func_0x032809c4((long *)(uVar36 + 0x28),puVar26);
      return uVar36;
    }
    auVar43 = func_0x03280cac();
    plVar17 = (long *)0x0;
    uVar21 = 0x3d60730;
LAB_03d60730:
    puVar14 = (undefined8 *)((long)ppuVar13 + -0x30);
    *(undefined8 *)((long)ppuVar13 + -0x30) = uVar21;
    *(long **)((long)ppuVar13 + -0x20) = plVar17;
    *(undefined1 (*) [16])((long)ppuVar13 + -0x18) = auVar42;
    *(undefined **)((long)ppuVar13 + -8) = puVar26;
    plVar17 = *(long **)(lVar31 + 0x38);
    lVar35 = lVar31;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar31);
      plVar17 = *(long **)(lVar31 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar36 = func_0x03280ca0();
    lVar31 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
    func_0x0531e428(uVar36,0xfffffffe);
    if (uVar36 != 0) {
      *(undefined8 *)(uVar36 + 0x38) = auVar43._0_8_;
      func_0x032809c4((undefined8 *)(uVar36 + 0x38),auVar43._0_8_);
      *(undefined8 *)(uVar36 + 0x48) = auVar43._8_8_;
      func_0x032809c4((undefined8 *)(uVar36 + 0x48),auVar43._8_8_);
      *(long *)(uVar36 + 0x28) = lVar30;
      func_0x032809c4((long *)(uVar36 + 0x28),lVar30);
      return uVar36;
    }
    auVar42 = func_0x03280cac();
    plVar17 = (long *)0x0;
    uVar21 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar14 + -0x30) = uVar21;
  *(long **)((long)puVar14 + -0x20) = plVar17;
  *(undefined1 (*) [16])((long)puVar14 + -0x18) = auVar43;
  *(long *)((long)puVar14 + -8) = lVar30;
  plVar17 = *(long **)(lVar35 + 0x38);
  lVar30 = lVar35;
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar35);
    plVar17 = *(long **)(lVar35 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar36 = func_0x03280ca0();
  uVar21 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 8);
  func_0x0531ec78(uVar36,0xfffffffe);
  if (uVar36 != 0) {
    *(undefined8 *)(uVar36 + 0x40) = auVar42._0_8_;
    func_0x032809c4((undefined8 *)(uVar36 + 0x40),auVar42._0_8_);
    *(undefined8 *)(uVar36 + 0x50) = auVar42._8_8_;
    func_0x032809c4((undefined8 *)(uVar36 + 0x50),auVar42._8_8_);
    *(long *)(uVar36 + 0x30) = lVar31;
    func_0x032809c4((long *)(uVar36 + 0x30),lVar31);
    return uVar36;
  }
  auVar43 = func_0x03280cac();
  uVar36 = auVar43._0_8_;
  *(undefined8 *)((long)puVar14 + -0x60) = 0x3d60878;
  *(ulong *)((long)puVar14 + -0x58) = uVar33;
  *(undefined8 *)((long)puVar14 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar14 + -0x48) = auVar42;
  *(long *)((long)puVar14 + -0x38) = lVar31;
  plVar17 = *(long **)(lVar30 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar30);
    plVar17 = *(long **)(lVar30 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar33 = func_0x03280ca0();
  puVar20 = *(undefined8 **)(*(long *)(lVar30 + 0x38) + 8);
  (*(code *)*puVar20)(uVar33,0xfffffffe);
  if (uVar33 != 0) {
    func_0x02f17738(uVar33,*(long *)(**(long **)(lVar30 + 0x38) + 0x80) + 0xc0,uVar36);
    func_0x02f17738(uVar33,*(long *)(**(long **)(lVar30 + 0x38) + 0x80) + 0x100,auVar43._8_8_);
    func_0x02f17738(uVar33,*(long *)(**(long **)(lVar30 + 0x38) + 0x80) + 0x80,uVar21);
    return uVar33;
  }
  auVar42 = func_0x03280cac();
  lVar31 = auVar42._8_8_;
  plVar17 = auVar42._0_8_;
  *(undefined8 *)((long)puVar14 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar14 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar14 + -0x80) = auVar43;
  *(long *)((long)puVar14 + -0x70) = lVar30;
  *(undefined8 *)((long)puVar14 + -0x68) = uVar21;
  puVar27 = puVar20;
  if (puVar20[7] == 0) {
    func_0x03256878(puVar20);
  }
  puVar26 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar26 = PTR_DAT_077799b8, lVar31 == 0)) {
    uVar21 = func_0x03280a2c(puVar26);
    uVar21 = func_0x05ac7464(uVar21,0);
    func_0x03280b7c(uVar21,puVar20);
LAB_03d60c04:
    func_0x03281048(plVar17);
    lVar30 = 0;
  }
  else {
    lVar30 = *(long *)(puVar20[7] + 0x10);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    lVar35 = *plVar17;
    bVar1 = *(byte *)(lVar35 + 0x130);
    if ((*(byte *)(lVar30 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar35 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) == lVar30)) {
      lVar30 = *(long *)(puVar20[7] + 0x10);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
        lVar35 = *plVar17;
        bVar1 = *(byte *)(lVar35 + 0x130);
      }
      if ((*(byte *)(lVar30 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar35 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) == lVar30))
      {
        lVar30 = *(long *)(puVar20[7] + 0x10);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          lVar30 = func_0x0325681c(lVar30);
          lVar35 = *plVar17;
          bVar1 = *(byte *)(lVar35 + 0x130);
        }
        if ((*(byte *)(lVar30 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar35 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) == lVar30
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar33 = (**(code **)(lVar35 + 0x228))(plVar17,lVar31,*(undefined8 *)(lVar35 + 0x230));
          return uVar33;
        }
      }
      goto LAB_03d60c04;
    }
    lVar30 = *(long *)(puVar20[7] + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar30 = func_0x03280b90(plVar17,lVar30);
    if (lVar30 == 0) {
      lVar30 = *(long *)(puVar20[7] + 0x38);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar30 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) != lVar30
         )) {
        if ((*(byte *)(*(long *)(puVar20[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar33 = func_0x03280ca0();
        func_0x04b68fa4(uVar33,plVar17,lVar31,*(undefined8 *)(puVar20[7] + 0x58));
        return uVar33;
      }
      if ((*(byte *)(*(long *)(puVar20[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar36 = func_0x03280ca0();
      lVar30 = *(long *)(puVar20[7] + 0x38);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      if ((*(byte *)(lVar30 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) == lVar30
         )) {
        func_0x04b713b0(uVar36,plVar17,lVar31,*(undefined8 *)(puVar20[7] + 0x48));
        return uVar36;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar20[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar36 = func_0x03280ca0();
    lVar30 = *(long *)(puVar20[7] + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar35 = func_0x03280b90(plVar17,lVar30);
    if (lVar35 != 0) {
      func_0x04b66610(uVar36,lVar35,lVar31,*(undefined8 *)(puVar20[7] + 0x30));
      return uVar36;
    }
  }
  auVar43 = func_0x03281048(plVar17,lVar30);
  lVar31 = auVar43._8_8_;
  plVar17 = auVar43._0_8_;
  *(undefined8 *)((long)puVar14 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar14 + -0xb8) = lVar30;
  *(ulong *)((long)puVar14 + -0xb0) = uVar36;
  *(undefined8 **)((long)puVar14 + -0xa8) = puVar20;
  *(undefined1 (*) [16])((long)puVar14 + -0xa0) = auVar42;
  if (puVar27[7] == 0) {
    func_0x03256878(puVar27);
  }
  puVar26 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar26 = PTR_DAT_077799b8, lVar31 == 0)) {
    uVar21 = func_0x03280a2c(puVar26);
    uVar21 = func_0x05ac7464(uVar21,0);
    func_0x03280b7c(uVar21,puVar27);
  }
  else {
    lVar35 = *(long *)(puVar27[7] + 0x10);
    if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
      lVar35 = func_0x0325681c();
    }
    lVar28 = *plVar17;
    bVar1 = *(byte *)(lVar28 + 0x130);
    if ((bVar1 < *(byte *)(lVar35 + 0x130)) ||
       (*(long *)(*(long *)(lVar28 + 200) + (ulong)*(byte *)(lVar35 + 0x130) * 8 + -8) != lVar35)) {
      lVar35 = *(long *)(puVar27[7] + 0x20);
      if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
        lVar35 = func_0x0325681c(lVar35);
      }
      lVar35 = func_0x03280b90(plVar17,lVar35);
      if (lVar35 != 0) {
        if ((*(byte *)(*(long *)(puVar27[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar33 = func_0x03280ca0();
        lVar30 = *(long *)(puVar27[7] + 0x20);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          lVar30 = func_0x0325681c(lVar30);
        }
        lVar35 = func_0x03280b90(plVar17,lVar30);
        if (lVar35 != 0) {
          func_0x04b667e0(uVar33,lVar35,lVar31,*(undefined8 *)(puVar27[7] + 0x30));
          return uVar33;
        }
        goto LAB_03d60ee0;
      }
      lVar35 = *(long *)(puVar27[7] + 0x38);
      if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
        lVar35 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar35 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar35 + 0x130) * 8 + -8) != lVar35
         )) {
        if ((*(byte *)(*(long *)(puVar27[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar33 = func_0x03280ca0();
        func_0x04b693d0(uVar33,plVar17,lVar31,*(undefined8 *)(puVar27[7] + 0x58));
        return uVar33;
      }
      if ((*(byte *)(*(long *)(puVar27[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar33 = func_0x03280ca0();
      lVar35 = *(long *)(puVar27[7] + 0x38);
      if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
        lVar35 = func_0x0325681c(lVar35);
      }
      if ((*(byte *)(lVar35 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar35 + 0x130) * 8 + -8) == lVar35
         )) {
        func_0x04b715c8(uVar33,plVar17,lVar31,*(undefined8 *)(puVar27[7] + 0x48));
        return uVar33;
      }
    }
    else {
      lVar35 = *(long *)(puVar27[7] + 0x10);
      if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
        lVar35 = func_0x0325681c(lVar35);
        lVar28 = *plVar17;
        bVar1 = *(byte *)(lVar28 + 0x130);
      }
      if ((*(byte *)(lVar35 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar28 + 200) + (ulong)*(byte *)(lVar35 + 0x130) * 8 + -8) == lVar35))
      {
        lVar35 = *(long *)(puVar27[7] + 0x10);
        if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
          lVar35 = func_0x0325681c(lVar35);
          lVar28 = *plVar17;
          bVar1 = *(byte *)(lVar28 + 0x130);
        }
        if ((*(byte *)(lVar35 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar28 + 200) + (ulong)*(byte *)(lVar35 + 0x130) * 8 + -8) == lVar35
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar33 = (**(code **)(lVar28 + 0x228))(plVar17,lVar31,*(undefined8 *)(lVar28 + 0x230));
          return uVar33;
        }
      }
    }
  }
  func_0x03281048(plVar17);
LAB_03d60ee0:
  lVar31 = func_0x03281048(plVar17,lVar30);
  *(undefined8 *)((long)puVar14 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar14 + -0xd0) = auVar43;
  lVar30 = *(long *)(lVar31 + 0x20);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c();
  }
  lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 0x10);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c();
  }
  uVar33 = **(ulong **)(lVar30 + 0xb8);
  func_0x03280ab0();
  if (uVar33 == 0) {
    lVar30 = *(long *)(lVar31 + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    uVar33 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar30 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar30 = *(long *)(lVar31 + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 0x10);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    **(ulong **)(lVar30 + 0xb8) = uVar33;
    lVar31 = *(long *)(lVar31 + 0x20);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c();
    }
    lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar31 + 0xb8),uVar33);
  }
  return uVar33;
LAB_05ac8008:
  lVar31 = 0;
  do {
    if (plVar17 != (long *)0x0) {
      lVar30 = *plVar17;
      uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar32 != 0) {
        piVar34 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *unaff_x24) {
            puVar20 = (undefined8 *)(lVar30 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac805c;
          }
          uVar32 = uVar32 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar32 != 0);
      }
      puVar20 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x24,0);
LAB_05ac805c:
      (*(code *)*puVar20)(plVar17,puVar20[1]);
    }
    if (lVar31 == 0) {
      if ((int)uVar36 != 0) {
        return uVar33;
      }
    }
    else {
LAB_05ac80a0:
      func_0x03280ca4(lVar31);
    }
    plVar17 = (long *)func_0x05ac75f4();
LAB_05ac80ac:
    uVar21 = func_0x03280a2c(PTR_DAT_077a5838);
    auVar44 = func_0x03280b7c(plVar17,uVar21);
    uVar21 = auVar44._0_8_;
    uVar33 = 0;
    uVar36 = (ulong)(plVar17 != (long *)0x0);
    if (auVar44._8_4_ != 1) break;
    plVar18 = (long *)func_0x072ce910(uVar21);
    lVar31 = *plVar18;
    func_0x072ce920();
  } while( true );
  lVar31 = 0;
  if (plVar17 != (long *)0x0) {
    lVar30 = *plVar17;
    uVar33 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar33 != 0) {
      piVar34 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *unaff_x24) {
          puVar20 = (undefined8 *)(lVar30 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac815c;
        }
        uVar33 = uVar33 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar33 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x24,0);
LAB_05ac815c:
    (*(code *)*puVar20)(plVar17,puVar20[1]);
  }
  func_0x03365958(uVar21);
  func_0x03280ca4(0);
  plVar18 = (long *)func_0x02f09514();
  lStack_100 = 0x5ac8180;
  uStack_d8 = 0;
  lStack_d0 = 0;
  plStack_f0 = unaff_x24;
  uStack_e8 = uVar36;
  uStack_e0 = uVar21;
  plStack_c8 = plVar17;
  if ((bRam0000000007e1fbe4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077617f0);
    func_0x03280a18(PTR_DAT_077617f8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e1fbe4 = 1;
  }
  if (plVar18 == (long *)0x0) {
    func_0x03280a2c(PTR_DAT_07774b08);
    plVar17 = (long *)func_0x05ac7464();
    goto LAB_05ac83d4;
  }
  lVar30 = *plVar18;
  uVar33 = (ulong)*(ushort *)(lVar30 + 0x12e);
  if (uVar33 != 0) {
    piVar34 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
    do {
      if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077617f0) {
        puVar20 = (undefined8 *)(lVar30 + (long)*piVar34 * 0x10 + 0x138);
        goto LAB_05ac8230;
      }
      uVar33 = uVar33 - 1;
      piVar34 = piVar34 + 4;
    } while (uVar33 != 0);
  }
  puVar20 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077617f0,0);
LAB_05ac8230:
  unaff_x24 = (long *)PTR_DAT_0774e8c8;
  plVar17 = (long *)(*(code *)*puVar20)(plVar18,puVar20[1]);
  puVar38 = PTR_DAT_077617f8;
  puVar26 = PTR_DAT_0774e8e0;
  if (plVar17 == (long *)0x0) {
    func_0x03280cac();
    goto LAB_05ac83c8;
  }
  uVar33 = 0;
  uVar36 = 0;
  do {
    lVar31 = *plVar17;
    uVar32 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar32 != 0) {
      piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *(long *)puVar26) {
          puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac82b0;
        }
        uVar32 = uVar32 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar32 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar26,0);
LAB_05ac82b0:
    uVar32 = (*(code *)*puVar20)(plVar17,puVar20[1]);
    if ((uVar32 & 1) == 0) break;
    lVar31 = *plVar17;
    uVar32 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar32 != 0) {
      piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *(long *)puVar38) {
          puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac830c;
        }
        uVar32 = uVar32 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar32 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar38,0);
LAB_05ac830c:
    uVar16 = (*(code *)*puVar20)(plVar17,puVar20[1]);
    uVar2 = uVar16;
    if ((int)uVar16 <= (int)(uint)uVar33) {
      uVar2 = (uint)uVar33;
    }
    if ((int)uVar36 == 0) {
      uVar2 = uVar16;
    }
    uVar33 = (ulong)uVar2;
    uVar36 = 1;
  } while( true );
  lVar31 = 0;
  do {
    if (plVar17 != (long *)0x0) {
      lVar30 = *plVar17;
      uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar32 != 0) {
        piVar34 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *unaff_x24) {
            puVar20 = (undefined8 *)(lVar30 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac8384;
          }
          uVar32 = uVar32 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar32 != 0);
      }
      puVar20 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x24,0);
LAB_05ac8384:
      (*(code *)*puVar20)(plVar17,puVar20[1]);
    }
    if (lVar31 == 0) {
      if ((int)uVar36 != 0) {
        return uVar33;
      }
    }
    else {
LAB_05ac83c8:
      func_0x03280ca4(lVar31);
    }
    plVar17 = (long *)func_0x05ac75f4();
LAB_05ac83d4:
    uVar21 = func_0x03280a2c(PTR_DAT_077a5840);
    auVar44 = func_0x03280b7c(plVar17,uVar21);
    plVar18 = auVar44._0_8_;
    uVar33 = 0;
    uVar36 = (ulong)(plVar17 != (long *)0x0);
    if (auVar44._8_4_ != 1) break;
    plVar18 = (long *)func_0x072ce910(plVar18);
    lVar31 = *plVar18;
    func_0x072ce920();
  } while( true );
  if (plVar17 != (long *)0x0) {
    lVar31 = *plVar17;
    uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar33 != 0) {
      piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *unaff_x24) {
          puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac8484;
        }
        uVar33 = uVar33 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar33 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar17,*unaff_x24,0);
LAB_05ac8484:
    (*(code *)*puVar20)(plVar17,puVar20[1]);
  }
  func_0x03365958(plVar18);
  func_0x03280ca4(0);
  plVar19 = (long *)func_0x02f09514();
  auStack_150._0_8_ = 0;
  puStack_140 = (undefined *)0x5ac84a8;
  lStack_118 = 0;
  plStack_110 = (long *)0x0;
  plStack_130 = unaff_x24;
  uStack_128 = uVar36;
  plStack_120 = plVar18;
  plStack_108 = plVar17;
  if ((bRam0000000007e1fbe5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077a5820);
    func_0x03280a18(PTR_DAT_077a5828);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e1fbe5 = 1;
  }
  if (plVar19 == (long *)0x0) {
LAB_05ac8710:
    func_0x03280a2c(PTR_DAT_07774b08);
    plVar17 = (long *)func_0x05ac7464();
    goto LAB_05ac8730;
  }
  lVar31 = *plVar19;
  uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar33 != 0) {
    piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077a5820) {
        puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
        goto LAB_05ac855c;
      }
      uVar33 = uVar33 - 1;
      piVar34 = piVar34 + 4;
    } while (uVar33 != 0);
  }
  puVar20 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_077a5820,0);
LAB_05ac855c:
  puVar38 = PTR_DAT_077a5828;
  puVar26 = PTR_DAT_0774e8e0;
  plVar18 = (long *)PTR_DAT_0774e8c8;
  plVar17 = (long *)(*(code *)*puVar20)(plVar19,puVar20[1]);
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
      lVar31 = *plVar17;
      uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar33 != 0) {
        piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)puVar26) {
            puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac85f0;
          }
          uVar33 = uVar33 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar33 != 0);
      }
      puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar26,0);
LAB_05ac85f0:
      uVar33 = (*(code *)*puVar20)(plVar17,puVar20[1]);
      if ((uVar33 & 1) == 0) {
        lVar31 = 0;
        iVar15 = 9;
        goto joined_r0x05ac8680;
      }
      lVar31 = *plVar17;
      uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar33 != 0) {
        piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)puVar38) {
            puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac864c;
          }
          uVar33 = uVar33 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar33 != 0);
      }
      puVar20 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar38,0);
LAB_05ac864c:
      fVar40 = (float)(*(code *)*puVar20)(plVar17,puVar20[1]);
      bVar11 = true;
    } while (((fVar40 <= fVar39) && ((ulong)ABS((double)fVar39) < 0x7ff0000000000001)) && (bVar3));
  } while( true );
joined_r0x05ac8680:
  if (plVar17 != (long *)0x0) {
    lVar30 = *plVar17;
    uVar33 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar33 != 0) {
      piVar34 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *plVar18) {
          puVar20 = (undefined8 *)(lVar30 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac86d0;
        }
        uVar33 = uVar33 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar33 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar17,*plVar18,0);
LAB_05ac86d0:
    uVar33 = (*(code *)*puVar20)(plVar17,puVar20[1]);
  }
  if (lVar31 == 0) {
    if (((iVar15 != 9) && (iVar15 != 0)) || (bVar3)) {
      return uVar33;
    }
  }
  else {
    func_0x03280ca4(lVar31);
  }
  plVar17 = (long *)func_0x05ac75f4();
LAB_05ac8730:
  uVar21 = func_0x03280a2c(PTR_DAT_077a5848);
  auVar44 = func_0x03280b7c(plVar17,uVar21);
  auStack_150._8_8_ = auVar44._0_8_;
  bVar3 = false;
  if (auVar44._8_4_ != 1) goto LAB_05ac878c;
  plVar19 = (long *)func_0x072ce910();
  lVar31 = *plVar19;
  uVar33 = func_0x072ce920();
  iVar15 = 0;
  goto joined_r0x05ac8680;
LAB_05ac878c:
  if (plVar17 != (long *)0x0) {
    lVar31 = *plVar17;
    uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar33 != 0) {
      piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *plVar18) {
          puVar20 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac87dc;
        }
        uVar33 = uVar33 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar33 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar17,*plVar18,0);
LAB_05ac87dc:
    (*(code *)*puVar20)(plVar17,puVar20[1]);
  }
  func_0x03365958(auStack_150._8_8_);
  func_0x03280ca4(0);
  uVar33 = func_0x02f09514();
  return uVar33;
}

