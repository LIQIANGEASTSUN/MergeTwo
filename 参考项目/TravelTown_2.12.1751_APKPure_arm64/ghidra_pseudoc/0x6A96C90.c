/* Ghidra 12.1.2 native pseudocode; RVA 0x6A96C90; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateSpawnerComponent; status ok */


ulong Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateSpawnerComponent
                (undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x1;
  long lVar10;
  long lVar11;
  undefined8 *extraout_x8;
  ulong uVar12;
  int *piVar13;
  undefined8 uStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_78;
  undefined1 auStack_74 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000007e2a809 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f030);
    func_0x03280a18(PTR_DAT_0774e650);
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0774e6b0);
    func_0x03280a18(PTR_DAT_07782d28);
    func_0x03280a18(PTR_DAT_07832558);
    bRam0000000007e2a809 = 1;
  }
  puVar1 = PTR_DAT_0774e650;
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (param_3 != (long *)0x0) {
    lVar10 = *param_3;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_06b96d90;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777e548,1);
LAB_06b96d90:
    puVar3 = PTR_DAT_07782d28;
    puVar2 = PTR_DAT_07779820;
    lVar10 = (*(code *)*puVar5)(param_3,puVar5[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar1);
    }
    uStack_58 = func_0x05776944(0);
    uVar4 = func_0x057749c4(&uStack_58,0);
    param_4 = (long *)(ulong)(uVar4 & 0xffff);
    uVar6 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x060e89c8(uVar6,lVar10,param_4,0,0);
    lVar11 = *param_3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b96e50;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    param_4 = (long *)0x0;
    puVar5 = (undefined8 *)func_0x03256b10(param_3);
LAB_06b96e50:
    uVar7 = (*(code *)*puVar5)(param_3,puVar5[1]);
    puVar3 = PTR_DAT_07832558;
    puVar2 = PTR_DAT_0774e6b0;
    puVar1 = PTR_DAT_0774e598;
    if (lVar10 != 0) {
      auStack_74[0] = *(undefined1 *)(lVar10 + 0x80);
      uVar8 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774f030,auStack_74);
      uStack_78 = uVar4 & 0xffff;
      uVar9 = func_0x03280b94(*(undefined8 *)puVar2,&uStack_78);
      uVar7 = func_0x055f7f20(*(undefined8 *)puVar3,uVar7,uVar8,uVar9,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)puVar1);
      }
      func_0x06fa9a68(uVar7,0);
      uStack_68 = 0;
      lStack_60 = 0;
      uStack_70 = uVar6;
      func_0x032809c4(&uStack_70,uVar6);
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar4) & 0xffffffff0000ffff;
      lStack_60 = lVar10;
      uVar12 = func_0x032809c4(&lStack_60,lVar10);
      param_1[2] = lStack_60;
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      return uVar12;
    }
  }
  func_0x03280cac();
  if ((bRam0000000007e2a80a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_07830c18);
    func_0x03280a18(PTR_DAT_07832560);
    func_0x03280a18(PTR_DAT_077cd968);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0774e6b0);
    func_0x03280a18(PTR_DAT_0782fe88);
    func_0x03280a18(PTR_DAT_077cf5c8);
    func_0x03280a18(PTR_DAT_078266a8);
    func_0x03280a18(PTR_DAT_077cf5c0);
    func_0x03280a18(PTR_DAT_07832568);
    bRam0000000007e2a80a = 1;
  }
  puVar1 = PTR_DAT_07779820;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_f8 = 0;
  lStack_100 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  if (param_4 != (long *)0x0) {
    lVar10 = *param_4;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_06b97088;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_4,*(long *)PTR_DAT_0777e548,2);
LAB_06b97088:
    lVar10 = (*(code *)*puVar5)(param_4,puVar5[1]);
    lVar11 = *param_4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b970e4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_4,*(long *)puVar1,0);
LAB_06b970e4:
    uVar6 = (*(code *)*puVar5)(param_4,puVar5[1]);
    puVar2 = PTR_DAT_07832568;
    puVar1 = PTR_DAT_0774e598;
    if (lVar10 != 0) {
      uStack_e0 = CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar10 + 0x14));
      uVar7 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774e6b0,&uStack_e0);
      uVar6 = func_0x055f7edc(*(undefined8 *)puVar2,uVar6,uVar7,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)puVar1);
      }
      func_0x06fa9a68(uVar6,0);
      lStack_128 = 0;
      lStack_130 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_140 = CONCAT44(*(undefined4 *)(lVar10 + 0x14),*(undefined4 *)(lVar10 + 0x14));
      uStack_138 = (ulong)CONCAT15(*(undefined1 *)(lVar10 + 0x36),*(undefined5 *)(lVar10 + 0x30));
      if ((*(long *)(lVar10 + 0x20) == 0) ||
         (lVar11 = func_0x03d5ffd0(*(long *)(lVar10 + 0x20),*(undefined8 *)PTR_DAT_077cd968),
         lVar11 == 0)) {
        puVar1 = PTR_DAT_077cf5c8;
        lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf5c0);
        func_0x04143c38(lVar11,*(undefined8 *)puVar1);
      }
      lStack_130 = lVar11;
      func_0x032809c4(&lStack_130,lVar11);
      if ((*(long *)(lVar10 + 0x28) == 0) ||
         (lVar11 = func_0x03d5ffd0(*(long *)(lVar10 + 0x28),*(undefined8 *)PTR_DAT_07832560),
         lVar11 == 0)) {
        puVar1 = PTR_DAT_0782fe88;
        lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078266a8);
        func_0x04143c38(lVar11,*(undefined8 *)puVar1);
      }
      lStack_128 = lVar11;
      func_0x032809c4(&lStack_128,lVar11);
      uStack_120 = CONCAT71(uStack_120._1_7_,*(undefined1 *)(lVar10 + 0x35));
      uStack_120 = CONCAT44(*(undefined4 *)(lVar10 + 0x38),(undefined4)uStack_120);
      lStack_118 = *(long *)(lVar10 + 0x50);
      uVar12 = func_0x032809c4(&lStack_118);
      lVar10 = lStack_118;
      uStack_108 = uStack_138;
      uStack_110 = uStack_140;
      lStack_f8 = lStack_128;
      lStack_100 = lStack_130;
      uStack_f0 = uStack_120;
      if (lStack_118 != 0) {
        uStack_170 = uStack_120;
        lStack_168 = lStack_118;
        uStack_188 = uStack_138;
        uStack_190 = uStack_140;
        lStack_178 = lStack_128;
        lStack_180 = lStack_130;
        func_0x06b97304(&uStack_160,uVar12,extraout_x1,&uStack_190);
        if (extraout_x1 == 0) goto LAB_06b972f0;
        uStack_d8 = uStack_158;
        uStack_e0 = uStack_160;
        uStack_c8 = uStack_148;
        uStack_d0 = uStack_150;
        uVar12 = func_0x03d1de74(extraout_x1,&uStack_e0,*(undefined8 *)PTR_DAT_07830c18);
      }
      extraout_x8[1] = uStack_108;
      *extraout_x8 = uStack_110;
      extraout_x8[3] = lStack_f8;
      extraout_x8[2] = lStack_100;
      extraout_x8[4] = uStack_f0;
      extraout_x8[5] = lVar10;
      return uVar12;
    }
  }
LAB_06b972f0:
  lVar10 = func_0x03280cac();
  return (ulong)(*(long *)(lVar10 + 0x28) != 0);
}

