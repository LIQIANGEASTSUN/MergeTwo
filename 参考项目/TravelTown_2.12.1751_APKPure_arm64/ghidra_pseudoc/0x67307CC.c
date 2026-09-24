/* Ghidra 12.1.2 native pseudocode; RVA 0x67307CC; Merger.Game.Views.BoardItem.BoardItemView2.WipeBehaviours; status ok */

void Merger_Game_Views_BoardItem_BoardItemView2__WipeBehaviours(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong in_x4;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  code *pcStack_b0;
  ulong uStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [16];
  code *pcStack_80;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar4 = PTR_DAT_0780d7f0;
  puVar3 = PTR_DAT_0780d7e8;
  puVar16 = PTR_DAT_0780d7e0;
  puVar2 = PTR_DAT_0780d7d8;
  puVar1 = PTR_DAT_0780d7d0;
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
  uVar13 = *(undefined8 *)(param_1 + 0x90);
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
  uVar9 = 0;
  func_0x0534d2a4(uVar5,param_1,*(undefined8 *)puVar2);
  uVar5 = func_0x03d85c08(uVar13,uVar5,*(undefined8 *)puVar16);
  lVar6 = func_0x03d5afd0(uVar5,*(undefined8 *)puVar3);
  lVar10 = *(long *)puVar4;
  uVar14 = *(ulong *)(param_1 + 0x90);
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x03280b8c(lVar10);
    lVar10 = *(long *)puVar4;
  }
  puVar1 = PTR_DAT_0780d810;
  puVar15 = *(undefined8 **)(*(long *)(lVar10 + 0xb8) + 8);
  if (puVar15 == (undefined8 *)0x0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c(lVar10);
      lVar10 = *(long *)puVar4;
    }
    puVar16 = (undefined *)**(undefined8 **)(lVar10 + 0xb8);
    puVar15 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0780d7f8);
    uVar9 = 0;
    func_0x0541a7c0(puVar15,puVar16,*(undefined8 *)PTR_DAT_0780d818);
    puVar7 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *puVar7 = puVar15;
    func_0x032809c4(puVar7,puVar15);
  }
  puVar7 = *(undefined8 **)puVar1;
  func_0x03e0ea40(uVar14,puVar15);
  if (lVar6 != 0) {
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar14 = 0;
      uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      puVar15 = (undefined8 *)(lVar6 + 0x28);
      do {
        if (uVar11 <= uVar14) {
          func_0x03280cb4();
          goto LAB_068309cc;
        }
        puVar7 = (undefined8 *)puVar15[-1];
        uVar9 = 0;
        Merger_Game_Views_BoardItem_BoardItemView2__RemoveBehaviour(param_1,*puVar15);
        uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 2;
      } while ((long)uVar14 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    return;
  }
LAB_068309cc:
  auVar17 = func_0x03280cac();
  plVar8 = auVar17._8_8_;
  lVar10 = auVar17._0_8_;
  pcStack_80 = Merger_Game_Views_BoardItem_BoardItemView2__RegisterBehaviour;
  puStack_70 = puVar4;
  puStack_68 = puVar16;
  puStack_60 = puVar15;
  uStack_58 = uVar14;
  lStack_50 = lVar6;
  lStack_48 = param_1;
  if ((bRam0000000007e2897f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d820);
    func_0x03280a18(PTR_DAT_0776d970);
    func_0x03280a18(PTR_DAT_0780d828);
    bRam0000000007e2897f = 1;
  }
  if (*(long *)(lVar10 + 0x90) != 0) {
    func_0x04fe2d7c(*(long *)(lVar10 + 0x90),puVar7,plVar8,*(undefined8 *)PTR_DAT_0780d820);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar10 + 0x98) == 0) goto LAB_06830b04;
      func_0x053c1024(*(long *)(lVar10 + 0x98),puVar7,*(undefined8 *)PTR_DAT_0776d970);
    }
    if ((in_x4 & 1) == 0) {
      return;
    }
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      uVar5 = *(undefined8 *)(lVar10 + 0x30);
      uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar14 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0780d828) {
            puVar15 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06830ae0;
          }
          uVar14 = uVar14 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar14 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0780d828,0);
LAB_06830ae0:
                    /* WARNING: Could not recover jumptable at 0x06830b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar15)(plVar8,uVar5,lVar10,puVar15[1]);
      return;
    }
  }
LAB_06830b04:
  lVar6 = func_0x03280cac();
  pcStack_b0 = Merger_Game_Views_BoardItem_BoardItemView2__PointerClicked;
  uStack_a8 = uVar9 & 0xffffffff;
  puStack_a0 = puVar7;
  uStack_98 = in_x4 & 0xffffffff;
  auStack_90 = auVar17;
  if ((bRam0000000007e2897e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d830);
    func_0x03280a18(PTR_DAT_0780d838);
    func_0x03280a18(PTR_DAT_0780d840);
    func_0x03280a18(PTR_DAT_0780d828);
    func_0x03280a18(PTR_DAT_0780d848);
    bRam0000000007e2897e = 1;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  if (*(long *)(lVar6 + 0x90) != 0) {
    lVar10 = func_0x04fe2bac(*(long *)(lVar6 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8);
    puVar16 = PTR_DAT_0780d838;
    puVar2 = PTR_DAT_0780d830;
    puVar1 = PTR_DAT_0780d828;
    if (lVar10 != 0) {
      func_0x04816768(&uStack_e8,lVar10,*(undefined8 *)PTR_DAT_0780d848);
      uStack_c8 = uStack_e0;
      uStack_d0 = uStack_e8;
      plStack_c0 = plStack_d8;
      while( true ) {
        uVar14 = func_0x05160714(&uStack_d0,*(undefined8 *)puVar16);
        plVar8 = plStack_c0;
        if ((uVar14 & 1) == 0) {
          func_0x05160710(&uStack_d0,*(undefined8 *)puVar2);
          goto LAB_06830c6c;
        }
        if (plStack_c0 == (long *)0x0) break;
        lVar10 = *plStack_c0;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar14 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar15 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
              goto LAB_06830c40;
            }
            uVar14 = uVar14 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar14 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(plStack_c0,*(long *)puVar1,4);
LAB_06830c40:
        uVar14 = (*(code *)*puVar15)(plVar8,puVar15[1]);
        if ((uVar14 & 1) != 0) {
          func_0x05160710(&uStack_d0,*(undefined8 *)puVar2);
          return;
        }
      }
      func_0x03280cac();
      puVar7 = (undefined8 *)puVar2;
    }
  }
  auVar18 = func_0x03280cac();
  if (auVar18._8_4_ == 1) {
    plVar8 = (long *)func_0x072ce910(auVar18._0_8_);
    lVar10 = *plVar8;
    func_0x072ce920();
    func_0x05160710(&uStack_d0,*puVar7);
    if (lVar10 == 0) {
LAB_06830c6c:
      func_0x0678ebfc(lVar6,0);
      return;
    }
    func_0x03280ca4(lVar10);
  }
  func_0x05160710(&uStack_d0,*puVar7);
  func_0x03365958(auVar18._0_8_);
  func_0x03280ca4(0);
  lVar6 = func_0x02f09514();
  *(undefined1 *)(lVar6 + 0xa1) = 1;
  return;
}

