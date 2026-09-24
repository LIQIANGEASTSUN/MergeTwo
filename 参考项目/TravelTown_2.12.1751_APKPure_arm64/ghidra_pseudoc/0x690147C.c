/* Ghidra 12.1.2 native pseudocode; RVA 0x690147C; MergeEngine.ECS.Components.InteractionTracking.InteractionTrackingComponent.GetInteractionResourceAmountToConsume; status ok */


long * MergeEngine_ECS_Components_InteractionTracking_InteractionTrackingComponent__GetInteractionResourceAmountToConsume
                 (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000007e298ec & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e298ec = 1;
  }
  puVar4 = PTR_DAT_0777e548;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_1 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_06a01630;
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06a01510;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777e548,0);
LAB_06a01510:
    lVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if (lVar6 == 0) goto LAB_06a01630;
    if (*(char *)(lVar6 + 0x10) != '\0') {
      plVar10 = *(long **)(param_1 + 0x20);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        lVar6 = *(long *)puVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
              goto LAB_06a015fc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar10,lVar6,8);
LAB_06a015fc:
        lVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06a0162c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar10 = (long *)(**(code **)(param_2 + 0x18))
                                      (*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(lVar6 + 0x18)
                                       ,*(undefined8 *)(param_1 + 0x20),
                                       *(undefined8 *)(param_2 + 0x28));
          return plVar10;
        }
      }
      goto LAB_06a01630;
    }
  }
  plVar10 = *(long **)(param_1 + 0x20);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    lVar6 = *(long *)puVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
          goto LAB_06a015c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar10,lVar6,8);
LAB_06a015c8:
    lVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if (lVar6 != 0) {
      return (long *)(ulong)*(uint *)(lVar6 + 0x18);
    }
  }
LAB_06a01630:
  auVar11 = func_0x03280cac();
  plVar10 = (long *)(auVar11._0_8_ + 0x20);
  if (*plVar10 != 0) {
    return plVar10;
  }
  *plVar10 = auVar11._8_8_;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return plVar10;
}

