/* Ghidra 12.1.2 native pseudocode; RVA 0x6A981CC; Merger.MergeBoard.Extensions.FeedingCombinationComponentExtensions.GetCombinationsInProgress; status ok */


/* WARNING: Possible PIC construction at 0x06b98350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b98354) */
/* WARNING: Removing unreachable block (ram,0x06b98458) */
/* WARNING: Removing unreachable block (ram,0x06b98358) */
/* WARNING: Removing unreachable block (ram,0x06b9845c) */
/* WARNING: Removing unreachable block (ram,0x06b983b4) */
/* WARNING: Removing unreachable block (ram,0x06b983c0) */
/* WARNING: Removing unreachable block (ram,0x06b98460) */
/* WARNING: Removing unreachable block (ram,0x06b983c4) */
/* WARNING: Removing unreachable block (ram,0x06b98464) */
/* WARNING: Removing unreachable block (ram,0x06b983e0) */
/* WARNING: Removing unreachable block (ram,0x06b98408) */
/* WARNING: Removing unreachable block (ram,0x06b983f0) */

undefined1  [16]
Merger_MergeBoard_Extensions_FeedingCombinationComponentExtensions__GetCombinationsInProgress
          (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  undefined8 extraout_x1_00;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_077cf4f0;
  puVar1 = PTR_DAT_077cf4e8;
  uStack_68 = param_1;
  if ((bRam0000000007e2a822 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782e948);
    func_0x03280a18(PTR_DAT_077cd970);
    func_0x03280a18(PTR_DAT_077cd978);
    func_0x03280a18(PTR_DAT_077cd980);
    func_0x03280a18(PTR_DAT_0776e5a8);
    func_0x03280a18(PTR_DAT_077e6518);
    func_0x03280a18(PTR_DAT_077cd9a0);
    func_0x03280a18(PTR_DAT_077cf4e8);
    func_0x03280a18(PTR_DAT_07751a50);
    func_0x03280a18(PTR_DAT_077cf4f0);
    func_0x03280a18(PTR_DAT_07832590);
    func_0x03280a18(PTR_DAT_07832598);
    bRam0000000007e2a822 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  auVar8._0_8_ = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04143c38(auVar8._0_8_,*(undefined8 *)puVar1);
  auVar7 = func_0x06b86b60(&uStack_68);
  puVar2 = PTR_DAT_07832598;
  puVar1 = PTR_DAT_077cd978;
  uVar5 = auVar7._8_8_;
  if (auVar7._0_8_ != 0) {
    if (*(int *)(auVar7._0_8_ + 0x18) == 0) goto LAB_06b98434;
    if (param_2 != 0) {
      func_0x04145068(&uStack_98,param_2,*(undefined8 *)PTR_DAT_077cd9a0);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      uVar3 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077cd970);
        uVar5 = extraout_x1;
        goto LAB_06b98434;
      }
      uVar3 = func_0x03280ca0(*(undefined8 *)puVar2);
      goto SUB_057da5fc;
    }
  }
  auVar9 = func_0x03280cac();
  if (auVar9._8_4_ == 1) {
    plVar4 = (long *)func_0x072ce910(auVar9._0_8_);
    lVar6 = *plVar4;
    func_0x072ce920();
    func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077cd970);
    uVar5 = extraout_x1_00;
    if (lVar6 == 0) {
LAB_06b98434:
      auVar8._8_8_ = uVar5;
      return auVar8;
    }
    func_0x03280ca4(lVar6);
  }
  func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077cd970);
  func_0x03365958(auVar9._0_8_);
  func_0x03280ca4(0);
  uVar3 = func_0x02f09514();
SUB_057da5fc:
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar3;
  return auVar7;
}

