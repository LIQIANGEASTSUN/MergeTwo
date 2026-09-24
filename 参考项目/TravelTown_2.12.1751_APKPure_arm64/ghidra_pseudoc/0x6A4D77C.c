/* Ghidra 12.1.2 native pseudocode; RVA 0x6A4D77C; Merger.MergeBoard.Utils.ExpendSpawnService.TrySpawnExpendedItems; status ok */


/* WARNING: Possible PIC construction at 0x06b4df20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b4df6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b4e52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b4e768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b4e7ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b4e530) */
/* WARNING: Removing unreachable block (ram,0x06b4e534) */
/* WARNING: Removing unreachable block (ram,0x06b4e54c) */
/* WARNING: Removing unreachable block (ram,0x06b4e554) */
/* WARNING: Removing unreachable block (ram,0x06b4e5ac) */
/* WARNING: Removing unreachable block (ram,0x06b4e5b8) */
/* WARNING: Removing unreachable block (ram,0x06b4e5e4) */
/* WARNING: Removing unreachable block (ram,0x06b4e5f0) */
/* WARNING: Removing unreachable block (ram,0x06b4e5c4) */
/* WARNING: Removing unreachable block (ram,0x06b4e5f4) */
/* WARNING: Removing unreachable block (ram,0x06b4e5d0) */
/* WARNING: Removing unreachable block (ram,0x06b4e5f8) */
/* WARNING: Removing unreachable block (ram,0x06b4e7b0) */
/* WARNING: Removing unreachable block (ram,0x06b4e608) */
/* WARNING: Removing unreachable block (ram,0x06b4e60c) */
/* WARNING: Removing unreachable block (ram,0x06b4e610) */
/* WARNING: Removing unreachable block (ram,0x06b4e62c) */
/* WARNING: Removing unreachable block (ram,0x06b4e634) */
/* WARNING: Removing unreachable block (ram,0x06b4e65c) */
/* WARNING: Removing unreachable block (ram,0x06b4e640) */
/* WARNING: Removing unreachable block (ram,0x06b4e64c) */
/* WARNING: Removing unreachable block (ram,0x06b4e66c) */
/* WARNING: Removing unreachable block (ram,0x06b4e754) */
/* WARNING: Removing unreachable block (ram,0x06b4df70) */
/* WARNING: Removing unreachable block (ram,0x06b4df24) */
/* WARNING: Removing unreachable block (ram,0x06b4df58) */
/* WARNING: Removing unreachable block (ram,0x06b4e76c) */
/* WARNING: Removing unreachable block (ram,0x06b4e7d0) */
/* WARNING: Removing unreachable block (ram,0x06b4e798) */

long * Merger_MergeBoard_Utils_ExpendSpawnService__TrySpawnExpendedItems
                 (long *param_1,undefined *param_2,undefined8 *param_3,long *param_4,long *param_5,
                 long param_6,uint param_7)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 (*pauVar13) [16];
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined *extraout_x1;
  long extraout_x1_00;
  uint *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  int *piVar30;
  undefined *puVar31;
  uint *puVar32;
  ulong uVar33;
  long *plVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined *puVar37;
  long lVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  code *pcStack_240;
  long *plStack_220;
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  long *plStack_1e0;
  uint *puStack_1d8;
  long *plStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 uStack_1b8;
  byte bStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_190;
  long *plStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  uint uStack_16c;
  long lStack_168;
  long *plStack_160;
  undefined *puStack_158;
  long *plStack_150;
  uint uStack_144;
  undefined8 uStack_140;
  long lStack_138;
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
  
  puVar8 = auStack_1c0;
  puVar32 = (uint *)(ulong)param_7;
  plStack_160 = param_1;
  puStack_158 = param_2;
  if ((bRam0000000007e2a5a5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a310);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_0782fe50);
    func_0x03280a18(PTR_DAT_0782fe58);
    func_0x03280a18(PTR_DAT_0782fe60);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_077cd968);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0782fe70);
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_0782fe80);
    func_0x03280a18(PTR_DAT_07759ac8);
    func_0x03280a18(PTR_DAT_07765d48);
    func_0x03280a18(PTR_DAT_0782fe88);
    func_0x03280a18(PTR_DAT_0782fe90);
    func_0x03280a18(PTR_DAT_07759ab8);
    func_0x03280a18(PTR_DAT_078266a8);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_0782fe98);
    func_0x03280a18(PTR_DAT_0782fea0);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_0782feb0);
    func_0x03280a18(PTR_DAT_0782feb8);
    func_0x03280a18(PTR_DAT_0782fec0);
    param_1 = (long *)func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a5a5 = 1;
  }
  plVar34 = (long *)PTR_DAT_0782fec0;
  puVar7 = PTR_DAT_0782fea0;
  puVar6 = PTR_DAT_0782fe98;
  puVar37 = PTR_DAT_0782fe68;
  puVar31 = PTR_DAT_0782fe48;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a4 = 0;
  if (*(int *)(param_6 + 8) < 1) {
    return param_1;
  }
  uStack_e8 = param_3[1];
  uStack_f0 = *param_3;
  uStack_d8 = param_3[3];
  uStack_e0 = param_3[2];
  plStack_150 = param_4;
  uVar14 = func_0x03d19c6c(*(undefined8 *)PTR_DAT_0782fe50);
  plVar15 = (long *)func_0x03280ca0(*(undefined8 *)puVar37);
  func_0x06015d08(plVar15,0,*(undefined8 *)puVar31,0);
  puVar22 = *(uint **)puVar7;
  uStack_78 = uStack_e8;
  uStack_80 = uStack_f0;
  uStack_68 = uStack_d8;
  uStack_70 = uStack_e0;
  func_0x03e64a64(&uStack_c8,&uStack_80,uVar14,plVar15);
  uStack_98 = uStack_c0;
  uStack_a0 = uStack_c8;
  uStack_88 = uStack_b0;
  uStack_90 = uStack_b8;
  plVar16 = (long *)func_0x04485bc8(&uStack_a0,*(undefined8 *)puVar6);
  lVar25 = *plVar34;
  if (*(int *)(lVar25 + 0xe0) == 0) {
    func_0x03280b8c(lVar25);
    lVar25 = *plVar34;
  }
  puVar37 = PTR_DAT_0782fe60;
  puVar31 = PTR_DAT_077c1cf8;
  lVar38 = *(long *)(*(long *)(lVar25 + 0xb8) + 8);
  if (lVar38 == 0) {
    if (*(int *)(lVar25 + 0xe0) == 0) {
      func_0x03280b8c(lVar25);
      lVar25 = *plVar34;
    }
    plVar15 = (long *)**(undefined8 **)(lVar25 + 0xb8);
    lVar38 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
    puVar22 = (uint *)0x0;
    func_0x0534decc(lVar38,plVar15,*(undefined8 *)PTR_DAT_0782feb8);
    plVar17 = (long *)(*(long *)(*plVar34 + 0xb8) + 8);
    *plVar17 = lVar38;
    func_0x032809c4(plVar17,lVar38);
  }
  uVar14 = func_0x03d4d48c(plVar16,lVar38,*(undefined8 *)puVar37);
  puVar18 = (undefined8 *)func_0x03d5fde0(uVar14,*(undefined8 *)puVar31);
  plVar17 = plStack_150;
  puVar6 = PTR_DAT_077c1e40;
  plStack_220 = plVar16;
  puVar19 = param_3;
  if (param_5 != (long *)0x0) {
    lVar25 = *param_5;
    uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar28 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_077c1e40) {
          puVar19 = (undefined8 *)(lVar25 + (long)(*piVar30 + 3) * 0x10 + 0x138);
          goto LAB_06b4dadc;
        }
        uVar28 = uVar28 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar28 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(param_5,*(long *)PTR_DAT_077c1e40,3);
