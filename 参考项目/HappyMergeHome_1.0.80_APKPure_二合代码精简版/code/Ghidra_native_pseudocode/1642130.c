
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01652130(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 extraout_r2;
  undefined1 extraout_r3;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  bool bVar23;
  undefined8 uVar24;
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
  
  pcVar10 = (char *)(iRam01652b48 + 0x1652150);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam01652b4c + 0x1652164));
    func_0x01438628(*(undefined4 *)(iRam01652b50 + 0x1652170));
    func_0x01438628(*(undefined4 *)(iRam01652b54 + 0x165217c));
    func_0x01438628(*(undefined4 *)(iRam01652b58 + 0x1652188));
    func_0x01438628(*(undefined4 *)(iRam01652b5c + 0x1652194));
    func_0x01438628(*(undefined4 *)(iRam01652b60 + 0x16521a0));
    func_0x01438628(*(undefined4 *)(iRam01652b64 + 0x16521ac));
    func_0x01438628(*(undefined4 *)(iRam01652b68 + 0x16521b8));
    func_0x01438628(*(undefined4 *)(iRam01652b6c + 0x16521c4));
    func_0x01438628(*(undefined4 *)(iRam01652b70 + 0x16521d0));
    func_0x01438628(*(undefined4 *)(iRam01652b74 + 0x16521dc));
    func_0x01438628(*(undefined4 *)(iRam01652b78 + 0x16521e8));
    func_0x01438628(*(undefined4 *)(iRam01652b7c + 0x16521f4));
    func_0x01438628(*(undefined4 *)(iRam01652b80 + 0x1652200));
    func_0x01438628(*(undefined4 *)(iRam01652b84 + 0x165220c));
    func_0x01438628(*(undefined4 *)(iRam01652b88 + 0x1652218));
    func_0x01438628(*(undefined4 *)(iRam01652b8c + 0x1652224));
    func_0x01438628(*(undefined4 *)(iRam01652b90 + 0x1652230));
    func_0x01438628(*(undefined4 *)(iRam01652b94 + 0x165223c));
    func_0x01438628(*(undefined4 *)(iRam01652b98 + 0x1652248));
    func_0x01438628(*(undefined4 *)(iRam01652b9c + 0x1652254));
    func_0x01438628(*(undefined4 *)(iRam01652ba0 + 0x1652260));
    func_0x01438628(*(undefined4 *)(iRam01652ba4 + 0x165226c));
    func_0x01438628(*(undefined4 *)(iRam01652ba8 + 0x1652278));
    func_0x01438628(*(undefined4 *)(iRam01652bac + 0x1652284));
    func_0x01438628(*(undefined4 *)(iRam01652bb0 + 0x1652290));
    func_0x01438628(*(undefined4 *)(iRam01652bb4 + 0x165229c));
    func_0x01438628(*(undefined4 *)(iRam01652bb8 + 0x16522a8));
    func_0x01438628(*(undefined4 *)(iRam01652bbc + 0x16522b4));
    *pcVar10 = '\x01';
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
  iVar3 = func_0x02953fd4(0x8649,0);
  if (iVar3 == 0) {
    iVar3 = func_0x014388d4(**(undefined4 **)(iRam01652bc0 + 0x1652328));
    func_0x01653b8c(iVar3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar3 + 0x10) = param_1;
    *(undefined4 *)(iVar3 + 8) = param_2;
    iStack_54 = iVar3;
    func_0x014385cc((undefined4 *)(iVar3 + 0x10),param_1);
    iVar11 = *(int *)(iVar3 + 8);
    uStack_58 = param_1;
    iVar3 = FUN_0164f694(param_1);
    if (iVar3 <= iVar11) {
      piVar14 = *(int **)(iRam01652bc4 + 0x1652380);
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar17 = *(undefined4 **)(iRam01652bc8 + 0x165239c);
      iVar3 = func_0x014e9518(*puVar17);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      piVar16 = *(int **)(iRam01652bcc + 0x16523bc);
      iVar11 = *(int *)(iVar3 + 0x3c);
      iVar3 = *piVar16;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
        iVar3 = *piVar16;
      }
      iVar12 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
      if (iVar12 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
          iVar3 = *piVar16;
        }
        uVar15 = **(undefined4 **)(iVar3 + 0x5c);
        iVar12 = func_0x014388d4(**(undefined4 **)(iRam01652bd0 + 0x165240c));
        func_0x024f0614(iVar12,uVar15,**(undefined4 **)(iRam01652bd4 + 0x165242c),0);
        piVar4 = (int *)(*(int *)(*piVar16 + 0x5c) + 8);
        *piVar4 = iVar12;
        func_0x014385cc(piVar4,iVar12);
      }
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar11 = func_0x024f0618(iVar11,iVar12,**(undefined4 **)(iRam01652bd8 + 0x1652468));
      iVar3 = 0;
      if (iVar11 != 0) {
        iVar12 = func_0x014388d4(**(undefined4 **)(iRam01652bdc + 0x1652488));
        func_0x024eed9c(iVar12,**(undefined4 **)(iRam01652be0 + 0x165249c));
        if (*(int *)(*piVar14 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(*puVar17);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        puStack_60 = &uStack_40;
        puStack_5c = &uStack_30;
        iVar13 = *(int *)(iVar3 + 0x40);
        iVar3 = 0;
        puVar17 = *(undefined4 **)(iRam01652be4 + 0x16524f4);
        puVar19 = *(undefined4 **)(iRam01652be8 + 0x16524fc);
        iStack_50 = iVar11;
        while( true ) {
          if (iVar13 == 0) {
            func_0x014388e4();
          }
          iVar5 = iStack_54;
          if (*(int *)(iVar13 + 0xc) <= iVar3) break;
          piVar16 = *(int **)(iVar11 + 0x14);
          iVar5 = func_0x0152983c(iVar13,iVar3,*puVar17);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar15 = *(undefined4 *)(iVar5 + 8);
          if (piVar16 == (int *)0x0) {
            func_0x014388e4();
          }
          iVar5 = func_0x024f0f34(piVar16,uVar15,*puVar19);
          if (iVar5 != 0) {
            piVar16 = (int *)func_0x0152983c(iVar13,iVar3,*puVar17);
            if (iVar12 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar12 + 8);
            uVar20 = *(uint *)(iVar12 + 0xc);
            piVar14 = *(int **)(iRam01652bec + 0x16525a4);
            *(int *)(iVar12 + 0x10) = *(int *)(iVar12 + 0x10) + 1;
            iVar5 = *piVar14;
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            if (uVar20 < *(uint *)(iVar11 + 0xc)) {
              *(uint *)(iVar12 + 0xc) = uVar20 + 1;
              puVar19 = (undefined4 *)(iVar11 + uVar20 * 4 + 0x10);
              *puVar19 = piVar16;
              func_0x014385cc(puVar19,piVar16);
            }
            else {
              func_0x0152874c(iVar12,piVar16,
                              *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
            }
            puVar19 = *(undefined4 **)(iRam01652bf0 + 0x1652604);
            iVar11 = iStack_50;
          }
          iVar3 = iVar3 + 1;
        }
        if (iStack_54 == 0) {
          func_0x014388e4();
        }
        iVar11 = *(int *)(iVar5 + 8);
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        iVar13 = iStack_54;
        iVar3 = *(int *)(iVar12 + 0xc);
        if (iVar11 < iVar3) {
          iVar3 = func_0x0152983c(iVar12,*(undefined4 *)(iStack_54 + 8),*puVar17);
          piVar14 = (int *)(iVar13 + 0xc);
          *piVar14 = iVar3;
          func_0x014385cc(piVar14,iVar3);
          iVar3 = 0;
          if (*piVar14 != 0) {
            iVar3 = *(int *)(*piVar14 + 0x14);
            if (iVar3 == 2) {
              if (*(int *)(**(int **)(iRam01652c24 + 0x1652a08) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = func_0x0202346c(0);
              iVar11 = *piVar14;
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar11 + 8);
              uVar15 = func_0x01524ffc(&uStack_4c,0);
              iVar11 = *piVar14;
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              piVar16 = *(int **)(iVar11 + 0x10);
              if (piVar16 == (int *)0x0) {
                func_0x014388e4();
              }
              uVar7 = (**(code **)(*piVar16 + 0xd8))(piVar16,*(undefined4 *)(*piVar16 + 0xdc));
              if (iVar3 == 0) {
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
              func_0x020257a4(iVar3,0x348,uVar15,uVar7);
              if (*(int *)(**(int **)(iRam01652c28 + 0x1652ad4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = func_0x014e9518(**(undefined4 **)(iRam01652c2c + 0x1652af0));
              iVar11 = *piVar14;
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              uVar15 = *(undefined4 *)(iVar11 + 0x18);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              iVar3 = func_0x02aac608(iVar3,uVar15,**(undefined4 **)(iRam01652c30 + 0x1652b2c),0);
            }
            else if (iVar3 == 1) {
              puVar6 = (undefined1 *)func_0x014388d4(**(undefined4 **)(iRam01652bf4 + 0x1652684));
              func_0x024eed9c(puVar6,**(undefined4 **)(iRam01652bf8 + 0x1652698));
              iVar3 = 0;
              puVar17 = *(undefined4 **)(iRam01652bfc + 0x16526b0);
              while( true ) {
                iVar11 = *piVar14;
                if (iVar11 == 0) {
                  func_0x014388e4();
                }
                iVar11 = *(int *)(iVar11 + 0xc);
                if (iVar11 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar11 + 0xc) <= iVar3) break;
                iVar11 = *piVar14;
                if (iVar11 == 0) {
                  func_0x014388e4();
                }
                iVar11 = *(int *)(iVar11 + 0xc);
                if (iVar11 == 0) {
                  func_0x014388e4();
                }
                uVar15 = func_0x024f0530(iVar11,iVar3,*puVar17);
                iVar11 = *piVar14;
                if (iVar11 == 0) {
                  func_0x014388e4();
                }
                iVar11 = *(int *)(iVar11 + 0x10);
                if (iVar11 == 0) {
                  func_0x014388e4();
                }
                uVar7 = func_0x024f0530(iVar11,iVar3,*puVar17);
                uVar8 = func_0x014388d4(**(undefined4 **)(iRam01652c00 + 0x1652750));
                uStack_98 = 0;
                func_0x02ca3c70(uVar8,uVar15,uVar7,0);
                if (puVar6 == (undefined1 *)0x0) {
                  func_0x014388e4();
                }
                iVar12 = *(int *)(puVar6 + 8);
                piVar16 = *(int **)(puVar6 + 0xc);
                piVar4 = *(int **)(iRam01652c04 + 0x16527a0);
                *(int *)(puVar6 + 0x10) = *(int *)(puVar6 + 0x10) + 1;
                iVar11 = *piVar4;
                if (iVar12 == 0) {
                  func_0x014388e4();
                }
                if (piVar16 < *(int **)(iVar12 + 0xc)) {
                  *(int *)(puVar6 + 0xc) = (int)piVar16 + 1;
                  puVar19 = (undefined4 *)(iVar12 + (int)piVar16 * 4 + 0x10);
                  *puVar19 = uVar8;
                  func_0x014385cc(puVar19,uVar8);
                }
                else {
                  func_0x0152874c(puVar6,uVar8,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                }
                iVar3 = iVar3 + 1;
              }
              if (*(int *)(**(int **)(iRam01652c08 + 0x1652804) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar12 = func_0x0202346c(0);
              iVar13 = *piVar14;
              iVar11 = iVar13;
              if (iVar13 == 0) {
                func_0x014388e4();
                iVar11 = *piVar14;
                bVar23 = iVar11 == 0;
                if (bVar23) {
                  uVar24 = func_0x014388e4();
                  puVar9 = (undefined1 *)((ulonglong)uVar24 >> 0x20);
                  uVar1 = (undefined1)iVar12;
                  uVar2 = SUB41(puVar17,0);
                  puStack_a0 = puVar6;
                  if (bVar23) {
                    puStack_a0 = puVar6 + 0x19d;
                    *puVar6 = (char)&uStack_98;
                    *puVar9 = extraout_r3;
                    puVar9[0x48] = uVar1;
                    puVar9[0x70c] = uVar2;
                    puVar9[0xc14] = uVar2;
                    puVar9[0x17b8] = uVar2;
                    puVar9[0x1df4] = uVar2;
                    puVar9[0x2984] = uVar1;
                    puVar9[0x316c] = uVar2;
                    puVar9[0x3ce8] = uVar2;
                    puVar9[0x4818] = uVar1;
                    puVar9[0x4954] = uVar2;
                    puVar9[0x5470] = uVar1;
                    puVar9[0x5598] = uVar2;
                    puVar9[0x60dc] = uVar1;
                    puVar9[0x6874] = uVar2;
                    puVar9[0x717c] = uVar1;
                    puVar9[0x7704] = uVar2;
                    puVar9[0x7d44] = uVar2;
                    puVar9[0x862c] = uVar1;
                    puVar9[0x8b9c] = uVar2;
                    puVar9[0x91bc] = uVar2;
                    puVar9[0x9ca4] = uVar2;
                    puVar9[0xa0cc] = uVar2;
                    puVar9[0xa6cc] = uVar2;
                    puVar9[0xacc4] = uVar2;
                    puVar9[0xb780] = uVar2;
                    puVar9[0xc234] = uVar2;
                    puVar9[0xcce0] = uVar2;
                    puVar9[0xd73c] = extraout_r2;
                    puVar9[0xe734] = uVar2;
                    puVar9[0xf154] = uVar2;
                    puVar9[0xf8ec] = uVar2;
                    puVar9[0x10064] = uVar2;
                    puVar9[0x109ac] = uVar2;
                    puVar9[0x112dc] = uVar2;
                    puVar9[0x11bf0] = uVar2;
                    puVar9[0x124b8] = uVar2;
                    puVar9[0x12d68] = uVar2;
                    puVar9[0x13600] = uVar2;
                    puVar9[0x13e04] = uVar2;
                    puVar9[0x140d8] = uVar2;
                    puVar9[0x14860] = uVar2;
                    puVar9[0x14a2c] = uVar1;
                    puVar9[0x14d40] = uVar1;
                    puVar9[0x1503c] = extraout_r3;
                    puVar9[0x15c9c] = uVar1;
                    puVar9[0x16bd4] = uVar1;
                    puVar9[0x17ab8] = uVar1;
                    puVar9[97000] = uVar1;
                    puVar9[0x18a8c] = uVar1;
                    puVar9[0x19a10] = uVar1;
                    puVar9[0x1a97c] = uVar1;
                    puVar9[0x1b8c8] = extraout_r2;
                    puVar9[0x1c108] = uVar2;
                    puVar9[0x1c4bc] = extraout_r3;
                    puVar9[0x1d2e8] = extraout_r3;
                    puVar6 = puVar9 + 0x1ec70;
                    puVar9[0x1dfc0] = extraout_r3;
                    puVar9 = puVar9 + 0x1f3f0;
                    *puVar6 = extraout_r2;
                  }
                  uStack_9c = 0x1652b48;
                  pcVar10 = (char *)(_UNK_01652d30 + 0x1652c48);
                  iStack_a8 = iVar12;
                  piStack_a4 = puVar17;
                  if (*pcVar10 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_01652d34 + 0x1652c5c),puVar9);
                    *pcVar10 = '\x01';
                  }
                  iVar11 = func_0x02953fd4(0x864c,0);
                  if (iVar11 != 0) {
                    iVar11 = func_0x029540a4(0x864c,0);
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    puStack_ac = piStack_a4;
                    iStack_b0 = iStack_a8;
                    uStack_c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                    uStack_c0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                    uStack_bc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                    uStack_c8 = 0;
                    uStack_b8 = 0;
                    iStack_a8 = iVar13;
                    piStack_a4 = piVar16;
                    puStack_a0 = (undefined1 *)iVar3;
                    func_0x024f56c0(&uStack_e0,0,0);
                    uStack_c8 = uStack_e0;
                    uStack_c4 = uStack_dc;
                    uStack_c0 = uStack_d8;
                    uStack_bc = uStack_d4;
                    uStack_b8 = uStack_d0;
                    if (*(int *)(iVar11 + 0x10) != 0) {
                      func_0x01523a6c(&uStack_c8,*(int *)(iVar11 + 0x10),0);
                    }
                    func_0x01523a6c(&uStack_c8,(int)uVar24,0);
                    iVar12 = *(int *)(iVar11 + 8);
                    uVar15 = *(undefined4 *)(iVar11 + 0xc);
                    iVar3 = *(int *)(iVar11 + 0x10);
                    if (iVar12 == 0) {
                      func_0x014388e4();
                    }
                    uVar7 = 2;
                    if (iVar3 == 0) {
                      uVar7 = 1;
                    }
                    func_0x024f56d0(iVar12,uVar15,&uStack_c8,uVar7,0,0);
                    iVar3 = func_0x024f56e0(&uStack_c8,0,0);
                    return iVar3;
                  }
                  piVar14 = *(int **)(_UNK_01652d38 + 0x1652cb4);
                  if (*(int *)(*piVar14 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar3 = FUN_0163b7ec();
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = FUN_0163d2a0(iVar3);
                  if (iVar3 == 0) {
                    return 0;
                  }
                  if (*(int *)(*piVar14 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar11 = FUN_0163b7ec();
                  if (iVar11 == 0) {
                    func_0x014388e4();
                  }
                  FUN_0163d8fc(iVar11,iVar3);
                  return 1;
                }
              }
              uVar15 = *(undefined4 *)(iVar11 + 0x10);
              uVar7 = *(undefined4 *)(iVar13 + 0xc);
              if (iVar12 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02025168(iVar12,uVar7,uVar15,0x84);
              func_0x02028d38(&uStack_48,0x124,0);
              iVar3 = *piVar14;
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar3 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_0164f700(uStack_58);
              if (*(int *)(**(int **)(iRam01652c0c + 0x16528cc) + 0x74) == 0) {
                func_0x014387a4();
              }
              iStack_50 = func_0x014e96a8(**(undefined4 **)(iRam01652c10 + 0x16528e8));
              if (*(int *)(**(int **)(iRam01652c14 + 0x16528fc) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = func_0x014e9518(**(undefined4 **)(iRam01652c18 + 0x1652918));
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar7 = uStack_44;
              uVar15 = uStack_48;
              uStack_64 = *puStack_60;
              uStack_68 = puStack_60[1];
              uVar22 = puStack_60[2];
              uVar18 = puStack_60[3];
              uVar21 = *puStack_5c;
              puStack_5c = (undefined4 *)puStack_5c[1];
              uStack_58 = *(undefined4 *)(iVar3 + 0x10);
              uVar8 = func_0x014388d4(**(undefined4 **)(iRam01652c1c + 0x165296c));
              func_0x0152e3ec(uVar8,iStack_54,**(undefined4 **)(iRam01652c20 + 0x1652990),0);
              if (iStack_50 == 0) {
                func_0x014388e4();
              }
              uStack_90 = uStack_64;
              uStack_8c = uStack_68;
              uStack_7c = puStack_5c;
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_98 = uVar15;
              uStack_94 = uVar7;
              uStack_88 = uVar22;
              uStack_84 = uVar18;
              uStack_80 = uVar21;
              uStack_78 = uVar8;
              iVar3 = func_0x02b75870(iStack_50,puVar6,uStack_58,1);
            }
          }
        }
      }
    }
  }
  else {
    iVar3 = func_0x029540a4(0x8649,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0286c2b8(iVar3,param_1,param_2,0);
  }
  return iVar3;
}

