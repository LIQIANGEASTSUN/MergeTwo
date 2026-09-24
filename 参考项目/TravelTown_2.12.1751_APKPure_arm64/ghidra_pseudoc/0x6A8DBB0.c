/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8DBB0; Merger.MergeBoard.Logic.BoardOperations.BoardMoveOperationDataCreator.CreateOperationData; status ok */


long * Merger_MergeBoard_Logic_BoardOperations_BoardMoveOperationDataCreator__CreateOperationData
                 (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
  
  plVar11 = (long *)0x7e2a000;
  if ((bRam0000000007e2a7c8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078304b0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0782fc88);
    func_0x03280a18(PTR_DAT_0782fc90);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077c1df8);
    func_0x03280a18(PTR_DAT_077c1e00);
    func_0x03280a18(PTR_DAT_0782fc98);
    func_0x03280a18(PTR_DAT_0782fc10);
    func_0x03280a18(PTR_DAT_0782fc18);
    bRam0000000007e2a7c8 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar5 = func_0x03ec47bc(param_2,*(undefined8 *)PTR_DAT_0782fc18);
    if (((uVar5 & 1) != 0) ||
       (uVar5 = func_0x03ec47bc(param_2,*(undefined8 *)PTR_DAT_0782fc10), (uVar5 & 1) != 0)) {
      puVar1 = PTR_DAT_077c1df8;
      plVar11 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077c1e00);
      func_0x04143c38(plVar11,*(undefined8 *)puVar1);
      return plVar11;
    }
    plVar6 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_0782fc98);
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0782fc88) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b8dd34;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0782fc88,0);
LAB_06b8dd34:
      param_2 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar3 = PTR_DAT_078304b0;
      puVar2 = PTR_DAT_0782fc90;
      puVar1 = PTR_DAT_0774e8e0;
      if (param_2 == (long *)0x0) goto LAB_06b8df8c;
LAB_06b8dd60:
      lVar8 = *param_2;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b8ddac;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06b8ddac:
      uVar5 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((uVar5 & 1) == 0) {
        plVar11 = (long *)0x0;
        iVar12 = 6;
        iVar4 = 6;
        if (param_2 == (long *)0x0) goto LAB_06b8def4;
        goto LAB_06b8de94;
      }
      lVar8 = *param_2;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b8de08;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar2,0);
LAB_06b8de08:
      lVar8 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if (lVar8 != 0) {
        plVar11 = *(long **)(param_1 + 0x10);
        if (plVar11 == (long *)0x0) goto LAB_06b8df84;
        lVar9 = *plVar11;
        uVar13 = *(undefined8 *)(lVar8 + 0x10);
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06b8de70;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar3,0);
LAB_06b8de70:
        (*(code *)*puVar7)(plVar11,uVar13,0,puVar7[1]);
        goto LAB_06b8dd60;
      }
      func_0x03280cac();
LAB_06b8df84:
      func_0x03280cac();
    }
  }
  do {
    func_0x03280cac();
LAB_06b8df8c:
    func_0x03280cac();
    do {
      auVar14 = func_0x03280ca4(plVar11);
      if (auVar14._8_4_ != 1) {
        if (param_2 == (long *)0x0) goto LAB_06b8e044;
        lVar8 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 == 0) goto LAB_06b8e01c;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_06b8e004;
      }
      puVar7 = (undefined8 *)func_0x072ce910(auVar14._0_8_);
      plVar11 = (long *)*puVar7;
      func_0x072ce920();
      iVar12 = 0;
      iVar4 = 0;
      if (param_2 != (long *)0x0) {
LAB_06b8de94:
        iVar12 = iVar4;
        lVar8 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06b8dee8;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b8dee8:
        (*(code *)*puVar7)(param_2,puVar7[1]);
      }
LAB_06b8def4:
    } while (plVar11 != (long *)0x0);
    if ((iVar12 != 6) && (iVar12 != 0)) {
      return param_2;
    }
    plVar6 = *(long **)(param_1 + 0x10);
    param_1 = 0;
  } while (plVar6 == (long *)0x0);
  lVar8 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_078304b0) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_06b8df64;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_078304b0,4);
LAB_06b8df64:
                    /* WARNING: Could not recover jumptable at 0x06b8df7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar11 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  return plVar11;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
LAB_06b8e004:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06b8e038;
    }
  }
LAB_06b8e01c:
  puVar7 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b8e038:
  (*(code *)*puVar7)(param_2,puVar7[1]);
LAB_06b8e044:
  func_0x03365958(auVar14._0_8_);
  func_0x03280ca4(0);
  plVar11 = (long *)func_0x02f09514();
  return plVar11;
}

