/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7D254; Merger.MergeBoard.Models.ItemsDiscoveryModel.OverrideItemsDiscoveryState; status ok */


/* WARNING: Possible PIC construction at 0x06b7d410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7d508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b7d414) */
/* WARNING: Removing unreachable block (ram,0x06b7d420) */
/* WARNING: Removing unreachable block (ram,0x06b7d424) */
/* WARNING: Removing unreachable block (ram,0x06b7d4a4) */
/* WARNING: Removing unreachable block (ram,0x06b7d434) */
/* WARNING: Removing unreachable block (ram,0x06b7d48c) */
/* WARNING: Removing unreachable block (ram,0x06b7d438) */
/* WARNING: Removing unreachable block (ram,0x06b7d494) */
/* WARNING: Removing unreachable block (ram,0x06b7d454) */
/* WARNING: Removing unreachable block (ram,0x06b7d50c) */
/* WARNING: Removing unreachable block (ram,0x06b7d488) */

undefined1  [16]
Merger_MergeBoard_Models_ItemsDiscoveryModel__OverrideItemsDiscoveryState(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar10 = 0x7e2a000;
  if ((bRam0000000007e2a73f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a4c0);
    func_0x03280a18(PTR_DAT_07831900);
    func_0x03280a18(PTR_DAT_078318e8);
    func_0x03280a18(PTR_DAT_07831908);
    func_0x03280a18(PTR_DAT_07831910);
    func_0x03280a18(PTR_DAT_07831918);
    func_0x03280a18(PTR_DAT_07831920);
    func_0x03280a18(PTR_DAT_07831928);
    func_0x03280a18(PTR_DAT_07831930);
    func_0x03280a18(PTR_DAT_078318f0);
    func_0x03280a18(PTR_DAT_07831938);
    func_0x03280a18(PTR_DAT_07831940);
    bRam0000000007e2a73f = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_06b7d560;
  func_0x04fe2f04(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_07831900);
  puVar4 = PTR_DAT_07831920;
  puVar3 = PTR_DAT_07831918;
  puVar2 = PTR_DAT_078318f0;
  puVar14 = PTR_DAT_0777a4c0;
  if (param_2 == 0) goto LAB_06b7d560;
  if (*(long *)(param_2 + 0x18) == 0) goto LAB_06b7d560;
  func_0x04145068(&uStack_b8,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_07831940);
  uStack_78 = uStack_b0;
  uStack_80 = uStack_b8;
  lStack_70 = lStack_a8;
  while (uVar5 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar4), (uVar5 & 1) != 0) {
    if (lStack_70 == 0) goto LAB_06b7d550;
    if (*(long *)(lStack_70 + 0x18) == 0) goto LAB_06b7d554;
    func_0x04145068(&uStack_b8,*(long *)(lStack_70 + 0x18),*(undefined8 *)PTR_DAT_07831938);
    uStack_98 = uStack_b0;
    uStack_a0 = uStack_b8;
    lStack_90 = lStack_a8;
    uVar5 = func_0x051159b4(&uStack_a0,*(undefined8 *)puVar3);
    if ((uVar5 & 1) != 0) {
      if (lStack_90 == 0) {
        auVar16 = func_0x03280cac();
        unaff_x23 = (undefined8 *)0x0;
        while (param_2 = auVar16._0_8_, func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_07831910),
              unaff_x22 != 0) {
          func_0x03280ca4(unaff_x22);
LAB_06b7d550:
          func_0x03280cac();
LAB_06b7d554:
          func_0x03280cac();
          func_0x03280ca4(unaff_x22);
          unaff_x24 = puVar14;
LAB_06b7d560:
          puVar14 = unaff_x24;
          auVar16 = func_0x03280cac();
        }
        unaff_x22 = 0;
        if (auVar16._8_4_ == 1) {
          plVar6 = (long *)func_0x072ce910(param_2);
          lVar11 = *plVar6;
          func_0x072ce920();
          func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_07831908);
          uVar10 = 0;
          if (lVar11 != 0) {
            func_0x03280ca4(lVar11);
            goto LAB_06b7d5c4;
          }
          goto LAB_06b7d504;
        }
LAB_06b7d5c4:
        uVar10 = 0;
        func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_07831908);
        func_0x03365958(param_2);
        func_0x03280ca4(0);
        uVar15 = 0x6b7d5fc;
        lVar11 = func_0x02f09514();
        goto SUB_06b7d5fc;
      }
      uVar5 = func_0x03280ca0(*(undefined8 *)puVar2);
      goto SUB_057da5fc;
    }
    unaff_x22 = 0;
    func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_07831910);
  }
  func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_07831908);
LAB_06b7d504:
  uVar15 = 0x6b7d50c;
  lVar11 = param_1;
