/* Ghidra 12.1.2 native pseudocode; RVA 0x4D5F3A0; MergeEngine.ECS.Components.Items.ComponentBase.get_Capability; status ok */


/* WARNING: Possible PIC construction at 0x04e5f808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04e5f80c) */
/* WARNING: Removing unreachable block (ram,0x04e5f810) */
/* WARNING: Removing unreachable block (ram,0x04e5f81c) */
/* WARNING: Removing unreachable block (ram,0x04e5f820) */
/* WARNING: Removing unreachable block (ram,0x04e5f830) */
/* WARNING: Removing unreachable block (ram,0x04e5f834) */
/* WARNING: Removing unreachable block (ram,0x04e5f8ac) */
/* WARNING: Removing unreachable block (ram,0x04e5f8c8) */
/* WARNING: Removing unreachable block (ram,0x04e5f8dc) */
/* WARNING: Removing unreachable block (ram,0x04e5f8e8) */
/* WARNING: Removing unreachable block (ram,0x04e5f8ec) */
/* WARNING: Removing unreachable block (ram,0x04e5f904) */
/* WARNING: Removing unreachable block (ram,0x04e5f908) */
/* WARNING: Removing unreachable block (ram,0x04e5f91c) */
/* WARNING: Removing unreachable block (ram,0x04e5f924) */
/* WARNING: Removing unreachable block (ram,0x04e5f840) */
/* WARNING: Removing unreachable block (ram,0x04e5f860) */
/* WARNING: Removing unreachable block (ram,0x04e5f868) */
/* WARNING: Removing unreachable block (ram,0x04e5f880) */
/* WARNING: Removing unreachable block (ram,0x04e5f884) */
/* WARNING: Removing unreachable block (ram,0x04e5f894) */
/* WARNING: Removing unreachable block (ram,0x04e5f898) */
/* WARNING: Removing unreachable block (ram,0x04e5f8a0) */

