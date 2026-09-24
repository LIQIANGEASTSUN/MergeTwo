/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ScoreBoardActivity$$get_LeftTime RVA 0x1b1ea38 =====

int FUN_01b2ea38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x89d9,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x129,0);
    if (iVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x30);
      iVar1 = func_0x01c34eb8(0);
      return iVar3 - iVar1;
    }
    iVar1 = func_0x0229f13c(0x129,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x89d9,0);
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
  iVar1 = func_0x0245499c(&uStack_30,0,0);
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$get_GroupId RVA 0x1b1ea94 =====

undefined4 FUN_01b2ea94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x89da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89da,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x6c);
}



// ===== FAT.ScoreBoardActivity$$get_BoardId RVA 0x1b1eae8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b2eae8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x89db,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01b2ec28 + 0x1b2eb58);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b2ec2c + 0x1b2eb6c));
      func_0x01384978(*(undefined4 *)(_UNK_01b2ec30 + 0x1b2eb78));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x605,0);
    if (iVar1 == 0) {
      iStack_14 = *(int *)(param_1 + 0x8c);
      if (*(int *)(param_1 + 0x8c) < 1) {
        iStack_14 = 0;
        if ((*(int *)(param_1 + 0xac) != 0) &&
           (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0xac),0), iVar1 != 0)) {
          iStack_14 = 0;
          uStack_18 = 0;
          func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 8),
                          **(undefined4 **)(_UNK_01b2ec34 + 0x1b2ec00));
        }
      }
      return iStack_14;
    }
    iVar1 = func_0x0229f13c(0x605,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x89db,0);
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
  iVar1 = func_0x0245498c(&uStack_30,0,0);
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$GetActiveBoardId RVA 0x1b1eb40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b2eb40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01b2ec28 + 0x1b2eb58);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b2ec2c + 0x1b2eb6c));
    func_0x01384978(*(undefined4 *)(_UNK_01b2ec30 + 0x1b2eb78));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x605,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x605,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iStack_14 = *(int *)(param_1 + 0x8c);
  if (*(int *)(param_1 + 0x8c) < 1) {
    iStack_14 = 0;
    if ((*(int *)(param_1 + 0xac) != 0) &&
       (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0xac),0), iVar1 != 0)) {
      iStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 8),
                      **(undefined4 **)(_UNK_01b2ec34 + 0x1b2ec00));
    }
  }
  return iStack_14;
}



// ===== FAT.ScoreBoardActivity$$get_BoardDepth RVA 0x1b1ec38 =====

undefined4 FUN_01b2ec38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x89dc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89dc,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x84);
}



// ===== FAT.ScoreBoardActivity$$get_UnlockCloudLevel RVA 0x1b1ec8c =====

undefined4 FUN_01b2ec8c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x89dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89dd,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x94);
}



// ===== FAT.ScoreBoardActivity$$get_HelpPopped RVA 0x1b1ece0 =====

uint FUN_01b2ece0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x89de,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89de,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)*(byte *)(param_1 + 0x88);
}



// ===== FAT.ScoreBoardActivity$$get_World RVA 0x1b1ed34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b2ed34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x89df,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89df,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a0d4 + 0x2179ff4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a0d8 + 0x217a008),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a0dc + 0x217a0c4));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xac);
}



// ===== FAT.ScoreBoardActivity$$get_TokenId RVA 0x1b1ed88 =====

undefined4 FUN_01b2ed88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x89e0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89e0,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x9c);
}



// ===== FAT.ScoreBoardActivity$$get_MergeScoreTokenId RVA 0x1b1eddc =====

undefined4 FUN_01b2eddc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x89e1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89e1,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0xa0);
}



// ===== FAT.ScoreBoardActivity$$get_TokenCount RVA 0x1b1ee30 =====

undefined4 FUN_01b2ee30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x89e2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89e2,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x80);
}



// ===== FAT.ScoreBoardActivity$$IsMergeScoreToken RVA 0x1b1ee84 =====

uint FUN_01b2ee84(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x350,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x48) != 0) {
      uVar4 = (uint)(*(int *)(*(int *)(param_1 + 0x48) + 0x3c) == param_2);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x350,0);
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
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$get_CanUseToken RVA 0x1b1eefc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b2eefc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
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
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01b2f038 + 0x1b2ef14);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b2f03c + 0x1b2ef28));
    func_0x01384978(*(undefined4 *)(_UNK_01b2f040 + 0x1b2ef34));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x89e3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89e3,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if ((((iVar1 != 0) && ((char)param_1[0x26] == '\0')) && (0 < param_1[0x27])) &&
     ((iVar5 = param_1[0x20], iVar1 = func_0x01b2f048(param_1,1), iVar1 <= iVar5 &&
      (param_1[0x2b] != 0)))) {
    uVar4 = 0;
    iVar1 = func_0x02139cf4(param_1[0x2b],0);
    if (iVar1 != 0) {
      uVar6 = func_0x020ece38(iVar1,0);
      uStack_14 = (uint)(ushort)uStack_14;
      func_0x035034d0((int)&uStack_14 + 2,uVar6,**(undefined4 **)(_UNK_01b2f044 + 0x1b2f01c));
      uVar4 = (uint)(0xff < uStack_14._2_2_);
    }
  }
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$GetTokenUseCost RVA 0x1b1f048 =====

int FUN_01b2f048(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x89e4,0);
  if (iVar1 == 0) {
    iVar3 = 0;
    iVar1 = func_0x0229f06c(0x89e5,0);
    if (iVar1 == 0) {
      if (0 < param_2) {
        iVar3 = func_0x01b3b954(param_1);
        iVar3 = iVar3 * param_2;
      }
      return iVar3;
    }
    iVar1 = func_0x0229f13c(0x89e5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x89e4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  iVar1 = func_0x0245498c(&uStack_38,0,0);
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$TryUseToken RVA 0x1b1f0ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b2f0ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
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
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01b2f1bc + 0x1b2f0c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b2f1c0 + 0x1b2f0dc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x89e7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89e7,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
    func_0x0245496c(&uStack_38,0,0);
    return;
  }
  piVar6 = *(int **)(_UNK_01b2f1c4 + 0x1b2f13c);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  pcVar5 = (char *)(_UNK_01b2f1c8 + 0x1b2f160);
  uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x3a0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b2f1cc + 0x1b2f178));
    *pcVar5 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_01b2f1d0 + 0x1b2f190) + 0x5c);
  uStack_28 = puVar2[1];
  uStack_24 = puVar2[2];
  func_0x01b2f1d4(param_1,param_2,uVar7,*puVar2);
  return;
}



// ===== FAT.ScoreBoardActivity$$_TryUseToken RVA 0x1b1f1d4 =====

/* WARNING: Removing unreachable block (ram,0x01b2f914) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01b2f1d4(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_01b2faa8 + 0x1b2f1f8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b2faac + 0x1b2f20c));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fab0 + 0x1b2f218));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fab4 + 0x1b2f224));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fab8 + 0x1b2f230));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fabc + 0x1b2f23c));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fac0 + 0x1b2f248));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fac4 + 0x1b2f254));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fac8 + 0x1b2f260));
    func_0x01384978(*(undefined4 *)(_UNK_01b2facc + 0x1b2f26c));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fad0 + 0x1b2f278));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fad4 + 0x1b2f284));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fad8 + 0x1b2f290));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fadc + 0x1b2f29c));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fae0 + 0x1b2f2a8));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fae4 + 0x1b2f2b4));
    func_0x01384978(*(undefined4 *)(_UNK_01b2fae8 + 0x1b2f2c0));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x89e8,0);
  if (iVar1 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = param_1[0x2b];
    }
    if (iVar2 != 0 && iVar1 != 0) {
      uVar7 = 0;
      iVar1 = func_0x02139cf4(iVar1,0);
      if (((iVar1 != 0) && (param_2 - 1 < 100000)) && ((char)param_1[0x26] == '\0')) {
        iVar1 = func_0x020ece38(iVar1,0);
        if (iVar1 == 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar1 + 0x10);
          iVar5 = **(int **)(_UNK_01b2faec + 0x1b2f4e4);
          iVar1 = *(int *)(iVar5 + 0x1c);
          if (iVar1 == 0) {
            func_0x0140024c(iVar5);
            iVar1 = *(int *)(iVar5 + 0x1c);
          }
          iVar1 = *(int *)(iVar1 + 8);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x014001f0();
          }
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x014001f0();
          }
          uVar7 = **(undefined4 **)(iVar1 + 0x5c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01ca1c50(iVar2,0x14,uVar7,0);
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar7 = 0;
          func_0x01bf3284(iVar1,**(undefined4 **)(_UNK_01b2faf0 + 0x1b2f5a0),0);
        }
        else {
          uVar3 = func_0x01b3b954(param_1);
          uVar8 = (uint)((ulonglong)param_2 * (ulonglong)uVar3);
          iVar2 = ((int)uVar3 >> 0x1f) * param_2 +
                  (int)((ulonglong)param_2 * (ulonglong)uVar3 >> 0x20);
          uVar3 = param_1[0x20];
          iVar1 = (int)uVar3 >> 0x1f;
          if ((int)(iVar1 - (iVar2 + (uint)(uVar3 < uVar8))) < 0 ==
              (SBORROW4(iVar1,iVar2) != SBORROW4(iVar1 - iVar2,(uint)(uVar3 < uVar8)))) {
            iVar1 = func_0x01b3ba38(param_1,uVar3,uVar3 - uVar8);
            uVar7 = 0;
            iVar2 = func_0x01b3024c(param_1,iVar1,0);
            if (iVar2 != 0) {
              if (param_1[0x45] != iVar1) {
                func_0x01b3baf4(param_1,*(undefined4 *)(iVar2 + 0x2c));
                param_1[0x45] = iVar1;
              }
              if ((param_1[0x44] != 0) && (0 < *(int *)(param_1[0x44] + 0xc))) {
                iVar2 = param_1[0x20];
                param_1[0x20] = iVar2 - uVar8;
                iVar5 = func_0x01b3a530(param_1);
                iVar1 = 0;
                if (iVar5 != 0) {
                  iVar1 = param_1[0x43];
                }
                if (iVar5 != 0 && iVar1 != 0) {
                  func_0x02af96e4(iVar1,param_1[0x20],0);
                }
                func_0x019a4b9c(param_1[0x27],-uVar8,param_1[0x20],param_3,0);
                if (*(int *)(**(int **)(_UNK_01b2fafc + 0x1b2f65c) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b2fb00 + 0x1b2f678));
                iVar5 = param_1[0x27];
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x034a0af8(iVar1,iVar5,uVar8,**(undefined4 **)(_UNK_01b2fb04 + 0x1b2f6a8));
                func_0x01b3b088(param_1,iVar2,param_1[0x20],-uVar8,param_3);
                func_0x01b3b200(param_1,param_2,iVar2,param_1[0x20],param_4,param_5,param_6);
                if (*(int *)(**(int **)(_UNK_01b2fb08 + 0x1b2f6f0) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                iVar1 = func_0x028c8d78(0);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x0302a45c(&uStack_48,iVar1,&iStack_34,
                                **(undefined4 **)(_UNK_01b2fb0c + 0x1b2f724));
                uVar3 = 0;
                iStack_2c = iStack_44;
                uStack_30 = uStack_48;
                do {
                  iVar2 = param_1[0x44];
                  iVar1 = **(int **)(_UNK_01b2fb10 + 0x1b2f754);
                  if (*(int *)(iVar1 + 0x74) == 0) {
                    func_0x01384ab4(iVar1);
                    iVar1 = **(int **)(_UNK_01b2fb14 + 0x1b2f77c);
                  }
                  iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
                  if (iVar5 == 0) {
                    if (*(int *)(iVar1 + 0x74) == 0) {
                      func_0x01384ab4(iVar1);
                      iVar1 = **(int **)(_UNK_01b2fb18 + 0x1b2f7ac);
                    }
                    uVar7 = **(undefined4 **)(iVar1 + 0x5c);
                    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b2fb1c + 0x1b2f7c0));
                    func_0x03a06bcc(iVar5,uVar7,**(undefined4 **)(_UNK_01b2fb20 + 0x1b2f7d4),0);
                    *(int *)(*(int *)(**(int **)(_UNK_01b2fb24 + 0x1b2f7f0) + 0x5c) + 4) = iVar5;
                  }
                  func_0x02fbdda8(&uStack_48,iVar2,iVar5,0,
                                  **(undefined4 **)(_UNK_01b2fb28 + 0x1b2f804));
                  iVar1 = iStack_44;
                  func_0x01b3c08c(param_1,uStack_48,iStack_44,&uStack_38,iStack_34);
                  if (0 < iVar1) {
                    do {
                      func_0x01b3c178(param_1,uStack_38,param_3,param_4,param_5,param_6);
                      iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                  }
                  iVar1 = 0;
                  while( true ) {
                    iVar2 = iStack_34;
                    if (iStack_34 == 0) {
                      func_0x01384bf0();
                    }
                    iVar5 = iStack_34;
                    if (*(int *)(iVar2 + 0xc) <= iVar1) break;
                    if (iStack_34 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x024501ac(&uStack_48,iVar5,iVar1,
                                    **(undefined4 **)(_UNK_01b2fb2c + 0x1b2f8a0));
                    uVar7 = uStack_48;
                    iVar2 = iStack_44;
                    if (0 < iStack_44) {
                      do {
                        func_0x01b3c178(param_1,uVar7,param_3,param_4,param_5,param_6);
                        iVar2 = iVar2 + -1;
                      } while (iVar2 != 0);
                    }
                    iVar1 = iVar1 + 1;
                  }
                  uVar3 = uVar3 + 1;
                } while (uVar3 != param_2);
                func_0x028c98a0(&uStack_30,0);
                func_0x01b3b448(param_1);
                uVar7 = 1;
              }
            }
          }
          else {
            iVar1 = param_1[0x27];
            if (*(int *)(**(int **)(_UNK_01b2faf4 + 0x1b2f3e8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = func_0x02085f3c(iVar1,0);
            iVar2 = func_0x01c24918(0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x10);
            piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01b2faf8 + 0x1b2f434),1);
            if (piVar4 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar1 != 0) &&
               (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
              uVar7 = func_0x01384c10();
              func_0x01384aa0(uVar7,0);
            }
            if (piVar4[3] == 0) {
              func_0x01384bf4();
            }
            piVar4[4] = iVar1;
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar7 = 0;
            func_0x01ca1c50(iVar2,0x5b,piVar4,0);
            func_0x01b3b9c0(param_1,param_2);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x89e8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x02256308(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return uVar7;
}



// ===== FAT.ScoreBoardActivity$$TryUseToken RVA 0x1b1fb38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b2fb38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01b2fc10 + 0x1b2fb58);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b2fc14 + 0x1b2fb70));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x89fa,0);
  if (iVar1 == 0) {
    piVar3 = *(int **)(_UNK_01b2fc18 + 0x1b2fbd8);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    FUN_01b2f1d4(param_1,param_5,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x3a0),param_2,param_3,
                 param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x89fa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0225ee80(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$get_MilestoneIndex RVA 0x1b1fc1c =====

undefined4 FUN_01b2fc1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x89fb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89fb,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x70);
}



// ===== FAT.ScoreBoardActivity$$get_CycleMilestoneIndex RVA 0x1b1fc70 =====

undefined4 FUN_01b2fc70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x89fc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89fc,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== FAT.ScoreBoardActivity$$get_TotalMilestoneCount RVA 0x1b1fcc4 =====

undefined4 FUN_01b2fcc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x89fd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89fd,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x78);
}



// ===== FAT.ScoreBoardActivity$$get_MilestoneItemIdList RVA 0x1b1fd18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b2fd18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x89fe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89fe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02203a48 + 0x2203968);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02203a4c + 0x220397c),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02203a50 + 0x2203a38));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.ScoreBoardActivity$$get_UnlockMilestoneLevel RVA 0x1b1fd6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b2fd6c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
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
  
  iVar1 = func_0x0229f06c(0x89ff,0);
  if (iVar1 == 0) {
    pcVar5 = (char *)(_UNK_01b2fee4 + 0x1b2fdd8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b2fee8 + 0x1b2fdec));
      func_0x01384978(*(undefined4 *)(_UNK_01b2feec + 0x1b2fdf8));
      *pcVar5 = '\x01';
    }
    iVar1 = 0;
    iVar6 = func_0x0229f06c(0x8a00,0);
    if (iVar6 == 0) {
      iVar6 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      if (iVar6 != 0) {
        puVar9 = *(undefined4 **)(_UNK_01b2fef0 + 0x1b2fe78);
        iVar1 = 0;
        iVar6 = 0;
        while( true ) {
          iVar8 = param_1[0x16];
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar8 + 0xc) <= iVar6) break;
          iVar8 = param_1[0x16];
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uVar7 = func_0x03259410(iVar8,iVar6,*puVar9);
          iVar2 = func_0x01b37ca4(param_1,uVar7);
          iVar3 = iVar6 + 1;
          iVar8 = iVar3;
          if (iVar6 < iVar1) {
            iVar8 = iVar1;
          }
          iVar6 = iVar3;
          if (iVar2 != 0) {
            iVar1 = iVar8;
          }
        }
      }
      return iVar1;
    }
    iVar1 = func_0x0229f13c(0x8a00,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x89ff,0);
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
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
  iVar1 = func_0x0245498c(&uStack_30,0,0);
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$GetCurMilestoneUnlockItemMaxLevel RVA 0x1b1fdc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b2fdc4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
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
  
  pcVar5 = (char *)(_UNK_01b2fee4 + 0x1b2fdd8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b2fee8 + 0x1b2fdec));
    func_0x01384978(*(undefined4 *)(_UNK_01b2feec + 0x1b2fdf8));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0x8a00,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      puVar9 = *(undefined4 **)(_UNK_01b2fef0 + 0x1b2fe78);
      iVar6 = 0;
      iVar1 = 0;
      while( true ) {
        iVar8 = param_1[0x16];
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar8 + 0xc) <= iVar1) break;
        iVar8 = param_1[0x16];
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar7 = func_0x03259410(iVar8,iVar1,*puVar9);
        iVar2 = func_0x01b37ca4(param_1,uVar7);
        iVar3 = iVar1 + 1;
        iVar8 = iVar3;
        if (iVar1 < iVar6) {
          iVar8 = iVar6;
        }
        iVar1 = iVar3;
        if (iVar2 != 0) {
          iVar6 = iVar8;
        }
      }
    }
    return iVar6;
  }
  iVar6 = func_0x0229f13c(0x8a00,0);
  if (iVar6 == 0) {
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
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar1 = *(int *)(iVar6 + 8);
  uVar7 = *(undefined4 *)(iVar6 + 0xc);
  iVar6 = *(int *)(iVar6 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar6 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar1,uVar7,&uStack_30,uVar4,0,0);
  iVar6 = func_0x0245498c(&uStack_30,0,0);
  return iVar6;
}



// ===== FAT.ScoreBoardActivity$$get_CurrentScore RVA 0x1b1fef4 =====

undefined4 FUN_01b2fef4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a02,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a02,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x7c);
}



// ===== FAT.ScoreBoardActivity$$get_CurrentScoreNeed RVA 0x1b1ff48 =====

undefined4 FUN_01b2ff48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a03,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a03,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0xa4);
}



// ===== FAT.ScoreBoardActivity$$get_IsCycleMilestone RVA 0x1b1ff9c =====

undefined4 FUN_01b2ff9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x5f7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f7,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = func_0x01b30020(param_1);
  if (((iVar1 != 0) && (0 < *(int *)(param_1 + 0x78))) &&
     (uVar3 = 0, *(int *)(param_1 + 0x78) <= *(int *)(param_1 + 0x70))) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.ScoreBoardActivity$$HasCycleMilestone RVA 0x1b20020 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b30020(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01b300cc + 0x1b30034);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b300d0 + 0x1b30048));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5f8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f8,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$get_IsMilestoneFinishPending RVA 0x1b200d4 =====

uint FUN_01b300d4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8a04,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a04,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)*(byte *)(param_1 + 0x98);
}



// ===== FAT.ScoreBoardActivity$$get_CurrentMilestoneConf RVA 0x1b20128 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b30128(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined4 uVar6;
  int unaff_r4;
  undefined4 unaff_r5;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0x8a05,0);
  if (iVar2 == 0) {
    iVar2 = func_0x0229f06c(0x5f3,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x70);
      uVar9 = *(undefined4 *)(param_1 + 0x74);
      pcVar8 = (char *)(_UNK_01b303e8 + 0x1b3026c);
      iStack_18 = unaff_r4;
      uStack_14 = unaff_r5;
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01b303ec + 0x1b30280));
        func_0x01384978(*(undefined4 *)(_UNK_01b303f0 + 0x1b3028c));
        *pcVar8 = '\x01';
      }
      iVar7 = func_0x0229f06c(0x5f4,0);
      if (iVar7 != 0) {
        iVar7 = func_0x0229f13c(0x5f4,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        uVar9 = func_0x0218ffcc(iVar7,param_1,iVar2,uVar9);
        return uVar9;
      }
      iVar7 = *(int *)(param_1 + 0x48);
      if (iVar7 != 0) {
        if (iVar2 < *(int *)(param_1 + 0x78)) {
          if (-1 < iVar2) {
            iVar7 = *(int *)(iVar7 + 0x4c);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            if (iVar2 < *(int *)(iVar7 + 0xc)) {
              iVar7 = *(int *)(param_1 + 0x48);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              iVar7 = *(int *)(iVar7 + 0x4c);
LAB_01b303a8:
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              uVar9 = func_0x0364c9b8(iVar7,iVar2,**(undefined4 **)(_UNK_01b303f4 + 0x1b303c4));
              pcVar8 = (char *)(_UNK_01b4164c + 0x1b415ac);
              if (*pcVar8 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01b41650 + 0x1b415c0),0);
                func_0x01384978(*(undefined4 *)(_UNK_01b41654 + 0x1b415cc));
                *pcVar8 = '\x01';
              }
              iVar2 = func_0x0229f06c(0x5f5,0);
              if (iVar2 != 0) {
                iVar2 = func_0x0229f13c(0x5f5,0);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                pcVar8 = (char *)(_UNK_0218ffc0 + 0x218fee0);
                if (*pcVar8 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_0218ffc4 + 0x218fef4),uVar9,0);
                  *pcVar8 = '\x01';
                }
                uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_30 = 0;
                uStack_20 = 0;
                func_0x0245494c(&uStack_48,0);
                uStack_30 = uStack_48;
                uStack_2c = uStack_44;
                uStack_28 = uStack_40;
                iStack_24 = uStack_3c;
                uStack_20 = uStack_38;
                if (*(int *)(iVar2 + 0x10) != 0) {
                  func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
                }
                func_0x01485238(&uStack_30,uVar9,0);
                iVar7 = *(int *)(iVar2 + 8);
                uVar9 = *(undefined4 *)(iVar2 + 0xc);
                iVar2 = *(int *)(iVar2 + 0x10);
                if (iVar7 == 0) {
                  func_0x01384bf0();
                }
                uVar6 = 2;
                if (iVar2 == 0) {
                  uVar6 = 1;
                }
                func_0x0245495c(iVar7,uVar9,&uStack_30,uVar6,0,0);
                uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218ffc8 + 0x218ffb0));
                return uVar9;
              }
              if (*(int *)(**(int **)(_UNK_01b41658 + 0x1b41624) + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar7 = **(int **)(_UNK_01b4165c + 0x1b41640);
              iVar2 = *(int *)(iVar7 + 0x10);
              if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = func_0x02457d84();
              }
              iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
              if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = func_0x02457d84();
              }
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x02457d48();
              }
              iVar2 = *(int *)(iVar7 + 0x10);
              if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = func_0x02457d84();
              }
              piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
              if (piVar3 == (int *)0x0) {
                func_0x02457d50();
              }
              iVar2 = *(int *)(iVar7 + 0x10);
              if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = func_0x02457d84();
              }
              iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
              uStack_20 = uStack_14;
              iStack_24 = iStack_18;
              uStack_28 = 0;
              uStack_2c = 0;
              (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
              iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
              if (iVar2 != 0) {
                iStack_18 = piVar3[0x11];
              }
              bVar1 = true;
              iVar5 = 0;
              if (iVar2 != 0 && iStack_18 != 0) {
                iVar4 = func_0x03d66780(iStack_18,uVar9,&uStack_28,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
                uVar6 = uStack_28;
                bVar1 = false;
                iVar5 = iStack_18;
                if (iVar4 != 0) {
                  iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
                  if (iVar2 == 0) {
                    return uStack_28;
                  }
                  (**(code **)(*piVar3 + 0x138))
                            (piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
                  return uStack_28;
                }
              }
              if ((piVar3[0x12] == 0) ||
                 (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
                 iVar4 == 0)) {
                uStack_2c = 0;
                iVar4 = (**(code **)(*piVar3 + 0x1a0))
                                  (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
                uVar6 = uStack_2c;
                if (iVar4 != 0) {
                  if (iVar2 != 0) {
                    if (bVar1) {
                      if ((*(ushort *)
                            (*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                          == 0) {
                        func_0x02457d84();
                      }
                      iVar5 = func_0x02457d58();
                      func_0x03d63f04(iVar5,4,*(undefined4 *)
                                               (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74));
                      piVar3[0x11] = iVar5;
                    }
                    if (iVar5 == 0) {
                      func_0x02457d50();
                    }
                    func_0x03d6491c(iVar5,uVar9,uVar6,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78))
                    ;
                  }
                  iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
                  if (iVar2 == 0) {
                    return uVar6;
                  }
                  (**(code **)(*piVar3 + 0x138))
                            (piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
                  return uVar6;
                }
                iVar2 = piVar3[0x12];
                if (iVar2 == 0) {
                  if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd)
                      & 1) == 0) {
                    func_0x02457d84();
                  }
                  iVar2 = func_0x02457d58();
                  func_0x0421ec60(iVar2,*(undefined4 *)
                                         (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
                  piVar3[0x12] = iVar2;
                  if (iVar2 == 0) {
                    func_0x02457d50();
                    iVar2 = 0;
                  }
                }
                func_0x04220004(iVar2,uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
              }
              func_0x0369fb50(piVar3,uVar9,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
              return 0;
            }
          }
        }
        else {
          iVar2 = *(int *)(iVar7 + 0x48);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if ((0 < *(int *)(iVar2 + 0xc)) && (func_0x01458344(uVar9), -1 < extraout_r1)) {
            iVar2 = *(int *)(param_1 + 0x48);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x48);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            if (extraout_r1 < *(int *)(iVar2 + 0xc)) {
              iVar2 = *(int *)(param_1 + 0x48);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar7 = *(int *)(iVar2 + 0x48);
              iVar2 = extraout_r1;
              goto LAB_01b303a8;
            }
          }
        }
      }
      return 0;
    }
    iVar2 = func_0x0229f13c(0x5f3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8a05,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar8 = (char *)(_UNK_021901fc + 0x219011c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02190200 + 0x2190130),param_1,0);
    *pcVar8 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  iStack_24 = uStack_3c;
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
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_30,uVar6,0,0);
  uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02190204 + 0x21901ec));
  return uVar9;
}



// ===== FAT.ScoreBoardActivity$$GetCurrentMilestoneConf RVA 0x1b20180 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b30180(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined4 uVar6;
  int unaff_r4;
  undefined4 unaff_r5;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0x5f3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5f3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_021901fc + 0x219011c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02190200 + 0x2190130),param_1,0);
      *pcVar8 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = uStack_3c;
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
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar6,0,0);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02190204 + 0x21901ec));
    return uVar9;
  }
  iVar2 = *(int *)(param_1 + 0x70);
  uVar9 = *(undefined4 *)(param_1 + 0x74);
  pcVar8 = (char *)(_UNK_01b303e8 + 0x1b3026c);
  iStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b303ec + 0x1b30280));
    func_0x01384978(*(undefined4 *)(_UNK_01b303f0 + 0x1b3028c));
    *pcVar8 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x5f4,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x5f4,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar9 = func_0x0218ffcc(iVar7,param_1,iVar2,uVar9);
    return uVar9;
  }
  iVar7 = *(int *)(param_1 + 0x48);
  if (iVar7 != 0) {
    if (iVar2 < *(int *)(param_1 + 0x78)) {
      if (-1 < iVar2) {
        iVar7 = *(int *)(iVar7 + 0x4c);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (iVar2 < *(int *)(iVar7 + 0xc)) {
          iVar7 = *(int *)(param_1 + 0x48);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar7 + 0x4c);
LAB_01b303a8:
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          uVar9 = func_0x0364c9b8(iVar7,iVar2,**(undefined4 **)(_UNK_01b303f4 + 0x1b303c4));
          pcVar8 = (char *)(_UNK_01b4164c + 0x1b415ac);
          if (*pcVar8 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01b41650 + 0x1b415c0),0);
            func_0x01384978(*(undefined4 *)(_UNK_01b41654 + 0x1b415cc));
            *pcVar8 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x5f5,0);
          if (iVar2 != 0) {
            iVar2 = func_0x0229f13c(0x5f5,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            pcVar8 = (char *)(_UNK_0218ffc0 + 0x218fee0);
            if (*pcVar8 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_0218ffc4 + 0x218fef4),uVar9,0);
              *pcVar8 = '\x01';
            }
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_30 = 0;
            uStack_20 = 0;
            func_0x0245494c(&uStack_48,0);
            uStack_30 = uStack_48;
            uStack_2c = uStack_44;
            uStack_28 = uStack_40;
            iStack_24 = uStack_3c;
            uStack_20 = uStack_38;
            if (*(int *)(iVar2 + 0x10) != 0) {
              func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
            }
            func_0x01485238(&uStack_30,uVar9,0);
            iVar7 = *(int *)(iVar2 + 8);
            uVar9 = *(undefined4 *)(iVar2 + 0xc);
            iVar2 = *(int *)(iVar2 + 0x10);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            uVar6 = 2;
            if (iVar2 == 0) {
              uVar6 = 1;
            }
            func_0x0245495c(iVar7,uVar9,&uStack_30,uVar6,0,0);
            uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218ffc8 + 0x218ffb0));
            return uVar9;
          }
          if (*(int *)(**(int **)(_UNK_01b41658 + 0x1b41624) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar7 = **(int **)(_UNK_01b4165c + 0x1b41640);
          iVar2 = *(int *)(iVar7 + 0x10);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x02457d48();
          }
          iVar2 = *(int *)(iVar7 + 0x10);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
          if (piVar3 == (int *)0x0) {
            func_0x02457d50();
          }
          iVar2 = *(int *)(iVar7 + 0x10);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
          uStack_20 = uStack_14;
          iStack_24 = iStack_18;
          uStack_28 = 0;
          uStack_2c = 0;
          (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
          iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
          if (iVar2 != 0) {
            iStack_18 = piVar3[0x11];
          }
          bVar1 = true;
          iVar5 = 0;
          if (iVar2 != 0 && iStack_18 != 0) {
            iVar4 = func_0x03d66780(iStack_18,uVar9,&uStack_28,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68))
            ;
            uVar6 = uStack_28;
            bVar1 = false;
            iVar5 = iStack_18;
            if (iVar4 != 0) {
              iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
              if (iVar2 == 0) {
                return uStack_28;
              }
              (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
              return uStack_28;
            }
          }
          if ((piVar3[0x12] == 0) ||
             (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
             iVar4 == 0)) {
            uStack_2c = 0;
            iVar4 = (**(code **)(*piVar3 + 0x1a0))
                              (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
            uVar6 = uStack_2c;
            if (iVar4 != 0) {
              if (iVar2 != 0) {
                if (bVar1) {
                  if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd)
                      & 1) == 0) {
                    func_0x02457d84();
                  }
                  iVar5 = func_0x02457d58();
                  func_0x03d63f04(iVar5,4,*(undefined4 *)
                                           (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74));
                  piVar3[0x11] = iVar5;
                }
                if (iVar5 == 0) {
                  func_0x02457d50();
                }
                func_0x03d6491c(iVar5,uVar9,uVar6,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
              }
              iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
              if (iVar2 == 0) {
                return uVar6;
              }
              (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
              return uVar6;
            }
            iVar2 = piVar3[0x12];
            if (iVar2 == 0) {
              if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1)
                  == 0) {
                func_0x02457d84();
              }
              iVar2 = func_0x02457d58();
              func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144)
                             );
              piVar3[0x12] = iVar2;
              if (iVar2 == 0) {
                func_0x02457d50();
                iVar2 = 0;
              }
            }
            func_0x04220004(iVar2,uVar9,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
          }
          func_0x0369fb50(piVar3,uVar9,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
          return 0;
        }
      }
    }
    else {
      iVar2 = *(int *)(iVar7 + 0x48);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if ((0 < *(int *)(iVar2 + 0xc)) && (func_0x01458344(uVar9), -1 < extraout_r1)) {
        iVar2 = *(int *)(param_1 + 0x48);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x48);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (extraout_r1 < *(int *)(iVar2 + 0xc)) {
          iVar2 = *(int *)(param_1 + 0x48);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar2 + 0x48);
          iVar2 = extraout_r1;
          goto LAB_01b303a8;
        }
      }
    }
  }
  return 0;
}



// ===== FAT.ScoreBoardActivity$$GetMilestoneConf RVA 0x1b201e4 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b301e4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  int iStack_24;
  undefined4 uStack_20;
  int iStack_18;
  
  iVar2 = func_0x0229f06c(0x8a06,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8a06,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_0225f0e4 + 0x225eff0);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225f0e8 + 0x225f004),param_1,param_2,0);
      *pcVar9 = '\x01';
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar6,0,0);
    uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0225f0ec + 0x225f0d4));
    return uVar8;
  }
  pcVar9 = (char *)(_UNK_01b303e8 + 0x1b3026c);
  iStack_18 = unaff_r4;
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b303ec + 0x1b30280));
    func_0x01384978(*(undefined4 *)(_UNK_01b303f0 + 0x1b3028c));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5f4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5f4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar8 = func_0x0218ffcc(iVar2,param_1,param_2,0);
    return uVar8;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 != 0) {
    if (param_2 < *(int *)(param_1 + 0x78)) {
      if (-1 < param_2) {
        iVar2 = *(int *)(iVar2 + 0x4c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (param_2 < *(int *)(iVar2 + 0xc)) {
          iVar2 = *(int *)(param_1 + 0x48);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x4c);
LAB_01b303a8:
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar8 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_01b303f4 + 0x1b303c4));
          pcVar9 = (char *)(_UNK_01b4164c + 0x1b415ac);
          if (*pcVar9 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01b41650 + 0x1b415c0),0);
            func_0x01384978(*(undefined4 *)(_UNK_01b41654 + 0x1b415cc));
            *pcVar9 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x5f5,0);
          if (iVar2 != 0) {
            iVar2 = func_0x0229f13c(0x5f5,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            pcVar9 = (char *)(_UNK_0218ffc0 + 0x218fee0);
            if (*pcVar9 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_0218ffc4 + 0x218fef4),uVar8,0);
              *pcVar9 = '\x01';
            }
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_30 = 0;
            uStack_20 = 0;
            func_0x0245494c(&uStack_48,0);
            uStack_30 = uStack_48;
            uStack_2c = uStack_44;
            uStack_28 = uStack_40;
            iStack_24 = uStack_3c;
            uStack_20 = uStack_38;
            if (*(int *)(iVar2 + 0x10) != 0) {
              func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
            }
            func_0x01485238(&uStack_30,uVar8,0);
            iVar7 = *(int *)(iVar2 + 8);
            uVar8 = *(undefined4 *)(iVar2 + 0xc);
            iVar2 = *(int *)(iVar2 + 0x10);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            uVar6 = 2;
            if (iVar2 == 0) {
              uVar6 = 1;
            }
            uStack_50 = 0;
            uStack_4c = 0;
            func_0x0245495c(iVar7,uVar8,&uStack_30,uVar6);
            uVar8 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218ffc8 + 0x218ffb0));
            return uVar8;
          }
          if (*(int *)(**(int **)(_UNK_01b41658 + 0x1b41624) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar7 = **(int **)(_UNK_01b4165c + 0x1b41640);
          iVar2 = *(int *)(iVar7 + 0x10);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x02457d48();
          }
          iVar2 = *(int *)(iVar7 + 0x10);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
          if (piVar3 == (int *)0x0) {
            func_0x02457d50();
          }
          iVar2 = *(int *)(iVar7 + 0x10);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
          iStack_24 = iStack_18;
          uStack_28 = 0;
          uStack_2c = 0;
          (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
          iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
          if (iVar2 != 0) {
            iStack_18 = piVar3[0x11];
          }
          bVar1 = true;
          iVar5 = 0;
          if (iVar2 != 0 && iStack_18 != 0) {
            iVar4 = func_0x03d66780(iStack_18,uVar8,&uStack_28,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68))
            ;
            uVar6 = uStack_28;
            bVar1 = false;
            iVar5 = iStack_18;
            if (iVar4 != 0) {
              iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
              if (iVar2 == 0) {
                return uStack_28;
              }
              (**(code **)(*piVar3 + 0x138))(piVar3,uVar8,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
              return uStack_28;
            }
          }
          if ((piVar3[0x12] == 0) ||
             (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar8,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
             iVar4 == 0)) {
            uStack_2c = 0;
            iVar4 = (**(code **)(*piVar3 + 0x1a0))
                              (piVar3,uVar8,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
            uVar6 = uStack_2c;
            if (iVar4 != 0) {
              if (iVar2 != 0) {
                if (bVar1) {
                  if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd)
                      & 1) == 0) {
                    func_0x02457d84();
                  }
                  iVar5 = func_0x02457d58();
                  func_0x03d63f04(iVar5,4,*(undefined4 *)
                                           (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74));
                  piVar3[0x11] = iVar5;
                }
                if (iVar5 == 0) {
                  func_0x02457d50();
                }
                func_0x03d6491c(iVar5,uVar8,uVar6,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
              }
              iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
              if (iVar2 == 0) {
                return uVar6;
              }
              (**(code **)(*piVar3 + 0x138))(piVar3,uVar8,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
              return uVar6;
            }
            iVar2 = piVar3[0x12];
            if (iVar2 == 0) {
              if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1)
                  == 0) {
                func_0x02457d84();
              }
              iVar2 = func_0x02457d58();
              func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144)
                             );
              piVar3[0x12] = iVar2;
              if (iVar2 == 0) {
                func_0x02457d50();
                iVar2 = 0;
              }
            }
            func_0x04220004(iVar2,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
          }
          func_0x0369fb50(piVar3,uVar8,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
          return 0;
        }
      }
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x48);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if ((0 < *(int *)(iVar2 + 0xc)) && (func_0x01458344(0), -1 < extraout_r1)) {
        iVar2 = *(int *)(param_1 + 0x48);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x48);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (extraout_r1 < *(int *)(iVar2 + 0xc)) {
          iVar2 = *(int *)(param_1 + 0x48);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x48);
          param_2 = extraout_r1;
          goto LAB_01b303a8;
        }
      }
    }
  }
  return 0;
}



// ===== FAT.ScoreBoardActivity$$GetMilestoneConfByIndex RVA 0x1b2024c =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3024c(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  undefined4 uVar7;
  int unaff_r4;
  int iVar8;
  char *pcVar9;
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
  
  pcVar9 = (char *)(_UNK_01b303e8 + 0x1b3026c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b303ec + 0x1b30280));
    func_0x01384978(*(undefined4 *)(_UNK_01b303f0 + 0x1b3028c));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5f4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5f4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar3 = func_0x0218ffcc(iVar2,param_1,param_2,param_3);
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 != 0) {
    if (param_2 < *(int *)(param_1 + 0x78)) {
      if (-1 < param_2) {
        iVar2 = *(int *)(iVar2 + 0x4c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (param_2 < *(int *)(iVar2 + 0xc)) {
          iVar2 = *(int *)(param_1 + 0x48);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x4c);
LAB_01b303a8:
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_01b303f4 + 0x1b303c4));
          pcVar9 = (char *)(_UNK_01b4164c + 0x1b415ac);
          if (*pcVar9 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01b41650 + 0x1b415c0),0);
            func_0x01384978(*(undefined4 *)(_UNK_01b41654 + 0x1b415cc));
            *pcVar9 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x5f5,0);
          if (iVar2 == 0) {
            if (*(int *)(**(int **)(_UNK_01b41658 + 0x1b41624) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar8 = **(int **)(_UNK_01b4165c + 0x1b41640);
            iVar2 = *(int *)(iVar8 + 0x10);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x02457d84();
            }
            iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x02457d84();
            }
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x02457d48();
            }
            iVar2 = *(int *)(iVar8 + 0x10);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x02457d84();
            }
            piVar4 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
            if (piVar4 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar2 = *(int *)(iVar8 + 0x10);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x02457d84();
            }
            iVar8 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
            uStack_28 = 0;
            uStack_2c = 0;
            (**(code **)(*piVar4 + 0x110))(piVar4,*(undefined4 *)(*piVar4 + 0x114));
            iVar2 = (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
            if (iVar2 != 0) {
              unaff_r4 = piVar4[0x11];
            }
            bVar1 = true;
            iVar6 = 0;
            if (iVar2 != 0 && unaff_r4 != 0) {
              iVar5 = func_0x03d66780(unaff_r4,uVar3,&uStack_28,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x68));
              uVar7 = uStack_28;
              bVar1 = false;
              iVar6 = unaff_r4;
              if (iVar5 != 0) {
                iVar2 = (**(code **)(*piVar4 + 0x100))(piVar4,*(undefined4 *)(*piVar4 + 0x104));
                if (iVar2 == 0) {
                  return uStack_28;
                }
                (**(code **)(*piVar4 + 0x138))(piVar4,uVar3,uVar7,*(undefined4 *)(*piVar4 + 0x13c));
                return uStack_28;
              }
            }
            if ((piVar4[0x12] == 0) ||
               (iVar5 = func_0x0421f3b0(piVar4[0x12],uVar3,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x13c)),
               iVar5 == 0)) {
              uStack_2c = 0;
              iVar5 = (**(code **)(*piVar4 + 0x1a0))
                                (piVar4,uVar3,&uStack_2c,*(undefined4 *)(*piVar4 + 0x1a4));
              uVar7 = uStack_2c;
              if (iVar5 != 0) {
                if (iVar2 != 0) {
                  if (bVar1) {
                    if ((*(ushort *)
                          (*(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x40) + 0xbd) & 1) ==
                        0) {
                      func_0x02457d84();
                    }
                    iVar6 = func_0x02457d58();
                    func_0x03d63f04(iVar6,4,*(undefined4 *)
                                             (*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x74));
                    piVar4[0x11] = iVar6;
                  }
                  if (iVar6 == 0) {
                    func_0x02457d50();
                  }
                  func_0x03d6491c(iVar6,uVar3,uVar7,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x78));
                }
                iVar2 = (**(code **)(*piVar4 + 0x100))(piVar4,*(undefined4 *)(*piVar4 + 0x104));
                if (iVar2 == 0) {
                  return uVar7;
                }
                (**(code **)(*piVar4 + 0x138))(piVar4,uVar3,uVar7,*(undefined4 *)(*piVar4 + 0x13c));
                return uVar7;
              }
              iVar2 = piVar4[0x12];
              if (iVar2 == 0) {
                if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x48) + 0xbd) &
                    1) == 0) {
                  func_0x02457d84();
                }
                iVar2 = func_0x02457d58();
                func_0x0421ec60(iVar2,*(undefined4 *)
                                       (*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x144));
                piVar4[0x12] = iVar2;
                if (iVar2 == 0) {
                  func_0x02457d50();
                  iVar2 = 0;
                }
              }
              func_0x04220004(iVar2,uVar3,
                              *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x148));
            }
            func_0x0369fb50(piVar4,uVar3,
                            *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x134));
            return 0;
          }
          iVar2 = func_0x0229f13c(0x5f5,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          pcVar9 = (char *)(_UNK_0218ffc0 + 0x218fee0);
          if (*pcVar9 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_0218ffc4 + 0x218fef4),uVar3,0);
            *pcVar9 = '\x01';
          }
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_30 = 0;
          uStack_20 = 0;
          func_0x0245494c(&uStack_48,0);
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          uStack_24 = uStack_3c;
          uStack_20 = uStack_38;
          if (*(int *)(iVar2 + 0x10) != 0) {
            func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
          }
          func_0x01485238(&uStack_30,uVar3,0);
          iVar8 = *(int *)(iVar2 + 8);
          uVar3 = *(undefined4 *)(iVar2 + 0xc);
          iVar2 = *(int *)(iVar2 + 0x10);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uVar7 = 2;
          if (iVar2 == 0) {
            uVar7 = 1;
          }
          func_0x0245495c(iVar8,uVar3,&uStack_30,uVar7,0,0);
          uVar3 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218ffc8 + 0x218ffb0));
          return uVar3;
        }
      }
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x48);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if ((0 < *(int *)(iVar2 + 0xc)) && (func_0x01458344(param_3), -1 < extraout_r1)) {
        iVar2 = *(int *)(param_1 + 0x48);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x48);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (extraout_r1 < *(int *)(iVar2 + 0xc)) {
          iVar2 = *(int *)(param_1 + 0x48);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x48);
          param_2 = extraout_r1;
          goto LAB_01b303a8;
        }
      }
    }
  }
  return 0;
}



// ===== FAT.ScoreBoardActivity$$GetCycleMilestoneConf RVA 0x1b203f8 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b303f8(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  int iStack_24;
  undefined4 uStack_20;
  int iStack_18;
  
  iVar2 = func_0x0229f06c(0x8a07,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8a07,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_0225f0e4 + 0x225eff0);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225f0e8 + 0x225f004),param_1,param_2,0);
      *pcVar9 = '\x01';
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar6,0,0);
    uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0225f0ec + 0x225f0d4));
    return uVar8;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  pcVar9 = (char *)(_UNK_01b303e8 + 0x1b3026c);
  iStack_18 = unaff_r4;
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b303ec + 0x1b30280));
    func_0x01384978(*(undefined4 *)(_UNK_01b303f0 + 0x1b3028c));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x5f4,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x5f4,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar8 = func_0x0218ffcc(iVar7,param_1,iVar2,param_2);
    return uVar8;
  }
  iVar7 = *(int *)(param_1 + 0x48);
  if (iVar7 != 0) {
    if (iVar2 < *(int *)(param_1 + 0x78)) {
      if (-1 < iVar2) {
        iVar7 = *(int *)(iVar7 + 0x4c);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (iVar2 < *(int *)(iVar7 + 0xc)) {
          iVar7 = *(int *)(param_1 + 0x48);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar7 + 0x4c);
LAB_01b303a8:
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          uVar8 = func_0x0364c9b8(iVar7,iVar2,**(undefined4 **)(_UNK_01b303f4 + 0x1b303c4));
          pcVar9 = (char *)(_UNK_01b4164c + 0x1b415ac);
          if (*pcVar9 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01b41650 + 0x1b415c0),0);
            func_0x01384978(*(undefined4 *)(_UNK_01b41654 + 0x1b415cc));
            *pcVar9 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x5f5,0);
          if (iVar2 != 0) {
            iVar2 = func_0x0229f13c(0x5f5,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            pcVar9 = (char *)(_UNK_0218ffc0 + 0x218fee0);
            if (*pcVar9 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_0218ffc4 + 0x218fef4),uVar8,0);
              *pcVar9 = '\x01';
            }
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_30 = 0;
            uStack_20 = 0;
            func_0x0245494c(&uStack_48,0);
            uStack_30 = uStack_48;
            uStack_2c = uStack_44;
            uStack_28 = uStack_40;
            iStack_24 = uStack_3c;
            uStack_20 = uStack_38;
            if (*(int *)(iVar2 + 0x10) != 0) {
              func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
            }
            func_0x01485238(&uStack_30,uVar8,0);
            iVar7 = *(int *)(iVar2 + 8);
            uVar8 = *(undefined4 *)(iVar2 + 0xc);
            iVar2 = *(int *)(iVar2 + 0x10);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            uVar6 = 2;
            if (iVar2 == 0) {
              uVar6 = 1;
            }
            uStack_50 = 0;
            uStack_4c = 0;
            func_0x0245495c(iVar7,uVar8,&uStack_30,uVar6);
            uVar8 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218ffc8 + 0x218ffb0));
            return uVar8;
          }
          if (*(int *)(**(int **)(_UNK_01b41658 + 0x1b41624) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar7 = **(int **)(_UNK_01b4165c + 0x1b41640);
          iVar2 = *(int *)(iVar7 + 0x10);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x02457d48();
          }
          iVar2 = *(int *)(iVar7 + 0x10);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
          if (piVar3 == (int *)0x0) {
            func_0x02457d50();
          }
          iVar2 = *(int *)(iVar7 + 0x10);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84();
          }
          iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
          iStack_24 = iStack_18;
          uStack_28 = 0;
          uStack_2c = 0;
          (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
          iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
          if (iVar2 != 0) {
            iStack_18 = piVar3[0x11];
          }
          bVar1 = true;
          iVar5 = 0;
          if (iVar2 != 0 && iStack_18 != 0) {
            iVar4 = func_0x03d66780(iStack_18,uVar8,&uStack_28,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68))
            ;
            uVar6 = uStack_28;
            bVar1 = false;
            iVar5 = iStack_18;
            if (iVar4 != 0) {
              iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
              if (iVar2 == 0) {
                return uStack_28;
              }
              (**(code **)(*piVar3 + 0x138))(piVar3,uVar8,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
              return uStack_28;
            }
          }
          if ((piVar3[0x12] == 0) ||
             (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar8,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
             iVar4 == 0)) {
            uStack_2c = 0;
            iVar4 = (**(code **)(*piVar3 + 0x1a0))
                              (piVar3,uVar8,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
            uVar6 = uStack_2c;
            if (iVar4 != 0) {
              if (iVar2 != 0) {
                if (bVar1) {
                  if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd)
                      & 1) == 0) {
                    func_0x02457d84();
                  }
                  iVar5 = func_0x02457d58();
                  func_0x03d63f04(iVar5,4,*(undefined4 *)
                                           (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74));
                  piVar3[0x11] = iVar5;
                }
                if (iVar5 == 0) {
                  func_0x02457d50();
                }
                func_0x03d6491c(iVar5,uVar8,uVar6,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
              }
              iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
              if (iVar2 == 0) {
                return uVar6;
              }
              (**(code **)(*piVar3 + 0x138))(piVar3,uVar8,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
              return uVar6;
            }
            iVar2 = piVar3[0x12];
            if (iVar2 == 0) {
              if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1)
                  == 0) {
                func_0x02457d84();
              }
              iVar2 = func_0x02457d58();
              func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144)
                             );
              piVar3[0x12] = iVar2;
              if (iVar2 == 0) {
                func_0x02457d50();
                iVar2 = 0;
              }
            }
            func_0x04220004(iVar2,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
          }
          func_0x0369fb50(piVar3,uVar8,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
          return 0;
        }
      }
    }
    else {
      iVar2 = *(int *)(iVar7 + 0x48);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if ((0 < *(int *)(iVar2 + 0xc)) && (func_0x01458344(param_2), -1 < extraout_r1)) {
        iVar2 = *(int *)(param_1 + 0x48);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x48);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (extraout_r1 < *(int *)(iVar2 + 0xc)) {
          iVar2 = *(int *)(param_1 + 0x48);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar2 + 0x48);
          iVar2 = extraout_r1;
          goto LAB_01b303a8;
        }
      }
    }
  }
  return 0;
}



// ===== FAT.ScoreBoardActivity$$PullMilestoneRewardList RVA 0x1b20460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b30460(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a08,0);
  if (iVar1 == 0) {
    pcVar4 = (char *)(_UNK_01b30598 + 0x1b304cc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b3059c + 0x1b304e0));
      func_0x01384978(*(undefined4 *)(_UNK_01b305a0 + 0x1b304ec));
      func_0x01384978(*(undefined4 *)(_UNK_01b305a4 + 0x1b304f8));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x8a09,0);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc0);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b305a8 + 0x1b30550));
      func_0x0328ea74(uVar5,uVar2,**(undefined4 **)(_UNK_01b305ac + 0x1b3056c));
      func_0x01b36e58(param_1);
      func_0x01b3957c(param_1,**(undefined4 **)(_UNK_01b305b0 + 0x1b30588));
      return uVar5;
    }
    iVar1 = func_0x0229f13c(0x8a09,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a08,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_021cb2a0 + 0x21cb1c0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021cb2a4 + 0x21cb1d4),param_1,0);
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021cb2a8 + 0x21cb290));
  return uVar5;
}



// ===== FAT.ScoreBoardActivity$$PullMilestoneRewardListInternal RVA 0x1b204b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b304b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b30598 + 0x1b304cc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3059c + 0x1b304e0));
    func_0x01384978(*(undefined4 *)(_UNK_01b305a0 + 0x1b304ec));
    func_0x01384978(*(undefined4 *)(_UNK_01b305a4 + 0x1b304f8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a09,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a09,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021cb2a0 + 0x21cb1c0);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021cb2a4 + 0x21cb1d4),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021cb2a8 + 0x21cb290));
    return uVar5;
  }
  uVar2 = *(undefined4 *)(param_1 + 0xc0);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b305a8 + 0x1b30550));
  func_0x0328ea74(uVar5,uVar2,**(undefined4 **)(_UNK_01b305ac + 0x1b3056c));
  func_0x01b36e58(param_1);
  func_0x01b3957c(param_1,**(undefined4 **)(_UNK_01b305b0 + 0x1b30588));
  return uVar5;
}



// ===== FAT.ScoreBoardActivity$$PullMilestoneItemRewardList RVA 0x1b205b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b305b4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01b30670 + 0x1b305cc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b30674 + 0x1b305e0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a0d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a0d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_0225f67c + 0x225f59c);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225f680 + 0x225f5b0),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0225f684 + 0x225f66c));
    return;
  }
  if (*(int *)(**(int **)(_UNK_01b30678 + 0x1b3063c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0204f2f0(&uStack_1c,0x54,0);
  func_0x01b3067c(param_1,uStack_1c,uStack_18,uStack_14);
  return;
}



// ===== FAT.ScoreBoardActivity$$PullMilestoneItemRewardList RVA 0x1b2067c =====

void FUN_01b3067c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x8a0e,0);
  if (iVar1 == 0) {
    func_0x01b30700(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x8a0e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0225f424(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$PullMilestoneItemRewardListInternal RVA 0x1b20700 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b30700(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint in_fpscr;
  float fVar13;
  
  pcVar7 = (char *)(_UNK_01b30b4c + 0x1b30720);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b30b50 + 0x1b30738));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b54 + 0x1b30744));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b58 + 0x1b30750));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b5c + 0x1b3075c));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b60 + 0x1b30768));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b64 + 0x1b30774));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b68 + 0x1b30780));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b6c + 0x1b3078c));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b70 + 0x1b30798));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b74 + 0x1b307a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b78 + 0x1b307b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b7c + 0x1b307bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b30b80 + 0x1b307c8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a0f,0);
  if (iVar1 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b30b84 + 0x1b30830));
    func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01b30b88 + 0x1b30844));
    iVar3 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = param_1[0x2b];
    }
    if ((iVar3 != 0 && iVar1 != 0) && (iVar1 = func_0x02139cf4(iVar1,0), iVar1 != 0)) {
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01b30b8c + 0x1b308a0));
      func_0x02450d3c(iVar3,**(undefined4 **)(_UNK_01b30b90 + 0x1b308b4));
      iVar8 = 0;
      iVar4 = func_0x020d8024(0,0x23,0);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b30b94 + 0x1b308e0));
      func_0x01b47770(uVar5,**(undefined4 **)(_UNK_01b30b98 + 0x1b308f8),0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar4 + 0x1c) = uVar5;
      while( true ) {
        iVar9 = param_1[0x31];
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar9 + 0xc) <= iVar8) break;
        iVar9 = param_1[0x31];
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x03259410(iVar9,iVar8,**(undefined4 **)(_UNK_01b30b9c + 0x1b30958));
        iVar9 = **(int **)(_UNK_01b30ba0 + 0x1b30970);
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4();
          iVar9 = **(int **)(_UNK_01b30ba4 + 0x1b3098c);
        }
        fVar13 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
        iVar9 = func_0x01b3965c(param_1,uVar5,iVar1,iVar4,param_2,param_3,param_4,
                                **(float **)(iVar9 + 0x5c) + (*(float **)(iVar9 + 0x5c))[1] * fVar13
                                ,iVar3);
        if (iVar9 != 0) {
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar2 + 8);
          uVar12 = *(uint *)(iVar2 + 0xc);
          piVar6 = *(int **)(_UNK_01b30ba8 + 0x1b30a1c);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar11 = *piVar6;
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          if (uVar12 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar12 + 1;
            *(int *)(iVar10 + uVar12 * 4 + 0x10) = iVar9;
          }
          else {
            func_0x0328f170(iVar2,iVar9,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar8 = iVar8 + 1;
      }
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01b30bac + 0x1b30ab0));
        uVar5 = func_0x01b39abc(param_1,param_2,param_3,param_4,iVar3);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01c36290(iVar1,uVar5,0);
      }
      func_0x01b36944(param_1);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e2d040(iVar1,1,0);
      func_0x01b3957c(param_1,**(undefined4 **)(_UNK_01b30bb0 + 0x1b30b40));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a0f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0225f424(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar2;
}



// ===== FAT.ScoreBoardActivity$$IsReadyToMove RVA 0x1b20bb4 =====

uint FUN_01b30bb4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8a20,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x3c);
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x787b,0);
    if (iVar1 == 0) {
      return (uint)*(byte *)(param_1 + 0x18);
    }
    iVar1 = func_0x0229f13c(0x787b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a20,0);
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
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.ScoreBoardActivity$$StartMoveUpBoard RVA 0x1b20c20 =====

void FUN_01b30c20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r6;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a21,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x3c);
    if (param_1 == 0) {
      return;
    }
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
  }
  else {
    iVar1 = func_0x0229f13c(0x8a21,0);
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



// ===== FAT.ScoreBoardActivity$$CheckBoardExtremeCase RVA 0x1b20c88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b30c88(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8a22,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x40);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x78a4,0);
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
      iVar1 = func_0x0229f13c(0x78a4,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a22,0);
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



// ===== FAT.ScoreBoardActivity$$get_HandbookAgent RVA 0x1b20cf0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b30cf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a23,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a23,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02235380 + 0x22352a0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02235384 + 0x22352b4),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02235388 + 0x2235370));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xbc);
}



// ===== FAT.ScoreBoardActivity$$get_HasHandbook RVA 0x1b20d44 =====

uint FUN_01b30d44(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8a24,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a24,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)(*(int *)(param_1 + 0xbc) != 0);
}



// ===== FAT.ScoreBoardActivity$$get_HandbookClaimableRewardCount RVA 0x1b20da0 =====

/* WARNING: Possible PIC construction at 0x02bf7004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf7008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b30da0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 unaff_r6;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0x8a25,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xbc);
    if (param_1 == 0) {
      return 0;
    }
    pcVar4 = (char *)(_UNK_02bf7170 + 0x2bf6f7c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf7174 + 0x2bf6f90),0);
      func_0x01384978(*(undefined4 *)(_UNK_02bf7178 + 0x2bf6f9c));
      func_0x01384978(*(undefined4 *)(_UNK_02bf717c + 0x2bf6fa8));
      func_0x01384978(*(undefined4 *)(_UNK_02bf7180 + 0x2bf6fb4));
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar1 = func_0x0229f06c(0x5f7a,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x28) != '\0') {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(param_1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x3c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_40,iVar2,**(undefined4 **)(_UNK_02bf7184 + 0x2bf7060));
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        uStack_24 = uStack_34;
        puVar5 = *(undefined4 **)(_UNK_02bf7188 + 0x2bf707c);
        while (iVar2 = func_0x03f597e0(&uStack_30,*puVar5), uVar6 = uStack_24, iVar2 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01cc3dbc(iVar1,uVar6,0);
          if (iVar2 != 0) {
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          }
        }
        func_0x03f597dc(&uStack_30,**(undefined4 **)(_UNK_02bf7190 + 0x2bf70cc));
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      return *(undefined4 *)(param_1 + 0x2c);
    }
    iVar1 = func_0x0229f13c(0x5f7a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2bf7008;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar1 = func_0x0229f13c(0x8a25,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  uVar6 = func_0x0245498c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return uVar6;
}



// ===== FAT.ScoreBoardActivity$$get_LastCloudUnlockInfo RVA 0x1b20e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b30e0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a26,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a26,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0225f784 + 0x225f6a4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225f788 + 0x225f6b8),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0225f78c + 0x225f774));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xfc);
}



// ===== FAT.ScoreBoardActivity$$TryGetCloudUnlockRequirement RVA 0x1b20e60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b30e60(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01b30f5c + 0x1b30e80);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b30f60 + 0x1b30e98));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x8a27,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0245054c(iVar1,param_2,&uStack_28,**(undefined4 **)(_UNK_01b30f64 + 0x1b30f20));
    if (iVar1 == 0) {
      uVar2 = 0;
      *param_3 = 0;
      *param_4 = 0;
    }
    else {
      *param_3 = uStack_28;
      uVar2 = 1;
      *param_4 = uStack_24;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a27,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02182904(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ScoreBoardActivity$$get_LastHandbookUnlockInfo RVA 0x1b20f68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b30f68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a28,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a28,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0225f88c + 0x225f7ac);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225f890 + 0x225f7c0),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0225f894 + 0x225f87c));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x100);
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardArchive.get_Feature RVA 0x1b20fbc =====

undefined4 FUN_01b30fbc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a29,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a29,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return 0xac;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardArchive.SetBoardData RVA 0x1b21010 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b31010(int param_1,int param_2)

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
  
  iVar2 = func_0x0229f06c(0x8a2a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8a2a,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    return;
  }
  cVar1 = '\0';
  if (param_2 != 0) {
    cVar1 = *(char *)(param_1 + 0x99);
  }
  if ((param_2 == 0 || cVar1 == '\0') || (*(int *)(param_1 + 0x8c) < 1)) {
    return;
  }
  func_0x01b31120(param_1,*(int *)(param_1 + 0x8c),0);
  iVar2 = *(int *)(param_1 + 0xac);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0214a9e8(iVar2,param_2,0,0);
  iVar2 = *(int *)(param_1 + 0xac);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02139cf4(iVar2,0);
  uVar9 = *(undefined4 *)(param_1 + 0x84);
  uVar5 = *(undefined4 *)(param_1 + 0x94);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020dc7e4(iVar2,uVar9,uVar5,0);
  func_0x01b314b4(param_1);
  func_0x01b3158c(param_1);
  func_0x01b31648(param_1);
  iVar2 = func_0x0229f06c(0x8a36,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8a36,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    iVar2 = func_0x02139cf4(*(int *)(param_1 + 0xac),0);
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(param_1 + 0x99);
    }
    if ((iVar2 != 0 && cVar1 != '\0') && (param_1 = *(int *)(param_1 + 0x3c), param_1 != 0)) {
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
                   (iVar7 = func_0x02c07380(param_1,*(undefined4 *)(iVar2 + 0xc),iVar7,iVar2 + 0x10)
                   , iVar7 != 0)) {
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
      goto SUB_02173f80;
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$InitWorld RVA 0x1b21120 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b31120(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
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
  
  pcVar9 = (char *)(_UNK_01b31470 + 0x1b31140);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b31474 + 0x1b31154));
    func_0x01384978(*(undefined4 *)(_UNK_01b31478 + 0x1b31160));
    func_0x01384978(*(undefined4 *)(_UNK_01b3147c + 0x1b3116c));
    func_0x01384978(*(undefined4 *)(_UNK_01b31480 + 0x1b31178));
    func_0x01384978(*(undefined4 *)(_UNK_01b31484 + 0x1b31184));
    func_0x01384978(*(undefined4 *)(_UNK_01b31488 + 0x1b31190));
    func_0x01384978(*(undefined4 *)(_UNK_01b3148c + 0x1b3119c));
    func_0x01384978(*(undefined4 *)(_UNK_01b31490 + 0x1b311a8));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a2b,0);
  if (iVar1 == 0) {
    if (0 < param_2) {
      func_0x01b31a58(param_1);
      uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b31494 + 0x1b3121c));
      func_0x02143488(uVar2,0);
      puVar3 = *(undefined4 **)(_UNK_01b31498 + 0x1b31238);
      *(undefined4 *)(param_1 + 0xac) = uVar2;
      uVar2 = func_0x01384be4(*puVar3);
      func_0x024500b4(uVar2,param_1,**(undefined4 **)(_UNK_01b3149c + 0x1b31258),0);
      uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01b314a0 + 0x1b3126c));
      func_0x0214d6c8(uVar4,uVar2,0,0);
      *(undefined4 *)(param_1 + 0xb0) = uVar4;
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar1 + 0x4c);
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b314a4 + 0x1b312ac));
      func_0x01db7f44(iVar1,0);
      uVar2 = *(undefined4 *)(param_1 + 0xac);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 8) = 0x10;
      *(undefined4 *)(iVar1 + 0xc) = uVar2;
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x01db7f4c(iVar10,iVar1,0);
      iVar1 = *(int *)(param_1 + 0xb0);
      uVar2 = *(undefined4 *)(param_1 + 0xac);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0214e900(iVar1,uVar2,0);
      iVar1 = *(int *)(param_1 + 0xac);
      uVar2 = *(undefined4 *)(param_1 + 0xb0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02141f58(iVar1,uVar2,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar2 = *(undefined4 *)(param_1 + 0xac);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_24 = 0;
      uStack_28 = param_3;
      func_0x01dbe654(iVar1,param_1,uVar2,param_2);
      iVar1 = *(int *)(param_1 + 0xac);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02142104(iVar1,param_1,0);
      iVar1 = *(int *)(param_1 + 0xac);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      if (iVar1 != 0) {
        uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b314a8 + 0x1b313e0));
        func_0x02450548(uVar2,param_1,**(undefined4 **)(_UNK_01b314ac + 0x1b313fc),0);
        func_0x020d8480(iVar1,uVar2,0);
      }
      iVar1 = *(int *)(param_1 + 0xb4);
      if (iVar1 == 0) {
        iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b314b0 + 0x1b3142c));
        func_0x02afb4b0(iVar1,param_1,0);
        *(int *)(param_1 + 0xb4) = iVar1;
        if (iVar1 == 0) {
          func_0x01384bf0();
          iVar1 = 0;
        }
      }
      pcVar9 = (char *)(_UNK_02afb5c0 + 0x2afb4e0);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02afb5c4 + 0x2afb4f4),0);
        *pcVar9 = '\x01';
      }
      iVar10 = func_0x0229f06c(0x7231,0);
      if (iVar10 != 0) {
        iVar10 = func_0x0229f13c(0x7231,0);
        if (iVar10 == 0) {
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
        if (*(int *)(iVar10 + 0x10) != 0) {
          func_0x01485278(&uStack_30,*(int *)(iVar10 + 0x10),0);
        }
        func_0x01485278(&uStack_30,iVar1,0);
        iVar8 = *(int *)(iVar10 + 8);
        uVar2 = *(undefined4 *)(iVar10 + 0xc);
        iVar1 = *(int *)(iVar10 + 0x10);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 2;
        if (iVar1 == 0) {
          uVar4 = 1;
        }
        uStack_50 = 0;
        uStack_4c = 0;
        func_0x0245495c(iVar8,uVar2,&uStack_30,uVar4);
        return;
      }
      if (*(int *)(iVar1 + 8) == 0) {
        return;
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar10 = func_0x01384be4(**(undefined4 **)(_UNK_02afb5c8 + 0x2afb564));
        func_0x04874ed4(iVar10,0);
        *(int *)(iVar1 + 0xc) = iVar10;
        *(int *)(iVar10 + 8) = iVar1;
      }
      iVar10 = func_0x01c24918(0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar10 + 0x4c);
      piVar7 = *(int **)(iVar1 + 0xc);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      pcVar9 = (char *)(_UNK_01dbb728 + 0x1dbb624);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01dbb72c + 0x1dbb638),piVar7,0);
        func_0x01384978(*(undefined4 *)(_UNK_01dbb730 + 0x1dbb644));
        *pcVar9 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x16bb,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x16bb,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,piVar7,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar10,0);
        func_0x01485278(&uStack_38,piVar7,0);
        iVar10 = *(int *)(iVar1 + 8);
        uVar2 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 3;
        if (iVar1 == 0) {
          uVar4 = 2;
        }
        func_0x0245495c(iVar10,uVar2,&uStack_38,uVar4,0,0);
        return;
      }
      iVar1 = func_0x02f6252c(*(undefined4 *)(iVar10 + 0x30),piVar7,
                              **(undefined4 **)(_UNK_01dbb734 + 0x1dbb6a4));
      if (piVar7 == (int *)0x0 || iVar1 == 0) {
        return;
      }
      iVar1 = *piVar7;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01dbb738 + 0x1dbb6cc)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
            goto LAB_01dbb714;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01dbb738 + 0x1dbb6cc),2);
LAB_01dbb714:
                    /* WARNING: Could not recover jumptable at 0x01dbb724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(piVar7,puVar3[1]);
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a2b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x0217f950(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$InitBoardMoveHandler RVA 0x1b214b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b314b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
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
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_01b31580 + 0x1b314cc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b31584 + 0x1b314e0));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x8a32,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a32,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x99) != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x84);
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01b31588 + 0x1b3154c));
    uStack_18 = 0;
    func_0x02c06bbc(uVar4,param_1,2,uVar2);
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  return;
}



// ===== FAT.ScoreBoardActivity$$InitBoardExtremeHandler RVA 0x1b2158c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3158c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01b3163c + 0x1b315a0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b31640 + 0x1b315b4));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x8a33,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a33,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x99) != '\0') {
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01b31644 + 0x1b3161c));
    func_0x02c05f90(uVar4,param_1,2,0);
  }
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  return;
}



// ===== FAT.ScoreBoardActivity$$CommitLoadedMilestoneItemRewardList RVA 0x1b21648 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b31648(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01b31928 + 0x1b31660);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3192c + 0x1b31674));
    func_0x01384978(*(undefined4 *)(_UNK_01b31930 + 0x1b31680));
    func_0x01384978(*(undefined4 *)(_UNK_01b31934 + 0x1b3168c));
    func_0x01384978(*(undefined4 *)(_UNK_01b31938 + 0x1b31698));
    func_0x01384978(*(undefined4 *)(_UNK_01b3193c + 0x1b316a4));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x8a34,0);
  if (iVar1 == 0) {
    iVar1 = param_1[0x31];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((0 < *(int *)(iVar1 + 0xc)) && (iVar1 = func_0x02b48934(param_1,0), iVar1 != 0)) {
      iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = param_1[0x2b];
      }
      if ((iVar2 != 0 && iVar1 != 0) && (iVar1 = func_0x02139cf4(iVar1,0), iVar1 != 0)) {
        if (param_1[0x31] == 0) {
          func_0x01384bf0();
        }
        iVar1 = 0;
        puVar8 = *(undefined4 **)(_UNK_01b31940 + 0x1b3178c);
        piVar7 = *(int **)(_UNK_01b31944 + 0x1b31794);
        while( true ) {
          iVar2 = param_1[0x31];
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar2 + 0xc) <= iVar1) break;
          iVar2 = param_1[0x31];
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x03259410(iVar2,iVar1,*puVar8);
          iVar2 = *piVar7;
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          iVar2 = func_0x01b39ba4(param_1,uVar3,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x3a4),0,0,
                                  0,&uStack_28);
          if (iVar2 == 0) {
            iVar2 = func_0x01c24918(0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            piVar7 = *(int **)(_UNK_01b31948 + 0x1b31838);
            iVar6 = *(int *)(iVar2 + 0x40);
            iVar2 = *piVar7;
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x3a4);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x01cdcbac(iVar6,uVar3,1,uVar5,0,0,0,0x1a0,
                            **(undefined4 **)(_UNK_01b3194c + 0x1b3187c),
                            **(undefined4 **)(_UNK_01b31950 + 0x1b31888),0);
            piVar7 = *(int **)(_UNK_01b31954 + 0x1b318bc);
          }
          iVar1 = iVar1 + 1;
        }
        func_0x01b36944(param_1);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e2d040(iVar1,1,0);
        if (((char)param_1[0x26] != '\0') && (iVar1 = func_0x01b3439c(param_1), iVar1 != 0)) {
          *(undefined1 *)((int)param_1 + 0xaa) = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a34,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$RecheckBoardStateAfterLoad RVA 0x1b21958 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b31958(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x8a36,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8a36,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
  if (*(int *)(param_1 + 0xac) != 0) {
    iVar2 = func_0x02139cf4(*(int *)(param_1 + 0xac),0);
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(param_1 + 0x99);
    }
    if ((iVar2 != 0 && cVar1 != '\0') && (param_1 = *(int *)(param_1 + 0x3c), param_1 != 0)) {
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
                   (iVar7 = func_0x02c07380(param_1,*(undefined4 *)(iVar2 + 0xc),iVar7,iVar2 + 0x10)
                   , iVar7 != 0)) {
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
      goto SUB_02173f80;
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardArchive.FillBoardData RVA 0x1b219e4 =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b319e4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int unaff_r4;
  char *pcVar11;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_r7;
  undefined4 *puVar14;
  undefined4 *unaff_r8;
  int unaff_r9;
  uint uVar15;
  int unaff_r10;
  undefined4 *puVar16;
  undefined4 unaff_lr;
  undefined8 uVar17;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int aiStack_28 [4];
  
  iVar1 = func_0x0229f06c(0x8a37,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xac);
    if (param_1 == 0) {
      return;
    }
    pcVar11 = (char *)(_UNK_0214881c + 0x2147b9c);
    if (*pcVar11 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02148820 + 0x2147bb0),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02148824 + 0x2147bbc));
      func_0x01384978(*(undefined4 *)(_UNK_02148828 + 0x2147bc8));
      func_0x01384978(*(undefined4 *)(_UNK_0214882c + 0x2147bd4));
      func_0x01384978(*(undefined4 *)(_UNK_02148830 + 0x2147be0));
      func_0x01384978(*(undefined4 *)(_UNK_02148834 + 0x2147bec));
      func_0x01384978(*(undefined4 *)(_UNK_02148838 + 0x2147bf8));
      func_0x01384978(*(undefined4 *)(_UNK_0214883c + 0x2147c04));
      func_0x01384978(*(undefined4 *)(_UNK_02148840 + 0x2147c10));
      func_0x01384978(*(undefined4 *)(_UNK_02148844 + 0x2147c1c));
      func_0x01384978(*(undefined4 *)(_UNK_02148848 + 0x2147c28));
      func_0x01384978(*(undefined4 *)(_UNK_0214884c + 0x2147c34));
      func_0x01384978(*(undefined4 *)(_UNK_02148850 + 0x2147c40));
      func_0x01384978(*(undefined4 *)(_UNK_02148854 + 0x2147c4c));
      func_0x01384978(*(undefined4 *)(_UNK_02148858 + 0x2147c58));
      func_0x01384978(*(undefined4 *)(_UNK_0214885c + 0x2147c64));
      func_0x01384978(*(undefined4 *)(_UNK_02148860 + 0x2147c70));
      func_0x01384978(*(undefined4 *)(_UNK_02148864 + 0x2147c7c));
      func_0x01384978(*(undefined4 *)(_UNK_02148868 + 0x2147c88));
      func_0x01384978(*(undefined4 *)(_UNK_0214886c + 0x2147c94));
      func_0x01384978(*(undefined4 *)(_UNK_02148870 + 0x2147ca0));
      func_0x01384978(*(undefined4 *)(_UNK_02148874 + 0x2147cac));
      func_0x01384978(*(undefined4 *)(_UNK_02148878 + 0x2147cb8));
      func_0x01384978(*(undefined4 *)(_UNK_0214887c + 0x2147cc4));
      func_0x01384978(*(undefined4 *)(_UNK_02148880 + 0x2147cd0));
      func_0x01384978(*(undefined4 *)(_UNK_02148884 + 0x2147cdc));
      func_0x01384978(*(undefined4 *)(_UNK_02148888 + 0x2147ce8));
      func_0x01384978(*(undefined4 *)(_UNK_0214888c + 0x2147cf4));
      func_0x01384978(*(undefined4 *)(_UNK_02148890 + 0x2147d00));
      func_0x01384978(*(undefined4 *)(_UNK_02148894 + 0x2147d0c));
      func_0x01384978(*(undefined4 *)(_UNK_02148898 + 0x2147d18));
      func_0x01384978(*(undefined4 *)(_UNK_0214889c + 0x2147d24));
      func_0x01384978(*(undefined4 *)(_UNK_021488a0 + 0x2147d30));
      func_0x01384978(*(undefined4 *)(_UNK_021488a4 + 0x2147d3c));
      func_0x01384978(*(undefined4 *)(_UNK_021488a8 + 0x2147d48));
      func_0x01384978(*(undefined4 *)(_UNK_021488ac + 0x2147d54));
      func_0x01384978(*(undefined4 *)(_UNK_021488b0 + 0x2147d60));
      func_0x01384978(*(undefined4 *)(_UNK_021488b4 + 0x2147d6c));
      *pcVar11 = '\x01';
    }
    uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_8c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_60 = 0;
    unaff_r8 = &uStack_38;
    uStack_78 = 0;
    aiStack_28[0] = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_38 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_48 = 0;
    uStack_84 = uStack_94;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    uStack_5c = uStack_94;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_34 = uStack_94;
    uStack_30 = uStack_90;
    uStack_2c = uStack_8c;
    iVar1 = func_0x0229f06c(0x5c6c,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar1 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      uVar17 = func_0x02140d24(param_1);
      uVar17 = func_0x01458584((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
      *(undefined8 *)(param_2 + 0x30) = uVar17;
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_021488b8 + 0x2147e74)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02147ebc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021488b8 + 0x2147e74),0);
LAB_02147ebc:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x3c) = uVar13;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x021139b0(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148958(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02139e7c(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0215ea7c(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01db6828(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02110804(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020dc720(iVar1,aiStack_28,0);
      iVar1 = aiStack_28[0];
      iStack_b4 = param_2;
      if (iVar6 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
        uStack_38 = uStack_b0;
        uStack_34 = uStack_ac;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
        puVar14 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
        while (iVar1 = func_0x03f597e0(unaff_r8,*puVar3), uVar7 = uStack_2c, iVar1 != 0) {
          iVar1 = *(int *)(param_2 + 0x6c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0364baf8(iVar1,uVar7,*puVar14);
        }
        func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
      }
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      uVar17 = func_0x02140d24(param_1);
      uVar7 = *(uint *)(param_1 + 0x44);
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      uVar17 = func_0x01458584((uint)uVar17 - uVar7,
                               (int)((ulonglong)uVar17 >> 0x20) -
                               (((int)uVar7 >> 0x1f) + (uint)((uint)uVar17 < uVar7)),1000,0);
      *(undefined8 *)(param_2 + 0x10) = uVar17;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0x10)) {
        iVar1 = *(int *)(param_1 + 0x6c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02454910(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488d0 + 0x21480dc));
        uVar7 = 0;
        uVar15 = 0;
        uStack_48 = uStack_b0;
        uStack_44 = uStack_ac;
        uStack_40 = uStack_a8;
        uStack_3c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
        while (iVar1 = func_0x03f5a2cc(&uStack_48,*puVar3), iVar1 != 0) {
          uVar4 = uStack_3c & 0x3f;
          uVar8 = uVar4 - 0x20;
          uVar5 = 1 << uVar4;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
          }
          uVar7 = uVar5 | uVar7;
          uVar5 = 1 >> (0x20 - uVar4 & 0xff);
          if (-1 < (int)uVar8) {
            uVar5 = 1 << (uVar8 & 0xff);
          }
          uVar15 = uVar5 | uVar15;
        }
        func_0x03f5a2c8(&uStack_48,**(undefined4 **)(_UNK_021488dc + 0x214814c));
        if (iStack_b4 == 0) {
          func_0x01384bf0();
        }
        *(uint *)(param_2 + 0x48) = uVar7;
        *(uint *)(param_2 + 0x4c) = uVar15;
      }
      iVar1 = *(int *)(param_1 + 0x9c);
      iStack_b8 = param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      puVar14 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
      puVar3 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
      while (iVar1 = func_0x03f9b324(&uStack_60,*puVar14), uVar7 = uStack_54, iVar1 != 0) {
        iVar1 = (int)uStack_50;
        iVar12 = *(int *)(iStack_b4 + 0x50);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
        func_0x01797598(iVar6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148a58(iVar1);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar6 + 0x10) = uVar13;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148aac(iVar1);
        *(undefined4 *)(iVar6 + 0xc) = uVar13;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar12,uVar7,iVar6,*puVar3);
      }
      func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
      iVar1 = *(int *)(iStack_b8 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_02148900 + 0x214829c));
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      puVar3 = *(undefined4 **)(_UNK_02148904 + 0x21482c8);
      puVar14 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
      puVar16 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
      while (iVar1 = func_0x03f9b324(&uStack_78,*puVar3), uVar7 = uStack_6c, iVar1 != 0) {
        iVar1 = (int)uStack_68;
        uVar13 = func_0x01384be4(*puVar14);
        FUN_01798ae4(uVar13,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148b00(iVar1,uVar13);
        iVar1 = *(int *)(iStack_b4 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar1,uVar7,uVar13,*puVar16);
      }
      func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
      iVar6 = iStack_b4;
      iVar1 = iStack_b8;
      uVar13 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
      *(int *)(iStack_b8 + 0xa4) = iStack_b4;
      uVar13 = func_0x01384be4(uVar13);
      func_0x03ccb96c(uVar13,iVar1,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
      func_0x021475dc(iVar1,uVar13,0x7fffffff);
      iVar12 = *(int *)(iVar1 + 0x68);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_b0,iVar12,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      puVar3 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
      puVar14 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
      while (iVar12 = func_0x03f5f428(&uStack_88,*puVar3), uVar7 = uStack_7c, iVar12 != 0) {
        iVar12 = *(int *)(iVar6 + 0x5c);
        if (uStack_7c == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x0210e5f4(uVar7,0);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x0364baf8(iVar12,uVar13,*puVar14);
      }
      func_0x03f5f424(&uStack_88,**(undefined4 **)(_UNK_02148934 + 0x2148454));
      iVar6 = *(int *)(iVar1 + 0x34);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d6476c(iVar6,**(undefined4 **)(_UNK_0214893c + 0x2148488));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0382ab5c(&uStack_98,iVar6,**(undefined4 **)(_UNK_02148940 + 0x21484b4));
      puVar3 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
      while (iVar6 = func_0x03f9b9f8(&uStack_98,*puVar3), iVar6 != 0) {
        if (uStack_8c != 0) {
          func_0x02148de8(iVar1);
        }
      }
      func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2147e08;
    unaff_r4 = iVar1;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_b8;
  }
  else {
    iVar1 = func_0x0229f13c(0x8a37,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar6 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar1 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
  return;
}



// ===== FAT.ScoreBoardActivity$$ClearBoardData RVA 0x1b21a58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b31a58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b31bb8 + 0x1b31a6c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b31bbc + 0x1b31a80));
    func_0x01384978(*(undefined4 *)(_UNK_01b31bc0 + 0x1b31a8c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a2c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a2c,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    func_0x02afb5e8(*(int *)(param_1 + 0xb4),0);
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    func_0x021421a8(*(int *)(param_1 + 0xac),param_1,0);
    if (*(int *)(param_1 + 0xac) != 0) {
      iVar1 = func_0x02139cf4(*(int *)(param_1 + 0xac),0);
      if (iVar1 != 0) {
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b31bc4 + 0x1b31b30));
        func_0x02450548(uVar5,param_1,**(undefined4 **)(_UNK_01b31bc8 + 0x1b31b4c),0);
        func_0x020d8530(iVar1,uVar5,0);
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar5 = *(undefined4 *)(param_1 + 0xac);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbc0ec(iVar1,uVar5,0);
    }
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// ===== FAT.ScoreBoardActivity$$OnBoardItemChange RVA 0x1b21bcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b31bcc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8a31,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xac) != 0) {
      func_0x02139cf4(*(int *)(param_1 + 0xac),0);
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      func_0x02c06e70(*(int *)(param_1 + 0x3c),0);
    }
    param_1 = *(int *)(param_1 + 0x40);
    if (param_1 == 0) {
      return;
    }
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
  }
  else {
    iVar1 = func_0x0229f13c(0x8a31,0);
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



// ===== FAT.ScoreBoardActivity$$OnItemMerge RVA 0x1b21c5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b31c5c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = func_0x0229f06c(0x8a2d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a2d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  pcVar2 = (char *)(_UNK_01b31e60 + 0x1b31cf8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b31e64 + 0x1b31d0c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a2e,0);
  if (iVar1 == 0) {
    if ((param_4 != 0) && (iVar1 = func_0x02116990(param_4,0), iVar1 != 0)) {
      iVar1 = func_0x02116990(param_4,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(param_1 + 100);
      uVar4 = *(undefined4 *)(param_1 + 0x94);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0245054c(iVar3,uVar4,&stack0xffffffe0,
                              **(undefined4 **)(_UNK_01b31e68 + 0x1b31dcc));
      if ((iVar3 != 0) && (iVar1 == 0)) {
        iVar1 = *(int *)(param_1 + 0x94);
        *(int *)(param_1 + 0x94) = iVar1 + 1;
        if ((*(int *)(param_1 + 0xac) != 0) &&
           (iVar3 = func_0x02139cf4(*(int *)(param_1 + 0xac),0), iVar3 != 0)) {
          func_0x020dc7e4(iVar3,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x94),0);
        }
        if (*(int *)(param_1 + 0x3c) != 0) {
          func_0x02c06e70(*(int *)(param_1 + 0x3c),0);
        }
        func_0x01b32138(param_1,iVar1,*(undefined4 *)(param_1 + 0x94),0,0,param_4);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a2e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_4,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$TryAutoUnlockCloudByItem RVA 0x1b21cdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b31cdc(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_01b31e60 + 0x1b31cf8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b31e64 + 0x1b31d0c));
    *pcVar2 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x8a2e,0);
  if (iVar1 == 0) {
    if ((param_2 != 0) && (iVar1 = func_0x02116990(param_2,0), iVar1 != 0)) {
      iVar1 = func_0x02116990(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(param_1 + 100);
      uVar4 = *(undefined4 *)(param_1 + 0x94);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0245054c(iVar3,uVar4,&iStack_20,**(undefined4 **)(_UNK_01b31e68 + 0x1b31dcc));
      if (iVar3 != 0) {
        iVar3 = iStack_1c;
        if (iStack_1c == 0) {
          iVar3 = iStack_20;
        }
        if (iStack_1c == 0 && iVar3 == iVar1) {
          iVar1 = *(int *)(param_1 + 0x94);
          *(int *)(param_1 + 0x94) = iVar1 + 1;
          if ((*(int *)(param_1 + 0xac) != 0) &&
             (iVar3 = func_0x02139cf4(*(int *)(param_1 + 0xac),0), iVar3 != 0)) {
            func_0x020dc7e4(iVar3,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x94),0)
            ;
          }
          if (*(int *)(param_1 + 0x3c) != 0) {
            func_0x02c06e70(*(int *)(param_1 + 0x3c),0);
          }
          func_0x01b32138(param_1,iVar1,*(undefined4 *)(param_1 + 0x94),iStack_20,iStack_1c,param_2)
          ;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a2e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$GetMoveNeedRowCount RVA 0x1b21e6c =====

undefined4 FUN_01b31e6c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x8a38,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a38,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  return 0;
}



// ===== FAT.ScoreBoardActivity$$GetMoveCountByRowId RVA 0x1b21ec8 =====

undefined4 FUN_01b31ec8(undefined4 param_1,undefined4 param_2)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x8a39,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a39,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = func_0x01b41444(param_2,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  }
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardMoveAdapter.GetBoard RVA 0x1b21f3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b31f3c(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  iVar2 = func_0x0229f06c(0x8a3b,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x2b];
    }
    param_1 = piVar1;
    if (iVar2 == 0 || param_1 == (int *)0x0) {
      return 0;
    }
    iVar2 = func_0x0229f06c(0x142,0);
    if (iVar2 == 0) {
      return param_1[0x13];
    }
    iVar2 = func_0x0229f13c(0x142,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8a3b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar5 = (char *)(_UNK_0217a7a0 + 0x217a6c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0217a7a4 + 0x217a6d4),param_1,0);
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
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
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
  iVar2 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a7a8 + 0x217a790));
  return iVar2;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardExtremeAdapter.GetBoard RVA 0x1b21fbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b31fbc(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  iVar2 = func_0x0229f06c(0x8a3c,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x2b];
    }
    param_1 = piVar1;
    if (iVar2 == 0 || param_1 == (int *)0x0) {
      return 0;
    }
    iVar2 = func_0x0229f06c(0x142,0);
    if (iVar2 == 0) {
      return param_1[0x13];
    }
    iVar2 = func_0x0229f13c(0x142,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8a3c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar5 = (char *)(_UNK_0217a7a0 + 0x217a6c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0217a7a4 + 0x217a6d4),param_1,0);
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
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
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
  iVar2 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a7a8 + 0x217a790));
  return iVar2;
}



// ===== FAT.ScoreBoardActivity$$OnDepthIndexUpdate RVA 0x1b2203c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3203c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar1 = func_0x0229f06c(0x8a3d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a3d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x84) = param_2;
  if ((*(int *)(param_1 + 0xac) != 0) &&
     (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0xac),0), iVar1 != 0)) {
    iVar7 = *(int *)(param_1 + 0x84);
    uVar8 = *(undefined4 *)(param_1 + 0x94);
    pcVar5 = (char *)(_UNK_020dc9ec + 0x20dc804);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020dc9f0 + 0x20dc818),iVar7,uVar8,0);
      func_0x01384978(*(undefined4 *)(_UNK_020dc9f4 + 0x20dc824));
      func_0x01384978(*(undefined4 *)(_UNK_020dc9f8 + 0x20dc830));
      func_0x01384978(*(undefined4 *)(_UNK_020dc9fc + 0x20dc83c));
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x0229f06c(0x57b,0);
    if (iVar2 == 0) {
      func_0x020da680(&uStack_38,iVar1);
      iVar2 = *(int *)(iVar1 + 0x70);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_30,iVar2,**(undefined4 **)(_UNK_020dca00 + 0x20dc8d4));
      puVar6 = *(undefined4 **)(_UNK_020dca04 + 0x20dc8ec);
      while (iVar3 = func_0x03f5f428(&uStack_30,*puVar6), iVar2 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        func_0x0210c12c(iVar2,iStack_34,iVar7 - iStack_34,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210c518(iVar2,uVar8,0);
      }
      func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020dca08 + 0x20dc94c));
      func_0x020dca14(iVar1);
    }
    else {
      iVar2 = func_0x0229f13c(0x57b,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_40 = 0;
      func_0x02179a68(iVar2,iVar1,iVar7,uVar8);
    }
    return;
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$CanCheckExtreme RVA 0x1b220c8 =====

uint FUN_01b320c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8a3e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a3e,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar2 = func_0x02c07260(*(int *)(param_1 + 0x3c),0);
    return uVar2 ^ 1;
  }
  return 1;
}



// ===== FAT.ScoreBoardActivity$$RecordCloudUnlock RVA 0x1b22138 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b32138(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01b32298 + 0x1b32158);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3229c + 0x1b32178));
    func_0x01384978(*(undefined4 *)(_UNK_01b322a0 + 0x1b32184));
    func_0x01384978(*(undefined4 *)(_UNK_01b322a4 + 0x1b32190));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a2f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a2f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218fcac(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01b3ec60(iVar1,param_2,param_3,param_4,param_5,param_6,0);
  iVar1 = **(int **)(_UNK_01b322a8 + 0x1b32238);
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b322ac + 0x1b32260));
  uVar2 = *(undefined4 *)(param_1 + 0xe8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349e128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar2,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.ScoreBoardActivity$$FAT.Merge.IExternalOutput.CanUseItem RVA 0x1b222b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b322b4(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_01b323e8 + 0x1b322d0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b323ec + 0x1b322e4));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x8a3f,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (param_2 != 0 && iVar1 != 0) {
      iVar4 = param_1[0x19];
      iVar1 = param_1[0x25];
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0245054c(iVar4,iVar1,&iStack_20,**(undefined4 **)(_UNK_01b323f0 + 0x1b32398));
      iVar1 = iStack_20;
      if ((iVar4 != 0) && (iStack_1c == 1)) {
        iVar4 = func_0x02116990(param_2,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar3 = (uint)(iVar1 == *(int *)(iVar4 + 0x10));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.ScoreBoardActivity$$FAT.Merge.IExternalOutput.TrySpawnItem RVA 0x1b223f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b323f4(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01b326e8 + 0x1b32414);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b326ec + 0x1b3242c));
    func_0x01384978(*(undefined4 *)(_UNK_01b326f0 + 0x1b32438));
    func_0x01384978(*(undefined4 *)(_UNK_01b326f4 + 0x1b32444));
    *pcVar6 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x8a40,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_3 = 0xffffffff;
    iVar1 = *param_1;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01b326f8 + 0x1b324cc)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01b32514;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01b326f8 + 0x1b324cc),0);
LAB_01b32514:
    iVar1 = (*(code *)*puVar3)(param_1,param_2,puVar3[1]);
    uVar2 = 0;
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_01b326fc + 0x1b32554));
      if (iVar1 != 0) {
        uVar2 = 0;
        iVar1 = func_0x0211b24c(iVar1,0);
        if (iVar1 != 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
            func_0x0210e2d4(0,0);
            func_0x01384bf0();
          }
          else {
            func_0x0210e2d4(param_2,0);
          }
          iVar1 = func_0x02116990(param_2,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar7 = param_1[0x2b];
          uVar10 = *(undefined4 *)(iVar1 + 0x10);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          uVar2 = 0;
          iVar1 = func_0x02139cf4(iVar7,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x020dd560(iVar1,param_2,0x14,0);
          if (iVar1 != 0) {
            iVar1 = param_1[0x19];
            iVar7 = param_1[0x25];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x0245054c(iVar1,iVar7,&uStack_30,
                                    **(undefined4 **)(_UNK_01b32700 + 0x1b32638));
            iVar8 = param_1[0x2b];
            uVar11 = uStack_2c;
            uVar2 = uStack_30;
            if (iVar1 == 0) {
              uVar11 = 1;
              uVar2 = uVar10;
            }
            param_1[0x25] = param_1[0x25] + 1;
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x02139cf4(iVar8,0);
            iVar9 = param_1[0x21];
            iVar8 = param_1[0x25];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x020dc7e4(iVar1,iVar9,iVar8,0);
            if (param_1[0xf] != 0) {
              func_0x02c06e70(param_1[0xf],0);
            }
            FUN_01b32138(param_1,iVar7,param_1[0x25],uVar2,uVar11,param_2);
            uVar2 = 1;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a40,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022365c4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ScoreBoardActivity$$get_ConfEvent RVA 0x1b22704 =====

undefined4 FUN_01b32704(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.ScoreBoardActivity$$set_ConfEvent RVA 0x1b2270c =====

void FUN_01b3270c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== FAT.ScoreBoardActivity$$get_ConfGroup RVA 0x1b22714 =====

undefined4 FUN_01b32714(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.ScoreBoardActivity$$set_ConfGroup RVA 0x1b2271c =====

void FUN_01b3271c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.ScoreBoardActivity$$get_ConfDetail RVA 0x1b22724 =====

undefined4 FUN_01b32724(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.ScoreBoardActivity$$set_ConfDetail RVA 0x1b2272c =====

void FUN_01b3272c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== FAT.ScoreBoardActivity$$RefreshConfig RVA 0x1b22734 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b32734(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(iRam01b329f4 + 0x1b32748);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b329f8 + 0x1b3275c));
    func_0x01384978(*(undefined4 *)(_UNK_01b329fc + 0x1b32768));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x8a41,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8a41,0);
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
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  func_0x01b32a00(param_1);
  uVar6 = func_0x02b4429c(param_1,0);
  iVar2 = func_0x01b41164(uVar6,0);
  *(int *)(param_1 + 0x44) = iVar2;
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x6c);
  if (iVar2 < 1) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(iVar2 + 0x2c);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar5 + 0x24);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01cf6408(iVar2,uVar6,0);
    *(int *)(param_1 + 0x6c) = iVar2;
  }
  iVar2 = func_0x01b4122c(iVar2,0);
  *(int *)(param_1 + 0x48) = iVar2;
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  if (0 < *(int *)(param_1 + 0x8c)) {
    iVar2 = *(int *)(param_1 + 0x8c);
  }
  *(int *)(param_1 + 0x8c) = iVar2;
  iVar2 = func_0x01b413bc(iVar2,0);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar2 + 0x28);
  if (0 < *(int *)(param_1 + 0x90)) {
    iVar2 = *(int *)(param_1 + 0x90);
  }
  *(int *)(param_1 + 0x90) = iVar2;
  iVar2 = func_0x01b412f4(iVar2,0);
  *(int *)(param_1 + 0x4c) = iVar2;
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 == 0) {
    func_0x01384bf0();
    iVar2 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x9c) = uRam00000054;
    if (iVar2 != 0) goto LAB_01b328cc;
    func_0x01384bf0();
    iVar2 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0xa0) = uRam0000003c;
    if (iVar2 == 0) goto LAB_01b329f0;
  }
  else {
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar2 + 0x54);
LAB_01b328cc:
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar2 + 0x3c);
  }
  uVar1 = 0;
  *(bool *)(param_1 + 0xa9) = 0 < *(int *)(iVar2 + 0x28);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if ((*(int *)(iVar2 + 0x50) != 0) && (uVar1 = 0, 0 < *(int *)(*(int *)(iVar2 + 0x50) + 0xc))) {
    uVar1 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0xa8) = uVar1;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar2 + 0xc);
  func_0x01b32bc0(param_1);
  func_0x01b33478(param_1);
  func_0x01b338b0(param_1);
  func_0x01b33aa0(param_1);
  func_0x01b33ef0(param_1);
  func_0x01b34078(param_1);
  func_0x01b340ec(param_1);
  func_0x01b34174(param_1);
  if (*(int *)(param_1 + 0x9c) < 1) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x8c) < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
      if (*(int *)(param_1 + 0xa4) < 1) {
        uVar1 = func_0x01b3439c();
      }
    }
    if (param_1 == 0) {
LAB_01b329f0:
      func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined1 *)(param_1 + 0x99) = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity$$ClearConfigCache RVA 0x1b22a00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b32a00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b32ba0 + 0x1b32a14);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b32ba4 + 0x1b32a28));
    func_0x01384978(*(undefined4 *)(_UNK_01b32ba8 + 0x1b32a34));
    func_0x01384978(*(undefined4 *)(_UNK_01b32bac + 0x1b32a40));
    func_0x01384978(*(undefined4 *)(_UNK_01b32bb0 + 0x1b32a4c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a42,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a42,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x58);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar4 + 0xc) = 0;
  iVar1 = *(int *)(param_1 + 0x5c);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x60);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar4,**(undefined4 **)(_UNK_01b32bb4 + 0x1b32b3c));
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02450550(iVar1,**(undefined4 **)(_UNK_01b32bb8 + 0x1b32b60));
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01b32bbc + 0x1b32b84));
  func_0x01b3441c(param_1);
  iVar1 = func_0x0229f06c(0x8a48,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a48,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  if (*(char *)(param_1 + 0x99) != '\0') {
    if (*(char *)(param_1 + 0xa8) != '\0') {
      if (*(char *)(param_1 + 0xa9) == '\0') {
        uVar5 = 1;
      }
      else {
        uVar5 = 3;
      }
      goto LAB_01b34520;
    }
    if (*(char *)(param_1 + 0xa9) != '\0') {
      uVar5 = 2;
      goto LAB_01b34520;
    }
  }
  uVar5 = 0;
LAB_01b34520:
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  return;
}



// ===== FAT.ScoreBoardActivity$$InitHandbookConfig RVA 0x1b22bc0 =====

/* WARNING: Possible PIC construction at 0x01b32f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b33028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b32f7c) */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01b331d4) */
/* WARNING: Removing unreachable block (ram,0x01b32f74) */
/* WARNING: Removing unreachable block (ram,0x01b33024) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b32bc0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01b33430 + 0x1b32bd8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b33434 + 0x1b32bec));
    func_0x01384978(*(undefined4 *)(_UNK_01b33438 + 0x1b32bf8));
    func_0x01384978(*(undefined4 *)(_UNK_01b3343c + 0x1b32c04));
    func_0x01384978(*(undefined4 *)(_UNK_01b33440 + 0x1b32c10));
    func_0x01384978(*(undefined4 *)(_UNK_01b33444 + 0x1b32c1c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a4f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a4f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uVar10 = func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    return uVar10;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01b33448 + 0x1b32c94));
  piVar13 = *(int **)(_UNK_01b3344c + 0x1b32cac);
  piVar11 = *(int **)(_UNK_01b33450 + 0x1b32cb4);
  puVar12 = *(undefined4 **)(_UNK_01b33454 + 0x1b32cbc);
LAB_01b32cb8:
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar13) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01b32d14;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar13,0);
LAB_01b32d14:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01b32d88;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01b32d88:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01db1884(iVar1,uVar10,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar5 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01b33458 + 0x1b32df8));
      do {
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar5;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar13) {
              puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto LAB_01b32e60;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar5,*piVar13,0);
LAB_01b32e60:
        iVar1 = (*(code *)*puVar3)(piVar5,puVar3[1]);
        if (iVar1 == 0) goto LAB_01b32ef8;
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar5;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar11) {
              puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto LAB_01b32ed4;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar5,*piVar11,0);
LAB_01b32ed4:
        uVar10 = (*(code *)*puVar3)(piVar5,puVar3[1]);
        func_0x02f622a4(*(undefined4 *)(param_1 + 0x54),uVar10,*puVar12);
      } while( true );
    }
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01b33464 + 0x1b32fc4)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01b3300c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b33464 + 0x1b32fc4),0);
LAB_01b3300c:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01b33468 + 0x1b33058));
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar13) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01b330c0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar13,0);
LAB_01b330c0:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) goto LAB_01b33158;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01b33134;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01b33134:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    func_0x02f622a4(*(undefined4 *)(param_1 + 0x58),uVar10,*puVar12);
  } while( true );
LAB_01b32ef8:
  if (piVar5 != (int *)0x0) {
    iVar1 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01b3345c + 0x1b32f14)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01b32f5c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01b3345c + 0x1b32f14),0);
LAB_01b32f5c:
    (*(code *)*puVar3)(piVar5,puVar3[1]);
  }
  goto LAB_01b32cb8;
LAB_01b33158:
  uVar10 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01b33470 + 0x1b33174)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
          goto LAB_01b331bc;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b33470 + 0x1b33174),0);
LAB_01b331bc:
    uVar10 = (*(code *)*puVar12)(piVar2,puVar12[1]);
  }
  return uVar10;
}



// ===== FAT.ScoreBoardActivity$$InitBoardRowConfig RVA 0x1b23478 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b33478(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01b33878 + 0x1b33490);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3387c + 0x1b334a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b33880 + 0x1b334b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b33884 + 0x1b334bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b33888 + 0x1b334c8));
    func_0x01384978(*(undefined4 *)(_UNK_01b3388c + 0x1b334d4));
    func_0x01384978(*(undefined4 *)(_UNK_01b33890 + 0x1b334e0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a50,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a50,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    uVar9 = func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    return uVar9;
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01b33894 + 0x1b33558));
LAB_01b33564:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01b338a4 + 0x1b33580)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01b335c8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b338a4 + 0x1b33580),0);
LAB_01b335c8:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01b33898 + 0x1b335fc)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01b33644;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b33898 + 0x1b335fc),0);
LAB_01b33644:
      uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      iVar1 = func_0x01b41444(uVar9,0);
      if (iVar1 != 0) {
        iVar8 = *(int *)(param_1 + 0x5c);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar8 + 8);
        uVar4 = *(uint *)(iVar8 + 0xc);
        piVar5 = *(int **)(_UNK_01b3389c + 0x1b3369c);
        *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
        iVar10 = *piVar5;
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        if (uVar4 < *(uint *)(iVar11 + 0xc)) {
          *(uint *)(iVar8 + 0xc) = uVar4 + 1;
          *(undefined4 *)(iVar11 + uVar4 * 4 + 0x10) = uVar9;
        }
        else {
          func_0x0325970c(iVar8,uVar9,
                          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
        }
        uVar6 = *(undefined4 *)(iVar1 + 0x18);
        iVar1 = *(int *)(param_1 + 0x60);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x024505a4(iVar1,uVar9,uVar6,**(undefined4 **)(_UNK_01b338a0 + 0x1b33700));
      }
      goto LAB_01b33564;
    }
    uVar9 = 0;
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01b338a8 + 0x1b33730)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01b33778;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b338a8 + 0x1b33730),0);
LAB_01b33778:
      uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return uVar9;
}



// ===== FAT.ScoreBoardActivity$$InitCloudConfig RVA 0x1b238b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b338b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01b33a78 + 0x1b338c8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b33a7c + 0x1b338dc));
    func_0x01384978(*(undefined4 *)(_UNK_01b33a80 + 0x1b338e8));
    func_0x01384978(*(undefined4 *)(_UNK_01b33a84 + 0x1b338f4));
    func_0x01384978(*(undefined4 *)(_UNK_01b33a88 + 0x1b33900));
    func_0x01384978(*(undefined4 *)(_UNK_01b33a8c + 0x1b3390c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a51,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a51,0);
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
    func_0x0245495c(iVar4,uVar5,&iStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    iVar4 = 0;
    puVar7 = *(undefined4 **)(_UNK_01b33a90 + 0x1b33980);
    piVar8 = *(int **)(_UNK_01b33a94 + 0x1b33988);
    puVar9 = *(undefined4 **)(_UNK_01b33a98 + 0x1b33990);
    while( true ) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar4) break;
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x03653d1c(iVar1,iVar4,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&iStack_30,uVar5,0);
      uVar5 = uStack_2c;
      iVar1 = iStack_30;
      if (0 < iStack_30) {
        iVar6 = *(int *)(param_1 + 100);
        uStack_2c = 0;
        iStack_30 = 0;
        func_0x038fd264(&iStack_30,iVar1,uVar5,**(undefined4 **)(_UNK_01b33a9c + 0x1b33a2c));
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = *puVar9;
        func_0x02450554(iVar6,iVar4,iStack_30,uStack_2c);
      }
      iVar1 = *(int *)(param_1 + 0x48);
      iVar4 = iVar4 + 1;
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$InitMergeScoreConfig RVA 0x1b23aa0 =====

/* WARNING: Removing unreachable block (ram,0x01b33dcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b33aa0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01b33eac + 0x1b33ab8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b33eb0 + 0x1b33acc));
    func_0x01384978(*(undefined4 *)(_UNK_01b33eb4 + 0x1b33ad8));
    func_0x01384978(*(undefined4 *)(_UNK_01b33eb8 + 0x1b33ae4));
    func_0x01384978(*(undefined4 *)(_UNK_01b33ebc + 0x1b33af0));
    func_0x01384978(*(undefined4 *)(_UNK_01b33ec0 + 0x1b33afc));
    func_0x01384978(*(undefined4 *)(_UNK_01b33ec4 + 0x1b33b08));
    func_0x01384978(*(undefined4 *)(_UNK_01b33ec8 + 0x1b33b14));
    func_0x01384978(*(undefined4 *)(_UNK_01b33ecc + 0x1b33b20));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a52,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a52,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    return;
  }
  iVar1 = func_0x01b4150c(0);
  if (iVar1 != 0) {
    piVar2 = (int *)func_0x034658b4(iVar1,**(undefined4 **)(_UNK_01b33ed0 + 0x1b33b8c));
    piVar12 = *(int **)(_UNK_01b33ed4 + 0x1b33ba0);
LAB_01b33b9c:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar12) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01b33bf8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01b33bf8:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01b33ed8 + 0x1b33c2c)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01b33c74;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b33ed8 + 0x1b33c2c),0);
LAB_01b33c74:
      (*(code *)*puVar3)(&uStack_30,piVar2,puVar3[1]);
      iVar1 = iStack_2c;
      if ((((iStack_2c != 0) && (iVar8 = *(int *)(iStack_2c + 0x10), 0 < iVar8)) &&
          (*(int *)(iStack_2c + 0x18) == *(int *)(param_1 + 0x8c))) &&
         (0 < *(int *)(iStack_2c + 0x1c))) {
        iVar10 = *(int *)(param_1 + 0x68);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x02450d40(iVar10,iVar8,**(undefined4 **)(_UNK_01b33edc + 0x1b33cd8));
        uVar13 = *(undefined4 *)(iVar1 + 0x10);
        uVar11 = *(undefined4 *)(iVar1 + 0x18);
        uVar6 = *(undefined4 *)(iVar1 + 0x1c);
        iVar1 = *(int *)(param_1 + 0x68);
        uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01b33ee0 + 0x1b33d00));
        uStack_38 = 0;
        func_0x02afb484(uVar9,uVar13,uVar11,uVar6);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x024505a4(iVar1,uVar13,uVar9,**(undefined4 **)(_UNK_01b33ee4 + 0x1b33d3c));
      }
      goto LAB_01b33b9c;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_01b33ee8 + 0x1b33d6c)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
            goto LAB_01b33db4;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b33ee8 + 0x1b33d6c),0);
LAB_01b33db4:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$ValidateMilestoneConfig RVA 0x1b23ef0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b33ef0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar3 = (char *)(_UNK_01b34068 + 0x1b33f04);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3406c + 0x1b33f18));
    func_0x01384978(*(undefined4 *)(_UNK_01b34070 + 0x1b33f24));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a54,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a54,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    iVar4 = 0;
    puVar6 = *(undefined4 **)(_UNK_01b34074 + 0x1b33f8c);
    while( true ) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar4) break;
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0364c9b8(iVar1,iVar4,*puVar6);
      func_0x01b41598(uVar5,0);
      iVar1 = *(int *)(param_1 + 0x48);
      iVar4 = iVar4 + 1;
    }
    iVar1 = 0;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0x48);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x48);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar4 + 0xc) <= iVar1) break;
      iVar4 = *(int *)(param_1 + 0x48);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x48);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0364c9b8(iVar4,iVar1,*puVar6);
      func_0x01b41598(uVar5,0);
      iVar1 = iVar1 + 1;
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$RefreshCurrentMilestoneScoreNeed RVA 0x1b24078 =====

void FUN_01b34078(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x60b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x60b,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = FUN_01b30180(param_1);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x28);
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  return;
}



// ===== FAT.ScoreBoardActivity$$MarkMilestoneFinishPendingIfNeed RVA 0x1b240ec =====

void FUN_01b340ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x60c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x60c,0);
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
  if (*(char *)(param_1 + 0x98) == '\0') {
    if (((*(int *)(param_1 + 0x44) != 0) && (*(char *)(*(int *)(param_1 + 0x44) + 0x38) == '\x01'))
       && (iVar1 = func_0x01b39dac(param_1), iVar1 != 0)) {
      *(undefined1 *)(param_1 + 0x98) = 1;
    }
    return;
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$RefreshTheme RVA 0x1b24174 =====

void FUN_01b34174(int *param_1)

{
  int iVar1;
  int iStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int iStack_28;
  int iStack_20;
  int iStack_1c;
  
  uStack_30 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x8a55,0);
  if (iVar1 == 0) {
    if (param_1[0x11] != 0) {
      iStack_20 = param_1[0x47];
      iStack_1c = param_1[0x48];
      func_0x02b64540(&iStack_20,*(undefined4 *)(param_1[0x11] + 0x40),0);
      iVar1 = param_1[0x11];
      iStack_20 = param_1[0x49];
      iStack_1c = param_1[0x4a];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x44),0);
      iStack_20 = param_1[0x4b];
      iStack_1c = param_1[0x4c];
      iVar1 = param_1[0x11];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x30),0);
      iVar1 = param_1[0x11];
      iStack_20 = param_1[0x4d];
      iStack_1c = param_1[0x4e];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x3c),0);
      (**(code **)(*param_1 + 0x128))(&iStack_38,param_1,*(undefined4 *)(*param_1 + 300));
      iVar1 = param_1[0x11];
      iStack_1c = uStack_34;
      iStack_20 = iStack_38;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x34),0);
      iVar1 = param_1[0x11];
      uStack_30 = *(undefined8 *)(param_1 + 0x53);
      iStack_28 = param_1[0x55];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x48),param_1,0,0,0);
      iVar1 = param_1[0x11];
      uStack_30 = *(undefined8 *)(param_1 + 0x56);
      iStack_28 = param_1[0x58];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x20),param_1,0,0,0);
      iVar1 = param_1[0x11];
      uStack_30 = *(undefined8 *)(param_1 + 0x59);
      iStack_28 = param_1[0x5b];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x28),param_1,0,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a55,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$IsMilestoneFinishPendingValid RVA 0x1b2439c =====

uint FUN_01b3439c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
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
  
  iVar1 = func_0x0229f06c(0x8a35,0);
  if (iVar1 == 0) {
    bVar6 = *(char *)(param_1 + 0x98) != '\0';
    iVar1 = 0;
    if (bVar6) {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    if ((!bVar6 || iVar1 == 0) || (*(char *)(iVar1 + 0x38) == '\0')) {
      return 0;
    }
    uVar2 = 0;
    iVar1 = func_0x0229f06c(0x60e,0);
    if (iVar1 == 0) {
      iVar4 = *(int *)(param_1 + 0x78);
      bVar6 = SBORROW4(iVar4,1);
      iVar1 = iVar4 + -1;
      if (0 < iVar4) {
        bVar6 = SBORROW4(*(int *)(param_1 + 0x70),iVar4);
        iVar1 = *(int *)(param_1 + 0x70) - iVar4;
      }
      if (iVar1 < 0 == bVar6) {
        uVar2 = FUN_01b30020(param_1);
        uVar2 = uVar2 ^ 1;
      }
      return uVar2;
    }
    iVar1 = func_0x0229f13c(0x60e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a35,0);
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
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.ScoreBoardActivity$$RefreshOutputType RVA 0x1b2441c =====

void FUN_01b3441c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar3 = 0;
  iVar1 = func_0x0229f06c(0x8a46,0);
  if (iVar1 != 0) {
    iVar3 = func_0x0229f13c(0x8a46,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar1 = *(int *)(iVar3 + 8);
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar1,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x99) != '\0') {
    iVar3 = (uint)(0 < *(int *)(param_1 + 0x9c)) << 1;
  }
  *(int *)(param_1 + 0xcc) = iVar3;
  return;
}



// ===== FAT.ScoreBoardActivity$$RefreshOutputMethod RVA 0x1b24494 =====

void FUN_01b34494(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a48,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a48,0);
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
  if (*(char *)(param_1 + 0x99) != '\0') {
    if (*(char *)(param_1 + 0xa8) != '\0') {
      if (*(char *)(param_1 + 0xa9) == '\0') {
        uVar4 = 1;
      }
      else {
        uVar4 = 3;
      }
      goto LAB_01b34520;
    }
    if (*(char *)(param_1 + 0xa9) != '\0') {
      uVar4 = 2;
      goto LAB_01b34520;
    }
  }
  uVar4 = 0;
LAB_01b34520:
  *(undefined4 *)(param_1 + 0xd0) = uVar4;
  return;
}



// ===== FAT.ScoreBoardActivity$$InitRuntimeAfterConfig RVA 0x1b24528 =====

void FUN_01b34528(int param_1,undefined4 param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8a5d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a5d,0);
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
    func_0x01485228(&uStack_38,param_2,0);
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
  FUN_01b3441c(param_1);
  FUN_01b34494(param_1);
  func_0x01b345bc(param_1,param_2);
  func_0x01b347e0(param_1);
  FUN_01b314b4(param_1);
  FUN_01b3158c(param_1);
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x60b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x60b,0);
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
  iVar1 = FUN_01b30180(param_1);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x28);
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  return;
}



// ===== FAT.ScoreBoardActivity$$InitHandbookAgent RVA 0x1b245bc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b345bc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
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
  undefined4 uStack_24;
  
  pcVar4 = (char *)(iRam01b347b8 + 0x1b345d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b347bc + 0x1b345ec));
    func_0x01384978(*(undefined4 *)(_UNK_01b347c0 + 0x1b345f8));
    func_0x01384978(*(undefined4 *)(_UNK_01b347c4 + 0x1b34604));
    func_0x01384978(*(undefined4 *)(_UNK_01b347c8 + 0x1b34610));
    func_0x01384978(*(undefined4 *)(_UNK_01b347cc + 0x1b3461c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a5e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a5e,0);
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
    func_0x01485228(&uStack_38,param_2,0);
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
    return;
  }
  func_0x01b36d50(param_1);
  bVar10 = *(char *)(param_1 + 0x99) != '\0';
  iVar1 = 0;
  if (bVar10) {
    iVar1 = *(int *)(param_1 + 0x48);
  }
  if (bVar10 && iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar3 = *(int *)(param_1 + 0x48);
      iVar1 = iVar3;
      if (iVar3 == 0) {
        func_0x01384bf0();
        iVar1 = *(int *)(param_1 + 0x48);
        if (iVar1 == 0) {
          func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      uVar5 = *(undefined4 *)(iVar1 + 0x34);
      uVar2 = *(undefined4 *)(iVar3 + 0x30);
      if (*(int *)(**(int **)(_UNK_01b347d0 + 0x1b346dc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar7 = 0;
      uVar5 = func_0x02565b6c(uVar5,0);
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b347d4 + 0x1b34714));
      uStack_24 = 0;
      uStack_28 = uVar5;
      func_0x02bf5bd8(iVar1,param_1,uVar2,param_2);
      *(int *)(param_1 + 0xbc) = iVar1;
      if (*(int *)(param_1 + 0x44) != 0) {
        uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x30);
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02bf661c(iVar1,uVar7,0);
      iVar1 = *(int *)(param_1 + 0xbc);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b347d8 + 0x1b3476c));
      func_0x024501dc(uVar5,param_1,**(undefined4 **)(_UNK_01b347dc + 0x1b34788),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar4 = (char *)(_UNK_02bf5264 + 0x2bf51d8);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02bf5268 + 0x2bf51ec),uVar5,0);
        *pcVar4 = '\x01';
      }
      piVar8 = (int *)(iVar1 + 0x40);
      puVar9 = *(undefined4 **)(_UNK_02bf526c + 0x2bf5204);
      iVar1 = *piVar8;
      do {
        iVar6 = 0;
        iVar3 = func_0x0487907c(iVar1,uVar5,0);
        if (iVar3 != 0) {
          uVar2 = *puVar9;
          iVar6 = func_0x01384ab8(iVar3,uVar2);
          if (iVar6 == 0) {
            func_0x01384fb4(iVar3,uVar2);
            iVar6 = 0;
          }
        }
        iVar3 = func_0x0138b0ec(piVar8,iVar6,iVar1);
        bVar10 = iVar1 != iVar3;
        iVar1 = iVar3;
      } while (bVar10);
      return;
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$InitTokenOutput RVA 0x1b247e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b347e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
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
  
  pcVar4 = (char *)(_UNK_01b34a50 + 0x1b347f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b34a54 + 0x1b3480c));
    func_0x01384978(*(undefined4 *)(_UNK_01b34a58 + 0x1b34818));
    func_0x01384978(*(undefined4 *)(_UNK_01b34a5c + 0x1b34824));
    func_0x01384978(*(undefined4 *)(_UNK_01b34a60 + 0x1b34830));
    func_0x01384978(*(undefined4 *)(_UNK_01b34a64 + 0x1b3483c));
    func_0x01384978(*(undefined4 *)(_UNK_01b34a68 + 0x1b34848));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a61,0);
  if (iVar1 == 0) {
    FUN_01b3441c(param_1);
    FUN_01b34494(param_1);
    iVar1 = func_0x01b3a594(param_1);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x108) == 0) {
        uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01b34a6c + 0x1b348d0));
        func_0x0215d080(uVar8,param_1,0);
        *(undefined4 *)(param_1 + 0x108) = uVar8;
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar8 = *(undefined4 *)(param_1 + 0x108);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbb930(iVar1,uVar8,0);
    }
    iVar1 = func_0x01b3a530(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x10c);
      if (iVar1 == 0) {
        iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b34a70 + 0x1b3494c));
        func_0x02afb3e0(iVar1,0);
        *(int *)(param_1 + 0x10c) = iVar1;
      }
      iVar5 = *(int *)(param_1 + 0x48);
      uVar3 = *(undefined4 *)(param_1 + 0x80);
      uVar8 = *(undefined4 *)(param_1 + 0x9c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      piVar9 = *(int **)(_UNK_01b34a74 + 0x1b34984);
      uVar7 = *(undefined4 *)(iVar5 + 0x28);
      iVar5 = *piVar9;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
        iVar5 = *piVar9;
      }
      uVar10 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x398);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_40 = **(undefined4 **)(_UNK_01b34a78 + 0x1b349c8);
      uStack_3c = 1;
      uStack_34 = 6;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_48 = uVar7;
      uStack_44 = uVar10;
      func_0x02af6c48(iVar1,uVar3,param_1,uVar8);
    }
    if (*(int *)(param_1 + 0x110) == 0) {
      uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01b34a7c + 0x1b34a18));
      func_0x02450578(uVar8,**(undefined4 **)(_UNK_01b34a80 + 0x1b34a2c));
      *(undefined4 *)(param_1 + 0x110) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
    pcVar4 = (char *)(_UNK_01b3c530 + 0x1b3c420);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b3c534 + 0x1b3c434));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x8a63,0);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0x48) == 0) ||
         (iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x1c), iVar1 < 1)) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0x118);
      if (iVar5 == 0) {
        iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b3c538 + 0x1b3c4b0));
        func_0x02bf44e8(iVar5,0);
        *(int *)(param_1 + 0x118) = iVar5;
        if (iVar5 == 0) {
          func_0x01384bf0();
          iVar5 = 0;
        }
      }
      func_0x02befbb0(iVar5,iVar1,param_1,0);
      iVar1 = *(int *)(param_1 + 0x118);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02bf02d0(iVar1,0);
      uVar8 = *(undefined4 *)(param_1 + 0x80);
      iVar1 = *(int *)(param_1 + 0x118);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar4 = (char *)(_UNK_02befe10 + 0x2befcf4);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08),uVar8,0);
        *pcVar4 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x5ca,0);
      if (iVar5 != 0) {
        iVar5 = func_0x0229f13c(0x5ca,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar8,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar5 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,uVar8,0);
        iVar6 = *(int *)(iVar5 + 8);
        uVar8 = *(undefined4 *)(iVar5 + 0xc);
        iVar1 = *(int *)(iVar5 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar3 = 3;
        if (iVar1 == 0) {
          uVar3 = 2;
        }
        func_0x0245495c(iVar6,uVar8,&uStack_38,uVar3,0,0);
        return;
      }
      iVar5 = func_0x02beec64(iVar1);
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar1 + 8);
        uVar11 = *(uint *)(iVar1 + 0x14);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x14);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar1 + 0x14);
        iVar5 = *(int *)(iVar5 + 0xc);
        if (iVar6 + 1 < iVar5) {
          do {
            iVar6 = iVar6 + 1;
            iVar2 = func_0x02befe18(iVar1,iVar6,uVar8);
            if (iVar2 == 0) {
              iVar6 = *(int *)(iVar1 + 0x14);
              break;
            }
            *(int *)(iVar1 + 0x14) = iVar6;
          } while (iVar5 + -1 != iVar6);
        }
        if ((int)uVar11 < iVar6) {
          iVar5 = *(int *)(iVar1 + 0x20);
          if (0x7fffffff < (*(uint *)(iVar1 + 0x10) & uVar11)) {
            *(int *)(iVar1 + 0x10) = iVar6;
          }
          if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02befe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x14));
            return;
          }
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x8a63,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a61,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar5,uVar8,&uStack_30,uVar3);
  return;
}



// ===== FAT.ScoreBoardActivity$$get_BoardSkinId RVA 0x1b24a84 =====

undefined4 FUN_01b34a84(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8a64,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a64,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x14);
  }
  return uVar3;
}



// ===== FAT.ScoreBoardActivity$$get_MainCategoryId RVA 0x1b24ae8 =====

undefined4 FUN_01b34ae8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8a65,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a65,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x38);
  }
  return uVar3;
}



// ===== FAT.ScoreBoardActivity$$get_Valid RVA 0x1b24b4c =====

undefined4 FUN_01b34b4c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  iVar1 = func_0x0229f06c(0x8a66,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a66,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
  uVar5 = 0;
  if ((iVar1 != 0) && (uVar5 = 0, *(char *)(param_1 + 0x99) != '\0')) {
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FAT.ScoreBoardActivity$$.ctor RVA 0x1b24bdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b34bdc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  pcVar6 = (char *)(_UNK_01b3514c + 0x1b34bf8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b35150 + 0x1b34c0c));
    func_0x01384978(*(undefined4 *)(_UNK_01b35154 + 0x1b34c18));
    func_0x01384978(*(undefined4 *)(_UNK_01b35158 + 0x1b34c24));
    func_0x01384978(*(undefined4 *)(_UNK_01b3515c + 0x1b34c30));
    func_0x01384978(*(undefined4 *)(_UNK_01b35160 + 0x1b34c3c));
    func_0x01384978(*(undefined4 *)(_UNK_01b35164 + 0x1b34c48));
    func_0x01384978(*(undefined4 *)(_UNK_01b35168 + 0x1b34c54));
    func_0x01384978(*(undefined4 *)(_UNK_01b3516c + 0x1b34c60));
    func_0x01384978(*(undefined4 *)(_UNK_01b35170 + 0x1b34c6c));
    func_0x01384978(*(undefined4 *)(_UNK_01b35174 + 0x1b34c78));
    func_0x01384978(*(undefined4 *)(_UNK_01b35178 + 0x1b34c84));
    func_0x01384978(*(undefined4 *)(_UNK_01b3517c + 0x1b34c90));
    func_0x01384978(*(undefined4 *)(_UNK_01b35180 + 0x1b34c9c));
    func_0x01384978(*(undefined4 *)(_UNK_01b35184 + 0x1b34ca8));
    func_0x01384978(*(undefined4 *)(_UNK_01b35188 + 0x1b34cb4));
    func_0x01384978(*(undefined4 *)(_UNK_01b3518c + 0x1b34cc0));
    func_0x01384978(*(undefined4 *)(_UNK_01b35190 + 0x1b34ccc));
    func_0x01384978(*(undefined4 *)(_UNK_01b35194 + 0x1b34cd8));
    func_0x01384978(*(undefined4 *)(_UNK_01b35198 + 0x1b34ce4));
    func_0x01384978(*(undefined4 *)(_UNK_01b3519c + 0x1b34cf0));
    *pcVar6 = '\x01';
  }
  puVar8 = *(undefined4 **)(_UNK_01b351a0 + 0x1b34d2c);
  uVar1 = func_0x01384be4(*puVar8);
  puVar9 = *(undefined4 **)(_UNK_01b351a4 + 0x1b34d40);
  func_0x03258eb8(uVar1,*puVar9);
  uVar2 = *puVar8;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03258eb8(uVar1,*puVar9);
  uVar2 = *puVar8;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03258eb8(uVar1,*puVar9);
  puVar3 = *(undefined4 **)(_UNK_01b351a8 + 0x1b34d80);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01b351ac + 0x1b34d98));
  puVar3 = *(undefined4 **)(_UNK_01b351b0 + 0x1b34dac);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x02450570(uVar1,**(undefined4 **)(_UNK_01b351b4 + 0x1b34dc4));
  puVar3 = *(undefined4 **)(_UNK_01b351b8 + 0x1b34dd8);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01b351bc + 0x1b34df0));
  puVar3 = *(undefined4 **)(_UNK_01b351c0 + 0x1b34e04);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01b351c4 + 0x1b34e1c));
  puVar3 = *(undefined4 **)(_UNK_01b351c8 + 0x1b34e30);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  puVar7 = *(undefined4 **)(_UNK_01b351cc + 0x1b34e48);
  func_0x0328e950(uVar1,*puVar7);
  uVar2 = *puVar8;
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03258eb8(uVar1,*puVar9);
  uVar2 = *puVar3;
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x0328e950(uVar1,*puVar7);
  puVar3 = *(undefined4 **)(_UNK_01b351d0 + 0x1b34e88);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x01b3e290(uVar1,0);
  puVar3 = *(undefined4 **)(_UNK_01b351d4 + 0x1b34eac);
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x01b3e644(uVar1,0);
  puVar3 = *(undefined4 **)(_UNK_01b351d8 + 0x1b34ecc);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x01b3ebd4(uVar1,0);
  puVar3 = *(undefined4 **)(_UNK_01b351dc + 0x1b34eec);
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x01b3ed8c(uVar1,0);
  puVar3 = *(undefined4 **)(_UNK_01b351e0 + 0x1b34f0c);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x01b3eeb4(uVar1,0);
  puVar3 = *(undefined4 **)(_UNK_01b351e4 + 0x1b34f2c);
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x035d0240(uVar1,**(undefined4 **)(_UNK_01b351e8 + 0x1b34f44));
  piVar10 = *(int **)(_UNK_01b351ec + 0x1b34f5c);
  iVar4 = *piVar10;
  iVar5 = *(int *)(iVar4 + 0x74);
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  if (iVar5 == 0) {
    func_0x01384ab4();
    iVar4 = *piVar10;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  func_0x02b644a0(&uStack_30,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xb5c),0);
  *(undefined4 *)(param_1 + 0x11c) = uStack_30;
  *(undefined4 *)(param_1 + 0x120) = uStack_2c;
  uStack_34 = 0;
  uStack_38 = 0;
  func_0x02b644a0(&uStack_38,*(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xb68),0);
  *(undefined4 *)(param_1 + 0x124) = uStack_38;
  *(undefined4 *)(param_1 + 0x128) = uStack_34;
  uStack_3c = 0;
  uStack_40 = 0;
  func_0x02b644a0(&uStack_40,*(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xb70),0);
  *(undefined4 *)(param_1 + 300) = uStack_40;
  *(undefined4 *)(param_1 + 0x130) = uStack_3c;
  uStack_44 = 0;
  uStack_48 = 0;
  func_0x02b644a0(&uStack_48,*(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xb6c),0);
  *(undefined4 *)(param_1 + 0x134) = uStack_48;
  *(undefined4 *)(param_1 + 0x138) = uStack_44;
  uStack_4c = 0;
  uStack_50 = 0;
  func_0x02b644a0(&uStack_50,*(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xb7c),0);
  *(undefined4 *)(param_1 + 0x13c) = uStack_50;
  *(undefined4 *)(param_1 + 0x140) = uStack_4c;
  uStack_54 = 0;
  uStack_58 = 0;
  func_0x02b644a0(&uStack_58,*(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xb74),0);
  *(undefined4 *)(param_1 + 0x144) = uStack_58;
  *(undefined4 *)(param_1 + 0x148) = uStack_54;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x02b64854(&uStack_68,*(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xb60),0);
  iVar4 = *piVar10;
  *(undefined4 *)(param_1 + 0x154) = uStack_60;
  *(ulonglong *)(param_1 + 0x14c) = CONCAT44(uStack_64,uStack_68);
  uStack_74 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x02b64854(&uStack_78,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xb64),0);
  iVar4 = *piVar10;
  *(undefined4 *)(param_1 + 0x160) = uStack_70;
  *(ulonglong *)(param_1 + 0x158) = CONCAT44(uStack_74,uStack_78);
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  func_0x02b64854(&uStack_88,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xb78),0);
  *(undefined4 *)(param_1 + 0x16c) = uStack_80;
  *(ulonglong *)(param_1 + 0x164) = CONCAT44(uStack_84,uStack_88);
  func_0x02b4dc04(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  FUN_01b32734(param_1);
  return;
}



// ===== FAT.ScoreBoardActivity$$SetupFresh RVA 0x1b251f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b351f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  pcVar3 = (char *)(_UNK_01b353a0 + 0x1b35208);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b353a4 + 0x1b3521c));
    func_0x01384978(*(undefined4 *)(_UNK_01b353a8 + 0x1b35228));
    func_0x01384978(*(undefined4 *)(_UNK_01b353ac + 0x1b35234));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a67,0);
  if (iVar1 == 0) {
    func_0x01b353b8(param_1);
    FUN_01b32734(param_1);
    if (*(char *)(param_1 + 0x99) != '\0') {
      FUN_01b31120(param_1,*(undefined4 *)(param_1 + 0x8c),1);
      uVar5 = 0;
      if ((*(int *)(param_1 + 0xac) != 0) &&
         (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0xac),0), iVar1 != 0)) {
        func_0x020da680(&uStack_20,iVar1,0);
        uVar5 = uStack_1c;
        uStack_1c = 0;
        uStack_20 = 0;
        func_0x03507d38(&uStack_20,uVar5,**(undefined4 **)(_UNK_01b353b0 + 0x1b352f4));
        uVar5 = uStack_1c;
      }
      *(undefined4 *)(param_1 + 0x84) = uVar5;
      if ((*(int *)(param_1 + 0xac) != 0) &&
         (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0xac),0), iVar1 != 0)) {
        func_0x020dc7e4(iVar1,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x94),0);
      }
    }
    FUN_01b34528(param_1,1);
    uVar5 = *(undefined4 *)(param_1 + 0x9c);
    if (*(int *)(param_1 + 0x48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x2c);
    }
    piVar6 = *(int **)(_UNK_01b353b4 + 0x1b35364);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    func_0x01b35444(param_1,uVar5,uVar2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x394));
    func_0x01b3552c(param_1);
    return;
  }
  iVar1 = func_0x0229f13c(0x8a67,0);
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
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.ScoreBoardActivity$$ResetSaveState RVA 0x1b253b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b353b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  iVar1 = func_0x0229f06c(0x8a68,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0xaa) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4)
    ;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8)
    ;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc)
    ;
    *(undefined4 *)(param_1 + 0x79) = 0;
    *(undefined4 *)(param_1 + 0x7d) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4)
    ;
    *(undefined4 *)(param_1 + 0x81) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8)
    ;
    *(undefined4 *)(param_1 + 0x85) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc)
    ;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x95) = 0;
    *(undefined4 *)(param_1 + 0x91) = 0;
    func_0x01b36944(param_1);
    pcVar3 = (char *)(_UNK_01b36b28 + 0x1b369fc);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b36b2c + 0x1b36a10));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x8a69,0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0;
      iVar1 = *(int *)(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xdc) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)(param_1 + 0xe0) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)(param_1 + 0xe4) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01b3e22c(iVar1,0);
      iVar1 = *(int *)(param_1 + 0xf4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01b3e568(iVar1,0);
      iVar1 = *(int *)(param_1 + 0xf8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01b3eaf4(iVar1,0);
      iVar1 = *(int *)(param_1 + 0xfc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01b3ed28(iVar1,0);
      iVar1 = *(int *)(param_1 + 0x100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01b3ee58(iVar1,0);
      iVar1 = *(int *)(param_1 + 0x104);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 0x14);
      if (iVar4 != 0) {
        iVar5 = *(int *)(iVar1 + 0xc);
        if (iVar5 < *(int *)(iVar1 + 0x10)) {
          uVar6 = *(undefined4 *)(iVar1 + 8);
        }
        else {
          iVar7 = *(int *)(iVar1 + 8);
          iVar4 = iVar5;
          if (iVar7 == 0) {
            func_0x02457d50(iVar5,**(undefined4 **)(_UNK_01b36b30 + 0x1b36b1c));
            iVar4 = *(int *)(iVar1 + 0xc);
          }
          func_0x0484e5ec(iVar7,iVar5,*(int *)(iVar7 + 0xc) - iVar4,0);
          uVar6 = *(undefined4 *)(iVar1 + 8);
          iVar5 = 0;
          iVar4 = *(int *)(iVar1 + 0x10);
        }
        func_0x0484e5ec(uVar6,iVar5,iVar4,0);
        *(undefined4 *)(iVar1 + 0x14) = 0;
      }
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
      return;
    }
    iVar1 = func_0x0229f13c(0x8a69,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a68,0);
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
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.ScoreBoardActivity$$TryAddToken RVA 0x1b25444 =====

undefined4 FUN_01b35444(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
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
  undefined4 uStack_24;
  
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x5e8,0);
  if (iVar1 == 0) {
    if (((*(char *)(param_1 + 0x99) != '\0') && (0 < param_3)) &&
       (*(char *)(param_1 + 0x98) == '\0')) {
      if (*(int *)(param_1 + 0x9c) == param_2) {
        func_0x01b3b7f4(param_1,param_3,param_4);
        uVar6 = 1;
      }
      else if ((*(int *)(param_1 + 0x48) != 0) &&
              (*(int *)(*(int *)(param_1 + 0x48) + 0x3c) == param_2)) {
        iVar1 = func_0x0229f06c(0x5ef,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0x5ef,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,param_3,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar1 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
          }
          func_0x01485278(&uStack_38,param_1,0);
          func_0x01485238(&uStack_38,param_3,0);
          iVar5 = *(int *)(iVar1 + 8);
          uVar6 = *(undefined4 *)(iVar1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar3 = 3;
          if (iVar1 == 0) {
            uVar3 = 2;
          }
          func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
          uVar6 = func_0x0245496c(&uStack_38,0,0);
          return uVar6;
        }
        uVar6 = 0;
        iVar1 = func_0x0229f06c(0x5f0,0);
        if (iVar1 == 0) {
          if (((0 < param_3) && (*(char *)(param_1 + 0x99) != '\0')) &&
             (0 < *(int *)(param_1 + 0xa4))) {
            iVar1 = *(int *)(param_1 + 0xf8);
            uVar8 = *(undefined4 *)(param_1 + 0x70);
            uVar3 = *(undefined4 *)(param_1 + 0x74);
            uVar6 = *(undefined4 *)(param_1 + 0x7c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_2c = 0;
            uStack_28 = 0;
            uStack_30 = uVar6;
            func_0x01b3e920(iVar1,param_3,uVar8,uVar3);
            iVar1 = func_0x01b37f74(param_1);
            iVar5 = 0;
            while (0 < param_3) {
              while( true ) {
                iVar5 = iVar5 + 1;
                iVar7 = *(int *)(param_1 + 0x7c);
                iVar4 = *(int *)(param_1 + 0xa4) - iVar7;
                if (0 < iVar4) break;
                iVar4 = FUN_01b30180(param_1);
                if (((iVar4 == 0) || (*(int *)(iVar4 + 0x28) < 1)) || (iVar1 < iVar5))
                goto LAB_01b37f5c;
                uVar6 = func_0x01b38028(param_1,iVar4,*(undefined4 *)(param_1 + 0x7c),
                                        *(undefined4 *)(param_1 + 0xa4));
                *(undefined4 *)(param_1 + 0x7c) = 0;
                iVar4 = func_0x01b38150(param_1,uVar6);
                if (iVar4 == 0) goto LAB_01b37f5c;
              }
              if (param_3 < iVar4) {
                *(int *)(param_1 + 0x7c) = iVar7 + param_3;
                break;
              }
              iVar2 = FUN_01b30180(param_1);
              if ((iVar2 == 0) || (iVar1 < iVar5)) break;
              uVar6 = func_0x01b38028(param_1,iVar2,iVar7,*(undefined4 *)(param_1 + 0xa4));
              *(undefined4 *)(param_1 + 0x7c) = 0;
              iVar7 = func_0x01b38150(param_1,uVar6);
              if ((iVar7 == 0) || (param_3 = param_3 - iVar4, *(int *)(param_1 + 0xa4) < 1)) break;
            }
LAB_01b37f5c:
            func_0x01b3824c(param_1);
            uVar6 = 1;
          }
        }
        else {
          iVar1 = func_0x0229f13c(0x5f0,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_30 = 0;
          uVar6 = func_0x021846e8(iVar1,param_1,param_3,0);
        }
        return uVar6;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5e8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    uStack_28 = param_4;
    uVar6 = func_0x0217a980(iVar1,param_1,param_2,param_3);
  }
  return uVar6;
}



// ===== FAT.ScoreBoardActivity$$PopStartUI RVA 0x1b2552c =====

void FUN_01b3552c(int param_1)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x8a6f,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xab) == '\0') {
      iVar1 = *(int *)(param_1 + 0x150);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02b61550(iVar1,0);
      if (iVar1 != 0) {
        uStack_20 = *(undefined8 *)(param_1 + 0x14c);
        uStack_18 = *(undefined4 *)(param_1 + 0x154);
        func_0x02b64cc4(&uStack_20,0,0,0);
        *(undefined1 *)(param_1 + 0xab) = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a6f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$SaveSetup RVA 0x1b255e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b355e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01b358fc + 0x1b355fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b35900 + 0x1b35610));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a70,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a70,0);
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
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar5 = func_0x01c23578(1,*(undefined4 *)(param_1 + 0x6c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01b35904 + 0x1b356a8);
  func_0x03652b00(iVar1,uVar5,*puVar6);
  uVar5 = func_0x01c23578(2,*(undefined4 *)(param_1 + 0x70),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar1,uVar5,*puVar6);
  uVar5 = func_0x01c23578(3,*(undefined4 *)(param_1 + 0x74),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar1,uVar5,*puVar6);
  uVar5 = func_0x01c23578(4,*(undefined4 *)(param_1 + 0x78),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar1,uVar5,*puVar6);
  uVar5 = func_0x01c23578(5,*(undefined4 *)(param_1 + 0x7c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar1,uVar5,*puVar6);
  uVar5 = func_0x01c23578(6,*(undefined4 *)(param_1 + 0x80),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar1,uVar5,*puVar6);
  uVar5 = func_0x01c23578(7,*(undefined4 *)(param_1 + 0x84),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar1,uVar5,*puVar6);
  uVar5 = func_0x01c23ac8(8,*(undefined1 *)(param_1 + 0x88),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar1,uVar5,*puVar6);
  uVar5 = func_0x01c23578(9,*(undefined4 *)(param_1 + 0x8c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar1,uVar5,*puVar6);
  uVar5 = func_0x01c23578(10,*(undefined4 *)(param_1 + 0x90),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar1,uVar5,*puVar6);
  uVar5 = func_0x01c23578(0xb,*(undefined4 *)(param_1 + 0x94),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar1,uVar5,*puVar6);
  uVar5 = func_0x01c23ac8(0xc,*(undefined1 *)(param_1 + 0x98),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar1,uVar5,*puVar6);
  func_0x01b35908(param_1,iVar1);
  if (*(int *)(param_1 + 0x118) != 0) {
    uStack_20 = 0xf;
    uStack_1c = 0;
    func_0x02bf03d8(*(int *)(param_1 + 0x118),iVar1,0xd,0xe);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$SaveMilestoneItemRewardList RVA 0x1b25908 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b35908(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
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
  
  pcVar9 = (char *)(_UNK_01b35b30 + 0x1b35924);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b35b34 + 0x1b35938));
    func_0x01384978(*(undefined4 *)(_UNK_01b35b38 + 0x1b35944));
    func_0x01384978(*(undefined4 *)(_UNK_01b35b3c + 0x1b35950));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a71,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a71,0);
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
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar8,0,0);
    return;
  }
  if (param_2 != (int *)0x0) {
    if (*(int *)(param_1 + 0xc4) == 0) {
      func_0x01384bf0();
      iVar1 = iRam0000000c;
      iVar10 = iRam0000000c;
      if (0x31 < iRam0000000c) {
        iVar10 = 0x32;
      }
      if (*(int *)(param_1 + 0xc4) == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc4) + 0xc);
      iVar10 = iVar1;
      if (0x31 < iVar1) {
        iVar10 = 0x32;
      }
    }
    uVar11 = func_0x01c23578(0x10,iVar10,0);
    iVar2 = *param_2;
    piVar12 = *(int **)(_UNK_01b35b40 + 0x1b35a14);
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    iVar5 = *piVar12;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar5) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xd0);
          goto LAB_01b35a5c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar5,2);
LAB_01b35a5c:
    (*(code *)*puVar3)(param_2,uVar11,puVar3[1]);
    if (0 < iVar1) {
      iVar1 = 0;
      puVar3 = *(undefined4 **)(_UNK_01b35b44 + 0x1b35a88);
      do {
        iVar2 = *(int *)(param_1 + 0xc4);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar11 = func_0x03259410(iVar2,iVar1,*puVar3);
        uVar11 = func_0x01c23578(iVar1 + 1000,uVar11,0);
        iVar2 = *param_2;
        iVar5 = *piVar12;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar5) {
              puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xd0);
              goto LAB_01b35b08;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(param_2,iVar5,2);
LAB_01b35b08:
        (*(code *)*puVar4)(param_2,uVar11,puVar4[1]);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar10);
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$LoadSetup RVA 0x1b25b48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b35b48(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  undefined4 uStack_18;
  
  pcVar5 = (char *)(_UNK_01b35dfc + 0x1b35b64);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b35e00 + 0x1b35b78));
    func_0x01384978(*(undefined4 *)(_UNK_01b35e04 + 0x1b35b84));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x8a72,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8a72,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = func_0x01c23c30(1,uVar3,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  uVar6 = func_0x01c23c30(2,uVar3,0);
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  uVar6 = func_0x01c23c30(3,uVar3,0);
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  uVar6 = func_0x01c23c30(4,uVar3,0);
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  uVar6 = func_0x01c23c30(5,uVar3,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  uVar6 = func_0x01c23c30(6,uVar3,0);
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  uVar6 = func_0x01c23c30(7,uVar3,0);
  *(undefined4 *)(param_1 + 0x84) = uVar6;
  uVar1 = func_0x01c23b88(8,uVar3,0);
  *(undefined1 *)(param_1 + 0x88) = uVar1;
  uVar6 = func_0x01c23c30(9,uVar3,0);
  *(undefined4 *)(param_1 + 0x8c) = uVar6;
  uVar6 = func_0x01c23c30(10,uVar3,0);
  *(undefined4 *)(param_1 + 0x90) = uVar6;
  uVar6 = func_0x01c23c30(0xb,uVar3,0);
  *(undefined4 *)(param_1 + 0x94) = uVar6;
  uVar1 = func_0x01c23b88(0xc,uVar3,0);
  *(undefined1 *)(param_1 + 0x98) = uVar1;
  func_0x01b35e0c(param_1,uVar3);
  FUN_01b32734(param_1);
  if ((*(int *)(param_1 + 0x48) != 0) && (0 < *(int *)(*(int *)(param_1 + 0x48) + 0x1c))) {
    iVar2 = *(int *)(param_1 + 0x118);
    if (iVar2 == 0) {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b35e08 + 0x1b35d1c));
      func_0x02bf44e8(iVar2,0);
      *(int *)(param_1 + 0x118) = iVar2;
      if (iVar2 == 0) {
        func_0x01384bf0();
        iVar2 = 0;
      }
    }
    uStack_18 = 0xf;
    func_0x02bf061c(iVar2,uVar3,0xd,0xe);
  }
  iVar2 = FUN_01b3439c(param_1);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xaa) = 0;
    if (*(char *)(param_1 + 0x98) == '\0') goto FUN_01b34528;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc4);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    *(bool *)(param_1 + 0xaa) = iVar2 < 1;
    if ((*(char *)(param_1 + 0x98) == '\0') || (iVar2 < 1)) goto FUN_01b34528;
    iVar2 = *(int *)(param_1 + 0xc4);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar2 + 0xc)) goto FUN_01b34528;
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
FUN_01b34528:
  iVar2 = func_0x0229f06c(0x8a5d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8a5d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,0,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  FUN_01b3441c(param_1);
  FUN_01b34494(param_1);
  FUN_01b345bc(param_1,0);
  FUN_01b347e0(param_1);
  FUN_01b314b4(param_1);
  FUN_01b3158c(param_1);
  uVar6 = 0;
  iVar2 = func_0x0229f06c(0x60b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x60b,0);
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
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
    return;
  }
  iVar2 = FUN_01b30180(param_1);
  if (iVar2 != 0) {
    uVar6 = *(undefined4 *)(iVar2 + 0x28);
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar6;
  return;
}



// ===== FAT.ScoreBoardActivity$$LoadMilestoneItemRewardList RVA 0x1b25e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b35e0c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_01b35f9c + 0x1b35e28);
  iStack_28 = param_1;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b35fa0 + 0x1b35e3c));
    func_0x01384978(*(undefined4 *)(_UNK_01b35fa4 + 0x1b35e48));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a73,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a73,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = iStack_28;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar7,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(iStack_28 + 0xc4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (param_2 != 0) {
    iVar6 = 0;
    iVar7 = func_0x01c23c30(0x10,param_2,0);
    iVar1 = iVar7;
    if (0x31 < iVar7) {
      iVar1 = 0x32;
    }
    if (0 < iVar7) {
      do {
        iVar7 = func_0x01c23c30(iVar6 + 1000,param_2,0);
        if (0 < iVar7) {
          iVar9 = *(int *)(iStack_28 + 0xc4);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar2 = *(int **)(_UNK_01b35fa8 + 0x1b35f44);
          *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
          iVar10 = *piVar2;
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (uVar11 < *(uint *)(iVar5 + 0xc)) {
            *(uint *)(iVar9 + 0xc) = uVar11 + 1;
            *(int *)(iVar5 + uVar11 * 4 + 0x10) = iVar7;
          }
          else {
            func_0x0325970c(iVar9,iVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$WhenEnd RVA 0x1b25fac =====

/* WARNING: Removing unreachable block (ram,0x01b365b8) */
/* WARNING: Removing unreachable block (ram,0x01b365c4) */
/* WARNING: Removing unreachable block (ram,0x01b365c8) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x01b365fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b35fac(int param_1)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8a74,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a74,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
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
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
    return;
  }
  func_0x01b36020(param_1);
  func_0x01b3619c(param_1);
  func_0x01b3628c(param_1);
  pcVar4 = (char *)(_UNK_01b36600 + 0x1b36500);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b36604 + 0x1b36514));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a7d,0);
  if (iVar1 == 0) {
    func_0x01b36b34(param_1);
    FUN_01b31a58(param_1);
    func_0x01b36bd4(param_1);
    func_0x01b36ce8(param_1);
    func_0x01b36d50(param_1);
    func_0x01b369e8(param_1);
    func_0x01b36e58(param_1);
    func_0x01b36944(param_1);
    *(undefined1 *)(param_1 + 0xaa) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
    return;
  }
  iVar1 = func_0x0229f13c(0x8a7d,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485228(&uStack_38,0,0);
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
  return;
}



// ===== FAT.ScoreBoardActivity$$FillExpireRewardList RVA 0x1b26020 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b36020(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01b36190 + 0x1b36034);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b36194 + 0x1b36048));
    func_0x01384978(*(undefined4 *)(_UNK_01b36198 + 0x1b36054));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a75,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xd4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    bVar6 = *(char *)(param_1 + 0x99) != '\0';
    iVar1 = 0;
    if (bVar6) {
      iVar1 = *(int *)(param_1 + 0x48);
    }
    if (!bVar6 || iVar1 == 0) {
      return;
    }
    func_0x01b3a750(param_1,*(undefined4 *)(param_1 + 0xd4));
    iVar1 = *(int *)(param_1 + 0xd4);
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_1 + 0xd4);
    }
    func_0x01b3aa2c(param_1,iVar1);
    iVar1 = *(int *)(param_1 + 0xd4);
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_1 + 0xd4);
    }
    func_0x01b3ab10(param_1,iVar1);
    iVar1 = *(int *)(param_1 + 0xd4);
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_1 + 0xd4);
    }
    func_0x02c0389c(iVar1,*(undefined4 *)(param_1 + 0xac),0);
    if (*(int *)(param_1 + 0xd4) == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      func_0x02bf7198(*(int *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xd4),0);
    }
    pcVar3 = (char *)(_UNK_01b3ae88 + 0x1b3adc0);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b3ae8c + 0x1b3add4));
      func_0x01384978(*(undefined4 *)(_UNK_01b3ae90 + 0x1b3ade0));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x8a79,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xd4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        return;
      }
      uVar5 = *(undefined4 *)(param_1 + 0xd4);
      if (*(int *)(**(int **)(_UNK_01b3ae94 + 0x1b3ae54) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar5 = func_0x01b3d83c(uVar5);
      pcVar3 = (char *)(_UNK_0230e318 + 0x230e21c);
      uStack_18 = unaff_r4;
      uStack_14 = unaff_r5;
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0230e31c + 0x230e230),uVar5,0);
        func_0x01384978(*(undefined4 *)(_UNK_0230e320 + 0x230e23c));
        *pcVar3 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xa18,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0xa18,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_1c = uStack_14;
        uStack_20 = uStack_18;
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar5,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485278(&uStack_38,uVar5,0);
        iVar4 = *(int *)(iVar1 + 8);
        uVar5 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 3;
        if (iVar1 == 0) {
          uVar2 = 2;
        }
        func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
        return;
      }
      if (*(int *)(**(int **)(_UNK_0230e324 + 0x230e29c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02f74dec(**(undefined4 **)(_UNK_0230e328 + 0x230e2b8));
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b489c0(&uStack_24,param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 0x48) = uStack_24;
      *(undefined4 *)(iVar1 + 0x4c) = uStack_20;
      *(undefined4 *)(iVar1 + 0x50) = uStack_1c;
      *(undefined4 *)(iVar1 + 0x54) = uVar5;
      func_0x019930d8(iVar1,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x8a79,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a75,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2);
  return;
}



// ===== FAT.ScoreBoardActivity$$PopEndUI RVA 0x1b2619c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3619c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 uStack_21;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_01b36280 + 0x1b361b4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b36284 + 0x1b361c8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a7b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x15c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b61550(iVar1,0);
    if (iVar1 != 0) {
      uStack_20 = *(undefined8 *)(param_1 + 0x158);
      uStack_18 = *(undefined4 *)(param_1 + 0x160);
      uStack_21 = 1;
      uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01b36288 + 0x1b3624c),&uStack_21);
      func_0x02b64cc4(&uStack_20,0,uVar2,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a7b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$PopConvertUI RVA 0x1b2628c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3628c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 auStack_28 [12];
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01b364bc + 0x1b362a4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b364c0 + 0x1b362b8));
    func_0x01384978(*(undefined4 *)(_UNK_01b364c4 + 0x1b362c4));
    func_0x01384978(*(undefined4 *)(_UNK_01b364c8 + 0x1b362d0));
    func_0x01384978(*(undefined4 *)(_UNK_01b364cc + 0x1b362dc));
    func_0x01384978(*(undefined4 *)(_UNK_01b364d0 + 0x1b362e8));
    func_0x01384978(*(undefined4 *)(_UNK_01b364d4 + 0x1b362f4));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x8a7c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xd4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar1 = *(int *)(param_1 + 0x168);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02b61550(iVar1,0);
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_01b364d8 + 0x1b36394) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x028c8d78(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0302a7c0(auStack_28,iVar1,&iStack_1c,**(undefined4 **)(_UNK_01b364dc + 0x1b363d0));
        iVar1 = iStack_1c;
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (0 < iVar2) {
          func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar2,0);
        }
        iVar1 = iStack_1c;
        uVar5 = *(undefined4 *)(param_1 + 0xd4);
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        func_0x0328f380(iVar1,uVar5,**(undefined4 **)(_UNK_01b364e0 + 0x1b36444));
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar3 = *(undefined4 *)(param_1 + 0x16c);
        iVar1 = *(int *)(iVar1 + 0xfc);
        uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_01b364e4 + 0x1b3647c),auStack_28);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7437c(iVar1,uVar3,0,uVar5,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a7c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$ClearRuntime RVA 0x1b264e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b364e8(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01b36600 + 0x1b36500);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b36604 + 0x1b36514));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a7d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a7d,0);
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
    func_0x01485228(&uStack_38,param_2,0);
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
    return;
  }
  func_0x01b36b34(param_1);
  FUN_01b31a58(param_1);
  func_0x01b36bd4(param_1);
  func_0x01b36ce8(param_1);
  func_0x01b36d50(param_1);
  func_0x01b369e8(param_1);
  func_0x01b36e58(param_1);
  func_0x01b36944(param_1);
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  if (param_2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xd4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar3) {
    (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    return;
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$WhenReset RVA 0x1b26608 =====

/* WARNING: Removing unreachable block (ram,0x01b365b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b36608(int param_1)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8a82,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a82,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
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
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
    return;
  }
  pcVar4 = (char *)(_UNK_01b36600 + 0x1b36500);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b36604 + 0x1b36514));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a7d,0);
  if (iVar1 == 0) {
    func_0x01b36b34(param_1);
    FUN_01b31a58(param_1);
    func_0x01b36bd4(param_1);
    func_0x01b36ce8(param_1);
    func_0x01b36d50(param_1);
    func_0x01b369e8(param_1);
    func_0x01b36e58(param_1);
    func_0x01b36944(param_1);
    *(undefined1 *)(param_1 + 0xaa) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
    iVar1 = *(int *)(param_1 + 0xd4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar3 < 1) {
      return;
    }
    (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    return;
  }
  iVar1 = func_0x0229f13c(0x8a7d,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,1,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485228(&uStack_38,1,0);
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
  return;
}



// ===== FAT.ScoreBoardActivity$$ActivityUpdate RVA 0x1b26664 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b36664(int param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  
  pcVar7 = (char *)(_UNK_01b3672c + 0x1b3667c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b36730 + 0x1b36690));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a83,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xaa) != '\0') {
      uVar8 = **(undefined4 **)(_UNK_01b36734 + 0x1b366f8);
      *(undefined1 *)(param_1 + 0xaa) = 0;
      iVar1 = func_0x0229f06c(0x8a0c,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x8a0c,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar8,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485278(&uStack_38,uVar8,0);
        iVar6 = *(int *)(iVar1 + 8);
        uVar8 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 3;
        if (iVar1 == 0) {
          uVar4 = 2;
        }
        func_0x0245495c(iVar6,uVar8,&uStack_38,uVar4,0,0);
        return;
      }
      if (*(char *)(param_1 + 0x98) != '\0') {
        *(undefined1 *)(param_1 + 0x98) = 0;
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xd8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        pcVar7 = (char *)(_UNK_02b49454 + 0x2b49370);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
          *pcVar7 = '\x01';
        }
        iVar6 = func_0x0229f06c(0x19d,0);
        if (iVar6 == 0) {
          func_0x02b41428(iVar1,param_1,0);
          func_0x02b43478(iVar1,param_1);
          puVar3 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
          *(undefined1 *)(iVar1 + 0x34) = 1;
          iVar6 = func_0x03668dfc(*puVar3);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x01c36988(iVar6,0);
          if (iVar6 != 0) {
            pcVar7 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
            if (*pcVar7 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
              func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
              func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
              *pcVar7 = '\x01';
            }
            iVar6 = func_0x0229f06c(0x1a9,0);
            if (iVar6 == 0) {
              iVar6 = *(int *)(iVar1 + 0xc);
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              iVar6 = func_0x03cd675c(iVar6,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
              if (0 < iVar6) {
                func_0x02b4558c(iVar1);
              }
              func_0x02b45d7c(iVar1,1);
              func_0x02b46034(iVar1);
              func_0x02b46318(iVar1);
              func_0x02b4639c(iVar1,0);
              func_0x02b467e4(iVar1,0);
              if (*(char *)(iVar1 + 0x34) != '\0') {
                piVar2 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
                *(undefined1 *)(iVar1 + 0x34) = 0;
                if (*(int *)(*piVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar6 = func_0x0229f06c(0x3f,0);
                if (iVar6 != 0) {
                  iVar6 = func_0x0229f13c(0x3f,0);
                  if (iVar6 == 0) {
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
                  if (*(int *)(iVar6 + 0x10) != 0) {
                    func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
                  }
                  func_0x01485278(&uStack_30,iVar1,0);
                  iVar5 = *(int *)(iVar6 + 8);
                  uVar8 = *(undefined4 *)(iVar6 + 0xc);
                  iVar1 = *(int *)(iVar6 + 0x10);
                  if (iVar5 == 0) {
                    func_0x01384bf0();
                  }
                  uVar4 = 2;
                  if (iVar1 == 0) {
                    uVar4 = 1;
                  }
                  uStack_50 = 0;
                  uStack_4c = 0;
                  func_0x0245495c(iVar5,uVar8,&uStack_30,uVar4);
                  return;
                }
                iVar1 = *(int *)(iVar1 + 8);
                if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(iVar1 + 0xc))
                            (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
                  return;
                }
                return;
              }
            }
            else {
              iVar6 = func_0x0229f13c(0x1a9,0);
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              uStack_20 = 0;
              func_0x0217f950(iVar6,iVar1,0,1);
            }
            return;
          }
        }
        else {
          iVar6 = func_0x0229f13c(0x19d,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uStack_20 = 0;
          func_0x02175630(iVar6,iVar1,param_1,0);
        }
        return;
      }
      return;
    }
    param_1 = *(int *)(param_1 + 0x40);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x78a6,0,0);
    if (iVar1 == 0) {
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
    iVar1 = func_0x0229f13c(0x78a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a83,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.ScoreBoardActivity$$EndImmediateForMilestoneFinish RVA 0x1b26738 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b36738(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  
  iVar1 = func_0x0229f06c(0x8a0c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a0c,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_02b49454 + 0x2b49370);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
    *pcVar8 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x19d,0);
  if (iVar6 == 0) {
    func_0x02b41428(iVar1,param_1,0);
    func_0x02b43478(iVar1,param_1);
    puVar3 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
    *(undefined1 *)(iVar1 + 0x34) = 1;
    iVar6 = func_0x03668dfc(*puVar3);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x01c36988(iVar6,0);
    if (iVar6 != 0) {
      pcVar8 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
        func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
        *pcVar8 = '\x01';
      }
      iVar6 = func_0x0229f06c(0x1a9,0);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar1 + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x03cd675c(iVar6,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
        if (0 < iVar6) {
          func_0x02b4558c(iVar1);
        }
        func_0x02b45d7c(iVar1,1);
        func_0x02b46034(iVar1);
        func_0x02b46318(iVar1);
        func_0x02b4639c(iVar1,0);
        func_0x02b467e4(iVar1,0);
        if (*(char *)(iVar1 + 0x34) != '\0') {
          piVar2 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
          *(undefined1 *)(iVar1 + 0x34) = 0;
          if (*(int *)(*piVar2 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x0229f06c(0x3f,0);
          if (iVar6 == 0) {
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar1 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
            return;
          }
          iVar6 = func_0x0229f13c(0x3f,0);
          if (iVar6 == 0) {
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
          if (*(int *)(iVar6 + 0x10) != 0) {
            func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
          }
          func_0x01485278(&uStack_30,iVar1,0);
          iVar5 = *(int *)(iVar6 + 8);
          uVar7 = *(undefined4 *)(iVar6 + 0xc);
          iVar1 = *(int *)(iVar6 + 0x10);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 2;
          if (iVar1 == 0) {
            uVar4 = 1;
          }
          uStack_50 = 0;
          uStack_4c = 0;
          func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4);
          return;
        }
      }
      else {
        iVar6 = func_0x0229f13c(0x1a9,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x0217f950(iVar6,iVar1,0,1);
      }
      return;
    }
  }
  else {
    iVar6 = func_0x0229f13c(0x19d,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar6,iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardEntry.BoardEntryAsset RVA 0x1b267e4 =====

/* WARNING: Possible PIC construction at 0x01b368c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b368c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b367e4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x8a84,0);
  if (iVar1 == 0) {
    pcVar4 = (char *)(_UNK_01b36930 + 0x1b36854);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b36934 + 0x1b36868));
      func_0x01384978(*(undefined4 *)(_UNK_01b36938 + 0x1b36874));
      *pcVar4 = '\x01';
    }
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x8a85,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x120);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_18 = func_0x02b617fc(iVar1,0);
      iVar1 = func_0x02b63e8c(&uStack_18,**(undefined4 **)(_UNK_01b3693c + 0x1b368f8),&uStack_14,0);
      if (iVar1 == 0) {
        uStack_14 = **(undefined4 **)(**(int **)(_UNK_01b36940 + 0x1b36920) + 0x5c);
      }
      return uStack_14;
    }
    iVar1 = func_0x0229f13c(0x8a85,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1b368c4;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x8a84,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
    *pcVar4 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  uVar5 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x30),0,
                          **(undefined4 **)(_UNK_02173f7c + 0x2173f64));
  return uVar5;
}



// ===== FAT.ScoreBoardActivity$$GetBoardEntryAsset RVA 0x1b2683c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3683c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01b36930 + 0x1b36854);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b36934 + 0x1b36868));
    func_0x01384978(*(undefined4 *)(_UNK_01b36938 + 0x1b36874));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x8a85,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x120);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = func_0x02b617fc(iVar1,0);
    iVar1 = func_0x02b63e8c(&uStack_18,**(undefined4 **)(_UNK_01b3693c + 0x1b368f8),&uStack_14,0);
    if (iVar1 == 0) {
      uStack_14 = **(undefined4 **)(**(int **)(_UNK_01b36940 + 0x1b36920) + 0x5c);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a85,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ScoreBoardActivity$$ClearMilestoneItemRewardList RVA 0x1b26944 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b36944(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b369e0 + 0x1b36958);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b369e4 + 0x1b3696c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a1f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a1f,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return;
}



// ===== FAT.ScoreBoardActivity$$ClearDisplayState RVA 0x1b269e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b369e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar3 = (char *)(_UNK_01b36b28 + 0x1b369fc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b36b2c + 0x1b36a10));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a69,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a69,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  iVar1 = *(int *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01b3e22c(iVar1,0);
  iVar1 = *(int *)(param_1 + 0xf4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01b3e568(iVar1,0);
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01b3eaf4(iVar1,0);
  iVar1 = *(int *)(param_1 + 0xfc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01b3ed28(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01b3ee58(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0x14);
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar1 + 0xc);
    if (iVar5 < *(int *)(iVar1 + 0x10)) {
      uVar6 = *(undefined4 *)(iVar1 + 8);
    }
    else {
      iVar7 = *(int *)(iVar1 + 8);
      iVar4 = iVar5;
      if (iVar7 == 0) {
        func_0x02457d50(iVar5,**(undefined4 **)(_UNK_01b36b30 + 0x1b36b1c));
        iVar4 = *(int *)(iVar1 + 0xc);
      }
      func_0x0484e5ec(iVar7,iVar5,*(int *)(iVar7 + 0xc) - iVar4,0);
      uVar6 = *(undefined4 *)(iVar1 + 8);
      iVar5 = 0;
      iVar4 = *(int *)(iVar1 + 0x10);
    }
    func_0x0484e5ec(uVar6,iVar5,iVar4,0);
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  return;
}



// ===== FAT.ScoreBoardActivity$$ClearStartUI RVA 0x1b26b34 =====

void FUN_01b36b34(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x8a7e,0);
  if (iVar1 == 0) {
    uStack_20 = *(undefined8 *)(param_1 + 0x14c);
    uStack_18 = *(undefined4 *)(param_1 + 0x154);
    func_0x02b64d7c(&uStack_20,0);
    piVar2 = *(int **)(param_1 + 0x154);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0x130))(piVar2,*(undefined4 *)(*piVar2 + 0x134));
    *(undefined1 *)(param_1 + 0xab) = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x8a7e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$ClearTokenOutput RVA 0x1b26bd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b36bd4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b36ce0 + 0x1b36be8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b36ce4 + 0x1b36bfc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a7f,0);
  if (iVar1 == 0) {
    func_0x01b3c53c(param_1);
    if (*(int *)(param_1 + 0x108) != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar5 = *(undefined4 *)(param_1 + 0x108);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbba60(iVar1,uVar5,0);
      *(undefined4 *)(param_1 + 0x108) = 0;
    }
    if (*(int *)(param_1 + 0x10c) != 0) {
      func_0x02af7520(*(int *)(param_1 + 0x10c),0);
    }
    iVar1 = *(int *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x10c) = 0;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    }
    *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
    return;
  }
  iVar1 = func_0x0229f13c(0x8a7f,0);
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
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.ScoreBoardActivity$$ResetHandbookState RVA 0x1b26ce8 =====

/* WARNING: Possible PIC construction at 0x01cc5a9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc5aa0) */
/* WARNING: Removing unreachable block (ram,0x01cc20bc) */
/* WARNING: Removing unreachable block (ram,0x01cc20b0) */
/* WARNING: Removing unreachable block (ram,0x01cc5e90) */
/* WARNING: Removing unreachable block (ram,0x01cc5f04) */
/* WARNING: Removing unreachable block (ram,0x01cc5f34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b36ce8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int unaff_r4;
  int *piVar10;
  int unaff_r5;
  char *pcVar11;
  undefined4 unaff_r6;
  undefined4 uVar12;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *piVar13;
  int *piVar14;
  undefined4 unaff_lr;
  undefined4 auStack_88 [2];
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int aiStack_28 [3];
  undefined4 uStack_1c;
  
  iVar2 = func_0x0229f06c(0x8a81,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0xbc);
    if (param_1 == 0) {
      return;
    }
    pcVar11 = (char *)(_UNK_02bf5774 + 0x2bf56b8);
    if (*pcVar11 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf5778 + 0x2bf56cc),0);
      *pcVar11 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x5c30,0);
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(*(int *)(param_1 + 0xc) + 0xc) < 1)) {
        return;
      }
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      unaff_r4 = *(int *)(iVar2 + 0x3c);
      piVar10 = *(int **)(param_1 + 0xc);
      if (unaff_r4 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x5b57,0,0);
      if (iVar2 == 0) {
        pcVar11 = (char *)(_UNK_01cc21c8 + 0x1cc1d48);
        uStack_1c = unaff_r6;
        if (*pcVar11 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01cc21cc + 0x1cc1d5c));
          func_0x01384978(*(undefined4 *)(_UNK_01cc21d0 + 0x1cc1d68));
          func_0x01384978(*(undefined4 *)(_UNK_01cc21d4 + 0x1cc1d74));
          func_0x01384978(*(undefined4 *)(_UNK_01cc21d8 + 0x1cc1d80));
          func_0x01384978(*(undefined4 *)(_UNK_01cc21dc + 0x1cc1d8c));
          func_0x01384978(*(undefined4 *)(_UNK_01cc21e0 + 0x1cc1d98));
          *pcVar11 = '\x01';
        }
        iVar2 = func_0x0229f06c(0x5b58,0);
        if (iVar2 == 0) {
          if (piVar10 != (int *)0x0) {
            iVar2 = *piVar10;
            uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar7[-1] == **(int **)(_UNK_01cc21e4 + 0x1cc1e04)) {
                  puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
                  goto LAB_01cc1e4c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01cc21e4 + 0x1cc1e04),0);
LAB_01cc1e4c:
            iVar2 = (*(code *)*puVar3)(piVar10,puVar3[1]);
            if (0 < iVar2) {
              iVar2 = *piVar10;
              uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                do {
                  if (piVar7[-1] == **(int **)(_UNK_01cc21e8 + 0x1cc1e74)) {
                    puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc1ebc;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined4 *)
                       func_0x014002dc(piVar10,**(int **)(_UNK_01cc21e8 + 0x1cc1e74),0);
LAB_01cc1ebc:
              piVar7 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
              piVar13 = *(int **)(_UNK_01cc21ec + 0x1cc1edc);
              piVar14 = *(int **)(_UNK_01cc21f0 + 0x1cc1ee4);
              puVar3 = *(undefined4 **)(_UNK_01cc21f4 + 0x1cc1eec);
              do {
                if (piVar7 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar2 = *piVar7;
                uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
                if (uVar6 != 0) {
                  piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == *piVar13) {
                      puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                      goto LAB_01cc1f44;
                    }
                    uVar6 = uVar6 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar6 != 0);
                }
                puVar4 = (undefined4 *)func_0x014002dc(piVar7,*piVar13,0);
LAB_01cc1f44:
                iVar2 = (*(code *)*puVar4)(piVar7,puVar4[1]);
                if (iVar2 == 0) goto LAB_01cc2030;
                if (piVar7 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar2 = *piVar7;
                uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
                if (uVar6 != 0) {
                  piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == *piVar14) {
                      puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                      goto LAB_01cc1fb8;
                    }
                    uVar6 = uVar6 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar6 != 0);
                }
                puVar4 = (undefined4 *)func_0x014002dc(piVar7,*piVar14,0);
LAB_01cc1fb8:
                uVar12 = (*(code *)*puVar4)(piVar7,puVar4[1]);
                iVar2 = *(int *)(unaff_r4 + 0xc);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                func_0x028ce234(iVar2,uVar12,0);
                iVar2 = *(int *)(unaff_r4 + 0x10);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                func_0x028ce234(iVar2,uVar12,0);
                iVar2 = *(int *)(unaff_r4 + 0x1c);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                func_0x02451994(iVar2,uVar12,*puVar3);
              } while( true );
            }
          }
          return;
        }
        iVar2 = func_0x0229f13c(0x5b58,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x5b57,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iStack_38 = 0;
      aiStack_28[0] = 0;
      func_0x0245494c(&iStack_50,0,piVar10,0);
      iStack_38 = iStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      iStack_2c = iStack_44;
      aiStack_28[0] = iStack_40;
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&iStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&iStack_38,unaff_r4,0);
      func_0x01485278(&iStack_38,piVar10,0);
      iVar5 = *(int *)(iVar2 + 8);
      uVar12 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar9 = 3;
      if (iVar2 == 0) {
        uVar9 = 2;
      }
      uStack_58 = 0;
      uStack_54 = 0;
      func_0x0245495c(iVar5,uVar12,&iStack_38,uVar9);
      return;
    }
    iVar2 = func_0x0229f13c(0x5c30,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8a81,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  goto SUB_02173f80;
LAB_01cc2030:
  if (piVar7 != (int *)0x0) {
    iVar2 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar13[-1] == **(int **)(_UNK_01cc21f8 + 0x1cc2050)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
          goto LAB_01cc2098;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01cc21f8 + 0x1cc2050),0);
LAB_01cc2098:
    (*(code *)*puVar3)(piVar7,puVar3[1]);
  }
  func_0x01cc628c(unaff_r4,piVar10);
  pcVar11 = (char *)(_UNK_01cc6214 + 0x1cc5998);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc6218 + 0x1cc59ac));
    func_0x01384978(*(undefined4 *)(_UNK_01cc621c + 0x1cc59b8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6220 + 0x1cc59c4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6224 + 0x1cc59d0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6228 + 0x1cc59dc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc622c + 0x1cc59e8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6230 + 0x1cc59f4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6234 + 0x1cc5a00));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6238 + 0x1cc5a0c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc623c + 0x1cc5a18));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6240 + 0x1cc5a24));
    *pcVar11 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_28[0] = 0;
  iStack_40 = 0;
  iStack_60 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  iStack_44 = 0;
  uStack_4c = 0;
  iStack_50 = 0;
  iStack_64 = 0;
  uStack_3c = uStack_5c;
  iStack_38 = uStack_58;
  uStack_34 = uStack_54;
  iVar2 = func_0x0229f06c(0x5b5c,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar10 = *(int **)(_UNK_01cc6244 + 0x1cc5ac8);
    iVar2 = *(int *)(iVar2 + 0x50);
    iVar5 = *piVar10;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar10;
    }
    iVar5 = **(int **)(iVar5 + 0x5c);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar5,aiStack_28,**(undefined4 **)(_UNK_01cc6248 + 0x1cc5b08));
    iVar5 = aiStack_28[0];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc7468(iVar2,iVar5,0);
    iVar5 = aiStack_28[0];
    if (aiStack_28[0] == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&iStack_78,iVar5,**(undefined4 **)(_UNK_01cc624c + 0x1cc5b4c));
    iStack_40 = iStack_78;
    uStack_3c = uStack_74;
    iStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    piVar10 = *(int **)(_UNK_01cc6250 + 0x1cc5b74);
    iStack_7c = iVar2;
    do {
      iVar5 = func_0x01470118(&iStack_40,**(undefined4 **)(_UNK_01cc627c + 0x1cc5b80));
      uVar12 = uStack_34;
      iStack_80 = 0;
      piVar7 = *(int **)(_UNK_01cc6280 + 0x1cc5ba0);
      if (iVar5 == 0) {
        iVar5 = 10;
        break;
      }
      iVar5 = *piVar7;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
        iVar5 = *piVar7;
      }
      iVar5 = **(int **)(iVar5 + 0x5c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&iStack_78,iVar5,&iStack_44,**(undefined4 **)(_UNK_01cc6254 + 0x1cc5bdc));
      iVar5 = iStack_44;
      uStack_4c = uStack_74;
      iStack_50 = iStack_78;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      auStack_88[0] = 0;
      func_0x01dc79d0(iVar2,uVar12,iVar5,0);
      iVar2 = iStack_44;
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      func_0x0325a3b4(&iStack_78,iVar2,**(undefined4 **)(_UNK_01cc6258 + 0x1cc5c44));
      iStack_60 = iStack_78;
      uStack_5c = uStack_74;
      uStack_58 = uStack_70;
      uStack_54 = uStack_6c;
      do {
        do {
          iVar5 = func_0x01470118(&iStack_60,**(undefined4 **)(_UNK_01cc626c + 0x1cc5c68));
          uVar12 = uStack_54;
          iVar2 = iStack_7c;
          if (iVar5 == 0) {
            iVar5 = 3;
            goto LAB_01cc5ee8;
          }
          if (iStack_7c == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01db1884(iVar2,uVar12,0);
        } while (iVar2 == 0);
        iVar2 = *(int *)(iVar2 + 0x44);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar7 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01cc625c + 0x1cc5cc4));
        do {
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar7;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar13[-1] == *piVar10) {
                puVar3 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
                goto LAB_01cc5d2c;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_01cc5d2c:
          iVar2 = (*(code *)*puVar3)(piVar7,puVar3[1]);
          if (iVar2 == 0) {
            iVar5 = 5;
            goto LAB_01cc5e18;
          }
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar7;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar13[-1] == **(int **)(_UNK_01cc6260 + 0x1cc5d64)) {
                puVar3 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
                goto LAB_01cc5dac;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01cc6260 + 0x1cc5d64),0);
LAB_01cc5dac:
          uVar12 = (*(code *)*puVar3)(piVar7,puVar3[1]);
          iVar2 = *(int *)(unaff_r4 + 0x14);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          bVar1 = func_0x02451924(iVar2,uVar12,&iStack_64,
                                  **(undefined4 **)(_UNK_01cc6264 + 0x1cc5ddc));
        } while ((bVar1 & iStack_64 == 2) == 0);
        iVar5 = 9;
        *(undefined1 *)(unaff_r4 + 8) = 1;
LAB_01cc5e18:
        if (piVar7 != (int *)0x0) {
          iVar2 = *piVar7;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar13[-1] == **(int **)(_UNK_01cc6268 + 0x1cc5e30)) {
                puVar3 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
                goto LAB_01cc5e78;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01cc6268 + 0x1cc5e30),0);
LAB_01cc5e78:
          (*(code *)*puVar3)(piVar7,puVar3[1]);
        }
      } while (iVar5 == 5 || iVar5 == 0);
LAB_01cc5ee8:
      func_0x02450828(&iStack_60,**(undefined4 **)(_UNK_01cc6274 + 0x1cc5ef4));
      iVar2 = iStack_7c;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      func_0x028c98a0(&iStack_50,0);
    } while (iVar5 == 3 || iVar5 == 0);
    func_0x02450828(&iStack_40,**(undefined4 **)(_UNK_01cc6284 + 0x1cc60a4));
    if (iStack_80 != 0) {
      func_0x01384bec();
    }
    func_0x028c98a0(&uStack_30,0);
    if (iVar5 == 0 || iVar5 == 10) {
      *(undefined1 *)(unaff_r4 + 8) = 0;
    }
    return;
  }
  iVar2 = func_0x0229f13c(0x5b5c,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  unaff_lr = 0x1cc5aa0;
  param_1 = unaff_r4;
  unaff_r5 = iVar2;
  unaff_r6 = uStack_1c;
  register0x00000054 = (BADSPACEBASE *)auStack_88;
SUB_02173f80:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar5 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar5 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar5,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar12 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 2;
  if (iVar2 == 0) {
    uVar9 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar5,uVar12,(undefined1 *)((int)register0x00000054 + -0x30),uVar9);
  return;
}



// ===== FAT.ScoreBoardActivity$$ClearHandbookAgent RVA 0x1b26d50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b36d50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b36e44 + 0x1b36d64);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b36e48 + 0x1b36d78));
    func_0x01384978(*(undefined4 *)(_UNK_01b36e4c + 0x1b36d84));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a5f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a5f,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 != 0) {
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b36e50 + 0x1b36de8));
    func_0x024501dc(uVar5,param_1,**(undefined4 **)(_UNK_01b36e54 + 0x1b36e08),0);
    func_0x02bf5270(iVar1,uVar5,0);
    iVar1 = *(int *)(param_1 + 0xbc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02bf6458(iVar1,0);
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$ClearMilestoneRewardList RVA 0x1b26e58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b36e58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b36f14 + 0x1b36e6c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b36f18 + 0x1b36e80));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a0a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a0a,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc0);
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



// ===== FAT.ScoreBoardActivity$$JumpTask RVA 0x1b26f1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b36f1c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01b37018 + 0x1b36f3c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3701c + 0x1b36f50));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a86,0);
  if (iVar1 == 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01b37020 + 0x1b36fb4));
    iVar2 = param_1[0x47];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar3,0);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01b37014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined4 *)(*param_1 + 0x1fc));
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a86,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$get_DebugRuntimeLogText RVA 0x1b27024 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b37024(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  undefined4 auStack_1c [3];
  
  iVar1 = func_0x0229f06c(0x8a87,0);
  if (iVar1 == 0) {
    pcVar5 = (char *)(_UNK_01b37278 + 0x1b37094);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b3727c + 0x1b370a8));
      func_0x01384978(*(undefined4 *)(_UNK_01b37280 + 0x1b370b4));
      func_0x01384978(*(undefined4 *)(_UNK_01b37284 + 0x1b370c0));
      func_0x01384978(*(undefined4 *)(_UNK_01b37288 + 0x1b370cc));
      func_0x01384978(*(undefined4 *)(_UNK_01b3728c + 0x1b370d8));
      func_0x01384978(*(undefined4 *)(_UNK_01b37290 + 0x1b370e4));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x8a88,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xb8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        uVar6 = **(undefined4 **)(_UNK_01b37294 + 0x1b37270);
      }
      else {
        piVar2 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01b37298 + 0x1b3715c));
        func_0x02450004(piVar2,0);
        iVar1 = *(int *)(param_1 + 0xb8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        auStack_1c[0] = *(undefined4 *)(iVar1 + 0xc);
        uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_01b3729c + 0x1b3718c),auStack_1c);
        iVar1 = 0;
        uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_01b372a0 + 0x1b371b0),uVar6,0);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x02450d44(piVar2,uVar6,0);
        puVar7 = *(undefined4 **)(_UNK_01b372a4 + 0x1b371e0);
        while( true ) {
          iVar4 = *(int *)(param_1 + 0xb8);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar4 + 0xc) <= iVar1) break;
          iVar4 = *(int *)(param_1 + 0xb8);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x0328eea8(iVar4,iVar1,*puVar7);
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          func_0x02450d44(piVar2,uVar6,0);
          iVar1 = iVar1 + 1;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        uVar6 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
      }
      return uVar6;
    }
    iVar1 = func_0x0229f13c(0x8a88,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a87,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar5 = (char *)(_UNK_02173f74 + 0x2173e94);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
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
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
  uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
  return uVar6;
}



// ===== FAT.ScoreBoardActivity$$BuildDebugRuntimeLogText RVA 0x1b2707c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3707c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_01b37278 + 0x1b37094);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3727c + 0x1b370a8));
    func_0x01384978(*(undefined4 *)(_UNK_01b37280 + 0x1b370b4));
    func_0x01384978(*(undefined4 *)(_UNK_01b37284 + 0x1b370c0));
    func_0x01384978(*(undefined4 *)(_UNK_01b37288 + 0x1b370cc));
    func_0x01384978(*(undefined4 *)(_UNK_01b3728c + 0x1b370d8));
    func_0x01384978(*(undefined4 *)(_UNK_01b37290 + 0x1b370e4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a88,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a88,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    uVar6 = **(undefined4 **)(_UNK_01b37294 + 0x1b37270);
  }
  else {
    piVar2 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01b37298 + 0x1b3715c));
    func_0x02450004(piVar2,0);
    iVar1 = *(int *)(param_1 + 0xb8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = *(undefined4 *)(iVar1 + 0xc);
    uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_01b3729c + 0x1b3718c),&uStack_1c);
    iVar1 = 0;
    uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_01b372a0 + 0x1b371b0),uVar6,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x02450d44(piVar2,uVar6,0);
    puVar7 = *(undefined4 **)(_UNK_01b372a4 + 0x1b371e0);
    while( true ) {
      iVar5 = *(int *)(param_1 + 0xb8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar5 + 0xc) <= iVar1) break;
      iVar5 = *(int *)(param_1 + 0xb8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0328eea8(iVar5,iVar1,*puVar7);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      func_0x02450d44(piVar2,uVar6,0);
      iVar1 = iVar1 + 1;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar6 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
  }
  return uVar6;
}



// ===== FAT.ScoreBoardActivity$$Log RVA 0x1b272a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b372a8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
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
  undefined1 auStack_20 [16];
  
  iVar1 = func_0x0229f06c(0x8a89,0);
  if (iVar1 == 0) {
    pcVar4 = (char *)(_UNK_01b374e0 + 0x1b37328);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b374e4 + 0x1b3733c));
      func_0x01384978(*(undefined4 *)(_UNK_01b374e8 + 0x1b37348));
      func_0x01384978(*(undefined4 *)(_UNK_01b374ec + 0x1b37354));
      func_0x01384978(*(undefined4 *)(_UNK_01b374f0 + 0x1b37360));
      func_0x01384978(*(undefined4 *)(_UNK_01b374f4 + 0x1b3736c));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x8a8a,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xb8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (19999 < *(int *)(iVar1 + 0xc)) {
        iVar1 = *(int *)(param_1 + 0xb8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03290bd4(iVar1,0,**(undefined4 **)(_UNK_01b374f8 + 0x1b37400));
      }
      piVar5 = *(int **)(_UNK_01b374fc + 0x1b37414);
      iVar1 = *(int *)(param_1 + 0xb8);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0244f7e8(auStack_20,0);
      uVar7 = func_0x01384abc(*piVar5,auStack_20);
      uVar7 = func_0x0244f690(**(undefined4 **)(_UNK_01b37500 + 0x1b37460),uVar7,param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar1 + 8);
      uVar8 = *(uint *)(iVar1 + 0xc);
      piVar5 = *(int **)(_UNK_01b37504 + 0x1b37494);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar3 = *piVar5;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar8 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar8 + 1;
        *(undefined4 *)(iVar6 + uVar8 * 4 + 0x10) = uVar7;
      }
      else {
        func_0x0328f170(iVar1,uVar7,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38))
        ;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x8a8a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a89,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar7,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.ScoreBoardActivity$$AppendDebugRuntimeLog RVA 0x1b2730c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3730c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
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
  undefined1 auStack_20 [8];
  
  pcVar4 = (char *)(_UNK_01b374e0 + 0x1b37328);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b374e4 + 0x1b3733c));
    func_0x01384978(*(undefined4 *)(_UNK_01b374e8 + 0x1b37348));
    func_0x01384978(*(undefined4 *)(_UNK_01b374ec + 0x1b37354));
    func_0x01384978(*(undefined4 *)(_UNK_01b374f0 + 0x1b37360));
    func_0x01384978(*(undefined4 *)(_UNK_01b374f4 + 0x1b3736c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a8a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a8a,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar7,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (19999 < *(int *)(iVar1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0xb8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03290bd4(iVar1,0,**(undefined4 **)(_UNK_01b374f8 + 0x1b37400));
  }
  piVar5 = *(int **)(_UNK_01b374fc + 0x1b37414);
  iVar1 = *(int *)(param_1 + 0xb8);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0244f7e8(auStack_20,0);
  uVar7 = func_0x01384abc(*piVar5,auStack_20);
  uVar7 = func_0x0244f690(**(undefined4 **)(_UNK_01b37500 + 0x1b37460),uVar7,param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  piVar5 = *(int **)(_UNK_01b37504 + 0x1b37494);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar3 = *piVar5;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    *(undefined4 *)(iVar6 + uVar8 * 4 + 0x10) = uVar7;
  }
  else {
    func_0x0328f170(iVar1,uVar7,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$Error RVA 0x1b27508 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b37508(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r6;
  char *pcVar7;
  undefined4 uVar8;
  int unaff_r7;
  undefined4 unaff_r8;
  int *unaff_r9;
  int *piVar9;
  undefined4 unaff_r10;
  int unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  pcVar7 = (char *)(_UNK_01b37608 + 0x1b37520);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3760c + 0x1b37534));
    func_0x01384978(*(undefined4 *)(_UNK_01b37610 + 0x1b37540));
    func_0x01384978(*(undefined4 *)(_UNK_01b37614 + 0x1b3754c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a8b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a8b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    iStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar8,&iStack_38,uVar3,0,0);
    return;
  }
  uVar8 = func_0x0244fb1c(**(undefined4 **)(_UNK_01b37618 + 0x1b375b0),param_2,0);
  FUN_01b3730c(param_1,uVar8);
  iVar1 = func_0x0244fb1c(**(undefined4 **)(_UNK_01b3761c + 0x1b375d4),param_2,0);
  if (*(int *)(**(int **)(_UNK_01b37620 + 0x1b375e8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar7 = (char *)(_UNK_028c29e4 + 0x28c2958);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c29e8 + 0x28c296c),0);
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x46,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x46,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    iStack_20 = iStack_38;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar1,0);
    iVar4 = *(int *)(iVar5 + 8);
    uVar8 = *(undefined4 *)(iVar5 + 0xc);
    iVar1 = *(int *)(iVar5 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar8,&uStack_30,uVar3);
    return;
  }
  if (*(int *)(**(int **)(_UNK_028c29ec + 0x28c29c4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar7 = (char *)(_UNK_028c2868 + 0x28c26ec);
  iStack_20 = unaff_r4;
  iStack_1c = unaff_r5;
  iStack_18 = unaff_r6;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x14,0);
  if (iVar5 != 0) {
    iVar2 = func_0x0229f13c(0x14,0);
    iVar5 = iStack_20;
    iVar4 = iStack_1c;
    iVar6 = iStack_18;
    if (iVar2 == 0) {
      func_0x01384bf0();
      iVar5 = iStack_20;
      iVar4 = iStack_1c;
      iVar6 = iStack_18;
    }
    goto LAB_02174038;
  }
  piVar9 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar5 = *piVar9;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x01384ab4();
    iVar5 = *piVar9;
  }
  if (**(int **)(iVar5 + 0x5c) < 1) {
LAB_028c2848:
    iVar4 = iVar1;
    iVar1 = iStack_20;
    iVar6 = iStack_1c;
    iVar2 = iStack_18;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = iStack_20;
      iVar6 = iStack_1c;
      iVar2 = iStack_18;
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar5 = *piVar9;
    }
    iVar4 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar9;
    }
    iVar6 = **(int **)(iVar5 + 0x5c);
    if (iVar4 <= iVar6) goto LAB_028c2848;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar6 = **(int **)(*piVar9 + 0x5c);
    }
    iVar5 = *(int *)(iVar1 + 8);
    if (iVar5 < 1) {
      return;
    }
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
    unaff_r7 = func_0x04673af4(iVar1,0,iVar6,0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x28c2824;
    iVar4 = unaff_r7;
    iVar2 = 0;
    unaff_r8 = 4;
    unaff_r9 = piVar9;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = iVar2;
  *(int *)((int)register0x00000054 + -0xc) = iVar6;
  *(int *)((int)register0x00000054 + -0x10) = iVar1;
  pcVar7 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15,0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_028c31a0 + _UNK_028c31ac))();
    return;
  }
  iVar2 = func_0x0229f13c(0x15,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  unaff_lr = *(int *)((int)register0x00000054 + -4);
  iVar1 = iVar4;
  iVar5 = *(int *)((int)register0x00000054 + -0x10);
  iVar4 = *(int *)((int)register0x00000054 + -0xc);
  iVar6 = *(int *)((int)register0x00000054 + -8);
LAB_02174038:
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = iVar6;
  *(int *)((int)register0x00000054 + -0x1c) = iVar4;
  *(int *)((int)register0x00000054 + -0x20) = iVar5;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,iVar1,0);
  iVar5 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar5 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar5,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),4,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar5,uVar8,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  return;
}



// ===== FAT.ScoreBoardActivity$$ClearDebugRuntimeLog RVA 0x1b27624 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b37624(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b376e0 + 0x1b37638);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b376e4 + 0x1b3764c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a8c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a8c,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
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



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityHandbook.CheckIsBoardItem RVA 0x1b276e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b376e8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  
  iVar2 = func_0x0229f06c(0x8a8d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8a8d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
SUB_02179234:
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_38,0,0);
    return uVar3;
  }
  iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (0 < param_2) {
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x2f];
    }
    param_1 = piVar1;
    if (iVar2 != 0 && param_1 != (int *)0x0) {
      pcVar7 = (char *)(_UNK_02bf6bd0 + 0x2bf6b40);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02bf6bd4 + 0x2bf6b54),param_2,0);
        *pcVar7 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x5c43,0);
      if (iVar2 == 0) {
        iVar2 = param_1[3];
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 0xc) == 0) {
          uVar3 = 0;
        }
        else {
          iVar2 = func_0x030fe230(*(undefined4 *)(iVar2 + 8),param_2,0);
          uVar3 = (uint)(iVar2 != -1);
        }
        return uVar3;
      }
      iVar2 = func_0x0229f13c(0x5c43,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02179234;
    }
  }
  return 0;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityHandbook.OnNewItemUnlock RVA 0x1b27780 =====

void FUN_01b37780(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a8e,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 == 0) {
      return;
    }
    FUN_01b2fdc4(param_1);
    func_0x01b37814(param_1);
    param_1 = (int *)param_1[0x2f];
    if (param_1 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5c45,0);
    if (iVar1 == 0) {
      iVar1 = param_1[0xe];
      *(undefined1 *)(param_1 + 10) = 1;
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x02bf6b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c45,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a8e,0);
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



// ===== FAT.ScoreBoardActivity$$RefreshTokenBoostUnlock RVA 0x1b27814 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b37814(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x5ee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ee,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x118);
  if (iVar1 == 0) {
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x80);
  pcVar7 = (char *)(_UNK_02befe10 + 0x2befcf4);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08),uVar6,0);
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x5ca,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x5ca,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,uVar6,0);
    iVar5 = *(int *)(iVar4 + 8);
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  iVar4 = func_0x02beec64(iVar1);
  if (iVar4 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    uVar8 = *(uint *)(iVar1 + 0x14);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x14);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0x14);
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar5 + 1 < iVar4) {
      do {
        iVar5 = iVar5 + 1;
        iVar2 = func_0x02befe18(iVar1,iVar5,uVar6);
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar1 + 0x14);
          break;
        }
        *(int *)(iVar1 + 0x14) = iVar5;
      } while (iVar4 + -1 != iVar5);
    }
    if ((int)uVar8 < iVar5) {
      iVar4 = *(int *)(iVar1 + 0x20);
      if (0x7fffffff < (*(uint *)(iVar1 + 0x10) & uVar8)) {
        *(int *)(iVar1 + 0x10) = iVar5;
      }
      if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02befe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
        return;
      }
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityHandbook.OnNewItemShow RVA 0x1b27880 =====

void FUN_01b37880(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r6;
  undefined4 uVar4;
  int unaff_r7;
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
  
  iVar1 = func_0x0229f06c(0x8a8f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a8f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02174108:
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
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 != 0) {
    if (param_2 != 0) {
      unaff_r6 = *(int *)(param_2 + 0x30);
    }
    if (param_2 != 0 && unaff_r6 != 0) {
      iVar1 = func_0x02116990(unaff_r6,0);
      if (iVar1 != 0) {
        unaff_r7 = param_1[0x2f];
      }
      if (iVar1 != 0 && unaff_r7 != 0) {
        iVar1 = func_0x02116990(unaff_r6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02bf6b28(unaff_r7,*(undefined4 *)(iVar1 + 0x10),0);
        if (iVar1 != 0) {
          func_0x01b37980(param_1,unaff_r6);
        }
      }
    }
    param_1 = (int *)param_1[0x2f];
    if (param_1 != (int *)0x0) {
      iVar1 = func_0x0229f06c(0x5c48,0,0);
      if (iVar1 == 0) {
        iVar1 = param_1[0xf];
        if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02bf6aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar1 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
          return;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0x5c48,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02174108;
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$RecordHandbookUnlock RVA 0x1b27980 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b37980(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01b37aa8 + 0x1b37998);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b37aac + 0x1b379ac));
    func_0x01384978(*(undefined4 *)(_UNK_01b37ab0 + 0x1b379b8));
    func_0x01384978(*(undefined4 *)(_UNK_01b37ab4 + 0x1b379c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a90,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a90,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01b3ed94(iVar1,param_2,0);
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  func_0x01b3b558(param_1,param_2);
  if (*(int *)(**(int **)(_UNK_01b37ab8 + 0x1b37a58) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b37abc + 0x1b37a74));
  uVar5 = *(undefined4 *)(param_1 + 0xec);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349e128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar5,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityHandbook.CheckClaimBoardCategoryReward RVA 0x1b27ac4 =====

/* WARNING: Possible PIC construction at 0x02bf69e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf69e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b37ac4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int *unaff_r5;
  int unaff_r6;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [7];
  char cStack_11;
  
  iVar2 = func_0x0229f06c(0x8a93,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x2f];
    }
    param_1 = piVar1;
    if (iVar2 == 0 || param_1 == (int *)0x0) {
      return 0;
    }
    pcVar7 = (char *)(_UNK_02bf6a28 + 0x2bf697c);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6a2c + 0x2bf6990),param_2,0);
      *pcVar7 = '\x01';
    }
    cStack_11 = '\0';
    iVar2 = func_0x0229f06c(0x5c4a,0);
    if (iVar2 == 0) {
      iVar2 = param_1[5];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d50be8(iVar2,param_2,&cStack_11,**(undefined4 **)(_UNK_02bf6a30 + 0x2bf6a0c));
      return (uint)(cStack_11 == '\0');
    }
    iVar2 = func_0x0229f13c(0x5c4a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2bf69e4;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar2 = func_0x0229f13c(0x8a93,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar4 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar6,(undefined1 *)((int)register0x00000054 + -0x38),uVar5);
  uVar3 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar3;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityHandbook.CheckClaimBoardHandBookAllReward RVA 0x1b27b50 =====

/* WARNING: Possible PIC construction at 0x02bf67ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf67b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b37b50(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  int *unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  undefined4 *puVar8;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar2 = func_0x0229f06c(0x8a94,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x2f];
    }
    param_1 = piVar1;
    if (iVar2 == 0 || param_1 == (int *)0x0) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_02bf6934 + 0x2bf6714);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6938 + 0x2bf6728),0);
      func_0x01384978(*(undefined4 *)(_UNK_02bf693c + 0x2bf6734));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6940 + 0x2bf6740));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6944 + 0x2bf674c));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6948 + 0x2bf6758));
      *pcVar6 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    unaff_r6 = 0;
    uStack_28 = 0;
    iVar2 = func_0x0229f06c(0x5c4c,0);
    if (iVar2 == 0) {
      if ((char)param_1[4] == '\0') {
        iVar4 = param_1[3];
        iVar2 = 0;
        if (iVar4 != 0) {
          iVar2 = *(int *)(iVar4 + 0xc);
        }
        if (iVar4 != 0 && iVar2 != 0) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar4 = param_1[3];
          iVar2 = *(int *)(iVar2 + 0x3c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0325a3b4(&uStack_38,iVar4,**(undefined4 **)(_UNK_02bf694c + 0x2bf6818));
          uStack_28 = uStack_38;
          uStack_24 = uStack_34;
          uStack_20 = uStack_30;
          iStack_1c = iStack_2c;
          puVar8 = *(undefined4 **)(_UNK_02bf6950 + 0x2bf6834);
          do {
            do {
              iVar3 = func_0x03f597e0(&uStack_28,*puVar8);
              iVar4 = iStack_1c;
              if (iVar3 == 0) {
                iVar2 = 9;
                goto LAB_02bf6880;
              }
            } while (iStack_1c < 1);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar4 = func_0x01cc4240(iVar2,iVar4,0);
          } while (iVar4 != 0);
          iVar2 = 8;
LAB_02bf6880:
          func_0x03f597dc(&uStack_28,**(undefined4 **)(_UNK_02bf6954 + 0x2bf688c));
          unaff_r6 = 0;
          if (iVar2 != 8) {
            unaff_r6 = 1;
          }
        }
      }
      return unaff_r6;
    }
    iVar2 = func_0x0229f13c(0x5c4c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2bf67b0;
    unaff_r4 = iVar2;
    unaff_r5 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_38;
  }
  else {
    iVar2 = func_0x0229f13c(0x8a94,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar4 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
  uVar7 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return uVar7;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityHandbook.ProcessAllUnlockReward RVA 0x1b27bd0 =====

/* WARNING: Removing unreachable block (ram,0x02bf91a0) */
/* WARNING: Removing unreachable block (ram,0x02bf91b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b37bd0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int unaff_r11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8a95,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar10 = (int *)0x0;
    if (iVar1 != 0) {
      piVar10 = (int *)param_1[0x2f];
    }
    param_1 = piVar10;
    if (iVar1 == 0 || param_1 == (int *)0x0) {
      return 0;
    }
    pcVar5 = (char *)(iRam02bf9188 + 0x2bf8f60);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(iRam02bf918c + 0x2bf8f74),0);
      func_0x01384978(*(undefined4 *)(iRam02bf9190 + 0x2bf8f80));
      func_0x01384978(*(undefined4 *)(iRam02bf9194 + 0x2bf8f8c));
      func_0x01384978(*(undefined4 *)(iRam02bf9198 + 0x2bf8f98));
      func_0x01384978(*(undefined4 *)(iRam02bf919c + 0x2bf8fa4));
      func_0x01384978(*(undefined4 *)(iRam02bf91a0 + 0x2bf8fb0));
      *pcVar5 = '\x01';
    }
    uVar7 = 0;
    iVar1 = func_0x0229f06c(0x5c4e,0);
    if (iVar1 == 0) {
      if (param_1[6] != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar8 = param_1[6];
        iVar4 = *(int *)(iVar1 + 0x40);
        iVar1 = iVar8;
        if (iVar8 == 0) {
          func_0x01384bf0();
          iVar1 = param_1[6];
          bVar13 = iVar1 == 0;
          bVar12 = true;
          if (bVar13) {
            uVar15 = func_0x01384bf0();
            puVar2 = (undefined *)((ulonglong)uVar15 >> 0x20);
            bVar14 = bVar12;
            if (bVar13) {
              bVar14 = &UNK_01300000 < puVar2 || puVar2 + -0x1300000 < (undefined *)(uint)bVar12;
            }
            if (bVar13 && puVar2 == &UNK_01300000 + !bVar12) {
                    /* WARNING: Could not recover jumptable at 0x02bf919c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar7 = (*(code *)(unaff_r11 + 0x2200 + (uint)bVar14))();
              return uVar7;
            }
            pcVar5 = (char *)(_UNK_02bf93d4 + 0x2bf91d4);
            piStack_58 = param_1;
            iStack_54 = iVar4;
            if (*pcVar5 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_02bf93d8 + 0x2bf91e8));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93dc + 0x2bf91f4));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e0 + 0x2bf9200));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e4 + 0x2bf920c));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e8 + 0x2bf9218));
              *pcVar5 = '\x01';
            }
            uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_68 = 0;
            iVar1 = func_0x0229f06c(0x7a91,0);
            if (iVar1 == 0) {
              iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_02bf93ec + 0x2bf927c));
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar7 = 0;
              if (*(char *)(iVar1 + 10) != '\0') {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x0325a3b4(&uStack_78,iVar1,**(undefined4 **)(_UNK_02bf93f0 + 0x2bf92c0));
                uStack_68 = uStack_78;
                uStack_64 = uStack_74;
                uStack_60 = uStack_70;
                uStack_5c = uStack_6c;
                puVar11 = *(undefined4 **)(_UNK_02bf93f4 + 0x2bf92dc);
                while (iVar1 = func_0x03f597e0(&uStack_68,*puVar11), uVar7 = uStack_5c, iVar1 != 0)
                {
                  iVar1 = func_0x01c24918(0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *(int *)(iVar1 + 0x3c);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x01cc14fc(iVar1,uVar7,1,0);
                }
                uVar7 = func_0x03f597dc(&uStack_68,**(undefined4 **)(_UNK_02bf93f8 + 0x2bf933c));
              }
            }
            else {
              iVar1 = func_0x0229f13c(0x7a91,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar7 = func_0x02173f80(iVar1,(int)uVar15,0);
            }
            return uVar7;
          }
        }
        piVar10 = *(int **)(iRam02bf91a4 + 0x2bf9058);
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        uVar3 = *(undefined4 *)(iVar8 + 8);
        iVar1 = *piVar10;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar10;
        }
        uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = **(undefined4 **)(iRam02bf91a8 + 0x2bf909c);
        uStack_2c = **(undefined4 **)(iRam02bf91ac + 0x2bf90a8);
        uStack_28 = 0;
        uVar7 = func_0x01cdcbac(iVar4,uVar3,uVar7,uVar9);
        iVar1 = func_0x01384be4(**(undefined4 **)(iRam02bf91b0 + 0x2bf90e4));
        func_0x0328e950(iVar1,**(undefined4 **)(iRam02bf91b4 + 0x2bf90f8));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 8);
        uVar6 = *(uint *)(iVar1 + 0xc);
        piVar10 = *(int **)(iRam02bf91b8 + 0x2bf912c);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar8 = *piVar10;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar4 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar6 + 1;
          *(undefined4 *)(iVar4 + uVar6 * 4 + 0x10) = uVar7;
        }
        else {
          func_0x0328f170(iVar1,uVar7,
                          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
        uVar7 = 1;
        param_1[7] = iVar1;
      }
      return uVar7;
    }
    iVar1 = func_0x0229f13c(0x5c4e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a95,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
  uVar7 = func_0x0245496c(&uStack_30,0,0);
  return uVar7;
}



// ===== FAT.ScoreBoardActivity$$TrackHandbookRewardClaim RVA 0x1b27c50 =====

void FUN_01b37c50(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x8a60,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x8a60,0);
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



// ===== FAT.ScoreBoardActivity$$IsItemUnlock RVA 0x1b27ca4 =====

uint FUN_01b37ca4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a01,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a01,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0x3c) != 0) {
    iVar1 = func_0x01cc44e8(*(int *)(iVar1 + 0x3c),param_2,0);
    return (uint)(iVar1 != 0);
  }
  return 0;
}



// ===== FAT.ScoreBoardActivity$$TryAddMilestoneScore RVA 0x1b27d44 =====

undefined4 FUN_01b37d44(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  iVar1 = func_0x0229f06c(0x5ef,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ef,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar6 = func_0x0245496c(&uStack_38,0,0);
    return uVar6;
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x5f0,0);
  if (iVar1 == 0) {
    if (((0 < param_2) && (*(char *)(param_1 + 0x99) != '\0')) && (0 < *(int *)(param_1 + 0xa4))) {
      iVar1 = *(int *)(param_1 + 0xf8);
      uVar8 = *(undefined4 *)(param_1 + 0x70);
      uVar3 = *(undefined4 *)(param_1 + 0x74);
      uVar6 = *(undefined4 *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_30 = uVar6;
      func_0x01b3e920(iVar1,param_2,uVar8,uVar3);
      iVar1 = func_0x01b37f74(param_1);
      iVar5 = 0;
      while (0 < param_2) {
        while( true ) {
          iVar5 = iVar5 + 1;
          iVar7 = *(int *)(param_1 + 0x7c);
          iVar4 = *(int *)(param_1 + 0xa4) - iVar7;
          if (0 < iVar4) break;
          iVar4 = FUN_01b30180(param_1);
          if (((iVar4 == 0) || (*(int *)(iVar4 + 0x28) < 1)) || (iVar1 < iVar5)) goto LAB_01b37f5c;
          uVar6 = func_0x01b38028(param_1,iVar4,*(undefined4 *)(param_1 + 0x7c),
                                  *(undefined4 *)(param_1 + 0xa4));
          *(undefined4 *)(param_1 + 0x7c) = 0;
          iVar4 = func_0x01b38150(param_1,uVar6);
          if (iVar4 == 0) goto LAB_01b37f5c;
        }
        if (param_2 < iVar4) {
          *(int *)(param_1 + 0x7c) = iVar7 + param_2;
          break;
        }
        iVar2 = FUN_01b30180(param_1);
        if ((iVar2 == 0) || (iVar1 < iVar5)) break;
        uVar6 = func_0x01b38028(param_1,iVar2,iVar7,*(undefined4 *)(param_1 + 0xa4));
        *(undefined4 *)(param_1 + 0x7c) = 0;
        iVar7 = func_0x01b38150(param_1,uVar6);
        if ((iVar7 == 0) || (param_2 = param_2 - iVar4, *(int *)(param_1 + 0xa4) < 1)) break;
      }
LAB_01b37f5c:
      func_0x01b3824c(param_1);
      uVar6 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    uVar6 = func_0x021846e8(iVar1,param_1,param_2,0);
  }
  return uVar6;
}



// ===== FAT.ScoreBoardActivity$$TryAddMilestoneScore RVA 0x1b27dac =====

undefined4 FUN_01b37dac(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x5f0,0);
  if (iVar1 == 0) {
    if (((0 < param_2) && (*(char *)(param_1 + 0x99) != '\0')) && (0 < *(int *)(param_1 + 0xa4))) {
      iVar1 = *(int *)(param_1 + 0xf8);
      uVar8 = *(undefined4 *)(param_1 + 0x70);
      uVar7 = *(undefined4 *)(param_1 + 0x74);
      uVar5 = *(undefined4 *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01b3e920(iVar1,param_2,uVar8,uVar7,uVar5,param_3,0);
      iVar1 = func_0x01b37f74(param_1);
      iVar4 = 0;
      while (0 < param_2) {
        while( true ) {
          iVar4 = iVar4 + 1;
          iVar6 = *(int *)(param_1 + 0x7c);
          iVar3 = *(int *)(param_1 + 0xa4) - iVar6;
          if (0 < iVar3) break;
          iVar3 = FUN_01b30180(param_1);
          if (((iVar3 == 0) || (*(int *)(iVar3 + 0x28) < 1)) || (iVar1 < iVar4)) goto LAB_01b37f5c;
          uVar5 = func_0x01b38028(param_1,iVar3,*(undefined4 *)(param_1 + 0x7c),
                                  *(undefined4 *)(param_1 + 0xa4));
          *(undefined4 *)(param_1 + 0x7c) = 0;
          iVar3 = func_0x01b38150(param_1,uVar5);
          if (iVar3 == 0) goto LAB_01b37f5c;
        }
        if (param_2 < iVar3) {
          *(int *)(param_1 + 0x7c) = iVar6 + param_2;
          break;
        }
        iVar2 = FUN_01b30180(param_1);
        if ((iVar2 == 0) || (iVar1 < iVar4)) break;
        uVar5 = func_0x01b38028(param_1,iVar2,iVar6,*(undefined4 *)(param_1 + 0xa4));
        *(undefined4 *)(param_1 + 0x7c) = 0;
        iVar6 = func_0x01b38150(param_1,uVar5);
        if ((iVar6 == 0) || (param_2 = param_2 - iVar3, *(int *)(param_1 + 0xa4) < 1)) break;
      }
LAB_01b37f5c:
      func_0x01b3824c(param_1);
      uVar5 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x021846e8(iVar1,param_1,param_2,param_3,0);
  }
  return uVar5;
}



// ===== FAT.ScoreBoardActivity$$GetMaxMilestoneAdvancePerCall RVA 0x1b27f74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b37f74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b38020 + 0x1b37f88);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b38024 + 0x1b37f9c));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x0229f06c(0x5f2,0);
  if (iVar1 != 0) {
    iVar4 = func_0x0229f13c(0x5f2,0);
    if (iVar4 == 0) {
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar1 = *(int *)(iVar4 + 8);
    uVar5 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar4 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar1,uVar5,&uStack_30,uVar2,0,0);
    iVar4 = func_0x0245498c(&uStack_30,0,0);
    return iVar4;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x48) + 0x48);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xc) << 1;
  }
  return iVar1 + iVar4 + 1;
}



// ===== FAT.ScoreBoardActivity$$CreateMilestoneCompleteInfo RVA 0x1b28028 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b38028(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pcVar4 = (char *)(_UNK_01b38144 + 0x1b38048);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b38148 + 0x1b38060));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x5f6,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b3814c + 0x1b380cc));
    func_0x01b3e840(iVar1,0);
    uVar2 = *(undefined4 *)(param_1 + 0x74);
    uVar6 = *(undefined4 *)(param_1 + 0x70);
    uVar3 = FUN_01b2ff9c(param_1);
    uVar7 = 0;
    if (param_2 != 0) {
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      uVar7 = *(undefined4 *)(param_2 + 0x28);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01b3e6d0(iVar1,uVar6,uVar2,uVar3,uVar5,uVar7,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5f6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0219033c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$AdvanceMilestone RVA 0x1b28150 =====

undefined4 FUN_01b38150(int param_1,undefined4 param_2)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5fa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5fa,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = FUN_01b30180(param_1);
  if (iVar1 != 0) {
    func_0x01b38838(param_1,iVar1,param_2);
    func_0x01b39244(param_1,param_2);
    func_0x01b39384(param_1,param_2);
    iVar1 = *(int *)(param_1 + 0x78);
    iVar3 = *(int *)(param_1 + 0x70) + 1;
    if (iVar3 < iVar1) {
      *(int *)(param_1 + 0x70) = iVar3;
    }
    else if (*(int *)(param_1 + 0x70) < iVar1) {
      *(int *)(param_1 + 0x70) = iVar1;
      *(undefined4 *)(param_1 + 0x74) = 0;
      iVar1 = FUN_01b30020(param_1);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 200) = 1;
      }
    }
    else {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    }
    FUN_01b34078(param_1);
    FUN_01b340ec(param_1);
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$RecordMilestoneProgressFinish RVA 0x1b2824c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3824c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  
  pcVar3 = (char *)(_UNK_01b38384 + 0x1b38264);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b38388 + 0x1b38278));
    func_0x01384978(*(undefined4 *)(_UNK_01b3838c + 0x1b38284));
    func_0x01384978(*(undefined4 *)(_UNK_01b38390 + 0x1b38290));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x60f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x60f,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  uVar6 = *(undefined4 *)(param_1 + 0x70);
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  uVar5 = *(undefined4 *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x01b3ea78(iVar1,uVar6,uVar2,uVar5);
  iVar1 = **(int **)(_UNK_01b38394 + 0x1b38324);
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b38398 + 0x1b3834c));
  uVar5 = *(undefined4 *)(param_1 + 0xe0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349e128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar5,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.ScoreBoardActivity$$FAT.IScoreSpecialBoardAdapter.get_IsScoreSpecialBoardValid RVA 0x1b283a0 =====

void FUN_01b383a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a96,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a96,0);
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
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01b38400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  return;
}



// ===== FAT.ScoreBoardActivity$$FAT.IScoreSpecialBoardAdapter.GetScoreSpecialBoardWorld RVA 0x1b28404 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b38404(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a97,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a97,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a0d4 + 0x2179ff4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a0d8 + 0x217a008),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a0dc + 0x217a0c4));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xac);
}



// ===== FAT.ScoreBoardActivity$$FAT.IScoreSpecialBoardAdapter.GetScoreSpecialBoardId RVA 0x1b28458 =====

undefined4 FUN_01b38458(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a98,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a98,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x8c);
}



// ===== FAT.ScoreBoardActivity$$FAT.IScoreSpecialBoardAdapter.GetScoreSpecialBoardTokenId RVA 0x1b284ac =====

undefined4 FUN_01b384ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8a99,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a99,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x3c);
  }
  return uVar3;
}



// ===== FAT.ScoreBoardActivity$$FAT.IScoreSpecialBoardAdapter.GetScoreSpecialBoardMergeScorePrefab RVA 0x1b28510 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b38510(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b38594 + 0x1b38524);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b38598 + 0x1b38538));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a9a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a9a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar5;
  }
  return **(undefined4 **)(_UNK_01b3859c + 0x1b38590);
}



// ===== FAT.ScoreBoardActivity$$FAT.IScoreSpecialBoardAdapter.TryGetScoreSpecialBoardItemConfig RVA 0x1b285a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b385a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01b38688 + 0x1b385c0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3868c + 0x1b385d4));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x8a9b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450cc8(iVar1,param_2,&uStack_1c,**(undefined4 **)(_UNK_01b38690 + 0x1b38658));
    if (iVar1 == 0) {
      uVar2 = 0;
      *param_3 = 0;
    }
    else {
      *param_3 = uStack_1c;
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a9b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0225feb4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ScoreBoardActivity$$FAT.IScoreSpecialBoardAdapter.TryAddScoreSpecialBoardScore RVA 0x1b28694 =====

uint FUN_01b38694(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = func_0x0229f06c(0x8a9c,0);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x70);
    uVar4 = *(undefined4 *)(param_1 + 0x74);
    iVar1 = FUN_01b37dac(param_1,param_3,param_2);
    if (iVar1 != 0) {
      func_0x01b38740(param_1,param_2,param_3,uVar3,uVar4);
    }
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8a9c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021e20b4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ScoreBoardActivity$$TrackMergeScore RVA 0x1b28740 =====

void FUN_01b38740(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  iVar1 = func_0x0229f06c(0x8a9d,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01b3d7ac(param_1,param_4,param_5);
    uVar3 = func_0x01b3cf04(param_1);
    uVar4 = func_0x01b3cf58(param_1);
    uVar5 = func_0x01b3d04c(param_1);
    uVar6 = func_0x01b3d0a4(param_1);
    if (param_2 != 0) {
      uVar7 = func_0x0210e2d4(param_2,0);
    }
    func_0x0230e614(param_1,uVar2,uVar3,uVar4,uVar5,uVar6,param_3,uVar7,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8a9d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021d283c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$CommitMilestoneReward RVA 0x1b28838 =====

/* WARNING: Possible PIC construction at 0x01b38c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01b38ff0) */
/* WARNING: Removing unreachable block (ram,0x01b38c6c) */
/* WARNING: Removing unreachable block (ram,0x01b38c60) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b38838(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  
  pcVar9 = (char *)(_UNK_01b391b8 + 0x1b38858);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b391bc + 0x1b3886c));
    func_0x01384978(*(undefined4 *)(_UNK_01b391c0 + 0x1b38878));
    func_0x01384978(*(undefined4 *)(_UNK_01b391c4 + 0x1b38884));
    func_0x01384978(*(undefined4 *)(_UNK_01b391c8 + 0x1b38890));
    func_0x01384978(*(undefined4 *)(_UNK_01b391cc + 0x1b3889c));
    func_0x01384978(*(undefined4 *)(_UNK_01b391d0 + 0x1b388a8));
    func_0x01384978(*(undefined4 *)(_UNK_01b391d4 + 0x1b388b4));
    func_0x01384978(*(undefined4 *)(_UNK_01b391d8 + 0x1b388c0));
    func_0x01384978(*(undefined4 *)(_UNK_01b391dc + 0x1b388cc));
    func_0x01384978(*(undefined4 *)(_UNK_01b391e0 + 0x1b388d8));
    func_0x01384978(*(undefined4 *)(_UNK_01b391e4 + 0x1b388e4));
    func_0x01384978(*(undefined4 *)(_UNK_01b391e8 + 0x1b388f0));
    func_0x01384978(*(undefined4 *)(_UNK_01b391ec + 0x1b388fc));
    func_0x01384978(*(undefined4 *)(_UNK_01b391f0 + 0x1b38908));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5fb,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01b391f4 + 0x1b38988));
LAB_01b38998:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01b39208 + 0x1b389b4)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_01b389fc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b39208 + 0x1b389b4),0);
LAB_01b389fc:
      iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar1 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar3;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01b391f8 + 0x1b38a30)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01b38a78;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b391f8 + 0x1b38a30),0);
LAB_01b38a78:
        iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (0 < iVar1) {
          iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b391fc + 0x1b38aa0));
          func_0x01b3e444(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x01b3e374(iVar5,iVar1,1,0,0,0,0);
          if (param_3 != 0) {
            iVar10 = *(int *)(param_3 + 0x24);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar14 = *(int *)(iVar10 + 8);
            uVar6 = *(uint *)(iVar10 + 0xc);
            piVar7 = *(int **)(_UNK_01b39200 + 0x1b38b1c);
            *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
            iVar12 = *piVar7;
            if (iVar14 == 0) {
              func_0x01384bf0();
            }
            if (uVar6 < *(uint *)(iVar14 + 0xc)) {
              *(uint *)(iVar10 + 0xc) = uVar6 + 1;
              *(int *)(iVar14 + uVar6 * 4 + 0x10) = iVar5;
            }
            else {
              func_0x0328f170(iVar10,iVar5,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
          }
          iVar5 = *(int *)(param_1 + 0xc4);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar5 + 8);
          uVar6 = *(uint *)(iVar5 + 0xc);
          piVar7 = *(int **)(_UNK_01b39204 + 0x1b38b94);
          *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
          iVar12 = *piVar7;
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          if (uVar6 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar5 + 0xc) = uVar6 + 1;
            *(int *)(iVar10 + uVar6 * 4 + 0x10) = iVar1;
          }
          else {
            func_0x0325970c(iVar5,iVar1,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
          }
        }
        goto LAB_01b38998;
      }
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01b3920c + 0x1b38c00)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01b38c48;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b3920c + 0x1b38c00),0);
LAB_01b38c48:
        (*(code *)*puVar4)(piVar3,puVar4[1]);
      }
      iVar1 = *(int *)(param_2 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_01b39210 + 0x1b38c90));
      piVar7 = *(int **)(_UNK_01b39214 + 0x1b38cac);
LAB_01b38ca8:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01b39238 + 0x1b38cc4)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_01b38d0c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b39238 + 0x1b38cc4),0);
LAB_01b38d0c:
      iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar1 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar3;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar7) {
              puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
              goto LAB_01b38d80;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_01b38d80:
        uVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (*(int *)(**(int **)(_UNK_01b3921c + 0x1b38da0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x02565b6c(uVar2,0);
        if (iVar1 != 0) {
          iVar5 = func_0x01c24918(0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar2 = *(undefined4 *)(iVar1 + 8);
          uVar13 = *(undefined4 *)(iVar1 + 0xc);
          iVar1 = **(int **)(_UNK_01b39220 + 0x1b38dec);
          iVar5 = *(int *)(iVar5 + 0x40);
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = **(int **)(_UNK_01b39224 + 0x1b38e14);
          }
          uVar11 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x3a4);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x01cdcbac(iVar5,uVar2,uVar13,uVar11,0,0,0,0x265,
                                  **(undefined4 **)(_UNK_01b39228 + 0x1b38e34),
                                  **(undefined4 **)(_UNK_01b3922c + 0x1b38e40),0);
          iVar1 = *(int *)(param_1 + 0xc0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar1 + 8);
          uVar6 = *(uint *)(iVar1 + 0xc);
          piVar8 = *(int **)(_UNK_01b39230 + 0x1b38ea8);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar10 = *piVar8;
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (uVar6 < *(uint *)(iVar5 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar6 + 1;
            *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar2;
          }
          else {
            func_0x0328f170(iVar1,uVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
          if (param_3 != 0) {
            iVar1 = *(int *)(param_3 + 0x28);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar5 = *(int *)(iVar1 + 8);
            uVar6 = *(uint *)(iVar1 + 0xc);
            piVar8 = *(int **)(_UNK_01b39234 + 0x1b38f2c);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            iVar10 = *piVar8;
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            if (uVar6 < *(uint *)(iVar5 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar6 + 1;
              *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar2;
            }
            else {
              func_0x0328f170(iVar1,uVar2,
                              *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
            }
          }
        }
        goto LAB_01b38ca8;
      }
      uVar2 = 0;
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01b3923c + 0x1b38f90)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01b38fd8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b3923c + 0x1b38f90),0);
LAB_01b38fd8:
        uVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5fb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ScoreBoardActivity$$TrackMilestoneComplete RVA 0x1b29244 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b39244(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01b39378 + 0x1b39260);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3937c + 0x1b39274));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5fe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5fe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  if (param_2 != 0) {
    uVar9 = func_0x01b3ce78(param_1,param_2);
    uVar6 = func_0x01b3cf04(param_1);
    uVar2 = func_0x01b3cf58(param_1);
    uVar3 = func_0x01b3cfbc(param_1,param_2);
    uVar4 = func_0x01b3d04c(param_1);
    uVar5 = func_0x01b3d0a4(param_1);
    if (*(int *)(**(int **)(_UNK_01b39380 + 0x1b3932c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_34 = func_0x01b3d0f8(param_2);
    uStack_30 = (uint)*(byte *)(param_2 + 0x10);
    uStack_2c = 0;
    uStack_40 = uVar3;
    uStack_3c = uVar4;
    uStack_38 = uVar5;
    func_0x0230dba0(param_1,uVar9,uVar6,uVar2);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$RecordMilestoneComplete RVA 0x1b29384 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b39384(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
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
  
  pcVar6 = (char *)(_UNK_01b39550 + 0x1b3939c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b39554 + 0x1b393b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b39558 + 0x1b393bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b3955c + 0x1b393c8));
    func_0x01384978(*(undefined4 *)(_UNK_01b39560 + 0x1b393d4));
    func_0x01384978(*(undefined4 *)(_UNK_01b39564 + 0x1b393e0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x60a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x60a,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 8);
  uVar4 = *(uint *)(iVar1 + 0xc);
  piVar2 = *(int **)(_UNK_01b39568 + 0x1b39478);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = *piVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  if (uVar4 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar4 + 1;
    *(int *)(iVar5 + uVar4 * 4 + 0x10) = param_2;
  }
  else {
    func_0x0328f170(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x035d08d4(iVar1,param_2,**(undefined4 **)(_UNK_01b3956c + 0x1b394e0));
  iVar1 = **(int **)(_UNK_01b39570 + 0x1b394f4);
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b39574 + 0x1b3951c));
  uVar7 = *(undefined4 *)(param_1 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349e128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar7,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.ScoreBoardActivity$$TryEndAfterMilestoneRewardPulled RVA 0x1b2957c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3957c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  
  pcVar7 = (char *)(_UNK_01b39650 + 0x1b39594);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b39654 + 0x1b395a8));
    func_0x01384978(*(undefined4 *)(_UNK_01b39658 + 0x1b395b4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a0b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      return;
    }
    iVar1 = func_0x0229f06c(0x8a0c,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x98) == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x98) = 0;
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xd8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar7 = (char *)(_UNK_02b49454 + 0x2b49370);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
        *pcVar7 = '\x01';
      }
      iVar6 = func_0x0229f06c(0x19d,0);
      if (iVar6 == 0) {
        func_0x02b41428(iVar1,param_1,0);
        func_0x02b43478(iVar1,param_1);
        puVar3 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
        *(undefined1 *)(iVar1 + 0x34) = 1;
        iVar6 = func_0x03668dfc(*puVar3);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x01c36988(iVar6,0);
        if (iVar6 != 0) {
          pcVar7 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
          if (*pcVar7 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
            func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
            func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
            *pcVar7 = '\x01';
          }
          iVar6 = func_0x0229f06c(0x1a9,0);
          if (iVar6 == 0) {
            iVar6 = *(int *)(iVar1 + 0xc);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar6 = func_0x03cd675c(iVar6,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
            if (0 < iVar6) {
              func_0x02b4558c(iVar1);
            }
            func_0x02b45d7c(iVar1,1);
            func_0x02b46034(iVar1);
            func_0x02b46318(iVar1);
            func_0x02b4639c(iVar1,0);
            func_0x02b467e4(iVar1,0);
            if (*(char *)(iVar1 + 0x34) != '\0') {
              piVar2 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
              *(undefined1 *)(iVar1 + 0x34) = 0;
              if (*(int *)(*piVar2 + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar6 = func_0x0229f06c(0x3f,0);
              if (iVar6 != 0) {
                iVar6 = func_0x0229f13c(0x3f,0);
                if (iVar6 == 0) {
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
                if (*(int *)(iVar6 + 0x10) != 0) {
                  func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
                }
                func_0x01485278(&uStack_30,iVar1,0);
                iVar5 = *(int *)(iVar6 + 8);
                uVar8 = *(undefined4 *)(iVar6 + 0xc);
                iVar1 = *(int *)(iVar6 + 0x10);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                uVar4 = 2;
                if (iVar1 == 0) {
                  uVar4 = 1;
                }
                uStack_50 = 0;
                uStack_4c = 0;
                func_0x0245495c(iVar5,uVar8,&uStack_30,uVar4);
                return;
              }
              iVar1 = *(int *)(iVar1 + 8);
              if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(iVar1 + 0xc))
                          (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
                return;
              }
              return;
            }
          }
          else {
            iVar6 = func_0x0229f13c(0x1a9,0);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uStack_20 = 0;
            func_0x0217f950(iVar6,iVar1,0,1);
          }
          return;
        }
      }
      else {
        iVar6 = func_0x0229f13c(0x19d,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x02175630(iVar6,iVar1,param_1,0);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x8a0c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a0b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.ScoreBoardActivity$$SpawnMilestoneItemReward RVA 0x1b2965c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b3965c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar5 = (char *)(_UNK_01b39a70 + 0x1b39684);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b39a74 + 0x1b3969c));
    func_0x01384978(*(undefined4 *)(_UNK_01b39a78 + 0x1b396a8));
    func_0x01384978(*(undefined4 *)(_UNK_01b39a7c + 0x1b396b4));
    func_0x01384978(*(undefined4 *)(_UNK_01b39a80 + 0x1b396c0));
    func_0x01384978(*(undefined4 *)(_UNK_01b39a84 + 0x1b396cc));
    func_0x01384978(*(undefined4 *)(_UNK_01b39a88 + 0x1b396d8));
    func_0x01384978(*(undefined4 *)(_UNK_01b39a8c + 0x1b396e4));
    func_0x01384978(*(undefined4 *)(_UNK_01b39a90 + 0x1b396f0));
    func_0x01384978(*(undefined4 *)(_UNK_01b39a94 + 0x1b396fc));
    *pcVar5 = '\x01';
  }
  iVar7 = 0;
  iVar3 = func_0x0229f06c(0x8a10,0);
  if (iVar3 == 0) {
    if (0 < param_2) {
      iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01b39a98 + 0x1b39798));
      func_0x01b3e444(iVar7,0);
      piVar9 = *(int **)(_UNK_01b39a9c + 0x1b397b8);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd7838(param_2,param_5,param_6,param_7,param_8,0);
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x020ded9c(param_3,param_2,param_4,0,0,0,0,0);
      if (iVar3 == 0) {
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01dd7dfc(0);
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        piVar9 = *(int **)(_UNK_01b39aa8 + 0x1b39908);
        iVar6 = *(int *)(iVar3 + 0x40);
        iVar3 = *piVar9;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar9;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x3a4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x01cdcbac(iVar6,param_2,1,uVar4,0,0,0,0x288,
                                **(undefined4 **)(_UNK_01b39aac + 0x1b3994c),
                                **(undefined4 **)(_UNK_01b39ab0 + 0x1b39958),0);
        if (param_9 != 0) {
          uStack_34 = 0;
          uStack_38 = 0;
          func_0x0390c1c8(&uStack_38,uVar4,param_8,**(undefined4 **)(_UNK_01b39ab4 + 0x1b399a4));
          uVar2 = uStack_34;
          uVar1 = uStack_38;
          iVar3 = *(int *)(param_9 + 8);
          uVar8 = *(uint *)(param_9 + 0xc);
          piVar9 = *(int **)(_UNK_01b39ab8 + 0x1b399dc);
          *(int *)(param_9 + 0x10) = *(int *)(param_9 + 0x10) + 1;
          iVar6 = *piVar9;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar8 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(param_9 + 0xc) = uVar8 + 1;
            iVar3 = iVar3 + uVar8 * 8;
            *(undefined4 *)(iVar3 + 0x10) = uVar1;
            *(undefined4 *)(iVar3 + 0x14) = uVar2;
          }
          else {
            func_0x02450d54(param_9,uVar1,uVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
          }
        }
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x01b3e374(iVar7,param_2,1,0,uVar4,param_8,0);
      }
      else {
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x01b3e374(iVar7,param_2,1,iVar3,0,param_8,0);
        iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01b39aa0 + 0x1b39864));
        uVar4 = func_0x01b3a080(param_1,param_8,**(undefined4 **)(_UNK_01b39aa4 + 0x1b3987c));
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01c36290(iVar3,uVar4,0);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01dd7dfc(0);
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x8a10,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x0225f0f0(iVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,0);
  }
  return iVar7;
}



// ===== FAT.ScoreBoardActivity$$CoDelayMilestoneItemReward RVA 0x1b29abc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b39abc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01b39b98 + 0x1b39adc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b39b9c + 0x1b39af4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a18,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b39ba0 + 0x1b39b5c));
    func_0x01b3ef30(iVar1,0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0x10) = param_5;
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *(undefined4 *)(iVar1 + 0x1c) = param_4;
  }
  else {
    iVar1 = func_0x0229f13c(0x8a18,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0225f2b8(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$TrySpawnItemToBoard RVA 0x1b29ba4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b39ba4(int *param_1,int param_2,undefined4 param_3,float param_4,float param_5,
                 float param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_01b39da0 + 0x1b39bc4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b39da4 + 0x1b39bdc));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x89f4,0);
  if (iVar1 == 0) {
    *param_7 = 0;
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = param_1[0x2b];
    }
    if (iVar2 != 0 && iVar1 != 0) {
      uVar5 = 0;
      iVar1 = func_0x02139cf4(iVar1,0);
      if ((0 < param_2) && (iVar1 != 0)) {
        piVar6 = *(int **)(_UNK_01b39da8 + 0x1b39cb8);
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01dd7d28(0);
        if (_UNK_01b39d9c <= param_5 * param_5 + param_4 * param_4 + param_6 * param_6) {
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd7838(param_2,param_4,param_5,param_6,0xbf800000,0);
        }
        uVar3 = func_0x020d8024(0,0x23,0);
        iVar1 = func_0x020ded9c(iVar1,param_2,uVar3,0,0,0,0,0);
        *param_7 = iVar1;
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01dd7d28(0);
        uVar5 = (uint)(*param_7 != 0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x89f4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0225eb70(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return uVar5;
}



// ===== FAT.ScoreBoardActivity$$IsFinalMilestoneFinishedWithoutCycle RVA 0x1b29dac =====

uint FUN_01b39dac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x60e,0);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x78);
    bVar6 = SBORROW4(iVar4,1);
    iVar1 = iVar4 + -1;
    if (0 < iVar4) {
      bVar6 = SBORROW4(*(int *)(param_1 + 0x70),iVar4);
      iVar1 = *(int *)(param_1 + 0x70) - iVar4;
    }
    if (iVar1 < 0 == bVar6) {
      uVar3 = FUN_01b30020(param_1);
      uVar3 = uVar3 ^ 1;
    }
    return uVar3;
  }
  iVar1 = func_0x0229f13c(0x60e,0);
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
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  uVar3 = func_0x0245496c(&uStack_30,0,0);
  return uVar3;
}



// ===== FAT.ScoreBoardActivity$$TryConsumeMilestoneFinishUIPending RVA 0x1b29e28 =====

uint FUN_01b39e28(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
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
  
  iVar1 = func_0x0229f06c(0x8a9e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a9e,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  bVar6 = *(char *)(param_1 + 200) != '\0';
  if (bVar6) {
    *(undefined1 *)(param_1 + 200) = 0;
    func_0x01b39ea0(param_1);
  }
  return (uint)bVar6;
}



// ===== FAT.ScoreBoardActivity$$PopMilestoneFinishUI RVA 0x1b29ea0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b39ea0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
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
  undefined1 uStack_19;
  
  pcVar5 = (char *)(_UNK_01b3a064 + 0x1b39eb8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3a068 + 0x1b39ecc));
    func_0x01384978(*(undefined4 *)(_UNK_01b3a06c + 0x1b39ed8));
    func_0x01384978(*(undefined4 *)(_UNK_01b3a070 + 0x1b39ee4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a9f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a9f,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x15c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02b61550(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01b3a074 + 0x1b39f64));
    iVar6 = *(int *)(param_1 + 0x158);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar6 + 0xc);
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01b3a078 + 0x1b39f8c),2);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20));
    if (iVar6 == 0) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = param_1;
    uStack_19 = 0;
    iVar6 = func_0x01384abc(**(undefined4 **)(_UNK_01b3a07c + 0x1b39fec),&uStack_19);
    if ((iVar6 != 0) && (iVar3 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if ((uint)piVar2[3] < 2) {
      func_0x01384bf4();
    }
    piVar2[5] = iVar6;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee858c(iVar1,uVar7,piVar2,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$CoPlaySound RVA 0x1b2a080 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b3a080(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01b3a158 + 0x1b3a0a4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3a15c + 0x1b3a0b8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a11,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b3a160 + 0x1b3a120));
    func_0x01b3f184(iVar1,0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_3;
    *(undefined4 *)(iVar1 + 0x10) = param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0x8a11,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021ed128(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$FAT.IActivityOrderHandler.IsValidForBoard RVA 0x1b2a164 =====

uint FUN_01b3a164(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  iVar1 = func_0x0229f06c(0x8aa0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8aa0,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  uVar2 = func_0x01b3a1d4(param_1);
  return param_2 == 1 & uVar2;
}



// ===== FAT.ScoreBoardActivity$$IsScoreBoardOrderActive RVA 0x1b2a1d4 =====

uint FUN_01b3a1d4(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x8aa1,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if ((iVar1 == 0) || ((char)param_1[0x26] != '\0')) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x5ea,0);
    if (iVar1 == 0) {
      return (uint)((param_1[0x34] & 0xfffffffeU) == 2);
    }
    iVar1 = func_0x0229f13c(0x5ea,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8aa1,0);
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
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.ScoreBoardActivity$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x1b2a25c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3a25c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  
  pcVar8 = (char *)(_UNK_01b3a4b0 + 0x1b3a27c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3a4b4 + 0x1b3a294));
    *pcVar8 = '\x01';
  }
  uVar9 = 0;
  iVar2 = func_0x0229f06c(0x8aa2,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01b3a1d4(param_1);
    if (iVar2 != 0) {
      if (param_2 != (int *)0x0) {
        iVar2 = *(int *)(param_1 + 0x10c);
      }
      if (param_2 != (int *)0x0 && iVar2 != 0) {
        iVar2 = param_2[10];
        cVar1 = '\0';
        if (iVar2 != 0) {
          cVar1 = *(char *)(iVar2 + 0x46);
        }
        if (iVar2 != 0 && cVar1 != '\0') {
          iVar2 = *param_2;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01b3a4b8 + 0x1b3a344)) {
                puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x268);
                goto LAB_01b3a38c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01b3a4b8 + 0x1b3a344),0x35)
          ;
LAB_01b3a38c:
          iVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
          if (iVar2 == 0) {
            iVar2 = func_0x01f2a218(0);
            uVar9 = 0;
            if (iVar2 == 0) {
              iVar2 = func_0x01e40318(param_2,0x15,0);
              if ((iVar2 == 0) ||
                 (iVar5 = *(int *)(iVar2 + 0x10), iVar2 = func_0x02b449f8(param_1,0), iVar5 != iVar2
                 )) {
                uVar9 = *(undefined4 *)(param_1 + 0x9c);
                iVar2 = *(int *)(param_1 + 0x10c);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                func_0x02afa744(iVar2,param_2,param_4,uVar9,0);
                uVar9 = 1;
              }
            }
            else {
              uVar4 = func_0x02b449f8(param_1,0);
              iVar2 = func_0x01e4b758(param_2,uVar4,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = func_0x01e3e5b8(param_2,*(undefined4 *)(iVar2 + 8),0);
              iVar5 = func_0x02b449f8(param_1,0);
              if (iVar2 != iVar5) {
                uVar4 = *(undefined4 *)(param_1 + 0x9c);
                iVar2 = *(int *)(param_1 + 0x10c);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                uVar9 = 1;
                func_0x02afacd4(iVar2,param_2,param_4,uVar4,1,0);
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8aa2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x021d2b64(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return uVar9;
}



// ===== FAT.ScoreBoardActivity$$FAT.IActivityOrderHandler.CollectDetectorExcludeItemMap RVA 0x1b2a4bc =====

void FUN_01b3a4bc(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x8aa3,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x8aa3,0);
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



// ===== FAT.ScoreBoardActivity$$get_OutputType RVA 0x1b2a510 =====

undefined4 FUN_01b3a510(int param_1)

{
  return *(undefined4 *)(param_1 + 0xcc);
}



// ===== FAT.ScoreBoardActivity$$set_OutputType RVA 0x1b2a518 =====

void FUN_01b3a518(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xcc) = param_2;
  return;
}



// ===== FAT.ScoreBoardActivity$$get_OutputMethod RVA 0x1b2a520 =====

undefined4 FUN_01b3a520(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd0);
}



// ===== FAT.ScoreBoardActivity$$set_OutputMethod RVA 0x1b2a528 =====

void FUN_01b3a528(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  return;
}



// ===== FAT.ScoreBoardActivity$$IsOrderMethod RVA 0x1b2a530 =====

uint FUN_01b3a530(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ea,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ea,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)((*(uint *)(param_1 + 0xd0) & 0xfffffffe) == 2);
}



// ===== FAT.ScoreBoardActivity$$IsEnergyMethod RVA 0x1b2a594 =====

uint FUN_01b3a594(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8a62,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a62,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)((*(uint *)(param_1 + 0xd0) & 0xfffffffd) == 1);
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityOutput.IsValidForOrder RVA 0x1b2a5f8 =====

uint FUN_01b3a5f8(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x8aa4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x8aa1,0);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      if ((iVar1 == 0) || ((char)param_1[0x26] != '\0')) {
        return 0;
      }
      iVar1 = func_0x0229f06c(0x5ea,0);
      if (iVar1 == 0) {
        return (uint)((param_1[0x34] & 0xfffffffeU) == 2);
      }
      iVar1 = func_0x0229f13c(0x5ea,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x8aa1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8aa4,0);
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
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityOutput.GetReasonString RVA 0x1b2a650 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3a650(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_01b3a6f0 + 0x1b3a664);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3a6f4 + 0x1b3a678));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8aa5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8aa5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_01b3a6f8 + 0x1b3a6d0);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x398);
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityOutput.GetFlyType RVA 0x1b2a6fc =====

undefined4 FUN_01b3a6fc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8aa6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8aa6,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return 0x53;
}



// ===== FAT.ScoreBoardActivity$$FillExpireTokenReward RVA 0x1b2a750 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3a750(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int aiStack_24 [3];
  
  pcVar3 = (char *)(_UNK_01b3a9f4 + 0x1b3a76c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3a9f8 + 0x1b3a780));
    func_0x01384978(*(undefined4 *)(_UNK_01b3a9fc + 0x1b3a78c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3aa00 + 0x1b3a798));
    func_0x01384978(*(undefined4 *)(_UNK_01b3aa04 + 0x1b3a7a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b3aa08 + 0x1b3a7b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b3aa0c + 0x1b3a7bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b3aa10 + 0x1b3a7c8));
    *pcVar3 = '\x01';
  }
  aiStack_24[2] = 0;
  aiStack_24[1] = 0;
  aiStack_24[0] = 0;
  iVar1 = func_0x0229f06c(0x8a76,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar2 = *(int *)(param_1 + 0x48);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x24);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        iVar1 = func_0x03465bcc(iVar1,**(undefined4 **)(_UNK_01b3aa14 + 0x1b3a850));
        if (0 < iVar1) {
          iVar1 = *(int *)(param_1 + 0x80);
        }
        if (0 < iVar1) {
          if (*(int *)(**(int **)(_UNK_01b3aa18 + 0x1b3a870) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x028c8d78(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0302a45c(aiStack_24 + 1,iVar1,aiStack_24,
                          **(undefined4 **)(_UNK_01b3aa1c + 0x1b3a8ac));
          iVar1 = aiStack_24[0];
          if (aiStack_24[0] == 0) {
            func_0x01384bf0();
          }
          func_0x024509cc(iVar1,**(undefined4 **)(_UNK_01b3aa20 + 0x1b3a8d0));
          iVar1 = aiStack_24[0];
          uVar6 = *(undefined4 *)(param_1 + 0x80);
          uVar4 = *(undefined4 *)(param_1 + 0x9c);
          if (aiStack_24[0] == 0) {
            func_0x01384bf0();
          }
          func_0x0245025c(iVar1,uVar4,uVar6,**(undefined4 **)(_UNK_01b3aa24 + 0x1b3a8fc));
          iVar1 = *(int *)(param_1 + 0x48);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          piVar5 = *(int **)(_UNK_01b3aa28 + 0x1b3a928);
          uVar4 = *(undefined4 *)(iVar1 + 0x24);
          iVar1 = *piVar5;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar5;
          }
          func_0x02b4aed4(uVar4,param_2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x3a8),
                          aiStack_24[0],0);
          func_0x028c98a0(aiStack_24 + 1,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a76,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$FillExpireMilestoneReward RVA 0x1b2aa2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3aa2c(int param_1,int param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01b3ab00 + 0x1b3aa44);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3ab04 + 0x1b3aa58));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ab08 + 0x1b3aa64));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a77,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a77,0);
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
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0xc0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      func_0x0328f380(param_2,*(undefined4 *)(param_1 + 0xc0),
                      **(undefined4 **)(_UNK_01b3ab0c + 0x1b3aae4));
      pcVar4 = (char *)(_UNK_01b36f14 + 0x1b36e6c);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01b36f18 + 0x1b36e80));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x8a0a,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x8a0a,0);
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
        uVar5 = *(undefined4 *)(iVar1 + 0xc);
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
        func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
        return;
      }
      iVar1 = *(int *)(param_1 + 0xc0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar3) {
        (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
        return;
      }
      return;
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$FillExpireMilestoneItemReward RVA 0x1b2ab10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3ab10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
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
  
  pcVar6 = (char *)(_UNK_01b3ad78 + 0x1b3ab2c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3ad7c + 0x1b3ab40));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ad80 + 0x1b3ab4c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ad84 + 0x1b3ab58));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ad88 + 0x1b3ab64));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ad8c + 0x1b3ab70));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ad90 + 0x1b3ab7c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ad94 + 0x1b3ab88));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a78,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a78,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar1 = 0;
      piVar10 = *(int **)(_UNK_01b3ad98 + 0x1b3ac10);
      while( true ) {
        iVar7 = *(int *)(param_1 + 0xc4);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar1) break;
        iVar7 = *(int *)(param_1 + 0xc4);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x03259410(iVar7,iVar1,**(undefined4 **)(_UNK_01b3ad9c + 0x1b3ac48));
        if (0 < iVar7) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar10;
          iVar2 = *(int *)(iVar2 + 0x40);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar10;
          }
          uVar8 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x3a4);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uStack_30 = **(undefined4 **)(_UNK_01b3ada0 + 0x1b3acb8);
          uStack_2c = **(undefined4 **)(_UNK_01b3ada4 + 0x1b3acc4);
          uStack_34 = 0x67;
          uStack_28 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_38 = 0;
          uVar8 = func_0x01cdcbac(iVar2,iVar7,1,uVar8);
          iVar7 = *(int *)(param_2 + 8);
          uVar9 = *(uint *)(param_2 + 0xc);
          piVar4 = *(int **)(_UNK_01b3ada8 + 0x1b3ad14);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          iVar2 = *piVar4;
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          if (uVar9 < *(uint *)(iVar7 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar9 + 1;
            *(undefined4 *)(iVar7 + uVar9 * 4 + 0x10) = uVar8;
          }
          else {
            func_0x0328f170(param_2,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar1 = iVar1 + 1;
      }
      pcVar6 = (char *)(_UNK_01b369e0 + 0x1b36958);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01b369e4 + 0x1b3696c));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x8a1f,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x8a1f,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_30 = 0;
        func_0x0245494c(&uStack_48,0,0);
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
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
        uStack_50 = 0;
        uStack_4c = 0;
        func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5);
        return;
      }
      iVar1 = *(int *)(param_1 + 0xc4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      return;
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$TrackEndReward RVA 0x1b2adac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3adac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01b3ae88 + 0x1b3adc0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3ae8c + 0x1b3add4));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ae90 + 0x1b3ade0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a79,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a79,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xd4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    uVar5 = *(undefined4 *)(param_1 + 0xd4);
    if (*(int *)(**(int **)(_UNK_01b3ae94 + 0x1b3ae54) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar5 = func_0x01b3d83c(uVar5);
    pcVar3 = (char *)(_UNK_0230e318 + 0x230e21c);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0230e31c + 0x230e230),uVar5,0);
      func_0x01384978(*(undefined4 *)(_UNK_0230e320 + 0x230e23c));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa18,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0xa18,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar5,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485278(&uStack_38,uVar5,0);
      iVar4 = *(int *)(iVar1 + 8);
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 3;
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
      return;
    }
    if (*(int *)(**(int **)(_UNK_0230e324 + 0x230e29c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02f74dec(**(undefined4 **)(_UNK_0230e328 + 0x230e2b8));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b489c0(&uStack_24,param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0x48) = uStack_24;
    *(undefined4 *)(iVar1 + 0x4c) = uStack_20;
    *(undefined4 *)(iVar1 + 0x50) = uStack_1c;
    *(undefined4 *)(iVar1 + 0x54) = uVar5;
    func_0x019930d8(iVar1,0,0);
    return;
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityRowConf.GetRowConfIdList RVA 0x1b2ae98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3ae98(int param_1,int param_2)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x8aa7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8aa7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02235f34 + 0x2235e40);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02235f38 + 0x2235e54),param_1,param_2,0);
      *pcVar5 = '\x01';
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
    uVar4 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02235f3c + 0x2235f24));
    return uVar4;
  }
  if ((*(char *)(param_1 + 0x99) != '\0') && (*(int *)(param_1 + 0x90) == param_2)) {
    uVar4 = *(undefined4 *)(param_1 + 0x5c);
  }
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityRowConf.GetRowConfStr RVA 0x1b2af10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3af10(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01b3affc + 0x1b3af2c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3b000 + 0x1b3af40));
    func_0x01384978(*(undefined4 *)(_UNK_01b3b004 + 0x1b3af4c));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x8aa8,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450cc8(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01b3b008 + 0x1b3afc8));
    if (iVar1 == 0) {
      uStack_14 = **(undefined4 **)(**(int **)(_UNK_01b3b00c + 0x1b3afec) + 0x5c);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8aa8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02198e04(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityRowConf.GetCycleStartRowId RVA 0x1b2b010 =====

undefined4 FUN_01b3b010(int param_1,int param_2)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x8aa9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8aa9,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  if ((*(char *)(param_1 + 0x99) != '\0') && (*(int *)(param_1 + 0x90) == param_2)) {
    uVar4 = *(undefined4 *)(param_1 + 0x50);
  }
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$RecordTokenChange RVA 0x1b2b088 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3b088(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_01b3b1e4 + 0x1b3b0a8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3b1e8 + 0x1b3b0c0));
    func_0x01384978(*(undefined4 *)(_UNK_01b3b1ec + 0x1b3b0cc));
    func_0x01384978(*(undefined4 *)(_UNK_01b3b1f0 + 0x1b3b0d8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ec,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xf0);
    uVar3 = *(undefined4 *)(param_1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01b3e198(iVar1,uVar3,param_2,param_3,param_4,param_5,0);
    iVar1 = **(int **)(_UNK_01b3b1f4 + 0x1b3b178);
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b3b1f8 + 0x1b3b1a0));
    uVar3 = *(undefined4 *)(param_1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a5acc(iVar1,param_4,param_3,uVar3,**(undefined4 **)(_UNK_01b3b1fc + 0x1b3b1d0));
  }
  else {
    iVar1 = func_0x0229f13c(0x5ec,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218fdc0(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$RecordUseTokenStart RVA 0x1b2b200 =====

void FUN_01b3b200(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x89ed,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xf4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01b3e44c(iVar1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x89ed,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022408a8(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$RecordUseTokenSpawn RVA 0x1b2b2c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3b2c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  pcVar3 = (char *)(_UNK_01b3b434 + 0x1b3b2e0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3b438 + 0x1b3b2f8));
    func_0x01384978(*(undefined4 *)(_UNK_01b3b43c + 0x1b3b304));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x89f5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b3b440 + 0x1b3b368));
    func_0x01b3e444(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01b3e374(iVar1,param_2,1,param_3,param_4,0,0);
    iVar4 = *(int *)(param_1 + 0xf4);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x20);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar4 + 8);
    uVar6 = *(uint *)(iVar4 + 0xc);
    piVar2 = *(int **)(_UNK_01b3b444 + 0x1b3b3e4);
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    iVar7 = *piVar2;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar6) {
      uVar6 = *(uint *)(iVar4 + 0xc);
      func_0x0328f754(iVar4,uVar6 + 1,
                      *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38) +
                                         0x10) + 0x60) + 0x3c));
      iVar5 = *(int *)(iVar4 + 8);
      *(uint *)(iVar4 + 0xc) = uVar6 + 1;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar6) {
        func_0x01384bf4();
      }
      *(int *)(iVar5 + uVar6 * 4 + 0x10) = iVar1;
      return;
    }
    *(uint *)(iVar4 + 0xc) = uVar6 + 1;
    *(int *)(iVar5 + uVar6 * 4 + 0x10) = iVar1;
  }
  else {
    iVar1 = func_0x0229f13c(0x89f5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02178970(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$RecordUseTokenFinish RVA 0x1b2b448 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3b448(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b3b53c + 0x1b3b45c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3b540 + 0x1b3b470));
    func_0x01384978(*(undefined4 *)(_UNK_01b3b544 + 0x1b3b47c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3b548 + 0x1b3b488));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x89f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89f9,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = **(int **)(_UNK_01b3b54c + 0x1b3b4e0);
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b3b550 + 0x1b3b508));
  uVar5 = *(undefined4 *)(param_1 + 0xdc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349e128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar5,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.ScoreBoardActivity$$TrackHandbookUnlock RVA 0x1b2b558 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3b558(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01b3b70c + 0x1b3b574);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3b710 + 0x1b3b588));
    func_0x01384978(*(undefined4 *)(_UNK_01b3b714 + 0x1b3b594));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x8a92,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a92,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar8,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_2 != 0) {
    uVar6 = func_0x0210e2d4(param_2,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dd0230(iVar1,uVar6,0);
  if (iVar1 != 0) {
    iVar8 = *(int *)(iVar1 + 0x44);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x0364c54c(iVar8,uVar6,**(undefined4 **)(_UNK_01b3b718 + 0x1b3b668));
    iVar7 = *(int *)(iVar1 + 0x44);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0xc);
    uVar6 = func_0x01b3d4e0(param_1);
    uVar4 = func_0x01b3cf04(param_1);
    uVar2 = func_0x01b3cf58(param_1);
    uVar3 = func_0x01b3d04c(param_1);
    uStack_30 = func_0x01b3d0a4(param_1);
    uStack_2c = *(undefined4 *)(iVar1 + 0x10);
    uStack_38 = (uint)(0 < iVar7 && iVar8 + 1 == iVar7);
    uStack_28 = 0;
    uStack_34 = uVar3;
    func_0x0230dd44(param_1,uVar6,uVar4,uVar2);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$TryAddToken RVA 0x1b2b71c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3b71c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01b3b7e8 + 0x1b3b73c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3b7ec + 0x1b3b750));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8aaa,0);
  if (iVar1 == 0) {
    piVar3 = *(int **)(_UNK_01b3b7f0 + 0x1b3b7b4);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    FUN_01b35444(param_1,param_2,param_3,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1c));
  }
  else {
    iVar1 = func_0x0229f13c(0x8aaa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$AddToken RVA 0x1b2b7f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3b7f4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
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
  int iStack_20;
  
  pcVar7 = (char *)(_UNK_01b3b948 + 0x1b3b814);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3b94c + 0x1b3b828));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e9,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    if (0x7fffffff - param_2 <= iVar1) {
      param_2 = 0x7fffffff - iVar1;
    }
    if (0 < param_2) {
      *(int *)(param_1 + 0x80) = param_2 + iVar1;
      iVar2 = FUN_01b3a530(param_1);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(param_1 + 0x10c);
      }
      if (iVar2 != 0 && iVar3 != 0) {
        func_0x02af96e4(iVar3,*(undefined4 *)(param_1 + 0x80),0);
      }
      piVar8 = *(int **)(_UNK_01b3b950 + 0x1b3b8c8);
      iVar3 = *piVar8;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar8;
      }
      if (param_3 != *(int *)(*(int *)(iVar3 + 0x5c) + 0x398)) {
        iStack_20 = 0;
        func_0x019a4b9c(*(undefined4 *)(param_1 + 0x9c),param_2,*(undefined4 *)(param_1 + 0x80),
                        param_3);
      }
      iStack_20 = param_3;
      FUN_01b3b088(param_1,iVar1,*(undefined4 *)(param_1 + 0x80),param_2);
      iVar1 = func_0x0229f06c(0x5ee,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x5ee,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_30 = 0;
        iStack_20 = 0;
        func_0x0245494c(&uStack_48,0,0);
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        uStack_24 = uStack_3c;
        iStack_20 = uStack_38;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_30,param_1,0);
        iVar3 = *(int *)(iVar1 + 8);
        uVar6 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 2;
        if (iVar1 == 0) {
          uVar5 = 1;
        }
        uStack_50 = 0;
        uStack_4c = 0;
        func_0x0245495c(iVar3,uVar6,&uStack_30,uVar5);
        return;
      }
      iVar1 = *(int *)(param_1 + 0x118);
      if (iVar1 == 0) {
        return;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x80);
      pcVar7 = (char *)(_UNK_02befe10 + 0x2befcf4);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08),uVar6,0);
        *pcVar7 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x5ca,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x5ca,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar6,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,uVar6,0);
        iVar2 = *(int *)(iVar3 + 8);
        uVar6 = *(undefined4 *)(iVar3 + 0xc);
        iVar1 = *(int *)(iVar3 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar1 == 0) {
          uVar5 = 2;
        }
        func_0x0245495c(iVar2,uVar6,&uStack_38,uVar5,0,0);
        return;
      }
      iVar3 = func_0x02beec64(iVar1);
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar1 + 8);
        uVar9 = *(uint *)(iVar1 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar1 + 0x14);
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar2 + 1 < iVar3) {
          do {
            iVar2 = iVar2 + 1;
            iVar4 = func_0x02befe18(iVar1,iVar2,uVar6);
            if (iVar4 == 0) {
              iVar2 = *(int *)(iVar1 + 0x14);
              break;
            }
            *(int *)(iVar1 + 0x14) = iVar2;
          } while (iVar3 + -1 != iVar2);
        }
        if ((int)uVar9 < iVar2) {
          iVar3 = *(int *)(iVar1 + 0x20);
          if (0x7fffffff < (*(uint *)(iVar1 + 0x10) & uVar9)) {
            *(int *)(iVar1 + 0x10) = iVar2;
          }
          if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02befe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
            return;
          }
        }
      }
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5e9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_20 = 0;
    func_0x0217ab90(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$GetTokenBoostRate RVA 0x1b2b954 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b3b954(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x89e6,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x118);
    if (param_1 == 0) {
      return 1;
    }
    pcVar4 = (char *)(_UNK_02beee30 + 0x2beed2c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02beee34 + 0x2beed40),0);
      func_0x01384978(*(undefined4 *)(_UNK_02beee38 + 0x2beed4c));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5ca4,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02beec64(param_1);
      if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), -1 < iVar1)) {
        iVar3 = *(int *)(param_1 + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (iVar1 < *(int *)(iVar3 + 0xc)) {
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x14);
          uVar5 = *(undefined4 *)(param_1 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0364c9b8(iVar1,uVar5,**(undefined4 **)(_UNK_02beee3c + 0x2beee14));
          if (iVar1 < 2) {
            iVar1 = 1;
          }
          return iVar1;
        }
      }
      return 1;
    }
    iVar1 = func_0x0229f13c(0x5ca4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x89e6,0);
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  iVar1 = func_0x0245498c(&uStack_30,0,0);
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$EnsureTokenBoostAffordable RVA 0x1b2b9c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3b9c0(int param_1,uint param_2)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
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
  
  iVar1 = func_0x0229f06c(0x89e9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89e9,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    uVar10 = func_0x0245495c(iVar5,uVar10,&uStack_38,uVar4,0,0);
    return uVar10;
  }
  iVar1 = *(int *)(param_1 + 0x118);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x80);
  pcVar6 = (char *)(_UNK_02bf02c4 + 0x2bf0164);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf02c8 + 0x2bf0178),param_2,uVar3,0);
    *pcVar6 = '\x01';
  }
  uVar10 = 0;
  iVar5 = func_0x0229f06c(0x5c90,0);
  if (iVar5 == 0) {
    uVar13 = func_0x02beec64(iVar1);
    iVar5 = (int)((ulonglong)uVar13 >> 0x20);
    if ((int)uVar13 != 0) {
      iVar7 = *(int *)(iVar1 + 8);
      if (iVar7 == 0) {
        func_0x01384bf0();
        iVar5 = extraout_r1;
      }
      if ((*(char *)(iVar7 + 0x1c) == '\0') && (uVar11 = *(uint *)(iVar1 + 0x10), -1 < (int)uVar11))
      {
        bVar9 = false;
        puVar12 = *(undefined4 **)(_UNK_02bf02cc + 0x2bf0228);
        iVar7 = 0;
        do {
          uVar13 = CONCAT44(iVar5,iVar7);
          iVar8 = *(int *)(iVar1 + 8);
          if (iVar8 == 0) {
            uVar13 = func_0x01384bf0(iVar7,iVar5);
            uVar11 = *(uint *)(iVar1 + 0x10);
          }
          iVar5 = *(int *)(iVar8 + 0x14);
          if (iVar5 == 0) {
            func_0x01384bf0((int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
          }
          uVar11 = func_0x0364c9b8(iVar5,uVar11,*puVar12);
          if ((int)uVar11 < 2) {
            uVar11 = 1;
          }
          uVar2 = (uint)((ulonglong)param_2 * (ulonglong)uVar11);
          iVar8 = uVar11 * ((int)param_2 >> 0x1f) +
                  (int)((ulonglong)param_2 * (ulonglong)uVar11 >> 0x20);
          iVar5 = uVar3 - uVar2;
          iVar7 = (int)uVar3 >> 0x1f;
          if ((int)(iVar7 - (iVar8 + (uint)(uVar3 < uVar2))) < 0 ==
              (SBORROW4(iVar7,iVar8) != SBORROW4(iVar7 - iVar8,(uint)(uVar3 < uVar2)))) {
            if (!bVar9) {
              return 0;
            }
            break;
          }
          iVar7 = *(int *)(iVar1 + 0x10);
          bVar9 = true;
          uVar11 = iVar7 - 1;
          *(uint *)(iVar1 + 0x10) = uVar11;
        } while (uVar11 < 0x80000000);
        iVar1 = *(int *)(iVar1 + 0x1c);
        uVar10 = 1;
        if (iVar1 != 0) {
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        }
      }
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x5c90,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    uVar10 = func_0x0217a5ac(iVar5,iVar1,param_2,uVar3);
  }
  return uVar10;
}



// ===== FAT.ScoreBoardActivity$$GetCurrentDropMilestoneIndex RVA 0x1b2ba38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b3ba38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b3baec + 0x1b3ba4c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3baf0 + 0x1b3ba60));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x89ea,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89ea,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (0 < iVar1) {
      iVar4 = *(int *)(param_1 + 0x70);
      if (iVar1 <= iVar4) {
        iVar4 = iVar1 + -1;
      }
      return iVar4;
    }
  }
  return 0;
}



// ===== FAT.ScoreBoardActivity$$RefreshCachedOutputsOne RVA 0x1b2baf4 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01b3c024) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3baf4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(iRam01b3c038 + 0x1b3bb10);
  iStack_38 = param_1;
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3c03c + 0x1b3bb24));
    func_0x01384978(*(undefined4 *)(_UNK_01b3c040 + 0x1b3bb30));
    func_0x01384978(*(undefined4 *)(_UNK_01b3c044 + 0x1b3bb3c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3c048 + 0x1b3bb48));
    func_0x01384978(*(undefined4 *)(_UNK_01b3c04c + 0x1b3bb54));
    func_0x01384978(*(undefined4 *)(_UNK_01b3c050 + 0x1b3bb60));
    func_0x01384978(*(undefined4 *)(_UNK_01b3c054 + 0x1b3bb6c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3c058 + 0x1b3bb78));
    func_0x01384978(*(undefined4 *)(_UNK_01b3c05c + 0x1b3bb84));
    func_0x01384978(*(undefined4 *)(_UNK_01b3c060 + 0x1b3bb90));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x89eb,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x89eb,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar11 = iStack_38;
    piStack_34 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    piStack_34 = (int *)uStack_4c;
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&iStack_38,iVar11,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar11 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar11,uVar12,&iStack_38,uVar8,0,0);
    return;
  }
  iVar3 = *(int *)(iStack_38 + 0x110);
  if (iVar3 == 0) {
    iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01b3c064 + 0x1b3bc00));
    func_0x02450578(iVar3,**(undefined4 **)(_UNK_01b3c068 + 0x1b3bc14));
    *(int *)(iStack_38 + 0x110) = iVar3;
    if (iVar3 == 0) {
      uVar15 = func_0x01384bf0();
      if ((int)((ulonglong)uVar15 >> 0x20) != 1) {
        if (piStack_34 != (int *)0x0) {
          iVar3 = *piStack_34;
          uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar6[-1] == **(int **)(_UNK_01b3c088 + 0x1b3bfc4)) {
                puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
                goto LAB_01b3c00c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piStack_34,**(int **)(_UNK_01b3c088 + 0x1b3bfc4),0)
          ;
LAB_01b3c00c:
          (*(code *)*puVar4)(piStack_34,puVar4[1]);
        }
        func_0x01459844((int)uVar15);
        func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      piVar6 = (int *)func_0x0145b008((int)uVar15);
      iVar3 = *piVar6;
      func_0x0145b0f8();
      piVar7 = piStack_34;
      goto LAB_01b3becc;
    }
  }
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar3 = *param_2;
  uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01b3c06c + 0x1b3bc58)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
        goto LAB_01b3bca0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01b3c06c + 0x1b3bc58),0);
LAB_01b3bca0:
  piStack_34 = (int *)(*(code *)*puVar4)(param_2,puVar4[1]);
  piVar10 = *(int **)(_UNK_01b3c070 + 0x1b3bcc0);
  piVar6 = piStack_34;
LAB_01b3bcc0:
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  piVar7 = piStack_34;
  iVar3 = *piVar6;
  uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01b3c080 + 0x1b3bcdc)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
        goto LAB_01b3bd2c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piStack_34,**(int **)(_UNK_01b3c080 + 0x1b3bcdc),0);
LAB_01b3bd2c:
  iVar3 = (*(code *)*puVar4)(piVar7,puVar4[1]);
  if (iVar3 != 0) {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar6 = piStack_34;
    iVar3 = *piVar7;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_01b3bda8;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piStack_34,*piVar10,0);
LAB_01b3bda8:
    uVar12 = (*(code *)*puVar4)(piVar6,puVar4[1]);
    if (*(int *)(**(int **)(_UNK_01b3c074 + 0x1b3bdc8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01b3c5a8(&iStack_30,uVar12);
    if (0 < iStack_30) {
      iVar3 = iStack_2c;
      if (0 < iStack_2c) {
        iVar3 = iStack_28;
      }
      if (0 < iVar3) {
        iVar3 = *(int *)(iStack_38 + 0x110);
        iStack_2c = 0;
        iStack_30 = 0;
        uStack_40 = **(undefined4 **)(_UNK_01b3c078 + 0x1b3be1c);
        iStack_28 = 0;
        func_0x03923edc(&iStack_30);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar2 = iStack_28;
        iVar1 = iStack_2c;
        iVar11 = iStack_30;
        iVar14 = *(int *)(iVar3 + 8);
        uVar5 = *(uint *)(iVar3 + 0xc);
        iVar13 = **(int **)(_UNK_01b3c07c + 0x1b3be64);
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        if (uVar5 < *(uint *)(iVar14 + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar5 + 1;
          iVar14 = iVar14 + uVar5 * 0xc;
          *(int *)(iVar14 + 0x10) = iVar11;
          *(int *)(iVar14 + 0x14) = iVar1;
          *(int *)(iVar14 + 0x18) = iVar2;
          piVar6 = piStack_34;
        }
        else {
          uStack_40 = *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38);
          func_0x024505a8(iVar3,iVar11,iVar1,iVar2);
          piVar6 = piStack_34;
        }
      }
    }
    goto LAB_01b3bcc0;
  }
  iVar3 = 0;
LAB_01b3becc:
  piVar6 = piStack_34;
  if (piVar7 != (int *)0x0) {
    iVar11 = *piVar7;
    uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01b3c084 + 0x1b3bee4)) {
          puVar4 = (undefined4 *)(iVar11 + *piVar10 * 8 + 0xc0);
          goto LAB_01b3bf34;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piStack_34,**(int **)(_UNK_01b3c084 + 0x1b3bee4),0);
LAB_01b3bf34:
    (*(code *)*puVar4)(piVar6,puVar4[1]);
  }
  if (iVar3 != 0) {
    func_0x01384bec(iVar3);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$ResolveTokenBoostOutput RVA 0x1b2c08c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3c08c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01b3c170 + 0x1b3c0ac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3c174 + 0x1b3c0c4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x89f2,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x118) == 0) {
      *param_4 = param_2;
      if (param_5 != 0) {
        *(undefined4 *)(param_5 + 0xc) = 0;
        *(int *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) + 1;
      }
    }
    else {
      func_0x02bf06e8(*(int *)(param_1 + 0x118),param_2,param_3,param_4,param_5,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x89f2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02236070(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$SpawnTokenItem RVA 0x1b2c178 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3c178(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01b3c308 + 0x1b3c198);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3c30c + 0x1b3c1b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b3c310 + 0x1b3c1bc));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x89f3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b39ba4(param_1,param_2,param_3,param_4,param_5,param_6,&uStack_28);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x01cdcbac(iVar1,param_2,1,param_3,0,0,0,0xf1,
                              **(undefined4 **)(_UNK_01b3c314 + 0x1b3c2a8),
                              **(undefined4 **)(_UNK_01b3c318 + 0x1b3c2b4),0);
      uVar2 = 0;
    }
    else {
      uVar3 = 0;
      uVar2 = uStack_28;
    }
    FUN_01b3b2c0(param_1,param_2,uVar2,uVar3);
    func_0x01b3c31c(param_1,param_2);
  }
  else {
    iVar1 = func_0x0229f13c(0x89f3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0225ed2c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$TrackUseTokenSpawn RVA 0x1b2c31c =====

void FUN_01b3c31c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x89f6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89f6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar6,0,0);
    return;
  }
  uVar8 = func_0x01b3d4e0(param_1);
  uVar6 = func_0x01b3cf04(param_1);
  uVar2 = func_0x01b3cf58(param_1);
  uVar3 = func_0x01b3d04c(param_1);
  uVar4 = func_0x01b3d0a4(param_1);
  uVar5 = func_0x02157e88(param_2,0);
  iStack_30 = func_0x01b3c8e4(param_1);
  if (iStack_30 < 2) {
    iStack_30 = 1;
  }
  uStack_2c = 0;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  uStack_38 = param_2;
  uStack_34 = uVar5;
  func_0x0230e474(param_1,uVar8,uVar6,uVar2);
  return;
}



// ===== FAT.ScoreBoardActivity$$InitTokenBoost RVA 0x1b2c40c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3c40c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01b3c530 + 0x1b3c420);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3c534 + 0x1b3c434));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a63,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a63,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3);
    return;
  }
  if ((*(int *)(param_1 + 0x48) == 0) ||
     (iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x1c), iVar1 < 1)) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x118);
  if (iVar5 == 0) {
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b3c538 + 0x1b3c4b0));
    func_0x02bf44e8(iVar5,0);
    *(int *)(param_1 + 0x118) = iVar5;
    if (iVar5 == 0) {
      func_0x01384bf0();
      iVar5 = 0;
    }
  }
  func_0x02befbb0(iVar5,iVar1,param_1,0);
  iVar1 = *(int *)(param_1 + 0x118);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02bf02d0(iVar1,0);
  uVar7 = *(undefined4 *)(param_1 + 0x80);
  iVar1 = *(int *)(param_1 + 0x118);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_02befe10 + 0x2befcf4);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08),uVar7,0);
    *pcVar4 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x5ca,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x5ca,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar7,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,uVar7,0);
    iVar6 = *(int *)(iVar5 + 8);
    uVar7 = *(undefined4 *)(iVar5 + 0xc);
    iVar1 = *(int *)(iVar5 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar5 = func_0x02beec64(iVar1);
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(uint *)(iVar1 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0x14);
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar6 + 1 < iVar5) {
      do {
        iVar6 = iVar6 + 1;
        iVar2 = func_0x02befe18(iVar1,iVar6,uVar7);
        if (iVar2 == 0) {
          iVar6 = *(int *)(iVar1 + 0x14);
          break;
        }
        *(int *)(iVar1 + 0x14) = iVar6;
      } while (iVar5 + -1 != iVar6);
    }
    if ((int)uVar8 < iVar6) {
      iVar5 = *(int *)(iVar1 + 0x20);
      if (0x7fffffff < (*(uint *)(iVar1 + 0x10) & uVar8)) {
        *(int *)(iVar1 + 0x10) = iVar6;
      }
      if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02befe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x14));
        return;
      }
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$ClearTokenBoost RVA 0x1b2c53c =====

void FUN_01b3c53c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a80,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a80,0);
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
  if (*(int *)(param_1 + 0x118) != 0) {
    func_0x02befc68(*(int *)(param_1 + 0x118),0);
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  return;
}



// ===== FAT.ScoreBoardActivity$$ParseMilestoneOutputOne RVA 0x1b2c5a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3c5a8(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01b3c72c + 0x1b3c5c4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3c730 + 0x1b3c5d8));
    func_0x01384978(*(undefined4 *)(_UNK_01b3c734 + 0x1b3c5e4));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x89ec,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_01b3c738 + 0x1b3c650) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&iStack_30,param_2,0);
    if (param_2 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = func_0x02450d58(param_2,0x3a,0);
    }
    iVar1 = iStack_30;
    if (0 < iStack_30) {
      iVar1 = iStack_2c;
    }
    iVar6 = iStack_2c;
    if (((0 < iVar1) && (iStack_28 < 1)) && (-1 < iVar2)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02450d68(param_2,0x3a,iVar2 + 1,0);
      if (0x7fffffff < uVar3) {
        iVar6 = 1;
        iStack_28 = iStack_2c;
      }
    }
    puVar4 = *(undefined4 **)(_UNK_01b3c73c + 0x1b3c708);
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    uVar5 = *puVar4;
    *(undefined4 *)(param_1 + 1) = 0;
    func_0x03923edc(param_1,iStack_30,iVar6,iStack_28,uVar5);
  }
  else {
    iVar2 = func_0x0229f13c(0x89ec,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02175cb4(&iStack_30,iVar2,param_2,0);
    *(int *)(param_1 + 1) = iStack_28;
    *param_1 = CONCAT44(iStack_2c,iStack_30);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardBoostHost.get_TokenNum RVA 0x1b2c740 =====

undefined4 FUN_01b3c740(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8aab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8aab,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x80);
}



// ===== FAT.ScoreBoardActivity$$get_TokenBoost RVA 0x1b2c794 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3c794(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8aac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8aac,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022327e0 + 0x2232700);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022327e4 + 0x2232714),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022327e8 + 0x22327d0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x118);
}



// ===== FAT.ScoreBoardActivity$$get_HasTokenBoost RVA 0x1b2c7e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3c7e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8aad,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x118);
    if (param_1 == 0) {
      return 0;
    }
    pcVar4 = (char *)(_UNK_02beed10 + 0x2beec78);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02beed14 + 0x2beec8c),0);
      *pcVar4 = '\x01';
    }
    uVar5 = 0;
    iVar1 = func_0x0229f06c(0x5cb,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 8) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 0;
        if (0 < *(int *)(iVar1 + 0xc)) {
          uVar5 = 1;
        }
      }
      return uVar5;
    }
    iVar1 = func_0x0229f13c(0x5cb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8aad,0);
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  uVar5 = func_0x0245496c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.ScoreBoardActivity$$get_CanShowTokenBoost RVA 0x1b2c854 =====

undefined4 FUN_01b3c854(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x8aae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8aae,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar3,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_01b3c7e8(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x118);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    uVar2 = func_0x02bef79c(iVar1,0);
    if (uVar2 < 0x80000000) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$get_CurrentTokenBoostRate RVA 0x1b2c8e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b3c8e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x89f8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x89e6,0);
    if (iVar1 == 0) {
      param_1 = *(int *)(param_1 + 0x118);
      if (param_1 == 0) {
        return 1;
      }
      pcVar4 = (char *)(_UNK_02beee30 + 0x2beed2c);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02beee34 + 0x2beed40),0);
        func_0x01384978(*(undefined4 *)(_UNK_02beee38 + 0x2beed4c));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x5ca4,0);
      if (iVar1 == 0) {
        iVar1 = func_0x02beec64(param_1);
        if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), -1 < iVar1)) {
          iVar3 = *(int *)(param_1 + 8);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x14);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (iVar1 < *(int *)(iVar3 + 0xc)) {
            iVar1 = *(int *)(param_1 + 8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x14);
            uVar5 = *(undefined4 *)(param_1 + 0x10);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x0364c9b8(iVar1,uVar5,**(undefined4 **)(_UNK_02beee3c + 0x2beee14));
            if (iVar1 < 2) {
              iVar1 = 1;
            }
            return iVar1;
          }
        }
        return 1;
      }
      iVar1 = func_0x0229f13c(0x5ca4,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x89e6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x89f8,0);
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  iVar1 = func_0x0245498c(&uStack_30,0,0);
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$get_CurrentTokenBoostLevelAdd RVA 0x1b2c93c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b3c93c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  int extraout_r3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  longlong lVar8;
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
  
  iVar1 = func_0x0229f06c(0x8aaf,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x118);
    if (param_1 == 0) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_02bef68c + 0x2bef590);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bef690 + 0x2bef5a4),0);
      func_0x01384978(*(undefined4 *)(_UNK_02bef694 + 0x2bef5b0));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5c96,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02beec64(param_1);
      if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), -1 < iVar1)) {
        iVar5 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x20);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (iVar1 < *(int *)(iVar5 + 0xc)) {
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x20);
          uVar4 = *(uint *)(param_1 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar7 = **(undefined4 **)(_UNK_02bef698 + 0x2bef678);
          if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(iVar1 + 0xc))) {
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar1 == 0) {
              func_0x02457d50();
            }
            if (*(uint *)(iVar1 + 0xc) <= uVar4) {
              func_0x02457d5c();
            }
            return *(int *)(iVar1 + uVar4 * 4 + 0x10);
          }
          func_0x02457d6c(*(undefined4 *)(iRam0364ca44 + 0x364ca10));
          uVar3 = func_0x02457d58();
          uVar2 = func_0x02457d6c(*(undefined4 *)(iRam0364ca48 + 0x364ca24));
          func_0x047901e8(uVar3,uVar2,0);
          func_0x02457d90(uVar3,uVar7);
          lVar8 = func_0x02457d94();
          uVar4 = (uint)((ulonglong)lVar8 >> 0x20);
          pcVar6 = (char *)(iRam0364cb28 + 0x364ca68);
          uStack_28 = uVar7;
          uStack_24 = uVar3;
          if (*pcVar6 == '\0') {
            func_0x02457d54(*(undefined4 *)(iRam0364cb2c + 0x364ca80));
            *pcVar6 = '\x01';
          }
          if ((-1 < lVar8) && ((int)uVar4 < *(int *)((int)lVar8 + 0xc))) {
            func_0x03031db0(extraout_r2,**(undefined4 **)(iRam0364cb30 + 0x364cab0),
                            *(undefined4 *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x80));
            iVar1 = *(int *)((int)lVar8 + 8);
            if (iVar1 == 0) {
              func_0x02457d50();
            }
            if (*(uint *)(iVar1 + 0xc) <= uVar4) {
              func_0x02457d5c();
            }
            iVar1 = iVar1 + uVar4 * 4;
            *(undefined4 *)(iVar1 + 0x10) = extraout_r2;
            return iVar1;
          }
          func_0x02457d6c(*(undefined4 *)(iRam0364cb34 + 0x364caf4));
          uVar7 = func_0x02457d58();
          uVar3 = func_0x02457d6c(*(undefined4 *)(iRam0364cb38 + 0x364cb08));
          func_0x047901e8(uVar7,uVar3,0);
          func_0x02457d90(uVar7,extraout_r3);
          func_0x02457d94();
          return 0;
        }
      }
      return 0;
    }
    iVar1 = func_0x0229f13c(0x5c96,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8aaf,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
  iVar1 = func_0x0245498c(&uStack_30,0,0);
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$get_CurrentTokenBoostState RVA 0x1b2c9a8 =====

undefined4 FUN_01b3c9a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8ab0,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x118);
    if (param_1 == 0) {
      return 0xffffffff;
    }
    iVar1 = func_0x0229f06c(0x5d28,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x10);
    }
    iVar1 = func_0x0229f13c(0x5d28,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8ab0,0);
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
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$get_MaxUnlockedTokenBoostState RVA 0x1b2ca14 =====

undefined4 FUN_01b3ca14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8ab1,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x118);
    if (param_1 == 0) {
      return 0xffffffff;
    }
    iVar1 = func_0x0229f06c(0x5d23,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x14);
    }
    iVar1 = func_0x0229f13c(0x5d23,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8ab1,0);
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
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$get_HasUnshownTokenBoostUnlock RVA 0x1b2ca80 =====

undefined4 FUN_01b3ca80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8ab2,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x118);
    if (param_1 == 0) {
      return 0;
    }
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x5d16,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02beec64(param_1);
      if ((iVar1 != 0) && (uVar4 = 0, *(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x14))) {
        uVar4 = 1;
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x5d16,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8ab2,0);
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
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$GetTokenBoostCost RVA 0x1b2caec =====

int FUN_01b3caec(undefined4 param_1,int param_2)

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
  
  iVar3 = 0;
  iVar1 = func_0x0229f06c(0x89e5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89e5,0);
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
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  if (0 < param_2) {
    iVar3 = FUN_01b3b954(param_1);
    iVar3 = iVar3 * param_2;
  }
  return iVar3;
}



// ===== FAT.ScoreBoardActivity$$TrySwitchTokenBoostRate RVA 0x1b2cb60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b3cb60(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  iVar1 = func_0x0229f06c(0x8ab3,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x118);
    if (param_1 == 0) {
      return 0;
    }
    pcVar8 = (char *)(_UNK_02bf0138 + 0x2bf000c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf013c + 0x2bf0020),0);
      *pcVar8 = '\x01';
    }
    uVar2 = 0;
    iVar1 = func_0x0229f06c(0x72e6,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02beec64(param_1);
      if (iVar1 != 0) {
        piVar10 = *(int **)(param_1 + 0xc);
        uVar2 = 0;
        uVar9 = 0;
        if (piVar10 != (int *)0x0) {
          iVar1 = *piVar10;
          uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == **(int **)(_UNK_02bf0140 + 0x2bf00a4)) {
                puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto LAB_02bf00ec;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_02bf0140 + 0x2bf00a4),0);
LAB_02bf00ec:
          uVar9 = (*(code *)*puVar3)(piVar10,puVar3[1]);
        }
        func_0x02befcdc(param_1,uVar9);
        if (-1 < *(int *)(param_1 + 0x14)) {
          iVar7 = *(int *)(param_1 + 0x10);
          iVar1 = iVar7 + 1;
          if (*(int *)(param_1 + 0x14) < iVar1) {
            iVar1 = -1;
          }
          uVar2 = (uint)(iVar1 != iVar7);
          if (iVar1 != iVar7) {
            *(int *)(param_1 + 0x10) = iVar1;
          }
        }
      }
      return uVar2;
    }
    iVar1 = func_0x0229f13c(0x72e6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8ab3,0);
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
  iVar7 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.ScoreBoardActivity$$MarkTokenBoostUnlockShown RVA 0x1b2cbcc =====

void FUN_01b3cbcc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8ab4,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x118);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5d1e,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02beec64(param_1);
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x14)) {
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
        }
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x5d1e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8ab4,0);
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



// ===== FAT.ScoreBoardActivity$$IsTokenBoostCostAffordable RVA 0x1b2cc34 =====

uint FUN_01b3cc34(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  iVar1 = func_0x0229f06c(0x8ab5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8ab5,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar4 = *(int *)(param_1 + 0x80);
  iVar1 = FUN_01b3caec(param_1,param_2);
  return (uint)(iVar1 <= iVar4);
}



// ===== FAT.ScoreBoardActivity$$HasRecord RVA 0x1b2ccac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3ccac(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
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
  
  pcVar7 = (char *)(_UNK_01b3ce64 + 0x1b3ccc4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3ce68 + 0x1b3ccd8));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ce6c + 0x1b3cce4));
    *pcVar7 = '\x01';
  }
  iVar8 = 0;
  iVar2 = func_0x0229f06c(0x8ab6,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8ab6,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    func_0x0245496c(&uStack_38,0,0);
    return;
  }
  piVar10 = *(int **)(_UNK_01b3ce70 + 0x1b3cd44);
  piVar11 = *(int **)(_UNK_01b3ce74 + 0x1b3cd4c);
  bVar1 = false;
  do {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0(bVar1);
    }
    iVar2 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
          goto LAB_01b3cda4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,*piVar10,0);
LAB_01b3cda4:
    iVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
    bVar1 = iVar8 < iVar2;
    if (iVar2 <= iVar8) {
      return;
    }
    if (param_2 == (int *)0x0) {
      func_0x01384bf0(0);
    }
    iVar2 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
          goto LAB_01b3ce28;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,*piVar11,0);
LAB_01b3ce28:
    iVar2 = (*(code *)*puVar3)(param_2,iVar8,puVar3[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = iVar8 + 1;
    if (*(int *)(iVar2 + 0xc) == param_1) {
      return;
    }
  } while( true );
}



// ===== FAT.ScoreBoardActivity$$GetTrackMilestoneQueue RVA 0x1b2ce78 =====

int FUN_01b3ce78(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  iVar1 = func_0x0229f06c(0x5ff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ff,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x78), 0 < iVar1)) {
    iVar4 = *(int *)(param_2 + 0xc);
    if (*(char *)(param_2 + 0x10) == '\0') {
      iVar1 = *(int *)(param_2 + 8);
    }
    iVar6 = 0;
    iVar2 = func_0x0229f06c(0x600,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x78);
      if (0 < iVar2) {
        if (iVar1 < iVar2) {
          iVar6 = iVar1 + 1;
        }
        else {
          iVar6 = iVar4 + iVar2 + 1;
        }
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x600,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      iVar6 = func_0x02180128(iVar2,param_1,iVar1,iVar4);
    }
    return iVar6;
  }
  return 0;
}



// ===== FAT.ScoreBoardActivity$$GetTrackMilestoneNum RVA 0x1b2cf04 =====

undefined4 FUN_01b3cf04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x601,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x601,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x78);
}



// ===== FAT.ScoreBoardActivity$$GetTrackDifficulty RVA 0x1b2cf58 =====

undefined4 FUN_01b3cf58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x602,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x602,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x20);
  }
  return uVar3;
}



// ===== FAT.ScoreBoardActivity$$IsTrackFinalMilestone RVA 0x1b2cfbc =====

uint FUN_01b3cfbc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x603,0);
  if (iVar1 == 0) {
    if (((param_2 != 0) && (*(char *)(param_2 + 0x10) == '\0')) && (0 < *(int *)(param_1 + 0x78))) {
      uVar4 = (uint)(*(int *)(param_2 + 8) - *(int *)(param_1 + 0x78) == -1);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x603,0);
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
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.ScoreBoardActivity$$GetTrackBoardId RVA 0x1b2d04c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b3d04c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x604,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01b2ec28 + 0x1b2eb58);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b2ec2c + 0x1b2eb6c));
      func_0x01384978(*(undefined4 *)(_UNK_01b2ec30 + 0x1b2eb78));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x605,0);
    if (iVar1 == 0) {
      iStack_14 = *(int *)(param_1 + 0x8c);
      if (*(int *)(param_1 + 0x8c) < 1) {
        iStack_14 = 0;
        if ((*(int *)(param_1 + 0xac) != 0) &&
           (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0xac),0), iVar1 != 0)) {
          iStack_14 = 0;
          uStack_18 = 0;
          func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 8),
                          **(undefined4 **)(_UNK_01b2ec34 + 0x1b2ec00));
        }
      }
      return iStack_14;
    }
    iVar1 = func_0x0229f13c(0x605,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x604,0);
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
  iVar1 = func_0x0245498c(&uStack_30,0,0);
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$GetTrackBoardRow RVA 0x1b2d0a4 =====

undefined4 FUN_01b3d0a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x606,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x606,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x84);
}



// ===== FAT.ScoreBoardActivity$$BuildTrackRewardInfo RVA 0x1b2d0f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3d0f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_01b3d478 + 0x1b3d110);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3d47c + 0x1b3d124));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d480 + 0x1b3d130));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d484 + 0x1b3d13c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d488 + 0x1b3d148));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d48c + 0x1b3d154));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d490 + 0x1b3d160));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d494 + 0x1b3d16c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d498 + 0x1b3d178));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d49c + 0x1b3d184));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d4a0 + 0x1b3d190));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d4a4 + 0x1b3d19c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d4a8 + 0x1b3d1a8));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  iVar1 = func_0x0229f06c(0x607,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      uVar2 = **(undefined4 **)(**(int **)(_UNK_01b3d4ac + 0x1b3d3d8) + 0x5c);
    }
    else {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b3d4b0 + 0x1b3d214));
      func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01b3d4b4 + 0x1b3d228));
      iVar8 = *(int *)(param_1 + 0x24);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&iStack_48,iVar8,**(undefined4 **)(_UNK_01b3d4b8 + 0x1b3d258));
      iStack_38 = iStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar11 = *(undefined4 **)(_UNK_01b3d4bc + 0x1b3d274);
      while (iVar3 = func_0x0145b12c(&iStack_38,*puVar11), iVar8 = iStack_2c, iVar3 != 0) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar8 + 8);
        iVar3 = iVar5;
        if (0 < iVar5) {
          iVar3 = *(int *)(iVar8 + 0xc);
        }
        if (0 < iVar3) {
          puVar9 = *(undefined4 **)(_UNK_01b3d4c0 + 0x1b3d2b4);
          iStack_48 = iVar5;
          uVar2 = func_0x01384abc(*puVar9,&iStack_48);
          uStack_4c = *(undefined4 *)(iVar8 + 0xc);
          uVar4 = func_0x01384abc(*puVar9,&uStack_4c);
          uVar2 = func_0x0244f690(**(undefined4 **)(_UNK_01b3d4c4 + 0x1b3d2e8),uVar2,uVar4,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar1 + 8);
          uVar10 = *(uint *)(iVar1 + 0xc);
          piVar6 = *(int **)(_UNK_01b3d4c8 + 0x1b3d324);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar8 = *piVar6;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar10 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar10 + 1;
            *(undefined4 *)(iVar3 + uVar10 * 4 + 0x10) = uVar2;
          }
          else {
            func_0x0328f170(iVar1,uVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x0145b14c(&iStack_38,**(undefined4 **)(_UNK_01b3d4cc + 0x1b3d378));
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      if (*(int *)(**(int **)(_UNK_01b3d4d4 + 0x1b3d38c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01b3d964(iVar1,uVar2);
      uVar2 = func_0x02450d78(**(undefined4 **)(_UNK_01b3d4d8 + 0x1b3d3c4),iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x607,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02173e78(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.ScoreBoardActivity$$GetTrackCurrentMilestoneQueue RVA 0x1b2d4e0 =====

int FUN_01b3d4e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar3 = 0;
  iVar1 = func_0x0229f06c(0x89f7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89f7,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (0 < iVar1) {
    if (*(int *)(param_1 + 0x70) < iVar1) {
      iVar3 = *(int *)(param_1 + 0x70) + 1;
    }
    else {
      iVar3 = iVar1 + *(int *)(param_1 + 0x74) + 1;
    }
  }
  return iVar3;
}



// ===== FAT.ScoreBoardActivity$$TrackTapGetToken RVA 0x1b2d564 =====

void FUN_01b3d564(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = func_0x0229f06c(0x8ab7,0);
  if (iVar1 == 0) {
    uVar2 = FUN_01b3d4e0(param_1);
    uVar3 = FUN_01b3cf04(param_1);
    uVar4 = FUN_01b3cf58(param_1);
    uVar5 = FUN_01b3d0a4(param_1);
    func_0x0230e070(param_1,uVar2,uVar3,uVar4,param_4,uVar5,param_2,param_3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8ab7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$FAT.IBoardActivityOutput.TrackOrderGetItem RVA 0x1b2d620 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3d620(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01b3d79c + 0x1b3d640);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3d7a0 + 0x1b3d658));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d7a4 + 0x1b3d664));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8ab8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dbb000(iVar1,0);
    uVar7 = 0;
    if (iVar1 != 0) {
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar7 = 0;
      if (iVar1 != 0) {
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x03507d38(&uStack_30,*(undefined4 *)(iVar1 + 8),
                        **(undefined4 **)(_UNK_01b3d7a8 + 0x1b3d720));
        uVar7 = uStack_2c;
      }
    }
    uVar2 = FUN_01b3d4e0(param_1);
    uVar3 = FUN_01b3cf04(param_1);
    uVar4 = FUN_01b3cf58(param_1);
    uVar5 = FUN_01b3d0a4(param_1);
    func_0x0230ded0(param_1,uVar2,uVar3,uVar4,uVar7,uVar5,param_2,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8ab8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$GetTrackMilestoneQueue RVA 0x1b2d7ac =====

int FUN_01b3d7ac(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = func_0x0229f06c(0x600,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (0 < iVar1) {
      if (param_2 < iVar1) {
        iVar2 = param_2 + 1;
      }
      else {
        iVar2 = param_3 + iVar1 + 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x600,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return iVar2;
}



// ===== FAT.ScoreBoardActivity$$BuildTrackRewardInfo RVA 0x1b2d83c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3d83c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b3d940 + 0x1b3d850);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3d944 + 0x1b3d864));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d948 + 0x1b3d870));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d94c + 0x1b3d87c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3d950 + 0x1b3d888));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a7a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a7a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b3d954 + 0x1b3d8e0));
  func_0x0328e950(uVar5,**(undefined4 **)(_UNK_01b3d958 + 0x1b3d8f4));
  if (*(int *)(**(int **)(_UNK_01b3d95c + 0x1b3d908) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01b3d964(uVar5,param_1);
  (*(code *)&UNK_04672c80)(**(undefined4 **)(_UNK_01b3d960 + 0x1b3d938),uVar5,0);
  return;
}



// ===== FAT.ScoreBoardActivity$$AppendRewardInfo RVA 0x1b2d964 =====

/* WARNING: Removing unreachable block (ram,0x01b3dcfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3d964(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01b3ddd8 + 0x1b3d980);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3dddc + 0x1b3d994));
    func_0x01384978(*(undefined4 *)(_UNK_01b3dde0 + 0x1b3d9a0));
    func_0x01384978(*(undefined4 *)(_UNK_01b3dde4 + 0x1b3d9ac));
    func_0x01384978(*(undefined4 *)(_UNK_01b3dde8 + 0x1b3d9b8));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ddec + 0x1b3d9c4));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ddf0 + 0x1b3d9d0));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ddf4 + 0x1b3d9dc));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x608,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x608,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar7,0,0);
    return;
  }
  if (param_1 != 0 && param_2 != (int *)0x0) {
    iVar1 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01b3ddf8 + 0x1b3da54)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01b3da9c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01b3ddf8 + 0x1b3da54),0);
LAB_01b3da9c:
    piVar5 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
    piVar12 = *(int **)(_UNK_01b3ddfc + 0x1b3dabc);
    piVar8 = *(int **)(_UNK_01b3de00 + 0x1b3dac4);
LAB_01b3dac0:
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01b3db1c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar12,0);
LAB_01b3db1c:
    iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
    if (iVar1 != 0) {
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar8) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01b3db90;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar8,0);
LAB_01b3db90:
      iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
      if (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 8);
        iVar9 = iVar3;
        if (0 < iVar3) {
          iVar9 = *(int *)(iVar1 + 0x10);
        }
        if (0 < iVar9) {
          puVar2 = *(undefined4 **)(_UNK_01b3de04 + 0x1b3dbd0);
          iStack_28 = iVar3;
          uVar11 = func_0x01384abc(*puVar2,&iStack_28);
          uStack_2c = *(undefined4 *)(iVar1 + 0x10);
          uVar7 = func_0x01384abc(*puVar2,&uStack_2c);
          uVar11 = func_0x0244f690(**(undefined4 **)(_UNK_01b3de08 + 0x1b3dc04),uVar11,uVar7,0);
          iVar1 = *(int *)(param_1 + 8);
          uVar4 = *(uint *)(param_1 + 0xc);
          piVar6 = *(int **)(_UNK_01b3de0c + 0x1b3dc38);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          iVar9 = *piVar6;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (uVar4 < *(uint *)(iVar1 + 0xc)) {
            *(uint *)(param_1 + 0xc) = uVar4 + 1;
            *(undefined4 *)(iVar1 + uVar4 * 4 + 0x10) = uVar11;
          }
          else {
            func_0x0328f170(param_1,uVar11,
                            *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      goto LAB_01b3dac0;
    }
    if (piVar5 != (int *)0x0) {
      iVar1 = *piVar5;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01b3de10 + 0x1b3dc9c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_01b3dce4;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01b3de10 + 0x1b3dc9c),0);
LAB_01b3dce4:
      (*(code *)*puVar2)(piVar5,puVar2[1]);
    }
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$get_Visual RVA 0x1b2de18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3de18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8ab9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8ab9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7f44 + 0x21c7e64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7f48 + 0x21c7e78),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7f4c + 0x21c7f34));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x120);
}



// ===== FAT.ScoreBoardActivity$$get_VisualMain RVA 0x1b2de6c =====

void FUN_01b3de6c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x120);
  *param_1 = *(undefined4 *)(param_2 + 0x11c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity$$get_VisualMilestone RVA 0x1b2de80 =====

void FUN_01b3de80(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x128);
  *param_1 = *(undefined4 *)(param_2 + 0x124);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity$$get_VisualHandbook RVA 0x1b2de94 =====

void FUN_01b3de94(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x130);
  *param_1 = *(undefined4 *)(param_2 + 300);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity$$get_VisualLoading RVA 0x1b2dea8 =====

void FUN_01b3dea8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x138);
  *param_1 = *(undefined4 *)(param_2 + 0x134);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity$$get_GuideRes RVA 0x1b2debc =====

void FUN_01b3debc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x140);
  *param_1 = *(undefined4 *)(param_2 + 0x13c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity$$get_VisualTokenTip RVA 0x1b2ded0 =====

void FUN_01b3ded0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x148);
  *param_1 = *(undefined4 *)(param_2 + 0x144);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity$$get_StartPopup RVA 0x1b2dee4 =====

void FUN_01b3dee4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x154);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity$$get_EndPopup RVA 0x1b2def8 =====

void FUN_01b3def8(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x160);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity$$get_ConvertPopup RVA 0x1b2df0c =====

void FUN_01b3df0c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x16c);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity$$Open RVA 0x1b2df20 =====

void FUN_01b3df20(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x8aba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8aba,0);
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
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if ((iVar1 == 0) ||
     (uVar5 = FUN_01b2ea38(param_1), (int)(uint)((uint)uVar5 < 3) <= (int)((ulonglong)uVar5 >> 0x20)
     )) {
    uStack_18 = 0;
    uStack_14 = 0;
    func_0x02b57d14(param_1,param_1[0x4d],param_1[0x4e],param_1[0x47]);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$ResEnumerate RVA 0x1b2dfcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b3dfcc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b3e078 + 0x1b3dfe0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3e07c + 0x1b3dff4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8abb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8abb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021c7568 + 0x21c7488);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b3e080 + 0x1b3e04c));
  func_0x01b3f2d8(iVar1,0xfffffffe,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$TryPopup RVA 0x1b2e084 =====

void FUN_01b3e084(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8acc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8acc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    func_0x021c7f50(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = func_0x0229f06c(0x8a6f,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xab) == '\0') {
      iVar1 = *(int *)(param_1 + 0x150);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02b61550(iVar1,0);
      if (iVar1 != 0) {
        uStack_20 = *(undefined8 *)(param_1 + 0x14c);
        func_0x02b64cc4(&uStack_20,0,0,0);
        *(undefined1 *)(param_1 + 0xab) = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8a6f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity$$.cctor RVA 0x1b2e0fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3e0fc(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01b3e154 + 0x1b3e10c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3e158 + 0x1b3e120));
    *pcVar2 = '\x01';
  }
  puVar1 = *(undefined4 **)(**(int **)(_UNK_01b3e15c + 0x1b3e144) + 0x5c);
  *puVar1 = 0x3dcccccd;
  puVar1[1] = 0x3e4ccccd;
  return;
}



// ===== FAT.ScoreBoardActivity$$<>iFixBaseProxy_get_Valid RVA 0x1b2e160 =====

void FUN_01b3e160(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  iVar1 = func_0x0229f06c(0x127,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x127,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02b4cb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
  return;
}



// ===== FAT.ScoreBoardActivity$$<>iFixBaseProxy_SetupFresh RVA 0x1b2e168 =====

void FUN_01b3e168(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x1f0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f0,0);
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



// ===== FAT.ScoreBoardActivity$$<>iFixBaseProxy_WhenEnd RVA 0x1b2e170 =====

void FUN_01b3e170(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x1a2,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1a2,0);
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



// ===== FAT.ScoreBoardActivity$$<>iFixBaseProxy_WhenReset RVA 0x1b2e178 =====

void FUN_01b3e178(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x13ac,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x13ac,0);
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



// ===== FAT.ScoreBoardActivity$$<>iFixBaseProxy_get_Visual RVA 0x1b2e180 =====

undefined4 FUN_01b3e180(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ScoreBoardActivity$$<>iFixBaseProxy_ResEnumerate RVA 0x1b2e188 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b3e188(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x3189,0);
  if (iVar1 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02b61df8 + 0x2b61d5c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61dfc + 0x2b61d70),0);
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x1395,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b61e00 + 0x2b61dc8));
      func_0x04874ed4(iVar1,0);
      *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
      uVar5 = func_0x048799ac(0);
      *(undefined4 *)(iVar1 + 0x14) = uVar5;
      *(int **)(iVar1 + 0x18) = param_1;
      return iVar1;
    }
    iVar1 = func_0x0229f13c(0x1395,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3189,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_021c7568 + 0x21c7488);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
  return iVar1;
}



// ===== FAT.ScoreBoardActivity$$<>iFixBaseProxy_TryPopup RVA 0x1b2e190 =====

void FUN_01b3e190(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1aa2,0,param_3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1aa2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardTokenChangeInfo$$Set RVA 0x1b2e198 =====

void FUN_01b3e198(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5ed,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    *(undefined4 *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0x14) = param_5;
    *(undefined4 *)(param_1 + 0x18) = param_6;
  }
  else {
    iVar1 = func_0x0229f13c(0x5ed,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218fcac(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardTokenChangeInfo$$Clear RVA 0x1b2e22c =====

void FUN_01b3e22c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a6a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a6a,0);
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
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardTokenChangeInfo$$.ctor RVA 0x1b2e290 =====

void FUN_01b3e290(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardSpawnItemInfo$$get_IsInRewardBox RVA 0x1b2e298 =====

undefined4 FUN_01b3e298(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8acd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8acd,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (uVar3 = 0, *(int *)(param_1 + 0x1c) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardSpawnItemInfo$$get_IsPendingReward RVA 0x1b2e308 =====

uint FUN_01b3e308(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8ace,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar3 = (uint)(*(int *)(param_1 + 0x1c) == 0);
    }
    return uVar3;
  }
  iVar1 = func_0x0229f13c(0x8ace,0);
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
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  uVar3 = func_0x0245496c(&uStack_30,0,0);
  return uVar3;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardSpawnItemInfo$$Set RVA 0x1b2e374 =====

void FUN_01b3e374(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x5fc,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    *(int *)(param_1 + 0x10) = param_4;
    if (param_4 == 0) {
      uStack_2c = 0;
    }
    else {
      func_0x0210cd7c(&uStack_30,param_4,0);
      uVar2 = uStack_30;
    }
    *(undefined4 *)(param_1 + 0x20) = param_6;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 0x18) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1c) = param_5;
  }
  else {
    iVar1 = func_0x0229f13c(0x5fc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02190480(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardSpawnItemInfo$$.ctor RVA 0x1b2e444 =====

void FUN_01b3e444(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardUseTokenInfo$$Begin RVA 0x1b2e44c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3e44c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01b3e560 + 0x1b3e46c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3e564 + 0x1b3e490));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x89ee,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    *(undefined4 *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0x14) = param_5;
    *(undefined4 *)(param_1 + 0x18) = param_6;
    *(undefined4 *)(param_1 + 0x1c) = param_7;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar2) {
      (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar2,0);
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x89ee,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022408a8(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardUseTokenInfo$$Clear RVA 0x1b2e568 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3e568(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01b3e63c + 0x1b3e57c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3e640 + 0x1b3e590));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a6b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a6b,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
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



// ===== FAT.ScoreBoardActivity.ScoreBoardUseTokenInfo$$.ctor RVA 0x1b2e644 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3e644(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01b3e6bc + 0x1b3e658);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3e6c0 + 0x1b3e66c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3e6c4 + 0x1b3e678));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b3e6c8 + 0x1b3e68c));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01b3e6cc + 0x1b3e6a0));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardMilestoneCompleteInfo$$Set RVA 0x1b2e6d0 =====

/* WARNING: Possible PIC construction at 0x01b3e7e0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3e6d0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01b3e834 + 0x1b3e6f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3e838 + 0x1b3e714));
    func_0x01384978(*(undefined4 *)(_UNK_01b3e83c + 0x1b3e720));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02190208(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = param_7;
  *(undefined4 *)(param_1 + 0x20) = param_8;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined1 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar3 < 1) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar3 < 1) {
      return;
    }
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  (*(code *)&SUB_0484e5ec)(uVar2,0,iVar3,0);
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardMilestoneCompleteInfo$$.ctor RVA 0x1b2e840 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3e840(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01b3e8fc + 0x1b3e854);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3e900 + 0x1b3e868));
    func_0x01384978(*(undefined4 *)(_UNK_01b3e904 + 0x1b3e874));
    func_0x01384978(*(undefined4 *)(_UNK_01b3e908 + 0x1b3e880));
    func_0x01384978(*(undefined4 *)(_UNK_01b3e90c + 0x1b3e88c));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b3e910 + 0x1b3e8a0));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01b3e914 + 0x1b3e8b4));
  puVar2 = *(undefined4 **)(_UNK_01b3e918 + 0x1b3e8c8);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01b3e91c + 0x1b3e8e0));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardMilestoneProgressInfo$$Begin RVA 0x1b2e920 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3e920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01b3ea70 + 0x1b3e940);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3ea74 + 0x1b3e958));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f1,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    if (param_6 == 0) {
      uStack_30 = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      uStack_2c = 0;
    }
    else {
      uVar2 = func_0x0210e2d4(param_6,0);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(int *)(param_1 + 0x10) = param_6;
      func_0x0210cd7c(&uStack_30,param_6,0);
    }
    iVar1 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x14) = uStack_30;
    *(undefined4 *)(param_1 + 0x18) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    *(undefined4 *)(param_1 + 0x20) = param_4;
    *(undefined4 *)(param_1 + 0x24) = param_5;
    *(undefined4 *)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x2c) = param_4;
    *(undefined4 *)(param_1 + 0x30) = param_5;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218fcac(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardMilestoneProgressInfo$$End RVA 0x1b2ea78 =====

void FUN_01b3ea78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x610,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = param_3;
    *(undefined4 *)(param_1 + 0x30) = param_4;
  }
  else {
    iVar1 = func_0x0229f13c(0x610,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardMilestoneProgressInfo$$Clear RVA 0x1b2eaf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3eaf4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_01b3ebcc + 0x1b3eb08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3ebd0 + 0x1b3eb1c));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x8a6c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8a6c,0);
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
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar2 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (0 < iVar5) {
    (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar2 + 8),0,iVar5,0);
    return;
  }
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardMilestoneProgressInfo$$.ctor RVA 0x1b2ebd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3ebd4(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01b3ec4c + 0x1b3ebe8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3ec50 + 0x1b3ebfc));
    func_0x01384978(*(undefined4 *)(_UNK_01b3ec54 + 0x1b3ec08));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b3ec58 + 0x1b3ec1c));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01b3ec5c + 0x1b3ec30));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardCloudUnlockInfo$$Set RVA 0x1b2ec60 =====

void FUN_01b3ec60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x8a30,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    *(undefined4 *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0x14) = param_5;
    *(int *)(param_1 + 0x18) = param_6;
    if (param_6 == 0) {
      uStack_2c = 0;
    }
    else {
      func_0x0210cd7c(&uStack_30,param_6,0);
      uVar2 = uStack_30;
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = uStack_2c;
  }
  else {
    iVar1 = func_0x0229f13c(0x8a30,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218fcac(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardCloudUnlockInfo$$Clear RVA 0x1b2ed28 =====

void FUN_01b3ed28(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a6d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a6d,0);
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
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardCloudUnlockInfo$$.ctor RVA 0x1b2ed8c =====

void FUN_01b3ed8c(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardHandbookUnlockInfo$$Set RVA 0x1b2ed94 =====

void FUN_01b3ed94(int param_1,int param_2)

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
  undefined4 uStack_18;
  undefined4 in_stack_ffffffec;
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x8a91,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a91,0);
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
  if (param_2 != 0) {
    uVar4 = func_0x0210e2d4(param_2,0);
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(int *)(param_1 + 0xc) = param_2;
  if (param_2 == 0) {
    uStack_18 = 0;
    in_stack_ffffffec = 0;
  }
  else {
    func_0x0210cd7c(&uStack_18,param_2,0);
  }
  *(undefined4 *)(param_1 + 0x10) = uStack_18;
  *(undefined4 *)(param_1 + 0x14) = in_stack_ffffffec;
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardHandbookUnlockInfo$$Clear RVA 0x1b2ee58 =====

void FUN_01b3ee58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8a6e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a6e,0);
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
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}



// ===== FAT.ScoreBoardActivity.ScoreBoardHandbookUnlockInfo$$.ctor RVA 0x1b2eeb4 =====

void FUN_01b3eeb4(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ScoreBoardActivity.<>c$$.cctor RVA 0x1b2eebc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3eebc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01b3ef14 + 0x1b3eecc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3ef18 + 0x1b3eee0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01b3ef1c + 0x1b3eef4);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity.<>c$$.ctor RVA 0x1b2ef20 =====

void FUN_01b3ef20(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ScoreBoardActivity.<>c$$<_TryUseToken>b__281_0 RVA 0x1b2ef28 =====

undefined4 FUN_01b3ef28(void)

{
  undefined4 in_r3;
  
  return in_r3;
}



// ===== FAT.ScoreBoardActivity.<CoDelayMilestoneItemReward>d__216$$.ctor RVA 0x1b2ef30 =====

void FUN_01b3ef30(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ScoreBoardActivity.<CoDelayMilestoneItemReward>d__216$$System.IDisposable.Dispose RVA 0x1b2ef4c =====

void FUN_01b3ef4c(void)

{
  return;
}



// ===== FAT.ScoreBoardActivity.<CoDelayMilestoneItemReward>d__216$$MoveNext RVA 0x1b2ef50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3ef50(int param_1)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_38;
  float fStack_34;
  
  pcVar2 = (char *)(_UNK_01b3f110 + 0x1b3ef6c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3f114 + 0x1b3ef80));
    func_0x01384978(*(undefined4 *)(_UNK_01b3f118 + 0x1b3ef8c));
    func_0x01384978(*(undefined4 *)(_UNK_01b3f11c + 0x1b3ef98));
    func_0x01384978(*(undefined4 *)(_UNK_01b3f120 + 0x1b3efa4));
    *pcVar2 = '\x01';
  }
  fVar9 = _UNK_01b3f10c;
  uVar6 = 0;
  if (*(int *)(param_1 + 8) == 1) {
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    fVar9 = *(float *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    goto LAB_01b3f050;
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    while( true ) {
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar5 + 0xc) <= iVar3) {
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0x10);
      uVar6 = *(undefined4 *)(param_1 + 0x20);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02450d88(&uStack_38,iVar3,uVar6,**(undefined4 **)(_UNK_01b3f124 + 0x1b3f018));
      fVar1 = _UNK_01b3f10c;
      *(float *)(param_1 + 0x28) = fStack_34;
      *(undefined4 *)(param_1 + 0x24) = uStack_38;
      fVar10 = fStack_34 - fVar9;
      if (fStack_34 - fVar9 < 0.0) {
        fVar10 = fVar1;
      }
      uVar6 = uStack_38;
      if (0.0 < fVar10) break;
LAB_01b3f050:
      uVar8 = *(undefined4 *)(param_1 + 0x14);
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      uVar7 = *(undefined4 *)(param_1 + 0x1c);
      if (*(int *)(**(int **)(_UNK_01b3f12c + 0x1b3f05c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0206de24(uVar6,uVar8,uVar4,uVar7,0,0,0,0);
      *(undefined4 *)(param_1 + 0x24) = 0;
      iVar3 = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x20) = iVar3;
    }
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01b3f128 + 0x1b3f0dc));
    func_0x0245031c(uVar4,fVar10,0);
    uVar6 = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return uVar6;
}



// ===== FAT.ScoreBoardActivity.<CoDelayMilestoneItemReward>d__216$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1b2f130 =====

undefined4 FUN_01b3f130(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ScoreBoardActivity.<CoDelayMilestoneItemReward>d__216$$System.Collections.IEnumerator.Reset RVA 0x1b2f138 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3f138(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01b3f174 + 0x1b3f148));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01b3f178 + 0x1b3f164));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.ScoreBoardActivity.<CoDelayMilestoneItemReward>d__216$$System.Collections.IEnumerator.get_Current RVA 0x1b2f17c =====

undefined4 FUN_01b3f17c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ScoreBoardActivity.<CoPlaySound>d__215$$.ctor RVA 0x1b2f184 =====

void FUN_01b3f184(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ScoreBoardActivity.<CoPlaySound>d__215$$System.IDisposable.Dispose RVA 0x1b2f1a0 =====

void FUN_01b3f1a0(void)

{
  return;
}



// ===== FAT.ScoreBoardActivity.<CoPlaySound>d__215$$MoveNext RVA 0x1b2f1a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3f1a4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_01b3f278 + 0x1b3f1b8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b3f27c + 0x1b3f1cc));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    func_0x01bf3284(iVar3,uVar2,0);
  }
  else {
    uVar5 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_01b3f280 + 0x1b3f1fc);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x01384be4(*puVar1);
      func_0x0245031c(uVar2,uVar5,0);
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar5;
}



// ===== FAT.ScoreBoardActivity.<CoPlaySound>d__215$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1b2f284 =====

undefined4 FUN_01b3f284(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ScoreBoardActivity.<CoPlaySound>d__215$$System.Collections.IEnumerator.Reset RVA 0x1b2f28c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3f28c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01b3f2c8 + 0x1b3f29c));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01b3f2cc + 0x1b3f2b8));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.ScoreBoardActivity.<CoPlaySound>d__215$$System.Collections.IEnumerator.get_Current RVA 0x1b2f2d0 =====

undefined4 FUN_01b3f2d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$.ctor RVA 0x1b2f2d8 =====

void FUN_01b3f2d8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x0245057c(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$System.IDisposable.Dispose RVA 0x1b2f300 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b3f300(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0xfffffff6:
  case 8:
    break;
  case 0xfffffff7:
  case 7:
    pcVar5 = &UNK_01b40984 + _UNK_01b40a24;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b40998 + _UNK_01b40a28));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b409c4 + _UNK_01b40a2c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b40a10;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b409c4 + _UNK_01b40a2c),0);
code_r0x01b40a10:
                    /* WARNING: Could not recover jumptable at 0x01b40a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff8:
  case 6:
    pcVar5 = &UNK_01b408c4 + _UNK_01b40964;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b408d8 + _UNK_01b40968));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b40904 + _UNK_01b4096c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b40950;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b40904 + _UNK_01b4096c),0);
code_r0x01b40950:
                    /* WARNING: Could not recover jumptable at 0x01b40960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff9:
  case 5:
    pcVar5 = &UNK_01b40804 + _UNK_01b408a4;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b40818 + _UNK_01b408a8));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b40844 + _UNK_01b408ac)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b40890;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b40844 + _UNK_01b408ac),0);
code_r0x01b40890:
                    /* WARNING: Could not recover jumptable at 0x01b408a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffa:
  case 4:
    pcVar5 = &UNK_01b40744 + _UNK_01b407e4;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b40758 + _UNK_01b407e8));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b40784 + _UNK_01b407ec)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b407d0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b40784 + _UNK_01b407ec),0);
code_r0x01b407d0:
                    /* WARNING: Could not recover jumptable at 0x01b407e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffb:
  case 3:
    pcVar5 = &UNK_01b40684 + _UNK_01b40724;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b40698 + _UNK_01b40728));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b406c4 + _UNK_01b4072c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b40710;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b406c4 + _UNK_01b4072c),0);
code_r0x01b40710:
                    /* WARNING: Could not recover jumptable at 0x01b40720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffc:
  case 2:
    pcVar5 = &UNK_01b405c4 + _UNK_01b40664;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b405d8 + _UNK_01b40668));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b40604 + _UNK_01b4066c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b40650;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b40604 + _UNK_01b4066c),0);
code_r0x01b40650:
                    /* WARNING: Could not recover jumptable at 0x01b40660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffd:
  case 1:
    pcVar5 = &UNK_01b40504 + _UNK_01b405a4;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b40518 + _UNK_01b405a8));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b40544 + _UNK_01b405ac)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b40590;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b40544 + _UNK_01b405ac),0);
code_r0x01b40590:
                    /* WARNING: Could not recover jumptable at 0x01b405a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffe:
  case 0xffffffff:
  case 0:
    return;
  default:
    return;
  }
  pcVar5 = &UNK_01b40a44 + _UNK_01b40ae4;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(&UNK_01b40a58 + _UNK_01b40ae8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_01b40a84 + _UNK_01b40aec)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x01b40ad0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b40a84 + _UNK_01b40aec),0);
code_r0x01b40ad0:
                    /* WARNING: Could not recover jumptable at 0x01b40ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$MoveNext RVA 0x1b2f38c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b3f38c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  int iStack_20;
  
  pcVar6 = (char *)(_UNK_01b40398 + 0x1b3f3a4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b403b0 + 0x1b3f3b8));
    func_0x01384978(*(undefined4 *)(_UNK_01b403bc + 0x1b3f3c4));
    func_0x01384978(*(undefined4 *)(_UNK_01b403c8 + 0x1b3f3d0));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  piVar8 = *(int **)(param_1 + 0x18);
  uStack_28 = 0;
  iStack_20 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar8 + 0x108))(piVar8,*(undefined4 *)(*piVar8 + 0x10c));
    if (iVar1 == 0) {
      return 0;
    }
    iStack_20 = piVar8[0x55];
    uStack_28 = *(undefined8 *)(piVar8 + 0x53);
    piVar5 = (int *)func_0x02b64af8(&uStack_28,0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b3f49c + _UNK_01b40490)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b3f564;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01b3f49c + _UNK_01b40490),0);
code_r0x01b3f564:
    piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    *(int **)(param_1 + 0x1c) = piVar5;
    break;
  case 1:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    break;
  case 2:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    goto code_r0x01b3f74c;
  case 3:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffb;
    goto code_r0x01b3f910;
  case 4:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffa;
    goto code_r0x01b3fad8;
  case 5:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff9;
    goto code_r0x01b3fca0;
  case 6:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff8;
    goto code_r0x01b3fe68;
  case 7:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff7;
    goto code_r0x01b40030;
  case 8:
    piVar8 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff6;
    goto code_r0x01b40208;
  default:
    goto LAB_01b4032c;
  }
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_01b3f5a0 + _UNK_01b40498)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x01b3f5e8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01b3f5a0 + _UNK_01b40498),0);
code_r0x01b3f5e8:
  iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01b404f0(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iStack_20 = piVar8[0x58];
    uStack_28 = *(undefined8 *)(piVar8 + 0x56);
    piVar5 = (int *)func_0x02b64af8(&uStack_28,0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b3f6b4 + _UNK_01b4049c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b3f72c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01b3f6b4 + _UNK_01b4049c),0);
code_r0x01b3f72c:
    piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01b3f74c:
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b3f768 + _UNK_01b404a4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b3f7b0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01b3f768 + _UNK_01b404a4),0);
code_r0x01b3f7b0:
    iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
    if (iVar1 == 0) {
      func_0x01b405b0(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iStack_20 = piVar8[0x5b];
      uStack_28 = *(undefined8 *)(piVar8 + 0x59);
      piVar5 = (int *)func_0x02b64af8(&uStack_28,0);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(&UNK_01b3f87c + _UNK_01b404a8)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto code_r0x01b3f8f0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01b3f87c + _UNK_01b404a8),0);
code_r0x01b3f8f0:
      piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffb;
      *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01b3f910:
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(&UNK_01b3f92c + _UNK_01b404b0)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto code_r0x01b3f974;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01b3f92c + _UNK_01b404b0),0);
code_r0x01b3f974:
      iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
      if (iVar1 == 0) {
        func_0x01b40670(param_1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iStack_30 = piVar8[0x47];
        iStack_2c = piVar8[0x48];
        piVar5 = (int *)func_0x02b646a0(&iStack_30,0);
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar5;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(&UNK_01b3fa44 + _UNK_01b404b4)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
              goto code_r0x01b3fab8;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01b3fa44 + _UNK_01b404b4),0);
code_r0x01b3fab8:
        piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
        *(undefined4 *)(param_1 + 8) = 0xfffffffa;
        *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01b3fad8:
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar5;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(&UNK_01b3faf4 + _UNK_01b404bc)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
              goto code_r0x01b3fb3c;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01b3faf4 + _UNK_01b404bc),0);
code_r0x01b3fb3c:
        iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
        if (iVar1 == 0) {
          func_0x01b40730(param_1);
          *(undefined4 *)(param_1 + 0x1c) = 0;
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iStack_30 = piVar8[0x49];
          iStack_2c = piVar8[0x4a];
          piVar5 = (int *)func_0x02b646a0(&iStack_30,0);
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar5;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar4[-1] == **(int **)(&UNK_01b3fc0c + _UNK_01b404c0)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                goto code_r0x01b3fc80;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01b3fc0c + _UNK_01b404c0),0)
          ;
code_r0x01b3fc80:
          piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
          *(undefined4 *)(param_1 + 8) = 0xfffffff9;
          *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01b3fca0:
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar5;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar4[-1] == **(int **)(&UNK_01b3fcbc + _UNK_01b404c8)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                goto code_r0x01b3fd04;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01b3fcbc + _UNK_01b404c8),0)
          ;
code_r0x01b3fd04:
          iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
          if (iVar1 == 0) {
            func_0x01b407f0(param_1);
            *(undefined4 *)(param_1 + 0x1c) = 0;
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iStack_30 = piVar8[0x4b];
            iStack_2c = piVar8[0x4c];
            piVar5 = (int *)func_0x02b646a0(&iStack_30,0);
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar5;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar4[-1] == **(int **)(&UNK_01b3fdd4 + _UNK_01b404cc)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                  goto code_r0x01b3fe48;
                }
                uVar3 = uVar3 - 1;
                piVar4 = piVar4 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar5,**(int **)(&UNK_01b3fdd4 + _UNK_01b404cc),0);
code_r0x01b3fe48:
            piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
            *(undefined4 *)(param_1 + 8) = 0xfffffff8;
            *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01b3fe68:
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar5;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar4[-1] == **(int **)(&UNK_01b3fe84 + _UNK_01b404d4)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                  goto code_r0x01b3fecc;
                }
                uVar3 = uVar3 - 1;
                piVar4 = piVar4 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar5,**(int **)(&UNK_01b3fe84 + _UNK_01b404d4),0);
code_r0x01b3fecc:
            iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
            if (iVar1 == 0) {
              func_0x01b408b0(param_1);
              *(undefined4 *)(param_1 + 0x1c) = 0;
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iStack_30 = piVar8[0x4d];
              iStack_2c = piVar8[0x4e];
              piVar5 = (int *)func_0x02b646a0(&iStack_30,0);
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar5;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar4[-1] == **(int **)(&UNK_01b3ff9c + _UNK_01b404d8)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                    goto code_r0x01b40010;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar5,**(int **)(&UNK_01b3ff9c + _UNK_01b404d8),0);
code_r0x01b40010:
              piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
              *(undefined4 *)(param_1 + 8) = 0xfffffff7;
              *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01b40030:
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar5;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar4[-1] == **(int **)(&UNK_01b4004c + _UNK_01b404e0)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                    goto code_r0x01b40094;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar5,**(int **)(&UNK_01b4004c + _UNK_01b404e0),0);
code_r0x01b40094:
              iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
              if (iVar1 == 0) {
                func_0x01b40970(param_1);
                *(undefined4 *)(param_1 + 0x1c) = 0;
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                (**(code **)(*piVar8 + 0x128))(&iStack_38,piVar8,*(undefined4 *)(*piVar8 + 300));
                iStack_2c = iStack_34;
                iStack_30 = iStack_38;
                piVar8 = (int *)func_0x02b646a0(&iStack_30,0);
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar8;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(&UNK_01b40174 + _UNK_01b404e4)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01b401e8;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar8,**(int **)(&UNK_01b40174 + _UNK_01b404e4),0);
code_r0x01b401e8:
                piVar8 = (int *)(*(code *)*puVar2)(piVar8,puVar2[1]);
                *(undefined4 *)(param_1 + 8) = 0xfffffff6;
                *(int **)(param_1 + 0x1c) = piVar8;
code_r0x01b40208:
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar8;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(&UNK_01b40224 + _UNK_01b404ec)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01b4026c;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar8,**(int **)(&UNK_01b40224 + _UNK_01b404ec),0);
code_r0x01b4026c:
                iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
                if (iVar1 == 0) {
                  func_0x01b40a30(param_1);
                  *(undefined4 *)(param_1 + 0x1c) = 0;
                  return 0;
                }
                piVar8 = *(int **)(param_1 + 0x1c);
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar8;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(&UNK_01b402a4 + _UNK_01b404e8)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01b40300;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar8,**(int **)(&UNK_01b402a4 + _UNK_01b404e8),0);
code_r0x01b40300:
                (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
                uVar7 = 8;
              }
              else {
                piVar8 = *(int **)(param_1 + 0x1c);
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar8;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(&UNK_01b400cc + _UNK_01b404dc)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01b401bc;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar8,**(int **)(&UNK_01b400cc + _UNK_01b404dc),0);
code_r0x01b401bc:
                (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
                uVar7 = 7;
              }
            }
            else {
              piVar8 = *(int **)(param_1 + 0x1c);
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar8;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar5[-1] == **(int **)(&UNK_01b3ff04 + _UNK_01b404d0)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                    goto code_r0x01b3ffe4;
                  }
                  uVar3 = uVar3 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar8,**(int **)(&UNK_01b3ff04 + _UNK_01b404d0),0);
code_r0x01b3ffe4:
              (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
              uVar7 = 6;
            }
          }
          else {
            piVar8 = *(int **)(param_1 + 0x1c);
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar8;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(&UNK_01b3fd3c + _UNK_01b404c4)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto code_r0x01b3fe1c;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar8,**(int **)(&UNK_01b3fd3c + _UNK_01b404c4),0);
code_r0x01b3fe1c:
            (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
            uVar7 = 5;
          }
        }
        else {
          piVar8 = *(int **)(param_1 + 0x1c);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar8;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(&UNK_01b3fb74 + _UNK_01b404b8)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto code_r0x01b3fc54;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01b3fb74 + _UNK_01b404b8),0)
          ;
code_r0x01b3fc54:
          (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
          uVar7 = 4;
        }
      }
      else {
        piVar8 = *(int **)(param_1 + 0x1c);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(&UNK_01b3f9ac + _UNK_01b404ac)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto code_r0x01b3fa8c;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01b3f9ac + _UNK_01b404ac),0);
code_r0x01b3fa8c:
        (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
        uVar7 = 3;
      }
    }
    else {
      piVar8 = *(int **)(param_1 + 0x1c);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_01b3f7e8 + _UNK_01b404a0)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x01b3f8c4;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01b3f7e8 + _UNK_01b404a0),0);
code_r0x01b3f8c4:
      (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
      uVar7 = 2;
    }
    *(undefined4 *)(param_1 + 8) = uVar7;
  }
  else {
    piVar8 = *(int **)(param_1 + 0x1c);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01b3f620 + _UNK_01b40494)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01b3f6fc;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01b3f620 + _UNK_01b40494),0);
code_r0x01b3f6fc:
    (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  uVar7 = 1;
  *(int *)(param_1 + 0xc) = iStack_38;
  *(int *)(param_1 + 0x10) = iStack_34;
LAB_01b4032c:
  return uVar7;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$<>m__Finally1 RVA 0x1b304f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b404f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b405a4 + 0x1b40504);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b405a8 + 0x1b40518));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b405ac + 0x1b40544)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b40590;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b405ac + 0x1b40544),0);
LAB_01b40590:
                    /* WARNING: Could not recover jumptable at 0x01b405a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$<>m__Finally2 RVA 0x1b305b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b405b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b40664 + 0x1b405c4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b40668 + 0x1b405d8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b4066c + 0x1b40604)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b40650;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b4066c + 0x1b40604),0);
LAB_01b40650:
                    /* WARNING: Could not recover jumptable at 0x01b40660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$<>m__Finally3 RVA 0x1b30670 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b40670(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b40724 + 0x1b40684);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b40728 + 0x1b40698));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b4072c + 0x1b406c4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b40710;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b4072c + 0x1b406c4),0);
LAB_01b40710:
                    /* WARNING: Could not recover jumptable at 0x01b40720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$<>m__Finally4 RVA 0x1b30730 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b40730(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b407e4 + 0x1b40744);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b407e8 + 0x1b40758));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b407ec + 0x1b40784)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b407d0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b407ec + 0x1b40784),0);
LAB_01b407d0:
                    /* WARNING: Could not recover jumptable at 0x01b407e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$<>m__Finally5 RVA 0x1b307f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b407f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b408a4 + 0x1b40804);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b408a8 + 0x1b40818));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b408ac + 0x1b40844)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b40890;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b408ac + 0x1b40844),0);
LAB_01b40890:
                    /* WARNING: Could not recover jumptable at 0x01b408a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$<>m__Finally6 RVA 0x1b308b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b408b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b40964 + 0x1b408c4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b40968 + 0x1b408d8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b4096c + 0x1b40904)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b40950;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b4096c + 0x1b40904),0);
LAB_01b40950:
                    /* WARNING: Could not recover jumptable at 0x01b40960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$<>m__Finally7 RVA 0x1b30970 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b40970(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b40a24 + 0x1b40984);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b40a28 + 0x1b40998));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b40a2c + 0x1b409c4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b40a10;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b40a2c + 0x1b409c4),0);
LAB_01b40a10:
                    /* WARNING: Could not recover jumptable at 0x01b40a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$<>m__Finally8 RVA 0x1b30a30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b40a30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b40ae4 + 0x1b40a44);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b40ae8 + 0x1b40a58));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b40aec + 0x1b40a84)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b40ad0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b40aec + 0x1b40a84),0);
LAB_01b40ad0:
                    /* WARNING: Could not recover jumptable at 0x01b40ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x1b30af0 =====

void FUN_01b40af0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$System.Collections.IEnumerator.Reset RVA 0x1b30b04 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b40b04(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01b40b40 + 0x1b40b14));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01b40b44 + 0x1b40b30));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$System.Collections.IEnumerator.get_Current RVA 0x1b30b48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b40b48(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_01b40ba4 + 0x1b40b60);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b40ba8 + 0x1b40b74));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_01b40bac + 0x1b40b90),&uStack_18);
  return;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x1b30bb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b40bb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01b40c50 + 0x1b40bc4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b40c54 + 0x1b40bd8));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b40c58 + 0x1b40c1c));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.ScoreBoardActivity.<ResEnumerate>d__370$$System.Collections.IEnumerable.GetEnumerator RVA 0x1b30c5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_01b40bb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01b40c50 + 0x1b40bc4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b40c54 + 0x1b40bd8));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b40c58 + 0x1b40c1c));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


