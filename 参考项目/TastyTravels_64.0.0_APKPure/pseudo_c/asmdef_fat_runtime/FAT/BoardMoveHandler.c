/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BoardMoveHandler$$.ctor RVA 0x2bf6bbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c06bbc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02c06e28 + 0x2c06bdc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c06e2c + 0x2c06bf4));
    func_0x01384978(*(undefined4 *)(_UNK_02c06e30 + 0x2c06c00));
    func_0x01384978(*(undefined4 *)(_UNK_02c06e34 + 0x2c06c0c));
    func_0x01384978(*(undefined4 *)(_UNK_02c06e38 + 0x2c06c18));
    func_0x01384978(*(undefined4 *)(_UNK_02c06e3c + 0x2c06c24));
    func_0x01384978(*(undefined4 *)(_UNK_02c06e40 + 0x2c06c30));
    func_0x01384978(*(undefined4 *)(_UNK_02c06e44 + 0x2c06c3c));
    func_0x01384978(*(undefined4 *)(_UNK_02c06e48 + 0x2c06c48));
    *pcVar4 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_02c06e4c + 0x2c06c60);
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_02c06e50 + 0x2c06c78));
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = 0;
  func_0x04874ed4(param_1,0);
  if (param_2 == 0) {
    uStack_24 = 0;
    puVar1 = *(undefined4 **)(_UNK_02c06e6c + 0x2c06db8);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar5 = *puVar1;
  }
  else {
    puVar1 = *(undefined4 **)(_UNK_02c06e54 + 0x2c06cac);
    uVar2 = *puVar1;
    iVar3 = func_0x01384ab8(param_2,uVar2);
    if (iVar3 == 0) {
      func_0x01384fb4(param_2,uVar2);
    }
    uVar2 = *puVar1;
    *(int *)(param_1 + 8) = iVar3;
    iVar3 = func_0x01384ab8(param_2,uVar2);
    if (iVar3 == 0) {
      func_0x01384fb4(param_2,uVar2);
    }
    puVar1 = *(undefined4 **)(_UNK_02c06e58 + 0x2c06d04);
    uVar2 = *puVar1;
    iVar3 = func_0x01384ab8(param_2,uVar2);
    if (iVar3 == 0) {
      func_0x01384fb4(param_2,uVar2);
    }
    uVar2 = *puVar1;
    *(int *)(param_1 + 0xc) = iVar3;
    iVar3 = func_0x01384ab8(param_2,uVar2);
    if (iVar3 == 0) {
      func_0x01384fb4(param_2,uVar2);
    }
    bVar6 = *(int *)(param_1 + 8) != 0;
    iVar3 = 0;
    if (bVar6) {
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if (bVar6 && iVar3 != 0) goto LAB_02c06e18;
    uVar5 = **(undefined4 **)(_UNK_02c06e5c + 0x2c06d74);
    uVar2 = FUN_02b3c4a4(param_2,0);
    uStack_24 = 0;
    uStack_28 = 0;
    func_0x0350813c(&uStack_28,uVar2,**(undefined4 **)(_UNK_02c06e60 + 0x2c06d8c));
    uVar2 = uStack_28;
  }
  uStack_28 = uVar2;
  uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_02c06e64 + 0x2c06dcc),&uStack_28);
  uVar2 = func_0x046604e4(uVar5,uVar2,0);
  if (*(int *)(**(int **)(_UNK_02c06e68 + 0x2c06dfc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar2,0);
LAB_02c06e18:
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  return;
}



// ===== FAT.BoardMoveHandler$$OnBoardItemChange RVA 0x2bf6e70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c06e70(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
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
  
  iVar2 = func_0x0229f06c(0x784e,0);
  if (iVar2 == 0) {
    pcVar8 = (char *)(_UNK_02c07124 + 0x2c06ee0);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c07128 + 0x2c06ef4));
      func_0x01384978(*(undefined4 *)(_UNK_02c0712c + 0x2c06f00));
      func_0x01384978(*(undefined4 *)(_UNK_02c07130 + 0x2c06f0c));
      func_0x01384978(*(undefined4 *)(_UNK_02c07134 + 0x2c06f18));
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x784f,0);
    if (iVar2 == 0) {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02c07138 + 0x2c06f74));
      func_0x04874ed4(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      cVar1 = *(char *)(param_1 + 0x20);
      *(int *)(iVar2 + 8) = param_1;
      if (cVar1 == '\0') {
        piVar10 = *(int **)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined1 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar7 = *piVar10;
        uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_02c0713c + 0x2c06fdc)) {
              puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xd0);
              goto LAB_02c07024;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_02c0713c + 0x2c06fdc),2);
