/* Ghidra 12.1.2 native pseudocode; RVA 0x666D28C; MergeEngine.ECS.Systems.Board.ItemCountSystem.DisposeSystem; status ok */


/* WARNING: Possible PIC construction at 0x069f7fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0676d3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0676d3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069aa5c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0676d3f8) */
/* WARNING: Removing unreachable block (ram,0x0676d400) */
/* WARNING: Removing unreachable block (ram,0x0676d414) */
/* WARNING: Removing unreachable block (ram,0x0676d430) */
/* WARNING: Removing unreachable block (ram,0x0676d48c) */
/* WARNING: Removing unreachable block (ram,0x0676d490) */
/* WARNING: Removing unreachable block (ram,0x069aa540) */
/* WARNING: Removing unreachable block (ram,0x069aa574) */
/* WARNING: Removing unreachable block (ram,0x069aa5b8) */
/* WARNING: Removing unreachable block (ram,0x0676d3d0) */
/* WARNING: Removing unreachable block (ram,0x0676d4b4) */
/* WARNING: Removing unreachable block (ram,0x0676d3d4) */
/* WARNING: Removing unreachable block (ram,0x069f7fa8) */
/* WARNING: Removing unreachable block (ram,0x069aa5cc) */
/* WARNING: Removing unreachable block (ram,0x069aa5d0) */
/* WARNING: Removing unreachable block (ram,0x069aa644) */
/* WARNING: Removing unreachable block (ram,0x069aa650) */
/* WARNING: Removing unreachable block (ram,0x069aa690) */
/* WARNING: Removing unreachable block (ram,0x069aa65c) */

void MergeEngine_ECS_Systems_Board_ItemCountSystem__DisposeSystem(long param_1)

{
  ulong *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  
  puVar4 = PTR_DAT_07808060;
  puVar3 = PTR_DAT_077db230;
  if ((bRam0000000007e28104 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db230);
    func_0x03280a18(PTR_DAT_07808060);
    bRam0000000007e28104 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x40);
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x054221d4(uVar6,param_1,*(undefined8 *)puVar4,0);
  if (lVar10 != 0) {
    func_0x06a02774(lVar10,uVar6,0);
    lVar10 = *(long *)(param_1 + 0x48);
    uVar6 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x054221d4(uVar6,param_1,*(undefined8 *)puVar4,0);
    if (lVar10 != 0) {
      if ((bRam0000000007e2984d & 1) == 0) {
        func_0x03280a18(PTR_DAT_077db230,uVar6,0);
        bRam0000000007e2984d = 1;
      }
      puVar3 = PTR_DAT_077db230;
      plVar11 = (long *)(lVar10 + 0x20);
      lVar10 = *plVar11;
      do {
        lVar7 = func_0x057ddd18(lVar10,uVar6,0);
        if (lVar7 == 0) {
          lVar8 = 0;
        }
        else {
          uVar12 = *(undefined8 *)puVar3;
          lVar8 = func_0x03280b90(lVar7,uVar12);
          if (lVar8 == 0) {
            lVar10 = func_0x03281048(lVar7,uVar12);
            puVar4 = PTR_DAT_077f1be8;
            puVar3 = PTR_DAT_077f1be0;
            if ((bRam0000000007e2984e & 1) == 0) {
              func_0x03280a18(PTR_DAT_077f1be0);
              func_0x03280a18(PTR_DAT_077f1be8);
              bRam0000000007e2984e = 1;
            }
            uVar6 = func_0x03280ca0(*(undefined8 *)puVar4);
            func_0x04fb1810(uVar6,*(undefined8 *)puVar3);
            puVar9 = (undefined8 *)(lVar10 + 0x28);
            *puVar9 = uVar6;
            if (iRam00000000080486b8 != 0) {
              puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
              do {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            return;
          }
        }
        lVar7 = func_0x032dd140(plVar11,lVar8,lVar10);
        bVar5 = lVar10 != lVar7;
        lVar10 = lVar7;
      } while (bVar5);
      return;
    }
  }
  func_0x03280cac();
  puVar3 = PTR_DAT_07808068;
  if ((bRam0000000007e28105 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07771708);
    func_0x03280a18(PTR_DAT_0777da58);
    func_0x03280a18(PTR_DAT_077f1c68);
    func_0x03280a18(PTR_DAT_07808070);
    func_0x03280a18(PTR_DAT_07808068);
    bRam0000000007e28105 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar3);
  return;
}

