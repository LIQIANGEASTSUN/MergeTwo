
void Recovered_ItemMerger_NestedType__Merge_d__5_MoveNext_0x02C0395C
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  undefined1 auVar23 [8];
  undefined1 auVar24 [16];
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined1 auStack_140 [16];
  ulong uStack_130;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  ulong uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a0 [16];
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((bRam0000000006812ba1 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fcd88);
    func_0x02ad6de0(PTR_DAT_063fcd90);
    func_0x02ad6de0(PTR_DAT_063fc5e8);
    func_0x02ad6de0(PTR_DAT_063fc5f0);
    func_0x02ad6de0(PTR_DAT_063fcd98);
    func_0x02ad6de0(PTR_DAT_063fcda0);
    func_0x02ad6de0(PTR_DAT_063f3f20);
    func_0x02ad6de0(PTR_DAT_063fc870);
    func_0x02ad6de0(PTR_DAT_063f9e90);
    func_0x02ad6de0(PTR_DAT_063fa0a0);
    func_0x02ad6de0(PTR_DAT_063f6c20);
    func_0x02ad6de0(PTR_DAT_063f6c28);
    func_0x02ad6de0(PTR_DAT_063fa170);
    func_0x02ad6de0(PTR_DAT_063f6c30);
    func_0x02ad6de0(PTR_DAT_063fa0d8);
    func_0x02ad6de0(PTR_DAT_063fa3c0);
    func_0x02ad6de0(PTR_DAT_063fcda8);
    func_0x02ad6de0(PTR_DAT_063fcdb0);
    func_0x02ad6de0(PTR_DAT_063fcdb8);
    func_0x02ad6de0(PTR_DAT_063fcdc0);
    func_0x02ad6de0(PTR_DAT_063fcdc8);
    func_0x02ad6de0(PTR_DAT_063fc5f8);
    func_0x02ad6de0(PTR_DAT_063f3ce0);
    func_0x02ad6de0(PTR_DAT_063fc5a0);
    func_0x02ad6de0(PTR_DAT_063fcdd0);
    bRam0000000006812ba1 = 1;
  }
  puVar4 = PTR_DAT_063fa0a0;
  uStack_b0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  auStack_100._0_8_ = 0;
  auStack_100._8_8_ = 0;
  auStack_120 = (undefined1  [8])0x0;
  uStack_118 = (long *)0x0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_110 = 0;
  auStack_140._0_8_ = 0;
  auStack_140._8_8_ = 0;
  uStack_130 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lVar22 = *(long *)(param_4 + 0x12);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  plStack_188 = (long *)0x0;
  if (*param_4 == 0) {
    auStack_100 = *(undefined1 (*) [16])(param_4 + 0x1e);
    param_4[0x1e] = 0;
    param_4[0x1f] = 0;
    param_4[0x20] = 0;
    param_4[0x21] = 0;
    *param_4 = -1;
LAB_02d04090:
    if (cRam00000000068124a1 == '\0') {
      func_0x02ad6de0(PTR_DAT_063f3fc0);
      cRam00000000068124a1 = '\x01';
    }
    uVar14 = auStack_100._0_8_;
    if ((long *)auStack_100._0_8_ != (long *)0x0) {
      lVar11 = *(long *)auStack_100._0_8_;
      uVar16 = auStack_100._8_8_ & 0xffff;
      uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar19 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_063f3fc0) {
            puVar12 = (undefined8 *)(lVar11 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_02d04114;
          }
          uVar19 = uVar19 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)func_0x02b0e364(auStack_100._0_8_,*(long *)PTR_DAT_063f3fc0,2);
LAB_02d04114:
      (*(code *)*puVar12)(uVar14,uVar16,puVar12[1]);
    }
    if (*(long *)(param_4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    Recovered_BoardSlot_SetItem_0x02B9F90C(*(long *)(param_4 + 0xc),0,1,0);
    if (*(long *)(param_4 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    Recovered_BoardSlot_SetItem_0x02B9F90C(*(long *)(param_4 + 0xe),0,1,0);
    iVar9 = param_4[0x1a];
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      func_0x02ad6f5c();
    }
    uVar19 = Recovered_ItemId_IsTutorialItem_0x2bf3b84(iVar9,0);
    if ((uVar19 & 1) == 0) {
      iVar9 = param_4[0x1b];
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        func_0x02ad6f5c();
      }
      bVar5 = Recovered_ItemId_IsTutorialItem_0x2bf3b84(iVar9,0);
      *(byte *)(param_4 + 0x1d) = bVar5 & 1;
      if ((bVar5 & 1) != 0) goto LAB_02d041b0;
    }
    else {
      *(undefined1 *)(param_4 + 0x1d) = 1;
LAB_02d041b0:
      iVar9 = param_4[0x1a];
      if (iVar9 != param_4[0x1b]) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          func_0x02ad6f5c();
        }
        uVar19 = Recovered_ItemId_IsTutorialItem_0x2bf3b84(iVar9,0);
        lVar11 = 0x60;
        if ((uVar19 & 1) == 0) {
          lVar11 = 0x58;
        }
        if (*(long *)(param_4 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          NullReferenceThrowHelper();
        }
        lVar15 = *(long *)(*(long *)(param_4 + 0x14) + 0x10);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          NullReferenceThrowHelper();
        }
        *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)((long)param_4 + lVar11);
        func_0x02ad6d8c();
      }
    }
    lVar11 = *(long *)(param_4 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    *(undefined1 *)((long)param_4 + 0x75) = *(undefined1 *)(lVar11 + 0x40);
    *(undefined1 *)(lVar11 + 0x40) = 0;
    if (*(long *)(param_4 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    if (*(long *)(param_4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    Recovered_BoardSlot_SetItem_0x02B9F90C
              (*(long *)(param_4 + 0xc),*(undefined8 *)(*(long *)(param_4 + 0x14) + 0x10),1,0);
    if (*(long *)(param_4 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    plVar13 = *(long **)(*(long *)(param_4 + 0x14) + 0x10);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    (**(code **)(*plVar13 + 0x248))
              (auStack_a0,plVar13,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(*plVar13 + 0x250))
    ;
    uStack_130 = (ulong)plStack_90;
    auStack_140 = auStack_a0;
    auStack_a0._8_8_ = 0;
    plStack_90 = (long *)0x0;
    auStack_a0._0_8_ = 0;
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_063fc5f8 + 0x20) + 0x135) & 1) == 0) {
      func_0x02b0e028();
    }
    plStack_90 = (long *)uStack_130;
    auStack_a0 = auStack_140;
    func_0x02ad6d8c(auStack_a0,0);
    uStack_110 = (ulong)plStack_90;
    _auStack_120 = auStack_a0;
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_063fc5f0 + 0x20) + 0x135) & 1) == 0) {
      func_0x02b0e028();
    }
    if (cRam00000000068125ff == '\0') {
      func_0x02ad6de0(PTR_DAT_063f3fc0);
      cRam00000000068125ff = '\x01';
    }
    auVar23 = auStack_120;
    plVar13 = uStack_118;
    if (auStack_120 == (undefined1  [8])0x0) goto joined_r0x02d043fc;
    lVar11 = *(long *)auStack_120;
    uVar16 = uStack_110 & 0xffff;
    uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar19 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_063f3fc0) {
          puVar12 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_02d04360;
        }
        uVar19 = uVar19 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)func_0x02b0e364(auStack_120,*(long *)PTR_DAT_063f3fc0,0);
