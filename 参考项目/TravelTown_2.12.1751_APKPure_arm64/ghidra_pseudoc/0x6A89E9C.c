/* Ghidra 12.1.2 native pseudocode; RVA 0x6A89E9C; Merger.MergeBoard.Logic.BoardOperations.BoardCollectToolboxOperationDataCreator.CreateOperationData; status ok */


void Merger_MergeBoard_Logic_BoardOperations_BoardCollectToolboxOperationDataCreator__CreateOperationData
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  long *unaff_x26;
  undefined1 auVar15 [12];
  
  if ((bRam0000000007e2a7b3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077da8d8);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_077da8e0);
    func_0x03280a18(PTR_DAT_078304b0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0782f540);
    func_0x03280a18(PTR_DAT_0782f550);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0782f558);
    func_0x03280a18(PTR_DAT_07831e10);
    func_0x03280a18(PTR_DAT_07831e18);
    bRam0000000007e2a7b3 = 1;
  }
  if ((param_2 != (long *)0x0) &&
     (plVar5 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_0782f558),
     plVar5 != (long *)0x0)) {
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0782f540) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06b89fd4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0782f540,0);
LAB_06b89fd4:
    unaff_x26 = (long *)PTR_DAT_078304b0;
    param_2 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar3 = PTR_DAT_07831e18;
    puVar2 = PTR_DAT_0774ea58;
    puVar1 = PTR_DAT_0774e8e0;
    plVar5 = (long *)PTR_DAT_0782f550;
    if (param_2 == (long *)0x0) goto LAB_06b8a3ac;
LAB_06b8a010:
    lVar7 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06b8a05c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06b8a05c:
    uVar9 = (*(code *)*puVar6)(param_2,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      unaff_x22 = 0;
      iVar11 = 5;
      iVar4 = 5;
      if (param_2 == (long *)0x0) goto LAB_06b8a2f0;
      goto LAB_06b8a290;
    }
    lVar7 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06b8a0b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(param_2,*plVar5,0);
LAB_06b8a0b8:
    lVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
    if (lVar7 == 0) goto LAB_06b8a3a0;
    plVar12 = *(long **)(param_1 + 0x10);
    if (plVar12 == (long *)0x0) goto LAB_06b8a3a4;
    lVar8 = *plVar12;
    uVar13 = *(undefined8 *)(lVar7 + 0x10);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_06b8a128;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar12,*unaff_x26,1);
LAB_06b8a128:
    plVar12 = (long *)(*(code *)*puVar6)(plVar12,uVar13,0,puVar6[1]);
    unaff_x22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
    func_0x06a30df4(unaff_x22,0);
    lVar8 = *(long *)puVar3;
    uVar13 = *(undefined8 *)(lVar7 + 0x20);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c(lVar8);
      lVar8 = *(long *)puVar3;
    }
    lVar7 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        func_0x03280b8c(lVar8);
        lVar8 = *(long *)puVar3;
      }
      uVar14 = **(undefined8 **)(lVar8 + 0xb8);
      lVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da8e0);
      func_0x053569b8(lVar7,uVar14,*(undefined8 *)PTR_DAT_07831e10,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar5 = lVar7;
      func_0x032809c4(plVar5,lVar7);
      plVar5 = (long *)PTR_DAT_0782f550;
    }
    uVar13 = func_0x03d50a94(uVar13,lVar7,*(undefined8 *)PTR_DAT_077da8d8);
    uVar13 = func_0x03d5ffd0(uVar13,*(undefined8 *)puVar2);
    if (unaff_x22 != 0) {
      *(undefined8 *)(unaff_x22 + 0x40) = uVar13;
      func_0x032809c4();
      if (plVar12 == (long *)0x0) goto LAB_06b8a39c;
      lVar7 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_06b8a270;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar12,*unaff_x26,3);
LAB_06b8a270:
      (*(code *)*puVar6)(plVar12,unaff_x22,puVar6[1]);
      goto LAB_06b8a010;
    }
    func_0x03280cac();
LAB_06b8a39c:
    func_0x03280cac();
LAB_06b8a3a0:
    func_0x03280cac();
LAB_06b8a3a4:
    func_0x03280cac();
  }
  do {
    func_0x03280cac();
LAB_06b8a3ac:
    func_0x03280cac();
    do {
      auVar15 = func_0x03280ca4(unaff_x22);
      if (auVar15._8_4_ != 1) {
        if (param_2 == (long *)0x0) goto LAB_06b8a488;
        lVar7 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_06b8a460;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_06b8a448;
      }
      plVar5 = (long *)func_0x072ce910(auVar15._0_8_);
      unaff_x22 = *plVar5;
      func_0x072ce920();
      iVar11 = 0;
      iVar4 = 0;
      if (param_2 != (long *)0x0) {
LAB_06b8a290:
        iVar11 = iVar4;
        lVar7 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06b8a2e4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b8a2e4:
        (*(code *)*puVar6)(param_2,puVar6[1]);
      }
LAB_06b8a2f0:
    } while (unaff_x22 != 0);
    if ((iVar11 != 5) && (iVar11 != 0)) {
      return;
    }
    plVar5 = *(long **)(param_1 + 0x10);
    param_1 = 0;
  } while (plVar5 == (long *)0x0);
  lVar7 = *plVar5;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_06b8a374;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar5,*unaff_x26,4);
LAB_06b8a374:
                    /* WARNING: Could not recover jumptable at 0x06b8a394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_06b8a448:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06b8a47c;
    }
  }
LAB_06b8a460:
  puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b8a47c:
  (*(code *)*puVar6)(param_2,puVar6[1]);
LAB_06b8a488:
  func_0x03365958(auVar15._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  return;
}

