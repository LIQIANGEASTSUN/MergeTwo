/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BoardExtremeHandler$$.ctor RVA 0x2bf5f90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c05f90(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_02c06138 + 0x2c05fb0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0613c + 0x2c05fc4));
    func_0x01384978(*(undefined4 *)(_UNK_02c06140 + 0x2c05fd0));
    func_0x01384978(*(undefined4 *)(_UNK_02c06144 + 0x2c05fdc));
    func_0x01384978(*(undefined4 *)(_UNK_02c06148 + 0x2c05fe8));
    func_0x01384978(*(undefined4 *)(_UNK_02c0614c + 0x2c05ff4));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  func_0x04874ed4(param_1,0);
  if (param_2 == 0) {
    uStack_24 = 0;
    puVar5 = *(undefined4 **)(_UNK_02c06164 + 0x2c060d0);
    *(undefined4 *)(param_1 + 8) = 0;
    uVar4 = *puVar5;
  }
  else {
    puVar5 = *(undefined4 **)(_UNK_02c06150 + 0x2c06024);
    uVar3 = *puVar5;
    iVar1 = func_0x01384ab8(param_2,uVar3);
    if (iVar1 == 0) {
      func_0x01384fb4(param_2,uVar3);
    }
    uVar3 = *puVar5;
    *(int *)(param_1 + 8) = iVar1;
    iVar1 = func_0x01384ab8(param_2,uVar3);
    if (iVar1 == 0) {
      func_0x01384fb4(param_2,uVar3);
    }
    if (*(int *)(param_1 + 8) != 0) goto LAB_02c0612c;
    uVar4 = **(undefined4 **)(_UNK_02c06154 + 0x2c0608c);
    uVar3 = FUN_02b3c4a4(param_2,0);
    uStack_24 = 0;
    uStack_28 = 0;
    func_0x0350813c(&uStack_28,uVar3,**(undefined4 **)(_UNK_02c06158 + 0x2c060a4));
    uVar3 = uStack_28;
  }
  uStack_28 = uVar3;
  uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02c0615c + 0x2c060e0),&uStack_28);
  uVar3 = func_0x046604e4(uVar4,uVar3,0);
  if (*(int *)(**(int **)(_UNK_02c06160 + 0x2c06110) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar3,0);
LAB_02c0612c:
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



// ===== FAT.BoardExtremeHandler$$OnBoardItemChange RVA 0x2bf6168 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c06168(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x785a,0);
  if (iVar1 == 0) {
    pcVar7 = (char *)(_UNK_02c062e4 + 0x2c061d4);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c062e8 + 0x2c061e8));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x785b,0);
    if (iVar1 == 0) {
      piVar8 = *(int **)(param_1 + 8);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_02c062ec + 0x2c06254)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
            goto LAB_02c0629c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02c062ec + 0x2c06254),1);
LAB_02c0629c:
      iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
      if (iVar1 == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x14) != '\0') {
        return;
      }
      iVar1 = func_0x02c067c8(param_1);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x14) = 1;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x785b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x785a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar9,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.BoardExtremeHandler$$_CheckBoardExtremeCase RVA 0x2bf61c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c061c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02c062e4 + 0x2c061d4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c062e8 + 0x2c061e8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x785b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x785b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar9,&uStack_30,uVar4,0,0);
    return;
  }
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02c062ec + 0x2c06254)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
        goto LAB_02c0629c;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02c062ec + 0x2c06254),1);
LAB_02c0629c:
  iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar1 = func_0x02c067c8(param_1);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x14) = 1;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    return;
  }
  return;
}



// ===== FAT.BoardExtremeHandler$$OnActivityUpdate RVA 0x2bf62f0 =====

void FUN_02c062f0(int param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x78a6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    param_2 = *(float *)(param_1 + 0x10) + param_2;
    *(float *)(param_1 + 0x10) = param_2;
    if (param_2 <= 1.0) {
      return;
    }
    func_0x02c06384(param_1);
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



// ===== FAT.BoardExtremeHandler$$_ExecuteExtremeCase RVA 0x2bf6384 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c06384(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02c06734 + 0x2c0639c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c06738 + 0x2c063b0));
    func_0x01384978(*(undefined4 *)(_UNK_02c0673c + 0x2c063bc));
    func_0x01384978(*(undefined4 *)(_UNK_02c06740 + 0x2c063c8));
    func_0x01384978(*(undefined4 *)(_UNK_02c06744 + 0x2c063d4));
    func_0x01384978(*(undefined4 *)(_UNK_02c06748 + 0x2c063e0));
    func_0x01384978(*(undefined4 *)(_UNK_02c0674c + 0x2c063ec));
    func_0x01384978(*(undefined4 *)(_UNK_02c06750 + 0x2c063f8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78a7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78a7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar9,uVar11,&iStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02c06754 + 0x2c06454));
  func_0x04874ed4(iVar1,0);
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar7 = *(int **)(param_1 + 8);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02c06758 + 0x2c06490)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar5 * 8 + 0xc0);
          goto LAB_02c064d8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02c06758 + 0x2c06490),0);
