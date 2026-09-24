/* Ghidra 12.1.2 native pseudocode; RVA 0x665C96C; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.EntityRemoved; status ok */

/* WARNING: Possible PIC construction at 0x0675c8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675c8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675cb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675cbfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675cb54) */
/* WARNING: Removing unreachable block (ram,0x0675cb60) */
/* WARNING: Removing unreachable block (ram,0x0675c8dc) */
/* WARNING: Removing unreachable block (ram,0x0675c8e4) */
/* WARNING: Removing unreachable block (ram,0x0675c968) */
/* WARNING: Removing unreachable block (ram,0x0675c8fc) */
/* WARNING: Removing unreachable block (ram,0x0675c914) */
/* WARNING: Removing unreachable block (ram,0x0675c91c) */
/* WARNING: Removing unreachable block (ram,0x0675c944) */
/* WARNING: Removing unreachable block (ram,0x0675c928) */
/* WARNING: Removing unreachable block (ram,0x0675c934) */
/* WARNING: Removing unreachable block (ram,0x0675c954) */
/* WARNING: Removing unreachable block (ram,0x0675c8b8) */
/* WARNING: Removing unreachable block (ram,0x0675cc00) */

void MergeEngine_ECS_Systems_Board_BoardInteractionSystem__EntityRemoved(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  
  if ((bRam0000000007e28079 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a940);
    bRam0000000007e28079 = 1;
  }
  if (param_2 != 0) {
    lVar9 = func_0x03d20d84(param_2,*(undefined8 *)PTR_DAT_0777a940);
    if (lVar9 != *(long *)(param_1 + 0x78)) {
      return;
    }
    if ((bRam0000000007e2807a & 1) == 0) {
      func_0x03280a18(PTR_DAT_077cc678);
      func_0x03280a18(PTR_DAT_078079b8);
      bRam0000000007e2807a = 1;
    }
    puVar8 = (undefined8 *)(param_1 + 0x60);
    *puVar8 = 0;
    goto SUB_032809c4;
  }
  auVar18 = func_0x03280cac();
  lVar9 = auVar18._0_8_;
  if ((bRam0000000007e2807b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e68c0);
    func_0x03280a18(PTR_DAT_077e6760);
    func_0x03280a18(PTR_DAT_077e6500);
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_077d7588);
    bRam0000000007e2807b = 1;
  }
  if ((*(long *)(lVar9 + 0x58) == 0) ||
     (lVar10 = func_0x06a02444(*(long *)(lVar9 + 0x58),auVar18._8_8_,0), puVar6 = PTR_DAT_077e68c0,
     puVar5 = PTR_DAT_077e6760, puVar4 = PTR_DAT_077e6500, puVar3 = PTR_DAT_077d7588, lVar10 == 0))
  {
LAB_0675cbb4:
    auVar18 = func_0x03280cac();
  }
  else {
    lVar11 = func_0x03ced81c(lVar10,*(undefined8 *)PTR_DAT_0777e638);
    func_0x03ced81c(lVar10,*(undefined8 *)puVar3);
    lVar12 = func_0x03ced81c(lVar10,*(undefined8 *)puVar5);
    lVar13 = func_0x03ced81c(lVar10,*(undefined8 *)puVar6);
    lVar14 = func_0x03ced81c(lVar10,*(undefined8 *)puVar4);
    if (lVar11 == 0) goto LAB_0675cbb4;
    uVar15 = func_0x069fd83c(lVar11,0);
    if ((uVar15 & 1) == 0) {
      if (lVar14 == 0) {
        bVar7 = false;
        goto joined_r0x0675cb18;
      }
      bVar7 = *(char *)(lVar14 + 0x28) != '\0';
      if (lVar13 != 0) goto LAB_0675cb0c;
LAB_0675cb1c:
      bVar17 = 0;
    }
    else {
      bVar7 = true;
joined_r0x0675cb18:
      if (lVar13 == 0) goto LAB_0675cb1c;
LAB_0675cb0c:
      bVar17 = *(byte *)(lVar13 + 0x34);
    }
    if ((bVar17 & (bVar7 ^ 1U)) == 0) {
      if ((bVar7 != false) && (*(char *)(lVar11 + 0x32) == '\0')) {
LAB_0675cb98:
        *(undefined1 *)(lVar9 + 200) = 1;
        return;
      }
      if (*(long *)(lVar9 + 0x48) != 0) {
        uVar15 = func_0x0638459c(*(long *)(lVar9 + 0x48),lVar10,0);
        if ((uVar15 & 1) == 0) goto LAB_0675cb98;
        if (lVar12 != 0) {
          *(undefined1 *)(lVar12 + 0x30) = 0;
          goto LAB_0675cb40;
        }
      }
      goto LAB_0675cbb4;
    }
    if ((lVar12 == 0) || (*(undefined1 *)(lVar12 + 0x30) = 1, lVar13 == 0)) goto LAB_0675cbb4;
    *(undefined1 *)(lVar13 + 0x29) = 1;
LAB_0675cb40:
    uVar16 = func_0x06a05080(0);
    auVar18._8_8_ = uVar16;
    auVar18._0_8_ = lVar9;
  }
  lVar9 = auVar18._0_8_;
  if ((*(long *)(lVar9 + 0x68) != 0) && (lVar10 = *(long *)(lVar9 + 0x90), lVar10 != 0)) {
    (**(code **)(lVar10 + 0x18))
              (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(*(long *)(lVar9 + 0x68) + 0x30),
               auVar18._8_8_,*(undefined8 *)(lVar10 + 0x28));
  }
  puVar8 = (undefined8 *)(lVar9 + 0x60);
  *puVar8 = 0;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

