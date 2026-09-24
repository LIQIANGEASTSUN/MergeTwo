/* Ghidra 12.1.2 native pseudocode; RVA 0x666CABC; MergeEngine.ECS.Systems.Board.GenericTokensStateSystem.UpdateRefillData; status ok */


ulong MergeEngine_ECS_Systems_Board_GenericTokensStateSystem__UpdateRefillData
                (long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  undefined8 unaff_x30;
  undefined8 extraout_d0;
  
  if ((bRam0000000007e280fa & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cea48);
    func_0x03280a18(PTR_DAT_0777cfc0);
    bRam0000000007e280fa = 1;
  }
  plVar14 = *(long **)(param_1 + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077cea48) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0676cb64;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077cea48,0);
LAB_0676cb64:
    plVar14 = (long *)(*(code *)*puVar8)(plVar14,param_2,puVar8[1]);
    if (plVar14 != (long *)0x0) {
      if (param_3 == 0) goto LAB_0676cc30;
      lVar11 = *plVar14;
      iVar3 = *(int *)(param_3 + 0x20);
      uVar1 = *(undefined4 *)(param_3 + 0x18);
      uVar2 = *(undefined4 *)(param_3 + 0x1c);
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777cfc0) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
            goto LAB_0676cbe4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777cfc0,4);
LAB_0676cbe4:
      (*(code *)*puVar8)((double)iVar3,plVar14,uVar1,uVar2,puVar8[1]);
    }
    lVar11 = func_0x0676c728(param_1);
    if ((param_3 != 0) && (lVar11 != 0)) {
      uVar9 = *(undefined8 *)(param_3 + 0x10);
      if ((bRam0000000007e27144 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07787220,param_2,uVar9,0);
        func_0x03280a18(PTR_DAT_07779818);
        bRam0000000007e27144 = 1;
      }
      if (param_2 != (long *)0x0) {
        lVar10 = *param_2;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779818) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_065eb424;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779818,0);
LAB_065eb424:
        uVar7 = (*(code *)*puVar8)(param_2,puVar8[1]);
        if (*(long *)(lVar11 + 0x78) != 0) {
          func_0x04fb92ac(*(long *)(lVar11 + 0x78),uVar7,uVar9,*(undefined8 *)PTR_DAT_07787220);
          uVar9 = func_0x06606604(lVar11,uVar7);
          lVar11 = *(long *)(lVar11 + 0x60);
          if (lVar11 != 0) {
            if ((bRam0000000007e23873 & 1) == 0) {
              func_0x03280a18(PTR_DAT_077d0230,uVar7,0);
              func_0x03280a18(PTR_DAT_07773770);
              bRam0000000007e23873 = 1;
            }
            lVar11 = *(long *)(lVar11 + 0x28);
            if ((lVar11 == 0) ||
               (uVar12 = func_0x04fe2cfc(lVar11,uVar7,*(undefined8 *)PTR_DAT_077d0230), uVar12 == 0)
               ) {
              uVar12 = func_0x03280cac();
              return uVar12;
            }
            lVar11 = *(long *)PTR_DAT_07773770;
            puVar5 = &stack0xffffffffffffffe0;
            plVar14 = (long *)func_0x03fbac14(*(undefined8 *)
                                               (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x20));
            if (plVar14 == (long *)0x0) {
              unaff_x30 = 0x4321780;
              uVar12 = func_0x03280cac();
              *(undefined8 *)(uVar12 + 0x20) = extraout_d0;
            }
            else {
              uVar6 = (**(code **)(*plVar14 + 0x1b8))
                                (*(undefined8 *)(uVar12 + 0x20),uVar9,plVar14,
                                 *(undefined8 *)(*plVar14 + 0x1c0));
              if ((uVar6 & 1) != 0) {
                return uVar6;
              }
              *(undefined8 *)(uVar12 + 0x20) = uVar9;
              puVar5 = (undefined1 *)register0x00000008;
              lVar11 = unaff_x19;
            }
            *(undefined8 *)(puVar5 + -0x10) = unaff_x30;
            *(long *)(puVar5 + -8) = lVar11;
            lVar11 = *(long *)(uVar12 + 0x10);
            uVar6 = uVar12;
            if (lVar11 != 0) {
              uVar6 = (**(code **)(lVar11 + 0x18))
                                (*(undefined8 *)(uVar12 + 0x20),*(undefined8 *)(lVar11 + 0x40),
                                 *(undefined8 *)(lVar11 + 0x28));
            }
            lVar11 = *(long *)(uVar12 + 0x18);
            if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0e47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar12 = (**(code **)(lVar11 + 0x18))
                                 (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
              return uVar12;
            }
            return uVar6;
          }
        }
      }
      uVar12 = func_0x03280cac();
      puVar4 = PTR_DAT_077fbae8;
      if ((bRam0000000007e27053 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077fbae8);
        bRam0000000007e27053 = 1;
      }
      uVar9 = *(undefined8 *)puVar4;
      return uVar12;
    }
  }
LAB_0676cc30:
  uVar12 = func_0x03280cac();
  puVar4 = PTR_DAT_07808030;
  if ((bRam0000000007e280fb & 1) == 0) {
    func_0x03280a18(PTR_DAT_07808030);
    bRam0000000007e280fb = 1;
  }
  uVar9 = *(undefined8 *)puVar4;
  return uVar12;
}

