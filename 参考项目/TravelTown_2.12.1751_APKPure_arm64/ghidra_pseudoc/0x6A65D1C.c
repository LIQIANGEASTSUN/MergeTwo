/* Ghidra 12.1.2 native pseudocode; RVA 0x6A65D1C; Merger.MergeBoard.Systems.ExpendableSystem.ProcessExpendableItem; status ok */


/* WARNING: Possible PIC construction at 0x06b65ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b663b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b65ecc) */
/* WARNING: Removing unreachable block (ram,0x06b65ed0) */
/* WARNING: Removing unreachable block (ram,0x06b663b4) */
/* WARNING: Removing unreachable block (ram,0x06b664c8) */
/* WARNING: Removing unreachable block (ram,0x06b663b8) */

void Merger_MergeBoard_Systems_ExpendableSystem__ProcessExpendableItem
               (long param_1,undefined8 *param_2,long param_3,int *param_4,undefined4 param_5,
               undefined8 param_6,undefined8 param_7,char *param_8)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *extraout_x1;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  double dStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  if ((bRam0000000007e2a6a0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830ae0);
    func_0x03280a18(PTR_DAT_07830ae8);
    func_0x03280a18(PTR_DAT_0777a558);
    func_0x03280a18(PTR_DAT_07830af0);
    func_0x03280a18(PTR_DAT_07830af8);
    func_0x03280a18(PTR_DAT_07830b00);
    func_0x03280a18(PTR_DAT_07830b08);
    func_0x03280a18(PTR_DAT_07830b10);
    func_0x03280a18(PTR_DAT_07830b18);
    func_0x03280a18(PTR_DAT_07830b20);
    func_0x03280a18(PTR_DAT_07830b28);
    func_0x03280a18(PTR_DAT_07830b30);
    func_0x03280a18(PTR_DAT_07830b38);
    func_0x03280a18(PTR_DAT_07830b40);
    func_0x03280a18(PTR_DAT_078103a0);
    func_0x03280a18(PTR_DAT_0774f158);
    func_0x03280a18(PTR_DAT_0777e958);
    bRam0000000007e2a6a0 = 1;
  }
  auStack_130._0_8_ = 0;
  auStack_130._8_8_ = 0;
  uStack_148 = 0;
  dStack_150 = 0.0;
  uStack_138 = 0;
  uStack_140 = 0;
  if (*param_4 < 1) {
    uVar9 = func_0x06b972f4(param_4,0);
    auVar26._8_8_ = auStack_130._8_8_;
    auVar26._0_8_ = auStack_130._0_8_;
    if ((uVar9 & 1) == 0) goto LAB_06b65e64;
LAB_06b662b0:
    auStack_130 = auVar26;
    if (*(long *)(lVar3 + 0x28) == lStack_68) {
      return;
    }
  }
  else {
LAB_06b65e64:
    uVar13 = *(undefined8 *)PTR_DAT_0774f158;
    lVar10 = func_0x06ba3134(param_3,*(undefined8 *)(param_1 + 0x20),uVar13,uVar13,uVar13,0);
    uStack_7c = *(undefined8 *)(param_4 + 10);
    uStack_90 = *(undefined8 *)(param_4 + 5);
    uStack_98 = *(undefined8 *)(param_4 + 3);
    uStack_a0 = *(undefined8 *)(param_4 + 1);
    iVar2 = *param_4;
    uStack_80 = (undefined4)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
    uStack_88 = (undefined4)*(undefined8 *)(param_4 + 7);
    uStack_84 = (undefined4)((ulong)*(undefined8 *)(param_4 + 7) >> 0x20);
    uVar9 = Merger_MergeBoard_Extensions_EntitySpawnerExtension__IsSpawner(param_3,0);
    auVar26._8_8_ = auStack_130._8_8_;
    auVar26._0_8_ = auStack_130._0_8_;
    if ((uVar9 & 1) != 0) {
      uStack_168 = param_2[1];
      uStack_170 = *param_2;
      uStack_158 = param_2[3];
      uStack_160 = param_2[2];
      puVar11 = &uStack_170;
      auStack_130 = auVar26;
      goto SUB_06b662e8;
    }
    if (*param_8 == '\0') goto LAB_06b662b0;
    if (lVar10 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)(lVar10 + 0xa0) = iVar2;
      if (*param_8 == '\0') {
        uStack_c8 = uStack_98;
        uStack_d0 = uStack_a0;
        uStack_b8 = uStack_88;
        uStack_c0 = uStack_90;
        uStack_ac = (undefined4)uStack_7c;
        uStack_a8 = (undefined4)((ulong)uStack_7c >> 0x20);
        uStack_b4 = uStack_84;
        uStack_b0 = uStack_80;
        auStack_130 = auVar26;
        if (param_3 != 0) goto LAB_06b65f6c;
      }
      else {
        auStack_130 = func_0x0437d0b4(param_8,*(undefined8 *)PTR_DAT_07830b18);
        auVar26 = func_0x06b9c2a4(auStack_130,0);
        if (param_3 != 0) {
          func_0x03d1d7ec(param_3,auVar26._0_8_,auVar26._8_8_,*(undefined8 *)PTR_DAT_07830ae8);
          uStack_ac = (undefined4)uStack_7c;
          uStack_a8 = (undefined4)((ulong)uStack_7c >> 0x20);
          auVar26 = auStack_130;
LAB_06b65f6c:
          uStack_f8 = CONCAT44(uStack_a8,uStack_ac);
          uStack_fc = uStack_80;
          uStack_104 = uStack_88;
          uStack_100 = uStack_84;
          uStack_10c = (undefined4)uStack_90;
          uStack_108 = (undefined4)((ulong)uStack_90 >> 0x20);
          uStack_114 = (undefined4)uStack_98;
          uStack_110 = (undefined4)((ulong)uStack_98 >> 0x20);
          uStack_11c = (undefined4)uStack_a0;
          uStack_118 = (undefined4)((ulong)uStack_a0 >> 0x20);
          iStack_120 = iVar2;
          uStack_d0 = uStack_a0;
          uStack_c8 = uStack_98;
          uStack_c0 = uStack_90;
          uStack_b8 = uStack_88;
          uStack_b4 = uStack_84;
          uStack_b0 = uStack_80;
          auStack_130 = auVar26;
          func_0x03d1cd5c(param_3,&iStack_120,*(undefined8 *)PTR_DAT_07830ae0);
          puVar4 = PTR_DAT_0777e958;
          if (iVar2 < 1) {
            *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)PTR_DAT_0777e958;
            func_0x032809c4();
            *(undefined8 *)(lVar10 + 0xc0) = *(undefined8 *)PTR_DAT_078103a0;
            func_0x032809c4((undefined8 *)(lVar10 + 0xc0));
            *(undefined4 *)(lVar10 + 0xa0) = 0;
            uVar9 = func_0x03d1fd24(param_3,&dStack_150,*(undefined8 *)PTR_DAT_0777a558);
            if ((uVar9 & 1) != 0) {
              dVar18 = -9.223372036854776e+18;
              if (dStack_150 != INFINITY) {
                dVar18 = (double)(long)dStack_150;
              }
              *(double *)(lVar10 + 0x108) = dVar18;
            }
            uStack_188 = param_2[1];
            uStack_190 = *param_2;
            uStack_178 = param_2[3];
            uStack_180 = param_2[2];
            func_0x06b98f6c(&uStack_190,param_3,0);
            lVar12 = param_2[2];
            lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830af8);
            func_0x06b9a3ac(lVar15,0);
            if (lVar15 != 0) {
              *(long *)(lVar15 + 0x10) = param_3;
              func_0x032809c4((long *)(lVar15 + 0x10),param_3);
              *(undefined4 *)(lVar15 + 0x18) = param_5;
              *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)puVar4;
              func_0x032809c4();
              if (lVar12 != 0) {
                func_0x03ec33e4(lVar12,lVar15,*(undefined8 *)PTR_DAT_07830b30);
                lVar15 = param_2[2];
                lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830b08);
                func_0x06b9a8d4(lVar12,0);
                if (lVar12 != 0) {
                  *(long *)(lVar12 + 0x10) = param_3;
                  func_0x032809c4((long *)(lVar12 + 0x10),param_3);
                  *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)puVar4;
                  func_0x032809c4();
                  *(long *)(lVar12 + 0x20) = lVar10;
                  func_0x032809c4((long *)(lVar12 + 0x20),lVar10);
                  puVar11 = (undefined8 *)PTR_DAT_07830b38;
                  goto joined_r0x06b6617c;
                }
              }
            }
          }
          else if (*(char *)((long)param_4 + 0xd) == '\0') {
LAB_06b66244:
            lVar15 = param_2[2];
            lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830af0);
            func_0x06b9a374(lVar10,0);
            if (lVar10 != 0) {
              *(long *)(lVar10 + 0x10) = param_3;
              func_0x032809c4((long *)(lVar10 + 0x10),param_3);
              *(undefined4 *)(lVar10 + 0x18) = param_5;
              *(int *)(lVar10 + 0x1c) = iVar2;
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_0777e958;
              func_0x032809c4();
              if (lVar15 != 0) {
                func_0x03ec33e4(lVar15,lVar10,*(undefined8 *)PTR_DAT_07830b28);
                auVar26 = auStack_130;
                goto LAB_06b662b0;
              }
            }
          }
          else {
            uVar23 = param_2[1];
            uVar21 = *param_2;
            uVar19 = param_2[3];
            uVar17 = param_2[2];
            plVar16 = *(long **)(param_1 + 0x28);
            uVar25 = *(undefined8 *)(param_4 + 4);
            uVar20 = *(undefined8 *)(param_4 + 10);
            uVar24 = *(undefined8 *)(param_4 + 2);
            uVar22 = *(undefined8 *)param_4;
            uVar13 = *(undefined8 *)(param_1 + 0x10);
            uVar1 = *(undefined8 *)(param_1 + 0x18);
            uStack_b8 = (undefined4)*(undefined8 *)(param_4 + 6);
            uVar5 = uStack_b8;
            uStack_b4 = (undefined4)((ulong)*(undefined8 *)(param_4 + 6) >> 0x20);
            uVar6 = uStack_b4;
            uStack_a8 = (undefined4)uVar20;
            uStack_a4 = (undefined4)((ulong)uVar20 >> 0x20);
            uStack_b0 = (undefined4)*(undefined8 *)(param_4 + 8);
            uVar7 = uStack_b0;
            uStack_ac = (undefined4)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
            uVar8 = uStack_ac;
            uStack_d0 = uVar22;
            uStack_c8 = uVar24;
            uStack_c0 = uVar25;
            if (plVar16 != (long *)0x0) {
              lVar10 = *plVar16;
              uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar9 != 0) {
                piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07830b00) {
                    puVar11 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_06b66198;
                  }
                  uVar9 = uVar9 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_07830b00,0);
