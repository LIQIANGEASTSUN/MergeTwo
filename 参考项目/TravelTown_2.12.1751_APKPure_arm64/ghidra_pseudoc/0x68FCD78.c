/* Ghidra 12.1.2 native pseudocode; RVA 0x68FCD78; MergeEngine.ECS.Components.Items.InteractionComponent.FillItemsToConsume; status ok */


/* WARNING: Possible PIC construction at 0x069fce9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069fcf48: Changing call to branch */

void MergeEngine_ECS_Components_Items_InteractionComponent__FillItemsToConsume
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar5 = PTR_DAT_07826710;
  if ((bRam0000000007e298ab & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826718);
    func_0x03280a18(PTR_DAT_07826720);
    func_0x03280a18(PTR_DAT_077f1b00);
    func_0x03280a18(PTR_DAT_077e6770);
    func_0x03280a18(PTR_DAT_07826728);
    func_0x03280a18(PTR_DAT_077f1b08);
    func_0x03280a18(PTR_DAT_07826730);
    func_0x03280a18(PTR_DAT_07826738);
    func_0x03280a18(PTR_DAT_07826710);
    bRam0000000007e298ab = 1;
  }
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar6 = *(long *)puVar5;
  }
  puVar4 = PTR_DAT_07826718;
  lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar6 = *(long *)puVar5;
    }
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    uVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07826728);
    func_0x053569b8(uVar7,uVar10,*(undefined8 *)PTR_DAT_07826730,0);
    puVar8 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *puVar8 = uVar7;
  }
  else {
    uVar7 = func_0x03d53498(param_2,lVar9,*(undefined8 *)PTR_DAT_07826720);
    uVar7 = func_0x03d3c654(uVar7,*(undefined8 *)puVar4);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      func_0x03280b8c(lVar6);
      lVar6 = *(long *)puVar5;
    }
    puVar4 = PTR_DAT_077e6770;
    lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar9 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        func_0x03280b8c(lVar6);
        lVar6 = *(long *)puVar5;
      }
      uVar10 = **(undefined8 **)(lVar6 + 0xb8);
      uVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077f1b08);
      func_0x053569b8(uVar7,uVar10,*(undefined8 *)PTR_DAT_07826738,0);
      puVar8 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *puVar8 = uVar7;
    }
    else {
      uVar7 = func_0x03d50a94(uVar7,lVar9,*(undefined8 *)PTR_DAT_077f1b00);
      uVar7 = func_0x03d5b8d8(uVar7,*(undefined8 *)puVar4);
      puVar8 = (undefined8 *)(param_1 + 0x58);
      *puVar8 = uVar7;
    }
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

