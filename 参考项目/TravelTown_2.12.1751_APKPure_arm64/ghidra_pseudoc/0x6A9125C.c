/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9125C; Merger.MergeBoard.Handlers.CollectableItemsGrantProcessor.Process; status ok */


/* WARNING: Possible PIC construction at 0x06b916f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b91798: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b916fc) */
/* WARNING: Removing unreachable block (ram,0x06b91700) */
/* WARNING: Removing unreachable block (ram,0x06b91728) */
/* WARNING: Removing unreachable block (ram,0x06b91730) */
/* WARNING: Removing unreachable block (ram,0x06b91758) */
/* WARNING: Removing unreachable block (ram,0x06b9173c) */
/* WARNING: Removing unreachable block (ram,0x06b91748) */
/* WARNING: Removing unreachable block (ram,0x06b91764) */
/* WARNING: Removing unreachable block (ram,0x06b9179c) */
/* WARNING: Removing unreachable block (ram,0x06b917a0) */
/* WARNING: Removing unreachable block (ram,0x06b917bc) */
/* WARNING: Removing unreachable block (ram,0x06b917c4) */
/* WARNING: Removing unreachable block (ram,0x06b917e0) */
/* WARNING: Removing unreachable block (ram,0x06b917e4) */
/* WARNING: Removing unreachable block (ram,0x06b917f8) */
/* WARNING: Removing unreachable block (ram,0x06b91800) */
/* WARNING: Removing unreachable block (ram,0x06b91804) */
/* WARNING: Removing unreachable block (ram,0x06b91824) */
/* WARNING: Removing unreachable block (ram,0x06b9182c) */
/* WARNING: Removing unreachable block (ram,0x06b91854) */
/* WARNING: Removing unreachable block (ram,0x06b91838) */
/* WARNING: Removing unreachable block (ram,0x06b91844) */
/* WARNING: Removing unreachable block (ram,0x06b91864) */
/* WARNING: Removing unreachable block (ram,0x06b91880) */
/* WARNING: Removing unreachable block (ram,0x06b91888) */
/* WARNING: Removing unreachable block (ram,0x06b918a0) */
/* WARNING: Removing unreachable block (ram,0x06b918a8) */
/* WARNING: Removing unreachable block (ram,0x06b91920) */
/* WARNING: Removing unreachable block (ram,0x06b91944) */
/* WARNING: Removing unreachable block (ram,0x06b915e4) */

void Merger_MergeBoard_Handlers_CollectableItemsGrantProcessor__Process
               (undefined1 param_1 [16],undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auStack_d0 [16];
  
  plVar13 = (long *)0x7e2a000;
  if ((bRam0000000007e2a7ec & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07832228);
    func_0x03280a18(PTR_DAT_077c1690);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07831a70);
    func_0x03280a18(PTR_DAT_077c1e30);
    func_0x03280a18(PTR_DAT_077c1e38);
    func_0x03280a18(PTR_DAT_07831a78);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_077c1e50);
    func_0x03280a18(PTR_DAT_07831ab0);
    func_0x03280a18(PTR_DAT_07832230);
    func_0x03280a18(PTR_DAT_07832238);
    func_0x03280a18(PTR_DAT_07832240);
    func_0x03280a18(PTR_DAT_07832248);
    bRam0000000007e2a7ec = 1;
  }
  if ((param_4 == (long *)0x0) ||
     (plVar5 = (long *)func_0x03ec4400(param_4,*(undefined8 *)PTR_DAT_077c1e50),
     plVar5 == (long *)0x0)) goto LAB_06b91a40;
  lVar10 = *plVar5;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077c1e30) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06b913d8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  param_5 = 0;
  puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b913d8:
  puVar1 = PTR_DAT_0774e8c8;
  plVar13 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar4 = PTR_DAT_077c1e38;
  puVar3 = PTR_DAT_077c1690;
  puVar2 = PTR_DAT_0774e8e0;
  if (plVar13 != (long *)0x0) {
LAB_06b9140c:
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b91458;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    param_5 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar13);
LAB_06b91458:
    uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      unaff_x22 = 0;
      if (plVar13 == (long *)0x0) goto LAB_06b915d8;
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_06b915b0;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      goto LAB_06b91598;
    }
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b914b4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    param_5 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar13);
LAB_06b914b4:
    unaff_x22 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    if (unaff_x22 != 0) {
      plVar5 = *(long **)(param_3 + 0x38);
      if (plVar5 == (long *)0x0) goto LAB_06b91a08;
      lVar10 = *plVar5;
      uVar14 = *(undefined8 *)(unaff_x22 + 0x18);
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_06b91524;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar3,1);
LAB_06b91524:
      param_5 = puVar6[1];
      lVar10 = (*(code *)*puVar6)(plVar5,uVar14);
      if (((*(long *)(unaff_x22 + 0x30) != 0) &&
          (uVar11 = func_0x06b2b3f8(*(long *)(unaff_x22 + 0x30),0), (uVar11 & 1) != 0)) ||
         ((lVar10 != 0 && (uVar11 = func_0x06b2b4c8(lVar10,0), (uVar11 & 1) != 0)))) {
        Merger_MergeBoard_Handlers_CollectableItemsGrantProcessor__PlayFlyAnimationForCollectableItems
                  (param_3,unaff_x22);
        param_5 = lVar10;
      }
      goto LAB_06b9140c;
    }
    func_0x03280cac();
