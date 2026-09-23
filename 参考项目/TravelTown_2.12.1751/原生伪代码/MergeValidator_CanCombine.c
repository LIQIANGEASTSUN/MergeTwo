// MergeValidator_CanCombine RVA 0x6A87644
// 06b87644


uint target_MergeValidator_CanCombine(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000007e2a7a6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_0777a520);
    func_0x03280a18(PTR_DAT_07831758);
    bRam0000000007e2a7a6 = 1;
  }
  puVar1 = PTR_DAT_07831758;
  uVar2 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_06b877cc;
  uVar3 = func_0x03d1f57c(param_2,&uStack_40,*(undefined8 *)PTR_DAT_07831758);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = func_0x03d1f57c(param_3,&uStack_50,*(undefined8 *)puVar1), puVar1 = PTR_DAT_0777a520,
     (uVar3 & 1) != 0)) {
    uVar3 = func_0x03d1e508(param_2,&uStack_68,*(undefined8 *)PTR_DAT_0777a520);
    if ((((uVar3 & 1) == 0) ||
        (uVar3 = func_0x03d1e508(param_3,&uStack_80,*(undefined8 *)puVar1), (uVar3 & 1) == 0)) ||
       ((char)uStack_68 == '\0' && (char)uStack_80 == '\0')) {
      puVar1 = PTR_DAT_0777a488;
      func_0x03d1b250(&uStack_e0,param_2,*(undefined8 *)PTR_DAT_0777a488);
      uStack_a8 = uStack_d8;
      uStack_b0 = uStack_e0;
      uStack_98 = uStack_c8;
      uStack_a0 = uStack_d0;
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      func_0x03d1b250(&uStack_110,param_3,*(undefined8 *)puVar1);
      uStack_138 = uStack_a8;
      uStack_140 = uStack_b0;
      uStack_128 = uStack_98;
      uStack_130 = uStack_a0;
      uStack_c8 = uStack_f8;
      uStack_d0 = uStack_100;
      uStack_b8 = uStack_e8;
      uStack_c0 = uStack_f0;
      uStack_d8 = uStack_108;
      uStack_e0 = uStack_110;
      uStack_118 = uStack_88;
      uStack_120 = uStack_90;
      uStack_168 = uStack_108;
      uStack_170 = uStack_110;
      uStack_158 = uStack_f8;
      uStack_160 = uStack_100;
      uStack_148 = uStack_e8;
      uStack_150 = uStack_f0;
      uVar3 = func_0x06b87820(param_1,uStack_40,uStack_38,uStack_50,uStack_48,&uStack_140,
                              &uStack_170);
      if ((uVar3 & 1) != 0) {
        uVar2 = 1;
        goto LAB_06b877cc;
      }
      uVar3 = func_0x06b868e4(param_2);
      if (((uVar3 & 1) == 0) && (uVar3 = func_0x06b868e4(param_3), (uVar3 & 1) == 0)) {
        uStack_198 = uStack_a8;
        uStack_1a0 = uStack_b0;
        uStack_188 = uStack_98;
        uStack_190 = uStack_a0;
        uStack_178 = uStack_88;
        uStack_180 = uStack_90;
        uStack_1c8 = uStack_d8;
        uStack_1d0 = uStack_e0;
        uStack_1b8 = uStack_c8;
        uStack_1c0 = uStack_d0;
        uStack_1a8 = uStack_b8;
        uStack_1b0 = uStack_c0;
        uVar2 = func_0x06b87990(param_1,uStack_40,uStack_38,uStack_50,uStack_48,&uStack_1a0,
                                &uStack_1d0);
        goto LAB_06b877cc;
      }
    }
  }
  uVar2 = 0;
LAB_06b877cc:
  return uVar2 & 1;
}

