/* Ghidra 12.1.2 native pseudocode; RVA 0x6730758; Merger.Game.Views.BoardItem.BoardItemView2.Dispose; status ok */

void Merger_Game_Views_BoardItem_BoardItemView2__Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong in_x4;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar13;
  long *plVar14;
  undefined8 unaff_x21;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 unaff_x22;
  undefined8 *puVar17;
  undefined8 unaff_x23;
  undefined *puVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x30;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  
  puVar5 = &stack0xffffffffffffffe0;
  lVar6 = func_0x069aaf28(param_1,0);
  uVar15 = 0x7e16000;
  if (cRam0000000007e16829 == '\0') {
    func_0x03280a18(PTR_DAT_077500e8);
    cRam0000000007e16829 = '\x01';
  }
  if (lVar6 == 0) {
    unaff_x30 = 0x68307cc;
    lVar6 = func_0x03280cac();
    unaff_x20 = 0;
  }
  else {
    func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                    *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar6,0);
    puVar5 = (undefined1 *)register0x00000008;
    lVar6 = param_1;
    param_1 = unaff_x19;
    uVar15 = unaff_x21;
  }
  puVar4 = PTR_DAT_0780d7f0;
  puVar3 = PTR_DAT_0780d7e8;
  puVar18 = PTR_DAT_0780d7e0;
  puVar2 = PTR_DAT_0780d7d8;
  puVar1 = PTR_DAT_0780d7d0;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x30;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x30) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x28) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x22;
  *(undefined8 *)(puVar5 + -0x18) = uVar15;
  *(undefined8 *)(puVar5 + -0x10) = unaff_x20;
  *(long *)(puVar5 + -8) = param_1;
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
  uVar13 = *(undefined8 *)(lVar6 + 0x90);
  uVar15 = func_0x03280ca0(*(undefined8 *)puVar1);
  uVar9 = 0;
  func_0x0534d2a4(uVar15,lVar6,*(undefined8 *)puVar2);
  uVar15 = func_0x03d85c08(uVar13,uVar15,*(undefined8 *)puVar18);
  lVar7 = func_0x03d5afd0(uVar15,*(undefined8 *)puVar3);
  lVar10 = *(long *)puVar4;
  uVar16 = *(ulong *)(lVar6 + 0x90);
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x03280b8c(lVar10);
    lVar10 = *(long *)puVar4;
  }
  puVar1 = PTR_DAT_0780d810;
  puVar17 = *(undefined8 **)(*(long *)(lVar10 + 0xb8) + 8);
  if (puVar17 == (undefined8 *)0x0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c(lVar10);
      lVar10 = *(long *)puVar4;
    }
    puVar18 = (undefined *)**(undefined8 **)(lVar10 + 0xb8);
    puVar17 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0780d7f8);
    uVar9 = 0;
    func_0x0541a7c0(puVar17,puVar18,*(undefined8 *)PTR_DAT_0780d818);
    puVar8 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *puVar8 = puVar17;
    func_0x032809c4(puVar8,puVar17);
  }
  puVar8 = *(undefined8 **)puVar1;
  func_0x03e0ea40(uVar16,puVar17);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar16 = 0;
      uVar11 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      puVar17 = (undefined8 *)(lVar7 + 0x28);
      do {
        if (uVar11 <= uVar16) {
          func_0x03280cb4();
          goto LAB_068309cc;
        }
        puVar8 = (undefined8 *)puVar17[-1];
        uVar9 = 0;
        func_0x06830d14(lVar6,*puVar17);
        uVar11 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar16 = uVar16 + 1;
        puVar17 = puVar17 + 2;
      } while ((long)uVar16 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return;
  }