LAB_06b4dadc:
    uVar14 = (*(code *)*puVar19)(param_5,puVar18,puVar19[1]);
    lVar25 = func_0x03d5fde0(uVar14,*(undefined8 *)puVar31);
    plVar34 = plVar17;
    plVar15 = (long *)puVar6;
    puVar19 = puVar18;
    if (puVar18 != (undefined8 *)0x0) {
      lVar26 = puVar18[2];
      lVar29 = *(long *)PTR_DAT_07759ac8;
      *(int *)((long)puVar18 + 0x1c) = *(int *)((long)puVar18 + 0x1c) + 1;
      if (lVar26 != 0) {
        uVar5 = *(uint *)(puVar18 + 3);
        if (uVar5 < *(uint *)(lVar26 + 0x18)) {
          *(uint *)(puVar18 + 3) = uVar5 + 1;
          *(uint *)(lVar26 + (long)(int)uVar5 * 4 + 0x20) = param_7;
        }
        else {
          func_0x04119c98(puVar18,puVar32,
                          *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
        }
        puVar31 = (undefined *)0x0;
        if (lVar25 != 0) {
          plStack_220 = (long *)func_0x0411b2f8(lVar25,puVar32,*(undefined8 *)PTR_DAT_07765d48);
          if (*(char *)(param_6 + 0xc) == '\0') {
            plVar16 = (long *)(ulong)*(uint *)(lVar25 + 0x18);
            uVar9 = *(undefined4 *)(param_6 + 8);
            if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            plStack_220 = (long *)func_0x05797580(plVar16,uVar9,0);
            uStack_144 = (uint)plStack_220;
            plVar15 = (long *)PTR_DAT_077c1e40;
          }
          else {
            uStack_144 = *(uint *)(param_6 + 8);
          }
          lVar38 = *(long *)(param_6 + 0x18);
          lStack_168 = lVar25;
          if (lVar38 == 0) {
            lVar38 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078266a8);
            plStack_220 = (long *)func_0x04143c38(lVar38,*(undefined8 *)PTR_DAT_0782fe88);
          }
          puVar31 = (undefined *)(ulong)uStack_144;
          if (0 < (int)uStack_144) {
            plStack_220 = plVar16;
            if (lVar38 == 0) goto LAB_06b4dff8;
            puVar37 = (undefined *)0x0;
            plStack_190 = (long *)0x0;
            plStack_188 = param_5;
            puStack_180 = puVar18;
            lStack_178 = param_6;
            uStack_16c = param_7;
            lStack_138 = lVar38;
            do {
              if (*(int *)(lVar38 + 0x18) < 1) {
LAB_06b4dc8c:
                plStack_220 = (long *)0x0;
LAB_06b4dc90:
                lVar38 = 0;
                plVar16 = plStack_220;
LAB_06b4dc94:
                plStack_220 = (long *)func_0x055f7aac(lVar38,0);
                lVar25 = lStack_138;
                if (((ulong)plStack_220 & 1) == 0) {
                  lVar25 = *param_5;
                  uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar28 != 0) {
                    piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar30 + -2) == *plVar15) {
                        puVar20 = (undefined8 *)(lVar25 + (long)(*piVar30 + 2) * 0x10 + 0x138);
                        goto LAB_06b4dcf4;
                      }
                      uVar28 = uVar28 - 1;
                      piVar30 = piVar30 + 4;
                    } while (uVar28 != 0);
                  }
                  puVar20 = (undefined8 *)func_0x03256b10(param_5,*plVar15,2);
LAB_06b4dcf4:
                  puVar22 = &uStack_a4;
                  plStack_220 = (long *)(*(code *)*puVar20)(param_5,puVar18,param_7,puVar22,
                                                            puVar20[1]);
                  if ((((ulong)plStack_220 & 1) != 0) && (-1 < (int)uStack_a4)) {
                    lVar25 = puVar18[2];
                    lVar26 = *(long *)PTR_DAT_07759ac8;
                    *(int *)((long)puVar18 + 0x1c) = *(int *)((long)puVar18 + 0x1c) + 1;
                    plStack_220 = plVar16;
                    if (lVar25 == 0) goto LAB_06b4dff8;
                    uVar5 = *(uint *)(puVar18 + 3);
                    if (uVar5 < *(uint *)(lVar25 + 0x18)) {
                      *(uint *)(puVar18 + 3) = uVar5 + 1;
                      *(uint *)(lVar25 + (long)(int)uVar5 * 4 + 0x20) = uStack_a4;
                    }
                    else {
                      func_0x04119c98(puVar18,uStack_a4,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                    }
                    func_0x0411b2f8(lStack_168,uStack_a4,*(undefined8 *)PTR_DAT_07765d48);
                    uVar5 = uStack_a4;
                    if ((plVar16 == (long *)0x0) || (plVar17 == (long *)0x0)) goto LAB_06b4dff8;
                    lVar26 = *plVar17;
                    lVar25 = plVar16[4];
                    uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar28 == 0) goto LAB_06b4ddf4;
                    piVar30 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    goto LAB_06b4dddc;
                  }
                  lVar25 = lStack_138;
                  if (*(char *)(param_6 + 0xc) != '\0') {
                    uStack_108 = param_3[1];
                    uStack_110 = *param_3;
                    uStack_f8 = param_3[3];
                    uStack_100 = param_3[2];
                    puVar22 = (uint *)&uStack_110;
                    plStack_220 = (long *)Merger_MergeBoard_Utils_ExpendSpawnService__AddSpawnFailedResult
                                                    (plStack_220,plVar16,plVar17);
                    lVar25 = lStack_138;
                  }
                }
              }
              else {
                uVar14 = func_0x03d2c6a8(lVar38,*(undefined8 *)PTR_DAT_0782fe58);
                uVar14 = func_0x03d5ffd0(uVar14,*(undefined8 *)PTR_DAT_077cd968);
                plStack_220 = (long *)Merger_MergeBoard_Utils_ExpendSpawnService__SelectWeightedItem
                                                (uVar14,uVar14);
                if (plStack_220 == (long *)0x0) goto LAB_06b4dc90;
                bVar2 = *(byte *)(*(long *)PTR_DAT_0777a310 + 0x130);
                if ((*(byte *)(*plStack_220 + 0x130) < bVar2) ||
                   (*(long *)(*(long *)(*plStack_220 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_0777a310)) goto LAB_06b4dc8c;
                lVar25 = lVar38;
                if (*(char *)((long)plStack_220 + 0x2a) == '\0') {
                  plVar16 = (long *)plStack_220[2];
                  if (plVar16 == (long *)0x0) {
                    lVar38 = 0;
                  }
                  else {
                    puVar31 = (undefined *)0x0;
                    if (plVar16 == (long *)0x0) goto LAB_06b4dff8;
                    lVar38 = (**(code **)(*plVar16 + 0x1c8))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
                    plStack_190 = plVar16;
                  }
                  puVar31 = (undefined *)(ulong)uStack_144;
                  plVar16 = plStack_220;
                  goto LAB_06b4dc94;
                }
              }
              uVar5 = (int)puVar37 + 1;
              puVar37 = (undefined *)(ulong)uVar5;
              lVar38 = lVar25;
            } while (uVar5 != (uint)puVar31);
          }
          return plStack_220;
        }
      }
    }
  }
