/* Ghidra 12.1.2 native pseudocode; RVA 0x5FE8FE0; MergeEngine.Util.ItemSpawningQueue.AddWeightedItems; status ok */

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

void MergeEngine_Util_ItemSpawningQueue__AddWeightedItems
               (long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long extraout_x1;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [12];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  puVar3 = PTR_DAT_077cd8e0;
  if ((bRam0000000007e2362a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cd8e0);
    func_0x03280a18(PTR_DAT_077cd8e8);
    func_0x03280a18(PTR_DAT_077cd8f0);
    func_0x03280a18(PTR_DAT_077cd8f8);
    func_0x03280a18(PTR_DAT_077cd8d0);
    func_0x03280a18(PTR_DAT_077cd900);
    func_0x03280a18(PTR_DAT_077cd908);
    func_0x03280a18(PTR_DAT_077cd910);
    func_0x03280a18(PTR_DAT_077cd918);
    func_0x03280a18(PTR_DAT_077cd920);
    func_0x03280a18(PTR_DAT_077cd928);
    func_0x03280a18(PTR_DAT_077cd930);
    func_0x03280a18(PTR_DAT_077cd938);
    bRam0000000007e2362a = 1;
  }
  uVar6 = func_0x03ce830c(param_3,*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_077cd928;
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_077cd928;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar7 = *(long *)puVar3;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar7 = *(long *)puVar3;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8e8);
    func_0x04e5231c(lVar9,uVar10,*(undefined8 *)PTR_DAT_077cd910,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
    *plVar8 = lVar9;
    func_0x032809c4(plVar8,lVar9);
  }
  if (param_3 != 0) {
    func_0x04146094(param_3,lVar9,*(undefined8 *)PTR_DAT_077cd900);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar7 = *(long *)puVar3;
    }
    lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x48);
    if (lVar9 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar7 = *(long *)puVar3;
      }
      uVar10 = **(undefined8 **)(lVar7 + 0xb8);
      lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8f8);
      func_0x05356664(lVar9,uVar10,*(undefined8 *)PTR_DAT_077cd918,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
      *plVar8 = lVar9;
      func_0x032809c4(plVar8,lVar9);
      lVar7 = *(long *)puVar3;
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar7 = *(long *)puVar3;
    }
    lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x50);
    if (lVar11 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar7 = *(long *)puVar3;
      }
      uVar10 = **(undefined8 **)(lVar7 + 0xb8);
      lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8f0);
      func_0x053569b8(lVar11,uVar10,*(undefined8 *)PTR_DAT_077cd920,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
      *plVar8 = lVar11;
      func_0x032809c4(plVar8,lVar11);
    }
    lVar7 = func_0x03f36a2c(param_3,lVar9,lVar11,*(undefined8 *)PTR_DAT_077cd938);
    puVar5 = PTR_DAT_077cd930;
    puVar3 = PTR_DAT_077cd8d0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0x18);
      while( true ) {
        if (param_4 <= iVar1) {
          return;
        }
        if (lVar7 == 0) break;
        uVar10 = func_0x04a44e1c(lVar7,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar5);
        lVar9 = *(long *)(param_2 + 0x10);
        lVar11 = *(long *)puVar3;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar2 = *(uint *)(param_2 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(param_2,uVar10,
                          *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        iVar1 = *(int *)(param_2 + 0x18);
      }
    }
  }
  func_0x03280cac();
  puVar3 = PTR_DAT_077cd928;
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
  lVar7 = *(long *)puVar3;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar7 = *(long *)puVar3;
  }
  puVar4 = PTR_DAT_077cd958;
  puVar5 = PTR_DAT_077cd950;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar7 = *(long *)puVar3;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd988);
    func_0x053569b8(lVar9,uVar10,*(undefined8 *)PTR_DAT_077cd9b0,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar8 = lVar9;
    func_0x032809c4(plVar8,lVar9);
  }
  uVar10 = func_0x03d53498(extraout_x1,lVar9,*(undefined8 *)puVar4);
  uVar10 = func_0x03d3c654(uVar10,*(undefined8 *)puVar5);
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x03280b8c(lVar7);
    lVar7 = *(long *)puVar3;
  }
  puVar5 = PTR_DAT_077cd968;
  puVar3 = PTR_DAT_077cd960;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c(lVar7);
      lVar7 = *(long *)PTR_DAT_077cd928;
    }
    puVar4 = PTR_DAT_077cd928;
    uVar12 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd990);
    func_0x053569b8(lVar9,uVar12,*(undefined8 *)PTR_DAT_077cd9b8,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar8 = lVar9;
    func_0x032809c4(plVar8,lVar9);
  }
  uVar10 = func_0x03d50a94(uVar10,lVar9,*(undefined8 *)puVar3);
  func_0x03d5ffd0(uVar10,*(undefined8 *)puVar5);
  if (extraout_x1 == 0) {
    auVar13 = func_0x03280cac();
    if (auVar13._8_4_ == 1) {
      plVar8 = (long *)func_0x072ce910(auVar13._0_8_);
      lVar7 = *plVar8;
      func_0x072ce920();
      func_0x051159b0(&uStack_d0,*(undefined8 *)PTR_DAT_077cd970);
      if (lVar7 == 0) {
        return;
      }
      func_0x03280ca4(lVar7);
    }
    func_0x051159b0(&uStack_d0,*(undefined8 *)PTR_DAT_077cd970);
    func_0x03365958(auVar13._0_8_);
    func_0x03280ca4(0);
    func_0x02f09514();
  }
  else {
    func_0x04145068(&uStack_e8,extraout_x1,*(undefined8 *)PTR_DAT_077cd9a0);
    uStack_c8 = uStack_e0;
    uStack_d0 = uStack_e8;
    uStack_c0 = uStack_d8;
    uVar6 = func_0x051159b4(&uStack_d0,*(undefined8 *)PTR_DAT_077cd978);
    if ((uVar6 & 1) == 0) {
      func_0x051159b0(&uStack_d0,*(undefined8 *)PTR_DAT_077cd970);
      return;
    }
    func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd9e0);
  }
  return;
}

