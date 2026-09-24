/* Ghidra 12.1.2 native pseudocode; RVA 0x5FE932C; MergeEngine.Util.ItemSpawningQueue.AddCombinationWeightedItems; status ok */

/* WARNING: Possible PIC construction at 0x060e96dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x060e96e0) */
/* WARNING: Removing unreachable block (ram,0x060e96e4) */
/* WARNING: Removing unreachable block (ram,0x060e9710) */
/* WARNING: Removing unreachable block (ram,0x060e9718) */
/* WARNING: Removing unreachable block (ram,0x060e9720) */
/* WARNING: Removing unreachable block (ram,0x060e972c) */
/* WARNING: Removing unreachable block (ram,0x060e975c) */
/* WARNING: Removing unreachable block (ram,0x060e9780) */
/* WARNING: Removing unreachable block (ram,0x060e97b8) */
/* WARNING: Removing unreachable block (ram,0x060e97e8) */
/* WARNING: Removing unreachable block (ram,0x060e97f4) */
/* WARNING: Removing unreachable block (ram,0x060e9800) */
/* WARNING: Removing unreachable block (ram,0x060e9808) */
/* WARNING: Removing unreachable block (ram,0x060e9814) */
/* WARNING: Removing unreachable block (ram,0x060e985c) */
/* WARNING: Removing unreachable block (ram,0x060e9860) */
/* WARNING: Removing unreachable block (ram,0x060e9884) */
/* WARNING: Removing unreachable block (ram,0x060e9890) */
/* WARNING: Removing unreachable block (ram,0x060e989c) */
/* WARNING: Removing unreachable block (ram,0x060e98a4) */
/* WARNING: Removing unreachable block (ram,0x060e98b0) */
/* WARNING: Removing unreachable block (ram,0x060e98fc) */
/* WARNING: Removing unreachable block (ram,0x060e9904) */
/* WARNING: Removing unreachable block (ram,0x060e9910) */
/* WARNING: Removing unreachable block (ram,0x060e991c) */
/* WARNING: Removing unreachable block (ram,0x060e9924) */
/* WARNING: Removing unreachable block (ram,0x060e9930) */
/* WARNING: Removing unreachable block (ram,0x060e9980) */
/* WARNING: Removing unreachable block (ram,0x060e99a0) */
/* WARNING: Removing unreachable block (ram,0x060e99a8) */
/* WARNING: Removing unreachable block (ram,0x060e99bc) */
/* WARNING: Removing unreachable block (ram,0x060e9ab0) */
/* WARNING: Removing unreachable block (ram,0x060e9ab4) */
/* WARNING: Removing unreachable block (ram,0x060e9ab8) */
/* WARNING: Removing unreachable block (ram,0x060e99cc) */
/* WARNING: Removing unreachable block (ram,0x060e99d8) */
/* WARNING: Removing unreachable block (ram,0x060e9abc) */
/* WARNING: Removing unreachable block (ram,0x060e99dc) */
/* WARNING: Removing unreachable block (ram,0x060e99f8) */
/* WARNING: Removing unreachable block (ram,0x060e9a0c) */
/* WARNING: Removing unreachable block (ram,0x060e9a1c) */
/* WARNING: Removing unreachable block (ram,0x060e9ac0) */
/* WARNING: Removing unreachable block (ram,0x060e9ac4) */
/* WARNING: Removing unreachable block (ram,0x060e9ac8) */
/* WARNING: Removing unreachable block (ram,0x060e9acc) */
/* WARNING: Removing unreachable block (ram,0x060e9ad0) */
/* WARNING: Removing unreachable block (ram,0x060e9ad4) */
/* WARNING: Removing unreachable block (ram,0x060e9ad8) */
/* WARNING: Removing unreachable block (ram,0x060e9adc) */
/* WARNING: Removing unreachable block (ram,0x060e9ae0) */
/* WARNING: Removing unreachable block (ram,0x060e9ae4) */
/* WARNING: Removing unreachable block (ram,0x060e9a34) */
/* WARNING: Removing unreachable block (ram,0x060e9a64) */
/* WARNING: Removing unreachable block (ram,0x060e9a44) */