LAB_06b4dff8:
  func_0x03280cac();
  puVar8 = auStack_210;
  pcStack_1f0 = Merger_MergeBoard_Utils_ExpendSpawnService__SelectWeightedItem;
  puStack_1e8 = puVar37;
  plStack_1e0 = plVar34;
  puStack_1d8 = puVar32;
  plStack_1d0 = plStack_220;
  puStack_1c8 = puVar31;
  if ((bRam0000000007e2a5a8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fec8);
    func_0x03280a18(PTR_DAT_0782fed0);
    func_0x03280a18(PTR_DAT_0782fed8);
    func_0x03280a18(PTR_DAT_0782fee0);
    func_0x03280a18(PTR_DAT_0782fee8);
    func_0x03280a18(PTR_DAT_077cd8f8);
    func_0x03280a18(PTR_DAT_0782fef0);
    func_0x03280a18(PTR_DAT_078103b0);
    func_0x03280a18(PTR_DAT_0782fef8);
    func_0x03280a18(PTR_DAT_0782ff00);
    func_0x03280a18(PTR_DAT_0782fec0);
    bRam0000000007e2a5a8 = 1;
  }
  puVar31 = PTR_DAT_0782fec0;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  if ((extraout_x1 == (undefined *)0x0) || (*(int *)(extraout_x1 + 0x18) == 0)) {
    plVar16 = (long *)0x0;
  }
  else if (*(int *)(extraout_x1 + 0x18) == 1) {
    plVar16 = (long *)func_0x0414419c(extraout_x1,0,*(undefined8 *)PTR_DAT_0782fef8);
  }
  else {
    lVar25 = *(long *)PTR_DAT_0782fec0;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar25 = *(long *)puVar31;
    }
    lVar26 = *(long *)(*(long *)(lVar25 + 0xb8) + 0x10);
    if (lVar26 == 0) {
      if (*(int *)(lVar25 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar25 = *(long *)puVar31;
      }
      uVar14 = **(undefined8 **)(lVar25 + 0xb8);
      lVar26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8f8);
      puVar22 = (uint *)0x0;
      func_0x05356664(lVar26,uVar14,*(undefined8 *)PTR_DAT_0782ff00);
      plVar34 = (long *)(*(long *)(*(long *)puVar31 + 0xb8) + 0x10);
      *plVar34 = lVar26;
      func_0x032809c4(plVar34,lVar26);
    }
    uVar9 = func_0x03d598d0(extraout_x1,lVar26,*(undefined8 *)PTR_DAT_0782fed0);
    plVar17 = (long *)0x0;
    iVar10 = func_0x06fd9864(0,uVar9);
    func_0x04145068(&uStack_208,extraout_x1,*(undefined8 *)PTR_DAT_0782fef0);
    puVar37 = PTR_DAT_0782fee0;
    plVar34 = (long *)0x0;
    do {
      uVar28 = func_0x051159b4(&uStack_208,*(undefined8 *)puVar37);
      plVar16 = plStack_1f8;
      if ((uVar28 & 1) == 0) {
        func_0x051159b0(&uStack_208,*(undefined8 *)PTR_DAT_0782fed8);
LAB_06b4e20c:
        plVar34 = (long *)func_0x03d476fc(extraout_x1,*(undefined8 *)PTR_DAT_0782fec8);
        return plVar34;
      }
      if (plStack_1f8 == (long *)0x0) {
        auVar41 = func_0x03280cac();
        puVar32 = auVar41._0_8_;
        if (auVar41._8_4_ == 1) {
          plVar16 = (long *)func_0x072ce910(puVar32);
          lVar25 = *plVar16;
          func_0x072ce920();
          func_0x051159b0(&uStack_208,*(undefined8 *)PTR_DAT_0782fed8);
          if (lVar25 == 0) goto LAB_06b4e20c;
          func_0x03280ca4(lVar25);
        }
        func_0x051159b0(&uStack_208,*(undefined8 *)PTR_DAT_0782fed8);
        func_0x03365958(puVar32);
        func_0x03280ca4(0);
        func_0x02f09514();
        pcStack_240 = Merger_MergeBoard_Utils_ExpendSpawnService__AddSpawnFailedResult;
        plStack_220 = (long *)0x0;
        if ((bRam0000000007e2a5a7 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0782ff08);
          func_0x03280a18(PTR_DAT_077c16b0);
          func_0x03280a18(PTR_DAT_0782ff10);
          func_0x03280a18(PTR_DAT_0782ff18);
          bRam0000000007e2a5a7 = 1;
        }
        if (((extraout_x1_00 == 0) ||
            (plVar16 = *(long **)(extraout_x1_00 + 0x10), plVar16 == (long *)0x0)) ||
           (uVar14 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0)),
           plVar17 == (long *)0x0)) goto LAB_06b4e434;
        lVar25 = *plVar17;
        cVar4 = *(char *)(extraout_x1_00 + 0x20);
        uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar28 == 0) goto LAB_06b4e370;
        piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        goto LAB_06b4e358;
      }
      uVar5 = *(int *)((long)plStack_1f8 + 0x24) + (int)plVar34;
      plVar34 = (long *)(ulong)uVar5;
    } while ((int)uVar5 <= iVar10);
    func_0x051159b0(&uStack_208,*(undefined8 *)PTR_DAT_0782fed8);
  }
  return plVar16;
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar30 = piVar30 + 4;
    if (uVar28 == 0) break;
LAB_06b4dddc:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_077c16b0) {
      puVar19 = (undefined8 *)(lVar26 + (long)(*piVar30 + 1) * 0x10 + 0x138);
      goto LAB_06b4de14;
    }
  }
LAB_06b4ddf4:
  puVar19 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077c16b0,1);