ulong MergeEngine_ECS_Components_Items_ComponentBase__get_Capability
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar17;
  undefined8 unaff_x25;
  undefined1 auVar18 [16];
  long alStack_120 [16];
  long alStack_a0 [2];
  undefined1 auStack_90 [8];
  long alStack_88 [9];
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar7 = tpidr_el0;
  lStack_38 = *(long *)(lVar7 + 0x28);
  plVar12 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
  uVar13 = (ulong)*(uint *)(plVar12[1] + 0xfc);
  lVar8 = -(uVar13 + 0xf & 0x1fffffff0);
  puVar15 = auStack_40 + lVar8;
  uVar4 = func_0x03280a38(param_1,*(undefined8 *)(*plVar12 + 0x80));
  func_0x072ce970(puVar15,uVar4,uVar13);
  uVar9 = uVar13;
  uVar5 = func_0x072ce970(param_2,puVar15);
  if (*(long *)(lVar7 + 0x28) == lStack_38) {
    return uVar5;
  }
  auVar18 = func_0x072ce990();
  lVar11 = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  *(undefined1 **)(auStack_90 + lVar8) = &stack0xffffffffffffffd0;
  *(code **)((long)alStack_88 + lVar8) = MergeEngine_ECS_Components_Items_ComponentBase___ctor;
  *(undefined8 *)((long)alStack_88 + lVar8 + 8) = unaff_x25;
  *(undefined8 *)((long)alStack_88 + lVar8 + 0x18) = unaff_x24;
  *(undefined8 *)((long)alStack_88 + lVar8 + 0x20) = unaff_x23;
  *(long *)((long)alStack_88 + lVar8 + 0x28) = lVar7;
  *(undefined1 **)((long)alStack_88 + lVar8 + 0x30) = puVar15;
  *(ulong *)((long)alStack_88 + lVar8 + 0x38) = uVar13;
  *(undefined8 *)((long)alStack_88 + lVar8 + 0x40) = param_2;
  lVar10 = tpidr_el0;
  *(undefined8 *)((long)alStack_a0 + lVar8 + 8) = *(undefined8 *)(lVar10 + 0x28);
  *(long *)((long)alStack_a0 + lVar8) = lVar11;
  uVar5 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8) + 0xfc);
  lVar17 = (long)alStack_a0 + (lVar8 - (uVar5 + 0xf & 0x1fffffff0));
  func_0x069f7118(lVar6,uVar9,0);
  lVar16 = *(long *)(param_4 + 0x20);
  lVar7 = lVar11;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x28)) {
    lVar7 = (long)alStack_a0 + lVar8;
  }
  func_0x072ce970(lVar17,lVar7,uVar5);
  func_0x03280a3c(lVar6,*(undefined8 *)(**(long **)(lVar16 + 0xc0) + 0x80),lVar17,uVar5);
  if (lVar6 == 0) {
    func_0x03280cac();
    puVar14 = (ulong *)0x0;
  }
  else {
    puVar14 = (ulong *)(lVar6 + 0x10);
    *puVar14 = uVar9;
    uVar5 = func_0x032809c4(puVar14,uVar9);
    if (*(long *)(lVar10 + 0x28) == *(long *)((long)alStack_a0 + lVar8 + 8)) {
      return uVar5;
    }
  }
  lVar7 = func_0x072ce990();
  *(undefined8 *)(lVar17 + -0x30) = 0x4e5f530;
  *(long *)(lVar17 + -0x20) = lVar11;
  *(long *)(lVar17 + -0x18) = lVar16;
  *(ulong **)(lVar17 + -0x10) = puVar14;
  *(ulong *)(lVar17 + -8) = uVar9;
  if ((bRam0000000007e1b421 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774fc08);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0774e558);
    func_0x03280a18(PTR_DAT_077812c8);
    bRam0000000007e1b421 = 1;
  }
  lVar8 = *(long *)(lVar7 + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  puVar1 = PTR_DAT_0774e4e0;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  uVar4 = **(undefined8 **)(lVar8 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar1);
  }
  uVar9 = func_0x06fe04ec(uVar4,0,0);
  puVar2 = PTR_DAT_0774e558;
  if ((uVar9 & 1) != 0) {
    lVar8 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar2);
    }
    plVar12 = (long *)func_0x057a51c4(uVar4,0);
    if (plVar12 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      lVar16 = func_0x055ea7a0(*(undefined8 *)PTR_DAT_077812c8,uVar4,0);
      lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774fc08);
      func_0x06fdf714(lVar8,lVar16,0);
      uVar4 = 0;
      if (lVar8 != 0) {
        func_0x06fe450c(lVar8,0x3d,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x06fe4494(lVar8,0);
        func_0x06fdf26c(lVar8,0,0);
        lVar10 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c();
        }
        uVar4 = func_0x03dc9430(lVar8,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
        lVar8 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c(lVar8);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        **(undefined8 **)(lVar8 + 0xb8) = uVar4;
        lVar8 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        func_0x032809c4(*(undefined8 *)(lVar8 + 0xb8),uVar4);
        goto LAB_04e5f73c;
      }
    }
    lVar8 = func_0x03280cac();
    *(undefined8 *)(lVar17 + -0x50) = 0x4e5f77c;
    *(undefined8 *)(lVar17 + -0x40) = uVar4;
    *(long *)(lVar17 + -0x38) = lVar7;
    if ((bRam0000000007e1b422 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077799c0);
      func_0x03280a18(PTR_DAT_0774e4e0);
      bRam0000000007e1b422 = 1;
    }
    lVar7 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
    }
    puVar2 = PTR_DAT_0774e4e0;
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
    }
    uVar4 = **(undefined8 **)(lVar7 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar2);
    }
    puVar2 = PTR_DAT_0774e4e0;
    *(undefined8 *)(lVar17 + -0x80) = 0x4e5f80c;
    *(undefined **)(lVar17 + -0x70) = puVar1;
    *(long *)(lVar17 + -0x68) = lVar16;
    *(undefined8 *)(lVar17 + -0x60) = uVar4;
    *(long *)(lVar17 + -0x58) = lVar8;
    if ((bRam0000000007e2fe38 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e4e0,0,0);
      bRam0000000007e2fe38 = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar3 = func_0x06fe3474(uVar4,0);
    return (ulong)(~uVar3 & 1);
  }
LAB_04e5f73c:
  lVar7 = *(long *)(lVar7 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x0325681c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x0325681c();
  }
  return **(ulong **)(lVar7 + 0xb8);
}

