/* Ghidra 12.1.2 native pseudocode; RVA 0x6A83470; Merger.MergeBoard.Logic.ToolSpawnHandler.Initialize; status ok */


/* WARNING: Possible PIC construction at 0x06b837d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b83c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b83cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b83c40) */
/* WARNING: Removing unreachable block (ram,0x06b83c48) */
/* WARNING: Removing unreachable block (ram,0x06b83cd8) */
/* WARNING: Removing unreachable block (ram,0x06b83c68) */
/* WARNING: Removing unreachable block (ram,0x06b83c90) */
/* WARNING: Removing unreachable block (ram,0x06b83ca0) */
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
/* WARNING: Removing unreachable block (ram,0x06b83cb0) */
/* WARNING: Removing unreachable block (ram,0x06b83cb4) */

ulong Merger_MergeBoard_Logic_ToolSpawnHandler__Initialize
                (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
  undefined *puVar11;
  bool bVar12;
  long **pplVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  int iVar16;
  long *plVar18;
  uint uVar17;
  ulong *puVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  int extraout_w1;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  int *piVar34;
  long *plVar35;
  long lVar36;
  undefined *puVar37;
  long lVar38;
  undefined8 uVar39;
  ulong uVar40;
  undefined *puVar41;
  undefined *unaff_x25;
  undefined *puVar42;
  undefined *unaff_x26;
  undefined *puVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [12];
  undefined8 auStack_300 [2];
  undefined1 auStack_2f0 [16];
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long *plStack_2c0;
  undefined1 auStack_2b8 [16];
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [16];
  long lStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [16];
  long lStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 auStack_230 [16];
  long *plStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [16];
  undefined *puStack_200;
  undefined *puStack_1f8;
  long *plStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long *plStack_160;
  long lStack_158;
  ulong uStack_150;
  long *plStack_148;
  undefined *puStack_108;
  
  puVar25 = PTR_DAT_077bf888;
  if ((bRam0000000007e2a773 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff58);
    func_0x03280a18(PTR_DAT_0777ff60);
    func_0x03280a18(PTR_DAT_077730f8);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_077bf888);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e2a773 = 1;
  }
  uVar21 = *(ulong *)puVar25;
  if (*(int *)(uVar21 + 0xe0) == 0) {
    func_0x03280b8c();
    uVar21 = *(ulong *)puVar25;
  }
  puVar6 = PTR_DAT_0777ff60;
  puVar5 = PTR_DAT_0777ff58;
  puVar37 = PTR_DAT_07779818;
  puVar43 = PTR_DAT_077730f8;
  puVar25 = PTR_DAT_077730b8;
  lVar38 = **(long **)(uVar21 + 0xb8);
  uVar29 = param_3;
  if (lVar38 != 0) {
    if (0 < (int)*(ulong *)(lVar38 + 0x18)) {
      uVar40 = 0;
      uVar32 = *(ulong *)(lVar38 + 0x18) & 0xffffffff;
      do {
        uVar29 = param_3;
        if (uVar32 <= uVar40) goto LAB_06b836a8;
        uVar21 = (ulong)*(uint *)(lVar38 + uVar40 * 4 + 0x20);
        plVar35 = *(long **)(param_1 + 0x28);
        if (*(int *)(*(long *)puVar25 + 0xe0) == 0) {
          func_0x03280b8c();
          uVar29 = param_3;
        }
        plVar22 = (long *)func_0x0624cb20(uVar21,0);
        unaff_x25 = puVar25;
        unaff_x26 = puVar37;
        if (plVar22 == (long *)0x0) goto LAB_06b836a4;
        lVar33 = *plVar22;
        uVar32 = (ulong)*(ushort *)(lVar33 + 0x12e);
        if (uVar32 != 0) {
          piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)puVar37) {
              puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_06b835d0;
            }
            uVar32 = uVar32 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar32 != 0);
        }
        uVar29 = 0;
        puVar23 = (undefined8 *)func_0x03256b10(plVar22);
LAB_06b835d0:
        uVar24 = (*(code *)*puVar23)(plVar22,puVar23[1]);
        if (plVar35 == (long *)0x0) goto LAB_06b836a4;
        lVar33 = *plVar35;
        uVar29 = (ulong)*(ushort *)(lVar33 + 0x12e);
        if (uVar29 != 0) {
          piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)puVar43) {
              puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_06b83630;
            }
            uVar29 = uVar29 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar29 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar35,*(long *)puVar43,0);
LAB_06b83630:
        uVar29 = puVar23[1];
        param_3 = (*(code *)*puVar23)(plVar35,uVar24);
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_06b836a4;
        param_4 = *(undefined8 *)puVar5;
        uVar29 = uVar21;
        func_0x04fb5c58(*(long *)(param_1 + 0x70),param_3);
        if (*(long *)(param_1 + 0x78) == 0) goto LAB_06b836a4;
        param_4 = *(undefined8 *)puVar6;
        uVar21 = func_0x04f61ea4(*(long *)(param_1 + 0x78),uVar21);
        uVar32 = (ulong)*(uint *)(lVar38 + 0x18);
        uVar40 = uVar40 + 1;
      } while ((long)uVar40 < (long)(int)*(uint *)(lVar38 + 0x18));
    }
    return uVar21;
  }
LAB_06b836a4:
  puVar37 = unaff_x26;
  puVar25 = unaff_x25;
  func_0x03280cac();
LAB_06b836a8:
  lVar38 = func_0x03280cb4();
  puVar43 = PTR_DAT_07831b68;
  plVar22 = (long *)PTR_DAT_07831b60;
  plVar35 = (long *)PTR_DAT_077bf888;
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
  uVar21 = func_0x03280ca0(*plVar22);
  func_0x04f610a8(uVar21,*(undefined8 *)puVar43);
  lVar33 = *plVar35;
  if (*(int *)(lVar33 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar33 = *plVar35;
  }
  lVar33 = **(long **)(lVar33 + 0xb8);
  if (lVar33 == 0) {
LAB_06b838e4:
    func_0x03280cac();
LAB_06b838e8:
    auVar47 = func_0x03280cb4();
  }
  else {
    if ((int)*(ulong *)(lVar33 + 0x18) < 1) {
      return uVar21;
    }
    if ((*(ulong *)(lVar33 + 0x18) & 0xffffffff) == 0) goto LAB_06b838e8;
    if (*(long *)(lVar38 + 0x78) == 0) goto LAB_06b838e4;
    plVar35 = (long *)(ulong)*(uint *)(lVar33 + 0x20);
    uVar29 = *(ulong *)PTR_DAT_07810720;
    puVar25 = (undefined *)func_0x04f61e04(*(long *)(lVar38 + 0x78),plVar35);
    auVar47._8_8_ = puVar25;
    auVar47._0_8_ = lVar38;
  }
  plVar18 = auVar47._8_8_;
  uVar24 = auVar47._0_8_;
  if ((bRam0000000007e2a77d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    uVar24 = func_0x03280a18(PTR_DAT_0777e508);
    bRam0000000007e2a77d = 1;
  }
  if (plVar18 != (long *)0x0) {
    lVar38 = *plVar18;
    uVar40 = (ulong)*(ushort *)(lVar38 + 0x12e);
    if (uVar40 != 0) {
      piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_0777c248) {
          puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_06b8397c;
        }
        uVar40 = uVar40 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar40 != 0);
    }
    uVar29 = 0;
    puVar23 = (undefined8 *)func_0x03256b10(plVar18);
LAB_06b8397c:
    lVar38 = (*(code *)*puVar23)(plVar18,puVar23[1]);
    uVar24 = 0;
    if (lVar38 != 0) {
      return (ulong)(uint)(1 << (ulong)(*(int *)(lVar38 + 0x18) - 1U & 0x1f));
    }
  }
  auVar47 = func_0x03280cac(uVar24);
  puVar43 = PTR_DAT_07831b80;
  uVar24 = auVar47._8_8_;
  plVar18 = auVar47._0_8_;
  puStack_108 = (undefined *)0x7e2a000;
  uVar40 = uVar29;
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
  lVar38 = func_0x03280ca0(*(undefined8 *)puVar43);
  func_0x06b84e28(lVar38,0);
  puVar11 = PTR_DAT_07831ba0;
  puVar10 = PTR_DAT_07831b98;
  puVar9 = PTR_DAT_07785d18;
  puVar8 = PTR_DAT_07785d10;
  puVar7 = PTR_DAT_07785d08;
  puVar6 = PTR_DAT_0776e5a8;
  puVar5 = PTR_DAT_0776e590;
  puVar41 = (undefined *)plVar22;
  puVar42 = puVar25;
  if (lVar38 != 0) {
    *(undefined8 *)(lVar38 + 0x10) = uVar24;
    func_0x032809c4((undefined8 *)(lVar38 + 0x10),uVar24);
    *(long *)(lVar38 + 0x18) = (long)plVar18;
    func_0x032809c4((long *)(lVar38 + 0x18),plVar18);
    uVar24 = func_0x03280ca0(*(undefined8 *)puVar6);
    func_0x05355fbc(uVar24,lVar38,*(undefined8 *)puVar10,0);
    uVar26 = func_0x03d872a8(uVar29,uVar24,*(undefined8 *)puVar5);
    uVar24 = func_0x03280ca0(*(undefined8 *)puVar9);
    param_4 = 0;
    func_0x05356664(uVar24,lVar38,*(undefined8 *)puVar11);
    uVar40 = *(ulong *)puVar7;
    uVar26 = func_0x03d504ac(uVar26,uVar24);
    uVar29 = func_0x03d5b7c8(uVar26,*(undefined8 *)puVar8);
    uVar32 = func_0x03ce7ea0(uVar29,*(undefined8 *)PTR_DAT_07831b88);
    if ((uVar32 & 1) != 0) {
      return 0;
    }
    uVar26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a6e80);
    puVar43 = puVar8;
    puVar41 = puVar6;
    puVar42 = puVar10;
    puVar37 = puVar5;
    if (plVar18 != (long *)0x0) {
      func_0x05353e8c(uVar26,plVar18,*(undefined8 *)(*plVar18 + 0x280),0);
      lVar38 = *(long *)PTR_DAT_07831b90;
      lVar33 = *(long *)(lVar38 + 0x38);
      if (lVar33 == 0) {
        func_0x03256878(lVar38);
        lVar33 = *(long *)(lVar38 + 0x38);
      }
      plVar18 = (long *)func_0x03d4ea18(uVar29,uVar26,*(undefined8 *)(lVar33 + 0x10));
      if ((bRam0000000007e1fbe1 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077a5818,0);
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_077617f0);
        func_0x03280a18(PTR_DAT_077617f8);
        func_0x03280a18(PTR_DAT_0774e8e0);
        bRam0000000007e1fbe1 = 1;
      }
      if (plVar18 == (long *)0x0) {
        func_0x03280a2c(PTR_DAT_07774b08);
        plVar18 = (long *)func_0x05ac7464();
        uVar24 = func_0x03280a2c(PTR_DAT_077a5818);
        func_0x03280b7c(plVar18,uVar24);
      }
      else {
        lVar38 = *plVar18;
        uVar29 = (ulong)*(ushort *)(lVar38 + 0x12e);
        if (uVar29 != 0) {
          piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077617f0) {
              puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac78d8;
            }
            uVar29 = uVar29 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar29 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077617f0,0);
