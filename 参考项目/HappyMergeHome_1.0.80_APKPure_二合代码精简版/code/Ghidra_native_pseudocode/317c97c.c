
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0318c97c(undefined4 param_1,undefined4 param_2)

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
  
  pcVar13 = (char *)(_UNK_0318d394 + 0x318c99c);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0318d398 + 0x318c9b0));
    func_0x01438628(*(undefined4 *)(_UNK_0318d39c + 0x318c9bc));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3a0 + 0x318c9c8));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3a4 + 0x318c9d4));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3a8 + 0x318c9e0));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3ac + 0x318c9ec));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3b0 + 0x318c9f8));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3b4 + 0x318ca04));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3b8 + 0x318ca10));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3bc + 0x318ca1c));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3c0 + 0x318ca28));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3c4 + 0x318ca34));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3c8 + 0x318ca40));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3cc + 0x318ca4c));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3d0 + 0x318ca58));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3d4 + 0x318ca64));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3d8 + 0x318ca70));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3dc + 0x318ca7c));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3e0 + 0x318ca88));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3e4 + 0x318ca94));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3e8 + 0x318caa0));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3ec + 0x318caac));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3f0 + 0x318cab8));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3f4 + 0x318cac4));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3f8 + 0x318cad0));
    func_0x01438628(*(undefined4 *)(_UNK_0318d3fc + 0x318cadc));
    func_0x01438628(*(undefined4 *)(_UNK_0318d400 + 0x318cae8));
    func_0x01438628(*(undefined4 *)(_UNK_0318d404 + 0x318caf4));
    func_0x01438628(*(undefined4 *)(_UNK_0318d408 + 0x318cb00));
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
  iVar6 = func_0x02953fd4(0x7bc1,0);
  if (iVar6 == 0) {
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_0318d40c + 0x318cb74));
    func_0x0318eae8(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    *(undefined4 *)(iVar6 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar6 + 0x10),param_1);
    iVar14 = *(int *)(iVar6 + 8);
    iVar7 = FUN_0318aae8(param_1);
    if (iVar7 <= iVar14) {
      piVar17 = *(int **)(_UNK_0318d410 + 0x318cbcc);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar21 = *(undefined4 **)(_UNK_0318d414 + 0x318cbe8);
      iVar7 = func_0x04e4a028(*puVar21);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      piVar19 = *(int **)(_UNK_0318d418 + 0x318cc08);
      iVar14 = *(int *)(iVar7 + 0x34);
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
        iVar15 = func_0x014388d4(**(undefined4 **)(_UNK_0318d41c + 0x318cc58));
        func_0x03a062d0(iVar15,uVar18,**(undefined4 **)(_UNK_0318d420 + 0x318cc78),0);
        piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 4);
        *piVar19 = iVar15;
        func_0x014385cc(piVar19,iVar15);
      }
      if (iVar14 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04cfe1c0(iVar14,iVar15,**(undefined4 **)(_UNK_0318d424 + 0x318ccb4));
      if (iVar7 != 0) {
        iVar14 = func_0x014388d4(**(undefined4 **)(_UNK_0318d428 + 0x318ccd4));
        func_0x04cfd1b4(iVar14,**(undefined4 **)(_UNK_0318d42c + 0x318cce8));
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar15 = func_0x04e4a028(*puVar21);
        if (iVar15 == 0) {
          func_0x014388e4();
        }
        iVar16 = *(int *)(iVar15 + 0x38);
        iVar15 = 0;
        puVar21 = *(undefined4 **)(_UNK_0318d430 + 0x318cd40);
        puVar22 = *(undefined4 **)(_UNK_0318d434 + 0x318cd48);
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
            piVar17 = *(int **)(_UNK_0318d438 + 0x318cdf0);
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
            puVar22 = *(undefined4 **)(_UNK_0318d43c + 0x318ce50);
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
              if (*(int *)(**(int **)(_UNK_0318d470 + 0x318d254) + 0x74) == 0) {
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
              if (*(int *)(**(int **)(_UNK_0318d474 + 0x318d320) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0318d478 + 0x318d33c));
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar18 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x02aac608(iVar6,uVar18,**(undefined4 **)(_UNK_0318d47c + 0x318d378),0,0);
            }
            else if (iVar7 == 1) {
              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_0318d440 + 0x318ced0));
              func_0x04cfd1b4(iVar7,**(undefined4 **)(_UNK_0318d444 + 0x318cee4));
              iVar14 = 0;
              puVar21 = *(undefined4 **)(_UNK_0318d448 + 0x318cefc);
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
                uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_0318d44c + 0x318cf9c));
                func_0x02ca3c70(uVar10,uVar18,uVar9,0,0);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar16 = *(int *)(iVar7 + 8);
                uVar23 = *(uint *)(iVar7 + 0xc);
                piVar19 = *(int **)(_UNK_0318d450 + 0x318cfec);
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
              if (*(int *)(**(int **)(_UNK_0318d454 + 0x318d050) + 0x74) == 0) {
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
              FUN_0318ab54(param_1);
              if (*(int *)(**(int **)(_UNK_0318d458 + 0x318d118) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar14 = func_0x03b2c734(**(undefined4 **)(_UNK_0318d45c + 0x318d134));
              if (*(int *)(**(int **)(_UNK_0318d460 + 0x318d148) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar15 = func_0x04e4a028(**(undefined4 **)(_UNK_0318d464 + 0x318d164));
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
              uVar12 = func_0x014388d4(**(undefined4 **)(_UNK_0318d468 + 0x318d1b8));
              func_0x05096384(uVar12,iVar6,**(undefined4 **)(_UNK_0318d46c + 0x318d1dc),0);
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
    iVar6 = func_0x029540a4(0x7bc1,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar6,param_1,param_2,0);
  }
  return;
}

