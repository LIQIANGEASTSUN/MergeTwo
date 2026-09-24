/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7CD78; Merger.MergeBoard.Models.ItemsDiscoveryModel.TryAddCreatedItem; status ok */


/* WARNING: Possible PIC construction at 0x06b7cf28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7d410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b7cf2c) */
/* WARNING: Removing unreachable block (ram,0x06b7cf30) */
/* WARNING: Removing unreachable block (ram,0x06b7cf50) */
/* WARNING: Removing unreachable block (ram,0x06b7cf58) */
/* WARNING: Removing unreachable block (ram,0x06b7cf80) */
/* WARNING: Removing unreachable block (ram,0x06b7cf64) */
/* WARNING: Removing unreachable block (ram,0x06b7cf70) */
/* WARNING: Removing unreachable block (ram,0x06b7cf90) */
/* WARNING: Removing unreachable block (ram,0x06b7cfa0) */
/* WARNING: Removing unreachable block (ram,0x06b7cfbc) */
/* WARNING: Removing unreachable block (ram,0x06b7cfc4) */
/* WARNING: Removing unreachable block (ram,0x06b7cfec) */
/* WARNING: Removing unreachable block (ram,0x06b7cfd0) */
/* WARNING: Removing unreachable block (ram,0x06b7cfdc) */
/* WARNING: Removing unreachable block (ram,0x06b7cffc) */
/* WARNING: Removing unreachable block (ram,0x06b7d01c) */
/* WARNING: Removing unreachable block (ram,0x06b7d04c) */
/* WARNING: Removing unreachable block (ram,0x06b7d054) */
/* WARNING: Removing unreachable block (ram,0x06b7d07c) */
/* WARNING: Removing unreachable block (ram,0x06b7d060) */
/* WARNING: Removing unreachable block (ram,0x06b7d06c) */
/* WARNING: Removing unreachable block (ram,0x06b7d088) */
/* WARNING: Removing unreachable block (ram,0x06b7d098) */
/* WARNING: Removing unreachable block (ram,0x06b7d414) */
/* WARNING: Removing unreachable block (ram,0x06b7d420) */
/* WARNING: Removing unreachable block (ram,0x06b7d424) */
/* WARNING: Removing unreachable block (ram,0x06b7d4a4) */
/* WARNING: Removing unreachable block (ram,0x06b7d434) */
/* WARNING: Removing unreachable block (ram,0x06b7d48c) */
/* WARNING: Removing unreachable block (ram,0x06b7d438) */
/* WARNING: Removing unreachable block (ram,0x06b7d494) */
/* WARNING: Removing unreachable block (ram,0x06b7d454) */
/* WARNING: Removing unreachable block (ram,0x06b7d488) */

ulong Merger_MergeBoard_Models_ItemsDiscoveryModel__TryAddCreatedItem(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *unaff_x22;
  undefined8 *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  code *pcStack_180;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_78;
  long lStack_48;
  
  if ((bRam0000000007e2a73d & 1) == 0) {
    func_0x03280a18(PTR_DAT_078318e0);
    func_0x03280a18(PTR_DAT_078318e8);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_078318f0);
    func_0x03280a18(PTR_DAT_077e7480);
    bRam0000000007e2a73d = 1;
  }
  puVar15 = PTR_DAT_07779820;
  lStack_48 = 0;
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    lVar13 = *(long *)(param_1 + 0x28);
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07779820) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b7ce5c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06b7ce5c:
    uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (lVar13 != 0) {
      uVar10 = func_0x04fe48b0(lVar13,uVar6,&lStack_48,*(undefined8 *)PTR_DAT_078318e0);
      puVar2 = PTR_DAT_078318f0;
      if ((uVar10 & 1) == 0) {
LAB_06b7ceac:
        lVar8 = *param_2;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar15) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06b7cf04;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar15,0);
