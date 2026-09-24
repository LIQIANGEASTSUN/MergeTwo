/* Ghidra 12.1.2 bounded pseudocode; RVA 0x628C1B0; bound 96 bytes; MergeEngine.ECS.Systems.PersistenceSystem.EntityCreated; status ok */


/* WARNING: Removing unreachable block (ram,0x0638c4e4) */

void MergeEngine_ECS_Systems_PersistenceSystem__EntityCreated(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  if ((bRam0000000007e2550f & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e7668);
    bRam0000000007e2550f = 1;
  }
  if (param_2 != 0) {
    lVar7 = func_0x03d20d84(param_2,*(undefined8 *)PTR_DAT_077e7668);
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0x28) = 1;
    }
    return;
  }
  auVar19 = func_0x03280cac();
  lVar14 = auVar19._0_8_;
  lVar7 = 0x7e25000;
  if ((bRam0000000007e25511 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e7670);
    func_0x03280a18(PTR_DAT_077e7678);
    func_0x03280a18(PTR_DAT_07750ca0);
    func_0x03280a18(PTR_DAT_07750ca8);
    func_0x03280a18(PTR_DAT_077e7680);
    func_0x03280a18(PTR_DAT_077e7688);
    func_0x03280a18(PTR_DAT_07750cb0);
    func_0x03280a18(PTR_DAT_0777ac98);
    func_0x03280a18(PTR_DAT_0777aca0);
    func_0x03280a18(PTR_DAT_077e7690);
    func_0x03280a18(PTR_DAT_07750cc0);
    bRam0000000007e25511 = 1;
  }
  puVar6 = PTR_DAT_077e7690;
  puVar5 = PTR_DAT_077e7680;
  puVar4 = PTR_DAT_077e7670;
  puVar3 = PTR_DAT_0777aca0;
  puVar2 = PTR_DAT_0777ac98;
  puVar1 = PTR_DAT_07750ca8;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  lVar16 = 0;
  if (auVar19._8_8_ == 0) goto code_r0x0638c5a4;
  func_0x04145068(&uStack_d8,auVar19._8_8_,*(undefined8 *)PTR_DAT_07750cc0);
  lStack_90 = CONCAT44(uStack_c4,uStack_c8);
  uStack_98 = uStack_d0;
  uStack_a0 = uStack_d8;
  lVar13 = lVar7;
code_r0x0638c338:
  do {
    uVar8 = func_0x051159b4(&uStack_a0,*(undefined8 *)puVar1);
    lVar16 = lStack_90;
    if ((uVar8 & 1) == 0) {
      func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_07750ca0);
      return;
    }
    lVar7 = func_0x0638c810(lVar14,lStack_90);
    plVar17 = *(long **)(lVar14 + 0x40);
    if (plVar17 == (long *)0x0) goto code_r0x0638c58c;
    lVar13 = *plVar17;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
          goto code_r0x0638c3b4;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar3,6);
code_r0x0638c3b4:
    uVar8 = (*(code *)*puVar9)(plVar17,lVar7,puVar9[1]);
    lVar13 = lVar7;
  } while ((uVar8 & 1) == 0);
  plVar17 = *(long **)(lVar14 + 0x40);
  if (plVar17 == (long *)0x0) goto code_r0x0638c594;
  lVar18 = *(long *)puVar2;
  lVar13 = *plVar17;
  uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar8 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)(lVar18 + 0x20)) {
        lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 + 0x138;
        goto code_r0x0638c424;
      }
      uVar8 = uVar8 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar8 != 0);
  }
  lVar13 = func_0x03256b10(plVar17);
code_r0x0638c424:
  lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar18);
  lVar13 = (**(code **)(lVar13 + 8))(plVar17,lVar7,1,lVar13);
  if (lVar13 == 0) goto code_r0x0638c598;
  if (*(long *)(lVar13 + 0x10) == 0) goto code_r0x0638c590;
  func_0x04145068(&uStack_d8,*(long *)(lVar13 + 0x10),*(undefined8 *)puVar6);
  lStack_b0 = CONCAT44(uStack_c4,uStack_c8);
  uStack_b8 = uStack_d0;
  uStack_c0 = uStack_d8;
  while( true ) {
    uVar8 = func_0x051159b4(&uStack_c0,*(undefined8 *)puVar5);
    lVar13 = lStack_b0;
    if ((uVar8 & 1) == 0) goto code_r0x0638c4b8;
    if (*(long *)(lVar14 + 0x70) == 0) break;
    lVar18 = func_0x04fe2cfc(*(long *)(lVar14 + 0x70),lVar16,*(undefined8 *)puVar4);
    lVar7 = lVar13;
    if (lVar18 == 0) {
      auVar19 = func_0x03280cac();
      goto code_r0x0638c564;
    }
    (**(code **)(lVar18 + 0x18))
              (*(undefined8 *)(lVar18 + 0x40),lVar13,*(undefined8 *)(lVar18 + 0x28));
  }
  auVar19 = func_0x03280cac();
