/* Ghidra 12.1.2 native pseudocode; RVA 0x67309D0; Merger.Game.Views.BoardItem.BoardItemView2.RegisterBehaviour; status ok */

void Merger_Game_Views_BoardItem_BoardItemView2__RegisterBehaviour
               (long param_1,long *param_2,undefined8 *param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  code *pcStack_70;
  ulong uStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  long lStack_50;
  long *plStack_48;
  
  if ((bRam0000000007e2897f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d820);
    func_0x03280a18(PTR_DAT_0776d970);
    func_0x03280a18(PTR_DAT_0780d828);
    bRam0000000007e2897f = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x04fe2d7c(*(long *)(param_1 + 0x90),param_3,param_2,*(undefined8 *)PTR_DAT_0780d820);
    if ((param_4 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) goto LAB_06830b04;
      func_0x053c1024(*(long *)(param_1 + 0x98),param_3,*(undefined8 *)PTR_DAT_0776d970);
    }
    if ((param_5 & 1) == 0) {
      return;
    }
    if (param_2 != (long *)0x0) {
      lVar7 = *param_2;
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0780d828) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06830ae0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0780d828,0);
LAB_06830ae0:
                    /* WARNING: Could not recover jumptable at 0x06830b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(param_2,uVar10,param_1,puVar4[1]);
      return;
    }
  }
LAB_06830b04:
  lVar7 = func_0x03280cac();
  pcStack_70 = Merger_Game_Views_BoardItem_BoardItemView2__PointerClicked;
  uStack_68 = param_4 & 0xffffffff;
  puStack_60 = param_3;
  uStack_58 = param_5 & 0xffffffff;
  lStack_50 = param_1;
  plStack_48 = param_2;
  if ((bRam0000000007e2897e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d830);
    func_0x03280a18(PTR_DAT_0780d838);
    func_0x03280a18(PTR_DAT_0780d840);
    func_0x03280a18(PTR_DAT_0780d828);
    func_0x03280a18(PTR_DAT_0780d848);
    bRam0000000007e2897e = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  if ((*(long *)(lVar7 + 0x90) != 0) &&
     (lVar5 = func_0x04fe2bac(*(long *)(lVar7 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8),
     puVar3 = PTR_DAT_0780d838, puVar2 = PTR_DAT_0780d830, puVar1 = PTR_DAT_0780d828, lVar5 != 0)) {
    func_0x04816768(&uStack_a8,lVar5,*(undefined8 *)PTR_DAT_0780d848);
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    plStack_80 = plStack_98;
    while( true ) {
      uVar8 = func_0x05160714(&uStack_90,*(undefined8 *)puVar3);
      plVar6 = plStack_80;
      if ((uVar8 & 1) == 0) {
        func_0x05160710(&uStack_90,*(undefined8 *)puVar2);
        goto LAB_06830c6c;
      }
      if (plStack_80 == (long *)0x0) break;
      lVar5 = *plStack_80;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_06830c40;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plStack_80,*(long *)puVar1,4);
LAB_06830c40:
      uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      if ((uVar8 & 1) != 0) {
        func_0x05160710(&uStack_90,*(undefined8 *)puVar2);
        return;
      }
    }
    func_0x03280cac();
    param_3 = (undefined8 *)puVar2;
  }
  auVar11 = func_0x03280cac();
  if (auVar11._8_4_ == 1) {
    plVar6 = (long *)func_0x072ce910(auVar11._0_8_);
    lVar5 = *plVar6;
    func_0x072ce920();
    func_0x05160710(&uStack_90,*param_3);
    if (lVar5 == 0) {
LAB_06830c6c:
      func_0x0678ebfc(lVar7,0);
      return;
    }
    func_0x03280ca4(lVar5);
  }
  func_0x05160710(&uStack_90,*param_3);
  func_0x03365958(auVar11._0_8_);
  func_0x03280ca4(0);
  lVar7 = func_0x02f09514();
  *(undefined1 *)(lVar7 + 0xa1) = 1;
  return;
}