LAB_06b4de14:
  lVar38 = (*(code *)*puVar19)(plVar17,lVar38,uVar5,4,(char)lVar25 != '\0',0,puVar19[1]);
  puVar31 = puStack_158;
  uStack_128 = param_3[1];
  uStack_130 = *param_3;
  uStack_118 = param_3[3];
  uStack_120 = param_3[2];
  func_0x06b98e60(&uStack_130,lVar38,puStack_158,0);
  plVar34 = plStack_160;
  puVar6 = PTR_DAT_0774f158;
  uVar14 = *(undefined8 *)PTR_DAT_0774f158;
  uStack_140 = func_0x06ba3134(puVar31,plStack_160[2],uVar14,uVar14,uVar14,0);
  uVar14 = *(undefined8 *)puVar6;
  plStack_220 = (long *)func_0x06ba3134(lVar38,plVar34[2],uVar14,uVar14,uVar14,0);
  plVar17 = (long *)param_3[2];
  plVar34 = (long *)(ulong)uStack_a4;
  lVar25 = plVar16[5];
  uVar3 = *(undefined1 *)((long)plVar16 + 0x29);
  bVar2 = *(byte *)((long)plVar16 + 0x22);
  puVar19 = (undefined8 *)(ulong)bVar2;
  plVar21 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe80);
  puVar32 = (uint *)(ulong)uStack_16c;
  uStack_1a8 = 0;
  puVar22 = puVar32;
  plVar16 = plVar34;
  auStack_1c0[0] = (char)lVar25;
  uStack_1b8 = uVar3;
  bStack_1b0 = bVar2;
  func_0x06b9aa90(plVar21,puVar31,lVar38,puVar32,plVar34,2,uStack_140,plStack_220);
  plVar15 = plVar21;
  param_5 = plVar17;
  if (plVar17 == (long *)0x0) goto LAB_06b4dff8;
  puVar18 = *(undefined8 **)PTR_DAT_0782feb0;
  pcStack_240 = (code *)0x6b4df24;
  goto SUB_03ec33e4;
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar30 = piVar30 + 4;
    if (uVar28 == 0) break;
LAB_06b4e358:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_077c16b0) {
      puVar18 = (undefined8 *)(lVar25 + (long)(*piVar30 + 1) * 0x10 + 0x138);
      goto LAB_06b4e390;
    }
  }
LAB_06b4e370:
  puVar18 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077c16b0,1);