LAB_02c064d8:
    iVar9 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 8) = iVar9;
    if ((iVar9 != 0) && (iVar9 = func_0x02c067c8(param_1), iVar9 != 0)) {
      if (*(int *)(**(int **)(_UNK_02c0675c + 0x2c06520) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar9 = func_0x0300d558(**(undefined4 **)(_UNK_02c06760 + 0x2c0653c));
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar9,0);
      iVar9 = func_0x01c24918(0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar9 + 0x10);
      iVar8 = **(int **)(_UNK_02c06764 + 0x2c06580);
      iVar9 = *(int *)(iVar8 + 0x1c);
      if (iVar9 == 0) {
        func_0x0140024c(iVar8);
        iVar9 = *(int *)(iVar8 + 0x1c);
      }
      iVar9 = *(int *)(iVar9 + 8);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x014001f0();
      }
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar9 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x014001f0();
      }
      uVar11 = **(undefined4 **)(iVar9 + 0x5c);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x01ca1c50(iVar12,0x47,uVar11,0);
      iVar9 = *(int *)(iVar1 + 8);
      uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_02c06768 + 0x2c06610));
      func_0x03ccb96c(uVar11,iVar1,**(undefined4 **)(_UNK_02c0676c + 0x2c0662c),0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x020dba14(iVar9,uVar11,0);
      if (*(int *)(param_1 + 0xc) != 3) {
        iVar9 = *(int *)(iVar1 + 8);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar8 = 0;
        func_0x020da680(&iStack_30,iVar9,0);
        uStack_34 = uStack_2c;
        do {
          uVar11 = func_0x02c069a0(param_1,uStack_34,iVar8);
          if (0 < iStack_30) {
            iVar9 = 0;
            do {
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar12 = *(int *)(iVar1 + 8);
              if (iVar12 == 0) {
                func_0x01384bf0();
              }
              iVar12 = func_0x020e81ec(iVar12,iVar9,uVar11,0);
              if (iVar12 != 0) {
                iVar10 = *(int *)(iVar1 + 8);
                if (iVar10 == 0) {
                  func_0x01384bf0();
                }
                func_0x020df438(iVar10,iVar12,1,0);
              }
              iVar9 = iVar9 + 1;
            } while (iStack_30 != iVar9);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != 2);
      }
    }
  }
  return;
}



// ===== FAT.BoardExtremeHandler$$CheckBoardExtremeCase RVA 0x2bf6770 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c06770(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = func_0x0229f06c(0x78a4,0);
  if (iVar2 == 0) {
    pcVar7 = (char *)(_UNK_02c062e4 + 0x2c061d4);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c062e8 + 0x2c061e8));
      *pcVar7 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x785b,0);
    if (iVar2 == 0) {
      piVar8 = *(int **)(param_1 + 8);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_02c062ec + 0x2c06254)) {
            puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 200);
            goto LAB_02c0629c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02c062ec + 0x2c06254),1);
LAB_02c0629c:
      iVar2 = (*(code *)*puVar1)(piVar8,puVar1[1]);
      if (iVar2 == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x14) != '\0') {
        return;
      }
      iVar2 = func_0x02c067c8(param_1);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x14) = 1;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x785b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x78a4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar9,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.BoardExtremeHandler$$_CheckHasExtremeCase RVA 0x2bf67c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c067c8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02c06984 + 0x2c067dc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c06988 + 0x2c067f0));
    func_0x01384978(*(undefined4 *)(_UNK_02c0698c + 0x2c067fc));
    *pcVar6 = '\x01';
  }
  uVar10 = 0;
  iVar1 = func_0x0229f06c(0x785c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x785c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar4,0,0);
    uVar10 = func_0x0245496c(&uStack_30,0,0);
    return uVar10;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar8 = *(int **)(param_1 + 8);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02c06990 + 0x2c06878)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_02c068c0;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02c06990 + 0x2c06878),0);
