
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018497ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *extraout_r2;
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
  undefined1 *extraout_r12;
  undefined1 *puVar19;
  bool bVar20;
  undefined8 uVar21;
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
  
  pcVar6 = (char *)(iRam0184a1c4 + 0x18497cc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0184a1c8 + 0x18497e0));
    func_0x01438628(*(undefined4 *)(iRam0184a1cc + 0x18497ec));
    func_0x01438628(*(undefined4 *)(iRam0184a1d0 + 0x18497f8));
    func_0x01438628(*(undefined4 *)(iRam0184a1d4 + 0x1849804));
    func_0x01438628(*(undefined4 *)(iRam0184a1d8 + 0x1849810));
    func_0x01438628(*(undefined4 *)(iRam0184a1dc + 0x184981c));
    func_0x01438628(*(undefined4 *)(iRam0184a1e0 + 0x1849828));
    func_0x01438628(*(undefined4 *)(iRam0184a1e4 + 0x1849834));
    func_0x01438628(*(undefined4 *)(iRam0184a1e8 + 0x1849840));
    func_0x01438628(*(undefined4 *)(iRam0184a1ec + 0x184984c));
    func_0x01438628(*(undefined4 *)(iRam0184a1f0 + 0x1849858));
    func_0x01438628(*(undefined4 *)(iRam0184a1f4 + 0x1849864));
    func_0x01438628(*(undefined4 *)(iRam0184a1f8 + 0x1849870));
    func_0x01438628(*(undefined4 *)(iRam0184a1fc + 0x184987c));
    func_0x01438628(*(undefined4 *)(iRam0184a200 + 0x1849888));
    func_0x01438628(*(undefined4 *)(iRam0184a204 + 0x1849894));
    func_0x01438628(*(undefined4 *)(iRam0184a208 + 0x18498a0));
    func_0x01438628(*(undefined4 *)(iRam0184a20c + 0x18498ac));
    func_0x01438628(*(undefined4 *)(iRam0184a210 + 0x18498b8));
    func_0x01438628(*(undefined4 *)(iRam0184a214 + 0x18498c4));
    func_0x01438628(*(undefined4 *)(iRam0184a218 + 0x18498d0));
    func_0x01438628(*(undefined4 *)(iRam0184a21c + 0x18498dc));
    func_0x01438628(*(undefined4 *)(iRam0184a220 + 0x18498e8));
    func_0x01438628(*(undefined4 *)(iRam0184a224 + 0x18498f4));
    func_0x01438628(*(undefined4 *)(iRam0184a228 + 0x1849900));
    func_0x01438628(*(undefined4 *)(iRam0184a22c + 0x184990c));
    func_0x01438628(*(undefined4 *)(iRam0184a230 + 0x1849918));
    func_0x01438628(*(undefined4 *)(iRam0184a234 + 0x1849924));
    func_0x01438628(*(undefined4 *)(iRam0184a238 + 0x1849930));
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
  iVar1 = func_0x02953fd4(0x9271,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(iRam0184a23c + 0x18499a4));
    func_0x0184b208(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
    iStack_54 = iVar1;
    func_0x014385cc((undefined4 *)(iVar1 + 0x10),param_1);
    iVar7 = *(int *)(iVar1 + 8);
    uStack_58 = param_1;
    iVar1 = FUN_0184717c(param_1);
    if (iVar1 <= iVar7) {
      piVar10 = *(int **)(iRam0184a240 + 0x18499fc);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar13 = *(undefined4 **)(iRam0184a244 + 0x1849a18);
      iVar1 = func_0x014e9518(*puVar13);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar12 = *(int **)(iRam0184a248 + 0x1849a38);
      iVar7 = *(int *)(iVar1 + 0x3c);
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
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam0184a24c + 0x1849a88));
        func_0x024f0614(iVar8,uVar11,**(undefined4 **)(iRam0184a250 + 0x1849aa8),0);
        piVar2 = (int *)(*(int *)(*piVar12 + 0x5c) + 8);
        *piVar2 = iVar8;
        func_0x014385cc(piVar2,iVar8);
      }
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x024f0618(iVar7,iVar8,**(undefined4 **)(iRam0184a254 + 0x1849ae4));
      iVar1 = 0;
      if (iVar7 != 0) {
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam0184a258 + 0x1849b04));
        func_0x024eed9c(iVar8,**(undefined4 **)(iRam0184a25c + 0x1849b18));
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar13);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puStack_60 = &uStack_40;
        puStack_5c = &uStack_30;
        iVar9 = *(int *)(iVar1 + 0x40);
        iVar1 = 0;
        puVar13 = *(undefined4 **)(iRam0184a260 + 0x1849b70);
        puVar15 = *(undefined4 **)(iRam0184a264 + 0x1849b78);
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
            piVar10 = *(int **)(iRam0184a268 + 0x1849c20);
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
            puVar15 = *(undefined4 **)(iRam0184a26c + 0x1849c80);
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
              if (*(int *)(**(int **)(iRam0184a2a0 + 0x184a084) + 0x74) == 0) {
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
              func_0x020257a4(iVar1,0x2ab,uVar11,uVar4);
              if (*(int *)(**(int **)(iRam0184a2a4 + 0x184a150) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(iRam0184a2a8 + 0x184a16c));
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar11 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              iVar1 = func_0x02aac608(iVar1,uVar11,**(undefined4 **)(iRam0184a2ac + 0x184a1a8),0);
            }
            else if (iVar1 == 1) {
              iVar1 = func_0x014388d4(**(undefined4 **)(iRam0184a270 + 0x1849d00));
              func_0x024eed9c(iVar1,**(undefined4 **)(iRam0184a274 + 0x1849d14));
              iVar7 = 0;
              puVar13 = *(undefined4 **)(iRam0184a278 + 0x1849d2c);
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
                uVar5 = func_0x014388d4(**(undefined4 **)(iRam0184a27c + 0x1849dcc));
                uStack_98 = 0;
                func_0x02ca3c70(uVar5,uVar11,uVar4,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar1 + 8);
                piVar12 = *(int **)(iVar1 + 0xc);
                piVar2 = *(int **)(iRam0184a280 + 0x1849e1c);
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
              if (*(int *)(**(int **)(iRam0184a284 + 0x1849e80) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar9 = func_0x0202346c(0);
              iVar3 = *piVar10;
              iVar8 = iVar3;
              if (iVar3 == 0) {
                func_0x014388e4();
                iVar8 = *piVar10;
                bVar20 = iVar8 == 0;
                if (bVar20) {
                  uVar21 = func_0x014388e4();
                  piVar10 = (int *)((ulonglong)uVar21 >> 0x20);
                  uVar11 = (undefined4)uVar21;
                  if (bVar20) {
                    puVar19 = extraout_r12 + 0x617;
                    *extraout_r12 = 0;
                    *piVar10 = iVar1;
                    piVar10[0x273] = (int)&uStack_98;
                    *extraout_r2 = piVar10 + 0x285;
                    piVar10[0x285] = (int)&uStack_98;
                    piVar10[0x625] = (int)&uStack_98;
                    extraout_r2[0x99] = piVar10 + 0xa15;
                    piVar2 = piVar10 + 0xa70;
                    piVar10[0xa15] = (int)&uStack_98;
                    extraout_r2[0x12a] = piVar2;
                    extraout_r2[0x1b6] = piVar2;
                    *piVar2 = (int)puVar19;
                    piVar10[0xd20] = (int)puVar19;
                    extraout_r2[0x240] = piVar10 + 0xfce;
                    piVar2 = piVar10 + 0x1018;
                    piVar10[0xfce] = (int)&uStack_98;
                    extraout_r2[0x2c2] = piVar2;
                    extraout_r2[0x33f] = piVar2;
                    *piVar2 = (int)puVar19;
                    piVar10[0x13db] = (int)&uStack_98;
                    extraout_r2[0x369] = piVar10 + 0x17cc;
                    piVar10[0x17cc] = (int)puVar19;
                    piVar10[0x1b89] = (int)&uStack_98;
                    extraout_r2[0x38b] = piVar10 + 0x1f72;
                    piVar10[0x1f72] = (int)&uStack_98;
                    piVar10[0x22dd] = (int)&uStack_98;
                    piVar2 = piVar10 + 0x2a9d;
                    piVar10[0x26be] = (int)&uStack_98;
                    extraout_r2[0x3f4] = piVar2;
                    extraout_r2[0x452] = piVar2;
                    extraout_r2[0x4ae] = piVar2;
                    extraout_r2[0x508] = piVar2;
                    *piVar2 = iVar1;
                    extraout_r2[0x54c] = piVar10 + 0x2cfc;
                    extraout_r2[0x583] = uVar11;
                    extraout_r2[0x951] = uVar11;
                    extraout_r2[0xd17] = uVar11;
                    extraout_r2[0x1116] = uVar11;
                    extraout_r2[0x1511] = uVar11;
                    extraout_r2[0x1905] = uVar11;
                    extraout_r2[0x1ce4] = uVar11;
                    extraout_r2[0x20bf] = uVar11;
                    extraout_r2[0x2492] = uVar11;
                    piVar10[0x2cfc] = (int)&uStack_98;
                    extraout_r2[0x2851] = uVar11;
                    piVar10[0x3012] = (int)&uStack_98;
                    piVar10[0x32e6] = (int)puVar19;
                    piVar10[0x360c] = (int)puVar19;
                    piVar10[0x392c] = (int)puVar19;
                    piVar10[0x3aa5] = (int)&uStack_98;
                    piVar10[0x3cd4] = (int)&uStack_98;
                    piVar10[0x3eee] = (int)puVar19;
                    piVar10[0x415b] = (int)&uStack_98;
                    piVar10[0x43a5] = (int)&uStack_98;
                    piVar10[0x45e7] = (int)&uStack_98;
                    piVar10[0x4823] = (int)&uStack_98;
                    piVar10[0x4a57] = iVar1;
                    extraout_r2[0x2be0] = uVar11;
                    piVar10[0x4ac8] = (int)puVar19;
                    piVar10[0x4cb4] = (int)puVar19;
                    piVar2 = piVar10 + 0x4fd8;
                    piVar10[0x4e4b] = (int)puVar19;
                    piVar10 = piVar10 + 0x5019;
                    *piVar2 = iVar1;
                  }
                  uStack_9c = 0x184a1c4;
                  pcVar6 = (char *)(_UNK_0184a3ac + 0x184a2c4);
                  iStack_a8 = iVar9;
                  piStack_a4 = puVar13;
                  iStack_a0 = iVar1;
                  if (*pcVar6 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_0184a3b0 + 0x184a2d8),piVar10);
                    *pcVar6 = '\x01';
                  }
                  iVar1 = func_0x02953fd4(0x9275,0);
                  if (iVar1 != 0) {
                    iVar1 = func_0x029540a4(0x9275,0);
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
                  piVar10 = *(int **)(_UNK_0184a3b4 + 0x184a330);
                  if (*(int *)(*piVar10 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = FUN_01833590();
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = FUN_01835044(iVar1);
                  if (iVar1 == 0) {
                    return 0;
                  }
                  if (*(int *)(*piVar10 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = FUN_01833590();
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  FUN_01835858(iVar7,iVar1);
                  return 1;
                }
              }
              uVar11 = *(undefined4 *)(iVar8 + 0x10);
              uVar4 = *(undefined4 *)(iVar3 + 0xc);
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02025168(iVar9,uVar4,uVar11,0x6d);
              func_0x02028d38(&uStack_48,0xc2,0);
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_018471e8(uStack_58);
              if (*(int *)(**(int **)(iRam0184a288 + 0x1849f48) + 0x74) == 0) {
                func_0x014387a4();
              }
              iStack_50 = func_0x014e96a8(**(undefined4 **)(iRam0184a28c + 0x1849f64));
              if (*(int *)(**(int **)(iRam0184a290 + 0x1849f78) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar7 = func_0x014e9518(**(undefined4 **)(iRam0184a294 + 0x1849f94));
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
              uVar5 = func_0x014388d4(**(undefined4 **)(iRam0184a298 + 0x1849fe8));
              func_0x0152e3ec(uVar5,iStack_54,**(undefined4 **)(iRam0184a29c + 0x184a00c),0);
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
    iVar1 = func_0x029540a4(0x9271,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return iVar1;
}

