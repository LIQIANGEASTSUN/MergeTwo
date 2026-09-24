/* Ghidra 12.1.2 native pseudocode; RVA 0x6A836AC; Merger.MergeBoard.Logic.ToolSpawnHandler.GetToolProgressionData; status ok */


/* WARNING: Possible PIC construction at 0x06b837d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b83c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b837d8) */
/* WARNING: Removing unreachable block (ram,0x06b837f4) */
/* WARNING: Removing unreachable block (ram,0x06b83810) */
/* WARNING: Removing unreachable block (ram,0x06b83818) */
/* WARNING: Removing unreachable block (ram,0x06b83840) */
/* WARNING: Removing unreachable block (ram,0x06b83824) */
/* WARNING: Removing unreachable block (ram,0x06b83830) */
/* WARNING: Removing unreachable block (ram,0x06b83850) */
/* WARNING: Removing unreachable block (ram,0x06b83894) */
/* WARNING: Removing unreachable block (ram,0x06b838a0) */
/* WARNING: Removing unreachable block (ram,0x06b83c40) */
/* WARNING: Removing unreachable block (ram,0x06b83c48) */
/* WARNING: Removing unreachable block (ram,0x06b83cd8) */
/* WARNING: Removing unreachable block (ram,0x06b83c68) */
/* WARNING: Removing unreachable block (ram,0x06b83c90) */
/* WARNING: Removing unreachable block (ram,0x06b83ca0) */
/* WARNING: Removing unreachable block (ram,0x06b83cb4) */

ulong Merger_MergeBoard_Logic_ToolSpawnHandler__GetToolProgressionData
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uint uVar16;
  ulong *puVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int extraout_w1;
  long lVar27;
  undefined *puVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  int *piVar35;
  long lVar36;
  code *pcVar37;
  long *plVar38;
  undefined8 uVar39;
  undefined *puVar40;
  long *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar41;
  code *pcVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [12];
  undefined8 auStack_2a0 [2];
  undefined1 auStack_290 [16];
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long *plStack_260;
  undefined1 auStack_258 [16];
  long lStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [16];
  long lStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  long lStack_208;
  code *pcStack_200;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1d0 [16];
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined *puStack_1a0;
  long *plStack_198;
  long *plStack_190;
  ulong uStack_188;
  code *pcStack_180;
  long lStack_178;
  long *plStack_170;
  long *plStack_168;
  long lStack_160;
  long *plStack_158;
  long *plStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long *plStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined *puStack_a8;
  
  puVar28 = PTR_DAT_07831b68;
  plVar19 = (long *)PTR_DAT_07831b60;
  plVar38 = (long *)PTR_DAT_077bf888;
  if ((bRam0000000007e2a774 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831b68);
    func_0x03280a18(PTR_DAT_07810720);
    func_0x03280a18(PTR_DAT_07831b70);
    func_0x03280a18(PTR_DAT_07831b60);
    func_0x03280a18(PTR_DAT_07806898);
    func_0x03280a18(PTR_DAT_077bf888);
    func_0x03280a18(PTR_DAT_07831b78);
    bRam0000000007e2a774 = 1;
  }
  uVar20 = func_0x03280ca0(*plVar19);
  func_0x04f610a8(uVar20,*(undefined8 *)puVar28);
  lVar21 = *plVar38;
  if (*(int *)(lVar21 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar21 = *plVar38;
  }
  lVar21 = **(long **)(lVar21 + 0xb8);
  if (lVar21 == 0) {
LAB_06b838e4:
    func_0x03280cac();
LAB_06b838e8:
    auVar46 = func_0x03280cb4();
    plVar22 = auVar46._8_8_;
    param_1 = auVar46._0_8_;
  }
  else {
    if ((int)*(ulong *)(lVar21 + 0x18) < 1) {
      return uVar20;
    }
    if ((*(ulong *)(lVar21 + 0x18) & 0xffffffff) == 0) goto LAB_06b838e8;
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_06b838e4;
    plVar38 = (long *)(ulong)*(uint *)(lVar21 + 0x20);
    param_3 = *(undefined8 *)PTR_DAT_07810720;
    plVar22 = (long *)func_0x04f61e04(*(long *)(param_1 + 0x78),plVar38);
    unaff_x25 = plVar22;
  }
  if ((bRam0000000007e2a77d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    param_1 = func_0x03280a18(PTR_DAT_0777e508);
    bRam0000000007e2a77d = 1;
  }
  if (plVar22 != (long *)0x0) {
    lVar21 = *plVar22;
    uVar34 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == *(long *)PTR_DAT_0777c248) {
          puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_06b8397c;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    param_3 = 0;
    puVar23 = (undefined8 *)func_0x03256b10(plVar22);
LAB_06b8397c:
    lVar21 = (*(code *)*puVar23)(plVar22,puVar23[1]);
    param_1 = 0;
    if (lVar21 != 0) {
      return (ulong)(uint)(1 << (ulong)(*(int *)(lVar21 + 0x18) - 1U & 0x1f));
    }
  }
  auVar46 = func_0x03280cac(param_1);
  puVar28 = PTR_DAT_07831b80;
  uVar26 = auVar46._8_8_;
  plVar22 = auVar46._0_8_;
  puStack_a8 = (undefined *)0x7e2a000;
  uVar24 = param_3;
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
  lVar21 = func_0x03280ca0(*(undefined8 *)puVar28);
  func_0x06b84e28(lVar21,0);
  puVar10 = PTR_DAT_07831ba0;
  puVar9 = PTR_DAT_07831b98;
  puVar8 = PTR_DAT_07785d18;
  puVar7 = PTR_DAT_07785d10;
  puVar6 = PTR_DAT_07785d08;
  puVar5 = PTR_DAT_0776e5a8;
  puVar41 = PTR_DAT_0776e590;
  puVar40 = (undefined *)plVar19;
  plVar18 = unaff_x25;
  if (lVar21 != 0) {
    *(undefined8 *)(lVar21 + 0x10) = uVar26;
    func_0x032809c4((undefined8 *)(lVar21 + 0x10),uVar26);
    *(long *)(lVar21 + 0x18) = (long)plVar22;
    func_0x032809c4((long *)(lVar21 + 0x18),plVar22);
    uVar24 = func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x05355fbc(uVar24,lVar21,*(undefined8 *)puVar9,0);
    uVar25 = func_0x03d872a8(param_3,uVar24,*(undefined8 *)puVar41);
    uVar26 = func_0x03280ca0(*(undefined8 *)puVar8);
    param_4 = 0;
    func_0x05356664(uVar26,lVar21,*(undefined8 *)puVar10);
    uVar24 = *(undefined8 *)puVar6;
    uVar25 = func_0x03d504ac(uVar25,uVar26);
    param_3 = func_0x03d5b7c8(uVar25,*(undefined8 *)puVar7);
    uVar34 = func_0x03ce7ea0(param_3,*(undefined8 *)PTR_DAT_07831b88);
    if ((uVar34 & 1) != 0) {
      return 0;
    }
    uVar25 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a6e80);
    puVar28 = puVar7;
    puVar40 = puVar5;
    plVar18 = (long *)puVar9;
    unaff_x26 = puVar41;
    if (plVar22 != (long *)0x0) {
      func_0x05353e8c(uVar25,plVar22,*(undefined8 *)(*plVar22 + 0x280),0);
      lVar21 = *(long *)PTR_DAT_07831b90;
      lVar32 = *(long *)(lVar21 + 0x38);
      if (lVar32 == 0) {
        func_0x03256878(lVar21);
        lVar32 = *(long *)(lVar21 + 0x38);
      }
      plVar22 = (long *)func_0x03d4ea18(param_3,uVar25,*(undefined8 *)(lVar32 + 0x10));
      if ((bRam0000000007e1fbe1 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077a5818,0);
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_077617f0);
        func_0x03280a18(PTR_DAT_077617f8);
        func_0x03280a18(PTR_DAT_0774e8e0);
        bRam0000000007e1fbe1 = 1;
      }
      if (plVar22 == (long *)0x0) {
        func_0x03280a2c(PTR_DAT_07774b08);
        plVar22 = (long *)func_0x05ac7464();
        uVar24 = func_0x03280a2c(PTR_DAT_077a5818);
        func_0x03280b7c(plVar22,uVar24);
      }
      else {
        lVar21 = *plVar22;
        uVar34 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar34 != 0) {
          piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == *(long *)PTR_DAT_077617f0) {
              puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
              goto LAB_05ac78d8;
            }
            uVar34 = uVar34 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar34 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_077617f0,0);
LAB_05ac78d8:
        plVar38 = (long *)PTR_DAT_0774e8c8;
        plVar22 = (long *)(*(code *)*puVar23)(plVar22,puVar23[1]);
        puVar41 = PTR_DAT_077617f8;
        puVar28 = PTR_DAT_0774e8e0;
        if (plVar22 != (long *)0x0) {
          uVar2 = 0;
          do {
            uVar16 = uVar2;
            lVar21 = *plVar22;
            uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar20 != 0) {
              piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar35 + -2) == *(long *)puVar28) {
                  puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
                  goto LAB_05ac7958;
                }
                uVar20 = uVar20 - 1;
                piVar35 = piVar35 + 4;
              } while (uVar20 != 0);
            }
            puVar23 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar28,0);
