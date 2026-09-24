/* Ghidra 12.1.2 native pseudocode; RVA 0x6A974DC; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateTimeCycleComponent; status ok */


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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateTimeCycleComponent
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *extraout_x1;
  long extraout_x1_00;
  double *extraout_x8;
  long lVar6;
  undefined8 *extraout_x8_00;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = _UNK_017806e8;
  if (param_3 != 0) {
    uVar10 = *(undefined8 *)(param_3 + 0x1c);
    uVar9 = *(undefined8 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x24);
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(param_3 + 0x28);
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    *(undefined2 *)((long)param_1 + 0x15) = 0;
    param_1[1] = uVar10;
    *param_1 = uVar9;
    param_1[4] = 0;
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x47) = 0;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)((long)param_1 + 0x34) = uVar2;
    *(undefined1 *)((long)param_1 + 0x4f) = 0;
    param_1[7] = uVar4;
    param_1[5] = (double)(int)uVar10;
    *(undefined4 *)((long)param_1 + 0x4b) = 0;
    return;
  }
  func_0x03280cac();
  if ((bRam0000000007e2a80c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a80c = 1;
  }
  if (extraout_x1 != (long *)0x0) {
    lVar6 = *extraout_x1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto LAB_06b97600;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)PTR_DAT_0777e548,6);
LAB_06b97600:
    lVar6 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x14);
      uVar2 = *(undefined4 *)(lVar6 + 0x18);
      uVar3 = *(undefined4 *)(lVar6 + 0x1c);
      *(undefined1 *)(extraout_x8 + 2) = 0;
      *(undefined1 *)((long)extraout_x8 + 0x13) = 0;
      *(undefined4 *)((long)extraout_x8 + 0x14) = uVar2;
      *(undefined4 *)(extraout_x8 + 3) = 0x100;
      *(undefined2 *)((long)extraout_x8 + 0x11) = 0;
      *(undefined4 *)((long)extraout_x8 + 0x1c) = uVar3;
      *extraout_x8 = (double)iVar1;
      extraout_x8[1] = (double)iVar1;
      extraout_x8[4] = 0.0;
      return;
    }
  }
  func_0x03280cac();
  if ((bRam0000000007e2a80e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07832570);
    func_0x03280a18(PTR_DAT_07832578);
    bRam0000000007e2a80e = 1;
  }
  if ((extraout_x1_00 != 0) && (*(long *)(extraout_x1_00 + 0x18) != 0)) {
    if (*(char *)(*(long *)(extraout_x1_00 + 0x18) + 0x10) != '\0') {
      func_0x03280ca0(*(undefined8 *)PTR_DAT_07832570);
      return;
    }
    if (*(long *)(extraout_x1_00 + 0x20) != 0) {
      if (*(char *)(*(long *)(extraout_x1_00 + 0x20) + 0x10) != '\0') {
        func_0x03280ca0(*(undefined8 *)PTR_DAT_07832578);
        return;
      }
      extraout_x8_00[2] = 0;
      extraout_x8_00[1] = 0;
      *extraout_x8_00 = 0;
      return;
    }
  }
  func_0x03280cac();
  return;
}

