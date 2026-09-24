/* Ghidra 12.1.2 native pseudocode; RVA 0x6286690; MergeEngine.ECS.Systems.InventorySystem.UnlockedInventorySlotAtLevel; status ok */

/* WARNING: Possible PIC construction at 0x06386978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0638697c) */
/* WARNING: Removing unreachable block (ram,0x0638698c) */
/* WARNING: Removing unreachable block (ram,0x06386994) */
/* WARNING: Removing unreachable block (ram,0x063869bc) */
/* WARNING: Removing unreachable block (ram,0x063869a0) */
/* WARNING: Removing unreachable block (ram,0x063869ac) */
/* WARNING: Removing unreachable block (ram,0x063869c8) */
/* WARNING: Removing unreachable block (ram,0x063869dc) */
/* WARNING: Removing unreachable block (ram,0x063869e4) */
/* WARNING: Removing unreachable block (ram,0x06386a00) */
/* WARNING: Removing unreachable block (ram,0x06386a0c) */
/* WARNING: Removing unreachable block (ram,0x06386a20) */
/* WARNING: Removing unreachable block (ram,0x06386a28) */
/* WARNING: Removing unreachable block (ram,0x06386a50) */
/* WARNING: Removing unreachable block (ram,0x06386a34) */
/* WARNING: Removing unreachable block (ram,0x06386a40) */
/* WARNING: Removing unreachable block (ram,0x06386a5c) */
/* WARNING: Removing unreachable block (ram,0x06386a70) */
/* WARNING: Removing unreachable block (ram,0x06386a74) */
/* WARNING: Removing unreachable block (ram,0x06386a90) */
/* WARNING: Removing unreachable block (ram,0x06386a98) */
/* WARNING: Removing unreachable block (ram,0x06386ac0) */
/* WARNING: Removing unreachable block (ram,0x06386aa4) */
/* WARNING: Removing unreachable block (ram,0x06386ab0) */
/* WARNING: Removing unreachable block (ram,0x06386ad0) */
/* WARNING: Removing unreachable block (ram,0x06386ae4) */
/* WARNING: Removing unreachable block (ram,0x06386b2c) */

undefined8 MergeEngine_ECS_Systems_InventorySystem__UnlockedInventorySlotAtLevel(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  
  if ((bRam0000000007e254e1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db160);
    func_0x03280a18(PTR_DAT_07780058);
    func_0x03280a18(PTR_DAT_077e70a0);
    func_0x03280a18(PTR_DAT_077e70a8);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777a750);
    func_0x03280a18(PTR_DAT_07773068);
    func_0x03280a18(PTR_DAT_077e72e8);
    func_0x03280a18(PTR_DAT_077e72f0);
    bRam0000000007e254e1 = 1;
  }
  uVar3 = func_0x06380b60(param_1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  plVar4 = (long *)func_0x06380cd0(param_1);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  lVar7 = *plVar4;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077e70a0) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0638679c;
      }
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar3 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_077e70a0,0);
LAB_0638679c:
  uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  lVar7 = *plVar4;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077e70a8) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_06386800;
      }
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar3 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_077e70a8,0);
LAB_06386800:
  lVar7 = (*(code *)*puVar5)(plVar4,0,puVar5[1]);
  if ((lVar7 != 0) && (plVar10 = *(long **)(param_1 + 0x68), plVar10 != (long *)0x0)) {
    lVar8 = *plVar10;
    iVar2 = *(int *)(lVar7 + 0x18);
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777a750) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_06386878;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777a750,7);
LAB_06386878:
    lVar7 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if (lVar7 != 0) {
      plVar10 = *(long **)(param_1 + 0x78);
      if (iVar2 <= *(int *)(lVar7 + 0x10)) {
        iVar2 = *(int *)(lVar7 + 0x10);
      }
      if ((plVar10 != (long *)0x0) &&
         (lVar7 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240)),
         puVar1 = PTR_DAT_077e72f0, lVar7 != 0)) {
        if (iVar2 == *(int *)(lVar7 + 0x20)) {
          return 0;
        }
        lVar7 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077e70a0) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06386954;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_077e70a0,0);
LAB_06386954:
        iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (iVar2 < 1) {
          return 0;
        }
        uVar6 = func_0x03280ca0(*(undefined8 *)puVar1);
        return uVar6;
      }
    }
  }
  uVar6 = func_0x03280cac();
  return uVar6;
}

