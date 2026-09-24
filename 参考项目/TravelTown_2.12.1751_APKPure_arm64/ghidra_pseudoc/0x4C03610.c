/* Ghidra 12.1.2 native pseudocode; RVA 0x4C03610; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.get_ToolsRequiredByMetagameBooster; status ok */


long MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___get_ToolsRequiredByMetagameBooster
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  code **ppcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *extraout_x1;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *unaff_x23;
  code *pcVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_220;
  code *pcStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  long lStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  code *pcStack_50;
  
  if ((bRam0000000007e1ae6e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff50);
    bRam0000000007e1ae6e = 1;
  }
  plVar12 = *(long **)(param_1 + 0x58);
  if (plVar12 != (long *)0x0) {
    lVar7 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777ff50) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 10) * 0x10 + 0x138);
          goto LAB_04d036a0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    param_3 = 10;
    puVar5 = (undefined8 *)func_0x03256b10(plVar12);
LAB_04d036a0:
    lVar7 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if ((lVar7 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
      lVar7 = func_0x0660548c(*(long *)(param_1 + 0x70),0);
      return lVar7;
    }
  }
  func_0x03280cac();
  ppcVar2 = &pcStack_50;
  pcStack_50 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___OnWillProcessComponents;
  lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x0325681c();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x0325681c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 == 0) {
    lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar7 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
      lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    lVar8 = *(long *)(lVar8 + 0x18);
    uVar13 = **(undefined8 **)(lVar7 + 0xb8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c(lVar8);
    }
    lVar7 = func_0x03280ca0(lVar8);
    lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    func_0x05355fbc(lVar7,uVar13,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30));
    lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar8 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
      lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar8 + 0xb8) + 8) = lVar7;
    lVar8 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar8 + 0xb8) + 8,lVar7);
  }
  auVar16._8_8_ = lVar7;
  auVar16._0_8_ = extraout_x1;
  lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
  lVar9 = lVar8;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((extraout_x1 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar7 == 0)) {
    uVar13 = func_0x03280a2c(puVar4);
    uVar13 = func_0x05ac7464(uVar13,0);
    func_0x03280b7c(uVar13,lVar8);
LAB_03d87568:
    func_0x03281048(extraout_x1);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar6 = *extraout_x1;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar6 = *extraout_x1;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = func_0x0325681c(lVar3);
          lVar6 = *extraout_x1;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
        {
                    /* WARNING: Could not recover jumptable at 0x03d874c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar7 = (**(code **)(lVar6 + 0x228))(extraout_x1,lVar7,*(undefined8 *)(lVar6 + 0x230));
          return lVar7;
        }
      }
      goto LAB_03d87568;
    }
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(extraout_x1,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*extraout_x1 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*extraout_x1 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) !=
          lVar3)) {
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar9 = func_0x03280ca0();
        func_0x04b6dad8(lVar9,extraout_x1,lVar7,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x58));
        return lVar9;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*extraout_x1 + 0x130)) &&
         (*(long *)(*(long *)(*extraout_x1 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) ==
          lVar3)) {
        func_0x04b72da4(unaff_x22,extraout_x1,lVar7,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x48))
        ;
        return unaff_x22;
      }
      goto LAB_03d87568;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar8 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(extraout_x1,unaff_x23);
    if (lVar3 != 0) {
      func_0x04b67c68(unaff_x22,lVar3,lVar7,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar15 = func_0x03281048(extraout_x1,unaff_x23);
  lVar7 = lVar9;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((auVar15._0_8_ != 0) && (puVar4 = PTR_DAT_077799b8, auVar15._8_8_ != 0)) {
    lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    uVar13 = 0x3d8757c;
    goto LAB_03d88d20;
  }
  uVar13 = func_0x03280a2c(puVar4);
  uVar13 = func_0x05ac7464(uVar13,0);
  auVar16 = func_0x03280b7c(uVar13,lVar9);
  lVar9 = auVar16._8_8_;
  plVar12 = auVar16._0_8_;
  lVar8 = lVar7;
  if (*(long *)(lVar7 + 0x38) == 0) {
    func_0x03256878(lVar7);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar12 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar9 == 0)) {
    uVar13 = func_0x03280a2c(puVar4);
    uVar13 = func_0x05ac7464(uVar13,0);
    func_0x03280b7c(uVar13,lVar7);
LAB_03d878ac:
    func_0x03281048(plVar12);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar6 = *plVar12;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar6 = *plVar12;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = func_0x0325681c(lVar7);
          lVar6 = *plVar12;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar7 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) == lVar7))
        {
                    /* WARNING: Could not recover jumptable at 0x03d87804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar7 = (**(code **)(lVar6 + 0x228))(plVar12,lVar9,*(undefined8 *)(lVar6 + 0x230));
          return lVar7;
        }
      }
      goto LAB_03d878ac;
    }
    lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(plVar12,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar8 = func_0x03280ca0();
        func_0x04b6def8(lVar8,plVar12,lVar9,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x58));
        return lVar8;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        func_0x04b72fbc(unaff_x22,plVar12,lVar9,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d878ac;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar7 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(plVar12,unaff_x23);
    if (lVar3 != 0) {
      func_0x04b67e30(unaff_x22,lVar3,lVar9,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar16 = func_0x03281048(plVar12,unaff_x23);
  lVar9 = auVar16._8_8_;
  plVar12 = auVar16._0_8_;
  lVar7 = lVar8;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar12 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar9 == 0)) {
    uVar13 = func_0x03280a2c(puVar4);
    uVar13 = func_0x05ac7464(uVar13,0);
    func_0x03280b7c(uVar13,lVar8);
LAB_03d87b80:
    func_0x03281048(plVar12);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar6 = *plVar12;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar6 = *plVar12;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c(lVar8);
          lVar6 = *plVar12;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar8 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
        {
                    /* WARNING: Could not recover jumptable at 0x03d87ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar7 = (**(code **)(lVar6 + 0x228))(plVar12,lVar9,*(undefined8 *)(lVar6 + 0x230));
          return lVar7;
        }
      }
      goto LAB_03d87b80;
    }
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(plVar12,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar7 = func_0x03280ca0();
        func_0x04b6e358(lVar7,plVar12,lVar9,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x58));
        return lVar7;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        func_0x04b73220(unaff_x22,plVar12,lVar9,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d87b80;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar8 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(plVar12,unaff_x23);
    if (lVar3 != 0) {
      func_0x04b68040(unaff_x22,lVar3,lVar9,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar16 = func_0x03281048(plVar12,unaff_x23);
  lVar9 = auVar16._8_8_;
  plVar12 = auVar16._0_8_;
  lVar8 = lVar7;
  if (*(long *)(lVar7 + 0x38) == 0) {
    func_0x03256878(lVar7);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar12 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar9 == 0)) {
    uVar13 = func_0x03280a2c(puVar4);
    uVar13 = func_0x05ac7464(uVar13,0);
    func_0x03280b7c(uVar13,lVar7);
LAB_03d87e54:
    func_0x03281048(plVar12);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar6 = *plVar12;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar6 = *plVar12;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = func_0x0325681c(lVar7);
          lVar6 = *plVar12;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar7 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) == lVar7))
        {
                    /* WARNING: Could not recover jumptable at 0x03d87dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar7 = (**(code **)(lVar6 + 0x228))(plVar12,lVar9,*(undefined8 *)(lVar6 + 0x230));
          return lVar7;
        }
      }
      goto LAB_03d87e54;
    }
    lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(plVar12,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar8 = func_0x03280ca0();
        func_0x04b6f3cc(lVar8,plVar12,lVar9,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x58));
        return lVar8;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        func_0x04b7342c(unaff_x22,plVar12,lVar9,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d87e54;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar7 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(plVar12,unaff_x23);
    if (lVar3 != 0) {
      func_0x04b681fc(unaff_x22,lVar3,lVar9,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar16 = func_0x03281048(plVar12,unaff_x23);
  lVar9 = auVar16._8_8_;
  plVar12 = auVar16._0_8_;
  lVar7 = lVar8;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar12 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar9 == 0)) {
    uVar13 = func_0x03280a2c(puVar4);
    uVar13 = func_0x05ac7464(uVar13,0);
    func_0x03280b7c(uVar13,lVar8);
LAB_03d88128:
    func_0x03281048(plVar12);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar6 = *plVar12;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar6 = *plVar12;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c(lVar8);
          lVar6 = *plVar12;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar8 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
        {
                    /* WARNING: Could not recover jumptable at 0x03d88080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar7 = (**(code **)(lVar6 + 0x228))(plVar12,lVar9,*(undefined8 *)(lVar6 + 0x230));
          return lVar7;
        }
      }
      goto LAB_03d88128;
    }
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(plVar12,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar7 = func_0x03280ca0();
        func_0x04b6f7e0(lVar7,plVar12,lVar9,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x58));
        return lVar7;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        func_0x04b73638(unaff_x22,plVar12,lVar9,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d88128;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar8 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(plVar12,unaff_x23);
    if (lVar3 != 0) {
      func_0x04b683b8(unaff_x22,lVar3,lVar9,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar16 = func_0x03281048(plVar12,unaff_x23);
  lVar9 = auVar16._8_8_;
  plVar12 = auVar16._0_8_;
  uStack_170 = 0x3d8813c;
  lVar8 = lVar7;
  if (*(long *)(lVar7 + 0x38) == 0) {
    func_0x03256878(lVar7);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar12 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar9 == 0)) {
    uVar13 = func_0x03280a2c(puVar4);
    uVar13 = func_0x05ac7464(uVar13,0);
    func_0x03280b7c(uVar13,lVar7);
LAB_03d8841c:
    func_0x03281048(plVar12);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar6 = *plVar12;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar6 = *plVar12;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = func_0x0325681c(lVar3);
          lVar6 = *plVar12;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
        {
                    /* WARNING: Could not recover jumptable at 0x03d8836c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar7 = (**(code **)(lVar6 + 0x228))(plVar12,lVar9,*(undefined8 *)(lVar6 + 0x230));
          return lVar7;
        }
      }
      goto LAB_03d8841c;
    }
    lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(plVar12,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar8 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x38) + 0x58))(lVar8,plVar12,lVar9);
        return lVar8;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x38);
      unaff_x23 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0x38) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        (*unaff_x23)(unaff_x22,plVar12,lVar9,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d8841c;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar7 + 0x38) + 0x20);
    pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0x38) + 0x30);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(plVar12,unaff_x23);
    if (lVar3 != 0) {
      (*pcVar14)(unaff_x22,lVar3,lVar9,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auStack_1a8 = func_0x03281048(plVar12,unaff_x23);
  uStack_190 = 0x3d88430;
  lVar9 = lVar8;
  lStack_188 = lVar7;
  auStack_180 = auVar16;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((auStack_1a8._0_8_ != 0) && (puVar4 = PTR_DAT_077799b8, auStack_1a8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d88478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x10))
                      (auStack_1a8._0_8_,auStack_1a8._8_8_);
    return lVar7;
  }
  uVar13 = func_0x03280a2c(puVar4);
  uVar13 = func_0x05ac7464(uVar13,0);
  auVar16 = func_0x03280b7c(uVar13,lVar8);
  lVar7 = auVar16._8_8_;
  plVar12 = auVar16._0_8_;
  uStack_1c0 = 0x3d884a4;
  lVar3 = lVar9;
  pcStack_1b8 = unaff_x23;
  lStack_1b0 = unaff_x22;
  lStack_198 = lVar8;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar12 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar7 == 0)) {
    uVar13 = func_0x03280a2c(puVar4);
    uVar13 = func_0x05ac7464(uVar13,0);
    func_0x03280b7c(uVar13,lVar9);
LAB_03d88764:
    func_0x03281048(plVar12);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    lVar6 = *plVar12;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar8 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
        lVar6 = *plVar12;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar8 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
        lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c(lVar8);
          lVar6 = *plVar12;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar8 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
        {
                    /* WARNING: Could not recover jumptable at 0x03d886bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar7 = (**(code **)(lVar6 + 0x228))(plVar12,lVar7,*(undefined8 *)(lVar6 + 0x230));
          return lVar7;
        }
      }
      goto LAB_03d88764;
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c(lVar8);
    }
    lVar8 = func_0x03280b90(plVar12,lVar8);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar8 = func_0x03280ca0();
        func_0x04b702d0(lVar8,plVar12,lVar7,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x58));
        return lVar8;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
      {
        func_0x04b73d00(unaff_x22,plVar12,lVar7,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d88764;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar9 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar8 = func_0x03280b90(plVar12,unaff_x23);
    if (lVar8 != 0) {
      func_0x04b689f8(unaff_x22,lVar8,lVar7,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar15 = func_0x03281048(plVar12,unaff_x23);
  lVar7 = auVar15._8_8_;
  plVar12 = auVar15._0_8_;
  uStack_1f0 = 0x3d88778;
  lVar8 = lVar3;
  pcStack_1e8 = unaff_x23;
  lStack_1e0 = unaff_x22;
  lStack_1d8 = lVar9;
  auStack_1d0 = auVar16;
  if (*(long *)(lVar3 + 0x38) == 0) {
    func_0x03256878(lVar3);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar12 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar7 == 0)) {
    uVar13 = func_0x03280a2c(puVar4);
    uVar13 = func_0x05ac7464(uVar13,0);
    func_0x03280b7c(uVar13,lVar3);
LAB_03d88a38:
    func_0x03281048(plVar12);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
    }
    lVar6 = *plVar12;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9)) {
      lVar9 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
        lVar6 = *plVar12;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar9 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9)) {
        lVar9 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c(lVar9);
          lVar6 = *plVar12;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar9 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9))
        {
                    /* WARNING: Could not recover jumptable at 0x03d88990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar7 = (**(code **)(lVar6 + 0x228))(plVar12,lVar7,*(undefined8 *)(lVar6 + 0x230));
          return lVar7;
        }
      }
      goto LAB_03d88a38;
    }
    lVar9 = *(long *)(*(long *)(lVar3 + 0x38) + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c(lVar9);
    }
    lVar9 = func_0x03280b90(plVar12,lVar9);
    if (lVar9 == 0) {
      lVar9 = *(long *)(*(long *)(lVar3 + 0x38) + 0x38);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar8 = func_0x03280ca0();
        func_0x04b7072c(lVar8,plVar12,lVar7,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x58));
        return lVar8;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar9 = *(long *)(*(long *)(lVar3 + 0x38) + 0x38);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
      }
      if ((*(byte *)(lVar9 + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9))
      {
        func_0x04b73f54(unaff_x22,plVar12,lVar7,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d88a38;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar3 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar9 = func_0x03280b90(plVar12,unaff_x23);
    if (lVar9 != 0) {
      func_0x04b68c04(unaff_x22,lVar9,lVar7,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar16 = func_0x03281048(plVar12,unaff_x23);
  lVar9 = auVar16._8_8_;
  plVar12 = auVar16._0_8_;
  ppcVar2 = (code **)&uStack_220;
  uStack_220 = 0x3d88a4c;
  lVar7 = lVar8;
  pcStack_218 = unaff_x23;
  lStack_210 = unaff_x22;
  lStack_208 = lVar3;
  auStack_200 = auVar15;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar12 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar9 == 0)) {
    uVar13 = func_0x03280a2c(puVar4);
    uVar13 = func_0x05ac7464(uVar13,0);
    func_0x03280b7c(uVar13,lVar8);
LAB_03d88d0c:
    func_0x03281048(plVar12);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar6 = *plVar12;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar6 = *plVar12;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = func_0x0325681c(lVar3);
          lVar6 = *plVar12;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
        {
                    /* WARNING: Could not recover jumptable at 0x03d88c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar7 = (**(code **)(lVar6 + 0x228))(plVar12,lVar9,*(undefined8 *)(lVar6 + 0x230));
          return lVar7;
        }
      }
      goto LAB_03d88d0c;
    }
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(plVar12,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar7 = func_0x03280ca0();
        func_0x04b70b58(lVar7,plVar12,lVar9,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x58));
        return lVar7;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        func_0x04b7416c(unaff_x22,plVar12,lVar9,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d88d0c;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar8 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(plVar12,unaff_x23);
    if (lVar3 != 0) {
      func_0x04b68dd4(unaff_x22,lVar3,lVar9,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  uVar13 = 0x3d88d20;
  auVar15 = func_0x03281048(plVar12,unaff_x23);
LAB_03d88d20:
  *(undefined8 *)((long)ppcVar2 + -0x20) = uVar13;
  *(long *)((long)ppcVar2 + -0x18) = lVar8;
  *(undefined1 (*) [16])((long)ppcVar2 + -0x10) = auVar16;
  plVar12 = *(long **)(lVar7 + 0x38);
  if (plVar12 == (long *)0x0) {
    func_0x03256878(lVar7);
    plVar12 = *(long **)(lVar7 + 0x38);
  }
  if ((*(byte *)(*plVar12 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar8 = func_0x03280ca0();
  lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
  func_0x05327074(lVar8,0xfffffffe);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x30) = auVar15._0_8_;
    func_0x032809c4((undefined8 *)(lVar8 + 0x30),auVar15._0_8_);
    *(undefined8 *)(lVar8 + 0x40) = auVar15._8_8_;
    func_0x032809c4((undefined8 *)(lVar8 + 0x40),auVar15._8_8_);
    return lVar8;
  }
  auVar16 = func_0x03280cac();
  *(undefined8 *)((long)ppcVar2 + -0x50) = 0x3d88da8;
  *(long *)((long)ppcVar2 + -0x40) = unaff_x22;
  *(undefined8 *)((long)ppcVar2 + -0x38) = 0;
  *(undefined1 (*) [16])((long)ppcVar2 + -0x30) = auVar15;
  plVar12 = *(long **)(lVar7 + 0x38);
  if (plVar12 == (long *)0x0) {
    func_0x03256878(lVar7);
    plVar12 = *(long **)(lVar7 + 0x38);
  }
  if ((*(byte *)(*plVar12 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar8 = func_0x03280ca0();
  puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x38) + 8);
  (*(code *)*puVar5)(lVar8,0xfffffffe);
  if (lVar8 != 0) {
    func_0x02f17738(lVar8,*(long *)(**(long **)(lVar7 + 0x38) + 0x80) + 0x80,auVar16._0_8_);
    func_0x02f17738(lVar8,*(long *)(**(long **)(lVar7 + 0x38) + 0x80) + 0xc0,auVar16._8_8_);
    return lVar8;
  }
  auVar15 = func_0x03280cac();
  *(undefined8 *)((long)ppcVar2 + -0x70) = 0x3d88e54;
  *(long *)((long)ppcVar2 + -0x68) = auVar16._0_8_;
  *(long *)((long)ppcVar2 + -0x60) = lVar7;
  *(long *)((long)ppcVar2 + -0x58) = auVar16._8_8_;
  lVar7 = puVar5[7];
  if (lVar7 == 0) {
    func_0x03256878(puVar5);
    lVar7 = puVar5[7];
  }
                    /* WARNING: Could not recover jumptable at 0x03d88e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar7 = (*(code *)**(undefined8 **)(lVar7 + 0x10))(auVar15._0_8_,auVar15._8_8_);
  return lVar7;
}

