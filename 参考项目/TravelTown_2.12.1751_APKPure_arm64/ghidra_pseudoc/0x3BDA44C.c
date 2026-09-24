/* Ghidra 12.1.2 native pseudocode; RVA 0x3BDA44C; MergeEngine.ECS.Components.Board.BoardQueueComponent.Select<object>; status ok */


long MergeEngine_ECS_Components_Board_BoardQueueComponent__Select_object_
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x30;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 auStack_100 [2];
  long lStack_f0;
  undefined1 auStack_e8 [16];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  auVar12._8_8_ = unaff_x20;
  auVar12._0_8_ = unaff_x21;
  lVar10 = *(long *)(param_3 + 0x38);
  if (lVar10 == 0) {
    func_0x03256878(param_3);
    lVar10 = *(long *)(param_3 + 0x38);
  }
  lVar2 = func_0x03d50a94(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(lVar10 + 8));
  lVar3 = func_0x03d50a94(*(undefined8 *)(param_1 + 0x30),param_2,
                          *(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
  auVar13._8_8_ = lVar3;
  auVar13._0_8_ = lVar2;
  lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
  lVar10 = lVar5;
  if (*(long *)(lVar5 + 0x38) == 0) {
    func_0x03256878(lVar5);
  }
  puVar4 = PTR_DAT_07779d10;
  if ((lVar2 == 0) || (puVar4 = PTR_DAT_07779d18, lVar3 == 0)) {
    uVar7 = func_0x03280a2c(puVar4);
    uVar7 = func_0x05ac7464(uVar7,0);
    auVar12 = func_0x03280b7c(uVar7,lVar5);
    uStack_40 = 0x3d60510;
    lVar6 = lVar10;
    lStack_38 = lVar2;
    lStack_30 = lVar3;
    lStack_28 = lVar5;
    if (*(long *)(lVar10 + 0x38) == 0) {
      func_0x03256878(lVar10);
    }
    puVar4 = PTR_DAT_07779d10;
    if ((auVar12._0_8_ != 0) && (puVar4 = PTR_DAT_07779d18, auVar12._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + 8))
                         (auVar12._0_8_,auVar12._8_8_,0);
      return lVar10;
    }
    uVar7 = func_0x03280a2c(puVar4);
    uVar7 = func_0x05ac7464(uVar7,0);
    auVar13 = func_0x03280b7c(uVar7,lVar10);
    uStack_70 = 0x3d60588;
    lVar2 = lVar6;
    lVar3 = param_4;
    if (*(long *)(param_4 + 0x38) == 0) {
      func_0x03256878(param_4);
    }
    puVar4 = PTR_DAT_07779d10;
    if ((auVar13._0_8_ == 0) || (puVar4 = PTR_DAT_07779d18, auVar13._8_8_ == 0)) {
      uVar7 = func_0x03280a2c(puVar4);
      uVar7 = func_0x05ac7464(uVar7,0);
      auStack_c0 = func_0x03280b7c(uVar7,param_4);
      uStack_a0 = 0x3d60608;
      lVar5 = lVar2;
      lVar10 = lVar3;
      lStack_80 = lVar6;
      lStack_78 = param_4;
      auStack_90 = auVar13;
      if (*(long *)(lVar3 + 0x38) == 0) {
        func_0x03256878(lVar3);
      }
      puVar4 = PTR_DAT_07779d10;
      if ((auStack_c0._0_8_ != 0) && (puVar4 = PTR_DAT_07779d18, auStack_c0._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x38) + 0x10))
                           (auStack_c0._0_8_,auStack_c0._8_8_,lVar2);
        return lVar10;
      }
      uVar7 = func_0x03280a2c(puVar4);
      uVar7 = func_0x05ac7464(uVar7,0);
      auVar13 = func_0x03280b7c(uVar7,lVar3);
      uStack_d0 = 0x3d6068c;
      plVar11 = *(long **)(lVar10 + 0x38);
      lVar6 = lVar10;
      lStack_b0 = lVar2;
      lStack_a8 = lVar3;
      if (plVar11 == (long *)0x0) {
        func_0x03256878(lVar10);
        plVar11 = *(long **)(lVar10 + 0x38);
      }
      if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar2 = func_0x03280ca0();
      lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      func_0x0531dbd0(lVar2,0xfffffffe);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x38) = auVar13._0_8_;
        func_0x032809c4((undefined8 *)(lVar2 + 0x38),auVar13._0_8_);
        *(undefined8 *)(lVar2 + 0x48) = auVar13._8_8_;
        func_0x032809c4((undefined8 *)(lVar2 + 0x48),auVar13._8_8_);
        *(long *)(lVar2 + 0x28) = lVar5;
        func_0x032809c4((long *)(lVar2 + 0x28),lVar5);
        return lVar2;
      }
      auVar12 = func_0x03280cac();
      register0x00000008 = (BADSPACEBASE *)auStack_100;
      auStack_100[0] = 0x3d60730;
      plVar11 = *(long **)(lVar6 + 0x38);
      lVar3 = lVar6;
      lStack_f0 = lVar2;
      lStack_d8 = lVar5;
      auStack_e8 = auVar13;
      if (plVar11 == (long *)0x0) {
        func_0x03256878(lVar6);
        plVar11 = *(long **)(lVar6 + 0x38);
      }
      if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar2 = func_0x03280ca0();
      lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
      func_0x0531e428(lVar2,0xfffffffe);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x38) = auVar12._0_8_;
        func_0x032809c4((undefined8 *)(lVar2 + 0x38),auVar12._0_8_);
        *(undefined8 *)(lVar2 + 0x48) = auVar12._8_8_;
        func_0x032809c4((undefined8 *)(lVar2 + 0x48),auVar12._8_8_);
        *(long *)(lVar2 + 0x28) = lVar10;
        func_0x032809c4((long *)(lVar2 + 0x28),lVar10);
        return lVar2;
      }
      unaff_x30 = 0x3d607d4;
      auVar13 = func_0x03280cac();
      unaff_x22 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      register0x00000008 = (BADSPACEBASE *)&uStack_40;
      unaff_x30 = uStack_70;
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
    lVar6 = 0;
    lVar10 = unaff_x19;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x18) = auVar12;
  *(long *)((long)register0x00000008 + -8) = lVar10;
  plVar11 = *(long **)(lVar3 + 0x38);
  lVar10 = lVar3;
  if (plVar11 == (long *)0x0) {
    func_0x03256878(lVar3);
    plVar11 = *(long **)(lVar3 + 0x38);
  }
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar2 = func_0x03280ca0();
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + 8);
  func_0x0531ec78(lVar2,0xfffffffe);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x40) = auVar13._0_8_;
    func_0x032809c4((undefined8 *)(lVar2 + 0x40),auVar13._0_8_);
    *(undefined8 *)(lVar2 + 0x50) = auVar13._8_8_;
    func_0x032809c4((undefined8 *)(lVar2 + 0x50),auVar13._8_8_);
    *(long *)(lVar2 + 0x30) = lVar6;
    func_0x032809c4((long *)(lVar2 + 0x30),lVar6);
    return lVar2;
  }
  auVar12 = func_0x03280cac();
  lVar2 = auVar12._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x48) = auVar13;
  *(long *)((long)register0x00000008 + -0x38) = lVar6;
  plVar11 = *(long **)(lVar10 + 0x38);
  if (plVar11 == (long *)0x0) {
    func_0x03256878(lVar10);
    plVar11 = *(long **)(lVar10 + 0x38);
  }
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar3 = func_0x03280ca0();
  puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x38) + 8);
  (*(code *)*puVar8)(lVar3,0xfffffffe);
  if (lVar3 != 0) {
    func_0x02f17738(lVar3,*(long *)(**(long **)(lVar10 + 0x38) + 0x80) + 0xc0,lVar2);
    func_0x02f17738(lVar3,*(long *)(**(long **)(lVar10 + 0x38) + 0x80) + 0x100,auVar12._8_8_);
    func_0x02f17738(lVar3,*(long *)(**(long **)(lVar10 + 0x38) + 0x80) + 0x80,uVar7);
    return lVar3;
  }
  auVar13 = func_0x03280cac();
  lVar3 = auVar13._8_8_;
  plVar11 = auVar13._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar12;
  *(long *)((long)register0x00000008 + -0x70) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar7;
  puVar9 = puVar8;
  if (puVar8[7] == 0) {
    func_0x03256878(puVar8);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar11 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar3 == 0)) {
    uVar7 = func_0x03280a2c(puVar4);
    uVar7 = func_0x05ac7464(uVar7,0);
    func_0x03280b7c(uVar7,puVar8);
LAB_03d60c04:
    func_0x03281048(plVar11);
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(puVar8[7] + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar5 = *plVar11;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)) {
      lVar10 = *(long *)(puVar8[7] + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
        lVar5 = *plVar11;
        bVar1 = *(byte *)(lVar5 + 0x130);
      }
      if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10))
      {
        lVar10 = *(long *)(puVar8[7] + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
          lVar5 = *plVar11;
          bVar1 = *(byte *)(lVar5 + 0x130);
        }
        if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (**(code **)(lVar5 + 0x228))(plVar11,lVar3,*(undefined8 *)(lVar5 + 0x230));
          return lVar10;
        }
      }
      goto LAB_03d60c04;
    }
    lVar10 = *(long *)(puVar8[7] + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar10 = func_0x03280b90(plVar11,lVar10);
    if (lVar10 == 0) {
      lVar10 = *(long *)(puVar8[7] + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10
         )) {
        if ((*(byte *)(*(long *)(puVar8[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        func_0x04b68fa4(lVar10,plVar11,lVar3,*(undefined8 *)(puVar8[7] + 0x58));
        return lVar10;
      }
      if ((*(byte *)(*(long *)(puVar8[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar2 = func_0x03280ca0();
      lVar10 = *(long *)(puVar8[7] + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      if ((*(byte *)(lVar10 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10
         )) {
        func_0x04b713b0(lVar2,plVar11,lVar3,*(undefined8 *)(puVar8[7] + 0x48));
        return lVar2;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar8[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar2 = func_0x03280ca0();
    lVar10 = *(long *)(puVar8[7] + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar5 = func_0x03280b90(plVar11,lVar10);
    if (lVar5 != 0) {
      func_0x04b66610(lVar2,lVar5,lVar3,*(undefined8 *)(puVar8[7] + 0x30));
      return lVar2;
    }
  }
  auVar12 = func_0x03281048(plVar11,lVar10);
  lVar3 = auVar12._8_8_;
  plVar11 = auVar12._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d60c18;
  *(long *)((long)register0x00000008 + -0xb8) = lVar10;
  *(long *)((long)register0x00000008 + -0xb0) = lVar2;
  *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar8;
  *(undefined1 (*) [16])((long)register0x00000008 + -0xa0) = auVar13;
  if (puVar9[7] == 0) {
    func_0x03256878(puVar9);
  }
  puVar4 = PTR_DAT_07774b08;
  if ((plVar11 == (long *)0x0) || (puVar4 = PTR_DAT_077799b8, lVar3 == 0)) {
    uVar7 = func_0x03280a2c(puVar4);
    uVar7 = func_0x05ac7464(uVar7,0);
    func_0x03280b7c(uVar7,puVar9);
  }
  else {
    lVar2 = *(long *)(puVar9[7] + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c();
    }
    lVar5 = *plVar11;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if ((bVar1 < *(byte *)(lVar2 + 0x130)) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) {
      lVar2 = *(long *)(puVar9[7] + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = func_0x0325681c(lVar2);
      }
      lVar2 = func_0x03280b90(plVar11,lVar2);
      if (lVar2 != 0) {
        if ((*(byte *)(*(long *)(puVar9[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar2 = func_0x03280ca0();
        lVar10 = *(long *)(puVar9[7] + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        lVar5 = func_0x03280b90(plVar11,lVar10);
        if (lVar5 != 0) {
          func_0x04b667e0(lVar2,lVar5,lVar3,*(undefined8 *)(puVar9[7] + 0x30));
          return lVar2;
        }
        goto LAB_03d60ee0;
      }
      lVar2 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2))
      {
        if ((*(byte *)(*(long *)(puVar9[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        func_0x04b693d0(lVar10,plVar11,lVar3,*(undefined8 *)(puVar9[7] + 0x58));
        return lVar10;
      }
      if ((*(byte *)(*(long *)(puVar9[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar2 = func_0x03280ca0();
      lVar5 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c(lVar5);
      }
      if ((*(byte *)(lVar5 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5))
      {
        func_0x04b715c8(lVar2,plVar11,lVar3,*(undefined8 *)(puVar9[7] + 0x48));
        return lVar2;
      }
    }
    else {
      lVar2 = *(long *)(puVar9[7] + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = func_0x0325681c(lVar2);
        lVar5 = *plVar11;
        bVar1 = *(byte *)(lVar5 + 0x130);
      }
      if ((*(byte *)(lVar2 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
        lVar2 = *(long *)(puVar9[7] + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = func_0x0325681c(lVar2);
          lVar5 = *plVar11;
          bVar1 = *(byte *)(lVar5 + 0x130);
        }
        if ((*(byte *)(lVar2 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2))
        {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (**(code **)(lVar5 + 0x228))(plVar11,lVar3,*(undefined8 *)(lVar5 + 0x230));
          return lVar10;
        }
      }
    }
  }
  func_0x03281048(plVar11);
LAB_03d60ee0:
  lVar10 = func_0x03281048(plVar11,lVar10);
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)register0x00000008 + -0xd0) = auVar12;
  lVar2 = *(long *)(lVar10 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = func_0x0325681c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = func_0x0325681c();
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  func_0x03280ab0();
  if (lVar2 == 0) {
    lVar2 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c();
    }
    lVar2 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar3 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    **(long **)(lVar3 + 0xb8) = lVar2;
    lVar10 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar10 + 0xb8),lVar2);
  }
  return lVar2;
}

