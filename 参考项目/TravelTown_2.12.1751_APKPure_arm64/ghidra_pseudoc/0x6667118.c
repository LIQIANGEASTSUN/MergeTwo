/* Ghidra 12.1.2 native pseudocode; RVA 0x6667118; MergeEngine.ECS.Systems.Board.ResourcesRefillingStateSystem.UpdateResourceRefill; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong MergeEngine_ECS_Systems_Board_ResourcesRefillingStateSystem__UpdateResourceRefill
                (long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  undefined8 unaff_x30;
  undefined8 extraout_d0;
  double dVar14;
  
  if ((bRam0000000007e280c2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cea48);
    func_0x03280a18(PTR_DAT_0777cfc0);
    bRam0000000007e280c2 = 1;
  }
  plVar13 = *(long **)(param_1 + 0x48);
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077cea48) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_067671c0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077cea48,0);
LAB_067671c0:
    plVar13 = (long *)(*(code *)*puVar7)(plVar13,param_2,puVar7[1]);
    if ((param_3 != 0) && (plVar13 != (long *)0x0)) {
      lVar10 = *plVar13;
      uVar1 = *(undefined4 *)(param_3 + 0x24);
      uVar2 = *(undefined4 *)(param_3 + 0x28);
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      dVar14 = (double)*(int *)(param_3 + 0x20) / _UNK_017806f0;
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777cfc0) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_0676724c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777cfc0,4);
LAB_0676724c:
      (*(code *)*puVar7)(dVar14,plVar13,uVar2,uVar1,puVar7[1]);
      lVar10 = *(long *)(param_1 + 0x50);
      if (lVar10 != 0) {
        uVar8 = *(undefined8 *)(param_3 + 0x18);
        if ((bRam0000000007e27144 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07787220,param_2,uVar8,0);
          func_0x03280a18(PTR_DAT_07779818);
          bRam0000000007e27144 = 1;
        }
        if (param_2 != (long *)0x0) {
          lVar9 = *param_2;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07779818) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_065eb424;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779818,0);
LAB_065eb424:
          uVar6 = (*(code *)*puVar7)(param_2,puVar7[1]);
          if (*(long *)(lVar10 + 0x78) != 0) {
            func_0x04fb92ac(*(long *)(lVar10 + 0x78),uVar6,uVar8,*(undefined8 *)PTR_DAT_07787220);
            uVar8 = func_0x06606604(lVar10,uVar6);
            lVar10 = *(long *)(lVar10 + 0x60);
            if (lVar10 != 0) {
              if ((bRam0000000007e23873 & 1) == 0) {
                func_0x03280a18(PTR_DAT_077d0230,uVar6,0);
                func_0x03280a18(PTR_DAT_07773770);
                bRam0000000007e23873 = 1;
              }
              lVar10 = *(long *)(lVar10 + 0x28);
              if ((lVar10 == 0) ||
                 (uVar11 = func_0x04fe2cfc(lVar10,uVar6,*(undefined8 *)PTR_DAT_077d0230),
                 uVar11 == 0)) {
                uVar11 = func_0x03280cac();
                return uVar11;
              }
              lVar10 = *(long *)PTR_DAT_07773770;
              puVar4 = &stack0xffffffffffffffe0;
              plVar13 = (long *)func_0x03fbac14(*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x20)
                                               );
              if (plVar13 == (long *)0x0) {
                unaff_x30 = 0x4321780;
                uVar11 = func_0x03280cac();
                *(undefined8 *)(uVar11 + 0x20) = extraout_d0;
              }
              else {
                uVar5 = (**(code **)(*plVar13 + 0x1b8))
                                  (*(undefined8 *)(uVar11 + 0x20),uVar8,plVar13,
                                   *(undefined8 *)(*plVar13 + 0x1c0));
                if ((uVar5 & 1) != 0) {
                  return uVar5;
                }
                *(undefined8 *)(uVar11 + 0x20) = uVar8;
                puVar4 = (undefined1 *)register0x00000008;
                lVar10 = unaff_x19;
              }
              *(undefined8 *)(puVar4 + -0x10) = unaff_x30;
              *(long *)(puVar4 + -8) = lVar10;
              lVar10 = *(long *)(uVar11 + 0x10);
              uVar5 = uVar11;
              if (lVar10 != 0) {
                uVar5 = (**(code **)(lVar10 + 0x18))
                                  (*(undefined8 *)(uVar11 + 0x20),*(undefined8 *)(lVar10 + 0x40),
                                   *(undefined8 *)(lVar10 + 0x28));
              }
              lVar10 = *(long *)(uVar11 + 0x18);
              if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0e47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar11 = (**(code **)(lVar10 + 0x18))
                                   (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
                return uVar11;
              }
              return uVar5;
            }
          }
        }
        uVar11 = func_0x03280cac();
        puVar3 = PTR_DAT_077fbae8;
        if ((bRam0000000007e27053 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077fbae8);
          bRam0000000007e27053 = 1;
        }
        uVar8 = *(undefined8 *)puVar3;
        return uVar11;
      }
    }
  }
  uVar11 = func_0x03280cac();
  puVar3 = PTR_DAT_07807d18;
  if ((bRam0000000007e280c3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807d18);
    bRam0000000007e280c3 = 1;
  }
  uVar8 = *(undefined8 *)puVar3;
  return uVar11;
}

