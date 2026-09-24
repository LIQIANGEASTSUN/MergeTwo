/* Ghidra 12.1.2 bounded pseudocode; RVA 0x628C210; bound 1536 bytes; MergeEngine.ECS.Systems.PersistenceSystem.LoadKeys; status ok */


/* WARNING: Removing unreachable block (ram,0x0638c4e4) */

void MergeEngine_ECS_Systems_PersistenceSystem__LoadKeys(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar15 = 0x7e25000;
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
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  lVar14 = 0;
  if (param_2 == 0) goto LAB_0638c5a4;
  func_0x04145068(&uStack_b8,param_2,*(undefined8 *)PTR_DAT_07750cc0);
  lStack_70 = CONCAT44(uStack_a4,uStack_a8);
  uStack_78 = uStack_b0;
  uStack_80 = uStack_b8;
  lVar12 = lVar15;
LAB_0638c338:
  do {
    uVar7 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar1);
    lVar14 = lStack_70;
    if ((uVar7 & 1) == 0) {
      func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_07750ca0);
      return;
    }
    lVar15 = MergeEngine_ECS_Systems_PersistenceSystem__GetPersistentKey(param_1,lStack_70);
    plVar16 = *(long **)(param_1 + 0x40);
    if (plVar16 == (long *)0x0) goto LAB_0638c58c;
    lVar12 = *plVar16;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 6) * 0x10 + 0x138);
          goto LAB_0638c3b4;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar3,6);
LAB_0638c3b4:
    uVar7 = (*(code *)*puVar8)(plVar16,lVar15,puVar8[1]);
    lVar12 = lVar15;
  } while ((uVar7 & 1) == 0);
  plVar16 = *(long **)(param_1 + 0x40);
  if (plVar16 == (long *)0x0) goto LAB_0638c594;
  lVar17 = *(long *)puVar2;
  lVar12 = *plVar16;
  uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar7 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
        lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 + 0x138;
        goto LAB_0638c424;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar7 != 0);
  }
  lVar12 = func_0x03256b10(plVar16);
LAB_0638c424:
  lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar17);
  lVar12 = (**(code **)(lVar12 + 8))(plVar16,lVar15,1,lVar12);
  if (lVar12 == 0) goto LAB_0638c598;
  if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0638c590;
  func_0x04145068(&uStack_b8,*(long *)(lVar12 + 0x10),*(undefined8 *)puVar6);
  lStack_90 = CONCAT44(uStack_a4,uStack_a8);
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  while( true ) {
    uVar7 = func_0x051159b4(&uStack_a0,*(undefined8 *)puVar5);
    lVar12 = lStack_90;
    if ((uVar7 & 1) == 0) goto LAB_0638c4b8;
    if (*(long *)(param_1 + 0x70) == 0) break;
    lVar17 = func_0x04fe2cfc(*(long *)(param_1 + 0x70),lVar14,*(undefined8 *)puVar4);
    lVar15 = lVar12;
    if (lVar17 == 0) {
      auVar18 = func_0x03280cac();
      goto LAB_0638c564;
    }
    (**(code **)(lVar17 + 0x18))
              (*(undefined8 *)(lVar17 + 0x40),lVar12,*(undefined8 *)(lVar17 + 0x28));
  }
  auVar18 = func_0x03280cac();
LAB_0638c564:
  while( true ) {
    uVar9 = auVar18._8_8_;
    func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_077e7678);
    if (lVar15 == 0) break;
    func_0x03280ca4(lVar15);
    lVar12 = lVar15;
LAB_0638c58c:
    lVar15 = lVar12;
    func_0x03280cac();
LAB_0638c590:
    func_0x03280cac();
LAB_0638c594:
    func_0x03280cac();
LAB_0638c598:
    func_0x03280cac();
    func_0x03280ca4(lVar15);
LAB_0638c5a4:
    auVar18 = func_0x03280cac();
  }
  if (auVar18._8_4_ != 1) goto LAB_0638c5e0;
  puVar8 = (undefined8 *)func_0x072ce910();
  uVar10 = func_0x03280a2c(PTR_DAT_0774e4d8);
  uVar7 = func_0x032810d8(uVar10,*(undefined8 *)*puVar8);
  if ((uVar7 & 1) == 0) {
LAB_0638c6e8:
    puVar11 = (undefined8 *)func_0x072ce930(8);
    *puVar11 = *puVar8;
    func_0x072ce940(puVar11,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28,0);
  }
  else {
    puVar8 = (undefined8 *)*puVar8;
    func_0x072ce920();
    uVar9 = func_0x03280a2c(PTR_DAT_077e7698);
    uVar9 = func_0x055ea7a0(uVar9,lVar14,0);
    lVar15 = func_0x03280a2c(PTR_DAT_0774e598);
    if (*(int *)(lVar15 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x06faa078(uVar9,0);
    lVar14 = *(long *)(param_1 + 0x28);
    uStack_b8 = func_0x03280a2c(PTR_DAT_077798f0);
    uStack_b0 = 0xffffffffffffffff;
    uStack_a8 = 0x1d;
    uVar10 = func_0x057cd6e4(&uStack_b8,0);
    func_0x03280a2c(PTR_DAT_0777ac28);
    uVar9 = func_0x03280ca0();
    func_0x069c9034(uVar9,uVar10,puVar8,0);
    if (lVar14 == 0) {
      func_0x03280cac();
      goto LAB_0638c6e8;
    }
  }
  uVar10 = func_0x03280a2c(PTR_DAT_0777ac30);
  func_0x03ea4d6c(lVar14,uVar9,uVar10);
  plVar16 = *(long **)(param_1 + 0x58);
  if (plVar16 == (long *)0x0) {
    func_0x03280cac();
  }
  lVar15 = func_0x03280a2c(PTR_DAT_0776efc0);
  lVar14 = *plVar16;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 == 0) {
LAB_0638c76c:
    puVar11 = (undefined8 *)func_0x03256b10(plVar16,lVar15,1);
  }
  else {
    piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    while (*(long *)(piVar13 + -2) != lVar15) {
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
      if (uVar7 == 0) goto LAB_0638c76c;
    }
    puVar11 = (undefined8 *)(lVar14 + (long)(*piVar13 + 1) * 0x10 + 0x138);
  }
  (*(code *)*puVar11)(plVar16,4,puVar11[1]);
  auVar18 = func_0x03280ca4(puVar8);
LAB_0638c5e0:
  do {
    uVar9 = auVar18._0_8_;
    if (auVar18._8_4_ == 1) {
      plVar16 = (long *)func_0x072ce910();
      lVar15 = *plVar16;
      func_0x072ce920();
      func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_07750ca0);
      if (lVar15 == 0) {
        return;
      }
      uVar9 = func_0x03280ca4(lVar15);
    }
    func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_07750ca0);
    func_0x03365958(uVar9);
    func_0x03280ca4(0);
    auVar18 = func_0x02f09514();
  } while( true );
LAB_0638c4b8:
  lVar12 = 0;
  func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_077e7678);
  goto LAB_0638c338;
}

