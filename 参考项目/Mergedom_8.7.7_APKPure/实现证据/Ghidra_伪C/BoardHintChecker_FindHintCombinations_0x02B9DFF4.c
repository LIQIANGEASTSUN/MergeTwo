
void Recovered_BoardHintChecker_FindHintCombinations_0x02B9DFF4(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  if ((bRam00000000068128b9 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f9e98);
    func_0x02ad6de0(PTR_DAT_063f9ea0);
    func_0x02ad6de0(PTR_DAT_063f9ea8);
    func_0x02ad6de0(PTR_DAT_063f9eb0);
    func_0x02ad6de0(PTR_DAT_063f9eb8);
    func_0x02ad6de0(PTR_DAT_063f9ec0);
    func_0x02ad6de0(PTR_DAT_063f9ec8);
    func_0x02ad6de0(PTR_DAT_063f9ed0);
    func_0x02ad6de0(PTR_DAT_063f9ed8);
    func_0x02ad6de0(PTR_DAT_063f9ee0);
    func_0x02ad6de0(PTR_DAT_063f9ee8);
    func_0x02ad6de0(PTR_DAT_063f9ef0);
    bRam00000000068128b9 = 1;
  }
  puVar19 = (undefined8 *)PTR_DAT_063f9ef0;
  puVar6 = PTR_DAT_063f9ed8;
  puVar5 = PTR_DAT_063f9ec8;
  puVar4 = PTR_DAT_063f9ec0;
  puVar20 = (undefined8 *)PTR_DAT_063f9ea8;
  uStack_70 = 0;
  uStack_98 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x0496c728(&uStack_c0,*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_063f9eb0);
    uStack_70 = uStack_a0;
    puStack_88 = puStack_b8;
    uStack_90 = uStack_c0;
    lStack_78 = lStack_a8;
    uStack_80 = uStack_b0;
    uStack_c0 = 0;
    puStack_b8 = &uStack_90;
    while (uVar8 = func_0x04bbe320(&uStack_90,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
      if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
      func_0x02c9e46c();
    }
    func_0x04bbe440(&uStack_90,*(undefined8 *)puVar4);
    plVar18 = *(long **)(param_1 + 0x18);
    if (plVar18 != (long *)0x0) {
      lVar13 = *plVar18;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_02c9e1a8;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)func_0x02b0e364(plVar18,*(long *)puVar6,1);
LAB_02c9e1a8:
      lVar13 = (*(code *)*puVar9)(plVar18,puVar9[1]);
      puVar4 = PTR_DAT_063f13f8;
      if (lVar13 != 0) {
        uVar8 = *(ulong *)(lVar13 + 0x18);
        iVar12 = (int)uVar8;
        if (iVar12 == 0) {
LAB_02c9e3fc:
                    /* WARNING: Subroutine does not return */
          BoundsThrowHelper();
        }
        if (*(long *)(lVar13 + 0x20) != 0) {
          if (0 < iVar12) {
            uVar22 = *(undefined8 *)(*(long *)(lVar13 + 0x20) + 0x18);
            uVar21 = 0;
            do {
              iVar12 = (int)uVar22;
              if (0 < iVar12) {
                lVar23 = 0;
                do {
                  if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_02c9e3fc;
                  lVar14 = *(long *)(lVar13 + uVar21 * 8 + 0x20);
                  if (lVar14 == 0) goto LAB_02c9e3f8;
                  if (*(uint *)(lVar14 + 0x18) <= (uint)lVar23) goto LAB_02c9e3fc;
                  lVar14 = *(long *)(lVar14 + lVar23 * 8 + 0x20);
                  if (lVar14 == 0) goto LAB_02c9e3f8;
                  uVar10 = Recovered_BoardSlot_get_IsEmpty_0x2b9e508(lVar14);
                  if (((uVar10 & 1) == 0) && (*(char *)(lVar14 + 0x2d) == '\0')) {
                    plVar18 = *(long **)(lVar14 + 0x30);
                    if (plVar18 == (long *)0x0) goto LAB_02c9e3f8;
                    uVar10 = (**(code **)(*plVar18 + 600))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x260));
                    if ((uVar10 & 1) != 0) {
                      if (plVar18[10] == 0) goto LAB_02c9e3f8;
                      iVar2 = *(int *)(plVar18[10] + 0x30);
                      if (cRam0000000006812711 == '\0') {
                        func_0x02ad6de0(puVar4);
                        cRam0000000006812711 = '\x01';
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        func_0x02ad6f5c();
                      }
                      iVar1 = -iVar2;
                      if (-1 < iVar2) {
                        iVar1 = iVar2;
                      }
                      func_0x03e90ca4(&uStack_98,iVar1,*(undefined4 *)((long)plVar18 + 0x44),
                                      *puVar19);
                      if (*(long *)(param_1 + 0x48) == 0) goto LAB_02c9e3f8;
                      uVar10 = func_0x0496c4e4(*(long *)(param_1 + 0x48),uStack_98,*puVar20);
                      uVar7 = uStack_98;
                      if ((uVar10 & 1) == 0) {
                        lVar14 = *(long *)(param_1 + 0x48);
                        uVar11 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063f9e98);
                        func_0x02c9e568();
                        if (lVar14 == 0) goto LAB_02c9e3f8;
                        func_0x0496c2f0(lVar14,uVar7,uVar11,*(undefined8 *)PTR_DAT_063f9ea0);
                        puVar19 = (undefined8 *)PTR_DAT_063f9ef0;
                        puVar20 = (undefined8 *)PTR_DAT_063f9ea8;
                      }
                      if (*(long *)(param_1 + 0x48) == 0) goto LAB_02c9e3f8;
                      lVar14 = func_0x0496c250(*(long *)(param_1 + 0x48),uStack_98,
                                               *(undefined8 *)PTR_DAT_063f9eb8);
                      if ((char)plVar18[8] == '\0') {
                        if (lVar14 == 0) goto LAB_02c9e3f8;
                        lVar14 = *(long *)(lVar14 + 0x18);
                      }
                      else {
                        if (lVar14 == 0) goto LAB_02c9e3f8;
                        lVar14 = *(long *)(lVar14 + 0x10);
                      }
                      if (lVar14 == 0) goto LAB_02c9e3f8;
                      lVar15 = *(long *)(lVar14 + 0x10);
                      lVar16 = *(long *)PTR_DAT_063f9ee8;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      if (lVar15 == 0) goto LAB_02c9e3f8;
                      uVar3 = *(uint *)(lVar14 + 0x18);
                      if (uVar3 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar14 + 0x18) = uVar3 + 1;
                        puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar3 * 8 + 0x20);
                        *puVar9 = plVar18;
                        func_0x02ad6d8c(puVar9,plVar18);
                      }
                      else {
                        func_0x03c28e30(lVar14,plVar18,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  lVar23 = lVar23 + 1;
                } while (iVar12 != (int)lVar23);
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 != (uVar8 & 0xffffffff));
          }
          return;
        }
      }
    }
  }
LAB_02c9e3f8:
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

