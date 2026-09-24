/* Ghidra 12.1.2 native pseudocode; RVA 0x5FE8B04; MergeEngine.Util.ItemSpawningQueue.Refill; status ok */

/* WARNING: Possible PIC construction at 0x060e8c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x060e8ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x060e96dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x060e8c34) */
/* WARNING: Removing unreachable block (ram,0x060e8c3c) */
/* WARNING: Removing unreachable block (ram,0x060e8ca8) */
/* WARNING: Removing unreachable block (ram,0x060e8cb0) */
/* WARNING: Removing unreachable block (ram,0x060e8cb8) */
/* WARNING: Removing unreachable block (ram,0x060e8cd8) */
/* WARNING: Removing unreachable block (ram,0x060e8cf4) */
/* WARNING: Removing unreachable block (ram,0x060e8d18) */
/* WARNING: Removing unreachable block (ram,0x060e8d04) */
/* WARNING: Removing unreachable block (ram,0x060e8c70) */
/* WARNING: Removing unreachable block (ram,0x060e8c78) */
/* WARNING: Removing unreachable block (ram,0x060e8c90) */
/* WARNING: Removing unreachable block (ram,0x060e96e0) */
/* WARNING: Removing unreachable block (ram,0x060e96e4) */
/* WARNING: Removing unreachable block (ram,0x060e9710) */
/* WARNING: Removing unreachable block (ram,0x060e9718) */
/* WARNING: Removing unreachable block (ram,0x060e9720) */
/* WARNING: Removing unreachable block (ram,0x060e972c) */
/* WARNING: Removing unreachable block (ram,0x060e975c) */
/* WARNING: Removing unreachable block (ram,0x060e9780) */
/* WARNING: Removing unreachable block (ram,0x060e97b8) */
/* WARNING: Removing unreachable block (ram,0x060e97e8) */
/* WARNING: Removing unreachable block (ram,0x060e97f4) */
/* WARNING: Removing unreachable block (ram,0x060e9800) */
/* WARNING: Removing unreachable block (ram,0x060e9808) */
/* WARNING: Removing unreachable block (ram,0x060e9814) */
/* WARNING: Removing unreachable block (ram,0x060e985c) */
/* WARNING: Removing unreachable block (ram,0x060e9860) */
/* WARNING: Removing unreachable block (ram,0x060e9884) */
/* WARNING: Removing unreachable block (ram,0x060e9890) */
/* WARNING: Removing unreachable block (ram,0x060e989c) */
/* WARNING: Removing unreachable block (ram,0x060e98a4) */
/* WARNING: Removing unreachable block (ram,0x060e98b0) */
/* WARNING: Removing unreachable block (ram,0x060e98fc) */
/* WARNING: Removing unreachable block (ram,0x060e9904) */
/* WARNING: Removing unreachable block (ram,0x060e9910) */
/* WARNING: Removing unreachable block (ram,0x060e991c) */
/* WARNING: Removing unreachable block (ram,0x060e9924) */
/* WARNING: Removing unreachable block (ram,0x060e9930) */
/* WARNING: Removing unreachable block (ram,0x060e9980) */
/* WARNING: Removing unreachable block (ram,0x060e99a0) */
/* WARNING: Removing unreachable block (ram,0x060e99a8) */
/* WARNING: Removing unreachable block (ram,0x060e99bc) */
/* WARNING: Removing unreachable block (ram,0x060e9ab0) */
/* WARNING: Removing unreachable block (ram,0x060e9ab4) */
/* WARNING: Removing unreachable block (ram,0x060e9ab8) */
/* WARNING: Removing unreachable block (ram,0x060e99cc) */
/* WARNING: Removing unreachable block (ram,0x060e99d8) */
/* WARNING: Removing unreachable block (ram,0x060e9abc) */
/* WARNING: Removing unreachable block (ram,0x060e99dc) */
/* WARNING: Removing unreachable block (ram,0x060e99f8) */
/* WARNING: Removing unreachable block (ram,0x060e9a0c) */
/* WARNING: Removing unreachable block (ram,0x060e9a1c) */
/* WARNING: Removing unreachable block (ram,0x060e9ac0) */
/* WARNING: Removing unreachable block (ram,0x060e9ac4) */
/* WARNING: Removing unreachable block (ram,0x060e9ac8) */
/* WARNING: Removing unreachable block (ram,0x060e9acc) */
/* WARNING: Removing unreachable block (ram,0x060e9ad0) */
/* WARNING: Removing unreachable block (ram,0x060e9ad4) */
/* WARNING: Removing unreachable block (ram,0x060e9ad8) */
/* WARNING: Removing unreachable block (ram,0x060e9adc) */
/* WARNING: Removing unreachable block (ram,0x060e9ae0) */
/* WARNING: Removing unreachable block (ram,0x060e9ae4) */
/* WARNING: Removing unreachable block (ram,0x060e9a34) */
/* WARNING: Removing unreachable block (ram,0x060e9a64) */
/* WARNING: Removing unreachable block (ram,0x060e9a44) */

