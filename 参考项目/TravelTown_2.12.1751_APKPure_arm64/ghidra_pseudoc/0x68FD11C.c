/* Ghidra 12.1.2 native pseudocode; RVA 0x68FD11C; MergeEngine.ECS.Components.Items.InteractionComponent.TryInvokeCallback; status ok */


/* WARNING: Possible PIC construction at 0x069fd250: Changing call to branch */

void MergeEngine_ECS_Components_Items_InteractionComponent__TryInvokeCallback
               (long param_1,undefined4 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_48;
  
  if ((bRam0000000007e298ad & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c7f28);
    func_0x03280a18(PTR_DAT_07826750);
    func_0x03280a18(PTR_DAT_07826748);
    func_0x03280a18(PTR_DAT_0774e810);
    func_0x03280a18(PTR_DAT_077c7f30);
    func_0x03280a18(PTR_DAT_07826758);
    func_0x03280a18(PTR_DAT_07826710);
    bRam0000000007e298ad = 1;
  }
  lStack_48 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x04f37608(*(long *)(param_1 + 0x78),param_2,&lStack_48,*(undefined8 *)PTR_DAT_07826748);
    lVar5 = lStack_48;
    puVar4 = PTR_DAT_07826710;
    if (lStack_48 != 0) {
      lVar6 = *(long *)PTR_DAT_07826710;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar6 = *(long *)puVar4;
      }
      lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
      if (lVar9 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar6 = *(long *)puVar4;
        }
        uVar10 = **(undefined8 **)(lVar6 + 0xb8);
        uVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077c7f28);
        func_0x054221d4(uVar7,uVar10,*(undefined8 *)PTR_DAT_07826758,0);
        puVar8 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
        *puVar8 = uVar7;
        goto SUB_032809c4;
      }
      func_0x04144fb0(lVar5,lVar9,*(undefined8 *)PTR_DAT_077c7f30);
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_069fd2b4;
      func_0x04f36fe0(*(long *)(param_1 + 0x78),param_2,*(undefined8 *)PTR_DAT_07826750);
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      func_0x053b84cc(*(long *)(param_1 + 0x80),param_2,*(undefined8 *)PTR_DAT_0774e810);
      return;
    }
  }
LAB_069fd2b4:
  func_0x03280cac();
  puVar4 = PTR_DAT_07826710;
  if ((bRam0000000007e298ae & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826710);
    bRam0000000007e298ae = 1;
  }
  uVar7 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x057da5fc(uVar7,0);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar7;
  puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
SUB_032809c4:
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

