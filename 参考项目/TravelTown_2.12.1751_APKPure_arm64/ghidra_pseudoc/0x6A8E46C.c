/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8E46C; Merger.MergeBoard.Logic.BoardOperations.BoardOperationsTracker.Process; status ok */


/* WARNING: Possible PIC construction at 0x06b8e78c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b8e790) */
/* WARNING: Removing unreachable block (ram,0x06b8e798) */
/* WARNING: Removing unreachable block (ram,0x06b8e7b4) */
/* WARNING: Removing unreachable block (ram,0x06b8e7bc) */
/* WARNING: Removing unreachable block (ram,0x06b8e7e4) */
/* WARNING: Removing unreachable block (ram,0x06b8e7c8) */
/* WARNING: Removing unreachable block (ram,0x06b8e7d4) */
/* WARNING: Removing unreachable block (ram,0x06b8e7f0) */

ulong Merger_MergeBoard_Logic_BoardOperations_BoardOperationsTracker__Process
                (ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x1;
  uint uVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined8 unaff_x22;
  long *plVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  ulong uStack_68;
  
  plVar12 = (long *)0x7e2a000;
  uVar3 = param_1;
  if ((bRam0000000007e2a7cf & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831f00);
    func_0x03280a18(PTR_DAT_07831f08);
    func_0x03280a18(PTR_DAT_07831f10);
    func_0x03280a18(PTR_DAT_07831f18);
    func_0x03280a18(PTR_DAT_077c1dd8);
    func_0x03280a18(PTR_DAT_07830308);
    func_0x03280a18(PTR_DAT_077c1dc0);
    uVar3 = func_0x03280a18(PTR_DAT_077c1db8);
    bRam0000000007e2a7cf = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return uVar3;
  }
  uVar5 = unaff_x22;
  if (param_2 == 0) {
LAB_06b8e81c:
    func_0x03280cac();
LAB_06b8e820:
    func_0x03280cb4();
    lVar15 = extraout_x1;
    unaff_x22 = uVar5;
  }
  else {
    uVar3 = func_0x06016624(param_2,0);
    if ((uVar3 & 1) == 0) {
      return uVar3;
    }
    plVar12 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077c1db8);
    func_0x04143c38(plVar12,*(undefined8 *)PTR_DAT_077c1dc0);
    puVar2 = PTR_DAT_07831f10;
    puVar1 = PTR_DAT_07831f00;
    lVar15 = *(long *)(param_1 + 0x18);
    if (lVar15 == 0) goto LAB_06b8e81c;
    uVar9 = *(uint *)(lVar15 + 0x18);
    if (0 < (int)uVar9) {
      uVar16 = 0;
      do {
        uVar5 = unaff_x22;
        if (uVar9 <= uVar16) goto LAB_06b8e820;
        plVar13 = *(long **)(lVar15 + (long)(int)uVar16 * 8 + 0x20);
        if (plVar13 == (long *)0x0) goto LAB_06b8e81c;
        lVar10 = *plVar13;
        lVar8 = *(long *)puVar2;
        uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar3 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar4 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_06b8e5cc;
            }
            uVar3 = uVar3 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar13,lVar8,1);
LAB_06b8e5cc:
        uVar5 = (*(code *)*puVar4)(plVar13,param_2,puVar4[1]);
        uVar3 = func_0x03ce830c(uVar5,*(undefined8 *)puVar1);
        unaff_x22 = uVar5;
        if ((uVar3 & 1) == 0) {
          lVar10 = *plVar13;
          plVar14 = *(long **)(param_1 + 0x10);
          lVar8 = *(long *)puVar2;
          uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar4 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_06b8e63c;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)func_0x03256b10(plVar13,lVar8,0);
LAB_06b8e63c:
          uVar6 = (*(code *)*puVar4)(plVar13,puVar4[1]);
          if (plVar14 == (long *)0x0) goto LAB_06b8e81c;
          lVar10 = *(long *)PTR_DAT_077c1dd8;
          lVar8 = *plVar14;
          uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)(lVar10 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_06b8e6ac;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          lVar8 = func_0x03256b10(plVar14);
LAB_06b8e6ac:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar10);
          unaff_x22 = (**(code **)(lVar8 + 8))(plVar14,uVar6,uVar5,0,lVar8);
          if (plVar12 == (long *)0x0) goto LAB_06b8e81c;
          lVar8 = *plVar12;
          uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07831f18) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_06b8e734;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07831f18,2);
LAB_06b8e734:
          (*(code *)*puVar4)(plVar12,unaff_x22,puVar4[1]);
        }
        uVar9 = *(uint *)(lVar15 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)uVar9);
    }
    uVar3 = func_0x03ce803c(plVar12,*(undefined8 *)PTR_DAT_07831f08);
    lVar15 = param_2;
    if ((uVar3 & 1) != 0) {
      return uVar3;
    }
  }
  puVar2 = PTR_DAT_0775a958;
  puVar1 = PTR_DAT_07750838;
  uStack_80 = unaff_x22;
  plStack_78 = plVar12;
  lStack_70 = param_2;
  uStack_68 = param_1;
  if ((bRam0000000007e2a7d0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077507d0);
    func_0x03280a18(PTR_DAT_0775a958);
    func_0x03280a18(PTR_DAT_07750838);
    func_0x03280a18(PTR_DAT_07831f20);
    func_0x03280a18(PTR_DAT_07779e90);
    bRam0000000007e2a7d0 = 1;
  }
  lStack_88 = 0;
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04fe1fa4(uVar3,*(undefined8 *)puVar2);
  if (lVar15 != 0) {
    uVar7 = func_0x03ec5020(lVar15,&lStack_88,*(undefined8 *)PTR_DAT_07831f20);
    if ((uVar7 & 1) != 0) {
      if ((lStack_88 == 0) || (uVar3 == 0)) goto SUB_057da5fc;
      func_0x04fe2d7c(uVar3,*(undefined8 *)PTR_DAT_07779e90,*(undefined8 *)(lStack_88 + 0x10),
                      *(undefined8 *)PTR_DAT_077507d0);
    }
    return uVar3;
  }
SUB_057da5fc:
  uVar3 = func_0x03280cac();
  return uVar3;
}

