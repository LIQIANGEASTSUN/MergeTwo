/* Ghidra 12.1.2 native pseudocode; RVA 0x6A993DC; Merger.MergeBoard.Extensions.MergeBoardLayoutExtensions.TryGetClosestEmptyPositionFromContext; status ok */


/* WARNING: Possible PIC construction at 0x06b995c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9987c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b99b7c: Changing call to branch */

undefined8 *
Merger_MergeBoard_Extensions_MergeBoardLayoutExtensions__TryGetClosestEmptyPositionFromContext
          (long *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar12 = PTR_DAT_078325e8;
  puVar5 = PTR_DAT_0782fea0;
  puVar9 = PTR_DAT_0782fe98;
  puVar6 = PTR_DAT_0782fe68;
  puVar7 = PTR_DAT_0782fe50;
  puVar4 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a830 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_0782fe50);
    func_0x03280a18(PTR_DAT_0782fe60);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0782fe70);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_0782fe98);
    func_0x03280a18(PTR_DAT_0782fea0);
    func_0x03280a18(PTR_DAT_078325f0);
    func_0x03280a18(PTR_DAT_078325e8);
    bRam0000000007e2a830 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  uVar16 = func_0x03d19c6c(*(undefined8 *)puVar7);
  uVar17 = func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x06015d08(uVar17,0,*(undefined8 *)puVar4,0);
  uVar22 = *(undefined8 *)puVar5;
  uStack_78 = uStack_b8;
  uStack_80 = uStack_c0;
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  func_0x03e64a64(&uStack_a0,&uStack_80,uVar16,uVar17);
  uVar16 = func_0x04485bc8(&uStack_a0,*(undefined8 *)puVar9);
  lVar23 = *(long *)puVar12;
  if (*(int *)(lVar23 + 0xe0) == 0) {
    func_0x03280b8c(lVar23);
    lVar23 = *(long *)puVar12;
  }
  puVar6 = PTR_DAT_0782fe60;
  puVar4 = PTR_DAT_077c1cf8;
  lVar28 = *(long *)(*(long *)(lVar23 + 0xb8) + 8);
  if (lVar28 == 0) {
    if (*(int *)(lVar23 + 0xe0) == 0) {
      func_0x03280b8c(lVar23);
      lVar23 = *(long *)puVar12;
    }
    uVar17 = **(undefined8 **)(lVar23 + 0xb8);
    uVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
    func_0x0534decc(uVar16,uVar17,*(undefined8 *)PTR_DAT_078325f0,0);
    puVar18 = (undefined8 *)(*(long *)(*(long *)puVar12 + 0xb8) + 8);
    *puVar18 = uVar16;
  }
  else {
    uVar21 = *(ulong *)PTR_DAT_0782fe60;
    uVar17 = func_0x03d4d48c(uVar16,lVar28);
    uVar17 = func_0x03d5fde0(uVar17,*(undefined8 *)puVar4);
    if (param_1 != (long *)0x0) {
      lVar23 = *param_1;
      uVar21 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar21 != 0) {
        piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_077c1e40) {
            puVar18 = (undefined8 *)(lVar23 + (long)(*piVar26 + 2) * 0x10 + 0x138);
            goto LAB_06b99644;
          }
          uVar21 = uVar21 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar21 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(param_1,*(long *)PTR_DAT_077c1e40,2);
LAB_06b99644:
      uVar15 = (*(code *)*puVar18)(param_1,uVar17,param_3 & 0xffffffff,param_4,puVar18[1]);
      return (undefined8 *)(ulong)(uVar15 & 1);
    }
    auVar34 = func_0x03280cac();
    puVar14 = PTR_DAT_078325e8;
    puVar13 = PTR_DAT_0782fea0;
    puVar11 = PTR_DAT_0782fe98;
    puVar10 = PTR_DAT_0782fe68;
    puVar8 = PTR_DAT_0782fe50;
    puVar5 = PTR_DAT_0782fe48;
    puVar18 = auVar34._8_8_;
    plVar19 = auVar34._0_8_;
    uStack_120 = 0x7e2a000;
    uStack_118 = 0x6b99684;
    puStack_110 = puVar7;
    puStack_108 = puVar6;
    puStack_100 = puVar4;
    puStack_f8 = puVar12;
    puStack_f0 = puVar9;
    uVar27 = uVar21 & 0xffffffff;
    lStack_e8 = lVar28;
    uStack_e0 = uVar16;
    plStack_d8 = param_1;
    uStack_d0 = param_3;
    uStack_c8 = param_4;
    if ((bRam0000000007e2a831 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782fe48);
      func_0x03280a18(PTR_DAT_0782fe50);
      func_0x03280a18(PTR_DAT_0782fe60);
      func_0x03280a18(PTR_DAT_077c1cf8);
      func_0x03280a18(PTR_DAT_0782fe68);
      func_0x03280a18(PTR_DAT_0782fe70);
      func_0x03280a18(PTR_DAT_077c1e40);
      func_0x03280a18(PTR_DAT_07759ac8);
      func_0x03280a18(PTR_DAT_0782fe98);
      func_0x03280a18(PTR_DAT_0782fea0);
      func_0x03280a18(PTR_DAT_078325f8);
      func_0x03280a18(PTR_DAT_078325e8);
      bRam0000000007e2a831 = 1;
    }
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = puVar18[1];
    uStack_180 = *puVar18;
    uStack_168 = puVar18[3];
    uStack_170 = puVar18[2];
    uVar16 = func_0x03d19c6c(*(undefined8 *)puVar8);
    uVar17 = func_0x03280ca0(*(undefined8 *)puVar10);
    func_0x06015d08(uVar17,0,*(undefined8 *)puVar5,0);
    uStack_138 = uStack_178;
    uStack_140 = uStack_180;
    uStack_128 = uStack_168;
    uStack_130 = uStack_170;
    func_0x03e64a64(&uStack_160,&uStack_140,uVar16,uVar17,*(undefined8 *)puVar13);
    lVar23 = func_0x04485bc8(&uStack_160,*(undefined8 *)puVar11);
    lVar28 = *(long *)puVar14;
    if (*(int *)(lVar28 + 0xe0) == 0) {
      func_0x03280b8c(lVar28);
      lVar28 = *(long *)puVar14;
    }
    puVar7 = PTR_DAT_0782fe60;
    puVar4 = PTR_DAT_077c1cf8;
    lVar29 = *(long *)(*(long *)(lVar28 + 0xb8) + 0x10);
    if (lVar29 == 0) {
      if (*(int *)(lVar28 + 0xe0) == 0) {
        func_0x03280b8c(lVar28);
        lVar28 = *(long *)puVar14;
      }
      uVar17 = **(undefined8 **)(lVar28 + 0xb8);
      uVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
      func_0x0534decc(uVar16,uVar17,*(undefined8 *)PTR_DAT_078325f8,0);
      puVar18 = (undefined8 *)(*(long *)(*(long *)puVar14 + 0xb8) + 0x10);
      *puVar18 = uVar16;
    }
    else {
      uVar17 = *(undefined8 *)PTR_DAT_0782fe60;
      uVar16 = func_0x03d4d48c(lVar23,lVar29);
      lVar28 = func_0x03d5fde0(uVar16,*(undefined8 *)puVar4);
      if (lVar28 != 0) {
        lVar24 = *(long *)(lVar28 + 0x10);
        lVar25 = *(long *)PTR_DAT_07759ac8;
        *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
        lVar23 = lVar28;
        if (lVar24 != 0) {
          uVar15 = *(uint *)(lVar28 + 0x18);
          if (uVar15 < *(uint *)(lVar24 + 0x18)) {
            *(uint *)(lVar28 + 0x18) = uVar15 + 1;
            *(int *)(lVar24 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar21;
          }
          else {
            uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70);
            func_0x04119c98(lVar28,uVar27);
          }
          if (plVar19 != (long *)0x0) {
            lVar23 = *plVar19;
            uVar21 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar21 != 0) {
              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_077c1e40) {
                  puVar18 = (undefined8 *)(lVar23 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                  goto LAB_06b99958;
                }
                uVar21 = uVar21 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar21 != 0);
            }
            puVar18 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_077c1e40,1);
LAB_06b99958:
            uVar15 = (*(code *)*puVar18)(plVar19,lVar28,uVar22,puVar18[1]);
            return (undefined8 *)(ulong)(uVar15 & 1);
          }
        }
      }
      auVar34 = func_0x03280cac();
      puVar13 = PTR_DAT_078325e8;
      puVar10 = PTR_DAT_0782fea0;
      puVar12 = PTR_DAT_0782fe98;
      puVar5 = PTR_DAT_0782fe68;
      puVar9 = PTR_DAT_0782fe50;
      puVar6 = PTR_DAT_0782fe48;
      puVar18 = auVar34._8_8_;
      plVar20 = auVar34._0_8_;
      uStack_1e0 = 0x6b99994;
      puStack_1d0 = puVar8;
      puStack_1c8 = puVar7;
      puStack_1c0 = puVar4;
      puStack_1b8 = puVar14;
      puStack_1b0 = puVar11;
      lStack_1a8 = lVar29;
      lStack_1a0 = lVar23;
      uStack_198 = uVar27;
      plStack_190 = plVar19;
      uStack_188 = uVar22;
      if ((bRam0000000007e2a832 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0782fe48);
        func_0x03280a18(PTR_DAT_0782fe50);
        func_0x03280a18(PTR_DAT_0782fe60);
        func_0x03280a18(PTR_DAT_077c1cf8);
        func_0x03280a18(PTR_DAT_0782fe68);
        func_0x03280a18(PTR_DAT_0782fe70);
        func_0x03280a18(PTR_DAT_077c1e40);
        func_0x03280a18(PTR_DAT_0782fe98);
        func_0x03280a18(PTR_DAT_0782fea0);
        func_0x03280a18(PTR_DAT_07832600);
        func_0x03280a18(PTR_DAT_078325e8);
        bRam0000000007e2a832 = 1;
      }
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uVar33 = puVar18[1];
      uVar32 = *puVar18;
      uVar31 = puVar18[3];
      uVar30 = puVar18[2];
      uVar16 = func_0x03d19c6c(*(undefined8 *)puVar9);
      uVar22 = func_0x03280ca0(*(undefined8 *)puVar5);
      func_0x06015d08(uVar22,0,*(undefined8 *)puVar6,0);
      uStack_200 = uVar32;
      uStack_1f8 = uVar33;
      uStack_1f0 = uVar30;
      uStack_1e8 = uVar31;
      func_0x03e64a64(&uStack_220,&uStack_200,uVar16,uVar22,*(undefined8 *)puVar10);
      uVar16 = func_0x04485bc8(&uStack_220,*(undefined8 *)puVar12);
      lVar23 = *(long *)puVar13;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        func_0x03280b8c(lVar23);
        lVar23 = *(long *)puVar13;
      }
      puVar4 = PTR_DAT_077c1cf8;
      lVar28 = *(long *)(*(long *)(lVar23 + 0xb8) + 0x18);
      if (lVar28 == 0) {
        if (*(int *)(lVar23 + 0xe0) == 0) {
          func_0x03280b8c(lVar23);
          lVar23 = *(long *)puVar13;
        }
        uVar17 = **(undefined8 **)(lVar23 + 0xb8);
        uVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
        func_0x0534decc(uVar16,uVar17,*(undefined8 *)PTR_DAT_07832600,0);
        puVar18 = (undefined8 *)(*(long *)(*(long *)puVar13 + 0xb8) + 0x18);
        *puVar18 = uVar16;
      }
      else {
        uVar16 = func_0x03d4d48c(uVar16,lVar28,*(undefined8 *)PTR_DAT_0782fe60);
        uVar16 = func_0x03d5fde0(uVar16,*(undefined8 *)puVar4);
        if (plVar20 != (long *)0x0) {
          lVar23 = *plVar20;
          uVar21 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar21 != 0) {
            piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_077c1e40) {
                puVar18 = (undefined8 *)(lVar23 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                goto LAB_06b99bf8;
              }
              uVar21 = uVar21 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar21 != 0);
          }
          puVar18 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_077c1e40,1);
LAB_06b99bf8:
          uVar15 = (*(code *)*puVar18)(plVar20,uVar16,uVar17,puVar18[1]);
          return (undefined8 *)(ulong)(uVar15 & 1);
        }
        func_0x03280cac();
        puVar4 = PTR_DAT_078325e8;
        if ((bRam0000000007e2a833 & 1) == 0) {
          func_0x03280a18(PTR_DAT_078325e8);
          bRam0000000007e2a833 = 1;
        }
        uVar16 = func_0x03280ca0(*(undefined8 *)puVar4);
        func_0x057da5fc(uVar16,0);
        **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar16;
        puVar18 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
    }
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar18 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar18 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar18;
}

