/* Ghidra 12.1.2 native pseudocode; RVA 0x68FCF84; MergeEngine.ECS.Components.Items.InteractionComponent.AddCostConsumedCallback; status ok */


/* WARNING: Possible PIC construction at 0x069fd250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069fd0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x069fd0f0) */

void MergeEngine_ECS_Components_Items_InteractionComponent__AddCostConsumedCallback
               (long param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long alStack_78 [2];
  long lStack_28;
  
  if ((bRam0000000007e298ac & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826740);
    func_0x03280a18(PTR_DAT_07826748);
    func_0x03280a18(PTR_DAT_0774e8c0);
    func_0x03280a18(PTR_DAT_0776a610);
    func_0x03280a18(PTR_DAT_07784348);
    func_0x03280a18(PTR_DAT_0776a650);
    bRam0000000007e298ac = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar6 = func_0x053b79bc(*(long *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88),
                            *(undefined8 *)PTR_DAT_0774e8c0);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_1 + 0x78) != 0) {
        uVar6 = func_0x04f37608(*(long *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x88),&lStack_28
                                ,*(undefined8 *)PTR_DAT_07826748);
        if ((uVar6 & 1) == 0) {
          lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776a650);
          func_0x04143c38(lVar8,*(undefined8 *)PTR_DAT_07784348);
          lStack_28 = lVar8;
          if (*(long *)(param_1 + 0x78) == 0) goto LAB_069fd118;
          func_0x04f35b58(*(long *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x88),lVar8,
                          *(undefined8 *)PTR_DAT_07826740);
        }
        if (lStack_28 != 0) {
          lVar8 = *(long *)(lStack_28 + 0x10);
          lVar10 = *(long *)PTR_DAT_0776a610;
          *(int *)(lStack_28 + 0x1c) = *(int *)(lStack_28 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar2 = *(uint *)(lStack_28 + 0x18);
            if (*(uint *)(lVar8 + 0x18) <= uVar2) {
              func_0x0414446c(lStack_28,param_2,
                              *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              return;
            }
            *(uint *)(lStack_28 + 0x18) = uVar2 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *plVar9 = param_2;
            goto SUB_032809c4;
          }
        }
      }
    }
    else if (param_2 != 0) {
      (**(code **)(param_2 + 0x18))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28))
      ;
      return;
    }
  }
LAB_069fd118:
  auVar13 = func_0x03280cac();
  lVar8 = auVar13._0_8_;
  alStack_78[1] = 0x69fd11c;
  uVar6 = auVar13._8_8_ & 0xffffffff;
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
  alStack_78[0] = 0;
  if (*(long *)(lVar8 + 0x78) != 0) {
    func_0x04f37608(*(long *)(lVar8 + 0x78),uVar6,alStack_78,*(undefined8 *)PTR_DAT_07826748);
    lVar10 = alStack_78[0];
    puVar5 = PTR_DAT_07826710;
    if (alStack_78[0] != 0) {
      lVar7 = *(long *)PTR_DAT_07826710;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar7 = *(long *)puVar5;
      }
      lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
      if (lVar11 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar7 = *(long *)puVar5;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
        lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077c7f28);
        func_0x054221d4(lVar8,uVar12,*(undefined8 *)PTR_DAT_07826758,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
        *plVar9 = lVar8;
        goto SUB_032809c4;
      }
      func_0x04144fb0(lVar10,lVar11,*(undefined8 *)PTR_DAT_077c7f30);
      if (*(long *)(lVar8 + 0x78) == 0) goto LAB_069fd2b4;
      func_0x04f36fe0(*(long *)(lVar8 + 0x78),uVar6,*(undefined8 *)PTR_DAT_07826750);
    }
    if (*(long *)(lVar8 + 0x80) != 0) {
      func_0x053b84cc(*(long *)(lVar8 + 0x80),uVar6,*(undefined8 *)PTR_DAT_0774e810);
      return;
    }
  }
LAB_069fd2b4:
  func_0x03280cac();
  puVar5 = PTR_DAT_07826710;
  if ((bRam0000000007e298ae & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826710);
    bRam0000000007e298ae = 1;
  }
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x057da5fc(uVar12,0);
  **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar12;
  plVar9 = *(long **)(*(long *)puVar5 + 0xb8);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