LAB_02d04360:
    iVar9 = (*(code *)*puVar12)(auVar23,uVar16,puVar12[1]);
    if (iVar9 == 0) {
      *param_4 = 1;
      *(undefined1 (*) [16])(param_4 + 0x22) = _auStack_120;
      *(ulong *)(param_4 + 0x26) = uStack_110;
      func_0x02ad6d8c(param_4 + 0x22,0);
      func_0x0340a610(param_4 + 2,auStack_120,param_4,*(undefined8 *)PTR_DAT_063fcd88);
      return;
    }
  }
  else {
    if (*param_4 != 1) {
      lVar11 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063fcdc8);
      func_0x0524fb48(lVar11,0);
      plVar13 = (long *)(param_4 + 0x14);
      *plVar13 = lVar11;
      func_0x02ad6d8c(plVar13,lVar11);
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      *(undefined8 *)(*plVar13 + 0x10) = *(undefined8 *)(param_4 + 10);
      func_0x02ad6d8c();
      if (*(long *)(param_4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      *(undefined1 *)(*(long *)(param_4 + 0xc) + 0x2c) = 0;
      puVar3 = PTR_DAT_063f9e90;
      if (*(long *)(param_4 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      *(undefined1 *)(*(long *)(param_4 + 0xe) + 0x2c) = 0;
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        func_0x02ad6f5c();
        lVar11 = *(long *)puVar3;
      }
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x60);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      (**(code **)(lVar11 + 0x18))
                (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(*plVar13 + 0x10),0,
                 *(undefined8 *)(lVar11 + 0x28));
      lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      (**(code **)(lVar11 + 0x18))
                (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(param_4 + 0x10),0,
                 *(undefined8 *)(lVar11 + 0x28));
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      lVar11 = *(long *)(*plVar13 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      plVar20 = (long *)(param_4 + 0x16);
      *plVar20 = *(long *)(lVar11 + 0x50);
      func_0x02ad6d8c(plVar20);
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(*(long *)(param_4 + 0x10) + 0x50);
      func_0x02ad6d8c();
      if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      param_4[0x1a] = *(int *)(*plVar20 + 0x30);
      if (*(long *)(param_4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      iVar9 = *(int *)(*(long *)(param_4 + 0x18) + 0x30);
      param_4[0x1b] = iVar9;
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      iVar1 = *(int *)(*(long *)(param_4 + 0x10) + 0x44);
      param_4[0x1c] = iVar1;
      if (*(long *)(param_4 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      *(undefined1 *)(*(long *)(param_4 + 0xe) + 0x2c) = 1;
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      if (*(long *)(lVar22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      func_0x03723690(*(long *)(lVar22 + 0x10),CONCAT44(iVar1,iVar9),0,
                      *(undefined8 *)PTR_DAT_063fa3c0);
      lVar11 = *(long *)(lVar22 + 0x10);
      uStack_f0 = 0;
      uStack_e8 = 0;
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      uStack_f0 = *(undefined8 *)(*plVar13 + 0x10);
      func_0x02ad6d8c(&uStack_f0);
      uStack_e8 = *(undefined8 *)(param_4 + 0x10);
      func_0x02ad6d8c(&uStack_e8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      func_0x03723d20(lVar11,uStack_f0,uStack_e8,*(undefined8 *)PTR_DAT_063fcdb0);
      lVar11 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063fc870);
      func_0x02cf956c(lVar11,0);
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      lVar15 = func_0x05c3f95c(*(long *)(param_4 + 0x10),0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      uVar8 = func_0x05c54030(lVar15,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      *(undefined4 *)(lVar11 + 0x10) = uVar8;
      *(undefined4 *)(lVar11 + 0x14) = param_2;
      *(undefined4 *)(lVar11 + 0x18) = param_3;
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      lVar15 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      (**(code **)(lVar15 + 0x18))
                (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(*plVar13 + 0x10),lVar11,
                 *(undefined8 *)(lVar15 + 0x28));
      lVar11 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063f6c30);
      func_0x03c9cea8(lVar11,*(undefined8 *)PTR_DAT_063f6c28);
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      plVar20 = *(long **)(*plVar13 + 0x10);
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      auVar24 = (**(code **)(*plVar20 + 0x238))(plVar20,1,*(undefined8 *)(*plVar20 + 0x240));
      puVar3 = PTR_DAT_063f6c20;
      if (lVar11 == 0) {
LAB_02d048a4:
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      lVar15 = *(long *)(lVar11 + 0x10);
      lVar17 = *(long *)PTR_DAT_063f6c20;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_02d048a4;
      uVar7 = *(uint *)(lVar11 + 0x18);
      if (uVar7 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar7 + 1;
        pauVar10 = (undefined1 (*) [16])(lVar15 + (long)(int)uVar7 * 0x10 + 0x20);
        *pauVar10 = auVar24;
        func_0x02ad6d8c(pauVar10,0);
      }
      else {
        func_0x03c9d754(lVar11,auVar24._0_8_,auVar24._8_8_,
                        *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(param_4 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      plVar20 = *(long **)(param_4 + 0x10);
      uVar8 = *(undefined4 *)(*(long *)(param_4 + 0x16) + 0x30);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        func_0x02ad6f5c();
      }
      uVar19 = Recovered_ItemId_IsBooster_0x2bfda04(uVar8,0);
      if ((uVar19 & 1) == 0) {
        uVar7 = 1;
      }
      else {
        if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          NullReferenceThrowHelper();
        }
        uVar7 = Recovered_ItemIdExtensions_IsSame_0x2bf77ec
                          (*(undefined8 *)(*plVar13 + 0x10),*(undefined8 *)(param_4 + 0x10),0);
      }
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      auVar24 = (**(code **)(*plVar20 + 0x238))(plVar20,uVar7 & 1,*(undefined8 *)(*plVar20 + 0x240))
      ;
      lVar15 = *(long *)(lVar11 + 0x10);
      lVar17 = *(long *)puVar3;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      uVar7 = *(uint *)(lVar11 + 0x18);
      if (uVar7 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar7 + 1;
        pauVar10 = (undefined1 (*) [16])(lVar15 + (long)(int)uVar7 * 0x10 + 0x20);
        *pauVar10 = auVar24;
        func_0x02ad6d8c(pauVar10,0);
      }
      else {
        func_0x03c9d754(lVar11,auVar24._0_8_,auVar24._8_8_,
                        *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      puVar2 = PTR_DAT_063f3ce0;
      if (*(int *)(*(long *)PTR_DAT_063f3ce0 + 0xe4) == 0) {
        func_0x02ad6f5c();
      }
      auVar24 = func_0x05a3d834(0x96,0,8,0,0,0);
      lVar15 = *(long *)(lVar11 + 0x10);
      lVar17 = *(long *)puVar3;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      uVar7 = *(uint *)(lVar11 + 0x18);
      if (uVar7 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar7 + 1;
        pauVar10 = (undefined1 (*) [16])(lVar15 + (long)(int)uVar7 * 0x10 + 0x20);
        *pauVar10 = auVar24;
        func_0x02ad6d8c(pauVar10,0);
      }
      else {
        func_0x03c9d754(lVar11,auVar24._0_8_,auVar24._8_8_,
                        *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      auStack_a0 = func_0x05a3f968(lVar11,0);
      func_0x02ad6d8c(auStack_a0,0);
      uVar21 = auStack_a0._8_8_;
      uVar14 = auStack_a0._0_8_;
      auStack_100 = auStack_a0;
      if (cRam000000000681249f == '\0') {
        func_0x02ad6de0(PTR_DAT_063f3ce0);
        cRam000000000681249f = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        func_0x02ad6f5c();
      }
      if (cRam00000000068124a0 == '\0') {
        func_0x02ad6de0(PTR_DAT_063f3fc0);
        cRam00000000068124a0 = '\x01';
      }
      if ((long *)uVar14 != (long *)0x0) {
        lVar11 = *(long *)uVar14;
        uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar19 != 0) {
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_063f3fc0) {
              puVar12 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_02d0407c;
            }
            uVar19 = uVar19 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)func_0x02b0e364(uVar14,*(long *)PTR_DAT_063f3fc0,0);
LAB_02d0407c:
        iVar9 = (*(code *)*puVar12)(uVar14,uVar21 & 0xffffffff,puVar12[1]);
        if (iVar9 == 0) {
          *param_4 = 0;
          *(undefined1 (*) [16])(param_4 + 0x1e) = auStack_100;
          func_0x02ad6d8c(param_4 + 0x1e,0);
          func_0x0342c228(param_4 + 2,auStack_100,param_4,*(undefined8 *)PTR_DAT_063fcd90);
          return;
        }
      }
      goto LAB_02d04090;
    }
    auVar23 = *(undefined1 (*) [8])*(undefined1 (*) [16])(param_4 + 0x22);
    _auStack_120 = *(undefined1 (*) [16])(param_4 + 0x22);
    uStack_110 = *(ulong *)(param_4 + 0x26);
    param_4[0x24] = 0;
    param_4[0x25] = 0;
    param_4[0x26] = 0;
    param_4[0x27] = 0;
    param_4[0x22] = 0;
    param_4[0x23] = 0;
    *param_4 = -1;
    auStack_140 = ZEXT816(0);
    auStack_100 = ZEXT816(0);
  }
  plVar13 = uStack_118;
  if (auVar23 != (undefined1  [8])0x0) {
    uVar19 = uStack_110 & 0xffff;
    lVar11 = *(long *)(*(long *)PTR_DAT_063fc5e8 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x02b0e028();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x02b0e028(lVar11);
    }
    lVar15 = *(long *)auVar23;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_02d04534;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)func_0x02b0e364(auVar23,lVar11,0);
LAB_02d04534:
    plVar13 = (long *)(*(code *)*puVar12)(auVar23,uVar19,puVar12[1]);
  }
joined_r0x02d043fc:
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  if (plVar13[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  func_0x02d48590(plVar13[0xc],*(undefined8 *)PTR_DAT_063fc5a0,0);
  (**(code **)(*plVar13 + 0x1b8))(plVar13,0,*(undefined8 *)(*plVar13 + 0x1c0));
  uVar8 = Recovered_BaseItem_get_MaxLevel_0x2bf3c70(plVar13,0);
  if ((char)param_4[0x1d] != '\0') {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      func_0x02ad6f5c();
    }
    iVar9 = func_0x02cfd110(0);
    if (plVar13[10] == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    if (iVar9 == *(int *)(plVar13[10] + 0x30)) {
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      plVar20 = *(long **)(lVar22 + 0x18);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        func_0x02ad6f5c();
      }
      uVar8 = func_0x02cfd160(0);
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      lVar11 = *plVar20;
      uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar19 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_063f3f20) {
            puVar12 = (undefined8 *)(lVar11 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto LAB_02d04598;
          }
          uVar19 = uVar19 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)func_0x02b0e364(plVar20,*(long *)PTR_DAT_063f3f20,4);
LAB_02d04598:
      lVar11 = (*(code *)*puVar12)(plVar20,uVar8,puVar12[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      if (*(long *)(lVar11 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      uVar8 = *(undefined4 *)(*(long *)(lVar11 + 0x58) + 0x18);
    }
  }
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  plStack_170 = plVar13;
  func_0x02ad6d8c(&plStack_170,plVar13);
  uStack_168 = *(undefined8 *)(param_4 + 0x10);
  func_0x02ad6d8c(&uStack_168);
  uStack_160 = *(undefined8 *)(param_4 + 0xc);
  func_0x02ad6d8c(&uStack_160);
  uStack_180 = CONCAT44(*(undefined4 *)((long)plVar13 + 0x44),param_4[0x1c]);
  uStack_178 = CONCAT71(uStack_178._1_7_,(char)param_4[0x1d]);
  uVar6 = Recovered_BaseItem_get_IsMaxLeveled_0x2bf3374(plVar13,0);
  uStack_158 = CONCAT44(uVar8,(undefined4)uStack_158);
  uStack_158 = CONCAT71(uStack_158._1_7_,uVar6) & 0xffffffffffffff01;
  plVar20 = (long *)(param_4 + 0x14);
  uStack_150 = CONCAT71(uStack_150._1_7_,*(undefined1 *)((long)param_4 + 0x75));
  if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  uVar19 = Recovered_ItemIdExtensions_IsSame_0x2bf77ec
                     (*(undefined8 *)(*plVar20 + 0x10),*(undefined8 *)(param_4 + 0x10),0);
  if ((uVar19 & 1) == 0) {
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    uVar21 = *(undefined8 *)(lVar22 + 0x20);
    lVar11 = *plVar20;
    uVar14 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063fcda0);
    func_0x04db1af8(uVar14,lVar11,*(undefined8 *)PTR_DAT_063fcdb8,0);
    uVar6 = func_0x034f0488(uVar21,uVar14,*(undefined8 *)PTR_DAT_063fcd98);
  }
  else {
    uVar6 = 1;
  }
  uStack_150 = CONCAT62(uStack_150._2_6_,CONCAT11(uVar6,(undefined1)uStack_150)) &
               0xffffffffffff01ff;
  if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  uVar19 = Recovered_ItemIdExtensions_IsSame_0x2bf77ec
                     (*(undefined8 *)(*plVar20 + 0x10),*(undefined8 *)(param_4 + 0x10),0);
  if ((uVar19 & 1) == 0) {
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    uVar21 = *(undefined8 *)(lVar22 + 0x28);
    lVar11 = *plVar20;
    uVar14 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063fcda0);
    func_0x04db1af8(uVar14,lVar11,*(undefined8 *)PTR_DAT_063fcdc0,0);
    uVar6 = func_0x034f0488(uVar21,uVar14,*(undefined8 *)PTR_DAT_063fcd98);
  }
  else {
    uVar6 = 1;
  }
  uStack_150 = CONCAT53((int5)(uStack_150 >> 0x18),CONCAT12(uVar6,(undefined2)uStack_150)) &
               0xffffffff0001ffff;
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_c8 = uStack_168;
  plStack_d0 = plStack_170;
  uStack_b0 = uStack_150;
  iVar9 = func_0x02cb6c68(0);
  func_0x02cb6d04(iVar9 + 1,0);
  if (lVar22 != 0) {
    if (*(long *)(lVar22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    auStack_a0._8_8_ = uStack_d8;
    auStack_a0._0_8_ = uStack_e0;
    uStack_88 = uStack_c8;
    plStack_90 = plStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_70 = uStack_b0;
    func_0x03723b88(*(long *)(lVar22 + 0x10),auStack_a0,*(undefined8 *)PTR_DAT_063fcda8);
    lVar22 = *(long *)(lVar22 + 0x10);
    plStack_188 = plVar13;
    func_0x02ad6d8c(&plStack_188,plVar13);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    func_0x03723314(lVar22,plStack_188,*(undefined8 *)PTR_DAT_063fa0d8);
    iVar9 = func_0x02cb5cbc(0);
    if (iVar9 < 4) {
      if (plVar13[10] == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      uVar14 = func_0x05208fd4(plVar13[10] + 0x30,0);
      if (plVar13[10] == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      func_0x02f3153c(uVar14,*(undefined8 *)(plVar13[10] + 0x28),
                      *(undefined4 *)((long)plVar13 + 0x44),*(undefined1 *)((long)param_4 + 0x75),
                      *(undefined8 *)PTR_DAT_063fcdd0,0);
    }
    if (*(long *)(param_4 + 0xc) != 0) {
      *(undefined1 *)(*(long *)(param_4 + 0xc) + 0x2c) = 1;
      *param_4 = -2;
      param_4[0x14] = 0;
      param_4[0x15] = 0;
      func_0x02ad6d8c(plVar20,0);
      piVar18 = param_4 + 0x16;
      piVar18[0] = 0;
      piVar18[1] = 0;
      func_0x02ad6d8c(piVar18,0);
      piVar18 = param_4 + 0x18;
      piVar18[0] = 0;
      piVar18[1] = 0;
      func_0x02ad6d8c(piVar18,0);
      func_0x0511a61c(param_4 + 2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

