/* Ghidra 12.1.2 native pseudocode; RVA 0x612FD78; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.ServerTimeUpdated; status ok */

/* WARNING: Possible PIC construction at 0x0622fdd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06230480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0622fdd8) */
/* WARNING: Removing unreachable block (ram,0x0622fe20) */
/* WARNING: Removing unreachable block (ram,0x0622fdfc) */
/* WARNING: Removing unreachable block (ram,0x03ea5ee4) */
/* WARNING: Removing unreachable block (ram,0x03ea5efc) */
/* WARNING: Removing unreachable block (ram,0x03ea5f0c) */
/* WARNING: Removing unreachable block (ram,0x03ea604c) */
/* WARNING: Removing unreachable block (ram,0x03ea606c) */
/* WARNING: Removing unreachable block (ram,0x03ea6084) */
/* WARNING: Removing unreachable block (ram,0x03ea6090) */
/* WARNING: Removing unreachable block (ram,0x03ea60a8) */
/* WARNING: Removing unreachable block (ram,0x03ea60ac) */
/* WARNING: Removing unreachable block (ram,0x07286c4c) */
/* WARNING: Removing unreachable block (ram,0x06230484) */
/* WARNING: Removing unreachable block (ram,0x06a4bf54) */
/* WARNING: Removing unreachable block (ram,0x062302c4) */

void MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__ServerTimeUpdated(long param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *unaff_x28;
  undefined *puVar11;
  undefined *unaff_x29;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar8 = PTR_DAT_077da7e0;
  puVar5 = PTR_DAT_0774e758;
  uVar7 = 0x7e24000;
  if ((bRam0000000007e2450a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_077da7e0);
    func_0x03280a18(PTR_DAT_077da7f8);
    bRam0000000007e2450a = 1;
  }
  uVar13 = 0x622fdd8;
  puVar2 = &stack0xffffffffffffffd0;
  do {
    *(undefined **)(puVar2 + -0x60) = unaff_x29;
    *(undefined8 *)(puVar2 + -0x58) = uVar13;
    *(undefined **)(puVar2 + -0x50) = unaff_x28;
    *(undefined8 **)(puVar2 + -0x48) = unaff_x27;
    *(long *)(puVar2 + -0x40) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x24;
    *(undefined8 **)(puVar2 + -0x28) = unaff_x23;
    *(undefined **)(puVar2 + -0x20) = puVar5;
    *(undefined **)(puVar2 + -0x18) = puVar8;
    *(undefined8 *)(puVar2 + -0x10) = uVar7;
    *(long *)(puVar2 + -8) = param_1;
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
    *(undefined8 *)(puVar2 + -0x80) = 0;
    *(undefined8 *)(puVar2 + -0x78) = 0;
    *(undefined8 *)(puVar2 + -0x70) = 0;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    *(undefined8 *)(puVar2 + -0x98) = 0;
    *(undefined8 *)(puVar2 + -0x90) = 0;
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_062303d0;
    lVar3 = func_0x04fe2a5c(*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_077da818);
    puVar11 = PTR_DAT_077da8b8;
    puVar12 = PTR_DAT_077da828;
    puVar10 = (undefined8 *)PTR_DAT_077da808;
    if (lVar3 == 0) goto LAB_062303d0;
    func_0x054c39e0(puVar2 + -0xb8,lVar3,*(undefined8 *)PTR_DAT_077da878);
    *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0xb0);
    *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0xb8);
    *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xa8);
LAB_06230004:
    uVar4 = func_0x05160590(puVar2 + -0x80,*(undefined8 *)PTR_DAT_077da840);
    if ((uVar4 & 1) == 0) {
      func_0x0516058c(puVar2 + -0x80,*(undefined8 *)PTR_DAT_077da838);
      goto LAB_06230370;
    }
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_062303c0;
    uVar7 = *(undefined8 *)(puVar2 + -0x70);
    lVar3 = func_0x04fe2cfc(*(long *)(param_1 + 0x48),uVar7,*puVar10);
    if (lVar3 == 0) goto LAB_062303c4;
    lVar3 = func_0x04f35818(lVar3,*(undefined8 *)PTR_DAT_077da810);
    if (lVar3 == 0) goto LAB_062303bc;
    func_0x054b2908(puVar2 + -0xb8,lVar3,*(undefined8 *)PTR_DAT_077da870);
    *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -0xb0);
    *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xb8);
    *(undefined8 *)(puVar2 + -0x90) = *(undefined8 *)(puVar2 + -0xa8);
