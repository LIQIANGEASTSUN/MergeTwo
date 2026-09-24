/* Ghidra 12.1.2 native pseudocode; RVA 0x6A57630; Merger.MergeBoardQueue.Services.MergeBoardItemRewardDequeueStrategy.CanHandle; status ok */


/* WARNING: Possible PIC construction at 0x06b57764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b57824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b57768) */
/* WARNING: Removing unreachable block (ram,0x06b57774) */
/* WARNING: Removing unreachable block (ram,0x06b57778) */
/* WARNING: Removing unreachable block (ram,0x06b57794) */
/* WARNING: Removing unreachable block (ram,0x06b577b0) */
/* WARNING: Removing unreachable block (ram,0x06b577b8) */
/* WARNING: Removing unreachable block (ram,0x06b577e0) */
/* WARNING: Removing unreachable block (ram,0x06b577c4) */
/* WARNING: Removing unreachable block (ram,0x06b577d0) */
/* WARNING: Removing unreachable block (ram,0x06b577f0) */
/* WARNING: Removing unreachable block (ram,0x06b57804) */
/* WARNING: Removing unreachable block (ram,0x06b5776c) */
/* WARNING: Removing unreachable block (ram,0x06b57828) */
/* WARNING: Removing unreachable block (ram,0x06b5782c) */
/* WARNING: Removing unreachable block (ram,0x06b578a8) */
/* WARNING: Removing unreachable block (ram,0x06b57878) */
/* WARNING: Removing unreachable block (ram,0x06b57894) */

ulong Merger_MergeBoardQueue_Services_MergeBoardItemRewardDequeueStrategy__CanHandle
                (long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((bRam0000000007e2a5ff & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0f10);
    bRam0000000007e2a5ff = 1;
  }
  if (param_2 != (long *)0x0) {
    plVar10 = *(long **)(param_1 + 0x10);
    uVar4 = (**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310));
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077c0f10) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_06b576dc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077c0f10,5);
LAB_06b576dc:
      lVar6 = (*(code *)*puVar5)(plVar10,uVar4,puVar5[1]);
      return (ulong)(lVar6 != 0);
    }
  }
  lVar6 = func_0x03280cac();
  if ((bRam0000000007e2a600 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078302f0);
    func_0x03280a18(PTR_DAT_077c0f10);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_078302f8);
    bRam0000000007e2a600 = 1;
  }
  if ((bRam0000000007e2a601 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f6a0);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_077c07b8);
    bRam0000000007e2a601 = 1;
  }
  plVar10 = *(long **)(lVar6 + 0x20);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077c1e40) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_06b57950;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077c1e40,6);
LAB_06b57950:
    iVar2 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    puVar1 = PTR_DAT_0782f6a0;
    plVar10 = *(long **)(lVar6 + 0x28);
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077c07b8) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_06b579c8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077c07b8,1);
LAB_06b579c8:
      uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      iVar3 = func_0x03d3a518(uVar4,*(undefined8 *)puVar1);
      return (ulong)(iVar2 == iVar3);
    }
  }
  uVar8 = func_0x03280cac();
  return uVar8;
}