LAB_05ac78d8:
        plVar35 = (long *)PTR_DAT_0774e8c8;
        plVar18 = (long *)(*(code *)*puVar23)(plVar18,puVar23[1]);
        puVar37 = PTR_DAT_077617f8;
        puVar43 = PTR_DAT_0774e8e0;
        if (plVar18 != (long *)0x0) {
          uVar2 = 0;
          do {
            uVar17 = uVar2;
            lVar38 = *plVar18;
            uVar21 = (ulong)*(ushort *)(lVar38 + 0x12e);
            if (uVar21 != 0) {
              piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar43) {
                  puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac7958;
                }
                uVar21 = uVar21 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar21 != 0);
            }
            puVar23 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar43,0);
LAB_05ac7958:
            uVar21 = (*(code *)*puVar23)(plVar18,puVar23[1]);
            if ((uVar21 & 1) == 0) goto LAB_05ac79e0;
            lVar38 = *plVar18;
            uVar21 = (ulong)*(ushort *)(lVar38 + 0x12e);
            if (uVar21 != 0) {
              piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar37) {
                  puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac79b4;
                }
                uVar21 = uVar21 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar21 != 0);
            }
            puVar23 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar37,0);
LAB_05ac79b4:
            iVar16 = (*(code *)*puVar23)(plVar18,puVar23[1]);
            uVar2 = iVar16 + uVar17;
          } while (!SCARRY4(uVar17,iVar16));
          uVar24 = func_0x03280cbc();
          func_0x03280b7c(uVar24,*(undefined8 *)PTR_DAT_077a5818);
LAB_05ac79e0:
          uVar21 = 0;
          goto LAB_05ac79e4;
        }
      }
      func_0x03280cac();
      puVar37 = puStack_108;
      while( true ) {
        auVar50 = func_0x03280ca4(uVar21);
        uVar17 = 0;
        if (auVar50._8_4_ != 1) break;
        puVar19 = (ulong *)func_0x072ce910();
        uVar21 = *puVar19;
        func_0x072ce920();
LAB_05ac79e4:
        if (plVar18 != (long *)0x0) {
          lVar38 = *plVar18;
          uVar29 = (ulong)*(ushort *)(lVar38 + 0x12e);
          if (uVar29 != 0) {
            piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
            do {
              if (*(long *)(piVar34 + -2) == *plVar35) {
                puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
                goto LAB_05ac7a34;
              }
              uVar29 = uVar29 - 1;
              piVar34 = piVar34 + 4;
            } while (uVar29 != 0);
          }
          puVar23 = (undefined8 *)func_0x03256b10(plVar18,*plVar35,0);
LAB_05ac7a34:
          (*(code *)*puVar23)(plVar18,puVar23[1]);
        }
        if (uVar21 == 0) {
          return (ulong)uVar17;
        }
      }
      if (plVar18 != (long *)0x0) {
        lVar38 = *plVar18;
        uVar21 = (ulong)*(ushort *)(lVar38 + 0x12e);
        if (uVar21 != 0) {
          piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *plVar35) {
              puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7b18;
            }
            uVar21 = uVar21 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar21 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar18,*plVar35,0);
LAB_05ac7b18:
        (*(code *)*puVar23)(plVar18,puVar23[1]);
      }
      func_0x03365958(auVar50._0_8_);
      func_0x03280ca4(0);
      plVar18 = (long *)func_0x02f09514();
      lVar38 = 0x7e1f000;
      if ((bRam0000000007e1fbe2 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_077a5820);
        func_0x03280a18(PTR_DAT_077a5828);
        func_0x03280a18(PTR_DAT_0774e8e0);
        bRam0000000007e1fbe2 = 1;
      }
      if (plVar18 == (long *)0x0) {
        func_0x03280a2c(PTR_DAT_07774b08);
        plVar18 = (long *)func_0x05ac7464();
        uVar24 = func_0x03280a2c(PTR_DAT_077a5830);
        func_0x03280b7c(plVar18,uVar24);
      }
      else {
        lVar33 = *plVar18;
        uVar21 = (ulong)*(ushort *)(lVar33 + 0x12e);
        if (uVar21 != 0) {
          piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077a5820) {
              puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7bec;
            }
            uVar21 = uVar21 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar21 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077a5820,0);
LAB_05ac7bec:
        plVar35 = (long *)PTR_DAT_0774e8c8;
        plVar18 = (long *)(*(code *)*puVar23)(plVar18,puVar23[1]);
        puVar5 = PTR_DAT_077a5828;
        puVar43 = PTR_DAT_0774e8e0;
        if (plVar18 != (long *)0x0) {
          do {
            lVar38 = *plVar18;
            uVar21 = (ulong)*(ushort *)(lVar38 + 0x12e);
            if (uVar21 != 0) {
              piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar43) {
                  puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac7c68;
                }
                uVar21 = uVar21 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar21 != 0);
            }
            puVar23 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar43,0);
LAB_05ac7c68:
            uVar21 = (*(code *)*puVar23)(plVar18,puVar23[1]);
            if ((uVar21 & 1) == 0) {
              lVar38 = 0;
              if (plVar18 == (long *)0x0) goto LAB_05ac7d40;
              goto LAB_05ac7ce8;
            }
            lVar38 = *plVar18;
            uVar21 = (ulong)*(ushort *)(lVar38 + 0x12e);
            if (uVar21 != 0) {
              piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == *(long *)puVar5) {
                  puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
                  goto LAB_05ac7cc4;
                }
                uVar21 = uVar21 - 1;
                piVar34 = piVar34 + 4;
              } while (uVar21 != 0);
            }
            puVar23 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar5,0);
LAB_05ac7cc4:
            (*(code *)*puVar23)(plVar18,puVar23[1]);
          } while( true );
        }
      }
      func_0x03280cac();
      while( true ) {
        auVar50 = func_0x03280ca4(lVar38);
        lVar38 = auVar50._0_8_;
        if (auVar50._8_4_ != 1) break;
        plVar20 = (long *)func_0x072ce910(lVar38);
        lVar38 = *plVar20;
        uVar21 = func_0x072ce920();
        if (plVar18 != (long *)0x0) {
LAB_05ac7ce8:
          lVar33 = *plVar18;
          uVar21 = (ulong)*(ushort *)(lVar33 + 0x12e);
          if (uVar21 != 0) {
            piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
            do {
              if (*(long *)(piVar34 + -2) == *plVar35) {
                puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
                goto LAB_05ac7d34;
              }
              uVar21 = uVar21 - 1;
              piVar34 = piVar34 + 4;
            } while (uVar21 != 0);
          }
          puVar23 = (undefined8 *)func_0x03256b10(plVar18,*plVar35,0);
LAB_05ac7d34:
          uVar21 = (*(code *)*puVar23)(plVar18,puVar23[1]);
        }
LAB_05ac7d40:
        if (lVar38 == 0) {
          return uVar21;
        }
      }
      if (plVar18 != (long *)0x0) {
        lVar33 = *plVar18;
        uVar21 = (ulong)*(ushort *)(lVar33 + 0x12e);
        if (uVar21 != 0) {
          piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *plVar35) {
              puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7e34;
            }
            uVar21 = uVar21 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar21 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar18,*plVar35,0);
