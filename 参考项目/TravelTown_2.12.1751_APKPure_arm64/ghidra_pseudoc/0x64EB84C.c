/* Ghidra 12.1.2 native pseudocode; RVA 0x64EB84C; MergeEngine.ECS.Systems.State.Board.Event.EventFreeVouchersStateSystem.InitializeSystem; status ok */


/* WARNING: Possible PIC construction at 0x04645160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04645164) */
/* WARNING: Removing unreachable block (ram,0x064a731c) */
/* WARNING: Removing unreachable block (ram,0x065ebb24) */

long * MergeEngine_ECS_Systems_State_Board_Event_EventFreeVouchersStateSystem__InitializeSystem
                 (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  long unaff_x21;
  long lVar16;
  undefined8 *puVar17;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000007e27057 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777efb8);
    func_0x03280a18(PTR_DAT_077fbb00);
    bRam0000000007e27057 = 1;
  }
  puVar1 = PTR_DAT_077fbb00;
  plVar15 = *(long **)(param_1 + 0x48);
  if (plVar15 == (long *)0x0) {
    auVar18 = func_0x03280cac();
    lVar11 = auVar18._8_8_;
    plVar15 = auVar18._0_8_;
    uStack_80 = 0x65eb93c;
    puVar17 = (undefined8 *)0x7e27000;
    plVar14 = plVar15;
    if ((bRam0000000007e27058 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077fba48);
      func_0x03280a18(PTR_DAT_077efca0);
      func_0x03280a18(PTR_DAT_077fba50);
      func_0x03280a18(PTR_DAT_077efca8);
      func_0x03280a18(PTR_DAT_077fba58);
      func_0x03280a18(PTR_DAT_077efcb0);
      func_0x03280a18(PTR_DAT_077fba60);
      func_0x03280a18(PTR_DAT_077efcc0);
      func_0x03280a18(PTR_DAT_0774e5d8);
      plVar14 = (long *)func_0x03280a18(PTR_DAT_077fba68);
      bRam0000000007e27058 = 1;
    }
    uStack_a0 = 0;
    uStack_98 = 0;
    plStack_90 = (long *)0x0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    plStack_b0 = (long *)0x0;
    if (lVar11 != 0) {
      lVar16 = 0;
      plVar14 = (long *)func_0x055ea870(*(undefined8 *)(lVar11 + 0x20),
                                        **(undefined8 **)(*(long *)PTR_DAT_0774e5d8 + 0xb8));
      if (((ulong)plVar14 & 1) == 0) {
        if (plVar15[10] == 0) goto LAB_065ebbb8;
        lVar10 = func_0x06481980(plVar15[10],0);
        if (lVar10 == 0) goto LAB_065ebbb8;
        func_0x04145068(&uStack_d8,lVar10,*(undefined8 *)PTR_DAT_077efcc0);
        puVar4 = PTR_DAT_077fba68;
        puVar3 = PTR_DAT_077fba60;
        puVar2 = PTR_DAT_077fba50;
        puVar17 = (undefined8 *)PTR_DAT_077fba48;
        puVar1 = PTR_DAT_077efca8;
        uStack_98 = uStack_d0;
        uStack_a0 = uStack_d8;
        plStack_90 = plStack_c8;
        while (uVar12 = func_0x051159b4(&uStack_a0,*(undefined8 *)puVar1), plVar15 = plStack_90,
              (uVar12 & 1) != 0) {
          if (plStack_90 == (long *)0x0) goto LAB_065ebba8;
          uVar9 = func_0x06472e74(plStack_90,0);
          lVar16 = 0;
          uVar12 = func_0x055f7004(uVar9,*(undefined8 *)(lVar11 + 0x20));
          if ((uVar12 & 1) == 0) {
            if (*(long *)(lVar11 + 0x18) == 0) goto LAB_065ebbac;
            func_0x04145068(&uStack_d8,*(long *)(lVar11 + 0x18),*(undefined8 *)puVar3);
            uStack_b8 = uStack_d0;
            uStack_c0 = uStack_d8;
            plStack_b0 = plStack_c8;
            while (uVar12 = func_0x051159b4(&uStack_c0,*(undefined8 *)puVar2), plVar14 = plStack_b0,
                  (uVar12 & 1) != 0) {
              if (plStack_b0 == (long *)0x0) {
                auVar18 = func_0x03280cac();
                while( true ) {
                  uStack_78 = auVar18._8_8_;
                  func_0x051159b0(&uStack_c0,*puVar17);
                  if (plVar15 == (long *)0x0) break;
                  func_0x03280ca4(plVar15);
LAB_065ebba8:
                  func_0x03280cac();
LAB_065ebbac:
                  func_0x03280cac();
                  func_0x03280ca4(plVar15);
LAB_065ebbb8:
                  auVar18 = func_0x03280cac();
                }
                if ((int)uStack_78 == 1) {
                  plVar15 = (long *)func_0x072ce910(auVar18._0_8_);
                  lVar11 = *plVar15;
                  func_0x072ce920();
                  plVar15 = (long *)func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_077efca0);
                  if (lVar11 == 0) {
                    return plVar15;
                  }
                  func_0x03280ca4(lVar11);
                }
                func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_077efca0);
                func_0x03365958(auVar18._0_8_);
                func_0x03280ca4(0);
                auVar20 = func_0x02f09514();
                if (lVar16 != 0) {
                  *(int *)(lVar16 + 0x58) = auVar20._8_4_;
                  return auVar20._0_8_;
                }
                plVar15 = (long *)func_0x03280cac();
                puVar1 = PTR_DAT_077fbb08;
                if ((bRam0000000007e27059 & 1) == 0) {
                  func_0x03280a18(PTR_DAT_077fbb08);
                  bRam0000000007e27059 = 1;
                }
                uVar9 = *(undefined8 *)puVar1;
                return plVar15;
              }
              lVar16 = 0;
              uVar12 = func_0x055ea870(plStack_b0[2],*(undefined8 *)puVar4);
              if ((uVar12 & 1) != 0) {
                *(int *)(plVar15 + 0xb) = (int)plVar14[3];
              }
            }
            func_0x051159b0(&uStack_c0,*puVar17);
          }
        }
        plVar14 = (long *)func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_077efca0);
      }
    }
    return plVar14;
  }
  lVar11 = *plVar15;
  lVar16 = *(long *)PTR_DAT_0777efb8;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)(lVar16 + 0x20)) {
        lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 + 0x138;
        goto LAB_0464506c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  lVar11 = func_0x03256b10(plVar15);
LAB_0464506c:
  lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar16);
  uVar9 = (**(code **)(lVar11 + 8))(plVar15,lVar11);
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  func_0x032809c4();
  lVar11 = *(long *)puVar1;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar12 = *(ulong *)(*(long *)(param_1 + 0x40) + 0x20);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) == 0)
    {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    lVar10 = *(long *)(*(long *)(lVar11 + 0x20) + 0xc0);
    func_0x054221d4(lVar16,param_1,*(undefined8 *)(lVar10 + 0x28),*(undefined8 *)(lVar10 + 0x38));
    if (uVar12 != 0) {
      puVar5 = &stack0xffffffffffffffe0;
      lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                      0x40) + 0x20) + 0xc0) + 0x28);
      func_0x04d0f064();
      if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0f3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar15 = (long *)(**(code **)(lVar16 + 0x18))
                                    (*(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(uVar12 + 0x20),
                                     *(undefined8 *)(lVar16 + 0x28));
        return plVar15;
      }
      uVar9 = 0x4d0f3b8;
      auVar19 = func_0x03280cac();
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar12;
      auVar18 = auVar18 << 0x40;
      goto LAB_04d0f110;
    }
  }
  auVar18 = func_0x03280cac();
  lVar11 = auVar18._8_8_;
  puVar5 = &stack0xffffffffffffffa0;
  lVar16 = *(long *)(auVar18._0_8_ + 0x40);
  if (lVar16 != 0) {
    unaff_x21 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) == 0)
    {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    auVar19._8_8_ = unaff_x22;
    auVar19._0_8_ = unaff_x21;
    lVar16 = *(long *)(*(long *)(lVar11 + 0x20) + 0xc0);
    func_0x054221d4(unaff_x22,auVar18._0_8_,*(undefined8 *)(lVar16 + 0x28),
                    *(undefined8 *)(lVar16 + 0x38));
    if (unaff_x21 != 0) {
      lVar11 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x48);
      uVar9 = 0x4645164;
LAB_04d0f110:
      lVar11 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x30);
      *(undefined8 *)(puVar5 + -0x40) = uVar9;
      *(undefined8 *)(puVar5 + -0x30) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x28) = unaff_x23;
      *(undefined8 *)(puVar5 + -0x20) = unaff_x22;
      *(long *)(puVar5 + -0x18) = unaff_x21;
      *(long *)(puVar5 + -0x10) = auVar18._8_8_;
      *(long *)(puVar5 + -8) = auVar18._0_8_;
      plVar14 = (long *)(auVar19._0_8_ + 0x10);
      plVar15 = (long *)*plVar14;
      do {
        lVar16 = func_0x057ddd18(plVar15,auVar19._8_8_,0);
        lVar10 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        if (lVar16 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = func_0x03280b90(lVar16,lVar10);
          if (lVar7 == 0) {
            auVar18 = func_0x03281048(lVar16,lVar10);
            *(undefined8 *)(puVar5 + -0x70) = 0x4d0f1bc;
            *(long **)(puVar5 + -0x60) = plVar15;
            *(long *)(puVar5 + -0x58) = auVar19._8_8_;
            *(long **)(puVar5 + -0x50) = plVar14;
            *(long *)(puVar5 + -0x48) = lVar11;
            if ((bRam0000000007e1aecd & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758);
              bRam0000000007e1aecd = 1;
            }
            puVar1 = PTR_DAT_0774e758;
            plVar14 = (long *)(auVar18._0_8_ + 0x18);
            plVar15 = (long *)*plVar14;
            while ((plVar8 = (long *)func_0x057ddb20(plVar15,auVar18._8_8_,0), plVar8 == (long *)0x0
                   || (*plVar8 == *(long *)puVar1))) {
              plVar8 = (long *)func_0x032dd140(plVar14,plVar8,plVar15);
              bVar6 = plVar15 == plVar8;
              plVar15 = plVar8;
              if (bVar6) {
                return plVar8;
              }
            }
            auVar19 = func_0x03281048(plVar8);
            *(undefined8 *)(puVar5 + -0xa0) = 0x4d0f258;
            *(undefined **)(puVar5 + -0x90) = puVar1;
            *(long **)(puVar5 + -0x88) = plVar15;
            *(long **)(puVar5 + -0x80) = plVar14;
            *(long *)(puVar5 + -0x78) = auVar18._8_8_;
            if ((bRam0000000007e1aece & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758);
              bRam0000000007e1aece = 1;
            }
            puVar1 = PTR_DAT_0774e758;
            plVar14 = (long *)(auVar19._0_8_ + 0x18);
            plVar15 = (long *)*plVar14;
            while ((plVar8 = (long *)func_0x057ddd18(plVar15,auVar19._8_8_,0), plVar8 == (long *)0x0
                   || (*plVar8 == *(long *)puVar1))) {
              plVar8 = (long *)func_0x032dd140(plVar14,plVar8,plVar15);
              bVar6 = plVar15 == plVar8;
              plVar15 = plVar8;
              if (bVar6) {
                return plVar8;
              }
            }
            lVar11 = func_0x03281048(plVar8);
            return *(long **)(lVar11 + 0x20);
          }
        }
        plVar8 = (long *)func_0x032dd140(plVar14,lVar7,plVar15);
        bVar6 = plVar15 != plVar8;
        plVar15 = plVar8;
      } while (bVar6);
      return plVar8;
    }
  }
  auVar18 = func_0x03280cac();
  plVar15 = auVar18._0_8_;
  if (auVar18._8_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x04645190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar15 = (long *)(**(code **)(*plVar15 + 0x208))
                                (plVar15,auVar18._8_8_,*(undefined8 *)(*plVar15 + 0x210));
    return plVar15;
  }
  return plVar15;
}

