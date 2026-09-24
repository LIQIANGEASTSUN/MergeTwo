
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01af4928(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 extraout_r1;
  int *piVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  int unaff_r8;
  undefined4 uVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 extraout_r12;
  bool bVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int *piStack_a8;
  uint uStack_a4;
  int iStack_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar13 = (char *)(iRam01af502c + 0x1af4948);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam01af5030 + 0x1af495c));
    func_0x01438628(*(undefined4 *)(iRam01af5034 + 0x1af4968));
    func_0x01438628(*(undefined4 *)(iRam01af5038 + 0x1af4974));
    func_0x01438628(*(undefined4 *)(iRam01af503c + 0x1af4980));
    func_0x01438628(*(undefined4 *)(iRam01af5040 + 0x1af498c));
    func_0x01438628(*(undefined4 *)(iRam01af5044 + 0x1af4998));
    func_0x01438628(*(undefined4 *)(iRam01af5048 + 0x1af49a4));
    func_0x01438628(*(undefined4 *)(iRam01af504c + 0x1af49b0));
    func_0x01438628(*(undefined4 *)(iRam01af5050 + 0x1af49bc));
    func_0x01438628(*(undefined4 *)(iRam01af5054 + 0x1af49c8));
    func_0x01438628(*(undefined4 *)(iRam01af5058 + 0x1af49d4));
    func_0x01438628(*(undefined4 *)(iRam01af505c + 0x1af49e0));
    func_0x01438628(*(undefined4 *)(iRam01af5060 + 0x1af49ec));
    func_0x01438628(*(undefined4 *)(iRam01af5064 + 0x1af49f8));
    func_0x01438628(*(undefined4 *)(iRam01af5068 + 0x1af4a04));
    func_0x01438628(*(undefined4 *)(iRam01af506c + 0x1af4a10));
    func_0x01438628(*(undefined4 *)(iRam01af5070 + 0x1af4a1c));
    func_0x01438628(*(undefined4 *)(iRam01af5074 + 0x1af4a28));
    func_0x01438628(*(undefined4 *)(iRam01af5078 + 0x1af4a34));
    *pcVar13 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_4c = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar5 = func_0x02953fd4(0xa4f9,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(iRam01af507c + 0x1af4aa8));
    func_0x01af83c4(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 8) = param_2;
    iVar6 = FUN_01ae99ac(param_1);
    if (((iVar6 != 0) &&
        (iVar14 = *(int *)(iVar5 + 8), iVar6 = FUN_01af4260(param_1), iVar6 <= iVar14)) &&
       (iVar6 = FUN_01aede74(param_1), iVar6 != 0)) {
      iVar6 = FUN_01af3ed8(param_1,iVar6);
      iVar14 = *(int *)(iVar5 + 8);
      if (-1 < iVar14) {
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (iVar14 < *(int *)(iVar6 + 0xc)) {
          iVar6 = func_0x0152983c(iVar6,*(undefined4 *)(iVar5 + 8),
                                  **(undefined4 **)(iRam01af5080 + 0x1af4b3c));
          piVar23 = (int *)(iVar5 + 0xc);
          *piVar23 = iVar6;
          func_0x014385cc(piVar23,iVar6);
          if (*piVar23 != 0) {
            iVar6 = *(int *)(*piVar23 + 0x14);
            if (iVar6 == 2) {
              if (*(int *)(**(int **)(iRam01af50b8 + 0x1af4f24) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x0202346c(0);
              iVar6 = *piVar23;
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar6 + 0x18);
              uVar7 = func_0x01524ffc(&uStack_4c,0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uStack_88 = 0;
              uStack_84 = 0;
              uStack_80 = 0;
              uStack_7c = 0;
              uStack_78 = 0;
              uStack_98 = 0;
              uStack_94 = 0;
              uStack_90 = 0;
              func_0x020257a4(iVar5,0x2f2,uVar7,0);
              if (*(int *)(**(int **)(iRam01af50bc + 0x1af4fb8) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x014e9518(**(undefined4 **)(iRam01af50c0 + 0x1af4fd4));
              iVar6 = *piVar23;
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar7 = *(undefined4 *)(iVar6 + 0x18);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02aac608(iVar5,uVar7,**(undefined4 **)(iRam01af50c4 + 0x1af5010),0);
            }
            else if (iVar6 == 1) {
              puStack_58 = &uStack_40;
              puStack_54 = &uStack_30;
              iStack_50 = func_0x014388d4(**(undefined4 **)(iRam01af5084 + 0x1af4b98));
              func_0x024eed9c(iStack_50,**(undefined4 **)(iRam01af5088 + 0x1af4ba8));
              iVar6 = 0;
              while( true ) {
                iVar15 = *piVar23;
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                iVar15 = *(int *)(iVar15 + 0xc);
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar15 + 0xc) <= iVar6) break;
                iVar14 = *piVar23;
                if (iVar14 == 0) {
                  func_0x014388e4();
                }
                iVar14 = *(int *)(iVar14 + 0xc);
                if (iVar14 == 0) {
                  func_0x014388e4();
                }
                uVar7 = func_0x024f0530(iVar14,iVar6,**(undefined4 **)(iRam01af508c + 0x1af4c10));
                iVar14 = *piVar23;
                if (iVar14 == 0) {
                  func_0x014388e4();
                }
                iVar14 = *(int *)(iVar14 + 0x10);
                if (iVar14 == 0) {
                  func_0x014388e4();
                }
                uVar8 = func_0x024f0530(iVar14,iVar6,**(undefined4 **)(iRam01af5090 + 0x1af4c4c));
                iVar14 = func_0x014388d4(**(undefined4 **)(iRam01af5094 + 0x1af4c64));
                uStack_98 = 0;
                func_0x02ca3c70(iVar14,uVar7,uVar8,0);
                if (iStack_50 == 0) {
                  func_0x014388e4();
                }
                iVar15 = *(int *)(iStack_50 + 8);
                uVar16 = *(uint *)(iStack_50 + 0xc);
                piVar11 = *(int **)(iRam01af5098 + 0x1af4cbc);
                *(int *)(iStack_50 + 0x10) = *(int *)(iStack_50 + 0x10) + 1;
                unaff_r8 = *piVar11;
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                if (uVar16 < *(uint *)(iVar15 + 0xc)) {
                  *(uint *)(iStack_50 + 0xc) = uVar16 + 1;
                  piVar11 = (int *)(iVar15 + uVar16 * 4 + 0x10);
                  *piVar11 = iVar14;
                  func_0x014385cc(piVar11,iVar14);
                }
                else {
                  func_0x0152874c(iStack_50,iVar14,
                                  *(undefined4 *)(*(int *)(*(int *)(unaff_r8 + 0x10) + 0x60) + 0x38)
                                 );
                }
                iVar6 = iVar6 + 1;
              }
              if (*(int *)(**(int **)(iRam01af509c + 0x1af4d1c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar9 = func_0x0202346c(0);
              iVar17 = *piVar23;
              iVar15 = iVar17;
              if (iVar17 == 0) {
                func_0x014388e4();
                iVar15 = *piVar23;
                bVar26 = iVar15 == 0;
                if (bVar26) {
                  uVar27 = func_0x014388e4();
                  if (bVar26) {
                    *(undefined4 *)(uVar27 >> 0x20) = extraout_r12;
                    param_1 = (uint)*(byte *)(iVar6 + -0x149f8);
                    puVar18 = (undefined1 *)(iVar6 + -0x15c70);
                    pbVar19 = (byte *)(iVar6 + -0x1643c);
                    iVar6 = iVar6 + -0x166d8;
                    uVar27 = (ulonglong)CONCAT14(*puVar18,(uint)*pbVar19);
                  }
                  iVar15 = (int)(uVar27 >> 0x20);
                  uVar7 = (undefined4)uVar27;
                  piStack_9c = &iRam01af502c;
                  pcVar13 = (char *)(_UNK_01af5d9c + 0x1af50e8);
                  iStack_bc = iVar9;
                  iStack_b8 = iVar17;
                  iStack_b4 = iVar14;
                  iStack_b0 = iVar6;
                  iStack_ac = unaff_r8;
                  piStack_a8 = piVar23;
                  uStack_a4 = param_1;
                  iStack_a0 = iVar5;
                  if (*pcVar13 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_01af5da0 + 0x1af50fc));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5da4 + 0x1af5108));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5da8 + 0x1af5114));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5dac + 0x1af5120));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5db0 + 0x1af512c));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5db4 + 0x1af5138));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5db8 + 0x1af5144));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5dbc + 0x1af5150));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5dc0 + 0x1af515c));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5dc4 + 0x1af5168));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5dc8 + 0x1af5174));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5dcc + 0x1af5180));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5dd0 + 0x1af518c));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5dd4 + 0x1af5198));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5dd8 + 0x1af51a4));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5ddc + 0x1af51b0));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5de0 + 0x1af51bc));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5de4 + 0x1af51c8));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5de8 + 0x1af51d4));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5dec + 0x1af51e0));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5df0 + 0x1af51ec));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5df4 + 0x1af51f8));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5df8 + 0x1af5204));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5dfc + 0x1af5210));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5e00 + 0x1af521c));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5e04 + 0x1af5228));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5e08 + 0x1af5234));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5e0c + 0x1af5240));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5e10 + 0x1af524c));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5e14 + 0x1af5258));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5e18 + 0x1af5264));
                    func_0x01438628(*(undefined4 *)(_UNK_01af5e1c + 0x1af5270));
                    *pcVar13 = '\x01';
                  }
                  uStack_dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                  uStack_d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                  uStack_d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                  uStack_e0 = 0;
                  uStack_d0 = 0;
                  uStack_cc = uStack_dc;
                  uStack_c8 = uStack_d8;
                  uStack_c4 = uStack_d4;
                  iVar5 = func_0x02953fd4(0x2d1c,0);
                  if (iVar5 == 0) {
                    if (((iVar15 != 0) && (iVar5 = FUN_01ae99ac(uVar7), iVar5 != 0)) &&
                       (iVar5 = FUN_01ae4df4(uVar7), iVar5 != 0)) {
                      iVar5 = FUN_01aea86c(uVar7);
                      if ((iVar5 == 0) ||
                         (iVar6 = *(int *)(iVar15 + 8), iVar5 = FUN_01aea86c(uVar7), iVar6 != iVar5)
                         ) {
                        if (*(int *)(**(int **)(_UNK_01af5e20 + 0x1af5340) + 0x74) == 0) {
                          func_0x014387a4();
                        }
                        iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01af5e24 + 0x1af535c));
                        if (iVar5 == 0) {
                          func_0x014388e4();
                        }
                        iVar5 = *(int *)(iVar5 + 0x50);
                        if ((iVar5 != 0) && (0 < *(int *)(iVar5 + 0xc))) {
                          iVar6 = 0;
                          puVar20 = *(undefined4 **)(_UNK_01af5e28 + 0x1af53a0);
                          do {
                            iVar14 = func_0x0152983c(iVar5,iVar6,*puVar20);
                            if (iVar14 != 0) {
                              iVar14 = func_0x0152983c(iVar5,iVar6,*puVar20);
                              if (iVar14 == 0) {
                                func_0x014388e4();
                              }
                              if (*(int *)(iVar14 + 0x18) != 0) {
                                iVar14 = func_0x0152983c(iVar5,iVar6,*puVar20);
                                if (iVar14 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar14 + 0x18) == *(int *)(iVar15 + 8)) {
                                  if (*(int *)(**(int **)(_UNK_01af5e2c + 0x1af5600) + 0x74) == 0) {
                                    func_0x014387a4();
                                  }
                                  iVar14 = func_0x0202346c(0);
                                  uVar8 = func_0x01524ffc((int *)(iVar15 + 8),0);
                                  if (iVar14 == 0) {
                                    func_0x014388e4();
                                  }
                                  func_0x020257a4(iVar14,0x34d,uVar8,0,0,0,0);
                                  uVar8 = func_0x0152983c(iVar5,iVar6,*puVar20);
                                  func_0x01af5ea0(uVar7,uVar8);
                                  return;
                                }
                              }
                            }
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < *(int *)(iVar5 + 0xc));
                        }
                        iVar5 = FUN_01af3750(uVar7);
                        if ((iVar5 != 0) && (0 < *(int *)(iVar5 + 0xc))) {
                          iVar6 = 0;
                          puVar22 = *(undefined4 **)(_UNK_01af5e30 + 0x1af5464);
                          puVar20 = *(undefined4 **)(_UNK_01af5e34 + 0x1af546c);
                          do {
                            iVar14 = func_0x0152983c(iVar5,iVar6,*puVar22);
                            if (iVar14 != 0) {
                              iVar14 = FUN_01af3ed8(uVar7,iVar14);
                              iVar9 = 0;
                              while( true ) {
                                if (iVar14 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar14 + 0xc) <= iVar9) break;
                                iVar17 = func_0x0152983c(iVar14,iVar9,*puVar20);
                                if (((iVar17 != 0) && (*(int *)(iVar17 + 0x14) == 2)) &&
                                   (*(int *)(iVar17 + 0x18) == *(int *)(iVar15 + 8))) {
                                  iVar5 = FUN_01ae99ac(uVar7);
                                  if (iVar5 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar5 = *(int *)(iVar5 + 0x18);
                                  puVar20 = (undefined4 *)(iVar15 + 8);
                                  uVar8 = *puVar20;
                                  if (iVar5 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar5 = func_0x024f0540(iVar5,uVar8,
                                                          **(undefined4 **)
                                                            (_UNK_01af5e38 + 0x1af5548));
                                  if (iVar5 == 0) {
                                    iVar5 = FUN_01ae99ac(uVar7);
                                    if (iVar5 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar5 = *(int *)(iVar5 + 0x18);
                                    uVar8 = *puVar20;
                                    if (iVar5 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d0(iVar5,uVar8,0,
                                                    **(undefined4 **)(_UNK_01af5e3c + 0x1af559c));
                                  }
                                  iVar5 = FUN_01ae99ac(uVar7);
                                  if (iVar5 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar5 = *(int *)(iVar5 + 0x18);
                                  uVar8 = *puVar20;
                                  if (iVar5 == 0) {
                                    func_0x014388e4();
                                    iVar6 = func_0x024f05d4(0,uVar8,**(undefined4 **)
                                                                      (_UNK_01af5e44 + 0x1af56a4));
                                    iStack_e4 = iVar6;
                                    func_0x014388e4();
                                  }
                                  else {
                                    iVar6 = func_0x024f05d4(iVar5,uVar8,
                                                            **(undefined4 **)
                                                              (_UNK_01af5e40 + 0x1af55e0));
                                    iStack_e4 = iVar6;
                                  }
                                  func_0x024f10d4(iVar5,uVar8,iVar6 + 1,
                                                  **(undefined4 **)(_UNK_01af5e48 + 0x1af56cc));
                                  iVar5 = FUN_01ae99ac(uVar7);
                                  if (*(int *)(**(int **)(_UNK_01af5e4c + 0x1af56ec) + 0x74) == 0) {
                                    func_0x014387a4();
                                  }
                                  iVar6 = func_0x014e9518(**(undefined4 **)
                                                            (_UNK_01af5e50 + 0x1af5708));
                                  if (iVar6 == 0) {
                                    func_0x014388e4();
                                  }
                                  uVar28 = func_0x026ffbe0(iVar6,0);
                                  uVar10 = (undefined4)((ulonglong)uVar28 >> 0x20);
                                  uVar8 = uVar10;
                                  if (iVar5 == 0) {
                                    func_0x014388e4();
                                    uVar8 = extraout_r1;
                                  }
                                  func_0x026bfd40(iVar5,uVar8,(int)uVar28,uVar10,0);
                                  iVar5 = FUN_01ae99ac(uVar7);
                                  if (iVar5 == 0) {
                                    func_0x014388e4();
                                  }
                                  func_0x026bfe10(iVar5,*(int *)(iVar5 + 0x40) + 1,0);
                                  uStack_cc = *(undefined4 *)
                                               ((undefined1  [16])0x0 + (undefined1  [16])0x4);
                                  uStack_c8 = *(undefined4 *)
                                               ((undefined1  [16])0x0 + (undefined1  [16])0x8);
                                  uStack_c4 = *(undefined4 *)
                                               ((undefined1  [16])0x0 + (undefined1  [16])0xc);
                                  puVar22 = (undefined4 *)((uint)&uStack_e0 | 4);
                                  uStack_d0 = 0;
                                  *puVar22 = 0;
                                  puVar22[1] = uStack_cc;
                                  puVar22[2] = uStack_c8;
                                  puVar22[3] = uStack_c4;
                                  iStack_e4 = *(int *)(iVar17 + 8);
                                  uStack_e0 = 0xea;
                                  uStack_dc = func_0x01524ffc(&iStack_e4,0);
                                  func_0x014385cc(puVar22,uStack_dc);
                                  uVar8 = *(undefined4 *)(iVar17 + 0xc);
                                  uVar10 = *(undefined4 *)(iVar17 + 0x10);
                                  if (*(int *)(**(int **)(_UNK_01af5e54 + 0x1af57d0) + 0x74) == 0) {
                                    func_0x014387a4();
                                  }
                                  iVar5 = func_0x02af43a8(uVar8,uVar10,0);
                                  iVar6 = 0;
                                  piVar23 = *(int **)(_UNK_01af5e58 + 0x1af5818);
                                  while( true ) {
                                    if (iVar5 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (*(int *)(iVar5 + 0xc) <= iVar6) break;
                                    iVar14 = func_0x0152983c(iVar5,iVar6,
                                                             **(undefined4 **)
                                                               (_UNK_01af5e5c + 0x1af5844));
                                    iVar15 = **(int **)(*piVar23 + 0x5c);
                                    if (iVar14 == 0) {
                                      func_0x014388e4();
                                    }
                                    uVar8 = *(undefined4 *)(iVar14 + 8);
                                    if (iVar15 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar15 = func_0x02e651cc(iVar15,uVar8,0);
                                    if ((iVar15 == 0) &&
                                       (iVar15 = FUN_01af2778(uVar7,*(undefined4 *)(iVar14 + 8)),
                                       iVar15 != 0)) {
                                      if (0 < *(int *)(iVar14 + 0xc)) {
                                        iVar15 = 0;
                                        do {
                                          iVar9 = FUN_01ae99ac(uVar7);
                                          if (iVar9 == 0) {
                                            func_0x014388e4();
                                          }
                                          iVar9 = *(int *)(iVar9 + 0x14);
                                          uVar8 = *(undefined4 *)(iVar14 + 8);
                                          if (iVar9 == 0) {
                                            func_0x014388e4();
                                          }
                                          func_0x024f05ac(iVar9,uVar8,
                                                          **(undefined4 **)
                                                            (_UNK_01af5e60 + 0x1af58f4));
                                          if (*(int *)(**(int **)(_UNK_01af5e64 + 0x1af5908) + 0x74)
                                              == 0) {
                                            func_0x014387a4();
                                          }
                                          iVar9 = func_0x0202346c(0);
                                          iVar17 = func_0x014388d4(**(undefined4 **)
                                                                     (_UNK_01af5e68 + 0x1af5930));
                                          func_0x02025440(iVar17,0);
                                          if (iVar17 == 0) {
                                            func_0x014388e4();
                                            uVar8 = *(undefined4 *)(iVar14 + 8);
                                            uRam00000008 = 0x78;
                                            func_0x014388e4();
                                          }
                                          else {
                                            uVar8 = *(undefined4 *)(iVar14 + 8);
                                            *(undefined4 *)(iVar17 + 8) = 0x78;
                                          }
                                          *(undefined1 *)(iVar17 + 0x25) = 1;
                                          *(undefined4 *)(iVar17 + 0xc) = uVar8;
                                          if (iVar9 == 0) {
                                            func_0x014388e4();
                                          }
                                          func_0x02024d08(iVar9,iVar17,1,0);
                                          iVar15 = iVar15 + 1;
                                        } while (iVar15 < *(int *)(iVar14 + 0xc));
                                      }
                                    }
                                    else {
                                      uVar4 = uStack_c4;
                                      uVar3 = uStack_c8;
                                      uVar2 = uStack_cc;
                                      uVar1 = uStack_d0;
                                      uVar24 = uStack_d4;
                                      uVar21 = uStack_d8;
                                      uVar10 = uStack_dc;
                                      uVar8 = uStack_e0;
                                      uVar25 = *(undefined4 *)(iVar14 + 8);
                                      uVar12 = *(undefined4 *)(iVar14 + 0xc);
                                      iVar14 = **(int **)(*piVar23 + 0x5c);
                                      if (iVar14 == 0) {
                                        func_0x014388e4();
                                      }
                                      func_0x02e64460(iVar14,uVar25,uVar12,uVar3,uVar8,uVar10,uVar21
                                                      ,uVar24,uVar1,uVar2,uVar3,uVar4,1,0,0,0);
                                      piVar23 = *(int **)(_UNK_01af5e6c + 0x1af5a5c);
                                    }
                                    iVar6 = iVar6 + 1;
                                  }
                                  if (*(int *)(**(int **)(_UNK_01af5e70 + 0x1af5a70) + 0x74) == 0) {
                                    func_0x014387a4();
                                  }
                                  iVar6 = func_0x0202346c(0);
                                  uVar8 = func_0x01524ffc(puVar20,0);
                                  if (iVar6 == 0) {
                                    func_0x014388e4();
                                  }
                                  func_0x020257a4(iVar6,0x2f3,uVar8,0,0,0,0);
                                  if (*(int *)(**(int **)(_UNK_01af5e74 + 0x1af5aec) + 0x74) == 0) {
                                    func_0x014387a4();
                                  }
                                  iVar6 = func_0x014e9518(**(undefined4 **)
                                                            (_UNK_01af5e78 + 0x1af5b08));
                                  piVar23 = *(int **)(_UNK_01af5e7c + 0x1af5b1c);
                                  iVar14 = *piVar23;
                                  if (*(int *)(iVar14 + 0x74) == 0) {
                                    func_0x014387a4();
                                    iVar14 = *piVar23;
                                  }
                                  uVar8 = *(undefined4 *)(*(int *)(iVar14 + 0x5c) + 0x1ac);
                                  piVar23 = (int *)func_0x014386f0(**(undefined4 **)
                                                                     (_UNK_01af5e80 + 0x1af5b40),1);
                                  if (piVar23 == (int *)0x0) {
                                    func_0x014388e4();
                                  }
                                  iVar14 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar23 + 0x20));
                                  if (iVar14 == 0) {
                                    uVar10 = func_0x01438904();
                                    func_0x01438790(uVar10,0);
                                  }
                                  if (piVar23[3] == 0) {
                                    func_0x014388e8();
                                  }
                                  piVar23[4] = iVar5;
                                  func_0x014385cc(piVar23 + 4,iVar5);
                                  if (iVar6 == 0) {
                                    func_0x014388e4();
                                  }
                                  func_0x029901b4(iVar6,uVar8,piVar23,0);
                                  if (*(int *)(**(int **)(_UNK_01af5e84 + 0x1af5bcc) + 0x74) == 0) {
                                    func_0x014387a4();
                                  }
                                  iVar6 = func_0x014e96a8(**(undefined4 **)
                                                            (_UNK_01af5e88 + 0x1af5be8));
                                  if (*(int *)(**(int **)(_UNK_01af5e8c + 0x1af5bfc) + 0x74) == 0) {
                                    func_0x014387a4();
                                  }
                                  iVar14 = func_0x014e9518(**(undefined4 **)
                                                             (_UNK_01af5e90 + 0x1af5c18));
                                  if (iVar14 == 0) {
                                    func_0x014388e4();
                                  }
                                  uVar4 = uStack_c4;
                                  uVar3 = uStack_c8;
                                  uVar2 = uStack_cc;
                                  uVar1 = uStack_d0;
                                  uVar24 = uStack_d4;
                                  uVar21 = uStack_d8;
                                  uVar10 = uStack_dc;
                                  uVar8 = uStack_e0;
                                  uVar12 = *(undefined4 *)(iVar14 + 0x10);
                                  piVar23 = *(int **)(_UNK_01af5e94 + 0x1af5c70);
                                  iVar14 = *piVar23;
                                  if (*(int *)(iVar14 + 0x74) == 0) {
                                    func_0x014387a4();
                                    iVar14 = *piVar23;
                                  }
                                  iVar15 = *(int *)(*(int *)(iVar14 + 0x5c) + 0xc);
                                  if (iVar15 == 0) {
                                    if (*(int *)(iVar14 + 0x74) == 0) {
                                      func_0x014387a4();
                                      iVar14 = *piVar23;
                                    }
                                    uVar25 = **(undefined4 **)(iVar14 + 0x5c);
                                    iVar15 = func_0x014388d4(**(undefined4 **)
                                                               (_UNK_01af5e98 + 0x1af5cc4));
                                    func_0x0152e3ec(iVar15,uVar25,
                                                    **(undefined4 **)(_UNK_01af5e9c + 0x1af5ce4),0);
                                    piVar23 = (int *)(*(int *)(*piVar23 + 0x5c) + 0xc);
                                    *piVar23 = iVar15;
                                    func_0x014385cc(piVar23,iVar15);
                                  }
                                  if (iVar6 == 0) {
                                    func_0x014388e4();
                                  }
                                  func_0x02b75870(iVar6,iVar5,uVar12,0,uVar8,uVar10,uVar21,uVar24,
                                                  uVar1,uVar2,uVar3,uVar4,iVar15,0,0);
                                  iVar5 = FUN_01ae99ac(uVar7);
                                  if (iVar5 == 0) {
                                    func_0x014388e4();
                                  }
                                  func_0x026bfecc(iVar5,0,0);
                                  FUN_01af42e4(uVar7);
                                  return;
                                }
                                iVar9 = iVar9 + 1;
                              }
                            }
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < *(int *)(iVar5 + 0xc));
                        }
                      }
                      else {
                        FUN_01aeb634(uVar7,iVar15);
                      }
                    }
                  }
                  else {
                    iVar5 = func_0x029540a4(0x2d1c,0);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    func_0x02869298(iVar5,uVar7,iVar15,0);
                  }
                  return;
                }
              }
              uVar7 = *(undefined4 *)(iVar15 + 0x10);
              uVar8 = *(undefined4 *)(iVar17 + 0xc);
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02025168(iVar9,uVar8,uVar7,0x78);
              func_0x02028d38(&uStack_48,0xea,0);
              iVar6 = *piVar23;
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar6 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_01af42e4(param_1);
              if (*(int *)(**(int **)(iRam01af50a0 + 0x1af4de4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iStack_5c = func_0x014e96a8(**(undefined4 **)(iRam01af50a4 + 0x1af4e00));
              if (*(int *)(**(int **)(iRam01af50a8 + 0x1af4e14) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(iRam01af50ac + 0x1af4e30));
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = uStack_44;
              uVar7 = uStack_48;
              uStack_60 = *puStack_58;
              uStack_64 = puStack_58[1];
              uVar21 = puStack_58[2];
              uVar24 = puStack_58[3];
              uStack_68 = *puStack_54;
              puStack_58 = (undefined4 *)puStack_54[1];
              puStack_54 = *(undefined4 **)(iVar6 + 0x10);
              uVar10 = func_0x014388d4(**(undefined4 **)(iRam01af50b0 + 0x1af4e88));
              func_0x0152e3ec(uVar10,iVar5,**(undefined4 **)(iRam01af50b4 + 0x1af4eb0),0);
              iVar5 = iStack_5c;
              if (iStack_5c == 0) {
                func_0x014388e4();
              }
              uStack_90 = uStack_60;
              uStack_8c = uStack_64;
              uStack_80 = uStack_68;
              uStack_7c = puStack_58;
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_98 = uVar7;
              uStack_94 = uVar8;
              uStack_88 = uVar21;
              uStack_84 = uVar24;
              uStack_78 = uVar10;
              func_0x02b75870(iVar5,iStack_50,puStack_54,1);
            }
          }
        }
      }
    }
  }
  else {
    iVar5 = func_0x029540a4(0xa4f9,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar5,param_1,param_2,0);
  }
  return;
}

