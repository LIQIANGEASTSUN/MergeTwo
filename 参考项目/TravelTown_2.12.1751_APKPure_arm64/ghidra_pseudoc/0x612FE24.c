/* Ghidra 12.1.2 native pseudocode; RVA 0x612FE24; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.ClearAllExpiredItems; status ok */

/* WARNING: Removing unreachable block (ram,0x062302c4) */

undefined1  [16]
MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__ClearAllExpiredItems(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  if ((bRam0000000007e24518 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077da800);
    func_0x03280a18(PTR_DAT_077da808);
    func_0x03280a18(PTR_DAT_077da810);
    func_0x03280a18(PTR_DAT_077da818);
    func_0x03280a18(PTR_DAT_0774f358);
    func_0x03280a18(PTR_DAT_077da820);
    func_0x03280a18(PTR_DAT_0774eab0);
    func_0x03280a18(PTR_DAT_077da828);
    func_0x03280a18(PTR_DAT_077da830);
    func_0x03280a18(PTR_DAT_077da838);
    func_0x03280a18(PTR_DAT_077da840);
    func_0x03280a18(PTR_DAT_077da848);
    func_0x03280a18(PTR_DAT_077da850);
    func_0x03280a18(PTR_DAT_077da858);
    func_0x03280a18(PTR_DAT_077da860);
    func_0x03280a18(PTR_DAT_077da868);
    func_0x03280a18(PTR_DAT_077da870);
    func_0x03280a18(PTR_DAT_077da878);
    func_0x03280a18(PTR_DAT_077da880);
    func_0x03280a18(PTR_DAT_077da888);
    func_0x03280a18(PTR_DAT_077da890);
    func_0x03280a18(PTR_DAT_077da898);
    func_0x03280a18(PTR_DAT_077da8a0);
    func_0x03280a18(PTR_DAT_077da8a8);
    func_0x03280a18(PTR_DAT_077da8b0);
    func_0x03280a18(PTR_DAT_077da8b8);
    func_0x03280a18(PTR_DAT_077da8c0);
    bRam0000000007e24518 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_062303d0;
  lVar4 = func_0x04fe2a5c(*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_077da818);
  puVar2 = PTR_DAT_077da8b8;
  puVar1 = PTR_DAT_077da828;
  puVar13 = (undefined8 *)PTR_DAT_077da808;
  if (lVar4 == 0) goto LAB_062303d0;
  func_0x054c39e0(&uStack_b8,lVar4,*(undefined8 *)PTR_DAT_077da878);
  uStack_78 = uStack_b0;
  uStack_80 = uStack_b8;
  uStack_70 = uStack_a8;
LAB_06230004:
  uVar5 = func_0x05160590(&uStack_80,*(undefined8 *)PTR_DAT_077da840);
  uVar3 = uStack_70;
  if ((uVar5 & 1) == 0) {
    func_0x0516058c(&uStack_80,*(undefined8 *)PTR_DAT_077da838);
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_062303c0;
    lVar4 = func_0x04fe2cfc(*(long *)(param_1 + 0x48),uStack_70,*puVar13);
    if (lVar4 == 0) goto LAB_062303c4;
    lVar4 = func_0x04f35818(lVar4,*(undefined8 *)PTR_DAT_077da810);
    if (lVar4 == 0) goto LAB_062303bc;
    func_0x054b2908(&uStack_b8,lVar4,*(undefined8 *)PTR_DAT_077da870);
    uStack_98 = uStack_b0;
    uStack_a0 = uStack_b8;
    uStack_90 = uStack_a8;
LAB_06230070:
    uVar6 = func_0x05148b94(&uStack_a0,*(undefined8 *)PTR_DAT_077da848);
    uVar5 = uStack_90;
    if ((uVar6 & 1) == 0) goto LAB_062302a8;
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar4 = func_0x04fe2cfc(*(long *)(param_1 + 0x48),uVar3,*puVar13);
      if (lVar4 == 0) {
        auVar14 = func_0x03280cac();
        goto LAB_0623039c;
      }
      unaff_x22 = func_0x04f35ab8(lVar4,uVar5 & 0xffffffff,*(undefined8 *)PTR_DAT_077da800);
      if (unaff_x22 == 0) {
        auVar14 = func_0x03280cac();
        goto LAB_0623039c;
      }
      puVar9 = (undefined8 *)(unaff_x22 + 0x18);
      uVar10 = *puVar9;
      uVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da868);
      func_0x05355fbc(uVar7,param_1,*(undefined8 *)PTR_DAT_077da898,0);
      uVar7 = func_0x03d872a8(uVar10,uVar7,*(undefined8 *)puVar1);
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        func_0x03280b8c(lVar4);
        lVar4 = *(long *)puVar2;
      }
      lVar11 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar11 == 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          func_0x03280b8c(lVar4);
          lVar4 = *(long *)puVar2;
        }
        uVar12 = **(undefined8 **)(lVar4 + 0xb8);
        lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da860);
        func_0x053569b8(lVar11,uVar12,*(undefined8 *)PTR_DAT_077da8b0,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        *plVar8 = lVar11;
        puVar13 = (undefined8 *)PTR_DAT_077da808;
        func_0x032809c4(plVar8,lVar11);
      }
      uVar7 = func_0x03d50a94(uVar7,lVar11,*(undefined8 *)PTR_DAT_077da820);
      uVar7 = func_0x03d5b8d8(uVar7,*(undefined8 *)PTR_DAT_0774eab0);
      uVar6 = func_0x03d281a8(uVar7,*(undefined8 *)PTR_DAT_0774f358);
      if ((uVar6 & 1) != 0) {
        uVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da868);
        func_0x05355fbc(uVar12,param_1,*(undefined8 *)PTR_DAT_077da8a0,0);
        uVar10 = func_0x03d872a8(uVar10,uVar12,*(undefined8 *)puVar1);
        uVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da890);
        func_0x044a2cf4(uVar12,uVar10,*(undefined8 *)PTR_DAT_077da888);
        *puVar9 = uVar12;
        func_0x032809c4(puVar9,uVar12);
        lVar4 = *(long *)(param_1 + 0x20);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
        unaff_x22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da880);
        func_0x068c4904(unaff_x22,uVar10,uVar3,uVar5 & 0xffffffff,uVar7,
                        *(undefined8 *)PTR_DAT_077da8c0,0);
        if (lVar4 == 0) {
          auVar14 = func_0x03280cac();
          goto LAB_0623039c;
        }
        func_0x03ea4d6c(lVar4,unaff_x22,*(undefined8 *)PTR_DAT_077da8a8);
      }
      goto LAB_06230070;
    }
    auVar14 = func_0x03280cac();
