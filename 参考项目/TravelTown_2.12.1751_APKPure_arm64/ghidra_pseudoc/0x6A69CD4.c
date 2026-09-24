/* Ghidra 12.1.2 native pseudocode; RVA 0x6A69CD4; Merger.MergeBoard.Systems.ImmediateToolsSystem.Tick; status ok */


void Merger_MergeBoard_Systems_ImmediateToolsSystem__Tick(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
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
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = PTR_DAT_07830e28;
  puVar4 = PTR_DAT_07830e20;
  puVar3 = PTR_DAT_07830e18;
  puVar2 = PTR_DAT_0782fe68;
  puVar1 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a6bc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830e18);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830e28);
    func_0x03280a18(PTR_DAT_07830e20);
    bRam0000000007e2a6bc = 1;
  }
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  uVar7 = func_0x03d1aa40(*(undefined8 *)puVar3);
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x06015d08(uVar8,0,*(undefined8 *)puVar1,0);
  uStack_168 = uStack_f8;
  uStack_170 = uStack_100;
  uStack_158 = uStack_e8;
  uStack_160 = uStack_f0;
  func_0x03e662c4(&uStack_70,&uStack_170,uVar7,uVar8,*(undefined8 *)puVar4);
  uVar9 = func_0x04495644(&uStack_70,&uStack_e0,*(undefined8 *)puVar5);
  if ((uVar9 & 1) != 0) {
    uVar9 = func_0x06b9bf74(&uStack_a0,0);
    uVar6 = uStack_80;
    uVar8 = uStack_88;
    uVar7 = uStack_e0;
    if ((uVar9 & 1) == 0) {
      uStack_1c8 = param_2[1];
      uStack_1d0 = *param_2;
      uStack_1b8 = param_2[3];
      uStack_1c0 = param_2[2];
      func_0x072ce970(&uStack_170,&uStack_e0,0x68);
      uStack_1f8 = uStack_160;
      uStack_200 = uStack_168;
      uStack_1e8 = uStack_150;
      uStack_1f0 = uStack_158;
      uStack_1d8 = uStack_140;
      uStack_1e0 = uStack_148;
      func_0x06b6a45c(param_1,&uStack_1d0,uVar7,uVar8,uVar6,&uStack_200);
    }
    else {
      uStack_188 = param_2[1];
      uStack_190 = *param_2;
      uStack_178 = param_2[3];
      uStack_180 = param_2[2];
      func_0x072ce970(&uStack_170,&uStack_e0,0x68);
      uStack_1a8 = uStack_128;
      uStack_1b0 = uStack_130;
      uStack_1a0 = uStack_120;
      func_0x06b69ec0(param_1,&uStack_190,uVar7,uVar8,uVar6,&uStack_1b0);
    }
  }
  return;
}

