/* Ghidra 12.1.2 native pseudocode; RVA 0x6912BA4; MergeEngine.Configuration.ItemBase.GetParsedSpriteLocation; status ok */


ulong MergeEngine_Configuration_ItemBase__GetParsedSpriteLocation(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x30;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 auStack_60 [2];
  undefined *puStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  auVar7._8_8_ = unaff_x19;
  auVar7._0_8_ = unaff_x20;
  lVar6 = param_1[0xe];
  if (lVar6 == 0) {
    uVar5 = func_0x0611f910(param_1,0);
    uVar4 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    auVar8._8_8_ = uVar4;
    auVar8._0_8_ = uVar5;
    uVar5 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    puVar1 = PTR_DAT_07780698;
    uVar5 = 0;
    if ((bRam0000000007e1f2ed & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780698);
      bRam0000000007e1f2ed = 1;
    }
    uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x0599a99c();
    if (uVar3 != 0) {
      *(long *)(uVar3 + 0x48) = lVar6;
      func_0x032809c4((long *)(uVar3 + 0x48),lVar6);
      *(undefined1 *)(uVar3 + 0x50) = 0;
      *(undefined8 *)(uVar3 + 0x58) = uVar4;
      func_0x032809c4((undefined8 *)(uVar3 + 0x58),uVar4);
      return uVar3;
    }
    auVar7 = func_0x03280cac();
    unaff_x22 = PTR_DAT_07780698;
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    auStack_60[0] = 0x599ac3c;
    puStack_50 = puVar1;
    uStack_48 = uVar3;
    lStack_40 = lVar6;
    uStack_38 = uVar4;
    if ((bRam0000000007e1f2ee & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780698);
      bRam0000000007e1f2ee = 1;
    }
    uVar3 = func_0x03280ca0(*(undefined8 *)unaff_x22);
    func_0x0599a99c();
    if (uVar3 != 0) {
      *(undefined8 *)(uVar3 + 0x48) = auVar7._0_8_;
      func_0x032809c4((undefined8 *)(uVar3 + 0x48),auVar7._0_8_);
      *(undefined1 *)(uVar3 + 0x50) = 1;
      *(undefined8 *)(uVar3 + 0x58) = auVar7._8_8_;
      func_0x032809c4((undefined8 *)(uVar3 + 0x58),auVar7._8_8_);
      return uVar3;
    }
    unaff_x30 = 0x599accc;
    auVar8 = func_0x03280cac();
    unaff_x21 = 0;
  }
  puVar2 = PTR_DAT_07780698;
  puVar1 = PTR_DAT_0774e498;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x10) = auVar7;
  if ((bRam0000000007e1f2ef & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e498);
    func_0x03280a18(PTR_DAT_07780698);
    bRam0000000007e1f2ef = 1;
  }
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x0599a99c();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar4 = func_0x057225ac(auVar8._8_8_,auVar8._0_8_,0);
  if (uVar3 != 0) {
    *(undefined8 *)(uVar3 + 0x48) = uVar4;
    func_0x032809c4();
    *(undefined1 *)(uVar3 + 0x50) = 1;
    *(undefined8 *)(uVar3 + 0x58) = uVar5;
    func_0x032809c4((undefined8 *)(uVar3 + 0x58),uVar5);
    return uVar3;
  }
  lVar6 = func_0x03280cac();
  return (ulong)*(byte *)(lVar6 + 0x20);
}

