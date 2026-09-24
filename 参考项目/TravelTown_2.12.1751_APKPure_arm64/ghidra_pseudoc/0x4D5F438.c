/* Ghidra 12.1.2 native pseudocode; RVA 0x4D5F438; MergeEngine.ECS.Components.Items.ComponentBase..ctor; status ok */


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

ulong MergeEngine_ECS_Components_Items_ComponentBase___ctor
                (long param_1,undefined8 *****param_2,undefined8 param_3,long param_4)

{
  undefined8 *****pppppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long alStack_e0 [16];
  undefined8 ****ppppuStack_60;
  long lStack_58;
  
  lVar5 = tpidr_el0;
  lStack_58 = *(long *)(lVar5 + 0x28);
  uVar12 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8) + 0xfc);
  lVar8 = -(uVar12 + 0xf & 0x1fffffff0);
  ppppuStack_60 = param_2;
  func_0x069f7118(param_1,param_3,0);
  lVar11 = *(long *)(param_4 + 0x20);
  pppppuVar1 = param_2;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x28)) {
    pppppuVar1 = &ppppuStack_60;
  }
  func_0x072ce970((long)&ppppuStack_60 + lVar8,pppppuVar1,uVar12);
  func_0x03280a3c(param_1,*(undefined8 *)(**(long **)(lVar11 + 0xc0) + 0x80),
                  (long)&ppppuStack_60 + lVar8,uVar12);
  if (param_1 == 0) {
    func_0x03280cac();
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)(param_1 + 0x10);
    *puVar9 = param_3;
    uVar12 = func_0x032809c4(puVar9,param_3);
    if (*(long *)(lVar5 + 0x28) == lStack_58) {
      return uVar12;
    }
  }
  lVar5 = func_0x072ce990();
  *(undefined8 *)((long)alStack_e0 + lVar8 + 0x50) = 0x4e5f530;
  *(undefined8 ******)((long)alStack_e0 + lVar8 + 0x60) = param_2;
  *(long *)((long)alStack_e0 + lVar8 + 0x68) = lVar11;
  *(undefined8 **)((long)alStack_e0 + lVar8 + 0x70) = puVar9;
  *(undefined8 *)((long)alStack_e0 + lVar8 + 0x78) = param_3;
  if ((bRam0000000007e1b421 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774fc08);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0774e558);
    func_0x03280a18(PTR_DAT_077812c8);
    bRam0000000007e1b421 = 1;
  }
  lVar6 = *(long *)(lVar5 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c();
  }
  puVar2 = PTR_DAT_0774e4e0;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c();
  }
  uVar10 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar2);
  }
  uVar12 = func_0x06fe04ec(uVar10,0,0);
  puVar3 = PTR_DAT_0774e558;
  if ((uVar12 & 1) != 0) {
    lVar6 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c();
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar3);
    }
    plVar7 = (long *)func_0x057a51c4(uVar10,0);
    if (plVar7 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      lVar11 = func_0x055ea7a0(*(undefined8 *)PTR_DAT_077812c8,uVar10,0);
      lVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774fc08);
      func_0x06fdf714(lVar6,lVar11,0);
      uVar10 = 0;
      if (lVar6 != 0) {
        func_0x06fe450c(lVar6,0x3d,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x06fe4494(lVar6,0);
        func_0x06fdf26c(lVar6,0,0);
        lVar8 = *(long *)(lVar5 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        uVar10 = func_0x03dc9430(lVar6,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
        lVar8 = *(long *)(lVar5 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c(lVar8);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        **(undefined8 **)(lVar8 + 0xb8) = uVar10;
        lVar8 = *(long *)(lVar5 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        func_0x032809c4(*(undefined8 *)(lVar8 + 0xb8),uVar10);
        goto LAB_04e5f73c;
      }
    }
    lVar6 = func_0x03280cac();
    *(undefined8 *)((long)alStack_e0 + lVar8 + 0x30) = 0x4e5f77c;
    *(undefined8 *)((long)alStack_e0 + lVar8 + 0x40) = uVar10;
    *(long *)((long)alStack_e0 + lVar8 + 0x48) = lVar5;
    if ((bRam0000000007e1b422 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077799c0);
      func_0x03280a18(PTR_DAT_0774e4e0);
      bRam0000000007e1b422 = 1;
    }
    lVar5 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c();
    }
    puVar3 = PTR_DAT_0774e4e0;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c();
    }
    uVar10 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar3);
    }
    puVar3 = PTR_DAT_0774e4e0;
    *(undefined8 *)((long)alStack_e0 + lVar8) = 0x4e5f80c;
    *(undefined **)((long)alStack_e0 + lVar8 + 0x10) = puVar2;
    *(long *)((long)alStack_e0 + lVar8 + 0x18) = lVar11;
    *(undefined8 *)((long)alStack_e0 + lVar8 + 0x20) = uVar10;
    *(long *)((long)alStack_e0 + lVar8 + 0x28) = lVar6;
    if ((bRam0000000007e2fe38 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e4e0,0,0);
      bRam0000000007e2fe38 = 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar4 = func_0x06fe3474(uVar10,0);
    return (ulong)(~uVar4 & 1);
  }
LAB_04e5f73c:
  lVar5 = *(long *)(lVar5 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c();
  }
  return **(ulong **)(lVar5 + 0xb8);
}

