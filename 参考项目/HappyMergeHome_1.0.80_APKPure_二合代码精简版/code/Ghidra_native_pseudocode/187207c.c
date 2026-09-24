
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0188207c(undefined4 param_1,undefined4 param_2)

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
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined *puVar20;
  bool bVar21;
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
  undefined1 *puStack_a0;
  undefined *puStack_9c;
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
  
  pcVar6 = (char *)(iRam01882a94 + 0x188209c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam01882a98 + 0x18820b0));
    func_0x01438628(*(undefined4 *)(iRam01882a9c + 0x18820bc));
    func_0x01438628(*(undefined4 *)(iRam01882aa0 + 0x18820c8));
    func_0x01438628(*(undefined4 *)(iRam01882aa4 + 0x18820d4));
    func_0x01438628(*(undefined4 *)(iRam01882aa8 + 0x18820e0));
    func_0x01438628(*(undefined4 *)(iRam01882aac + 0x18820ec));
    func_0x01438628(*(undefined4 *)(iRam01882ab0 + 0x18820f8));
    func_0x01438628(*(undefined4 *)(iRam01882ab4 + 0x1882104));
    func_0x01438628(*(undefined4 *)(iRam01882ab8 + 0x1882110));
    func_0x01438628(*(undefined4 *)(iRam01882abc + 0x188211c));
    func_0x01438628(*(undefined4 *)(iRam01882ac0 + 0x1882128));
    func_0x01438628(*(undefined4 *)(iRam01882ac4 + 0x1882134));
    func_0x01438628(*(undefined4 *)(iRam01882ac8 + 0x1882140));
    func_0x01438628(*(undefined4 *)(iRam01882acc + 0x188214c));
    func_0x01438628(*(undefined4 *)(iRam01882ad0 + 0x1882158));
    func_0x01438628(*(undefined4 *)(iRam01882ad4 + 0x1882164));
    func_0x01438628(*(undefined4 *)(iRam01882ad8 + 0x1882170));
    func_0x01438628(*(undefined4 *)(iRam01882adc + 0x188217c));
    func_0x01438628(*(undefined4 *)(iRam01882ae0 + 0x1882188));
    func_0x01438628(*(undefined4 *)(iRam01882ae4 + 0x1882194));
    func_0x01438628(*(undefined4 *)(iRam01882ae8 + 0x18821a0));
    func_0x01438628(*(undefined4 *)(iRam01882aec + 0x18821ac));
    func_0x01438628(*(undefined4 *)(iRam01882af0 + 0x18821b8));
    func_0x01438628(*(undefined4 *)(iRam01882af4 + 0x18821c4));
    func_0x01438628(*(undefined4 *)(iRam01882af8 + 0x18821d0));
    func_0x01438628(*(undefined4 *)(iRam01882afc + 0x18821dc));
    func_0x01438628(*(undefined4 *)(iRam01882b00 + 0x18821e8));
    func_0x01438628(*(undefined4 *)(iRam01882b04 + 0x18821f4));
    func_0x01438628(*(undefined4 *)(iRam01882b08 + 0x1882200));
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
  iVar1 = func_0x02953fd4(0x93ea,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(iRam01882b0c + 0x1882274));
    func_0x01883a8c(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
    iStack_54 = iVar1;
    func_0x014385cc((undefined4 *)(iVar1 + 0x10),param_1);
    iVar7 = *(int *)(iVar1 + 8);
    uStack_58 = param_1;
    iVar1 = FUN_0187fa4c(param_1);
    if (iVar1 <= iVar7) {
      piVar10 = *(int **)(iRam01882b10 + 0x18822cc);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar13 = *(undefined4 **)(iRam01882b14 + 0x18822e8);
      iVar1 = func_0x014e9518(*puVar13);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar12 = *(int **)(iRam01882b18 + 0x1882308);
      iVar7 = *(int *)(iVar1 + 0x34);
      iVar1 = *piVar12;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar12;
      }
      iVar8 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar8 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar1 + 0x5c);
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam01882b1c + 0x1882358));
        func_0x024f0614(iVar8,uVar11,**(undefined4 **)(iRam01882b20 + 0x1882378),0);
        piVar2 = (int *)(*(int *)(*piVar12 + 0x5c) + 8);
        *piVar2 = iVar8;
        func_0x014385cc(piVar2,iVar8);
      }
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x024f0618(iVar7,iVar8,**(undefined4 **)(iRam01882b24 + 0x18823b4));
      iVar1 = 0;
      if (iVar7 != 0) {
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam01882b28 + 0x18823d4));
        func_0x024eed9c(iVar8,**(undefined4 **)(iRam01882b2c + 0x18823e8));
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar13);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puStack_60 = &uStack_40;
        puStack_5c = &uStack_30;
        iVar9 = *(int *)(iVar1 + 0x38);
        iVar1 = 0;
        puVar13 = *(undefined4 **)(iRam01882b30 + 0x1882440);
        puVar16 = *(undefined4 **)(iRam01882b34 + 0x1882448);
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
          iVar3 = func_0x024f0f34(piVar12,uVar11,*puVar16);
          if (iVar3 != 0) {
            piVar12 = (int *)func_0x0152983c(iVar9,iVar1,*puVar13);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar8 + 8);
            uVar17 = *(uint *)(iVar8 + 0xc);
            piVar10 = *(int **)(iRam01882b38 + 0x18824f0);
            *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
            iVar3 = *piVar10;
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            if (uVar17 < *(uint *)(iVar7 + 0xc)) {
              *(uint *)(iVar8 + 0xc) = uVar17 + 1;
              puVar16 = (undefined4 *)(iVar7 + uVar17 * 4 + 0x10);
              *puVar16 = piVar12;
              func_0x014385cc(puVar16,piVar12);
            }
            else {
              func_0x0152874c(iVar8,piVar12,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
            puVar16 = *(undefined4 **)(iRam01882b3c + 0x1882550);
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
              if (*(int *)(**(int **)(iRam01882b70 + 0x1882954) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x0202346c(0);
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 8);
              uVar11 = func_0x01524ffc(&uStack_4c,0);
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              piVar12 = *(int **)(iVar7 + 0x10);
              if (piVar12 == (int *)0x0) {
                func_0x014388e4();
              }
              uVar4 = (**(code **)(*piVar12 + 0xd8))(piVar12,*(undefined4 *)(*piVar12 + 0xdc));
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
              func_0x020257a4(iVar1,0x28a,uVar11,uVar4);
              if (*(int *)(**(int **)(iRam01882b74 + 0x1882a20) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(iRam01882b78 + 0x1882a3c));
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar11 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              iVar1 = func_0x02aac608(iVar1,uVar11,**(undefined4 **)(iRam01882b7c + 0x1882a78),0);
            }
            else if (iVar1 == 1) {
              iVar1 = func_0x014388d4(**(undefined4 **)(iRam01882b40 + 0x18825d0));
              func_0x024eed9c(iVar1,**(undefined4 **)(iRam01882b44 + 0x18825e4));
              puVar14 = (undefined1 *)0x0;
              puVar13 = *(undefined4 **)(iRam01882b48 + 0x18825fc);
              while( true ) {
                iVar7 = *piVar10;
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar7 + 0xc);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar7 + 0xc) <= (int)puVar14) break;
                iVar7 = *piVar10;
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar7 + 0xc);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                uVar11 = func_0x024f0530(iVar7,puVar14,*puVar13);
                iVar7 = *piVar10;
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar7 + 0x10);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x024f0530(iVar7,puVar14,*puVar13);
                uVar5 = func_0x014388d4(**(undefined4 **)(iRam01882b4c + 0x188269c));
                uStack_98 = 0;
                func_0x02ca3c70(uVar5,uVar11,uVar4,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar8 = *(int *)(iVar1 + 8);
                piVar12 = *(int **)(iVar1 + 0xc);
                piVar2 = *(int **)(iRam01882b50 + 0x18826ec);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar7 = *piVar2;
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                if (piVar12 < *(int **)(iVar8 + 0xc)) {
                  *(int *)(iVar1 + 0xc) = (int)piVar12 + 1;
                  puVar16 = (undefined4 *)(iVar8 + (int)piVar12 * 4 + 0x10);
                  *puVar16 = uVar5;
                  func_0x014385cc(puVar16,uVar5);
                }
                else {
                  func_0x0152874c(iVar1,uVar5,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                }
                puVar14 = puVar14 + 1;
              }
              if (*(int *)(**(int **)(iRam01882b54 + 0x1882750) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar8 = func_0x0202346c(0);
              iVar9 = *piVar10;
              iVar7 = iVar9;
              if (iVar9 == 0) {
                func_0x014388e4();
                iVar7 = *piVar10;
                bVar21 = iVar7 == 0;
                if (bVar21) {
                  puVar20 = (undefined *)0x1882a94;
                  uVar11 = func_0x014388e4();
                  piStack_a4 = puVar13;
                  iStack_a8 = iVar8;
                  if (bVar21) {
                    *puVar14 = (char)&uStack_98;
                    puVar20 = &UNK_018a2134;
                    puVar14 = _UNK_0189e944;
                    piStack_a4 = _UNK_0189e050;
                    iStack_a8 = _UNK_0189debc;
                  }
                  pcVar6 = (char *)(_UNK_01882c7c + 0x1882b94);
                  puStack_a0 = (undefined1 *)iVar1;
                  puStack_9c = puVar20;
                  if (*pcVar6 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_01882c80 + 0x1882ba8));
                    *pcVar6 = '\x01';
                  }
                  iVar1 = func_0x02953fd4(0x93ee,0);
                  if (iVar1 != 0) {
                    iVar1 = func_0x029540a4(0x93ee,0);
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
                    iStack_a8 = iVar9;
                    piStack_a4 = piVar12;
                    puStack_a0 = puVar14;
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
                  piVar10 = *(int **)(_UNK_01882c84 + 0x1882c00);
                  if (*(int *)(*piVar10 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = FUN_0186d4b8();
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = FUN_0186ef6c(iVar1);
                  if (iVar1 == 0) {
                    return 0;
                  }
                  if (*(int *)(*piVar10 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = FUN_0186d4b8();
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  FUN_0186f780(iVar7,iVar1);
                  return 1;
                }
              }
              uVar11 = *(undefined4 *)(iVar7 + 0x10);
              uVar4 = *(undefined4 *)(iVar9 + 0xc);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02025168(iVar8,uVar4,uVar11,0x69);
              func_0x02028d38(&uStack_48,0xad,0);
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_0187fab8(uStack_58);
              if (*(int *)(**(int **)(iRam01882b58 + 0x1882818) + 0x74) == 0) {
                func_0x014387a4();
              }
              iStack_50 = func_0x014e96a8(**(undefined4 **)(iRam01882b5c + 0x1882834));
              if (*(int *)(**(int **)(iRam01882b60 + 0x1882848) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar7 = func_0x014e9518(**(undefined4 **)(iRam01882b64 + 0x1882864));
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar4 = uStack_44;
              uVar11 = uStack_48;
              uStack_64 = *puStack_60;
              uStack_68 = puStack_60[1];
              uVar19 = puStack_60[2];
              uVar15 = puStack_60[3];
              uVar18 = *puStack_5c;
              puStack_5c = (undefined4 *)puStack_5c[1];
              uStack_58 = *(undefined4 *)(iVar7 + 0x10);
              uVar5 = func_0x014388d4(**(undefined4 **)(iRam01882b68 + 0x18828b8));
              func_0x0152e3ec(uVar5,iStack_54,**(undefined4 **)(iRam01882b6c + 0x18828dc),0);
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
              uStack_88 = uVar19;
              uStack_84 = uVar15;
              uStack_80 = uVar18;
              uStack_78 = uVar5;
              iVar1 = func_0x02b75870(iStack_50,iVar1,uStack_58,1);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x93ea,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return iVar1;
}

