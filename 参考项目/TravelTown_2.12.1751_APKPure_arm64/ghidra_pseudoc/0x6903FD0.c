/* Ghidra 12.1.2 native pseudocode; RVA 0x6903FD0; MergeEngine.ECS.Components.Board.BoardQueueComponent.NotifyQueueChanged; status ok */


/* WARNING: Possible PIC construction at 0x04321a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04321a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a04094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04321a54) */
/* WARNING: Removing unreachable block (ram,0x04321a18) */
/* WARNING: Removing unreachable block (ram,0x04d0f32c) */
/* WARNING: Removing unreachable block (ram,0x04d0f33c) */
/* WARNING: Removing unreachable block (ram,0x04d0f350) */
/* WARNING: Removing unreachable block (ram,0x04d0f36c) */
/* WARNING: Removing unreachable block (ram,0x04d0f358) */
/* WARNING: Removing unreachable block (ram,0x06a04098) */

void MergeEngine_ECS_Components_Board_BoardQueueComponent__NotifyQueueChanged(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000007e29921 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826940);
    bRam0000000007e29921 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x58);
  uVar8 = func_0x06a048b4(param_1);
  if (lVar9 == 0) {
    lVar9 = func_0x03280cac();
    if ((bRam0000000007e29916 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07826970);
      bRam0000000007e29916 = 1;
    }
    puVar4 = PTR_DAT_07826970;
    if (*(long *)(lVar9 + 0x28) != 0) {
      func_0x054f0998(*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_07826970);
      if (*(long *)(lVar9 + 0x30) != 0) {
        func_0x054f0998(*(long *)(lVar9 + 0x30),*(undefined8 *)puVar4);
        *(undefined1 *)(lVar9 + 0x50) = 0;
        puVar7 = (undefined8 *)(lVar9 + 0x40);
        *puVar7 = 0;
        goto SUB_032809c4;
      }
    }
    lVar9 = func_0x03280cac();
    puVar7 = (undefined8 *)(lVar9 + 0x40);
    *puVar7 = 0;
  }
  else {
    plVar5 = (long *)func_0x039574b0(*(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)PTR_DAT_07826940 + 0x20) + 0xc0)
                                      + 0x20));
    if (plVar5 == (long *)0x0) {
      auVar10 = func_0x03280cac();
      puVar7 = (undefined8 *)(auVar10._0_8_ + 0x20);
      *puVar7 = auVar10._8_8_;
    }
    else {
      puVar7 = (undefined8 *)(lVar9 + 0x20);
      uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*puVar7,uVar8,*(undefined8 *)(*plVar5 + 0x1c0));
      if ((uVar6 & 1) != 0) {
        return;
      }
      *(undefined8 *)(lVar9 + 0x20) = uVar8;
    }
  }
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

