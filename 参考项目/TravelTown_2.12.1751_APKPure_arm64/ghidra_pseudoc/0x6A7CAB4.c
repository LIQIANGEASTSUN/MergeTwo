/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7CAB4; Merger.MergeBoard.Models.ItemsDiscoveryModel.TryAddDiscoveredItem; status ok */


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

undefined8
Merger_MergeBoard_Models_ItemsDiscoveryModel__TryAddDiscoveredItem(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lStack_28;
  
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
  lStack_28 = 0;
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    lVar8 = *(long *)(param_1 + 0x28);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07779820) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06b7cb84;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06b7cb84:
    uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (lVar8 != 0) {
      uVar6 = func_0x04fe48b0(lVar8,uVar4,&lStack_28,*(undefined8 *)PTR_DAT_078318e0);
      puVar2 = PTR_DAT_078318f0;
      if ((uVar6 & 1) != 0) {
        if (lStack_28 == 0) goto LAB_06b7cd6c;
        if (*(int *)(lStack_28 + 0x10) != 0) {
          return 0;
        }
      }
      lVar5 = *param_2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06b7cc24;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06b7cc24:
      (*(code *)*puVar3)(param_2,puVar3[1]);
      uVar4 = func_0x03280ca0(*(undefined8 *)puVar2);
      return uVar4;
    }
  }
LAB_06b7cd6c:
  uVar4 = func_0x03280cac();
  return uVar4;
}

