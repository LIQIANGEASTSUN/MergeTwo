/* Ghidra 12.1.2 native pseudocode; RVA 0x6A70988; Merger.MergeBoard.Systems.ItemUnlockingSystem.UnlockOnDemand; status ok */


/* WARNING: Possible PIC construction at 0x06b709fc: Changing call to branch */

void Merger_MergeBoard_Systems_ItemUnlockingSystem__UnlockOnDemand
               (undefined8 param_1,undefined8 *param_2,long param_3)

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
  undefined1 *extraout_x1;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *unaff_x23;
  undefined1 auVar15 [12];
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined4 auStack_f0 [2];
  char acStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar12 = &uStack_60;
  if ((bRam0000000007e2a6e3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078311b0);
    bRam0000000007e2a6e3 = 1;
  }
  lStack_18 = 0;
  if (param_2[1] != 0) {
    param_3 = *(long *)PTR_DAT_078311b0;
    uVar9 = func_0x03ec5020(param_2[1],&lStack_18);
    if ((uVar9 & 1) == 0) {
      return;
    }
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_28 = param_2[3];
    uStack_30 = param_2[2];
    if (lStack_18 != 0) {
      param_3 = *(long *)(lStack_18 + 0x10);
      uStack_60 = uStack_40;
      uStack_58 = uStack_38;
      uStack_50 = uStack_30;
      uStack_48 = uStack_28;
      goto SUB_06b70a14;
    }
  }
  func_0x03280cac();
  puVar12 = (undefined8 *)extraout_x1;
SUB_06b70a14:
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
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  acStack_e8[0] = '\0';
  auStack_f0[0] = 0;
  if (param_3 == 0) {
LAB_06b70c14:
    auVar15 = func_0x03280cac();
    if (auVar15._8_4_ == 1) {
      plVar11 = (long *)func_0x072ce910(auVar15._0_8_);
      lVar13 = *plVar11;
      func_0x072ce920();
      func_0x051159b0(&uStack_e0,*unaff_x23);
      if (lVar13 == 0) {
        return;
      }
      func_0x03280ca4(lVar13);
    }
    func_0x051159b0(&uStack_e0,*unaff_x23);
    func_0x03365958(auVar15._0_8_);
    func_0x03280ca4(0);
    func_0x02f09514();
    return;
  }
  func_0x04145068(&uStack_108,param_3,*(undefined8 *)PTR_DAT_077c0f68);
  uStack_d8 = uStack_100;
  uStack_e0 = uStack_108;
  lStack_d0 = lStack_f8;
LAB_06b70b2c:
  uVar9 = func_0x051159b4(&uStack_e0,*(undefined8 *)puVar4);
  lVar13 = lStack_d0;
  if ((uVar9 & 1) == 0) {
    func_0x051159b0(&uStack_e0,*(undefined8 *)puVar3);
    return;
  }
  if (lStack_d0 != 0) goto code_r0x06b70b44;
  func_0x03280cac();
  goto LAB_06b70c0c;
code_r0x06b70b44:
  bVar8 = func_0x03d1f470(lStack_d0,acStack_e8,*(undefined8 *)puVar2);
  if (((bVar8 & acStack_e8[0] != '\0') != 0) &&
     (uVar9 = func_0x03d1e2e4(lVar13,auStack_f0,*(undefined8 *)puVar1), (uVar9 & 1) != 0)) {
    acStack_e8[0] = '\0';
    func_0x03d1d588(lVar13,0,*(undefined8 *)puVar5);
    lVar14 = *(long *)((long)puVar12 + 0x10);
    lVar10 = func_0x03280ca0(*(undefined8 *)puVar6);
    func_0x06b9ac38(lVar10,0);
    if (lVar10 == 0) {
LAB_06b70c0c:
      func_0x03280cac();
    }
    else {
      *(long *)(lVar10 + 0x10) = lVar13;
      func_0x032809c4((long *)(lVar10 + 0x10),lVar13);
      *(undefined4 *)(lVar10 + 0x18) = auStack_f0[0];
      if (lVar14 != 0) {
        func_0x03ec33e4(lVar14,lVar10,*(undefined8 *)puVar7);
        goto LAB_06b70b2c;
      }
    }
    func_0x03280cac();
    unaff_x23 = (undefined8 *)puVar3;
    goto LAB_06b70c14;
  }
  goto LAB_06b70b2c;
}

