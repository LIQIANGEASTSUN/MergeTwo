/* Ghidra 12.1.2 native pseudocode; RVA 0x67CAD94; Merger.Services.Backend.Sync.Implementations.SyncBoardService.MapIdComponent; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_Services_Backend_Sync_Implementations_SyncBoardService__MapIdComponent
               (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_34;
  
  if ((bRam0000000007e28fa2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f758);
    func_0x03280a18(PTR_DAT_0774e6b0);
    func_0x03280a18(PTR_DAT_07801de0);
    func_0x03280a18(PTR_DAT_0774e558);
    bRam0000000007e28fa2 = 1;
  }
  puVar5 = PTR_DAT_07801de0;
  puVar2 = PTR_DAT_0774e558;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if ((param_3 != 0) && (param_2 != 0)) {
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    func_0x032809c4();
    lVar8 = *(long *)(param_3 + 0x18);
    if (lVar8 == 0) {
      auStack_50 = func_0x0578e2a8(0);
      lVar8 = func_0x0579043c(auStack_50,0);
    }
    puVar4 = PTR_DAT_0774f758;
    puVar3 = PTR_DAT_0774e6b0;
    *(long *)(param_2 + 0x18) = lVar8;
    func_0x032809c4();
    uVar13 = *(undefined8 *)puVar5;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar13 = func_0x057a51c4(uVar13,0);
    uStack_34 = *(undefined4 *)(param_3 + 0x20);
    uVar6 = func_0x03280b94(*(undefined8 *)puVar3,&uStack_34);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar4);
    }
    uVar13 = func_0x057ca75c(uVar13,uVar6,0);
    *(undefined8 *)(param_2 + 0x20) = uVar13;
    func_0x032809c4((undefined8 *)(param_2 + 0x20),uVar13);
    uVar13 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x28) = uVar13;
    return;
  }
  auVar17 = func_0x03280cac();
  lVar9 = auVar17._8_8_;
  lVar8 = auVar17._0_8_;
  if ((bRam0000000007e28f9d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773cd8);
    bRam0000000007e28f9d = 1;
  }
  if (lVar9 == 0) goto SUB_057da5fc;
  lVar15 = *(long *)(lVar9 + 0x60);
  if ((lVar15 != 0) && (*(char *)(lVar15 + 0x12) != '\0')) {
    plVar14 = *(long **)(lVar8 + 0x58);
    if (plVar14 == (long *)0x0) goto SUB_057da5fc;
    lVar10 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07773cd8) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_068caf98;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07773cd8,0);
LAB_068caf98:
    lVar10 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    if (*(long *)(lVar9 + 0x60) == 0) goto SUB_057da5fc;
    dVar16 = *(double *)(*(long *)(lVar9 + 0x60) + 0x20) * _UNK_017806f0;
    lVar1 = -0x8000000000000000;
    if (dVar16 != INFINITY) {
      lVar1 = (long)dVar16;
    }
    *(long *)(lVar15 + 0x18) = lVar1 + lVar10;
  }
  lVar15 = *(long *)(lVar9 + 0x78);
  if ((lVar15 != 0) && (*(char *)(lVar15 + 0x18) != '\0')) {
    plVar14 = *(long **)(lVar8 + 0x58);
    if (plVar14 == (long *)0x0) goto SUB_057da5fc;
    lVar10 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07773cd8) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_068cb048;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07773cd8,0);
LAB_068cb048:
    lVar10 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    if (*(long *)(lVar9 + 0x78) == 0) goto SUB_057da5fc;
    dVar16 = *(double *)(*(long *)(lVar9 + 0x78) + 0x10) * _UNK_017806f0;
    lVar1 = -0x8000000000000000;
    if (dVar16 != INFINITY) {
      lVar1 = (long)dVar16;
    }
    *(long *)(lVar15 + 0x20) = lVar1 + lVar10;
  }
  lVar15 = *(long *)(lVar9 + 0x70);
  if (lVar15 == 0) {
    return;
  }
  if (*(double *)(lVar15 + 0x20) <= 0.0) {
    if (*(double *)(lVar15 + 0x28) <= 0.0) {
      return;
    }
    plVar14 = *(long **)(lVar8 + 0x58);
    if (plVar14 != (long *)0x0) {
      lVar8 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07773cd8) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_068cb1ac;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07773cd8,0);
LAB_068cb1ac:
      lVar8 = (*(code *)*puVar7)(plVar14,puVar7[1]);
      if (*(long *)(lVar9 + 0x70) != 0) {
        dVar16 = *(double *)(*(long *)(lVar9 + 0x70) + 0x28) * _UNK_017806f0;
        lVar9 = -0x8000000000000000;
        if (dVar16 != INFINITY) {
          lVar9 = (long)dVar16;
        }
        *(long *)(lVar15 + 0x18) = lVar9 + lVar8;
        return;
      }
    }
  }
  else {
    plVar14 = *(long **)(lVar8 + 0x58);
    if (plVar14 != (long *)0x0) {
      lVar8 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07773cd8) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_068cb158;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07773cd8,0);
LAB_068cb158:
      lVar8 = (*(code *)*puVar7)(plVar14,puVar7[1]);
      if (*(long *)(lVar9 + 0x70) != 0) {
        dVar16 = *(double *)(*(long *)(lVar9 + 0x70) + 0x20) * _UNK_017806f0;
        lVar9 = -0x8000000000000000;
        if (dVar16 != INFINITY) {
          lVar9 = (long)dVar16;
        }
        *(long *)(lVar15 + 0x10) = lVar9 + lVar8;
        return;
      }
    }
  }
SUB_057da5fc:
  func_0x03280cac();
  return;
}

