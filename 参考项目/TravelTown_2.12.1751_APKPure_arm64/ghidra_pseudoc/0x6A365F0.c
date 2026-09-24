/* Ghidra 12.1.2 native pseudocode; RVA 0x6A365F0; Merger.MergeBoard.View.MergeBoardCombinationVerificationView.OnDestroy; status ok */


/* WARNING: Possible PIC construction at 0x072af730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072af68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072af814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072af87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072afba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072afc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072afd48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072afdb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072afe50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072aff40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a4bd54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a4be18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b36754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b3681c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b36844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b36820) */
/* WARNING: Removing unreachable block (ram,0x06b36824) */
/* WARNING: Removing unreachable block (ram,0x06a4be1c) */
/* WARNING: Removing unreachable block (ram,0x06a4bd58) */
/* WARNING: Removing unreachable block (ram,0x06a4bd60) */
/* WARNING: Removing unreachable block (ram,0x06a4bd70) */
/* WARNING: Removing unreachable block (ram,0x06a4bd78) */
/* WARNING: Removing unreachable block (ram,0x06a4bda0) */
/* WARNING: Removing unreachable block (ram,0x06a4bd84) */
/* WARNING: Removing unreachable block (ram,0x06a4bd90) */
/* WARNING: Removing unreachable block (ram,0x06a4bdb0) */
/* WARNING: Removing unreachable block (ram,0x072aff44) */
/* WARNING: Removing unreachable block (ram,0x072b2338) */
/* WARNING: Removing unreachable block (ram,0x072b2388) */
/* WARNING: Removing unreachable block (ram,0x072b23c0) */
/* WARNING: Removing unreachable block (ram,0x072b23f0) */
/* WARNING: Removing unreachable block (ram,0x072b23f4) */
/* WARNING: Removing unreachable block (ram,0x072b2414) */
/* WARNING: Removing unreachable block (ram,0x072b2428) */
/* WARNING: Removing unreachable block (ram,0x072b242c) */
/* WARNING: Removing unreachable block (ram,0x072b240c) */
/* WARNING: Removing unreachable block (ram,0x072b2438) */
/* WARNING: Removing unreachable block (ram,0x072b2490) */
/* WARNING: Removing unreachable block (ram,0x072b2498) */
/* WARNING: Removing unreachable block (ram,0x072b24cc) */
/* WARNING: Removing unreachable block (ram,0x072b2504) */
/* WARNING: Removing unreachable block (ram,0x072b2518) */
/* WARNING: Removing unreachable block (ram,0x072b2524) */
/* WARNING: Removing unreachable block (ram,0x072b252c) */
/* WARNING: Removing unreachable block (ram,0x072b249c) */
/* WARNING: Removing unreachable block (ram,0x072b24ac) */
/* WARNING: Removing unreachable block (ram,0x072afe54) */
/* WARNING: Removing unreachable block (ram,0x072afdb4) */
/* WARNING: Removing unreachable block (ram,0x072afd4c) */
/* WARNING: Removing unreachable block (ram,0x072afc68) */
/* WARNING: Removing unreachable block (ram,0x072afba4) */
/* WARNING: Removing unreachable block (ram,0x072af880) */
/* WARNING: Removing unreachable block (ram,0x072af818) */
/* WARNING: Removing unreachable block (ram,0x072af690) */
/* WARNING: Removing unreachable block (ram,0x072af698) */
/* WARNING: Removing unreachable block (ram,0x072af6a0) */
/* WARNING: Removing unreachable block (ram,0x072af6c8) */
/* WARNING: Removing unreachable block (ram,0x072af6a4) */
/* WARNING: Removing unreachable block (ram,0x072af6b4) */
/* WARNING: Removing unreachable block (ram,0x072af734) */
/* WARNING: Removing unreachable block (ram,0x072af648) */
/* WARNING: Removing unreachable block (ram,0x06b36848) */
/* WARNING: Removing unreachable block (ram,0x06b36850) */
/* WARNING: Removing unreachable block (ram,0x06b3686c) */
/* WARNING: Removing unreachable block (ram,0x06b36884) */
/* WARNING: Removing unreachable block (ram,0x06b36890) */
/* WARNING: Removing unreachable block (ram,0x06b368a0) */
/* WARNING: Removing unreachable block (ram,0x06b368ac) */
/* WARNING: Removing unreachable block (ram,0x06b368bc) */
/* WARNING: Removing unreachable block (ram,0x06b368c8) */
/* WARNING: Removing unreachable block (ram,0x06b36994) */
/* WARNING: Removing unreachable block (ram,0x06b36998) */
/* WARNING: Removing unreachable block (ram,0x06b369d4) */
/* WARNING: Removing unreachable block (ram,0x06b3699c) */

