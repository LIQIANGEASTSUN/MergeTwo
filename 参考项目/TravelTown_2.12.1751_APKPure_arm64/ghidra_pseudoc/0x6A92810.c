/* Ghidra 12.1.2 native pseudocode; RVA 0x6A92810; Merger.MergeBoard.Handlers.ItemDiscoveryProcessor.Process; status ok */


/* WARNING: Removing unreachable block (ram,0x06b92df8) */
/* WARNING: Removing unreachable block (ram,0x06b92e18) */
/* WARNING: Removing unreachable block (ram,0x06b92e2c) */
/* WARNING: Removing unreachable block (ram,0x06b92e3c) */
/* WARNING: Removing unreachable block (ram,0x06b92e44) */
/* WARNING: Removing unreachable block (ram,0x06b92e6c) */
/* WARNING: Removing unreachable block (ram,0x06b92e50) */
/* WARNING: Removing unreachable block (ram,0x06b92e5c) */
/* WARNING: Removing unreachable block (ram,0x06b92e78) */
/* WARNING: Removing unreachable block (ram,0x06b92e84) */
/* WARNING: Removing unreachable block (ram,0x06b92e08) */

void Merger_MergeBoard_Handlers_ItemDiscoveryProcessor__Process(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *unaff_x22;
  undefined8 uVar11;
  long *unaff_x24;
  undefined1 auVar12 [12];
  
  plVar10 = (long *)0x7e2a000;
  if ((bRam0000000007e2a7f6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077cb768);
    func_0x03280a18(PTR_DAT_078322a0);
    func_0x03280a18(PTR_DAT_078322a8);
    func_0x03280a18(PTR_DAT_077cb770);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_078322b0);
    func_0x03280a18(PTR_DAT_077cb778);
    func_0x03280a18(PTR_DAT_078322b8);
    bRam0000000007e2a7f6 = 1;
  }
  if ((param_2 == (long *)0x0) ||
     (plVar4 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_078322b8),
     plVar4 == (long *)0x0)) goto LAB_06b92d2c;
  lVar6 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_078322a0) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_06b92920;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_078322a0,0);
LAB_06b92920:
  unaff_x24 = (long *)PTR_DAT_0774e8c8;
  plVar10 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar3 = PTR_DAT_078322b0;
  puVar2 = PTR_DAT_078322a8;
  puVar1 = PTR_DAT_0774e8e0;
  if (plVar10 != (long *)0x0) {
LAB_06b92954:
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b929a0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar1,0);
LAB_06b929a0:
    uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      unaff_x22 = (long *)0x0;
      if (plVar10 == (long *)0x0) goto LAB_06b92ad8;
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_06b92ab0;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_06b92a98;
    }
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b929fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar2,0);
LAB_06b929fc:
    lVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if (lVar6 != 0) {
      unaff_x22 = *(long **)(param_1 + 0x10);
      if (unaff_x22 == (long *)0x0) goto LAB_06b92d20;
      lVar7 = *unaff_x22;
      uVar11 = *(undefined8 *)(lVar6 + 0x10);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06b92a64;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(unaff_x22,*(long *)puVar3,0);
LAB_06b92a64:
      (*(code *)*puVar5)(unaff_x22,uVar11,puVar5[1]);
      goto LAB_06b92954;
    }
    func_0x03280cac();
LAB_06b92d20:
    func_0x03280cac();
LAB_06b92d24:
    func_0x03280cac();
LAB_06b92d28:
    func_0x03280cac();
    goto LAB_06b92d2c;
  }
  goto LAB_06b92d30;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_06b92a98:
    if (*(long *)(piVar9 + -2) == *unaff_x24) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06b92acc;
    }
  }
LAB_06b92ab0:
  puVar5 = (undefined8 *)func_0x03256b10(plVar10,*unaff_x24,0);
LAB_06b92acc:
  (*(code *)*puVar5)(plVar10,puVar5[1]);
LAB_06b92ad8:
  plVar4 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_077cb778);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077cb768) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b92b4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_077cb768,0);
LAB_06b92b4c:
    param_2 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar3 = PTR_DAT_078322b0;
    puVar2 = PTR_DAT_077cb770;
    puVar1 = PTR_DAT_0774e8e0;
    if (param_2 != (long *)0x0) {
      do {
        lVar6 = *param_2;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06b92bc4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06b92bc4:
        uVar8 = (*(code *)*puVar5)(param_2,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          plVar10 = (long *)0x0;
          goto LAB_06b92ca4;
        }
        lVar6 = *param_2;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06b92c20;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar2,0);
LAB_06b92c20:
        lVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
        if (lVar6 == 0) goto LAB_06b92d24;
        plVar10 = *(long **)(param_1 + 0x10);
        if (plVar10 == (long *)0x0) goto LAB_06b92d28;
        lVar7 = *plVar10;
        unaff_x22 = *(long **)(lVar6 + 0x10);
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_06b92c8c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar3,1);
LAB_06b92c8c:
        (*(code *)*puVar5)(plVar10,unaff_x22,puVar5[1]);
      } while( true );
    }
    goto LAB_06b92d3c;
  }
LAB_06b92d2c:
  func_0x03280cac();
LAB_06b92d30:
  func_0x03280cac();
  func_0x03280ca4(unaff_x22);
LAB_06b92d3c:
  func_0x03280cac();
  while( true ) {
    auVar12 = func_0x03280ca4(plVar10);
    if (auVar12._8_4_ != 1) break;
    puVar5 = (undefined8 *)func_0x072ce910();
    plVar10 = (long *)*puVar5;
    func_0x072ce920();
LAB_06b92ca4:
    if (param_2 != (long *)0x0) {
      lVar6 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x24) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06b92cf4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(param_2,*unaff_x24,0);
LAB_06b92cf4:
      (*(code *)*puVar5)(param_2,puVar5[1]);
    }
    if (plVar10 == (long *)0x0) {
      return;
    }
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b92de8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_2,*unaff_x24,0);
LAB_06b92de8:
    (*(code *)*puVar5)(param_2,puVar5[1]);
  }
  func_0x03365958(auVar12._0_8_);
  func_0x03280ca4(unaff_x22);
  func_0x02f09514();
  return;
}

