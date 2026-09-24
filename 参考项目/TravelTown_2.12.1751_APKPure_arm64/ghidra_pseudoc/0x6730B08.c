/* Ghidra 12.1.2 native pseudocode; RVA 0x6730B08; Merger.Game.Views.BoardItem.BoardItemView2.PointerClicked; status ok */

void Merger_Game_Views_BoardItem_BoardItemView2__PointerClicked(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  undefined8 *unaff_x22;
  undefined1 auVar9 [12];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  if ((bRam0000000007e2897e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d830);
    func_0x03280a18(PTR_DAT_0780d838);
    func_0x03280a18(PTR_DAT_0780d840);
    func_0x03280a18(PTR_DAT_0780d828);
    func_0x03280a18(PTR_DAT_0780d848);
    bRam0000000007e2897e = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (lVar4 = func_0x04fe2bac(*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8),
     puVar3 = PTR_DAT_0780d838, puVar2 = PTR_DAT_0780d830, puVar1 = PTR_DAT_0780d828, lVar4 != 0)) {
    func_0x04816768(&uStack_68,lVar4,*(undefined8 *)PTR_DAT_0780d848);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    plStack_40 = plStack_58;
    while( true ) {
      uVar5 = func_0x05160714(&uStack_50,*(undefined8 *)puVar3);
      plVar7 = plStack_40;
      if ((uVar5 & 1) == 0) {
        func_0x05160710(&uStack_50,*(undefined8 *)puVar2);
        goto LAB_06830c6c;
      }
      if (plStack_40 == (long *)0x0) break;
      lVar4 = *plStack_40;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_06830c40;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plStack_40,*(long *)puVar1,4);
LAB_06830c40:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar5 & 1) != 0) {
        func_0x05160710(&uStack_50,*(undefined8 *)puVar2);
        return;
      }
    }
    func_0x03280cac();
    unaff_x22 = (undefined8 *)puVar2;
  }
  auVar9 = func_0x03280cac();
  if (auVar9._8_4_ == 1) {
    plVar7 = (long *)func_0x072ce910(auVar9._0_8_);
    lVar4 = *plVar7;
    func_0x072ce920();
    func_0x05160710(&uStack_50,*unaff_x22);
    if (lVar4 == 0) {
LAB_06830c6c:
      func_0x0678ebfc(param_1,0);
      return;
    }
    func_0x03280ca4(lVar4);
  }
  func_0x05160710(&uStack_50,*unaff_x22);
  func_0x03365958(auVar9._0_8_);
  func_0x03280ca4(0);
  lVar4 = func_0x02f09514();
  *(undefined1 *)(lVar4 + 0xa1) = 1;
  return;
}

