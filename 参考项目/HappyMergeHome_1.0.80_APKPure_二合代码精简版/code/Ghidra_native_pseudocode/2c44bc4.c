
/* WARNING: Possible PIC construction at 0x02c54d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c54dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c54e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c54e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c54ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c54e9c) */
/* WARNING: Removing unreachable block (ram,0x02c54ee4) */
/* WARNING: Removing unreachable block (ram,0x02c54ee8) */
/* WARNING: Removing unreachable block (ram,0x02c54e20) */
/* WARNING: Removing unreachable block (ram,0x02c54e44) */
/* WARNING: Removing unreachable block (ram,0x02c54e4c) */
/* WARNING: Removing unreachable block (ram,0x02c54e84) */
/* WARNING: Removing unreachable block (ram,0x02c54e88) */
/* WARNING: Removing unreachable block (ram,0x02c54dc0) */
/* WARNING: Removing unreachable block (ram,0x02c54e08) */
/* WARNING: Removing unreachable block (ram,0x02c54e0c) */
/* WARNING: Removing unreachable block (ram,0x02c54d60) */
/* WARNING: Removing unreachable block (ram,0x02c54da8) */
/* WARNING: Removing unreachable block (ram,0x02c54dac) */
/* WARNING: Removing unreachable block (ram,0x02c54efc) */
/* WARNING: Removing unreachable block (ram,0x02c54f44) */
/* WARNING: Removing unreachable block (ram,0x02c54f48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c54bc4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  undefined4 *extraout_r2;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined8 uVar18;
  int iStack_48;
  int *piStack_44;
  int *piStack_40;
  undefined4 *puStack_3c;
  int *piStack_38;
  int *piStack_34;
  
  pcVar11 = (char *)(_UNK_02c54f64 + 0x2c54bdc);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c54f68 + 0x2c54bf0));
    func_0x01438628(*(undefined4 *)(_UNK_02c54f6c + 0x2c54bfc));
    func_0x01438628(*(undefined4 *)(_UNK_02c54f70 + 0x2c54c08));
    func_0x01438628(*(undefined4 *)(_UNK_02c54f74 + 0x2c54c14));
    func_0x01438628(*(undefined4 *)(_UNK_02c54f78 + 0x2c54c20));
    func_0x01438628(*(undefined4 *)(_UNK_02c54f7c + 0x2c54c2c));
    func_0x01438628(*(undefined4 *)(_UNK_02c54f80 + 0x2c54c38));
    func_0x01438628(*(undefined4 *)(_UNK_02c54f84 + 0x2c54c44));
    func_0x01438628(*(undefined4 *)(_UNK_02c54f88 + 0x2c54c50));
    func_0x01438628(*(undefined4 *)(_UNK_02c54f8c + 0x2c54c5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c54f90 + 0x2c54c68));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5f70,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5f70,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x024f56c0(&iStack_48,0,0);
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar9 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar7 = 2;
    if (iVar3 == 0) {
      uVar7 = 1;
    }
    uVar1 = func_0x024f56d0(iVar9,uVar12,&stack0xffffffd0,uVar7,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_02c54f94 + 0x2c54cc4) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar14 = *(undefined4 **)(_UNK_02c54f98 + 0x2c54ce0);
  iVar3 = func_0x014e9518(*puVar14);
  piVar15 = *(int **)(_UNK_02c54f9c + 0x2c54cf4);
  iVar9 = *piVar15;
  if (*(int *)(iVar9 + 0x74) == 0) {
    func_0x014387a4();
    iVar9 = *piVar15;
  }
  puVar16 = *(undefined4 **)(_UNK_02c54fa0 + 0x2c54d18);
  piVar13 = (int *)**(undefined4 **)(iVar9 + 0x5c);
  uVar12 = func_0x014388d4(*puVar16);
  func_0x038ec9e8(uVar12,param_1,**(undefined4 **)(_UNK_02c54fa4 + 0x2c54d38),0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar11 = (char *)(_UNK_02990188 + 0x298ffbc);
  iStack_48 = param_1;
  piStack_44 = (int *)iVar3;
  piStack_40 = piVar13;
  puStack_3c = (undefined4 *)uVar12;
  piStack_38 = puVar14;
  piStack_34 = piVar15;
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0299018c + 0x298ffd0),piVar13,uVar12,0);
    func_0x01438628(*(undefined4 *)(_UNK_02990190 + 0x298ffdc));
    func_0x01438628(*(undefined4 *)(_UNK_02990194 + 0x298ffe8));
    func_0x01438628(*(undefined4 *)(_UNK_02990198 + 0x298fff4));
    func_0x01438628(*(undefined4 *)(_UNK_0299019c + 0x2990000));
    *pcVar11 = '\x01';
  }
  iVar9 = func_0x02953fd4(0x235c,0);
  if (iVar9 == 0) {
    iVar9 = *(int *)(iVar3 + 0x14);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x04753c80(iVar9,piVar13,**(undefined4 **)(_UNK_029901a0 + 0x2990078));
    uVar1 = 0;
    if (iVar9 != 0) {
      iVar9 = *(int *)(iVar3 + 0x14);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      puVar14 = *(undefined4 **)(_UNK_029901a4 + 0x29900ac);
      uVar7 = func_0x0475399c(iVar9,piVar13,*puVar14);
      iVar10 = 0;
      iVar2 = func_0x014e9618(uVar7,uVar12,0);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != 0) {
        uVar12 = **(undefined4 **)(_UNK_029901a8 + 0x29900e4);
        iVar10 = func_0x014387a8(iVar2,uVar12);
        if (iVar10 == 0) {
          func_0x01438ca8(iVar2,uVar12);
          iVar10 = 0;
        }
      }
      func_0x04753a0c(iVar9,piVar13,iVar10,**(undefined4 **)(_UNK_029901ac + 0x2990120));
      iVar9 = *(int *)(iVar3 + 0x14);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar1 = func_0x0475399c(iVar9,piVar13,*puVar14);
      if (uVar1 == 0) {
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        piVar8 = piStack_38;
        puVar14 = puStack_3c;
        piVar15 = piStack_40;
        iStack_48 = (int)piStack_44;
        iVar9 = **(int **)(_UNK_029901b0 + 0x2990178);
        piStack_38 = piStack_34;
        puStack_3c = piVar8;
        piStack_40 = puVar14;
        piStack_44 = piVar15;
        piStack_34 = puVar16;
        if (piVar13 == (int *)0x0) {
          func_0x05174af8(5,0);
        }
        if (*(int *)(iVar3 + 8) != 0) {
          piVar15 = *(int **)(iVar3 + 0x20);
          if (piVar15 == (int *)0x0) {
            if (piVar13 == (int *)0x0) {
              func_0x034a8a64();
            }
            uVar1 = (**(code **)(*piVar13 + 0xd0))(piVar13,*(undefined4 *)(*piVar13 + 0xd4));
          }
          else {
            iVar2 = *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x034a8ac8(iVar2);
            }
            iVar10 = *piVar15;
            uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar1 != 0) {
              piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar2) {
                  puVar14 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
                  goto LAB_04755384;
                }
                uVar1 = uVar1 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar1 != 0);
            }
            puVar14 = (undefined4 *)func_0x034a8a54(piVar15,iVar2,1);
LAB_04755384:
            uVar1 = (*(code *)*puVar14)(piVar15,piVar13,puVar14[1]);
          }
          iVar10 = *(int *)(iVar3 + 8);
          iVar2 = iVar10;
          if (iVar10 == 0) {
            func_0x034a8a64();
            iVar2 = *(int *)(iVar3 + 8);
            if (iVar2 == 0) {
              uVar18 = func_0x034a8a64();
              uVar1 = func_0x04754248((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
              if ((int)uVar1 < 0) {
                *extraout_r2 = 0;
              }
              else {
                iVar3 = *(int *)((int)uVar18 + 0xc);
                if (iVar3 == 0) {
                  func_0x034a8a64();
                }
                if (*(uint *)(iVar3 + 0xc) <= uVar1) {
                  func_0x034a8c14();
                }
                *extraout_r2 = *(undefined4 *)(iVar3 + uVar1 * 0x10 + 0x1c);
                func_0x034a8ab8(extraout_r2);
              }
              return ~uVar1 >> 0x1f;
            }
          }
          uVar1 = uVar1 & 0x7fffffff;
          func_0x034a8cc4(uVar1,*(undefined4 *)(iVar10 + 0xc));
          if (*(uint *)(iVar2 + 0xc) <= extraout_r1) {
            func_0x034a8c14();
          }
          uVar4 = *(int *)(iVar2 + extraout_r1 * 4 + 0x10) - 1;
          if (-1 < (int)uVar4) {
            uVar17 = 0xffffffff;
            do {
              uVar5 = uVar4;
              iVar2 = *(int *)(iVar3 + 0xc);
              if (iVar2 == 0) {
                func_0x034a8a64();
              }
              if (*(uint *)(iVar2 + 0xc) <= uVar5) {
                func_0x034a8c14();
              }
              iVar2 = iVar2 + uVar5 * 0x10;
              if (*(uint *)(iVar2 + 0x10) == uVar1) {
                piVar15 = *(int **)(iVar3 + 0x20);
                if (piVar15 == (int *)0x0) {
                  piVar15 = (int *)func_0x034a8d60(*(undefined4 *)
                                                    (*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0xc))
                  ;
                  uVar12 = *(undefined4 *)(iVar2 + 0x18);
                  if (piVar15 == (int *)0x0) {
                    func_0x034a8a64();
                  }
                  iVar10 = (**(code **)(*piVar15 + 0x100))
                                     (piVar15,uVar12,piVar13,*(undefined4 *)(*piVar15 + 0x104));
                }
                else {
                  uVar12 = *(undefined4 *)(iVar2 + 0x18);
                  if (piVar15 == (int *)0x0) {
                    func_0x034a8a64();
                  }
                  iVar10 = *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                    iVar10 = func_0x034a8ac8(iVar10);
                  }
                  iVar6 = *piVar15;
                  uVar4 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar4 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar10) {
                        puVar14 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_04755528;
                      }
                      uVar4 = uVar4 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar4 != 0);
                  }
                  puVar14 = (undefined4 *)func_0x034a8a54(piVar15,iVar10,0);
LAB_04755528:
                  iVar10 = (*(code *)*puVar14)(piVar15,uVar12,piVar13,puVar14[1]);
                }
                if (iVar10 != 0) {
                  if ((int)uVar17 < 0) {
                    iVar9 = *(int *)(iVar3 + 8);
                    iVar10 = *(int *)(iVar2 + 0x14);
                    if (iVar9 == 0) {
                      func_0x034a8a64();
                    }
                    if (*(uint *)(iVar9 + 0xc) <= extraout_r1) {
                      func_0x034a8c14();
                    }
                    *(int *)(iVar9 + extraout_r1 * 4 + 0x10) = iVar10 + 1;
                  }
                  else {
                    iVar9 = *(int *)(iVar3 + 0xc);
                    if (iVar9 == 0) {
                      func_0x034a8a64();
                    }
                    uVar12 = *(undefined4 *)(iVar2 + 0x14);
                    if (*(uint *)(iVar9 + 0xc) <= uVar17) {
                      func_0x034a8c14();
                    }
                    *(undefined4 *)(iVar9 + uVar17 * 0x10 + 0x14) = uVar12;
                  }
                  uVar12 = *(undefined4 *)(iVar3 + 0x14);
                  *(undefined4 *)(iVar2 + 0x18) = 0;
                  *(undefined4 *)(iVar2 + 0x1c) = 0;
                  iVar9 = *(int *)(iVar3 + 0x18);
                  iVar10 = *(int *)(iVar3 + 0x1c);
                  *(uint *)(iVar2 + 0x10) = 0xffffffff;
                  *(undefined4 *)(iVar2 + 0x14) = uVar12;
                  *(uint *)(iVar3 + 0x14) = uVar5;
                  *(int *)(iVar3 + 0x18) = iVar9 + 1;
                  *(int *)(iVar3 + 0x1c) = iVar10 + 1;
                  return 1;
                }
              }
              uVar4 = *(uint *)(iVar2 + 0x14);
              uVar17 = uVar5;
            } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
          }
        }
        return 0;
      }
    }
  }
  else {
    iVar9 = func_0x029540a4(0x235c,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar1 = func_0x028691b4(iVar9,iVar3,piVar13,uVar12,0);
  }
  return uVar1;
}