LAB_02c07024:
        iVar7 = (*(code *)*puVar3)(piVar10,puVar3[1]);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar2 + 0xc) = iVar7;
        if (iVar7 != 0) {
          iVar7 = func_0x01c24918(0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar2 + 0xc);
          iVar7 = *(int *)(iVar7 + 0x4c);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar9 = *(undefined4 *)(iVar11 + 8);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x01dbd5a4(iVar7,uVar9,0);
          if (iVar7 == 0) {
            *(undefined4 *)(iVar2 + 0x14) = 0;
          }
          else {
            iVar7 = *(int *)(iVar7 + 0x28);
            *(int *)(iVar2 + 0x14) = iVar7;
            if ((0 < iVar7) &&
               (iVar7 = func_0x02c07380(param_1,*(undefined4 *)(iVar2 + 0xc),iVar7,iVar2 + 0x10),
               iVar7 != 0)) {
              uVar9 = func_0x024508e0(0);
              *(undefined4 *)(param_1 + 0x1c) = uVar9;
              puVar3 = *(undefined4 **)(_UNK_02c07140 + 0x2c070ec);
              *(undefined1 *)(param_1 + 0x18) = 1;
              uVar9 = func_0x01384be4(*puVar3);
              func_0x0478dedc(uVar9,iVar2,**(undefined4 **)(_UNK_02c07144 + 0x2c0710c),0);
              *(undefined4 *)(param_1 + 0x24) = uVar9;
            }
          }
        }
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x784f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x784e,0);
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
  iVar7 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
  return;
}



// ===== FAT.BoardMoveHandler$$_TryExecuteMoveBoard RVA 0x2bf6ec8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c06ec8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
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
  
  pcVar8 = (char *)(_UNK_02c07124 + 0x2c06ee0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c07128 + 0x2c06ef4));
    func_0x01384978(*(undefined4 *)(_UNK_02c0712c + 0x2c06f00));
    func_0x01384978(*(undefined4 *)(_UNK_02c07130 + 0x2c06f0c));
    func_0x01384978(*(undefined4 *)(_UNK_02c07134 + 0x2c06f18));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x784f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x784f,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
    return;
  }
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02c07138 + 0x2c06f74));
  func_0x04874ed4(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  cVar1 = *(char *)(param_1 + 0x20);
  *(int *)(iVar2 + 8) = param_1;
  if (cVar1 == '\0') {
    piVar10 = *(int **)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar10;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02c0713c + 0x2c06fdc)) {
          puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xd0);
          goto LAB_02c07024;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_02c0713c + 0x2c06fdc),2);
LAB_02c07024:
    iVar7 = (*(code *)*puVar3)(piVar10,puVar3[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar2 + 0xc) = iVar7;
    if (iVar7 != 0) {
      iVar7 = func_0x01c24918(0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar2 + 0xc);
      iVar7 = *(int *)(iVar7 + 0x4c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar9 = *(undefined4 *)(iVar11 + 8);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x01dbd5a4(iVar7,uVar9,0);
      if (iVar7 == 0) {
        *(undefined4 *)(iVar2 + 0x14) = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 0x28);
        *(int *)(iVar2 + 0x14) = iVar7;
        if ((0 < iVar7) &&
           (iVar7 = func_0x02c07380(param_1,*(undefined4 *)(iVar2 + 0xc),iVar7,iVar2 + 0x10),
           iVar7 != 0)) {
          uVar9 = func_0x024508e0(0);
          *(undefined4 *)(param_1 + 0x1c) = uVar9;
          puVar3 = *(undefined4 **)(_UNK_02c07140 + 0x2c070ec);
          *(undefined1 *)(param_1 + 0x18) = 1;
          uVar9 = func_0x01384be4(*puVar3);
          func_0x0478dedc(uVar9,iVar2,**(undefined4 **)(_UNK_02c07144 + 0x2c0710c),0);
          *(undefined4 *)(param_1 + 0x24) = uVar9;
        }
      }
    }
  }
  return;
}



// ===== FAT.BoardMoveHandler$$OnActivityUpdate RVA 0x2bf7148 =====

