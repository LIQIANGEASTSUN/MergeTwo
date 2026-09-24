
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032e4c3c(undefined4 param_1,undefined4 param_2)

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
  
  pcVar13 = (char *)(_UNK_032e5654 + 0x32e4c5c);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e5658 + 0x32e4c70));
    func_0x01438628(*(undefined4 *)(_UNK_032e565c + 0x32e4c7c));
    func_0x01438628(*(undefined4 *)(_UNK_032e5660 + 0x32e4c88));
    func_0x01438628(*(undefined4 *)(_UNK_032e5664 + 0x32e4c94));
    func_0x01438628(*(undefined4 *)(_UNK_032e5668 + 0x32e4ca0));
    func_0x01438628(*(undefined4 *)(_UNK_032e566c + 0x32e4cac));
    func_0x01438628(*(undefined4 *)(_UNK_032e5670 + 0x32e4cb8));
    func_0x01438628(*(undefined4 *)(_UNK_032e5674 + 0x32e4cc4));
    func_0x01438628(*(undefined4 *)(_UNK_032e5678 + 0x32e4cd0));
    func_0x01438628(*(undefined4 *)(_UNK_032e567c + 0x32e4cdc));
    func_0x01438628(*(undefined4 *)(_UNK_032e5680 + 0x32e4ce8));
    func_0x01438628(*(undefined4 *)(_UNK_032e5684 + 0x32e4cf4));
    func_0x01438628(*(undefined4 *)(_UNK_032e5688 + 0x32e4d00));
    func_0x01438628(*(undefined4 *)(_UNK_032e568c + 0x32e4d0c));
    func_0x01438628(*(undefined4 *)(_UNK_032e5690 + 0x32e4d18));
    func_0x01438628(*(undefined4 *)(_UNK_032e5694 + 0x32e4d24));
    func_0x01438628(*(undefined4 *)(_UNK_032e5698 + 0x32e4d30));
    func_0x01438628(*(undefined4 *)(_UNK_032e569c + 0x32e4d3c));
    func_0x01438628(*(undefined4 *)(_UNK_032e56a0 + 0x32e4d48));
    func_0x01438628(*(undefined4 *)(_UNK_032e56a4 + 0x32e4d54));
    func_0x01438628(*(undefined4 *)(_UNK_032e56a8 + 0x32e4d60));
    func_0x01438628(*(undefined4 *)(_UNK_032e56ac + 0x32e4d6c));
    func_0x01438628(*(undefined4 *)(_UNK_032e56b0 + 0x32e4d78));
    func_0x01438628(*(undefined4 *)(_UNK_032e56b4 + 0x32e4d84));
    func_0x01438628(*(undefined4 *)(_UNK_032e56b8 + 0x32e4d90));
    func_0x01438628(*(undefined4 *)(_UNK_032e56bc + 0x32e4d9c));
    func_0x01438628(*(undefined4 *)(_UNK_032e56c0 + 0x32e4da8));
    func_0x01438628(*(undefined4 *)(_UNK_032e56c4 + 0x32e4db4));
    func_0x01438628(*(undefined4 *)(_UNK_032e56c8 + 0x32e4dc0));
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
  iVar6 = func_0x02953fd4(0x83e5,0);
  if (iVar6 == 0) {
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_032e56cc + 0x32e4e34));
    func_0x051b0d14(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    *(undefined4 *)(iVar6 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar6 + 0x10),param_1);
    iVar14 = *(int *)(iVar6 + 8);
    iVar7 = FUN_032e1ebc(param_1);
    if (iVar7 <= iVar14) {
      piVar17 = *(int **)(_UNK_032e56d0 + 0x32e4e8c);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar21 = *(undefined4 **)(_UNK_032e56d4 + 0x32e4ea8);
      iVar7 = func_0x04e4a028(*puVar21);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      piVar19 = *(int **)(_UNK_032e56d8 + 0x32e4ec8);
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
        iVar15 = func_0x014388d4(**(undefined4 **)(_UNK_032e56dc + 0x32e4f18));
        func_0x03a062d0(iVar15,uVar18,**(undefined4 **)(_UNK_032e56e0 + 0x32e4f38),0);
        piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 8);
        *piVar19 = iVar15;
        func_0x014385cc(piVar19,iVar15);
      }
      if (iVar14 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04cfe1c0(iVar14,iVar15,**(undefined4 **)(_UNK_032e56e4 + 0x32e4f74));
      if (iVar7 != 0) {
        iVar14 = func_0x014388d4(**(undefined4 **)(_UNK_032e56e8 + 0x32e4f94));
        func_0x04cfd1b4(iVar14,**(undefined4 **)(_UNK_032e56ec + 0x32e4fa8));
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar15 = func_0x04e4a028(*puVar21);
        if (iVar15 == 0) {
          func_0x014388e4();
        }
        iVar16 = *(int *)(iVar15 + 0x40);
        iVar15 = 0;
        puVar21 = *(undefined4 **)(_UNK_032e56f0 + 0x32e5000);
        puVar22 = *(undefined4 **)(_UNK_032e56f4 + 0x32e5008);
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
            piVar17 = *(int **)(_UNK_032e56f8 + 0x32e50b0);
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
            puVar22 = *(undefined4 **)(_UNK_032e56fc + 0x32e5110);
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
              if (*(int *)(**(int **)(_UNK_032e5730 + 0x32e5514) + 0x74) == 0) {
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
              func_0x020257a4(iVar6,0x2c3,uVar18,uVar9,0,0,0);
              if (*(int *)(**(int **)(_UNK_032e5734 + 0x32e55e0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_032e5738 + 0x32e55fc));
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar18 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x02aac608(iVar6,uVar18,**(undefined4 **)(_UNK_032e573c + 0x32e5638),0,0);
            }
            else if (iVar7 == 1) {
              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_032e5700 + 0x32e5190));
              func_0x04cfd1b4(iVar7,**(undefined4 **)(_UNK_032e5704 + 0x32e51a4));
              iVar14 = 0;
              puVar21 = *(undefined4 **)(_UNK_032e5708 + 0x32e51bc);
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
                uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_032e570c + 0x32e525c));
                func_0x02ca3c70(uVar10,uVar18,uVar9,0,0);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar16 = *(int *)(iVar7 + 8);
                uVar23 = *(uint *)(iVar7 + 0xc);
                piVar19 = *(int **)(_UNK_032e5710 + 0x32e52ac);
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
              if (*(int *)(**(int **)(_UNK_032e5714 + 0x32e5310) + 0x74) == 0) {
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
              func_0x02025168(iVar15,uVar9,uVar18,0x6f,0);
              func_0x02028d38(&uStack_48,0xcc,0);
              iVar14 = *piVar17;
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar14 + 8);
              uStack_44 = func_0x0515c4b0(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_032e1f28(param_1);
              if (*(int *)(**(int **)(_UNK_032e5718 + 0x32e53d8) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar14 = func_0x03b2c734(**(undefined4 **)(_UNK_032e571c + 0x32e53f4));
              if (*(int *)(**(int **)(_UNK_032e5720 + 0x32e5408) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar15 = func_0x04e4a028(**(undefined4 **)(_UNK_032e5724 + 0x32e5424));
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
              uVar12 = func_0x014388d4(**(undefined4 **)(_UNK_032e5728 + 0x32e5478));
              func_0x05096384(uVar12,iVar6,**(undefined4 **)(_UNK_032e572c + 0x32e549c),0);
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
    iVar6 = func_0x029540a4(0x83e5,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar6,param_1,param_2,0);
  }
  return;
}

