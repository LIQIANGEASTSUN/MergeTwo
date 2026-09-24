/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7C95C; Merger.MergeBoard.Models.ItemsDiscoveryModel.IsItemRewardPending; status ok */


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

ulong Merger_MergeBoard_Models_ItemsDiscoveryModel__IsItemRewardPending
                (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long extraout_x1;
  long extraout_x1_00;
  long *plVar7;
  int *piVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long lStack_a8;
  long lStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_28;
  
  if ((bRam0000000007e2a73a & 1) == 0) {
    func_0x03280a18(PTR_DAT_078318e0);
    bRam0000000007e2a73a = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = func_0x04fe48b0(*(long *)(param_1 + 0x28),param_2,&lStack_28,
                            *(undefined8 *)PTR_DAT_078318e0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (lStack_28 != 0) {
      return (ulong)(*(int *)(lStack_28 + 0x10) == 2);
    }
  }
  func_0x03280cac();
  uStack_40 = 0x6b7c9e8;
  if (extraout_x1 != 0) {
    return (ulong)(*(int *)(extraout_x1 + 0x10) == 2);
  }
  auVar10 = func_0x03280cac();
  pcStack_60 = Merger_MergeBoard_Models_ItemsDiscoveryModel__IsItemRewardCollected;
  uStack_58 = 0x7e2a000;
  lStack_50 = param_1;
  uStack_48 = param_2;
  if ((bRam0000000007e2a73b & 1) == 0) {
    func_0x03280a18(PTR_DAT_078318e0);
    bRam0000000007e2a73b = 1;
  }
  lStack_68 = 0;
  lVar4 = *(long *)(auVar10._0_8_ + 0x28);
  if (lVar4 != 0) {
    uVar3 = func_0x04fe48b0(lVar4,auVar10._8_8_,&lStack_68,*(undefined8 *)PTR_DAT_078318e0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (lStack_68 != 0) {
      return (ulong)(*(int *)(lStack_68 + 0x10) == 3);
    }
  }
  func_0x03280cac();
  if (extraout_x1_00 != 0) {
    return (ulong)(*(int *)(extraout_x1_00 + 0x10) == 3);
  }
  auVar10 = func_0x03280cac();
  plVar7 = auVar10._8_8_;
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
  lStack_a8 = 0;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    lVar9 = *(long *)(auVar10._0_8_ + 0x28);
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07779820) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b7cb84;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07779820,0);
LAB_06b7cb84:
    uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if (lVar9 != 0) {
      uVar3 = func_0x04fe48b0(lVar9,uVar6,&lStack_a8,*(undefined8 *)PTR_DAT_078318e0);
      puVar2 = PTR_DAT_078318f0;
      if ((uVar3 & 1) != 0) {
        if (lStack_a8 == 0) goto LAB_06b7cd6c;
        if (*(int *)(lStack_a8 + 0x10) != 0) {
          return 0;
        }
      }
      lVar4 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b7cc24;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar1,0);
LAB_06b7cc24:
      (*(code *)*puVar5)(plVar7,puVar5[1]);
      uVar3 = func_0x03280ca0(*(undefined8 *)puVar2);
      return uVar3;
    }
  }
LAB_06b7cd6c:
  uVar3 = func_0x03280cac();
  return uVar3;
}