LAB_05ac7958:
            uVar20 = (*(code *)*puVar23)(plVar22,puVar23[1]);
            if ((uVar20 & 1) == 0) goto LAB_05ac79e0;
            lVar21 = *plVar22;
            uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar20 != 0) {
              piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar35 + -2) == *(long *)puVar41) {
                  puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
                  goto LAB_05ac79b4;
                }
                uVar20 = uVar20 - 1;
                piVar35 = piVar35 + 4;
              } while (uVar20 != 0);
            }
            puVar23 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar41,0);
LAB_05ac79b4:
            iVar15 = (*(code *)*puVar23)(plVar22,puVar23[1]);
            uVar2 = iVar15 + uVar16;
          } while (!SCARRY4(uVar16,iVar15));
          uVar24 = func_0x03280cbc();
          func_0x03280b7c(uVar24,*(undefined8 *)PTR_DAT_077a5818);
LAB_05ac79e0:
          uVar20 = 0;
          goto LAB_05ac79e4;
        }
      }
      func_0x03280cac();
      puVar41 = puStack_a8;
      while( true ) {
        auVar48 = func_0x03280ca4(uVar20);
        uVar16 = 0;
        if (auVar48._8_4_ != 1) break;
        puVar17 = (ulong *)func_0x072ce910();
        uVar20 = *puVar17;
        func_0x072ce920();
LAB_05ac79e4:
        if (plVar22 != (long *)0x0) {
          lVar21 = *plVar22;
          uVar34 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar34 != 0) {
            piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == *plVar38) {
                puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
                goto LAB_05ac7a34;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          puVar23 = (undefined8 *)func_0x03256b10(plVar22,*plVar38,0);
LAB_05ac7a34:
          (*(code *)*puVar23)(plVar22,puVar23[1]);
        }
        if (uVar20 == 0) {
          return (ulong)uVar16;
        }
      }
      if (plVar22 != (long *)0x0) {
        lVar21 = *plVar22;
        uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar20 != 0) {
          piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == *plVar38) {
              puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
              goto LAB_05ac7b18;
            }
            uVar20 = uVar20 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar20 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar22,*plVar38,0);
LAB_05ac7b18:
        (*(code *)*puVar23)(plVar22,puVar23[1]);
      }
      func_0x03365958(auVar48._0_8_);
      func_0x03280ca4(0);
      plVar22 = (long *)func_0x02f09514();
      lVar21 = 0x7e1f000;
      if ((bRam0000000007e1fbe2 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_077a5820);
        func_0x03280a18(PTR_DAT_077a5828);
        func_0x03280a18(PTR_DAT_0774e8e0);
        bRam0000000007e1fbe2 = 1;
      }
      if (plVar22 == (long *)0x0) {
        func_0x03280a2c(PTR_DAT_07774b08);
        plVar22 = (long *)func_0x05ac7464();
        uVar24 = func_0x03280a2c(PTR_DAT_077a5830);
        func_0x03280b7c(plVar22,uVar24);
      }
      else {
        lVar32 = *plVar22;
        uVar20 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar20 != 0) {
          piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == *(long *)PTR_DAT_077a5820) {
              puVar23 = (undefined8 *)(lVar32 + (long)*piVar35 * 0x10 + 0x138);
              goto LAB_05ac7bec;
            }
            uVar20 = uVar20 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar20 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_077a5820,0);
LAB_05ac7bec:
        plVar38 = (long *)PTR_DAT_0774e8c8;
        plVar22 = (long *)(*(code *)*puVar23)(plVar22,puVar23[1]);
        puVar5 = PTR_DAT_077a5828;
        puVar28 = PTR_DAT_0774e8e0;
        if (plVar22 != (long *)0x0) {
          do {
            lVar21 = *plVar22;
            uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar20 != 0) {
              piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar35 + -2) == *(long *)puVar28) {
                  puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
                  goto LAB_05ac7c68;
                }
                uVar20 = uVar20 - 1;
                piVar35 = piVar35 + 4;
              } while (uVar20 != 0);
            }
            puVar23 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar28,0);
LAB_05ac7c68:
            uVar20 = (*(code *)*puVar23)(plVar22,puVar23[1]);
            if ((uVar20 & 1) == 0) {
              lVar21 = 0;
              if (plVar22 == (long *)0x0) goto LAB_05ac7d40;
              goto LAB_05ac7ce8;
            }
            lVar21 = *plVar22;
            uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar20 != 0) {
              piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar35 + -2) == *(long *)puVar5) {
                  puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
                  goto LAB_05ac7cc4;
                }
                uVar20 = uVar20 - 1;
                piVar35 = piVar35 + 4;
              } while (uVar20 != 0);
            }
            puVar23 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar5,0);
LAB_05ac7cc4:
            (*(code *)*puVar23)(plVar22,puVar23[1]);
          } while( true );
        }
      }
      func_0x03280cac();
      while( true ) {
        auVar48 = func_0x03280ca4(lVar21);
        lVar21 = auVar48._0_8_;
        if (auVar48._8_4_ != 1) break;
        plVar18 = (long *)func_0x072ce910(lVar21);
        lVar21 = *plVar18;
        uVar20 = func_0x072ce920();
        if (plVar22 != (long *)0x0) {
LAB_05ac7ce8:
          lVar32 = *plVar22;
          uVar20 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar20 != 0) {
            piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == *plVar38) {
                puVar23 = (undefined8 *)(lVar32 + (long)*piVar35 * 0x10 + 0x138);
                goto LAB_05ac7d34;
              }
              uVar20 = uVar20 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar20 != 0);
          }
          puVar23 = (undefined8 *)func_0x03256b10(plVar22,*plVar38,0);
LAB_05ac7d34:
          uVar20 = (*(code *)*puVar23)(plVar22,puVar23[1]);
        }
LAB_05ac7d40:
        if (lVar21 == 0) {
          return uVar20;
        }
      }
      if (plVar22 != (long *)0x0) {
        lVar32 = *plVar22;
        uVar20 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar20 != 0) {
          piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == *plVar38) {
              puVar23 = (undefined8 *)(lVar32 + (long)*piVar35 * 0x10 + 0x138);
              goto LAB_05ac7e34;
            }
            uVar20 = uVar20 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar20 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar22,*plVar38,0);
LAB_05ac7e34:
        (*(code *)*puVar23)(plVar22,puVar23[1]);
      }
      func_0x03365958(lVar21);
      func_0x03280ca4(0);
      plVar18 = (long *)func_0x02f09514();
      uStack_120 = 0x5ac7e58;
      puStack_110 = (undefined *)plVar19;
      uStack_f0 = 0;
      puStack_108 = puVar41;
      plStack_100 = plVar38;
      lStack_f8 = lVar21;
      plStack_e8 = plVar22;
      if ((bRam0000000007e1fbe3 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_077617f0);
        func_0x03280a18(PTR_DAT_077617f8);
        func_0x03280a18(PTR_DAT_0774e8e0);
        bRam0000000007e1fbe3 = 1;
      }
      if (plVar18 == (long *)0x0) {
        func_0x03280a2c(PTR_DAT_07774b08);
        plVar38 = (long *)func_0x05ac7464();
        goto LAB_05ac80ac;
      }
      lVar32 = *plVar18;
      uVar20 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar20 != 0) {
        piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == *(long *)PTR_DAT_077617f0) {
            puVar23 = (undefined8 *)(lVar32 + (long)*piVar35 * 0x10 + 0x138);
            goto LAB_05ac7f08;
          }
          uVar20 = uVar20 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar20 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077617f0,0);
