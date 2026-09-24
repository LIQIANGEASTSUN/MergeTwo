
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c47140(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint extraout_r1;
  int iVar7;
  uint uVar8;
  undefined4 *extraout_r2;
  int *piVar9;
  int extraout_r3;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  
  pcVar11 = (char *)(_UNK_02c471cc + 0x2c47154);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c471d0 + 0x2c47168));
    *pcVar11 = '\x01';
  }
  iVar12 = *(int *)(param_1 + 8);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  FUN_02c24960(iVar12,0);
  iVar12 = *(int *)(param_1 + 8);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar12 = *(int *)(iVar12 + 0x120);
  piVar10 = *(int **)(param_1 + 0xc);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar7 = **(int **)(_UNK_02c471d4 + 0x2c471c0);
  if (piVar10 == (int *)0x0) {
    func_0x05174af8(5,0);
  }
  if (*(int *)(iVar12 + 8) != 0) {
    piVar13 = *(int **)(iVar12 + 0x20);
    if (piVar13 == (int *)0x0) {
      if (piVar10 == (int *)0x0) {
        func_0x034a8a64();
      }
      uVar8 = (**(code **)(*piVar10 + 0xd0))(piVar10,*(undefined4 *)(*piVar10 + 0xd4));
    }
    else {
      iVar6 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x034a8ac8(iVar6);
      }
      iVar1 = *piVar13;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar6) {
            puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 200);
            goto LAB_04755384;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined4 *)func_0x034a8a54(piVar13,iVar6,1);
LAB_04755384:
      uVar8 = (*(code *)*puVar2)(piVar13,piVar10,puVar2[1]);
    }
    iVar1 = *(int *)(iVar12 + 8);
    iVar6 = iVar1;
    if (iVar1 == 0) {
      func_0x034a8a64();
      iVar6 = *(int *)(iVar12 + 8);
      if (iVar6 == 0) {
        uVar16 = func_0x034a8a64();
        uVar8 = func_0x04754248((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),
                                *(undefined4 *)
                                 (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
        if ((int)uVar8 < 0) {
          *extraout_r2 = 0;
        }
        else {
          iVar12 = *(int *)((int)uVar16 + 0xc);
          if (iVar12 == 0) {
            func_0x034a8a64();
          }
          if (*(uint *)(iVar12 + 0xc) <= uVar8) {
            func_0x034a8c14();
          }
          *extraout_r2 = *(undefined4 *)(iVar12 + uVar8 * 0x10 + 0x1c);
          func_0x034a8ab8(extraout_r2);
        }
        return ~uVar8 >> 0x1f;
      }
    }
    func_0x034a8cc4(uVar8 & 0x7fffffff,*(undefined4 *)(iVar1 + 0xc));
    if (*(uint *)(iVar6 + 0xc) <= extraout_r1) {
      func_0x034a8c14();
    }
    uVar3 = *(int *)(iVar6 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar3) {
      uVar15 = 0xffffffff;
      do {
        uVar4 = uVar3;
        iVar6 = *(int *)(iVar12 + 0xc);
        if (iVar6 == 0) {
          func_0x034a8a64();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar4) {
          func_0x034a8c14();
        }
        iVar6 = iVar6 + uVar4 * 0x10;
        if (*(uint *)(iVar6 + 0x10) == (uVar8 & 0x7fffffff)) {
          piVar13 = *(int **)(iVar12 + 0x20);
          if (piVar13 == (int *)0x0) {
            piVar13 = (int *)func_0x034a8d60(*(undefined4 *)
                                              (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0xc));
            uVar14 = *(undefined4 *)(iVar6 + 0x18);
            if (piVar13 == (int *)0x0) {
              func_0x034a8a64();
            }
            iVar1 = (**(code **)(*piVar13 + 0x100))
                              (piVar13,uVar14,piVar10,*(undefined4 *)(*piVar13 + 0x104));
          }
          else {
            uVar14 = *(undefined4 *)(iVar6 + 0x18);
            if (piVar13 == (int *)0x0) {
              func_0x034a8a64();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x034a8ac8(iVar1);
            }
            iVar5 = *piVar13;
            uVar3 = (uint)*(ushort *)(iVar5 + 0xb6);
            if (uVar3 != 0) {
              piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
              do {
                if (piVar9[-1] == iVar1) {
                  puVar2 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
                  goto LAB_04755528;
                }
                uVar3 = uVar3 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)func_0x034a8a54(piVar13,iVar1,0);
LAB_04755528:
            iVar1 = (*(code *)*puVar2)(piVar13,uVar14,piVar10,puVar2[1]);
          }
          if (iVar1 != 0) {
            if ((int)uVar15 < 0) {
              iVar7 = *(int *)(iVar12 + 8);
              iVar1 = *(int *)(iVar6 + 0x14);
              if (iVar7 == 0) {
                func_0x034a8a64();
              }
              if (*(uint *)(iVar7 + 0xc) <= extraout_r1) {
                func_0x034a8c14();
              }
              *(int *)(iVar7 + extraout_r1 * 4 + 0x10) = iVar1 + 1;
            }
            else {
              iVar7 = *(int *)(iVar12 + 0xc);
              if (iVar7 == 0) {
                func_0x034a8a64();
              }
              uVar14 = *(undefined4 *)(iVar6 + 0x14);
              if (*(uint *)(iVar7 + 0xc) <= uVar15) {
                func_0x034a8c14();
              }
              *(undefined4 *)(iVar7 + uVar15 * 0x10 + 0x14) = uVar14;
            }
            uVar14 = *(undefined4 *)(iVar12 + 0x14);
            *(undefined4 *)(iVar6 + 0x18) = 0;
            *(undefined4 *)(iVar6 + 0x1c) = 0;
            iVar7 = *(int *)(iVar12 + 0x18);
            iVar1 = *(int *)(iVar12 + 0x1c);
            *(uint *)(iVar6 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar6 + 0x14) = uVar14;
            *(uint *)(iVar12 + 0x14) = uVar4;
            *(int *)(iVar12 + 0x18) = iVar7 + 1;
            *(int *)(iVar12 + 0x1c) = iVar1 + 1;
            return 1;
          }
        }
        uVar3 = *(uint *)(iVar6 + 0x14);
        uVar15 = uVar4;
      } while (*(uint *)(iVar6 + 0x14) < 0x80000000);
    }
  }
  return 0;
}