void FUN_02c07148(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r6;
  bool bVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7b35,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b35,0);
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
  iVar1 = func_0x0229f06c(0x787e,0);
  if (iVar1 == 0) {
    bVar5 = *(char *)(param_1 + 0x18) != '\0';
    if (bVar5) {
      unaff_r6 = *(int *)(param_1 + 0x1c);
    }
    if (bVar5 && unaff_r6 != -1) {
      iVar1 = func_0x024508e0(0);
      if (unaff_r6 != iVar1) {
        *(undefined1 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x20) = 1;
        iVar1 = *(int *)(param_1 + 0x24);
        if (iVar1 != 0) {
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        }
        *(undefined1 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        return;
      }
      return;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x787e,0);
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
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
  return;
}



// ===== FAT.BoardMoveHandler$$_ProcessMoveAction RVA 0x2bf71a8 =====

void FUN_02c071a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r6;
  bool bVar5;
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
  
  iVar1 = func_0x0229f06c(0x787e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x787e,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  bVar5 = *(char *)(param_1 + 0x18) != '\0';
  if (bVar5) {
    unaff_r6 = *(int *)(param_1 + 0x1c);
  }
  if (bVar5 && unaff_r6 != -1) {
    iVar1 = func_0x024508e0(0);
    if (unaff_r6 != iVar1) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x20) = 1;
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      }
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
      return;
    }
    return;
  }
  return;
}



// ===== FAT.BoardMoveHandler$$IsBoardMoving RVA 0x2bf7260 =====

uint FUN_02c07260(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar2 = func_0x0229f06c(0x78a1,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x78a1,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    return 1;
  }
  return (uint)(*(char *)(param_1 + 0x18) != '\0');
}



// ===== FAT.BoardMoveHandler$$StartMoveBoard RVA 0x2bf72cc =====

void FUN_02c072cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r6;
  bool bVar5;
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
  
  iVar1 = func_0x0229f06c(0x787d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x787e,0);
    if (iVar1 == 0) {
      bVar5 = *(char *)(param_1 + 0x18) != '\0';
      if (bVar5) {
        unaff_r6 = *(int *)(param_1 + 0x1c);
      }
      if (!bVar5 || unaff_r6 == -1) {
        return;
      }
      iVar1 = func_0x024508e0(0);
      if (unaff_r6 == iVar1) {
        return;
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x20) = 1;
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      }
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
      return;
    }
    iVar1 = func_0x0229f13c(0x787e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x787d,0);
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
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.BoardMoveHandler$$get_IsReadyToMove RVA 0x2bf7324 =====

uint FUN_02c07324(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar2 = func_0x0229f06c(0x787b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x787b,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  return (uint)*(byte *)(param_1 + 0x18);
}



// ===== FAT.BoardMoveHandler.<>c__DisplayClass17_0$$.ctor RVA 0x2bf7378 =====

void FUN_02c07378(void)

{
  return;
}



// ===== FAT.BoardMoveHandler$$_CheckCanMoveByType RVA 0x2bf7380 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c07380(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined4 uStack_24;
  
  pcVar10 = (char *)(_UNK_02c07934 + 0x2c073a0);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c07938 + 0x2c073b8));
    func_0x01384978(*(undefined4 *)(_UNK_02c0793c + 0x2c073c4));
    func_0x01384978(*(undefined4 *)(_UNK_02c07940 + 0x2c073d0));
    func_0x01384978(*(undefined4 *)(_UNK_02c07944 + 0x2c073dc));
    func_0x01384978(*(undefined4 *)(_UNK_02c07948 + 0x2c073e8));
    *pcVar10 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0x7856,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7856,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02252594(iVar2,param_1,param_2,param_3,param_4,0);
    return uVar3;
  }
  *param_4 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 3) {
    piVar9 = *(int **)(param_1 + 8);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02c07960 + 0x2c074ec)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_02c07654;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02c07960 + 0x2c074ec),0);
