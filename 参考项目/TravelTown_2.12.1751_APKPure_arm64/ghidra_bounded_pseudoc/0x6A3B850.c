/* Ghidra 12.1.2 bounded pseudocode; RVA 0x6A3B850; bound 872 bytes; Merger.MergeBoard.View.MergeBoardView.BoardItemDragEnded; status ok */


/* WARNING: Possible PIC construction at 0x06b3badc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b3bae0) */
/* WARNING: Removing unreachable block (ram,0x06b3bae8) */
/* WARNING: Removing unreachable block (ram,0x06b3bb00) */
/* WARNING: Removing unreachable block (ram,0x06b3bb08) */
/* WARNING: Removing unreachable block (ram,0x06b3bb34) */
/* WARNING: Removing unreachable block (ram,0x06b3bb40) */
/* WARNING: Removing unreachable block (ram,0x06b3bb60) */
/* WARNING: Removing unreachable block (ram,0x06b3bb74) */

long Merger_MergeBoard_View_MergeBoardView__BoardItemDragEnded
               (undefined1 param_1 [16],ulong param_2,long param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  float extraout_s0;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auVar19 [12];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_48;
  
  plVar12 = (long *)0x7e2a000;
  if ((bRam0000000007e2a4f5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_077c1d88);
    func_0x03280a18(PTR_DAT_077628e8);
    func_0x03280a18(PTR_DAT_07763678);
    func_0x03280a18(PTR_DAT_0776bdc8);
    func_0x03280a18(PTR_DAT_077502a0);
    func_0x03280a18(PTR_DAT_0782f5d8);
    bRam0000000007e2a4f5 = 1;
  }
  puVar2 = PTR_DAT_077c0858;
  uStack_48 = 0;
  if ((param_5 != 0) && (param_4 != (long *)0x0)) {
    lVar8 = *param_4;
    uVar17 = *(undefined4 *)(param_5 + 0x104);
    uVar16 = (ulong)*(uint *)(param_5 + 0x108);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077c0858) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_06b3b948;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_4,*(long *)PTR_DAT_077c0858,3);
LAB_06b3b948:
    plVar6 = (long *)(*(code *)*puVar5)(param_4,puVar5[1]);
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077c1d88) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x73) * 0x10 + 0x138);
            goto LAB_06b3b9b4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_077c1d88,0x73);
LAB_06b3b9b4:
      uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar9 & 1) != 0) goto LAB_06b3bb78;
      plVar12 = plVar6;
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_06b3bbb4;
      plVar12 = (long *)func_0x06fdbe94(*(long *)(param_3 + 0x30),0);
      uVar7 = func_0x07263114(param_5,0);
      if (*(int *)(*(long *)PTR_DAT_0776bdc8 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0776bdc8);
        if (plVar12 == (long *)0x0) goto LAB_06b3ba28;
LAB_06b3ba00:
        plVar6 = plVar12;
        if (*plVar12 != *(long *)PTR_DAT_077502a0) {
          plVar6 = (long *)0x0;
        }
      }
      else {
        if (plVar12 != (long *)0x0) goto LAB_06b3ba00;
LAB_06b3ba28:
        plVar6 = (long *)0x0;
      }
      uVar9 = func_0x072369e0(uVar17,plVar6,uVar7,&uStack_48,0);
      if ((uVar9 & 1) == 0) {
LAB_06b3bb78:
        func_0x06b3b1bc(param_3);
        *(undefined8 *)(param_3 + 0x90) = 0;
        func_0x032809c4((undefined8 *)(param_3 + 0x90),0);
        lVar8 = func_0x06b3b63c(param_3);
        *(undefined1 *)(param_3 + 0x98) = 0;
        return lVar8;
      }
      lVar8 = *param_4;
      lVar11 = *(long *)(param_3 + 0x30);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            param_2 = uVar16;
            goto LAB_06b3ba9c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(param_4,*(long *)puVar2,1);
      param_2 = uVar16;
LAB_06b3ba9c:
      uVar7 = (*(code *)*puVar5)(param_4,puVar5[1]);
      uVar7 = func_0x06b9932c(lVar11,uVar7,0);
      if (lVar11 != 0) {
        func_0x06b36d80(lVar11,uVar7);
        lVar8 = *(long *)(param_3 + 0x30);
        if (lVar8 != 0) {
          fVar13 = (float)uStack_48;
          param_2 = uStack_48 >> 0x20;
          goto code_r0x06b3bbb8;
        }
      }
    }
  }
LAB_06b3bbb4:
  lVar8 = func_0x03280cac();
  fVar13 = extraout_s0;
code_r0x06b3bbb8:
  uVar9 = param_2;
  if ((bRam0000000007e2a547 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f5e0);
    func_0x03280a18(PTR_DAT_0782f770);
    func_0x03280a18(PTR_DAT_0782f5e8);
    func_0x03280a18(PTR_DAT_0782f5f0);
    func_0x03280a18(PTR_DAT_0782f5f8);
    func_0x03280a18(PTR_DAT_0782f608);
    bRam0000000007e2a547 = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_e8 = 0;
  uStack_f0 = 0;
  if (*(long *)(lVar8 + 0x30) != 0) {
    iVar4 = func_0x04f35808(*(long *)(lVar8 + 0x30),*(undefined8 *)PTR_DAT_0782f770);
    puVar3 = PTR_DAT_0782f5f0;
    puVar2 = PTR_DAT_0782f5e8;
    if (iVar4 == 0) {
      return 0;
    }
    if (*(long *)(lVar8 + 0x30) != 0) {
      func_0x04f35f90(&uStack_100,*(long *)(lVar8 + 0x30),*(undefined8 *)PTR_DAT_0782f5e0);
      puVar1 = PTR_DAT_0774ee08;
      lVar8 = 0;
      fVar18 = 3.4028235e+38;
      while( true ) {
        fVar15 = (float)uVar9;
        uVar9 = func_0x05147e9c(&uStack_100,*(undefined8 *)puVar3);
        lVar11 = lStack_e8;
        if ((uVar9 & 1) == 0) {
          func_0x05147fc0(&uStack_100,*(undefined8 *)puVar2);
          return lVar8;
        }
        if (lStack_e8 == 0) break;
        fVar14 = (float)func_0x06fe9aec(lStack_e8,0);
        if (cRam0000000007e136da == '\0') {
          func_0x03280a18(puVar1);
          cRam0000000007e136da = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        fVar15 = (float)param_2 - fVar15;
        fVar15 = fVar15 * fVar15;
        uVar9 = (ulong)(uint)fVar15;
        fVar15 = SQRT((fVar13 - fVar14) * (fVar13 - fVar14) + fVar15);
        if (fVar15 < fVar18) {
          lVar8 = lVar11;
          fVar18 = fVar15;
        }
      }
      func_0x03280cac();
      plVar12 = (long *)puVar2;
    }
  }
  auVar19 = func_0x03280cac();
  if (auVar19._8_4_ == 1) {
    plVar6 = (long *)func_0x072ce910(auVar19._0_8_);
    lVar11 = *plVar6;
    func_0x072ce920();
    func_0x05147fc0(&uStack_100,*plVar12);
    if (lVar11 == 0) {
      return lVar8;
    }
    func_0x03280ca4(lVar11);
  }
  func_0x05147fc0(&uStack_100,*plVar12);
  func_0x03365958(auVar19._0_8_);
  func_0x03280ca4(0);
  auVar19 = func_0x02f09514();
  lVar8 = func_0x057da5fc(auVar19._0_8_,0);
  *(int *)(auVar19._0_8_ + 0x10) = auVar19._8_4_;
  return lVar8;
}