LAB_0623039c:
    while (func_0x05148b90(&uStack_a0,*(undefined8 *)PTR_DAT_077da830), unaff_x22 != 0) {
      func_0x03280ca4(unaff_x22);
LAB_062303bc:
      func_0x03280cac();
LAB_062303c0:
      func_0x03280cac();
LAB_062303c4:
      func_0x03280cac();
      func_0x03280ca4(unaff_x22);
LAB_062303d0:
      auVar14 = func_0x03280cac();
    }
    if (auVar14._8_4_ != 1) {
LAB_06230440:
      func_0x0516058c(&uStack_80,*(undefined8 *)PTR_DAT_077da838);
      func_0x03365958(auVar14._0_8_);
      func_0x03280ca4(0);
      auVar14._0_8_ = func_0x02f09514();
      MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__ClearAllExpiredItems();
      func_0x0623049c(auVar14._0_8_);
      auVar14._8_8_ = 0;
      return auVar14;
    }
    plVar8 = (long *)func_0x072ce910(auVar14._0_8_);
    lVar4 = *plVar8;
    func_0x072ce920();
    func_0x0516058c(&uStack_80,*(undefined8 *)PTR_DAT_077da838);
    if (lVar4 != 0) {
      func_0x03280ca4(lVar4);
      goto LAB_06230440;
    }
  }
  auVar14 = func_0x0623049c(param_1);
  return auVar14;
LAB_062302a8:
  unaff_x22 = 0;
  func_0x05148b90(&uStack_a0,*(undefined8 *)PTR_DAT_077da830);
  goto LAB_06230004;
}

