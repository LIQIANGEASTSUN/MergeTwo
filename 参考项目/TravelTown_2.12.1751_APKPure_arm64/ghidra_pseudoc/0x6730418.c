/* Ghidra 12.1.2 native pseudocode; RVA 0x6730418; Merger.Game.Views.BoardItem.BoardItemView2.Initialise; status ok */

/* WARNING: Possible PIC construction at 0x06830524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0683063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06830528) */
/* WARNING: Removing unreachable block (ram,0x06830640) */

void Merger_Game_Views_BoardItem_BoardItemView2__Initialise
               (long *param_1,undefined8 *param_2,long param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  long unaff_x20;
  undefined *unaff_x21;
  undefined8 *unaff_x22;
  undefined *unaff_x23;
  undefined *puVar16;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x30;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined8 auStack_60 [2];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar16 = (undefined *)0x7e28000;
  if ((bRam0000000007e2897c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d798);
    func_0x03280a18(PTR_DAT_0780d7a0);
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d7b0);
    bRam0000000007e2897c = 1;
  }
  param_1[6] = (long)param_2;
  func_0x032809c4(param_1 + 6,param_2);
  param_1[0x11] = param_3;
  func_0x032809c4(param_1 + 0x11,param_3);
  if (param_4 == 0) {
    param_4 = param_1[0x15];
  }
  param_1[0x16] = param_4;
  func_0x032809c4(param_1 + 0x16,param_4);
  func_0x0678e8a0(param_1,0,0);
  lVar7 = func_0x069aaf28(param_1,0);
  if (cRam0000000007e16829 == '\0') {
    func_0x03280a18(PTR_DAT_077500e8);
    cRam0000000007e16829 = '\x01';
  }
  if (lVar7 == 0) {
LAB_068305a8:
    uVar17 = 0x68305ac;
    unaff_x19 = (long *)func_0x03280cac();
SUB_068305ac:
    unaff_x21 = PTR_DAT_0780d7b8;
    puVar6 = auStack_60;
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    uStack_48 = 0x7e16000;
    auStack_60[0] = uVar17;
    puStack_50 = param_2;
    lStack_40 = lVar7;
    plStack_38 = param_1;
    if ((bRam0000000007e2897d & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780d7b8);
      bRam0000000007e2897d = 1;
    }
    lVar7 = func_0x03ced324(unaff_x19,*(undefined8 *)unaff_x21);
    unaff_x20 = 0x7e28000;
    if (lVar7 == 0) {
LAB_06830664:
      unaff_x30 = 0x6830668;
      param_1 = (long *)func_0x03280cac();
      unaff_x23 = puVar16;
      goto LAB_06830668;
    }
    if (*(int *)(lVar7 + 0x18) < 1) {
      return;
    }
    param_2 = (undefined8 *)0x0;
    unaff_x20 = lVar7;
    if (*(int *)(lVar7 + 0x18) == 0) {
      func_0x03280cb4();
      goto LAB_06830664;
    }
    uVar9 = *(ulong *)(lVar7 + 0x20);
    auVar19._8_8_ = uVar9;
    auVar19._0_8_ = unaff_x19;
    unaff_x21 = (undefined *)0x0;
    if (uVar9 == 0) goto LAB_06830664;
    puVar11 = (undefined8 *)func_0x057dadc4(uVar9,0);
    uVar12 = 1;
    param_5 = 0;
    uVar17 = 0x6830640;
  }
  else {
    func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                    *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar7,0);
    puVar3 = PTR_DAT_0780d7b0;
    puVar2 = PTR_DAT_0780d7a0;
    puVar1 = PTR_DAT_0780d798;
    if ((char)param_1[0x14] == '\0') {
      uVar17 = 0x6830528;
      unaff_x19 = param_1;
      goto SUB_068305ac;
    }
    if (param_1[0x12] == 0) goto LAB_068305a8;
    uVar17 = func_0x04fe2bac(param_1[0x12],*(undefined8 *)PTR_DAT_0780d7a8);
    uVar8 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x054221d4(uVar8,param_1,*(undefined8 *)puVar2,0);
    func_0x03e0f058(uVar17,uVar8,*(undefined8 *)puVar3);
    param_2 = unaff_x22;
