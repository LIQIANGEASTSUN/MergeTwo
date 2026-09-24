/* Ghidra 12.1.2 native pseudocode; RVA 0x6ACCD30; Merger.MergeBoard.PowerBoost.Systems.PowerBoostSystem.Tick; status ok */


void Merger_MergeBoard_PowerBoost_Systems_PowerBoostSystem__Tick(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined1 auVar12 [12];
  long lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  long lStack_168;
  long lStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long alStack_c0 [4];
  long alStack_a0 [2];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  long lStack_80;
  long lStack_58;
  
  lVar10 = tpidr_el0;
  lStack_58 = *(long *)(lVar10 + 0x28);
  if ((bRam0000000007e2aa5d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07833fe8);
    func_0x03280a18(PTR_DAT_07832398);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07833ff0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07833ff8);
    func_0x03280a18(PTR_DAT_07834000);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07834008);
    func_0x03280a18(PTR_DAT_07834010);
    func_0x03280a18(PTR_DAT_07834018);
    func_0x03280a18(PTR_DAT_07834020);
    func_0x03280a18(PTR_DAT_07834028);
    bRam0000000007e2aa5d = 1;
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (param_2[1] != 0) {
    uVar4 = func_0x03ec5020(param_2[1],&lStack_c8,*(undefined8 *)PTR_DAT_07834028);
    if ((uVar4 & 1) == 0) goto LAB_06bcd150;
    lStack_108 = param_2[1];
    lStack_110 = *param_2;
    lStack_f8 = param_2[3];
    lStack_100 = param_2[2];
    uVar5 = func_0x03d1aa94(*(undefined8 *)PTR_DAT_07833fe8);
    uVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe68);
    func_0x06015d08(uVar6,0,*(undefined8 *)PTR_DAT_0782fe48,0);
    uStack_198 = (undefined4)lStack_108;
    uStack_194 = (undefined4)((ulong)lStack_108 >> 0x20);
    lStack_1a0 = lStack_110;
    uStack_188 = (undefined4)lStack_f8;
    uStack_184 = (undefined4)((ulong)lStack_f8 >> 0x20);
    uStack_190 = (undefined4)lStack_100;
    uStack_18c = (undefined4)((ulong)lStack_100 >> 0x20);
    func_0x03e66364(alStack_a0,&lStack_1a0,uVar5,uVar6,*(undefined8 *)PTR_DAT_07834020);
    lStack_f0 = alStack_a0[0];
    param_2 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07833ff0);
    func_0x05351d28(param_2,param_1,*(undefined8 *)PTR_DAT_07834008,0);
    func_0x04495b10(&lStack_1a0,&lStack_f0,param_2,*(undefined8 *)PTR_DAT_07834018);
    uStack_e8 = CONCAT44(uStack_194,uStack_198);
    uStack_d8 = CONCAT44(uStack_184,uStack_188);
    uStack_e0 = CONCAT44(uStack_18c,uStack_190);
    lStack_f0 = lStack_1a0;
    plVar7 = (long *)func_0x04495b68(&lStack_f0,*(undefined8 *)PTR_DAT_07834010);
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07833ff8) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06bccf80;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07833ff8,0);
LAB_06bccf80:
      param_1 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar3 = PTR_DAT_07834000;
      puVar2 = PTR_DAT_07832398;
      puVar1 = PTR_DAT_0774e8e0;
      if (param_1 == (long *)0x0) goto LAB_06bcd188;
      param_2 = alStack_c0;
LAB_06bccfbc:
      lVar9 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06bcd008;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(param_1,*(long *)puVar1,0);
LAB_06bcd008:
      uVar4 = (*(code *)*puVar8)(param_1,puVar8[1]);
      if ((uVar4 & 1) == 0) {
        param_2 = (long *)0x0;
        goto LAB_06bcd0e8;
      }
      lVar9 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06bcd064;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(param_1,*(long *)puVar3,0);
LAB_06bcd064:
      (*(code *)*puVar8)(&lStack_1a0,param_1,puVar8[1]);
      lVar9 = lStack_1a0;
      alStack_a0[0] = lStack_15c;
      uStack_8c = (undefined4)uStack_148;
      uStack_88 = (undefined4)((ulong)uStack_148 >> 0x20);
      lStack_80 = lStack_15c;
      if (lStack_c8 != 0) {
        alStack_c0[0] = lStack_15c;
        if (lStack_1a0 == 0) goto LAB_06bcd180;
        lStack_1a0 = lStack_168;
        uStack_184 = uStack_14c;
        uStack_18c = uStack_154;
        uStack_188 = uStack_150;
        uStack_194 = (undefined4)lStack_15c;
        uStack_190 = (undefined4)((ulong)lStack_15c >> 0x20);
        uStack_198 = *(undefined4 *)(lStack_c8 + 0x10);
        func_0x03d1d180(lVar9,&lStack_1a0,*(undefined8 *)puVar2);
        goto LAB_06bccfbc;
      }
      func_0x03280cac();
LAB_06bcd180:
      func_0x03280cac();
    }
  }
  func_0x03280cac();
LAB_06bcd188:
  func_0x03280cac();
LAB_06bcd18c:
  func_0x03280ca4(param_2);
  do {
    auVar12 = func_0x072ce990();
    if (auVar12._8_4_ != 1) {
      if (param_1 == (long *)0x0) goto LAB_06bcd23c;
      lVar10 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 == 0) goto LAB_06bcd214;
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    puVar8 = (undefined8 *)func_0x072ce910(auVar12._0_8_);
    param_2 = (long *)*puVar8;
    func_0x072ce920();
LAB_06bcd0e8:
    if (param_1 != (long *)0x0) {
      lVar9 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06bcd140;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(param_1,*(long *)PTR_DAT_0774e8c8,0);
LAB_06bcd140:
      (*(code *)*puVar8)(param_1,puVar8[1]);
    }
    if (param_2 != (long *)0x0) goto LAB_06bcd18c;
LAB_06bcd150:
    if (*(long *)(lVar10 + 0x28) == lStack_58) {
      return;
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_06bcd230;
    }
  }
LAB_06bcd214:
  puVar8 = (undefined8 *)func_0x03256b10(param_1,*(long *)PTR_DAT_0774e8c8,0);
LAB_06bcd230:
  (*(code *)*puVar8)(param_1,puVar8[1]);
LAB_06bcd23c:
  func_0x03365958(auVar12._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  return;
}

