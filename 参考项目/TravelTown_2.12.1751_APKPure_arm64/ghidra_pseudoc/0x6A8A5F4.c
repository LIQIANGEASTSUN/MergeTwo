/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8A5F4; Merger.MergeBoard.Logic.BoardOperations.BoardCollectToolFragmentOperationDataCreator.CreateOperationData; status ok */


void Merger_MergeBoard_Logic_BoardOperations_BoardCollectToolFragmentOperationDataCreator__CreateOperationData
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar11 [12];
  
  plVar9 = (long *)0x7e2a000;
  if ((bRam0000000007e2a7b7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078304b0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0782f538);
    func_0x03280a18(PTR_DAT_0782f548);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0782f560);
    bRam0000000007e2a7b7 = 1;
  }
  if ((param_2 != (long *)0x0) &&
     (plVar3 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_0782f560),
     plVar3 != (long *)0x0)) {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0782f538) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b8a6e0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_0782f538,0);
LAB_06b8a6e0:
    unaff_x23 = (long *)PTR_DAT_078304b0;
    unaff_x24 = (long *)PTR_DAT_0774e8c8;
    param_2 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar2 = PTR_DAT_0782f548;
    puVar1 = PTR_DAT_0774e8e0;
    if (param_2 == (long *)0x0) goto LAB_06b8a928;
LAB_06b8a714:
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b8a760;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06b8a760:
    uVar7 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar9 = (long *)0x0;
      goto LAB_06b8a844;
    }
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b8a7bc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar2,0);
LAB_06b8a7bc:
    lVar5 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if (lVar5 != 0) {
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_06b8a920;
      lVar6 = *plVar9;
      uVar10 = *(undefined8 *)(lVar5 + 0x10);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_06b8a828;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*unaff_x23,1);
LAB_06b8a828:
      (*(code *)*puVar4)(plVar9,uVar10,0,puVar4[1]);
      goto LAB_06b8a714;
    }
    func_0x03280cac();
LAB_06b8a920:
    func_0x03280cac();
  }
  do {
    func_0x03280cac();
LAB_06b8a928:
    func_0x03280cac();
    do {
      auVar11 = func_0x03280ca4(plVar9);
      if (auVar11._8_4_ != 1) {
        if (param_2 == (long *)0x0) goto LAB_06b8a9cc;
        lVar5 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 == 0) goto LAB_06b8a9a4;
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_06b8a98c;
      }
      puVar4 = (undefined8 *)func_0x072ce910();
      plVar9 = (long *)*puVar4;
      func_0x072ce920();
LAB_06b8a844:
      if (param_2 != (long *)0x0) {
        lVar5 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06b8a894;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(param_2,*unaff_x24,0);
LAB_06b8a894:
        (*(code *)*puVar4)(param_2,puVar4[1]);
      }
    } while (plVar9 != (long *)0x0);
    plVar3 = *(long **)(param_1 + 0x10);
    param_1 = 0;
  } while (plVar3 == (long *)0x0);
  lVar5 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_06b8a8fc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar3,*unaff_x23,4);
LAB_06b8a8fc:
                    /* WARNING: Could not recover jumptable at 0x06b8a918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_06b8a98c:
    if (*(long *)(piVar8 + -2) == *unaff_x24) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06b8a9c0;
    }
  }
LAB_06b8a9a4:
  puVar4 = (undefined8 *)func_0x03256b10(param_2,*unaff_x24,0);
LAB_06b8a9c0:
  (*(code *)*puVar4)(param_2,puVar4[1]);
LAB_06b8a9cc:
  func_0x03365958(auVar11._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  return;
}