LAB_06b7cf04:
        (*(code *)*puVar5)(param_2,puVar5[1]);
        uVar10 = func_0x03280ca0(*(undefined8 *)puVar2);
        return uVar10;
      }
      if (lStack_48 != 0) {
        if ((*(uint *)(lStack_48 + 0x10) & 0xfffffffe) == 2) {
          return 0;
        }
        goto LAB_06b7ceac;
      }
    }
  }
  auVar16 = func_0x03280cac();
  plVar7 = auVar16._8_8_;
  if ((bRam0000000007e2a73e & 1) == 0) {
    func_0x03280a18(PTR_DAT_078318e0);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_078318f8);
    bRam0000000007e2a73e = 1;
  }
  puVar15 = PTR_DAT_07779820;
  lStack_78 = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    lVar13 = *(long *)(auVar16._0_8_ + 0x28);
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07779820) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b7d17c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07779820,0);
LAB_06b7d17c:
    uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    unaff_x22 = puVar15;
    if (lVar13 != 0) {
      uVar10 = func_0x04fe48b0(lVar13,uVar6,&lStack_78,*(undefined8 *)PTR_DAT_078318e0);
      if ((uVar10 & 1) != 0) {
        if (lStack_78 == 0) goto LAB_06b7d250;
        if (*(int *)(lStack_78 + 0x10) == 2) {
          *(undefined4 *)(lStack_78 + 0x10) = 3;
          lVar8 = *plVar7;
          lVar13 = *(long *)(auVar16._0_8_ + 0x30);
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar15) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_06b7d218;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar15,0);
LAB_06b7d218:
          uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          if (lVar13 == 0) goto LAB_06b7d250;
          uVar10 = func_0x0442baec(lVar13,uVar6,*(undefined8 *)PTR_DAT_078318f8);
        }
      }
      return uVar10;
    }
  }
LAB_06b7d250:
  auVar16 = func_0x03280cac();
  lVar8 = auVar16._0_8_;
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
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  lStack_110 = 0;
  if (*(long *)(lVar8 + 0x28) == 0) goto LAB_06b7d560;
  func_0x04fe2f04(*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_07831900);
  puVar4 = PTR_DAT_07831920;
  puVar3 = PTR_DAT_07831918;
  puVar2 = PTR_DAT_078318f0;
  puVar15 = PTR_DAT_0777a4c0;
  if (auVar16._8_8_ == 0) goto LAB_06b7d560;
  lVar13 = *(long *)(auVar16._8_8_ + 0x18);
  if (lVar13 == 0) goto LAB_06b7d560;
  func_0x04145068(&uStack_138,lVar13,*(undefined8 *)PTR_DAT_07831940);
  uStack_f8 = uStack_130;
  uStack_100 = uStack_138;
  lStack_f0 = lStack_128;
