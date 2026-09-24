/* Ghidra 12.1.2 native pseudocode; RVA 0x6730668; Merger.Game.Views.BoardItem.BoardItemView2.TryResetAnimation; status ok */

void Merger_Game_Views_BoardItem_BoardItemView2__TryResetAnimation(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code **ppcVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong in_x4;
  ulong uVar13;
  int *piVar14;
  undefined8 unaff_x21;
  undefined8 uVar15;
  undefined8 unaff_x22;
  undefined8 *puVar16;
  undefined8 unaff_x23;
  undefined *puVar17;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  code *pcStack_40;
  
  if ((bRam0000000007e28981 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7c0);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0780d7c8);
    bRam0000000007e28981 = 1;
  }
  puVar1 = PTR_DAT_0774e4e0;
  if (*(char *)((long)param_1 + 0xa1) == '\0') {
    return;
  }
  lVar6 = func_0x03280b88(*(undefined8 *)
                           (*param_1 + (ulong)*(ushort *)(*(long *)PTR_DAT_0780d7c0 + 0x50) * 0x10 +
                           0x140));
  lVar6 = (**(code **)(lVar6 + 8))(param_1,lVar6);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar1);
  }
  uVar7 = func_0x06fdeb74(lVar6,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x48) != 0)) {
    func_0x0336f398(*(long *)(lVar6 + 0x48),*(undefined8 *)PTR_DAT_0780d7c8,0,0,0,0);
    *(undefined1 *)((long)param_1 + 0xa1) = 0;
    return;
  }
  plVar8 = (long *)func_0x03280cac();
  ppcVar5 = &pcStack_40;
  pcStack_40 = Merger_Game_Views_BoardItem_BoardItemView2__Dispose;
  lVar9 = func_0x069aaf28(plVar8,0);
  uVar15 = 0x7e16000;
  if (cRam0000000007e16829 == '\0') {
    func_0x03280a18(PTR_DAT_077500e8);
    cRam0000000007e16829 = '\x01';
  }
  if (lVar9 == 0) {
    pcVar18 = (code *)0x68307cc;
    plVar10 = (long *)func_0x03280cac();
    lVar6 = 0;
  }
  else {
    func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                    *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar9,0);
    ppcVar5 = (code **)&stack0xffffffffffffffe0;
    plVar10 = plVar8;
    plVar8 = param_1;
    uVar15 = unaff_x21;
    pcVar18 = pcStack_40;
  }
  puVar4 = PTR_DAT_0780d7f0;
  puVar3 = PTR_DAT_0780d7e8;
  puVar17 = PTR_DAT_0780d7e0;
  puVar2 = PTR_DAT_0780d7d8;
  puVar1 = PTR_DAT_0780d7d0;
  *(code **)((long)ppcVar5 + -0x40) = pcVar18;
  *(undefined8 *)((long)ppcVar5 + -0x38) = unaff_x25;
  *(undefined8 *)((long)ppcVar5 + -0x30) = unaff_x24;
  *(undefined8 *)((long)ppcVar5 + -0x28) = unaff_x23;
  *(undefined8 *)((long)ppcVar5 + -0x20) = unaff_x22;
  *(undefined8 *)((long)ppcVar5 + -0x18) = uVar15;
  *(long *)((long)ppcVar5 + -0x10) = lVar6;
  *(long **)((long)ppcVar5 + -8) = plVar8;
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
  lVar6 = plVar10[0x12];
  uVar15 = func_0x03280ca0(*(undefined8 *)puVar1);
  uVar12 = 0;
  func_0x0534d2a4(uVar15,plVar10,*(undefined8 *)puVar2);
  uVar15 = func_0x03d85c08(lVar6,uVar15,*(undefined8 *)puVar17);
  lVar6 = func_0x03d5afd0(uVar15,*(undefined8 *)puVar3);
  lVar9 = *(long *)puVar4;
  uVar7 = plVar10[0x12];
  if (*(int *)(lVar9 + 0xe0) == 0) {
    func_0x03280b8c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar1 = PTR_DAT_0780d810;
  puVar16 = *(undefined8 **)(*(long *)(lVar9 + 0xb8) + 8);
  if (puVar16 == (undefined8 *)0x0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c(lVar9);
      lVar9 = *(long *)puVar4;
    }
    puVar17 = (undefined *)**(undefined8 **)(lVar9 + 0xb8);
    puVar16 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0780d7f8);
    uVar12 = 0;
    func_0x0541a7c0(puVar16,puVar17,*(undefined8 *)PTR_DAT_0780d818);
    puVar11 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *puVar11 = puVar16;
    func_0x032809c4(puVar11,puVar16);
  }
  puVar11 = *(undefined8 **)puVar1;
  func_0x03e0ea40(uVar7,puVar16);
  if (lVar6 != 0) {
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar7 = 0;
      uVar13 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      puVar16 = (undefined8 *)(lVar6 + 0x28);
      do {
        if (uVar13 <= uVar7) {
          func_0x03280cb4();
          goto LAB_068309cc;
        }
        puVar11 = (undefined8 *)puVar16[-1];
        uVar12 = 0;
        Merger_Game_Views_BoardItem_BoardItemView2__RemoveBehaviour(plVar10,*puVar16);
        uVar13 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
        puVar16 = puVar16 + 2;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    return;
  }
LAB_068309cc:
  auVar19 = func_0x03280cac();
  plVar8 = auVar19._8_8_;
  lVar9 = auVar19._0_8_;
  *(code **)((long)ppcVar5 + -0x80) = Merger_Game_Views_BoardItem_BoardItemView2__RegisterBehaviour;
  *(undefined **)((long)ppcVar5 + -0x70) = puVar4;
  *(undefined **)((long)ppcVar5 + -0x68) = puVar17;
  *(undefined8 **)((long)ppcVar5 + -0x60) = puVar16;
  *(ulong *)((long)ppcVar5 + -0x58) = uVar7;
  *(long *)((long)ppcVar5 + -0x50) = lVar6;
  *(long **)((long)ppcVar5 + -0x48) = plVar10;
  if ((bRam0000000007e2897f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d820);
    func_0x03280a18(PTR_DAT_0776d970);
    func_0x03280a18(PTR_DAT_0780d828);
    bRam0000000007e2897f = 1;
  }
  if (*(long *)(lVar9 + 0x90) != 0) {
    func_0x04fe2d7c(*(long *)(lVar9 + 0x90),puVar11,plVar8,*(undefined8 *)PTR_DAT_0780d820);
    if ((uVar12 & 1) != 0) {
      if (*(long *)(lVar9 + 0x98) == 0) goto LAB_06830b04;
      func_0x053c1024(*(long *)(lVar9 + 0x98),puVar11,*(undefined8 *)PTR_DAT_0776d970);
    }
    if ((in_x4 & 1) == 0) {
      return;
    }
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      uVar15 = *(undefined8 *)(lVar9 + 0x30);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0780d828) {
            puVar16 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06830ae0;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0780d828,0);
LAB_06830ae0:
                    /* WARNING: Could not recover jumptable at 0x06830b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar16)(plVar8,uVar15,lVar9,puVar16[1]);
      return;
    }
  }
LAB_06830b04:
  lVar6 = func_0x03280cac();
  *(code **)((long)ppcVar5 + -0xb0) = Merger_Game_Views_BoardItem_BoardItemView2__PointerClicked;
  *(ulong *)((long)ppcVar5 + -0xa8) = uVar12 & 0xffffffff;
  *(undefined8 **)((long)ppcVar5 + -0xa0) = puVar11;
  *(ulong *)((long)ppcVar5 + -0x98) = in_x4 & 0xffffffff;
  *(undefined1 (*) [16])((long)ppcVar5 + -0x90) = auVar19;
  if ((bRam0000000007e2897e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d830);
    func_0x03280a18(PTR_DAT_0780d838);
    func_0x03280a18(PTR_DAT_0780d840);
    func_0x03280a18(PTR_DAT_0780d828);
    func_0x03280a18(PTR_DAT_0780d848);
    bRam0000000007e2897e = 1;
  }
  *(undefined8 *)((long)ppcVar5 + -0xd0) = 0;
  *(undefined8 *)((long)ppcVar5 + -200) = 0;
  *(undefined8 *)((long)ppcVar5 + -0xc0) = 0;
  if ((*(long *)(lVar6 + 0x90) != 0) &&
     (lVar9 = func_0x04fe2bac(*(long *)(lVar6 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8),
     puVar17 = PTR_DAT_0780d838, puVar2 = PTR_DAT_0780d830, puVar1 = PTR_DAT_0780d828, lVar9 != 0))
  {
    func_0x04816768((undefined1 *)((long)ppcVar5 + -0xe8),lVar9,*(undefined8 *)PTR_DAT_0780d848);
    *(undefined8 *)((long)ppcVar5 + -200) = *(undefined8 *)((long)ppcVar5 + -0xe0);
    *(undefined8 *)((long)ppcVar5 + -0xd0) = *(undefined8 *)((long)ppcVar5 + -0xe8);
    *(undefined8 *)((long)ppcVar5 + -0xc0) = *(undefined8 *)((long)ppcVar5 + -0xd8);
    while( true ) {
      uVar7 = func_0x05160714((undefined1 *)((long)ppcVar5 + -0xd0),*(undefined8 *)puVar17);
      if ((uVar7 & 1) == 0) {
        func_0x05160710((undefined1 *)((long)ppcVar5 + -0xd0),*(undefined8 *)puVar2);
        goto LAB_06830c6c;
      }
      plVar8 = *(long **)((long)ppcVar5 + -0xc0);
      if (plVar8 == (long *)0x0) break;
      lVar9 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar16 = (undefined8 *)(lVar9 + (long)(*piVar14 + 4) * 0x10 + 0x138);
            goto LAB_06830c40;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar1,4);
LAB_06830c40:
      uVar7 = (*(code *)*puVar16)(plVar8,puVar16[1]);
      if ((uVar7 & 1) != 0) {
        func_0x05160710((undefined1 *)((long)ppcVar5 + -0xd0),*(undefined8 *)puVar2);
        return;
      }
    }
    func_0x03280cac();
    puVar11 = (undefined8 *)puVar2;
  }
  auVar20 = func_0x03280cac();
  if (auVar20._8_4_ == 1) {
    plVar8 = (long *)func_0x072ce910(auVar20._0_8_);
    lVar9 = *plVar8;
    func_0x072ce920();
    func_0x05160710((undefined1 *)((long)ppcVar5 + -0xd0),*puVar11);
    if (lVar9 == 0) {
LAB_06830c6c:
      func_0x0678ebfc(lVar6,0);
      return;
    }
    func_0x03280ca4(lVar9);
  }
  func_0x05160710((undefined1 *)((long)ppcVar5 + -0xd0),*puVar11);
  func_0x03365958(auVar20._0_8_);
  func_0x03280ca4(0);
  lVar6 = func_0x02f09514();
  *(undefined1 *)(lVar6 + 0xa1) = 1;
  return;
}

