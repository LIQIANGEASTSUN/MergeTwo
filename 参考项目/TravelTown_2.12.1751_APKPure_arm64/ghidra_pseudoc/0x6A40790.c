/* Ghidra 12.1.2 native pseudocode; RVA 0x6A40790; Merger.MergeBoard.View.Layout.FreeformMergeBoardLayout.SetIndexText; status ok */


void Merger_MergeBoard_View_Layout_FreeformMergeBoardLayout__SetIndexText
               (undefined8 param_1,long param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  undefined4 uStack_24;
  
  uStack_24 = param_3;
  if ((bRam0000000007e2a531 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f9e0);
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e2a531 = 1;
  }
  if ((param_2 != 0) && (lVar3 = func_0x06fdbed0(param_2,0), puVar1 = PTR_DAT_0774e4e0, lVar3 != 0))
  {
    plVar4 = (long *)func_0x03dc99bc(lVar3,1,*(undefined8 *)PTR_DAT_0782f9e0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar1);
    }
    uVar5 = func_0x06fdeb74(plVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if ((plVar4 == (long *)0x0) || (lVar3 = func_0x06fdbed0(plVar4,0), lVar3 == 0))
      goto LAB_06b40884;
      func_0x06fdf26c(lVar3,param_4 & 1,0);
      uVar6 = func_0x05793b4c(&uStack_24,0);
      (**(code **)(*plVar4 + 0x558))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x560));
    }
    return;
  }
LAB_06b40884:
  auVar7 = func_0x03280cac();
  lVar3 = auVar7._0_8_;
  func_0x057da5fc(lVar3,0);
  *(int *)(lVar3 + 0x10) = auVar7._8_4_;
  uVar2 = func_0x057de4c8(0);
  *(undefined4 *)(lVar3 + 0x18) = uVar2;
  return;
}

