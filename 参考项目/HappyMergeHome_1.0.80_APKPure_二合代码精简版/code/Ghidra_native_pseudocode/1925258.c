
/* WARNING: Removing unreachable block (ram,0x01935cb0) */
/* WARNING: Removing unreachable block (ram,0x01935d10) */
/* WARNING: Removing unreachable block (ram,0x01935c40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01935258(undefined4 param_1,undefined4 param_2)

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
  
  pcVar6 = (char *)(iRam01935c38 + 0x1935278);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam01935c3c + 0x193528c));
    func_0x01438628(*(undefined4 *)(iRam01935c40 + 0x1935298));
    func_0x01438628(*(undefined4 *)(iRam01935c44 + 0x19352a4));
    func_0x01438628(*(undefined4 *)(iRam01935c48 + 0x19352b0));
    func_0x01438628(*(undefined4 *)(iRam01935c4c + 0x19352bc));
    func_0x01438628(*(undefined4 *)(iRam01935c50 + 0x19352c8));
    func_0x01438628(*(undefined4 *)(iRam01935c54 + 0x19352d4));
    func_0x01438628(*(undefined4 *)(iRam01935c58 + 0x19352e0));
    func_0x01438628(*(undefined4 *)(iRam01935c5c + 0x19352ec));
    func_0x01438628(*(undefined4 *)(iRam01935c60 + 0x19352f8));
    func_0x01438628(*(undefined4 *)(iRam01935c64 + 0x1935304));
    func_0x01438628(*(undefined4 *)(iRam01935c68 + 0x1935310));
    func_0x01438628(*(undefined4 *)(iRam01935c6c + 0x193531c));
    func_0x01438628(*(undefined4 *)(iRam01935c70 + 0x1935328));
    func_0x01438628(*(undefined4 *)(iRam01935c74 + 0x1935334));
    func_0x01438628(*(undefined4 *)(iRam01935c78 + 0x1935340));
    func_0x01438628(*(undefined4 *)(iRam01935c7c + 0x193534c));
    func_0x01438628(*(undefined4 *)(iRam01935c80 + 0x1935358));
    func_0x01438628(*(undefined4 *)(iRam01935c84 + 0x1935364));
    func_0x01438628(*(undefined4 *)(iRam01935c88 + 0x1935370));
    func_0x01438628(*(undefined4 *)(iRam01935c8c + 0x193537c));
    func_0x01438628(*(undefined4 *)(iRam01935c90 + 0x1935388));
    func_0x01438628(*(undefined4 *)(iRam01935c94 + 0x1935394));
    func_0x01438628(*(undefined4 *)(iRam01935c98 + 0x19353a0));
    func_0x01438628(*(undefined4 *)(iRam01935c9c + 0x19353ac));
    func_0x01438628(*(undefined4 *)(iRam01935ca0 + 0x19353b8));
    func_0x01438628(*(undefined4 *)(iRam01935ca4 + 0x19353c4));
    func_0x01438628(*(undefined4 *)(iRam01935ca8 + 0x19353d0));
    func_0x01438628(*(undefined4 *)(iRam01935cac + 0x19353dc));
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
  iVar1 = func_0x02953fd4(0x97c1,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(iRam01935cb0 + 0x1935450));
    func_0x0193721c(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
    iStack_54 = iVar1;
    func_0x014385cc((undefined4 *)(iVar1 + 0x10),param_1);
    iVar7 = *(int *)(iVar1 + 8);
    uStack_58 = param_1;
    iVar1 = FUN_01932f94(param_1);
    if (iVar1 <= iVar7) {
      piVar10 = *(int **)(iRam01935cb4 + 0x19354a8);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar13 = *(undefined4 **)(iRam01935cb8 + 0x19354c4);
      iVar1 = func_0x014e9518(*puVar13);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar12 = *(int **)(iRam01935cbc + 0x19354e4);
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
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam01935cc0 + 0x1935534));
        func_0x024f0614(iVar8,uVar11,**(undefined4 **)(iRam01935cc4 + 0x1935554),0);
        piVar2 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
        *piVar2 = iVar8;
        func_0x014385cc(piVar2,iVar8);
      }
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x024f0618(iVar7,iVar8,**(undefined4 **)(iRam01935cc8 + 0x1935590));
      iVar1 = 0;
      if (iVar7 != 0) {
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam01935ccc + 0x19355b0));
        func_0x024eed9c(iVar8,**(undefined4 **)(iRam01935cd0 + 0x19355c4));
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
        puVar13 = *(undefined4 **)(iRam01935cd4 + 0x193561c);
        puVar15 = *(undefined4 **)(iRam01935cd8 + 0x1935624);
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
            piVar10 = *(int **)(iRam01935cdc + 0x19356cc);
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
            puVar15 = *(undefined4 **)(iRam01935ce0 + 0x193572c);
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
              if (*(int *)(**(int **)(iRam01935d14 + 0x1935b30) + 0x74) == 0) {
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
              func_0x020257a4(iVar1,0x355,uVar11,0);
              if (*(int *)(**(int **)(iRam01935d18 + 0x1935bc4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(iRam01935d1c + 0x1935be0));
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar11 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              iVar1 = func_0x02aac608(iVar1,uVar11,**(undefined4 **)(iRam01935d20 + 0x1935c1c),0);
            }
            else if (iVar1 == 1) {
              iVar1 = func_0x014388d4(**(undefined4 **)(iRam01935ce4 + 0x19357ac));
              func_0x024eed9c(iVar1,**(undefined4 **)(iRam01935ce8 + 0x19357c0));
              iVar7 = 0;
              puVar13 = *(undefined4 **)(iRam01935cec + 0x19357d8);
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
                uVar5 = func_0x014388d4(**(undefined4 **)(iRam01935cf0 + 0x1935878));
                uStack_98 = 0;
                func_0x02ca3c70(uVar5,uVar11,uVar4,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar1 + 8);
                piVar12 = *(int **)(iVar1 + 0xc);
                piVar2 = *(int **)(iRam01935cf4 + 0x19358c8);
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
              if (*(int *)(**(int **)(iRam01935cf8 + 0x193592c) + 0x74) == 0) {
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
                  uVar20 = func_0x014388e4();
                  uVar11 = (undefined4)((ulonglong)uVar20 >> 0x20);
                  if (bVar19) {
                    /* WARNING: Could not recover jumptable at 0x01935c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    iVar1 = (*(code *)*extraout_r2)((int)uVar20,uVar11,extraout_r2 + 0x3c8);
                    return iVar1;
                  }
                  uStack_9c = 0x1935c38;
                  pcVar6 = (char *)(_UNK_01935e20 + 0x1935d38);
                  iStack_a8 = iVar9;
                  piStack_a4 = puVar13;
                  iStack_a0 = iVar1;
                  if (*pcVar6 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_01935e24 + 0x1935d4c),uVar11);
                    *pcVar6 = '\x01';
                  }
                  iVar1 = func_0x02953fd4(0x97c4,0);
                  if (iVar1 != 0) {
                    iVar1 = func_0x029540a4(0x97c4,0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iStack_b0 = iStack_a8;
                    iStack_a8 = 0;
                    puStack_ac = piStack_a4;
                    uStack_c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                    uStack_c0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                    uStack_bc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                    uStack_c8 = 0;
                    uStack_b8 = 0;
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
                    func_0x024f56d0(iVar7,uVar11,&uStack_c8,uVar4);
                    iVar1 = func_0x024f56e0(&uStack_c8,0,0);
                    return iVar1;
                  }
                  piVar10 = *(int **)(_UNK_01935e28 + 0x1935da4);
                  if (*(int *)(*piVar10 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = FUN_01920184();
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = FUN_01921d74(iVar1);
                  if (iVar1 != 0) {
                    if (*(int *)(*piVar10 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar7 = FUN_01920184();
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    FUN_019223d8(iVar7,iVar1);
                    return 1;
                  }
                  return 0;
                }
              }
              uVar11 = *(undefined4 *)(iVar8 + 0x10);
              uVar4 = *(undefined4 *)(iVar3 + 0xc);
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02025168(iVar9,uVar4,uVar11,0x85);
              func_0x02028d38(&uStack_48,299,0);
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_01933000(uStack_58);
              if (*(int *)(**(int **)(iRam01935cfc + 0x19359f4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iStack_50 = func_0x014e96a8(**(undefined4 **)(iRam01935d00 + 0x1935a10));
              if (*(int *)(**(int **)(iRam01935d04 + 0x1935a24) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar7 = func_0x014e9518(**(undefined4 **)(iRam01935d08 + 0x1935a40));
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
              uVar5 = func_0x014388d4(**(undefined4 **)(iRam01935d0c + 0x1935a94));
              func_0x0152e3ec(uVar5,iStack_54,**(undefined4 **)(iRam01935d10 + 0x1935ab8),0);
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
    iVar1 = func_0x029540a4(0x97c1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return iVar1;
}

