/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3B850; Merger.MergeBoard.View.MergeBoardView.BoardItemDragEnded; status ok */


long Merger_MergeBoard_View_MergeBoardView__BoardItemDragEnded
               (undefined1 param_1 [16],ulong param_2,long param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
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
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  plVar13 = (long *)0x7e2a000;
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
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  if ((param_5 == 0) || (param_4 == (long *)0x0)) goto LAB_06b3bbb4;
  lVar9 = *param_4;
  uVar17 = *(undefined4 *)(param_5 + 0x104);
  uVar16 = (ulong)*(uint *)(param_5 + 0x108);
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077c0858) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
        goto LAB_06b3b948;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(param_4,*(long *)PTR_DAT_077c0858,3);
LAB_06b3b948:
  plVar7 = (long *)(*(code *)*puVar6)(param_4,puVar6[1]);
  if (plVar7 == (long *)0x0) goto LAB_06b3bbb4;
  lVar9 = *plVar7;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077c1d88) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x73) * 0x10 + 0x138);
        goto LAB_06b3b9b4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_077c1d88,0x73);
LAB_06b3b9b4:
  uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
  if ((uVar10 & 1) != 0) goto LAB_06b3bb78;
  plVar13 = plVar7;
  if (*(long *)(param_3 + 0x30) == 0) goto LAB_06b3bbb4;
  plVar13 = (long *)func_0x06fdbe94(*(long *)(param_3 + 0x30),0);
  uVar8 = func_0x07263114(param_5,0);
  if (*(int *)(*(long *)PTR_DAT_0776bdc8 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)PTR_DAT_0776bdc8);
    if (plVar13 == (long *)0x0) goto LAB_06b3ba28;
LAB_06b3ba00:
    plVar7 = plVar13;
    if (*plVar13 != *(long *)PTR_DAT_077502a0) {
      plVar7 = (long *)0x0;
    }
  }
  else {
    if (plVar13 != (long *)0x0) goto LAB_06b3ba00;
LAB_06b3ba28:
    plVar7 = (long *)0x0;
  }
  uVar10 = func_0x072369e0(uVar17,plVar7,uVar8,&uStack_48,0);
  if ((uVar10 & 1) == 0) goto LAB_06b3bb78;
  lVar9 = *param_4;
  lVar12 = *(long *)(param_3 + 0x30);
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        param_2 = uVar16;
        goto LAB_06b3ba9c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(param_4,*(long *)puVar2,1);
  param_2 = uVar16;
LAB_06b3ba9c:
  uVar8 = (*(code *)*puVar6)(param_4,puVar6[1]);
  uVar8 = Merger_MergeBoard_Extensions_MergeBoardLayoutExtensions__GetTransformForPosition
                    (lVar12,uVar8,0);
  if ((lVar12 != 0) &&
     (uVar10 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetIndexForTransform(lVar12,uVar8),
     uStack_50 = uVar10, *(long *)(param_3 + 0x30) != 0)) {
    param_2 = uStack_48 >> 0x20;
    uVar8 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetTransformForPosition
                      (uStack_48 & 0xffffffff);
    if (*(long *)(param_3 + 0x30) != 0) {
      uStack_58 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetIndexForTransform
                            (*(long *)(param_3 + 0x30),uVar8);
      puVar2 = PTR_DAT_07763678;
      if (((uVar10 & 0xff) == 0) || ((uStack_58 & 0xff) == 0)) {
LAB_06b3bb78:
        func_0x06b3b1bc(param_3);
        *(undefined8 *)(param_3 + 0x90) = 0;
        func_0x032809c4((undefined8 *)(param_3 + 0x90),0);
        lVar9 = func_0x06b3b63c(param_3);
        *(undefined1 *)(param_3 + 0x98) = 0;
        return lVar9;
      }
      plVar13 = *(long **)(param_3 + 0x28);
      uVar17 = func_0x0437b6f8(&uStack_50,*(undefined8 *)PTR_DAT_07763678);
      uVar4 = func_0x0437b6f8(&uStack_58,*(undefined8 *)puVar2);
      if ((plVar13 != (long *)0x0) && (plVar13[0xd] != 0)) {
        func_0x06b9b490(plVar13[0xd],uVar17,uVar4,0);
        lVar9 = *(long *)(param_3 + 0x48);
        uVar17 = func_0x0437b6f8(&uStack_58,*(undefined8 *)puVar2);
        if ((lVar9 != 0) &&
           (Merger_MergeBoard_View_MergeBoardSelectorView__SetSelectedItem(lVar9,uVar17),
           *(long *)(param_3 + 0x48) != 0)) {
          Merger_MergeBoard_View_MergeBoardSelectorView__Show();
          goto LAB_06b3bb78;
        }
      }
    }
  }
LAB_06b3bbb4:
  lVar9 = func_0x03280cac();
  uVar10 = param_2;
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
  if (*(long *)(lVar9 + 0x30) != 0) {
    iVar5 = func_0x04f35808(*(long *)(lVar9 + 0x30),*(undefined8 *)PTR_DAT_0782f770);
    puVar3 = PTR_DAT_0782f5f0;
    puVar2 = PTR_DAT_0782f5e8;
    if (iVar5 == 0) {
      return 0;
    }
    if (*(long *)(lVar9 + 0x30) != 0) {
      func_0x04f35f90(&uStack_100,*(long *)(lVar9 + 0x30),*(undefined8 *)PTR_DAT_0782f5e0);
      puVar1 = PTR_DAT_0774ee08;
      lVar9 = 0;
      fVar18 = 3.4028235e+38;
      while( true ) {
        fVar15 = (float)uVar10;
        uVar10 = func_0x05147e9c(&uStack_100,*(undefined8 *)puVar3);
        lVar12 = lStack_e8;
        if ((uVar10 & 1) == 0) {
          func_0x05147fc0(&uStack_100,*(undefined8 *)puVar2);
          return lVar9;
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
        uVar10 = (ulong)(uint)fVar15;
        fVar15 = SQRT((extraout_s0 - fVar14) * (extraout_s0 - fVar14) + fVar15);
        if (fVar15 < fVar18) {
          lVar9 = lVar12;
          fVar18 = fVar15;
        }
      }
      func_0x03280cac();
      plVar13 = (long *)puVar2;
    }
  }
  auVar19 = func_0x03280cac();
  if (auVar19._8_4_ == 1) {
    plVar7 = (long *)func_0x072ce910(auVar19._0_8_);
    lVar12 = *plVar7;
    func_0x072ce920();
    func_0x05147fc0(&uStack_100,*plVar13);
    if (lVar12 == 0) {
      return lVar9;
    }
    func_0x03280ca4(lVar12);
  }
  func_0x05147fc0(&uStack_100,*plVar13);
  func_0x03365958(auVar19._0_8_);
  func_0x03280ca4(0);
  auVar19 = func_0x02f09514();
  lVar9 = func_0x057da5fc(auVar19._0_8_,0);
  *(int *)(auVar19._0_8_ + 0x10) = auVar19._8_4_;
  return lVar9;
}