LAB_05ac7e34:
        (*(code *)*puVar23)(plVar18,puVar23[1]);
      }
      func_0x03365958(lVar38);
      func_0x03280ca4(0);
      plVar20 = (long *)func_0x02f09514();
      uStack_180 = 0x5ac7e58;
      puStack_170 = (undefined *)plVar22;
      uStack_150 = 0;
      puStack_168 = puVar37;
      plStack_160 = plVar35;
      lStack_158 = lVar38;
      plStack_148 = plVar18;
      if ((bRam0000000007e1fbe3 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_077617f0);
        func_0x03280a18(PTR_DAT_077617f8);
        func_0x03280a18(PTR_DAT_0774e8e0);
        bRam0000000007e1fbe3 = 1;
      }
      if (plVar20 == (long *)0x0) {
        func_0x03280a2c(PTR_DAT_07774b08);
        plVar35 = (long *)func_0x05ac7464();
        goto LAB_05ac80ac;
      }
      lVar33 = *plVar20;
      uVar21 = (ulong)*(ushort *)(lVar33 + 0x12e);
      if (uVar21 != 0) {
        piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077617f0) {
            puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac7f08;
          }
          uVar21 = uVar21 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar21 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_077617f0,0);
LAB_05ac7f08:
      plVar22 = (long *)PTR_DAT_0774e8c8;
      plVar35 = (long *)(*(code *)*puVar23)(plVar20,puVar23[1]);
      puVar37 = PTR_DAT_077617f8;
      puVar43 = PTR_DAT_0774e8e0;
      if (plVar35 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_05ac80a0;
      }
      uVar21 = 0;
      uVar29 = 0;
      do {
        lVar38 = *plVar35;
        uVar40 = (ulong)*(ushort *)(lVar38 + 0x12e);
        if (uVar40 != 0) {
          piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)puVar43) {
              puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7f88;
            }
            uVar40 = uVar40 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar40 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar35,*(long *)puVar43,0);
LAB_05ac7f88:
        uVar40 = (*(code *)*puVar23)(plVar35,puVar23[1]);
        if ((uVar40 & 1) == 0) goto LAB_05ac8008;
        lVar38 = *plVar35;
        uVar40 = (ulong)*(ushort *)(lVar38 + 0x12e);
        if (uVar40 != 0) {
          piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)puVar37) {
              puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_05ac7fe4;
            }
            uVar40 = uVar40 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar40 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar35,*(long *)puVar37,0);