LAB_06830668:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
    *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long **)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e28981 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780d7c0);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0780d7c8);
      bRam0000000007e28981 = 1;
    }
    puVar16 = PTR_DAT_0774e4e0;
    if (*(char *)((long)param_1 + 0xa1) == '\0') {
      return;
    }
    lVar7 = func_0x03280b88(*(undefined8 *)
                             (*param_1 + (ulong)*(ushort *)(*(long *)PTR_DAT_0780d7c0 + 0x50) * 0x10
                             + 0x140));
    lVar7 = (**(code **)(lVar7 + 8))(param_1,lVar7);
    if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar16);
    }
    uVar9 = func_0x06fdeb74(lVar7,0,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x48) != 0)) {
      func_0x0336f398(*(long *)(lVar7 + 0x48),*(undefined8 *)PTR_DAT_0780d7c8,0,0,0,0);
      *(undefined1 *)((long)param_1 + 0xa1) = 0;
      return;
    }
    plVar10 = (long *)func_0x03280cac();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x6830758;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x30) = lVar7;
    *(long **)((long)register0x00000008 + -0x28) = param_1;
    lVar7 = func_0x069aaf28(plVar10,0);
    uVar17 = 0x7e16000;
    if (cRam0000000007e16829 == '\0') {
      func_0x03280a18(PTR_DAT_077500e8);
      cRam0000000007e16829 = '\x01';
    }
    if (lVar7 == 0) {
      uVar18 = 0x68307cc;
      unaff_x19 = (long *)func_0x03280cac();
      uVar8 = 0;
    }
    else {
      func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                      *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar7,0);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x30);
      puVar5 = (undefined1 *)((long)register0x00000008 + -0x20);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -0x40);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x38);
      unaff_x19 = plVar10;
      plVar10 = *(long **)((long)register0x00000008 + -0x28);
    }
    puVar4 = PTR_DAT_0780d7f0;
    puVar3 = PTR_DAT_0780d7e8;
    puVar16 = PTR_DAT_0780d7e0;
    puVar2 = PTR_DAT_0780d7d8;
    puVar1 = PTR_DAT_0780d7d0;
    puVar6 = (undefined8 *)(puVar5 + -0x40);
    *(undefined8 *)(puVar5 + -0x40) = uVar18;
    *(undefined8 *)(puVar5 + -0x38) = unaff_x25;
    *(undefined **)(puVar5 + -0x30) = unaff_x24;
    *(undefined **)(puVar5 + -0x28) = unaff_x23;
    *(undefined8 **)(puVar5 + -0x20) = param_2;
    *(undefined8 *)(puVar5 + -0x18) = uVar17;
    *(undefined8 *)(puVar5 + -0x10) = uVar8;
    *(long **)(puVar5 + -8) = plVar10;
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
    lVar7 = unaff_x19[0x12];
    uVar17 = func_0x03280ca0(*(undefined8 *)puVar1);
    uVar12 = 0;
    func_0x0534d2a4(uVar17,unaff_x19,*(undefined8 *)puVar2);
    uVar17 = func_0x03d85c08(lVar7,uVar17,*(undefined8 *)puVar16);
    lVar7 = func_0x03d5afd0(uVar17,*(undefined8 *)puVar3);
    lVar13 = *(long *)puVar4;
    uVar9 = unaff_x19[0x12];
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c(lVar13);
      lVar13 = *(long *)puVar4;
    }
    puVar1 = PTR_DAT_0780d810;
    param_2 = *(undefined8 **)(*(long *)(lVar13 + 0xb8) + 8);
    if (param_2 == (undefined8 *)0x0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c(lVar13);
        lVar13 = *(long *)puVar4;
      }
      puVar16 = (undefined *)**(undefined8 **)(lVar13 + 0xb8);
      param_2 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0780d7f8);
      uVar12 = 0;
      func_0x0541a7c0(param_2,puVar16,*(undefined8 *)PTR_DAT_0780d818);
      puVar11 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *puVar11 = param_2;
      func_0x032809c4(puVar11,param_2);
    }
    puVar11 = *(undefined8 **)puVar1;
    func_0x03e0ea40(uVar9,param_2);
    if (lVar7 != 0) {
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar9 = 0;
        uVar14 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        param_2 = (undefined8 *)(lVar7 + 0x28);
        do {
          if (uVar14 <= uVar9) {
            func_0x03280cb4();
            goto LAB_068309cc;
          }
          puVar11 = (undefined8 *)param_2[-1];
          uVar12 = 0;
          func_0x06830d14(unaff_x19,*param_2);
          uVar14 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar9 = uVar9 + 1;
          param_2 = param_2 + 2;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      return;
    }
LAB_068309cc:
    uVar17 = 0x68309d0;
    auVar19 = func_0x03280cac();
    unaff_x24 = puVar4;
  }
  plVar10 = auVar19._8_8_;
  lVar13 = auVar19._0_8_;
  *(undefined8 *)((long)puVar6 + -0x40) = uVar17;
  *(undefined **)((long)puVar6 + -0x30) = unaff_x24;
  *(undefined **)((long)puVar6 + -0x28) = puVar16;
  *(undefined8 **)((long)puVar6 + -0x20) = param_2;
  *(ulong *)((long)puVar6 + -0x18) = uVar9;
  *(long *)((long)puVar6 + -0x10) = lVar7;
  *(long **)((long)puVar6 + -8) = unaff_x19;
  if ((bRam0000000007e2897f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d820);
    func_0x03280a18(PTR_DAT_0776d970);
    func_0x03280a18(PTR_DAT_0780d828);
    bRam0000000007e2897f = 1;
  }
  if (*(long *)(lVar13 + 0x90) != 0) {
    func_0x04fe2d7c(*(long *)(lVar13 + 0x90),puVar11,plVar10,*(undefined8 *)PTR_DAT_0780d820);
    if ((uVar12 & 1) != 0) {
      if (*(long *)(lVar13 + 0x98) == 0) goto LAB_06830b04;
      func_0x053c1024(*(long *)(lVar13 + 0x98),puVar11,*(undefined8 *)PTR_DAT_0776d970);
    }
    if ((param_5 & 1) == 0) {
      return;
    }
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar17 = *(undefined8 *)(lVar13 + 0x30);
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0780d828) {
            puVar11 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06830ae0;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0780d828,0);