LAB_068309cc:
  auVar19 = func_0x03280cac();
  plVar14 = auVar19._8_8_;
  lVar10 = auVar19._0_8_;
  *(undefined8 *)(puVar5 + -0x80) = 0x68309d0;
  *(undefined **)(puVar5 + -0x70) = puVar4;
  *(undefined **)(puVar5 + -0x68) = puVar18;
  *(undefined8 **)(puVar5 + -0x60) = puVar17;
  *(ulong *)(puVar5 + -0x58) = uVar16;
  *(long *)(puVar5 + -0x50) = lVar7;
  *(long *)(puVar5 + -0x48) = lVar6;
  if ((bRam0000000007e2897f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d820);
    func_0x03280a18(PTR_DAT_0776d970);
    func_0x03280a18(PTR_DAT_0780d828);
    bRam0000000007e2897f = 1;
  }
  if (*(long *)(lVar10 + 0x90) != 0) {
    func_0x04fe2d7c(*(long *)(lVar10 + 0x90),puVar8,plVar14,*(undefined8 *)PTR_DAT_0780d820);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar10 + 0x98) == 0) goto LAB_06830b04;
      func_0x053c1024(*(long *)(lVar10 + 0x98),puVar8,*(undefined8 *)PTR_DAT_0776d970);
    }
    if ((in_x4 & 1) == 0) {
      return;
    }
    if (plVar14 != (long *)0x0) {
      lVar6 = *plVar14;
      uVar15 = *(undefined8 *)(lVar10 + 0x30);
      uVar16 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar16 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0780d828) {
            puVar17 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06830ae0;
          }
          uVar16 = uVar16 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar16 != 0);
      }
      puVar17 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0780d828,0);
LAB_06830ae0:
                    /* WARNING: Could not recover jumptable at 0x06830b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar17)(plVar14,uVar15,lVar10,puVar17[1]);
      return;
    }
  }
LAB_06830b04:
  lVar6 = func_0x03280cac();
  *(undefined8 *)(puVar5 + -0xb0) = 0x6830b08;
  *(ulong *)(puVar5 + -0xa8) = uVar9 & 0xffffffff;
  *(undefined8 **)(puVar5 + -0xa0) = puVar8;
  *(ulong *)(puVar5 + -0x98) = in_x4 & 0xffffffff;
  *(undefined1 (*) [16])(puVar5 + -0x90) = auVar19;
  if ((bRam0000000007e2897e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d830);
    func_0x03280a18(PTR_DAT_0780d838);
    func_0x03280a18(PTR_DAT_0780d840);
    func_0x03280a18(PTR_DAT_0780d828);
    func_0x03280a18(PTR_DAT_0780d848);
    bRam0000000007e2897e = 1;
  }
  *(undefined8 *)(puVar5 + -0xd0) = 0;
  *(undefined8 *)(puVar5 + -200) = 0;
  *(undefined8 *)(puVar5 + -0xc0) = 0;
  if ((*(long *)(lVar6 + 0x90) != 0) &&
     (lVar7 = func_0x04fe2bac(*(long *)(lVar6 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8),
     puVar18 = PTR_DAT_0780d838, puVar2 = PTR_DAT_0780d830, puVar1 = PTR_DAT_0780d828, lVar7 != 0))
  {
    func_0x04816768(puVar5 + -0xe8,lVar7,*(undefined8 *)PTR_DAT_0780d848);
    *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -0xe0);
    *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0xe8);
    *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0xd8);
    while( true ) {
      uVar16 = func_0x05160714(puVar5 + -0xd0,*(undefined8 *)puVar18);
      if ((uVar16 & 1) == 0) {
        func_0x05160710(puVar5 + -0xd0,*(undefined8 *)puVar2);
        goto LAB_06830c6c;
      }
      plVar14 = *(long **)(puVar5 + -0xc0);
      if (plVar14 == (long *)0x0) break;
      lVar7 = *plVar14;
      uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar16 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar17 = (undefined8 *)(lVar7 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_06830c40;
          }
          uVar16 = uVar16 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar16 != 0);
      }
      puVar17 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar1,4);
LAB_06830c40:
      uVar16 = (*(code *)*puVar17)(plVar14,puVar17[1]);
      if ((uVar16 & 1) != 0) {
        func_0x05160710(puVar5 + -0xd0,*(undefined8 *)puVar2);
        return;
      }
    }
    func_0x03280cac();
    puVar8 = (undefined8 *)puVar2;
  }
  auVar20 = func_0x03280cac();
  if (auVar20._8_4_ == 1) {
    plVar14 = (long *)func_0x072ce910(auVar20._0_8_);
    lVar7 = *plVar14;
    func_0x072ce920();
    func_0x05160710(puVar5 + -0xd0,*puVar8);
    if (lVar7 == 0) {
LAB_06830c6c:
      func_0x0678ebfc(lVar6,0);
      return;
    }
    func_0x03280ca4(lVar7);
  }
  func_0x05160710(puVar5 + -0xd0,*puVar8);
  func_0x03365958(auVar20._0_8_);
  func_0x03280ca4(0);
  lVar6 = func_0x02f09514();
  *(undefined1 *)(lVar6 + 0xa1) = 1;
  return;
}