LAB_05ac7f08:
      plVar19 = (long *)PTR_DAT_0774e8c8;
      plVar38 = (long *)(*(code *)*puVar23)(plVar18,puVar23[1]);
      puVar41 = PTR_DAT_077617f8;
      puVar28 = PTR_DAT_0774e8e0;
      if (plVar38 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_05ac80a0;
      }
      uVar20 = 0;
      uVar34 = 0;
      do {
        lVar21 = *plVar38;
        uVar33 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar33 != 0) {
          piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == *(long *)puVar28) {
              puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
              goto LAB_05ac7f88;
            }
            uVar33 = uVar33 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar33 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar38,*(long *)puVar28,0);
LAB_05ac7f88:
        uVar33 = (*(code *)*puVar23)(plVar38,puVar23[1]);
        if ((uVar33 & 1) == 0) goto LAB_05ac8008;
        lVar21 = *plVar38;
        uVar33 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar33 != 0) {
          piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == *(long *)puVar41) {
              puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
              goto LAB_05ac7fe4;
            }
            uVar33 = uVar33 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar33 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar38,*(long *)puVar41,0);
LAB_05ac7fe4:
        uVar16 = (*(code *)*puVar23)(plVar38,puVar23[1]);
        uVar2 = uVar16;
        if ((int)(uint)uVar20 <= (int)uVar16) {
          uVar2 = (uint)uVar20;
        }
        if ((int)uVar34 == 0) {
          uVar2 = uVar16;
        }
        uVar20 = (ulong)uVar2;
        uVar34 = 1;
      } while( true );
    }
  }
  auVar46 = func_0x03280cac();
  uVar25 = auVar46._8_8_;
  lVar32 = auVar46._0_8_;
  puStack_110 = (undefined *)0x6b83be0;
  uVar39 = 0x7e2a000;
  puStack_108 = puVar28;
  plStack_100 = (long *)lVar21;
  lStack_f8 = uVar26;
  uStack_f0 = param_3;
  plStack_e8 = plVar22;
  if ((bRam0000000007e2a775 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831ba8);
    func_0x03280a18(PTR_DAT_07810720);
    bRam0000000007e2a775 = 1;
  }
  puVar28 = PTR_DAT_07831bb0;
  uStack_118 = 0;
  lStack_160 = 0x6b83c40;
  uStack_148 = 0x7e2a000;
  plStack_158 = plVar18;
  plStack_150 = (long *)puVar40;
  uStack_140 = uVar24;
  plStack_128 = (long *)param_4;
  if ((bRam0000000007e2a776 & 1) == 0) {
    uStack_138 = uVar25;
    lStack_130 = lVar32;
    func_0x03280a18(PTR_DAT_077800c0);
    func_0x03280a18(PTR_DAT_077800c8);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_07831bb8);
    func_0x03280a18(PTR_DAT_07831bc0);
    func_0x03280a18(PTR_DAT_07831bb0);
    func_0x03280a18(PTR_DAT_077800d8);
    func_0x03280a18(PTR_DAT_077800e0);
    auVar46._8_8_ = uStack_138;
    auVar46._0_8_ = lStack_130;
    bRam0000000007e2a776 = 1;
  }
  uStack_138 = auVar46._8_8_;
  lStack_130 = auVar46._0_8_;
  uVar24 = Merger_MergeBoard_Logic_ToolSpawnHandler__GetFilteredTools(lVar32,uVar24,uVar25);
  uVar26 = Merger_MergeBoard_Logic_ToolSpawnHandler__CalculateCurrentToolAmounts(lVar32,uVar25);
  Merger_MergeBoard_Logic_ToolSpawnHandler__ApplyMetagameWeightBoosts(lVar32,uVar24,uVar26);
  lVar21 = *(long *)puVar28;
  if (*(int *)(lVar21 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar21 = *(long *)puVar28;
  }
  lVar36 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
  if (lVar36 == 0) {
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar21 = *(long *)puVar28;
    }
    uVar26 = **(undefined8 **)(lVar21 + 0xb8);
    lVar36 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
    func_0x0535ab4c(lVar36,uVar26,*(undefined8 *)PTR_DAT_07831bb8,0);
    plVar38 = (long *)(*(long *)(*(long *)puVar28 + 0xb8) + 8);
    *plVar38 = lVar36;
    func_0x032809c4(plVar38,lVar36);
    lVar21 = *(long *)puVar28;
  }
  if (*(int *)(lVar21 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar21 = *(long *)puVar28;
  }
  puVar41 = PTR_DAT_077800e0;
  plVar38 = *(long **)(*(long *)(lVar21 + 0xb8) + 0x10);
  if (plVar38 == (long *)0x0) {
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar21 = *(long *)puVar28;
    }
    uVar39 = **(undefined8 **)(lVar21 + 0xb8);
    plVar38 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
    func_0x0535ac00(plVar38,uVar39,*(undefined8 *)PTR_DAT_07831bc0,0);
    plVar19 = (long *)(*(long *)(*(long *)puVar28 + 0xb8) + 0x10);
    *plVar19 = (long)plVar38;
    func_0x032809c4(plVar19,plVar38);
  }
  plVar19 = plVar38;
  lVar21 = func_0x03f36e88(uVar24,lVar36,plVar38,*(undefined8 *)puVar41);
  plVar22 = *(long **)(lVar32 + 0x38);
  if (plVar22 != (long *)0x0) {
    lVar32 = *plVar22;
    uVar20 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar20 != 0) {
      piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar23 = (undefined8 *)(lVar32 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_06b83f10;
        }
        uVar20 = uVar20 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar20 != 0);
    }
    plVar19 = (long *)0x0;
    puVar23 = (undefined8 *)func_0x03256b10(plVar22);
