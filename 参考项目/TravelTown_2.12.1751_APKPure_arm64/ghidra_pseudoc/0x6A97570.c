/* Ghidra 12.1.2 native pseudocode; RVA 0x6A97570; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateTimeLockComponent; status ok */


/* WARNING: Possible PIC construction at 0x06b976d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b97728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b976d8) */
/* WARNING: Removing unreachable block (ram,0x06b976e0) */
/* WARNING: Removing unreachable block (ram,0x06b976e4) */
/* WARNING: Removing unreachable block (ram,0x06b9772c) */
/* WARNING: Removing unreachable block (ram,0x06b97734) */
/* WARNING: Removing unreachable block (ram,0x06b97740) */
/* WARNING: Removing unreachable block (ram,0x06b9774c) */
/* WARNING: Removing unreachable block (ram,0x06b97764) */

void Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateTimeLockComponent
               (double *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long extraout_x1;
  long lVar5;
  undefined8 *extraout_x8;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000007e2a80c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a80c = 1;
  }
  if (param_3 != (long *)0x0) {
    lVar5 = *param_3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_06b97600;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777e548,6);
LAB_06b97600:
    lVar5 = (*(code *)*puVar4)(param_3,puVar4[1]);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x14);
      uVar2 = *(undefined4 *)(lVar5 + 0x18);
      uVar3 = *(undefined4 *)(lVar5 + 0x1c);
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined1 *)((long)param_1 + 0x13) = 0;
      *(undefined4 *)((long)param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined2 *)((long)param_1 + 0x11) = 0;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
      *param_1 = (double)iVar1;
      param_1[1] = (double)iVar1;
      param_1[4] = 0.0;
      return;
    }
  }
  func_0x03280cac();
  if ((bRam0000000007e2a80e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07832570);
    func_0x03280a18(PTR_DAT_07832578);
    bRam0000000007e2a80e = 1;
  }
  if ((extraout_x1 != 0) && (*(long *)(extraout_x1 + 0x18) != 0)) {
    if (*(char *)(*(long *)(extraout_x1 + 0x18) + 0x10) != '\0') {
      func_0x03280ca0(*(undefined8 *)PTR_DAT_07832570);
      return;
    }
    if (*(long *)(extraout_x1 + 0x20) != 0) {
      if (*(char *)(*(long *)(extraout_x1 + 0x20) + 0x10) != '\0') {
        func_0x03280ca0(*(undefined8 *)PTR_DAT_07832578);
        return;
      }
      extraout_x8[2] = 0;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      return;
    }
  }
  func_0x03280cac();
  return;
}