void MergeEngine_Util_ItemSpawningQueue__Refill
               (long param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x1;
  long extraout_x1_00;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000007e23625 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cd868);
    func_0x03280a18(PTR_DAT_077cd870);
    func_0x03280a18(PTR_DAT_077cd878);
    func_0x03280a18(PTR_DAT_077cd880);
    func_0x03280a18(PTR_DAT_077cd888);
    func_0x03280a18(PTR_DAT_077cd890);
    func_0x03280a18(PTR_DAT_077cd898);
    func_0x03280a18(PTR_DAT_077cd8a0);
    func_0x03280a18(PTR_DAT_077cd8a8);
    func_0x03280a18(PTR_DAT_077535b0);
    bRam0000000007e23625 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar11 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar2 = PTR_DAT_077535b0;
  if (lVar11 != 0) {
    iVar10 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar10) {
      param_4 = 0;
      func_0x057b9c7c(*(undefined8 *)(lVar11 + 0x10),0);
      param_2 = *(undefined4 *)(param_1 + 0x30);
    }
    uVar5 = func_0x03280ca0(*(undefined8 *)puVar2);
    param_3 = 0;
    func_0x057a7298(uVar5,param_2);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    func_0x032809c4((undefined8 *)(param_1 + 0x20),uVar5);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar11 = *(long *)(param_1 + 0x10);
      param_3 = *(long *)(*(long *)(param_1 + 0x28) + 0x58);
      uVar5 = 0x60e8c34;
      goto SUB_060e8dbc;
    }
  }
  auVar16 = func_0x03280cac();
  if (auVar16._8_4_ == 1) {
    plVar6 = (long *)func_0x072ce910(auVar16._0_8_);
    lVar11 = *plVar6;
    func_0x072ce920();
    func_0x0515fcf0(&uStack_60,*(undefined8 *)PTR_DAT_077cd880);
    if (lVar11 == 0) {
      return;
    }
    func_0x03280ca4(lVar11);
  }
  func_0x0515fcf0(&uStack_60,*(undefined8 *)PTR_DAT_077cd880);
  func_0x03365958(auVar16._0_8_);
  func_0x03280ca4(0);
  uVar5 = 0x60e8dbc;
  func_0x02f09514();
  lVar11 = extraout_x1;