LAB_06b83f10:
    plVar18 = (long *)(*(code *)*puVar23)(plVar22,puVar23[1]);
    lVar32 = 0;
    if (lVar21 != 0) {
      lVar36 = *(long *)PTR_DAT_077800d8;
      plStack_150 = (long *)lStack_160;
      lVar32 = *(long *)(*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 0xa0);
      if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = func_0x0325681c(lVar32);
      }
      lVar32 = func_0x03280ca0(lVar32);
      func_0x04c1b8d8(lVar32,*(undefined8 *)(*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 0xa8));
      if ((plVar18 != (long *)0x0) &&
         (iVar15 = (**(code **)(*plVar18 + 0x1a8))
                             (plVar18,*(undefined4 *)(lVar21 + 0x18),
                              *(undefined8 *)(*plVar18 + 0x1b0)), lVar32 != 0)) {
        *(int *)(lVar32 + 0x10) = iVar15 + 1;
        uVar24 = *(undefined8 *)(lVar21 + 0x10);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar26 = func_0x03280ca0();
        lVar21 = *(long *)(*(long *)(lVar36 + 0x20) + 0xc0);
        func_0x05355fbc(uVar26,lVar32,*(undefined8 *)(lVar21 + 0xb0),*(undefined8 *)(lVar21 + 0xc0))
        ;
        lVar21 = func_0x03d4294c(uVar24,uVar26,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 200));
        if (lVar21 != 0) {
          return (ulong)*(uint *)(lVar21 + 0x10);
        }
      }
      auVar46 = func_0x03280cac();
      plStack_170 = (long *)0x4a44b20;
      lVar21 = *(long *)(*(long *)(*(long *)(auVar46._8_8_ + 0x20) + 0xc0) + 8);
      lStack_160 = lVar32;
      plStack_158 = (long *)lVar36;
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
      }
      uVar24 = func_0x03280ca0(lVar21);
      func_0x04143c38(uVar24,*(undefined8 *)
                              (*(long *)(*(long *)(auVar46._8_8_ + 0x20) + 0xc0) + 0xe0));
      puVar23 = (undefined8 *)(auVar46._0_8_ + 0x10);
      *puVar23 = uVar24;
      func_0x032809c4(puVar23,uVar24);
      return auVar46._0_8_;
    }
  }
  auVar47 = func_0x03280cac();
  puVar5 = PTR_DAT_07831bc8;
  uVar24 = auVar47._0_8_;
  auStack_1b0._0_8_ = Merger_MergeBoard_Logic_ToolSpawnHandler__FilterToolLevelsByProgressionOnBoard
  ;
  plStack_198 = (long *)puVar41;
  plStack_190 = (long *)puVar28;
  plVar18 = plVar19;
  puStack_1a0 = unaff_x26;
  uStack_188 = uVar39;
  pcStack_180 = (code *)plVar38;
  lStack_178 = lVar36;
  plStack_170 = plVar22;
  plStack_168 = (long *)lVar32;
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
    auVar46 = func_0x03280cac();
    puVar6 = PTR_DAT_07831bb0;
    pcStack_200 = Merger_MergeBoard_Logic_ToolSpawnHandler__GenerateRandomToolItemFromWeights;
    puStack_1e8 = puVar41;
    puStack_1e0 = puVar28;
    puStack_1d8 = puVar5;
    uStack_1f0 = unaff_x26;
    auStack_1d0._0_8_ = lVar21;
    plStack_1c0 = plVar19;
    if ((bRam0000000007e2a777 & 1) == 0) {
      auStack_1d0._8_8_ = uVar24;
      uStack_1b8 = auVar47._8_8_;
      func_0x03280a18(PTR_DAT_077800e8);
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_077800d0);
      func_0x03280a18(PTR_DAT_0777e510);
      func_0x03280a18(PTR_DAT_07831bd8);
      func_0x03280a18(PTR_DAT_07831be0);
      func_0x03280a18(PTR_DAT_07831bb0);
      func_0x03280a18(PTR_DAT_077800f8);
      func_0x03280a18(PTR_DAT_07780100);
      auVar47._8_8_ = uStack_1b8;
      auVar47._0_8_ = auStack_1d0._8_8_;
      bRam0000000007e2a777 = 1;
    }
    uStack_1b8 = auVar47._8_8_;
    auStack_1d0._8_8_ = auVar47._0_8_;
    lVar21 = *(long *)puVar6;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar47._8_8_ = uStack_1b8;
      auVar47._0_8_ = auStack_1d0._8_8_;
      lVar21 = *(long *)puVar6;
    }
    uStack_1b8 = auVar47._8_8_;
    auStack_1d0._8_8_ = auVar47._0_8_;
    lVar32 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x18);
    if (lVar32 == 0) {
      if (*(int *)(lVar21 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar47._8_8_ = uStack_1b8;
        auVar47._0_8_ = auStack_1d0._8_8_;
        lVar21 = *(long *)puVar6;
      }
      uStack_1b8 = auVar47._8_8_;
      auStack_1d0._8_8_ = auVar47._0_8_;
      uVar24 = **(undefined8 **)(lVar21 + 0xb8);
      lVar32 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar32,uVar24,*(undefined8 *)PTR_DAT_07831bd8,0);
      plVar38 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
      *plVar38 = lVar32;
      func_0x032809c4(plVar38,lVar32);
      auVar47._8_8_ = uStack_1b8;
      auVar47._0_8_ = auStack_1d0._8_8_;
      lVar21 = *(long *)puVar6;
    }
    uStack_1b8 = auVar47._8_8_;
    auStack_1d0._8_8_ = auVar47._0_8_;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar47._8_8_ = uStack_1b8;
      auVar47._0_8_ = auStack_1d0._8_8_;
      lVar21 = *(long *)puVar6;
    }
    puVar28 = PTR_DAT_07780100;
    uStack_1b8 = auVar47._8_8_;
    auStack_1d0._8_8_ = auVar47._0_8_;
    lVar36 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x20);
    if (lVar36 == 0) {
      if (*(int *)(lVar21 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar47._8_8_ = uStack_1b8;
        auVar47._0_8_ = auStack_1d0._8_8_;
        lVar21 = *(long *)puVar6;
      }
      uStack_1b8 = auVar47._8_8_;
      auStack_1d0._8_8_ = auVar47._0_8_;
      uVar24 = **(undefined8 **)(lVar21 + 0xb8);
      lVar36 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar36,uVar24,*(undefined8 *)PTR_DAT_07831be0,0);
      plVar38 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
      *plVar38 = lVar36;
      func_0x032809c4(plVar38,lVar36);
      auVar47._8_8_ = uStack_1b8;
      auVar47._0_8_ = auStack_1d0._8_8_;
    }
    uStack_1b8 = auVar47._8_8_;
    auStack_1d0._8_8_ = auVar47._0_8_;
    lVar21 = func_0x03f372e4(auVar46._8_8_,lVar32,lVar36,*(undefined8 *)puVar28);
    plVar38 = *(long **)(auVar46._0_8_ + 0x38);
    if (plVar38 != (long *)0x0) {
      lVar32 = *plVar38;
      uVar20 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar20 != 0) {
        piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == *(long *)PTR_DAT_077800d0) {
            puVar23 = (undefined8 *)(lVar32 + (long)*piVar35 * 0x10 + 0x138);
            goto LAB_06b8427c;
          }
          uVar20 = uVar20 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar20 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar38,*(long *)PTR_DAT_077800d0,0);
LAB_06b8427c:
      uVar24 = (*(code *)*puVar23)(plVar38,puVar23[1]);
      if ((lVar21 != 0) &&
         (iVar15 = func_0x04a44654(lVar21,uVar24,*(undefined8 *)PTR_DAT_077800f8),
         plVar18 != (long *)0x0)) {
        lVar21 = *plVar18;
        uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar20 != 0) {
          piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
              goto LAB_06b84300;
            }
            uVar20 = uVar20 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar20 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777c248,0);
