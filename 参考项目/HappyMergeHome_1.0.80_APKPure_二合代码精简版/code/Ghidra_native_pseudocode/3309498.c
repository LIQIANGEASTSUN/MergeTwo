
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03319498(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  int *piVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar13 = (char *)(_UNK_03319eb0 + 0x33194b8);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03319eb4 + 0x33194cc));
    func_0x01438628(*(undefined4 *)(_UNK_03319eb8 + 0x33194d8));
    func_0x01438628(*(undefined4 *)(_UNK_03319ebc + 0x33194e4));
    func_0x01438628(*(undefined4 *)(_UNK_03319ec0 + 0x33194f0));
    func_0x01438628(*(undefined4 *)(_UNK_03319ec4 + 0x33194fc));
    func_0x01438628(*(undefined4 *)(_UNK_03319ec8 + 0x3319508));
    func_0x01438628(*(undefined4 *)(_UNK_03319ecc + 0x3319514));
    func_0x01438628(*(undefined4 *)(_UNK_03319ed0 + 0x3319520));
    func_0x01438628(*(undefined4 *)(_UNK_03319ed4 + 0x331952c));
    func_0x01438628(*(undefined4 *)(_UNK_03319ed8 + 0x3319538));
    func_0x01438628(*(undefined4 *)(_UNK_03319edc + 0x3319544));
    func_0x01438628(*(undefined4 *)(_UNK_03319ee0 + 0x3319550));
    func_0x01438628(*(undefined4 *)(_UNK_03319ee4 + 0x331955c));
    func_0x01438628(*(undefined4 *)(_UNK_03319ee8 + 0x3319568));
    func_0x01438628(*(undefined4 *)(_UNK_03319eec + 0x3319574));
    func_0x01438628(*(undefined4 *)(_UNK_03319ef0 + 0x3319580));
    func_0x01438628(*(undefined4 *)(_UNK_03319ef4 + 0x331958c));
    func_0x01438628(*(undefined4 *)(_UNK_03319ef8 + 0x3319598));
    func_0x01438628(*(undefined4 *)(_UNK_03319efc + 0x33195a4));
    func_0x01438628(*(undefined4 *)(_UNK_03319f00 + 0x33195b0));
    func_0x01438628(*(undefined4 *)(_UNK_03319f04 + 0x33195bc));
    func_0x01438628(*(undefined4 *)(_UNK_03319f08 + 0x33195c8));
    func_0x01438628(*(undefined4 *)(_UNK_03319f0c + 0x33195d4));
    func_0x01438628(*(undefined4 *)(_UNK_03319f10 + 0x33195e0));
    func_0x01438628(*(undefined4 *)(_UNK_03319f14 + 0x33195ec));
    func_0x01438628(*(undefined4 *)(_UNK_03319f18 + 0x33195f8));
    func_0x01438628(*(undefined4 *)(_UNK_03319f1c + 0x3319604));
    func_0x01438628(*(undefined4 *)(_UNK_03319f20 + 0x3319610));
    func_0x01438628(*(undefined4 *)(_UNK_03319f24 + 0x331961c));
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
  iVar6 = func_0x02953fd4(0x8543,0);
  if (iVar6 == 0) {
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_03319f28 + 0x3319690));
    func_0x051b0d14(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    *(undefined4 *)(iVar6 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar6 + 0x10),param_1);
    iVar14 = *(int *)(iVar6 + 8);
    iVar7 = FUN_033180ac(param_1);
    if (iVar7 <= iVar14) {
      piVar17 = *(int **)(_UNK_03319f2c + 0x33196e8);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar21 = *(undefined4 **)(_UNK_03319f30 + 0x3319704);
      iVar7 = func_0x04e4a028(*puVar21);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      piVar19 = *(int **)(_UNK_03319f34 + 0x3319724);
      iVar14 = *(int *)(iVar7 + 0x30);
      iVar7 = *piVar19;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar19;
      }
      iVar15 = *(int *)(*(int *)(iVar7 + 0x5c) + 4);
      if (iVar15 == 0) {
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar19;
        }
        uVar18 = **(undefined4 **)(iVar7 + 0x5c);
        iVar15 = func_0x014388d4(**(undefined4 **)(_UNK_03319f38 + 0x3319774));
        func_0x03a062d0(iVar15,uVar18,**(undefined4 **)(_UNK_03319f3c + 0x3319794),0);
        piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 4);
        *piVar19 = iVar15;
        func_0x014385cc(piVar19,iVar15);
      }
      if (iVar14 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04cfe1c0(iVar14,iVar15,**(undefined4 **)(_UNK_03319f40 + 0x33197d0));
      if (iVar7 != 0) {
        iVar14 = func_0x014388d4(**(undefined4 **)(_UNK_03319f44 + 0x33197f0));
        func_0x04cfd1b4(iVar14,**(undefined4 **)(_UNK_03319f48 + 0x3319804));
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar15 = func_0x04e4a028(*puVar21);
        if (iVar15 == 0) {
          func_0x014388e4();
        }
        iVar16 = *(int *)(iVar15 + 0x2c);
        iVar15 = 0;
        puVar21 = *(undefined4 **)(_UNK_03319f4c + 0x331985c);
        puVar22 = *(undefined4 **)(_UNK_03319f50 + 0x3319864);
        while( true ) {
          if (iVar16 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar16 + 0xc) <= iVar15) break;
          iVar20 = *(int *)(iVar7 + 0x14);
          iVar8 = func_0x04cfd760(iVar16,iVar15,*puVar21);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar18 = *(undefined4 *)(iVar8 + 8);
          if (iVar20 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x04cd2d7c(iVar20,uVar18,*puVar22);
          if (iVar8 != 0) {
            uVar18 = func_0x04cfd760(iVar16,iVar15,*puVar21);
            if (iVar14 == 0) {
              func_0x014388e4();
            }
            iVar8 = *(int *)(iVar14 + 8);
            uVar23 = *(uint *)(iVar14 + 0xc);
            piVar17 = *(int **)(_UNK_03319f54 + 0x331990c);
            *(int *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) + 1;
            iVar20 = *piVar17;
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (uVar23 < *(uint *)(iVar8 + 0xc)) {
              *(uint *)(iVar14 + 0xc) = uVar23 + 1;
              puVar22 = (undefined4 *)(iVar8 + uVar23 * 4 + 0x10);
              *puVar22 = uVar18;
              func_0x014385cc(puVar22,uVar18);
            }
            else {
              func_0x04cfda38(iVar14,uVar18,
                              *(undefined4 *)(*(int *)(*(int *)(iVar20 + 0x10) + 0x60) + 0x38));
            }
            puVar22 = *(undefined4 **)(_UNK_03319f58 + 0x331996c);
          }
          iVar15 = iVar15 + 1;
        }
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar6 + 8);
        if (iVar14 == 0) {
          func_0x014388e4();
        }
        if (iVar7 < *(int *)(iVar14 + 0xc)) {
          iVar7 = func_0x04cfd760(iVar14,*(undefined4 *)(iVar6 + 8),*puVar21);
          piVar17 = (int *)(iVar6 + 0xc);
          *piVar17 = iVar7;
          func_0x014385cc(piVar17,iVar7);
          if (*piVar17 != 0) {
            iVar7 = *(int *)(*piVar17 + 0x14);
            if (iVar7 == 2) {
              if (*(int *)(**(int **)(_UNK_03319f8c + 0x3319d70) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x0202346c(0);
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 8);
              uVar18 = func_0x0515c4b0(&uStack_4c,0);
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              piVar19 = *(int **)(iVar7 + 0x10);
              if (piVar19 == (int *)0x0) {
                func_0x014388e4();
              }
              uVar9 = (**(code **)(*piVar19 + 0xd8))(piVar19,*(undefined4 *)(*piVar19 + 0xdc));
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x020257a4(iVar6,0x220,uVar18,uVar9,0,0,0);
              if (*(int *)(**(int **)(_UNK_03319f90 + 0x3319e3c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03319f94 + 0x3319e58));
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar18 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x02aac608(iVar6,uVar18,**(undefined4 **)(_UNK_03319f98 + 0x3319e94),0,0);
            }
            else if (iVar7 == 1) {
              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_03319f5c + 0x33199ec));
              func_0x04cfd1b4(iVar7,**(undefined4 **)(_UNK_03319f60 + 0x3319a00));
              iVar14 = 0;
              puVar21 = *(undefined4 **)(_UNK_03319f64 + 0x3319a18);
              while( true ) {
                iVar15 = *piVar17;
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                iVar15 = *(int *)(iVar15 + 0xc);
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar15 + 0xc) <= iVar14) break;
                iVar15 = *piVar17;
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                iVar15 = *(int *)(iVar15 + 0xc);
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                uVar18 = func_0x04cd26d0(iVar15,iVar14,*puVar21);
                iVar15 = *piVar17;
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                iVar15 = *(int *)(iVar15 + 0x10);
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                uVar9 = func_0x04cd26d0(iVar15,iVar14,*puVar21);
                uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_03319f68 + 0x3319ab8));
                func_0x02ca3c70(uVar10,uVar18,uVar9,0,0);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar16 = *(int *)(iVar7 + 8);
                uVar23 = *(uint *)(iVar7 + 0xc);
                piVar19 = *(int **)(_UNK_03319f6c + 0x3319b08);
                *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
                iVar15 = *piVar19;
                if (iVar16 == 0) {
                  func_0x014388e4();
                }
                if (uVar23 < *(uint *)(iVar16 + 0xc)) {
                  *(uint *)(iVar7 + 0xc) = uVar23 + 1;
                  puVar22 = (undefined4 *)(iVar16 + uVar23 * 4 + 0x10);
                  *puVar22 = uVar10;
                  func_0x014385cc(puVar22,uVar10);
                }
                else {
                  func_0x04cfda38(iVar7,uVar10,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
                }
                iVar14 = iVar14 + 1;
              }
              if (*(int *)(**(int **)(_UNK_03319f70 + 0x3319b6c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar15 = func_0x0202346c(0);
              iVar16 = *piVar17;
              iVar14 = iVar16;
              if (iVar16 == 0) {
                func_0x014388e4();
                iVar14 = *piVar17;
                if (iVar14 == 0) {
                  func_0x014388e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              uVar18 = *(undefined4 *)(iVar14 + 0x10);
              uVar9 = *(undefined4 *)(iVar16 + 0xc);
              if (iVar15 == 0) {
                func_0x014388e4();
              }
              func_0x02025168(iVar15,uVar9,uVar18,0x46,0);
              func_0x02028d38(&uStack_48,0x69,0);
              iVar14 = *piVar17;
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar14 + 8);
              uStack_44 = func_0x0515c4b0(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_03318118(param_1);
              if (*(int *)(**(int **)(_UNK_03319f74 + 0x3319c34) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar14 = func_0x03b2c734(**(undefined4 **)(_UNK_03319f78 + 0x3319c50));
              if (*(int *)(**(int **)(_UNK_03319f7c + 0x3319c64) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar15 = func_0x04e4a028(**(undefined4 **)(_UNK_03319f80 + 0x3319c80));
              if (iVar15 == 0) {
                func_0x014388e4();
              }
              uVar5 = uStack_2c;
              uVar4 = uStack_30;
              uVar3 = uStack_34;
              uVar2 = uStack_38;
              uVar1 = uStack_3c;
              uVar10 = uStack_40;
              uVar9 = uStack_44;
              uVar18 = uStack_48;
              uVar11 = *(undefined4 *)(iVar15 + 0x10);
              uVar12 = func_0x014388d4(**(undefined4 **)(_UNK_03319f84 + 0x3319cd4));
              func_0x05096384(uVar12,iVar6,**(undefined4 **)(_UNK_03319f88 + 0x3319cf8),0);
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              func_0x02b75870(iVar14,iVar7,uVar11,1,uVar18,uVar9,uVar10,uVar1,uVar2,uVar3,uVar4,
                              uVar5,uVar12,0,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar6 = func_0x029540a4(0x8543,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar6,param_1,param_2,0);
  }
  return;
}

