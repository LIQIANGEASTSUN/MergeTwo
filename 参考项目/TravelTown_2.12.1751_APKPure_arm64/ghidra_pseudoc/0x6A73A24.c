/* Ghidra 12.1.2 native pseudocode; RVA 0x6A73A24; Merger.MergeBoard.Systems.ResourceItemDropSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b73ed8: Changing call to branch */

void Merger_MergeBoard_Systems_ResourceItemDropSystem__Tick
               (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined *param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long *plVar26;
  undefined *puVar27;
  ulong unaff_x27;
  undefined1 auVar28 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long *plStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar24 = PTR_DAT_07831430;
  puVar2 = PTR_DAT_07831428;
  puVar1 = PTR_DAT_07831420;
  puVar25 = PTR_DAT_0782fe68;
  puVar27 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a6f5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07831420);
    func_0x03280a18(PTR_DAT_07831438);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07831440);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07831448);
    func_0x03280a18(PTR_DAT_07831450);
    func_0x03280a18(PTR_DAT_07831428);
    func_0x03280a18(PTR_DAT_07831458);
    func_0x03280a18(PTR_DAT_07831430);
    bRam0000000007e2a6f5 = 1;
  }
  uStack_a4 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  uVar5 = func_0x03d1a7a0(*(undefined8 *)puVar1);
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar25);
  func_0x06015d08(uVar6,0,*(undefined8 *)puVar27,0);
  uVar16 = *(ulong *)puVar2;
  uStack_78 = uStack_e8;
  uStack_80 = uStack_f0;
  uStack_68 = uStack_d8;
  uStack_70 = uStack_e0;
  func_0x03e65dc4(&uStack_c8,&uStack_80,uVar5,uVar6,uVar16);
  lVar7 = *(long *)puVar24;
  uStack_98 = uStack_c0;
  uStack_a0 = uStack_c8;
  uStack_88 = uStack_b0;
  uStack_90 = uStack_b8;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar7 = *(long *)puVar24;
  }
  puVar27 = PTR_DAT_07831450;
  puVar25 = PTR_DAT_07831448;
  plVar10 = (long *)PTR_DAT_07831438;
  lVar21 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar21 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar7 = *(long *)puVar24;
    }
    uVar6 = **(ulong **)(lVar7 + 0xb8);
    lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831440);
    uVar16 = 0;
    func_0x05351500(lVar21,uVar6,*(undefined8 *)PTR_DAT_07831458,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar24 + 0xb8) + 8);
    *plVar8 = lVar21;
    func_0x032809c4(plVar8,lVar21);
  }
  uVar13 = *(ulong *)puVar27;
  func_0x044920b0(&uStack_80,&uStack_a0,lVar21,uVar13);
  uStack_98 = uStack_78;
  uStack_a0 = uStack_80;
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  uVar5 = func_0x04492108(&uStack_a0,*(undefined8 *)puVar25);
  lVar7 = func_0x03d5b388(uVar5,*plVar10);
  puVar2 = PTR_DAT_0777c248;
  puVar1 = PTR_DAT_0777a498;
  plVar8 = plVar10;
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      unaff_x27 = 0;
      uVar17 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        puVar27 = (undefined *)0x50;
        puVar23 = param_5;
        uVar22 = param_6;
        if (uVar17 <= unaff_x27) goto LAB_06b73f10;
        plVar8 = *(long **)(param_1 + 0x10);
        lVar21 = lVar7;
        if (plVar8 == (long *)0x0) goto LAB_06b73f0c;
        lVar18 = *plVar8;
        lVar19 = lVar7 + unaff_x27 * 0x50;
        puVar23 = *(undefined **)(lVar19 + 0x20);
        uVar22 = (ulong)*(uint *)(lVar19 + 0x28);
        puVar25 = *(undefined **)(lVar19 + 0x30);
        uVar6 = (ulong)*(ushort *)(lVar18 + 0x12e);
        lVar19 = *(long *)puVar1;
        if (uVar6 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar19) {
              puVar9 = (undefined8 *)(lVar18 + (long)(*piVar20 + 4) * 0x10 + 0x138);
              goto LAB_06b73ce4;
            }
            uVar6 = uVar6 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar8,lVar19,4);
