/* Ghidra 12.1.2 native pseudocode; RVA 0x67A1518; MergeEngine.ECS.Systems.Items.ImmidateToolsSystem.ImmediateToolCollectSystem.SendSingleToolCollectNotification; status ok */


long MergeEngine_ECS_Systems_Items_ImmidateToolsSystem_ImmediateToolCollectSystem__SendSingleToolCollectNotification
               (long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long in_x6;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  ushort auStack_b4 [2];
  undefined8 uStack_b0;
  
  if ((bRam0000000007e28ddc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_0777e4a8);
    func_0x03280a18(PTR_DAT_077cc918);
    func_0x03280a18(PTR_DAT_077cc910);
    func_0x03280a18(PTR_DAT_07810ab0);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e28ddc = 1;
  }
  if (((param_2 == 0) ||
      (lVar11 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777bf98), lVar11 == 0)) ||
     (plVar24 = *(long **)(param_1 + 0xa0), plVar24 == (long *)0x0)) {
LAB_068a1784:
    lVar11 = func_0x03280cac();
    if ((bRam0000000007e28ddd & 1) == 0) {
      func_0x03280a18(PTR_DAT_07810ab8);
      bRam0000000007e28ddd = 1;
    }
    puVar8 = PTR_DAT_07780140;
    puVar7 = PTR_DAT_07780138;
    puVar6 = PTR_DAT_07780130;
    puVar5 = PTR_DAT_07780128;
    puVar4 = PTR_DAT_07780120;
    puVar3 = PTR_DAT_0777ebc8;
    puVar2 = PTR_DAT_0777ebb0;
    if ((bRam0000000007e1ae7e & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780128);
      func_0x03280a18(PTR_DAT_0777ebb0);
      func_0x03280a18(PTR_DAT_07780138);
      func_0x03280a18(PTR_DAT_07780130);
      func_0x03280a18(PTR_DAT_0777ebc8);
      func_0x03280a18(PTR_DAT_07780120);
      func_0x03280a18(PTR_DAT_07780140);
      bRam0000000007e1ae7e = 1;
    }
    uVar25 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x04fb4e7c(uVar25,*(undefined8 *)puVar5);
    *(undefined8 *)(lVar11 + 0x78) = uVar25;
    func_0x032809c4((undefined8 *)(lVar11 + 0x78),uVar25);
    uVar25 = func_0x03280ca0(*(undefined8 *)puVar6);
    func_0x04f610a8(uVar25,*(undefined8 *)puVar7);
    *(undefined8 *)(lVar11 + 0x80) = uVar25;
    func_0x032809c4((undefined8 *)(lVar11 + 0x80),uVar25);
    uVar25 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x04f2ad28(uVar25,*(undefined8 *)puVar2);
    *(undefined8 *)(lVar11 + 0x88) = uVar25;
    func_0x032809c4((undefined8 *)(lVar11 + 0x88),uVar25);
    uVar25 = func_0x03280ca0(*(undefined8 *)puVar8);
    func_0x06898a68(uVar25,0);
    *(undefined8 *)(lVar11 + 0x90) = uVar25;
    func_0x032809c4((undefined8 *)(lVar11 + 0x90),uVar25);
    return lVar11;
  }
  lVar16 = *plVar24;
  uVar25 = *(undefined8 *)(lVar11 + 0x30);
  uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar19 != 0) {
    piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar12 = (undefined8 *)(lVar16 + (long)(*piVar21 + 9) * 0x10 + 0x138);
        goto LAB_068a1624;
      }
      uVar19 = uVar19 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0777a498,9);
