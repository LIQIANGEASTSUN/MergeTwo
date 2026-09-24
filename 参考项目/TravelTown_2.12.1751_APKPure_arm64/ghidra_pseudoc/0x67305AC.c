/* Ghidra 12.1.2 native pseudocode; RVA 0x67305AC; Merger.Game.Views.BoardItem.BoardItemView2.RegisterExistingBoardItemViewBehaviours; status ok */

/* WARNING: Possible PIC construction at 0x0683063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06830640) */

void Merger_Game_Views_BoardItem_BoardItemView2__RegisterExistingBoardItemViewBehaviours
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong in_x4;
  int *piVar12;
  long *plVar13;
  undefined *puVar14;
  undefined8 *unaff_x22;
  undefined *unaff_x23;
  undefined *puVar15;
  undefined *unaff_x24;
  undefined *puVar16;
  undefined8 unaff_x25;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  long *plStack_58;
  undefined8 auStack_50 [2];
  long lStack_40;
  long *plStack_38;
  
  puVar14 = PTR_DAT_0780d7b8;
  puVar5 = &stack0xffffffffffffffd0;
  if ((bRam0000000007e2897d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7b8);
    bRam0000000007e2897d = 1;
  }
  lVar6 = func_0x03ced324(param_1,*(undefined8 *)puVar14);
  lVar8 = 0x7e28000;
  if (lVar6 == 0) {
LAB_06830664:
    plVar13 = (long *)func_0x03280cac();
    auStack_50[0] = 0x6830668;
    lStack_40 = lVar8;
    plStack_38 = param_1;
    if ((bRam0000000007e28981 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780d7c0);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0780d7c8);
      bRam0000000007e28981 = 1;
    }
    puVar1 = PTR_DAT_0774e4e0;
    if (*(char *)((long)plVar13 + 0xa1) == '\0') {
      return;
    }
    lVar8 = func_0x03280b88(*(undefined8 *)
                             (*plVar13 + (ulong)*(ushort *)(*(long *)PTR_DAT_0780d7c0 + 0x50) * 0x10
                             + 0x140));
    lVar8 = (**(code **)(lVar8 + 8))(plVar13,lVar8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar1);
    }
    uVar11 = func_0x06fdeb74(lVar8,0,0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x48) != 0)) {
      func_0x0336f398(*(long *)(lVar8 + 0x48),*(undefined8 *)PTR_DAT_0780d7c8,0,0,0,0);
      *(undefined1 *)((long)plVar13 + 0xa1) = 0;
      return;
    }
    plVar9 = (long *)func_0x03280cac();
    puVar4 = &uStack_70;
    uStack_70 = 0x6830758;
    puStack_68 = puVar14;
    lStack_60 = lVar8;
    plStack_58 = plVar13;
    lVar8 = func_0x069aaf28(plVar9,0);
    puVar14 = (undefined *)0x7e16000;
    if (cRam0000000007e16829 == '\0') {
      func_0x03280a18(PTR_DAT_077500e8);
      cRam0000000007e16829 = '\x01';
    }
    if (lVar8 == 0) {
      uVar17 = 0x68307cc;
      plVar10 = (long *)func_0x03280cac();
      lVar8 = 0;
    }
    else {
      func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                      *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar8,0);
      puVar4 = auStack_50;
      plVar10 = plVar9;
      plVar9 = plStack_58;
      lVar8 = lStack_60;
      puVar14 = puStack_68;
      uVar17 = uStack_70;
    }
    puVar16 = PTR_DAT_0780d7f0;
    puVar3 = PTR_DAT_0780d7e8;
    puVar15 = PTR_DAT_0780d7e0;
    puVar2 = PTR_DAT_0780d7d8;
    puVar1 = PTR_DAT_0780d7d0;
    puVar5 = (undefined1 *)((long)puVar4 + -0x40);
    *(undefined8 *)((long)puVar4 + -0x40) = uVar17;
    *(undefined8 *)((long)puVar4 + -0x38) = unaff_x25;
    *(undefined **)((long)puVar4 + -0x30) = unaff_x24;
    *(undefined **)((long)puVar4 + -0x28) = unaff_x23;
    *(undefined8 **)((long)puVar4 + -0x20) = unaff_x22;
    *(undefined **)((long)puVar4 + -0x18) = puVar14;
    *(long *)((long)puVar4 + -0x10) = lVar8;
    *(long **)((long)puVar4 + -8) = plVar9;
    if ((bRam0000000007e28982 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780d7f8);
      func_0x03280a18(PTR_DAT_0780d7d8);
      func_0x03280a18(PTR_DAT_0780d7e8);
      func_0x03280a18(PTR_DAT_0780d7e0);
      func_0x03280a18(PTR_DAT_0780d7d0);
      func_0x03280a18(PTR_DAT_0780d800);
      func_0x03280a18(PTR_DAT_0780d808);
      func_0x03280a18(PTR_DAT_0780d810);
      func_0x03280a18(PTR_DAT_0780d818);
      func_0x03280a18(PTR_DAT_0780d7f0);
      bRam0000000007e28982 = 1;
    }
    lVar8 = plVar10[0x12];
    uVar17 = func_0x03280ca0(*(undefined8 *)puVar1);
    uVar11 = 0;
    func_0x0534d2a4(uVar17,plVar10,*(undefined8 *)puVar2);
    uVar17 = func_0x03d85c08(lVar8,uVar17,*(undefined8 *)puVar15);
    lVar6 = func_0x03d5afd0(uVar17,*(undefined8 *)puVar3);
    lVar8 = *(long *)puVar16;
    plVar9 = (long *)plVar10[0x12];
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c(lVar8);
      lVar8 = *(long *)puVar16;
    }
    puVar14 = PTR_DAT_0780d810;
    unaff_x22 = *(undefined8 **)(*(long *)(lVar8 + 0xb8) + 8);
    if (unaff_x22 == (undefined8 *)0x0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        func_0x03280b8c(lVar8);
        lVar8 = *(long *)puVar16;
      }
      puVar15 = (undefined *)**(undefined8 **)(lVar8 + 0xb8);
      unaff_x22 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0780d7f8);
      uVar11 = 0;
      func_0x0541a7c0(unaff_x22,puVar15,*(undefined8 *)PTR_DAT_0780d818);
      puVar7 = (undefined8 *)(*(long *)(*(long *)puVar16 + 0xb8) + 8);
      *puVar7 = unaff_x22;
      func_0x032809c4(puVar7,unaff_x22);
    }
    puVar7 = *(undefined8 **)puVar14;
    func_0x03e0ea40(plVar9,unaff_x22);
    if (lVar6 != 0) {
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        plVar9 = (long *)0x0;
        plVar13 = (long *)(*(ulong *)(lVar6 + 0x18) & 0xffffffff);
        unaff_x22 = (undefined8 *)(lVar6 + 0x28);
        do {
          if (plVar13 <= plVar9) {
            func_0x03280cb4();
            goto LAB_068309cc;
          }
          puVar7 = (undefined8 *)unaff_x22[-1];
          uVar11 = 0;
          func_0x06830d14(plVar10,*unaff_x22);
          plVar13 = (long *)(ulong)*(uint *)(lVar6 + 0x18);
          plVar9 = (long *)((long)plVar9 + 1);
          unaff_x22 = unaff_x22 + 2;
        } while ((long)plVar9 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      return;
    }
LAB_068309cc:
    uVar17 = 0x68309d0;
    auVar18 = func_0x03280cac();
    plVar13 = auVar18._8_8_;
    param_1 = auVar18._0_8_;
  }
  else {
    if (*(int *)(lVar6 + 0x18) < 1) {
      return;
    }
    unaff_x22 = (undefined8 *)0x0;
    lVar8 = lVar6;
    if (*(int *)(lVar6 + 0x18) == 0) {
      func_0x03280cb4();
      goto LAB_06830664;
    }
    plVar13 = *(long **)(lVar6 + 0x20);
    puVar14 = (undefined *)0x0;
    if (plVar13 == (long *)0x0) goto LAB_06830664;
    puVar7 = (undefined8 *)func_0x057dadc4(plVar13,0);
    uVar11 = 1;
    in_x4 = 0;
    uVar17 = 0x6830640;
    plVar10 = param_1;
    plVar9 = plVar13;
    puVar15 = unaff_x23;
    puVar16 = unaff_x24;
  }
  *(undefined8 *)(puVar5 + -0x40) = uVar17;
  *(undefined **)(puVar5 + -0x30) = puVar16;
  *(undefined **)(puVar5 + -0x28) = puVar15;
  *(undefined8 **)(puVar5 + -0x20) = unaff_x22;
  *(long **)(puVar5 + -0x18) = plVar9;
  *(long *)(puVar5 + -0x10) = lVar6;
  *(long **)(puVar5 + -8) = plVar10;
  if ((bRam0000000007e2897f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d820);
    func_0x03280a18(PTR_DAT_0776d970);
    func_0x03280a18(PTR_DAT_0780d828);
    bRam0000000007e2897f = 1;
  }
  if (param_1[0x12] != 0) {
    func_0x04fe2d7c(param_1[0x12],puVar7,plVar13,*(undefined8 *)PTR_DAT_0780d820);
    if ((uVar11 & 1) != 0) {
      if (param_1[0x13] == 0) goto LAB_06830b04;
      func_0x053c1024(param_1[0x13],puVar7,*(undefined8 *)PTR_DAT_0776d970);
    }
    if ((in_x4 & 1) == 0) {
      return;
    }
    if (plVar13 != (long *)0x0) {
      lVar8 = *plVar13;
      lVar6 = param_1[6];
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0780d828) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06830ae0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0780d828,0);
LAB_06830ae0:
                    /* WARNING: Could not recover jumptable at 0x06830b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar7)(plVar13,lVar6,param_1,puVar7[1]);
      return;
    }
  }
LAB_06830b04:
  lVar8 = func_0x03280cac();
  *(undefined8 *)(puVar5 + -0x70) = 0x6830b08;
  *(ulong *)(puVar5 + -0x68) = uVar11 & 0xffffffff;
  *(undefined8 **)(puVar5 + -0x60) = puVar7;
  *(ulong *)(puVar5 + -0x58) = in_x4 & 0xffffffff;
  *(long **)(puVar5 + -0x50) = param_1;
  *(long **)(puVar5 + -0x48) = plVar13;
  if ((bRam0000000007e2897e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d830);
    func_0x03280a18(PTR_DAT_0780d838);
    func_0x03280a18(PTR_DAT_0780d840);
    func_0x03280a18(PTR_DAT_0780d828);
    func_0x03280a18(PTR_DAT_0780d848);
    bRam0000000007e2897e = 1;
  }
  *(undefined8 *)(puVar5 + -0x90) = 0;
  *(undefined8 *)(puVar5 + -0x88) = 0;
  *(undefined8 *)(puVar5 + -0x80) = 0;
  if ((*(long *)(lVar8 + 0x90) != 0) &&
     (lVar6 = func_0x04fe2bac(*(long *)(lVar8 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8),
     puVar2 = PTR_DAT_0780d838, puVar1 = PTR_DAT_0780d830, puVar14 = PTR_DAT_0780d828, lVar6 != 0))
  {
    func_0x04816768(puVar5 + -0xa8,lVar6,*(undefined8 *)PTR_DAT_0780d848);
    *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0xa0);
    *(undefined8 *)(puVar5 + -0x90) = *(undefined8 *)(puVar5 + -0xa8);
    *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x98);
    while( true ) {
      uVar11 = func_0x05160714(puVar5 + -0x90,*(undefined8 *)puVar2);
      if ((uVar11 & 1) == 0) {
        func_0x05160710(puVar5 + -0x90,*(undefined8 *)puVar1);
        goto LAB_06830c6c;
      }
      plVar13 = *(long **)(puVar5 + -0x80);
      if (plVar13 == (long *)0x0) break;
      lVar6 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar14) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_06830c40;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar14,4);
LAB_06830c40:
      uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      if ((uVar11 & 1) != 0) {
        func_0x05160710(puVar5 + -0x90,*(undefined8 *)puVar1);
        return;
      }
    }
    func_0x03280cac();
    puVar7 = (undefined8 *)puVar1;
  }
  auVar19 = func_0x03280cac();
  if (auVar19._8_4_ == 1) {
    plVar13 = (long *)func_0x072ce910(auVar19._0_8_);
    lVar6 = *plVar13;
    func_0x072ce920();
    func_0x05160710(puVar5 + -0x90,*puVar7);
    if (lVar6 == 0) {
LAB_06830c6c:
      func_0x0678ebfc(lVar8,0);
      return;
    }
    func_0x03280ca4(lVar6);
  }
  func_0x05160710(puVar5 + -0x90,*puVar7);
  func_0x03365958(auVar19._0_8_);
  func_0x03280ca4(0);
  lVar8 = func_0x02f09514();
  *(undefined1 *)(lVar8 + 0xa1) = 1;
  return;
}

