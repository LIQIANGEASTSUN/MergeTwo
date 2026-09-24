
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0175dfcc(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool bVar21;
  ulonglong uVar22;
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
  
  pcVar8 = (char *)(iRam0175e9e4 + 0x175dfec);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0175e9e8 + 0x175e000));
    func_0x01438628(*(undefined4 *)(iRam0175e9ec + 0x175e00c));
    func_0x01438628(*(undefined4 *)(iRam0175e9f0 + 0x175e018));
    func_0x01438628(*(undefined4 *)(iRam0175e9f4 + 0x175e024));
    func_0x01438628(*(undefined4 *)(iRam0175e9f8 + 0x175e030));
    func_0x01438628(*(undefined4 *)(iRam0175e9fc + 0x175e03c));
    func_0x01438628(*(undefined4 *)(iRam0175ea00 + 0x175e048));
    func_0x01438628(*(undefined4 *)(iRam0175ea04 + 0x175e054));
    func_0x01438628(*(undefined4 *)(iRam0175ea08 + 0x175e060));
    func_0x01438628(*(undefined4 *)(iRam0175ea0c + 0x175e06c));
    func_0x01438628(*(undefined4 *)(iRam0175ea10 + 0x175e078));
    func_0x01438628(*(undefined4 *)(iRam0175ea14 + 0x175e084));
    func_0x01438628(*(undefined4 *)(iRam0175ea18 + 0x175e090));
    func_0x01438628(*(undefined4 *)(iRam0175ea1c + 0x175e09c));
    func_0x01438628(*(undefined4 *)(iRam0175ea20 + 0x175e0a8));
    func_0x01438628(*(undefined4 *)(iRam0175ea24 + 0x175e0b4));
    func_0x01438628(*(undefined4 *)(iRam0175ea28 + 0x175e0c0));
    func_0x01438628(*(undefined4 *)(iRam0175ea2c + 0x175e0cc));
    func_0x01438628(*(undefined4 *)(iRam0175ea30 + 0x175e0d8));
    func_0x01438628(*(undefined4 *)(iRam0175ea34 + 0x175e0e4));
    func_0x01438628(*(undefined4 *)(iRam0175ea38 + 0x175e0f0));
    func_0x01438628(*(undefined4 *)(iRam0175ea3c + 0x175e0fc));
    func_0x01438628(*(undefined4 *)(iRam0175ea40 + 0x175e108));
    func_0x01438628(*(undefined4 *)(iRam0175ea44 + 0x175e114));
    func_0x01438628(*(undefined4 *)(iRam0175ea48 + 0x175e120));
    func_0x01438628(*(undefined4 *)(iRam0175ea4c + 0x175e12c));
    func_0x01438628(*(undefined4 *)(iRam0175ea50 + 0x175e138));
    func_0x01438628(*(undefined4 *)(iRam0175ea54 + 0x175e144));
    func_0x01438628(*(undefined4 *)(iRam0175ea58 + 0x175e150));
    *pcVar8 = '\x01';
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
  iVar2 = func_0x02953fd4(0x8d30,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(iRam0175ea5c + 0x175e1c4));
    func_0x0177ac54(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar2 + 0x10) = param_1;
    *(undefined4 *)(iVar2 + 8) = param_2;
    iStack_54 = iVar2;
    func_0x014385cc((undefined4 *)(iVar2 + 0x10),param_1);
    iVar9 = *(int *)(iVar2 + 8);
    uStack_58 = param_1;
    iVar2 = FUN_0175b530(param_1);
    if (iVar2 <= iVar9) {
      piVar12 = *(int **)(iRam0175ea60 + 0x175e21c);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar15 = *(undefined4 **)(iRam0175ea64 + 0x175e238);
      iVar2 = func_0x014e9518(*puVar15);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar14 = *(int **)(iRam0175ea68 + 0x175e258);
      iVar9 = *(int *)(iVar2 + 0x3c);
      iVar2 = *piVar14;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar14;
      }
      iVar10 = *(int *)(*(int *)(iVar2 + 0x5c) + 8);
      if (iVar10 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x014387a4();
          iVar2 = *piVar14;
        }
        uVar13 = **(undefined4 **)(iVar2 + 0x5c);
        iVar10 = func_0x014388d4(**(undefined4 **)(iRam0175ea6c + 0x175e2a8));
        func_0x024f0614(iVar10,uVar13,**(undefined4 **)(iRam0175ea70 + 0x175e2c8),0);
        piVar3 = (int *)(*(int *)(*piVar14 + 0x5c) + 8);
        *piVar3 = iVar10;
        func_0x014385cc(piVar3,iVar10);
      }
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x024f0618(iVar9,iVar10,**(undefined4 **)(iRam0175ea74 + 0x175e304));
      iVar2 = 0;
      if (iVar9 != 0) {
        iVar10 = func_0x014388d4(**(undefined4 **)(iRam0175ea78 + 0x175e324));
        func_0x024eed9c(iVar10,**(undefined4 **)(iRam0175ea7c + 0x175e338));
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(*puVar15);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        puStack_60 = &uStack_40;
        puStack_5c = &uStack_30;
        iVar11 = *(int *)(iVar2 + 0x40);
        iVar2 = 0;
        puVar15 = *(undefined4 **)(iRam0175ea80 + 0x175e390);
        puVar17 = *(undefined4 **)(iRam0175ea84 + 0x175e398);
        iStack_50 = iVar9;
        while( true ) {
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          iVar4 = iStack_54;
          if (*(int *)(iVar11 + 0xc) <= iVar2) break;
          piVar14 = *(int **)(iVar9 + 0x14);
          iVar4 = func_0x0152983c(iVar11,iVar2,*puVar15);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar13 = *(undefined4 *)(iVar4 + 8);
          if (piVar14 == (int *)0x0) {
            func_0x014388e4();
          }
          iVar4 = func_0x024f0f34(piVar14,uVar13,*puVar17);
          if (iVar4 != 0) {
            piVar14 = (int *)func_0x0152983c(iVar11,iVar2,*puVar15);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar9 = *(int *)(iVar10 + 8);
            uVar18 = *(uint *)(iVar10 + 0xc);
            piVar12 = *(int **)(iRam0175ea88 + 0x175e440);
            *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
            iVar4 = *piVar12;
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            if (uVar18 < *(uint *)(iVar9 + 0xc)) {
              *(uint *)(iVar10 + 0xc) = uVar18 + 1;
              puVar17 = (undefined4 *)(iVar9 + uVar18 * 4 + 0x10);
              *puVar17 = piVar14;
              func_0x014385cc(puVar17,piVar14);
            }
            else {
              func_0x0152874c(iVar10,piVar14,
                              *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
            }
            puVar17 = *(undefined4 **)(iRam0175ea8c + 0x175e4a0);
            iVar9 = iStack_50;
          }
          iVar2 = iVar2 + 1;
        }
        if (iStack_54 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar4 + 8);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar11 = iStack_54;
        iVar2 = *(int *)(iVar10 + 0xc);
        if (iVar9 < iVar2) {
          iVar2 = func_0x0152983c(iVar10,*(undefined4 *)(iStack_54 + 8),*puVar15);
          piVar12 = (int *)(iVar11 + 0xc);
          *piVar12 = iVar2;
          func_0x014385cc(piVar12,iVar2);
          iVar2 = 0;
          if (*piVar12 != 0) {
            iVar2 = *(int *)(*piVar12 + 0x14);
            if (iVar2 == 2) {
              if (*(int *)(**(int **)(iRam0175eac0 + 0x175e8a4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x0202346c(0);
              iVar9 = *piVar12;
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar9 + 8);
              uVar13 = func_0x01524ffc(&uStack_4c,0);
              iVar9 = *piVar12;
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              piVar14 = *(int **)(iVar9 + 0x10);
              if (piVar14 == (int *)0x0) {
                func_0x014388e4();
              }
              uVar6 = (**(code **)(*piVar14 + 0xd8))(piVar14,*(undefined4 *)(*piVar14 + 0xdc));
              if (iVar2 == 0) {
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
              func_0x020257a4(iVar2,0x326,uVar13,uVar6);
              if (*(int *)(**(int **)(iRam0175eac4 + 0x175e970) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x014e9518(**(undefined4 **)(iRam0175eac8 + 0x175e98c));
              iVar9 = *piVar12;
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              uVar13 = *(undefined4 *)(iVar9 + 0x18);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              iVar2 = func_0x02aac608(iVar2,uVar13,**(undefined4 **)(iRam0175eacc + 0x175e9c8),0);
            }
            else if (iVar2 == 1) {
              puVar5 = (undefined1 *)func_0x014388d4(**(undefined4 **)(iRam0175ea90 + 0x175e520));
              func_0x024eed9c(puVar5,**(undefined4 **)(iRam0175ea94 + 0x175e534));
              iVar2 = 0;
              puVar15 = *(undefined4 **)(iRam0175ea98 + 0x175e54c);
              while( true ) {
                iVar9 = *piVar12;
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar9 + 0xc);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar9 + 0xc) <= iVar2) break;
                iVar9 = *piVar12;
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar9 + 0xc);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                uVar13 = func_0x024f0530(iVar9,iVar2,*puVar15);
                iVar9 = *piVar12;
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar9 + 0x10);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                uVar6 = func_0x024f0530(iVar9,iVar2,*puVar15);
                uVar7 = func_0x014388d4(**(undefined4 **)(iRam0175ea9c + 0x175e5ec));
                uStack_98 = 0;
                func_0x02ca3c70(uVar7,uVar13,uVar6,0);
                if (puVar5 == (undefined1 *)0x0) {
                  func_0x014388e4();
                }
                iVar10 = *(int *)(puVar5 + 8);
                piVar14 = *(int **)(puVar5 + 0xc);
                piVar3 = *(int **)(iRam0175eaa0 + 0x175e63c);
                *(int *)(puVar5 + 0x10) = *(int *)(puVar5 + 0x10) + 1;
                iVar9 = *piVar3;
                if (iVar10 == 0) {
                  func_0x014388e4();
                }
                if (piVar14 < *(int **)(iVar10 + 0xc)) {
                  *(int *)(puVar5 + 0xc) = (int)piVar14 + 1;
                  puVar17 = (undefined4 *)(iVar10 + (int)piVar14 * 4 + 0x10);
                  *puVar17 = uVar7;
                  func_0x014385cc(puVar17,uVar7);
                }
                else {
                  func_0x0152874c(puVar5,uVar7,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
                }
                iVar2 = iVar2 + 1;
              }
              if (*(int *)(**(int **)(iRam0175eaa4 + 0x175e6a0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar10 = func_0x0202346c(0);
              iVar11 = *piVar12;
              iVar9 = iVar11;
              if (iVar11 == 0) {
                func_0x014388e4();
                iVar9 = *piVar12;
                bVar21 = iVar9 == 0;
                if (bVar21) {
                  uVar22 = func_0x014388e4();
                  iVar9 = (int)uVar22;
                  uVar13 = 0;
                  if (bVar21) {
                    uVar1 = *puVar5;
                    puVar5 = *(undefined1 **)(iVar9 + 0xae54);
                    iVar2 = *(int *)(iVar9 + 0xc9b0);
                    piVar14 = *(int **)(&__DT_SYMTAB[0xe].st_info + iVar9);
                    uVar22 = (ulonglong)CONCAT14(uVar1,iVar9 + 0x119f4);
                    uVar13 = *(undefined4 *)((int)&__DT_SYMTAB[0xf0].st_name + iVar9);
                  }
                  uStack_9c = 0x175e9e4;
                  pcVar8 = (char *)(_UNK_0175ebcc + 0x175eae4);
                  iStack_a8 = iVar10;
                  piStack_a4 = puVar15;
                  puStack_a0 = puVar5;
                  if (*pcVar8 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_0175ebd0 + 0x175eaf8),(int)(uVar22 >> 0x20)
                                   );
                    *pcVar8 = '\x01';
                  }
                  iVar9 = func_0x02953fd4(0x8d33,0);
                  if (iVar9 != 0) {
                    iVar9 = func_0x029540a4(0x8d33,0);
                    if (iVar9 == 0) {
                      func_0x014388e4();
                    }
                    puStack_ac = piStack_a4;
                    iStack_b0 = iStack_a8;
                    uStack_c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                    uStack_c0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                    uStack_bc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                    uStack_c8 = 0;
                    uStack_b8 = 0;
                    iStack_a8 = uVar13;
                    piStack_a4 = piVar14;
                    puStack_a0 = (undefined1 *)iVar2;
                    func_0x024f56c0(&uStack_e0,0,0);
                    uStack_c8 = uStack_e0;
                    uStack_c4 = uStack_dc;
                    uStack_c0 = uStack_d8;
                    uStack_bc = uStack_d4;
                    uStack_b8 = uStack_d0;
                    if (*(int *)(iVar9 + 0x10) != 0) {
                      func_0x01523a6c(&uStack_c8,*(int *)(iVar9 + 0x10),0);
                    }
                    func_0x01523a6c(&uStack_c8,(int)uVar22,0);
                    iVar10 = *(int *)(iVar9 + 8);
                    uVar13 = *(undefined4 *)(iVar9 + 0xc);
                    iVar2 = *(int *)(iVar9 + 0x10);
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    uVar6 = 2;
                    if (iVar2 == 0) {
                      uVar6 = 1;
                    }
                    func_0x024f56d0(iVar10,uVar13,&uStack_c8,uVar6,0,0);
                    iVar2 = func_0x024f56e0(&uStack_c8,0,0);
                    return iVar2;
                  }
                  piVar12 = *(int **)(_UNK_0175ebd4 + 0x175eb50);
                  if (*(int *)(*piVar12 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar2 = FUN_01747688();
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = FUN_0174913c(iVar2);
                  if (iVar2 == 0) {
                    return 0;
                  }
                  if (*(int *)(*piVar12 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar9 = FUN_01747688();
                  if (iVar9 == 0) {
                    func_0x014388e4();
                  }
                  FUN_01749798(iVar9,iVar2);
                  return 1;
                }
              }
              uVar13 = *(undefined4 *)(iVar9 + 0x10);
              uVar6 = *(undefined4 *)(iVar11 + 0xc);
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02025168(iVar10,uVar6,uVar13,0x7f);
              func_0x02028d38(&uStack_48,0x10f,0);
              iVar2 = *piVar12;
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar2 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_0175b59c(uStack_58);
              if (*(int *)(**(int **)(iRam0175eaa8 + 0x175e768) + 0x74) == 0) {
                func_0x014387a4();
              }
              iStack_50 = func_0x014e96a8(**(undefined4 **)(iRam0175eaac + 0x175e784));
              if (*(int *)(**(int **)(iRam0175eab0 + 0x175e798) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x014e9518(**(undefined4 **)(iRam0175eab4 + 0x175e7b4));
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              uVar6 = uStack_44;
              uVar13 = uStack_48;
              uStack_64 = *puStack_60;
              uStack_68 = puStack_60[1];
              uVar20 = puStack_60[2];
              uVar16 = puStack_60[3];
              uVar19 = *puStack_5c;
              puStack_5c = (undefined4 *)puStack_5c[1];
              uStack_58 = *(undefined4 *)(iVar2 + 0x10);
              uVar7 = func_0x014388d4(**(undefined4 **)(iRam0175eab8 + 0x175e808));
              func_0x0152e3ec(uVar7,iStack_54,**(undefined4 **)(iRam0175eabc + 0x175e82c),0);
              if (iStack_50 == 0) {
                func_0x014388e4();
              }
              uStack_90 = uStack_64;
              uStack_8c = uStack_68;
              uStack_7c = puStack_5c;
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_98 = uVar13;
              uStack_94 = uVar6;
              uStack_88 = uVar20;
              uStack_84 = uVar16;
              uStack_80 = uVar19;
              uStack_78 = uVar7;
              iVar2 = func_0x02b75870(iStack_50,puVar5,uStack_58,1);
            }
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x8d30,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0286c2b8(iVar2,param_1,param_2,0);
  }
  return iVar2;
}

