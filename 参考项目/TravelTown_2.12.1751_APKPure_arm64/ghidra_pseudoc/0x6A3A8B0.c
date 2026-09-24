/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3A8B0; Merger.MergeBoard.View.Items.MergeBoardItemsContainer.RemoveItem; status ok */


/* WARNING: Possible PIC construction at 0x06b3ab38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b3ab3c) */
/* WARNING: Removing unreachable block (ram,0x06fe0ba0) */
/* WARNING: Removing unreachable block (ram,0x06fe0c14) */
/* WARNING: Removing unreachable block (ram,0x06fe0bac) */
/* WARNING: Removing unreachable block (ram,0x06fe0bc0) */
/* WARNING: Removing unreachable block (ram,0x06fe0bd4) */
/* WARNING: Removing unreachable block (ram,0x06fe0c48) */
/* WARNING: Removing unreachable block (ram,0x06fe0c78) */
/* WARNING: Removing unreachable block (ram,0x06fe0cac) */
/* WARNING: Removing unreachable block (ram,0x06fe0cc0) */
/* WARNING: Removing unreachable block (ram,0x06fe0be0) */
/* WARNING: Removing unreachable block (ram,0x06fe0bec) */
/* WARNING: Removing unreachable block (ram,0x06fe0c00) */

long * Merger_MergeBoard_View_Items_MergeBoardItemsContainer__RemoveItem
                 (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_28;
  
  if ((bRam0000000007e2a561 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f758);
    bRam0000000007e2a561 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar2 = func_0x04fe4588(*(long *)(param_1 + 0x48),param_2,&uStack_28,
                            *(undefined8 *)PTR_DAT_0782f758);
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x60);
      if (lVar10 != 0) {
        (**(code **)(lVar10 + 0x18))
                  (*(undefined8 *)(lVar10 + 0x40),uStack_28,*(undefined8 *)(lVar10 + 0x28));
      }
      plVar3 = (long *)0x1;
    }
    return plVar3;
  }
  auVar13 = func_0x03280cac();
  lVar10 = auVar13._0_8_;
  uVar2 = auVar13._8_8_ & 0xffffffff;
  if ((bRam0000000007e2a55e & 1) == 0) {
    func_0x03280a18(PTR_DAT_078094e0);
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_0782f760);
    bRam0000000007e2a55e = 1;
  }
  if ((*(long *)(lVar10 + 0x30) != 0) &&
     (lVar4 = func_0x069578fc(*(long *)(lVar10 + 0x30),1,0), lVar4 != 0)) {
    plVar3 = (long *)func_0x03dc9518(lVar4,*(undefined8 *)PTR_DAT_078094e0);
    lVar4 = func_0x06fdf130(lVar4,0);
    if ((*(long *)(lVar10 + 0x28) != 0) &&
       ((lVar5 = func_0x06b31ae8(*(long *)(lVar10 + 0x28),uVar2), lVar5 != 0 &&
        (func_0x06fea928(lVar5,0), lVar4 != 0)))) {
      func_0x06fea9c8(lVar4,0);
      if (*(long *)(lVar10 + 0x28) != 0) {
        uVar6 = func_0x06b31a40(*(long *)(lVar10 + 0x28),param_3);
        if (*(long *)(lVar10 + 0x38) != 0) {
          uVar7 = func_0x06b44698(*(long *)(lVar10 + 0x38));
          if ((*(long *)(lVar10 + 0x38) != 0) &&
             (uVar8 = func_0x06b44708(*(long *)(lVar10 + 0x38)), plVar3 != (long *)0x0)) {
            lVar4 = *plVar3;
            uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077c0858) {
                  puVar9 = (undefined8 *)(lVar4 + (long)(*piVar12 + 0x14) * 0x10 + 0x138);
                  goto LAB_06b3aaa4;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar9 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_077c0858,0x14);
LAB_06b3aaa4:
            (*(code *)*puVar9)(plVar3,uVar6,uVar7,uVar8,puVar9[1]);
            if (*(long *)(lVar10 + 0x38) != 0) {
              Merger_MergeBoard_View_Items_MergeBoardItemBehavioursHandler__AttachBehaviours
                        (*(long *)(lVar10 + 0x38),plVar3);
              Merger_MergeBoard_View_Items_MergeBoardItemsContainer__AddItemView
                        (lVar10,param_3,plVar3);
              Merger_MergeBoard_View_Items_MergeBoardItemsContainer__CreateBlockerView
                        (lVar10,uVar2,plVar3);
              return plVar3;
            }
          }
        }
      }
    }
  }
  auVar13 = func_0x03280cac();
  lVar10 = func_0x06fdbed0(auVar13._0_8_,0);
  if (lVar10 == 0) {
    auVar13 = func_0x03280cac();
  }
  else {
    plVar3 = (long *)func_0x06fdf2ec(lVar10,0);
    if (((ulong)plVar3 & 1) == 0) {
      return plVar3;
    }
  }
  puVar1 = PTR_DAT_0782f768;
  if ((bRam0000000007e2a4f8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f768);
    bRam0000000007e2a4f8 = 1;
  }
  plVar3 = (long *)func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x057da5fc(plVar3,0);
  *(undefined4 *)(plVar3 + 2) = 0;
  plVar3[4] = auVar13._0_8_;
  func_0x032809c4(plVar3 + 4,auVar13._0_8_);
  plVar3[5] = auVar13._8_8_;
  func_0x032809c4(plVar3 + 5,auVar13._8_8_);
  return plVar3;
}

