/* Ghidra 12.1.2 native pseudocode; RVA 0x6A70A14; Merger.MergeBoard.Systems.ItemUnlockingSystem.UnlockEntities; status ok */


void Merger_MergeBoard_Systems_ItemUnlockingSystem__UnlockEntities
               (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined1 auVar14 [12];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 auStack_90 [2];
  char acStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000007e2a6e4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831248);
    func_0x03280a18(PTR_DAT_0777a490);
    func_0x03280a18(PTR_DAT_0777a528);
    func_0x03280a18(PTR_DAT_077c0f50);
    func_0x03280a18(PTR_DAT_077c0f58);
    func_0x03280a18(PTR_DAT_077c0f60);
    func_0x03280a18(PTR_DAT_07831250);
    func_0x03280a18(PTR_DAT_077c0f68);
    func_0x03280a18(PTR_DAT_07831258);
    bRam0000000007e2a6e4 = 1;
  }
  puVar7 = PTR_DAT_07831258;
  puVar6 = PTR_DAT_07831250;
  puVar5 = PTR_DAT_07831248;
  puVar4 = PTR_DAT_077c0f58;
  puVar3 = PTR_DAT_077c0f50;
  puVar2 = PTR_DAT_0777a528;
  puVar1 = PTR_DAT_0777a490;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  acStack_88[0] = '\0';
  auStack_90[0] = 0;
  if (param_3 == 0) {
LAB_06b70c14:
    auVar14 = func_0x03280cac();
    if (auVar14._8_4_ == 1) {
      plVar11 = (long *)func_0x072ce910(auVar14._0_8_);
      lVar12 = *plVar11;
      func_0x072ce920();
      func_0x051159b0(&uStack_80,*unaff_x23);
      if (lVar12 == 0) {
        return;
      }
      func_0x03280ca4(lVar12);
    }
    func_0x051159b0(&uStack_80,*unaff_x23);
    func_0x03365958(auVar14._0_8_);
    func_0x03280ca4(0);
    func_0x02f09514();
    return;
  }
  func_0x04145068(&uStack_a8,param_3,*(undefined8 *)PTR_DAT_077c0f68);
  uStack_78 = uStack_a0;
  uStack_80 = uStack_a8;
  lStack_70 = lStack_98;
LAB_06b70b2c:
  uVar9 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar4);
  lVar12 = lStack_70;
  if ((uVar9 & 1) == 0) {
    func_0x051159b0(&uStack_80,*(undefined8 *)puVar3);
    return;
  }
  if (lStack_70 != 0) goto code_r0x06b70b44;
  func_0x03280cac();
  goto LAB_06b70c0c;
code_r0x06b70b44:
  bVar8 = func_0x03d1f470(lStack_70,acStack_88,*(undefined8 *)puVar2);
  if (((bVar8 & acStack_88[0] != '\0') != 0) &&
     (uVar9 = func_0x03d1e2e4(lVar12,auStack_90,*(undefined8 *)puVar1), (uVar9 & 1) != 0)) {
    acStack_88[0] = '\0';
    func_0x03d1d588(lVar12,0,*(undefined8 *)puVar5);
    lVar13 = *(long *)(param_2 + 0x10);
    lVar10 = func_0x03280ca0(*(undefined8 *)puVar6);
    func_0x06b9ac38(lVar10,0);
    if (lVar10 == 0) {
LAB_06b70c0c:
      func_0x03280cac();
    }
    else {
      *(long *)(lVar10 + 0x10) = lVar12;
      func_0x032809c4((long *)(lVar10 + 0x10),lVar12);
      *(undefined4 *)(lVar10 + 0x18) = auStack_90[0];
      if (lVar13 != 0) {
        func_0x03ec33e4(lVar13,lVar10,*(undefined8 *)puVar7);
        goto LAB_06b70b2c;
      }
    }
    func_0x03280cac();
    unaff_x23 = (undefined8 *)puVar3;
    goto LAB_06b70c14;
  }
  goto LAB_06b70b2c;
}

