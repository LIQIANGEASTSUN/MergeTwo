/* Ghidra 12.1.2 native pseudocode; RVA 0x613DDE8; MergeEngine.Model.Configuration.MergingConfigurationModel.HasGraphById; status ok */


long MergeEngine_Model_Configuration_MergingConfigurationModel__HasGraphById
               (long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *plVar9;
  undefined8 unaff_x20;
  long *plVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  long lStack_28;
  
  if ((bRam0000000007e245a8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db2f0);
    func_0x03280a18(PTR_DAT_077db2f8);
    bRam0000000007e245a8 = 1;
  }
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar4 = func_0x0431f26c(*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_077db2f0), lVar4 == 0
     )) {
    auVar11 = func_0x03280cac();
    lStack_28 = 0;
    func_0x0623de7c(auVar11._0_8_,auVar11._8_8_,&lStack_28);
    return lStack_28;
  }
  lVar5 = *(long *)PTR_DAT_077db2f8;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x30;
    *(undefined8 *)(puVar1 + -0x10) = unaff_x20;
    *(long **)(puVar1 + -8) = unaff_x19;
    plVar9 = *(long **)(lVar4 + 0x10);
    if (plVar9 != (long *)0x0) break;
    auVar11 = func_0x03280cac();
    lVar4 = *(long *)(*(long *)(*(long *)(auVar11._8_8_ + 0x20) + 0xc0) + 0x60);
    *(undefined8 *)(puVar1 + -0x40) = 0x45a8a54;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x30) = 0;
    *(long **)(puVar1 + -0x28) = unaff_x19;
    plVar9 = (long *)(auVar11._0_8_ + 0x20);
    if (*plVar9 != 0) {
      return *plVar9;
    }
    plVar10 = *(long **)(auVar11._0_8_ + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar5 = **(long **)(*(long *)(lVar4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c(lVar5);
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_045a8820;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_045a8808;
    }
    auVar11 = func_0x03280cac();
    lVar4 = auVar11._8_8_;
    *(undefined8 *)(puVar1 + -0x60) = 0x45a88b4;
    *(undefined8 *)(puVar1 + -0x58) = 0;
    *(undefined8 *)(puVar1 + -0x50) = 0;
    *(long **)(puVar1 + -0x48) = plVar9;
    unaff_x19 = (long *)(auVar11._0_8_ + 0x28);
    if (*unaff_x19 != 0) {
      return *unaff_x19;
    }
    plVar9 = *(long **)(auVar11._0_8_ + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar5 = **(long **)(*(long *)(lVar4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_045a8924;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_045a890c;
    }
    unaff_x30 = 0x45a89b8;
    auVar11 = func_0x03280cac();
    param_2 = auVar11._8_8_;
    lVar4 = auVar11._0_8_;
    unaff_x20 = 0;
    unaff_x21 = 0;
    puVar1 = puVar1 + -0x60;
  }
  lVar4 = **(long **)(*(long *)(lVar5 + 0x20) + 0xc0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = func_0x0325681c(lVar4);
  }
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_045a8a38;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(plVar9,lVar4,4);
LAB_045a8a38:
                    /* WARNING: Could not recover jumptable at 0x045a8a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar4 = (*(code *)*puVar3)(plVar9,param_2,puVar3[1]);
  return lVar4;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_045a8808:
    if (*(long *)(piVar8 + -2) == lVar5) {
      puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
      goto LAB_045a8840;
    }
  }
LAB_045a8820:
  puVar3 = (undefined8 *)func_0x03256b10(plVar10,lVar5,2);
LAB_045a8840:
  uVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c(lVar5);
  }
  lVar5 = func_0x03280ca0(lVar5);
  func_0x054c3fac(lVar5,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x28));
  *plVar9 = lVar5;
  func_0x032809c4(plVar9,lVar5);
  return *plVar9;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_045a890c:
    if (*(long *)(piVar8 + -2) == lVar5) {
      puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
      goto LAB_045a8944;
    }
  }
LAB_045a8924:
  puVar3 = (undefined8 *)func_0x03256b10(plVar9,lVar5,3);
LAB_045a8944:
  uVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x30);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c(lVar5);
  }
  lVar5 = func_0x03280ca0(lVar5);
  func_0x04816d34(lVar5,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x48));
  *unaff_x19 = lVar5;
  func_0x032809c4(unaff_x19,lVar5);
  return *unaff_x19;
}

