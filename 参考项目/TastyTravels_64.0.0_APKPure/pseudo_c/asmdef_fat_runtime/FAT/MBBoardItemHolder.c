/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardItemHolder$$TimeSkipItem RVA 0x1dec9cc =====

/* WARNING: Removing unreachable block (ram,0x01e0282c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfc9cc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iVar1 = func_0x0229f06c(0x9f8d,0);
  if (iVar1 == 0) {
    pcVar5 = (char *)(_UNK_01e02840 + 0x1e02764);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e02844 + 0x1e02778));
      *pcVar5 = '\x01';
    }
    aiStack_1c[0] = 0;
    iVar1 = func_0x0229f06c(0x96cf,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x03d66780(iVar1,param_2,aiStack_1c,**(undefined4 **)(_UNK_01e02848 + 0x1e027fc))
      ;
      iVar1 = aiStack_1c[0];
      if (iVar3 != 0) {
        if (aiStack_1c[0] == 0) {
          func_0x01384bf0();
        }
        func_0x022a0760(iVar1,0);
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x96cf,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x0217f950(iVar1,param_1,param_2,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x9f8d,0);
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
  func_0x01485238(&uStack_38,param_2,0);
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



// ===== FAT.MBBoardItemHolder$$get_mRecentSelectedItemId RVA 0x1def120 =====

undefined4 FUN_01dff120(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.MBBoardItemHolder$$set_mRecentSelectedItemId RVA 0x1def128 =====

void FUN_01dff128(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ===== FAT.MBBoardItemHolder$$get_poolKey RVA 0x1def130 =====

undefined4 FUN_01dff130(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== FAT.MBBoardItemHolder$$set_poolKey RVA 0x1def138 =====

void FUN_01dff138(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



// ===== FAT.MBBoardItemHolder$$FAT.IMergeBoard.Init RVA 0x1def140 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dff140(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
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
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01dff254 + 0x1dff154);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dff258 + 0x1dff168));
    func_0x01384978(*(undefined4 *)(_UNK_01dff25c + 0x1dff174));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9fa5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0244fc34(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x02450158(iVar1,0,0);
    piVar3 = (int *)0x0;
    if ((piVar2 != (int *)0x0) &&
       (piVar3 = piVar2, *piVar2 != **(int **)(_UNK_01dff260 + 0x1dff204))) {
      piVar3 = (int *)0x0;
    }
    puVar4 = *(undefined4 **)(_UNK_01dff264 + 0x1dff220);
    *(int **)(param_1 + 0x24) = piVar3;
    iVar1 = func_0x034aaa34(*puVar4);
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_0243bd68 + 0x243bcc0);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0243bd6c + 0x243bcd4),0x1d,uVar8,0);
      *pcVar6 = '\x01';
    }
    iVar7 = func_0x0229f06c(0xa93,0);
    if (iVar7 == 0) {
      uStack_1c = 0x1d;
      uStack_24 = **(undefined4 **)(_UNK_0243bd70 + 0x243bd3c);
      uStack_20 = 0xffffffff;
      uVar5 = func_0x0244f5f4(&uStack_24,0);
      func_0x0244a6f8(iVar1,uVar5,uVar8);
    }
    else {
      iVar7 = func_0x0229f13c(0xa93,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = 0;
      func_0x021872a4(iVar7,iVar1,0x1d,uVar8);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x9fa5,0);
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
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5,0,0);
  return;
}



// ===== FAT.MBBoardItemHolder$$FAT.IMergeBoard.Setup RVA 0x1def268 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dff268(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01dffaac + 0x1dff288);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dffab0 + 0x1dff29c));
    func_0x01384978(*(undefined4 *)(_UNK_01dffab4 + 0x1dff2a8));
    func_0x01384978(*(undefined4 *)(_UNK_01dffab8 + 0x1dff2b4));
    func_0x01384978(*(undefined4 *)(_UNK_01dffabc + 0x1dff2c0));
    func_0x01384978(*(undefined4 *)(_UNK_01dffac0 + 0x1dff2cc));
    func_0x01384978(*(undefined4 *)(_UNK_01dffac4 + 0x1dff2d8));
    func_0x01384978(*(undefined4 *)(_UNK_01dffac8 + 0x1dff2e4));
    func_0x01384978(*(undefined4 *)(_UNK_01dffacc + 0x1dff2f0));
    func_0x01384978(*(undefined4 *)(_UNK_01dffad0 + 0x1dff2fc));
    func_0x01384978(*(undefined4 *)(_UNK_01dffad4 + 0x1dff308));
    func_0x01384978(*(undefined4 *)(_UNK_01dffad8 + 0x1dff314));
    func_0x01384978(*(undefined4 *)(_UNK_01dffadc + 0x1dff320));
    func_0x01384978(*(undefined4 *)(_UNK_01dffae0 + 0x1dff32c));
    func_0x01384978(*(undefined4 *)(_UNK_01dffae4 + 0x1dff338));
    func_0x01384978(*(undefined4 *)(_UNK_01dffae8 + 0x1dff344));
    func_0x01384978(*(undefined4 *)(_UNK_01dffaec + 0x1dff350));
    func_0x01384978(*(undefined4 *)(_UNK_01dffaf0 + 0x1dff35c));
    func_0x01384978(*(undefined4 *)(_UNK_01dffaf4 + 0x1dff368));
    func_0x01384978(*(undefined4 *)(_UNK_01dffaf8 + 0x1dff374));
    func_0x01384978(*(undefined4 *)(_UNK_01dffafc + 0x1dff380));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb00 + 0x1dff38c));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb04 + 0x1dff398));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb08 + 0x1dff3a4));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb0c + 0x1dff3b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb10 + 0x1dff3bc));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb14 + 0x1dff3c8));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb18 + 0x1dff3d4));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb1c + 0x1dff3e0));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb20 + 0x1dff3ec));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb24 + 0x1dff3f8));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb28 + 0x1dff404));
    func_0x01384978(*(undefined4 *)(_UNK_01dffb2c + 0x1dff410));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9fa6,0);
  if (iVar1 == 0) {
    puVar8 = *(undefined4 **)(_UNK_01dffb30 + 0x1dff474);
    *(undefined4 *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    iVar1 = func_0x03668dfc(*puVar8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 0x7c);
    iVar1 = func_0x03668dfc(*puVar8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0x1c;
    iVar1 = *(int *)(iVar1 + 0x78);
    uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01dffb34 + 0x1dff4bc),&uStack_24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02139cf4(iVar1,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = *(undefined4 *)(iVar3 + 8);
    uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_01dffb38 + 0x1dff508),&uStack_28);
    uVar2 = func_0x0244f690(**(undefined4 **)(_UNK_01dffb3c + 0x1dff52c),uVar2,uVar4,0);
    puVar8 = *(undefined4 **)(_UNK_01dffb40 + 0x1dff53c);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    iVar3 = func_0x034aaa34(*puVar8);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0244a6f8(iVar3,uVar2,uVar4,0);
    puVar8 = *(undefined4 **)(_UNK_01dffb44 + 0x1dff580);
    uVar2 = func_0x01384be4(*puVar8);
    func_0x03ccb96c(uVar2,param_1,**(undefined4 **)(_UNK_01dffb48 + 0x1dff59c),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d88a0(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dffb4c + 0x1dff5cc));
    func_0x03cd51ec(uVar2,param_1,**(undefined4 **)(_UNK_01dffb50 + 0x1dff5e8),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d8e20(iVar7,uVar2,0);
    puVar6 = *(undefined4 **)(_UNK_01dffb54 + 0x1dff618);
    uVar2 = func_0x01384be4(*puVar6);
    func_0x03cd51ec(uVar2,param_1,**(undefined4 **)(_UNK_01dffb58 + 0x1dff634),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d8f80(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(*puVar6);
    func_0x03cd51ec(uVar2,param_1,**(undefined4 **)(_UNK_01dffb5c + 0x1dff678),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d90e0(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dffb60 + 0x1dff6a8));
    func_0x03db6898(uVar2,param_1,**(undefined4 **)(_UNK_01dffb64 + 0x1dff6c4),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d8480(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dffb68 + 0x1dff6f4));
    func_0x03cd4e0c(uVar2,param_1,**(undefined4 **)(_UNK_01dffb6c + 0x1dff710),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d8b60(iVar7,uVar2,0);
    puVar6 = *(undefined4 **)(_UNK_01dffb70 + 0x1dff740);
    uVar2 = func_0x01384be4(*puVar6);
    func_0x03cd51ec(uVar2,param_1,**(undefined4 **)(_UNK_01dffb74 + 0x1dff75c),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d85e0(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(*puVar6);
    func_0x03cd51ec(uVar2,param_1,**(undefined4 **)(_UNK_01dffb78 + 0x1dff7a0),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d8740(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(*puVar8);
    func_0x03ccb96c(uVar2,param_1,**(undefined4 **)(_UNK_01dffb7c + 0x1dff7e4),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d9240(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(*puVar8);
    func_0x03ccb96c(uVar2,param_1,**(undefined4 **)(_UNK_01dffb80 + 0x1dff828),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d93a0(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dffb84 + 0x1dff858));
    func_0x03cd51ec(uVar2,param_1,**(undefined4 **)(_UNK_01dffb88 + 0x1dff874),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d8a00(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dffb8c + 0x1dff8a4));
    func_0x03cd51ec(uVar2,param_1,**(undefined4 **)(_UNK_01dffb90 + 0x1dff8c0),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d8cc0(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(*puVar8);
    func_0x03ccb96c(uVar2,param_1,**(undefined4 **)(_UNK_01dffb94 + 0x1dff904),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d9500(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(*puVar8);
    func_0x03ccb96c(uVar2,param_1,**(undefined4 **)(_UNK_01dffb98 + 0x1dff948),0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020d97c0(iVar7,uVar2,0);
    uVar2 = func_0x01384be4(*puVar8);
    func_0x03ccb96c(uVar2,param_1,**(undefined4 **)(_UNK_01dffb9c + 0x1dff98c),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02141460(iVar1,uVar2,0);
    uVar2 = func_0x01384be4(*puVar8);
    func_0x03ccb96c(uVar2,param_1,**(undefined4 **)(_UNK_01dffba0 + 0x1dff9d0),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02141300(iVar1,uVar2,0);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dffba4 + 0x1dffa00));
    func_0x03cd4e0c(uVar2,param_1,**(undefined4 **)(_UNK_01dffba8 + 0x1dffa1c),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02141720(iVar1,uVar2,0);
    uVar2 = func_0x024508e0(0);
    iVar1 = *(int *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar7) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar7,0);
    }
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    func_0x01dffbac(param_1);
    func_0x01dffe7c(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x9fa6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_PrepareGrid RVA 0x1defbac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dffbac(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_48 [12];
  int iStack_3c;
  
  pcVar4 = (char *)(_UNK_01dffe50 + 0x1dffbcc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dffe54 + 0x1dffbe0));
    func_0x01384978(*(undefined4 *)(_UNK_01dffe58 + 0x1dffbec));
    func_0x01384978(*(undefined4 *)(_UNK_01dffe5c + 0x1dffbf8));
    func_0x01384978(*(undefined4 *)(_UNK_01dffe60 + 0x1dffc04));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa002,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa002,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(auStack_48,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&stack0xffffffd0,uVar3,0,0);
    return;
  }
  piVar5 = *(int **)(_UNK_01dffe64 + 0x1dffc68);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_01dffe68 + 0x1dffc84);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dffe6c + 0x1dffc98));
    *pcVar4 = '\x01';
  }
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  if (0 < iVar6) {
    iStack_3c = 0;
    fVar13 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    iVar1 = *(int *)(param_1 + 0x18);
    do {
      if (0 < iVar1) {
        iVar6 = 0;
        fVar11 = (float)VectorSignedToFloat(-iStack_3c,(byte)(in_fpscr >> 0x16) & 3);
        do {
          iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01dffe70 + 0x1dffd10));
          uVar7 = *(undefined4 *)(param_1 + 0x24);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0243c430(iVar1,0x1d,uVar7,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          piVar5 = (int *)func_0x024504c0(iVar1,0);
          if (piVar5 == (int *)0x0) {
LAB_01dffd7c:
            func_0x01384bf0();
            piVar5 = (int *)0x0;
          }
          else if (*piVar5 != **(int **)(_UNK_01dffe74 + 0x1dffd70)) goto LAB_01dffd7c;
          fVar12 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
          func_0x0244fdbc(piVar5,fVar13 * 0.5 + fVar13 * fVar12,fVar13 * fVar11 - fVar13 * 0.5,0);
          iVar1 = *(int *)(param_1 + 0x20);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar1 + 8);
          uVar9 = *(uint *)(iVar1 + 0xc);
          piVar2 = *(int **)(_UNK_01dffe78 + 0x1dffdd8);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar10 = *piVar2;
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          if (uVar9 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar9 + 1;
            *(int **)(iVar8 + uVar9 * 4 + 0x10) = piVar5;
          }
          else {
            func_0x0328f170(iVar1,piVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
          iVar1 = *(int *)(param_1 + 0x18);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
        iVar6 = *(int *)(param_1 + 0x1c);
      }
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < iVar6);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_FillItem RVA 0x1defe7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dffe7c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01e00114 + 0x1dffe94);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e00118 + 0x1dffea8));
    func_0x01384978(*(undefined4 *)(_UNK_01e0011c + 0x1dffeb4));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa003,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa003,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e00120 + 0x1dfff10));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_1 + 0x18);
  if (0 < iVar7) {
    iVar10 = *(int *)(iVar2 + 0x7c);
    iVar11 = 0;
    iVar2 = *(int *)(param_1 + 0x1c);
    iStack_28 = param_1;
    do {
      if (0 < iVar2) {
        iVar7 = 0;
        do {
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x020e81ec(iVar10,iVar11,iVar7,0);
          if (iVar2 != 0) {
            iVar2 = func_0x01e02e58(param_1,iVar2);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            piVar3 = (int *)func_0x0244fc34(iVar2,0);
            if ((piVar3 == (int *)0x0) || (*piVar3 != **(int **)(_UNK_01e00124 + 0x1dfffb4))) {
              uVar8 = func_0x01e02280(param_1,iVar11,iVar7);
              func_0x01384bf0();
              piVar3 = (int *)0x0;
              bVar1 = true;
            }
            else {
              uVar8 = func_0x01e02280(param_1,iVar11,iVar7);
              bVar1 = false;
            }
            func_0x024505b4(piVar3,uVar8,0);
            if (*(char *)(_UNK_01e00128 + 0x1e00018) == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e0012c + 0x1e0002c));
              *(undefined1 *)(_UNK_01e00130 + 0x1e0003c) = 1;
            }
            puVar4 = *(undefined4 **)(**(int **)(_UNK_01e00134 + 0x1e0004c) + 0x5c);
            uVar8 = *puVar4;
            uVar5 = puVar4[1];
            uVar9 = puVar4[2];
            if (bVar1) {
              func_0x01384bf0();
            }
            uStack_30 = 0;
            func_0x0245068c(piVar3,uVar8,uVar5,uVar9);
            if (*(char *)(_UNK_01e00138 + 0x1e00084) == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e0013c + 0x1e00098));
              *(undefined1 *)(_UNK_01e00140 + 0x1e000a8) = 1;
            }
            iVar2 = *(int *)(**(int **)(_UNK_01e00144 + 0x1e000b8) + 0x5c);
            uVar8 = *(undefined4 *)(iVar2 + 0xc);
            uVar5 = *(undefined4 *)(iVar2 + 0x10);
            uVar9 = *(undefined4 *)(iVar2 + 0x14);
            if (bVar1) {
              func_0x01384bf0();
            }
            uStack_30 = 0;
            func_0x024503a4(piVar3,uVar8,uVar5,uVar9);
            param_1 = iStack_28;
          }
          iVar2 = *(int *)(param_1 + 0x1c);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar2);
        iVar7 = *(int *)(param_1 + 0x18);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar7);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$FAT.IMergeBoard.Cleanup RVA 0x1df0148 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e00148(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01e00868 + 0x1e0015c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0086c + 0x1e00170));
    func_0x01384978(*(undefined4 *)(_UNK_01e00870 + 0x1e0017c));
    func_0x01384978(*(undefined4 *)(_UNK_01e00874 + 0x1e00188));
    func_0x01384978(*(undefined4 *)(_UNK_01e00878 + 0x1e00194));
    func_0x01384978(*(undefined4 *)(_UNK_01e0087c + 0x1e001a0));
    func_0x01384978(*(undefined4 *)(_UNK_01e00880 + 0x1e001ac));
    func_0x01384978(*(undefined4 *)(_UNK_01e00884 + 0x1e001b8));
    func_0x01384978(*(undefined4 *)(_UNK_01e00888 + 0x1e001c4));
    func_0x01384978(*(undefined4 *)(_UNK_01e0088c + 0x1e001d0));
    func_0x01384978(*(undefined4 *)(_UNK_01e00890 + 0x1e001dc));
    func_0x01384978(*(undefined4 *)(_UNK_01e00894 + 0x1e001e8));
    func_0x01384978(*(undefined4 *)(_UNK_01e00898 + 0x1e001f4));
    func_0x01384978(*(undefined4 *)(_UNK_01e0089c + 0x1e00200));
    func_0x01384978(*(undefined4 *)(_UNK_01e008a0 + 0x1e0020c));
    func_0x01384978(*(undefined4 *)(_UNK_01e008a4 + 0x1e00218));
    func_0x01384978(*(undefined4 *)(_UNK_01e008a8 + 0x1e00224));
    func_0x01384978(*(undefined4 *)(_UNK_01e008ac + 0x1e00230));
    func_0x01384978(*(undefined4 *)(_UNK_01e008b0 + 0x1e0023c));
    func_0x01384978(*(undefined4 *)(_UNK_01e008b4 + 0x1e00248));
    func_0x01384978(*(undefined4 *)(_UNK_01e008b8 + 0x1e00254));
    func_0x01384978(*(undefined4 *)(_UNK_01e008bc + 0x1e00260));
    func_0x01384978(*(undefined4 *)(_UNK_01e008c0 + 0x1e0026c));
    func_0x01384978(*(undefined4 *)(_UNK_01e008c4 + 0x1e00278));
    func_0x01384978(*(undefined4 *)(_UNK_01e008c8 + 0x1e00284));
    func_0x01384978(*(undefined4 *)(_UNK_01e008cc + 0x1e00290));
    func_0x01384978(*(undefined4 *)(_UNK_01e008d0 + 0x1e0029c));
    func_0x01384978(*(undefined4 *)(_UNK_01e008d4 + 0x1e002a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e008d8 + 0x1e002b4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa004,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa004,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar2,0,0);
    return;
  }
  puVar6 = *(undefined4 **)(_UNK_01e008dc + 0x1e0030c);
  iVar1 = func_0x03668dfc(*puVar6);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0x7c);
  iVar1 = func_0x03668dfc(*puVar6);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01e008e0 + 0x1e00348);
  iVar1 = *(int *)(iVar1 + 0x78);
  uVar7 = func_0x01384be4(*puVar6);
  func_0x03ccb96c(uVar7,param_1,**(undefined4 **)(_UNK_01e008e4 + 0x1e00368),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8950(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e008e8 + 0x1e00398));
  func_0x03cd51ec(uVar7,param_1,**(undefined4 **)(_UNK_01e008ec + 0x1e003b4),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8ed0(iVar5,uVar7,0);
  puVar4 = *(undefined4 **)(_UNK_01e008f0 + 0x1e003e4);
  uVar7 = func_0x01384be4(*puVar4);
  func_0x03cd51ec(uVar7,param_1,**(undefined4 **)(_UNK_01e008f4 + 0x1e00400),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9030(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(*puVar4);
  func_0x03cd51ec(uVar7,param_1,**(undefined4 **)(_UNK_01e008f8 + 0x1e00444),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9190(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e008fc + 0x1e00474));
  func_0x03db6898(uVar7,param_1,**(undefined4 **)(_UNK_01e00900 + 0x1e00490),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8530(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e00904 + 0x1e004c0));
  func_0x03cd4e0c(uVar7,param_1,**(undefined4 **)(_UNK_01e00908 + 0x1e004dc),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8c10(iVar5,uVar7,0);
  puVar4 = *(undefined4 **)(_UNK_01e0090c + 0x1e0050c);
  uVar7 = func_0x01384be4(*puVar4);
  func_0x03cd51ec(uVar7,param_1,**(undefined4 **)(_UNK_01e00910 + 0x1e00528),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8690(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(*puVar4);
  func_0x03cd51ec(uVar7,param_1,**(undefined4 **)(_UNK_01e00914 + 0x1e0056c),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d87f0(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(*puVar6);
  func_0x03ccb96c(uVar7,param_1,**(undefined4 **)(_UNK_01e00918 + 0x1e005b0),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d92f0(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(*puVar6);
  func_0x03ccb96c(uVar7,param_1,**(undefined4 **)(_UNK_01e0091c + 0x1e005f4),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9450(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e00920 + 0x1e00624));
  func_0x03cd51ec(uVar7,param_1,**(undefined4 **)(_UNK_01e00924 + 0x1e00640),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8ab0(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e00928 + 0x1e00670));
  func_0x03cd51ec(uVar7,param_1,**(undefined4 **)(_UNK_01e0092c + 0x1e0068c),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8d70(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(*puVar6);
  func_0x03ccb96c(uVar7,param_1,**(undefined4 **)(_UNK_01e00930 + 0x1e006d0),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d95b0(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(*puVar6);
  func_0x03ccb96c(uVar7,param_1,**(undefined4 **)(_UNK_01e00934 + 0x1e00714),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9870(iVar5,uVar7,0);
  uVar7 = func_0x01384be4(*puVar6);
  func_0x03ccb96c(uVar7,param_1,**(undefined4 **)(_UNK_01e00938 + 0x1e00758),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02141510(iVar1,uVar7,0);
  uVar7 = func_0x01384be4(*puVar6);
  func_0x03ccb96c(uVar7,param_1,**(undefined4 **)(_UNK_01e0093c + 0x1e0079c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x021413b0(iVar1,uVar7,0);
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e00940 + 0x1e007cc));
  func_0x03cd4e0c(uVar7,param_1,**(undefined4 **)(_UNK_01e00944 + 0x1e007e8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x021417d0(iVar1,uVar7,0);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar5) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
  }
  func_0x01e00948(param_1);
  func_0x01e00c1c(param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}



// ===== FAT.MBBoardItemHolder$$_ClearItem RVA 0x1df0948 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e00948(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01e00bdc + 0x1e00960);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e00be0 + 0x1e00974));
    func_0x01384978(*(undefined4 *)(_UNK_01e00be4 + 0x1e00980));
    func_0x01384978(*(undefined4 *)(_UNK_01e00be8 + 0x1e0098c));
    func_0x01384978(*(undefined4 *)(_UNK_01e00bec + 0x1e00998));
    func_0x01384978(*(undefined4 *)(_UNK_01e00bf0 + 0x1e009a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e00bf4 + 0x1e009b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e00bf8 + 0x1e009bc));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xa00d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x54) = 1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01e00bfc + 0x1e00a38));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_40,iVar1,**(undefined4 **)(_UNK_01e00c00 + 0x1e00a64));
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    iStack_24 = iStack_34;
    puVar5 = *(undefined4 **)(_UNK_01e00c04 + 0x1e00a80);
    puVar7 = *(undefined4 **)(_UNK_01e00c08 + 0x1e00a88);
    while (iVar2 = func_0x01475908(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      func_0x0229fb54(iVar1,0);
      iVar2 = func_0x034aaa34(*puVar7);
      uVar6 = *(undefined4 *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0244ffd4(iVar1,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0244adcc(iVar2,uVar6,uVar3,0);
    }
    func_0x02450874(&uStack_30,**(undefined4 **)(_UNK_01e00c0c + 0x1e00b10));
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01e00c14 + 0x1e00b34));
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0xa00d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_ReleaseGrid RVA 0x1df0c1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e00c1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01e00da0 + 0x1e00c30);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e00da4 + 0x1e00c44));
    func_0x01384978(*(undefined4 *)(_UNK_01e00da8 + 0x1e00c50));
    func_0x01384978(*(undefined4 *)(_UNK_01e00dac + 0x1e00c5c));
    func_0x01384978(*(undefined4 *)(_UNK_01e00db0 + 0x1e00c68));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x0229f06c(0xa00e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa00e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  puVar7 = *(undefined4 **)(_UNK_01e00db4 + 0x1e00cc4);
  puVar8 = *(undefined4 **)(_UNK_01e00db8 + 0x1e00ccc);
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar4) break;
    iVar1 = func_0x034aaa34(*puVar7);
    iVar6 = *(int *)(param_1 + 0x20);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x0328eea8(iVar6,iVar4,*puVar8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0244ffd4(iVar6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0243bd74(iVar1,0x1d,uVar5,0);
    iVar4 = iVar4 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    return;
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$CanGrabItem RVA 0x1df0dbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e00dbc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iStack_14;
  
  pcVar5 = (char *)(_UNK_01e00f44 + 0x1e00dd8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e00f48 + 0x1e00dec));
    *pcVar5 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9e73,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e73,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = func_0x02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x4c);
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02116ae0(param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x02116a8c(param_2,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x4c);
  }
  uVar3 = func_0x0210e5f4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x03d66780(iVar1,uVar3,&iStack_14,**(undefined4 **)(_UNK_01e00f4c + 0x1e00ef8));
  iVar1 = iStack_14;
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    if (iStack_14 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x022a040c(iVar1,0);
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}



// ===== FAT.MBBoardItemHolder$$GrabItem RVA 0x1df0f50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e00f50(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_01e011e4 + 0x1e00f70);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e011e8 + 0x1e00f88));
    func_0x01384978(*(undefined4 *)(_UNK_01e011ec + 0x1e00f94));
    func_0x01384978(*(undefined4 *)(_UNK_01e011f0 + 0x1e00fa0));
    *pcVar5 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9e4f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e4f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02287a6c(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = func_0x02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x4c);
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02116ae0(param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x02116a8c(param_2,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x4c);
  }
  uVar7 = 0;
  uVar2 = func_0x0210e5f4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_28,**(undefined4 **)(_UNK_01e011f4 + 0x1e010bc));
  iVar1 = iStack_28;
  if (iVar3 != 0) {
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 0;
    iVar1 = func_0x022a040c(iVar1,0);
    if (iVar1 != 0) {
      iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01e011f8 + 0x1e01100));
      iVar1 = iStack_28;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      piVar4 = (int *)func_0x0244fc34(iVar1,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      piVar6 = (int *)0x0;
      if ((piVar4 != (int *)0x0) &&
         (piVar6 = piVar4, *piVar4 != **(int **)(_UNK_01e011fc + 0x1e01154))) {
        piVar6 = (int *)0x0;
      }
      func_0x01de3588(&uStack_30,iVar3,piVar6,param_3,param_4,0);
      *(undefined4 *)(param_1 + 0x28) = uStack_30;
      *(undefined4 *)(param_1 + 0x2c) = uStack_2c;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_30,param_2,0);
      iVar1 = iStack_28;
      *(int *)(param_1 + 0x38) = iStack_28;
      *(undefined4 *)(param_1 + 0x30) = uStack_30;
      *(undefined4 *)(param_1 + 0x34) = uStack_2c;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      func_0x022a1450(iVar1,0);
      uVar7 = 1;
    }
  }
  return uVar7;
}



// ===== FAT.MBBoardItemHolder$$OnScreenStateChanged RVA 0x1df1200 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e01200(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fStack_2c;
  float fStack_28;
  
  pcVar6 = (char *)(_UNK_01e014f8 + 0x1e01220);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e014fc + 0x1e01238));
    func_0x01384978(*(undefined4 *)(_UNK_01e01500 + 0x1e01244));
    func_0x01384978(*(undefined4 *)(_UNK_01e01504 + 0x1e01250));
    func_0x01384978(*(undefined4 *)(_UNK_01e01508 + 0x1e0125c));
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x5f57,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x5f57,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x021eadcc(iVar4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10,param_11,param_12,param_13,param_14,0);
    return;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    return;
  }
  piVar8 = *(int **)(_UNK_01e0150c + 0x1e0131c);
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar4 = func_0x0145b1cc(uVar7,0,0);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0244fc34(iVar4,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0244fc64(iVar4,0);
    iVar4 = func_0x03668dfc(**(undefined4 **)(_UNK_01e01510 + 0x1e01390));
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x01dd9b34(iVar4,0);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244fb8c(uVar7,uVar5,0);
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0x38);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar8 = (int *)func_0x0244fc34(iVar4,0);
      uVar7 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x30),(byte)(in_fpscr >> 0x16) & 3);
      uVar5 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x34),(byte)(in_fpscr >> 0x16) & 3);
      if (*(int *)(**(int **)(_UNK_01e01514 + 0x1e0141c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd99a8(&fStack_2c,uVar7,uVar5,0);
      fVar3 = fStack_28;
      fVar2 = fStack_2c;
      if ((piVar8 == (int *)0x0) || (*piVar8 != **(int **)(_UNK_01e01518 + 0x1e01468))) {
        func_0x01384bf0();
        bVar1 = true;
        piVar8 = (int *)0x0;
      }
      else {
        bVar1 = false;
      }
      func_0x0244fd6c(&fStack_2c,piVar8,0);
      fVar9 = *(float *)(param_1 + 0x28);
      fVar10 = *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x28) = fVar2;
      *(float *)(param_1 + 0x2c) = fVar3;
      if (bVar1) {
        func_0x01384bf0();
      }
      func_0x0244fdbc(piVar8,(fStack_2c - fVar9) + fVar2,(fStack_28 - fVar10) + fVar3,0);
      return;
    }
    return;
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$DragItem RVA 0x1df151c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0151c(int param_1,int param_2,float param_3,float param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01e016ac + 0x1e0153c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e016b0 + 0x1e01554));
    func_0x01384978(*(undefined4 *)(_UNK_01e016b4 + 0x1e01560));
    *pcVar5 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x9e74,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_24,**(undefined4 **)(_UNK_01e016b8 + 0x1e01600));
    iVar1 = iStack_24;
    if (iVar3 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      piVar4 = (int *)func_0x0244fc34(iVar1,0);
      fVar7 = *(float *)(param_1 + 0x28);
      fVar8 = *(float *)(param_1 + 0x2c);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
        piVar4 = (int *)0x0;
      }
      else {
        piVar6 = *(int **)(_UNK_01e016bc + 0x1e01664);
        if (*piVar4 != *piVar6) {
          func_0x01384bf0();
        }
        if (*piVar4 != *piVar6) {
          piVar4 = (int *)0x0;
        }
      }
      func_0x0244fdbc(piVar4,fVar7 + param_3,fVar8 + param_4,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e74,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022887ec(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$ClickItem RVA 0x1df16c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e016c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  uint uVar8;
  char *pcVar9;
  float fVar10;
  int iStack_24;
  
  pcVar9 = (char *)(_UNK_01e018bc + 0x1e016e0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e018c0 + 0x1e016f4));
    func_0x01384978(*(undefined4 *)(_UNK_01e018c4 + 0x1e01700));
    func_0x01384978(*(undefined4 *)(_UNK_01e018c8 + 0x1e0170c));
    *pcVar9 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x9eb4,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    uVar3 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x03d66780(iVar1,uVar3,&iStack_24,**(undefined4 **)(_UNK_01e018cc + 0x1e017ac));
    iVar1 = iStack_24;
    if (iVar4 != 0) {
      fVar10 = *(float *)(param_1 + 0x48);
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      piVar5 = (int *)func_0x022a20f4(iVar1,0);
      piVar6 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        uVar8 = (uint)*(byte *)(**(int **)(_UNK_01e018d0 + 0x1e017f4) + 0xb8);
        if ((uVar8 <= *(byte *)(*piVar5 + 0xb8)) &&
           (piVar6 = piVar5,
           *(int *)(*(int *)(*piVar5 + 100) + uVar8 * 4 + -4) !=
           **(int **)(_UNK_01e018d0 + 0x1e017f4))) {
          piVar6 = (int *)0x0;
        }
      }
      if (*(int *)(**(int **)(_UNK_01e018d4 + 0x1e0182c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar2 = 0;
      iVar1 = func_0x0145b1cc(piVar6,0,0);
      if (iVar1 != 0) {
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        fVar10 = (float)piVar6[5];
      }
      fVar7 = (float)func_0x02450ef4(0);
      if ((fVar10 + *(float *)(param_1 + 0x44) < fVar7) &&
         (iVar1 = func_0x01e018d8(param_1,param_2), iVar1 != 0)) {
        uVar3 = func_0x02450ef4(0);
        uVar2 = 1;
        *(undefined4 *)(param_1 + 0x44) = uVar3;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9eb4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardItemHolder$$_UseItem RVA 0x1df18d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e018d8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_01e01a60 + 0x1e018f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e01a64 + 0x1e01904));
    func_0x01384978(*(undefined4 *)(_UNK_01e01a68 + 0x1e01910));
    func_0x01384978(*(undefined4 *)(_UNK_01e01a6c + 0x1e0191c));
    func_0x01384978(*(undefined4 *)(_UNK_01e01a70 + 0x1e01928));
    func_0x01384978(*(undefined4 *)(_UNK_01e01a74 + 0x1e01934));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9eb5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9eb5,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  if (*(int *)(**(int **)(_UNK_01e01a78 + 0x1e01990) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x01ddc0e8(param_2,0,0);
  uVar5 = 1;
  if (iVar1 == 0) {
    iVar1 = func_0x02166c84(param_2,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01e01a7c + 0x1e019dc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x01deca58(param_2,0);
      if (iVar1 != 0) {
        return 1;
      }
    }
    if (*(int *)(**(int **)(_UNK_01e01a80 + 0x1e01a0c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01e01a84 + 0x1e01a28));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349eb38(iVar1,param_2,**(undefined4 **)(_UNK_01e01a88 + 0x1e01a4c));
    uVar5 = 0;
  }
  return uVar5;
}



// ===== FAT.MBBoardItemHolder$$ClickGirdReward RVA 0x1df1a8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e01a8c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e01b6c + 0x1e01aa8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e01b70 + 0x1e01abc));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9eb9,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_01e01b74 + 0x1e01b38));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x022a02f8(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9eb9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$ApplyFilter RVA 0x1df1b78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e01b78(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e01d58 + 0x1e01b90);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e01d5c + 0x1e01ba4));
    func_0x01384978(*(undefined4 *)(_UNK_01e01d60 + 0x1e01bb0));
    func_0x01384978(*(undefined4 *)(_UNK_01e01d64 + 0x1e01bbc));
    func_0x01384978(*(undefined4 *)(_UNK_01e01d68 + 0x1e01bc8));
    func_0x01384978(*(undefined4 *)(_UNK_01e01d6c + 0x1e01bd4));
    *pcVar3 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x9e5e,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01e01d70 + 0x1e01c48));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_20,iVar1,**(undefined4 **)(_UNK_01e01d74 + 0x1e01c74));
    puVar4 = *(undefined4 **)(_UNK_01e01d78 + 0x1e01c88);
    while (iVar2 = func_0x01475908(&uStack_20,*puVar4), iVar1 = iStack_14, iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x0229f988(iVar1,0);
    }
    func_0x02450874(&uStack_20,**(undefined4 **)(_UNK_01e01d7c + 0x1e01cc4));
  }
  else {
    iVar1 = func_0x0229f13c(0x9e5e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$RemoveFilter RVA 0x1df1d88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e01d88(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e01f68 + 0x1e01da0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e01f6c + 0x1e01db4));
    func_0x01384978(*(undefined4 *)(_UNK_01e01f70 + 0x1e01dc0));
    func_0x01384978(*(undefined4 *)(_UNK_01e01f74 + 0x1e01dcc));
    func_0x01384978(*(undefined4 *)(_UNK_01e01f78 + 0x1e01dd8));
    func_0x01384978(*(undefined4 *)(_UNK_01e01f7c + 0x1e01de4));
    *pcVar3 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x5eef,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01e01f80 + 0x1e01e58));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_20,iVar1,**(undefined4 **)(_UNK_01e01f84 + 0x1e01e84));
    puVar4 = *(undefined4 **)(_UNK_01e01f88 + 0x1e01e98);
    while (iVar2 = func_0x01475908(&uStack_20,*puVar4), iVar1 = iStack_14, iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x0229fcf8(iVar1,0);
    }
    func_0x02450874(&uStack_20,**(undefined4 **)(_UNK_01e01f8c + 0x1e01ed4));
  }
  else {
    iVar1 = func_0x0229f13c(0x5eef,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$SetSelectedItem RVA 0x1df1f98 =====

void FUN_01e01f98(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x9ebd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ebd,0);
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
    func_0x01485238(&uStack_38,param_2,0);
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
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ===== FAT.MBBoardItemHolder$$MoveBack RVA 0x1df1ff4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e01ff4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_01e020f8 + 0x1e02010);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e020fc + 0x1e02024));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5fa5,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_14,**(undefined4 **)(_UNK_01e02100 + 0x1e020bc));
    iVar1 = iStack_14;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x022a154c(iVar1,0);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x5fa5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$HoldItem RVA 0x1df2104 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e02104(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = func_0x0229f06c(0x5b92,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01e02280(param_1,param_2,param_3);
    if (param_4 == 0) {
      func_0x01384bf0();
    }
    func_0x024505b4(param_4,uVar2,0);
    pcVar4 = (char *)(_UNK_01e02268 + 0x1e021a8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0226c + 0x1e021bc));
      *pcVar4 = '\x01';
    }
    puVar3 = *(undefined4 **)(**(int **)(_UNK_01e02270 + 0x1e021d4) + 0x5c);
    uVar2 = *puVar3;
    uVar5 = puVar3[1];
    if (param_4 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fdbc(param_4,uVar2,uVar5,0);
    pcVar4 = (char *)(_UNK_01e02274 + 0x1e02204);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e02278 + 0x1e02218));
      *pcVar4 = '\x01';
    }
    iVar1 = *(int *)(**(int **)(_UNK_01e0227c + 0x1e02230) + 0x5c);
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    uVar5 = *(undefined4 *)(iVar1 + 0x10);
    uVar6 = *(undefined4 *)(iVar1 + 0x14);
    if (param_4 == 0) {
      func_0x01384bf0();
    }
    func_0x024503a4(param_4,uVar2,uVar5,uVar6,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5b92,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_Grid RVA 0x1df2280 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e02280(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar6 = (char *)(_UNK_01e02394 + 0x1e022a0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e02398 + 0x1e022b4));
    func_0x01384978(*(undefined4 *)(_UNK_01e0239c + 0x1e022c0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b93,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b93,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022338c0(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  iVar7 = *(int *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x18);
  iVar1 = iVar7;
  if (iVar7 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (iVar5 * param_3 + param_2 < *(int *)(iVar7 + 0xc)) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = iVar5 * param_3 + param_2;
    puVar3 = *(undefined4 **)(_UNK_01e023a4 + 0x1e02368);
  }
  else {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    puVar3 = *(undefined4 **)(_UNK_01e023a0 + 0x1e02384);
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar4) {
    func_0x0484c9cc(0,uVar4,*puVar3);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar4) {
    func_0x01384bf4();
  }
  return *(undefined4 *)(iVar1 + uVar4 * 4 + 0x10);
}



// ===== FAT.MBBoardItemHolder$$ReleaseItem RVA 0x1df23a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e023a8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01e0252c + 0x1e023c4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e02530 + 0x1e023d8));
    func_0x01384978(*(undefined4 *)(_UNK_01e02534 + 0x1e023e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e02538 + 0x1e023f0));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x5d93,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x54) == '\0') {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03d66780(iVar1,param_2,&iStack_1c,**(undefined4 **)(_UNK_01e0253c + 0x1e02478))
      ;
      iVar1 = iStack_1c;
      if (iVar2 != 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        func_0x0229fb54(iVar1,0);
        iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01e02540 + 0x1e024b0));
        iVar1 = iStack_1c;
        uVar5 = *(undefined4 *)(param_1 + 0x5c);
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x0244ffd4(iVar1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0244adcc(iVar2,uVar5,uVar3,0);
        iVar1 = *(int *)(param_1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d66094(iVar1,param_2,**(undefined4 **)(_UNK_01e02544 + 0x1e0251c));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5d93,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$FindItemView RVA 0x1df2548 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e02548(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01e02614 + 0x1e02564);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e02618 + 0x1e02578));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5b8f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d66780(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01e0261c + 0x1e025f4));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b8f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x022337a0(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.MBBoardItemHolder$$TakeoverItem RVA 0x1df2620 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e02620(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01e02730 + 0x1e0263c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e02734 + 0x1e02650));
    func_0x01384978(*(undefined4 *)(_UNK_01e02738 + 0x1e0265c));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x9ec7,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (*(char *)(param_1 + 0x54) == '\0') {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d66780(iVar1,param_2,&uStack_1c,**(undefined4 **)(_UNK_01e0273c + 0x1e026e8))
      ;
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d66094(iVar1,param_2,**(undefined4 **)(_UNK_01e02740 + 0x1e02718));
        uVar2 = uStack_1c;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9ec7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022337a0(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardItemHolder$$TapItem RVA 0x1df2744 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e02744(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01e02840 + 0x1e02764);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e02844 + 0x1e02778));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x96cf,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar1,param_2,&iStack_1c,**(undefined4 **)(_UNK_01e02848 + 0x1e027fc));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      if (param_3 == 0) {
        func_0x022a0760(iVar1,0);
      }
      else {
        func_0x022a07c4();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x96cf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f950(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$IsItemIdle RVA 0x1df284c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0284c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e02934 + 0x1e02868);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e02938 + 0x1e0287c));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0xa00f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_01e0293c + 0x1e028f8));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0(0);
      }
      func_0x022a040c(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa00f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179234(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$SetSelectItem RVA 0x1df2940 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e02940(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e02a20 + 0x1e0295c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e02a24 + 0x1e02970));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x7653,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_01e02a28 + 0x1e029ec));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x022a1064(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7653,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$SetDeselectItem RVA 0x1df2a2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e02a2c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e02b0c + 0x1e02a48);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e02b10 + 0x1e02a5c));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5ee3,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_01e02b14 + 0x1e02ad8));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x022a10c8(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ee3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$TryResolveInventorySpawnQueue RVA 0x1df2b18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e02b18(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_01e02e20 + 0x1e02b30);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e02e24 + 0x1e02b44));
    func_0x01384978(*(undefined4 *)(_UNK_01e02e28 + 0x1e02b50));
    func_0x01384978(*(undefined4 *)(_UNK_01e02e2c + 0x1e02b5c));
    func_0x01384978(*(undefined4 *)(_UNK_01e02e30 + 0x1e02b68));
    func_0x01384978(*(undefined4 *)(_UNK_01e02e34 + 0x1e02b74));
    func_0x01384978(*(undefined4 *)(_UNK_01e02e38 + 0x1e02b80));
    func_0x01384978(*(undefined4 *)(_UNK_01e02e3c + 0x1e02b8c));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_3c = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x15f5,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar5 = iRam0000000c;
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar1 = 0;
      }
    }
    else {
      iVar5 = *(int *)(iVar1 + 0xc);
    }
    func_0x0328fe1c(&uStack_50,iVar1,**(undefined4 **)(_UNK_01e02e40 + 0x1e02c34));
    uVar2 = (uint)(0 < iVar5);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    puVar6 = *(undefined4 **)(_UNK_01e02e44 + 0x1e02c64);
    puVar7 = *(undefined4 **)(_UNK_01e02e48 + 0x1e02c6c);
    while (iVar5 = func_0x0145b12c(&uStack_38,*puVar6), iVar1 = iStack_2c, iVar5 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x02116a8c(iVar1,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x0210e5f4(iVar1,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03d66780(iVar5,uVar3,&iStack_3c,*puVar7);
        if (iVar5 == 0) {
          iStack_3c = func_0x01e02e58(param_1,iVar1);
        }
        iVar1 = iStack_3c;
        if (iStack_3c == 0) {
          func_0x01384bf0();
        }
        func_0x022a162c(iVar1,0);
      }
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01e02e4c + 0x1e02d2c));
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar5) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x15f5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardItemHolder$$_CreateView RVA 0x1df2e58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e02e58(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_01e03010 + 0x1e02e70);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e03014 + 0x1e02e84));
    func_0x01384978(*(undefined4 *)(_UNK_01e03018 + 0x1e02e90));
    func_0x01384978(*(undefined4 *)(_UNK_01e0301c + 0x1e02e9c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15f6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x15f6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021d1b84 + 0x21d1a90);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d1b88 + 0x21d1aa4),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021d1b8c + 0x21d1b74));
    return iVar1;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01e03020 + 0x1e02ef8));
  uVar5 = *(undefined4 *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ad68(iVar1,uVar5,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01e03024 + 0x1e02f3c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244ffd4(iVar1,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar3,1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
    func_0x0229f85c(0,param_2,0);
    func_0x01384bf0();
  }
  else {
    func_0x0229f85c(iVar1,param_2,0);
  }
  func_0x022a1274(iVar1,0);
  iVar3 = *(int *)(param_1 + 0x4c);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0210e5f4(param_2,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64944(iVar3,uVar5,iVar1,**(undefined4 **)(_UNK_01e03028 + 0x1e03000));
  return iVar1;
}



// ===== FAT.MBBoardItemHolder$$ReFillItem RVA 0x1df302c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0302c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01e03408 + 0x1e03044);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0340c + 0x1e03058));
    func_0x01384978(*(undefined4 *)(_UNK_01e03410 + 0x1e03064));
    func_0x01384978(*(undefined4 *)(_UNK_01e03414 + 0x1e03070));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar2 = func_0x0229f06c(0x5fae,0);
  if (iVar2 == 0) {
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e03418 + 0x1e030d0));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (0 < iVar3) {
      iVar9 = *(int *)(iVar2 + 0x7c);
      iVar14 = 0;
      iVar2 = *(int *)(param_1 + 0x1c);
      piVar13 = *(int **)(_UNK_01e0341c + 0x1e03108);
      do {
        if (0 < iVar2) {
          iVar3 = 0;
          do {
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x020e81ec(iVar9,iVar14,iVar3,0);
            if (iVar2 != 0) {
              iVar11 = *(int *)(param_1 + 0x4c);
              uVar4 = func_0x0210e5f4(iVar2,0);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar5 = func_0x03d66780(iVar11,uVar4,&iStack_28,
                                      **(undefined4 **)(_UNK_01e03420 + 0x1e03174));
              iVar11 = iStack_28;
              if (iVar5 == 0) {
                iVar2 = FUN_01e02e58(param_1,iVar2);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                piVar6 = (int *)func_0x0244fc34(iVar2,0);
                if ((piVar6 == (int *)0x0) || (*piVar6 != **(int **)(_UNK_01e03430 + 0x1e03228))) {
                  uVar4 = FUN_01e02280(param_1,iVar14,iVar3);
                  func_0x01384bf0();
                  piVar6 = (int *)0x0;
                  bVar1 = true;
                }
                else {
                  uVar4 = FUN_01e02280(param_1,iVar14,iVar3);
                  bVar1 = false;
                }
                func_0x024505b4(piVar6,uVar4,0);
                if (*(char *)(_UNK_01e03434 + 0x1e03314) == '\0') {
                  func_0x01384978(piVar13);
                  *(undefined1 *)(_UNK_01e03438 + 0x1e03334) = 1;
                }
                puVar7 = *(undefined4 **)(*piVar13 + 0x5c);
                uVar4 = *puVar7;
                uVar10 = puVar7[1];
                uVar12 = puVar7[2];
                if (bVar1) {
                  func_0x01384bf0();
                }
              }
              else {
                if (iStack_28 == 0) {
                  func_0x01384bf0();
                }
                piVar6 = (int *)func_0x0244fc34(iVar11,0);
                if ((piVar6 == (int *)0x0) || (*piVar6 != **(int **)(_UNK_01e03424 + 0x1e031b8))) {
                  uVar4 = FUN_01e02280(param_1,iVar14,iVar3);
                  func_0x01384bf0();
                  piVar6 = (int *)0x0;
                  bVar1 = true;
                }
                else {
                  uVar4 = FUN_01e02280(param_1,iVar14,iVar3);
                  bVar1 = false;
                }
                func_0x024505b4(piVar6,uVar4,0);
                if (*(char *)(_UNK_01e03428 + 0x1e0328c) == '\0') {
                  func_0x01384978(piVar13);
                  *(undefined1 *)(_UNK_01e0342c + 0x1e032ac) = 1;
                }
                puVar7 = *(undefined4 **)(*piVar13 + 0x5c);
                uVar4 = *puVar7;
                uVar10 = puVar7[1];
                uVar12 = puVar7[2];
                if (bVar1) {
                  func_0x01384bf0();
                }
              }
              func_0x0245068c(piVar6,uVar4,uVar10,uVar12,0);
              if (*(char *)(_UNK_01e0343c + 0x1e03374) == '\0') {
                func_0x01384978(piVar13);
                *(undefined1 *)(_UNK_01e03440 + 0x1e03394) = 1;
              }
              iVar2 = *(int *)(*piVar13 + 0x5c);
              uVar4 = *(undefined4 *)(iVar2 + 0xc);
              uVar10 = *(undefined4 *)(iVar2 + 0x10);
              uVar12 = *(undefined4 *)(iVar2 + 0x14);
              if (bVar1) {
                func_0x01384bf0();
              }
              func_0x024503a4(piVar6,uVar4,uVar10,uVar12,0);
              piVar13 = *(int **)(_UNK_01e03444 + 0x1e033e4);
            }
            iVar2 = *(int *)(param_1 + 0x1c);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar2);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar3);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5fae,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemEvent RVA 0x1df3448 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e03448(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_01e03a24 + 0x1e03468);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e03a28 + 0x1e0347c));
    func_0x01384978(*(undefined4 *)(_UNK_01e03a2c + 0x1e03488));
    func_0x01384978(*(undefined4 *)(_UNK_01e03a30 + 0x1e03494));
    func_0x01384978(*(undefined4 *)(_UNK_01e03a34 + 0x1e034a0));
    func_0x01384978(*(undefined4 *)(_UNK_01e03a38 + 0x1e034ac));
    func_0x01384978(*(undefined4 *)(_UNK_01e03a3c + 0x1e034b8));
    func_0x01384978(*(undefined4 *)(_UNK_01e03a40 + 0x1e034c4));
    func_0x01384978(*(undefined4 *)(_UNK_01e03a44 + 0x1e034d0));
    func_0x01384978(*(undefined4 *)(_UNK_01e03a48 + 0x1e034dc));
    func_0x01384978(*(undefined4 *)(_UNK_01e03a4c + 0x1e034e8));
    func_0x01384978(*(undefined4 *)(_UNK_01e03a50 + 0x1e034f4));
    *pcVar11 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x9fee,0);
  if (iVar2 == 0) {
    switch(param_3) {
    case 8:
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0210cd28(param_2,0);
      if (iVar2 != 0) {
        iVar2 = FUN_01e02e58(param_1,param_2);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x022a15bc(iVar2,0);
      }
      break;
    case 0xb:
      iVar2 = func_0x03668dfc(**(undefined4 **)(&UNK_01e035ec + _UNK_01e03a54));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar4 = *(undefined4 *)(iVar2 + 0x10);
      uVar8 = *(undefined4 *)(iVar2 + 0x14);
      piVar7 = (int *)func_0x0244fc34(param_1,0);
      if (*(int *)(**(int **)(&UNK_01e03628 + _UNK_01e03a58) + 0x74) == 0) {
        func_0x01384ab4();
      }
      piVar6 = (int *)0x0;
      if ((piVar7 != (int *)0x0) &&
         (piVar6 = piVar7, *piVar7 != **(int **)(&UNK_01e0364c + _UNK_01e03a5c))) {
        piVar6 = (int *)0x0;
      }
      func_0x02451750(piVar6,uVar4,uVar8,0,&uStack_30,0);
      if (*(int *)(**(int **)(&UNK_01e0368c + _UNK_01e03a60) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0300d558(**(undefined4 **)(&UNK_01e036a8 + _UNK_01e03a64));
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0210e2d4(param_2,0);
      uVar1 = uStack_28;
      uVar4 = uStack_2c;
      uVar8 = uStack_30;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x034a11b0(iVar2,uVar3,uVar8,uVar4,uVar1,**(undefined4 **)(&UNK_01e036fc + _UNK_01e03a68)
                     );
      break;
    case 0xd:
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x0210e5f4(param_2,0);
      iVar2 = FUN_01e02548(param_1,uVar8);
      if (*(int *)(**(int **)(&UNK_01e03744 + _UNK_01e03a6c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar9 = func_0x0145b1cc(iVar2,0,0);
      if (iVar9 != 0) {
        iVar9 = func_0x03668dfc(**(undefined4 **)(&UNK_01e03778 + _UNK_01e03a70));
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = func_0x01ddbed8(iVar9,0);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar8 = func_0x01f0932c(iVar9,0);
        if (*(int *)(**(int **)(&UNK_01e037c4 + _UNK_01e03a74) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uStack_34 = func_0x01dda730(0x16,0);
        uStack_38 = 0xffffffff;
        uStack_3c = **(undefined4 **)(&UNK_01e037ec + _UNK_01e03a78);
        uVar4 = func_0x0244f5f4(&uStack_3c,0);
        iVar9 = func_0x034aaa34(**(undefined4 **)(&UNK_01e03818 + _UNK_01e03a7c));
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = func_0x0244a45c(iVar9,uVar4,uVar8,0);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x024504c0(iVar9,0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_48,param_2,0);
        func_0x01dd876c(&uStack_48,uStack_48,uStack_44,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x024503d4(iVar5,uStack_48,uStack_44,uStack_40,0);
        func_0x01dda7a0(iVar9,0x40000000,uVar4,0);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar9,1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar6 = (int *)func_0x022a20f4(iVar2,0);
        piVar7 = (int *)0x0;
        if (piVar6 == (int *)0x0) {
          piVar12 = *(int **)(&UNK_01e039e0 + _UNK_01e03a80);
        }
        else {
          uVar10 = (uint)*(byte *)(**(int **)(&UNK_01e03924 + _UNK_01e03a84) + 0xb8);
          piVar12 = *(int **)(&UNK_01e03940 + _UNK_01e03a88);
          if ((uVar10 <= *(byte *)(*piVar6 + 0xb8)) &&
             (piVar7 = piVar6,
             *(int *)(*(int *)(*piVar6 + 100) + uVar10 * 4 + -4) !=
             **(int **)(&UNK_01e03924 + _UNK_01e03a84))) {
            piVar7 = (int *)0x0;
          }
        }
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0145b1cc(piVar7,0,0);
        if (iVar2 != 0) {
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          func_0x01e0e6c8(piVar7,0);
        }
      }
      break;
    case 0xe:
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x0210e5f4(param_2,0);
      iVar2 = FUN_01e02548(param_1,uVar8);
      if (*(int *)(**(int **)(&UNK_01e03990 + _UNK_01e03a8c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar9 = func_0x0145b1cc(iVar2,0,0);
      if (iVar9 != 0) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x022a1b04(iVar2,0);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9fee,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02180430(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemMove RVA 0x1df3a90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e03a90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iStack_14;
  
  pcVar9 = (char *)(_UNK_01e03d00 + 0x1e03aac);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e03d04 + 0x1e03ac0));
    func_0x01384978(*(undefined4 *)(_UNK_01e03d08 + 0x1e03acc));
    *pcVar9 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9fa8,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_14,**(undefined4 **)(_UNK_01e03d0c + 0x1e03b64));
    iVar1 = iStack_14;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x022a154c(iVar1,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      piVar4 = (int *)func_0x021169e4(param_2,0);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar4;
      uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01e03d10 + 0x1e03be4)) {
            puVar5 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
            goto LAB_01e03c2c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01e03d10 + 0x1e03be4),0);
LAB_01e03c2c:
      uVar2 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = 0;
      iVar1 = func_0x01dbd454(iVar1,uVar2,0);
      if (iVar1 != 0) {
        uVar10 = *(undefined4 *)(iVar1 + 0x20);
      }
      iVar3 = func_0x01489db8(uVar10,0);
      if (iVar3 == 0) {
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar3 + 8);
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = *(undefined4 *)(iVar3 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar10 = *(undefined4 *)(iVar1 + 0x20);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x01bfe078(iVar8,uVar2,uVar10,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9fa8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemMerge RVA 0x1df3d14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e03d14(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01e0417c + 0x1e03d34);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e04180 + 0x1e03d4c));
    func_0x01384978(*(undefined4 *)(_UNK_01e04184 + 0x1e03d58));
    func_0x01384978(*(undefined4 *)(_UNK_01e04188 + 0x1e03d64));
    func_0x01384978(*(undefined4 *)(_UNK_01e0418c + 0x1e03d70));
    *pcVar7 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9fbf,0);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e2d4(param_4,0);
    uVar2 = func_0x02157e88(uVar2,0);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02116a38(param_3,0);
    if (*(int *)(**(int **)(_UNK_01e04190 + 0x1e03e24) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01994ee8(param_4,uVar2,uVar3,0);
    func_0x01c86f40(param_2,param_3,param_4,0);
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e04194 + 0x1e03e68));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ddbed8(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f09134(iVar1,0);
    if (param_4 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_34,param_4,0);
    uVar3 = uStack_30;
    uVar2 = uStack_34;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01dfb3cc(iVar1,uVar2,uVar3);
    iVar4 = func_0x02168a28(param_2,0);
    iVar5 = func_0x02168a28(param_3,0);
    if (iVar4 != 0 || iVar5 != 0) {
      if (param_4 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_34,param_4,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_01dfb458(iVar1,uStack_34,uStack_30);
      iVar1 = param_3;
      if (iVar4 != 0) {
        iVar1 = param_2;
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
        uVar2 = func_0x0210e5f4(0,0);
        func_0x01384bf0();
        uVar3 = func_0x0210e2d4(0,0);
        func_0x01384bf0();
      }
      else {
        uVar2 = func_0x0210e5f4(iVar1,0);
        uVar3 = func_0x0210e2d4(iVar1,0);
      }
      uVar6 = func_0x0210e2d4(iVar1,0);
      uVar6 = func_0x02157e88(uVar6,0);
      func_0x019a4228(uVar2,uVar3,uVar6,0);
    }
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar8 = *(undefined4 **)(_UNK_01e04198 + 0x1e04028);
    iVar1 = func_0x03d66780(iVar1,uVar2,&iStack_28,*puVar8);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0210e5f4(param_3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x03d66780(iVar1,uVar2,&iStack_2c,*puVar8);
      iVar1 = iStack_28;
      if (iVar4 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        func_0x022a1954(iVar1,0);
        iVar1 = iStack_2c;
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        func_0x022a1954(iVar1,0);
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01e0419c + 0x1e040c0));
        func_0x0229f630(iVar4,0);
        iVar1 = iStack_28;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar4 + 0xc) = iStack_2c;
        *(int *)(iVar4 + 8) = iVar1;
        iVar1 = FUN_01e02e58(param_1,param_4);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x022a1834(iVar1,iVar4,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (param_4 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x0210e2d4(param_4,0);
        uVar2 = func_0x02157e88(uVar2,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01bfebe0(iVar1,uVar2,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9fbf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemSpawn RVA 0x1df41a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e041a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01e04a5c + 0x1e041c0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e04a60 + 0x1e041d4));
    func_0x01384978(*(undefined4 *)(_UNK_01e04a64 + 0x1e041e0));
    func_0x01384978(*(undefined4 *)(_UNK_01e04a68 + 0x1e041ec));
    func_0x01384978(*(undefined4 *)(_UNK_01e04a6c + 0x1e041f8));
    func_0x01384978(*(undefined4 *)(_UNK_01e04a70 + 0x1e04204));
    func_0x01384978(*(undefined4 *)(_UNK_01e04a74 + 0x1e04210));
    func_0x01384978(*(undefined4 *)(_UNK_01e04a78 + 0x1e0421c));
    func_0x01384978(*(undefined4 *)(_UNK_01e04a7c + 0x1e04228));
    func_0x01384978(*(undefined4 *)(_UNK_01e04a80 + 0x1e04234));
    func_0x01384978(*(undefined4 *)(_UNK_01e04a84 + 0x1e04240));
    func_0x01384978(*(undefined4 *)(_UNK_01e04a88 + 0x1e0424c));
    *pcVar7 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  iVar1 = func_0x0229f06c(0x9fa9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9fa9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e5f4(param_3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03d66780(iVar1,uVar2,&iStack_28,**(undefined4 **)(_UNK_01e04a8c + 0x1e042f8));
  if (iVar1 == 0) {
    iStack_28 = FUN_01e02e58(param_1,param_3);
  }
  iVar1 = iStack_28;
  if (iStack_28 == 0) {
    func_0x01384bf0();
  }
  func_0x022a16e0(iVar1,param_2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar8 == 0) {
    if (iVar1 == 7) {
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0210e2d4(param_3,0);
      uVar2 = func_0x02157e88(uVar2,0);
      if (*(int *)(**(int **)(_UNK_01e04abc + 0x1e04934) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01996044(param_3,uVar2,0);
    }
    else if (iVar1 == 0xd) {
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0210e2d4(param_3,0);
      uVar2 = func_0x02157e88(uVar2,0);
      if (*(int *)(**(int **)(_UNK_01e04ab8 + 0x1e04988) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01994d74(param_3,uVar2,0);
    }
    else if (iVar1 == 0xc) {
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02116990(param_3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x50);
      if (0 < iVar1) {
        if (*(int *)(**(int **)(_UNK_01e04aac + 0x1e04434) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar8 = func_0x0300d558(**(undefined4 **)(_UNK_01e04ab0 + 0x1e04450));
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x034a1f3c(iVar8,param_3,iVar1,**(undefined4 **)(_UNK_01e04ab4 + 0x1e04478));
      }
    }
  }
  else {
    if (iVar1 == 0x10) {
      iVar1 = func_0x02feb690(iVar8,&iStack_34,0,**(undefined4 **)(_UNK_01e04a94 + 0x1e04498));
      if (iVar1 != 0) {
        uVar2 = func_0x0210e5f4(iVar8,0);
        iVar1 = FUN_01e02548(param_1,uVar2);
        if (*(int *)(**(int **)(_UNK_01e04a98 + 0x1e044d0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x0145b1cc(iVar1,0,0);
        if (iVar3 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x022a14a4(iVar1,0);
        }
        iVar1 = iStack_34;
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x0212f990(iVar1,0);
        iVar1 = iStack_34;
        if (iVar3 == 0) {
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0212f798(iVar1,0);
LAB_01e04550:
          if (iVar1 != 0) goto LAB_01e04558;
        }
      }
    }
    else if (iVar1 == 3) {
LAB_01e04558:
      uVar2 = func_0x0210e2d4(iVar8,0);
      uVar2 = func_0x02157e88(uVar2,0);
      if (*(int *)(**(int **)(_UNK_01e04a9c + 0x1e0457c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01995d28(iVar8,uVar2,0);
    }
    else if ((iVar1 == 1) &&
            (iVar3 = func_0x02feb690(iVar8,&iStack_30,0,**(undefined4 **)(_UNK_01e04a90 + 0x1e04388)
                                    ), iVar1 = iStack_30, iVar3 != 0)) {
      if (iStack_30 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02122f9c(iVar1,0);
      iVar1 = iStack_30;
      if (iVar3 == 0) {
        if (iStack_30 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02122da4(iVar1,0);
        goto LAB_01e04550;
      }
    }
    uVar2 = 0;
    func_0x02feb690(iVar8,&iStack_2c,0,**(undefined4 **)(_UNK_01e04aa0 + 0x1e045b4));
    iVar1 = *(int *)(param_1 + 0x58);
    if (0 < iVar1) {
      iVar8 = *(int *)(param_2 + 8);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x0210e5f4(iVar8,0);
      if (iVar1 == iVar8) {
        if (param_3 == 0) {
          func_0x01384bf0();
        }
        uVar9 = 0;
        uVar4 = func_0x0210e2d4(param_3,0);
        uVar4 = func_0x02157e88(uVar4,0);
        iVar1 = *(int *)(param_2 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x0210e2d4(iVar1,0);
        if (iStack_2c != 0) {
          uVar9 = func_0x02122d24(iStack_2c,0);
        }
        if (*(int *)(**(int **)(_UNK_01e04aa4 + 0x1e04658) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01994bcc(param_3,uVar4,uVar5,uVar9,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x108);
        if (param_3 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x0210e2d4(param_3,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01cde1b4(iVar1,uVar4,0);
      }
      *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    }
    if (iStack_2c != 0) {
      iVar8 = func_0x02122d24(iStack_2c,0);
      iVar1 = iStack_2c;
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      if (iVar8 == 0) {
        uVar2 = func_0x02123ba4(iVar1,0);
      }
      else {
        uVar2 = func_0x02122d24();
      }
    }
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e2d4(param_3,0);
    uVar4 = func_0x02157e88(uVar4,0);
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x0210e2d4(iVar1,0);
    if (*(int *)(**(int **)(_UNK_01e04aa8 + 0x1e0477c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01994a24(param_3,uVar4,uVar9,uVar2,0);
  }
  if (param_3 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x0210e250(0,6,0,0);
    if (iVar1 != 0) {
      func_0x01384bf0();
      goto LAB_01e047f0;
    }
  }
  else {
    iVar1 = func_0x0210e250(param_3,6,0,0);
    if (iVar1 != 0) {
LAB_01e047f0:
      iVar1 = func_0x02feb4f8(param_3,0,**(undefined4 **)(_UNK_01e04ac0 + 0x1e04800));
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar8 = func_0x0211e720(0,0);
        if (iVar8 != 0) goto LAB_01e048d0;
        func_0x01384bf0();
LAB_01e049b0:
        iVar1 = func_0x0211e780(iVar1,0);
        if (iVar1 == 0) {
          return;
        }
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        puVar6 = *(undefined4 **)(_UNK_01e04ac4 + 0x1e049f8);
      }
      else {
        iVar8 = func_0x0211e720(iVar1,0);
        if (iVar8 == 0) goto LAB_01e049b0;
LAB_01e048d0:
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        puVar6 = *(undefined4 **)(_UNK_01e04ac8 + 0x1e04904);
      }
      uStack_3c = *puVar6;
      goto LAB_01e049fc;
    }
  }
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  uVar2 = func_0x0210e2d4(*(int *)(param_2 + 8),0);
  func_0x02169cc8(&uStack_3c,uVar2,0);
  iVar1 = func_0x01489db8(uStack_3c,0);
  if (iVar1 != 0) {
    return;
  }
  iVar8 = func_0x01489db8(uStack_38,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar8 == 0) {
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar8 + 8);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar8 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01bfe078(iVar1,uVar2,uStack_38,0);
    return;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
LAB_01e049fc:
  func_0x01bf3284(iVar1,uStack_3c,0);
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemSpawnFly RVA 0x1df4acc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e04acc(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_01e04d4c + 0x1e04aec);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e04d50 + 0x1e04b00));
    func_0x01384978(*(undefined4 *)(_UNK_01e04d54 + 0x1e04b0c));
    func_0x01384978(*(undefined4 *)(_UNK_01e04d58 + 0x1e04b18));
    func_0x01384978(*(undefined4 *)(_UNK_01e04d5c + 0x1e04b24));
    func_0x01384978(*(undefined4 *)(_UNK_01e04d60 + 0x1e04b30));
    *pcVar8 = '\x01';
  }
  iStack_24 = 0;
  iVar2 = func_0x0229f06c(0x9fb0,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_30,param_2,0);
    uVar1 = uStack_2c;
    uVar3 = uStack_30;
    if (*(int *)(**(int **)(_UNK_01e04d64 + 0x1e04bb8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd876c(&uStack_30,uVar3,uVar1,0);
    iVar2 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0210e5f4(param_2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x03d66780(iVar2,uVar3,&iStack_24,**(undefined4 **)(_UNK_01e04d68 + 0x1e04c30));
    iVar2 = iStack_24;
    if (iVar4 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      piVar5 = (int *)func_0x022a20f4(iVar2,0);
      piVar6 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        uVar7 = (uint)*(byte *)(**(int **)(_UNK_01e04d6c + 0x1e04c74) + 0xb8);
        if ((uVar7 <= *(byte *)(*piVar5 + 0xb8)) &&
           (piVar6 = piVar5,
           *(int *)(*(int *)(*piVar5 + 100) + uVar7 * 4 + -4) !=
           **(int **)(_UNK_01e04d6c + 0x1e04c74))) {
          piVar6 = (int *)0x0;
        }
      }
      if (*(int *)(**(int **)(_UNK_01e04d70 + 0x1e04cac) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0145b1cc(piVar6,0,0);
      if (iVar2 != 0) {
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x01e0ebd8(piVar6,param_3,uStack_30,uStack_2c,uStack_28,0);
        return;
      }
    }
    if (*(int *)(**(int **)(_UNK_01e04d74 + 0x1e04d10) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x020718d0(param_3,uStack_30,uStack_2c,uStack_28,0,0,0);
  }
  else {
    iVar2 = func_0x0229f13c(0x9fb0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemSpawnFlySmart RVA 0x1df4d78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e04d78(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_01e04ff8 + 0x1e04d98);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e04ffc + 0x1e04dac));
    func_0x01384978(*(undefined4 *)(_UNK_01e05000 + 0x1e04db8));
    func_0x01384978(*(undefined4 *)(_UNK_01e05004 + 0x1e04dc4));
    func_0x01384978(*(undefined4 *)(_UNK_01e05008 + 0x1e04dd0));
    func_0x01384978(*(undefined4 *)(_UNK_01e0500c + 0x1e04ddc));
    *pcVar8 = '\x01';
  }
  iStack_24 = 0;
  iVar2 = func_0x0229f06c(0x9fbb,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_30,param_2,0);
    uVar1 = uStack_2c;
    uVar3 = uStack_30;
    if (*(int *)(**(int **)(_UNK_01e05010 + 0x1e04e64) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd876c(&uStack_30,uVar3,uVar1,0);
    iVar2 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0210e5f4(param_2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x03d66780(iVar2,uVar3,&iStack_24,**(undefined4 **)(_UNK_01e05014 + 0x1e04edc));
    iVar2 = iStack_24;
    if (iVar4 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      piVar5 = (int *)func_0x022a20f4(iVar2,0);
      piVar6 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        uVar7 = (uint)*(byte *)(**(int **)(_UNK_01e05018 + 0x1e04f20) + 0xb8);
        if ((uVar7 <= *(byte *)(*piVar5 + 0xb8)) &&
           (piVar6 = piVar5,
           *(int *)(*(int *)(*piVar5 + 100) + uVar7 * 4 + -4) !=
           **(int **)(_UNK_01e05018 + 0x1e04f20))) {
          piVar6 = (int *)0x0;
        }
      }
      if (*(int *)(**(int **)(_UNK_01e0501c + 0x1e04f58) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0145b1cc(piVar6,0,0);
      if (iVar2 != 0) {
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x01e0ebd8(piVar6,param_3,uStack_30,uStack_2c,uStack_28,0);
        return;
      }
    }
    if (*(int *)(**(int **)(_UNK_01e05020 + 0x1e04fbc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02071b20(param_3,uStack_30,uStack_2c,uStack_28,0,0,0);
  }
  else {
    iVar2 = func_0x0229f13c(0x9fbb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemDead RVA 0x1df5024 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e05024(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01e053b4 + 0x1e05044);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e053b8 + 0x1e05058));
    func_0x01384978(*(undefined4 *)(_UNK_01e053bc + 0x1e05064));
    func_0x01384978(*(undefined4 *)(_UNK_01e053c0 + 0x1e05070));
    func_0x01384978(*(undefined4 *)(_UNK_01e053c4 + 0x1e0507c));
    func_0x01384978(*(undefined4 *)(_UNK_01e053c8 + 0x1e05088));
    func_0x01384978(*(undefined4 *)(_UNK_01e053cc + 0x1e05094));
    *pcVar4 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9fc2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9fc2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02182cac(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e5f4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03d66780(iVar1,uVar2,&iStack_24,**(undefined4 **)(_UNK_01e053d0 + 0x1e05138));
  if (iVar1 == 0) {
    return;
  }
  switch(param_3) {
  case 3:
    if (*(int *)(**(int **)(&UNK_01e05194 + _UNK_01e053d4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(&UNK_01e051b0 + _UNK_01e053d8));
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e2d4(param_2,0);
    iVar3 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0244fc34(iVar3,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fd3c(&uStack_34,iVar3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a11b0(iVar1,uVar2,uStack_34,uStack_30,uStack_2c,
                    **(undefined4 **)(&UNK_01e05240 + _UNK_01e053dc));
    break;
  case 5:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(&UNK_01e05274 + _UNK_01e053e0));
    iVar1 = iStack_28;
    if (iVar3 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02123058(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar1 + 0x32) != '\0') break;
    }
  default:
    iVar1 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    func_0x022a18f4(iVar1,0);
    return;
  case 6:
  case 8:
  case 9:
    break;
  case 0xc:
    iVar1 = func_0x03668dfc(**(undefined4 **)(&UNK_01e052e8 + _UNK_01e053e4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ddbed8(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f09134(iVar1,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_34,param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e2d4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01dfb1f0(iVar1,uStack_34,uStack_30,uVar2);
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e5f4(param_2,0);
  FUN_01e023a8(param_1,uVar2);
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemEat RVA 0x1df53e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e053e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01e058e4 + 0x1e05408);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e058e8 + 0x1e0541c));
    func_0x01384978(*(undefined4 *)(_UNK_01e058ec + 0x1e05428));
    func_0x01384978(*(undefined4 *)(_UNK_01e058f0 + 0x1e05434));
    func_0x01384978(*(undefined4 *)(_UNK_01e058f4 + 0x1e05440));
    func_0x01384978(*(undefined4 *)(_UNK_01e058f8 + 0x1e0544c));
    func_0x01384978(*(undefined4 *)(_UNK_01e058fc + 0x1e05458));
    func_0x01384978(*(undefined4 *)(_UNK_01e05900 + 0x1e05464));
    *pcVar5 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  iStack_38 = 0;
  iVar1 = func_0x0229f06c(0x9fc5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9fc5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01bf3284(iVar1,**(undefined4 **)(_UNK_01e05904 + 0x1e05510),0);
  iVar1 = *(int *)(param_1 + 0x4c);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e5f4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01e05908 + 0x1e0555c);
  iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_24,*puVar6);
  iVar1 = iStack_24;
  if (iVar3 != 0) {
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    func_0x022a1aa0(iVar1,0);
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e5f4(param_3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_28,*puVar6);
  iVar1 = iStack_28;
  if (iVar3 != 0) {
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    func_0x022a18f4(iVar1,0);
  }
  iVar1 = iStack_24;
  piVar7 = *(int **)(_UNK_01e0590c + 0x1e055f4);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x0145b1cc(iVar1,0,0);
  iVar1 = iStack_28;
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(iVar1,0,0);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02feb690(0,&iStack_2c,0,**(undefined4 **)(_UNK_01e05910 + 0x1e05698));
    if (iVar1 != 0) goto LAB_01e056a8;
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02feb690(param_2,&iStack_2c,0,**(undefined4 **)(_UNK_01e05920 + 0x1e0566c));
    if (iVar1 != 0) {
LAB_01e056a8:
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0210e2d4(param_3,0);
      iVar3 = iStack_28;
      iVar1 = iStack_2c;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x30);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0210e2d4(iVar3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0212cec8(iVar1,uVar4,0);
      iVar1 = iStack_2c;
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0212befc(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5bb20(iVar1,uVar2,&iStack_30,**(undefined4 **)(_UNK_01e05924 + 0x1e05758));
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0210e2d4(param_2,0);
      uVar4 = func_0x02157e88(uVar4,0);
      piVar7 = *(int **)(_UNK_01e05928 + 0x1e05794);
      iVar1 = iStack_30;
      goto LAB_01e058b0;
    }
  }
  iVar1 = func_0x02feb690(param_2,&iStack_34,0,**(undefined4 **)(_UNK_01e05914 + 0x1e057b0));
  if (iVar1 == 0) {
    return;
  }
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e2d4(param_3,0);
  iVar3 = iStack_28;
  iVar1 = iStack_34;
  if (iStack_28 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x30);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0210e2d4(iVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0212aa34(iVar1,uVar4,0);
  iVar1 = iStack_34;
  if (iStack_34 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0212aadc(iVar1,0,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5bb20(iVar1,uVar2,&iStack_38,**(undefined4 **)(_UNK_01e05918 + 0x1e05874));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0210e2d4(param_2,0);
  uVar4 = func_0x02157e88(uVar4,0);
  piVar7 = *(int **)(_UNK_01e0591c + 0x1e058b0);
  iVar1 = iStack_38;
LAB_01e058b0:
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01995e9c(param_2,uVar4,uVar2,iVar1 - iVar3,0);
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemConsume RVA 0x1df592c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0592c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01e05b80 + 0x1e0594c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e05b84 + 0x1e05960));
    func_0x01384978(*(undefined4 *)(_UNK_01e05b88 + 0x1e0596c));
    func_0x01384978(*(undefined4 *)(_UNK_01e05b8c + 0x1e05978));
    *pcVar5 = '\x01';
  }
  iStack_24 = 0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x9fcc,0);
  if (iVar2 == 0) {
    func_0x01c87000(param_2,param_3,0);
    iVar2 = func_0x0216724c(param_2,0);
    if (iVar2 != 0) {
      iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e05b90 + 0x1e05a0c));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01ddbed8(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01f09134(iVar2,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_30,param_2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01dfb750(iVar2,uStack_30,uStack_2c);
    }
    iVar2 = *(int *)(param_1 + 0x4c);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0210e5f4(param_3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_01e05b94 + 0x1e05ad0);
    iVar2 = func_0x03d66780(iVar2,uVar3,&iStack_24,*puVar6);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x4c);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0210e5f4(param_2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d66780(iVar2,uVar3,&uStack_28,*puVar6);
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01e05b98 + 0x1e05b28));
      func_0x0229f630(iVar4,0);
      iVar2 = iStack_24;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar1 = iStack_24;
      *(int *)(iVar4 + 8) = iVar2;
      *(undefined4 *)(iVar4 + 0xc) = uStack_28;
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      func_0x022a1894(iVar1,iVar4,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9fcc,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemStateChange RVA 0x1df5b9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e05b9c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01e05ecc + 0x1e05bbc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e05ed0 + 0x1e05bd0));
    func_0x01384978(*(undefined4 *)(_UNK_01e05ed4 + 0x1e05bdc));
    func_0x01384978(*(undefined4 *)(_UNK_01e05ed8 + 0x1e05be8));
    *pcVar5 = '\x01';
  }
  iStack_24 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9fd5,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar7 = *(undefined4 **)(_UNK_01e05edc + 0x1e05c90);
    iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_24,*puVar7);
    iVar1 = iStack_24;
    if (iVar3 != 0) {
      if ((param_3 == 0) || (*(int *)(param_3 + 0x10) != 1)) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x0229f6ec(iVar1,0);
        iVar1 = iStack_24;
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        func_0x0229fd78(iVar1,0);
        iVar1 = iStack_24;
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0229f6ec(iVar1,0);
        if (iVar3 != iVar1) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02116e50(param_2,0);
          if (iVar1 < 1) {
            iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e05ee8 + 0x1e05e5c));
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            func_0x0210cd7c(&uStack_30,param_2,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01de3c64(iVar1,uStack_30,uStack_2c,0);
          }
          else {
            piVar6 = *(int **)(_UNK_01e05ee0 + 0x1e05db4);
            iVar1 = *piVar6;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar6;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x4c);
            iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e05ee4 + 0x1e05dd8));
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            func_0x0210cd7c(&uStack_30,param_2,0);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x02116e50(param_2,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01de3d88(iVar1,uStack_30,uStack_2c,uVar2,uVar4,0);
          }
          iVar1 = iStack_24;
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          func_0x022a0294(iVar1,0);
        }
      }
      else {
        if (*(int *)(param_3 + 8) != 0) {
          iVar1 = *(int *)(param_1 + 0x4c);
          uVar2 = func_0x0210e5f4(*(int *)(param_3 + 8),0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03d66780(iVar1,uVar2,&uStack_28,*puVar7);
          if (iVar1 != 0) {
            func_0x020d836c(param_3,uStack_28,0);
          }
        }
        iVar1 = iStack_24;
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        func_0x022a17bc(iVar1,param_3,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9fd5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_CalcInventory RVA 0x1df5eec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e05eec(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_01e05fe4 + 0x1e05f0c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e05fe8 + 0x1e05f20));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9fd2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9fd2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x021a30a4(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e05fec + 0x1e05f88));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02141880(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_02113120 + 0x2112ec4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02113124 + 0x2112ed8),param_2,param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_02113128 + 0x2112ee4));
    func_0x01384978(*(undefined4 *)(_UNK_0211312c + 0x2112ef0));
    func_0x01384978(*(undefined4 *)(_UNK_02113130 + 0x2112efc));
    func_0x01384978(*(undefined4 *)(_UNK_02113134 + 0x2112f08));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x9fd3,0);
  if (iVar2 == 0) {
    *param_2 = 0;
    iVar1 = *(int *)(iVar1 + 8);
    *param_3 = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_02113138 + 0x2112f94));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_40,iVar1,**(undefined4 **)(_UNK_0211313c + 0x2112fc0));
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    iStack_24 = iStack_34;
    puVar6 = *(undefined4 **)(_UNK_02113140 + 0x2112fdc);
    while (iVar2 = func_0x03f9b9f8(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
      iVar2 = *param_3;
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02111eb4(iVar1);
      iVar4 = 0;
      *param_3 = iVar3 + iVar2;
      while( true ) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02111eb4(iVar1);
        if (iVar2 <= iVar4) break;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02113150(iVar1,iVar4);
        iVar4 = iVar4 + 1;
        if (iVar2 != 0) {
          *param_2 = *param_2 + 1;
          *param_3 = *param_3 + -1;
        }
      }
    }
    func_0x03f9b9f4(&uStack_30,**(undefined4 **)(_UNK_02113148 + 0x2113078));
  }
  else {
    iVar2 = func_0x0229f13c(0x9fd3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021a30a4(iVar2,iVar1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemPutIntoInventory RVA 0x1df5ff0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e05ff0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_01e060f8 + 0x1e0600c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e060fc + 0x1e06020));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9fcf,0);
  if (iVar1 == 0) {
    func_0x01c870a8(param_2,0);
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_14,**(undefined4 **)(_UNK_01e06100 + 0x1e060c4));
    iVar1 = iStack_14;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x022a18f4(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9fcf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemTakeOutFromInventory RVA 0x1df6104 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e06104(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01e0629c + 0x1e06120);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e062a0 + 0x1e06134));
    func_0x01384978(*(undefined4 *)(_UNK_01e062a4 + 0x1e06140));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x9fd1,0);
  if (iVar1 == 0) {
    FUN_01e05eec(param_1,&uStack_1c,&uStack_20);
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(uint *)(iVar1 + 0xc);
    piVar2 = *(int **)(_UNK_01e062a8 + 0x1e061dc);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar6 = *piVar2;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar4 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      *(int *)(iVar4 + uVar5 * 4 + 0x10) = param_2;
    }
    else {
      func_0x0328f170(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e062ac + 0x1e0622c));
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_28,param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_28,param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01de3508(iVar1,uStack_28,uStack_24,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9fd1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemSell RVA 0x1df62b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e062b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_01e06514 + 0x1e062d0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e06518 + 0x1e062e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e0651c + 0x1e062f0));
    func_0x01384978(*(undefined4 *)(_UNK_01e06520 + 0x1e062fc));
    *pcVar5 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9fe6,0);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(param_3 + 0x10)) {
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e06524 + 0x1e06380));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01de4088(iVar1,param_2,param_3,0);
    }
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_28,**(undefined4 **)(_UNK_01e06528 + 0x1e063e8));
    iVar1 = iStack_28;
    if (iVar3 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      func_0x022a18f4(iVar1,0);
      if (0 < *(int *)(param_3 + 0x10)) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = iStack_28;
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x0244fc34(iVar3,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&uStack_34,iVar3,0);
        uVar4 = *(undefined4 *)(param_3 + 8);
        uVar2 = *(undefined4 *)(param_3 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01ca1ec8(iVar1,uStack_34,uStack_30,uStack_2c,uVar4,uVar2,0,0);
      }
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e2d4(param_2,0);
    uVar2 = func_0x02157e88(uVar2,0);
    if (*(int *)(**(int **)(_UNK_01e0652c + 0x1e064ec) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01995508(param_2,uVar2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9fe6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnChestWaitStart RVA 0x1df6530 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e06530(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_01e0662c + 0x1e0654c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e06630 + 0x1e06560));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9fea,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_14,**(undefined4 **)(_UNK_01e06634 + 0x1e065f8));
    iVar1 = iStack_14;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x022a112c(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9fea,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnChestWaitFinish RVA 0x1df6638 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e06638(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_01e06734 + 0x1e06654);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e06738 + 0x1e06668));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9fed,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_14,**(undefined4 **)(_UNK_01e0673c + 0x1e06700));
    iVar1 = iStack_14;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x022a112c(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9fed,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnItemComponentChange RVA 0x1df6740 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e06740(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_01e0683c + 0x1e0675c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e06840 + 0x1e06770));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9fe8,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_14,**(undefined4 **)(_UNK_01e06844 + 0x1e06808));
    iVar1 = iStack_14;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x0229fd78(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9fe8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$_OnUseTimeScaleSource RVA 0x1df6848 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e06848(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_01e06944 + 0x1e06864);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e06948 + 0x1e06878));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9fe9,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_14,**(undefined4 **)(_UNK_01e0694c + 0x1e06910));
    iVar1 = iStack_14;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x0229fd78(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9fe9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardItemHolder$$.ctor RVA 0x1df6950 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e06950(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01e06a64 + 0x1e06964);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e06a68 + 0x1e06978));
    func_0x01384978(*(undefined4 *)(_UNK_01e06a6c + 0x1e06984));
    func_0x01384978(*(undefined4 *)(_UNK_01e06a70 + 0x1e06990));
    func_0x01384978(*(undefined4 *)(_UNK_01e06a74 + 0x1e0699c));
    func_0x01384978(*(undefined4 *)(_UNK_01e06a78 + 0x1e069a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e06a7c + 0x1e069b4));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e06a80 + 0x1e069c8));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01e06a84 + 0x1e069dc));
  *(undefined4 *)(param_1 + 0x48) = 0x3d4ccccd;
  puVar2 = *(undefined4 **)(_UNK_01e06a88 + 0x1e06a00);
  *(undefined4 *)(param_1 + 0x40) = 3;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_01e06a8c + 0x1e06a1c));
  puVar2 = *(undefined4 **)(_UNK_01e06a90 + 0x1e06a30);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01e06a94 + 0x1e06a48));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


