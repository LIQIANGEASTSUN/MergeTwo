/* Ghidra 12.1.2 native pseudocode; RVA 0x6731BE0; Merger.Game.Views.BoardItem.BoardItemViewBehaviourFactory.AddBehaviours; status ok */


undefined8
Merger_Game_Views_BoardItem_BoardItemViewBehaviourFactory__AddBehaviours
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined1 auVar10 [12];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if ((bRam0000000007e28990 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d938);
    func_0x03280a18(PTR_DAT_0780d940);
    func_0x03280a18(PTR_DAT_0780d948);
    func_0x03280a18(PTR_DAT_0780d950);
    func_0x03280a18(PTR_DAT_0780d958);
    bRam0000000007e28990 = 1;
  }
  puVar3 = PTR_DAT_0780d950;
  puVar2 = PTR_DAT_0780d940;
  puVar1 = PTR_DAT_0780d938;
  uStack_58 = 0;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  puVar5 = (undefined8 *)0x7e28000;
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x04145068(&uStack_58,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0780d958);
    while( true ) {
      uVar4 = func_0x051159b4(&uStack_58,*(undefined8 *)puVar2);
      plVar7 = plStack_48;
      puVar5 = (undefined8 *)puVar1;
      if ((uVar4 & 1) == 0) {
        func_0x051159b0(&uStack_58,*(undefined8 *)puVar1);
        goto LAB_06831d14;
      }
      if (plStack_48 == (long *)0x0) break;
      lVar8 = *plStack_48;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06831cf0;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plStack_48,*(long *)puVar3,0);
LAB_06831cf0:
      (*(code *)*puVar5)(plVar7,param_2,param_3,puVar5[1]);
    }
    func_0x03280cac();
  }
  do {
    auVar10 = func_0x03280cac();
    if (auVar10._8_4_ != 1) {
LAB_06831d7c:
      func_0x051159b0(&uStack_58,*puVar5);
      func_0x03365958(auVar10._0_8_);
      func_0x03280ca4(0);
      lVar8 = func_0x02f09514();
      return *(undefined8 *)(lVar8 + 0x60);
    }
    plVar7 = (long *)func_0x072ce910(auVar10._0_8_);
    lVar8 = *plVar7;
    func_0x072ce920();
    func_0x051159b0(&uStack_58,*puVar5);
    if (lVar8 != 0) {
      func_0x03280ca4(lVar8);
      goto LAB_06831d7c;
    }
LAB_06831d14:
    if (param_3 != 0) {
      uVar6 = func_0x0683105c(param_3);
      return uVar6;
    }
  } while( true );
}

