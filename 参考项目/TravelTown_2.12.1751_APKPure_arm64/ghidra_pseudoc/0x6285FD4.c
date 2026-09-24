/* Ghidra 12.1.2 native pseudocode; RVA 0x6285FD4; MergeEngine.ECS.Systems.InventorySystem.NewProducerSlotsSeen; status ok */

/* WARNING: Possible PIC construction at 0x06386978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06386514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06386200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06386518) */
/* WARNING: Removing unreachable block (ram,0x0638651c) */
/* WARNING: Removing unreachable block (ram,0x06386544) */
/* WARNING: Removing unreachable block (ram,0x0638658c) */
/* WARNING: Removing unreachable block (ram,0x063865a4) */
/* WARNING: Removing unreachable block (ram,0x063865ac) */
/* WARNING: Removing unreachable block (ram,0x063865d4) */
/* WARNING: Removing unreachable block (ram,0x063865b8) */
/* WARNING: Removing unreachable block (ram,0x063865c4) */
/* WARNING: Removing unreachable block (ram,0x063865e0) */
/* WARNING: Removing unreachable block (ram,0x0638697c) */
/* WARNING: Removing unreachable block (ram,0x0638698c) */
/* WARNING: Removing unreachable block (ram,0x06386994) */
/* WARNING: Removing unreachable block (ram,0x063869bc) */
/* WARNING: Removing unreachable block (ram,0x063869a0) */
/* WARNING: Removing unreachable block (ram,0x063869ac) */
/* WARNING: Removing unreachable block (ram,0x063869c8) */
/* WARNING: Removing unreachable block (ram,0x063869dc) */
/* WARNING: Removing unreachable block (ram,0x063869e4) */
/* WARNING: Removing unreachable block (ram,0x06386a00) */
/* WARNING: Removing unreachable block (ram,0x06386a0c) */
/* WARNING: Removing unreachable block (ram,0x06386a20) */
/* WARNING: Removing unreachable block (ram,0x06386a28) */
/* WARNING: Removing unreachable block (ram,0x06386a50) */
/* WARNING: Removing unreachable block (ram,0x06386a34) */
/* WARNING: Removing unreachable block (ram,0x06386a40) */
/* WARNING: Removing unreachable block (ram,0x06386a5c) */
/* WARNING: Removing unreachable block (ram,0x06386a70) */
/* WARNING: Removing unreachable block (ram,0x06386a74) */
/* WARNING: Removing unreachable block (ram,0x06386a90) */
/* WARNING: Removing unreachable block (ram,0x06386a98) */
/* WARNING: Removing unreachable block (ram,0x06386ac0) */
/* WARNING: Removing unreachable block (ram,0x06386aa4) */
/* WARNING: Removing unreachable block (ram,0x06386ab0) */
/* WARNING: Removing unreachable block (ram,0x06386ad0) */
/* WARNING: Removing unreachable block (ram,0x06386ae4) */
/* WARNING: Removing unreachable block (ram,0x06386b2c) */
/* WARNING: Removing unreachable block (ram,0x06386204) */

