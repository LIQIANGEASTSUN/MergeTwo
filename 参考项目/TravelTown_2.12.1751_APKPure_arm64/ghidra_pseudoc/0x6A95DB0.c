/* Ghidra 12.1.2 native pseudocode; RVA 0x6A95DB0; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.UpdateComponentsFromState; status ok */


void Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__UpdateComponentsFromState
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  undefined1 auVar9 [12];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if ((bRam0000000007e2a812 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078324e0);
    func_0x03280a18(PTR_DAT_078324e8);
    func_0x03280a18(PTR_DAT_078324f0);
    func_0x03280a18(PTR_DAT_078324f8);
    func_0x03280a18(PTR_DAT_07832500);
    bRam0000000007e2a812 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  puVar6 = (undefined8 *)0x7e2a000;
  if (param_3 != 0) {
    Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CalculateCyclesDelay
              (param_1,*(undefined8 *)(param_3 + 0x70));
    Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CalculateUnlockTimeLeft
              (param_1,*(undefined8 *)(param_3 + 0x78));
    lVar4 = func_0x06b93ec0(param_1);
    puVar3 = PTR_DAT_078324f8;
    puVar2 = PTR_DAT_078324e8;
    puVar1 = PTR_DAT_078324e0;
    if (lVar4 != 0) {
      func_0x04145068(&uStack_58,lVar4,*(undefined8 *)PTR_DAT_07832500);
      while( true ) {
        uVar5 = func_0x051159b4(&uStack_58,*(undefined8 *)puVar2);
        plVar7 = plStack_48;
        if ((uVar5 & 1) == 0) {
          func_0x051159b0(&uStack_58,*(undefined8 *)puVar1);
          return;
        }
        if (plStack_48 == (long *)0x0) break;
        lVar4 = *plStack_48;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06b95ee0;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plStack_48,*(long *)puVar3,0);
LAB_06b95ee0:
        (*(code *)*puVar6)(plVar7,param_2,param_3,puVar6[1]);
      }
      func_0x03280cac();
      puVar6 = (undefined8 *)puVar1;
    }
  }
  auVar9 = func_0x03280cac();
  if (auVar9._8_4_ == 1) {
    plVar7 = (long *)func_0x072ce910(auVar9._0_8_);
    lVar4 = *plVar7;
    func_0x072ce920();
    func_0x051159b0(&uStack_58,*puVar6);
    if (lVar4 == 0) {
      return;
    }
    func_0x03280ca4(lVar4);
  }
  func_0x051159b0(&uStack_58,*puVar6);
  func_0x03365958(auVar9._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  return;
}

