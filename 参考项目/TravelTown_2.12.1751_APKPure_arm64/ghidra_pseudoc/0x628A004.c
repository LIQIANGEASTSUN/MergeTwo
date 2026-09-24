/* Ghidra 12.1.2 native pseudocode; RVA 0x628A004; MergeEngine.ECS.Systems.InventorySystem.InventoryClosed; status ok */

/* WARNING: Possible PIC construction at 0x0638a308: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0638a30c) */
/* WARNING: Removing unreachable block (ram,0x064a7540) */

void MergeEngine_ECS_Systems_InventorySystem__InventoryClosed(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [12];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000007e254f0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e74c0);
    func_0x03280a18(PTR_DAT_077e74c8);
    func_0x03280a18(PTR_DAT_077e74d0);
    func_0x03280a18(PTR_DAT_077e74d8);
    func_0x03280a18(PTR_DAT_077e74e0);
    bRam0000000007e254f0 = 1;
  }
  puVar3 = PTR_DAT_077e74c8;
  puVar2 = PTR_DAT_077e74c0;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x120) != 0) {
    func_0x04145068(&uStack_48,*(long *)(param_1 + 0x120),*(undefined8 *)PTR_DAT_077e74e0);
    while( true ) {
      uVar9 = func_0x051159b4(&uStack_48,*(undefined8 *)puVar3);
      if ((uVar9 & 1) == 0) {
        func_0x051159b0(&uStack_48,*(undefined8 *)puVar2);
        goto LAB_0638a0cc;
      }
      if (lStack_38 == 0) break;
      *(undefined1 *)(lStack_38 + 0x73) = 1;
    }
    func_0x03280cac();
  }
  do {
    auVar13 = func_0x03280cac();
    if (auVar13._8_4_ != 1) {
LAB_0638a154:
      func_0x051159b0(&uStack_48,*(undefined8 *)PTR_DAT_077e74c0);
      func_0x03365958(auVar13._0_8_);
      func_0x03280ca4(0);
      lVar12 = func_0x02f09514();
      puVar8 = PTR_DAT_077e7508;
      puVar7 = PTR_DAT_077e7500;
      puVar6 = PTR_DAT_077e74f8;
      puVar5 = PTR_DAT_077e74f0;
      puVar4 = PTR_DAT_077e74e8;
      puVar3 = PTR_DAT_077730a0;
      puVar2 = PTR_DAT_07773098;
      if ((bRam0000000007e254f1 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077e7500);
        func_0x03280a18(PTR_DAT_077e74f8);
        func_0x03280a18(PTR_DAT_077e7508);
        func_0x03280a18(PTR_DAT_077e74f0);
        func_0x03280a18(PTR_DAT_077cf4c8);
        func_0x03280a18(PTR_DAT_077e7510);
        func_0x03280a18(PTR_DAT_077e7518);
        func_0x03280a18(PTR_DAT_077e74e8);
        func_0x03280a18(PTR_DAT_077cf4d0);
        func_0x03280a18(PTR_DAT_077730a0);
        func_0x03280a18(PTR_DAT_07773098);
        bRam0000000007e254f1 = 1;
      }
      uVar11 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04143c38(uVar11,*(undefined8 *)puVar5);
      *(undefined8 *)(lVar12 + 0xd8) = uVar11;
      func_0x032809c4((undefined8 *)(lVar12 + 0xd8),uVar11);
      uVar11 = func_0x03280ca0(*(undefined8 *)puVar6);
      func_0x04fe1fa4(uVar11,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar12 + 0xe0) = uVar11;
      func_0x032809c4((undefined8 *)(lVar12 + 0xe0),uVar11);
      uVar11 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x04321630(uVar11,0,*(undefined8 *)puVar3);
      *(undefined8 *)(lVar12 + 0xf8) = uVar11;
      func_0x032809c4((undefined8 *)(lVar12 + 0xf8),uVar11);
      func_0x03280ca0(*(undefined8 *)puVar8);
      return;
    }
    plVar10 = (long *)func_0x072ce910(auVar13._0_8_);
    lVar12 = *plVar10;
    func_0x072ce920();
    func_0x051159b0(&uStack_48,*(undefined8 *)PTR_DAT_077e74c0);
    if (lVar12 != 0) {
      func_0x03280ca4(lVar12);
      goto LAB_0638a154;
    }
LAB_0638a0cc:
    lVar12 = *(long *)(param_1 + 0x120);
    if (lVar12 != 0) {
      iVar1 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (0 < iVar1) {
        func_0x057b9c7c(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
      }
      return;
    }
  } while( true );
}

