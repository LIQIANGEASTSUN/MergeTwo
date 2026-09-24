/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8CB04; Merger.MergeBoard.Logic.BoardOperations.BoardInteractionOperationDataCreator.GetCollectedEntities; status ok */


/* WARNING: Removing unreachable block (ram,0x06b8d074) */
/* WARNING: Removing unreachable block (ram,0x06b8d094) */
/* WARNING: Removing unreachable block (ram,0x06b8d0a8) */
/* WARNING: Removing unreachable block (ram,0x06b8d0b8) */
/* WARNING: Removing unreachable block (ram,0x06b8d0c0) */
/* WARNING: Removing unreachable block (ram,0x06b8d0e8) */
/* WARNING: Removing unreachable block (ram,0x06b8d0cc) */
/* WARNING: Removing unreachable block (ram,0x06b8d0d8) */
/* WARNING: Removing unreachable block (ram,0x06b8d0f4) */
/* WARNING: Removing unreachable block (ram,0x06b8d100) */
/* WARNING: Removing unreachable block (ram,0x06b8d084) */

long Merger_MergeBoard_Logic_BoardOperations_BoardInteractionOperationDataCreator__GetCollectedEntities
               (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *unaff_x23;
  undefined1 auVar12 [12];
  
  puVar11 = PTR_DAT_07831d78;
  puVar10 = PTR_DAT_07831d70;
  if ((bRam0000000007e2a7c2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831d80);
    func_0x03280a18(PTR_DAT_07831d78);
    func_0x03280a18(PTR_DAT_07831d70);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07831a70);
    func_0x03280a18(PTR_DAT_077c1e30);
    func_0x03280a18(PTR_DAT_077c1e38);
    func_0x03280a18(PTR_DAT_07831a78);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077c1e50);
    func_0x03280a18(PTR_DAT_07831ab0);
    bRam0000000007e2a7c2 = 1;
  }
  lVar3 = func_0x03280ca0(*(undefined8 *)puVar10);
  func_0x053bfe40(lVar3,*(undefined8 *)puVar11);
  plVar6 = (long *)0x7e2a000;
  if ((param_2 == (long *)0x0) ||
     (plVar4 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07831ab0),
     plVar4 == (long *)0x0)) goto LAB_06b8cfa8;
  lVar7 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07831a70) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_06b8cc48;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_07831a70,0);
LAB_06b8cc48:
  unaff_x23 = (long *)PTR_DAT_0774e8c8;
  plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar2 = PTR_DAT_07831d80;
  puVar1 = PTR_DAT_07831a78;
  puVar11 = PTR_DAT_0774e8e0;
  if (plVar6 != (long *)0x0) {
LAB_06b8cc7c:
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar11) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b8ccc8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar11,0);
LAB_06b8ccc8:
    uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      puVar10 = (undefined *)0x0;
      if (plVar6 == (long *)0x0) goto LAB_06b8cdac;
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_06b8cd84;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_06b8cd6c;
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b8cd24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar1,0);
LAB_06b8cd24:
    lVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (lVar7 != 0) {
      if (lVar3 == 0) goto LAB_06b8cf9c;
      func_0x053c1024(lVar3,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)puVar2);
      goto LAB_06b8cc7c;
    }
    func_0x03280cac();
LAB_06b8cf9c:
    func_0x03280cac();
    plVar4 = plVar6;
LAB_06b8cfa0:
    func_0x03280cac();
LAB_06b8cfa4:
    func_0x03280cac();
    plVar6 = plVar4;
    puVar10 = puVar11;
    goto LAB_06b8cfa8;
  }
  goto LAB_06b8cfac;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_06b8cd6c:
    if (*(long *)(piVar9 + -2) == *unaff_x23) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06b8cda0;
    }
  }
LAB_06b8cd84:
  puVar5 = (undefined8 *)func_0x03256b10(plVar6,*unaff_x23,0);
LAB_06b8cda0:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_06b8cdac:
  plVar4 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_077c1e50);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077c1e30) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b8ce20;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_077c1e30,0);
LAB_06b8ce20:
    param_2 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar1 = PTR_DAT_07831d80;
    puVar11 = PTR_DAT_077c1e38;
    plVar4 = (long *)PTR_DAT_0774e8e0;
    if (param_2 != (long *)0x0) {
      do {
        lVar7 = *param_2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *plVar4) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06b8ce98;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(param_2,*plVar4,0);
LAB_06b8ce98:
        uVar8 = (*(code *)*puVar5)(param_2,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          plVar6 = (long *)0x0;
          goto LAB_06b8cf20;
        }
        lVar7 = *param_2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar11) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06b8cef4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar11,0);
LAB_06b8cef4:
        lVar7 = (*(code *)*puVar5)(param_2,puVar5[1]);
        if (lVar7 == 0) goto LAB_06b8cfa0;
        if (lVar3 == 0) goto LAB_06b8cfa4;
        func_0x053c1024(lVar3,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)puVar1);
      } while( true );
    }
    goto LAB_06b8cfb8;
  }
LAB_06b8cfa8:
  func_0x03280cac();
LAB_06b8cfac:
  func_0x03280cac();
  func_0x03280ca4(puVar10);
LAB_06b8cfb8:
  puVar11 = puVar10;
  func_0x03280cac();
  while( true ) {
    auVar12 = func_0x03280ca4(plVar6);
    if (auVar12._8_4_ != 1) break;
    puVar5 = (undefined8 *)func_0x072ce910();
    plVar6 = (long *)*puVar5;
    func_0x072ce920();
LAB_06b8cf20:
    if (param_2 != (long *)0x0) {
      lVar7 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x23) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06b8cf70;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(param_2,*unaff_x23,0);
LAB_06b8cf70:
      (*(code *)*puVar5)(param_2,puVar5[1]);
    }
    if (plVar6 == (long *)0x0) {
      return lVar3;
    }
  }
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b8d064;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_2,*unaff_x23,0);
LAB_06b8d064:
    (*(code *)*puVar5)(param_2,puVar5[1]);
  }
  func_0x03365958(auVar12._0_8_);
  func_0x03280ca4(puVar11);
  lVar3 = func_0x02f09514();
  return lVar3;
}