LAB_06b73ce4:
        uVar13 = puVar9[1];
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar25,uVar13);
        uVar6 = uVar22;
        puVar24 = puVar23;
        if (plVar10 == (long *)0x0) goto LAB_06b73f0c;
        lVar19 = *plVar10;
        uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar19 + (long)(*piVar20 + 3) * 0x10 + 0x138);
              goto LAB_06b73d4c;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        uVar13 = 3;
        puVar9 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar2,3);
LAB_06b73d4c:
        uVar17 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        if ((uVar17 & 1) != 0) {
          plVar26 = *(long **)(param_1 + 0x10);
          puVar27 = (undefined *)0x0;
          plVar8 = plVar10;
          if (plVar26 == (long *)0x0) goto LAB_06b73f0c;
          lVar19 = *plVar26;
          lVar21 = *(long *)puVar1;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == lVar21) {
                puVar9 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0x19) * 0x10 + 0x138);
                goto LAB_06b73db4;
              }
              uVar13 = uVar13 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x03256b10(plVar26,lVar21,0x19);
LAB_06b73db4:
          uVar13 = puVar9[1];
          uVar3 = (*(code *)*puVar9)(plVar26,puVar25,uVar13);
          lVar21 = *plVar10;
          puVar25 = (undefined *)(ulong)uVar3;
          puVar27 = (undefined *)0x50;
          uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar17 != 0) {
            piVar20 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar21 + (long)(*piVar20 + 5) * 0x10 + 0x138);
                goto LAB_06b73e1c;
              }
              uVar17 = uVar17 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar17 != 0);
          }
          uVar13 = 5;
          puVar9 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar2,5);
LAB_06b73e1c:
          iVar4 = (*(code *)*puVar9)(plVar10,puVar9[1]);
          if (iVar4 <= (int)uVar3) {
            uStack_108 = param_2[1];
            uStack_110 = *param_2;
            uStack_f8 = param_2[3];
            uStack_100 = param_2[2];
            uVar16 = func_0x06b993dc(*(undefined8 *)(param_1 + 0x20),&uStack_110,uVar22,&uStack_a4,0
                                    );
            if ((uVar16 & 1) == 0) {
              return;
            }
            uStack_78 = param_2[1];
            uStack_80 = *param_2;
            uStack_68 = param_2[3];
            uStack_70 = param_2[2];
            lVar21 = *plVar10;
            uVar16 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar16 == 0) goto LAB_06b73e8c;
            piVar20 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            goto LAB_06b73e74;
          }
        }
        uVar17 = (ulong)*(uint *)(lVar7 + 0x18);
        unaff_x27 = unaff_x27 + 1;
      } while ((long)unaff_x27 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return;
  }
LAB_06b73f0c:
  lVar7 = lVar21;
  func_0x03280cac();
  puVar23 = param_5;
  uVar22 = param_6;
  plVar10 = plVar8;
LAB_06b73f10:
  uVar5 = 0x6b73f14;
  auVar28 = func_0x03280cb4();
  puVar9 = auVar28._8_8_;
  lVar21 = auVar28._0_8_;
  goto SUB_06b73f14;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar20 = piVar20 + 4;
    if (uVar16 == 0) break;
LAB_06b73e74:
    if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar21 + (long)(*piVar20 + 6) * 0x10 + 0x138);
      goto LAB_06b73eac;
    }
  }
LAB_06b73e8c:
  puVar9 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar2,6);
