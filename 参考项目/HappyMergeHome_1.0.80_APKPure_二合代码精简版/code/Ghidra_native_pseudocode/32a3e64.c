
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032b3e64(undefined4 param_1,undefined4 param_2)

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
  
  pcVar13 = (char *)(_UNK_032b487c + 0x32b3e84);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b4880 + 0x32b3e98));
    func_0x01438628(*(undefined4 *)(_UNK_032b4884 + 0x32b3ea4));
    func_0x01438628(*(undefined4 *)(_UNK_032b4888 + 0x32b3eb0));
    func_0x01438628(*(undefined4 *)(_UNK_032b488c + 0x32b3ebc));
    func_0x01438628(*(undefined4 *)(_UNK_032b4890 + 0x32b3ec8));
    func_0x01438628(*(undefined4 *)(_UNK_032b4894 + 0x32b3ed4));
    func_0x01438628(*(undefined4 *)(_UNK_032b4898 + 0x32b3ee0));
    func_0x01438628(*(undefined4 *)(_UNK_032b489c + 0x32b3eec));
    func_0x01438628(*(undefined4 *)(_UNK_032b48a0 + 0x32b3ef8));
    func_0x01438628(*(undefined4 *)(_UNK_032b48a4 + 0x32b3f04));
    func_0x01438628(*(undefined4 *)(_UNK_032b48a8 + 0x32b3f10));
    func_0x01438628(*(undefined4 *)(_UNK_032b48ac + 0x32b3f1c));
    func_0x01438628(*(undefined4 *)(_UNK_032b48b0 + 0x32b3f28));
    func_0x01438628(*(undefined4 *)(_UNK_032b48b4 + 0x32b3f34));
    func_0x01438628(*(undefined4 *)(_UNK_032b48b8 + 0x32b3f40));
    func_0x01438628(*(undefined4 *)(_UNK_032b48bc + 0x32b3f4c));
    func_0x01438628(*(undefined4 *)(_UNK_032b48c0 + 0x32b3f58));
    func_0x01438628(*(undefined4 *)(_UNK_032b48c4 + 0x32b3f64));
    func_0x01438628(*(undefined4 *)(_UNK_032b48c8 + 0x32b3f70));
    func_0x01438628(*(undefined4 *)(_UNK_032b48cc + 0x32b3f7c));
    func_0x01438628(*(undefined4 *)(_UNK_032b48d0 + 0x32b3f88));
    func_0x01438628(*(undefined4 *)(_UNK_032b48d4 + 0x32b3f94));
    func_0x01438628(*(undefined4 *)(_UNK_032b48d8 + 0x32b3fa0));
    func_0x01438628(*(undefined4 *)(_UNK_032b48dc + 0x32b3fac));
    func_0x01438628(*(undefined4 *)(_UNK_032b48e0 + 0x32b3fb8));
    func_0x01438628(*(undefined4 *)(_UNK_032b48e4 + 0x32b3fc4));
    func_0x01438628(*(undefined4 *)(_UNK_032b48e8 + 0x32b3fd0));
    func_0x01438628(*(undefined4 *)(_UNK_032b48ec + 0x32b3fdc));
    func_0x01438628(*(undefined4 *)(_UNK_032b48f0 + 0x32b3fe8));
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
  iVar6 = func_0x02953fd4(0x82a6,0);
  if (iVar6 == 0) {
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_032b48f4 + 0x32b405c));
    func_0x032b680c(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    *(undefined4 *)(iVar6 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar6 + 0x10),param_1);
    iVar14 = *(int *)(iVar6 + 8);
    iVar7 = FUN_032b29a0(param_1);
    if (iVar7 <= iVar14) {
      piVar17 = *(int **)(_UNK_032b48f8 + 0x32b40b4);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar21 = *(undefined4 **)(_UNK_032b48fc + 0x32b40d0);
      iVar7 = func_0x04e4a028(*puVar21);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      piVar19 = *(int **)(_UNK_032b4900 + 0x32b40f0);
      iVar14 = *(int *)(iVar7 + 0x2c);
      iVar7 = *piVar19;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar19;
      }
      iVar15 = *(int *)(*(int *)(iVar7 + 0x5c) + 0x10);
      if (iVar15 == 0) {
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar19;
        }
        uVar18 = **(undefined4 **)(iVar7 + 0x5c);
        iVar15 = func_0x014388d4(**(undefined4 **)(_UNK_032b4904 + 0x32b4140));
        func_0x03a062d0(iVar15,uVar18,**(undefined4 **)(_UNK_032b4908 + 0x32b4160),0);
        piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 0x10);
        *piVar19 = iVar15;
        func_0x014385cc(piVar19,iVar15);
      }
      if (iVar14 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04cfe1c0(iVar14,iVar15,**(undefined4 **)(_UNK_032b490c + 0x32b419c));
      if (iVar7 != 0) {
        iVar14 = func_0x014388d4(**(undefined4 **)(_UNK_032b4910 + 0x32b41bc));
        func_0x04cfd1b4(iVar14,**(undefined4 **)(_UNK_032b4914 + 0x32b41d0));
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar15 = func_0x04e4a028(*puVar21);
        if (iVar15 == 0) {
          func_0x014388e4();
        }
        iVar16 = *(int *)(iVar15 + 0x30);
        iVar15 = 0;
        puVar21 = *(undefined4 **)(_UNK_032b4918 + 0x32b4228);
        puVar22 = *(undefined4 **)(_UNK_032b491c + 0x32b4230);
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
            piVar17 = *(int **)(_UNK_032b4920 + 0x32b42d8);
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
            puVar22 = *(undefined4 **)(_UNK_032b4924 + 0x32b4338);
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
              if (*(int *)(**(int **)(_UNK_032b4958 + 0x32b473c) + 0x74) == 0) {
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
              if (*(int *)(**(int **)(_UNK_032b495c + 0x32b4808) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_032b4960 + 0x32b4824));
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar18 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x02aac608(iVar6,uVar18,**(undefined4 **)(_UNK_032b4964 + 0x32b4860),0,0);
            }
            else if (iVar7 == 1) {
              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_032b4928 + 0x32b43b8));
              func_0x04cfd1b4(iVar7,**(undefined4 **)(_UNK_032b492c + 0x32b43cc));
              iVar14 = 0;
              puVar21 = *(undefined4 **)(_UNK_032b4930 + 0x32b43e4);
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
                uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_032b4934 + 0x32b4484));
                func_0x02ca3c70(uVar10,uVar18,uVar9,0,0);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar16 = *(int *)(iVar7 + 8);
                uVar23 = *(uint *)(iVar7 + 0xc);
                piVar19 = *(int **)(_UNK_032b4938 + 0x32b44d4);
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
              if (*(int *)(**(int **)(_UNK_032b493c + 0x32b4538) + 0x74) == 0) {
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
              FUN_032b2a0c(param_1);
              if (*(int *)(**(int **)(_UNK_032b4940 + 0x32b4600) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar14 = func_0x03b2c734(**(undefined4 **)(_UNK_032b4944 + 0x32b461c));
              if (*(int *)(**(int **)(_UNK_032b4948 + 0x32b4630) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar15 = func_0x04e4a028(**(undefined4 **)(_UNK_032b494c + 0x32b464c));
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
              uVar12 = func_0x014388d4(**(undefined4 **)(_UNK_032b4950 + 0x32b46a0));
              func_0x05096384(uVar12,iVar6,**(undefined4 **)(_UNK_032b4954 + 0x32b46c4),0);
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
    iVar6 = func_0x029540a4(0x82a6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar6,param_1,param_2,0);
  }
  return;
}

