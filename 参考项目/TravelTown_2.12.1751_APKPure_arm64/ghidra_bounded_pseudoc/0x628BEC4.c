/* Ghidra 12.1.2 bounded pseudocode; RVA 0x628BEC4; bound 748 bytes; MergeEngine.ECS.Systems.PersistenceSystem.CreateSerializationCache; status ok */


/* WARNING: Removing unreachable block (ram,0x0638c4e4) */

void MergeEngine_ECS_Systems_PersistenceSystem__CreateSerializationCache(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long extraout_x1;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  long *unaff_x22;
  long *plVar19;
  long lVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  
  puVar1 = PTR_DAT_077e7650;
  plVar17 = (long *)0x7e25000;
  if ((bRam0000000007e25518 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07752c80);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077e7658);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077e7660);
    func_0x03280a18(PTR_DAT_077e7650);
    bRam0000000007e25518 = 1;
  }
  lVar7 = func_0x03eb6ac8(param_1,*(undefined8 *)puVar1);
  plVar19 = (long *)PTR_DAT_0774e8c8;
  if (lVar7 != 0) {
    plVar17 = (long *)func_0x04545bc8(lVar7,*(undefined8 *)PTR_DAT_077e7660);
    puVar3 = PTR_DAT_077e7658;
    puVar2 = PTR_DAT_07752c80;
    puVar1 = PTR_DAT_0774e8e0;
    if (plVar17 == (long *)0x0) goto LAB_0638c0f0;
LAB_0638bf88:
    lVar7 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0638bfd4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar1,0);
LAB_0638bfd4:
    uVar15 = (*(code *)*puVar8)(plVar17,puVar8[1]);
    if ((uVar15 & 1) == 0) {
      param_1 = 0;
      goto LAB_0638c06c;
    }
    lVar7 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0638c030;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar3,0);
LAB_0638c030:
    lVar7 = (*(code *)*puVar8)(plVar17,puVar8[1]);
    func_0x0638cd34(param_1,lVar7);
    if (lVar7 != 0) {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_0638c0e8;
      func_0x053c1024(*(long *)(param_1 + 0x78),*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)puVar2)
      ;
      goto LAB_0638bf88;
    }
    func_0x03280cac();
LAB_0638c0e8:
    func_0x03280cac();
    unaff_x22 = plVar19;
  }
  plVar19 = unaff_x22;
  func_0x03280cac();
LAB_0638c0f0:
  func_0x03280cac();
  while( true ) {
    auVar21 = func_0x03280ca4(param_1);
    if (auVar21._8_4_ != 1) break;
    plVar9 = (long *)func_0x072ce910();
    param_1 = *plVar9;
    func_0x072ce920();
LAB_0638c06c:
    if (plVar17 != (long *)0x0) {
      lVar7 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *plVar19) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0638c0bc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar17,*plVar19,0);
LAB_0638c0bc:
      (*(code *)*puVar8)(plVar17,puVar8[1]);
    }
    if (param_1 == 0) {
      return;
    }
  }
  if (plVar17 != (long *)0x0) {
    lVar7 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *plVar19) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0638c18c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar17,*plVar19,0);
LAB_0638c18c:
    (*(code *)*puVar8)(plVar17,puVar8[1]);
  }
  func_0x03365958(auVar21._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  if ((bRam0000000007e2550f & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e7668);
    bRam0000000007e2550f = 1;
  }
  if (extraout_x1 != 0) {
    lVar7 = func_0x03d20d84(extraout_x1,*(undefined8 *)PTR_DAT_077e7668);
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0x28) = 1;
    }
    return;
  }
  auVar22 = func_0x03280cac();
  lVar14 = auVar22._0_8_;
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
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  lStack_100 = 0;
  lVar18 = 0;
  if (auVar22._8_8_ == 0) goto code_r0x0638c5a4;
  func_0x04145068(&uStack_128,auVar22._8_8_,*(undefined8 *)PTR_DAT_07750cc0);
  lStack_e0 = CONCAT44(uStack_114,uStack_118);
  uStack_e8 = uStack_120;
  uStack_f0 = uStack_128;
  lVar13 = lVar7;
code_r0x0638c338:
  do {
    uVar15 = func_0x051159b4(&uStack_f0,*(undefined8 *)puVar1);
    lVar18 = lStack_e0;
    if ((uVar15 & 1) == 0) {
      func_0x051159b0(&uStack_f0,*(undefined8 *)PTR_DAT_07750ca0);
      return;
    }
    lVar7 = func_0x0638c810(lVar14,lStack_e0);
    plVar17 = *(long **)(lVar14 + 0x40);
    if (plVar17 == (long *)0x0) goto code_r0x0638c58c;
    lVar13 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
          goto code_r0x0638c3b4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar3,6);
code_r0x0638c3b4:
    uVar15 = (*(code *)*puVar8)(plVar17,lVar7,puVar8[1]);
    lVar13 = lVar7;
  } while ((uVar15 & 1) == 0);
  plVar17 = *(long **)(lVar14 + 0x40);
  if (plVar17 == (long *)0x0) goto code_r0x0638c594;
  lVar20 = *(long *)puVar2;
  lVar13 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)(lVar20 + 0x20)) {
        lVar13 = lVar13 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar20 + 0x50)) * 0x10 + 0x138;
        goto code_r0x0638c424;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  lVar13 = func_0x03256b10(plVar17);