LAB_06b84300:
        puVar28 = (undefined *)(*(code *)*puVar23)(plVar18,puVar23[1]);
        uVar24 = auStack_1d0._8_8_;
        if (puVar28 != (undefined *)0x0) {
          uVar2 = iVar15 - 1;
          uVar26 = *(undefined8 *)PTR_DAT_0777e510;
          auStack_1d0._0_8_ = pcStack_200;
          if (*(uint *)(puVar28 + 0x18) <= uVar2) {
            func_0x057b8434(0);
          }
          lVar21 = *(long *)(puVar28 + 0x10);
          if (lVar21 == 0) {
            func_0x03280cac();
          }
          else if (uVar2 < *(uint *)(lVar21 + 0x18)) {
            return *(ulong *)(lVar21 + (long)(int)uVar2 * 8 + 0x20);
          }
          auVar48 = func_0x03280cb4();
          uVar16 = auVar48._8_4_;
          lVar21 = auVar48._0_8_;
          uStack_1f0 = (undefined *)0x41441f0;
          puStack_1e8 = (undefined *)uVar24;
          puStack_1e0 = puVar28;
          puStack_1d8 = (undefined *)(ulong)uVar2;
          if (*(uint *)(lVar21 + 0x18) <= uVar16) {
            func_0x057b8434(0);
          }
          lVar32 = *(long *)(lVar21 + 0x10);
          if (lVar32 == 0) {
            func_0x03280cac();
          }
          else if (uVar16 < *(uint *)(lVar32 + 0x18)) {
            puVar23 = (undefined8 *)(lVar32 + (long)(int)uVar16 * 8 + 0x20);
            *puVar23 = uVar26;
            uVar20 = func_0x032809c4(puVar23,uVar26);
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            return uVar20;
          }
          auVar46 = func_0x03280cb4();
          pcStack_200 = (code *)0x414425c;
          lVar32 = *(long *)(auVar46._8_8_ + 0x20);
          auStack_1f8 = (undefined1  [8])lVar21;
          if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
            lVar32 = func_0x0325681c(lVar32);
          }
          lVar21 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x48);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c(lVar21);
          }
          lVar21 = func_0x03280b90(auVar46._0_8_,lVar21);
          if (lVar21 == 0) {
            uVar20 = (ulong)(auVar46._0_8_ == 0);
          }
          else {
            uVar20 = 1;
          }
          return uVar20;
        }
      }
    }
    func_0x03280cac();
    return (ulong)(uint)(1 << (ulong)(extraout_w1 - 1U & 0x1f));
  }
  *(undefined8 *)(lVar21 + 0x10) = uVar24;
  func_0x032809c4((undefined8 *)(lVar21 + 0x10),uVar24);
  *(long *)(lVar21 + 0x18) = (long)plVar19;
  func_0x032809c4((long *)(lVar21 + 0x18),plVar19);
  uVar24 = func_0x03280ca0(*(undefined8 *)puVar8);
  lVar31 = 0;
  func_0x0535acb4(uVar24,lVar21,*(undefined8 *)puVar9);
  lVar30 = *(long *)puVar7;
  lVar32 = func_0x03d87e68(auVar47._8_8_,uVar24);
  lVar21 = lStack_178;
  pcVar37 = pcStack_180;
  uVar20 = uStack_188;
  lVar36 = *(long *)puVar6;
  pcStack_180 = (code *)auStack_1b0._0_8_;
  if (*(long *)(lVar36 + 0x38) == 0) {
    func_0x03256878(lVar36);
  }
  if (lVar32 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar36 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar20 = func_0x03280ca0();
    func_0x041e8ba0(uVar20,lVar32,*(undefined8 *)(*(long *)(lVar36 + 0x38) + 0x10));
    return uVar20;
  }
  uVar24 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar24 = func_0x05ac7464(uVar24,0);
  auVar46 = func_0x03280b7c(uVar24,lVar36);
  lVar27 = auVar46._8_8_;
  puStack_1a0 = (undefined *)0x3d602b8;
  plStack_190 = (long *)lVar32;
  uStack_188 = lVar36;
  if (*(long *)(lVar27 + 0x38) == 0) {
    func_0x03256878(lVar27);
  }
  if (auVar46._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar27 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar20 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x38) + 0x10))(uVar20,auVar46._0_8_);
    return uVar20;
  }
  uVar24 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar24 = func_0x05ac7464(uVar24,0);
  auVar47 = func_0x03280b7c(uVar24,lVar27);
  lVar32 = auVar47._8_8_;
  plStack_1c0 = (long *)0x3d60338;
  auStack_1b0 = auVar46;
  if (*(long *)(lVar32 + 0x38) == 0) {
    func_0x03256878(lVar32);
  }
  if (auVar47._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar32 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar20 = func_0x03280ca0();
    func_0x0420cec8(uVar20,auVar47._0_8_,*(undefined8 *)(*(long *)(lVar32 + 0x38) + 0x10));
    return uVar20;
  }
  uVar24 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar24 = func_0x05ac7464(uVar24,0);
  auVar46 = func_0x03280b7c(uVar24,lVar32);
  puStack_1e0 = (undefined *)0x3d603b4;
  puStack_1d8 = (undefined *)lVar21;
  lVar21 = lVar30;
  auStack_1d0 = auVar47;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03256878(lVar30);
  }
  auVar45._8_8_ = puStack_1d8;
  auVar45._0_8_ = pcVar37;
  puVar28 = PTR_DAT_07779d10;
  if ((auVar46._0_8_ == 0) || (puVar28 = PTR_DAT_07779d18, auVar46._8_8_ == 0)) {
    uVar24 = func_0x03280a2c(puVar28);
    uVar24 = func_0x05ac7464(uVar24,0);
    auVar47 = func_0x03280b7c(uVar24,lVar30);
    pcStack_200 = (code *)0x3d60428;
    lVar32 = lVar21;
    puStack_1e8 = (undefined *)lVar30;
    if (*(long *)(lVar21 + 0x38) == 0) {
      _auStack_1f8 = auVar46;
      func_0x03256878(lVar21);
      auVar46 = _auStack_1f8;
    }
    puVar28 = PTR_DAT_07779d10;
    _auStack_1f8 = auVar46;
    if ((auVar47._0_8_ != 0) && (puVar28 = PTR_DAT_07779d18, auVar47._8_8_ != 0)) {
      lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
      lVar32 = 0;
      ppuVar13 = &puStack_1e0;
      puVar28 = puStack_1e8;
      pcVar42 = pcStack_200;
      goto LAB_03d60730;
    }
    uVar24 = func_0x03280a2c(puVar28);
    uVar24 = func_0x05ac7464(uVar24,0);
    auVar46 = func_0x03280b7c(uVar24,lVar21);
    uStack_220 = 0x3d6049c;
    lVar36 = lVar32;
    lStack_208 = lVar21;
    auStack_218 = auVar47;
    if (*(long *)(lVar32 + 0x38) == 0) {
      func_0x03256878(lVar32);
    }
    puVar28 = PTR_DAT_07779d10;
    if ((auVar46._0_8_ == 0) || (puVar28 = PTR_DAT_07779d18, auVar46._8_8_ == 0)) {
      uVar24 = func_0x03280a2c(puVar28);
      uVar24 = func_0x05ac7464(uVar24,0);
      auStack_258 = func_0x03280b7c(uVar24,lVar32);
      uStack_240 = 0x3d60510;
      lVar21 = lVar36;
      lStack_228 = lVar32;
      auStack_238 = auVar46;
      if (*(long *)(lVar36 + 0x38) == 0) {
        func_0x03256878(lVar36);
      }
      puVar28 = PTR_DAT_07779d10;
      if ((auStack_258._0_8_ != 0) && (puVar28 = PTR_DAT_07779d18, auStack_258._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar36 + 0x38) + 8))
                           (auStack_258._0_8_,auStack_258._8_8_,0);
        return uVar20;
      }
      uVar24 = func_0x03280a2c(puVar28);
      uVar24 = func_0x05ac7464(uVar24,0);
      auVar46 = func_0x03280b7c(uVar24,lVar36);
      uStack_270 = 0x3d60588;
      plStack_260 = (long *)pcVar37;
      lVar32 = lVar21;
      lVar30 = lVar31;
      lStack_248 = lVar36;
      if (*(long *)(lVar31 + 0x38) == 0) {
        func_0x03256878(lVar31);
      }
      puVar28 = PTR_DAT_07779d10;
      if ((auVar46._0_8_ == 0) || (puVar28 = PTR_DAT_07779d18, auVar46._8_8_ == 0)) {
        uVar24 = func_0x03280a2c(puVar28);
        uVar24 = func_0x05ac7464(uVar24,0);
        auVar45 = func_0x03280b7c(uVar24,lVar31);
        auVar4._8_8_ = lVar30;
        auVar4._0_8_ = lVar32;
        pplVar12 = (long **)auStack_2a0;
        auStack_2a0[0] = 0x3d60608;
        puVar28 = (undefined *)lVar32;
        lVar36 = lVar30;
        lStack_280 = lVar21;
        lStack_278 = lVar31;
        auStack_290 = auVar46;
        if (*(long *)(lVar30 + 0x38) == 0) {
          func_0x03256878(lVar30);
        }
        puVar41 = PTR_DAT_07779d10;
        if ((auVar45._0_8_ != 0) && (puVar41 = PTR_DAT_07779d18, auVar45._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x38) + 0x10))
                             (auVar45._0_8_,auVar45._8_8_,lVar32);
          return uVar20;
        }
        uVar24 = func_0x03280a2c(puVar41);
        uVar24 = func_0x05ac7464(uVar24,0);
        puVar41 = (undefined *)0x3d6068c;
        auVar46 = func_0x03280b7c(uVar24,lVar30);
        goto LAB_03d6068c;
      }
      lVar36 = *(long *)(*(long *)(lVar31 + 0x38) + 0x10);
      ppcVar14 = (code **)&uStack_240;
      lVar32 = lStack_248;
      pcVar37 = (code *)plStack_260;
      uVar24 = uStack_270;
      auVar47 = auStack_258;
    }
    else {
      lVar36 = *(long *)(*(long *)(lVar32 + 0x38) + 8);
      lVar21 = 0;
      ppcVar14 = &pcStack_200;
      lVar32 = lStack_208;
      uVar24 = uStack_220;
      auVar47 = auStack_218;
    }
  }
  else {
    lVar36 = *(long *)(*(long *)(lVar30 + 0x38) + 8);
    puVar28 = (undefined *)0x0;
    pplVar12 = &plStack_1c0;
    puVar41 = puStack_1e0;
    auVar4 = auStack_1d0;
LAB_03d6068c:
    ppuVar13 = (undefined **)((long)pplVar12 + -0x30);
    *(undefined **)((long)pplVar12 + -0x30) = puVar41;
    *(undefined1 (*) [16])((long)pplVar12 + -0x20) = auVar45;
    *(undefined1 (*) [16])((long)pplVar12 + -0x10) = auVar4;
    plVar38 = *(long **)(lVar36 + 0x38);
    lVar21 = lVar36;
    if (plVar38 == (long *)0x0) {
      func_0x03256878(lVar36);
      plVar38 = *(long **)(lVar36 + 0x38);
    }
    if ((*(byte *)(*plVar38 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar34 = func_0x03280ca0();
    lVar32 = *(long *)(*(long *)(lVar36 + 0x38) + 8);
    func_0x0531dbd0(uVar34,0xfffffffe);
    if (uVar34 != 0) {
      *(undefined8 *)(uVar34 + 0x38) = auVar46._0_8_;
      func_0x032809c4((undefined8 *)(uVar34 + 0x38),auVar46._0_8_);
      *(undefined8 *)(uVar34 + 0x48) = auVar46._8_8_;
      func_0x032809c4((undefined8 *)(uVar34 + 0x48),auVar46._8_8_);
      *(long *)(uVar34 + 0x28) = (long)puVar28;
      func_0x032809c4((long *)(uVar34 + 0x28),puVar28);
      return uVar34;
    }
    auVar47 = func_0x03280cac();
    pcVar37 = (code *)0x0;
    pcVar42 = (code *)0x3d60730;
LAB_03d60730:
    ppcVar14 = (code **)((long)ppuVar13 + -0x30);
    *(code **)((long)ppuVar13 + -0x30) = pcVar42;
    *(code **)((long)ppuVar13 + -0x20) = pcVar37;
    *(undefined1 (*) [16])((long)ppuVar13 + -0x18) = auVar46;
    *(undefined **)((long)ppuVar13 + -8) = puVar28;
    plVar38 = *(long **)(lVar21 + 0x38);
    lVar36 = lVar21;
    if (plVar38 == (long *)0x0) {
      func_0x03256878(lVar21);
      plVar38 = *(long **)(lVar21 + 0x38);
    }
    if ((*(byte *)(*plVar38 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar34 = func_0x03280ca0();
    lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
    func_0x0531e428(uVar34,0xfffffffe);
    if (uVar34 != 0) {
      *(undefined8 *)(uVar34 + 0x38) = auVar47._0_8_;
      func_0x032809c4((undefined8 *)(uVar34 + 0x38),auVar47._0_8_);
      *(undefined8 *)(uVar34 + 0x48) = auVar47._8_8_;
      func_0x032809c4((undefined8 *)(uVar34 + 0x48),auVar47._8_8_);
      *(long *)(uVar34 + 0x28) = lVar32;
      func_0x032809c4((long *)(uVar34 + 0x28),lVar32);
      return uVar34;
    }
    auVar46 = func_0x03280cac();
    pcVar37 = (code *)(long *)0x0;
    uVar24 = 0x3d607d4;
  }
  *(undefined8 *)((long)ppcVar14 + -0x30) = uVar24;
  *(code **)((long)ppcVar14 + -0x20) = pcVar37;
  *(undefined1 (*) [16])((long)ppcVar14 + -0x18) = auVar47;
  *(long *)((long)ppcVar14 + -8) = lVar32;
  plVar38 = *(long **)(lVar36 + 0x38);
  lVar32 = lVar36;
  if (plVar38 == (long *)0x0) {
    func_0x03256878(lVar36);
    plVar38 = *(long **)(lVar36 + 0x38);
  }
  if ((*(byte *)(*plVar38 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar34 = func_0x03280ca0();
  uVar24 = *(undefined8 *)(*(long *)(lVar36 + 0x38) + 8);
  func_0x0531ec78(uVar34,0xfffffffe);
  if (uVar34 != 0) {
    *(undefined8 *)(uVar34 + 0x40) = auVar46._0_8_;
    func_0x032809c4((undefined8 *)(uVar34 + 0x40),auVar46._0_8_);
    *(undefined8 *)(uVar34 + 0x50) = auVar46._8_8_;
    func_0x032809c4((undefined8 *)(uVar34 + 0x50),auVar46._8_8_);
    *(long *)(uVar34 + 0x30) = lVar21;
    func_0x032809c4((long *)(uVar34 + 0x30),lVar21);
    return uVar34;
  }
  auVar47 = func_0x03280cac();
  uVar34 = auVar47._0_8_;
  *(undefined8 *)((long)ppcVar14 + -0x60) = 0x3d60878;
  *(ulong *)((long)ppcVar14 + -0x58) = uVar20;
  *(undefined8 *)((long)ppcVar14 + -0x50) = 0;
  *(undefined1 (*) [16])((long)ppcVar14 + -0x48) = auVar46;
  *(long *)((long)ppcVar14 + -0x38) = lVar21;
  plVar38 = *(long **)(lVar32 + 0x38);
  if (plVar38 == (long *)0x0) {
    func_0x03256878(lVar32);
    plVar38 = *(long **)(lVar32 + 0x38);
  }
  if ((*(byte *)(*plVar38 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar20 = func_0x03280ca0();
  puVar23 = *(undefined8 **)(*(long *)(lVar32 + 0x38) + 8);
  (*(code *)*puVar23)(uVar20,0xfffffffe);
  if (uVar20 != 0) {
    func_0x02f17738(uVar20,*(long *)(**(long **)(lVar32 + 0x38) + 0x80) + 0xc0,uVar34);
    func_0x02f17738(uVar20,*(long *)(**(long **)(lVar32 + 0x38) + 0x80) + 0x100,auVar47._8_8_);
    func_0x02f17738(uVar20,*(long *)(**(long **)(lVar32 + 0x38) + 0x80) + 0x80,uVar24);
    return uVar20;
  }
  auVar46 = func_0x03280cac();
  lVar21 = auVar46._8_8_;
  plVar38 = auVar46._0_8_;
  *(undefined8 *)((long)ppcVar14 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)ppcVar14 + -0x88) = 0;
  *(undefined1 (*) [16])((long)ppcVar14 + -0x80) = auVar47;
  *(long *)((long)ppcVar14 + -0x70) = lVar32;
  *(undefined8 *)((long)ppcVar14 + -0x68) = uVar24;
  puVar29 = puVar23;
  if (puVar23[7] == 0) {
    func_0x03256878(puVar23);
  }
  puVar28 = PTR_DAT_07774b08;
  if ((plVar38 == (long *)0x0) || (puVar28 = PTR_DAT_077799b8, lVar21 == 0)) {
    uVar24 = func_0x03280a2c(puVar28);
    uVar24 = func_0x05ac7464(uVar24,0);
    func_0x03280b7c(uVar24,puVar23);
LAB_03d60c04:
    func_0x03281048(plVar38);
    lVar32 = 0;
  }
  else {
    lVar32 = *(long *)(puVar23[7] + 0x10);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c();
    }
    lVar36 = *plVar38;
    bVar1 = *(byte *)(lVar36 + 0x130);
    if ((*(byte *)(lVar32 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar36 + 200) + (ulong)*(byte *)(lVar32 + 0x130) * 8 + -8) == lVar32)) {
      lVar32 = *(long *)(puVar23[7] + 0x10);
      if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = func_0x0325681c(lVar32);
        lVar36 = *plVar38;
        bVar1 = *(byte *)(lVar36 + 0x130);
      }
      if ((*(byte *)(lVar32 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar36 + 200) + (ulong)*(byte *)(lVar32 + 0x130) * 8 + -8) == lVar32))
      {
        lVar32 = *(long *)(puVar23[7] + 0x10);
        if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = func_0x0325681c(lVar32);
          lVar36 = *plVar38;
          bVar1 = *(byte *)(lVar36 + 0x130);
        }
        if ((*(byte *)(lVar32 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar36 + 200) + (ulong)*(byte *)(lVar32 + 0x130) * 8 + -8) == lVar32
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar20 = (**(code **)(lVar36 + 0x228))(plVar38,lVar21,*(undefined8 *)(lVar36 + 0x230));
          return uVar20;
        }
      }
      goto LAB_03d60c04;
    }
    lVar32 = *(long *)(puVar23[7] + 0x20);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c(lVar32);
    }
    lVar32 = func_0x03280b90(plVar38,lVar32);
    if (lVar32 == 0) {
      lVar32 = *(long *)(puVar23[7] + 0x38);
      if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar38 + 0x130) < *(byte *)(lVar32 + 0x130)) ||
         (*(long *)(*(long *)(*plVar38 + 200) + (ulong)*(byte *)(lVar32 + 0x130) * 8 + -8) != lVar32
         )) {
        if ((*(byte *)(*(long *)(puVar23[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar20 = func_0x03280ca0();
        func_0x04b68fa4(uVar20,plVar38,lVar21,*(undefined8 *)(puVar23[7] + 0x58));
        return uVar20;
      }
      if ((*(byte *)(*(long *)(puVar23[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar34 = func_0x03280ca0();
      lVar32 = *(long *)(puVar23[7] + 0x38);
      if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = func_0x0325681c(lVar32);
      }
      if ((*(byte *)(lVar32 + 0x130) <= *(byte *)(*plVar38 + 0x130)) &&
         (*(long *)(*(long *)(*plVar38 + 200) + (ulong)*(byte *)(lVar32 + 0x130) * 8 + -8) == lVar32
         )) {
        func_0x04b713b0(uVar34,plVar38,lVar21,*(undefined8 *)(puVar23[7] + 0x48));
        return uVar34;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar23[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar34 = func_0x03280ca0();
    lVar32 = *(long *)(puVar23[7] + 0x20);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c(lVar32);
    }
    lVar36 = func_0x03280b90(plVar38,lVar32);
    if (lVar36 != 0) {
      func_0x04b66610(uVar34,lVar36,lVar21,*(undefined8 *)(puVar23[7] + 0x30));
      return uVar34;
    }
  }
  auVar47 = func_0x03281048(plVar38,lVar32);
  lVar21 = auVar47._8_8_;
  plVar38 = auVar47._0_8_;
  *(undefined8 *)((long)ppcVar14 + -0xc0) = 0x3d60c18;
  *(long *)((long)ppcVar14 + -0xb8) = lVar32;
  *(ulong *)((long)ppcVar14 + -0xb0) = uVar34;
  *(undefined8 **)((long)ppcVar14 + -0xa8) = puVar23;
  *(undefined1 (*) [16])((long)ppcVar14 + -0xa0) = auVar46;
  if (puVar29[7] == 0) {
    func_0x03256878(puVar29);
  }
  puVar28 = PTR_DAT_07774b08;
  if ((plVar38 == (long *)0x0) || (puVar28 = PTR_DAT_077799b8, lVar21 == 0)) {
    uVar24 = func_0x03280a2c(puVar28);
    uVar24 = func_0x05ac7464(uVar24,0);
    func_0x03280b7c(uVar24,puVar29);
  }
  else {
    lVar36 = *(long *)(puVar29[7] + 0x10);
    if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
      lVar36 = func_0x0325681c();
    }
    lVar30 = *plVar38;
    bVar1 = *(byte *)(lVar30 + 0x130);
    if ((bVar1 < *(byte *)(lVar36 + 0x130)) ||
       (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar36 + 0x130) * 8 + -8) != lVar36)) {
      lVar36 = *(long *)(puVar29[7] + 0x20);
      if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
        lVar36 = func_0x0325681c(lVar36);
      }
      lVar36 = func_0x03280b90(plVar38,lVar36);
      if (lVar36 != 0) {
        if ((*(byte *)(*(long *)(puVar29[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar20 = func_0x03280ca0();
        lVar32 = *(long *)(puVar29[7] + 0x20);
        if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = func_0x0325681c(lVar32);
        }
        lVar36 = func_0x03280b90(plVar38,lVar32);
        if (lVar36 != 0) {
          func_0x04b667e0(uVar20,lVar36,lVar21,*(undefined8 *)(puVar29[7] + 0x30));
          return uVar20;
        }
        goto LAB_03d60ee0;
      }
      lVar36 = *(long *)(puVar29[7] + 0x38);
      if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
        lVar36 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar38 + 0x130) < *(byte *)(lVar36 + 0x130)) ||
         (*(long *)(*(long *)(*plVar38 + 200) + (ulong)*(byte *)(lVar36 + 0x130) * 8 + -8) != lVar36
         )) {
        if ((*(byte *)(*(long *)(puVar29[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar20 = func_0x03280ca0();
        func_0x04b693d0(uVar20,plVar38,lVar21,*(undefined8 *)(puVar29[7] + 0x58));
        return uVar20;
      }
      if ((*(byte *)(*(long *)(puVar29[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar20 = func_0x03280ca0();
      lVar36 = *(long *)(puVar29[7] + 0x38);
      if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
        lVar36 = func_0x0325681c(lVar36);
      }
      if ((*(byte *)(lVar36 + 0x130) <= *(byte *)(*plVar38 + 0x130)) &&
         (*(long *)(*(long *)(*plVar38 + 200) + (ulong)*(byte *)(lVar36 + 0x130) * 8 + -8) == lVar36
         )) {
        func_0x04b715c8(uVar20,plVar38,lVar21,*(undefined8 *)(puVar29[7] + 0x48));
        return uVar20;
      }
    }
    else {
      lVar36 = *(long *)(puVar29[7] + 0x10);
      if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
        lVar36 = func_0x0325681c(lVar36);
        lVar30 = *plVar38;
        bVar1 = *(byte *)(lVar30 + 0x130);
      }
      if ((*(byte *)(lVar36 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar36 + 0x130) * 8 + -8) == lVar36))
      {
        lVar36 = *(long *)(puVar29[7] + 0x10);
        if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
          lVar36 = func_0x0325681c(lVar36);
          lVar30 = *plVar38;
          bVar1 = *(byte *)(lVar30 + 0x130);
        }
        if ((*(byte *)(lVar36 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar36 + 0x130) * 8 + -8) == lVar36
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar20 = (**(code **)(lVar30 + 0x228))(plVar38,lVar21,*(undefined8 *)(lVar30 + 0x230));
          return uVar20;
        }
      }
    }
  }
  func_0x03281048(plVar38);
LAB_03d60ee0:
  lVar21 = func_0x03281048(plVar38,lVar32);
  *(undefined8 *)((long)ppcVar14 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)ppcVar14 + -0xd0) = auVar47;
  lVar32 = *(long *)(lVar21 + 0x20);
  if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = func_0x0325681c();
  }
  lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
  if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = func_0x0325681c();
  }
  uVar20 = **(ulong **)(lVar32 + 0xb8);
  func_0x03280ab0();
  if (uVar20 == 0) {
    lVar32 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c();
    }
    uVar20 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar32 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar32 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c();
    }
    lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c();
    }
    **(ulong **)(lVar32 + 0xb8) = uVar20;
    lVar21 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar21 + 0xb8),uVar20);
  }
  return uVar20;
LAB_05ac8008:
  lVar21 = 0;
  do {
    if (plVar38 != (long *)0x0) {
      lVar32 = *plVar38;
      uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar33 != 0) {
        piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == *plVar19) {
            puVar23 = (undefined8 *)(lVar32 + (long)*piVar35 * 0x10 + 0x138);
            goto LAB_05ac805c;
          }
          uVar33 = uVar33 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar33 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar38,*plVar19,0);
LAB_05ac805c:
      (*(code *)*puVar23)(plVar38,puVar23[1]);
    }
    if (lVar21 == 0) {
      if ((int)uVar34 != 0) {
        return uVar20;
      }
    }
    else {
LAB_05ac80a0:
      func_0x03280ca4(lVar21);
    }
    plVar38 = (long *)func_0x05ac75f4();
LAB_05ac80ac:
    uVar24 = func_0x03280a2c(PTR_DAT_077a5838);
    auVar48 = func_0x03280b7c(plVar38,uVar24);
    uVar24 = auVar48._0_8_;
    uVar20 = 0;
    uVar34 = (ulong)(plVar38 != (long *)0x0);
    if (auVar48._8_4_ != 1) break;
    plVar22 = (long *)func_0x072ce910(uVar24);
    lVar21 = *plVar22;
    func_0x072ce920();
  } while( true );
  lVar21 = 0;
  if (plVar38 != (long *)0x0) {
    lVar32 = *plVar38;
    uVar20 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar20 != 0) {
      piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == *plVar19) {
          puVar23 = (undefined8 *)(lVar32 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_05ac815c;
        }
        uVar20 = uVar20 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar20 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar38,*plVar19,0);
LAB_05ac815c:
    (*(code *)*puVar23)(plVar38,puVar23[1]);
  }
  func_0x03365958(uVar24);
  func_0x03280ca4(0);
  plVar22 = (long *)func_0x02f09514();
  lStack_160 = 0x5ac8180;
  uStack_138 = 0;
  lStack_130 = 0;
  plStack_150 = plVar19;
  uStack_148 = uVar34;
  uStack_140 = uVar24;
  plStack_128 = plVar38;
  if ((bRam0000000007e1fbe4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077617f0);
    func_0x03280a18(PTR_DAT_077617f8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e1fbe4 = 1;
  }
  if (plVar22 == (long *)0x0) {
    func_0x03280a2c(PTR_DAT_07774b08);
    plVar38 = (long *)func_0x05ac7464();
    goto LAB_05ac83d4;
  }
  lVar32 = *plVar22;
  uVar20 = (ulong)*(ushort *)(lVar32 + 0x12e);
  if (uVar20 != 0) {
    piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
    do {
      if (*(long *)(piVar35 + -2) == *(long *)PTR_DAT_077617f0) {
        puVar23 = (undefined8 *)(lVar32 + (long)*piVar35 * 0x10 + 0x138);
        goto LAB_05ac8230;
      }
      uVar20 = uVar20 - 1;
      piVar35 = piVar35 + 4;
    } while (uVar20 != 0);
  }
  puVar23 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_077617f0,0);
LAB_05ac8230:
  plVar19 = (long *)PTR_DAT_0774e8c8;
  plVar38 = (long *)(*(code *)*puVar23)(plVar22,puVar23[1]);
  puVar41 = PTR_DAT_077617f8;
  puVar28 = PTR_DAT_0774e8e0;
  if (plVar38 == (long *)0x0) {
    func_0x03280cac();
    goto LAB_05ac83c8;
  }
  uVar20 = 0;
  uVar34 = 0;
  do {
    lVar21 = *plVar38;
    uVar33 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar33 != 0) {
      piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == *(long *)puVar28) {
          puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_05ac82b0;
        }
        uVar33 = uVar33 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar33 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar38,*(long *)puVar28,0);
LAB_05ac82b0:
    uVar33 = (*(code *)*puVar23)(plVar38,puVar23[1]);
    if ((uVar33 & 1) == 0) break;
    lVar21 = *plVar38;
    uVar33 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar33 != 0) {
      piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == *(long *)puVar41) {
          puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_05ac830c;
        }
        uVar33 = uVar33 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar33 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar38,*(long *)puVar41,0);
LAB_05ac830c:
    uVar16 = (*(code *)*puVar23)(plVar38,puVar23[1]);
    uVar2 = uVar16;
    if ((int)uVar16 <= (int)(uint)uVar20) {
      uVar2 = (uint)uVar20;
    }
    if ((int)uVar34 == 0) {
      uVar2 = uVar16;
    }
    uVar20 = (ulong)uVar2;
    uVar34 = 1;
  } while( true );
  lVar21 = 0;
  do {
    if (plVar38 != (long *)0x0) {
      lVar32 = *plVar38;
      uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar33 != 0) {
        piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == *plVar19) {
            puVar23 = (undefined8 *)(lVar32 + (long)*piVar35 * 0x10 + 0x138);
            goto LAB_05ac8384;
          }
          uVar33 = uVar33 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar33 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar38,*plVar19,0);
LAB_05ac8384:
      (*(code *)*puVar23)(plVar38,puVar23[1]);
    }
    if (lVar21 == 0) {
      if ((int)uVar34 != 0) {
        return uVar20;
      }
    }
    else {
LAB_05ac83c8:
      func_0x03280ca4(lVar21);
    }
    plVar38 = (long *)func_0x05ac75f4();
