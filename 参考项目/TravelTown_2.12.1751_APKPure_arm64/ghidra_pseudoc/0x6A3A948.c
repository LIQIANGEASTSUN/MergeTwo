/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3A948; Merger.MergeBoard.View.Items.MergeBoardItemsContainer.AddBoardItem; status ok */


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

long * Merger_MergeBoard_View_Items_MergeBoardItemsContainer__AddBoardItem
                 (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000007e2a55e & 1) == 0) {
    func_0x03280a18(PTR_DAT_078094e0);
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_0782f760);
    bRam0000000007e2a55e = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar2 = func_0x069578fc(*(long *)(param_1 + 0x30),1,0), lVar2 != 0)) {
    plVar3 = (long *)func_0x03dc9518(lVar2,*(undefined8 *)PTR_DAT_078094e0);
    lVar2 = func_0x06fdf130(lVar2,0);
    if ((*(long *)(param_1 + 0x28) != 0) &&
       ((lVar4 = func_0x06b31ae8(*(long *)(param_1 + 0x28),param_2), lVar4 != 0 &&
        (func_0x06fea928(lVar4,0), lVar2 != 0)))) {
      func_0x06fea9c8(lVar2,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar5 = func_0x06b31a40(*(long *)(param_1 + 0x28),param_3);
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar6 = func_0x06b44698(*(long *)(param_1 + 0x38));
          if ((*(long *)(param_1 + 0x38) != 0) &&
             (uVar7 = func_0x06b44708(*(long *)(param_1 + 0x38)), plVar3 != (long *)0x0)) {
            lVar2 = *plVar3;
            uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077c0858) {
                  puVar8 = (undefined8 *)(lVar2 + (long)(*piVar10 + 0x14) * 0x10 + 0x138);
                  goto LAB_06b3aaa4;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar8 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_077c0858,0x14);
LAB_06b3aaa4:
            (*(code *)*puVar8)(plVar3,uVar5,uVar6,uVar7,puVar8[1]);
            if (*(long *)(param_1 + 0x38) != 0) {
              Merger_MergeBoard_View_Items_MergeBoardItemBehavioursHandler__AttachBehaviours
                        (*(long *)(param_1 + 0x38),plVar3);
              func_0x06b4499c(param_1,param_3,plVar3);
              func_0x06b44a34(param_1,param_2,plVar3);
              return plVar3;
            }
          }
        }
      }
    }
  }
  auVar11 = func_0x03280cac();
  lVar2 = func_0x06fdbed0(auVar11._0_8_,0);
  if (lVar2 == 0) {
    auVar11 = func_0x03280cac();
  }
  else {
    plVar3 = (long *)func_0x06fdf2ec(lVar2,0);
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
  plVar3[4] = auVar11._0_8_;
  func_0x032809c4(plVar3 + 4,auVar11._0_8_);
  plVar3[5] = auVar11._8_8_;
  func_0x032809c4(plVar3 + 5,auVar11._8_8_);
  return plVar3;
}