LAB_06b66198:
              uStack_118 = (undefined4)uVar24;
              uStack_114 = (undefined4)((ulong)uVar24 >> 0x20);
              iStack_120 = (int)uVar22;
              uStack_11c = (undefined4)((ulong)uVar22 >> 0x20);
              uStack_110 = (undefined4)uVar25;
              uStack_10c = (undefined4)((ulong)uVar25 >> 0x20);
              uStack_108 = uVar5;
              uStack_104 = uVar6;
              uStack_100 = uVar7;
              uStack_fc = uVar8;
              uStack_f8 = uVar20;
              uStack_f0 = uVar21;
              uStack_e8 = uVar23;
              uStack_e0 = uVar17;
              uStack_d8 = uVar19;
              (*(code *)*puVar11)(plVar16,param_3,&uStack_f0,uVar13,uVar1,&iStack_120,param_5,
                                  puVar11[1]);
              lVar15 = param_2[2];
              lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830b20);
              func_0x06b9acd8(lVar12,0);
              if (lVar12 != 0) {
                *(long *)(lVar12 + 0x10) = param_3;
                func_0x032809c4((long *)(lVar12 + 0x10),param_3);
                *(undefined4 *)(lVar12 + 0x18) = param_5;
                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_0777e958;
                func_0x032809c4();
                puVar11 = (undefined8 *)PTR_DAT_07830b40;
joined_r0x06b6617c:
                if (lVar15 != 0) {
                  func_0x03ec33e4(lVar15,lVar12,*puVar11);
                  goto LAB_06b66244;
                }
              }
            }
          }
        }
      }
    }
    func_0x03280cac();
  }
  func_0x072ce990();
  puVar11 = extraout_x1;
SUB_06b662e8:
  puVar4 = PTR_DAT_07830b48;
  if ((bRam0000000007e2a6a1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48,puVar11);
    func_0x03280a18(PTR_DAT_07830b50);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830b58);
    func_0x03280a18(PTR_DAT_07830b60);
    func_0x03280a18(PTR_DAT_07830b68);
    func_0x03280a18(PTR_DAT_07830b70);
    func_0x03280a18(PTR_DAT_07830b78);
    func_0x03280a18(PTR_DAT_07830b48);
    bRam0000000007e2a6a1 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar4);
  return;
}

