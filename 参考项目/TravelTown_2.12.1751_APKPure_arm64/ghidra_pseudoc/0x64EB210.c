/* Ghidra 12.1.2 native pseudocode; RVA 0x64EB210; MergeEngine.ECS.Systems.State.Board.Event.EventBoardRefillingStateSystem.UpdateResourceRefill; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong MergeEngine_ECS_Systems_State_Board_Event_EventBoardRefillingStateSystem__UpdateResourceRefill
                (long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar13;
  undefined8 unaff_x30;
  undefined8 uVar14;
  undefined8 extraout_d0;
  undefined8 uVar15;
  double unaff_d8;
  double dVar16;
  undefined1 auVar17 [16];
  
  puVar5 = &stack0xffffffffffffffc0;
  uVar10 = param_3;
  if ((bRam0000000007e27052 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cea48);
    func_0x03280a18(PTR_DAT_0777cfc0);
    bRam0000000007e27052 = 1;
  }
  plVar13 = *(long **)(param_1 + 0x50);
  dVar16 = unaff_d8;
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077cea48) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_065eb2b8;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077cea48,0);
LAB_065eb2b8:
    uVar10 = puVar6[1];
    plVar7 = (long *)(*(code *)*puVar6)(plVar13,param_2);
    if ((param_3 != 0) && (plVar13 = plVar7, plVar7 != (long *)0x0)) {
      lVar8 = *plVar7;
      uVar1 = *(uint *)(param_3 + 0x24);
      uVar2 = *(undefined4 *)(param_3 + 0x28);
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      dVar16 = (double)*(int *)(param_3 + 0x20) / _UNK_017806f0;
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777cfc0) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_065eb344;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777cfc0,4);
LAB_065eb344:
      uVar10 = (ulong)uVar1;
      (*(code *)*puVar6)(dVar16,plVar7,uVar2,uVar10,puVar6[1]);
      lVar8 = *(long *)(param_1 + 0x48);
      if (lVar8 != 0) {
        uVar10 = *(ulong *)(param_3 + 0x18);
        puVar5 = (undefined1 *)register0x00000008;
        plVar13 = param_2;
        param_2 = unaff_x19;
        param_3 = unaff_x20;
        param_1 = unaff_x21;
        goto LAB_065eb388;
      }
    }
  }
  unaff_d8 = dVar16;
  unaff_x22 = plVar13;
  unaff_x30 = 0x65eb388;
  auVar17 = func_0x03280cac();
  plVar13 = auVar17._8_8_;
  lVar8 = auVar17._0_8_;
LAB_065eb388:
  *(undefined8 *)(puVar5 + -0x30) = unaff_x30;
  *(long **)(puVar5 + -0x20) = unaff_x22;
  *(long *)(puVar5 + -0x18) = param_1;
  *(ulong *)(puVar5 + -0x10) = param_3;
  *(long **)(puVar5 + -8) = param_2;
  if ((bRam0000000007e27144 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07787220);
    func_0x03280a18(PTR_DAT_07779818);
    bRam0000000007e27144 = 1;
  }
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07779818) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_065eb424;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07779818,0);
LAB_065eb424:
    plVar7 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
    if (*(long *)(lVar8 + 0x78) != 0) {
      func_0x04fb92ac(*(long *)(lVar8 + 0x78),plVar7,uVar10,*(undefined8 *)PTR_DAT_07787220);
      uVar15 = func_0x06606604(lVar8,plVar7);
      lVar9 = *(long *)(lVar8 + 0x60);
      plVar13 = plVar7;
      if (lVar9 != 0) {
        uVar14 = *(undefined8 *)(puVar5 + -0x30);
        *(double *)(puVar5 + -0x30) = unaff_d8;
        *(undefined8 *)(puVar5 + -0x20) = uVar14;
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        if ((bRam0000000007e23873 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077d0230,plVar7,0);
          func_0x03280a18(PTR_DAT_07773770);
          bRam0000000007e23873 = 1;
        }
        lVar8 = *(long *)(lVar9 + 0x28);
        if ((lVar8 == 0) ||
           (uVar10 = func_0x04fe2cfc(lVar8,plVar7,*(undefined8 *)PTR_DAT_077d0230), uVar10 == 0)) {
          uVar10 = func_0x03280cac();
          return uVar10;
        }
        uVar14 = *(undefined8 *)(puVar5 + -0x20);
        lVar8 = *(long *)PTR_DAT_07773770;
        puVar4 = puVar5 + -0x20;
        *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x30);
        *(undefined8 *)(puVar5 + -0x18) = uVar14;
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        plVar13 = (long *)func_0x03fbac14(*(undefined8 *)
                                           (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20));
        if (plVar13 == (long *)0x0) {
          uVar15 = 0x4321780;
          uVar10 = func_0x03280cac();
          *(undefined8 *)(uVar10 + 0x20) = extraout_d0;
        }
        else {
          uVar11 = (**(code **)(*plVar13 + 0x1b8))
                             (*(undefined8 *)(uVar10 + 0x20),uVar15,plVar13,
                              *(undefined8 *)(*plVar13 + 0x1c0));
          if ((uVar11 & 1) != 0) {
            return uVar11;
          }
          *(undefined8 *)(uVar10 + 0x20) = uVar15;
          lVar8 = *(long *)(puVar5 + -8);
          uVar15 = *(undefined8 *)(puVar5 + -0x18);
          puVar4 = puVar5;
        }
        *(undefined8 *)(puVar4 + -0x10) = uVar15;
        *(long *)(puVar4 + -8) = lVar8;
        lVar8 = *(long *)(uVar10 + 0x10);
        uVar11 = uVar10;
        if (lVar8 != 0) {
          uVar11 = (**(code **)(lVar8 + 0x18))
                             (*(undefined8 *)(uVar10 + 0x20),*(undefined8 *)(lVar8 + 0x40),
                              *(undefined8 *)(lVar8 + 0x28));
        }
        lVar8 = *(long *)(uVar10 + 0x18);
        if (lVar8 == 0) {
          return uVar11;
        }
                    /* WARNING: Could not recover jumptable at 0x04d0e47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(lVar8 + 0x18))
                           (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
        return uVar10;
      }
    }
  }
  uVar11 = func_0x03280cac();
  puVar3 = PTR_DAT_077fbae8;
  *(undefined8 *)(puVar5 + -0x50) = 0x65eb488;
  *(long **)(puVar5 + -0x48) = plVar13;
  *(ulong *)(puVar5 + -0x40) = uVar10;
  *(long *)(puVar5 + -0x38) = lVar8;
  if ((bRam0000000007e27053 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077fbae8);
    bRam0000000007e27053 = 1;
  }
  uVar15 = *(undefined8 *)puVar3;
  return uVar11;
}

