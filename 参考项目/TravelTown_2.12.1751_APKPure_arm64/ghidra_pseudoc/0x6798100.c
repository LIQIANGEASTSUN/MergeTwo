/* Ghidra 12.1.2 native pseudocode; RVA 0x6798100; MergeEngine.ECS.Systems.Items.ToolsRequiredByBuildingsHelper.GetCandidateUpgrade; status ok */


/* WARNING: Possible PIC construction at 0x068982c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068982c8) */
/* WARNING: Removing unreachable block (ram,0x068982cc) */
/* WARNING: Removing unreachable block (ram,0x0689830c) */
/* WARNING: Removing unreachable block (ram,0x06898324) */
/* WARNING: Removing unreachable block (ram,0x0689832c) */
/* WARNING: Removing unreachable block (ram,0x06898354) */
/* WARNING: Removing unreachable block (ram,0x06898338) */
/* WARNING: Removing unreachable block (ram,0x06898344) */
/* WARNING: Removing unreachable block (ram,0x06898364) */
/* WARNING: Removing unreachable block (ram,0x06898374) */
/* WARNING: Removing unreachable block (ram,0x06898388) */
/* WARNING: Removing unreachable block (ram,0x068983a0) */
/* WARNING: Removing unreachable block (ram,0x068983bc) */
/* WARNING: Removing unreachable block (ram,0x068983d8) */
/* WARNING: Removing unreachable block (ram,0x068983e0) */
/* WARNING: Removing unreachable block (ram,0x06898408) */
/* WARNING: Removing unreachable block (ram,0x068983ec) */
/* WARNING: Removing unreachable block (ram,0x068983f8) */
/* WARNING: Removing unreachable block (ram,0x06898418) */
/* WARNING: Removing unreachable block (ram,0x068984e8) */
/* WARNING: Removing unreachable block (ram,0x068984f0) */
/* WARNING: Removing unreachable block (ram,0x06898428) */
/* WARNING: Removing unreachable block (ram,0x0689844c) */
/* WARNING: Removing unreachable block (ram,0x06898474) */
/* WARNING: Removing unreachable block (ram,0x068984f4) */
/* WARNING: Removing unreachable block (ram,0x06898518) */
/* WARNING: Removing unreachable block (ram,0x06898528) */
/* WARNING: Removing unreachable block (ram,0x06898588) */
/* WARNING: Removing unreachable block (ram,0x068985f4) */
/* WARNING: Removing unreachable block (ram,0x0689858c) */
/* WARNING: Removing unreachable block (ram,0x06898590) */
/* WARNING: Removing unreachable block (ram,0x068985b8) */
/* WARNING: Removing unreachable block (ram,0x068985fc) */
/* WARNING: Removing unreachable block (ram,0x068985c8) */
/* WARNING: Removing unreachable block (ram,0x068985d0) */
/* WARNING: Removing unreachable block (ram,0x068985e8) */
/* WARNING: Removing unreachable block (ram,0x06898484) */
/* WARNING: Removing unreachable block (ram,0x0689852c) */
/* WARNING: Removing unreachable block (ram,0x0689848c) */
/* WARNING: Removing unreachable block (ram,0x06898534) */
/* WARNING: Removing unreachable block (ram,0x06898648) */
/* WARNING: Removing unreachable block (ram,0x06898490) */
/* WARNING: Removing unreachable block (ram,0x068986dc) */

undefined1  [16]
MergeEngine_ECS_Systems_Items_ToolsRequiredByBuildingsHelper__GetCandidateUpgrade
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  undefined8 extraout_x1_01;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar5 = 0x7e28000;
  if ((bRam0000000007e28d9b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810788);
    func_0x03280a18(PTR_DAT_0777ff80);
    func_0x03280a18(PTR_DAT_07810790);
    func_0x03280a18(PTR_DAT_07780070);
    func_0x03280a18(PTR_DAT_07780078);
    func_0x03280a18(PTR_DAT_0777ff68);
    func_0x03280a18(PTR_DAT_0777ff88);
    func_0x03280a18(PTR_DAT_07779f88);
    func_0x03280a18(PTR_DAT_0777ff98);
    func_0x03280a18(PTR_DAT_07779f90);
    func_0x03280a18(PTR_DAT_07779f98);
    func_0x03280a18(PTR_DAT_0777ffa8);
    func_0x03280a18(PTR_DAT_077dbb50);
    func_0x03280a18(PTR_DAT_077dbb30);
    func_0x03280a18(PTR_DAT_077dbb28);
    func_0x03280a18(PTR_DAT_077eba10);
    func_0x03280a18(PTR_DAT_077cfad0);
    func_0x03280a18(PTR_DAT_0777ffb8);
    func_0x03280a18(PTR_DAT_0777ffc0);
    func_0x03280a18(PTR_DAT_07779fa0);
    func_0x03280a18(PTR_DAT_077ee0d0);
    func_0x03280a18(PTR_DAT_077edf88);
    bRam0000000007e28d9b = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (param_2 == 0) {
    func_0x03280cac();
    uVar2 = func_0x03280cac();
    func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_07779f88);
    do {
      func_0x03365958(uVar2);
      auVar7 = func_0x03280ca4(0);
      uVar2 = auVar7._0_8_;
      if (auVar7._8_4_ == 1) {
        plVar3 = (long *)func_0x072ce910(uVar2);
        lVar6 = *plVar3;
        func_0x072ce920();
        func_0x0514ec68(&uStack_a0,*(undefined8 *)PTR_DAT_0777ff88);
        uVar4 = extraout_x1_01;
        if (lVar6 == 0) goto LAB_06898610;
        func_0x03280ca4(lVar6);
      }
      func_0x0514ec68(&uStack_a0,*(undefined8 *)PTR_DAT_0777ff88);
    } while( true );
  }
  iVar1 = func_0x06454364(param_2,0);
  uVar5 = 0;
  uVar4 = extraout_x1;
  if (iVar1 != 3) {
    iVar1 = func_0x06454364(param_2,0);
    uVar5 = 0;
    uVar4 = extraout_x1_00;
    if (iVar1 != 4) {
      uVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ff68);
      func_0x04f5a798(uVar5,param_3,*(undefined8 *)PTR_DAT_07810790);
      auVar8._0_8_ = func_0x03280ca0(*(undefined8 *)PTR_DAT_07810788);
      auVar8._8_8_ = 0;
      return auVar8;
    }
  }
LAB_06898610:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = uVar5;
  return auVar9;
}

