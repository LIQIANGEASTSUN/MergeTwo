/* Ghidra 12.1.2 native pseudocode; RVA 0x64EAE0C; MergeEngine.ECS.Systems.State.Board.Event.EventBoardQueueStateSystem.LoadState; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_State_Board_Event_EventBoardQueueStateSystem__LoadState
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR_DAT_077fba90;
  if ((bRam0000000007e2704f & 1) == 0) {
    func_0x03280a18(PTR_DAT_077fba90);
    func_0x03280a18(PTR_DAT_077dcc78);
    bRam0000000007e2704f = 1;
  }
  func_0x04d1a96c(param_1,param_2,*(undefined8 *)puVar1);
  plVar7 = *(long **)(param_1 + 0x78);
  if (plVar7 == (long *)0x0) {
    auVar8._0_8_ = func_0x03280cac();
    puVar1 = PTR_DAT_077fba98;
    if ((bRam0000000007e27050 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077fba98);
      bRam0000000007e27050 = 1;
    }
    uVar3 = *(undefined8 *)puVar1;
    auVar8._8_8_ = 0;
    return auVar8;
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_077dcc78) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_065eaec0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_077dcc78,0);
LAB_065eaec0:
                    /* WARNING: Could not recover jumptable at 0x065eaed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar8 = (*(code *)*puVar2)(plVar7,param_2,puVar2[1]);
  return auVar8;
}