LAB_06b91a08:
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    goto LAB_06b91a40;
  }
  goto LAB_06b91a44;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_06b91598:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06b915cc;
    }
  }
LAB_06b915b0:
  param_5 = 0;
  puVar6 = (undefined8 *)func_0x03256b10(plVar13);
LAB_06b915cc:
  (*(code *)*puVar6)(plVar13,puVar6[1]);
LAB_06b915d8:
  plVar5 = (long *)func_0x03ec4400(param_4,*(undefined8 *)PTR_DAT_07831ab0);
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07831a70) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b91658;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    param_5 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b91658:
    param_4 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (param_4 != (long *)0x0) {
      lVar10 = *param_4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8e0) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06b916d0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      param_5 = 0;
      puVar6 = (undefined8 *)func_0x03256b10(param_4);
LAB_06b916d0:
      uVar11 = (*(code *)*puVar6)(param_4,puVar6[1]);
      if ((uVar11 & 1) != 0) {
        func_0x03280ca0(*(undefined8 *)PTR_DAT_07832238);
        return;
      }
      plVar13 = (long *)0x0;
      plVar5 = (long *)PTR_DAT_0774e8c8;
      goto LAB_06b91984;
    }
    goto LAB_06b91a50;
  }
LAB_06b91a40:
  func_0x03280cac();
LAB_06b91a44:
  func_0x03280cac();
  func_0x03280ca4(unaff_x22);
LAB_06b91a50:
  func_0x03280cac();
  while( true ) {
    auVar15 = func_0x03280ca4(plVar13);
    plVar5 = (long *)PTR_DAT_0774e8c8;
    if (auVar15._8_4_ != 1) break;
    puVar6 = (undefined8 *)func_0x072ce910();
    plVar13 = (long *)*puVar6;
    func_0x072ce920();
LAB_06b91984:
    if (param_4 != (long *)0x0) {
      lVar10 = *param_4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar5) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06b919d4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      param_5 = 0;
      puVar6 = (undefined8 *)func_0x03256b10(param_4);
LAB_06b919d4:
      (*(code *)*puVar6)(param_4,puVar6[1]);
    }
    if (plVar13 == (long *)0x0) {
      return;
    }
  }
  if (param_4 != (long *)0x0) {
    lVar10 = *param_4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b91c0c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    param_5 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(param_4);
LAB_06b91c0c:
    (*(code *)*puVar6)(param_4,puVar6[1]);
  }
  func_0x03365958(auVar15._0_8_);
  func_0x03280ca4(0);
  auVar16 = func_0x02f09514();
  lVar10 = auVar16._8_8_;
  if ((bRam0000000007e2a7f1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772a90);
    func_0x03280a18(PTR_DAT_0774e930);
    func_0x03280a18(PTR_DAT_07772a98);
    func_0x03280a18(PTR_DAT_07775188);
    bRam0000000007e2a7f1 = 1;
  }
  if ((((lVar10 != 0) &&
       (lVar7 = Merger_MergeBoard_Handlers_CollectableItemsGrantProcessor__GetTransformAtPosition
                          (auVar16._0_8_,*(undefined4 *)(lVar10 + 0x28)), lVar7 != 0)) &&
      (lVar7 = func_0x03cec8b4(lVar7,*(undefined8 *)PTR_DAT_0774e930), lVar7 != 0)) &&
     ((lVar7 = func_0x06fdbe94(lVar7,0), lVar7 != 0 &&
      (uVar14 = func_0x06fea928(lVar7,0), puVar3 = PTR_DAT_07775188, puVar2 = PTR_DAT_07772a98,
      puVar1 = PTR_DAT_07772a90, param_5 != 0)))) {
    uVar11 = func_0x06b2b4c8(param_5,0);
    if ((uVar11 & 1) != 0) {
      func_0x06b2ca88(param_5,*(undefined8 *)(lVar10 + 0x30),0);
    }
    uVar14 = func_0x062168d8(uVar14,param_2,param_5,0);
    uVar8 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x067f5dac(uVar8,uVar14,0,0);
    auStack_d0 = func_0x0578e2a8(0);
    uVar14 = func_0x0579043c(auStack_d0,0);
    uVar9 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x0686b6dc(uVar9,param_5,0x14,uVar8,0,0,0,0,0,0,0,0,uVar14,0);
    func_0x03cc6bd4(auVar16._0_8_,uVar9,*(undefined8 *)puVar1);
    return;
  }
  func_0x03280cac();
  return;
}

