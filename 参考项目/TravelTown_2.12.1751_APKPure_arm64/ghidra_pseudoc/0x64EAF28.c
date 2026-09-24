/* Ghidra 12.1.2 native pseudocode; RVA 0x64EAF28; MergeEngine.ECS.Systems.State.Board.Event.EventBoardRefillingStateSystem.LoadState; status ok */


/* WARNING: Possible PIC construction at 0x065eb0f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x065eb0fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong MergeEngine_ECS_Systems_State_Board_Event_EventBoardRefillingStateSystem__LoadState
                (long param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  int *piVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 extraout_d0;
  double unaff_d8;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  int *piStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int *piStack_70;
  int iStack_54;
  
  if ((bRam0000000007e27051 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077fbaa0);
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_077bf988);
    func_0x03280a18(PTR_DAT_0774f758);
    func_0x03280a18(PTR_DAT_077fbaa8);
    func_0x03280a18(PTR_DAT_077fbab0);
    func_0x03280a18(PTR_DAT_077fbab8);
    func_0x03280a18(PTR_DAT_077fbac0);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_077fbac8);
    func_0x03280a18(PTR_DAT_077fbad0);
    func_0x03280a18(PTR_DAT_077fbad8);
    func_0x03280a18(PTR_DAT_077fbae0);
    bRam0000000007e27051 = 1;
  }
  puVar9 = PTR_DAT_077fbae0;
  puVar8 = PTR_DAT_077fbab0;
  puVar7 = PTR_DAT_077fbaa8;
  puVar6 = PTR_DAT_077bf988;
  puVar5 = PTR_DAT_077730b8;
  puVar4 = PTR_DAT_0774f758;
  puVar3 = PTR_DAT_0774e598;
  uStack_80 = 0;
  uStack_78 = 0;
  piStack_70 = (int *)0x0;
  iStack_54 = 0;
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (lVar20 = *(long *)(*(long *)(param_1 + 0x40) + 0x20), lVar20 == 0)) {
LAB_065eb18c:
    auVar27 = func_0x03280cac();
    lVar20 = auVar27._0_8_;
    piVar18 = param_3;
    if (auVar27._8_4_ == 1) {
      plVar15 = (long *)func_0x072ce910(lVar20);
      lVar14 = *plVar15;
      func_0x072ce920();
      uVar13 = func_0x051159b0(&uStack_80,*unaff_x22);
      if (lVar14 == 0) {
        return uVar13;
      }
      func_0x03280ca4(lVar14);
      piVar18 = param_3;
    }
    piVar22 = (int *)0x0;
    func_0x051159b0(&uStack_80,*unaff_x22);
    func_0x03365958(lVar20);
    func_0x03280ca4(0);
    uVar23 = 0x65eb210;
    auVar26 = func_0x02f09514();
    lVar14 = auVar26._8_8_;
    param_1 = auVar26._0_8_;
  }
  else {
    lVar20 = *(long *)(lVar20 + 0x20);
    if (lVar20 == 0) {
      if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar13 = func_0x06faa078(*(undefined8 *)PTR_DAT_077fbad8,0);
      return uVar13;
    }
    lVar20 = *(long *)(lVar20 + 0x18);
    if (lVar20 == 0) goto LAB_065eb18c;
    func_0x04145068(&uStack_98,lVar20,*(undefined8 *)PTR_DAT_077fbac0);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    piStack_70 = piStack_88;
    do {
      while( true ) {
        uVar13 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar8);
        piVar18 = piStack_70;
        if ((uVar13 & 1) == 0) {
          uVar13 = func_0x051159b0(&uStack_80,*(undefined8 *)puVar7);
          return uVar13;
        }
        unaff_x22 = (long *)puVar7;
        if (piStack_70 == (int *)0x0) {
          func_0x03280cac();
          goto LAB_065eb18c;
        }
        unaff_x21 = *(long *)(piStack_70 + 4);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        param_3 = &iStack_54;
        uVar13 = func_0x03d22ecc(unaff_x21,1,param_3,*(undefined8 *)puVar6);
        if ((uVar13 & 1) != 0) break;
        param_3 = (int *)0x0;
        uVar23 = func_0x055ea7a0(*(undefined8 *)puVar9,*(undefined8 *)(piVar18 + 4));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x06faa078(uVar23,0);
      }
    } while (iStack_54 != 1);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar14 = func_0x0624cb20(5,0);
    uVar23 = 0x65eb0fc;
    lVar20 = param_1;
    piVar22 = piVar18;
  }
  puVar11 = &stack0xffffffffffffff20;
  piVar19 = piVar18;
  if ((bRam0000000007e27052 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cea48);
    func_0x03280a18(PTR_DAT_0777cfc0);
    bRam0000000007e27052 = 1;
  }
  plVar15 = *(long **)(param_1 + 0x50);
  dVar25 = unaff_d8;
  if (plVar15 != (long *)0x0) {
    lVar21 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077cea48) {
          puVar16 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_065eb2b8;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_077cea48,0);
LAB_065eb2b8:
    piVar19 = (int *)puVar16[1];
    plVar17 = (long *)(*(code *)*puVar16)(plVar15,lVar14);
    if ((piVar18 != (int *)0x0) && (plVar15 = plVar17, plVar17 != (long *)0x0)) {
      lVar21 = *plVar17;
      uVar1 = piVar18[9];
      iVar2 = piVar18[10];
      uVar13 = (ulong)*(ushort *)(lVar21 + 0x12e);
      dVar25 = (double)piVar18[8] / _UNK_017806f0;
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777cfc0) {
            puVar16 = (undefined8 *)(lVar21 + (long)(*piVar19 + 4) * 0x10 + 0x138);
            goto LAB_065eb344;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777cfc0,4);
LAB_065eb344:
      piVar19 = (int *)(ulong)uVar1;
      (*(code *)*puVar16)(dVar25,plVar17,iVar2,piVar19,puVar16[1]);
      auVar26._8_8_ = lVar14;
      auVar26._0_8_ = *(long *)(param_1 + 0x48);
      if (*(long *)(param_1 + 0x48) != 0) {
        piVar19 = *(int **)(piVar18 + 6);
        puVar11 = auStack_a0;
        lVar14 = lVar20;
        piVar18 = piVar22;
        param_1 = unaff_x21;
        goto LAB_065eb388;
      }
    }
  }
  unaff_d8 = dVar25;
  unaff_x22 = plVar15;
  uVar23 = 0x65eb388;
  auVar26 = func_0x03280cac();
LAB_065eb388:
  plVar15 = auVar26._8_8_;
  lVar20 = auVar26._0_8_;
  *(undefined8 *)(puVar11 + -0x30) = uVar23;
  *(long **)(puVar11 + -0x20) = unaff_x22;
  *(long *)(puVar11 + -0x18) = param_1;
  *(int **)(puVar11 + -0x10) = piVar18;
  *(long *)(puVar11 + -8) = lVar14;
  if ((bRam0000000007e27144 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07787220);
    func_0x03280a18(PTR_DAT_07779818);
    bRam0000000007e27144 = 1;
  }
  if (plVar15 != (long *)0x0) {
    lVar14 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar13 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07779818) {
          puVar16 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_065eb424;
        }
        uVar13 = uVar13 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar13 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_07779818,0);
LAB_065eb424:
    plVar17 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
    if (*(long *)(lVar20 + 0x78) != 0) {
      func_0x04fb92ac(*(long *)(lVar20 + 0x78),plVar17,piVar19,*(undefined8 *)PTR_DAT_07787220);
      uVar23 = func_0x06606604(lVar20,plVar17);
      lVar14 = *(long *)(lVar20 + 0x60);
      plVar15 = plVar17;
      if (lVar14 != 0) {
        uVar24 = *(undefined8 *)(puVar11 + -0x30);
        *(double *)(puVar11 + -0x30) = unaff_d8;
        *(undefined8 *)(puVar11 + -0x20) = uVar24;
        *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        if ((bRam0000000007e23873 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077d0230,plVar17,0);
          func_0x03280a18(PTR_DAT_07773770);
          bRam0000000007e23873 = 1;
        }
        lVar20 = *(long *)(lVar14 + 0x28);
        if ((lVar20 == 0) ||
           (uVar13 = func_0x04fe2cfc(lVar20,plVar17,*(undefined8 *)PTR_DAT_077d0230), uVar13 == 0))
        {
          uVar13 = func_0x03280cac();
          return uVar13;
        }
        uVar24 = *(undefined8 *)(puVar11 + -0x20);
        lVar20 = *(long *)PTR_DAT_07773770;
        puVar10 = puVar11 + -0x20;
        *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x30);
        *(undefined8 *)(puVar11 + -0x18) = uVar24;
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        plVar15 = (long *)func_0x03fbac14(*(undefined8 *)
                                           (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20));
        if (plVar15 == (long *)0x0) {
          uVar23 = 0x4321780;
          uVar13 = func_0x03280cac();
          *(undefined8 *)(uVar13 + 0x20) = extraout_d0;
        }
        else {
          uVar12 = (**(code **)(*plVar15 + 0x1b8))
                             (*(undefined8 *)(uVar13 + 0x20),uVar23,plVar15,
                              *(undefined8 *)(*plVar15 + 0x1c0));
          if ((uVar12 & 1) != 0) {
            return uVar12;
          }
          *(undefined8 *)(uVar13 + 0x20) = uVar23;
          lVar20 = *(long *)(puVar11 + -8);
          uVar23 = *(undefined8 *)(puVar11 + -0x18);
          puVar10 = puVar11;
        }
        *(undefined8 *)(puVar10 + -0x10) = uVar23;
        *(long *)(puVar10 + -8) = lVar20;
        lVar20 = *(long *)(uVar13 + 0x10);
        uVar12 = uVar13;
        if (lVar20 != 0) {
          uVar12 = (**(code **)(lVar20 + 0x18))
                             (*(undefined8 *)(uVar13 + 0x20),*(undefined8 *)(lVar20 + 0x40),
                              *(undefined8 *)(lVar20 + 0x28));
        }
        lVar20 = *(long *)(uVar13 + 0x18);
        if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0e47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar13 = (**(code **)(lVar20 + 0x18))
                             (*(undefined8 *)(lVar20 + 0x40),*(undefined8 *)(lVar20 + 0x28));
          return uVar13;
        }
        return uVar12;
      }
    }
  }
  uVar13 = func_0x03280cac();
  puVar3 = PTR_DAT_077fbae8;
  *(undefined8 *)(puVar11 + -0x50) = 0x65eb488;
  *(long **)(puVar11 + -0x48) = plVar15;
  *(int **)(puVar11 + -0x40) = piVar19;
  *(long *)(puVar11 + -0x38) = lVar20;
  if ((bRam0000000007e27053 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077fbae8);
    bRam0000000007e27053 = 1;
  }
  uVar23 = *(undefined8 *)puVar3;
  return uVar13;
}