LAB_06b7d39c:
  uVar10 = func_0x051159b4(&uStack_100,*(undefined8 *)puVar4);
  if ((uVar10 & 1) == 0) {
    func_0x051159b0(&uStack_100,*(undefined8 *)PTR_DAT_07831908);
LAB_06b7d504:
    uVar10 = Merger_MergeBoard_Models_ItemsDiscoveryModel__RebuildRewardPendingIds(lVar8);
    return uVar10;
  }
  if (lStack_f0 == 0) goto LAB_06b7d550;
  if (*(long *)(lStack_f0 + 0x18) == 0) goto LAB_06b7d554;
  func_0x04145068(&uStack_138,*(long *)(lStack_f0 + 0x18),*(undefined8 *)PTR_DAT_07831938);
  uStack_118 = uStack_130;
  uStack_120 = uStack_138;
  lStack_110 = lStack_128;
  uVar10 = func_0x051159b4(&uStack_120,*(undefined8 *)puVar3);
  if ((uVar10 & 1) == 0) {
    unaff_x22 = (undefined *)0x0;
    func_0x051159b0(&uStack_120,*(undefined8 *)PTR_DAT_07831910);
    goto LAB_06b7d39c;
  }
  if (lStack_110 != 0) {
    uVar10 = func_0x03280ca0(*(undefined8 *)puVar2);
    return uVar10;
  }
  auVar16 = func_0x03280cac();
  unaff_x23 = (undefined8 *)0x0;
  while( true ) {
    uVar6 = auVar16._0_8_;
    func_0x051159b0(&uStack_120,*(undefined8 *)PTR_DAT_07831910);
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
    auVar16 = func_0x03280cac();
  }
  if (auVar16._8_4_ == 1) {
    plVar7 = (long *)func_0x072ce910(uVar6);
    lVar13 = *plVar7;
    func_0x072ce920();
    func_0x051159b0(&uStack_100,*(undefined8 *)PTR_DAT_07831908);
    if (lVar13 == 0) goto LAB_06b7d504;
    func_0x03280ca4(lVar13);
  }
  func_0x051159b0(&uStack_100,*(undefined8 *)PTR_DAT_07831908);
  func_0x03365958(uVar6);
  func_0x03280ca4(0);
  lVar13 = func_0x02f09514();
  puVar2 = PTR_DAT_0774ecc0;
  puVar5 = (undefined8 *)PTR_DAT_0774ecb8;
  pcStack_180 = Merger_MergeBoard_Models_ItemsDiscoveryModel__RebuildRewardPendingIds;
  uStack_158 = 0;
  puStack_170 = puVar15;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  uStack_150 = uVar6;
  lStack_148 = lVar8;
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
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  lVar8 = func_0x03280ca0(*puVar5);
  func_0x04143c38(lVar8,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_07831958;
  puVar14 = (undefined8 *)PTR_DAT_07831950;
  puVar2 = PTR_DAT_077f3870;
  puVar15 = PTR_DAT_0774ecc8;
  if (*(long *)(lVar13 + 0x28) != 0) {
    func_0x04fe31ac(&uStack_1d8,*(long *)(lVar13 + 0x28),*(undefined8 *)PTR_DAT_07831948);
    uStack_1a8 = uStack_1d0;
    uStack_1b0 = uStack_1d8;
    lStack_198 = lStack_1c0;
    uStack_1a0 = uStack_1c8;
    uStack_190 = uStack_1b8;
LAB_06b7d720:
    uVar10 = func_0x0515fbd0(&uStack_1b0,*(undefined8 *)puVar3);
    unaff_x23 = (undefined8 *)puVar2;
    if ((uVar10 & 1) == 0) {
      func_0x0515fcf0(&uStack_1b0,*puVar14);
      goto LAB_06b7d7b0;
    }
    if (lStack_198 != 0) goto code_r0x06b7d738;
    func_0x03280cac();
LAB_06b7d7e4:
    func_0x03280cac();
    goto LAB_06b7d7ec;
  }
LAB_06b7d7f4:
  do {
    auVar17 = func_0x03280cac();
    puVar14 = auVar17._0_8_;
    if (auVar17._8_4_ != 1) {
LAB_06b7d83c:
      func_0x0515fcf0(&uStack_1b0,*puVar5);
      func_0x03365958(puVar14);
      func_0x03280ca4(0);
      uVar10 = func_0x02f09514();
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
      *(undefined8 *)(uVar10 + 0x28) = uVar6;
      func_0x032809c4((undefined8 *)(uVar10 + 0x28),uVar6);
      uVar6 = func_0x03280ca0(*(undefined8 *)puVar15);
      func_0x0442b5e0(uVar6,*(undefined8 *)puVar2);
      *(undefined8 *)(uVar10 + 0x30) = uVar6;
      func_0x032809c4((undefined8 *)(uVar10 + 0x30),uVar6);
      return uVar10;
    }
    plVar7 = (long *)func_0x072ce910(puVar14);
    lVar9 = *plVar7;
    func_0x072ce920();
    func_0x0515fcf0(&uStack_1b0,*puVar5);
    if (lVar9 != 0) {
      func_0x03280ca4(lVar9);
      goto LAB_06b7d83c;
    }
LAB_06b7d7b0:
    puVar5 = puVar14;
    if (*(long *)(lVar13 + 0x30) != 0) {
      uVar10 = func_0x0442b8f0(*(long *)(lVar13 + 0x30),lVar8,*unaff_x23);
      return uVar10;
    }
  } while( true );
code_r0x06b7d738:
  if (*(int *)(lStack_198 + 0x10) == 2) {
    if (lVar8 == 0) goto LAB_06b7d7e4;
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar11 = *(long *)puVar15;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) {
LAB_06b7d7ec:
      func_0x03280cac();
      puVar5 = puVar14;
      goto LAB_06b7d7f4;
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uStack_1a0;
      func_0x032809c4();
    }
    else {
      func_0x0414446c(lVar8,uStack_1a0,
                      *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_06b7d720;
}