SUB_06b7d5fc:
  puVar2 = PTR_DAT_0774ecc0;
  puVar13 = (undefined8 *)PTR_DAT_0774ecb8;
  uStack_100 = uVar15;
  puStack_f0 = puVar14;
  puStack_e8 = unaff_x23;
  lStack_e0 = unaff_x22;
  uStack_d8 = uVar10;
  lStack_d0 = param_2;
  lStack_c8 = param_1;
  if ((bRam0000000007e2a740 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831948);
    func_0x03280a18(PTR_DAT_07831950);
    func_0x03280a18(PTR_DAT_07831958);
    func_0x03280a18(PTR_DAT_07831960);
    func_0x03280a18(PTR_DAT_07831968);
    func_0x03280a18(PTR_DAT_07831970);
    func_0x03280a18(PTR_DAT_0774ecc8);
    func_0x03280a18(PTR_DAT_0774ecc0);
    func_0x03280a18(PTR_DAT_0774ecb8);
    func_0x03280a18(PTR_DAT_077f3870);
    bRam0000000007e2a740 = 1;
  }
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  lVar7 = func_0x03280ca0(*puVar13);
  func_0x04143c38(lVar7,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_07831958;
  puVar12 = (undefined8 *)PTR_DAT_07831950;
  puVar2 = PTR_DAT_077f3870;
  puVar14 = PTR_DAT_0774ecc8;
  if (*(long *)(lVar11 + 0x28) != 0) {
    func_0x04fe31ac(&uStack_158,*(long *)(lVar11 + 0x28),*(undefined8 *)PTR_DAT_07831948);
    uStack_128 = uStack_150;
    uStack_130 = uStack_158;
    lStack_118 = lStack_140;
    uStack_120 = uStack_148;
    uStack_110 = uStack_138;
LAB_06b7d720:
    uVar5 = func_0x0515fbd0(&uStack_130,*(undefined8 *)puVar3);
    unaff_x23 = (undefined8 *)puVar2;
    if ((uVar5 & 1) == 0) {
      func_0x0515fcf0(&uStack_130,*puVar12);
      goto LAB_06b7d7b0;
    }
    if (lStack_118 != 0) goto code_r0x06b7d738;
    func_0x03280cac();
    goto LAB_06b7d7e4;
  }
LAB_06b7d7f4:
  do {
    auVar17 = func_0x03280cac();
    puVar12 = auVar17._0_8_;
    if (auVar17._8_4_ != 1) {
LAB_06b7d83c:
      func_0x0515fcf0(&uStack_130,*puVar13);
      func_0x03365958(puVar12);
      func_0x03280ca4(0);
      uVar5 = func_0x02f09514();
      puVar4 = PTR_DAT_07831980;
      puVar3 = PTR_DAT_07831978;
      puVar2 = PTR_DAT_077e9350;
      puVar14 = PTR_DAT_077e9348;
      if ((bRam0000000007e2a741 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07831980);
        func_0x03280a18(PTR_DAT_07831978);
        func_0x03280a18(PTR_DAT_077e9350);
        func_0x03280a18(PTR_DAT_077e9348);
        bRam0000000007e2a741 = 1;
      }
      uVar10 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x04fe1fa4(uVar10,*(undefined8 *)puVar4);
      *(undefined8 *)(uVar5 + 0x28) = uVar10;
      func_0x032809c4((undefined8 *)(uVar5 + 0x28),uVar10);
      uVar10 = func_0x03280ca0(*(undefined8 *)puVar14);
      func_0x0442b5e0(uVar10,*(undefined8 *)puVar2);
      *(undefined8 *)(uVar5 + 0x30) = uVar10;
      func_0x032809c4((undefined8 *)(uVar5 + 0x30),uVar10);
SUB_057da5fc:
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar5;
      return auVar16;
    }
    plVar6 = (long *)func_0x072ce910(puVar12);
    lVar8 = *plVar6;
    func_0x072ce920();
    func_0x0515fcf0(&uStack_130,*puVar13);
    if (lVar8 != 0) {
      func_0x03280ca4(lVar8);
      goto LAB_06b7d83c;
    }
LAB_06b7d7b0:
    puVar13 = puVar12;
    if (*(long *)(lVar11 + 0x30) != 0) {
      auVar16 = func_0x0442b8f0(*(long *)(lVar11 + 0x30),lVar7,*unaff_x23);
      return auVar16;
    }
  } while( true );
code_r0x06b7d738:
  if (*(int *)(lStack_118 + 0x10) == 2) {
    if (lVar7 == 0) {
LAB_06b7d7e4:
      func_0x03280cac();
    }
    else {
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar9 = *(long *)puVar14;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uStack_120;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(lVar7,uStack_120,
                          *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_06b7d720;
      }
    }
    func_0x03280cac();
    puVar13 = puVar12;
    goto LAB_06b7d7f4;
  }
  goto LAB_06b7d720;
}

