/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7D0D0; Merger.MergeBoard.Models.ItemsDiscoveryModel.MarkItemRewardCollected; status ok */


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

ulong Merger_MergeBoard_Models_ItemsDiscoveryModel__MarkItemRewardCollected
                (long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *unaff_x22;
  undefined8 *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_28;
  
  if ((bRam0000000007e2a73e & 1) == 0) {
    func_0x03280a18(PTR_DAT_078318e0);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_078318f8);
    bRam0000000007e2a73e = 1;
  }
  puVar15 = PTR_DAT_07779820;
  lStack_28 = 0;
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    lVar12 = *(long *)(param_1 + 0x28);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779820) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06b7d17c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06b7d17c:
    uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
    unaff_x22 = puVar15;
    if (lVar12 != 0) {
      uVar9 = func_0x04fe48b0(lVar12,uVar6,&lStack_28,*(undefined8 *)PTR_DAT_078318e0);
      if ((uVar9 & 1) != 0) {
        if (lStack_28 == 0) goto LAB_06b7d250;
        if (*(int *)(lStack_28 + 0x10) == 2) {
          *(undefined4 *)(lStack_28 + 0x10) = 3;
          lVar8 = *param_2;
          lVar12 = *(long *)(param_1 + 0x30);
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar15) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_06b7d218;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar15,0);
LAB_06b7d218:
          uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
          if (lVar12 == 0) goto LAB_06b7d250;
          uVar9 = func_0x0442baec(lVar12,uVar6,*(undefined8 *)PTR_DAT_078318f8);
        }
      }
      return uVar9;
    }
  }