LAB_06230070:
    uVar4 = func_0x05148b94(puVar2 + -0xa0,*(undefined8 *)PTR_DAT_077da848);
    if ((uVar4 & 1) == 0) break;
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar1 = *(undefined4 *)(puVar2 + -0x90);
      lVar3 = func_0x04fe2cfc(*(long *)(param_1 + 0x48),uVar7,*puVar10);
      if (lVar3 == 0) {
        auVar14 = func_0x03280cac();
        goto LAB_0623039c;
      }
      puVar5 = (undefined *)func_0x04f35ab8(lVar3,uVar1,*(undefined8 *)PTR_DAT_077da800);
      if (puVar5 == (undefined *)0x0) {
        auVar14 = func_0x03280cac();
        goto LAB_0623039c;
      }
      unaff_x23 = (undefined8 *)(puVar5 + 0x18);
      unaff_x24 = *unaff_x23;
      uVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da868);
      func_0x05355fbc(uVar13,param_1,*(undefined8 *)PTR_DAT_077da898,0);
      uVar13 = func_0x03d872a8(unaff_x24,uVar13,*(undefined8 *)puVar12);
      lVar3 = *(long *)puVar11;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        func_0x03280b8c(lVar3);
        lVar3 = *(long *)puVar11;
      }
      unaff_x26 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (unaff_x26 == 0) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          func_0x03280b8c(lVar3);
          lVar3 = *(long *)puVar11;
        }
        uVar9 = **(undefined8 **)(lVar3 + 0xb8);
        unaff_x26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da860);
        func_0x053569b8(unaff_x26,uVar9,*(undefined8 *)PTR_DAT_077da8b0,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
        *plVar6 = unaff_x26;
        puVar10 = (undefined8 *)PTR_DAT_077da808;
        func_0x032809c4(plVar6,unaff_x26);
      }
      uVar13 = func_0x03d50a94(uVar13,unaff_x26,*(undefined8 *)PTR_DAT_077da820);
      unaff_x25 = func_0x03d5b8d8(uVar13,*(undefined8 *)PTR_DAT_0774eab0);
      uVar4 = func_0x03d281a8(unaff_x25,*(undefined8 *)PTR_DAT_0774f358);
      if ((uVar4 & 1) != 0) {
        uVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da868);
        func_0x05355fbc(uVar13,param_1,*(undefined8 *)PTR_DAT_077da8a0,0);
        unaff_x26 = func_0x03d872a8(unaff_x24,uVar13,*(undefined8 *)puVar12);
        uVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da890);
        func_0x044a2cf4(uVar13,unaff_x26,*(undefined8 *)PTR_DAT_077da888);
        *unaff_x23 = uVar13;
        func_0x032809c4(unaff_x23,uVar13);
        unaff_x23 = *(undefined8 **)(param_1 + 0x20);
        unaff_x24 = *(undefined8 *)(puVar5 + 0x10);
        puVar5 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077da880);
        func_0x068c4904(puVar5,unaff_x24,uVar7,uVar1,unaff_x25,*(undefined8 *)PTR_DAT_077da8c0,0);
        if (unaff_x23 == (undefined8 *)0x0) {
          auVar14 = func_0x03280cac();
          goto LAB_0623039c;
        }
        func_0x03ea4d6c(unaff_x23,puVar5,*(undefined8 *)PTR_DAT_077da8a8);
      }
      goto LAB_06230070;
    }
    auVar14 = func_0x03280cac();
LAB_0623039c:
    while (uVar7 = auVar14._0_8_, func_0x05148b90(puVar2 + -0xa0,*(undefined8 *)PTR_DAT_077da830),
          puVar5 != (undefined *)0x0) {
      func_0x03280ca4(puVar5);
LAB_062303bc:
      func_0x03280cac();
LAB_062303c0:
      func_0x03280cac();
LAB_062303c4:
      func_0x03280cac();
      func_0x03280ca4(puVar5);
      unaff_x27 = puVar10;
      unaff_x28 = puVar11;
      unaff_x29 = puVar12;
LAB_062303d0:
      puVar12 = unaff_x29;
      puVar11 = unaff_x28;
      puVar10 = unaff_x27;
      auVar14 = func_0x03280cac();
    }
    if (auVar14._8_4_ == 1) {
      plVar6 = (long *)func_0x072ce910(uVar7);
      lVar3 = *plVar6;
      func_0x072ce920();
      func_0x0516058c(puVar2 + -0x80,*(undefined8 *)PTR_DAT_077da838);
      if (lVar3 == 0) {
LAB_06230370:
        func_0x0623049c(param_1);
        return;
      }
      func_0x03280ca4(lVar3);
    }
    puVar8 = (undefined *)0x0;
    func_0x0516058c(puVar2 + -0x80,*(undefined8 *)PTR_DAT_077da838);
    func_0x03365958(uVar7);
    func_0x03280ca4(0);
    lVar3 = func_0x02f09514();
    *(undefined8 *)(puVar2 + -0xd0) = 0x6230478;
    *(long *)(puVar2 + -200) = param_1;
    uVar13 = 0x6230484;
    puVar2 = puVar2 + -0xd0;
    param_1 = lVar3;
    unaff_x27 = puVar10;
    unaff_x28 = puVar11;
    unaff_x29 = puVar12;
  } while( true );
  puVar5 = (undefined *)0x0;
  func_0x05148b90(puVar2 + -0xa0,*(undefined8 *)PTR_DAT_077da830);
  goto LAB_06230004;
}

