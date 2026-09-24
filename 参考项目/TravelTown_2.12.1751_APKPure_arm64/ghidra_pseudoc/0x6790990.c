/* Ghidra 12.1.2 native pseudocode; RVA 0x6790990; MergeEngine.ECS.Systems.Items.SkipCooldownSystem.DisposeSystem; status ok */


/* WARNING: Possible PIC construction at 0x06890af8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06890afc) */
/* WARNING: Removing unreachable block (ram,0x06890b00) */
/* WARNING: Removing unreachable block (ram,0x06890b2c) */
/* WARNING: Removing unreachable block (ram,0x06890b34) */
/* WARNING: Removing unreachable block (ram,0x06890c28) */
/* WARNING: Removing unreachable block (ram,0x06890b44) */
/* WARNING: Removing unreachable block (ram,0x06890b4c) */
/* WARNING: Removing unreachable block (ram,0x06890b54) */
/* WARNING: Removing unreachable block (ram,0x06890b5c) */
/* WARNING: Removing unreachable block (ram,0x06890b84) */
/* WARNING: Removing unreachable block (ram,0x06890bb0) */
/* WARNING: Removing unreachable block (ram,0x06890bc0) */
/* WARNING: Removing unreachable block (ram,0x06890bc8) */
/* WARNING: Removing unreachable block (ram,0x06890bd0) */
/* WARNING: Removing unreachable block (ram,0x06890bd8) */
/* WARNING: Removing unreachable block (ram,0x06890bf8) */
/* WARNING: Removing unreachable block (ram,0x06890c00) */
/* WARNING: Removing unreachable block (ram,0x06890c38) */
/* WARNING: Removing unreachable block (ram,0x06890c0c) */
/* WARNING: Removing unreachable block (ram,0x06890c18) */
/* WARNING: Removing unreachable block (ram,0x06890c44) */
/* WARNING: Removing unreachable block (ram,0x06890c58) */
/* WARNING: Removing unreachable block (ram,0x06890c5c) */
/* WARNING: Removing unreachable block (ram,0x06890c7c) */
/* WARNING: Removing unreachable block (ram,0x06890c84) */
/* WARNING: Removing unreachable block (ram,0x06890cac) */
/* WARNING: Removing unreachable block (ram,0x06890c90) */
/* WARNING: Removing unreachable block (ram,0x06890c9c) */
/* WARNING: Removing unreachable block (ram,0x06890cbc) */
/* WARNING: Removing unreachable block (ram,0x06890d0c) */
/* WARNING: Removing unreachable block (ram,0x06890d24) */
/* WARNING: Removing unreachable block (ram,0x06890d2c) */
/* WARNING: Removing unreachable block (ram,0x06890d54) */
/* WARNING: Removing unreachable block (ram,0x06890d38) */
/* WARNING: Removing unreachable block (ram,0x06890d44) */
/* WARNING: Removing unreachable block (ram,0x06890d60) */
/* WARNING: Removing unreachable block (ram,0x06890da8) */
/* WARNING: Removing unreachable block (ram,0x06890dc0) */
/* WARNING: Removing unreachable block (ram,0x06890dc8) */
/* WARNING: Removing unreachable block (ram,0x06890df0) */
/* WARNING: Removing unreachable block (ram,0x06890dd4) */
/* WARNING: Removing unreachable block (ram,0x06890de0) */
/* WARNING: Removing unreachable block (ram,0x06890e00) */
/* WARNING: Removing unreachable block (ram,0x06890eac) */
/* WARNING: Removing unreachable block (ram,0x06890e40) */
/* WARNING: Removing unreachable block (ram,0x06890e50) */
/* WARNING: Removing unreachable block (ram,0x06890e58) */
/* WARNING: Removing unreachable block (ram,0x06890e80) */
/* WARNING: Removing unreachable block (ram,0x06890e64) */
/* WARNING: Removing unreachable block (ram,0x06890e70) */
/* WARNING: Removing unreachable block (ram,0x06890e90) */

void MergeEngine_ECS_Systems_Items_SkipCooldownSystem__DisposeSystem(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_078104f8;
  puVar1 = PTR_DAT_078104f0;
  if ((bRam0000000007e28d66 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078104f0);
    func_0x03280a18(PTR_DAT_07810508);
    func_0x03280a18(PTR_DAT_078104f8);
    bRam0000000007e28d66 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x054221d4(uVar3,param_1,*(undefined8 *)puVar2,0);
  if (lVar7 != 0) {
    lVar4 = *(long *)PTR_DAT_07810508;
    lVar5 = *(long *)(lVar4 + 0x38);
    if (lVar5 == 0) {
      func_0x03256878(lVar4);
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    lVar4 = *(long *)(lVar5 + 8);
    puVar6 = *(undefined8 **)(lVar4 + 0x38);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_0774e558);
      puVar6 = *(undefined8 **)(lVar4 + 0x38);
      if (puVar6 == (undefined8 *)0x0) {
        func_0x03256878(lVar4);
        puVar6 = *(undefined8 **)(lVar4 + 0x38);
      }
    }
    uVar8 = *puVar6;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar8 = func_0x057a51c4(uVar8,0);
    func_0x072a6c4c(&stack0xffffffffffffffd0,uVar8,0,0,1,0);
    func_0x07286e40(lVar7,0,0,uVar3,1);
    return;
  }
  func_0x03280cac();
  puVar1 = PTR_DAT_07810510;
  if ((bRam0000000007e28d67 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_0776f248);
    func_0x03280a18(PTR_DAT_07771ec0);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_07800c90);
    func_0x03280a18(PTR_DAT_07810518);
    func_0x03280a18(PTR_DAT_07810520);
    func_0x03280a18(PTR_DAT_07810528);
    func_0x03280a18(PTR_DAT_07810510);
    bRam0000000007e28d67 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

