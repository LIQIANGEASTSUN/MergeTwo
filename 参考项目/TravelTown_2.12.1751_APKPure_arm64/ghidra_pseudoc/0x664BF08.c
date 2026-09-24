/* Ghidra 12.1.2 native pseudocode; RVA 0x664BF08; Merger.Game.ViewModel.Board.BoardQueueViewModel.ShouldSlideOnEventBoard; status ok */


/* WARNING: Possible PIC construction at 0x0674c360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0674c39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x055f9840: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0674c3a0) */
/* WARNING: Removing unreachable block (ram,0x0674c3b8) */
/* WARNING: Removing unreachable block (ram,0x0674c364) */
/* WARNING: Removing unreachable block (ram,0x0674c378) */
/* WARNING: Removing unreachable block (ram,0x0674c384) */
/* WARNING: Removing unreachable block (ram,0x055f9844) */

ulong Merger_Game_ViewModel_Board_BoardQueueViewModel__ShouldSlideOnEventBoard
                (undefined8 param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ulong *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  ushort *puVar20;
  ushort *puVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined *unaff_x25;
  long unaff_x26;
  uint uVar26;
  long unaff_x27;
  long unaff_x28;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  unkbyte10 Var31;
  undefined1 auStack_370 [512];
  ulong uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  long *plVar7;
  long *plVar11;
  
  if ((bRam0000000007e27ffe & 1) == 0) {
    func_0x03280a18(PTR_DAT_077eefb0);
    func_0x03280a18(PTR_DAT_077eefc0);
    func_0x03280a18(PTR_DAT_0777bfe8);
    bRam0000000007e27ffe = 1;
  }
  if (param_2 != 0) {
    if (*(long **)(param_2 + 0x10) != (long *)0x0) {
      lVar16 = **(long **)(param_2 + 0x10);
      bVar2 = *(byte *)(*(long *)PTR_DAT_0777bfe8 + 0x130);
      if ((bVar2 <= *(byte *)(lVar16 + 0x130)) &&
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0777bfe8))
      {
        return 0;
      }
    }
    if ((param_3 >> 0x20 == 2) && ((param_3 & 0xff) != 0)) {
      return 0;
    }
    if (*(char *)(param_2 + 0x20) == '\0') {
      return 0;
    }
    if ((param_4 & 1) == 0) {
      return (ulong)(*(char *)(param_2 + 0x48) != '\0');
    }
    return (ulong)(*(char *)(param_2 + 0x20) != '\0');
  }
  uVar6 = func_0x03280cac();
  puVar5 = PTR_DAT_077dbd88;
  puVar25 = PTR_DAT_077dbd80;
  puVar17 = PTR_DAT_077730b8;
  if ((bRam0000000007e28000 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077dbd78);
    func_0x03280a18(PTR_DAT_077dbd80);
    func_0x03280a18(PTR_DAT_077dbd88);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e28000 = 1;
  }
  lVar16 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x053bfe40(lVar16,*(undefined8 *)puVar25);
  if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar25 = PTR_DAT_077dbd78;
  if (lVar16 != 0) {
    func_0x053c1024(lVar16,*(undefined8 *)(*(long *)(*(long *)puVar17 + 0xb8) + 0x40),
                    *(undefined8 *)PTR_DAT_077dbd78);
    func_0x053c1024(lVar16,*(undefined8 *)(*(long *)(*(long *)puVar17 + 0xb8) + 8),
                    *(undefined8 *)puVar25);
    func_0x053c1024(lVar16,*(undefined8 *)(*(long *)(*(long *)puVar17 + 0xb8) + 0x48),
                    *(undefined8 *)puVar25);
    func_0x053c1024(lVar16,*(undefined8 *)(*(long *)(*(long *)puVar17 + 0xb8) + 0x10),
                    *(undefined8 *)puVar25);
    func_0x053c1024(lVar16,*(undefined8 *)(*(long *)(*(long *)puVar17 + 0xb8) + 0x18),
                    *(undefined8 *)puVar25);
    *(long *)(uVar6 + 0x100) = lVar16;
    func_0x032809c4(uVar6 + 0x100,lVar16);
    puVar25 = PTR_DAT_07828a38;
    puVar17 = PTR_DAT_07828a30;
    if ((bRam0000000007e29c54 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a38,0);
      func_0x03280a18(PTR_DAT_07828a30);
      bRam0000000007e29c54 = 1;
    }
    uVar10 = func_0x03280ca0(*(undefined8 *)puVar17);
    func_0x053bfe40(uVar10,*(undefined8 *)puVar25);
    *(undefined8 *)(uVar6 + 0x60) = uVar10;
    func_0x032809c4((undefined8 *)(uVar6 + 0x60),uVar10);
    return uVar6;
  }
  auVar29 = func_0x03280cac();
  plVar11 = auVar29._8_8_;
  plVar7 = auVar29._0_8_;
  if ((bRam0000000007e28003 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff50);
    func_0x03280a18(PTR_DAT_077d88f0);
    func_0x03280a18(PTR_DAT_07807168);
    bRam0000000007e28003 = 1;
  }
  if (plVar7 != (long *)0x0) {
    lVar16 = *plVar7;
    lVar19 = *(long *)PTR_DAT_077d88f0;
    uVar10 = *(undefined8 *)PTR_DAT_07807168;
    uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)(lVar19 + 0x20)) {
          lVar16 = lVar16 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 + 0x138;
          goto LAB_0674c1e0;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    lVar16 = func_0x03256b10(plVar7);
LAB_0674c1e0:
    lVar16 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar19);
    uVar6 = (**(code **)(lVar16 + 8))(plVar7,uVar10);
    uVar8 = func_0x055f7aac(uVar6,0);
    if ((uVar8 & 1) == 0) {
      return uVar6;
    }
    if (plVar11 != (long *)0x0) {
      lVar16 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777ff50) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar13 + 0x13) * 0x10 + 0x138);
            goto LAB_0674c284;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777ff50,0x13);
