/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6A9E0; Merger.MergeBoard.Systems.InteractionCostSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b6ad80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b6afc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b6ad84) */
/* WARNING: Removing unreachable block (ram,0x06b6afc4) */
/* WARNING: Removing unreachable block (ram,0x06b6afc8) */
/* WARNING: Removing unreachable block (ram,0x06b6afe8) */
/* WARNING: Removing unreachable block (ram,0x06b6aff8) */
/* WARNING: Removing unreachable block (ram,0x06b6b054) */
/* WARNING: Removing unreachable block (ram,0x06b6b06c) */
/* WARNING: Removing unreachable block (ram,0x06b6b10c) */
/* WARNING: Removing unreachable block (ram,0x06b6b16c) */
/* WARNING: Removing unreachable block (ram,0x06b6b13c) */
/* WARNING: Removing unreachable block (ram,0x06b6b154) */

void Merger_MergeBoard_Systems_InteractionCostSystem__Tick(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x1;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [12];
  byte abStack_1d8 [40];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  byte bStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined8 uStack_147;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  plVar7 = (long *)PTR_DAT_07830eb8;
  puVar2 = PTR_DAT_07830eb0;
  puVar1 = PTR_DAT_07830ea8;
  lVar10 = tpidr_el0;
  lStack_68 = *(long *)(lVar10 + 0x28);
  if ((bRam0000000007e2a6c1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830ea8);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07830ec0);
    func_0x03280a18(PTR_DAT_07830ec8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07830ed0);
    func_0x03280a18(PTR_DAT_07830eb8);
    func_0x03280a18(PTR_DAT_07830eb0);
    func_0x03280a18(PTR_DAT_07830ed8);
    bRam0000000007e2a6c1 = 1;
  }
  uStack_70 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_71 = 0;
  uStack_80 = 0;
  uStack_128 = param_2[1];
  uStack_130 = *param_2;
  uStack_118 = param_2[3];
  uStack_120 = param_2[2];
  uVar4 = func_0x03d1a204(*(undefined8 *)puVar1);
  uStack_168 = uStack_128;
  uStack_170 = uStack_130;
  bStack_158 = (byte)uStack_118;
  uStack_157 = (undefined7)((ulong)uStack_118 >> 8);
  uStack_160 = uStack_120;
  func_0x03e65464(&uStack_c0,&uStack_170,uVar4,0,*(undefined8 *)puVar2);
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_100 = uStack_b0;
  plVar5 = (long *)func_0x0448c0a4(&uStack_110,*plVar7);
  if (plVar5 == (long *)0x0) {
LAB_06b6ae2c:
    func_0x03280cac();
LAB_06b6ae30:
    func_0x03280cac();
LAB_06b6ae34:
    func_0x03280ca4(param_2);
    do {
      auVar15 = func_0x072ce990();
      if (auVar15._8_4_ != 1) {
        if (plVar7 == (long *)0x0) goto LAB_06b6aee8;
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 == 0) goto LAB_06b6aec0;
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_06b6aea8;
      }
      plVar5 = (long *)func_0x072ce910(auVar15._0_8_);
      param_2 = (undefined8 *)*plVar5;
      func_0x072ce920();
LAB_06b6ad8c:
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06b6ade4;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b6ade4:
        (*(code *)*puVar6)(plVar7,puVar6[1]);
      }
      if (param_2 != (undefined8 *)0x0) goto LAB_06b6ae34;
      if (*(long *)(lVar10 + 0x28) == lStack_68) {
        return;
      }
    } while( true );
  }
  lVar9 = *plVar5;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07830ec0) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_06b6ab5c;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07830ec0,0);
