/* Ghidra 12.1.2 native pseudocode; RVA 0x64EAD9C; MergeEngine.ECS.Systems.State.Board.Event.EventBoardQueueStateSystem.ShouldLoadStateForDomain; status ok */


ulong MergeEngine_ECS_Systems_State_Board_Event_EventBoardQueueStateSystem__ShouldLoadStateForDomain
                (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000007e2704e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a608);
    bRam0000000007e2704e = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar3 = func_0x064819c0(*(long *)(param_1 + 0x50),0);
    uVar4 = 0;
    if ((lVar3 != 0) && (uVar4 = 0, *(long *)(lVar3 + 0x20) != 0)) {
      uVar4 = func_0x06472e74(*(long *)(lVar3 + 0x20),0);
    }
    uVar2 = func_0x055f7aac(uVar4,0);
    return (ulong)(~uVar2 & 1);
  }
  auVar9 = func_0x03280cac();
  puVar1 = PTR_DAT_077fba90;
  if ((bRam0000000007e2704f & 1) == 0) {
    func_0x03280a18(PTR_DAT_077fba90);
    func_0x03280a18(PTR_DAT_077dcc78);
    bRam0000000007e2704f = 1;
  }
  func_0x04d1a96c(auVar9._0_8_,auVar9._8_8_,*(undefined8 *)puVar1);
  plVar8 = *(long **)(auVar9._0_8_ + 0x78);
  if (plVar8 == (long *)0x0) {
    uVar6 = func_0x03280cac();
    puVar1 = PTR_DAT_077fba98;
    if ((bRam0000000007e27050 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077fba98);
      bRam0000000007e27050 = 1;
    }
    uVar4 = *(undefined8 *)puVar1;
    return uVar6;
  }
  lVar3 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077dcc78) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_065eaec0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077dcc78,0);
LAB_065eaec0:
                    /* WARNING: Could not recover jumptable at 0x065eaed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)*puVar5)(plVar8,auVar9._8_8_,puVar5[1]);
  return uVar6;
}