LAB_02c07654:
    iVar2 = (*(code *)*puVar4)(piVar9,param_3,puVar4[1]);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = 0;
    func_0x020da680(auStack_30,param_2,0);
    if (iStack_2c < 1) {
      if (0 < iVar2) {
        return 0;
      }
    }
    else {
      iVar11 = 0;
      do {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x020df2b4(param_2,iVar11,0,0);
        iVar6 = iVar11;
      } while ((iVar5 != 0) && (iVar11 = iVar11 + 1, iVar6 = iStack_2c, iStack_2c != iVar11));
      if (iVar6 < iVar2) {
        iVar11 = 0;
        if (0 < iStack_2c) {
          iVar5 = 0;
          do {
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x020df2b4(param_2,iVar5,1,0);
            iVar11 = iVar5;
          } while ((iVar7 != 0) && (iVar5 = iVar5 + 1, iVar11 = iStack_2c, iStack_2c != iVar5));
        }
        iVar5 = iVar2;
        if (iVar2 <= iVar11) {
          iVar5 = iVar6;
        }
        if (iVar11 <= iVar5) {
          return 0;
        }
        iVar6 = func_0x03668dfc(**(undefined4 **)(_UNK_02c07964 + 0x2c07740));
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x01ddc2c0(iVar6,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
          func_0x01e267a0(0,1,0);
          func_0x01384bf0();
        }
        else {
          func_0x01e267a0(iVar6,1,0);
        }
        iVar5 = func_0x01e241b4(iVar6,0);
        iVar6 = iVar11;
        if (iVar5 != 0) {
          return 0;
        }
      }
    }
    iVar6 = iVar6 - iStack_2c;
  }
  else {
    if (iVar2 == 2) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x020dd140(param_2,0);
      if (iVar2 != 0) {
        return 0;
      }
      piVar9 = *(int **)(param_1 + 0xc);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02c07950 + 0x2c0756c)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
            goto LAB_02c077c4;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02c07950 + 0x2c0756c),0);
LAB_02c077c4:
      piVar9 = (int *)(*(code *)*puVar4)(piVar9,param_3,puVar4[1]);
      if (piVar9 == (int *)0x0) {
        return 0;
      }
      iVar2 = *piVar9;
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02c07954 + 0x2c077f4)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
            goto LAB_02c0783c;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02c07954 + 0x2c077f4),0);
LAB_02c0783c:
      iVar2 = (*(code *)*puVar4)(piVar9,puVar4[1]);
      if (iVar2 < 0) {
        return 0;
      }
      iVar2 = func_0x03005740(piVar9,*(int *)(param_1 + 0x14) + -1,&uStack_24,
                              **(undefined4 **)(_UNK_02c07958 + 0x2c07864));
      uVar1 = uStack_24;
      if (iVar2 == 0) {
        return 0;
      }
      piVar9 = *(int **)(param_1 + 8);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02c0795c + 0x2c078a0)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 200);
            goto LAB_02c0791c;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02c0795c + 0x2c078a0),1);
LAB_02c0791c:
      iVar6 = (*(code *)*puVar4)(piVar9,uVar1,puVar4[1]);
      goto LAB_02c0779c;
    }
    if (iVar2 != 1) {
      return 0;
    }
    piVar9 = *(int **)(param_1 + 8);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02c0794c + 0x2c07490)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_02c075b4;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02c0794c + 0x2c07490),0);
LAB_02c075b4:
    iVar2 = (*(code *)*puVar4)(piVar9,param_3,puVar4[1]);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x020da680(auStack_30,param_2,0);
    iVar6 = 0;
    if (0 < iStack_2c) {
      iVar11 = 0;
      do {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x020df2b4(param_2,iVar11,0,0);
        iVar6 = iVar11;
      } while ((iVar5 != 0) && (iVar11 = iVar11 + 1, iVar6 = iStack_2c, iStack_2c != iVar11));
    }
    if (iVar6 < iVar2) {
      return 0;
    }
    iVar6 = iVar6 - iStack_2c;
  }
  iVar6 = iVar6 + iVar2;
LAB_02c0779c:
  *param_4 = iVar6;
  return (uint)(0 < iVar6);
}



// ===== FAT.BoardMoveHandler$$_CheckDirection RVA 0x2bf7968 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c07968(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x7853,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7853,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar5 = func_0x0245498c(&uStack_30,0,0);
    return uVar5;
  }
  uVar2 = *(int *)(param_1 + 0x10) - 1;
  if (uVar2 < 3) {
    return *(undefined4 *)(_UNK_02c079dc + 0x2c079d0 + uVar2 * 4);
  }
  return 0;
}



