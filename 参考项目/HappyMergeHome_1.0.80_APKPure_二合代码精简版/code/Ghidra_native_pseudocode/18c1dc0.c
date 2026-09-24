
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018d1dc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *extraout_r3;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  bool bVar19;
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
  
  pcVar6 = (char *)(iRam018d27a0 + 0x18d1de0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam018d27a4 + 0x18d1df4));
    func_0x01438628(*(undefined4 *)(iRam018d27a8 + 0x18d1e00));
    func_0x01438628(*(undefined4 *)(iRam018d27ac + 0x18d1e0c));
    func_0x01438628(*(undefined4 *)(iRam018d27b0 + 0x18d1e18));
    func_0x01438628(*(undefined4 *)(iRam018d27b4 + 0x18d1e24));
    func_0x01438628(*(undefined4 *)(iRam018d27b8 + 0x18d1e30));
    func_0x01438628(*(undefined4 *)(iRam018d27bc + 0x18d1e3c));
    func_0x01438628(*(undefined4 *)(iRam018d27c0 + 0x18d1e48));
    func_0x01438628(*(undefined4 *)(iRam018d27c4 + 0x18d1e54));
    func_0x01438628(*(undefined4 *)(iRam018d27c8 + 0x18d1e60));
    func_0x01438628(*(undefined4 *)(iRam018d27cc + 0x18d1e6c));
    func_0x01438628(*(undefined4 *)(iRam018d27d0 + 0x18d1e78));
    func_0x01438628(*(undefined4 *)(iRam018d27d4 + 0x18d1e84));
    func_0x01438628(*(undefined4 *)(iRam018d27d8 + 0x18d1e90));
    func_0x01438628(*(undefined4 *)(iRam018d27dc + 0x18d1e9c));
    func_0x01438628(*(undefined4 *)(iRam018d27e0 + 0x18d1ea8));
    func_0x01438628(*(undefined4 *)(iRam018d27e4 + 0x18d1eb4));
    func_0x01438628(*(undefined4 *)(iRam018d27e8 + 0x18d1ec0));
    func_0x01438628(*(undefined4 *)(iRam018d27ec + 0x18d1ecc));
    func_0x01438628(*(undefined4 *)(iRam018d27f0 + 0x18d1ed8));
    func_0x01438628(*(undefined4 *)(iRam018d27f4 + 0x18d1ee4));
    func_0x01438628(*(undefined4 *)(iRam018d27f8 + 0x18d1ef0));
    func_0x01438628(*(undefined4 *)(iRam018d27fc + 0x18d1efc));
    func_0x01438628(*(undefined4 *)(iRam018d2800 + 0x18d1f08));
    func_0x01438628(*(undefined4 *)(iRam018d2804 + 0x18d1f14));
    func_0x01438628(*(undefined4 *)(iRam018d2808 + 0x18d1f20));
    func_0x01438628(*(undefined4 *)(iRam018d280c + 0x18d1f2c));
    func_0x01438628(*(undefined4 *)(iRam018d2810 + 0x18d1f38));
    func_0x01438628(*(undefined4 *)(iRam018d2814 + 0x18d1f44));
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
  iVar1 = func_0x02953fd4(0x9558,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(iRam018d2818 + 0x18d1fb8));
    func_0x018d3d10(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
    iStack_54 = iVar1;
    func_0x014385cc((undefined4 *)(iVar1 + 0x10),param_1);
    iVar7 = *(int *)(iVar1 + 8);
    uStack_58 = param_1;
    iVar1 = FUN_018cfef4(param_1);
    if (iVar1 <= iVar7) {
      piVar10 = *(int **)(iRam018d281c + 0x18d2010);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar13 = *(undefined4 **)(iRam018d2820 + 0x18d202c);
      iVar1 = func_0x014e9518(*puVar13);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar12 = *(int **)(iRam018d2824 + 0x18d204c);
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
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam018d2828 + 0x18d209c));
        func_0x024f0614(iVar8,uVar11,**(undefined4 **)(iRam018d282c + 0x18d20bc),0);
        piVar2 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
        *piVar2 = iVar8;
        func_0x014385cc(piVar2,iVar8);
      }
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x024f0618(iVar7,iVar8,**(undefined4 **)(iRam018d2830 + 0x18d20f8));
      iVar1 = 0;
      if (iVar7 != 0) {
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam018d2834 + 0x18d2118));
        func_0x024eed9c(iVar8,**(undefined4 **)(iRam018d2838 + 0x18d212c));
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
        puVar14 = *(undefined4 **)(iRam018d283c + 0x18d2184);
        puVar13 = *(undefined4 **)(iRam018d2840 + 0x18d218c);
        iStack_50 = iVar7;
        while( true ) {
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar3 = iStack_54;
          if (*(int *)(iVar9 + 0xc) <= iVar1) break;
          piVar12 = *(int **)(iVar7 + 0x14);
          iVar3 = func_0x0152983c(iVar9,iVar1,*puVar14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar11 = *(undefined4 *)(iVar3 + 8);
          if (piVar12 == (int *)0x0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f0f34(piVar12,uVar11,*puVar13);
          if (iVar3 != 0) {
            piVar12 = (int *)func_0x0152983c(iVar9,iVar1,*puVar14);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar8 + 8);
            uVar16 = *(uint *)(iVar8 + 0xc);
            piVar10 = *(int **)(iRam018d2844 + 0x18d2234);
            *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
            iVar3 = *piVar10;
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            if (uVar16 < *(uint *)(iVar7 + 0xc)) {
              *(uint *)(iVar8 + 0xc) = uVar16 + 1;
              puVar13 = (undefined4 *)(iVar7 + uVar16 * 4 + 0x10);
              *puVar13 = piVar12;
              func_0x014385cc(puVar13,piVar12);
            }
            else {
              func_0x0152874c(iVar8,piVar12,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
            puVar13 = *(undefined4 **)(iRam018d2848 + 0x18d2294);
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
          iVar1 = func_0x0152983c(iVar8,*(undefined4 *)(iStack_54 + 8),*puVar14);
          piVar10 = (int *)(iVar9 + 0xc);
          *piVar10 = iVar1;
          func_0x014385cc(piVar10,iVar1);
          iVar1 = 0;
          if (*piVar10 != 0) {
            iVar1 = *(int *)(*piVar10 + 0x14);
            if (iVar1 == 2) {
              if (*(int *)(**(int **)(iRam018d287c + 0x18d2698) + 0x74) == 0) {
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
              func_0x020257a4(iVar1,0x2d3,uVar11,0);
              if (*(int *)(**(int **)(iRam018d2880 + 0x18d272c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(iRam018d2884 + 0x18d2748));
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar11 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              iVar1 = func_0x02aac608(iVar1,uVar11,**(undefined4 **)(iRam018d2888 + 0x18d2784),0);
            }
            else if (iVar1 == 1) {
              iVar1 = func_0x014388d4(**(undefined4 **)(iRam018d284c + 0x18d2314));
              func_0x024eed9c(iVar1,**(undefined4 **)(iRam018d2850 + 0x18d2328));
              iVar7 = 0;
              puVar14 = *(undefined4 **)(iRam018d2854 + 0x18d2340);
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
                uVar11 = func_0x024f0530(iVar8,iVar7,*puVar14);
                iVar8 = *piVar10;
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar8 = *(int *)(iVar8 + 0x10);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x024f0530(iVar8,iVar7,*puVar14);
                uVar5 = func_0x014388d4(**(undefined4 **)(iRam018d2858 + 0x18d23e0));
                uStack_98 = 0;
                func_0x02ca3c70(uVar5,uVar11,uVar4,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar1 + 8);
                piVar12 = *(int **)(iVar1 + 0xc);
                piVar2 = *(int **)(iRam018d285c + 0x18d2430);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar8 = *piVar2;
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                if (piVar12 < *(int **)(iVar9 + 0xc)) {
                  *(int *)(iVar1 + 0xc) = (int)piVar12 + 1;
                  puVar13 = (undefined4 *)(iVar9 + (int)piVar12 * 4 + 0x10);
                  *puVar13 = uVar5;
                  func_0x014385cc(puVar13,uVar5);
                }
                else {
                  func_0x0152874c(iVar1,uVar5,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
                }
                iVar7 = iVar7 + 1;
                puVar13 = puVar14;
              }
              if (*(int *)(**(int **)(iRam018d2860 + 0x18d2494) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar8 = func_0x0202346c(0);
              iVar3 = *piVar10;
              iVar9 = iVar3;
              if (iVar3 == 0) {
                func_0x014388e4();
                iVar9 = *piVar10;
                bVar19 = iVar9 == 0;
                if (bVar19) {
                  uVar11 = func_0x014388e4();
                  if (bVar19) {
                    *extraout_r3 = 0xa0;
                    iVar8 = *(int *)(**(int **)**(undefined4 **)
                                                 **(undefined4 **)
                                                   **(undefined4 **)
                                                     **(undefined4 **)
                                                       (**(int **)**(undefined4 **)
                                                                    (*(int *)(**(int **)(*(int *)(*(
                                                  int *)(**(int **)(*(int *)(puVar13[0x599] + 0x9ac)
                                                                   + 0xb58) + 0x950) + 0xb14) +
                                                  0x12c0) + 0x1270) + 0x1a70) + 0x368) + 0x644);
                    puVar14 = *(undefined4 **)(iVar8 + 0x337c);
                    iVar8 = *(int *)(*(int *)(iVar8 + 0x41e8) + 0x21c);
                  }
                  uStack_9c = 0x18d27a0;
                  pcVar6 = (char *)(_UNK_018d2988 + 0x18d28a0);
                  iStack_a8 = iVar8;
                  piStack_a4 = puVar14;
                  iStack_a0 = iVar1;
                  if (*pcVar6 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_018d298c + 0x18d28b4));
                    *pcVar6 = '\x01';
                  }
                  iVar1 = func_0x02953fd4(0x955c,0);
                  if (iVar1 == 0) {
                    piVar10 = *(int **)(_UNK_018d2990 + 0x18d290c);
                    if (*(int *)(*piVar10 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar1 = FUN_018bd08c();
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = FUN_018bec7c(iVar1);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    if (*(int *)(*piVar10 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar7 = FUN_018bd08c();
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    FUN_018bf498(iVar7,iVar1);
                    return 1;
                  }
                  iVar1 = func_0x029540a4(0x955c,0);
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
                  func_0x01523a6c(&uStack_c8,uVar11,0);
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
              uVar11 = *(undefined4 *)(iVar9 + 0x10);
              uVar4 = *(undefined4 *)(iVar3 + 0xc);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02025168(iVar8,uVar4,uVar11,0x73);
              func_0x02028d38(&uStack_48,0xd4,0);
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_018cff60(uStack_58);
              if (*(int *)(**(int **)(iRam018d2864 + 0x18d255c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iStack_50 = func_0x014e96a8(**(undefined4 **)(iRam018d2868 + 0x18d2578));
              if (*(int *)(**(int **)(iRam018d286c + 0x18d258c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar7 = func_0x014e9518(**(undefined4 **)(iRam018d2870 + 0x18d25a8));
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar4 = uStack_44;
              uVar11 = uStack_48;
              uStack_64 = *puStack_60;
              uStack_68 = puStack_60[1];
              uVar18 = puStack_60[2];
              uVar15 = puStack_60[3];
              uVar17 = *puStack_5c;
              puStack_5c = (undefined4 *)puStack_5c[1];
              uStack_58 = *(undefined4 *)(iVar7 + 0x10);
              uVar5 = func_0x014388d4(**(undefined4 **)(iRam018d2874 + 0x18d25fc));
              func_0x0152e3ec(uVar5,iStack_54,**(undefined4 **)(iRam018d2878 + 0x18d2620),0);
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
              uStack_84 = uVar15;
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
    iVar1 = func_0x029540a4(0x9558,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return iVar1;
}