undefined8 MergeEngine_ECS_Systems_InventorySystem__NewProducerSlotsSeen(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long extraout_x1;
  long lVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar22 [12];
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar20 = 0x7e25000;
  if ((bRam0000000007e254e0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07750ca0);
    func_0x03280a18(PTR_DAT_07750ca8);
    func_0x03280a18(PTR_DAT_07750cb0);
    func_0x03280a18(PTR_DAT_077e7250);
    func_0x03280a18(PTR_DAT_07750cc0);
    func_0x03280a18(PTR_DAT_077e7258);
    func_0x03280a18(PTR_DAT_07751a50);
    func_0x03280a18(PTR_DAT_077e7260);
    func_0x03280a18(PTR_DAT_077728f8);
    func_0x03280a18(PTR_DAT_077e7268);
    func_0x03280a18(PTR_DAT_077e7270);
    func_0x03280a18(PTR_DAT_077e7278);
    func_0x03280a18(PTR_DAT_077cf358);
    bRam0000000007e254e0 = 1;
  }
  puVar3 = PTR_DAT_077e7258;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lVar17 = *(long *)(param_1 + 0x48);
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x38) != 0)) {
    iVar9 = *(int *)(*(long *)(lVar17 + 0x38) + 0x18);
    if (iVar9 < 1) {
      if (*(long *)(lVar17 + 0x38) != 0) {
        func_0x0442b880(*(long *)(lVar17 + 0x38),*(undefined8 *)PTR_DAT_077e7268);
        if (*(long *)(param_1 + 0xf8) != 0) {
          uVar16 = func_0x0432164c(*(long *)(param_1 + 0xf8),0,*(undefined8 *)PTR_DAT_077728f8);
          return uVar16;
        }
      }
    }
    else {
      lVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7260);
      func_0x04143ca8(lVar20,iVar9,*(undefined8 *)puVar3);
      puVar8 = PTR_DAT_077e7278;
      puVar7 = PTR_DAT_077e7270;
      puVar6 = PTR_DAT_077e7250;
      puVar5 = PTR_DAT_077cf358;
      puVar4 = PTR_DAT_07750ca8;
      puVar3 = PTR_DAT_07750ca0;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar17 = *(long *)(*(long *)(param_1 + 0x48) + 0x38), lVar17 != 0)) {
        func_0x04145068(&uStack_98,lVar17,*(undefined8 *)PTR_DAT_07750cc0);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        while( true ) {
          uVar10 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar4);
          uVar16 = uStack_70;
          unaff_x23 = (undefined8 *)puVar3;
          unaff_x28 = (undefined8 *)puVar6;
          if ((uVar10 & 1) == 0) {
            func_0x051159b0(&uStack_80,*(undefined8 *)puVar3);
            goto LAB_063861f4;
          }
          uVar11 = func_0x03280ca0(*(undefined8 *)puVar8);
          func_0x0472783c(uVar11,uVar16,*(undefined8 *)puVar5,*(undefined8 *)puVar7);
          if (lVar20 == 0) break;
          lVar17 = *(long *)(lVar20 + 0x10);
          lVar18 = *(long *)puVar6;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_06386264;
          uVar2 = *(uint *)(lVar20 + 0x18);
          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar20 + 0x18) = uVar2 + 1;
            puVar12 = (undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
            *puVar12 = uVar11;
            func_0x032809c4(puVar12,uVar11);
          }
          else {
            func_0x0414446c(lVar20,uVar11,
                            *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        func_0x03280cac();
LAB_06386264:
        func_0x03280cac();
      }
    }
  }
  do {
    auVar22 = func_0x03280cac();
    if (auVar22._8_4_ != 1) {
LAB_063862a8:
      func_0x051159b0(&uStack_80,*unaff_x23);
      func_0x03365958(auVar22._0_8_);
      func_0x03280ca4(0);
      func_0x02f09514();
      lVar20 = extraout_x1;
      break;
    }
    plVar13 = (long *)func_0x072ce910(auVar22._0_8_);
    lVar17 = *plVar13;
    func_0x072ce920();
    func_0x051159b0(&uStack_80,*unaff_x23);
    if (lVar17 != 0) {
      func_0x03280ca4(lVar17);
      goto LAB_063862a8;
    }
LAB_063861f4:
  } while (*(long *)(param_1 + 0x108) == 0);
  if ((bRam0000000007e254ff & 1) == 0) {
    func_0x03280a18(PTR_DAT_077ce588);
    func_0x03280a18(PTR_DAT_077e7280);
    func_0x03280a18(PTR_DAT_077e7288);
    func_0x03280a18(PTR_DAT_077e7290);
    func_0x03280a18(PTR_DAT_077797d8);
    func_0x03280a18(PTR_DAT_077e7298);
    func_0x03280a18(PTR_DAT_077e72a0);
    func_0x03280a18(PTR_DAT_077e72a8);
    func_0x03280a18(PTR_DAT_077e72b0);
    func_0x03280a18(PTR_DAT_077e72b8);
    func_0x03280a18(PTR_DAT_077e72c0);
    func_0x03280a18(PTR_DAT_077e72c8);
    func_0x03280a18(PTR_DAT_077e72d0);
    func_0x03280a18(PTR_DAT_077e72d8);
    func_0x03280a18(PTR_DAT_0777aa68);
    func_0x03280a18(PTR_DAT_077e72e0);
    bRam0000000007e254ff = 1;
  }
  puVar8 = PTR_DAT_077e72b8;
  puVar7 = PTR_DAT_077e72b0;
  puVar6 = PTR_DAT_077e72a8;
  puVar5 = PTR_DAT_077e72a0;
  puVar12 = (undefined8 *)PTR_DAT_077e7298;
  puVar4 = PTR_DAT_077e7288;
  puVar3 = PTR_DAT_077e7280;
  uStack_120 = 0;
  uStack_118 = 0;
  lStack_110 = 0;
  if (lVar20 == 0) {
LAB_0638661c:
    auVar22 = func_0x03280cac();
    if (auVar22._8_4_ == 1) {
      plVar13 = (long *)func_0x072ce910(auVar22._0_8_);
      lVar20 = *plVar13;
      func_0x072ce920();
      func_0x051159b0(&uStack_120,*unaff_x29);
      puVar12 = unaff_x28;
      if (lVar20 == 0) goto LAB_06386504;
      func_0x03280ca4(lVar20);
    }
    func_0x051159b0(&uStack_120,*unaff_x29);
    func_0x03365958(auVar22._0_8_);
    func_0x03280ca4(0);
    lVar20 = func_0x02f09514();
    if ((bRam0000000007e254e1 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077db160);
      func_0x03280a18(PTR_DAT_07780058);
      func_0x03280a18(PTR_DAT_077e70a0);
      func_0x03280a18(PTR_DAT_077e70a8);
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_0777a750);
      func_0x03280a18(PTR_DAT_07773068);
      func_0x03280a18(PTR_DAT_077e72e8);
      func_0x03280a18(PTR_DAT_077e72f0);
      bRam0000000007e254e1 = 1;
    }
    uVar10 = func_0x06380b60(lVar20);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    plVar13 = (long *)func_0x06380cd0(lVar20);
    if (plVar13 == (long *)0x0) {
      return 0;
    }
    lVar17 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar10 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077e70a0) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0638679c;
        }
        uVar10 = uVar10 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077e70a0,0);
