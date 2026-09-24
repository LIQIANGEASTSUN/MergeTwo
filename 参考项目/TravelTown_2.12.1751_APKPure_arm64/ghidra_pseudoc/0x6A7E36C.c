/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7E36C; Merger.MergeBoard.Models.ViewportMergeBoardModel.DisposeModel; status ok */


/* WARNING: Possible PIC construction at 0x06b7e5cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b7e5d0) */
/* WARNING: Removing unreachable block (ram,0x06b7e5f0) */
/* WARNING: Removing unreachable block (ram,0x06b7e5f8) */

undefined8 * Merger_MergeBoard_Models_ViewportMergeBoardModel__DisposeModel(long param_1)

{
  ulong *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  
  puVar5 = PTR_DAT_078322d0;
  puVar3 = PTR_DAT_0774e758;
  lVar9 = *(long *)(param_1 + 0x30);
  if (lVar9 == 0) {
    auVar17 = func_0x03280cac();
    puVar5 = PTR_DAT_078170a0;
    puVar3 = PTR_DAT_0776f8e0;
    uVar10 = auVar17._8_8_;
    if ((bRam0000000007e2a751 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e598);
      func_0x03280a18(PTR_DAT_07825950);
      func_0x03280a18(PTR_DAT_0776f8e0);
      func_0x03280a18(PTR_DAT_078170a0);
      func_0x03280a18(PTR_DAT_078259d8);
      bRam0000000007e2a751 = 1;
    }
    puVar11 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x05ac10bc(puVar11,0);
    lVar9 = *(long *)puVar5;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar9 = *(long *)puVar5;
    }
    if (**(long **)(lVar9 + 0xb8) != 0) {
      uVar13 = func_0x04fe2f70(**(long **)(lVar9 + 0xb8),uVar10,*(undefined8 *)PTR_DAT_07825950);
      if ((uVar13 & 1) == 0) {
        uVar10 = func_0x055ea7a0(*(undefined8 *)PTR_DAT_078259d8,uVar10,0);
        if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_0774e598);
        }
        func_0x06faa078(uVar10,0);
      }
      else {
        lVar9 = *auVar17._0_8_;
        (**(code **)(lVar9 + 0x1d8))(auVar17._0_8_,uVar10,*(undefined8 *)(lVar9 + 0x1e0));
      }
      return puVar11;
    }
    auVar17 = func_0x03280cac();
    puVar5 = PTR_DAT_07823d98;
    puVar3 = PTR_DAT_0776f8e0;
    if ((bRam0000000007e2a752 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e598);
      func_0x03280a18(PTR_DAT_07787028);
      func_0x03280a18(PTR_DAT_077688a0);
      func_0x03280a18(PTR_DAT_07823d98);
      func_0x03280a18(PTR_DAT_0776f8e0);
      func_0x03280a18(PTR_DAT_07831a28);
      bRam0000000007e2a752 = 1;
    }
    puVar4 = PTR_DAT_077688a0;
    uVar10 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x05ac10bc(uVar10,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    puVar3 = PTR_DAT_07787028;
    uVar10 = func_0x069a9514(auVar17._8_8_,0);
    uVar10 = func_0x05708c94(uVar10,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar4);
    }
    uVar10 = func_0x03debcac(uVar10,*(undefined8 *)puVar3);
    puVar11 = (undefined8 *)(auVar17._0_8_ + 0x10);
    *puVar11 = uVar10;
  }
  else {
    if ((bRam0000000007e2a7fa & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c3b50,0);
      func_0x03280a18(PTR_DAT_0774e758);
      func_0x03280a18(PTR_DAT_077c0950);
      func_0x03280a18(PTR_DAT_078322d0);
      func_0x03280a18(PTR_DAT_078322d8);
      func_0x03280a18(PTR_DAT_078322e0);
      func_0x03280a18(PTR_DAT_078322e8);
      bRam0000000007e2a7fa = 1;
    }
    plVar16 = *(long **)(lVar9 + 0x18);
    uVar10 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x056ed730(uVar10,lVar9,*(undefined8 *)puVar5,0);
    puVar4 = PTR_DAT_078322e0;
    puVar5 = PTR_DAT_077c3b50;
    if (plVar16 != (long *)0x0) {
      lVar12 = *plVar16;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077c0950) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_06b93884;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_077c0950,1);
LAB_06b93884:
      (*(code *)*puVar11)(plVar16,uVar10,puVar11[1]);
      lVar12 = *(long *)(lVar9 + 0x10);
      uVar10 = func_0x03280ca0(*(undefined8 *)puVar5);
      func_0x054221d4(uVar10,lVar9,*(undefined8 *)puVar4,0);
      puVar4 = PTR_DAT_078322e8;
      if (lVar12 != 0) {
        func_0x06015ec4(lVar12,uVar10,0);
        lVar12 = *(long *)(lVar9 + 0x10);
        uVar10 = func_0x03280ca0(*(undefined8 *)puVar5);
        func_0x054221d4(uVar10,lVar9,*(undefined8 *)puVar4,0);
        puVar5 = PTR_DAT_078322d8;
        if (lVar12 != 0) {
          func_0x06016024(lVar12,uVar10,0);
          lVar12 = *(long *)(lVar9 + 0x10);
          uVar10 = func_0x03280ca0(*(undefined8 *)puVar3);
          func_0x056ed730(uVar10,lVar9,*(undefined8 *)puVar5,0);
          if (lVar12 != 0) {
            if ((bRam0000000007e22c64 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758,uVar10,0);
              bRam0000000007e22c64 = 1;
            }
            puVar3 = PTR_DAT_0774e758;
            plVar16 = (long *)(lVar12 + 0x20);
            puVar11 = (undefined8 *)*plVar16;
            while ((plVar7 = (long *)func_0x057ddd18(puVar11,uVar10,0), plVar7 == (long *)0x0 ||
                   (*plVar7 == *(long *)puVar3))) {
              puVar8 = (undefined8 *)func_0x032dd140(plVar16,plVar7,puVar11);
              bVar6 = puVar11 == puVar8;
              puVar11 = puVar8;
              if (bVar6) {
                return puVar8;
              }
            }
            lVar9 = func_0x03281048(plVar7);
            return *(undefined8 **)(lVar9 + 0x28);
          }
        }
      }
    }
    lVar9 = func_0x03280cac();
    Merger_MergeBoard_Handlers_ViewportEntitiesHolder__RefreshActiveIndices();
    if ((bRam0000000007e2a7ff & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c1d30);
      func_0x03280a18(PTR_DAT_077c1d38);
      func_0x03280a18(PTR_DAT_077c1d40);
      func_0x03280a18(PTR_DAT_078322f0);
      bRam0000000007e2a7ff = 1;
    }
    puVar4 = PTR_DAT_078322f0;
    puVar5 = PTR_DAT_077c1d38;
    puVar3 = PTR_DAT_077c1d30;
    if (*(long *)(lVar9 + 0x10) == 0) {
      lVar9 = func_0x03280cac();
      return *(undefined8 **)(lVar9 + 0x28);
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x28);
    uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077c1d40);
    func_0x05355fbc(uVar10,lVar9,*(undefined8 *)puVar4,0);
    uVar10 = func_0x03d872a8(uVar15,uVar10,*(undefined8 *)puVar5);
    uVar10 = func_0x03d5ffd0(uVar10,*(undefined8 *)puVar3);
    puVar11 = (undefined8 *)(lVar9 + 0x28);
    *puVar11 = uVar10;
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar11;
}

