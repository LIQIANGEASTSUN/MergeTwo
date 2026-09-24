/* Ghidra 12.1.2 native pseudocode; RVA 0x3D7BD80; MergeEngine.Configuration.Definitions.Reward.Aggregate<__Il2CppFullySharedGenericType>; status ok */


undefined8 *
MergeEngine_Configuration_Definitions_Reward__Aggregate___Il2CppFullySharedGenericType_
          (undefined8 param_1,long param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long extraout_x1;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined1 auVar22 [12];
  long alStack_f0 [6];
  long alStack_c0 [4];
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  alStack_c0[0] = tpidr_el0;
  lStack_68 = *(long *)(alStack_c0[0] + 0x28);
  plVar13 = (long *)(param_3 + 0x38);
  plVar14 = (long *)*plVar13;
  if (plVar14 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar14 = (long *)*plVar13;
    if (plVar14 == (long *)0x0) {
      func_0x03256878(param_3);
      plVar14 = *(long **)(param_3 + 0x38);
    }
  }
  lVar8 = plVar14[8];
  uVar10 = *(uint *)(plVar14[3] + 0xfc);
  uVar18 = (ulong)uVar10;
  uVar16 = (ulong)*(uint *)(lVar8 + 0xfc);
  if ((*(byte *)(plVar14[3] + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
    plVar14 = (long *)*plVar13;
    uVar10 = *(uint *)(lVar8 + 0xfc);
    lVar8 = plVar14[8];
  }
  lVar12 = (long)alStack_c0 - ((ulong)(uVar10 + 0x10) + 0xf & 0x1fffffff0);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar4 = lVar8;
  alStack_c0[1] = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar8 = func_0x0325681c(lVar8);
    plVar14 = (long *)*plVar13;
    uVar1 = *(ushort *)(plVar14[8] + 0x135);
    lVar4 = plVar14[8];
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar8 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar8 = lVar4;
  lStack_88 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar4 = func_0x0325681c(lVar4);
    plVar14 = (long *)*plVar13;
    uVar1 = *(ushort *)(plVar14[8] + 0x135);
    lVar8 = plVar14[8];
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar4 = lVar8;
  lStack_a0 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar8 = func_0x0325681c(lVar8);
    plVar14 = (long *)*plVar13;
    uVar1 = *(ushort *)(plVar14[8] + 0x135);
    lVar4 = plVar14[8];
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar8 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  alStack_c0[2] = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar4 = func_0x0325681c(lVar4);
    plVar14 = (long *)*plVar13;
  }
  alStack_c0[3] = lVar12 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar17 = uVar16 + 0xf & 0x1fffffff0;
  puVar21 = (undefined8 *)(alStack_c0[3] - uVar17);
  lStack_98 = (long)puVar21 - uVar17;
  uVar11 = uVar18 + 0xf & 0x1fffffff0;
  puVar19 = (undefined8 *)(lStack_98 - uVar11);
  lVar8 = (long)puVar19 - uVar11;
  func_0x072ce9a0(lVar8,0,uVar18);
  lVar4 = lVar8 - uVar17;
  func_0x072ce9a0(lVar4,0,uVar16);
  if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puStack_90 = (undefined8 *)func_0x03280ca0();
  (*(code *)**(undefined8 **)(*plVar13 + 8))();
  if (param_2 != 0) {
    puVar7 = *(undefined8 **)(*plVar13 + 0x10);
    puStack_80 = puVar19;
    (*(code *)puVar7[2])(*puVar7,puVar7,param_2,&puStack_80,puVar19);
    func_0x072ce970(lVar8,puVar19,uVar18);
    while( true ) {
      uVar18 = (*(code *)**(undefined8 **)(*plVar13 + 0x88))(lVar8);
      if ((uVar18 & 1) == 0) {
        uVar16 = 0;
        goto LAB_03e7c394;
      }
      if ((*(byte *)(*(long *)(*plVar13 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar12 = func_0x03280ca0();
      (*(code *)**(undefined8 **)(*plVar13 + 0x28))();
      puVar19 = *(undefined8 **)(*plVar13 + 0x30);
      puStack_80 = puVar21;
      (*(code *)puVar19[2])(*puVar19,puVar19,lVar8,&puStack_80,puVar21);
      if (lVar12 == 0) break;
      func_0x03280a3c(lVar12,*(undefined8 *)(*(long *)(*plVar13 + 0x20) + 0x80),puVar21,uVar16);
      lVar9 = *plVar13;
      lVar20 = *(long *)(lVar9 + 0x40);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
        lVar9 = *plVar13;
      }
      uVar15 = *(undefined8 *)(lVar9 + 0x48);
      uVar5 = func_0x03280a38(lVar12,*(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x80));
      func_0x0328158c(lVar20,uVar15,lStack_88,uVar5,0,&puStack_80);
      if (puStack_80 == (undefined8 *)0x0) goto LAB_03e7c404;
      if (*(int *)(puStack_80 + 2) == 0) {
        if ((*(byte *)(*(long *)(*plVar13 + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar5 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*plVar13 + 0x60))(uVar5,lVar12,*(undefined8 *)(*plVar13 + 0x50))
        ;
        puVar19 = *(undefined8 **)(*plVar13 + 0x68);
        puStack_80 = puStack_90;
        uStack_78 = uVar5;
        puStack_70 = puVar21;
        (*(code *)puVar19[2])(*puVar19,puVar19,0,&puStack_80,puVar21);
        func_0x072ce970(lVar4,puVar21,uVar16);
        lVar20 = lStack_98;
        func_0x072ce970(lStack_98,lVar4,uVar16);
        uVar18 = func_0x03280c64(*(undefined8 *)(*plVar13 + 0x40),lVar20);
        lVar9 = *plVar13;
        lVar20 = *(long *)(lVar9 + 0x40);
        if ((uVar18 & 1) == 0) {
          if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = func_0x0325681c(lVar20);
            lVar9 = *plVar13;
          }
          uVar15 = *(undefined8 *)(lVar9 + 0x78);
          uVar5 = func_0x03280a38(lVar12,*(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x80));
          func_0x0328158c(lVar20,uVar15,alStack_c0[3],uVar5,0,&puStack_80);
          puVar19 = puStack_80;
          lVar12 = *(long *)(*plVar13 + 0x40);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c(lVar12);
          }
          puVar19 = (undefined8 *)func_0x03280ba0(puVar19,lVar12,puVar21);
          if (puStack_90 == (undefined8 *)0x0) goto LAB_03e7c410;
          if (-1 < *(int *)(*(long *)(*plVar13 + 0x40) + 0x28)) {
            puVar19 = (undefined8 *)*puVar19;
          }
          puVar7 = *(undefined8 **)(*plVar13 + 0x80);
          puStack_80 = puVar19;
          (*(code *)puVar7[2])(*puVar7,puVar7,puStack_90,&puStack_80);
        }
        else {
          if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = func_0x0325681c(lVar20);
            lVar9 = *plVar13;
          }
          func_0x0328158c(lVar20,*(undefined8 *)(lVar9 + 0x48),lStack_a0,lVar4,0,&puStack_80);
          puVar19 = puStack_80;
          if (puStack_80 == (undefined8 *)0x0) goto LAB_03e7c40c;
          iVar2 = func_0x0611efd4(puStack_80,0);
          lVar9 = *plVar13;
          lVar20 = *(long *)(lVar9 + 0x40);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = func_0x0325681c(lVar20);
            lVar9 = *plVar13;
          }
          uVar15 = *(undefined8 *)(lVar9 + 0x48);
          uVar5 = func_0x03280a38(lVar12,*(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x80));
          func_0x0328158c(lVar20,uVar15,alStack_c0[2],uVar5,0,&puStack_80);
          if (puStack_80 == (undefined8 *)0x0) goto LAB_03e7c408;
          iVar3 = func_0x0611efd4(puStack_80,0);
          func_0x0611f10c(puVar19,iVar3 + iVar2,0);
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x0556c434(*(undefined8 *)PTR_DAT_0777b2c8,*(undefined8 *)PTR_DAT_077503b8,0,
                        *(undefined8 *)PTR_DAT_0777b2d8,*(undefined8 *)PTR_DAT_0777b2d0,0,0);
      }
    }
    func_0x03280cac();
LAB_03e7c404:
    func_0x03280cac();
LAB_03e7c408:
    func_0x03280cac();
LAB_03e7c40c:
    func_0x03280cac();
LAB_03e7c410:
    func_0x03280cac();
  }
  func_0x03280cac();
  do {
    func_0x03280ca4(uVar16);
    while( true ) {
      auVar22 = func_0x072ce990();
      uVar5 = auVar22._0_8_;
      if (auVar22._8_4_ != 1) {
        lVar20 = *plVar13;
        lVar12 = *(long *)(lVar20 + 0x18);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c();
          lVar20 = *plVar13;
        }
        lVar9 = alStack_c0[1];
        func_0x0328158c(lVar12,*(undefined8 *)(lVar20 + 0x90),alStack_c0[1],lVar8,0,0);
        func_0x03365958(uVar5);
        func_0x03280ca4(0);
        func_0x02f09514();
        *(undefined8 *)(lVar4 + -0x30) = 0x3e7c4dc;
        *(undefined8 *)(lVar4 + -0x20) = 0;
        *(undefined8 *)(lVar4 + -0x18) = uVar5;
        *(long *)(lVar4 + -0x10) = lVar8;
        *(long **)(lVar4 + -8) = plVar13;
        if (*(long *)(lVar9 + 0x38) == 0) {
          func_0x03256878(lVar9);
        }
        if ((extraout_x1 == 0) || (*(int *)(extraout_x1 + 0x18) < 2)) {
          puVar19 = (undefined8 *)0x0;
        }
        else {
          lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = func_0x0325681c();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = func_0x0325681c();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar8 == 0) {
            lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = func_0x0325681c();
            }
            if (*(int *)(lVar8 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar4 = *(long *)(lVar9 + 0x38);
            lVar8 = *(long *)(lVar4 + 0x20);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = func_0x0325681c();
              lVar4 = *(long *)(lVar9 + 0x38);
            }
            lVar4 = *(long *)(lVar4 + 0x18);
            uVar5 = **(undefined8 **)(lVar8 + 0xb8);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = func_0x0325681c(lVar4);
            }
            lVar8 = func_0x03280ca0(lVar4);
            func_0x053569b8(lVar8,uVar5,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x28),
                            *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x30));
            lVar4 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = func_0x0325681c();
            }
            *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar8;
            lVar4 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = func_0x0325681c();
            }
            func_0x032809c4(*(long *)(lVar4 + 0xb8) + 8,lVar8);
          }
          uVar5 = func_0x03d45b80(extraout_x1,lVar8,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x38))
          ;
          iVar2 = func_0x03d3a518(uVar5,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x50));
          puVar19 = (undefined8 *)(ulong)(iVar2 != *(int *)(extraout_x1 + 0x18));
        }
        return puVar19;
      }
      puVar6 = (ulong *)func_0x072ce910(uVar5);
      uVar16 = *puVar6;
      func_0x072ce920();
LAB_03e7c394:
      lVar20 = *plVar13;
      lVar12 = *(long *)(lVar20 + 0x18);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
        lVar20 = *plVar13;
      }
      func_0x0328158c(lVar12,*(undefined8 *)(lVar20 + 0x90),alStack_c0[1],lVar8,0,0);
      if (uVar16 != 0) break;
      if (*(long *)(alStack_c0[0] + 0x28) == lStack_68) {
        return puStack_90;
      }
    }
  } while( true );
}

