
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02fa4f84(undefined4 param_1,undefined4 param_2)

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
  
  pcVar13 = (char *)(_UNK_02fa5964 + 0x2fa4fa4);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa5968 + 0x2fa4fb8));
    func_0x01438628(*(undefined4 *)(_UNK_02fa596c + 0x2fa4fc4));
    func_0x01438628(*(undefined4 *)(_UNK_02fa5970 + 0x2fa4fd0));
    func_0x01438628(*(undefined4 *)(_UNK_02fa5974 + 0x2fa4fdc));
    func_0x01438628(*(undefined4 *)(_UNK_02fa5978 + 0x2fa4fe8));
    func_0x01438628(*(undefined4 *)(_UNK_02fa597c + 0x2fa4ff4));
    func_0x01438628(*(undefined4 *)(_UNK_02fa5980 + 0x2fa5000));
    func_0x01438628(*(undefined4 *)(_UNK_02fa5984 + 0x2fa500c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa5988 + 0x2fa5018));
    func_0x01438628(*(undefined4 *)(_UNK_02fa598c + 0x2fa5024));
    func_0x01438628(*(undefined4 *)(_UNK_02fa5990 + 0x2fa5030));
    func_0x01438628(*(undefined4 *)(_UNK_02fa5994 + 0x2fa503c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa5998 + 0x2fa5048));
    func_0x01438628(*(undefined4 *)(_UNK_02fa599c + 0x2fa5054));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59a0 + 0x2fa5060));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59a4 + 0x2fa506c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59a8 + 0x2fa5078));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59ac + 0x2fa5084));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59b0 + 0x2fa5090));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59b4 + 0x2fa509c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59b8 + 0x2fa50a8));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59bc + 0x2fa50b4));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59c0 + 0x2fa50c0));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59c4 + 0x2fa50cc));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59c8 + 0x2fa50d8));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59cc + 0x2fa50e4));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59d0 + 0x2fa50f0));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59d4 + 0x2fa50fc));
    func_0x01438628(*(undefined4 *)(_UNK_02fa59d8 + 0x2fa5108));
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
  iVar6 = func_0x02953fd4(0x6fa7,0);
  if (iVar6 == 0) {
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02fa59dc + 0x2fa517c));
    func_0x02fa6f48(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    *(undefined4 *)(iVar6 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar6 + 0x10),param_1);
    iVar14 = *(int *)(iVar6 + 8);
    iVar7 = FUN_02fa2cc0(param_1);
    if (iVar7 <= iVar14) {
      piVar17 = *(int **)(_UNK_02fa59e0 + 0x2fa51d4);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar21 = *(undefined4 **)(_UNK_02fa59e4 + 0x2fa51f0);
      iVar7 = func_0x04e4a028(*puVar21);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      piVar19 = *(int **)(_UNK_02fa59e8 + 0x2fa5210);
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
        iVar15 = func_0x014388d4(**(undefined4 **)(_UNK_02fa59ec + 0x2fa5260));
        func_0x03a062d0(iVar15,uVar18,**(undefined4 **)(_UNK_02fa59f0 + 0x2fa5280),0);
        piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 4);
        *piVar19 = iVar15;
        func_0x014385cc(piVar19,iVar15);
      }
      if (iVar14 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04cfe1c0(iVar14,iVar15,**(undefined4 **)(_UNK_02fa59f4 + 0x2fa52bc));
      if (iVar7 != 0) {
        iVar14 = func_0x014388d4(**(undefined4 **)(_UNK_02fa59f8 + 0x2fa52dc));
        func_0x04cfd1b4(iVar14,**(undefined4 **)(_UNK_02fa59fc + 0x2fa52f0));
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar15 = func_0x04e4a028(*puVar21);
        if (iVar15 == 0) {
          func_0x014388e4();
        }
        iVar16 = *(int *)(iVar15 + 0x34);
        iVar15 = 0;
        puVar21 = *(undefined4 **)(_UNK_02fa5a00 + 0x2fa5348);
        puVar22 = *(undefined4 **)(_UNK_02fa5a04 + 0x2fa5350);
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
            piVar17 = *(int **)(_UNK_02fa5a08 + 0x2fa53f8);
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
            puVar22 = *(undefined4 **)(_UNK_02fa5a0c + 0x2fa5458);
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
              if (*(int *)(**(int **)(_UNK_02fa5a40 + 0x2fa585c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x0202346c(0);
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 0x18);
              uVar18 = func_0x01524ffc(&uStack_4c,0);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x020257a4(iVar6,0x2ff,uVar18,0,0,0,0);
              if (*(int *)(**(int **)(_UNK_02fa5a44 + 0x2fa58f0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa5a48 + 0x2fa590c));
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar18 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x02aac608(iVar6,uVar18,**(undefined4 **)(_UNK_02fa5a4c + 0x2fa5948),0,0);
            }
            else if (iVar7 == 1) {
              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02fa5a10 + 0x2fa54d8));
              func_0x04cfd1b4(iVar7,**(undefined4 **)(_UNK_02fa5a14 + 0x2fa54ec));
              iVar14 = 0;
              puVar21 = *(undefined4 **)(_UNK_02fa5a18 + 0x2fa5504);
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
                uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_02fa5a1c + 0x2fa55a4));
                func_0x02ca3c70(uVar10,uVar18,uVar9,0,0);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar16 = *(int *)(iVar7 + 8);
                uVar23 = *(uint *)(iVar7 + 0xc);
                piVar19 = *(int **)(_UNK_02fa5a20 + 0x2fa55f4);
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
              if (*(int *)(**(int **)(_UNK_02fa5a24 + 0x2fa5658) + 0x74) == 0) {
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
              func_0x02025168(iVar15,uVar9,uVar18,0x7a,0);
              func_0x02028d38(&uStack_48,0xf5,0);
              iVar14 = *piVar17;
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar14 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_02fa2d2c(param_1);
              if (*(int *)(**(int **)(_UNK_02fa5a28 + 0x2fa5720) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar14 = func_0x03b2c734(**(undefined4 **)(_UNK_02fa5a2c + 0x2fa573c));
              if (*(int *)(**(int **)(_UNK_02fa5a30 + 0x2fa5750) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar15 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa5a34 + 0x2fa576c));
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
              uVar12 = func_0x014388d4(**(undefined4 **)(_UNK_02fa5a38 + 0x2fa57c0));
              func_0x0152e3ec(uVar12,iVar6,**(undefined4 **)(_UNK_02fa5a3c + 0x2fa57e4),0);
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
    iVar6 = func_0x029540a4(0x6fa7,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar6,param_1,param_2,0);
  }
  return;
}

