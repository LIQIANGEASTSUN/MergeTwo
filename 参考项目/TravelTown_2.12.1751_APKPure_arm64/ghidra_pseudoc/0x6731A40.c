/* Ghidra 12.1.2 native pseudocode; RVA 0x6731A40; Merger.Game.Views.BoardItem.BoardItemViewBehaviourFactory.CreateExternalAttachers; status ok */


long * Merger_Game_Views_BoardItem_BoardItemViewBehaviourFactory__CreateExternalAttachers
                 (long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  ulong unaff_x22;
  undefined *unaff_x23;
  undefined *puVar15;
  undefined *unaff_x24;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  code *pcStack_90;
  undefined *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  
  plVar12 = (long *)0x7e28000;
  plVar2 = param_1;
  if ((bRam0000000007e2898f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d930);
    plVar2 = (long *)func_0x03280a18(PTR_DAT_07779760);
    bRam0000000007e2898f = 1;
  }
  puVar15 = PTR_DAT_0780d930;
  puVar16 = PTR_DAT_07779760;
  plVar13 = plVar12;
  if (param_2 != 0) {
    uVar5 = *(uint *)(param_2 + 0x18);
    if (0 < (int)uVar5) {
      unaff_x22 = 0;
      do {
        uVar14 = (uint)unaff_x22;
        plVar13 = plVar12;
        if (uVar5 <= uVar14) goto LAB_06831bdc;
        plVar13 = *(long **)(param_2 + (long)(int)uVar14 * 8 + 0x20);
        unaff_x23 = puVar15;
        unaff_x24 = puVar16;
        if (plVar13 == (long *)0x0) goto LAB_06831bd8;
        lVar6 = *plVar13;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar15) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_06831b0c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        param_3 = 0;
        puVar3 = (undefined8 *)func_0x03256b10(plVar13);
LAB_06831b0c:
        plVar12 = (long *)(*(code *)*puVar3)(plVar13,puVar3[1]);
        if (plVar12 == (long *)0x0) goto LAB_06831bd8;
        plVar2 = plVar12;
        if (0 < (int)plVar12[3]) {
          uVar9 = 0;
          uVar7 = plVar12[3] & 0xffffffff;
          do {
            plVar13 = plVar12;
            if (uVar7 <= uVar9) goto LAB_06831bdc;
            lVar6 = param_1[3];
            if (lVar6 == 0) goto LAB_06831bd8;
            lVar4 = plVar12[uVar9 + 4];
            lVar8 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)puVar16;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_06831bd8;
            uVar5 = *(uint *)(lVar6 + 0x18);
            if (uVar5 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar5 + 1;
              plVar2 = (long *)(lVar8 + (long)(int)uVar5 * 8 + 0x20);
              *plVar2 = lVar4;
              plVar2 = (long *)func_0x032809c4(plVar2);
            }
            else {
              param_3 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
              plVar2 = (long *)func_0x0414446c();
            }
            uVar7 = (ulong)*(uint *)(plVar12 + 3);
            uVar9 = uVar9 + 1;
          } while ((long)uVar9 < (long)(int)*(uint *)(plVar12 + 3));
        }
        uVar5 = *(uint *)(param_2 + 0x18);
        unaff_x22 = (ulong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < (int)uVar5);
    }
    return plVar2;
  }
LAB_06831bd8:
  puVar16 = unaff_x24;
  puVar15 = unaff_x23;
  func_0x03280cac();
LAB_06831bdc:
  auVar17 = func_0x03280cb4();
  pcStack_90 = Merger_Game_Views_BoardItem_BoardItemViewBehaviourFactory__AddBehaviours;
  puStack_80 = puVar16;
  puStack_78 = puVar15;
  uStack_70 = unaff_x22;
  plStack_68 = plVar13;
  plStack_60 = param_1;
  lStack_58 = param_2;
  if ((bRam0000000007e28990 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d938);
    func_0x03280a18(PTR_DAT_0780d940);
    func_0x03280a18(PTR_DAT_0780d948);
    func_0x03280a18(PTR_DAT_0780d950);
    func_0x03280a18(PTR_DAT_0780d958);
    bRam0000000007e28990 = 1;
  }
  puVar1 = PTR_DAT_0780d950;
  puVar15 = PTR_DAT_0780d940;
  puVar16 = PTR_DAT_0780d938;
  uStack_a8 = 0;
  uStack_a0 = 0;
  plStack_98 = (long *)0x0;
  lVar6 = *(long *)(auVar17._0_8_ + 0x18);
  puVar3 = (undefined8 *)0x7e28000;
  if (lVar6 != 0) {
    func_0x04145068(&uStack_a8,lVar6,*(undefined8 *)PTR_DAT_0780d958);
    while( true ) {
      uVar9 = func_0x051159b4(&uStack_a8,*(undefined8 *)puVar15);
      plVar2 = plStack_98;
      puVar3 = (undefined8 *)puVar16;
      if ((uVar9 & 1) == 0) {
        func_0x051159b0(&uStack_a8,*(undefined8 *)puVar16);
        goto LAB_06831d14;
      }
      if (plStack_98 == (long *)0x0) break;
      lVar6 = *plStack_98;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06831cf0;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plStack_98,*(long *)puVar1,0);
LAB_06831cf0:
      (*(code *)*puVar3)(plVar2,auVar17._8_8_,param_3,puVar3[1]);
    }
    func_0x03280cac();
  }
  do {
    auVar18 = func_0x03280cac();
    if (auVar18._8_4_ != 1) {
LAB_06831d7c:
      func_0x051159b0(&uStack_a8,*puVar3);
      func_0x03365958(auVar18._0_8_);
      func_0x03280ca4(0);
      lVar6 = func_0x02f09514();
      return *(long **)(lVar6 + 0x60);
    }
    plVar2 = (long *)func_0x072ce910(auVar18._0_8_);
    lVar6 = *plVar2;
    func_0x072ce920();
    func_0x051159b0(&uStack_a8,*puVar3);
    if (lVar6 != 0) {
      func_0x03280ca4(lVar6);
      goto LAB_06831d7c;
    }
LAB_06831d14:
    if (param_3 != 0) {
      plVar2 = (long *)func_0x0683105c(param_3);
      return plVar2;
    }
  } while( true );
}