LAB_05ac83d4:
    uVar24 = func_0x03280a2c(PTR_DAT_077a5840);
    auVar48 = func_0x03280b7c(plVar38,uVar24);
    plVar22 = auVar48._0_8_;
    uVar20 = 0;
    uVar34 = (ulong)(plVar38 != (long *)0x0);
    if (auVar48._8_4_ != 1) break;
    plVar22 = (long *)func_0x072ce910(plVar22);
    lVar21 = *plVar22;
    func_0x072ce920();
  } while( true );
  if (plVar38 != (long *)0x0) {
    lVar21 = *plVar38;
    uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar20 != 0) {
      piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == *plVar19) {
          puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_05ac8484;
        }
        uVar20 = uVar20 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar20 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar38,*plVar19,0);
LAB_05ac8484:
    (*(code *)*puVar23)(plVar38,puVar23[1]);
  }
  func_0x03365958(plVar22);
  func_0x03280ca4(0);
  plVar18 = (long *)func_0x02f09514();
  auStack_1b0._0_8_ = 0;
  puStack_1a0 = (undefined *)0x5ac84a8;
  lStack_178 = 0;
  plStack_170 = (long *)0x0;
  plStack_198 = unaff_x25;
  plStack_190 = plVar19;
  uStack_188 = uVar34;
  pcStack_180 = (code *)plVar22;
  plStack_168 = plVar38;
  if ((bRam0000000007e1fbe5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077a5820);
    func_0x03280a18(PTR_DAT_077a5828);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e1fbe5 = 1;
  }
  if (plVar18 == (long *)0x0) {
LAB_05ac8710:
    func_0x03280a2c(PTR_DAT_07774b08);
    plVar38 = (long *)func_0x05ac7464();
    goto LAB_05ac8730;
  }
  lVar21 = *plVar18;
  uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar20 != 0) {
    piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar35 + -2) == *(long *)PTR_DAT_077a5820) {
        puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
        goto LAB_05ac855c;
      }
      uVar20 = uVar20 - 1;
      piVar35 = piVar35 + 4;
    } while (uVar20 != 0);
  }
  puVar23 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077a5820,0);
