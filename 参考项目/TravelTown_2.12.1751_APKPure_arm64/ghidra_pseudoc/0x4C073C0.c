/* Ghidra 12.1.2 native pseudocode; RVA 0x4C073C0; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.BoostRequiredToolWeights; status ok */


void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___BoostRequiredToolWeights
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  if ((bRam0000000007e1ae91 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780108);
    func_0x03280a18(PTR_DAT_077800b0);
    func_0x03280a18(PTR_DAT_07780110);
    func_0x03280a18(PTR_DAT_07780118);
    bRam0000000007e1ae91 = 1;
  }
  puVar3 = PTR_DAT_07780118;
  puVar2 = PTR_DAT_07780110;
  puVar1 = PTR_DAT_07780108;
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar13 = 0;
      do {
        uVar9 = func_0x041e65b8(param_2,iVar13,*(undefined8 *)puVar2);
        if (param_3 == 0) goto LAB_04d07528;
        uVar9 = func_0x053bbf78(param_3,uVar9 >> 0x20,*(undefined8 *)puVar1);
        if ((uVar9 & 1) != 0) {
          fVar14 = (float)(*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x128))
                                    (param_1);
          iVar8 = func_0x041e65b8(param_2,iVar13,*(undefined8 *)puVar2);
          uVar10 = func_0x041e65b8(param_2,iVar13,*(undefined8 *)puVar2);
          uVar9 = 0x80000000;
          if (fVar14 * (float)iVar8 != INFINITY) {
            uVar9 = (ulong)(uint)(int)(fVar14 * (float)iVar8);
          }
          func_0x041e660c(param_2,iVar13,uVar9 | uVar10 & 0xffffffff00000000,*(undefined8 *)puVar3);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(param_2 + 0x18));
    }
    return;
  }
LAB_04d07528:
  auVar15 = func_0x03280cac();
  puVar7 = PTR_DAT_07780140;
  puVar6 = PTR_DAT_07780138;
  puVar5 = PTR_DAT_07780130;
  puVar4 = PTR_DAT_07780128;
  puVar3 = PTR_DAT_07780120;
  puVar2 = PTR_DAT_0777ebc8;
  puVar1 = PTR_DAT_0777ebb0;
  lVar11 = auVar15._0_8_;
  if ((bRam0000000007e1ae92 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780128);
    func_0x03280a18(PTR_DAT_0777ebb0);
    func_0x03280a18(PTR_DAT_07780138);
    func_0x03280a18(PTR_DAT_07780130);
    func_0x03280a18(PTR_DAT_0777ebc8);
    func_0x03280a18(PTR_DAT_07780120);
    func_0x03280a18(PTR_DAT_07780140);
    bRam0000000007e1ae92 = 1;
  }
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04fb4e7c(uVar12,*(undefined8 *)puVar4);
  *(undefined8 *)(lVar11 + 0x78) = uVar12;
  func_0x032809c4((undefined8 *)(lVar11 + 0x78),uVar12);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x04f610a8(uVar12,*(undefined8 *)puVar6);
  *(undefined8 *)(lVar11 + 0x80) = uVar12;
  func_0x032809c4((undefined8 *)(lVar11 + 0x80),uVar12);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04f2ad28(uVar12,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar11 + 0x88) = uVar12;
  func_0x032809c4((undefined8 *)(lVar11 + 0x88),uVar12);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x06898a68(uVar12,0);
  *(undefined8 *)(lVar11 + 0x90) = uVar12;
  func_0x032809c4((undefined8 *)(lVar11 + 0x90),uVar12);
                    /* WARNING: Could not recover jumptable at 0x04d076a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar15._8_8_ + 0x20) + 0xc0) + 0x130))(lVar11);
  return;
}