LAB_06b7d250:
  auVar17 = func_0x03280cac();
  lVar12 = auVar17._8_8_;
  lVar8 = auVar17._0_8_;
  uVar6 = 0x7e2a000;
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
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  if (*(long *)(lVar8 + 0x28) == 0) goto LAB_06b7d560;
  func_0x04fe2f04(*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_07831900);
  puVar4 = PTR_DAT_07831920;
  puVar3 = PTR_DAT_07831918;
  puVar2 = PTR_DAT_078318f0;
  puVar15 = PTR_DAT_0777a4c0;
  if (lVar12 == 0) goto LAB_06b7d560;
  if (*(long *)(lVar12 + 0x18) == 0) goto LAB_06b7d560;
  func_0x04145068(&uStack_e8,*(long *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_07831940);
  uStack_a8 = uStack_e0;
  uStack_b0 = uStack_e8;
  lStack_a0 = lStack_d8;
LAB_06b7d39c:
  uVar9 = func_0x051159b4(&uStack_b0,*(undefined8 *)puVar4);
  if ((uVar9 & 1) == 0) {
    func_0x051159b0(&uStack_b0,*(undefined8 *)PTR_DAT_07831908);
LAB_06b7d504:
    uVar16 = 0x6b7d50c;
    lVar13 = lVar8;
  }
  else {
    if (lStack_a0 == 0) goto LAB_06b7d550;
    if (*(long *)(lStack_a0 + 0x18) == 0) goto LAB_06b7d554;
    func_0x04145068(&uStack_e8,*(long *)(lStack_a0 + 0x18),*(undefined8 *)PTR_DAT_07831938);
    uStack_c8 = uStack_e0;
    uStack_d0 = uStack_e8;
    lStack_c0 = lStack_d8;
    uVar9 = func_0x051159b4(&uStack_d0,*(undefined8 *)puVar3);
    if ((uVar9 & 1) == 0) goto LAB_06b7d46c;
    if (lStack_c0 != 0) {
      uVar9 = func_0x03280ca0(*(undefined8 *)puVar2);
      return uVar9;
    }
    auVar17 = func_0x03280cac();
    unaff_x23 = (undefined8 *)0x0;
    while( true ) {
      lVar12 = auVar17._0_8_;
      func_0x051159b0(&uStack_d0,*(undefined8 *)PTR_DAT_07831910);
      if (unaff_x22 == (undefined *)0x0) break;
      func_0x03280ca4(unaff_x22);
LAB_06b7d550:
      func_0x03280cac();
LAB_06b7d554:
      func_0x03280cac();
      func_0x03280ca4(unaff_x22);
      unaff_x24 = puVar15;
LAB_06b7d560:
      puVar15 = unaff_x24;
      auVar17 = func_0x03280cac();
    }
    unaff_x22 = (undefined *)0x0;
    if (auVar17._8_4_ == 1) {
      plVar7 = (long *)func_0x072ce910(lVar12);
      lVar13 = *plVar7;
      func_0x072ce920();
      func_0x051159b0(&uStack_b0,*(undefined8 *)PTR_DAT_07831908);
      uVar6 = 0;
      if (lVar13 != 0) {
        func_0x03280ca4(lVar13);
        goto LAB_06b7d5c4;
      }
      goto LAB_06b7d504;
    }
LAB_06b7d5c4:
    uVar6 = 0;
    func_0x051159b0(&uStack_b0,*(undefined8 *)PTR_DAT_07831908);
    func_0x03365958(lVar12);
    func_0x03280ca4(0);
    uVar16 = 0x6b7d5fc;
    lVar13 = func_0x02f09514();
  }
  puVar2 = PTR_DAT_0774ecc0;
  puVar5 = (undefined8 *)PTR_DAT_0774ecb8;
  uStack_130 = uVar16;
  puStack_120 = puVar15;
  puStack_118 = unaff_x23;
  puStack_110 = unaff_x22;
  uStack_108 = uVar6;
  lStack_100 = lVar12;
  lStack_f8 = lVar8;
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
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  lVar8 = func_0x03280ca0(*puVar5);
  func_0x04143c38(lVar8,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_07831958;
  puVar14 = (undefined8 *)PTR_DAT_07831950;
  puVar2 = PTR_DAT_077f3870;
  puVar15 = PTR_DAT_0774ecc8;
  if (*(long *)(lVar13 + 0x28) != 0) {
    func_0x04fe31ac(&uStack_188,*(long *)(lVar13 + 0x28),*(undefined8 *)PTR_DAT_07831948);
    uStack_158 = uStack_180;
    uStack_160 = uStack_188;
    lStack_148 = lStack_170;
    uStack_150 = uStack_178;
    uStack_140 = uStack_168;
LAB_06b7d720:
    uVar9 = func_0x0515fbd0(&uStack_160,*(undefined8 *)puVar3);
    unaff_x23 = (undefined8 *)puVar2;
    if ((uVar9 & 1) == 0) {
      func_0x0515fcf0(&uStack_160,*puVar14);
      goto LAB_06b7d7b0;
    }
    if (lStack_148 != 0) goto code_r0x06b7d738;
    func_0x03280cac();
    goto LAB_06b7d7e4;
  }
LAB_06b7d7f4:
  do {
    auVar18 = func_0x03280cac();
    puVar14 = auVar18._0_8_;
    if (auVar18._8_4_ != 1) {
LAB_06b7d83c:
      func_0x0515fcf0(&uStack_160,*puVar5);
      func_0x03365958(puVar14);
      func_0x03280ca4(0);
      uVar9 = func_0x02f09514();
      puVar4 = PTR_DAT_07831980;
      puVar3 = PTR_DAT_07831978;
      puVar2 = PTR_DAT_077e9350;
      puVar15 = PTR_DAT_077e9348;
      if ((bRam0000000007e2a741 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07831980);
        func_0x03280a18(PTR_DAT_07831978);
        func_0x03280a18(PTR_DAT_077e9350);
        func_0x03280a18(PTR_DAT_077e9348);
        bRam0000000007e2a741 = 1;
      }
      uVar6 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x04fe1fa4(uVar6,*(undefined8 *)puVar4);
      *(undefined8 *)(uVar9 + 0x28) = uVar6;
      func_0x032809c4((undefined8 *)(uVar9 + 0x28),uVar6);
      uVar6 = func_0x03280ca0(*(undefined8 *)puVar15);
      func_0x0442b5e0(uVar6,*(undefined8 *)puVar2);
      *(undefined8 *)(uVar9 + 0x30) = uVar6;
      func_0x032809c4((undefined8 *)(uVar9 + 0x30),uVar6);
      return uVar9;
    }
    plVar7 = (long *)func_0x072ce910(puVar14);
    lVar12 = *plVar7;
    func_0x072ce920();
    func_0x0515fcf0(&uStack_160,*puVar5);
    if (lVar12 != 0) {
      func_0x03280ca4(lVar12);
      goto LAB_06b7d83c;
    }
LAB_06b7d7b0:
    puVar5 = puVar14;
    if (*(long *)(lVar13 + 0x30) != 0) {
      uVar9 = func_0x0442b8f0(*(long *)(lVar13 + 0x30),lVar8,*unaff_x23);
      return uVar9;
    }
  } while( true );
LAB_06b7d46c:
  unaff_x22 = (undefined *)0x0;
  func_0x051159b0(&uStack_d0,*(undefined8 *)PTR_DAT_07831910);
  goto LAB_06b7d39c;
code_r0x06b7d738:
  if (*(int *)(lStack_148 + 0x10) == 2) {
    if (lVar8 == 0) {
LAB_06b7d7e4:
      func_0x03280cac();
    }
    else {
      lVar12 = *(long *)(lVar8 + 0x10);
      lVar10 = *(long *)puVar15;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uStack_150;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(lVar8,uStack_150,
                          *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_06b7d720;
      }
    }
    func_0x03280cac();
    puVar5 = puVar14;
    goto LAB_06b7d7f4;
  }
  goto LAB_06b7d720;
}