LAB_02c068c0:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar1 != 0) {
      uVar10 = 0;
      iVar7 = func_0x020ece38(iVar1,0);
      if (iVar7 == 0) {
        uVar10 = 0;
        iVar1 = func_0x020eccb8(iVar1,0);
        if (iVar1 == 0) {
          iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_02c06994 + 0x2c06914));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01ddc2c0(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
            func_0x01e267a0(0,1,0);
            func_0x01384bf0();
          }
          else {
            func_0x01e267a0(iVar1,1,0);
          }
          uVar10 = func_0x01e241b4(iVar1,0);
          uVar10 = uVar10 ^ 1;
        }
      }
    }
  }
  return uVar10;
}



// ===== FAT.BoardExtremeHandler.<>c__DisplayClass11_0$$.ctor RVA 0x2bf6998 =====

void FUN_02c06998(void)

{
  return;
}



// ===== FAT.BoardExtremeHandler$$_GetRowNumByType RVA 0x2bf69a0 =====

uint FUN_02c069a0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x78aa,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xc) != 1) {
      if (*(int *)(param_1 + 0xc) == 2) {
        param_3 = ~param_3 + param_2;
      }
      else {
        param_3 = 0;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78aa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_3 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return param_3;
}



// ===== FAT.BoardExtremeHandler.<>c__DisplayClass11_0$$<_ExecuteExtremeCase>b__0 RVA 0x2bf6a2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c06a2c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [3];
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x02116ae0(param_2,0);
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_020df794 + 0x20df458);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020df798 + 0x20df46c),param_2,1,0);
      func_0x01384978(*(undefined4 *)(_UNK_020df79c + 0x20df478));
      func_0x01384978(*(undefined4 *)(_UNK_020df7a0 + 0x20df484));
      func_0x01384978(*(undefined4 *)(_UNK_020df7a4 + 0x20df490));
      *pcVar9 = '\x01';
    }
    aiStack_24[0] = 0;
    iVar1 = func_0x0229f06c(0x5b73,0);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
        iVar1 = func_0x0210cd28(0,0);
        func_0x01384bf0();
      }
      else {
        iVar1 = func_0x0210cd28(param_2,0);
      }
      if (iVar1 == iVar6) {
        func_0x0210cd7c(&uStack_30,param_2,0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_30,param_2,0);
        uVar2 = func_0x020db85c(iVar6,uStack_30,uStack_2c);
        iVar3 = func_0x03005894(*(undefined4 *)(iVar6 + 0x80),uVar2,aiStack_24,
                                **(undefined4 **)(_UNK_020df7a8 + 0x20df588));
        iVar1 = aiStack_24[0];
        if (iVar3 != 0) {
          if (aiStack_24[0] == 0) {
            func_0x01384bf0();
          }
          iVar3 = aiStack_24[0];
          if (*(int *)(iVar1 + 8) == param_2) {
            if (aiStack_24[0] == 0) {
              func_0x01384bf0();
            }
            *(undefined4 *)(iVar3 + 8) = 0;
            func_0x020df7b8(iVar6,1);
            if (param_2 == 0) {
              func_0x01384bf0();
              func_0x021177d0(0,0,0,0);
              func_0x01384bf0();
            }
            else {
              func_0x021177d0(param_2,0,0,0);
            }
            func_0x02117440(param_2,0,0,0);
            iVar1 = *(int *)(iVar6 + 100);
            if (iVar1 != 0) {
              (**(code **)(iVar1 + 0xc))
                        (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
            }
            iVar1 = *(int *)(iVar6 + 0x98);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar8 = 0;
            iVar3 = func_0x02116990(param_2,0);
            if ((iVar3 != 0) && (uVar8 = 0, *(char *)(iVar3 + 0x45) != '\0')) {
              uVar8 = 1;
            }
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x02144d84(iVar1,param_2,uVar8,0);
            iVar6 = func_0x020d83c8(iVar6);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x02148ef8(iVar6,param_2,0xe,0);
            return 1;
          }
        }
        if (param_2 == 0) {
          func_0x01384bf0();
        }
      }
      uStack_30 = func_0x0210e5f4(param_2,0);
      puVar7 = *(undefined4 **)(_UNK_020df7ac + 0x20df5dc);
      uVar4 = func_0x01384abc(*puVar7,&uStack_30);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      uStack_28 = func_0x0210e2d4(param_2,0);
      uVar5 = func_0x01384abc(*puVar7,&uStack_28);
      uVar4 = func_0x0244f690(**(undefined4 **)(_UNK_020df7b0 + 0x20df634),uVar4,uVar5,0);
      if (*(int *)(**(int **)(_UNK_020df7b4 + 0x20df648) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar4,0);
    }
    else {
      iVar1 = func_0x0229f13c(0x5b73,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0218d1f0(iVar1,iVar6,param_2,1,0);
    }
    return uVar2;
  }
  return 0;
}