LAB_05ac855c:
  puVar41 = PTR_DAT_077a5828;
  puVar28 = PTR_DAT_0774e8e0;
  plVar22 = (long *)PTR_DAT_0774e8c8;
  plVar38 = (long *)(*(code *)*puVar23)(plVar18,puVar23[1]);
  bVar11 = false;
  fVar44 = 0.0;
  do {
    fVar43 = fVar44;
    do {
      bVar3 = bVar11;
      if (plVar38 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_05ac8710;
      }
      lVar21 = *plVar38;
      uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar20 != 0) {
        piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == *(long *)puVar28) {
            puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
            goto LAB_05ac85f0;
          }
          uVar20 = uVar20 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar20 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar38,*(long *)puVar28,0);
LAB_05ac85f0:
      uVar20 = (*(code *)*puVar23)(plVar38,puVar23[1]);
      if ((uVar20 & 1) == 0) {
        lVar21 = 0;
        iVar15 = 9;
        goto joined_r0x05ac8680;
      }
      lVar21 = *plVar38;
      uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar20 != 0) {
        piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == *(long *)puVar41) {
            puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
            goto LAB_05ac864c;
          }
          uVar20 = uVar20 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar20 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar38,*(long *)puVar41,0);
LAB_05ac864c:
      fVar44 = (float)(*(code *)*puVar23)(plVar38,puVar23[1]);
      bVar11 = true;
    } while (((fVar44 <= fVar43) && ((ulong)ABS((double)fVar43) < 0x7ff0000000000001)) && (bVar3));
  } while( true );