long * Merger_MergeBoard_View_MergeBoardCombinationVerificationView__OnDestroy
                 (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long extraout_x1;
  undefined8 extraout_x1_00;
  long extraout_x1_01;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined8 in_stack_ffffffffffffff88;
  
  puVar4 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e2a4cf & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809120);
    func_0x03280a18(PTR_DAT_0782f5a0);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0782f5a8);
    bRam0000000007e2a4cf = 1;
  }
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar13 = 0;
  uVar10 = func_0x06fdeb74(uVar15,0);
  if ((uVar10 & 1) != 0) {
    lVar16 = *(long *)(param_1 + 0x38);
    uVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07809120);
    param_4 = 0;
    lVar13 = *(long *)PTR_DAT_0782f5a0;
    func_0x054221d4(uVar15,param_1);
    if (lVar16 == 0) {
      func_0x03280cac();
      if ((bRam0000000007e2a4d0 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0782f5b0);
        func_0x03280a18(PTR_DAT_0782f5b8);
        bRam0000000007e2a4d0 = 1;
      }
      if (extraout_x1 == 0) {
        func_0x03280cac();
        uVar15 = extraout_x1_00;
      }
      else {
        plVar18 = (long *)func_0x03ec47bc(extraout_x1,*(undefined8 *)PTR_DAT_0782f5b0);
        if ((((ulong)plVar18 & 1) == 0) ||
           (plVar18 = (long *)func_0x03ec5020(extraout_x1,&stack0xffffffffffffffb8,
                                              *(undefined8 *)PTR_DAT_0782f5b8),
           ((ulong)plVar18 & 1) == 0)) {
          return plVar18;
        }
        uVar15 = 0;
      }
      puVar4 = PTR_DAT_0782f5c0;
      if ((bRam0000000007e2a4d1 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077f1510,uVar15);
        func_0x03280a18(PTR_DAT_0774e758);
        func_0x03280a18(PTR_DAT_0776fc60);
        func_0x03280a18(PTR_DAT_07809290);
        func_0x03280a18(PTR_DAT_0782f5c8);
        func_0x03280a18(PTR_DAT_0782f5d0);
        func_0x03280a18(PTR_DAT_0782f5c0);
        func_0x03280a18(PTR_DAT_0782f5d8);
        bRam0000000007e2a4d1 = 1;
      }
      plVar18 = (long *)func_0x03280ca0(*(undefined8 *)puVar4);
      return plVar18;
    }
    func_0x06b342a4(lVar16,uVar15);
  }
  if (param_1 == 0) {
    plVar18 = (long *)func_0x03280cac(0,*(undefined8 *)PTR_DAT_0782f5a8);
    puVar4 = PTR_DAT_0774e4e0;
    if ((bRam0000000007e2fb28 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e4e0,0);
      bRam0000000007e2fb28 = 1;
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    return plVar18;
  }
  func_0x06fe0f84(param_1,0);
  if (*(long *)(param_1 + 0x28) == 0) {
    return (long *)0x0;
  }
  func_0x069b2e98(*(long *)(param_1 + 0x28),0);
  lVar16 = *(long *)(param_1 + 0x28);
  if (lVar16 == 0) {
    return (long *)0x0;
  }
  if ((bRam0000000007e29c51 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07828a68,0);
    func_0x03280a18(PTR_DAT_07828a70);
    func_0x03280a18(PTR_DAT_07828a78);
    func_0x03280a18(PTR_DAT_07828a80);
    func_0x03280a18(PTR_DAT_07828a88);
    func_0x03280a18(PTR_DAT_077dca40);
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e29c51 = 1;
  }
  puVar8 = PTR_DAT_07828a80;
  puVar7 = PTR_DAT_07828a70;
  puVar6 = PTR_DAT_07828a68;
  puVar5 = PTR_DAT_077dca40;
  puVar4 = PTR_DAT_0774e4e0;
  if (*(long *)(lVar16 + 0x60) != 0) {
    func_0x053c09a8(&stack0xffffffffffffff78,*(long *)(lVar16 + 0x60),
                    *(undefined8 *)PTR_DAT_07828a88);
    while( true ) {
      do {
        uVar10 = func_0x05115444(&stack0xffffffffffffff90,*(undefined8 *)puVar7);
        unaff_x23 = (undefined8 *)puVar8;
        unaff_x24 = (undefined8 *)puVar6;
        if ((uVar10 & 1) == 0) {
          func_0x05115440(&stack0xffffffffffffff90,*(undefined8 *)puVar6);
          goto LAB_06a4bae4;
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar13 = 0;
        uVar10 = func_0x06fdeb74(in_stack_ffffffffffffff88,0);
      } while ((uVar10 & 1) == 0);
      plVar18 = *(long **)(lVar16 + 0x40);
      if (plVar18 == (long *)0x0) break;
      lVar19 = *(long *)puVar5;
      lVar13 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)(lVar19 + 0x20)) {
            lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_06a4bab0;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      lVar13 = func_0x03256b10(plVar18);
LAB_06a4bab0:
      param_4 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar19);
      lVar13 = 0;
      (**(code **)(param_4 + 8))(plVar18,in_stack_ffffffffffffff88);
    }
    func_0x03280cac();
  }
  while( true ) {
    auVar20 = func_0x03280cac();
    if (auVar20._8_4_ != 1) break;
    plVar18 = (long *)func_0x072ce910(auVar20._0_8_);
    lVar19 = *plVar18;
    func_0x072ce920();
    func_0x05115440(&stack0xffffffffffffff90,*unaff_x24);
    if (lVar19 != 0) {
      func_0x03280ca4(lVar19);
      break;
    }
LAB_06a4bae4:
    if (*(long *)(lVar16 + 0x60) != 0) {
      plVar18 = (long *)func_0x053c04d4(*(long *)(lVar16 + 0x60),*unaff_x23);
      return plVar18;
    }
  }
  func_0x05115440(&stack0xffffffffffffff90,*unaff_x24);
  func_0x03365958(auVar20._0_8_);
  func_0x03280ca4(0);
  auVar21 = func_0x02f09514();
  if ((bRam0000000007e29c52 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07828a90);
    func_0x03280a18(PTR_DAT_077dca40);
    bRam0000000007e29c52 = 1;
  }
  lVar16 = *(long *)(auVar21._0_8_ + 0x60);
  if (lVar16 != 0) {
    lVar13 = *(long *)PTR_DAT_07828a90;
    func_0x053c0700(lVar16,auVar21._8_8_);
    plVar18 = *(long **)(auVar21._0_8_ + 0x40);
    if (plVar18 != (long *)0x0) {
      lVar13 = *plVar18;
      lVar16 = *(long *)PTR_DAT_077dca40;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)(lVar16 + 0x20)) {
            lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_06a4bc48;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      lVar13 = func_0x03256b10(plVar18);
LAB_06a4bc48:
      lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x06a4bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar18 = (long *)(**(code **)(lVar13 + 8))(plVar18,auVar21._8_8_,0,lVar13);
      return plVar18;
    }
  }
  lVar16 = func_0x03280cac();
  puVar4 = PTR_DAT_07779af0;
  if (*(long *)(lVar16 + 0x50) == 0) {
    auVar21 = func_0x03280cac();
    if ((bRam0000000007e29c53 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776f8c8);
      bRam0000000007e29c53 = 1;
    }
    plVar18 = *(long **)(auVar21._0_8_ + 0x48);
    if (plVar18 == (long *)0x0) {
      func_0x03280cac();
      puVar4 = PTR_DAT_07828a50;
      if ((bRam0000000007e29c55 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07828a50);
        bRam0000000007e29c55 = 1;
      }
      plVar18 = (long *)func_0x03280ca0(*(undefined8 *)puVar4);
      return plVar18;
    }
    lVar16 = *plVar18;
    uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0776f8c8) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
          goto SUB_06a4af70;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0776f8c8,0);