LAB_06b73eac:
  uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
  uVar16 = (ulong)uStack_a4;
  uVar13 = uVar13 & 0xffffffff;
  puVar9 = &uStack_130;
  uStack_128 = uStack_78;
  uStack_130 = uStack_80;
  uStack_118 = uStack_68;
  uStack_120 = uStack_70;
  uVar5 = 0x6b73edc;
  lVar21 = param_1;
SUB_06b73f14:
  puVar1 = PTR_DAT_077730b8;
  uStack_190 = uVar5;
  uStack_188 = unaff_x27;
  puStack_180 = puVar27;
  puStack_178 = puVar25;
  plStack_170 = plVar10;
  puStack_168 = puVar24;
  uStack_160 = uVar6;
  lStack_158 = lVar7;
  lStack_150 = param_1;
  puStack_148 = param_2;
  if ((bRam0000000007e2a6f6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077730f8);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_0782fe80);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_0782feb0);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a6f6 = 1;
  }
  plVar10 = *(long **)(lVar21 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar8 = (long *)func_0x0624cb20(uVar13 & 0xffffffff,0);
  if (plVar8 != (long *)0x0) {
    lVar7 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07779818) {
          puVar11 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b74060;
        }
        uVar6 = uVar6 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar6 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07779818,0);
LAB_06b74060:
    uVar5 = (*(code *)*puVar11)(plVar8,puVar11[1]);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_077730f8) {
            puVar11 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b740c8;
          }
          uVar6 = uVar6 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar6 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077730f8,0);
LAB_06b740c8:
      plVar10 = (long *)(*(code *)*puVar11)(plVar10,uVar5,puVar11[1]);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar11 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_06b74134;
            }
            uVar6 = uVar6 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar6 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777c248,0);
LAB_06b74134:
        lVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (lVar7 != 0) {
          uVar5 = func_0x0414419c(lVar7,0,*(undefined8 *)PTR_DAT_0777e510);
          puVar25 = PTR_DAT_0782fe80;
          puVar27 = PTR_DAT_0774f158;
          plVar10 = *(long **)(lVar21 + 0x18);
          if (plVar10 != (long *)0x0) {
            lVar7 = *plVar10;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_077c16b0) {
                  puVar11 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_06b741c8;
                }
                uVar6 = uVar6 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar6 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077c16b0,0);
LAB_06b741c8:
            uVar5 = (*(code *)*puVar11)(plVar10,uVar5,uVar16 & 0xffffffff,4,0,0,puVar11[1]);
            uStack_1a8 = puVar9[1];
            uStack_1b0 = *puVar9;
            uStack_198 = puVar9[3];
            uStack_1a0 = puVar9[2];
            func_0x06b98e60(&uStack_1b0,uVar5,puVar23,0);
            uVar14 = *(undefined8 *)puVar27;
            uVar14 = func_0x06ba3134(puVar23,*(undefined8 *)(lVar21 + 0x10),uVar14,uVar14,uVar14,0);
            uVar15 = *(undefined8 *)puVar27;
            uVar15 = func_0x06ba3134(uVar5,*(undefined8 *)(lVar21 + 0x10),uVar15,uVar15,uVar15,0);
            lVar7 = puVar9[2];
            uVar12 = func_0x03280ca0(*(undefined8 *)puVar25);
            func_0x06b9aa90(uVar12,puVar23,uVar5,uVar22 & 0xffffffff,uVar16 & 0xffffffff,4,uVar14,
                            uVar15,0,0,0,0);
            puVar27 = PTR_DAT_0782fe78;
            if (lVar7 != 0) {
              func_0x03ec33e4(lVar7,uVar12,*(undefined8 *)PTR_DAT_0782feb0);
              lVar7 = puVar9[2];
              uVar14 = func_0x03280ca0(*(undefined8 *)puVar27);
              func_0x06b9a828(uVar14,uVar5,uVar15,0);
              if (lVar7 != 0) {
                func_0x03ec33e4(lVar7,uVar14,*(undefined8 *)PTR_DAT_0782fea8);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_0x03280cac();
  return;
}

