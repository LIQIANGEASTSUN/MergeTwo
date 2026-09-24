/* Ghidra 12.1.2 native pseudocode; RVA 0x454506C; MergeEngine.ECS.Systems.State.StateSystemBase<TStatePayload>.InitializeSystem; status ok */


/* WARNING: Possible PIC construction at 0x04645160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04645164) */
/* WARNING: Removing unreachable block (ram,0x064a731c) */

long * MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload___InitializeSystem
                 (long param_1,long param_2)

{
  undefined *puVar1;
  code **ppcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong uVar9;
  long *plVar10;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar11;
  undefined8 unaff_x24;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *apcStack_60 [2];
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar8 = unaff_x21;
  lVar4 = unaff_x22;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar9 = *(ulong *)(*(long *)(param_1 + 0x40) + 0x20);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) == 0)
    {
      func_0x0325681c();
    }
    lVar4 = func_0x03280ca0();
    lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    func_0x054221d4(lVar4,param_1,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x38));
    unaff_x20 = 0;
    unaff_x19 = param_2;
    lVar8 = param_1;
    if (uVar9 != 0) {
      ppcVar2 = (code **)&stack0xffffffffffffffe0;
      lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) +
                                                     0x40) + 0x20) + 0xc0) + 0x28);
      func_0x04d0f064();
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0f3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar7 = (long *)(**(code **)(lVar4 + 0x18))
                                   (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(uVar9 + 0x20),
                                    *(undefined8 *)(lVar4 + 0x28));
        return plVar7;
      }
      uVar12 = 0x4d0f3b8;
      auVar14 = func_0x03280cac();
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar9;
      auVar13 = auVar13 << 0x40;
      goto LAB_04d0f110;
    }
  }
  auVar13 = func_0x03280cac();
  lVar11 = auVar13._8_8_;
  ppcVar2 = apcStack_60;
  apcStack_60[0] = MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload___DisposeSystem;
  lVar5 = *(long *)(auVar13._0_8_ + 0x40);
  lStack_50 = lVar4;
  lStack_48 = lVar8;
  uStack_40 = unaff_x20;
  lStack_38 = unaff_x19;
  if (lVar5 != 0) {
    unaff_x21 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) == 0)
    {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    auVar14._8_8_ = unaff_x22;
    auVar14._0_8_ = unaff_x21;
    lVar8 = *(long *)(*(long *)(lVar11 + 0x20) + 0xc0);
    func_0x054221d4(unaff_x22,auVar13._0_8_,*(undefined8 *)(lVar8 + 0x28),
                    *(undefined8 *)(lVar8 + 0x38));
    if (unaff_x21 != 0) {
      lVar8 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x48);
      uVar12 = 0x4645164;
LAB_04d0f110:
      lVar8 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x30);
      *(undefined8 *)((long)ppcVar2 + -0x40) = uVar12;
      *(undefined8 *)((long)ppcVar2 + -0x30) = unaff_x24;
      *(undefined8 *)((long)ppcVar2 + -0x28) = unaff_x23;
      *(long *)((long)ppcVar2 + -0x20) = unaff_x22;
      *(long *)((long)ppcVar2 + -0x18) = unaff_x21;
      *(long *)((long)ppcVar2 + -0x10) = auVar13._8_8_;
      *(long *)((long)ppcVar2 + -8) = auVar13._0_8_;
      plVar10 = (long *)(auVar14._0_8_ + 0x10);
      plVar7 = (long *)*plVar10;
      do {
        lVar4 = func_0x057ddd18(plVar7,auVar14._8_8_,0);
        lVar11 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = func_0x03280b90(lVar4,lVar11);
          if (lVar5 == 0) {
            auVar13 = func_0x03281048(lVar4,lVar11);
            *(undefined8 *)((long)ppcVar2 + -0x70) = 0x4d0f1bc;
            *(long **)((long)ppcVar2 + -0x60) = plVar7;
            *(long *)((long)ppcVar2 + -0x58) = auVar14._8_8_;
            *(long **)((long)ppcVar2 + -0x50) = plVar10;
            *(long *)((long)ppcVar2 + -0x48) = lVar8;
            if ((bRam0000000007e1aecd & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758);
              bRam0000000007e1aecd = 1;
            }
            puVar1 = PTR_DAT_0774e758;
            plVar10 = (long *)(auVar13._0_8_ + 0x18);
            plVar7 = (long *)*plVar10;
            while ((plVar6 = (long *)func_0x057ddb20(plVar7,auVar13._8_8_,0), plVar6 == (long *)0x0
                   || (*plVar6 == *(long *)puVar1))) {
              plVar6 = (long *)func_0x032dd140(plVar10,plVar6,plVar7);
              bVar3 = plVar7 == plVar6;
              plVar7 = plVar6;
              if (bVar3) {
                return plVar6;
              }
            }
            auVar14 = func_0x03281048(plVar6);
            *(undefined8 *)((long)ppcVar2 + -0xa0) = 0x4d0f258;
            *(undefined **)((long)ppcVar2 + -0x90) = puVar1;
            *(long **)((long)ppcVar2 + -0x88) = plVar7;
            *(long **)((long)ppcVar2 + -0x80) = plVar10;
            *(long *)((long)ppcVar2 + -0x78) = auVar13._8_8_;
            if ((bRam0000000007e1aece & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758);
              bRam0000000007e1aece = 1;
            }
            puVar1 = PTR_DAT_0774e758;
            plVar10 = (long *)(auVar14._0_8_ + 0x18);
            plVar7 = (long *)*plVar10;
            while ((plVar6 = (long *)func_0x057ddd18(plVar7,auVar14._8_8_,0), plVar6 == (long *)0x0
                   || (*plVar6 == *(long *)puVar1))) {
              plVar6 = (long *)func_0x032dd140(plVar10,plVar6,plVar7);
              bVar3 = plVar7 == plVar6;
              plVar7 = plVar6;
              if (bVar3) {
                return plVar6;
              }
            }
            lVar8 = func_0x03281048(plVar6);
            return *(long **)(lVar8 + 0x20);
          }
        }
        plVar6 = (long *)func_0x032dd140(plVar10,lVar5,plVar7);
        bVar3 = plVar7 == plVar6;
        plVar7 = plVar6;
        if (bVar3) {
          return plVar6;
        }
      } while( true );
    }
  }
  auVar13 = func_0x03280cac();
  plVar7 = auVar13._0_8_;
  if (auVar13._8_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x04645190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(**(code **)(*plVar7 + 0x208))
                               (plVar7,auVar13._8_8_,*(undefined8 *)(*plVar7 + 0x210));
    return plVar7;
  }
  return plVar7;
}