// ===== FAT.BoardMoveHandler$$_ExecuteMoveBoard RVA 0x2bf79e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c079e0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02c08018 + 0x2c07a04);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0801c + 0x2c07a18));
    func_0x01384978(*(undefined4 *)(_UNK_02c08020 + 0x2c07a24));
    func_0x01384978(*(undefined4 *)(_UNK_02c08024 + 0x2c07a30));
    func_0x01384978(*(undefined4 *)(_UNK_02c08028 + 0x2c07a3c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0802c + 0x2c07a48));
    func_0x01384978(*(undefined4 *)(_UNK_02c08030 + 0x2c07a54));
    func_0x01384978(*(undefined4 *)(_UNK_02c08034 + 0x2c07a60));
    func_0x01384978(*(undefined4 *)(_UNK_02c08038 + 0x2c07a6c));
    *pcVar7 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  iVar1 = func_0x0229f06c(0x7852,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7852,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217fd9c(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  iVar1 = FUN_02c07968(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (0 < param_3) {
    iVar11 = 0;
    do {
      iVar8 = *(int *)(param_1 + 0x28);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar8 + 0xc);
      *(undefined4 *)(iVar8 + 0xc) = 0;
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
      if (0 < iVar4) {
        func_0x0484e5ec(*(undefined4 *)(iVar8 + 8),0,iVar4,0);
      }
      uVar9 = *(undefined4 *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar11 = iVar11 + 1;
      func_0x01dbfdac(iVar2,param_2,iVar11,uVar9,iVar1 == 1,0,0);
      if (*(int *)(**(int **)(_UNK_02c0803c + 0x2c07bb8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar8 = func_0x0300d558(**(undefined4 **)(_UNK_02c08040 + 0x2c07bd4));
      uVar9 = *(undefined4 *)(param_1 + 0x28);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar8,uVar9,**(undefined4 **)(_UNK_02c08044 + 0x2c07c00));
    } while (param_3 != iVar11);
  }
  if (iVar1 == 2) {
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc00d8(iVar2,param_2,param_3 + 1,0);
    piVar10 = *(int **)(_UNK_02c08050 + 0x2c07d80);
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar10;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_40,iVar1,&uStack_34,**(undefined4 **)(_UNK_02c08054 + 0x2c07dbc));
    iStack_2c = iStack_3c;
    uStack_30 = uStack_40;
    iVar1 = FUN_02c04a3c(*(undefined4 *)(param_1 + 0xc),param_4,uStack_34,
                         *(undefined4 *)(param_1 + 0x14),param_3,0);
    uVar9 = uStack_34;
    if (iVar1 != 0) {
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc0340(iVar2,param_2,uVar9,param_3,0);
    }
  }
  else {
    if (iVar1 != 1) goto LAB_02c07e38;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbffbc(iVar2,param_2,param_3 + 1,0xffffffff,0);
    piVar10 = *(int **)(_UNK_02c08048 + 0x2c07c78);
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar10;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_40,iVar1,&uStack_28,**(undefined4 **)(_UNK_02c0804c + 0x2c07cb4));
    iStack_2c = iStack_3c;
    uStack_30 = uStack_40;
    iVar1 = FUN_02c04a3c(*(undefined4 *)(param_1 + 0xc),param_4,uStack_28,
                         *(undefined4 *)(param_1 + 0x14),param_3,0);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x020da680(&uStack_40,param_2,0);
      uVar9 = uStack_28;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc01cc(iVar2,param_2,uVar9,iStack_3c - param_3,0);
    }
  }
  func_0x028c98a0(&uStack_30,0);
LAB_02c07e38:
  piVar10 = *(int **)(param_1 + 8);
  param_3 = *(int *)(param_1 + 0x14) + param_3;
  *(int *)(param_1 + 0x14) = param_3;
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar10;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_02c08058 + 0x2c07e68)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd8);
        goto LAB_02c07eb0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_02c08058 + 0x2c07e68),3);
LAB_02c07eb0:
  (*(code *)*puVar3)(piVar10,param_3,puVar3[1]);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e2d040(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_02c0805c + 0x2c07f08) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02c08060 + 0x2c07f24));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028c3fd8(iVar1,0);
  return;
}



// ===== FAT.BoardMoveHandler.<>c__DisplayClass17_0$$<_TryExecuteMoveBoard>b__0 RVA 0x2bf8064 =====

void FUN_02c08064(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_02c079e0(iVar1,uVar2,uVar3,uVar4);
  return;
}


