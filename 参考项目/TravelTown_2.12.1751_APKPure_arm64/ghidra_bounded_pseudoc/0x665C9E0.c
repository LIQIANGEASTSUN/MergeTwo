/* Ghidra 12.1.2 bounded pseudocode; RVA 0x665C9E0; bound 472 bytes; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.ItemDroppedOnInventory; status ok */


/* WARNING: Possible PIC construction at 0x0675cbfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675cc00) */

void MergeEngine_ECS_Systems_Board_BoardInteractionSystem__ItemDroppedOnInventory
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte bVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  
  if ((bRam0000000007e2807b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e68c0);
    func_0x03280a18(PTR_DAT_077e6760);
    func_0x03280a18(PTR_DAT_077e6500);
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_077d7588);
    bRam0000000007e2807b = 1;
  }
  if ((*(long *)(param_1 + 0x58) == 0) ||
     (lVar8 = func_0x06a02444(*(long *)(param_1 + 0x58),param_2,0), puVar6 = PTR_DAT_077e68c0,
     puVar5 = PTR_DAT_077e6760, puVar4 = PTR_DAT_077e6500, puVar3 = PTR_DAT_077d7588, lVar8 == 0))
  goto LAB_0675cbb4;
  lVar9 = func_0x03ced81c(lVar8,*(undefined8 *)PTR_DAT_0777e638);
  lVar10 = func_0x03ced81c(lVar8,*(undefined8 *)puVar3);
  lVar11 = func_0x03ced81c(lVar8,*(undefined8 *)puVar5);
  lVar12 = func_0x03ced81c(lVar8,*(undefined8 *)puVar6);
  lVar13 = func_0x03ced81c(lVar8,*(undefined8 *)puVar4);
  if (lVar9 == 0) goto LAB_0675cbb4;
  uVar14 = func_0x069fd83c(lVar9,0);
  if ((uVar14 & 1) == 0) {
    if (lVar13 == 0) {
      bVar7 = false;
      goto joined_r0x0675cb18;
    }
    bVar7 = *(char *)(lVar13 + 0x28) != '\0';
    if (lVar12 != 0) goto LAB_0675cb0c;
LAB_0675cb1c:
    bVar16 = 0;
  }
  else {
    bVar7 = true;
joined_r0x0675cb18:
    if (lVar12 == 0) goto LAB_0675cb1c;
LAB_0675cb0c:
    bVar16 = *(byte *)(lVar12 + 0x34);
  }
  if ((bVar16 & (bVar7 ^ 1U)) == 0) {
    if ((bVar7 == false) || (*(char *)(lVar9 + 0x32) != '\0')) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_0675cbb4;
      uVar14 = func_0x0638459c(*(long *)(param_1 + 0x48),lVar8,0);
      if ((uVar14 & 1) != 0) {
        if (lVar11 == 0) goto LAB_0675cbb4;
        *(undefined1 *)(lVar11 + 0x30) = 0;
        goto LAB_0675cb40;
      }
    }
    *(undefined1 *)(param_1 + 200) = 1;
  }
  else {
    if ((lVar11 == 0) || (*(undefined1 *)(lVar11 + 0x30) = 1, lVar12 == 0)) goto LAB_0675cbb4;
    *(undefined1 *)(lVar12 + 0x29) = 1;
LAB_0675cb40:
    uVar15 = func_0x06a05080(0);
    MergeEngine_ECS_Systems_Board_BoardInteractionSystem__EndDrag(param_1,uVar15);
    MergeEngine_ECS_Systems_Board_BoardInteractionSystem__DeselectItem(param_1);
    if (lVar10 == 0) {
LAB_0675cbb4:
      auVar18 = func_0x03280cac();
      lVar8 = auVar18._0_8_;
      if ((*(long *)(lVar8 + 0x68) != 0) && (lVar9 = *(long *)(lVar8 + 0x90), lVar9 != 0)) {
        (**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(*(long *)(lVar8 + 0x68) + 0x30),
                   auVar18._8_8_,*(undefined8 *)(lVar9 + 0x28));
      }
      puVar17 = (undefined8 *)(lVar8 + 0x60);
      *puVar17 = 0;
      if (iRam00000000080486b8 != 0) {
        puVar1 = (ulong *)(((ulong)puVar17 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar17 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
    *(undefined1 *)(lVar10 + 0x67) = 0;
  }
  return;
}

