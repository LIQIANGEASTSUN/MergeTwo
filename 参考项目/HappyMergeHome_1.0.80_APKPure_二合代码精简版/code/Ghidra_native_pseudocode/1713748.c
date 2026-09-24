
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01723748(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b0;
  undefined4 *puStack_ac;
  int iStack_a8;
  int *piStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
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
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
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
  
  pcVar6 = (char *)(iRam01724128 + 0x1723768);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0172412c + 0x172377c));
    func_0x01438628(*(undefined4 *)(iRam01724130 + 0x1723788));
    func_0x01438628(*(undefined4 *)(iRam01724134 + 0x1723794));
    func_0x01438628(*(undefined4 *)(iRam01724138 + 0x17237a0));
    func_0x01438628(*(undefined4 *)(iRam0172413c + 0x17237ac));
    func_0x01438628(*(undefined4 *)(iRam01724140 + 0x17237b8));
    func_0x01438628(*(undefined4 *)(iRam01724144 + 0x17237c4));
    func_0x01438628(*(undefined4 *)(iRam01724148 + 0x17237d0));
    func_0x01438628(*(undefined4 *)(iRam0172414c + 0x17237dc));
    func_0x01438628(*(undefined4 *)(iRam01724150 + 0x17237e8));
    func_0x01438628(*(undefined4 *)(iRam01724154 + 0x17237f4));
    func_0x01438628(*(undefined4 *)(iRam01724158 + 0x1723800));
    func_0x01438628(*(undefined4 *)(iRam0172415c + 0x172380c));
    func_0x01438628(*(undefined4 *)(iRam01724160 + 0x1723818));
    func_0x01438628(*(undefined4 *)(iRam01724164 + 0x1723824));
    func_0x01438628(*(undefined4 *)(iRam01724168 + 0x1723830));
    func_0x01438628(*(undefined4 *)(iRam0172416c + 0x172383c));
    func_0x01438628(*(undefined4 *)(iRam01724170 + 0x1723848));
    func_0x01438628(*(undefined4 *)(iRam01724174 + 0x1723854));
    func_0x01438628(*(undefined4 *)(iRam01724178 + 0x1723860));
    func_0x01438628(*(undefined4 *)(iRam0172417c + 0x172386c));
    func_0x01438628(*(undefined4 *)(iRam01724180 + 0x1723878));
    func_0x01438628(*(undefined4 *)(iRam01724184 + 0x1723884));
    func_0x01438628(*(undefined4 *)(iRam01724188 + 0x1723890));
    func_0x01438628(*(undefined4 *)(iRam0172418c + 0x172389c));
    func_0x01438628(*(undefined4 *)(iRam01724190 + 0x17238a8));
    func_0x01438628(*(undefined4 *)(iRam01724194 + 0x17238b4));
    func_0x01438628(*(undefined4 *)(iRam01724198 + 0x17238c0));
    func_0x01438628(*(undefined4 *)(iRam0172419c + 0x17238cc));
    *pcVar6 = '\x01';
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
  iVar1 = func_0x02953fd4(0x8ba3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(iRam017241a0 + 0x1723940));
    func_0x0172570c(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
    iStack_54 = iVar1;
    func_0x014385cc((undefined4 *)(iVar1 + 0x10),param_1);
    iVar7 = *(int *)(iVar1 + 8);
    uStack_58 = param_1;
    iVar1 = FUN_01721484(param_1);
    if (iVar1 <= iVar7) {
      piVar10 = *(int **)(iRam017241a4 + 0x1723998);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar13 = *(undefined4 **)(iRam017241a8 + 0x17239b4);
      iVar1 = func_0x014e9518(*puVar13);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar12 = *(int **)(iRam017241ac + 0x17239d4);
      iVar7 = *(int *)(iVar1 + 0x30);
      iVar1 = *piVar12;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar12;
      }
      iVar8 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar8 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar1 + 0x5c);
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam017241b0 + 0x1723a24));
        func_0x024f0614(iVar8,uVar11,**(undefined4 **)(iRam017241b4 + 0x1723a44),0);
        piVar2 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
        *piVar2 = iVar8;
        func_0x014385cc(piVar2,iVar8);
      }
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x024f0618(iVar7,iVar8,**(undefined4 **)(iRam017241b8 + 0x1723a80));
      iVar1 = 0;
      if (iVar7 != 0) {
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam017241bc + 0x1723aa0));
        func_0x024eed9c(iVar8,**(undefined4 **)(iRam017241c0 + 0x1723ab4));
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar13);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puStack_60 = &uStack_40;
        puStack_5c = &uStack_30;
        iVar9 = *(int *)(iVar1 + 0x34);
        iVar1 = 0;
        puVar13 = *(undefined4 **)(iRam017241c4 + 0x1723b0c);
        puVar15 = *(undefined4 **)(iRam017241c8 + 0x1723b14);
        iStack_50 = iVar7;
        while( true ) {
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar3 = iStack_54;
          if (*(int *)(iVar9 + 0xc) <= iVar1) break;
          piVar12 = *(int **)(iVar7 + 0x14);
          iVar3 = func_0x0152983c(iVar9,iVar1,*puVar13);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar11 = *(undefined4 *)(iVar3 + 8);
          if (piVar12 == (int *)0x0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f0f34(piVar12,uVar11,*puVar15);
          if (iVar3 != 0) {
            piVar12 = (int *)func_0x0152983c(iVar9,iVar1,*puVar13);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar8 + 8);
            uVar16 = *(uint *)(iVar8 + 0xc);
            piVar10 = *(int **)(iRam017241cc + 0x1723bbc);
            *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
            iVar3 = *piVar10;
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            if (uVar16 < *(uint *)(iVar7 + 0xc)) {
              *(uint *)(iVar8 + 0xc) = uVar16 + 1;
              puVar15 = (undefined4 *)(iVar7 + uVar16 * 4 + 0x10);
              *puVar15 = piVar12;
              func_0x014385cc(puVar15,piVar12);
            }
            else {
              func_0x0152874c(iVar8,piVar12,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
            puVar15 = *(undefined4 **)(iRam017241d0 + 0x1723c1c);
            iVar7 = iStack_50;
          }
          iVar1 = iVar1 + 1;
        }
        if (iStack_54 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar3 + 8);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar9 = iStack_54;
        iVar1 = *(int *)(iVar8 + 0xc);
        if (iVar7 < iVar1) {
          iVar1 = func_0x0152983c(iVar8,*(undefined4 *)(iStack_54 + 8),*puVar13);
          piVar10 = (int *)(iVar9 + 0xc);
          *piVar10 = iVar1;
          func_0x014385cc(piVar10,iVar1);
          iVar1 = 0;
          if (*piVar10 != 0) {
            iVar1 = *(int *)(*piVar10 + 0x14);
            if (iVar1 == 2) {
              if (*(int *)(**(int **)(iRam01724204 + 0x1724020) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x0202346c(0);
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 0x18);
              uVar11 = func_0x01524ffc(&uStack_4c,0);
              if (iVar1 == 0) {
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
              func_0x020257a4(iVar1,0x341,uVar11,0);
              if (*(int *)(**(int **)(iRam01724208 + 0x17240b4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(iRam0172420c + 0x17240d0));
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar11 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              iVar1 = func_0x02aac608(iVar1,uVar11,**(undefined4 **)(iRam01724210 + 0x172410c),0);
            }
            else if (iVar1 == 1) {
              iVar1 = func_0x014388d4(**(undefined4 **)(iRam017241d4 + 0x1723c9c));
              func_0x024eed9c(iVar1,**(undefined4 **)(iRam017241d8 + 0x1723cb0));
              iVar7 = 0;
              puVar13 = *(undefined4 **)(iRam017241dc + 0x1723cc8);
              while( true ) {
                iVar8 = *piVar10;
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar8 = *(int *)(iVar8 + 0xc);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar8 + 0xc) <= iVar7) break;
                iVar8 = *piVar10;
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar8 = *(int *)(iVar8 + 0xc);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                uVar11 = func_0x024f0530(iVar8,iVar7,*puVar13);
                iVar8 = *piVar10;
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar8 = *(int *)(iVar8 + 0x10);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x024f0530(iVar8,iVar7,*puVar13);
                uVar5 = func_0x014388d4(**(undefined4 **)(iRam017241e0 + 0x1723d68));
                uStack_98 = 0;
                func_0x02ca3c70(uVar5,uVar11,uVar4,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar1 + 8);
                piVar12 = *(int **)(iVar1 + 0xc);
                piVar2 = *(int **)(iRam017241e4 + 0x1723db8);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar8 = *piVar2;
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                if (piVar12 < *(int **)(iVar9 + 0xc)) {
                  *(int *)(iVar1 + 0xc) = (int)piVar12 + 1;
                  puVar15 = (undefined4 *)(iVar9 + (int)piVar12 * 4 + 0x10);
                  *puVar15 = uVar5;
                  func_0x014385cc(puVar15,uVar5);
                }
                else {
                  func_0x0152874c(iVar1,uVar5,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
                }
                iVar7 = iVar7 + 1;
              }
              if (*(int *)(**(int **)(iRam017241e8 + 0x1723e1c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar9 = func_0x0202346c(0);
              iVar3 = *piVar10;
              iVar8 = iVar3;
              if (iVar3 == 0) {
                func_0x014388e4();
                iVar8 = *piVar10;
                bVar19 = iVar8 == 0;
                if (bVar19) {
                  uVar11 = 0x1724128;
                  uVar20 = func_0x014388e4();
                  uVar4 = (undefined4)((ulonglong)uVar20 >> 0x20);
                  if (bVar19) {
                    uVar11 = 0x1724130;
                    iVar8 = *(int *)(*(int *)(*(int *)(iVar9 + 0x22cc) + 0x5bb0) + 0x1684);
                    puVar13 = *(undefined4 **)((int)&__DT_SYMTAB[0x1d8].st_name + iVar8);
                    iVar9 = iVar8 + 0x1381c;
                    uVar4 = *(undefined4 *)(&__DT_SYMTAB[0x346].st_info + iVar8);
                  }
                  pcVar6 = (char *)(_UNK_01724310 + 0x1724228);
                  iStack_a8 = iVar9;
                  piStack_a4 = puVar13;
                  iStack_a0 = iVar1;
                  uStack_9c = uVar11;
                  if (*pcVar6 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_01724314 + 0x172423c),uVar4);
                    *pcVar6 = '\x01';
                  }
                  iVar1 = func_0x02953fd4(0x8ba6,0);
                  if (iVar1 == 0) {
                    piVar10 = *(int **)(_UNK_01724318 + 0x1724294);
                    if (*(int *)(*piVar10 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar1 = FUN_0170e674();
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = FUN_01710264(iVar1);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    if (*(int *)(*piVar10 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar7 = FUN_0170e674();
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    FUN_017108c8(iVar7,iVar1);
                    return 1;
                  }
                  iVar1 = func_0x029540a4(0x8ba6,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  puStack_ac = piStack_a4;
                  iStack_b0 = iStack_a8;
                  uStack_c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                  uStack_c0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                  uStack_bc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                  uStack_c8 = 0;
                  uStack_b8 = 0;
                  iStack_a8 = iVar3;
                  piStack_a4 = piVar12;
                  iStack_a0 = iVar7;
                  func_0x024f56c0(&uStack_e0,0,0);
                  uStack_c8 = uStack_e0;
                  uStack_c4 = uStack_dc;
                  uStack_c0 = uStack_d8;
                  uStack_bc = uStack_d4;
                  uStack_b8 = uStack_d0;
                  if (*(int *)(iVar1 + 0x10) != 0) {
                    func_0x01523a6c(&uStack_c8,*(int *)(iVar1 + 0x10),0);
                  }
                  func_0x01523a6c(&uStack_c8,(int)uVar20,0);
                  iVar7 = *(int *)(iVar1 + 8);
                  uVar11 = *(undefined4 *)(iVar1 + 0xc);
                  iVar1 = *(int *)(iVar1 + 0x10);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  uVar4 = 2;
                  if (iVar1 == 0) {
                    uVar4 = 1;
                  }
                  func_0x024f56d0(iVar7,uVar11,&uStack_c8,uVar4,0,0);
                  iVar1 = func_0x024f56e0(&uStack_c8,0,0);
                  return iVar1;
                }
              }
              uVar11 = *(undefined4 *)(iVar8 + 0x10);
              uVar4 = *(undefined4 *)(iVar3 + 0xc);
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02025168(iVar9,uVar4,uVar11,0x83);
              func_0x02028d38(&uStack_48,0x11f,0);
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_017214f0(uStack_58);
              if (*(int *)(**(int **)(iRam017241ec + 0x1723ee4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iStack_50 = func_0x014e96a8(**(undefined4 **)(iRam017241f0 + 0x1723f00));
              if (*(int *)(**(int **)(iRam017241f4 + 0x1723f14) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar7 = func_0x014e9518(**(undefined4 **)(iRam017241f8 + 0x1723f30));
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar4 = uStack_44;
              uVar11 = uStack_48;
              uStack_64 = *puStack_60;
              uStack_68 = puStack_60[1];
              uVar18 = puStack_60[2];
              uVar14 = puStack_60[3];
              uVar17 = *puStack_5c;
              puStack_5c = (undefined4 *)puStack_5c[1];
              uStack_58 = *(undefined4 *)(iVar7 + 0x10);
              uVar5 = func_0x014388d4(**(undefined4 **)(iRam017241fc + 0x1723f84));
              func_0x0152e3ec(uVar5,iStack_54,**(undefined4 **)(iRam01724200 + 0x1723fa8),0);
              if (iStack_50 == 0) {
                func_0x014388e4();
              }
              uStack_90 = uStack_64;
              uStack_8c = uStack_68;
              uStack_7c = puStack_5c;
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_98 = uVar11;
              uStack_94 = uVar4;
              uStack_88 = uVar18;
              uStack_84 = uVar14;
              uStack_80 = uVar17;
              uStack_78 = uVar5;
              iVar1 = func_0x02b75870(iStack_50,iVar1,uStack_58,1);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8ba3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return iVar1;
}

