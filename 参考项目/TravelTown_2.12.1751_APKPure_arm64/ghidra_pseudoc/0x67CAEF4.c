/* Ghidra 12.1.2 native pseudocode; RVA 0x67CAEF4; Merger.Services.Backend.Sync.Implementations.SyncBoardService.TryAddCooldownEndTimes; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_Services_Backend_Sync_Implementations_SyncBoardService__TryAddCooldownEndTimes
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  double dVar8;
  
  if ((bRam0000000007e28f9d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773cd8);
    bRam0000000007e28f9d = 1;
  }
  if (param_2 == 0) goto SUB_057da5fc;
  lVar7 = *(long *)(param_2 + 0x60);
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x12) != '\0')) {
    plVar6 = *(long **)(param_1 + 0x58);
    if (plVar6 == (long *)0x0) goto SUB_057da5fc;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07773cd8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_068caf98;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07773cd8,0);
LAB_068caf98:
    lVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (*(long *)(param_2 + 0x60) == 0) goto SUB_057da5fc;
    dVar8 = *(double *)(*(long *)(param_2 + 0x60) + 0x20) * _UNK_017806f0;
    lVar1 = -0x8000000000000000;
    if (dVar8 != INFINITY) {
      lVar1 = (long)dVar8;
    }
    *(long *)(lVar7 + 0x18) = lVar1 + lVar3;
  }
  lVar7 = *(long *)(param_2 + 0x78);
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x18) != '\0')) {
    plVar6 = *(long **)(param_1 + 0x58);
    if (plVar6 == (long *)0x0) goto SUB_057da5fc;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07773cd8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_068cb048;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07773cd8,0);
LAB_068cb048:
    lVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (*(long *)(param_2 + 0x78) == 0) goto SUB_057da5fc;
    dVar8 = *(double *)(*(long *)(param_2 + 0x78) + 0x10) * _UNK_017806f0;
    lVar1 = -0x8000000000000000;
    if (dVar8 != INFINITY) {
      lVar1 = (long)dVar8;
    }
    *(long *)(lVar7 + 0x20) = lVar1 + lVar3;
  }
  lVar7 = *(long *)(param_2 + 0x70);
  if (lVar7 == 0) {
    return;
  }
  if (*(double *)(lVar7 + 0x20) <= 0.0) {
    if (*(double *)(lVar7 + 0x28) <= 0.0) {
      return;
    }
    plVar6 = *(long **)(param_1 + 0x58);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07773cd8) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_068cb1ac;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07773cd8,0);
LAB_068cb1ac:
      lVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      if (*(long *)(param_2 + 0x70) != 0) {
        dVar8 = *(double *)(*(long *)(param_2 + 0x70) + 0x28) * _UNK_017806f0;
        lVar1 = -0x8000000000000000;
        if (dVar8 != INFINITY) {
          lVar1 = (long)dVar8;
        }
        *(long *)(lVar7 + 0x18) = lVar1 + lVar3;
        return;
      }
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 0x58);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07773cd8) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_068cb158;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07773cd8,0);
LAB_068cb158:
      lVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      if (*(long *)(param_2 + 0x70) != 0) {
        dVar8 = *(double *)(*(long *)(param_2 + 0x70) + 0x20) * _UNK_017806f0;
        lVar1 = -0x8000000000000000;
        if (dVar8 != INFINITY) {
          lVar1 = (long)dVar8;
        }
        *(long *)(lVar7 + 0x10) = lVar1 + lVar3;
        return;
      }
    }
  }
SUB_057da5fc:
  func_0x03280cac();
  return;
}