SUB_060e8dbc:
  puVar2 = PTR_DAT_077cd8b0;
  lVar9 = param_3;
  uStack_90 = uVar5;
  if ((bRam0000000007e23628 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cd8b0);
    func_0x03280a18(PTR_DAT_077cd8b8);
    func_0x03280a18(PTR_DAT_077cd8c0);
    func_0x03280a18(PTR_DAT_077cd8c8);
    func_0x03280a18(PTR_DAT_077cd8d0);
    func_0x03280a18(PTR_DAT_077cd8d8);
    bRam0000000007e23628 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uVar7 = func_0x03ce830c(param_3,*(undefined8 *)puVar2);
  iVar10 = (int)param_4;
  if ((uVar7 & 1) == 0) {
    if (param_3 == 0) {
LAB_060e8f5c:
      auVar16 = func_0x03280cac();
      if (auVar16._8_4_ == 1) {
        plVar6 = (long *)func_0x072ce910(auVar16._0_8_);
        lVar11 = *plVar6;
        func_0x072ce920();
        func_0x051159b0(&uStack_b0,*(undefined8 *)PTR_DAT_077cd8b8);
        if (lVar11 == 0) {
          return;
        }
        func_0x03280ca4(lVar11);
      }
      func_0x051159b0(&uStack_b0,*(undefined8 *)PTR_DAT_077cd8b8);
      func_0x03365958(auVar16._0_8_);
      func_0x03280ca4(0);
      auVar17 = func_0x02f09514();
      puVar2 = PTR_DAT_077cd8e0;
      lVar11 = auVar17._8_8_;
      if ((bRam0000000007e2362a & 1) == 0) {
        func_0x03280a18(PTR_DAT_077cd8e0);
        func_0x03280a18(PTR_DAT_077cd8e8);
        func_0x03280a18(PTR_DAT_077cd8f0);
        func_0x03280a18(PTR_DAT_077cd8f8);
        func_0x03280a18(PTR_DAT_077cd8d0);
        func_0x03280a18(PTR_DAT_077cd900);
        func_0x03280a18(PTR_DAT_077cd908);
        func_0x03280a18(PTR_DAT_077cd910);
        func_0x03280a18(PTR_DAT_077cd918);
        func_0x03280a18(PTR_DAT_077cd920);
        func_0x03280a18(PTR_DAT_077cd928);
        func_0x03280a18(PTR_DAT_077cd930);
        func_0x03280a18(PTR_DAT_077cd938);
        bRam0000000007e2362a = 1;
      }
      uVar7 = func_0x03ce830c(lVar9,*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_077cd928;
      if ((uVar7 & 1) != 0) {
        return;
      }
      lVar8 = *(long *)PTR_DAT_077cd928;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar8 = *(long *)puVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
      if (lVar12 == 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar8 = *(long *)puVar2;
        }
        uVar5 = **(undefined8 **)(lVar8 + 0xb8);
        lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8e8);
        func_0x04e5231c(lVar12,uVar5,*(undefined8 *)PTR_DAT_077cd910,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
        *plVar6 = lVar12;
        func_0x032809c4(plVar6,lVar12);
      }
      if (lVar9 != 0) {
        func_0x04146094(lVar9,lVar12,*(undefined8 *)PTR_DAT_077cd900);
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar8 = *(long *)puVar2;
        }
        lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x48);
        if (lVar12 == 0) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar8 = *(long *)puVar2;
          }
          uVar5 = **(undefined8 **)(lVar8 + 0xb8);
          lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8f8);
          func_0x05356664(lVar12,uVar5,*(undefined8 *)PTR_DAT_077cd918,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
          *plVar6 = lVar12;
          func_0x032809c4(plVar6,lVar12);
          lVar8 = *(long *)puVar2;
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar8 = *(long *)puVar2;
        }
        lVar13 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x50);
        if (lVar13 == 0) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar8 = *(long *)puVar2;
          }
          uVar5 = **(undefined8 **)(lVar8 + 0xb8);
          lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8f0);
          func_0x053569b8(lVar13,uVar5,*(undefined8 *)PTR_DAT_077cd920,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
          *plVar6 = lVar13;
          func_0x032809c4(plVar6,lVar13);
        }
        lVar9 = func_0x03f36a2c(lVar9,lVar12,lVar13,*(undefined8 *)PTR_DAT_077cd938);
        puVar3 = PTR_DAT_077cd930;
        puVar2 = PTR_DAT_077cd8d0;
        if (lVar11 != 0) {
          iVar14 = *(int *)(lVar11 + 0x18);
          while( true ) {
            if (iVar10 <= iVar14) {
              return;
            }
            if (lVar9 == 0) break;
            uVar5 = func_0x04a44e1c(lVar9,*(undefined8 *)(auVar17._0_8_ + 0x20),
                                    *(undefined8 *)puVar3);
            lVar8 = *(long *)(lVar11 + 0x10);
            lVar12 = *(long *)puVar2;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar8 == 0) break;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
              func_0x032809c4();
            }
            else {
              func_0x0414446c(lVar11,uVar5,
                              *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            iVar14 = *(int *)(lVar11 + 0x18);
          }
        }
      }
      func_0x03280cac();
      puVar2 = PTR_DAT_077cd928;
      if ((bRam0000000007e23626 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077cd8e0);
        func_0x03280a18(PTR_DAT_077cd8e8);
        func_0x03280a18(PTR_DAT_077cd940);
        func_0x03280a18(PTR_DAT_077cd948);
        func_0x03280a18(PTR_DAT_077cd950);
        func_0x03280a18(PTR_DAT_077cd958);
        func_0x03280a18(PTR_DAT_077cd960);
        func_0x03280a18(PTR_DAT_077cd968);
        func_0x03280a18(PTR_DAT_077cd970);
        func_0x03280a18(PTR_DAT_077cd978);
        func_0x03280a18(PTR_DAT_077cd980);
        func_0x03280a18(PTR_DAT_077cd8f0);
        func_0x03280a18(PTR_DAT_077cd988);
        func_0x03280a18(PTR_DAT_077cd8f8);
        func_0x03280a18(PTR_DAT_077cd990);
        func_0x03280a18(PTR_DAT_077cd8d0);
        func_0x03280a18(PTR_DAT_077cd998);
        func_0x03280a18(PTR_DAT_077cd9a0);
        func_0x03280a18(PTR_DAT_077cd900);
        func_0x03280a18(PTR_DAT_077cd850);
        func_0x03280a18(PTR_DAT_077cd908);
        func_0x03280a18(PTR_DAT_077cd848);
        func_0x03280a18(PTR_DAT_077cd9a8);
        func_0x03280a18(PTR_DAT_077cd9b0);
        func_0x03280a18(PTR_DAT_077cd9b8);
        func_0x03280a18(PTR_DAT_077cd9c0);
        func_0x03280a18(PTR_DAT_077cd9c8);
        func_0x03280a18(PTR_DAT_077cd9d0);
        func_0x03280a18(PTR_DAT_077cd9d8);
        func_0x03280a18(PTR_DAT_077cd9e0);
        func_0x03280a18(PTR_DAT_077cd928);
        func_0x03280a18(PTR_DAT_077cd930);
        func_0x03280a18(PTR_DAT_077cd938);
        bRam0000000007e23626 = 1;
      }
      lVar11 = *(long *)puVar2;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = *(long *)puVar2;
      }
      puVar4 = PTR_DAT_077cd958;
      puVar3 = PTR_DAT_077cd950;
      lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar9 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar11 = *(long *)puVar2;
        }
        uVar5 = **(undefined8 **)(lVar11 + 0xb8);
        lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd988);
        func_0x053569b8(lVar9,uVar5,*(undefined8 *)PTR_DAT_077cd9b0,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar6 = lVar9;
        func_0x032809c4(plVar6,lVar9);
      }
      uVar5 = func_0x03d53498(extraout_x1_00,lVar9,*(undefined8 *)puVar4);
      uVar5 = func_0x03d3c654(uVar5,*(undefined8 *)puVar3);
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c(lVar11);
        lVar11 = *(long *)puVar2;
      }
      puVar3 = PTR_DAT_077cd968;
      puVar2 = PTR_DAT_077cd960;
      lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
      if (lVar9 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          func_0x03280b8c(lVar11);
          lVar11 = *(long *)PTR_DAT_077cd928;
        }
        puVar4 = PTR_DAT_077cd928;
        uVar15 = **(undefined8 **)(lVar11 + 0xb8);
        lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd990);
        func_0x053569b8(lVar9,uVar15,*(undefined8 *)PTR_DAT_077cd9b8,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        *plVar6 = lVar9;
        func_0x032809c4(plVar6,lVar9);
      }
      uVar5 = func_0x03d50a94(uVar5,lVar9,*(undefined8 *)puVar2);
      func_0x03d5ffd0(uVar5,*(undefined8 *)puVar3);
      if (extraout_x1_00 == 0) {
        auVar16 = func_0x03280cac();
        if (auVar16._8_4_ == 1) {
          plVar6 = (long *)func_0x072ce910(auVar16._0_8_);
          lVar11 = *plVar6;
          func_0x072ce920();
          func_0x051159b0(&uStack_1a0,*(undefined8 *)PTR_DAT_077cd970);
          if (lVar11 == 0) {
            return;
          }
          func_0x03280ca4(lVar11);
        }
        func_0x051159b0(&uStack_1a0,*(undefined8 *)PTR_DAT_077cd970);
        func_0x03365958(auVar16._0_8_);
        func_0x03280ca4(0);
        func_0x02f09514();
      }
      else {
        func_0x04145068(&uStack_1b8,extraout_x1_00,*(undefined8 *)PTR_DAT_077cd9a0);
        uStack_198 = uStack_1b0;
        uStack_1a0 = uStack_1b8;
        uStack_190 = uStack_1a8;
        uVar7 = func_0x051159b4(&uStack_1a0,*(undefined8 *)PTR_DAT_077cd978);
        if ((uVar7 & 1) == 0) {
          func_0x051159b0(&uStack_1a0,*(undefined8 *)PTR_DAT_077cd970);
          return;
        }
        func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd9e0);
      }
      return;
    }
    func_0x04145068(&uStack_c8,param_3,*(undefined8 *)PTR_DAT_077cd8d8);
    puVar3 = PTR_DAT_077cd8d0;
    puVar2 = PTR_DAT_077cd8c0;
    uStack_a8 = uStack_c0;
    uStack_b0 = uStack_c8;
    lStack_a0 = lStack_b8;
    while( true ) {
      uVar7 = func_0x051159b4(&uStack_b0,*(undefined8 *)puVar2);
      lVar8 = lStack_a0;
      iVar10 = (int)param_4;
      if ((uVar7 & 1) == 0) break;
      if (lStack_a0 == 0) {
LAB_060e8f58:
        func_0x03280cac();
        goto LAB_060e8f5c;
      }
      if (0 < *(int *)(lStack_a0 + 0x24)) {
        iVar14 = 0;
        do {
          iVar10 = (int)param_4;
          if (lVar11 == 0) {
            func_0x03280cac();
LAB_060e8f54:
            func_0x03280cac();
            goto LAB_060e8f58;
          }
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar13 = *(long *)puVar3;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_060e8f54;
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar8;
            func_0x032809c4(plVar6,lVar8);
          }
          else {
            lVar9 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(lVar11,lVar8);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(lVar8 + 0x24));
      }
    }
    func_0x051159b0(&uStack_b0,*(undefined8 *)PTR_DAT_077cd8b8);
  }
  return;
}