code_r0x0638c424:
  lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar20);
  lVar13 = (**(code **)(lVar13 + 8))(plVar17,lVar7,1,lVar13);
  if (lVar13 == 0) goto code_r0x0638c598;
  if (*(long *)(lVar13 + 0x10) == 0) goto code_r0x0638c590;
  func_0x04145068(&uStack_128,*(long *)(lVar13 + 0x10),*(undefined8 *)puVar6);
  lStack_100 = CONCAT44(uStack_114,uStack_118);
  uStack_108 = uStack_120;
  uStack_110 = uStack_128;
  while( true ) {
    uVar15 = func_0x051159b4(&uStack_110,*(undefined8 *)puVar5);
    lVar13 = lStack_100;
    if ((uVar15 & 1) == 0) goto code_r0x0638c4b8;
    if (*(long *)(lVar14 + 0x70) == 0) break;
    lVar20 = func_0x04fe2cfc(*(long *)(lVar14 + 0x70),lVar18,*(undefined8 *)puVar4);
    lVar7 = lVar13;
    if (lVar20 == 0) {
      auVar22 = func_0x03280cac();
      goto code_r0x0638c564;
    }
    (**(code **)(lVar20 + 0x18))
              (*(undefined8 *)(lVar20 + 0x40),lVar13,*(undefined8 *)(lVar20 + 0x28));
  }
  auVar22 = func_0x03280cac();
code_r0x0638c564:
  while( true ) {
    uVar10 = auVar22._8_8_;
    func_0x051159b0(&uStack_110,*(undefined8 *)PTR_DAT_077e7678);
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
    auVar22 = func_0x03280cac();
  }
  if (auVar22._8_4_ != 1) goto code_r0x0638c5e0;
  puVar8 = (undefined8 *)func_0x072ce910();
  uVar11 = func_0x03280a2c(PTR_DAT_0774e4d8);
  uVar15 = func_0x032810d8(uVar11,*(undefined8 *)*puVar8);
  if ((uVar15 & 1) == 0) {
code_r0x0638c6e8:
    puVar12 = (undefined8 *)func_0x072ce930(8);
    *puVar12 = *puVar8;
    func_0x072ce940(puVar12,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28,0);
  }
  else {
    puVar8 = (undefined8 *)*puVar8;
    func_0x072ce920();
    uVar10 = func_0x03280a2c(PTR_DAT_077e7698);
    uVar10 = func_0x055ea7a0(uVar10,lVar18,0);
    lVar7 = func_0x03280a2c(PTR_DAT_0774e598);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x06faa078(uVar10,0);
    lVar18 = *(long *)(lVar14 + 0x28);
    uStack_128 = func_0x03280a2c(PTR_DAT_077798f0);
    uStack_120 = 0xffffffffffffffff;
    uStack_118 = 0x1d;
    uVar11 = func_0x057cd6e4(&uStack_128,0);
    func_0x03280a2c(PTR_DAT_0777ac28);
    uVar10 = func_0x03280ca0();
    func_0x069c9034(uVar10,uVar11,puVar8,0);
    if (lVar18 == 0) {
      func_0x03280cac();
      goto code_r0x0638c6e8;
    }
  }
  uVar11 = func_0x03280a2c(PTR_DAT_0777ac30);
  func_0x03ea4d6c(lVar18,uVar10,uVar11);
  plVar17 = *(long **)(lVar14 + 0x58);
  if (plVar17 == (long *)0x0) {
    func_0x03280cac();
  }
  lVar7 = func_0x03280a2c(PTR_DAT_0776efc0);
  lVar14 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 == 0) {
code_r0x0638c76c:
    puVar12 = (undefined8 *)func_0x03256b10(plVar17,lVar7,1);
  }
  else {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    while (*(long *)(piVar16 + -2) != lVar7) {
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
      if (uVar15 == 0) goto code_r0x0638c76c;
    }
    puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
  }
  (*(code *)*puVar12)(plVar17,4,puVar12[1]);
  auVar22 = func_0x03280ca4(puVar8);
code_r0x0638c5e0:
  do {
    uVar10 = auVar22._0_8_;
    if (auVar22._8_4_ == 1) {
      plVar17 = (long *)func_0x072ce910();
      lVar7 = *plVar17;
      func_0x072ce920();
      func_0x051159b0(&uStack_f0,*(undefined8 *)PTR_DAT_07750ca0);
      if (lVar7 == 0) {
        return;
      }
      uVar10 = func_0x03280ca4(lVar7);
    }
    func_0x051159b0(&uStack_f0,*(undefined8 *)PTR_DAT_07750ca0);
    func_0x03365958(uVar10);
    func_0x03280ca4(0);
    auVar22 = func_0x02f09514();
  } while( true );
code_r0x0638c4b8:
  lVar13 = 0;
  func_0x051159b0(&uStack_110,*(undefined8 *)PTR_DAT_077e7678);
  goto code_r0x0638c338;
}