code_r0x0638c564:
  while( true ) {
    uVar10 = auVar19._8_8_;
    func_0x051159b0(&uStack_c0,*(undefined8 *)PTR_DAT_077e7678);
    if (lVar7 == 0) break;
    func_0x03280ca4(lVar7);
    lVar13 = lVar7;
code_r0x0638c58c:
    lVar7 = lVar13;
    func_0x03280cac();
code_r0x0638c590:
    func_0x03280cac();
code_r0x0638c594:
    func_0x03280cac();
code_r0x0638c598:
    func_0x03280cac();
    func_0x03280ca4(lVar7);
code_r0x0638c5a4:
    auVar19 = func_0x03280cac();
  }
  if (auVar19._8_4_ != 1) goto code_r0x0638c5e0;
  puVar9 = (undefined8 *)func_0x072ce910();
  uVar11 = func_0x03280a2c(PTR_DAT_0774e4d8);
  uVar8 = func_0x032810d8(uVar11,*(undefined8 *)*puVar9);
  if ((uVar8 & 1) == 0) {
code_r0x0638c6e8:
    puVar12 = (undefined8 *)func_0x072ce930(8);
    *puVar12 = *puVar9;
    func_0x072ce940(puVar12,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28,0);
  }
  else {
    puVar9 = (undefined8 *)*puVar9;
    func_0x072ce920();
    uVar10 = func_0x03280a2c(PTR_DAT_077e7698);
    uVar10 = func_0x055ea7a0(uVar10,lVar16,0);
    lVar7 = func_0x03280a2c(PTR_DAT_0774e598);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x06faa078(uVar10,0);
    lVar16 = *(long *)(lVar14 + 0x28);
    uStack_d8 = func_0x03280a2c(PTR_DAT_077798f0);
    uStack_d0 = 0xffffffffffffffff;
    uStack_c8 = 0x1d;
    uVar11 = func_0x057cd6e4(&uStack_d8,0);
    func_0x03280a2c(PTR_DAT_0777ac28);
    uVar10 = func_0x03280ca0();
    func_0x069c9034(uVar10,uVar11,puVar9,0);
    if (lVar16 == 0) {
      func_0x03280cac();
      goto code_r0x0638c6e8;
    }
  }
  uVar11 = func_0x03280a2c(PTR_DAT_0777ac30);
  func_0x03ea4d6c(lVar16,uVar10,uVar11);
  plVar17 = *(long **)(lVar14 + 0x58);
  if (plVar17 == (long *)0x0) {
    func_0x03280cac();
  }
  lVar7 = func_0x03280a2c(PTR_DAT_0776efc0);
  lVar14 = *plVar17;
  uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar8 == 0) {
code_r0x0638c76c:
    puVar12 = (undefined8 *)func_0x03256b10(plVar17,lVar7,1);
  }
  else {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    while (*(long *)(piVar15 + -2) != lVar7) {
      uVar8 = uVar8 - 1;
      piVar15 = piVar15 + 4;
      if (uVar8 == 0) goto code_r0x0638c76c;
    }
    puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
  }
  (*(code *)*puVar12)(plVar17,4,puVar12[1]);
  auVar19 = func_0x03280ca4(puVar9);
code_r0x0638c5e0:
  do {
    uVar10 = auVar19._0_8_;
    if (auVar19._8_4_ == 1) {
      plVar17 = (long *)func_0x072ce910();
      lVar7 = *plVar17;
      func_0x072ce920();
      func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_07750ca0);
      if (lVar7 == 0) {
        return;
      }
      uVar10 = func_0x03280ca4(lVar7);
    }
    func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_07750ca0);
    func_0x03365958(uVar10);
    func_0x03280ca4(0);
    auVar19 = func_0x02f09514();
  } while( true );
code_r0x0638c4b8:
  lVar13 = 0;
  func_0x051159b0(&uStack_c0,*(undefined8 *)PTR_DAT_077e7678);
  goto code_r0x0638c338;
}

