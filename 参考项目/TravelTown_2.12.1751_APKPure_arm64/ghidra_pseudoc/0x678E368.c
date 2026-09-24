/* Ghidra 12.1.2 native pseudocode; RVA 0x678E368; MergeEngine.ECS.Systems.Items.ExpendableSystem.SpawnItems; status ok */


void MergeEngine_ECS_Systems_Items_ExpendableSystem__SpawnItems
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
               undefined4 param_6,undefined8 param_7,uint param_8)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  puVar2 = PTR_DAT_07810358;
  if ((bRam0000000007e28d56 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810420);
    func_0x03280a18(PTR_DAT_07810428);
    func_0x03280a18(PTR_DAT_07810430);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_07810438);
    func_0x03280a18(PTR_DAT_07810440);
    func_0x03280a18(PTR_DAT_07810448);
    func_0x03280a18(PTR_DAT_07810450);
    func_0x03280a18(PTR_DAT_07810358);
    func_0x03280a18(PTR_DAT_07810458);
    func_0x03280a18(PTR_DAT_07810460);
    bRam0000000007e28d56 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_07810438;
  lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar4 = *(long *)puVar2;
    }
    uVar11 = **(undefined8 **)(lVar4 + 0xb8);
    lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07810420);
    func_0x04e5231c(lVar9,uVar11,*(undefined8 *)PTR_DAT_07810440,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar5 = lVar9;
    func_0x032809c4(plVar5,lVar9);
  }
  func_0x03e113c8(param_3,lVar9,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar4 = *(long *)puVar2;
  }
  lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar4 = *(long *)puVar2;
    }
    uVar11 = **(undefined8 **)(lVar4 + 0xb8);
    lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07810430);
    func_0x05356664(lVar9,uVar11,*(undefined8 *)PTR_DAT_07810448,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar5 = lVar9;
    func_0x032809c4(plVar5,lVar9);
    lVar4 = *(long *)puVar2;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_07810460;
  lVar12 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x40);
  if (lVar12 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar4 = *(long *)puVar2;
    }
    uVar11 = **(undefined8 **)(lVar4 + 0xb8);
    lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07810428);
    func_0x053569b8(lVar12,uVar11,*(undefined8 *)PTR_DAT_07810450,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
    *plVar5 = lVar12;
    func_0x032809c4(plVar5,lVar12);
  }
  auVar13 = func_0x03f36a2c(param_3,lVar9,lVar12,*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_07810458;
  puVar2 = PTR_DAT_077800d0;
  lVar4 = auVar13._0_8_;
  if (0 < param_4) {
    iVar10 = 0;
    do {
      plVar5 = *(long **)(param_1 + 0x40);
      if (plVar5 == (long *)0x0) {
SUB_057da5fc:
        func_0x03280cac(auVar13._0_8_,auVar13._8_8_);
        return;
      }
      lVar9 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0688e65c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar2,0);
LAB_0688e65c:
      auVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((lVar4 == 0) ||
         (auVar13 = func_0x04a44e1c(lVar4,auVar13._0_8_,*(undefined8 *)puVar3),
         lVar9 = auVar13._0_8_, auVar1._8_8_ = lVar9, auVar1._0_8_ = lVar9, lVar9 == 0))
      goto SUB_057da5fc;
      auVar13 = auVar1;
      if (*(char *)(lVar9 + 0x2a) == '\0') {
        auVar13 = func_0x0688eb34(param_1,lVar9,param_2,param_5,param_6,param_7,1,param_8 & 1);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != param_4);
  }
  return;
}

