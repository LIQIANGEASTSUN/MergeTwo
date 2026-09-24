/* Ghidra 12.1.2 native pseudocode; RVA 0x6A30E14; Merger.MergeBoard.ViewModel.BoardItemBehavioursHandlerViewModel.TryGetBundlePath; status ok */


ulong Merger_MergeBoard_ViewModel_BoardItemBehavioursHandlerViewModel__TryGetBundlePath
                (undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auVar14 [12];
  
  lVar11 = 0x7e2a000;
  if ((bRam0000000007e2a48a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077806f8);
    func_0x03280a18(PTR_DAT_07780700);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0780dd88);
    bRam0000000007e2a48a = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_06b31074:
    *param_3 = 0;
    func_0x032809c4(param_3,0);
    uVar12 = 0;
LAB_06b31088:
    return (ulong)uVar12;
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077806f8) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_06b30ed4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_077806f8,0);
LAB_06b30ed4:
  plVar6 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
  puVar3 = PTR_DAT_0780dd88;
  puVar2 = PTR_DAT_07780700;
  puVar1 = PTR_DAT_0774e8e0;
  if (plVar6 == (long *)0x0) {
LAB_06b310a4:
    func_0x03280cac();
    goto LAB_06b310a8;
  }
  do {
    lVar11 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06b30f4c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar1,0);
LAB_06b30f4c:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      uVar12 = 0;
      iVar13 = 6;
      goto joined_r0x06b31000;
    }
    lVar11 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06b30fa8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar2,0);
LAB_06b30fa8:
    lVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (lVar11 == 0) {
      func_0x03280cac();
      lVar11 = 0;
      goto LAB_06b310a4;
    }
    uVar9 = func_0x055ea870(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)puVar3,0);
  } while ((uVar9 & 1) == 0);
  *param_3 = *(undefined8 *)(lVar11 + 0x18);
  func_0x032809c4(param_3);
  uVar12 = 1;
  iVar13 = 5;
joined_r0x06b31000:
  lVar11 = 0;
  do {
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b31058;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b31058:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
    }
    if (lVar11 == 0) {
      if ((iVar13 == 0) || (iVar13 == 6)) goto LAB_06b31074;
      goto LAB_06b31088;
    }
LAB_06b310a8:
    auVar14 = func_0x03280ca4(lVar11);
    if (auVar14._8_4_ != 1) break;
    plVar7 = (long *)func_0x072ce910(auVar14._0_8_);
    lVar11 = *plVar7;
    func_0x072ce920();
    iVar13 = 0;
    uVar12 = 0;
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar11 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06b31154;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b31154:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  func_0x03365958(auVar14._0_8_);
  func_0x03280ca4(0);
  uVar9 = func_0x02f09514();
  puVar1 = PTR_DAT_0782f3d0;
  if ((bRam0000000007e2a48b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f3d0);
    bRam0000000007e2a48b = 1;
  }
  *(undefined8 *)(uVar9 + 0x90) = *(undefined8 *)puVar1;
  func_0x032809c4();
  puVar2 = PTR_DAT_07828a38;
  puVar1 = PTR_DAT_07828a30;
  if ((bRam0000000007e29c54 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07828a38,0);
    func_0x03280a18(PTR_DAT_07828a30);
    bRam0000000007e29c54 = 1;
  }
  uVar4 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x053bfe40(uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(uVar9 + 0x60) = uVar4;
  func_0x032809c4((undefined8 *)(uVar9 + 0x60),uVar4);
  return uVar9;
}

