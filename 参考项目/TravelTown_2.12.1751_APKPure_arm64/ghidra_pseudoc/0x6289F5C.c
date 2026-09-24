/* Ghidra 12.1.2 native pseudocode; RVA 0x6289F5C; MergeEngine.ECS.Systems.InventorySystem.GetDestinationForItem; status ok */

/* WARNING: Possible PIC construction at 0x0638a308: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0638a30c) */
/* WARNING: Removing unreachable block (ram,0x064a7540) */

undefined8 MergeEngine_ECS_Systems_InventorySystem__GetDestinationForItem(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 auVar15 [12];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000007e254ef & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a928);
    func_0x03280a18(PTR_DAT_077ce978);
    func_0x03280a18(PTR_DAT_077e74b8);
    func_0x03280a18(PTR_DAT_077ce980);
    bRam0000000007e254ef = 1;
  }
  if (param_1 != 0) {
    lVar9 = func_0x03d20d84(param_1,*(undefined8 *)PTR_DAT_0777a928);
    puVar13 = (undefined8 *)PTR_DAT_077ce978;
    if ((lVar9 != 0) && (puVar13 = (undefined8 *)PTR_DAT_077e74b8, *(int *)(lVar9 + 0x2c) != 1)) {
      puVar13 = (undefined8 *)PTR_DAT_077ce980;
    }
    return *puVar13;
  }
  lVar9 = func_0x03280cac();
  uStack_50 = 0x638a004;
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
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  if (*(long *)(lVar9 + 0x120) != 0) {
    func_0x04145068(&uStack_68,*(long *)(lVar9 + 0x120),*(undefined8 *)PTR_DAT_077e74e0);
    while( true ) {
      uVar10 = func_0x051159b4(&uStack_68,*(undefined8 *)puVar3);
      if ((uVar10 & 1) == 0) {
        uVar12 = func_0x051159b0(&uStack_68,*(undefined8 *)puVar2);
        goto LAB_0638a0cc;
      }
      if (lStack_58 == 0) break;
      *(undefined1 *)(lStack_58 + 0x73) = 1;
    }
    func_0x03280cac();
  }
  do {
    auVar15 = func_0x03280cac();
    if (auVar15._8_4_ != 1) {
LAB_0638a154:
      func_0x051159b0(&uStack_68,*(undefined8 *)PTR_DAT_077e74c0);
      func_0x03365958(auVar15._0_8_);
      func_0x03280ca4(0);
      lVar9 = func_0x02f09514();
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
      uVar12 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04143c38(uVar12,*(undefined8 *)puVar5);
      *(undefined8 *)(lVar9 + 0xd8) = uVar12;
      func_0x032809c4((undefined8 *)(lVar9 + 0xd8),uVar12);
      uVar12 = func_0x03280ca0(*(undefined8 *)puVar6);
      func_0x04fe1fa4(uVar12,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar9 + 0xe0) = uVar12;
      func_0x032809c4((undefined8 *)(lVar9 + 0xe0),uVar12);
      uVar12 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x04321630(uVar12,0,*(undefined8 *)puVar3);
      *(undefined8 *)(lVar9 + 0xf8) = uVar12;
      func_0x032809c4((undefined8 *)(lVar9 + 0xf8),uVar12);
      uVar12 = func_0x03280ca0(*(undefined8 *)puVar8);
      return uVar12;
    }
    plVar11 = (long *)func_0x072ce910(auVar15._0_8_);
    lVar14 = *plVar11;
    func_0x072ce920();
    uVar12 = func_0x051159b0(&uStack_68,*(undefined8 *)PTR_DAT_077e74c0);
    if (lVar14 != 0) {
      func_0x03280ca4(lVar14);
      goto LAB_0638a154;
    }
LAB_0638a0cc:
    lVar14 = *(long *)(lVar9 + 0x120);
    if (lVar14 != 0) {
      iVar1 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (0 < iVar1) {
        uVar12 = func_0x057b9c7c(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
      }
      return uVar12;
    }
  } while( true );
}

