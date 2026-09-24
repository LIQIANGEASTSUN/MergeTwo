/* Ghidra 12.1.2 native pseudocode; RVA 0x4C036E0; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.OnWillProcessComponents; status ok */


long MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___OnWillProcessComponents
               (undefined8 param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  code *unaff_x23;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  code *pcStack_198;
  long lStack_190;
  undefined1 auStack_188 [16];
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  
  puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c();
      lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    lVar9 = *(long *)(lVar9 + 0x18);
    uVar11 = **(undefined8 **)(lVar5 + 0xb8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c(lVar9);
    }
    lVar5 = func_0x03280ca0(lVar9);
    lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    func_0x05355fbc(lVar5,uVar11,*(undefined8 *)(lVar9 + 0x28),*(undefined8 *)(lVar9 + 0x30));
    lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar9 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
      lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar9 + 0xb8) + 8) = lVar5;
    lVar9 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar9 + 0xb8) + 8,lVar5);
  }
  lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
  lVar10 = lVar9;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((param_2 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar5 == 0)) {
    uVar11 = func_0x03280a2c(puVar4);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,lVar9);
LAB_03d87568:
    func_0x03281048(param_2);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar7 = *param_2;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar7 = *param_2;
        bVar1 = *(byte *)(lVar7 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = func_0x0325681c(lVar3);
          lVar7 = *param_2;
          bVar1 = *(byte *)(lVar7 + 0x130);
        }
        if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
        {
                    /* WARNING: Could not recover jumptable at 0x03d874c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar5 = (**(code **)(lVar7 + 0x228))(param_2,lVar5,*(undefined8 *)(lVar7 + 0x230));
          return lVar5;
        }
      }
      goto LAB_03d87568;
    }
    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(param_2,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        func_0x04b6dad8(lVar10,param_2,lVar5,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x58));
        return lVar10;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        func_0x04b72da4(unaff_x22,param_2,lVar5,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d87568;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar9 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(param_2,unaff_x23);
    if (lVar3 != 0) {
      func_0x04b67c68(unaff_x22,lVar3,lVar5,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar13 = func_0x03281048(param_2,unaff_x23);
  lVar3 = lVar10;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((auVar13._0_8_ != 0) && (puVar4 = PTR_DAT_077799b8, auVar13._8_8_ != 0)) {
    lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    uVar11 = 0x3d8757c;
    goto LAB_03d88d20;
  }
  uVar11 = func_0x03280a2c(puVar4);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar13 = func_0x03280b7c(uVar11,lVar10);
  lVar9 = auVar13._8_8_;
  plVar8 = auVar13._0_8_;
  lVar5 = lVar3;
  if (*(long *)(lVar3 + 0x38) == 0) {
    func_0x03256878(lVar3);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar8 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar9 == 0)) {
    uVar11 = func_0x03280a2c(puVar4);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,lVar3);
LAB_03d878ac:
    func_0x03281048(plVar8);
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar7 = *plVar8;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)) {
      lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
        lVar7 = *plVar8;
        bVar1 = *(byte *)(lVar7 + 0x130);
      }
      if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10))
      {
        lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
          lVar7 = *plVar8;
          bVar1 = *(byte *)(lVar7 + 0x130);
        }
        if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d87804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar5 = (**(code **)(lVar7 + 0x228))(plVar8,lVar9,*(undefined8 *)(lVar7 + 0x230));
          return lVar5;
        }
      }
      goto LAB_03d878ac;
    }
    lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar10 = func_0x03280b90(plVar8,lVar10);
    if (lVar10 == 0) {
      lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10)
         ) {
        if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar5 = func_0x03280ca0();
        func_0x04b6def8(lVar5,plVar8,lVar9,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x58));
        return lVar5;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      if ((*(byte *)(lVar10 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)
         ) {
        func_0x04b72fbc(unaff_x22,plVar8,lVar9,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d878ac;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar3 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar10 = func_0x03280b90(plVar8,unaff_x23);
    if (lVar10 != 0) {
      func_0x04b67e30(unaff_x22,lVar10,lVar9,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar13 = func_0x03281048(plVar8,unaff_x23);
  lVar10 = auVar13._8_8_;
  plVar8 = auVar13._0_8_;
  lVar9 = lVar5;
  if (*(long *)(lVar5 + 0x38) == 0) {
    func_0x03256878(lVar5);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar8 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar10 == 0)) {
    uVar11 = func_0x03280a2c(puVar4);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,lVar5);
LAB_03d87b80:
    func_0x03281048(plVar8);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar7 = *plVar8;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar7 = *plVar8;
        bVar1 = *(byte *)(lVar7 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = func_0x0325681c(lVar5);
          lVar7 = *plVar8;
          bVar1 = *(byte *)(lVar7 + 0x130);
        }
        if ((*(byte *)(lVar5 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5))
        {
                    /* WARNING: Could not recover jumptable at 0x03d87ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar5 = (**(code **)(lVar7 + 0x228))(plVar8,lVar10,*(undefined8 *)(lVar7 + 0x230));
          return lVar5;
        }
      }
      goto LAB_03d87b80;
    }
    lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(plVar8,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar9 = func_0x03280ca0();
        func_0x04b6e358(lVar9,plVar8,lVar10,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x58));
        return lVar9;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        func_0x04b73220(unaff_x22,plVar8,lVar10,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d87b80;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar5 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(plVar8,unaff_x23);
    if (lVar3 != 0) {
      func_0x04b68040(unaff_x22,lVar3,lVar10,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar13 = func_0x03281048(plVar8,unaff_x23);
  lVar10 = auVar13._8_8_;
  plVar8 = auVar13._0_8_;
  lVar5 = lVar9;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar8 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar10 == 0)) {
    uVar11 = func_0x03280a2c(puVar4);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,lVar9);
LAB_03d87e54:
    func_0x03281048(plVar8);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar7 = *plVar8;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar7 = *plVar8;
        bVar1 = *(byte *)(lVar7 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c(lVar9);
          lVar7 = *plVar8;
          bVar1 = *(byte *)(lVar7 + 0x130);
        }
        if ((*(byte *)(lVar9 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9))
        {
                    /* WARNING: Could not recover jumptable at 0x03d87dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar5 = (**(code **)(lVar7 + 0x228))(plVar8,lVar10,*(undefined8 *)(lVar7 + 0x230));
          return lVar5;
        }
      }
      goto LAB_03d87e54;
    }
    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(plVar8,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar5 = func_0x03280ca0();
        func_0x04b6f3cc(lVar5,plVar8,lVar10,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x58));
        return lVar5;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        func_0x04b7342c(unaff_x22,plVar8,lVar10,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d87e54;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar9 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(plVar8,unaff_x23);
    if (lVar3 != 0) {
      func_0x04b681fc(unaff_x22,lVar3,lVar10,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar13 = func_0x03281048(plVar8,unaff_x23);
  lVar10 = auVar13._8_8_;
  plVar8 = auVar13._0_8_;
  lVar9 = lVar5;
  if (*(long *)(lVar5 + 0x38) == 0) {
    func_0x03256878(lVar5);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar8 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar10 == 0)) {
    uVar11 = func_0x03280a2c(puVar4);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,lVar5);
LAB_03d88128:
    func_0x03281048(plVar8);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar7 = *plVar8;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar7 = *plVar8;
        bVar1 = *(byte *)(lVar7 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = func_0x0325681c(lVar5);
          lVar7 = *plVar8;
          bVar1 = *(byte *)(lVar7 + 0x130);
        }
        if ((*(byte *)(lVar5 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5))
        {
                    /* WARNING: Could not recover jumptable at 0x03d88080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar5 = (**(code **)(lVar7 + 0x228))(plVar8,lVar10,*(undefined8 *)(lVar7 + 0x230));
          return lVar5;
        }
      }
      goto LAB_03d88128;
    }
    lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(plVar8,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar9 = func_0x03280ca0();
        func_0x04b6f7e0(lVar9,plVar8,lVar10,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x58));
        return lVar9;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        func_0x04b73638(unaff_x22,plVar8,lVar10,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d88128;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar5 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(plVar8,unaff_x23);
    if (lVar3 != 0) {
      func_0x04b683b8(unaff_x22,lVar3,lVar10,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar13 = func_0x03281048(plVar8,unaff_x23);
  lVar10 = auVar13._8_8_;
  plVar8 = auVar13._0_8_;
  uStack_150 = 0x3d8813c;
  lVar5 = lVar9;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar8 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar10 == 0)) {
    uVar11 = func_0x03280a2c(puVar4);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,lVar9);
LAB_03d8841c:
    func_0x03281048(plVar8);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar7 = *plVar8;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar7 = *plVar8;
        bVar1 = *(byte *)(lVar7 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = func_0x0325681c(lVar3);
          lVar7 = *plVar8;
          bVar1 = *(byte *)(lVar7 + 0x130);
        }
        if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
        {
                    /* WARNING: Could not recover jumptable at 0x03d8836c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar5 = (**(code **)(lVar7 + 0x228))(plVar8,lVar10,*(undefined8 *)(lVar7 + 0x230));
          return lVar5;
        }
      }
      goto LAB_03d8841c;
    }
    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(plVar8,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar5 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 0x58))(lVar5,plVar8,lVar10);
        return lVar5;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38);
      unaff_x23 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        (*unaff_x23)(unaff_x22,plVar8,lVar10,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d8841c;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar9 + 0x38) + 0x20);
    pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 0x30);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(plVar8,unaff_x23);
    if (lVar3 != 0) {
      (*pcVar12)(unaff_x22,lVar3,lVar10,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auStack_188 = func_0x03281048(plVar8,unaff_x23);
  uStack_170 = 0x3d88430;
  lVar10 = lVar5;
  lStack_168 = lVar9;
  auStack_160 = auVar13;
  if (*(long *)(lVar5 + 0x38) == 0) {
    func_0x03256878(lVar5);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((auStack_188._0_8_ != 0) && (puVar4 = PTR_DAT_077799b8, auStack_188._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d88478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x38) + 0x10))
                      (auStack_188._0_8_,auStack_188._8_8_);
    return lVar5;
  }
  uVar11 = func_0x03280a2c(puVar4);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar13 = func_0x03280b7c(uVar11,lVar5);
  lVar9 = auVar13._8_8_;
  plVar8 = auVar13._0_8_;
  uStack_1a0 = 0x3d884a4;
  lVar3 = lVar10;
  pcStack_198 = unaff_x23;
  lStack_190 = unaff_x22;
  lStack_178 = lVar5;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar8 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar9 == 0)) {
    uVar11 = func_0x03280a2c(puVar4);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,lVar10);
LAB_03d88764:
    func_0x03281048(plVar8);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c();
    }
    lVar7 = *plVar8;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)) {
      lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c(lVar5);
        lVar7 = *plVar8;
        bVar1 = *(byte *)(lVar7 + 0x130);
      }
      if ((*(byte *)(lVar5 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)) {
        lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = func_0x0325681c(lVar5);
          lVar7 = *plVar8;
          bVar1 = *(byte *)(lVar7 + 0x130);
        }
        if ((*(byte *)(lVar5 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5))
        {
                    /* WARNING: Could not recover jumptable at 0x03d886bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar5 = (**(code **)(lVar7 + 0x228))(plVar8,lVar9,*(undefined8 *)(lVar7 + 0x230));
          return lVar5;
        }
      }
      goto LAB_03d88764;
    }
    lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c(lVar5);
    }
    lVar5 = func_0x03280b90(plVar8,lVar5);
    if (lVar5 == 0) {
      lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar5 = func_0x03280ca0();
        func_0x04b702d0(lVar5,plVar8,lVar9,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x58));
        return lVar5;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c(lVar5);
      }
      if ((*(byte *)(lVar5 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5))
      {
        func_0x04b73d00(unaff_x22,plVar8,lVar9,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d88764;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar10 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar5 = func_0x03280b90(plVar8,unaff_x23);
    if (lVar5 != 0) {
      func_0x04b689f8(unaff_x22,lVar5,lVar9,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar14 = func_0x03281048(plVar8,unaff_x23);
  lVar5 = auVar14._8_8_;
  plVar8 = auVar14._0_8_;
  uStack_1d0 = 0x3d88778;
  lVar9 = lVar3;
  pcStack_1c8 = unaff_x23;
  lStack_1c0 = unaff_x22;
  lStack_1b8 = lVar10;
  auStack_1b0 = auVar13;
  if (*(long *)(lVar3 + 0x38) == 0) {
    func_0x03256878(lVar3);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar8 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar5 == 0)) {
    uVar11 = func_0x03280a2c(puVar4);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,lVar3);
LAB_03d88a38:
    func_0x03281048(plVar8);
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar7 = *plVar8;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)) {
      lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
        lVar7 = *plVar8;
        bVar1 = *(byte *)(lVar7 + 0x130);
      }
      if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10))
      {
        lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
          lVar7 = *plVar8;
          bVar1 = *(byte *)(lVar7 + 0x130);
        }
        if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d88990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar5 = (**(code **)(lVar7 + 0x228))(plVar8,lVar5,*(undefined8 *)(lVar7 + 0x230));
          return lVar5;
        }
      }
      goto LAB_03d88a38;
    }
    lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar10 = func_0x03280b90(plVar8,lVar10);
    if (lVar10 == 0) {
      lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10)
         ) {
        if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar9 = func_0x03280ca0();
        func_0x04b7072c(lVar9,plVar8,lVar5,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x58));
        return lVar9;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar10 = *(long *)(*(long *)(lVar3 + 0x38) + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      if ((*(byte *)(lVar10 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)
         ) {
        func_0x04b73f54(unaff_x22,plVar8,lVar5,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x48));
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
    lVar10 = func_0x03280b90(plVar8,unaff_x23);
    if (lVar10 != 0) {
      func_0x04b68c04(unaff_x22,lVar10,lVar5,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar13 = func_0x03281048(plVar8,unaff_x23);
  lVar5 = auVar13._8_8_;
  param_2 = auVar13._0_8_;
  puVar2 = &uStack_200;
  uStack_200 = 0x3d88a4c;
  lVar10 = lVar9;
  pcStack_1f8 = unaff_x23;
  lStack_1f0 = unaff_x22;
  lStack_1e8 = lVar3;
  auStack_1e0 = auVar14;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((param_2 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar5 == 0)) {
    uVar11 = func_0x03280a2c(puVar4);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,lVar9);
LAB_03d88d0c:
    func_0x03281048(param_2);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar7 = *param_2;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
        lVar7 = *param_2;
        bVar1 = *(byte *)(lVar7 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = func_0x0325681c(lVar3);
          lVar7 = *param_2;
          bVar1 = *(byte *)(lVar7 + 0x130);
        }
        if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
        {
                    /* WARNING: Could not recover jumptable at 0x03d88c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar5 = (**(code **)(lVar7 + 0x228))(param_2,lVar5,*(undefined8 *)(lVar7 + 0x230));
          return lVar5;
        }
      }
      goto LAB_03d88d0c;
    }
    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar3 = func_0x03280b90(param_2,lVar3);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
        if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        func_0x04b70b58(lVar10,param_2,lVar5,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x58));
        return lVar10;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c(lVar3);
      }
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        func_0x04b7416c(unaff_x22,param_2,lVar5,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_03d88d0c;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    unaff_x23 = *(code **)(*(long *)(lVar9 + 0x38) + 0x20);
    if (((byte)unaff_x23[0x135] & 1) == 0) {
      unaff_x23 = (code *)func_0x0325681c(unaff_x23);
    }
    lVar3 = func_0x03280b90(param_2,unaff_x23);
    if (lVar3 != 0) {
      func_0x04b68dd4(unaff_x22,lVar3,lVar5,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  uVar11 = 0x3d88d20;
  auVar13 = func_0x03281048(param_2,unaff_x23);
LAB_03d88d20:
  *(undefined8 *)((long)puVar2 + -0x20) = uVar11;
  *(long *)((long)puVar2 + -0x18) = lVar9;
  *(long **)((long)puVar2 + -0x10) = param_2;
  *(long *)((long)puVar2 + -8) = lVar5;
  plVar8 = *(long **)(lVar10 + 0x38);
  if (plVar8 == (long *)0x0) {
    func_0x03256878(lVar10);
    plVar8 = *(long **)(lVar10 + 0x38);
  }
  if ((*(byte *)(*plVar8 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
  func_0x05327074(lVar5,0xfffffffe);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x30) = auVar13._0_8_;
    func_0x032809c4((undefined8 *)(lVar5 + 0x30),auVar13._0_8_);
    *(undefined8 *)(lVar5 + 0x40) = auVar13._8_8_;
    func_0x032809c4((undefined8 *)(lVar5 + 0x40),auVar13._8_8_);
    return lVar5;
  }
  auVar14 = func_0x03280cac();
  *(undefined8 *)((long)puVar2 + -0x50) = 0x3d88da8;
  *(long *)((long)puVar2 + -0x40) = unaff_x22;
  *(undefined8 *)((long)puVar2 + -0x38) = 0;
  *(undefined1 (*) [16])((long)puVar2 + -0x30) = auVar13;
  plVar8 = *(long **)(lVar9 + 0x38);
  if (plVar8 == (long *)0x0) {
    func_0x03256878(lVar9);
    plVar8 = *(long **)(lVar9 + 0x38);
  }
  if ((*(byte *)(*plVar8 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x38) + 8);
  (*(code *)*puVar6)(lVar5,0xfffffffe);
  if (lVar5 != 0) {
    func_0x02f17738(lVar5,*(long *)(**(long **)(lVar9 + 0x38) + 0x80) + 0x80,auVar14._0_8_);
    func_0x02f17738(lVar5,*(long *)(**(long **)(lVar9 + 0x38) + 0x80) + 0xc0,auVar14._8_8_);
    return lVar5;
  }
  auVar13 = func_0x03280cac();
  *(undefined8 *)((long)puVar2 + -0x70) = 0x3d88e54;
  *(long *)((long)puVar2 + -0x68) = auVar14._0_8_;
  *(long *)((long)puVar2 + -0x60) = lVar9;
  *(long *)((long)puVar2 + -0x58) = auVar14._8_8_;
  lVar5 = puVar6[7];
  if (lVar5 == 0) {
    func_0x03256878(puVar6);
    lVar5 = puVar6[7];
  }
                    /* WARNING: Could not recover jumptable at 0x03d88e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar5 = (*(code *)**(undefined8 **)(lVar5 + 0x10))(auVar13._0_8_,auVar13._8_8_);
  return lVar5;
}

