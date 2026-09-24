/* Ghidra 12.1.2 native pseudocode; RVA 0x6A58F9C; Merger.MergeBoardQueue.Models.BoardQueueModel.Enqueue; status ok */


/* WARNING: Possible PIC construction at 0x06b58fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x054f06f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x054f0770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x054f081c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x054f0774) */
/* WARNING: Removing unreachable block (ram,0x054f0790) */
/* WARNING: Removing unreachable block (ram,0x054f0780) */
/* WARNING: Removing unreachable block (ram,0x06b58fc8) */
/* WARNING: Removing unreachable block (ram,0x06b5879c) */
/* WARNING: Removing unreachable block (ram,0x054f0820) */

undefined1  [16]
Merger_MergeBoardQueue_Models_BoardQueueModel__Enqueue
          (long param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar5;
  long extraout_x1_03;
  undefined8 extraout_x1_04;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_2 == 0) {
    func_0x03280cac();
    lVar5 = extraout_x1_03;
  }
  else {
    lVar5 = 0x28;
    if (*(int *)(param_2 + 0x30) != 1) {
      lVar5 = 0x30;
    }
    lVar5 = *(long *)(param_1 + lVar5);
    param_3 = param_2;
  }
  lVar7 = param_3;
  if ((bRam0000000007e2a617 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078303e0);
    func_0x03280a18(PTR_DAT_07830358);
    func_0x03280a18(PTR_DAT_078303e8);
    func_0x03280a18(PTR_DAT_078303f0);
    func_0x03280a18(PTR_DAT_07830360);
    bRam0000000007e2a617 = 1;
  }
  puVar4 = PTR_DAT_078303e0;
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    while( true ) {
      if (lVar8 == 0) {
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_078303f0 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = func_0x0325681c(lVar7);
        }
        auVar14._0_8_ = func_0x03280ca0(lVar7);
        func_0x054ed38c(auVar14._0_8_,lVar5,param_3);
        if (*(long *)(lVar5 + 0x10) == 0) {
          func_0x054f12d8(lVar5,auVar14._0_8_);
          uVar10 = extraout_x1_02;
        }
        else {
          func_0x054f125c(lVar5,*(long *)(lVar5 + 0x10),auVar14._0_8_);
          uVar10 = extraout_x1_01;
        }
        auVar14._8_8_ = uVar10;
        return auVar14;
      }
      if ((*(long *)(lVar8 + 0x28) == 0) || (param_3 == 0)) break;
      if (*(long *)(*(long *)(lVar8 + 0x28) + 0x28) <= *(long *)(param_3 + 0x28)) {
        auVar12._0_8_ = *(long *)PTR_DAT_078303e8;
        lVar6 = *(long *)(*(long *)(*(long *)(auVar12._0_8_ + 0x20) + 0xc0) + 0x20);
        lVar7 = auVar12._0_8_;
        func_0x054f146c();
        if (lVar8 == 0) {
          auVar12 = func_0x03280cac();
          uVar10 = func_0x054f146c(auVar12._0_8_,auVar12._8_8_,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x20)
                                  );
          func_0x054f13d4(uVar10,lVar6,
                          *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x38));
          lVar5 = lVar6;
          func_0x054f125c(auVar12._0_8_,auVar12._8_8_);
          if (lVar6 == 0) {
            auVar12 = func_0x03280cac();
            lVar7 = auVar12._0_8_;
            lVar5 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = func_0x0325681c(lVar5);
            }
            auVar13._0_8_ = func_0x03280ca0(lVar5);
            func_0x054ed38c(auVar13._0_8_,lVar7,auVar12._8_8_);
            plVar9 = (long *)(lVar7 + 0x10);
            if (*plVar9 == 0) {
              func_0x054f12d8(lVar7,auVar13._0_8_);
              auVar13._8_8_ = extraout_x1_00;
              return auVar13;
            }
            func_0x054f125c(lVar7,*plVar9,auVar13._0_8_);
            *(long *)(lVar7 + 0x10) = auVar13._0_8_;
            auVar12._0_8_ = auVar13._0_8_;
          }
          else {
            plVar9 = (long *)(lVar6 + 0x10);
            *plVar9 = auVar12._0_8_;
          }
        }
        else {
          uVar10 = *(undefined8 *)(lVar8 + 0x10);
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(auVar12._0_8_ + 0x20) + 0xc0) + 8) + 0x135) &
              1) == 0) {
            func_0x0325681c();
          }
          auVar12._0_8_ = func_0x03280ca0();
          func_0x054ed38c(auVar12._0_8_,uVar10,param_3);
          func_0x054f125c(lVar5,lVar8,auVar12._0_8_);
          plVar9 = (long *)(lVar5 + 0x10);
          if (lVar8 != *plVar9) {
            auVar12._8_8_ = extraout_x1;
            return auVar12;
          }
          *plVar9 = auVar12._0_8_;
        }
        if (iRam00000000080486b8 != 0) {
          puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        auVar11._8_8_ = auVar12._0_8_;
        auVar11._0_8_ = plVar9;
        return auVar11;
      }
      lVar8 = func_0x054ed3d8(lVar8,*(undefined8 *)puVar4);
    }
  }
  auVar12 = func_0x03280cac();
  puVar4 = PTR_DAT_077c1668;
  uVar10 = 0x6b590c4;
  if ((bRam0000000007e2a612 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1668);
    bRam0000000007e2a612 = 1;
  }
  auVar15._0_8_ = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x06b59160(auVar15._0_8_,auVar12._8_8_,param_4,param_5 & 0xffffffff,lVar7,0,param_7,param_8,
                  uVar10);
  Merger_MergeBoardQueue_Models_BoardQueueModel__Enqueue(auVar12._0_8_,auVar15._0_8_);
  func_0x06b587c8(auVar12._0_8_);
  auVar15._8_8_ = extraout_x1_04;
  return auVar15;
}

