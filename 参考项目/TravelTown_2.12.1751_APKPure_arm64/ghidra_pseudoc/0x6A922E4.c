/* Ghidra 12.1.2 native pseudocode; RVA 0x6A922E4; Merger.MergeBoard.Handlers.CollectableItemsGrantProcessor.HandleDisposed; status ok */


void Merger_MergeBoard_Handlers_CollectableItemsGrantProcessor__HandleDisposed(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000007e2a7ed & 1) == 0) {
    func_0x03280a18(PTR_DAT_07832260);
    func_0x03280a18(PTR_DAT_07832268);
    func_0x03280a18(PTR_DAT_07832270);
    func_0x03280a18(PTR_DAT_07832278);
    func_0x03280a18(PTR_DAT_07832280);
    bRam0000000007e2a7ed = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar3 = func_0x04fe2bac(*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_07832260),
     puVar2 = PTR_DAT_07832270, puVar1 = PTR_DAT_07832268, lVar3 != 0)) {
    func_0x04816768(&uStack_38,lVar3,*(undefined8 *)PTR_DAT_07832280);
    while (uVar4 = func_0x05160714(&uStack_38,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (lStack_28 == 0) {
        func_0x03280cac();
        goto LAB_06b923e4;
      }
      (**(code **)(lStack_28 + 0x18))
                (*(undefined8 *)(lStack_28 + 0x40),*(undefined8 *)(lStack_28 + 0x28));
    }
    func_0x05160710(&uStack_38,*(undefined8 *)puVar1);
LAB_06b923c4:
    func_0x069b2ef8(param_1,0);
    return;
  }
LAB_06b923e4:
  auVar8 = func_0x03280cac();
  if (auVar8._8_4_ == 1) {
    plVar5 = (long *)func_0x072ce910(auVar8._0_8_);
    lVar3 = *plVar5;
    func_0x072ce920();
    func_0x05160710(&uStack_38,*(undefined8 *)PTR_DAT_07832268);
    if (lVar3 == 0) goto LAB_06b923c4;
    func_0x03280ca4(lVar3);
  }
  func_0x05160710(&uStack_38,*(undefined8 *)PTR_DAT_07832268);
  func_0x03365958(auVar8._0_8_);
  func_0x03280ca4(0);
  auVar9 = func_0x02f09514();
  if ((bRam0000000007e2a7ef & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1e40);
    bRam0000000007e2a7ef = 1;
  }
  plVar5 = *(long **)(auVar9._0_8_ + 0x30);
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
    return;
  }
  lVar3 = *plVar5;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077c1e40) {
        puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_06b924f0;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077c1e40,0);
LAB_06b924f0:
                    /* WARNING: Could not recover jumptable at 0x06b92504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar5,auVar9._8_8_ & 0xffffffff,puVar6[1]);
  return;
}