LAB_05ac7fe4:
        uVar17 = (*(code *)*puVar23)(plVar35,puVar23[1]);
        uVar2 = uVar17;
        if ((int)(uint)uVar21 <= (int)uVar17) {
          uVar2 = (uint)uVar21;
        }
        if ((int)uVar29 == 0) {
          uVar2 = uVar17;
        }
        uVar21 = (ulong)uVar2;
        uVar29 = 1;
      } while( true );
    }
  }
  auVar48 = func_0x03280cac();
  uVar26 = auVar48._8_8_;
  lVar33 = auVar48._0_8_;
  puStack_170 = (undefined *)0x6b83be0;
  uVar39 = 0x7e2a000;
  puStack_168 = puVar43;
  plStack_160 = (long *)lVar38;
  lStack_158 = uVar24;
  uStack_150 = uVar29;
  plStack_148 = plVar18;
  if ((bRam0000000007e2a775 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831ba8);
    func_0x03280a18(PTR_DAT_07810720);
    bRam0000000007e2a775 = 1;
  }
  puVar25 = PTR_DAT_07831bb0;
  uStack_178 = 0;
  lStack_1c0 = 0x6b83c40;
  uStack_1a8 = 0x7e2a000;
  puStack_1b8 = puVar42;
  plStack_1b0 = (long *)puVar41;
  uStack_1a0 = uVar40;
  plStack_188 = (long *)param_4;
  if ((bRam0000000007e2a776 & 1) == 0) {
    uStack_198 = uVar26;
    lStack_190 = lVar33;
    func_0x03280a18(PTR_DAT_077800c0);
    func_0x03280a18(PTR_DAT_077800c8);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_07831bb8);
    func_0x03280a18(PTR_DAT_07831bc0);
    func_0x03280a18(PTR_DAT_07831bb0);
    func_0x03280a18(PTR_DAT_077800d8);
    func_0x03280a18(PTR_DAT_077800e0);
    auVar48._8_8_ = uStack_198;
    auVar48._0_8_ = lStack_190;
    bRam0000000007e2a776 = 1;
  }
  uStack_198 = auVar48._8_8_;
  lStack_190 = auVar48._0_8_;
  uVar24 = func_0x06b8434c(lVar33,uVar40,uVar26);
  uVar26 = func_0x06b843fc(lVar33,uVar26);
  func_0x06b84674(lVar33,uVar24,uVar26);
  lVar38 = *(long *)puVar25;
  if (*(int *)(lVar38 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar38 = *(long *)puVar25;
  }
  lVar36 = *(long *)(*(long *)(lVar38 + 0xb8) + 8);
  if (lVar36 == 0) {
    if (*(int *)(lVar38 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar38 = *(long *)puVar25;
    }
    uVar26 = **(undefined8 **)(lVar38 + 0xb8);
    lVar36 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
    func_0x0535ab4c(lVar36,uVar26,*(undefined8 *)PTR_DAT_07831bb8,0);
    plVar35 = (long *)(*(long *)(*(long *)puVar25 + 0xb8) + 8);
    *plVar35 = lVar36;
    func_0x032809c4(plVar35,lVar36);
    lVar38 = *(long *)puVar25;
  }
  if (*(int *)(lVar38 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar38 = *(long *)puVar25;
  }
  puVar43 = PTR_DAT_077800e0;
  plVar35 = *(long **)(*(long *)(lVar38 + 0xb8) + 0x10);
  if (plVar35 == (long *)0x0) {
    if (*(int *)(lVar38 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar38 = *(long *)puVar25;
    }
    uVar39 = **(undefined8 **)(lVar38 + 0xb8);
    plVar35 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
    func_0x0535ac00(plVar35,uVar39,*(undefined8 *)PTR_DAT_07831bc0,0);
    plVar22 = (long *)(*(long *)(*(long *)puVar25 + 0xb8) + 0x10);
    *plVar22 = (long)plVar35;
    func_0x032809c4(plVar22,plVar35);
  }
  plVar22 = plVar35;
  lVar38 = func_0x03f36e88(uVar24,lVar36,plVar35,*(undefined8 *)puVar43);
  plVar18 = *(long **)(lVar33 + 0x38);
  if (plVar18 != (long *)0x0) {
    lVar33 = *plVar18;
    uVar21 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar21 != 0) {
      piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_06b83f10;
        }
        uVar21 = uVar21 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar21 != 0);
    }
    plVar22 = (long *)0x0;
    puVar23 = (undefined8 *)func_0x03256b10(plVar18);
LAB_06b83f10:
    plVar20 = (long *)(*(code *)*puVar23)(plVar18,puVar23[1]);
    lVar33 = 0;
    if (lVar38 != 0) {
      lVar36 = *(long *)PTR_DAT_077800d8;
      plStack_1b0 = (long *)lStack_1c0;
      lVar33 = *(long *)(*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 0xa0);
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c(lVar33);
      }
      lVar33 = func_0x03280ca0(lVar33);
      func_0x04c1b8d8(lVar33,*(undefined8 *)(*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 0xa8));
      if ((plVar20 != (long *)0x0) &&
         (iVar16 = (**(code **)(*plVar20 + 0x1a8))
                             (plVar20,*(undefined4 *)(lVar38 + 0x18),
                              *(undefined8 *)(*plVar20 + 0x1b0)), lVar33 != 0)) {
        *(int *)(lVar33 + 0x10) = iVar16 + 1;
        uVar24 = *(undefined8 *)(lVar38 + 0x10);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar26 = func_0x03280ca0();
        lVar38 = *(long *)(*(long *)(lVar36 + 0x20) + 0xc0);
        func_0x05355fbc(uVar26,lVar33,*(undefined8 *)(lVar38 + 0xb0),*(undefined8 *)(lVar38 + 0xc0))
        ;
        lVar38 = func_0x03d4294c(uVar24,uVar26,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 200));
        if (lVar38 != 0) {
          return (ulong)*(uint *)(lVar38 + 0x10);
        }
      }
      auVar47 = func_0x03280cac();
      plStack_1d0 = (long *)0x4a44b20;
      lVar38 = *(long *)(*(long *)(*(long *)(auVar47._8_8_ + 0x20) + 0xc0) + 8);
      lStack_1c0 = lVar33;
      puStack_1b8 = (undefined *)lVar36;
      if ((*(byte *)(lVar38 + 0x135) & 1) == 0) {
        lVar38 = func_0x0325681c(lVar38);
      }
      uVar24 = func_0x03280ca0(lVar38);
      func_0x04143c38(uVar24,*(undefined8 *)
                              (*(long *)(*(long *)(auVar47._8_8_ + 0x20) + 0xc0) + 0xe0));
      puVar23 = (undefined8 *)(auVar47._0_8_ + 0x10);
      *puVar23 = uVar24;
      func_0x032809c4(puVar23,uVar24);
      return auVar47._0_8_;
    }
  }
  auVar49 = func_0x03280cac();
  puVar5 = PTR_DAT_07831bc8;
  uVar24 = auVar49._0_8_;
  auStack_210._0_8_ = 0x6b83f4c;
  puStack_1f8 = puVar43;
  plStack_1f0 = (long *)puVar25;
  plVar20 = plVar22;
  puStack_200 = puVar37;
  uStack_1e8 = uVar39;
  plStack_1e0 = plVar35;
  lStack_1d8 = lVar36;
  plStack_1d0 = plVar18;
  plStack_1c8 = (long *)lVar33;
  if ((bRam0000000007e2a778 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780080);
    func_0x03280a18(PTR_DAT_07780088);
    func_0x03280a18(PTR_DAT_07780090);
    func_0x03280a18(PTR_DAT_07831bd0);
    func_0x03280a18(PTR_DAT_07831bc8);
    bRam0000000007e2a778 = 1;
  }
  lVar38 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x06b84dbc(lVar38,0);
  puVar9 = PTR_DAT_07831bd0;
  puVar8 = PTR_DAT_07780090;
  puVar7 = PTR_DAT_07780088;
  puVar6 = PTR_DAT_07780080;
  if (lVar38 == 0) {
    auVar47 = func_0x03280cac();
    puVar6 = PTR_DAT_07831bb0;
    uStack_260 = 0x6b84068;
    puStack_248 = puVar43;
    puStack_240 = puVar25;
    puStack_238 = puVar5;
    uStack_250 = puVar37;
    auStack_230._0_8_ = lVar38;
    plStack_220 = plVar22;
    if ((bRam0000000007e2a777 & 1) == 0) {
      auStack_230._8_8_ = uVar24;
      uStack_218 = auVar49._8_8_;
      func_0x03280a18(PTR_DAT_077800e8);
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_077800d0);
      func_0x03280a18(PTR_DAT_0777e510);
      func_0x03280a18(PTR_DAT_07831bd8);
      func_0x03280a18(PTR_DAT_07831be0);
      func_0x03280a18(PTR_DAT_07831bb0);
      func_0x03280a18(PTR_DAT_077800f8);
      func_0x03280a18(PTR_DAT_07780100);
      auVar49._8_8_ = uStack_218;
      auVar49._0_8_ = auStack_230._8_8_;
      bRam0000000007e2a777 = 1;
    }
    uStack_218 = auVar49._8_8_;
    auStack_230._8_8_ = auVar49._0_8_;
    lVar38 = *(long *)puVar6;
    if (*(int *)(lVar38 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar49._8_8_ = uStack_218;
      auVar49._0_8_ = auStack_230._8_8_;
      lVar38 = *(long *)puVar6;
    }
    uStack_218 = auVar49._8_8_;
    auStack_230._8_8_ = auVar49._0_8_;
    lVar33 = *(long *)(*(long *)(lVar38 + 0xb8) + 0x18);
    if (lVar33 == 0) {
      if (*(int *)(lVar38 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar49._8_8_ = uStack_218;
        auVar49._0_8_ = auStack_230._8_8_;
        lVar38 = *(long *)puVar6;
      }
      uStack_218 = auVar49._8_8_;
      auStack_230._8_8_ = auVar49._0_8_;
      uVar24 = **(undefined8 **)(lVar38 + 0xb8);
      lVar33 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar33,uVar24,*(undefined8 *)PTR_DAT_07831bd8,0);
      plVar35 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
      *plVar35 = lVar33;
      func_0x032809c4(plVar35,lVar33);
      auVar49._8_8_ = uStack_218;
      auVar49._0_8_ = auStack_230._8_8_;
      lVar38 = *(long *)puVar6;
    }
    uStack_218 = auVar49._8_8_;
    auStack_230._8_8_ = auVar49._0_8_;
    if (*(int *)(lVar38 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar49._8_8_ = uStack_218;
      auVar49._0_8_ = auStack_230._8_8_;
      lVar38 = *(long *)puVar6;
    }
    puVar25 = PTR_DAT_07780100;
    uStack_218 = auVar49._8_8_;
    auStack_230._8_8_ = auVar49._0_8_;
    lVar36 = *(long *)(*(long *)(lVar38 + 0xb8) + 0x20);
    if (lVar36 == 0) {
      if (*(int *)(lVar38 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar49._8_8_ = uStack_218;
        auVar49._0_8_ = auStack_230._8_8_;
        lVar38 = *(long *)puVar6;
      }
      uStack_218 = auVar49._8_8_;
      auStack_230._8_8_ = auVar49._0_8_;
      uVar24 = **(undefined8 **)(lVar38 + 0xb8);
      lVar36 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar36,uVar24,*(undefined8 *)PTR_DAT_07831be0,0);
      plVar35 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
      *plVar35 = lVar36;
      func_0x032809c4(plVar35,lVar36);
      auVar49._8_8_ = uStack_218;
      auVar49._0_8_ = auStack_230._8_8_;
    }
    uStack_218 = auVar49._8_8_;
    auStack_230._8_8_ = auVar49._0_8_;
    lVar38 = func_0x03f372e4(auVar47._8_8_,lVar33,lVar36,*(undefined8 *)puVar25);
    plVar35 = *(long **)(auVar47._0_8_ + 0x38);
    if (plVar35 != (long *)0x0) {
      lVar33 = *plVar35;
      uVar21 = (ulong)*(ushort *)(lVar33 + 0x12e);
      if (uVar21 != 0) {
        piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077800d0) {
            puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_06b8427c;
          }
          uVar21 = uVar21 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar21 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar35,*(long *)PTR_DAT_077800d0,0);
LAB_06b8427c:
      uVar24 = (*(code *)*puVar23)(plVar35,puVar23[1]);
      if ((lVar38 != 0) &&
         (iVar16 = func_0x04a44654(lVar38,uVar24,*(undefined8 *)PTR_DAT_077800f8),
         plVar20 != (long *)0x0)) {
        lVar38 = *plVar20;
        uVar21 = (ulong)*(ushort *)(lVar38 + 0x12e);
        if (uVar21 != 0) {
          piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_06b84300;
            }
            uVar21 = uVar21 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar21 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777c248,0);
LAB_06b84300:
        puVar25 = (undefined *)(*(code *)*puVar23)(plVar20,puVar23[1]);
        uVar24 = auStack_230._8_8_;
        if (puVar25 != (undefined *)0x0) {
          uVar2 = iVar16 - 1;
          uVar26 = *(undefined8 *)PTR_DAT_0777e510;
          auStack_230._0_8_ = uStack_260;
          if (*(uint *)(puVar25 + 0x18) <= uVar2) {
            func_0x057b8434(0);
          }
          lVar38 = *(long *)(puVar25 + 0x10);
          if (lVar38 == 0) {
            func_0x03280cac();
          }
          else if (uVar2 < *(uint *)(lVar38 + 0x18)) {
            return *(ulong *)(lVar38 + (long)(int)uVar2 * 8 + 0x20);
          }
          auVar50 = func_0x03280cb4();
          uVar17 = auVar50._8_4_;
          lVar38 = auVar50._0_8_;
          uStack_250 = (undefined *)0x41441f0;
          puStack_248 = (undefined *)uVar24;
          puStack_240 = puVar25;
          puStack_238 = (undefined *)(ulong)uVar2;
          if (*(uint *)(lVar38 + 0x18) <= uVar17) {
            func_0x057b8434(0);
          }
          lVar33 = *(long *)(lVar38 + 0x10);
          if (lVar33 == 0) {
            func_0x03280cac();
          }
          else if (uVar17 < *(uint *)(lVar33 + 0x18)) {
            puVar23 = (undefined8 *)(lVar33 + (long)(int)uVar17 * 8 + 0x20);
            *puVar23 = uVar26;
            uVar21 = func_0x032809c4(puVar23,uVar26);
            *(int *)(lVar38 + 0x1c) = *(int *)(lVar38 + 0x1c) + 1;
            return uVar21;
          }
          auVar47 = func_0x03280cb4();
          uStack_260 = 0x414425c;
          lVar33 = *(long *)(auVar47._8_8_ + 0x20);
          auStack_258 = (undefined1  [8])lVar38;
          if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
            lVar33 = func_0x0325681c(lVar33);
          }
          lVar38 = *(long *)(*(long *)(lVar33 + 0xc0) + 0x48);
          if ((*(byte *)(lVar38 + 0x135) & 1) == 0) {
            lVar38 = func_0x0325681c(lVar38);
          }
          lVar38 = func_0x03280b90(auVar47._0_8_,lVar38);
          if (lVar38 == 0) {
            uVar21 = (ulong)(auVar47._0_8_ == 0);
          }
          else {
            uVar21 = 1;
          }
          return uVar21;
        }
      }
    }
    func_0x03280cac();
    return (ulong)(uint)(1 << (ulong)(extraout_w1 - 1U & 0x1f));
  }
  *(undefined8 *)(lVar38 + 0x10) = uVar24;
  func_0x032809c4((undefined8 *)(lVar38 + 0x10),uVar24);
  *(long *)(lVar38 + 0x18) = (long)plVar22;
  func_0x032809c4((long *)(lVar38 + 0x18),plVar22);
  uVar24 = func_0x03280ca0(*(undefined8 *)puVar8);
  lVar31 = 0;
  func_0x0535acb4(uVar24,lVar38,*(undefined8 *)puVar9);
  lVar30 = *(long *)puVar7;
  lVar33 = func_0x03d87e68(auVar49._8_8_,uVar24);
  lVar38 = lStack_1d8;
  plVar35 = plStack_1e0;
  uVar21 = uStack_1e8;
  lVar36 = *(long *)puVar6;
  plStack_1e0 = (long *)auStack_210._0_8_;
  if (*(long *)(lVar36 + 0x38) == 0) {
    func_0x03256878(lVar36);
  }
  if (lVar33 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar36 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar21 = func_0x03280ca0();
    func_0x041e8ba0(uVar21,lVar33,*(undefined8 *)(*(long *)(lVar36 + 0x38) + 0x10));
    return uVar21;
  }
  uVar24 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar24 = func_0x05ac7464(uVar24,0);
  auVar47 = func_0x03280b7c(uVar24,lVar36);
  lVar27 = auVar47._8_8_;
  puStack_200 = (undefined *)0x3d602b8;
  plStack_1f0 = (long *)lVar33;
  uStack_1e8 = lVar36;
  if (*(long *)(lVar27 + 0x38) == 0) {
    func_0x03256878(lVar27);
  }
  if (auVar47._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar27 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar21 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x38) + 0x10))(uVar21,auVar47._0_8_);
    return uVar21;
  }
  uVar24 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar24 = func_0x05ac7464(uVar24,0);
  auVar48 = func_0x03280b7c(uVar24,lVar27);
  lVar33 = auVar48._8_8_;
  plStack_220 = (long *)0x3d60338;
  auStack_210 = auVar47;
  if (*(long *)(lVar33 + 0x38) == 0) {
    func_0x03256878(lVar33);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar33 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar21 = func_0x03280ca0();
    func_0x0420cec8(uVar21,auVar48._0_8_,*(undefined8 *)(*(long *)(lVar33 + 0x38) + 0x10));
    return uVar21;
  }
  uVar24 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar24 = func_0x05ac7464(uVar24,0);
  auVar47 = func_0x03280b7c(uVar24,lVar33);
  puStack_240 = (undefined *)0x3d603b4;
  puStack_238 = (undefined *)lVar38;
  lVar38 = lVar30;
  auStack_230 = auVar48;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03256878(lVar30);
  }
  auVar46._8_8_ = puStack_238;
  auVar46._0_8_ = plVar35;
  puVar25 = PTR_DAT_07779d10;
  if ((auVar47._0_8_ == 0) || (puVar25 = PTR_DAT_07779d18, auVar47._8_8_ == 0)) {
    uVar24 = func_0x03280a2c(puVar25);
    uVar24 = func_0x05ac7464(uVar24,0);
    auVar48 = func_0x03280b7c(uVar24,lVar30);
    uStack_260 = 0x3d60428;
    lVar33 = lVar38;
    puStack_248 = (undefined *)lVar30;
    if (*(long *)(lVar38 + 0x38) == 0) {
      _auStack_258 = auVar47;
      func_0x03256878(lVar38);
      auVar47 = _auStack_258;
    }
    puVar25 = PTR_DAT_07779d10;
    _auStack_258 = auVar47;
    if ((auVar48._0_8_ != 0) && (puVar25 = PTR_DAT_07779d18, auVar48._8_8_ != 0)) {
      lVar38 = *(long *)(*(long *)(lVar38 + 0x38) + 8);
      lVar33 = 0;
      ppuVar14 = &puStack_240;
      puVar25 = puStack_248;
      uVar24 = uStack_260;
      goto LAB_03d60730;
    }
    uVar24 = func_0x03280a2c(puVar25);
    uVar24 = func_0x05ac7464(uVar24,0);
    auVar47 = func_0x03280b7c(uVar24,lVar38);
    uStack_280 = 0x3d6049c;
    lVar36 = lVar33;
    lStack_268 = lVar38;
    auStack_278 = auVar48;
    if (*(long *)(lVar33 + 0x38) == 0) {
      func_0x03256878(lVar33);
    }
    puVar25 = PTR_DAT_07779d10;
    if ((auVar47._0_8_ == 0) || (puVar25 = PTR_DAT_07779d18, auVar47._8_8_ == 0)) {
      uVar24 = func_0x03280a2c(puVar25);
      uVar24 = func_0x05ac7464(uVar24,0);
      auStack_2b8 = func_0x03280b7c(uVar24,lVar33);
      uStack_2a0 = 0x3d60510;
      lVar38 = lVar36;
      lStack_288 = lVar33;
      auStack_298 = auVar47;
      if (*(long *)(lVar36 + 0x38) == 0) {
        func_0x03256878(lVar36);
      }
      puVar25 = PTR_DAT_07779d10;
      if ((auStack_2b8._0_8_ != 0) && (puVar25 = PTR_DAT_07779d18, auStack_2b8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar36 + 0x38) + 8))
                           (auStack_2b8._0_8_,auStack_2b8._8_8_,0);
        return uVar21;
      }
      uVar24 = func_0x03280a2c(puVar25);
      uVar24 = func_0x05ac7464(uVar24,0);
      auVar47 = func_0x03280b7c(uVar24,lVar36);
      uStack_2d0 = 0x3d60588;
      plStack_2c0 = plVar35;
      lVar33 = lVar38;
      lVar30 = lVar31;
      lStack_2a8 = lVar36;
      if (*(long *)(lVar31 + 0x38) == 0) {
        func_0x03256878(lVar31);
      }
      puVar25 = PTR_DAT_07779d10;
      if ((auVar47._0_8_ == 0) || (puVar25 = PTR_DAT_07779d18, auVar47._8_8_ == 0)) {
        uVar24 = func_0x03280a2c(puVar25);
        uVar24 = func_0x05ac7464(uVar24,0);
        auVar46 = func_0x03280b7c(uVar24,lVar31);
        auVar4._8_8_ = lVar30;
        auVar4._0_8_ = lVar33;
        pplVar13 = (long **)auStack_300;
        auStack_300[0] = 0x3d60608;
        puVar25 = (undefined *)lVar33;
        lVar36 = lVar30;
        lStack_2e0 = lVar38;
        lStack_2d8 = lVar31;
        auStack_2f0 = auVar47;
        if (*(long *)(lVar30 + 0x38) == 0) {
          func_0x03256878(lVar30);
        }
        puVar43 = PTR_DAT_07779d10;
        if ((auVar46._0_8_ != 0) && (puVar43 = PTR_DAT_07779d18, auVar46._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x38) + 0x10))
                             (auVar46._0_8_,auVar46._8_8_,lVar33);
          return uVar21;
        }
        uVar24 = func_0x03280a2c(puVar43);
        uVar24 = func_0x05ac7464(uVar24,0);
        puVar43 = (undefined *)0x3d6068c;
        auVar47 = func_0x03280b7c(uVar24,lVar30);
        goto LAB_03d6068c;
      }
      lVar36 = *(long *)(*(long *)(lVar31 + 0x38) + 0x10);
      puVar15 = &uStack_2a0;
      lVar33 = lStack_2a8;
      plVar35 = plStack_2c0;
      uVar24 = uStack_2d0;
      auVar48 = auStack_2b8;
    }
    else {
      lVar36 = *(long *)(*(long *)(lVar33 + 0x38) + 8);
      lVar38 = 0;
      puVar15 = &uStack_260;
      lVar33 = lStack_268;
      uVar24 = uStack_280;
      auVar48 = auStack_278;
    }
  }
  else {
    lVar36 = *(long *)(*(long *)(lVar30 + 0x38) + 8);
    puVar25 = (undefined *)0x0;
    pplVar13 = &plStack_220;
    puVar43 = puStack_240;
    auVar4 = auStack_230;
LAB_03d6068c:
    ppuVar14 = (undefined **)((long)pplVar13 + -0x30);
    *(undefined **)((long)pplVar13 + -0x30) = puVar43;
    *(undefined1 (*) [16])((long)pplVar13 + -0x20) = auVar46;
    *(undefined1 (*) [16])((long)pplVar13 + -0x10) = auVar4;
    plVar35 = *(long **)(lVar36 + 0x38);
    lVar38 = lVar36;
    if (plVar35 == (long *)0x0) {
      func_0x03256878(lVar36);
      plVar35 = *(long **)(lVar36 + 0x38);
    }
    if ((*(byte *)(*plVar35 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar29 = func_0x03280ca0();
    lVar33 = *(long *)(*(long *)(lVar36 + 0x38) + 8);
    func_0x0531dbd0(uVar29,0xfffffffe);
    if (uVar29 != 0) {
      *(undefined8 *)(uVar29 + 0x38) = auVar47._0_8_;
      func_0x032809c4((undefined8 *)(uVar29 + 0x38),auVar47._0_8_);
      *(undefined8 *)(uVar29 + 0x48) = auVar47._8_8_;
      func_0x032809c4((undefined8 *)(uVar29 + 0x48),auVar47._8_8_);
      *(long *)(uVar29 + 0x28) = (long)puVar25;
      func_0x032809c4((long *)(uVar29 + 0x28),puVar25);
      return uVar29;
    }
    auVar48 = func_0x03280cac();
    plVar35 = (long *)0x0;
    uVar24 = 0x3d60730;
LAB_03d60730:
    puVar15 = (undefined8 *)((long)ppuVar14 + -0x30);
    *(undefined8 *)((long)ppuVar14 + -0x30) = uVar24;
    *(long **)((long)ppuVar14 + -0x20) = plVar35;
    *(undefined1 (*) [16])((long)ppuVar14 + -0x18) = auVar47;
    *(undefined **)((long)ppuVar14 + -8) = puVar25;
    plVar35 = *(long **)(lVar38 + 0x38);
    lVar36 = lVar38;
    if (plVar35 == (long *)0x0) {
      func_0x03256878(lVar38);
      plVar35 = *(long **)(lVar38 + 0x38);
    }
    if ((*(byte *)(*plVar35 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar29 = func_0x03280ca0();
    lVar38 = *(long *)(*(long *)(lVar38 + 0x38) + 8);
    func_0x0531e428(uVar29,0xfffffffe);
    if (uVar29 != 0) {
      *(undefined8 *)(uVar29 + 0x38) = auVar48._0_8_;
      func_0x032809c4((undefined8 *)(uVar29 + 0x38),auVar48._0_8_);
      *(undefined8 *)(uVar29 + 0x48) = auVar48._8_8_;
      func_0x032809c4((undefined8 *)(uVar29 + 0x48),auVar48._8_8_);
      *(long *)(uVar29 + 0x28) = lVar33;
      func_0x032809c4((long *)(uVar29 + 0x28),lVar33);
      return uVar29;
    }
    auVar47 = func_0x03280cac();
    plVar35 = (long *)0x0;
    uVar24 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar15 + -0x30) = uVar24;
  *(long **)((long)puVar15 + -0x20) = plVar35;
  *(undefined1 (*) [16])((long)puVar15 + -0x18) = auVar48;
  *(long *)((long)puVar15 + -8) = lVar33;
  plVar35 = *(long **)(lVar36 + 0x38);
  lVar33 = lVar36;
  if (plVar35 == (long *)0x0) {
    func_0x03256878(lVar36);
    plVar35 = *(long **)(lVar36 + 0x38);
  }
  if ((*(byte *)(*plVar35 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar29 = func_0x03280ca0();
  uVar24 = *(undefined8 *)(*(long *)(lVar36 + 0x38) + 8);
  func_0x0531ec78(uVar29,0xfffffffe);
  if (uVar29 != 0) {
    *(undefined8 *)(uVar29 + 0x40) = auVar47._0_8_;
    func_0x032809c4((undefined8 *)(uVar29 + 0x40),auVar47._0_8_);
    *(undefined8 *)(uVar29 + 0x50) = auVar47._8_8_;
    func_0x032809c4((undefined8 *)(uVar29 + 0x50),auVar47._8_8_);
    *(long *)(uVar29 + 0x30) = lVar38;
    func_0x032809c4((long *)(uVar29 + 0x30),lVar38);
    return uVar29;
  }
  auVar48 = func_0x03280cac();
  uVar29 = auVar48._0_8_;
  *(undefined8 *)((long)puVar15 + -0x60) = 0x3d60878;
  *(ulong *)((long)puVar15 + -0x58) = uVar21;
  *(undefined8 *)((long)puVar15 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar15 + -0x48) = auVar47;
  *(long *)((long)puVar15 + -0x38) = lVar38;
  plVar35 = *(long **)(lVar33 + 0x38);
  if (plVar35 == (long *)0x0) {
    func_0x03256878(lVar33);
    plVar35 = *(long **)(lVar33 + 0x38);
  }
  if ((*(byte *)(*plVar35 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar21 = func_0x03280ca0();
  puVar23 = *(undefined8 **)(*(long *)(lVar33 + 0x38) + 8);
  (*(code *)*puVar23)(uVar21,0xfffffffe);
  if (uVar21 != 0) {
    func_0x02f17738(uVar21,*(long *)(**(long **)(lVar33 + 0x38) + 0x80) + 0xc0,uVar29);
    func_0x02f17738(uVar21,*(long *)(**(long **)(lVar33 + 0x38) + 0x80) + 0x100,auVar48._8_8_);
    func_0x02f17738(uVar21,*(long *)(**(long **)(lVar33 + 0x38) + 0x80) + 0x80,uVar24);
    return uVar21;
  }
  auVar47 = func_0x03280cac();
  lVar38 = auVar47._8_8_;
  plVar35 = auVar47._0_8_;
  *(undefined8 *)((long)puVar15 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar15 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar15 + -0x80) = auVar48;
  *(long *)((long)puVar15 + -0x70) = lVar33;
  *(undefined8 *)((long)puVar15 + -0x68) = uVar24;
  puVar28 = puVar23;
  if (puVar23[7] == 0) {
    func_0x03256878(puVar23);
  }
  puVar25 = PTR_DAT_07774b08;
  if ((plVar35 == (long *)0x0) || (puVar25 = PTR_DAT_077799b8, lVar38 == 0)) {
    uVar24 = func_0x03280a2c(puVar25);
    uVar24 = func_0x05ac7464(uVar24,0);
    func_0x03280b7c(uVar24,puVar23);
LAB_03d60c04:
    func_0x03281048(plVar35);
    lVar33 = 0;
  }
  else {
    lVar33 = *(long *)(puVar23[7] + 0x10);
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c();
    }
    lVar36 = *plVar35;
    bVar1 = *(byte *)(lVar36 + 0x130);
    if ((*(byte *)(lVar33 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar36 + 200) + (ulong)*(byte *)(lVar33 + 0x130) * 8 + -8) == lVar33)) {
      lVar33 = *(long *)(puVar23[7] + 0x10);
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c(lVar33);
        lVar36 = *plVar35;
        bVar1 = *(byte *)(lVar36 + 0x130);
      }
      if ((*(byte *)(lVar33 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar36 + 200) + (ulong)*(byte *)(lVar33 + 0x130) * 8 + -8) == lVar33))
      {
        lVar33 = *(long *)(puVar23[7] + 0x10);
        if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
          lVar33 = func_0x0325681c(lVar33);
          lVar36 = *plVar35;
          bVar1 = *(byte *)(lVar36 + 0x130);
        }
        if ((*(byte *)(lVar33 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar36 + 200) + (ulong)*(byte *)(lVar33 + 0x130) * 8 + -8) == lVar33
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar21 = (**(code **)(lVar36 + 0x228))(plVar35,lVar38,*(undefined8 *)(lVar36 + 0x230));
          return uVar21;
        }
      }
      goto LAB_03d60c04;
    }
    lVar33 = *(long *)(puVar23[7] + 0x20);
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c(lVar33);
    }
    lVar33 = func_0x03280b90(plVar35,lVar33);
    if (lVar33 == 0) {
      lVar33 = *(long *)(puVar23[7] + 0x38);
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar35 + 0x130) < *(byte *)(lVar33 + 0x130)) ||
         (*(long *)(*(long *)(*plVar35 + 200) + (ulong)*(byte *)(lVar33 + 0x130) * 8 + -8) != lVar33
         )) {
        if ((*(byte *)(*(long *)(puVar23[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar21 = func_0x03280ca0();
        func_0x04b68fa4(uVar21,plVar35,lVar38,*(undefined8 *)(puVar23[7] + 0x58));
        return uVar21;
      }
      if ((*(byte *)(*(long *)(puVar23[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar29 = func_0x03280ca0();
      lVar33 = *(long *)(puVar23[7] + 0x38);
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c(lVar33);
      }
      if ((*(byte *)(lVar33 + 0x130) <= *(byte *)(*plVar35 + 0x130)) &&
         (*(long *)(*(long *)(*plVar35 + 200) + (ulong)*(byte *)(lVar33 + 0x130) * 8 + -8) == lVar33
         )) {
        func_0x04b713b0(uVar29,plVar35,lVar38,*(undefined8 *)(puVar23[7] + 0x48));
        return uVar29;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar23[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar29 = func_0x03280ca0();
    lVar33 = *(long *)(puVar23[7] + 0x20);
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c(lVar33);
    }
    lVar36 = func_0x03280b90(plVar35,lVar33);
    if (lVar36 != 0) {
      func_0x04b66610(uVar29,lVar36,lVar38,*(undefined8 *)(puVar23[7] + 0x30));
      return uVar29;
    }
  }
  auVar48 = func_0x03281048(plVar35,lVar33);
  lVar38 = auVar48._8_8_;
  plVar35 = auVar48._0_8_;
  *(undefined8 *)((long)puVar15 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar15 + -0xb8) = lVar33;
  *(ulong *)((long)puVar15 + -0xb0) = uVar29;
  *(undefined8 **)((long)puVar15 + -0xa8) = puVar23;
  *(undefined1 (*) [16])((long)puVar15 + -0xa0) = auVar47;
  if (puVar28[7] == 0) {
    func_0x03256878(puVar28);
  }
  puVar25 = PTR_DAT_07774b08;
  if ((plVar35 == (long *)0x0) || (puVar25 = PTR_DAT_077799b8, lVar38 == 0)) {
    uVar24 = func_0x03280a2c(puVar25);
    uVar24 = func_0x05ac7464(uVar24,0);
    func_0x03280b7c(uVar24,puVar28);
  }
  else {
    lVar36 = *(long *)(puVar28[7] + 0x10);
    if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
      lVar36 = func_0x0325681c();
    }
    lVar30 = *plVar35;
    bVar1 = *(byte *)(lVar30 + 0x130);
    if ((bVar1 < *(byte *)(lVar36 + 0x130)) ||
       (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar36 + 0x130) * 8 + -8) != lVar36)) {
      lVar36 = *(long *)(puVar28[7] + 0x20);
      if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
        lVar36 = func_0x0325681c(lVar36);
      }
      lVar36 = func_0x03280b90(plVar35,lVar36);
      if (lVar36 != 0) {
        if ((*(byte *)(*(long *)(puVar28[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar21 = func_0x03280ca0();
        lVar33 = *(long *)(puVar28[7] + 0x20);
        if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
          lVar33 = func_0x0325681c(lVar33);
        }
        lVar36 = func_0x03280b90(plVar35,lVar33);
        if (lVar36 != 0) {
          func_0x04b667e0(uVar21,lVar36,lVar38,*(undefined8 *)(puVar28[7] + 0x30));
          return uVar21;
        }
        goto LAB_03d60ee0;
      }
      lVar36 = *(long *)(puVar28[7] + 0x38);
      if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
        lVar36 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar35 + 0x130) < *(byte *)(lVar36 + 0x130)) ||
         (*(long *)(*(long *)(*plVar35 + 200) + (ulong)*(byte *)(lVar36 + 0x130) * 8 + -8) != lVar36
         )) {
        if ((*(byte *)(*(long *)(puVar28[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar21 = func_0x03280ca0();
        func_0x04b693d0(uVar21,plVar35,lVar38,*(undefined8 *)(puVar28[7] + 0x58));
        return uVar21;
      }
      if ((*(byte *)(*(long *)(puVar28[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar21 = func_0x03280ca0();
      lVar36 = *(long *)(puVar28[7] + 0x38);
      if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
        lVar36 = func_0x0325681c(lVar36);
      }
      if ((*(byte *)(lVar36 + 0x130) <= *(byte *)(*plVar35 + 0x130)) &&
         (*(long *)(*(long *)(*plVar35 + 200) + (ulong)*(byte *)(lVar36 + 0x130) * 8 + -8) == lVar36
         )) {
        func_0x04b715c8(uVar21,plVar35,lVar38,*(undefined8 *)(puVar28[7] + 0x48));
        return uVar21;
      }
    }
    else {
      lVar36 = *(long *)(puVar28[7] + 0x10);
      if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
        lVar36 = func_0x0325681c(lVar36);
        lVar30 = *plVar35;
        bVar1 = *(byte *)(lVar30 + 0x130);
      }
      if ((*(byte *)(lVar36 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar36 + 0x130) * 8 + -8) == lVar36))
      {
        lVar36 = *(long *)(puVar28[7] + 0x10);
        if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
          lVar36 = func_0x0325681c(lVar36);
          lVar30 = *plVar35;
          bVar1 = *(byte *)(lVar30 + 0x130);
        }
        if ((*(byte *)(lVar36 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar36 + 0x130) * 8 + -8) == lVar36
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar21 = (**(code **)(lVar30 + 0x228))(plVar35,lVar38,*(undefined8 *)(lVar30 + 0x230));
          return uVar21;
        }
      }
    }
  }
  func_0x03281048(plVar35);
LAB_03d60ee0:
  lVar38 = func_0x03281048(plVar35,lVar33);
  *(undefined8 *)((long)puVar15 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar15 + -0xd0) = auVar48;
  lVar33 = *(long *)(lVar38 + 0x20);
  if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
    lVar33 = func_0x0325681c();
  }
  lVar33 = *(long *)(*(long *)(lVar33 + 0xc0) + 0x10);
  if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
    lVar33 = func_0x0325681c();
  }
  uVar21 = **(ulong **)(lVar33 + 0xb8);
  func_0x03280ab0();
  if (uVar21 == 0) {
    lVar33 = *(long *)(lVar38 + 0x20);
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c();
    }
    uVar21 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar33 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar33 = *(long *)(lVar38 + 0x20);
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c();
    }
    lVar33 = *(long *)(*(long *)(lVar33 + 0xc0) + 0x10);
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c();
    }
    **(ulong **)(lVar33 + 0xb8) = uVar21;
    lVar38 = *(long *)(lVar38 + 0x20);
    if ((*(byte *)(lVar38 + 0x135) & 1) == 0) {
      lVar38 = func_0x0325681c();
    }
    lVar38 = *(long *)(*(long *)(lVar38 + 0xc0) + 0x10);
    if ((*(byte *)(lVar38 + 0x135) & 1) == 0) {
      lVar38 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar38 + 0xb8),uVar21);
  }
  return uVar21;
LAB_05ac8008:
  lVar38 = 0;
  do {
    if (plVar35 != (long *)0x0) {
      lVar33 = *plVar35;
      uVar40 = (ulong)*(ushort *)(lVar33 + 0x12e);
      if (uVar40 != 0) {
        piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *plVar22) {
            puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac805c;
          }
          uVar40 = uVar40 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar40 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar35,*plVar22,0);
LAB_05ac805c:
      (*(code *)*puVar23)(plVar35,puVar23[1]);
    }
    if (lVar38 == 0) {
      if ((int)uVar29 != 0) {
        return uVar21;
      }
    }
    else {
LAB_05ac80a0:
      func_0x03280ca4(lVar38);
    }
    plVar35 = (long *)func_0x05ac75f4();
LAB_05ac80ac:
    uVar24 = func_0x03280a2c(PTR_DAT_077a5838);
    auVar50 = func_0x03280b7c(plVar35,uVar24);
    uVar24 = auVar50._0_8_;
    uVar21 = 0;
    uVar29 = (ulong)(plVar35 != (long *)0x0);
    if (auVar50._8_4_ != 1) break;
    plVar18 = (long *)func_0x072ce910(uVar24);
    lVar38 = *plVar18;
    func_0x072ce920();
  } while( true );
  lVar38 = 0;
  if (plVar35 != (long *)0x0) {
    lVar33 = *plVar35;
    uVar21 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar21 != 0) {
      piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *plVar22) {
          puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac815c;
        }
        uVar21 = uVar21 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar21 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar35,*plVar22,0);
LAB_05ac815c:
    (*(code *)*puVar23)(plVar35,puVar23[1]);
  }
  func_0x03365958(uVar24);
  func_0x03280ca4(0);
  plVar18 = (long *)func_0x02f09514();
  lStack_1c0 = 0x5ac8180;
  uStack_198 = 0;
  lStack_190 = 0;
  plStack_1b0 = plVar22;
  uStack_1a8 = uVar29;
  uStack_1a0 = uVar24;
  plStack_188 = plVar35;
  if ((bRam0000000007e1fbe4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077617f0);
    func_0x03280a18(PTR_DAT_077617f8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e1fbe4 = 1;
  }
  if (plVar18 == (long *)0x0) {
    func_0x03280a2c(PTR_DAT_07774b08);
    plVar35 = (long *)func_0x05ac7464();
    goto LAB_05ac83d4;
  }
  lVar33 = *plVar18;
  uVar21 = (ulong)*(ushort *)(lVar33 + 0x12e);
  if (uVar21 != 0) {
    piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
    do {
      if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077617f0) {
        puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
        goto LAB_05ac8230;
      }
      uVar21 = uVar21 - 1;
      piVar34 = piVar34 + 4;
    } while (uVar21 != 0);
  }
  puVar23 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077617f0,0);
LAB_05ac8230:
  plVar22 = (long *)PTR_DAT_0774e8c8;
  plVar35 = (long *)(*(code *)*puVar23)(plVar18,puVar23[1]);
  puVar37 = PTR_DAT_077617f8;
  puVar43 = PTR_DAT_0774e8e0;
  if (plVar35 == (long *)0x0) {
    func_0x03280cac();
    goto LAB_05ac83c8;
  }
  uVar21 = 0;
  uVar29 = 0;
  do {
    lVar38 = *plVar35;
    uVar40 = (ulong)*(ushort *)(lVar38 + 0x12e);
    if (uVar40 != 0) {
      piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *(long *)puVar43) {
          puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac82b0;
        }
        uVar40 = uVar40 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar40 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar35,*(long *)puVar43,0);
LAB_05ac82b0:
    uVar40 = (*(code *)*puVar23)(plVar35,puVar23[1]);
    if ((uVar40 & 1) == 0) break;
    lVar38 = *plVar35;
    uVar40 = (ulong)*(ushort *)(lVar38 + 0x12e);
    if (uVar40 != 0) {
      piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *(long *)puVar37) {
          puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac830c;
        }
        uVar40 = uVar40 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar40 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar35,*(long *)puVar37,0);
LAB_05ac830c:
    uVar17 = (*(code *)*puVar23)(plVar35,puVar23[1]);
    uVar2 = uVar17;
    if ((int)uVar17 <= (int)(uint)uVar21) {
      uVar2 = (uint)uVar21;
    }
    if ((int)uVar29 == 0) {
      uVar2 = uVar17;
    }
    uVar21 = (ulong)uVar2;
    uVar29 = 1;
  } while( true );
  lVar38 = 0;
  do {
    if (plVar35 != (long *)0x0) {
      lVar33 = *plVar35;
      uVar40 = (ulong)*(ushort *)(lVar33 + 0x12e);
      if (uVar40 != 0) {
        piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *plVar22) {
            puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac8384;
          }
          uVar40 = uVar40 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar40 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar35,*plVar22,0);
LAB_05ac8384:
      (*(code *)*puVar23)(plVar35,puVar23[1]);
    }
    if (lVar38 == 0) {
      if ((int)uVar29 != 0) {
        return uVar21;
      }
    }
    else {
LAB_05ac83c8:
      func_0x03280ca4(lVar38);
    }
    plVar35 = (long *)func_0x05ac75f4();
LAB_05ac83d4:
    uVar24 = func_0x03280a2c(PTR_DAT_077a5840);
    auVar50 = func_0x03280b7c(plVar35,uVar24);
    plVar18 = auVar50._0_8_;
    uVar21 = 0;
    uVar29 = (ulong)(plVar35 != (long *)0x0);
    if (auVar50._8_4_ != 1) break;
    plVar18 = (long *)func_0x072ce910(plVar18);
    lVar38 = *plVar18;
    func_0x072ce920();
  } while( true );
  if (plVar35 != (long *)0x0) {
    lVar38 = *plVar35;
    uVar21 = (ulong)*(ushort *)(lVar38 + 0x12e);
    if (uVar21 != 0) {
      piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *plVar22) {
          puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac8484;
        }
        uVar21 = uVar21 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar21 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar35,*plVar22,0);
LAB_05ac8484:
    (*(code *)*puVar23)(plVar35,puVar23[1]);
  }
  func_0x03365958(plVar18);
  func_0x03280ca4(0);
  plVar20 = (long *)func_0x02f09514();
  auStack_210._0_8_ = 0;
  puStack_200 = (undefined *)0x5ac84a8;
  lStack_1d8 = 0;
  plStack_1d0 = (long *)0x0;
  puStack_1f8 = puVar25;
  plStack_1f0 = plVar22;
  uStack_1e8 = uVar29;
  plStack_1e0 = plVar18;
  plStack_1c8 = plVar35;
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
    plVar35 = (long *)func_0x05ac7464();
    goto LAB_05ac8730;
  }
  lVar38 = *plVar20;
  uVar21 = (ulong)*(ushort *)(lVar38 + 0x12e);
  if (uVar21 != 0) {
    piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
    do {
      if (*(long *)(piVar34 + -2) == *(long *)PTR_DAT_077a5820) {
        puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
        goto LAB_05ac855c;
      }
      uVar21 = uVar21 - 1;
      piVar34 = piVar34 + 4;
    } while (uVar21 != 0);
  }
  puVar23 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_077a5820,0);
LAB_05ac855c:
  puVar43 = PTR_DAT_077a5828;
  puVar25 = PTR_DAT_0774e8e0;
  plVar18 = (long *)PTR_DAT_0774e8c8;
  plVar35 = (long *)(*(code *)*puVar23)(plVar20,puVar23[1]);
  bVar12 = false;
  fVar45 = 0.0;
  do {
    fVar44 = fVar45;
    do {
      bVar3 = bVar12;
      if (plVar35 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_05ac8710;
      }
      lVar38 = *plVar35;
      uVar21 = (ulong)*(ushort *)(lVar38 + 0x12e);
      if (uVar21 != 0) {
        piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)puVar25) {
            puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac85f0;
          }
          uVar21 = uVar21 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar21 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar35,*(long *)puVar25,0);
LAB_05ac85f0:
      uVar21 = (*(code *)*puVar23)(plVar35,puVar23[1]);
      if ((uVar21 & 1) == 0) {
        lVar38 = 0;
        iVar16 = 9;
        goto joined_r0x05ac8680;
      }
      lVar38 = *plVar35;
      uVar21 = (ulong)*(ushort *)(lVar38 + 0x12e);
      if (uVar21 != 0) {
        piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == *(long *)puVar43) {
            puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_05ac864c;
          }
          uVar21 = uVar21 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar21 != 0);
      }
      puVar23 = (undefined8 *)func_0x03256b10(plVar35,*(long *)puVar43,0);