LAB_06830ae0:
                    /* WARNING: Could not recover jumptable at 0x06830b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar11)(plVar10,uVar17,lVar13,puVar11[1]);
      return;
    }
  }
LAB_06830b04:
  lVar7 = func_0x03280cac();
  *(undefined8 *)((long)puVar6 + -0x70) = 0x6830b08;
  *(ulong *)((long)puVar6 + -0x68) = uVar12 & 0xffffffff;
  *(undefined8 **)((long)puVar6 + -0x60) = puVar11;
  *(ulong *)((long)puVar6 + -0x58) = param_5 & 0xffffffff;
  *(undefined1 (*) [16])((long)puVar6 + -0x50) = auVar19;
  if ((bRam0000000007e2897e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d830);
    func_0x03280a18(PTR_DAT_0780d838);
    func_0x03280a18(PTR_DAT_0780d840);
    func_0x03280a18(PTR_DAT_0780d828);
    func_0x03280a18(PTR_DAT_0780d848);
    bRam0000000007e2897e = 1;
  }
  *(undefined8 *)((long)puVar6 + -0x90) = 0;
  *(undefined8 *)((long)puVar6 + -0x88) = 0;
  *(undefined8 *)((long)puVar6 + -0x80) = 0;
  if ((*(long *)(lVar7 + 0x90) != 0) &&
     (lVar13 = func_0x04fe2bac(*(long *)(lVar7 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8),
     puVar2 = PTR_DAT_0780d838, puVar1 = PTR_DAT_0780d830, puVar16 = PTR_DAT_0780d828, lVar13 != 0))
  {
    func_0x04816768((undefined1 *)((long)puVar6 + -0xa8),lVar13,*(undefined8 *)PTR_DAT_0780d848);
    *(undefined8 *)((long)puVar6 + -0x88) = *(undefined8 *)((long)puVar6 + -0xa0);
    *(undefined8 *)((long)puVar6 + -0x90) = *(undefined8 *)((long)puVar6 + -0xa8);
    *(undefined8 *)((long)puVar6 + -0x80) = *(undefined8 *)((long)puVar6 + -0x98);
    while( true ) {
      uVar9 = func_0x05160714((undefined1 *)((long)puVar6 + -0x90),*(undefined8 *)puVar2);
      if ((uVar9 & 1) == 0) {
        func_0x05160710((undefined1 *)((long)puVar6 + -0x90),*(undefined8 *)puVar1);
        goto LAB_06830c6c;
      }
      plVar10 = *(long **)((long)puVar6 + -0x80);
      if (plVar10 == (long *)0x0) break;
      lVar13 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar16) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_06830c40;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar16,4);
LAB_06830c40:
      uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar9 & 1) != 0) {
        func_0x05160710((undefined1 *)((long)puVar6 + -0x90),*(undefined8 *)puVar1);
        return;
      }
    }
    func_0x03280cac();
    puVar11 = (undefined8 *)puVar1;
  }
  auVar20 = func_0x03280cac();
  if (auVar20._8_4_ == 1) {
    plVar10 = (long *)func_0x072ce910(auVar20._0_8_);
    lVar13 = *plVar10;
    func_0x072ce920();
    func_0x05160710((undefined1 *)((long)puVar6 + -0x90),*puVar11);
    if (lVar13 == 0) {
LAB_06830c6c:
      func_0x0678ebfc(lVar7,0);
      return;
    }
    func_0x03280ca4(lVar13);
  }
  func_0x05160710((undefined1 *)((long)puVar6 + -0x90),*puVar11);
  func_0x03365958(auVar20._0_8_);
  func_0x03280ca4(0);
  lVar7 = func_0x02f09514();
  *(undefined1 *)(lVar7 + 0xa1) = 1;
  return;
}

