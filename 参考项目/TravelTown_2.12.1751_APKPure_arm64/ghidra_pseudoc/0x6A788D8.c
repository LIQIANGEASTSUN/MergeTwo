/* Ghidra 12.1.2 native pseudocode; RVA 0x6A788D8; Merger.MergeBoard.Systems.TimeLockSystem.BlockMergeComponentIfUsed; status ok */

ulong Merger_MergeBoard_Systems_TimeLockSystem__BlockMergeComponentIfUsed
                (ulong param_1,long param_2,double *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *extraout_x1;
  long extraout_x1_00;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000007e2a718 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830e00);
    func_0x03280a18(PTR_DAT_07831758);
    param_1 = func_0x03280a18(PTR_DAT_0777a548);
    bRam0000000007e2a718 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if (*param_3 <= 0.0) {
    if (param_2 == 0) {
      func_0x03280cac();
      puVar7 = PTR_DAT_07831760;
      puVar6 = PTR_DAT_07831708;
      puVar5 = PTR_DAT_07831700;
      puVar4 = PTR_DAT_078316e8;
      puVar3 = PTR_DAT_07831698;
      puVar2 = PTR_DAT_0782fe68;
      puVar1 = PTR_DAT_0782fe48;
      pcStack_e0 = Merger_MergeBoard_Systems_TimeLockSystem__ApplyGroupLockBlock;
      if ((bRam0000000007e2a715 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0782fe48);
        func_0x03280a18(PTR_DAT_078316e8);
        func_0x03280a18(PTR_DAT_07831720);
        func_0x03280a18(PTR_DAT_07831750);
        func_0x03280a18(PTR_DAT_07831728);
        func_0x03280a18(PTR_DAT_07831768);
        func_0x03280a18(PTR_DAT_07831760);
        func_0x03280a18(PTR_DAT_07831770);
        func_0x03280a18(PTR_DAT_0782fe68);
        func_0x03280a18(PTR_DAT_07831778);
        func_0x03280a18(PTR_DAT_078316f8);
        func_0x03280a18(PTR_DAT_07831748);
        func_0x03280a18(PTR_DAT_078316c0);
        func_0x03280a18(PTR_DAT_078316c8);
        func_0x03280a18(PTR_DAT_07831700);
        func_0x03280a18(PTR_DAT_07831708);
        func_0x03280a18(PTR_DAT_07831780);
        func_0x03280a18(PTR_DAT_07831788);
        func_0x03280a18(PTR_DAT_07831698);
        bRam0000000007e2a715 = 1;
      }
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uVar22 = extraout_x1[1];
      uVar21 = *extraout_x1;
      uVar20 = extraout_x1[3];
      uVar19 = extraout_x1[2];
      uVar10 = func_0x03d19e64(*(undefined8 *)puVar4);
      uVar11 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x06015d08(uVar11,0,*(undefined8 *)puVar1,0);
      uStack_100 = uVar21;
      uStack_f8 = uVar22;
      uStack_f0 = uVar19;
      uStack_e8 = uVar20;
      func_0x03e64e24(&uStack_120,&uStack_100,uVar10,uVar11,*(undefined8 *)puVar6);
      uVar10 = func_0x04488114(&uStack_120,*(undefined8 *)puVar5);
      lVar12 = func_0x03d5b0e0(uVar10,*(undefined8 *)puVar7);
      lVar15 = *(long *)puVar3;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        func_0x03280b8c(lVar15);
        lVar15 = *(long *)puVar3;
      }
      puVar1 = PTR_DAT_07831770;
      lVar17 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x18);
      if (lVar17 == 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          func_0x03280b8c(lVar15);
          lVar15 = *(long *)puVar3;
        }
        uVar10 = **(undefined8 **)(lVar15 + 0xb8);
        lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078316f8);
        func_0x0534f7f4(lVar17,uVar10,*(undefined8 *)PTR_DAT_07831780,0);
        plVar13 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
        *plVar13 = lVar17;
        func_0x032809c4(plVar13,lVar17);
      }
      uVar10 = func_0x03d86484(lVar12,lVar17,*(undefined8 *)puVar1);
      lVar15 = *(long *)puVar3;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        func_0x03280b8c(lVar15);
        lVar15 = *(long *)puVar3;
      }
      puVar4 = PTR_DAT_07831768;
      puVar2 = PTR_DAT_078316c8;
      puVar1 = PTR_DAT_078316c0;
      lVar17 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x20);
      if (lVar17 == 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          func_0x03280b8c(lVar15);
          lVar15 = *(long *)puVar3;
        }
        uVar11 = **(undefined8 **)(lVar15 + 0xb8);
        lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831778);
        func_0x0534f8d4(lVar17,uVar11,*(undefined8 *)PTR_DAT_07831788,0);
        plVar13 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
        *plVar13 = lVar17;
        func_0x032809c4(plVar13,lVar17);
      }
      uVar10 = func_0x03d4dd68(uVar10,lVar17,*(undefined8 *)puVar4);
      lVar15 = func_0x03280ca0(*(undefined8 *)puVar2);
      lVar17 = *(long *)puVar1;
      uVar14 = func_0x053bb974(lVar15,uVar10);
      puVar4 = PTR_DAT_07831750;
      puVar3 = PTR_DAT_07831748;
      puVar2 = PTR_DAT_07831728;
      puVar1 = PTR_DAT_07831720;
      if (lVar12 != 0) {
        uVar9 = *(uint *)(lVar12 + 0x18);
        if (0 < (int)uVar9) {
          uVar18 = 0;
          do {
            if (uVar9 <= uVar18) goto LAB_06b78e04;
            lVar16 = lVar12 + (long)(int)uVar18 * 0x30;
            uStack_130 = *(undefined8 *)(lVar16 + 0x48);
            uStack_138 = *(undefined8 *)(lVar16 + 0x40);
            uStack_140 = *(undefined8 *)(lVar16 + 0x38);
            uStack_148 = *(undefined8 *)(lVar16 + 0x30);
            uStack_150 = *(undefined8 *)(lVar16 + 0x28);
            lVar16 = *(long *)(lVar16 + 0x20);
            if (lVar15 == 0) goto LAB_06b78e00;
            uStack_140._4_4_ = (undefined4)((ulong)uStack_140 >> 0x20);
            uVar8 = uStack_140._4_4_;
            lVar17 = *(long *)puVar3;
            uVar14 = func_0x053bbf78(lVar15,uVar8);
            if ((uVar14 & 1) == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = func_0x06b9c624(&uStack_150,0);
              uVar9 = uVar9 & 1;
            }
            if (lVar16 == 0) goto LAB_06b78e00;
            uVar14 = func_0x03d1c090(lVar16,*(undefined8 *)puVar1);
            if ((uVar9 == 0) || ((uVar14 & 1) != 0)) {
              if (((uint)uVar14 & (uVar9 ^ 0xffffffff) & 1) != 0) {
                uVar14 = func_0x03d1c4b0(lVar16,*(undefined8 *)puVar4);
              }
            }
            else {
              lVar17 = *(long *)puVar2;
              uVar14 = func_0x03d1df48(lVar16,0);
            }
            uVar9 = *(uint *)(lVar12 + 0x18);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)uVar9);
        }
        return uVar14;
      }
LAB_06b78e00:
      func_0x03280cac();
LAB_06b78e04:
      func_0x03280cb4();
      return (ulong)((*(uint *)(lVar17 + 0x20) & (*(uint *)(extraout_x1_00 + 0x1c) ^ 0xffffffff)) ==
                    0);
    }
    param_1 = func_0x03d1fc04(param_2,&uStack_70,*(undefined8 *)PTR_DAT_0777a548);
    if (((((param_1 & 1) != 0) && (uStack_38._4_4_ != 3)) &&
        (param_1 = func_0x03d1f57c(param_2,&uStack_80,*(undefined8 *)PTR_DAT_07831758),
        puVar1 = PTR_DAT_07830e00, (param_1 & 1) != 0)) && ((int)uStack_80 != 2)) {
      uStack_80 = CONCAT44(uStack_80._4_4_,2);
      *(undefined1 *)((long)param_3 + 0x21) = 1;
      param_1 = func_0x03d1d650(param_2,uStack_80,uStack_78,*(undefined8 *)puVar1);
    }
  }
  return param_1;
}

