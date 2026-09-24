/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9E918; Merger.MergeBoard.Commands.ItemSelectionBoxItemPickedCommand.Execute; status ok */


/* WARNING: Possible PIC construction at 0x06b9eb24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9ba18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b9b9ac) */
/* WARNING: Removing unreachable block (ram,0x06b9b9b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b9e4) */
/* WARNING: Removing unreachable block (ram,0x06b9ba00) */
/* WARNING: Removing unreachable block (ram,0x06b9b6d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b6dc) */
/* WARNING: Removing unreachable block (ram,0x06b9b734) */
/* WARNING: Removing unreachable block (ram,0x06b9b700) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c4) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b800) */
/* WARNING: Removing unreachable block (ram,0x06b9b838) */
/* WARNING: Removing unreachable block (ram,0x06b9b888) */
/* WARNING: Removing unreachable block (ram,0x06b9b890) */
/* WARNING: Removing unreachable block (ram,0x06b9b8a8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b8d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8bc) */
/* WARNING: Removing unreachable block (ram,0x06b9b8c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8e8) */
/* WARNING: Removing unreachable block (ram,0x06b9b904) */
/* WARNING: Removing unreachable block (ram,0x06b9b928) */
/* WARNING: Removing unreachable block (ram,0x06b9b930) */
/* WARNING: Removing unreachable block (ram,0x06b9b958) */
/* WARNING: Removing unreachable block (ram,0x06b9b93c) */
/* WARNING: Removing unreachable block (ram,0x06b9b948) */
/* WARNING: Removing unreachable block (ram,0x06b9b968) */
/* WARNING: Removing unreachable block (ram,0x06b9b7d0) */
/* WARNING: Removing unreachable block (ram,0x06b9eb28) */
/* WARNING: Removing unreachable block (ram,0x06b9eb2c) */
/* WARNING: Removing unreachable block (ram,0x06b9eb6c) */
/* WARNING: Removing unreachable block (ram,0x06b9eb98) */
/* WARNING: Removing unreachable block (ram,0x06b9b738) */
/* WARNING: Removing unreachable block (ram,0x06b9b75c) */
/* WARNING: Removing unreachable block (ram,0x06b9b788) */
/* WARNING: Removing unreachable block (ram,0x06b9b794) */
/* WARNING: Removing unreachable block (ram,0x06b9b7b0) */
/* WARNING: Removing unreachable block (ram,0x06b9ba1c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba5c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba20) */
/* WARNING: Removing unreachable block (ram,0x06b9ba3c) */
/* WARNING: Removing unreachable block (ram,0x06b9b560) */
/* WARNING: Removing unreachable block (ram,0x06b9b580) */
/* WARNING: Removing unreachable block (ram,0x06b9b594) */
/* WARNING: Removing unreachable block (ram,0x06b9b5ac) */
/* WARNING: Removing unreachable block (ram,0x06b9b5b4) */
/* WARNING: Removing unreachable block (ram,0x06b9b5d0) */
/* WARNING: Removing unreachable block (ram,0x06b9b5d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b600) */
/* WARNING: Removing unreachable block (ram,0x06b9b5e4) */
/* WARNING: Removing unreachable block (ram,0x06b9b5f0) */
/* WARNING: Removing unreachable block (ram,0x06b9b60c) */
/* WARNING: Removing unreachable block (ram,0x06b9b648) */
/* WARNING: Removing unreachable block (ram,0x06b9b684) */
/* WARNING: Removing unreachable block (ram,0x06b9b6b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b61c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba60) */
/* WARNING: Removing unreachable block (ram,0x06b9ba80) */
/* WARNING: Removing unreachable block (ram,0x06b9ba94) */
/* WARNING: Removing unreachable block (ram,0x06b9ba9c) */
/* WARNING: Removing unreachable block (ram,0x06b9baa8) */
/* WARNING: Removing unreachable block (ram,0x06b9bab4) */
/* WARNING: Removing unreachable block (ram,0x06b9bb44) */
/* WARNING: Removing unreachable block (ram,0x06b9babc) */
/* WARNING: Removing unreachable block (ram,0x06b9bb48) */
/* WARNING: Removing unreachable block (ram,0x06b9bb74) */
/* WARNING: Removing unreachable block (ram,0x06b9bb94) */
/* WARNING: Removing unreachable block (ram,0x06b9bbdc) */
/* WARNING: Removing unreachable block (ram,0x06b9bbac) */
/* WARNING: Removing unreachable block (ram,0x06b9bac8) */
/* WARNING: Removing unreachable block (ram,0x06b9bad8) */
/* WARNING: Removing unreachable block (ram,0x06b9bae0) */
/* WARNING: Removing unreachable block (ram,0x06b9bb08) */
/* WARNING: Removing unreachable block (ram,0x06b9baec) */
/* WARNING: Removing unreachable block (ram,0x06b9baf8) */
/* WARNING: Removing unreachable block (ram,0x06b9bb14) */
/* WARNING: Removing unreachable block (ram,0x06b9bb34) */
/* WARNING: Removing unreachable block (ram,0x06b9b59c) */

undefined1  [16]
Merger_MergeBoard_Commands_ItemSelectionBoxItemPickedCommand__Execute(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000007e2a881 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077726c0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07832800);
    func_0x03280a18(PTR_DAT_07774290);
    func_0x03280a18(PTR_DAT_07832808);
    func_0x03280a18(PTR_DAT_07779710);
    bRam0000000007e2a881 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x30);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_077726c0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_06b9e9ec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_077726c0,3);
LAB_06b9e9ec:
    auVar8 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    puVar1 = PTR_DAT_0777a498;
    if (auVar8._0_8_ != 0) {
      if (*(int *)(auVar8._0_8_ + 0x20) != 5) {
        return auVar8;
      }
      if ((param_2 != 0) && (plVar6 = *(long **)(param_1 + 0x38), plVar6 != (long *)0x0)) {
        lVar3 = *plVar6;
        uVar7 = *(undefined8 *)(param_2 + 0x10);
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
              goto LAB_06b9ea84;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0777a498,9);
LAB_06b9ea84:
        (*(code *)*puVar2)(plVar6,uVar7,puVar2[1]);
        plVar6 = *(long **)(param_1 + 0x38);
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          uVar7 = *(undefined8 *)(param_2 + 0x18);
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
                goto LAB_06b9eaf4;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar1,9);
LAB_06b9eaf4:
          (*(code *)*puVar2)(plVar6,uVar7,puVar2[1]);
          uVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07832800);
          goto SUB_057da5fc;
        }
      }
    }
  }
  uVar4 = func_0x03280cac();
  puVar1 = PTR_DAT_077f3ad8;
  if ((bRam0000000007e2a882 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077f3ad8);
    bRam0000000007e2a882 = 1;
  }
  uVar7 = *(undefined8 *)puVar1;
SUB_057da5fc:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar4;
  return auVar8;
}

