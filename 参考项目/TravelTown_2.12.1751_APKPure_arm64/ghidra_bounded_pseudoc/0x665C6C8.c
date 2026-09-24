/* Ghidra 12.1.2 bounded pseudocode; RVA 0x665C6C8; bound 388 bytes; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.DisposeSystem; status ok */


/* WARNING: Possible PIC construction at 0x0675c7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675c8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675c8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675cb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675cbfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675cb54) */
/* WARNING: Removing unreachable block (ram,0x0675cb60) */
/* WARNING: Removing unreachable block (ram,0x0675c8dc) */
/* WARNING: Removing unreachable block (ram,0x0675c8e4) */
/* WARNING: Removing unreachable block (ram,0x0675c968) */
/* WARNING: Removing unreachable block (ram,0x0675c988) */
/* WARNING: Removing unreachable block (ram,0x0675c99c) */
/* WARNING: Removing unreachable block (ram,0x0675c9dc) */
/* WARNING: Removing unreachable block (ram,0x0675ca04) */
/* WARNING: Removing unreachable block (ram,0x0675ca48) */
/* WARNING: Removing unreachable block (ram,0x0675ca50) */
/* WARNING: Removing unreachable block (ram,0x0675ca60) */
/* WARNING: Removing unreachable block (ram,0x0675cad8) */
/* WARNING: Removing unreachable block (ram,0x0675caf8) */
/* WARNING: Removing unreachable block (ram,0x0675cb14) */
/* WARNING: Removing unreachable block (ram,0x0675cafc) */
/* WARNING: Removing unreachable block (ram,0x0675caec) */
/* WARNING: Removing unreachable block (ram,0x0675cb0c) */
/* WARNING: Removing unreachable block (ram,0x0675caf4) */
/* WARNING: Removing unreachable block (ram,0x0675cb1c) */
/* WARNING: Removing unreachable block (ram,0x0675cb20) */
/* WARNING: Removing unreachable block (ram,0x0675cb68) */
/* WARNING: Removing unreachable block (ram,0x0675cb6c) */
/* WARNING: Removing unreachable block (ram,0x0675cb74) */
/* WARNING: Removing unreachable block (ram,0x0675cb7c) */
/* WARNING: Removing unreachable block (ram,0x0675cb98) */
/* WARNING: Removing unreachable block (ram,0x0675cba0) */
/* WARNING: Removing unreachable block (ram,0x0675cb8c) */
/* WARNING: Removing unreachable block (ram,0x0675cb90) */
/* WARNING: Removing unreachable block (ram,0x0675cb2c) */
/* WARNING: Removing unreachable block (ram,0x0675cb30) */
/* WARNING: Removing unreachable block (ram,0x0675cbb4) */
/* WARNING: Removing unreachable block (ram,0x0675cb3c) */
/* WARNING: Removing unreachable block (ram,0x0675cb40) */
/* WARNING: Removing unreachable block (ram,0x0675cbb8) */
/* WARNING: Removing unreachable block (ram,0x0675cbd0) */
/* WARNING: Removing unreachable block (ram,0x0675cbd8) */
/* WARNING: Removing unreachable block (ram,0x0675cbf0) */
/* WARNING: Removing unreachable block (ram,0x0675c9a0) */
/* WARNING: Removing unreachable block (ram,0x0675c9cc) */
/* WARNING: Removing unreachable block (ram,0x0675c9c0) */
/* WARNING: Removing unreachable block (ram,0x0675c8fc) */
/* WARNING: Removing unreachable block (ram,0x0675c914) */
/* WARNING: Removing unreachable block (ram,0x0675c91c) */
/* WARNING: Removing unreachable block (ram,0x0675c944) */
/* WARNING: Removing unreachable block (ram,0x0675c928) */
/* WARNING: Removing unreachable block (ram,0x0675c934) */
/* WARNING: Removing unreachable block (ram,0x0675c954) */
/* WARNING: Removing unreachable block (ram,0x0675c8b8) */
/* WARNING: Removing unreachable block (ram,0x0675c7b4) */
/* WARNING: Removing unreachable block (ram,0x0675c7d8) */
/* WARNING: Removing unreachable block (ram,0x0675c824) */
/* WARNING: Removing unreachable block (ram,0x0675cc00) */

void MergeEngine_ECS_Systems_Board_BoardInteractionSystem__DisposeSystem(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar5 = PTR_DAT_07807910;
  puVar4 = PTR_DAT_078078f0;
  if ((bRam0000000007e28078 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078078e8);
    func_0x03280a18(PTR_DAT_078078f0);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07807900);
    func_0x03280a18(PTR_DAT_07807908);
    func_0x03280a18(PTR_DAT_07807910);
    func_0x03280a18(PTR_DAT_078079a0);
    func_0x03280a18(PTR_DAT_078079a8);
    func_0x03280a18(PTR_DAT_078079b0);
    bRam0000000007e28078 = 1;
  }
  lVar11 = *(long *)(param_1 + 0xa0);
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x054221d4(uVar6,param_1,*(undefined8 *)puVar5,0);
  puVar4 = PTR_DAT_0774e758;
  puStack_40 = (undefined *)lVar11;
  lStack_38 = param_1;
  if (lVar11 != 0) {
    lVar8 = *(long *)PTR_DAT_078079b0;
    puStack_50 = (undefined *)0x675c7b4;
    lVar9 = *(long *)(lVar8 + 0x38);
    uStack_48 = uVar6;
    if (lVar9 == 0) {
      func_0x03256878(lVar8);
      lVar9 = *(long *)(lVar8 + 0x38);
    }
    lVar8 = *(long *)(lVar9 + 8);
    uStack_60 = puStack_50;
    puStack_50 = puVar4;
    puVar10 = *(undefined8 **)(lVar8 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_0774e558);
      puVar10 = *(undefined8 **)(lVar8 + 0x38);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x03256878(lVar8);
        puVar10 = *(undefined8 **)(lVar8 + 0x38);
      }
    }
    uVar12 = *puVar10;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar12 = func_0x057a51c4(uVar12,0);
    puStack_50 = (undefined *)uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x072a6c4c(&uStack_60,uVar12,0,0,1,0);
    func_0x07286e40(lVar11,uStack_60,uStack_58,uVar6,1);
    return;
  }
  lVar8 = func_0x03280cac();
  puStack_40 = &UNK_0675c84c;
  uVar7 = func_0x0675b618();
  if ((uVar7 & 1) != 0) {
    puStack_50 = puStack_40;
    if ((bRam0000000007e2807a & 1) == 0) {
      puStack_40 = (undefined *)lVar11;
      func_0x03280a18(PTR_DAT_077cc678);
      func_0x03280a18(PTR_DAT_078079b8);
      bRam0000000007e2807a = 1;
    }
    puVar10 = (undefined8 *)(lVar8 + 0x60);
    *puVar10 = 0;
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}