LAB_05ac864c:
      fVar45 = (float)(*(code *)*puVar23)(plVar35,puVar23[1]);
      bVar12 = true;
    } while (((fVar45 <= fVar44) && ((ulong)ABS((double)fVar44) < 0x7ff0000000000001)) && (bVar3));
  } while( true );
joined_r0x05ac8680:
  if (plVar35 != (long *)0x0) {
    lVar33 = *plVar35;
    uVar21 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar21 != 0) {
      piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *plVar18) {
          puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac86d0;
        }
        uVar21 = uVar21 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar21 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar35,*plVar18,0);
LAB_05ac86d0:
    uVar21 = (*(code *)*puVar23)(plVar35,puVar23[1]);
  }
  if (lVar38 == 0) {
    if (((iVar16 != 9) && (iVar16 != 0)) || (bVar3)) {
      return uVar21;
    }
  }
  else {
    func_0x03280ca4(lVar38);
  }
  plVar35 = (long *)func_0x05ac75f4();
LAB_05ac8730:
  uVar24 = func_0x03280a2c(PTR_DAT_077a5848);
  auVar50 = func_0x03280b7c(plVar35,uVar24);
  auStack_210._8_8_ = auVar50._0_8_;
  bVar3 = false;
  if (auVar50._8_4_ != 1) goto LAB_05ac878c;
  plVar22 = (long *)func_0x072ce910();
  lVar38 = *plVar22;
  uVar21 = func_0x072ce920();
  iVar16 = 0;
  goto joined_r0x05ac8680;
LAB_05ac878c:
  if (plVar35 != (long *)0x0) {
    lVar38 = *plVar35;
    uVar21 = (ulong)*(ushort *)(lVar38 + 0x12e);
    if (uVar21 != 0) {
      piVar34 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == *plVar18) {
          puVar23 = (undefined8 *)(lVar38 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_05ac87dc;
        }
        uVar21 = uVar21 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar21 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar35,*plVar18,0);
LAB_05ac87dc:
    (*(code *)*puVar23)(plVar35,puVar23[1]);
  }
  func_0x03365958(auStack_210._8_8_);
  func_0x03280ca4(0);
  uVar21 = func_0x02f09514();
  return uVar21;
}