joined_r0x05ac8680:
  if (plVar38 != (long *)0x0) {
    lVar32 = *plVar38;
    uVar20 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar20 != 0) {
      piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == *plVar22) {
          puVar23 = (undefined8 *)(lVar32 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_05ac86d0;
        }
        uVar20 = uVar20 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar20 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar38,*plVar22,0);
LAB_05ac86d0:
    uVar20 = (*(code *)*puVar23)(plVar38,puVar23[1]);
  }
  if (lVar21 == 0) {
    if (((iVar15 != 9) && (iVar15 != 0)) || (bVar3)) {
      return uVar20;
    }
  }
  else {
    func_0x03280ca4(lVar21);
  }
  plVar38 = (long *)func_0x05ac75f4();
LAB_05ac8730:
  uVar24 = func_0x03280a2c(PTR_DAT_077a5848);
  auVar48 = func_0x03280b7c(plVar38,uVar24);
  auStack_1b0._8_8_ = auVar48._0_8_;
  bVar3 = false;
  if (auVar48._8_4_ != 1) goto LAB_05ac878c;
  plVar19 = (long *)func_0x072ce910();
  lVar21 = *plVar19;
  uVar20 = func_0x072ce920();
  iVar15 = 0;
  goto joined_r0x05ac8680;
LAB_05ac878c:
  if (plVar38 != (long *)0x0) {
    lVar21 = *plVar38;
    uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar20 != 0) {
      piVar35 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == *plVar22) {
          puVar23 = (undefined8 *)(lVar21 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_05ac87dc;
        }
        uVar20 = uVar20 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar20 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar38,*plVar22,0);
LAB_05ac87dc:
    (*(code *)*puVar23)(plVar38,puVar23[1]);
  }
  func_0x03365958(auStack_1b0._8_8_);
  func_0x03280ca4(0);
  uVar20 = func_0x02f09514();
  return uVar20;
}