LAB_068a1624:
  uVar25 = (*(code *)*puVar12)(plVar24,uVar25,puVar12[1]);
  puVar3 = PTR_DAT_077cc918;
  puVar2 = PTR_DAT_077cc910;
  plVar24 = *(long **)(param_1 + 0xb0);
  if (plVar24 == (long *)0x0) goto LAB_068a1784;
  lVar11 = *plVar24;
  plVar23 = *(long **)(param_2 + 0x10);
  uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
  uVar26 = *(undefined8 *)PTR_DAT_0776b160;
  if (uVar19 != 0) {
    piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777e4a0) {
        puVar12 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_068a16b4;
      }
      uVar19 = uVar19 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0777e4a0,0);
LAB_068a16b4:
  plVar22 = (long *)puVar12[1];
  uVar19 = 0;
  uVar25 = (*(code *)*puVar12)(plVar24,uVar26,uVar25);
  lVar16 = *(long *)(param_1 + 0xb8);
  lVar11 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04143c38(lVar11,*(undefined8 *)puVar3);
  if (lVar11 == 0) goto LAB_068a1784;
  lVar17 = *(long *)(lVar11 + 0x10);
  lVar20 = *(long *)PTR_DAT_0777e4a8;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar17 == 0) goto LAB_068a1784;
  uVar9 = *(uint *)(lVar11 + 0x18);
  if (uVar9 < *(uint *)(lVar17 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar9 + 1;
    puVar12 = (undefined8 *)(lVar17 + (long)(int)uVar9 * 8 + 0x20);
    *puVar12 = uVar25;
    func_0x032809c4(puVar12,uVar25);
  }
  else {
    func_0x0414446c(lVar11,uVar25,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70)
                   );
  }
  if (lVar16 == 0) goto LAB_068a1784;
  lVar20 = *(long *)PTR_DAT_07810ab0;
  lVar17 = lVar20;
  if ((*(long *)(lVar20 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0777aa80), *(long *)(lVar20 + 0x38) == 0)) {
    func_0x03256878(lVar20);
  }
  plVar24 = *(long **)(lVar16 + 0x40);
  if (plVar24 != (long *)0x0) {
    lVar16 = *plVar24;
    lVar17 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    uVar25 = *(undefined8 *)PTR_DAT_0777aa80;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)(lVar17 + 0x20)) {
          lVar16 = lVar16 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e3fc74;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    lVar16 = func_0x03256b10(plVar24);
LAB_03e3fc74:
    lVar16 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar17);
                    /* WARNING: Could not recover jumptable at 0x03e3fca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar11 = (**(code **)(lVar16 + 8))(plVar24,uVar25,lVar11,0,lVar16);
    return lVar11;
  }
  auVar27 = func_0x03280cac();
  lVar11 = lVar17;
  if ((*(long *)(lVar17 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0777aa88), *(long *)(lVar17 + 0x38) == 0)) {
    func_0x03256878(lVar17);
  }
  plVar24 = *(long **)(auVar27._0_8_ + 0x40);
  if (plVar24 != (long *)0x0) {
    lVar11 = *plVar24;
    lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
    uVar25 = *(undefined8 *)PTR_DAT_0777aa88;
    uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)(lVar16 + 0x20)) {
          lVar11 = lVar11 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e3fd54;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    lVar11 = func_0x03256b10(plVar24);
LAB_03e3fd54:
    lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e3fd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar11 = (**(code **)(lVar11 + 8))(plVar24,uVar25,auVar27._8_8_,0,lVar11);
    return lVar11;
  }
  auVar27 = func_0x03280cac();
  lVar17 = auVar27._8_8_;
  uStack_b0 = 0x3e3fd8c;
  lVar16 = lVar11;
  plVar24 = plVar23;
  uVar13 = uVar19;
  plVar14 = plVar22;
  if (*(long *)(in_x6 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0776aeb0);
    func_0x03280a18(PTR_DAT_0777aa90);
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_0777aaa0);
    func_0x03280a18(PTR_DAT_0777aaa8);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777aab0);
    func_0x03280a18(PTR_DAT_077512a8);
    func_0x03280a18(PTR_DAT_07751420);
    func_0x03280a18(PTR_DAT_0777aab8);
    if (*(long *)(in_x6 + 0x38) == 0) {
      func_0x03256878(in_x6);
    }
  }
  lVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
  func_0x06a30df4(lVar20,0);
  if (lVar20 == 0) goto LAB_03e402a8;
  *(long *)(lVar20 + 0x30) = lVar11;
  func_0x032809c4((long *)(lVar20 + 0x30),lVar11);
  if (lVar17 == 0) goto LAB_03e402a8;
  *(long *)(lVar17 + 0x20) = lVar20;
  func_0x032809c4((long *)(lVar17 + 0x20),lVar20);
  if ((*(byte *)(*(long *)(*(long *)(in_x6 + 0x38) + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar11 = func_0x03280ca0();
  func_0x04143c38(lVar11,*(undefined8 *)(*(long *)(in_x6 + 0x38) + 0x10));
  if (lVar11 == 0) goto LAB_03e402a8;
  lVar20 = *(long *)(lVar11 + 0x10);
  lVar18 = *(long *)(*(long *)(in_x6 + 0x38) + 0x18);
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar20 == 0) goto LAB_03e402a8;
  uVar9 = *(uint *)(lVar11 + 0x18);
  if (uVar9 < *(uint *)(lVar20 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar9 + 1;
    plVar10 = (long *)(lVar20 + (long)(int)uVar9 * 8 + 0x20);
    *plVar10 = lVar17;
    func_0x032809c4(plVar10,lVar17);
    if (plVar23 == (long *)0x0) goto LAB_03e3ffbc;
LAB_03e3ff28:
    lVar20 = *(long *)(lVar11 + 0x10);
    lVar18 = *(long *)(*(long *)(in_x6 + 0x38) + 0x18);
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar20 == 0) goto LAB_03e402a8;
    uVar9 = *(uint *)(lVar11 + 0x18);
    if (uVar9 < *(uint *)(lVar20 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar9 + 1;
      plVar10 = (long *)(lVar20 + (long)(int)uVar9 * 8 + 0x20);
      *plVar10 = (long)plVar23;
      func_0x032809c4(plVar10,plVar23);
    }
    else {
      lVar16 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(lVar11,plVar23);
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_0777aab0 + 0x130);
    if ((*(byte *)(*plVar23 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0777aab0))
    goto LAB_03e3ffbc;
    uVar15 = 0;
    if (plVar23[0x1b] != 0) {
      uVar15 = *(ulong *)(plVar23[0x1b] + 0x10);
    }
  }
  else {
    lVar16 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
    func_0x0414446c(lVar11,lVar17);
    if (plVar23 != (long *)0x0) goto LAB_03e3ff28;
LAB_03e3ffbc:
    uVar15 = 0;
  }
  plVar23 = *(long **)(auVar27._0_8_ + 0x48);
  if (uVar15 != 0) {
    uVar19 = uVar15;
  }
  if (plVar23 != (long *)0x0) {
    lVar20 = *plVar23;
    uVar15 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar15 != 0) {
      piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777aaa8) {
          puVar12 = (undefined8 *)(lVar20 + (long)(*piVar21 + 9) * 0x10 + 0x138);
          goto LAB_03e40028;
        }
        uVar15 = uVar15 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar15 != 0);
    }
    lVar16 = 9;
    puVar12 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03e40028:
    lVar20 = (*(code *)*puVar12)(plVar23,puVar12[1]);
    if (lVar20 != 0) {
      lVar16 = *(long *)(*(long *)(in_x6 + 0x38) + 0x28);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c();
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar16 = *(long *)(*(long *)(in_x6 + 0x38) + 0x28);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c();
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
      if (lVar16 == 0) {
        lVar16 = *(long *)(*(long *)(in_x6 + 0x38) + 0x28);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c();
        }
        if (*(int *)(lVar16 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar16 = *(long *)(*(long *)(in_x6 + 0x38) + 0x28);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c();
        }
        uVar25 = **(undefined8 **)(lVar16 + 0xb8);
        lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aaa0);
        plVar24 = (long *)0x0;
        func_0x053569b8(lVar16,uVar25,*(undefined8 *)(*(long *)(in_x6 + 0x38) + 0x30));
        lVar18 = *(long *)(*(long *)(in_x6 + 0x38) + 0x28);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c();
        }
        *(long *)(*(long *)(lVar18 + 0xb8) + 8) = lVar16;
        lVar18 = *(long *)(*(long *)(in_x6 + 0x38) + 0x28);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c();
        }
        func_0x032809c4(*(long *)(lVar18 + 0xb8) + 8,lVar16);
      }
      uVar25 = func_0x03d50a94(lVar20,lVar16,*(undefined8 *)PTR_DAT_0777aa90);
      uVar9 = func_0x03d37bc0(uVar25,uVar19,*(undefined8 *)PTR_DAT_0776aeb0);
      auStack_b4[0] = 0;
      lVar16 = *(long *)PTR_DAT_07751420;
      func_0x04377614(auStack_b4,uVar9 & 1);
      if ((plVar22 != (long *)0x0) && (0xff < auStack_b4[0])) {
        lVar20 = *plVar22;
        uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_07779820) {
              puVar12 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e401dc;
            }
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
        lVar16 = 0;
        puVar12 = (undefined8 *)func_0x03256b10(plVar22);
LAB_03e401dc:
        uVar25 = (*(code *)*puVar12)(plVar22,puVar12[1]);
        *(undefined8 *)(lVar17 + 0x28) = uVar25;
        func_0x032809c4((undefined8 *)(lVar17 + 0x28),uVar25);
      }
    }
  }
  plVar23 = *(long **)(auVar27._0_8_ + 0x40);
  if (plVar23 != (long *)0x0) {
    lVar16 = *plVar23;
    lVar17 = *(long *)(*(long *)(in_x6 + 0x38) + 0x38);
    uVar25 = *(undefined8 *)PTR_DAT_0777aab8;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)(lVar17 + 0x20)) {
          lVar16 = lVar16 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40264;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    lVar16 = func_0x03256b10(plVar23);
LAB_03e40264:
    lVar16 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar17);
    lVar11 = (**(code **)(lVar16 + 8))(plVar23,uVar25,lVar11,0,lVar16);
    return lVar11;
  }
LAB_03e402a8:
  auVar27 = func_0x03280cac();
  lVar11 = lVar16;
  if ((*(long *)(lVar16 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0777aac0), *(long *)(lVar16 + 0x38) == 0)) {
    func_0x03256878(lVar16);
  }
  plVar23 = *(long **)(auVar27._0_8_ + 0x40);
  if (plVar23 == (long *)0x0) {
    auVar27 = func_0x03280cac();
    lVar16 = lVar11;
    if ((*(long *)(lVar11 + 0x38) == 0) &&
       (func_0x03280a18(PTR_DAT_0777aac8), *(long *)(lVar11 + 0x38) == 0)) {
      func_0x03256878(lVar11);
    }
    plVar23 = *(long **)(auVar27._0_8_ + 0x40);
    if (plVar23 == (long *)0x0) {
      auVar27 = func_0x03280cac();
      lVar11 = lVar16;
      if ((*(long *)(lVar16 + 0x38) == 0) &&
         (func_0x03280a18(PTR_DAT_0777aad0), *(long *)(lVar16 + 0x38) == 0)) {
        func_0x03256878(lVar16);
      }
      plVar23 = *(long **)(auVar27._0_8_ + 0x40);
      if (plVar23 == (long *)0x0) {
        auVar27 = func_0x03280cac();
        lVar16 = lVar11;
        if ((*(long *)(lVar11 + 0x38) == 0) &&
           (func_0x03280a18(PTR_DAT_0777aad8), *(long *)(lVar11 + 0x38) == 0)) {
          func_0x03256878(lVar11);
        }
        plVar23 = *(long **)(auVar27._0_8_ + 0x40);
        if (plVar23 == (long *)0x0) {
          auVar27 = func_0x03280cac();
          lVar11 = lVar16;
          if ((*(long *)(lVar16 + 0x38) == 0) &&
             (func_0x03280a18(PTR_DAT_0777aae0), *(long *)(lVar16 + 0x38) == 0)) {
            func_0x03256878(lVar16);
          }
          plVar23 = *(long **)(auVar27._0_8_ + 0x40);
          if (plVar23 == (long *)0x0) {
            auVar27 = func_0x03280cac();
            lVar16 = lVar11;
            if ((*(long *)(lVar11 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0777aae8), *(long *)(lVar11 + 0x38) == 0)) {
              func_0x03256878(lVar11);
            }
            plVar23 = *(long **)(auVar27._0_8_ + 0x40);
            if (plVar23 == (long *)0x0) {
              auVar27 = func_0x03280cac();
              lVar11 = lVar16;
              if ((*(long *)(lVar16 + 0x38) == 0) &&
                 (func_0x03280a18(PTR_DAT_0777aaf0), *(long *)(lVar16 + 0x38) == 0)) {
                func_0x03256878(lVar16);
              }
              plVar23 = *(long **)(auVar27._0_8_ + 0x40);
              if (plVar23 == (long *)0x0) {
                auVar27 = func_0x03280cac();
                puVar3 = PTR_DAT_0777ab00;
                puVar2 = PTR_DAT_0777aaf8;
                if ((bRam0000000007e17dbe & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0777aaf8);
                  func_0x03280a18(PTR_DAT_0777ab00);
                  func_0x03280a18(PTR_DAT_0777ab08);
                  func_0x03280a18(PTR_DAT_0777ab10);
                  bRam0000000007e17dbe = 1;
                }
                plVar23 = *(long **)(auVar27._0_8_ + 0x40);
                uVar25 = func_0x03d2c6a8(auVar27._8_8_,*(undefined8 *)puVar2);
                uVar25 = func_0x03d5ffd0(uVar25,*(undefined8 *)puVar3);
                if (plVar23 == (long *)0x0) {
                  auVar27 = func_0x03280cac();
                  lVar16 = lVar11;
                  if ((*(long *)(lVar11 + 0x38) == 0) &&
                     (func_0x03280a18(PTR_DAT_0777ab18), *(long *)(lVar11 + 0x38) == 0)) {
                    func_0x03256878(lVar11);
                  }
                  plVar23 = *(long **)(auVar27._0_8_ + 0x40);
                  if (plVar23 == (long *)0x0) {
                    auVar27 = func_0x03280cac();
                    lVar11 = lVar16;
                    if ((*(long *)(lVar16 + 0x38) == 0) &&
                       (func_0x03280a18(PTR_DAT_0777ab20), *(long *)(lVar16 + 0x38) == 0)) {
                      func_0x03256878(lVar16);
                    }
                    plVar23 = *(long **)(auVar27._0_8_ + 0x40);
                    if (plVar23 == (long *)0x0) {
                      auVar27 = func_0x03280cac();
                      lVar16 = lVar11;
                      plVar23 = plVar24;
                      if (plVar24[7] == 0) {
                        func_0x03280a18(PTR_DAT_077507d0);
                        func_0x03280a18(PTR_DAT_0775a958);
                        func_0x03280a18(PTR_DAT_07750838);
                        func_0x03280a18(PTR_DAT_0777ab28);
                        func_0x03280a18(PTR_DAT_07779e90);
                        if (plVar24[7] == 0) {
                          func_0x03256878(plVar24);
                        }
                      }
                      plVar22 = *(long **)(auVar27._0_8_ + 0x40);
                      lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                      func_0x04fe1fa4(lVar17,*(undefined8 *)PTR_DAT_0775a958);
                      if (lVar17 != 0) {
                        plVar23 = *(long **)PTR_DAT_077507d0;
                        func_0x04fe2d7c(lVar17,*(undefined8 *)PTR_DAT_07779e90);
                        lVar16 = lVar11;
                        if (plVar22 != (long *)0x0) {
                          lVar11 = *plVar22;
                          lVar16 = *(long *)(plVar24[7] + 8);
                          uVar25 = *(undefined8 *)PTR_DAT_0777ab28;
                          uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
                          if (uVar19 != 0) {
                            piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar21 + -2) == *(long *)(lVar16 + 0x20)) {
                                lVar11 = lVar11 + (long)(int)(*piVar21 +
                                                             (uint)*(ushort *)(lVar16 + 0x50)) *
                                                  0x10 + 0x138;
                                goto LAB_03e40cdc;
                              }
                              uVar19 = uVar19 - 1;
                              piVar21 = piVar21 + 4;
                            } while (uVar19 != 0);
                          }
                          lVar11 = func_0x03256b10(plVar22);
LAB_03e40cdc:
                          lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          lVar11 = (**(code **)(lVar11 + 8))
                                             (plVar22,uVar25,auVar27._8_8_,lVar17,lVar11);
                          return lVar11;
                        }
                      }
                      auVar27 = func_0x03280cac();
                      lVar11 = lVar16;
                      if ((*(long *)(lVar16 + 0x38) == 0) &&
                         (func_0x03280a18(PTR_DAT_0777ab30), *(long *)(lVar16 + 0x38) == 0)) {
                        func_0x03256878(lVar16);
                      }
                      plVar24 = *(long **)(auVar27._0_8_ + 0x40);
                      if (plVar24 == (long *)0x0) {
                        auVar27 = func_0x03280cac();
                        lVar16 = lVar11;
                        plVar24 = plVar23;
                        if (plVar23[7] == 0) {
                          func_0x03280a18(PTR_DAT_077507d0);
                          func_0x03280a18(PTR_DAT_0775a958);
                          func_0x03280a18(PTR_DAT_07750838);
                          func_0x03280a18(PTR_DAT_07779e90);
                          func_0x03280a18(PTR_DAT_0777ab38);
                          if (plVar23[7] == 0) {
                            func_0x03256878(plVar23);
                          }
                        }
                        plVar22 = *(long **)(auVar27._0_8_ + 0x40);
                        lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                        func_0x04fe1fa4(lVar17,*(undefined8 *)PTR_DAT_0775a958);
                        if (lVar17 != 0) {
                          plVar24 = *(long **)PTR_DAT_077507d0;
                          func_0x04fe2d7c(lVar17,*(undefined8 *)PTR_DAT_07779e90,lVar11,plVar24);
                          lVar16 = lVar11;
                          if (plVar22 != (long *)0x0) {
                            lVar11 = *plVar22;
                            lVar16 = *(long *)(plVar23[7] + 8);
                            uVar25 = *(undefined8 *)PTR_DAT_0777ab38;
                            uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
                            if (uVar19 != 0) {
                              piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar21 + -2) == *(long *)(lVar16 + 0x20)) {
                                  lVar11 = lVar11 + (long)(int)(*piVar21 +
                                                               (uint)*(ushort *)(lVar16 + 0x50)) *
                                                    0x10 + 0x138;
                                  goto LAB_03e40f1c;
                                }
                                uVar19 = uVar19 - 1;
                                piVar21 = piVar21 + 4;
                              } while (uVar19 != 0);
                            }
                            lVar11 = func_0x03256b10(plVar22);
LAB_03e40f1c:
                            lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            lVar11 = (**(code **)(lVar11 + 8))
                                               (plVar22,uVar25,auVar27._8_8_,lVar17,lVar11);
                            return lVar11;
                          }
                        }
                        auVar27 = func_0x03280cac();
                        if (plVar14[7] == 0) {
                          func_0x03280a18(PTR_DAT_0777ab40);
                          func_0x03280a18(PTR_DAT_0777ab48);
                          if (plVar14[7] == 0) {
                            func_0x03256878(plVar14);
                          }
                        }
                        lVar17 = *(long *)PTR_DAT_0777ab40;
                        lVar11 = *(long *)(lVar17 + 0x38);
                        if (lVar11 == 0) {
                          func_0x03256878(lVar17);
                          lVar11 = *(long *)(lVar17 + 0x38);
                        }
                        lVar11 = *(long *)(lVar11 + 0x10);
                        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                          lVar11 = func_0x0325681c();
                        }
                        if (*(int *)(lVar11 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        lVar11 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
                        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                          lVar11 = func_0x0325681c();
                        }
                        uVar25 = (*(code *)**(undefined8 **)(plVar14[7] + 0x10))
                                           (auVar27._8_8_,lVar16,**(undefined8 **)(lVar11 + 0xb8));
                        lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
                        func_0x05a85e88(lVar11,auVar27._0_8_,plVar24,uVar13 & 0xffffffff,uVar25,0);
                        return lVar11;
                      }
                      lVar11 = *plVar24;
                      lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
                      uVar25 = *(undefined8 *)PTR_DAT_0777ab30;
                      uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
                      if (uVar19 != 0) {
                        piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar21 + -2) == *(long *)(lVar16 + 0x20)) {
                            lVar11 = lVar11 + (long)(int)(*piVar21 +
                                                         (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                                     0x138;
                            goto LAB_03e40dbc;
                          }
                          uVar19 = uVar19 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar19 != 0);
                      }
                      lVar11 = func_0x03256b10(plVar24);
LAB_03e40dbc:
                      lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      lVar11 = (**(code **)(lVar11 + 8))(plVar24,uVar25,auVar27._8_8_,0,lVar11);
                      return lVar11;
                    }
                    lVar11 = *plVar23;
                    lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
                    uVar25 = *(undefined8 *)PTR_DAT_0777ab20;
                    uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar19 != 0) {
                      piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)(lVar16 + 0x20)) {
                          lVar11 = lVar11 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar16 + 0x50))
                                            * 0x10 + 0x138;
                          goto LAB_03e40b7c;
                        }
                        uVar19 = uVar19 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar19 != 0);
                    }
                    lVar11 = func_0x03256b10(plVar23);
LAB_03e40b7c:
                    lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    lVar11 = (**(code **)(lVar11 + 8))(plVar23,uVar25,auVar27._8_8_,0,lVar11);
                    return lVar11;
                  }
                  lVar16 = *plVar23;
                  lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
                  uVar25 = *(undefined8 *)PTR_DAT_0777ab18;
                  uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar19 != 0) {
                    piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)(lVar11 + 0x20)) {
                        lVar16 = lVar16 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar11 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_03e40a9c;
                      }
                      uVar19 = uVar19 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar19 != 0);
                  }
                  lVar16 = func_0x03256b10(plVar23);
LAB_03e40a9c:
                  lVar11 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x03e40acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  lVar11 = (**(code **)(lVar11 + 8))(plVar23,uVar25,auVar27._8_8_,0,lVar11);
                  return lVar11;
                }
                lVar11 = *plVar23;
                lVar16 = *(long *)PTR_DAT_0777ab08;
                uVar26 = *(undefined8 *)PTR_DAT_0777ab10;
                uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar19 != 0) {
                  piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar16 + 0x20)) {
                      lVar11 = lVar11 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar16 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_03e409bc;
                    }
                    uVar19 = uVar19 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar19 != 0);
                }
                lVar11 = func_0x03256b10(plVar23);
LAB_03e409bc:
                lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e409ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar11 = (**(code **)(lVar11 + 8))(plVar23,uVar26,uVar25,0,lVar11);
                return lVar11;
              }
              lVar11 = *plVar23;
              lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
              uVar25 = *(undefined8 *)PTR_DAT_0777aaf0;
              uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar19 != 0) {
                piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)(lVar16 + 0x20)) {
                    lVar11 = lVar11 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar16 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_03e40894;
                  }
                  uVar19 = uVar19 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar19 != 0);
              }
              lVar11 = func_0x03256b10(plVar23);
LAB_03e40894:
              lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e408c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar11 = (**(code **)(lVar11 + 8))(plVar23,uVar25,auVar27._8_8_,0,lVar11);
              return lVar11;
            }
            lVar16 = *plVar23;
            lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
            uVar25 = *(undefined8 *)PTR_DAT_0777aae8;
            uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar19 != 0) {
              piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)(lVar11 + 0x20)) {
                  lVar16 = lVar16 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03e407b4;
                }
                uVar19 = uVar19 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar19 != 0);
            }
            lVar16 = func_0x03256b10(plVar23);
LAB_03e407b4:
            lVar11 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x03e407e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar11 = (**(code **)(lVar11 + 8))(plVar23,uVar25,auVar27._8_8_,0,lVar11);
            return lVar11;
          }
          lVar11 = *plVar23;
          lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
          uVar25 = *(undefined8 *)PTR_DAT_0777aae0;
          uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar19 != 0) {
            piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)(lVar16 + 0x20)) {
                lVar11 = lVar11 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_03e406d4;
              }
              uVar19 = uVar19 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar19 != 0);
          }
          lVar11 = func_0x03256b10(plVar23);
LAB_03e406d4:
          lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (**(code **)(lVar11 + 8))(plVar23,uVar25,auVar27._8_8_,0,lVar11);
          return lVar11;
        }
        lVar16 = *plVar23;
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
        uVar25 = *(undefined8 *)PTR_DAT_0777aad8;
        uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)(lVar11 + 0x20)) {
              lVar16 = lVar16 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_03e405f4;
            }
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
        lVar16 = func_0x03256b10(plVar23);
LAB_03e405f4:
        lVar11 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x03e40624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar11 = (**(code **)(lVar11 + 8))(plVar23,uVar25,auVar27._8_8_,0,lVar11);
        return lVar11;
      }
      lVar11 = *plVar23;
      lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
      uVar25 = *(undefined8 *)PTR_DAT_0777aad0;
      uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)(lVar16 + 0x20)) {
            lVar11 = lVar11 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_03e40514;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      lVar11 = func_0x03256b10(plVar23);
LAB_03e40514:
      lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar11 = (**(code **)(lVar11 + 8))(plVar23,uVar25,auVar27._8_8_,0,lVar11);
      return lVar11;
    }
    lVar16 = *plVar23;
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    uVar25 = *(undefined8 *)PTR_DAT_0777aac8;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)(lVar11 + 0x20)) {
          lVar16 = lVar16 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40434;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    lVar16 = func_0x03256b10(plVar23);
LAB_03e40434:
    lVar11 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x03e40464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar11 = (**(code **)(lVar11 + 8))(plVar23,uVar25,auVar27._8_8_,0,lVar11);
    return lVar11;
  }
  lVar11 = *plVar23;
  lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
  uVar25 = *(undefined8 *)PTR_DAT_0777aac0;
  uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar19 != 0) {
    piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)(lVar16 + 0x20)) {
        lVar11 = lVar11 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40354;
      }
      uVar19 = uVar19 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar19 != 0);
  }
  lVar11 = func_0x03256b10(plVar23);
LAB_03e40354:
  lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar11 = (**(code **)(lVar11 + 8))(plVar23,uVar25,auVar27._8_8_,0,lVar11);
  return lVar11;
}

