/* Ghidra 12.1.2 native pseudocode; RVA 0x6623D34; Merger.Game.ViewModel.BoardUIViewModel.CheckShowMetaTutorial; status ok */


ulong Merger_Game_ViewModel_BoardUIViewModel__CheckShowMetaTutorial(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  if ((bRam0000000007e27dc2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772910);
    func_0x03280a18(PTR_DAT_077726c0);
    func_0x03280a18(PTR_DAT_077ec098);
    func_0x03280a18(PTR_DAT_077d4dc8);
    func_0x03280a18(PTR_DAT_07774290);
    bRam0000000007e27dc2 = 1;
  }
  plVar13 = *(long **)(param_1 + 0xe8);
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077d4dc8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar12 + 5) * 0x10 + 0x138);
          goto LAB_06723df0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077d4dc8,5);
LAB_06723df0:
    uVar11 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    if ((uVar11 & 1) != 0) {
      return 0;
    }
    plVar13 = *(long **)(param_1 + 0xd8);
    if (plVar13 != (long *)0x0) {
      lVar7 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077726c0) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto LAB_06723e68;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077726c0,3);
LAB_06723e68:
      lVar7 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      if ((lVar7 != 0) && (plVar13 = *(long **)(param_1 + 0xe0), plVar13 != (long *)0x0)) {
        lVar8 = *plVar13;
        iVar1 = *(int *)(lVar7 + 0x20);
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077ec098) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06723ed8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077ec098,0);
LAB_06723ed8:
        lVar7 = (*(code *)*puVar5)(plVar13,puVar5[1]);
        if (lVar7 != 0) {
          bVar4 = 0;
          if (*(char *)(lVar7 + 0x20) == '\0') {
LAB_06723f10:
            return (ulong)((bVar4 & iVar1 == 0) != 0);
          }
          lVar7 = func_0x06723b50(param_1);
          if (lVar7 != 0) {
            bVar4 = func_0x066106dc(lVar7,0);
            bVar4 = bVar4 & 1;
            goto LAB_06723f10;
          }
        }
      }
    }
  }
  auVar14 = func_0x03280cac();
  puVar2 = PTR_DAT_077730b8;
  lVar7 = auVar14._0_8_;
  if ((bRam0000000007e27dc3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077726c0);
    func_0x03280a18(PTR_DAT_0777efc0);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e27dc3 = 1;
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar8 = *(long *)puVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x1b8);
  if (lVar8 != 0) {
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar11 = 0;
      uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar11) goto LAB_067240dc;
        func_0x06212e98(lVar7,*(undefined8 *)(lVar8 + 0x20 + uVar11 * 8),auVar14._8_8_,0,0);
        uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    plVar13 = *(long **)(lVar7 + 0xd8);
    if (plVar13 != (long *)0x0) {
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077726c0) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_06724048;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077726c0,5);
LAB_06724048:
      uVar11 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      if (uVar11 != 0) {
        if (*(int *)(uVar11 + 0x20) == 0) {
          uVar11 = *(ulong *)puVar2;
          if (*(int *)(uVar11 + 0xe0) == 0) {
            func_0x03280b8c();
            uVar11 = *(ulong *)puVar2;
          }
          lVar8 = *(long *)(*(long *)(uVar11 + 0xb8) + 0x1b0);
          if (lVar8 == 0) goto LAB_062130b4;
          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
            uVar9 = 0;
            uVar10 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if (uVar10 <= uVar9) goto LAB_067240dc;
              uVar11 = func_0x06212bc0(lVar7,*(undefined8 *)(lVar8 + 0x20 + uVar9 * 8),auVar14._8_8_
                                       ,3,0);
              uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
          }
        }
        return uVar11;
      }
    }
  }
LAB_062130b4:
  uVar11 = func_0x03280cac();
  puVar3 = PTR_DAT_07828a38;
  puVar2 = PTR_DAT_07828a30;
  if ((bRam0000000007e29c54 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07828a38,0);
    func_0x03280a18(PTR_DAT_07828a30);
    bRam0000000007e29c54 = 1;
  }
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x053bfe40(uVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(uVar11 + 0x60) = uVar6;
  func_0x032809c4((undefined8 *)(uVar11 + 0x60),uVar6);
  return uVar11;
LAB_067240dc:
  func_0x03280cb4();
  goto LAB_062130b4;
}