LAB_06b4e390:
  uVar14 = (*(code *)*puVar18)(plVar17,uVar14,0xffffffff,4,cVar4 != '\0',0,puVar18[1]);
  puVar6 = PTR_DAT_0782ff18;
  puVar31 = PTR_DAT_0782ff08;
  plVar16 = *(long **)(extraout_x1_00 + 0x10);
  if (plVar16 == (long *)0x0) {
LAB_06b4e434:
    func_0x03280cac();
    puVar31 = PTR_DAT_0782ff20;
    if ((bRam0000000007e2a5a6 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077cd968);
      func_0x03280a18(PTR_DAT_07810470);
      func_0x03280a18(PTR_DAT_07810478);
      func_0x03280a18(PTR_DAT_077c16b0);
      func_0x03280a18(PTR_DAT_0782fe78);
      func_0x03280a18(PTR_DAT_0782fe80);
      func_0x03280a18(PTR_DAT_078103b0);
      func_0x03280a18(PTR_DAT_0782fea8);
      func_0x03280a18(PTR_DAT_0782feb0);
      func_0x03280a18(PTR_DAT_0782ff28);
      func_0x03280a18(PTR_DAT_0782ff20);
      func_0x03280a18(PTR_DAT_0774f158);
      bRam0000000007e2a5a6 = 1;
    }
    plVar34 = (long *)func_0x03280ca0(*(undefined8 *)puVar31);
    return plVar34;
  }
  plVar17 = *(long **)(puVar22 + 4);
  puVar22 = (uint *)(**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
  plVar21 = (long *)func_0x03280ca0(*(undefined8 *)puVar31);
  plVar16 = (long *)0x0;
  func_0x06b9a3cc(plVar21,uVar14,*(undefined8 *)puVar6);
  if (plVar17 == (long *)0x0) goto LAB_06b4e434;
  puVar18 = *(undefined8 **)PTR_DAT_0782ff10;
  puVar31 = extraout_x1;
SUB_03ec33e4:
  *(code **)(puVar8 + -0x30) = pcStack_240;
  *(undefined **)(puVar8 + -0x28) = puVar37;
  *(long **)(puVar8 + -0x20) = plVar34;
  *(uint **)(puVar8 + -0x18) = puVar32;
  *(long **)(puVar8 + -0x10) = plStack_220;
  *(undefined **)(puVar8 + -8) = puVar31;
  puVar23 = (undefined8 *)puVar18[7];
  puVar20 = puVar18;
  if (puVar23 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar23 = (undefined8 *)puVar18[7];
    if (puVar23 == (undefined8 *)0x0) {
      func_0x03256878(puVar18);
      puVar23 = (undefined8 *)puVar18[7];
    }
  }
  *(undefined8 *)(puVar8 + -0x38) = 0;
  uVar14 = *puVar23;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar14,0);
  if (plVar17[2] != 0) {
    puVar20 = (undefined8 *)(puVar8 + -0x38);
    puVar22 = *(uint **)PTR_DAT_0777b730;
    uVar28 = func_0x04fe48b0(plVar17[2],uVar11);
    uVar14 = uVar11;
    if ((uVar28 & 1) == 0) {
      plVar34 = (long *)plVar17[2];
      puVar37 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(puVar37,*(undefined8 *)PTR_DAT_07751030);
      if (puVar37 != (undefined *)0x0) {
        lVar25 = *(long *)(puVar37 + 0x10);
        lVar26 = *(long *)PTR_DAT_07751038;
        *(int *)(puVar37 + 0x1c) = *(int *)(puVar37 + 0x1c) + 1;
        if (lVar25 != 0) {
          uVar5 = *(uint *)(puVar37 + 0x18);
          if (uVar5 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(puVar37 + 0x18) = uVar5 + 1;
            puVar18 = (undefined8 *)(lVar25 + (long)(int)uVar5 * 8 + 0x20);
            *puVar18 = plVar21;
            func_0x032809c4(puVar18,plVar21);
          }
          else {
            puVar20 = *(undefined8 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(puVar37,plVar21);
          }
          if (plVar34 != (long *)0x0) {
            func_0x04fe2d68(plVar34,uVar11,puVar37,*(undefined8 *)PTR_DAT_0777b738);
            return plVar17;
          }
        }
      }
    }
    else {
      lVar25 = *(long *)(puVar8 + -0x38);
      if (lVar25 != 0) {
        lVar26 = *(long *)(lVar25 + 0x10);
        lVar29 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
        if (lVar26 != 0) {
          uVar5 = *(uint *)(lVar25 + 0x18);
          if (uVar5 < *(uint *)(lVar26 + 0x18)) {
            *(uint *)(lVar25 + 0x18) = uVar5 + 1;
            puVar19 = (undefined8 *)(lVar26 + (long)(int)uVar5 * 8 + 0x20);
            *puVar19 = plVar21;
            func_0x032809c4(puVar19,plVar21);
          }
          else {
            func_0x0414446c(lVar25,plVar21,
                            *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
          }
          return plVar17;
        }
      }
    }
  }
  auVar39 = func_0x03280cac();
  puVar36 = auVar39._8_8_;
  plVar12 = auVar39._0_8_;
  *(undefined8 **)(puVar8 + -0xa0) = puVar19;
  *(undefined8 *)(puVar8 + -0x98) = 0x3ec35f8;
  *(long **)(puVar8 + -0x90) = param_5;
  *(undefined8 **)(puVar8 + -0x80) = param_3;
  *(long *)(puVar8 + -0x78) = lVar38;
  *(long **)(puVar8 + -0x70) = plVar15;
  *(undefined **)(puVar8 + -0x68) = puVar37;
  *(long **)(puVar8 + -0x60) = plVar34;
  *(undefined8 *)(puVar8 + -0x58) = uVar14;
  *(long **)(puVar8 + -0x50) = plVar21;
  *(long **)(puVar8 + -0x48) = plVar17;
  lVar25 = tpidr_el0;
  *(undefined8 *)(puVar8 + -0xa8) = *(undefined8 *)(lVar25 + 0x28);
  *(undefined1 **)(puVar8 + -0xb0) = puVar36;
  plVar34 = (long *)puVar20[7];
  puVar19 = puVar20;
  if (plVar34 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar34 = (long *)puVar20[7];
    if (plVar34 == (long *)0x0) {
      func_0x03256878(puVar20);
      plVar34 = (long *)puVar20[7];
    }
  }
  puVar18 = (undefined8 *)(ulong)*(uint *)(plVar34[1] + 0xfc);
  puVar35 = puVar8 + (-0xc0 - ((ulong)((long)puVar18 + 0xfU) & 0x1fffffff0));
  *(undefined8 *)(puVar8 + -0xb8) = 0;
  lVar26 = *plVar34;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar29 = func_0x057a51c4(lVar26,0);
  if (plVar12[2] == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    puVar22 = *(uint **)PTR_DAT_0777b730;
    uVar28 = func_0x04fe48b0(plVar12[2],lVar29,puVar8 + -0xb8);
    puVar19 = puVar18;
    if ((uVar28 & 1) == 0) {
      lVar38 = plVar12[2];
      param_3 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(param_3,*(undefined8 *)PTR_DAT_07751030);
      puVar20 = (undefined8 *)puVar20[7];
      puVar1 = puVar36;
      if (-1 < *(int *)(puVar20[1] + 0x28)) {
        puVar1 = puVar8 + -0xb0;
      }
      func_0x072ce970(puVar35,puVar1);
      uVar14 = func_0x03280b94(puVar20[1],puVar35);
      lVar26 = lVar29;
      if (param_3 != (undefined8 *)0x0) {
        lVar24 = param_3[2];
        lVar27 = *(long *)PTR_DAT_07751038;
        *(int *)((long)param_3 + 0x1c) = *(int *)((long)param_3 + 0x1c) + 1;
        if (lVar24 != 0) {
          uVar5 = *(uint *)(param_3 + 3);
          if (uVar5 < *(uint *)(lVar24 + 0x18)) {
            *(uint *)(param_3 + 3) = uVar5 + 1;
            *(undefined8 *)(lVar24 + (long)(int)uVar5 * 8 + 0x20) = uVar14;
            func_0x032809c4();
          }
          else {
            puVar19 = *(undefined8 **)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(param_3);
          }
          if (lVar38 != 0) {
            puVar22 = *(uint **)PTR_DAT_0777b738;
            puVar19 = param_3;
            func_0x04fe2d68(lVar38,lVar29);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar29 = puVar20[7];
    puVar20 = *(undefined8 **)(puVar8 + -0xb8);
    puVar1 = puVar36;
    if (-1 < *(int *)(*(long *)(lVar29 + 8) + 0x28)) {
      puVar1 = puVar8 + -0xb0;
    }
    func_0x072ce970(puVar35,puVar1);
    uVar14 = func_0x03280b94(*(undefined8 *)(lVar29 + 8),puVar35);
    lVar26 = lVar29;
    if (puVar20 == (undefined8 *)0x0) goto LAB_03ec38b8;
    lVar24 = puVar20[2];
    lVar27 = *(long *)PTR_DAT_07751038;
    *(int *)((long)puVar20 + 0x1c) = *(int *)((long)puVar20 + 0x1c) + 1;
    if (lVar24 == 0) goto LAB_03ec38b8;
    uVar5 = *(uint *)(puVar20 + 3);
    if (uVar5 < *(uint *)(lVar24 + 0x18)) {
      *(uint *)(puVar20 + 3) = uVar5 + 1;
      *(undefined8 *)(lVar24 + (long)(int)uVar5 * 8 + 0x20) = uVar14;
      func_0x032809c4();
    }
    else {
      puVar19 = *(undefined8 **)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(puVar20);
    }
LAB_03ec3884:
    lVar26 = lVar29;
    if (*(long *)(lVar25 + 0x28) == *(long *)(puVar8 + -0xa8)) {
      return plVar12;
    }
  }
  auVar39 = func_0x072ce990();
  *(undefined8 *)(puVar35 + -0x30) = 0x3ec38c0;
  *(long *)(puVar35 + -0x20) = lVar26;
  *(undefined8 **)(puVar35 + -0x18) = puVar20;
  *(undefined1 **)(puVar35 + -0x10) = puVar36;
  *(long **)(puVar35 + -8) = plVar12;
  *(undefined8 *)(puVar35 + -0x28) = 0;
  lVar26 = puVar19[4];
  puVar20 = puVar19;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = puVar19[4];
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar29 = puVar19[4];
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    puVar20 = *(undefined8 **)(*(long *)(lVar29 + 0xc0) + 0x18);
    uVar28 = func_0x04e81584(lVar26,puVar35 + -0x28);
    if ((uVar28 & 1) == 0) {
      lVar29 = puVar19[4];
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar29 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar34 = (long *)func_0x03280ca0();
      lVar29 = puVar19[4];
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c(lVar29);
      }
      func_0x04645340(plVar34,*(undefined8 *)(*(long *)(lVar29 + 0xc0) + 0x38));
      puVar19 = (undefined8 *)0x0;
      if (plVar34 != (long *)0x0) {
        *(undefined1 (*) [16])(plVar34 + 2) = auVar39;
        func_0x032809c4((undefined1 (*) [16])(plVar34 + 2),0);
        return plVar34;
      }
    }
    else if (*(long *)(puVar35 + -0x28) != 0) {
      pauVar13 = (undefined1 (*) [16])(*(long *)(puVar35 + -0x28) + 0x10);
      *pauVar13 = auVar39;
      func_0x032809c4(pauVar13,0);
      return *(long **)(puVar35 + -0x28);
    }
  }
  auVar40 = func_0x03280cac();
  lVar29 = auVar40._0_8_;
  *(undefined8 *)(puVar35 + -0x60) = 0x3ec3a10;
  *(undefined1 **)(puVar35 + -0x58) = puVar35;
  *(long *)(puVar35 + -0x50) = lVar26;
  *(undefined8 **)(puVar35 + -0x48) = puVar19;
  *(undefined1 (*) [16])(puVar35 + -0x40) = auVar39;
  *(undefined8 *)(puVar35 + -0x68) = 0;
  lVar26 = *(long *)(puVar22 + 8);
  puVar19 = puVar20;
  puVar32 = puVar22;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = *(long *)(puVar22 + 8);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar24 = *(long *)(puVar22 + 8);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c();
    }
    puVar19 = *(undefined8 **)(*(long *)(lVar24 + 0xc0) + 0x18);
    uVar28 = func_0x04e81584(lVar26,puVar35 + -0x68);
    if ((uVar28 & 1) == 0) {
      lVar24 = *(long *)(puVar22 + 8);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar24 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar34 = (long *)func_0x03280ca0();
      lVar24 = *(long *)(puVar22 + 8);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      func_0x046453e4(plVar34,*(undefined8 *)(*(long *)(lVar24 + 0xc0) + 0x40));
      puVar22 = (uint *)0x0;
      if (plVar34 != (long *)0x0) {
        plVar34[2] = lVar29;
        func_0x032809c4(plVar34 + 2,lVar29);
        plVar34[3] = auVar40._8_8_;
        plVar34[4] = (long)puVar20;
        func_0x032809c4(plVar34 + 3,0);
        return plVar34;
      }
    }
    else if (*(long *)(puVar35 + -0x68) != 0) {
      plVar34 = (long *)(*(long *)(puVar35 + -0x68) + 0x10);
      *plVar34 = lVar29;
      func_0x032809c4(plVar34,lVar29);
      lVar29 = *(long *)(puVar35 + -0x68);
      if (lVar29 != 0) {
        *(long *)(lVar29 + 0x18) = auVar40._8_8_;
        *(undefined8 **)(lVar29 + 0x20) = puVar20;
        func_0x032809c4((long *)(lVar29 + 0x18),0);
        return *(long **)(puVar35 + -0x68);
      }
    }
  }
  auVar39 = func_0x03280cac();
  lVar29 = auVar39._0_8_;
  *(undefined8 *)(puVar35 + -0xa0) = 0x3ec3b90;
  *(long *)(puVar35 + -0x98) = lVar26;
  *(uint **)(puVar35 + -0x90) = puVar22;
  *(undefined1 (*) [16])(puVar35 + -0x88) = auVar40;
  *(undefined8 **)(puVar35 + -0x78) = puVar20;
  *(undefined8 *)(puVar35 + -0xa8) = 0;
  lVar26 = *(long *)(puVar32 + 8);
  puVar20 = puVar19;
  puVar22 = puVar32;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = *(long *)(puVar32 + 8);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar24 = *(long *)(puVar32 + 8);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c();
    }
    puVar20 = *(undefined8 **)(*(long *)(lVar24 + 0xc0) + 0x18);
    uVar28 = func_0x04e81584(lVar26,puVar35 + -0xa8);
    if ((uVar28 & 1) == 0) {
      lVar24 = *(long *)(puVar32 + 8);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar24 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar34 = (long *)func_0x03280ca0();
      lVar24 = *(long *)(puVar32 + 8);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      func_0x04645488(plVar34,*(undefined8 *)(*(long *)(lVar24 + 0xc0) + 0x40));
      puVar32 = (uint *)0x0;
      if (plVar34 != (long *)0x0) {
        plVar34[2] = lVar29;
        func_0x032809c4(plVar34 + 2,lVar29);
        plVar34[3] = auVar39._8_8_;
        plVar34[4] = (long)puVar19;
        func_0x032809c4(plVar34 + 3,0);
        return plVar34;
      }
    }
    else if (*(long *)(puVar35 + -0xa8) != 0) {
      plVar34 = (long *)(*(long *)(puVar35 + -0xa8) + 0x10);
      *plVar34 = lVar29;
      func_0x032809c4(plVar34,lVar29);
      lVar29 = *(long *)(puVar35 + -0xa8);
      if (lVar29 != 0) {
        *(long *)(lVar29 + 0x18) = auVar39._8_8_;
        *(undefined8 **)(lVar29 + 0x20) = puVar19;
        func_0x032809c4((long *)(lVar29 + 0x18),0);
        return *(long **)(puVar35 + -0xa8);
      }
    }
  }
  auVar40 = func_0x03280cac();
  lVar29 = auVar40._0_8_;
  *(undefined8 *)(puVar35 + -0xf0) = 0x3ec3d10;
  *(undefined8 **)(puVar35 + -0xe0) = puVar18;
  *(long *)(puVar35 + -0xd8) = lVar26;
  *(uint **)(puVar35 + -0xd0) = puVar32;
  *(undefined1 (*) [16])(puVar35 + -200) = auVar39;
  *(undefined8 **)(puVar35 + -0xb8) = puVar19;
  *(undefined8 *)(puVar35 + -0xe8) = 0;
  lVar26 = plVar16[4];
  puVar19 = puVar20;
  puVar32 = puVar22;
  plVar34 = plVar16;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = plVar16[4];
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar24 = plVar16[4];
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c();
    }
    puVar19 = *(undefined8 **)(*(long *)(lVar24 + 0xc0) + 0x18);
    uVar28 = func_0x04e81584(lVar26,puVar35 + -0xe8);
    if ((uVar28 & 1) == 0) {
      lVar24 = plVar16[4];
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar24 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar15 = (long *)func_0x03280ca0();
      lVar24 = plVar16[4];
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      func_0x04645704(plVar15,*(undefined8 *)(*(long *)(lVar24 + 0xc0) + 0x48));
      plVar16 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        plVar15[2] = lVar29;
        func_0x032809c4(plVar15 + 2,lVar29);
        plVar15[3] = auVar40._8_8_;
        plVar15[4] = (long)puVar20;
        func_0x032809c4(plVar15 + 3,0);
LAB_03ec3e7c:
        *(int *)(plVar15 + 5) = (int)puVar22;
        return plVar15;
      }
    }
    else if (*(long *)(puVar35 + -0xe8) != 0) {
      plVar15 = (long *)(*(long *)(puVar35 + -0xe8) + 0x10);
      *plVar15 = lVar29;
      func_0x032809c4(plVar15,lVar29);
      lVar29 = *(long *)(puVar35 + -0xe8);
      if (lVar29 != 0) {
        *(long *)(lVar29 + 0x18) = auVar40._8_8_;
        *(undefined8 **)(lVar29 + 0x20) = puVar20;
        func_0x032809c4((long *)(lVar29 + 0x18),0);
        plVar15 = *(long **)(puVar35 + -0xe8);
        if (plVar15 != (long *)0x0) goto LAB_03ec3e7c;
        plVar16 = (long *)0x0;
      }
    }
  }
  auVar39 = func_0x03280cac();
  lVar29 = auVar39._0_8_;
  *(undefined8 *)(puVar35 + -0x130) = 0x3ec3ea0;
  *(long *)(puVar35 + -0x120) = lVar26;
  *(long **)(puVar35 + -0x118) = plVar16;
  *(undefined1 (*) [16])(puVar35 + -0x110) = auVar40;
  *(undefined8 **)(puVar35 + -0x100) = puVar20;
  *(ulong *)(puVar35 + -0xf8) = (ulong)puVar22 & 0xffffffff;
  *(undefined8 *)(puVar35 + -0x128) = 0;
  lVar26 = plVar34[4];
  puVar18 = puVar19;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = plVar34[4];
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar24 = plVar34[4];
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c();
    }
    puVar18 = *(undefined8 **)(*(long *)(lVar24 + 0xc0) + 0x18);
    uVar28 = func_0x04e81584(lVar26,puVar35 + -0x128);
    if ((uVar28 & 1) == 0) {
      lVar24 = plVar34[4];
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar24 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar15 = (long *)func_0x03280ca0();
      lVar24 = plVar34[4];
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      func_0x046457b8(plVar15,*(undefined8 *)(*(long *)(lVar24 + 0xc0) + 0x48));
      plVar34 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        plVar15[2] = lVar29;
        func_0x032809c4(plVar15 + 2,lVar29);
        plVar15[3] = auVar39._8_8_;
        plVar15[4] = (long)puVar19;
        func_0x032809c4(plVar15 + 3,0);
LAB_03ec400c:
        *(int *)(plVar15 + 5) = (int)puVar32;
        return plVar15;
      }
    }
    else if (*(long *)(puVar35 + -0x128) != 0) {
      plVar15 = (long *)(*(long *)(puVar35 + -0x128) + 0x10);
      *plVar15 = lVar29;
      func_0x032809c4(plVar15,lVar29);
      lVar29 = *(long *)(puVar35 + -0x128);
      if (lVar29 != 0) {
        *(long *)(lVar29 + 0x18) = auVar39._8_8_;
        *(undefined8 **)(lVar29 + 0x20) = puVar19;
        func_0x032809c4((long *)(lVar29 + 0x18),0);
        plVar15 = *(long **)(puVar35 + -0x128);
        if (plVar15 != (long *)0x0) goto LAB_03ec400c;
        plVar34 = (long *)0x0;
      }
    }
  }
  auVar40 = func_0x03280cac();
  plVar16 = auVar40._8_8_;
  plVar15 = auVar40._0_8_;
  *(undefined1 **)(puVar35 + -400) = puVar8 + -0xa0;
  *(undefined8 *)(puVar35 + -0x188) = 0x3ec4030;
  *(long *)(puVar35 + -0x180) = lVar25;
  *(undefined8 **)(puVar35 + -0x170) = param_3;
  *(long *)(puVar35 + -0x168) = lVar38;
  *(long *)(puVar35 + -0x160) = lVar26;
  *(long **)(puVar35 + -0x158) = plVar34;
  *(undefined1 (*) [16])(puVar35 + -0x150) = auVar39;
  *(undefined8 **)(puVar35 + -0x140) = puVar19;
  *(ulong *)(puVar35 + -0x138) = (ulong)puVar32 & 0xffffffff;
  lVar25 = tpidr_el0;
  *(undefined8 *)(puVar35 + -0x198) = *(undefined8 *)(lVar25 + 0x28);
  plVar34 = (long *)puVar18[7];
  if (plVar34 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar34 = (long *)puVar18[7];
    if (plVar34 == (long *)0x0) {
      func_0x03256878(puVar18);
      plVar34 = (long *)puVar18[7];
    }
  }
  uVar33 = (ulong)*(uint *)(plVar34[4] + 0xfc);
  uVar28 = uVar33 + 0xf & 0x1fffffff0;
  puVar36 = puVar35 + (-0x1b0 - uVar28);
  puVar19 = (undefined8 *)(puVar36 + -uVar28);
  lVar38 = (long)puVar19 - uVar28;
  func_0x072ce9a0(lVar38,0,uVar33);
  if (plVar16 == (long *)0x0) {
    func_0x03280cac();
    plVar34 = (long *)0x0;
  }
  else {
    lVar26 = *plVar34;
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    lVar29 = *plVar16;
    uVar28 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar28 != 0) {
      piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar26) {
          puVar20 = (undefined8 *)(lVar29 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar28 = uVar28 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar28 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar16,lVar26,0);
LAB_03ec4144:
    plVar34 = (long *)(*(code *)*puVar20)(plVar16,puVar20[1]);
    puVar31 = PTR_DAT_0774e8e0;
    if (plVar34 != (long *)0x0) {
      do {
        lVar26 = *plVar34;
        uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar28 != 0) {
          piVar30 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == *(long *)puVar31) {
              puVar20 = (undefined8 *)(lVar26 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar28 = uVar28 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar28 != 0);
        }
        puVar20 = (undefined8 *)func_0x03256b10(plVar34,*(long *)puVar31,0);
LAB_03ec41ac:
        uVar28 = (*(code *)*puVar20)(plVar34,puVar20[1]);
        if ((uVar28 & 1) == 0) {
          puVar18 = (undefined8 *)0x0;
          goto LAB_03ec429c;
        }
        lVar26 = *(long *)(puVar18[7] + 0x10);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c(lVar26);
        }
        lVar29 = *plVar34;
        uVar28 = (ulong)*(ushort *)(lVar29 + 0x12e);
        if (uVar28 != 0) {
          piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar26) {
              lVar26 = lVar29 + (long)*piVar30 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar28 = uVar28 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar28 != 0);
        }
        lVar26 = func_0x03256b10(plVar34,lVar26,0);