void MergeEngine_Util_ItemSpawningQueue__AddCombinationWeightedItems
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [12];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR_DAT_077cd928;
  if ((bRam0000000007e23626 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cd8e0);
    func_0x03280a18(PTR_DAT_077cd8e8);
    func_0x03280a18(PTR_DAT_077cd940);
    func_0x03280a18(PTR_DAT_077cd948);
    func_0x03280a18(PTR_DAT_077cd950);
    func_0x03280a18(PTR_DAT_077cd958);
    func_0x03280a18(PTR_DAT_077cd960);
    func_0x03280a18(PTR_DAT_077cd968);
    func_0x03280a18(PTR_DAT_077cd970);
    func_0x03280a18(PTR_DAT_077cd978);
    func_0x03280a18(PTR_DAT_077cd980);
    func_0x03280a18(PTR_DAT_077cd8f0);
    func_0x03280a18(PTR_DAT_077cd988);
    func_0x03280a18(PTR_DAT_077cd8f8);
    func_0x03280a18(PTR_DAT_077cd990);
    func_0x03280a18(PTR_DAT_077cd8d0);
    func_0x03280a18(PTR_DAT_077cd998);
    func_0x03280a18(PTR_DAT_077cd9a0);
    func_0x03280a18(PTR_DAT_077cd900);
    func_0x03280a18(PTR_DAT_077cd850);
    func_0x03280a18(PTR_DAT_077cd908);
    func_0x03280a18(PTR_DAT_077cd848);
    func_0x03280a18(PTR_DAT_077cd9a8);
    func_0x03280a18(PTR_DAT_077cd9b0);
    func_0x03280a18(PTR_DAT_077cd9b8);
    func_0x03280a18(PTR_DAT_077cd9c0);
    func_0x03280a18(PTR_DAT_077cd9c8);
    func_0x03280a18(PTR_DAT_077cd9d0);
    func_0x03280a18(PTR_DAT_077cd9d8);
    func_0x03280a18(PTR_DAT_077cd9e0);
    func_0x03280a18(PTR_DAT_077cd928);
    func_0x03280a18(PTR_DAT_077cd930);
    func_0x03280a18(PTR_DAT_077cd938);
    bRam0000000007e23626 = 1;
  }
  lVar4 = *(long *)puVar1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_077cd958;
  puVar3 = PTR_DAT_077cd950;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar4 = *(long *)puVar1;
    }
    uVar8 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd988);
    func_0x053569b8(lVar7,uVar8,*(undefined8 *)PTR_DAT_077cd9b0,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar5 = lVar7;
    func_0x032809c4(plVar5,lVar7);
  }
  uVar8 = func_0x03d53498(param_2,lVar7,*(undefined8 *)puVar2);
  uVar8 = func_0x03d3c654(uVar8,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x03280b8c(lVar4);
    lVar4 = *(long *)puVar1;
  }
  puVar3 = PTR_DAT_077cd968;
  puVar1 = PTR_DAT_077cd960;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c(lVar4);
      lVar4 = *(long *)PTR_DAT_077cd928;
    }
    puVar2 = PTR_DAT_077cd928;
    uVar9 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd990);
    func_0x053569b8(lVar7,uVar9,*(undefined8 *)PTR_DAT_077cd9b8,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = lVar7;
    func_0x032809c4(plVar5,lVar7);
  }
  uVar8 = func_0x03d50a94(uVar8,lVar7,*(undefined8 *)puVar1);
  func_0x03d5ffd0(uVar8,*(undefined8 *)puVar3);
  if (param_2 == 0) {
    auVar10 = func_0x03280cac();
    if (auVar10._8_4_ == 1) {
      plVar5 = (long *)func_0x072ce910(auVar10._0_8_);
      lVar4 = *plVar5;
      func_0x072ce920();
      func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077cd970);
      if (lVar4 == 0) {
        return;
      }
      func_0x03280ca4(lVar4);
    }
    func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077cd970);
    func_0x03365958(auVar10._0_8_);
    func_0x03280ca4(0);
    func_0x02f09514();
  }
  else {
    func_0x04145068(&uStack_98,param_2,*(undefined8 *)PTR_DAT_077cd9a0);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    uVar6 = func_0x051159b4(&uStack_80,*(undefined8 *)PTR_DAT_077cd978);
    if ((uVar6 & 1) == 0) {
      func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077cd970);
      return;
    }
    func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd9e0);
  }
  return;
}

