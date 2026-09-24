/* Ghidra 12.1.2 native pseudocode; RVA 0x6A31A40; Merger.MergeBoard.ViewModel.MergeBoardItemCreatorViewModel.GetVisualAdapter; status ok */


long Merger_MergeBoard_ViewModel_MergeBoardItemCreatorViewModel__GetVisualAdapter
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar2 = PTR_DAT_0782f3e0;
  if ((bRam0000000007e2a496 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f3e8);
    func_0x03280a18(PTR_DAT_0782f3e0);
    bRam0000000007e2a496 = 1;
  }
  lVar11 = *(long *)(param_1 + 0x68);
  lVar6 = func_0x03280afc(*(undefined8 *)puVar2,1);
  if (lVar6 == 0) {
LAB_06b31ae0:
    func_0x03280cac();
LAB_06b31ae4:
    auVar13 = func_0x03280cb4();
    if ((bRam0000000007e2a497 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c1e40);
      bRam0000000007e2a497 = 1;
    }
    plVar5 = *(long **)(auVar13._0_8_ + 0x70);
    if (plVar5 == (long *)0x0) {
      auVar13 = func_0x03280cac();
      if ((bRam0000000007e2a498 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077c13c8);
        bRam0000000007e2a498 = 1;
      }
      plVar5 = *(long **)(auVar13._0_8_ + 0x78);
      if (plVar5 == (long *)0x0) {
        auVar13 = func_0x03280cac();
        if ((bRam0000000007e2a499 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077c13c8);
          bRam0000000007e2a499 = 1;
        }
        plVar5 = *(long **)(auVar13._0_8_ + 0x78);
        if (plVar5 == (long *)0x0) {
          lVar6 = func_0x03280cac();
          puVar3 = PTR_DAT_07828a38;
          puVar2 = PTR_DAT_07828a30;
          if ((bRam0000000007e29c54 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07828a38,0);
            func_0x03280a18(PTR_DAT_07828a30);
            bRam0000000007e29c54 = 1;
          }
          uVar12 = func_0x03280ca0(*(undefined8 *)puVar2);
          func_0x053bfe40(uVar12,*(undefined8 *)puVar3);
          *(undefined8 *)(lVar6 + 0x60) = uVar12;
          func_0x032809c4((undefined8 *)(lVar6 + 0x60),uVar12);
          return lVar6;
        }
        lVar6 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077c13c8) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_06b31ccc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077c13c8,1);
LAB_06b31ccc:
                    /* WARNING: Could not recover jumptable at 0x06b31ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar6 = (*(code *)*puVar8)(plVar5,auVar13._8_8_ & 0xffffffff,puVar8[1]);
        return lVar6;
      }
      lVar6 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077c13c8) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_06b31c20;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077c13c8,2);
LAB_06b31c20:
                    /* WARNING: Could not recover jumptable at 0x06b31c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar6 = (*(code *)*puVar8)(plVar5,auVar13._8_8_ & 0xffffffff,puVar8[1]);
      return lVar6;
    }
    lVar6 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077c1e40) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06b31b74;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077c1e40,0);
LAB_06b31b74:
                    /* WARNING: Could not recover jumptable at 0x06b31b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (*(code *)*puVar8)(plVar5,auVar13._8_8_ & 0xffffffff,puVar8[1]);
    return lVar6;
  }
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06b31ae4;
  *(undefined8 *)(lVar6 + 0x20) = param_2;
  func_0x032809c4((undefined8 *)(lVar6 + 0x20),param_2);
  if (lVar11 == 0) goto LAB_06b31ae0;
  lVar7 = *(long *)PTR_DAT_0782f3e8;
  puVar8 = *(undefined8 **)(lVar7 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0774e558);
    func_0x03280a18(PTR_DAT_07779ae8);
    puVar8 = *(undefined8 **)(lVar7 + 0x38);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x03256878(lVar7);
      puVar8 = *(undefined8 **)(lVar7 + 0x38);
    }
  }
  uVar12 = *puVar8;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar12,0);
  plVar5 = (long *)func_0x072af328(lVar11,uVar12,lVar6,0);
  if (*(char *)(lVar11 + 0xa2) == '\0') {
LAB_03d04eb8:
    lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c(lVar6);
    }
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    lVar11 = func_0x03280b90(plVar5,lVar6);
    if (lVar11 != 0) {
      return lVar11;
    }
    func_0x03281048(plVar5,lVar6);
  }
  else {
    lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c(lVar6);
    }
    lVar6 = func_0x03280b90(plVar5,lVar6);
    if (lVar6 != 0) goto LAB_03d04eb8;
  }
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07779ae8 + 0x130);
    if (bVar1 <= *(byte *)(*plVar5 + 0x130)) {
      bVar4 = *(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_07779ae8;
      goto LAB_03d04f34;
    }
  }
  bVar4 = false;
LAB_03d04f34:
  func_0x0727dc78(bVar4,0);
  return 0;
}