LAB_03ec4220:
        *(undefined1 **)(puVar35 + -0x1a8) = puVar36;
        lVar26 = *(long *)(lVar26 + 8);
        (**(code **)(lVar26 + 0x10))
                  (*(undefined8 *)(lVar26 + 8),lVar26,plVar34,puVar35 + -0x1a8,puVar36);
        func_0x072ce970(lVar38,puVar36,uVar33);
        func_0x072ce970(puVar19,lVar38,uVar33);
        puVar20 = puVar19;
        if (-1 < *(int *)(*(long *)(puVar18[7] + 0x20) + 0x28)) {
          puVar20 = (undefined8 *)*puVar19;
        }
        puVar23 = *(undefined8 **)(puVar18[7] + 0x28);
        uVar14 = *puVar23;
        *(undefined8 **)(puVar35 + -0x1a8) = puVar20;
        (*(code *)puVar23[2])(uVar14,puVar23,plVar15,puVar35 + -0x1a8,puVar35 + -0x1a0);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(puVar18);
  do {
    auVar41 = func_0x072ce990();
    if (auVar41._8_4_ != 1) {
      if (plVar34 == (long *)0x0) goto LAB_03ec43e8;
      lVar25 = *plVar34;
      uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar28 == 0) goto LAB_03ec43c0;
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      break;
    }
    puVar18 = (undefined8 *)func_0x072ce910(auVar41._0_8_);
    puVar18 = (undefined8 *)*puVar18;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar34 != (long *)0x0) {
      lVar26 = *plVar34;
      uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar28 != 0) {
        piVar30 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar19 = (undefined8 *)(lVar26 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar28 = uVar28 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar28 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar34,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar19)(plVar34,puVar19[1]);
    }
    if (puVar18 != (undefined8 *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar25 + 0x28) == *(long *)(puVar35 + -0x198)) {
      return plVar15;
    }
  } while( true );
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar30 = piVar30 + 4;
    if (uVar28 == 0) break;
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar19 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar19 = (undefined8 *)func_0x03256b10(plVar34,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar19)(plVar34,puVar19[1]);
LAB_03ec43e8:
  func_0x03365958(auVar41._0_8_);
  func_0x03280ca4(0);
  auVar39 = func_0x02f09514();
  lVar25 = auVar39._8_8_;
  *(undefined8 *)(lVar38 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar38 + -0x18) = 0;
  *(long **)(lVar38 + -0x10) = plVar34;
  *(long **)(lVar38 + -8) = plVar15;
  puVar19 = *(undefined8 **)(lVar25 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar25 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar25);
      puVar19 = *(undefined8 **)(lVar25 + 0x38);
    }
  }
  *(undefined8 *)(lVar38 + -0x28) = 0;
  uVar14 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar14,0);
  lVar26 = *(long *)(auVar39._0_8_ + 0x10);
  if (lVar26 != 0) {
    uVar28 = func_0x04fe48b0(lVar26,uVar11,lVar38 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar28 & 1) == 0) {
      lVar38 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
      lVar25 = *(long *)(lVar38 + 0x38);
      if (lVar25 == 0) {
        func_0x03256878(lVar38);
        lVar25 = *(long *)(lVar38 + 0x38);
      }
      lVar25 = *(long *)(lVar25 + 0x10);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
      }
      if (*(int *)(lVar25 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar25 = *(long *)(*(long *)(lVar38 + 0x38) + 0x10);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
      }
      plVar34 = (long *)**(undefined8 **)(lVar25 + 0xb8);
    }
    else {
      plVar34 = (long *)func_0x03d2c6a8(*(undefined8 *)(lVar38 + -0x28),
                                        *(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x18));
    }
    return plVar34;
  }
  auVar40 = func_0x03280cac();
  lVar25 = auVar40._8_8_;
  *(undefined8 *)(lVar38 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar38 + -0x48) = uVar14;
  *(undefined1 (*) [16])(lVar38 + -0x40) = auVar39;
  puVar19 = *(undefined8 **)(lVar25 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar25 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar25);
      puVar19 = *(undefined8 **)(lVar25 + 0x38);
    }
  }
  *(undefined8 *)(lVar38 + -0x58) = 0;
  uVar14 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar14 = func_0x057a51c4(uVar14,0);
  lVar26 = *(long *)(auVar40._0_8_ + 0x10);
  if (lVar26 != 0) {
    uVar28 = func_0x04fe48b0(lVar26,uVar14,lVar38 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar28 & 1) == 0) {
      plVar34 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 8))();
    }
    else {
      plVar34 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 0x18))
                                  (*(undefined8 *)(lVar38 + -0x58));
    }
    return plVar34;
  }
  auVar39 = func_0x03280cac();
  lVar25 = auVar39._8_8_;
  *(undefined8 *)(lVar38 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar38 + -0x70) = auVar40;
  puVar19 = *(undefined8 **)(lVar25 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar25 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar25);
      puVar19 = *(undefined8 **)(lVar25 + 0x38);
    }
  }
  *(undefined8 *)(lVar38 + -0x78) = 0;
  uVar14 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar14,0);
  lVar25 = *(long *)(auVar39._0_8_ + 0x10);
  if (lVar25 != 0) {
    uVar28 = func_0x04fe48b0(lVar25,uVar11,lVar38 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar28 & 1) == 0) {
      return (long *)0x0;
    }
    lVar25 = *(long *)(lVar38 + -0x78);
    if (lVar25 != 0) {
      iVar10 = *(int *)(lVar25 + 0x18);
      if (iVar10 < 1) {
        return (long *)0x0;
      }
      *(undefined4 *)(lVar25 + 0x18) = 0;
      *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar25 + 0x10),0,iVar10,0);
      return (long *)0x1;
    }
  }
  auVar40 = func_0x03280cac();
  lVar25 = auVar40._8_8_;
  *(undefined8 *)(lVar38 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar38 + -0x90) = uVar14;
  *(long *)(lVar38 + -0x88) = auVar39._0_8_;
  puVar19 = *(undefined8 **)(lVar25 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar25 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar25);
      puVar19 = *(undefined8 **)(lVar25 + 0x38);
    }
  }
  *(undefined8 *)(lVar38 + -0x98) = 0;
  uVar14 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar14,0);
  lVar25 = *(long *)(auVar40._0_8_ + 0x10);
  if (lVar25 != 0) {
    uVar28 = func_0x04fe48b0(lVar25,uVar11,lVar38 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar28 & 1) == 0) {
      return (long *)0x0;
    }
    if (*(long *)(lVar38 + -0x98) != 0) {
      return (long *)(ulong)(0 < *(int *)(*(long *)(lVar38 + -0x98) + 0x18));
    }
  }
  auVar39 = func_0x03280cac();
  lVar25 = auVar39._8_8_;
  *(undefined8 *)(lVar38 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar38 + -0xb0) = uVar14;
  *(long *)(lVar38 + -0xa8) = auVar40._0_8_;
  puVar19 = *(undefined8 **)(lVar25 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar25 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar25);
      puVar19 = *(undefined8 **)(lVar25 + 0x38);
    }
  }
  *(undefined8 *)(lVar38 + -0xb8) = 0;
  uVar14 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar14,0);
  lVar25 = *(long *)(auVar39._0_8_ + 0x10);
  if (lVar25 != 0) {
    uVar28 = func_0x04fe48b0(lVar25,uVar11,lVar38 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar28 & 1) == 0) {
      return (long *)0x0;
    }
    if (*(long *)(lVar38 + -0xb8) != 0) {
      return (long *)(ulong)(0 < *(int *)(*(long *)(lVar38 + -0xb8) + 0x18));
    }
  }
  auVar40 = func_0x03280cac();
  lVar25 = auVar40._8_8_;
  *(undefined8 *)(lVar38 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar38 + -0xd0) = uVar14;
  *(long *)(lVar38 + -200) = auVar39._0_8_;
  puVar19 = *(undefined8 **)(lVar25 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = *(undefined8 **)(lVar25 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x03256878(lVar25);
      puVar19 = *(undefined8 **)(lVar25 + 0x38);
    }
  }
  *(undefined8 *)(lVar38 + -0xd8) = 0;
  uVar14 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar14,0);
  lVar25 = *(long *)(auVar40._0_8_ + 0x10);
  if (lVar25 != 0) {
    uVar28 = func_0x04fe48b0(lVar25,uVar11,lVar38 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar28 & 1) == 0) {
      plVar34 = (long *)0x0;
    }
    else {
      if (*(long *)(lVar38 + -0xd8) == 0) goto LAB_03ec4958;
      plVar34 = (long *)(ulong)(0 < *(int *)(*(long *)(lVar38 + -0xd8) + 0x18));
    }
    return plVar34;
  }
LAB_03ec4958:
  auVar39 = func_0x03280cac();
  lVar25 = auVar39._8_8_;
  *(undefined8 *)(lVar38 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar38 + -0xf0) = uVar14;
  *(long *)(lVar38 + -0xe8) = auVar40._0_8_;
  puVar19 = *(undefined8 **)(lVar25 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x03256878(lVar25);
    puVar19 = *(undefined8 **)(lVar25 + 0x38);
  }
  uVar28 = (**(code **)*puVar19)(auVar39._0_8_);
  if ((uVar28 & 1) != 0) {
    return (long *)0x1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar34 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 8))(auVar39._0_8_);
  return plVar34;
}