LAB_06b6ab5c:
  plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  if (plVar7 == (long *)0x0) goto LAB_06b6ae30;
  puVar6 = (undefined8 *)((ulong)&uStack_170 | 1);
  puVar14 = (undefined8 *)((ulong)abStack_1d8 | 1);
  do {
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b6abd8;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0774e8e0,0);
LAB_06b6abd8:
    uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar11 & 1) == 0) {
      param_2 = (undefined8 *)0x0;
      goto LAB_06b6ad8c;
    }
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07830ec8) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b6ac3c;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07830ec8,0);
LAB_06b6ac3c:
    (*(code *)*puVar8)(&uStack_170,plVar7,puVar8[1]);
    bVar3 = bStack_158;
    uVar4 = uStack_170;
    uStack_88 = uStack_14f;
    uStack_90 = CONCAT17(uStack_150,uStack_157);
    uStack_b0 = uStack_147;
    uStack_80 = uStack_147;
    uStack_70 = uStack_137;
    uStack_78 = uStack_13f;
    uStack_71 = uStack_138;
  } while ((uStack_168 & 1) == 0);
  if ((bStack_158 & 1) != 0) {
    plVar5 = *(long **)(param_1 + 0x10);
    uStack_b8 = uStack_14f;
    uStack_b0 = uStack_147;
    uStack_c0 = uStack_90;
    if (plVar5 == (long *)0x0) {
      func_0x03280cac();
      goto LAB_06b6ae2c;
    }
    uStack_e8 = uStack_14f;
    uStack_d8 = uStack_13f;
    uStack_e0 = uStack_147;
    uStack_d1 = uStack_138;
    uStack_d0 = uStack_137;
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uStack_f0 = uStack_90;
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07830ed0) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_06b6ad00;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07830ed0,1);
LAB_06b6ad00:
    pcVar12 = (code *)*puVar8;
    uStack_170 = CONCAT71(uStack_170._1_7_,bVar3);
    *(ulong *)((long)puVar6 + 0x1f) = CONCAT71(uStack_d0,uStack_d1);
    puVar6[1] = uStack_e8;
    *puVar6 = uStack_f0;
    puVar6[3] = CONCAT17(uStack_d1,uStack_d8);
    puVar6[2] = uStack_e0;
    (*pcVar12)(plVar5,&uStack_170,puVar8[1]);
    uStack_188 = param_2[1];
    uStack_190 = *param_2;
    uStack_178 = param_2[3];
    uStack_180 = param_2[2];
    bStack_158 = (byte)uStack_178;
    uStack_157 = (undefined7)((ulong)uStack_178 >> 8);
    uStack_170 = uStack_190;
    uStack_168 = uStack_188;
    uStack_160 = uStack_180;
    func_0x03ec5e54(&uStack_170,uVar4,0,*(undefined8 *)PTR_DAT_07830ed8);
  }
  uStack_1a8 = param_2[1];
  uStack_1b0 = *param_2;
  uStack_198 = param_2[3];
  uStack_1a0 = param_2[2];
  abStack_1d8[0] = bVar3;
  *(ulong *)((long)puVar14 + 0x1f) = CONCAT71(uStack_70,uStack_71);
  puVar14[1] = uStack_88;
  *puVar14 = uStack_90;
  puVar14[3] = CONCAT17(uStack_71,uStack_78);
  puVar14[2] = uStack_80;
  puVar6 = &uStack_1b0;
SUB_06b6af00:
  puVar1 = PTR_DAT_07830ee0;
  if ((bRam0000000007e2a6c2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8,puVar6);
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07830ee8);
    func_0x03280a18(PTR_DAT_07830ef0);
    func_0x03280a18(PTR_DAT_077c1d40);
    func_0x03280a18(PTR_DAT_07830ef8);
    func_0x03280a18(PTR_DAT_07830f00);
    func_0x03280a18(PTR_DAT_07830f08);
    func_0x03280a18(PTR_DAT_07830ee0);
    bRam0000000007e2a6c2 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_06b6aea8:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_06b6aedc;
    }
  }
LAB_06b6aec0:
  puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b6aedc:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_06b6aee8:
  func_0x03365958(auVar15._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  puVar6 = extraout_x1;
  goto SUB_06b6af00;
}

