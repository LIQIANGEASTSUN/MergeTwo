/* Ghidra 12.1.2 native pseudocode; RVA 0x64EAACC; MergeEngine.ECS.Systems.State.Board.FreeVouchersStateSystem.LoadState; status ok */


long MergeEngine_ECS_Systems_State_Board_FreeVouchersStateSystem__LoadState
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [12];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  if ((bRam0000000007e27049 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077fba48);
    func_0x03280a18(PTR_DAT_077fba50);
    func_0x03280a18(PTR_DAT_077fba58);
    func_0x03280a18(PTR_DAT_077fba60);
    lVar4 = func_0x03280a18(PTR_DAT_077fba68);
    bRam0000000007e27049 = 1;
  }
  puVar3 = PTR_DAT_077fba68;
  puVar2 = PTR_DAT_077fba50;
  puVar1 = PTR_DAT_077fba48;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_065eabdc:
      auVar9 = func_0x03280cac();
      if (auVar9._8_4_ == 1) {
        plVar6 = (long *)func_0x072ce910(auVar9._0_8_);
        lVar8 = *plVar6;
        func_0x072ce920();
        lVar4 = func_0x051159b0(&uStack_48,*(undefined8 *)PTR_DAT_077fba48);
        if (lVar8 == 0) {
          return lVar4;
        }
        func_0x03280ca4(lVar8);
      }
      func_0x051159b0(&uStack_48,*(undefined8 *)PTR_DAT_077fba48);
      func_0x03365958(auVar9._0_8_);
      func_0x03280ca4(0);
      auVar9 = func_0x02f09514();
      lVar4 = *(long *)(auVar9._0_8_ + 0x50);
      if (lVar4 != 0) {
        *(int *)(lVar4 + 0x158) = auVar9._8_4_;
        return auVar9._0_8_;
      }
      lVar4 = func_0x03280cac();
      puVar1 = PTR_DAT_077fba70;
      if ((bRam0000000007e2704a & 1) == 0) {
        func_0x03280a18(PTR_DAT_077fba70);
        bRam0000000007e2704a = 1;
      }
      uVar7 = *(undefined8 *)puVar1;
      return lVar4;
    }
    func_0x04145068(&uStack_48,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_077fba60);
LAB_065eab74:
    uVar5 = func_0x051159b4(&uStack_48,*(undefined8 *)puVar2);
    lVar4 = lStack_38;
    if ((uVar5 & 1) != 0) {
      if (lStack_38 != 0) goto code_r0x065eab8c;
      func_0x03280cac();
      goto LAB_065eabd8;
    }
    lVar4 = func_0x051159b0(&uStack_48,*(undefined8 *)puVar1);
  }
  return lVar4;
code_r0x065eab8c:
  uVar5 = func_0x055ea870(*(undefined8 *)(lStack_38 + 0x10),*(undefined8 *)puVar3,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
LAB_065eabd8:
      func_0x03280cac();
      goto LAB_065eabdc;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x158) = *(undefined4 *)(lVar4 + 0x18);
  }
  goto LAB_065eab74;
}

