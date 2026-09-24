/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8EE10; Merger.MergeBoard.Logic.BoardOperations.BoardSplitOperationDataCreator.CreateOperationData; status ok */


void Merger_MergeBoard_Logic_BoardOperations_BoardSplitOperationDataCreator__CreateOperationData
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar10 [12];
  
  lVar8 = 0x7e2a000;
  if ((bRam0000000007e2a7d4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078304b0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0782fc50);
    func_0x03280a18(PTR_DAT_0782fc58);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0782fc60);
    bRam0000000007e2a7d4 = 1;
  }
  if ((param_2 != (long *)0x0) &&
     (plVar3 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_0782fc60),
     plVar3 != (long *)0x0)) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0782fc50) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06b8eefc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_0782fc50,0);
LAB_06b8eefc:
    unaff_x24 = (long *)PTR_DAT_078304b0;
    unaff_x25 = (long *)PTR_DAT_0774e8c8;
    param_2 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar2 = PTR_DAT_0782fc58;
    puVar1 = PTR_DAT_0774e8e0;
    if (param_2 == (long *)0x0) goto LAB_06b8f29c;
    do {
      lVar8 = *param_2;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06b8ef7c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06b8ef7c:
      uVar6 = (*(code *)*puVar4)(param_2,puVar4[1]);
      if ((uVar6 & 1) == 0) {
        lVar8 = 0;
        goto LAB_06b8f1ac;
      }
      lVar8 = *param_2;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06b8efd8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar2,0);
LAB_06b8efd8:
      lVar8 = (*(code *)*puVar4)(param_2,puVar4[1]);
      if (lVar8 == 0) goto LAB_06b8f290;
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 == (long *)0x0) goto LAB_06b8f294;
      lVar5 = *plVar3;
      uVar9 = *(undefined8 *)(lVar8 + 0x10);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_06b8f048;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*unaff_x24,1);
LAB_06b8f048:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,uVar9,0,puVar4[1]);
      if (plVar3 == (long *)0x0) goto LAB_06b8f288;
      lVar5 = *plVar3;
      uVar9 = *(undefined8 *)(lVar8 + 0x18);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_06b8f0b8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*unaff_x24,1);
LAB_06b8f0b8:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,uVar9,0,puVar4[1]);
      if (plVar3 == (long *)0x0) goto LAB_06b8f28c;
      lVar5 = *plVar3;
      uVar9 = *(undefined8 *)(lVar8 + 0x20);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06b8f124;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*unaff_x24,0);
LAB_06b8f124:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,uVar9,0,puVar4[1]);
      if (plVar3 == (long *)0x0) goto LAB_06b8f284;
      lVar5 = *plVar3;
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06b8f190;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*unaff_x24,0);
LAB_06b8f190:
      (*(code *)*puVar4)(plVar3,uVar9,0,puVar4[1]);
    } while( true );
  }
LAB_06b8f298:
  do {
    func_0x03280cac();
LAB_06b8f29c:
    func_0x03280cac();
    do {
      auVar10 = func_0x03280ca4(lVar8);
      if (auVar10._8_4_ != 1) {
        if (param_2 == (long *)0x0) goto LAB_06b8f358;
        lVar8 = *param_2;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 == 0) goto LAB_06b8f330;
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_06b8f318;
      }
      plVar3 = (long *)func_0x072ce910();
      lVar8 = *plVar3;
      func_0x072ce920();
LAB_06b8f1ac:
      if (param_2 != (long *)0x0) {
        lVar5 = *param_2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x25) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06b8f1fc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(param_2,*unaff_x25,0);
LAB_06b8f1fc:
        (*(code *)*puVar4)(param_2,puVar4[1]);
      }
    } while (lVar8 != 0);
    plVar3 = *(long **)(param_1 + 0x10);
    param_1 = 0;
  } while (plVar3 == (long *)0x0);
  lVar8 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_06b8f264;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar3,*unaff_x24,4);
LAB_06b8f264:
                    /* WARNING: Could not recover jumptable at 0x06b8f280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
LAB_06b8f284:
  func_0x03280cac();
LAB_06b8f288:
  func_0x03280cac();
LAB_06b8f28c:
  func_0x03280cac();
LAB_06b8f290:
  func_0x03280cac();
LAB_06b8f294:
  func_0x03280cac();
  goto LAB_06b8f298;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_06b8f318:
    if (*(long *)(piVar7 + -2) == *unaff_x25) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_06b8f34c;
    }
  }
LAB_06b8f330:
  puVar4 = (undefined8 *)func_0x03256b10(param_2,*unaff_x25,0);
LAB_06b8f34c:
  (*(code *)*puVar4)(param_2,puVar4[1]);
LAB_06b8f358:
  func_0x03365958(auVar10._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  return;
}