LAB_0638679c:
    uVar16 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    if ((int)uVar16 == 0) {
      return uVar16;
    }
    lVar17 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar10 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077e70a8) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_06386800;
        }
        uVar10 = uVar10 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077e70a8,0);
LAB_06386800:
    lVar17 = (*(code *)*puVar12)(plVar13,0,puVar12[1]);
    if ((lVar17 != 0) && (plVar21 = *(long **)(lVar20 + 0x68), plVar21 != (long *)0x0)) {
      lVar18 = *plVar21;
      iVar9 = *(int *)(lVar17 + 0x18);
      uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar10 != 0) {
        piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777a750) {
            puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 7) * 0x10 + 0x138);
            goto LAB_06386878;
          }
          uVar10 = uVar10 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_0777a750,7);
LAB_06386878:
      lVar17 = (*(code *)*puVar12)(plVar21,puVar12[1]);
      if (lVar17 != 0) {
        plVar21 = *(long **)(lVar20 + 0x78);
        if (iVar9 <= *(int *)(lVar17 + 0x10)) {
          iVar9 = *(int *)(lVar17 + 0x10);
        }
        if ((plVar21 != (long *)0x0) &&
           (lVar20 = (**(code **)(*plVar21 + 0x238))(plVar21,*(undefined8 *)(*plVar21 + 0x240)),
           puVar3 = PTR_DAT_077e72f0, lVar20 != 0)) {
          if (iVar9 == *(int *)(lVar20 + 0x20)) {
            return 0;
          }
          lVar20 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077e70a0) {
                puVar12 = (undefined8 *)(lVar20 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_06386954;
              }
              uVar10 = uVar10 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077e70a0,0);
LAB_06386954:
          iVar9 = (*(code *)*puVar12)(plVar13,puVar12[1]);
          if (iVar9 < 1) {
            return 0;
          }
          uVar16 = func_0x03280ca0(*(undefined8 *)puVar3);
          return uVar16;
        }
      }
    }
    uVar16 = func_0x03280cac();
    return uVar16;
  }
  uVar1 = *(undefined4 *)(lVar20 + 0x18);
  lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e72c8);
  func_0x04143ca8(lVar17,uVar1,*(undefined8 *)puVar8);
  func_0x04145068(&uStack_138,lVar20,*(undefined8 *)puVar7);
  uStack_118 = uStack_130;
  uStack_120 = uStack_138;
  lStack_110 = lStack_128;
  while (uVar10 = func_0x051159b4(&uStack_120,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
    if (lStack_110 == 0) {
LAB_06386614:
      func_0x03280cac();
LAB_06386618:
      func_0x03280cac();
      unaff_x28 = puVar12;
      unaff_x29 = (undefined8 *)puVar3;
      goto LAB_0638661c;
    }
    uVar16 = *(undefined8 *)(lStack_110 + 0x10);
    uVar11 = *(undefined8 *)(lStack_110 + 0x18);
    uVar14 = func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x06380af8(uVar14,uVar16,uVar11);
    if (lVar17 == 0) goto LAB_06386618;
    lVar20 = *(long *)(lVar17 + 0x10);
    lVar18 = *(long *)puVar6;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    if (lVar20 == 0) {
      func_0x03280cac();
      goto LAB_06386614;
    }
    uVar2 = *(uint *)(lVar17 + 0x18);
    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
      *(uint *)(lVar17 + 0x18) = uVar2 + 1;
      puVar15 = (undefined8 *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
      *puVar15 = uVar14;
      func_0x032809c4(puVar15,uVar14);
    }
    else {
      func_0x0414446c(lVar17,uVar14,
                      *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
  }
  func_0x051159b0(&uStack_120,*(undefined8 *)puVar3);
LAB_06386504:
  uVar16 = func_0x03280ca0(*puVar12);
  return uVar16;
}

