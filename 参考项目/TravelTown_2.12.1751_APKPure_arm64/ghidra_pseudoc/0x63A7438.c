/* Ghidra 12.1.2 native pseudocode; RVA 0x63A7438; MergeEngine.ECS.Systems.SystemBase.IsUnlockBlocked; status ok */


ulong MergeEngine_ECS_Systems_SystemBase__IsUnlockBlocked(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  undefined1 auVar7 [16];
  long lStack_8;
  
  lStack_8 = 0;
  if (param_2 != 0) {
    uVar3 = func_0x064a7334(param_1,*(undefined8 *)(param_2 + 0x10),&lStack_8);
    if (((uVar3 & 1) == 0) || (lStack_8 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)(*(char *)(lStack_8 + 0x20) != '\0');
    }
    return uVar3;
  }
  auVar7 = func_0x03280cac();
  if (auVar7._8_8_ != 0) {
    lVar6 = *auVar7._0_8_;
    if (*(char *)(auVar7._8_8_ + 0x10) == '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x1d8);
      uVar5 = *(undefined8 *)(lVar6 + 0x1e0);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x1c8);
      uVar5 = *(undefined8 *)(lVar6 + 0x1d0);
    }
                    /* WARNING: Could not recover jumptable at 0x064a74a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(auVar7._0_8_,uVar5);
    return uVar3;
  }
  plVar4 = (long *)func_0x03280cac();
  puVar2 = PTR_DAT_077f1060;
  puVar1 = PTR_DAT_0774e758;
  if ((bRam0000000007e2616c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_077f1060);
    bRam0000000007e2616c = 1;
  }
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x056ed730(uVar5,plVar4,*(undefined8 *)puVar2,0);
  func_0x064a6d6c(plVar4,uVar5);
  *(undefined1 *)((long)plVar4 + 0x31) = 1;
                    /* WARNING: Could not recover jumptable at 0x064a753c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  return uVar3;
}

