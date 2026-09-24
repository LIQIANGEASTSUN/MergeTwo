/* Ghidra 12.1.2 native pseudocode; RVA 0x6901374; MergeEngine.ECS.Components.InteractionTracking.InteractionTrackingComponent.SetSpawnedAndSpawner; status ok */


/* WARNING: Possible PIC construction at 0x06a013a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a013f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a01440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06a013f4) */
/* WARNING: Removing unreachable block (ram,0x06a013a4) */
/* WARNING: Removing unreachable block (ram,0x06a01444) */

long * MergeEngine_ECS_Components_InteractionTracking_InteractionTrackingComponent__SetSpawnedAndSpawner
                 (long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  
  lVar8 = param_1[6];
  if (lVar8 == 0) goto LAB_06a01478;
  plVar5 = param_1;
  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_06a013d4;
  plVar5 = param_1 + 4;
  if (*plVar5 == 0) {
    param_1[4] = *(long *)(*(long *)(lVar8 + 0x10) + 0x40);
    goto SUB_032809c4;
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    plVar5 = param_1 + 5;
    if (*plVar5 == 0) {
      param_1[5] = *(long *)(*(long *)(lVar8 + 0x10) + 0x48);
      plVar5 = (long *)func_0x032809c4();
      lVar8 = param_1[6];
      if (lVar8 == 0) goto LAB_06a01478;
    }
LAB_06a013d4:
    if (*(long *)(lVar8 + 0x20) != 0) {
      plVar5 = param_1 + 4;
      if (*plVar5 == 0) {
        param_1[4] = *(long *)(*(long *)(lVar8 + 0x20) + 0x10);
        goto SUB_032809c4;
      }
    }
    plVar6 = plVar5;
    if (*(long *)(lVar8 + 0x30) != 0) {
      if (param_1[4] == 0) {
        param_1[4] = *(long *)(*(long *)(lVar8 + 0x30) + 0x10);
        func_0x032809c4();
        lVar8 = param_1[6];
        if (lVar8 == 0) goto LAB_06a01478;
      }
      if (*(long *)(lVar8 + 0x30) == 0) goto LAB_06a01478;
      plVar5 = param_1 + 5;
      plVar6 = plVar5;
      if (*plVar5 == 0) {
        param_1[5] = *(long *)(*(long *)(lVar8 + 0x30) + 0x18);
        goto SUB_032809c4;
      }
    }
    if (*(long *)(lVar8 + 0x28) == 0) {
      return plVar6;
    }
    plVar5 = param_1 + 4;
    if (*plVar5 != 0) {
      return plVar6;
    }
    *plVar5 = *(long *)(*(long *)(lVar8 + 0x28) + 0x10);
    goto SUB_032809c4;
  }
LAB_06a01478:
  auVar14 = func_0x03280cac();
  lVar11 = auVar14._8_8_;
  lVar8 = auVar14._0_8_;
  if ((bRam0000000007e298ec & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e298ec = 1;
  }
  puVar4 = PTR_DAT_0777e548;
  if (lVar11 == 0) {
LAB_06a01570:
    plVar5 = *(long **)(lVar8 + 0x20);
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      lVar8 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 8) * 0x10 + 0x138);
            goto LAB_06a015c8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar5,lVar8,8);
LAB_06a015c8:
      lVar8 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      if (lVar8 != 0) {
        return (long *)(ulong)*(uint *)(lVar8 + 0x18);
      }
    }
  }
  else {
    plVar5 = *(long **)(lVar8 + 0x20);
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06a01510;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777e548,0);
LAB_06a01510:
      lVar9 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      if (lVar9 != 0) {
        if (*(char *)(lVar9 + 0x10) == '\0') goto LAB_06a01570;
        plVar5 = *(long **)(lVar8 + 0x20);
        if (plVar5 != (long *)0x0) {
          lVar10 = *plVar5;
          lVar9 = *(long *)puVar4;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar9) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 8) * 0x10 + 0x138);
                goto LAB_06a015fc;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x03256b10(plVar5,lVar9,8);
LAB_06a015fc:
          lVar9 = (*(code *)*puVar7)(plVar5,puVar7[1]);
          if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06a0162c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar5 = (long *)(**(code **)(lVar11 + 0x18))
                                       (*(undefined8 *)(lVar11 + 0x40),*(undefined4 *)(lVar9 + 0x18)
                                        ,*(undefined8 *)(lVar8 + 0x20),
                                        *(undefined8 *)(lVar11 + 0x28));
            return plVar5;
          }
        }
      }
    }
  }
  auVar14 = func_0x03280cac();
  plVar5 = (long *)(auVar14._0_8_ + 0x20);
  if (*plVar5 != 0) {
    return plVar5;
  }
  *plVar5 = auVar14._8_8_;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return plVar5;
}

