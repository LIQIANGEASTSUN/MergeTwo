
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bdd814(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  int iStack_44;
  
  pcVar13 = (char *)(_UNK_02bddd48 + 0x2bdd834);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bddd4c + 0x2bdd84c));
    *pcVar13 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x689,0);
  if (iVar1 == 0) {
    uVar19 = FUN_02bad204(param_1,param_2,param_3);
    iVar1 = (int)((ulonglong)uVar19 >> 0x20);
    iVar2 = (int)uVar19;
    if (iVar2 != 0) {
      if (param_4 == 0) {
        iVar1 = *(int *)(iVar2 + 8);
      }
      if ((param_4 == 0 && iVar1 == -1) && (*(int *)(iVar2 + 0xc) != 10)) {
        return param_2;
      }
    }
    iVar1 = FUN_02bd0e74(param_1,param_3);
    iVar3 = FUN_02bd0fbc(param_1,param_3);
    iVar4 = func_0x014e5f78(param_2,iVar1);
    iVar14 = param_2 - iVar4 * iVar1;
    if (*(int *)(**(int **)(_UNK_02bddd50 + 0x2bdd918) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar5 = func_0x0152ae0c(iVar1 - iVar14,iVar14,0);
    uVar6 = func_0x0152ae0c(iVar3 - iVar4,iVar4,0);
    iVar7 = func_0x0152ae0c(uVar5,uVar6,0);
    if (0 < iVar7) {
      iVar12 = 1;
      iStack_44 = param_2 - iVar4 * iVar1;
      iVar17 = iVar1 * (iVar4 + 1);
      do {
        iStack_44 = iStack_44 + 1;
        iVar8 = iVar12 + iVar4;
        iVar16 = iVar12 + iVar14;
        iVar15 = iVar14;
        if (iVar8 < iVar3) {
          while( true ) {
            if (*(int *)(**(int **)(_UNK_02bddd54 + 0x2bdd9d4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar9 = func_0x0152adfc(iVar16,iVar1 + -1,0);
            if (iVar9 < iVar15) break;
            iVar9 = FUN_02bad204(param_1,iVar17 + iVar15,param_3);
            if (((iVar9 != 0) && (*(int *)(iVar9 + 8) == -1)) && (*(int *)(iVar9 + 0xc) != 10)) {
              return iVar17 + iVar15;
            }
            iVar15 = iVar15 + 1;
          }
        }
        if (iVar16 < iVar1) {
          if (*(int *)(**(int **)(_UNK_02bddd58 + 0x2bdda54) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar9 = func_0x0152ae0c(iVar8 + -1,0,0);
          iVar15 = iVar4 - iVar12;
          if (iVar15 <= iVar9) {
            iVar11 = iVar1 * iVar9 + iStack_44;
            do {
              iVar10 = FUN_02bad204(param_1,iVar11,param_3);
              if (((iVar10 != 0) && (*(int *)(iVar10 + 8) == -1)) && (*(int *)(iVar10 + 0xc) != 10))
              {
                return iVar11;
              }
              iVar9 = iVar9 + -1;
              iVar11 = iVar11 - iVar1;
            } while (iVar15 <= iVar9);
          }
        }
        else {
          iVar15 = iVar4 - iVar12;
        }
        if (iVar15 < 0) {
          iVar16 = iVar14 - iVar12;
        }
        else {
          if (*(int *)(**(int **)(_UNK_02bddd5c + 0x2bddb18) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar9 = func_0x0152adfc(iVar16 + -1,iVar1 + -1,0);
          iVar16 = iVar14 - iVar12;
          while( true ) {
            if (*(int *)(**(int **)(_UNK_02bddd60 + 0x2bddb5c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar11 = func_0x0152ae0c(iVar16,0,0);
            if (iVar9 < iVar11) break;
            iVar11 = FUN_02bad204(param_1,iVar15 * iVar1 + iVar9,param_3);
            if (((iVar11 != 0) && (*(int *)(iVar11 + 8) == -1)) && (*(int *)(iVar11 + 0xc) != 10)) {
              return iVar1 * iVar15 + iVar9;
            }
            iVar9 = iVar9 + -1;
          }
        }
        if (-1 < iVar12) {
          iVar9 = iVar1 * iVar15 + iVar16;
          while( true ) {
            if (*(int *)(**(int **)(_UNK_02bddd64 + 0x2bddbec) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar11 = func_0x0152adfc(iVar8,iVar3 + -1,0);
            if (iVar11 < iVar15) break;
            iVar11 = FUN_02bad204(param_1,iVar9,param_3);
            if (((iVar11 != 0) && (*(int *)(iVar11 + 8) == -1)) && (*(int *)(iVar11 + 0xc) != 10)) {
              return iVar9;
            }
            iVar9 = iVar9 + iVar1;
            iVar15 = iVar15 + 1;
          }
        }
        bVar18 = SBORROW4(iVar16,iVar14);
        iVar15 = iVar16 - iVar14;
        iVar9 = param_2;
        if (iVar16 <= iVar14) {
          bVar18 = SBORROW4(iVar8,iVar3);
          iVar15 = iVar8 - iVar3;
          iVar9 = iVar14;
        }
        if (iVar15 < 0 != bVar18) {
          do {
            iVar15 = FUN_02bad204(param_1,iVar17 + iVar16,param_3);
            if (((iVar15 != 0) && (*(int *)(iVar15 + 8) == -1)) && (*(int *)(iVar15 + 0xc) != 10)) {
              return iVar17 + iVar16;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 <= iVar9);
        }
        iVar12 = iVar12 + 1;
        iVar17 = iVar17 + iVar1;
      } while (iVar12 <= iVar7);
    }
    if (iVar2 != 0) {
      iVar7 = param_4;
    }
    if ((iVar2 != 0 && iVar7 != 0) && (*(int *)(iVar2 + 8) == -1)) {
      if (*(int *)(iVar2 + 0xc) == 10) {
        param_2 = -1;
      }
    }
    else {
      param_2 = -1;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x689,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    param_2 = func_0x02880f28(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return param_2;
}