SUB_06a4af70:
    (*(code *)*puVar9)(plVar18,auVar21._8_8_,lVar13,puVar9[1]);
    if ((bRam0000000007e29c46 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776f8d8);
      bRam0000000007e29c46 = 1;
    }
    plVar18 = *(long **)(auVar21._0_8_ + 0x38);
    if (plVar18 != (long *)0x0) {
      lVar13 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0776f8d8) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 9) * 0x10 + 0x138);
            goto LAB_06a4b008;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0776f8d8,9);
LAB_06a4b008:
                    /* WARNING: Could not recover jumptable at 0x06a4b024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar18 = (long *)(*(code *)*puVar9)(plVar18,param_4,param_5,puVar9[1]);
      return plVar18;
    }
    lVar13 = func_0x03280cac();
    if ((bRam0000000007e29c47 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776f8d8);
      bRam0000000007e29c47 = 1;
    }
    plVar18 = *(long **)(lVar13 + 0x38);
    if (plVar18 != (long *)0x0) {
      lVar13 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0776f8d8) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 10) * 0x10 + 0x138);
            goto LAB_06a4b0b8;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0776f8d8,10);
LAB_06a4b0b8:
                    /* WARNING: Could not recover jumptable at 0x06a4b0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
      return plVar18;
    }
    auVar21 = func_0x03280cac();
    if ((bRam0000000007e29c48 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776f8d8);
      bRam0000000007e29c48 = 1;
    }
    plVar18 = *(long **)(auVar21._0_8_ + 0x38);
    if (plVar18 != (long *)0x0) {
      lVar13 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0776f8d8) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0x10) * 0x10 + 0x138);
            goto LAB_06a4b160;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0776f8d8,0x10);
LAB_06a4b160:
                    /* WARNING: Could not recover jumptable at 0x06a4b174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar18 = (long *)(*(code *)*puVar9)(plVar18,auVar21._8_8_,puVar9[1]);
      return plVar18;
    }
    lVar13 = func_0x03280cac();
    if ((bRam0000000007e29c49 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776f8d8);
      bRam0000000007e29c49 = 1;
    }
    plVar18 = *(long **)(lVar13 + 0x38);
    if (plVar18 != (long *)0x0) {
      lVar13 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0776f8d8) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0x11) * 0x10 + 0x138);
            goto LAB_06a4b208;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0776f8d8,0x11);
LAB_06a4b208:
                    /* WARNING: Could not recover jumptable at 0x06a4b21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar18 = (long *)(*(code *)*puVar9)(plVar18,1,puVar9[1]);
      return plVar18;
    }
    lVar13 = func_0x03280cac();
    if ((bRam0000000007e29c4a & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776f8d8);
      bRam0000000007e29c4a = 1;
    }
    plVar18 = *(long **)(lVar13 + 0x38);
    if (plVar18 != (long *)0x0) {
      lVar13 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0776f8d8) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0x11) * 0x10 + 0x138);
            goto LAB_06a4b2b0;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0776f8d8,0x11);
LAB_06a4b2b0:
                    /* WARNING: Could not recover jumptable at 0x06a4b2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar18 = (long *)(*(code *)*puVar9)(plVar18,0,puVar9[1]);
      return plVar18;
    }
    auVar21 = func_0x03280cac();
    if ((bRam0000000007e29c4b & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777ceb0);
      bRam0000000007e29c4b = 1;
    }
    plVar18 = *(long **)(auVar21._0_8_ + 0x30);
    if (plVar18 != (long *)0x0) {
      lVar13 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777ceb0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_06a4b35c;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777ceb0,2);
LAB_06a4b35c:
                    /* WARNING: Could not recover jumptable at 0x06a4b370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar18 = (long *)(*(code *)*puVar9)(plVar18,auVar21._8_8_ & 0xffffffff,puVar9[1]);
      return plVar18;
    }
    auVar21 = func_0x03280cac();
    if ((bRam0000000007e29c4c & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777ceb0);
      bRam0000000007e29c4c = 1;
    }
    plVar18 = *(long **)(auVar21._0_8_ + 0x30);
    if (plVar18 == (long *)0x0) {
      plVar18 = (long *)func_0x03280cac();
      return plVar18;
    }
    lVar13 = *plVar18;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777ceb0) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_06a4b408;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777ceb0,1);
LAB_06a4b408:
                    /* WARNING: Could not recover jumptable at 0x06a4b41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar18 = (long *)(*(code *)*puVar9)(plVar18,auVar21._8_8_ & 0xffffffff,puVar9[1]);
    return plVar18;
  }
  lVar19 = 0;
  lVar16 = lVar13;
  if ((bRam0000000007e34372 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    bRam0000000007e34372 = 1;
  }
  lVar11 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x0728bb8c(lVar11,0);
  if (lVar11 != 0) {
    plVar18 = (long *)(lVar11 + 0x20);
    *plVar18 = lVar13;
    goto SUB_032809c4;
  }
  func_0x03280cac();
  puVar4 = PTR_DAT_07779af0;
  if ((bRam0000000007e34373 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    func_0x03280a18(PTR_DAT_0776c0d0);
    func_0x03280a18(PTR_DAT_07779af8);
    bRam0000000007e34373 = 1;
  }
  lVar13 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x0728bb8c(lVar13,0);
  if (lVar13 != 0) {
    plVar18 = (long *)(lVar13 + 0x20);
    *plVar18 = lVar16;
    goto SUB_032809c4;
  }
  auVar21 = func_0x03280cac();
  puVar4 = PTR_DAT_0785e990;
  if ((bRam0000000007e3437c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785f5e8);
    func_0x03280a18(PTR_DAT_0785f5f0);
    func_0x03280a18(PTR_DAT_0785f5f8);
    func_0x03280a18(PTR_DAT_0785f600);
    func_0x03280a18(PTR_DAT_0785e990);
    bRam0000000007e3437c = 1;
  }
  puVar5 = PTR_DAT_0785f600;
  func_0x072a73cc(auVar21._0_8_);
  func_0x072cc458(auVar21._8_8_,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar6 = PTR_DAT_0785f5f8;
  lVar13 = func_0x03f45014(*(undefined8 *)puVar5);
  func_0x072ccc48(auVar21._8_8_,lVar13,0);
  puVar5 = PTR_DAT_0785f5f0;
  if (lVar13 == 0) goto LAB_072af9f4;
  if (0 < *(int *)(lVar13 + 0x18)) {
    iVar17 = 0;
    do {
      uVar15 = func_0x0414419c(lVar13,iVar17,*(undefined8 *)puVar5);
      func_0x0729fe1c(auVar21._0_8_,uVar15);
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(lVar13 + 0x18));
  }
  lVar16 = 0;
  while( true ) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar18 = (long *)func_0x03f44af8(lVar13,*(undefined8 *)puVar6);
    if (lVar16 == 0) {
      return plVar18;
    }
    func_0x03280ca4(lVar16);
LAB_072af9f4:
    auVar20 = func_0x03280cac();
    if (auVar20._8_4_ != 1) break;
    plVar18 = (long *)func_0x072ce910(auVar20._0_8_);
    lVar16 = *plVar18;
    func_0x072ce920();
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x03f44af8(lVar13,*(undefined8 *)puVar6);
  func_0x03365958(auVar20._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  puVar4 = PTR_DAT_07779af0;
  if ((bRam0000000007e34374 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    bRam0000000007e34374 = 1;
  }
  lVar13 = *(long *)puVar4;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar13 = *(long *)puVar4;
  }
  lVar13 = **(long **)(lVar13 + 0xb8);
  if ((bRam0000000007e34377 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774fc08);
    func_0x03280a18(PTR_DAT_0774e5a0);
    func_0x03280a18(PTR_DAT_0785f5b8);
    bRam0000000007e34377 = 1;
  }
  plVar12 = (long *)func_0x06fd9fc4(extraout_x1_01,0);
  if ((plVar12 == (long *)0x0) || (*plVar12 == *(long *)PTR_DAT_0774fc08)) {
    plVar18 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
    if (plVar18 == (long *)0x0) {
      func_0x03280cac();
LAB_072afbe8:
      func_0x03280cb4();
      goto LAB_072afbec;
    }
    if ((extraout_x1_01 == 0) ||
       (lVar16 = func_0x03280b90(extraout_x1_01,*(undefined8 *)(*plVar18 + 0x40)), lVar16 != 0)) {
      if ((int)plVar18[3] != 0) {
        plVar18 = plVar18 + 4;
        *plVar18 = extraout_x1_01;
        goto SUB_032809c4;
      }
      goto LAB_072afbe8;
    }
  }
  else {
LAB_072afbec:
    func_0x03281048(plVar12);
  }
  uVar15 = func_0x03280cd0();
  func_0x03280b7c(uVar15,0);
  puVar4 = PTR_DAT_07779af0;
  lVar16 = lVar13;
  if ((bRam0000000007e34375 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    bRam0000000007e34375 = 1;
  }
  lVar11 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x0728bb8c(lVar11,0);
  if (lVar11 == 0) {
    func_0x03280cac();
    puVar4 = PTR_DAT_07779af0;
    lVar13 = lVar16;
    if ((bRam0000000007e34376 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07779af0);
      func_0x03280a18(PTR_DAT_0776c0d0);
      func_0x03280a18(PTR_DAT_07779af8);
      bRam0000000007e34376 = 1;
    }
    lVar11 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x0728bb8c(lVar11,0);
    if (lVar11 == 0) {
      func_0x03280cac();
      puVar4 = PTR_DAT_07779af0;
      lVar16 = lVar19;
      if ((bRam0000000007e34378 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07779af0);
        bRam0000000007e34378 = 1;
      }
      lVar11 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x0728bb8c(lVar11,0);
      if (lVar11 == 0) {
        auVar21 = func_0x03280cac();
        uVar15 = func_0x0729ea04(lVar16);
        puVar4 = PTR_DAT_0777c9d8;
        if ((bRam0000000007e34399 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c9d8,auVar21._8_8_,lVar13,uVar15,param_5);
          bRam0000000007e34399 = 1;
        }
        lVar13 = func_0x03280ca0(*(undefined8 *)puVar4);
        func_0x0729d178(lVar13,auVar21._0_8_,auVar21._8_8_);
        plVar18 = (long *)(lVar13 + 0x18);
        *plVar18 = 0;
      }
      else {
        plVar18 = (long *)(lVar11 + 0x20);
        *plVar18 = lVar19;
      }
    }
    else {
      plVar18 = (long *)(lVar11 + 0x20);
      *plVar18 = lVar16;
    }
  }
  else {
    plVar18 = (long *)(lVar11 + 0x20);
    *plVar18 = lVar13;
  }
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar18 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return plVar18;
}

