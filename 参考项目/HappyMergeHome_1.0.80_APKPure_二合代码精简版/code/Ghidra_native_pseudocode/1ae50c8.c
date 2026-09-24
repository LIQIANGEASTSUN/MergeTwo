
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01af50c8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 extraout_r1;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int *piVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar12 = (char *)(_UNK_01af5d9c + 0x1af50e8);
  if (*pcVar12 == '\0') {
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
    *pcVar12 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar7 = func_0x02953fd4(0x2d1c,0);
  if (iVar7 == 0) {
    if (((param_2 != 0) && (iVar7 = FUN_01ae99ac(param_1), iVar7 != 0)) &&
       (iVar7 = FUN_01ae4df4(param_1), iVar7 != 0)) {
      iVar7 = FUN_01aea86c(param_1);
      if ((iVar7 == 0) ||
         (iVar13 = *(int *)(param_2 + 8), iVar7 = FUN_01aea86c(param_1), iVar13 != iVar7)) {
        if (*(int *)(**(int **)(_UNK_01af5e20 + 0x1af5340) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01af5e24 + 0x1af535c));
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x50);
        if ((iVar7 != 0) && (0 < *(int *)(iVar7 + 0xc))) {
          iVar13 = 0;
          puVar17 = *(undefined4 **)(_UNK_01af5e28 + 0x1af53a0);
          do {
            iVar8 = func_0x0152983c(iVar7,iVar13,*puVar17);
            if (iVar8 != 0) {
              iVar8 = func_0x0152983c(iVar7,iVar13,*puVar17);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar8 + 0x18) != 0) {
                iVar8 = func_0x0152983c(iVar7,iVar13,*puVar17);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar8 + 0x18) == *(int *)(param_2 + 8)) {
                  if (*(int *)(**(int **)(_UNK_01af5e2c + 0x1af5600) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar8 = func_0x0202346c(0);
                  uVar15 = func_0x01524ffc((int *)(param_2 + 8),0);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  func_0x020257a4(iVar8,0x34d,uVar15,0,0,0,0);
                  uVar15 = func_0x0152983c(iVar7,iVar13,*puVar17);
                  func_0x01af5ea0(param_1,uVar15);
                  return;
                }
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(iVar7 + 0xc));
        }
        iVar7 = FUN_01af3750(param_1);
        if ((iVar7 != 0) && (0 < *(int *)(iVar7 + 0xc))) {
          iVar13 = 0;
          puVar18 = *(undefined4 **)(_UNK_01af5e30 + 0x1af5464);
          puVar17 = *(undefined4 **)(_UNK_01af5e34 + 0x1af546c);
          do {
            iVar8 = func_0x0152983c(iVar7,iVar13,*puVar18);
            if (iVar8 != 0) {
              iVar8 = FUN_01af3ed8(param_1,iVar8);
              iVar14 = 0;
              while( true ) {
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar8 + 0xc) <= iVar14) break;
                iVar9 = func_0x0152983c(iVar8,iVar14,*puVar17);
                if (((iVar9 != 0) && (*(int *)(iVar9 + 0x14) == 2)) &&
                   (*(int *)(iVar9 + 0x18) == *(int *)(param_2 + 8))) {
                  iVar7 = FUN_01ae99ac(param_1);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = *(int *)(iVar7 + 0x18);
                  puVar17 = (undefined4 *)(param_2 + 8);
                  uVar15 = *puVar17;
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = func_0x024f0540(iVar7,uVar15,**(undefined4 **)(_UNK_01af5e38 + 0x1af5548))
                  ;
                  if (iVar7 == 0) {
                    iVar7 = FUN_01ae99ac(param_1);
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = *(int *)(iVar7 + 0x18);
                    uVar15 = *puVar17;
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    func_0x024f10d0(iVar7,uVar15,0,**(undefined4 **)(_UNK_01af5e3c + 0x1af559c));
                  }
                  iVar7 = FUN_01ae99ac(param_1);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = *(int *)(iVar7 + 0x18);
                  uVar15 = *puVar17;
                  if (iVar7 == 0) {
                    func_0x014388e4();
                    iVar13 = func_0x024f05d4(0,uVar15,**(undefined4 **)(_UNK_01af5e44 + 0x1af56a4));
                    iStack_4c = iVar13;
                    func_0x014388e4();
                  }
                  else {
                    iVar13 = func_0x024f05d4(iVar7,uVar15,
                                             **(undefined4 **)(_UNK_01af5e40 + 0x1af55e0));
                    iStack_4c = iVar13;
                  }
                  func_0x024f10d4(iVar7,uVar15,iVar13 + 1,
                                  **(undefined4 **)(_UNK_01af5e48 + 0x1af56cc));
                  iVar7 = FUN_01ae99ac(param_1);
                  if (*(int *)(**(int **)(_UNK_01af5e4c + 0x1af56ec) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar13 = func_0x014e9518(**(undefined4 **)(_UNK_01af5e50 + 0x1af5708));
                  if (iVar13 == 0) {
                    func_0x014388e4();
                  }
                  uVar21 = func_0x026ffbe0(iVar13,0);
                  uVar16 = (undefined4)((ulonglong)uVar21 >> 0x20);
                  uVar15 = uVar16;
                  if (iVar7 == 0) {
                    func_0x014388e4();
                    uVar15 = extraout_r1;
                  }
                  func_0x026bfd40(iVar7,uVar15,(int)uVar21,uVar16,0);
                  iVar7 = FUN_01ae99ac(param_1);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  func_0x026bfe10(iVar7,*(int *)(iVar7 + 0x40) + 1,0);
                  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                  puVar18 = (undefined4 *)((uint)&uStack_48 | 4);
                  uStack_38 = 0;
                  *puVar18 = 0;
                  puVar18[1] = uStack_34;
                  puVar18[2] = uStack_30;
                  puVar18[3] = uStack_2c;
                  iStack_4c = *(int *)(iVar9 + 8);
                  uStack_48 = 0xea;
                  uStack_44 = func_0x01524ffc(&iStack_4c,0);
                  func_0x014385cc(puVar18,uStack_44);
                  uVar15 = *(undefined4 *)(iVar9 + 0xc);
                  uVar16 = *(undefined4 *)(iVar9 + 0x10);
                  if (*(int *)(**(int **)(_UNK_01af5e54 + 0x1af57d0) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x02af43a8(uVar15,uVar16,0);
                  iVar13 = 0;
                  piVar19 = *(int **)(_UNK_01af5e58 + 0x1af5818);
                  while( true ) {
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar7 + 0xc) <= iVar13) break;
                    iVar8 = func_0x0152983c(iVar7,iVar13,
                                            **(undefined4 **)(_UNK_01af5e5c + 0x1af5844));
                    iVar14 = **(int **)(*piVar19 + 0x5c);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    uVar15 = *(undefined4 *)(iVar8 + 8);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = func_0x02e651cc(iVar14,uVar15,0);
                    if ((iVar14 == 0) &&
                       (iVar14 = FUN_01af2778(param_1,*(undefined4 *)(iVar8 + 8)), iVar14 != 0)) {
                      if (0 < *(int *)(iVar8 + 0xc)) {
                        iVar14 = 0;
                        do {
                          iVar9 = FUN_01ae99ac(param_1);
                          if (iVar9 == 0) {
                            func_0x014388e4();
                          }
                          iVar9 = *(int *)(iVar9 + 0x14);
                          uVar15 = *(undefined4 *)(iVar8 + 8);
                          if (iVar9 == 0) {
                            func_0x014388e4();
                          }
                          func_0x024f05ac(iVar9,uVar15,**(undefined4 **)(_UNK_01af5e60 + 0x1af58f4))
                          ;
                          if (*(int *)(**(int **)(_UNK_01af5e64 + 0x1af5908) + 0x74) == 0) {
                            func_0x014387a4();
                          }
                          iVar9 = func_0x0202346c(0);
                          iVar10 = func_0x014388d4(**(undefined4 **)(_UNK_01af5e68 + 0x1af5930));
                          func_0x02025440(iVar10,0);
                          if (iVar10 == 0) {
                            func_0x014388e4();
                            uVar15 = *(undefined4 *)(iVar8 + 8);
                            uRam00000008 = 0x78;
                            func_0x014388e4();
                          }
                          else {
                            uVar15 = *(undefined4 *)(iVar8 + 8);
                            *(undefined4 *)(iVar10 + 8) = 0x78;
                          }
                          *(undefined1 *)(iVar10 + 0x25) = 1;
                          *(undefined4 *)(iVar10 + 0xc) = uVar15;
                          if (iVar9 == 0) {
                            func_0x014388e4();
                          }
                          func_0x02024d08(iVar9,iVar10,1,0);
                          iVar14 = iVar14 + 1;
                        } while (iVar14 < *(int *)(iVar8 + 0xc));
                      }
                    }
                    else {
                      uVar6 = uStack_2c;
                      uVar5 = uStack_30;
                      uVar4 = uStack_34;
                      uVar3 = uStack_38;
                      uVar2 = uStack_3c;
                      uVar1 = uStack_40;
                      uVar16 = uStack_44;
                      uVar15 = uStack_48;
                      uVar20 = *(undefined4 *)(iVar8 + 8);
                      uVar11 = *(undefined4 *)(iVar8 + 0xc);
                      iVar8 = **(int **)(*piVar19 + 0x5c);
                      if (iVar8 == 0) {
                        func_0x014388e4();
                      }
                      func_0x02e64460(iVar8,uVar20,uVar11,uVar5,uVar15,uVar16,uVar1,uVar2,uVar3,
                                      uVar4,uVar5,uVar6,1,0,0,0);
                      piVar19 = *(int **)(_UNK_01af5e6c + 0x1af5a5c);
                    }
                    iVar13 = iVar13 + 1;
                  }
                  if (*(int *)(**(int **)(_UNK_01af5e70 + 0x1af5a70) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar13 = func_0x0202346c(0);
                  uVar15 = func_0x01524ffc(puVar17,0);
                  if (iVar13 == 0) {
                    func_0x014388e4();
                  }
                  func_0x020257a4(iVar13,0x2f3,uVar15,0,0,0,0);
                  if (*(int *)(**(int **)(_UNK_01af5e74 + 0x1af5aec) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar13 = func_0x014e9518(**(undefined4 **)(_UNK_01af5e78 + 0x1af5b08));
                  piVar19 = *(int **)(_UNK_01af5e7c + 0x1af5b1c);
                  iVar8 = *piVar19;
                  if (*(int *)(iVar8 + 0x74) == 0) {
                    func_0x014387a4();
                    iVar8 = *piVar19;
                  }
                  uVar15 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x1ac);
                  piVar19 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01af5e80 + 0x1af5b40),1);
                  if (piVar19 == (int *)0x0) {
                    func_0x014388e4();
                  }
                  iVar8 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar19 + 0x20));
                  if (iVar8 == 0) {
                    uVar16 = func_0x01438904();
                    func_0x01438790(uVar16,0);
                  }
                  if (piVar19[3] == 0) {
                    func_0x014388e8();
                  }
                  piVar19[4] = iVar7;
                  func_0x014385cc(piVar19 + 4,iVar7);
                  if (iVar13 == 0) {
                    func_0x014388e4();
                  }
                  func_0x029901b4(iVar13,uVar15,piVar19,0);
                  if (*(int *)(**(int **)(_UNK_01af5e84 + 0x1af5bcc) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar13 = func_0x014e96a8(**(undefined4 **)(_UNK_01af5e88 + 0x1af5be8));
                  if (*(int *)(**(int **)(_UNK_01af5e8c + 0x1af5bfc) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01af5e90 + 0x1af5c18));
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = uStack_2c;
                  uVar5 = uStack_30;
                  uVar4 = uStack_34;
                  uVar3 = uStack_38;
                  uVar2 = uStack_3c;
                  uVar1 = uStack_40;
                  uVar16 = uStack_44;
                  uVar15 = uStack_48;
                  uVar11 = *(undefined4 *)(iVar8 + 0x10);
                  piVar19 = *(int **)(_UNK_01af5e94 + 0x1af5c70);
                  iVar8 = *piVar19;
                  if (*(int *)(iVar8 + 0x74) == 0) {
                    func_0x014387a4();
                    iVar8 = *piVar19;
                  }
                  iVar14 = *(int *)(*(int *)(iVar8 + 0x5c) + 0xc);
                  if (iVar14 == 0) {
                    if (*(int *)(iVar8 + 0x74) == 0) {
                      func_0x014387a4();
                      iVar8 = *piVar19;
                    }
                    uVar20 = **(undefined4 **)(iVar8 + 0x5c);
                    iVar14 = func_0x014388d4(**(undefined4 **)(_UNK_01af5e98 + 0x1af5cc4));
                    func_0x0152e3ec(iVar14,uVar20,**(undefined4 **)(_UNK_01af5e9c + 0x1af5ce4),0);
                    piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 0xc);
                    *piVar19 = iVar14;
                    func_0x014385cc(piVar19,iVar14);
                  }
                  if (iVar13 == 0) {
                    func_0x014388e4();
                  }
                  func_0x02b75870(iVar13,iVar7,uVar11,0,uVar15,uVar16,uVar1,uVar2,uVar3,uVar4,uVar5,
                                  uVar6,iVar14,0,0);
                  iVar7 = FUN_01ae99ac(param_1);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  func_0x026bfecc(iVar7,0,0);
                  FUN_01af42e4(param_1);
                  return;
                }
                iVar14 = iVar14 + 1;
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(iVar7 + 0xc));
        }
      }
      else {
        FUN_01aeb634(param_1,param_2);
      }
    }
  }
  else {
    iVar7 = func_0x029540a4(0x2d1c,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar7,param_1,param_2,0);
  }
  return;
}

