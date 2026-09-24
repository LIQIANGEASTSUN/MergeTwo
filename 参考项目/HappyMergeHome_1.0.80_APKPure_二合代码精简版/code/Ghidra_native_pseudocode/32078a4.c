
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032178a4(undefined4 param_1,undefined4 param_2)

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
  
  pcVar13 = (char *)(_UNK_03218284 + 0x32178c4);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03218288 + 0x32178d8));
    func_0x01438628(*(undefined4 *)(_UNK_0321828c + 0x32178e4));
    func_0x01438628(*(undefined4 *)(_UNK_03218290 + 0x32178f0));
    func_0x01438628(*(undefined4 *)(_UNK_03218294 + 0x32178fc));
    func_0x01438628(*(undefined4 *)(_UNK_03218298 + 0x3217908));
    func_0x01438628(*(undefined4 *)(_UNK_0321829c + 0x3217914));
    func_0x01438628(*(undefined4 *)(_UNK_032182a0 + 0x3217920));
    func_0x01438628(*(undefined4 *)(_UNK_032182a4 + 0x321792c));
    func_0x01438628(*(undefined4 *)(_UNK_032182a8 + 0x3217938));
    func_0x01438628(*(undefined4 *)(_UNK_032182ac + 0x3217944));
    func_0x01438628(*(undefined4 *)(_UNK_032182b0 + 0x3217950));
    func_0x01438628(*(undefined4 *)(_UNK_032182b4 + 0x321795c));
    func_0x01438628(*(undefined4 *)(_UNK_032182b8 + 0x3217968));
    func_0x01438628(*(undefined4 *)(_UNK_032182bc + 0x3217974));
    func_0x01438628(*(undefined4 *)(_UNK_032182c0 + 0x3217980));
    func_0x01438628(*(undefined4 *)(_UNK_032182c4 + 0x321798c));
    func_0x01438628(*(undefined4 *)(_UNK_032182c8 + 0x3217998));
    func_0x01438628(*(undefined4 *)(_UNK_032182cc + 0x32179a4));
    func_0x01438628(*(undefined4 *)(_UNK_032182d0 + 0x32179b0));
    func_0x01438628(*(undefined4 *)(_UNK_032182d4 + 0x32179bc));
    func_0x01438628(*(undefined4 *)(_UNK_032182d8 + 0x32179c8));
    func_0x01438628(*(undefined4 *)(_UNK_032182dc + 0x32179d4));
    func_0x01438628(*(undefined4 *)(_UNK_032182e0 + 0x32179e0));
    func_0x01438628(*(undefined4 *)(_UNK_032182e4 + 0x32179ec));
    func_0x01438628(*(undefined4 *)(_UNK_032182e8 + 0x32179f8));
    func_0x01438628(*(undefined4 *)(_UNK_032182ec + 0x3217a04));
    func_0x01438628(*(undefined4 *)(_UNK_032182f0 + 0x3217a10));
    func_0x01438628(*(undefined4 *)(_UNK_032182f4 + 0x3217a1c));
    func_0x01438628(*(undefined4 *)(_UNK_032182f8 + 0x3217a28));
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
  iVar6 = func_0x02953fd4(0x7eab,0);
  if (iVar6 == 0) {
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_032182fc + 0x3217a9c));
    func_0x051b0d14(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    *(undefined4 *)(iVar6 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar6 + 0x10),param_1);
    iVar14 = *(int *)(iVar6 + 8);
    iVar7 = FUN_032161dc(param_1);
    if (iVar7 <= iVar14) {
      piVar17 = *(int **)(_UNK_03218300 + 0x3217af4);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar21 = *(undefined4 **)(_UNK_03218304 + 0x3217b10);
      iVar7 = func_0x04e4a028(*puVar21);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      piVar19 = *(int **)(_UNK_03218308 + 0x3217b30);
      iVar14 = *(int *)(iVar7 + 0x2c);
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
        iVar15 = func_0x014388d4(**(undefined4 **)(_UNK_0321830c + 0x3217b80));
        func_0x03a062d0(iVar15,uVar18,**(undefined4 **)(_UNK_03218310 + 0x3217ba0),0);
        piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 4);
        *piVar19 = iVar15;
        func_0x014385cc(piVar19,iVar15);
      }
      if (iVar14 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04cfe1c0(iVar14,iVar15,**(undefined4 **)(_UNK_03218314 + 0x3217bdc));
      if (iVar7 != 0) {
        iVar14 = func_0x014388d4(**(undefined4 **)(_UNK_03218318 + 0x3217bfc));
        func_0x04cfd1b4(iVar14,**(undefined4 **)(_UNK_0321831c + 0x3217c10));
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar15 = func_0x04e4a028(*puVar21);
        if (iVar15 == 0) {
          func_0x014388e4();
        }
        iVar16 = *(int *)(iVar15 + 0x30);
        iVar15 = 0;
        puVar21 = *(undefined4 **)(_UNK_03218320 + 0x3217c68);
        puVar22 = *(undefined4 **)(_UNK_03218324 + 0x3217c70);
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
            piVar17 = *(int **)(_UNK_03218328 + 0x3217d18);
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
            puVar22 = *(undefined4 **)(_UNK_0321832c + 0x3217d78);
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
              if (*(int *)(**(int **)(_UNK_03218360 + 0x321817c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x0202346c(0);
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 0x18);
              uVar18 = func_0x0515c4b0(&uStack_4c,0);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x020257a4(iVar6,0x280,uVar18,0,0,0,0);
              if (*(int *)(**(int **)(_UNK_03218364 + 0x3218210) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03218368 + 0x321822c));
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar18 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x02aac608(iVar6,uVar18,**(undefined4 **)(_UNK_0321836c + 0x3218268),0,0);
            }
            else if (iVar7 == 1) {
              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_03218330 + 0x3217df8));
              func_0x04cfd1b4(iVar7,**(undefined4 **)(_UNK_03218334 + 0x3217e0c));
              iVar14 = 0;
              puVar21 = *(undefined4 **)(_UNK_03218338 + 0x3217e24);
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
                uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_0321833c + 0x3217ec4));
                func_0x02ca3c70(uVar10,uVar18,uVar9,0,0);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar16 = *(int *)(iVar7 + 8);
                uVar23 = *(uint *)(iVar7 + 0xc);
                piVar19 = *(int **)(_UNK_03218340 + 0x3217f14);
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
              if (*(int *)(**(int **)(_UNK_03218344 + 0x3217f78) + 0x74) == 0) {
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
              func_0x02025168(iVar15,uVar9,uVar18,100,0);
              func_0x02028d38(&uStack_48,0xa6,0);
              iVar14 = *piVar17;
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar14 + 8);
              uStack_44 = func_0x0515c4b0(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_03216248(param_1);
              if (*(int *)(**(int **)(_UNK_03218348 + 0x3218040) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar14 = func_0x03b2c734(**(undefined4 **)(_UNK_0321834c + 0x321805c));
              if (*(int *)(**(int **)(_UNK_03218350 + 0x3218070) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar15 = func_0x04e4a028(**(undefined4 **)(_UNK_03218354 + 0x321808c));
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
              uVar12 = func_0x014388d4(**(undefined4 **)(_UNK_03218358 + 0x32180e0));
              func_0x05096384(uVar12,iVar6,**(undefined4 **)(_UNK_0321835c + 0x3218104),0);
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
    iVar6 = func_0x029540a4(0x7eab,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar6,param_1,param_2,0);
  }
  return;
}