LAB_0674c284:
                    /* WARNING: Could not recover jumptable at 0x0674c298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      return uVar6;
    }
  }
  lVar16 = func_0x03280cac();
  puVar17 = PTR_DAT_0777a680;
  if ((bRam0000000007e2800a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a678);
    func_0x03280a18(PTR_DAT_0777a680);
    func_0x03280a18(PTR_DAT_07807170);
    func_0x03280a18(PTR_DAT_077d0b68);
    func_0x03280a18(PTR_DAT_07807178);
    bRam0000000007e2800a = 1;
  }
  puVar21 = (ushort *)PTR_DAT_0777a678;
  if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar19 = func_0x04607360(*(undefined8 *)puVar21);
  if (lVar19 == 0) {
LAB_0674c3e4:
    auVar29 = func_0x03280cac();
    if ((bRam0000000007e2800b & 1) == 0) {
      func_0x03280a18(PTR_DAT_07807180);
      bRam0000000007e2800b = 1;
    }
    if (auVar29._0_8_ == 0) {
      uVar6 = func_0x03280cac();
      return uVar6;
    }
    uVar6 = *(ulong *)PTR_DAT_07807180;
  }
  else {
    uVar10 = func_0x06b014d0(lVar19,0);
    auVar29._8_8_ = uVar10;
    auVar29._0_8_ = lVar16;
    if (lVar16 == 0) goto LAB_0674c3e4;
    uVar6 = *(ulong *)PTR_DAT_07807178;
  }
  uVar24 = auVar29._8_8_;
  uVar8 = auVar29._0_8_;
  uVar10 = 0;
  puVar4 = &uStack_170;
  puVar17 = (undefined *)tpidr_el0;
  lStack_138 = *(long *)(puVar17 + 0x28);
  uVar18 = 0x7e1c000;
  if ((bRam0000000007e1cd71 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07788490);
    func_0x03280a18(PTR_DAT_0774e5d8);
    func_0x03280a18(PTR_DAT_07788498);
    func_0x03280a18(PTR_DAT_077884a0);
    func_0x03280a18(PTR_DAT_077884a8);
    func_0x03280a18(PTR_DAT_077884b0);
    func_0x03280a18(PTR_DAT_077884b8);
    bRam0000000007e1cd71 = 1;
  }
  puVar20 = (ushort *)PTR_DAT_077884b0;
  uStack_158 = 0;
  lStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  puVar25 = unaff_x25;
  if (uVar6 == 0) {
LAB_055f9890:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar8 = func_0x03280ca0();
    uVar27 = func_0x03280a2c(PTR_DAT_077884c0);
    uVar12 = 0;
    func_0x056e7310(uVar8,uVar27);
    puVar5 = puVar17;
    puVar20 = puVar21;
    unaff_x25 = puVar25;
LAB_055f9908:
    uVar27 = func_0x03280a2c(PTR_DAT_077884d0);
    func_0x03280b7c(uVar8,uVar27);
LAB_055f9920:
    uVar27 = 0x55f9924;
    auVar30 = func_0x072ce990();
    auVar28._8_8_ = param_5;
    auVar28._0_8_ = uVar10;
  }
  else {
    if (*(int *)(uVar6 + 0x10) == 0) {
      func_0x03280a2c(PTR_DAT_0774e6e8);
      uVar8 = func_0x03280ca0();
      puVar5 = (undefined *)func_0x03280a2c(PTR_DAT_077884c8);
      uVar12 = func_0x03280a2c(PTR_DAT_077884c0);
      uVar10 = 0;
      func_0x056e7388(uVar8,puVar5);
      puVar4 = &uStack_170;
      puVar20 = puVar21;
      goto LAB_055f9908;
    }
    if (uVar24 == 0) {
      uVar24 = **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    }
    puVar4 = (ulong *)auStack_370;
    uStack_170 = uVar24;
    puStack_168 = puVar17;
    func_0x072ce9a0(puVar4,0,0x200);
    uVar10 = *(undefined8 *)puVar20;
    uVar12 = 0x80;
    func_0x0482a804(&lStack_160,puVar4);
    puVar25 = PTR_DAT_07788498;
    uVar1 = *(uint *)(uVar6 + 0x10);
    uVar23 = *(int *)(uVar8 + 0x10) - uVar1;
    uVar18 = (ulong)uVar23;
    if (-1 < (int)uVar23) {
      uVar24 = 0;
      unaff_x26 = uVar8 + 0x14;
      unaff_x27 = uVar6 + 0x14;
      do {
        uVar14 = (ulong)uVar1;
        iVar22 = (int)uVar24;
        if (0 < (int)uVar1) {
          unaff_x28 = 0;
          puVar20 = (ushort *)(unaff_x26 + (long)iVar22 * 2);
          do {
            uVar3 = *puVar20;
            puVar17 = (undefined *)(ulong)uVar3;
            if ((int)uVar14 <= unaff_x28) {
              func_0x057b7838(0);
            }
            if (uVar3 != *(ushort *)(unaff_x27 + unaff_x28 * 2)) {
              uVar1 = iVar22 + 1;
              goto LAB_055f97f4;
            }
            uVar14 = (ulong)*(int *)(uVar6 + 0x10);
            unaff_x28 = unaff_x28 + 1;
            puVar20 = puVar20 + 1;
          } while (unaff_x28 < (long)uVar14);
        }
        puVar20 = *(ushort **)puVar25;
        uVar1 = (uint)uStack_148;
        unaff_x28 = (long)(int)(uint)uStack_148;
        if ((*(byte *)(*(long *)(puVar20 + 0x10) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        if ((int)(uint)uStack_158 <= (int)uVar1) {
          lVar16 = *(long *)(puVar20 + 0x10);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = func_0x0325681c();
          }
          func_0x0482aa14(&lStack_160,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x28));
        }
        if ((uint)uStack_158 <= uVar1) {
          func_0x03280cb4();
          puVar21 = puVar20;
          goto LAB_055f9890;
        }
        *(int *)(lStack_160 + unaff_x28 * 4) = iVar22;
        uStack_148 = CONCAT44(uStack_148._4_4_,uVar1 + 1);
        uVar1 = *(int *)(uVar6 + 0x10) + iVar22;
LAB_055f97f4:
        uVar24 = (ulong)uVar1;
        unaff_x25 = puVar25;
        if ((int)uVar23 < (int)uVar1) break;
        uVar1 = *(uint *)(uVar6 + 0x10);
      } while( true );
    }
    puVar5 = PTR_DAT_077884a8;
    if ((uint)uStack_148 == 0) {
      puVar5 = puVar17;
      if (*(long *)(puStack_168 + 0x28) == lStack_138) {
        return uVar8;
      }
      goto LAB_055f9920;
    }
    auVar30._8_4_ = *(uint *)(uVar6 + 0x10);
    auVar30._0_8_ = uVar8;
    uVar6 = (ulong)*(uint *)(uVar6 + 0x10);
    auVar28 = func_0x0482a8a4(&lStack_160,*(undefined8 *)PTR_DAT_077884a0);
    uVar27 = 0x55f9844;
    uVar12 = uStack_170;
  }
  lVar16 = auVar30._0_8_;
  piVar13 = auVar28._0_8_;
  *(undefined1 **)((long)puVar4 + -0x60) = &stack0xfffffffffffffed0;
  *(undefined8 *)((long)puVar4 + -0x58) = uVar27;
  *(long *)((long)puVar4 + -0x50) = unaff_x28;
  *(long *)((long)puVar4 + -0x48) = unaff_x27;
  *(long *)((long)puVar4 + -0x40) = unaff_x26;
  *(undefined **)((long)puVar4 + -0x38) = unaff_x25;
  *(ulong *)((long)puVar4 + -0x30) = uVar24;
  *(ushort **)((long)puVar4 + -0x28) = puVar20;
  *(ulong *)((long)puVar4 + -0x20) = uVar18;
  *(ulong *)((long)puVar4 + -0x18) = uVar6;
  *(undefined **)((long)puVar4 + -0x10) = puVar5;
  *(ulong *)((long)puVar4 + -8) = uVar8;
  *(int *)((long)puVar4 + -0x74) = auVar30._8_4_;
  uVar6 = uVar12;
  if ((bRam0000000007e1cd72 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077884d8);
    func_0x03280a18(PTR_DAT_077884e0);
    func_0x03280a18(PTR_DAT_077884e8);
    func_0x03280a18(PTR_DAT_0777b558);
    bRam0000000007e1cd72 = 1;
  }
  *(undefined8 *)((long)puVar4 + -0x70) = 0;
  *(undefined8 *)((long)puVar4 + -0x68) = 0;
  if (uVar12 != 0) {
    if (0x7fffffff <
        (long)auVar28._8_4_ * (long)(*(int *)(uVar12 + 0x10) - *(int *)((long)puVar4 + -0x74)) +
        (long)*(int *)(lVar16 + 0x10)) goto LAB_055f9c30;
    uVar8 = func_0x032bc400();
    if (uVar8 != 0) {
      uVar1 = *(uint *)(uVar8 + 0x10);
      *(long *)((long)puVar4 + -0x80) = lVar16;
      if (auVar28._8_4_ < 1) {
        uVar26 = 0;
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        uVar26 = 0;
        uVar6 = auVar28._8_8_ & 0xffffffff;
        *(long *)((long)puVar4 + -0x88) = lVar16 + 0x14;
        do {
          iVar22 = *piVar13;
          uVar15 = iVar22 - uVar23;
          if (uVar15 != 0) {
            if (cRam0000000007e1cdae == '\0') {
              func_0x03280a18(PTR_DAT_07781e48);
              cRam0000000007e1cdae = '\x01';
            }
            if ((*(uint *)(*(long *)((long)puVar4 + -0x80) + 0x10) < uVar23) ||
               (*(uint *)(*(long *)((long)puVar4 + -0x80) + 0x10) - uVar23 < uVar15)) {
              func_0x057a7e10(0x18,0);
            }
            lVar16 = *(long *)PTR_DAT_077884e8;
            *(long *)((long)puVar4 + -0x70) =
                 *(long *)((long)puVar4 + -0x88) + (long)(int)uVar23 * 2;
            *(ulong *)((long)puVar4 + -0x68) = (ulong)uVar15;
            if (uVar1 < uVar26) {
              func_0x057b78b0(0);
            }
            if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            func_0x045b0de0((undefined1 *)((long)puVar4 + -0x70),
                            uVar8 + (long)(int)uVar26 * 2 + 0x14,uVar1 - uVar26,
                            *(undefined8 *)PTR_DAT_077884d8);
            uVar26 = uVar15 + uVar26;
          }
          if (cRam0000000007e1cdaf == '\0') {
            func_0x03280a18(PTR_DAT_07781e48);
            cRam0000000007e1cdaf = '\x01';
          }
          uVar23 = *(uint *)(uVar12 + 0x10);
          *(ulong *)((long)puVar4 + -0x70) = uVar12 + 0x14;
          *(ulong *)((long)puVar4 + -0x68) = (ulong)uVar23;
          lVar16 = *(long *)PTR_DAT_077884e8;
          if (uVar1 < uVar26) {
            func_0x057b78b0(0);
          }
          if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar23 = iVar22 + *(int *)((long)puVar4 + -0x74);
          func_0x045b0de0((undefined1 *)((long)puVar4 + -0x70),uVar8 + (long)(int)uVar26 * 2 + 0x14,
                          uVar1 - uVar26,*(undefined8 *)PTR_DAT_077884d8);
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 1;
          uVar26 = *(int *)(uVar12 + 0x10) + uVar26;
        } while (uVar6 != 0);
      }
      if (cRam0000000007e1cdb0 == '\0') {
        func_0x03280a18(PTR_DAT_07781e48);
        cRam0000000007e1cdb0 = '\x01';
      }
      lVar16 = *(long *)((long)puVar4 + -0x80);
      if (lVar16 == 0) {
        if (uVar23 != 0) {
          func_0x057a7e10(0x18,0);
        }
        lVar16 = 0;
        uVar6 = 0;
      }
      else {
        uVar15 = *(uint *)(lVar16 + 0x10);
        if (uVar15 < uVar23) {
          func_0x057a7e10(0x18,0);
          uVar15 = *(uint *)(lVar16 + 0x10);
        }
        lVar16 = lVar16 + (long)(int)uVar23 * 2 + 0x14;
        uVar6 = (ulong)(uVar15 - uVar23);
      }
      *(long *)((long)puVar4 + -0x70) = lVar16;
      *(ulong *)((long)puVar4 + -0x68) = uVar6;
      lVar16 = *(long *)PTR_DAT_077884e8;
      if (uVar1 < uVar26) {
        func_0x057b78b0(0);
      }
      if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      func_0x045b0de0((undefined1 *)((long)puVar4 + -0x70),uVar8 + (long)(int)uVar26 * 2 + 0x14,
                      uVar1 - uVar26,*(undefined8 *)PTR_DAT_077884d8);
      return uVar8;
    }
  }
  func_0x03280cac();
LAB_055f9c30:
  func_0x03280a2c(PTR_DAT_07777718);
  uVar10 = func_0x03280ca0();
  func_0x057b9534(uVar10,0);
  uVar27 = func_0x03280a2c(PTR_DAT_077884f0);
  Var31 = func_0x03280b7c(uVar10,uVar27);
  *(undefined8 *)((long)puVar4 + -0xb0) = 0x55f9c64;
  *(int **)((long)puVar4 + -0xa8) = piVar13;
  *(long *)((long)puVar4 + -0xa0) = lVar16;
  *(undefined8 *)((long)puVar4 + -0x98) = uVar10;
  *(short *)((long)puVar4 + -0xb4) = (short)((unkuint10)Var31 >> 0x40);
  if ((bRam0000000007e1cd73 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07781e48);
    bRam0000000007e1cd73 = 1;
  }
  uVar6 = func_0x055f9cc4((long)Var31,(undefined1 *)((long)puVar4 + -0xb4),1,0x7fffffff,
                          uVar6 & 0xffffffff);
  return uVar6;
}

