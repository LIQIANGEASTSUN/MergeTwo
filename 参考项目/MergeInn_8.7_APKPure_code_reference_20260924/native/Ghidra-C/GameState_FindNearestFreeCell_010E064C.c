// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.FindNearestFreeCell 0x10E064C; GameState.FindNearestFreeCell (candidate)
// Image base: 0x10000; Ghidra address: 010f064c; native size hint: 0x4E0


int GameState_FindNearestFreeCell_010E064C(int param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  
  pcVar13 = (char *)(iRam010f0aec + 0x10f0674);
  if (*pcVar13 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f0af0 + 0x10f068c));
    func_0x00f6b160(*(undefined4 *)(iRam010f0af4 + 0x10f0698));
    func_0x00f6b160(*(undefined4 *)(iRam010f0af8 + 0x10f06a4));
    func_0x00f6b160(*(undefined4 *)(iRam010f0afc + 0x10f06b0));
    *pcVar13 = '\x01';
  }
  if (*(int *)(**(int **)(iRam010f0b00 + 0x10f06c4) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar1 = func_0x02007e9c(param_4,0,0);
  if (iVar1 != 0) {
    uVar2 = func_0x00f6b3c4(**(undefined4 **)(iRam010f0b04 + 0x10f06f8));
    func_0x0152e284(uVar2,**(undefined4 **)(iRam010f0b08 + 0x10f0714),0);
    if (*(int *)(**(int **)(iRam010f0b0c + 0x10f0728) + 0x74) == 0) {
      func_0x00f6b294();
    }
    func_0x0200818c(uVar2,0);
    return 0;
  }
  if (param_4 == 0) {
    func_0x00f6b3d0();
  }
  iVar14 = *(int *)(param_4 + 0x14);
  iVar16 = *(int *)(param_4 + 0x18);
  iVar1 = func_0x010f4aa4(param_1,iVar14 + -1,iVar16);
  iVar3 = func_0x010f4aa4(param_1,iVar14 + 1,iVar16);
  iVar4 = func_0x010f4aa4(param_1,iVar14,iVar16 + -1);
  iVar5 = func_0x010f4aa4(param_1,iVar14,iVar16 + 1);
  if (ABS(param_3) < ABS(param_2)) {
    iVar17 = iVar3;
    if (0.0 < param_2) {
      iVar17 = iVar1;
    }
  }
  else {
    iVar17 = iVar5;
    if (0.0 < param_3) {
      iVar17 = iVar4;
    }
  }
  pcVar13 = (char *)(iRam010f0b10 + 0x10f0800);
  if (*pcVar13 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f0b14 + 0x10f0814));
    *pcVar13 = '\x01';
  }
  pfVar6 = *(float **)(**(int **)(iRam010f0b18 + 0x10f0828) + 0x5c);
  fVar19 = param_3 - pfVar6[1];
  fVar18 = param_2 - *pfVar6;
  if ((fVar19 * fVar19 + fVar18 * fVar18 < fRam010f0ae8) && (*(char *)(param_4 + 0x28) != '\0')) {
    iVar17 = param_4;
  }
  if (*(int *)(**(int **)(iRam010f0b1c + 0x10f086c) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar7 = func_0x020081fc(iVar17,0);
  if (iVar7 != 0) {
    if (iVar17 == 0) {
      func_0x00f6b3d0();
    }
    if (*(char *)(iVar17 + 0x28) != '\0') goto LAB_010f08d8;
  }
  if (ABS(param_3) < ABS(param_2)) {
    iVar17 = iVar5;
    if (0.0 < param_3) {
      iVar17 = iVar4;
    }
  }
  else {
    iVar17 = iVar3;
    if (0.0 < param_2) {
      iVar17 = iVar1;
    }
  }
LAB_010f08d8:
  if (*(int *)(**(int **)(iRam010f0b20 + 0x10f08e4) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar1 = func_0x020081fc(iVar17,0);
  if (iVar1 != 0) {
    if (iVar17 == 0) {
      func_0x00f6b3d0();
    }
    if (*(char *)(iVar17 + 0x28) != '\0') {
      return iVar17;
    }
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
    iVar3 = func_0x03083e58(0,0,0);
    func_0x00f6b3d0();
    iVar4 = func_0x03083e58(0,1,0);
    func_0x00f6b3d0();
  }
  else {
    iVar3 = func_0x03083e58(iVar1,0,0);
    iVar4 = func_0x03083e58(iVar1,1,0);
  }
  iVar5 = 0;
  uVar8 = func_0x03080834(iVar1,0,0);
  if ((int)uVar8 <= iVar3) {
    iVar17 = 0x7fffffff;
    iVar5 = 0;
    do {
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      for (uVar9 = func_0x03080834(iVar1,1,0); (int)uVar9 <= iVar4; uVar9 = uVar9 + 1) {
        if (iVar1 == 0) {
          func_0x00f6b3d0();
        }
        puVar10 = *(uint **)(iVar1 + 8);
        if (*puVar10 <= uVar8) {
          func_0x00f6b3d4();
          puVar10 = *(uint **)(iVar1 + 8);
        }
        uVar15 = puVar10[2];
        if (uVar15 <= uVar9) {
          func_0x00f6b3d4();
        }
        iVar7 = *(int *)(iVar1 + (uVar8 * uVar15 + uVar9) * 4 + 0x10);
        if (*(int *)(**(int **)(iRam010f0b24 + 0x10f0a24) + 0x74) == 0) {
          func_0x00f6b294();
        }
        iVar11 = func_0x020081fc(iVar7,0);
        if (iVar11 != 0) {
          if (iVar7 == 0) {
            func_0x00f6b3d0();
          }
          uVar2 = *(undefined4 *)(iVar7 + 0x24);
          if (*(int *)(**(int **)(iRam010f0b28 + 0x10f0a68) + 0x74) == 0) {
            func_0x00f6b294();
          }
          iVar11 = func_0x020081fc(uVar2,0);
          if ((iVar11 == 0) &&
             (iVar11 = iVar14 - *(int *)(iVar7 + 0x14), iVar12 = iVar16 - *(int *)(iVar7 + 0x18),
             iVar11 = iVar12 * iVar12 + iVar11 * iVar11, iVar11 < iVar17)) {
            iVar17 = iVar11;
            iVar5 = iVar7;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 <= iVar3);
  }
  return iVar5;
}

