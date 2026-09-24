/* Ghidra 12.1.2 native pseudocode; RVA 0x6798CB4; MergeEngine.ECS.Systems.Items.UndoSell.GetLocalisationParameters; status ok */


/* WARNING: Possible PIC construction at 0x06898fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06899014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06898fac) */
/* WARNING: Removing unreachable block (ram,0x06898fb8) */
/* WARNING: Removing unreachable block (ram,0x06899018) */

undefined8 * MergeEngine_ECS_Systems_Items_UndoSell__GetLocalisationParameters(long param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  if ((bRam0000000007e28da0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e5e8);
    func_0x03280a18(PTR_DAT_07780690);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777cfd8);
    func_0x03280a18(PTR_DAT_0774e6b8);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e28da0 = 1;
  }
  puVar5 = PTR_DAT_0774e5e8;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0x18), plVar12 == (long *)0x0)) {
LAB_06898fe0:
    func_0x03280cac();
  }
  else {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07780690) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06898d8c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07780690,0);
LAB_06898d8c:
    uVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    lVar13 = *(long *)puVar5;
    lVar9 = *(long *)(lVar13 + 0x38);
    if (lVar9 == 0) {
      func_0x03256878(lVar13);
      lVar9 = *(long *)(lVar13 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    puVar5 = PTR_DAT_0777cfd8;
    lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
    }
    puVar6 = PTR_DAT_0774f158;
    uVar14 = **(undefined8 **)(lVar9 + 0xb8);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar5);
    }
    uVar8 = func_0x069a8c10(uVar8,1,*(undefined8 *)puVar6,uVar14,0);
    uVar10 = func_0x06898bf4(param_1);
    puVar5 = PTR_DAT_0777e548;
    if ((uVar10 & 1) != 0) {
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0x18), plVar12 != (long *)0x0)) {
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777e548) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
              goto LAB_06898ed0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777e548,3);
LAB_06898ed0:
        lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        if (((lVar9 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
           (plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0x18), plVar12 != (long *)0x0)) {
          lVar13 = *plVar12;
          uVar2 = *(undefined4 *)(lVar9 + 0x18);
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
                puVar7 = (undefined8 *)(lVar13 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                goto LAB_06898f44;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar5,3);
LAB_06898f44:
          lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
          if (lVar9 != 0) {
            func_0x067ba288(uVar2,*(undefined4 *)(lVar9 + 0x14),0,0,0);
            lVar9 = func_0x03280afc(*(undefined8 *)PTR_DAT_0774e6b8,2);
            if (lVar9 != 0) {
              if (*(int *)(lVar9 + 0x18) != 0) {
                puVar7 = (undefined8 *)(lVar9 + 0x20);
                *puVar7 = uVar8;
                goto SUB_032809c4;
              }
              goto LAB_06898fe4;
            }
          }
        }
      }
      goto LAB_06898fe0;
    }
    puVar7 = (undefined8 *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e6b8,1);
    if (puVar7 == (undefined8 *)0x0) goto LAB_06898fe0;
    if (*(int *)(puVar7 + 3) != 0) {
      puVar7[4] = uVar8;
      func_0x032809c4(puVar7 + 4,uVar8);
      return puVar7;
    }
  }
LAB_06898fe4:
  auVar15 = func_0x03280cb4();
  func_0x057da5fc(auVar15._0_8_,0);
  puVar7 = (undefined8 *)(auVar15._0_8_ + 0x10);
  *puVar7 = auVar15._8_8_;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return puVar7;
}

