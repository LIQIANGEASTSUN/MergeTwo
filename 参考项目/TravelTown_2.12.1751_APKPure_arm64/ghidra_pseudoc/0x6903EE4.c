/* Ghidra 12.1.2 native pseudocode; RVA 0x6903EE4; MergeEngine.ECS.Components.Board.BoardQueueComponent.InsertSorted; status ok */


/* WARNING: Possible PIC construction at 0x054f06f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x054f0770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x054f081c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x054f0820) */
/* WARNING: Removing unreachable block (ram,0x054f0774) */
/* WARNING: Removing unreachable block (ram,0x054f0790) */
/* WARNING: Removing unreachable block (ram,0x054f0780) */
/* WARNING: Removing unreachable block (ram,0x06a04098) */

long * MergeEngine_ECS_Components_Board_BoardQueueComponent__InsertSorted
                 (undefined8 param_1,long param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000007e29922 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826978);
    func_0x03280a18(PTR_DAT_07826980);
    func_0x03280a18(PTR_DAT_07826988);
    func_0x03280a18(PTR_DAT_07826990);
    func_0x03280a18(PTR_DAT_07826998);
    bRam0000000007e29922 = 1;
  }
  puVar4 = PTR_DAT_07826978;
  if (param_2 == 0) {
LAB_06a03fcc:
    lVar9 = func_0x03280cac();
    if ((bRam0000000007e29921 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07826940);
      bRam0000000007e29921 = 1;
    }
    lVar10 = *(long *)(lVar9 + 0x58);
    uVar11 = func_0x06a048b4(lVar9);
    if (lVar10 == 0) {
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
          plVar6 = (long *)(lVar9 + 0x40);
          *plVar6 = 0;
          goto SUB_032809c4;
        }
      }
      lVar9 = func_0x03280cac();
      plVar6 = (long *)(lVar9 + 0x40);
      *plVar6 = 0;
    }
    else {
      plVar5 = (long *)func_0x039574b0(*(undefined8 *)
                                        (*(long *)(*(long *)(*(long *)PTR_DAT_07826940 + 0x20) +
                                                  0xc0) + 0x20));
      if (plVar5 == (long *)0x0) {
        auVar12 = func_0x03280cac();
        plVar6 = (long *)(auVar12._0_8_ + 0x20);
        *plVar6 = auVar12._8_8_;
      }
      else {
        plVar6 = (long *)(lVar10 + 0x20);
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))
                                   (plVar5,*plVar6,uVar11,*(undefined8 *)(*plVar5 + 0x1c0));
        if (((ulong)plVar5 & 1) != 0) {
          return plVar5;
        }
        *(undefined8 *)(lVar10 + 0x20) = uVar11;
      }
    }
  }
  else {
    lVar9 = *(long *)(param_2 + 0x10);
    while( true ) {
      if (lVar9 == 0) {
        lVar9 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_07826990 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c(lVar9);
        }
        plVar6 = (long *)func_0x03280ca0(lVar9);
        func_0x054ed38c(plVar6,param_2,param_3);
        if (*(long *)(param_2 + 0x10) == 0) {
          func_0x054f12d8(param_2,plVar6);
        }
        else {
          func_0x054f125c(param_2,*(long *)(param_2 + 0x10),plVar6);
        }
        return plVar6;
      }
      if ((*(long *)(lVar9 + 0x28) == 0) || (param_3 == 0)) goto LAB_06a03fcc;
      if (*(long *)(*(long *)(lVar9 + 0x28) + 0x30) <= *(long *)(param_3 + 0x30)) break;
      lVar9 = func_0x054ed3d8(lVar9,*(undefined8 *)puVar4);
    }
    lVar8 = *(long *)PTR_DAT_07826988;
    lVar7 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20);
    lVar10 = lVar8;
    func_0x054f146c();
    if (lVar9 == 0) {
      auVar12 = func_0x03280cac();
      lVar8 = auVar12._0_8_;
      uVar11 = func_0x054f146c(lVar8,auVar12._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x20));
      func_0x054f13d4(uVar11,lVar7,
                      *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x38));
      lVar9 = lVar7;
      func_0x054f125c(lVar8,auVar12._8_8_);
      if (lVar7 == 0) {
        auVar12 = func_0x03280cac();
        lVar10 = auVar12._0_8_;
        lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c(lVar9);
        }
        plVar5 = (long *)func_0x03280ca0(lVar9);
        func_0x054ed38c(plVar5,lVar10,auVar12._8_8_);
        plVar6 = (long *)(lVar10 + 0x10);
        if (*plVar6 == 0) {
          func_0x054f12d8(lVar10,plVar5);
          return plVar5;
        }
        func_0x054f125c(lVar10,*plVar6,plVar5);
        *(long **)(lVar10 + 0x10) = plVar5;
      }
      else {
        plVar6 = (long *)(lVar7 + 0x10);
        *plVar6 = lVar8;
      }
    }
    else {
      uVar11 = *(undefined8 *)(lVar9 + 0x10);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar5 = (long *)func_0x03280ca0();
      func_0x054ed38c(plVar5,uVar11,param_3);
      func_0x054f125c(param_2,lVar9,plVar5);
      plVar6 = (long *)(param_2 + 0x10);
      if (lVar9 != *plVar6) {
        return plVar5;
      }
      *plVar6 = (long)plVar5;
    }
  }
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return plVar6;
}

