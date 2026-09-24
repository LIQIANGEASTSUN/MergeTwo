/* Ghidra 12.1.2 native pseudocode; RVA 0x6913CFC; MergeEngine.Configuration.MergeItemInstanceConfiguration.CreateInventoryConfiguration; status ok */


long MergeEngine_Configuration_MergeItemInstanceConfiguration__CreateInventoryConfiguration
               (ulong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long extraout_x1;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_38;
  
  puVar16 = (undefined8 *)PTR_DAT_07826da0;
  puVar1 = PTR_DAT_07750da0;
  param_1 = param_1 & 0xffffffff;
  if ((bRam0000000007e299f5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5c8);
    func_0x03280a18(PTR_DAT_07826da0);
    func_0x03280a18(PTR_DAT_07750da0);
    bRam0000000007e299f5 = 1;
  }
  lVar8 = func_0x03280ca0(*puVar16);
  func_0x057da5fc(lVar8,0);
  uStack_38 = 0;
  func_0x0437b6e0(&uStack_38,param_1,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0777e5c8;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x38) = param_2;
    *(undefined8 *)(lVar8 + 0x30) = uStack_38;
    *(undefined8 *)(lVar8 + 0x40) = param_3;
    func_0x032809c4((undefined8 *)(lVar8 + 0x40),param_3);
    uVar9 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x061117cc(uVar9,0,0,0,0,0,0,1);
    *(undefined8 *)(lVar8 + 0x28) = uVar9;
    func_0x032809c4((undefined8 *)(lVar8 + 0x28),uVar9);
    return lVar8;
  }
  func_0x03280cac();
  if ((bRam0000000007e299f6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077ee3d0);
    func_0x03280a18(PTR_DAT_077cc578);
    func_0x03280a18(PTR_DAT_077cc580);
    func_0x03280a18(PTR_DAT_077cc588);
    func_0x03280a18(PTR_DAT_077ee308);
    func_0x03280a18(PTR_DAT_0777a7e8);
    func_0x03280a18(PTR_DAT_077cc5b0);
    func_0x03280a18(PTR_DAT_07826da8);
    func_0x03280a18(PTR_DAT_07826db0);
    func_0x03280a18(PTR_DAT_07826db8);
    func_0x03280a18(PTR_DAT_07826dc0);
    bRam0000000007e299f6 = 1;
  }
  puVar6 = PTR_DAT_07826dc0;
  puVar5 = PTR_DAT_07826db0;
  puVar4 = PTR_DAT_077cc5b0;
  puVar3 = PTR_DAT_077cc580;
  puVar2 = PTR_DAT_077cc578;
  puVar1 = PTR_DAT_0777a7e8;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  if (extraout_x1 != 0) {
    if (0 < *(int *)(extraout_x1 + 0x18)) {
      iVar14 = 0;
      do {
        lVar8 = func_0x0414419c(extraout_x1,iVar14,*(undefined8 *)puVar5);
        puVar16 = (undefined8 *)puVar2;
        if (lVar8 == 0) goto LAB_06a140fc;
        if (*(int *)(lVar8 + 0x10) < 0) {
          return 0;
        }
        if ((*(long *)(lVar8 + 0x20) == 0) ||
           (lVar10 = func_0x06b2aaec(*(long *)(lVar8 + 0x20),0), lVar10 == 0)) goto LAB_06a140fc;
        func_0x04145068(&uStack_e8,lVar10,*(undefined8 *)puVar4);
        uStack_c8 = uStack_e0;
        uStack_d0 = uStack_e8;
        uStack_c0 = uStack_d8;
        uVar13 = param_1;
        while (uVar11 = func_0x051159b4(&uStack_d0,*(undefined8 *)puVar3), param_1 = uStack_c0,
              (uVar11 & 1) != 0) {
          if (uStack_c0 == 0) {
            func_0x03280cac();
            goto LAB_06a14100;
          }
          iVar7 = func_0x0611eefc(uStack_c0,0);
          if ((iVar7 < 1) ||
             (lVar10 = func_0x05492218(param_1,*(undefined8 *)puVar1), uVar13 = param_1, lVar10 == 0
             )) {
            func_0x051159b0(&uStack_d0,*(undefined8 *)puVar2);
            return 0;
          }
        }
        func_0x051159b0(&uStack_d0,*(undefined8 *)puVar2);
        param_1 = uVar13;
        if (*(long *)(lVar8 + 0x20) == 0) goto LAB_06a140fc;
        uVar9 = func_0x06b2aaa0(*(long *)(lVar8 + 0x20),0);
        lVar8 = *(long *)puVar6;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c(lVar8);
          lVar8 = *(long *)puVar6;
        }
        param_1 = *(ulong *)(*(long *)(lVar8 + 0xb8) + 8);
        if (param_1 == 0) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            func_0x03280b8c(lVar8);
            lVar8 = *(long *)puVar6;
          }
          uVar15 = **(undefined8 **)(lVar8 + 0xb8);
          param_1 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077ee308);
          func_0x05355fbc(param_1,uVar15,*(undefined8 *)PTR_DAT_07826db8,0);
          puVar12 = (ulong *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
          *puVar12 = param_1;
          func_0x032809c4(puVar12,param_1);
        }
        uVar13 = func_0x03d2b410(uVar9,param_1,*(undefined8 *)PTR_DAT_077ee3d0);
        if ((uVar13 & 1) != 0) {
          return 0;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(extraout_x1 + 0x18));
    }
    return 1;
  }
LAB_06a140fc:
  func_0x03280cac();
LAB_06a14100:
  func_0x051159b0(&uStack_d0,*puVar16);
  func_0x03365958(param_1);
  func_0x03280ca4(0);
  uVar9 = func_0x02f09514();
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e2fd58 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0,0);
    bRam0000000007e2fd58 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x057da5fc(uVar9,0);
  if (pcRam0000000007e2fd60 == (code *)0x0) {
    pcRam0000000007e2fd60 = (code *)func_0x032809dc(&UNK_017bba21);
  }
                    /* WARNING: Could not recover jumptable at 0x06fe1244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar8 = (*pcRam0000000007e2fd60)(uVar9);
  return lVar8;
}

