/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2A8EC; MergeEngine.Configuration.Definitions.ResourceMultiple.GetHashCode; status ok */


ulong MergeEngine_Configuration_Definitions_ResourceMultiple__GetHashCode
                (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [12];
  
  if ((bRam0000000007e2a436 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f0f8);
    func_0x03280a18(PTR_DAT_0776e440);
    bRam0000000007e2a436 = 1;
  }
  puVar2 = PTR_DAT_0782f0f8;
  puVar1 = PTR_DAT_0776e440;
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x158))(plVar7,*(undefined8 *)(*plVar7 + 0x160));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar1);
    }
    lVar8 = *(long *)puVar2;
    if (*(long *)(lVar8 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_0776e440);
      if (*(long *)(lVar8 + 0x38) == 0) {
        func_0x03256878(lVar8);
      }
    }
    iVar3 = func_0x05793b44(&stack0xffffffffffffffcc,0);
    iVar4 = func_0x05793b44(&stack0xffffffffffffffc8,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18)
                           );
    puVar1 = PTR_DAT_0776e440;
    if (*(int *)(*(long *)PTR_DAT_0776e440 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0776e440);
    }
    iVar5 = func_0x05791270(0);
    if (cRam0000000007e17da4 == '\0') {
      func_0x03280a18(PTR_DAT_0776e440);
      cRam0000000007e17da4 = '\x01';
    }
    uVar9 = iVar5 + iVar3 * -0x3d4d51c3 + 8;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
      uVar9 = uVar9 >> 0xf | uVar9 * 0x20000;
      if (cRam0000000007e17da4 == '\0') {
        func_0x03280a18(PTR_DAT_0776e440);
        cRam0000000007e17da4 = '\x01';
      }
    }
    else {
      uVar9 = uVar9 >> 0xf | uVar9 * 0x20000;
    }
    uVar9 = iVar4 * -0x3d4d51c3 + uVar9 * 0x27d4eb2f;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar9 = (uVar9 >> 0xf | uVar9 * 0x20000) * 0x27d4eb2f;
    uVar9 = (uVar9 ^ uVar9 >> 0xf) * -0x7a143589;
    uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51c3;
    return (ulong)(uVar9 ^ uVar9 >> 0x10);
  }
  auVar10 = func_0x03280cac();
  lVar8 = auVar10._0_8_;
  if ((bRam0000000007e2a437 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f100);
    bRam0000000007e2a437 = 1;
  }
  *(undefined4 *)(lVar8 + 0x18) = 1;
  uVar6 = func_0x057da5fc(lVar8,0);
  *(undefined4 *)(lVar8 + 0x18) = param_3;
  *(undefined4 *)(lVar8 + 0x1c) = param_4;
  *(undefined4 *)(lVar8 + 0x20) = param_5;
  *(int *)(lVar8 + 0x10) = auVar10._8_4_;
  *(undefined4 *)(lVar8 + 0x14) = param_6;
  return uVar6;
}

