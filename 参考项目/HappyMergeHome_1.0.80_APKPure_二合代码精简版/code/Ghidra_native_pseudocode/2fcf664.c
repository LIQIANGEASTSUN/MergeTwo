
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02fdf664(undefined4 param_1,undefined4 param_2)

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
  
  pcVar13 = (char *)(_UNK_02fe007c + 0x2fdf684);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fe0080 + 0x2fdf698));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0084 + 0x2fdf6a4));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0088 + 0x2fdf6b0));
    func_0x01438628(*(undefined4 *)(_UNK_02fe008c + 0x2fdf6bc));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0090 + 0x2fdf6c8));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0094 + 0x2fdf6d4));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0098 + 0x2fdf6e0));
    func_0x01438628(*(undefined4 *)(_UNK_02fe009c + 0x2fdf6ec));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00a0 + 0x2fdf6f8));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00a4 + 0x2fdf704));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00a8 + 0x2fdf710));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00ac + 0x2fdf71c));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00b0 + 0x2fdf728));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00b4 + 0x2fdf734));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00b8 + 0x2fdf740));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00bc + 0x2fdf74c));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00c0 + 0x2fdf758));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00c4 + 0x2fdf764));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00c8 + 0x2fdf770));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00cc + 0x2fdf77c));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00d0 + 0x2fdf788));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00d4 + 0x2fdf794));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00d8 + 0x2fdf7a0));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00dc + 0x2fdf7ac));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00e0 + 0x2fdf7b8));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00e4 + 0x2fdf7c4));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00e8 + 0x2fdf7d0));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00ec + 0x2fdf7dc));
    func_0x01438628(*(undefined4 *)(_UNK_02fe00f0 + 0x2fdf7e8));
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
  iVar6 = func_0x02953fd4(0x7133,0);
  if (iVar6 == 0) {
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02fe00f4 + 0x2fdf85c));
    func_0x02fe10c0(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    *(undefined4 *)(iVar6 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar6 + 0x10),param_1);
    iVar14 = *(int *)(iVar6 + 8);
    iVar7 = FUN_02fdcbc8(param_1);
    if (iVar7 <= iVar14) {
      piVar17 = *(int **)(_UNK_02fe00f8 + 0x2fdf8b4);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar21 = *(undefined4 **)(_UNK_02fe00fc + 0x2fdf8d0);
      iVar7 = func_0x04e4a028(*puVar21);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      piVar19 = *(int **)(_UNK_02fe0100 + 0x2fdf8f0);
      iVar14 = *(int *)(iVar7 + 0x3c);
      iVar7 = *piVar19;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar19;
      }
      iVar15 = *(int *)(*(int *)(iVar7 + 0x5c) + 8);
      if (iVar15 == 0) {
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar19;
        }
        uVar18 = **(undefined4 **)(iVar7 + 0x5c);
        iVar15 = func_0x014388d4(**(undefined4 **)(_UNK_02fe0104 + 0x2fdf940));
        func_0x03a062d0(iVar15,uVar18,**(undefined4 **)(_UNK_02fe0108 + 0x2fdf960),0);
        piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 8);
        *piVar19 = iVar15;
        func_0x014385cc(piVar19,iVar15);
      }
      if (iVar14 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04cfe1c0(iVar14,iVar15,**(undefined4 **)(_UNK_02fe010c + 0x2fdf99c));
      if (iVar7 != 0) {
        iVar14 = func_0x014388d4(**(undefined4 **)(_UNK_02fe0110 + 0x2fdf9bc));
        func_0x04cfd1b4(iVar14,**(undefined4 **)(_UNK_02fe0114 + 0x2fdf9d0));
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar15 = func_0x04e4a028(*puVar21);
        if (iVar15 == 0) {
          func_0x014388e4();
        }
        iVar16 = *(int *)(iVar15 + 0x40);
        iVar15 = 0;
        puVar21 = *(undefined4 **)(_UNK_02fe0118 + 0x2fdfa28);
        puVar22 = *(undefined4 **)(_UNK_02fe011c + 0x2fdfa30);
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
            piVar17 = *(int **)(_UNK_02fe0120 + 0x2fdfad8);
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
            puVar22 = *(undefined4 **)(_UNK_02fe0124 + 0x2fdfb38);
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
              if (*(int *)(**(int **)(_UNK_02fe0158 + 0x2fdff3c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x0202346c(0);
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 8);
              uVar18 = func_0x01524ffc(&uStack_4c,0);
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
              func_0x020257a4(iVar6,0x317,uVar18,uVar9,0,0,0);
              if (*(int *)(**(int **)(_UNK_02fe015c + 0x2fe0008) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02fe0160 + 0x2fe0024));
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar18 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x02aac608(iVar6,uVar18,**(undefined4 **)(_UNK_02fe0164 + 0x2fe0060),0,0);
            }
            else if (iVar7 == 1) {
              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02fe0128 + 0x2fdfbb8));
              func_0x04cfd1b4(iVar7,**(undefined4 **)(_UNK_02fe012c + 0x2fdfbcc));
              iVar14 = 0;
              puVar21 = *(undefined4 **)(_UNK_02fe0130 + 0x2fdfbe4);
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
                uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_02fe0134 + 0x2fdfc84));
                func_0x02ca3c70(uVar10,uVar18,uVar9,0,0);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar16 = *(int *)(iVar7 + 8);
                uVar23 = *(uint *)(iVar7 + 0xc);
                piVar19 = *(int **)(_UNK_02fe0138 + 0x2fdfcd4);
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
              if (*(int *)(**(int **)(_UNK_02fe013c + 0x2fdfd38) + 0x74) == 0) {
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
              func_0x02025168(iVar15,uVar9,uVar18,0x7d,0);
              func_0x02028d38(&uStack_48,0x105,0);
              iVar14 = *piVar17;
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar14 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_02fdcc34(param_1);
              if (*(int *)(**(int **)(_UNK_02fe0140 + 0x2fdfe00) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar14 = func_0x03b2c734(**(undefined4 **)(_UNK_02fe0144 + 0x2fdfe1c));
              if (*(int *)(**(int **)(_UNK_02fe0148 + 0x2fdfe30) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar15 = func_0x04e4a028(**(undefined4 **)(_UNK_02fe014c + 0x2fdfe4c));
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
              uVar12 = func_0x014388d4(**(undefined4 **)(_UNK_02fe0150 + 0x2fdfea0));
              func_0x0152e3ec(uVar12,iVar6,**(undefined4 **)(_UNK_02fe0154 + 0x2fdfec4),0);
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
    iVar6 = func_0x029540a4(0x7133,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar6,param_1,param_2,0);
  }
  return;
}

