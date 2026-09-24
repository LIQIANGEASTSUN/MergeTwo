/* Ghidra 12.1.2 native pseudocode; RVA 0x4C05720; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.get_ToolsRequiredByMetagameBooster; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___get_ToolsRequiredByMetagameBooster
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 extraout_x1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar11;
  undefined1 auVar10 [16];
  
  if ((bRam0000000007e1ae82 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff50);
    bRam0000000007e1ae82 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x58);
  if (plVar7 != (long *)0x0) {
    lVar2 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777ff50) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar6 + 10) * 0x10 + 0x138);
          goto LAB_04d057b0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    param_3 = 10;
    puVar1 = (undefined8 *)func_0x03256b10(plVar7);
LAB_04d057b0:
    lVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if ((lVar2 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
      fVar11 = *(float *)(lVar2 + 0xf0);
      fVar9 = (float)func_0x0660548c(*(long *)(param_1 + 0x70),0);
      return ZEXT416((uint)(fVar11 * fVar9));
    }
  }
  func_0x03280cac();
  lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = func_0x0325681c();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = func_0x0325681c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c();
      lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    uVar8 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c(lVar3);
    }
    lVar2 = func_0x03280ca0(lVar3);
    lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    (*(code *)**(undefined8 **)(lVar3 + 0x30))(lVar2,uVar8,*(undefined8 *)(lVar3 + 0x28));
    lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
      lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar3 + 0xb8) + 8) = lVar2;
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar3 + 0xb8) + 8,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x04d05940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38))
            (extraout_x1,lVar2);
  auVar10._4_4_ = extraout_var;
  auVar10._0_4_ = extraout_s0;
  auVar10._8_8_ = extraout_var_00;
  return auVar10;
}

