/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7CA94; Merger.MergeBoard.Models.ItemsDiscoveryModel.IsItemRewardCollected; status ok */


/* WARNING: Possible PIC construction at 0x06b7cc48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b7cc4c) */
/* WARNING: Removing unreachable block (ram,0x06b7cc50) */
/* WARNING: Removing unreachable block (ram,0x06b7cc70) */
/* WARNING: Removing unreachable block (ram,0x06b7cc78) */
/* WARNING: Removing unreachable block (ram,0x06b7cca0) */
/* WARNING: Removing unreachable block (ram,0x06b7cc84) */
/* WARNING: Removing unreachable block (ram,0x06b7cc90) */
/* WARNING: Removing unreachable block (ram,0x06b7ccb0) */
/* WARNING: Removing unreachable block (ram,0x06b7ccc0) */
/* WARNING: Removing unreachable block (ram,0x06b7ccdc) */
/* WARNING: Removing unreachable block (ram,0x06b7cce4) */
/* WARNING: Removing unreachable block (ram,0x06b7cd0c) */
/* WARNING: Removing unreachable block (ram,0x06b7ccf0) */
/* WARNING: Removing unreachable block (ram,0x06b7ccfc) */
/* WARNING: Removing unreachable block (ram,0x06b7cd1c) */
/* WARNING: Removing unreachable block (ram,0x06b7cd3c) */

ulong Merger_MergeBoard_Models_ItemsDiscoveryModel__IsItemRewardCollected
                (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long lStack_38;
  
  if (param_2 != 0) {
    return (ulong)(*(int *)(param_2 + 0x10) == 3);
  }
  auVar10 = func_0x03280cac();
  plVar5 = auVar10._8_8_;
  if ((bRam0000000007e2a73c & 1) == 0) {
    func_0x03280a18(PTR_DAT_078318e0);
    func_0x03280a18(PTR_DAT_078318e8);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_078318f0);
    bRam0000000007e2a73c = 1;
  }
  puVar1 = PTR_DAT_07779820;
  lStack_38 = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    lVar9 = *(long *)(auVar10._0_8_ + 0x28);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07779820) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b7cb84;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07779820,0);
LAB_06b7cb84:
    uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    if (lVar9 != 0) {
      uVar7 = func_0x04fe48b0(lVar9,uVar4,&lStack_38,*(undefined8 *)PTR_DAT_078318e0);
      puVar2 = PTR_DAT_078318f0;
      if ((uVar7 & 1) != 0) {
        if (lStack_38 == 0) goto LAB_06b7cd6c;
        if (*(int *)(lStack_38 + 0x10) != 0) {
          return 0;
        }
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b7cc24;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar1,0);
LAB_06b7cc24:
      (*(code *)*puVar3)(plVar5,puVar3[1]);
      uVar7 = func_0x03280ca0(*(undefined8 *)puVar2);
      return uVar7;
    }
  }
LAB_06b7cd6c:
  uVar7 = func_0x03280cac();
  return uVar7;
}

